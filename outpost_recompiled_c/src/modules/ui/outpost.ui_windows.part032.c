/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 32/54
 * Original lines (combined): 96147-101211
 * Boundaries: top-level declarations/definitions only
 */




// Sets a 32-bit value in the managed list stored at offset 0x22. Initializes the list
// if it hasn't been created yet.

void __stdcall16far
UI_Component_Set_List_Value_at_22_Logic_7d1c
          (astruct_235 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  int reg_dx;
  astruct_235 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_235 *)param_1;
  if (uVar1->field34_0x22 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (reg_dx == 0x0 && pvVar1 == NULL)
    {
      uVar1->field34_0x22 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(reg_dx,pvVar1),0xa,0x2);
      *(int *)&uVar1->field34_0x22 = (int)pvVar3;
      *(undefined2 *)((int)&uVar1->field34_0x22 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field34_0x22,(int)((ulong)uVar1->field34_0x22 >> 0x10),
             param_2,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return;
}



// Sets a 32-bit value in the managed list stored at offset 0x26. Initializes the list
// if it hasn't been created yet.

void __stdcall16far
UI_Component_Set_List_Value_at_26_Logic_7d7c
          (astruct_234 *param_1,undefined2 param_2,undefined4 param_3)
{
  void *pvVar1;
  int reg_dx;
  astruct_234 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fffa;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_234 *)param_1;
  if (uVar1->field38_0x26 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
    if (reg_dx == 0x0 && pvVar1 == NULL)
    {
      uVar1->field38_0x26 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(reg_dx,pvVar1),0xa,0x2);
      *(void **)&uVar1->field38_0x26 = (void *)pvVar3;
      *(undefined2 *)((int)&uVar1->field38_0x26 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field38_0x26,(int)((ulong)uVar1->field38_0x26 >> 0x10),
             param_2,(int)param_3,(int)((ulong)param_3 >> 0x10));
  return;
}



// Adds a delta to a value within the managed list at offset 0x22. Automatically handles
// list initialization and search for the target item.

void __stdcall16far
UI_Component_Add_Value_to_List_at_22_Logic_7ddc
          (astruct_233 *param_1,long param_2,undefined2 param_3)
{
  void *pvVar1;
  int reg_dx;
  astruct_233 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 in_stack_0000fff6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_233 *)param_1;
  if (uVar1->field34_0x22 == NULL)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0xa));
    if (reg_dx == 0x0 && pvVar1 == NULL)
    {
      uVar1->field34_0x22 = NULL;
    }
    else
    {
      pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(reg_dx,pvVar1),0xa,0x2);
      *(void **)&uVar1->field34_0x22 = (void *)pvVar3;
      *(undefined2 *)((int)&uVar1->field34_0x22 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
    }
  }
  pvVar3 = UI_Item_List_Find_Item_FarPtr_Logic
                     ((uint *)uVar1->field34_0x22,
                      (int)((ulong)uVar1->field34_0x22 >> 0x10),param_3);
  UI_Item_List_Set_Item_Value_Logic
            ((uint *)uVar1->field34_0x22,(int)((ulong)uVar1->field34_0x22 >> 0x10),
             (long)pvVar3 + param_2,param_3);
  return;
}



// Resolves the entity pointer and, for specific building categories, returns the count
// of similar buildings within its effective search range.

int __stdcall16far UI_Component_Count_Nearby_Buildings_Logic_8030(void *this_ptr)
{
  int iVar1;
  astruct_230 *uVar2;
  undefined2 uVar3;
  int iStack_4;
  
  iStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_230 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if (((0x32 < iVar1) && (!SBORROW2(iVar1,0x33))) &&
     ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 ||
      ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2))))))
  {
    iStack_4 = UI_Build_Item_Count_Total_Buildings_in_Range_1106
                         ((void *)uVar2->field26_0x1a);
  }
  return iStack_4;
}



// Retrieves the 2D world coordinates (X, Y) from the component's internal fields at
// offsets 0x16 and 0x18.

void * __stdcall16far UI_Component_Get_Coordinates_Logic_8086(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  return (void *)(CONCAT22(*(undefined2 *)((int)(void *)this_ptr + 0x18),
                           *(undefined2 *)((int)(void *)this_ptr + 0x16)) & 0xffffff);
}



// A global wrapper that triggers type 4 build event logic (primary list insertion) for
// the build item manager.

void __stdcall16far
Simulator_Global_Process_Build_Event_Type4_835a(void *manager_ptr,void *item_ptr)
{
  UI_Build_Item_Process_Event_Type4_Logic_d566(*(void **)manager_ptr,item_ptr);
  return;
}



// A global wrapper that triggers type 3 build event logic (secondary list insertion)
// for the build item manager.

void __stdcall16far
Simulator_Global_Process_Build_Event_Type3_8372
          (void **manager_ptr,ulong arg2,void *item_ptr)
{
  undefined2 in_stack_00000006;
  
  UI_Build_Item_Process_Event_Type3_Logic_d52c(*_manager_ptr,arg2,item_ptr);
  return;
}



// Checks if the building linked to the UI item is active (state 5 or 9) or still under
// construction. Returns 1 if active or null.

u16 __stdcall16far UI_Build_Item_Check_Building_Active_9ef2(void *this_ptr)
{
  int iVar1;
  void *uVar3;
  
  if (*(long *)this_ptr != 0x0)
  {
    uVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(*(void **)this_ptr);
    uVar3._2_2_ = (undefined2)((ulong)uVar3 >> 0x10);
    iVar1 = *(int *)((int)(void *)uVar3 + 0xc);
    if (((iVar1 != 0x5) && (iVar1 != 0x9)) &&
       (*(int *)((int)(void *)uVar3 + 0x12) < 0x5))
    {
      return 0x0;
    }
    UI_Build_Item_Reset_Pointers_9f64(this_ptr);
  }
  return 0x1;
}



void __stdcall16far UI_Build_Item_Reset_Pointers_9f64(void *this_ptr)
{
  *(undefined2 *)((int)this_ptr + 0x8) = 0x0;
  *(undefined4 *)this_ptr = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Analyzes the surroundings of a placement site and automatically selects the correct
// building or connector type (IDs 0x73, 0x77, 0x7A, 0x7F) based on neighboring
// infrastructure. Triggers the internal put-building command.

u16 __stdcall16far
UI_Build_Item_Execute_Complex_Adjacency_Placement_Logic_a278
          (astruct_201 *param_1,astruct_200 *param_2)
{
  int reg_ax;
  u16 uVar1;
  int iVar2;
  astruct_200 *puVar3;
  astruct_201 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  void *pvVar5;
  undefined1 local_134 [0x120];
  void *pvStack_14;
  long lStack_10;
  void *pvStack_c;
  int iStack_6;
  u16 uStack_4;
  
  uStack_4 = 0x1;
  UI_Build_Item_Find_Adjacent_Building_Coord_Wrapper_a39a(param_1,param_2);
  if (reg_ax != 0x0)
  {
    return uStack_4;
  }
  iStack_6 = reg_ax;
  uVar1 = UI_Build_Item_Find_Adjacent_Group46_Coord_a3ae(param_1,param_2);
  puVar3 = (astruct_200 *)param_2;
  uVar4 = (undefined2)((ulong)param_2 >> 0x10);
  if (uVar1 == 0x0)
  {
    iVar2 = UI_Build_Item_Find_Adjacent_Infrastructure_Coord_a57e(param_1,param_2);
    if (iVar2 == 0x0)
    {
      iVar2 = UI_Build_Item_Find_Adjacent_Group46_Infrastructure_Coord_a844
                        (param_1,param_2);
      if (iVar2 == 0x0)
      {
        uStack_4 = 0x0;
        goto LAB_1030_a305;
      }
      iVar2 = puVar3->field1_0x4;
    }
    else
    {
      iVar2 = puVar3->field1_0x4;
    }
    if (iVar2 < 0x1)
    {
      iStack_6 = 0x73;
    }
    else
    {
      iStack_6 = 0x77;
    }
  }
  else if (puVar3->field1_0x4 < 0x1)
  {
    iStack_6 = 0x7a;
  }
  else
  {
    iStack_6 = 0x7f;
  }
LAB_1030_a305:
  if (iStack_6 != 0x0)
  {
    uVar1 = (u16)((ulong)param_1 >> 0x10);
    uVar3 = (astruct_201 *)param_1;
    lStack_10 = *(long *)((int)uVar3->field3_0x4 + 0x8);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_134,unaff_SS,0x0,iStack_6,param_2,
               *(undefined4 *)((int)uVar3->field3_0x4 + 0x4),lStack_10);
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_134));
    pvStack_c = pvStack_14;
    pvVar5 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvStack_14);
    *(void **)param_1 = (void *)pvVar5;
    uVar3->field2_0x2 = (int)((ulong)pvVar5 >> 0x10);
    if (0x0 < puVar3->field1_0x4)
    {
      Simulator_Process_Building_Site_SubEntities_a044
                ((u16)uVar3,uVar1,param_2,lStack_10);
    }
    uStack_4 = 0x0;
  }
  return uStack_4;
}



// A wrapper that triggers the search for an adjacent coordinate containing a valid
// building.

void __stdcall16far
UI_Build_Item_Find_Adjacent_Building_Coord_Wrapper_a39a(void *this_ptr,void *out_coords)
{
  UI_Build_Item_Find_Adjacent_Building_Coord_aa18(this_ptr,out_coords);
  return;
}



// Rotates or toggles the internal direction state (offset 0xE) for directional build
// items (types 0x18 and 0x3F) based on available connection points.

void __stdcall16far
UI_Build_Item_Rotate_Direction_State_Logic_b142(void *this_ptr,void *arg2)
{
  int iVar2;
  u16 uVar3;
  astruct_190 *uVar4;
  undefined2 uVar5;
  bool bVar6;
  astruct_189 *paVar7;
  undefined4 uStack_c;
  astruct_189 *iVar1;
  
  paVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(arg2);
  uVar5 = (undefined2)((ulong)paVar7 >> 0x10);
  iVar1 = (astruct_189 *)paVar7;
  uStack_c = 0x0;
  if (iVar1->field12_0xc == 0x18)
  {
    uStack_c._2_2_ = Helper_Returns_0_Stub_1c1c();
    uVar3 = iVar1->field33_0x22;
  }
  else
  {
    if (iVar1->field12_0xc != 0x3f) goto LAB_1030_b1a6;
    uStack_c._2_2_ = Helper_Returns_0_Stub_20b0();
    uVar3 = iVar1->field34_0x24;
  }
  uStack_c = CONCAT22(uStack_c._2_2_,uVar3);
LAB_1030_b1a6:
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_190 *)this_ptr;
  if (uVar4->field14_0xe == 0x1)
  {
    bVar6 = (uStack_c & 0x10000) == 0x0;
  }
  else if (uVar4->field14_0xe == 0x2)
  {
    bVar6 = (uStack_c & 0x20000) == 0x0;
  }
  else if (uVar4->field14_0xe == 0x3)
  {
    bVar6 = (uStack_c & 0x40000) == 0x0;
  }
  else
  {
    bVar6 = (uStack_c & 0x80000) == 0x0;
  }
  if ((bVar6) || ((int)uStack_c != 0x0))
  {
    bVar6 = false;
    while( true )
    {
      if (((uStack_c & 0x10000) != 0x0) && ((int)uStack_c == 0x0)) goto LAB_1030_b239;
      if (((uStack_c & 0x20000) != 0x0) && ((int)uStack_c == 0x0)) goto LAB_1030_b247;
      if (((uStack_c & 0x40000) != 0x0) && ((int)uStack_c == 0x0)) goto LAB_1030_b255;
      if (((uStack_c & 0x80000) != 0x0) && ((int)uStack_c == 0x0)) goto LAB_1030_b263;
      if (bVar6) break;
      uStack_c._1_3_ = (uint3)(uStack_c >> 0x8) & 0xffff00;
      iVar2 = uVar4->field14_0xe;
      if (iVar2 == 0x1)
      {
        uStack_c = CONCAT31(uStack_c._1_3_,0x4);
      }
      else if (iVar2 == 0x2)
      {
        uStack_c = CONCAT31(uStack_c._1_3_,0x8);
      }
      else if (iVar2 == 0x3)
      {
        uStack_c = CONCAT31(uStack_c._1_3_,0x1);
      }
      else
      {
        uStack_c = CONCAT31(uStack_c._1_3_,0x2);
      }
      bVar6 = true;
    }
    if (uVar4->field14_0xe == 0x1)
    {
LAB_1030_b255:
      uVar4->field14_0xe = 0x3;
      return;
    }
    if (uVar4->field14_0xe == 0x2)
    {
LAB_1030_b263:
      uVar4->field14_0xe = 0x4;
      return;
    }
    if (uVar4->field14_0xe == 0x3)
    {
LAB_1030_b239:
      uVar4->field14_0xe = 0x1;
      return;
    }
    if (uVar4->field14_0xe == 0x4)
    {
LAB_1030_b247:
      uVar4->field14_0xe = 0x2;
      return;
    }
  }
  return;
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
  int reg_dx;
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
    if (reg_dx == 0x0 && pvVar3 == NULL)
    {
      *(undefined4 *)(iVar10 + 0xe) = 0x0;
    }
    else
    {
      pvVar12 = UI_Item_List_ctor_init_logic((void *)CONCAT22(reg_dx,pvVar3),0x5,0x5);
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
  undefined2 reg_dx;
  int reg_bx;
  undefined2 *puVar2;
  undefined2 *unaff_BP;
  int unaff_SI;
  undefined2 unaff_SS;
  bool reg_zf;
  char reg_sf;
  char reg_of;
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
  if (!reg_zf && reg_of == reg_sf)
  {
    *(char *)(reg_bx + unaff_SI) = *(char *)(reg_bx + unaff_SI) - (byte)reg_dx;
    UI_Item_Base_ctor_with_Params_b22c();
    *(undefined2 *)CONCAT22(in_stack_0000d732,in_stack_0000d730) = 0xbc96;
    in_stack_0000d730[0x1] = 0x1030;
    return (undefined2 *)CONCAT22(in_stack_0000d732,in_stack_0000d730);
  }
  *(byte *)(reg_bx + unaff_SI) = *(byte *)(reg_bx + unaff_SI) & (byte)reg_dx;
  free_if_not_null(pvStack_6);
  return (undefined2 *)CONCAT22(reg_dx,(undefined2 *)0x1);
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
