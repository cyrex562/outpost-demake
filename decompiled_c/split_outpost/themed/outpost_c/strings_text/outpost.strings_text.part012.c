/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 12/19
 * Original lines (combined): 45645-48254
 * Boundaries: top-level declarations/definitions only
 */




// Retrieves the unique identifier (likely from offset 0x2E of a history point) for the
// currently indexed entity.

int __stdcall16far UI_Ship_View_Get_Selected_Entity_ID_Logic(long context)
{
  undefined2 uVar1;
  long lVar2;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  lVar2 = Data_History_Object_Get_Point_At_Index
                    ((void *)(void *)*(undefined4 *)((int)context + 0x17e),
                     (long)*(int *)((int)context + 0x174));
  if (lVar2 != 0x0)
  {
    return *(int *)((int)lVar2 + 0x2e);
  }
  return 0x0;
}



// Searches the entity collection for a name matching the filter string at offset 0x186
// and updates the selection index if found.

int __stdcall16far UI_Ship_View_Search_and_Select_by_Name_Logic(long context)
{
  int iVar1;
  int iVar2;
  u16 uVar3;
  char *str1;
  int iVar4;
  char *str2;
  astruct_457 *uVar8;
  undefined2 uVar5;
  long lVar6;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar8 = (astruct_457 *)context;
  iVar1 = uVar8->field372_0x174;
  iVar2 = *(int *)((int)uVar8->field380_0x17e + 0xa);
  if (iVar2 != 0x0)
  {
    if (uVar8->field385_0x186 != NULL)
    {
      strlen_get_length(uVar8->field385_0x186);
      uVar8->field372_0x174 = 0x0;
      while( true )
      {
        if (iVar2 <= uVar8->field372_0x174) break;
        lVar6 = Data_History_Object_Get_Point_At_Index
                          ((void *)(void *)uVar8->field380_0x17e,
                           (long)uVar8->field372_0x174);
        str2 = (char *)((ulong)lVar6 >> 0x10);
        uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
        str1 = Lookup_Entity_Name_by_ID_Logic_bd80(uVar3);
        iVar4 = strncmp_fixed_optimized(str1,str2,(int)(char *)uVar8->field385_0x186);
        if (iVar4 == 0x0) break;
        uVar8->field372_0x174 = uVar8->field372_0x174 + 0x1;
      }
      if (uVar8->field372_0x174 < iVar2)
      {
        uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
        uVar8->field373_0x176 = uVar3;
        return 0x1;
      }
      uVar8->field372_0x174 = iVar1;
      uVar3 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
      uVar8->field373_0x176 = uVar3;
    }
  }
  return 0x0;
}



// Sets the search filter string used for entity lookups in the Ship View.

void __stdcall16far
UI_Ship_View_Set_Search_Filter_Logic(astruct_456 *param_1,char *param_2)
{
  char *pcVar1;
  u16 in_DX;
  astruct_456 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_456 *)param_1;
  free_if_not_null((void *)*(void **)&uVar2->field_0x186);
  pcVar1 = strdup_allocate(param_2);
  *(char **)&uVar2->field_0x186 = pcVar1;
  uVar2->field392_0x188 = in_DX;
  return;
}



// Returns true (1) if the Ship View has a valid, non-empty collection of entities.

int __stdcall16far UI_Ship_View_Is_History_NonEmpty_Logic(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if ((*(long *)((int)context + 0x17e) != 0x0) &&
     (uVar1 = *(undefined4 *)((int)context + 0x17e), *(long *)((int)uVar1 + 0xa) != 0x0)
     )
  {
    return 0x1;
  }
  return 0x0;
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
// Searches the trade manager's relationship collection for a link connecting two
// entities by their name strings. It checks both possible orderings (A-B and B-A) to
// find the bidirectional link object.

long __stdcall16far
UI_Trade_Manager_Find_Link_Bidirectional_Logic(long context,char *name1,char *name2)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  void *this_ptr;
  void *this_ptr_00;
  char *pcVar5;
  char *pcVar6;
  byte *in_stack_0000000c;
  undefined1 local_a [0x8];
  
  uVar1 = *(undefined4 *)((int)context + 0x122);
  init_long_pair(local_a,*(long *)((int)uVar1 + 0xa));
  while( true )
  {
    lVar4 = get_next_list_item(local_a);
    uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
    if (lVar4 == 0x0)
    {
      return 0x0;
    }
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)lVar4 + 0x4));
    this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,
                             (u8 *)(u8 *)*(undefined4 *)((int)lVar4 + 0x8));
    pcVar5 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
    pcVar6 = UI_Component_Get_FarPtr_at_1FA(this_ptr_00);
    iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar5);
    if ((iVar2 == 0x0) && (iVar2 = strcmp_case_sensitive(_name1,pcVar6), iVar2 == 0x0))
    break;
    iVar2 = strcmp_case_sensitive(_name1,pcVar5);
    if ((iVar2 == 0x0) &&
       (iVar2 = strcmp_case_sensitive(in_stack_0000000c,pcVar6), iVar2 == 0x0))
    {
      return lVar4;
    }
  }
  return lVar4;
}



// Base constructor for a transaction-related UI element (vtable 0x4AA6). Initializes
// core data pointers at offsets 4 and 8.

long __stdcall16far
UI_Transaction_Item_Base_ctor_4AA6_Logic(long this_ref,long data1,long data2)
{
  astruct_445 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_445 *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = (void *)data2;
  uVar1->field4_0x8 = (void *)data1;
  uVar1->field5_0xc = 0x0;
  *(undefined2 *)this_ref = 0x4aa6;
  uVar1->field2_0x2 = 0x1018;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates Build Site object data by fetching a resource via the Resource Manager and
// indexing into it using an internal ID.

void __stdcall16far Build_Site_Update_From_Resources(long context)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int index;
  void *pvVar3;
  
  memset_far((undefined4 *)((int)context + 0xa),context._2_2_,0x0);
  memset_far((void *)((int)context + 0x18),context._2_2_,0x0);
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  index = (int)((ulong)pvVar3 >> 0x10);
  puVar2 = UI_Component_Get_Indexed_Struct_at_Offset_22_Logic((void *)pvVar3,index);
  if (index != 0x0 || puVar2 != NULL)
  {
    *(undefined4 *)((int)context + 0xa) = *puVar2;
    *(undefined4 *)((int)context + 0xe) = puVar2[0x1];
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x20);
  (*(code *)*puVar1)(0x1010,context);
  if ((*(int *)((int)context + 0xe) == 0x0) && (*(int *)((int)context + 0x10) == 0x0))
  {
    *(undefined2 *)((int)context + 0xa) = *(undefined2 *)((int)context + 0x18);
    *(undefined2 *)((int)context + 0xc) = *(undefined2 *)((int)context + 0x1a);
  }
  *(undefined2 *)((int)context + 0xe) = *(undefined2 *)((int)context + 0x1c);
  *(undefined2 *)((int)context + 0x10) = *(undefined2 *)((int)context + 0x1e);
  return;
}



// Sets up the GDI context for the Build Site, including creating a memory DC and
// scaling UI metrics for different resolutions.

void __stdcall16far
Build_Site_Object_Setup_GDI_Context(long context,int arg2,int width,int height)
{
  undefined2 *puVar1;
  char *driver;
  HDC16 HVar2;
  u16 uVar3;
  char *in_DX;
  astruct_436 *uVar4;
  undefined2 uVar5;
  int iStack_10;
  
  uVar5 = (undefined2)((ulong)context >> 0x10);
  uVar4 = (astruct_436 *)context;
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x14);
  (*(code *)*puVar1)();
  driver = get_with_lazy_init((u32 *)uVar4->field10_0xa);
  Bitmap_Object_Get_Internal_Buffer_Ptr_maybe((u32 *)uVar4->field10_0xa);
  HVar2 = CreateDC16(driver,in_DX,NULL,NULL);
  uVar4->field15_0x12 = HVar2;
  puVar1 = (undefined2 *)((int)*uVar4->field10_0xa + 0x8);
  uVar3 = (*(code *)*puVar1)();
  uVar4->field22_0x1a = uVar3;
  if ((u16_1050_422e != 0x0) && (0x280 < height))
  {
    for (iStack_10 = 0x0; iStack_10 < (int)(u16_1050_4216 + 0x1); iStack_10 += 0x1)
    {
      *(int *)((undefined *)&DAT_1050_4172 + iStack_10 * 0x2) =
           (int)(((long)*(int *)((undefined *)&DAT_1050_4172 + iStack_10 * 0x2) *
                 ((long)height + 0x1)) / 0x280);
    }
    for (iStack_10 = 0x0; iStack_10 < (int)(u16_1050_422c + 0x1); iStack_10 += 0x1)
    {
      *(int *)((undefined *)&DAT_1050_419a + iStack_10 * 0x2) =
           (int)(((long)*(int *)((undefined *)&DAT_1050_419a + iStack_10 * 0x2) *
                 ((long)width + 0x1)) / 0x1e0);
    }
  }
  u16_1050_422e = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes building selection within the Build Site UI and notifies other components
// of the state change.

void __stdcall16far
Build_Site_Object_Process_Selection_and_Notify
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  int iVar1;
  astruct_433 *puVar2;
  int in_DX;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  undefined4 uStack_a;
  astruct_433 *paStack_6;
  
  puVar2 = validate_and_get_block((void *)_p_Pool_Type4_Timer);
  uStack_a = (astruct_433 *)CONCAT22(in_DX,puVar2);
  if (in_DX == 0x0 && puVar2 == NULL)
  {
    paStack_6 = NULL;
  }
  else
  {
    *(char **)uStack_a = (char *)s_1_1050_389a;
    puVar2->field2_0x2 = 0x1008;
    puVar2->field3_0x4 = 0x0;
    puVar2->field4_0x6 = 0x0;
    puVar2->field5_0x8 = 0x0;
    puVar2->field6_0xa = 0x0;
    puVar2->field7_0xc = 0x0;
    *(undefined2 *)uStack_a = 0x56ce;
    puVar2->field2_0x2 = 0x1018;
    paStack_6 = uStack_a;
  }
  iVar5 = (int)((ulong)paStack_6 >> 0x10);
  puVar3 = (undefined4 *)paStack_6;
  *(undefined2 *)((int)puVar3 + 0xa) = param_2;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar1 = *(int *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xc);
  if (iVar1 == 0x1)
  {
    *(undefined2 *)(puVar3 + 0x1) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  else if (iVar1 == 0x5)
  {
    *(undefined2 *)((int)puVar3 + 0x6) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  else
  {
    if (iVar1 != 0x6)
    {
      if (iVar5 == 0x0 && puVar3 == NULL)
      {
        return;
      }
      (*(code *)*(undefined2 *)*(undefined2 **)paStack_6)();
      return;
    }
    *(undefined2 *)(puVar3 + 0x2) =
         *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0xa) + 0xe);
  }
  UI_Component_Execute_Resource_Action_and_Notify_6c66(param_3,0x1,paStack_6);
  return;
}



// Iterates through a list of Build Site items and returns the one matching the
// specified name.

long __stdcall16far Build_Site_List_Find_Item_by_Name(void *this,char *name)
{
  int iVar1;
  astruct_432 *iVar2;
  long lVar2;
  char *in_stack_00000008;
  undefined1 local_a [0x8];
  
  *(undefined4 *)((int)this + 0xa) = 0x0;
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    lVar2 = get_next_list_item(local_a);
    iVar1 = (int)((ulong)lVar2 >> 0x10);
    *(undefined2 *)((int)this + 0xa) = (int)lVar2;
    *(int *)((int)this + 0xc) = iVar1;
    if (iVar1 == 0x0 && *(int *)((int)this + 0xa) == 0x0) break;
    iVar1 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)
                                ((int)*(undefined4 *)((int)this + 0xa) + 0x4),
                       in_stack_00000008);
  } while (iVar1 != 0x0);
  return CONCAT22(*(undefined2 *)((int)this + 0xc),*(undefined2 *)((int)this + 0xa));
}



// Retrieves a Build Site list item, initializing it if it hasn't been created yet.

long __stdcall16far
Build_Site_Object_Get_or_Init_List_Item(long context,long src_context)
{
  astruct_431 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_431 *)context;
  if (*(long *)&uVar1->field_0xe == 0x0)
  {
    Build_Site_List_Initialize_Items_Internal(context,src_context);
  }
  return CONCAT22(uVar1->field16_0x10,*(undefined2 *)&uVar1->field_0xe);
}
