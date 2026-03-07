/*
 * Source: outpost.c
 * Chunk: 32/117
 * Original lines: 35776-36963
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Specialized path update logic for resource type 3. Splits current path and appends
// conditional fragments based on internal state (offset 0x70) and templates in segment
// 1050.

void __stdcall16far Resource_Manager_Update_Path_Type3_Logic(void *this,int id)
{
  char *pcVar1;
  undefined2 unaff_SS;
  int in_stack_00000008;
  char *pcStack_30c;
  char local_308 [0x100];
  char local_208 [0x100];
  char local_108 [0x104];
  int iStack_4;
  
  if (*(int *)(in_stack_00000008 * 0x10 + 0x10) != 0x3)
  {
    return;
  }
  iStack_4 = *(int *)((int)*(undefined4 *)((int)this + 0xe88) + 0x70);
  pcVar1 = (char *)*(undefined4 *)(in_stack_00000008 * 0x10 + 0x12);
  splitpath_far_optimized_with_segments
            ((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10),NULL,NULL,NULL);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_108),
                   (char *)CONCAT22(unaff_SS,local_208));
  if (local_308[0x0] == '\0')
  {
    if (iStack_4 == 0x0)
    {
      pcStack_30c = (char *)s__mid_1050_14c0;
    }
    else
    {
      pcStack_30c = (char *)s__wav_1050_14ba;
    }
    _pcStack_30c = (char *)CONCAT22(0x1050,pcStack_30c);
  }
  else
  {
    _pcStack_30c = (char *)CONCAT22(unaff_SS,local_308);
  }
  strcat_append((char *)CONCAT22(unaff_SS,local_108),_pcStack_30c);
  Resource_Manager_Resolve_File_Path_Logic(this,(char *)id);
  return;
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



// Retrieves a bitmap resource from the cache. For specific resource IDs identified via
// complex checks, it returns a clone of the bitmap instead of the original instance.

void * __stdcall16far
Resource_Manager_Get_or_Clone_Bitmap_Logic(void *collection,int index)
{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  undefined4 in_stack_00000008;
  uint in_stack_0000000c;
  
  uVar4 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  if ((int)in_stack_0000000c < 0x28)
  {
    if ((((int)in_stack_0000000c < 0x25) && (in_stack_0000000c != 0x23)) &&
       ((0x23 < in_stack_0000000c ||
        (((cVar1 = (char)in_stack_0000000c, cVar1 != '\v' && (cVar1 != '\x0f')) &&
         (cVar1 != '!')))))) goto LAB_1010_86b9;
  }
  else
  {
    if (in_stack_0000000c == 0x37) goto LAB_1010_8691;
    if ((int)in_stack_0000000c < 0x38)
    {
      if ((int)in_stack_0000000c < 0x33) goto LAB_1010_86b9;
      bVar5 = SBORROW2(in_stack_0000000c - 0x33,0x1);
      iVar3 = in_stack_0000000c - 0x34;
    }
    else
    {
      if (in_stack_0000000c == 0x49) goto LAB_1010_8691;
      if ((int)(in_stack_0000000c - 0x49) < 0x2a) goto LAB_1010_86b9;
      bVar5 = SBORROW2(in_stack_0000000c - 0x73,0x5);
      iVar3 = in_stack_0000000c - 0x78;
    }
    if (iVar3 != 0x0 && bVar5 == iVar3 < 0x0)
    {
LAB_1010_86b9:
      return (void *)*(undefined2 *)(in_stack_0000000c * 0x4 + (int)in_stack_00000008);
    }
  }
LAB_1010_8691:
  pvVar2 = Bitmap_Object_Subclass_Clone_Logic
                     ((void *)(void *)*(undefined4 *)
                                       (in_stack_0000000c * 0x4 + (int)in_stack_00000008
                                       ));
  return pvVar2;
}



// Processes a bitmap to apply or replace border/boundary colors. It scans pixel rows
// and replaces specific indices with the provided color parameter.

void __stdcall16far
Bitmap_Object_Apply_Border_Color_Logic
          (undefined2 param_1,undefined2 param_2,undefined1 param_3,void *param_4)
{
  bool bVar1;
  void *pvVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 uVar4;
  long lStack_14;
  undefined4 uStack_a;
  
  pvVar2 = get_with_lazy_init((void *)param_4);
  uStack_a = 0x0;
  do
  {
    if (*(long *)((int)pvVar2 + 0x8) <= uStack_a)
    {
      return;
    }
    uVar4 = uStack_a._2_2_;
    pvVar3 = Bitmap_Object_Get_Pixel_Address
                       ((void *)param_4,(int)((ulong)param_4 >> 0x10),(int)uStack_a);
    bVar1 = false;
    for (lStack_14 = 0x0; lStack_14 < *(long *)((int)pvVar2 + 0x4); lStack_14 += 0x1)
    {
      if (bVar1)
      {
LAB_1010_86fc:
        if (bVar1)
        {
          if (*(char *)((int)lStack_14 + (int)pvVar3) == -0x1)
          {
            *(undefined1 *)((int)lStack_14 + (int)pvVar3) = param_3;
            break;
          }
        }
      }
      else
      {
        if (*(char *)((int)lStack_14 + (int)pvVar3) == -0x1) goto LAB_1010_86fc;
        *(undefined1 *)((int)pvVar3 + (int)lStack_14 + -0x1) = param_3;
        bVar1 = true;
      }
    }
    uStack_a += 0x1;
  } while( true );
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Creates composite bitmap by centering a sub-region onto a UI container bitmap.
// Performs blit operations and sets result at offset 0 in resource entry.

void __stdcall16far
Resource_Manager_Composite_SubBitmap_Logic(void *this,void *container,int index)
{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  uint in_DX;
  uint uVar5;
  int unaff_SS;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  undefined1 local_26 [0x6];
  int iStack_20;
  int iStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  uint uStack_12;
  void *pvStack_10;
  uint uStack_e;
  void *pvStack_c;
  void *pvStack_8;
  uint uStack_6;
  int iStack_4;
  
  iStack_4 = in_stack_0000000c + -0xa;
  Resource_Manager_Switch_Active_Bitmap_Logic(this,(int)container);
  if (*(long *)((int)this + 0x67c) != 0x0)
  {
    iVar1 = iStack_4 * 0xa;
    pvVar2 = Bitmap_Object_Copy_Region_To_New_Bitmap
                       ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                        CONCAT22(*(undefined2 *)(iVar1 + 0x3388),
                                 *(undefined2 *)(iVar1 + 0x338a)),
                        *(int *)(iVar1 + 0x3386),*(int *)(iVar1 + 0x3384));
    _pvStack_8 = (void *)CONCAT22(in_DX,pvVar2);
    pvStack_c = (void *)*(undefined4 *)(index + 0x14);
    pvStack_10 = get_with_lazy_init((void *)pvStack_c);
    uStack_e = in_DX;
    pvVar2 = get_with_lazy_init((void *)_pvStack_8);
    _pvStack_14 = (void *)CONCAT22(in_DX,pvVar2);
    uVar3 = *(ulong *)((int)pvVar2 + 0x4);
    if ((long)uVar3 < *(long *)((int)pvStack_10 + 0x4))
    {
      uVar3 = (ulong)*(uint *)((int)pvStack_10 + 0x4);
    }
    uVar4 = *(ulong *)((int)pvVar2 + 0x8);
    if ((long)uVar4 < *(long *)((int)pvStack_10 + 0x8))
    {
      uVar4 = (ulong)*(uint *)((int)pvStack_10 + 0x8);
    }
    uStack_18 = CONCAT22((int)uVar3,(int)uVar4);
    pvVar2 = allocate_memory(0xff001e);
    uVar5 = in_DX | (uint)pvVar2;
    if (uVar5 == 0x0)
    {
      pvVar2 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      pvVar2 = Bitmap_Object_Subclass_ctor_with_alloc(pvVar2,in_DX,(int)uStack_18);
    }
    uStack_1c = (void *)CONCAT22(uVar5,pvVar2);
    Bitmap_Object_Clear_with_Color_Logic(pvVar2,(byte)uVar5);
    iStack_1e = (uStack_18._2_2_ - *(int *)((int)pvStack_10 + 0x4)) / 0x2;
    iStack_20 = (int)uStack_18 - *(int *)((int)pvStack_10 + 0x8);
    pack_3words_alt(local_26,unaff_SS,0x0,iStack_20);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),local_26);
    pack_3words_reverse(local_26,unaff_SS,0x0,0x0);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),local_26);
    *(undefined4 *)(in_stack_0000000c * 0x4 + index) = uStack_1c;
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a 'File Not Found' error message box to the user. It formats the message
// using resource strings 0x3FA and 0x57B and notifies the main window.

void __stdcall16far Resource_Manager_Report_File_Error_Logic(char *filename)
{
  char *pcVar1;
  char *in_DX;
  undefined2 unaff_SS;
  char *in_stack_00000008;
  char local_402 [0x400];
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x3fa);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_402),(char *)CONCAT22(in_DX,pcVar1));
  strcat_append((char *)CONCAT22(unaff_SS,local_402),in_stack_00000008);
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
  MessageBox16(0x1010,pcVar1,in_DX,(ushort)local_402);
  PostMessage16(0x0,0x0,0xee,(long)CONCAT22(pcVar1,g_ParentHWND));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far UI_Component_Subclass_ctor_8EE2(void *this,int segment,int id)
{
  long lVar1;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x8ee2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0xa) = (int)lVar1;
  *(undefined2 *)((int)this + 0xc) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



void __stdcall16far UI_Component_Subclass_dtor_8EE2(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x8ee2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Localized status formatting. Selects resource strings 0x436-0x43C based on entity
// state/type and performs variable substitution for population/coords.

void __stdcall16far
UI_Format_Status_Description_Logic(void *this,char *buffer,void *data)
{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u8 *puVar5;
  void *pvVar6;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000000c;
  char *pcVar7;
  char *pcStack_2e;
  undefined4 local_10;
  void *pvStack_c;
  void *pvStack_a;
  undefined2 uStack_8;
  char *pcStack_6;
  undefined2 uStack_4;
  
  uVar4 = (undefined2)((ulong)in_stack_0000000c >> 0x10);
  iVar3 = (int)in_stack_0000000c;
  iVar1 = *(int *)(iVar3 + 0x6);
  if (iVar1 == 0x0)
  {
    uVar4 = 0x436;
  }
  else if (iVar1 == 0x1)
  {
    if (false)
    {
      return;
    }
    switch(*(undefined2 *)(iVar3 + 0x4))
    {
    case 0x1:
    case 0x2:
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uStack_4 = (undefined2)((ulong)pvVar6 >> 0x10);
      pvStack_a = (void *)pvVar6;
      local_10 = *(undefined4 *)((int)pvStack_a + 0xc);
      pvStack_c = (void *)*(int *)((int)pvStack_a + 0x10);
      uStack_8 = uStack_4;
      if (0x0 < (int)pvStack_c)
      {
        pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x437);
        _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                    (char *)CONCAT22(uStack_4,pcStack_6),
                    (void *)CONCAT22(unaff_SI,pvStack_c));
        return;
      }
      break;
    case 0x3:
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uVar4 = (undefined2)((ulong)pvVar6 >> 0x10);
      local_10 = *(undefined4 *)((int)(void *)pvVar6 + 0xc);
      pvStack_c = (void *)*(int *)((int)(void *)pvVar6 + 0x10);
      if (0x0 < (int)pvStack_c)
      {
        pvStack_c = NULL;
        pvVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar6);
        pvVar6 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(pvVar6);
        uStack_8 = (undefined2)((ulong)pvVar6 >> 0x10);
        pvStack_a = (void *)pvVar6;
        puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                           (_p_MapContext_5740,
                            (undefined4 *)CONCAT22(unaff_SS,&local_10),pvVar6);
        pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar5);
        uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
        pcStack_2e = Entity_Format_Full_Name_Label_Logic
                               ((char *)(char *)*(undefined4 *)((int)this + 0xa),0x0);
        pcVar7 = pcStack_2e;
        uVar4 = uVar2;
        pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x439);
        uStack_4 = uVar2;
        _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                    (char *)CONCAT22(uVar2,pcStack_6),(char *)CONCAT22(uVar4,pcVar7));
        goto LAB_1010_8def;
      }
      break;
    default:
      goto switchD_1010_8e11_caseD_3;
    case 0x5:
    case 0x8:
    case 0x9:
    case 0xb:
      uVar4 = 0x43a;
      goto LAB_1010_8ea5;
    }
    uVar4 = 0x438;
  }
  else if (iVar1 == 0x2)
  {
    if ((*(int *)(iVar3 + 0x4) == 0x4) || (*(int *)(iVar3 + 0x4) == 0xc))
    {
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
      pcStack_2e = Entity_Format_Full_Name_Label_Logic
                             ((char *)(char *)*(undefined4 *)((int)this + 0xa),0x0);
      pcVar7 = pcStack_2e;
      uVar4 = uVar2;
      pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                            ((int)_p_GlobalResourceManager,
                             (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43b);
      uStack_4 = uVar2;
      _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                  (char *)CONCAT22(uVar2,pcStack_6),(char *)CONCAT22(uVar4,pcVar7));
LAB_1010_8def:
      free_if_not_null(pcStack_2e);
      return;
    }
    uVar4 = 0x43c;
  }
  else
  {
    uVar4 = 0x5d9;
  }
LAB_1010_8ea5:
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(data,0x3ff),
             CONCAT22(uVar4,in_stack_0000000a));
switchD_1010_8e11_caseD_3:
  return;
}



void * __stdcall16far UI_Component_Subclass_scalar_dtor_8EE2(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Component_Subclass_dtor_8EE2(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI_Vector_Tracker_Object. Initializes vtable to 1010:9254. Allocates
// and constructs a nested sub-object at offset 4 (init 1010:1CD8) and registers with
// resource tracker 3 via 1050:0ED0.

void * __stdcall16far UI_Vector_Tracker_Object_ctor(void *this)
{
  void *pvVar1;
  int in_DX;
  void *pvVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff6;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0x9254;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x18));
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)this + 0x4) = 0x0;
  }
  else
  {
    pvVar2 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar1),(void *)0x5,(void *)0x5);
    *(undefined2 *)((int)this + 0x4) = (void *)pvVar2;
    *(undefined2 *)((int)this + 0x6) = (int)((ulong)pvVar2 >> 0x10);
  }
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x8) = (int)lVar3;
  *(undefined2 *)((int)this + 0xa) = (int)((ulong)lVar3 >> 0x10);
  return this;
}



// Destructor for the UI vector or coordinate tracking object. Resets the vtable to the
// base object state.

void __stdcall16far UI_Vector_Tracker_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x9254;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Iterates through a collection using virtual methods (count at +0x10, next at +4) and
// returns the first non-zero item found.

long __stdcall16far Collection_Find_First_NonZero_Item_Logic(void *this,u16 param_2)
{
  undefined2 *puVar1;
  long lVar2;
  ulong uStack_e;
  ulong uStack_a;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  uStack_a = (*(code *)*puVar1)();
  uStack_e = 0x0;
  while( true )
  {
    if (uStack_a <= uStack_e)
    {
      return 0x0;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    lVar2 = (*(code *)*puVar1)();
    if (lVar2 != 0x0) break;
    uStack_e += 0x1;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x8);
  (*(code *)*puVar1)();
  return lVar2;
}



// Invokes a virtual reset or clear method (index 0x10) on the source collection object.

void __stdcall16far Collection_Reset_or_Clear_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  (*(code *)*puVar1)();
  return;
}



// Sets the source collection object at offset 4. Destroys the existing object if
// present.

void __stdcall16far
Collection_Set_Source_Object_Logic(void *this,long source_collection)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *(long *)((int)this + 0x4) = source_collection;
  return;
}



// Constructs a new UI_Vector_Tracker_Object by iterating over a source collection using
// virtual methods (indexes 4, 10) and adding non-zero items via index 0xC.

void * __stdcall16far Collection_Build_Vector_Tracker_Logic(void *this,u16 param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ulong uStack_e;
  
  uVar6 = (undefined2)*(undefined4 *)((int)this + 0x4);
  uVar7 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  uVar4 = (*(code *)*puVar1)();
  uVar3 = (uint)(uVar4 >> 0x10);
  pvVar2 = allocate_memory(CONCAT22(uVar6,0xc));
  uVar3 |= (uint)pvVar2;
  if (uVar3 == 0x0)
  {
    pvVar2 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar2 = UI_Vector_Tracker_Object_ctor(pvVar2);
  }
  for (uStack_e = 0x0; uStack_e < uVar4; uStack_e += 0x1)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    lVar5 = (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0x4),(int)uStack_e,
                               (int)(uStack_e >> 0x10),uVar6,uVar7);
    if (lVar5 != 0x0)
    {
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0x4) + 0xc);
      (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)pvVar2 + 0x4),lVar5);
    }
  }
  return pvVar2;
}



// Retrieves resource-linked data or a string for the coordinate tracking object using a
// source entity.

char * __stdcall16far UI_Vector_Tracker_Get_Resource_Data_Logic(void *this,char *buffer)
{
  char *pcVar1;
  void *pvVar2;
  undefined1 *in_stack_00000008;
  
  pvVar2 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                     ((void *)*(undefined4 *)((int)this + 0x4));
  if (pvVar2 != NULL)
  {
    pcVar1 = Entity_Format_Full_Name_Label_Logic
                       ((char *)(char *)*(undefined4 *)((int)this + 0x8),
                        (long)in_stack_00000008);
    return pcVar1;
  }
  *in_stack_00000008 = 0x0;
  return NULL;
}



// Replaces tracking sub-object at offset 4 by invoking its virtual destructor and
// constructing a new coordinate-related structure (1010:1CD8) in its place.

void __stdcall16far UI_Vector_Tracker_Replace_Object_at_Offset_4_Logic(void *this)
{
  undefined2 *puVar1;
  void *pvVar2;
  int extraout_DX;
  int iVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff6;
  
  iVar3 = *(int *)((int)this + 0x6);
  if (iVar3 != 0x0 || (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
    iVar3 = extraout_DX;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x18));
  if (iVar3 == 0x0 && pvVar2 == NULL)
  {
    pvVar4 = NULL;
  }
  else
  {
    pvVar4 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(iVar3,pvVar2),(void *)0x5,(void *)0x5);
  }
  *(undefined2 *)((int)this + 0x4) = (void *)pvVar4;
  *(undefined2 *)((int)this + 0x6) = (int)((ulong)pvVar4 >> 0x10);
  return;
}



// Checks if the source collection is non-empty and, if so, invokes a virtual update or
// notification method (index 8).

void __stdcall16far Collection_Notify_Update_if_NotEmpty_Logic(void *this,u16 param_2)
{
  long lVar1;
  u16 *puVar1;
  u16 *puVar2;
  
  puVar1 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x10);
  lVar1 = (*(code *)*puVar1)();
  if (lVar1 != 0x0)
  {
    puVar2 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x8);
    (*(code *)*puVar2)();
  }
  return;
}



// Invokes a virtual method (index 0xC) on the source collection object.

void __stdcall16far Collection_Invoke_Method_0C_Logic(void *this,u16 param_2)
{
  u16 *puVar1;
  
  puVar1 = (u16 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0xc);
  (*(code *)*puVar1)();
  return;
}



// Scalar deleting destructor for the coordinate tracking object.

void * __stdcall16far UI_Vector_Tracker_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Vector_Tracker_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for Collection_Object_Subclass_958E. Initializes vtable to 1010:958E.
// Calls base constructor 1008:3B5E.

void * __stdcall16far Collection_Object_Subclass_ctor_958E(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *_this = 0x958e;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Destructor for the 0x958E collection subclass. Calls the base collection destructor.

void __stdcall16far Collection_Object_Subclass_dtor_958E(void *this)
{
  u16 in_stack_00000006;
  
  *_this = 0x958e;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Constructor for UI_Window_Subclass_9566. Initializes vtable to 1010:9566. Allocates a
// 0x20C byte buffer at offset 0x5C. Calls base constructor 1010:36DA.

void * __stdcall16far UI_Window_Subclass_ctor_9566(void *this,int segment,int id)
{
  void *pvVar1;
  int in_DX;
  undefined2 unaff_BP;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined2 *)CONCAT22(segment,this) = 0x9566;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = allocate_memory(CONCAT22(unaff_BP,0x20c));
  *(undefined2 *)((int)this + 0x5c) = pvVar1;
  *(int *)((int)this + 0x5e) = in_DX;
  memset_far((void *)*(undefined2 *)((int)this + 0x5c),in_DX,0x0);
  return this;
}



// Destructor for the 0x9566 window subclass. Calls the base window destructor.

void __stdcall16far UI_Window_Subclass_dtor_9566(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x9566;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



// Factory for Collection_Object_Subclass_958E. Handles both array allocation and
// individual instance construction/initialization.

void * __stdcall16far Collection_Object_Subclass_958E_factory(int mode)
{
  void *pvVar1;
  int in_DX;
  int in_stack_00000008;
  undefined4 in_stack_0000fff8;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (in_stack_00000008 != 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(uVar2,in_stack_00000008 << 0x2));
    return pvVar1;
  }
  pvVar1 = allocate_memory(CONCAT22(uVar2,0x1a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar1 = Collection_Object_Subclass_ctor_958E(pvVar1);
    return pvVar1;
  }
  return NULL;
}



// Lazy initialization for offset 0x56 using temporary Collection_Object_Subclass_958E.
// Triggers recursive tree building via 1008:304E.

void __stdcall16far UI_Element_Lazy_Init_Offset_56_Subclass958E(void *this)
{
  void *pvVar1;
  undefined2 in_DX;
  int unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_1c [0x1a];
  
  if (*(long *)((int)this + 0x56) == 0x0)
  {
    Collection_Object_Subclass_ctor_958E(local_1c);
    pvVar1 = UI_Tree_Builder_Recursive_Logic(local_1c,unaff_SS,0x0,NULL);
    *(undefined2 *)((int)this + 0x56) = pvVar1;
    *(undefined2 *)((int)this + 0x58) = in_DX;
    Collection_Object_Subclass_dtor_958E(local_1c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a resource string based on an ID stored within a sub-component at offset
// 0x16. Duplicate logic.

char * __stdcall16far get_resource_string_from_offset_16_Logic_2(void *this)
{
  char *pcVar1;
  undefined2 in_stack_00000006;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)*(undefined4 *)((int)this + 0x16));
  return pcVar1;
}



// Retrieves a 16-bit value from a specific offset within a nested sub-component.
// Duplicate logic.

int __stdcall16far get_u16_from_offset_16_plus_2_Logic_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x2);
}



// Scalar deleting destructor for the `Collection_Object_Subclass_958E` class.

void * __stdcall16far Collection_Object_Subclass_scalar_dtor_958E(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Collection_Object_Subclass_dtor_958E(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
UI_Window_Subclass_9566_dtor_Scalar_Deleting_9540
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Window_Subclass_dtor_9566(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for UI_Object_Subclass_A1C8. Initializes vtable to 1010:A1C8. Sets
// initial count at offset 0x1C to 10 and clears multiple pointer/status fields.

void * __stdcall16far UI_Object_Subclass_ctor_A1C8(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1a) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0xa;
  *(undefined2 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xa1c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Destructor for UI_Object_Subclass_A1C8. Destroys three nested sub-objects at offsets
// 10, 14, and 18 via virtual destructors before calling base.

void __stdcall16far UI_Object_Subclass_dtor_A1C8(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xa1c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Destroys the sub-object pointer stored at offset 0x12 and clears the field.

void __stdcall16far UI_Object_Destroy_SubObject_at_Offset_12_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  return;
}
