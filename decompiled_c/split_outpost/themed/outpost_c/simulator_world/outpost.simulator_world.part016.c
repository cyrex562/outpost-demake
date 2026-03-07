/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 16/56
 * Original lines (combined): 44837-47115
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __stdcall16far Simulator_Check_Resource_4000001_Count_Logic_maybe(void)
{
  u16 uVar1;
  void *pvVar2;
  
  pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)(undefined4 *)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000001);
  if (pvVar2 != NULL)
  {
    uVar1 = UI_List_Node_Get_Sequence_ID_d69e(*(void **)*_p_SimulatorGlobalState);
    if (uVar1 == 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Uses the Main View Controller to resolve coordinates and then dispatches a UI action
// via resource tracker 0x32.

int __stdcall16far
UI_Construction_Manager_Dispatch_Action_at_Coords_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined1 local_8 [0x6];
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(long *)((int)param_1 + 0x20) == 0x0)
  {
    return 0x0;
  }
  zero_init_struct_6bytes(local_8);
  UI_Main_View_Controller_Offset_and_Pack_3Word_Logic
            (*(long *)((int)param_1 + 0x20),(long)CONCAT22(unaff_SS,local_8),
             (int)param_3,(int)((ulong)param_3 >> 0x10));
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  iVar1 = UI_Determine_and_Dispatch_Entity_Action_Logic
                    ((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10));
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far Simulator_Get_Ticks_Wrapper(void)
{
  u32 uVar1;
  
  uVar1 = Simulator_Global_Get_Current_Tick_8326();
  return uVar1;
}



// Retrieves a 6-byte structure from a global table at 0x1050:65CA based on the provided
// index.

void __stdcall16far Resource_Manager_Get_6Byte_Struct_from_65CA_Logic(void)
{
  void *in_stack_0000000a;
  
  copy_struct_6bytes((void *)in_stack_0000000a,
                     (void *)((ulong)in_stack_0000000a >> 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Swaps the currently selected structure/building resource in the Construction Manager.
// It unregisters the old resource, loads the new one by ID (param_3), and registers
// itself as a listener. Sets a 'dirty' flag (0x24) if the selection has a valid bitmap.

void __stdcall16far
UI_Construction_Manager_Switch_Selected_Structure_Logic
          (long context,int command,int res_id)
{
  undefined2 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  astruct_464 *uVar4;
  int notify_type;
  long lVar4;
  
  uVar4 = (astruct_464 *)context;
  notify_type = (int)((ulong)context >> 0x10);
  if (command == 0x0)
  {
    if ((*(long *)&uVar4->field32_0x20 == 0x0) ||
       (*(int *)((int)*(undefined4 *)&uVar4->field32_0x20 + 0x8) != res_id))
    {
      lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,res_id);
      if (*(long *)&uVar4->field32_0x20 != 0x0)
      {
        if (context == 0x0)
        {
          puVar2 = NULL;
          iVar3 = 0x0;
        }
        else
        {
          puVar2 = &uVar4->field_0x1c;
          iVar3 = notify_type;
        }
        UI_Container_Remove_Item_at_Offset_4_Logic
                  ((void *)*(void **)&uVar4->field32_0x20,(long)CONCAT22(iVar3,puVar2));
      }
      *(long *)&uVar4->field32_0x20 = lVar4;
      if (context == 0x0)
      {
        puVar2 = NULL;
        iVar3 = 0x0;
      }
      else
      {
        puVar2 = &uVar4->field_0x1c;
        iVar3 = notify_type;
      }
      puVar1 = (undefined2 *)((int)**(undefined4 **)&uVar4->field32_0x20 + 0x4);
      (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)&uVar4->field32_0x20,
                         (int)((ulong)*(undefined4 *)&uVar4->field32_0x20 >> 0x10),0x0,
                         puVar2,iVar3);
    }
    lVar4 = UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic(context);
    if ((int)((ulong)lVar4 >> 0x10) != 0x0 || (int)lVar4 != 0x0)
    {
      uVar4->field34_0x24 = 0x1;
    }
    UI_Container_Notify_Listeners_at_Offset_4_Logic(uVar4,notify_type);
  }
  else if (uVar4->field33_0x22 != 0x0 || uVar4->field32_0x20 != 0x0)
  {
    if (context == 0x0)
    {
      puVar2 = NULL;
      iVar3 = 0x0;
    }
    else
    {
      puVar2 = &uVar4->field_0x1c;
      iVar3 = notify_type;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)*(void **)&uVar4->field32_0x20,(long)CONCAT22(iVar3,puVar2));
    (&uVar4->field32_0x20)[0x0] = 0x0;
    (&uVar4->field32_0x20)[0x1] = 0x0;
    return;
  }
  return;
}



// Retrieves the bitmap pointer from the currently selected structure resource and
// clears the 'dirty' flag at 0x24.

long __stdcall16far
UI_Construction_Manager_Consume_Selected_Structure_Bitmap_Logic(long context)
{
  astruct_463 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_463 *)context;
  if (uVar1->field33_0x24 == 0x0)
  {
    return 0x0;
  }
  uVar1->field33_0x24 = 0x0;
  if (uVar1->field32_0x20 == 0x0)
  {
    (&uVar1->field34_0x26)[0x0] = 0x0;
    (&uVar1->field34_0x26)[0x1] = 0x0;
  }
  else
  {
    *(undefined4 *)&uVar1->field34_0x26 =
         *(undefined4 *)((int)uVar1->field32_0x20 + 0x4c);
  }
  return CONCAT22(uVar1->field35_0x28,uVar1->field34_0x26);
}



// Retrieves the bitmap pointer from the currently selected structure resource without
// clearing flags.

long __stdcall16far
UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic(long context)
{
  astruct_462 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_462 *)context;
  if (uVar1->field32_0x20 == 0x0)
  {
    (&uVar1->field35_0x26)[0x0] = 0x0;
    (&uVar1->field35_0x26)[0x1] = 0x0;
  }
  else
  {
    *(undefined4 *)&uVar1->field35_0x26 =
         *(undefined4 *)((int)uVar1->field32_0x20 + 0x4c);
  }
  return CONCAT22(uVar1->field36_0x28,uVar1->field35_0x26);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Ship View Controller (vtable 0x32D8). It initializes
// sub-objects, registers with resource tracker 0x2F, and loads resource atlas 0x6E.
// Sets default layout boundaries based on the background bitmap dimensions.

long __stdcall16far UI_Ship_View_Controller_ctor_init_32D8_Logic(long this_ref,int id)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined2 extraout_DX;
  long lVar5;
  int iVar6;
  undefined2 uVar7;
  astruct_460 *uVar8;
  
  iVar6 = (int)this_ref;
  uVar7 = (undefined2)((ulong)this_ref >> 0x10);
  UI_Metric_Manager_Object_ctor_init(this_ref,0x1,id);
  *(undefined2 *)(iVar6 + 0x20) = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar6 + 0x22) = 0x1008;
  *(undefined2 *)(iVar6 + 0x20) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)(iVar6 + 0x22) = 0x1008;
  *(undefined4 *)(iVar6 + 0x24) = 0x0;
  *(undefined2 *)(iVar6 + 0x174) = 0x0;
  *(undefined2 *)(iVar6 + 0x176) = 0x0;
  *(undefined2 *)(iVar6 + 0x178) = 0x0;
  *(undefined4 *)(iVar6 + 0x17a) = 0x0;
  *(undefined4 *)(iVar6 + 0x17e) = 0x0;
  *(undefined4 *)(iVar6 + 0x182) = 0x0;
  *(undefined4 *)(iVar6 + 0x186) = 0x0;
  *(undefined2 *)this_ref = 0x32d8;
  *(undefined2 *)(iVar6 + 0x2) = 0x1018;
  *(undefined2 *)(iVar6 + 0x20) = 0x3314;
  *(undefined2 *)(iVar6 + 0x22) = 0x1018;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)(iVar6 + 0x182) = (int)lVar5;
  *(undefined2 *)(iVar6 + 0x184) = (int)((ulong)lVar5 >> 0x10);
  if (this_ref == 0x0)
  {
    iVar2 = 0x0;
    uVar4 = 0x0;
  }
  else
  {
    iVar2 = iVar6 + 0x20;
    uVar4 = uVar7;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar6 + 0x182) + 0x4);
  (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)(iVar6 + 0x182),
                     (int)((ulong)*(undefined4 *)(iVar6 + 0x182) >> 0x10),0x0,iVar2,
                     uVar4);
  *(undefined4 *)(iVar6 + 0x17a) =
       *(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x182) + 0x24);
  uVar4 = extraout_DX;
  pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)(iVar6 + 0x24) = pvVar3;
  *(undefined2 *)(iVar6 + 0x26) = uVar4;
  *(undefined4 *)(iVar6 + 0x28) = 0x0;
  pvVar3 = get_with_lazy_init((void *)(void *)*(undefined4 *)(iVar6 + 0x24));
  Build_Site_Update_From_Resources(this_ref);
  *(undefined2 *)(iVar6 + 0x16c) = 0x1;
  *(undefined2 *)(iVar6 + 0x16e) = 0x1;
  *(int *)(iVar6 + 0x170) = *(int *)((int)pvVar3 + 0x4) + *(int *)(iVar6 + 0x16c);
  *(int *)(iVar6 + 0x172) = *(int *)((int)pvVar3 + 0x8) + -0x19;
  return this_ref;
}



// Maps a raw event or type ID (param_4) to internal UI constants (e.g. 3000 -> 5, 0xBBA
// -> 0x23) and retrieves a vertical offset from the sub-object at 0x24.

void __stdcall16far
UI_Ship_View_Get_Mapping_Logic(long context,int *out1,int *out2,int type_id)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 in_stack_0000000e;
  int in_stack_00000010;
  
  *_type_id = 0x0;
  *_out1 = 0x0;
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)context + 0x24));
  *_out1 = *(int *)((int)pvVar1 + 0x8) + -0x14;
  if (in_stack_00000010 == 0xbb8)
  {
    *_type_id = 0x5;
  }
  if (in_stack_00000010 == 0xbba)
  {
    *_type_id = 0x23;
  }
  if (in_stack_00000010 == 0xbb9)
  {
    *_type_id = 0x75;
  }
  return;
}



// Retrieves the name string for the currently selected entity in the Ship View.

void __stdcall16far UI_Ship_View_Retrieve_Entity_Name_Logic(long context)
{
  u16 entity_id;
  
  entity_id = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
  Lookup_Entity_Name_by_ID_Logic_bd80(entity_id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Ensures the history collection is loaded and returns the data object for the
// currently selected entity.

long __stdcall16far UI_Ship_View_Get_Active_Entity_Object_Logic(long context)
{
  u16 uVar1;
  astruct_458 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  long lVar5;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  uVar2 = (astruct_458 *)context;
  if (uVar2->field377_0x17e == 0x0)
  {
    pvVar4 = Simulator_Global_History_Init_from_Entity_Wrapper_82f0
                       (_p_SimulatorGlobalState,uVar2->field376_0x17a);
    *(void **)&uVar2->field377_0x17e = (void *)pvVar4;
    *(undefined2 *)((int)&uVar2->field377_0x17e + 0x2) = (int)((ulong)pvVar4 >> 0x10);
  }
  if ((uVar2->field377_0x17e != 0x0) &&
     (*(int *)((int)uVar2->field377_0x17e + 0xa) != 0x0))
  {
    lVar5 = Data_History_Object_Get_Point_At_Index
                      ((void *)(void *)uVar2->field377_0x17e,(long)uVar2->field372_0x174
                      );
    uVar1 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    uVar2->field373_0x176 = uVar1;
    return lVar5;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Ship_View_Calculate_Metrics_from_System_2f56(undefined4 param_1)
{
  void *pvVar1;
  int16_t iVar2;
  int16_t iVar3;
  int *out1;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  int *out2;
  int local_6;
  int local_4;
  
  out2 = &local_6;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  out1 = (int *)((ulong)lVar6 >> 0x10);
  unpack_word_pair((void *)((int)lVar6 + 0xe),out1,out2);
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)(iVar4 + 0x24));
  *(int *)(iVar4 + 0x18) = local_4 + 0xb5;
  *(int *)(iVar4 + 0x1a) = local_6 + 0x9;
  iVar2 = GetSystemMetrics16(0x5);
  *(int *)(iVar4 + 0x1c) = iVar2 * 0x2 + *(int *)((int)pvVar1 + 0x4);
  iVar2 = GetSystemMetrics16(0x4);
  iVar3 = GetSystemMetrics16(0x6);
  *(int *)(iVar4 + 0x1e) = iVar3 + iVar2 + *(int *)((int)pvVar1 + 0x8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Synchronizes the selection index based on a cached entity ID (offset 0x176). Used to
// maintain selection across list refreshes.

void __stdcall16far UI_Ship_View_Sync_Index_to_Cached_ID_Logic(long context)
{
  int iVar1;
  int iVar2;
  uint16_t uVar3;
  astruct_455 *uVar4;
  undefined2 uVar5;
  void *pvVar6;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_455 *)context;
  pvVar6 = Simulator_Global_History_Init_from_Entity_Wrapper_82f0
                     (_p_SimulatorGlobalState,uVar4->field376_0x17a);
  uVar3 = (uint16_t)((ulong)pvVar6 >> 0x10);
  uVar4->field377_0x17e = (uint16_t)(void *)pvVar6;
  uVar4->field378_0x180 = uVar3;
  if ((uVar3 != 0x0 || uVar4->field377_0x17e != 0x0) &&
     (iVar2 = *(int *)((int)*(undefined4 *)&uVar4->field377_0x17e + 0xa), iVar2 != 0x0))
  {
    uVar4->field372_0x174 = 0x0;
    while( true )
    {
      if (iVar2 <= uVar4->field372_0x174) break;
      Data_History_Object_Get_Point_At_Index
                ((void *)*(void **)&uVar4->field377_0x17e,(long)uVar4->field372_0x174);
      iVar1 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
      if (uVar4->field373_0x176 == iVar1) break;
      uVar4->field372_0x174 = uVar4->field372_0x174 + 0x1;
    }
    if (iVar2 <= uVar4->field372_0x174)
    {
      uVar4->field372_0x174 = 0x0;
    }
    iVar2 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    uVar4->field373_0x176 = iVar2;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Trade/Transfer Manager (vtable 0x470C). It initializes a
// complex transaction state, retrieves resource 0x3B (likely cargo or trade metadata),
// and sets up randomized timers for update intervals.

long __stdcall16far UI_Trade_Manager_ctor_init_470C_Logic(long this_ref,int id,int arg3)
{
  int iVar1;
  long lVar2;
  
  UI_Element_Subclass_ctor_D71A((void *)this_ref,this_ref._2_2_,id);
  *(undefined4 *)((int)(void *)this_ref + 0x122) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x126) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x12a) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x12e) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x130) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x132) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x136) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x13a) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x13c) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x13e) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x142) = 0x0;
  *(undefined2 *)this_ref = 0x470c;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  *(undefined2 *)((int)(void *)this_ref + 0x122) = (int)lVar2;
  *(undefined2 *)((int)(void *)this_ref + 0x124) = (int)((ulong)lVar2 >> 0x10);
  *(undefined1 *)((int)(void *)this_ref + 0x22) = 0x0;
  iVar1 = random_int_range(0x8,0xc);
  *(int *)((int)(void *)this_ref + 0x13c) = iVar1;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if a trade route between two entities is possible by comparing their
// simulation categories (magic types) via the relationship manager.

int __stdcall16far UI_Trade_Manager_Check_Route_Validity_Logic(astruct_453 *param_1)
{
  void *in_AX;
  undefined2 in_DX;
  astruct_453 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_453 *)param_1;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar1->field290_0x122);
  uStack_6 = (void *)CONCAT22(in_DX,in_AX);
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar1->field290_0x122);
  uStack_a = (void *)CONCAT22(in_DX,in_AX);
  pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),uStack_6);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),uStack_a);
  if (*(long *)((int)pvVar4 + 0x200) == *(long *)((int)pvVar3 + 0x200))
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A sophisticated UI factory that instantiates transaction-related UI components
// (vtable 0x4790-0x4920). It maps category codes to internal tables (0x40B6+) to
// determine the item type, resolves resource strings, and calculates initial
// quantities.

int __stdcall16far
UI_Component_Factory_Create_Transaction_Item_Logic
          (undefined4 param_1,long param_2,int param_3,undefined2 param_4)
{
  int *piVar1;
  char *pcVar2;
  void *pvVar3;
  int in_DX;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined4 uStack_e;
  int iStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (false)
  {
switchD_1018_3f8b_caseD_2:
    piVar1 = (int *)(param_3 * 0x4 + 0x40ce);
  }
  else
  {
    switch(param_4)
    {
    case 0x1:
      piVar1 = (int *)(param_3 * 0x4 + 0x40b6);
      break;
    default:
      goto switchD_1018_3f8b_caseD_2;
    case 0x3:
      piVar1 = (int *)(param_3 * 0x4 + 0x40e2);
      break;
    case 0x4:
      piVar1 = (int *)(param_3 * 0x4 + 0x40ee);
      break;
    case 0x8:
      piVar1 = (int *)(param_3 * 0x4 + 0x40f2);
      break;
    case 0x9:
      piVar1 = (int *)(param_3 * 0x4 + 0x4106);
      break;
    case 0xa:
      piVar1 = (int *)(param_3 * 0x4 + 0x410a);
      break;
    case 0x14:
      piVar1 = (int *)(param_3 * 0x4 + 0x410e);
      break;
    case 0x16:
      piVar1 = (int *)(param_3 * 0x4 + 0x4112);
      break;
    case 0x17:
      piVar1 = (int *)(param_3 * 0x4 + 0x4116);
      break;
    case 0x19:
      piVar1 = (int *)(param_3 * 0x4 + 0x411a);
    }
  }
  uStack_6 = (int *)CONCAT22(0x1050,piVar1);
  if (uStack_6 == NULL)
  {
    return 0x0;
  }
  iStack_a = 0x0;
  uStack_8 = 0x0;
  iVar7 = *uStack_6;
  iVar5 = (int)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  if (iVar7 == 0x1)
  {
    iVar7 = UI_Map_Ship_Type_to_Constant_Logic(iVar5,iVar6,piVar1[0x1]);
    uStack_e = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(piVar1[0x1]);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x10));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Subclass_ctor_4A92_Logic
                        ((long)uStack_16,param_2 / uStack_e,(long)CONCAT22(in_DX,pcVar2)
                         ,piVar1[0x1]);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
  else if (iVar7 == 0x2)
  {
    iVar7 = UI_Map_Sim_Value_to_Constant_Logic(iVar5,iVar6,piVar1[0x1]);
    uStack_12 = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Entity_Category_Name_by_ID_Logic_c222(piVar1[0x1]);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x10));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Type5_ctor
                        ((long)uStack_16,param_2 / uStack_12,
                         (long)CONCAT22(in_DX,pcVar2),piVar1[0x1]);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
  else
  {
    if (iVar7 != 0x3)
    {
      if (iVar7 != 0x4) goto LAB_1018_425e;
      iVar7 = piVar1[0x1];
      iVar5 = (int)_p_GlobalResourceManager;
      iVar6 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
      if (iVar7 == 0x1)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x430);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x2;
        lVar4 = 0x14;
      }
      else if (iVar7 == 0x2)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x431);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x3;
        lVar4 = 0x16;
      }
      else if (iVar7 == 0x3)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x432);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x4;
        lVar4 = 0x17;
      }
      else
      {
        if (iVar7 != 0x4) goto LAB_1018_425e;
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x433);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x4;
        lVar4 = 0xa;
      }
      lVar4 = UI_Transaction_Item_Type4_ctor
                        ((long)uStack_16,param_2 / lVar4,(long)CONCAT22(in_DX,pcVar2),
                         iVar7);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
    uStack_12._0_2_ =
         res_find_first_available_string_index_logic
                   ((int)_p_StringPropertyTable,
                    (int)((ulong)_p_StringPropertyTable >> 0x10),piVar1[0x1]);
    if ((u16)uStack_12 == 0x0)
    {
      uStack_12._0_2_ = 0x4f;
    }
    iVar7 = UI_Map_Resource_ID_to_Category_Logic(iVar5,iVar6,(u16)uStack_12);
    uStack_e = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Entity_Name_by_ID_Logic_bd80((u16)uStack_12);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Type2_ctor
                        (uStack_16,param_2 / uStack_e,(char *)CONCAT22(in_DX,pcVar2),
                         (u16)uStack_12,0x0,0x0);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
LAB_1018_40bc:
  iStack_a = 0x0;
  uStack_8 = 0x0;
LAB_1018_425e:
  if (*(long *)(iStack_a + 0x8) == 0x0)
  {
    *(undefined4 *)(iStack_a + 0x8) = 0x1;
  }
  return iStack_a;
}



// Calculates the final cost or quantity for a trade transaction. It resolves the
// per-unit value based on entity type (ships, cargo, or planet resources), applies the
// current market fluctuation percentage (offset 0x142), and scales by the transaction
// amount.

int __stdcall16far UI_Trade_Manager_Calculate_Transaction_Cost_Logic(long context)
{
  int index;
  void *list_head;
  int iVar1;
  astruct_446 *uVar4;
  int arg2;
  void *pvVar2;
  void *lVar7;
  long lVar3;
  long lStack_6;
  
  lStack_6 = 0x0;
  arg2 = (int)((ulong)context >> 0x10);
  uVar4 = (astruct_446 *)context;
  pvVar2 = (void *)UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                             (context,uVar4->field302_0x12e);
  index = (int)((ulong)pvVar2 >> 0x10);
  list_head = (void *)pvVar2;
  iVar1 = uVar4->field302_0x12e;
  if (iVar1 == 0x188)
  {
    lVar3 = list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = UI_Map_Ship_Type_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)lVar3 + 0xe));
  }
  else if (iVar1 == 0x18b)
  {
    lVar3 = list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = UI_Map_Research_Value_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)lVar3 + 0xe));
  }
  else
  {
    if (iVar1 != 0x18c) goto LAB_1018_4337;
    lVar7 = (void *)list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar7 >> 0x10);
    iVar1 = UI_Map_Sim_Value_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)(void *)lVar7 + 0xe));
  }
  lStack_6 = uVar4->field304_0x132 * CONCAT22(lVar7._2_2_,iVar1);
LAB_1018_4337:
  return (int)((uVar4->field317_0x142 * lStack_6) / 0x64) + (int)lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Randomly selects and instantiates a new transaction UI component from a range of
// possible types. Used to populate the trade manager's activity log with randomized
// "market" events.

void __stdcall16far
UI_Trade_Manager_Generate_Random_Log_Entry_Logic
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4)
{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 in_DX;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  
  if (param_3 < param_4)
  {
    param_4 = param_3;
  }
  pvVar2 = NULL;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)*(undefined4 *)((int)param_1 + 0x122));
  pvVar7 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                      (void *)CONCAT22(in_DX,pvVar2));
  iVar6 = (int)((ulong)pvVar7 >> 0x10);
  do
  {
    do
    {
      iVar3 = random_int_range(param_4,param_3);
      iVar5 = *(int *)(iVar3 * 0x2 + 0x411c);
    } while (iVar5 == 0x0);
    iVar4 = 0x1;
    pvVar8 = pvVar7;
    if (iVar5 != 0x1)
    {
      iVar4 = random_int_range(0x1,iVar5);
    }
    iVar5 = UI_Component_Factory_Create_Transaction_Item_Logic
                      (param_1,param_2,iVar4 + -0x1,iVar3,pvVar8);
    bVar1 = iVar6 == 0x0;
    iVar6 = 0x0;
  } while (bVar1 && iVar5 == 0x0);
  return;
}
