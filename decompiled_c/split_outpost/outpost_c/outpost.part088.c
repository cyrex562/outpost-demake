/*
 * Source: outpost.c
 * Chunk: 88/117
 * Original lines: 100282-101456
 * Boundaries: top-level declarations/definitions only
 */




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



// Serializes a complex list structure and its linked items to a save file. Iterates
// through the list and triggers per-item serialization.

u16 __stdcall16far
Simulator_Complex_List_Save_to_File_Logic_b768(void *this_ptr,void *file_ctx)
{
  int iVar1;
  u16 uVar2;
  astruct_187 *uVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  undefined2 local_22 [0x4];
  undefined1 local_1a [0xa];
  u32 local_10;
  undefined4 uStack_c;
  u16 local_8 [0x3];
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_187 *)this_ptr;
  local_10 = uVar3->field4_0x4;
  iVar1 = file_write_check((long)file_ctx,&local_10,unaff_SS);
  if ((iVar1 != 0x0) &&
     (iVar1 = file_context_serialize_3word_struct_logic
                        ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10)),
     iVar1 != 0x0))
  {
    local_8[0x0] = uVar3->field11_0xe;
    iVar1 = file_write_check((long)file_ctx,local_8,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_22[0x0] = *(undefined2 *)((int)uVar3->field12_0x10 + 0x8);
      local_10 = CONCAT22(local_10._2_2_,local_22[0x0]);
      iVar1 = file_write_check((long)file_ctx,local_22,unaff_SS);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      init_long_pair(local_1a,uVar3->field12_0x10);
      do
      {
        lVar5 = get_next_list_item(local_1a);
        if (lVar5 == 0x0)
        {
          return 0x1;
        }
        uStack_c = lVar5;
        uVar2 = Simulator_Resource_List_Save_to_File_Logic_75ca
                          ((int)lVar5,(int)((ulong)lVar5 >> 0x10),file_ctx);
      } while (uVar2 != 0x0);
      return 0x0;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes a complex list structure and its linked items from a save file.
// Reconstructs the list hierarchy and performs object re-mapping.

u16 __stdcall16far
Simulator_Complex_List_Load_from_File_Logic_b836(void *this_ptr,void *file_ctx)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  u16 uVar5;
  void *handle_wrapper;
  int in_DX;
  undefined2 uVar6;
  int extraout_DX;
  void *unaff_SS;
  void *pvVar7;
  void *file_ctx_00;
  int local_12 [0x7];
  undefined2 local_4;
  
  pvVar2 = (void *)this_ptr;
  handle_wrapper = (void *)((ulong)this_ptr >> 0x10);
  iVar3 = file_read_check((long)file_ctx,(void *)((int)pvVar2 + 0x4),handle_wrapper);
  if (iVar3 != 0x0)
  {
    iVar3 = file_context_deserialize_3word_struct_logic
                      ((void *)file_ctx,(void *)((ulong)file_ctx >> 0x10));
    if ((iVar3 != 0x0) &&
       (iVar3 = file_read_check((long)file_ctx,&local_4,unaff_SS), iVar3 != 0x0))
    {
      *(undefined2 *)((int)pvVar2 + 0xe) = local_4;
      iVar3 = file_read_check((long)file_ctx,local_12,unaff_SS);
      if (iVar3 == 0x0)
      {
        return 0x0;
      }
      while( true )
      {
        if (local_12[0x0] == 0x0)
        {
          return 0x1;
        }
        local_12[0x0] = local_12[0x0] + -0x1;
        file_ctx_00 = file_ctx;
        pvVar4 = allocate_memory(CONCAT22((void *)file_ctx,0x2a));
        if (in_DX == 0x0 && pvVar4 == NULL)
        {
          pvVar4 = NULL;
          uVar6 = 0x0;
        }
        else
        {
          pvVar7 = Simulator_Resource_Change_Item_ctor_init_6520
                             ((void *)CONCAT22(in_DX,pvVar4));
          uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
          pvVar4 = (void *)pvVar7;
        }
        uVar5 = Simulator_Resource_List_Load_from_File_Logic_774e
                          ((void *)CONCAT22(uVar6,pvVar4),file_ctx_00);
        if (uVar5 == 0x0) break;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)pvVar2 + 0x10) + 0x4);
        (*(code *)*puVar1)();
        in_DX = extraout_DX;
      }
      return 0x0;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Standard scalar deleting destructor for specific UI components.

void * __stdcall16far UI_Component_dtor_Scalar_Deleting_b90c(void *this_ptr,byte flags)
{
  UI_Component_Type_B932_dtor_Internal_afa6(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Parameterized constructor for UI Item Type 4. Sets vtable to 0xBC0C and initializes
// internal list pointers.

void * __stdcall16far
UI_Item_Type4_ctor_with_Params_b936
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Item_Base_ctor_with_Params_b22c(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x7) = 0x0;
  *(undefined4 *)(param_1 + 0x9) = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xbc0c;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Item Type 4. Frees its managed item list and reverts
// vtables.

void __stdcall16far UI_Item_Type4_dtor_Internal_b96c(void *this_ptr)
{
  void *ptr;
  astruct_186 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_186 *)this_ptr;
  *(undefined2 *)this_ptr = 0xbc0c;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0xe;
  if (uVar3->field15_0x10 != 0x0 || ptr != NULL)
  {
    UI_Item_List_Free_Data_Pointer_Logic((void *)CONCAT22(uVar3->field15_0x10,ptr));
    free_if_not_null(ptr);
  }
  UI_Item_Base_dtor_Internal_b260(this_ptr);
  return;
}



// Detaches and returns the internal list object from the UI item, clearing the internal
// pointers at 0xE and 0x12.

u32 __stdcall16far UI_Item_Type4_Detach_Internal_List_Logic(u32 this_ptr)
{
  u32 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  uVar1 = *(u32 *)(iVar2 + 0xe);
  *(undefined4 *)(iVar2 + 0xe) = 0x0;
  *(undefined4 *)(iVar2 + 0x12) = 0x0;
  return uVar1;
}



undefined2 __stdcall16far
UI_Build_Item_Process_Truck_Resource_Loading_b9da(undefined4 param_1,void *param_2)
{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  long lVar7;
  int in_DX;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined2 unaff_SI;
  undefined2 uVar11;
  void *pvVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 local_4;
  
  uVar11 = (undefined2)((ulong)param_1 >> 0x10);
  iVar10 = (int)param_1;
  if (*(long *)(iVar10 + 0xe) == 0x0)
  {
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xa));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      *(undefined4 *)(iVar10 + 0xe) = 0x0;
    }
    else
    {
      pvVar12 = UI_Item_List_ctor_init_logic((void *)CONCAT22(in_DX,pvVar3),0x5,0x5);
      *(undefined2 *)(iVar10 + 0xe) = (int)pvVar12;
      *(undefined2 *)(iVar10 + 0x10) = (int)((ulong)pvVar12 >> 0x10);
    }
    *(undefined4 *)(iVar10 + 0x12) = 0x0;
  }
  for (local_4 = 0x4; (int)local_4 < 0xe; local_4 += 0x1)
  {
    pvVar12 = UI_Component_Find_Item_in_List_22_Logic_7c28(param_2,local_4);
    iVar2 = (int)((ulong)pvVar12 >> 0x10);
    uVar4 = (uint)pvVar12;
    if (iVar2 != 0x0 || uVar4 != 0x0)
    {
      pvVar6 = (void *)(0x64 - *(long *)(iVar10 + 0x12));
      iVar8 = (int)((ulong)pvVar6 >> 0x10);
      if (pvVar12 < pvVar6)
      {
        pvVar6 = (void *)((ulong)pvVar12 & 0xffff);
        iVar8 = iVar2;
      }
      uVar5 = (uint)pvVar6;
      lVar7 = CONCAT22(iVar8,uVar5);
      iVar9 = iVar8;
      UI_Component_Set_List_Value_at_22_Logic_7d1c
                (param_2,uVar4 - uVar5,(iVar2 - iVar8) - (uint)(uVar4 < uVar5),local_4);
      UI_Item_List_Set_Item_Value_Logic
                ((int)*(undefined4 *)(iVar10 + 0xe),
                 (int)((ulong)*(undefined4 *)(iVar10 + 0xe) >> 0x10),uVar5,iVar8,local_4
                );
      *(long *)(iVar10 + 0x12) = *(long *)(iVar10 + 0x12) + lVar7;
      uVar1 = *(undefined4 *)((int)param_2 + 0x4);
      uVar13 = (undefined2)uVar1;
      uVar14 = (undefined2)((ulong)uVar1 >> 0x10);
      Lookup_Entity_Description_Wrapper_c0ca(local_4);
      Simulator_Log_Debug_Message_to_File_840a
                (0x576c,0x1050,*(undefined4 *)(iVar10 + 0x4),uVar5,iVar8,(int)lVar7,
                 iVar9,uVar13,uVar14);
      if (0x63 < *(ulong *)(iVar10 + 0x12)) break;
    }
  }
  if (*(long *)(iVar10 + 0x12) != 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Process_Truck_Resource_Unloading_bb0e(u32 param_1,void *param_2)
{
  undefined4 uVar1;
  void *ptr;
  u16 uVar2;
  int iVar3;
  uint uVar4;
  void *this_ptr;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  u16 uStack_8;
  
  uVar2 = UI_Component_Invoke_Entity_vcall_44_Logic_7bee(param_2);
  if (uVar2 != 0x0)
  {
    return 0x0;
  }
  this_ptr = (void *)UI_Item_Type4_Detach_Internal_List_Logic(param_1);
  iVar3 = (int)((ulong)this_ptr >> 0x10);
  ptr = (void *)this_ptr;
  if (iVar3 != 0x0 || ptr != NULL)
  {
    for (uStack_8 = 0x4; (int)uStack_8 < 0x25; uStack_8 += 0x1)
    {
      pvVar5 = UI_Item_List_Find_Item_FarPtr_Logic(ptr,iVar3,uStack_8);
      uVar4 = (uint)((ulong)pvVar5 >> 0x10) | (uint)pvVar5;
      if (uVar4 != 0x0)
      {
        UI_Component_Add_Value_to_List_at_22_Logic_7ddc(param_2,pvVar5,uStack_8);
        uVar2 = UI_Component_Invoke_Entity_vcall_44_Logic_7bee(param_2);
        if (uVar2 != 0x0)
        {
          return 0x0;
        }
        uVar1 = *(undefined4 *)((int)param_2 + 0x4);
        uVar6 = (undefined2)uVar1;
        uVar7 = (undefined2)((ulong)uVar1 >> 0x10);
        Lookup_Entity_Description_Wrapper_c0ca(uStack_8);
        Simulator_Log_Debug_Message_to_File_840a
                  (0x5798,0x1050,*(undefined4 *)((int)param_1 + 0x4),pvVar5,uVar2,uVar4,
                   uVar6,uVar7);
        UI_Item_List_Set_Item_Value_Logic(ptr,iVar3,0x0,0x0,uStack_8);
      }
    }
    if (this_ptr != NULL)
    {
      UI_Item_List_Free_Data_Pointer_Logic(this_ptr);
      free_if_not_null(ptr);
    }
  }
  return 0x1;
}



void * __stdcall16far
UI_Item_Type4_dtor_Scalar_Deleting_bbe6(void *param_1,byte param_2)
{
  UI_Item_Type4_dtor_Internal_b96c(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



undefined2 * __stdcall16far UI_Item_TypeBC1C_Factory_bc1c(void)
{
  char cVar1;
  undefined2 in_DX;
  int in_BX;
  undefined2 *puVar2;
  undefined2 *unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  bool in_ZF;
  char in_SF;
  char in_OF;
  undefined2 *in_stack_0000d730;
  undefined2 in_stack_0000d732;
  void *pvStack_6;
  
  puVar2 = (undefined2 *)&stack0xfffe;
  cVar1 = '\x0f';
  do
  {
    unaff_BP = unaff_BP + -0x1;
    puVar2 = puVar2 + -0x1;
    *puVar2 = *unaff_BP;
    cVar1 += -0x1;
  } while ('\0' < cVar1);
  if (!in_ZF && in_OF == in_SF)
  {
    *(char *)(in_BX + unaff_SI) = *(char *)(in_BX + unaff_SI) - (byte)in_DX;
    UI_Item_Base_ctor_with_Params_b22c();
    *(undefined2 *)CONCAT22(in_stack_0000d732,in_stack_0000d730) = 0xbc96;
    in_stack_0000d730[0x1] = 0x1030;
    return (undefined2 *)CONCAT22(in_stack_0000d732,in_stack_0000d730);
  }
  *(byte *)(in_BX + unaff_SI) = *(byte *)(in_BX + unaff_SI) & (byte)in_DX;
  free_if_not_null(pvStack_6);
  return (undefined2 *)CONCAT22(in_DX,(undefined2 *)0x1);
}



// Parameterized constructor for UI Item Type 12. Sets vtable to 0xBC96.

void * __stdcall16far
UI_Item_Type12_ctor_with_Params_bc24
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Item_Base_ctor_with_Params_b22c(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xbc96;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



// Internal destructor for UI Item Type 12. Reverts vtable and calls base cleanup.

void __stdcall16far UI_Item_Type12_dtor_Internal_bc4e(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xbc96;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  UI_Item_Base_dtor_Internal_b260(this_ptr);
  return;
}



void __stdcall16far void_noop_stub_1030_bc6c(void)
{
  return;
}



void * __stdcall16far
UI_Item_Type12_dtor_Scalar_Deleting_bc70(void *param_1,byte param_2)
{
  UI_Item_Type12_dtor_Internal_bc4e(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
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



// Constructor for UI build item Type 0xC006. Initializes base build item and sets
// vtable.

void * __stdcall16far UI_Build_Item_TypeC006_ctor_init_be34(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0xc006;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



void * __stdcall16far
UI_Build_Item_TypeC006_ctor_with_Params_be56
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xc006;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
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



// WARNING: Unable to use type for symbol uVar5
// Updates the resource production value for a build item. Calculates the difference
// from a hardcoded limit (1000) and applies the delta to the construction manager's
// resource list (group 0x1E).

void __stdcall16far UI_Build_Item_Update_Resource_Production_Logic_bf6e(void *this_ptr)
{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 uVar4;
  void *this_ptr_00;
  void *pvVar5;
  u16 key;
  undefined4 uVar5;
  
  key = 0x1e;
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  pvVar5 = UI_Component_Find_Item_in_List_22_Logic_7c28(this_ptr_00,key);
  uVar2 = 0x3e8 - (int)(void *)pvVar5;
  uVar5 = *(undefined4 *)((int)(void *)this_ptr + 0x14);
  uVar4 = (undefined2)((ulong)uVar5 >> 0x10);
  iVar3 = (int)uVar5;
  puVar1 = (uint *)(iVar3 + 0xaa);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc
            (this_ptr_00,
             (uVar2 - *puVar1 & -(uint)(uVar2 < *puVar1)) + *(int *)(iVar3 + 0xaa),0x0,
             0x1e);
  return;
}



// Calculates the difference between a building's current resource production and its
// 1000-unit cap.

void * __stdcall16far UI_Build_Item_Get_Resource_Cap_Difference_bfb8(void *this_ptr)
{
  void *pvVar1;
  u16 key;
  
  key = 0x1e;
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  pvVar1 = UI_Component_Find_Item_in_List_22_Logic_7c28(pvVar1,key);
  return (void *)CONCAT22(-(uint)(0x3e8 < (uint)pvVar1) - (int)((ulong)pvVar1 >> 0x10),
                          (void *)(0x3e8 - (uint)pvVar1));
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_bfe0(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI build item Type 0xC68E. Initializes base build item, zeroes
// specialized state fields (0x20, 0x24), and sets vtable.

u16 * __stdcall16far UI_Build_Item_TypeC68E_ctor_init_c06e(void *this_ptr)
{
  astruct_184 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_184 *)this_ptr;
  uVar1->field31_0x20 = 0x0;
  uVar1->field32_0x24 = 0x0;
  *(undefined2 *)this_ptr = 0xc68e;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



void * __stdcall16far
UI_Build_Item_TypeC68E_ctor_with_Params_c09c
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined4 *)(param_1 + 0x10) = 0x0;
  param_1[0x12] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xc68e;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



u16 __stdcall16far UI_Build_Item_Check_24_Greater_Than_0_c0d2(u32 param_1)
{
  if (0x0 < *(int *)((int)param_1 + 0x24))
  {
    return 0x1;
  }
  return 0x0;
}



// Returns 1 if the build item is type 0xB or has an active counter at offset 0x24.

u16 __stdcall16far UI_Build_Item_Check_TypeB_or_Active_c0ec(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if ((*(int *)((int)this_ptr + 0xc) != 0xb) && (*(int *)((int)this_ptr + 0x24) < 0x1))
  {
    return 0x0;
  }
  return 0x1;
}



// Decrements the internal turn counter at offset 0x24. If it reaches zero, transitions
// the build item to entity type 0x37.

void __stdcall16far UI_Build_Item_Decrement_Turn_Counter_Logic_c10e(void *this_ptr)
{
  astruct_183 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_183 *)this_ptr;
  if (0x0 < uVar1->field35_0x24)
  {
    uVar1->field35_0x24 = uVar1->field35_0x24 + -0x1;
    return;
  }
  uVar1->field12_0xc = 0x37;
  return;
}



// Synchronizes construction resource requirements with the construction manager.
// Updates values in the managed list based on the remaining turn counter at offset
// 0x24.

void __stdcall16far
UI_Build_Item_Sync_Construction_Resources_Logic_c12e(void *this_ptr,int arg2)
{
  undefined4 uVar1;
  astruct_182 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 uVar5;
  
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar1 = *(undefined4 *)((int)pvVar4 + 0x2e);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_182 *)this_ptr;
  if (uVar2->field36_0x24 < 0x1)
  {
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar4,0x0,0x230000);
  }
  else
  {
    if (arg2 == 0x0)
    {
      uVar5 = 0x0;
    }
    else
    {
      uVar5 = 0x32;
    }
    UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar4,uVar5,0x230000);
    uVar2->field36_0x24 = uVar2->field36_0x24 + -0x1;
  }
  if ((0x0 < uVar2->field36_0x24) && (uVar2->field36_0x24 < 0x19))
  {
    *(undefined2 *)((int)uVar1 + 0x1fe) = 0x1;
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



// Serializes UI build item Type 0xC68E to a save file, including base state and
// specialized counters at offsets 0x20 and 0x24.

u16 __stdcall16far
UI_Build_Item_TypeC68E_Save_to_File_Logic_c230(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined4 local_10 [0x2];
  undefined2 local_8 [0x3];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  if (uVar1 != 0x0)
  {
    uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
    local_10[0x0] = *(undefined4 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_10,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_8[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x24);
      iVar2 = file_write_check((long)file_ctx,local_8,unaff_SS);
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_24_c29c(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  void *handle_wrapper;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar1 != 0x0)
  {
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x20),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,(void *)((int)param_1 + 0x24),handle_wrapper
                             );
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
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
