/*
 * Source: outpost.c
 * Chunk: 23/117
 * Original lines: 25361-26531
 * Boundaries: top-level declarations/definitions only
 */




// Sets the values of two internal reference fields at offsets 0x16 and 0x1A.

void __stdcall16far
UI_Component_Set_Offsets_16_1A_Logic(void *this,long val_1a,long val_16)
{
  undefined2 in_stack_00000006;
  
  *(long *)((int)this + 0x16) = val_16;
  *(long *)((int)this + 0x1a) = val_1a;
  return;
}



// Retrieves the 32-bit values from offsets 0x16 and 0x1A of the input structure.
// Inverse of `UI_Component_Set_Offsets_16_1A_Logic`.

void __stdcall16far
UI_Component_Get_Offsets_16_1A_Logic(void *this,long *out_1a,long *out_16)
{
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  
  *in_stack_0000000c = *(undefined4 *)((int)this + 0x16);
  *_out_16 = *(long *)((int)this + 0x1a);
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



// Finds a relationship link and, if it is in an active state (2 or 3), invokes the
// processing routine `FUN_1008_e9a4`. Returns 1 if the link is in state 0/1 or after
// processing.

int __stdcall16far
UI_Relationship_Manager_Activate_Link_Logic(void *this,char *name1,char *name2)
{
  void *link_ptr;
  int iVar1;
  int in_DX;
  
  link_ptr = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
  if (in_DX == 0x0 && link_ptr == NULL)
  {
    return 0x1;
  }
  iVar1 = *(int *)((int)link_ptr + 0xc);
  if ((-0x1 < iVar1) && (true))
  {
    if (iVar1 < 0x2)
    {
      return 0x1;
    }
    if ((0x0 < iVar1 + -0x1) && (iVar1 + -0x2 < 0x2))
    {
      iVar1 = UI_Relationship_Manager_Should_Update_Link_Probability_Check
                        ((int)this,(int)name1,link_ptr);
      return iVar1;
    }
  }
  return 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Determines the numerical status code (0, 1, or 2) for a relationship link between two
// identifiers. It performs initial string validation before checking the link's
// internal state field.

int __stdcall16far
UI_Relationship_Manager_Get_Link_Status_Code_Logic(void *this,char *name1,char *name2)
{
  byte *pbVar1;
  int iVar2;
  void *pvVar3;
  int in_DX;
  undefined2 in_stack_0000000a;
  byte *in_stack_0000000c;
  char *pcVar4;
  
  pcVar4 = _name2;
  pbVar1 = (byte *)Resource_Manager_LoadString_to_Internal_Buffer
                             ((int)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  iVar2 = strcmp_case_sensitive((byte *)CONCAT22(in_DX,pbVar1),pcVar4);
  if ((iVar2 == 0x0) ||
     (iVar2 = strcmp_case_sensitive(in_stack_0000000c,_name2), iVar2 == 0x0))
  {
    return 0x0;
  }
  pvVar3 = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
  if (in_DX != 0x0 || pvVar3 != NULL)
  {
    iVar2 = *(int *)((int)pvVar3 + 0xc);
    if (iVar2 == 0x1)
    {
      return 0x2;
    }
    if (iVar2 + -0x1 < 0x1)
    {
      return 0x0;
    }
    if (SBORROW2(iVar2 + -0x1,0x1))
    {
      return 0x0;
    }
    if (0x1 < iVar2 + -0x2)
    {
      return 0x0;
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads report strings (IDs 0x443 to 0x446) and "None" (0x531) using global manager at
// 1050:14CC.

int __stdcall16far
UI_Relationship_Manager_Report_Link_Status_Logic(void *this,char *name1,char *name2)
{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  uint in_DX;
  uint uVar5;
  undefined2 in_stack_0000000a;
  byte *in_stack_0000000c;
  undefined2 uVar6;
  int iStack_c;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1e));
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  pcVar3 = name2;
  uVar6 = in_stack_0000000a;
  pbVar1 = (byte *)Resource_Manager_LoadString_to_Internal_Buffer
                             ((int)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  iVar2 = strcmp_case_sensitive
                    ((byte *)CONCAT22(in_DX,pbVar1),(char *)CONCAT22(uVar6,pcVar3));
  uVar5 = in_DX;
  if ((iVar2 == 0x0) ||
     (iVar2 = strcmp_case_sensitive
                        (in_stack_0000000c,(char *)CONCAT22(in_stack_0000000a,name2)),
     uVar5 = in_DX, iVar2 == 0x0))
  {
    iStack_c = 0x443;
  }
  else
  {
    pvVar4 = UI_Relationship_Manager_Find_Link_by_Strings_Logic(this,name1,name2);
    uVar5 = in_DX | (uint)pvVar4;
    if (uVar5 == 0x0)
    {
      iStack_c = 0x444;
    }
    else
    {
      iStack_c = 0x443;
      iVar2 = *(int *)((int)pvVar4 + 0xc);
      if (iVar2 != 0x0)
      {
        if (iVar2 == 0x1)
        {
          iStack_c = 0x445;
          goto LAB_1008_e378;
        }
        if (iVar2 != 0x2)
        {
          if (iVar2 == 0x3)
          {
            iStack_c = 0x446;
          }
          goto LAB_1008_e378;
        }
      }
      iStack_c = 0x444;
    }
  }
LAB_1008_e378:
  pcVar3 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),iStack_c);
  *(undefined2 *)((int)this + 0x1e) = pcVar3;
  *(uint *)((int)this + 0x20) = uVar5;
  return *(int *)((int)this + 0x1e);
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



u16 __stdcall16far
UI_Object_Collection_TypeE5DA_Serialize_to_File(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_30;
  u32 local_28;
  u32 local_24;
  u16 local_1c;
  u16 local_16;
  u32 local_10;
  undefined1 local_c [0x8];
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
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
    if (iVar2 != 0x0)
    {
      init_long_pair(local_c,*(long *)(iVar1 + 0xa));
      do
      {
        local_10 = get_next_list_item(local_c);
        iVar1 = (int)(local_10 >> 0x10);
        if (iVar1 == 0x0 && (int)local_10 == 0x0)
        {
          return 0x1;
        }
        local_24 = *(u32 *)((int)local_10 + 0x4);
        iVar1 = file_write_check((long)param_2,&local_24,unaff_SS);
        if (iVar1 == 0x0) break;
        local_28 = *(u32 *)((int)local_10 + 0x8);
        iVar1 = file_write_check((long)param_2,&local_28,unaff_SS);
        if (iVar1 == 0x0) break;
        local_16 = *(u16 *)((int)local_10 + 0xc);
        iVar1 = file_write_check((long)param_2,&local_16,unaff_SS);
        if (iVar1 == 0x0) break;
        local_30 = *(u32 *)((int)local_10 + 0xe);
        iVar1 = file_write_check((long)param_2,&local_30,unaff_SS);
        if (iVar1 == 0x0) break;
        local_16 = *(u16 *)((int)local_10 + 0x12);
        iVar1 = file_write_check((long)param_2,&local_16,unaff_SS);
      } while (iVar1 != 0x0);
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Variable defined which should be unmapped: local_38

u16 __stdcall16far
UI_Component_Collection_Deserialize_from_File_e70e(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  uint in_DX;
  uint extraout_DX;
  void *handle_wrapper;
  void *unaff_SS;
  u32 local_38;
  u32 local_16;
  u16 local_12;
  u32 local_e;
  u16 local_a;
  u16 local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 != 0x0)
    {
      if (local_4 == 0x0)
      {
        return 0x1;
      }
      local_a = 0x0;
      while( true )
      {
        if (local_4 <= local_a)
        {
          return 0x1;
        }
        pvVar3 = allocate_memory(CONCAT22((undefined2)local_38,0x14));
        handle_wrapper = (void *)(in_DX | (uint)pvVar3);
        if (handle_wrapper == NULL)
        {
          pvVar3 = NULL;
          handle_wrapper = NULL;
        }
        else
        {
          pvVar3 = UI_Component_ctor_DD4A_zero(pvVar3);
        }
        local_e = CONCAT22(handle_wrapper,pvVar3);
        iVar2 = file_read_check((long)param_2,(void *)((int)pvVar3 + 0x4),handle_wrapper
                               );
        if ((((iVar2 == 0x0) ||
             (iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0x8),
                                      (void *)(local_e >> 0x10)), iVar2 == 0x0)) ||
            (iVar2 = file_read_check((long)param_2,&local_12,unaff_SS), iVar2 == 0x0))
           || ((iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0xe),
                                        (void *)(local_e >> 0x10)), iVar2 == 0x0 ||
               (iVar2 = file_read_check((long)param_2,(void *)((int)local_e + 0x12),
                                        (void *)(local_e >> 0x10)), iVar2 == 0x0))))
        break;
        *(u16 *)((int)local_e + 0xc) = local_12;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0xa) + 0x4);
        (*(code *)*puVar1)();
        local_a += 0x1;
        in_DX = extraout_DX;
      }
      local_38._0_2_ = (undefined2)local_e;
      local_38._2_2_ = (undefined2)(local_e >> 0x10);
      if (local_e != 0x0)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)local_e)
                  (0x1000,(undefined2)local_38,local_38._2_2_,0x1,(undefined2)local_38,
                   local_38._2_2_);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0.
// Accesses global difficulty setting at 1050:13AE (PTR_DAT_1050_13ae).
// Performs randomized state transition checks for relationship links.

int __stdcall16far
UI_Relationship_Manager_Should_Update_Link_Probability_Check
          (int segment1,int segment2,void *link_ptr)
{
  uint uVar1;
  int iVar2;
  u32 uVar3;
  undefined2 in_stack_0000000a;
  int iStack_14;
  ulong uStack_10;
  undefined4 uStack_6;
  
  uVar3 = Simulator_Global_Get_Current_Tick_8326();
  uStack_6 = CONCAT22(((int)(uVar3 >> 0x10) - *(int *)((int)link_ptr + 0x10)) -
                      (uint)((uint)uVar3 < *(uint *)((int)link_ptr + 0xe)),
                      (uint)uVar3 - *(uint *)((int)link_ptr + 0xe));
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_10 = 0x0;
  if (((int)g_ModeVersion_13AE < 0x1) || (SBORROW2((int)g_ModeVersion_13AE,0x1)))
  goto LAB_1008_ea2b;
  if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
      (int)(g_ModeVersion_13AE + -0x1) < 0x1)
  {
    if (*(int *)((int)link_ptr + 0x12) == 0x0)
    {
LAB_1008_ea20:
      uVar1 = 0x1e;
    }
    else
    {
      uVar1 = 0xa;
    }
  }
  else if (g_ModeVersion_13AE ==
           (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
  {
    if (*(int *)((int)link_ptr + 0x12) == 0x0)
    {
      uVar1 = 0x28;
    }
    else
    {
      uVar1 = 0x14;
    }
  }
  else
  {
    if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock) goto LAB_1008_ea2b;
    if (*(int *)((int)link_ptr + 0x12) != 0x0) goto LAB_1008_ea20;
    uVar1 = 0x32;
  }
  uStack_10 = (ulong)uVar1;
LAB_1008_ea2b:
  if (uStack_10 < uStack_6)
  {
    iVar2 = random_int_range(0x1,0x64);
    iStack_14 = 0x0;
    if (*(int *)((int)link_ptr + 0xc) == 0x2)
    {
      iStack_14 = 0x32;
    }
    else if (*(int *)((int)link_ptr + 0xc) == 0x3)
    {
      iStack_14 = 0x19;
    }
    if (iVar2 < iStack_14)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// Scalar deleting destructor for the UI component with vtable 0xEAAC.

void * __stdcall16far UI_Component_scalar_dtor_EAAC(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Component_dtor_EAAC(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EB1A.

void * __stdcall16far UI_Element_Subclass_ctor_EB1A(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0xc));
  *(undefined2 *)CONCAT22(segment,this) = 0xeb1a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// A simple wrapper for the base scalar deleting destructor of a UI element.

void * __stdcall16far UI_Element_scalar_dtor_base_wrapper(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EC00.

void * __stdcall16far UI_Element_Subclass_ctor_EC00(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xec00;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Far Pointer
// Returns a far pointer into a 16-byte element property table starting at 1050:0D0E.

void * __stdcall16far get_table_D0E_entry_ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)(in_stack_00000008 * 0x10 + 0xd0e);
}



int __stdcall16far get_const_5_stub(void)
{
  return 0x5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 and global state at 1050:65E2.
// Accesses global property tables at 1050:0D04 (Divisors) and 1050:0D08 (Values).

int __stdcall16far res_manager_get_randomized_table_value_logic(void *this,int index)
{
  int iVar1;
  ulong uVar2;
  int in_stack_00000008;
  
  *(int *)((int)this + 0xa) = in_stack_00000008;
  iVar1 = 0x0;
  if (in_stack_00000008 != 0x0)
  {
    Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    uVar2 = Resource_Manager_Get_Global_65E2_Pointer();
    iVar1 = *(int *)(((int)(uVar2 % *(ulong *)(*(int *)((int)this + 0xa) * 0x10 + 0xd04)
                           ) + *(int *)((int)this + 0xa) * 0x8) * 0x2 + 0xd08);
  }
  return iVar1;
}



// A simple wrapper for the base scalar deleting destructor of a UI element. Duplicate
// instance.

void * __stdcall16far UI_Element_scalar_dtor_base_wrapper_2(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:EC62.

void * __stdcall16far UI_Element_Subclass_ctor_EC62(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xec62;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_ec3c(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Subclass_EFC4 vtable to 1008:EFC4 (base 1008:3B5E).

void * __stdcall16far UI_Subclass_EFC4_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *_this = 0xefc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Destructor for the UI element subclass with vtable 0xEFC4. Calls the base class
// destructor.

void __stdcall16far UI_Subclass_EFC4_dtor(void *this)
{
  u16 in_stack_00000006;
  
  *_this = 0xefc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Subclass_EF9C vtable to 1008:EF9C (base 1008:36DA).
// Allocates a 0x20C byte buffer using global heap context.

void * __stdcall16far UI_Subclass_EF9C_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  int in_DX;
  undefined2 unaff_BP;
  
  UI_Window_Base_ctor_init_36DA_Logic(this,segment,id);
  *(undefined2 *)CONCAT22(segment,this) = 0xef9c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar1 = allocate_memory(CONCAT22(unaff_BP,0x20c));
  *(undefined2 *)((int)this + 0x5c) = pvVar1;
  *(int *)((int)this + 0x5e) = in_DX;
  memset_far((void *)*(undefined2 *)((int)this + 0x5c),in_DX,0x0);
  return this;
}



// Destructor for the UI element subclass with vtable 0xEF9C. Calls the base class
// destructor.

void __stdcall16far UI_Subclass_EF9C_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xef9c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  UI_Window_Base_dtor_36DA_Logic(this);
  return;
}



// Factory function for UI_Subclass_EFC4. If param_3 is non-zero, it performs a raw
// allocation of (param_3 * 4) bytes. If param_3 is zero, it allocates 0x1A bytes and
// invokes the UI_Subclass_EFC4 constructor.

void * __stdcall16far UI_Subclass_EFC4_factory(int mode)
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
    pvVar1 = UI_Subclass_EFC4_ctor(pvVar1);
    return pvVar1;
  }
  return NULL;
}



void __stdcall16far UI_Struct_Initialize_by_Index_ed62(u32 param_1,int param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  *(int *)(iVar1 + 0x16) = param_2 * 0x8 + 0xd5e;
  *(undefined2 *)(iVar1 + 0x18) = (dword *)&g_HeapContext;
  *(undefined2 *)(iVar1 + 0x12) = *(undefined2 *)(param_2 * 0x8 + 0xd64);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References global resource manager at 1050:0ED0 and bitmask context at 1050:0DF6.
// Performs indirect call through [this] vtable offset 0x18.
// Updates simulation state bitflags based on table index.

void __stdcall16far
Simulation_Update_BitFlags_Logic(void *this,int low,int high,int shift,int table_idx)
{
  undefined2 *puVar1;
  int id;
  void *pvVar2;
  char cVar3;
  uint in_DX;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (0x0 < table_idx)
  {
    if (_PTR_DAT_1050_0000_1050_0df6 == NULL)
    {
      puVar1 = (undefined2 *)((int)*_this + 0x18);
      id = (*(code *)*puVar1)();
      _PTR_DAT_1050_0000_1050_0df6 =
           (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,id);
      in_DX = (uint)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10);
    }
    pvVar2 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic
                       ((void *)_PTR_DAT_1050_0000_1050_0df6,
                        (int)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10));
    uVar4 = high + 0x1;
    uVar5 = shift + (uint)(0xfffe < (uint)high);
    for (cVar3 = ((char)table_idx + -0x1) * '\x04'; cVar3 != '\0'; cVar3 += -0x1)
    {
      bVar6 = CARRY2(uVar4,uVar4);
      uVar4 *= 0x2;
      uVar5 = uVar5 * 0x2 + (uint)bVar6;
    }
    UI_Element_Set_Indexed_FarPtr_at_Offset_5C_Logic
              ((void *)_PTR_DAT_1050_0000_1050_0df6,
               (int)((ulong)_PTR_DAT_1050_0000_1050_0df6 >> 0x10),uVar4 | (uint)pvVar2,
               uVar5 | in_DX);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Instantiates a stack-based UI_Subclass_EFC4 (vtable 1008:EFC4).
// Invokes recursive tree building logic.

void __stdcall16far UI_Element_Lazy_Init_Offset_56(void *this)
{
  void *pvVar1;
  undefined2 in_DX;
  int unaff_SS;
  undefined2 in_stack_00000006;
  undefined1 local_1c [0x1a];
  
  if (*(long *)((int)this + 0x56) == 0x0)
  {
    UI_Subclass_EFC4_ctor(local_1c);
    pvVar1 = UI_Tree_Builder_Recursive_Logic(local_1c,unaff_SS,0x0,NULL);
    *(undefined2 *)((int)this + 0x56) = pvVar1;
    *(undefined2 *)((int)this + 0x58) = in_DX;
    UI_Subclass_EFC4_dtor(local_1c);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads resource string using global manager at 1050:14CC based on ID from
// sub-component at offset 0x16.

char * __stdcall16far get_resource_string_from_offset_16_logic(void *this)
{
  char *pcVar1;
  undefined2 in_stack_00000006;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)*(undefined4 *)((int)this + 0x16));
  return pcVar1;
}



void __stdcall16far UI_Element_Lookup_Node_at_5C_ee72(u32 *param_1,int param_2)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 in_DX;
  undefined2 extraout_DX;
  
  if (*(long *)((int)param_1 + 0x56) == 0x0)
  {
    puVar1 = (undefined2 *)((int)*(u32 *)CONCAT22(param_2,param_1) + 0x10);
    (*(code *)*puVar1)();
    in_DX = extraout_DX;
  }
  pvVar2 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic(param_1,param_2);
  UI_Element_Find_Node_by_Bitmask_Logic(param_1,(long)CONCAT22(in_DX,pvVar2));
  return;
}
