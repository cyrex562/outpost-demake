/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 43/56
 * Original lines (combined): 99906-101681
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iteratively scans for neighboring entities and updates their internal state flags
// (offset 0x20). Handles special rotation or resource transfer triggers for certain
// entity types.

void __stdcall16far
UI_Build_Item_Scan_Neighbors_and_Update_State_Logic_affc(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  void *pvVar4;
  int iStack_c;
  undefined4 uStack_a;
  u8 *local_6 [0x2];
  
  Simulator_Map_Get_Entity_at_Coords_via_SubList_Alternative_b718
            ((u16)(void *)this_ptr,(u16)this_ptr._2_2_,
             (void *)CONCAT22(this_ptr._2_2_,(void *)((int)(void *)this_ptr + 0x8)),
             (u8 **)CONCAT22(unaff_SS,local_6));
  uStack_a = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,local_6[0x0]);
  if (uStack_a != NULL)
  {
    pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_a);
    uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
    iVar1 = *(int *)((int)(void *)pvVar3 + 0xc);
    if (((0x15 < iVar1) && (!SBORROW2(iVar1,0x16))) &&
       ((iVar1 == 0x17 || iVar1 + -0x16 < 0x1 ||
        ((0x0 < iVar1 + -0x18 && (iVar1 + -0x19 < 0x2))))))
    {
      *(undefined2 *)((int)(void *)pvVar3 + 0x20) = 0x0;
    }
  }
  iStack_c = 0x6;
  do
  {
    if (iStack_c == 0x0)
    {
LAB_1030_b0fc:
      if (uStack_a._2_2_ != 0x0 || (void *)uStack_a != NULL)
      {
        pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_a);
        uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
        iVar1 = *(int *)((int)(void *)pvVar3 + 0xc);
        if (((0x15 < iVar1) && (!SBORROW2(iVar1,0x16))) &&
           ((iVar1 == 0x17 || iVar1 + -0x16 < 0x1 ||
            ((0x0 < iVar1 + -0x18 && (iVar1 + -0x19 < 0x2))))))
        {
          *(undefined2 *)((int)(void *)pvVar3 + 0x20) = 0x1;
        }
      }
      return;
    }
    pvVar3 = UI_Build_Item_Get_Neighbor_in_Current_Direction_b578(this_ptr);
    if (pvVar3 == NULL) goto LAB_1030_b0fc;
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
    iVar1 = *(int *)((int)(void *)pvVar4 + 0xc);
    copy_struct_6bytes((void *)((int)(void *)this_ptr + 0x8),this_ptr._2_2_);
    if ((iVar1 == 0x18) || (iVar1 == 0x3f))
    {
      UI_Build_Item_Rotate_Direction_State_Logic_b142(this_ptr,pvVar3);
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
    uStack_a = pvVar3;
    if (iVar1 != 0x0)
    {
      UI_Build_Item_Transfer_Resources_to_Neighbor_Logic_b454(this_ptr,pvVar3);
      goto LAB_1030_b0fc;
    }
    iStack_c += -0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches for a simulator entity of type group 0x42 at the specified world
// coordinates. Returns the object pointer and syncs ID data.

void * __stdcall16far
UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa(void *this_ptr,void *coords)
{
  int iVar1;
  undefined2 unaff_SS;
  void *this_ptr_00;
  void *pvVar2;
  void *src;
  char cStack_17;
  u8 *local_6 [0x2];
  
  src = (void *)((ulong)this_ptr >> 0x10);
  Simulator_Map_Get_Entity_at_Coords_via_SubList_Alternative_b718
            ((u16)this_ptr,(u16)src,coords,(u8 **)CONCAT22(unaff_SS,local_6));
  cStack_17 = local_6[0x1]._1_1_;
  if (cStack_17 != '\0')
  {
    this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,local_6[0x0]);
    if (this_ptr_00 != NULL)
    {
      pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr_00);
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                         *(int *)((int)pvVar2 + 0xc));
      if (iVar1 != 0x0)
      {
        copy_struct_6bytes((void *)((u16)this_ptr + 0x8),src);
        return this_ptr_00;
      }
    }
  }
  return NULL;
}



// Performs a cardinal scan (X+/-1, Y+/-1) to find an adjacent valid entity and
// automatically sets the build item's direction state (1-4).

void * __stdcall16far
UI_Build_Item_Auto_Detect_Adjacent_Entity_Direction_b344(void *this_ptr)
{
  int *unaff_SS;
  void *pvVar1;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  local_8 = *(undefined4 *)((int)(void *)this_ptr + 0x8);
  uStack_4 = *(undefined2 *)((int)(void *)this_ptr + 0xc);
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  local_8 = CONCAT22(local_c + -0x1,(int)local_8);
  pvVar1 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                     (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_8));
  if (pvVar1 == NULL)
  {
    local_8 = CONCAT22(local_c + 0x1,(int)local_8);
    pvVar1 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                       (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_8));
    if (pvVar1 == NULL)
    {
      local_8._0_2_ = local_a + -0x1;
      local_8._2_2_ = local_c;
      pvVar1 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                         (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_8));
      if (pvVar1 == NULL)
      {
        local_8 = CONCAT22(local_8._2_2_,local_a + 0x1);
        pvVar1 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                           (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_8));
        if (pvVar1 == NULL)
        {
          return NULL;
        }
        *(undefined2 *)((int)(void *)this_ptr + 0xe) = 0x2;
      }
      else
      {
        *(undefined2 *)((int)(void *)this_ptr + 0xe) = 0x4;
      }
    }
    else
    {
      *(undefined2 *)((int)(void *)this_ptr + 0xe) = 0x3;
    }
  }
  else
  {
    *(undefined2 *)((int)(void *)this_ptr + 0xe) = 0x1;
  }
  return pvVar1;
}



// Coordinates resource transfer between a build item and its neighbors. Iterates
// through the item list and triggers virtual consumption/delivery callbacks.

void __stdcall16far
UI_Build_Item_Transfer_Resources_to_Neighbor_Logic_b454
          (void *this_ptr,void *neighbor_ptr)
{
  undefined4 *value;
  undefined2 *puVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  astruct_188 *uVar7;
  undefined2 uVar6;
  void *pvVar7;
  u32 *puVar8;
  undefined4 uStack_26;
  undefined4 uStack_1e;
  undefined1 local_12 [0x4];
  undefined4 uStack_e;
  void *pvStack_a;
  long lStack_6;
  
  lStack_6 = *(long *)((int)neighbor_ptr + 0x4);
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar7 = (astruct_188 *)this_ptr;
  init_long_pair(local_12,(long)uVar7->field16_0x10);
  while( true )
  {
    pvStack_a = (void *)get_next_list_item(local_12);
    iVar4 = (int)((ulong)pvStack_a >> 0x10);
    if (iVar4 == 0x0 && (int)pvStack_a == 0x0) break;
    if (*(long *)((int)pvStack_a + 0x20) == lStack_6)
    {
      puVar1 = (undefined2 *)((int)*uVar7->field16_0x10 + 0xc);
      (*(code *)*puVar1)();
      uStack_e = 0x0;
      Simulator_Resource_Change_Item_Clear_Status_Flag_69fe(pvStack_a);
    }
  }
  pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(neighbor_ptr);
  iVar4 = (int)((ulong)pvVar7 >> 0x10);
  value = (undefined4 *)*(long *)((int)pvVar7 + 0x20);
  pcVar2 = init_long_pair(local_12,(long)value);
  Helper_NoOp_Stub_b13c();
  uStack_1e = CONCAT22(-(uint)((char *)s_Unsupported_FileStructType_in_Op_1050_01ca +
                               0x2a < pcVar2) - iVar4,0x1f4 - (int)pcVar2);
  do
  {
    pvStack_a = (void *)get_next_list_item(local_12);
    uVar5 = (uint)((ulong)pvStack_a >> 0x10) | (uint)pvStack_a;
    if (uVar5 == 0x0)
    {
      return;
    }
    uVar3 = Simulator_Resource_Change_Item_Calculate_Value_Logic_6984(pvStack_a);
    uStack_26 = CONCAT22(uVar5,uVar3);
    if (((int)uVar5 <= uStack_1e._2_2_) &&
       (((int)uVar5 < uStack_1e._2_2_ || (uVar3 <= (uint)uStack_1e))))
    {
      puVar8 = uVar7->field16_0x10;
      puVar1 = (undefined2 *)((int)*uVar7->field16_0x10 + 0x8);
      pvVar7 = pvStack_a;
      (*(code *)*puVar1)();
      uStack_1e -= uStack_26;
      puVar1 = (undefined2 *)((int)*value + 0xc);
      (*(code *)*puVar1)(0x1038,(undefined4 *)value,(int)((ulong)value >> 0x10),
                         pvStack_a,puVar8,pvVar7);
      uStack_e = 0x0;
    }
  } while (0x0 < uStack_1e);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the entity pointer for the neighbor located in the build item's currently
// set direction (offset 0xE). Validates neighbor against allowed types.

void * __stdcall16far
UI_Build_Item_Get_Neighbor_in_Current_Direction_b578(void *this_ptr)
{
  int iVar1;
  uint uVar2;
  int *unaff_SS;
  bool bVar3;
  void *pvVar4;
  void *pvStack_30;
  undefined2 uStack_2e;
  int local_1c;
  int local_1a;
  int local_18;
  undefined4 local_16;
  undefined2 uStack_12;
  undefined2 uStack_10;
  void *pvStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  u8 *local_6 [0x2];
  
  Simulator_Map_Get_Entity_at_Coords_via_SubList_Alternative_b718
            ((u16)this_ptr,(u16)this_ptr._2_2_,
             (void *)CONCAT22(this_ptr._2_2_,(void *)((u16)this_ptr + 0x8)),
             (u8 **)CONCAT22(unaff_SS,local_6));
  uStack_2e._1_1_ = local_6[0x1]._1_1_;
  if (uStack_2e._1_1_ == '\0')
  {
    return NULL;
  }
  pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,local_6[0x0]);
  uStack_8 = (undefined2)((ulong)pvVar4 >> 0x10);
  uStack_a = SUB42(pvVar4,0x0);
  pvStack_e = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
  uStack_10 = *(undefined2 *)((int)pvStack_e + 0xc);
  local_16 = *(undefined4 *)((u16)this_ptr + 0x8);
  uStack_12 = *(undefined2 *)((u16)this_ptr + 0xc);
  unpack_3word_struct(&local_16,unaff_SS,&local_1c,unaff_SS);
  iVar1 = *(int *)((u16)this_ptr + 0xe);
  if (iVar1 == 0x0)
  {
    pvVar4 = UI_Build_Item_Auto_Detect_Adjacent_Entity_Direction_b344(this_ptr);
    return pvVar4;
  }
  if (iVar1 == 0x1)
  {
    local_1a += -0x1;
LAB_1030_b63e:
    local_16 = CONCAT22(local_1a,(undefined2)local_16);
    pvVar4 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                       (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_16));
    uStack_2e = (undefined2)((ulong)pvVar4 >> 0x10);
    pvStack_30 = (void *)pvVar4;
    if (pvVar4 == NULL)
    {
      return NULL;
    }
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    uVar2 = *(uint *)((int)pvVar4 + 0xc);
    if (uVar2 == 0x3f) goto LAB_1030_b6e0;
    if (0x3f < uVar2)
    {
      return NULL;
    }
    if ((char)uVar2 == '\x16') goto LAB_1030_b6e0;
    bVar3 = (char)uVar2 == '\x18';
  }
  else
  {
    if (iVar1 == 0x2)
    {
      local_18 += 0x1;
    }
    else
    {
      if (iVar1 == 0x3)
      {
        local_1a += 0x1;
        goto LAB_1030_b63e;
      }
      if (iVar1 != 0x4)
      {
        return NULL;
      }
      local_18 += -0x1;
    }
    local_16 = CONCAT22(local_16._2_2_,local_18);
    pvVar4 = UI_Build_Item_Find_Entity_of_Group42_at_Coords_b2aa
                       (this_ptr,(undefined4 *)CONCAT22(unaff_SS,&local_16));
    uStack_2e = (undefined2)((ulong)pvVar4 >> 0x10);
    pvStack_30 = (void *)pvVar4;
    if (pvVar4 == NULL)
    {
      return NULL;
    }
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    iVar1 = *(int *)((int)pvVar4 + 0xc);
    if (iVar1 < 0x17)
    {
      return NULL;
    }
    if (SBORROW2(iVar1,0x17))
    {
      return NULL;
    }
    if (iVar1 == 0x18 || iVar1 + -0x17 < 0x1) goto LAB_1030_b6e0;
    bVar3 = iVar1 == 0x3f;
  }
  if (!bVar3)
  {
    return NULL;
  }
LAB_1030_b6e0:
  copy_struct_6bytes((void *)((u16)this_ptr + 0x8),this_ptr._2_2_);
  return (void *)CONCAT22(uStack_2e,pvStack_30);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A wrapper that retrieves entity data from the map using the coordinate sub-list
// associated with global resource 0x2F (offset 0x20). Equivalent to 1030:64CE.

void __stdcall16far
Simulator_Map_Get_Entity_at_Coords_via_SubList_Alternative_b718
          (u16 offset,u16 segment,void *coords,void *out_data)
{
  undefined2 unaff_SS;
  undefined4 *puVar1;
  undefined1 local_12 [0x8];
  long lStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lStack_a = *(long *)((int)lStack_6 + 0x20);
  puVar1 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,lStack_a,
                      (undefined1 *)CONCAT22(unaff_SS,local_12));
  *(undefined4 *)out_data = *puVar1;
  return;
}



// Simple identity function that returns its input pointer.

void * __stdcall16far Helper_Identity_Function_bcae(void *this_ptr)
{
  return this_ptr;
}



// Wrapper for coordinate-based proximity validation against simulator entities. Passes
// data to the core check logic (1030:BCDE).

void __stdcall16far
Simulator_Proximity_Check_Wrapper_bcbc(void *arg1,void *arg2,void *arg3,void *arg4)
{
  Simulator_Calc_Manhattan_Distance_to_Coord_bcde
            ((u16)(void *)arg1,(u16)((ulong)arg1 >> 0x10),arg2,arg3,
             *(long *)((int)(void *)arg4 + 0x4));
  return;
}



// Calculates the Manhattan distance (|x1-x2| + |y1-y2|) between a source object's
// coordinates and a target coordinate. Returns -1 if the objects are on different
// simulator levels.

int __stdcall16far
Simulator_Calc_Manhattan_Distance_to_Coord_bcde
          (u16 arg1,u16 arg2,void *obj_ptr,void *coords,long arg5)
{
  int iVar1;
  int iVar2;
  astruct_185 *uVar3;
  undefined2 uVar4;
  int *unaff_SS;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  u32 local_c;
  u16 uStack_8;
  long lStack_6;
  
  uVar4 = (undefined2)((ulong)obj_ptr >> 0x10);
  uVar3 = (astruct_185 *)obj_ptr;
  lStack_6 = uVar3->field8_0x8;
  if (lStack_6 != arg5)
  {
    return -0x1;
  }
  local_c = uVar3->field9_0xc;
  uStack_8 = uVar3->field10_0x10;
  unpack_word_pair((void *)coords,(int *)((ulong)coords >> 0x10),&local_10);
  unpack_word_pair(&local_c,unaff_SS,&local_14);
  iVar1 = abs_u16_to_i16_logic(local_e - local_12);
  iVar2 = abs_u16_to_i16_logic(local_10 - local_14);
  return iVar2 + iVar1;
}



// Calculates the Manhattan distance between two simulator objects. Returns -1 if they
// are on different levels.

int __stdcall16far
Simulator_Calc_Manhattan_Distance_between_Objects_bd74
          (u16 arg1,u16 arg2,u32 obj1,u32 obj2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  int *unaff_SS;
  int local_1e;
  int local_1c;
  int local_1a;
  int local_18;
  undefined4 local_16;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined2 uStack_c;
  long lStack_a;
  long lStack_6;
  
  uVar3 = (undefined2)(obj2 >> 0x10);
  iVar1 = (int)obj2;
  lStack_6 = *(long *)(iVar1 + 0x8);
  uVar4 = (undefined2)(obj1 >> 0x10);
  iVar2 = (int)obj1;
  lStack_a = *(long *)(iVar2 + 0x8);
  if (lStack_a != lStack_6)
  {
    return -0x1;
  }
  local_10 = *(undefined4 *)(iVar1 + 0xc);
  uStack_c = *(undefined2 *)(iVar1 + 0x10);
  local_16 = *(undefined4 *)(iVar2 + 0xc);
  uStack_12 = *(undefined2 *)(iVar2 + 0x10);
  unpack_word_pair(&local_10,unaff_SS,&local_1a);
  unpack_word_pair(&local_16,unaff_SS,&local_1e);
  iVar1 = abs_u16_to_i16_logic(local_18 - local_1c);
  iVar2 = abs_u16_to_i16_logic(local_1a - local_1e);
  return iVar2 + iVar1;
}



void __stdcall16far UI_Build_Item_State4_Init_Timers_and_Flags_be80(void *param_1)
{
  int *piVar1;
  u16 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  int iVar6;
  
  pvVar4 = (void *)param_1;
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Map_Simulator_Object_Logic_bf22(param_1);
  if (*(int *)((int)pvVar4 + 0x12) == 0x5)
  {
    *(undefined2 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xa4) = 0x1e;
    *(undefined2 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xac) = 0x1;
    iVar6 = *(int *)((int)pvVar4 + 0xc);
    if (iVar6 == 0x1b)
    {
      *(undefined2 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa) = 0xa;
    }
    else if (iVar6 == 0x1c)
    {
      *(undefined2 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa) = 0xb;
    }
    else if (iVar6 == 0x1d)
    {
      *(undefined2 *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa) = 0xc;
    }
    pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    iVar6 = 0xc;
    pvVar3 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic
                               ((void *)*(undefined4 *)((int)(void *)pvVar3 + 0x2e));
    uVar2 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar3,iVar6);
    if (uVar2 != 0x0)
    {
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa);
      *piVar1 = *piVar1 + 0x1;
    }
    uVar2 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar3,0xe);
    if (uVar2 != 0x0)
    {
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa);
      *piVar1 = *piVar1 + 0x1;
    }
    uVar2 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar3,0x76);
    if (uVar2 != 0x0)
    {
      piVar1 = (int *)((int)*(undefined4 *)((int)pvVar4 + 0x14) + 0xaa);
      *piVar1 = *piVar1 + 0x1;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Per-turn update for build items in the construction state (4). Includes specialized
// logic for type 0xB buildings to manage resource migration and capacity scaling.

void __stdcall16far UI_Build_Item_OnTick_Construction_Update_c1b2(void *this_ptr)
{
  void *this;
  uint16_t uVar1;
  astruct_181 *uVar3;
  undefined2 uVar2;
  void *pvVar3;
  
  UI_Build_Item_OnTick_State4_Update_be9e(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_181 *)this_ptr;
  if (uVar3->field17_0x12 == 0x5)
  {
    if (uVar3->field12_0xc == 0xb)
    {
      Simulator_Entity_Migrate_Group8_Items_Logic_c652();
      pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8)
      ;
      this = (void *)pvVar3;
      UI_Object_Process_Item_Action_on_Collection_10_Wrapper
                (this,(int)((ulong)pvVar3 >> 0x10));
      uVar3->field34_0x24 = (int)this * 0x3;
      Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
      if ((int)g_ModeVersion_13AE < 0x3)
      {
        uVar1 = uVar3->field34_0x24;
        if ((int)uVar1 < 0x32)
        {
          uVar1 = 0x32;
        }
        uVar3->field34_0x24 = uVar1;
        return;
      }
    }
    else
    {
      uVar3->field34_0x24 = 0x64;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Process_Colony_Entity_Migration_Logic_c2fa(void *param_1)
{
  u32 this_ptr;
  uint16_t segment;
  uint16_t offset;
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  void *colony_ptr;
  void *pvVar5;
  long context;
  void *pvVar6;
  undefined2 uVar7;
  int iVar8;
  undefined2 local_54;
  undefined2 local_38;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(int *)((int)param_1 + 0xc) != 0xb)
  {
    UI_Build_Item_Sync_Simulator_Resource_Event_bd38(param_1);
    colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,
                            (u8 *)(u8 *)*(undefined4 *)((int)param_1 + 0x20));
    segment = (uint16_t)((ulong)colony_ptr >> 0x10);
    offset = (uint16_t)colony_ptr;
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uVar3 = (undefined2)((ulong)pvVar5 >> 0x10);
    iVar1 = (int)pvVar5;
    pvVar5 = (void *)*(undefined4 *)(iVar1 + 0x2e);
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    uVar4 = (undefined2)((ulong)pvVar5 >> 0x10);
    UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic
              (context,*(long *)((int)pvVar5 + 0x4));
    iVar2 = (int)*(undefined4 *)(offset + 0x1f6);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(offset + 0x1f6) >> 0x10);
    pvVar6 = Colony_Process_Special_Departure_Logic_3694(iVar2,uVar7,0x3,0x2,0x0);
    this_ptr = *(u32 *)((int)pvVar5 + 0x1f6);
    Colony_Resource_Batch_Add_355c(this_ptr,(u32)pvVar6);
    uVar4 = (undefined2)(this_ptr >> 0x10);
    local_38 = 0x0;
    do
    {
      iVar8 = local_38 * 0x2;
      *(undefined2 *)(iVar8 + (int)this_ptr + 0x174) =
           *(undefined2 *)(iVar8 + iVar2 + 0x174);
      *(undefined2 *)(iVar8 + (int)this_ptr + 0x180) =
           *(undefined2 *)(iVar8 + iVar2 + 0x180);
      local_38 += 0x1;
    } while (local_38 < 0x6);
    for (local_54 = 0x11; local_54 < 0x25; local_54 += 0x1)
    {
      if (0x0 < *(int *)(local_54 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e))
      {
        pvVar6 = Colony_Calc_Resource_Deficit_at_26_540a(colony_ptr,local_54);
        uVar4 = (undefined2)((ulong)PTR_DAT_1050_57c4_1050_580e >> 0x10);
        iVar2 = *(int *)(local_54 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e);
        iVar8 = local_54;
        if ((long)pvVar6 < (long)iVar2)
        {
          iVar2 = *(int *)(local_54 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e);
          iVar8 = 0x21;
        }
        Colony_Consume_Resource_Globally_52b8(colony_ptr,(long)iVar2,iVar8);
        iVar2 = *(int *)(local_54 * 0x2 + (int)PTR_DAT_1050_57c4_1050_580e);
        UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                  (iVar1,uVar3,iVar2,iVar2 >> 0xf,local_54);
        Colony_Add_to_Resource_Tracker_5694
                  (pvVar5,(long)*(int *)((int)PTR_DAT_1050_57c4_1050_580e +
                                        local_54 * 0x2),local_54);
      }
    }
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(iVar1,uVar3,0x2,0x0,0x1);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(iVar1,uVar3,0x2,0x0,0x2);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(iVar1,uVar3,0x2,0x0,0x3);
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(iVar1,uVar3,0x2,0x0,0x4);
    Simulator_Process_Population_Decrement_and_Cleanup_44d8(offset,segment,0x2,0x1);
    Simulator_Process_Population_Decrement_and_Cleanup_44d8(offset,segment,0x2,0x2);
    Simulator_Process_Population_Decrement_and_Cleanup_44d8(offset,segment,0x2,0x3);
    Simulator_Process_Population_Decrement_and_Cleanup_44d8(offset,segment,0x2,0x4);
    pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic((void *)pvVar5,*(long *)(offset + 0x4),0x7);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Validate_Entity_Adjacency_Minimum_1F_c52e
          (undefined4 param_1,void *param_2,undefined4 param_3,u8 *param_4)
{
  u16 uVar1;
  int iVar2;
  u16 unaff_SS;
  undefined4 *puVar3;
  void *obj_ptr;
  u16 arg2;
  void *coords;
  u8 *arg5;
  undefined1 local_32 [0x12];
  undefined4 local_20;
  void *local_1c;
  int local_18;
  u8 *local_16;
  undefined2 local_12;
  undefined2 local_10;
  undefined1 local_c [0x4];
  u16 local_8;
  u8 *local_6;
  
  arg2 = (u16)((ulong)param_1 >> 0x10);
  uVar1 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                    ((u16)param_1,arg2,param_2,(u16)param_3,
                     (u16)((ulong)param_3 >> 0x10),(u8 *)param_4);
  if (uVar1 != 0x0)
  {
    puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                       (_p_MapContext_5740,param_2,(long)param_4,
                        (undefined1 *)CONCAT22(unaff_SS,local_c));
    local_16 = (u8 *)*puVar3;
    local_20._3_1_ = (char)((ulong)local_16 >> 0x18);
    if (local_20._3_1_ == '\0')
    {
      local_20 = local_16;
      local_6 = local_16;
      local_8 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                          ((u16)param_1,arg2,param_2,(long)param_4);
      if ((local_8 != 0x4) && (local_8 != 0x0))
      {
        Helper_Identity_Function_bcae((undefined4 *)CONCAT22(unaff_SS,&local_20));
        Simulator_World_Iterator_ctor_init_dc52
                  ((undefined1 *)CONCAT22(unaff_SS,local_32),0x1,0x0,0x400);
        while( true )
        {
          local_1c = Simulator_World_Iterator_Get_Next_Entity_e4ec
                               ((undefined1 *)CONCAT22(unaff_SS,local_32));
          iVar2 = (int)((ulong)local_1c >> 0x10);
          if (iVar2 == 0x0 && (int)local_1c == 0x0)
          {
            return 0x1;
          }
          local_16 = (u8 *)*(undefined4 *)((int)local_1c + 0x10);
          arg5 = param_4;
          coords = param_2;
          obj_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                              (_p_SimulatorWorldContext,(u8 *)local_16);
          local_10 = (undefined2)((ulong)obj_ptr >> 0x10);
          local_12 = SUB42(obj_ptr,0x0);
          local_18 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                               ((u16)&local_20,unaff_SS,obj_ptr,coords,(long)arg5);
          if (local_18 < 0x0) break;
          if (local_18 < 0x1f)
          {
            PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6ae;
            return 0x0;
          }
        }
        PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
        return 0x0;
      }
      PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a resource migration for simulator entities belonging to group 8, moving
// items to the internal collection at offset 0xE.

void __stdcall16far Simulator_Entity_Migrate_Group8_Items_Logic_c652(void)
{
  void *puVar1;
  
  puVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
  UI_Object_Migrate_Items_to_Collection_at_Offset_E_Logic((void *)puVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Colony_Update_Property_Decrement_Logic_c7b0(void *param_1)
{
  undefined4 uVar1;
  int iVar2;
  u16 uVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar2 = *(int *)(iVar4 + 0x20);
  if (iVar2 != 0x0)
  {
    if (((iVar2 < 0x70) || (SBORROW2(iVar2,0x70))) || (0x1 < iVar2 + -0x70))
    {
      pvVar6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
      uVar1 = *(undefined4 *)((int)pvVar6 + 0x2e);
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x200));
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                         *(int *)(iVar4 + 0xc));
      uVar3 = Colony_Process_Turn_Decrement_Value_23e2
                        (pvVar6,iVar2,*(uint *)(iVar4 + 0x20));
      if (uVar3 != 0x0)
      {
        if (*(int *)(iVar4 + 0x20) == 0x1)
        {
          Colony_Set_Value_at_Index_25d8(pvVar6,0x64,*(u16 *)(iVar4 + 0x20));
          return;
        }
        *(undefined2 *)(iVar4 + 0x20) = 0x70;
      }
    }
  }
  return;
}
