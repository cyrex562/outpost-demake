# Notes

## Program API Calls

| API Call | Category | Description |
| -------- | -------- | ----------- |
| GetSaveFileName16 | | |
| InitTask | | |
| Swi | | |
| InitApp | | |
| FatalAppExit | | |
| LoadString | | |
| MakeProcInstance16 | | |
| FindResource16 | | |
| _lcreat16 | | |
| _llseek16 | | |
| _lopen16 | | |
| DOS3Call | | |
| GetPrivateProfileString | | |
| WinExec16 | | |
| Win16_Hread | | |
| _hwrite16 | | |
| SetBkColor16 | | |
| SetMapMode16 | | |
| SetTextColor16 | | |
| LineTo16 | | |
| MoveTo16 | | |
| Ellipse16 | | |
| Rectangle16 | | |
| TextOut16 | | |
| Polygon16 | | |
| Selectobject16 | | |
| CreateDC16 | | |
| CreatePen16 | | |
| CreateSolidBrush16 | | |
| GetCurrentPosition16 | | |
| GetStockObject16 | | |
| GetTextExtent16 | | |
| CreatePalette16 | | |
| StretchDIBits16 | | |
| SetDIBitsToDevice16 | | |
| MoveToEx16 | | |
| PostQuitMessage16 | | |
| MessageBox16 | | |
| GetCursorPos16 | | |
| SetFocus16 | | |
| GetProp16 | | |
| SetProp16 | | |
| ClientToScreen16 | | |
| ScreenToClient16 | | |
| GetWindowRect16 | | |
| GetWindowText16 | | |
| SetWindowText16 | | |
| BeginPaint16 | | |
| CreateWindow16 | | |
| ShowWindow16 | | |
| BringWindowToTop16 | | |
| EnumChildWindows16 | | |
| MoveWindow16 | | |
| RegisterClass16 | | |
| GetDC16 | | |
| GetWindow16 | | |
| SetCursor16 | | |
| ShowCursor16 | | |
| PtInRect16 | | |
| FillRect16 | | |
| FrameRect16 | | |
| DrawIcon16 | | |
| DrawText16 | | |
| CreateDialog16 | | |
| SetDlgItemText16 | | |
| GetDlgItemText16 | | |
| GetDlgItem16 | | |
| SetDlgItemInt16 | | |
| GetDlgItemInt16 | | |
| CheckRadioButton16 | | |
| CheckDlgButton16 | | |
| IsDlgButtonChecked16 | | |
| SendDlgItemMessage16 | | |
| MapDialogRect16 | | |
| DefWindowProc16 | | |
| GetMessage16 | | |
| PostMessage16 | | |
| SendMessage16 | | |
| DispatchMessage16 | | |
| CallWindowProc16 | | |
| UpdateWindow16 | | |
| InvalidateRect16 | | |
| ValidateRect16 | | |
| GetWindowWord16 | | |
| SetWindowWord16 | | |
| GetWindowLong16 | | |
| SetWindowLong16 | | |
| LoadMenu16 | | |
| CheckMenuItem16 | | |
| EnableMenuItem16 | | |
| LoadCursor16 | | |
| LoadIcon16 | | |
| LoadAccelerators16 | | |
| TranslateAccelerators16 | | |
| GetSysColors16 | | |
| SetSysColors16 | | |
| GetNextDlgTabItem16 | | |
| SetWindowPos16 | | |
| GetMenuState16 | | |
| GetDlgCtrlId16 | | |
| SelectPalette16 | | |
| RealizePalette16 | | |
| GetWindowPlacement16 | | |
| GetClassInfo16 | | |
| InsertMenu16 | | |
| ModifyMenu16 | | |
| CreateWindowEx16 | | |
| MciSendCommand16 | | |
| GetOpenFileName16 | | |

## Address Tables

- 1008:051e

    1008:051e  f8  04  08  10       addr         pass1_1008_04f8
    1008:0522  9c  04  08  10       addr         pass1_1008_049c
    1008:0526  6e  01  08  10       addr         mixed_win_sys_op_1008_016e
    1008:052a  d2  04  08  10       addr         pass1_1008_04d2
    1008:052e  94  94  08  10       addr         LAB_1008_9494
    1008:0532  90  94  08  10       addr         LAB_1008_9490

- 1008:380a
- 1008:389a

    1008:380a  aa  37  08  10       addr         pass1_1008_37aa
    1008:380e  14  37  08  10       addr         pass1_1008_3714
    1008:3812  60  97  08  10       addr         create_window_ex_1008_9760
    1008:3816  ae  96  08  10       addr         show_win_1008_96ae
    1008:381a  40  96  08  10       addr         send_msg_1008_9640
    1008:381e  64  96  08  10       addr         set_win_text_1008_9664
    1008:3822  2c  37  08  10       addr         pass1_1008_372c
    1008:3826  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:382a  3c  37  08  10       addr         pass1_1008_373c
    1008:382e  40  37  08  10       addr         pass1_1008_3740
    1008:3832  44  37  08  10       addr         pass1_1008_3744
    1008:3836  48  37  08  10       addr         pass1_1008_3748
    1008:383a  4c  37  08  10       addr         pass1_1008_374c
    1008:383e  c8  97  08  10       addr         begin_end_paint_1008_97c8
    1008:3842  98  96  08  10       addr         destroy_win_1008_9698
    1008:3846  50  37  08  10       addr         pass1_1008_3750
    1008:384a  54  37  08  10       addr         pass1_1008_3754
    1008:384e  60  9c  08  10       addr         pass1_1008_9c60
    1008:3852  58  37  08  10       addr         pass1_1008_3758
    1008:3856  5e  37  08  10       addr         pass1_1008_375e
    1008:385a  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:385e  62  37  08  10       addr         pass1_1008_3762
    1008:3862  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:3866  66  37  08  10       addr         pass1_1008_3766
    1008:386a  6a  37  08  10       addr         FUN_1008_376a
    1008:386e  6e  37  08  10       addr         FUN_1008_376e
    1008:3872  72  37  08  10       addr         FUN_1008_3772
    1008:3876  76  37  08  10       addr         FUN_1008_3776
    1008:387a  7a  37  08  10       addr         pass1_1008_377a
    1008:387e  52  9c  08  10       addr         pass1_1008_9c52
    1008:3882  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:3886  16  9c  08  10       addr         pass1_1008_9c16
    1008:388a  30  9c  08  10       addr         pass1_1008_9c30
    1008:388e  86  9c  08  10       addr         pass1_1008_9c86
    1008:3892  c4  9c  08  10       addr         pass1_1008_9cc4
    1008:3896  e0  9c  08  10       addr         pass1_1008_9ce0
    1008:389a  7e  37  08  10       addr         pass1_1008_377e
    1008:389e  e4  37  08  10       addr         pass1_1008_37e4
    1008:38a2  ea  68  08  10       addr         pass1_1008_68ea
    1008:38a6  f8  0a  08  10       addr         window_op_1008_0af8
    1008:38aa  c6  68  08  10       addr         pass1_1008_68c6
    1008:38ae  40  96  08  10       addr         send_msg_1008_9640
    1008:38b2  64  96  08  10       addr         set_win_text_1008_9664
    1008:38b6  2c  37  08  10       addr         pass1_1008_372c
    1008:38ba  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:38be  3c  37  08  10       addr         pass1_1008_373c
    1008:38c2  40  37  08  10       addr         pass1_1008_3740
    1008:38c6  c0  06  08  10       addr         win_ui_cursor_op_1008_06c0
    1008:38ca  32  09  08  10       addr         pass1_1008_0932
    1008:38ce  84  09  08  10       addr         pass1_1008_0984
    1008:38d2  30  12  08  10       addr         draw_op_1008_1230
    1008:38d6  98  96  08  10       addr         destroy_win_1008_9698
    1008:38da  92  0a  08  10       addr         pass1_1008_0a92
    1008:38de  60  0c  08  10       addr         mixed_win_op_1008_0c60
    1008:38e2  60  9c  08  10       addr         pass1_1008_9c60
    1008:38e6  3c  0a  08  10       addr         unk_win_msg_op_1008_0a3c
    1008:38ea  46  12  08  10       addr         pass1_1008_1246
    1008:38ee  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:38f2  62  37  08  10       addr         pass1_1008_3762
    1008:38f6  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:38fa  66  37  08  10       addr         pass1_1008_3766
    1008:38fe  ba  09  08  10       addr         menu_ui_op_1008_09ba
    1008:3902  4a  6a  08  10       addr         pass1_1008_6a4a
    1008:3906  2e  6b  08  10       addr         pass1_1008_6b2e
    1008:390a  02  6b  08  10       addr         pass1_1008_6b02
    1008:390e  7a  37  08  10       addr         pass1_1008_377a
    1008:3912  52  9c  08  10       addr         pass1_1008_9c52
    1008:3916  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:391a  16  9c  08  10       addr         pass1_1008_9c16
    1008:391e  30  9c  08  10       addr         pass1_1008_9c30
    1008:3922  86  9c  08  10       addr         pass1_1008_9c86
    1008:3926  72  12  08  10       addr         pass1_1008_1272
    1008:392a  aa  12  08  10       addr         pass1_1008_12aa

- 1008:3aa8
- 1008:3ab0

    1008:3aa0  7a  3a  08  10       addr *       pass1_1008_3a7a
    1008:3aa4  10  3a  08  10       addr *       pass1_1008_3a10
    1008:3aa8  14  3a  08  10       addr *       pass1_1008_3a14
    1008:3aac  10  3a  08  10       addr *       pass1_1008_3a10
    1008:3ab0  40  3a  08  10       addr *       pass1_1008_3a40
    1008:3ab4  10  3a  08  10       addr *       pass1_1008_3a10

- 1008:3b46

    1008:3b46  fe  3a  08  10       addr         pass1_1008_3afe
    1008:3b4a  ea  68  08  10       addr         pass1_1008_68ea
    1008:3b4e  60  97  08  10       addr         create_window_ex_1008_9760
    1008:3b52  c6  68  08  10       addr         pass1_1008_68c6
    1008:3b56  40  96  08  10       addr         send_msg_1008_9640
    1008:3b5a  64  96  08  10       addr         set_win_text_1008_9664
    1008:3b5e  2c  37  08  10       addr         pass1_1008_372c
    1008:3b62  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:3b66  3c  37  08  10       addr         pass1_1008_373c
    1008:3b6a  40  37  08  10       addr         pass1_1008_3740
    1008:3b6e  44  37  08  10       addr         pass1_1008_3744
    1008:3b72  48  37  08  10       addr         pass1_1008_3748
    1008:3b76  4c  37  08  10       addr         pass1_1008_374c
    1008:3b7a  c8  97  08  10       addr         begin_end_paint_1008_97c8
    1008:3b7e  98  96  08  10       addr         destroy_win_1008_9698
    1008:3b82  f4  3a  08  10       addr         post_quit_msg_1008_3af4
    1008:3b86  54  37  08  10       addr         pass1_1008_3754
    1008:3b8a  60  9c  08  10       addr         pass1_1008_9c60
    1008:3b8e  58  37  08  10       addr         pass1_1008_3758
    1008:3b92  5e  37  08  10       addr         pass1_1008_375e
    1008:3b96  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:3b9a  62  37  08  10       addr         pass1_1008_3762
    1008:3b9e  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:3ba2  66  37  08  10       addr         pass1_1008_3766
    1008:3ba6  6a  37  08  10       addr         FUN_1008_376a
    1008:3baa  4a  6a  08  10       addr         pass1_1008_6a4a
    1008:3bae  2e  6b  08  10       addr         pass1_1008_6b2e
    1008:3bb2  02  6b  08  10       addr         pass1_1008_6b02
    1008:3bb6  7a  37  08  10       addr         pass1_1008_377a
    1008:3bba  52  9c  08  10       addr         pass1_1008_9c52
    1008:3bbe  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:3bc2  16  9c  08  10       addr         pass1_1008_9c16
    1008:3bc6  30  9c  08  10       addr         pass1_1008_9c30
    1008:3bca  86  9c  08  10       addr         pass1_1008_9c86
    1008:3bce  c4  9c  08  10       addr         pass1_1008_9cc4
    1008:3bd2  e0  9c  08  10       addr         pass1_1008_9ce0

- 1008:3cfc

    1008:3cfc  d6  3c  08  10       addr    pass1_1008_3cd6
    1008:3d00  52  92  40  10       addr    pass1_1040_9252
    1008:3d04  dc  92  40  10       addr    create_window_1040_92dc
    1008:3d08  22  94  40  10       addr    pass1_1040_9422
    1008:3d0c  34  3c  08  10       addr    win_ui_op_1008_3c34
    1008:3d10  fc  94  40  10       addr    draw_text_1040_94fc
    1008:3d14  d2  3c  08  10       addr    FUN_1008_3cd2
    1008:3d18  e6  93  40  10       addr    pass1_1040_93e6
    1008:3d1c  04  94  40  10       addr    send_msg_1040_9404

- 1008:3e38 -> pass1_1008_3e38; function
- 1008:4f1c -> pass1_1008_4ef6g

    1008:4f1c  f6  4e  08  10       addr         pass1_1008_4ef6

- 1008:5632 -> def_win_proc_1008_5632; function
- 1008:5bc0
- 1008:5bc4

    1008:5bc0  6e  5b  08  10       addr         pass1_1008_5b6e
    1008:5bc4  9a  5b  08  10       addr         pass1_1008_5b9a
    1008:5bc8  a6  58  08  10       addr         pass1_1008_58a6
    1008:5bcc  3c  59  08  10       addr         pass1_1008_593c
    1008:5bd0  f4  59  08  10       addr         pass1_1008_59f4
    1008:5bd4  b8  5a  08  10       addr         pass1_1008_5ab8
    1008:5bd8  30  58  08  10       addr         pass1_1008_5830

- 1008:5fc8

    1008:5fc8  a2  5f  08  10       addr         pass1_1008_5fa2
    1008:5fcc  f2  1d  10  10       addr         pass1_1010_1df2
    1008:5fd0  ce  1d  10  10       addr         pass1_1010_1dce
    1008:5fd4  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:6378

    1008:6378  30  63  08  10       addr         pass1_1008_6330
    1008:637c  ea  68  08  10       addr         pass1_1008_68ea
    1008:6380  60  97  08  10       addr         create_window_ex_1008_9760
    1008:6384  c6  68  08  10       addr         pass1_1008_68c6
    1008:6388  40  96  08  10       addr         send_msg_1008_9640
    1008:638c  64  96  08  10       addr         set_win_text_1008_9664
    1008:6390  2c  37  08  10       addr         pass1_1008_372c
    1008:6394  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:6398  3c  37  08  10       addr         pass1_1008_373c
    1008:639c  40  37  08  10       addr         pass1_1008_3740
    1008:63a0  44  37  08  10       addr         pass1_1008_3744
    1008:63a4  48  37  08  10       addr         pass1_1008_3748
    1008:63a8  4c  37  08  10       addr         pass1_1008_374c
    1008:63ac  c0  62  08  10       addr         fill_rect_1008_62c0
    1008:63b0  98  96  08  10       addr         destroy_win_1008_9698
    1008:63b4  50  37  08  10       addr         pass1_1008_3750
    1008:63b8  54  37  08  10       addr         pass1_1008_3754
    1008:63bc  60  9c  08  10       addr         pass1_1008_9c60
    1008:63c0  58  37  08  10       addr         pass1_1008_3758
    1008:63c4  24  63  08  10       addr         FUN_1008_6324
    1008:63c8  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:63cc  62  37  08  10       addr         pass1_1008_3762
    1008:63d0  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:63d4  66  37  08  10       addr         pass1_1008_3766
    1008:63d8  6a  37  08  10       addr         FUN_1008_376a
    1008:63dc  4a  6a  08  10       addr         pass1_1008_6a4a
    1008:63e0  2e  6b  08  10       addr         pass1_1008_6b2e
    1008:63e4  02  6b  08  10       addr         pass1_1008_6b02
    1008:63e8  7a  37  08  10       addr         pass1_1008_377a
    1008:63ec  52  9c  08  10       addr         pass1_1008_9c52
    1008:63f0  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:63f4  16  9c  08  10       addr         pass1_1008_9c16
    1008:63f8  30  9c  08  10       addr         pass1_1008_9c30
    1008:63fc  86  9c  08  10       addr         pass1_1008_9c86
    1008:6400  c4  9c  08  10       addr         pass1_1008_9cc4
    1008:6404  e0  9c  08  10       addr         pass1_1008_9ce0
    1008:6408  8e  62  08  10       addr         destroy_win_1008_628e
    1008:640c  28  63  08  10       addr         FUN_1008_6328
    1008:6410  2c  63  08  10       addr         FUN_1008_632c

- 1008:685a

    1008:685a  34  68  08  10       addr         pass1_1008_6834
    1008:685e  1a  68  08  10       addr         FUN_1008_681a
    1008:6862  22  68  08  10       addr         FUN_1008_6822
    1008:6866  e2  56  08  10       addr         cleanup_palette_1008_56e2
    1008:686a  1e  68  08  10       addr         FUN_1008_681e
    1008:686e  28  68  08  10       addr         FUN_1008_6828
    1008:6872  2e  68  08  10       addr         FUN_1008_682e
    1008:6876  14  68  08  10       addr         FUN_1008_6814

- 1008:6bfc
- 1008:6c8c

    1008:6bfc  b4  6b  08  10       addr         pass1_1008_6bb4
    1008:6c00  ea  68  08  10       addr         pass1_1008_68ea
    1008:6c04  60  97  08  10       addr         create_window_ex_1008_9760
    1008:6c08  c6  68  08  10       addr         pass1_1008_68c6
    1008:6c0c  40  96  08  10       addr         send_msg_1008_9640
    1008:6c10  64  96  08  10       addr         set_win_text_1008_9664
    1008:6c14  2c  37  08  10       addr         pass1_1008_372c
    1008:6c18  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:6c1c  3c  37  08  10       addr         pass1_1008_373c
    1008:6c20  40  37  08  10       addr         pass1_1008_3740
    1008:6c24  44  37  08  10       addr         pass1_1008_3744
    1008:6c28  48  37  08  10       addr         pass1_1008_3748
    1008:6c2c  4c  37  08  10       addr         pass1_1008_374c
    1008:6c30  c8  97  08  10       addr         begin_end_paint_1008_97c8
    1008:6c34  98  96  08  10       addr         destroy_win_1008_9698
    1008:6c38  50  37  08  10       addr         pass1_1008_3750
    1008:6c3c  54  37  08  10       addr         pass1_1008_3754
    1008:6c40  60  9c  08  10       addr         pass1_1008_9c60
    1008:6c44  58  37  08  10       addr         pass1_1008_3758
    1008:6c48  5e  37  08  10       addr         pass1_1008_375e
    1008:6c4c  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:6c50  62  37  08  10       addr         pass1_1008_3762
    1008:6c54  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:6c58  66  37  08  10       addr         pass1_1008_3766
    1008:6c5c  6a  37  08  10       addr         FUN_1008_376a
    1008:6c60  4a  6a  08  10       addr         pass1_1008_6a4a
    1008:6c64  2e  6b  08  10       addr         pass1_1008_6b2e
    1008:6c68  02  6b  08  10       addr         pass1_1008_6b02
    1008:6c6c  7a  37  08  10       addr         pass1_1008_377a
    1008:6c70  52  9c  08  10       addr         pass1_1008_9c52
    1008:6c74  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:6c78  16  9c  08  10       addr         pass1_1008_9c16
    1008:6c7c  30  9c  08  10       addr         pass1_1008_9c30
    1008:6c80  86  9c  08  10       addr         pass1_1008_9c86
    1008:6c84  c4  9c  08  10       addr         pass1_1008_9cc4
    1008:6c88  e0  9c  08  10       addr         pass1_1008_9ce0
    1008:6c8c  5a  6b  08  10       addr         pass1_1008_6b5a

- 1008:8042

    1008:8042  fa  7f  08  10       addr         pass1_1008_7ffa
    1008:8046  ea  68  08  10       addr         pass1_1008_68ea
    1008:804a  60  97  08  10       addr         create_window_ex_1008_9760
    1008:804e  c6  68  08  10       addr         pass1_1008_68c6
    1008:8052  40  96  08  10       addr         send_msg_1008_9640
    1008:8056  64  96  08  10       addr         set_win_text_1008_9664
    1008:805a  2c  37  08  10       addr         pass1_1008_372c
    1008:805e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1008:8062  3c  37  08  10       addr         pass1_1008_373c
    1008:8066  40  37  08  10       addr         pass1_1008_3740
    1008:806a  44  37  08  10       addr         pass1_1008_3744
    1008:806e  48  37  08  10       addr         pass1_1008_3748
    1008:8072  4c  37  08  10       addr         pass1_1008_374c
    1008:8076  c8  97  08  10       addr         begin_end_paint_1008_97c8
    1008:807a  98  96  08  10       addr         destroy_win_1008_9698
    1008:807e  50  37  08  10       addr         pass1_1008_3750
    1008:8082  54  37  08  10       addr         pass1_1008_3754
    1008:8086  60  9c  08  10       addr         pass1_1008_9c60
    1008:808a  58  37  08  10       addr         pass1_1008_3758
    1008:808e  5e  37  08  10       addr         pass1_1008_375e
    1008:8092  4e  9c  08  10       addr         pass1_1008_9c4e
    1008:8096  62  37  08  10       addr         pass1_1008_3762
    1008:809a  4a  9c  08  10       addr         pass1_1008_9c4a
    1008:809e  66  37  08  10       addr         pass1_1008_3766
    1008:80a2  6a  37  08  10       addr         FUN_1008_376a
    1008:80a6  4a  6a  08  10       addr         pass1_1008_6a4a
    1008:80aa  2e  6b  08  10       addr         pass1_1008_6b2e
    1008:80ae  02  6b  08  10       addr         pass1_1008_6b02
    1008:80b2  7a  37  08  10       addr         pass1_1008_377a
    1008:80b6  52  9c  08  10       addr         pass1_1008_9c52
    1008:80ba  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1008:80be  16  9c  08  10       addr         pass1_1008_9c16
    1008:80c2  30  9c  08  10       addr         pass1_1008_9c30
    1008:80c6  86  9c  08  10       addr         pass1_1008_9c86
    1008:80ca  c4  9c  08  10       addr         pass1_1008_9cc4
    1008:80ce  e0  9c  08  10       addr         pass1_1008_9ce0

- 1008:84f2 -> win_sys_op_1008_84f2; function
- 1008:87c8

    1008:87c8  a2  87  08  10       addr         pass1_1008_87a2

- 1008:8e9a

    1008:8e9a  74  8e  08  10       addr         pass1_1008_8e74

- 1008:9170

    1008:9170  4a  91  08  10       addr         pass1_1008_914a

- 1008:9412
- 1008:9416

    1008:9412  c0  93  08  10       addr         pass1_1008_93c0
    1008:9416  ec  93  08  10       addr         pass1_1008_93ec

- 1008:9d2e

    1008:9d2e  02  9d  08  10       addr         pass1_1008_9d02
    1008:9d32  14  37  08  10       addr         pass1_1008_3714

- 1008:9fb2
- 1008:9fca

    1008:9fb2  8c  9f             addr         FUN_1008_9f8c
    1008:9fb4  08  10             addr         switchD_1008:1091::caseD_a7
    1008:9fb6  f2  1d             addr         FUN_1008_1df2
    1008:9fb8  10  10             addr         switchD_1008:1091::caseD_ac
    1008:9fba  ce  1d             addr         LAB_1008_1dcb+3
    1008:9fbc  10  10             addr         switchD_1008:1091::caseD_ac
    1008:9fbe  d4  1d             addr         LAB_1008_1dd2+2
    1008:9fc0  10  10             addr         switchD_1008:1091::caseD_ac
    1008:9fc2  04  4e             addr         LAB_1008_4e04
    1008:9fc4  18  10             addr         switchD_1008:1091::caseD_ae
    1008:9fc6  18  4f             addr         LAB_1008_4f18
    1008:9fc8  18  10             addr         switchD_1008:1091::caseD_ae
    1008:9fca  80  9f             addr         pass1_1008_9f80
    1008:9fcc  08  10             addr         switchD_1008:1091::caseD_a7
    1008:9fce  18  9f             addr         pass1_1008_9f18
    1008:9fd0  08  10             addr         switchD_1008:1091::caseD_a7

- 1008:a230 -> INVALID
- 1008:ad8a
- 1008:ad92

    1008:ad8a  38  ad  08  10       addr         pass1_1008_ad38
    1008:ad8e  0c  ad  08  10       addr         pass1_1008_ad0c
    1008:ad92  64  ad  08  10       addr         pass1_1008_ad64
    1008:ad96  f2  1d  10  10       addr         pass1_1010_1df2
    1008:ad9a  ce  1d  10  10       addr         pass1_1010_1dce
    1008:ad9e  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:af7c

    1008:af7c  56  af  08  10       addr         pass1_1008_af56
    1008:af80  f2  1d  10  10       addr         pass1_1010_1df2
    1008:af84  ce  1d  10  10       addr         pass1_1010_1dce
    1008:af88  d4  1d  10  10       addr         pass1_1010_1dd4
    1008:af8c  04  4e  18  10       addr         create_dc_1018_4e04
    1008:af90  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1008:bdc0
- 1008:bdc4
- 1008:bdc8
- 1008:bdcc
- 1008:bddc

    1008:bdc0  74  bd  08  10       addr         pass1_1008_bd74
    1008:bdc4  4e  bd  08  10       addr         pass1_1008_bd4e
    1008:bdc8  28  bd  08  10       addr         pass1_1008_bd28
    1008:bdcc  02  bd  08  10       addr         pass1_1008_bd02
    1008:bdd0  f2  1d  10  10       addr         pass1_1010_1df2
    1008:bdd4  38  ba  08  10       addr         pass1_1008_ba38
    1008:bdd8  5e  bb  08  10       addr         file_1008_bb5e
    1008:bddc  9a  bd  08  10       addr         pass1_1008_bd9a

- 1008:ca4a

    1008:ca4a  24  ca  08  10       addr         pass1_1008_ca24
    1008:ca4e  f2  1d  10  10       addr         pass1_1010_1df2
    1008:ca52  8e  c9  08  10       addr         pass1_1008_c98e
    1008:ca56  d4  c9  08  10       addr         pass1_1008_c9d4

- 1008:d71a

    1008:d71a  f4  d6  08  10       addr         pass1_1008_d6f4
    1008:d71e  f2  1d  10  10       addr         pass1_1010_1df2
    1008:d722  ce  1d  10  10       addr         pass1_1010_1dce
    1008:d726  d4  1d  10  10       addr         pass1_1010_1dd4
    1008:d72a  c6  ca  08  10       addr         pass1_1008_cac6

- 1008:d780

    1008:d780  5a  d7  08  10       addr         pass1_1008_d75a
    1008:d784  f2  1d  10  10       addr         pass1_1010_1df2
    1008:d788  ce  1d  10  10       addr         pass1_1010_1dce
    1008:d78c  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:d98e

    1008:d98e  68  d9  08  10       addr         pass1_1008_d968
    1008:d992  f2  1d  10  10       addr         pass1_1010_1df2
    1008:d996  ce  1d  10  10       addr         pass1_1010_1dce
    1008:d99a  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:d9fa

    1008:d9fa  d4  d9  08  10       addr         pass1_1008_d9d4
    1008:d9fe  f2  1d  10  10       addr         pass1_1010_1df2
    1008:da02  ce  1d  10  10       addr         pass1_1010_1dce
    1008:da06  d4  1d  10  10       addr         pass1_1010_1dd4
    1008:da0a  04  4e  18  10       addr         create_dc_1018_4e04
    1008:da0e  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1008:dc80 -> pass1_1008_dc80; function

- 1008:dd4a

    1008:dd4a  1e  dd  08  10       addr         pass1_1008_dd1e

- 1008:eaac

    1008:eaac  86  ea  08  10       addr         pass1_1008_ea86
    1008:eab0  f2  1d  10  10       addr         pass1_1010_1df2
    1008:eab4  da  e5  08  10       addr         pass1_1008_e5da
    1008:eab8  0e  e7  08  10       addr         file_1008_e70e

- 1008:eb1a

    1008:eb1a  f4  ea  08  10       addr         pass1_1008_eaf4
    1008:eb1e  f2  1d  10  10       addr         pass1_1010_1df2
    1008:eb22  ce  1d  10  10       addr         pass1_1010_1dce
    1008:eb26  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:ec00

    1008:ec00  da  eb  08  10       addr         pass1_1008_ebda
    1008:ec04  f2  1d  10  10       addr         pass1_1010_1df2
    1008:ec08  ce  1d  10  10       addr         pass1_1010_1dce
    1008:ec0c  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:ec62

    1008:ec62  3c  ec  08  10       addr         pass1_1008_ec3c
    1008:ec66  f2  1d  10  10       addr         pass1_1010_1df2
    1008:ec6a  ce  1d  10  10       addr         pass1_1010_1dce
    1008:ec6e  d4  1d  10  10       addr         pass1_1010_1dd4

- 1008:ef9c
- 1008:efc4

    1008:ef9c  76  ef             ULONG_PTR *  pass1_1008_ef76
    1008:ef9e  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efa0  f2  1d             ULONG_PTR *  FUN_1008_1df2
    1008:efa2  10  10             ULONG_PTR *  switchD_1008:1091::caseD_ac
    1008:efa4  ce  1d             ULONG_PTR *  LAB_1008_1dcb+3
    1008:efa6  10  10             ULONG_PTR *  switchD_1008:1091::caseD_ac
    1008:efa8  d4  1d             ULONG_PTR *  LAB_1008_1dd2+2
    1008:efaa  10  10             ULONG_PTR *  switchD_1008:1091::caseD_ac
    1008:efac  14  ee             ULONG_PTR *  pass1_1008_ee14
    1008:efae  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efb0  72  ee             ULONG_PTR *  pass1_1008_ee72
    1008:efb2  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efb4  5a  30             ULONG_PTR *  LAB_1008_305a
    1008:efb6  10  10             ULONG_PTR *  switchD_1008:1091::caseD_ac
    1008:efb8  80  36             ULONG_PTR *  LAB_1008_367e+2
    1008:efba  10  10             ULONG_PTR *  switchD_1008:1091::caseD_ac
    1008:efbc  a6  ee             ULONG_PTR *  pass1_1008_eea6
    1008:efbe  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efc0  ac  ee             ULONG_PTR *  pass1_1008_eeac
    1008:efc2  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efc4  50  ef             ULONG_PTR *  pass1_1008_ef50
    1008:efc6  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efc8  38  ef             ULONG_PTR *  pass1_1008_ef38
    1008:efca  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efcc  1e  ed             ULONG_PTR *  mem_1008_ed1e
    1008:efce  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efd0  62  ed             ULONG_PTR *  pass1_1008_ed62
    1008:efd2  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efd4  8a  ed             ULONG_PTR *  pass1_1008_ed8a
    1008:efd6  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efd8  56  ee             ULONG_PTR *  load_string_1008_ee56
    1008:efda  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7
    1008:efdc  4a  ef             ULONG_PTR *  pass1_1008_ef4a
    1008:efde  08  10             ULONG_PTR *  switchD_1008:1091::caseD_a7



### Segment 1010

- 1010:02c8

    1010:02c8  a2  02  10  10       addr         pass1_1010_02a2
    1010:02cc  f2  1d  10  10       addr         pass1_1010_1df2
    1010:02d0  ce  1d  10  10       addr         pass1_1010_1dce
    1010:02d4  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:02d8  70  00  10  10       addr         set_window_placement_1010_0070
    1010:02dc  0e  01  10  10       addr         set_win_placement_1010_010e

- 1010:0ea8 -> pass1_1010_0e6c
- 1010:191a

    1010:191a  f4  18  10  10       addr         pass1_1010_18f4
    1010:191e  f2  1d  10  10       addr         pass1_1010_1df2
    1010:1922  ce  1d  10  10       addr         pass1_1010_1dce
    1010:1926  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:192a  6c  11  10  10       addr         pass1_1010_116c
    1010:192e  5c  2e  10  10       addr         pass1_1010_2e5c
    1010:1932  56  16  10  10       addr         pass1_1010_1656
    1010:1936  ee  16  10  10       addr         pass1_1010_16ee
    1010:193a  e8  18  10  10       addr         FUN_1010_18e8
    1010:193e  ee  18  10  10       addr         FUN_1010_18ee
    1010:1942  9c  0f  10  10       addr         struct_1010_0f9c
    1010:1946  22  17  10  10       addr         string_1010_1722
    1010:194a  88  17  10  10       addr         pass1_1010_1788
    1010:194e  c0  17  10  10       addr         pass1_1010_17c0
    1010:1952  1a  4f  00  10       addr         pass1_1000_4f1a
    1010:1956  1a  4f  00  10       addr         pass1_1000_4f1a
    1010:195a  1a  4f  00  10       addr         pass1_1000_4f1a

- 1010:1b2a

    1010:1b2a  04  1b  10  10       addr         pass1_1010_1b04
    1010:1b2e  f2  1d  10  10       addr         pass1_1010_1df2
    1010:1b32  ce  1d  10  10       addr         pass1_1010_1dce
    1010:1b36  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:1b3a  6c  11  10  10       addr         pass1_1010_116c
    1010:1b3e  5c  2e  10  10       addr         pass1_1010_2e5c
    1010:1b42  56  16  10  10       addr         pass1_1010_1656
    1010:1b46  ee  16  10  10       addr         pass1_1010_16ee
    1010:1b4a  e8  18  10  10       addr         FUN_1010_18e8
    1010:1b4e  ee  18  10  10       addr         FUN_1010_18ee
    1010:1b52  9c  0f  10  10       addr         struct_1010_0f9c
    1010:1b56  22  17  10  10       addr         string_1010_1722
    1010:1b5a  88  17  10  10       addr         pass1_1010_1788
    1010:1b5e  c0  17  10  10       addr         pass1_1010_17c0
    1010:1b62  a4  19  10  10       addr         pass1_1010_19a4
    1010:1b66  06  1a  10  10       addr         pass1_1010_1a06
    1010:1b6a  66  1a  10  10       addr         pass1_1010_1a66

- 1010:1d04

    1010:1d04  de  1c  10  10       addr         pass1_1010_1cde
    1010:1d08  f2  1d  10  10       addr         pass1_1010_1df2
    1010:1d0c  ce  1d  10  10       addr         pass1_1010_1dce
    1010:1d10  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:1d14  6c  11  10  10       addr         pass1_1010_116c
    1010:1d18  5c  2e  10  10       addr         pass1_1010_2e5c
    1010:1d1c  56  16  10  10       addr         pass1_1010_1656
    1010:1d20  ee  16  10  10       addr         pass1_1010_16ee
    1010:1d24  e8  18  10  10       addr         FUN_1010_18e8
    1010:1d28  ee  18  10  10       addr         FUN_1010_18ee
    1010:1d2c  9c  0f  10  10       addr         struct_1010_0f9c
    1010:1d30  22  17  10  10       addr         string_1010_1722
    1010:1d34  88  17  10  10       addr         pass1_1010_1788
    1010:1d38  c0  17  10  10       addr         pass1_1010_17c0
    1010:1d3c  b4  1b  10  10       addr         pass1_1010_1bb4
    1010:1d40  16  1c  10  10       addr         pass1_1010_1c16
    1010:1d44  40  1c  10  10       addr         pass1_1010_1c40

- 1010:2010

    1010:2010  be  1f  10  10       addr         pass1_1010_1fbe
    1010:2014  ea  1f  10  10       addr         pass1_1010_1fea
    1010:2018  f2  1d  10  10       addr         pass1_1010_1df2
    1010:201c  ce  1d  10  10       addr         pass1_1010_1dce
    1010:2020  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:2014 -> pass1_1010_1fea

- 1010:2be4

    1010:2be4  be  2b  10  10       addr         pass1_1010_2bbe
    1010:2be8  f2  1d  10  10       addr         pass1_1010_1df2
    1010:2bec  ce  1d  10  10       addr         pass1_1010_1dce
    1010:2bf0  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:2bf4  04  4e  18  10       addr         create_dc_1018_4e04
    1010:2bf8  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1010:2cc2

    1010:2cc2  9c  2c  10  10       addr         pass1_1010_2c9c
    1010:2cc6  f2  1d  10  10       addr         pass1_1010_1df2
    1010:2cca  ce  1d  10  10       addr         pass1_1010_1dce
    1010:2cce  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:36da

    1010:36da  b4  36  10  10       addr         pass1_1010_36b4
    1010:36de  f2  1d  10  10       addr         pass1_1010_1df2
    1010:36e2  ce  1d  10  10       addr         pass1_1010_1dce
    1010:36e6  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:36ea  1a  4f  00  10       addr         pass1_1000_4f1a
    1010:36ee  5c  2e  10  10       addr         pass1_1010_2e5c
    1010:36f2  5a  30  10  10       addr         unk_destroy_win_op_1010_305a
    1010:36f6  80  36  10  10       addr         pass1_1010_3680
    1010:36fa  e8  18  10  10       addr         FUN_1010_18e8
    1010:36fe  ee  18  10  10       addr         FUN_1010_18ee

- 1010:37c4

    1010:37c4  9e  37  10  10       addr         pass1_1010_379e
    1010:37c8  f2  1d  10  10       addr         pass1_1010_1df2
    1010:37cc  ce  1d  10  10       addr         pass1_1010_1dce
    1010:37d0  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:3b3e

    1010:3b3e  f2  3a  10  10       addr         pass1_1010_3af2
    1010:3b42  86  3a  10  10       addr         pass1_1010_3a86
    1010:3b46  4a  39  10  10       addr         pass1_1010_394a
    1010:3b4a  94  3a  10  10       addr         pass1_1010_3a94
    1010:3b4e  a6  3a  10  10       addr         FUN_1010_3aa6
    1010:3b52  dc  3a  10  10       addr         pass1_1010_3adc
    1010:3b56  bc  3a  10  10       addr         FUN_1010_3abc
    1010:3b5a  c2  3a  10  10       addr         pass1_1010_3ac2
    1010:3b5e  18  3b  10  10       addr         pass1_1010_3b18
    1010:3b62  86  3a  10  10       addr         pass1_1010_3a86
    1010:3b66  4a  39  10  10       addr         pass1_1010_394a
    1010:3b6a  94  3a  10  10       addr         pass1_1010_3a94
    1010:3b6e  a6  3a  10  10       addr         FUN_1010_3aa6
    1010:3b72  aa  3a  10  10       addr         pass1_1010_3aaa
    1010:3b76  bc  3a  10  10       addr         FUN_1010_3abc

- 1010:3b5e -> pass1_1010_3b18
- 1010:3d6a

    1010:3d6a  44  3d  10  10       addr         FUN_1010_3d44
    1010:3d6e  f2  1d  10  10       addr         pass1_1010_1df2
    1010:3d72  ce  1d  10  10       addr         pass1_1010_1dce
    1010:3d76  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:3d7a  38  3d  10  10       addr         pass1_1010_3d38
    1010:3d7e  0a  3d  10  10       addr         pass1_1010_3d0a

- 1010:3d7a -> pass1_1010_3d38
- 1010:3e2c

    1010:3e2c  06  3e  10  10       addr         pass1_1010_3e06
    1010:3e30  f2  1d  10  10       addr         pass1_1010_1df2
    1010:3e34  ce  1d  10  10       addr         pass1_1010_1dce
    1010:3e38  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:4a46
- 1010:4a82 -> pass1_1010_4994

    1010:4a46  20  4a  10  10       addr         pass1_1010_4a20
    1010:4a4a  f2  1d  10  10       addr         pass1_1010_1df2
    1010:4a4e  c2  3f  10  10       addr         FUN_1010_3fc2
    1010:4a52  4a  40  10  10       addr         pass1_1010_404a
    1010:4a56  a0  49  10  10       addr         pass1_1010_49a0
    1010:4a5a  2c  4c  18  10       addr         pass1_1018_4c2c
    1010:4a5e  78  4b  18  10       addr         pass1_1018_4b78
    1010:4a62  b0  49  10  10       addr         pass1_1010_49b0
    1010:4a66  f6  46  10  10       addr         get_sys_metrics_1010_46f6
    1010:4a6a  c0  49  10  10       addr         pass1_1010_49c0
    1010:4a6e  ce  49  10  10       addr         pass1_1010_49ce
    1010:4a72  e0  49  10  10       addr         pass1_1010_49e0
    1010:4a76  ee  49  10  10       addr         pass1_1010_49ee
    1010:4a7a  00  4a  10  10       addr         pass1_1010_4a00
    1010:4a7e  12  4a  10  10       addr         pass1_1010_4a12
    1010:4a82  94  49  10  10       addr         pass1_1010_4994
    1010:4a86  66  45  10  10       addr         pass1_1010_4566

- 1010:502a

    1010:502a  04  50  10  10       u32          10105004h
    1010:502e  f2  1d  10  10       u32          10101DF2h
    1010:5032  ce  1d  10  10       u32          10101DCEh
    1010:5036  d4  1d  10  10       u32          10101DD4h
    1010:503a  3e  4c  10  10       u32          10104C3Eh

- 1010:509a

    1010:509a  74  50  10  10       addr         pass1_1010_5074
    1010:509e  f2  1d  10  10       addr         pass1_1010_1df2
    1010:50a2  ce  1d  10  10       addr         pass1_1010_1dce
    1010:50a6  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:50aa  04  4e  18  10       addr         create_dc_1018_4e04
    1010:50ae  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1010:53f4

    1010:53f4  ce  53  10  10       addr         pass1_1010_53ce
    1010:53f8  f2  1d  10  10       addr         pass1_1010_1df2
    1010:53fc  ce  1d  10  10       addr         pass1_1010_1dce
    1010:5400  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:6312
- 1010:6322 -> pass1_1010_62a4

    1010:6312  ec  62  10  10       addr         pass1_1010_62ec
    1010:6316  f2  1d  10  10       addr         pass1_1010_1df2
    1010:631a  c6  5d  10  10       addr         pass1_1010_5dc6
    1010:631e  56  5e  10  10       addr         pass1_1010_5e56
    1010:6322  a4  62  10  10       addr         pass1_1010_62a4

- 1010:6aac

    1010:6aac  86  6a  10  10       addr         pass1_1010_6a86
    1010:6ab0  f2  1d  10  10       addr         pass1_1010_1df2
    1010:6ab4  46  68  10  10       addr         write_to_file_1010_6846
    1010:6ab8  c6  68  10  10       addr         pass1_1010_68c6

- 1010:7e28 -> pass1_1010_7dfe
- 1010:7e38 -> pass1_1010_7dc6

    1010:7e24  d2  7d  10  10       addr         pass1_1010_7dd2
    1010:7e28  fe  7d  10  10       addr         FUN_1010_7dfe
    1010:7e2c  f2  1d  10  10       addr         pass1_1010_1df2
    1010:7e30  ce  1d  10  10       addr         pass1_1010_1dce
    1010:7e34  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:7e38  c6  7d  10  10       addr         pass1_1010_7dc6
    1010:7e3c  74  71  10  10       addr         FUN_1010_7174

- 1010:8ee2 -> pass1_1010_8ebc

    1010:8ee2  bc  8e  10  10       addr         pass1_1010_8ebc
    1010:8ee6  f2  1d  10  10       addr         pass1_1010_1df2
    1010:8eea  ce  1d  10  10       addr         pass1_1010_1dce
    1010:8eee  d4  1d  10  10       addr         pass1_1010_1dd4

- 1010:9254 -> pass1_1010_922e
- 1010:9566
- 1010:958e -> pass1_1010_951a

    1010:9566  40  95  10  10       addr         pass1_1010_9540
    1010:956a  f2  1d  10  10       addr         pass1_1010_1df2
    1010:956e  ce  1d  10  10       addr         pass1_1010_1dce
    1010:9572  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:9576  f0  93  10  10       addr         pass1_1010_93f0
    1010:957a  4e  94  10  10       addr         pass1_1010_944e
    1010:957e  5a  30  10  10       addr         unk_destroy_win_op_1010_305a
    1010:9582  80  36  10  10       addr         pass1_1010_3680
    1010:9586  82  94  10  10       addr         FUN_1010_9482
    1010:958a  88  94  10  10       addr         pass1_1010_9488
    1010:958e  1a  95  10  10       addr         pass1_1010_951a
    1010:9592  02  95  10  10       addr         pass1_1010_9502
    1010:9596  04  93  10  10       addr         pass1_1010_9304
    1010:959a  48  93  10  10       addr         pass1_1010_9348
    1010:959e  72  93  10  10       addr         pass1_1010_9372
    1010:95a2  32  94  10  10       addr         load_string_1010_9432
    1010:95a6  14  95  10  10       addr         pass1_1010_9514

- 1010:9e8c -> INVALID
- 1010:a1c4
- 1010:a1c8 -> pass1_1010_a172

    1010:a1c4  98  a1  10  10       addr         pass1_1010_a198
    1010:a1c8  72  a1  10  10       addr         pass1_1010_a172
    1010:a1cc  f2  1d  10  10       addr         pass1_1010_1df2
    1010:a1d0  00  99  10  10       addr         FUN_1010_9900
    1010:a1d4  72  9b  10  10       addr         FUN_1010_9b72

- 1010:e9cc

    1010:e9cc  a6  e9  10  10       addr         FUN_1010_e9a6
    1010:e9d0  f2  1d  10  10       addr         pass1_1010_1df2
    1010:e9d4  ce  1d  10  10       addr         pass1_1010_1dce
    1010:e9d8  d4  1d  10  10       addr         pass1_1010_1dd4
    1010:e9dc  9a  e9  10  10       addr         pass1_1010_e99a
    1010:e9e0  ec  ac  10  10       addr         pass1_1010_acec

### 1018

- 1018:0558
- 1018:0568 -> pass1_1018_0526

    1018:0558  32  05  18  10       addr         FUN_1018_0532
    1018:055c  f2  1d  10  10       addr         pass1_1010_1df2
    1018:0560  58  ed  10  10       addr         write_to_file_1010_ed58
    1018:0564  00  00  18  10       addr         pass1_1018_0000
    1018:0568  26  05  18  10       addr         pass1_1018_0526
    1018:056c  ea  03  18  10       addr         pass1_1018_03ea

- 1018:1874
- 1018:18b0 -> pass1_1018_1842

    1018:1874  4e  18  18  10       addr         FUN_1018_184e
    1018:1878  f2  1d  10  10       addr         pass1_1010_1df2
    1018:187c  ce  1d  10  10       addr         pass1_1010_1dce
    1018:1880  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:1884  a0  49  10  10       addr         pass1_1010_49a0
    1018:1888  2c  4c  18  10       addr         pass1_1018_4c2c
    1018:188c  78  4b  18  10       addr         pass1_1018_4b78
    1018:1890  b0  49  10  10       addr         pass1_1010_49b0
    1018:1894  a8  09  18  10       addr         get_sys_metrics_1018_09a8
    1018:1898  76  0d  18  10       addr         pass1_1018_0d76
    1018:189c  a0  0a  18  10       addr         pass1_1018_0aa0
    1018:18a0  e0  49  10  10       addr         pass1_1010_49e0
    1018:18a4  ee  49  10  10       addr         pass1_1010_49ee
    1018:18a8  00  4a  10  10       addr         pass1_1010_4a00
    1018:18ac  12  4a  10  10       addr         pass1_1010_4a12
    1018:18b0  42  18  18  10       addr         pass1_1018_1842
    1018:18b4  f4  0b  18  10       addr         pass1_1018_0bf4

- 1018:1fb0
- 1018:1fec -> pass1_1018_1f6a

    1018:1fb0  8a  1f  18  10       addr         pass1_1018_1f8a
    1018:1fb4  f2  1d  10  10       addr         pass1_1010_1df2
    1018:1fb8  ce  1d  10  10       addr         pass1_1010_1dce
    1018:1fbc  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:1fc0  7a  1f  18  10       addr         pass1_1018_1f7a
    1018:1fc4  2c  4c  18  10       addr         pass1_1018_4c2c
    1018:1fc8  78  4b  18  10       addr         pass1_1018_4b78
    1018:1fcc  b0  49  10  10       addr         pass1_1010_49b0
    1018:1fd0  76  1f  18  10       addr         FUN_1018_1f76
    1018:1fd4  c0  49  10  10       addr         pass1_1010_49c0
    1018:1fd8  ce  49  10  10       addr         pass1_1010_49ce
    1018:1fdc  e0  49  10  10       addr         pass1_1010_49e0
    1018:1fe0  ee  49  10  10       addr         pass1_1010_49ee
    1018:1fe4  00  4a  10  10       addr         pass1_1010_4a00
    1018:1fe8  12  4a  10  10       addr         pass1_1010_4a12
    1018:1fec  6a  1f  18  10       addr         pass1_1018_1f6a
    1018:1ff0  10  3a  08  10       addr         pass1_1008_3a10

- 1018:21e8 -> pass1_1018_21c2

    1018:21e8  c2  21  18  10       addr         pass1_1018_21c2
    1018:21ec  f2  1d  10  10       addr         pass1_1010_1df2
    1018:21f0  ce  1d  10  10       addr         pass1_1010_1dce
    1018:21f4  d4  1d  10  10       addr         pass1_1010_1dd4

- 1018:2ada
- 1018:2af2 -> pass1_1018_2aa8

    1018:2ada  b4  2a  18  10       addr         FUN_1018_2ab4
    1018:2ade  f2  1d  10  10       addr         pass1_1010_1df2
    1018:2ae2  ce  1d  10  10       addr         pass1_1010_1dce
    1018:2ae6  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:2aea  4a  29  18  10       addr         win_op_1018_294a
    1018:2aee  78  29  18  10       addr         mixed_sys_op_1018_2978
    1018:2af2  a8  2a  18  10       addr         pass1_1018_2aa8
    1018:2af6  9c  28  18  10       addr         pass1_1018_289c

- 1018:32d8 -> FUN_1018_32b2
- 1018:3314

    1018:32d8  b2  32  18  10       addr         FUN_1018_32b2
    1018:32dc  f2  1d  10  10       addr         pass1_1010_1df2
    1018:32e0  ce  1d  10  10       addr         pass1_1010_1dce
    1018:32e4  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:32e8  a0  49  10  10       addr         pass1_1010_49a0
    1018:32ec  2c  4c  18  10       addr         pass1_1018_4c2c
    1018:32f0  78  4b  18  10       addr         pass1_1018_4b78
    1018:32f4  b0  49  10  10       addr         pass1_1010_49b0
    1018:32f8  56  2f  18  10       addr         get_sys_metrics_1018_2f56
    1018:32fc  c0  49  10  10       addr         pass1_1010_49c0
    1018:3300  ce  49  10  10       addr         pass1_1010_49ce
    1018:3304  e0  49  10  10       addr         pass1_1010_49e0
    1018:3308  ee  49  10  10       addr         pass1_1010_49ee
    1018:330c  00  4a  10  10       addr         pass1_1010_4a00
    1018:3310  12  4a  10  10       addr         pass1_1010_4a12
    1018:3314  a6  32  18  10       addr         pass1_1018_32a6
    1018:3318  e4  2e  18  10       addr         pass1_1018_2ee4

- 1018:470c

    1018:470c  e6  46  18  10       addr         pass1_1018_46e6
    1018:4710  f2  1d  10  10       addr         pass1_1010_1df2
    1018:4714  ce  1d  10  10       addr         pass1_1010_1dce
    1018:4718  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:471c  a4  3e  18  10       addr         pass1_1018_3ea4

- 1018:4a8a
- 1018:4a8e -> pass1_1018_49f2
- 1018:4a92 -> pass1_1018_4980
- 1018:4a96 -> pass1_1018_4a18
- 1018:4a9a -> pass1_1018_49a6
- 1018:4a9e -> pass1_1018_4a3e
- 1018:4aa2 -> pass1_1018_49cc
- 1018:4aa6 -> pass1_1018_495a

    1018:4a8a  64  4a  18  10       addr         pass1_1018_4a64
    1018:4a8e  f2  49  18  10       addr         pass1_1018_49f2
    1018:4a92  80  49  18  10       addr         pass1_1018_4980
    1018:4a96  18  4a  18  10       addr         pass1_1018_4a18
    1018:4a9a  a6  49  18  10       addr         pass1_1018_49a6
    1018:4a9e  3e  4a  18  10       addr         pass1_1018_4a3e
    1018:4aa2  cc  49  18  10       addr         pass1_1018_49cc
    1018:4aa6  5a  49  18  10       addr         pass1_1018_495a

- 1018:4b06

    1018:4b06  e0  4a  18  10       addr         pass1_1018_4ae0
    1018:4b0a  f2  1d  10  10       addr         pass1_1010_1df2
    1018:4b0e  ce  1d  10  10       addr         pass1_1010_1dce
    1018:4b12  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:4b16  04  4e  18  10       addr         create_dc_1018_4e04
    1018:4b1a  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1018:4c9e

    1018:4c9e  78  4c  18  10       addr         pass1_1018_4c78
    1018:4ca2  f2  1d  10  10       addr         pass1_1010_1df2
    1018:4ca6  ce  1d  10  10       addr         pass1_1010_1dce
    1018:4caa  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:4cae  a0  49  10  10       addr         pass1_1010_49a0
    1018:4cb2  2c  4c  18  10       addr         pass1_1018_4c2c
    1018:4cb6  78  4b  18  10       addr         pass1_1018_4b78
    1018:4cba  b0  49  10  10       addr         pass1_1010_49b0
    1018:4cbe  76  1f  18  10       addr         FUN_1018_1f76
    1018:4cc2  c0  49  10  10       addr         pass1_1010_49c0
    1018:4cc6  ce  49  10  10       addr         pass1_1010_49ce
    1018:4cca  e0  49  10  10       addr         pass1_1010_49e0
    1018:4cce  ee  49  10  10       addr         pass1_1010_49ee
    1018:4cd2  00  4a  10  10       addr         pass1_1010_4a00
    1018:4cd6  12  4a  10  10       addr         pass1_1010_4a12

- 1018:5058

    1018:5058  32  50  18  10       addr         pass1_1018_5032
    1018:505c  f2  1d  10  10       addr         pass1_1010_1df2
    1018:5060  ce  1d  10  10       addr         pass1_1010_1dce
    1018:5064  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:5068  04  4e  18  10       addr         create_dc_1018_4e04
    1018:506c  18  4f  18  10       addr         unk_win_ui_op_1018_4f18

- 1018:56ce
- 1018:56d2 -> pass1_1018_56a8

    1018:56ce  7c  56  18  10       addr         pass1_1018_567c
    1018:56d2  a8  56  18  10       addr         pass1_1018_56a8
    1018:56d6  f2  1d  10  10       addr         pass1_1010_1df2
    1018:56da  ce  1d  10  10       addr         pass1_1010_1dce
    1018:56de  d4  1d  10  10       addr         pass1_1010_1dd4
    1018:56e2  d2  51  18  10       addr         pass1_1018_51d2

- 1018:5830 -> pass1_1018_580a

    1018:5830  0a  58  18  10       addr         pass1_1018_580a
    1018:5834  f2  1d  10  10       addr         pass1_1010_1df2
    1018:5838  ce  1d  10  10       addr         pass1_1010_1dce
    1018:583c  d4  1d  10  10       addr         pass1_1010_1dd4

- 1018:5a62
- 1018:5afe -> pass1_1018_5a2e

    1018:5a62  3c  5a  18  10       addr         FUN_1018_5a3c
    1018:5a66  ea  68  08  10       addr         pass1_1008_68ea
    1018:5a6a  8c  59  18  10       addr         win_1018_598c
    1018:5a6e  c6  68  08  10       addr         pass1_1008_68c6
    1018:5a72  40  96  08  10       addr         send_msg_1008_9640
    1018:5a76  64  96  08  10       addr         set_win_text_1008_9664
    1018:5a7a  2c  37  08  10       addr         pass1_1008_372c
    1018:5a7e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:5a82  3c  37  08  10       addr         pass1_1008_373c
    1018:5a86  40  37  08  10       addr         pass1_1008_3740
    1018:5a8a  44  37  08  10       addr         pass1_1008_3744
    1018:5a8e  48  37  08  10       addr         pass1_1008_3748
    1018:5a92  4c  37  08  10       addr         pass1_1008_374c
    1018:5a96  32  59  18  10       addr         pass1_1018_5932
    1018:5a9a  98  96  08  10       addr         destroy_win_1008_9698
    1018:5a9e  50  82  20  10       addr         destroy_window_1020_8250
    1018:5aa2  e2  58  18  10       addr         invalidate_rect_1018_58e2
    1018:5aa6  60  9c  08  10       addr         pass1_1008_9c60
    1018:5aaa  58  37  08  10       addr         pass1_1008_3758
    1018:5aae  24  63  08  10       addr         FUN_1008_6324
    1018:5ab2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:5ab6  62  37  08  10       addr         pass1_1008_3762
    1018:5aba  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:5abe  66  37  08  10       addr         pass1_1008_3766
    1018:5ac2  06  81  20  10       addr         pass1_1020_8106
    1018:5ac6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:5aca  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:5ace  02  6b  08  10       addr         pass1_1008_6b02
    1018:5ad2  7a  37  08  10       addr         pass1_1008_377a
    1018:5ad6  52  9c  08  10       addr         pass1_1008_9c52
    1018:5ada  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:5ade  16  9c  08  10       addr         pass1_1008_9c16
    1018:5ae2  30  9c  08  10       addr         pass1_1008_9c30
    1018:5ae6  86  9c  08  10       addr         pass1_1008_9c86
    1018:5aea  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:5aee  c0  81  20  10       addr         win_ui_palette_op_1020_81c0
    1018:5af2  f0  59  18  10       addr         FUN_1018_59f0
    1018:5af6  28  63  08  10       addr         FUN_1008_6328
    1018:5afa  28  81  20  10       addr         realize_palette_1020_8128
    1018:5afe  2e  5a  18  10       addr         pass1_1018_5a2e
    1018:5b02  10  3a  08  10       addr         pass1_1008_3a10

- 1018:5e1a

    1018:5e1a  f4  5d  18  10       addr         pass1_1018_5df4
    1018:5e1e  32  5d  18  10       addr         invalidate_rect_1018_5d32
    1018:5e22  6c  5d  18  10       addr         misc_draw_op_1018_5d6c

- 1018:6128

    1018:6128  02  61  18  10       addr         pass1_1018_6102
    1018:612c  10  3a  08  10       addr         pass1_1008_3a10
    1018:6130  9a  5e  18  10       addr         win_ui_op_1018_5e9a
    1018:6134  c0  79  40  10       addr         pass1_1040_79c0
    1018:6138  3c  7b  40  10       addr         post_win_msg_1040_7b3c
    1018:613c  98  7b  40  10       addr         destroy_win_1040_7b98
    1018:6140  56  7f  40  10       addr         post_win_msg_1040_7f56
    1018:6144  b2  7b  40  10       addr         draw_op_1040_7bb2
    1018:6148  1c  7f  40  10       addr         post_win_msg_1040_7f1c
    1018:614c  86  5e  18  10       addr         pass1_1018_5e86
    1018:6150  86  7f  40  10       addr         menu_ui_op_1040_7f86
    1018:6154  0c  80  40  10       addr         win_help_1040_800c
    1018:6158  54  80  40  10       addr         pass1_1040_8054
    1018:615c  5e  7e  40  10       addr         set_text_bk_color_1040_7e5e
    1018:6160  58  81  40  10       addr         unk_win_ui_op_1040_8158
    1018:6164  b6  81  40  10       addr         check_dialog_msg_1040_81b6
    1018:6168  fe  81  40  10       addr         set_sys_modal_window_1040_81fe
    1018:616c  ea  60  18  10       addr         FUN_1018_60ea
    1018:6170  4a  82  40  10       addr         pass1_1040_824a
    1018:6174  66  82  40  10       addr         FUN_1040_8266
    1018:6178  de  78  40  10       addr         pass1_1040_78de
    1018:617c  ee  60  18  10       addr         FUN_1018_60ee
    1018:6180  f4  60  18  10       addr         FUN_1018_60f4
    1018:6184  fa  60  18  10       addr         FUN_1018_60fa
    1018:6188  48  60  18  10       addr         pass1_1018_6048
    1018:618c  fe  60  18  10       addr         FUN_1018_60fe
    1018:6190  7e  80  40  10       addr         pass1_1040_807e
    1018:6194  fa  5f  18  10       addr         pass1_1018_5ffa

- 1018:66c0

    1018:66c0  9a  66  18  10       addr *       pass1_1018_669a
    1018:66c4  10  3a  08  10       addr *       pass1_1008_3a10
    1018:66c8  3e  62  18  10       addr *       unk_draw_op_1018_623e

- 1018:6880 -> FUN_1018_685a
- 1018:691c

    1018:6880  5a  68  18  10       addr         FUN_1018_685a
    1018:6884  ea  68  08  10       addr         pass1_1008_68ea
    1018:6888  b6  67  18  10       addr         window_op_1018_67b6
    1018:688c  c6  68  08  10       addr         pass1_1008_68c6
    1018:6890  40  96  08  10       addr         send_msg_1008_9640
    1018:6894  64  96  08  10       addr         set_win_text_1008_9664
    1018:6898  2c  37  08  10       addr         pass1_1008_372c
    1018:689c  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:68a0  3c  37  08  10       addr         pass1_1008_373c
    1018:68a4  40  37  08  10       addr         pass1_1008_3740
    1018:68a8  44  37  08  10       addr         pass1_1008_3744
    1018:68ac  48  37  08  10       addr         pass1_1008_3748
    1018:68b0  4c  37  08  10       addr         pass1_1008_374c
    1018:68b4  68  67  18  10       addr         pass1_1018_6768
    1018:68b8  98  96  08  10       addr         destroy_win_1008_9698
    1018:68bc  50  82  20  10       addr         destroy_window_1020_8250
    1018:68c0  54  37  08  10       addr         pass1_1008_3754
    1018:68c4  60  9c  08  10       addr         pass1_1008_9c60
    1018:68c8  58  37  08  10       addr         pass1_1008_3758
    1018:68cc  24  63  08  10       addr         FUN_1008_6324
    1018:68d0  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:68d4  62  37  08  10       addr         pass1_1008_3762
    1018:68d8  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:68dc  66  37  08  10       addr         pass1_1008_3766
    1018:68e0  06  81  20  10       addr         pass1_1020_8106
    1018:68e4  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:68e8  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:68ec  02  6b  08  10       addr         pass1_1008_6b02
    1018:68f0  7a  37  08  10       addr         pass1_1008_377a
    1018:68f4  52  9c  08  10       addr         pass1_1008_9c52
    1018:68f8  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:68fc  16  9c  08  10       addr         pass1_1008_9c16
    1018:6900  30  9c  08  10       addr         pass1_1008_9c30
    1018:6904  86  9c  08  10       addr         pass1_1008_9c86
    1018:6908  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:690c  c0  81  20  10       addr         win_ui_palette_op_1020_81c0
    1018:6910  1a  68  18  10       addr         pass1_1018_681a
    1018:6914  28  63  08  10       addr         FUN_1008_6328
    1018:6918  28  81  20  10       addr         realize_palette_1020_8128
    1018:691c  4c  68  18  10       addr         pass1_1018_684c
    1018:6920  10  3a  08  10       addr         pass1_1008_3a10

- 1018:6a02

    1018:6a02  dc  69  18  10       addr         pass1_1018_69dc
    1018:6a06  10  3a  08  10       addr         pass1_1008_3a10
    1018:6a0a  12  93  20  10       addr         mix_draw_op_1020_9312

- 1018:6c66 -> pass1_1018_6c1e

    1018:6c66  1e  6c  18  10       addr         pass1_1018_6c1e
    1018:6c6a  ea  68  08  10       addr         pass1_1008_68ea
    1018:6c6e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:6c72  c6  68  08  10       addr         pass1_1008_68c6
    1018:6c76  40  96  08  10       addr         send_msg_1008_9640
    1018:6c7a  64  96  08  10       addr         set_win_text_1008_9664
    1018:6c7e  2c  37  08  10       addr         pass1_1008_372c
    1018:6c82  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:6c86  3c  37  08  10       addr         pass1_1008_373c
    1018:6c8a  40  37  08  10       addr         pass1_1008_3740
    1018:6c8e  44  37  08  10       addr         pass1_1008_3744
    1018:6c92  48  37  08  10       addr         pass1_1008_3748
    1018:6c96  4c  37  08  10       addr         pass1_1008_374c
    1018:6c9a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:6c9e  98  96  08  10       addr         destroy_win_1008_9698
    1018:6ca2  50  37  08  10       addr         pass1_1008_3750
    1018:6ca6  76  6a  18  10       addr         FUN_1018_6a76
    1018:6caa  60  9c  08  10       addr         pass1_1008_9c60
    1018:6cae  58  37  08  10       addr         pass1_1008_3758
    1018:6cb2  24  63  08  10       addr         FUN_1008_6324
    1018:6cb6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:6cba  62  37  08  10       addr         pass1_1008_3762
    1018:6cbe  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:6cc2  66  37  08  10       addr         pass1_1008_3766
    1018:6cc6  6a  37  08  10       addr         FUN_1008_376a
    1018:6cca  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:6cce  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:6cd2  02  6b  08  10       addr         pass1_1008_6b02
    1018:6cd6  7a  37  08  10       addr         pass1_1008_377a
    1018:6cda  52  9c  08  10       addr         pass1_1008_9c52
    1018:6cde  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:6ce2  16  9c  08  10       addr         pass1_1008_9c16
    1018:6ce6  30  9c  08  10       addr         pass1_1008_9c30
    1018:6cea  86  9c  08  10       addr         pass1_1008_9c86
    1018:6cee  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:6cf2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:6cf6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:6cfa  28  63  08  10       addr         FUN_1008_6328
    1018:6cfe  2c  63  08  10       addr         FUN_1008_632c

- 1018:93de
- 1018:947a -> pass1_1018_934e
- 1018:9516 -> pass1_1018_88e6
- 1018:95b2 -> pass1_1018_8ece
- 1018:964e -> pass1_1018_7f9e
- 1018:96ea -> pass1_1018_877e
- 1018:9786 -> pass1_1018_8d66
- 1018:9822 -> pass1_1018_7e36
- 1018:98be -> pass1_1018_8586
- 1018:995a -> pass1_1018_841e
- 1018:99f6 -> pass1_1018_922e
- 1018:9a92 -> pass1_1018_8346
- 1018:9b2e -> pass1_1018_8b26
- 1018:9bca -> pass1_1018_910e
- 1018:9c66 -> pass1_1018_81de
- 1018:9d02 -> pass1_1018_89be
- 1018:9e3a -> pass1_1018_8076
- 1018:9ed6 -> pass1_1018_92be
- 1018:9f72 -> pass1_1018_8856
- 1018:a00e -> pass1_1018_8e3e
- 1018:a0aa -> pass1_1018_7f0e
- 1018:a146 -> pass1_1018_86ee
- 1018:a1e2 -> pass1_1018_ecd6
- 1018:a27e -> pass1_1018_7da6
- 1018:a31a -> pass1_1018_a4f6
- 1018:a3b6 -> pass1_1018_8466
- 1018:a452 -> pass1_1018_8466
- 1018:a4ee -> pass1_1018_a2b6
- 1018:a58a -> pass1_1018_8a96
- 1018:a626 -> pass1_1018_907e
- 1018:a6c2 -> pass1_1018_814e
- 1018:a75e -> pass1_1018_9396
- 1018:a7fa -> pass1_1018_892e
- 1018:a896 -> pass1_1018_8f16
- 1018:a932 -> pass1_1018_7fe6
- 1018:a9ce -> pass1_1018_87c6
- 1018:aa6a -> pass1_1018_8dae
- 1018:ab06 -> pass1_1018_7e7e
- 1018:aba2 -> pass1_1018_85ce
- 1018:ac3e -> pass1_1018_865e
- 1018:acda -> pass1_1018_8c46
- 1018:ad76 -> pass1_1018_838e
- 1018:ae12 -> pass1_1018_8b6e
- 1018:aeae -> pass1_1018_9156
- 1018:af4a -> pass1_1018_8226
- 1018:afe6 -> pass1_1018_8a06
- 1018:b082 -> pass1_1018_8fee
- 1018:b11e -> pass1_1018_80be
- 1018:b1ba -> pass1_1018_9306
- 1018:b256 -> pass1_1018_889e
- 1018:b2f2 -> pass1_1018_8e86
- 1018:b38e -> pass1_1018_7f56
- 1018:b42a -> pass1_1018_8736
- 1018:b4c6 -> pass1_1018_8d1e
- 1018:b562 -> pass1_1018_7dee
- 1018:b5fe -> pass1_1018_853e
- 1018:b69a -> pass1_1018_83d6
- 1018:b736 -> pass1_1018_91e6
- 1018:b7d2 -> pass1_1018_82fe
- 1018:b86e -> pass1_1018_8ade
- 1018:b90a -> pass1_1018_90c6
- 1018:b9a6 -> pass1_1018_8196
- 1018:ba42 -> pass1_1018_9276
- 1018:bade -> pass1_1018_8976
- 1018:bb7a -> pass1_1018_8f5e
- 1018:bc16 -> pass1_1018_802e
- 1018:bcb2 -> pass1_1018_880e
- 1018:bd4e -> pass1_1018_8df6
- 1018:bdea -> pass1_1018_7ec6
- 1018:be86 -> pass1_1018_8616
- 1018:bf22 -> pass1_1018_86a6
- 1018:bfbe -> pass1_1018_8c8e
- 1018:c05a -> pass1_1018_84ae
- 1018:c0f6 -> pass1_1018_8bb6
- 1018:c192 -> pass1_1018_919e
- 1018:c22e -> pass1_1018_826e
- 1018:c2ca -> pass1_1018_8a4e
- 1018:c366 -> pass1_1018_9036

    1018:93de  06  81  18  10       addr         pass1_1018_8106
    1018:93e2  ea  68  08  10       addr         pass1_1008_68ea
    1018:93e6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:93ea  c6  68  08  10       addr         pass1_1008_68c6
    1018:93ee  40  96  08  10       addr         send_msg_1008_9640
    1018:93f2  64  96  08  10       addr         set_win_text_1008_9664
    1018:93f6  2c  37  08  10       addr         pass1_1008_372c
    1018:93fa  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:93fe  3c  37  08  10       addr         pass1_1008_373c
    1018:9402  40  37  08  10       addr         pass1_1008_3740
    1018:9406  44  37  08  10       addr         pass1_1008_3744
    1018:940a  48  37  08  10       addr         pass1_1008_3748
    1018:940e  4c  37  08  10       addr         pass1_1008_374c
    1018:9412  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9416  98  96  08  10       addr         destroy_win_1008_9698
    1018:941a  50  37  08  10       addr         pass1_1008_3750
    1018:941e  76  6a  18  10       addr         FUN_1018_6a76
    1018:9422  60  9c  08  10       addr         pass1_1008_9c60
    1018:9426  58  37  08  10       addr         pass1_1008_3758
    1018:942a  24  63  08  10       addr         FUN_1008_6324
    1018:942e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9432  62  37  08  10       addr         pass1_1008_3762
    1018:9436  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:943a  66  37  08  10       addr         pass1_1008_3766
    1018:943e  6a  37  08  10       addr         FUN_1008_376a
    1018:9442  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9446  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:944a  02  6b  08  10       addr         pass1_1008_6b02
    1018:944e  7a  37  08  10       addr         pass1_1008_377a
    1018:9452  52  9c  08  10       addr         pass1_1008_9c52
    1018:9456  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:945a  16  9c  08  10       addr         pass1_1008_9c16
    1018:945e  30  9c  08  10       addr         pass1_1008_9c30
    1018:9462  86  9c  08  10       addr         pass1_1008_9c86
    1018:9466  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:946a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:946e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9472  28  63  08  10       addr         FUN_1008_6328
    1018:9476  2c  63  08  10       addr         FUN_1008_632c
    1018:947a  4e  93  18  10       addr         pass1_1018_934e
    1018:947e  ea  68  08  10       addr         pass1_1008_68ea
    1018:9482  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9486  c6  68  08  10       addr         pass1_1008_68c6
    1018:948a  40  96  08  10       addr         send_msg_1008_9640
    1018:948e  64  96  08  10       addr         set_win_text_1008_9664
    1018:9492  2c  37  08  10       addr         pass1_1008_372c
    1018:9496  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:949a  3c  37  08  10       addr         pass1_1008_373c
    1018:949e  40  37  08  10       addr         pass1_1008_3740
    1018:94a2  44  37  08  10       addr         pass1_1008_3744
    1018:94a6  48  37  08  10       addr         pass1_1008_3748
    1018:94aa  4c  37  08  10       addr         pass1_1008_374c
    1018:94ae  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:94b2  98  96  08  10       addr         destroy_win_1008_9698
    1018:94b6  50  37  08  10       addr         pass1_1008_3750
    1018:94ba  76  6a  18  10       addr         FUN_1018_6a76
    1018:94be  60  9c  08  10       addr         pass1_1008_9c60
    1018:94c2  58  37  08  10       addr         pass1_1008_3758
    1018:94c6  24  63  08  10       addr         FUN_1008_6324
    1018:94ca  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:94ce  62  37  08  10       addr         pass1_1008_3762
    1018:94d2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:94d6  66  37  08  10       addr         pass1_1008_3766
    1018:94da  6a  37  08  10       addr         FUN_1008_376a
    1018:94de  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:94e2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:94e6  02  6b  08  10       addr         pass1_1008_6b02
    1018:94ea  7a  37  08  10       addr         pass1_1008_377a
    1018:94ee  52  9c  08  10       addr         pass1_1008_9c52
    1018:94f2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:94f6  16  9c  08  10       addr         pass1_1008_9c16
    1018:94fa  30  9c  08  10       addr         pass1_1008_9c30
    1018:94fe  86  9c  08  10       addr         pass1_1008_9c86
    1018:9502  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9506  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:950a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:950e  28  63  08  10       addr         FUN_1008_6328
    1018:9512  2c  63  08  10       addr         FUN_1008_632c
    1018:9516  e6  88  18  10       addr         pass1_1018_88e6
    1018:951a  ea  68  08  10       addr         pass1_1008_68ea
    1018:951e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9522  c6  68  08  10       addr         pass1_1008_68c6
    1018:9526  40  96  08  10       addr         send_msg_1008_9640
    1018:952a  64  96  08  10       addr         set_win_text_1008_9664
    1018:952e  2c  37  08  10       addr         pass1_1008_372c
    1018:9532  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9536  3c  37  08  10       addr         pass1_1008_373c
    1018:953a  40  37  08  10       addr         pass1_1008_3740
    1018:953e  44  37  08  10       addr         pass1_1008_3744
    1018:9542  48  37  08  10       addr         pass1_1008_3748
    1018:9546  4c  37  08  10       addr         pass1_1008_374c
    1018:954a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:954e  98  96  08  10       addr         destroy_win_1008_9698
    1018:9552  50  37  08  10       addr         pass1_1008_3750
    1018:9556  76  6a  18  10       addr         FUN_1018_6a76
    1018:955a  60  9c  08  10       addr         pass1_1008_9c60
    1018:955e  58  37  08  10       addr         pass1_1008_3758
    1018:9562  24  63  08  10       addr         FUN_1008_6324
    1018:9566  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:956a  62  37  08  10       addr         pass1_1008_3762
    1018:956e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9572  66  37  08  10       addr         pass1_1008_3766
    1018:9576  6a  37  08  10       addr         FUN_1008_376a
    1018:957a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:957e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9582  02  6b  08  10       addr         pass1_1008_6b02
    1018:9586  7a  37  08  10       addr         pass1_1008_377a
    1018:958a  52  9c  08  10       addr         pass1_1008_9c52
    1018:958e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9592  16  9c  08  10       addr         pass1_1008_9c16
    1018:9596  30  9c  08  10       addr         pass1_1008_9c30
    1018:959a  86  9c  08  10       addr         pass1_1008_9c86
    1018:959e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:95a2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:95a6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:95aa  28  63  08  10       addr         FUN_1008_6328
    1018:95ae  2c  63  08  10       addr         FUN_1008_632c
    1018:95b2  ce  8e  18  10       addr         pass1_1018_8ece
    1018:95b6  ea  68  08  10       addr         pass1_1008_68ea
    1018:95ba  60  97  08  10       addr         create_window_ex_1008_9760
    1018:95be  c6  68  08  10       addr         pass1_1008_68c6
    1018:95c2  40  96  08  10       addr         send_msg_1008_9640
    1018:95c6  64  96  08  10       addr         set_win_text_1008_9664
    1018:95ca  2c  37  08  10       addr         pass1_1008_372c
    1018:95ce  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:95d2  3c  37  08  10       addr         pass1_1008_373c
    1018:95d6  40  37  08  10       addr         pass1_1008_3740
    1018:95da  44  37  08  10       addr         pass1_1008_3744
    1018:95de  48  37  08  10       addr         pass1_1008_3748
    1018:95e2  4c  37  08  10       addr         pass1_1008_374c
    1018:95e6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:95ea  98  96  08  10       addr         destroy_win_1008_9698
    1018:95ee  50  37  08  10       addr         pass1_1008_3750
    1018:95f2  76  6a  18  10       addr         FUN_1018_6a76
    1018:95f6  60  9c  08  10       addr         pass1_1008_9c60
    1018:95fa  58  37  08  10       addr         pass1_1008_3758
    1018:95fe  24  63  08  10       addr         FUN_1008_6324
    1018:9602  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9606  62  37  08  10       addr         pass1_1008_3762
    1018:960a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:960e  66  37  08  10       addr         pass1_1008_3766
    1018:9612  6a  37  08  10       addr         FUN_1008_376a
    1018:9616  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:961a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:961e  02  6b  08  10       addr         pass1_1008_6b02
    1018:9622  7a  37  08  10       addr         pass1_1008_377a
    1018:9626  52  9c  08  10       addr         pass1_1008_9c52
    1018:962a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:962e  16  9c  08  10       addr         pass1_1008_9c16
    1018:9632  30  9c  08  10       addr         pass1_1008_9c30
    1018:9636  86  9c  08  10       addr         pass1_1008_9c86
    1018:963a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:963e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9642  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9646  28  63  08  10       addr         FUN_1008_6328
    1018:964a  2c  63  08  10       addr         FUN_1008_632c
    1018:964e  9e  7f  18  10       addr         pass1_1018_7f9e
    1018:9652  ea  68  08  10       addr         pass1_1008_68ea
    1018:9656  60  97  08  10       addr         create_window_ex_1008_9760
    1018:965a  c6  68  08  10       addr         pass1_1008_68c6
    1018:965e  40  96  08  10       addr         send_msg_1008_9640
    1018:9662  64  96  08  10       addr         set_win_text_1008_9664
    1018:9666  2c  37  08  10       addr         pass1_1008_372c
    1018:966a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:966e  3c  37  08  10       addr         pass1_1008_373c
    1018:9672  40  37  08  10       addr         pass1_1008_3740
    1018:9676  44  37  08  10       addr         pass1_1008_3744
    1018:967a  48  37  08  10       addr         pass1_1008_3748
    1018:967e  4c  37  08  10       addr         pass1_1008_374c
    1018:9682  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9686  98  96  08  10       addr         destroy_win_1008_9698
    1018:968a  50  37  08  10       addr         pass1_1008_3750
    1018:968e  76  6a  18  10       addr         FUN_1018_6a76
    1018:9692  60  9c  08  10       addr         pass1_1008_9c60
    1018:9696  58  37  08  10       addr         pass1_1008_3758
    1018:969a  24  63  08  10       addr         FUN_1008_6324
    1018:969e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:96a2  62  37  08  10       addr         pass1_1008_3762
    1018:96a6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:96aa  66  37  08  10       addr         pass1_1008_3766
    1018:96ae  6a  37  08  10       addr         FUN_1008_376a
    1018:96b2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:96b6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:96ba  02  6b  08  10       addr         pass1_1008_6b02
    1018:96be  7a  37  08  10       addr         pass1_1008_377a
    1018:96c2  52  9c  08  10       addr         pass1_1008_9c52
    1018:96c6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:96ca  16  9c  08  10       addr         pass1_1008_9c16
    1018:96ce  30  9c  08  10       addr         pass1_1008_9c30
    1018:96d2  86  9c  08  10       addr         pass1_1008_9c86
    1018:96d6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:96da  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:96de  8e  62  08  10       addr         destroy_win_1008_628e
    1018:96e2  28  63  08  10       addr         FUN_1008_6328
    1018:96e6  2c  63  08  10       addr         FUN_1008_632c
    1018:96ea  7e  87  18  10       addr         pass1_1018_877e
    1018:96ee  ea  68  08  10       addr         pass1_1008_68ea
    1018:96f2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:96f6  c6  68  08  10       addr         pass1_1008_68c6
    1018:96fa  40  96  08  10       addr         send_msg_1008_9640
    1018:96fe  64  96  08  10       addr         set_win_text_1008_9664
    1018:9702  2c  37  08  10       addr         pass1_1008_372c
    1018:9706  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:970a  3c  37  08  10       addr         pass1_1008_373c
    1018:970e  40  37  08  10       addr         pass1_1008_3740
    1018:9712  44  37  08  10       addr         pass1_1008_3744
    1018:9716  48  37  08  10       addr         pass1_1008_3748
    1018:971a  4c  37  08  10       addr         pass1_1008_374c
    1018:971e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9722  98  96  08  10       addr         destroy_win_1008_9698
    1018:9726  50  37  08  10       addr         pass1_1008_3750
    1018:972a  76  6a  18  10       addr         FUN_1018_6a76
    1018:972e  60  9c  08  10       addr         pass1_1008_9c60
    1018:9732  58  37  08  10       addr         pass1_1008_3758
    1018:9736  24  63  08  10       addr         FUN_1008_6324
    1018:973a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:973e  62  37  08  10       addr         pass1_1008_3762
    1018:9742  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9746  66  37  08  10       addr         pass1_1008_3766
    1018:974a  6a  37  08  10       addr         FUN_1008_376a
    1018:974e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9752  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9756  02  6b  08  10       addr         pass1_1008_6b02
    1018:975a  7a  37  08  10       addr         pass1_1008_377a
    1018:975e  52  9c  08  10       addr         pass1_1008_9c52
    1018:9762  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9766  16  9c  08  10       addr         pass1_1008_9c16
    1018:976a  30  9c  08  10       addr         pass1_1008_9c30
    1018:976e  86  9c  08  10       addr         pass1_1008_9c86
    1018:9772  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9776  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:977a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:977e  28  63  08  10       addr         FUN_1008_6328
    1018:9782  2c  63  08  10       addr         FUN_1008_632c
    1018:9786  66  8d  18  10       addr         pass1_1018_8d66
    1018:978a  ea  68  08  10       addr         pass1_1008_68ea
    1018:978e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9792  c6  68  08  10       addr         pass1_1008_68c6
    1018:9796  40  96  08  10       addr         send_msg_1008_9640
    1018:979a  64  96  08  10       addr         set_win_text_1008_9664
    1018:979e  2c  37  08  10       addr         pass1_1008_372c
    1018:97a2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:97a6  3c  37  08  10       addr         pass1_1008_373c
    1018:97aa  40  37  08  10       addr         pass1_1008_3740
    1018:97ae  44  37  08  10       addr         pass1_1008_3744
    1018:97b2  48  37  08  10       addr         pass1_1008_3748
    1018:97b6  4c  37  08  10       addr         pass1_1008_374c
    1018:97ba  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:97be  98  96  08  10       addr         destroy_win_1008_9698
    1018:97c2  50  37  08  10       addr         pass1_1008_3750
    1018:97c6  76  6a  18  10       addr         FUN_1018_6a76
    1018:97ca  60  9c  08  10       addr         pass1_1008_9c60
    1018:97ce  58  37  08  10       addr         pass1_1008_3758
    1018:97d2  24  63  08  10       addr         FUN_1008_6324
    1018:97d6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:97da  62  37  08  10       addr         pass1_1008_3762
    1018:97de  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:97e2  66  37  08  10       addr         pass1_1008_3766
    1018:97e6  6a  37  08  10       addr         FUN_1008_376a
    1018:97ea  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:97ee  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:97f2  02  6b  08  10       addr         pass1_1008_6b02
    1018:97f6  7a  37  08  10       addr         pass1_1008_377a
    1018:97fa  52  9c  08  10       addr         pass1_1008_9c52
    1018:97fe  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9802  16  9c  08  10       addr         pass1_1008_9c16
    1018:9806  30  9c  08  10       addr         pass1_1008_9c30
    1018:980a  86  9c  08  10       addr         pass1_1008_9c86
    1018:980e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9812  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9816  8e  62  08  10       addr         destroy_win_1008_628e
    1018:981a  28  63  08  10       addr         FUN_1008_6328
    1018:981e  2c  63  08  10       addr         FUN_1008_632c
    1018:9822  36  7e  18  10       addr         pass1_1018_7e36
    1018:9826  ea  68  08  10       addr         pass1_1008_68ea
    1018:982a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:982e  c6  68  08  10       addr         pass1_1008_68c6
    1018:9832  40  96  08  10       addr         send_msg_1008_9640
    1018:9836  64  96  08  10       addr         set_win_text_1008_9664
    1018:983a  2c  37  08  10       addr         pass1_1008_372c
    1018:983e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9842  3c  37  08  10       addr         pass1_1008_373c
    1018:9846  40  37  08  10       addr         pass1_1008_3740
    1018:984a  44  37  08  10       addr         pass1_1008_3744
    1018:984e  48  37  08  10       addr         pass1_1008_3748
    1018:9852  4c  37  08  10       addr         pass1_1008_374c
    1018:9856  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:985a  98  96  08  10       addr         destroy_win_1008_9698
    1018:985e  50  37  08  10       addr         pass1_1008_3750
    1018:9862  76  6a  18  10       addr         FUN_1018_6a76
    1018:9866  60  9c  08  10       addr         pass1_1008_9c60
    1018:986a  58  37  08  10       addr         pass1_1008_3758
    1018:986e  24  63  08  10       addr         FUN_1008_6324
    1018:9872  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9876  62  37  08  10       addr         pass1_1008_3762
    1018:987a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:987e  66  37  08  10       addr         pass1_1008_3766
    1018:9882  6a  37  08  10       addr         FUN_1008_376a
    1018:9886  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:988a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:988e  02  6b  08  10       addr         pass1_1008_6b02
    1018:9892  7a  37  08  10       addr         pass1_1008_377a
    1018:9896  52  9c  08  10       addr         pass1_1008_9c52
    1018:989a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:989e  16  9c  08  10       addr         pass1_1008_9c16
    1018:98a2  30  9c  08  10       addr         pass1_1008_9c30
    1018:98a6  86  9c  08  10       addr         pass1_1008_9c86
    1018:98aa  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:98ae  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:98b2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:98b6  28  63  08  10       addr         FUN_1008_6328
    1018:98ba  2c  63  08  10       addr         FUN_1008_632c
    1018:98be  86  85  18  10       addr         pass1_1018_8586
    1018:98c2  ea  68  08  10       addr         pass1_1008_68ea
    1018:98c6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:98ca  c6  68  08  10       addr         pass1_1008_68c6
    1018:98ce  40  96  08  10       addr         send_msg_1008_9640
    1018:98d2  64  96  08  10       addr         set_win_text_1008_9664
    1018:98d6  2c  37  08  10       addr         pass1_1008_372c
    1018:98da  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:98de  3c  37  08  10       addr         pass1_1008_373c
    1018:98e2  40  37  08  10       addr         pass1_1008_3740
    1018:98e6  44  37  08  10       addr         pass1_1008_3744
    1018:98ea  48  37  08  10       addr         pass1_1008_3748
    1018:98ee  4c  37  08  10       addr         pass1_1008_374c
    1018:98f2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:98f6  98  96  08  10       addr         destroy_win_1008_9698
    1018:98fa  50  37  08  10       addr         pass1_1008_3750
    1018:98fe  76  6a  18  10       addr         FUN_1018_6a76
    1018:9902  60  9c  08  10       addr         pass1_1008_9c60
    1018:9906  58  37  08  10       addr         pass1_1008_3758
    1018:990a  24  63  08  10       addr         FUN_1008_6324
    1018:990e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9912  62  37  08  10       addr         pass1_1008_3762
    1018:9916  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:991a  66  37  08  10       addr         pass1_1008_3766
    1018:991e  6a  37  08  10       addr         FUN_1008_376a
    1018:9922  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9926  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:992a  02  6b  08  10       addr         pass1_1008_6b02
    1018:992e  7a  37  08  10       addr         pass1_1008_377a
    1018:9932  52  9c  08  10       addr         pass1_1008_9c52
    1018:9936  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:993a  16  9c  08  10       addr         pass1_1008_9c16
    1018:993e  30  9c  08  10       addr         pass1_1008_9c30
    1018:9942  86  9c  08  10       addr         pass1_1008_9c86
    1018:9946  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:994a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:994e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9952  28  63  08  10       addr         FUN_1008_6328
    1018:9956  2c  63  08  10       addr         FUN_1008_632c
    1018:995a  1e  84  18  10       addr         pass1_1018_841e
    1018:995e  ea  68  08  10       addr         pass1_1008_68ea
    1018:9962  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9966  c6  68  08  10       addr         pass1_1008_68c6
    1018:996a  40  96  08  10       addr         send_msg_1008_9640
    1018:996e  64  96  08  10       addr         set_win_text_1008_9664
    1018:9972  2c  37  08  10       addr         pass1_1008_372c
    1018:9976  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:997a  3c  37  08  10       addr         pass1_1008_373c
    1018:997e  40  37  08  10       addr         pass1_1008_3740
    1018:9982  44  37  08  10       addr         pass1_1008_3744
    1018:9986  48  37  08  10       addr         pass1_1008_3748
    1018:998a  4c  37  08  10       addr         pass1_1008_374c
    1018:998e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9992  98  96  08  10       addr         destroy_win_1008_9698
    1018:9996  50  37  08  10       addr         pass1_1008_3750
    1018:999a  76  6a  18  10       addr         FUN_1018_6a76
    1018:999e  60  9c  08  10       addr         pass1_1008_9c60
    1018:99a2  58  37  08  10       addr         pass1_1008_3758
    1018:99a6  24  63  08  10       addr         FUN_1008_6324
    1018:99aa  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:99ae  62  37  08  10       addr         pass1_1008_3762
    1018:99b2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:99b6  66  37  08  10       addr         pass1_1008_3766
    1018:99ba  6a  37  08  10       addr         FUN_1008_376a
    1018:99be  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:99c2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:99c6  02  6b  08  10       addr         pass1_1008_6b02
    1018:99ca  7a  37  08  10       addr         pass1_1008_377a
    1018:99ce  52  9c  08  10       addr         pass1_1008_9c52
    1018:99d2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:99d6  16  9c  08  10       addr         pass1_1008_9c16
    1018:99da  30  9c  08  10       addr         pass1_1008_9c30
    1018:99de  86  9c  08  10       addr         pass1_1008_9c86
    1018:99e2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:99e6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:99ea  8e  62  08  10       addr         destroy_win_1008_628e
    1018:99ee  28  63  08  10       addr         FUN_1008_6328
    1018:99f2  2c  63  08  10       addr         FUN_1008_632c
    1018:99f6  2e  92  18  10       addr         pass1_1018_922e
    1018:99fa  ea  68  08  10       addr         pass1_1008_68ea
    1018:99fe  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9a02  c6  68  08  10       addr         pass1_1008_68c6
    1018:9a06  40  96  08  10       addr         send_msg_1008_9640
    1018:9a0a  64  96  08  10       addr         set_win_text_1008_9664
    1018:9a0e  2c  37  08  10       addr         pass1_1008_372c
    1018:9a12  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9a16  3c  37  08  10       addr         pass1_1008_373c
    1018:9a1a  40  37  08  10       addr         pass1_1008_3740
    1018:9a1e  44  37  08  10       addr         pass1_1008_3744
    1018:9a22  48  37  08  10       addr         pass1_1008_3748
    1018:9a26  4c  37  08  10       addr         pass1_1008_374c
    1018:9a2a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9a2e  98  96  08  10       addr         destroy_win_1008_9698
    1018:9a32  50  37  08  10       addr         pass1_1008_3750
    1018:9a36  76  6a  18  10       addr         FUN_1018_6a76
    1018:9a3a  60  9c  08  10       addr         pass1_1008_9c60
    1018:9a3e  58  37  08  10       addr         pass1_1008_3758
    1018:9a42  24  63  08  10       addr         FUN_1008_6324
    1018:9a46  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9a4a  62  37  08  10       addr         pass1_1008_3762
    1018:9a4e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9a52  66  37  08  10       addr         pass1_1008_3766
    1018:9a56  6a  37  08  10       addr         FUN_1008_376a
    1018:9a5a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9a5e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9a62  02  6b  08  10       addr         pass1_1008_6b02
    1018:9a66  7a  37  08  10       addr         pass1_1008_377a
    1018:9a6a  52  9c  08  10       addr         pass1_1008_9c52
    1018:9a6e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9a72  16  9c  08  10       addr         pass1_1008_9c16
    1018:9a76  30  9c  08  10       addr         pass1_1008_9c30
    1018:9a7a  86  9c  08  10       addr         pass1_1008_9c86
    1018:9a7e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9a82  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9a86  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9a8a  28  63  08  10       addr         FUN_1008_6328
    1018:9a8e  2c  63  08  10       addr         FUN_1008_632c
    1018:9a92  46  83  18  10       addr         pass1_1018_8346
    1018:9a96  ea  68  08  10       addr         pass1_1008_68ea
    1018:9a9a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9a9e  c6  68  08  10       addr         pass1_1008_68c6
    1018:9aa2  40  96  08  10       addr         send_msg_1008_9640
    1018:9aa6  64  96  08  10       addr         set_win_text_1008_9664
    1018:9aaa  2c  37  08  10       addr         pass1_1008_372c
    1018:9aae  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9ab2  3c  37  08  10       addr         pass1_1008_373c
    1018:9ab6  40  37  08  10       addr         pass1_1008_3740
    1018:9aba  44  37  08  10       addr         pass1_1008_3744
    1018:9abe  48  37  08  10       addr         pass1_1008_3748
    1018:9ac2  4c  37  08  10       addr         pass1_1008_374c
    1018:9ac6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9aca  98  96  08  10       addr         destroy_win_1008_9698
    1018:9ace  50  37  08  10       addr         pass1_1008_3750
    1018:9ad2  76  6a  18  10       addr         FUN_1018_6a76
    1018:9ad6  60  9c  08  10       addr         pass1_1008_9c60
    1018:9ada  58  37  08  10       addr         pass1_1008_3758
    1018:9ade  24  63  08  10       addr         FUN_1008_6324
    1018:9ae2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9ae6  62  37  08  10       addr         pass1_1008_3762
    1018:9aea  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9aee  66  37  08  10       addr         pass1_1008_3766
    1018:9af2  6a  37  08  10       addr         FUN_1008_376a
    1018:9af6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9afa  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9afe  02  6b  08  10       addr         pass1_1008_6b02
    1018:9b02  7a  37  08  10       addr         pass1_1008_377a
    1018:9b06  52  9c  08  10       addr         pass1_1008_9c52
    1018:9b0a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9b0e  16  9c  08  10       addr         pass1_1008_9c16
    1018:9b12  30  9c  08  10       addr         pass1_1008_9c30
    1018:9b16  86  9c  08  10       addr         pass1_1008_9c86
    1018:9b1a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9b1e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9b22  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9b26  28  63  08  10       addr         FUN_1008_6328
    1018:9b2a  2c  63  08  10       addr         FUN_1008_632c
    1018:9b2e  26  8b  18  10       db *         pass1_1018_8b26
    1018:9b32  ea  68  08  10       addr         pass1_1008_68ea
    1018:9b36  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9b3a  c6  68  08  10       addr         pass1_1008_68c6
    1018:9b3e  40  96  08  10       addr         send_msg_1008_9640
    1018:9b42  64  96  08  10       addr         set_win_text_1008_9664
    1018:9b46  2c  37  08  10       addr         pass1_1008_372c
    1018:9b4a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9b4e  3c  37  08  10       addr         pass1_1008_373c
    1018:9b52  40  37  08  10       addr         pass1_1008_3740
    1018:9b56  44  37  08  10       addr         pass1_1008_3744
    1018:9b5a  48  37  08  10       addr         pass1_1008_3748
    1018:9b5e  4c  37  08  10       addr         pass1_1008_374c
    1018:9b62  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9b66  98  96  08  10       addr         destroy_win_1008_9698
    1018:9b6a  50  37  08  10       addr         pass1_1008_3750
    1018:9b6e  76  6a  18  10       addr         FUN_1018_6a76
    1018:9b72  60  9c  08  10       addr         pass1_1008_9c60
    1018:9b76  58  37  08  10       addr         pass1_1008_3758
    1018:9b7a  24  63  08  10       addr         FUN_1008_6324
    1018:9b7e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9b82  62  37  08  10       addr         pass1_1008_3762
    1018:9b86  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9b8a  66  37  08  10       addr         pass1_1008_3766
    1018:9b8e  6a  37  08  10       addr         FUN_1008_376a
    1018:9b92  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9b96  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9b9a  02  6b  08  10       addr         pass1_1008_6b02
    1018:9b9e  7a  37  08  10       addr         pass1_1008_377a
    1018:9ba2  52  9c  08  10       addr         pass1_1008_9c52
    1018:9ba6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9baa  16  9c  08  10       addr         pass1_1008_9c16
    1018:9bae  30  9c  08  10       addr         pass1_1008_9c30
    1018:9bb2  86  9c  08  10       addr         pass1_1008_9c86
    1018:9bb6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9bba  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9bbe  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9bc2  28  63  08  10       addr         FUN_1008_6328
    1018:9bc6  2c  63  08  10       addr         FUN_1008_632c
    1018:9bca  0e  91  18  10       addr         pass1_1018_910e
    1018:9bce  ea  68  08  10       addr         pass1_1008_68ea
    1018:9bd2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9bd6  c6  68  08  10       addr         pass1_1008_68c6
    1018:9bda  40  96  08  10       addr         send_msg_1008_9640
    1018:9bde  64  96  08  10       addr         set_win_text_1008_9664
    1018:9be2  2c  37  08  10       addr         pass1_1008_372c
    1018:9be6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9bea  3c  37  08  10       addr         pass1_1008_373c
    1018:9bee  40  37  08  10       addr         pass1_1008_3740
    1018:9bf2  44  37  08  10       addr         pass1_1008_3744
    1018:9bf6  48  37  08  10       addr         pass1_1008_3748
    1018:9bfa  4c  37  08  10       addr         pass1_1008_374c
    1018:9bfe  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9c02  98  96  08  10       addr         destroy_win_1008_9698
    1018:9c06  50  37  08  10       addr         pass1_1008_3750
    1018:9c0a  76  6a  18  10       addr         FUN_1018_6a76
    1018:9c0e  60  9c  08  10       addr         pass1_1008_9c60
    1018:9c12  58  37  08  10       addr         pass1_1008_3758
    1018:9c16  24  63  08  10       addr         FUN_1008_6324
    1018:9c1a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9c1e  62  37  08  10       addr         pass1_1008_3762
    1018:9c22  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9c26  66  37  08  10       addr         pass1_1008_3766
    1018:9c2a  6a  37  08  10       addr         FUN_1008_376a
    1018:9c2e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9c32  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9c36  02  6b  08  10       addr         pass1_1008_6b02
    1018:9c3a  7a  37  08  10       addr         pass1_1008_377a
    1018:9c3e  52  9c  08  10       addr         pass1_1008_9c52
    1018:9c42  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9c46  16  9c  08  10       addr         pass1_1008_9c16
    1018:9c4a  30  9c  08  10       addr         pass1_1008_9c30
    1018:9c4e  86  9c  08  10       addr         pass1_1008_9c86
    1018:9c52  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9c56  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9c5a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9c5e  28  63  08  10       addr         FUN_1008_6328
    1018:9c62  2c  63  08  10       addr         FUN_1008_632c
    1018:9c66  de  81  18  10       addr         pass1_1018_81de
    1018:9c6a  ea  68  08  10       addr         pass1_1008_68ea
    1018:9c6e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9c72  c6  68  08  10       addr         pass1_1008_68c6
    1018:9c76  40  96  08  10       addr         send_msg_1008_9640
    1018:9c7a  64  96  08  10       addr         set_win_text_1008_9664
    1018:9c7e  2c  37  08  10       addr         pass1_1008_372c
    1018:9c82  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9c86  3c  37  08  10       addr         pass1_1008_373c
    1018:9c8a  40  37  08  10       addr         pass1_1008_3740
    1018:9c8e  44  37  08  10       addr         pass1_1008_3744
    1018:9c92  48  37  08  10       addr         pass1_1008_3748
    1018:9c96  4c  37  08  10       addr         pass1_1008_374c
    1018:9c9a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9c9e  98  96  08  10       addr         destroy_win_1008_9698
    1018:9ca2  50  37  08  10       addr         pass1_1008_3750
    1018:9ca6  76  6a  18  10       addr         FUN_1018_6a76
    1018:9caa  60  9c  08  10       addr         pass1_1008_9c60
    1018:9cae  58  37  08  10       addr         pass1_1008_3758
    1018:9cb2  24  63  08  10       addr         FUN_1008_6324
    1018:9cb6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9cba  62  37  08  10       addr         pass1_1008_3762
    1018:9cbe  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9cc2  66  37  08  10       addr         pass1_1008_3766
    1018:9cc6  6a  37  08  10       addr         FUN_1008_376a
    1018:9cca  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9cce  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9cd2  02  6b  08  10       addr         pass1_1008_6b02
    1018:9cd6  7a  37  08  10       addr         pass1_1008_377a
    1018:9cda  52  9c  08  10       addr         pass1_1008_9c52
    1018:9cde  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9ce2  16  9c  08  10       addr         pass1_1008_9c16
    1018:9ce6  30  9c  08  10       addr         pass1_1008_9c30
    1018:9cea  86  9c  08  10       addr         pass1_1008_9c86
    1018:9cee  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9cf2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9cf6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9cfa  28  63  08  10       addr         FUN_1008_6328
    1018:9cfe  2c  63  08  10       addr         FUN_1008_632c
    1018:9d02  be  89  18  10       addr         pass1_1018_89be
    1018:9d06  ea  68  08  10       addr         pass1_1008_68ea
    1018:9d0a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9d0e  c6  68  08  10       addr         pass1_1008_68c6
    1018:9d12  40  96  08  10       addr         send_msg_1008_9640
    1018:9d16  64  96  08  10       addr         set_win_text_1008_9664
    1018:9d1a  2c  37  08  10       addr         pass1_1008_372c
    1018:9d1e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9d22  3c  37  08  10       addr         pass1_1008_373c
    1018:9d26  40  37  08  10       addr         pass1_1008_3740
    1018:9d2a  44  37  08  10       addr         pass1_1008_3744
    1018:9d2e  48  37  08  10       addr         pass1_1008_3748
    1018:9d32  4c  37  08  10       addr         pass1_1008_374c
    1018:9d36  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9d3a  98  96  08  10       addr         destroy_win_1008_9698
    1018:9d3e  50  37  08  10       addr         pass1_1008_3750
    1018:9d42  76  6a  18  10       addr         FUN_1018_6a76
    1018:9d46  60  9c  08  10       addr         pass1_1008_9c60
    1018:9d4a  58  37  08  10       addr         pass1_1008_3758
    1018:9d4e  24  63  08  10       addr         FUN_1008_6324
    1018:9d52  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9d56  62  37  08  10       addr         pass1_1008_3762
    1018:9d5a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9d5e  66  37  08  10       addr         pass1_1008_3766
    1018:9d62  6a  37  08  10       addr         FUN_1008_376a
    1018:9d66  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9d6a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9d6e  02  6b  08  10       addr         pass1_1008_6b02
    1018:9d72  7a  37  08  10       addr         pass1_1008_377a
    1018:9d76  52  9c  08  10       addr         pass1_1008_9c52
    1018:9d7a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9d7e  16  9c  08  10       addr         pass1_1008_9c16
    1018:9d82  30  9c  08  10       addr         pass1_1008_9c30
    1018:9d86  86  9c  08  10       addr         pass1_1008_9c86
    1018:9d8a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9d8e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9d92  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9d96  28  63  08  10       addr         FUN_1008_6328
    1018:9d9a  2c  63  08  10       addr         FUN_1008_632c
    1018:9d9e  a6  8f  18  10       addr         pass1_1018_8fa6
    1018:9da2  ea  68  08  10       addr         pass1_1008_68ea
    1018:9da6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9daa  c6  68  08  10       addr         pass1_1008_68c6
    1018:9dae  40  96  08  10       addr         send_msg_1008_9640
    1018:9db2  64  96  08  10       addr         set_win_text_1008_9664
    1018:9db6  2c  37  08  10       addr         pass1_1008_372c
    1018:9dba  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9dbe  3c  37  08  10       addr         pass1_1008_373c
    1018:9dc2  40  37  08  10       addr         pass1_1008_3740
    1018:9dc6  44  37  08  10       addr         pass1_1008_3744
    1018:9dca  48  37  08  10       addr         pass1_1008_3748
    1018:9dce  4c  37  08  10       addr         pass1_1008_374c
    1018:9dd2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9dd6  98  96  08  10       addr         destroy_win_1008_9698
    1018:9dda  50  37  08  10       addr         pass1_1008_3750
    1018:9dde  76  6a  18  10       addr         FUN_1018_6a76
    1018:9de2  60  9c  08  10       addr         pass1_1008_9c60
    1018:9de6  58  37  08  10       addr         pass1_1008_3758
    1018:9dea  24  63  08  10       addr         FUN_1008_6324
    1018:9dee  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9df2  62  37  08  10       addr         pass1_1008_3762
    1018:9df6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9dfa  66  37  08  10       addr         pass1_1008_3766
    1018:9dfe  6a  37  08  10       addr         FUN_1008_376a
    1018:9e02  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9e06  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9e0a  02  6b  08  10       addr         pass1_1008_6b02
    1018:9e0e  7a  37  08  10       addr         pass1_1008_377a
    1018:9e12  52  9c  08  10       addr         pass1_1008_9c52
    1018:9e16  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9e1a  16  9c  08  10       addr         pass1_1008_9c16
    1018:9e1e  30  9c  08  10       addr         pass1_1008_9c30
    1018:9e22  86  9c  08  10       addr         pass1_1008_9c86
    1018:9e26  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9e2a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9e2e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9e32  28  63  08  10       addr         FUN_1008_6328
    1018:9e36  2c  63  08  10       addr         FUN_1008_632c
    1018:9e3a  76  80  18  10       addr         pass1_1018_8076
    1018:9e3e  ea  68  08  10       addr         pass1_1008_68ea
    1018:9e42  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9e46  c6  68  08  10       addr         pass1_1008_68c6
    1018:9e4a  40  96  08  10       addr         send_msg_1008_9640
    1018:9e4e  64  96  08  10       addr         set_win_text_1008_9664
    1018:9e52  2c  37  08  10       addr         pass1_1008_372c
    1018:9e56  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9e5a  3c  37  08  10       addr         pass1_1008_373c
    1018:9e5e  40  37  08  10       addr         pass1_1008_3740
    1018:9e62  44  37  08  10       addr         pass1_1008_3744
    1018:9e66  48  37  08  10       addr         pass1_1008_3748
    1018:9e6a  4c  37  08  10       addr         pass1_1008_374c
    1018:9e6e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9e72  98  96  08  10       addr         destroy_win_1008_9698
    1018:9e76  50  37  08  10       addr         pass1_1008_3750
    1018:9e7a  76  6a  18  10       addr         FUN_1018_6a76
    1018:9e7e  60  9c  08  10       addr         pass1_1008_9c60
    1018:9e82  58  37  08  10       addr         pass1_1008_3758
    1018:9e86  24  63  08  10       addr         FUN_1008_6324
    1018:9e8a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9e8e  62  37  08  10       addr         pass1_1008_3762
    1018:9e92  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9e96  66  37  08  10       addr         pass1_1008_3766
    1018:9e9a  6a  37  08  10       addr         FUN_1008_376a
    1018:9e9e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9ea2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9ea6  02  6b  08  10       addr         pass1_1008_6b02
    1018:9eaa  7a  37  08  10       addr         pass1_1008_377a
    1018:9eae  52  9c  08  10       addr         pass1_1008_9c52
    1018:9eb2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9eb6  16  9c  08  10       addr         pass1_1008_9c16
    1018:9eba  30  9c  08  10       addr         pass1_1008_9c30
    1018:9ebe  86  9c  08  10       addr         pass1_1008_9c86
    1018:9ec2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9ec6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9eca  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9ece  28  63  08  10       addr         FUN_1008_6328
    1018:9ed2  2c  63  08  10       addr         FUN_1008_632c
    1018:9ed6  be  92  18  10       addr         pass1_1018_92be
    1018:9eda  ea  68  08  10       addr         pass1_1008_68ea
    1018:9ede  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9ee2  c6  68  08  10       addr         pass1_1008_68c6
    1018:9ee6  40  96  08  10       addr         send_msg_1008_9640
    1018:9eea  64  96  08  10       addr         set_win_text_1008_9664
    1018:9eee  2c  37  08  10       addr         pass1_1008_372c
    1018:9ef2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9ef6  3c  37  08  10       addr         pass1_1008_373c
    1018:9efa  40  37  08  10       addr         pass1_1008_3740
    1018:9efe  44  37  08  10       addr         pass1_1008_3744
    1018:9f02  48  37  08  10       addr         pass1_1008_3748
    1018:9f06  4c  37  08  10       addr         pass1_1008_374c
    1018:9f0a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9f0e  98  96  08  10       addr         destroy_win_1008_9698
    1018:9f12  50  37  08  10       addr         pass1_1008_3750
    1018:9f16  76  6a  18  10       addr         FUN_1018_6a76
    1018:9f1a  60  9c  08  10       addr         pass1_1008_9c60
    1018:9f1e  58  37  08  10       addr         pass1_1008_3758
    1018:9f22  24  63  08  10       addr         FUN_1008_6324
    1018:9f26  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9f2a  62  37  08  10       addr         pass1_1008_3762
    1018:9f2e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9f32  66  37  08  10       addr         pass1_1008_3766
    1018:9f36  6a  37  08  10       addr         FUN_1008_376a
    1018:9f3a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9f3e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9f42  02  6b  08  10       addr         pass1_1008_6b02
    1018:9f46  7a  37  08  10       addr         pass1_1008_377a
    1018:9f4a  52  9c  08  10       addr         pass1_1008_9c52
    1018:9f4e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9f52  16  9c  08  10       addr         pass1_1008_9c16
    1018:9f56  30  9c  08  10       addr         pass1_1008_9c30
    1018:9f5a  86  9c  08  10       addr         pass1_1008_9c86
    1018:9f5e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9f62  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:9f66  8e  62  08  10       addr         destroy_win_1008_628e
    1018:9f6a  28  63  08  10       addr         FUN_1008_6328
    1018:9f6e  2c  63  08  10       addr         FUN_1008_632c
    1018:9f72  56  88  18  10       addr         pass1_1018_8856
    1018:9f76  ea  68  08  10       addr         pass1_1008_68ea
    1018:9f7a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:9f7e  c6  68  08  10       addr         pass1_1008_68c6
    1018:9f82  40  96  08  10       addr         send_msg_1008_9640
    1018:9f86  64  96  08  10       addr         set_win_text_1008_9664
    1018:9f8a  2c  37  08  10       addr         pass1_1008_372c
    1018:9f8e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:9f92  3c  37  08  10       addr         pass1_1008_373c
    1018:9f96  40  37  08  10       addr         pass1_1008_3740
    1018:9f9a  44  37  08  10       addr         pass1_1008_3744
    1018:9f9e  48  37  08  10       addr         pass1_1008_3748
    1018:9fa2  4c  37  08  10       addr         pass1_1008_374c
    1018:9fa6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:9faa  98  96  08  10       addr         destroy_win_1008_9698
    1018:9fae  50  37  08  10       addr         pass1_1008_3750
    1018:9fb2  76  6a  18  10       addr         FUN_1018_6a76
    1018:9fb6  60  9c  08  10       addr         pass1_1008_9c60
    1018:9fba  58  37  08  10       addr         pass1_1008_3758
    1018:9fbe  24  63  08  10       addr         FUN_1008_6324
    1018:9fc2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:9fc6  62  37  08  10       addr         pass1_1008_3762
    1018:9fca  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:9fce  66  37  08  10       addr         pass1_1008_3766
    1018:9fd2  6a  37  08  10       addr         FUN_1008_376a
    1018:9fd6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:9fda  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:9fde  02  6b  08  10       addr         pass1_1008_6b02
    1018:9fe2  7a  37  08  10       addr         pass1_1008_377a
    1018:9fe6  52  9c  08  10       addr         pass1_1008_9c52
    1018:9fea  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:9fee  16  9c  08  10       addr         pass1_1008_9c16
    1018:9ff2  30  9c  08  10       addr         pass1_1008_9c30
    1018:9ff6  86  9c  08  10       addr         pass1_1008_9c86
    1018:9ffa  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:9ffe  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a002  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a006  28  63  08  10       addr         FUN_1008_6328
    1018:a00a  2c  63  08  10       addr         FUN_1008_632c
    1018:a00e  3e  8e  18  10       addr         pass1_1018_8e3e
    1018:a012  ea  68  08  10       addr         pass1_1008_68ea
    1018:a016  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a01a  c6  68  08  10       addr         pass1_1008_68c6
    1018:a01e  40  96  08  10       addr         send_msg_1008_9640
    1018:a022  64  96  08  10       addr         set_win_text_1008_9664
    1018:a026  2c  37  08  10       addr         pass1_1008_372c
    1018:a02a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a02e  3c  37  08  10       addr         pass1_1008_373c
    1018:a032  40  37  08  10       addr         pass1_1008_3740
    1018:a036  44  37  08  10       addr         pass1_1008_3744
    1018:a03a  48  37  08  10       addr         pass1_1008_3748
    1018:a03e  4c  37  08  10       addr         pass1_1008_374c
    1018:a042  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a046  98  96  08  10       addr         destroy_win_1008_9698
    1018:a04a  50  37  08  10       addr         pass1_1008_3750
    1018:a04e  76  6a  18  10       addr         FUN_1018_6a76
    1018:a052  60  9c  08  10       addr         pass1_1008_9c60
    1018:a056  58  37  08  10       addr         pass1_1008_3758
    1018:a05a  24  63  08  10       addr         FUN_1008_6324
    1018:a05e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a062  62  37  08  10       addr         pass1_1008_3762
    1018:a066  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a06a  66  37  08  10       addr         pass1_1008_3766
    1018:a06e  6a  37  08  10       addr         FUN_1008_376a
    1018:a072  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a076  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a07a  02  6b  08  10       addr         pass1_1008_6b02
    1018:a07e  7a  37  08  10       addr         pass1_1008_377a
    1018:a082  52  9c  08  10       addr         pass1_1008_9c52
    1018:a086  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a08a  16  9c  08  10       addr         pass1_1008_9c16
    1018:a08e  30  9c  08  10       addr         pass1_1008_9c30
    1018:a092  86  9c  08  10       addr         pass1_1008_9c86
    1018:a096  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a09a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a09e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a0a2  28  63  08  10       addr         FUN_1008_6328
    1018:a0a6  2c  63  08  10       addr         FUN_1008_632c
    1018:a0aa  0e  7f  18  10       addr         pass1_1018_7f0e
    1018:a0ae  ea  68  08  10       addr         pass1_1008_68ea
    1018:a0b2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a0b6  c6  68  08  10       addr         pass1_1008_68c6
    1018:a0ba  40  96  08  10       addr         send_msg_1008_9640
    1018:a0be  64  96  08  10       addr         set_win_text_1008_9664
    1018:a0c2  2c  37  08  10       addr         pass1_1008_372c
    1018:a0c6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a0ca  3c  37  08  10       addr         pass1_1008_373c
    1018:a0ce  40  37  08  10       addr         pass1_1008_3740
    1018:a0d2  44  37  08  10       addr         pass1_1008_3744
    1018:a0d6  48  37  08  10       addr         pass1_1008_3748
    1018:a0da  4c  37  08  10       addr         pass1_1008_374c
    1018:a0de  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a0e2  98  96  08  10       addr         destroy_win_1008_9698
    1018:a0e6  50  37  08  10       addr         pass1_1008_3750
    1018:a0ea  76  6a  18  10       addr         FUN_1018_6a76
    1018:a0ee  60  9c  08  10       addr         pass1_1008_9c60
    1018:a0f2  58  37  08  10       addr         pass1_1008_3758
    1018:a0f6  24  63  08  10       addr         FUN_1008_6324
    1018:a0fa  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a0fe  62  37  08  10       addr         pass1_1008_3762
    1018:a102  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a106  66  37  08  10       addr         pass1_1008_3766
    1018:a10a  6a  37  08  10       addr         FUN_1008_376a
    1018:a10e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a112  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a116  02  6b  08  10       addr         pass1_1008_6b02
    1018:a11a  7a  37  08  10       addr         pass1_1008_377a
    1018:a11e  52  9c  08  10       addr         pass1_1008_9c52
    1018:a122  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a126  16  9c  08  10       addr         pass1_1008_9c16
    1018:a12a  30  9c  08  10       addr         pass1_1008_9c30
    1018:a12e  86  9c  08  10       addr         pass1_1008_9c86
    1018:a132  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a136  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a13a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a13e  28  63  08  10       addr         FUN_1008_6328
    1018:a142  2c  63  08  10       addr         FUN_1008_632c
    1018:a146  ee  86  18  10       addr         pass1_1018_86ee
    1018:a14a  ea  68  08  10       addr         pass1_1008_68ea
    1018:a14e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a152  c6  68  08  10       addr         pass1_1008_68c6
    1018:a156  40  96  08  10       addr         send_msg_1008_9640
    1018:a15a  64  96  08  10       addr         set_win_text_1008_9664
    1018:a15e  2c  37  08  10       addr         pass1_1008_372c
    1018:a162  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a166  3c  37  08  10       addr         pass1_1008_373c
    1018:a16a  40  37  08  10       addr         pass1_1008_3740
    1018:a16e  44  37  08  10       addr         pass1_1008_3744
    1018:a172  48  37  08  10       addr         pass1_1008_3748
    1018:a176  4c  37  08  10       addr         pass1_1008_374c
    1018:a17a  2e  74  18  10       addr         FUN_1018_742e
    1018:a17e  98  96  08  10       addr         destroy_win_1008_9698
    1018:a182  50  37  08  10       addr         pass1_1008_3750
    1018:a186  76  6a  18  10       addr         FUN_1018_6a76
    1018:a18a  60  9c  08  10       addr         pass1_1008_9c60
    1018:a18e  58  37  08  10       addr         pass1_1008_3758
    1018:a192  24  63  08  10       addr         FUN_1008_6324
    1018:a196  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a19a  62  37  08  10       addr         pass1_1008_3762
    1018:a19e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a1a2  66  37  08  10       addr         pass1_1008_3766
    1018:a1a6  6a  37  08  10       addr         FUN_1008_376a
    1018:a1aa  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a1ae  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a1b2  02  6b  08  10       addr         pass1_1008_6b02
    1018:a1b6  7a  37  08  10       addr         pass1_1008_377a
    1018:a1ba  52  9c  08  10       addr         pass1_1008_9c52
    1018:a1be  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a1c2  16  9c  08  10       addr         pass1_1008_9c16
    1018:a1c6  30  9c  08  10       addr         pass1_1008_9c30
    1018:a1ca  86  9c  08  10       addr         pass1_1008_9c86
    1018:a1ce  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a1d2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a1d6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a1da  28  63  08  10       addr         FUN_1008_6328
    1018:a1de  2c  63  08  10       addr         FUN_1008_632c
    1018:a1e2  d6  8c  18  10       addr         pass1_1018_8cd6
    1018:a1e6  ea  68  08  10       addr         pass1_1008_68ea
    1018:a1ea  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a1ee  c6  68  08  10       addr         pass1_1008_68c6
    1018:a1f2  40  96  08  10       addr         send_msg_1008_9640
    1018:a1f6  64  96  08  10       addr         set_win_text_1008_9664
    1018:a1fa  2c  37  08  10       addr         pass1_1008_372c
    1018:a1fe  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a202  3c  37  08  10       addr         pass1_1008_373c
    1018:a206  40  37  08  10       addr         pass1_1008_3740
    1018:a20a  44  37  08  10       addr         pass1_1008_3744
    1018:a20e  48  37  08  10       addr         pass1_1008_3748
    1018:a212  4c  37  08  10       addr         pass1_1008_374c
    1018:a216  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a21a  98  96  08  10       addr         destroy_win_1008_9698
    1018:a21e  50  37  08  10       addr         pass1_1008_3750
    1018:a222  76  6a  18  10       addr         FUN_1018_6a76
    1018:a226  60  9c  08  10       addr         pass1_1008_9c60
    1018:a22a  58  37  08  10       addr         pass1_1008_3758
    1018:a22e  24  63  08  10       addr         FUN_1008_6324
    1018:a232  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a236  62  37  08  10       addr         pass1_1008_3762
    1018:a23a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a23e  66  37  08  10       addr         pass1_1008_3766
    1018:a242  6a  37  08  10       addr         FUN_1008_376a
    1018:a246  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a24a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a24e  02  6b  08  10       addr         pass1_1008_6b02
    1018:a252  7a  37  08  10       addr         pass1_1008_377a
    1018:a256  52  9c  08  10       addr         pass1_1008_9c52
    1018:a25a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a25e  16  9c  08  10       addr         pass1_1008_9c16
    1018:a262  30  9c  08  10       addr         pass1_1008_9c30
    1018:a266  86  9c  08  10       addr         pass1_1008_9c86
    1018:a26a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a26e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a272  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a276  28  63  08  10       addr         FUN_1008_6328
    1018:a27a  2c  63  08  10       addr         FUN_1008_632c
    1018:a27e  a6  7d  18  10       addr         pass1_1018_7da6
    1018:a282  ea  68  08  10       addr         pass1_1008_68ea
    1018:a286  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a28a  c6  68  08  10       addr         pass1_1008_68c6
    1018:a28e  40  96  08  10       addr         send_msg_1008_9640
    1018:a292  64  96  08  10       addr         set_win_text_1008_9664
    1018:a296  2c  37  08  10       addr         pass1_1008_372c
    1018:a29a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a29e  3c  37  08  10       addr         pass1_1008_373c
    1018:a2a2  40  37  08  10       addr         pass1_1008_3740
    1018:a2a6  44  37  08  10       addr         pass1_1008_3744
    1018:a2aa  48  37  08  10       addr         pass1_1008_3748
    1018:a2ae  4c  37  08  10       addr         pass1_1008_374c
    1018:a2b2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a2b6  98  96  08  10       addr         destroy_win_1008_9698
    1018:a2ba  50  37  08  10       addr         pass1_1008_3750
    1018:a2be  76  6a  18  10       addr         FUN_1018_6a76
    1018:a2c2  60  9c  08  10       addr         pass1_1008_9c60
    1018:a2c6  58  37  08  10       addr         pass1_1008_3758
    1018:a2ca  24  63  08  10       addr         FUN_1008_6324
    1018:a2ce  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a2d2  62  37  08  10       addr         pass1_1008_3762
    1018:a2d6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a2da  66  37  08  10       addr         pass1_1008_3766
    1018:a2de  6a  37  08  10       addr         FUN_1008_376a
    1018:a2e2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a2e6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a2ea  02  6b  08  10       addr         pass1_1008_6b02
    1018:a2ee  7a  37  08  10       addr         pass1_1008_377a
    1018:a2f2  52  9c  08  10       addr         pass1_1008_9c52
    1018:a2f6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a2fa  16  9c  08  10       addr         pass1_1008_9c16
    1018:a2fe  30  9c  08  10       addr         pass1_1008_9c30
    1018:a302  86  9c  08  10       addr         pass1_1008_9c86
    1018:a306  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a30a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a30e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a312  28  63  08  10       addr         FUN_1008_6328
    1018:a316  2c  63  08  10       addr         FUN_1008_632c
    1018:a31a  f6  84  18  10       addr         pass1_1018_84f6
    1018:a31e  ea  68  08  10       addr         pass1_1008_68ea
    1018:a322  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a326  c6  68  08  10       addr         pass1_1008_68c6
    1018:a32a  40  96  08  10       addr         send_msg_1008_9640
    1018:a32e  64  96  08  10       addr         set_win_text_1008_9664
    1018:a332  2c  37  08  10       addr         pass1_1008_372c
    1018:a336  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a33a  3c  37  08  10       addr         pass1_1008_373c
    1018:a33e  40  37  08  10       addr         pass1_1008_3740
    1018:a342  44  37  08  10       addr         pass1_1008_3744
    1018:a346  48  37  08  10       addr         pass1_1008_3748
    1018:a34a  4c  37  08  10       addr         pass1_1008_374c
    1018:a34e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a352  98  96  08  10       addr         destroy_win_1008_9698
    1018:a356  50  37  08  10       addr         pass1_1008_3750
    1018:a35a  76  6a  18  10       addr         FUN_1018_6a76
    1018:a35e  60  9c  08  10       addr         pass1_1008_9c60
    1018:a362  58  37  08  10       addr         pass1_1008_3758
    1018:a366  24  63  08  10       addr         FUN_1008_6324
    1018:a36a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a36e  62  37  08  10       addr         pass1_1008_3762
    1018:a372  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a376  66  37  08  10       addr         pass1_1008_3766
    1018:a37a  6a  37  08  10       addr         FUN_1008_376a
    1018:a37e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a382  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a386  02  6b  08  10       addr         pass1_1008_6b02
    1018:a38a  7a  37  08  10       addr         pass1_1008_377a
    1018:a38e  52  9c  08  10       addr         pass1_1008_9c52
    1018:a392  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a396  16  9c  08  10       addr         pass1_1008_9c16
    1018:a39a  30  9c  08  10       addr         pass1_1008_9c30
    1018:a39e  86  9c  08  10       addr         pass1_1008_9c86
    1018:a3a2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a3a6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a3aa  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a3ae  28  63  08  10       addr         FUN_1008_6328
    1018:a3b2  2c  63  08  10       addr         FUN_1008_632c
    1018:a3b6  fe  8b  18  10       addr         pass1_1018_8bfe
    1018:a3ba  ea  68  08  10       addr         pass1_1008_68ea
    1018:a3be  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a3c2  c6  68  08  10       addr         pass1_1008_68c6
    1018:a3c6  40  96  08  10       addr         send_msg_1008_9640
    1018:a3ca  64  96  08  10       addr         set_win_text_1008_9664
    1018:a3ce  2c  37  08  10       addr         pass1_1008_372c
    1018:a3d2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a3d6  3c  37  08  10       addr         pass1_1008_373c
    1018:a3da  40  37  08  10       addr         pass1_1008_3740
    1018:a3de  44  37  08  10       addr         pass1_1008_3744
    1018:a3e2  48  37  08  10       addr         pass1_1008_3748
    1018:a3e6  4c  37  08  10       addr         pass1_1008_374c
    1018:a3ea  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a3ee  98  96  08  10       addr         destroy_win_1008_9698
    1018:a3f2  50  37  08  10       addr         pass1_1008_3750
    1018:a3f6  76  6a  18  10       addr         FUN_1018_6a76
    1018:a3fa  60  9c  08  10       addr         pass1_1008_9c60
    1018:a3fe  58  37  08  10       addr         pass1_1008_3758
    1018:a402  24  63  08  10       addr         FUN_1008_6324
    1018:a406  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a40a  62  37  08  10       addr         pass1_1008_3762
    1018:a40e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a412  66  37  08  10       addr         pass1_1008_3766
    1018:a416  6a  37  08  10       addr         FUN_1008_376a
    1018:a41a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a41e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a422  02  6b  08  10       addr         pass1_1008_6b02
    1018:a426  7a  37  08  10       addr         pass1_1008_377a
    1018:a42a  52  9c  08  10       addr         pass1_1008_9c52
    1018:a42e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a432  16  9c  08  10       addr         pass1_1008_9c16
    1018:a436  30  9c  08  10       addr         pass1_1008_9c30
    1018:a43a  86  9c  08  10       addr         pass1_1008_9c86
    1018:a43e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a442  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a446  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a44a  28  63  08  10       addr         FUN_1008_6328
    1018:a44e  2c  63  08  10       addr         FUN_1008_632c
    1018:a452  66  84  18  10       addr         pass1_1018_8466
    1018:a456  ea  68  08  10       addr         pass1_1008_68ea
    1018:a45a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a45e  c6  68  08  10       addr         pass1_1008_68c6
    1018:a462  40  96  08  10       addr         send_msg_1008_9640
    1018:a466  64  96  08  10       addr         set_win_text_1008_9664
    1018:a46a  2c  37  08  10       addr         pass1_1008_372c
    1018:a46e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a472  3c  37  08  10       addr         pass1_1008_373c
    1018:a476  40  37  08  10       addr         pass1_1008_3740
    1018:a47a  44  37  08  10       addr         pass1_1008_3744
    1018:a47e  48  37  08  10       addr         pass1_1008_3748
    1018:a482  4c  37  08  10       addr         pass1_1008_374c
    1018:a486  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a48a  98  96  08  10       addr         destroy_win_1008_9698
    1018:a48e  50  37  08  10       addr         pass1_1008_3750
    1018:a492  76  6a  18  10       addr         FUN_1018_6a76
    1018:a496  60  9c  08  10       addr         pass1_1008_9c60
    1018:a49a  58  37  08  10       addr         pass1_1008_3758
    1018:a49e  24  63  08  10       addr         FUN_1008_6324
    1018:a4a2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a4a6  62  37  08  10       addr         pass1_1008_3762
    1018:a4aa  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a4ae  66  37  08  10       addr         pass1_1008_3766
    1018:a4b2  6a  37  08  10       addr         FUN_1008_376a
    1018:a4b6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a4ba  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a4be  02  6b  08  10       addr         pass1_1008_6b02
    1018:a4c2  7a  37  08  10       addr         pass1_1008_377a
    1018:a4c6  52  9c  08  10       addr         pass1_1008_9c52
    1018:a4ca  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a4ce  16  9c  08  10       addr         pass1_1008_9c16
    1018:a4d2  30  9c  08  10       addr         pass1_1008_9c30
    1018:a4d6  86  9c  08  10       addr         pass1_1008_9c86
    1018:a4da  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a4de  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a4e2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a4e6  28  63  08  10       addr         FUN_1008_6328
    1018:a4ea  2c  63  08  10       addr         FUN_1008_632c
    1018:a4ee  b6  82  18  10       addr         pass1_1018_82b6
    1018:a4f2  ea  68  08  10       addr         pass1_1008_68ea
    1018:a4f6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a4fa  c6  68  08  10       addr         pass1_1008_68c6
    1018:a4fe  40  96  08  10       addr         send_msg_1008_9640
    1018:a502  64  96  08  10       addr         set_win_text_1008_9664
    1018:a506  2c  37  08  10       addr         pass1_1008_372c
    1018:a50a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a50e  3c  37  08  10       addr         pass1_1008_373c
    1018:a512  40  37  08  10       addr         pass1_1008_3740
    1018:a516  44  37  08  10       addr         pass1_1008_3744
    1018:a51a  48  37  08  10       addr         pass1_1008_3748
    1018:a51e  4c  37  08  10       addr         pass1_1008_374c
    1018:a522  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a526  98  96  08  10       addr         destroy_win_1008_9698
    1018:a52a  50  37  08  10       addr         pass1_1008_3750
    1018:a52e  76  6a  18  10       addr         FUN_1018_6a76
    1018:a532  60  9c  08  10       addr         pass1_1008_9c60
    1018:a536  58  37  08  10       addr         pass1_1008_3758
    1018:a53a  24  63  08  10       addr         FUN_1008_6324
    1018:a53e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a542  62  37  08  10       addr         pass1_1008_3762
    1018:a546  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a54a  66  37  08  10       addr         pass1_1008_3766
    1018:a54e  6a  37  08  10       addr         FUN_1008_376a
    1018:a552  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a556  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a55a  02  6b  08  10       addr         pass1_1008_6b02
    1018:a55e  7a  37  08  10       addr         pass1_1008_377a
    1018:a562  52  9c  08  10       addr         pass1_1008_9c52
    1018:a566  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a56a  16  9c  08  10       addr         pass1_1008_9c16
    1018:a56e  30  9c  08  10       addr         pass1_1008_9c30
    1018:a572  86  9c  08  10       addr         pass1_1008_9c86
    1018:a576  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a57a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a57e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a582  28  63  08  10       addr         FUN_1008_6328
    1018:a586  2c  63  08  10       addr         FUN_1008_632c
    1018:a58a  96  8a  18  10       addr         pass1_1018_8a96
    1018:a58e  ea  68  08  10       addr         pass1_1008_68ea
    1018:a592  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a596  c6  68  08  10       addr         pass1_1008_68c6
    1018:a59a  40  96  08  10       addr         send_msg_1008_9640
    1018:a59e  64  96  08  10       addr         set_win_text_1008_9664
    1018:a5a2  2c  37  08  10       addr         pass1_1008_372c
    1018:a5a6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a5aa  3c  37  08  10       addr         pass1_1008_373c
    1018:a5ae  40  37  08  10       addr         pass1_1008_3740
    1018:a5b2  44  37  08  10       addr         pass1_1008_3744
    1018:a5b6  48  37  08  10       addr         pass1_1008_3748
    1018:a5ba  4c  37  08  10       addr         pass1_1008_374c
    1018:a5be  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a5c2  98  96  08  10       addr         destroy_win_1008_9698
    1018:a5c6  50  37  08  10       addr         pass1_1008_3750
    1018:a5ca  76  6a  18  10       addr         FUN_1018_6a76
    1018:a5ce  60  9c  08  10       addr         pass1_1008_9c60
    1018:a5d2  58  37  08  10       addr         pass1_1008_3758
    1018:a5d6  24  63  08  10       addr         FUN_1008_6324
    1018:a5da  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a5de  62  37  08  10       addr         pass1_1008_3762
    1018:a5e2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a5e6  66  37  08  10       addr         pass1_1008_3766
    1018:a5ea  6a  37  08  10       addr         FUN_1008_376a
    1018:a5ee  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a5f2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a5f6  02  6b  08  10       addr         pass1_1008_6b02
    1018:a5fa  7a  37  08  10       addr         pass1_1008_377a
    1018:a5fe  52  9c  08  10       addr         pass1_1008_9c52
    1018:a602  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a606  16  9c  08  10       addr         pass1_1008_9c16
    1018:a60a  30  9c  08  10       addr         pass1_1008_9c30
    1018:a60e  86  9c  08  10       addr         pass1_1008_9c86
    1018:a612  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a616  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a61a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a61e  28  63  08  10       addr         FUN_1008_6328
    1018:a622  2c  63  08  10       addr         FUN_1008_632c
    1018:a626  7e  90  18  10       addr         pass1_1018_907e
    1018:a62a  ea  68  08  10       addr         pass1_1008_68ea
    1018:a62e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a632  c6  68  08  10       addr         pass1_1008_68c6
    1018:a636  40  96  08  10       addr         send_msg_1008_9640
    1018:a63a  64  96  08  10       addr         set_win_text_1008_9664
    1018:a63e  2c  37  08  10       addr         pass1_1008_372c
    1018:a642  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a646  3c  37  08  10       addr         pass1_1008_373c
    1018:a64a  40  37  08  10       addr         pass1_1008_3740
    1018:a64e  44  37  08  10       addr         pass1_1008_3744
    1018:a652  48  37  08  10       addr         pass1_1008_3748
    1018:a656  4c  37  08  10       addr         pass1_1008_374c
    1018:a65a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a65e  98  96  08  10       addr         destroy_win_1008_9698
    1018:a662  50  37  08  10       addr         pass1_1008_3750
    1018:a666  76  6a  18  10       addr         FUN_1018_6a76
    1018:a66a  60  9c  08  10       addr         pass1_1008_9c60
    1018:a66e  58  37  08  10       addr         pass1_1008_3758
    1018:a672  24  63  08  10       addr         FUN_1008_6324
    1018:a676  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a67a  62  37  08  10       addr         pass1_1008_3762
    1018:a67e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a682  66  37  08  10       addr         pass1_1008_3766
    1018:a686  6a  37  08  10       addr         FUN_1008_376a
    1018:a68a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a68e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a692  02  6b  08  10       addr         pass1_1008_6b02
    1018:a696  7a  37  08  10       addr         pass1_1008_377a
    1018:a69a  52  9c  08  10       addr         pass1_1008_9c52
    1018:a69e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a6a2  16  9c  08  10       addr         pass1_1008_9c16
    1018:a6a6  30  9c  08  10       addr         pass1_1008_9c30
    1018:a6aa  86  9c  08  10       addr         pass1_1008_9c86
    1018:a6ae  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a6b2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a6b6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a6ba  28  63  08  10       addr         FUN_1008_6328
    1018:a6be  2c  63  08  10       addr         FUN_1008_632c
    1018:a6c2  4e  81  18  10       addr         pass1_1018_814e
    1018:a6c6  ea  68  08  10       addr         pass1_1008_68ea
    1018:a6ca  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a6ce  c6  68  08  10       addr         pass1_1008_68c6
    1018:a6d2  40  96  08  10       addr         send_msg_1008_9640
    1018:a6d6  64  96  08  10       addr         set_win_text_1008_9664
    1018:a6da  2c  37  08  10       addr         pass1_1008_372c
    1018:a6de  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a6e2  3c  37  08  10       addr         pass1_1008_373c
    1018:a6e6  40  37  08  10       addr         pass1_1008_3740
    1018:a6ea  44  37  08  10       addr         pass1_1008_3744
    1018:a6ee  48  37  08  10       addr         pass1_1008_3748
    1018:a6f2  4c  37  08  10       addr         pass1_1008_374c
    1018:a6f6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a6fa  98  96  08  10       addr         destroy_win_1008_9698
    1018:a6fe  50  37  08  10       addr         pass1_1008_3750
    1018:a702  76  6a  18  10       addr         FUN_1018_6a76
    1018:a706  60  9c  08  10       addr         pass1_1008_9c60
    1018:a70a  58  37  08  10       addr         pass1_1008_3758
    1018:a70e  24  63  08  10       addr         FUN_1008_6324
    1018:a712  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a716  62  37  08  10       addr         pass1_1008_3762
    1018:a71a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a71e  66  37  08  10       addr         pass1_1008_3766
    1018:a722  6a  37  08  10       addr         FUN_1008_376a
    1018:a726  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a72a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a72e  02  6b  08  10       addr         pass1_1008_6b02
    1018:a732  7a  37  08  10       addr         pass1_1008_377a
    1018:a736  52  9c  08  10       addr         pass1_1008_9c52
    1018:a73a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a73e  16  9c  08  10       addr         pass1_1008_9c16
    1018:a742  30  9c  08  10       addr         pass1_1008_9c30
    1018:a746  86  9c  08  10       addr         pass1_1008_9c86
    1018:a74a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a74e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a752  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a756  28  63  08  10       addr         FUN_1008_6328
    1018:a75a  2c  63  08  10       addr         FUN_1008_632c
    1018:a75e  96  93  18  10       addr         pass1_1018_9396
    1018:a762  ea  68  08  10       addr         pass1_1008_68ea
    1018:a766  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a76a  c6  68  08  10       addr         pass1_1008_68c6
    1018:a76e  40  96  08  10       addr         send_msg_1008_9640
    1018:a772  64  96  08  10       addr         set_win_text_1008_9664
    1018:a776  2c  37  08  10       addr         pass1_1008_372c
    1018:a77a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a77e  3c  37  08  10       addr         pass1_1008_373c
    1018:a782  40  37  08  10       addr         pass1_1008_3740
    1018:a786  44  37  08  10       addr         pass1_1008_3744
    1018:a78a  48  37  08  10       addr         pass1_1008_3748
    1018:a78e  4c  37  08  10       addr         pass1_1008_374c
    1018:a792  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a796  98  96  08  10       addr         destroy_win_1008_9698
    1018:a79a  50  37  08  10       addr         pass1_1008_3750
    1018:a79e  76  6a  18  10       addr         FUN_1018_6a76
    1018:a7a2  60  9c  08  10       addr         pass1_1008_9c60
    1018:a7a6  58  37  08  10       addr         pass1_1008_3758
    1018:a7aa  24  63  08  10       addr         FUN_1008_6324
    1018:a7ae  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a7b2  62  37  08  10       addr         pass1_1008_3762
    1018:a7b6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a7ba  66  37  08  10       addr         pass1_1008_3766
    1018:a7be  6a  37  08  10       addr         FUN_1008_376a
    1018:a7c2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a7c6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a7ca  02  6b  08  10       addr         pass1_1008_6b02
    1018:a7ce  7a  37  08  10       addr         pass1_1008_377a
    1018:a7d2  52  9c  08  10       addr         pass1_1008_9c52
    1018:a7d6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a7da  16  9c  08  10       addr         pass1_1008_9c16
    1018:a7de  30  9c  08  10       addr         pass1_1008_9c30
    1018:a7e2  86  9c  08  10       addr         pass1_1008_9c86
    1018:a7e6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a7ea  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a7ee  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a7f2  28  63  08  10       addr         FUN_1008_6328
    1018:a7f6  2c  63  08  10       addr         FUN_1008_632c
    1018:a7fa  2e  89  18  10       addr         pass1_1018_892e
    1018:a7fe  ea  68  08  10       addr         pass1_1008_68ea
    1018:a802  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a806  c6  68  08  10       addr         pass1_1008_68c6
    1018:a80a  40  96  08  10       addr         send_msg_1008_9640
    1018:a80e  64  96  08  10       addr         set_win_text_1008_9664
    1018:a812  2c  37  08  10       addr         pass1_1008_372c
    1018:a816  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a81a  3c  37  08  10       addr         pass1_1008_373c
    1018:a81e  40  37  08  10       addr         pass1_1008_3740
    1018:a822  44  37  08  10       addr         pass1_1008_3744
    1018:a826  48  37  08  10       addr         pass1_1008_3748
    1018:a82a  4c  37  08  10       addr         pass1_1008_374c
    1018:a82e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a832  98  96  08  10       addr         destroy_win_1008_9698
    1018:a836  50  37  08  10       addr         pass1_1008_3750
    1018:a83a  76  6a  18  10       addr         FUN_1018_6a76
    1018:a83e  60  9c  08  10       addr         pass1_1008_9c60
    1018:a842  58  37  08  10       addr         pass1_1008_3758
    1018:a846  24  63  08  10       addr         FUN_1008_6324
    1018:a84a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a84e  62  37  08  10       addr         pass1_1008_3762
    1018:a852  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a856  66  37  08  10       addr         pass1_1008_3766
    1018:a85a  6a  37  08  10       addr         FUN_1008_376a
    1018:a85e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a862  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a866  02  6b  08  10       addr         pass1_1008_6b02
    1018:a86a  7a  37  08  10       addr         pass1_1008_377a
    1018:a86e  52  9c  08  10       addr         pass1_1008_9c52
    1018:a872  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a876  16  9c  08  10       addr         pass1_1008_9c16
    1018:a87a  30  9c  08  10       addr         pass1_1008_9c30
    1018:a87e  86  9c  08  10       addr         pass1_1008_9c86
    1018:a882  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a886  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a88a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a88e  28  63  08  10       addr         FUN_1008_6328
    1018:a892  2c  63  08  10       addr         FUN_1008_632c
    1018:a896  16  8f  18  10       addr         pass1_1018_8f16
    1018:a89a  ea  68  08  10       addr         pass1_1008_68ea
    1018:a89e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a8a2  c6  68  08  10       addr         pass1_1008_68c6
    1018:a8a6  40  96  08  10       addr         send_msg_1008_9640
    1018:a8aa  64  96  08  10       addr         set_win_text_1008_9664
    1018:a8ae  2c  37  08  10       addr         pass1_1008_372c
    1018:a8b2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a8b6  3c  37  08  10       addr         pass1_1008_373c
    1018:a8ba  40  37  08  10       addr         pass1_1008_3740
    1018:a8be  44  37  08  10       addr         pass1_1008_3744
    1018:a8c2  48  37  08  10       addr         pass1_1008_3748
    1018:a8c6  4c  37  08  10       addr         pass1_1008_374c
    1018:a8ca  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a8ce  98  96  08  10       addr         destroy_win_1008_9698
    1018:a8d2  50  37  08  10       addr         pass1_1008_3750
    1018:a8d6  76  6a  18  10       addr         FUN_1018_6a76
    1018:a8da  60  9c  08  10       addr         pass1_1008_9c60
    1018:a8de  58  37  08  10       addr         pass1_1008_3758
    1018:a8e2  24  63  08  10       addr         FUN_1008_6324
    1018:a8e6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a8ea  62  37  08  10       addr         pass1_1008_3762
    1018:a8ee  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a8f2  66  37  08  10       addr         pass1_1008_3766
    1018:a8f6  6a  37  08  10       addr         FUN_1008_376a
    1018:a8fa  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a8fe  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a902  02  6b  08  10       addr         pass1_1008_6b02
    1018:a906  7a  37  08  10       addr         pass1_1008_377a
    1018:a90a  52  9c  08  10       addr         pass1_1008_9c52
    1018:a90e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a912  16  9c  08  10       addr         pass1_1008_9c16
    1018:a916  30  9c  08  10       addr         pass1_1008_9c30
    1018:a91a  86  9c  08  10       addr         pass1_1008_9c86
    1018:a91e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a922  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a926  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a92a  28  63  08  10       addr         FUN_1008_6328
    1018:a92e  2c  63  08  10       addr         FUN_1008_632c
    1018:a932  e6  7f  18  10       addr         pass1_1018_7fe6
    1018:a936  ea  68  08  10       addr         pass1_1008_68ea
    1018:a93a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a93e  c6  68  08  10       addr         pass1_1008_68c6
    1018:a942  40  96  08  10       addr         send_msg_1008_9640
    1018:a946  64  96  08  10       addr         set_win_text_1008_9664
    1018:a94a  2c  37  08  10       addr         pass1_1008_372c
    1018:a94e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a952  3c  37  08  10       addr         pass1_1008_373c
    1018:a956  40  37  08  10       addr         pass1_1008_3740
    1018:a95a  44  37  08  10       addr         pass1_1008_3744
    1018:a95e  48  37  08  10       addr         pass1_1008_3748
    1018:a962  4c  37  08  10       addr         pass1_1008_374c
    1018:a966  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:a96a  98  96  08  10       addr         destroy_win_1008_9698
    1018:a96e  50  37  08  10       addr         pass1_1008_3750
    1018:a972  76  6a  18  10       addr         FUN_1018_6a76
    1018:a976  60  9c  08  10       addr         pass1_1008_9c60
    1018:a97a  58  37  08  10       addr         pass1_1008_3758
    1018:a97e  24  63  08  10       addr         FUN_1008_6324
    1018:a982  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:a986  62  37  08  10       addr         pass1_1008_3762
    1018:a98a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:a98e  66  37  08  10       addr         pass1_1008_3766
    1018:a992  6a  37  08  10       addr         FUN_1008_376a
    1018:a996  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:a99a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:a99e  02  6b  08  10       addr         pass1_1008_6b02
    1018:a9a2  7a  37  08  10       addr         pass1_1008_377a
    1018:a9a6  52  9c  08  10       addr         pass1_1008_9c52
    1018:a9aa  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:a9ae  16  9c  08  10       addr         pass1_1008_9c16
    1018:a9b2  30  9c  08  10       addr         pass1_1008_9c30
    1018:a9b6  86  9c  08  10       addr         pass1_1008_9c86
    1018:a9ba  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:a9be  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:a9c2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:a9c6  28  63  08  10       addr         FUN_1008_6328
    1018:a9ca  2c  63  08  10       addr         FUN_1008_632c
    1018:a9ce  c6  87  18  10       addr         pass1_1018_87c6
    1018:a9d2  ea  68  08  10       addr         pass1_1008_68ea
    1018:a9d6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:a9da  c6  68  08  10       addr         pass1_1008_68c6
    1018:a9de  40  96  08  10       addr         send_msg_1008_9640
    1018:a9e2  64  96  08  10       addr         set_win_text_1008_9664
    1018:a9e6  2c  37  08  10       addr         pass1_1008_372c
    1018:a9ea  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:a9ee  3c  37  08  10       addr         pass1_1008_373c
    1018:a9f2  40  37  08  10       addr         pass1_1008_3740
    1018:a9f6  44  37  08  10       addr         pass1_1008_3744
    1018:a9fa  48  37  08  10       addr         pass1_1008_3748
    1018:a9fe  4c  37  08  10       addr         pass1_1008_374c
    1018:aa02  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:aa06  98  96  08  10       addr         destroy_win_1008_9698
    1018:aa0a  50  37  08  10       addr         pass1_1008_3750
    1018:aa0e  76  6a  18  10       addr         FUN_1018_6a76
    1018:aa12  60  9c  08  10       addr         pass1_1008_9c60
    1018:aa16  58  37  08  10       addr         pass1_1008_3758
    1018:aa1a  24  63  08  10       addr         FUN_1008_6324
    1018:aa1e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:aa22  62  37  08  10       addr         pass1_1008_3762
    1018:aa26  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:aa2a  66  37  08  10       addr         pass1_1008_3766
    1018:aa2e  6a  37  08  10       addr         FUN_1008_376a
    1018:aa32  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:aa36  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:aa3a  02  6b  08  10       addr         pass1_1008_6b02
    1018:aa3e  7a  37  08  10       addr         pass1_1008_377a
    1018:aa42  52  9c  08  10       addr         pass1_1008_9c52
    1018:aa46  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:aa4a  16  9c  08  10       addr         pass1_1008_9c16
    1018:aa4e  30  9c  08  10       addr         pass1_1008_9c30
    1018:aa52  86  9c  08  10       addr         pass1_1008_9c86
    1018:aa56  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:aa5a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:aa5e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:aa62  28  63  08  10       addr         FUN_1008_6328
    1018:aa66  2c  63  08  10       addr         FUN_1008_632c
    1018:aa6a  ae  8d  18  10       addr         pass1_1018_8dae
    1018:aa6e  ea  68  08  10       addr         pass1_1008_68ea
    1018:aa72  60  97  08  10       addr         create_window_ex_1008_9760
    1018:aa76  c6  68  08  10       addr         pass1_1008_68c6
    1018:aa7a  40  96  08  10       addr         send_msg_1008_9640
    1018:aa7e  64  96  08  10       addr         set_win_text_1008_9664
    1018:aa82  2c  37  08  10       addr         pass1_1008_372c
    1018:aa86  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:aa8a  3c  37  08  10       addr         pass1_1008_373c
    1018:aa8e  40  37  08  10       addr         pass1_1008_3740
    1018:aa92  44  37  08  10       addr         pass1_1008_3744
    1018:aa96  48  37  08  10       addr         pass1_1008_3748
    1018:aa9a  4c  37  08  10       addr         pass1_1008_374c
    1018:aa9e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:aaa2  98  96  08  10       addr         destroy_win_1008_9698
    1018:aaa6  50  37  08  10       addr         pass1_1008_3750
    1018:aaaa  76  6a  18  10       addr         FUN_1018_6a76
    1018:aaae  60  9c  08  10       addr         pass1_1008_9c60
    1018:aab2  58  37  08  10       addr         pass1_1008_3758
    1018:aab6  24  63  08  10       addr         FUN_1008_6324
    1018:aaba  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:aabe  62  37  08  10       addr         pass1_1008_3762
    1018:aac2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:aac6  66  37  08  10       addr         pass1_1008_3766
    1018:aaca  6a  37  08  10       addr         FUN_1008_376a
    1018:aace  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:aad2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:aad6  02  6b  08  10       addr         pass1_1008_6b02
    1018:aada  7a  37  08  10       addr         pass1_1008_377a
    1018:aade  52  9c  08  10       addr         pass1_1008_9c52
    1018:aae2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:aae6  16  9c  08  10       addr         pass1_1008_9c16
    1018:aaea  30  9c  08  10       addr         pass1_1008_9c30
    1018:aaee  86  9c  08  10       addr         pass1_1008_9c86
    1018:aaf2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:aaf6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:aafa  8e  62  08  10       addr         destroy_win_1008_628e
    1018:aafe  28  63  08  10       addr         FUN_1008_6328
    1018:ab02  2c  63  08  10       addr         FUN_1008_632c
    1018:ab06  7e  7e  18  10       addr         pass1_1018_7e7e
    1018:ab0a  ea  68  08  10       addr         pass1_1008_68ea
    1018:ab0e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ab12  c6  68  08  10       addr         pass1_1008_68c6
    1018:ab16  40  96  08  10       addr         send_msg_1008_9640
    1018:ab1a  64  96  08  10       addr         set_win_text_1008_9664
    1018:ab1e  2c  37  08  10       addr         pass1_1008_372c
    1018:ab22  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ab26  3c  37  08  10       addr         pass1_1008_373c
    1018:ab2a  40  37  08  10       addr         pass1_1008_3740
    1018:ab2e  44  37  08  10       addr         pass1_1008_3744
    1018:ab32  48  37  08  10       addr         pass1_1008_3748
    1018:ab36  4c  37  08  10       addr         pass1_1008_374c
    1018:ab3a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:ab3e  98  96  08  10       addr         destroy_win_1008_9698
    1018:ab42  50  37  08  10       addr         pass1_1008_3750
    1018:ab46  76  6a  18  10       addr         FUN_1018_6a76
    1018:ab4a  60  9c  08  10       addr         pass1_1008_9c60
    1018:ab4e  58  37  08  10       addr         pass1_1008_3758
    1018:ab52  24  63  08  10       addr         FUN_1008_6324
    1018:ab56  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ab5a  62  37  08  10       addr         pass1_1008_3762
    1018:ab5e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ab62  66  37  08  10       addr         pass1_1008_3766
    1018:ab66  6a  37  08  10       addr         FUN_1008_376a
    1018:ab6a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ab6e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ab72  02  6b  08  10       addr         pass1_1008_6b02
    1018:ab76  7a  37  08  10       addr         pass1_1008_377a
    1018:ab7a  52  9c  08  10       addr         pass1_1008_9c52
    1018:ab7e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ab82  16  9c  08  10       addr         pass1_1008_9c16
    1018:ab86  30  9c  08  10       addr         pass1_1008_9c30
    1018:ab8a  86  9c  08  10       addr         pass1_1008_9c86
    1018:ab8e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ab92  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:ab96  8e  62  08  10       addr         destroy_win_1008_628e
    1018:ab9a  28  63  08  10       addr         FUN_1008_6328
    1018:ab9e  2c  63  08  10       addr         FUN_1008_632c
    1018:aba2  ce  85  18  10       addr         pass1_1018_85ce
    1018:aba6  ea  68  08  10       addr         pass1_1008_68ea
    1018:abaa  60  97  08  10       addr         create_window_ex_1008_9760
    1018:abae  c6  68  08  10       addr         pass1_1008_68c6
    1018:abb2  40  96  08  10       addr         send_msg_1008_9640
    1018:abb6  64  96  08  10       addr         set_win_text_1008_9664
    1018:abba  2c  37  08  10       addr         pass1_1008_372c
    1018:abbe  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:abc2  3c  37  08  10       addr         pass1_1008_373c
    1018:abc6  40  37  08  10       addr         pass1_1008_3740
    1018:abca  44  37  08  10       addr         pass1_1008_3744
    1018:abce  48  37  08  10       addr         pass1_1008_3748
    1018:abd2  4c  37  08  10       addr         pass1_1008_374c
    1018:abd6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:abda  98  96  08  10       addr         destroy_win_1008_9698
    1018:abde  50  37  08  10       addr         pass1_1008_3750
    1018:abe2  76  6a  18  10       addr         FUN_1018_6a76
    1018:abe6  60  9c  08  10       addr         pass1_1008_9c60
    1018:abea  58  37  08  10       addr         pass1_1008_3758
    1018:abee  24  63  08  10       addr         FUN_1008_6324
    1018:abf2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:abf6  62  37  08  10       addr         pass1_1008_3762
    1018:abfa  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:abfe  66  37  08  10       addr         pass1_1008_3766
    1018:ac02  6a  37  08  10       addr         FUN_1008_376a
    1018:ac06  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ac0a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ac0e  02  6b  08  10       addr         pass1_1008_6b02
    1018:ac12  7a  37  08  10       addr         pass1_1008_377a
    1018:ac16  52  9c  08  10       addr         pass1_1008_9c52
    1018:ac1a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ac1e  16  9c  08  10       addr         pass1_1008_9c16
    1018:ac22  30  9c  08  10       addr         pass1_1008_9c30
    1018:ac26  86  9c  08  10       addr         pass1_1008_9c86
    1018:ac2a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ac2e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:ac32  8e  62  08  10       addr         destroy_win_1008_628e
    1018:ac36  28  63  08  10       addr         FUN_1008_6328
    1018:ac3a  2c  63  08  10       addr         FUN_1008_632c
    1018:ac3e  5e  86  18  10       addr         pass1_1018_865e
    1018:ac42  ea  68  08  10       addr         pass1_1008_68ea
    1018:ac46  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ac4a  c6  68  08  10       addr         pass1_1008_68c6
    1018:ac4e  40  96  08  10       addr         send_msg_1008_9640
    1018:ac52  64  96  08  10       addr         set_win_text_1008_9664
    1018:ac56  2c  37  08  10       addr         pass1_1008_372c
    1018:ac5a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ac5e  3c  37  08  10       addr         pass1_1008_373c
    1018:ac62  40  37  08  10       addr         pass1_1008_3740
    1018:ac66  44  37  08  10       addr         pass1_1008_3744
    1018:ac6a  48  37  08  10       addr         pass1_1008_3748
    1018:ac6e  4c  37  08  10       addr         pass1_1008_374c
    1018:ac72  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:ac76  98  96  08  10       addr         destroy_win_1008_9698
    1018:ac7a  50  37  08  10       addr         pass1_1008_3750
    1018:ac7e  76  6a  18  10       addr         FUN_1018_6a76
    1018:ac82  60  9c  08  10       addr         pass1_1008_9c60
    1018:ac86  58  37  08  10       addr         pass1_1008_3758
    1018:ac8a  24  63  08  10       addr         FUN_1008_6324
    1018:ac8e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ac92  62  37  08  10       addr         pass1_1008_3762
    1018:ac96  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ac9a  66  37  08  10       addr         pass1_1008_3766
    1018:ac9e  6a  37  08  10       addr         FUN_1008_376a
    1018:aca2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:aca6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:acaa  02  6b  08  10       addr         pass1_1008_6b02
    1018:acae  7a  37  08  10       addr         pass1_1008_377a
    1018:acb2  52  9c  08  10       addr         pass1_1008_9c52
    1018:acb6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:acba  16  9c  08  10       addr         pass1_1008_9c16
    1018:acbe  30  9c  08  10       addr         pass1_1008_9c30
    1018:acc2  86  9c  08  10       addr         pass1_1008_9c86
    1018:acc6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:acca  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:acce  8e  62  08  10       addr         destroy_win_1008_628e
    1018:acd2  28  63  08  10       addr         FUN_1008_6328
    1018:acd6  2c  63  08  10       addr         FUN_1008_632c
    1018:acda  46  8c  18  10       addr         pass1_1018_8c46
    1018:acde  ea  68  08  10       addr         pass1_1008_68ea
    1018:ace2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ace6  c6  68  08  10       addr         pass1_1008_68c6
    1018:acea  40  96  08  10       addr         send_msg_1008_9640
    1018:acee  64  96  08  10       addr         set_win_text_1008_9664
    1018:acf2  2c  37  08  10       addr         pass1_1008_372c
    1018:acf6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:acfa  3c  37  08  10       addr         pass1_1008_373c
    1018:acfe  40  37  08  10       addr         pass1_1008_3740
    1018:ad02  44  37  08  10       addr         pass1_1008_3744
    1018:ad06  48  37  08  10       addr         pass1_1008_3748
    1018:ad0a  4c  37  08  10       addr         pass1_1008_374c
    1018:ad0e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:ad12  98  96  08  10       addr         destroy_win_1008_9698
    1018:ad16  50  37  08  10       addr         pass1_1008_3750
    1018:ad1a  76  6a  18  10       addr         FUN_1018_6a76
    1018:ad1e  60  9c  08  10       addr         pass1_1008_9c60
    1018:ad22  58  37  08  10       addr         pass1_1008_3758
    1018:ad26  24  63  08  10       addr         FUN_1008_6324
    1018:ad2a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ad2e  62  37  08  10       addr         pass1_1008_3762
    1018:ad32  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ad36  66  37  08  10       addr         pass1_1008_3766
    1018:ad3a  6a  37  08  10       addr         FUN_1008_376a
    1018:ad3e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ad42  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ad46  02  6b  08  10       addr         pass1_1008_6b02
    1018:ad4a  7a  37  08  10       addr         pass1_1008_377a
    1018:ad4e  52  9c  08  10       addr         pass1_1008_9c52
    1018:ad52  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ad56  16  9c  08  10       addr         pass1_1008_9c16
    1018:ad5a  30  9c  08  10       addr         pass1_1008_9c30
    1018:ad5e  86  9c  08  10       addr         pass1_1008_9c86
    1018:ad62  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ad66  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:ad6a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:ad6e  28  63  08  10       addr         FUN_1008_6328
    1018:ad72  2c  63  08  10       addr         FUN_1008_632c
    1018:ad76  8e  83  18  10       addr         pass1_1018_838e
    1018:ad7a  ea  68  08  10       addr         pass1_1008_68ea
    1018:ad7e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ad82  c6  68  08  10       addr         pass1_1008_68c6
    1018:ad86  40  96  08  10       addr         send_msg_1008_9640
    1018:ad8a  64  96  08  10       addr         set_win_text_1008_9664
    1018:ad8e  2c  37  08  10       addr         pass1_1008_372c
    1018:ad92  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ad96  3c  37  08  10       addr         pass1_1008_373c
    1018:ad9a  40  37  08  10       addr         pass1_1008_3740
    1018:ad9e  44  37  08  10       addr         pass1_1008_3744
    1018:ada2  48  37  08  10       addr         pass1_1008_3748
    1018:ada6  4c  37  08  10       addr         pass1_1008_374c
    1018:adaa  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:adae  98  96  08  10       addr         destroy_win_1008_9698
    1018:adb2  50  37  08  10       addr         pass1_1008_3750
    1018:adb6  76  6a  18  10       addr         FUN_1018_6a76
    1018:adba  60  9c  08  10       addr         pass1_1008_9c60
    1018:adbe  58  37  08  10       addr         pass1_1008_3758
    1018:adc2  24  63  08  10       addr         FUN_1008_6324
    1018:adc6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:adca  62  37  08  10       addr         pass1_1008_3762
    1018:adce  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:add2  66  37  08  10       addr         pass1_1008_3766
    1018:add6  6a  37  08  10       addr         FUN_1008_376a
    1018:adda  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:adde  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ade2  02  6b  08  10       addr         pass1_1008_6b02
    1018:ade6  7a  37  08  10       addr         pass1_1008_377a
    1018:adea  52  9c  08  10       addr         pass1_1008_9c52
    1018:adee  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:adf2  16  9c  08  10       addr         pass1_1008_9c16
    1018:adf6  30  9c  08  10       addr         pass1_1008_9c30
    1018:adfa  86  9c  08  10       addr         pass1_1008_9c86
    1018:adfe  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ae02  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:ae06  8e  62  08  10       addr         destroy_win_1008_628e
    1018:ae0a  28  63  08  10       addr         FUN_1008_6328
    1018:ae0e  2c  63  08  10       addr         FUN_1008_632c
    1018:ae12  6e  8b  18  10       addr         pass1_1018_8b6e
    1018:ae16  ea  68  08  10       addr         pass1_1008_68ea
    1018:ae1a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ae1e  c6  68  08  10       addr         pass1_1008_68c6
    1018:ae22  40  96  08  10       addr         send_msg_1008_9640
    1018:ae26  64  96  08  10       addr         set_win_text_1008_9664
    1018:ae2a  2c  37  08  10       addr         pass1_1008_372c
    1018:ae2e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ae32  3c  37  08  10       addr         pass1_1008_373c
    1018:ae36  40  37  08  10       addr         pass1_1008_3740
    1018:ae3a  44  37  08  10       addr         pass1_1008_3744
    1018:ae3e  48  37  08  10       addr         pass1_1008_3748
    1018:ae42  4c  37  08  10       addr         pass1_1008_374c
    1018:ae46  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:ae4a  98  96  08  10       addr         destroy_win_1008_9698
    1018:ae4e  50  37  08  10       addr         pass1_1008_3750
    1018:ae52  76  6a  18  10       addr         FUN_1018_6a76
    1018:ae56  60  9c  08  10       addr         pass1_1008_9c60
    1018:ae5a  58  37  08  10       addr         pass1_1008_3758
    1018:ae5e  24  63  08  10       addr         FUN_1008_6324
    1018:ae62  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ae66  62  37  08  10       addr         pass1_1008_3762
    1018:ae6a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ae6e  66  37  08  10       addr         pass1_1008_3766
    1018:ae72  6a  37  08  10       addr         FUN_1008_376a
    1018:ae76  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ae7a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ae7e  02  6b  08  10       addr         pass1_1008_6b02
    1018:ae82  7a  37  08  10       addr         pass1_1008_377a
    1018:ae86  52  9c  08  10       addr         pass1_1008_9c52
    1018:ae8a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ae8e  16  9c  08  10       addr         pass1_1008_9c16
    1018:ae92  30  9c  08  10       addr         pass1_1008_9c30
    1018:ae96  86  9c  08  10       addr         pass1_1008_9c86
    1018:ae9a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ae9e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:aea2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:aea6  28  63  08  10       addr         FUN_1008_6328
    1018:aeaa  2c  63  08  10       addr         FUN_1008_632c
    1018:aeae  56  91  18  10       addr         pass1_1018_9156
    1018:aeb2  ea  68  08  10       addr         pass1_1008_68ea
    1018:aeb6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:aeba  c6  68  08  10       addr         pass1_1008_68c6
    1018:aebe  40  96  08  10       addr         send_msg_1008_9640
    1018:aec2  64  96  08  10       addr         set_win_text_1008_9664
    1018:aec6  2c  37  08  10       addr         pass1_1008_372c
    1018:aeca  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:aece  3c  37  08  10       addr         pass1_1008_373c
    1018:aed2  40  37  08  10       addr         pass1_1008_3740
    1018:aed6  44  37  08  10       addr         pass1_1008_3744
    1018:aeda  48  37  08  10       addr         pass1_1008_3748
    1018:aede  4c  37  08  10       addr         pass1_1008_374c
    1018:aee2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:aee6  98  96  08  10       addr         destroy_win_1008_9698
    1018:aeea  50  37  08  10       addr         pass1_1008_3750
    1018:aeee  76  6a  18  10       addr         FUN_1018_6a76
    1018:aef2  60  9c  08  10       addr         pass1_1008_9c60
    1018:aef6  58  37  08  10       addr         pass1_1008_3758
    1018:aefa  24  63  08  10       addr         FUN_1008_6324
    1018:aefe  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:af02  62  37  08  10       addr         pass1_1008_3762
    1018:af06  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:af0a  66  37  08  10       addr         pass1_1008_3766
    1018:af0e  6a  37  08  10       addr         FUN_1008_376a
    1018:af12  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:af16  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:af1a  02  6b  08  10       addr         pass1_1008_6b02
    1018:af1e  7a  37  08  10       addr         pass1_1008_377a
    1018:af22  52  9c  08  10       addr         pass1_1008_9c52
    1018:af26  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:af2a  16  9c  08  10       addr         pass1_1008_9c16
    1018:af2e  30  9c  08  10       addr         pass1_1008_9c30
    1018:af32  86  9c  08  10       addr         pass1_1008_9c86
    1018:af36  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:af3a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:af3e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:af42  28  63  08  10       addr         FUN_1008_6328
    1018:af46  2c  63  08  10       addr         FUN_1008_632c
    1018:af4a  26  82  18  10       addr         pass1_1018_8226
    1018:af4e  ea  68  08  10       addr         pass1_1008_68ea
    1018:af52  60  97  08  10       addr         create_window_ex_1008_9760
    1018:af56  c6  68  08  10       addr         pass1_1008_68c6
    1018:af5a  40  96  08  10       addr         send_msg_1008_9640
    1018:af5e  64  96  08  10       addr         set_win_text_1008_9664
    1018:af62  2c  37  08  10       addr         pass1_1008_372c
    1018:af66  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:af6a  3c  37  08  10       addr         pass1_1008_373c
    1018:af6e  40  37  08  10       addr         pass1_1008_3740
    1018:af72  44  37  08  10       addr         pass1_1008_3744
    1018:af76  48  37  08  10       addr         pass1_1008_3748
    1018:af7a  4c  37  08  10       addr         pass1_1008_374c
    1018:af7e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:af82  98  96  08  10       addr         destroy_win_1008_9698
    1018:af86  50  37  08  10       addr         pass1_1008_3750
    1018:af8a  76  6a  18  10       addr         FUN_1018_6a76
    1018:af8e  60  9c  08  10       addr         pass1_1008_9c60
    1018:af92  58  37  08  10       addr         pass1_1008_3758
    1018:af96  24  63  08  10       addr         FUN_1008_6324
    1018:af9a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:af9e  62  37  08  10       addr         pass1_1008_3762
    1018:afa2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:afa6  66  37  08  10       addr         pass1_1008_3766
    1018:afaa  6a  37  08  10       addr         FUN_1008_376a
    1018:afae  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:afb2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:afb6  02  6b  08  10       addr         pass1_1008_6b02
    1018:afba  7a  37  08  10       addr         pass1_1008_377a
    1018:afbe  52  9c  08  10       addr         pass1_1008_9c52
    1018:afc2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:afc6  16  9c  08  10       addr         pass1_1008_9c16
    1018:afca  30  9c  08  10       addr         pass1_1008_9c30
    1018:afce  86  9c  08  10       addr         pass1_1008_9c86
    1018:afd2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:afd6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:afda  8e  62  08  10       addr         destroy_win_1008_628e
    1018:afde  28  63  08  10       addr         FUN_1008_6328
    1018:afe2  2c  63  08  10       addr         FUN_1008_632c
    1018:afe6  06  8a  18  10       addr         pass1_1018_8a06
    1018:afea  ea  68  08  10       addr         pass1_1008_68ea
    1018:afee  60  97  08  10       addr         create_window_ex_1008_9760
    1018:aff2  c6  68  08  10       addr         pass1_1008_68c6
    1018:aff6  40  96  08  10       addr         send_msg_1008_9640
    1018:affa  64  96  08  10       addr         set_win_text_1008_9664
    1018:affe  2c  37  08  10       addr         pass1_1008_372c
    1018:b002  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b006  3c  37  08  10       addr         pass1_1008_373c
    1018:b00a  40  37  08  10       addr         pass1_1008_3740
    1018:b00e  44  37  08  10       addr         pass1_1008_3744
    1018:b012  48  37  08  10       addr         pass1_1008_3748
    1018:b016  4c  37  08  10       addr         pass1_1008_374c
    1018:b01a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b01e  98  96  08  10       addr         destroy_win_1008_9698
    1018:b022  50  37  08  10       addr         pass1_1008_3750
    1018:b026  76  6a  18  10       addr         FUN_1018_6a76
    1018:b02a  60  9c  08  10       addr         pass1_1008_9c60
    1018:b02e  58  37  08  10       addr         pass1_1008_3758
    1018:b032  24  63  08  10       addr         FUN_1008_6324
    1018:b036  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b03a  62  37  08  10       addr         pass1_1008_3762
    1018:b03e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b042  66  37  08  10       addr         pass1_1008_3766
    1018:b046  6a  37  08  10       addr         FUN_1008_376a
    1018:b04a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b04e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b052  02  6b  08  10       addr         pass1_1008_6b02
    1018:b056  7a  37  08  10       addr         pass1_1008_377a
    1018:b05a  52  9c  08  10       addr         pass1_1008_9c52
    1018:b05e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b062  16  9c  08  10       addr         pass1_1008_9c16
    1018:b066  30  9c  08  10       addr         pass1_1008_9c30
    1018:b06a  86  9c  08  10       addr         pass1_1008_9c86
    1018:b06e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b072  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b076  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b07a  28  63  08  10       addr         FUN_1008_6328
    1018:b07e  2c  63  08  10       addr         FUN_1008_632c
    1018:b082  ee  8f  18  10       addr         pass1_1018_8fee
    1018:b086  ea  68  08  10       addr         pass1_1008_68ea
    1018:b08a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b08e  c6  68  08  10       addr         pass1_1008_68c6
    1018:b092  40  96  08  10       addr         send_msg_1008_9640
    1018:b096  64  96  08  10       addr         set_win_text_1008_9664
    1018:b09a  2c  37  08  10       addr         pass1_1008_372c
    1018:b09e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b0a2  3c  37  08  10       addr         pass1_1008_373c
    1018:b0a6  40  37  08  10       addr         pass1_1008_3740
    1018:b0aa  44  37  08  10       addr         pass1_1008_3744
    1018:b0ae  48  37  08  10       addr         pass1_1008_3748
    1018:b0b2  4c  37  08  10       addr         pass1_1008_374c
    1018:b0b6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b0ba  98  96  08  10       addr         destroy_win_1008_9698
    1018:b0be  50  37  08  10       addr         pass1_1008_3750
    1018:b0c2  76  6a  18  10       addr         FUN_1018_6a76
    1018:b0c6  60  9c  08  10       addr         pass1_1008_9c60
    1018:b0ca  58  37  08  10       addr         pass1_1008_3758
    1018:b0ce  24  63  08  10       addr         FUN_1008_6324
    1018:b0d2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b0d6  62  37  08  10       addr         pass1_1008_3762
    1018:b0da  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b0de  66  37  08  10       addr         pass1_1008_3766
    1018:b0e2  6a  37  08  10       addr         FUN_1008_376a
    1018:b0e6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b0ea  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b0ee  02  6b  08  10       addr         pass1_1008_6b02
    1018:b0f2  7a  37  08  10       addr         pass1_1008_377a
    1018:b0f6  52  9c  08  10       addr         pass1_1008_9c52
    1018:b0fa  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b0fe  16  9c  08  10       addr         pass1_1008_9c16
    1018:b102  30  9c  08  10       addr         pass1_1008_9c30
    1018:b106  86  9c  08  10       addr         pass1_1008_9c86
    1018:b10a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b10e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b112  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b116  28  63  08  10       addr         FUN_1008_6328
    1018:b11a  2c  63  08  10       addr         FUN_1008_632c
    1018:b11e  be  80  18  10       addr         pass1_1018_80be
    1018:b122  ea  68  08  10       addr         pass1_1008_68ea
    1018:b126  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b12a  c6  68  08  10       addr         pass1_1008_68c6
    1018:b12e  40  96  08  10       addr         send_msg_1008_9640
    1018:b132  64  96  08  10       addr         set_win_text_1008_9664
    1018:b136  2c  37  08  10       addr         pass1_1008_372c
    1018:b13a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b13e  3c  37  08  10       addr         pass1_1008_373c
    1018:b142  40  37  08  10       addr         pass1_1008_3740
    1018:b146  44  37  08  10       addr         pass1_1008_3744
    1018:b14a  48  37  08  10       addr         pass1_1008_3748
    1018:b14e  4c  37  08  10       addr         pass1_1008_374c
    1018:b152  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b156  98  96  08  10       addr         destroy_win_1008_9698
    1018:b15a  50  37  08  10       addr         pass1_1008_3750
    1018:b15e  76  6a  18  10       addr         FUN_1018_6a76
    1018:b162  60  9c  08  10       addr         pass1_1008_9c60
    1018:b166  58  37  08  10       addr         pass1_1008_3758
    1018:b16a  24  63  08  10       addr         FUN_1008_6324
    1018:b16e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b172  62  37  08  10       addr         pass1_1008_3762
    1018:b176  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b17a  66  37  08  10       addr         pass1_1008_3766
    1018:b17e  6a  37  08  10       addr         FUN_1008_376a
    1018:b182  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b186  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b18a  02  6b  08  10       addr         pass1_1008_6b02
    1018:b18e  7a  37  08  10       addr         pass1_1008_377a
    1018:b192  52  9c  08  10       addr         pass1_1008_9c52
    1018:b196  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b19a  16  9c  08  10       addr         pass1_1008_9c16
    1018:b19e  30  9c  08  10       addr         pass1_1008_9c30
    1018:b1a2  86  9c  08  10       addr         pass1_1008_9c86
    1018:b1a6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b1aa  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b1ae  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b1b2  28  63  08  10       addr         FUN_1008_6328
    1018:b1b6  2c  63  08  10       addr         FUN_1008_632c
    1018:b1ba  06  93  18  10       addr         pass1_1018_9306
    1018:b1be  ea  68  08  10       addr         pass1_1008_68ea
    1018:b1c2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b1c6  c6  68  08  10       addr         pass1_1008_68c6
    1018:b1ca  40  96  08  10       addr         send_msg_1008_9640
    1018:b1ce  64  96  08  10       addr         set_win_text_1008_9664
    1018:b1d2  2c  37  08  10       addr         pass1_1008_372c
    1018:b1d6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b1da  3c  37  08  10       addr         pass1_1008_373c
    1018:b1de  40  37  08  10       addr         pass1_1008_3740
    1018:b1e2  44  37  08  10       addr         pass1_1008_3744
    1018:b1e6  48  37  08  10       addr         pass1_1008_3748
    1018:b1ea  4c  37  08  10       addr         pass1_1008_374c
    1018:b1ee  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b1f2  98  96  08  10       addr         destroy_win_1008_9698
    1018:b1f6  50  37  08  10       addr         pass1_1008_3750
    1018:b1fa  76  6a  18  10       addr         FUN_1018_6a76
    1018:b1fe  60  9c  08  10       addr         pass1_1008_9c60
    1018:b202  58  37  08  10       addr         pass1_1008_3758
    1018:b206  24  63  08  10       addr         FUN_1008_6324
    1018:b20a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b20e  62  37  08  10       addr         pass1_1008_3762
    1018:b212  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b216  66  37  08  10       addr         pass1_1008_3766
    1018:b21a  6a  37  08  10       addr         FUN_1008_376a
    1018:b21e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b222  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b226  02  6b  08  10       addr         pass1_1008_6b02
    1018:b22a  7a  37  08  10       addr         pass1_1008_377a
    1018:b22e  52  9c  08  10       addr         pass1_1008_9c52
    1018:b232  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b236  16  9c  08  10       addr         pass1_1008_9c16
    1018:b23a  30  9c  08  10       addr         pass1_1008_9c30
    1018:b23e  86  9c  08  10       addr         pass1_1008_9c86
    1018:b242  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b246  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b24a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b24e  28  63  08  10       addr         FUN_1008_6328
    1018:b252  2c  63  08  10       addr         FUN_1008_632c
    1018:b256  9e  88  18  10       addr         pass1_1018_889e
    1018:b25a  ea  68  08  10       addr         pass1_1008_68ea
    1018:b25e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b262  c6  68  08  10       addr         pass1_1008_68c6
    1018:b266  40  96  08  10       addr         send_msg_1008_9640
    1018:b26a  64  96  08  10       addr         set_win_text_1008_9664
    1018:b26e  2c  37  08  10       addr         pass1_1008_372c
    1018:b272  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b276  3c  37  08  10       addr         pass1_1008_373c
    1018:b27a  40  37  08  10       addr         pass1_1008_3740
    1018:b27e  44  37  08  10       addr         pass1_1008_3744
    1018:b282  48  37  08  10       addr         pass1_1008_3748
    1018:b286  4c  37  08  10       addr         pass1_1008_374c
    1018:b28a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b28e  98  96  08  10       addr         destroy_win_1008_9698
    1018:b292  50  37  08  10       addr         pass1_1008_3750
    1018:b296  76  6a  18  10       addr         FUN_1018_6a76
    1018:b29a  60  9c  08  10       addr         pass1_1008_9c60
    1018:b29e  58  37  08  10       addr         pass1_1008_3758
    1018:b2a2  24  63  08  10       addr         FUN_1008_6324
    1018:b2a6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b2aa  62  37  08  10       addr         pass1_1008_3762
    1018:b2ae  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b2b2  66  37  08  10       addr         pass1_1008_3766
    1018:b2b6  6a  37  08  10       addr         FUN_1008_376a
    1018:b2ba  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b2be  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b2c2  02  6b  08  10       addr         pass1_1008_6b02
    1018:b2c6  7a  37  08  10       addr         pass1_1008_377a
    1018:b2ca  52  9c  08  10       addr         pass1_1008_9c52
    1018:b2ce  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b2d2  16  9c  08  10       addr         pass1_1008_9c16
    1018:b2d6  30  9c  08  10       addr         pass1_1008_9c30
    1018:b2da  86  9c  08  10       addr         pass1_1008_9c86
    1018:b2de  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b2e2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b2e6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b2ea  28  63  08  10       addr         FUN_1008_6328
    1018:b2ee  2c  63  08  10       addr         FUN_1008_632c
    1018:b2f2  86  8e  18  10       addr         pass1_1018_8e86
    1018:b2f6  ea  68  08  10       addr         pass1_1008_68ea
    1018:b2fa  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b2fe  c6  68  08  10       addr         pass1_1008_68c6
    1018:b302  40  96  08  10       addr         send_msg_1008_9640
    1018:b306  64  96  08  10       addr         set_win_text_1008_9664
    1018:b30a  2c  37  08  10       addr         pass1_1008_372c
    1018:b30e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b312  3c  37  08  10       addr         pass1_1008_373c
    1018:b316  40  37  08  10       addr         pass1_1008_3740
    1018:b31a  44  37  08  10       addr         pass1_1008_3744
    1018:b31e  48  37  08  10       addr         pass1_1008_3748
    1018:b322  4c  37  08  10       addr         pass1_1008_374c
    1018:b326  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b32a  98  96  08  10       addr         destroy_win_1008_9698
    1018:b32e  50  37  08  10       addr         pass1_1008_3750
    1018:b332  76  6a  18  10       addr         FUN_1018_6a76
    1018:b336  60  9c  08  10       addr         pass1_1008_9c60
    1018:b33a  58  37  08  10       addr         pass1_1008_3758
    1018:b33e  24  63  08  10       addr         FUN_1008_6324
    1018:b342  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b346  62  37  08  10       addr         pass1_1008_3762
    1018:b34a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b34e  66  37  08  10       addr         pass1_1008_3766
    1018:b352  6a  37  08  10       addr         FUN_1008_376a
    1018:b356  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b35a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b35e  02  6b  08  10       addr         pass1_1008_6b02
    1018:b362  7a  37  08  10       addr         pass1_1008_377a
    1018:b366  52  9c  08  10       addr         pass1_1008_9c52
    1018:b36a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b36e  16  9c  08  10       addr         pass1_1008_9c16
    1018:b372  30  9c  08  10       addr         pass1_1008_9c30
    1018:b376  86  9c  08  10       addr         pass1_1008_9c86
    1018:b37a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b37e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b382  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b386  28  63  08  10       addr         FUN_1008_6328
    1018:b38a  2c  63  08  10       addr         FUN_1008_632c
    1018:b38e  56  7f  18  10       addr         pass1_1018_7f56
    1018:b392  ea  68  08  10       addr         pass1_1008_68ea
    1018:b396  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b39a  c6  68  08  10       addr         pass1_1008_68c6
    1018:b39e  40  96  08  10       addr         send_msg_1008_9640
    1018:b3a2  64  96  08  10       addr         set_win_text_1008_9664
    1018:b3a6  2c  37  08  10       addr         pass1_1008_372c
    1018:b3aa  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b3ae  3c  37  08  10       addr         pass1_1008_373c
    1018:b3b2  40  37  08  10       addr         pass1_1008_3740
    1018:b3b6  44  37  08  10       addr         pass1_1008_3744
    1018:b3ba  48  37  08  10       addr         pass1_1008_3748
    1018:b3be  4c  37  08  10       addr         pass1_1008_374c
    1018:b3c2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b3c6  98  96  08  10       addr         destroy_win_1008_9698
    1018:b3ca  50  37  08  10       addr         pass1_1008_3750
    1018:b3ce  76  6a  18  10       addr         FUN_1018_6a76
    1018:b3d2  60  9c  08  10       addr         pass1_1008_9c60
    1018:b3d6  58  37  08  10       addr         pass1_1008_3758
    1018:b3da  24  63  08  10       addr         FUN_1008_6324
    1018:b3de  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b3e2  62  37  08  10       addr         pass1_1008_3762
    1018:b3e6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b3ea  66  37  08  10       addr         pass1_1008_3766
    1018:b3ee  6a  37  08  10       addr         FUN_1008_376a
    1018:b3f2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b3f6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b3fa  02  6b  08  10       addr         pass1_1008_6b02
    1018:b3fe  7a  37  08  10       addr         pass1_1008_377a
    1018:b402  52  9c  08  10       addr         pass1_1008_9c52
    1018:b406  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b40a  16  9c  08  10       addr         pass1_1008_9c16
    1018:b40e  30  9c  08  10       addr         pass1_1008_9c30
    1018:b412  86  9c  08  10       addr         pass1_1008_9c86
    1018:b416  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b41a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b41e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b422  28  63  08  10       addr         FUN_1008_6328
    1018:b426  2c  63  08  10       addr         FUN_1008_632c
    1018:b42a  36  87  18  10       addr         pass1_1018_8736
    1018:b42e  ea  68  08  10       addr         pass1_1008_68ea
    1018:b432  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b436  c6  68  08  10       addr         pass1_1008_68c6
    1018:b43a  40  96  08  10       addr         send_msg_1008_9640
    1018:b43e  64  96  08  10       addr         set_win_text_1008_9664
    1018:b442  2c  37  08  10       addr         pass1_1008_372c
    1018:b446  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b44a  3c  37  08  10       addr         pass1_1008_373c
    1018:b44e  40  37  08  10       addr         pass1_1008_3740
    1018:b452  44  37  08  10       addr         pass1_1008_3744
    1018:b456  48  37  08  10       addr         pass1_1008_3748
    1018:b45a  4c  37  08  10       addr         pass1_1008_374c
    1018:b45e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b462  98  96  08  10       addr         destroy_win_1008_9698
    1018:b466  50  37  08  10       addr         pass1_1008_3750
    1018:b46a  76  6a  18  10       addr         FUN_1018_6a76
    1018:b46e  60  9c  08  10       addr         pass1_1008_9c60
    1018:b472  58  37  08  10       addr         pass1_1008_3758
    1018:b476  24  63  08  10       addr         FUN_1008_6324
    1018:b47a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b47e  62  37  08  10       addr         pass1_1008_3762
    1018:b482  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b486  66  37  08  10       addr         pass1_1008_3766
    1018:b48a  6a  37  08  10       addr         FUN_1008_376a
    1018:b48e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b492  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b496  02  6b  08  10       addr         pass1_1008_6b02
    1018:b49a  7a  37  08  10       addr         pass1_1008_377a
    1018:b49e  52  9c  08  10       addr         pass1_1008_9c52
    1018:b4a2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b4a6  16  9c  08  10       addr         pass1_1008_9c16
    1018:b4aa  30  9c  08  10       addr         pass1_1008_9c30
    1018:b4ae  86  9c  08  10       addr         pass1_1008_9c86
    1018:b4b2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b4b6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b4ba  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b4be  28  63  08  10       addr         FUN_1008_6328
    1018:b4c2  2c  63  08  10       addr         FUN_1008_632c
    1018:b4c6  1e  8d  18  10       addr         pass1_1018_8d1e
    1018:b4ca  ea  68  08  10       addr         pass1_1008_68ea
    1018:b4ce  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b4d2  c6  68  08  10       addr         pass1_1008_68c6
    1018:b4d6  40  96  08  10       addr         send_msg_1008_9640
    1018:b4da  64  96  08  10       addr         set_win_text_1008_9664
    1018:b4de  2c  37  08  10       addr         pass1_1008_372c
    1018:b4e2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b4e6  3c  37  08  10       addr         pass1_1008_373c
    1018:b4ea  40  37  08  10       addr         pass1_1008_3740
    1018:b4ee  44  37  08  10       addr         pass1_1008_3744
    1018:b4f2  48  37  08  10       addr         pass1_1008_3748
    1018:b4f6  4c  37  08  10       addr         pass1_1008_374c
    1018:b4fa  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b4fe  98  96  08  10       addr         destroy_win_1008_9698
    1018:b502  50  37  08  10       addr         pass1_1008_3750
    1018:b506  76  6a  18  10       addr         FUN_1018_6a76
    1018:b50a  60  9c  08  10       addr         pass1_1008_9c60
    1018:b50e  58  37  08  10       addr         pass1_1008_3758
    1018:b512  24  63  08  10       addr         FUN_1008_6324
    1018:b516  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b51a  62  37  08  10       addr         pass1_1008_3762
    1018:b51e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b522  66  37  08  10       addr         pass1_1008_3766
    1018:b526  6a  37  08  10       addr         FUN_1008_376a
    1018:b52a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b52e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b532  02  6b  08  10       addr         pass1_1008_6b02
    1018:b536  7a  37  08  10       addr         pass1_1008_377a
    1018:b53a  52  9c  08  10       addr         pass1_1008_9c52
    1018:b53e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b542  16  9c  08  10       addr         pass1_1008_9c16
    1018:b546  30  9c  08  10       addr         pass1_1008_9c30
    1018:b54a  86  9c  08  10       addr         pass1_1008_9c86
    1018:b54e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b552  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b556  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b55a  28  63  08  10       addr         FUN_1008_6328
    1018:b55e  2c  63  08  10       addr         FUN_1008_632c
    1018:b562  ee  7d  18  10       addr         pass1_1018_7dee
    1018:b566  ea  68  08  10       addr         pass1_1008_68ea
    1018:b56a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b56e  c6  68  08  10       addr         pass1_1008_68c6
    1018:b572  40  96  08  10       addr         send_msg_1008_9640
    1018:b576  64  96  08  10       addr         set_win_text_1008_9664
    1018:b57a  2c  37  08  10       addr         pass1_1008_372c
    1018:b57e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b582  3c  37  08  10       addr         pass1_1008_373c
    1018:b586  40  37  08  10       addr         pass1_1008_3740
    1018:b58a  44  37  08  10       addr         pass1_1008_3744
    1018:b58e  48  37  08  10       addr         pass1_1008_3748
    1018:b592  4c  37  08  10       addr         pass1_1008_374c
    1018:b596  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b59a  98  96  08  10       addr         destroy_win_1008_9698
    1018:b59e  50  37  08  10       addr         pass1_1008_3750
    1018:b5a2  76  6a  18  10       addr         FUN_1018_6a76
    1018:b5a6  60  9c  08  10       addr         pass1_1008_9c60
    1018:b5aa  58  37  08  10       addr         pass1_1008_3758
    1018:b5ae  24  63  08  10       addr         FUN_1008_6324
    1018:b5b2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b5b6  62  37  08  10       addr         pass1_1008_3762
    1018:b5ba  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b5be  66  37  08  10       addr         pass1_1008_3766
    1018:b5c2  6a  37  08  10       addr         FUN_1008_376a
    1018:b5c6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b5ca  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b5ce  02  6b  08  10       addr         pass1_1008_6b02
    1018:b5d2  7a  37  08  10       addr         pass1_1008_377a
    1018:b5d6  52  9c  08  10       addr         pass1_1008_9c52
    1018:b5da  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b5de  16  9c  08  10       addr         pass1_1008_9c16
    1018:b5e2  30  9c  08  10       addr         pass1_1008_9c30
    1018:b5e6  86  9c  08  10       addr         pass1_1008_9c86
    1018:b5ea  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b5ee  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b5f2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b5f6  28  63  08  10       addr         FUN_1008_6328
    1018:b5fa  2c  63  08  10       addr         FUN_1008_632c
    1018:b5fe  3e  85  18  10       addr         pass1_1018_853e
    1018:b602  ea  68  08  10       addr         pass1_1008_68ea
    1018:b606  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b60a  c6  68  08  10       addr         pass1_1008_68c6
    1018:b60e  40  96  08  10       addr         send_msg_1008_9640
    1018:b612  64  96  08  10       addr         set_win_text_1008_9664
    1018:b616  2c  37  08  10       addr         pass1_1008_372c
    1018:b61a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b61e  3c  37  08  10       addr         pass1_1008_373c
    1018:b622  40  37  08  10       addr         pass1_1008_3740
    1018:b626  44  37  08  10       addr         pass1_1008_3744
    1018:b62a  48  37  08  10       addr         pass1_1008_3748
    1018:b62e  4c  37  08  10       addr         pass1_1008_374c
    1018:b632  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b636  98  96  08  10       addr         destroy_win_1008_9698
    1018:b63a  50  37  08  10       addr         pass1_1008_3750
    1018:b63e  76  6a  18  10       addr         FUN_1018_6a76
    1018:b642  60  9c  08  10       addr         pass1_1008_9c60
    1018:b646  58  37  08  10       addr         pass1_1008_3758
    1018:b64a  24  63  08  10       addr         FUN_1008_6324
    1018:b64e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b652  62  37  08  10       addr         pass1_1008_3762
    1018:b656  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b65a  66  37  08  10       addr         pass1_1008_3766
    1018:b65e  6a  37  08  10       addr         FUN_1008_376a
    1018:b662  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b666  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b66a  02  6b  08  10       addr         pass1_1008_6b02
    1018:b66e  7a  37  08  10       addr         pass1_1008_377a
    1018:b672  52  9c  08  10       addr         pass1_1008_9c52
    1018:b676  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b67a  16  9c  08  10       addr         pass1_1008_9c16
    1018:b67e  30  9c  08  10       addr         pass1_1008_9c30
    1018:b682  86  9c  08  10       addr         pass1_1008_9c86
    1018:b686  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b68a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b68e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b692  28  63  08  10       addr         FUN_1008_6328
    1018:b696  2c  63  08  10       addr         FUN_1008_632c
    1018:b69a  d6  83  18  10       addr         pass1_1018_83d6
    1018:b69e  ea  68  08  10       addr         pass1_1008_68ea
    1018:b6a2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b6a6  c6  68  08  10       addr         pass1_1008_68c6
    1018:b6aa  40  96  08  10       addr         send_msg_1008_9640
    1018:b6ae  64  96  08  10       addr         set_win_text_1008_9664
    1018:b6b2  2c  37  08  10       addr         pass1_1008_372c
    1018:b6b6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b6ba  3c  37  08  10       addr         pass1_1008_373c
    1018:b6be  40  37  08  10       addr         pass1_1008_3740
    1018:b6c2  44  37  08  10       addr         pass1_1008_3744
    1018:b6c6  48  37  08  10       addr         pass1_1008_3748
    1018:b6ca  4c  37  08  10       addr         pass1_1008_374c
    1018:b6ce  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b6d2  98  96  08  10       addr         destroy_win_1008_9698
    1018:b6d6  50  37  08  10       addr         pass1_1008_3750
    1018:b6da  76  6a  18  10       addr         FUN_1018_6a76
    1018:b6de  60  9c  08  10       addr         pass1_1008_9c60
    1018:b6e2  58  37  08  10       addr         pass1_1008_3758
    1018:b6e6  24  63  08  10       addr         FUN_1008_6324
    1018:b6ea  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b6ee  62  37  08  10       addr         pass1_1008_3762
    1018:b6f2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b6f6  66  37  08  10       addr         pass1_1008_3766
    1018:b6fa  6a  37  08  10       addr         FUN_1008_376a
    1018:b6fe  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b702  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b706  02  6b  08  10       addr         pass1_1008_6b02
    1018:b70a  7a  37  08  10       addr         pass1_1008_377a
    1018:b70e  52  9c  08  10       addr         pass1_1008_9c52
    1018:b712  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b716  16  9c  08  10       addr         pass1_1008_9c16
    1018:b71a  30  9c  08  10       addr         pass1_1008_9c30
    1018:b71e  86  9c  08  10       addr         pass1_1008_9c86
    1018:b722  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b726  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b72a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b72e  28  63  08  10       addr         FUN_1008_6328
    1018:b732  2c  63  08  10       addr         FUN_1008_632c
    1018:b736  e6  91  18  10       addr         pass1_1018_91e6
    1018:b73a  ea  68  08  10       addr         pass1_1008_68ea
    1018:b73e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b742  c6  68  08  10       addr         pass1_1008_68c6
    1018:b746  40  96  08  10       addr         send_msg_1008_9640
    1018:b74a  64  96  08  10       addr         set_win_text_1008_9664
    1018:b74e  2c  37  08  10       addr         pass1_1008_372c
    1018:b752  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b756  3c  37  08  10       addr         pass1_1008_373c
    1018:b75a  40  37  08  10       addr         pass1_1008_3740
    1018:b75e  44  37  08  10       addr         pass1_1008_3744
    1018:b762  48  37  08  10       addr         pass1_1008_3748
    1018:b766  4c  37  08  10       addr         pass1_1008_374c
    1018:b76a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b76e  98  96  08  10       addr         destroy_win_1008_9698
    1018:b772  50  37  08  10       addr         pass1_1008_3750
    1018:b776  76  6a  18  10       addr         FUN_1018_6a76
    1018:b77a  60  9c  08  10       addr         pass1_1008_9c60
    1018:b77e  58  37  08  10       addr         pass1_1008_3758
    1018:b782  24  63  08  10       addr         FUN_1008_6324
    1018:b786  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b78a  62  37  08  10       addr         pass1_1008_3762
    1018:b78e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b792  66  37  08  10       addr         pass1_1008_3766
    1018:b796  6a  37  08  10       addr         FUN_1008_376a
    1018:b79a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b79e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b7a2  02  6b  08  10       addr         pass1_1008_6b02
    1018:b7a6  7a  37  08  10       addr         pass1_1008_377a
    1018:b7aa  52  9c  08  10       addr         pass1_1008_9c52
    1018:b7ae  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b7b2  16  9c  08  10       addr         pass1_1008_9c16
    1018:b7b6  30  9c  08  10       addr         pass1_1008_9c30
    1018:b7ba  86  9c  08  10       addr         pass1_1008_9c86
    1018:b7be  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b7c2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b7c6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b7ca  28  63  08  10       addr         FUN_1008_6328
    1018:b7ce  2c  63  08  10       addr         FUN_1008_632c
    1018:b7d2  fe  82  18  10       addr         pass1_1018_82fe
    1018:b7d6  ea  68  08  10       addr         pass1_1008_68ea
    1018:b7da  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b7de  c6  68  08  10       addr         pass1_1008_68c6
    1018:b7e2  40  96  08  10       addr         send_msg_1008_9640
    1018:b7e6  64  96  08  10       addr         set_win_text_1008_9664
    1018:b7ea  2c  37  08  10       addr         pass1_1008_372c
    1018:b7ee  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b7f2  3c  37  08  10       addr         pass1_1008_373c
    1018:b7f6  40  37  08  10       addr         pass1_1008_3740
    1018:b7fa  44  37  08  10       addr         pass1_1008_3744
    1018:b7fe  48  37  08  10       addr         pass1_1008_3748
    1018:b802  4c  37  08  10       addr         pass1_1008_374c
    1018:b806  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b80a  98  96  08  10       addr         destroy_win_1008_9698
    1018:b80e  50  37  08  10       addr         pass1_1008_3750
    1018:b812  76  6a  18  10       addr         FUN_1018_6a76
    1018:b816  60  9c  08  10       addr         pass1_1008_9c60
    1018:b81a  58  37  08  10       addr         pass1_1008_3758
    1018:b81e  24  63  08  10       addr         FUN_1008_6324
    1018:b822  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b826  62  37  08  10       addr         pass1_1008_3762
    1018:b82a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b82e  66  37  08  10       addr         pass1_1008_3766
    1018:b832  6a  37  08  10       addr         FUN_1008_376a
    1018:b836  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b83a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b83e  02  6b  08  10       addr         pass1_1008_6b02
    1018:b842  7a  37  08  10       addr         pass1_1008_377a
    1018:b846  52  9c  08  10       addr         pass1_1008_9c52
    1018:b84a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b84e  16  9c  08  10       addr         pass1_1008_9c16
    1018:b852  30  9c  08  10       addr         pass1_1008_9c30
    1018:b856  86  9c  08  10       addr         pass1_1008_9c86
    1018:b85a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b85e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b862  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b866  28  63  08  10       addr         FUN_1008_6328
    1018:b86a  2c  63  08  10       addr         FUN_1008_632c
    1018:b86e  de  8a  18  10       addr         pass1_1018_8ade
    1018:b872  ea  68  08  10       addr         pass1_1008_68ea
    1018:b876  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b87a  c6  68  08  10       addr         pass1_1008_68c6
    1018:b87e  40  96  08  10       addr         send_msg_1008_9640
    1018:b882  64  96  08  10       addr         set_win_text_1008_9664
    1018:b886  2c  37  08  10       addr         pass1_1008_372c
    1018:b88a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b88e  3c  37  08  10       addr         pass1_1008_373c
    1018:b892  40  37  08  10       addr         pass1_1008_3740
    1018:b896  44  37  08  10       addr         pass1_1008_3744
    1018:b89a  48  37  08  10       addr         pass1_1008_3748
    1018:b89e  4c  37  08  10       addr         pass1_1008_374c
    1018:b8a2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b8a6  98  96  08  10       addr         destroy_win_1008_9698
    1018:b8aa  50  37  08  10       addr         pass1_1008_3750
    1018:b8ae  76  6a  18  10       addr         FUN_1018_6a76
    1018:b8b2  60  9c  08  10       addr         pass1_1008_9c60
    1018:b8b6  58  37  08  10       addr         pass1_1008_3758
    1018:b8ba  24  63  08  10       addr         FUN_1008_6324
    1018:b8be  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b8c2  62  37  08  10       addr         pass1_1008_3762
    1018:b8c6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b8ca  66  37  08  10       addr         pass1_1008_3766
    1018:b8ce  6a  37  08  10       addr         FUN_1008_376a
    1018:b8d2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b8d6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b8da  02  6b  08  10       addr         pass1_1008_6b02
    1018:b8de  7a  37  08  10       addr         pass1_1008_377a
    1018:b8e2  52  9c  08  10       addr         pass1_1008_9c52
    1018:b8e6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b8ea  16  9c  08  10       addr         pass1_1008_9c16
    1018:b8ee  30  9c  08  10       addr         pass1_1008_9c30
    1018:b8f2  86  9c  08  10       addr         pass1_1008_9c86
    1018:b8f6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b8fa  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b8fe  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b902  28  63  08  10       addr         FUN_1008_6328
    1018:b906  2c  63  08  10       addr         FUN_1008_632c
    1018:b90a  c6  90  18  10       addr         pass1_1018_90c6
    1018:b90e  ea  68  08  10       addr         pass1_1008_68ea
    1018:b912  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b916  c6  68  08  10       addr         pass1_1008_68c6
    1018:b91a  40  96  08  10       addr         send_msg_1008_9640
    1018:b91e  64  96  08  10       addr         set_win_text_1008_9664
    1018:b922  2c  37  08  10       addr         pass1_1008_372c
    1018:b926  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b92a  3c  37  08  10       addr         pass1_1008_373c
    1018:b92e  40  37  08  10       addr         pass1_1008_3740
    1018:b932  44  37  08  10       addr         pass1_1008_3744
    1018:b936  48  37  08  10       addr         pass1_1008_3748
    1018:b93a  4c  37  08  10       addr         pass1_1008_374c
    1018:b93e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b942  98  96  08  10       addr         destroy_win_1008_9698
    1018:b946  50  37  08  10       addr         pass1_1008_3750
    1018:b94a  76  6a  18  10       addr         FUN_1018_6a76
    1018:b94e  60  9c  08  10       addr         pass1_1008_9c60
    1018:b952  58  37  08  10       addr         pass1_1008_3758
    1018:b956  24  63  08  10       addr         FUN_1008_6324
    1018:b95a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b95e  62  37  08  10       addr         pass1_1008_3762
    1018:b962  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:b966  66  37  08  10       addr         pass1_1008_3766
    1018:b96a  6a  37  08  10       addr         FUN_1008_376a
    1018:b96e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:b972  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:b976  02  6b  08  10       addr         pass1_1008_6b02
    1018:b97a  7a  37  08  10       addr         pass1_1008_377a
    1018:b97e  52  9c  08  10       addr         pass1_1008_9c52
    1018:b982  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:b986  16  9c  08  10       addr         pass1_1008_9c16
    1018:b98a  30  9c  08  10       addr         pass1_1008_9c30
    1018:b98e  86  9c  08  10       addr         pass1_1008_9c86
    1018:b992  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:b996  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:b99a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:b99e  28  63  08  10       addr         FUN_1008_6328
    1018:b9a2  2c  63  08  10       addr         FUN_1008_632c
    1018:b9a6  96  81  18  10       addr         pass1_1018_8196
    1018:b9aa  ea  68  08  10       addr         pass1_1008_68ea
    1018:b9ae  60  97  08  10       addr         create_window_ex_1008_9760
    1018:b9b2  c6  68  08  10       addr         pass1_1008_68c6
    1018:b9b6  40  96  08  10       addr         send_msg_1008_9640
    1018:b9ba  64  96  08  10       addr         set_win_text_1008_9664
    1018:b9be  2c  37  08  10       addr         pass1_1008_372c
    1018:b9c2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:b9c6  3c  37  08  10       addr         pass1_1008_373c
    1018:b9ca  40  37  08  10       addr         pass1_1008_3740
    1018:b9ce  44  37  08  10       addr         pass1_1008_3744
    1018:b9d2  48  37  08  10       addr         pass1_1008_3748
    1018:b9d6  4c  37  08  10       addr         pass1_1008_374c
    1018:b9da  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:b9de  98  96  08  10       addr         destroy_win_1008_9698
    1018:b9e2  50  37  08  10       addr         pass1_1008_3750
    1018:b9e6  76  6a  18  10       addr         FUN_1018_6a76
    1018:b9ea  60  9c  08  10       addr         pass1_1008_9c60
    1018:b9ee  58  37  08  10       addr         pass1_1008_3758
    1018:b9f2  24  63  08  10       addr         FUN_1008_6324
    1018:b9f6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:b9fa  62  37  08  10       addr         pass1_1008_3762
    1018:b9fe  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ba02  66  37  08  10       addr         pass1_1008_3766
    1018:ba06  6a  37  08  10       addr         FUN_1008_376a
    1018:ba0a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ba0e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ba12  02  6b  08  10       addr         pass1_1008_6b02
    1018:ba16  7a  37  08  10       addr         pass1_1008_377a
    1018:ba1a  52  9c  08  10       addr         pass1_1008_9c52
    1018:ba1e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ba22  16  9c  08  10       addr         pass1_1008_9c16
    1018:ba26  30  9c  08  10       addr         pass1_1008_9c30
    1018:ba2a  86  9c  08  10       addr         pass1_1008_9c86
    1018:ba2e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ba32  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:ba36  8e  62  08  10       addr         destroy_win_1008_628e
    1018:ba3a  28  63  08  10       addr         FUN_1008_6328
    1018:ba3e  2c  63  08  10       addr         FUN_1008_632c
    1018:ba42  76  92  18  10       addr         pass1_1018_9276
    1018:ba46  ea  68  08  10       addr         pass1_1008_68ea
    1018:ba4a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:ba4e  c6  68  08  10       addr         pass1_1008_68c6
    1018:ba52  40  96  08  10       addr         send_msg_1008_9640
    1018:ba56  64  96  08  10       addr         set_win_text_1008_9664
    1018:ba5a  2c  37  08  10       addr         pass1_1008_372c
    1018:ba5e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ba62  3c  37  08  10       addr         pass1_1008_373c
    1018:ba66  40  37  08  10       addr         pass1_1008_3740
    1018:ba6a  44  37  08  10       addr         pass1_1008_3744
    1018:ba6e  48  37  08  10       addr         pass1_1008_3748
    1018:ba72  4c  37  08  10       addr         pass1_1008_374c
    1018:ba76  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:ba7a  98  96  08  10       addr         destroy_win_1008_9698
    1018:ba7e  50  37  08  10       addr         pass1_1008_3750
    1018:ba82  76  6a  18  10       addr         FUN_1018_6a76
    1018:ba86  60  9c  08  10       addr         pass1_1008_9c60
    1018:ba8a  58  37  08  10       addr         pass1_1008_3758
    1018:ba8e  24  63  08  10       addr         FUN_1008_6324
    1018:ba92  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ba96  62  37  08  10       addr         pass1_1008_3762
    1018:ba9a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ba9e  66  37  08  10       addr         pass1_1008_3766
    1018:baa2  6a  37  08  10       addr         FUN_1008_376a
    1018:baa6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:baaa  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:baae  02  6b  08  10       addr         pass1_1008_6b02
    1018:bab2  7a  37  08  10       addr         pass1_1008_377a
    1018:bab6  52  9c  08  10       addr         pass1_1008_9c52
    1018:baba  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:babe  16  9c  08  10       addr         pass1_1008_9c16
    1018:bac2  30  9c  08  10       addr         pass1_1008_9c30
    1018:bac6  86  9c  08  10       addr         pass1_1008_9c86
    1018:baca  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bace  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bad2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bad6  28  63  08  10       addr         FUN_1008_6328
    1018:bada  2c  63  08  10       addr         FUN_1008_632c
    1018:bade  76  89  18  10       addr         pass1_1018_8976
    1018:bae2  ea  68  08  10       addr         pass1_1008_68ea
    1018:bae6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:baea  c6  68  08  10       addr         pass1_1008_68c6
    1018:baee  40  96  08  10       addr         send_msg_1008_9640
    1018:baf2  64  96  08  10       addr         set_win_text_1008_9664
    1018:baf6  2c  37  08  10       addr         pass1_1008_372c
    1018:bafa  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bafe  3c  37  08  10       addr         pass1_1008_373c
    1018:bb02  40  37  08  10       addr         pass1_1008_3740
    1018:bb06  44  37  08  10       addr         pass1_1008_3744
    1018:bb0a  48  37  08  10       addr         pass1_1008_3748
    1018:bb0e  4c  37  08  10       addr         pass1_1008_374c
    1018:bb12  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bb16  98  96  08  10       addr         destroy_win_1008_9698
    1018:bb1a  50  37  08  10       addr         pass1_1008_3750
    1018:bb1e  76  6a  18  10       addr         FUN_1018_6a76
    1018:bb22  60  9c  08  10       addr         pass1_1008_9c60
    1018:bb26  58  37  08  10       addr         pass1_1008_3758
    1018:bb2a  24  63  08  10       addr         FUN_1008_6324
    1018:bb2e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bb32  62  37  08  10       addr         pass1_1008_3762
    1018:bb36  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bb3a  66  37  08  10       addr         pass1_1008_3766
    1018:bb3e  6a  37  08  10       addr         FUN_1008_376a
    1018:bb42  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bb46  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bb4a  02  6b  08  10       addr         pass1_1008_6b02
    1018:bb4e  7a  37  08  10       addr         pass1_1008_377a
    1018:bb52  52  9c  08  10       addr         pass1_1008_9c52
    1018:bb56  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bb5a  16  9c  08  10       addr         pass1_1008_9c16
    1018:bb5e  30  9c  08  10       addr         pass1_1008_9c30
    1018:bb62  86  9c  08  10       addr         pass1_1008_9c86
    1018:bb66  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bb6a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bb6e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bb72  28  63  08  10       addr         FUN_1008_6328
    1018:bb76  2c  63  08  10       addr         FUN_1008_632c
    1018:bb7a  5e  8f  18  10       addr         pass1_1018_8f5e
    1018:bb7e  ea  68  08  10       addr         pass1_1008_68ea
    1018:bb82  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bb86  c6  68  08  10       addr         pass1_1008_68c6
    1018:bb8a  40  96  08  10       addr         send_msg_1008_9640
    1018:bb8e  64  96  08  10       addr         set_win_text_1008_9664
    1018:bb92  2c  37  08  10       addr         pass1_1008_372c
    1018:bb96  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bb9a  3c  37  08  10       addr         pass1_1008_373c
    1018:bb9e  40  37  08  10       addr         pass1_1008_3740
    1018:bba2  44  37  08  10       addr         pass1_1008_3744
    1018:bba6  48  37  08  10       addr         pass1_1008_3748
    1018:bbaa  4c  37  08  10       addr         pass1_1008_374c
    1018:bbae  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bbb2  98  96  08  10       addr         destroy_win_1008_9698
    1018:bbb6  50  37  08  10       addr         pass1_1008_3750
    1018:bbba  76  6a  18  10       addr         FUN_1018_6a76
    1018:bbbe  60  9c  08  10       addr         pass1_1008_9c60
    1018:bbc2  58  37  08  10       addr         pass1_1008_3758
    1018:bbc6  24  63  08  10       addr         FUN_1008_6324
    1018:bbca  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bbce  62  37  08  10       addr         pass1_1008_3762
    1018:bbd2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bbd6  66  37  08  10       addr         pass1_1008_3766
    1018:bbda  6a  37  08  10       addr         FUN_1008_376a
    1018:bbde  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bbe2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bbe6  02  6b  08  10       addr         pass1_1008_6b02
    1018:bbea  7a  37  08  10       addr         pass1_1008_377a
    1018:bbee  52  9c  08  10       addr         pass1_1008_9c52
    1018:bbf2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bbf6  16  9c  08  10       addr         pass1_1008_9c16
    1018:bbfa  30  9c  08  10       addr         pass1_1008_9c30
    1018:bbfe  86  9c  08  10       addr         pass1_1008_9c86
    1018:bc02  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bc06  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bc0a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bc0e  28  63  08  10       addr         FUN_1008_6328
    1018:bc12  2c  63  08  10       addr         FUN_1008_632c
    1018:bc16  2e  80  18  10       addr         pass1_1018_802e
    1018:bc1a  ea  68  08  10       addr         pass1_1008_68ea
    1018:bc1e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bc22  c6  68  08  10       addr         pass1_1008_68c6
    1018:bc26  40  96  08  10       addr         send_msg_1008_9640
    1018:bc2a  64  96  08  10       addr         set_win_text_1008_9664
    1018:bc2e  2c  37  08  10       addr         pass1_1008_372c
    1018:bc32  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bc36  3c  37  08  10       addr         pass1_1008_373c
    1018:bc3a  40  37  08  10       addr         pass1_1008_3740
    1018:bc3e  44  37  08  10       addr         pass1_1008_3744
    1018:bc42  48  37  08  10       addr         pass1_1008_3748
    1018:bc46  4c  37  08  10       addr         pass1_1008_374c
    1018:bc4a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bc4e  98  96  08  10       addr         destroy_win_1008_9698
    1018:bc52  50  37  08  10       addr         pass1_1008_3750
    1018:bc56  76  6a  18  10       addr         FUN_1018_6a76
    1018:bc5a  60  9c  08  10       addr         pass1_1008_9c60
    1018:bc5e  58  37  08  10       addr         pass1_1008_3758
    1018:bc62  24  63  08  10       addr         FUN_1008_6324
    1018:bc66  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bc6a  62  37  08  10       addr         pass1_1008_3762
    1018:bc6e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bc72  66  37  08  10       addr         pass1_1008_3766
    1018:bc76  6a  37  08  10       addr         FUN_1008_376a
    1018:bc7a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bc7e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bc82  02  6b  08  10       addr         pass1_1008_6b02
    1018:bc86  7a  37  08  10       addr         pass1_1008_377a
    1018:bc8a  52  9c  08  10       addr         pass1_1008_9c52
    1018:bc8e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bc92  16  9c  08  10       addr         pass1_1008_9c16
    1018:bc96  30  9c  08  10       addr         pass1_1008_9c30
    1018:bc9a  86  9c  08  10       addr         pass1_1008_9c86
    1018:bc9e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bca2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bca6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bcaa  28  63  08  10       addr         FUN_1008_6328
    1018:bcae  2c  63  08  10       addr         FUN_1008_632c
    1018:bcb2  0e  88  18  10       addr         pass1_1018_880e
    1018:bcb6  ea  68  08  10       addr         pass1_1008_68ea
    1018:bcba  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bcbe  c6  68  08  10       addr         pass1_1008_68c6
    1018:bcc2  40  96  08  10       addr         send_msg_1008_9640
    1018:bcc6  64  96  08  10       addr         set_win_text_1008_9664
    1018:bcca  2c  37  08  10       addr         pass1_1008_372c
    1018:bcce  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bcd2  3c  37  08  10       addr         pass1_1008_373c
    1018:bcd6  40  37  08  10       addr         pass1_1008_3740
    1018:bcda  44  37  08  10       addr         pass1_1008_3744
    1018:bcde  48  37  08  10       addr         pass1_1008_3748
    1018:bce2  4c  37  08  10       addr         pass1_1008_374c
    1018:bce6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bcea  98  96  08  10       addr         destroy_win_1008_9698
    1018:bcee  50  37  08  10       addr         pass1_1008_3750
    1018:bcf2  76  6a  18  10       addr         FUN_1018_6a76
    1018:bcf6  60  9c  08  10       addr         pass1_1008_9c60
    1018:bcfa  58  37  08  10       addr         pass1_1008_3758
    1018:bcfe  24  63  08  10       addr         FUN_1008_6324
    1018:bd02  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bd06  62  37  08  10       addr         pass1_1008_3762
    1018:bd0a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bd0e  66  37  08  10       addr         pass1_1008_3766
    1018:bd12  6a  37  08  10       addr         FUN_1008_376a
    1018:bd16  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bd1a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bd1e  02  6b  08  10       addr         pass1_1008_6b02
    1018:bd22  7a  37  08  10       addr         pass1_1008_377a
    1018:bd26  52  9c  08  10       addr         pass1_1008_9c52
    1018:bd2a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bd2e  16  9c  08  10       addr         pass1_1008_9c16
    1018:bd32  30  9c  08  10       addr         pass1_1008_9c30
    1018:bd36  86  9c  08  10       addr         pass1_1008_9c86
    1018:bd3a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bd3e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bd42  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bd46  28  63  08  10       addr         FUN_1008_6328
    1018:bd4a  2c  63  08  10       addr         FUN_1008_632c
    1018:bd4e  f6  8d  18  10       addr         pass1_1018_8df6
    1018:bd52  ea  68  08  10       addr         pass1_1008_68ea
    1018:bd56  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bd5a  c6  68  08  10       addr         pass1_1008_68c6
    1018:bd5e  40  96  08  10       addr         send_msg_1008_9640
    1018:bd62  64  96  08  10       addr         set_win_text_1008_9664
    1018:bd66  2c  37  08  10       addr         pass1_1008_372c
    1018:bd6a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bd6e  3c  37  08  10       addr         pass1_1008_373c
    1018:bd72  40  37  08  10       addr         pass1_1008_3740
    1018:bd76  44  37  08  10       addr         pass1_1008_3744
    1018:bd7a  48  37  08  10       addr         pass1_1008_3748
    1018:bd7e  4c  37  08  10       addr         pass1_1008_374c
    1018:bd82  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bd86  98  96  08  10       addr         destroy_win_1008_9698
    1018:bd8a  50  37  08  10       addr         pass1_1008_3750
    1018:bd8e  76  6a  18  10       addr         FUN_1018_6a76
    1018:bd92  60  9c  08  10       addr         pass1_1008_9c60
    1018:bd96  58  37  08  10       addr         pass1_1008_3758
    1018:bd9a  24  63  08  10       addr         FUN_1008_6324
    1018:bd9e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bda2  62  37  08  10       addr         pass1_1008_3762
    1018:bda6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bdaa  66  37  08  10       addr         pass1_1008_3766
    1018:bdae  6a  37  08  10       addr         FUN_1008_376a
    1018:bdb2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bdb6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bdba  02  6b  08  10       addr         pass1_1008_6b02
    1018:bdbe  7a  37  08  10       addr         pass1_1008_377a
    1018:bdc2  52  9c  08  10       addr         pass1_1008_9c52
    1018:bdc6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bdca  16  9c  08  10       addr         pass1_1008_9c16
    1018:bdce  30  9c  08  10       addr         pass1_1008_9c30
    1018:bdd2  86  9c  08  10       addr         pass1_1008_9c86
    1018:bdd6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bdda  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bdde  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bde2  28  63  08  10       addr         FUN_1008_6328
    1018:bde6  2c  63  08  10       addr         FUN_1008_632c
    1018:bdea  c6  7e  18  10       addr         pass1_1018_7ec6
    1018:bdee  ea  68  08  10       addr         pass1_1008_68ea
    1018:bdf2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bdf6  c6  68  08  10       addr         pass1_1008_68c6
    1018:bdfa  40  96  08  10       addr         send_msg_1008_9640
    1018:bdfe  64  96  08  10       addr         set_win_text_1008_9664
    1018:be02  2c  37  08  10       addr         pass1_1008_372c
    1018:be06  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:be0a  3c  37  08  10       addr         pass1_1008_373c
    1018:be0e  40  37  08  10       addr         pass1_1008_3740
    1018:be12  44  37  08  10       addr         pass1_1008_3744
    1018:be16  48  37  08  10       addr         pass1_1008_3748
    1018:be1a  4c  37  08  10       addr         pass1_1008_374c
    1018:be1e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:be22  98  96  08  10       addr         destroy_win_1008_9698
    1018:be26  50  37  08  10       addr         pass1_1008_3750
    1018:be2a  76  6a  18  10       addr         FUN_1018_6a76
    1018:be2e  60  9c  08  10       addr         pass1_1008_9c60
    1018:be32  58  37  08  10       addr         pass1_1008_3758
    1018:be36  24  63  08  10       addr         FUN_1008_6324
    1018:be3a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:be3e  62  37  08  10       addr         pass1_1008_3762
    1018:be42  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:be46  66  37  08  10       addr         pass1_1008_3766
    1018:be4a  6a  37  08  10       addr         FUN_1008_376a
    1018:be4e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:be52  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:be56  02  6b  08  10       addr         pass1_1008_6b02
    1018:be5a  7a  37  08  10       addr         pass1_1008_377a
    1018:be5e  52  9c  08  10       addr         pass1_1008_9c52
    1018:be62  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:be66  16  9c  08  10       addr         pass1_1008_9c16
    1018:be6a  30  9c  08  10       addr         pass1_1008_9c30
    1018:be6e  86  9c  08  10       addr         pass1_1008_9c86
    1018:be72  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:be76  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:be7a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:be7e  28  63  08  10       addr         FUN_1008_6328
    1018:be82  2c  63  08  10       addr         FUN_1008_632c
    1018:be86  16  86  18  10       addr         pass1_1018_8616
    1018:be8a  ea  68  08  10       addr         pass1_1008_68ea
    1018:be8e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:be92  c6  68  08  10       addr         pass1_1008_68c6
    1018:be96  40  96  08  10       addr         send_msg_1008_9640
    1018:be9a  64  96  08  10       addr         set_win_text_1008_9664
    1018:be9e  2c  37  08  10       addr         pass1_1008_372c
    1018:bea2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bea6  3c  37  08  10       addr         pass1_1008_373c
    1018:beaa  40  37  08  10       addr         pass1_1008_3740
    1018:beae  44  37  08  10       addr         pass1_1008_3744
    1018:beb2  48  37  08  10       addr         pass1_1008_3748
    1018:beb6  4c  37  08  10       addr         pass1_1008_374c
    1018:beba  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bebe  98  96  08  10       addr         destroy_win_1008_9698
    1018:bec2  50  37  08  10       addr         pass1_1008_3750
    1018:bec6  76  6a  18  10       addr         FUN_1018_6a76
    1018:beca  60  9c  08  10       addr         pass1_1008_9c60
    1018:bece  58  37  08  10       addr         pass1_1008_3758
    1018:bed2  24  63  08  10       addr         FUN_1008_6324
    1018:bed6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:beda  62  37  08  10       addr         pass1_1008_3762
    1018:bede  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bee2  66  37  08  10       addr         pass1_1008_3766
    1018:bee6  6a  37  08  10       addr         FUN_1008_376a
    1018:beea  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:beee  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bef2  02  6b  08  10       addr         pass1_1008_6b02
    1018:bef6  7a  37  08  10       addr         pass1_1008_377a
    1018:befa  52  9c  08  10       addr         pass1_1008_9c52
    1018:befe  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bf02  16  9c  08  10       addr         pass1_1008_9c16
    1018:bf06  30  9c  08  10       addr         pass1_1008_9c30
    1018:bf0a  86  9c  08  10       addr         pass1_1008_9c86
    1018:bf0e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bf12  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bf16  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bf1a  28  63  08  10       addr         FUN_1008_6328
    1018:bf1e  2c  63  08  10       addr         FUN_1008_632c
    1018:bf22  a6  86  18  10       addr         pass1_1018_86a6
    1018:bf26  ea  68  08  10       addr         pass1_1008_68ea
    1018:bf2a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bf2e  c6  68  08  10       addr         pass1_1008_68c6
    1018:bf32  40  96  08  10       addr         send_msg_1008_9640
    1018:bf36  64  96  08  10       addr         set_win_text_1008_9664
    1018:bf3a  2c  37  08  10       addr         pass1_1008_372c
    1018:bf3e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bf42  3c  37  08  10       addr         pass1_1008_373c
    1018:bf46  40  37  08  10       addr         pass1_1008_3740
    1018:bf4a  44  37  08  10       addr         pass1_1008_3744
    1018:bf4e  48  37  08  10       addr         pass1_1008_3748
    1018:bf52  4c  37  08  10       addr         pass1_1008_374c
    1018:bf56  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bf5a  98  96  08  10       addr         destroy_win_1008_9698
    1018:bf5e  50  37  08  10       addr         pass1_1008_3750
    1018:bf62  76  6a  18  10       addr         FUN_1018_6a76
    1018:bf66  60  9c  08  10       addr         pass1_1008_9c60
    1018:bf6a  58  37  08  10       addr         pass1_1008_3758
    1018:bf6e  24  63  08  10       addr         FUN_1008_6324
    1018:bf72  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:bf76  62  37  08  10       addr         pass1_1008_3762
    1018:bf7a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:bf7e  66  37  08  10       addr         pass1_1008_3766
    1018:bf82  6a  37  08  10       addr         FUN_1008_376a
    1018:bf86  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:bf8a  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:bf8e  02  6b  08  10       addr         pass1_1008_6b02
    1018:bf92  7a  37  08  10       addr         pass1_1008_377a
    1018:bf96  52  9c  08  10       addr         pass1_1008_9c52
    1018:bf9a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:bf9e  16  9c  08  10       addr         pass1_1008_9c16
    1018:bfa2  30  9c  08  10       addr         pass1_1008_9c30
    1018:bfa6  86  9c  08  10       addr         pass1_1008_9c86
    1018:bfaa  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:bfae  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:bfb2  8e  62  08  10       addr         destroy_win_1008_628e
    1018:bfb6  28  63  08  10       addr         FUN_1008_6328
    1018:bfba  2c  63  08  10       addr         FUN_1008_632c
    1018:bfbe  8e  8c  18  10       addr         pass1_1018_8c8e
    1018:bfc2  ea  68  08  10       addr         pass1_1008_68ea
    1018:bfc6  60  97  08  10       addr         create_window_ex_1008_9760
    1018:bfca  c6  68  08  10       addr         pass1_1008_68c6
    1018:bfce  40  96  08  10       addr         send_msg_1008_9640
    1018:bfd2  64  96  08  10       addr         set_win_text_1008_9664
    1018:bfd6  2c  37  08  10       addr         pass1_1008_372c
    1018:bfda  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:bfde  3c  37  08  10       addr         pass1_1008_373c
    1018:bfe2  40  37  08  10       addr         pass1_1008_3740
    1018:bfe6  44  37  08  10       addr         pass1_1008_3744
    1018:bfea  48  37  08  10       addr         pass1_1008_3748
    1018:bfee  4c  37  08  10       addr         pass1_1008_374c
    1018:bff2  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:bff6  98  96  08  10       addr         destroy_win_1008_9698
    1018:bffa  50  37  08  10       addr         pass1_1008_3750
    1018:bffe  76  6a  18  10       addr         FUN_1018_6a76
    1018:c002  60  9c  08  10       addr         pass1_1008_9c60
    1018:c006  58  37  08  10       addr         pass1_1008_3758
    1018:c00a  24  63  08  10       addr         FUN_1008_6324
    1018:c00e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c012  62  37  08  10       addr         pass1_1008_3762
    1018:c016  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c01a  66  37  08  10       addr         pass1_1008_3766
    1018:c01e  6a  37  08  10       addr         FUN_1008_376a
    1018:c022  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c026  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c02a  02  6b  08  10       addr         pass1_1008_6b02
    1018:c02e  7a  37  08  10       addr         pass1_1008_377a
    1018:c032  52  9c  08  10       addr         pass1_1008_9c52
    1018:c036  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c03a  16  9c  08  10       addr         pass1_1008_9c16
    1018:c03e  30  9c  08  10       addr         pass1_1008_9c30
    1018:c042  86  9c  08  10       addr         pass1_1008_9c86
    1018:c046  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c04a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c04e  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c052  28  63  08  10       addr         FUN_1008_6328
    1018:c056  2c  63  08  10       addr         FUN_1008_632c
    1018:c05a  ae  84  18  10       addr         pass1_1018_84ae
    1018:c05e  ea  68  08  10       addr         pass1_1008_68ea
    1018:c062  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c066  c6  68  08  10       addr         pass1_1008_68c6
    1018:c06a  40  96  08  10       addr         send_msg_1008_9640
    1018:c06e  64  96  08  10       addr         set_win_text_1008_9664
    1018:c072  2c  37  08  10       addr         pass1_1008_372c
    1018:c076  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c07a  3c  37  08  10       addr         pass1_1008_373c
    1018:c07e  40  37  08  10       addr         pass1_1008_3740
    1018:c082  44  37  08  10       addr         pass1_1008_3744
    1018:c086  48  37  08  10       addr         pass1_1008_3748
    1018:c08a  4c  37  08  10       addr         pass1_1008_374c
    1018:c08e  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c092  98  96  08  10       addr         destroy_win_1008_9698
    1018:c096  50  37  08  10       addr         pass1_1008_3750
    1018:c09a  76  6a  18  10       addr         FUN_1018_6a76
    1018:c09e  60  9c  08  10       addr         pass1_1008_9c60
    1018:c0a2  58  37  08  10       addr         pass1_1008_3758
    1018:c0a6  24  63  08  10       addr         FUN_1008_6324
    1018:c0aa  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c0ae  62  37  08  10       addr         pass1_1008_3762
    1018:c0b2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c0b6  66  37  08  10       addr         pass1_1008_3766
    1018:c0ba  6a  37  08  10       addr         FUN_1008_376a
    1018:c0be  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c0c2  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c0c6  02  6b  08  10       addr         pass1_1008_6b02
    1018:c0ca  7a  37  08  10       addr         pass1_1008_377a
    1018:c0ce  52  9c  08  10       addr         pass1_1008_9c52
    1018:c0d2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c0d6  16  9c  08  10       addr         pass1_1008_9c16
    1018:c0da  30  9c  08  10       addr         pass1_1008_9c30
    1018:c0de  86  9c  08  10       addr         pass1_1008_9c86
    1018:c0e2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c0e6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c0ea  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c0ee  28  63  08  10       addr         FUN_1008_6328
    1018:c0f2  2c  63  08  10       addr         FUN_1008_632c
    1018:c0f6  b6  8b  18  10       addr         pass1_1018_8bb6
    1018:c0fa  ea  68  08  10       addr         pass1_1008_68ea
    1018:c0fe  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c102  c6  68  08  10       addr         pass1_1008_68c6
    1018:c106  40  96  08  10       addr         send_msg_1008_9640
    1018:c10a  64  96  08  10       addr         set_win_text_1008_9664
    1018:c10e  2c  37  08  10       addr         pass1_1008_372c
    1018:c112  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c116  3c  37  08  10       addr         pass1_1008_373c
    1018:c11a  40  37  08  10       addr         pass1_1008_3740
    1018:c11e  44  37  08  10       addr         pass1_1008_3744
    1018:c122  48  37  08  10       addr         pass1_1008_3748
    1018:c126  4c  37  08  10       addr         pass1_1008_374c
    1018:c12a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c12e  98  96  08  10       addr         destroy_win_1008_9698
    1018:c132  50  37  08  10       addr         pass1_1008_3750
    1018:c136  76  6a  18  10       addr         FUN_1018_6a76
    1018:c13a  60  9c  08  10       addr         pass1_1008_9c60
    1018:c13e  58  37  08  10       addr         pass1_1008_3758
    1018:c142  24  63  08  10       addr         FUN_1008_6324
    1018:c146  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c14a  62  37  08  10       addr         pass1_1008_3762
    1018:c14e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c152  66  37  08  10       addr         pass1_1008_3766
    1018:c156  6a  37  08  10       addr         FUN_1008_376a
    1018:c15a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c15e  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c162  02  6b  08  10       addr         pass1_1008_6b02
    1018:c166  7a  37  08  10       addr         pass1_1008_377a
    1018:c16a  52  9c  08  10       addr         pass1_1008_9c52
    1018:c16e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c172  16  9c  08  10       addr         pass1_1008_9c16
    1018:c176  30  9c  08  10       addr         pass1_1008_9c30
    1018:c17a  86  9c  08  10       addr         pass1_1008_9c86
    1018:c17e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c182  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c186  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c18a  28  63  08  10       addr         FUN_1008_6328
    1018:c18e  2c  63  08  10       addr         FUN_1008_632c
    1018:c192  9e  91  18  10       addr         pass1_1018_919e
    1018:c196  ea  68  08  10       addr         pass1_1008_68ea
    1018:c19a  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c19e  c6  68  08  10       addr         pass1_1008_68c6
    1018:c1a2  40  96  08  10       addr         send_msg_1008_9640
    1018:c1a6  64  96  08  10       addr         set_win_text_1008_9664
    1018:c1aa  2c  37  08  10       addr         pass1_1008_372c
    1018:c1ae  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c1b2  3c  37  08  10       addr         pass1_1008_373c
    1018:c1b6  40  37  08  10       addr         pass1_1008_3740
    1018:c1ba  44  37  08  10       addr         pass1_1008_3744
    1018:c1be  48  37  08  10       addr         pass1_1008_3748
    1018:c1c2  4c  37  08  10       addr         pass1_1008_374c
    1018:c1c6  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c1ca  98  96  08  10       addr         destroy_win_1008_9698
    1018:c1ce  50  37  08  10       addr         pass1_1008_3750
    1018:c1d2  76  6a  18  10       addr         FUN_1018_6a76
    1018:c1d6  60  9c  08  10       addr         pass1_1008_9c60
    1018:c1da  58  37  08  10       addr         pass1_1008_3758
    1018:c1de  24  63  08  10       addr         FUN_1008_6324
    1018:c1e2  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c1e6  62  37  08  10       addr         pass1_1008_3762
    1018:c1ea  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c1ee  66  37  08  10       addr         pass1_1008_3766
    1018:c1f2  6a  37  08  10       addr         FUN_1008_376a
    1018:c1f6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c1fa  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c1fe  02  6b  08  10       addr         pass1_1008_6b02
    1018:c202  7a  37  08  10       addr         pass1_1008_377a
    1018:c206  52  9c  08  10       addr         pass1_1008_9c52
    1018:c20a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c20e  16  9c  08  10       addr         pass1_1008_9c16
    1018:c212  30  9c  08  10       addr         pass1_1008_9c30
    1018:c216  86  9c  08  10       addr         pass1_1008_9c86
    1018:c21a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c21e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c222  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c226  28  63  08  10       addr         FUN_1008_6328
    1018:c22a  2c  63  08  10       addr         FUN_1008_632c
    1018:c22e  6e  82  18  10       addr         pass1_1018_826e
    1018:c232  ea  68  08  10       addr         pass1_1008_68ea
    1018:c236  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c23a  c6  68  08  10       addr         pass1_1008_68c6
    1018:c23e  40  96  08  10       addr         send_msg_1008_9640
    1018:c242  64  96  08  10       addr         set_win_text_1008_9664
    1018:c246  2c  37  08  10       addr         pass1_1008_372c
    1018:c24a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c24e  3c  37  08  10       addr         pass1_1008_373c
    1018:c252  40  37  08  10       addr         pass1_1008_3740
    1018:c256  44  37  08  10       addr         pass1_1008_3744
    1018:c25a  48  37  08  10       addr         pass1_1008_3748
    1018:c25e  4c  37  08  10       addr         pass1_1008_374c
    1018:c262  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c266  98  96  08  10       addr         destroy_win_1008_9698
    1018:c26a  50  37  08  10       addr         pass1_1008_3750
    1018:c26e  76  6a  18  10       addr         FUN_1018_6a76
    1018:c272  60  9c  08  10       addr         pass1_1008_9c60
    1018:c276  58  37  08  10       addr         pass1_1008_3758
    1018:c27a  24  63  08  10       addr         FUN_1008_6324
    1018:c27e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c282  62  37  08  10       addr         pass1_1008_3762
    1018:c286  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c28a  66  37  08  10       addr         pass1_1008_3766
    1018:c28e  6a  37  08  10       addr         FUN_1008_376a
    1018:c292  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c296  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c29a  02  6b  08  10       addr         pass1_1008_6b02
    1018:c29e  7a  37  08  10       addr         pass1_1008_377a
    1018:c2a2  52  9c  08  10       addr         pass1_1008_9c52
    1018:c2a6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c2aa  16  9c  08  10       addr         pass1_1008_9c16
    1018:c2ae  30  9c  08  10       addr         pass1_1008_9c30
    1018:c2b2  86  9c  08  10       addr         pass1_1008_9c86
    1018:c2b6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c2ba  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c2be  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c2c2  28  63  08  10       addr         FUN_1008_6328
    1018:c2c6  2c  63  08  10       addr         FUN_1008_632c
    1018:c2ca  4e  8a  18  10       addr         pass1_1018_8a4e
    1018:c2ce  ea  68  08  10       addr         pass1_1008_68ea
    1018:c2d2  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c2d6  c6  68  08  10       addr         pass1_1008_68c6
    1018:c2da  40  96  08  10       addr         send_msg_1008_9640
    1018:c2de  64  96  08  10       addr         set_win_text_1008_9664
    1018:c2e2  2c  37  08  10       addr         pass1_1008_372c
    1018:c2e6  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c2ea  3c  37  08  10       addr         pass1_1008_373c
    1018:c2ee  40  37  08  10       addr         pass1_1008_3740
    1018:c2f2  44  37  08  10       addr         pass1_1008_3744
    1018:c2f6  48  37  08  10       addr         pass1_1008_3748
    1018:c2fa  4c  37  08  10       addr         pass1_1008_374c
    1018:c2fe  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c302  98  96  08  10       addr         destroy_win_1008_9698
    1018:c306  50  37  08  10       addr         pass1_1008_3750
    1018:c30a  76  6a  18  10       addr         FUN_1018_6a76
    1018:c30e  60  9c  08  10       addr         pass1_1008_9c60
    1018:c312  58  37  08  10       addr         pass1_1008_3758
    1018:c316  24  63  08  10       addr         FUN_1008_6324
    1018:c31a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c31e  62  37  08  10       addr         pass1_1008_3762
    1018:c322  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c326  66  37  08  10       addr         pass1_1008_3766
    1018:c32a  6a  37  08  10       addr         FUN_1008_376a
    1018:c32e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c332  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c336  02  6b  08  10       addr         pass1_1008_6b02
    1018:c33a  7a  37  08  10       addr         pass1_1008_377a
    1018:c33e  52  9c  08  10       addr         pass1_1008_9c52
    1018:c342  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c346  16  9c  08  10       addr         pass1_1008_9c16
    1018:c34a  30  9c  08  10       addr         pass1_1008_9c30
    1018:c34e  86  9c  08  10       addr         pass1_1008_9c86
    1018:c352  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c356  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c35a  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c35e  28  63  08  10       addr         FUN_1008_6328
    1018:c362  2c  63  08  10       addr         FUN_1008_632c
    1018:c366  36  90  18  10       addr         pass1_1018_9036
    1018:c36a  ea  68  08  10       addr         pass1_1008_68ea
    1018:c36e  60  97  08  10       addr         create_window_ex_1008_9760
    1018:c372  c6  68  08  10       addr         pass1_1008_68c6
    1018:c376  40  96  08  10       addr         send_msg_1008_9640
    1018:c37a  64  96  08  10       addr         set_win_text_1008_9664
    1018:c37e  2c  37  08  10       addr         pass1_1008_372c
    1018:c382  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c386  3c  37  08  10       addr         pass1_1008_373c
    1018:c38a  40  37  08  10       addr         pass1_1008_3740
    1018:c38e  44  37  08  10       addr         pass1_1008_3744
    1018:c392  48  37  08  10       addr         pass1_1008_3748
    1018:c396  4c  37  08  10       addr         pass1_1008_374c
    1018:c39a  7a  6a  18  10       addr         mixed_draw_op_1018_6a7a
    1018:c39e  98  96  08  10       addr         destroy_win_1008_9698
    1018:c3a2  50  37  08  10       addr         pass1_1008_3750
    1018:c3a6  76  6a  18  10       addr         FUN_1018_6a76
    1018:c3aa  60  9c  08  10       addr         pass1_1008_9c60
    1018:c3ae  58  37  08  10       addr         pass1_1008_3758
    1018:c3b2  24  63  08  10       addr         FUN_1008_6324
    1018:c3b6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c3ba  62  37  08  10       addr         pass1_1008_3762
    1018:c3be  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c3c2  66  37  08  10       addr         pass1_1008_3766
    1018:c3c6  6a  37  08  10       addr         FUN_1008_376a
    1018:c3ca  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c3ce  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:c3d2  02  6b  08  10       addr         pass1_1008_6b02
    1018:c3d6  7a  37  08  10       addr         pass1_1008_377a
    1018:c3da  52  9c  08  10       addr         pass1_1008_9c52
    1018:c3de  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c3e2  16  9c  08  10       addr         pass1_1008_9c16
    1018:c3e6  30  9c  08  10       addr         pass1_1008_9c30
    1018:c3ea  86  9c  08  10       addr         pass1_1008_9c86
    1018:c3ee  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c3f2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c3f6  8e  62  08  10       addr         destroy_win_1008_628e
    1018:c3fa  28  63  08  10       addr         FUN_1008_6328
    1018:c3fe  2c  63  08  10       addr         FUN_1008_632c

- 1018:c8bc

    1018:c8bc  96  c8  18  10       addr         pass1_1018_c896
    1018:c8c0  ea  68  08  10       addr         pass1_1008_68ea
    1018:c8c4  16  03  20  10       addr         win_1020_0316
    1018:c8c8  8c  02  20  10       addr         pass1_1020_028c
    1018:c8cc  40  96  08  10       addr         send_msg_1008_9640
    1018:c8d0  64  96  08  10       addr         set_win_text_1008_9664
    1018:c8d4  2c  37  08  10       addr         pass1_1008_372c
    1018:c8d8  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:c8dc  3c  37  08  10       addr         pass1_1008_373c
    1018:c8e0  40  37  08  10       addr         pass1_1008_3740
    1018:c8e4  44  37  08  10       addr         pass1_1008_3744
    1018:c8e8  48  37  08  10       addr         pass1_1008_3748
    1018:c8ec  4c  37  08  10       addr         pass1_1008_374c
    1018:c8f0  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:c8f4  98  96  08  10       addr         destroy_win_1008_9698
    1018:c8f8  50  37  08  10       addr         pass1_1008_3750
    1018:c8fc  54  37  08  10       addr         pass1_1008_3754
    1018:c900  60  9c  08  10       addr         pass1_1008_9c60
    1018:c904  58  37  08  10       addr         pass1_1008_3758
    1018:c908  24  63  08  10       addr         FUN_1008_6324
    1018:c90c  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:c910  62  37  08  10       addr         pass1_1008_3762
    1018:c914  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:c918  b2  03  20  10       addr         post_msg_1020_03b2
    1018:c91c  d6  03  20  10       addr         post_msg_1020_03d6
    1018:c920  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:c924  fa  03  20  10       addr         post_msg_1020_03fa
    1018:c928  02  6b  08  10       addr         pass1_1008_6b02
    1018:c92c  7a  37  08  10       addr         pass1_1008_377a
    1018:c930  52  9c  08  10       addr         pass1_1008_9c52
    1018:c934  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:c938  16  9c  08  10       addr         pass1_1008_9c16
    1018:c93c  30  9c  08  10       addr         pass1_1008_9c30
    1018:c940  86  9c  08  10       addr         pass1_1008_9c86
    1018:c944  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:c948  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:c94c  ae  02  20  10       addr         pass1_1020_02ae
    1018:c950  28  63  08  10       addr         FUN_1008_6328
    1018:c954  2c  63  08  10       addr         FUN_1008_632c

- 1018:d3d2
- 1018:d46e -> pass1_1018_d2c8
- 1018:d50a -> pass1_1018_d20a
- 1018:d5a6 -> pass1_1018_d33a
- 1018:d642 -> pass1_1018_d27c
- 1018:d6de -> pass1_1018_d1be
- 1018:d77a -> pass1_1018_d3ac
- 1018:d816 -> pass1_1018_d2ee
- 1018:d8b2 -> pass1_1018_d230
- 1018:d94e -> pass1_1018_d360
- 1018:d9ea -> pass1_1018_d2a2
- 1018:da86 -> pass1_1018_d1e4
- 1018:db22 -> pass1_1018_d314
- 1018:dbbe -> pass1_1018_d256
- 1018:dc5a -> pass1_1018_d198

    1018:d3d2  86  d3  18  10       addr         pass1_1018_d386
    1018:d3d6  ea  68  08  10       addr         pass1_1008_68ea
    1018:d3da  16  03  20  10       addr         win_1020_0316
    1018:d3de  8c  02  20  10       addr         pass1_1020_028c
    1018:d3e2  40  96  08  10       addr         send_msg_1008_9640
    1018:d3e6  64  96  08  10       addr         set_win_text_1008_9664
    1018:d3ea  2c  37  08  10       addr         pass1_1008_372c
    1018:d3ee  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d3f2  3c  37  08  10       addr         pass1_1008_373c
    1018:d3f6  40  37  08  10       addr         pass1_1008_3740
    1018:d3fa  44  37  08  10       addr         pass1_1008_3744
    1018:d3fe  48  37  08  10       addr         pass1_1008_3748
    1018:d402  4c  37  08  10       addr         pass1_1008_374c
    1018:d406  a8  cd  18  10       addr         unk_draw_op_1018_cda8
    1018:d40a  98  96  08  10       addr         destroy_win_1008_9698
    1018:d40e  50  37  08  10       addr         pass1_1008_3750
    1018:d412  54  37  08  10       addr         pass1_1008_3754
    1018:d416  60  9c  08  10       addr         pass1_1008_9c60
    1018:d41a  58  37  08  10       addr         pass1_1008_3758
    1018:d41e  24  63  08  10       addr         FUN_1008_6324
    1018:d422  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d426  62  37  08  10       addr         pass1_1008_3762
    1018:d42a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d42e  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d432  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d436  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d43a  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d43e  02  6b  08  10       addr         pass1_1008_6b02
    1018:d442  7a  37  08  10       addr         pass1_1008_377a
    1018:d446  52  9c  08  10       addr         pass1_1008_9c52
    1018:d44a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d44e  16  9c  08  10       addr         pass1_1008_9c16
    1018:d452  30  9c  08  10       addr         pass1_1008_9c30
    1018:d456  86  9c  08  10       addr         pass1_1008_9c86
    1018:d45a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d45e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d462  ae  02  20  10       addr         pass1_1020_02ae
    1018:d466  28  63  08  10       addr         FUN_1008_6328
    1018:d46a  2c  63  08  10       addr         FUN_1008_632c
    1018:d46e  c8  d2  18  10       addr         pass1_1018_d2c8
    1018:d472  ea  68  08  10       addr         pass1_1008_68ea
    1018:d476  16  03  20  10       addr         win_1020_0316
    1018:d47a  8c  02  20  10       addr         pass1_1020_028c
    1018:d47e  40  96  08  10       addr         send_msg_1008_9640
    1018:d482  64  96  08  10       addr         set_win_text_1008_9664
    1018:d486  2c  37  08  10       addr         pass1_1008_372c
    1018:d48a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d48e  3c  37  08  10       addr         pass1_1008_373c
    1018:d492  40  37  08  10       addr         pass1_1008_3740
    1018:d496  44  37  08  10       addr         pass1_1008_3744
    1018:d49a  48  37  08  10       addr         pass1_1008_3748
    1018:d49e  4c  37  08  10       addr         pass1_1008_374c
    1018:d4a2  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d4a6  98  96  08  10       addr         destroy_win_1008_9698
    1018:d4aa  50  37  08  10       addr         pass1_1008_3750
    1018:d4ae  54  37  08  10       addr         pass1_1008_3754
    1018:d4b2  60  9c  08  10       addr         pass1_1008_9c60
    1018:d4b6  58  37  08  10       addr         pass1_1008_3758
    1018:d4ba  24  63  08  10       addr         FUN_1008_6324
    1018:d4be  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d4c2  62  37  08  10       addr         pass1_1008_3762
    1018:d4c6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d4ca  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d4ce  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d4d2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d4d6  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d4da  02  6b  08  10       addr         pass1_1008_6b02
    1018:d4de  7a  37  08  10       addr         pass1_1008_377a
    1018:d4e2  52  9c  08  10       addr         pass1_1008_9c52
    1018:d4e6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d4ea  16  9c  08  10       addr         pass1_1008_9c16
    1018:d4ee  30  9c  08  10       addr         pass1_1008_9c30
    1018:d4f2  86  9c  08  10       addr         pass1_1008_9c86
    1018:d4f6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d4fa  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d4fe  ae  02  20  10       addr         pass1_1020_02ae
    1018:d502  28  63  08  10       addr         FUN_1008_6328
    1018:d506  2c  63  08  10       addr         FUN_1008_632c
    1018:d50a  0a  d2  18  10       addr         pass1_1018_d20a
    1018:d50e  ea  68  08  10       addr         pass1_1008_68ea
    1018:d512  16  03  20  10       addr         win_1020_0316
    1018:d516  8c  02  20  10       addr         pass1_1020_028c
    1018:d51a  40  96  08  10       addr         send_msg_1008_9640
    1018:d51e  64  96  08  10       addr         set_win_text_1008_9664
    1018:d522  2c  37  08  10       addr         pass1_1008_372c
    1018:d526  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d52a  3c  37  08  10       addr         pass1_1008_373c
    1018:d52e  40  37  08  10       addr         pass1_1008_3740
    1018:d532  44  37  08  10       addr         pass1_1008_3744
    1018:d536  48  37  08  10       addr         pass1_1008_3748
    1018:d53a  4c  37  08  10       addr         pass1_1008_374c
    1018:d53e  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d542  98  96  08  10       addr         destroy_win_1008_9698
    1018:d546  50  37  08  10       addr         pass1_1008_3750
    1018:d54a  54  37  08  10       addr         pass1_1008_3754
    1018:d54e  60  9c  08  10       addr         pass1_1008_9c60
    1018:d552  58  37  08  10       addr         pass1_1008_3758
    1018:d556  24  63  08  10       addr         FUN_1008_6324
    1018:d55a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d55e  62  37  08  10       addr         pass1_1008_3762
    1018:d562  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d566  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d56a  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d56e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d572  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d576  02  6b  08  10       addr         pass1_1008_6b02
    1018:d57a  7a  37  08  10       addr         pass1_1008_377a
    1018:d57e  52  9c  08  10       addr         pass1_1008_9c52
    1018:d582  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d586  16  9c  08  10       addr         pass1_1008_9c16
    1018:d58a  30  9c  08  10       addr         pass1_1008_9c30
    1018:d58e  86  9c  08  10       addr         pass1_1008_9c86
    1018:d592  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d596  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d59a  ae  02  20  10       addr         pass1_1020_02ae
    1018:d59e  28  63  08  10       addr         FUN_1008_6328
    1018:d5a2  2c  63  08  10       addr         FUN_1008_632c
    1018:d5a6  3a  d3  18  10       addr         pass1_1018_d33a
    1018:d5aa  ea  68  08  10       addr         pass1_1008_68ea
    1018:d5ae  16  03  20  10       addr         win_1020_0316
    1018:d5b2  8c  02  20  10       addr         pass1_1020_028c
    1018:d5b6  40  96  08  10       addr         send_msg_1008_9640
    1018:d5ba  64  96  08  10       addr         set_win_text_1008_9664
    1018:d5be  2c  37  08  10       addr         pass1_1008_372c
    1018:d5c2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d5c6  3c  37  08  10       addr         pass1_1008_373c
    1018:d5ca  40  37  08  10       addr         pass1_1008_3740
    1018:d5ce  44  37  08  10       addr         pass1_1008_3744
    1018:d5d2  48  37  08  10       addr         pass1_1008_3748
    1018:d5d6  4c  37  08  10       addr         pass1_1008_374c
    1018:d5da  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d5de  98  96  08  10       addr         destroy_win_1008_9698
    1018:d5e2  50  37  08  10       addr         pass1_1008_3750
    1018:d5e6  54  37  08  10       addr         pass1_1008_3754
    1018:d5ea  60  9c  08  10       addr         pass1_1008_9c60
    1018:d5ee  58  37  08  10       addr         pass1_1008_3758
    1018:d5f2  24  63  08  10       addr         FUN_1008_6324
    1018:d5f6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d5fa  62  37  08  10       addr         pass1_1008_3762
    1018:d5fe  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d602  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d606  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d60a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d60e  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d612  02  6b  08  10       addr         pass1_1008_6b02
    1018:d616  7a  37  08  10       addr         pass1_1008_377a
    1018:d61a  52  9c  08  10       addr         pass1_1008_9c52
    1018:d61e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d622  16  9c  08  10       addr         pass1_1008_9c16
    1018:d626  30  9c  08  10       addr         pass1_1008_9c30
    1018:d62a  86  9c  08  10       addr         pass1_1008_9c86
    1018:d62e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d632  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d636  ae  02  20  10       addr         pass1_1020_02ae
    1018:d63a  28  63  08  10       addr         FUN_1008_6328
    1018:d63e  2c  63  08  10       addr         FUN_1008_632c
    1018:d642  7c  d2  18  10       addr         pass1_1018_d27c
    1018:d646  ea  68  08  10       addr         pass1_1008_68ea
    1018:d64a  16  03  20  10       addr         win_1020_0316
    1018:d64e  8c  02  20  10       addr         pass1_1020_028c
    1018:d652  40  96  08  10       addr         send_msg_1008_9640
    1018:d656  64  96  08  10       addr         set_win_text_1008_9664
    1018:d65a  2c  37  08  10       addr         pass1_1008_372c
    1018:d65e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d662  3c  37  08  10       addr         pass1_1008_373c
    1018:d666  40  37  08  10       addr         pass1_1008_3740
    1018:d66a  44  37  08  10       addr         pass1_1008_3744
    1018:d66e  48  37  08  10       addr         pass1_1008_3748
    1018:d672  4c  37  08  10       addr         pass1_1008_374c
    1018:d676  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d67a  98  96  08  10       addr         destroy_win_1008_9698
    1018:d67e  50  37  08  10       addr         pass1_1008_3750
    1018:d682  54  37  08  10       addr         pass1_1008_3754
    1018:d686  60  9c  08  10       addr         pass1_1008_9c60
    1018:d68a  58  37  08  10       addr         pass1_1008_3758
    1018:d68e  24  63  08  10       addr         FUN_1008_6324
    1018:d692  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d696  62  37  08  10       addr         pass1_1008_3762
    1018:d69a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d69e  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d6a2  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d6a6  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d6aa  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d6ae  02  6b  08  10       addr         pass1_1008_6b02
    1018:d6b2  7a  37  08  10       addr         pass1_1008_377a
    1018:d6b6  52  9c  08  10       addr         pass1_1008_9c52
    1018:d6ba  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d6be  16  9c  08  10       addr         pass1_1008_9c16
    1018:d6c2  30  9c  08  10       addr         pass1_1008_9c30
    1018:d6c6  86  9c  08  10       addr         pass1_1008_9c86
    1018:d6ca  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d6ce  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d6d2  ae  02  20  10       addr         pass1_1020_02ae
    1018:d6d6  28  63  08  10       addr         FUN_1008_6328
    1018:d6da  2c  63  08  10       addr         FUN_1008_632c
    1018:d6de  be  d1  18  10       addr         pass1_1018_d1be
    1018:d6e2  ea  68  08  10       addr         pass1_1008_68ea
    1018:d6e6  16  03  20  10       addr         win_1020_0316
    1018:d6ea  8c  02  20  10       addr         pass1_1020_028c
    1018:d6ee  40  96  08  10       addr         send_msg_1008_9640
    1018:d6f2  64  96  08  10       addr         set_win_text_1008_9664
    1018:d6f6  2c  37  08  10       addr         pass1_1008_372c
    1018:d6fa  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d6fe  3c  37  08  10       addr         pass1_1008_373c
    1018:d702  40  37  08  10       addr         pass1_1008_3740
    1018:d706  44  37  08  10       addr         pass1_1008_3744
    1018:d70a  48  37  08  10       addr         pass1_1008_3748
    1018:d70e  4c  37  08  10       addr         pass1_1008_374c
    1018:d712  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d716  98  96  08  10       addr         destroy_win_1008_9698
    1018:d71a  50  37  08  10       addr         pass1_1008_3750
    1018:d71e  54  37  08  10       addr         pass1_1008_3754
    1018:d722  60  9c  08  10       addr         pass1_1008_9c60
    1018:d726  58  37  08  10       addr         pass1_1008_3758
    1018:d72a  24  63  08  10       addr         FUN_1008_6324
    1018:d72e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d732  62  37  08  10       addr         pass1_1008_3762
    1018:d736  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d73a  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d73e  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d742  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d746  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d74a  02  6b  08  10       addr         pass1_1008_6b02
    1018:d74e  7a  37  08  10       addr         pass1_1008_377a
    1018:d752  52  9c  08  10       addr         pass1_1008_9c52
    1018:d756  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d75a  16  9c  08  10       addr         pass1_1008_9c16
    1018:d75e  30  9c  08  10       addr         pass1_1008_9c30
    1018:d762  86  9c  08  10       addr         pass1_1008_9c86
    1018:d766  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d76a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d76e  ae  02  20  10       addr         pass1_1020_02ae
    1018:d772  28  63  08  10       addr         FUN_1008_6328
    1018:d776  2c  63  08  10       addr         FUN_1008_632c
    1018:d77a  ac  d3  18  10       addr         pass1_1018_d3ac
    1018:d77e  ea  68  08  10       addr         pass1_1008_68ea
    1018:d782  16  03  20  10       addr         win_1020_0316
    1018:d786  8c  02  20  10       addr         pass1_1020_028c
    1018:d78a  40  96  08  10       addr         send_msg_1008_9640
    1018:d78e  64  96  08  10       addr         set_win_text_1008_9664
    1018:d792  2c  37  08  10       addr         pass1_1008_372c
    1018:d796  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d79a  3c  37  08  10       addr         pass1_1008_373c
    1018:d79e  40  37  08  10       addr         pass1_1008_3740
    1018:d7a2  44  37  08  10       addr         pass1_1008_3744
    1018:d7a6  48  37  08  10       addr         pass1_1008_3748
    1018:d7aa  4c  37  08  10       addr         pass1_1008_374c
    1018:d7ae  c0  cf  18  10       addr         unk_draw_op_1018_cfc0
    1018:d7b2  98  96  08  10       addr         destroy_win_1008_9698
    1018:d7b6  50  37  08  10       addr         pass1_1008_3750
    1018:d7ba  54  37  08  10       addr         pass1_1008_3754
    1018:d7be  60  9c  08  10       addr         pass1_1008_9c60
    1018:d7c2  58  37  08  10       addr         pass1_1008_3758
    1018:d7c6  24  63  08  10       addr         FUN_1008_6324
    1018:d7ca  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d7ce  62  37  08  10       addr         pass1_1008_3762
    1018:d7d2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d7d6  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d7da  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d7de  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d7e2  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d7e6  02  6b  08  10       addr         pass1_1008_6b02
    1018:d7ea  7a  37  08  10       addr         pass1_1008_377a
    1018:d7ee  52  9c  08  10       addr         pass1_1008_9c52
    1018:d7f2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d7f6  16  9c  08  10       addr         pass1_1008_9c16
    1018:d7fa  30  9c  08  10       addr         pass1_1008_9c30
    1018:d7fe  86  9c  08  10       addr         pass1_1008_9c86
    1018:d802  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d806  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d80a  ae  02  20  10       addr         pass1_1020_02ae
    1018:d80e  28  63  08  10       addr         FUN_1008_6328
    1018:d812  2c  63  08  10       addr         FUN_1008_632c
    1018:d816  ee  d2  18  10       addr         pass1_1018_d2ee
    1018:d81a  ea  68  08  10       addr         pass1_1008_68ea
    1018:d81e  16  03  20  10       addr         win_1020_0316
    1018:d822  8c  02  20  10       addr         pass1_1020_028c
    1018:d826  40  96  08  10       addr         send_msg_1008_9640
    1018:d82a  64  96  08  10       addr         set_win_text_1008_9664
    1018:d82e  2c  37  08  10       addr         pass1_1008_372c
    1018:d832  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d836  3c  37  08  10       addr         pass1_1008_373c
    1018:d83a  40  37  08  10       addr         pass1_1008_3740
    1018:d83e  44  37  08  10       addr         pass1_1008_3744
    1018:d842  48  37  08  10       addr         pass1_1008_3748
    1018:d846  4c  37  08  10       addr         pass1_1008_374c
    1018:d84a  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d84e  98  96  08  10       addr         destroy_win_1008_9698
    1018:d852  50  37  08  10       addr         pass1_1008_3750
    1018:d856  54  37  08  10       addr         pass1_1008_3754
    1018:d85a  60  9c  08  10       addr         pass1_1008_9c60
    1018:d85e  58  37  08  10       addr         pass1_1008_3758
    1018:d862  24  63  08  10       addr         FUN_1008_6324
    1018:d866  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d86a  62  37  08  10       addr         pass1_1008_3762
    1018:d86e  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d872  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d876  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d87a  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d87e  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d882  02  6b  08  10       addr         pass1_1008_6b02
    1018:d886  7a  37  08  10       addr         pass1_1008_377a
    1018:d88a  52  9c  08  10       addr         pass1_1008_9c52
    1018:d88e  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d892  16  9c  08  10       addr         pass1_1008_9c16
    1018:d896  30  9c  08  10       addr         pass1_1008_9c30
    1018:d89a  86  9c  08  10       addr         pass1_1008_9c86
    1018:d89e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d8a2  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d8a6  ae  02  20  10       addr         pass1_1020_02ae
    1018:d8aa  28  63  08  10       addr         FUN_1008_6328
    1018:d8ae  2c  63  08  10       addr         FUN_1008_632c
    1018:d8b2  30  d2  18  10       addr         pass1_1018_d230
    1018:d8b6  ea  68  08  10       addr         pass1_1008_68ea
    1018:d8ba  16  03  20  10       addr         win_1020_0316
    1018:d8be  8c  02  20  10       addr         pass1_1020_028c
    1018:d8c2  40  96  08  10       addr         send_msg_1008_9640
    1018:d8c6  64  96  08  10       addr         set_win_text_1008_9664
    1018:d8ca  2c  37  08  10       addr         pass1_1008_372c
    1018:d8ce  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d8d2  3c  37  08  10       addr         pass1_1008_373c
    1018:d8d6  40  37  08  10       addr         pass1_1008_3740
    1018:d8da  44  37  08  10       addr         pass1_1008_3744
    1018:d8de  48  37  08  10       addr         pass1_1008_3748
    1018:d8e2  4c  37  08  10       addr         pass1_1008_374c
    1018:d8e6  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d8ea  98  96  08  10       addr         destroy_win_1008_9698
    1018:d8ee  50  37  08  10       addr         pass1_1008_3750
    1018:d8f2  54  37  08  10       addr         pass1_1008_3754
    1018:d8f6  60  9c  08  10       addr         pass1_1008_9c60
    1018:d8fa  58  37  08  10       addr         pass1_1008_3758
    1018:d8fe  24  63  08  10       addr         FUN_1008_6324
    1018:d902  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d906  62  37  08  10       addr         pass1_1008_3762
    1018:d90a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d90e  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d912  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d916  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d91a  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d91e  02  6b  08  10       addr         pass1_1008_6b02
    1018:d922  7a  37  08  10       addr         pass1_1008_377a
    1018:d926  52  9c  08  10       addr         pass1_1008_9c52
    1018:d92a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d92e  16  9c  08  10       addr         pass1_1008_9c16
    1018:d932  30  9c  08  10       addr         pass1_1008_9c30
    1018:d936  86  9c  08  10       addr         pass1_1008_9c86
    1018:d93a  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d93e  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d942  ae  02  20  10       addr         pass1_1020_02ae
    1018:d946  28  63  08  10       addr         FUN_1008_6328
    1018:d94a  2c  63  08  10       addr         FUN_1008_632c
    1018:d94e  60  d3  18  10       addr         pass1_1018_d360
    1018:d952  ea  68  08  10       addr         pass1_1008_68ea
    1018:d956  16  03  20  10       addr         win_1020_0316
    1018:d95a  8c  02  20  10       addr         pass1_1020_028c
    1018:d95e  40  96  08  10       addr         send_msg_1008_9640
    1018:d962  64  96  08  10       addr         set_win_text_1008_9664
    1018:d966  2c  37  08  10       addr         pass1_1008_372c
    1018:d96a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:d96e  3c  37  08  10       addr         pass1_1008_373c
    1018:d972  40  37  08  10       addr         pass1_1008_3740
    1018:d976  44  37  08  10       addr         pass1_1008_3744
    1018:d97a  48  37  08  10       addr         pass1_1008_3748
    1018:d97e  4c  37  08  10       addr         pass1_1008_374c
    1018:d982  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:d986  98  96  08  10       addr         destroy_win_1008_9698
    1018:d98a  50  37  08  10       addr         pass1_1008_3750
    1018:d98e  54  37  08  10       addr         pass1_1008_3754
    1018:d992  60  9c  08  10       addr         pass1_1008_9c60
    1018:d996  58  37  08  10       addr         pass1_1008_3758
    1018:d99a  24  63  08  10       addr         FUN_1008_6324
    1018:d99e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:d9a2  62  37  08  10       addr         pass1_1008_3762
    1018:d9a6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:d9aa  b2  03  20  10       addr         post_msg_1020_03b2
    1018:d9ae  d6  03  20  10       addr         post_msg_1020_03d6
    1018:d9b2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:d9b6  fa  03  20  10       addr         post_msg_1020_03fa
    1018:d9ba  02  6b  08  10       addr         pass1_1008_6b02
    1018:d9be  7a  37  08  10       addr         pass1_1008_377a
    1018:d9c2  52  9c  08  10       addr         pass1_1008_9c52
    1018:d9c6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:d9ca  16  9c  08  10       addr         pass1_1008_9c16
    1018:d9ce  30  9c  08  10       addr         pass1_1008_9c30
    1018:d9d2  86  9c  08  10       addr         pass1_1008_9c86
    1018:d9d6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:d9da  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:d9de  ae  02  20  10       addr         pass1_1020_02ae
    1018:d9e2  28  63  08  10       addr         FUN_1008_6328
    1018:d9e6  2c  63  08  10       addr         FUN_1008_632c
    1018:d9ea  a2  d2  18  10       addr         pass1_1018_d2a2
    1018:d9ee  ea  68  08  10       addr         pass1_1008_68ea
    1018:d9f2  16  03  20  10       addr         win_1020_0316
    1018:d9f6  8c  02  20  10       addr         pass1_1020_028c
    1018:d9fa  40  96  08  10       addr         send_msg_1008_9640
    1018:d9fe  64  96  08  10       addr         set_win_text_1008_9664
    1018:da02  2c  37  08  10       addr         pass1_1008_372c
    1018:da06  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:da0a  3c  37  08  10       addr         pass1_1008_373c
    1018:da0e  40  37  08  10       addr         pass1_1008_3740
    1018:da12  44  37  08  10       addr         pass1_1008_3744
    1018:da16  48  37  08  10       addr         pass1_1008_3748
    1018:da1a  4c  37  08  10       addr         pass1_1008_374c
    1018:da1e  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:da22  98  96  08  10       addr         destroy_win_1008_9698
    1018:da26  50  37  08  10       addr         pass1_1008_3750
    1018:da2a  54  37  08  10       addr         pass1_1008_3754
    1018:da2e  60  9c  08  10       addr         pass1_1008_9c60
    1018:da32  58  37  08  10       addr         pass1_1008_3758
    1018:da36  24  63  08  10       addr         FUN_1008_6324
    1018:da3a  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:da3e  62  37  08  10       addr         pass1_1008_3762
    1018:da42  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:da46  b2  03  20  10       addr         post_msg_1020_03b2
    1018:da4a  d6  03  20  10       addr         post_msg_1020_03d6
    1018:da4e  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:da52  fa  03  20  10       addr         post_msg_1020_03fa
    1018:da56  02  6b  08  10       addr         pass1_1008_6b02
    1018:da5a  7a  37  08  10       addr         pass1_1008_377a
    1018:da5e  52  9c  08  10       addr         pass1_1008_9c52
    1018:da62  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:da66  16  9c  08  10       addr         pass1_1008_9c16
    1018:da6a  30  9c  08  10       addr         pass1_1008_9c30
    1018:da6e  86  9c  08  10       addr         pass1_1008_9c86
    1018:da72  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:da76  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:da7a  ae  02  20  10       addr         pass1_1020_02ae
    1018:da7e  28  63  08  10       addr         FUN_1008_6328
    1018:da82  2c  63  08  10       addr         FUN_1008_632c
    1018:da86  e4  d1  18  10       addr         pass1_1018_d1e4
    1018:da8a  ea  68  08  10       addr         pass1_1008_68ea
    1018:da8e  16  03  20  10       addr         win_1020_0316
    1018:da92  8c  02  20  10       addr         pass1_1020_028c
    1018:da96  40  96  08  10       addr         send_msg_1008_9640
    1018:da9a  64  96  08  10       addr         set_win_text_1008_9664
    1018:da9e  2c  37  08  10       addr         pass1_1008_372c
    1018:daa2  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:daa6  3c  37  08  10       addr         pass1_1008_373c
    1018:daaa  40  37  08  10       addr         pass1_1008_3740
    1018:daae  44  37  08  10       addr         pass1_1008_3744
    1018:dab2  48  37  08  10       addr         pass1_1008_3748
    1018:dab6  4c  37  08  10       addr         pass1_1008_374c
    1018:daba  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:dabe  98  96  08  10       addr         destroy_win_1008_9698
    1018:dac2  50  37  08  10       addr         pass1_1008_3750
    1018:dac6  54  37  08  10       addr         pass1_1008_3754
    1018:daca  60  9c  08  10       addr         pass1_1008_9c60
    1018:dace  58  37  08  10       addr         pass1_1008_3758
    1018:dad2  24  63  08  10       addr         FUN_1008_6324
    1018:dad6  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:dada  62  37  08  10       addr         pass1_1008_3762
    1018:dade  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:dae2  b2  03  20  10       addr         post_msg_1020_03b2
    1018:dae6  d6  03  20  10       addr         post_msg_1020_03d6
    1018:daea  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:daee  fa  03  20  10       addr         post_msg_1020_03fa
    1018:daf2  02  6b  08  10       addr         pass1_1008_6b02
    1018:daf6  7a  37  08  10       addr         pass1_1008_377a
    1018:dafa  52  9c  08  10       addr         pass1_1008_9c52
    1018:dafe  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:db02  16  9c  08  10       addr         pass1_1008_9c16
    1018:db06  30  9c  08  10       addr         pass1_1008_9c30
    1018:db0a  86  9c  08  10       addr         pass1_1008_9c86
    1018:db0e  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:db12  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:db16  ae  02  20  10       addr         pass1_1020_02ae
    1018:db1a  28  63  08  10       addr         FUN_1008_6328
    1018:db1e  2c  63  08  10       addr         FUN_1008_632c
    1018:db22  14  d3  18  10       addr         pass1_1018_d314
    1018:db26  ea  68  08  10       addr         pass1_1008_68ea
    1018:db2a  16  03  20  10       addr         win_1020_0316
    1018:db2e  8c  02  20  10       addr         pass1_1020_028c
    1018:db32  40  96  08  10       addr         send_msg_1008_9640
    1018:db36  64  96  08  10       addr         set_win_text_1008_9664
    1018:db3a  2c  37  08  10       addr         pass1_1008_372c
    1018:db3e  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:db42  3c  37  08  10       addr         pass1_1008_373c
    1018:db46  40  37  08  10       addr         pass1_1008_3740
    1018:db4a  44  37  08  10       addr         pass1_1008_3744
    1018:db4e  48  37  08  10       addr         pass1_1008_3748
    1018:db52  4c  37  08  10       addr         pass1_1008_374c
    1018:db56  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:db5a  98  96  08  10       addr         destroy_win_1008_9698
    1018:db5e  50  37  08  10       addr         pass1_1008_3750
    1018:db62  54  37  08  10       addr         pass1_1008_3754
    1018:db66  60  9c  08  10       addr         pass1_1008_9c60
    1018:db6a  58  37  08  10       addr         pass1_1008_3758
    1018:db6e  24  63  08  10       addr         FUN_1008_6324
    1018:db72  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:db76  62  37  08  10       addr         pass1_1008_3762
    1018:db7a  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:db7e  b2  03  20  10       addr         post_msg_1020_03b2
    1018:db82  d6  03  20  10       addr         post_msg_1020_03d6
    1018:db86  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:db8a  fa  03  20  10       addr         post_msg_1020_03fa
    1018:db8e  02  6b  08  10       addr         pass1_1008_6b02
    1018:db92  7a  37  08  10       addr         pass1_1008_377a
    1018:db96  52  9c  08  10       addr         pass1_1008_9c52
    1018:db9a  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:db9e  16  9c  08  10       addr         pass1_1008_9c16
    1018:dba2  30  9c  08  10       addr         pass1_1008_9c30
    1018:dba6  86  9c  08  10       addr         pass1_1008_9c86
    1018:dbaa  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:dbae  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:dbb2  ae  02  20  10       addr         pass1_1020_02ae
    1018:dbb6  28  63  08  10       addr         FUN_1008_6328
    1018:dbba  2c  63  08  10       addr         FUN_1008_632c
    1018:dbbe  56  d2  18  10       addr         pass1_1018_d256
    1018:dbc2  ea  68  08  10       addr         pass1_1008_68ea
    1018:dbc6  16  03  20  10       addr         win_1020_0316
    1018:dbca  8c  02  20  10       addr         pass1_1020_028c
    1018:dbce  40  96  08  10       addr         send_msg_1008_9640
    1018:dbd2  64  96  08  10       addr         set_win_text_1008_9664
    1018:dbd6  2c  37  08  10       addr         pass1_1008_372c
    1018:dbda  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:dbde  3c  37  08  10       addr         pass1_1008_373c
    1018:dbe2  40  37  08  10       addr         pass1_1008_3740
    1018:dbe6  44  37  08  10       addr         pass1_1008_3744
    1018:dbea  48  37  08  10       addr         pass1_1008_3748
    1018:dbee  4c  37  08  10       addr         pass1_1008_374c
    1018:dbf2  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:dbf6  98  96  08  10       addr         destroy_win_1008_9698
    1018:dbfa  50  37  08  10       addr         pass1_1008_3750
    1018:dbfe  54  37  08  10       addr         pass1_1008_3754
    1018:dc02  60  9c  08  10       addr         pass1_1008_9c60
    1018:dc06  58  37  08  10       addr         pass1_1008_3758
    1018:dc0a  24  63  08  10       addr         FUN_1008_6324
    1018:dc0e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:dc12  62  37  08  10       addr         pass1_1008_3762
    1018:dc16  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:dc1a  b2  03  20  10       addr         post_msg_1020_03b2
    1018:dc1e  d6  03  20  10       addr         post_msg_1020_03d6
    1018:dc22  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:dc26  fa  03  20  10       addr         post_msg_1020_03fa
    1018:dc2a  02  6b  08  10       addr         pass1_1008_6b02
    1018:dc2e  7a  37  08  10       addr         pass1_1008_377a
    1018:dc32  52  9c  08  10       addr         pass1_1008_9c52
    1018:dc36  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:dc3a  16  9c  08  10       addr         pass1_1008_9c16
    1018:dc3e  30  9c  08  10       addr         pass1_1008_9c30
    1018:dc42  86  9c  08  10       addr         pass1_1008_9c86
    1018:dc46  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:dc4a  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:dc4e  ae  02  20  10       addr         pass1_1020_02ae
    1018:dc52  28  63  08  10       addr         FUN_1008_6328
    1018:dc56  2c  63  08  10       addr         FUN_1008_632c
    1018:dc5a  98  d1  18  10       addr         pass1_1018_d198
    1018:dc5e  ea  68  08  10       addr         pass1_1008_68ea
    1018:dc62  16  03  20  10       addr         win_1020_0316
    1018:dc66  8c  02  20  10       addr         pass1_1020_028c
    1018:dc6a  40  96  08  10       addr         send_msg_1008_9640
    1018:dc6e  64  96  08  10       addr         set_win_text_1008_9664
    1018:dc72  2c  37  08  10       addr         pass1_1008_372c
    1018:dc76  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:dc7a  3c  37  08  10       addr         pass1_1008_373c
    1018:dc7e  40  37  08  10       addr         pass1_1008_3740
    1018:dc82  44  37  08  10       addr         pass1_1008_3744
    1018:dc86  48  37  08  10       addr         pass1_1008_3748
    1018:dc8a  4c  37  08  10       addr         pass1_1008_374c
    1018:dc8e  78  c5  18  10       addr         unk_draw_op_1018_c578
    1018:dc92  98  96  08  10       addr         destroy_win_1008_9698
    1018:dc96  50  37  08  10       addr         pass1_1008_3750
    1018:dc9a  54  37  08  10       addr         pass1_1008_3754
    1018:dc9e  60  9c  08  10       addr         pass1_1008_9c60
    1018:dca2  58  37  08  10       addr         pass1_1008_3758
    1018:dca6  24  63  08  10       addr         FUN_1008_6324
    1018:dcaa  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:dcae  62  37  08  10       addr         pass1_1008_3762
    1018:dcb2  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:dcb6  b2  03  20  10       addr         post_msg_1020_03b2
    1018:dcba  d6  03  20  10       addr         post_msg_1020_03d6
    1018:dcbe  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:dcc2  fa  03  20  10       addr         post_msg_1020_03fa
    1018:dcc6  02  6b  08  10       addr         pass1_1008_6b02
    1018:dcca  7a  37  08  10       addr         pass1_1008_377a
    1018:dcce  52  9c  08  10       addr         pass1_1008_9c52
    1018:dcd2  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:dcd6  16  9c  08  10       addr         pass1_1008_9c16
    1018:dcda  30  9c  08  10       addr         pass1_1008_9c30
    1018:dcde  86  9c  08  10       addr         pass1_1008_9c86
    1018:dce2  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:dce6  e0  9c  08  10       addr         pass1_1008_9ce0
    1018:dcea  ae  02  20  10       addr         pass1_1020_02ae
    1018:dcee  28  63  08  10       addr         FUN_1008_6328
    1018:dcf2  2c  63  08  10       addr         FUN_1008_632c

- 1018:df3c

    1018:df3c  10  df  18  10       addr         pass1_1018_df10

- 1018:e228 -> pass1_1018_e1ee

    1018:e228  ee  e1  18  10       addr         pass1_1018_e1ee
    1018:e22c  10  3a  08  10       addr         pass1_1008_3a10

- 1018:e44e -> pass1_1018_e428
- 1018:e4ea -> pass1_1018_e41a

    1018:e44e  28  e4  18  10       addr         FUN_1018_e428
    1018:e452  ea  68  08  10       addr         pass1_1008_68ea
    1018:e456  84  e3  18  10       addr         window_op_1018_e384
    1018:e45a  c6  68  08  10       addr         pass1_1008_68c6
    1018:e45e  40  96  08  10       addr         send_msg_1008_9640
    1018:e462  64  96  08  10       addr         set_win_text_1008_9664
    1018:e466  2c  37  08  10       addr         pass1_1008_372c
    1018:e46a  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:e46e  3c  37  08  10       addr         pass1_1008_373c
    1018:e472  40  37  08  10       addr         pass1_1008_3740
    1018:e476  44  37  08  10       addr         pass1_1008_3744
    1018:e47a  48  37  08  10       addr         pass1_1008_3748
    1018:e47e  4c  37  08  10       addr         pass1_1008_374c
    1018:e482  cc  e2  18  10       addr         pass1_1018_e2cc
    1018:e486  98  96  08  10       addr         destroy_win_1008_9698
    1018:e48a  50  82  20  10       addr         destroy_window_1020_8250
    1018:e48e  54  37  08  10       addr         pass1_1008_3754
    1018:e492  60  9c  08  10       addr         pass1_1008_9c60
    1018:e496  58  37  08  10       addr         pass1_1008_3758
    1018:e49a  24  63  08  10       addr         FUN_1008_6324
    1018:e49e  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:e4a2  62  37  08  10       addr         pass1_1008_3762
    1018:e4a6  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:e4aa  66  37  08  10       addr         pass1_1008_3766
    1018:e4ae  06  81  20  10       addr         pass1_1020_8106
    1018:e4b2  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:e4b6  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:e4ba  02  6b  08  10       addr         pass1_1008_6b02
    1018:e4be  7a  37  08  10       addr         pass1_1008_377a
    1018:e4c2  52  9c  08  10       addr         pass1_1008_9c52
    1018:e4c6  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:e4ca  16  9c  08  10       addr         pass1_1008_9c16
    1018:e4ce  30  9c  08  10       addr         pass1_1008_9c30
    1018:e4d2  86  9c  08  10       addr         pass1_1008_9c86
    1018:e4d6  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:e4da  c0  81  20  10       addr         win_ui_palette_op_1020_81c0
    1018:e4de  e8  e3  18  10       addr         pass1_1018_e3e8
    1018:e4e2  28  63  08  10       addr         FUN_1008_6328
    1018:e4e6  28  81  20  10       addr         realize_palette_1020_8128
    1018:e4ea  1a  e4  18  10       addr         pass1_1018_e41a
    1018:e4ee  10  3a  08  10       addr         pass1_1008_3a10

- 1018:e5d0

    1018:e5d0  aa  e5  18  10       addr         pass1_1018_e5aa
    1018:e5d4  10  3a  08  10       addr         pass1_1008_3a10
    1018:e5d8  12  93  20  10       addr         mix_draw_op_1020_9312

- 1018:e790
- 1018:e82c -> pass1_1018_e75c

    1018:e790  6a  e7  18  10       addr         FUN_1018_e76a
    1018:e794  ea  68  08  10       addr         pass1_1008_68ea
    1018:e798  c6  e6  18  10       addr         window_op_1018_e6c6
    1018:e79c  c6  68  08  10       addr         pass1_1008_68c6
    1018:e7a0  40  96  08  10       addr         send_msg_1008_9640
    1018:e7a4  64  96  08  10       addr         set_win_text_1008_9664
    1018:e7a8  2c  37  08  10       addr         pass1_1008_372c
    1018:e7ac  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:e7b0  3c  37  08  10       addr         pass1_1008_373c
    1018:e7b4  40  37  08  10       addr         pass1_1008_3740
    1018:e7b8  44  37  08  10       addr         pass1_1008_3744
    1018:e7bc  48  37  08  10       addr         pass1_1008_3748
    1018:e7c0  4c  37  08  10       addr         pass1_1008_374c
    1018:e7c4  78  e6  18  10       addr         pass1_1018_e678
    1018:e7c8  98  96  08  10       addr         destroy_win_1008_9698
    1018:e7cc  50  82  20  10       addr         destroy_window_1020_8250
    1018:e7d0  54  37  08  10       addr         pass1_1008_3754
    1018:e7d4  60  9c  08  10       addr         pass1_1008_9c60
    1018:e7d8  58  37  08  10       addr         pass1_1008_3758
    1018:e7dc  24  63  08  10       addr         FUN_1008_6324
    1018:e7e0  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:e7e4  62  37  08  10       addr         pass1_1008_3762
    1018:e7e8  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:e7ec  66  37  08  10       addr         pass1_1008_3766
    1018:e7f0  06  81  20  10       addr         pass1_1020_8106
    1018:e7f4  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:e7f8  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:e7fc  02  6b  08  10       addr         pass1_1008_6b02
    1018:e800  7a  37  08  10       addr         pass1_1008_377a
    1018:e804  52  9c  08  10       addr         pass1_1008_9c52
    1018:e808  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:e80c  16  9c  08  10       addr         pass1_1008_9c16
    1018:e810  30  9c  08  10       addr         pass1_1008_9c30
    1018:e814  86  9c  08  10       addr         pass1_1008_9c86
    1018:e818  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:e81c  c0  81  20  10       addr         win_ui_palette_op_1020_81c0
    1018:e820  2a  e7  18  10       addr         pass1_1018_e72a
    1018:e824  28  63  08  10       addr         FUN_1008_6328
    1018:e828  28  81  20  10       addr         realize_palette_1020_8128
    1018:e82c  5c  e7  18  10       addr         pass1_1018_e75c
    1018:e830  10  3a  08  10       addr         pass1_1008_3a10

- 1018:e912 -> pass1_1018_e8ec

    1018:e912  ec  e8  18  10       addr         pass1_1018_e8ec
    1018:e916  10  3a  08  10       addr         pass1_1008_3a10
    1018:e91a  12  93  20  10       addr         mix_draw_op_1020_9312

- 1018:ebd0
- 1018:ec6c -> pass1_1018_eb9c

    1018:ebd0  aa  eb  18  10       addr         FUN_1018_ebaa
    1018:ebd4  ea  68  08  10       addr         pass1_1008_68ea
    1018:ebd8  da  ea  18  10       addr         window_op_1018_eada
    1018:ebdc  c6  68  08  10       addr         pass1_1008_68c6
    1018:ebe0  40  96  08  10       addr         send_msg_1008_9640
    1018:ebe4  64  96  08  10       addr         set_win_text_1008_9664
    1018:ebe8  2c  37  08  10       addr         pass1_1008_372c
    1018:ebec  f2  97  08  10       addr         unk_win_op_1008_97f2
    1018:ebf0  3c  37  08  10       addr         pass1_1008_373c
    1018:ebf4  40  37  08  10       addr         pass1_1008_3740
    1018:ebf8  44  37  08  10       addr         pass1_1008_3744
    1018:ebfc  48  37  08  10       addr         pass1_1008_3748
    1018:ec00  4c  37  08  10       addr         pass1_1008_374c
    1018:ec04  66  ea  18  10       addr         pass1_1018_ea66
    1018:ec08  98  96  08  10       addr         destroy_win_1008_9698
    1018:ec0c  50  82  20  10       addr         destroy_window_1020_8250
    1018:ec10  0a  ea  18  10       addr         post_win_msg_1018_ea0a
    1018:ec14  60  9c  08  10       addr         pass1_1008_9c60
    1018:ec18  58  37  08  10       addr         pass1_1008_3758
    1018:ec1c  24  63  08  10       addr         FUN_1008_6324
    1018:ec20  4e  9c  08  10       addr         pass1_1008_9c4e
    1018:ec24  62  37  08  10       addr         pass1_1008_3762
    1018:ec28  4a  9c  08  10       addr         pass1_1008_9c4a
    1018:ec2c  66  37  08  10       addr         pass1_1008_3766
    1018:ec30  06  81  20  10       addr         pass1_1020_8106
    1018:ec34  4a  6a  08  10       addr         pass1_1008_6a4a
    1018:ec38  2e  6b  08  10       addr         pass1_1008_6b2e
    1018:ec3c  02  6b  08  10       addr         pass1_1008_6b02
    1018:ec40  7a  37  08  10       addr         pass1_1008_377a
    1018:ec44  52  9c  08  10       addr         pass1_1008_9c52
    1018:ec48  56  9c  08  10       addr         get_stock_obj_1008_9c56
    1018:ec4c  16  9c  08  10       addr         pass1_1008_9c16
    1018:ec50  30  9c  08  10       addr         pass1_1008_9c30
    1018:ec54  86  9c  08  10       addr         pass1_1008_9c86
    1018:ec58  c4  9c  08  10       addr         pass1_1008_9cc4
    1018:ec5c  c0  81  20  10       addr         win_ui_palette_op_1020_81c0
    1018:ec60  3e  eb  18  10       addr         pass1_1018_eb3e
    1018:ec64  28  63  08  10       addr         FUN_1008_6328
    1018:ec68  28  81  20  10       addr         realize_palette_1020_8128
    1018:ec6c  9c  eb  18  10       addr         pass1_1018_eb9c
    1018:ec70  2c  ea  18  10       addr         FUN_1018_ea2c

- 1018:ec6c -> pass1_1018_eb9c

### 1020

- 1020:01cc

    1020:01cc a6 01 20 10       addr         pass1_1020_01a6
    1020:01d0 d8 ed 18 10       addr         invalidate_rect_1018_edd8
    1020:01d4 00 00 20 10       addr         unk_draw_op_1020_0000

- 1020:045a

    1020:045a 34 04 20 10       addr         pass1_1020_0434
    1020:045e ea 68 08 10       addr         pass1_1008_68ea
    1020:0462 16 03 20 10       addr         win_1020_0316
    1020:0466 8c 02 20 10       addr         pass1_1020_028c
    1020:046a 40 96 08 10       addr         send_msg_1008_9640
    1020:046e 64 96 08 10       addr         set_win_text_1008_9664
    1020:0472 2c 37 08 10       addr         pass1_1008_372c
    1020:0476 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:047a 3c 37 08 10       addr         pass1_1008_373c
    1020:047e 40 37 08 10       addr         pass1_1008_3740
    1020:0482 44 37 08 10       addr         pass1_1008_3744
    1020:0486 48 37 08 10       addr         pass1_1008_3748
    1020:048a 4c 37 08 10       addr         pass1_1008_374c
    1020:048e 1e 04 20 10       addr         draw_op_1020_041e
    1020:0492 98 96 08 10       addr         destroy_win_1008_9698
    1020:0496 50 37 08 10       addr         pass1_1008_3750
    1020:049a 54 37 08 10       addr         pass1_1008_3754
    1020:049e 60 9c 08 10       addr         pass1_1008_9c60
    1020:04a2 58 37 08 10       addr         pass1_1008_3758
    1020:04a6 24 63 08 10       addr         FUN_1008_6324
    1020:04aa 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:04ae 62 37 08 10       addr         pass1_1008_3762
    1020:04b2 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:04b6 b2 03 20 10       addr         post_msg_1020_03b2
    1020:04ba d6 03 20 10       addr         post_msg_1020_03d6
    1020:04be 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:04c2 fa 03 20 10       addr         post_msg_1020_03fa
    1020:04c6 02 6b 08 10       addr         pass1_1008_6b02
    1020:04ca 7a 37 08 10       addr         pass1_1008_377a
    1020:04ce 52 9c 08 10       addr         pass1_1008_9c52
    1020:04d2 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:04d6 16 9c 08 10       addr         pass1_1008_9c16
    1020:04da 30 9c 08 10       addr         pass1_1008_9c30
    1020:04de 86 9c 08 10       addr         pass1_1008_9c86
    1020:04e2 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:04e6 e0 9c 08 10       addr         pass1_1008_9ce0
    1020:04ea ae 02 20 10       addr         pass1_1020_02ae
    1020:04ee 28 63 08 10       addr         FUN_1008_6328
    1020:04f2 2c 63 08 10       addr         FUN_1008_632c

- 1020:075a

    1020:075a 34 07 20 10       addr         pass1_1020_0734
    1020:075e 1c 06 20 10       addr         post_win_msg_1020_061c

- 1020:081a

    1020:081a f4 07 20 10       addr         pass1_1020_07f4
    1020:081e ea 68 08 10       addr         pass1_1008_68ea
    1020:0822 16 03 20 10       addr         win_1020_0316
    1020:0826 8c 02 20 10       addr         pass1_1020_028c
    1020:082a 40 96 08 10       addr         send_msg_1008_9640
    1020:082e 64 96 08 10       addr         set_win_text_1008_9664
    1020:0832 2c 37 08 10       addr         pass1_1008_372c
    1020:0836 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:083a 3c 37 08 10       addr         pass1_1008_373c
    1020:083e 40 37 08 10       addr         pass1_1008_3740
    1020:0842 44 37 08 10       addr         pass1_1008_3744
    1020:0846 48 37 08 10       addr         pass1_1008_3748
    1020:084a 4c 37 08 10       addr         pass1_1008_374c
    1020:084e aa 07 20 10       addr         pass1_1020_07aa
    1020:0852 98 96 08 10       addr         destroy_win_1008_9698
    1020:0856 50 37 08 10       addr         pass1_1008_3750
    1020:085a 54 37 08 10       addr         pass1_1008_3754
    1020:085e 60 9c 08 10       addr         pass1_1008_9c60
    1020:0862 58 37 08 10       addr         pass1_1008_3758
    1020:0866 24 63 08 10       addr         FUN_1008_6324
    1020:086a 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:086e 62 37 08 10       addr         pass1_1008_3762
    1020:0872 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:0876 b2 03 20 10       addr         post_msg_1020_03b2
    1020:087a d6 03 20 10       addr         post_msg_1020_03d6
    1020:087e 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:0882 fa 03 20 10       addr         post_msg_1020_03fa
    1020:0886 02 6b 08 10       addr         pass1_1008_6b02
    1020:088a 7a 37 08 10       addr         pass1_1008_377a
    1020:088e 52 9c 08 10       addr         pass1_1008_9c52
    1020:0892 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:0896 16 9c 08 10       addr         pass1_1008_9c16
    1020:089a 30 9c 08 10       addr         pass1_1008_9c30
    1020:089e 86 9c 08 10       addr         pass1_1008_9c86
    1020:08a2 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:08a6 e0 9c 08 10       addr         pass1_1008_9ce0
    1020:08aa ae 02 20 10       addr         pass1_1020_02ae
    1020:08ae 28 63 08 10       addr         FUN_1008_6328
    1020:08b2 2c 63 08 10       addr         FUN_1008_632c

- 1020:0b0e

    1020:0b0e e8 0a 20 10       addr         pass1_1020_0ae8
    1020:0b12 ea 68 08 10       addr         pass1_1008_68ea
    1020:0b16 ba 09 20 10       addr         win_1020_09ba
    1020:0b1a c6 68 08 10       addr         pass1_1008_68c6
    1020:0b1e 40 96 08 10       addr         send_msg_1008_9640
    1020:0b22 64 96 08 10       addr         set_win_text_1008_9664
    1020:0b26 2c 37 08 10       addr         pass1_1008_372c
    1020:0b2a f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:0b2e 3c 37 08 10       addr         pass1_1008_373c
    1020:0b32 40 37 08 10       addr         pass1_1008_3740
    1020:0b36 44 37 08 10       addr         pass1_1008_3744
    1020:0b3a 48 37 08 10       addr         pass1_1008_3748
    1020:0b3e 4c 37 08 10       addr         pass1_1008_374c
    1020:0b42 52 0a 20 10       addr         pass1_1020_0a52
    1020:0b46 98 96 08 10       addr         destroy_win_1008_9698
    1020:0b4a 50 37 08 10       addr         pass1_1008_3750
    1020:0b4e bc 0a 20 10       addr         pass1_1020_0abc
    1020:0b52 60 9c 08 10       addr         pass1_1008_9c60
    1020:0b56 58 37 08 10       addr         pass1_1008_3758
    1020:0b5a 24 63 08 10       addr         FUN_1008_6324
    1020:0b5e 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:0b62 62 37 08 10       addr         pass1_1008_3762
    1020:0b66 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:0b6a 66 37 08 10       addr         pass1_1008_3766
    1020:0b6e 6a 37 08 10       addr         FUN_1008_376a
    1020:0b72 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:0b76 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:0b7a 02 6b 08 10       addr         pass1_1008_6b02
    1020:0b7e 7a 37 08 10       addr         pass1_1008_377a
    1020:0b82 52 9c 08 10       addr         pass1_1008_9c52
    1020:0b86 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:0b8a 16 9c 08 10       addr         pass1_1008_9c16
    1020:0b8e 30 9c 08 10       addr         pass1_1008_9c30
    1020:0b92 86 9c 08 10       addr         pass1_1008_9c86
    1020:0b96 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:0b9a a6 0a 20 10       addr         pass1_1020_0aa6
    1020:0b9e 0c 0a 20 10       addr         pass1_1020_0a0c
    1020:0ba2 28 63 08 10       addr         FUN_1008_6328
    1020:0ba6 2c 63 08 10       addr         FUN_1008_632c

- 1020:0dbc

    1020:0dbc 82 0d 20 10       addr         pass1_1020_0d82
    1020:0dc0 10 3a 08 10       addr         pass1_1008_3a10

- 1020:1384

    1020:1384 5e 13 20 10       void *       pass1_1020_135e
    1020:1388 ea 68 08 10       void *       pass1_1008_68ea
    1020:138c a0 10 20 10       void *       window_op_1020_10a0
    1020:1390 c6 68 08 10       void *       pass1_1008_68c6
    1020:1394 40 96 08 10       void *       send_msg_1008_9640
    1020:1398 b4 79 20 10       void *       string_1020_79b4
    1020:139c 2c 37 08 10       void *       pass1_1008_372c
    1020:13a0 f2 97 08 10       void *       unk_win_op_1008_97f2
    1020:13a4 3c 37 08 10       void *       pass1_1008_373c
    1020:13a8 40 37 08 10       void *       pass1_1008_3740
    1020:13ac 44 37 08 10       void *       pass1_1008_3744
    1020:13b0 48 37 08 10       void *       pass1_1008_3748
    1020:13b4 4c 37 08 10       void *       pass1_1008_374c
    1020:13b8 22 10 20 10       void *       pass1_1020_1022
    1020:13bc 98 96 08 10       void *       destroy_win_1008_9698
    1020:13c0 2c 0e 20 10       void *       pass1_1020_0e2c
    1020:13c4 c4 0e 20 10       void *       win_help_op_1020_0ec4
    1020:13c8 60 9c 08 10       void *       pass1_1008_9c60
    1020:13cc ae 79 20 10       void *       pass1_1020_79ae
    1020:13d0 00 10 20 10       void *       enable_menu_1020_1000
    1020:13d4 4e 9c 08 10       void *       pass1_1008_9c4e
    1020:13d8 62 37 08 10       void *       pass1_1008_3762
    1020:13dc 4a 9c 08 10       void *       pass1_1008_9c4a
    1020:13e0 8e 0e 20 10       void *       pass1_1020_0e8e
    1020:13e4 d2 7a 20 10       void *       win_ui_menu_op_1020_7ad2
    1020:13e8 4a 6a 08 10       void *       pass1_1008_6a4a
    1020:13ec 2e 6b 08 10       void *       pass1_1008_6b2e
    1020:13f0 02 6b 08 10       void *       pass1_1008_6b02
    1020:13f4 7a 37 08 10       void *       pass1_1008_377a
    1020:13f8 52 9c 08 10       void *       pass1_1008_9c52
    1020:13fc 56 9c 08 10       void *       get_stock_obj_1008_9c56
    1020:1400 e4 79 20 10       void *       pass1_1020_79e4
    1020:1404 fc 79 20 10       void *       post_win_msg_1020_79fc
    1020:1408 86 9c 08 10       void *       pass1_1008_9c86
    1020:140c c4 9c 08 10       void *       pass1_1008_9cc4
    1020:1410 e0 9c 08 10       void *       pass1_1008_9ce0
    1020:1414 46 0e 20 10       void *       realize_palette_1020_0e46

- 1020:1730

    1020:1730 0a 17 20 10       void *       pass1_1020_170a
    1020:1734 7c 15 20 10       void *       invalidate_rect_1020_157c

- 1020:1e7a

    1020:1e7a 54 1e 20 10       addr         pass1_1020_1e54
    1020:1e7e 10 3a 08 10       addr         pass1_1008_3a10
    1020:1e82 9c 17 20 10       addr         mixed_ui_op_1020_179c
    1020:1e86 c0 79 40 10       addr         pass1_1040_79c0
    1020:1e8a 3c 7b 40 10       addr         post_win_msg_1040_7b3c
    1020:1e8e 4a 1d 20 10       addr         destroy_window_1020_1d4a
    1020:1e92 56 7f 40 10       addr         post_win_msg_1040_7f56
    1020:1e96 b2 7b 40 10       addr         draw_op_1040_7bb2
    1020:1e9a 1c 7f 40 10       addr         post_win_msg_1040_7f1c
    1020:1e9e 80 17 20 10       addr         pass1_1020_1780
    1020:1ea2 86 7f 40 10       addr         menu_ui_op_1040_7f86
    1020:1ea6 0c 80 40 10       addr         win_help_1040_800c
    1020:1eaa 54 80 40 10       addr         pass1_1040_8054
    1020:1eae 5e 7e 40 10       addr         set_text_bk_color_1040_7e5e
    1020:1eb2 58 81 40 10       addr         unk_win_ui_op_1040_8158
    1020:1eb6 b6 81 40 10       addr         check_dialog_msg_1040_81b6
    1020:1eba fe 81 40 10       addr         set_sys_modal_window_1040_81fe
    1020:1ebe d4 1b 20 10       addr         enable_window_1020_1bd4
    1020:1ec2 4a 82 40 10       addr         pass1_1040_824a
    1020:1ec6 66 82 40 10       addr         FUN_1040_8266
    1020:1eca de 78 40 10       addr         pass1_1040_78de
    1020:1ece ee 60 18 10       addr         FUN_1018_60ee
    1020:1ed2 f4 60 18 10       addr         FUN_1018_60f4
    1020:1ed6 fa 60 18 10       addr         FUN_1018_60fa
    1020:1eda b6 1b 20 10       addr         pass1_1020_1bb6
    1020:1ede fe 60 18 10       addr         FUN_1018_60fe
    1020:1ee2 7e 80 40 10       addr         pass1_1040_807e
    1020:1ee6 68 1b 20 10       addr         pass1_1020_1b68

- 1020:2518

    1020:2518 f2 24 20 10       addr         pass1_1020_24f2
    1020:251c b2 1f 20 10       addr         invalidate_rect_1020_1fb2
    1020:2520 20 20 20 10       addr         unk_draw_op_1020_2020

- 1020:270c -> FUN_1020_26e6
- 1020:27a8

    1020:270c e6 26 20 10       addr         FUN_1020_26e6
    1020:2710 ea 68 08 10       addr         pass1_1008_68ea
    1020:2714 42 26 20 10       addr         window_op_1020_2642
    1020:2718 c6 68 08 10       addr         pass1_1008_68c6
    1020:271c 40 96 08 10       addr         send_msg_1008_9640
    1020:2720 64 96 08 10       addr         set_win_text_1008_9664
    1020:2724 2c 37 08 10       addr         pass1_1008_372c
    1020:2728 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:272c 3c 37 08 10       addr         pass1_1008_373c
    1020:2730 40 37 08 10       addr         pass1_1008_3740
    1020:2734 44 37 08 10       addr         pass1_1008_3744
    1020:2738 48 37 08 10       addr         pass1_1008_3748
    1020:273c 4c 37 08 10       addr         pass1_1008_374c
    1020:2740 c0 25 20 10       addr         pass1_1020_25c0
    1020:2744 98 96 08 10       addr         destroy_win_1008_9698
    1020:2748 50 82 20 10       addr         destroy_window_1020_8250
    1020:274c 54 37 08 10       addr         pass1_1008_3754
    1020:2750 60 9c 08 10       addr         pass1_1008_9c60
    1020:2754 58 37 08 10       addr         pass1_1008_3758
    1020:2758 24 63 08 10       addr         FUN_1008_6324
    1020:275c 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:2760 62 37 08 10       addr         pass1_1008_3762
    1020:2764 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:2768 66 37 08 10       addr         pass1_1008_3766
    1020:276c 06 81 20 10       addr         pass1_1020_8106
    1020:2770 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:2774 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:2778 02 6b 08 10       addr         pass1_1008_6b02
    1020:277c 7a 37 08 10       addr         pass1_1008_377a
    1020:2780 52 9c 08 10       addr         pass1_1008_9c52
    1020:2784 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:2788 16 9c 08 10       addr         pass1_1008_9c16
    1020:278c 30 9c 08 10       addr         pass1_1008_9c30
    1020:2790 86 9c 08 10       addr         pass1_1008_9c86
    1020:2794 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:2798 c0 81 20 10       addr         win_ui_palette_op_1020_81c0
    1020:279c a6 26 20 10       addr         pass1_1020_26a6
    1020:27a0 28 63 08 10       addr         FUN_1008_6328
    1020:27a4 28 81 20 10       addr         realize_palette_1020_8128
    1020:27a8 d8 26 20 10       addr         pass1_1020_26d8
    1020:27ac 10 3a 08 10       addr         pass1_1008_3a10

- 1020:288e

    1020:288e 68 28 20 10       addr         pass1_1020_2868
    1020:2892 10 3a 08 10       addr         pass1_1008_3a10
    1020:2896 12 93 20 10       addr         mix_draw_op_1020_9312

- 1020:2e4a -> pass1_1020_2e24

    1020:2e4a 24 2e 20 10       addr         pass1_1020_2e24
    1020:2e4e ea 68 08 10       addr         pass1_1008_68ea
    1020:2e52 f0 2c 20 10       addr         win_ui_op_1020_2cf0
    1020:2e56 46 2a 20 10       addr         pass1_1020_2a46
    1020:2e5a 40 96 08 10       addr         send_msg_1008_9640
    1020:2e5e b4 79 20 10       addr         string_1020_79b4
    1020:2e62 2c 37 08 10       addr         pass1_1008_372c
    1020:2e66 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:2e6a 3c 37 08 10       addr         pass1_1008_373c
    1020:2e6e 40 37 08 10       addr         pass1_1008_3740
    1020:2e72 44 37 08 10       addr         pass1_1008_3744
    1020:2e76 48 37 08 10       addr         pass1_1008_3748
    1020:2e7a 4c 37 08 10       addr         pass1_1008_374c
    1020:2e7e 72 2c 20 10       addr         pass1_1020_2c72
    1020:2e82 98 96 08 10       addr         destroy_win_1008_9698
    1020:2e86 6a 2a 20 10       addr         pass1_1020_2a6a
    1020:2e8a e4 2a 20 10       addr         invalidate_rect_1020_2ae4
    1020:2e8e 60 9c 08 10       addr         pass1_1008_9c60
    1020:2e92 36 29 20 10       addr         pass1_1020_2936
    1020:2e96 2a 2c 20 10       addr         enable_menu_item_1020_2c2a
    1020:2e9a 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:2e9e 62 37 08 10       addr         pass1_1008_3762
    1020:2ea2 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:2ea6 ae 2a 20 10       addr         bring_window_to_top_1020_2aae
    1020:2eaa d2 7a 20 10       addr         win_ui_menu_op_1020_7ad2
    1020:2eae 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:2eb2 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:2eb6 02 6b 08 10       addr         pass1_1008_6b02
    1020:2eba 7a 37 08 10       addr         pass1_1008_377a
    1020:2ebe 52 9c 08 10       addr         pass1_1008_9c52
    1020:2ec2 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:2ec6 e4 79 20 10       addr         pass1_1020_79e4
    1020:2eca d8 29 20 10       addr         send_msg_1020_29d8
    1020:2ece 86 9c 08 10       addr         pass1_1008_9c86
    1020:2ed2 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:2ed6 e0 9c 08 10       addr         pass1_1008_9ce0
    1020:2eda 92 29 20 10       addr         realize_palette_1020_2992

- 1020:363c

    1020:363c 16 36 20 10       addr         pass1_1020_3616
    1020:3640 80 30 20 10       addr         invalidate_rect_1020_3080

- 1020:3d08
- 1020:3d9c -> pass1_1020_3ca6

    1020:3d08 b8 3c 20 10       void *       FUN_1020_3cb8
    1020:3d0c ea 68 08 10       void *       pass1_1008_68ea
    1020:3d10 aa 38 20 10       void *       window_op_1020_38aa
    1020:3d14 c6 68 08 10       void *       pass1_1008_68c6
    1020:3d18 40 96 08 10       void *       send_msg_1008_9640
    1020:3d1c b4 79 20 10       void *       string_1020_79b4
    1020:3d20 2c 37 08 10       void *       pass1_1008_372c
    1020:3d24 f2 97 08 10       void *       unk_win_op_1008_97f2
    1020:3d28 3c 37 08 10       void *       pass1_1008_373c
    1020:3d2c 40 37 08 10       void *       pass1_1008_3740
    1020:3d30 44 37 08 10       void *       pass1_1008_3744
    1020:3d34 48 37 08 10       void *       pass1_1008_3748
    1020:3d38 4c 37 08 10       void *       pass1_1008_374c
    1020:3d3c d6 3b 20 10       void *       pass1_1020_3bd6
    1020:3d40 98 96 08 10       void *       destroy_win_1008_9698
    1020:3d44 98 38 20 10       void *       pass1_1020_3898
    1020:3d48 32 3c 20 10       void *       pass1_1020_3c32
    1020:3d4c 60 9c 08 10       void *       pass1_1008_9c60
    1020:3d50 ae 79 20 10       void *       pass1_1020_79ae
    1020:3d54 5e 37 08 10       void *       pass1_1008_375e
    1020:3d58 4e 9c 08 10       void *       pass1_1008_9c4e
    1020:3d5c 62 37 08 10       void *       pass1_1008_3762
    1020:3d60 4a 9c 08 10       void *       pass1_1008_9c4a
    1020:3d64 74 3c 20 10       void *       pass1_1020_3c74
    1020:3d68 d2 7a 20 10       void *       win_ui_menu_op_1020_7ad2
    1020:3d6c 4a 6a 08 10       void *       pass1_1008_6a4a
    1020:3d70 2e 6b 08 10       void *       pass1_1008_6b2e
    1020:3d74 02 6b 08 10       void *       pass1_1008_6b02
    1020:3d78 7a 37 08 10       void *       pass1_1008_377a
    1020:3d7c 52 9c 08 10       void *       pass1_1008_9c52
    1020:3d80 56 9c 08 10       void *       get_stock_obj_1008_9c56
    1020:3d84 e4 79 20 10       void *       pass1_1020_79e4
    1020:3d88 fc 79 20 10       void *       post_win_msg_1020_79fc
    1020:3d8c 86 9c 08 10       void *       pass1_1008_9c86
    1020:3d90 c4 9c 08 10       void *       pass1_1008_9cc4
    1020:3d94 e0 9c 08 10       void *       pass1_1008_9ce0
    1020:3d98 b4 3c 20 10       void *       FUN_1020_3cb4
    1020:3d9c a6 3c 20 10       void *       pass1_1020_3ca6
    1020:3da0 f6 36 20 10       void *       win_ui_op_1020_36f6

- 1020:408a -> pass1_1020_4064

    1020:408a 64 40 20 10       addr         pass1_1020_4064
    1020:408e 12 3f 20 10       addr         validate_rect_1020_3f12

- 1020:623c
- 1020:62d8 -> pass1_1020_6208

    1020:623c 16 62 20 10       addr         FUN_1020_6216
    1020:6240 4c 43 20 10       addr         pass1_1020_434c
    1020:6244 f6 43 20 10       addr         win_1020_43f6
    1020:6248 c6 68 08 10       addr         pass1_1008_68c6
    1020:624c 40 96 08 10       addr         send_msg_1008_9640
    1020:6250 64 96 08 10       addr         set_win_text_1008_9664
    1020:6254 2c 37 08 10       addr         pass1_1008_372c
    1020:6258 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:625c 3c 37 08 10       addr         pass1_1008_373c
    1020:6260 40 37 08 10       addr         pass1_1008_3740
    1020:6264 44 37 08 10       addr         pass1_1008_3744
    1020:6268 48 37 08 10       addr         pass1_1008_3748
    1020:626c 4c 37 08 10       addr         pass1_1008_374c
    1020:6270 b0 44 20 10       addr         pass1_1020_44b0
    1020:6274 98 96 08 10       addr         destroy_win_1008_9698
    1020:6278 50 82 20 10       addr         destroy_window_1020_8250
    1020:627c 3c 49 20 10       addr         win_sys_op_1020_493c
    1020:6280 60 9c 08 10       addr         pass1_1008_9c60
    1020:6284 58 37 08 10       addr         pass1_1008_3758
    1020:6288 ec 44 20 10       addr         mixed_menu_op_1020_44ec
    1020:628c 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:6290 62 37 08 10       addr         pass1_1008_3762
    1020:6294 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:6298 c6 51 20 10       addr         pass1_1020_51c6
    1020:629c 2e 52 20 10       addr         win_ui_cursor_op_1020_522e
    1020:62a0 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:62a4 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:62a8 02 6b 08 10       addr         pass1_1008_6b02
    1020:62ac 7a 37 08 10       addr         pass1_1008_377a
    1020:62b0 52 9c 08 10       addr         pass1_1008_9c52
    1020:62b4 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:62b8 16 9c 08 10       addr         pass1_1008_9c16
    1020:62bc 30 9c 08 10       addr         pass1_1008_9c30
    1020:62c0 86 9c 08 10       addr         pass1_1008_9c86
    1020:62c4 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:62c8 c0 81 20 10       addr         win_ui_palette_op_1020_81c0
    1020:62cc de 52 20 10       addr         pass1_1020_52de
    1020:62d0 28 63 08 10       addr         FUN_1008_6328
    1020:62d4 28 81 20 10       addr         realize_palette_1020_8128
    1020:62d8 08 62 20 10       addr         pass1_1020_6208
    1020:62dc 94 43 20 10       addr         post_msg_1020_4394

- 1020:67c2

    1020:67c2 9c 67 20 10       addr         pass1_1020_679c
    1020:67c6 cc 65 20 10       addr         unk_win_op_1020_65cc
    1020:67ca 0c 65 20 10       addr         mix_draw_op_1020_650c

- 1020:70e6

    1020:70e6 c0 70 20 10       addr         pass1_1020_70c0
    1020:70ea ea 68 08 10       addr         pass1_1008_68ea
    1020:70ee 3a 6c 20 10       addr         window_op_1020_6c3a
    1020:70f2 c6 68 08 10       addr         pass1_1008_68c6
    1020:70f6 40 96 08 10       addr         send_msg_1008_9640
    1020:70fa b4 79 20 10       addr         string_1020_79b4
    1020:70fe 2c 37 08 10       addr         pass1_1008_372c
    1020:7102 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:7106 3c 37 08 10       addr         pass1_1008_373c
    1020:710a 40 37 08 10       addr         pass1_1008_3740
    1020:710e 44 37 08 10       addr         pass1_1008_3744
    1020:7112 48 37 08 10       addr         pass1_1008_3748
    1020:7116 4c 37 08 10       addr         pass1_1008_374c
    1020:711a bc 6b 20 10       addr         pass1_1020_6bbc
    1020:711e 98 96 08 10       addr         destroy_win_1008_9698
    1020:7122 7c 68 20 10       addr         pass1_1020_687c
    1020:7126 4c 69 20 10       addr         unk_destroy_win_op_1020_694c
    1020:712a e6 6a 20 10       addr         win_ui_op_1020_6ae6
    1020:712e ae 79 20 10       addr         pass1_1020_79ae
    1020:7132 9a 6b 20 10       addr         enable_menu_item_1020_6b9a
    1020:7136 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:713a 62 37 08 10       addr         pass1_1008_3762
    1020:713e 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:7142 fc 68 20 10       addr         pt_in_rect_1020_68fc
    1020:7146 d2 7a 20 10       addr         win_ui_menu_op_1020_7ad2
    1020:714a 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:714e 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:7152 02 6b 08 10       addr         pass1_1008_6b02
    1020:7156 7a 37 08 10       addr         pass1_1008_377a
    1020:715a 52 9c 08 10       addr         pass1_1008_9c52
    1020:715e 70 70 20 10       addr         draw_op_1020_7070
    1020:7162 e4 79 20 10       addr         pass1_1020_79e4
    1020:7166 fc 79 20 10       addr         post_win_msg_1020_79fc
    1020:716a 86 9c 08 10       addr         pass1_1008_9c86
    1020:716e c4 9c 08 10       addr         pass1_1008_9cc4
    1020:7172 e0 9c 08 10       addr         pass1_1008_9ce0
    1020:7176 96 68 20 10       addr         realize_palette_1020_6896
    1020:717a 52 6e 20 10       addr         pass1_1020_6e52

- 1020:754c

    1020:754c 26 75 20 10       addr         pass1_1020_7526
    1020:7550 08 73 20 10       addr         post_win_msg_1020_7308

- 1020:7780
- 1020:781c -> pass1_1020_774c

    1020:7780 5a 77 20 10       void *       FUN_1020_775a
    1020:7784 ea 68 08 10       void *       pass1_1008_68ea
    1020:7788 aa 76 20 10       void *       window_op_1020_76aa
    1020:778c c6 68 08 10       void *       pass1_1008_68c6
    1020:7790 40 96 08 10       void *       send_msg_1008_9640
    1020:7794 64 96 08 10       void *       set_win_text_1008_9664
    1020:7798 2c 37 08 10       void *       pass1_1008_372c
    1020:779c f2 97 08 10       void *       unk_win_op_1008_97f2
    1020:77a0 3c 37 08 10       void *       pass1_1008_373c
    1020:77a4 40 37 08 10       void *       pass1_1008_3740
    1020:77a8 44 37 08 10       void *       pass1_1008_3744
    1020:77ac 48 37 08 10       void *       pass1_1008_3748
    1020:77b0 4c 37 08 10       void *       pass1_1008_374c
    1020:77b4 f0 75 20 10       void *       win_1020_75f0
    1020:77b8 98 96 08 10       void *       destroy_win_1008_9698
    1020:77bc 50 82 20 10       void *       destroy_window_1020_8250
    1020:77c0 54 37 08 10       void *       pass1_1008_3754
    1020:77c4 60 9c 08 10       void *       pass1_1008_9c60
    1020:77c8 58 37 08 10       void *       pass1_1008_3758
    1020:77cc 24 63 08 10       void *       FUN_1008_6324
    1020:77d0 4e 9c 08 10       void *       pass1_1008_9c4e
    1020:77d4 62 37 08 10       void *       pass1_1008_3762
    1020:77d8 4a 9c 08 10       void *       pass1_1008_9c4a
    1020:77dc 66 37 08 10       void *       pass1_1008_3766
    1020:77e0 06 81 20 10       void *       pass1_1020_8106
    1020:77e4 4a 6a 08 10       void *       pass1_1008_6a4a
    1020:77e8 2e 6b 08 10       void *       pass1_1008_6b2e
    1020:77ec 02 6b 08 10       void *       pass1_1008_6b02
    1020:77f0 7a 37 08 10       void *       pass1_1008_377a
    1020:77f4 52 9c 08 10       void *       pass1_1008_9c52
    1020:77f8 56 9c 08 10       void *       get_stock_obj_1008_9c56
    1020:77fc 16 9c 08 10       void *       pass1_1008_9c16
    1020:7800 30 9c 08 10       void *       pass1_1008_9c30
    1020:7804 86 9c 08 10       void *       pass1_1008_9c86
    1020:7808 c4 9c 08 10       void *       pass1_1008_9cc4
    1020:780c c0 81 20 10       void *       win_ui_palette_op_1020_81c0
    1020:7810 0e 77 20 10       void *       pass1_1020_770e
    1020:7814 28 63 08 10       void *       FUN_1008_6328
    1020:7818 28 81 20 10       void *       realize_palette_1020_8128
    1020:781c 4c 77 20 10       void *       pass1_1020_774c
    1020:7820 10 3a 08 10       void *       pass1_1008_3a10

- 1020:7902

    1020:7902 dc 78 20 10       addr         pass1_1020_78dc
    1020:7906 10 3a 08 10       addr         pass1_1008_3a10
    1020:790a 12 93 20 10       addr         mix_draw_op_1020_9312

- 1020:7b86

    1020:7b86 60 7b 20 10       addr         pass1_1020_7b60
    1020:7b8a ea 68 08 10       addr         pass1_1008_68ea
    1020:7b8e 60 97 08 10       addr         create_window_ex_1008_9760
    1020:7b92 c6 68 08 10       addr         pass1_1008_68c6
    1020:7b96 40 96 08 10       addr         send_msg_1008_9640
    1020:7b9a b4 79 20 10       addr         string_1020_79b4
    1020:7b9e 2c 37 08 10       addr         pass1_1008_372c
    1020:7ba2 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:7ba6 3c 37 08 10       addr         pass1_1008_373c
    1020:7baa 40 37 08 10       addr         pass1_1008_3740
    1020:7bae 44 37 08 10       addr         pass1_1008_3744
    1020:7bb2 48 37 08 10       addr         pass1_1008_3748
    1020:7bb6 4c 37 08 10       addr         pass1_1008_374c
    1020:7bba c8 97 08 10       addr         begin_end_paint_1008_97c8
    1020:7bbe 98 96 08 10       addr         destroy_win_1008_9698
    1020:7bc2 50 7a 20 10       addr         get_win_ui_info_op_1020_7a50
    1020:7bc6 54 37 08 10       addr         pass1_1008_3754
    1020:7bca 60 9c 08 10       addr         pass1_1008_9c60
    1020:7bce ae 79 20 10       addr         pass1_1020_79ae
    1020:7bd2 5e 37 08 10       addr         pass1_1008_375e
    1020:7bd6 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:7bda 62 37 08 10       addr         pass1_1008_3762
    1020:7bde 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:7be2 66 37 08 10       addr         pass1_1008_3766
    1020:7be6 d2 7a 20 10       addr         win_ui_menu_op_1020_7ad2
    1020:7bea 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:7bee 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:7bf2 02 6b 08 10       addr         pass1_1008_6b02
    1020:7bf6 7a 37 08 10       addr         pass1_1008_377a
    1020:7bfa 52 9c 08 10       addr         pass1_1008_9c52
    1020:7bfe 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:7c02 e4 79 20 10       addr         pass1_1020_79e4
    1020:7c06 fc 79 20 10       addr         post_win_msg_1020_79fc
    1020:7c0a 86 9c 08 10       addr         pass1_1008_9c86
    1020:7c0e c4 9c 08 10       addr         pass1_1008_9cc4
    1020:7c12 e0 9c 08 10       addr         pass1_1008_9ce0
    1020:7c16 b4 3c 20 10       addr         FUN_1020_3cb4

- 1020:7f72

    1020:7f72 38 7f 20 10       addr         pass1_1020_7f38
    1020:7f76 10 3a 08 10       addr         pass1_1008_3a10

- 1020:82b6 -> INVALID
- 1020:8358 -> pass1_1020_8288

    1020:82bc 96 82 20 10       addr         FUN_1020_8296
    1020:82c0 ea 68 08 10       addr         pass1_1008_68ea
    1020:82c4 60 97 08 10       addr         create_window_ex_1008_9760
    1020:82c8 c6 68 08 10       addr         pass1_1008_68c6
    1020:82cc 40 96 08 10       addr         send_msg_1008_9640
    1020:82d0 64 96 08 10       addr         set_win_text_1008_9664
    1020:82d4 2c 37 08 10       addr         pass1_1008_372c
    1020:82d8 f2 97 08 10       addr         unk_win_op_1008_97f2
    1020:82dc 3c 37 08 10       addr         pass1_1008_373c
    1020:82e0 40 37 08 10       addr         pass1_1008_3740
    1020:82e4 44 37 08 10       addr         pass1_1008_3744
    1020:82e8 48 37 08 10       addr         pass1_1008_3748
    1020:82ec 4c 37 08 10       addr         pass1_1008_374c
    1020:82f0 c0 62 08 10       addr         fill_rect_1008_62c0
    1020:82f4 98 96 08 10       addr         destroy_win_1008_9698
    1020:82f8 50 82 20 10       addr         destroy_window_1020_8250
    1020:82fc 54 37 08 10       addr         pass1_1008_3754
    1020:8300 60 9c 08 10       addr         pass1_1008_9c60
    1020:8304 58 37 08 10       addr         pass1_1008_3758
    1020:8308 24 63 08 10       addr         FUN_1008_6324
    1020:830c 4e 9c 08 10       addr         pass1_1008_9c4e
    1020:8310 62 37 08 10       addr         pass1_1008_3762
    1020:8314 4a 9c 08 10       addr         pass1_1008_9c4a
    1020:8318 66 37 08 10       addr         pass1_1008_3766
    1020:831c 06 81 20 10       addr         pass1_1020_8106
    1020:8320 4a 6a 08 10       addr         pass1_1008_6a4a
    1020:8324 2e 6b 08 10       addr         pass1_1008_6b2e
    1020:8328 02 6b 08 10       addr         pass1_1008_6b02
    1020:832c 7a 37 08 10       addr         pass1_1008_377a
    1020:8330 52 9c 08 10       addr         pass1_1008_9c52
    1020:8334 56 9c 08 10       addr         get_stock_obj_1008_9c56
    1020:8338 16 9c 08 10       addr         pass1_1008_9c16
    1020:833c 30 9c 08 10       addr         pass1_1008_9c30
    1020:8340 86 9c 08 10       addr         pass1_1008_9c86
    1020:8344 c4 9c 08 10       addr         pass1_1008_9cc4
    1020:8348 c0 81 20 10       addr         win_ui_palette_op_1020_81c0
    1020:834c 8e 62 08 10       addr         destroy_win_1008_628e
    1020:8350 28 63 08 10       addr         FUN_1008_6328
    1020:8354 28 81 20 10       addr         realize_palette_1020_8128
    1020:8358 88 82 20 10       addr         pass1_1020_8288
    1020:835c 10 3a 08 10       addr         pass1_1008_3a10

- 1020:8462

    1020:8462 3c 84 20 10       addr         pass1_1020_843c
    1020:8466 38 84 20 10       addr         FUN_1020_8438
    1020:846a f8 83 20 10       addr         pass1_1020_83f8
    1020:846e d8 86 20 10       addr         pass1_1020_86d8
    1020:8472 5a 86 20 10       addr         pass1_1020_865a
    1020:8476 f6 85 20 10       addr         pass1_1020_85f6

- 1020:87aa

    1020:87aa 84 87 20 10       addr         pass1_1020_8784
    1020:87ae 38 84 20 10       addr         FUN_1020_8438
    1020:87b2 80 87 20 10       addr         FUN_1020_8780
    1020:87b6 d8 86 20 10       addr         pass1_1020_86d8
    1020:87ba 5a 86 20 10       addr         pass1_1020_865a
    1020:87be f6 85 20 10       addr         pass1_1020_85f6

- 1020:8a84

    1020:8a84 5e 8a 20 10       addr         pass1_1020_8a5e
    1020:8a88 38 84 20 10       addr         FUN_1020_8438
    1020:8a8c 08 89 20 10       addr         pass1_1020_8908
    1020:8a90 d8 86 20 10       addr         pass1_1020_86d8
    1020:8a94 5a 86 20 10       addr         pass1_1020_865a
    1020:8a98 f6 85 20 10       addr         pass1_1020_85f6

- 1020:8e92

    1020:8e92 6c 8e 20 10       addr         pass1_1020_8e6c
    1020:8e96 38 84 20 10       addr         FUN_1020_8438
    1020:8e9a cc 8b 20 10       addr         pass1_1020_8bcc
    1020:8e9e d8 86 20 10       addr         pass1_1020_86d8
    1020:8ea2 5a 86 20 10       addr         pass1_1020_865a
    1020:8ea6 f6 85 20 10       addr         pass1_1020_85f6

- 1020:9204

    1020:9204 de 91 20 10       addr         pass1_1020_91de
    1020:9208 b4 8f 20 10       addr         invalidate_rect_1020_8fb4
    1020:920c 68 90 20 10       addr         pass1_1020_9068
    1020:9210 d8 86 20 10       addr         pass1_1020_86d8
    1020:9214 5a 86 20 10       addr         pass1_1020_865a
    1020:9218 f6 85 20 10       addr         pass1_1020_85f6

- 1020:96c8

    1020:96c8 a2 96 20 10       addr         pass1_1020_96a2
    1020:96cc 10 3a 08 10       addr         pass1_1008_3a10
    1020:96d0 12 93 20 10       addr         mix_draw_op_1020_9312

- 1020:ba36

    1020:ba36 44 a6 20 10       void *       pass1_1020_a644
    1020:ba3a 5e a6 20 10       void *       read_file_1020_a65e

- 1020:c834

    1020:c834 0e c8 20 10       addr         pass1_1020_c80e
    1020:c838 4a c5 20 10       addr         pass1_1020_c54a
    1020:c83c ae c5 20 10       addr         FUN_1020_c5ae
    1020:c840 b4 c5 20 10       addr         FUN_1020_c5b4
    1020:c844 38 c5 20 10       addr         pass1_1020_c538
    1020:c848 ee 1e 30 10       addr         pass1_1030_1eee
    1020:c84c 16 1f 30 10       addr         pass1_1030_1f16
    1020:c850 94 c6 20 10       addr         pass1_1020_c694
    1020:c854 3a c7 20 10       addr         pass1_1020_c73a
    1020:c858 40 c6 20 10       addr         FUN_1020_c640
    1020:c85c 44 c6 20 10       addr         pass1_1020_c644

- 1020:c9e6

    1020:c9e6 ba c9 20 10       addr         pass1_1020_c9ba

- 1020:cc7c

    1020:cc7c 56 cc 20 10       addr         pass1_1020_cc56
    1020:cc80 56 bb 28 10       addr         pass1_1028_bb56
    1020:cc84 8e 17 30 10       addr         FUN_1030_178e
    1020:cc88 ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:cc8c 1a b8 28 10       addr         file_1028_b81a
    1020:cc90 1c bc 28 10       addr         pass1_1028_bc1c
    1020:cc94 36 ca 20 10       addr         pass1_1020_ca36
    1020:cc98 d4 09 28 10       addr         pass1_1028_09d4
    1020:cc9c 7e bc 28 10       addr         pass1_1028_bc7e
    1020:cca0 14 b5 28 10       addr         pass1_1028_b514
    1020:cca4 2a be 28 10       addr         pass1_1028_be2a
    1020:cca8 16 bf 28 10       addr         FUN_1028_bf16
    1020:ccac 1a bf 28 10       addr         FUN_1028_bf1a
    1020:ccb0 1e bf 28 10       addr         FUN_1028_bf1e
    1020:ccb4 82 ca 20 10       addr         pass1_1020_ca82
    1020:ccb8 22 bf 28 10       addr         pass1_1028_bf22
    1020:ccbc f0 bb 28 10       addr         pass1_1028_bbf0
    1020:ccc0 02 bc 28 10       addr         pass1_1028_bc02
    1020:ccc4 a8 b5 28 10       addr         pass1_1028_b5a8
    1020:ccc8 ca b5 28 10       addr         pass1_1028_b5ca
    1020:cccc e6 b4 28 10       addr         FUN_1028_b4e6
    1020:ccd0 ec b4 28 10       addr         FUN_1028_b4ec
    1020:ccd4 6e b4 28 10       addr         pass1_1028_b46e
    1020:ccd8 4a c6 28 10       addr         pass1_1028_c64a
    1020:ccdc 22 c5 28 10       addr         pass1_1028_c522
    1020:cce0 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:cd7e

    1020:cd7e 58 cd 20 10       addr         pass1_1020_cd58
    1020:cd82 56 bb 28 10       addr         pass1_1028_bb56
    1020:cd86 8e 17 30 10       addr         FUN_1030_178e
    1020:cd8a ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:cd8e 1a b8 28 10       addr         file_1028_b81a
    1020:cd92 1c bc 28 10       addr         pass1_1028_bc1c
    1020:cd96 38 bd 28 10       addr         pass1_1028_bd38
    1020:cd9a 90 bc 28 10       addr         pass1_1028_bc90
    1020:cd9e 7e bc 28 10       addr         pass1_1028_bc7e
    1020:cda2 14 b5 28 10       addr         pass1_1028_b514
    1020:cda6 2a be 28 10       addr         pass1_1028_be2a
    1020:cdaa 16 bf 28 10       addr         FUN_1028_bf16
    1020:cdae 1a bf 28 10       addr         FUN_1028_bf1a
    1020:cdb2 1e bf 28 10       addr         FUN_1028_bf1e
    1020:cdb6 9e be 28 10       addr         pass1_1028_be9e
    1020:cdba 22 bf 28 10       addr         pass1_1028_bf22
    1020:cdbe f0 bb 28 10       addr         pass1_1028_bbf0
    1020:cdc2 02 bc 28 10       addr         pass1_1028_bc02
    1020:cdc6 a8 b5 28 10       addr         pass1_1028_b5a8
    1020:cdca ca b5 28 10       addr         pass1_1028_b5ca
    1020:cdce 30 cd 20 10       addr         pass1_1020_cd30
    1020:cdd2 ec b4 28 10       addr         FUN_1028_b4ec
    1020:cdd6 6e b4 28 10       addr         pass1_1028_b46e
    1020:cdda 4a c6 28 10       addr         pass1_1028_c64a
    1020:cdde 22 c5 28 10       addr         pass1_1028_c522
    1020:cde2 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:d004

    1020:d004 de cf 20 10       addr         pass1_1020_cfde
    1020:d008 56 bb 28 10       addr         pass1_1028_bb56
    1020:d00c 8e 17 30 10       addr         FUN_1030_178e
    1020:d010 ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:d014 1a b8 28 10       addr         file_1028_b81a
    1020:d018 1c bc 28 10       addr         pass1_1028_bc1c
    1020:d01c 32 ce 20 10       addr         pass1_1020_ce32
    1020:d020 d4 09 28 10       addr         pass1_1028_09d4
    1020:d024 7e bc 28 10       addr         pass1_1028_bc7e
    1020:d028 14 b5 28 10       addr         pass1_1028_b514
    1020:d02c 2a be 28 10       addr         pass1_1028_be2a
    1020:d030 16 bf 28 10       addr         FUN_1028_bf16
    1020:d034 1a bf 28 10       addr         FUN_1028_bf1a
    1020:d038 1e bf 28 10       addr         FUN_1028_bf1e
    1020:d03c 9e ce 20 10       addr         pass1_1020_ce9e
    1020:d040 22 bf 28 10       addr         pass1_1028_bf22
    1020:d044 f0 bb 28 10       addr         pass1_1028_bbf0
    1020:d048 02 bc 28 10       addr         pass1_1028_bc02
    1020:d04c a8 b5 28 10       addr         pass1_1028_b5a8
    1020:d050 ca b5 28 10       addr         pass1_1028_b5ca
    1020:d054 e6 b4 28 10       addr         FUN_1028_b4e6
    1020:d058 ec b4 28 10       addr         FUN_1028_b4ec
    1020:d05c 6e b4 28 10       addr         pass1_1028_b46e
    1020:d060 4a c6 28 10       addr         pass1_1028_c64a
    1020:d064 22 c5 28 10       addr         pass1_1028_c522
    1020:d068 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:d314

    1020:d314 ee d2 20 10       addr         pass1_1020_d2ee
    1020:d318 56 bb 28 10       addr         pass1_1028_bb56
    1020:d31c 8e 17 30 10       addr         FUN_1030_178e
    1020:d320 ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:d324 1a b8 28 10       addr         file_1028_b81a
    1020:d328 1c bc 28 10       addr         pass1_1028_bc1c
    1020:d32c 38 bd 28 10       addr         pass1_1028_bd38
    1020:d330 18 d1 20 10       addr         pass1_1020_d118
    1020:d334 7e bc 28 10       addr         pass1_1028_bc7e
    1020:d338 14 b5 28 10       addr         pass1_1028_b514
    1020:d33c b8 d0 20 10       addr         pass1_1020_d0b8
    1020:d340 16 bf 28 10       addr         FUN_1028_bf16
    1020:d344 1a bf 28 10       addr         FUN_1028_bf1a
    1020:d348 1e bf 28 10       addr         FUN_1028_bf1e
    1020:d34c 9e be 28 10       addr         pass1_1028_be9e
    1020:d350 22 bf 28 10       addr         pass1_1028_bf22
    1020:d354 f0 bb 28 10       addr         pass1_1028_bbf0
    1020:d358 02 bc 28 10       addr         pass1_1028_bc02
    1020:d35c a8 b5 28 10       addr         pass1_1028_b5a8
    1020:d360 ca b5 28 10       addr         pass1_1028_b5ca
    1020:d364 e6 b4 28 10       addr         FUN_1028_b4e6
    1020:d368 ec b4 28 10       addr         FUN_1028_b4ec
    1020:d36c 6e b4 28 10       addr         pass1_1028_b46e
    1020:d370 4a c6 28 10       addr         pass1_1028_c64a
    1020:d374 22 c5 28 10       addr         pass1_1028_c522
    1020:d378 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:d53e

    1020:d53e 18 d5 20 10       addr         pass1_1020_d518
    1020:d542 56 bb 28 10       addr         pass1_1028_bb56
    1020:d546 8e 17 30 10       addr         FUN_1030_178e
    1020:d54a d4 d3 20 10       addr         write_to_file_1020_d3d4
    1020:d54e 1a d4 20 10       addr         pass1_1020_d41a
    1020:d552 1c bc 28 10       addr         pass1_1028_bc1c
    1020:d556 38 bd 28 10       addr         pass1_1028_bd38
    1020:d55a 60 d4 20 10       addr         pass1_1020_d460
    1020:d55e 7e bc 28 10       addr         pass1_1028_bc7e
    1020:d562 14 b5 28 10       addr         pass1_1028_b514
    1020:d566 2a be 28 10       addr         pass1_1028_be2a
    1020:d56a 16 bf 28 10       addr         FUN_1028_bf16
    1020:d56e 1a bf 28 10       addr         FUN_1028_bf1a
    1020:d572 1e bf 28 10       addr         FUN_1028_bf1e
    1020:d576 9e be 28 10       addr         pass1_1028_be9e
    1020:d57a 22 bf 28 10       addr         pass1_1028_bf22
    1020:d57e f0 bb 28 10       addr         pass1_1028_bbf0
    1020:d582 02 bc 28 10       addr         pass1_1028_bc02
    1020:d586 ca d4 20 10       addr         pass1_1020_d4ca
    1020:d58a ca b5 28 10       addr         pass1_1028_b5ca
    1020:d58e e6 b4 28 10       addr         FUN_1028_b4e6
    1020:d592 ec b4 28 10       addr         FUN_1028_b4ec
    1020:d596 6e b4 28 10       addr         pass1_1028_b46e
    1020:d59a 4a c6 28 10       addr         pass1_1028_c64a
    1020:d59e 22 c5 28 10       addr         pass1_1028_c522
    1020:d5a2 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:d7fe

    1020:d7fe d8 d7 20 10       addr         pass1_1020_d7d8
    1020:d802 56 bb 28 10       addr         pass1_1028_bb56
    1020:d806 8e 17 30 10       addr         FUN_1030_178e
    1020:d80a ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:d80e 1a b8 28 10       addr         file_1028_b81a
    1020:d812 1c bc 28 10       addr         pass1_1028_bc1c
    1020:d816 38 bd 28 10       addr         pass1_1028_bd38
    1020:d81a 90 bc 28 10       addr         pass1_1028_bc90
    1020:d81e 7e bc 28 10       addr         pass1_1028_bc7e
    1020:d822 e6 d6 20 10       addr         pass1_1020_d6e6
    1020:d826 2a be 28 10       addr         pass1_1028_be2a
    1020:d82a 16 bf 28 10       addr         FUN_1028_bf16
    1020:d82e 1a bf 28 10       addr         FUN_1028_bf1a
    1020:d832 1e bf 28 10       addr         FUN_1028_bf1e
    1020:d836 9e be 28 10       addr         pass1_1028_be9e
    1020:d83a 22 bf 28 10       addr         pass1_1028_bf22
    1020:d83e f0 bb 28 10       addr         pass1_1028_bbf0
    1020:d842 02 bc 28 10       addr         pass1_1028_bc02
    1020:d846 a8 b5 28 10       addr         pass1_1028_b5a8
    1020:d84a ca b5 28 10       addr         pass1_1028_b5ca
    1020:d84e e6 b4 28 10       addr         FUN_1028_b4e6
    1020:d852 ec b4 28 10       addr         FUN_1028_b4ec
    1020:d856 f2 d5 20 10       addr         pass1_1020_d5f2
    1020:d85a 4a c6 28 10       addr         pass1_1028_c64a
    1020:d85e 22 c5 28 10       addr         pass1_1028_c522
    1020:d862 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:d8ec

    1020:d8ec c6 d8 20 10       addr         FUN_1020_d8c6
    1020:d8f0 56 bb 28 10       addr         pass1_1028_bb56
    1020:d8f4 8e 17 30 10       addr         FUN_1030_178e
    1020:d8f8 ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:d8fc 1a b8 28 10       addr         file_1028_b81a
    1020:d900 1c bc 28 10       addr         pass1_1028_bc1c
    1020:d904 38 bd 28 10       addr         pass1_1028_bd38
    1020:d908 90 bc 28 10       addr         pass1_1028_bc90
    1020:d90c 7e bc 28 10       addr         pass1_1028_bc7e
    1020:d910 14 b5 28 10       addr         pass1_1028_b514
    1020:d914 2a be 28 10       addr         pass1_1028_be2a
    1020:d918 b2 d8 20 10       addr         FUN_1020_d8b2
    1020:d91c b6 d8 20 10       addr         FUN_1020_d8b6
    1020:d920 ba d8 20 10       addr         FUN_1020_d8ba
    1020:d924 be d8 20 10       addr         FUN_1020_d8be
    1020:d928 c2 d8 20 10       addr         FUN_1020_d8c2
    1020:d92c f0 bb 28 10       addr         pass1_1028_bbf0
    1020:d930 02 bc 28 10       addr         pass1_1028_bc02
    1020:d934 a8 b5 28 10       addr         pass1_1028_b5a8
    1020:d938 ca b5 28 10       addr         pass1_1028_b5ca
    1020:d93c e6 b4 28 10       addr         FUN_1028_b4e6
    1020:d940 ec b4 28 10       addr         FUN_1028_b4ec
    1020:d944 6e b4 28 10       addr         pass1_1028_b46e
    1020:d948 4a c6 28 10       addr         pass1_1028_c64a
    1020:d94c 22 c5 28 10       addr         pass1_1028_c522
    1020:d950 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:e792

    1020:e792 6c e7 20 10       addr         pass1_1020_e76c
    1020:e796 56 bb 28 10       addr         pass1_1028_bb56
    1020:e79a 8e 17 30 10       addr         FUN_1030_178e
    1020:e79e a4 e6 20 10       addr         write_to_file_1020_e6a4
    1020:e7a2 0e e7 20 10       addr         pass1_1020_e70e
    1020:e7a6 1c bc 28 10       addr         pass1_1028_bc1c
    1020:e7aa fa d9 20 10       addr         pass1_1020_d9fa
    1020:e7ae 4e da 20 10       addr         pass1_1020_da4e
    1020:e7b2 3c da 20 10       addr         pass1_1020_da3c
    1020:e7b6 14 b5 28 10       addr         pass1_1028_b514
    1020:e7ba 2a be 28 10       addr         pass1_1028_be2a
    1020:e7be 16 bf 28 10       addr         FUN_1028_bf16
    1020:e7c2 1a bf 28 10       addr         FUN_1028_bf1a
    1020:e7c6 1e bf 28 10       addr         FUN_1028_bf1e
    1020:e7ca 4c e4 20 10       addr         pass1_1020_e44c
    1020:e7ce 58 e5 20 10       addr         pass1_1020_e558
    1020:e7d2 f0 bb 28 10       addr         pass1_1028_bbf0
    1020:e7d6 02 bc 28 10       addr         pass1_1028_bc02
    1020:e7da a8 b5 28 10       addr         pass1_1028_b5a8
    1020:e7de ca b5 28 10       addr         pass1_1028_b5ca
    1020:e7e2 e6 b4 28 10       addr         FUN_1028_b4e6
    1020:e7e6 ec b4 28 10       addr         FUN_1028_b4ec
    1020:e7ea 6e b4 28 10       addr         pass1_1028_b46e
    1020:e7ee 4a c6 28 10       addr         pass1_1028_c64a
    1020:e7f2 86 db 20 10       addr         pass1_1020_db86
    1020:e7f6 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:e88e

    1020:e88e 68 e8 20 10       addr         pass1_1020_e868
    1020:e892 56 bb 28 10       addr         pass1_1028_bb56
    1020:e896 8e 17 30 10       addr         FUN_1030_178e
    1020:e89a ec b5 28 10       addr         write_to_file_1028_b5ec
    1020:e89e 1a b8 28 10       addr         file_1028_b81a
    1020:e8a2 1c bc 28 10       addr         pass1_1028_bc1c
    1020:e8a6 38 bd 28 10       addr         pass1_1028_bd38
    1020:e8aa 90 bc 28 10       addr         pass1_1028_bc90
    1020:e8ae 7e bc 28 10       addr         pass1_1028_bc7e
    1020:e8b2 14 b5 28 10       addr         pass1_1028_b514
    1020:e8b6 2a be 28 10       addr         pass1_1028_be2a
    1020:e8ba 16 bf 28 10       addr         FUN_1028_bf16
    1020:e8be 64 e8 20 10       addr         FUN_1020_e864
    1020:e8c2 1e bf 28 10       addr         FUN_1028_bf1e
    1020:e8c6 9e be 28 10       addr         pass1_1028_be9e
    1020:e8ca 22 bf 28 10       addr         pass1_1028_bf22
    1020:e8ce f0 bb 28 10       addr         pass1_1028_bbf0
    1020:e8d2 02 bc 28 10       addr         pass1_1028_bc02
    1020:e8d6 a8 b5 28 10       addr         pass1_1028_b5a8
    1020:e8da ca b5 28 10       addr         pass1_1028_b5ca
    1020:e8de e6 b4 28 10       addr         FUN_1028_b4e6
    1020:e8e2 ec b4 28 10       addr         FUN_1028_b4ec
    1020:e8e6 6e b4 28 10       addr         pass1_1028_b46e
    1020:e8ea 4a c6 28 10       addr         pass1_1028_c64a
    1020:e8ee 22 c5 28 10       addr         pass1_1028_c522
    1020:e8f2 d2 ce 28 10       addr         pass1_1028_ced2

- 1020:eef6

    1020:eef6 d0 ee 20 10       addr         pass1_1020_eed0
    1020:eefa 56 bb 28 10       addr         pass1_1028_bb56
    1020:eefe 8e 17 30 10       addr         FUN_1030_178e
    1020:ef02 4e e9 20 10       addr         pass1_1020_e94e
    1020:ef06 94 e9 20 10       addr         pass1_1020_e994
    1020:ef0a 1c bc 28 10       addr         pass1_1028_bc1c
    1020:ef0e d4 e9 20 10       addr         pass1_1020_e9d4
    1020:ef12 20 ea 20 10       addr         pass1_1020_ea20
    1020:ef16 0e ea 20 10       addr         pass1_1020_ea0e
    1020:ef1a 14 b5 28 10       addr         pass1_1028_b514
    1020:ef1e 2a be 28 10       addr         pass1_1028_be2a
    1020:ef22 16 bf 28 10       addr         FUN_1028_bf16
    1020:ef26 1a bf 28 10       addr         FUN_1028_bf1a
    1020:ef2a 1e bf 28 10       addr         FUN_1028_bf1e
    1020:ef2e 3c ed 20 10       addr         pass1_1020_ed3c
    1020:ef32 b0 ec 20 10       addr         pass1_1020_ecb0
    1020:ef36 f0 bb 28 10       addr         pass1_1028_bbf0
    1020:ef3a 02 bc 28 10       addr         pass1_1028_bc02
    1020:ef3e a8 b5 28 10       addr         pass1_1028_b5a8
    1020:ef42 ca b5 28 10       addr         pass1_1028_b5ca
    1020:ef46 e6 b4 28 10       addr         FUN_1028_b4e6
    1020:ef4a ec b4 28 10       addr         FUN_1028_b4ec
    1020:ef4e 6e b4 28 10       addr         pass1_1028_b46e
    1020:ef52 4a c6 28 10       addr         pass1_1028_c64a
    1020:ef56 22 c5 28 10       addr         pass1_1028_c522
    1020:ef5a d2 ce 28 10       addr         pass1_1028_ced2

### 1028

- 1028:0ada

    1028:0ada b4 0a 28 10       addr         pass1_1028_0ab4
    1028:0ade 56 bb 28 10       addr         pass1_1028_bb56
    1028:0ae2 8e 17 30 10       addr         FUN_1030_178e
    1028:0ae6 ec b5 28 10       addr         write_to_file_1028_b5ec
    1028:0aea 1a b8 28 10       addr         file_1028_b81a
    1028:0aee 1c bc 28 10       addr         pass1_1028_bc1c
    1028:0af2 b8 09 28 10       addr         pass1_1028_09b8
    1028:0af6 d4 09 28 10       addr         pass1_1028_09d4
    1028:0afa 7e bc 28 10       addr         pass1_1028_bc7e
    1028:0afe 14 b5 28 10       addr         pass1_1028_b514
    1028:0b02 2a be 28 10       addr         pass1_1028_be2a
    1028:0b06 16 bf 28 10       addr         FUN_1028_bf16
    1028:0b0a 1a bf 28 10       addr         FUN_1028_bf1a
    1028:0b0e 1e bf 28 10       addr         FUN_1028_bf1e
    1028:0b12 9e be 28 10       addr         pass1_1028_be9e
    1028:0b16 22 bf 28 10       addr         pass1_1028_bf22
    1028:0b1a f0 bb 28 10       addr         pass1_1028_bbf0
    1028:0b1e 02 bc 28 10       addr         pass1_1028_bc02
    1028:0b22 a8 b5 28 10       addr         pass1_1028_b5a8
    1028:0b26 ca b5 28 10       addr         pass1_1028_b5ca
    1028:0b2a e6 b4 28 10       addr         FUN_1028_b4e6
    1028:0b2e ec b4 28 10       addr         FUN_1028_b4ec
    1028:0b32 6e b4 28 10       addr         pass1_1028_b46e
    1028:0b36 4a c6 28 10       addr         pass1_1028_c64a
    1028:0b3a 22 c5 28 10       addr         pass1_1028_c522
    1028:0b3e d2 ce 28 10       addr         pass1_1028_ced2

### 1030

- 1030:10b0
- 1030:1120 -> pass1_1030_1120
- 1030:11a6 -> pass1_1030_117a

    1030:11a6 7a 11 30 10       addr         pass1_1030_117a

- 1030:1624

    1030:1624 fe 15 30 10       addr         pass1_1030_15fe

- 1030:17ba

    1030:17ba 94 17 30 10       addr         pass1_1030_1794
    1030:17be 7a 17 30 10       addr         pass1_1030_177a
    1030:17c2 8e 17 30 10       addr         FUN_1030_178e
    1030:17c6 1a 4f 00 10       addr         pass1_1000_4f1a
    1030:17ca 1a 4f 00 10       addr         pass1_1000_4f1a

- 1030:1a16

    1030:1a16 f0 19 30 10       addr         pass1_1030_19f0
    1030:1a1a 7a 17 30 10       addr         pass1_1030_177a
    1030:1a1e 8e 17 30 10       addr         FUN_1030_178e
    1030:1a22 1a 4f 00 10       addr         pass1_1000_4f1a
    1030:1a26 1a 4f 00 10       addr         pass1_1000_4f1a
    1030:1a2a 72 19 30 10       addr         pass1_1030_1972
    1030:1a2e f0 18 30 10       addr         pass1_1030_18f0

- 1030:1cbc

    1030:1cbc 96 1c 30 10       addr         pass1_1030_1c96
    1030:1cc0 7a 17 30 10       addr         pass1_1030_177a
    1030:1cc4 8e 17 30 10       addr         FUN_1030_178e
    1030:1cc8 9c 1a 30 10       addr         pass1_1030_1a9c
    1030:1ccc 18 1b 30 10       addr         file_1030_1b18
    1030:1cd0 e2 1b 30 10       addr         pass1_1030_1be2
    1030:1cd4 f0 18 30 10       addr         pass1_1030_18f0

- 1030:2044

    1030:2044 1e 20 30 10       addr         pass1_1030_201e
    1030:2048 bc 1d 30 10       addr         pass1_1030_1dbc
    1030:204c fc 1d 30 10       addr         pass1_1030_1dfc
    1030:2050 96 1e 30 10       addr         pass1_1030_1e96
    1030:2054 aa 1d 30 10       addr         pass1_1030_1daa
    1030:2058 ee 1e 30 10       addr         pass1_1030_1eee
    1030:205c 16 1f 30 10       addr         pass1_1030_1f16
    1030:2060 6c 1f 30 10       addr         FUN_1030_1f6c
    1030:2064 70 1f 30 10       addr         FUN_1030_1f70

- 1030:293c

    1030:293c 16 29 30 10       addr         pass1_1030_2916
    1030:2940 7a 17 30 10       addr         pass1_1030_177a
    1030:2944 8e 17 30 10       addr         FUN_1030_178e
    1030:2948 7a 22 30 10       addr         pass1_1030_227a
    1030:294c 2e 23 30 10       addr         pass1_1030_232e
    1030:2950 72 19 30 10       addr         pass1_1030_1972
    1030:2954 f0 18 30 10       addr         pass1_1030_18f0

- 1030:3130

    1030:3130 0a 31 30 10       addr         pass1_1030_310a
    1030:3134 7a 17 30 10       addr         pass1_1030_177a
    1030:3138 8e 17 30 10       addr         FUN_1030_178e
    1030:313c ca 2a 30 10       addr         pass1_1030_2aca
    1030:3140 8a 2c 30 10       addr         pass1_1030_2c8a
    1030:3144 58 30 30 10       addr         pass1_1030_3058
    1030:3148 f0 18 30 10       addr         pass1_1030_18f0

- 1030:3af2

    1030:3af2 c6 3a 30 10       addr         pass1_1030_3ac6

- 1030:55ee
- 1030:55fe -> pass1_1030_5596

    1030:55ee c2 55 30 10       addr         pass1_1030_55c2
    1030:55f2 f4 53 30 10       addr         pass1_1030_53f4
    1030:55f6 8a 53 30 10       addr         pass1_1030_538a
    1030:55fa f8 54 30 10       addr         pass1_1030_54f8
    1030:55fe 96 55 30 10       addr         pass1_1030_5596
    1030:5602 60 52 30 10       addr         pass1_1030_5260
    1030:5606 28 d2 28 10       addr         FUN_1028_d228
    1030:560a 90 52 30 10       addr         pass1_1030_5290

- 1030:5bd0

    1030:5bd0 aa 5b 30 10       void *       pass1_1030_5baa
    1030:5bd4 7a 17 30 10       void *       pass1_1030_177a
    1030:5bd8 8e 17 30 10       void *       FUN_1030_178e
    1030:5bdc f6 56 30 10       void *       pass1_1030_56f6
    1030:5be0 1e 58 30 10       void *       file_1030_581e
    1030:5be4 72 19 30 10       void *       pass1_1030_1972
    1030:5be8 f0 18 30 10       void *       pass1_1030_18f0

- 1030:613e

    1030:613e 18 61 30 10       addr         pass1_1030_6118
    1030:6142 7a 17 30 10       addr         pass1_1030_177a
    1030:6146 8e 17 30 10       addr         FUN_1030_178e
    1030:614a be 5d 30 10       addr         pass1_1030_5dbe
    1030:614e 70 5e 30 10       addr         file_1030_5e70
    1030:6152 f6 5f 30 10       addr         pass1_1030_5ff6
    1030:6156 f0 18 30 10       addr         pass1_1030_18f0

- 1030:8114

    1030:8114 ee 80 30 10       addr         pass1_1030_80ee
    1030:8118 7a 17 30 10       addr         pass1_1030_177a
    1030:811c 8e 17 30 10       addr         FUN_1030_178e
    1030:8120 18 74 30 10       addr         pass1_1030_7418
    1030:8124 8c 77 30 10       addr         file_1030_778c

- 1030:8e38

    1030:8e38 12 8e 30 10       addr         pass1_1030_8e12

- 1030:9788 -> INVALID
- 1030:9ec8

    1030:9ec8 9c 9e 30 10       addr         pass1_1030_9e9c

- 1030:b932

    1030:b932 0c b9 30 10       addr         pass1_1030_b90c

- 1030:bc0c

    1030:bc0c e6 bb 30 10       addr         pass1_1030_bbe6
    1030:bc10 7a 17 30 10       addr         pass1_1030_177a
    1030:bc14 8e 17 30 10       addr         FUN_1030_178e
    1030:bc18 82 b2 28 10       addr         FUN_1028_b282
    1030:bc1c c8 b2 28 10       addr         pass1_1028_b2c8
    1030:bc20 7e b2 28 10       addr         FUN_1028_b27e

- 1030:bc96

    1030:bc96 70 bc 30 10       addr         pass1_1030_bc70
    1030:bc9a 7a 17 30 10       addr         pass1_1030_177a
    1030:bc9e 8e 17 30 10       addr         FUN_1030_178e
    1030:bca2 82 b2 28 10       addr         FUN_1028_b282
    1030:bca6 c8 b2 28 10       addr         pass1_1028_b2c8
    1030:bcaa 6c bc 30 10       addr         FUN_1030_bc6c

- 1030:c006

    1030:c006 e0 bf 30 10       addr         pass1_1030_bfe0
    1030:c00a 56 bb 28 10       addr         pass1_1028_bb56
    1030:c00e 8e 17 30 10       addr         FUN_1030_178e
    1030:c012 ec b5 28 10       addr         write_to_file_1028_b5ec
    1030:c016 1a b8 28 10       addr         file_1028_b81a
    1030:c01a 1c bc 28 10       addr         pass1_1028_bc1c
    1030:c01e 38 bd 28 10       addr         pass1_1028_bd38
    1030:c022 90 bc 28 10       addr         pass1_1028_bc90
    1030:c026 7e bc 28 10       addr         pass1_1028_bc7e
    1030:c02a 14 b5 28 10       addr         pass1_1028_b514
    1030:c02e 2a be 28 10       addr         pass1_1028_be2a
    1030:c032 16 bf 28 10       addr         FUN_1028_bf16
    1030:c036 6e bf 30 10       addr         pass1_1030_bf6e
    1030:c03a 1e bf 28 10       addr         FUN_1028_bf1e
    1030:c03e 9e be 28 10       addr         pass1_1028_be9e
    1030:c042 80 be 30 10       addr         pass1_1030_be80
    1030:c046 f0 bb 28 10       addr         pass1_1028_bbf0
    1030:c04a 02 bc 28 10       addr         pass1_1028_bc02
    1030:c04e a8 b5 28 10       addr         pass1_1028_b5a8
    1030:c052 ca b5 28 10       addr         pass1_1028_b5ca
    1030:c056 e6 b4 28 10       addr         FUN_1028_b4e6
    1030:c05a ec b4 28 10       addr         FUN_1028_b4ec
    1030:c05e 6e b4 28 10       addr         pass1_1028_b46e
    1030:c062 4a c6 28 10       addr         pass1_1028_c64a
    1030:c066 22 c5 28 10       addr         pass1_1028_c522
    1030:c06a d2 ce 28 10       addr         pass1_1028_ced2

- 1030:c68e

    1030:c68e 68 c6 30 10       addr         pass1_1030_c668
    1030:c692 56 bb 28 10       addr         pass1_1028_bb56
    1030:c696 8e 17 30 10       addr         FUN_1030_178e
    1030:c69a 30 c2 30 10       addr         pass1_1030_c230
    1030:c69e 9c c2 30 10       addr         pass1_1030_c29c
    1030:c6a2 1c bc 28 10       addr         pass1_1028_bc1c
    1030:c6a6 fa c2 30 10       addr         pass1_1030_c2fa
    1030:c6aa 2e c5 30 10       addr         pass1_1030_c52e
    1030:c6ae 7e bc 28 10       addr         pass1_1028_bc7e
    1030:c6b2 14 b5 28 10       addr         pass1_1028_b514
    1030:c6b6 2a be 28 10       addr         pass1_1028_be2a
    1030:c6ba 16 bf 28 10       addr         FUN_1028_bf16
    1030:c6be 0e c1 30 10       addr         pass1_1030_c10e
    1030:c6c2 2e c1 30 10       addr         pass1_1030_c12e
    1030:c6c6 b2 c1 30 10       addr         pass1_1030_c1b2
    1030:c6ca 22 bf 28 10       addr         pass1_1028_bf22
    1030:c6ce f0 bb 28 10       addr         pass1_1028_bbf0
    1030:c6d2 02 bc 28 10       addr         pass1_1028_bc02
    1030:c6d6 a8 b5 28 10       addr         pass1_1028_b5a8
    1030:c6da ca b5 28 10       addr         pass1_1028_b5ca
    1030:c6de ec c0 30 10       addr         pass1_1030_c0ec
    1030:c6e2 d2 c0 30 10       addr         pass1_1030_c0d2
    1030:c6e6 6e b4 28 10       addr         pass1_1028_b46e
    1030:c6ea 4a c6 28 10       addr         pass1_1028_c64a
    1030:c6ee 22 c5 28 10       addr         pass1_1028_c522
    1030:c6f2 d2 ce 28 10       addr         pass1_1028_ced2

- 1030:c940

    1030:c940 1a c9 30 10       addr         pass1_1030_c91a
    1030:c944 56 bb 28 10       addr         pass1_1028_bb56
    1030:c948 da c8 30 10       addr         pass1_1030_c8da
    1030:c94c 4e c8 30 10       addr         pass1_1030_c84e
    1030:c950 94 c8 30 10       addr         pass1_1030_c894
    1030:c954 1c bc 28 10       addr         pass1_1028_bc1c
    1030:c958 38 bd 28 10       addr         pass1_1028_bd38
    1030:c95c 90 bc 28 10       addr         pass1_1028_bc90
    1030:c960 7e bc 28 10       addr         pass1_1028_bc7e
    1030:c964 14 b5 28 10       addr         pass1_1028_b514
    1030:c968 6c c7 30 10       addr         pass1_1030_c76c
    1030:c96c 16 bf 28 10       addr         FUN_1028_bf16
    1030:c970 b0 c7 30 10       addr         pass1_1030_c7b0
    1030:c974 1e bf 28 10       addr         FUN_1028_bf1e
    1030:c978 9e be 28 10       addr         pass1_1028_be9e
    1030:c97c 22 bf 28 10       addr         pass1_1028_bf22
    1030:c980 f0 bb 28 10       addr         pass1_1028_bbf0
    1030:c984 02 bc 28 10       addr         pass1_1028_bc02
    1030:c988 a8 b5 28 10       addr         pass1_1028_b5a8
    1030:c98c ca b5 28 10       addr         pass1_1028_b5ca
    1030:c990 e6 b4 28 10       addr         FUN_1028_b4e6
    1030:c994 ec b4 28 10       addr         FUN_1028_b4ec
    1030:c998 4e c7 30 10       addr         pass1_1030_c74e
    1030:c99c 4a c6 28 10       addr         pass1_1028_c64a
    1030:c9a0 22 c5 28 10       addr         pass1_1028_c522
    1030:c9a4 d2 ce 28 10       addr         pass1_1028_ced2

- 1030:d88e

    1030:d88e 68 d8 30 10       addr         pass1_1030_d868
    1030:d892 56 bb 28 10       addr         pass1_1028_bb56
    1030:d896 8e 17 30 10       addr         FUN_1030_178e
    1030:d89a 1c d6 30 10       addr         pass1_1030_d61c
    1030:d89e 2e d7 30 10       addr         pass1_1030_d72e
    1030:d8a2 1c bc 28 10       addr         pass1_1028_bc1c
    1030:d8a6 38 bd 28 10       addr         pass1_1028_bd38
    1030:d8aa 90 bc 28 10       addr         pass1_1028_bc90
    1030:d8ae 7e bc 28 10       addr         pass1_1028_bc7e
    1030:d8b2 14 b5 28 10       addr         pass1_1028_b514
    1030:d8b6 2a be 28 10       addr         pass1_1028_be2a
    1030:d8ba 16 bf 28 10       addr         FUN_1028_bf16
    1030:d8be 6c d2 30 10       addr         pass1_1030_d26c
    1030:d8c2 1e bf 28 10       addr         FUN_1028_bf1e
    1030:d8c6 c2 ca 30 10       addr         pass1_1030_cac2
    1030:d8ca 22 bf 28 10       addr         pass1_1028_bf22
    1030:d8ce f0 bb 28 10       addr         pass1_1028_bbf0
    1030:d8d2 30 d2 30 10       addr         pass1_1030_d230
    1030:d8d6 a8 b5 28 10       addr         pass1_1028_b5a8
    1030:d8da ca b5 28 10       addr         pass1_1028_b5ca
    1030:d8de e6 b4 28 10       addr         FUN_1028_b4e6
    1030:d8e2 ec b4 28 10       addr         FUN_1028_b4ec
    1030:d8e6 26 ca 30 10       addr         pass1_1030_ca26
    1030:d8ea 4a c6 28 10       addr         pass1_1028_c64a
    1030:d8ee 22 c5 28 10       addr         pass1_1028_c522
    1030:d8f2 d2 ce 28 10       addr         pass1_1028_ced2

- 1030:dc2e

    1030:dc2e 08 dc 30 10       addr         pass1_1030_dc08
    1030:dc32 56 bb 28 10       addr         pass1_1028_bb56
    1030:dc36 8e 17 30 10       addr         FUN_1030_178e
    1030:dc3a ec b5 28 10       addr         write_to_file_1028_b5ec
    1030:dc3e 1a b8 28 10       addr         file_1028_b81a
    1030:dc42 1c bc 28 10       addr         pass1_1028_bc1c
    1030:dc46 38 bd 28 10       addr         pass1_1028_bd38
    1030:dc4a 90 bc 28 10       addr         pass1_1028_bc90
    1030:dc4e 7e bc 28 10       addr         pass1_1028_bc7e
    1030:dc52 14 b5 28 10       addr         pass1_1028_b514
    1030:dc56 78 db 30 10       addr         pass1_1030_db78
    1030:dc5a 16 bf 28 10       addr         FUN_1028_bf16
    1030:dc5e 1a bf 28 10       addr         FUN_1028_bf1a
    1030:dc62 1e bf 28 10       addr         FUN_1028_bf1e
    1030:dc66 94 d9 30 10       addr         pass1_1030_d994
    1030:dc6a 22 bf 28 10       addr         pass1_1028_bf22
    1030:dc6e f0 bb 28 10       addr         pass1_1028_bbf0
    1030:dc72 02 bc 28 10       addr         pass1_1028_bc02
    1030:dc76 a8 b5 28 10       addr         pass1_1028_b5a8
    1030:dc7a ca b5 28 10       addr         pass1_1028_b5ca
    1030:dc7e e6 b4 28 10       addr         FUN_1028_b4e6
    1030:dc82 ec b4 28 10       addr         FUN_1028_b4ec
    1030:dc86 6e b4 28 10       addr         pass1_1028_b46e
    1030:dc8a 72 db 30 10       addr         pass1_1030_db72
    1030:dc8e 92 db 30 10       addr         pass1_1030_db92
    1030:dc92 02 dc 30 10       addr         pass1_1030_dc02

- 1030:e036

    1030:e036 10 e0 30 10       addr         pass1_1030_e010
    1030:e03a 56 bb 28 10       addr         pass1_1028_bb56
    1030:e03e 8e 17 30 10       addr         FUN_1030_178e
    1030:e042 7c de 30 10       addr         pass1_1030_de7c
    1030:e046 c4 de 30 10       addr         pass1_1030_dec4
    1030:e04a 1c bc 28 10       addr         pass1_1028_bc1c
    1030:e04e 0c df 30 10       addr         pass1_1030_df0c
    1030:e052 90 bc 28 10       addr         pass1_1028_bc90
    1030:e056 7e bc 28 10       addr         pass1_1028_bc7e
    1030:e05a 14 b5 28 10       addr         pass1_1028_b514
    1030:e05e 2a be 28 10       addr         pass1_1028_be2a
    1030:e062 16 bf 28 10       addr         FUN_1028_bf16
    1030:e066 1a bf 28 10       addr         FUN_1028_bf1a
    1030:e06a 1e bf 28 10       addr         FUN_1028_bf1e
    1030:e06e 9e be 28 10       addr         pass1_1028_be9e
    1030:e072 22 bf 28 10       addr         pass1_1028_bf22
    1030:e076 f0 bb 28 10       addr         pass1_1028_bbf0
    1030:e07a 02 bc 28 10       addr         pass1_1028_bc02
    1030:e07e a8 b5 28 10       addr         pass1_1028_b5a8
    1030:e082 ca b5 28 10       addr         pass1_1028_b5ca
    1030:e086 e6 b4 28 10       addr         FUN_1028_b4e6
    1030:e08a ec b4 28 10       addr         FUN_1028_b4ec
    1030:e08e 6e b4 28 10       addr         pass1_1028_b46e
    1030:e092 4a c6 28 10       addr         pass1_1028_c64a
    1030:e096 22 c5 28 10       addr         pass1_1028_c522
    1030:e09a d2 ce 28 10       addr         pass1_1028_ced2

- 1030:e2ae

    1030:e2ae 82 e2 30 10       addr         pass1_1030_e282
    1030:e2b2 d4 e0 30 10       addr         pass1_1030_e0d4
    1030:e2b6 28 d2 28 10       addr         FUN_1028_d228
    1030:e2ba f4 e1 30 10       addr         pass1_1030_e1f4

- 1030:e4ea

    1030:e4ea be e4 30 10       addr         pass1_1030_e4be
    1030:e4ee 00 e3 30 10       addr         pass1_1030_e300
    1030:e4f2 28 e3 30 10       addr         pass1_1030_e328
    1030:e4f6 4e e3 30 10       addr         pass1_1030_e34e

- 1030:e62e

    1030:e62e 02 e6 30 10       addr         pass1_1030_e602
    1030:e632 46 e5 30 10       addr         pass1_1030_e546
    1030:e636 40 e5 30 10       addr         pass1_1030_e540
    1030:e63a 64 e5 30 10       addr         pass1_1030_e564

- 1030:e78a

    1030:e78a 5e e7 30 10       addr         pass1_1030_e75e
    1030:e78e 7c e6 30 10       addr         pass1_1030_e67c
    1030:e792 28 d2 28 10       addr         FUN_1028_d228
    1030:e796 c2 e6 30 10       addr         pass1_1030_e6c2

- 1030:e890

    1030:e890 64 e8 30 10       addr         pass1_1030_e864
    1030:e894 d0 e7 30 10       addr         pass1_1030_e7d0
    1030:e898 28 d2 28 10       addr         FUN_1028_d228
    1030:e89c d6 e7 30 10       addr         pass1_1030_e7d6

- 1030:eb40

    1030:eb40 14 eb 30 10       addr         pass1_1030_eb14
    1030:eb44 f8 e8 30 10       addr         pass1_1030_e8f8
    1030:eb48 28 d2 28 10       addr         FUN_1028_d228
    1030:eb4c 8e e9 30 10       addr         pass1_1030_e98e

- 1030:ecb2

    1030:ecb2 86 ec 30 10       addr         pass1_1030_ec86
    1030:ecb6 86 eb 30 10       addr         pass1_1030_eb86
    1030:ecba 28 d2 28 10       addr         FUN_1028_d228
    1030:ecbe f8 eb 30 10       addr         pass1_1030_ebf8

### 1038

NONE

### 1040

- 1040:d8c4

    1040:d8c4 9e d8 40 10       addr         pass1_1040_d89e
    1040:d8c8 10 3a 08 10       addr         pass1_1008_3a10
    1040:d8cc 30 b2 40 10       addr         unk_win_ui_op_1040_b230
    1040:d8d0 16 b3 40 10       addr         pass1_1040_b316
    1040:d8d4 ac d2 40 10       addr         win_ui_op_1040_d2ac
    1040:d8d8 26 b7 40 10       addr         destroy_window_1040_b726
    1040:d8dc 56 7f 40 10       addr         post_win_msg_1040_7f56
    1040:d8e0 b2 7b 40 10       addr         draw_op_1040_7bb2
    1040:d8e4 1c 7f 40 10       addr         post_win_msg_1040_7f1c
    1040:d8e8 48 88 38 10       addr         pass1_1038_8848
    1040:d8ec 86 7f 40 10       addr         menu_ui_op_1040_7f86
    1040:d8f0 0c 80 40 10       addr         win_help_1040_800c
    1040:d8f4 54 80 40 10       addr         pass1_1040_8054
    1040:d8f8 72 b3 40 10       addr         win_ui_op_1040_b372
    1040:d8fc 58 81 40 10       addr         unk_win_ui_op_1040_8158
    1040:d900 b6 81 40 10       addr         check_dialog_msg_1040_81b6
    1040:d904 fe 81 40 10       addr         set_sys_modal_window_1040_81fe
    1040:d908 ea 60 18 10       addr         FUN_1018_60ea
    1040:d90c 4a 82 40 10       addr         pass1_1040_824a
    1040:d910 66 82 40 10       addr         FUN_1040_8266
    1040:d914 9c d2 40 10       addr         pass1_1040_d29c
    1040:d918 ee 60 18 10       addr         FUN_1018_60ee
    1040:d91c f4 60 18 10       addr         FUN_1018_60f4
    1040:d920 c8 b4 40 10       addr         pass1_1040_b4c8
    1040:d924 42 88 38 10       addr         FUN_1038_8842
    1040:d928 fe 60 18 10       addr         FUN_1018_60fe
    1040:d92c 7e 80 40 10       addr         pass1_1040_807e
    1040:d930 3c b4 40 10       addr         show_win_1040_b43c
    1040:d934 5e b4 40 10       addr         pass1_1040_b45e
    1040:d938 7c b1 40 10       addr         pass1_1040_b17c
    1040:d93c 6e d7 40 10       addr         pass1_1040_d76e

- 1040:d07c

    1040:d07c 56 d0 40 10       addr         pass1_1040_d056
    1040:d080 10 3a 08 10       addr         pass1_1008_3a10
    1040:d084 30 b2 40 10       addr         unk_win_ui_op_1040_b230
    1040:d088 16 b3 40 10       addr         pass1_1040_b316
    1040:d08c 8c cc 40 10       addr         pass1_1040_cc8c
    1040:d090 a6 ca 40 10       addr         pass1_1040_caa6
    1040:d094 56 7f 40 10       addr         post_win_msg_1040_7f56
    1040:d098 b2 7b 40 10       addr         draw_op_1040_7bb2
    1040:d09c 1c 7f 40 10       addr         post_win_msg_1040_7f1c
    1040:d0a0 48 88 38 10       addr         pass1_1038_8848
    1040:d0a4 86 7f 40 10       addr         menu_ui_op_1040_7f86
    1040:d0a8 0c 80 40 10       addr         win_help_1040_800c
    1040:d0ac 54 80 40 10       addr         pass1_1040_8054
    1040:d0b0 72 b3 40 10       addr         win_ui_op_1040_b372
    1040:d0b4 58 81 40 10       addr         unk_win_ui_op_1040_8158
    1040:d0b8 b6 81 40 10       addr         check_dialog_msg_1040_81b6
    1040:d0bc fe 81 40 10       addr         set_sys_modal_window_1040_81fe
    1040:d0c0 ea 60 18 10       addr         FUN_1018_60ea
    1040:d0c4 4a 82 40 10       addr         pass1_1040_824a
    1040:d0c8 66 82 40 10       addr         FUN_1040_8266
    1040:d0cc 66 cc 40 10       addr         pass1_1040_cc66
    1040:d0d0 ac cd 40 10       addr         pass1_1040_cdac
    1040:d0d4 f4 60 18 10       addr         FUN_1018_60f4
    1040:d0d8 c8 b4 40 10       addr         pass1_1040_b4c8
    1040:d0dc 42 88 38 10       addr         FUN_1038_8842
    1040:d0e0 fe 60 18 10       addr         FUN_1018_60fe
    1040:d0e4 7e 80 40 10       addr         pass1_1040_807e
    1040:d0e8 3c b4 40 10       addr         show_win_1040_b43c
    1040:d0ec 5e b4 40 10       addr         pass1_1040_b45e
    1040:d0f0 7c b1 40 10       addr         pass1_1040_b17c
    1040:d0f4 ce ca 40 10       addr         win_ui_op_1040_cace

### 1048

NONE

### 1050

NONE
