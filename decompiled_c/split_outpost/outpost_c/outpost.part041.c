/*
 * Source: outpost.c
 * Chunk: 41/117
 * Original lines: 46024-47212
 * Boundaries: top-level declarations/definitions only
 */




// Destructor for the Trade Manager. Frees allocated transaction strings and calls the
// base destructor.

void __stdcall16far UI_Trade_Manager_dtor_470C_Logic(long this_ref)
{
  undefined2 *puVar1;
  astruct_454 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  uVar2 = (astruct_454 *)this_ref;
  *(undefined2 *)this_ref = 0x470c;
  uVar2->field2_0x2 = 0x1018;
  if (uVar2->field304_0x138 != 0x0 || uVar2->field303_0x136 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field303_0x136;
    (*(code *)*puVar1)();
  }
  (&uVar2->field303_0x136)[0x0] = NULL;
  (&uVar2->field303_0x136)[0x1] = NULL;
  free_if_not_null((void *)uVar2->field293_0x126);
  free_if_not_null((void *)uVar2->field294_0x12a);
  UI_Element_Subclass_dtor_D71A_Wrapper(uVar2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if a trade route between two entities is possible by comparing their
// simulation categories (magic types) via the relationship manager.

int __stdcall16far UI_Trade_Manager_Check_Route_Validity_Logic(astruct_453 *param_1)
{
  void *in_AX;
  undefined2 in_DX;
  astruct_453 *uVar1;
  undefined2 uVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_453 *)param_1;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar1->field290_0x122);
  uStack_6 = (void *)CONCAT22(in_DX,in_AX);
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar1->field290_0x122);
  uStack_a = (void *)CONCAT22(in_DX,in_AX);
  pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),uStack_6);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),uStack_a);
  if (*(long *)((int)pvVar4 + 0x200) == *(long *)((int)pvVar3 + 0x200))
  {
    return 0x1;
  }
  return 0x0;
}



void __stdcall16far UI_Trade_Manager_Clear_Transaction_Logic_Wrapper(long context)
{
  UI_Trade_Manager_Randomized_Market_Fluctuation_Logic(context);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Formats a human-readable status string for a trade transaction (e.g. "%ld units of
// %s"). Based on the resource ID (0x188, 0x18B, 0x18C), it selects different templates
// and performs variable substitution.

char * __stdcall16far UI_Trade_Manager_Format_Status_String_Logic(long context)
{
  int iVar1;
  int index;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  long lVar5;
  char *LPCSTR_spec;
  void *pvVar6;
  undefined2 uVar7;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  pvVar4 = (void *)UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                             (context,*(undefined2 *)(iVar2 + 0x12e));
  index = (int)((ulong)pvVar4 >> 0x10);
  pvVar6 = (void *)pvVar4;
  iVar1 = *(int *)(iVar2 + 0x12e);
  if (iVar1 == 0x188)
  {
    lVar5 = list_get_item_at_index(pvVar6,index);
    Lookup_Research_Category_Name_by_ID_Logic_c0d8(*(u16 *)((int)lVar5 + 0xe));
    pvVar6 = (void *)(void *)*(undefined4 *)(iVar2 + 0x132);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x132) >> 0x10);
    LPCSTR_spec = s__ld__s_1050_4150;
  }
  else if (iVar1 == 0x18b)
  {
    list_get_item_at_index(pvVar6,index);
    pvVar6 = (void *)(void *)*(undefined4 *)(iVar2 + 0x132);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x132) >> 0x10);
    LPCSTR_spec = s__ld__s_1050_415e;
  }
  else
  {
    if (iVar1 != 0x18c)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(iVar2 + 0x22,0x100),CONCAT22(0x424,uVar3));
      return (char *)(iVar2 + 0x22);
    }
    list_get_item_at_index(pvVar6,index);
    pvVar6 = (void *)(void *)*(undefined4 *)(iVar2 + 0x132);
    uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar2 + 0x132) >> 0x10);
    LPCSTR_spec = s__ld__s_1050_4157;
  }
  _wsprintf16((void *)CONCAT22(uVar3,(void *)(iVar2 + 0x22)),LPCSTR_spec,
              (void *)CONCAT22(uVar7,pvVar6));
  return (char *)(iVar2 + 0x22);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Main tick handler for the Trade UI. It manages randomized update intervals,
// recalculates quantities via `FUN_1018_427C`, and generates formatted status messages
// for the UI activity log.

char * __stdcall16far UI_Trade_Manager_Process_Tick_Updates_Logic(long context)
{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 uVar4;
  int *width_out;
  int *height_out;
  u32 uVar5;
  long lVar6;
  ulong uVar7;
  int local_12;
  undefined2 local_10;
  undefined4 uStack_e;
  
  uVar5 = Simulator_Global_Get_Current_Tick_8326();
  uVar3 = (uint)(uVar5 >> 0x10);
  height_out = (int *)((ulong)context >> 0x10);
  width_out = (int *)context;
  if (((uint)width_out[0xa0] < uVar3) ||
     (((uint)width_out[0xa0] <= uVar3 && ((uint)width_out[0x9f] < (uint)uVar5))))
  {
    if (width_out[0x9d] < width_out[0x9e])
    {
      lVar6 = UI_Trade_Manager_Get_or_Init_List_by_Type_Logic();
      uVar4 = (undefined2)((ulong)lVar6 >> 0x10);
      iVar1 = UI_Trade_Manager_Calculate_Transaction_Cost_Logic(context);
      uStack_e = CONCAT22(uVar4,iVar1);
      UI_Trade_Manager_Get_Default_Dialog_Metrics_Logic_maybe(width_out,height_out);
      if (uStack_e < local_12)
      {
        local_12 = iVar1;
      }
      iVar1 = width_out[0x9c];
      puVar2 = (undefined4 *)*(undefined4 **)(width_out + 0x9b);
      uVar7 = (ulong)*(undefined4 **)(width_out + 0x9b) & 0xffff;
      if (iVar1 != 0x0 || puVar2 != NULL)
      {
        uVar7 = (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x1030,puVar2,iVar1,0x1)
        ;
      }
      UI_Trade_Manager_Generate_Random_Log_Entry_Logic
                (context,uStack_e,local_12,local_10);
      width_out[0x9b] = (int)uVar7;
      width_out[0x9c] = (int)(uVar7 >> 0x10);
      width_out[0x9d] = width_out[0x9d] + 0x1;
      _wsprintf16((int *)CONCAT22(height_out,width_out + 0x11),s__ld__s_1050_4165,
                  (void *)*(undefined4 *)((int)*(undefined4 *)(width_out + 0x9b) + 0x8))
      ;
      return (char *)(width_out + 0x11);
    }
    width_out[0x9f] = (uint)uVar5;
    width_out[0xa0] = uVar3;
    width_out[0x9d] = 0x0;
    iVar1 = random_int_range(0x8,0xc);
    width_out[0x9e] = iVar1;
  }
  return NULL;
}



void __stdcall16far
UI_Trade_Manager_Set_Transaction_ID_Logic(long context,int id1,int id2,int id3)
{
  astruct_452 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_452 *)context;
  uVar1->field302_0x12e = id3;
  uVar1->field303_0x130 = id2;
  uVar1->field304_0x132 = id1;
  uVar1->field305_0x134 = 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __stdcall16far
UI_Trade_Manager_Is_Entity_Link_Active_Logic_maybe(long context,char *name1,char *name2)
{
  byte *pbVar1;
  int iVar2;
  undefined2 in_DX;
  long lVar3;
  byte *in_stack_0000000c;
  char *pcVar4;
  
  pcVar4 = _name1;
  pbVar1 = (byte *)Resource_Manager_LoadString_to_Internal_Buffer
                             ((int)_p_GlobalResourceManager,
                              (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  iVar2 = strcmp_case_sensitive((byte *)CONCAT22(in_DX,pbVar1),pcVar4);
  if (iVar2 != 0x0)
  {
    iVar2 = strcmp_case_sensitive(in_stack_0000000c,_name1);
    if (iVar2 != 0x0)
    {
      lVar3 = UI_Trade_Manager_Find_Link_Bidirectional_Logic(context,name1,name2);
      if ((lVar3 != 0x0) && (*(int *)((int)lVar3 + 0xc) == 0x1))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



void __stdcall16far
UI_Trade_Manager_Validate_Entity_Name_Wrapper(long context,long entity_id)
{
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)*(undefined4 *)((int)context + 0x122));
  return;
}



void __stdcall16far
UI_Trade_Manager_Report_Link_Status_Wrapper(long context,char *name1,char *name2)
{
  void *pvVar1;
  
  pvVar1 = (void *)*(undefined4 *)((int)context + 0x122);
  UI_Relationship_Manager_Report_Link_Status_Logic
            ((void *)pvVar1,(char *)((ulong)pvVar1 >> 0x10),name1);
  return;
}



char * __stdcall16far UI_Trade_Manager_res_strdup_by_id_Wrapper(long context)
{
  char *pcVar1;
  
  pcVar1 = res_strdup_by_id_logic(*(long *)((int)context + 0x122));
  return pcVar1;
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



// Iterates through one of six nested item collections (determined by resource ID
// 0x188-0x18D) and returns the 16-bit ID of the item at the specified index. Returns
// 0xFFFF for specific item categories.

int __stdcall16far
UI_Trade_Manager_Get_Item_ID_by_Type_and_Index_Logic(long context,int index,int type)
{
  u16 uVar1;
  u16 uVar2;
  undefined2 uVar4;
  astruct_450 *uVar3;
  long lVar5;
  int iStack_16;
  undefined1 local_10 [0x8];
  int iStack_8;
  undefined4 uStack_6;
  
  uVar3 = (astruct_450 *)context;
  uVar4 = (undefined2)((ulong)context >> 0x10);
  switch(type)
  {
  case 0x188:
    uVar1 = uVar3->field10_0xa;
    uVar2 = uVar3->field11_0xc;
    break;
  case 0x189:
    uVar1 = uVar3->field12_0xe;
    uVar2 = uVar3->field13_0x10;
    break;
  case 0x18a:
    uVar1 = uVar3->field14_0x12;
    uVar2 = uVar3->field15_0x14;
    break;
  case 0x18b:
    uVar1 = uVar3->field16_0x16;
    uVar2 = uVar3->field17_0x18;
    break;
  case 0x18c:
    uVar1 = uVar3->field18_0x1a;
    uVar2 = uVar3->field19_0x1c;
    break;
  case 0x18d:
    uVar1 = uVar3->field20_0x1e;
    uVar2 = uVar3->field21_0x20;
    break;
  default:
    return 0x0;
  }
  uStack_6 = CONCAT22(uVar2,uVar1);
  iStack_8 = 0x0;
  init_long_pair(local_10,uStack_6);
  while( true )
  {
    lVar5 = get_next_list_item(local_10);
    uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
    if ((lVar5 == 0x0) || (iStack_8 == index)) break;
    iStack_8 += 0x1;
  }
  iStack_16 = 0x0;
  if (lVar5 != 0x0)
  {
    if (*(int *)((int)lVar5 + 0xa) == 0x0)
    {
      iStack_16 = *(int *)((int)lVar5 + 0x8);
    }
    else
    {
      iStack_16 = -0x1;
    }
  }
  return iStack_16;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Lazy-initialization getter for nested trade manager lists. Based on the requested
// type (0x188-0x18D), it ensures the corresponding collection (star systems, shipments,
// cargo, research, etc.) is populated before returning its pointer.

long __stdcall16far
UI_Trade_Manager_Get_or_Init_List_by_Type_Logic(astruct_449 *param_1,undefined2 param_2)
{
  void *in_AX;
  undefined2 in_DX;
  astruct_449 *uVar3;
  void *search_context;
  undefined2 uStack_6;
  uint16_t uStack_4;
  
  uStack_6 = 0x0;
  uStack_4 = 0x0;
  search_context = (void *)((ulong)param_1 >> 0x10);
  uVar3 = (astruct_449 *)param_1;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)uVar3->field284_0x122);
  Simulator_Global_Get_Entity_Object_Wrapper_8344
            ((u16)_p_SimulatorGlobalState,(u16)((ulong)_p_SimulatorGlobalState >> 0x10),
             (void *)CONCAT22(in_DX,in_AX));
  switch(param_2)
  {
  case 0x188:
    if (*(long *)&uVar3->field_0xa == 0x0)
    {
      UI_Populate_Star_System_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0xa;
    uStack_4 = uVar3->field12_0xc;
    break;
  case 0x189:
    if (*(long *)&uVar3->field_0xe == 0x0)
    {
      UI_Populate_Transfer_Shipment_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0xe;
    uStack_4 = uVar3->field15_0x10;
    break;
  case 0x18a:
    if (*(long *)&uVar3->field_0x12 == 0x0)
    {
      UI_Populate_Ship_Cargo_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0x12;
    uStack_4 = uVar3->field18_0x14;
    break;
  case 0x18b:
    if (*(long *)&uVar3->field_0x16 == 0x0)
    {
      UI_Populate_Research_Project_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0x16;
    uStack_4 = uVar3->field21_0x18;
    break;
  case 0x18c:
    if (*(long *)&uVar3->field_0x1a == 0x0)
    {
      UI_Populate_Planet_Resource_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0x1a;
    uStack_4 = uVar3->field24_0x1c;
    break;
  case 0x18d:
    if (*(long *)&uVar3->field_0x1e == 0x0)
    {
      UI_Populate_Associated_File_List_Logic(uVar3,search_context);
    }
    uStack_6 = *(undefined2 *)&uVar3->field_0x1e;
    uStack_4 = uVar3->field27_0x20;
  }
  return CONCAT22(uStack_4,uStack_6);
}



// Updates the duplicated name and quantity strings for the current trade transaction.
// Triggers a virtual object update (index 0x10) after setting the new values.

void __stdcall16far
UI_Trade_Manager_Update_Transaction_Strings_Logic(long context,char *str_a,char *str_b)
{
  undefined2 *puVar1;
  char *pcVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  astruct_448 *uVar4;
  undefined2 uVar5;
  char *in_stack_0000000c;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_448 *)context;
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x10);
  (*(code *)*puVar1)();
  uVar3 = extraout_DX;
  free_if_not_null((void *)uVar4->field294_0x126);
  free_if_not_null((void *)uVar4->field295_0x12a);
  pcVar2 = strdup_allocate(in_stack_0000000c);
  *(char **)&uVar4->field294_0x126 = pcVar2;
  *(undefined2 *)((int)&uVar4->field294_0x126 + 0x2) = uVar3;
  pcVar2 = strdup_allocate(str_a);
  *(char **)&uVar4->field295_0x12a = pcVar2;
  *(undefined2 *)((int)&uVar4->field295_0x12a + 0x2) = uVar3;
  return;
}



void __stdcall16far
UI_Trade_Manager_Get_Transaction_Strings_Logic(long context,char **out_a,char **out_b)
{
  undefined2 uVar1;
  undefined4 *in_stack_0000000c;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *in_stack_0000000c = *(undefined4 *)((int)context + 0x126);
  *(undefined4 *)_out_a = *(undefined4 *)((int)context + 0x12a);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A complex routine that simulates market fluctuations. It adjusts an internal value
// (likely price or demand) at offset 0x142 based on current difficulty, randomized tick
// intervals, and game state. Handles both upward and downward trends.

void __stdcall16far UI_Trade_Manager_Randomized_Market_Fluctuation_Logic(long context)
{
  byte bVar1;
  uint uVar2;
  int iVar3;
  astruct_447 *uVar4;
  undefined2 uVar5;
  u32 uVar6;
  ulong uVar7;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_447 *)context;
  uVar2 = uVar4->field322_0x142 + 0x1e;
  if (uVar4->field323_0x144 + 0x1U == (uint)(uVar4->field322_0x142 < 0xffe2))
  {
    if (uVar2 != 0x3c)
    {
      if (0x3c < uVar2)
      {
        return;
      }
      bVar1 = (byte)uVar2;
      if (bVar1 == 0x14)
      {
        uVar4->field322_0x142 = 0xffec;
LAB_1018_3e3d:
        uVar4->field323_0x144 = -0x1;
        return;
      }
      if (0x14 < bVar1)
      {
        if (bVar1 == 0x1e)
        {
          if ((int)g_ModeVersion_13AE < 0x1)
          {
            return;
          }
          if (SBORROW2((int)g_ModeVersion_13AE,0x1))
          {
            return;
          }
          if ((undefined **)g_ModeVersion_13AE != (undefined **)&p_CurrentHeapContext &&
              0x0 < (int)(g_ModeVersion_13AE + -0x1))
          {
            if (g_ModeVersion_13AE ==
                (undefined *)((int)(undefined **)&p_CurrentHeapContext + 0x1))
            {
              iVar3 = random_int_range(0x1,0x64);
              if (iVar3 < 0x32)
              {
                uVar2 = 0xa;
              }
              else
              {
                uVar2 = 0xfff6;
              }
              uVar4->field322_0x142 = uVar2;
              uVar4->field323_0x144 = (int)uVar2 >> 0xf;
              return;
            }
            if ((u16 *)g_ModeVersion_13AE != (u16 *)&p_LastAllocatedBlock)
            {
              return;
            }
            uVar4->field322_0x142 = 0xfff6;
            goto LAB_1018_3e3d;
          }
          uVar4->field322_0x142 = 0xa;
        }
        else if (bVar1 == 0x28)
        {
          uVar4->field322_0x142 = 0x14;
        }
        else
        {
          if (bVar1 != 0x32)
          {
            return;
          }
          uVar4->field322_0x142 = 0x1e;
        }
        uVar4->field323_0x144 = 0x0;
        return;
      }
      if (bVar1 != 0x0)
      {
        if (bVar1 != 0xa)
        {
          return;
        }
        uVar4->field322_0x142 = 0xffe2;
        goto LAB_1018_3e3d;
      }
    }
    uVar7 = 0x5;
    uVar6 = Simulator_Global_Get_Current_Tick_8326();
    if (uVar6 % uVar7 == 0x0)
    {
      (&uVar4->field322_0x142)[0x0] = 0x0;
      (&uVar4->field322_0x142)[0x1] = 0x0;
      return;
    }
  }
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A sophisticated UI factory that instantiates transaction-related UI components
// (vtable 0x4790-0x4920). It maps category codes to internal tables (0x40B6+) to
// determine the item type, resolves resource strings, and calculates initial
// quantities.

int __stdcall16far
UI_Component_Factory_Create_Transaction_Item_Logic
          (undefined4 param_1,long param_2,int param_3,undefined2 param_4)
{
  int *piVar1;
  char *pcVar2;
  void *pvVar3;
  int in_DX;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined4 uStack_e;
  int iStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (false)
  {
switchD_1018_3f8b_caseD_2:
    piVar1 = (int *)(param_3 * 0x4 + 0x40ce);
  }
  else
  {
    switch(param_4)
    {
    case 0x1:
      piVar1 = (int *)(param_3 * 0x4 + 0x40b6);
      break;
    default:
      goto switchD_1018_3f8b_caseD_2;
    case 0x3:
      piVar1 = (int *)(param_3 * 0x4 + 0x40e2);
      break;
    case 0x4:
      piVar1 = (int *)(param_3 * 0x4 + 0x40ee);
      break;
    case 0x8:
      piVar1 = (int *)(param_3 * 0x4 + 0x40f2);
      break;
    case 0x9:
      piVar1 = (int *)(param_3 * 0x4 + 0x4106);
      break;
    case 0xa:
      piVar1 = (int *)(param_3 * 0x4 + 0x410a);
      break;
    case 0x14:
      piVar1 = (int *)(param_3 * 0x4 + 0x410e);
      break;
    case 0x16:
      piVar1 = (int *)(param_3 * 0x4 + 0x4112);
      break;
    case 0x17:
      piVar1 = (int *)(param_3 * 0x4 + 0x4116);
      break;
    case 0x19:
      piVar1 = (int *)(param_3 * 0x4 + 0x411a);
    }
  }
  uStack_6 = (int *)CONCAT22(0x1050,piVar1);
  if (uStack_6 == NULL)
  {
    return 0x0;
  }
  iStack_a = 0x0;
  uStack_8 = 0x0;
  iVar7 = *uStack_6;
  iVar5 = (int)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  if (iVar7 == 0x1)
  {
    iVar7 = UI_Map_Ship_Type_to_Constant_Logic(iVar5,iVar6,piVar1[0x1]);
    uStack_e = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(piVar1[0x1]);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x10));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Subclass_ctor_4A92_Logic
                        ((long)uStack_16,param_2 / uStack_e,(long)CONCAT22(in_DX,pcVar2)
                         ,piVar1[0x1]);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
  else if (iVar7 == 0x2)
  {
    iVar7 = UI_Map_Sim_Value_to_Constant_Logic(iVar5,iVar6,piVar1[0x1]);
    uStack_12 = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Entity_Category_Name_by_ID_Logic_c222(piVar1[0x1]);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x10));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Type5_ctor
                        ((long)uStack_16,param_2 / uStack_12,
                         (long)CONCAT22(in_DX,pcVar2),piVar1[0x1]);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
  else
  {
    if (iVar7 != 0x3)
    {
      if (iVar7 != 0x4) goto LAB_1018_425e;
      iVar7 = piVar1[0x1];
      iVar5 = (int)_p_GlobalResourceManager;
      iVar6 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
      if (iVar7 == 0x1)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x430);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x2;
        lVar4 = 0x14;
      }
      else if (iVar7 == 0x2)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x431);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x3;
        lVar4 = 0x16;
      }
      else if (iVar7 == 0x3)
      {
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x432);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x4;
        lVar4 = 0x17;
      }
      else
      {
        if (iVar7 != 0x4) goto LAB_1018_425e;
        pcVar2 = Resource_Manager_LoadString_and_Duplicate(iVar5,iVar6,0x433);
        iVar7 = in_DX;
        pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
        uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
        if (iVar7 == 0x0 && pvVar3 == NULL) goto LAB_1018_40bc;
        iVar7 = 0x4;
        lVar4 = 0xa;
      }
      lVar4 = UI_Transaction_Item_Type4_ctor
                        ((long)uStack_16,param_2 / lVar4,(long)CONCAT22(in_DX,pcVar2),
                         iVar7);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
    uStack_12._0_2_ =
         res_find_first_available_string_index_logic
                   ((int)_p_StringPropertyTable,
                    (int)((ulong)_p_StringPropertyTable >> 0x10),piVar1[0x1]);
    if ((u16)uStack_12 == 0x0)
    {
      uStack_12._0_2_ = 0x4f;
    }
    iVar7 = UI_Map_Resource_ID_to_Category_Logic(iVar5,iVar6,(u16)uStack_12);
    uStack_e = CONCAT22(in_DX,iVar7);
    pcVar2 = Lookup_Entity_Name_by_ID_Logic_bd80((u16)uStack_12);
    pcVar2 = strdup_allocate(pcVar2);
    iVar7 = in_DX;
    pvVar3 = allocate_memory(CONCAT22(pcVar2,0x14));
    uStack_16 = (void *)CONCAT22(iVar7,pvVar3);
    if (iVar7 != 0x0 || pvVar3 != NULL)
    {
      lVar4 = UI_Transaction_Item_Type2_ctor
                        (uStack_16,param_2 / uStack_e,(char *)CONCAT22(in_DX,pcVar2),
                         (u16)uStack_12,0x0,0x0);
      uStack_8 = (undefined2)((ulong)lVar4 >> 0x10);
      iStack_a = (int)lVar4;
      goto LAB_1018_425e;
    }
  }
LAB_1018_40bc:
  iStack_a = 0x0;
  uStack_8 = 0x0;
LAB_1018_425e:
  if (*(long *)(iStack_a + 0x8) == 0x0)
  {
    *(undefined4 *)(iStack_a + 0x8) = 0x1;
  }
  return iStack_a;
}



// Calculates the final cost or quantity for a trade transaction. It resolves the
// per-unit value based on entity type (ships, cargo, or planet resources), applies the
// current market fluctuation percentage (offset 0x142), and scales by the transaction
// amount.

int __stdcall16far UI_Trade_Manager_Calculate_Transaction_Cost_Logic(long context)
{
  int index;
  void *list_head;
  int iVar1;
  astruct_446 *uVar4;
  int arg2;
  void *pvVar2;
  void *lVar7;
  long lVar3;
  long lStack_6;
  
  lStack_6 = 0x0;
  arg2 = (int)((ulong)context >> 0x10);
  uVar4 = (astruct_446 *)context;
  pvVar2 = (void *)UI_Trade_Manager_Get_or_Init_List_by_Type_Logic
                             (context,uVar4->field302_0x12e);
  index = (int)((ulong)pvVar2 >> 0x10);
  list_head = (void *)pvVar2;
  iVar1 = uVar4->field302_0x12e;
  if (iVar1 == 0x188)
  {
    lVar3 = list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = UI_Map_Ship_Type_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)lVar3 + 0xe));
  }
  else if (iVar1 == 0x18b)
  {
    lVar3 = list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar3 >> 0x10);
    iVar1 = UI_Map_Research_Value_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)lVar3 + 0xe));
  }
  else
  {
    if (iVar1 != 0x18c) goto LAB_1018_4337;
    lVar7 = (void *)list_get_item_at_index(list_head,index);
    lVar7._2_2_ = (undefined2)((ulong)lVar7 >> 0x10);
    iVar1 = UI_Map_Sim_Value_to_Constant_Logic
                      ((int)uVar4,arg2,*(int *)((int)(void *)lVar7 + 0xe));
  }
  lStack_6 = uVar4->field304_0x132 * CONCAT22(lVar7._2_2_,iVar1);
LAB_1018_4337:
  return (int)((uVar4->field317_0x142 * lStack_6) / 0x64) + (int)lStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Randomly selects and instantiates a new transaction UI component from a range of
// possible types. Used to populate the trade manager's activity log with randomized
// "market" events.

void __stdcall16far
UI_Trade_Manager_Generate_Random_Log_Entry_Logic
          (undefined4 param_1,undefined4 param_2,int param_3,int param_4)
{
  bool bVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 in_DX;
  int iVar6;
  void *pvVar7;
  void *pvVar8;
  
  if (param_3 < param_4)
  {
    param_4 = param_3;
  }
  pvVar2 = NULL;
  UI_Relationship_Manager_Ensure_Entity_Exists_Logic
            ((char *)(char *)*(undefined4 *)((int)param_1 + 0x122));
  pvVar7 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                      (void *)CONCAT22(in_DX,pvVar2));
  iVar6 = (int)((ulong)pvVar7 >> 0x10);
  do
  {
    do
    {
      iVar3 = random_int_range(param_4,param_3);
      iVar5 = *(int *)(iVar3 * 0x2 + 0x411c);
    } while (iVar5 == 0x0);
    iVar4 = 0x1;
    pvVar8 = pvVar7;
    if (iVar5 != 0x1)
    {
      iVar4 = random_int_range(0x1,iVar5);
    }
    iVar5 = UI_Component_Factory_Create_Transaction_Item_Logic
                      (param_1,param_2,iVar4 + -0x1,iVar3,pvVar8);
    bVar1 = iVar6 == 0x0;
    iVar6 = 0x0;
  } while (bVar1 && iVar5 == 0x0);
  return;
}



// Maps a wide variety of resource and entity identifiers to one of nine internal UI
// category codes (1-9). Used for categorizing items in lists and reports.

int __stdcall16far UI_Map_Resource_ID_to_Category_Logic(int arg1,int arg2,int res_id)
{
  undefined2 uStack_6;
  
  if (false)
  {
switchD_1018_444f_caseD_10:
    uStack_6 = 0x1;
  }
  else
  {
    switch(res_id)
    {
    case 0xf:
    case 0x35:
    case 0x36:
      uStack_6 = 0x7;
      break;
    default:
      goto switchD_1018_444f_caseD_10;
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x2d:
    case 0x2e:
    case 0x6e:
      uStack_6 = 0x9;
      break;
    case 0x12:
    case 0x31:
    case 0x32:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
      uStack_6 = 0x4;
      break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2f:
    case 0x30:
    case 0x68:
    case 0x69:
      uStack_6 = 0x5;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x33:
    case 0x34:
      uStack_6 = 0x6;
      break;
    case 0x22:
    case 0x23:
    case 0x24:
      uStack_6 = 0x8;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
      uStack_6 = 0x2;
      break;
    case 0x38:
    case 0x39:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x66:
    case 0x67:
    case 0x6c:
    case 0x6d:
      uStack_6 = 0x3;
    }
  }
  return uStack_6;
}
