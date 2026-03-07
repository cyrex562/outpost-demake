/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 14/56
 * Original lines (combined): 41173-42744
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a generic category label string (e.g., 'Planet', 'Ship', 'Facility') based
// on the entity's internal type identifier. Uses resource strings 0x597-0x599.

char * __stdcall16far Entity_Get_Category_Label_Logic(char *dest,long entity_ref)
{
  astruct_484 *uVar1;
  void *pvVar1;
  undefined2 in_stack_00000006;
  undefined2 uVar2;
  
  dest[0x13c] = '\0';
  pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  switch(*(undefined2 *)((int)(void *)pvVar1 + 0x12))
  {
  case 0x1:
  case 0x2:
  case 0x4:
  case 0x7:
  case 0x9:
    uVar2 = 0x598;
    break;
  case 0x3:
  case 0x5:
    uVar2 = 0x597;
    break;
  case 0x6:
    uVar2 = 0x599;
    break;
  case 0x8:
    uVar2 = 0x5f3;
    break;
  default:
    goto switchD_1010_de53_default;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(dest + 0x13c,0x3ff)
             ,CONCAT22(uVar2,in_stack_00000006));
switchD_1010_de53_default:
  return dest + 0x13c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a status-related string (e.g., 'Active', 'Disabled') for an entity based on
// a state check from the global simulator context.

char * __stdcall16far Entity_Get_Status_Label_Logic(char *dest,long entity_ref)
{
  u16 uVar1;
  astruct_483 *uVar2;
  undefined2 in_stack_00000006;
  undefined2 uVar3;
  
  dest[0x13c] = '\0';
  uVar1 = UI_Component_Get_Special_State_Value_809c((void *)entity_ref);
  if (uVar1 == 0x0)
  {
    uVar3 = 0x531;
  }
  else
  {
    uVar3 = 0x5f4;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(dest + 0x13c,0x3ff)
             ,CONCAT22(uVar3,in_stack_00000006));
  return dest + 0x13c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates a dynamically allocated array with 16-bit identifiers for active research
// projects or components. It filters the global simulator state (indices 1-66) based on
// the provided category code.

void __stdcall16far
Simulator_Populate_Active_ID_List_Logic
          (undefined4 param_1,uint param_2,int *param_3,int *param_4,void *param_5)
{
  int iVar1;
  int *array_base;
  int iVar2;
  void *pvVar3;
  u16 uVar4;
  u16 uVar5;
  int *piVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  void *entity_ref;
  long lVar8;
  int arg1;
  int arg2;
  int iStack_22;
  int iStack_1e;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  
  param_4[0x0] = 0x0;
  param_4[0x1] = 0x0;
  *param_3 = 0x0;
  entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(param_5);
  iVar2 = *(int *)((int)entity_ref + 0x12);
  arg1 = (int)param_1;
  arg2 = (int)((ulong)param_1 >> 0x10);
  iVar1 = UI_Get_U16_at_Offset_C_Logic(arg1,arg2,(long)entity_ref);
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  uVar4 = (u16)((ulong)lVar8 >> 0x10);
  piVar6 = (int *)param_4;
  uVar7 = (undefined2)((ulong)param_4 >> 0x10);
  if (param_2 == 0x13)
  {
    iStack_22 = 0x0;
    while (iStack_22 += 0x1, iStack_22 < 0x43)
    {
      iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
      if (iVar2 != 0x0)
      {
        *param_3 = *param_3 + 0x1;
      }
    }
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,*param_3 * 0x2));
    *param_4 = (int)pvVar3;
    piVar6[0x1] = uVar4;
    if (uVar4 != 0x0 || *param_4 != 0x0)
    {
      iStack_22 = 0x0;
      for (iStack_1e = 0x0; iStack_1e < *param_3; iStack_1e += 0x1)
      {
        do
        {
          iStack_22 += 0x1;
          if (0x42 < iStack_22) goto LAB_1010_e0d4;
          iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
        } while (iVar2 == 0x0);
        *(int *)(iStack_1e * 0x2 + (int)*(undefined4 *)param_4) = iStack_22;
LAB_1010_e0d4:
      }
    }
  }
  else if (param_2 < 0x14)
  {
    if ((char)param_2 == '\x06')
    {
      if (((iVar2 == 0x5) || (iVar2 == 0x6)) || (iVar2 == 0x8))
      {
        array_base = (int *)((int)lVar8 + 0x11e);
        if (iVar1 == 0xf)
        {
          iStack_14 = 0xf;
          iStack_16 = 0x13;
        }
        else if (iVar1 == 0xe)
        {
          iStack_16 = 0x4;
          iStack_14 = 0x1;
        }
        else
        {
          iStack_16 = 0xe;
          iStack_14 = 0x1;
        }
        uVar5 = uVar4;
        iVar2 = Array_Count_NonZero_Entries_in_Range_Logic
                          (arg1,arg2,iStack_16,iStack_14,array_base,uVar4);
        *param_3 = iVar2 + 0x1;
        if (iVar2 + 0x1 != 0x0)
        {
          pvVar3 = allocate_memory(CONCAT22(unaff_SI,*param_3 * 0x2));
          *param_4 = (int)pvVar3;
          piVar6[0x1] = uVar5;
          iStack_18 = 0x0;
          for (iStack_1a = iStack_14; iStack_1a <= iStack_16; iStack_1a += 0x1)
          {
            if (array_base[iStack_1a] != 0x0)
            {
              *(int *)((int)*(undefined4 *)param_4 + iStack_18 * 0x2) = iStack_1a;
              iStack_18 += 0x1;
            }
          }
          *(undefined2 *)((int)*(undefined4 *)param_4 + iStack_18 * 0x2) = 0x14;
          return;
        }
      }
    }
    else if (((char)param_2 == '\a') &&
            (((iVar2 == 0x5 || (iVar2 == 0x6)) || (iVar2 == 0x8))))
    {
      iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
      iVar1 = -(uint)(iVar2 == 0x0) + 0x10;
      *param_3 = iVar1;
      pvVar3 = allocate_memory(CONCAT22(unaff_SI,iVar1 * 0x2));
      *param_4 = (int)pvVar3;
      piVar6[0x1] = uVar4;
      if (uVar4 == 0x0 && *param_4 == 0x0)
      {
        *param_3 = 0x0;
        return;
      }
      for (iStack_1a = 0x0; iStack_1a < (int)(-(uint)(iVar2 == 0x0) + 0xf);
          iStack_1a += 0x1)
      {
        *(int *)(iStack_1a * 0x2 + (int)*(undefined4 *)param_4) = iStack_1a + 0x1;
      }
      *(undefined2 *)(iStack_1a * 0x2 + (int)*(undefined4 *)param_4) = 0x10;
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through an entity collection (offset 0xC) and calculates the sum of a
// specific 32-bit property (index 0x23) for all items. Returns the total.

long __stdcall16far UI_Entity_Calculate_Total_Property_Value_Logic(long context)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  u8 *packed_id;
  undefined2 uVar3;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  ulong uStack_12;
  ulong uStack_e;
  uint uStack_6;
  int iStack_4;
  
  uStack_6 = 0x0;
  iStack_4 = 0x0;
  puVar5 = (undefined4 *)UI_Get_Entity_Property_by_Array_Index_Logic(context,0xc);
  uVar3 = (undefined2)((ulong)puVar5 >> 0x10);
  puVar2 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x10);
  puVar7 = puVar2;
  uVar8 = uVar3;
  uStack_e = (*(code *)*puVar1)();
  for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*puVar5 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)(unaff_CS,puVar2,uVar3,(int)uStack_12,
                                         (int)(uStack_12 >> 0x10));
    pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    unaff_CS = 0x1030;
    pvVar6 = UI_Component_Find_Item_in_List_22_Logic_7c28(pvVar6,0x23);
    bVar4 = CARRY2(uStack_6,(uint)(void *)pvVar6);
    uStack_6 += (int)(void *)pvVar6;
    iStack_4 = iStack_4 + (int)((ulong)pvVar6 >> 0x10) + (uint)bVar4;
  }
  if (puVar5 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar5)
              (unaff_CS,puVar2,uVar3,0x1,puVar7,uVar8);
  }
  return CONCAT22(iStack_4,uStack_6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specific sub-category or class name for an entity (e.g., identifying a
// specific ship model or component type) by querying secondary resource trackers.

char * __stdcall16far UI_Entity_Get_SubCategory_Name_Logic(char *dest,long entity_ref)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  astruct_482 *uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined2 in_stack_00000006;
  
  dest[0x13c] = '\0';
  uVar7 = (undefined2)((ulong)entity_ref >> 0x10);
  iVar1 = *(int *)((int)entity_ref + 0x20);
  iVar5 = *(int *)((int)entity_ref + 0xc);
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
  if (iVar4 == 0x0)
  {
    iVar5 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
    if (iVar5 == 0x0) goto LAB_1010_e675;
    puVar8 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x31);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    puVar8 = (undefined4 *)
             (*(code *)*puVar2)(0x1008,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10)
                                ,iVar1,iVar1 >> 0xf);
  }
  else
  {
    puVar8 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x41);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    puVar8 = (undefined4 *)
             (*(code *)*puVar2)(0x1008,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10)
                                ,iVar1,iVar1 >> 0xf);
  }
  if (puVar8 == NULL)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),
               CONCAT22(dest + 0x13c,0x3ff),CONCAT22(0x531,in_stack_00000006));
  }
  else
  {
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    pcVar3 = (char *)(*(code *)*puVar2)(0x1008,puVar8);
    strcpy_optimized((char *)CONCAT22(in_stack_00000006,dest + 0x13c),pcVar3);
  }
LAB_1010_e675:
  return dest + 0x13c;
}



// Retrieves two related 16-bit values from an entity and stores them in provided output
// pointers.

void __stdcall16far
UI_Entity_Get_Two_Related_Values_Logic(int *out1,int *out2,long entity_ref)
{
  u16 uVar1;
  u16 *in_stack_0000000c;
  void *in_stack_00000010;
  
  uVar1 = UI_Component_Get_Entity_Resource_C_Output_7064(in_stack_00000010);
  *in_stack_0000000c = uVar1;
  uVar1 = UI_Component_Get_Entity_Resource_D_Output_70ac(in_stack_00000010);
  *(u16 *)entity_ref = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Traverses the entity hierarchy to find the parent or associated high-level object
// (e.g., resolving a ship to its fleet or a facility to its base).

long __stdcall16far Entity_Resolve_Parent_Object_Logic(long entity_ref)
{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *in_stack_00000008;
  
  pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
  iVar2 = *(int *)((int)(void *)pvVar3 + 0xc);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
  if (iVar1 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
    if (iVar2 == 0x0)
    {
      return (long)in_stack_00000008;
    }
    pvVar3 = UI_Build_Item_Get_Neighbor_Entity_Alternative_4faa(pvVar3);
  }
  else
  {
    pvVar3 = UI_Build_Item_Get_Neighbor_Entity_121e(pvVar3);
  }
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar3);
  return (long)pvVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the name string of the currently active entity from the global resource
// manager.

char * __stdcall16far Resource_Manager_Get_Current_Entity_Name_Logic(void)
{
  long lVar1;
  void *this_ptr;
  char *pcVar2;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)lVar1 + 0x24));
  pcVar2 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  return (char *)pcVar2;
}



void Simulator_Event_Dispatch_Table_dtor_Wrapper_e99a
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Simulator_Event_Dispatch_Table_dtor_Scalar_Deleting_e9a6
            ((void *)(param_2 + -0xa),param_3,param_4);
  return;
}



void * __stdcall16far
Simulator_Event_Dispatch_Table_dtor_Scalar_Deleting_e9a6
          (void *param_1,u16 param_2,byte param_3)
{
  Simulator_Event_Dispatch_Table_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for a specialized simulator object (vtable 0x558). It initializes an
// 8-slot array of 32-bit values with default constants and then applies randomized
// jitter to each entry.

long __stdcall16far Simulator_Object_Subclass_ctor_0558(long this_ref)
{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int in_DX;
  undefined2 unaff_SI;
  int iVar6;
  long lVar7;
  int iStack_4;
  
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined2 *)((int)(void *)this_ref + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1008;
  *(undefined2 *)((int)(void *)this_ref + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1008;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x12) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x16) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x1a) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x1e) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x20) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x24) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x28) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x2c) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x30) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x32) = 0x0;
  *(undefined2 *)this_ref = 0x558;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  *(undefined2 *)((int)(void *)this_ref + 0xa) = 0x568;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1018;
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x4));
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  }
  else
  {
    lVar7 = Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(in_DX,pvVar3));
    *(undefined2 *)((int)(void *)this_ref + 0xe) = (int)lVar7;
    *(undefined2 *)((int)(void *)this_ref + 0x10) = (int)((ulong)lVar7 >> 0x10);
  }
  memset_far((void *)((int)(void *)this_ref + 0x34),this_ref._2_2_,0x0);
  *(undefined4 *)((int)(void *)this_ref + 0x38) = 0xfa;
  *(undefined4 *)((int)(void *)this_ref + 0x3c) = 0x15e;
  *(undefined4 *)((int)(void *)this_ref + 0x40) = 0x1c2;
  *(undefined2 *)((int)(void *)this_ref + 0x44) = 0x1c2;
  *(undefined4 *)((int)(void *)this_ref + 0x46) = 0x2260000;
  *(undefined4 *)((int)(void *)this_ref + 0x4a) = 0x28a0000;
  *(undefined4 *)((int)(void *)this_ref + 0x4e) = 0x730000;
  *(undefined4 *)((int)(void *)this_ref + 0x52) = 0x960000;
  *(undefined2 *)((int)(void *)this_ref + 0x56) = 0x0;
  for (iStack_4 = 0x1; iStack_4 < 0x9; iStack_4 += 0x1)
  {
    uVar4 = random_int_range(0x0,0x1d);
    uVar5 = random_int_range(0x1,0x2);
    if ((uVar5 & 0x1) != 0x0)
    {
      uVar4 = -uVar4;
    }
    iVar6 = iStack_4 * 0x4;
    puVar1 = (uint *)((int)(void *)this_ref + iVar6 + 0x34);
    uVar5 = *puVar1;
    iVar2 = *(int *)((int)(void *)this_ref + iVar6 + 0x36);
    *(int *)((int)(void *)this_ref + iVar6 + 0x34) = uVar4 + *puVar1;
    *(int *)((int)(void *)this_ref + iVar6 + 0x36) =
         ((int)uVar4 >> 0xf) + iVar2 + (uint)CARRY2(uVar4,uVar5);
  }
  return this_ref;
}



// Setter for 32-bit values in the internal array at offset 0x34 of simulator object
// 0x558.

void __stdcall16far
Simulator_Object_Set_Indexed_Value_Logic_0558(long this_ref,int low,int high,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(int *)((int)this_ref + index * 0x4 + 0x34) = low;
  *(int *)((int)this_ref + index * 0x4 + 0x36) = high;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a far pointer from offset 0x10 of an entity managed by the global 0x65E2
// tracking structure.

long __stdcall16far UI_Get_Entity_FarPtr_at_Offset_10_Logic(long entity_id)
{
  undefined2 uVar1;
  void *pvVar2;
  u8 *in_stack_00000008;
  
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,in_stack_00000008);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x12),
                  *(undefined2 *)((int)(void *)pvVar2 + 0x10));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a far pointer from offset 0x10 of an entity managed by the global 0x65E2
// tracking structure. Identical to `UI_Get_Entity_FarPtr_at_Offset_10_Logic`.

long __stdcall16far UI_Get_Entity_FarPtr_at_Offset_10_Logic_Duplicate(long entity_id)
{
  undefined2 uVar1;
  void *pvVar2;
  u8 *in_stack_00000008;
  
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,in_stack_00000008);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x12),
                  *(undefined2 *)((int)(void *)pvVar2 + 0x10));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles UI event 0x14. It notifies listeners and then performs a complex update on
// global resource 0x5748 using data from offset 0x20.

void __stdcall16far UI_Component_On_Event_14_Update_Global_5748_Logic(long context)
{
  undefined2 unaff_SS;
  int notify_type;
  undefined1 local_10e [0x10c];
  
  notify_type = (int)((ulong)context >> 0x10);
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  Simulator_Command_Select_ctor_init_532e
            ((undefined1 *)CONCAT22(unaff_SS,local_10e),
             (void *)*(undefined4 *)((int)(void *)context + 0x20));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_10e));
  return;
}



// WARNING: Unable to use type for symbol uVar1
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves an entity by ID. If the entity is a fleet (magic 0x8000001), it triggers an
// update via `UI_Set_Entity_at_Offset_138_Logic`.

void __stdcall16far
UI_Dispatch_Fleet_Update_by_Entity_ID_Logic(long context,long arg2,long entity_id)
{
  int iVar1;
  u16 uVar3;
  u8 *puVar2;
  void *pvVar3;
  undefined4 uVar1;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(void *)arg2,(void *)entity_id);
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar2);
  uVar1 = *(undefined4 *)((int)(void *)pvVar3 + 0x2e);
  uVar3 = (u16)((ulong)uVar1 >> 0x10);
  iVar1 = (int)uVar1;
  if (*(long *)(iVar1 + 0x200) == 0x8000001)
  {
    UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic
              (context,*(long *)(iVar1 + 0x4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves resource-linked data for an entity using the ID stored at offset 0x16.

long __stdcall16far UI_Get_Entity_Resource_Data_at_Offset_16_Logic(long context)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)context + 0x16));
  return (long)pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Creates and populates a Data History object (at offset 0x12) using entries from a
// resource collection. It iterates through the resource, calculates history points
// (likely for a graph), and appends them to the object.

long __stdcall16far
UI_Component_Populate_Data_History_from_Resource_Logic(long context,long entity_ref)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *this;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *this_ptr;
  long lVar10;
  undefined4 *puVar11;
  undefined2 in_stack_0000ffce;
  int iStack_24;
  undefined4 uStack_1c;
  undefined1 local_18 [0x4];
  int iStack_14;
  undefined2 uStack_c;
  undefined2 uStack_a;
  int iStack_8;
  void *pvStack_6;
  undefined2 uStack_4;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)entity_ref
                       );
  uStack_4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvStack_6 = (void *)this_ptr;
  iStack_8 = UI_Production_Item_Get_ID_Logic_5b00(this_ptr);
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iStack_8);
  uStack_a = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_c = (undefined2)lVar10;
  zero_init_12bytes_struct(local_18);
  UI_Main_View_Controller_Calculate_Clamped_Viewport_Bounds_Logic
            (CONCAT22(uStack_a,uStack_c),(long)CONCAT22(unaff_SS,local_18));
  if (iStack_14 == 0x0)
  {
    puVar11 = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                        (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_18),
                         entity_ref);
    uVar5 = (uint)((ulong)puVar11 >> 0x10);
    puVar2 = (undefined4 *)puVar11;
  }
  else
  {
    puVar11 = (undefined4 *)
              Simulator_Map_Batch_Process_Cells_in_Rect_62e4
                        (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_18),
                         entity_ref);
    uVar5 = (uint)((ulong)puVar11 >> 0x10);
    puVar2 = (undefined4 *)puVar11;
  }
  uStack_1c = (undefined4 *)CONCAT22(uVar5,puVar2);
  if (uVar5 == 0x0 && puVar2 == NULL)
  {
    return 0x0;
  }
  uVar6 = uVar5;
  UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate(context);
  uVar9 = 0x1000;
  this = allocate_memory(CONCAT22(in_stack_0000ffce,0x1c));
  uVar6 |= (uint)this;
  iVar7 = (int)context;
  uVar8 = (undefined2)((ulong)context >> 0x10);
  if (uVar6 == 0x0)
  {
    *(undefined4 *)(iVar7 + 0x12) = 0x0;
  }
  else
  {
    uVar9 = 0x1008;
    pvVar3 = Data_History_Object_ctor(this,0x6,0x24);
    *(undefined2 *)(iVar7 + 0x12) = pvVar3;
    *(uint *)(iVar7 + 0x14) = uVar6;
  }
  puVar1 = (undefined2 *)((int)*uStack_1c + 0x10);
  iVar4 = (*(code *)*puVar1)(uVar9,puVar2,uVar5,this);
  for (iStack_24 = 0x0; iStack_24 < iVar4; iStack_24 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*uStack_1c + 0x4);
    lVar10 = (*(code *)*puVar1)();
    if (lVar10 != 0x0)
    {
      lVar10 = Gameplay_Object_Factory_Complex_Resolver
                         (*(long *)(iVar7 + 0xe),
                          CONCAT22(iStack_24 % 0x6,iStack_24 / 0x6));
      Data_History_Object_Append_Point
                ((void *)(void *)*(undefined4 *)(iVar7 + 0x12),lVar10);
    }
  }
  return CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(undefined2 *)(iVar7 + 0x12));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Prepares and submits a command to the global simulator resource 0x5748. It classifies
// the entity type (0x73-0x78) and notifies listeners (type 6) upon success.

void __stdcall16far
UI_Component_Submit_Simulator_Command_Logic
          (void *param_1,undefined2 param_2,undefined4 param_3,int param_4,
          undefined4 param_5)
{
  undefined4 uVar1;
  undefined1 *puVar2;
  int notify_type;
  undefined2 unaff_SS;
  undefined1 local_128 [0x124];
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  if (((0x72 < param_4) && (!SBORROW2(param_4,0x73))) &&
     ((param_4 == 0x75 || param_4 + -0x74 < 0x1 ||
      ((0x0 < param_4 + -0x76 && (param_4 + -0x77 < 0x2))))))
  {
    uStack_4 = 0x1;
  }
  notify_type = (int)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x24);
  Simulator_Command_PutBldg_ctor_init_933c
            (local_128,unaff_SS,param_2,uStack_4,param_4,param_3,(int)uVar1,
             (int)((ulong)uVar1 >> 0x10),(int)param_5,(int)((ulong)param_5 >> 0x10));
  puVar2 = local_128;
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,puVar2));
  if (puVar2 != NULL)
  {
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)param_1,notify_type);
  }
  return;
}



void * __stdcall16far
Simulator_Object_Subclass_dtor_Scalar_Deleting_0532(void *param_1,byte param_2)
{
  Simulator_Object_Subclass_dtor_0558((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}
