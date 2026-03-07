/*
 * Source: outpost.c
 * Chunk: 34/117
 * Original lines: 38041-38654
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Massive UI Event Dispatcher (1-65). Bridges UI actions to simulator state changes.
// Toggles simulator settings flags at 1050:0ED0 (Block1/Block2), updates resource
// trackers, and notifies Turn Manager via 1050:0ED0 (ID 0x37).

void __stdcall16far UI_Dispatch_Global_Event_Logic(long context,int event_id)
{
  u16 index;
  void *this;
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uStack_16;
  
  pvVar3 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  uVar4 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvVar2 = (void *)pvVar3;
  if (event_id == 0x1)
  {
    for (index = 0x0; (int)index < 0x83; index += 0x1)
    {
      iVar1 = UI_Colony_Get_Active_Metric_by_Index_2242(pvVar3,index);
      if (0x19 < iVar1)
      {
        uStack_16 = iVar1 - 0x5;
        if ((int)uStack_16 < 0x19)
        {
          uStack_16 = 0x19;
        }
        Colony_Set_Value_at_Index_25d8(pvVar3,uStack_16,index);
      }
    }
    goto switchD_1010_aaef_caseD_b;
  }
  Colony_Increment_Value_at_Index_25f0(pvVar3,0x0,event_id);
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar1 = (int)((ulong)pvVar3 >> 0x10);
  this = (void *)pvVar3;
  if (false) goto switchD_1010_aaef_caseD_b;
  switch(event_id)
  {
  case 0xa:
  case 0xc:
    uVar6 = 0x1d;
    uVar4 = 0x1b;
    uVar5 = 0x1c;
    break;
  default:
    goto switchD_1010_aaef_caseD_b;
  case 0x10:
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    if (*(int *)((int)pvVar2 + 0x160) == 0x0) goto switchD_1010_aaef_caseD_b;
    uVar5 = 0x2e;
    uVar4 = 0x2d;
    goto LAB_1010_a91f;
  case 0x12:
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    goto LAB_1010_a96c;
  case 0x13:
    uVar5 = 0x36;
    uVar4 = 0x35;
    goto LAB_1010_a91f;
  case 0x19:
    goto switchD_1010_aaef_caseD_19;
  case 0x1a:
    goto LAB_1010_a96c;
  case 0x1c:
    goto LAB_1010_a96c;
  case 0x1d:
  case 0x24:
    Simulator_Settings_Toggle_Flags_Logic(context,0x1e,0x1f,0x20,0x0);
    uVar5 = 0x5c;
    uVar4 = 0x5b;
    goto LAB_1010_a91f;
  case 0x1e:
    iVar1 = 0x1;
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Set_State_Flag_Category2_and_Notify
              ((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10),iVar1);
    pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x40);
    UI_Populate_Numbered_Slot_List_Logic((void *)pvVar3);
    goto switchD_1010_aaef_caseD_b;
  case 0x22:
    goto LAB_1010_aabe;
  case 0x23:
    goto LAB_1010_aabe;
  case 0x25:
    Simulator_Settings_Toggle_Flags_Logic(context,0x14,0x15,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x1b,0x1c,0x1d,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x1e,0x1f,0x20,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x22,0x23,0x24,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x25,0x26,0x27,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x28,0x29,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x2a,0x2b,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x2d,0x2e,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x2f,0x30,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x31,0x32,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x35,0x36,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x38,0x39,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x3a,0x3b,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x3c,0x3d,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x48,0x49,0x4a,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x4f,0x50,0x51,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x52,0x53,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x54,0x55,0x56,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x57,0x58,0x59,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x5b,0x5c,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x5d,0x5e,0x5f,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x62,0x63,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x66,0x67,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x68,0x69,0x0);
    Simulator_Settings_Toggle_Flags_Logic(context,0x6c,0x6d,0x0);
    goto switchD_1010_aaef_caseD_19;
  case 0x29:
    uVar6 = 0x27;
    uVar4 = 0x25;
    uVar5 = 0x26;
    break;
  case 0x2a:
    goto LAB_1010_aabe;
  case 0x2b:
    goto LAB_1010_a96c;
  case 0x30:
    uVar6 = 0x56;
    uVar4 = 0x54;
    uVar5 = 0x55;
    break;
  case 0x33:
    Simulator_Settings_Toggle_Flags_Logic(context,0x31,0x32,0x0);
    uVar5 = 0x6d;
    uVar4 = 0x6c;
    goto LAB_1010_a91f;
  case 0x36:
    goto LAB_1010_aabe;
  case 0x37:
LAB_1010_a96c:
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    goto switchD_1010_aaef_caseD_b;
  case 0x38:
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    if (*(int *)((int)pvVar2 + 0x160) == 0x0) goto switchD_1010_aaef_caseD_b;
    uVar5 = 0x29;
    uVar4 = 0x28;
    goto LAB_1010_a91f;
  case 0x39:
    goto LAB_1010_aabe;
  case 0x3a:
    goto LAB_1010_aabe;
  case 0x3b:
LAB_1010_aabe:
    Simulator_Settings_Set_Flag_in_Block2_Logic(this,iVar1,0x1);
    goto switchD_1010_aaef_caseD_b;
  case 0x3c:
    Simulator_Settings_Toggle_Flags_Logic(context,0x14,0x15,0x0);
    uVar5 = 0x63;
    uVar4 = 0x62;
    goto LAB_1010_a91f;
  case 0x3d:
    Simulator_Settings_Set_Flag_in_Block1_Logic(this,iVar1,0x1);
    if (*(int *)((int)pvVar2 + 0x160) == 0x0) goto switchD_1010_aaef_caseD_b;
    uVar5 = 0x67;
    uVar4 = 0x66;
LAB_1010_a91f:
    Simulator_Settings_Toggle_Flags_Logic(context,uVar4,uVar5,0x0);
    goto switchD_1010_aaef_caseD_b;
  case 0x3e:
    uVar6 = 0x5f;
    uVar4 = 0x5d;
    uVar5 = 0x5e;
    break;
  case 0x3f:
    uVar6 = 0x24;
    uVar4 = 0x22;
    uVar5 = 0x23;
    break;
  case 0x40:
    uVar6 = 0x59;
    uVar4 = 0x57;
    uVar5 = 0x58;
    break;
  case 0x41:
    uVar6 = 0x51;
    uVar4 = 0x4f;
    uVar5 = 0x50;
  }
  Simulator_Settings_Toggle_Flags_Logic(context,uVar4,uVar5,uVar6,0x0);
switchD_1010_aaef_caseD_b:
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
  pvVar2 = (void *)pvVar3;
  iVar1 = Turn_Manager_Remap_Input_Char_to_Message_Type_Logic
                    ((int)pvVar2,(int)((ulong)pvVar3 >> 0x10),event_id);
  if (iVar1 != 0x0)
  {
    Turn_Manager_Add_Resource_Change_Entry_Logic(pvVar2,0x0,0x0,0x1,0x0,iVar1);
  }
  Turn_Manager_Add_Resource_Change_Entry_Logic(pvVar2,0x0,0x0,0x1,0x0,0x3d);
  uVar5 = 0x400;
  iVar1 = 0x6;
  uVar4 = 0x1;
  pvVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Push_Resource_Event_Logic((void *)pvVar3,CONCAT22(uVar5,uVar4),iVar1);
  return;
switchD_1010_aaef_caseD_19:
  *(undefined2 *)((int)this + 0x148) = 0x34;
  goto switchD_1010_aaef_caseD_b;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Toggles flags in Simulator Settings Block 1. Resolves settings object via global
// manager at 1050:0ED0 (ID 0x35) and manipulates bitfields at offset 10.

void __cdecl16far
Simulator_Settings_Toggle_Flags_Logic(undefined2 param_1,undefined2 param_2,int param_3)
{
  bool bVar1;
  void *this;
  int value;
  void *pvVar2;
  void *uStack_14;
  int iStack_10;
  
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  value = (int)((ulong)pvVar2 >> 0x10);
  this = (void *)pvVar2;
  bVar1 = false;
  iStack_10 = param_3;
  uStack_14 = (void *)CONCAT22(0x1050,&stack0x000a);
  while( true )
  {
    pvVar2 = uStack_14;
    if (iStack_10 == 0x0)
    {
      return;
    }
    if (bVar1) break;
    if (*(int *)((int)this + iStack_10 * 0x2 + 0xa) != 0x0)
    {
      bVar1 = true;
    }
    uStack_14 = (void *)CONCAT22(uStack_14._2_2_,(void *)((int)uStack_14 + 0x2));
    iStack_10 = *(int *)pvVar2;
  }
  Simulator_Settings_Set_Flag_in_Block1_Logic(this,value,0x0);
  Simulator_Settings_Set_Flag_in_Block1_Logic(this,value,0x1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __stdcall16far Simulator_Get_Value_at_Offset_116_Logic(int index)
{
  void *pvVar1;
  int in_stack_00000008;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  return *(int *)((int)(void *)pvVar1 + in_stack_00000008 * 0x2 + 0x116);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves localized action strings (0x664-0x6A7) from resource manager at 1050:14CC
// into internal buffer at 0x682.

char * __stdcall16far Resource_Manager_Get_Action_String_Logic(int action_id)
{
  char *pcVar1;
  int in_stack_00000008;
  
  if ((0x0 < in_stack_00000008) && (in_stack_00000008 < 0x43))
  {
    pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),
                        in_stack_00000008 + 0x664);
    return pcVar1;
  }
  return NULL;
}



int __stdcall16far Simulator_Is_Entity_Not_Type4_Logic(long entity_ref)
{
  void *pvVar1;
  void *in_stack_00000008;
  
  pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
  if (*(int *)((int)(void *)pvVar1 + 0x12) != 0x4)
  {
    return 0x1;
  }
  return 0x0;
}



// Handles specific UI events (1 or 5). For event 1, it clears a state pointer at 0x12E
// and notifies listeners. For event 5, it only notifies.

void __stdcall16far UI_Object_On_Event_Notify_and_Clear_Logic(long obj_ref,int event_id)
{
  int notify_type;
  
  notify_type = (int)((ulong)obj_ref >> 0x10);
  if (event_id == 0x1)
  {
    *(undefined4 *)((int)obj_ref + 0x12e) = 0x0;
  }
  else if (event_id != 0x5)
  {
    return;
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic
            ((void *)((int)obj_ref + -0xa),notify_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves a numeric index to a 32-bit entity ID by querying global map at 1050:5740
// and entity collection at 1050:65E2.

long __stdcall16far UI_Get_Entity_by_Index_Logic(undefined4 param_1)
{
  undefined4 uVar1;
  undefined2 unaff_SS;
  u8 *puVar2;
  void *uVar3;
  
  uVar1 = *(undefined4 *)((int)param_1 + 0x138);
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,&stack0x0008),
                      (void *)*(undefined4 *)((int)uVar1 + 0x20));
  if (puVar2 == NULL)
  {
    return 0x0;
  }
  uVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                    (_p_SimulatorWorldContext,(u8 *)puVar2);
  return (long)uVar3;
}



// WARNING: Unable to use type for symbol uVar1
// Helper for specialized dialog creation. It validates entity magic types (specifically
// checking for 0x8000002) before proceeding with allocation.

void * __stdcall16far
UI_Specialized_Dialog_Create_Helper(undefined2 param_1,undefined4 param_2,long param_3)
{
  void *pvVar1;
  undefined4 uVar1;
  
  if ((param_3 != 0x0) &&
     (uVar1 = *(undefined4 *)((int)param_3 + 0x2e),
     *(long *)((int)uVar1 + 0x200) == 0x8000002))
  {
    return NULL;
  }
  pvVar1 = UI_Entity_Summary_Object_ctor_init(param_1,param_2,param_3);
  return pvVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves entity category/subcategory names. Uses Lookup routines at
// 1010:C222/1010:C2F8 and falls back to "Unknown" (string 0x531) via resource manager
// at 1050:14CC.

char * __stdcall16far
UI_Get_Entity_Name_by_Type_and_Index_Logic
          (undefined2 param_1,undefined2 param_2,u16 param_3,int param_4)
{
  char *pcVar1;
  uint in_DX;
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  if (param_4 == 0x6)
  {
    if (param_3 == 0x0) goto LAB_1010_adee;
    pcVar1 = Lookup_Entity_Category_Name_by_ID_Logic_c222(param_3);
  }
  else
  {
    if (param_4 != 0x7)
    {
      return NULL;
    }
    if (param_3 == 0x0) goto LAB_1010_adee;
    pcVar1 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(param_3);
  }
  uStack_6 = (char *)CONCAT22(in_DX,pcVar1);
LAB_1010_adee:
  if (uStack_6 == NULL)
  {
    Resource_Manager_LoadString_to_Internal_Buffer
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    uStack_6 = (char *)((ulong)in_DX << 0x10);
  }
  return uStack_6._2_2_;
}



// Searches for a specific name string in the entity category tables (type 6 or 7) and
// returns its numeric index. Returns -1 if no match is found.

int __stdcall16far
UI_Find_Entity_Index_by_Name_and_Type_Logic
          (undefined2 param_1,undefined2 param_2,byte *param_3,int param_4)
{
  char *pcVar1;
  int iVar2;
  undefined2 in_DX;
  u16 uStack_4;
  
  if (param_4 == 0x6)
  {
    for (uStack_4 = 0x0; (int)uStack_4 < 0x15; uStack_4 += 0x1)
    {
      pcVar1 = Lookup_Entity_Category_Name_by_ID_Logic_c222(uStack_4);
      iVar2 = strcmp_case_sensitive(param_3,(char *)CONCAT22(in_DX,pcVar1));
      if (iVar2 == 0x0)
      {
        return uStack_4;
      }
    }
  }
  else if (param_4 == 0x7)
  {
    for (uStack_4 = 0x0; (int)uStack_4 < 0x11; uStack_4 += 0x1)
    {
      pcVar1 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(uStack_4);
      iVar2 = strcmp_case_sensitive(param_3,(char *)CONCAT22(in_DX,pcVar1));
      if (iVar2 == 0x0)
      {
        return uStack_4;
      }
    }
  }
  return -0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates entity properties and notifies simulator. Handles state code 0x15 and
// resource codes 6/7. Notifies Turn Manager via 1050:0ED0 (ID 0x37) if thresholds are
// met.

void __stdcall16far
UI_Update_Entity_Property_and_Notify_Simulator_Logic
          (long context,int value,int code,long entity_ref)
{
  int iVar1;
  void *pvVar2;
  u32 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int arg4;
  undefined2 uVar6;
  undefined2 uVar7;
  int resource_id;
  
  if (code == 0x15)
  {
    pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
    if (pvVar2 != NULL)
    {
      *(int *)((int)pvVar2 + 0x20) = value;
      return;
    }
  }
  else if ((uint)code < 0x16)
  {
    if ((char)code == '\x06')
    {
      UI_Component_Update_Entity_Resource_Field2_7f1a((void *)entity_ref,value);
      pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
      iVar1 = UI_Get_U16_at_Offset_C_Logic
                        ((int)context,(int)((ulong)context >> 0x10),(long)pvVar2);
      uVar3 = Simulator_Global_Get_Current_Tick_8326();
      if (((iVar1 == 0xe) && (((int)(uVar3 >> 0x10) != 0x0 || (0x32 < (uint)uVar3)))) &&
         ((value == 0x1 || (((value == 0x2 || (value == 0x4)) || (value == 0x3))))))
      {
        uVar7 = 0x0;
        resource_id = 0xb;
        arg4 = 0x1;
        uVar6 = 0x0;
        uVar5 = 0x0;
        iVar1 = 0x0;
        uVar4 = 0x0;
        pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x37);
        Turn_Manager_Add_Resource_Change_Entry_Logic
                  ((void *)pvVar2,CONCAT22(uVar5,uVar4),iVar1,arg4,CONCAT22(uVar7,uVar6)
                   ,resource_id);
        return;
      }
    }
    else if ((char)code == '\a')
    {
      UI_Component_Update_Entity_Resource_Field4_7eda((void *)entity_ref,value);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far UI_Get_Nested_Collection_Value_Logic(long context,int group_id)
{
  undefined4 uVar1;
  void *colony_ptr;
  long lVar2;
  
  uVar1 = *(undefined4 *)((int)context + 0x138);
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x24));
  if (colony_ptr == NULL)
  {
    return 0x0;
  }
  lVar2 = Colony_Count_Entities_in_Group_Logic_5050(colony_ptr,group_id);
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far UI_Get_Nested_Collection_Value_Logic_Alt(long context,int group_id)
{
  undefined4 uVar1;
  void *colony_ptr;
  long lVar2;
  
  uVar1 = *(undefined4 *)((int)context + 0x138);
  colony_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x24));
  if (colony_ptr == NULL)
  {
    return 0x0;
  }
  lVar2 = Colony_Count_Active_Entities_of_Type_Group_50e0(colony_ptr,group_id);
  return lVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves entity property by combining a nested collection pointer with an entry from
// global lookup array at 1050:06E0. Uses entity tracker at 1050:65E2.

long __stdcall16far UI_Get_Entity_Property_by_Array_Index_Logic(long context,int index)
{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar4;
  u32 *puVar5;
  void *pvVar6;
  ulong uVar3;
  
  uVar1 = *(undefined4 *)((int)context + 0x138);
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)uVar1 + 0x24));
  uVar4 = (uint)((ulong)pvVar6 >> 0x10) | (uint)pvVar6;
  if (uVar4 == 0x0)
  {
    return 0x0;
  }
  pvVar2 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  uVar3 = ZEXT24(pvVar2);
  puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78(pvVar6,pvVar2,uVar4);
  return CONCAT22(puVar5,(int)uVar3);
}



int __stdcall16far UI_Get_U16_at_Offset_C_Logic(int arg1,int arg2,long entity_ref)
{
  return *(int *)((int)entity_ref + 0xc);
}
