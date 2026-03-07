/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 35/56
 * Original lines (combined): 86062-90065
 * Boundaries: top-level declarations/definitions only
 */




// The primary routine for resolving a 4-byte packed ID into a memory pointer for a
// simulator entity. Handles null, special 0xFF (global), and list-indexed lookups.

void * __stdcall16far
Simulator_Get_Entity_Object_from_PackedID_e1ec(void *this_ptr,u8 *packed_id)
{
  void *pvVar1;
  undefined2 in_stack_0000000a;
  
  if (in_stack_0000000a._1_1_ == 0x0)
  {
    return NULL;
  }
  if (in_stack_0000000a._1_1_ == 0xff)
  {
    return (void *)CONCAT22(PTR_DAT_1050_0000_1050_5168,PTR_DAT_1050_0000_1050_5166);
  }
  pvVar1 = UI_Managed_List_Get_Item_at_Index_1312
                     ((void *)*(undefined4 *)
                               ((int)this_ptr + 0xa +
                               (uint)in_stack_0000000a._1_1_ * 0x4),
                      (ulong)CONCAT22(in_stack_0000000a,packed_id) & 0xffffff);
  return pvVar1;
}



// Increments the global simulator tick counter. Every 100 ticks, posts message 0x41 to
// the main UI. Conditionally triggers a resource manager update.

void __stdcall16far
Simulator_Main_Tick_Counter_Update_e242(void *this_ptr,int trigger_update)
{
  undefined2 unaff_BP;
  
  if (*(ulong *)this_ptr % 0x64 == 0x0)
  {
    SendMessage16(0x0,0x0,0x0,(long)CONCAT22(unaff_BP,g_ParentHWND));
  }
  *(long *)this_ptr = *(long *)this_ptr + 0x1;
  if (trigger_update != 0x0)
  {
    Simulator_Trigger_Global_Resource_Update_e28a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a per-turn resource update (virtual call at offset +4) for the global
// planetary resource manager (Resource ID 0x2F).

void __stdcall16far Simulator_Trigger_Global_Resource_Update_e28a(void)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  long lVar4;
  
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  puVar2 = (undefined4 *)((int)lVar4 + 0xa);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x4);
  (*(code *)*puVar1)(0x1010,puVar2,uVar3,0x5);
  return;
}



// Invokes a virtual initialization function from the simulator's vtable array (offset
// 0x2E) based on a stack-passed index.

void __stdcall16far Simulator_Call_Virtual_Initializer_e2ac(u32 this_ptr)
{
  byte in_stack_00000011;
  undefined4 uStack_6;
  
  uStack_6 = (code *)*(undefined4 *)
                      ((int)this_ptr + (uint)in_stack_00000011 * 0x4 + 0x2e);
  (*(code *)uStack_6)();
  return;
}



// Invokes a virtual function for a specific simulator entity type. Handles 0xFF as a
// special global case.

void * __stdcall16far Simulator_Invoke_Virtual_Function_by_TypeID_e2e0(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  uint in_stack_00000010;
  undefined2 auStack_a [0x3];
  uint uStack_4;
  
  uStack_4 = in_stack_00000010 >> 0x8;
  if (uStack_4 == 0xff)
  {
    pvVar3 = (void *)Simulator_Get_Active_Context_Pointer_ebee(param_1);
    return pvVar3;
  }
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1 + 0x2e;
  auStack_a[0x0] = *(undefined2 *)(iVar1 + uStack_4 * 0x4 + 0x2);
  pvVar3 = (void *)(*(code *)*(undefined2 *)(iVar1 + uStack_4 * 0x4))();
  return pvVar3;
}



// A wrapper that retrieves entity data from the simulator map at specific coordinates.
// Equivalent to 1030:627E but with different parameter packing.

void __stdcall16far
Simulator_Get_Entity_at_Coords_Wrapper_e332(u32 this_ptr,u16 arg2,u16 arg3)
{
  if ((arg3._1_1_ != 0x0) && (arg3._1_1_ < 0xa))
  {
    UI_Managed_List_Remove_Item_at_Index_13f6
              ((void *)*(undefined4 *)((int)this_ptr + 0xa + (uint)arg3._1_1_ * 0x4),
               (void *)(CONCAT22(arg3,arg2) & 0xffffff));
  }
  return;
}



// Iterates through entities near a target coordinate and triggers virtual updates
// (offset 0x18) for all except the target itself. Used for localized state
// synchronization.

void __stdcall16far
Simulator_Batch_Process_Entities_in_Proximity_e372
          (void *this_ptr,u8 *packed_id,uint arg3)
{
  void *this_ptr_00;
  void *pvVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvStack_20;
  void *pvStack_10;
  
  if (arg3 >> 0x8 != 0xff)
  {
    this_ptr_00 = (void *)*(undefined4 *)
                           ((int)(void *)this_ptr + (arg3 >> 0x8) * 0x4 + 0xa);
    pvVar1 = (void *)*(ulong *)((int)(void *)this_ptr_00 + 0xa);
    pvStack_10 = (void *)((ulong)CONCAT22(arg3,packed_id) & 0xffffff);
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec(this_ptr,packed_id);
    puVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (this_ptr,(u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar5 + 0x8))
    ;
    for (pvStack_20 = (void *)0x1; pvStack_20 < pvVar1;
        pvStack_20 = (void *)((long)pvStack_20 + 0x1))
    {
      if (pvStack_20 != pvStack_10)
      {
        pvVar5 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_00,(ulong)pvStack_20);
        iVar4 = (int)((ulong)pvVar5 >> 0x10);
        if (iVar4 != 0x0 || (void *)pvVar5 != NULL)
        {
          uVar2 = *(undefined4 *)((int)(void *)pvVar5 + 0x4);
          UI_Managed_List_Remove_Item_at_Index_13f6(this_ptr_00,pvStack_20);
          puVar3 = (undefined2 *)((int)*puVar6 + 0x18);
          (*(code *)*puVar3)(0x1030,(undefined4 *)puVar6,(int)((ulong)puVar6 >> 0x10),
                             uVar2);
        }
      }
    }
  }
  return;
}



// Validates neighbors of a construction manager and removes those that don't match the
// target entity ID (param_2). Cleans up simulator map cells and notifies the
// construction manager.

void __stdcall16far
Simulator_Validate_and_Cleanup_Neighbor_Entities_e44a(void *this_ptr,long entity_id)
{
  void *this_ptr_00;
  void *this_ptr_01;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  void *pvStack_12;
  
  Simulator_Batch_Process_Entities_in_Proximity_e372
            (this_ptr,(u8 *)entity_id,(uint)((ulong)entity_id >> 0x10));
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  this_ptr_00 = (void *)*(undefined4 *)((int)this_ptr + 0x26);
  this_ptr_01 = (void *)*(undefined4 *)((int)this_ptr + 0x1e);
  pvVar1 = (void *)*(ulong *)((int)this_ptr_01 + 0xa);
  for (pvStack_12 = (void *)0x1; pvStack_12 < pvVar1;
      pvStack_12 = (void *)((long)pvStack_12 + 0x1))
  {
    pvVar5 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_01,(ulong)pvStack_12);
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    iVar2 = (int)pvVar5;
    if ((iVar3 != 0x0 || iVar2 != 0x0) && (*(long *)(iVar2 + 0x8) != entity_id))
    {
      UI_Managed_List_Remove_Item_at_Index_13f6
                (this_ptr_00,
                 (void *)(CONCAT22(*(undefined2 *)(iVar2 + 0x18),
                                   *(undefined2 *)(iVar2 + 0x16)) & 0xffffff));
      UI_Managed_List_Remove_Item_at_Index_13f6(this_ptr_01,pvStack_12);
    }
  }
  return;
}



// Retrieves the next valid entity from the world iterator. Supports both forward and
// reverse scanning of the simulator's entity lists. Returns a null far pointer when the
// list is exhausted.

void * __stdcall16far Simulator_World_Iterator_Get_Next_Entity_e4ec(void *this_ptr)
{
  ulong index;
  astruct_309 *uVar2;
  undefined2 uVar1;
  void *pvVar2;
  void *pvStack_6;
  int iStack_4;
  
  pvStack_6 = NULL;
  iStack_4 = 0x0;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_309 *)this_ptr;
  if (uVar2->field7_0x10 == 0x0)
  {
    do
    {
      if (uVar2->field5_0x8 == 0x0) break;
      uVar2->field5_0x8 = uVar2->field5_0x8 - 0x1;
      pvVar2 = UI_Managed_List_Get_Item_at_Index_1312
                         (uVar2->field4_0x4,uVar2->field5_0x8);
      iStack_4 = (int)((ulong)pvVar2 >> 0x10);
      pvStack_6 = (void *)pvVar2;
    } while (iStack_4 == 0x0 && pvStack_6 == NULL);
  }
  else
  {
    do
    {
      if (uVar2->field6_0xc < uVar2->field5_0x8) break;
      index = uVar2->field5_0x8;
      uVar2->field5_0x8 = uVar2->field5_0x8 + 0x1;
      pvVar2 = UI_Managed_List_Get_Item_at_Index_1312(uVar2->field4_0x4,index);
      iStack_4 = (int)((ulong)pvVar2 >> 0x10);
      pvStack_6 = (void *)pvVar2;
    } while (iStack_4 == 0x0 && pvStack_6 == NULL);
  }
  return (void *)CONCAT22(iStack_4,pvStack_6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the active simulator context pointer and ensures memory is allocated for
// it. Returns the global 1050:5166 pointer.

u32 __stdcall16far Simulator_Get_Active_Context_Pointer_ebee(u32 this_ptr)
{
  void *pvVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000ffe6;
  
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x14));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    UI_Global_Window_Manager_ctor_init_1a32((void *)CONCAT22(in_DX,pvVar1));
  }
  pvVar4 = Simulator_Get_Active_Coordinate_Ptr_4574
                     ((void *)*(undefined4 *)((int)this_ptr + 0x52));
  uVar3 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10);
  iVar2 = (int)_PTR_DAT_1050_0000_1050_5166;
  *(undefined2 *)(iVar2 + 0x10) = (int)pvVar4;
  *(undefined2 *)(iVar2 + 0x12) = (int)((ulong)pvVar4 >> 0x10);
  uVar3 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)_PTR_DAT_1050_0000_1050_5166 + 0x6),
                  *(undefined2 *)((int)_PTR_DAT_1050_0000_1050_5166 + 0x4));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates a production-based interaction. Creates a UI Production Item, updates
// its layout, executes a map-based action (6222), and notifies the simulator.

ulong __stdcall16far
Simulator_Process_Production_Interaction_ed2c
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  ulong uVar2;
  void *pvVar3;
  u16 *puVar4;
  u16 *puVar5;
  uint in_DX;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x1e));
  uVar6 = in_DX | (uint)pvVar3;
  if (uVar6 == 0x0)
  {
    puVar4 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar4 = UI_Production_Item_ctor_with_Params_565a
                       ((void *)CONCAT22(in_DX,pvVar3),param_5);
  }
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  puVar5 = puVar4;
  piVar7 = Simulator_Factory_Create_Building_Entry_Logic_4782
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),0x1,0x1,param_3);
  UI_Production_Item_Update_Layout_Logic_5a80
            ((u16 *)CONCAT22(uVar6,puVar4),(u16 *)CONCAT22(piVar7,puVar5));
  uVar2 = *(ulong *)(puVar4 + 0x2);
  Simulator_Map_Execute_Action_at_Coords_6222
            ((int)_p_MapContext_5740,(int)((ulong)_p_MapContext_5740 >> 0x10),0x1,puVar5
             ,piVar7,(uint)uVar2,(int)(uVar2 >> 0x10));
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x16),(u16 *)CONCAT22(uVar6,puVar4),
             (uint)uVar2,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined4 __stdcall16far
UI_Colony_Window_Factory_and_List_Add_edc4
          (undefined4 param_1,undefined2 param_2,void *param_3,void *param_4)
{
  void *pvVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  u32 *puVar4;
  void *pvVar5;
  void *in_stack_0000ffd6;
  undefined2 in_stack_0000ffd8;
  undefined1 local_1a [0x4];
  undefined4 local_16;
  void *local_12;
  undefined2 uStack_10;
  u32 local_e;
  u32 local_a;
  void *local_6;
  
  local_6 = param_3;
  puVar4 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,param_3,(long)param_4,
                      (undefined1 *)CONCAT22(unaff_SS,local_1a));
  iVar2 = (int)((ulong)puVar4 >> 0x10);
  local_e = *puVar4;
  local_a = local_e;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffd6,0x21e));
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    pvVar1 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar5 = UI_Colony_Window_ctor_with_Params_3222
                       ((void *)CONCAT22(iVar2,pvVar1),local_e,param_4);
    uVar3 = (undefined2)((ulong)pvVar5 >> 0x10);
    pvVar1 = (void *)pvVar5;
  }
  _local_12 = (void *)CONCAT22(uVar3,pvVar1);
  local_16 = *(undefined4 *)((int)pvVar1 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x1a),(void *)CONCAT22(uVar3,pvVar1)
             ,(uint)local_16,(void *)CONCAT22(in_stack_0000ffd8,in_stack_0000ffd6));
  return local_16;
}



// Orchestrates a production interaction. Instantiates a UI Build Item, syncs its
// simulator object, and updates the production item's list at offset 0x26.

void * __stdcall16far
Simulator_Process_Production_Event_10b0
          (void *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
          u8 *param_5)
{
  void *entity_id;
  void *item_ptr;
  void *this_ptr;
  void *in_stack_0000ffe6;
  undefined2 uStack_a;
  
  item_ptr = UI_Build_Item_Factory_Create_with_Params_07ac
                       (param_1,CONCAT22(param_3,param_2),param_4,param_5);
  entity_id = (void *)*(undefined4 *)((int)(void *)item_ptr + 0x4);
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       ((void *)CONCAT22(param_2,param_1),(u8 *)param_5);
  if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
  {
    UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a(this_ptr,entity_id);
  }
  uStack_a = (void *)entity_id;
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x26),item_ptr,(uint)uStack_a,
             in_stack_0000ffe6);
  return entity_id;
}



// Batch processes production for an entity. Allocates a specialized production object
// (using 1030:2112) and appends it to the manager's list (offset 0x2A).

void * __stdcall16far Simulator_Process_Entity_Batch_Production_1120(void *this_ptr)
{
  void *pvVar1;
  void *pvVar2;
  u16 *puVar3;
  uint in_DX;
  uint uVar4;
  void *in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x3b2));
  uVar4 = in_DX | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Colony_Production_Manager_ctor_with_Params_2112
                       ((void *)CONCAT22(in_DX,pvVar2),NULL);
  }
  pvVar1 = *(void **)(puVar3 + 0x2);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)this_ptr + 0x2a),(u16 *)CONCAT22(uVar4,puVar3)
             ,(uint)pvVar1,(void *)CONCAT22(in_stack_0000ffe8,in_stack_0000ffe6));
  return pvVar1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_117a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 __stdcall16far
Simulator_Object_List_Find_ID_and_VCall_8_18f0
          (undefined4 param_1,undefined2 param_2,undefined2 param_3)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  ulong local_a;
  ulong local_6;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(long *)(iVar2 + 0xc) != 0x0)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x10);
    local_6 = (*(code *)*puVar1)();
    for (local_a = 0x0; local_a < local_6; local_a += 0x1)
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x4);
      lVar4 = (*(code *)*puVar1)();
      if ((lVar4 == CONCAT22(param_3,param_2)) && (true))
      {
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xc) + 0x8);
        (*(code *)*puVar1)();
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the production item's internal managed list (offset 0xC) by iterating through
// simulator objects and syncing state. Involves virtual calls to specific entity types
// (ID 1).

u16 __stdcall16far
UI_Production_Item_Update_Internal_List_Logic_1be2(astruct_295 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_DX;
  astruct_295 *uVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  void *pvVar6;
  uint uStack_4;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_295 *)param_1;
  if (uVar4->field12_0xc == NULL)
  {
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      uVar4->field12_0xc = NULL;
    }
    else
    {
      pvVar6 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,pvVar3),(void *)0x5,(void *)0x5);
      *(void **)&uVar4->field12_0xc = (void *)pvVar6;
      *(undefined2 *)((int)&uVar4->field12_0xc + 0x2) = (int)((ulong)pvVar6 >> 0x10);
    }
  }
  for (uStack_4 = 0x0; uStack_4 < *uVar4->field13_0x10; uStack_4 += 0x1)
  {
    uVar2 = *(undefined4 *)((uint *)uVar4->field13_0x10 + 0x1);
    pvVar6 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                       (_p_SimulatorWorldContext,0x0,
                        (long)*(int *)((int)uVar2 + uStack_4 * 0x2),0x1000000,
                        (int)*(undefined4 *)&uVar4->field_0x4,
                        (int)((ulong)*(undefined4 *)&uVar4->field_0x4 >> 0x10));
    puVar1 = (undefined2 *)((int)*uVar4->field12_0xc + 0x8);
    (*(code *)*puVar1)(0x1028,uVar4->field12_0xc,(void *)pvVar6,
                       (int)((ulong)pvVar6 >> 0x10),uStack_4,0x0);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a packed entity ID via a virtual call (offset 4) and resolves it into a
// simulator object pointer.

void * __stdcall16far
UI_Component_Get_Simulator_Object_via_PackedID_1d58(void *this_ptr)
{
  undefined2 *puVar1;
  u8 *packed_id;
  void *pvVar2;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x4);
  packed_id = (u8 *)(*(code *)*puVar1)();
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,packed_id);
  return pvVar2;
}



// Retrieves a simulator object via packed ID and then triggers a secondary virtual
// update/refresh (using 1030:73A8).

void * __stdcall16far
UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(void *this_ptr)
{
  void *pvVar1;
  
  pvVar1 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(this_ptr);
  if (pvVar1 != NULL)
  {
    pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar1);
    return pvVar1;
  }
  return NULL;
}



u32 __stdcall16far Simulator_Object_Get_Dword_8_1daa(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0xa),
                  *(undefined2 *)((int)param_1 + 0x8));
}



u16 __stdcall16far
Simulator_Object_Set_Indexed_Word_Pair_1dfc
          (u32 *param_1,u16 param_2,u16 param_3,ulong param_4)
{
  undefined2 *puVar1;
  u32 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (u32 *)param_1;
  if ((puVar2[0x2] <= param_4) || (puVar2[0x1] == 0x0))
  {
    if ((*(uint *)((int)puVar2 + 0x12) <= param_4._2_2_) &&
       ((*(uint *)((int)puVar2 + 0x12) < param_4._2_2_ ||
        ((uint)puVar2[0x4] <= (uint)param_4))))
    {
      puVar1 = (undefined2 *)((int)*param_1 + 0x20);
      (*(code *)*puVar1)();
    }
    if ((puVar2[0x4] <= param_4) || (puVar2[0x1] == 0x0))
    {
      return 0x0;
    }
    if ((*(uint *)((int)puVar2 + 0xa) <= param_4._2_2_) &&
       ((*(uint *)((int)puVar2 + 0xa) < param_4._2_2_ ||
        ((uint)puVar2[0x2] <= (uint)param_4))))
    {
      *(int *)(puVar2 + 0x2) = (int)(param_4 + 0x1);
      *(undefined2 *)((int)puVar2 + 0xa) = (int)(param_4 + 0x1 >> 0x10);
    }
  }
  uVar5 = (undefined2)(puVar2[0x1] >> 0x10);
  iVar3 = (int)puVar2[0x1];
  *(u16 *)(iVar3 + (uint)param_4 * 0x4) = param_2;
  *(u16 *)(iVar3 + (uint)param_4 * 0x4 + 0x2) = param_3;
  return 0x1;
}



void __stdcall16far
Simulator_Object_Process_First_Null_Entry_VCall_8_1e96(undefined4 *param_1)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  ulong local_6;
  
  local_6 = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)param_1 >> 0x10);
    if (((ulong)((undefined4 *)param_1)[0x2] <= local_6) ||
       (uVar2 = ((undefined4 *)param_1)[0x1],
       *(long *)((int)uVar2 + (int)local_6 * 0x4) == 0x0)) break;
    local_6 += 0x1;
  }
  puVar1 = (undefined2 *)((int)*param_1 + 0x8);
  (*(code *)*puVar1)();
  return;
}



void __stdcall16far Simulator_Object_Update_Max_Ulong_C_1eee(u32 param_1,ulong param_2)
{
  ulong uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  uVar1 = *(ulong *)(iVar3 + 0xc);
  uVar2 = *(undefined2 *)(iVar3 + 0xe);
  if (uVar1 < param_2)
  {
    uVar1 = param_2 & 0xffff;
    uVar2 = param_2._2_2_;
  }
  *(undefined2 *)(iVar3 + 0xc) = (int)uVar1;
  *(undefined2 *)(iVar3 + 0xe) = uVar2;
  return;
}



u16 __stdcall16far Simulator_Object_Append_Ulong_to_List_1f16(u32 *param_1,u32 param_2)
{
  undefined2 *puVar1;
  u32 *puVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar2 = (u32 *)param_1;
  if ((puVar2[0x1] == 0x0) || (puVar2[0x4] <= puVar2[0x2]))
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x20);
    (*(code *)*puVar1)();
  }
  *(u32 *)((int)puVar2[0x2] * 0x4 + (int)puVar2[0x1]) = param_2;
  puVar2[0x2] = puVar2[0x2] + 0x1;
  return 0x1;
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
