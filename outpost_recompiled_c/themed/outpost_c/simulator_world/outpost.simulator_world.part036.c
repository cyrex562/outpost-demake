/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 36/56
 * Original lines (combined): 90066-91435
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the primary Colony object. Initializes internal state arrays,
// resource tracking, and default morale levels.

u16 * __stdcall16far Colony_Object_ctor_init_314c(void *this_ptr,void *arg2)
{
  astruct_285 *uVar5;
  int value;
  int iStack_c;
  
  value = (int)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_285 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar5->field2_0x2 = 0x1008;
  uVar5->field367_0x170 = 0x0;
  uVar5->field410_0x1a4 = arg2;
  uVar5->field411_0x1a8 = 0x5;
  uVar5->field412_0x1aa = 0x0;
  uVar5->field413_0x1ae = 0x10;
  *(char **)this_ptr = (char *)s_G1_1050_3af2;
  uVar5->field2_0x2 = 0x1030;
  memset_far(&uVar5->field_0x4,value,0x0);
  memset_far(&uVar5->field_0x18c,value,0x0);
  memset_far(&uVar5->field_0x174,value,0x0);
  memset_far(&uVar5->field_0x180,value,0x0);
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if ((int)g_ModeVersion_13AE < 0x2)
  {
    Colony_Initialize_Default_Metrics_Logic_34da(this_ptr);
  }
  else
  {
    uVar5->field370_0x176 = 0x1;
    uVar5->field371_0x178 = 0x2;
    uVar5->field372_0x17a = 0x2;
    uVar5->field373_0x17c = 0x60001;
    for (iStack_c = 0x1; iStack_c < 0x6; iStack_c += 0x1)
    {
      *(undefined2 *)(&uVar5->field_0x180 + iStack_c * 0x2) = 0x64;
    }
  }
  return (u16 *)uVar5;
}



// Setter for a 16-bit colony metric at offset 0x1AE.

void __stdcall16far Colony_Set_Metric_Offset_1AE(void *this_ptr,u16 value)
{
  *(u16 *)((int)this_ptr + 0x1ae) = value;
  return;
}



// Exponentially increases a colony growth or population factor (offset 0x1AA), capped
// by a calculated maximum.

void * __stdcall16far Colony_Double_Growth_Factor_Logic_326a(void *this_ptr)
{
  ulong uVar1;
  uint16_t uVar2;
  astruct_284 *uVar3;
  u16 segment;
  ulong uVar4;
  
  segment = (u16)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_284 *)this_ptr;
  if (*(long *)&uVar3->field426_0x1aa == 0x0)
  {
    (&uVar3->field426_0x1aa)[0x0] = 0x1;
    (&uVar3->field426_0x1aa)[0x1] = 0x0;
  }
  else
  {
    *(long *)&uVar3->field426_0x1aa = *(long *)&uVar3->field426_0x1aa * 0x2;
  }
  uVar4 = Colony_Calculate_Sum_All_Resources_38b8((int)uVar3,segment);
  uVar1 = *(ulong *)&uVar3->field426_0x1aa;
  uVar2 = uVar3->field427_0x1ac;
  if ((long)uVar4 < (long)uVar1)
  {
    uVar1 = uVar4 & 0xffff;
    uVar2 = (uint16_t)(uVar4 >> 0x10);
  }
  uVar3->field426_0x1aa = (uint16_t)uVar1;
  uVar3->field427_0x1ac = uVar2;
  Colony_Distribute_Value_Decrement_across_Group_375a
            (this_ptr,0x0,(uint16_t)uVar1,uVar2);
  return (void *)CONCAT22(uVar3->field427_0x1ac,(void *)uVar3->field426_0x1aa);
}



// Resets various colony-wide metrics (morale, multipliers, flags) to their hardcoded
// starting values.

void __stdcall16far Colony_Initialize_Default_Metrics_Logic_34da(void *this_ptr)
{
  astruct_283 *uVar1;
  int value;
  
  value = (int)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_283 *)this_ptr;
  uVar1->field374_0x176 = 0x1;
  uVar1->field375_0x178 = 0x1;
  uVar1->field376_0x17a = 0x1;
  uVar1->field377_0x17c = 0x1;
  uVar1->field378_0x17e = 0x4;
  uVar1->field381_0x182 = 0x32;
  uVar1->field382_0x184 = 0xa;
  uVar1->field383_0x186 = 0xa;
  uVar1->field384_0x188 = 0xa;
  uVar1->field385_0x18a = 0x4b;
  memset_far(uVar1 + 0x1,value,0x0);
  return;
}



// Sets the total population value (or a related 32-bit metric) at offset 4 of the
// colony structure.

void __stdcall16far Colony_Set_Population_Total_Logic_3534(u32 this_ptr,u32 value)
{
  *(u32 *)((int)this_ptr + 0x4) = value;
  return;
}



// Adds a 32-bit value to the colony's total population or primary resource counter
// (offset 4).

void __stdcall16far Colony_Resource_Add_to_Total_3548(u32 this_ptr,long amount)
{
  long *plVar1;
  
  plVar1 = (long *)((int)this_ptr + 0x4);
  *plVar1 = *plVar1 + amount;
  return;
}



// Bulk adds values from a provided source array (param_2) to the colony's resource
// tracking array (offset 4). Processes all 91 (0x5B) elements.

void __stdcall16far Colony_Resource_Batch_Add_355c(u32 this_ptr,u32 src_array)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  do
  {
    iVar1 = uStack_4 * 0x4;
    uVar2 = (undefined2)(this_ptr >> 0x10);
    *(long *)((int)this_ptr + iVar1 + 0x4) =
         *(long *)(iVar1 + (int)src_array) + *(long *)((int)this_ptr + 0x4 + iVar1);
    uStack_4 += 0x1;
  } while (uStack_4 < 0x5b);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a large-scale population departure or loss event. Allocates a temporary
// buffer to track removed counts per category, then randomly decrements population from
// categories 3 and 4 until the target (param_2) is reached. Triggers sound and resets
// metrics.

uint * __stdcall16far
Colony_Process_Population_Departure_Logic_35a4(void *this_ptr,long amount)
{
  uint *puVar1;
  uint uVar2;
  undefined *heap_ctx;
  uint *puVar3;
  int index;
  undefined *in_DX;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u32 uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_c [0x2];
  undefined1 local_a [0x2];
  undefined1 local_8 [0x2];
  uint *puStack_6;
  undefined *puStack_4;
  
  Simulator_Log_Debug_Message_to_File_840a(0x516a,0x1050,amount);
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  puVar3 = alloc_with_hooks(0x16c,0x1,heap_ctx);
  _puStack_6 = (uint *)CONCAT22(in_DX,puVar3);
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_c),
             (undefined1 *)CONCAT22(unaff_SS,local_a),0x3);
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_8),
             (undefined1 *)CONCAT22(unaff_SS,local_c),0x4);
  do
  {
    if (amount < 0x1) break;
    index = random_int_range((int)_local_a,(int)((ulong)_local_a >> 0x10));
    uVar5 = Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                      (this_ptr,(long *)CONCAT22(unaff_SS,&amount),index);
    uVar4 = (undefined2)((ulong)_puStack_6 >> 0x10);
    puVar1 = (uint *)_puStack_6 + index * 0x2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar5;
    puVar1 = (uint *)_puStack_6 + index * 0x2 + 0x1;
    *puVar1 = *puVar1 + (int)(uVar5 >> 0x10) + (uint)CARRY2(uVar2,(uint)uVar5);
    lVar6 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x3);
    lVar7 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x4);
  } while ((int)((ulong)lVar6 >> 0x10) + (int)((ulong)lVar7 >> 0x10) +
           (uint)CARRY2((uint)lVar6,(uint)lVar7) != 0x0 ||
           (uint)lVar6 + (uint)lVar7 != 0x0);
  memset_far((void *)((int)(void *)this_ptr + 0x18c),(int)((ulong)this_ptr >> 0x10),0x0)
  ;
  return puStack_6;
}



// Decrements a total value from a specific category group (param_2). Either scans the
// entire array or uses 3948 to find the group's range and evenly distributes the loss.
// Triggers resource change events on completion.

void __stdcall16far
Colony_Distribute_Value_Decrement_across_Group_375a
          (astruct_282 *param_1,int param_2,long param_3)
{
  int iVar1;
  int iVar2;
  long lVar3;
  void *lVar8;
  astruct_282 *uVar9;
  int iVar4;
  int value;
  undefined2 unaff_SS;
  int iStack_14;
  undefined4 uStack_12;
  int local_6;
  int local_4;
  
  uVar9 = (astruct_282 *)param_1;
  value = (int)((ulong)param_1 >> 0x10);
  if (param_2 == 0x0)
  {
    local_4 = 0x5a;
    while ((-0x1 < local_4 &&
           (Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                      (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),local_4),
           param_3 != 0x0)))
    {
      local_4 += -0x1;
    }
  }
  else
  {
    Colony_Get_Resource_Group_Array_Range_3948
              (param_1,(int *)CONCAT22(unaff_SS,&local_4),
               (int *)CONCAT22(unaff_SS,&local_6),param_2);
    iVar2 = (local_4 - local_6) + 0x1;
    lVar3 = param_3 / (long)iVar2;
    lVar8 = (void *)(lVar3 * iVar2);
    uStack_12 = CONCAT22(((int)((ulong)param_3 >> 0x10) - (int)((ulong)lVar8 >> 0x10)) -
                         (uint)((uint)param_3 < (uint)lVar8),(uint)param_3 - (uint)lVar8
                        );
    for (iStack_14 = local_6; iStack_14 <= local_4; iStack_14 += 0x1)
    {
      iVar4 = iStack_14 * 0x4;
      *(long *)(&uVar9->field_0x4 + iVar4) =
           *(long *)(&uVar9->field_0x4 + iVar4) - lVar3;
      iVar2 = *(int *)(&uVar9->field_0x6 + iVar4);
      if (uStack_12._2_2_ != 0x0 || (int)uStack_12 != 0x0)
      {
        iVar1 = *(int *)(&uVar9->field_0x4 + iVar4);
        *(int *)(&uVar9->field_0x4 + iVar4) = iVar1 + -0x1;
        *(uint *)(&uVar9->field_0x6 + iVar4) = iVar2 - (uint)(iVar1 == 0x0);
        uStack_12 += -0x1;
      }
      if (*(int *)(&uVar9->field_0x6 + iStack_14 * 0x4) < 0x0)
      {
        *(undefined4 *)(&uVar9->field_0x4 + iStack_14 * 0x4) = 0x0;
      }
    }
  }
  memset_far(uVar9 + 0x1,value,0x0);
  return;
}



// Shifts all resource/population values one slot to the right in the internal array,
// effectively clearing the first slot (offset 4).

void __stdcall16far Colony_Resource_Shift_Left_Logic_387c(void *this_ptr)
{
  u16 uStack_4;
  
  uStack_4 = 0x5a;
  do
  {
    *(undefined4 *)(uStack_4 * 0x4 + (int)this_ptr + 0x4) =
         *(undefined4 *)(uStack_4 * 0x4 + (int)this_ptr);
    uStack_4 -= 0x1;
  } while (0x0 < (int)uStack_4);
  *(undefined4 *)((int)this_ptr + 0x4) = 0x0;
  return;
}



// Returns the aggregate sum of all 91 elements in the colony's primary resource
// tracking array.

long __stdcall16far Colony_Calculate_Sum_All_Resources_38b8(int offset,u16 segment)
{
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uStack_8 = 0x0;
  do
  {
    uStack_6 += *(long *)(offset + 0x4 + uStack_8 * 0x4);
    uStack_8 += 0x1;
  } while (uStack_8 < 0x5b);
  return uStack_6;
}



// Calculates the sum of resource values for a specific category group (param_2), using
// 3948 to determine the relevant array range.

long __stdcall16far
Colony_Calculate_Sum_Resource_Group_38f2(void *this_ptr,int group_id)
{
  undefined2 unaff_SS;
  int iStack_c;
  int local_a;
  int local_8;
  long lStack_6;
  
  lStack_6 = 0x0;
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(int *)CONCAT22(unaff_SS,&local_a),
             (int *)CONCAT22(unaff_SS,&local_8),group_id);
  for (iStack_c = local_8; iStack_c <= local_a; iStack_c += 0x1)
  {
    lStack_6 += *(long *)((int)(void *)this_ptr + iStack_c * 0x4 + 0x4);
  }
  return lStack_6;
}
