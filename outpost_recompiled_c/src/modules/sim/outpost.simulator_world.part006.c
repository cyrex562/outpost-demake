/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 6/56
 * Original lines (combined): 22196-24167
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Iteratively loads 14 string resources (IDs 0x6D9 to 0x6E6) using global manager at
// 1050:14CC.
// Initializes list entries with UI_Element_Subclass vtable 1008:BDDC.
// Performs indirect call through list object vtable offset 8.
// References global state at 1050:5748.

void * __stdcall16far UI_Populate_Standard_Option_List_Logic(void *this)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  char *pcVar3;
  uint reg_dx;
  uint uVar4;
  uint uVar5;
  uint extraout_DX;
  void *pvVar6;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  int iStack_4;
  
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    this_00 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xc));
    uVar4 = reg_dx | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x12) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,reg_dx);
      *(undefined2 *)((int)this + 0x12) = pvVar2;
      *(uint *)((int)this + 0x14) = uVar4;
    }
    for (iStack_4 = 0x6d9; iStack_4 < 0x6e7; iStack_4 += 0x1)
    {
      if (iStack_4 == 0x6e3)
      {
        pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)0x8000001);
        uVar4 = (uint)((ulong)pvVar6 >> 0x10);
        if (*(int *)((int)(void *)pvVar6 + 0x136) != 0x0) goto LAB_1008_b44a;
      }
      else
      {
LAB_1008_b44a:
        pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xa));
        uVar4 |= (uint)pvVar2;
        if (uVar4 == 0x0)
        {
          pvVar2 = NULL;
          uVar4 = 0x0;
        }
        else
        {
          pvVar2 = UI_Element_Subclass_ctor_BDDC(pvVar2);
        }
        uVar5 = uVar4;
        pcVar3 = Resource_Manager_LoadString_and_Duplicate
                           ((int)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),iStack_4);
        *(undefined2 *)((int)pvVar2 + 0x4) = pcVar3;
        *(uint *)((int)pvVar2 + 0x6) = uVar5;
        *(int *)((int)pvVar2 + 0x8) = iStack_4 + -0x6d8;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x8);
        (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)((int)this + 0x12),
                           (int)((ulong)*(undefined4 *)((int)this + 0x12) >> 0x10),
                           pvVar2,uVar4);
        uVar4 = extraout_DX;
      }
    }
  }
  return (void *)*(undefined2 *)((int)this + 0x12);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global simulator state at 1050:5748.
// Iteratively invokes virtual destructors (vtable index 0) for sub-system lists at
// offsets 0xE and 0x12.

void __stdcall16far UI_Component_Cleanup_SubSystems_Logic(void *this,int arg2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  void *this_ptr;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0x0)
  {
    if (*(long *)((int)this + 0x1a) != 0x0)
    {
      *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0x8) = 0x1;
      *(undefined4 *)((int)*(undefined4 *)((int)this + 0x16) + 0xa) =
           *(undefined4 *)((int)*(undefined4 *)((int)this + 0x1a) + 0x8);
      *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0xe) =
           *(undefined2 *)((int)*(undefined4 *)((int)this + 0x1e) + 0x8);
      this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)*(undefined4 *)
                                     ((int)*(undefined4 *)((int)this + 0x16) + 0xa));
      unaff_CS = 0x1038;
      UI_Colony_Window_Free_SubItem_Logic_3608(this_ptr);
    }
  }
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0x12);
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads string resource 0x6E7 ("Slot %d") using global manager at 1050:14CC.
// Instantiates 5 UI components with vtable 1008:BDC4.
// Performs indirect call through list object vtable offset 8.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Populate_Numbered_Slot_List_Logic(void *this)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  char *pcVar3;
  uint reg_dx;
  uint uVar4;
  uint extraout_DX;
  uint uVar5;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  void *in_stack_0000fdf4;
  uint uVar6;
  void *pvStack_204;
  undefined1 local_202 [0x100];
  char local_102 [0x100];
  
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_202,0x100),
             CONCAT22(0x6e7,unaff_SS));
  if (*(long *)((int)this + 0xa) == 0x0)
  {
    this_00 = allocate_memory(CONCAT22(in_stack_0000fdf4,0xc));
    uVar4 = reg_dx | (uint)this_00;
    if (uVar4 == 0x0)
    {
      pvVar2 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,reg_dx);
    }
    *(undefined2 *)((int)this + 0xa) = pvVar2;
    *(uint *)((int)this + 0xc) = uVar4;
    for (pvStack_204 = (void *)0x1; (int)pvStack_204 < 0x6;
        pvStack_204 = (void *)((int)pvStack_204 + 0x1))
    {
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000fdf4,0x12));
      uVar5 = uVar4 | (uint)pvVar2;
      if (uVar5 == 0x0)
      {
        in_stack_0000fdf4 = NULL;
        uVar5 = 0x0;
      }
      else
      {
        in_stack_0000fdf4 = UI_Element_Subclass_ctor_BDC4(pvVar2);
      }
      uVar6 = uVar5;
      _wsprintf16((char *)CONCAT22(unaff_SS,local_102),
                  (undefined1 *)CONCAT22(unaff_SS,local_202),
                  (void *)CONCAT22(in_stack_0000fdf4,pvStack_204));
      pcVar3 = strdup_allocate(local_102);
      *(undefined2 *)((int)in_stack_0000fdf4 + 0x4) = pcVar3;
      *(uint *)((int)in_stack_0000fdf4 + 0x6) = uVar5;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
      (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xa),
                         (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),
                         in_stack_0000fdf4,uVar6,in_stack_0000fdf4,uVar6,pvVar2,uVar4);
      uVar4 = extraout_DX;
    }
    *(undefined2 *)((int)this + 0x22) = 0x5;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads string resource 0x6E7 using global manager at 1050:14CC.
// Instantiates a UI component with vtable 1008:BDC4.
// Performs indirect call through list object vtable offset 8.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Add_New_Numbered_Slot_Entry_Logic(void *this)
{
  undefined2 *puVar1;
  void *this_00;
  char *pcVar2;
  uint reg_dx;
  uint uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fdf6;
  undefined1 local_206 [0x100];
  char local_106 [0x100];
  void *pvStack_6;
  uint uStack_4;
  
  this_00 = allocate_memory(CONCAT22(in_stack_0000fdf6,0x12));
  uVar3 = reg_dx | (uint)this_00;
  if (uVar3 == 0x0)
  {
    pvStack_6 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvStack_6 = UI_Element_Subclass_ctor_BDC4(this_00);
  }
  uStack_4 = uVar3;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             CONCAT22(0x6e7,unaff_SS));
  *(int *)((int)this + 0x22) = *(int *)((int)this + 0x22) + 0x1;
  _wsprintf16((char *)CONCAT22(unaff_SS,local_106),
              (undefined1 *)CONCAT22(unaff_SS,local_206),
              (void *)CONCAT22(this_00,(void *)*(undefined2 *)((int)this + 0x22)));
  pcVar2 = strdup_allocate(local_106);
  *(undefined2 *)((int)pvStack_6 + 0x4) = pcVar2;
  *(uint *)((int)pvStack_6 + 0x6) = uVar3;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
  (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xa),
                     (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),pvStack_6,
                     uStack_4,this_00,reg_dx);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global state at 1050:5748.
// Queries entity 0x8000001 to check a status flag at offset 0x152.

void * __stdcall16far UI_Get_Numbered_Slot_List_Head_maybe(void *this)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  if (*(int *)((int)(void *)pvVar1 + 0x152) == 0x0)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0xa);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through an array of string indices and returns the first one that is marked
// as 'available' or 'valid' in the resource manager's state table (offset 0x35).

int __stdcall16far res_find_first_available_string_index_logic(int *param_1,int param_2)
{
  int iVar1;
  undefined4 *puVar2;
  undefined2 reg_dx;
  long lVar3;
  int iStack_12;
  int iStack_10;
  undefined4 uStack_6;
  
  puVar2 = get_array_element_6bytes(param_1,param_2);
  uStack_6 = (undefined4 *)CONCAT22(reg_dx,puVar2);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iStack_12 = 0x0;
  iStack_10 = 0x0;
  while ((iVar1 = iStack_10, iStack_12 < *(int *)(puVar2 + 0x1) &&
         (iVar1 = *(int *)((int)*uStack_6 + iStack_12 * 0x2),
         *(int *)(iVar1 * 0x2 + (int)lVar3 + 0xa) == 0x0)))
  {
    iStack_12 += 0x1;
  }
  iStack_10 = iVar1;
  return iStack_10;
}



void * __stdcall16far get_array_element_6bytes(int *array_desc,int index)
{
  int in_stack_00000008;
  
                // Gets element from 6-byte structure array. Bounds check: 0 < index <
                // 0x47. Returns far ptr to element.
  if ((0x0 < in_stack_00000008) && (in_stack_00000008 < 0x47))
  {
    return (void *)(in_stack_00000008 * 0x6 + *_array_desc);
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global simulator map context at 1050:65E2.
// Performs indirect call via vtable initialization UI_Entity_Summary_Display_ctor_a43e.
// Triggers simulator object template loading via far address 1008:4BBE.

void __stdcall16far
UI_Element_Subclass_Process_String_Match_Logic(void *this,char *search_name)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  char *in_stack_00000008;
  undefined1 local_12 [0x4];
  long lStack_e;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  while( true )
  {
    lStack_e = get_next_list_item(local_a);
    iVar1 = (int)((ulong)lStack_e >> 0x10);
    if (iVar1 == 0x0 && (int)lStack_e == 0x0) break;
    iVar1 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)lStack_e + 0x4),in_stack_00000008);
    if (iVar1 == 0x0)
    {
      pvVar3 = UI_Entity_Summary_Display_ctor_a43e
                         ((undefined1 *)CONCAT22(unaff_SS,local_12));
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      UI_Entity_Dispatch_Command_from_ID_a6ee
                ((u32)CONCAT22(unaff_SS,local_12),*(u16 *)((int)lStack_e + 0x12));
      pvVar3 = (void *)*(undefined4 *)((int)(long *)_p_SimulatorWorldContext + 0x52);
      Simulator_Map_Context_Load_Object_Template_4bbe
                (pvVar3,*(int *)((int)lStack_e + 0x12));
      *(long *)((int)this + 0xe) =
           (long)*(int *)((int)(void *)pvVar3 + 0x94) + *_p_SimulatorWorldContext;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global resource manager at 1050:0ED0 and string property table at
// 1050:06E0.
// Iteratively instantiates UI components with Type 2 ctor.
// Performs indirect calls through list vtable index 0 (Destructor) and offset 4 (Add
// item).

void __stdcall16far UI_Populate_Specialized_Resource_List_Logic(void *this)
{
  u16 entity_id;
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int extraout_DX_00;
  int iVar9;
  int iVar10;
  undefined2 unaff_SI;
  undefined2 uVar11;
  long lVar12;
  long lVar13;
  undefined2 in_stack_00000006;
  int iStack_10;
  undefined4 uStack_e;
  
  uVar5 = *(uint *)((int)this + 0xc);
  if (uVar5 != 0x0 || (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
    uVar5 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(unaff_SI,0xc));
  uVar6 = uVar5 | (uint)this_00;
  if (uVar6 == 0x0)
  {
    pvVar2 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this_00,uVar5);
  }
  *(undefined2 *)((int)this + 0xa) = pvVar2;
  *(uint *)((int)this + 0xc) = uVar6;
  lVar12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar7 = (int)((ulong)lVar12 >> 0x10);
  iVar8 = iVar7;
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uStack_e = (undefined4 *)CONCAT22(iVar8,puVar3);
  iStack_10 = 0x0;
  iVar9 = iVar8;
  while( true )
  {
    if (*(int *)(puVar3 + 0x1) <= iStack_10) break;
    entity_id = *(u16 *)((int)*uStack_e + iStack_10 * 0x2);
    if (*(int *)(entity_id * 0x2 + (int)lVar12 + 0xa) != 0x0)
    {
      pcVar4 = Lookup_Entity_Name_by_ID_Logic_bd80(entity_id);
      pcVar4 = strdup_allocate(pcVar4);
      uVar11 = 0x1000;
      iVar10 = iVar9;
      pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x14));
      if (iVar10 == 0x0 && pvVar2 == NULL)
      {
        lVar13 = 0x0;
      }
      else
      {
        uVar11 = 0x1018;
        lVar13 = UI_Transaction_Item_Type2_ctor
                           (pvVar2,iVar10,0x1,pcVar4,iVar9,entity_id,0x0,0x0);
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
      (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0xa),
                         (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),lVar13);
      iVar9 = extraout_DX_00;
    }
    iStack_10 += 0x1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Initializes list tracker with construct_object_with_vtable.
// Uses global string manager at 1050:14CC for "None" label (ID 0x43D).
// Performs indirect call through vtable index 0 and offset 4.

void __stdcall16far
UI_Populate_Associated_File_List_Logic(void *this,void *search_context)
{
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
  int iVar10;
  int iVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 unaff_SS;
  void *pvVar14;
  char *pcVar15;
  long lVar16;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000ffc0;
  undefined4 uStack_38;
  int iStack_1e;
  undefined1 local_18 [0x8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  long lStack_6;
  
  uVar6 = *(uint *)((int)this + 0x20);
  if (uVar6 != 0x0 || (undefined4 *)*(int *)((int)this + 0x1e) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1e);
    (*(code *)*puVar1)();
    uVar6 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffc0,0xc));
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
  *(undefined2 *)((int)this + 0x1e) = pvVar3;
  *(uint *)((int)this + 0x20) = uVar7;
  lStack_6 = *(long *)((int)in_stack_00000008 + 0x200);
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_18),0x1,0x0,0x400);
  iStack_1e = 0x0;
  while( true )
  {
    pvVar14 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_18));
    iVar8 = (int)((ulong)pvVar14 >> 0x10);
    if (iVar8 == 0x0 && (int)pvVar14 == 0x0) break;
    if (*(long *)((int)pvVar14 + 0x200) == lStack_6)
    {
      iStack_1e += 0x1;
    }
  }
  bVar2 = false;
  if (0x1 < iStack_1e)
  {
    uStack_10 = uStack_c;
    uStack_e = uStack_a;
    if (iStack_8 != 0x0)
    {
      uStack_10 = 0x1;
      uStack_e = 0x0;
    }
    while( true )
    {
      pvVar14 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_18));
      iVar9 = (int)((ulong)pvVar14 >> 0x10);
      iVar8 = (int)pvVar14;
      if (iVar9 == 0x0 && iVar8 == 0x0) break;
      if ((*(long *)(iVar8 + 0x200) == lStack_6) &&
         (*(long *)(iVar8 + 0x4) != 0x4000001))
      {
        pcVar15 = UI_Component_Get_FarPtr_at_1FA(pvVar14);
        iVar10 = (int)((ulong)pcVar15 >> 0x10);
        pcVar4 = strdup_allocate((char *)pcVar15);
        uVar13 = 0x1000;
        iVar11 = iVar10;
        pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffc0,0x12));
        if (iVar11 == 0x0 && pvVar3 == NULL)
        {
          uVar5 = 0x0;
          uStack_38 = 0x0;
        }
        else
        {
          uVar13 = 0x1018;
          uStack_38 = UI_Transaction_Item_Type7_ctor
                                ((long)CONCAT22(iVar11,pvVar3),0x1,
                                 (long)CONCAT22(iVar10,pcVar4),*(long *)(iVar8 + 0x4));
          uVar5 = (undefined2)uStack_38;
        }
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1e) + 0x4);
        (*(code *)*puVar1)(uVar13,(int)*(undefined4 *)((int)this + 0x1e),
                           (int)((ulong)*(undefined4 *)((int)this + 0x1e) >> 0x10),uVar5
                           ,uStack_38._2_2_);
        bVar2 = true;
      }
    }
  }
  iVar8 = 0x0;
  if (!bVar2)
  {
    pcVar4 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43d);
    uVar13 = 0x1000;
    iVar9 = iVar8;
    pvVar3 = allocate_memory(CONCAT22(pcVar4,0x12));
    if (iVar8 == 0x0 && pvVar3 == NULL)
    {
      uVar5 = 0x0;
      uVar12 = 0x0;
    }
    else
    {
      uVar13 = 0x1018;
      lVar16 = UI_Transaction_Item_Type7_ctor
                         ((long)CONCAT22(iVar8,pvVar3),0x0,(long)CONCAT22(iVar9,pcVar4),
                          0x0);
      uVar12 = (undefined2)((ulong)lVar16 >> 0x10);
      uVar5 = (undefined2)lVar16;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1e) + 0x4)
    ;
    (*(code *)*puVar1)(uVar13,(int)*(undefined4 *)((int)this + 0x1e),
                       (int)((ulong)*(undefined4 *)((int)this + 0x1e) >> 0x10),uVar5,
                       uVar12,pcVar4,iVar9,uVar5,uVar12);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// References global management pointers in segment 1050: 06E0, 14CC.
// Indirect calls via multiple vtable offsets: 0x0, 4, 0x10, 0x1C, 0x24, 0x28.
// Manages resource lists for planets and entities.

void __stdcall16far UI_Populate_Planet_Resource_List_Logic(void *this,void *planet)
{
  undefined2 *puVar1;
  void *pvVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined2 uVar5;
  uint extraout_DX;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint uVar9;
  int iVar10;
  undefined2 uVar11;
  long lVar12;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000ffca;
  int iVar13;
  undefined1 local_2e [0x8];
  int iStack_26;
  u16 uStack_24;
  void *pvStack_22;
  ulong uStack_1e;
  undefined4 uStack_1a;
  astruct_491 *paStack_12;
  uint uStack_10;
  undefined4 uStack_e;
  undefined2 uStack_a;
  void *pvStack_8;
  int iStack_4;
  
  paStack_12 = (astruct_491 *)*(int *)((int)this + 0x1a);
  uVar6 = *(uint *)((int)this + 0x1c);
  uStack_e = (undefined4 *)CONCAT22(uVar6,paStack_12);
  uStack_10 = uVar6;
  if (uVar6 != 0x0 || paStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)paStack_12->field0_0x0)();
    uVar6 = extraout_DX;
  }
  paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffca,0xc));
  uVar7 = uVar6 | (uint)paStack_12;
  uStack_10 = uVar6;
  if (uVar7 == 0x0)
  {
    pvVar2 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paStack_12,uVar6);
  }
  *(undefined2 *)((int)this + 0x1a) = pvVar2;
  *(uint *)((int)this + 0x1c) = uVar7;
  iStack_4 = 0x0;
  uVar11 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  pvStack_8 = (void *)*(undefined4 *)((int)in_stack_00000008 + 0x210);
  iVar10 = *(int *)((int)in_stack_00000008 + 0x212);
  if (iVar10 != 0x0 || (void *)pvStack_8 != NULL)
  {
    uStack_1a = *(ulong *)((int)(void *)pvStack_8 + 0xa);
    for (uStack_1e = 0x0; iVar10 = uStack_1a._2_2_, uStack_1e < uStack_1a;
        uStack_1e += 0x1)
    {
      pvStack_22 = UI_Managed_List_Get_Item_at_Index_1312(pvStack_8,uStack_1e);
      if ((int)((ulong)pvStack_22 >> 0x10) != 0x0 || (void *)pvStack_22 != NULL)
      {
        for (uStack_24 = 0x1; (int)uStack_24 < 0x15; uStack_24 += 0x1)
        {
          iStack_26 = UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e
                                ((int)(void *)pvStack_22,
                                 (u16)((ulong)pvStack_22 >> 0x10),uStack_24);
          if (iStack_26 != 0x0)
          {
            init_long_pair(local_2e,*(long *)((int)this + 0x1a));
            do
            {
              lVar12 = get_next_list_item(local_2e);
              uVar9 = (uint)((ulong)lVar12 >> 0x10);
              uVar6 = (uint)lVar12;
              uVar7 = uVar9 | uVar6;
              if (uVar7 == 0x0) break;
            } while (*(u16 *)(uVar6 + 0xe) != uStack_24);
            if (lVar12 == 0x0)
            {
              pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(uStack_24);
              pcVar3 = strdup_allocate(pcVar3);
              uVar11 = 0x1000;
              uVar6 = uVar7;
              puVar4 = allocate_memory(CONCAT22(pcVar3,0x10));
              uStack_e = (undefined4 *)CONCAT22(uVar7,puVar4);
              if (uVar7 == 0x0 && puVar4 == NULL)
              {
                uVar5 = 0x0;
                uVar8 = 0x0;
              }
              else
              {
                uVar11 = 0x1018;
                lVar12 = UI_Transaction_Item_Type5_ctor
                                   ((long)uStack_e,(long)iStack_26,
                                    (long)CONCAT22(uVar6,pcVar3),uStack_24);
                uVar8 = (undefined2)((ulong)lVar12 >> 0x10);
                uVar5 = (undefined2)lVar12;
              }
              puVar1 = (undefined2 *)
                       ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1a) + 0x4);
              (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0x1a),
                                 (int)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10)
                                 ,uVar5,uVar8,pcVar3,uVar6,uVar5);
            }
            else
            {
              *(long *)(uVar6 + 0x8) = *(long *)(uVar6 + 0x8) + (long)iStack_26;
            }
            iStack_4 = 0x1;
          }
        }
      }
    }
  }
  uStack_a = 0x0;
  if (iStack_4 == 0x0)
  {
    pcVar3 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43f);
    uVar11 = 0x1000;
    iVar13 = iVar10;
    paStack_12 = allocate_memory(CONCAT22(pcVar3,0x10));
    uStack_10 = iVar10;
    if (iVar10 == 0x0 && paStack_12 == NULL)
    {
      uVar5 = 0x0;
      uVar8 = 0x0;
    }
    else
    {
      uVar11 = 0x1018;
      lVar12 = UI_Transaction_Item_Type5_ctor
                         ((long)CONCAT22(iVar10,paStack_12),0x0,
                          (long)CONCAT22(iVar13,pcVar3),0x0);
      uVar8 = (undefined2)((ulong)lVar12 >> 0x10);
      uVar5 = (undefined2)lVar12;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1a) + 0x4)
    ;
    (*(code *)*puVar1)(uVar11,(int)*(undefined4 *)((int)this + 0x1a),
                       (int)((ulong)*(undefined4 *)((int)this + 0x1a) >> 0x10),uVar5,
                       uVar8,pcVar3,iVar13,uVar5,uVar8);
  }
  return;
}
