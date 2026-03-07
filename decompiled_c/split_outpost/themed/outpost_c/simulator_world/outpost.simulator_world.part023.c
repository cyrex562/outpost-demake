/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 23/56
 * Original lines (combined): 65987-67193
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps a research category ID to a string resource ID and loads the category name from
// the string table.

char * __cdecl16far Lookup_Research_Category_Name_by_ID_Logic_c0d8(u16 category_id)
{
  char *pcVar1;
  int res_id;
  
  if (false)
  {
switchD_1020_c1cd_caseD_20:
    res_id = 0x5d9;
  }
  else
  {
    switch(category_id)
    {
    case 0x1:
      res_id = 0x5b7;
      break;
    case 0x2:
      res_id = 0x5b8;
      break;
    case 0x3:
      res_id = 0x5b9;
      break;
    case 0x4:
      res_id = 0x5ba;
      break;
    case 0x5:
      res_id = 0x5bb;
      break;
    case 0x6:
      res_id = 0x5bc;
      break;
    case 0x7:
      res_id = 0x5bd;
      break;
    case 0x8:
      res_id = 0x5be;
      break;
    case 0x9:
      res_id = 0x5bf;
      break;
    case 0xa:
      res_id = 0x5c0;
      break;
    case 0xb:
      res_id = 0x5c1;
      break;
    case 0xc:
      res_id = 0x5c2;
      break;
    case 0xd:
      res_id = 0x5c3;
      break;
    case 0xe:
      res_id = 0x5c4;
      break;
    case 0xf:
      res_id = 0x5c5;
      break;
    case 0x10:
      res_id = 0x5c6;
      break;
    case 0x11:
      res_id = 0x5c7;
      break;
    case 0x12:
      res_id = 0x5c8;
      break;
    case 0x13:
      res_id = 0x5c9;
      break;
    case 0x14:
      res_id = 0x5ca;
      break;
    case 0x15:
      res_id = 0x5cb;
      break;
    case 0x16:
      res_id = 0x5cc;
      break;
    case 0x17:
      res_id = 0x5cd;
      break;
    case 0x18:
      res_id = 0x5ce;
      break;
    case 0x19:
      res_id = 0x5cf;
      break;
    case 0x1a:
      res_id = 0x5d0;
      break;
    case 0x1b:
      res_id = 0x5d1;
      break;
    case 0x1c:
      res_id = 0x5d2;
      break;
    case 0x1d:
      res_id = 0x5d3;
      break;
    case 0x1e:
      res_id = 0x5d4;
      break;
    case 0x1f:
      res_id = 0x5d5;
      break;
    default:
      goto switchD_1020_c1cd_caseD_20;
    case 0x21:
      res_id = 0x5d6;
      break;
    case 0x23:
      res_id = 0x5d7;
      break;
    case 0x24:
      res_id = 0x5e5;
    }
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps an entity ID to its broad category name string resource (e.g. 'Structure',
// 'Robot').

char * __cdecl16far Lookup_Entity_Category_Name_by_ID_Logic_c222(u16 entity_id)
{
  char *pcVar1;
  int res_id;
  
  switch(entity_id)
  {
  case 0x1:
    res_id = 0x57f;
    break;
  case 0x2:
    res_id = 0x580;
    break;
  case 0x3:
    res_id = 0x581;
    break;
  case 0x4:
    res_id = 0x5e7;
    break;
  case 0x5:
    res_id = 0x57e;
    break;
  case 0x6:
    res_id = 0x582;
    break;
  case 0x7:
    res_id = 0x3e8;
    break;
  case 0x8:
    res_id = 0x3e9;
    break;
  case 0x9:
    res_id = 0x3ea;
    break;
  case 0xa:
    res_id = 0x3eb;
    break;
  case 0xb:
    res_id = 0x3ec;
    break;
  case 0xc:
    res_id = 0x3ed;
    break;
  case 0xd:
    res_id = 0x3ee;
    break;
  case 0xe:
    res_id = 0x3ef;
    break;
  case 0xf:
    res_id = 0x3f0;
    break;
  case 0x10:
    res_id = 0x3f1;
    break;
  case 0x11:
    res_id = 0x3f2;
    break;
  case 0x12:
    res_id = 0x3f4;
    break;
  case 0x13:
    res_id = 0x3f5;
    break;
  case 0x14:
    res_id = 0x532;
    break;
  default:
    res_id = 0x5d9;
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps an entity ID to its specific sub-category name string resource.

char * __cdecl16far Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(u16 entity_id)
{
  char *pcVar1;
  int res_id;
  
  switch(entity_id)
  {
  case 0x1:
    res_id = 0x583;
    break;
  case 0x2:
    res_id = 0x584;
    break;
  case 0x3:
    res_id = 0x585;
    break;
  case 0x4:
    res_id = 0x586;
    break;
  case 0x5:
    res_id = 0x587;
    break;
  case 0x6:
    res_id = 0x588;
    break;
  case 0x7:
    res_id = 0x589;
    break;
  case 0x8:
    res_id = 0x58a;
    break;
  case 0x9:
    res_id = 0x58b;
    break;
  case 0xa:
    res_id = 0x58c;
    break;
  case 0xb:
    res_id = 0x58d;
    break;
  case 0xc:
    res_id = 0x58e;
    break;
  case 0xd:
    res_id = 0x58f;
    break;
  case 0xe:
    res_id = 0x3f8;
    break;
  case 0xf:
    res_id = 0x3f9;
    break;
  case 0x10:
    res_id = 0x532;
    break;
  default:
    res_id = 0x5d9;
  }
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),res_id);
  return pcVar1;
}
