/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 22/56
 * Original lines (combined): 65257-65986
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex batch processor for sub-objects (buildings/components). Iterates
// through resource list 8, updates positions, and notifies the simulator for each valid
// sub-component.

void __stdcall16far
UI_Entity_Batch_Process_SubObjects_Logic_a89e(u32 arg1,u32 *arg2,u16 arg3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_SS;
  u16 y;
  undefined2 local_5ee;
  undefined2 uStack_5ec;
  u32 *puStack_4c2;
  int iStack_4be;
  long lStack_4bc;
  undefined1 local_4b8 [0x8];
  long lStack_4b0;
  void *pvStack_4ac;
  undefined1 local_4a8 [0x124];
  undefined1 local_384 [0x124];
  undefined1 local_260 [0x124];
  undefined1 local_13c [0x124];
  int local_18 [0x2];
  u32 local_14;
  undefined2 uStack_10;
  void *pvStack_e;
  u8 *puStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_a = (u8 *)*(undefined4 *)((int)lStack_6 + 0x20);
  pvStack_e = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)puStack_a);
  local_14 = *arg2;
  uStack_10 = (undefined2)arg2[0x1];
  puStack_4c2 = &local_14;
  unpack_word_pair(&local_14,unaff_SS,local_18);
  pack_3words_reverse(&local_14,(int)unaff_SS,0x0,local_18[0x0]);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_13c),0x0,0x7a,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_13c));
  pack_3words_reverse(&local_14,(int)unaff_SS,0x0,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_260),0x0,0x47,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_260));
  pack_3words_reverse(&local_14,(int)unaff_SS,0x1,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_384),0x0,0x6a,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_384));
  y = (u16)(arg1 >> 0x10);
  Simulator_Scan_and_Notify_Neighbor_Entities_Logic
            ((u16)arg1,y,(u32 *)CONCAT22(unaff_SS,&local_14),(long)puStack_a);
  pack_3words_reverse(&local_14,(int)unaff_SS,0x1,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_4a8),0x0,0x7f,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_4a8));
  Simulator_Scan_and_Notify_Neighbor_Entities_Logic
            ((u16)arg1,y,(u32 *)CONCAT22(unaff_SS,&local_14),(long)puStack_a);
  pvStack_4ac = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x8);
  lStack_4b0 = *(long *)((int)pvStack_4ac + 0x12);
  init_long_pair(local_4b8,lStack_4b0);
  iStack_4be = 0x0;
  do
  {
    do
    {
      lStack_4bc = get_next_list_item(local_4b8);
      iVar3 = (int)((ulong)lStack_4bc >> 0x10);
      iVar2 = (int)lStack_4bc;
      if (iVar3 == 0x0 && iVar2 == 0x0)
      {
        UI_Object_Destroy_SubObject_at_Offset_12_Logic((void *)pvStack_4ac);
        return;
      }
    } while ((*(int *)(iVar2 + 0x4) != 0x3e) && (*(int *)(iVar2 + 0x4) != 0x41));
    while (0x0 < *(int *)((int)lStack_4bc + 0x6))
    {
      if ((iStack_4be == 0x0) || (iStack_4be == 0x1))
      {
        iVar2 = local_18[0x0] + -0x2;
LAB_1020_ab51:
        iStack_4be = iStack_4be + 0x1;
        pack_3words_reverse(&local_14,(int)unaff_SS,0x0,iVar2);
      }
      else
      {
        if ((iStack_4be == 0x2) || (iStack_4be == 0x3))
        {
          iVar2 = local_18[0x0] + 0x2;
          goto LAB_1020_ab51;
        }
        iStack_4be = iStack_4be + 0x1;
        Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
                  (arg1,0x0,&local_14,unaff_SS,(int)pvStack_e,
                   (int)((ulong)pvStack_e >> 0x10));
      }
      Simulator_Command_InternalPutBldg2_ctor_init_8888
                ((undefined2 *)CONCAT22(unaff_SS,&local_5ee),0x0,
                 *(u16 *)((int)lStack_4bc + 0x4),(u16)&local_14,(u16)unaff_SS,0x2,0x800,
                 (void *)0x4000002,puStack_a);
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_5ee));
      piVar1 = (int *)((int)lStack_4bc + 0x6);
      *piVar1 = *piVar1 + -0x1;
      local_5ee = 0x389a;
      uStack_5ec = 0x1008;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Submits a single entity interaction event to the game simulator after performing
// coordinate translation and vtable-based validation.

void __stdcall16far
UI_Entity_Submit_Interaction_to_Simulator_abc0
          (undefined4 param_1,int param_2,undefined4 param_3)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  u16 y;
  char local_12e [0x124];
  int iStack_a;
  undefined1 local_8 [0x4];
  undefined2 uStack_4;
  
  zero_init_struct_6bytes(local_8);
  iStack_a = search_array_for_value
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10),param_2);
  if (iStack_a != 0x0)
  {
    uStack_4 = 0x1;
  }
  y = (u16)((ulong)param_1 >> 0x10);
  Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
            ((u16)param_1,y,iStack_a != 0x0,(undefined1 *)CONCAT22(unaff_SS,local_8),
             param_3);
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_12e,unaff_SS,0x0,param_2,local_8,unaff_SS,
             *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4),
             *(undefined4 *)((int)param_3 + 0x4));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(char *)CONCAT22(unaff_SS,local_12e));
  if (iStack_a != 0x0)
  {
    Simulator_Scan_and_Notify_Neighbor_Entities_Logic
              ((u16)param_1,y,(undefined1 *)CONCAT22(unaff_SS,local_8),
               *(long *)((int)param_3 + 0x4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Moves an entity by a specific coordinate offset (add/sub) and notifies the simulator
// of the new position.

void __stdcall16far
UI_Entity_Move_and_Notify_Simulator_ac6e(void *arg1,int arg2,int arg3,int arg4)
{
  undefined4 uVar1;
  u16 uVar2;
  int *unaff_SS;
  void *pvVar3;
  undefined **src;
  undefined1 local_146 [0x12c];
  void *pvStack_1a;
  undefined2 uStack_18;
  u8 *puStack_16;
  long lStack_12;
  undefined1 local_e [0x6];
  int local_8;
  int local_6;
  int local_4;
  
  if (arg2 == 0x0)
  {
    src = (undefined **)&p_GlobalPaletteObject;
  }
  else
  {
    src = (undefined **)((char *)s_dib_1050_4234 + 0x2);
  }
  unpack_3word_struct(src,(int *)0x1048,&local_8,unaff_SS);
  if (arg4 == 0x0)
  {
    _local_6 = CONCAT22(local_4 + arg3,local_6);
  }
  else if (arg4 == 0x1)
  {
    _local_6 = CONCAT22(local_4,local_6 + arg3);
  }
  else if (arg4 == 0x2)
  {
    _local_6 = CONCAT22(local_4 - arg3,local_6);
  }
  pack_3words_alt(local_e,(int)unaff_SS,local_8,(int)_local_6);
  lStack_12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_16 = (u8 *)*(undefined4 *)((int)lStack_12 + 0x20);
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_16);
  uStack_18 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvStack_1a = (void *)pvVar3;
  uVar2 = Simulator_Is_Coordinate_Within_Safe_Margins_Logic
                    ((u16)arg1,(u16)((ulong)arg1 >> 0x10),
                     (undefined1 *)CONCAT22(unaff_SS,local_e),
                     (u8 *)(u8 *)*(undefined4 *)((int)pvStack_1a + 0x4));
  if (uVar2 != 0x0)
  {
    uVar2 = Simulator_Validate_Interaction_at_Coords_Logic
                      (arg1,(undefined1 *)CONCAT22(unaff_SS,local_e),
                       (void *)CONCAT22(uStack_18,pvStack_1a));
    if (uVar2 != 0x0)
    {
      uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
      Simulator_Command_InternalPutBldg_ctor_init_87f0
                (local_146,unaff_SS,0x0,(-(uint)(arg2 == 0x0) & 0xfffb) + 0x7f,local_e,
                 unaff_SS,(int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)puStack_16,
                 (int)((ulong)puStack_16 >> 0x10));
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_146));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Scans neighbor entities within a 1-unit radius of a target coordinate and submits
// notification events (Type 6, 7, or 8) to the simulator based on neighbor types (7, 8,
// or 9). Used for updating entity states after interactions.

void __stdcall16far
Simulator_Scan_and_Notify_Neighbor_Entities_Logic
          (u16 x,u16 y,void *coords,long entity_id)
{
  undefined2 *puVar1;
  int iVar2;
  int *unaff_SS;
  bool bVar3;
  u8 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *src;
  int *out1;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_17e;
  undefined2 uStack_17c;
  int iStack_5a;
  undefined4 *puStack_4e;
  int iStack_46;
  int iStack_44;
  undefined4 uStack_42;
  undefined4 *puStack_3e;
  undefined1 local_3a [0xc];
  undefined4 local_2e;
  undefined2 uStack_2a;
  void *pvStack_28;
  uint16_t uStack_26;
  int local_24;
  int local_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  u8 *puStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  int local_8;
  int local_6;
  int local_4;
  
  src = (void *)coords;
  out1 = (int *)((ulong)coords >> 0x10);
  unpack_3word_struct(src,out1,&local_8,unaff_SS);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)entity_id);
  uStack_12 = (undefined2)((ulong)puVar4 >> 0x10);
  puStack_14 = (u8 *)puVar4;
  pvStack_18 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack_14);
  uStack_1c = *(undefined4 *)((int)(void *)pvStack_18 + 0x2e);
  uStack_20 = *(undefined4 *)((int)uStack_1c + 0x4);
  pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uStack_26 = (uint16_t)((ulong)pvVar5 >> 0x10);
  pvStack_28 = (void *)pvVar5;
  puVar6 = Simulator_Get_Entity_Coords_Ptr_5b5c((int)pvStack_28,uStack_26);
  local_2e = *puVar6;
  uStack_2a = *(undefined2 *)((undefined4 *)puVar6 + 0x1);
  puStack_4e = &local_2e;
  unpack_word_pair(&local_2e,unaff_SS,&local_24);
  iStack_e = local_4 + 0x1;
  uStack_c = CONCAT22(local_4 + -0x1,local_6 - 0x1U);
  iStack_10 = local_6 + 0x1;
  if (local_4 + -0x1 < 0x0)
  {
    uStack_c = (ulong)(local_6 - 0x1U);
  }
  if (local_22 <= iStack_e)
  {
    iStack_e = local_22 + -0x1;
  }
  if ((int)uStack_c < 0x0)
  {
    uStack_c &= 0xffff0000;
  }
  if (local_24 <= iStack_10)
  {
    iStack_10 = local_24 + -0x1;
  }
  zero_init_12bytes_struct(local_3a);
  pack_two_3word_structs(local_3a,unaff_SS,local_8,iStack_10,iStack_e,local_8,uStack_c);
  puStack_3e = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_3a),
                          entity_id);
  if (puStack_3e != NULL)
  {
    uStack_42 = 0x0;
    iStack_44 = 0x0;
    for (iStack_46 = (int)uStack_c; iStack_46 <= iStack_10; iStack_46 += 0x1)
    {
      for (puStack_4e = (undefined4 *)uStack_c._2_2_; iVar2 = iStack_44,
          (int)puStack_4e <= iStack_e;
          puStack_4e = (undefined4 *)((int)puStack_4e + 0x1))
      {
        iStack_44 += 0x1;
        puVar1 = (undefined2 *)((int)*puStack_3e + 0x4);
        uVar7 = (*(code *)*puVar1)(0x1030,(undefined4 *)puStack_3e,
                                   (int)((ulong)puStack_3e >> 0x10),iVar2);
        iVar2 = (int)uVar7;
        uStack_42._3_1_ = (char)((ulong)uVar7 >> 0x18);
        bVar3 = uStack_42._3_1_ == '\0';
        uStack_42 = uVar7;
        if (bVar3)
        {
          iStack_5a = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1020_af1c;
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x8;
          }
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_17e,unaff_SS,0x0,0x0,uVar8,coords,uVar9,uVar10,entity_id);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_17e)
                    );
          local_17e = 0x389a;
          uStack_17c = 0x1008;
        }
LAB_1020_af1c:
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the mapped entity type ID for a specific coordinate and simulator context.
// Maps internal simulator sub-types (1-9) to standard UI entity IDs.

u16 __stdcall16far
Simulator_Get_Entity_Type_at_Coords_Logic(u16 x,u16 y,void *coords,long arg4)
{
  u16 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *this_ptr;
  void *pvVar4;
  char cStack_1b;
  undefined1 local_a [0x4];
  u8 *puStack_6;
  
  puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,arg4,
                      (undefined1 *)CONCAT22(unaff_SS,local_a));
  puStack_6 = (u8 *)*puVar3;
  cStack_1b = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1b == '\0')
  {
    return (u16)(u8 *)puStack_6;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_6);
  pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar2 = (int)((ulong)pvVar4 >> 0x10);
  if (iVar2 == 0x0 && (void *)pvVar4 == NULL)
  {
    return *(u16 *)((int)(void *)this_ptr + 0x14);
  }
  switch(*(undefined2 *)((int)(void *)pvVar4 + 0xc))
  {
  case 0x1:
    uVar1 = 0x1;
    break;
  case 0x2:
    uVar1 = 0x2;
    break;
  case 0x3:
    uVar1 = 0x3;
    break;
  case 0x4:
    uVar1 = 0x4;
    break;
  case 0x5:
    uVar1 = 0x5;
    break;
  case 0x6:
    uVar1 = 0x7;
    break;
  case 0x7:
    return 0x8;
  case 0x8:
    return 0x9;
  case 0x9:
    return 0x6;
  default:
    uVar1 = 0x0;
  }
  return uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves an entity type ID from the summary configuration table. Handles randomized
// types by selecting a random entry from a list if the table entry indicates multiple
// possibilities (-1). Includes a specific check for entity types 0x2A/0x2B.

int __stdcall16far
UI_Entity_Summary_Resolve_Randomized_Type_Logic(u16 arg1,u16 arg2,int type_index)
{
  undefined4 *this_ptr;
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  ulong uStack_14;
  ulong uStack_10;
  
  uVar4 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_4e74 >> 0x10);
  if (*(int *)((int)_PTR_DAT_1050_0000_1050_4e74 + type_index * 0x6 + 0x4) == 0x0)
  {
    return 0x0;
  }
  if (*(int *)((int)_PTR_DAT_1050_0000_1050_4e74 + type_index * 0x6 + 0x4) != -0x1)
  {
    if (PTR_DAT_1050_0000_1050_4e78 == NULL)
    {
      pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(undefined **)&p_CurrentHeapContext);
      this_ptr = (undefined4 *)*(undefined4 *)((int)(void *)pvVar5 + 0xc);
      puVar1 = (undefined2 *)((int)*this_ptr + 0x10);
      uStack_10 = (*(code *)*puVar1)();
      for (uStack_14 = 0x0; uStack_14 < uStack_10; uStack_14 += 0x1)
      {
        pvVar5 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(this_ptr);
        iVar3 = (int)((ulong)pvVar5 >> 0x10);
        if ((iVar3 != 0x0 || (void *)pvVar5 != NULL) &&
           ((iVar3 = *(int *)((int)(void *)pvVar5 + 0xc), iVar3 == 0x2a ||
            (iVar3 == 0x2b))))
        {
          PTR_DAT_1050_0000_1050_4e78 = (undefined *)0x1;
          break;
        }
      }
      if (PTR_DAT_1050_0000_1050_4e78 == NULL)
      {
        PTR_DAT_1050_0000_1050_4e78 = (undefined *)0x1;
        return 0x2a;
      }
    }
    iVar3 = random_int_range(0x0,*(int *)((int)_PTR_DAT_1050_0000_1050_4e74 +
                                          type_index * 0x6 + 0x4) + -0x1);
    uVar2 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e74 + type_index * 0x6);
    type_index = *(int *)((int)uVar2 + iVar3 * 0x2);
  }
  return type_index;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if a given 3D coordinate is within the valid world boundaries defined by the
// simulator context, with a hardcoded margin of 11 units from all edges.

u16 __stdcall16far
Simulator_Is_Coordinate_Within_Safe_Margins_Logic
          (u16 arg1,u16 arg2,void *coords,u8 *packed_id)
{
  int *unaff_SS;
  undefined4 *puVar1;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
  puVar1 = Simulator_Get_Entity_Coords_Ptr_5b5c
                     ((int)(void *)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair((void *)coords,(int *)((ulong)coords >> 0x10),&local_10);
  unpack_word_pair(&local_c,unaff_SS,&local_14);
  if ((((0xb < local_e) && (0xb < local_10)) && (local_e < local_12 + -0xb)) &&
     (local_10 < local_14 + -0xb))
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if an interaction is permissible at specific coordinates. Checks for
// coordinate safety margins and ensures no existing entity at that location has a type
// ID > 9.

u16 __stdcall16far
Simulator_Validate_Interaction_at_Coords_Logic(void *arg1,void *coords,void *entity_ptr)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined4 *puVar4;
  void *pvVar5;
  char cStack_1f;
  char local_a [0x4];
  u8 *puStack_6;
  
  uVar3 = (undefined2)((ulong)entity_ptr >> 0x10);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,*(long *)((int)entity_ptr + 0x4),
                      (char *)CONCAT22(unaff_SS,local_a));
  puStack_6 = (u8 *)*puVar4;
  cStack_1f = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1f != '\0')
  {
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_6);
    pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar5);
    iVar2 = (int)((ulong)pvVar5 >> 0x10);
    if ((iVar2 != 0x0 || (int)pvVar5 != 0x0) && (0x9 < *(int *)((int)pvVar5 + 0xc)))
    {
      return 0x0;
    }
  }
  uVar1 = Simulator_Is_Coordinate_Within_Safe_Margins_Logic
                    ((u16)arg1,(u16)((ulong)arg1 >> 0x10),coords,
                     (u8 *)(u8 *)*(undefined4 *)((int)entity_ptr + 0x4));
  if (uVar1 == 0x0)
  {
    return 0x0;
  }
  return 0x1;
}



// Implements a spiral search algorithm to find the nearest valid world coordinate. It
// iteratively increments offsets and directions, validating each candidate against
// safety margins and existing entities until a valid spot is found.

void __stdcall16far
Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
          (void *param_1,u16 param_2,int param_3,void *param_4,void *param_5)
{
  int iVar1;
  int *piVar2;
  u16 uVar3;
  undefined2 uVar4;
  int *unaff_SS;
  undefined **src;
  int iStack_1c;
  undefined1 local_1a [0x6];
  int *piStack_14;
  undefined2 uStack_12;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int local_8;
  int local_6;
  int local_4;
  
  if (param_3 == 0x0)
  {
    piVar2 = (int *)0x4e6a;
  }
  else
  {
    piVar2 = (int *)0x4e6e;
  }
  uStack_c = (int *)CONCAT22(0x1050,piVar2);
  if (param_3 == 0x0)
  {
    piStack_14 = (int *)0x4e68;
  }
  else
  {
    piStack_14 = (int *)0x4e6c;
  }
  uStack_12 = 0x1050;
  uStack_10 = (int *)CONCAT22(0x1050,piStack_14);
  do
  {
    if (param_3 == 0x0)
    {
      src = (undefined **)&p_GlobalPaletteObject;
    }
    else
    {
      src = (undefined **)((char *)s_dib_1050_4234 + 0x2);
    }
    unpack_3word_struct(src,(int *)0x1048,&local_8,unaff_SS);
    iVar1 = *uStack_c;
    if (iVar1 == 0x0)
    {
      _local_6 = CONCAT22(local_4 + *uStack_10,local_6 + -0x1);
    }
    else if (iVar1 == 0x1)
    {
      _local_6 = CONCAT22(local_4 + -0x1,local_6 + *uStack_10);
    }
    else if (iVar1 == 0x2)
    {
      _local_6 = CONCAT22(local_4 - *uStack_10,local_6 + -0x1);
    }
    pack_3words_alt(local_1a,(int)unaff_SS,local_8,(int)_local_6);
    uVar4 = (undefined2)((ulong)param_5 >> 0x10);
    uVar3 = Simulator_Is_Coordinate_Within_Safe_Margins_Logic
                      ((u16)param_1,param_2,(undefined1 *)CONCAT22(unaff_SS,local_1a),
                       (u8 *)(u8 *)*(undefined4 *)((int)(void *)param_5 + 0x4));
    if (uVar3 != 0x0)
    {
      uVar3 = Simulator_Validate_Interaction_at_Coords_Logic
                        ((void *)CONCAT22(param_2,param_1),
                         (undefined1 *)CONCAT22(unaff_SS,local_1a),param_5);
      if (uVar3 != 0x0)
      {
LAB_1020_b46e:
        pack_3words_reverse((void *)param_4,(int)((ulong)param_4 >> 0x10),local_8,
                            (int)_local_6);
        return;
      }
    }
    iVar1 = *uStack_c;
    if (iVar1 == 0x0)
    {
LAB_1020_b45e:
      _local_6 = CONCAT22(local_4,local_6 + 0x2);
    }
    else if (iVar1 == 0x1)
    {
      _local_6 = CONCAT22(local_4 + 0x2,local_6);
    }
    else if (iVar1 == 0x2) goto LAB_1020_b45e;
    pack_3words_reverse(local_1a,(int)unaff_SS,local_8,(int)_local_6);
    uVar3 = Simulator_Is_Coordinate_Within_Safe_Margins_Logic
                      ((u16)param_1,param_2,(undefined1 *)CONCAT22(unaff_SS,local_1a),
                       (u8 *)(u8 *)*(undefined4 *)((int)(void *)param_5 + 0x4));
    if (uVar3 != 0x0)
    {
      uVar3 = Simulator_Validate_Interaction_at_Coords_Logic
                        ((void *)CONCAT22(param_2,param_1),
                         (undefined1 *)CONCAT22(unaff_SS,local_1a),param_5);
      if (uVar3 != 0x0) goto LAB_1020_b46e;
    }
    iStack_1c = *uStack_c + 0x1;
    if (0x2 < iStack_1c)
    {
      iStack_1c = 0x0;
      *uStack_10 = *uStack_10 + 0x1;
    }
    *uStack_c = iStack_1c;
    UI_Entity_Move_and_Notify_Simulator_ac6e
              ((void *)CONCAT22(param_2,param_1),param_3,*uStack_10,iStack_1c);
  } while( true );
}
