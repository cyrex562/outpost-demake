/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 11/54
 * Original lines (combined): 44189-48602
 * Boundaries: top-level declarations/definitions only
 */




// Performs a point-in-rect check against all entity summary regions in the active
// navigation view. On a hit, it triggers an entity-specific selection or action.

int __stdcall16far
UI_Navigation_Manager_HitTest_Entities_Logic(long this_ref,int y,int x)
{
  int iVar1;
  BOOL16 BVar2;
  int *out1;
  void *src;
  undefined2 unaff_SS;
  int iStack_1a;
  POINT16 PStack_18;
  int local_14;
  int local_12;
  int iStack_10;
  undefined4 uStack_e;
  int local_a;
  int local_8;
  int iStack_6;
  int iStack_4;
  
  uStack_e = NULL;
  iVar1 = (int)this_ref;
  out1 = (int *)((ulong)this_ref >> 0x10);
  unpack_word_pair((void *)(iVar1 + 0x3a),out1,&local_14);
  PStack_18.y = y;
  PStack_18.x = x;
  iStack_10 = 0x0;
  iStack_1a = 0x0;
  while( true )
  {
    if (*(int *)(iVar1 + 0x44) <= iStack_1a)
    {
      return iStack_10;
    }
    src = (void *)(*(int *)(iVar1 + 0x40) + iStack_1a * 0x18);
    uStack_e = (void *)CONCAT22((int *)*(undefined2 *)(iVar1 + 0x42),src);
    unpack_word_pair(src,(int *)*(undefined2 *)(iVar1 + 0x42),&local_8);
    local_a += local_12 + -0x6;
    iStack_6 = local_a + 0xc;
    local_8 += local_14 + -0x6;
    iStack_4 = local_8 + 0xc;
    BVar2 = PtInRect(PStack_18,(int *)CONCAT22(unaff_SS,&local_a));
    if (BVar2 != 0x0) break;
    iStack_1a += 0x1;
  }
  UI_Navigation_Manager_Set_Active_Selection_Logic(this_ref,(long)uStack_e);
  return 0x1;
}



// Calculates required window dimensions based on system frame/caption metrics and
// internal content size.

void __stdcall16far UI_Navigation_Manager_Calculate_Window_Metrics_Logic(long context)
{
  int16_t iVar1;
  int16_t iVar2;
  astruct_470 *uVar3;
  undefined2 uVar4;
  
  iVar1 = GetSystemMetrics16(0x5);
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_470 *)context;
  uVar3->field46_0x2e = iVar1 * 0x2 + uVar3->field52_0x36;
  iVar1 = GetSystemMetrics16(0x4);
  iVar2 = GetSystemMetrics16(0x6);
  uVar3->field47_0x30 = iVar1 + uVar3->field53_0x38 + iVar2;
  return;
}



long UI_Navigation_Manager_dtor_Wrapper_1f6a(u16 param_1,long param_2,byte param_3)
{
  long lVar1;
  
  param_2 = CONCAT22(param_2._2_2_,(int)param_2 + -0x20);
  lVar1 = UI_Navigation_Manager_scalar_dtor_1FB0(param_2,param_3);
  return lVar1;
}



u32 __stdcall16far
UI_Navigation_Manager_Get_Property_at_2A_1f7a(int param_1,u16 param_2)
{
  return CONCAT22(param_2,param_1 + 0x2a);
}



long __stdcall16far UI_Navigation_Manager_scalar_dtor_1FB0(long this_ref,byte flags)
{
  UI_Navigation_Manager_dtor_1FB0_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



void __stdcall16far UI_Report_Grid_Manager_dtor_21E8_Logic(long this_ref)
{
  *(char **)this_ref = (char *)s_556a_bmp_1050_21e5 + 0x3;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  UI_Report_Grid_Manager_Cleanup_Collection_Logic(this_ref);
  Base_Object_dtor_2014_Logic((void *)this_ref);
  return;
}



// Iterates through the 509-slot object array in the report grid and invokes the virtual
// destructor for every active object entry.

void __stdcall16far UI_Report_Grid_Manager_Cleanup_Collection_Logic(long this_ref)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    uVar4 = (undefined2)((ulong)this_ref >> 0x10);
    iVar3 = (int)this_ref + 0x12;
    puVar1 = (undefined4 *)*(int *)(iVar3 + iStack_4 * 0x4);
    iVar3 = *(int *)(iVar3 + iStack_4 * 0x4 + 0x2);
    if (iVar3 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    *(undefined4 *)((int)this_ref + iStack_4 * 0x4 + 0x12) = 0x0;
    iStack_4 += 0x1;
  } while (iStack_4 < 0x1fd);
  return;
}



void __stdcall16far UI_Pack_Words_from_Table_3E8E_Logic(long dest_ref,int index)
{
  int in_stack_0000000a;
  int in_stack_0000000c;
  
  pack_3words_reverse((void *)index,in_stack_0000000a,0x0,
                      *(int *)(in_stack_0000000c * 0x4 + 0x3e90));
  return;
}



long __stdcall16far UI_Report_Grid_Manager_scalar_dtor_21E8(long this_ref,byte flags)
{
  UI_Report_Grid_Manager_dtor_21E8_Logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



void __cdecl16far UI_Coordinate_Table_Batch_Initialize_21f8(void)
{
  pack_3words_alt((void *)0x4210,0x1048,0x0,0x195);
  pack_3words_alt((void *)0x65ca,0x1050,0x0,0xe0);
  pack_3words_alt((void *)0x65d0,0x1050,0x0,0x17a);
  pack_3words_alt((void *)0x65d6,0x1050,0x0,0xde);
  pack_3words_alt((void *)0x65dc,0x1050,0x0,0x177);
  pack_3words_alt((u16 *)&u16_1050_4216,0x1048,0x0,0x195);
  pack_3words_alt((void **)&PTR_s___1050_41da_1050_421c,0x1048,0x0,0x1b6);
  pack_3words_alt((void *)((int)(void **)&PTR_s_A_1050_4202_1050_4220 + 0x2),0x1048,0x0,
                  0x109);
  pack_3words_alt((void **)&PTR_DAT_1050_41aa_1050_4228,0x1048,0x0,0xfd);
  return;
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



void __stdcall16far UI_Trade_Manager_Clear_Transaction_Logic_Wrapper(long context)
{
  UI_Trade_Manager_Randomized_Market_Fluctuation_Logic(context);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Prepares and submits a trade transaction to the simulator. It identifies the
// transaction type (0-5), constructs the command structure (using FUN_1018_4790-4920),
// and dispatches it to global resource 0x5748.

void __stdcall16far UI_Trade_Manager_Submit_Transaction_Logic(astruct_451 *param_1)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  astruct_451 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  long lVar7;
  undefined2 in_stack_0000fece;
  u16 local_12a [0x8c];
  u32 uStack_12;
  undefined2 uStack_e;
  undefined2 uStack_c;
  void *pvStack_a;
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_451 *)param_1;
  pvStack_a = (void *)UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                                (uVar5,uVar6,uVar5->field293_0x12e);
  iVar4 = (int)((ulong)pvStack_a >> 0x10);
  pvVar2 = (void *)pvStack_a;
  iVar3 = uVar5->field293_0x12e - 0x188;
  uStack_12 = CONCAT22(iVar4,iVar3);
  switch(iVar3)
  {
  case 0x0:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar4 = (int)((ulong)lVar7 >> 0x10);
    iVar3 = iVar4;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x10));
    if (iVar3 == 0x0 && pvVar2 == NULL)
    {
LAB_1018_37e0:
      uStack_12 = 0x0;
    }
    else
    {
      uStack_12 = UI_Transaction_Item_Subclass_ctor_4A92_Logic
                            ((long)CONCAT22(iVar3,pvVar2),(long)uVar5->field295_0x132,
                             0x0,*(int *)((int)lVar7 + 0xe));
    }
    break;
  case 0x1:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar3 = (int)((ulong)lVar7 >> 0x10);
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x14));
    if (iVar3 == 0x0 && pvVar2 == NULL) goto LAB_1018_37e0;
    uStack_12 = UI_Transaction_Item_Type2_ctor();
    break;
  case 0x2:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar4 = (int)((ulong)lVar7 >> 0x10);
    iVar3 = iVar4;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x12));
    if (iVar3 == 0x0 && pvVar2 == NULL) goto LAB_1018_37e0;
    uStack_12 = UI_Transaction_Item_Type3_ctor
                          ((long)CONCAT22(iVar3,pvVar2),(long)uVar5->field295_0x132,0x0,
                           *(long *)((int)lVar7 + 0xe));
    break;
  case 0x3:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar4 = (int)((ulong)lVar7 >> 0x10);
    iVar3 = iVar4;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x14));
    if (iVar3 == 0x0 && pvVar2 == NULL) goto LAB_1018_37e0;
    uStack_12 = UI_Transaction_Item_Type4_ctor
                          ((long)CONCAT22(iVar3,pvVar2),(long)uVar5->field295_0x132,0x0,
                           *(int *)((int)lVar7 + 0xe));
    break;
  case 0x4:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar4 = (int)((ulong)lVar7 >> 0x10);
    iVar3 = iVar4;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x10));
    if (iVar3 == 0x0 && pvVar2 == NULL) goto LAB_1018_37e0;
    uStack_12 = UI_Transaction_Item_Type5_ctor
                          ((long)CONCAT22(iVar3,pvVar2),(long)uVar5->field295_0x132,0x0,
                           *(int *)((int)lVar7 + 0xe));
    break;
  case 0x5:
    lVar7 = list_get_item_at_index(pvVar2,iVar4);
    iVar4 = (int)((ulong)lVar7 >> 0x10);
    iVar3 = iVar4;
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fece,0x12));
    if (iVar3 == 0x0 && pvVar2 == NULL) goto LAB_1018_37e0;
    uStack_12 = UI_Transaction_Item_Type7_ctor
                          ((long)CONCAT22(iVar3,pvVar2),(long)uVar5->field295_0x132,0x0,
                           *(long *)((int)lVar7 + 0xe));
    break;
  default:
    goto switchD_1018_393f_default;
  }
  uStack_4 = (undefined2)(uStack_12 >> 0x10);
  uStack_6 = (undefined2)uStack_12;
switchD_1018_393f_default:
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar5->field290_0x122);
  uStack_c = (undefined2)(uStack_12 >> 0x10);
  uStack_e = (undefined2)uStack_12;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar5->field290_0x122);
  UI_Build_Item_Type309A_ctor_init_2a0e
            ((u16 *)CONCAT22(unaff_SS,local_12a),uVar5->field296_0x136,
             CONCAT22(uStack_4,uStack_6),uStack_12,CONCAT22(uStack_c,uStack_e));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(u16 *)CONCAT22(unaff_SS,local_12a));
  uVar5->field296_0x136 = 0x0;
  puVar1 = (undefined2 *)((int)*(undefined4 *)param_1 + 0x10);
  (*(code *)*puVar1)(0x1030,uVar5,uVar6);
  UI_Build_Item_Type309A_dtor_Internal_2a5c(local_12a);
  return;
}



void __stdcall16far
UI_Trade_Manager_Populate_Dual_Entity_Lists_Wrapper
          (long context,void **list1_out,void **list2_out)
{
  void *pvVar1;
  
  pvVar1 = (void *)*(undefined4 *)((int)context + 0x122);
  UI_Populate_Dual_Entity_Lists_Logic
            ((void *)pvVar1,(void **)((ulong)pvVar1 >> 0x10),list1_out);
  return;
}



void __stdcall16far
UI_Trade_Manager_Get_Default_Dialog_Metrics_Logic_maybe(int *width_out,int *height_out)
{
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_0000000c = 0x1;
  *in_stack_00000008 = 0x19;
  return;
}



void __stdcall16far UI_Element_Cleanup_and_Destroy_SubObject_136_3ea4(void *param_1)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 uVar3;
  void *this;
  
  this = (void *)param_1;
  UI_Element_Subclass_dtor_D71A_Logic(this);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  puVar1 = (undefined4 *)*(int *)((int)this + 0x136);
  iVar2 = *(int *)((int)this + 0x138);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1008,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0x136) = 0x0;
  return;
}



void * __stdcall16far
UI_Trade_Manager_dtor_Scalar_Deleting_46e6(void *param_1,byte param_2)
{
  UI_Trade_Manager_dtor_470C_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a specialized transaction UI element (vtable 0x4A92). It calls the
// base constructor and sets a specific type code at offset 0xE.

long __stdcall16far
UI_Transaction_Item_Subclass_ctor_4A92_Logic
          (long this_ref,long data1,long data2,int type)
{
  astruct_443 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_443 *)this_ref;
  uVar1->field12_0xe = type;
  *(undefined2 *)this_ref = 0x4a92;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x1;
  return this_ref;
}



// Constructor for UI Transaction Item Type 2. Initializes base class and sets
// type-specific fields (0xE, 0x12).

long __stdcall16far
UI_Transaction_Item_Type2_ctor
          (astruct_442 *param_1,long param_2,long param_3,u16 param_4,void *param_5)
{
  astruct_442 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic((long)param_1,param_2,param_3);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_442 *)param_1;
  uVar1->field12_0xe = param_5;
  uVar1->field13_0x12 = param_4;
  *(undefined2 *)param_1 = 0x4a9a;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x2;
  return (long)param_1;
}



// Constructor for UI Transaction Item Type 3. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type3_ctor(long this_ref,long data1,long data2,long entity_ref)
{
  astruct_441 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_441 *)this_ref;
  uVar1->field12_0xe = (void *)entity_ref;
  *(undefined2 *)this_ref = 0x4aa2;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x3;
  return this_ref;
}



// Constructor for UI Transaction Item Type 4. Initializes base class and sets field 0xE
// and 0x10.

long __stdcall16far
UI_Transaction_Item_Type4_ctor(long this_ref,long data1,long data2,int id)
{
  astruct_440 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_440 *)this_ref;
  uVar1->field12_0xe = id;
  uVar1->field13_0x10 = 0x0;
  *(undefined2 *)this_ref = 0x4a8e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x4;
  return this_ref;
}



// Constructor for UI Transaction Item Type 5. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type5_ctor(long this_ref,long data1,long data2,int id)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(int *)(iVar1 + 0xe) = id;
  *(undefined2 *)this_ref = 0x4a96;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(undefined2 *)(iVar1 + 0xc) = 0x5;
  return this_ref;
}



// Constructor for UI Transaction Item Type 6. Initializes base class and sets field
// 0xE.

long __stdcall16far
UI_Transaction_Item_Type6_ctor(long this_ref,long data1,long data2,int type)
{
  astruct_439 *uVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_439 *)this_ref;
  uVar1->field12_0xe = type;
  *(undefined2 *)this_ref = 0x4a9e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field11_0xc = 0x6;
  return this_ref;
}



// Constructor for UI Transaction Item Type 7. Initializes base class and sets field 0xE
// (far pointer).

long __stdcall16far
UI_Transaction_Item_Type7_ctor(long this_ref,long data1,long data2,long ptr)
{
  int iVar1;
  undefined2 uVar2;
  
  UI_Transaction_Item_Base_ctor_4AA6_Logic(this_ref,data1,data2);
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(long *)(iVar1 + 0xe) = ptr;
  *(undefined2 *)this_ref = 0x4a8a;
  *(undefined2 *)(iVar1 + 0x2) = 0x1018;
  *(undefined2 *)(iVar1 + 0xc) = 0x7;
  return this_ref;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_495a(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_4980(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Transaction_Item_Base_dtor_Scalar_Deleting_4a18(void *param_1,byte param_2)
{
  UI_Transaction_Item_Base_dtor_4AA6_Logic((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a UI-related object that initializes system metrics (SM_CXBORDER,
// SM_CYBORDER, etc.) into global variables if not already set.

long __stdcall16far UI_Metric_Manager_Object_ctor_init(long this_ref,int arg2,int id)
{
  astruct_438 *uVar1;
  void *this;
  int id_00;
  
  this = (void *)this_ref;
  id_00 = (int)((ulong)this_ref >> 0x10);
  Base_Object_ctor_init_2014_Logic(this,id_00);
  *(int *)((int)this + 0x12) = arg2;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0x4c9e;
  *(undefined2 *)((int)this + 0x2) = 0x1018;
  if (PTR_DAT_1050_0000_1050_416c == NULL)
  {
    PTR_DAT_1050_0000_1050_416c = (undefined *)GetSystemMetrics16(0x4);
    PTR_DAT_1050_0000_1050_416e = (undefined *)GetSystemMetrics16(0x5);
    PTR_DAT_1050_0000_1050_4170 = (undefined *)GetSystemMetrics16(0x6);
  }
  return this_ref;
}



// Sets the HWND for the Build Site object and retrieves its Device Context (HDC).

void __stdcall16far Build_Site_Object_Set_Window_and_DC(long this_ref,HWND16 hwnd)
{
  HDC16 HVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  *(HWND16 *)((int)this_ref + 0x16) = hwnd;
  HVar1 = GetDC16(hwnd);
  *(HDC16 *)((int)this_ref + 0x14) = HVar1;
  return;
}



void __stdcall16far UI_Object_Destroy_SubObject_at_0E_51d2(undefined4 param_1)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  if (*(int *)(iVar2 + 0x10) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0xe);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0xe) = 0x0;
  return;
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
