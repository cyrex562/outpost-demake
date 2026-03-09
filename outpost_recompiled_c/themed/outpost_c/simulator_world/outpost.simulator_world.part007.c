/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 7/56
 * Original lines (combined): 24168-26076
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global simulator state at 1050:5748.
// Performs indirect call through [local_122] vtable index 0 (Destructor) during
// cleanup.
// Triggers simulator event 835A.

void __stdcall16far
UI_Relationship_Manager_Add_Link_and_Check_Status_Logic
          (void *param_1,undefined2 param_2,char *param_3)
{
  int in_DX;
  undefined2 unaff_SS;
  u32 uVar1;
  void *pvVar2;
  char *name1;
  undefined1 local_122 [0x112];
  int iStack_10;
  undefined1 local_e [0x8];
  void *pvStack_6;
  int iStack_4;
  
  name1 = (char *)((ulong)param_1 >> 0x10);
  pvStack_6 = UI_Relationship_Manager_Find_Link_by_Strings_Logic
                        ((void *)param_1,name1,param_3);
  iStack_4 = in_DX;
  if (in_DX != 0x0 || pvStack_6 != NULL)
  {
    uVar1 = Simulator_Global_Get_Current_Tick_8326();
    *(undefined2 *)((int)pvStack_6 + 0xe) = (int)uVar1;
    *(undefined2 *)((int)pvStack_6 + 0x10) = (int)(uVar1 >> 0x10);
    *(undefined2 *)((int)pvStack_6 + 0xc) = param_2;
  }
  init_long_pair(local_e,*(long *)((int)(void *)param_1 + 0xa));
  iStack_10 = 0x0;
  do
  {
    pvVar2 = (void *)get_next_list_item(local_e);
    iStack_4 = (int)((ulong)pvVar2 >> 0x10);
    pvStack_6 = (void *)pvVar2;
    if (pvVar2 == NULL) goto LAB_1008_e0d3;
  } while (*(int *)((int)pvStack_6 + 0xc) != 0x1);
  iStack_10 = 0x1;
LAB_1008_e0d3:
  if (iStack_10 == 0x0)
  {
    UI_Build_Item_TypeE4EA_ctor_init_e2be(local_122,unaff_SS,0x0,0x0,0x0);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_122));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// Initializes UI_Relationship_Link with vtable 1008:DD4A.
// Performs indirect call through [this + 10] vtable offset 4.
// References global simulator state at 1050:5748 to trigger build event 8372.

void __stdcall16far UI_Relationship_Manager_Establish_Link_and_Notify_Logic(void *this)
{
  int iVar1;
  undefined2 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint in_DX;
  uint uVar5;
  uint uVar6;
  undefined2 unaff_SS;
  u32 uVar7;
  char *in_stack_00000006;
  undefined2 in_stack_0000fed4;
  undefined4 uStack_124;
  undefined1 local_118 [0x112];
  void *pvStack_6;
  uint uStack_4;
  
  pvVar3 = UI_Relationship_Manager_Find_Link_by_Strings_Logic
                     (this,in_stack_00000006,
                      (char *)(char *)*(undefined4 *)((int)this + 0x1a));
  uVar5 = in_DX | (uint)pvVar3;
  pvStack_6 = pvVar3;
  if (uVar5 == 0x0)
  {
    UI_Relationship_Manager_Ensure_Entity_Exists_Logic(this);
    pvVar4 = pvVar3;
    uVar6 = uVar5;
    UI_Relationship_Manager_Ensure_Entity_Exists_Logic(this);
    uStack_124 = (void *)CONCAT22(uVar6,pvVar4);
    pvVar4 = allocate_memory(CONCAT22(in_stack_0000fed4,0x14));
    uStack_4 = uVar6 | (uint)pvVar4;
    if (uStack_4 == 0x0)
    {
      pvStack_6 = NULL;
      uStack_4 = 0x0;
    }
    else
    {
      pvStack_6 = UI_Relationship_Link_ctor
                            (pvVar4,(long)uStack_124,(long)CONCAT22(uVar5,pvVar3));
    }
    *(undefined2 *)((int)pvStack_6 + 0xc) = 0x1;
    uVar7 = Simulator_Global_Get_Current_Tick_8326();
    *(undefined2 *)((int)pvStack_6 + 0xe) = (int)uVar7;
    *(undefined2 *)((int)pvStack_6 + 0x10) = (int)(uVar7 >> 0x10);
    puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x4);
    (*(code *)*puVar2)();
  }
  else
  {
    iVar1 = *(int *)((int)pvVar3 + 0xc);
    if (iVar1 == 0x1)
    {
      return;
    }
    if (((0x0 < iVar1 + -0x1) && (!SBORROW2(iVar1 + -0x1,0x1))) && (iVar1 + -0x2 < 0x2))
    {
      *(undefined2 *)((int)pvVar3 + 0x12) = 0x1;
    }
    *(undefined2 *)((int)pvVar3 + 0xc) = 0x1;
    uStack_4 = in_DX;
  }
  UI_Build_Item_TypeE4EA_ctor_init_e2be
            (local_118,unaff_SS,0x1,*(undefined4 *)((int)pvStack_6 + 0x8),
             (int)*(undefined4 *)((int)pvStack_6 + 0x4),
             (int)((ulong)*(undefined4 *)((int)pvStack_6 + 0x4) >> 0x10));
  uVar7 = Simulator_Global_Get_Current_Tick_8326();
  Simulator_Global_Process_Build_Event_Type3_8372
            ((void **)_p_SimulatorGlobalState,uVar7 + 0x1,
             (undefined1 *)CONCAT22(unaff_SS,local_118));
  return;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Performs multiple indirect calls through list object vtable index 0 (Destructor) and
// offset 0xC (Add item).
// Instantiates UI_Production_Item_Base using constructor 1CD8.
// Uses global simulator world iterator logic.

void __stdcall16far
UI_Populate_Dual_Entity_Lists_Logic(void *this,void **list1_out,void **list2_out)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int extraout_DX;
  int iVar5;
  int extraout_DX_00;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  void *pvVar8;
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  undefined1 local_14 [0x8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  iVar5 = *(int *)((int)this + 0x10);
  if (iVar5 != 0x0 || (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar2)();
    iVar5 = extraout_DX;
  }
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (iVar5 == 0x0 && pvVar3 == NULL)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar8 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(iVar5,pvVar3),(void *)0x5,(void *)0x5);
    uVar7 = (undefined2)((ulong)pvVar8 >> 0x10);
    pvVar3 = (void *)pvVar8;
  }
  *(undefined2 *)((int)this + 0xe) = pvVar3;
  *(undefined2 *)((int)this + 0x10) = uVar7;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar8 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_14));
    iVar5 = (int)((ulong)pvVar8 >> 0x10);
    pvVar3 = (void *)pvVar8;
    if (iVar5 == 0x0 && pvVar3 == NULL) break;
    if (*(long *)((int)pvVar3 + 0x200) != 0x8000002)
    {
      puVar2 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0xc);
      (*(code *)*puVar2)(0x1028,(int)*(undefined4 *)((int)this + 0xe),
                         (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),
                         (int)*(undefined4 *)((int)pvVar3 + 0x4),
                         (int)((ulong)*(undefined4 *)((int)pvVar3 + 0x4) >> 0x10));
    }
  }
  *in_stack_0000000c = *(undefined4 *)((int)this + 0xe);
  iVar5 = *(int *)((int)this + 0x14);
  puVar4 = (undefined4 *)(undefined4 *)*(undefined4 *)((int)this + 0x12);
  iVar6 = 0x0;
  if (iVar5 != 0x0 || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar4)(0x1028,puVar4,iVar5,0x1);
    iVar6 = extraout_DX_00;
  }
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (iVar6 == 0x0 && pvVar3 == NULL)
  {
    pvVar3 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar8 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(iVar6,pvVar3),(void *)0x5,(void *)0x5);
    uVar7 = (undefined2)((ulong)pvVar8 >> 0x10);
    pvVar3 = (void *)pvVar8;
  }
  *(undefined2 *)((int)this + 0x12) = pvVar3;
  *(undefined2 *)((int)this + 0x14) = uVar7;
  uStack_c = uStack_8;
  uStack_a = uStack_6;
  if (iStack_4 != 0x0)
  {
    uStack_c = 0x1;
    uStack_a = 0x0;
  }
  while( true )
  {
    pvVar8 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_14));
    iVar5 = (int)((ulong)pvVar8 >> 0x10);
    if (iVar5 == 0x0 && (void *)pvVar8 == NULL) break;
    uVar1 = *(undefined4 *)((int)(void *)pvVar8 + 0x4);
    puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0xc)
    ;
    (*(code *)*puVar2)(0x1028,(int)*(undefined4 *)((int)this + 0x12),
                       (int)((ulong)*(undefined4 *)((int)this + 0x12) >> 0x10),
                       (int)uVar1,(int)((ulong)uVar1 >> 0x10));
  }
  *(undefined4 *)_list2_out = *(undefined4 *)((int)this + 0x12);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global simulator state at 1050:65E2 to retrieve entity objects by packed
// ID.

char * __stdcall16far res_strdup_by_id_logic(long entity_id)
{
  char *pcVar1;
  uint uVar2;
  void *this_ptr;
  char *pcVar3;
  u8 *in_stack_00000008;
  undefined2 in_stack_0000fff6;
  
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,in_stack_00000008);
  uVar2 = (uint)((ulong)this_ptr >> 0x10) | (uint)(void *)this_ptr;
  if (uVar2 == 0x0)
  {
    return NULL;
  }
  pcVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x80));
  pcVar3 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  strcpy_optimized((char *)CONCAT22(uVar2,pcVar1),pcVar3);
  return pcVar1;
}



// Searches the global simulation context for an entity with a matching name. Used to
// ensure that an identifier refers to a valid existing object before establishing a
// relationship.

void __stdcall16far UI_Relationship_Manager_Ensure_Entity_Exists_Logic(char *name)
{
  int iVar1;
  undefined2 unaff_SS;
  void *this_ptr;
  char *pcVar2;
  byte *in_stack_00000008;
  undefined1 local_14 [0x12];
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  do
  {
    this_ptr = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_14));
    if (this_ptr == NULL)
    {
      return;
    }
    pcVar2 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
    iVar1 = strcmp_case_sensitive(in_stack_00000008,pcVar2);
  } while (iVar1 != 0x0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global simulator state at 1050:65E2 to perform string-based bidirectional
// link search.

void * __stdcall16far
UI_Relationship_Manager_Find_Link_by_Strings_Logic(void *this,char *name1,char *name2)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *this_ptr;
  char *pcVar5;
  char *pcVar6;
  undefined2 in_stack_0000000a;
  byte *in_stack_0000000c;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  while( true )
  {
    pvVar4 = (void *)get_next_list_item(local_a);
    uVar3 = (undefined2)((ulong)pvVar4 >> 0x10);
    pvVar1 = (void *)pvVar4;
    if (pvVar4 == NULL)
    {
      return NULL;
    }
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)pvVar1 + 0x4));
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)pvVar1 + 0x8));
    pcVar5 = UI_Component_Get_FarPtr_at_1FA(pvVar4);
    pcVar6 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
    iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar5);
    if ((iVar2 == 0x0) && (iVar2 = strcmp_case_sensitive(_name2,pcVar6), iVar2 == 0x0))
    break;
    iVar2 = strcmp_case_sensitive(_name2,pcVar5);
    if ((iVar2 == 0x0) &&
       (iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar6), iVar2 == 0x0))
    {
      return pvVar1;
    }
  }
  return pvVar1;
}
