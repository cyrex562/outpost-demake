/*
 * Source: outpost.c
 * Chunk: 39/117
 * Original lines: 43649-44836
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates an entity collection at offset 0x8E, specifically filtering for items where
// the sub-category type (at offset 0x12) is 9. Manages dynamic array reallocation and
// notifies listeners (type 6).

void __stdcall16far
UI_Main_View_Controller_Populate_Type9_Collection_8E_Logic(long context)
{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  u32 *puVar8;
  void *this;
  int notify_type;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *pvVar10;
  undefined2 in_stack_0000ffb2;
  undefined4 uStack_46;
  undefined4 uStack_38;
  ulong uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_1e;
  undefined1 local_16 [0x8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  
  notify_type = (int)((ulong)context >> 0x10);
  this = (void *)context;
  iStack_4 = *(int *)((int)this + 0x8c);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x8e));
  *(undefined2 *)((int)this + 0x8c) = 0x0;
  *(undefined4 *)((int)this + 0x8e) = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x400);
  uStack_1e = 0x0;
  while( true )
  {
    pvVar10 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_16));
    uVar6 = (uint)((ulong)pvVar10 >> 0x10);
    uVar2 = (uint)pvVar10;
    uVar7 = uVar6 | uVar2;
    if (uVar7 == 0x0) break;
    if (*(long *)((int)this + 0x3c) == *(long *)(uVar2 + 0x8))
    {
      puVar4 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      uVar9 = 0x1038;
      puVar8 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                         (uVar2,uVar6,puVar4,uVar7);
      uStack_30 = (undefined4 *)CONCAT22(puVar8,puVar4);
      puVar1 = (undefined2 *)((int)*uStack_30 + 0x10);
      uStack_34 = (*(code *)*puVar1)(0x1038,puVar4,puVar8);
      for (uStack_38 = NULL; uStack_38 < uStack_34;
          uStack_38 = (undefined4 *)((long)uStack_38 + 0x1))
      {
        uVar9 = 0x1030;
        pvVar10 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(uStack_30);
        if (*(int *)((int)pvVar10 + 0x12) == 0x9)
        {
          uStack_1e += 0x1;
        }
      }
      if (uStack_30 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_30)(uVar9,puVar4,puVar8,0x1);
      }
    }
  }
  if (uStack_1e._2_2_ != 0x0 || (u16)uStack_1e != 0x0)
  {
    *(u16 *)((int)this + 0x8c) = (u16)uStack_1e;
    pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffb2,(u16)uStack_1e * 0x6));
    uStack_46 = (void *)CONCAT22(uVar7,pvVar5);
    if (uVar7 == 0x0 && pvVar5 == NULL)
    {
      *(undefined4 *)((int)this + 0x8e) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 (u16)uStack_1e);
      *(undefined4 *)((int)this + 0x8e) = uStack_46;
    }
    if (iStack_6 != 0x0)
    {
      uStack_a = 0x1;
      uStack_8 = 0x0;
    }
    iVar3 = 0x0;
    uStack_e = uStack_a;
    uStack_c = uStack_8;
    while( true )
    {
      pvVar10 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_16));
      uVar6 = (uint)((ulong)pvVar10 >> 0x10);
      uVar2 = (uint)pvVar10;
      uVar7 = uVar6 | uVar2;
      if (uVar7 == 0x0) break;
      if (*(long *)((int)this + 0x3c) == *(long *)(uVar2 + 0x8))
      {
        puVar4 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        uVar9 = 0x1038;
        puVar8 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                           (uVar2,uVar6,puVar4,uVar7);
        uStack_38 = (undefined4 *)CONCAT22(puVar8,puVar4);
        puVar1 = (undefined2 *)((int)*uStack_38 + 0x10);
        uStack_34 = (*(code *)*puVar1)(0x1038,puVar4,puVar8);
        for (uStack_30 = NULL; uStack_30 < uStack_34;
            uStack_30 = (undefined4 *)((long)uStack_30 + 0x1))
        {
          pvVar10 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_38);
          uVar9 = 0x1030;
          pvVar10 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar10);
          if (*(int *)((int)pvVar10 + 0x12) == 0x9)
          {
            uVar9 = 0x1008;
            copy_struct_6bytes((void *)((int)*(undefined4 *)((int)this + 0x8e) +
                                       iVar3 * 0x6),
                               (void *)((ulong)*(undefined4 *)((int)this + 0x8e) >> 0x10
                                       ));
            iVar3 += 0x1;
          }
        }
        if (uStack_38 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_38)(uVar9,puVar4,puVar8,0x1);
        }
      }
    }
    if (*(int *)((int)this + 0x8c) != iStack_4)
    {
      UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
    }
  }
  return;
}



void __stdcall16far
UI_Main_View_Controller_Get_Collection_8E_Logic
          (long context,int *count_out,long *list_out)
{
  undefined2 uVar1;
  undefined4 *in_stack_0000000c;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *in_stack_0000000c = *(undefined4 *)((int)context + 0x8e);
  *_count_out = *(int *)((int)context + 0x8c);
  return;
}



// Unpacks a coordinate pair from offset 0x36, applies provided X/Y offsets, and
// re-packs the result into a 3-word structure at `param_2`.

void __stdcall16far
UI_Main_View_Controller_Offset_and_Pack_3Word_Logic
          (long context,long dest_ref,int dx,int dy)
{
  int *out1;
  int local_6;
  int local_4;
  
  out1 = (int *)((ulong)context >> 0x10);
  unpack_word_pair((void *)((int)context + 0x36),out1,&local_6);
  local_6 += dx + -0x3;
  _local_6 = CONCAT22(local_4 + dy + -0x3,local_6);
  pack_3words_reverse((void *)dest_ref,(int)((ulong)dest_ref >> 0x10),
                      *(int *)((int)context + 0x44),local_6);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1(long context,int dx,int dy)
{
  int local_6 [0x2];
  
  unpack_word_pair((void *)((int)context + 0x36),(int *)((ulong)context >> 0x10),local_6
                  );
  UI_Main_View_Controller_Update_Viewport_and_History_Logic();
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_2(long context,long coords)
{
  UI_Main_View_Controller_Update_Viewport_and_History_Logic
            (context,*(undefined2 *)((int)context + 0x44),coords);
  return;
}



// Core coordinate update logic for the Main View. It clamps input coordinates to entity
// boundaries, updates internal packed structures at 0x30 and 0x36, and triggers a data
// history refresh if the active entity is selected.

void __stdcall16far
UI_Main_View_Controller_Update_Viewport_and_History_Logic
          (void *param_1,int param_2,ulong param_3)
{
  int iVar1;
  void *this;
  int *out1;
  long lVar2;
  int local_6 [0x2];
  
  if (param_3._2_2_ + -0x3 < 0x1)
  {
    param_3 = CONCAT22(0x3,(int)param_3);
  }
  if ((int)param_3 + -0x3 < 0x1)
  {
    param_3 = CONCAT22(param_3._2_2_,0x3);
  }
  out1 = (int *)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)*(undefined4 *)((int)this + 0x5a) + 0x4) <= param_3._2_2_ + 0x2)
  {
    param_3 &= 0xffff;
  }
  iVar1 = *(int *)((int)*(undefined4 *)((int)this + 0x5a) + 0x8);
  if (iVar1 <= (int)param_3 + 0x2)
  {
    param_3._0_2_ = iVar1 + -0x3;
  }
  pack_3words_reverse((void *)((int)this + 0x30),(int)out1,param_2,(int)param_3);
  unpack_word_pair((void *)((int)this + 0x36),out1,local_6);
  pack_3words_reverse((void *)((int)this + 0x36),(int)out1,0x0,(int)param_3);
  *(undefined4 *)((int)this + 0x4c) = 0x0;
  if (*(long *)((int)*(undefined4 *)((int)this + 0x2c) + 0x20) ==
      *(long *)((int)this + 0x3c))
  {
    lVar2 = UI_Component_Populate_Data_History_from_Resource_Logic
                      (*(long *)((int)this + 0x2c),*(long *)((int)this + 0x3c));
    *(undefined2 *)((int)this + 0x4c) = (int)lVar2;
    *(undefined2 *)((int)this + 0x4e) = (int)((ulong)lVar2 >> 0x10);
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)out1);
  }
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_from_Struct_Logic
          (long context,long src_struct_ref)
{
  int *unaff_SS;
  int local_8;
  undefined4 local_6;
  
  unpack_3word_struct((void *)src_struct_ref,(int *)((ulong)src_struct_ref >> 0x10),
                      &local_8,unaff_SS);
  UI_Main_View_Controller_Update_Viewport_and_History_Logic(context,local_8,local_6);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Submit_Command_Wrapper(long context,long arg2,long arg3)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  UI_Component_Submit_Simulator_Command_Logic
            (*(undefined4 *)((int)context + 0x2c),arg2,arg3,
             *(undefined4 *)((int)context + 0x3c));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches for the first available (zero) index in the global 4-slot Main View tracking
// table.

int __stdcall16far UI_Main_View_Find_Available_Global_Slot_Logic(void)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while ((uStack_4 < 0x4 &&
         (*(int *)(uStack_4 * 0x2 + (int)_PTR_DAT_1050_0000_1050_3962) != 0x0)))
  {
    uStack_4 += 0x1;
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Update_Entity_Name_Wrapper(long context,char *name)
{
  void *pvVar1;
  undefined2 in_stack_0000000a;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                      (void *)*(undefined4 *)((int)context + 0x3c));
  UI_Production_Item_Set_Object_Name_Logic_5b6c
            ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),_name);
  return;
}



void * UI_Main_View_Controller_dtor_Wrapper_1842(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0x20));
  pvVar1 = UI_Main_View_Controller_dtor_Scalar_Deleting_184e(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Main_View_Controller_dtor_Scalar_Deleting_184e(void *param_1,byte param_2)
{
  UI_Main_View_Controller_dtor_1874_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Navigation/Map Manager (vtable 0x1FB0). It initializes a
// complex state object (vtable 0x1FEC), retrieves global game settings (resource 0x48),
// and loads a specialized resource atlas (ID 0x9A). Sets up coordinate systems at
// offsets 0x2A and 0x2C.

long __stdcall16far UI_Navigation_Manager_ctor_init_1FB0_Logic(long this_ref,int id)
{
  char *pcVar1;
  void *pvVar2;
  int *out1;
  long lVar3;
  int *out2;
  int value;
  int local_6;
  int local_4;
  astruct_475 *uVar6;
  
  uVar6 = (astruct_475 *)this_ref;
  value = (int)((ulong)this_ref >> 0x10);
  UI_Metric_Manager_Object_ctor_init(this_ref,0x0,id);
  uVar6->field31_0x20 = (u16)(char *)s_1_1050_389a;
  uVar6->field32_0x22 = 0x1008;
  uVar6->field31_0x20 = (u16)((char *)s_18_2_1050_3aa5 + 0x3);
  uVar6->field32_0x22 = 0x1008;
  (&uVar6->field33_0x24)[0x0] = NULL;
  (&uVar6->field33_0x24)[0x1] = NULL;
  uVar6->field35_0x28 = 0x4;
  zero_init_struct_6bytes(&uVar6->field_0x3a);
  uVar6->field54_0x40 = 0x0;
  uVar6->field55_0x44 = 0x0;
  uVar6->field56_0x46 = 0x0;
  uVar6->field57_0x4a = 0x0;
  uVar6->field68_0x56 = 0x0;
  *(char **)this_ref = (char *)s_561_bmp_1050_1faf + 0x1;
  uVar6->field2_0x2 = 0x1018;
  uVar6->field31_0x20 = (u16)((char *)s_568_bmp_1050_1fe7 + 0x5);
  uVar6->field32_0x22 = 0x1018;
  memset_far(&uVar6->field_0x4e,value,0x0);
  out2 = &local_6;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  out1 = (int *)((ulong)lVar3 >> 0x10);
  unpack_word_pair((void *)((int)lVar3 + 0xe),out1,out2);
  pcVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  uVar6->field33_0x24 = pcVar1;
  uVar6->field34_0x26 = (u16)out1;
  pvVar2 = get_with_lazy_init(uVar6->field33_0x24);
  memset_far(&uVar6->field_0x32,value,0x0);
  uVar6->field46_0x36 = *(u16 *)((int)pvVar2 + 0x4);
  uVar6->field47_0x38 = *(u16 *)((int)pvVar2 + 0x8);
  uVar6->field36_0x2a = local_4 + 0x14;
  uVar6->field37_0x2c = local_6 + 0x14;
  UI_Navigation_Manager_Calculate_Window_Metrics_Logic(this_ref);
  pack_3words_reverse(&uVar6->field_0x3a,value,0x0,0x88);
  return this_ref;
}



// Destructor for the Navigation Manager. Frees internal buffers and calls the base
// destructor.

void __stdcall16far UI_Navigation_Manager_dtor_1FB0_Logic(long this_ref)
{
  undefined2 *puVar1;
  u16 *puVar2;
  astruct_474 *uVar3;
  undefined2 uVar4;
  u16 *puStack_e;
  undefined2 uStack_c;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_474 *)this_ref;
  *(char **)this_ref = (char *)s_561_bmp_1050_1faf + 0x1;
  uVar3->field2_0x2 = 0x1018;
  uVar3->field31_0x20 = (u16)((char *)s_568_bmp_1050_1fe7 + 0x5);
  uVar3->field32_0x22 = 0x1018;
  if (uVar3->field34_0x26 != 0x0 || uVar3->field33_0x24 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar3->field33_0x24;
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)uVar3->field59_0x40);
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar3->field31_0x20;
  }
  _puStack_e = (u16 *)CONCAT22(uVar4,puVar2);
  *_puStack_e = (u16)(char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a full population of the entity summary array (offset 0x40) by querying the
// global entity collection from resource tracker 3.

void __stdcall16far UI_Navigation_Manager_Populate_Summary_Logic(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  long src_context;
  undefined2 *dest_array_ref;
  undefined2 local_8;
  undefined4 uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  if (*(int *)(iVar1 + 0x44) != 0x0)
  {
    if (*(long *)(iVar1 + 0x46) != 0x0)
    {
      *(undefined2 *)((int)*(undefined4 *)(iVar1 + 0x46) + 0xe) = 0x0;
      *(undefined4 *)(iVar1 + 0x46) = 0x0;
    }
    *(int *)(iVar1 + 0x4a) = *(int *)(iVar1 + 0x4a) + 0x1;
    return;
  }
  dest_array_ref = (undefined2 *)CONCAT22(unaff_SS,&local_8);
  src_context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  UI_Populate_Entity_Summary_Array_Logic(src_context,(long)dest_array_ref);
  *(undefined2 *)(iVar1 + 0x44) = local_8;
  *(undefined4 *)(iVar1 + 0x40) = uStack_6;
  UI_Navigation_Manager_Snap_Entity_Coordinates_Logic(this_ref);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates/cycles values within the 24-byte entry array at offset 0x40. It recalculates
// internal states and notifies listeners (type 0xD).

void __stdcall16far UI_Navigation_Manager_Cycle_Items_Logic(long this_ref,int delta)
{
  void *src;
  int *out1;
  astruct_473 *uVar4;
  int notify_type;
  int iStack_c;
  int local_6 [0x2];
  
  iStack_c = 0x0;
  while( true )
  {
    notify_type = (int)((ulong)this_ref >> 0x10);
    uVar4 = (astruct_473 *)this_ref;
    if (uVar4->field65_0x44 <= iStack_c) break;
    out1 = (int *)(uVar4->field64_0x40 >> 0x10);
    src = (void *)((int)uVar4->field64_0x40 + iStack_c * 0x18);
    *(int *)((int)src + 0x6) = *(int *)((int)src + 0x6) + delta * 0x2 + -0x1;
    if (0x23 < *(int *)((int)src + 0x6))
    {
      *(undefined2 *)((int)src + 0x6) = 0x0;
    }
    if (*(int *)((int)src + 0x6) < 0x0)
    {
      *(undefined2 *)((int)src + 0x6) = 0x23;
    }
    copy_struct_6bytes((void *)((int)src + 0x10),out1);
    *(undefined2 *)((int)src + 0x16) = *(undefined2 *)((int)src + 0xa);
    unpack_word_pair(src,out1,local_6);
    pack_3words_reverse(src,(int)out1,0x0,local_6[0x0]);
    *(undefined2 *)((int)src + 0xa) =
         *(undefined2 *)(*(int *)((int)src + 0x6) * 0x2 + 0x3966);
    iStack_c += 0x1;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(uVar4,notify_type);
  return;
}



// Performs a point-in-rect check against all entity summary regions in the active
// navigation view. On a hit, it triggers an entity-specific selection or action.

int __stdcall16far
UI_Navigation_Manager_HitTest_Entities_Logic(long this_ref,int y,int x)
{
  int iVar1;
  BOOL16 BVar2;
  int *out1;
  void *src;
  undefined2 unaff_SS;
  int iStack_1a;
  POINT16 PStack_18;
  int local_14;
  int local_12;
  int iStack_10;
  undefined4 uStack_e;
  int local_a;
  int local_8;
  int iStack_6;
  int iStack_4;
  
  uStack_e = NULL;
  iVar1 = (int)this_ref;
  out1 = (int *)((ulong)this_ref >> 0x10);
  unpack_word_pair((void *)(iVar1 + 0x3a),out1,&local_14);
  PStack_18.y = y;
  PStack_18.x = x;
  iStack_10 = 0x0;
  iStack_1a = 0x0;
  while( true )
  {
    if (*(int *)(iVar1 + 0x44) <= iStack_1a)
    {
      return iStack_10;
    }
    src = (void *)(*(int *)(iVar1 + 0x40) + iStack_1a * 0x18);
    uStack_e = (void *)CONCAT22((int *)*(undefined2 *)(iVar1 + 0x42),src);
    unpack_word_pair(src,(int *)*(undefined2 *)(iVar1 + 0x42),&local_8);
    local_a += local_12 + -0x6;
    iStack_6 = local_a + 0xc;
    local_8 += local_14 + -0x6;
    iStack_4 = local_8 + 0xc;
    BVar2 = PtInRect(PStack_18,(int *)CONCAT22(unaff_SS,&local_a));
    if (BVar2 != 0x0) break;
    iStack_1a += 0x1;
  }
  UI_Navigation_Manager_Set_Active_Selection_Logic(this_ref,(long)uStack_e);
  return 0x1;
}



// Searches the navigation entity collection for a match against an external ID and sets
// it as the active selection if found.

int __stdcall16far
UI_Navigation_Manager_Find_and_Select_Entity_Logic(long context,int id)
{
  undefined4 uVar1;
  astruct_472 *uVar2;
  undefined2 uVar3;
  int iStack_a;
  
  iStack_a = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)context >> 0x10);
    if (*(int *)((int)context + 0x44) <= iStack_a)
    {
      return 0x0;
    }
    uVar1 = *(undefined4 *)((int)context + 0x40);
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar2 = (astruct_472 *)((int)uVar1 + iStack_a * 0x18);
    if (*(int *)(uVar2->field12_0xc * 0x1e + 0x3c32) == id) break;
    iStack_a += 0x1;
  }
  UI_Navigation_Manager_Set_Active_Selection_Logic(context,(long)CONCAT22(uVar3,uVar2));
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs complex coordinate transformations and rounding for map entities. It snaps
// values to 5 or 10 pixel increments and validates positions against global boundary
// tables.

void __stdcall16far UI_Navigation_Manager_Snap_Entity_Coordinates_Logic(long context)
{
  int iVar1;
  astruct_471 *uVar3;
  void *dest;
  int *out1;
  int *unaff_SS;
  int iStack_1a;
  int local_18 [0x2];
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int local_e;
  int local_c;
  int local_a;
  int iStack_8;
  undefined4 uStack_6;
  
  out1 = (int *)((ulong)context >> 0x10);
  uVar3 = (astruct_471 *)context;
  uStack_6 = uVar3->field64_0x40;
  iStack_8 = 0x0;
  do
  {
    if (uVar3->field65_0x44 <= iStack_8)
    {
      return;
    }
    unpack_3word_struct((void *)(iStack_8 * 0x18 + (int)uStack_6),uStack_6._2_2_,
                        &local_e,unaff_SS);
    local_a /= 0xa;
    iStack_10 = local_c % 0xa;
    if (iStack_10 != 0x0)
    {
      if (iStack_10 < 0x6)
      {
        local_c -= iStack_10;
      }
      else
      {
        local_c += 0xa - iStack_10;
      }
    }
    iStack_12 = abs_u16_to_i16_logic(local_e);
    iStack_12 /= 0x5;
    if (0x14 < iStack_12)
    {
      iStack_12 = 0x14;
      iVar1 = abs_u16_to_i16_logic(local_e);
      local_e = (local_e / iVar1) * 0x64;
    }
    iStack_10 = abs_u16_to_i16_logic(local_e);
    iStack_10 %= 0x5;
    if (iStack_10 != 0x0)
    {
      if (local_e < 0x0)
      {
        iVar1 = iStack_10;
        if (0x2 < iStack_10)
        {
          iVar1 = iStack_10 + -0x5;
        }
        local_e += iVar1;
      }
      else if (iStack_10 < 0x3)
      {
        local_e -= iStack_10;
      }
      else
      {
        local_e += 0x5 - iStack_10;
      }
    }
    iStack_14 = *(int *)((int)(void **)&PTR_s_3_65_1050_39b1_1050_3c1e +
                        iStack_12 * 0x48 + 0x2);
    if (local_c < iStack_14)
    {
      for (iStack_1a = iStack_12; iStack_1a < 0x15; iStack_1a += 0x1)
      {
        if (*(int *)((int)(void **)&PTR_s_3_65_1050_39b1_1050_3c1e +
                    iStack_1a * 0x48 + 0x2) <= local_c)
        {
          iStack_12 = iStack_1a;
          break;
        }
      }
    }
    unpack_word_pair(&uVar3->field_0x3a,out1,local_18);
    dest = (void *)(iStack_8 * 0x18 + (int)uStack_6);
    iVar1 = (int)uStack_6._2_2_;
    *(int *)((int)dest + 0x6) = local_a;
    *(int *)((int)dest + 0x8) = iStack_12;
    pack_3words_reverse(dest,(int)uStack_6._2_2_,0x0,local_e);
    *(undefined2 *)((int)dest + 0xa) = *(undefined2 *)(local_a * 0x2 + 0x3966);
    iStack_8 += 0x1;
  } while( true );
}



// Returns a far pointer to a metadata entry in the global table at 0x3C18 based on an
// entity index.

long __stdcall16far UI_Navigation_Manager_Get_Metadata_Ptr_Logic(long context,int index)
{
  undefined4 uVar1;
  
  if (index == -0x1)
  {
    uVar1 = *(undefined4 *)((int)context + 0x46);
    index = *(int *)((int)uVar1 + 0xc);
  }
  return CONCAT22(0x1050,index * 0x1e + 0x3c18);
}



// Calculates required window dimensions based on system frame/caption metrics and
// internal content size.

void __stdcall16far UI_Navigation_Manager_Calculate_Window_Metrics_Logic(long context)
{
  int16_t iVar1;
  int16_t iVar2;
  astruct_470 *uVar3;
  undefined2 uVar4;
  
  iVar1 = GetSystemMetrics16(0x5);
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_470 *)context;
  uVar3->field46_0x2e = iVar1 * 0x2 + uVar3->field52_0x36;
  iVar1 = GetSystemMetrics16(0x4);
  iVar2 = GetSystemMetrics16(0x6);
  uVar3->field47_0x30 = iVar1 + uVar3->field53_0x38 + iVar2;
  return;
}



// Updates the active selection pointer at offset 0x46. Manages state flags (1 for
// active, 2 for previously active) and notifies listeners.

void __stdcall16far
UI_Navigation_Manager_Set_Active_Selection_Logic(long context,long selection)
{
  astruct_469 *uVar1;
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  uVar1 = (astruct_469 *)context;
  if (uVar1->field70_0x46 != NULL)
  {
    *(undefined2 *)((int)(void *)uVar1->field70_0x46 + 0xe) = 0x2;
  }
  uVar1->field70_0x46 = (void *)selection;
  *(undefined2 *)((int)selection + 0xe) = 0x1;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(uVar1,notify_type);
  return;
}



int __stdcall16far
UI_Navigation_Manager_Contains_Value_at_Offset_4E_Logic(long context,int value)
{
  astruct_468 *uVar1;
  undefined2 uVar2;
  int iStack_6;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_468 *)context;
  if (uVar1->field86_0x56 == 0x0)
  {
    return 0x0;
  }
  iStack_6 = 0x0;
  while( true )
  {
    if (uVar1->field86_0x56 <= iStack_6)
    {
      return 0x0;
    }
    if (*(int *)(&uVar1->field_0x4e + iStack_6 * 0x2) == value) break;
    iStack_6 += 0x1;
  }
  return 0x1;
}



long UI_Navigation_Manager_dtor_Wrapper_1f6a(u16 param_1,long param_2,byte param_3)
{
  long lVar1;
  
  param_2 = CONCAT22(param_2._2_2_,(int)param_2 + -0x20);
  lVar1 = UI_Navigation_Manager_scalar_dtor_1FB0(param_2,param_3);
  return lVar1;
}



void __stdcall16far void_noop_stub_1018_1f76(void)
{
  return;
}



u32 __stdcall16far
UI_Navigation_Manager_Get_Property_at_2A_1f7a(int param_1,u16 param_2)
{
  return CONCAT22(param_2,param_1 + 0x2a);
}



long __stdcall16far UI_Navigation_Manager_scalar_dtor_1FB0(long this_ref,byte flags)
{
  UI_Navigation_Manager_dtor_1FB0_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Report Grid Manager (vtable 0x21E8). It initializes a 509-slot
// object array (0x7F4 bytes) and sets up grid dimensions based on global game settings.

long __stdcall16far UI_Report_Grid_Manager_ctor_init_21E8_Logic(long this_ref,int id)
{
  int *out2;
  int local_a;
  int local_8;
  long lStack_6;
  
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined4 *)((int)(void *)this_ref + 0xa) = 0xb9010b;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x170035;
  *(char **)this_ref = (char *)s_556a_bmp_1050_21e5 + 0x3;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  out2 = &local_a;
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lStack_6 + 0xe),(int *)((ulong)lStack_6 >> 0x10),out2);
  *(int *)((int)(void *)this_ref + 0xa) =
       *(int *)((int)(void *)this_ref + 0xa) + local_8;
  *(int *)((int)(void *)this_ref + 0xc) =
       *(int *)((int)(void *)this_ref + 0xc) + local_a;
  memset_far((void *)((int)(void *)this_ref + 0x12),this_ref._2_2_,0x0);
  return this_ref;
}



void __stdcall16far UI_Report_Grid_Manager_dtor_21E8_Logic(long this_ref)
{
  *(char **)this_ref = (char *)s_556a_bmp_1050_21e5 + 0x3;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  UI_Report_Grid_Manager_Cleanup_Collection_Logic(this_ref);
  Base_Object_dtor_2014_Logic((void *)this_ref);
  return;
}



// Iterates through the 509-slot object array in the report grid and invokes the virtual
// destructor for every active object entry.

void __stdcall16far UI_Report_Grid_Manager_Cleanup_Collection_Logic(long this_ref)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    uVar4 = (undefined2)((ulong)this_ref >> 0x10);
    iVar3 = (int)this_ref + 0x12;
    puVar1 = (undefined4 *)*(int *)(iVar3 + iStack_4 * 0x4);
    iVar3 = *(int *)(iVar3 + iStack_4 * 0x4 + 0x2);
    if (iVar3 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    *(undefined4 *)((int)this_ref + iStack_4 * 0x4 + 0x12) = 0x0;
    iStack_4 += 0x1;
  } while (iStack_4 < 0x1fd);
  return;
}



// Retrieves a bitmap pointer for a specific item in the report grid. It uses an
// external tracker (param_2) to index into the grid's 509-slot cache and performs lazy
// loading of the bitmap range if necessary.

long __stdcall16far UI_Report_Grid_Get_Item_Bitmap_Logic(long context,int *item_ptr)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_0000000a;
  undefined4 uStack_8;
  
  iVar1 = Gameplay_SubObject_Check_Field1_NonZero_Logic(item_ptr);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  iVar1 = *_item_ptr;
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uStack_8 = *(long *)((int)context + iVar1 * 0x4 + 0x12);
  if (uStack_8 == 0x0)
  {
    UI_Report_Grid_Bulk_Load_Item_Bitmaps_Logic(context,(long)_item_ptr);
    uStack_8 = *(long *)((int)context + iVar1 * 0x4 + 0x12);
  }
  Gameplay_SubObject_Process_Tick_Logic(item_ptr);
  return uStack_8;
}



void __stdcall16far UI_Pack_Words_from_Table_3E8E_Logic(long dest_ref,int index)
{
  int in_stack_0000000a;
  int in_stack_0000000c;
  
  pack_3words_reverse((void *)index,in_stack_0000000a,0x0,
                      *(int *)(in_stack_0000000c * 0x4 + 0x3e90));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Bulk loading routine for report grid items. It iterates through a range of indices
// and populates the grid's internal cache at offset 0x12 with sub-bitmaps from the
// Resource Manager.

void __stdcall16far UI_Report_Grid_Bulk_Load_Item_Bitmaps_Logic(long context,long ref)
{
  int iVar1;
  void *pvVar2;
  undefined2 in_DX;
  undefined2 uVar3;
  undefined2 uStack_8;
  
  uStack_8 = Gameplay_SubObject_get_table_value_logic((void *)ref);
  iVar1 = Gameplay_SubObject_get_table_value_field2_logic((void *)ref);
  for (; uStack_8 <= iVar1; uStack_8 += 0x1)
  {
    pvVar2 = Resource_Manager_Get_SubBitmap_by_Index_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar3 = (undefined2)((ulong)context >> 0x10);
    *(undefined2 *)((int)context + uStack_8 * 0x4 + 0x12) = pvVar2;
    *(undefined2 *)((int)context + uStack_8 * 0x4 + 0x14) = in_DX;
  }
  return;
}



long __stdcall16far UI_Report_Grid_Manager_scalar_dtor_21E8(long this_ref,byte flags)
{
  UI_Report_Grid_Manager_dtor_21E8_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



void __cdecl16far UI_Coordinate_Table_Batch_Initialize_21f8(void)
{
  pack_3words_alt((void *)0x4210,0x1048,0x0,0x195);
  pack_3words_alt((void *)0x65ca,0x1050,0x0,0xe0);
  pack_3words_alt((void *)0x65d0,0x1050,0x0,0x17a);
  pack_3words_alt((void *)0x65d6,0x1050,0x0,0xde);
  pack_3words_alt((void *)0x65dc,0x1050,0x0,0x177);
  pack_3words_alt((u16 *)&u16_1050_4216,0x1048,0x0,0x195);
  pack_3words_alt((void **)&PTR_s___1050_41da_1050_421c,0x1048,0x0,0x1b6);
  pack_3words_alt((void *)((int)(void **)&PTR_s_A_1050_4202_1050_4220 + 0x2),0x1048,0x0,
                  0x109);
  pack_3words_alt((void **)&PTR_DAT_1050_41aa_1050_4228,0x1048,0x0,0xfd);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Construction Manager (vtable 0x2ADA). It initializes a complex
// state structure, loads multiple themed resource atlases (0x66-0x6C, 0x8F-0x98, 0x1A8,
// 0x1CD), and registers with simulator resource tracker 0x73.

long __stdcall16far UI_Construction_Manager_ctor_init_2ADA_Logic(long this_ref,int id)
{
  void *pvVar1;
  undefined *parent;
  undefined2 in_DX;
  int iStack_4;
  
  Build_Site_Object_Base_ctor(this_ref,id);
  *(char **)((undefined *)this_ref + 0x1c) = (char *)s_1_1050_389a;
  *(undefined2 *)((undefined *)this_ref + 0x1e) = 0x1008;
  *(char **)((undefined *)this_ref + 0x1c) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((undefined *)this_ref + 0x1e) = 0x1008;
  *(undefined4 *)((undefined *)this_ref + 0x20) = 0x0;
  *(undefined2 *)((undefined *)this_ref + 0x24) = 0x0;
  *(undefined4 *)((undefined *)this_ref + 0x26) = 0x0;
  *(undefined4 *)((undefined *)this_ref + 0x2a) = 0x0;
  *(undefined2 *)((undefined *)this_ref + 0x3e) = 0x0;
  *(undefined2 *)((undefined *)this_ref + 0x40) = 0x0;
  *(undefined2 *)((undefined *)this_ref + 0x42) = 0x0;
  *(undefined2 *)((undefined *)this_ref + 0x44) = 0x0;
  *(undefined4 *)((undefined *)this_ref + 0x6e) = 0x0;
  *(char **)this_ref = (char *)s_fem130_wav_1050_2ad6 + 0x4;
  *(undefined2 *)((undefined *)this_ref + 0x2) = 0x1018;
  *(char **)((undefined *)this_ref + 0x1c) = (char *)s_fem132_wav_1050_2aec + 0x6;
  *(undefined2 *)((undefined *)this_ref + 0x1e) = 0x1018;
  p_GlobalPaletteObject = (undefined *)this_ref;
  PTR_DAT_1050_0000_1050_4232 = this_ref._2_2_;
  Build_Site_Object_Initialize_Vtable_and_Resource(this_ref,0x105);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x2a) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x2c) = in_DX;
  memset_far((undefined *)this_ref + 0x2e,(int)this_ref._2_2_,0x0);
  memset_far((undefined *)this_ref + 0x46,(int)this_ref._2_2_,0x0);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x2e) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x30) = in_DX;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x32) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x34) = in_DX;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x36) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x38) = in_DX;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x3a) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x3c) = in_DX;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x6e) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x70) = in_DX;
  iStack_4 = 0x0;
  do
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    *(void **)((undefined *)this_ref + iStack_4 * 0x4 + 0x46) = pvVar1;
    *(undefined2 *)((undefined *)this_ref + iStack_4 * 0x4 + 0x48) = in_DX;
    iStack_4 += 0x1;
  } while (iStack_4 < 0xa);
  if (this_ref == 0x0)
  {
    parent = NULL;
  }
  else
  {
    parent = (undefined *)this_ref + 0x1c;
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),0x73,parent);
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Destructor for the Construction Manager. It unregisters from the simulator tracker,
// destroys sub-objects at offsets 0x2A and 0x6E, and cleans up internal buffers before
// calling the base destructor.

void __stdcall16far UI_Construction_Manager_dtor_2ADA_Logic(long this_ref)
{
  u32 *puVar1;
  int iVar2;
  u16 *puVar3;
  undefined2 uVar4;
  astruct_467 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  u16 *puStack_6;
  undefined2 uStack_4;
  
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  uVar5 = (astruct_467 *)this_ref;
  *(char **)this_ref = (char *)s_fem130_wav_1050_2ad6 + 0x4;
  uVar5->field2_0x2 = 0x1018;
  uVar5->field27_0x1c = (u16)((char *)s_fem132_wav_1050_2aec + 0x6);
  uVar5->field28_0x1e = 0x1018;
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (this_ref == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar3 = &uVar5->field27_0x1c;
      uVar4 = uVar6;
    }
    unaff_CS = 0x1008;
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,0x73,(long)CONCAT22(uVar4,puVar3));
  }
  puVar1 = uVar5->field39_0x2a;
  iVar2 = uVar5->field40_0x2c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar5->field105_0x6e;
  iVar2 = uVar5->field106_0x70;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  if (this_ref == 0x0)
  {
    puVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar3 = &uVar5->field27_0x1c;
  }
  _puStack_6 = (u16 *)CONCAT22(uVar6,puVar3);
  *_puStack_6 = (u16)(char *)s_1_1050_389a;
  puVar3[0x1] = 0x1008;
  Build_Site_Object_dtor_Internal(this_ref);
  return;
}
