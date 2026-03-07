/*
 * Source: outpost.c
 * Chunk: 25/117
 * Original lines: 27655-28811
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far UI_Report_List_Deserialize_from_File_Logic(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  u16 uVar5;
  int in_DX;
  int extraout_DX;
  void *handle_wrapper;
  void *unaff_SS;
  undefined2 in_stack_0000ffce;
  u32 local_2e;
  u16 local_2a;
  u16 local_26;
  u32 local_1a;
  u32 local_16;
  u16 local_12;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar2 = file_read_check((long)param_2,&local_6,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_8 = 0x0;
      while( true )
      {
        iVar2 = (int)param_1;
        handle_wrapper = (void *)(param_1 >> 0x10);
        if (local_6 <= local_8) break;
        pvVar4 = allocate_memory(CONCAT22(in_stack_0000ffce,0xa));
        local_1a = CONCAT22(in_DX,pvVar4);
        if (in_DX == 0x0 && pvVar4 == NULL)
        {
          local_16 = 0x0;
        }
        else
        {
          *(char **)local_1a = (char *)s_1_1050_389a;
          *(undefined2 *)((int)pvVar4 + 0x2) = 0x1008;
          *(undefined2 *)local_1a = 0xea8;
          *(undefined2 *)((int)pvVar4 + 0x2) = 0x1010;
          local_16 = local_1a;
        }
        iVar3 = file_read_check((long)param_2,&local_12,unaff_SS);
        if ((iVar3 == 0x0) ||
           (iVar3 = file_read_check((long)param_2,(void *)((int)local_16 + 0x6),
                                    (void *)(local_16 >> 0x10)), iVar3 == 0x0))
        {
          local_1a = local_16;
          if (local_16 != 0x0)
          {
            (*(code *)*(undefined2 *)*(undefined2 **)local_16)
                      (0x1008,(int)local_16,(int)(local_16 >> 0x10),0x1);
          }
          goto LAB_1010_0cb1;
        }
        *(u16 *)((int)local_16 + 0x4) = local_12;
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xa) + 0x8);
        (*(code *)*puVar1)();
        local_8 += 0x1;
        in_DX = extraout_DX;
      }
      iVar3 = file_read_check((long)param_2,(void *)(iVar2 + 0xe),handle_wrapper);
      if ((iVar3 != 0x0) &&
         (iVar2 = file_read_check((long)param_2,(void *)(iVar2 + 0x10),handle_wrapper),
         iVar2 != 0x0))
      {
        for (local_4 = 0x0; (int)local_4 < 0xa; local_4 += 0x1)
        {
          iVar2 = file_read_check((long)param_2,&local_2a,unaff_SS);
          if (iVar2 == 0x0) goto LAB_1010_0cb1;
          uVar5 = local_4;
          if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
          {
            uVar5 = remap_id_type_A_to_type_B_logic
                              ((int)(void *)param_2,(int)((ulong)param_2 >> 0x10),
                               local_4);
          }
          *(u16 *)(uVar5 * 0x8 + 0xe28) = local_2a;
          local_26 = uVar5;
        }
        if (0x2 < (int)PTR_DAT_1050_0000_1050_0312)
        {
          local_4 = 0x0;
          do
          {
            iVar2 = file_read_check((long)param_2,&local_2a,unaff_SS);
            if (iVar2 == 0x0) goto LAB_1010_0cb1;
            *(u16 *)(local_4 * 0x8 + 0xea8) = local_2a;
            local_4 += 0x1;
          } while ((int)local_4 < 0x3);
        }
        return 0x1;
      }
    }
LAB_1010_0cb1:
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// Scalar deleting destructor for the UI_Event_List_Manager class.

void * __stdcall16far UI_Event_List_Manager_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Event_List_Manager_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



u16 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1010_0e6c(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Manager_Subclass vtable to 1010:0F0C.
// Registers global instance pointer at 1050:4230.
// Loads resource ID 0xFF via Build_Site_Object_Initialize_Vtable_and_Resource.

void * __stdcall16far
UI_Special_Manager_Subclass_ctor_init_F0C(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined2 *)CONCAT22(segment,this) = 0xf0c;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)segment;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0xff);
  return this;
}



void * __stdcall16far Build_Site_Object_dtor_Scalar_Deleting(void *param_1,byte param_2)
{
  Build_Site_Object_dtor_Internal((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:191A.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_191A_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x60) = 0x0;
  *(undefined4 *)((int)this + 0x64) = 0x0;
  *(undefined2 *)((int)this + 0x68) = 0x0;
  *(undefined4 *)((int)this + 0x6a) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_648_bmp_1050_1919 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6a) = (int)lVar1;
  *(undefined2 *)((int)this + 0x6c) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



// Destructor for the report list manager. Cleans up internal structures and calls the
// base class destructor.

void __stdcall16far UI_Report_List_Manager_dtor_191A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_648_bmp_1050_1919 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Report_List_Internal_Cleanup_Logic(this);
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



u16 __stdcall16far UI_Main_View_Populate_Entity_Polygons_Logic(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  void *pvVar3;
  int iVar4;
  u32 *puVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  void *pvVar10;
  undefined4 uVar11;
  u32 *puVar12;
  void *pvVar13;
  u32 *puVar14;
  u16 local_26;
  u32 local_24;
  u16 local_20;
  u16 local_1e;
  u32 local_1c;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  puVar5 = (u32 *)param_1;
  puVar1 = (undefined2 *)((int)*param_1 + 0x38);
  puVar14 = puVar5;
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)(puVar5 + 0x1a) = uVar2;
  if ((puVar5[0x18] != 0x0) && ((int)puVar5[0x1a] == 0x1))
  {
    return 0x1;
  }
  if ((int)puVar5[0x1a] == 0x0)
  {
    return 0x0;
  }
  pvVar9 = Simulator_World_Iterator_ctor_init_dc52
                     ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  uVar2 = (undefined2)((ulong)pvVar9 >> 0x10);
  pvVar3 = allocate_memory(CONCAT22(puVar14,(int)puVar5[0x1a] * 0x18));
  *(void **)(puVar5 + 0x18) = pvVar3;
  *(undefined2 *)((int)puVar5 + 0x62) = uVar2;
  local_1c = CONCAT22(uVar2,(int)puVar5[0x18]);
  local_1e = (u16)puVar5[0x1a];
  do
  {
    do
    {
      pvVar9 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((u16 *)CONCAT22(unaff_SS,&local_14));
      uVar2 = 0x0;
      if (pvVar9 == NULL) goto LAB_1010_10ca;
      iVar6 = (int)*param_1;
      iVar4 = (*(code *)*(undefined2 *)(iVar6 + 0x40))(0x1028,param_1,pvVar9);
    } while (iVar4 == 0x0);
    pvVar10 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar9);
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x2c))(0x1028,param_1,pvVar9);
    uVar8 = (undefined2)(local_1c >> 0x10);
    iVar4 = (int)local_1c;
    *(int *)local_1c = (int)uVar11;
    *(undefined2 *)(iVar4 + 0x2) = (int)((ulong)uVar11 >> 0x10);
    puVar12 = param_1;
    pvVar13 = pvVar9;
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x30))();
    *(undefined2 *)(iVar4 + 0x8) = (int)uVar11;
    *(undefined2 *)(iVar4 + 0xa) = (int)((ulong)uVar11 >> 0x10);
    *(undefined4 *)(iVar4 + 0xc) = pvVar10;
    uVar11 = (*(code *)*(undefined2 *)(iVar6 + 0x3c))
                       (0x1028,param_1,pvVar9,puVar12,pvVar13);
    uVar2 = (undefined2)((ulong)uVar11 >> 0x10);
    *(undefined2 *)(iVar4 + 0x10) = (int)uVar11;
    *(undefined2 *)(iVar4 + 0x12) = uVar2;
    *(undefined4 *)(iVar4 + 0x14) = pvVar10;
    local_1c = CONCAT22(uVar8,iVar4 + 0x18);
    local_1e -= 0x1;
  } while (local_1e != 0x0);
LAB_1010_10ca:
  pvVar3 = allocate_memory(CONCAT22(puVar14,(int)puVar5[0x1a] << 0x2));
  *(void **)(puVar5 + 0x19) = pvVar3;
  *(undefined2 *)((int)puVar5 + 0x66) = uVar2;
  local_20 = 0x0;
  local_1e = 0x0;
  while( true )
  {
    if ((int)puVar5[0x1a] * 0x3 <= (int)local_1e) break;
    uVar2 = *(undefined2 *)((int)puVar5 + 0x62);
    uVar8 = (undefined2)(puVar5[0x19] >> 0x10);
    iVar4 = (int)puVar5[0x19];
    *(int *)(iVar4 + local_20 * 0x4) = (int)puVar5[0x18] + local_1e * 0x8;
    *(undefined2 *)(iVar4 + local_20 * 0x4 + 0x2) = uVar2;
    local_1e += 0x3;
    local_20 += 0x1;
  }
  return 0x1;
}



// Sorts the items in a report-style UI list based on a specific column index
// (`param_2`). It uses the `qsort` routine with a far-pointer callback.

void __stdcall16far UI_Report_List_Sort_Items_by_Column_Logic(void *this,int column_idx)
{
  u16 in_stack_00000008;
  
  g_ReportFilter_0ECC = in_stack_00000008;
  qsort_far_array_with_callback_internal
            ((void *)*(undefined2 *)((int)this + 0x64),
             (int)*(undefined4 *)((int)this + 0x66),
             (int)((ulong)*(undefined4 *)((int)this + 0x66) >> 0x10),
             (u16 *)&p_LastAllocatedBlock);
  return;
}



// Refreshes a report list by optionally destroying old content and rebuilding the
// hierarchical grouping of items. It triggers a re-sort and then calls the internal
// grouping routine.

void __stdcall16far UI_Report_List_Refresh_and_Rebuild_Groups_Logic(void *this)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  int in_stack_00000006;
  
  if (*(long *)((int)this + 0x56) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*_this + 0x34);
    (*(code *)*puVar1)();
  }
  puVar1 = (undefined2 *)((int)*_this + 0x28);
  uVar4 = (*(code *)*puVar1)();
  uVar3 = (undefined2)((ulong)uVar4 >> 0x10);
  if ((int)uVar4 != 0x0)
  {
    UI_Report_List_Sort_Items_by_Column_Logic(this,in_stack_00000006);
    pvVar2 = UI_Report_List_Internal_Grouping_Engine_Logic(this);
    *(undefined2 *)((int)this + 0x56) = pvVar2;
    *(undefined2 *)((int)this + 0x58) = uVar3;
  }
  return;
}



// Targeted Scan Finding: Far Pointer / Vtable
// Core hierarchical list engine managing complex far-pointer array allocations.
// References global property tables in segment 1050 at offsets 0xEBA, 0xEBC, and 0xEBE.
// Performs indirect calls through sub-component vtable offset 0x1C.

void * __stdcall16far UI_Report_List_Internal_Grouping_Engine_Logic(void *this)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  void *pvVar4;
  void *dest;
  void *dest_00;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint in_DX;
  uint value;
  uint value_00;
  uint uVar9;
  void *extraout_DX;
  uint uVar10;
  void *extraout_DX_00;
  void *extraout_DX_01;
  int iVar11;
  undefined2 unaff_SI;
  undefined2 uVar12;
  undefined2 in_stack_00000006;
  undefined4 uStack_32;
  int iStack_2a;
  int iStack_28;
  int iStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_16;
  int iStack_e;
  int iStack_c;
  char *pcStack_a;
  
  if (g_ReportFilter_0ECC == 0xffff)
  {
    return NULL;
  }
  pvVar4 = allocate_memory(CONCAT22(unaff_SI,0x1a));
  in_DX |= (uint)pvVar4;
  if (in_DX == 0x0)
  {
    pvVar4 = NULL;
    in_DX = 0x0;
  }
  else
  {
    pvVar4 = Collection_Object_Subclass_ctor_3B3E(pvVar4);
  }
  pcStack_a = (char *)0x10500ece;
  iStack_e = 0x0;
  iStack_c = 0x0;
  value = in_DX;
  while( true )
  {
    if (*(int *)((int)this + 0x68) <= iStack_e) break;
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x64) + iStack_e * 0x4);
    uStack_32 = (undefined4 *)
                CONCAT22((int)((ulong)uVar1 >> 0x10),
                         (undefined4 *)((int)uVar1 + g_ReportFilter_0ECC * 0x8));
    iVar11 = stricmp_case_insensitive_far
                       ((char *)pcStack_a,(char *)((ulong)pcStack_a >> 0x10));
    if (iVar11 != 0x0)
    {
      pcStack_a = (char *)*uStack_32;
      iStack_c += 0x1;
    }
    iStack_e += 0x1;
  }
  *(int *)((int)pvVar4 + 0x10) = iStack_c;
  Collection_Object_Subclass_3B3E_factory(pvVar4,in_DX);
  dest = allocate_memory(CONCAT22(unaff_SI,0x400));
  value_00 = value;
  dest_00 = allocate_memory(CONCAT22(unaff_SI,0x400));
  iStack_1c = 0x0;
  memset_far(dest,value,0x0);
  memset_far(dest_00,value_00,0x0);
  iStack_2a = 0x0;
  iStack_e = 0x0;
  do
  {
    if (*(int *)((int)pvVar4 + 0x10) <= iStack_e)
    {
      return pvVar4;
    }
    uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
    iVar11 = (int)*(undefined4 *)((int)this + 0x64);
    uVar10 = *(uint *)(iVar11 + iStack_1c * 0x4 + 0x2);
    puVar8 = (undefined4 *)
             (*(int *)(iVar11 + iStack_1c * 0x4) +
             *(int *)(g_ReportFilter_0ECC * 0x6 + 0xeba) * 0x8);
    uStack_16 = (undefined4 *)CONCAT22(uVar10,puVar8);
    uVar9 = uVar10;
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x1a));
    uVar9 |= (uint)pvVar5;
    if (uVar9 == 0x0)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4) = 0x0;
    }
    else
    {
      pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar5);
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)pvVar4 + 0x8);
      *(undefined2 *)(iVar11 + iStack_e * 0x4) = pvVar5;
      *(uint *)(iVar11 + iStack_e * 0x4 + 0x2) = uVar9;
    }
    iStack_2a += 0x1;
    uVar12 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10);
    iVar11 = (int)*(undefined4 *)((int)pvVar4 + 0x8);
    uVar1 = *(undefined4 *)(iVar11 + iStack_e * 0x4);
    puVar3 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)(iVar11 + iStack_e * 0x4) + 0x1c);
    (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,puVar8,
                       uVar10);
    iStack_c = 0x0;
    pvVar5 = extraout_DX;
    while( true )
    {
      if (*(int *)((int)this + 0x68) <= iStack_1c) break;
      iVar11 = stricmp_case_insensitive_far
                         ((char *)(char *)*uStack_16,(char *)((ulong)*uStack_16 >> 0x10)
                         );
      if (iVar11 != 0x0) break;
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)this + 0x64);
      uVar10 = *(uint *)(iVar11 + iStack_1c * 0x4 + 0x2);
      uStack_1a = (undefined4 *)
                  CONCAT22(uVar10,(undefined4 *)
                                  (*(int *)(iVar11 + iStack_1c * 0x4) +
                                  *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebc) * 0x8));
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x1a));
      uVar10 |= (uint)pvVar5;
      if (uVar10 == 0x0)
      {
        pvVar5 = NULL;
        uVar10 = 0x0;
      }
      else
      {
        pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar5);
      }
      *(undefined2 *)(iStack_c * 0x4 + (int)dest) = pvVar5;
      *(uint *)((int)dest + iStack_c * 0x4 + 0x2) = uVar10;
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)this + 0x64);
      iStack_2a += 0x1;
      uVar1 = *(undefined4 *)(iStack_c * 0x4 + (int)dest);
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)(iStack_c * 0x4 + (int)dest) + 0x1c);
      (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,
                         *(int *)(iVar11 + iStack_1c * 0x4) +
                         *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebc) * 0x8,
                         *(undefined2 *)(iVar11 + iStack_1c * 0x4 + 0x2));
      iStack_28 = 0x0;
      pvVar5 = extraout_DX_00;
      while( true )
      {
        if (*(int *)((int)this + 0x68) <= iStack_1c) break;
        iVar11 = stricmp_case_insensitive_far
                           ((char *)(char *)*uStack_1a,
                            (char *)((ulong)*uStack_1a >> 0x10));
        if (iVar11 != 0x0) break;
        iVar11 = stricmp_case_insensitive_far
                           ((char *)(char *)*uStack_16,
                            (char *)((ulong)*uStack_16 >> 0x10));
        if (iVar11 != 0x0) break;
        pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x1a));
        uVar10 = (uint)pvVar5 | (uint)pvVar6;
        if (uVar10 == 0x0)
        {
          pvVar5 = NULL;
          uVar10 = 0x0;
        }
        else
        {
          pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar6);
        }
        *(undefined2 *)(iStack_28 * 0x4 + (int)dest_00) = pvVar5;
        *(uint *)((int)dest_00 + iStack_28 * 0x4 + 0x2) = uVar10;
        uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
        iVar11 = (int)*(undefined4 *)((int)this + 0x64);
        iStack_2a += 0x1;
        uVar1 = *(undefined4 *)(iStack_28 * 0x4 + (int)dest_00);
        puVar3 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)(iStack_28 * 0x4 + (int)dest_00) +
                 0x1c);
        (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,
                           *(int *)(iVar11 + iStack_1c * 0x4) +
                           *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebe) * 0x8,
                           *(undefined2 *)(iVar11 + iStack_1c * 0x4 + 0x2));
        iStack_1c += 0x1;
        iStack_28 += 0x1;
        pvVar5 = extraout_DX_01;
      }
      uVar1 = *(undefined4 *)(iStack_c * 0x4 + (int)dest);
      *(int *)((int)uVar1 + 0x10) = iStack_28;
      pvVar2 = (void *)*(undefined4 *)(iStack_c * 0x4 + (int)dest);
      pvVar6 = dest_00;
      pvVar7 = Collection_Object_Subclass_3B3E_factory
                         ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
      memcpy_far_words(pvVar7,pvVar5,(int)pvVar6);
      memset_far(dest_00,value_00,0x0);
      iStack_c += 0x1;
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4);
    *(int *)((int)uVar1 + 0x10) = iStack_c;
    pvVar2 = (void *)*(undefined4 *)
                      ((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4);
    pvVar6 = dest;
    pvVar7 = Collection_Object_Subclass_3B3E_factory
                       ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
    memcpy_far_words(pvVar7,pvVar5,(int)pvVar6);
    memset_far(dest,value,0x0);
    iStack_e += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 to retrieve resource 0x32.
// Orchestrates colonization-related dialog instantiation and focus management.

void __stdcall16far
UI_Planet_Update_Colonization_Status_Logic_maybe
          (int param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *entity_ref;
  
  UI_Window_Manager_Add_and_Focus_SubWindow_Logic
            (param_1,param_2,param_3,(int)param_4,(int)((ulong)param_4 >> 0x10));
  if (*(int *)(param_1 + 0x16) == 0x3)
  {
    pvVar6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(param_1 + 0x32) + 0x42);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar4 = (int)uVar1;
    entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                           ((void *)*(undefined4 *)
                                     ((int)*(undefined4 *)(iVar4 + 0x16) + 0x4));
    iVar2 = UI_Classify_Entity_Type_for_Notification_Logic
                      ((void *)pvVar6,(long)entity_ref);
    uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x4);
    iVar3 = UI_Window_Focus_Manager_Logic
                      ((void *)pvVar6,(int)((ulong)pvVar6 >> 0x10),0x0,(int)uVar1,
                       (int)((ulong)uVar1 >> 0x10));
    if (iVar3 == 0x0)
    {
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x4);
      UI_Specialized_Dialog_Factory_Logic
                (pvVar6,0x0,0x0,iVar2,(int)uVar1,(int)((ulong)uVar1 >> 0x10));
    }
  }
  return;
}



// Allocates memory for a UI element and initializes it with provided custom data using
// a specialized constructor (at 0x1040:C54A).

void * __stdcall16far UI_Element_Create_with_Custom_Data_Logic_maybe(void *data)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_00000008;
  undefined4 in_stack_0000000a;
  undefined2 in_stack_0000fffa;
  
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x4a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    UI_TreeNode_Control_ctor_init_c54a
              (pvVar1,in_DX,0x0,in_stack_00000008,(int)in_stack_0000000a,
               (int)((ulong)in_stack_0000000a >> 0x10));
    return pvVar1;
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Format_Entity_Name_from_Construction_Manager_Logic
          (u16 param_1,u16 param_2,void *param_3)
{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_SS;
  void *pvVar4;
  char *pcVar5;
  u16 local_62;
  u16 local_60;
  u16 local_5e;
  u16 local_5c;
  u32 local_5a;
  u32 local_56;
  char local_52 [0x50];
  
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_3);
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  uVar3 = uVar2 | (uint)(void *)pvVar4;
  if (uVar3 == 0x0)
  {
    pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x424);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_52),(char *)CONCAT22(uVar3,pcVar1))
    ;
    pcVar1 = local_52;
  }
  else
  {
    pcVar5 = UI_Component_Get_FarPtr_at_1FA
                       ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e));
    pcVar1 = (char *)pcVar5;
  }
  strdup_allocate(pcVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Label_Generate_and_Alloc_from_Construction_1788
          (u16 param_1,u16 param_2,void *param_3)
{
  char *str;
  long lVar1;
  char *pcVar2;
  u32 local_6;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  pcVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_3);
  str = UI_Generate_Formatted_Label_Logic
                  ((int)lVar1,(int)((ulong)lVar1 >> 0x10),(char *)pcVar2);
  strdup_allocate(str);
  return;
}



// Internal cleanup routine for report-style UI managers. It destroys nested sub-objects
// and deallocates internal tracking arrays.

void __stdcall16far UI_Report_List_Internal_Cleanup_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  UI_Window_Manager_Cleanup_SubWindows_Logic(this);
  if (*(int *)((int)this + 0x58) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x56) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x56);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x56) = 0x0;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x60));
  memset_far((void *)(void *)*(undefined4 *)((int)this + 0x64),
             (int)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10),0x0);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x64));
  *(undefined4 *)((int)this + 0x60) = 0x0;
  *(undefined4 *)((int)this + 0x64) = 0x0;
  return;
}



void __cdecl16far UI_Report_Filter_Compare_Strings_184a(u32 *param_1)
{
  char *pcVar1;
  u16 uVar2;
  int iVar3;
  u16 local_6;
  
  uVar2 = g_ReportFilter_0ECC;
  pcVar1 = (char *)*(undefined4 *)
                    (*(int *)(g_ReportFilter_0ECC * 0x6 + 0xeba) * 0x8 + (int)*param_1);
  iVar3 = stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10));
  if (iVar3 == 0x0)
  {
    pcVar1 = (char *)*(undefined4 *)
                      (*(int *)(uVar2 * 0x6 + 0xebc) * 0x8 + (int)*param_1);
    iVar3 = stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10))
    ;
    if (iVar3 == 0x0)
    {
      pcVar1 = (char *)*(undefined4 *)
                        (*(int *)(uVar2 * 0x6 + 0xebe) * 0x8 + (int)*param_1);
      stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10));
    }
  }
  return;
}



u16 __stdcall16far const_0_stub_1010_18e8(void)
{
  return 0x0;
}



u16 __stdcall16far const_1_stub_1010_18ee(void)
{
  return 0x1;
}



// Scalar deleting destructor for the report list manager with vtable 0x191A.

void * __stdcall16far UI_Report_List_Manager_scalar_dtor_191A(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Report_List_Manager_dtor_191A_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:1B2A.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_1B2A_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Report_List_Manager_ctor_init_191A_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x6e) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_35_flc_1050_1b2a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6e) = (int)lVar1;
  *(undefined2 *)((int)this + 0x70) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



void __stdcall16far Simulator_World_Process_Entities_VCall_40_19a4(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  u16 local_1c;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar2 == NULL) break;
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)(0x1028,param_1,(int)pvVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 to retrieve resource 0x32.
// Orchestrates entity classification and label generation for reports.

char * __stdcall16far
UI_Report_Get_Entity_Name_Label_Logic(void *context,long entity_ref)
{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  
  pcVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
  pcVar1 = UI_Generate_Formatted_Label_Logic
                     ((int)*(undefined4 *)((int)context + 0x6e),
                      (int)((ulong)*(undefined4 *)((int)context + 0x6e) >> 0x10),
                      (char *)pcVar3);
  iVar2 = atoi_wrapper_far(pcVar1);
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  pcVar1 = (char *)UI_Classify_Entity_Type_for_Notification_Logic
                             ((void *)pvVar4,entity_ref);
  UI_Get_Entity_Name_by_Type_and_Index_Logic
            ((int)*(undefined4 *)((int)context + 0x6e),
             (int)((ulong)*(undefined4 *)((int)context + 0x6e) >> 0x10),iVar2,pcVar1);
  pcVar1 = strdup_allocate(pcVar1);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u8 __stdcall16far
UI_Validate_Entity_Against_Property_Table_1a66(u32 param_1,void *param_2)
{
  undefined4 uVar1;
  u8 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  u16 local_c;
  u16 local_a;
  u16 local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(int *)((int)(void *)param_2 + 0x1c) != 0x2) ||
     ((*(uint *)((int)(void *)param_2 + 0x1e) & 0xff) != 0x0))
  {
    UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_2);
    uVar5 = (undefined2)(param_1 >> 0x10);
    lVar6 = Entity_Get_Indirect_ID_Logic(*(long *)((int)param_1 + 0x6e));
    if (((int)lVar6 != 0x2) || ((char)((ulong)lVar6 >> 0x10) != '\0'))
    {
      uVar1 = *(undefined4 *)((int)param_1 + 0x6e);
      iVar3 = UI_Get_U16_at_Offset_C_Logic
                        ((int)uVar1,(int)((ulong)uVar1 >> 0x10),(long)param_2);
      iVar4 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar3);
      if ((iVar4 == 0x0) &&
         (iVar3 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar3),
         iVar3 == 0x0))
      {
        uVar2 = '\0';
      }
      else
      {
        uVar2 = '\x01';
      }
      return uVar2;
    }
  }
  return '\0';
}



void * __stdcall16far
UI_Report_List_Manager_dtor_Scalar_Deleting_1b04(void *param_1,u16 param_2,byte param_3)
{
  UI_Report_List_Manager_dtor_191A_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Report_List_Manager vtable to 1010:1D04.
// References Resource Manager at 1050:0ED0 to retrieve resource 3.

void * __stdcall16far
UI_Report_List_Manager_ctor_init_1D04_Logic(void *this,int segment,int id)
{
  long lVar1;
  
  UI_Report_List_Manager_ctor_init_191A_Logic(this,segment,id);
  *(undefined4 *)((int)this + 0x6e) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_330_flc_1050_1cfe + 0x6;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x6e) = (int)lVar1;
  *(undefined2 *)((int)this + 0x70) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



void __stdcall16far Simulator_World_Process_Entities_VCall_40_1bb4(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  u16 local_1c;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar2 == NULL) break;
    puVar1 = (undefined2 *)((int)*param_1 + 0x40);
    (*(code *)*puVar1)(0x1028,param_1,(void *)pvVar2);
  }
  return;
}



// Retrieves a help or descriptive string resource for a report item.

char * __stdcall16far UI_Report_Get_Help_String_Logic(void *this,long entity_ref)
{
  char *pcVar1;
  char *pcVar2;
  undefined2 in_stack_00000006;
  
  pcVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
  pcVar1 = UI_Generate_Formatted_Label_Logic
                     ((int)*(undefined4 *)((int)this + 0x6e),
                      (int)((ulong)*(undefined4 *)((int)this + 0x6e) >> 0x10),
                      (char *)pcVar2);
  pcVar1 = strdup_allocate(pcVar1);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string property table in segment 1050 (offset 06E0).
// Determines entity visibility in grouped reports based on property lookup.

int __stdcall16far UI_Report_Check_Entity_Visibility_Logic(void *this,long entity_ref)
{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  uint uStack_4;
  
  uVar4 = (undefined2)((ulong)entity_ref >> 0x10);
  if ((*(int *)((int)entity_ref + 0x1c) != 0x2) ||
     ((*(uint *)((int)entity_ref + 0x1e) & 0xff) != 0x0))
  {
    UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
    lVar5 = Entity_Get_Indirect_ID_Logic(*(long *)((int)this + 0x6e));
    if (((int)lVar5 != 0x2) || ((char)((ulong)lVar5 >> 0x10) != '\0'))
    {
      iVar2 = UI_Get_U16_at_Offset_C_Logic
                        ((int)*(undefined4 *)((int)this + 0x6e),
                         (int)((ulong)*(undefined4 *)((int)this + 0x6e) >> 0x10),
                         entity_ref);
      iVar3 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
      if ((iVar3 == 0x0) &&
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2),
         iVar2 == 0x0))
      {
        bVar1 = 0x0;
      }
      else
      {
        bVar1 = 0x1;
      }
      uStack_4 = (uint)bVar1;
      return uStack_4;
    }
  }
  return 0x0;
}



void * __stdcall16far
UI_Report_List_Manager_dtor_Scalar_Deleting_1cde(void *param_1,u16 param_2,byte param_3)
{
  UI_Report_List_Manager_dtor_191A_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes Base_Object vtable to 1010:2014 (base 1008:389A).

void * __stdcall16far Base_Object_ctor_init_2014_Logic(void *this,int id)
{
  undefined2 in_stack_00000008;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined2 *)((int)this + 0x8) = in_stack_00000008;
  *_this = (char *)s_573_bmp_1050_200f + 0x5;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:2014 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 4.

void __stdcall16far Base_Object_dtor_2014_Logic(void *this)
{
  undefined2 *puVar1;
  int in_stack_00000006;
  
  *_this = (char *)s_573_bmp_1050_200f + 0x5;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,in_stack_00000006);
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



u16 __stdcall16far const_0_stub_1010_1dce(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1010_1dd4(void)
{
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global resource manager instance at 1050:0ED0.

void __stdcall16far Resource_Manager_Check_ID_Wrapper_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  Resource_Manager_Set_Active_ID_Logic(_p_ResourceManager,*(int *)((int)this + 0x8));
  return;
}
