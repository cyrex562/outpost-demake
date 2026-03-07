/*
 * Source: outpost.c
 * Chunk: 89/117
 * Original lines: 101457-102544
 * Boundaries: top-level declarations/definitions only
 */




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



// Standard scalar deleting destructor for UI build item objects.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_c668(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI build item Type 0xC940. Initializes base state and sets vtable.

void * __stdcall16far UI_Build_Item_TypeC940_ctor_init_c6f6(void *this_ptr)
{
  undefined2 uVar1;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(undefined2 *)((int)(void *)this_ptr + 0x20) = 0x0;
  *(undefined2 *)this_ptr = 0xc940;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1030;
  return this_ptr;
}



// Parameterized constructor for UI build item Type 0xC940.

void * __stdcall16far
UI_Build_Item_TypeC940_ctor_with_Params_c71e
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x10] = 0x0;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xc940;
  param_1[0x1] = 0x1030;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far
UI_Build_Item_Set_Active_Object_and_Timer_c74e(void *param_1,void *param_2)
{
  UI_Build_Item_Set_Active_Object_Logic_b46e(param_1,param_2);
  *(undefined2 *)((int)param_1 + 0x20) = 0x70;
  return;
}



void __stdcall16far UI_Build_Item_OnTick_State6_Check_and_Update_c76c(void *param_1)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = (void *)param_1;
  if ((*(int *)((int)pvVar2 + 0x12) != 0x6) && (*(int *)((int)pvVar2 + 0x12) != 0x5))
  {
    return;
  }
  iVar1 = *(int *)((int)pvVar2 + 0x20);
  if (iVar1 != 0x0)
  {
    if (((iVar1 < 0x70) || (SBORROW2(iVar1,0x70))) || (0x1 < iVar1 + -0x70))
    {
      UI_Build_Item_OnTick_State6_Update_be2a(param_1);
      return;
    }
  }
  UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
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



// Serializes UI build item Type 0xC940 to a save file, including base state and the
// field at offset 0x20.

int __stdcall16far
UI_Build_Item_TypeC940_Save_to_File_Logic_c84e(void *this_ptr,void *file_ctx)
{
  u16 uVar1;
  int iVar2;
  void *unaff_SS;
  undefined2 local_c [0x5];
  
  uVar1 = UI_Build_Item_Save_to_File_Logic_b5ec(this_ptr,file_ctx);
  iVar2 = 0x0;
  if (uVar1 != 0x0)
  {
    local_c[0x0] = *(undefined2 *)((int)(void *)this_ptr + 0x20);
    iVar2 = file_write_check((long)file_ctx,local_c,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    iVar2 = 0x1;
  }
  return iVar2;
}



undefined2 __stdcall16far
UI_Build_Item_Deserialize_and_Update_20_c894(u32 param_1,void *param_2)
{
  u16 uVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  undefined2 local_4;
  
  uVar1 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  uVar3 = 0x0;
  if (uVar1 != 0x0)
  {
    iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    *(undefined2 *)((int)param_1 + 0x20) = local_4;
    uVar3 = 0x1;
  }
  return uVar3;
}



undefined4 __stdcall16far
UI_Build_Item_Conditional_Set_20_c8da
          (undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  undefined2 in_AX;
  undefined2 in_DX;
  undefined2 local_6;
  undefined2 uStack_4;
  
  local_6 = 0x0;
  uStack_4 = 0x0;
  if (param_3._2_2_ == 0x1)
  {
    *(undefined2 *)((int)param_1 + 0x20) = param_2._2_2_;
  }
  else
  {
    Helper_NoOp_Stub_178e();
    local_6 = in_AX;
    uStack_4 = in_DX;
  }
  return CONCAT22(uStack_4,local_6);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_c91a(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI build item Type 0xD88E. Initializes base state and zero-fills a
// large 120-byte internal buffer (offset 0x20).

void * __stdcall16far UI_Build_Item_TypeD88E_ctor_init_c9a8(void *this_ptr)
{
  astruct_180 *uVar1;
  int value;
  
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_180 *)this_ptr;
  uVar1->field151_0x98 = 0x1;
  *(undefined2 *)this_ptr = 0xd88e;
  uVar1->field2_0x2 = 0x1030;
  memset_far(&uVar1->field_0x20,value,0x0);
  return this_ptr;
}



// Parameterized constructor for UI build item Type 0xD88E. Initializes base state and
// zero-fills the 10-element sub-item array starting at offset 0x20.

void * __stdcall16far
UI_Build_Item_TypeD88E_ctor_with_Params_c9e4
          (undefined2 *param_1,int param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  param_1[0x4c] = 0x1;
  *(undefined2 *)CONCAT22(param_2,param_1) = 0xd88e;
  param_1[0x1] = 0x1030;
  memset_far(param_1 + 0x10,param_2,0x0);
  return (void *)CONCAT22(param_2,param_1);
}



// Synchronizes states for all 10 sub-items. Transitions states 1/2 to 4. For other
// non-zero states, removes the associated entity from the simulator and clears the
// slot. Sets the active object at the end.

void __stdcall16far
UI_Build_Item_TypeD88E_Sync_SubItem_States_ca26(void *this_ptr,void *arg2)
{
  astruct_179 *iVar1;
  void *pvVar1;
  undefined2 uVar2;
  void *this_ptr_00;
  int iStack_4;
  
  for (iStack_4 = 0x0; pvVar1 = (void *)this_ptr,
      uVar2 = (undefined2)((ulong)this_ptr >> 0x10), iStack_4 < 0xa; iStack_4 += 0x1)
  {
    if ((*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x26) == 0x2) ||
       (*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x26) == 0x1))
    {
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x4;
    }
    else
    {
      this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
      UI_Component_Remove_Entities_of_Type_Logic_6e9c
                (this_ptr_00,0x1,*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x24));
      *(undefined4 *)((int)pvVar1 + iStack_4 * 0xc + 0x20) = 0x0;
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x24) = 0x0;
      *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x0;
    }
  }
  UI_Build_Item_Set_Active_Object_Logic_b46e(this_ptr,arg2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_Schedule_SubEntity_Spawns_cac2(void *param_1)
{
  int type_id;
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  void *pvVar5;
  u8 *puVar6;
  void *pvVar7;
  ulong local_22;
  int local_1e;
  int local_1c;
  ulong local_1a;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  if ((*(int *)((int)(void *)param_1 + 0x12) == 0x5) &&
     (PTR_DAT_1050_0000_1050_5812 == NULL))
  {
    PTR_DAT_1050_0000_1050_5812 = (undefined *)0x1;
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    uVar1 = *(undefined4 *)((int)(void *)pvVar5 + 0x2e);
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x10));
    uVar4 = (undefined2)((ulong)pvVar5 >> 0x10);
    puVar2 = (undefined4 *)*(undefined4 *)((int)(void *)pvVar5 + 0x1e);
    puVar3 = (undefined2 *)((int)*puVar2 + 0x10);
    local_1a = (*(code *)*puVar3)(0x1028,(undefined4 *)puVar2,
                                  *(undefined2 *)((int)(void *)pvVar5 + 0x20));
    local_1c = 0x0;
    local_1e = UI_Build_Item_TypeD88E_Count_Empty_Slots_d144(param_1);
    local_22 = 0x0;
    while ((local_22 < local_1a && (local_1e != 0x0)))
    {
      puVar3 = (undefined2 *)((int)*puVar2 + 0x4);
      puVar6 = (u8 *)(*(code *)*puVar3)(0x1028,(undefined4 *)puVar2,
                                        (int)((ulong)puVar2 >> 0x10),(int)local_22,
                                        (int)(local_22 >> 0x10));
      if (puVar6 != NULL)
      {
        pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar6);
        type_id = *(int *)((int)(void *)pvVar7 + 0xc);
        if ((0x0 < type_id) && (!SBORROW2(type_id,0x1)))
        {
          if (type_id != 0x3 && 0x0 < type_id + -0x2)
          {
            if (type_id != 0x4) goto LAB_1030_cbbc;
            local_1c += 0x1;
          }
          UI_Component_Remove_Entities_of_Type_Logic_6e9c(pvVar5,0x1,type_id);
          UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(param_1,type_id);
          local_1e += -0x1;
        }
      }
LAB_1030_cbbc:
      local_22 += 0x1;
    }
    while (local_1c < 0x4)
    {
      UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(param_1,0x4);
      local_1c = local_1c + 0x1;
    }
  }
  return;
}



// Searches for a sub-item with the specified ID and state 3, then resets its state and
// linked object fields to zero.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Clear_SubItem_State3_Logic_cbf0
          (int offset,u16 segment,int sub_id)
{
  astruct_178 *iVar1;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return 0x0;
    }
    iVar1 = (astruct_178 *)(iStack_4 * 0xc + offset);
    if ((iVar1->field36_0x24 == sub_id) && (iVar1->field37_0x26 == 0x3)) break;
    iStack_4 += 0x1;
  }
  iVar1->field37_0x26 = 0x0;
  iVar1->field38_0x28 = 0x0;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex routine that removes a sub-item matching an ID and linked object.
// If in state 4, performs a deep cleanup and triggers a re-initialization sequence with
// the planetary hub (Type 0x4000001).

int __stdcall16far
UI_Build_Item_TypeD88E_Remove_and_Reinit_SubItem_cc44
          (void *param_1,undefined2 param_2,int param_3,undefined4 param_4,u16 param_5)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined2 uVar6;
  u32 *puVar7;
  astruct_176 *iVar5;
  astruct_177 *iVar6;
  undefined2 uVar8;
  void *this_ptr;
  undefined4 *puVar9;
  undefined1 local_32 [0x8];
  undefined4 *puStack_2a;
  ulong uStack_26;
  ulong uStack_22;
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  void *pvStack_16;
  undefined2 uStack_14;
  void *pvStack_12;
  undefined4 uStack_e;
  int iStack_a;
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  uStack_8 = *(undefined4 *)((int)param_4 + 0x4);
  iStack_a = 0x0;
  do
  {
    iVar2 = iStack_a;
    if (0x9 < iStack_a)
    {
      return iStack_4;
    }
    if (((*(int *)((int)param_1 + iStack_a * 0xc + 0x28) == (int)uStack_8) &&
        (*(int *)((int)param_1 + iStack_a * 0xc + 0x2a) == uStack_8._2_2_)) &&
       (*(u16 *)((int)param_1 + iStack_a * 0xc + 0x24) == param_5))
    {
      if (*(int *)((int)param_1 + iStack_a * 0xc + 0x26) == 0x4)
      {
        this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                             ((void *)CONCAT22(param_2,param_1));
        uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
        uStack_e = this_ptr;
        UI_Component_Remove_Entities_of_Type_Logic_6e9c
                  (this_ptr,0x1,*(int *)((int)param_1 + iVar2 * 0xc + 0x24));
        *(undefined4 *)((int)param_1 + iVar2 * 0xc + 0x20) = 0x0;
        *(undefined2 *)((int)param_1 + iVar2 * 0xc + 0x24) = 0x0;
        *(undefined2 *)((int)param_1 + iVar2 * 0xc + 0x26) = 0x0;
        puStack_2a = NULL;
        pvStack_12 = NULL;
        uRam00000006 = param_5;
        uRam0000000a = 0x1;
        uVar3 = Map_Entity_Type_to_Grouping_ID_Logic_c3b4(param_5);
        *(u16 *)((int)(void *)pvStack_12 + 0xc) = uVar3;
        pvVar4 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        pvStack_16 = pvVar4;
        uStack_14 = uVar6;
        puVar9 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
        puVar5 = (undefined4 *)puVar9;
        uVar8 = 0x1038;
        uStack_1a = puVar9;
        puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                           (puVar9,pvVar4,uVar6);
        uStack_1e = (undefined4 *)CONCAT22(puVar7,puVar5);
        puVar1 = (undefined2 *)((int)*uStack_1e + 0x10);
        uStack_22 = (*(code *)*puVar1)(0x1038,puVar5,puVar7);
        for (uStack_26 = 0x0; uStack_26 < uStack_22; uStack_26 += 0x1)
        {
          puVar9 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_1e);
          iVar2 = (int)((ulong)puVar9 >> 0x10);
          if (iVar2 != 0x0 || (undefined4 *)puVar9 != NULL)
          {
            puVar1 = (undefined2 *)((int)*puVar9 + 0x40);
            iVar2 = (*(code *)*puVar1)(0x1038,(undefined4 *)puVar9,iVar2,local_32);
            if (iVar2 == 0x0)
            {
              uVar8 = 0x1028;
              UI_Item_List_Upsert_Item_by_Metadata_Logic_6408(puVar9,pvStack_12);
              break;
            }
          }
        }
        puStack_2a = uStack_1e;
        if (uStack_1e != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_1e)
                    (uVar8,(undefined4 *)uStack_1e,(int)((ulong)uStack_1e >> 0x10),0x1);
        }
      }
      else
      {
        *(undefined2 *)((int)param_1 + iStack_a * 0xc + 0x26) = 0x0;
        *(undefined4 *)((int)param_1 + iStack_a * 0xc + 0x28) = 0x0;
      }
      iStack_4 += 0x1;
      param_3 += -0x1;
      if (param_3 == 0x0)
      {
        return iStack_4;
      }
    }
    iStack_a += 0x1;
  } while( true );
}



// Finds the index of the first sub-item with the specified ID that is currently in
// state 0 (free). Returns -1 if not found.

int __stdcall16far
UI_Build_Item_TypeD88E_Find_Free_Slot_by_ID_cde8(int offset,u16 segment,int sub_id)
{
  int iVar1;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return -0x1;
    }
    iVar1 = uStack_4 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x24) == sub_id) && (*(int *)(iVar1 + 0x26) == 0x0)) break;
    uStack_4 += 0x1;
  }
  return uStack_4;
}



// Counts the number of sub-items with the specified ID that are currently in state 0.

int __stdcall16far
UI_Build_Item_TypeD88E_Count_Free_Slots_by_ID_ce2e(int offset,u16 segment,int sub_id)
{
  int iVar1;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    iVar1 = uStack_6 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x24) == sub_id) && (*(int *)(iVar1 + 0x26) == 0x0))
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



// Allocates a specified quantity of slots for a sub-item ID. Sets state to 1 (or 2 if
// ID is 4) and links the provided object ID. Stops when quantity is reached or array is
// full.

int __stdcall16far
UI_Build_Item_TypeD88E_Allocate_SubItem_Slots_ce72
          (undefined4 param_1,int param_2,undefined4 param_3,int param_4)
{
  long lVar1;
  astruct_175 *iVar2;
  int iStack_a;
  int iStack_4;
  
  iStack_4 = 0x0;
  lVar1 = *(long *)((int)param_3 + 0x4);
  iStack_a = 0x0;
  do
  {
    if (0x9 < iStack_a)
    {
      return iStack_4;
    }
    iVar2 = (astruct_175 *)(iStack_a * 0xc + (int)param_1);
    if ((iVar2->field36_0x24 == param_4) && (iVar2->field38_0x28 == 0x0))
    {
      iVar2->field38_0x28 = lVar1;
      if (param_4 == 0x4)
      {
        iVar2->field37_0x26 = 0x2;
      }
      else
      {
        *(undefined2 *)((int)param_1 + iStack_a * 0xc + 0x26) = 0x1;
      }
      iStack_4 += 0x1;
      param_2 += -0x1;
      if (param_2 == 0x0)
      {
        return iStack_4;
      }
    }
    iStack_a += 0x1;
  } while( true );
}



// Directly sets the state and 32-bit linked object ID for a specific sub-item slot
// index (0-9).

void __stdcall16far
UI_Build_Item_TypeD88E_Set_SubItem_State_and_Object_cef8
          (void *this_ptr,void *obj_ptr,u16 state,int index)
{
  undefined2 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  *(u16 *)(iVar2 + index * 0xc + 0x26) = state;
  uVar4 = (undefined2)((ulong)obj_ptr >> 0x10);
  uVar1 = *(undefined2 *)((int)obj_ptr + 0x6);
  *(undefined2 *)(iVar2 + index * 0xc + 0x28) = *(undefined2 *)((int)obj_ptr + 0x4);
  *(undefined2 *)(iVar2 + index * 0xc + 0x2a) = uVar1;
  return;
}



// Returns 1 if at least one sub-item with the specified ID exists in the array.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Check_SubItem_Exists_cf3a(void *this_ptr,int sub_id)
{
  u16 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < (int)uStack_4)
    {
      return 0x0;
    }
    if (*(int *)((int)this_ptr + uStack_4 * 0xc + 0x24) == sub_id) break;
    uStack_4 += 0x1;
  }
  return 0x1;
}



// Finds and removes a sub-item by its ID. Triggers specialized cleanup if the ID is 5
// (likely research-related). Clears the array slot.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_cf78(void *this_ptr,int sub_id)
{
  void *pvVar1;
  undefined2 uVar2;
  void *this_ptr_00;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return 0x0;
    }
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    pvVar1 = (void *)this_ptr;
    if (*(int *)((int)pvVar1 + iStack_4 * 0xc + 0x24) == sub_id) break;
    iStack_4 += 0x1;
  }
  this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (sub_id == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900
              ((void *)*(undefined4 *)((int)(void *)this_ptr_00 + 0x2e));
  }
  else
  {
    UI_Component_Remove_Entities_of_Type_Logic_6e9c(this_ptr_00,0x1,sub_id);
  }
  *(undefined4 *)((int)pvVar1 + iStack_4 * 0xc + 0x20) = 0x0;
  *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x24) = 0x0;
  *(undefined2 *)((int)pvVar1 + iStack_4 * 0xc + 0x26) = 0x0;
  return 0x1;
}



// Finds and removes a sub-item with the specified ID if it is currently in state 0
// (inactive/idle). Triggers simulator entity removal and clears the array slot.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Remove_SubItem_by_ID_and_State0_d00c
          (uint16_t offset,uint16_t segment,int sub_id)
{
  int iVar1;
  void *this_ptr;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return 0x0;
    }
    iVar1 = uStack_4 * 0xc + offset;
    if ((*(int *)(iVar1 + 0x26) == 0x0) && (*(int *)(iVar1 + 0x24) == sub_id)) break;
    uStack_4 += 0x1;
  }
  this_ptr = UI_Build_Item_Get_Construction_Manager_Logic_b58e
                       ((void *)CONCAT22(segment,offset));
  if (sub_id == 0x5)
  {
    Simulator_Entity_Decrement_SubCounter_20E_4900
              ((void *)*(undefined4 *)((int)this_ptr + 0x2e));
  }
  else
  {
    UI_Component_Remove_Entities_of_Type_Logic_6e9c(this_ptr,0x1,sub_id);
  }
  iVar1 = uStack_4 * 0xc + offset;
  *(undefined4 *)(iVar1 + 0x20) = 0x0;
  *(undefined2 *)(iVar1 + 0x24) = 0x0;
  *(undefined2 *)(iVar1 + 0x26) = 0x0;
  return 0x1;
}



// Retrieves the current state/mode from offset 0x98 and triggers a state transition via
// 1030:D56A.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Get_98_and_Transition_State_d0a8(void *this_ptr)
{
  u16 uVar1;
  
  uVar1 = *(u16 *)((int)this_ptr + 0x98);
  UI_Build_Item_TypeD88E_State_Machine_Transition_d56a(this_ptr);
  return uVar1;
}



// Counts the number of sub-item slots that have a non-zero tick/timestamp value at
// offset 0x20.

int __stdcall16far UI_Build_Item_TypeD88E_Count_Occupied_Slots_d0c6(void *this_ptr)
{
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  for (iStack_6 = 0x0; iStack_6 < 0xa; iStack_6 += 0x1)
  {
    if (*(long *)((int)(void *)this_ptr + iStack_6 * 0xc + 0x20) != 0x0)
    {
      iStack_4 += 0x1;
    }
  }
  return iStack_4;
}



// Counts sub-items that are both occupied (offset 0x20 != 0) and have a non-zero state
// flag at offset 0x26.

int __stdcall16far
UI_Build_Item_TypeD88E_Count_Active_SubItems_d102(int offset,u16 segment)
{
  int iVar1;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    iVar1 = uStack_6 * 0xc + offset;
    if ((*(long *)(iVar1 + 0x20) != 0x0) && (*(int *)(iVar1 + 0x26) != 0x0))
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



// Counts the number of sub-item slots that are currently free (offset 0x20 == 0).

int __stdcall16far UI_Build_Item_TypeD88E_Count_Empty_Slots_d144(void *this_ptr)
{
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  for (uStack_6 = 0x0; uStack_6 < 0xa; uStack_6 += 0x1)
  {
    if (*(long *)((int)this_ptr + uStack_6 * 0xc + 0x20) == 0x0)
    {
      uStack_4 += 0x1;
    }
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds a free slot and schedules a sub-entity spawn for 200 ticks in the future.
// Triggers immediate spawning of simulator entities (workers/units) or updates research
// flags.

void __stdcall16far
UI_Build_Item_TypeD88E_Schedule_SubItem_Spawn_d180(void *this_ptr,int sub_id)
{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  void *arg1;
  astruct_174 *iVar5;
  u16 arg2;
  void *pvVar4;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if (0x9 < iStack_4)
    {
      return;
    }
    arg2 = (u16)((ulong)this_ptr >> 0x10);
    arg1 = (void *)this_ptr;
    if (*(int *)((int)arg1 + iStack_4 * 0xc + 0x22) == 0x0 &&
        *(int *)((int)arg1 + iStack_4 * 0xc + 0x20) == 0x0) break;
    iStack_4 += 0x1;
  }
  uVar1 = *_p_SimulatorWorldContext;
  uVar2 = ((uint *)_p_SimulatorWorldContext)[0x1];
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x20) = uVar1 + 0xc8;
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x22) = uVar2 + (0xff37 < uVar1);
  *(int *)((int)arg1 + iStack_4 * 0xc + 0x24) = sub_id;
  UI_Build_Item_TypeD88E_Init_SubItem_Flags_d340
            ((u16)arg1,arg2,
             (void *)CONCAT22(arg2,(void *)((int)arg1 + iStack_4 * 0xc + 0x20)));
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar3 = (undefined2)((ulong)pvVar4 >> 0x10);
  if (sub_id == 0x5)
  {
    Simulator_Entity_Increment_SubCounter_20E_48e0
              ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e),0x1);
    return;
  }
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50((void *)pvVar4,uVar3,0x1,0x0,sub_id);
  return;
}



undefined2 __stdcall16far UI_Build_Item_All_Slots_Full_Check_d230(undefined4 param_1)
{
  undefined2 local_4;
  
  local_4 = 0x0;
  while( true )
  {
    if (0x9 < local_4)
    {
      return 0x1;
    }
    if (*(long *)((int)param_1 + local_4 * 0xc + 0x20) == 0x0) break;
    local_4 += 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through all 10 sub-items and checks if their scheduled "ready tick" (offset
// 0x20) has passed. If so, triggers resource validation (D3B2) and completion/removal
// logic.

void __stdcall16far UI_Build_Item_TypeD88E_Process_Scheduled_Ticks_d26c(void *this_ptr)
{
  ulong uVar1;
  u16 uVar2;
  astruct_172 *iVar3;
  astruct_173 *iVar4;
  void *this_ptr_00;
  int iStack_8;
  
  uVar1 = *_p_SimulatorWorldContext;
  for (iStack_8 = 0x0; iStack_8 < 0xa; iStack_8 += 0x1)
  {
    iVar4 = (astruct_173 *)(iStack_8 * 0xc + (int)this_ptr);
    if ((*(int *)((int)&iVar4->field32_0x20 + 0x2) != 0x0 ||
         (int)iVar4->field32_0x20 != 0x0) && (iVar4->field32_0x20 <= uVar1))
    {
      uVar2 = UI_Build_Item_TypeD88E_Validate_or_Consume_Resources_d3b2
                        (this_ptr,iStack_8);
      if (uVar2 == 0x0)
      {
        this_ptr_00 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
        if (iVar4->field33_0x24 == 0x5)
        {
          Simulator_Entity_Decrement_SubCounter_20E_4900
                    ((void *)*(undefined4 *)((int)this_ptr_00 + 0x2e));
        }
        else
        {
          UI_Component_Remove_Entities_of_Type_Logic_6e9c
                    (this_ptr_00,0x1,*(int *)((int)this_ptr + iStack_8 * 0xc + 0x24));
        }
        iVar3 = (astruct_172 *)(iStack_8 * 0xc + (int)this_ptr);
        iVar3->field32_0x20 = 0x0;
        iVar3->field33_0x24 = 0x0;
        iVar3->field34_0x26 = 0x0;
      }
    }
  }
  return;
}



// Initializes an internal state flag (offset 6) for a sub-item based on its type ID.
// Maps specific types (4, 1-3, 0xC) to flag 0, others to 1.

void __stdcall16far
UI_Build_Item_TypeD88E_Init_SubItem_Flags_d340(u16 arg1,u16 arg2,void *subitem_ptr)
{
  int iVar1;
  astruct_171 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)subitem_ptr >> 0x10);
  uVar2 = (astruct_171 *)subitem_ptr;
  iVar1 = uVar2->field4_0x4;
  if (((0x0 < iVar1) && (!SBORROW2(iVar1,0x1))) &&
     ((iVar1 == 0x4 || iVar1 + -0x1 < 0x3 || (iVar1 == 0xc))))
  {
    uVar2->field5_0x6 = 0x0;
    return;
  }
  uVar2->field5_0x6 = 0x1;
  return;
}



// Checks if any sub-item other than the one at the specified index has a type ID of 8.
// Returns 1 if found.

u16 __stdcall16far
UI_Build_Item_TypeD88E_Check_Other_SubItem_ID8_d36e(void *this_ptr,int index)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x9 < uStack_4)
    {
      return 0x0;
    }
    if ((uStack_4 != index) && (*(int *)((int)this_ptr + uStack_4 * 0xc + 0x24) == 0x8))
    break;
    uStack_4 += 0x1;
  }
  return 0x1;
}
