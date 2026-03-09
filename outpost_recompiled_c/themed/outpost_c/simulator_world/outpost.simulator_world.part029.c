/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 29/56
 * Original lines (combined): 76548-78255
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far UI_Build_Item_State4_Check_Entity_61_Update_20_5f30(void *param_1)
{
  u16 uVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *pvVar4;
  int index;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar2 = (void *)param_1;
  if (*(int *)((int)pvVar2 + 0x12) == 0x5)
  {
    *(undefined2 *)((int)pvVar2 + 0x20) = 0x64;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    index = 0x61;
    pvVar4 = (void *)Colony_Get_Entity_Object_by_PackedID_200_Logic
                               ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e));
    uVar1 = Colony_Check_Value_at_Index_is_Zero_25b2(pvVar4,index);
    if (uVar1 != 0x0)
    {
      *(int *)((int)pvVar2 + 0x20) = *(int *)((int)pvVar2 + 0x20) + 0x64;
    }
  }
  return;
}



// Iterates through internal resource lists and subtracts consumption values from
// specific item types. Triggers virtual updates on the resource managers.

void __stdcall16far
UI_Build_Item_Consume_Resources_by_Type_Logic
          (void *this_ptr,uint amount_lo,int amount_hi,int type)
{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  astruct_326 *uVar5;
  undefined2 uVar6;
  bool bVar7;
  astruct_325 *paVar8;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  astruct_325 *iVar4;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_326 *)this_ptr;
  init_long_pair(local_a,(long)uVar5->field32_0x20);
  while( true )
  {
    do
    {
      paVar8 = (astruct_325 *)get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)paVar8 >> 0x10);
      iVar4 = (astruct_325 *)paVar8;
      if (paVar8 == NULL)
      {
        return;
      }
    } while (iVar4->field6_0x6 != type);
    uVar1 = iVar4->field9_0xa;
    if ((amount_hi == 0x0) && ((false || (amount_lo < uVar1)))) break;
    bVar7 = amount_lo < uVar1;
    amount_lo -= uVar1;
    amount_hi -= (uint)bVar7;
    puVar3 = (undefined2 *)((int)*uVar5->field32_0x20 + 0xc);
    (*(code *)*puVar3)(0x1008,uVar5->field32_0x20,iVar4);
    uStack_6 = 0x0;
  }
  uVar2 = iVar4->field10_0xc;
  iVar4->field9_0xa = uVar1 - amount_lo;
  iVar4->field10_0xc = -(amount_lo * (uVar2 / uVar1) - iVar4->field10_0xc);
  return;
}



// Decrements resource values from linked list items matching a specific type ID.
// Triggers vtable-based updates on the list owner.

void __stdcall16far
UI_Item_List_Consume_Resources_by_Type_Logic_6356
          (void *this_ptr,int type,uint amount_lo,int amount_hi)
{
  uint uVar1;
  uint uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  bool bVar8;
  long lVar9;
  undefined1 local_a [0x4];
  undefined4 uStack_6;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar6 = (int)this_ptr;
  init_long_pair(local_a,*(long *)(iVar6 + 0x20));
  while( true )
  {
    do
    {
      lVar9 = get_next_list_item(local_a);
      uVar5 = (undefined2)((ulong)lVar9 >> 0x10);
      iVar4 = (int)lVar9;
      if (lVar9 == 0x0)
      {
        return;
      }
    } while (((*(int *)(iVar4 + 0x8) == 0x0) ||
             ((type != 0x0 && (*(int *)(iVar4 + 0x8) != type)))) ||
            ((*(int *)(iVar4 + 0x8) == 0xf && (type != 0xf))));
    uVar1 = *(uint *)(iVar4 + 0xa);
    if ((amount_hi == 0x0) && ((false || (amount_lo < uVar1)))) break;
    bVar8 = amount_lo < uVar1;
    amount_lo -= uVar1;
    amount_hi -= (uint)bVar8;
    puVar3 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x20) + 0xc);
    (*(code *)*puVar3)(0x1008,*(undefined4 *)(iVar6 + 0x20),iVar4);
    uStack_6 = 0x0;
  }
  uVar2 = *(uint *)(iVar4 + 0xc);
  *(int *)(iVar4 + 0xa) = *(int *)(iVar4 + 0xa) - amount_lo;
  *(int *)(iVar4 + 0xc) = *(int *)(iVar4 + 0xc) - amount_lo * (uVar2 / uVar1);
  return;
}



// Constructor for the 'Add Spew' simulator command. Initializes base class with ID 1000
// and sets internal name to 'SCAddSpew'. Sets vtable to 0x6AE2.

void * __stdcall16far
Simulator_Command_AddSpew_ctor_init_68de
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  puVar1 = (undefined2 *)param_1;
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e8);
  *(undefined4 *)(puVar1 + 0x84) = param_3;
  puVar1[0x86] = param_2;
  *param_1 = 0x6ae2;
  puVar1[0x1] = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar2,puVar1 + 0x4),s_SCAddSpew_1050_4fd2);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Colony_Sync_and_Add_SubEntity_6926(undefined4 param_1)
{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  u8 *packed_id;
  undefined2 uVar5;
  undefined2 uVar6;
  u32 *puVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  void *pvVar10;
  long lVar11;
  undefined4 local_e;
  
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,
                       (u8 *)(u8 *)*(undefined4 *)((int)param_1 + 0x108));
  uVar5 = (undefined2)((ulong)pvVar10 >> 0x10);
  uVar6 = uVar5;
  puVar4 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar9 = 0x1038;
  puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((int)pvVar10,uVar5,puVar4,uVar6);
  local_e = (undefined4 *)CONCAT22(puVar7,puVar4);
  uVar3 = *local_e;
  puVar2 = (undefined2 *)((int)uVar3 + 0x10);
  lVar11 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
  if (lVar11 != 0x0)
  {
    puVar2 = (undefined2 *)((int)uVar3 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(0x1038,puVar4,puVar7,0x0,0x0);
    pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
    iVar1 = *(int *)((int)param_1 + 0x10c);
    uVar9 = 0x1030;
    UI_Component_Add_Value_to_List_at_22_Logic_7ddc
              ((int)pvVar10,(int)((ulong)pvVar10 >> 0x10),iVar1,iVar1 >> 0xf,0x1f);
  }
  if (local_e != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*local_e)(uVar9,puVar4,puVar7,0x1);
  }
  return 0x1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_6a7a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Submits a simulator event, triggers cardinal neighbor notifications (6b40), and
// returns 1.

u16 __stdcall16far Simulator_OnEvent_Submit_Notify_and_Return_1_6b2c(void *arg1)
{
  Simulator_Scan_All_Neighbors_and_Notify_Logic_6b40(arg1);
  return 0x1;
}



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
