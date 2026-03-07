/*
 * Source: outpost.c
 * Chunk: 28/117
 * Original lines: 31146-32334
 * Boundaries: top-level declarations/definitions only
 */




u16 __stdcall16far
UI_Object_Fields_24_6A_7E_Serialize_to_File_3fc2(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u16 local_c;
  u16 local_6;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    iVar2 = (int)param_1;
    local_c = *(u16 *)(iVar2 + 0x24);
    iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_6 = *(u16 *)(iVar2 + 0x6a);
      iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
      if (iVar1 != 0x0)
      {
        local_6 = *(u16 *)(iVar2 + 0x7e);
        iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
        if (iVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Object_Fields_24_6A_7E_Deserialize_from_File_404a(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  void *unaff_SS;
  u16 local_4;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar1 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x24),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,&local_4,unaff_SS);
      if (iVar2 != 0x0)
      {
        iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x7e),handle_wrapper);
        if (iVar2 != 0x0)
        {
          *(u16 *)(iVar1 + 0x6a) = local_4;
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a 32-bit data value (likely coordinates or status) from a resource tracker
// managed by the simulator.

long __stdcall16far Resource_Tracker_Get_Data_Logic(void *this)
{
  undefined2 uVar1;
  void *pvVar2;
  undefined2 in_stack_00000006;
  
  pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                      (void *)*(undefined4 *)((int)this + 0x6c));
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)pvVar2 + 0xe),*(undefined2 *)((int)pvVar2 + 0xc))
  ;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource / Vtable
// References global state flags at 1050:3960 and resource manager at 1050:0ED0.
// Instantiates UI_SubDialog with vtable at 1040:8520.
// Performs indirect call through [uStack_10] vtable offset 0x74.
// Updates active resource ID at 1050:0ED0.

int __stdcall16far UI_HitTest_Rect_Collection_Logic(void *this,POINT16 *pt)
{
  undefined2 *puVar1;
  bool bVar2;
  BOOL16 BVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined2 uVar9;
  long context;
  POINT16 *in_stack_00000008;
  undefined2 in_stack_0000ffec;
  undefined4 uStack_10;
  int iStack_6;
  
  iStack_6 = 0x0;
  bVar2 = false;
  do
  {
    if (*(int *)((int)this + 0x74) <= iStack_6)
    {
LAB_1010_413e:
      if ((bVar2) && (0x3 < (int)PTR_DAT_1050_0000_1050_3960))
      {
        context = Resource_Manager_Get_Resource_by_ID_Logic
                            (_p_ResourceManager,iStack_6 + 0xc);
        uVar7 = (uint)((ulong)context >> 0x10);
        iVar4 = UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(context);
        if (iVar4 == 0x0)
        {
          uVar9 = 0x1000;
          pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffec,0xb4));
          uVar8 = uVar7 | (uint)pvVar5;
          if (uVar8 == 0x0)
          {
            puVar6 = NULL;
            uVar8 = 0x0;
          }
          else
          {
            uVar9 = 0x1040;
            puVar6 = (undefined4 *)
                     UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                               (pvVar5,uVar7,g_ParentHWND,0x30,0x2,0x643,0x645);
          }
          uStack_10 = (undefined4 *)CONCAT22(uVar8,puVar6);
          puVar1 = (undefined2 *)((int)*uStack_10 + 0x74);
          (*(code *)*puVar1)(uVar9,puVar6,uVar8);
          Resource_Manager_Set_Active_ID_Logic(_p_ResourceManager,iStack_6 + 0xc);
          bVar2 = false;
        }
      }
      if (bVar2)
      {
        return iStack_6;
      }
      return -0x1;
    }
    BVar3 = PtInRect(*in_stack_00000008,
                     (void *)CONCAT22(*(undefined2 *)((int)this + 0x72),
                                      (void *)((iStack_6 * 0x10 +
                                               *(int *)((int)this + 0x24)) * 0x8 +
                                              *(int *)((int)this + 0x70))));
    if (BVar3 != 0x0)
    {
      bVar2 = true;
      goto LAB_1010_413e;
    }
    iStack_6 += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// References global management pointers in segment 1050: 0ED0, 5748, 65E2.
// Generates grid coordinates using lookup table at 1010:11E0.
// Performs complex coordinate arithmetic (abs, modulo, division) for UI hit-testing.

void __stdcall16far UI_Element_Generate_HitTest_Rects_Logic(void *this,long res_id)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 unaff_SI;
  long lVar5;
  undefined2 in_stack_00000006;
  int iStack_36;
  int iStack_32;
  int local_30;
  void *local_2e;
  int iStack_2a;
  void *pvStack_28;
  void *pvStack_22;
  undefined4 uStack_1e;
  int iStack_1a;
  uint uStack_18;
  u16 uStack_16;
  undefined4 uStack_14;
  uint uStack_10;
  void *pvStack_e;
  int iStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  *(long *)((int)this + 0x6c) = res_id;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uStack_4 = (undefined2)((ulong)lVar5 >> 0x10);
  uStack_6 = (undefined2)lVar5;
  lVar5 = UI_Get_Entity_FarPtr_at_Offset_10_Logic_Duplicate(lVar5);
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  iStack_a = (int)lVar5;
  *(undefined2 *)((int)this + 0x74) = *(undefined2 *)(iStack_a + 0x22);
  uStack_8 = uVar3;
  if (*(long *)((int)this + 0x70) != 0x0)
  {
    pvStack_22 = (void *)*(undefined4 *)((int)this + 0x70);
    uStack_1e = pvStack_22;
    free_if_not_null((void *)pvStack_22);
    *(undefined4 *)((int)this + 0x70) = 0x0;
  }
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,*(int *)((int)this + 0x74) << 0x7));
  *(undefined2 *)((int)this + 0x70) = pvVar1;
  *(undefined2 *)((int)this + 0x72) = uVar3;
  pvStack_e = Simulator_Global_Get_Entity_Object_Wrapper_8344
                        ((u16)_p_SimulatorGlobalState,
                         (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                         (void *)*(undefined4 *)((int)this + 0x6c));
  iVar2 = (int)((ulong)pvStack_e >> 0x10);
  uStack_10 = (uint)(*(int *)*(undefined4 *)((int)pvStack_e + 0x10) == 0x9);
  uStack_16 = *(u16 *)(iStack_a + 0x22);
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,uStack_16 * 0x6));
  uStack_1e = (void *)CONCAT22(iVar2,pvVar1);
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    uStack_14 = NULL;
  }
  else
  {
    call_function_n_times
              ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
               uStack_16);
    uStack_14 = uStack_1e;
  }
  for (uStack_18 = 0x0; uStack_18 < *(uint *)(iStack_a + 0x22); uStack_18 += 0x1)
  {
    pvStack_22 = Simulator_Get_Map_Cell_Data_Wrapper_e0a0
                           ((int)_p_SimulatorWorldContext,
                            (int)((ulong)_p_SimulatorWorldContext >> 0x10),0x0,
                            *(undefined2 *)
                             ((int)*(undefined4 *)(iStack_a + 0x24) + uStack_18 * 0x2));
    copy_struct_6bytes((void *)(uStack_18 * 0x6 + (int)(void *)uStack_14),
                       uStack_14._2_2_);
    pvStack_28 = pvStack_22;
    uStack_1e = pvStack_22;
    if (pvStack_22 != NULL)
    {
      Simulator_Entity_Cleanup_Internal_84d0(pvStack_22);
      free_if_not_null((void *)pvStack_22);
    }
  }
  iStack_1a = 0x0;
  while( true )
  {
    if (*(int *)((int)this + 0x74) <= iStack_1a) break;
    unpack_word_pair((void *)(iStack_1a * 0x6 + (int)(void *)uStack_14),uStack_14._2_2_,
                     (int *)&local_2e);
    iStack_2a = abs_u16_to_i16_logic((int)local_2e);
    iStack_2a /= 0x5;
    if (0xc < iStack_2a)
    {
      iStack_2a = 0xc;
      iVar2 = abs_u16_to_i16_logic((int)local_2e);
      local_2e = (void *)CONCAT22(local_2e._2_2_,
                                  (void *)(((int)local_2e / iVar2) * 0x3c));
    }
    iVar2 = abs_u16_to_i16_logic((int)local_2e);
    pvVar1 = (void *)(iVar2 % 0x5);
    pvStack_22 = (void *)CONCAT22(pvStack_22._2_2_,pvVar1);
    if ((int)local_2e < 0x0)
    {
      if (0x2 < (int)pvVar1)
      {
        pvVar1 = (void *)((int)pvVar1 + -0x5);
      }
      local_2e = (void *)CONCAT22(local_2e._2_2_,(void *)((int)local_2e + (int)pvVar1));
    }
    else if ((int)pvVar1 < 0x3)
    {
      local_2e = (void *)CONCAT22(local_2e._2_2_,(void *)((int)local_2e - (int)pvVar1));
    }
    else
    {
      local_2e = (void *)CONCAT22(local_2e._2_2_,
                                  (void *)((int)local_2e + (0x5 - (int)pvVar1)));
    }
    iStack_32 = local_30 / 0x16;
    for (iStack_36 = 0x0; iStack_36 < 0x10; iStack_36 += 0x1)
    {
      if (0xf < iStack_32)
      {
        iStack_32 = 0x0;
      }
      if (((int)(uint)(uStack_10 != 0x0) < iStack_32) && (iStack_32 < 0x8))
      {
        iVar2 = *(int *)((iStack_2a * 0x10 + iStack_32) * 0x2 + 0x11e0);
        iVar4 = (iStack_1a * 0x10 + iStack_36) * 0x8;
        *(int *)(iVar4 + (int)*(undefined4 *)((int)this + 0x70)) = iVar2 + 0x49;
        *(int *)((int)*(undefined4 *)((int)this + 0x70) + iVar4 + 0x2) =
             (int)local_2e + 0x49;
        *(int *)((int)*(undefined4 *)((int)this + 0x70) + iVar4 + 0x4) = iVar2 + 0x4e;
        *(int *)((int)*(undefined4 *)((int)this + 0x70) + iVar4 + 0x6) =
             (int)local_2e + 0x4e;
      }
      else
      {
        iVar2 = (iStack_1a * 0x10 + iStack_36) * 0x8;
        *(undefined2 *)(iVar2 + (int)*(undefined4 *)((int)this + 0x70)) = 0x0;
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0x70) + iVar2 + 0x2) = 0x0;
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0x70) + iVar2 + 0x4) = 0x1;
        *(undefined2 *)((int)*(undefined4 *)((int)this + 0x70) + iVar2 + 0x6) = 0x1;
      }
      iStack_32 += 0x1;
    }
    iStack_1a += 0x1;
  }
  pvStack_28 = uStack_14;
  local_2e = uStack_14;
  free_if_not_null((void *)uStack_14);
  UI_Grid_16_Render_All_Slots_Logic((long)CONCAT22(in_stack_00000006,this));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a 32-bit data value from a resource (category 0x2F) identified by the ID
// stored at offset 0x6C.

long __stdcall16far UI_Element_Get_Resource_Data_at_Offset_6C_Logic(void *this)
{
  undefined2 uVar1;
  long lVar2;
  
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lVar2 = UI_Get_Entity_FarPtr_at_Offset_10_Logic_Duplicate(lVar2);
  uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)lVar2 + 0x4),*(undefined2 *)((int)lVar2 + 0x2));
}



// Retrieves a 32-bit value from an internal indexed array starting at offset 0x26.

long __stdcall16far UI_Element_Get_Indexed_Data_at_Offset_26_Logic(void *this)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = *(int *)((int)this + 0x24) * 0x4;
  return CONCAT22(*(undefined2 *)((int)this + iVar1 + 0x28),
                  *(undefined2 *)((int)this + iVar1 + 0x26));
}



void __stdcall16far
UI_Grid_Handle_Notification_4566(int param_1,int param_2,int param_3)
{
  if (param_3 != 0x2)
  {
    return;
  }
  UI_Grid_16_Adjust_Index_Logic_maybe((void *)(param_1 + -0x20));
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(param_1 + -0x20),param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Registers a tracking object with the global Simulator for resource ID 500. Sets a
// state flag at offset 0x7E.

void __stdcall16far Simulator_Register_Resource_500_Tracker_Logic(long this_ref)
{
  void *parent;
  
  if (this_ref == 0x0)
  {
    parent = NULL;
  }
  else
  {
    parent = (void *)((int)this_ref + 0x20);
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),0x1f4,parent);
  *(undefined2 *)((int)this_ref + 0x7e) = 0x1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global simulator state at 1050:0388 to signal resource 500 tracker.
// Iteratively invokes virtual destructors (vtable index 0) for sub-objects in the
// 16-slot array at offset 0x26.

void __stdcall16far Simulator_Signal_and_Cleanup_Resource_500_Logic(long this_ref)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  int iStack_4;
  
  uVar5 = (undefined2)((ulong)this_ref >> 0x10);
  iVar4 = (int)this_ref;
  if (*(int *)(iVar4 + 0x7e) != 0x0)
  {
    if (_PTR_DAT_1050_0000_1050_0388 != NULL)
    {
      if (this_ref == 0x0)
      {
        iVar2 = 0x0;
        uVar3 = 0x0;
      }
      else
      {
        iVar2 = iVar4 + 0x20;
        uVar3 = uVar5;
      }
      unaff_CS = 0x1008;
      Simulator_Find_and_Signal_Resource_Tracker
                ((void *)_PTR_DAT_1050_0000_1050_0388,0x1f4,CONCAT22(uVar3,iVar2));
    }
    for (iStack_4 = 0x0; iStack_4 < 0x10; iStack_4 += 0x1)
    {
      if (*(int *)(iVar4 + 0x24) != iStack_4)
      {
        puVar1 = (undefined4 *)*(int *)(iVar4 + 0x26 + iStack_4 * 0x4);
        iVar2 = *(int *)(iVar4 + 0x26 + iStack_4 * 0x4 + 0x2);
        if (iVar2 != 0x0 || puVar1 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
        }
        *(undefined4 *)(iVar4 + iStack_4 * 0x4 + 0x26) = 0x0;
      }
    }
    *(undefined2 *)(iVar4 + 0x7e) = 0x0;
  }
  return;
}



// Controls the state and selection index (0-15) for a 16-item UI grid. It handles index
// increment/decrement, triggers individual slot rendering, and manages registration
// with the simulator's resource 500 tracker.

void __stdcall16far UI_Grid_16_Control_Update_Logic(long this_ref,int action)
{
  int *piVar1;
  void *this;
  int notify_type;
  
  this = (void *)this_ref;
  notify_type = (int)((ulong)this_ref >> 0x10);
  if (action == 0x1)
  {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 0x1;
    if (0xf < *(int *)((int)this + 0x24))
    {
      *(undefined2 *)((int)this + 0x24) = 0x0;
    }
LAB_1010_469a:
    UI_Grid_16_Render_Single_Slot_Logic(this_ref,*(int *)((int)this + 0x24));
  }
  else if (action != 0x2)
  {
    if (action != 0x3)
    {
      if ((*(int *)((int)this + 0x6a) != 0x0) && (*(int *)((int)this + 0x6a) != 0x4))
      {
        Simulator_Register_Resource_500_Tracker_Logic(this_ref);
      }
      goto LAB_1010_46e8;
    }
    piVar1 = (int *)((int)this + 0x24);
    *piVar1 = *piVar1 + -0x1;
    if (*piVar1 < 0x0)
    {
      *(undefined2 *)((int)this + 0x24) = 0xf;
    }
    goto LAB_1010_469a;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
  Simulator_Signal_and_Cleanup_Resource_500_Logic(this_ref);
LAB_1010_46e8:
  *(int *)((int)this + 0x6a) = action;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Component_Calculate_Metrics_from_System_46f6(u32 param_1)
{
  void *pvVar1;
  int16_t iVar2;
  int16_t iVar3;
  int *out1;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  u16 *out2;
  u32 local_e;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  out2 = &local_6;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  out1 = (int *)((ulong)lVar6 >> 0x10);
  unpack_word_pair((void *)((int)lVar6 + 0xe),out1,(int *)out2);
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar4 = (int)param_1;
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)(iVar4 + 0x66));
  *(int *)(iVar4 + 0x18) = local_4 + 0x8;
  *(int *)(iVar4 + 0x1a) = local_6 + 0x9;
  iVar2 = GetSystemMetrics16(0x5);
  *(int *)(iVar4 + 0x1c) = iVar2 * 0x2 + *(int *)((int)pvVar1 + 0x4);
  iVar2 = GetSystemMetrics16(0x4);
  iVar3 = GetSystemMetrics16(0x6);
  *(int *)(iVar4 + 0x1e) = iVar3 + iVar2 + *(int *)((int)pvVar1 + 0x8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global simulator state at 1050:5748.
// Updates internal entity name label based on resource reference.

void __stdcall16far
Simulator_Set_Entity_Name_by_Resource_Logic_maybe(void *this,char *name)
{
  void *this_ptr;
  char *in_stack_00000008;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                        (void *)*(undefined4 *)((int)this + 0x6c));
  Colony_Set_Internal_Object_Name_Logic((u32)this_ptr,in_stack_00000008);
  return;
}



// Bulk rendering routine that iterates through all 16 slots of the UI grid and invokes
// the individual slot renderer.

void __stdcall16far UI_Grid_16_Render_All_Slots_Logic(long this_ref)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  do
  {
    UI_Grid_16_Render_Single_Slot_Logic(this_ref,uStack_4);
    uStack_4 += 0x1;
  } while (uStack_4 < 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer / Vtable
// References global resource manager at 1050:14CC and special dialog instance at
// 1050:4230.
// Invokes virtual destructor (index 0) for sub-objects in the grid array at offset
// 0x26.
// Uses bitmap resource: tile2.bmp (1050:1538).
// Creates GDI device context and performs rectangle rendering for UI grid slots.

void __stdcall16far UI_Grid_16_Render_Single_Slot_Logic(long this_ref,int index)
{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  char *driver;
  HDC16 force_background;
  HPALETTE16 HVar4;
  HGDIOBJ16 obj;
  HGDIOBJ16 obj_00;
  int iVar5;
  char *extraout_DX;
  char *device;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  void *unaff_SS;
  char *pcVar11;
  int iStack_20;
  uint16_t local_e [0x4];
  HGDIOBJ16 HStack_6;
  HPEN16 HStack_4;
  uint16_t uVar26;
  uint16_t uVar25;
  uint16_t uVar24;
  uint16_t uVar23;
  dword uVar21;
  
  HStack_4 = CreatePen16(-0x2805,0x77,0x1);
  HStack_6 = GetStockObject16(0x5);
  uVar23 = 0x0;
  uVar24 = 0x0;
  uVar25 = 0x1;
  uVar26 = 0x1;
  uVar9 = (undefined2)((ulong)this_ref >> 0x10);
  iVar6 = (int)this_ref;
  puVar1 = (undefined4 *)*(int *)(iVar6 + 0x26 + index * 0x4);
  device = (char *)*(int *)(iVar6 + 0x26 + index * 0x4 + 0x2);
  if (device != NULL || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,device,0x1);
    device = extraout_DX;
  }
  pvVar3 = Resource_Manager_Get_Bitmap_Region_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  iVar7 = index * 0x4;
  *(undefined2 *)(iVar6 + iVar7 + 0x26) = pvVar3;
  *(int *)(iVar6 + iVar7 + 0x28) = (int)device;
  pcVar11 = NULL;
  driver = get_with_lazy_init((void *)(void *)*(undefined4 *)(iVar6 + 0x26 + iVar7));
  force_background =
       CreateDC16(driver,device,(char *)pcVar11,(void *)((ulong)pcVar11 >> 0x10));
  pvVar2 = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  HVar4 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar2,(HDC16)((ulong)pvVar2 >> 0x10));
  obj = SelectObject16(0x1008,HStack_4);
  obj_00 = SelectObject16(0x1538,HStack_6);
  iStack_20 = 0x0;
  while( true )
  {
    if (*(int *)(iVar6 + 0x74) <= iStack_20) break;
    iVar7 = (iStack_20 * 0x10 + index) * 0x8;
    iVar5 = memcmp_far_optimized_with_segments
                      (local_e,unaff_SS,iVar7 + *(int *)(iVar6 + 0x70));
    if (iVar5 != 0x0)
    {
      uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x70) >> 0x10);
      iVar5 = (int)*(undefined4 *)(iVar6 + 0x70);
      iVar8 = iVar7 + iVar5;
      Rectangle16(*(HDC16 *)(iVar8 + 0x6),*(short *)(iVar8 + 0x4),
                  *(short *)(iVar8 + 0x2),*(short *)(iVar5 + iVar7),force_background);
    }
    iStack_20 += 0x1;
  }
  HVar4 = SelectPalette16(0x0,HVar4,force_background);
  DeleteObject16(HVar4);
  SelectObject16(0x1538,obj);
  SelectObject16(0x1538,obj_00);
  DeleteDC16(force_background);
  DeleteObject16(HStack_4);
  return;
}



void __stdcall16far UI_Grid_16_Adjust_Index_Logic_maybe(void *this)
{
  int *piVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x6a) == 0x0)
  {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 0x1;
    if (0xf < *(int *)((int)this + 0x24))
    {
      *(undefined2 *)((int)this + 0x24) = 0x0;
      return;
    }
  }
  else
  {
    if (*(int *)((int)this + 0x6a) != 0x4)
    {
      return;
    }
    piVar1 = (int *)((int)this + 0x24);
    *piVar1 = *piVar1 + -0x1;
    if (*piVar1 < 0x0)
    {
      *(undefined2 *)((int)this + 0x24) = 0xf;
    }
  }
  return;
}



void UI_Complex_Dialog_dtor_Wrapper_4994(u16 param_1,int param_2,byte param_3)
{
  UI_Complex_Dialog_scalar_dtor_4A46((void *)(param_2 + -0x20),param_3);
  return;
}



u32 __stdcall16far UI_Object_Get_Ptr_at_10_49a0(int param_1,u16 param_2)
{
  return CONCAT22(param_2,param_1 + 0xa);
}



void * __stdcall16far UI_Component_Get_Handle_at_Offset_18_Logic(void *this)
{
  return (void *)((int)this + 0x18);
}



int __stdcall16far UI_Component_Get_Value_at_Offset_14_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)this + 0x14);
}



void __stdcall16far UI_Component_Set_Value_at_Offset_14_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x14) = in_stack_00000008;
  return;
}



u16 __stdcall16far UI_Object_Get_U16_16_49e0(u32 param_1)
{
  return *(u16 *)((int)param_1 + 0x16);
}



void __stdcall16far UI_Component_Set_Value_at_Offset_16_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x16) = in_stack_00000008;
  return;
}



void __stdcall16far UI_Object_Set_U16_12_4a00(u32 param_1,u16 param_2)
{
  *(u16 *)((int)param_1 + 0x12) = param_2;
  return;
}



u16 __stdcall16far UI_Object_Get_U16_12_4a12(u32 param_1)
{
  return *(u16 *)((int)param_1 + 0x12);
}



void * __stdcall16far UI_Complex_Dialog_scalar_dtor_4A46(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Complex_Dialog_dtor_4A46(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Colony_Morale_Dialog vtable to 1010:4A46 (base 1010:2014).
// References global resource manager at 1050:0ED0 to retrieve resource 3.
// Loads resource objects using global string manager at 1050:14CC.
// Configures layout centering with constant offset 0x13C.

void * __stdcall16far UI_Colony_Morale_Dialog_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  undefined2 in_DX;
  long lVar2;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined2 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)((int)this + 0x20) = 0x1;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined4 *)((int)this + 0x26) = 0x0;
  *(undefined2 *)((int)this + 0x2a) = 0x0;
  *(undefined2 *)((int)this + 0x2c) = 0x1;
  *(undefined2 *)((int)this + 0x2e) = 0x0;
  *(undefined2 *)((int)this + 0x30) = 0x0;
  *(undefined4 *)((int)this + 0x32) = 0x0;
  *(char **)CONCAT22(segment,this) =
       (char *)s_SCForceMorale__s_for_colony__08l_1050_5024 + 0x6;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x16) = pvVar1;
  *(undefined2 *)((int)this + 0x18) = in_DX;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x26) = (int)lVar2;
  *(undefined2 *)((int)this + 0x28) = (int)((ulong)lVar2 >> 0x10);
  get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x16));
  *(undefined2 *)((int)this + 0xe) = 0x13c;
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  return this;
}



// Targeted Scan Finding: Vtable / Resource
// Resets UI_Colony_Morale_Dialog vtable during destruction.
// Manages low-level Win16 resource handles (GlobalUnlock16, FreeResource16).
// Iteratively invokes virtual destructors (vtable index 0) for sub-objects in the
// tracking array at offset 18.

void __stdcall16far UI_Colony_Morale_Dialog_dtor(void *this)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  BOOL16 BVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  undefined2 in_stack_00000006;
  int iStack_4;
  
  *_this = (char *)s_SCForceMorale__s_for_colony__08l_1050_5024 + 0x6;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0x2a) != 0x0)
  {
    unaff_CS = 0x1538;
    BVar3 = GlobalUnlock16(*(HGLOBAL16 *)((int)this + 0x2a));
    if (BVar3 == 0x0)
    {
      unaff_CS = 0x1538;
      FreeResource16(*(HGLOBAL16 *)((int)this + 0x2a));
    }
  }
  *(undefined2 *)((int)this + 0x2a) = 0x0;
  if (*(long *)*(undefined4 *)((int)this + 0x12) != 0x0)
  {
    iStack_4 = 0x0;
    while( true )
    {
      puVar2 = (undefined4 *)*(undefined4 *)((int)this + 0x12);
      if (*(int *)((undefined4 *)puVar2 + 0x2) <= iStack_4) break;
      uVar5 = (undefined2)((ulong)*puVar2 >> 0x10);
      iVar4 = (int)*puVar2;
      puVar1 = (undefined4 *)*(int *)(iVar4 + iStack_4 * 0x4);
      iVar4 = *(int *)(iVar4 + iStack_4 * 0x4 + 0x2);
      if (iVar4 != 0x0 || puVar1 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar4,0x1);
      }
      iStack_4 += 0x1;
    }
  }
  free_if_not_null((void *)(void *)*(undefined4 *)
                                    ((int)*(undefined4 *)((int)this + 0x12) + 0x4));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x12));
  puVar1 = (undefined4 *)*(int *)((int)this + 0x16);
  iVar4 = *(int *)((int)this + 0x18);
  if (iVar4 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1000,puVar1,iVar4,0x1);
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  Base_Object_dtor_2014_Logic(this);
  return;
}



long __stdcall16far UI_Component_Get_Value_at_Offset_16_Logic_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return CONCAT22(*(undefined2 *)((int)this + 0x18),*(undefined2 *)((int)this + 0x16));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer / Vtable
// Loads resource string ID 0x1BF using global manager at 1050:14CC.
// Triggers bulk entity icon loading.
// Performs indirect calls through sub-element vtables to calculate preferred layout
// sizes.

void __stdcall16far UI_Component_Update_Layout_and_Bounds_Logic(void *this,int mode)
{
  undefined4 uVar1;
  undefined2 in_AX;
  void *pvVar2;
  int in_DX;
  int iVar3;
  undefined2 uVar4;
  int in_stack_00000008;
  int iStack_e;
  undefined1 local_c [0x6];
  undefined2 uStack_6;
  int iStack_4;
  
  Resource_Manager_Bulk_Load_Entity_Icons_Logic
            ((int)*(undefined4 *)((int)this + 0x26),
             (int)((ulong)*(undefined4 *)((int)this + 0x26) >> 0x10));
  *(undefined2 *)((int)this + 0x12) = in_AX;
  *(int *)((int)this + 0x14) = in_DX;
  if (in_DX != 0x0 || *(int *)((int)this + 0x12) != 0x0)
  {
    if (in_stack_00000008 == 0x0)
    {
      *(undefined2 *)((int)this + 0x30) =
           *(undefined2 *)((int)*(undefined4 *)((int)this + 0x12) + 0x8);
    }
    else
    {
      *(undefined2 *)((int)this + 0x2e) = 0x1;
      uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x12) + 0x4);
      iVar3 = *(int *)((int)uVar1 + 0x2);
      if ((iVar3 == 0x5) || (iVar3 == 0x6))
      {
        *(undefined2 *)((int)this + 0x30) = 0x1;
        *(undefined2 *)((int)this + 0x20) = 0x0;
      }
      else
      {
        *(undefined2 *)((int)this + 0x30) = 0x2;
        *(undefined4 *)((int)this + 0x32) =
             *(undefined4 *)
              ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x4);
        pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        uVar4 = (undefined2)
                ((ulong)*(undefined4 *)*(undefined4 *)((int)this + 0x12) >> 0x10);
        iVar3 = (int)*(undefined4 *)*(undefined4 *)((int)this + 0x12);
        *(undefined2 *)(iVar3 + 0x4) = pvVar2;
        *(int *)(iVar3 + 0x6) = in_DX;
      }
    }
    iStack_4 = 0x14;
    zero_init_struct_6bytes(local_c);
    uStack_6 = 0x0;
    iStack_e = 0x0;
    while( true )
    {
      if (*(int *)((int)this + 0x30) <= iStack_e) break;
      pvVar2 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                   ((int)*(undefined4 *)
                                                          *(undefined4 *)
                                                           ((int)this + 0x12) +
                                                   iStack_e * 0x4));
      iStack_4 += (-(uint)(iStack_e == 0x0) & 0x5) + 0x14 + *(int *)((int)pvVar2 + 0x4);
      iStack_e += 0x1;
    }
    if (*(int *)((int)this + 0xe) < iStack_4)
    {
      *(int *)((int)this + 0xe) = iStack_4;
    }
  }
  return;
}



// Setter for a 4-word (8-byte) structure (likely a RECT) within a dynamically allocated
// array at offset 0x1A. Initializes the array based on the count at offset 0x30 if
// necessary.

void __stdcall16far
UI_Component_Set_Indexed_Rect_at_Offset_1A_Logic
          (void *this,int left,int top,int right,int bottom,int index)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 unaff_SI;
  int iVar2;
  int in_stack_00000010;
  
  if (*(long *)((int)this + 0x1a) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,*(int *)((int)this + 0x30) << 0x3));
    *(undefined2 *)((int)this + 0x1a) = pvVar1;
    *(undefined2 *)((int)this + 0x1c) = in_DX;
  }
  iVar2 = in_stack_00000010 * 0x8;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2) = index;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x2) = bottom;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x4) = right;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x6) = top;
  return;
}



// Returns a far pointer to an 8-byte structure (RECT) in the indexed array at offset
// 0x1A based on the current selection index (offset 0x20).

void * __stdcall16far UI_Component_Get_Indexed_Rect_Ptr_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x20) == 0x0)
  {
    return NULL;
  }
  return (void *)(*(int *)((int)this + 0x20) * 0x8 + *(int *)((int)this + 0x1a));
}



void __stdcall16far UI_Component_Invoke_Callback_at_Offset_26_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Seek_to_Index_Logic((int)*(undefined4 *)((int)this + 0x26));
  return;
}



// Iterates through the collection of RECTs at offset 0x1A and performs a `PtInRect`
// check against the provided coordinates. Updates the current selection index (offset
// 0x20) and returns the 1-based index of the hit item.

int __stdcall16far UI_Component_HitTest_Rect_Array_Logic(void *this,int x,int y)
{
  bool bVar1;
  BOOL16 BVar2;
  int16_t in_stack_0000000a;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  uStack_8._2_2_ = y;
  uStack_8._0_2_ = in_stack_0000000a;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)this + 0x20);
  bVar1 = false;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  uStack_c = 0x0;
  uStack_a = 0x0;
  do
  {
    if (*(int *)((int)this + 0x30) <= uStack_c)
    {
LAB_1010_4e67:
      if (uStack_a != 0x0)
      {
        *(int *)((int)this + 0x20) = uStack_a;
      }
      if (bVar1)
      {
        return uStack_a + 0x1;
      }
      return 0x0;
    }
    BVar2 = PtInRect(uStack_8,(void *)CONCAT22((int)((ulong)*(undefined4 *)
                                                             ((int)this + 0x1a) >> 0x10)
                                               ,(void *)((int)*(undefined4 *)
                                                               ((int)this + 0x1a) +
                                                        uStack_c * 0x8)));
    if (BVar2 != 0x0)
    {
      uStack_a = uStack_c;
      bVar1 = true;
      goto LAB_1010_4e67;
    }
    uStack_c += 0x1;
  } while( true );
}



void __stdcall16far UI_Component_Notify_Listeners_Type_D_Logic(void *this)
{
  int in_stack_00000006;
  
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,in_stack_00000006);
  return;
}



// Loads Win16 resources using FindResource16, LoadResource16, LockResource16. Uses
// internal resource ID lookup table at 1010:1384 and global instance at 1050:038C.

void __stdcall16far UI_Component_Load_Resource_by_Indexed_ID_Logic(void *this)
{
  undefined4 uVar1;
  BOOL16 BVar2;
  HRSRC16 h_rsrc;
  HGLOBAL16 handle;
  char *unaff_CS;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x20) != 0x0)
  {
    if (*(int *)((int)this + 0x2a) != 0x0)
    {
      unaff_CS = (char *)s_tile2_bmp_1050_1538;
      BVar2 = GlobalUnlock16(*(HGLOBAL16 *)((int)this + 0x2a));
      if (BVar2 == 0x0)
      {
        unaff_CS = (char *)s_tile2_bmp_1050_1538;
        FreeResource16(*(HGLOBAL16 *)((int)this + 0x2a));
      }
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x12) + 0x4);
    h_rsrc = FindResource16((char *)CONCAT22(0xa,unaff_CS),
                            (char *)((ulong)*(uint *)(*(int *)((int)uVar1 +
                                                              *(int *)((int)this + 0x20)
                                                              * 0x2) * 0x2 + 0x1384) <<
                                    0x10),0x0);
    handle = LoadResource16(h_rsrc,(HMODULE16)PTR_DAT_1050_0000_1050_038c);
    *(HGLOBAL16 *)((int)this + 0x2a) = handle;
    if (handle != 0x0)
    {
      LOCKRESOURCE(handle);
      return;
    }
  }
  return;
}



// Retrieves a 16-bit value from a global lookup table at 0x139A based on the provided
// index.

int __stdcall16far get_table_139A_entry_logic(int index)
{
  int in_stack_00000008;
  
  return *(int *)(in_stack_00000008 * 0x2 + 0x139a);
}
