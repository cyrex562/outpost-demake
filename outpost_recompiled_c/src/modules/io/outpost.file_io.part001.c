/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 1/9
 * Original lines (combined): 53-17280
 * Boundaries: top-level declarations/definitions only
 */

string s__C_FILE_INFO=_1050_5f5c;
u16 g_MaxFileHandles;
pointer g_FileModeDefault;
pointer g_ActiveFileCount;
string s_savePath_1050_147c;
string s_Unsupported_FileStructType_in_Op_1050_01ca;



// Validates if a 4-byte read access is allowed at the given offset and segment. Returns
// true if access is valid.

bool __stdcall16far validate_ptr_read_access(void *ptr)
{
  int iVar1;
  int in_stack_00000006;
  
  iVar1 = validate_segment_access(0x0,0x4,(int)ptr,in_stack_00000006);
  return iVar1 == 0x0;
}



void * __cdecl16far handle_open_file_wrapper(char *filename,char *mode)
{
  void *pvVar1;
  byte in_stack_00000008;
  
  pvVar1 = handle_open_file_internal(filename,mode,in_stack_00000008);
  return pvVar1;
}



// Targeted Scan Finding: Far Pointer
// References global file management pointers in segment 1050:
// - PTR_DAT_1050_6062
// - PTR_DAT_1050_5fee (global file count).

void * __cdecl16far
handle_init_from_mode_string(char *filename,char *mode,byte flags,void *handle_ptr)
{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined1 in_stack_00000009;
  byte in_stack_0000000c;
  undefined2 *in_stack_0000000e;
  undefined1 uStack_e;
  byte bStack_8;
  undefined1 uStack_6;
  
  _flags = (byte *)CONCAT22(handle_ptr,(byte *)CONCAT11(in_stack_00000009,flags));
  bStack_8 = (byte)g_FileModeDefault;
  bVar3 = false;
  bVar1 = *_flags;
  if (bVar1 == 0x77)
  {
    uVar4 = 0x301;
  }
  else
  {
    if (0x77 < bVar1)
    {
      return NULL;
    }
    if (bVar1 != 0x61)
    {
      if (bVar1 != 0x72)
      {
        return NULL;
      }
      uVar4 = 0x0;
      uStack_6 = 0x1;
      goto LAB_1000_2d6c;
    }
    uVar4 = 0x109;
  }
  uStack_6 = 0x2;
LAB_1000_2d6c:
  bVar2 = true;
LAB_1000_2d71:
  _flags = (byte *)CONCAT22(handle_ptr,_flags + 0x1);
  if ((*_flags == 0x0) || (!bVar2))
  {
    uVar4 = dos_open_create_file_internal_lowlevel_routine
                      ((u16)filename,(u16)mode,uVar4,in_stack_0000000c,0x1a4);
    if ((int)uVar4 < 0x0)
    {
      return NULL;
    }
    g_ActiveFileCount = g_ActiveFileCount + 0x1;
    *(undefined1 *)(in_stack_0000000e + 0x5) = uStack_6;
    in_stack_0000000e[0x1] = 0x0;
    *in_stack_0000000e = 0x0;
    in_stack_0000000e[0x4] = 0x0;
    in_stack_0000000e[0x3] = 0x0;
    uStack_e = (undefined1)uVar4;
    *(undefined1 *)((int)in_stack_0000000e + 0xb) = uStack_e;
    *(byte *)(in_stack_0000000e + 0x78) = bStack_8;
    in_stack_0000000e[0x2] = 0x0;
    in_stack_0000000e[0x7a] = 0x0;
    return in_stack_0000000e;
  }
  bVar1 = *_flags;
  if (bVar1 == 0x74)
  {
    if ((uVar4 & 0xc000) == 0x0)
    {
      uVar4 |= 0x4000;
      goto LAB_1000_2d71;
    }
  }
  else
  {
    if (0x74 < bVar1) goto LAB_1000_2da4;
    if (bVar1 == 0x2b)
    {
      if ((uVar4 & 0x2) != 0x0) goto LAB_1000_2da4;
      uVar4 = uVar4 & 0xfffe | 0x2;
      uStack_6 = 0x80;
      goto LAB_1000_2d71;
    }
    if (bVar1 == 0x62)
    {
      if ((uVar4 & 0xc000) == 0x0)
      {
        uVar4 |= 0x8000;
        goto LAB_1000_2d71;
      }
    }
    else
    {
      if (bVar1 != 0x63)
      {
        if ((bVar1 != 0x6e) || (bVar3)) goto LAB_1000_2da4;
        bVar3 = true;
        bStack_8 &= 0xbf;
        goto LAB_1000_2d71;
      }
      if (!bVar3)
      {
        bVar3 = true;
        bStack_8 |= 0x40;
        goto LAB_1000_2d71;
      }
    }
  }
LAB_1000_2da4:
  bVar2 = false;
  goto LAB_1000_2d71;
}



void fmt_print_dispatch_logic(char *param_1)
{
  char cVar1;
  byte bVar2;
  u16 *puVar3;
  u16 *unaff_BP;
  u16 unaff_SS;
  u16 uStack_20c4;
  u16 uStack_20c2;
  u16 local_14;
  int iStack_c;
  char cStack_9;
  u8 local_8;
  
  puVar3 = (u16 *)&stack0xfffe;
  cVar1 = '\a';
  do
  {
    unaff_BP = unaff_BP + -0x1;
    puVar3 = puVar3 + -0x1;
    *puVar3 = *unaff_BP;
    cVar1 += -0x1;
  } while ('\0' < cVar1);
  fmt_write_buffered_string(local_14);
  if (((local_8 & 0x8) != 0x0) && ((local_8 & 0x4) == 0x0))
  {
    fmt_write_padding_chars(uStack_20c4,'0');
  }
  fmt_write_buffered_string(uStack_20c2);
  if ((local_8 & 0x4) != 0x0)
  {
    fmt_write_padding_chars(uStack_20c4,' ');
  }
  if ((*param_1 != '\0') && (-0x1 < iStack_c))
  {
    bVar2 = *param_1 - 0x20;
    if (bVar2 < 0x59)
    {
      bVar2 = *(byte *)(ulong)(bVar2 + 0x5ffe) & 0xf;
    }
    else
    {
      bVar2 = 0x0;
    }
                // WARNING: Could not recover jumptable at 0x1000310e. Too many branches
                // WARNING: Treating indirect jump as call
    (*(code *)*(undefined2 *)
               ((int)(void **)&PTR_s_add16_wav_1050_2bdc_1050_30a4 +
               (char)(*(byte *)(ulong)((byte)(bVar2 * '\b' + cStack_9) + 0x5ffe) >> 0x4)
               * 0x2))();
    return;
  }
  far_noop_stub();
  return;
}



void __cdecl16near fmt_write_buffered_string(u16 param_1)
{
  u8 *puVar1;
  u16 uVar2;
  int unaff_BP;
  u8 *unaff_DI;
  uint uVar3;
  u16 unaff_ES;
  u16 unaff_SS;
  
  if (param_1 != 0x0)
  {
    *(int *)(unaff_BP + -0xa) = *(int *)(unaff_BP + -0xa) + param_1;
    uVar3 = 0x0;
    do
    {
      puVar1 = unaff_DI;
      unaff_DI = unaff_DI + 0x1;
      uVar2 = fmt_write_buffered_char(*puVar1);
      uVar3 |= uVar2;
      param_1 -= 0x1;
    } while (param_1 != 0x0);
    if (uVar3 != 0x0)
    {
      *(undefined2 *)(unaff_BP + -0xa) = 0xffff;
    }
  }
  return;
}



void __cdecl16near fmt_write_padding_chars(u16 param_1,u8 param_2)
{
  u16 uVar1;
  int unaff_BP;
  uint uVar2;
  u16 unaff_SS;
  
  if (param_1 != 0x0)
  {
    *(int *)(unaff_BP + -0xa) = *(int *)(unaff_BP + -0xa) + param_1;
    uVar2 = 0x0;
    do
    {
      uVar1 = fmt_write_buffered_char(param_2);
      uVar2 |= uVar1;
      param_1 -= 0x1;
    } while (param_1 != 0x0);
    if (uVar2 != 0x0)
    {
      *(undefined2 *)(unaff_BP + -0xa) = 0xffff;
    }
  }
  return;
}



// Decomposes a full file path into its components: drive, directory, filename, and
// extension. Optimized for far pointers and handles 16-bit segment boundaries. Supports
// both forward and backslashes.

void __cdecl16far
splitpath_far_optimized_with_segments
          (char *full_path,char *drive,char *dir,char *fname,char *ext)
{
  char *pcVar1;
  int iVar2;
  int in_stack_0000000e;
  char *pcStack0010;
  int iStack0012;
  char *pcStack0014;
  int iStack0016;
  undefined4 uStack_12;
  char *pcStack_c;
  int iStack_a;
  char *pcStack_8;
  int iStack_6;
  
  iStack_a = 0x0;
  pcStack_c = NULL;
  if ((*_full_path == '\0') || (full_path[0x1] != ':'))
  {
    if (fname != NULL || dir != NULL)
    {
      *_dir = '\0';
    }
  }
  else
  {
    if (fname != NULL || dir != NULL)
    {
      *_dir = *_full_path;
      dir[0x1] = full_path[0x1];
      dir[0x2] = '\0';
    }
    _full_path = (char *)CONCAT22(drive,full_path + 0x2);
  }
  iStack_6 = 0x0;
  pcStack_8 = NULL;
  uStack_12 = _full_path;
  while( true )
  {
    iVar2 = (int)((ulong)uStack_12 >> 0x10);
    pcVar1 = (char *)uStack_12;
    if (*uStack_12 == '\0') break;
    if ((*uStack_12 == '/') || (*uStack_12 == '\\'))
    {
      pcStack_8 = pcVar1 + 0x1;
      iStack_6 = iVar2;
    }
    else if (*uStack_12 == '.')
    {
      pcStack_c = pcVar1;
      iStack_a = iVar2;
    }
    uStack_12 = (char *)CONCAT22(iVar2,pcVar1 + 0x1);
  }
  if (iStack_6 == 0x0 && pcStack_8 == NULL)
  {
    if (in_stack_0000000e != 0x0 || ext != NULL)
    {
      *_ext = '\0';
    }
  }
  else
  {
    if (in_stack_0000000e != 0x0 || ext != NULL)
    {
      iVar2 = (int)pcStack_8 - (int)full_path;
      if (0xff < iVar2)
      {
        iVar2 = 0xff;
      }
      strncpy_fixed_optimized((char *)CONCAT22(in_stack_0000000e,ext),_full_path,iVar2);
      ext[iVar2] = '\0';
    }
    _full_path = (char *)CONCAT22(iStack_6,pcStack_8);
  }
  if ((iStack_a != 0x0 || pcStack_c != NULL) && (full_path <= pcStack_c))
  {
    if (iStack0012 != 0x0 || pcStack0010 != NULL)
    {
      iVar2 = (int)pcStack_c - (int)full_path;
      if (0xff < iVar2)
      {
        iVar2 = 0xff;
      }
      strncpy_fixed_optimized(_pcStack0010,_full_path,iVar2);
      pcStack0010[iVar2] = '\0';
    }
    if (iStack0016 == 0x0 && pcStack0014 == NULL)
    {
      return;
    }
    iVar2 = (int)pcVar1 - (int)pcStack_c;
    if (0xff < iVar2)
    {
      iVar2 = 0xff;
    }
    strncpy_fixed_optimized(_pcStack0014,(char *)CONCAT22(iStack_a,pcStack_c),iVar2);
    pcStack0014[iVar2] = '\0';
    return;
  }
  if (iStack0012 != 0x0 || pcStack0010 != NULL)
  {
    iVar2 = (int)pcVar1 - (int)full_path;
    if (0xff < iVar2)
    {
      iVar2 = 0xff;
    }
    strncpy_fixed_optimized(_pcStack0010,_full_path,iVar2);
    pcStack0010[iVar2] = '\0';
  }
  if (iStack0016 != 0x0 || pcStack0014 != NULL)
  {
    *_pcStack0014 = '\0';
  }
  return;
}



// Optimized `memset` for far pointers. It attempts word-aligned writes for speed and
// handles 64KB segment boundaries by splitting the fill operation.

void * __cdecl16far memset_far_optimized_aligned(void *dest,int value,int count)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint in_stack_0000000a;
  
  if (in_stack_0000000a != 0x0)
  {
    uVar3 = -(int)dest;
    uVar5 = 0x0;
    uVar4 = in_stack_0000000a;
    if (uVar3 != 0x0)
    {
      uVar4 = (uVar3 - in_stack_0000000a & -(uint)(uVar3 < in_stack_0000000a)) +
              in_stack_0000000a;
      uVar5 = in_stack_0000000a - uVar4;
    }
    uVar2 = (undefined1)count;
    puVar6 = dest;
    for (uVar3 = uVar4 >> 0x1; uVar3 != 0x0; uVar3 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = puVar6 + 0x1;
      *puVar1 = CONCAT11(uVar2,uVar2);
    }
    for (uVar4 = (uint)((uVar4 & 0x1) != 0x0); uVar4 != 0x0; uVar4 -= 0x1)
    {
      puVar1 = puVar6;
      puVar6 = (undefined2 *)((int)puVar6 + 0x1);
      *(undefined1 *)puVar1 = uVar2;
    }
    if (uVar5 != 0x0)
    {
      for (uVar4 = uVar5 >> 0x1; uVar4 != 0x0; uVar4 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = puVar6 + 0x1;
        *puVar1 = CONCAT11(uVar2,uVar2);
      }
      for (uVar5 = (uint)((uVar5 & 0x1) != 0x0); uVar5 != 0x0; uVar5 -= 0x1)
      {
        puVar1 = puVar6;
        puVar6 = (undefined2 *)((int)puVar6 + 0x1);
        *(undefined1 *)puVar1 = uVar2;
      }
    }
  }
  return dest;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a file selection dialog for saving the game. It uses a wait cursor, handles
// the dialog result, and shows either a success or error message box depending on
// whether the save operation succeeded.

void __stdcall16far UI_Prompt_Save_Game_Dialog(void *parent_window,char *filename)
{
  int iVar1;
  char *pcVar2;
  char *ptr;
  char *message_text;
  char *unaff_SS;
  undefined1 local_c [0x6];
  HCURSOR16 HStack_6;
  HCURSOR16 HStack_4;
  
  HStack_4 = LoadCursor16((void *)0x7f02,0x0);
  HStack_6 = SetCursor16(HStack_4);
  file_context_init_logic(local_c,unaff_SS);
  iVar1 = file_context_perform_save_sequence_logic(local_c);
  if (iVar1 == 0x0)
  {
    SetCursor16(HStack_6);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),
                        (int)g_LastFileErrorMsgID);
    ptr = strdup_allocate(pcVar2);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x10);
    MessageBox16(0x10,pcVar2,message_text,(ushort)ptr);
  }
  else
  {
    *(undefined2 *)((int)_p_SimulatorGlobalState + 0x8) = 0x0;
    SetCursor16(HStack_6);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x6d3);
    ptr = strdup_allocate(pcVar2);
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x0);
    MessageBox16(0x40,pcVar2,message_text,(ushort)ptr);
  }
  free_if_not_null(ptr);
  file_context_cleanup_logic(local_c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads a bitmap file (.BMP) using low-level DOS I/O.
// Initializes Palette_Object within File_Object.
// References global heap context pointers in segment 1050:5f2c.

int __stdcall16far File_Object_Load_Bitmap_File_Logic(void *this)
{
  HFILE16 HVar1;
  int32_t iVar2;
  int iVar3;
  void *this_00;
  undefined2 uVar4;
  int read_result_hi;
  void *pvVar5;
  uint uVar6;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe4;
  int local_18;
  undefined4 uStack_16;
  int32_t iStack_a;
  void *pvStack_8;
  undefined4 uStack_6;
  
  if (*(long *)((int)this + 0x8) != 0x0)
  {
    if (*(int *)((int)this + 0x1e) != 0x0)
    {
      return 0x1;
    }
    if (*(int *)((int)this + 0xc) == -0x1)
    {
      HVar1 = _lopen16(0x0,(char *)CONCAT22(in_stack_0000ffe4,
                                            (char *)((ulong)*(undefined4 *)
                                                             ((int)this + 0x8) >> 0x10))
                      );
      *(HFILE16 *)((int)this + 0xc) = HVar1;
      if (HVar1 == 0xffff)
      {
        return 0x0;
      }
    }
    uStack_6 = 0x0;
    iVar2 = _hread16(0xe,(int *)CONCAT22(unaff_SS,&local_18),
                     *(HFILE16 *)((int)this + 0xc));
    if ((iVar2 == 0xe) && (read_result_hi == 0x0))
    {
      uStack_6 = uStack_16;
      if (local_18 == 0x4d42)
      {
        iVar2 = _llseek16(0x0,0x0,0x0);
        pvVar5 = heap_alloc_with_flags
                           (0x1,(int)uStack_6,(int)((ulong)uStack_6 >> 0x10),
                            (int)_g_AllocatedBlock_Offset,
                            (int)((ulong)_g_AllocatedBlock_Offset >> 0x10));
        *(int32_t *)((int)this + 0x1a) = iVar2;
        *(undefined2 *)((int)this + 0x1c) = pvVar5;
        if (pvVar5 == NULL && *(int *)((int)this + 0x1a) == 0x0)
        {
          return 0x0;
        }
        iStack_a = _hread16((int32_t)uStack_6,(void *)*(undefined4 *)((int)this + 0x1a),
                            *(HFILE16 *)((int)this + 0xc));
        pvStack_8 = pvVar5;
        _lclose16(*(HFILE16 *)((int)this + 0xc));
        *(undefined2 *)((int)this + 0xc) = 0xffff;
        *(undefined2 *)((int)this + 0x1e) = 0x1;
        *(undefined4 *)((int)this + 0xe) = *(undefined4 *)((int)this + 0x1a);
        iVar3 = (int)*(undefined4 *)((int)this + 0x1a);
        uVar4 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10);
        *(undefined4 *)((int)this + 0x12) = CONCAT22(uVar4,iVar3 + 0xe);
        *(undefined4 *)((int)this + 0x16) = CONCAT22(uVar4,iVar3 + 0x436);
        this_00 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x14));
        uVar6 = (uint)pvVar5 | (uint)this_00;
        if (uVar6 == 0x0)
        {
          *(undefined4 *)((int)this + 0x4) = 0x0;
        }
        else
        {
          pvVar5 = Palette_Object_ctor_with_buffer_init
                             (this_00,pvVar5,
                              (int)*(undefined4 *)((int)this + 0x12) + 0x28);
          *(undefined2 *)((int)this + 0x4) = pvVar5;
          *(uint *)((int)this + 0x6) = uVar6;
        }
        if (*(int *)((int)this + 0x22) != 0x0)
        {
          Palette_Object_Init_From_Global_Theme_Logic(this);
          return 0x1;
        }
        return 0x1;
      }
    }
    _lclose16(*(HFILE16 *)((int)this + 0xc));
    *(undefined2 *)((int)this + 0xc) = 0xffff;
  }
  return 0x0;
}



void * __stdcall16far
File_Object_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  File_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Cleans up a file operation context. It ensures the associated file handle is closed
// and frees the duplicated filename string.

void __stdcall16far file_context_cleanup_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  free_if_not_null((void *)(void *)*_this);
  return;
}



// Orchestrates the entire game saving sequence. It creates the file, writes the header,
// saves individual component chunks (UI, etc.), saves the core simulation state
// (planets, structures), and finally verifies the file integrity.

int __stdcall16far file_context_perform_save_sequence_logic(void *this)
{
  int iVar1;
  int unaff_SS;
  void *in_stack_00000006;
  undefined1 local_4 [0x2];
  
  g_LastFileErrorMsgID = NULL;
  iVar1 = file_context_create_and_write_header_logic(this);
  if (iVar1 != 0x0)
  {
    set_u16_logic(local_4,unaff_SS);
    iVar1 = file_context_save_component_chunks_logic(this,in_stack_00000006);
    if ((iVar1 != 0x0) &&
       (iVar1 = file_context_save_core_state_logic(this,in_stack_00000006), iVar1 != 0x0
       ))
    {
      iVar1 = file_context_close_handle_logic(this);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0x1;
    }
    _lclose16(*(HFILE16 *)((int)this + 0x4));
  }
  return 0x0;
}



// Orchestrates the entire game loading sequence. It opens the file, verifies the
// header, loads component chunks, loads the core simulation state, and performs final
// integrity checks.

int __stdcall16far file_context_perform_load_sequence_logic(void *this)
{
  int iVar1;
  int unaff_SS;
  void *in_stack_00000006;
  undefined1 local_4 [0x2];
  
  g_LastFileErrorMsgID = NULL;
  iVar1 = file_context_open_and_verify_header_logic(this);
  if (iVar1 != 0x0)
  {
    set_u16_logic(local_4,unaff_SS);
    iVar1 = file_context_load_component_chunks_logic(this,in_stack_00000006);
    if ((iVar1 != 0x0) &&
       (iVar1 = file_context_load_core_state_logic(this,in_stack_00000006), iVar1 != 0x0
       ))
    {
      iVar1 = file_context_close_handle_logic(this);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0x1;
    }
    _lclose16(*(HFILE16 *)((int)this + 0x4));
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global subsystem pointers in segment 1050:
// - PTR_DAT_1050_5748 (Global State)
// - PTR_DAT_1050_5736 (Object Library)
// - PTR_DAT_1050_65e2 (World Context)
// - PTR_DAT_1050_5a64 (Turn Manager)
// Performs indirect call through [PTR_DAT_1050_5748] vtable.

int __stdcall16far file_context_save_core_state_logic(void *this,void *handle_ptr)
{
  int iVar1;
  u16 uVar2;
  u16 unaff_SS;
  void *in_stack_00000008;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = (undefined4 *)*_p_SimulatorGlobalState;
  uStack_a = *puStack_6;
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_e));
  iVar1 = Save_File_Write_Footer_Marker_Alternative_d7a0
                    ((u16)uStack_a,(u16)((ulong)uStack_a >> 0x10),in_stack_00000008);
  if (iVar1 != 0x0)
  {
    iVar1 = Simulator_Object_Library_Save_to_File_Logic_5c1a
                      (_p_SimulatorObjectLibrary,in_stack_00000008);
    if (iVar1 != 0x0)
    {
      uVar2 = Simulator_Context_Save_to_File_Comprehensive_dce2
                        ((u32 *)_p_SimulatorWorldContext,in_stack_00000008);
      if (uVar2 != 0x0)
      {
        uVar2 = Simulator_Turn_Manager_Save_to_File_Logic_7b20
                          (_p_SimulatorTurnManager,in_stack_00000008);
        if (uVar2 != 0x0)
        {
          iVar1 = Save_File_Write_Footer_Marker_a644
                            ((u16)local_e,unaff_SS,in_stack_00000008);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global state and subsystem pointers in segment 1050 during game load.
// Performs indirect call through [PTR_DAT_1050_5748] vtable.

int __stdcall16far file_context_load_core_state_logic(void *this,void *handle_ptr)
{
  int iVar1;
  u16 uVar2;
  undefined2 unaff_SS;
  long lVar3;
  void *pvVar4;
  void *in_stack_00000008;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = (undefined4 *)*_p_SimulatorGlobalState;
  uStack_a = *puStack_6;
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_e));
  iVar1 = Save_File_Validate_Footer_Logic_d7ba();
  if (iVar1 != 0x0)
  {
    iVar1 = Simulator_Object_Library_Load_from_File_Logic_5c52
                      (_p_SimulatorObjectLibrary,in_stack_00000008);
    if (iVar1 != 0x0)
    {
      lVar3 = Simulator_Context_Load_from_File_Comprehensive_def2
                        (_p_SimulatorWorldContext,in_stack_00000008);
      if ((int)lVar3 != 0x0)
      {
        pvVar4 = Simulator_Complex_Collection_Load_from_File_7c02
                           (_p_SimulatorTurnManager,in_stack_00000008);
        if ((int)((ulong)pvVar4 >> 0x10) != 0x0)
        {
          uVar2 = Save_File_Validate_Footer_and_Header_a65e
                            ((undefined1 *)CONCAT22(unaff_SS,local_e),in_stack_00000008)
          ;
          if (uVar2 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Writes formatted file header using buffer at 1050:65A0.
// Updates global error state at 1050:0310.

int __stdcall16far file_context_create_and_write_header_logic(void *this)
{
  HFILE16 HVar1;
  uint count;
  uint16_t uVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  HVar1 = _lcreat16(0x0,(char *)CONCAT22(unaff_SI,(char *)((ulong)*_this >> 0x10)));
  *(HFILE16 *)((int)this + 0x4) = HVar1;
  if (HVar1 == 0xffff)
  {
    g_LastFileErrorMsgID = (undefined *)0x6cf;
  }
  else
  {
    PTR_DAT_1050_0000_1050_0312 = (undefined *)&p_LastAllocatedBlock;
    sprintf_wrapper(0x65a0,0x1050,(void *)PTR_s_SC_03d_1050_0314_1050_031c,
                    (int)((ulong)PTR_s_SC_03d_1050_0314_1050_031c >> 0x10),0x4);
    count = strlen_get_length((char *)0x105065a0);
    iVar3 = (int)count >> 0xf;
    uVar2 = _hwrite16(count,(char *)0x105065a0,*(HFILE16 *)((int)this + 0x4));
    if ((uVar2 == count) && (iVar3 == (int)count >> 0xf))
    {
      return 0x1;
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// Opens an existing save file and verifies that its header matches the expected
// application format.

int __stdcall16far file_context_open_and_verify_header_logic(void *this)
{
  HFILE16 HVar1;
  int iVar2;
  undefined2 unaff_BP;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  HVar1 = _lopen16(0x0,(char *)CONCAT22(unaff_BP,(char *)((ulong)*_this >> 0x10)));
  *(HFILE16 *)((int)this + 0x4) = HVar1;
  if (HVar1 == 0xffff)
  {
    g_LastFileErrorMsgID = (undefined *)0x6cf;
  }
  else
  {
    iVar2 = file_context_read_and_parse_version_logic();
    if (iVar2 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}
