/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 4/9
 * Original lines (combined): 33233-37330
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far UI_Global_Data_Deserialize_from_File_5e56(u32 param_1,void *param_2)
{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined2 in_DX;
  void *handle_wrapper;
  void *unaff_SS;
  char *buffer;
  u16 local_404;
  char local_402 [0x400];
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    pcVar2 = local_402;
    buffer = (char *)((ulong)param_2 >> 0x10);
    file_context_read_null_terminated_string_logic((void *)param_2,buffer);
    if (pcVar2 != NULL)
    {
      pcVar2 = strdup_allocate(local_402);
      handle_wrapper = (void *)(param_1 >> 0x10);
      iVar1 = (int)param_1;
      *(undefined2 *)(iVar1 + 0x68) = pcVar2;
      *(undefined2 *)(iVar1 + 0x6a) = in_DX;
      pcVar2 = local_402;
      file_context_read_null_terminated_string_logic((void *)param_2,buffer);
      if (pcVar2 != NULL)
      {
        pcVar2 = strdup_allocate(local_402);
        *(undefined2 *)(iVar1 + 0x6c) = pcVar2;
        *(undefined2 *)(iVar1 + 0x6e) = in_DX;
        iVar3 = file_read_check((long)param_2,&local_404,unaff_SS);
        if (iVar3 != 0x0)
        {
          g_ModeVersion_13AE = (undefined *)local_404;
          if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
          {
            return 0x1;
          }
          iVar1 = file_read_check((long)param_2,(void *)(iVar1 + 0x82),handle_wrapper);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Saves the current selection or state index (offset 0x20) into a backup field at 0x7C
// and resets the current state to 1. Sets a 'dirty' flag at 0x7E.

void __stdcall16far UI_Component_Save_State_to_Offset_7C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x7e) = 0x1;
  *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)((int)this + 0x20);
  *(undefined2 *)((int)this + 0x20) = 0x1;
  return;
}



// Writes comma-separated integer values (x4) from the object structure at offset 0x22
// back to "OUTPOST.INI" for a given index. Inverse of the read logic.

void __stdcall16far
switchD_1010:2ab5::Configuration_Manager_Write_Indexed_Values_Logic
          (void *this,int index)
{
  int in_stack_00000008;
  
  if ((((*(int *)((int)this + in_stack_00000008 * 0x8 + 0x22) != 0x0) ||
       (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x24) != 0x0)) ||
      (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x26) != 0x0)) ||
     (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x28) != 0x0))
  {
    sprintf_wrapper(*(undefined4 *)((int)this + 0xe),0x14ae,0x1050,
                    *(undefined4 *)((int)this + in_stack_00000008 * 0x8 + 0x22),
                    *(undefined4 *)((int)this + in_stack_00000008 * 0x8 + 0x26));
    WritePrivateProfileString16
              ((void *)*(undefined4 *)((int)this + 0xa),
               (void *)*(undefined4 *)((int)this + 0xe),
               ((void **)&PTR_s_unknown_1050_13fa_1050_1446)[in_stack_00000008],
               s_windows_1050_13b8);
  }
  return;
}



// Serializes Simulator_Settings to a file. Writes two data blocks (size 0x114 and 0x2A)
// and a 2-byte trailer. Sets error 0x6D0 on failure.

int __stdcall16far Simulator_Settings_Serialize_to_File_Logic(void *this,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  void *in_stack_00000008;
  undefined2 local_c [0x5];
  
  iVar1 = file_context_write_footer_marker_logic((void *)in_stack_00000008);
  if (iVar1 != 0x0)
  {
    iVar1 = file_write_check((long)in_stack_00000008,(void *)((int)this + 0xa),file_ctx)
    ;
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check((long)in_stack_00000008,(void *)((int)this + 0x11e),
                               file_ctx);
      if (iVar1 != 0x0)
      {
        local_c[0x0] = *(undefined2 *)((int)this + 0x148);
        iVar1 = file_write_check((long)in_stack_00000008,local_c,unaff_SS);
        if (iVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Object_Collection_Remap_and_Deserialize_68c6(u32 param_1,void *param_2)
{
  int iVar1;
  void *buffer;
  int iVar2;
  int iVar3;
  void *handle_wrapper;
  void *in_DX;
  void *pvVar4;
  void *unaff_SS;
  int arg2;
  u32 local_12;
  u32 local_e;
  u32 local_a;
  u16 local_6;
  u16 local_4;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
    return 0x0;
  }
  iVar1 = (int)param_1;
  handle_wrapper = (void *)(param_1 >> 0x10);
  iVar3 = (int)param_2;
  arg2 = (int)((ulong)param_2 >> 0x10);
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    buffer = allocate_memory(0x1020102);
    pvVar4 = in_DX;
    iVar2 = file_read_check((long)param_2,buffer,in_DX);
    if (iVar2 == 0x0) goto LAB_1010_692c;
    local_4 = 0x1;
    do
    {
      iVar2 = file_context_remap_sequence_id_by_version_logic(iVar3,arg2,local_4);
      *(undefined2 *)(iVar1 + iVar2 * 0x2 + 0xa) =
           *(undefined2 *)(local_4 * 0x2 + (int)buffer);
      local_4 += 0x1;
    } while (local_4 < 0x81);
    free_if_not_null(buffer);
    in_DX = pvVar4;
  }
  else
  {
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0xa),handle_wrapper);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    buffer = allocate_memory(0x2a002a);
    iVar2 = file_read_check((long)param_2,buffer,in_DX);
    if (iVar2 == 0x0)
    {
LAB_1010_692c:
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      free_if_not_null(buffer);
      return 0x0;
    }
    local_4 = 0x0;
    do
    {
      iVar2 = file_context_remap_id_by_version_logic(iVar3,arg2,local_4);
      *(undefined2 *)(iVar1 + iVar2 * 0x2 + 0x11e) =
           *(undefined2 *)(local_4 * 0x2 + (int)buffer);
      local_4 += 0x1;
    } while (local_4 < 0x15);
    free_if_not_null(buffer);
  }
  else
  {
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x11e),handle_wrapper);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  iVar2 = file_read_check((long)param_2,&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar3 = file_context_remap_sequence_id_by_version_logic(iVar3,arg2,local_6);
  *(int *)(iVar1 + 0x148) = iVar3;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core resource loading engine. Handles 4 types: 1) Load bitmap from file, 2) Extract
// sub-region from parent, 3) Load string/path, 4) Generic path lookup. References
// global manager at 1050:038C.

void * __stdcall16far Resource_Manager_Load_Resource_Object_Logic(void *this,int res_id)
{
  void *pvVar1;
  int in_DX;
  void *other;
  uint uVar2;
  int iVar3;
  undefined2 unaff_SI;
  int in_stack_00000008;
  char *local_2e [0x12];
  char *pcStack_a;
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  iVar3 = in_stack_00000008 * 0x10;
  if (*(int *)(iVar3 + 0x10) == 0x1)
  {
    pcStack_a = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
    if (((char *)*(int *)(iVar3 + 0x12) == pcStack_a) &&
       (*(int *)(iVar3 + 0x14) == in_DX))
    {
      Resource_Manager_Report_File_Error_Logic(this);
      return NULL;
    }
    other = File_Object_ctor();
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x1e));
    uVar2 = (uint)other | (uint)pvVar1;
    if (uVar2 == 0x0)
    {
      pvVar1 = NULL;
      uVar2 = 0x0;
    }
    else
    {
      pvVar1 = Bitmap_Object_ctor_from_other(pvVar1,other);
    }
    uStack_6 = (void *)CONCAT22(uVar2,pvVar1);
    File_Object_dtor(local_2e);
  }
  else
  {
    if (*(int *)(in_stack_00000008 * 0x10 + 0x10) == 0x2)
    {
      Resource_Manager_Switch_Active_Bitmap_Logic(this,res_id);
      if (*(long *)((int)this + 0x67c) == 0x0)
      {
        return NULL;
      }
      iVar3 = in_stack_00000008 * 0x10;
      local_2e[0x0] =
           Bitmap_Object_Copy_Region_To_New_Bitmap
                     ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                      CONCAT22(*(undefined2 *)(iVar3 + 0x1c),
                               *(undefined2 *)(iVar3 + 0x1e)),*(int *)(iVar3 + 0x1a),
                      *(int *)(iVar3 + 0x18));
    }
    else
    {
      iVar3 = in_stack_00000008 * 0x10;
      if (*(int *)(iVar3 + 0x10) == 0x3)
      {
        local_2e[0x0] = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
        if (((char *)*(int *)(iVar3 + 0x12) == local_2e[0x0]) &&
           (*(int *)(iVar3 + 0x14) == in_DX))
        {
          Resource_Manager_Report_File_Error_Logic(this);
        }
      }
      else
      {
        if (*(int *)(in_stack_00000008 * 0x10 + 0x10) != 0x4) goto LAB_1010_8473;
        local_2e[0x0] = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
      }
    }
    uStack_6 = (void *)ZEXT24(local_2e[0x0]);
  }
LAB_1010_8473:
  return (void *)uStack_6;
}



// Updates a resource file path. If param_2 is 2, it prepends a fixed prefix (likely a
// 'sys' or 'data' folder) to the path.

void __stdcall16far Resource_Manager_Update_Path_Case2_Logic(void *this,int mode,int id)
{
  undefined2 unaff_SS;
  int in_stack_0000000a;
  char local_30a [0x100];
  char local_20a [0x100];
  char local_10a [0x108];
  
  if (id == 0x2)
  {
    splitpath_far_optimized_with_segments
              ((char *)((int)((void **)&PTR_DAT_1050_25b6_1050_2e34)[in_stack_0000000a]
                       + 0x3),
               (char *)((ulong)((void **)&PTR_DAT_1050_25b6_1050_2e34)
                               [in_stack_0000000a] >> 0x10),NULL,NULL,NULL);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_10a),s_male_1050_14c6);
    strcat_append((char *)CONCAT22(unaff_SS,local_10a),
                  (char *)CONCAT22(unaff_SS,local_20a));
    strcat_append((char *)CONCAT22(unaff_SS,local_10a),
                  (char *)CONCAT22(unaff_SS,local_30a));
    Resource_Manager_Resolve_File_Path_Logic(this,(char *)mode);
    return;
  }
  Resource_Manager_Resolve_File_Path_Logic(this,(char *)mode);
  return;
}



// Switches active bitmap in manager. Destroys existing bitmap, resolves new path via
// 1010:8B14, and loads via 1010:9634. Reports errors via 1010:8BB4.

void __stdcall16far Resource_Manager_Switch_Active_Bitmap_Logic(void *this,int index)
{
  char *pcVar1;
  void *pvVar2;
  char *filename;
  uint uVar3;
  undefined2 unaff_SI;
  int in_stack_00000008;
  
  if (*(int *)((int)this + 0x680) == in_stack_00000008)
  {
    return;
  }
  pvVar2 = (void *)*(undefined2 *)((int)this + 0x67c);
  filename = (char *)(*(uint *)((int)this + 0x67e) | (uint)pvVar2);
  if (filename != NULL)
  {
    call_virtual_destructor_logic(pvVar2,*(uint *)((int)this + 0x67e));
    free_if_not_null(pvVar2);
  }
  if ((in_stack_00000008 == 0x1) || (in_stack_00000008 == 0x2))
  {
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x8));
    uVar3 = (uint)filename | (uint)pvVar2;
    if (uVar3 == 0x0)
    {
      *(undefined4 *)((int)this + 0x67c) = 0x0;
      goto LAB_1010_8869;
    }
LAB_1010_8853:
    pvVar2 = Bitmap_Object_Load_Helper(pvVar2,filename);
  }
  else
  {
    pcVar1 = Resource_Manager_Resolve_File_Path_Logic(this,(char *)index);
    if (((char *)*(int *)(in_stack_00000008 * 0x4 + 0x172a) == pcVar1) &&
       ((char *)*(uint *)(in_stack_00000008 * 0x4 + 0x172c) == filename))
    {
      Resource_Manager_Report_File_Error_Logic(this);
    }
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x8));
    uVar3 = (uint)filename | (uint)pvVar2;
    if (uVar3 != 0x0) goto LAB_1010_8853;
    pvVar2 = NULL;
    uVar3 = 0x0;
  }
  *(undefined2 *)((int)this + 0x67c) = pvVar2;
  *(uint *)((int)this + 0x67e) = uVar3;
LAB_1010_8869:
  *(int *)((int)this + 0x680) = in_stack_00000008;
  return;
}



// Bulk asset loader. Loads icon atlas, slices into 9 sub-bitmaps (offsets 1-9), applies
// borders via 1010:86DE, and populates the collection.

void __stdcall16far
Resource_Manager_Bulk_Load_Sourced_SubBitmaps_Logic
          (char *param_1,char *param_2,undefined2 param_3,undefined4 param_4)
{
  int iVar1;
  char *pcVar2;
  void *pvVar3;
  char *filename;
  uint uVar4;
  undefined2 unaff_SI;
  undefined4 uStack_16;
  int iStack_8;
  
  pvVar3 = *(void **)(param_1 + 0x67c);
  filename = *(char **)(param_1 + 0x67e);
  if (filename != NULL || pvVar3 != NULL)
  {
    call_virtual_destructor_logic(pvVar3,(u16)filename);
    free_if_not_null(pvVar3);
  }
  pcVar2 = Resource_Manager_Resolve_File_Path_Logic(param_1,param_2);
                // WARNING: Load size is inaccurate
  if ((((void **)&PTR_DAT_1050_2482_1050_24be)[*(int *)(param_1 + 0xe82)] == pcVar2) &&
     ((char *)*(u16 *)((int)(void **)&PTR_DAT_1050_2482_1050_24be +
                      *(int *)(param_1 + 0xe82) * 0x4 + 0x2) == filename))
  {
    Resource_Manager_Report_File_Error_Logic(param_1);
  }
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x8));
  uVar4 = (uint)filename | (uint)pvVar3;
  if (uVar4 == 0x0)
  {
    pvVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar3 = Bitmap_Object_Load_Helper(pvVar3,filename);
  }
  *(void **)(param_1 + 0x67c) = pvVar3;
  *(uint *)(param_1 + 0x67e) = uVar4;
  (param_1 + 0x680)[0x0] = '\0';
  (param_1 + 0x680)[0x1] = '\0';
  if (*(int *)(param_1 + 0x67e) != 0x0 || *(int *)(param_1 + 0x67c) != 0x0)
  {
    for (iStack_8 = 0x1; iStack_8 < 0xa; iStack_8 += 0x1)
    {
      iVar1 = iStack_8 * 0xa;
      pvVar3 = Bitmap_Object_Create_SubBitmap_Logic
                         ((void *)*(void **)(param_1 + 0x67c),
                          CONCAT22(*(undefined2 *)(iVar1 + 0x2558),
                                   *(undefined2 *)(iVar1 + 0x255a)),
                          *(int *)(iVar1 + 0x2556),*(int *)(iVar1 + 0x2554));
      uStack_16 = (void *)CONCAT22(uVar4,pvVar3);
      Bitmap_Object_Apply_Border_Color_Logic();
      *(undefined4 *)(iStack_8 * 0x4 + (int)param_4) = uStack_16;
    }
  }
  return;
}



// Path resolution engine. Iterates through search paths at offset 0xE84, prepending
// them to filename and checking existence via DOS interrupts.

char * __stdcall16far
Resource_Manager_Resolve_File_Path_Logic(void *this,char *filename)
{
  uint16_t mode;
  char *pcVar1;
  undefined1 *puVar2;
  char *pcStack0008;
  undefined1 local_3a [0x2c];
  long lStack_e;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xe84));
  mode = SetErrorMode16(0x1);
  do
  {
    lStack_e = get_next_list_item(local_a);
    if (lStack_e == 0x0)
    {
      SetErrorMode16(mode);
      return pcStack0008;
    }
    pcVar1 = (char *)((int)this + 0xa82);
    strcpy_optimized((char *)CONCAT22(filename,pcVar1),
                     (char *)*(undefined4 *)((int)lStack_e + 0x4));
    strcat_append((char *)CONCAT22(filename,pcVar1),_pcStack0008);
    puVar2 = local_3a;
    dos_multiple_interrupt_call_wrapper();
  } while (puVar2 != NULL);
  SetErrorMode16(mode);
  return pcVar1;
}



u16 __stdcall16far
UI_MultiList_Collection_Serialize_to_File_9900(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  u16 local_24;
  u32 local_20;
  u16 local_1c;
  u16 local_16;
  u32 local_10;
  undefined1 local_c [0x8];
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(long *)(iVar1 + 0xa) == 0x0)
  {
    local_4 = 0x0;
  }
  else
  {
    local_4 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xa) + 0x8);
  }
  local_1c = local_4;
  iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  init_long_pair(local_c,*(long *)(iVar1 + 0xa));
  do
  {
    local_10 = get_next_list_item(local_c);
    if (local_10 == 0x0)
    {
      if (*(long *)(iVar1 + 0xe) == 0x0)
      {
        local_24 = 0x0;
      }
      else
      {
        local_24 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xe) + 0x8);
      }
      local_16 = local_24;
      iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      init_long_pair(local_c,*(long *)(iVar1 + 0xe));
      do
      {
        lVar5 = get_next_list_item(local_c);
        uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
        if (lVar5 == 0x0)
        {
          if (*(long *)(iVar1 + 0x12) == 0x0)
          {
            local_24 = 0x0;
          }
          else
          {
            local_24 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0x12) + 0x8);
          }
          local_16 = local_24;
          iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
          if (iVar2 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d0;
            return 0x0;
          }
          init_long_pair(local_c,*(long *)(iVar1 + 0x12));
          do
          {
            lVar5 = get_next_list_item(local_c);
            uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
            if (lVar5 == 0x0)
            {
              local_1c = *(u16 *)(iVar1 + 0x1a);
              iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar2 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              local_1c = *(u16 *)(iVar1 + 0x1c);
              iVar2 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar2 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              local_1c = *(u16 *)(iVar1 + 0x1e);
              iVar1 = file_write_check((long)param_2,&local_1c,unaff_SS);
              if (iVar1 == 0x0)
              {
                g_LastFileErrorMsgID = (undefined *)0x6d0;
                return 0x0;
              }
              return 0x1;
            }
            local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)((int)lVar5 + 0x4));
            iVar2 = file_write_check((long)param_2,&local_10,unaff_SS);
            if (iVar2 == 0x0)
            {
              g_LastFileErrorMsgID = (undefined *)0x6d0;
              return 0x0;
            }
            local_4 = *(u16 *)((int)lVar5 + 0x6);
            iVar2 = file_write_check((long)param_2,&local_4,unaff_SS);
          } while (iVar2 != 0x0);
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_10 = CONCAT22(local_10._2_2_,*(undefined2 *)((int)lVar5 + 0x4));
        iVar2 = file_write_check((long)param_2,&local_10,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_4 = *(u16 *)((int)lVar5 + 0x6);
        iVar2 = file_write_check((long)param_2,&local_4,unaff_SS);
      } while (iVar2 != 0x0);
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_16 = *(u16 *)((int)local_10 + 0x4);
    iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    local_16 = *(u16 *)((int)local_10 + 0x6);
    iVar2 = file_write_check((long)param_2,&local_16,unaff_SS);
  } while (iVar2 != 0x0);
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}
