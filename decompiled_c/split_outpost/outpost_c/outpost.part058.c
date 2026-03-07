/*
 * Source: outpost.c
 * Chunk: 58/117
 * Original lines: 65723-66911
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// An exhaustive validation routine that checks interaction coordinates and performs
// proximity entity type scans in a tiered pattern (1-3 units radius) to ensure
// placement or interaction rules are met. Includes complex iteration over
// resource-tracked entities.

u16 __stdcall16far
Simulator_Validate_All_Entity_Interactions_in_Radius_Logic
          (void *arg1,void *coords,void *entity_ptr)
{
  undefined1 *puVar1;
  u16 uVar2;
  int iVar3;
  int *unaff_SS;
  void *arg2;
  void *x;
  u16 y;
  void *arg3;
  void *arg4;
  int iStack_2e;
  int local_2a;
  int local_28;
  undefined4 local_24;
  undefined2 uStack_20;
  long lStack_1e;
  void *pvStack_1a;
  undefined1 local_16 [0x12];
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x400);
  do
  {
    pvStack_1a = Simulator_World_Iterator_Get_Next_Entity_e4ec
                           ((undefined1 *)CONCAT22(unaff_SS,local_16));
    iVar3 = (int)((ulong)pvStack_1a >> 0x10);
    if (iVar3 == 0x0 && (void *)pvStack_1a == NULL)
    {
      uVar2 = Simulator_Validate_Interaction_at_Coords_Logic(arg1,coords,entity_ptr);
      if (uVar2 != 0x0)
      {
        lStack_1e = *(long *)((int)(void *)entity_ptr + 0x4);
        local_24 = *(undefined4 *)coords;
        uStack_20 = *(undefined2 *)((int)(void *)coords + 0x4);
        unpack_3word_struct(&local_24,unaff_SS,&local_2a,unaff_SS);
        pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,local_28 + -0x1);
        x = (void *)arg1;
        y = (u16)((ulong)arg1 >> 0x10);
        uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                          ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24),lStack_1e
                          );
        if (uVar2 != 0x0)
        {
          pack_3words_reverse(&local_24,(int)unaff_SS,(int)_local_2a,
                              (int)((ulong)_local_2a >> 0x10));
          uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                            ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24),
                             lStack_1e);
          if (uVar2 != 0x0)
          {
            pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,local_28 + 0x1);
            uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                              ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24),
                               lStack_1e);
            if (uVar2 != 0x0)
            {
              pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,local_28 + -0x1);
              uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24),
                                 lStack_1e);
              if (uVar2 != 0x0)
              {
                pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,local_28 + 0x1);
                uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                  ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24),
                                   lStack_1e);
                if (uVar2 != 0x0)
                {
                  pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,local_28 + 0x1);
                  uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                    ((u16)x,y,(undefined4 *)CONCAT22(unaff_SS,&local_24)
                                     ,lStack_1e);
                  if (uVar2 != 0x0)
                  {
                    pack_3words_reverse(&local_24,(int)unaff_SS,(int)_local_2a,
                                        (int)((ulong)_local_2a >> 0x10));
                    uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                      ((u16)x,y,(undefined4 *)
                                                CONCAT22(unaff_SS,&local_24),lStack_1e);
                    if (uVar2 != 0x0)
                    {
                      pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                          local_28 + -0x1);
                      uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                        ((u16)x,y,(undefined4 *)
                                                  CONCAT22(unaff_SS,&local_24),lStack_1e
                                        );
                      if (uVar2 != 0x0)
                      {
                        pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                            local_28 + -0x2);
                        uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                          ((u16)x,y,(undefined4 *)
                                                    CONCAT22(unaff_SS,&local_24),
                                           lStack_1e);
                        if (uVar2 != 0x0)
                        {
                          pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                              local_28 + 0x2);
                          uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                            ((u16)x,y,(undefined4 *)
                                                      CONCAT22(unaff_SS,&local_24),
                                             lStack_1e);
                          if (uVar2 != 0x0)
                          {
                            pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                                local_28 + -0x2);
                            uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                              ((u16)x,y,(undefined4 *)
                                                        CONCAT22(unaff_SS,&local_24),
                                               lStack_1e);
                            if (uVar2 != 0x0)
                            {
                              pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                                  local_28 + 0x2);
                              uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                                ((u16)x,y,(undefined4 *)
                                                          CONCAT22(unaff_SS,&local_24),
                                                 lStack_1e);
                              if (uVar2 != 0x0)
                              {
                                pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                                    local_28 + -0x1);
                                uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                                  ((u16)x,y,(undefined4 *)
                                                            CONCAT22(unaff_SS,&local_24)
                                                   ,lStack_1e);
                                if (uVar2 != 0x0)
                                {
                                  pack_3words_reverse(&local_24,(int)unaff_SS,local_2a,
                                                      local_28 + -0x1);
                                  uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                                    ((u16)x,y,(undefined4 *)
                                                              CONCAT22(unaff_SS,&
                                            local_24),lStack_1e);
                                  if (uVar2 != 0x0)
                                  {
                                    iStack_2e = 0x3;
                                    while( true )
                                    {
                                      if (0x9 < iStack_2e)
                                      {
                                        return 0x1;
                                      }
                                      pack_3words_reverse(&local_24,(int)unaff_SS,0x0,
                                                          local_28 - iStack_2e);
                                      uVar2 = Simulator_Get_Entity_Type_at_Coords_Logic
                                                        ((u16)x,y,(undefined4 *)
                                                                  CONCAT22(unaff_SS,&
                                            local_24),lStack_1e);
                                      if (uVar2 == 0x0) break;
                                      iStack_2e += 0x1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      return 0x0;
    }
    arg3 = coords;
    arg4 = entity_ptr;
    arg2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvStack_1a + 0x10));
    puVar1 = local_4;
    Simulator_Proximity_Check_Wrapper_bcbc
              ((undefined1 *)CONCAT22(unaff_SS,puVar1),arg2,arg3,arg4);
  } while ((-0x1 < (int)puVar1) && (0x64 < (int)puVar1));
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds a random safe coordinate within the world boundaries (using a 10-unit buffer)
// and spawns an entity there after validating the location against proximity
// interaction rules. Notifies the simulator of the new entity.

void __stdcall16far Simulator_Spawn_Random_Safe_Entity_Logic(void *arg1,void *arg2)
{
  int iVar1;
  u16 uVar2;
  int *unaff_SS;
  undefined4 *puVar3;
  uint16_t segment;
  char local_136 [0x124];
  undefined1 local_12 [0x6];
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  segment = (uint16_t)((ulong)arg2 >> 0x10);
  puVar3 = Simulator_Get_Entity_Coords_Ptr_5b5c((int)(void *)arg2,segment);
  local_8 = *puVar3;
  uStack_4 = *(undefined2 *)((undefined4 *)puVar3 + 0x1);
  unpack_word_pair(&local_8,unaff_SS,&local_c);
  random_int_range(0xa,local_a + -0xa);
  iVar1 = random_int_range(0xa,local_c + -0xa);
  pack_3words_alt(local_12,(int)unaff_SS,0x0,iVar1);
  while( true )
  {
    uVar2 = Simulator_Validate_All_Entity_Interactions_in_Radius_Logic
                      (arg1,(undefined1 *)CONCAT22(unaff_SS,local_12),arg2);
    if (uVar2 != 0x0) break;
    random_int_range(0xa,local_a + -0xa);
    iVar1 = random_int_range(0xa,local_c + -0xa);
    pack_3words_reverse(local_12,(int)unaff_SS,0x0,iVar1);
  }
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((char *)CONCAT22(unaff_SS,local_136),0x0,0xa,(u16)local_12,(u16)unaff_SS,
             0x2,0x800,NULL,(void *)*(undefined4 *)((int)(void *)arg2 + 0x4));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(char *)CONCAT22(unaff_SS,local_136));
  Simulator_Initialize_Global_Entity_Position_Structs_Logic
            ((u16)(void *)arg1,(u16)((ulong)arg1 >> 0x10),0x1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes global coordinate tracking structures (at 0x1048:4230 and 0x1048:4236) by
// retrieving initial positions from the simulator context. Conditionally applies an
// offset based on input.

void __stdcall16far
Simulator_Initialize_Global_Entity_Position_Structs_Logic(u16 x,u16 y,int apply_offset)
{
  void *pvVar1;
  int local_e [0x2];
  undefined2 uStack_a;
  undefined2 uStack_8;
  u8 *puStack_6;
  
  _PTR_DAT_1050_0000_1050_4e70 =
       Simulator_Get_Entity_Object_from_PackedID_e1ec
                 (_p_SimulatorWorldContext,(u8 *)(undefined **)&p_CurrentHeapContext);
  puStack_6 = (u8 *)*(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x10);
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_6);
  uStack_8 = (undefined2)((ulong)pvVar1 >> 0x10);
  uStack_a = SUB42(pvVar1,0x0);
  copy_struct_6bytes((undefined **)&p_GlobalPaletteObject,(void *)0x1048);
  unpack_word_pair((undefined **)&p_GlobalPaletteObject,(int *)0x1048,local_e);
  if (apply_offset == 0x0)
  {
    pack_3words_reverse((undefined **)&p_GlobalPaletteObject,0x1048,0x0,
                        local_e[0x0] + 0x1);
    unpack_word_pair((undefined **)&p_GlobalPaletteObject,(int *)0x1048,local_e);
  }
  pack_3words_reverse((char *)s_dib_1050_4234 + 0x2,0x1048,0x1,local_e[0x0] + -0x2);
  return;
}



void __cdecl16far UI_Planet_View_Batch_Function_ba2b(void)
{
  func_0x102096d4();
  func_0x1020a426();
  return;
}



// Constructor for a UI list component. Initializes dimensions and internal state,
// defaulting the item height to 5 if not specified. Calls secondary initialization
// logic.

void * __stdcall16far
UI_Item_List_ctor_init_logic(void *this_ptr,uint width,uint height)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  *(undefined2 *)(iVar1 + 0x4) = 0x0;
  *(uint *)(iVar1 + 0x6) = height;
  *(uint *)(iVar1 + 0x8) = width;
  if (*(int *)(iVar1 + 0x6) == 0x0)
  {
    *(undefined2 *)(iVar1 + 0x6) = 0x5;
  }
  UI_Item_List_Expand_Capacity_Logic(this_ptr);
  return this_ptr;
}



// Frees the far pointer stored at the beginning of the UI Item List structure if it is
// not null.

void __stdcall16far UI_Item_List_Free_Data_Pointer_Logic(void *this_ptr)
{
  free_if_not_null((void *)*(void **)this_ptr);
  return;
}



// Iterates through the UI Item List and returns the sum of the 32-bit values stored at
// the beginning of each 6-byte element.

void * __stdcall16far UI_Item_List_Sum_Values_Logic(void *this_ptr)
{
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (*(long *)this_ptr == 0x0)
  {
    return NULL;
  }
  uStack_6 = NULL;
  uStack_8 = 0x0;
  while( true )
  {
    if (*(uint *)((int)this_ptr + 0x4) <= uStack_8) break;
    uStack_6 = (void *)((long)uStack_6 +
                       *(long *)((int)*(undefined4 *)this_ptr + uStack_8 * 0x6));
    uStack_8 += 0x1;
  }
  return uStack_6;
}



// Wraps the binary search logic to find an item in the list and returns its associated
// far pointer if found.

void * __stdcall16far
UI_Item_List_Find_Item_FarPtr_Logic(void *param_1,undefined4 param_2)
{
  undefined2 *in_AX;
  int in_DX;
  undefined4 uStack_6;
  
  UI_Item_List_Binary_Search_Logic
            ((void *)CONCAT22((int)param_2,param_1),(u16)((ulong)param_2 >> 0x10));
  uStack_6 = (undefined2 *)CONCAT22(in_DX,in_AX);
  if (in_DX != 0x0 || in_AX != NULL)
  {
    return (void *)CONCAT22(in_AX[0x1],(void *)*uStack_6);
  }
  return NULL;
}



// Retrieves the 4-byte and 2-byte fields from a specific element in the UI Item List by
// its zero-based index.

void __stdcall16far
UI_Item_List_Get_Item_at_Index_Logic
          (void *this_ptr,void *out_field1,void *out_field2,uint index)
{
  if (*(uint *)((int)this_ptr + 0x4) < index)
  {
    *(undefined2 *)out_field2 = 0x0;
    *(undefined4 *)out_field1 = 0x0;
    return;
  }
  *(undefined2 *)out_field2 =
       *(undefined2 *)(index * 0x6 + (int)*(undefined4 *)this_ptr + 0x4);
  *(undefined4 *)out_field1 =
       *(undefined4 *)((int)*(undefined4 *)this_ptr + index * 0x6);
  return;
}



// Finds an item in the UI Item List and adds the provided 32-bit value to its existing
// 32-bit field.

void __stdcall16far
UI_Item_List_Add_Value_to_Item_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  UI_Item_List_Upsert_Item_Logic(param_1,0x1,param_2,param_3);
  return;
}



// Finds an item in the UI Item List and sets its 32-bit field to the provided value.

void __stdcall16far
UI_Item_List_Set_Item_Value_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  UI_Item_List_Upsert_Item_Logic(param_1,0x0,param_2,param_3);
  return;
}



// Updates an existing item in the UI Item List or inserts a new one if not found.
// Supports adding to the existing value or overwriting it.

u16 __stdcall16far
UI_Item_List_Upsert_Item_Logic
          (void *param_1,int param_2,uint param_3,uint param_4,u16 param_5)
{
  uint *in_AX;
  uint in_DX;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uStack_6;
  
  UI_Item_List_Binary_Search_Logic(param_1,param_5);
  uStack_6 = (uint *)CONCAT22(in_DX,in_AX);
  uVar1 = in_DX | (uint)in_AX;
  if (uVar1 == 0x0)
  {
    UI_Item_List_Binary_Search_Logic(param_1,0x0);
    uVar2 = uVar1 | (uint)in_AX;
    if (uVar2 == 0x0)
    {
      UI_Item_List_Expand_Capacity_Logic(param_1);
      UI_Item_List_Binary_Search_Logic(param_1,0x0);
      if (uVar2 == 0x0 && in_AX == NULL)
      {
        return 0x0;
      }
      in_AX[0x2] = param_5;
      uVar1 = uVar2;
    }
    else
    {
      in_AX[0x2] = param_5;
    }
    if (param_2 != 0x0)
    {
      bVar3 = CARRY2(*in_AX,param_3);
      param_3 = *in_AX + param_3;
      param_4 = in_AX[0x1] + param_4 + (uint)bVar3;
    }
    *in_AX = param_3;
    in_AX[0x1] = param_4;
    UI_Item_List_Sort_Logic(param_1);
  }
  else
  {
    if (param_2 != 0x0)
    {
      bVar3 = CARRY2(*uStack_6,param_3);
      param_3 = *uStack_6 + param_3;
      param_4 = in_AX[0x1] + param_4 + (uint)bVar3;
    }
    *in_AX = param_3;
    in_AX[0x1] = param_4;
  }
  return 0x1;
}



// Sorts the UI Item List using the qsort algorithm and a specialized 6-byte element
// comparison callback.

void __stdcall16far UI_Item_List_Sort_Logic(void *this_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x2);
  qsort_far_array_with_callback_internal
            (*(void **)this_ptr,(int)uVar1,(int)((ulong)uVar1 >> 0x10),(void *)0x6);
  return;
}



// Performs a binary search on the UI Item List to find an element matching the provided
// key.

void __stdcall16far UI_Item_List_Binary_Search_Logic(void *this_ptr,u16 key)
{
  undefined4 uVar1;
  void *unaff_SS;
  undefined1 local_c [0x4];
  u16 uStack_8;
  
  uStack_8 = key;
  uVar1 = *(undefined4 *)((int)this_ptr + 0x2);
  bsearch_far_array_with_callback
            (local_c,unaff_SS,*(int *)this_ptr,(int)uVar1,(void *)((ulong)uVar1 >> 0x10)
             ,0x6,0xbd6c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Allocates or reallocates the internal buffer for the UI Item List to accommodate more
// elements, using an increment step defined in the list structure.

void __stdcall16far UI_Item_List_Expand_Capacity_Logic(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  void *pvVar4;
  undefined2 uVar5;
  void *in_stack_0000ffe6;
  undefined4 uStack_c;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(int *)((int)pvVar4 + 0x4) == 0x0)
  {
    puVar3 = NULL;
    iVar1 = *(int *)((int)pvVar4 + 0x6);
  }
  else
  {
    iVar1 = *(uint *)((int)pvVar4 + 0x4) + *(uint *)((int)pvVar4 + 0x8);
    puVar3 = (undefined *)
             (uint)CARRY2(*(uint *)((int)pvVar4 + 0x4),*(uint *)((int)pvVar4 + 0x8));
  }
  if ((false) || (puVar3 == NULL))
  {
    if (*(long *)this_ptr == 0x0)
    {
      if (_g_AllocatedBlock_Offset == NULL)
      {
        heap_ctx = init_memory_allocator();
      }
      else
      {
        puVar3 = g_AllocatedBlock_Segment;
        heap_ctx = g_AllocatedBlock_Offset;
      }
      pvVar2 = alloc_with_hooks((ulong)(uint)(iVar1 * 0x6),0x1,heap_ctx);
    }
    else
    {
      puVar3 = NULL;
      pvVar2 = heap_realloc(0x1,*(long *)this_ptr << 0x10,
                            (void *)((ulong)*(long *)this_ptr >> 0x10),in_stack_0000ffe6
                           );
    }
    uStack_c = (void *)CONCAT22(puVar3,pvVar2);
    if (puVar3 != NULL || pvVar2 != NULL)
    {
      *(int *)((int)pvVar4 + 0x4) = iVar1;
      *(void **)this_ptr = uStack_c;
      UI_Item_List_Sort_Logic(this_ptr);
    }
  }
  return;
}



int __cdecl16far UI_Object_Compare_U16_at_4_bd6c(undefined4 param_1,undefined4 param_2)
{
  return *(int *)((int)param_1 + 0x4) - *(int *)((int)param_2 + 0x4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps an entity ID to a string resource ID and loads the corresponding entity name
// (e.g. 'Command Center', 'Mine') from the string table into an internal buffer.

char * __cdecl16far Lookup_Entity_Name_by_ID_Logic_bd80(u16 entity_id)
{
  char *pcVar1;
  int res_id;
  char *pcStack_6;
  
  switch(entity_id)
  {
  case 0x1:
  case 0x6:
    res_id = 0x427;
    break;
  case 0x2:
    res_id = 0x428;
    break;
  case 0x3:
  case 0x7:
    res_id = 0x429;
    break;
  case 0x4:
  case 0x8:
    res_id = 0x425;
    break;
  case 0x5:
  case 0x9:
    res_id = 0x426;
    break;
  case 0xa:
    res_id = 0x402;
    break;
  case 0xb:
  case 0x37:
    res_id = 0x418;
    break;
  case 0xc:
  case 0x35:
  case 0x36:
    res_id = 0x42a;
    break;
  case 0xd:
    res_id = 0x5f7;
    break;
  case 0xe:
    res_id = 0x5f6;
    break;
  case 0xf:
    res_id = 0x403;
    break;
  case 0x10:
    res_id = 0x5f8;
    break;
  case 0x11:
    res_id = 0x404;
    break;
  case 0x12:
    res_id = 0x405;
    break;
  case 0x13:
  case 0x14:
  case 0x15:
    res_id = 0x406;
    break;
  case 0x16:
  case 0x19:
    res_id = 0x5f9;
    break;
  case 0x17:
  case 0x1a:
    res_id = 0x5fa;
    break;
  case 0x18:
    res_id = 0x5fb;
    break;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    res_id = 0x408;
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
    res_id = 0x409;
    break;
  case 0x21:
    res_id = 0x42c;
    break;
  case 0x22:
  case 0x23:
  case 0x24:
    res_id = 0x40a;
    break;
  case 0x25:
  case 0x26:
  case 0x27:
    res_id = 0x40b;
    break;
  case 0x28:
  case 0x29:
    res_id = 0x40c;
    break;
  case 0x2a:
  case 0x2b:
    res_id = 0x40d;
    break;
  case 0x2c:
    res_id = 0x40e;
    break;
  case 0x2d:
  case 0x2e:
    res_id = 0x40f;
    break;
  case 0x2f:
  case 0x30:
    res_id = 0x410;
    break;
  case 0x31:
  case 0x32:
    res_id = 0x411;
    break;
  case 0x33:
  case 0x34:
    res_id = 0x416;
    break;
  case 0x38:
  case 0x39:
    res_id = 0x5fc;
    break;
  case 0x3a:
  case 0x3b:
    res_id = 0x419;
    break;
  case 0x3c:
  case 0x3d:
    res_id = 0x5fd;
    break;
  case 0x3e:
    res_id = 0x5fe;
    break;
  case 0x3f:
    res_id = 0x5ff;
    break;
  case 0x40:
    res_id = 0x600;
    break;
  case 0x41:
    res_id = 0x601;
    break;
  case 0x42:
  case 0x46:
  case 0x6b:
    res_id = 0x602;
    break;
  case 0x43:
    pcStack_6 = (char *)s_bidLRoadConst_1050_4e7a;
    return pcStack_6;
  case 0x44:
    pcStack_6 = (char *)s_bidRRoadConst_1050_4e88;
    return pcStack_6;
  case 0x45:
    pcStack_6 = (char *)s_bidXRoadConst_1050_4e96;
    return pcStack_6;
  case 0x47:
    res_id = 0x42b;
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x70:
  case 0x71:
  case 0x72:
    res_id = 0x603;
    break;
  case 0x4b:
    res_id = 0x42d;
    break;
  case 0x4c:
    res_id = 0x604;
    break;
  case 0x4d:
    res_id = 0x605;
    break;
  case 0x4e:
    res_id = 0x606;
    break;
  case 0x4f:
  case 0x50:
  case 0x51:
    res_id = 0x41a;
    break;
  case 0x52:
  case 0x53:
    res_id = 0x41b;
    break;
  case 0x54:
  case 0x55:
  case 0x56:
    res_id = 0x41d;
    break;
  case 0x57:
  case 0x58:
  case 0x59:
    res_id = 0x41e;
    break;
  case 0x5a:
    res_id = 0x41f;
    break;
  case 0x5b:
  case 0x5c:
    res_id = 0x421;
    break;
  case 0x5d:
  case 0x5e:
  case 0x5f:
    res_id = 0x420;
    break;
  case 0x60:
  case 0x61:
    res_id = 0x607;
    break;
  case 0x62:
  case 0x63:
    res_id = 0x608;
    break;
  case 0x64:
    res_id = 0x609;
    break;
  case 0x65:
    res_id = 0x422;
    break;
  case 0x66:
  case 0x67:
    res_id = 0x423;
    break;
  case 0x68:
  case 0x69:
    res_id = 0x60a;
    break;
  case 0x6a:
    res_id = 0x60b;
    break;
  case 0x6c:
  case 0x6d:
    res_id = 0x41c;
    break;
  case 0x6e:
    res_id = 0x60c;
    break;
  case 0x6f:
    res_id = 0x60d;
    break;
  case 0x73:
  case 0x77:
    res_id = 0x415;
    break;
  case 0x74:
  case 0x78:
  case 0x79:
    res_id = 0x412;
    break;
  case 0x75:
    res_id = 0x413;
    break;
  case 0x76:
    res_id = 0x414;
    break;
  case 0x7a:
    res_id = 0x60e;
    break;
  case 0x7b:
    res_id = 0x60f;
    break;
  case 0x7c:
    res_id = 0x610;
    break;
  case 0x7d:
    res_id = 0x611;
    break;
  case 0x7e:
    res_id = 0x612;
    break;
  case 0x7f:
    res_id = 0x613;
    break;
  case 0x80:
    res_id = 0x614;
    break;
  case 0x81:
    res_id = 0x615;
    break;
  case 0x82:
    res_id = 0x616;
    break;
  case 0x83:
    res_id = 0x617;
    break;
  case 0x84:
    res_id = 0x618;
    break;
  case 0x85:
    res_id = 0x619;
    break;
  case 0x86:
    res_id = 0x61a;
    break;
  case 0x87:
    res_id = 0x61b;
    break;
  case 0x88:
    res_id = 0x61c;
    break;
  case 0x89:
    res_id = 0x61d;
    break;
  default:
    res_id = 0x424;
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// A simple wrapper around the entity description lookup function.

void __cdecl16far Lookup_Entity_Description_Wrapper_c0ca(u16 entity_id)
{
  Lookup_Research_Category_Name_by_ID_Logic_c0d8(entity_id);
  return;
}
