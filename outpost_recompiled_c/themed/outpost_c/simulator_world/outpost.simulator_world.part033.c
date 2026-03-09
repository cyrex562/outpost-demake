/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 33/56
 * Original lines (combined): 81981-84030
 * Boundaries: top-level declarations/definitions only
 */




void * __stdcall16far Simulator_Object_Constructor_Type_SCSetup(void *param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(param_1,0x3e7f);
  *(undefined2 *)param_1 = 0xae56;
  *(undefined2 *)((int)(void *)param_1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar1,(char *)((int)(void *)param_1 + 0x8)),
                   s_SCSetup_1050_5124);
  return param_1;
}



undefined2 __stdcall16far Simulator_World_Refresh_Colony_Trackers_and_Flags(void)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined2 local_14;
  undefined2 local_12;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined2 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined2 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar1 == NULL) break;
    Simulator_Log_Debug_Message_to_File_840a();
    if (*(long *)((int)(void *)pvVar1 + 0x200) != 0x8000002)
    {
      Colony_Refresh_Global_Resource_Trackers_5464(pvVar1);
      Colony_Reset_Secondary_Trackers_and_Cleanup_56d6((u32)pvVar1,0x1);
    }
  }
  local_14 = 0x389a;
  local_12 = 0x1008;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined2 *)CONCAT22(unaff_SS,&local_14),0x1,0x0,0x800);
  while( true )
  {
    pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined2 *)CONCAT22(unaff_SS,&local_14));
    if (pvVar1 == NULL) break;
    Colony_Clear_State_Bitflags_at_2AC_2690(pvVar1);
  }
  return 0x1;
}



// Constructor for the 'Starve' simulator command. Initializes base class with ID 4999
// and sets internal name 'SCStarve'. Sets vtable to 0xB0CE.

void * __stdcall16far
Simulator_Command_Starve_ctor_init(void *this_ptr,u32 arg1,u32 arg2,u32 arg3)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = (void *)this_ptr;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x1387);
  *(u32 *)((int)pvVar1 + 0x108) = arg3;
  *(u32 *)((int)pvVar1 + 0x10c) = arg2;
  *(u32 *)((int)pvVar1 + 0x110) = arg1;
  *(undefined2 *)((int)pvVar1 + 0x114) = 0x0;
  *(undefined2 *)this_ptr = 0xb0ce;
  *(undefined2 *)((int)pvVar1 + 0x2) = 0x1028;
  strcpy_optimized((char *)CONCAT22(uVar2,(char *)((int)pvVar1 + 0x8)),
                   s_SCStarve_1050_5156);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Execution logic for the 'Starve' command. Retrieves the target colony entity and
// applies a resource/population adjustment using the value at offset 0x114.

u16 __stdcall16far Simulator_Command_Starve_Execute_Logic(void *this_ptr)
{
  undefined4 uVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)this_ptr + 0x108));
  uVar1 = *(undefined4 *)((int)pvVar3 + 0x1f6);
  Colony_Distribute_Value_Decrement_across_Group_375a
            ((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x0,
             (long)*(int *)((int)this_ptr + 0x114));
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Process_Random_Resource_Event_af08(undefined4 param_1)
{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  void *pvVar6;
  int local_c;
  int iStack_a;
  
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (((int)g_ModeVersion_13AE < 0x1) || (SBORROW2((int)g_ModeVersion_13AE,0x1)))
  {
LAB_1028_af27:
    iStack_a = 0x1;
  }
  else
  {
    if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
        (int)(g_ModeVersion_13AE + -0x1) < 0x1)
    {
      local_c = 0x1;
      iStack_a = 0x1;
      goto LAB_1028_af42;
    }
    if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock) goto LAB_1028_af27;
    iStack_a = 0x2;
  }
  local_c = 0x3;
LAB_1028_af42:
  iVar1 = random_int_range(iStack_a,local_c);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  *(int *)(iVar3 + 0x114) = iVar1;
  pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x108));
  uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
  Turn_Manager_Add_Resource_Change_Entry_Logic
            ((void *)pvVar5,0x0,*(int *)(iVar3 + 0x114),
             *(int *)((int)(void *)pvVar6 + 0x208),*(long *)(iVar3 + 0x108),0x2);
  pvVar5 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Push_Resource_Event_Logic
            ((void *)pvVar5,*(long *)((int)(void *)pvVar6 + 0x4),0xd);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the construction manager associated with the build item by traversing its
// object hierarchy. Equivalent to 1028:B4F2.

void * __stdcall16far UI_Build_Item_Get_Construction_Manager_Logic_b58e(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)this_ptr + 0x8));
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Traverses the build item's hierarchy to retrieve the primary world entity associated
// with its construction manager.

void * __stdcall16far UI_Build_Item_Get_World_Context_Entity_bab6(void *this_ptr)
{
  u8 *puVar1;
  void *pvVar2;
  
  puVar1 = UI_Build_Item_Get_World_Coordinates_bad4(this_ptr);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar1);
  return pvVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the world entity pointer for the build item's parent container.

void * __stdcall16far UI_Build_Item_Get_Parent_World_Entity_baf6(void *this_ptr)
{
  u8 *puVar1;
  void *pvVar2;
  
  puVar1 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  if (puVar1 == NULL)
  {
    return NULL;
  }
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar1);
  return pvVar2;
}



// Returns a pointer to the internal resource state data (offset 0xA4) if the build item
// is in an active state (5, 6).

void * __stdcall16far UI_Build_Item_Get_Resource_Data_Ptr_bb6a(void *this_ptr)
{
  astruct_318 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_318 *)this_ptr;
  if ((uVar1->field18_0x12 != 0x5) && (uVar1->field18_0x12 != 0x6))
  {
    return NULL;
  }
  return (void *)CONCAT22(uVar1->field20_0x16,(void *)(uVar1->field19_0x14 + 0xa4));
}



// Bulk updates internal resource state data (10 bytes) for active build items. Triggers
// entity status flag updates and ensures field 0xAA is initialized to 1.

void __stdcall16far
UI_Build_Item_Update_Resource_Data_Logic_bb96
          (void *this_ptr,u16 data_offset,u16 data_segment)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  astruct_317 *uVar4;
  undefined4 *puVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_317 *)this_ptr;
  if ((uVar4->field18_0x12 == 0x5) || (uVar4->field18_0x12 == 0x6))
  {
    uVar6 = (undefined2)(uVar4->field19_0x14 >> 0x10);
    puVar4 = (undefined4 *)((int)uVar4->field19_0x14 + 0xa4);
    for (iVar3 = 0x2; iVar3 != 0x0; iVar3 += -0x1)
    {
      puVar2 = puVar4;
      puVar4 = puVar4 + 0x1;
      puVar1 = (undefined4 *)data_offset;
      data_offset += 0x4;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)puVar4 = *(undefined2 *)data_offset;
    Simulator_Update_Entity_Status_Flag_at_AC_c724(this_ptr);
    uVar6 = (undefined2)(uVar4->field19_0x14 >> 0x10);
    iVar3 = (int)uVar4->field19_0x14;
    if (*(int *)(iVar3 + 0xaa) == 0x0)
    {
      *(undefined2 *)(iVar3 + 0xaa) = 0x1;
    }
  }
  return;
}



void __stdcall16far Simulator_Object_VCall_40_bc02(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x40);
  (*(code *)*puVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specific property (offset 0x96) from the simulator entity associated with
// the build item.

u16 __stdcall16far UI_Build_Item_Get_Entity_Property_v96_bc4a(undefined4 param_1)
{
  u16 uVar1;
  void *pvVar2;
  
  pvVar2 = Simulator_Object_Clone_from_Manager_e0bc
                     (_p_SimulatorWorldContext,*(undefined2 *)((int)param_1 + 0xc));
  uVar1 = *(u16 *)((int)(void *)pvVar2 + 0x96);
  free_if_not_null((void *)pvVar2);
  return uVar1;
}



// A complex validator for build item placement. Checks simulator context, virtual state
// flags (0x60, 0x5C), and coordinate-based safety rules.

u16 __stdcall16far
UI_Build_Item_Complex_Placement_Validator_bc90
          (void *this_ptr,void *coords,long arg3,long arg4)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  u16 uVar3;
  int iVar4;
  u16 x;
  u16 y;
  
  x = (u16)this_ptr;
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar3 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6(x,y,coords,arg4);
  if ((uVar3 == 0x5) || (uVar3 == 0x6))
  {
    uVar2 = *(undefined4 *)this_ptr;
    puVar1 = (undefined2 *)((int)uVar2 + 0x60);
    iVar4 = (*(code *)*puVar1)();
    if (iVar4 != 0x0)
    {
      puVar1 = (undefined2 *)((int)uVar2 + 0x5c);
      iVar4 = (*(code *)*puVar1)();
      if (iVar4 != 0x0)
      {
        uVar3 = Simulator_Handle_Entity_ID_Change_at_Coords_c23e(x,y,coords,arg3,arg4);
        if (uVar3 != 0x0)
        {
          uVar3 = Simulator_Is_Coordinate_Within_Client_Margins_c314
                            (x,y,coords,(u16)arg3,(u16)((ulong)arg3 >> 0x10),(u8 *)arg4)
          ;
          if (uVar3 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
  }
  else
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Synchronizes simulator-level resource events with the build item. Iterates through
// resource list 0x52 and updates internal object states.

void __stdcall16far UI_Build_Item_Sync_Simulator_Resource_Event_bd38(void *this_ptr)
{
  int iVar1;
  int iVar2;
  void *this_ptr_00;
  undefined2 in_DX;
  void *pvVar3;
  int iStack_14;
  
  this_ptr_00 = (void *)*(undefined4 *)((int)_p_SimulatorWorldContext + 0x52);
  Simulator_Map_Context_Load_Object_Template_4bbe
            (this_ptr_00,*(int *)((int)(void *)this_ptr + 0xc));
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  pvVar3 = (void *)*(undefined4 *)((int)(void *)pvVar3 + 0x2e);
  iStack_14 = 0x11;
  do
  {
    iVar1 = *(int *)(iStack_14 * 0x4 + (int)(void *)this_ptr_00);
    iVar2 = *(int *)((int)(void *)this_ptr_00 + iStack_14 * 0x4 + 0x2);
    if (iVar2 != 0x0 || iVar1 != 0x0)
    {
      Colony_Add_to_Secondary_Resource_Tracker_5770
                (pvVar3,CONCAT22(iVar2,iVar1),iStack_14);
    }
    iStack_14 += 0x1;
  } while (iStack_14 < 0x25);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps the build item to a simulator object based on its current state (4 or 5) and
// type. Stores the resulting pointer at offset 0x14.

void __stdcall16far UI_Build_Item_Map_Simulator_Object_Logic_bf22(astruct_316 *param_1)
{
  int iVar1;
  astruct_316 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_316 *)param_1;
  iVar1 = uVar2->field17_0x12;
  if (iVar1 == 0x4)
  {
    pvVar4 = Simulator_Object_Clone_from_Manager_e0bc
                       (_p_SimulatorWorldContext,uVar2->field12_0xc);
  }
  else
  {
    if (iVar1 != 0x5)
    {
      if (iVar1 != 0x6)
      {
        (&uVar2->field18_0x14)[0x0] = 0x0;
        (&uVar2->field18_0x14)[0x1] = 0x0;
      }
      return;
    }
    pvVar4 = Simulator_Object_Alloc_and_Init_from_Manager_e100
                       (_p_SimulatorWorldContext,uVar2->field12_0xc);
  }
  uVar2->field18_0x14 = (uint16_t)(void *)pvVar4;
  uVar2->field19_0x16 = (uint16_t)((ulong)pvVar4 >> 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Consumes a batch of resources from the colony's storage. Iterates through resource
// list 4 and decrements values until the target amount (param_2) is met.

void __stdcall16far Simulator_Consume_Resources_Batch_c00a(void *this_ptr,long amount)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u8 *packed_id;
  undefined2 uVar4;
  u32 *puVar5;
  uint amount_hi;
  undefined2 uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uStack_1a;
  ulong uStack_16;
  undefined4 uStack_12;
  
  pvVar7 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  uVar1 = *(undefined4 *)((int)pvVar7 + 0x2e);
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar6 = 0x1038;
  puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),puVar3,uVar4);
  uStack_12 = (undefined4 *)CONCAT22(puVar5,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_12 + 0x10);
  uStack_16 = (*(code *)*puVar2)(0x1038,puVar3,puVar5);
  uStack_1a = 0x0;
  do
  {
    if (uStack_16 <= uStack_1a)
    {
LAB_1028_c0d6:
      if (uStack_12 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_12)(uVar6,puVar3,puVar5,0x1);
      }
      return;
    }
    puVar2 = (undefined2 *)((int)*uStack_12 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar2)(uVar6,puVar3,puVar5,(int)uStack_1a,
                                         (int)(uStack_1a >> 0x10));
    pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    uVar6 = 0x1030;
    pvVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar7);
    pvVar8 = UI_Item_List_Sum_Active_Values_Logic_6302(pvVar7);
    amount_hi = (uint)((ulong)pvVar8 >> 0x10);
    if ((amount._2_2_ <= amount_hi) &&
       ((amount._2_2_ < amount_hi || ((uint)amount <= (uint)pvVar8))))
    {
      UI_Item_List_Consume_Resources_by_Type_Logic_6356
                (pvVar7,0x0,(uint)amount,amount._2_2_);
      goto LAB_1028_c0d6;
    }
    UI_Item_List_Consume_Resources_by_Type_Logic_6356(pvVar7,0x0,(uint)pvVar8,amount_hi)
    ;
    amount -= (long)pvVar8;
    uStack_1a += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if a batch of resources is available in the colony's storage. Returns
// non-zero on success, or 0 and sets error 0x6D0 if insufficient.

u16 __stdcall16far Simulator_Validate_Resource_Batch_c0f0(void *this_ptr,long amount)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  u8 *packed_id;
  undefined2 uVar5;
  undefined2 uVar6;
  u32 *puVar7;
  uint uVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  void *pvVar12;
  void *pvVar13;
  ulong uStack_1c;
  ulong uStack_18;
  undefined4 uStack_14;
  u16 uStack_c;
  
  pvVar12 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar5 = (undefined2)((ulong)pvVar12 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)pvVar12 + 0x2e);
  uVar6 = uVar5;
  uStack_c = UI_Build_Item_Check_Consumption_Availability_cb04(this_ptr);
  uVar10 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar9 = (int)uVar1;
  if ((*(int *)(iVar9 + 0x204) == 0x0) && (*(int *)(iVar9 + 0x206) == 0x0))
  {
    puVar4 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    uVar11 = 0x1038;
    puVar7 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                       (iVar9,uVar10,puVar4,uVar6);
    uStack_14 = (undefined4 *)CONCAT22(puVar7,puVar4);
    puVar2 = (undefined2 *)((int)*uStack_14 + 0x10);
    uStack_18 = (*(code *)*puVar2)(0x1038,puVar4,puVar7);
    for (uStack_1c = 0x0; uStack_1c < uStack_18; uStack_1c += 0x1)
    {
      puVar2 = (undefined2 *)((int)*uStack_14 + 0x4);
      packed_id = (u8 *)(*(code *)*puVar2)(uVar11,puVar4,puVar7,(int)uStack_1c,
                                           (int)(uStack_1c >> 0x10));
      pvVar13 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                          (_p_SimulatorWorldContext,packed_id);
      uVar11 = 0x1030;
      pvVar13 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar13);
      pvVar13 = UI_Item_List_Sum_Active_Values_Logic_6302(pvVar13);
      uVar8 = (uint)((ulong)pvVar13 >> 0x10);
      pvVar3 = (void *)pvVar13;
      if ((amount._2_2_ <= uVar8) &&
         ((amount._2_2_ < uVar8 || ((void *)amount <= pvVar3))))
      {
        amount = 0x0;
        break;
      }
      amount = CONCAT22((amount._2_2_ - uVar8) - (uint)((void *)amount < pvVar3),
                        (int)(void *)amount - (int)pvVar3);
    }
    if (uStack_14 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_14)(uVar11,puVar4,puVar7,0x1);
    }
    if (amount != 0x0)
    {
      UI_Component_Set_List_Value_at_26_Logic_7d7c
                ((void *)pvVar12,uVar5,(int)amount,(int)((ulong)amount >> 0x10),0x1d);
      uStack_c = 0x0;
    }
  }
  return uStack_c;
}



// Retrieves the world width/height pair from the current simulator context.

void __stdcall16far
Simulator_Get_World_Dimensions_Pair_c1f8(void *this_ptr,u16 *out_width,u16 *out_height)
{
  int *unaff_SS;
  undefined4 *puVar1;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Parent_World_Entity_baf6(this_ptr);
  puVar1 = Simulator_Get_Entity_Coords_Ptr_5b5c
                     ((int)(void *)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair(&local_c,unaff_SS,(int *)out_width);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if an entity ID has changed at a specific coordinate and, if so, triggers
// virtual updates and notifies the simulator of the change. Involves Type 0x200 checks.

u16 __stdcall16far
Simulator_Handle_Entity_ID_Change_at_Coords_c23e
          (u16 x,u16 y,void *coords,long new_id,long arg5)
{
  u8 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  u8 *puVar5;
  void *this_ptr;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)arg5);
  if (puVar5 != NULL)
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar5);
    puVar1 = (u8 *)*(long *)((int)(void *)this_ptr + 0x2a);
    if (puVar1 != (u8 *)new_id)
    {
      puVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar1);
      uVar3 = (undefined2)((ulong)puVar6 >> 0x10);
      puVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)new_id);
      iVar4 = (int)((ulong)puVar7 >> 0x10);
      if (((puVar6 == NULL) || (iVar4 == 0x0 && (undefined4 *)puVar7 == NULL)) ||
         (((undefined4 *)puVar7)[0x80] != ((undefined4 *)puVar6)[0x80]))
      {
        return 0x0;
      }
      puVar2 = (undefined2 *)((int)*puVar6 + 0x18);
      (*(code *)*puVar2)(0x1030,(undefined4 *)puVar6,uVar3,puVar5);
      puVar2 = (undefined2 *)((int)*puVar7 + 0x8);
      (*(code *)*puVar2)();
      UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee(this_ptr,(void *)new_id);
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if world coordinates are within the safe client margins (1 unit from edges).
// Returns 1 if safe, otherwise 0 and sets error 0x6B8.

u16 __stdcall16far
Simulator_Is_Coordinate_Within_Client_Margins_c314
          (u16 arg1,u16 arg2,void *coords,u16 arg4,u16 arg5,u8 *packed_id)
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
                     ((int)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair((void *)coords,(int *)((ulong)coords >> 0x10),&local_10);
  unpack_word_pair(&local_c,unaff_SS,&local_14);
  if ((((0x1 < local_e) && (0x1 < local_10)) && (local_e < local_12 + -0x1)) &&
     (local_10 < local_14 + -0x1))
  {
    return 0x1;
  }
  PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b8;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extensive validation of entity placement rules based on proximity to other structures
// (using 1030:BCDE). Handles specialized checks for resource category 0x87 and triggers
// virtual interaction loops. Sets error 0x6B6 if too close.

u16 __stdcall16far
Simulator_Validate_Proximity_Interaction_Rules_c3aa
          (u16 x,u16 y,void *coords,u8 *packed_id,long arg5)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined2 uVar4;
  int map_id;
  u32 *puVar5;
  undefined2 uVar6;
  u16 unaff_SS;
  void *pvVar7;
  void *obj_ptr;
  void *pvVar8;
  undefined4 *puVar9;
  long lVar10;
  u32 *puVar11;
  void *pvVar12;
  ulong uStack_28;
  ulong uStack_24;
  undefined4 uStack_20;
  int iStack_18;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar7 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,packed_id);
  uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
  lVar10 = arg5;
  pvVar8 = coords;
  obj_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,
                       (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar7 + 0x10));
  iStack_18 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                        ((u16)local_4,unaff_SS,obj_ptr,pvVar8,lVar10);
  if (iStack_18 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  if (0x1e < iStack_18)
  {
    pvVar8 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
    map_id = (int)((ulong)pvVar8 >> 0x10);
    iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic((void *)pvVar8,map_id);
    if (iVar2 == 0x0)
    {
      puVar3 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      uVar6 = 0x1038;
      puVar5 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e
                         ((void *)pvVar7,uVar4,puVar3,map_id);
      uStack_20 = (undefined4 *)CONCAT22(puVar5,puVar3);
      puVar1 = (undefined2 *)((int)*uStack_20 + 0x10);
      puVar9 = puVar3;
      puVar11 = puVar5;
      uStack_24 = (*(code *)*puVar1)(0x1038,puVar3,puVar5);
      uStack_28 = 0x0;
      while( true )
      {
        if (uStack_24 <= uStack_28)
        {
          if (uStack_20 != NULL)
          {
            (*(code *)*(undefined2 *)(undefined2 *)*uStack_20)
                      (uVar6,puVar3,puVar5,0x1,puVar9,puVar11,uStack_20,uStack_20);
          }
          PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b6;
          PTR_DAT_1050_0000_1050_50cc = (undefined *)(iStack_18 + -0x1e);
          return 0x0;
        }
        pvVar8 = coords;
        lVar10 = arg5;
        pvVar7 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_20);
        uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
        pvVar12 = (void *)pvVar7;
        uVar6 = 0x1030;
        iVar2 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                          ((u16)local_4,unaff_SS,pvVar7,pvVar8,lVar10);
        if ((0x0 < iVar2) && (iVar2 < 0x1f)) break;
        if (iVar2 < iStack_18)
        {
          iStack_18 = iVar2;
        }
        uStack_28 += 0x1;
      }
      if (uStack_20 == NULL)
      {
        return 0x1;
      }
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_20)
                (0x1030,puVar3,puVar5,0x1,puVar9,puVar11,uStack_20,uStack_20,pvVar12,
                 uVar4);
      return 0x1;
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far
Simulator_Validate_Proximity_to_Entity_c522
          (u16 param_1,u16 param_2,void *param_3,u8 *param_4,u16 param_5,long param_6)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u32 local_c;
  u32 local_8;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,param_4);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,param_3,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
  }
  else
  {
    if (iVar1 < 0x1f)
    {
      return 0x1;
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6b6;
    PTR_DAT_1050_0000_1050_50cc = (undefined *)(iVar1 + -0x1e);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if the entity at specified coordinates matches the parameter type or is type
// 0x7A (Type 122). Handles specialized mapping for types 0x7B-0x7F.

u16 __stdcall16far
Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
          (undefined2 param_1,undefined2 param_2,int param_3,void *param_4,void *param_5
          )
{
  int iVar1;
  u8 *puVar2;
  void *pvVar3;
  undefined2 uStack_e;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e(_p_MapContext_5740,param_4,param_5);
  if (puVar2 != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    uStack_e = 0x7a;
    if (0x0 < *(int *)((int)param_4 + 0x4))
    {
      if (param_3 == 0x7b)
      {
        param_3 = 0x7e;
      }
      else if (param_3 == 0x7c)
      {
        param_3 = 0x7d;
      }
      uStack_e = 0x7f;
    }
    if (pvVar3 != NULL)
    {
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if ((pvVar3 != NULL) &&
         ((iVar1 = *(int *)((int)pvVar3 + 0xc), iVar1 == uStack_e || (iVar1 == param_3))
         ))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}
