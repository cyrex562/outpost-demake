/*
 * Source: outpost.c
 * Chunk: 43/117
 * Original lines: 48255-49402
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates the Build Site building list by iterating through resource-defined building
// types and creating UI Transaction items for each. Handles different building
// categories (Type 5, Type 6, etc.).

void __stdcall16far
Build_Site_List_Initialize_Items_Internal(long context,long src_context)
{
  undefined2 *puVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  uint extraout_DX_00;
  undefined2 uVar7;
  uint uVar8;
  uint extraout_DX_01;
  uint extraout_DX_02;
  astruct_430 *uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  char *pcVar12;
  long lVar13;
  char *in_stack_0000ffce;
  int iVar14;
  undefined1 local_26 [0x8];
  undefined4 uStack_1e;
  undefined4 uStack_1a;
  char *pcStack_16;
  astruct_491 *paStack_12;
  uint uStack_10;
  undefined4 *puStack_e;
  uint uStack_c;
  int iStack_a;
  char *pcStack_8;
  u16 uStack_4;
  
  uVar10 = (undefined2)((ulong)context >> 0x10);
  uVar9 = (astruct_430 *)context;
  paStack_12 = *(astruct_491 **)&uVar9->field14_0xe;
  uVar6 = *(uint *)((int)&uVar9->field14_0xe + 0x2);
  uStack_10 = uVar6;
  puStack_e = &paStack_12->field0_0x0;
  uStack_c = uVar6;
  if (uVar6 != 0x0 || paStack_12 != NULL)
  {
    (*(code *)*(undefined2 *)paStack_12->field0_0x0)();
    uVar6 = extraout_DX;
  }
  paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffce,0xc));
  uVar5 = uVar6 | (uint)paStack_12;
  uStack_10 = uVar6;
  if (uVar5 == 0x0)
  {
    pvVar2 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paStack_12,uVar6);
  }
  *(void **)&uVar9->field14_0xe = pvVar2;
  *(uint *)((int)&uVar9->field14_0xe + 0x2) = uVar5;
  for (uStack_4 = 0x21; -0x1 < (int)uStack_4; uStack_4 -= 0x1)
  {
    pcStack_16 = UI_Component_Find_Item_in_List_22_Logic_7c28
                           ((void *)src_context,uStack_4);
    pcVar3 = (char *)pcStack_16;
    uVar6 = (uint)((ulong)pcStack_16 >> 0x10) | (uint)pcVar3;
    if (uVar6 != 0x0)
    {
      Lookup_Entity_Description_Wrapper_c0ca(uStack_4);
      pcVar3 = strdup_allocate(pcVar3);
      uStack_1a = (char *)CONCAT22(uVar6,pcVar3);
      puStack_e = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
      uStack_c = uVar6;
      if (uVar6 == 0x0 && puStack_e == NULL)
      {
        uStack_1e = NULL;
      }
      else
      {
        uStack_1e = (char *)UI_Transaction_Item_Subclass_ctor_4A92_Logic
                                      ((long)CONCAT22(uVar6,puStack_e),(long)pcStack_16,
                                       (long)uStack_1a,uStack_4);
      }
      puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
      (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                         (int)((ulong)uVar9->field14_0xe >> 0x10),uStack_1e);
    }
  }
  pcStack_8 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)src_context);
  iStack_a = *(int *)((char *)pcStack_8 + 0xc);
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_a);
  if (iVar4 != 0x0)
  {
    uStack_1e = pcStack_8;
    uStack_1a = *(char **)((char *)pcStack_8 + 0x20);
    init_long_pair(local_26,(long)uStack_1a);
    while( true )
    {
      pcStack_16 = (char *)get_next_list_item(local_26);
      uVar5 = (uint)((ulong)pcStack_16 >> 0x10);
      pcVar3 = (char *)pcStack_16;
      uVar6 = uVar5 | (uint)pcVar3;
      if (uVar6 == 0x0) break;
      iVar4 = *(int *)(pcVar3 + 0x6);
      if (iVar4 == 0x7)
      {
LAB_1018_53f0:
        pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(pcVar3 + 0x6));
        pcVar3 = strdup_allocate(pcVar3);
        uVar5 = uVar6;
        paStack_12 = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          in_stack_0000ffce = NULL;
          uVar11 = 0x0;
        }
        else
        {
          uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
          pcVar12 = (char *)UI_Transaction_Item_Type5_ctor
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)((char *)pcStack_16 + 0xa),
                                       (long)CONCAT22(uVar6,pcVar3),
                                       *(int *)((char *)pcStack_16 + 0x6));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          in_stack_0000ffce = (char *)pcVar12;
        }
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),in_stack_0000ffce,
                           uVar11,in_stack_0000ffce,uVar11);
        uVar6 = extraout_DX_00;
      }
      else if (((0x5 < iVar4 + -0x7) && (!SBORROW2(iVar4 + -0x7,0x6))) &&
              (iVar4 + -0xd < 0x2)) goto LAB_1018_53f0;
      uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
      if (*(int *)((char *)pcStack_16 + 0x8) != 0x0)
      {
        pcVar3 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8
                           (*(u16 *)((char *)pcStack_16 + 0x8));
        in_stack_0000ffce = strdup_allocate(pcVar3);
        uVar5 = uVar6;
        puStack_e = allocate_memory(CONCAT22(in_stack_0000ffce,0x10));
        uStack_c = uVar6;
        if (uVar6 == 0x0 && puStack_e == NULL)
        {
          uVar11 = 0x0;
          uVar7 = 0x0;
        }
        else
        {
          uVar11 = (undefined2)((ulong)pcStack_16 >> 0x10);
          lVar13 = UI_Transaction_Item_Type6_ctor
                             ((long)CONCAT22(uVar6,puStack_e),
                              (ulong)*(uint *)((char *)pcStack_16 + 0xa),
                              (long)CONCAT22(uVar5,in_stack_0000ffce),
                              *(int *)((char *)pcStack_16 + 0x8));
          uVar7 = (undefined2)((ulong)lVar13 >> 0x10);
          uVar11 = (undefined2)lVar13;
        }
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),uVar11,uVar7,
                           in_stack_0000ffce,uVar5,uVar11);
      }
    }
  }
  uVar11 = (undefined2)((ulong)src_context >> 0x10);
  iVar4 = *(int *)((int)src_context + 0x40);
  iVar14 = (int)*(undefined4 *)((int)src_context + 0x3e);
  if (iVar4 != 0x0 || iVar14 != 0x0)
  {
    init_long_pair(local_26,CONCAT22(iVar4,iVar14));
    while( true )
    {
      lVar13 = get_next_list_item(local_26);
      uVar8 = (uint)((ulong)lVar13 >> 0x10);
      uVar6 = (uint)lVar13;
      uVar5 = uVar8 | uVar6;
      if (uVar5 == 0x0) break;
      if (*(int *)(uVar6 + 0x4) != 0x0)
      {
        pcVar3 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(*(u16 *)(uVar6 + 0x4));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        paStack_12 = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Subclass_ctor_4A92_Logic
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x4));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
        uVar5 = extraout_DX_01;
      }
      if (*(int *)(uVar6 + 0x6) != 0x0)
      {
        pcVar3 = Lookup_Entity_Category_Name_by_ID_Logic_c222(*(u16 *)(uVar6 + 0x6));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        puStack_e = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_c = uVar5;
        if (uVar5 == 0x0 && puStack_e == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Type5_ctor
                                      ((long)CONCAT22(uVar5,puStack_e),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x6));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
        uVar5 = extraout_DX_02;
      }
      if (*(int *)(uVar6 + 0x8) != 0x0)
      {
        pcVar3 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(*(u16 *)(uVar6 + 0x8));
        pcVar3 = strdup_allocate(pcVar3);
        uStack_1e = (char *)CONCAT22(uVar5,pcVar3);
        paStack_12 = allocate_memory(CONCAT22(iVar14,0x10));
        uStack_10 = uVar5;
        if (uVar5 == 0x0 && paStack_12 == NULL)
        {
          pcVar3 = NULL;
          uVar11 = 0x0;
        }
        else
        {
          pcVar12 = (char *)UI_Transaction_Item_Type6_ctor
                                      ((long)CONCAT22(uVar5,paStack_12),
                                       (ulong)*(uint *)(uVar6 + 0xa),(long)uStack_1e,
                                       *(int *)(uVar6 + 0x8));
          uVar11 = (undefined2)((ulong)pcVar12 >> 0x10);
          pcVar3 = (char *)pcVar12;
        }
        uStack_1a = (char *)CONCAT22(uVar11,pcVar3);
        puVar1 = (undefined2 *)((int)*uVar9->field14_0xe + 0x4);
        (*(code *)*puVar1)(0x1000,(u32 *)uVar9->field14_0xe,
                           (int)((ulong)uVar9->field14_0xe >> 0x10),pcVar3,uVar11);
      }
    }
  }
  return;
}



// An alternative scalar deleting destructor for base objects that uses
// heap_free_descriptor instead of free_if_not_null.

long __stdcall16far
Base_Object_dtor_Scalar_Deleting_Alternative(void *this_ref,byte flags)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)this_ref >> 0x10);
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    heap_free_descriptor((void *)this_ref,bucket_index);
  }
  return (long)this_ref;
}



void * __stdcall16far
Build_Site_List_Item_dtor_Scalar_Deleting_56a8(void *param_1,byte param_2)
{
  Build_Site_List_Item_dtor_Internal((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a UI manager specifically handling building objects. Initializes base
// object and sets vtable.

long __stdcall16far UI_Building_Manager_ctor_init(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = (undefined *)&DAT_1050_5830;
  *(undefined2 *)((int)this + 0x2) = 0x1018;
  return (long)CONCAT22(segment,this);
}



// Internal destructor for the UI Building Manager. Calls base destructor.

void __stdcall16far UI_Building_Manager_dtor_Internal(long this_ref)
{
  *(undefined **)this_ref = (undefined *)&DAT_1050_5830;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  Base_Object_dtor_2014_Logic((void *)this_ref);
  return;
}



// Wraps a call to retrieve the ID of the currently selected building from a list or UI
// component.

long __stdcall16far Build_Site_Get_Selected_Building_ID_Logic(long context)
{
  void *pvVar1;
  void *in_stack_00000008;
  
  pvVar1 = UI_Component_Get_Vector_Tracker_Ptr_6d4e(in_stack_00000008);
  return (long)pvVar1;
}



// Iterates through a component's internal state to determine if any elements are
// active/visible, and updates visibility status accordingly.

void __stdcall16far UI_Component_Update_Visibility_Logic(long src_comp,long dest_comp)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  bool bVar3;
  long lVar4;
  void *in_stack_0000000c;
  ulong uStack_10;
  ulong uStack_c;
  
  bVar3 = false;
  puVar1 = (undefined4 *)*(undefined4 *)((int)dest_comp + 0x4);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x10);
  uStack_c = (*(code *)*puVar2)();
  uStack_10 = 0x0;
  do
  {
    if (uStack_c <= uStack_10)
    {
LAB_1018_579f:
      if (!bVar3)
      {
        if (dest_comp != 0x0)
        {
          (*(code *)*(undefined2 *)*(undefined2 **)dest_comp)();
        }
        dest_comp = 0x0;
      }
      UI_Component_Set_Vector_Tracker_Ptr_6d80(in_stack_0000000c,(void *)dest_comp);
      return;
    }
    puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
    lVar4 = (*(code *)*puVar2)();
    if (lVar4 != 0x0)
    {
      bVar3 = true;
      goto LAB_1018_579f;
    }
    uStack_10 += 0x1;
  } while( true );
}



// Sets a far pointer to the currently active building object within the manager.

void __stdcall16far UI_Building_Manager_Set_Active_Object_Ptr(long context,long obj_ptr)
{
  *(long *)((int)context + 0xa) = obj_ptr;
  return;
}



// Releases the active building object, performing cleanup through an external call and
// clearing the internal pointer.

void __stdcall16far
UI_Building_Manager_Release_Active_Object(long context,long selection_ref)
{
  astruct_496 *paVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  paVar1 = (astruct_496 *)*(undefined4 *)((int)context + 0xa);
  UI_SubDialog_TypeD8C4_On_Selection_Change_d20c
            ((astruct_496 *)paVar1,(void *)((ulong)paVar1 >> 0x10),(void *)selection_ref
            );
  *(undefined4 *)((int)context + 0xa) = 0x0;
  return;
}



// Scalar deleting destructor for the UI Building Manager.

long __stdcall16far UI_Building_Manager_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Building_Manager_dtor_Internal(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Allocation Panel. Initializes base UI component, sets vtable,
// and loads relevant resources (resource ID 0x27). Sets internal name to "Alloc".

void * __stdcall16far
UI_Allocation_Panel_ctor_init(astruct_428 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_428 *uVar1;
  void *pvVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)0x6),param_3);
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_428 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  uVar1->field236_0xf6 = 0x0;
  *(char **)param_1 = (char *)s_Alloc__s_1050_5a5b + 0x7;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x5afe;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x27);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return pvVar3;
}



// Sets the Allocation Panel's vtable and initializes its internal state by calling a
// secondary initialization function.

void __stdcall16far UI_Allocation_Panel_Initialize_Vtable_and_Globals(long this_ref)
{
  astruct_427 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_427 *)this_ref;
  *(char **)this_ref = (char *)s_Alloc__s_1050_5a5b + 0x7;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x5afe;
  uVar1->field226_0xe4 = 0x1018;
  UI_Panel_Base_dtor_Internal_Cleanup_logic_808e((void *)this_ref);
  return;
}



// Handles WM_TIMER messages for the Allocation Panel. Increments a tick counter and
// posts a completion message (0xCA) to the main window if a threshold is reached.

void __stdcall16far
UI_Allocation_Panel_OnTimer_Tick_Handler_Logic(long this_ref,int timer_id)
{
  astruct_426 *uVar1;
  undefined2 uVar2;
  HWND16 in_stack_0000fff6;
  
  if (timer_id == 0x105)
  {
    uVar2 = (undefined2)((ulong)this_ref >> 0x10);
    uVar1 = (astruct_426 *)this_ref;
    uVar1->field244_0xf6 = uVar1->field244_0xf6 + 0x1;
    if ((int)PTR_p_LastAllocatedBlock_1050_4240 <= uVar1->field244_0xf6)
    {
      PostMessage16(0x0,0x0,0xca,(long)CONCAT22(in_stack_0000fff6,g_ParentHWND));
      return;
    }
    uVar1->field233_0xea = 0x0;
    InvalidateRect16(0x0,(void *)((ulong)uVar1->field8_0x8 << 0x10),in_stack_0000fff6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Allocation Panel's state and triggers a repaint of its specific UI
// rectangle if it hasn't been recently updated. Calls virtual functions to sync
// internal data.

int __stdcall16far UI_Allocation_Panel_Update_and_Invalidate_Rect_Logic(long context)
{
  undefined2 *puVar1;
  void *pvVar2;
  astruct_425 *uVar3;
  undefined2 uVar4;
  void *pvVar5;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_425 *)context;
  pvVar2 = NULL;
  if (*(int *)((int)&uVar3->field236_0xee + 0x2) != 0x0 ||
      *(int *)&uVar3->field236_0xee != 0x0)
  {
    puVar1 = (undefined2 *)((int)*uVar3->field236_0xee + 0x8);
    pvVar2 = (void *)(*(code *)*puVar1)();
  }
  if (uVar3->field233_0xea == 0x0)
  {
    uVar3->field233_0xea = 0x1;
    pvVar5 = UI_SubDialog_Factory_Create_and_Show_by_ID_af40
                       (_p_UISubDialogTable,uVar3->field8_0x8,
                        *(int *)(uVar3->field241_0xf6 * 0x2 + 0x4238));
    pvVar2 = (void *)pvVar5;
  }
  return (int)pvVar2;
}



void __stdcall16far
UI_Build_Site_Window_Initialize_and_Create_Sprite_598c(void *param_1)
{
  void *pvVar1;
  int in_DX;
  long lVar2;
  void *this;
  undefined2 uVar3;
  int in_stack_0000fffa;
  u16 local_4;
  
  this = (void *)param_1;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Element_Create_Window_Logic(this);
  Build_Site_Object_Set_Window_and_DC
            (*(long *)((int)this + 0xf2),*(HWND16 *)((int)this + 0x8));
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x2a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    lVar2 = UI_Sprite_Component_ctor_init_logic
                      ((long)CONCAT22(in_DX,pvVar1),*(int *)((int)this + 0x8),
                       in_stack_0000fffa);
    *(undefined2 *)((int)this + 0xee) = (int)lVar2;
    *(undefined2 *)((int)this + 0xf0) = (int)((ulong)lVar2 >> 0x10);
    return;
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  return;
}



void __stdcall16far UI_Build_Site_Window_Cleanup_and_Destroy_59f0(void *param_1)
{
  undefined2 *puVar1;
  void *this;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(int *)((int)this + 0xf0) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xee) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xee);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0xee) = 0x0;
  UI_Window_Destroy_Logic(this);
  return;
}



void * UI_Allocation_Panel_dtor_Wrapper_5a2e(u16 param_1,void *param_2,byte param_3)
{
  void *pvVar1;
  
  param_2 = (void *)CONCAT22(param_2._2_2_,(void *)((int)(void *)param_2 + -0xe2));
  pvVar1 = UI_Allocation_Panel_dtor_Scalar_Deleting_5a3c(param_2,param_3);
  return pvVar1;
}



void * __stdcall16far
UI_Allocation_Panel_dtor_Scalar_Deleting_5a3c(void *param_1,byte param_2)
{
  UI_Allocation_Panel_Initialize_Vtable_and_Globals((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI Sprite Component. Initializes its vtable, loads relevant
// resources (ID 0x27 and 0x48), creates an internal Sprite object, and captures its
// initial graphics from a bitmap.

long __stdcall16far
UI_Sprite_Component_ctor_init_logic(long this_ref,int segment,int id)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 uVar6;
  int *piVar7;
  int *y;
  uint uVar8;
  undefined4 *puVar9;
  void *unaff_SS;
  long lVar10;
  undefined2 uVar11;
  undefined1 local_c [0x6];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,segment);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined4 *)((int)this_ref + 0x18) = 0x0;
  zero_init_struct_6bytes((void *)((int)this_ref + 0x1c));
  *(undefined ***)this_ref = (undefined **)&PTR_DAT_1050_0000_1050_5e1a;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uStack_4 = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_6 = (undefined2)lVar10;
  zero_init_struct_6bytes(local_c);
  copy_struct_6bytes(local_c,unaff_SS);
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x27);
  uVar6 = (undefined2)((ulong)lVar10 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar10;
  *(undefined2 *)((int)this_ref + 0x16) = uVar6;
  uVar11 = 0x0;
  uVar3 = *(undefined2 *)((int)this_ref + 0x14);
  puVar2 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x14) + 0x4);
  lVar10 = this_ref;
  (*(code *)*puVar2)();
  *(undefined4 *)((int)this_ref + 0x6) = *(undefined4 *)((int)this_ref + 0x14);
  puVar1 = (undefined4 *)
           *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa);
  puVar9 = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar3 = (*(code *)*puVar2)(0x1010,puVar9,(int)((ulong)puVar1 >> 0x10),
                             CONCAT22(this_ref._2_2_,(int)this_ref + 0xa),uVar3,uVar6,
                             uVar11,lVar10);
  *(undefined2 *)((int)this_ref + 0x12) = uVar3;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  copy_struct_6bytes((void *)((int)this_ref + 0x1c),this_ref._2_2_);
  piVar7 = this_ref._2_2_;
  add_3int_vectors((int *)((int)this_ref + 0x1c),this_ref._2_2_);
  pvVar4 = UI_Manager_Get_Resource_Ptr_at_Index
                     ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  pvVar4 = get_with_lazy_init(pvVar4);
  y = piVar7;
  pvVar5 = allocate_memory(CONCAT22(puVar9,0x14));
  uVar8 = (uint)y | (uint)pvVar5;
  if (uVar8 == 0x0)
  {
    *(undefined4 *)((int)this_ref + 0x18) = 0x0;
  }
  else
  {
    pvVar5 = Sprite_Object_init_logic
                       (pvVar5,(int)y,(int)*(undefined4 *)((int)pvVar4 + 0x8),
                        (void *)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10),
                        (int)*(undefined4 *)((int)pvVar4 + 0x4));
    *(undefined2 *)((int)this_ref + 0x18) = pvVar5;
    *(uint *)((int)this_ref + 0x1a) = uVar8;
  }
  Sprite_Object_Capture_From_Bitmap
            ((void *)(void *)*(undefined4 *)((int)this_ref + 0x18));
  *(undefined2 *)((int)this_ref + 0x22) = *(undefined2 *)((int)this_ref + 0x1c);
  *(undefined2 *)((int)this_ref + 0x24) = *(undefined2 *)((int)this_ref + 0x1e);
  *(int *)((int)this_ref + 0x26) =
       *(int *)((int)pvVar4 + 0x4) + *(int *)((int)this_ref + 0x22) + 0x1;
  *(int *)((int)this_ref + 0x28) =
       *(int *)((int)pvVar4 + 0x8) + *(int *)((int)this_ref + 0x24) + 0x1;
  return this_ref;
}



// Internal destructor for the UI Sprite Component. Frees internal sprite buffers and
// removes itself from any parent containers. Reverts vtable pointers.

void __stdcall16far UI_Sprite_Component_dtor_Internal_Cleanup_logic(long this_ref)
{
  void *this;
  astruct_424 *uVar3;
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_424 *)this_ref;
  *(undefined ***)this_ref = (undefined **)&PTR_DAT_1050_0000_1050_5e1a;
  uVar3->field2_0x2 = 0x1018;
  this = (void *)*(void **)&uVar3->field_0x18;
  if (uVar3->field22_0x1a != 0x0 || this != NULL)
  {
    Sprite_Object_free_internal_buffer(this);
    free_if_not_null(this);
  }
  if (uVar3->field19_0x14 != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)uVar3->field19_0x14,this_ref);
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar3->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



void __stdcall16far
UI_Control_Handle_State_Reset_and_Invalidate_5d32(u32 param_1,int param_2)
{
  HWND16 unaff_BP;
  void *pvVar1;
  
  pvVar1 = (void *)(param_1 >> 0x10);
  if (param_2 == 0x1)
  {
    *(undefined4 *)((int)param_1 + 0x14) = 0x0;
    return;
  }
  if (param_2 != 0x2)
  {
    return;
  }
  InvalidateRect16(0x0,(void *)CONCAT22(*(undefined2 *)((int)param_1 + 0x4),pvVar1),
                   unaff_BP);
  return;
}



void __stdcall16far UI_Sprite_Component_OnPaint_Logic_5d6c(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  void *pos;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  iVar3 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x14) + 0xa);
  UI_Manager_Get_Resource_Ptr_at_Index((void *)(void *)*(undefined4 *)(iVar3 + 0x14));
  Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar3 + 0x18));
  pos = (void *)((ulong)puVar1 >> 0x10);
  Bitmap_Object_Blit_Transparent_Logic((undefined4 *)puVar1,pos,(void *)(iVar3 + 0x1c));
  puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
  (*(code *)*puVar2)(0x1008,(undefined4 *)puVar1,pos,0x0,CONCAT22(uVar4,iVar3 + 0xa));
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



// Scalar deleting destructor for the UI Sprite Component. Calls internal destructor and
// optionally frees object memory.

long __stdcall16far
UI_Sprite_Component_dtor_Scalar_Deleting_logic(long this_ref,byte flags)
{
  UI_Sprite_Component_dtor_Internal_Cleanup_logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// Constructor for a manager that coordinates multiple allocation tabs. Initializes base
// object and sets vtable for tab management logic.

long __stdcall16far UI_Allocation_Tab_Manager_ctor_init_logic(long this_ref,int id)
{
  undefined2 uVar1;
  
  UI_SubDialog_Base_ctor_init_7728(this_ref,0x1,0xfd00000,id);
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(undefined2 *)this_ref = 0x6128;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  *(undefined2 *)((int)this_ref + 0x74) = 0x1;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Internal destructor for the Allocation Tab Manager. Performs specific cleanup and
// calls the base destructor.

void __stdcall16far UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic(long this_ref)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ref = 0x6128;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ref);
  return;
}



// A thin wrapper that invokes a virtual function at offset 0x6C on the Allocation Tab
// Manager object. Likely an update or event trigger.

void __stdcall16far UI_Allocation_Tab_Manager_vcall_6C_Logic_Wrapper(long this_ref)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*(undefined4 *)this_ref + 0x6c);
  (*(code *)*puVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Initialize_Slider_and_Entity_Labels_5e9a(void *param_1)
{
  undefined4 *puVar1;
  void *pvVar2;
  int16_t iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long lVar6;
  void *pvVar7;
  void *this_ptr;
  undefined2 uVar8;
  undefined2 in_stack_0000ffb2;
  u16 local_36;
  u16 local_34;
  u16 local_32;
  u32 local_30;
  u32 local_2c;
  u16 local_28;
  u16 local_26;
  u16 local_16;
  u16 local_14;
  u16 local_12;
  u16 local_10;
  undefined1 local_e [0x6];
  u16 local_8;
  u32 local_6;
  
  this_ptr = (void *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  iVar4 = (int)((ulong)lVar6 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar6;
  *(int *)((int)this_ptr + 0x90) = iVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffb2,0x12));
  if (iVar4 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  }
  else
  {
    lVar6 = UI_Slider_Component_ctor_init_resource_39
                      ((long)CONCAT22(iVar4,pvVar2),(long)param_1,
                       *(int *)((int)this_ptr + 0x6));
    *(undefined2 *)((int)this_ptr + 0x92) = (int)lVar6;
    *(undefined2 *)((int)this_ptr + 0x94) = (int)((ulong)lVar6 >> 0x10);
  }
  local_6 = CONCAT22((int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (int)*(undefined4 *)((int)this_ptr + 0x8e) + 0xa);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_e),
                  *(HWND16 *)((int)this_ptr + 0x6));
  iVar3 = GetSystemMetrics16(0x4);
  *(int *)((int)local_6 + 0x6) = iVar3 + local_8;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  local_14 = (u16)((ulong)lVar6 >> 0x10);
  local_16 = (u16)lVar6;
  local_10 = *(u16 *)(local_16 + 0xa);
  local_12 = *(u16 *)(local_16 + 0xc);
  uVar5 = (undefined2)(local_6 >> 0x10);
  *(int *)((int)local_6 + 0x2) = (int)(local_12 - *(int *)((int)local_6 + 0x6)) / 0x2;
  *(int *)local_6 = (int)local_10 / 0x2 + 0x3;
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_28),0x1,0x0,0x100);
  while( true )
  {
    pvVar7 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_28));
    iVar4 = (int)((ulong)pvVar7 >> 0x10);
    if (iVar4 == 0x0 && (int)pvVar7 == 0x0) break;
    puVar1 = (undefined4 *)*(long *)((int)pvVar7 + 0x10);
    if (puVar1 != NULL)
    {
      strcat_append((char *)CONCAT22(uVar8,(char *)((int)this_ptr + 0x10)),
                    (char *)*puVar1);
    }
  }
  uVar5 = (undefined2)(local_6 >> 0x10);
  iVar4 = (int)local_6;
  SetWindowPos16(0x44,*(int16_t *)(iVar4 + 0x6),*(int16_t *)(iVar4 + 0x4),
                 *(int16_t *)(iVar4 + 0x2),*(int16_t *)local_6,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Cleans up a UI component by calling the destructor of its internal bitmap object and
// releasing the associated resource ID.

void __stdcall16far
UI_Component_Release_Internal_Bitmap_and_Resource_Logic(long context)
{
  undefined2 *puVar1;
  astruct_423 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  uVar2 = (astruct_423 *)context;
  if (uVar2->field144_0x94 != 0x0 || uVar2->field143_0x92 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field143_0x92;
    (*(code *)*puVar1)();
  }
  (&uVar2->field143_0x92)[0x0] = NULL;
  (&uVar2->field143_0x92)[0x1] = NULL;
  Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar2->field142_0x8e);
  uVar2->field142_0x8e = 0x0;
  return;
}



// Retrieves the palette from an internal bitmap object (offset 0x92) via a virtual
// function call at offset +8. Used to synchronize UI colors with loaded assets.

int __stdcall16far
UI_Component_Update_Palette_from_Internal_Bitmap_vcall_8(long context)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)context + 0x92) + 0x8);
  (*(code *)*puVar1)();
  return 0x0;
}



// Retrieves a dialog control handle using an ID stored in the component struct (offset
// 0x6) and sets its window text using the provided string.

void __stdcall16far
UI_Dialog_Set_Control_Text_from_Struct_ID(long context,char *text,HWND16 parent_hwnd)
{
  HWND16 hwnd;
  HWND16 in_stack_0000000c;
  
  hwnd = GetDlgItem16(in_stack_0000000c,*(short *)((int)context + 0x6));
  SetWindowText16(_text,hwnd);
  return;
}



// Formats numeric values into strings and updates dialog controls 0x1BE and 0x1BF with
// the results. Likely used for displaying current/max values on a slider or resource
// bar.

void __stdcall16far
UI_Dialog_Format_and_Set_Slider_Values(long context,int value1,int value2)
{
  HWND16 HVar1;
  undefined2 uVar2;
  undefined2 unaff_SS;
  undefined1 *puVar3;
  undefined4 in_stack_0000fff2;
  
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),s__d_1050_4242,
              (void *)CONCAT22((int)((ulong)in_stack_0000fff2 >> 0x10),value2));
  uVar2 = (undefined2)((ulong)context >> 0x10);
  HVar1 = GetDlgItem16(0x1be,*(short *)((int)context + 0x6));
  puVar3 = &stack0xfff4;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar3),HVar1);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),s__d_1050_4245,
              (void *)CONCAT22(puVar3,value1));
  HVar1 = GetDlgItem16(0x1bf,*(short *)((int)context + 0x6));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,&stack0xfff4),HVar1);
  return;
}



void __stdcall16far void_noop_stub_1018_60ea(void)
{
  return;
}



u16 __stdcall16far const_0_stub_1018_60ee(void)
{
  return 0x0;
}



u16 __stdcall16far const_0_stub_1018_60f4(void)
{
  return 0x0;
}



void __stdcall16far void_noop_stub_1018_60fa(void)
{
  return;
}



void __stdcall16far void_noop_stub_1018_60fe(void)
{
  return;
}



void * __stdcall16far
UI_Allocation_Tab_Manager_dtor_Scalar_Deleting_6102(void *param_1,byte param_2)
{
  UI_Allocation_Tab_Manager_dtor_Internal_Cleanup_logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the UI Slider component. Loads resource ID 0x39 (the slider bar/thumb
// graphics) and initializes base UI object vtables.

long __stdcall16far
UI_Slider_Component_ctor_init_resource_39(long this_ref,long parent,int id)
{
  astruct_422 *uVar1;
  undefined2 uVar2;
  long lVar3;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_422 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ref = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = id;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  (&uVar1->field4_0x6)[0x0] = 0x0;
  (&uVar1->field4_0x6)[0x1] = 0x0;
  uVar1->field6_0xa = (void *)parent;
  *(undefined2 *)this_ref = 0x66c0;
  uVar1->field2_0x2 = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar1->field4_0x6 = (uint16_t)lVar3;
  uVar1->field5_0x8 = (uint16_t)((ulong)lVar3 >> 0x10);
  return this_ref;
}



// Internal destructor for the UI Slider component. Reverts vtable pointers as it tears
// down the inheritance chain.

void __stdcall16far UI_Slider_Component_dtor_Internal_vtable_revert(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(undefined2 *)this_ref = 0x66c0;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(char **)this_ref = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1008;
  return;
}
