/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 19/19
 * Original lines (combined): 129883-133652
 * Boundaries: top-level declarations/definitions only
 */




// Custom window procedure for 'OPButton' controls. Handles WM_PAINT by rendering a 3D
// bevelled button with centered text. Supports both enabled and grayed-out states.

void __cdecl16far UI_OPButton_WndProc_9948(HWND16 param_1,u32 param_2)
{
  int iVar1;
  HDC16 HVar2;
  int iVar3;
  HDC16 HVar4;
  void *mode;
  HDC16 hdc;
  char *pcVar5;
  uint uVar6;
  HPEN16 obj;
  HPEN16 obj_00;
  HGDIOBJ16 obj_01;
  HGDIOBJ16 HVar7;
  COLORREF hdc_00;
  COLORREF hdc_01;
  undefined *color;
  undefined *puVar8;
  int iVar9;
  void *pvVar10;
  void *unaff_SS;
  undefined2 uVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  HDC16 in_stack_0000ffa2;
  int iStack_58;
  int iStack_56;
  HDC16 HStack_54;
  int iStack_52;
  HDC16 HStack_50;
  int iStack_4e;
  undefined1 local_42 [0x20];
  uint uStack_22;
  uint uStack_20;
  HGDIOBJ16 HStack_1e;
  int iStack_1c;
  int iStack_1a;
  HDC16 HStack_18;
  int iStack_16;
  HDC16 HStack_14;
  int local_12;
  HDC16 HStack_10;
  int iStack_e;
  HDC16 HStack_c;
  int local_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_6 = 0x1;
  iStack_4 = 0x1;
  local_a = 0x0;
  iStack_8 = 0x0;
  iStack_1c = 0x0;
  HStack_1e = 0x0;
  pvVar10 = (void *)(param_2 >> 0x10);
  iVar9 = (int)param_2;
  uStack_20 = *(byte *)(iVar9 + 0x4) & 0x8;
  uStack_22 = *(byte *)(iVar9 + 0x56) & 0x1;
  mode = (void *)BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_42),param_1);
  hdc = SetMapMode16(0x1,(short)mode);
  pvVar14 = (void *)param_1;
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_12),param_1);
  iVar3 = iStack_e;
  iVar1 = iStack_e + -0x1;
  HVar4 = HStack_c;
  HVar2 = HStack_c - 0x1;
  _iStack_e = CONCAT22(HVar2,iVar1);
  if (uStack_22 != 0x0)
  {
    iStack_1a = (int)_local_12;
    HStack_18 = (HDC16)((ulong)_local_12 >> 0x10);
    _local_12 = CONCAT22(HStack_18 + 0x2,iStack_1a + 0x2);
    _iStack_e = CONCAT22(HVar4 + -0x3,iVar3 + -0x3);
    iStack_16 = iVar1;
    HStack_14 = HVar2;
  }
  if (*(char *)(iVar9 + 0x6) != '\0')
  {
    iStack_1c = 0x1;
    if (*(int *)(iVar9 + 0x5a) != 0x0)
    {
      pvVar14 = mode;
      HStack_1e = SelectObject16(0x1538,*(HGDIOBJ16 *)(iVar9 + 0x5a));
    }
    pcVar5 = (char *)(iVar9 + 0x6);
    pvVar13 = mode;
    uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,pcVar5));
    DrawText16(0x400,(void *)CONCAT22(uVar6,unaff_SS),(int16_t)pcVar5,
               (void *)CONCAT22(pvVar14,pvVar13),in_stack_0000ffa2);
    iStack_8 = (int)((HStack_c - iStack_4) + iStack_8) / 0x2 + HStack_10;
    iStack_4 += iStack_8;
    local_a = ((iStack_e - iStack_6) + local_a) / 0x2 + local_12;
    iStack_6 += local_a;
  }
  obj = CreatePen16((short)u32_1050_5ec2,(short)(u32_1050_5ec2 >> 0x10),0x1);
  obj_00 = CreatePen16((short)u32_1050_5ebe,(short)(u32_1050_5ebe >> 0x10),0x1);
  pvVar14 = mode;
  obj_01 = SelectObject16(0x1538,obj);
  if (uStack_22 != 0x0)
  {
    iStack_4e = 0x0;
    do
    {
      MoveTo16(HStack_14,iStack_1a,(short)mode);
      LineTo16(HStack_14,iStack_16,(short)mode);
      LineTo16(HStack_18,iStack_16,(short)mode);
      LineTo16(HStack_18,iStack_1a,(short)mode);
      LineTo16(HStack_14,iStack_1a,(short)mode);
      HStack_18 += 0x1;
      iStack_1a += 0x1;
      iStack_16 += -0x1;
      HStack_14 -= 0x1;
      iStack_4e += 0x1;
    } while (iStack_4e < 0x1);
  }
  if ((*(byte *)(iVar9 + 0x4) & 0x2) == 0x0)
  {
    HStack_54 = (HDC16)((ulong)_local_12 >> 0x10);
    iStack_52 = (int)_iStack_e;
    iStack_4e = 0x0;
    iStack_56 = local_12;
    HStack_50 = HStack_c;
    do
    {
      SelectObject16(0x1538,obj);
      MoveTo16(HStack_50,iStack_56,(short)mode);
      LineTo16(HStack_50,iStack_52,(short)mode);
      LineTo16(HStack_54,iStack_52,(short)mode);
      iStack_58 = 0x0;
      do
      {
        pvVar14 = mode;
        SelectObject16(0x1538,obj_00);
        LineTo16(HStack_54,iStack_56,(short)mode);
        LineTo16(HStack_50,iStack_56,(short)mode);
        iStack_58 += 0x1;
      } while (iStack_58 < 0x2);
      HStack_54 += 0x1;
      iStack_56 += 0x1;
      iStack_52 += -0x1;
      HStack_50 -= 0x1;
      iStack_4e += 0x1;
    } while (iStack_4e < 0x2);
  }
  else
  {
    MoveTo16(HStack_c,local_12,(short)mode);
    LineTo16(HStack_10,local_12,(short)mode);
    LineTo16(HStack_10,iStack_e + 0x1,(short)mode);
    if (iStack_1c != 0x0)
    {
      iStack_8 += 0x2;
      local_a += 0x2;
      iStack_6 += 0x2;
      iStack_4 += 0x2;
    }
  }
  MoveTo16(0x0,0x0,(short)mode);
  if (iStack_1c != 0x0)
  {
    if ((*(byte *)(iVar9 + 0x4) & 0x4) == 0x0)
    {
      color = (undefined *)u16_1050_5ec8;
      puVar8 = PTR_p_CurrentHeapContext_1050_5ec6;
      if (uStack_20 != 0x0)
      {
        color = PTR_DAT_1050_0000_1050_5ecc;
        puVar8 = (undefined *)u16_1050_5eca;
      }
      hdc_00 = SetTextColor16((HDC16)puVar8,(COLORREF)color);
      puVar8 = color;
      hdc_01 = SetBkColor16(0x0,0x100);
      pcVar5 = (char *)(iVar9 + 0x6);
      pvVar13 = mode;
      uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,pcVar5));
      DrawText16(0x1,(void *)CONCAT22(uVar6,unaff_SS),(int16_t)pcVar5,
                 (void *)CONCAT22(pvVar14,pvVar13),hdc_01);
      SetTextColor16(hdc_00,(COLORREF)color);
      SetBkColor16(hdc_01,(COLORREF)puVar8);
    }
    else
    {
      HVar7 = GetStockObject16(0x1);
      uVar11 = 0x0;
      pvVar12 = NULL;
      pvVar13 = mode;
      uVar6 = strlen_get_length((char *)CONCAT22(pvVar10,(char *)(iVar9 + 0x6)));
      GrayString16(iStack_4 - iStack_8,iStack_6 - local_a,iStack_8,local_a,uVar6,
                   (LPARAM)CONCAT22(uVar11,pvVar10),(void *)CONCAT22(HVar7,pvVar12),
                   (HBRUSH16)pvVar13,(HDC16)pvVar14);
    }
    if (HStack_1e != 0x0)
    {
      SelectObject16(0x1538,HStack_1e);
    }
  }
  SelectObject16(0x1538,obj_01);
  SetMapMode16(hdc,(short)mode);
  DeleteObject16(obj);
  DeleteObject16(obj_00);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_42),param_1);
  return;
}



// Duplicates a provided string and stores it along with a 16-bit ID into a metadata
// structure.

void __stdcall16far
UI_Component_Set_Metadata_Strings_a626(void *param_1,char *param_2,uint16_t param_3)
{
  char *pcVar1;
  
  pcVar1 = strdup_allocate((char *)param_2);
  *(char **)param_1 = pcVar1;
  *(uint16_t *)((int)(void *)param_1 + 0x2) = param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a multi-line message box with a summary report using string resources
// 0x7EF-0x7F2.

void __stdcall16far UI_Show_Summary_Report_MessageBox_a85a(u32 param_1)
{
  char *ptr;
  undefined2 reg_dx;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7ef,reg_dx));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f0,unaff_SS));
  strcat_append((char *)CONCAT22(reg_dx,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f1,unaff_SS));
  strcat_append((char *)CONCAT22(reg_dx,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f2,unaff_SS));
  strcat_append((char *)CONCAT22(reg_dx,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Exhaustive refresh logic for the entity detail/research dialog. Formats status
// strings, updates value labels, and iterates through 36 research categories to
// populate dynamic control pairs.

void __stdcall16far UI_SubDialog_TypeAC08_Refresh_Logic_a94a(void *param_1)
{
  int iVar1;
  int iVar2;
  uint16_t uVar3;
  char *pcVar4;
  HWND16 HVar5;
  int iVar6;
  undefined2 uVar7;
  void *pvVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  bool bVar10;
  char *context;
  long lVar11;
  void *pvVar12;
  u16 uStack_120;
  void *pvStack_11e;
  HWND16 HStack_116;
  HWND16 HStack_114;
  char local_102 [0x100];
  
  context = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar8 = (void *)param_1;
  Entity_Format_Full_Name_Label_Logic
            ((char *)context,(long)CONCAT22(unaff_SS,local_102));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1f2,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  Entity_Get_Category_Name_Logic
            (context,local_102,unaff_SS,(int)*(undefined4 *)((int)pvVar8 + 0x94),
             (int)((ulong)*(undefined4 *)((int)pvVar8 + 0x94) >> 0x10));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1774,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  Entity_Format_Detailed_Status_Label_Logic
            ((long)context,local_102,*(long *)((int)pvVar8 + 0x94));
  SetDlgItemText((char *)CONCAT22(unaff_SS,local_102),0x1773,
                 *(HWND16 *)((int)pvVar8 + 0x6));
  uVar3 = UI_Component_Get_Entity_Value_at_1A_Logic_6ddc
                    ((void *)*(undefined4 *)((int)pvVar8 + 0x94));
  SetDlgItemInt(0x0,uVar3,0x1f5,*(HWND16 *)((int)pvVar8 + 0x6));
  uVar3 = UI_Component_Get_Entity_Special_Status_Logic_6e14
                    ((void *)*(undefined4 *)((int)pvVar8 + 0x94));
  SetDlgItemInt(0x0,uVar3,0x1f6,*(HWND16 *)((int)pvVar8 + 0x6));
  if (*(int *)((int)pvVar8 + 0x98) != 0x0)
  {
    lVar11 = Entity_Get_Indirect_Long_at_Offset_14_Logic((long)context);
    iVar6 = (int)((ulong)lVar11 >> 0x10);
    iVar2 = (int)lVar11;
    if (iVar6 != 0x0 || iVar2 != 0x0)
    {
      lVar11 = *(long *)((int)*(undefined4 *)((int)pvVar8 + 0x94) + 0x26);
      HStack_114 = 0x1798;
      HStack_116 = 0x17c3;
      *(undefined2 *)((int)pvVar8 + 0xea) = 0x0;
      for (uStack_120 = 0x1; (int)uStack_120 < 0x25; uStack_120 += 0x1)
      {
        if (lVar11 == 0x0)
        {
          pvVar12 = NULL;
        }
        else
        {
          pvVar12 = UI_Item_List_Find_Item_FarPtr_Logic
                              ((int)lVar11,(int)((ulong)lVar11 >> 0x10),uStack_120);
        }
        uVar7 = (undefined2)((ulong)pvVar12 >> 0x10);
        bVar10 = *(long *)(uStack_120 * 0x4 + iVar2) != 0x0;
        if (bVar10)
        {
          pcVar4 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uStack_120);
          SetDlgItemText((char *)CONCAT22(uVar7,pcVar4),HStack_114,
                         *(HWND16 *)((int)pvVar8 + 0x6));
          SetDlgItemInt(0x0,*(uint16_t *)(iVar2 + uStack_120 * 0x4),HStack_116,
                        *(HWND16 *)((int)pvVar8 + 0x6));
        }
        pvStack_11e = (void *)pvVar12;
        if (pvVar12 != NULL)
        {
          if (!bVar10)
          {
            pcVar4 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uStack_120);
            SetDlgItemText((char *)CONCAT22(uVar7,pcVar4),HStack_114,
                           *(HWND16 *)((int)pvVar8 + 0x6));
          }
          SetDlgItemInt(0x0,(uint16_t)pvStack_11e,HStack_116,
                        *(HWND16 *)((int)pvVar8 + 0x6));
          iVar1 = *(int *)((int)pvVar8 + 0xea);
          HVar5 = GetDlgItem16(HStack_114,*(short *)((int)pvVar8 + 0x6));
          *(HWND16 *)((int)pvVar8 + iVar1 * 0x2 + 0x9a) = HVar5;
          *(int *)((int)pvVar8 + 0xea) = *(int *)((int)pvVar8 + 0xea) + 0x1;
          iVar1 = *(int *)((int)pvVar8 + 0xea);
          HVar5 = GetDlgItem16(HStack_116,*(short *)((int)pvVar8 + 0x6));
          *(HWND16 *)((int)pvVar8 + iVar1 * 0x2 + 0x9a) = HVar5;
          *(int *)((int)pvVar8 + 0xea) = *(int *)((int)pvVar8 + 0xea) + 0x1;
          bVar10 = true;
        }
        if (bVar10)
        {
          HStack_114 += 0x1;
          HStack_116 += 0x1;
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a message box with detailed information about a building using string
// resources 0x7F3 and 0x7F4.

void __stdcall16far
UI_Show_Building_Info_MessageBox_ad66
          (uint16_t param_1,uint16_t param_2,uint16_t param_3)
{
  char *ptr;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  uint8_t local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7f3,param_3));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7f4,unaff_SS));
  strcat_append((char *)CONCAT22(param_3,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,(char *)local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Refreshes the labels in a building status dialog. Iterates through 10 entity slots,
// calculates time remaining until completion (Current Tick - Entity Tick), and formats
// status descriptions.

void __stdcall16far UI_Building_Status_Dialog_Refresh_Logic_ae04(void *param_1)
{
  int iVar1;
  bool bVar2;
  void *pvVar3;
  char *pcVar4;
  uint32_t uVar11;
  undefined2 uVar5;
  void *pvVar6;
  long *plVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *puVar9;
  void *pvVar9;
  u32 uVar10;
  int iStack_118;
  uint8_t local_102 [0x100];
  
  puVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar6 = (void *)param_1;
  Entity_Format_Full_Name_Label_Logic((char *)puVar9,(long)CONCAT22(unaff_SS,local_102))
  ;
  SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),0x1778,
                 *(HWND16 *)((int)pvVar6 + 0x6));
  pvVar9 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                     ((void *)*(undefined4 *)((int)pvVar6 + 0x94));
  uVar11 = (uint32_t)((ulong)pvVar9 >> 0x10);
  pvVar3 = (void *)pvVar9;
  uVar10 = Simulator_Global_Get_Current_Tick_8326();
  uVar5 = (undefined2)(uVar10 >> 0x10);
  iVar1 = 0x0;
  bVar2 = false;
  for (iStack_118 = 0x0; iStack_118 < 0xa; iStack_118 += 0x1)
  {
    if (*(int *)((int)pvVar3 + iStack_118 * 0xc + 0x22) != 0x0 ||
        *(int *)((int)pvVar3 + iStack_118 * 0xc + 0x20) != 0x0)
    {
      plVar7 = (long *)((int)pvVar3 + iStack_118 * 0xc + 0x20);
      pcVar4 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(plVar7 + 0x1));
      SetDlgItemText((char *)CONCAT22(uVar5,pcVar4),iVar1 + 0x1d2,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      _wsprintf16((uint8_t *)CONCAT22(unaff_SS,local_102),s__ld_1050_5ef4,
                  (void *)(*plVar7 - uVar10));
      SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),iVar1 + 0x1dc,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      UI_Format_Status_Description_Logic
                ((void *)(void *)*(undefined4 *)((int)pvVar6 + 0x98),
                 (char *)((ulong)*(undefined4 *)((int)pvVar6 + 0x98) >> 0x10),local_102)
      ;
      SetDlgItemText((uint8_t *)CONCAT22(unaff_SS,local_102),iVar1 + 0x1e6,
                     *(HWND16 *)((int)pvVar6 + 0x6));
      iVar1 += 0x1;
      bVar2 = true;
    }
  }
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SetDlgItemText((char *)CONCAT22(uVar5,pcVar4),0x1d2,*(HWND16 *)((int)pvVar6 + 0x6));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a managed list, generates formatted labels for each item, and
// updates the component's metadata strings.

void __stdcall16far
UI_SubDialog_Populate_Labels_from_List_b17c(void *this_ptr,void *list_ptr)
{
  int *piVar1;
  char *pcVar2;
  uint16_t segment;
  uint16_t uVar3;
  long lVar4;
  undefined4 in_stack_00000008;
  undefined4 uStack_c;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    piVar1 = (int *)*(undefined4 *)((int)this_ptr + 0x90);
    if (*piVar1 <= iStack_4) break;
    *(undefined2 *)(iStack_4 * 0xa + (int)*(undefined4 *)((int *)piVar1 + 0x1) + 0x4) =
         *(undefined2 *)(iStack_4 * 0x2 + (int)in_stack_00000008);
    iStack_4 += 0x1;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  segment = (uint16_t)((ulong)lVar4 >> 0x10);
  uStack_c = (void *)*(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x90) + 0x2);
  uVar3 = segment;
  for (iStack_4 = 0x0; iStack_4 < *(int *)*(undefined4 *)((int)this_ptr + 0x90);
      iStack_4 += 0x1)
  {
    pcVar2 = UI_Generate_Formatted_Label_Logic
                       ((int)lVar4,segment,
                        (char *)(char *)*(undefined4 *)
                                         ((int)*(undefined4 *)((int)this_ptr + 0x90) +
                                         0x6));
    UI_Component_Set_Metadata_Strings_a626
              (uStack_c,(char *)CONCAT22(uVar3,pcVar2),uVar3);
    uStack_c = (void *)CONCAT22((int)((ulong)uStack_c >> 0x10),
                                (void *)((int)uStack_c + 0xa));
  }
  return;
}



// Constructor for a specialized UI sub-item or control using vtable 0xC53E. Inherits
// from 0x3AA8 and 0x3AB0.

ushort __stdcall16far
UI_SubItem_TypeC53E_ctor_init_bf3e(void *this_ptr,ushort parent_hwnd)
{
  astruct_10 *uVar1;
  undefined2 in_stack_00000008;
  
  *_this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *_this_ptr = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *(undefined2 *)((int)this_ptr + 0x4) = in_stack_00000008;
  *_this_ptr = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  *(undefined4 *)((int)this_ptr + 0x6) = 0x0;
  *_this_ptr = 0xc53e;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a multi-line message box summarizing a trade report using string resources
// 0x7E9-0x7EB.

void __stdcall16far
UI_Show_Trade_Report_MessageBox_cce4(void *this_ptr,u16 param_2,u16 param_3)
{
  char *ptr;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7e9,param_3));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7ea,unaff_SS));
  strcat_append((char *)CONCAT22(param_3,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7eb,unaff_SS));
  strcat_append((char *)CONCAT22(param_3,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// Iterates through a managed list, formats each entry's name using template
// 0x1050:5F12, and appends the result to a dialog list box.

void __stdcall16far
UI_Dialog_Populate_Formatted_List_Box_ce12
          (astruct_501 *this_ptr,ushort segment,void *list_ptr,int control_id,
          ushort param_5)
{
  u16 unaff_SS;
  long lVar1;
  char local_10a [0x100];
  char local_a [0x8];
  
  init_long_pair(local_a,(long)_list_ptr);
  while( true )
  {
    lVar1 = get_next_list_item(local_a);
    if (lVar1 == 0x0) break;
    _wsprintf16((char *)CONCAT22(unaff_SS,local_10a),string_1050_5f12,
                (void *)*(undefined4 *)((int)lVar1 + 0x4));
    SendDlgItemMessage16
              ((HWND16)local_10a,unaff_SS,0x0,0x401,
               CONCAT22(this_ptr->field6_0x6,param_5));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays an exhaustive multi-line status report in message boxes using string
// resources 0x7DA-0x7E5. Equivalent to 1038:8DDA but with different string ranges.

void __stdcall16far
UI_Show_Colony_Status_Report_MessageBox_d3d0(u32 param_1,char *param_2)
{
  char *ptr;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             (long)CONCAT22(0x7da,param_2));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7db,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7dc,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7dd,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7de,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7df,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             (long)CONCAT22(0x7e0,param_2));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e1,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e2,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e3,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e4,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x7e5,unaff_SS));
  strcat_append((char *)CONCAT22(param_2,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}
