/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 15/56
 * Original lines (combined): 42745-44767
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the primary UI Main View Controller (vtable 0x1874). It initializes a
// massive state structure with nearly 50 fields, including GDI pens/brushes, resource
// IDs (0xF9-0xFF), and coordinate trackers. It manages a global reference count at
// 0x3960 and registers with multiple simulator resource trackers (0x2F, 9, 0x3B).

long __stdcall16far UI_Main_View_Controller_ctor_init_1874_Logic(long this_ref,int id)
{
  undefined2 *puVar1;
  void *dest;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000fff0;
  astruct_480 *uVar7;
  
  iVar5 = (int)this_ref;
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  lVar4 = UI_Metric_Manager_Object_ctor_init(this_ref,0x0,id);
  iVar2 = (int)((ulong)lVar4 >> 0x10);
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar5 + 0x22) = 0x1008;
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)(iVar5 + 0x22) = 0x1008;
  *(undefined4 *)(iVar5 + 0x24) = 0x0;
  *(undefined4 *)(iVar5 + 0x2c) = 0x0;
  zero_init_struct_6bytes((void *)(iVar5 + 0x30));
  zero_init_struct_6bytes((void *)(iVar5 + 0x36));
  *(undefined4 *)(iVar5 + 0x3c) = 0x0;
  zero_init_12bytes_struct((void *)(iVar5 + 0x40));
  *(undefined4 *)(iVar5 + 0x4c) = 0x0;
  *(undefined4 *)(iVar5 + 0x5a) = 0x0;
  *(undefined2 *)(iVar5 + 0x5e) = 0x0;
  *(undefined4 *)(iVar5 + 0x60) = 0x0;
  *(undefined2 *)(iVar5 + 0x64) = 0xff00;
  *(undefined2 *)(iVar5 + 0x66) = 0x0;
  *(undefined4 *)(iVar5 + 0x68) = 0x10000fb;
  *(undefined4 *)(iVar5 + 0x6c) = 0x10000f9;
  *(undefined4 *)(iVar5 + 0x70) = 0x10000ff;
  *(undefined4 *)(iVar5 + 0x74) = 0x10000fe;
  *(undefined4 *)(iVar5 + 0x78) = 0x10000fc;
  *(undefined4 *)(iVar5 + 0x7c) = 0x0;
  *(undefined4 *)(iVar5 + 0x80) = 0x0;
  *(undefined2 *)(iVar5 + 0x84) = 0x1;
  *(undefined2 *)(iVar5 + 0x86) = 0x0;
  *(undefined4 *)(iVar5 + 0x88) = 0x0;
  *(undefined2 *)(iVar5 + 0x8c) = 0x0;
  *(undefined4 *)(iVar5 + 0x8e) = 0x0;
  *(undefined2 *)(iVar5 + 0x92) = 0x0;
  *(undefined4 *)(iVar5 + 0x94) = 0x0;
  *(undefined2 *)(iVar5 + 0x98) = 0x0;
  *(undefined4 *)(iVar5 + 0x9a) = 0x0;
  *(undefined4 *)(iVar5 + 0xa2) = 0x0;
  *(undefined2 *)(iVar5 + 0xa6) = 0xffff;
  *(undefined2 *)(iVar5 + 0xa8) = 0x0;
  *(char **)this_ref = (char *)s_582_bmp_1050_1871 + 0x3;
  *(undefined2 *)(iVar5 + 0x2) = 0x1018;
  *(undefined2 *)(iVar5 + 0x20) = (char *)s_589_bmp_1050_18a9 + 0x7;
  *(undefined2 *)(iVar5 + 0x22) = 0x1018;
  if ((PTR_DAT_1050_0000_1050_3960 == NULL) && (_PTR_DAT_1050_0000_1050_3962 == NULL))
  {
    dest = allocate_memory(CONCAT22(in_stack_0000fff0,0x8));
    _PTR_DAT_1050_0000_1050_3962 = (void *)CONCAT22(iVar2,dest);
    memset_far(dest,iVar2,0x0);
  }
  PTR_DAT_1050_0000_1050_3960 = PTR_DAT_1050_0000_1050_3960 + 0x1;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)(iVar5 + 0x2c) = (int)lVar4;
  *(undefined2 *)(iVar5 + 0x2e) = (int)((ulong)lVar4 >> 0x10);
  if (this_ref == 0x0)
  {
    iVar2 = 0x0;
    uVar3 = 0x0;
  }
  else
  {
    iVar2 = iVar5 + 0x20;
    uVar3 = uVar6;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x2c) + 0x4);
  (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)(iVar5 + 0x2c),
                     (int)((ulong)*(undefined4 *)(iVar5 + 0x2c) >> 0x10),0x0,iVar2,uVar3
                    );
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lVar4 + 0x80) != 0x0)
  {
    *(undefined2 *)(iVar5 + 0x84) = 0x2;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iVar2 = (int)((ulong)lVar4 >> 0x10);
  *(undefined2 *)(iVar5 + 0x9e) = (int)lVar4;
  *(int *)(iVar5 + 0xa0) = iVar2;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic
                    ((void *)*(undefined2 *)(iVar5 + 0x9e),iVar2);
  if (iVar2 != 0x0)
  {
    *(undefined2 *)(iVar5 + 0xa8) = 0x1;
  }
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  *(undefined2 *)(iVar5 + 0xa2) = (int)lVar4;
  *(undefined2 *)(iVar5 + 0xa4) = (int)((ulong)lVar4 >> 0x10);
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the Main View Controller state for a specific entity. It retrieves the
// entity's coordinates and metadata from the simulator, updates internal tracking
// fields (offsets 0x5A, 0x3C, 0x7C), and triggers a virtual refresh.

void __stdcall16far
UI_Main_View_Controller_Set_Active_Entity_Logic(long this_ref,long entity_ref)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  void *this_ptr;
  long lVar5;
  undefined4 *out_field2;
  void *out_field1;
  
  out_field1 = (void *)CONCAT22(this_ref._2_2_,(void *)((int)this_ref + 0x28));
  out_field2 = (undefined4 *)
               CONCAT22(this_ref._2_2_,(undefined4 *)((int)this_ref + 0x24));
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)entity_ref
                       );
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  UI_Production_Item_Get_Object_Fields_5a52(this_ptr,out_field2,out_field1);
  pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this_ref + 0x24));
  *(undefined2 *)((int)this_ref + 0x5a) = pvVar2;
  *(undefined2 *)((int)this_ref + 0x5c) = uVar4;
  iVar3 = UI_Main_View_Find_Available_Global_Slot_Logic();
  *(int *)((int)this_ref + 0x12) = iVar3 + 0x2;
  *(undefined2 *)(iVar3 * 0x2 + (int)_PTR_DAT_1050_0000_1050_3962) = 0x1;
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ref + 0x18);
  (*(code *)*puVar1)();
  *(long *)((int)this_ref + 0x3c) = entity_ref;
  lVar5 = UI_Get_Entity_FarPtr_at_Offset_10_Logic(*(long *)((int)this_ref + 0x2c));
  *(undefined2 *)((int)this_ref + 0x7c) = (int)lVar5;
  *(undefined2 *)((int)this_ref + 0x7e) = (int)((ulong)lVar5 >> 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Calculate_System_Metrics_09a8(u32 param_1)
{
  int16_t iVar1;
  int16_t iVar2;
  int iVar3;
  undefined2 uVar4;
  long lVar5;
  u16 *out2;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_4 = GetSystemMetrics16(0x4);
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  local_6 = *(int *)(iVar3 + 0x12) - 0x2;
  out2 = &local_a;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar5 + 0xe),(int *)((ulong)lVar5 >> 0x10),(int *)out2)
  ;
  *(int *)(iVar3 + 0x18) = local_6 * local_4 + local_8 + 0x146;
  *(int *)(iVar3 + 0x1a) = local_6 * local_4 + local_a + 0x9;
  iVar1 = GetSystemMetrics16(0x5);
  *(int *)(iVar3 + 0x1c) =
       iVar1 * 0x2 + *(int *)((int)*(undefined4 *)(iVar3 + 0x5a) + 0x4);
  iVar1 = GetSystemMetrics16(0x4);
  iVar2 = GetSystemMetrics16(0x6);
  *(int *)(iVar3 + 0x1e) =
       iVar2 + iVar1 + *(int *)((int)*(undefined4 *)(iVar3 + 0x5a) + 0x8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates two parallel 6-byte structure arrays (offsets 0x94 and 0x9A). The first
// list tracks entities with magic 0x8000001 (Fleets), and the second tracks entities
// with active simulation links. It uses qsort-style allocations and notifies listeners
// upon completion.

void __stdcall16far
UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(long context)
{
  u16 uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined2 unaff_SI;
  undefined2 uVar10;
  undefined2 unaff_SS;
  void *pvVar11;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_14 [0x8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  uVar10 = (undefined2)((ulong)context >> 0x10);
  iVar9 = (int)context;
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar9 + 0x94));
  free_if_not_null((void *)(void *)*(undefined4 *)(iVar9 + 0x9a));
  *(undefined4 *)(iVar9 + 0x94) = 0x0;
  *(undefined4 *)(iVar9 + 0x9a) = 0x0;
  *(undefined2 *)(iVar9 + 0x92) = 0x0;
  *(undefined2 *)(iVar9 + 0x98) = 0x0;
  while( true )
  {
    pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_14));
    uVar8 = (uint)((ulong)pvVar11 >> 0x10);
    pvVar5 = (void *)pvVar11;
    uVar7 = uVar8 | (uint)pvVar5;
    if (uVar7 == 0x0) break;
    if (*(long *)((int)pvVar5 + 0x200) == 0x8000001)
    {
      *(int *)(iVar9 + 0x92) = *(int *)(iVar9 + 0x92) + 0x1;
    }
    else if ((*(int *)(iVar9 + 0xa8) != 0x0) ||
            (iVar4 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic
                               ((void *)(void *)*(undefined4 *)(iVar9 + 0xa2),
                                *(long *)((int)pvVar5 + 0x4),0x4000001), iVar4 != 0x0))
    {
      *(int *)(iVar9 + 0x98) = *(int *)(iVar9 + 0x98) + 0x1;
    }
  }
  uVar8 = 0x0;
  if (*(int *)(iVar9 + 0x92) != 0x0)
  {
    uVar1 = *(u16 *)(iVar9 + 0x92);
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0x6));
    uStack_20 = (void *)CONCAT22(uVar7,pvVar5);
    uVar8 = uVar7 | (uint)pvVar5;
    if (uVar8 == 0x0)
    {
      *(undefined4 *)(iVar9 + 0x94) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uVar1);
      *(undefined4 *)(iVar9 + 0x94) = uStack_20;
    }
  }
  if (*(int *)(iVar9 + 0x98) != 0x0)
  {
    uVar1 = *(u16 *)(iVar9 + 0x98);
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,uVar1 * 0x6));
    uStack_20 = (void *)CONCAT22(uVar8,pvVar5);
    if (uVar8 == 0x0 && pvVar5 == NULL)
    {
      *(undefined4 *)(iVar9 + 0x9a) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uVar1);
      *(undefined4 *)(iVar9 + 0x9a) = uStack_20;
    }
  }
  if (iStack_4 != 0x0)
  {
    uStack_8 = 0x1;
    uStack_6 = 0x0;
  }
  uStack_1c = 0x0;
  uStack_c = uStack_8;
  uStack_a = uStack_6;
LAB_1018_0f74:
  pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                      ((undefined1 *)CONCAT22(unaff_SS,local_14));
  iVar4 = (int)((ulong)pvVar11 >> 0x10);
  pvVar5 = (void *)pvVar11;
  if (iVar4 == 0x0 && pvVar5 == NULL)
  {
    return;
  }
  lVar2 = *(long *)((int)pvVar5 + 0x200);
  Simulator_Get_Entity_Object_from_PackedID_e1ec
            (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)((int)pvVar5 + 0x10));
  iVar6 = (int)uStack_1c;
  iVar3 = uStack_1c._2_2_;
  if (lVar2 != 0x8000001) goto LAB_1018_0ffc;
  iVar4 = *(int *)(iVar9 + 0x94);
  pvVar5 = (void *)*(undefined2 *)(iVar9 + 0x96);
  uStack_1c = CONCAT22(uStack_1c._2_2_ + 0x1,(int)uStack_1c);
  iVar6 = iVar3;
  goto LAB_1018_0fe8;
LAB_1018_0ffc:
  if ((*(int *)(iVar9 + 0xa8) != 0x0) ||
     (iVar4 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic
                        ((void *)(void *)*(undefined4 *)(iVar9 + 0xa2),
                         *(long *)((int)pvVar5 + 0x4),0x4000001), iVar4 != 0x0))
  {
    iVar4 = *(int *)(iVar9 + 0x9a);
    pvVar5 = (void *)*(undefined2 *)(iVar9 + 0x9c);
    uStack_1c = CONCAT22(uStack_1c._2_2_,(int)uStack_1c + 0x1);
LAB_1018_0fe8:
    copy_struct_6bytes((void *)(iVar4 + iVar6 * 0x6),pvVar5);
  }
  goto LAB_1018_0f74;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates an entity collection at offset 0x88 by iterating through the global entity
// list and matching parent IDs (offset 8). It performs nested lookups via resource
// category 2 and copies metadata into a newly allocated array.

void __stdcall16far
UI_Main_View_Controller_Populate_Entity_Collection_88_Logic(long context)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  long lVar4;
  undefined4 *puVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  u32 *puVar9;
  void *this;
  undefined2 unaff_SI;
  int notify_type;
  undefined2 uVar10;
  undefined2 unaff_SS;
  void *pvVar11;
  long lVar12;
  ulong uStack_3c;
  ulong uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  u16 uStack_1e;
  undefined1 local_16 [0x8];
  undefined2 uStack_e;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  int iStack_6;
  int iStack_4;
  
  notify_type = (int)((ulong)context >> 0x10);
  this = (void *)context;
  iStack_4 = *(int *)((int)this + 0x86);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x88));
  *(undefined2 *)((int)this + 0x86) = 0x0;
  *(undefined4 *)((int)this + 0x88) = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x400);
  lVar4 = 0x0;
  while( true )
  {
    uStack_1e = (u16)lVar4;
    pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                        ((undefined1 *)CONCAT22(unaff_SS,local_16));
    uVar7 = (uint)((ulong)pvVar11 >> 0x10);
    pvVar6 = (void *)pvVar11;
    uVar8 = uVar7 | (uint)pvVar6;
    if (uVar8 == 0x0) break;
    if (*(long *)((int)this + 0x3c) == *(long *)((int)pvVar6 + 0x8))
    {
      puVar5 = get_array_element_6bytes
                         ((int *)_p_StringPropertyTable,
                          (int)((ulong)_p_StringPropertyTable >> 0x10));
      puVar9 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                         (pvVar6,uVar7,puVar5,uVar8);
      uStack_30 = (undefined4 *)CONCAT22(puVar9,puVar5);
      puVar2 = (undefined2 *)*uStack_30;
      puVar1 = (undefined2 *)puVar2 + 0x8;
      lVar12 = (*(code *)*puVar1)(0x1038,puVar5,puVar9);
      lVar4 = lVar12 + lVar4;
      if (uStack_30 != NULL)
      {
        puVar1 = (undefined2 *)puVar2;
        (*(code *)*puVar1)(0x1038,puVar5,puVar9,0x1);
      }
    }
  }
  if (lVar4 != 0x0)
  {
    *(u16 *)((int)this + 0x86) = uStack_1e;
    pvVar6 = allocate_memory(CONCAT22(unaff_SI,uStack_1e * 0x6));
    uStack_34 = (void *)CONCAT22(uVar8,pvVar6);
    if (uVar8 == 0x0 && pvVar6 == NULL)
    {
      *(undefined4 *)((int)this + 0x88) = 0x0;
    }
    else
    {
      call_function_n_times
                ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                 uStack_1e);
      *(undefined4 *)((int)this + 0x88) = uStack_34;
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
      pvVar11 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_16));
      uVar7 = (uint)((ulong)pvVar11 >> 0x10);
      pvVar6 = (void *)pvVar11;
      uVar8 = uVar7 | (uint)pvVar6;
      if (uVar8 == 0x0) break;
      if (*(long *)((int)this + 0x3c) == *(long *)((int)pvVar6 + 0x8))
      {
        puVar5 = get_array_element_6bytes
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10));
        uVar10 = 0x1038;
        puVar9 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                           (pvVar6,uVar7,puVar5,uVar8);
        uStack_28 = (undefined4 *)CONCAT22(puVar9,puVar5);
        puVar1 = (undefined2 *)((int)*uStack_28 + 0x10);
        uStack_38 = (*(code *)*puVar1)(0x1038,puVar5,puVar9);
        for (uStack_3c = 0x0; uStack_3c < uStack_38; uStack_3c += 0x1)
        {
          UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_28);
          uVar10 = 0x1008;
          copy_struct_6bytes((void *)((int)*(undefined4 *)((int)this + 0x88) +
                                     iVar3 * 0x6),
                             (void *)((ulong)*(undefined4 *)((int)this + 0x88) >> 0x10))
          ;
          iVar3 += 0x1;
        }
        if (uStack_28 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*uStack_28)(uVar10,puVar5,puVar9,0x1);
        }
      }
    }
    if (*(int *)((int)this + 0x86) != iStack_4)
    {
      UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
    }
  }
  return;
}



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Bulk loading routine for report grid items. It iterates through a range of indices
// and populates the grid's internal cache at offset 0x12 with sub-bitmaps from the
// Resource Manager.

void __stdcall16far UI_Report_Grid_Bulk_Load_Item_Bitmaps_Logic(long context,long ref)
{
  int iVar1;
  void *pvVar2;
  undefined2 reg_dx;
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
    *(undefined2 *)((int)context + uStack_8 * 0x4 + 0x14) = reg_dx;
  }
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
  undefined2 reg_dx;
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
  *(undefined2 *)((undefined *)this_ref + 0x2c) = reg_dx;
  memset_far((undefined *)this_ref + 0x2e,(int)this_ref._2_2_,0x0);
  memset_far((undefined *)this_ref + 0x46,(int)this_ref._2_2_,0x0);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x2e) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x30) = reg_dx;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x32) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x34) = reg_dx;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x36) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x38) = reg_dx;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x3a) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x3c) = reg_dx;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(void **)((undefined *)this_ref + 0x6e) = pvVar1;
  *(undefined2 *)((undefined *)this_ref + 0x70) = reg_dx;
  iStack_4 = 0x0;
  do
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    *(void **)((undefined *)this_ref + iStack_4 * 0x4 + 0x46) = pvVar1;
    *(undefined2 *)((undefined *)this_ref + iStack_4 * 0x4 + 0x48) = reg_dx;
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
