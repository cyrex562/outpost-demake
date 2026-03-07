/*
 * Source: outpost.c
 * Chunk: 74/117
 * Original lines: 84494-85647
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Automatically identifies and places missing neighbor buildings (types 7, 8, 9) in the
// 8 adjacent tiles around a newly placed building. Submits InternalPutBldg commands for
// each.

void __stdcall16far
UI_Build_Item_Auto_Place_Neighbor_Buildings_ccd0(void *this_ptr,u16 *coords_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  u16 *unaff_SS;
  bool bVar4;
  undefined4 uVar5;
  int *in_stack_0000000a;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_178;
  undefined2 uStack_176;
  int iStack_54;
  int iStack_48;
  int iStack_40;
  int iStack_3e;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  long lStack_34;
  long lStack_30;
  undefined1 local_2c [0xc];
  u16 local_20;
  int local_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  int iStack_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int local_8;
  int local_6;
  int local_4;
  
  unpack_3word_struct(coords_ptr,in_stack_0000000a,&local_8,(int *)unaff_SS);
  pvStack_14 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_18 = *(undefined4 *)((int)pvStack_14 + 0x2e);
  uStack_1c = *(undefined4 *)((int)uStack_18 + 0x4);
  Simulator_Get_World_Dimensions_Pair_c1f8(this_ptr,&local_20,unaff_SS);
  iStack_a = local_4 + -0x1;
  iStack_e = local_4 + 0x1;
  iStack_c = local_6 + -0x1;
  iStack_10 = local_6 + 0x1;
  if (iStack_a < 0x0)
  {
    iStack_a = 0x0;
  }
  if (local_1e <= iStack_e)
  {
    iStack_e = local_1e + -0x1;
  }
  if (iStack_c < 0x0)
  {
    iStack_c = 0x0;
  }
  if ((int)local_20 <= iStack_10)
  {
    iStack_10 = local_20 - 0x1;
  }
  zero_init_12bytes_struct(local_2c);
  pack_two_3word_structs
            (local_2c,unaff_SS,local_8,iStack_10,iStack_e,local_8,iStack_c,iStack_a);
  lStack_30 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  lStack_34 = *(long *)((int)lStack_30 + 0x20);
  puStack_38 = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_2c),
                          lStack_34);
  if (puStack_38 != NULL)
  {
    uStack_3c = 0x0;
    iStack_3e = 0x0;
    for (iStack_40 = iStack_c; iStack_40 <= iStack_10; iStack_40 += 0x1)
    {
      for (iStack_48 = iStack_a; iVar2 = iStack_3e, iStack_48 <= iStack_e;
          iStack_48 += 0x1)
      {
        iVar3 = iStack_3e >> 0xf;
        puVar1 = (undefined2 *)((int)*puStack_38 + 0x4);
        iStack_3e = iStack_3e + 0x1;
        uVar5 = (*(code *)*puVar1)(0x1030,(undefined4 *)puStack_38,
                                   (int)((ulong)puStack_38 >> 0x10),iVar2,iVar3);
        iVar2 = (int)uVar5;
        uStack_3c._3_1_ = (char)((ulong)uVar5 >> 0x18);
        bVar4 = uStack_3c._3_1_ == '\0';
        uStack_3c = uVar5;
        if (bVar4)
        {
          iStack_54 = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1028_ce2c;
            pack_3words_reverse(coords_ptr,(int)in_stack_0000000a,local_8,iStack_40);
            uVar9 = (undefined2)lStack_34;
            uVar10 = (undefined2)((ulong)lStack_34 >> 0x10);
            uVar7 = (undefined2)uStack_1c;
            uVar8 = (undefined2)((ulong)uStack_1c >> 0x10);
            uVar6 = 0x8;
          }
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_178,unaff_SS,0x0,0x0,uVar6,coords_ptr,in_stack_0000000a,
                     uVar7,uVar8,uVar9,uVar10);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_178)
                    );
          local_178 = 0x389a;
          uStack_176 = 0x1008;
        }
LAB_1028_ce2c:
      }
    }
  }
  return;
}



// Updates build item state based on resource flags (0x1A). Transitions to state 6 if
// resources are insufficient.

u16 __stdcall16far UI_Build_Item_Update_State_and_Resources_ced2(void *this_ptr)
{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  bVar2 = (*(byte *)((int)(void *)this_ptr + 0x1a) & 0x2) == 0x0;
  if (bVar2)
  {
    uVar6 = 0x0;
    uVar7 = 0x23;
    uVar5 = 0x1;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar4,(int)((ulong)pvVar4 >> 0x10),uVar5,uVar6,uVar7);
  }
  bVar3 = (*(byte *)((int)(void *)this_ptr + 0x1a) & 0x1) == 0x0;
  if (bVar3)
  {
    uVar5 = 0x0;
    uVar6 = 0xe;
    uVar1 = 0x1;
    pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar4,(int)((ulong)pvVar4 >> 0x10),uVar1,uVar5,uVar6);
  }
  if (bVar3 || bVar2)
  {
    UI_Build_Item_Transition_State_Logic_bdac(this_ptr,0x6);
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_cf44(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Initializes a Data History Object node with a head pointer and clears the next link.

u32 * __stdcall16far
Data_History_Object_Set_Head_Pointer_cfd2(u32 *this_ptr,u32 head_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = head_ptr;
  this_ptr[0x1] = 0x0;
  return this_ptr;
}



// Invokes the virtual destructor for the object stored within a Data History node.

void __stdcall16far Data_History_Object_Node_Virtual_Dtor_cff2(void *this_ptr)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)(void *)this_ptr + 0x4);
  iVar2 = *(int *)((int)(void *)this_ptr + 0x6);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*puVar1;
    (*(code *)*puVar3)();
  }
  return;
}



// Iterates through all nodes in a Data History object, calling their virtual
// destructors and freeing memory.

u16 __stdcall16far Data_History_Object_Clear_All_Nodes_Logic_d01a(undefined4 *param_1)
{
  undefined4 *node_ptr;
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_DX;
  int extraout_DX;
  ulong uVar5;
  undefined4 uStack_e;
  
  node_ptr = (undefined4 *)**(undefined4 **)*param_1;
  puVar4 = node_ptr;
  while( true )
  {
    puVar3 = (undefined4 *)puVar4;
    UI_Build_Item_Node_dtor_Logic_d728(node_ptr);
    uStack_e = (undefined4 *)CONCAT22(in_DX,puVar3);
    if (in_DX == 0x0 && puVar3 == NULL) break;
    puVar2 = (undefined2 *)*uStack_e;
    puVar1 = (undefined2 *)puVar2 + 0x2;
    (*(code *)*puVar1)();
    puVar4 = NULL;
    in_DX = extraout_DX;
    if (uStack_e != NULL)
    {
      puVar1 = (undefined2 *)puVar2;
      uVar5 = (*(code *)*puVar1)();
      in_DX = (int)(uVar5 >> 0x10);
      puVar4 = (undefined4 *)(uVar5 & 0xffff);
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes a Data History Object by querying the simulator for an entity and cloning
// its related point history into the new object.

void * __stdcall16far
Data_History_Object_Initialize_from_Simulator_Entity_d078(void *this_ptr,u8 *packed_id)
{
  void *pvVar1;
  uint extraout_DX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long value;
  undefined2 in_stack_0000ffde;
  undefined1 local_16 [0x4];
  undefined4 *puStack_12;
  uint uStack_10;
  undefined4 *puStack_e;
  uint uStack_c;
  void *pvStack_a;
  void *pvStack_6;
  
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar4 = (int)this_ptr;
  puStack_12 = (undefined4 *)*(int *)(iVar4 + 0x4);
  uVar2 = *(uint *)(iVar4 + 0x6);
  _puStack_e = (undefined4 *)CONCAT22(uVar2,puStack_12);
  uStack_10 = uVar2;
  if (uVar2 != 0x0 || puStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puStack_12)();
    uVar2 = extraout_DX;
  }
  puStack_12 = allocate_memory(CONCAT22(in_stack_0000ffde,0x1c));
  uVar3 = uVar2 | (uint)puStack_12;
  uStack_10 = uVar2;
  if (uVar3 == 0x0)
  {
    pvVar1 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvVar1 = Data_History_Object_ctor(puStack_12,0x6,0x24);
  }
  *(undefined2 *)(iVar4 + 0x4) = pvVar1;
  *(uint *)(iVar4 + 0x6) = uVar3;
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,packed_id);
  if (pvStack_6 == NULL)
  {
    Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(unaff_SS,local_16));
    value = Gameplay_Object_Factory_Create_From_Type_ID(local_16,unaff_SS,0x0,0x0,0xa);
    Data_History_Object_Append_Point((void *)(void *)*(undefined4 *)(iVar4 + 0x4),value)
    ;
    return (void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),
                            (void *)(void *)*(undefined4 *)(iVar4 + 0x4));
  }
  pvStack_a = (void *)Colony_Spawn_and_Register_Entity_565e(pvStack_6);
  if (pvStack_a != NULL)
  {
    Data_History_Object_Batch_Clone_Points_d172(this_ptr,pvStack_a);
  }
  return (void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),
                          (void *)*(undefined2 *)(iVar4 + 0x4));
}



// Iterates through a list of simulator points and appends clones of each to the Data
// History object.

void __stdcall16far
Data_History_Object_Batch_Clone_Points_d172(void *this_ptr,void *list_ptr)
{
  undefined2 unaff_SS;
  long lVar1;
  undefined1 local_e [0x8];
  undefined1 local_6 [0x4];
  
  Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(unaff_SS,local_6));
  init_long_pair(local_e,(long)list_ptr);
  while( true )
  {
    lVar1 = get_next_list_item(local_e);
    if (lVar1 == 0x0) break;
    lVar1 = Gameplay_Object_Factory_Create_From_Type_ID
                      (local_6,unaff_SS,0x0,0x0,*(undefined2 *)((int)lVar1 + 0x4));
    Data_History_Object_Append_Point
              ((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x4),lVar1);
  }
  return;
}



// Constructor for UI Build Item Type 0x6AD2. Initializes base class with the provided
// ID and sets vtable to 0x6AD2. Default display layer 0x4B.

void * __stdcall16far UI_Build_Item_Type_6AD2_ctor_init_d1dc(void *this_ptr,u16 id)
{
  astruct_315 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_315 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  uVar1->field4_0x6 = 0x0;
  *(undefined2 *)this_ptr = 0x6ad2;
  uVar1->field2_0x2 = 0x1028;
  sprintf_wrapper(&uVar1->field5_0x8,uVar2,0x5160,0x1050);
  return this_ptr;
}



undefined2 __stdcall16far const_1_stub_1028_d222(void)
{
  return 0x1;
}



u16 __stdcall16far const_1_stub_1028_d228(void)
{
  return 0x1;
}



// Constructor for a manager that coordinates multiple UI Build Item lists. Initializes
// two internal sorted linked lists (offset 0 and 4).

void * __stdcall16far
UI_Build_Item_List_Manager_ctor_init_d22e(undefined4 *param_1,undefined4 param_2)
{
  void *pvVar1;
  int in_DX;
  undefined2 uVar2;
  void *pvVar3;
  undefined4 in_stack_0000fff8;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  *param_1 = 0x0;
  ((undefined4 *)param_1)[0x1] = param_2;
  pvVar1 = allocate_memory(CONCAT22((int)((ulong)in_stack_0000fff8 >> 0x10),0xc));
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    *param_1 = 0x0;
  }
  else
  {
    pvVar3 = UI_Sorted_Linked_List_Manager_ctor_init_d59c(pvVar1,in_DX);
    *(void **)param_1 = (void *)pvVar3;
    *(undefined2 *)((int)(undefined4 *)param_1 + 0x2) = (int)((ulong)pvVar3 >> 0x10);
  }
  return param_1;
}



// Internal destructor for the Build Item List Manager. Cleans up its internal sorted
// linked lists.

void __stdcall16far UI_Build_Item_List_Manager_dtor_Internal_d282(void *this_ptr)
{
  void *ptr;
  int iVar1;
  
  ptr = *(void **)this_ptr;
  iVar1 = *(int *)((int)(void *)this_ptr + 0x2);
  if (iVar1 != 0x0 || ptr != NULL)
  {
    UI_Sorted_Linked_List_Manager_dtor_Internal_d658((void *)CONCAT22(iVar1,ptr));
    free_if_not_null(ptr);
  }
  return;
}



// Initializes the Build Item Manager with a standard set of building items (Types
// 1000-16000) and triggers initial list processing.

void __stdcall16far UI_Build_Item_Manager_Initialize_Standard_Items_d2b0(void *this_ptr)
{
  undefined2 unaff_SS;
  undefined2 local_10c;
  undefined2 uStack_10a;
  
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3e80);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3a98);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x36b0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x32c8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2ee0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2af8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2710);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x2328);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1f40);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1b58);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1770);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x1388);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0xfa0);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0xbb8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Type_9EB6_ctor_init_9c62
            ((undefined2 *)CONCAT22(unaff_SS,&local_10c),0x3e8);
  UI_Build_Item_Process_Event_Type4_Logic_d566
            (this_ptr,(undefined2 *)CONCAT22(unaff_SS,&local_10c));
  local_10c = 0x389a;
  uStack_10a = 0x1008;
  UI_Build_Item_Manager_Process_Active_List_d6b2(*(void **)this_ptr);
  return;
}



// Wrapper that triggers event processing logic of type 3 for a UI build item,
// specifically for secondary list insertion.

u16 __stdcall16far
UI_Build_Item_Process_Event_Type3_Logic_d52c
          (void *manager_ptr,ulong arg2,void *item_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0x8);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    uVar3 = UI_Build_Item_Add_to_Secondary_Sorted_List_d776
                      (*(void **)manager_ptr,(void *)arg2,item_ptr);
    if (uVar3 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// Wrapper that triggers event processing logic of type 4 for a UI build item,
// specifically for primary list insertion.

u16 __stdcall16far
UI_Build_Item_Process_Event_Type4_Logic_d566(void *manager_ptr,void *item_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0x8);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != 0x0)
  {
    uVar3 = UI_Build_Item_Add_to_Sorted_List_d742(*(void **)manager_ptr,item_ptr);
    if (uVar3 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a manager that coordinates two sorted linked lists (vtable 0xD804).

void * __stdcall16far UI_Sorted_Linked_List_Manager_ctor_init_d59c(astruct_314 *param_1)
{
  astruct_491 *paVar1;
  uint in_DX;
  u16 uVar2;
  astruct_314 *uVar4;
  undefined2 uVar3;
  undefined2 in_stack_0000fff2;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_314 *)param_1;
  *(undefined4 *)param_1 = 0x0;
  uVar4->field4_0x4 = NULL;
  uVar4->field5_0x8 = NULL;
  *(undefined4 *)param_1 = *_p_SimulatorGlobalState;
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
  uVar2 = in_DX | (uint)paVar1;
  if (uVar2 == 0x0)
  {
    uVar4->field4_0x4 = NULL;
  }
  else
  {
    construct_object_with_vtable(paVar1,in_DX);
    *(undefined2 *)&((astruct_491 *)CONCAT22(in_DX,paVar1))->field0_0x0 = 0xd804;
    *(undefined2 *)((int)&paVar1->field0_0x0 + 0x2) = 0x1028;
    uVar4->field4_0x4 = (u16 *)CONCAT22(in_DX,paVar1);
  }
  paVar1 = allocate_memory(CONCAT22(paVar1,0xc));
  if (uVar2 == 0x0 && paVar1 == NULL)
  {
    uVar4->field5_0x8 = NULL;
  }
  else
  {
    construct_object_with_vtable(paVar1,uVar2);
    *(undefined2 *)&((astruct_491 *)CONCAT22(uVar2,paVar1))->field0_0x0 = 0xd804;
    *(undefined2 *)((int)&paVar1->field0_0x0 + 0x2) = 0x1028;
    uVar4->field5_0x8 = (u16 *)CONCAT22(uVar2,paVar1);
  }
  return param_1;
}



// Internal destructor for the Sorted Linked List Manager. Cleans up its internal lists.

void __stdcall16far UI_Sorted_Linked_List_Manager_dtor_Internal_d658(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_313 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_313 *)this_ptr;
  if (uVar2->field5_0x6 != 0x0 || uVar2->field4_0x4 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field4_0x4;
    (*(code *)*puVar1)();
  }
  if (uVar2->field7_0xa != 0x0 || uVar2->field6_0x8 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field6_0x8;
    (*(code *)*puVar1)();
  }
  return;
}



// Retrieves the sequence ID (offset 8) from the target entity of a list node.

u16 __stdcall16far UI_List_Node_Get_Sequence_ID_d69e(void *node_ptr)
{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)((int)(void *)node_ptr + 0x4);
  return *(u16 *)((int)uVar1 + 0x8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes the Build Item Manager's active item list based on the current simulator
// tick. Moves items between lists when their internal counters match the current time.

void __stdcall16far UI_Build_Item_Manager_Process_Active_List_d6b2(void *manager_ptr)
{
  ulong uVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  undefined4 *item_ptr;
  
  uVar1 = *_p_SimulatorWorldContext;
  while( true )
  {
    uVar4 = (undefined2)((ulong)manager_ptr >> 0x10);
    pvVar5 = UI_List_Node_Get_Target_FarPtr_c860
                       ((void *)*(undefined4 *)((int)(void *)manager_ptr + 0x8));
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    if ((iVar3 == 0x0 && (void *)pvVar5 == NULL) ||
       (uVar1 < *(ulong *)((int)(void *)pvVar5 + 0xc))) break;
    puVar2 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)(void *)manager_ptr + 0x8) + 0x10
             );
    item_ptr = (undefined4 *)(*(code *)*puVar2)();
    UI_Build_Item_Add_to_Sorted_List_d742(manager_ptr,item_ptr);
    if (item_ptr != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*item_ptr)(0x1020,item_ptr,0x1);
    }
  }
  return;
}



// Invokes the virtual destructor for the internal object managed by a UI list node.
// Equivalent to 1028:CFF2 but specifically for Build Items.

void __stdcall16far UI_Build_Item_Node_dtor_Logic_d728(void *node_ptr)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)(void *)node_ptr + 0x4) + 0x10);
  (*(code *)*puVar1)();
  return;
}



// Retrieves an entity pointer via a virtual call (offset 0xC) and inserts it into the
// build item's primary sorted linked list (offset 4).

u16 __stdcall16far
UI_Build_Item_Add_to_Sorted_List_d742(void *manager_ptr,void *item_ptr)
{
  undefined2 *puVar1;
  void *target_ptr;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0xc);
  target_ptr = (void *)(*(code *)*puVar1)();
  UI_Sorted_Linked_List_Insert_Item_c872
            (*(long *)((int)(void *)manager_ptr + 0x4),
             *(ulong *)((int)(void *)target_ptr + 0x4),target_ptr);
  return 0x1;
}



// Retrieves an entity pointer via a virtual call (offset 0xC) and inserts it into the
// build item's secondary sorted linked list (offset 8).

u16 __stdcall16far
UI_Build_Item_Add_to_Secondary_Sorted_List_d776
          (void *this_ptr,void *sort_key,void *item_ptr)
{
  undefined2 *puVar1;
  void *target_ptr;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)item_ptr + 0xc);
  target_ptr = (void *)(*(code *)*puVar1)();
  UI_Sorted_Linked_List_Insert_Item_c872
            (*(long *)((int)(void *)this_ptr + 0x8),(ulong)sort_key,target_ptr);
  return 0x1;
}



// An alternative routine to write a termination footer to a save game file.

int __stdcall16far
Save_File_Write_Footer_Marker_Alternative_d7a0(u16 arg1,u16 arg2,void *file_ctx)
{
  int iVar1;
  
  iVar1 = file_context_write_footer_marker_logic((void *)file_ctx);
  return (uint)(iVar1 != 0x0);
}



// Validates that the current file context contains a valid footer marker. Sets global
// error 0x6D4 on failure.

int __stdcall16far Save_File_Validate_Footer_Logic_d7ba(void)
{
  int iVar1;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
    return 0x0;
  }
  return 0x1;
}



void * __stdcall16far
UI_Control_Sub_dtor_Scalar_Deleting_d7de(void *param_1,undefined2 param_2,byte param_3)
{
  UI_Control_Sub_dtor_logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Main constructor for the global Simulator Context structure. Initializes numerous
// vtables (ec36, ecac, ed2c, edc4, ee54, ef00, 10b0, 1120), creates internal resource
// managers, and pre-allocates 8 specialized UI Item Lists for world tracking. Sets the
// global 1050:65E2 pointer.

u32 * __stdcall16far Simulator_Context_ctor_init_Global_d81c(u32 *this_ptr,u32 *arg2)
{
  u32 *puVar1;
  void **table_ptr_out;
  void *pvVar2;
  u16 *puVar3;
  uint in_DX;
  uint uVar4;
  uint uVar5;
  u32 in_stack_00000008;
  undefined2 in_stack_0000fffa;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = in_stack_00000008;
  *(undefined4 *)((int)this_ptr + 0x52) = 0x0;
  p_SimulatorWorldContext = (undefined *)this_ptr;
  PTR_DAT_1050_0000_1050_65e4 = (undefined *)arg2;
  *(undefined2 *)((int)this_ptr + 0x32) = 0xec36;
  *(undefined2 *)(this_ptr + 0xd) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x36) = 0xecac;
  *(undefined2 *)(this_ptr + 0xe) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x3a) = 0xed2c;
  *(undefined2 *)(this_ptr + 0xf) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x3e) = 0xedc4;
  *(undefined2 *)(this_ptr + 0x10) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x42) = 0xee54;
  *(undefined2 *)(this_ptr + 0x11) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x46) = 0xef00;
  *(undefined2 *)(this_ptr + 0x12) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x4a) = 0x10b0;
  *(undefined2 *)(this_ptr + 0x13) = 0x1030;
  *(undefined2 *)((int)this_ptr + 0x4e) = 0x1120;
  *(undefined2 *)(this_ptr + 0x14) = 0x1030;
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  in_DX |= (uint)puVar1;
  if (in_DX != 0x0)
  {
    Simulator_Map_Context_ctor_init_615a(puVar1);
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x56c));
  in_DX |= (uint)puVar1;
  if (in_DX == 0x0)
  {
    puVar1 = NULL;
    in_DX = 0x0;
  }
  else
  {
    puVar1 = Simulator_Map_Context_ctor_init_44be(puVar1);
  }
  *(undefined2 *)((int)this_ptr + 0x52) = puVar1;
  *(uint *)(this_ptr + 0x15) = in_DX;
  table_ptr_out = allocate_memory(CONCAT22(in_stack_0000fffa,0x4));
  in_DX |= (uint)table_ptr_out;
  if (in_DX != 0x0)
  {
    res_init_string_property_table_logic(table_ptr_out);
  }
  memset_far((void *)((int)this_ptr + 0xa),(int)arg2,0x0);
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = in_DX | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0xe) = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x15);
    *(undefined2 *)((int)this_ptr + 0xe) = puVar3;
    *(uint *)(this_ptr + 0x4) = uVar4;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0xa);
  }
  *(undefined2 *)((int)this_ptr + 0x12) = puVar3;
  *(uint *)(this_ptr + 0x5) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x5,(void *)0x19);
  }
  *(undefined2 *)((int)this_ptr + 0x16) = puVar3;
  *(uint *)(this_ptr + 0x6) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0xa);
  }
  *(undefined2 *)((int)this_ptr + 0x1a) = puVar3;
  *(uint *)(this_ptr + 0x7) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x64,(void *)0x1f4);
  }
  *(undefined2 *)((int)this_ptr + 0x1e) = puVar3;
  *(uint *)(this_ptr + 0x8) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x19,(void *)0x64);
  }
  *(undefined2 *)((int)this_ptr + 0x22) = puVar3;
  *(uint *)(this_ptr + 0x9) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x64,(void *)0x1f4);
  }
  *(undefined2 *)((int)this_ptr + 0x26) = puVar3;
  *(uint *)(this_ptr + 0xa) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0x2);
  }
  *(undefined2 *)((int)this_ptr + 0x2a) = puVar3;
  *(uint *)(this_ptr + 0xb) = uVar5;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the global Simulator Context. Performs exhaustive cleanup of
// all internal resource managers, the main simulator map (1050:5740), and the 8
// specialized world-tracking UI Item Lists.

void __stdcall16far Simulator_Context_dtor_Internal_daba(void *this_ptr)
{
  u32 *puVar1;
  int iVar2;
  void *pvVar3;
  void **table_ptr;
  astruct_312 *uVar3;
  undefined2 uVar4;
  undefined2 unaff_CS;
  
  if (_p_MapContext_5740 != NULL)
  {
    pvVar3 = (void *)_p_MapContext_5740;
    Simulator_Map_Context_dtor_Internal_61b0(_p_MapContext_5740);
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_312 *)this_ptr;
  pvVar3 = (void *)uVar3->field66_0x52;
  if (uVar3->field67_0x54 != 0x0 || pvVar3 != NULL)
  {
    Simulator_Map_Context_Free_Internal_Buffers_4538
              ((void *)CONCAT22(uVar3->field67_0x54,pvVar3));
    unaff_CS = 0x1000;
    free_if_not_null(pvVar3);
  }
  if (_PTR_DAT_1050_0000_1050_5166 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*_PTR_DAT_1050_0000_1050_5166)
              (unaff_CS,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
               (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10));
  }
  _p_SimulatorWorldContext = 0x0;
  if (_p_StringPropertyTable != NULL)
  {
    table_ptr = (void **)_p_StringPropertyTable;
    res_cleanup_string_property_table_logic(table_ptr);
    unaff_CS = 0x1000;
    free_if_not_null(table_ptr);
  }
  puVar1 = uVar3->field14_0xe;
  iVar2 = uVar3->field15_0x10;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field16_0x12;
  iVar2 = uVar3->field17_0x14;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field18_0x16;
  iVar2 = uVar3->field19_0x18;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field20_0x1a;
  iVar2 = uVar3->field21_0x1c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field22_0x1e;
  iVar2 = uVar3->field23_0x20;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field24_0x22;
  iVar2 = uVar3->field25_0x24;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field26_0x26;
  iVar2 = uVar3->field27_0x28;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar3->field28_0x2a;
  iVar2 = uVar3->field29_0x2c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a world entity iterator. Configures the iterator to scan one of the
// simulator's 8 specialized world-tracking lists based on the provided type index. Sets
// vtable to 0x11A6.

void * __stdcall16far
Simulator_World_Iterator_ctor_init_dc52
          (void *this_ptr,int arg2,u16 arg3,uint type_index)
{
  astruct_311 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_311 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 =
       *(u32 *)((int)_p_SimulatorWorldContext + (type_index >> 0x8) * 0x4 + 0xa);
  uVar1->field4_0x8 = 0x1;
  uVar1->field6_0x10 = arg2;
  *(undefined2 *)this_ptr = 0x11a6;
  uVar1->field2_0x2 = 0x1030;
  uVar1->field5_0xc = *(u32 *)((int)uVar1->field3_0x4 + 0xa);
  if (arg2 == 0x0)
  {
    uVar1->field4_0x8 = uVar1->field5_0xc;
  }
  else
  {
    uVar1->field4_0x8 = 0x1;
  }
  return this_ptr;
}
