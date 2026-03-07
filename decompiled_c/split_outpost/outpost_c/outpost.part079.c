/*
 * Source: outpost.c
 * Chunk: 79/117
 * Original lines: 89720-90905
 * Boundaries: top-level declarations/definitions only
 */




// Scalar deleting destructor for UI production items.

void * __stdcall16far
UI_Production_Item_dtor_Scalar_Deleting_201e(void *this_ptr,byte flags)
{
  UI_Production_Item_Base_dtor_Internal_1d28(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for the Colony Production Manager. Initializes a massive state structure
// (over 0x300 bytes) including resource arrays, counters, and vtable 0x293C. Sets
// default growth factors.

u16 * __stdcall16far UI_Colony_Production_Manager_ctor_init_2068(void *this_ptr)
{
  astruct_293 *uVar4;
  int value;
  int iStack_4;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,NULL,NULL);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_293 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem92_wav_1050_293c;
  uVar4->field2_0x2 = 0x1030;
  memset_far(&uVar4->field_0x10,value,0x0);
  memset_far(&uVar4->field_0x116,value,0x0);
  memset_far(&uVar4->field_0x19c,value,0x0);
  memset_far(uVar4 + 0x1,value,0x0);
  iStack_4 = 0x0;
  do
  {
    *(undefined2 *)(&uVar4->field_0x10 + iStack_4 * 0x2) = 0xffff;
    *(undefined2 *)(&uVar4->field_0x1a6 + iStack_4 * 0x2) = 0x19;
    iStack_4 += 0x1;
  } while (iStack_4 < 0x83);
  return (u16 *)uVar4;
}



// Parameterized constructor for the Colony Production Manager. Performs exhaustive
// state initialization, zeroing out numerous resource and population tracking fields.

u16 * __stdcall16far
UI_Colony_Production_Manager_ctor_with_Params_2112(void *this_ptr,void *arg2)
{
  astruct_292 *uVar4;
  int value;
  int iStack_4;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x1,(void *)0x1,(void *)0x8000000,arg2);
  value = (int)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_292 *)this_ptr;
  *(char **)this_ptr = (char *)s_fem92_wav_1050_293c;
  uVar4->field2_0x2 = 0x1030;
  iStack_4 = 0x0;
  do
  {
    (&uVar4->field15_0x10)[iStack_4] = 0xffff;
    (&uVar4->field406_0x1a6)[iStack_4] = 0x19;
    iStack_4 += 0x1;
  } while (iStack_4 < 0x83);
  memset_far(&uVar4->field_0x116,value,0x0);
  memset_far(&uVar4->field_0x19c,value,0x0);
  memset_far(uVar4 + 0x1,value,0x0);
  uVar4->field15_0x10 = 0x0;
  uVar4->field18_0x14 = 0x0;
  uVar4->field19_0x16 = 0x0;
  uVar4->field28_0x20 = 0x0;
  uVar4->field63_0x44 = 0x0;
  uVar4->field74_0x50 = 0x0;
  uVar4->field99_0x6a = 0x0;
  uVar4->field124_0x84 = 0x0;
  uVar4->field191_0xc8 = 0x0;
  uVar4->field218_0xe4 = 0x0;
  uVar4->field229_0xf0 = 0x0;
  uVar4->field232_0xf4 = 0x0;
  uVar4->field233_0xf6 = 0x0;
  uVar4->field243_0x102 = 0x0;
  uVar4->field240_0xfe = 0x0;
  uVar4->field406_0x1a6 = 0x0;
  uVar4->field409_0x1aa = 0x0;
  uVar4->field410_0x1ac = 0x0;
  uVar4->field419_0x1b6 = 0x0;
  uVar4->field454_0x1da = 0x0;
  uVar4->field465_0x1e6 = 0x0;
  uVar4->field490_0x200 = 0x0;
  uVar4->field515_0x21a = 0x0;
  uVar4->field582_0x25e = 0x0;
  uVar4->field609_0x27a = 0x0;
  uVar4->field620_0x286 = 0x0;
  uVar4->field623_0x28a = 0x0;
  uVar4->field624_0x28c = 0x0;
  uVar4->field634_0x298 = 0x0;
  uVar4->field631_0x294 = 0x0;
  return (u16 *)uVar4;
}



// Retrieves a colony metric value by index, selecting either the current value (offset
// 0x10) or a base/limit value (offset 0x1A6) based on complex range checks.

int __stdcall16far UI_Colony_Get_Active_Metric_by_Index_2242(void *this_ptr,int index)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  iVar3 = iVar2 + 0x10;
  if (-0x1 < *(int *)(iVar3 + index * 0x2))
  {
    iVar1 = *(int *)(iVar2 + 0x10 + index * 0x2);
    iVar3 = iVar2 + 0x1a6;
    if (*(int *)(iVar3 + index * 0x2) <= iVar1)
    {
      return iVar1;
    }
  }
  return *(int *)(iVar3 + index * 0x2);
}



u16 __stdcall16far UI_Window_Type227A_Save_to_File_Logic(void *param_1,void *param_2)
{
  int iVar1;
  void *pvVar2;
  void *handle_wrapper;
  
  iVar1 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar1 != 0x0)
  {
    pvVar2 = (void *)param_1;
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x10),handle_wrapper);
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x116),
                               handle_wrapper);
      if (iVar1 != 0x0)
      {
        iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x19c),
                                 handle_wrapper);
        if (iVar1 != 0x0)
        {
          iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x1a6),
                                   handle_wrapper);
          if (iVar1 != 0x0)
          {
            iVar1 = file_write_check((long)param_2,(void *)((int)pvVar2 + 0x2ac),
                                     handle_wrapper);
            if (iVar1 != 0x0)
            {
              return 0x1;
            }
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far UI_Window_Type232E_Load_from_File_Logic(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  
  iVar1 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,(void *)param_2);
  if (iVar1 != 0x0)
  {
    iVar1 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x10),handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x116),handle_wrapper);
      if (iVar2 != 0x0)
      {
        iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x19c),handle_wrapper);
        if (iVar2 != 0x0)
        {
          iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x1a6),handle_wrapper);
          if (iVar2 != 0x0)
          {
            iVar1 = file_read_check((long)param_2,(void *)(iVar1 + 0x2ac),handle_wrapper
                                   );
            if (iVar1 != 0x0)
            {
              return 0x1;
            }
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs per-turn decrement logic for a colony resource or population value (index
// param_3). If value is negative, reloads from a static resource table (0x31 or 0x41).
// Triggers simulator notifications and updates status flags upon depletion. Involves
// random factor checks (2852).

u16 __stdcall16far
Colony_Process_Turn_Decrement_Value_23e2(void *this_ptr,int type,uint index)
{
  undefined2 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  u16 arg1;
  int iVar5;
  u16 arg2;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *entity_ptr;
  long lVar8;
  uint uVar9;
  int iStack_8;
  
  arg2 = (u16)((ulong)this_ptr >> 0x10);
  arg1 = (u16)this_ptr;
  if (*(int *)(arg1 + 0x10 + index * 0x2) < 0x0)
  {
    if (type == 0x0)
    {
      puVar6 = (undefined4 *)
               Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x31);
      puVar1 = (undefined2 *)((int)*puVar6 + 0x14);
      uVar7 = (*(code *)*puVar1)();
    }
    else
    {
      puVar6 = (undefined4 *)
               Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x41);
      puVar1 = (undefined2 *)((int)*puVar6 + 0x14);
      uVar7 = (*(code *)*puVar1)();
    }
    uVar7 = *(undefined4 *)((int)uVar7 + 0x16);
    *(undefined2 *)(arg1 + index * 0x2 + 0x10) = *(undefined2 *)((int)uVar7 + 0x4);
  }
  if (*(int *)(arg1 + 0x10 + index * 0x2) != 0x0)
  {
    entity_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)0x1);
    bVar2 = Colony_Check_Random_Turn_Event_Factor_2852(arg1,arg2,entity_ptr);
    iStack_8 = (int)CONCAT31(extraout_var,bVar2);
    bVar2 = false;
    if (*(int *)(arg1 + 0x152) != 0x0)
    {
      bVar3 = Colony_Check_If_Value_in_State_Array_266c(this_ptr,index);
      if ((int)CONCAT31(extraout_var_00,bVar3) != 0x0)
      {
        iStack_8 += 0x1;
        bVar2 = true;
      }
    }
    iVar4 = index * 0x2;
    iStack_8 = *(int *)(arg1 + iVar4 + 0x10) - iStack_8;
    *(int *)(arg1 + iVar4 + 0x10) = iStack_8;
    if (iStack_8 < 0x0)
    {
      *(undefined2 *)(arg1 + iVar4 + 0x10) = 0x0;
    }
    iVar4 = index * 0x2;
    if (*(int *)(arg1 + 0x2ac + iVar4) == 0x0)
    {
      iVar5 = iVar4 + arg1;
      *(undefined2 *)(iVar5 + 0x2ac) = 0x1;
      *(int *)(iVar5 + 0x1a6) = *(int *)(arg1 + iVar4 + 0x1a6) + -0x1;
      if (*(int *)(arg1 + iVar4 + 0x1a6) < 0x0)
      {
        *(undefined2 *)(iVar5 + 0x1a6) = 0x0;
      }
    }
    if ((*(int *)(arg1 + 0x10 + index * 0x2) != 0x0) ||
       (*(int *)(arg1 + 0x1a6 + index * 0x2) != 0x0))
    {
      if (*(int *)(arg1 + 0x10 + index * 0x2) == 0x0)
      {
        *(undefined2 *)(arg1 + index * 0x2 + 0x10) = 0x1;
      }
      return 0x0;
    }
    uVar9 = index;
    lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
    UI_Event_Dispatcher_Map_Entity_to_Notification_Logic
              (0x1010,(int)lVar8,(int)((ulong)lVar8 >> 0x10),uVar9);
    Colony_Notify_Simulator_of_Resource_Shift_26ac((u32)this_ptr,index);
    if (bVar2)
    {
      iVar4 = Colony_Find_Index_in_State_Array_28dc(this_ptr,index);
      *(undefined2 *)(arg1 + iVar4 * 0x2 + 0x19c) = 0x0;
    }
  }
  return 0x1;
}



// Checks if the colony value at the specified index (offset 0x10 + index*2) is zero.

u16 __stdcall16far Colony_Check_Value_at_Index_is_Zero_25b2(void *this_ptr,int index)
{
  if (*(int *)((int)(void *)this_ptr + index * 0x2 + 0x10) == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// Directly sets a 16-bit value into the colony's internal tracking array at the
// specified index.

void __stdcall16far Colony_Set_Value_at_Index_25d8(void *this_ptr,u16 value,u16 index)
{
  *(u16 *)((int)(void *)this_ptr + index * 0x2 + 0x10) = value;
  return;
}



// Increments a 16-bit value in the colony's secondary tracking array (offset 0x116) at
// the specified index. If param_2 is 0, increments by 1.

void __stdcall16far
Colony_Increment_Value_at_Index_25f0(void *this_ptr,int amount,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (amount == 0x0)
  {
    amount = *(int *)((int)this_ptr + 0x116 + index * 0x2) + 0x1;
  }
  *(int *)((int)this_ptr + index * 0x2 + 0x116) = amount;
  return;
}



// Attempts to append a value to the colony's state tracking array (offset 0x19C) by
// finding the first zero slot. Excludes values 0x70 and 1.

bool __stdcall16far Colony_Try_Append_to_State_Array_2622(void *this_ptr,int value)
{
  int iVar1;
  
  if ((value != 0x70) && (value != 0x1))
  {
    iVar1 = Colony_Find_Index_in_State_Array_28dc(this_ptr,0x0);
    if (-0x1 < iVar1)
    {
      *(int *)((int)(void *)this_ptr + iVar1 * 0x2 + 0x19c) = value;
    }
    return -0x1 < iVar1;
  }
  return false;
}



// Checks if a specific value exists within the colony's state tracking array.

bool __stdcall16far
Colony_Check_If_Value_in_State_Array_266c(void *param_1,undefined4 param_2)
{
  int iVar1;
  
  iVar1 = Colony_Find_Index_in_State_Array_28dc
                    ((void *)CONCAT22((int)param_2,param_1),
                     (int)((ulong)param_2 >> 0x10));
  return iVar1 != -0x1;
}



// Zero-fills a 262-byte bitflag array within the colony structure (offset 0x2AC).

void __stdcall16far Colony_Clear_State_Bitflags_at_2AC_2690(void *this_ptr)
{
  memset_far((void *)((int)(void *)this_ptr + 0x2ac),(int)((ulong)this_ptr >> 0x10),0x0)
  ;
  return;
}



// Iterates through all entities in the simulator world belonging to the colony and
// applies resource/state penalties based on the type of shift (param_2). Handles
// morale, food, and energy depletion effects.

void __stdcall16far
Colony_Notify_Simulator_of_Resource_Shift_26ac(u32 colony_mgr,uint shift_type)
{
  char cVar1;
  u16 value;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  void *pvVar8;
  int iStack_26;
  undefined1 local_14 [0x12];
  
  iVar6 = (int)colony_mgr;
  uVar7 = (undefined2)(colony_mgr >> 0x10);
  if (shift_type != 0x13)
  {
    if (0x13 < (int)shift_type)
    {
      if (shift_type != 0x5f)
      {
        if ((int)(shift_type - 0x5f) < 0x6)
        {
          return;
        }
        if (shift_type != 0x66 && 0x0 < (int)(shift_type - 0x65))
        {
          if ((int)(shift_type - 0x66) < 0x5)
          {
            return;
          }
          if (0x4 < (int)(shift_type - 0x6b))
          {
            return;
          }
        }
      }
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
      while( true )
      {
        pvVar8 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                           ((undefined1 *)CONCAT22(unaff_SS,local_14));
        iVar5 = (int)((ulong)pvVar8 >> 0x10);
        iVar2 = (int)pvVar8;
        if (iVar5 == 0x0 && iVar2 == 0x0) break;
        if (*(long *)(iVar6 + 0x4) == *(long *)(iVar2 + 0x200))
        {
          value = *(int *)(iVar2 + 0x18) + 0x19;
          if (0x3e8 < (int)value)
          {
            value = 0x3e8;
          }
          UI_Component_Shift_and_Set_Values_18_1A((u32)pvVar8,value);
        }
      }
      return;
    }
    if (shift_type == 0x12)
    {
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
      while( true )
      {
        pvVar8 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                           ((undefined1 *)CONCAT22(unaff_SS,local_14));
        iVar5 = (int)((ulong)pvVar8 >> 0x10);
        iVar2 = (int)pvVar8;
        if (iVar5 == 0x0 && iVar2 == 0x0) break;
        if (*(long *)(iVar6 + 0x4) == *(long *)(iVar2 + 0x200))
        {
          iVar3 = (int)*(undefined4 *)(iVar2 + 0x1f6);
          uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1f6) >> 0x10);
          *(int *)(iVar3 + 0x182) = *(int *)(iVar3 + 0x182) + -0x19;
          iVar2 = *(int *)(iVar3 + 0x182);
          if (iVar2 < 0x1)
          {
            iVar2 = 0x1;
          }
          *(int *)(iVar3 + 0x182) = iVar2;
        }
      }
      return;
    }
    if (0x12 < shift_type)
    {
      return;
    }
    cVar1 = (char)shift_type;
    if (cVar1 != '\n')
    {
      if ((char)(cVar1 + -0xa) < '\x06')
      {
        return;
      }
      if ('\x01' < (char)(cVar1 + -0x10))
      {
        return;
      }
    }
  }
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    pvVar8 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_14));
    iVar5 = (int)((ulong)pvVar8 >> 0x10);
    iVar2 = (int)pvVar8;
    if (iVar5 == 0x0 && iVar2 == 0x0) break;
    if (*(long *)(iVar6 + 0x4) == *(long *)(iVar2 + 0x200))
    {
      uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x1f6) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar2 + 0x1f6) + 0x180;
      iStack_26 = 0x1;
      do
      {
        iVar3 = iStack_26 * 0x2;
        *(int *)(iVar3 + iVar2) = *(int *)(iVar3 + iVar2) + -0x1;
        iVar5 = *(int *)(iVar3 + iVar2);
        if (iVar5 < 0x1)
        {
          iVar5 = 0x1;
        }
        *(int *)(iVar3 + iVar2) = iVar5;
        iStack_26 += 0x1;
      } while (iStack_26 < 0x6);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns a pseudo-random boolean based on the current simulator tick and a
// difficulty-scaled factor from the entity. Used to determine if certain per-turn
// updates skip a tick.

bool __stdcall16far
Colony_Check_Random_Turn_Event_Factor_2852(u16 arg1,u16 arg2,void *entity_ptr)
{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *uStack_16;
  
  iVar1 = *(int *)((int)entity_ptr + 0x18);
  pvVar2 = (void *)*_p_SimulatorWorldContext;
  if (iVar1 < 0xfa)
  {
    uVar3 = (uint)pvVar2 & 0x1;
  }
  else
  {
    if (0x1c1 < iVar1)
    {
      if (iVar1 < 0x226)
      {
        return true;
      }
      if ((iVar1 < 0x2ee) &&
         (uStack_16 = (void *)CONCAT22(((uint *)_p_SimulatorWorldContext)[0x1],pvVar2),
         (ulong)uStack_16 % 0x3 != 0x0))
      {
        return true;
      }
      return true;
    }
    uStack_16 = (void *)CONCAT22(((uint *)_p_SimulatorWorldContext)[0x1],pvVar2);
    uVar3 = (uint)(ZEXT48(uStack_16) % 0x3);
  }
  return uVar3 != 0x0;
}



// Searches the colony's 5-element state tracking array (offset 0x19C) for a specific
// value and returns its index, or -1 if not found.

int __stdcall16far Colony_Find_Index_in_State_Array_28dc(void *this_ptr,int value)
{
  u16 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    if (0x4 < (int)uStack_4)
    {
      return -0x1;
    }
    if (*(int *)((int)(void *)this_ptr + uStack_4 * 0x2 + 0x19c) == value) break;
    uStack_4 += 0x1;
  }
  return uStack_4;
}



// Scalar deleting destructor for UI windows with managed lists.

void * __stdcall16far
UI_Window_with_List_dtor_Scalar_Deleting_2916(void *this_ptr,byte flags)
{
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI colony component. Initializes base window-with-list and sets
// vtable to 0x3130. Default capacity 5, increment 15.

u16 * __stdcall16far UI_Colony_Component_ctor_init_2958(void *this_ptr)
{
  astruct_291 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_init_17ce(this_ptr,(void *)0x5,(void *)0xf);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_291 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  uVar1->field16_0x14 = 0x0;
  uVar1->field17_0x16 = 0x0;
  uVar1->field18_0x18 = (u16)((char *)s_fem36_wav_1050_270c + 0x4);
  uVar1->field19_0x1a = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_add51_wav_1050_2d3a_1050_3130;
  uVar1->field2_0x2 = 0x1030;
  return (u16 *)uVar1;
}



// Parameterized constructor for UI colony components.

void * __stdcall16far
UI_Colony_Component_ctor_with_Params_299a(void *this_ptr,void *arg2)
{
  astruct_290 *uVar1;
  undefined2 uVar2;
  
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x5,(void *)0xf,(void *)0x2000000,arg2);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_290 *)this_ptr;
  uVar1->field15_0x10 = 0x0;
  uVar1->field16_0x14 = 0x0;
  uVar1->field17_0x16 = 0x0;
  uVar1->field18_0x18 = (u16)((char *)s_fem36_wav_1050_270c + 0x4);
  uVar1->field19_0x1a = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_add51_wav_1050_2d3a_1050_3130;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// Internal destructor for UI colony components. Cleans up internal sub-objects and
// reverts vtables.

void __stdcall16far UI_Colony_Component_dtor_Internal_29e6(void *this_ptr)
{
  void *ptr;
  astruct_289 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_289 *)this_ptr;
  *(void ***)this_ptr = (void **)&PTR_s_add51_wav_1050_2d3a_1050_3130;
  uVar3->field2_0x2 = 0x1030;
  ptr = (void *)*(void **)&uVar3->field_0x10;
  if (uVar3->field17_0x12 != 0x0 || ptr != NULL)
  {
    Helper_Free_Pointer_at_Offset2_8496((void *)CONCAT22(uVar3->field17_0x12,ptr));
    free_if_not_null(ptr);
  }
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs a per-turn state update for a simulator entity. Decrements counters at
// offset 0x18 and triggers resource change events (Type 0x21) in the Turn Manager upon
// completion.

void __stdcall16far Simulator_Entity_OnTick_Update_2a2c(void *entity_ptr)
{
  astruct_288 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  int qty_delta;
  int arg4;
  undefined2 uVar5;
  undefined2 uVar6;
  int resource_id;
  
  uVar2 = (undefined2)((ulong)entity_ptr >> 0x10);
  uVar1 = (astruct_288 *)entity_ptr;
  if (0x0 < uVar1->field23_0x18)
  {
    uVar1->field23_0x18 = uVar1->field23_0x18 + -0x1;
  }
  if (uVar1->field22_0x16 == 0x0)
  {
    uVar1->field22_0x16 = 0x1;
  }
  if (uVar1->field24_0x1a == 0x0)
  {
    uVar1->field24_0x1a = 0x2;
  }
  if (uVar1->field23_0x18 < 0x1)
  {
    uVar1->field22_0x16 = 0x2;
    uVar1->field24_0x1a = 0x1;
    uVar6 = 0x0;
    resource_id = 0x21;
    arg4 = 0x1;
    uVar5 = 0x0;
    uVar4 = 0x0;
    qty_delta = 0x0;
    uVar2 = 0x0;
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar3,CONCAT22(uVar4,uVar2),qty_delta,arg4,CONCAT22(uVar6,uVar5)
               ,resource_id);
  }
  return;
}



// Increments and returns the internal sequence ID (offset 0x14) for a simulator entity.

u16 __stdcall16far Simulator_Entity_Increment_Sequence_ID_2a98(void *entity_ptr)
{
  int *piVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)entity_ptr >> 0x10);
  piVar1 = (int *)((int)entity_ptr + 0x14);
  *piVar1 = *piVar1 + 0x1;
  return *(u16 *)((int)entity_ptr + 0x14);
}



// WARNING: Unable to use type for symbol uVar1
// Retrieves the entity type ID (offset 0xC) from the component's internal simulator
// object. Equivalent to 1030:6FA0.

u16 __stdcall16far UI_Component_Get_Entity_Type_ID_Alternative_2aaa(void *this_ptr)
{
  undefined2 uVar2;
  undefined4 uVar1;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x10) == 0x0)
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x10);
  return *(u16 *)((int)uVar1 + 0xc);
}



undefined2 __stdcall16far
UI_Window_Complex_Serialize_to_File_2aca(void *param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 uVar4;
  void *unaff_SS;
  char *str;
  undefined4 local_18 [0x3];
  undefined2 local_c [0x3];
  undefined2 local_6 [0x2];
  
  iVar2 = UI_Window_with_List_Save_to_File_Logic_1978(param_1,param_2);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  pvVar3 = (void *)param_1;
  local_c[0x0] = *(undefined2 *)*(undefined4 *)((int)pvVar3 + 0x10);
  iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
  if (iVar2 != 0x0)
  {
    str = (char *)((ulong)param_2 >> 0x10);
    iVar2 = file_context_write_string_with_terminator_logic((void *)param_2,str);
    if ((iVar2 != 0x0) &&
       (iVar2 = file_context_serialize_3word_struct_logic((void *)param_2,str),
       iVar2 != 0x0))
    {
      local_6[0x0] = *(undefined2 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xc);
      iVar2 = file_write_check((long)param_2,local_6,unaff_SS);
      if (iVar2 != 0x0)
      {
        local_18[0x0] = *(undefined4 *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0xe);
        iVar2 = file_write_check((long)param_2,local_18,unaff_SS);
        if ((iVar2 != 0x0) &&
           (iVar2 = file_write_check((long)param_2,
                                     (void *)((int)*(undefined4 *)((int)pvVar3 + 0x10) +
                                             0x12),
                                     (void *)((ulong)*(undefined4 *)((int)pvVar3 + 0x10)
                                             >> 0x10)), iVar2 != 0x0))
        {
          local_c[0x0] = *(undefined2 *)
                          ((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x22);
          iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
          if ((iVar2 != 0x0) &&
             ((*(int *)((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x22) == 0x0 ||
              (pvVar1 = (void *)*(undefined4 *)
                                 ((int)*(undefined4 *)((int)pvVar3 + 0x10) + 0x24),
              iVar2 = file_write_check((long)param_2,(void *)pvVar1,
                                       (void *)((ulong)pvVar1 >> 0x10)), iVar2 != 0x0)))
             )
          {
            local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x14);
            iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
            if (iVar2 != 0x0)
            {
              local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x16);
              iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
              if (iVar2 != 0x0)
              {
                local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x18);
                iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
                if (iVar2 != 0x0)
                {
                  local_c[0x0] = *(undefined2 *)((int)pvVar3 + 0x1a);
                  iVar2 = file_write_check((long)param_2,local_c,unaff_SS);
                  if (iVar2 != 0x0)
                  {
                    return 0x1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Complex_List_Deserialize_from_File_2c8a(u32 param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  undefined *heap_ctx;
  void *pvVar3;
  char *pcVar4;
  void *pvVar5;
  undefined *in_DX;
  undefined2 unaff_SI;
  undefined2 uVar6;
  void *unaff_SS;
  long context;
  int iVar7;
  void *handle_wrapper;
  char *buffer;
  undefined4 local_40e;
  undefined2 local_406;
  undefined2 local_404;
  char local_402 [0x400];
  
  pvVar5 = (void *)param_2;
  iVar7 = (int)param_1;
  handle_wrapper = (void *)(param_1 >> 0x10);
  iVar2 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,pvVar5);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar3 = alloc_with_hooks(0x28,0x1,heap_ctx);
  local_40e = (void *)CONCAT22(in_DX,pvVar3);
  if (in_DX == NULL && pvVar3 == NULL)
  {
    *(undefined4 *)(iVar7 + 0x10) = 0x0;
    in_DX = NULL;
  }
  else
  {
    zero_init_struct_6bytes((void *)((int)pvVar3 + 0x6));
    *(undefined4 *)(iVar7 + 0x10) = local_40e;
  }
  iVar2 = file_read_check((long)param_2,(void *)(void *)*(undefined4 *)(iVar7 + 0x10),
                          (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10));
  if (iVar2 != 0x0)
  {
    pcVar4 = local_402;
    buffer = (char *)((ulong)param_2 >> 0x10);
    file_context_read_null_terminated_string_logic(pvVar5,buffer);
    if (pcVar4 != NULL)
    {
      pcVar4 = strdup_allocate(local_402);
      uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar7 + 0x10);
      *(undefined2 *)(iVar2 + 0x2) = pcVar4;
      *(undefined2 *)(iVar2 + 0x4) = in_DX;
      iVar2 = file_context_deserialize_3word_struct_logic(pvVar5,buffer);
      if ((((iVar2 != 0x0) &&
           (iVar2 = file_read_check((long)param_2,
                                    (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0xc),
                                    (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >>
                                            0x10)), iVar2 != 0x0)) &&
          (iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0xe),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0)) &&
         ((iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x12),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0 &&
          (iVar2 = file_read_check((long)param_2,
                                   (void *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x22),
                                   (void *)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10
                                           )), iVar2 != 0x0))))
      {
        if (*(int *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x22) != 0x0)
        {
          uVar6 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0x10) >> 0x10);
          iVar2 = (int)*(undefined4 *)(iVar7 + 0x10);
          pvVar5 = allocate_memory(CONCAT22(unaff_SI,*(int *)(iVar2 + 0x22) * 0x2));
          *(undefined2 *)(iVar2 + 0x24) = pvVar5;
          *(undefined2 *)(iVar2 + 0x26) = in_DX;
          pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x10) + 0x24);
          iVar2 = file_read_check((long)param_2,(void *)pvVar1,
                                  (void *)((ulong)pvVar1 >> 0x10));
          if (iVar2 == 0x0)
          {
            g_LastFileErrorMsgID = (undefined *)0x6d2;
            return 0x0;
          }
        }
        iVar2 = file_read_check((long)param_2,(void *)(iVar7 + 0x14),handle_wrapper);
        if (((iVar2 != 0x0) &&
            (iVar2 = file_read_check((long)param_2,&local_404,unaff_SS), iVar2 != 0x0))
           && ((iVar2 = file_read_check((long)param_2,(void *)(iVar7 + 0x18),
                                        handle_wrapper), iVar2 != 0x0 &&
               (iVar2 = file_read_check((long)param_2,&local_406,unaff_SS), iVar2 != 0x0
               ))))
        {
          *(undefined2 *)(iVar7 + 0x16) = local_404;
          *(undefined2 *)(iVar7 + 0x1a) = local_406;
          context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
          UI_Component_Set_FarPtr_at_Offset_16_Logic(context,*(long *)(iVar7 + 0x4));
          Resource_Manager_Set_Offset_E82_Logic
                    ((void *)_p_GlobalResourceManager,
                     (int)((ulong)_p_GlobalResourceManager >> 0x10));
          return 0x1;
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Maps a simulator entity's type to its corresponding site bounding dimensions
// (Width/Height) used for placement. Returns the object pointer.

int __stdcall16far
Simulator_Get_Site_Bounds_by_Entity_Type_2f1a(void *this_ptr,void *out_w,void *out_h)
{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)((int)this_ptr + 0x10);
  iVar2 = (int)uVar1;
  switch(*(undefined2 *)(iVar2 + 0xc))
  {
  case 0x1:
  case 0x2:
  case 0x8:
  case 0x9:
    *(undefined2 *)out_h = 0x19;
    *(undefined2 *)out_w = 0x2d;
    return iVar2;
  case 0x3:
  case 0x4:
  case 0x5:
    *(undefined2 *)out_h = 0xa;
    *(undefined2 *)out_w = 0xf;
    return iVar2;
  case 0x6:
    *(undefined2 *)out_h = 0xa;
    *(undefined2 *)out_w = 0x19;
    return iVar2;
  case 0x7:
    *(undefined2 *)out_h = 0x19;
    *(undefined2 *)out_w = 0x37;
    return iVar2;
  default:
    *(undefined2 *)out_h = 0x0;
    *(undefined2 *)out_w = 0x0;
    return 0x0;
  }
}



// Determines a resource category ID (1-4) based on an entity's internal capacity or
// level (offset 0xC).

u16 __stdcall16far Simulator_Get_Entity_Resource_Category_ID_2fac(void *entity_ptr)
{
  astruct_287 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)entity_ptr >> 0x10);
  uVar1 = (astruct_287 *)entity_ptr;
  if (uVar1->field16_0x10 == 0x0)
  {
    return 0x0;
  }
  if (*(uint *)((int)uVar1->field16_0x10 + 0xc) < 0x2)
  {
    return 0x4;
  }
  if (*(uint *)((int)uVar1->field16_0x10 + 0xc) < 0x5)
  {
    return 0x3;
  }
  if (*(uint *)((int)uVar1->field16_0x10 + 0xc) < 0x8)
  {
    return 0x2;
  }
  return 0x1;
}



// Sets a far pointer to an internal object (offset 0x10) for the UI component.
// Equivalent to 1030:5FE2.

void __stdcall16far
UI_Component_Set_Internal_Object_Ptr_Alternative_3006(u32 this_ptr,u32 obj_ptr)
{
  *(u32 *)((int)this_ptr + 0x10) = obj_ptr;
  return;
}



// Sets the name string for an internal colony object (offset 0x10) by freeing the old
// string and duplicating the new one.

void __stdcall16far Colony_Set_Internal_Object_Name_Logic(u32 this_ptr,char *name)
{
  char *pcVar1;
  undefined2 in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)(this_ptr >> 0x10);
  iVar2 = (int)this_ptr;
  if (*(long *)(iVar2 + 0x10) != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)
                                      ((int)*(undefined4 *)(iVar2 + 0x10) + 0x2));
    pcVar1 = strdup_allocate(name);
    uVar4 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x10) >> 0x10);
    iVar2 = (int)*(undefined4 *)(iVar2 + 0x10);
    *(undefined2 *)(iVar2 + 0x2) = pcVar1;
    *(undefined2 *)(iVar2 + 0x4) = in_DX;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a managed list of UI items representing colony entities. Iterates through
// the simulator's collection and populates the list.

u16 __stdcall16far Colony_Initialize_Entity_List_UI_Logic(astruct_286 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_DX;
  astruct_286 *uVar3;
  undefined2 unaff_SI;
  undefined2 uVar4;
  void *puVar5;
  void *uVar6;
  uint uStack_4;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_286 *)param_1;
  if (uVar3->field12_0xc == NULL)
  {
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      uVar3->field12_0xc = NULL;
    }
    else
    {
      puVar5 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,pvVar3),(void *)0x5,(void *)0x5);
      *(void **)&uVar3->field12_0xc = (void *)puVar5;
      *(undefined2 *)((int)&uVar3->field12_0xc + 0x2) = (int)((ulong)puVar5 >> 0x10);
    }
  }
  for (uStack_4 = 0x0; uStack_4 < *(uint *)((int)uVar3->field13_0x10 + 0x22);
      uStack_4 += 0x1)
  {
    uVar2 = *(undefined4 *)((int)uVar3->field13_0x10 + 0x24);
    uVar6 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                      (_p_SimulatorWorldContext,0x0,
                       *(undefined2 *)((int)uVar2 + uStack_4 * 0x2),0x0,0x3000000,
                       (int)*(undefined4 *)&uVar3->field_0x4,
                       (int)((ulong)*(undefined4 *)&uVar3->field_0x4 >> 0x10));
    puVar1 = (undefined2 *)((int)*uVar3->field12_0xc + 0x8);
    (*(code *)*puVar1)(0x1028,uVar3->field12_0xc,(void *)uVar6,
                       (int)((ulong)uVar6 >> 0x10),uStack_4,0x0);
  }
  return 0x1;
}



// Scalar deleting destructor for the Colony object.

void * __stdcall16far Colony_Scalar_Deleting_Dtor_310a(void *this_ptr,byte flags)
{
  UI_Colony_Component_dtor_Internal_29e6(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}
