/*
 * Source: outpost.c
 * Chunk: 68/117
 * Original lines: 77479-78647
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves world coordinates from the simulator context and notifies all 8 surrounding
// cardinal/ordinal neighbor tiles of an update (using 6d24).

void __stdcall16far Simulator_Scan_All_Neighbors_and_Notify_Logic_6b40(void *this_ptr)
{
  undefined2 *puVar1;
  void *x;
  u16 y;
  int unaff_SS;
  void *pvVar2;
  undefined1 local_36 [0xe];
  undefined4 *puStack_28;
  int iStack_26;
  int iStack_24;
  int iStack_22;
  int iStack_20;
  int iStack_1e;
  int iStack_1c;
  int iStack_1a;
  undefined4 local_18;
  int iStack_14;
  void *pvStack_12;
  undefined2 uStack_10;
  undefined4 uStack_e;
  undefined4 *puStack_a;
  undefined1 local_6 [0x2];
  int local_4;
  
  Simulator_Get_Context_World_Dimensions_6daa
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_6),
             (int *)CONCAT22(unaff_SS,&local_4));
  y = (u16)((ulong)this_ptr >> 0x10);
  x = (void *)this_ptr;
  puStack_a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)((int)x + 0x10c));
  puVar1 = (undefined2 *)((int)*puStack_a + 0x24);
  (*(code *)*puVar1)();
  uStack_e = UI_Build_Item_Get_Construction_Manager_Logic_b58e(puStack_a);
  pvVar2 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(puStack_a);
  uStack_10 = (undefined2)((ulong)pvVar2 >> 0x10);
  pvStack_12 = (void *)pvVar2;
  local_18 = *(undefined4 *)((int)(void *)uStack_e + 0xc);
  iStack_14 = *(int *)((int)(void *)uStack_e + 0x10);
  puStack_28 = &local_18;
  iStack_1a = (int)local_18;
  iStack_1c = (int)((ulong)local_18 >> 0x10);
  iStack_20 = (int)local_18 + -0x1;
  if (iStack_20 < 0x0)
  {
    iStack_20 = 0x0;
  }
  local_4 += -0x1;
  iStack_22 = (int)local_18 + 0x1;
  if (local_4 < (int)local_18 + 0x1)
  {
    iStack_22 = local_4;
  }
  iStack_24 = iStack_1c + -0x1;
  if (iStack_24 < 0x0)
  {
    iStack_24 = 0x0;
  }
  iStack_26 = iStack_1c + 0x1;
  if (local_4 < iStack_1c + 0x1)
  {
    iStack_26 = local_4;
  }
  iStack_1e = iStack_14;
  pack_3words_alt(local_36,unaff_SS,iStack_14,iStack_24);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_24);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_24);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_1c);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_1c);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_26);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_26);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  pack_3words_alt(local_36,unaff_SS,iStack_1e,iStack_26);
  Simulator_Notify_Entity_at_Coords_Wrapper_6d24
            ((u16)x,y,(undefined1 *)CONCAT22(unaff_SS,local_36),
             (long)CONCAT22(uStack_10,pvStack_12));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the entity at the specified coordinates and, if its type is within valid
// ranges (1-9, 0x6A-0x73), triggers its virtual activation callback. Exact same logic
// as 1020:dc1c.

void __stdcall16far
Simulator_Notify_Entity_at_Coords_Wrapper_6d24(u16 x,u16 y,void *coords,long arg4)
{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *this_ptr;
  char cStack_1b;
  undefined1 local_a [0x4];
  u8 *puStack_6;
  
  puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,arg4,
                      (undefined1 *)CONCAT22(unaff_SS,local_a));
  puStack_6 = (u8 *)*puVar3;
  cStack_1b = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1b != '\0')
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puStack_6);
    puVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    iVar1 = *(int *)((undefined4 *)puVar3 + 0x3);
    if (((iVar1 < 0x1) || (SBORROW2(iVar1,0x1))) ||
       ((iVar1 != 0x9 && 0x7 < iVar1 + -0x1 &&
        ((iVar1 + -0x9 < 0x6a || (0x6 < iVar1 + -0x73))))))
    {
      puVar2 = (undefined2 *)((int)*puVar3 + 0x24);
      (*(code *)*puVar2)();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the world dimensions (width/height) from the current simulator context and
// returns them as a coordinate pair.

void __stdcall16far
Simulator_Get_Context_World_Dimensions_6daa(void *ctx,void *out_dim1,void *out_dim2)
{
  int *unaff_SS;
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 local_18;
  undefined2 uStack_14;
  int iStack_12;
  uint16_t uStack_10;
  u8 *puStack_e;
  void *pvStack_a;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)ctx + 0x10c));
  uStack_4 = (undefined2)((ulong)pvVar1 >> 0x10);
  uStack_6 = SUB42(pvVar1,0x0);
  pvStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(pvVar1);
  puStack_e = (u8 *)*(undefined4 *)((int)pvStack_a + 0x8);
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_e);
  uStack_10 = (uint16_t)((ulong)pvVar1 >> 0x10);
  iStack_12 = (int)pvVar1;
  puVar2 = Simulator_Get_Entity_Coords_Ptr_5b5c(iStack_12,uStack_10);
  local_18 = *puVar2;
  uStack_14 = *(undefined2 *)((undefined4 *)puVar2 + 0x1);
  unpack_word_pair(&local_18,unaff_SS,(int *)out_dim1);
  return;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_6e24(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCConstruct(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x32c7);
  *(undefined2 *)param_1 = 0x6fb0;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCConstruct_1050_4fdc);
  return param_1;
}



u16 __stdcall16far Simulator_World_Process_Entities_VCall_38(void)
{
  int iVar1;
  undefined2 *puVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  u16 local_20;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x700);
  while( true )
  {
    puVar3 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_14));
    if (puVar3 == NULL) break;
    iVar1 = *(int *)((int)(undefined4 *)puVar3 + 0x12);
    if (((0x0 < iVar1) && (!SBORROW2(iVar1,0x1))) && (iVar1 + -0x1 < 0x4))
    {
      puVar2 = (undefined2 *)((int)*puVar3 + 0x38);
      (*(code *)*puVar2)();
    }
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_6ef6(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x6fb0;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_6f84(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCEndSim(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e7);
  *(undefined2 *)param_1 = 0x749e;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCEndSim_1050_4fea);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far Simulator_Turn_Execution_State_Logic_6ff6(u32 param_1)
{
  int iVar1;
  u16 uVar2;
  int iVar3;
  undefined2 unaff_SS;
  long lVar4;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iVar10;
  u16 local_48;
  u16 local_46;
  u16 local_44;
  u32 local_34;
  u16 local_30;
  u16 local_2e;
  u32 local_26;
  u32 local_22;
  u16 local_1e;
  u16 local_1c;
  u16 local_1a;
  u32 local_18;
  u16 local_14;
  u16 local_12;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x400);
  local_1a = 0x1;
  local_1c = 0x0;
  do
  {
    do
    {
      local_18 = (u32)Simulator_World_Iterator_Get_Next_Entity_e4ec
                                ((u16 *)CONCAT22(unaff_SS,&local_14));
      iVar3 = (int)(local_18 >> 0x10);
      iVar1 = (int)local_18;
      if (iVar3 == 0x0 && iVar1 == 0x0) goto LAB_1028_7066;
    } while ((*(int *)(iVar1 + 0x1fe) == 0x0) || (*(long *)(iVar1 + 0x200) == 0x8000002)
            );
    local_1c = 0x1;
    local_26 = *(u32 *)(iVar1 + 0x1f6);
    lVar4 = Colony_Calculate_Sum_All_Resources_38b8
                      ((int)local_26,(u16)(local_26 >> 0x10));
  } while ((lVar4 < 0x0) ||
          (((int)((ulong)lVar4 >> 0x10) == 0x0 && ((int)lVar4 == 0x0))));
  local_1a = 0x0;
LAB_1028_7066:
  local_a = local_6;
  local_c = local_8;
  if (local_4 != 0x0)
  {
    local_a = 0x0;
    local_c = 0x1;
  }
  local_1e = 0x0;
  while( true )
  {
    local_18 = (u32)Simulator_World_Iterator_Get_Next_Entity_e4ec
                              ((u16 *)CONCAT22(unaff_SS,&local_14));
    iVar1 = (int)(local_18 >> 0x10);
    if (iVar1 == 0x0 && (int)local_18 == 0x0) break;
    if (*(long *)((int)local_18 + 0x200) == 0x8000001)
    {
      local_1e = 0x1;
    }
  }
  if ((local_1e == 0x0) &&
     (local_18 = (u32)Simulator_Get_Entity_Object_from_PackedID_e1ec
                                (_p_SimulatorWorldContext,(u8 *)0x1),
     (int)(local_18 >> 0x10) != 0x0 || (int)local_18 != 0x0))
  {
    PTR_DAT_1050_0000_1050_4fe8 = (undefined *)0x1;
    iVar1 = 0x0;
    local_34 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),iVar1);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
    UI_System_Set_State_Flag_and_Notify((void *)local_34,(int)(local_34 >> 0x10),0x0);
  }
  if ((local_1c != 0x0) && (local_1a != 0x0))
  {
    uVar9 = 0x0;
    iVar10 = 0x6;
    iVar3 = 0x1;
    uVar8 = 0x0;
    uVar7 = 0x0;
    iVar1 = 0x0;
    uVar6 = 0x0;
    local_34 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)local_34,CONCAT22(uVar7,uVar6),iVar1,iVar3,CONCAT22(uVar9,uVar8),
               iVar10);
  }
  local_22 = (u32)Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)0x1);
  if ((((((void *)local_22 != NULL) &&
        (iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x4),
        iVar1 == 0x0)) &&
       (iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x2a),
       iVar1 == 0x0)) &&
      ((iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x4b),
       iVar1 == 0x0 &&
       (iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x54),
       iVar1 == 0x0)))) &&
     ((iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x2c),
      iVar1 == 0x0 &&
      ((iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x3c),
       iVar1 == 0x0 &&
       (iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242((void *)local_22,0x3d),
       iVar1 == 0x0))))))
  {
    if (local_4 != 0x0)
    {
      local_8 = 0x1;
      local_6 = 0x0;
    }
    local_34 &= 0xffff0000;
    local_30 = 0x0;
    local_c = local_8;
    local_a = local_6;
    do
    {
      do
      {
        local_18 = (u32)Simulator_World_Iterator_Get_Next_Entity_e4ec
                                  ((u16 *)CONCAT22(unaff_SS,&local_14));
        if ((void *)local_18 == NULL) goto LAB_1028_72d3;
      } while (*(long *)((int)local_18 + 0x200) == 0x8000002);
      if (((int)local_34 == 0x0) &&
         (uVar2 = Simulator_Check_Entity_State_Value_vcall_8_740c(param_1,0x22,local_18)
         , uVar2 != 0x0))
      {
        local_34 = CONCAT22(local_34._2_2_,0x1);
      }
      if ((local_30 == 0x0) &&
         (uVar2 = Simulator_Check_Entity_State_Value_vcall_8_740c
                            (param_1,0x24,(int)local_18,(int)(local_18 >> 0x10)),
         uVar2 != 0x0))
      {
        local_30 = 0x1;
      }
    } while (((int)local_34 == 0x0) || (local_30 == 0x0));
    uVar9 = 0x0;
    iVar10 = 0x14;
    iVar3 = 0x1;
    uVar8 = 0x0;
    uVar7 = 0x0;
    iVar1 = 0x0;
    uVar6 = 0x0;
    local_26 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)local_26,CONCAT22(uVar7,uVar6),iVar1,iVar3,CONCAT22(uVar9,uVar8),
               iVar10);
  }
LAB_1028_72d3:
  local_18 = (u32)Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)0x1);
  if ((int)(local_18 >> 0x10) != 0x0 || (int)local_18 != 0x0)
  {
    pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
    local_2e = (u16)((ulong)pvVar5 >> 0x10);
    local_30 = (u16)pvVar5;
    UI_Relationship_Manager_Process_Active_Links_Logic((void *)local_30);
    lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3c);
    local_2e = (u16)((ulong)lVar4 >> 0x10);
    local_30 = (u16)lVar4;
    UI_Trade_Manager_Clear_Transaction_Logic_Wrapper(lVar4);
    Simulator_World_Iterator_ctor_init_dc52
              ((u16 *)CONCAT22(unaff_SS,&local_46),0x1,0x0,0x400);
    while( true )
    {
      local_34 = (u32)Simulator_World_Iterator_Get_Next_Entity_e4ec
                                ((u16 *)CONCAT22(unaff_SS,&local_46));
      if ((void *)local_34 == NULL) break;
      if (*(long *)((int)local_34 + 0x200) != 0x8000002)
      {
        Colony_Rebuild_SubItem_Manager_List_3ba0((void *)local_34);
      }
    }
  }
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_737e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x749e;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves an entity from the simulator by type ID and index, and calls a virtual
// function at offset +8 to check its internal state value. Returns 1 if non-zero.

u16 __stdcall16far Simulator_Check_Entity_State_Value_vcall_8_740c(void)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined2 in_DX;
  u32 *puVar4;
  undefined4 in_stack_0000000a;
  long lStack_e;
  undefined4 uStack_a;
  
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  puVar4 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((int)in_stack_0000000a,(int)((ulong)in_stack_0000000a >> 0x10),
                      puVar3,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar4,puVar3);
  puVar2 = (undefined2 *)*uStack_a;
  puVar1 = (undefined2 *)puVar2 + 0x8;
  lStack_e = (*(code *)*puVar1)(0x1038,puVar3,puVar4);
  if (uStack_a != NULL)
  {
    puVar1 = (undefined2 *)puVar2;
    (*(code *)*puVar1)(0x1038,puVar3,puVar4,0x1);
  }
  if (lStack_e != 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_7472(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



void * __stdcall16far Simulator_Object_Constructor_Type_SCEvent(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x1387);
  *(undefined2 *)param_1 = 0x819a;
  *(undefined2 *)((int)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)param_1 + 0x8)),
                   s_SCEvent_1050_4ff4);
  return param_1;
}



u16 __stdcall16far Simulator_Global_Process_All_Events_Tick_74e4(u32 param_1)
{
  Simulator_Spawn_Random_Type87E0_Events_7fb6(param_1);
  Simulator_Spawn_Random_Type90D6_Events_7c4e(param_1);
  Simulator_Spawn_Random_TypeB1F4_Events_7dfc(param_1);
  Simulator_Check_Critical_Turn_Event_76da();
  Simulator_Process_Periodic_Special_Events_767e();
  Simulator_Global_Entity_Maintenance_Tick_75bc();
  Simulator_Main_Event_Dispatcher_Tick_78b8(param_1);
  return 0x1;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_752e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0x819a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs a global maintenance tick for all simulator entities. Triggers random entity
// events (5% chance) and updates internal entity states periodically (every 123 ticks).

void __stdcall16far Simulator_Global_Entity_Maintenance_Tick_75bc(void)
{
  int iVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  undefined1 local_18 [0x8];
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  ulong uStack_6;
  
  uStack_6 = *_p_SimulatorWorldContext;
  if (((int)((qword)uStack_6 % 0x7b) == 0x0) && (0x95 < uStack_6))
  {
    Simulator_World_Iterator_ctor_init_dc52
              ((undefined1 *)CONCAT22(unaff_SS,local_18),0x1,0x0,0x400);
    while (pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                              ((undefined1 *)CONCAT22(unaff_SS,local_18)),
          (int)((ulong)pvVar2 >> 0x10) != 0x0 || (void *)pvVar2 != NULL)
    {
      iVar1 = random_int_range(0x1,0x64);
      if (iVar1 < 0x6)
      {
        UI_Colony_Process_Turn_Resource_Reduction_Start_362e((u32)pvVar2);
      }
    }
    uStack_10 = uStack_c;
    uStack_e = uStack_a;
    if (iStack_8 != 0x0)
    {
      uStack_10 = 0x1;
      uStack_e = 0x0;
    }
    while (pvVar2 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                              ((undefined1 *)CONCAT22(unaff_SS,local_18)),
          (int)((ulong)pvVar2 >> 0x10) != 0x0 || (void *)pvVar2 != NULL)
    {
      UI_Colony_Process_Turn_Resource_Reduction_Tick_3698((u32)pvVar2);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Every 100 simulator ticks, checks for specific planetary conditions and adds a new
// numbered slot entry (using Resource 0x40) to the UI.

void __stdcall16far Simulator_Process_Periodic_Special_Events_767e(void)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)0x1);
  if ((*(int *)((int)(void *)pvVar1 + 0x152) != 0x0) &&
     ((int)((qword)*_p_SimulatorWorldContext % 0x64) == 0x0))
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x40);
    UI_Add_New_Numbered_Slot_Entry_Logic((void *)pvVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the current simulator tick matches a critical turn event ID (from Resource
// 0x2C). If so, posts message 0x106 to the main UI and clears the event.

void __stdcall16far Simulator_Check_Critical_Turn_Event_76da(void)
{
  long lVar1;
  undefined2 uVar2;
  long lVar3;
  undefined4 in_stack_0000ffe4;
  undefined2 uVar4;
  undefined2 uStack_a;
  undefined2 uStack_8;
  
  uVar4 = (undefined2)((ulong)in_stack_0000ffe4 >> 0x10);
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2c);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  lVar1 = *(long *)((int)lVar3 + 0xc);
  uStack_8 = (int)((ulong)lVar1 >> 0x10);
  uStack_a = (int)lVar1;
  if ((uStack_8 != 0x0 || uStack_a != 0x0) && (*_p_SimulatorWorldContext == lVar1))
  {
    PostMessage16(0x0,0x0,0x106,(long)CONCAT22(uVar4,g_ParentHWND));
    *(undefined4 *)((int)lVar3 + 0xc) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if any neighbor of a specific type (from array 0x18) is within a target
// distance (param_3) of the build item. Returns 1 if proximity condition is met.

u16 __stdcall16far
Simulator_Check_Neighbor_Proximity_Status_7742
          (u16 arg1,u16 arg2,int distance,void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined2 in_DX;
  u32 *puVar5;
  undefined2 uVar6;
  u16 unaff_SS;
  void *pvVar7;
  void *in_stack_0000000a;
  undefined2 uVar8;
  ulong uStack_1a;
  undefined1 local_16 [0x2];
  ulong uStack_14;
  u16 uStack_10;
  undefined4 uStack_e;
  undefined4 *puStack_a;
  void *pvStack_6;
  
  pvVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  pvStack_6 = pvVar2;
  puStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b4f2
                        ((void *)CONCAT22(this_ptr._0_2_,in_stack_0000000a));
  puVar3 = (undefined4 *)puStack_a;
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(puStack_a,pvVar2,in_DX)
  ;
  uStack_e = (undefined4 *)CONCAT22(puVar5,puVar3);
  uStack_10 = 0x0;
  puVar1 = (undefined2 *)((int)*uStack_e + 0x10);
  uStack_14 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_16));
  uStack_1a = 0x0;
  do
  {
    if (uStack_14 <= uStack_1a)
    {
LAB_1028_77e7:
      if (uStack_e != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)
                  (0x1030,(undefined4 *)uStack_e,(int)((ulong)uStack_e >> 0x10),0x1,
                   puVar3,puVar5,uStack_e,uStack_e);
      }
      return uStack_10;
    }
    pvVar7 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_e);
    uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
    uVar8 = SUB42(pvVar7,0x0);
    pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                       ((void *)CONCAT22(this_ptr._0_2_,in_stack_0000000a));
    iVar4 = Simulator_Calc_Manhattan_Distance_between_Objects_bd74
                      ((u16)local_16,unaff_SS,(u32)pvVar7,CONCAT22(uVar6,uVar8));
    if (iVar4 <= distance)
    {
      uStack_10 = 0x1;
      goto LAB_1028_77e7;
    }
    uStack_1a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through a batch of entities (from array 0x25) and triggers their virtual
// activation callbacks (offset 0x24).

u16 __stdcall16far
Simulator_Process_Batch_Entity_Callbacks_780c(u16 x,u16 y,void *entity_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  u8 *packed_id;
  undefined2 in_DX;
  u32 *puVar3;
  undefined2 uVar4;
  ulong uVar5;
  void *this_ptr;
  undefined4 *puVar6;
  ulong uStack_12;
  undefined4 uStack_a;
  
  puVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar4 = 0x1038;
  puVar3 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     (entity_ptr,puVar2,in_DX);
  uStack_a = (undefined4 *)CONCAT22(puVar3,puVar2);
  puVar1 = (undefined2 *)((int)*uStack_a + 0x10);
  uVar5 = (*(code *)*puVar1)(0x1038,puVar2,puVar3);
  if (uVar5 == 0x0)
  {
    return 0x0;
  }
  for (uStack_12 = 0x0; uStack_12 < uVar5; uStack_12 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uStack_a + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)();
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,packed_id);
    uVar4 = 0x1030;
    puVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    puVar1 = (undefined2 *)((int)*puVar6 + 0x24);
    (*(code *)*puVar1)();
  }
  if (uStack_a != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*uStack_a)(uVar4,puVar2,puVar3,0x1);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Highly complex main event dispatcher for simulator ticks. Handles rebellion events
// (tick 5), resource depletion, population shifts, random entity spawning (Type
// 0x932C), and critical turn logic (tick 300, 0x3D, 0x96, 0x98).

void __stdcall16far Simulator_Main_Event_Dispatcher_Tick_78b8(u32 arg1)
{
  int low;
  char *pcVar1;
  uint16_t segment;
  u16 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  u16 unaff_SS;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  u16 y;
  undefined2 uVar11;
  undefined2 uVar12;
  int index;
  undefined2 local_154;
  undefined2 uStack_152;
  void *pvStack_4a;
  void *pvStack_46;
  undefined2 uStack_44;
  undefined4 local_42;
  char *local_30;
  undefined2 uStack_2e;
  char *local_1e [0x3];
  void *local_18;
  void *pvStack_14;
  undefined2 uStack_12;
  void *pvStack_10;
  undefined *puStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  ulong uStack_6;
  
  uStack_6 = *_p_SimulatorWorldContext;
  if (uStack_6 == 0x98)
  {
    pvStack_10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(undefined **)&p_CurrentHeapContext);
    if (*(long *)((int)(void *)pvStack_10 + 0x200) == 0x8000002)
    {
      UI_Entity_Summary_Display_ctor_a43e((void **)CONCAT22(unaff_SS,&local_18));
      zero_init_struct_6bytes(local_1e);
      UI_Entity_Handle_Interaction_Dispatch_a49a
                ((void **)CONCAT22(unaff_SS,&local_18),
                 (char **)CONCAT22(unaff_SS,local_1e),0x7a);
      uVar2 = Colony_Check_Any_Entity_in_Group_Logic_4f54((u32)pvStack_10,0x1);
      if (uVar2 == 0x0)
      {
        UI_Entity_Handle_Interaction_Dispatch_a49a
                  ((void **)CONCAT22(unaff_SS,&local_18),NULL,0x35);
      }
    }
  }
  if ((0xe < uStack_6) && (uStack_6 < 0x16))
  {
    UI_Entity_Summary_Display_ctor_a43e((char **)CONCAT22(unaff_SS,local_1e));
    local_18 = (void *)(uStack_6 - 0xf);
    UI_Entity_Handle_Range_Interaction_Logic_a54c
              ((u16)local_1e,unaff_SS,(int)(void *)local_18);
  }
  if (uStack_6 % 0x7d == 0x0)
  {
    local_1e[0x0] = (char *)random_int_range(0x1,0x64);
    if ((int)local_1e[0x0] < 0x1a)
    {
      Simulator_World_Iterator_ctor_init_dc52
                ((char **)CONCAT22(unaff_SS,&local_30),0x1,0x0,0x400);
      do
      {
        local_18 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((char **)CONCAT22(unaff_SS,&local_30));
        segment = (uint16_t)((ulong)local_18 >> 0x10);
        pvVar3 = (void *)local_18;
        if (segment == 0x0 && pvVar3 == NULL) goto LAB_1028_79d6;
      } while (*(long *)((int)pvVar3 + 0x200) == 0x8000002);
      Colony_Decrement_Population_Category_at_14E_Logic
                ((uint16_t)pvVar3,segment,0x1,0x4);
LAB_1028_79d6:
      local_30 = (char *)s_1_1050_389a;
      uStack_2e = 0x1008;
    }
  }
  if (uStack_6 == 0x5)
  {
    uVar12 = 0x1050;
    uVar11 = 0x4ffc;
    pcVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(undefined **)&p_CurrentHeapContext);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    UI_Component_Set_String_at_1FA(local_30,uStack_2e,uVar11,uVar12);
  }
  if (uStack_6 == 0x12c)
  {
    uVar12 = 0x400;
    iVar5 = 0xf;
    uVar11 = 0x1;
    pcVar8 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    Turn_Manager_Push_Resource_Event_Logic(local_30,CONCAT22(uVar12,uVar11),iVar5);
  }
  if (uStack_6 == 0x3d)
  {
    pcVar8 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uStack_2e = (undefined2)((ulong)pcVar8 >> 0x10);
    local_30 = (char *)pcVar8;
    local_1e[0x0] = g_ModeVersion_13AE;
    if (g_ModeVersion_13AE != (undefined *)0x1)
    {
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined4 *)CONCAT22(unaff_SS,&local_42),0x1,0x0,0x400);
      while( true )
      {
        local_18 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((undefined4 *)CONCAT22(unaff_SS,&local_42));
        iVar5 = (int)((ulong)local_18 >> 0x10);
        if (iVar5 == 0x0 && (void *)local_18 == NULL) break;
        pvStack_10 = (void *)*(undefined4 *)((int)(void *)local_18 + 0x1f6);
        Colony_Initialize_Default_Metrics_Logic_34da(pvStack_10);
      }
      uVar12 = 0x400;
      iVar5 = 0x10;
      uVar11 = 0x1;
      pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      uStack_12 = (undefined2)((ulong)pvVar9 >> 0x10);
      pvStack_14 = (void *)pvVar9;
      Turn_Manager_Push_Resource_Event_Logic(pvStack_14,CONCAT22(uVar12,uVar11),iVar5);
      local_42 = 0x1008389a;
    }
  }
  if (uStack_6 == 0x96)
  {
    pvStack_4a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
    y = (u16)(arg1 >> 0x10);
    uVar2 = Simulator_Process_Batch_Entity_Callbacks_780c((u16)arg1,y,pvStack_4a);
    if (uVar2 != 0x0)
    {
      uVar12 = 0x400;
      iVar5 = 0x1d;
      uVar11 = 0x1;
      pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                 (_p_ResourceManager,0x2b);
      uStack_44 = (undefined2)((ulong)pvVar9 >> 0x10);
      pvStack_46 = (void *)pvVar9;
      Turn_Manager_Push_Resource_Event_Logic(pvStack_46,CONCAT22(uVar12,uVar11),iVar5);
    }
    pvStack_4a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(undefined **)&p_CurrentHeapContext);
    Simulator_Process_Batch_Entity_Callbacks_780c((u16)arg1,y,pvStack_4a);
  }
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  uStack_8 = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_a = (undefined2)lVar10;
  puStack_c = g_ModeVersion_13AE;
  if (0x2 < (int)g_ModeVersion_13AE)
  {
    pvStack_4a = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x2f);
    for (pvStack_46 = (void *)0x1; (int)pvStack_46 < 0x9;
        pvStack_46 = (void *)((int)pvStack_46 + 0x1))
    {
      local_42 = *(ulong *)((int)pvStack_4a + 0x34 + (int)pvStack_46 * 0x4);
      if (local_42 == uStack_6)
      {
        local_30 = (char *)0x1;
        local_1e[0x0] = (char *)random_int_range(0x1,0x64);
        if (pvStack_46 == (void *)0x7)
        {
          bVar7 = SBORROW2((int)local_1e[0x0],0x32);
          pcVar1 = local_1e[0x0] + -0x32;
          bVar6 = local_1e[0x0] == (char *)s_NewFailedMsg + 0x12;
LAB_1028_7b74:
          if (!bVar6 && bVar7 == (int)pcVar1 < 0x0)
          {
            local_30 = NULL;
          }
        }
        else if (pvStack_46 == (void *)0x8)
        {
          bVar7 = SBORROW2((int)local_1e[0x0],0x19);
          pcVar1 = local_1e[0x0] + -0x19;
          bVar6 = pcVar1 == NULL;
          goto LAB_1028_7b74;
        }
        if (local_30 != NULL)
        {
          UI_Build_Item_Type_932C_ctor_init_90e6
                    ((undefined2 *)CONCAT22(unaff_SS,&local_154),(u16)pvStack_46);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_154)
                    );
          local_154 = 0x389a;
          uStack_152 = 0x1008;
        }
        pvVar3 = (void *)random_int_range(0x0,0xa);
        local_18 = (void *)CONCAT22(local_18._2_2_,pvVar3);
        if (pvStack_46 == (void *)0x7)
        {
          index = 0x7;
          uVar4 = (int)pvVar3 + 0x6e;
          iVar5 = (int)uVar4 >> 0xf;
        }
        else
        {
          if (pvStack_46 != (void *)0x8) goto LAB_1028_7ba0;
          index = 0x8;
          uVar4 = (int)pvVar3 + 0x64;
          iVar5 = ((int)pvVar3 >> 0xf) + (uint)((void *)0xff9b < pvVar3);
        }
        low = (uint)local_42 + uVar4;
        iVar5 = local_42._2_2_ + iVar5 + (uint)CARRY2((uint)local_42,uVar4);
        local_42 = CONCAT22(iVar5,low);
        Simulator_Object_Set_Indexed_Value_Logic_0558((long)pvStack_4a,low,iVar5,index);
      }
LAB_1028_7ba0:
    }
  }
  return;
}
