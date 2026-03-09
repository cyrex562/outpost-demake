/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 30/54
 * Original lines (combined): 85199-91603
 * Boundaries: top-level declarations/definitions only
 */




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



undefined4 __stdcall16far
UI_Production_Item_Factory_and_List_Add_ec36
          (undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  void *pvVar2;
  void *pvVar3;
  int reg_dx;
  undefined2 uVar4;
  u16 *puVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x14));
  if (reg_dx == 0x0 && pvVar2 == NULL)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar7 = UI_Production_Item_Type_613E_ctor_init_5d3c
                       ((void *)CONCAT22(reg_dx,pvVar2),param_5);
    uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
    pvVar2 = (void *)pvVar7;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  pvVar3 = pvVar2;
  puVar5 = Simulator_Factory_Create_Resource_Entry_4594
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_3);
  UI_Component_Set_Internal_Object_Ptr_5fe2
            ((u32)CONCAT22(uVar4,pvVar2),(u32)CONCAT22(puVar5,pvVar3));
  uVar1 = *(undefined4 *)((int)pvVar2 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0xe),(void *)CONCAT22(uVar4,pvVar2),
             (uint)uVar1,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar1;
}



undefined4 __stdcall16far
UI_Colony_Component_Factory_and_List_Add_ecac
          (undefined4 param_1,undefined2 param_2,undefined2 *param_3,undefined2 param_4,
          void *param_5)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  int reg_dx;
  undefined2 uVar4;
  int *piVar5;
  undefined2 uVar6;
  void *pvVar7;
  void *in_stack_0000ffe2;
  undefined2 in_stack_0000ffe4;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe2,0x1c));
  if (reg_dx == 0x0 && pvVar2 == NULL)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar7 = UI_Colony_Component_ctor_with_Params_299a
                       ((void *)CONCAT22(reg_dx,pvVar2),param_5);
    uVar4 = (undefined2)((ulong)pvVar7 >> 0x10);
    pvVar2 = (void *)pvVar7;
  }
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)param_1 + 0x52);
  puVar3 = param_3;
  piVar5 = Simulator_Factory_Create_Specialized_Entity_Entry_4628
                     ((int)uVar1,(int)((ulong)uVar1 >> 0x10),param_3);
  *puVar3 = param_3;
  UI_Component_Set_Internal_Object_Ptr_Alternative_3006
            ((u32)CONCAT22(uVar4,pvVar2),(u32)CONCAT22(piVar5,puVar3));
  uVar1 = *(undefined4 *)((int)pvVar2 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x12),(void *)CONCAT22(uVar4,pvVar2)
             ,(uint)uVar1,(void *)CONCAT22(in_stack_0000ffe4,in_stack_0000ffe2));
  return uVar1;
}



// Dispatches a base-level interaction for different item types (4, 0xC, or generic).
// Instantiates specialized UI items and notifies the simulator.

void * __stdcall16far
Simulator_Process_Item_Base_Interaction_ef00
          (undefined4 param_1,undefined2 param_2,int param_3)
{
  void *pvVar1;
  int reg_dx;
  undefined2 uVar2;
  void *pvVar3;
  void *in_stack_0000ffe4;
  undefined2 in_stack_0000ffe6;
  
  if (param_3 == 0x4)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0x16));
    if (reg_dx != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Type4_ctor_with_Params_b936();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  else if (param_3 == 0xc)
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0xe));
    if (reg_dx != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Type12_ctor_with_Params_bc24();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  else
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffe4,0xe));
    if (reg_dx != 0x0 || pvVar1 != NULL)
    {
      pvVar3 = UI_Item_Base_ctor_with_Params_b22c();
      uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
      pvVar1 = (void *)pvVar3;
      goto LAB_1028_ef8b;
    }
  }
  pvVar1 = NULL;
  uVar2 = 0x0;
LAB_1028_ef8b:
  pvVar3 = (void *)*(undefined4 *)((int)pvVar1 + 0x4);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x22),(void *)CONCAT22(uVar2,pvVar1)
             ,(uint)(void *)pvVar3,(void *)CONCAT22(in_stack_0000ffe6,in_stack_0000ffe4)
            );
  return pvVar3;
}



// Retrieves the 4-byte object pointer at the specified index from the managed list.

void * __stdcall16far UI_Managed_List_Get_Item_at_Index_1312(void *this_ptr,ulong index)
{
  astruct_305 *uVar1;
  undefined2 uVar2;
  void *uStack_6;
  
  uStack_6 = NULL;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_305 *)this_ptr;
  if (((uVar1->field6_0x6 != 0x0) && (index != 0x0)) && (index < uVar1->field7_0xa))
  {
    uStack_6 = (void *)*(undefined4 *)((int)uVar1->field6_0x6 + (int)index * 0x4);
  }
  return uStack_6;
}



// Removes the object at the specified index, invokes its virtual destructor, and clears
// the pointer in the list. Marks the list as requiring a recount/re-sort.

u16 __stdcall16far UI_Managed_List_Remove_Item_at_Index_13f6(void *this_ptr,void *index)
{
  undefined2 uVar1;
  undefined4 *puVar2;
  void *in_stack_0000fff0;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  puVar2 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr,(ulong)index);
  if (puVar2 != NULL)
  {
    uStack_4 = 0x1;
    uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
    if ((*(int *)((int)this_ptr + 0x1a) != 0x0) && (puVar2 != NULL))
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar2)();
    }
    UI_Managed_List_Set_Item_at_Index_1358(this_ptr,NULL,(uint)index,in_stack_0000fff0);
    *(undefined2 *)((int)this_ptr + 0x4) = 0x1;
  }
  return uStack_4;
}



// Scalar deleting destructor for the managed UI list component.

void * __stdcall16far
UI_Managed_List_Scalar_Deleting_Dtor_15fe(void *this_ptr,byte flags)
{
  UI_Managed_List_Base_dtor_Internal_1244(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for UI window components. Initializes core fields and sets vtable to
// 0x17BA.

void * __stdcall16far UI_Window_Base_ctor_init_1628(void *this_ptr)
{
  astruct_300 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_300 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x8 = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  uVar1->field2_0x2 = 0x1030;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Parameterized base constructor for UI window components. Links the window to a
// simulator-level context and initializes its internal ID.

void * __stdcall16far
UI_Window_Base_ctor_with_Params_165e(void *this_ptr,long arg1,void *arg2)
{
  astruct_299 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_299 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field3_0x4)[0x0] = 0x0;
  (&uVar1->field3_0x4)[0x1] = 0x0;
  uVar1->field5_0x8 = arg2;
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  uVar1->field2_0x2 = 0x1030;
  lVar3 = Simulator_Resolve_Unique_Entity_ID_Logic_5c8a
                    (_p_SimulatorObjectLibrary,(void *)arg1);
  uVar1->field3_0x4 = (int)lVar3;
  uVar1->field4_0x6 = (int)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// Internal destructor for base UI window components. Reverts vtable pointers to base
// object state.

void __stdcall16far UI_Window_Base_dtor_Internal_16b2(void *this_ptr)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  *(void ***)this_ptr = (void **)&PTR_s_463_bmp_1050_1628_1050_17ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1030;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1008;
  return;
}



// Sets the parent far pointer (offset 8) for a UI window.

void __stdcall16far UI_Window_Set_Parent_Wrapper_177a(void *this_ptr,void *parent_ptr)
{
  *(undefined4 *)((int)this_ptr + 0x8) = parent_ptr;
  return;
}



// Scalar deleting destructor for base UI windows.

void * __stdcall16far
UI_Window_Base_dtor_Scalar_Deleting_1794(void *this_ptr,byte flags)
{
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for a UI window that includes an internal managed list (offset 0xC).
// Initializes base window and sets vtable to 0x1A16.

void * __stdcall16far
UI_Window_with_List_ctor_init_17ce(void *this_ptr,void *arg1,void *arg2)
{
  void *pvVar1;
  int iVar2;
  astruct_298 *uVar1;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = (void *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = UI_Window_Base_ctor_init_1628(this_ptr);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  *(undefined4 *)((int)pvVar4 + 0xc) = 0x0;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  *(undefined2 *)((int)pvVar4 + 0x2) = 0x1030;
  if ((arg2 != NULL) || (arg1 != NULL))
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      pvVar3 = NULL;
    }
    else
    {
      pvVar3 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(iVar2,pvVar1),arg1,arg2);
    }
    *(undefined2 *)((int)pvVar4 + 0xc) = (void *)pvVar3;
    *(undefined2 *)((int)pvVar4 + 0xe) = (int)((ulong)pvVar3 >> 0x10);
  }
  return this_ptr;
}



// Parameterized constructor for a UI window with an internal managed list.

void * __stdcall16far
UI_Window_with_List_ctor_with_Params_183c
          (void *this_ptr,void *arg1,void *arg2,void *arg3,void *arg4)
{
  void *pvVar1;
  int iVar2;
  astruct_297 *uVar1;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = UI_Window_Base_ctor_with_Params_165e(this_ptr,(long)arg3,arg4);
  iVar2 = (int)((ulong)pvVar4 >> 0x10);
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_297 *)this_ptr;
  (&uVar1->field11_0xc)[0x0] = 0x0;
  (&uVar1->field11_0xc)[0x1] = 0x0;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  uVar1->field2_0x2 = 0x1030;
  if ((arg2 != NULL) || (arg1 != NULL))
  {
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x18));
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      pvVar4 = NULL;
    }
    else
    {
      pvVar4 = UI_Production_Item_Base_ctor_init_1cd8
                         ((void *)CONCAT22(iVar2,pvVar1),arg1,arg2);
    }
    uVar1->field11_0xc = (uint16_t)pvVar4;
    uVar1->field12_0xe = (uint16_t)((ulong)pvVar4 >> 0x10);
  }
  return this_ptr;
}



// Internal destructor for UI windows with managed lists. Cleans up the list and its
// items before calling the base window destructor. Reverts vtable to 0x1A16.

void __stdcall16far UI_Window_with_List_dtor_Internal_18b2(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_296 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_296 *)this_ptr;
  *(char **)this_ptr = (char *)s_638_bmp_1050_1a11 + 0x5;
  uVar2->field2_0x2 = 0x1030;
  if (uVar2->field12_0xe != 0x0 || uVar2->field11_0xc != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field11_0xc;
    (*(code *)*puVar1)();
  }
  UI_Window_Base_dtor_Internal_16b2(this_ptr);
  return;
}



void * __stdcall16far
UI_Window_with_List_dtor_Scalar_Deleting_19f0(void *param_1,byte param_2)
{
  UI_Window_with_List_dtor_Internal_18b2(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for the global UI window manager. Initializes as a window with list, sets
// global 1050:5166 pointer, and sets vtable to 0x1CBC.

void * __stdcall16far UI_Global_Window_Manager_ctor_init_1a32(void *this_ptr)
{
  UI_Window_with_List_ctor_with_Params_183c
            (this_ptr,(void *)0x1,(void *)0x16,(void *)0xff000000,NULL);
  PTR_DAT_1050_0000_1050_5168 = (undefined *)((ulong)this_ptr >> 0x10);
  PTR_DAT_1050_0000_1050_5166 = (undefined *)this_ptr;
  *(undefined4 *)(PTR_DAT_1050_0000_1050_5166 + 0x10) = 0x0;
  *(char **)this_ptr = (char *)s_288_flc_1050_1cb6 + 0x6;
  *(undefined2 *)(PTR_DAT_1050_0000_1050_5166 + 0x2) = 0x1030;
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the global UI window manager. Clears the global 1050:5166
// pointer and calls the internal list-window destructor.

void __stdcall16far UI_Global_Window_Manager_dtor_Internal_1a74(void *this_ptr)
{
  *(char **)this_ptr = (char *)s_288_flc_1050_1cb6 + 0x6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1030;
  _PTR_DAT_1050_0000_1050_5166 = 0x0;
  UI_Window_with_List_dtor_Internal_18b2(this_ptr);
  return;
}



void * __stdcall16far
UI_Global_Window_Manager_dtor_Scalar_Deleting_1c96(void *param_1,byte param_2)
{
  UI_Global_Window_Manager_dtor_Internal_1a74(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Retrieves a 4-byte item from the window's associated managed list by its index.

u32 __stdcall16far
UI_Window_Get_List_Item_by_Index_Logic_1dbc(void *this_ptr,ulong index)
{
  int iVar1;
  undefined2 uVar2;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  iVar1 = (int)this_ptr;
  if ((*(long *)(iVar1 + 0x4) != 0x0) && (index < *(ulong *)(iVar1 + 0x8)))
  {
    uStack_6 = *(u32 *)((int)*(undefined4 *)(iVar1 + 0x4) + (int)index * 0x4);
  }
  return uStack_6;
}



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



// Sets a far pointer to an internal object (offset 0x10) for the UI component.
// Equivalent to 1030:5FE2.

void __stdcall16far
UI_Component_Set_Internal_Object_Ptr_Alternative_3006(u32 this_ptr,u32 obj_ptr)
{
  *(u32 *)((int)this_ptr + 0x10) = obj_ptr;
  return;
}



// An alternative routine for initializing DanBrotherton UI windows with specific
// resource IDs.

void * __stdcall16far
UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
          (void *this_ptr,u16 arg1,u16 arg2,u16 arg3,u16 arg4)
{
  astruct_281 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_281 *)this_ptr;
  *(undefined4 *)this_ptr = *(undefined4 *)arg3;
  uVar1->field4_0x4 = *(u16 *)(arg3 + 0x4);
  uVar1->field5_0x6 = arg2;
  uVar1->field6_0x8 = arg1;
  return this_ptr;
}
