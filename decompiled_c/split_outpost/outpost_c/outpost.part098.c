/*
 * Source: outpost.c
 * Chunk: 98/117
 * Original lines: 111848-113038
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized constructor for a Resource Change Item that initializes its value based
// on the sum of an item list.

u16 * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor2_SumList_666e
          (astruct_144 *param_1,long *param_2,u16 param_3,u8 *param_4)
{
  astruct_144 *uVar1;
  u16 *src;
  void *this_ptr;
  void *puVar4;
  void *lVar5;
  void *lVar4;
  
  src = (u16 *)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_144 *)param_1;
  *(char **)param_1 = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = param_4;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = param_2;
  uVar1->field8_0x12 = 0x0;
  uVar1->field9_0x14 = 0x0;
  uVar1->field11_0x18 = 0x0;
  uVar1->field10_0x16 = 0x0;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field18_0x20)[0x0] = 0x0;
  (&uVar1->field18_0x20)[0x1] = 0x0;
  uVar1->field20_0x24 = 0x0;
  uVar1->field21_0x26 = param_3;
  uVar1->field22_0x28 = 0x0;
  *(undefined2 *)param_1 = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)param_4);
  puVar4 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(this_ptr);
  uVar1->field3_0x4 = (u16 *)puVar4;
  uVar1->field4_0x6 = (int)((ulong)puVar4 >> 0x10);
  copy_struct_6bytes(&uVar1->field_0x1a,src);
                // WARNING: Load size is inaccurate
  lVar5 = (void *)Collection_Find_First_NonZero_Item_Logic
                            ((void *)uVar1->field3_0x4,
                             (u16)((ulong)uVar1->field3_0x4 >> 0x10));
  uVar1->field18_0x20 = (int)lVar5;
  uVar1->field19_0x22 = (int)((ulong)lVar5 >> 0x10);
  lVar4 = UI_Item_List_Sum_Values_Logic(param_2);
  uVar1->field10_0x16 = (int)lVar4;
  uVar1->field11_0x18 = (int)((ulong)lVar4 >> 0x10);
  return src;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor3_675c
          (void *this_ptr,void *amount,u16 type_id,u16 arg4,void *entity_id)
{
  astruct_143 *uVar1;
  void *src;
  void *this_ptr_00;
  void *puVar4;
  void *lVar4;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_143 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = entity_id;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = 0x0;
  uVar1->field8_0x12 = type_id;
  uVar1->field9_0x14 = 0x0;
  uVar1->field10_0x16 = amount;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field17_0x20)[0x0] = 0x0;
  (&uVar1->field17_0x20)[0x1] = 0x0;
  uVar1->field19_0x24 = 0x0;
  uVar1->field20_0x26 = arg4;
  uVar1->field21_0x28 = 0x0;
  *(undefined2 *)this_ptr = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)entity_id);
  puVar4 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(this_ptr_00);
  uVar1->field3_0x4 = (u16 *)puVar4;
  uVar1->field4_0x6 = (int)((ulong)puVar4 >> 0x10);
  copy_struct_6bytes(&uVar1->field_0x1a,src);
                // WARNING: Load size is inaccurate
  lVar4 = (void *)Collection_Find_First_NonZero_Item_Logic
                            ((void *)uVar1->field3_0x4,
                             (u16)((ulong)uVar1->field3_0x4 >> 0x10));
  uVar1->field17_0x20 = (int)lVar4;
  uVar1->field18_0x22 = (int)((ulong)lVar4 >> 0x10);
  return (u16 *)uVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far
Simulator_Resource_Change_Item_ctor_Flavor4_6838
          (void *this_ptr,void *amount,u16 type_id,u16 arg4,void *entity_id)
{
  astruct_142 *uVar1;
  void *src;
  void *this_ptr_00;
  void *puVar4;
  void *lVar4;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_142 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = NULL;
  (&uVar1->field3_0x4)[0x1] = NULL;
  uVar1->field5_0x8 = entity_id;
  uVar1->field6_0xc = 0x0;
  uVar1->field7_0xe = 0x0;
  uVar1->field8_0x12 = 0x0;
  uVar1->field9_0x14 = type_id;
  uVar1->field10_0x16 = amount;
  zero_init_struct_6bytes(&uVar1->field_0x1a);
  (&uVar1->field17_0x20)[0x0] = 0x0;
  (&uVar1->field17_0x20)[0x1] = 0x0;
  uVar1->field19_0x24 = 0x0;
  uVar1->field20_0x26 = arg4;
  uVar1->field21_0x28 = 0x0;
  *(undefined2 *)this_ptr = 0x78de;
  uVar1->field2_0x2 = 0x1038;
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)entity_id);
  puVar4 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(this_ptr_00);
  uVar1->field3_0x4 = (u16 *)puVar4;
  uVar1->field4_0x6 = (int)((ulong)puVar4 >> 0x10);
  copy_struct_6bytes(&uVar1->field_0x1a,src);
                // WARNING: Load size is inaccurate
  lVar4 = (void *)Collection_Find_First_NonZero_Item_Logic
                            ((void *)uVar1->field3_0x4,
                             (u16)((ulong)uVar1->field3_0x4 >> 0x10));
  uVar1->field17_0x20 = (int)(void *)lVar4;
  uVar1->field18_0x22 = (int)((ulong)lVar4 >> 0x10);
  return this_ptr;
}



// Internal destructor for Resource Change Items. Systematically frees associated list
// buffers and reverts vtables.

void __stdcall16far Simulator_Resource_Change_Item_dtor_Internal_6912(u16 *this_ptr)
{
  void *ptr;
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x78de;
  this_ptr[0x1] = 0x1038;
  if (this_ptr[0x3] != 0x0 || (undefined4 *)*(undefined4 **)(this_ptr + 0x2) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(undefined4 **)(this_ptr + 0x2)
    ;
    (*(code *)*puVar1)();
  }
  ptr = (void *)this_ptr[0x7];
  if (this_ptr[0x8] != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(this_ptr[0x8],ptr));
    free_if_not_null(ptr);
  }
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



// Calculates the numeric impact or value of a change item, either by summing sub-lists
// or applying type-specific multipliers.

int __stdcall16far
Simulator_Resource_Change_Item_Calculate_Value_Logic_6984(void *this_ptr)
{
  u16 uVar1;
  astruct_141 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_141 *)this_ptr;
  if (uVar2->field12_0xc != 0x0)
  {
    uVar1 = Helper_Returns_1_Stub_c3ae();
    return uVar1;
  }
  if (uVar2->field13_0xe != NULL)
  {
    pvVar4 = UI_Item_List_Sum_Values_Logic(uVar2->field13_0xe);
    return (int)(void *)pvVar4;
  }
  if (uVar2->field14_0x12 == 0x0)
  {
    if (uVar2->field15_0x14 == 0x0)
    {
      return 0x0;
    }
    uVar1 = Map_Entity_Type_to_Specific_ID_Helper_c42e(uVar2->field15_0x14);
  }
  else
  {
    uVar1 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(uVar2->field14_0x12);
  }
  return (int)uVar2->field16_0x16 * uVar1;
}



void __stdcall16far
Simulator_Resource_Change_Item_Clear_Status_Flag_69fe(void *this_ptr)
{
  *(undefined2 *)((int)(void *)this_ptr + 0x28) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes the scheduling of sub-items for a TypeD88E construction manager. Iterates
// through its managed entities, consumes resources from the construction manager's
// list, and schedules future spawns (d180). Manages a turn-based budget at offset 0x24.

void __stdcall16far
UI_Build_Item_TypeD88E_Process_SubItem_Scheduling_6a0e(void *this_ptr)
{
  int iVar1;
  u16 uVar2;
  astruct_140 *uVar4;
  void *src;
  undefined2 unaff_SS;
  long lVar3;
  void *pvVar4;
  long local_10;
  undefined1 local_c [0x6];
  void *pvStack_6;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_140 *)this_ptr;
  if (uVar4->field33_0x28 == 0x0)
  {
    pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar4->field29_0x20);
    uVar4->field30_0x24 = uVar4->field30_0x24 + 0x3c;
    zero_init_struct_6bytes(local_c);
    while( true )
    {
      iVar1 = Simulator_Map_Find_Neighbor_Entity_Logic_6d24
                        (this_ptr,(long *)CONCAT22(unaff_SS,&local_10),
                         (undefined1 *)CONCAT22(unaff_SS,local_c),(int)pvStack_6,
                         (u16)((ulong)pvStack_6 >> 0x10));
      if (iVar1 == 0x0)
      {
        lVar3 = Collection_Find_First_NonZero_Item_Logic
                          ((void *)(void *)uVar4->field4_0x4,
                           (u16)((ulong)uVar4->field4_0x4 >> 0x10));
        if ((int)((ulong)lVar3 >> 0x10) == 0x0 && (int)lVar3 == 0x0)
        {
          pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar4->field29_0x20);
          Simulator_Process_Resource_Delivery_to_Site_7356(this_ptr,pvVar4);
          return;
        }
        pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvStack_6);
        iVar1 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)pvVar4 + 0xc));
        if (iVar1 != 0x0)
        {
          uVar4->field33_0x28 = 0x1;
          uVar4->field29_0x20 = lVar3;
          return;
        }
        uVar4->field29_0x20 = lVar3;
        pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                              (_p_SimulatorWorldContext,*(u8 **)&uVar4->field29_0x20);
      }
      uVar2 = Simulator_Get_Entity_Turn_Cost_by_Type_6e1a((u16)uVar4,(u16)src,&local_10)
      ;
      if ((int)uVar4->field30_0x24 < (int)uVar2) break;
      uVar4->field30_0x24 = uVar4->field30_0x24 - uVar2;
      copy_struct_6bytes(&uVar4->field_0x1a,src);
    }
  }
  return;
}



// Validates if all core status fields (0xC, 0xE, 0x12, 0x14) are zero and clears the
// secondary flag at 0x16 if so. Returns 1 if 0x16 is now zero.

u16 __stdcall16far UI_Component_Check_and_Clear_Status_Flags_6b3c(void *this_ptr)
{
  astruct_139 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_139 *)this_ptr;
  if ((((uVar1->field12_0xc == 0x0) && (uVar1->field14_0x12 == 0x0)) &&
      (uVar1->field15_0x14 == 0x0)) &&
     ((uVar1->field13_0xe == 0x0 && (uVar1->field16_0x16 != 0x0))))
  {
    uVar1->field16_0x16 = 0x0;
  }
  if (uVar1->field16_0x16 == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Wrapper that retrieves entity data from the map using the coordinate sub-list
// associated with global resource 0x2F. Equivalent to 1030:B718.

void __stdcall16far
Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
          (u16 arg1,u16 arg2,void *coords,void *out_data)
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



// Increments or decrements the X coordinate (offset 0x1A), then fetches the entity at
// the new world location.

void __stdcall16far
Simulator_Map_Shift_Coord_and_Fetch_Entity_X_6bd4
          (void *this_ptr,void *coords,void *out_data,int delta)
{
  u16 uStack_4;
  
  copy_struct_6bytes((void *)coords,(void *)((ulong)coords >> 0x10));
  if (delta < 0x0)
  {
    uStack_4 = *(int *)coords - 0x1;
  }
  else
  {
    uStack_4 = *(int *)coords + 0x1;
  }
  *(u16 *)coords = uStack_4;
  Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
            ((u16)this_ptr,(u16)((ulong)this_ptr >> 0x10),coords,out_data);
  return;
}



// Increments or decrements the Y coordinate (offset 0x1C), then fetches the entity at
// the new world location.

void __stdcall16far
Simulator_Map_Shift_Coord_and_Fetch_Entity_Y_6c1c
          (void *this_ptr,void *coords,void *out_data,int delta)
{
  void *dest;
  void *src;
  undefined2 uStack_4;
  
  dest = (void *)coords;
  src = (void *)((ulong)coords >> 0x10);
  copy_struct_6bytes(dest,src);
  if (delta < 0x0)
  {
    uStack_4 = *(int *)((int)dest + 0x2) + -0x1;
  }
  else
  {
    uStack_4 = *(int *)((int)dest + 0x2) + 0x1;
  }
  *(int *)((int)dest + 0x2) = uStack_4;
  Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
            ((u16)(void *)this_ptr,(u16)((ulong)this_ptr >> 0x10),coords,out_data);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles coordinate shifts specifically for building types 0x47 and 0x6A. Modifies
// coordinates and fetches the target entity.

u16 __stdcall16far
Simulator_Map_Shift_Coord_Specialized_Fetch_6c68
          (void *this_ptr,void *coords,void *out_data,int delta)
{
  int iVar1;
  astruct_138 *uVar1;
  u16 arg2;
  long lVar2;
  u8 *puVar3;
  void *pvVar4;
  void *src;
  int iStack_1e;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  uVar1 = (astruct_138 *)this_ptr;
  arg2 = (u16)((ulong)this_ptr >> 0x10);
  src = (void *)((ulong)coords >> 0x10);
  copy_struct_6bytes((void *)coords,src);
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(undefined1 *)CONCAT22(arg2,&uVar1->field_0x1a)
                      ,(void *)*(undefined4 *)((int)lVar2 + 0x20));
  if ((int)((ulong)puVar3 >> 0x10) != 0x0 || (u8 *)puVar3 != NULL)
  {
    pvVar4 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar3);
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar4);
    iVar1 = *(int *)((int)(void *)pvVar4 + 0xc);
    if ((iVar1 == 0x47) || (iVar1 == 0x6a))
    {
      if (delta < 0x0)
      {
        iStack_1e = uVar1->field30_0x1e + -0x1;
      }
      else
      {
        iStack_1e = uVar1->field30_0x1e + 0x1;
      }
      *(int *)((int)(void *)coords + 0x4) = iStack_1e;
      Simulator_Map_Get_Entity_via_Resource2F_SubList_6b88
                ((u16)uVar1,arg2,coords,out_data);
      uStack_4 = 0x1;
    }
  }
  return uStack_4;
}



// Calculates the directional difference between two 3-word coordinate structures and
// triggers the appropriate shift-and-fetch routine (6bd4, 6c1c, or 6c68) to find a
// neighboring entity.

int __stdcall16far
Simulator_Map_Find_Neighbor_Entity_Logic_6d24
          (void *this_ptr,void *out_data,void *coords,int arg4,u16 arg5)
{
  u16 uVar1;
  int *unaff_SS;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  *(undefined4 *)out_data = 0x0;
  local_8 = *(undefined4 *)(arg4 + 0xc);
  uStack_4 = *(undefined2 *)(arg4 + 0x10);
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  unpack_3word_struct((void *)((int)(void *)this_ptr + 0x1a),this_ptr._2_2_,&local_14,
                      unaff_SS);
  local_c -= local_12;
  local_e -= local_14;
  local_a -= local_10;
  if (((local_a == 0x0) && (local_c == 0x0)) && (local_e == 0x0))
  {
    return 0x0;
  }
  if ((local_c != 0x0) || (local_a == 0x0))
  {
    if ((local_a == 0x0) && (local_c != 0x0))
    {
      Simulator_Map_Shift_Coord_and_Fetch_Entity_Y_6c1c
                (this_ptr,coords,out_data,local_c);
      return 0x1;
    }
    if (((local_a == 0x0) && (local_c == 0x0)) && (local_e != 0x0))
    {
      uVar1 = Simulator_Map_Shift_Coord_Specialized_Fetch_6c68
                        (this_ptr,coords,out_data,local_e);
      if (uVar1 != 0x0)
      {
        return 0x1;
      }
      return 0x0;
    }
  }
  Simulator_Map_Shift_Coord_and_Fetch_Entity_X_6bd4(this_ptr,coords,out_data,local_a);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps a simulator entity's type ID to its turn-based operational or construction cost
// (e.g. 20, 60, 120, 240, or 15). Returns 0xFFFF for unknown types.

u16 __stdcall16far
Simulator_Get_Entity_Turn_Cost_by_Type_6e1a(u16 arg1,u16 arg2,long *entity_id)
{
  int iVar1;
  u16 uVar2;
  void *this_ptr;
  undefined2 in_stack_0000000a;
  char cStack_15;
  int iStack_4;
  
  iStack_4 = 0x0;
  if ((*_entity_id == 0x0) && ((int)*_entity_id == 0x0))
  {
    return 0x1;
  }
  cStack_15 = (char)((uint)*(undefined2 *)((int)entity_id + 0x2) >> 0x8);
  if (cStack_15 == '\0')
  {
    iStack_4 = (int)*_entity_id;
    goto switchD_1038_6eab_default;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)(u8 *)*_entity_id);
  uVar2 = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  if ((int)uVar2 < 0xa)
  {
    switch(uVar2)
    {
    case 0x1:
      iStack_4 = 0x1;
      break;
    case 0x2:
    case 0x6:
      iStack_4 = 0x2;
      break;
    case 0x3:
    case 0x7:
      iStack_4 = 0x3;
      break;
    case 0x4:
    case 0x8:
      iStack_4 = 0x4;
      break;
    case 0x5:
    case 0x9:
      goto switchD_1038_6eab_caseD_5;
    }
  }
  else
  {
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),uVar2);
    if (iVar1 != 0x0)
    {
      iStack_4 = 0xa;
      goto switchD_1038_6eab_default;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),uVar2);
    if ((iVar1 != 0x0) || (uVar2 == 0x3f))
    {
      iStack_4 = 0xb;
      goto switchD_1038_6eab_default;
    }
switchD_1038_6eab_caseD_5:
    iStack_4 = 0x5;
  }
switchD_1038_6eab_default:
  switch(iStack_4)
  {
  case 0x1:
    return 0x14;
  case 0x2:
  case 0x7:
    return 0x3c;
  case 0x3:
  case 0x8:
    return 0x78;
  case 0x4:
  case 0x9:
    return 0xf0;
  case 0x5:
  case 0x6:
    return 0xf;
  case 0xa:
    uVar2 = 0xc;
    break;
  case 0xb:
    uVar2 = 0xa;
    break;
  default:
    uVar2 = 0xffff;
  }
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes resource additions or unit spawns for a colony. For simple components,
// directly updates lists or triggers batch spawns. For complex components, iterates
// through sub-lists and aggregates deltas.

void __stdcall16far
Colony_Process_Resource_Allocation_Logic_6f5a(void *this_ptr,void *colony_ptr)
{
  astruct_137 *paVar1;
  u16 uVar3;
  int in_DX;
  astruct_135 *uVar2;
  astruct_137 *iVar2;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined4 uStack_14;
  astruct_137 *paStack_10;
  uint uStack_c;
  undefined2 local_a;
  undefined2 uStack_8;
  undefined2 local_6;
  uint uStack_4;
  astruct_136 *puVar2;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_135 *)this_ptr;
  if (uVar2->field13_0xe == NULL)
  {
    if (uVar2->field12_0xc != 0x0)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (colony_ptr,(int)uVar2->field16_0x16,
                 (int)((ulong)uVar2->field16_0x16 >> 0x10),uVar2->field12_0xc);
      return;
    }
    if (uVar2->field14_0x12 != 0x0)
    {
      UI_Component_Batch_Spawn_SubEntities_Logic_7c50
                (colony_ptr,(int)uVar2->field16_0x16,
                 (int)((ulong)uVar2->field16_0x16 >> 0x10),uVar2->field14_0x12);
      return;
    }
    paVar1 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
    uStack_14 = (astruct_137 *)CONCAT22(in_DX,paVar1);
    if (in_DX == 0x0 && paVar1 == NULL)
    {
      paStack_10 = NULL;
    }
    else
    {
      *(char **)uStack_14 = (char *)s_1_1050_389a;
      *(undefined2 *)&paVar1->field_0x2 = 0x1008;
      *(undefined2 *)&paVar1->field_0x4 = 0x0;
      *(undefined2 *)&paVar1->field_0x6 = 0x0;
      paVar1->field8_0x8 = 0x0;
      paVar1->field9_0xa = 0x0;
      paVar1->field10_0xc = 0x0;
      *(undefined2 *)uStack_14 = 0x56ce;
      *(undefined2 *)&paVar1->field_0x2 = 0x1018;
      paStack_10 = uStack_14;
    }
    uVar5 = (undefined2)((ulong)paStack_10 >> 0x10);
    iVar2 = (astruct_137 *)paStack_10;
    iVar2->field8_0x8 = uVar2->field15_0x14;
    iVar2->field9_0xa = (int)uVar2->field16_0x16;
    uVar3 = Map_Entity_Type_to_Specific_ID_Helper_c42e(uVar2->field15_0x14);
    iVar2->field10_0xc = uVar3 * iVar2->field9_0xa;
    UI_Component_Upsert_Resource_SubObject_6a2c(colony_ptr,iVar2,uVar5);
  }
  else
  {
    uStack_4 = (uint)((u32 *)uVar2->field13_0xe)[0x1];
    for (uStack_c = 0x0; uStack_c < uStack_4; uStack_c += 0x1)
    {
      UI_Item_List_Get_Item_at_Index_Logic
                (uVar2->field13_0xe,(undefined2 *)CONCAT22(unaff_SS,&local_a),
                 (undefined2 *)CONCAT22(unaff_SS,&local_6),uStack_c);
      if (CONCAT22(uStack_8,local_a) != 0x0)
      {
        UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                  (colony_ptr,local_a,uStack_8,local_6);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// High-level routine for processing complex resource deltas. Instantiates
// Resource_Change_Items (vtable 0x56CE), calculates total impact based on entity types,
// and upserts them into the colony's resource sub-objects.

void __stdcall16far
Colony_Process_Complex_Resource_Delta_Logic_709c(void *this_ptr,void *colony_ptr)
{
  u16 uVar1;
  undefined2 *puVar5;
  int iVar6;
  int in_DX;
  astruct_130 *uVar2;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  undefined2 *puStack_28;
  undefined4 uStack_14;
  undefined2 *puStack_10;
  uint uStack_c;
  long local_a;
  undefined2 local_6;
  uint uStack_4;
  astruct_131 *puVar2;
  astruct_132 *iVar1;
  astruct_133 *puVar3;
  astruct_134 *puVar4;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_130 *)this_ptr;
  if (*(int *)((int)&uVar2->field13_0xe + 0x2) == 0x0 &&
      *(int *)&uVar2->field13_0xe == 0x0)
  {
    if (uVar2->field12_0xc == 0x0)
    {
      if (uVar2->field14_0x12 == 0x0)
      {
        if (uVar2->field15_0x14 == 0x0)
        {
          return;
        }
        puVar5 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_14 = (undefined2 *)CONCAT22(in_DX,puVar5);
        if (in_DX == 0x0 && puVar5 == NULL)
        {
          puStack_28 = NULL;
        }
        else
        {
          *uStack_14 = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x0;
          puVar5[0x3] = 0x0;
          puVar5[0x4] = 0x0;
          puVar5[0x5] = 0x0;
          puVar5[0x6] = 0x0;
          *uStack_14 = 0x56ce;
          puVar5[0x1] = 0x1018;
          puStack_28 = uStack_14;
        }
        uVar8 = (undefined2)((ulong)puStack_28 >> 0x10);
        ((undefined2 *)puStack_28)[0x4] = uVar2->field15_0x14;
        ((undefined2 *)puStack_28)[0x5] = (int)uVar2->field16_0x16;
        uVar1 = Map_Entity_Type_to_Specific_ID_Helper_c42e(uVar2->field15_0x14);
      }
      else
      {
        UI_Component_Batch_Spawn_SubEntities_Logic_7c50
                  (colony_ptr,(int)uVar2->field16_0x16,
                   (int)((ulong)uVar2->field16_0x16 >> 0x10),uVar2->field14_0x12);
        puVar5 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_14 = (undefined2 *)CONCAT22(in_DX,puVar5);
        if (in_DX == 0x0 && puVar5 == NULL)
        {
          puStack_28 = NULL;
        }
        else
        {
          *uStack_14 = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x0;
          puVar5[0x3] = 0x0;
          puVar5[0x4] = 0x0;
          puVar5[0x5] = 0x0;
          puVar5[0x6] = 0x0;
          *uStack_14 = 0x56ce;
          puVar5[0x1] = 0x1018;
          puStack_28 = uStack_14;
        }
        uVar8 = (undefined2)((ulong)puStack_28 >> 0x10);
        ((undefined2 *)puStack_28)[0x3] = uVar2->field14_0x12;
        ((undefined2 *)puStack_28)[0x5] = (int)uVar2->field16_0x16;
        uVar1 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(uVar2->field14_0x12);
      }
      uVar8 = (undefined2)((ulong)puStack_28 >> 0x10);
      puVar5 = (undefined2 *)puStack_28;
      iVar6 = uVar1 * puVar5[0x5];
    }
    else
    {
      puVar5 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
      uStack_14 = (undefined2 *)CONCAT22(in_DX,puVar5);
      if (in_DX == 0x0 && puVar5 == NULL)
      {
        puStack_28 = NULL;
      }
      else
      {
        *uStack_14 = (char *)s_1_1050_389a;
        puVar5[0x1] = 0x1008;
        puVar5[0x2] = 0x0;
        puVar5[0x3] = 0x0;
        puVar5[0x4] = 0x0;
        puVar5[0x5] = 0x0;
        puVar5[0x6] = 0x0;
        *uStack_14 = 0x56ce;
        puVar5[0x1] = 0x1018;
        puStack_28 = uStack_14;
      }
      uVar8 = (undefined2)((ulong)puStack_28 >> 0x10);
      puVar5 = (undefined2 *)puStack_28;
      puVar5[0x2] = uVar2->field12_0xc;
      iVar6 = (int)uVar2->field16_0x16;
      puVar5[0x5] = iVar6;
    }
    puVar5[0x6] = iVar6;
    UI_Component_Upsert_Resource_SubObject_6a2c(colony_ptr,puVar5,uVar8);
  }
  else
  {
    uStack_4 = (uint)((u32 *)uVar2->field13_0xe)[0x1];
    for (uStack_c = 0x0; uStack_c < uStack_4; uStack_c += 0x1)
    {
      UI_Item_List_Get_Item_at_Index_Logic
                (uVar2->field13_0xe,(long *)CONCAT22(unaff_SS,&local_a),
                 (undefined2 *)CONCAT22(unaff_SS,&local_6),uStack_c);
      if (local_a != 0x0)
      {
        puVar5 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_14 = (undefined2 *)CONCAT22(in_DX,puVar5);
        if (in_DX == 0x0 && puVar5 == NULL)
        {
          puStack_10 = NULL;
        }
        else
        {
          *uStack_14 = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x0;
          puVar5[0x3] = 0x0;
          puVar5[0x4] = 0x0;
          puVar5[0x5] = 0x0;
          puVar5[0x6] = 0x0;
          *uStack_14 = 0x56ce;
          puVar5[0x1] = 0x1018;
          puStack_10 = uStack_14;
        }
        uVar8 = (undefined2)((ulong)puStack_10 >> 0x10);
        puVar5 = (undefined2 *)puStack_10;
        puVar5[0x2] = local_6;
        puVar5[0x5] = (undefined2)local_a;
        uVar1 = Helper_Returns_1_Stub_c3ae();
        in_DX = (int)((ulong)uVar1 * (ulong)(uint)puVar5[0x5] >> 0x10);
        puVar5[0x6] = (int)((ulong)uVar1 * (ulong)(uint)puVar5[0x5]);
        UI_Component_Upsert_Resource_SubObject_6a2c(colony_ptr,puVar5,uVar8);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates construction or efficiency deficits for a building site and delivers
// resources from the colony's supply. Handles specialized TypeD88E sub-item management
// and capacity scaling.

void __stdcall16far
Simulator_Process_Resource_Delivery_to_Site_7356(void *this_ptr,void *target_ptr)
{
  int iVar1;
  astruct_128 *paVar2;
  u16 uVar3;
  void *ptr;
  uint uVar5;
  astruct_126 *uVar4;
  astruct_128 *puVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  void *pvVar8;
  void *pvVar9;
  astruct_128 *paStack_32;
  undefined4 uStack_1e;
  astruct_128 *paStack_1a;
  astruct_127 *puVar4;
  astruct_129 *iVar2;
  
  pvVar8 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(target_ptr);
  uVar7 = (undefined2)((ulong)pvVar8 >> 0x10);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)((int)(void *)pvVar8 + 0xc));
  uVar4 = (astruct_126 *)this_ptr;
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  if (iVar1 == 0x0)
  {
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                       *(int *)((int)(void *)pvVar8 + 0xc));
    if (iVar1 == 0x0)
    {
code_r0x10387545:
      Colony_Process_Resource_Allocation_Logic_6f5a(this_ptr,target_ptr);
      goto LAB_1038_7549;
    }
    if ((uVar4->field9_0xc != 0x0) || (*(long *)&uVar4->field_0xe != 0x0))
    {
      pvVar8 = UI_Construction_Item_Calculate_Capacity_Remaining_45e2(pvVar8);
      uVar5 = (uint)((ulong)pvVar8 >> 0x10);
      if ((uVar4->field16_0x18 <= uVar5) &&
         ((uVar4->field16_0x18 < uVar5 ||
          ((void *)uVar4->field15_0x16 <= (void *)pvVar8)))) goto code_r0x10387545;
    }
  }
  else
  {
    pvVar9 = UI_Build_Item_Calculate_Efficiency_Remaining_Logic(pvVar8);
    uVar5 = (uint)((ulong)pvVar9 >> 0x10);
    if ((uVar4->field16_0x18 <= uVar5) &&
       ((uVar4->field16_0x18 < uVar5 || ((void *)uVar4->field15_0x16 <= (void *)pvVar9))
       ))
    {
      if (uVar4->field13_0x12 == 0x0)
      {
        if (uVar4->field14_0x14 == 0x0) goto LAB_1038_74e0;
        paVar2 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_1e = (astruct_128 *)CONCAT22(uVar5,paVar2);
        if (uVar5 == 0x0 && paVar2 == NULL)
        {
          paStack_32 = NULL;
        }
        else
        {
          *(char **)uStack_1e = (char *)s_1_1050_389a;
          *(undefined2 *)&paVar2->field_0x2 = 0x1008;
          *(undefined2 *)&paVar2->field_0x4 = 0x0;
          paVar2->field6_0x6 = 0x0;
          paVar2->field7_0x8 = 0x0;
          paVar2->field8_0xa = 0x0;
          paVar2->field9_0xc = 0x0;
          *(undefined2 *)uStack_1e = 0x56ce;
          *(undefined2 *)&paVar2->field_0x2 = 0x1018;
          paStack_32 = uStack_1e;
        }
        uVar7 = (undefined2)((ulong)paStack_32 >> 0x10);
        puVar5 = (astruct_128 *)paStack_32;
        puVar5->field7_0x8 = uVar4->field14_0x14;
        puVar5->field8_0xa = uVar4->field15_0x16;
        uVar3 = Map_Entity_Type_to_Specific_ID_Helper_c42e(uVar4->field14_0x14);
      }
      else
      {
        paVar2 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
        uStack_1e = (astruct_128 *)CONCAT22(uVar5,paVar2);
        if (uVar5 == 0x0 && paVar2 == NULL)
        {
          paStack_1a = NULL;
        }
        else
        {
          *(char **)uStack_1e = (char *)s_1_1050_389a;
          *(undefined2 *)&paVar2->field_0x2 = 0x1008;
          *(undefined2 *)&paVar2->field_0x4 = 0x0;
          paVar2->field6_0x6 = 0x0;
          paVar2->field7_0x8 = 0x0;
          paVar2->field8_0xa = 0x0;
          paVar2->field9_0xc = 0x0;
          *(undefined2 *)uStack_1e = 0x56ce;
          *(undefined2 *)&paVar2->field_0x2 = 0x1018;
          paStack_1a = uStack_1e;
        }
        uVar7 = (undefined2)((ulong)paStack_1a >> 0x10);
        puVar5 = (astruct_128 *)paStack_1a;
        puVar5->field6_0x6 = uVar4->field13_0x12;
        puVar5->field8_0xa = uVar4->field15_0x16;
        uVar3 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(uVar4->field13_0x12);
      }
      puVar5->field9_0xc = uVar3 * puVar5->field8_0xa;
      UI_Item_List_Upsert_Item_by_Metadata_Logic_6408
                (pvVar8,(astruct_128 *)CONCAT22(uVar7,puVar5));
      goto LAB_1038_7549;
    }
  }
LAB_1038_74e0:
  Colony_Process_Complex_Resource_Delta_Logic_709c(this_ptr,target_ptr);
LAB_1038_7549:
  pvVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar4->field8_0x8);
  UI_Component_Set_Cap_Value_Logic_6c4c
            (pvVar8,*(int *)((int)(void *)pvVar8 + 0x34) + uVar4->field29_0x26);
  uVar4->field9_0xc = 0x0;
  uVar4->field13_0x12 = 0x0;
  uVar4->field14_0x14 = 0x0;
  (&uVar4->field15_0x16)[0x0] = 0x0;
  (&uVar4->field15_0x16)[0x1] = 0x0;
  ptr = (void *)*(void **)&uVar4->field_0xe;
  if (uVar4->field12_0x10 != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar4->field12_0x10,ptr));
    free_if_not_null(ptr);
  }
  *(undefined4 *)&uVar4->field_0xe = 0x0;
  return;
}



// Serializes a specialized resource list and its associated metadata (ID, counts, map
// pointers) to a save file. Used for complex turn-state tracking.

u16 __stdcall16far
Simulator_Resource_List_Save_to_File_Logic_75ca(astruct_125 *param_1,void *param_2)
{
  int in_AX;
  int iVar1;
  astruct_125 *uVar2;
  undefined2 uVar3;
  void *unaff_SS;
  void *this;
  void *container_obj;
  u32 local_10 [0x2];
  u32 local_8;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_125 *)param_1;
  this = (void *)param_2;
  container_obj = (void *)((ulong)param_2 >> 0x10);
  file_context_serialize_contained_list_logic(this,container_obj);
  if (in_AX != 0x0)
  {
    local_10[0x0] = uVar2->field5_0x8;
    iVar1 = file_write_check((long)param_2,local_10,unaff_SS);
    if (iVar1 != 0x0)
    {
      iVar1 = file_context_serialize_map_logic(this,container_obj);
      if (iVar1 != 0x0)
      {
        local_8._0_2_ = uVar2->field6_0xc;
        iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
        if (iVar1 != 0x0)
        {
          local_8._0_2_ = uVar2->field8_0x12;
          iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
          if (iVar1 != 0x0)
          {
            local_8 = CONCAT22(local_8._2_2_,uVar2->field9_0x14);
            iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
            if (iVar1 != 0x0)
            {
              local_8 = uVar2->field10_0x16;
              iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
              if (iVar1 != 0x0)
              {
                iVar1 = file_context_serialize_3word_struct_logic(this,container_obj);
                if (iVar1 != 0x0)
                {
                  local_8 = uVar2->field17_0x20;
                  iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                  if (iVar1 != 0x0)
                  {
                    local_8._0_2_ = uVar2->field18_0x24;
                    iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                    if (iVar1 != 0x0)
                    {
                      local_8._0_2_ = uVar2->field19_0x26;
                      iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                      if (iVar1 != 0x0)
                      {
                        local_8 = CONCAT22(local_8._2_2_,uVar2->field20_0x28);
                        iVar1 = file_write_check((long)param_2,&local_8,unaff_SS);
                        if (iVar1 != 0x0)
                        {
                          return 0x1;
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
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes a specialized resource list and restores its state from a save file.
// Handles ID re-mapping for cross-version compatibility.

u16 __stdcall16far
Simulator_Resource_List_Load_from_File_Logic_774e(void *arg1,void *file_ctx)
{
  void *pvVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  void *this;
  long *map_ptr;
  undefined2 local_8;
  int local_6;
  undefined2 local_4;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  pvVar1 = (void *)arg1;
  handle_wrapper = (void *)((ulong)arg1 >> 0x10);
  this = (void *)file_ctx;
  map_ptr = (long *)((ulong)file_ctx >> 0x10);
  iVar2 = file_context_deserialize_resource_object_logic(this,map_ptr);
  if (((((iVar2 != 0x0) &&
        (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x8),
                                 handle_wrapper), iVar2 != 0x0)) &&
       (iVar2 = file_context_deserialize_map_logic(this,map_ptr), iVar2 != 0x0)) &&
      ((((iVar2 = file_read_check((long)file_ctx,&local_4,unaff_SS), iVar2 != 0x0 &&
         (iVar2 = file_read_check((long)file_ctx,&local_6,unaff_SS), iVar2 != 0x0)) &&
        ((iVar2 = file_read_check((long)file_ctx,&local_8,unaff_SS), iVar2 != 0x0 &&
         ((iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x16),
                                   handle_wrapper), iVar2 != 0x0 &&
          (iVar2 = file_context_deserialize_3word_struct_logic(this,map_ptr),
          iVar2 != 0x0)))))) &&
       (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x20),
                                handle_wrapper), iVar2 != 0x0)))) &&
     (((iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x24),
                                handle_wrapper), iVar2 != 0x0 &&
       (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x26),
                                handle_wrapper), iVar2 != 0x0)) &&
      (iVar2 = file_read_check((long)file_ctx,(void *)((int)pvVar1 + 0x28),
                               handle_wrapper), iVar2 != 0x0))))
  {
    *(undefined2 *)((int)pvVar1 + 0xc) = local_4;
    iVar2 = file_context_remap_id_by_version_logic((int)this,(int)map_ptr,local_6);
    *(int *)((int)pvVar1 + 0x12) = iVar2;
    *(undefined2 *)((int)pvVar1 + 0x14) = local_8;
    return 0x1;
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



u16 * __stdcall16far
Simulator_Resource_Change_Item_dtor_Scalar_Deleting_78b8
          (u16 *param_1,u16 param_2,byte param_3)
{
  Simulator_Resource_Change_Item_dtor_Internal_6912(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}
