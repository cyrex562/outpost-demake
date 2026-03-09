/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 4/19
 * Original lines (combined): 12650-22696
 * Boundaries: top-level declarations/definitions only
 */

#include "core/outpost_common.h"
#include "core/outpost_platform.h"

/* --- Externs from other translation units --- */
extern pointer p_GlobalResourceManager;   /* global resource manager object */
extern pointer p_Pool_Type2_Component;    /* pool type-2 component manager */
extern pointer p_DebugFlags;              /* debug output flags pointer */
extern pointer p_LogHandle;               /* debug log file handle */
extern pointer p_SaveVersion;             /* save-file version pointer (1050:0312) */
extern pointer p_LastAllocatedBlock;      /* last allocated heap block head pointer */
extern pointer p_UI_Color1;              /* UI highlight color/pen (1050:0368) */
extern pointer p_UI_Color2;              /* UI shadow color (1050:0364) */

/* --- Forward declarations --- */
void __cdecl16far log_debug_message_v(char *fmt, ...);
char * __cdecl16far strdup_allocate(char *str);


// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Invokes Windows 16-bit Common Dialog APIs:
// - GetOpenFilename16
// - GetSaveFilename16
// References string resources via Resource Manager (segment 1050:14cc) with IDs 0x579,
// 0x74c, 0x74d, 0x74e, 0x3fd, 0x57b.
// References bitmap resource: tile2.bmp (offset 1050:1538).

// Displays a file open or save dialog and returns the selected path.
// The mode parameter determines if it's an Open (1) or Save (2) dialog.

char * __stdcall16far UI_Prompt_File_Dialog_Get_Path(void *parent_window, int mode)
{
    static char path_buffer[260];
    char initial_dir[260];
    char filter[256];
    char title[128];
    char def_ext[16];
    char file_title[256];
    
    path_buffer[0] = '\0';
    initial_dir[0] = '\0';
    
    // 1. Get Game Config object (Resource ID 2).
    void *config = (void *)Resource_Manager_Get_Resource_by_ID_Logic(p_GlobalResourceManager, 2);
    if (config == NULL) return NULL;

    // 2. Determine initial path/filename.
    char *saved_path = *(char **)((char *)config + 0x1A);
    if (saved_path != NULL)
    {
        strcpy_optimized(initial_dir, saved_path);
    }
    else
    {
        // Try getting path from an internal list if no direct path is saved.
        void *path_list = *(void **)((char *)config + 0x64);
        if (path_list != NULL)
        {
            unsigned char iterator[8];
            init_long_pair(iterator, (long)path_list);
            void *item = (void *)get_next_list_item(iterator);
            if (item != NULL)
            {
                char *item_path = *(char **)((char *)item + 4);
                if (item_path != NULL)
                {
                    strcpy_optimized(initial_dir, item_path);
                }
            }
        }
    }

    // 3. Get current working directory.
    char current_dir[258];
    dos_get_cwd_on_current_drive_wrapper_far(current_dir);
    int len = strlen_get_length(current_dir);
    if (len > 0 && current_dir[len - 1] == '\\')
    {
        current_dir[len - 1] = '\0';
    }

    len = strlen_get_length(initial_dir);
    if (len > 0 && initial_dir[len - 1] == '\\')
    {
        initial_dir[len - 1] = '\0';
    }

    // 4. Load default extension.
    char *ext_res = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x579);
    if (ext_res != NULL)
    {
        strcpy_optimized(def_ext, ext_res);
        // Strip leading dot if present.
        for (int i = strlen_get_length(def_ext); i >= 0; i--)
        {
            if (def_ext[i] == '.')
            {
                strcpy_optimized(def_ext, &def_ext[i + 1]);
                break;
            }
        }
    }

    // 5. Load and format filter string.
    char *filter_res = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x74C);
    if (filter_res != NULL)
    {
        strcpy_optimized(filter, filter_res);
        // Win16 filter strings in resources often use the last character as a delimiter
        // to be replaced with '\0' (since resource strings can't easily contain nulls).
        int flen = strlen_get_length(filter);
        if (flen > 0)
        {
            char delimiter = filter[flen - 1];
            for (int i = 0; i < flen; i++)
            {
                if (filter[i] == delimiter) filter[i] = '\0';
            }
        }
    }

    // 6. Setup OPENFILENAME16 structure.
    OPENFILENAME16 ofn;
    memset_far(&ofn, 0, sizeof(ofn));
    ofn.lStructSize = sizeof(ofn);
    if (parent_window != NULL)
    {
        ofn.hwndOwner = *(HWND16 *)((char *)parent_window + 8);
    }
    ofn.lpstrFilter = filter;
    ofn.lpstrFile = path_buffer;
    ofn.nMaxFile = sizeof(path_buffer);
    ofn.lpstrFileTitle = file_title;
    ofn.nMaxFileTitle = sizeof(file_title);
    ofn.lpstrInitialDir = current_dir;
    ofn.lpstrDefExt = def_ext;

    BOOL16 success = 0;
    if (mode == 1) // Open
    {
        ofn.Flags = OFN_HIDEREADONLY | OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
        char *title_res = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x74D);
        if (title_res != NULL) strcpy_optimized(title, title_res);
        ofn.lpstrTitle = title;
        success = GetOpenFilename16(&ofn);
    }
    else if (mode == 2) // Save
    {
        ofn.Flags = OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY;
        char *title_res = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x74E);
        if (title_res != NULL) strcpy_optimized(title, title_res);
        ofn.lpstrTitle = title;
        success = GetSaveFilename16(&ofn);
    }
    else
    {
        log_debug_message_v("Invalid file dialog mode", 0x1CA);
        return NULL;
    }

    if (success)
    {
        // Check if path is valid (nFileOffset < 0 usually means an error or cancelled in some contexts, 
        // but here it seems to trigger an error message).
        if ((int16_t)ofn.nFileOffset < 0)
        {
            char *err_msg = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x3FD);
            char *err_title = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, 0x57B);
            MessageBox16(ofn.hwndOwner, err_msg, err_title, 0x10); // MB_ICONHAND
            return NULL;
        }
        else
        {
            // Update last used path in config.
            if (path_buffer[0] != '\0')
            {
                UI_Component_Set_String_at_Offset_1A_Logic(config, path_buffer);
            }
            return path_buffer;
        }
    }

    return NULL;
}



// Blits a source bitmap onto the current bitmap with transparency handling. Pixels with
// value 0xFF (-1) are skipped. Iterates through scanlines and manages 16-bit segment
// boundaries.

void __stdcall16far Bitmap_Object_Blit_Transparent_Logic(void *this_ptr, void *pos, void *src_bitmap)
{
    if (this_ptr == NULL || src_bitmap == NULL || pos == NULL) return;

    int dest_x, dest_y;
    unpack_word_pair(pos, &dest_y, &dest_x);

    // Initialize source bitmap if necessary.
    void *src_meta = get_with_lazy_init(src_bitmap);
    if (src_meta == NULL) return;

    // Get source dimensions.
    // Assuming metadata structure based on earlier analysis: +4 width, +8 height.
    int width = *(int *)((char *)src_meta + 4);
    int height = *(int *)((char *)src_meta + 8);

    for (int i = 0; i < height; i++)
    {
        // Get start addresses for this scanline in both source and destination.
        unsigned char *d_ptr = (unsigned char *)Bitmap_Object_Get_Pixel_Address(this_ptr, dest_x, dest_y + i);
        unsigned char *s_ptr = (unsigned char *)Bitmap_Object_Get_Pixel_Address(src_bitmap, 0, i);

        if (d_ptr == NULL || s_ptr == NULL) continue;

        for (int j = 0; j < width; j++)
        {
            if (s_ptr[j] != 0xFF)
            {
                d_ptr[j] = s_ptr[j];
            }
        }
    }
}



// Targeted Scan Finding: Vtable
// Initializes File_Object vtable to 1008:4C4C (replaces base 1008:389A).

void * __stdcall16far File_Object_ctor(void *this_ptr, int mode, char *filename)
{
    if (this_ptr == NULL) return NULL;
    char *p = (char *)this_ptr;

    // Base constructor logic? Sets initial vtable and zeros.
    *(void **)p = (void *)0x1008389a;
    *(long *)(p + 4) = 0;
    *(long *)(p + 8) = 0;
    *(short *)(p + 0x0C) = -1;
    *(long *)(p + 0x0E) = 0;
    *(long *)(p + 0x12) = 0;
    *(long *)(p + 0x16) = 0;
    *(long *)(p + 0x1A) = 0;
    *(short *)(p + 0x1E) = 0;
    
    // Set field 0x22 (mode).
    *(short *)(p + 0x22) = (short)mode;
    
    // Set actual vtable.
    *(void **)p = (void *)0x10084c4c;
    
    // Duplicate filename.
    *(char **)(p + 8) = strdup_allocate(filename);
    
    return this_ptr;
}



// Targeted Scan Finding: Vtable
// Initializes Base_Graphic_Object vtable to 1008:389A.

void * __stdcall16far Base_Graphic_Object_ctor(void *this_ptr)
{
    if (this_ptr == NULL) return NULL;
    *(void **)this_ptr = (void *)0x1008389a;
    *(short *)((char *)this_ptr + 4) = 0;
    
    // Some objects use a specialized vtable.
    *(void **)this_ptr = (void *)0x1008573a;
    
    return this_ptr;
}



// Targeted Scan Finding: Vtable
// Initializes object vtable to 1008:5BC4 (base 1008:389A).

void * __stdcall16far construct_object_with_vtable(void *this_ptr, u16 param_2)
{
    if (this_ptr == NULL) return NULL;
    char *p = (char *)this_ptr;
    
    *(void **)p = (void *)0x1008389a;
    *(long *)(p + 4) = 0;
    *(short *)(p + 8) = 0;
    *(short *)(p + 0x0A) = 1;
    
    *(void **)p = (void *)0x10085bc4;
    return this_ptr;
}



// Targeted Scan Finding: Vtable
// Reverts vtable sequence during destruction: 1008:5BC4 -> 1008:389A.

void __stdcall16far UI_Control_Sub_dtor_logic(void *this_ptr)
{
    if (this_ptr == NULL) return;
    *(void **)this_ptr = (void *)0x10085bc4;
    
    linked_list_clear_and_destroy_items(this_ptr, 0);
    
    *(void **)this_ptr = (void *)0x1008389a;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Add_Window_to_List(void *parent, void *window)
{
    void *node = validate_and_get_block(p_Pool_Type2_Component);
    if (node == NULL) return 0;

    char *p = (char *)node;
    *(void **)p = (void *)0x1008389a;
    *(long *)(p + 4) = 0;
    *(long *)(p + 8) = 0;
    *(void **)p = (void *)0x10085bc0;
    
    *(void **)(p + 8) = window;
    
    char *par = (char *)parent;
    *(void **)(p + 4) = *(void **)(par + 4);
    *(void **)(par + 4) = node;
    *(int *)(par + 8) += 1;
    
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Append_Window_to_List(void *parent, void *window)
{
    char *par = (char *)parent;
    if (*(int *)(par + 8) == 0)
    {
        // Virtual call at index 1?
        void **vtable = *(void ***)parent;
        typedef u16 (__stdcall16far *AddFunc)(void *this, void *window);
        AddFunc add = (AddFunc)vtable[1];
        return add(parent, window);
    }
    
    void *node = validate_and_get_block(p_Pool_Type2_Component);
    if (node == NULL) return 0;

    char *p = (char *)node;
    *(void **)p = (void *)0x1008389a;
    *(long *)(p + 4) = 0;
    *(long *)(p + 8) = 0;
    *(void **)p = (void *)0x10085bc0;
    
    *(void **)(p + 8) = window;
    
    char *current = *(char **)(par + 4);
    while (*(char **)(current + 4) != NULL)
    {
        current = *(char **)(current + 4);
    }
    *(void **)(current + 4) = node;
    *(int *)(par + 8) += 1;
    
    return 1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string resource manager at 1050:14CC.

char * __cdecl16far res_concatenate_strings_by_id(int first_id, ...)
{
    va_list args;
    va_start(args, first_id);
    
    char *buffer = (char *)allocate_memory(0x1000);
    if (buffer == NULL) {
        va_end(args);
        return NULL;
    }
    
    char *str = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, first_id);
    strcpy_optimized(buffer, str);
    
    int next_id;
    while ((next_id = va_arg(args, int)) != 0)
    {
        str = Resource_Manager_LoadString_to_Internal_Buffer(p_GlobalResourceManager, next_id);
        strcat_append(buffer, str);
    }
    
    va_end(args);
    return buffer;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References debug logging flags and objects in segment 1050:
// - PTR_DAT_1050_02ec
// - _PTR_DAT_1050_02f0 (Log handle)
// Outputs debug string suffix at far pointer 1050:02FA.

void __cdecl16far log_debug_message_v(char *fmt, ...)
{
    if (p_DebugFlags == NULL) return;
    
    static int log_init = -1;
    if (log_init == -1)
    {
        char *mono = getenv_wrapper_far_ptr_search("MONO2");
        log_init = (mono != NULL);
    }
    
    if (log_init != 0)
    {
        char buffer[256];
        va_list args;
        va_start(args, fmt);
        wvsprintf16(buffer, fmt, args);
        va_end(args);
        
        OutputDebugString(buffer);
        OutputDebugString("\r\n");
        
        if (p_LogHandle != NULL)
        {
            handle_open_resource_locked(p_LogHandle, 0x2FD, 0x1050, buffer);
            handle_flush_specific(p_LogHandle);
        }
    }
}



char * __cdecl16far strdup_allocate(char *str)
{
    if (str == NULL) return NULL;
    
    int len = strlen_get_length(str);
    char *dup = (char *)allocate_memory(len + 1);
    if (dup != NULL)
    {
        strcpy_optimized(dup, str);
        return dup;
    }
    return NULL;
}



// Targeted Scan Finding: Far Pointer / Resource
// Initializes global save version pointer at 1050:0312.
// Uses 1050:1050 as scratch for sprintf.
// References string literal "SC%03d" (1050:031C) for file header formatting.

void * __stdcall16far file_context_init_logic(void *this_ptr, char *filename)
{
    if (this_ptr == NULL) return NULL;
    char *p = (char *)this_ptr;

    *(char **)p = NULL;
    *(short *)(p + 4) = -1;

    /* Set global save-version pointer (1050:0312) to the start of the allocator
     * block list. In Win16 this stored a far pointer; flat: direct address. */
    p_SaveVersion = (void *)&p_LastAllocatedBlock;

    /* Write the game's save-file header tag "SC004" into the global scratch
     * buffer (1050:65A0) so it is available for version verification.
     * The version constant 4 is the current save format revision. */
    extern char g_SaveVersionScratch[]; /* global at 1050:65A0 */
    sprintf_wrapper(g_SaveVersionScratch, "SC%03d", 4);

    *(char **)p = strdup_allocate(filename);
    return this_ptr;
}



// Targeted Scan Finding: Far Pointer
// References static null-string buffer at 1050:149A if input is NULL.

int __stdcall16far file_context_write_string_with_terminator_logic(void *this_ptr, char *str)
{
    if (this_ptr == NULL) return 0;

    if (str != NULL)
    {
        int len = strlen_get_length(str);
        return file_write_check((long)this_ptr, str, (void *)len);
    }

    /* Write empty/null string: Win16 data seg had a static zero-length string
     * at 1050:149A; in flat model this is the same null terminator constant. */
    static const char s_empty_string_1050_149a[1] = { '\0' };
    return file_write_check((long)this_ptr, (void *)s_empty_string_1050_149a, (void *)0);
}



// Reads a null-terminated string from the save file into the provided buffer. It reads
// characters one by one from the file context until a null character is encountered.

void __stdcall16far file_context_read_null_terminated_string_logic(void *this_ptr, char *buffer)
{
    if (this_ptr == NULL || buffer == NULL) return;

    HFILE16 hf = (HFILE16)*(short *)this_ptr;
    char c;
    int i = 0;
    while (1)
    {
        /* Win16 _hread(hf, buffer, count) — args were swapped in decompiler output */
        _hread16(hf, &c, 1);
        buffer[i++] = c;
        if (c == '\0') break;
    }
}



// Verifies a marker string in the file buffer against a generated template. Returns 1
// if the strings match, 0 otherwise. Used internally by
// `file_context_find_footer_marker_logic`.

int __stdcall16far file_context_verify_marker_string_logic(void *buffer)
{
    /* The decompiler emitted sprintf_wrapper(marker, "FOOTER") to build the
     * comparison string. Since there are no format args, this is a plain copy;
     * use the literal directly to avoid the unnecessary call. */
    return (strncmp_fixed_optimized((char *)buffer, "FOOTER", 6) == 0) ? 1 : 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global UI color/pen pointers in segment 1050:
// - PTR_PTR_1050_0368
// - DAT_1050_0364.

void __cdecl16far UI_SpinControl_PaintHandler(HWND16 hwnd, void *param_2)
{
    PAINTSTRUCT16 ps;
    HDC16 hdc = BeginPaint16(hwnd, &ps);

    HPEN16 hpen_hi  = CreatePen16(0, 1, (COLORREF)p_UI_Color1); /* highlight pen */
    HPEN16 hpen_shd = CreatePen16(0, 1, (COLORREF)p_UI_Color2); /* shadow pen */
    HBRUSH16 hbr    = CreateSolidBrush16((COLORREF)p_UI_Color2);

    RECT16 rect;
    GetClientRect16(hwnd, &rect);

    int width  = rect.right  - rect.left;
    int height = rect.bottom - rect.top;
    int midX   = width  / 2;
    int midY   = height / 2;

    /* Save old GDI objects. */
    HGDIOBJ16 oldBrush = SelectObject16(hdc, GetStockObject16(NULL_BRUSH));
    HGDIOBJ16 oldPen   = SelectObject16(hdc, GetStockObject16(BLACK_PEN));

    /* Draw outer border and vertical centre divider. */
    Rectangle16(hdc, rect.left, rect.top, rect.right, rect.bottom);
    MoveTo16(hdc, midX, 0);
    LineTo16(hdc, midX, height);

    /* Determine pressed-state pixel offset (bit 2 of param_2 flags byte). */
    char *p    = (char *)param_2;
    int offset = (*(byte *)(p + 4) & 0x04) ? 1 : 0;

    /* --- Left (decrement) arrow: triangle pointing left in left half --- */
    POINT16 arrow_left[3];
    arrow_left[0].x = 2 + offset;            arrow_left[0].y = midY + offset;         /* tip */
    arrow_left[1].x = midX - 2 + offset;     arrow_left[1].y = height/4 + offset;    /* top-right */
    arrow_left[2].x = midX - 2 + offset;     arrow_left[2].y = 3*height/4 + offset;  /* bot-right */

    SelectObject16(hdc, hpen_hi);
    MoveTo16(hdc, arrow_left[2].x, arrow_left[2].y);
    LineTo16(hdc, arrow_left[0].x, arrow_left[0].y);
    LineTo16(hdc, arrow_left[1].x, arrow_left[1].y);
    SelectObject16(hdc, hpen_shd);
    SelectObject16(hdc, hbr);
    Polygon16(hdc, arrow_left, 3);

    /* --- Right (increment) arrow: triangle pointing right in right half --- */
    POINT16 arrow_right[3];
    arrow_right[0].x = width  - 2 + offset;  arrow_right[0].y = midY + offset;       /* tip */
    arrow_right[1].x = midX + 2 + offset;    arrow_right[1].y = height/4 + offset;  /* top-left */
    arrow_right[2].x = midX + 2 + offset;    arrow_right[2].y = 3*height/4 + offset;/* bot-left */

    SelectObject16(hdc, hpen_hi);
    MoveTo16(hdc, arrow_right[2].x, arrow_right[2].y);
    LineTo16(hdc, arrow_right[0].x, arrow_right[0].y);
    LineTo16(hdc, arrow_right[1].x, arrow_right[1].y);
    SelectObject16(hdc, hpen_shd);
    SelectObject16(hdc, hbr);
    Polygon16(hdc, arrow_right, 3);

    /* Restore and release GDI resources. */
    SelectObject16(hdc, oldBrush);
    SelectObject16(hdc, oldPen);

    DeleteObject16(hpen_hi);
    DeleteObject16(hpen_shd);
    DeleteObject16(hbr);

    EndPaint16(hwnd, &ps);
}



void __stdcall16far
UI_Control_Set_Window_Text_from_Offset_A_Logic(void *this_ptr, char *text)
{
    if (this_ptr == NULL) return;
    char *p = (char *)this_ptr;
    strcpy_optimized(p + 0x0A, text);
    SetWindowText16(*(HWND16 *)(p + 0x08), p + 0x0A);
}



uint __stdcall16far
UI_Control_Get_Window_Text_to_Offset_A_Logic(void *this_ptr, char *buffer, int max_len)
{
    if (this_ptr == NULL) return 0;
    char *p = (char *)this_ptr;
    
    int len = strlen_get_length(p + 0x0A);
    if (max_len < len) len = max_len - 1;
    
    strncpy_fixed_optimized(buffer, p + 0x0A, len);
    buffer[len] = '\0';
    return len;
}



// Replaces a string within a sub-component (offset 0x16). It frees the old string,
// duplicates the new one, and then nullifies the sub-component pointer.

void __stdcall16far
UI_Element_Subclass_Replace_String_at_Offset_16(void *this_ptr, char *str)
{
    if (this_ptr == NULL) return;
    char *p = (char *)this_ptr;
    
    void *sub = *(void **)(p + 0x16);
    if (sub != NULL)
    {
        free_if_not_null(*(void **)((char *)sub + 4));
        char *dup = strdup_allocate(str);
        *(char **)((char *)sub + 4) = dup;
        *(void **)(p + 0x16) = NULL;
    }
}



// Retrieves the filename string pointer from the UI element's sub-component at offset
// 0x16.

char * __stdcall16far UI_Element_Get_SubComponent_Filename_Logic(void *this_ptr)
{
    if (this_ptr == NULL) return NULL;
    char *p = (char *)this_ptr;
    
    void *sub = *(void **)(p + 0x16);
    if (sub != NULL)
    {
        return *(char **)((char *)sub + 4);
    }
    return NULL;
}



// Searches the linked list stored at offset 0xE of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_0E_by_String_Logic(void *this_ptr, char *search_name)
{
    if (this_ptr == NULL || search_name == NULL) return NULL;
    
    void *head = *(void **)((char *)this_ptr + 0x0E);
    unsigned char iterator[8];
    init_long_pair(iterator, (long)head);
    
    void *item;
    while ((item = (void *)get_next_list_item(iterator)) != NULL)
    {
        char *item_name = *(char **)((char *)item + 4);
        if (strcmp_case_sensitive((byte *)item_name, search_name) == 0)
        {
            return item;
        }
    }
    return NULL;
}
