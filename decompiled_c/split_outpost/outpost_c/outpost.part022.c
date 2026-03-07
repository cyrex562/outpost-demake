/*
 * Source: outpost.c
 * Chunk: 22/117
 * Original lines: 24168-25360
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads research project strings (IDs 0x430-0x432, 0x440) via 1050:14CC.
// Performs indirect calls through vtable index 0 and offset 4.

void __stdcall16far UI_Populate_Research_Project_List_Logic(void *this,void *colony)
{
  void *this_ptr;
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  char *pcVar4;
  undefined2 uVar5;
  uint extraout_DX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int extraout_DX_00;
  undefined2 uVar11;
  undefined2 uVar12;
  long lVar13;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000ffda;
  long lVar14;
  
  uVar5 = (undefined2)((ulong)in_stack_0000ffda >> 0x10);
  uVar6 = *(uint *)((int)this + 0x18);
  if (uVar6 != 0x0 || (undefined4 *)*(int *)((int)this + 0x16) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x16);
    (*(code *)*puVar1)();
    uVar6 = extraout_DX;
  }
  lVar13 = CONCAT22(uVar5,0xc);
  this_00 = allocate_memory(lVar13);
  uVar5 = (undefined2)((ulong)lVar13 >> 0x10);
  uVar7 = uVar6 | (uint)this_00;
  if (uVar7 == 0x0)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar6);
  }
  *(undefined2 *)((int)this + 0x16) = pvVar3;
  *(uint *)((int)this + 0x18) = uVar7;
  bVar2 = false;
  this_ptr = (void *)*(undefined4 *)((int)in_stack_00000008 + 0x1f6);
  lVar13 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x2);
  iVar8 = (int)((ulong)lVar13 >> 0x10);
  if ((-0x1 < lVar13) && ((lVar13 != 0x0 || (false))))
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x430);
    lVar14 = CONCAT22(uVar5,0x14);
    uVar12 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(lVar14);
    uVar5 = (undefined2)((ulong)lVar14 >> 0x10);
    if (iVar9 == 0x0 && pvVar3 == NULL)
    {
      uVar11 = 0x0;
      uVar10 = 0x0;
    }
    else
    {
      uVar12 = 0x1018;
      lVar13 = UI_Transaction_Item_Type4_ctor
                         ((long)CONCAT22(iVar9,pvVar3),lVar13,
                          (long)CONCAT22(iVar8,pcVar4),0x2);
      uVar10 = (undefined2)((ulong)lVar13 >> 0x10);
      uVar11 = (undefined2)lVar13;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x16) + 0x4)
    ;
    (*(code *)*puVar1)(uVar12,(int)*(undefined4 *)((int)this + 0x16),
                       (int)((ulong)*(undefined4 *)((int)this + 0x16) >> 0x10),uVar11,
                       uVar10);
    bVar2 = true;
  }
  lVar13 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x3);
  iVar8 = (int)((ulong)lVar13 >> 0x10);
  if ((-0x1 < lVar13) && ((lVar13 != 0x0 || (false))))
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x431);
    lVar14 = CONCAT22(uVar5,0x14);
    uVar12 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(lVar14);
    uVar5 = (undefined2)((ulong)lVar14 >> 0x10);
    if (iVar9 == 0x0 && pvVar3 == NULL)
    {
      uVar11 = 0x0;
      uVar10 = 0x0;
    }
    else
    {
      uVar12 = 0x1018;
      lVar13 = UI_Transaction_Item_Type4_ctor
                         ((long)CONCAT22(iVar9,pvVar3),lVar13,
                          (long)CONCAT22(iVar8,pcVar4),0x3);
      uVar10 = (undefined2)((ulong)lVar13 >> 0x10);
      uVar11 = (undefined2)lVar13;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x16) + 0x4)
    ;
    (*(code *)*puVar1)(uVar12,(int)*(undefined4 *)((int)this + 0x16),
                       (int)((ulong)*(undefined4 *)((int)this + 0x16) >> 0x10),uVar11,
                       uVar10);
    bVar2 = true;
  }
  lVar13 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x4);
  iVar8 = (int)((ulong)lVar13 >> 0x10);
  if ((-0x1 < lVar13) && ((lVar13 != 0x0 || (false))))
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x432);
    lVar14 = CONCAT22(uVar5,0x14);
    uVar12 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(lVar14);
    uVar5 = (undefined2)((ulong)lVar14 >> 0x10);
    if (iVar9 == 0x0 && pvVar3 == NULL)
    {
      uVar11 = 0x0;
      uVar10 = 0x0;
    }
    else
    {
      uVar12 = 0x1018;
      lVar13 = UI_Transaction_Item_Type4_ctor
                         ((long)CONCAT22(iVar9,pvVar3),lVar13,
                          (long)CONCAT22(iVar8,pcVar4),0x4);
      uVar10 = (undefined2)((ulong)lVar13 >> 0x10);
      uVar11 = (undefined2)lVar13;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x16) + 0x4)
    ;
    (*(code *)*puVar1)(uVar12,(int)*(undefined4 *)((int)this + 0x16),
                       (int)((ulong)*(undefined4 *)((int)this + 0x16) >> 0x10),uVar11,
                       uVar10);
    bVar2 = true;
    iVar8 = extraout_DX_00;
  }
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x440);
    uVar12 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(CONCAT22(uVar5,0x14));
    if (iVar9 == 0x0 && pvVar3 == NULL)
    {
      uVar5 = 0x0;
      uVar11 = 0x0;
    }
    else
    {
      uVar12 = 0x1018;
      lVar13 = UI_Transaction_Item_Type4_ctor
                         ((long)CONCAT22(iVar9,pvVar3),0x0,(long)CONCAT22(iVar8,pcVar4),
                          0x0);
      uVar11 = (undefined2)((ulong)lVar13 >> 0x10);
      uVar5 = (undefined2)lVar13;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x16) + 0x4)
    ;
    (*(code *)*puVar1)(uVar12,(int)*(undefined4 *)((int)this + 0x16),
                       (int)((ulong)*(undefined4 *)((int)this + 0x16) >> 0x10),uVar5,
                       uVar11);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global property table 1050:06E0 and string manager 1050:14CC.
// Indirect calls via vtable offset 0x10 and 4.
// Uses formatted string at 1050:0CEA.

void __stdcall16far UI_Populate_Ship_Cargo_List_Logic(void *this,void *ship)
{
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  char *pcVar5;
  void *pvVar6;
  uint extraout_DX;
  uint uVar7;
  u32 *puVar8;
  uint uVar9;
  uint uVar10;
  uint extraout_DX_00;
  undefined2 uVar11;
  ulong uVar12;
  void *pvVar13;
  undefined4 in_stack_00000008;
  undefined4 *puVar14;
  undefined2 in_stack_0000ffbe;
  ulong uStack_14;
  undefined4 uStack_a;
  
  uVar9 = *(uint *)((int)this + 0x14);
  if (uVar9 != 0x0 || (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
    uVar9 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffbe,0xc));
  uVar7 = uVar9 | (uint)this_00;
  if (uVar7 == 0x0)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar9);
  }
  *(undefined2 *)((int)this + 0x12) = pvVar3;
  *(uint *)((int)this + 0x14) = uVar7;
  puVar4 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar11 = 0x1038;
  puVar8 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     ((int)in_stack_00000008,(int)((ulong)in_stack_00000008 >> 0x10),
                      puVar4,uVar7);
  uStack_a = (undefined4 *)CONCAT22(puVar8,puVar4);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  puVar14 = puVar4;
  uVar12 = (*(code *)*puVar1)(0x1038,puVar4,puVar8);
  uVar9 = (uint)(uVar12 >> 0x10);
  bVar2 = false;
  for (uStack_14 = 0x0; uStack_14 < uVar12; uStack_14 += 0x1)
  {
    uVar11 = 0x1030;
    pvVar13 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_a);
    uVar7 = (uint)((ulong)pvVar13 >> 0x10);
    pvVar3 = (void *)pvVar13;
    uVar9 = uVar7 | (uint)pvVar3;
    if (((uVar9 != 0x0) && (*(long *)((int)pvVar3 + 0x1c) != 0x8000002)) &&
       ((*(int *)((int)pvVar3 + 0x12) == 0x5 || (*(int *)((int)pvVar3 + 0x12) == 0x6))))
    {
      uVar10 = *(uint *)((int)pvVar3 + 0x6) & 0xff;
      pcVar5 = Lookup_Entity_Name_by_ID_Logic_bd80(*(u16 *)((int)pvVar3 + 0xc));
      _wsprintf16((void *)CONCAT22(ship,(void *)((int)this + 0x22)),
                  s__s___02ld_1050_0cea,(char *)CONCAT22(uVar10,pcVar5));
      pcVar5 = strdup_allocate((char *)((int)this + 0x22));
      uVar11 = 0x1000;
      uVar9 = uVar10;
      pvVar6 = allocate_memory(CONCAT22(puVar14,0x12));
      if (uVar9 != 0x0 || pvVar6 != NULL)
      {
        uVar11 = 0x1018;
        UI_Transaction_Item_Type3_ctor
                  ((long)CONCAT22(uVar9,pvVar6),0x1,(long)CONCAT22(uVar10,pcVar5),
                   *(long *)((int)pvVar3 + 0x4));
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4);
      (*(code *)*puVar1)();
      bVar2 = true;
      uVar9 = extraout_DX_00;
    }
  }
  if (!bVar2)
  {
    pcVar5 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x441);
    uVar11 = 0x1000;
    uVar7 = uVar9;
    pvVar3 = allocate_memory(CONCAT22(puVar14,0x12));
    if (uVar7 != 0x0 || pvVar3 != NULL)
    {
      uVar11 = 0x1018;
      UI_Transaction_Item_Type3_ctor
                ((long)CONCAT22(uVar7,pvVar3),0x0,(long)CONCAT22(uVar9,pcVar5),0x0);
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4)
    ;
    (*(code *)*puVar1)();
  }
  if (puVar8 != NULL || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar11,puVar4,puVar8,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads system strings from 1050:14CC (ID 0x43E).
// Indirect calls via vtable index 0 and offset 4.

void __stdcall16far UI_Populate_Star_System_List_Logic(void *this,void *context)
{
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  char *pcVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  uint extraout_DX_00;
  undefined2 uVar7;
  void *data1;
  ulong uVar8;
  long lVar9;
  void *in_stack_00000008;
  uint in_stack_0000ffe2;
  u16 uStack_6;
  
  uVar5 = *(uint *)((int)this + 0xc);
  if (uVar5 != 0x0 || (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
    uVar5 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffe2,0xc));
  uVar6 = uVar5 | (uint)this_00;
  if (uVar6 == 0x0)
  {
    pvVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar5);
  }
  uVar8 = (ulong)in_stack_0000ffe2;
  *(undefined2 *)((int)this + 0xa) = pvVar3;
  *(uint *)((int)this + 0xc) = uVar6;
  bVar2 = false;
  for (uStack_6 = 0x21; 0x10 < (int)uStack_6; uStack_6 -= 0x1)
  {
    data1 = Colony_Calc_Resource_Deficit_at_26_540a(in_stack_00000008,uStack_6);
    uVar6 = (uint)((ulong)data1 >> 0x10);
    pcVar4 = (char *)(uVar6 | (uint)data1);
    if (pcVar4 != NULL)
    {
      bVar2 = true;
      Lookup_Entity_Description_Wrapper_c0ca(uStack_6);
      pcVar4 = strdup_allocate(pcVar4);
      uVar7 = 0x1000;
      uVar5 = uVar6;
      pvVar3 = allocate_memory(CONCAT22((int)uVar8,0x10));
      if (uVar5 == 0x0 && pvVar3 == NULL)
      {
        uVar8 = 0x0;
      }
      else
      {
        uVar7 = 0x1018;
        uVar8 = UI_Transaction_Item_Subclass_ctor_4A92_Logic
                          ((long)CONCAT22(uVar5,pvVar3),(long)data1,
                           (long)CONCAT22(uVar6,pcVar4),uStack_6);
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
      (*(code *)*puVar1)(uVar7,(int)*(undefined4 *)((int)this + 0xa),
                         (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),uVar8,
                         uVar8);
      uVar6 = extraout_DX_00;
    }
  }
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43e);
    uVar7 = 0x1000;
    uVar5 = uVar6;
    pvVar3 = allocate_memory(CONCAT22(pcVar4,0x10));
    if (uVar6 == 0x0 && pvVar3 == NULL)
    {
      lVar9 = 0x0;
    }
    else
    {
      uVar7 = 0x1018;
      lVar9 = UI_Transaction_Item_Subclass_ctor_4A92_Logic
                        ((long)CONCAT22(uVar6,pvVar3),0x0,(long)CONCAT22(uVar5,pcVar4),
                         0x0);
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
    (*(code *)*puVar1)(uVar7,(int)*(undefined4 *)((int)this + 0xa),
                       (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),lVar9);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global property table 1050:06E0 and string manager 1050:14CC.
// Indirect calls via vtable index 0, offset 4, and offset 0x10.
// Uses formatted string at 1050:0CF4.

void __stdcall16far
UI_Populate_Transfer_Shipment_List_Logic(void *this,void *ship_context)
{
  u16 entity_id;
  undefined4 *this_ptr;
  undefined2 *puVar1;
  bool bVar2;
  astruct_491 *this_00;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  void *pvVar7;
  undefined2 uVar8;
  uint extraout_DX;
  uint uVar9;
  int iVar10;
  uint uVar11;
  void *pvVar12;
  void *pvVar13;
  undefined2 uVar14;
  int iVar15;
  undefined2 unaff_SI;
  undefined2 uVar16;
  ulong uVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  undefined4 in_stack_00000008;
  undefined2 uStack_3a;
  ulong uStack_14;
  
  uVar16 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  iVar15 = (int)in_stack_00000008;
  lVar20 = *(long *)(iVar15 + 0x200);
  uVar11 = *(uint *)((int)this + 0x10);
  if (uVar11 != 0x0 || (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
    uVar11 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar9 = uVar11 | (uint)this_00;
  if (uVar9 == 0x0)
  {
    pvVar3 = NULL;
    uVar9 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar11);
  }
  *(undefined2 *)((int)this + 0xe) = pvVar3;
  *(uint *)((int)this + 0x10) = uVar9;
  this_ptr = (undefined4 *)*(undefined4 *)(iVar15 + 0xc);
  puVar4 = (undefined4 *)this_ptr;
  puVar1 = (undefined2 *)((int)*this_ptr + 0x10);
  uVar17 = (*(code *)*puVar1)(0x1000,puVar4,*(undefined2 *)(iVar15 + 0xe));
  iVar15 = (int)(uVar17 >> 0x10);
  bVar2 = false;
  for (uStack_14 = 0x0; uStack_14 < uVar17; uStack_14 += 0x1)
  {
    pvVar18 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr);
    iVar10 = (int)((ulong)pvVar18 >> 0x10);
    pvVar3 = (void *)pvVar18;
    if (((iVar10 != 0x0 || pvVar3 != NULL) &&
        (*(long *)((int)pvVar3 + 0x1c) != 0x8000002)) &&
       ((*(int *)((int)pvVar3 + 0x12) == 0x5 || (*(int *)((int)pvVar3 + 0x12) == 0x6))))
    {
      entity_id = *(u16 *)((int)pvVar3 + 0xc);
      iVar5 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),entity_id);
      if ((iVar5 == 0x0) && (*(long *)((int)pvVar3 + 0x1c) != lVar20))
      {
        uVar11 = *(uint *)((int)pvVar3 + 0x6) & 0xff;
        pcVar6 = Lookup_Entity_Name_by_ID_Logic_bd80(entity_id);
        pvVar12 = ship_context;
        _wsprintf16((char *)CONCAT22(ship_context,(char *)((int)this + 0x22)),
                    s__s___02ld_1050_0cf4,(char *)CONCAT22(uVar11,pcVar6));
        pcVar6 = strdup_allocate((char *)((int)this + 0x22));
        uVar16 = 0x1000;
        pvVar13 = pvVar12;
        pvVar7 = allocate_memory(CONCAT22(puVar4,0x14));
        if (pvVar13 == NULL && pvVar7 == NULL)
        {
          uVar8 = 0x0;
          uStack_3a = 0x0;
        }
        else
        {
          uVar16 = 0x1018;
          lVar19 = UI_Transaction_Item_Type2_ctor
                             (pvVar7,pvVar13,0x1,0x0,pcVar6,pvVar12,
                              *(undefined2 *)((int)pvVar3 + 0xc),
                              (int)*(undefined4 *)((int)pvVar3 + 0x4),
                              (int)((ulong)*(undefined4 *)((int)pvVar3 + 0x4) >> 0x10));
          uStack_3a = (undefined2)((ulong)lVar19 >> 0x10);
          uVar8 = (undefined2)lVar19;
        }
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
        (*(code *)*puVar1)(uVar16,(int)*(undefined4 *)((int)this + 0xe),
                           (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),uVar8,
                           uStack_3a);
        bVar2 = true;
      }
    }
  }
  if (!bVar2)
  {
    pcVar6 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x442);
    uVar16 = 0x1000;
    iVar10 = iVar15;
    pvVar3 = allocate_memory(CONCAT22(puVar4,0x14));
    if (iVar10 == 0x0 && pvVar3 == NULL)
    {
      uVar8 = 0x0;
      uVar14 = 0x0;
    }
    else
    {
      uVar16 = 0x1018;
      lVar20 = UI_Transaction_Item_Type2_ctor
                         (pvVar3,iVar10,0x0,0x0,pcVar6,iVar15,0x0,0x0,0x0);
      uVar14 = (undefined2)((ulong)lVar20 >> 0x10);
      uVar8 = (undefined2)lVar20;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x4);
    (*(code *)*puVar1)(uVar16,(int)*(undefined4 *)((int)this + 0xe),
                       (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),uVar8,
                       uVar14);
  }
  return;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xD71A.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_D71A(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_D71A_Wrapper(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for a UI element subclass. Initializes base properties and sets the
// vtable to 0xD780.

void * __stdcall16far UI_Element_Subclass_ctor_D780(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xd780;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_d75a(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Element_Subclass vtable to 1008:D98E.
// Loads a resource object using global string manager at 1050:14CC.

void * __stdcall16far UI_Element_Subclass_ctor_D98E(void *this,int segment,int id)
{
  void *pvVar1;
  undefined2 in_DX;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xd98e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0xa) = pvVar1;
  *(undefined2 *)((int)this + 0xc) = in_DX;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:D98E during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Element_Subclass_dtor_D98E(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xd98e;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Maps a resource string ID (0x1A0-0x1B4) to an internal application type identifier.
// Used during resource loading to categorize objects.

void __stdcall16far remap_resource_id_to_internal_type_logic(void *this,int resource_id)
{
  undefined2 in_stack_00000008;
  
  switch(in_stack_00000008)
  {
  case 0x1a0:
    *(undefined2 *)((int)this + 0xe) = 0x14;
    break;
  case 0x1a1:
    *(undefined2 *)((int)this + 0xe) = 0x3;
    break;
  case 0x1a2:
    *(undefined2 *)((int)this + 0xe) = 0x2;
    break;
  case 0x1a3:
    *(undefined2 *)((int)this + 0xe) = 0xe;
    break;
  case 0x1a4:
    *(undefined2 *)((int)this + 0xe) = 0xc;
    break;
  case 0x1a5:
    *(undefined2 *)((int)this + 0xe) = 0x4;
    break;
  case 0x1a6:
    *(undefined2 *)((int)this + 0xe) = 0xb;
    break;
  case 0x1a7:
    *(undefined2 *)((int)this + 0xe) = 0x6;
    break;
  case 0x1a8:
    *(undefined2 *)((int)this + 0xe) = 0xa;
    break;
  case 0x1a9:
    *(undefined2 *)((int)this + 0xe) = 0xd;
    break;
  case 0x1aa:
    *(undefined2 *)((int)this + 0xe) = 0x13;
    break;
  case 0x1ab:
    *(undefined2 *)((int)this + 0xe) = 0x5;
    break;
  case 0x1ac:
    *(undefined2 *)((int)this + 0xe) = 0x9;
    break;
  case 0x1ad:
    *(undefined2 *)((int)this + 0xe) = 0x8;
    break;
  case 0x1ae:
    *(undefined2 *)((int)this + 0xe) = 0x12;
    break;
  case 0x1af:
    *(undefined2 *)((int)this + 0xe) = 0x11;
    break;
  case 0x1b0:
    *(undefined2 *)((int)this + 0xe) = 0x7;
    return;
  case 0x1b1:
    *(undefined2 *)((int)this + 0xe) = 0x10;
    return;
  case 0x1b2:
    *(undefined2 *)((int)this + 0xe) = 0x1;
    return;
  case 0x1b3:
    *(undefined2 *)((int)this + 0xe) = 0xf;
    return;
  case 0x1b4:
    *(undefined2 *)((int)this + 0xe) = 0x15;
    return;
  }
  return;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xD98E.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_D98E(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_D98E(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Dialog_Subclass vtable to 1008:D9FA.
// Registers global special dialog instance at 1050:4230.
// Loads resource ID 0x9A via Build_Site_Object_Initialize_Vtable_and_Resource.

void __stdcall16far UI_Special_Dialog_Subclass_ctor_init(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined2 *)CONCAT22(segment,this) = 0xd9fa;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x9a);
  _p_GlobalPaletteObject = (void *)CONCAT22(segment,this);
  return;
}



// Scalar deleting destructor for the specialized dialog subclass.

void * __stdcall16far UI_Special_Dialog_Subclass_scalar_dtor(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  Build_Site_Object_dtor_Internal(_this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Display_Adapter_Object vtable to 1008:DC80.
// Queries system metrics (GETDEVICECAPS) and allocates palette buffers via global heap
// context at 1050:5F2C.
// Performs sector-based palette extraction (GetSystemPaletteEntries16).

void * __stdcall16far Display_Adapter_Object_ctor(void *this,int segment,int id)
{
  byte bVar1;
  undefined2 *puVar2;
  HDC16 hdc;
  int16_t iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  void *ptr;
  undefined *heap_ctx;
  void *pvVar7;
  ushort count;
  undefined *start;
  undefined2 *puVar8;
  undefined2 uVar9;
  undefined4 uStack_20;
  int iStack_10;
  undefined4 uStack_8;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0xe));
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xdc80;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  hdc = GetDC16(0x0);
  iVar3 = GETDEVICECAPS(0x8,hdc);
  *(int16_t *)((int)this + 0xa) = iVar3;
  iVar3 = GETDEVICECAPS(0xa,hdc);
  *(int16_t *)((int)this + 0xc) = iVar3;
  iVar4 = *(int *)((int)this + 0xc) + -0x1e0;
  start = (undefined *)(iVar4 >> 0xf);
  pack_3words_reverse((void *)((int)this + 0xe),segment,0x0,iVar4 / 0x2);
  uVar5 = GETDEVICECAPS(0x26,hdc);
  if ((uVar5 & 0x100) != 0x0)
  {
    iVar3 = GETDEVICECAPS(0x68,hdc);
    *(int16_t *)((int)this + 0x14) = iVar3;
    iVar3 = GETDEVICECAPS(0x6a,hdc);
    *(int16_t *)((int)this + 0x16) = iVar3;
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar6 = init_memory_allocator();
    }
    else
    {
      start = g_AllocatedBlock_Segment;
      puVar6 = g_AllocatedBlock_Offset;
    }
    ptr = alloc_with_hooks((ulong)(uint)((iVar3 + 0x1) * 0x4),0x1,puVar6);
    uStack_8 = (void *)CONCAT22(start,ptr);
    iVar4 = *(int *)((int)this + 0x16);
    if (_g_AllocatedBlock_Offset == NULL)
    {
      puVar6 = start;
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar6 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar7 = alloc_with_hooks((ulong)(uint)((iVar4 + 0x1) * 0x4),0x1,heap_ctx);
    *(undefined2 *)((int)this + 0x18) = pvVar7;
    *(undefined2 *)((int)this + 0x1a) = puVar6;
    if (uStack_8 != NULL)
    {
      if (*(long *)((int)this + 0x18) != 0x0)
      {
        count = *(int *)((int)this + 0x16) / 0x2;
        GetSystemPaletteEtnries16((HDC16)ptr,(ushort)start,count,NULL);
        GetSystemPaletteEtnries16
                  ((HDC16)(count * 0x4 + (int)ptr),(ushort)start,count,
                   (void *)(*(int *)((int)this + 0x14) - count));
        uStack_20 = (undefined2 *)*(undefined4 *)((int)this + 0x18);
        for (iStack_10 = 0x0; puVar2 = uStack_20, iStack_10 < *(int *)((int)this + 0x16)
            ; iStack_10 += 0x1)
        {
          iVar4 = iStack_10 * 0x4;
          bVar1 = *(byte *)(iVar4 + (int)ptr);
          uVar9 = (undefined2)((ulong)uStack_20 >> 0x10);
          puVar8 = (undefined2 *)uStack_20;
          uStack_20 = (undefined2 *)CONCAT22(uVar9,puVar8 + 0x2);
          *puVar2 = CONCAT11(*(undefined1 *)((int)ptr + iVar4 + 0x1),
                             *(undefined1 *)((int)ptr + iVar4 + 0x2));
          puVar8[0x1] = (uint)bVar1;
        }
      }
    }
    free_if_not_null(ptr);
  }
  ReleaseDC16(hdc,0x0);
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Display_Adapter_Object vtable to 1008:DC80 during destruction.

void __stdcall16far Display_Adapter_Object_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xdc80;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x18));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Scalar deleting destructor for the Display_Adapter_Object class. Invokes the object's
// destructor and optionally deallocates the instance memory.

void * __stdcall16far Display_Adapter_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Display_Adapter_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Relationship_Link vtable to 1008:DD4A (base 1008:389A).

void * __stdcall16far
UI_Relationship_Link_ctor(void *this,long parent_id,long owner_ref)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(long *)((int)this + 0x4) = owner_ref;
  *(long *)((int)this + 0x8) = parent_id;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0xdd4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Default constructor for the UI component with vtable 0xDD4A. Initializes all internal
// reference fields to zero.

void * __stdcall16far UI_Component_ctor_DD4A_zero(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *_this = 0xdd4a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Scalar deleting destructor for the UI component with vtable 0xDD4A. Resets the vtable
// to the base object and optionally deallocates memory.

void * __stdcall16far UI_Component_scalar_dtor_DD4A(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Relationship_Manager vtable to 1008:EAAC.
// Allocates and constructs a nested list tracker at offset 10 using
// construct_object_with_vtable (vtable 1008:5BC4).

void * __stdcall16far UI_Relationship_Manager_ctor(void *this,int segment,int id)
{
  astruct_491 *this_00;
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xeaac;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  this_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar2 = in_DX | (uint)this_00;
  if (uVar2 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this_00,in_DX);
    *(undefined2 *)((int)this + 0xa) = pvVar1;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:EAAC during destruction.
// Invokes virtual destructors (vtable index 0) for sub-objects at offsets 0xE, 0x12,
// and 10.

void __stdcall16far UI_Component_dtor_EAAC(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xeaac;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
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
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1e));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable
// Instantiates UI_Relationship_Link with vtable 1008:DD4A.
// Performs indirect call through [this + 10] vtable offset 4 to add link to managed
// collection.
// Calls global tick getter Simulator_Global_Get_Current_Tick_8326.

void __stdcall16far
UI_Relationship_Manager_Add_or_Update_Link_Logic(void *this,long id1,long id2)
{
  undefined2 *puVar1;
  int iVar2;
  bool bVar3;
  void *this_00;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  u32 uVar9;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffec;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  bVar3 = false;
  do
  {
    lVar8 = get_next_list_item(local_a);
    iVar5 = (int)((ulong)lVar8 >> 0x10);
    iVar2 = (int)lVar8;
    uVar6 = 0x0;
    if (iVar5 == 0x0 && iVar2 == 0x0) goto LAB_1008_dedb;
  } while (((*(long *)(iVar2 + 0x4) != id2) || (*(long *)(iVar2 + 0x8) != id1)) &&
          ((*(long *)(iVar2 + 0x8) != id2 || (*(long *)(iVar2 + 0x4) != id1))));
  *(undefined2 *)(iVar2 + 0xc) = 0x1;
  uVar9 = Simulator_Global_Get_Current_Tick_8326();
  uVar6 = (uint)(uVar9 >> 0x10);
  *(undefined2 *)(iVar2 + 0xe) = (int)uVar9;
  *(uint *)(iVar2 + 0x10) = uVar6;
  bVar3 = true;
LAB_1008_dedb:
  if (!bVar3)
  {
    this_00 = allocate_memory(CONCAT22(in_stack_0000ffec,0x14));
    uVar7 = uVar6 | (uint)this_00;
    if (uVar7 == 0x0)
    {
      pvVar4 = NULL;
      uVar7 = 0x0;
    }
    else
    {
      pvVar4 = UI_Relationship_Link_ctor(this_00,id1,id2);
    }
    *(undefined2 *)((int)pvVar4 + 0xc) = 0x1;
    uVar9 = Simulator_Global_Get_Current_Tick_8326();
    *(undefined2 *)((int)pvVar4 + 0xe) = (int)uVar9;
    *(undefined2 *)((int)pvVar4 + 0x10) = (int)(uVar9 >> 0x10);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
    (*(code *)*puVar1)(0x1030,*(undefined4 *)((int)this + 0xa),pvVar4,uVar7,this_00,
                       uVar6);
  }
  return;
}



// Iterates through the linked list of relationships and invokes a processing routine
// for any link that is currently active (state 2 or 3).

void __stdcall16far UI_Relationship_Manager_Process_Active_Links_Logic(void *this)
{
  void *link_ptr;
  undefined2 uVar1;
  void *pvVar2;
  int in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  while( true )
  {
    pvVar2 = (void *)get_next_list_item(local_a);
    uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
    link_ptr = (void *)pvVar2;
    if (pvVar2 == NULL) break;
    if ((*(int *)((int)link_ptr + 0xc) == 0x2) || (*(int *)((int)link_ptr + 0xc) == 0x3)
       )
    {
      UI_Relationship_Manager_Should_Update_Link_Probability_Check
                ((int)this,in_stack_00000006,link_ptr);
    }
  }
  return;
}



// Searches for a specific relationship between two identifiers and returns true (1) if
// the link exists and is in state 1.

int __stdcall16far
UI_Relationship_Manager_Is_Link_Active_Type1_Logic(void *this,long id1,long id2)
{
  int iVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  do
  {
    lVar3 = get_next_list_item(local_a);
    uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = (int)lVar3;
    if (lVar3 == 0x0)
    {
      return 0x0;
    }
  } while (((*(long *)(iVar1 + 0x4) != id2) || (*(long *)(iVar1 + 0x8) != id1)) &&
          ((*(long *)(iVar1 + 0x8) != id2 || (*(long *)(iVar1 + 0x4) != id1))));
  if (*(int *)(iVar1 + 0xc) != 0x1)
  {
    return 0x0;
  }
  return 0x1;
}
