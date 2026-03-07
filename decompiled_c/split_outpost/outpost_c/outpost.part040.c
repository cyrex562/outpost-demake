/*
 * Source: outpost.c
 * Chunk: 40/117
 * Original lines: 44837-46023
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



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_2(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



int __stdcall16far UI_Component_Get_Value_at_Offset_26_plus_10_Logic_maybe(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if (*(long *)((int)context + 0x26) != 0x0)
  {
    uVar1 = *(undefined4 *)((int)context + 0x26);
    return *(int *)((int)uVar1 + 0xa);
  }
  return 0x0;
}



// Prepares and submits a command for building or modifying an entity. It uses the
// active Main View Controller (at offset 0x20) to resolve coordinates and dispatch the
// command to the simulator. Returns 0x6AD if the controller is missing.

int __stdcall16far
UI_Construction_Manager_Submit_Entity_Command_Logic
          (astruct_466 *param_1,undefined2 param_2,undefined4 param_3,undefined2 param_4
          )
{
  undefined1 *puVar1;
  astruct_466 *uVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  undefined1 local_8 [0x6];
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_466 *)param_1;
  if (uVar2->field32_0x20 == 0x0)
  {
    return 0x6ad;
  }
  zero_init_struct_6bytes(local_8);
  UI_Main_View_Controller_Offset_and_Pack_3Word_Logic
            (uVar2->field32_0x20,(long)CONCAT22(unaff_SS,local_8),(int)param_3,
             (int)((ulong)param_3 >> 0x10));
  puVar1 = local_8;
  UI_Main_View_Controller_Submit_Command_Wrapper
            (uVar2->field32_0x20,CONCAT22(puVar1,param_2),CONCAT22(param_4,unaff_SS));
  return (int)puVar1;
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



// Resets internal selection state flags at offsets 0x3E and 0x44.

void __stdcall16far UI_Construction_Manager_Reset_Selection_State_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *(undefined2 *)((int)context + 0x44) = 0x1;
  *(undefined4 *)((int)context + 0x3e) = 0x0;
  return;
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4222(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far Simulator_Get_Ticks_Wrapper(void)
{
  u32 uVar1;
  
  uVar1 = Simulator_Global_Get_Current_Tick_8326();
  return uVar1;
}



int __stdcall16far UI_Component_Get_Value_at_Offset_44_Logic_2(long context)
{
  return *(int *)((int)context + 0x44);
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4216(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



// Retrieves a far pointer from an indexed array starting at offset 0x46, based on the
// index value at 0x3E. If flag 0x42 is set, it also resets state fields at 0x40 and
// 0x44.

long __stdcall16far UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic(long context)
{
  astruct_465 *uVar1;
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_465 *)context;
  if (uVar1->field65_0x42 != 0x0)
  {
    *(undefined4 *)&uVar1->field_0x40 = 0x0;
    uVar1->field66_0x44 = 0x1;
  }
  iVar1 = uVar1->field62_0x3e * 0x4;
  return CONCAT22(*(undefined2 *)(&uVar1[0x1].field_0x2 + iVar1),
                  *(undefined2 *)(&uVar1[0x1].field_0x0 + iVar1));
}



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_421c(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
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



void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper_4210(long struct_ref)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
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



// Event handler for a nested component of the Construction Manager. Handles index
// advancement (event 2), state clearing (event 1), and forwards general notifications
// to the parent manager.

void __stdcall16far UI_Construction_SubObject_On_Event_Logic(long obj_ref,int event_id)
{
  long lVar1;
  
  if (event_id == 0x1)
  {
    *(undefined4 *)((int)obj_ref + 0x4) = 0x0;
    return;
  }
  if (event_id == 0x2)
  {
    UI_Construction_Manager_Advance_Selection_Index_Logic
              (CONCAT22(obj_ref._2_2_,(int)obj_ref + -0x1c));
  }
  else
  {
    if ((((event_id + -0x3 < 0x1) || (SBORROW2(event_id + -0x3,0x1))) ||
        (0x1 < event_id + -0x5)) || (*(long *)((int)obj_ref + 0x4) == 0x0))
    {
      return;
    }
    lVar1 = UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic
                      (CONCAT22(obj_ref._2_2_,(int)obj_ref + -0x1c));
    if ((int)((ulong)lVar1 >> 0x10) != 0x0 || (int)lVar1 != 0x0)
    {
      *(undefined2 *)((int)obj_ref + 0x8) = 0x1;
    }
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic
            ((void *)((int)obj_ref + -0x1c),obj_ref._2_2_);
  return;
}



void __stdcall16far UI_Construction_Manager_Advance_Selection_Index_Logic(long context)
{
  astruct_461 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_461 *)context;
  if ((uVar1->field63_0x40 != 0x0) &&
     (uVar1->field62_0x3e = uVar1->field62_0x3e + 0x1, 0x9 < uVar1->field62_0x3e))
  {
    uVar1->field62_0x3e = 0x0;
    uVar1->field64_0x42 = 0x1;
  }
  return;
}



// Clears the field at offset 0x18 if the input segment matches 0x280, then forwards the
// call to a coordinate transformation routine.

void __stdcall16far
UI_Component_Conditional_Clear_Offset_18_Logic
          (int param_1,undefined2 param_2,int param_3,undefined4 param_4)
{
  if ((*(int *)(param_1 + 0x18) != 0x0) && (param_4._2_2_ == 0x280))
  {
    *(undefined2 *)(param_1 + 0x18) = 0x0;
  }
  Build_Site_Object_Setup_GDI_Context
            (CONCAT22(param_2,param_1),param_3,(int)param_4,param_4._2_2_);
  return;
}



// WARNING: Variable defined which should be unmapped: local_42
// WARNING: Variable defined which should be unmapped: local_3e
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Main_View_Load_Bitmap_and_Palette_Logic_2978(u32 param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 in_DX;
  void *pvVar3;
  uint uVar4;
  void *palette_src;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  u32 local_42;
  u32 local_3e;
  u16 local_3a;
  u16 local_38;
  u16 local_36;
  u16 local_34;
  u32 local_32;
  u32 local_2e;
  undefined1 local_2a [0x24];
  u16 local_6;
  u16 local_4;
  
  local_6 = Resource_Manager_Update_Path_by_Type_Logic
                      ((void *)_p_GlobalResourceManager,
                       (int)((ulong)_p_GlobalResourceManager >> 0x10));
  pvVar3 = File_Object_ctor(local_2a,unaff_SS,0x1,local_6,in_DX);
  uVar7 = 0x1000;
  pvVar2 = allocate_memory(CONCAT22((undefined2)local_42,0x1e));
  uVar4 = (uint)pvVar3 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    uVar7 = 0x1008;
    pvVar2 = Bitmap_Object_ctor_from_other(pvVar2,pvVar3);
  }
  local_2e = CONCAT22(uVar4,pvVar2);
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_2e + 0x14);
  local_32 = (*(code *)*puVar1)(uVar7,pvVar2,uVar4);
  uVar5 = (uint)(local_32 >> 0x10);
  pvVar3 = allocate_memory(CONCAT22(pvVar2,0x14));
  palette_src = (void *)(uVar5 | (uint)pvVar3);
  if (palette_src == NULL)
  {
    pvVar3 = NULL;
    palette_src = NULL;
  }
  else
  {
    pvVar3 = Palette_Object_ctor_basic(pvVar3);
  }
  uVar7 = (undefined2)(param_1 >> 0x10);
  iVar6 = (int)param_1;
  *(undefined2 *)(iVar6 + 0xe) = pvVar3;
  *(uint *)(iVar6 + 0x10) = (uint)palette_src;
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)(iVar6 + 0xe),
             (void *)((ulong)*(undefined4 *)(iVar6 + 0xe) >> 0x10));
  GetClientRect16((u16 *)CONCAT22(unaff_SS,&local_3a),(HWND16)g_ParentHWND);
  uVar8 = 0x1000;
  pvVar3 = allocate_memory(CONCAT22(pvVar2,0x1e));
  uVar5 = (uint)palette_src | (uint)pvVar3;
  if (uVar5 == 0x0)
  {
    *(undefined4 *)(iVar6 + 0xa) = 0x0;
  }
  else
  {
    uVar8 = 0x1008;
    pvVar3 = Bitmap_Object_ctor_with_alloc
                       (pvVar3,palette_src,(int)*(undefined4 *)(iVar6 + 0xe),
                        (int)((ulong)*(undefined4 *)(iVar6 + 0xe) >> 0x10));
    *(undefined2 *)(iVar6 + 0xa) = pvVar3;
    *(uint *)(iVar6 + 0xc) = uVar5;
  }
  local_42._0_2_ = (undefined2)local_2e;
  local_42._2_2_ = (undefined2)(local_2e >> 0x10);
  if (local_2e != 0x0)
  {
    (*(code *)*(undefined2 *)*(undefined2 **)local_2e)
              (uVar8,(undefined2)local_42,local_42._2_2_,0x1,pvVar2,uVar4,
               (undefined2)local_42,local_42._2_2_,local_2e);
  }
  File_Object_dtor(local_2a);
  return;
}



void * UI_Construction_Manager_dtor_Wrapper_2aa8(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0x1c));
  pvVar1 = UI_Construction_Manager_dtor_Scalar_Deleting_2ab4(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Construction_Manager_dtor_Scalar_Deleting_2ab4(void *param_1,byte param_2)
{
  UI_Construction_Manager_dtor_2ADA_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void __stdcall16far mem_free_indirect_logic(long ptr_to_ptr_ref)
{
  free_if_not_null((void *)*(void **)ptr_to_ptr_ref);
  return;
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



// Destructor for the Ship View Controller. Unregisters from the simulator tracker,
// destroys the sub-object at offset 0x24, and cleans up internal buffers.

void __stdcall16far UI_Ship_View_Controller_dtor_32D8_Logic(long this_ref)
{
  u32 *puVar1;
  int iVar2;
  u16 *puVar3;
  undefined2 uVar4;
  astruct_459 *uVar5;
  undefined2 uVar6;
  u16 *puStack_6;
  undefined2 uStack_4;
  
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  uVar5 = (astruct_459 *)this_ref;
  *(undefined2 *)this_ref = 0x32d8;
  uVar5->field2_0x2 = 0x1018;
  uVar5->field31_0x20 = 0x3314;
  uVar5->field32_0x22 = 0x1018;
  if (uVar5->field381_0x182 != 0x0)
  {
    if (this_ref == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar3 = &uVar5->field31_0x20;
      uVar4 = uVar6;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar5->field381_0x182,(long)CONCAT22(uVar4,puVar3));
  }
  free_if_not_null((void *)uVar5->field382_0x186);
  puVar1 = uVar5->field33_0x24;
  iVar2 = uVar5->field34_0x26;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1000,puVar1,iVar2,0x1);
  }
  if (this_ref == 0x0)
  {
    puVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar3 = &uVar5->field31_0x20;
  }
  _puStack_6 = (u16 *)CONCAT22(uVar6,puVar3);
  *_puStack_6 = (u16)(char *)s_1_1050_389a;
  puVar3[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(uVar5);
  return;
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



// Decrements the selection index in the Ship View entity list, with wrapping support.

void __stdcall16far UI_Ship_View_Select_Previous_Entity_Logic(long context)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (int)context;
  if (*(int *)(iVar3 + 0x180) != 0x0 || *(int *)(iVar3 + 0x17e) != 0x0)
  {
    piVar1 = (int *)(iVar3 + 0x174);
    *piVar1 = *piVar1 + -0x1;
    if (*piVar1 < 0x0)
    {
      *(int *)(iVar3 + 0x174) =
           *(int *)((int)*(undefined4 *)(iVar3 + 0x17e) + 0xa) + -0x1;
    }
    iVar2 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    *(int *)(iVar3 + 0x176) = iVar2;
  }
  return;
}



// Increments the selection index in the Ship View entity list, with wrapping support.

void __stdcall16far UI_Ship_View_Select_Next_Entity_Logic(long context)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  if (*(int *)(iVar2 + 0x180) != 0x0 || *(int *)(iVar2 + 0x17e) != 0x0)
  {
    *(int *)(iVar2 + 0x174) = *(int *)(iVar2 + 0x174) + 0x1;
    if (*(int *)((int)*(undefined4 *)(iVar2 + 0x17e) + 0xa) <= *(int *)(iVar2 + 0x174))
    {
      *(undefined2 *)(iVar2 + 0x174) = 0x0;
    }
    iVar1 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    *(int *)(iVar2 + 0x176) = iVar1;
  }
  return;
}



// Retrieves the unique identifier (likely from offset 0x2E of a history point) for the
// currently indexed entity.

int __stdcall16far UI_Ship_View_Get_Selected_Entity_ID_Logic(long context)
{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  lVar2 = Data_History_Object_Get_Point_At_Index
                    ((void *)(void *)*(undefined4 *)((int)context + 0x17e),
                     (long)*(int *)((int)context + 0x174));
  if (lVar2 != 0x0)
  {
    return *(int *)((int)lVar2 + 0x2e);
  }
  return 0x0;
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



void __stdcall16far
UI_Ship_View_Handle_Status_Change_2ee4(undefined4 param_1,uint param_2)
{
  char cVar1;
  
  if (param_2 != 0x12)
  {
    if (param_2 < 0x13)
    {
      cVar1 = (char)param_2;
      if (cVar1 == '\x01')
      {
        *(undefined4 *)((int)param_1 + 0x162) = 0x0;
        return;
      }
      if (('\x02' < (char)(cVar1 + -0x1)) && ((char)(cVar1 + -0x4) < '\x03'))
      goto LAB_1018_2f06;
    }
    return;
  }
  *(undefined4 *)((int)param_1 + 0x15a) =
       *(undefined4 *)((int)*(undefined4 *)((int)param_1 + 0x162) + 0x24);
LAB_1018_2f06:
  UI_Ship_View_Sync_Index_to_Cached_ID_Logic
            ((long)CONCAT22(param_1._2_2_,(void *)((int)param_1 + -0x20)));
  UI_Container_Notify_Listeners_at_Offset_4_Logic
            ((void *)((int)param_1 + -0x20),param_1._2_2_);
  return;
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



// Searches the entity collection for a name matching the filter string at offset 0x186
// and updates the selection index if found.

int __stdcall16far UI_Ship_View_Search_and_Select_by_Name_Logic(long context)
{
  int iVar1;
  int iVar2;
  u16 uVar3;
  char *str1;
  int iVar4;
  char *str2;
  astruct_457 *uVar8;
  undefined2 uVar5;
  long lVar6;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar8 = (astruct_457 *)context;
  iVar1 = uVar8->field372_0x174;
  iVar2 = *(int *)((int)uVar8->field380_0x17e + 0xa);
  if (iVar2 != 0x0)
  {
    if (uVar8->field385_0x186 != NULL)
    {
      strlen_get_length(uVar8->field385_0x186);
      uVar8->field372_0x174 = 0x0;
      while( true )
      {
        if (iVar2 <= uVar8->field372_0x174) break;
        lVar6 = Data_History_Object_Get_Point_At_Index
                          ((void *)(void *)uVar8->field380_0x17e,
                           (long)uVar8->field372_0x174);
        str2 = (char *)((ulong)lVar6 >> 0x10);
        uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
        str1 = Lookup_Entity_Name_by_ID_Logic_bd80(uVar3);
        iVar4 = strncmp_fixed_optimized(str1,str2,(int)(char *)uVar8->field385_0x186);
        if (iVar4 == 0x0) break;
        uVar8->field372_0x174 = uVar8->field372_0x174 + 0x1;
      }
      if (uVar8->field372_0x174 < iVar2)
      {
        uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
        uVar8->field373_0x176 = uVar3;
        return 0x1;
      }
      uVar8->field372_0x174 = iVar1;
      uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
      uVar8->field373_0x176 = uVar3;
    }
  }
  return 0x0;
}



// Sets the search filter string used for entity lookups in the Ship View.

void __stdcall16far
UI_Ship_View_Set_Search_Filter_Logic(astruct_456 *param_1,char *param_2)
{
  char *pcVar1;
  u16 in_DX;
  astruct_456 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_456 *)param_1;
  free_if_not_null((void *)*(void **)&uVar2->field_0x186);
  pcVar1 = strdup_allocate(param_2);
  *(char **)&uVar2->field_0x186 = pcVar1;
  uVar2->field392_0x188 = in_DX;
  return;
}



// Extracts a raw list of entity IDs from the internal Data_History_Object and stores
// them in a newly allocated 16-bit array.

void __stdcall16far
UI_Ship_View_Extract_ID_List_from_History_Logic(undefined4 param_1,undefined4 *param_2)
{
  int iVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  void *pvVar5;
  uint in_DX;
  uint uVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  long lVar8;
  undefined4 uStack_12;
  int iStack_6;
  
  *param_2 = 0x0;
  uVar7 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = *(undefined4 *)((int)param_1 + 0x17e);
  iVar1 = *(int *)((int)uVar2 + 0xa);
  if (iVar1 != 0x0)
  {
    puVar4 = allocate_memory(CONCAT22(unaff_SI,0x6));
    uStack_12 = (undefined4 *)CONCAT22(in_DX,puVar4);
    uVar6 = in_DX | (uint)puVar4;
    if (uVar6 == 0x0)
    {
      *param_2 = 0x0;
    }
    else
    {
      *uStack_12 = 0x0;
      *(undefined2 *)(puVar4 + 0x1) = 0x0;
      *param_2 = uStack_12;
    }
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,iVar1 * 0x2));
    puVar3 = (undefined2 *)*param_2;
    *puVar3 = pvVar5;
    ((undefined2 *)puVar3)[0x1] = uVar6;
    *(int *)((int)*param_2 + 0x4) = iVar1;
    for (iStack_6 = 0x0; iStack_6 < iVar1; iStack_6 += 0x1)
    {
      lVar8 = Data_History_Object_Get_Point_At_Index
                        ((void *)(void *)*(undefined4 *)((int)param_1 + 0x17e),
                         (long)iStack_6);
      *(undefined2 *)((int)*(undefined4 *)*param_2 + iStack_6 * 0x2) =
           *(undefined2 *)((int)lVar8 + 0x2e);
    }
  }
  return;
}



// Returns true (1) if the Ship View has a valid, non-empty collection of entities.

int __stdcall16far UI_Ship_View_Is_History_NonEmpty_Logic(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if ((*(long *)((int)context + 0x17e) != 0x0) &&
     (uVar1 = *(undefined4 *)((int)context + 0x17e), *(long *)((int)uVar1 + 0xa) != 0x0)
     )
  {
    return 0x1;
  }
  return 0x0;
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



void * UI_Ship_View_Controller_dtor_Wrapper_32a6
                 (undefined2 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)param_2 + -0x20));
  pvVar1 = UI_Ship_View_Controller_dtor_Scalar_Deleting_32b2(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Ship_View_Controller_dtor_Scalar_Deleting_32b2(void *param_1,byte param_2)
{
  UI_Ship_View_Controller_dtor_32D8_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
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
