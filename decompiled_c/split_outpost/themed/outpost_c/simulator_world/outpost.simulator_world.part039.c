/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 39/56
 * Original lines (combined): 94870-96610
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Executes a resource-related action (type 0x3A). Depending on sub-parameters, can
// trigger entity removal, value distribution (using 7DDC), or resource list consumption
// (using 6356).

void __stdcall16far
UI_Component_Execute_Resource_Action_and_Notify_6c66
          (astruct_254 *param_1,int param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  u16 category;
  int iVar3;
  uint in_DX;
  uint uVar5;
  astruct_254 *uVar4;
  undefined2 uVar6;
  undefined2 unaff_CS;
  int iVar7;
  undefined2 uVar8;
  undefined2 in_stack_0000fff2;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_254 *)param_1;
  if (uVar4->field55_0x3a == NULL)
  {
    unaff_CS = 0x1000;
    this = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
    uVar5 = in_DX | (uint)this;
    if (uVar5 == 0x0)
    {
      uVar4->field55_0x3a = NULL;
    }
    else
    {
      unaff_CS = 0x1008;
      pvVar2 = construct_object_with_vtable(this,in_DX);
      *(void **)&uVar4->field55_0x3a = pvVar2;
      *(uint *)((int)&uVar4->field55_0x3a + 0x2) = uVar5;
    }
  }
  iVar7 = (int)param_3;
  uVar8 = (undefined2)((ulong)param_3 >> 0x10);
  puVar1 = (undefined2 *)((int)*uVar4->field55_0x3a + 0x8);
  (*(code *)*puVar1)(unaff_CS,uVar4->field55_0x3a,iVar7,uVar8);
  if (param_2 != 0x0)
  {
    if (*(int *)(iVar7 + 0x6) != 0x0)
    {
      UI_Component_Remove_Entities_of_Type_Logic_6e9c
                (param_1,(ulong)*(uint *)(iVar7 + 0xa),*(int *)(iVar7 + 0x6));
      return;
    }
    if (*(int *)(iVar7 + 0x4) != 0x0)
    {
      UI_Component_Add_Value_to_List_at_22_Logic_7ddc
                (uVar4,uVar6,-*(int *)(iVar7 + 0xa),
                 -(uint)(*(int *)(iVar7 + 0xa) != 0x0),*(undefined2 *)(iVar7 + 0x4));
      return;
    }
    if (*(int *)(iVar7 + 0x8) != 0x0)
    {
      category = UI_Component_Get_Entity_Type_ID_6fa0(param_1);
      iVar3 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar3 != 0x0)
      {
        UI_Item_List_Consume_Resources_by_Type_Logic_6356
                  ((void *)uVar4->field26_0x1a,0x0,*(uint *)(iVar7 + 0xa),0x0);
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a global planetary resource metric (offset 0x18 in Resource 0x2F data).

u16 __stdcall16far Simulator_Get_Planet_Resource_Metric_6db4(void)
{
  long lVar1;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lVar1 = UI_Get_Entity_Resource_Data_at_Offset_16_Logic(lVar1);
  return *(u16 *)((int)lVar1 + 0x18);
}



// Retrieves the construction progress value (offset 0x94) from the simulator object if
// the entity is currently in the construction state (4).

u16 __stdcall16far UI_Component_Get_Entity_Construction_Progress_6e4c(void *this_ptr)
{
  undefined4 uVar1;
  astruct_252 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_252 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if ((uVar2->field26_0x1a != 0x0) && (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x4)
     )
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0x94);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through the component's internal entity list and removes all entities
// matching the specified type from the simulator.

void __stdcall16far
UI_Component_Remove_Entities_of_Type_Logic_6e9c(void *this_ptr,long count,int type_id)
{
  undefined2 *puVar1;
  astruct_251 *uVar3;
  undefined2 uVar2;
  void *lVar5;
  void *pvVar3;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_251 *)this_ptr;
  if (*(int *)((int)&uVar3->field30_0x1e + 0x2) != 0x0 ||
      *(int *)&uVar3->field30_0x1e != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x10);
    uStack_6 = (*(code *)*puVar1)();
    for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
    {
      puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x4);
      lVar5 = (void *)(*(code *)*puVar1)();
      if (lVar5 != NULL)
      {
        pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)lVar5);
        if (*(int *)((int)pvVar3 + 0xc) == type_id)
        {
          count += -0x1;
          Simulator_Get_Entity_at_Coords_Wrapper_e332
                    ((u32)_p_SimulatorWorldContext,(u16)(u8 *)lVar5,
                     (u16)((ulong)lVar5 >> 0x10));
          puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0x8);
          (*(code *)*puVar1)(0x1028,uVar3->field30_0x1e,0x0,uStack_a);
        }
        if (count._2_2_ == 0x0 && (int)count == 0x0)
        {
          return;
        }
      }
    }
  }
  return;
}



// Retrieves the core entity type ID (offset 0xC) from the component's linked simulator
// object. Handles lazy-initialization of the object.

u16 __stdcall16far UI_Component_Get_Entity_Type_ID_6fa0(void *this_ptr)
{
  astruct_250 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_250 *)this_ptr;
  if (uVar1->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (uVar1->field26_0x1a != 0x0)
  {
    return *(u16 *)((int)uVar1->field26_0x1a + 0xc);
  }
  return 0x0;
}



// Retrieves the 'A' resource output value (offset 0xA2 in simulator object) if the
// entity is active (state 5). Likely represents Food or basic production.

u16 __stdcall16far UI_Component_Get_Entity_Resource_A_Output_6fd4(void *this_ptr)
{
  undefined4 uVar1;
  astruct_249 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_249 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xa2);
  }
  return 0x0;
}



// Retrieves the 'B' resource output value (offset 0xA0 in simulator object) if the
// entity is active. Likely represents Power production.

u16 __stdcall16far UI_Component_Get_Entity_Resource_B_Output_701c(void *this_ptr)
{
  undefined4 uVar1;
  astruct_248 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_248 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xa0);
  }
  return 0x0;
}



// Retrieves the 'C' resource output value (offset 0xAA in simulator object) if the
// entity is active.

u16 __stdcall16far UI_Component_Get_Entity_Resource_C_Output_7064(void *this_ptr)
{
  undefined4 uVar1;
  astruct_247 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_247 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xaa);
  }
  return 0x0;
}



// Retrieves the 'D' resource output value (offset 0xAC in simulator object) if the
// entity is active.

u16 __stdcall16far UI_Component_Get_Entity_Resource_D_Output_70ac(void *this_ptr)
{
  undefined4 uVar1;
  astruct_246 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_246 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  if (*(int *)((int)uVar2->field26_0x1a + 0x12) == 0x5)
  {
    uVar1 = *(undefined4 *)
             CONCAT22((int)((ulong)uVar2->field26_0x1a >> 0x10),
                      (undefined4 *)((int)uVar2->field26_0x1a + 0x14));
    return *(u16 *)((int)uVar1 + 0xac);
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sums the resource capacity values from the entity's associated lists if it belongs to
// grouping category 1 or 2.

long __stdcall16far UI_Component_Sum_Entity_Resource_Capacity_70f4(void *this_ptr)
{
  int iVar1;
  int iVar2;
  astruct_245 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  long *this_ptr_00;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_245 *)this_ptr;
  if (uVar3->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar2 = *(int *)((int)uVar3->field26_0x1a + 0xc);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
  if (iVar1 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
    if ((iVar2 == 0x0) || (uVar3->field31_0x22 == NULL))
    {
      return 0x0;
    }
    this_ptr_00 = uVar3->field31_0x22;
  }
  else
  {
    this_ptr_00 = (long *)*(undefined4 *)((int)uVar3->field26_0x1a + 0x28);
  }
  pvVar5 = UI_Item_List_Sum_Values_Logic(this_ptr_00);
  return (long)pvVar5;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specialized 16-bit property (offset 0xAA) from the simulator object if
// the entity belongs to group 0x10 and is active.

u16 __stdcall16far UI_Component_Get_Entity_Property_v10_AA_Logic_7226(void *this_ptr)
{
  astruct_243 *paVar1;
  int iVar3;
  astruct_242 *uVar3;
  astruct_243 *iVar2;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_242 *)this_ptr;
  if (uVar3->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar3 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                     *(int *)((int)uVar3->field26_0x1a + 0xc));
  if ((iVar3 != 0x0) && (*(int *)((int)uVar3->field26_0x1a + 0x12) == 0x5))
  {
    paVar1 = *(astruct_243 **)
              CONCAT22((int)((ulong)uVar3->field26_0x1a >> 0x10),
                       (undefined4 *)((int)uVar3->field26_0x1a + 0x14));
    uVar4 = (undefined2)((ulong)paVar1 >> 0x10);
    iVar2 = (astruct_243 *)paVar1;
    if (iVar2->field164_0xa4 == 0x1e)
    {
      return iVar2->field169_0xaa;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through and destroys the internal component list stored at offset 0x1E,
// including virtual destructor calls for all items.

void __stdcall16far UI_Component_Destroy_Internal_List_1E_Logic_730a(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  astruct_239 *uVar4;
  undefined2 uVar5;
  undefined2 unaff_CS;
  long lVar6;
  u32 *puVar7;
  ulong uStack_a;
  ulong uStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_239 *)this_ptr;
  if (uVar4->field30_0x1e != NULL)
  {
    puVar7 = uVar4->field30_0x1e;
    puVar3 = (undefined2 *)((int)*uVar4->field30_0x1e + 0x10);
    uStack_6 = (*(code *)*puVar3)();
    for (uStack_a = 0x0; uStack_a < uStack_6; uStack_a += 0x1)
    {
      puVar3 = (undefined2 *)((int)*uVar4->field30_0x1e + 0x4);
      lVar6 = (*(code *)*puVar3)(unaff_CS);
      if (lVar6 != 0x0)
      {
        unaff_CS = 0x1028;
        Simulator_Get_Entity_at_Coords_Wrapper_e332
                  (_p_SimulatorWorldContext,(u16)lVar6,(u16)((ulong)lVar6 >> 0x10));
      }
    }
                // WARNING: Load size is inaccurate
    puVar1 = uVar4->field30_0x1e;
    iVar2 = *(int *)((int)&uVar4->field30_0x1e + 0x2);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1,puVar7);
    }
    uVar4->field30_0x1e = NULL;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Lazy-initializes and caches the simulator object pointer (offset 0x1A) for the entity
// packed ID at offset 0x16.

void * __stdcall16far UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(void *this_ptr)
{
  astruct_238 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_238 *)this_ptr;
  if (uVar1->field22_0x16 == 0x0)
  {
    return NULL;
  }
  if (*(long *)&uVar1->field23_0x1a == 0x0)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)(u8 *)uVar1->field22_0x16);
    uVar1->field23_0x1a = (uint16_t)pvVar3;
    uVar1->field24_0x1c = (uint16_t)((ulong)pvVar3 >> 0x10);
  }
  return (void *)CONCAT22(uVar1->field24_0x1c,(void *)uVar1->field23_0x1a);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Directly sets the entity packed ID (offset 0x2A) and resolves its simulator object
// pointer (offset 0x2E).

void __stdcall16far
UI_Component_Set_Entity_ID_and_Cache_Ptr_73ee(void *this_ptr,void *entity_id)
{
  astruct_237 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_237 *)this_ptr;
  uVar1->field42_0x2a = entity_id;
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uVar1->field43_0x2e = (int)pvVar3;
  uVar1->field44_0x30 = (int)((ulong)pvVar3 >> 0x10);
  return;
}



// Invokes a virtual function at offset 0x44 on the component's linked simulator entity.

u16 __stdcall16far UI_Component_Invoke_Entity_vcall_44_Logic_7bee(void *this_ptr)
{
  undefined2 *puVar1;
  u16 uVar2;
  void *pvVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = (void *)this_ptr;
  if (*(long *)((int)pvVar3 + 0x16) == 0x0)
  {
    return 0x0;
  }
  if (*(long *)((int)pvVar3 + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)pvVar3 + 0x1a) + 0x44);
  uVar2 = (*(code *)*puVar1)();
  return uVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Spawns a batch of sub-entities (type '\x06', likely workers or units) for a UI
// component. Iteratively invokes simulator creation, links the new entities to the
// production UI, and increments local tracking counters.

void __stdcall16far
UI_Component_Batch_Spawn_SubEntities_Logic_7c50
          (astruct_236 *param_1,long param_2,int param_3)
{
  undefined2 *puVar1;
  void *pvVar2;
  int in_DX;
  undefined2 uVar4;
  astruct_236 *uVar3;
  undefined2 uVar5;
  void *pvVar6;
  u8 *puVar7;
  undefined4 *puVar8;
  u32 *puVar9;
  u8 *puVar10;
  undefined2 in_stack_0000ffee;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_236 *)param_1;
  if (uVar3->field30_0x1e == NULL)
  {
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffee,0x18));
    if (in_DX == 0x0 && pvVar2 == NULL)
    {
      uVar3->field30_0x1e = NULL;
    }
    else
    {
      pvVar6 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x5);
      *(int *)&uVar3->field30_0x1e = (int)pvVar6;
      *(undefined2 *)((int)&uVar3->field30_0x1e + 0x2) = (int)((ulong)pvVar6 >> 0x10);
    }
  }
  if (param_3 == 0x4)
  {
    uVar3->field49_0x34 = uVar3->field49_0x34 + (int)param_2;
  }
  while (param_2 != 0x0)
  {
    puVar7 = Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
                       ((int)_p_SimulatorWorldContext,
                        (int)((ulong)_p_SimulatorWorldContext >> 0x10),0x0,(long)param_3
                        ,0x6000000,(int)*(undefined4 *)&uVar3->field_0x4,
                        (int)((ulong)*(undefined4 *)&uVar3->field_0x4 >> 0x10));
    uVar4 = (undefined2)((ulong)puVar7 >> 0x10);
    puVar9 = uVar3->field30_0x1e;
    puVar1 = (undefined2 *)((int)*uVar3->field30_0x1e + 0xc);
    puVar10 = (u8 *)puVar7;
    (*(code *)*puVar1)();
    puVar8 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar7);
    puVar1 = (undefined2 *)((int)*puVar8 + 0x14);
    (*(code *)*puVar1)(0x1028,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10),param_1,
                       puVar9,puVar10,uVar4);
    param_2 = param_2 + -0x1;
  }
  return;
}



// Updates the component's reference to the currently active simulator entity (offset
// 0x16) and triggers a refresh/sync if a sub-component (0x2E) is present.

u16 __stdcall16far
UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a(void *this_ptr,void *entity_id)
{
  astruct_232 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_232 *)this_ptr;
  uVar1->field19_0x16 = entity_id;
  uVar1->field20_0x1a = 0x0;
  UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  if (uVar1->field37_0x2e != NULL)
  {
    UI_Planet_View_List_Update_State_Wrapper_4b20
              (uVar1->field37_0x2e,uVar1->field19_0x16,uVar1->field4_0x4);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the linked entity belongs to type group 0xB and is currently in active
// state 5.

int __stdcall16far UI_Component_Check_Entity_GroupB_and_Active_7ea0(void *this_ptr)
{
  undefined4 uVar1;
  u16 category;
  int iVar2;
  
  category = UI_Component_Get_Entity_Type_ID_6fa0(this_ptr);
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if ((iVar2 != 0x0) &&
     (uVar1 = *(undefined4 *)((int)(void *)this_ptr + 0x1a),
     *(int *)((int)uVar1 + 0x12) == 0x5))
  {
    return 0x1;
  }
  return 0x0;
}



// Updates the 4th 16-bit word of the linked entity's internal resource data block.

void __stdcall16far
UI_Component_Update_Entity_Resource_Field4_7eda(void *this_ptr,u16 value)
{
  undefined2 uVar1;
  u16 unaff_SS;
  undefined2 local_c;
  undefined2 uStack_a;
  u16 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  local_c = 0x0;
  uStack_a = 0x0;
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  uStack_8 = value;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  UI_Build_Item_Update_Resource_Data_Logic_bb96
            ((void *)*(undefined4 *)((int)this_ptr + 0x1a),(u16)&local_c,unaff_SS);
  return;
}



// Updates the 2nd 16-bit word of the linked entity's internal resource data block.

void __stdcall16far
UI_Component_Update_Entity_Resource_Field2_7f1a(void *this_ptr,u16 value)
{
  undefined2 uVar1;
  u16 unaff_SS;
  undefined2 local_c;
  u16 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  local_c = 0x0;
  uStack_8 = 0x0;
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  uStack_a = value;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  UI_Build_Item_Update_Resource_Data_Logic_bb96
            ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a),(u16)&local_c,
             unaff_SS);
  return;
}



// Retrieves the 4th 16-bit word from the linked entity's resource data block.

u16 __stdcall16far UI_Component_Get_Entity_Resource_Field4_7f5a(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  pvVar2 = UI_Build_Item_Get_Resource_Data_Ptr_bb6a
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
  if (pvVar2 != NULL)
  {
    return *(u16 *)((int)(void *)pvVar2 + 0x4);
  }
  return 0x0;
}



// Retrieves the 2nd 16-bit word from the linked entity's resource data block.

u16 __stdcall16far UI_Component_Get_Entity_Resource_Field2_7f98(void *this_ptr)
{
  undefined2 uVar1;
  void *pvVar2;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (*(long *)((int)(void *)this_ptr + 0x1a) == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  pvVar2 = UI_Build_Item_Get_Resource_Data_Ptr_bb6a
                     ((void *)*(undefined4 *)((int)(void *)this_ptr + 0x1a));
  if (pvVar2 != NULL)
  {
    return *(u16 *)((int)(void *)pvVar2 + 0x2);
  }
  return 0x0;
}



// Resolves the entity pointer and, if it belongs to specific building categories
// (0x33-0x34, 0x60-0x61), calculates its total resource output capacity.

void * __stdcall16far
UI_Component_Calculate_Entity_Resource_Output_Logic_7fd6(void *this_ptr)
{
  int iVar1;
  undefined2 in_DX;
  astruct_231 *uVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvStack_6;
  undefined2 uStack_4;
  
  pvStack_6 = NULL;
  uStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_231 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    in_DX = (undefined2)((ulong)pvVar4 >> 0x10);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if (((0x32 < iVar1) && (!SBORROW2(iVar1,0x33))) &&
     ((iVar1 == 0x34 || iVar1 + -0x33 < 0x1 ||
      ((0x2b < iVar1 + -0x34 && (iVar1 + -0x60 < 0x2))))))
  {
    pvStack_6 = (void *)UI_Build_Item_Calculate_Total_Resource_Output_1416
                                  ((void *)uVar2->field26_0x1a);
    uStack_4 = in_DX;
  }
  return (void *)CONCAT22(uStack_4,pvStack_6);
}



// Retrieves a 16-bit state value from offset 0x20 of the simulator object if the entity
// is type 0x3E or 0x41.

u16 __stdcall16far UI_Component_Get_Special_State_Value_809c(void *this_ptr)
{
  int iVar1;
  astruct_229 *uVar2;
  undefined2 uVar3;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_229 *)this_ptr;
  if (uVar2->field26_0x1a == 0x0)
  {
    UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  }
  iVar1 = *(int *)((int)uVar2->field26_0x1a + 0xc);
  if ((iVar1 == 0x3e) || (iVar1 == 0x41))
  {
    uStack_4 = *(u16 *)((int)uVar2->field26_0x1a + 0x20);
  }
  return uStack_4;
}



// High-level initializer for the global simulator state. Instantiates the global
// Simulator Context (d81c), the Build Item Manager (d22e), and the global History
// Object. Sets the primary 1050:5748 pointer.

void * __stdcall16far Simulator_Global_State_ctor_init_8128(void *this_ptr)
{
  u32 *puVar1;
  void *pvVar2;
  u16 *this_ptr_00;
  u32 *in_DX;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *pvVar6;
  undefined2 in_stack_0000fffa;
  
  puVar5 = (undefined *)((ulong)this_ptr >> 0x10);
  puVar4 = (undefined *)this_ptr;
  *(undefined4 *)this_ptr = 0x0;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  *(undefined2 *)(puVar4 + 0x8) = 0x0;
  p_SimulatorGlobalState = puVar4;
  PTR_DAT_1050_0000_1050_574a = puVar5;
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x56));
  uVar3 = (uint)in_DX | (uint)puVar1;
  if (uVar3 != 0x0)
  {
    Simulator_Context_ctor_init_Global_d81c(puVar1,in_DX);
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  if (uVar3 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)this_ptr = 0x0;
    uVar3 = 0x0;
  }
  else
  {
    pvVar6 = UI_Build_Item_List_Manager_ctor_init_d22e(pvVar2,uVar3,this_ptr);
    uVar3 = (uint)((ulong)pvVar6 >> 0x10);
    *(int *)this_ptr = (int)pvVar6;
    *(uint *)(puVar4 + 0x2) = uVar3;
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  uVar3 |= (uint)puVar1;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    puVar1 = Data_History_Object_Set_Head_Pointer_cfd2(puVar1,(u32)this_ptr);
    *(u32 **)(puVar4 + 0x4) = puVar1;
    *(uint *)(puVar4 + 0x6) = uVar3;
  }
  this_ptr_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0x24));
  uVar3 |= (uint)this_ptr_00;
  if (uVar3 != 0x0)
  {
    Simulator_Object_Library_ctor_init_5bec(this_ptr_00);
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  if (uVar3 != 0x0 || puVar1 != NULL)
  {
    Simulator_Turn_Manager_ctor_init_78e2(puVar1);
  }
  return this_ptr;
}
