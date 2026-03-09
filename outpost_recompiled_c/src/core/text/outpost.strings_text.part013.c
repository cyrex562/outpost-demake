/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 13/19
 * Original lines (combined): 48255-57544
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates the Build Site building list by iterating through resource-defined building
// types and creating UI Transaction items for each. Handles different building
// categories (Type 5, Type 6, etc.).

void __stdcall16far
Build_Site_List_Initialize_Items_Internal(long context,long src_context)
{
  undefined2 *puVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  uint extraout_DX_00;
  undefined2 uVar7;
  uint uVar8;
  uint extraout_DX_01;
  uint extraout_DX_02;
  astruct_430 *uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  char *pcVar12;
  long lVar13;
  char *in_stack_0000ffce;
  int iVar14;
  undefined1 local_26 [0x8];
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  char *pcStack_16;
  astruct_491 *paStack_12;
  uint uStack_10;
  undefined4 *puStack_e;
  uint uStack_c;
  int iStack_a;
  char *pcStack_8;
  u16 uStack_4;
  
  uVar10 = (undefined2)((ulong)context >> 0x10);
  uVar9 = (astruct_430 *)context;
  paStack_12 = *(astruct_491 **)&uVar9->field14_0xe;
  uVar6 = *(uint *)((int)&uVar9->field14_0xe + 0x2);
  uStack_10 = uVar6;
  puStack_e = &paStack_12->field0_0x0;
  uStack_c = uVar6;
  if (uVar6 != 0x0 || paStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)paStack_12->field0_0x0)();
    uVar6 = extraout_DX;
  }
  paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffce,0xc));
  uVar5 = uVar6 | (uint)paStack_12;
  uStack_10 = uVar6;
  if (uVar5 == 0x0)
  {
    pvVar2 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paStack_12,uVar6);
  }
  *(void **)&uVar9->field14_0xe = pvVar2;
  *(uint *)((int)&uVar9->field14_0xe + 0x2) = uVar5;
  for (uStack_4 = 0x21; -0x1 < (int)uStack_4; uStack_4 -= 0x1)
  {
    pcStack_16 = UI_Component_Find_Item_in_List_22_Logic_7c28
                           ((void *)src_context,uStack_4);
    pcVar3 = (char *)pcStack_16;
    uVar6 = (uint)((ulong)pcStack_16 >> 0x10) | (uint)pcVar3;
    if (uVar6 != 0x0)
    {
      Lookup_Entity_Description_Wrapper_c0ca(uStack_4);
      pcVar3 = strdup_allocate(pcVar3);
      uStack_1a = (char *)CONCAT22(uVar6,pcVar3);
      puStack_e = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
      uStack_c = uVar6;
      if (uVar6 == 0x0 && puStack_e == NULL)
      {
        uStack_1e = NULL;
      }
      else
      {
        uStack_1e = (char *)UI_Transaction_Item_Subclass_ctor_4A92_Logic
                                      ((long)CONCAT22(uVar6,puStack_e),(long)pcStack_16,
                                       (long)uStack_1a,uStack_4);
      }
      puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
      (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                         (int)((ulong)uVar9->field14_0xe >> 0x10),uStack_1e);
    }
  }
  pcStack_8 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)src_context);
  iStack_a = *(int *)((char *)pcStack_8 + 0xc);
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_a);
  if (iVar4 != 0x0)
  {
    uStack_1e = pcStack_8;
    uStack_1a = *(char **)((char *)pcStack_8 + 0x20);
    init_long_pair(local_26,(long)uStack_1a);
    while( true )
    {
      pcStack_16 = (char *)get_next_list_item(local_26);
      uVar5 = (uint)((ulong)pcStack_16 >> 0x10);
      pcVar3 = (char *)pcStack_16;
      uVar6 = uVar5 | (uint)pcVar3;
      if (uVar6 == 0x0) break;
      iVar4 = *(int *)(pcVar3 + 0x6);
      if (iVar4 == 0x7)
      {
LAB_1018_53f0:
        pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(pcVar3 + 0x6));
        pcVar3 = strdup_allocate(pcVar3);
        uVar5 = uVar6;
        paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          in_stack_0000ffce = NULL;
          uVar11 = 0x0;
        }
        else
        {
          uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
          pcVar12 = (char *)UI_Transaction_Item_Type5_ctor
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)((char *)pcStack_16 + 0xa),
                                       (long)CONCAT22(uVar6,pcVar3),
                                       *(int *)((char *)pcStack_16 + 0x6));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          in_stack_0000ffce = (char *)pcVar12;
        }
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),in_stack_0000ffce,
                           uVar11,in_stack_0000ffce,uVar11);
        uVar6 = extraout_DX_00;
      }
      else if (((0x5 < iVar4 + -0x7) && (!SBORROW2(iVar4 + -0x7,0x6))) &&
              (iVar4 + -0xd < 0x2)) goto LAB_1018_53f0;
      uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
      if (*(int *)((char *)pcStack_16 + 0x8) != 0x0)
      {
        pcVar3 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8
                           (*(u16 *)((char *)pcStack_16 + 0x8));
        in_stack_0000ffce = strdup_allocate(pcVar3);
        uVar5 = uVar6;
        puStack_e = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
        uStack_c = uVar6;
        if (uVar6 == 0x0 && puStack_e == NULL)
        {
          uVar11 = 0x0;
          uVar7 = 0x0;
        }
        else
        {
          uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
          lVar13 = UI_Transaction_Item_Type6_ctor
                             ((long)CONCAT22(uVar6,puStack_e),
                              (ulong)*(uint *)((char *)pcStack_16 + 0xa),
                              (long)CONCAT22(uVar5,in_stack_0000ffce),
                              *(int *)((char *)pcStack_16 + 0x8));
          uVar7 = (undefined2)((ulong)lVar13 >> 0x10);
          uVar11 = (undefined2)lVar13;
        }
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),uVar11,uVar7,
                           in_stack_0000ffce,uVar5,uVar11);
      }
    }
  }
  uVar11 = (undefined2)((ulong)src_context >> 0x10);
  iVar4 = *(int *)((int)src_context + 0x40);
  iVar14 = (int)*(undefined4 *)((int)src_context + 0x3e);
  if (iVar4 != 0x0 || iVar14 != 0x0)
  {
    init_long_pair(local_26,CONCAT22(iVar4,iVar14));
    while( true )
    {
      lVar13 = get_next_list_item(local_26);
      uVar8 = (uint)((ulong)lVar13 >> 0x10);
      uVar6 = (uint)lVar13;
      uVar5 = uVar8 | uVar6;
      if (uVar5 == 0x0) break;
      if (*(int *)(uVar6 + 0x4) != 0x0)
      {
        pcVar3 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(*(u16 *)(uVar6 + 0x4));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        paStack_12 = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Subclass_ctor_4A92_Logic
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x4));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
        uVar5 = extraout_DX_01;
      }
      if (*(int *)(uVar6 + 0x6) != 0x0)
      {
        pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(uVar6 + 0x6));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        puStack_e = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_c = uVar5;
        if (uVar5 == 0x0 && puStack_e == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Type5_ctor
                                      ((long)CONCAT22(uVar5,puStack_e),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x6));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
        uVar5 = extraout_DX_02;
      }
      if (*(int *)(uVar6 + 0x8) != 0x0)
      {
        pcVar3 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(*(u16 *)(uVar6 + 0x8));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        paStack_12 = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Type6_ctor
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x8));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
      }
    }
  }
  return;
}



// Sets a far pointer to the currently active building object within the manager.

void __stdcall16far UI_Building_Manager_Set_Active_Object_Ptr(long context,long obj_ptr)
{
  *(long *)((int)context + 0xa) = obj_ptr;
  return;
}



// Releases the active building object, performing cleanup through an external call and
// clearing the internal pointer.

void __stdcall16far
UI_Building_Manager_Release_Active_Object(long context,long selection_ref)
{
  astruct_496 *paVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  paVar1 = (astruct_496 *)*(undefined4 *)((int)context + 0xa);
  UI_SubDialog_TypeD8C4_On_Selection_Change_d20c
            ((astruct_496 *)paVar1,(void *)((ulong)paVar1 >> 0x10),(void *)selection_ref
            );
  *(undefined4 *)((int)context + 0xa) = 0x0;
  return;
}



// Formats numeric values into strings and updates dialog controls 0x1BE and 0x1BF with
// the results. Likely used for displaying current/max values on a slider or resource
// bar.

void __stdcall16far
UI_Dialog_Format_and_Set_Slider_Values(long context,int value1,int value2)
{
  HWND16 HVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined4 in_stack_0000fff2;
  
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),s__d_1050_4242,
              (void *)CONCAT22((int)((ulong)in_stack_0000fff2 >> 0x10),value2));
  uVar2 = (undefined2)((ulong)context >> 0x10);
  HVar1 = GetDlgItem16(0x1be,*(short *)((int)context + 0x6));
  puVar3 = &stack0xfff4;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar3),HVar1);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),s__d_1050_4245,
              (void *)CONCAT22(puVar3,value1));
  HVar1 = GetDlgItem16(0x1bf,*(short *)((int)context + 0x6));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),HVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Slider component. Loads resource ID 0x39 (the slider bar/thumb
// graphics) and initializes base UI object vtables.

long __stdcall16far
UI_Slider_Component_ctor_init_resource_39(long this_ref,long parent,int id)
{
  astruct_422 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_422 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field4_0x6)[0x0] = 0x0;
  (&uVar1->field4_0x6)[0x1] = 0x0;
  uVar1->field6_0xa = (void *)parent;
  *(undefined2 *)this_ref = 0x66c0;
  uVar1->field2_0x2 = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar1->field4_0x6 = (uint16_t)lVar3;
  uVar1->field5_0x8 = (uint16_t)((ulong)lVar3 >> 0x10);
  return this_ref;
}



// Internal destructor for the UI Slider component. Reverts vtable pointers as it tears
// down the inheritance chain.

void __stdcall16far UI_Slider_Component_dtor_Internal_vtable_revert(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(undefined2 *)this_ref = 0x66c0;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  return;
}



// Draws a series of tick marks and boundaries for a linear scale or slider using GDI
// LineTo/MoveTo calls. Renders marks at endpoints and centers.

void __stdcall16far UI_Draw_Linear_Scale_Ticks_GDI(long context,HDC16 hdc)
{
  int iVar1;
  short *psVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  short *psVar6;
  undefined2 uVar7;
  int iStack_a;
  
  uVar7 = (undefined2)((ulong)context >> 0x10);
  uVar3 = *(undefined4 *)((int)context + 0x6);
  iVar1 = *(int *)((int)uVar3 + 0x30);
  uVar3 = *(undefined4 *)((int)context + 0x6);
  psVar2 = (short *)*(undefined4 *)((int)uVar3 + 0x1a);
  MoveTo16(0x5,*psVar2,hdc);
  uVar7 = (undefined2)((ulong)psVar2 >> 0x10);
  psVar5 = (short *)psVar2;
  LineTo16(0x5,psVar5[iVar1 * 0x4 + -0x2],hdc);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar6 = psVar5 + iStack_a * 0x4;
    iVar4 = (psVar6[0x2] - *psVar6 >> 0x1) + *psVar6;
    MoveTo16(0x5,iVar4,hdc);
    LineTo16(0xa,iVar4,hdc);
  }
  MoveTo16(0x5f,*psVar2,hdc);
  LineTo16(0x5f,psVar5[iVar1 * 0x4 + -0x2],hdc);
  for (iStack_a = 0x0; iStack_a < iVar1; iStack_a += 0x1)
  {
    psVar6 = psVar5 + iStack_a * 0x4;
    iVar4 = (psVar6[0x2] - *psVar6 >> 0x1) + *psVar6;
    MoveTo16(0x5f,iVar4,hdc);
    LineTo16(0x5a,iVar4,hdc);
  }
  return;
}



// Initializes 9 UI text controls within a panel using a batch of strings loaded from a
// resource ID. Iterates through a string table and applies each string to corresponding
// dialog items.

void __stdcall16far UI_Panel_Initialize_Text_Controls_from_Resource_Batch(long context)
{
  char *reg_ax;
  uint uVar1;
  HWND16 reg_dx;
  int iVar2;
  undefined2 uVar3;
  int iStack_c;
  char *pcStack_a;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  UI_Component_Load_Resource_by_Indexed_ID_Logic
            ((void *)(void *)*(undefined4 *)(iVar2 + 0x6));
  if (reg_dx != 0x0 || reg_ax != NULL)
  {
    pcStack_a = reg_ax;
    for (iStack_c = 0x0; iStack_c < 0x9; iStack_c += 0x1)
    {
      get_table_139A_entry_logic((int)*(undefined4 *)(iVar2 + 0x6));
      UI_Dialog_Set_Control_Text_from_Struct_ID(*(long *)(iVar2 + 0xa),pcStack_a,reg_dx);
      uVar1 = strlen_get_length((char *)CONCAT22(reg_dx,pcStack_a));
      pcStack_a = pcStack_a + uVar1 + 0x1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A WM_PAINT handler for UI components. Wraps BeginPaint/EndPaint and conditionally
// triggers either movie playback logic or a cleanup operation based on a resource flag.

void __stdcall16far UI_Component_OnPaint_Handler_Logic_Movie_or_Cleanup(long context)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  long lVar2;
  undefined1 local_22 [0x20];
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x8)
              );
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x8));
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lVar2 + 0x20) == 0x0)
  {
    UI_Component_Finalize_and_Signal_Complete_Logic_Internal(context);
    return;
  }
  UI_Component_Play_Fullscreen_Movie_and_Clean_Logic_Internal(context);
  return;
}



// Drawing logic for Build Item text. Calculates a centered rectangle within the
// viewport and renders the item's name string using DrawText16.

void __stdcall16far UI_Build_Item_Draw_Text_Logic(long context,HDC16 *hdc_ptr)
{
  int iVar1;
  COLORREF hdc;
  COLORREF hdc_00;
  int iVar2;
  COLORREF reg_dx;
  COLORREF color;
  astruct_413 *iVar3;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000ffe2;
  void *LPCSTR_str;
  HDC16 in_stack_0000ffe6;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (astruct_413 *)context;
  if ((iVar3->field257_0x108 != NULL) && (*(char *)iVar3->field257_0x108 != '\0'))
  {
    iVar2 = (int)((ulong)in_stack_0000ffe2 >> 0x10);
    hdc = SetTextColor16(0x8000,0x0);
    color = reg_dx;
    hdc_00 = SetBkColor16(0x0,0x200);
    if (iVar3->field256_0x106 == 0x0)
    {
      in_stack_0000ffe6 = 0x0;
      iVar1 = iVar3->field259_0x10e;
      LPCSTR_str = (void *)CONCAT22(iVar2,(void *)*_hdc_ptr);
      DrawText16(0x410,(void *)CONCAT22(0xffff,unaff_SS),
                 (int16_t)(void *)iVar3->field257_0x108,LPCSTR_str,0x0);
      iVar2 = (int)((ulong)LPCSTR_str >> 0x10);
      iVar3->field253_0x100 = (0x280 - iVar1) / 0x2;
      iVar3->field254_0x102 = iVar3->field258_0x10c;
      iVar3->field255_0x104 = iVar3->field253_0x100 + iVar1;
      iVar1 = iVar3->field254_0x102;
      iVar3->field256_0x106 = iVar1;
      if (iVar3->field248_0xf8 <= iVar1)
      {
        iVar2 = iVar1 - iVar3->field248_0xf8;
        iVar3->field254_0x102 = iVar3->field254_0x102 - iVar2;
        iVar3->field256_0x106 = iVar3->field256_0x106 - iVar2;
      }
    }
    DrawText16(0x10,(void *)CONCAT22(0xffff,unaff_SS),
               (int16_t)(void *)iVar3->field257_0x108,
               (void *)CONCAT22(iVar2,(void *)*_hdc_ptr),in_stack_0000ffe6);
    SetTextColor16(hdc,reg_dx);
    SetBkColor16(hdc_00,color);
  }
  return;
}



// Helper function that resets an object's vtable to the Gameplay Object base (0xDF3C).

long __stdcall16far Gameplay_Object_Base_vtable_init_Helper(long this_ref)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1008;
  *(undefined2 *)this_ref = 0xdf3c;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 54 (Resource 0x36). Initializes vtable and loads
// graphics.

long __stdcall16far UI_Control_Type54_ctor_init_alternative(long this_ref,int id)
{
  astruct_412 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_412 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field4_0x6)[0x0] = 0x0;
  (&uVar1->field4_0x6)[0x1] = 0x0;
  *(undefined2 *)this_ref = 0xe228;
  uVar1->field2_0x2 = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x36);
  uVar1->field4_0x6 = (uint16_t)lVar3;
  uVar1->field5_0x8 = (uint16_t)((ulong)lVar3 >> 0x10);
  return this_ref;
}



undefined2 * __stdcall16far
UI_Control_Subclass_E1EE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  ptr = (undefined2 *)param_1;
  *param_1 = (char *)s_0_020_1050_3ab0;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



// WM_PAINT handler for a UI component. Renders a background color if the width is >
// 640, then renders an internal bitmap and palette.

void __stdcall16far UI_Component_OnPaint_Render_Internal_Bitmap_v2(void *context)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  HBRUSH16 h_brush16;
  HPALETTE16 HVar4;
  astruct_394 *iVar3;
  HDC16 unaff_DI;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  HDC16 local_24;
  undefined1 local_22 [0x20];
  
  local_24 = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),
                          *(HWND16 *)((int)context + 0x4));
  if (0x280 < *(int *)((int)context + 0xa))
  {
    h_brush16 = CreateSolidBrush16(0x70b);
    FillRect16(h_brush16,(void *)CONCAT22(local_24,unaff_SS),unaff_DI);
    DeleteObject16(h_brush16);
  }
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)((int)context + 0x6) + 0xe)
  ;
  uVar3 = *puVar1;
  puVar2 = (undefined2 *)((int)uVar3 + 0x8);
  HVar4 = (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             &local_24);
  puVar2 = (undefined2 *)((int)uVar3 + 0x4);
  (*(code *)*puVar2)(0x1538,puVar1,*(undefined2 *)((int)context + 0x10),
                     *(undefined2 *)((int)context + 0xe),&local_24);
  HVar4 = SelectPalette16(0x0,HVar4,local_24);
  DeleteObject16(HVar4);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)((int)context + 0x4));
  return;
}



// WARNING: Variable defined which should be unmapped: local_c
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

char * __stdcall16far UI_Grid_Control_Action_Dispatcher_0ec4(u32 *param_1,char *param_2)
{
  undefined2 *puVar1;
  undefined1 uVar2;
  char cVar3;
  u32 *puVar4;
  void *pvVar5;
  char *pcVar6;
  HWND16 reg_dx;
  undefined2 extraout_DX;
  undefined2 uVar7;
  uint reg_bx;
  void *pvVar8;
  char *pcVar9;
  ushort w_param;
  undefined2 uVar10;
  int action;
  u32 local_c;
  
  pcVar9 = (char *)ZEXT24(param_2);
  puVar4 = (u32 *)param_1;
  uVar10 = (undefined2)((ulong)param_1 >> 0x10);
  if (param_2 == (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1c)
  {
    pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x30);
    String_Wrapper_Object_Get_String_Logic((void *)pvVar8);
    puVar1 = (undefined2 *)((int)*param_1 + 0x14);
    (*(code *)*puVar1)();
    uVar7 = extraout_DX;
    pcVar6 = String_Wrapper_Object_Get_String_Logic((void *)pvVar8);
    pcVar9 = (char *)ZEXT24(pcVar6);
    Simulator_Set_Entity_Name_by_Resource_Logic_maybe
              ((void *)(void *)*(undefined4 *)((int)puVar4 + 0xf2),
               (char *)((ulong)*(undefined4 *)((int)puVar4 + 0xf2) >> 0x10));
    return (char *)CONCAT22(uVar7,(char *)pcVar9);
  }
  if (param_2 < (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x1d)
  {
    if (param_2 == (char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x14)
    {
      action = 0x3;
      pcVar9 = (char *)0xf3;
    }
    else
    {
      if ((char *)s_You_may_not_run_a_turn__The_game_1050_00df + 0x14 < param_2)
      goto switchD_1020_0feb_caseD_0;
      cVar3 = (char)param_2;
      uVar2 = (undefined1)((uint)param_2 >> 0x8);
      if (cVar3 == 'o')
      {
        pvVar5 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        pcVar6 = (char *)WinHelp16(0x28,0x0,(void *)CONCAT22(pvVar5,(void *)0x1),reg_dx);
        return (char *)CONCAT22(reg_dx,pcVar6);
      }
      if (cVar3 == 'r')
      {
        pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x30);
        String_Wrapper_Object_Set_String_Logic
                  ((void *)pvVar8,(char *)((ulong)pvVar8 >> 0x10));
        pcVar9 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                           (_p_UISubDialogTable,(uint16_t)puVar4[0x2],0x3);
        return pcVar9;
      }
      pcVar9 = (char *)(ulong)CONCAT11(uVar2,cVar3 + '\x0f');
      if ((char)(cVar3 + '\x0f') == '\0')
      {
        action = 0x1;
      }
      else
      {
        pcVar9 = (char *)(ulong)CONCAT11(uVar2,cVar3 + '\x0e');
        if ((char)(cVar3 + '\x0e') != '\0') goto switchD_1020_0feb_caseD_0;
        action = 0x2;
      }
    }
    UI_Grid_16_Control_Update_Logic(*(long *)((int)puVar4 + 0xf2),action);
    return (char *)CONCAT22(reg_dx,(char *)pcVar9);
  }
  pcVar6 = param_2 + -0x129;
  pcVar9 = (char *)ZEXT24(pcVar6);
  if ((char *)((int)(u16 *)&p_LastAllocatedBlock + 0x1U) < pcVar6)
  {
switchD_1020_0feb_caseD_0:
    return (char *)CONCAT22(reg_dx,(char *)pcVar9);
  }
  pcVar9 = (char *)(ulong)reg_bx;
  switch(pcVar6)
  {
  default:
    goto switchD_1020_0feb_caseD_0;
  case (char *)0x1:
    uVar10 = (undefined2)puVar4[0x2];
    w_param = 0xf012;
    break;
  case (char *)0x3:
    uVar10 = (undefined2)puVar4[0x2];
    w_param = 0xf020;
  }
  pcVar6 = (char *)PostMessage16(0x0,0x0,w_param,CONCAT22((undefined2)local_c,uVar10));
  return (char *)CONCAT22(reg_dx,pcVar6);
}



// Internal destructor for UI Control Type 7. Removes the item from its parent container
// and reverts vtables.

void __stdcall16far UI_Control_Type7_dtor_Internal_Cleanup_logic_1f74(long this_ref)
{
  astruct_382 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_382 *)this_ref;
  *(char **)this_ref = (char *)s_218_bmp_1050_2516 + 0x2;
  uVar1->field2_0x2 = 0x1020;
  UI_Container_Remove_Item_at_Offset_4_Logic((void *)(void *)uVar1->field5_0x6,this_ref)
  ;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



// Bulk initializes 9 text controls in a UI panel using a provided string pointer and
// resource ID table. Similar to 1018:6630 but takes the string pointer directly.

void __stdcall16far
UI_Panel_Initialize_Text_Controls_from_Params_2488(undefined4 param_1)
{
  char *reg_ax;
  uint uVar1;
  HWND16 reg_dx;
  int iVar2;
  undefined2 uVar3;
  int iStack_c;
  char *pcStack_a;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  UI_Component_Load_Resource_by_Indexed_ID_Logic
            ((void *)(void *)*(undefined4 *)(iVar2 + 0x6));
  if (reg_dx != 0x0 || reg_ax != NULL)
  {
    pcStack_a = reg_ax;
    for (iStack_c = 0x0; iStack_c < 0x9; iStack_c += 0x1)
    {
      get_table_139A_entry_logic((int)*(undefined4 *)(iVar2 + 0x6));
      UI_Dialog_Set_Control_Text_Wrapper(*(long *)(iVar2 + 0xa),pcStack_a,reg_dx);
      uVar1 = strlen_get_length((char *)CONCAT22(reg_dx,pcStack_a));
      pcStack_a = pcStack_a + uVar1 + 0x1;
    }
  }
  return;
}
