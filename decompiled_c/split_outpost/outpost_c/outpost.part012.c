/*
 * Source: outpost.c
 * Chunk: 12/117
 * Original lines: 12330-13525
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Resource
// Performs extensive indirect calls through vtable offsets (0x90, 0x8, 0xC) of active
// view panels.
// References global sub-dialog table at PTR_DAT_1050_5b7c.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Switch_Active_View_Panel_Logic(void *this,int panel_id)
{
  undefined2 *puVar1;
  HCURSOR16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  HVar2 = LoadCursor16((void *)0x7f02,0x0);
  HVar2 = SetCursor16(HVar2);
  *(int *)((int)this + 0xf2) = *(int *)((int)this + 0xf2) + 0x1;
  if (*(long *)((int)this + 0xee) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x90);
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xee),
                       (int)((ulong)*(undefined4 *)((int)this + 0xee) >> 0x10));
    in_DX = extraout_DX;
  }
  pvVar3 = UI_Get_or_Create_Child_Object_by_ID_Logic(this,panel_id);
  *(undefined2 *)((int)this + 0xee) = pvVar3;
  *(undefined2 *)((int)this + 0xf0) = in_DX;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x8);
  (*(code *)*puVar1)(0x1538,*(undefined2 *)((int)this + 0xee),in_DX);
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc)
    ;
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10),0x0);
  }
  UI_Global_Batch_Hide_Active_SubDialogs_b634(_p_UISubDialogTable);
  UI_Window_Bulk_Hide_SubWindows_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xf4));
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0xc);
  (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)((int)this + 0xee),
                     (int)((ulong)*(undefined4 *)((int)this + 0xee) >> 0x10),0x5);
  BringWindowToTop16(*(HWND16 *)((int)*(undefined4 *)((int)this + 0xee) + 0x8));
  SetCursor16(HVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Performs multiple indirect calls through vtable offsets (0x90, 0xC, 0x98) of
// deactivated and parent view panels.
// References global sub-dialog table at PTR_DAT_1050_5b7c and parent HWND at 1050:0396.

void __stdcall16far UI_Close_Active_View_Panel_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  
  if ((*(long *)((int)this + 0xee) != 0x0) &&
     (*(int *)((int)this + 0xf2) = *(int *)((int)this + 0xf2) + -0x1,
     *(int *)((int)this + 0xf2) < 0x1))
  {
    uVar5 = *(undefined4 *)((int)this + 0xee);
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xee) + 0x90);
    (*(code *)*puVar1)();
    *(undefined4 *)((int)this + 0xee) = 0x0;
    *(undefined2 *)((int)this + 0xf2) = 0x0;
    if (*(long *)((int)this + 0xe8) != 0x0)
    {
      uVar4 = 0x3;
      uVar3 = *(undefined4 *)((int)this + 0xe8);
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc);
      (*(code *)*puVar1)();
      UI_Global_Batch_Show_Active_SubDialogs_b68a(_p_UISubDialogTable);
      UI_Window_Bulk_Show_SubWindows_Logic
                ((void *)(void *)*(undefined4 *)((int)this + 0xf4));
      uVar2 = (undefined2)*(undefined4 *)((int)this + 0xe8);
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x98);
      (*(code *)*puVar1)(0x1010,uVar2,
                         (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10),0x1,
                         uVar3,uVar4,uVar5);
      PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(uVar2,g_ParentHWND));
    }
  }
  return;
}



// Targeted Scan Finding: Vtable / Resource
// Performs extensive indirect calls through vtable offsets (0x90, 0x8, 0xC, 0x10) of
// primary and child view panels.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Set_Primary_View_Panel_Logic(void *this,int panel_id)
{
  undefined2 *puVar1;
  HCURSOR16 HVar2;
  void *pvVar3;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  HVar2 = LoadCursor16((void *)0x7f02,0x0);
  HVar2 = SetCursor16(HVar2);
  if (*(long *)((int)this + 0xe8) != 0x0)
  {
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x90);
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10));
    in_DX = extraout_DX;
  }
  pvVar3 = UI_Get_or_Create_Child_Object_by_ID_Logic(this,panel_id);
  *(undefined2 *)((int)this + 0xe8) = pvVar3;
  *(undefined2 *)((int)this + 0xea) = in_DX;
  if (*(int *)((int)*(undefined4 *)((int)this + 0xe8) + 0xe0) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0x8)
    ;
    (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xe8),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe8) >> 0x10));
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe8) + 0xc)
    ;
    (*(code *)*puVar1)(0x1538,*(undefined4 *)((int)this + 0xe8),0x3);
    *(undefined4 *)((int)this + 0xce) = *(undefined4 *)((int)this + 0xe8);
  }
  else
  {
    *(undefined4 *)((int)this + 0xe8) = 0x0;
    UI_Switch_Active_View_Panel_Logic(this,panel_id);
    *(undefined4 *)((int)this + 0xce) = 0x0;
  }
  SetCursor16(HVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global pointers in segment 1050:
// - PTR_DAT_1050_0ed0 (Resource manager)
// - PTR_DAT_1050_0396 (Parent HWND)
// Indirectly triggers a view panel switch and world initialization logic.

void __stdcall16far UI_Auto_Load_Game_Logic(void *parent_window)
{
  int iVar1;
  char *pcVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SI;
  char *unaff_SS;
  char *in_stack_00000006;
  char local_22e [0xa];
  char local_224 [0x108];
  uint uStack_11c;
  char *pcStack_11a;
  HCURSOR16 HStack_112;
  HCURSOR16 HStack_110;
  void *pvStack_10e;
  undefined4 uStack_10a;
  undefined4 uStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  uStack_106 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2)
  ;
  uVar3 = (undefined2)((ulong)uStack_106 >> 0x10);
  iVar1 = (int)uStack_106;
  uStack_10a = (char *)*(undefined4 *)(iVar1 + 0x16);
  iVar4 = *(int *)(iVar1 + 0x18);
  if (iVar4 == 0x0 && (char *)uStack_10a == NULL)
  {
    pcVar2 = UI_Prompt_File_Dialog_Get_Path(parent_window,(int)in_stack_00000006);
    uStack_10a = (char *)CONCAT22(iVar4,pcVar2);
    if (iVar4 == 0x0 && pcVar2 == NULL)
    {
      PostMessage16(0x0,0x0,0x13d,(long)CONCAT22(unaff_SI,g_ParentHWND));
      return;
    }
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),(char *)CONCAT22(iVar4,pcVar2)
                    );
    splitpath_far_optimized_with_segments(local_102,unaff_SS,NULL,NULL,NULL);
    if (local_22e[0x0] != '\0')
    {
      strcat_append((char *)CONCAT22(unaff_SS,local_224),
                    (char *)CONCAT22(unaff_SS,local_22e));
    }
    UI_Component_Set_String_at_Offset_16_Logic
              ((void *)uStack_106,(char *)((ulong)uStack_106 >> 0x10));
  }
  else
  {
    pcStack_11a = (char *)*(undefined4 *)(iVar1 + 0x1a);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),pcStack_11a);
    uStack_11c = strlen_get_length((char *)CONCAT22(unaff_SS,local_102));
    if (local_102[uStack_11c - 0x1] != '\\')
    {
      local_102[uStack_11c] = '\\';
      local_102[uStack_11c + 0x1] = '\0';
    }
    strcat_append((char *)CONCAT22(unaff_SS,local_102),uStack_10a);
  }
  if (local_102[0x0] != '\0')
  {
    pvStack_10e = (void *)*(undefined4 *)((int)parent_window + 0xe8);
    UI_DanBrotherton_Window_Close_Child_Dialog_Logic_097e((void *)pvStack_10e);
    UpdateWindow16(*(HWND16 *)((int)*(undefined4 *)((int)parent_window + 0xe8) + 0x8));
    HStack_110 = LoadCursor16((void *)0x7f02,0x0);
    HStack_112 = SetCursor16(HStack_110);
    UI_Prompt_Load_Game_and_Init_World_Logic(parent_window,in_stack_00000006);
    SetCursor16(HStack_112);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References resource manager pointer in segment 1050 (offset 0ed0).
// Triggers save operation if a valid path exists.

void __stdcall16far UI_Auto_Save_Game_Logic(void *parent_window)
{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  char *in_stack_00000006;
  char *pcStack_10a;
  undefined4 uStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  uStack_106 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uVar4 = (undefined2)((ulong)uStack_106 >> 0x10);
  iVar2 = (int)uStack_106;
  pcVar1 = (char *)*(undefined4 *)(iVar2 + 0x12);
  pcStack_10a = (char *)pcVar1;
  if (*(int *)(iVar2 + 0x14) == 0x0 && pcStack_10a == NULL)
  {
    UI_Save_As_Game_Logic(parent_window);
  }
  else
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),
                     (char *)*(undefined4 *)(iVar2 + 0x1a));
    uVar3 = strlen_get_length((char *)CONCAT22(unaff_SS,local_102));
    if (local_102[uVar3 - 0x1] != '\\')
    {
      local_102[uVar3] = '\\';
      local_102[uVar3 + 0x1] = '\0';
    }
    strcat_append((char *)CONCAT22(unaff_SS,local_102),pcVar1);
    if (local_102[0x0] != '\0')
    {
      UI_Prompt_Save_Game_Dialog(parent_window,in_stack_00000006);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References resource manager pointer in segment 1050 (offset 0ed0).
// Prompts for path and triggers save logic.

void __stdcall16far UI_Save_As_Game_Logic(void *parent_window)
{
  int in_DX;
  char *unaff_SS;
  void *pvVar1;
  char *in_stack_00000006;
  char local_210 [0xa];
  char local_206 [0x100];
  char *pcStack_106;
  char local_102 [0x100];
  
  local_102[0x0] = '\0';
  pcStack_106 = UI_Prompt_File_Dialog_Get_Path(parent_window,(int)in_stack_00000006);
  if (in_DX != 0x0 || pcStack_106 != NULL)
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_102),
                     (char *)CONCAT22(in_DX,pcStack_106));
    splitpath_far_optimized_with_segments(local_102,unaff_SS,NULL,NULL,NULL);
    if (local_210[0x0] != '\0')
    {
      strcat_append((char *)CONCAT22(unaff_SS,local_206),
                    (char *)CONCAT22(unaff_SS,local_210));
    }
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    UI_Component_Set_String_at_Offset_12_Logic_2
              ((void *)pvVar1,(char *)((ulong)pvVar1 >> 0x10));
    if (local_102[0x0] != '\0')
    {
      UI_Prompt_Save_Game_Dialog(parent_window,in_stack_00000006);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Invokes Windows 16-bit Common Dialog APIs:
// - GetOpenFilename16
// - GetSaveFilename16
// References string resources via Resource Manager (segment 1050:14cc) with IDs 0x579,
// 0x74c, 0x74d, 0x74e, 0x3fd, 0x57b.
// References bitmap resource: tile2.bmp (offset 1050:1538).

char * __stdcall16far UI_Prompt_File_Dialog_Get_Path(void *parent_window,int mode)
{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  BOOL16 BVar5;
  int iVar6;
  char *pcVar7;
  undefined2 uVar8;
  int unaff_SS;
  int in_stack_00000008;
  char local_782 [0x104];
  char local_67e [0x8];
  undefined4 uStack_676;
  char *pcStack_672;
  char *pcStack_670;
  char *pcStack_66e;
  char local_666 [0x100];
  char *pcStack_566;
  undefined4 local_562;
  undefined2 uStack_55e;
  char *pcStack_55a;
  char *pcStack_54a;
  int iStack_52e;
  char acStack_519 [0x101];
  uint uStack_418;
  char local_416 [0x8];
  undefined2 uStack_40e;
  char local_40c [0x102];
  char *pcStack_30a;
  void *pvStack_306;
  undefined1 local_302;
  char local_202 [0xff];
  char acStack_103 [0x101];
  
  acStack_103[0x1] = 0x0;
  local_302 = 0x0;
  local_202[0x0] = '\0';
  pvStack_306 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2);
  uVar8 = (undefined2)((ulong)pvStack_306 >> 0x10);
  pvVar3 = (void *)pvStack_306;
  pcStack_30a = (char *)*(undefined4 *)((int)pvVar3 + 0x1a);
  iVar6 = *(int *)((int)pvVar3 + 0x1c);
  pcVar7 = (char *)pcStack_30a;
  if (iVar6 == 0x0 && (char *)pcStack_30a == NULL)
  {
    pcStack_66e = (char *)*(undefined4 *)((int)pvVar3 + 0x64);
    if (*(int *)((int)pvVar3 + 0x66) != 0x0 || (char *)pcStack_66e != NULL)
    {
      init_long_pair(local_67e,
                     (long)CONCAT22(*(int *)((int)pvVar3 + 0x66),(char *)pcStack_66e));
      uStack_676 = (char *)get_next_list_item(local_67e);
      iVar6 = (int)((ulong)uStack_676 >> 0x10);
      if (iVar6 != 0x0 || (char *)uStack_676 != NULL)
      {
        pcVar2 = *(char **)((char *)uStack_676 + 0x4);
        iVar6 = (int)((ulong)pcVar2 >> 0x10);
        pcVar7 = (char *)pcVar2;
        goto LAB_1008_3206;
      }
    }
  }
  else
  {
LAB_1008_3206:
    strcpy_optimized((char *)CONCAT22(unaff_SS,acStack_103 + 0x1),
                     (char *)CONCAT22(iVar6,pcVar7));
  }
  dos_get_cwd_on_current_drive_wrapper_far(local_40c,unaff_SS);
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,local_40c));
  if (local_40c[uStack_40e - 0x1] == '\\')
  {
    local_40c[uStack_40e - 0x1] = '\0';
  }
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,acStack_103 + 0x1));
  if (acStack_103[uStack_40e] == '\\')
  {
    acStack_103[uStack_40e] = '\0';
  }
  dos_delete_file_internal_far((char *)&DAT_1050_1000);
  uVar8 = (undefined2)((ulong)pvStack_306 >> 0x10);
  pcStack_30a = (char *)*(undefined4 *)((int)(void *)pvStack_306 + 0x12);
  pcVar7 = (char *)*(int *)((int)(void *)pvStack_306 + 0x14);
  if (pcVar7 != NULL || (char *)pcStack_30a != NULL)
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_202),
                     (char *)CONCAT22(pcVar7,(char *)pcStack_30a));
  }
  local_416[0x0] = '\0';
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x579);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_416),(char *)CONCAT22(pcVar7,pcVar4))
  ;
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,local_416));
  for (uStack_418 = uStack_40e; -0x1 < (int)uStack_418; uStack_418 = uStack_418 - 0x1)
  {
    if (local_416[uStack_418] == '.')
    {
      strcpy_optimized((char *)CONCAT22(unaff_SS,local_67e),
                       (char *)CONCAT22(unaff_SS,local_416 + uStack_418 + 0x1));
      strcpy_optimized((char *)CONCAT22(unaff_SS,local_416),
                       (char *)CONCAT22(unaff_SS,local_67e));
    }
  }
  acStack_519[0x1] = 0x0;
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x74c);
  strcpy_optimized((char *)CONCAT22(unaff_SS,acStack_519 + 0x1),
                   (char *)CONCAT22(pcVar7,pcVar4));
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,acStack_519 + 0x1));
  cVar1 = acStack_519[uStack_40e];
  uStack_418 = 0x0;
  while (acStack_519[uStack_418 + 0x1] != '\0')
  {
    if (acStack_519[uStack_418 + 0x1] == cVar1)
    {
      acStack_519[uStack_418 + 0x1] = '\0';
    }
    uStack_418 = uStack_418 + 0x1;
  }
  pcVar4 = (char *)&DAT_1050_1000;
  memset_far(&local_562,unaff_SS,0x0);
  local_562 = 0x48;
  uStack_55e = *(undefined2 *)((int)parent_window + 0x8);
  pcStack_55a = acStack_519 + 0x1;
  _pcStack_54a = (char *)CONCAT22(unaff_SS,local_202);
  pcStack_566 = NULL;
  local_666[0x0] = '\0';
  iVar6 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  if (in_stack_00000008 == 0x1)
  {
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,iVar6,0x74d);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_666),
                     (char *)CONCAT22(pcVar7,pcVar4));
    BVar5 = GetOpenFilename16((undefined4 *)CONCAT22(unaff_SS,&local_562));
  }
  else
  {
    if (in_stack_00000008 != 0x2)
    {
      log_debug_message_v(0x1ca,0x1050);
      goto LAB_1008_3461;
    }
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,iVar6,0x74e);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_666),
                     (char *)CONCAT22(pcVar7,pcVar4));
    BVar5 = GetSaveFilename16((undefined4 *)CONCAT22(unaff_SS,&local_562));
  }
  pcVar4 = (char *)s_tile2_bmp_1050_1538;
  if (BVar5 != 0x0)
  {
    pcStack_566 = _pcStack_54a;
  }
LAB_1008_3461:
  if (pcStack_566 != NULL)
  {
    if (iStack_52e < 0x0)
    {
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x3fd);
      uStack_676 = (char *)CONCAT22(pcVar7,pcVar4);
      pcVar4 = strdup_allocate(pcVar4);
      uStack_676 = (char *)CONCAT22(pcVar7,pcVar4);
      pcStack_672 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
      pcStack_670 = pcVar7;
      MessageBox16(0x10,pcStack_672,pcVar7,(ushort)(char *)uStack_676);
      pcStack_566 = NULL;
      pcStack_66e = uStack_676;
      pcVar4 = (char *)&DAT_1050_1000;
      free_if_not_null((char *)uStack_676);
    }
    else
    {
      pcVar4 = (char *)&DAT_1050_1000;
      strncpy_fixed_optimized
                ((char *)CONCAT22(unaff_SS,local_782),_pcStack_54a,iStack_52e);
      local_782[iStack_52e] = '\0';
      if (local_782[0x0] != '\0')
      {
        pcVar4 = (char *)0x1010;
        UI_Component_Set_String_at_Offset_1A_Logic
                  ((void *)pvStack_306,(char *)((ulong)pvStack_306 >> 0x10));
      }
    }
  }
  dos_delete_file_internal_far(pcVar4);
  return (char *)pcStack_566;
}



// Targeted Scan Finding: Far Pointer
// References global state pointer at 1050:0010.
// Manages internal buffer for system colors at offset [this+0xf8].

void __stdcall16far UI_Manage_System_Colors_Logic(void *this,int mode)
{
  void *pvVar1;
  COLORREF CVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int in_stack_00000008;
  undefined4 *COLORREF_ptr;
  int iStack_84;
  int16_t iStack_82;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int16_t local_2c [0x15];
  
  local_2c[0x0] = 0x4;
  local_2c[0x1] = 0x7;
  local_2c[0x2] = 0x0;
  local_2c[0x3] = 0xf;
  local_2c[0x4] = 0x14;
  local_2c[0x5] = 0x10;
  local_2c[0x6] = 0x12;
  local_2c[0x7] = 0xd;
  local_2c[0x8] = 0xe;
  local_2c[0x9] = 0x6;
  local_2c[0xa] = 0x5;
  local_2c[0xb] = 0x8;
  local_2c[0xc] = 0x11;
  local_2c[0xd] = 0x1;
  local_2c[0xe] = 0x2;
  local_2c[0xf] = 0x3;
  local_2c[0x10] = 0x9;
  local_2c[0x11] = 0xa;
  local_2c[0x12] = 0xb;
  local_2c[0x13] = 0xc;
  local_2c[0x14] = 0x13;
  local_80 = 0x0;
  uStack_6c = 0x808080;
  iVar3 = 0x100;
  uStack_74 = 0x0;
  uStack_72 = 0x100;
  uStack_64 = 0x0;
  uStack_62 = 0x100;
  uStack_60 = 0xffff;
  uStack_5e = 0x0;
  uStack_7c = 0x2;
  uStack_7a = 0x100;
  uStack_78 = 0x2;
  uStack_76 = 0x100;
  uStack_68 = 0x2;
  uStack_66 = 0x100;
  uStack_5c = 0x2;
  uStack_5a = 0x100;
  uStack_58 = 0x0;
  uStack_50 = 0xc0c0;
  uStack_4e = 0x0;
  uStack_4c = 0x0;
  uStack_48 = 0x0;
  uStack_44 = 0x0;
  uStack_34 = 0x0;
  uStack_70 = 0x8000;
  uStack_54 = 0x8000;
  uStack_40 = 0x8000;
  uStack_3c = 0x8000;
  uStack_38 = 0x8000;
  uStack_30 = 0x8000;
  iStack_82 = 0x15;
  if (*(long *)((int)this + 0xf8) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x54));
    *(undefined2 *)((int)this + 0xf8) = pvVar1;
    *(int *)((int)this + 0xfa) = iVar3;
    for (iStack_84 = 0x0; iStack_84 < 0x15; iStack_84 += 0x1)
    {
      CVar2 = GetSysColor16(local_2c[iStack_84]);
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xf8) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this + 0xf8);
      *(COLORREF *)(iVar4 + iStack_84 * 0x4) = CVar2;
      *(int *)(iVar4 + iStack_84 * 0x4 + 0x2) = iVar3;
    }
  }
  if (in_stack_00000008 != 0x0)
  {
    CVar2 = GetSysColor16(local_2c[0x0]);
    if ((CVar2 == (COLORREF)local_80) && (iVar3 == local_80._2_2_))
    {
      return;
    }
  }
  if (p_FreeBlockListHead == NULL)
  {
    iStack_82 = 0xa;
    uStack_70 = 0xc0c0c0;
  }
  if (in_stack_00000008 == 0x0)
  {
    COLORREF_ptr = (undefined4 *)*(undefined4 *)((int)this + 0xf8);
  }
  else
  {
    COLORREF_ptr = (undefined4 *)CONCAT22(unaff_SS,&local_80);
  }
  SetSysColors16(COLORREF_ptr,(int16_t *)CONCAT22(unaff_SS,local_2c),iStack_82);
  return;
}



void __stdcall16far UI_Update_Window_State_Wrapper_Far(void *this)
{
  UI_Call_Virtual_Refresh_maybe(this);
  return;
}



// Targeted Scan Finding: Far Pointer
// Initializes a far pointer to offset 10 from the provided base.

void * __stdcall16far get_far_ptr_at_offset_10_logic(void *base_ptr)
{
  return (void *)((int)base_ptr + 0xa);
}



void __stdcall16far far_noop_stub_1(void)
{
  return;
}



void __stdcall16far far_noop_stub_2(void)
{
  return;
}



// Targeted Scan Finding: Vtable
// Initializes base object vtable to 1008:389A.

void * __stdcall16far UI_Base_Object_dtor_cleanup(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
                // (final) Applying prototype via set-function-prototype: void
                // __cdecl16near inferred_helper_377e_lowconf(void);
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



u16 * __stdcall16far UI_Window_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (u16 *)param_1;
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (u16)(char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



void * __stdcall16far
UI_Window_Base_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Window_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Generic_Panel vtable sequence: 1008:389A -> 1008:3AA8 -> 1008:3AB0 ->
// 1008:3AA0.
// Stores parent reference at offset 4.

void * __stdcall16far UI_Generic_Panel_ctor_init(void *this,void *parent)
{
  undefined2 in_stack_00000008;
  
                // Will apply prototype: void __cdecl16near
                // inferred_small_util_392e_lowconf(void);
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_0_76_1050_3aa0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts UI_Generic_Panel vtable sequence during destruction: 1008:3AA0 -> 1008:3AB0
// -> 1008:389A.

void __stdcall16far UI_Generic_Panel_dtor_internal(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_0_76_1050_3aa0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// A standard WM_PAINT handler for erasing or filling a window background with a solid
// color (0x70B). Handles DC acquisition and rectangle filling.

void __stdcall16far UI_Window_Paint_Background_Solid(void *this)
{
  HDC16 HVar1;
  HBRUSH16 h_brush16;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  HDC16 in_stack_0000ffd4;
  undefined1 local_22 [0x20];
  
                // Will apply prototype: void __cdecl16near
                // inferred_parser_39ac_lowconf(void);
  HVar1 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                       *(HWND16 *)((int)this + 0x4));
  h_brush16 = CreateSolidBrush16(0x70b);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,&stack0xffd2),
                  *(HWND16 *)((int)this + 0x4));
  FillRect16(h_brush16,(void *)CONCAT22(HVar1,unaff_SS),in_stack_0000ffd4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)this + 0x4));
  DeleteObject16(h_brush16);
  return;
}



void __stdcall16far far_noop_stub_1008(void)
{
  return;
}



u16 * __stdcall16far UI_Window_dtor_Alt_Scalar_Deleting(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



u16 * __stdcall16far
UI_GenericPanel_Step_dtor_Scalar_Deleting(u16 *param_1,byte param_2)
{
  u16 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (u16 *)param_1;
  *param_1 = (u16)(char *)s_0_020_1050_3ab0;
  ptr[0x1] = 0x1008;
  *param_1 = (u16)(char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



void * __stdcall16far
UI_GenericPanel_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  UI_Generic_Panel_dtor_internal(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable / Resource
// Initializes UI_SOLWindow vtable to 1008:3B46.
// References string literal "SOLDefaultWindowClass" (1050:01FE).

void * __stdcall16far UI_SOLWindow_ctor(void *this)
{
  void *in_stack_00000006;
  
  UI_Base_Window_ctor(this,in_stack_00000006);
  *(undefined2 *)((int)this + 0xde) = 0x0;
  *_this = (char *)s_0_000_1050_3b46;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  strcpy_optimized((char *)CONCAT22(in_stack_00000006,(char *)((int)this + 0x5b)),
                   s_SOLDefaultWindowClass_1050_01fe);
  return this;
}



void __stdcall16far win16_PostQuitMessage_wrapper(void)
{
  PostQuitMessage16(0x0);
  return;
}



// Targeted Scan Finding: Vtable
// Reverts UI_SOLWindow vtable sequence during destruction: 1008:380A -> 1008:389A.

void * __stdcall16far UI_SOLWindow_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  UI_Control_Sub_dtor_logic((void *)((int)this + 0xd2));
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Complex_Control vtable to 1008:3CFC.

void * __stdcall16far
UI_Complex_Control_ctor
          (undefined2 *param_1,void *param_2,undefined2 param_3,int param_4,
          undefined2 param_5,undefined2 param_6,undefined4 param_7,undefined4 param_8)
{
                // Will apply prototype: void __cdecl16near
                // inferred_dispatcher_3bd6_medconf(void);
  UI_Complex_Control_ctor_9fb8
            (param_1,(void *)CONCAT22(param_3,param_2),0x0,param_6,param_7,param_8);
  *(void ***)CONCAT22(param_2,param_1) = (void **)&PTR_s_92_76_1050_3a8d_1050_3cfc;
  param_1[0x1] = 0x1008;
  param_1[0x1b] = 0x0;
  *(undefined4 *)(param_1 + 0x13) = 0x0;
  UI_Dialog_Calculate_Layout_Metrics_9252(param_1);
  UI_Window_Create_and_Subclass_92dc(param_1);
  UI_Window_Move_and_Update_93aa(param_1,(int)param_2,param_4);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global palette object via segment 1050:4230.
// Performs indirect call through [puStack_6 + 4], likely an object-specific draw
// method.

void __stdcall16far
UI_Draw_Object_with_Palette_Logic(void *obj_ptr,byte flags,HDC16 hdc)
{
  undefined2 *puVar1;
  HPALETTE16 HVar2;
  undefined2 uVar3;
  undefined1 in_stack_00000007;
  BOOL16 in_stack_0000000a;
  undefined4 *puStack_6;
  
  _obj_ptr = CONCAT13(in_stack_00000007,CONCAT12(flags,obj_ptr));
  uVar3 = (undefined2)((ulong)_obj_ptr >> 0x10);
  if (*(int *)((int)obj_ptr + 0xa) != 0x0 || *(int *)((int)obj_ptr + 0x8) != 0x0)
  {
    puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0x8);
    if ((*(long *)((int)obj_ptr + 0xc) != 0x0) && ((hdc & 0x1) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0xc);
    }
    if ((*(long *)((int)obj_ptr + 0x10) != 0x0) && ((hdc & 0x4) != 0x0))
    {
      puStack_6 = (undefined4 *)*(undefined4 *)((int)obj_ptr + 0x10);
    }
    uVar3 = (undefined2)((ulong)_p_GlobalPaletteObject >> 0x10);
    HVar2 = Palette_Object_Select_And_Realize_Wrapper_Far
                      ((void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe),
                       *(HDC16 *)((int)_p_GlobalPaletteObject + 0x10));
    puVar1 = (undefined2 *)((int)*puStack_6 + 0x4);
    (*(code *)*puVar1)();
    HVar2 = SelectPalette16(0x0,HVar2,in_stack_0000000a);
    DeleteObject16(HVar2);
  }
  return;
}



// A simple no-op stub function.

void __stdcall16far void_noop_stub_1008_3cd2(void)
{
  return;
}



void * __stdcall16far UI_Complex_Control_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Complex_Control_dtor_Internal_911e(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Sends a WM_COMMAND message to a window handle stored in the provided structure. The
// command ID is also retrieved from the structure at a fixed offset.

void __stdcall16far UI_Post_Command_Message_From_Struct(void *struct_ptr)
{
  undefined2 unaff_BP;
  undefined2 in_stack_00000006;
  
  PostMessage16(0x0,0x0,*(ushort *)((int)struct_ptr + 0xcc),
                CONCAT22(unaff_BP,*(undefined2 *)((int)struct_ptr + 0xbc)));
  return;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:380A and then 1008:389A during object destruction.

void * __stdcall16far UI_Generic_Control_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 4] at offset 4, likely invoking a virtual
// refresh/update method.

void __stdcall16far UI_Call_Virtual_Refresh_maybe(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x4) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0x4);
    (*(code *)*puVar1)();
  }
  return;
}



void * __stdcall16far zero_init_struct_6bytes(void *ptr)
{
  undefined2 in_stack_00000006;
  
                // Zero-initializes a 6-byte structure (3 words). Returns the pointer.
  *_ptr = 0x0;
  *(undefined2 *)((int)ptr + 0x2) = 0x0;
  *(undefined2 *)((int)ptr + 0x4) = 0x0;
  return ptr;
}



void * __stdcall16far pack_3words_alt(void *dest,int w1,int w2,int w3)
{
  undefined2 in_stack_0000000c;
  
                // Packs 3 words: param_1[0]=param_4, [1]=param_3, [2]=param_2. Returns
                // param_1.
  *_dest = in_stack_0000000c;
  *(int *)((int)dest + 0x2) = w3;
  *(int *)((int)dest + 0x4) = w2;
  return dest;
}



void __stdcall16far pack_3words_reverse(void *dest,int w1,int w2,int w3)
{
  undefined2 in_stack_0000000c;
  
                // Packs 3 words in reverse order: param_1[0]=param_4, [1]=param_3,
                // [2]=param_2.
  *_dest = in_stack_0000000c;
  *(int *)((int)dest + 0x2) = w3;
  *(int *)((int)dest + 0x4) = w2;
  return;
}



void __stdcall16far unpack_word_pair(void *src,int *out1,int *out2)
{
  undefined2 in_stack_0000000a;
  undefined2 *in_stack_0000000c;
  
                // Unpacks a 2-word structure: param_3 = param_1[0], param_2 =
                // param_1[1].
  *in_stack_0000000c = *_src;
  *_out2 = *(int *)((int)src + 0x2);
  return;
}



void __stdcall16far unpack_3word_struct(void *src,int *out1,int *out2,int *out3)
{
  undefined2 *in_stack_0000000c;
  undefined2 *in_stack_00000010;
  
                // Unpacks 3-word structure: param_4 = param_1[0], param_3 = param_1[1],
                // param_2 = param_1[2].
  *in_stack_00000010 = *_src;
  *in_stack_0000000c = *(undefined2 *)((int)src + 0x2);
  *_out2 = *(int *)((int)src + 0x4);
  return;
}



void __stdcall16far calc_abs_diff_3ints(int *vec1,int *vec2,u16 param_3,u16 param_4)
{
  int iVar1;
  
                // Calculates absolute differences for 3 integers: param_1[i] =
                // abs(param_2[i] - param_1[i]) + 1 for i=0,1,2.
  iVar1 = *_param_3 - *_vec1;
  if (iVar1 < 0x0)
  {
    iVar1 = -iVar1;
  }
  *_vec1 = iVar1 + 0x1;
  iVar1 = *(int *)(param_3 + 0x2) - vec1[0x1];
  if (iVar1 < 0x0)
  {
    iVar1 = -iVar1;
  }
  vec1[0x1] = iVar1 + 0x1;
  iVar1 = *(int *)(param_3 + 0x4) - vec1[0x2];
  if (iVar1 < 0x0)
  {
    iVar1 = -iVar1;
  }
  vec1[0x2] = iVar1 + 0x1;
  return;
}



void __stdcall16far add_3int_vectors(int *dest,int *src)
{
  undefined2 uVar1;
  int *in_stack_00000008;
  
                // Adds two 3-integer vectors: param_1[i] += param_2[i] for i=0,1,2.
  *_dest = *_dest + *in_stack_00000008;
  uVar1 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  dest[0x1] = dest[0x1] + ((int *)in_stack_00000008)[0x1];
  dest[0x2] = dest[0x2] + ((int *)in_stack_00000008)[0x2];
  return;
}
