/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 13/56
 * Original lines (combined): 38258-41172
 * Boundaries: top-level declarations/definitions only
 */




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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far UI_Get_Resource_Data_from_65E2_Logic(long context,long type_id)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_World_List_Head_e1bc
                     (_p_SimulatorWorldContext,(u16)type_id,
                      (uint)((ulong)type_id >> 0x10));
  return (long)pvVar1;
}



// Bulk population of entity summary array. Allocates 24-byte-per-entry array and
// populates via Simulator_World_Iterator (1008:DC52). Uses global context via
// 1010:BF08.

void __stdcall16far
UI_Populate_Entity_Summary_Array_Logic(long src_context,long dest_array_ref)
{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  long lVar5;
  void *pvVar6;
  void *src;
  undefined2 in_stack_0000ffd0;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 uStack_1a;
  undefined1 local_16 [0x12];
  u16 uStack_4;
  
  lVar5 = UI_Get_Resource_Data_from_65E2_Logic(src_context,0x1000000);
  iVar2 = (int)((ulong)lVar5 >> 0x10);
  uStack_4 = (int)lVar5 - 0x1;
  *(u16 *)dest_array_ref = uStack_4;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffd0,uStack_4 * 0x18));
  uStack_28 = (void *)CONCAT22(iVar2,pvVar1);
  iVar3 = (int)dest_array_ref;
  uVar4 = (undefined2)((ulong)dest_array_ref >> 0x10);
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)(iVar3 + 0x2) = 0x0;
  }
  else
  {
    call_function_n_times((void *)0x4092,0x1020,uStack_4);
    *(undefined4 *)(iVar3 + 0x2) = uStack_28;
  }
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x100);
  uStack_1a = (void *)*(undefined4 *)(iVar3 + 0x2);
  iStack_24 = 0x0;
  while( true )
  {
    pvVar6 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((undefined1 *)CONCAT22(unaff_SS,local_16));
    iVar2 = (int)((ulong)pvVar6 >> 0x10);
    if (iVar2 == 0x0 && (int)pvVar6 == 0x0) break;
    if (*(long *)((int)pvVar6 + 0x10) != 0x0)
    {
      pvVar1 = (void *)uStack_1a;
      src = (void *)((ulong)uStack_1a >> 0x10);
      copy_struct_6bytes(pvVar1,src);
      *(int *)((int)pvVar1 + 0xc) = iStack_24;
      iStack_24 += 0x1;
      uStack_1a = (void *)CONCAT22(src,(void *)((int)pvVar1 + 0x18));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Bulk loader for entity icons. Maps types (1-10) to resource IDs (0x1B5-0x1BE) and
// populates a collection via Resource_Manager_Load_Resource_Object_Logic (1010:830A).

void __stdcall16far Resource_Manager_Bulk_Load_Entity_Icons_Logic(long param_1)
{
  undefined2 *puVar1;
  int *piVar2;
  void *pvVar3;
  undefined2 in_DX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  long lVar9;
  void *pvVar10;
  int iStack_1e;
  undefined1 local_18 [0x12];
  undefined4 uStack_6;
  
  piVar2 = allocate_memory(CONCAT22(unaff_SI,0xa));
  uStack_6 = (int *)CONCAT22(in_DX,piVar2);
  lVar9 = UI_Get_Resource_Data_from_65E2_Logic(param_1,0x2000000);
  iVar6 = (int)((ulong)lVar9 >> 0x10);
  uVar7 = (undefined2)((ulong)uStack_6 >> 0x10);
  piVar2 = (int *)uStack_6;
  piVar2[0x4] = (int)lVar9;
  if ((int)lVar9 == 0x0)
  {
    piVar2[0x4] = 0x1;
  }
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,piVar2[0x4] << 0x2));
  uVar7 = (undefined2)((ulong)uStack_6 >> 0x10);
  piVar2 = (int *)uStack_6;
  *uStack_6 = (int)pvVar3;
  piVar2[0x1] = iVar6;
  if (iVar6 == 0x0 && *uStack_6 == 0x0)
  {
    piVar2[0x4] = 0x0;
  }
  else
  {
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,piVar2[0x4] * 0x2));
    uVar7 = (undefined2)((ulong)uStack_6 >> 0x10);
    piVar2 = (int *)uStack_6;
    piVar2[0x2] = (int)pvVar3;
    piVar2[0x3] = iVar6;
    if (iVar6 != 0x0 || piVar2[0x2] != 0x0)
    {
      pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      puVar1 = *(undefined2 **)uStack_6;
      *puVar1 = pvVar3;
      ((undefined2 *)puVar1)[0x1] = iVar6;
      **(undefined2 **)((int *)uStack_6 + 0x2) = 0x0;
      Simulator_World_Iterator_ctor_init_dc52
                ((undefined1 *)CONCAT22(unaff_SS,local_18),0x1,0x0,0x200);
      iStack_1e = 0x1;
      while( true )
      {
        pvVar10 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                            ((undefined1 *)CONCAT22(unaff_SS,local_18));
        uVar4 = (uint)((ulong)pvVar10 >> 0x10);
        uVar5 = uVar4 | (uint)(void *)pvVar10;
        if (uVar5 == 0x0) break;
        uVar7 = *(undefined2 *)*(undefined4 *)((int)(void *)pvVar10 + 0x10);
        switch(uVar7)
        {
        case 0x1:
          break;
        case 0x2:
          break;
        case 0x3:
          break;
        case 0x4:
          break;
        case 0x5:
          break;
        case 0x6:
          break;
        case 0x7:
          break;
        case 0x8:
          break;
        case 0x9:
          break;
        case 0xa:
        }
        pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                           ((void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10));
        uVar8 = (undefined2)((ulong)*(undefined4 *)uStack_6 >> 0x10);
        iVar6 = (int)*(undefined4 *)uStack_6;
        *(undefined2 *)(iVar6 + iStack_1e * 0x4) = pvVar3;
        *(uint *)(iVar6 + iStack_1e * 0x4 + 0x2) = uVar5;
        *(undefined2 *)((int)*(undefined4 *)((int *)uStack_6 + 0x2) + iStack_1e * 0x2) =
             uVar7;
        iStack_1e += 0x1;
      }
      return;
    }
  }
  return;
}



// Iterates through a collection using standard find-first/next logic until it reaches
// the requested numeric index.

void __stdcall16far Collection_Seek_to_Index_Logic(int index)
{
  undefined2 unaff_SS;
  void *pvVar1;
  int in_stack_00000008;
  int iStack_1c;
  undefined1 local_16 [0x12];
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_16),0x1,0x0,0x200);
  for (iStack_1c = 0x1;
      (pvVar1 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_16)), pvVar1 != NULL &&
      (iStack_1c != in_stack_00000008)); iStack_1c += 0x1)
  {
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates active simulation context. Ensures resource 0x2F (settings) is mapped to a
// valid entity ID in the global tracking structure at 1050:65E2.

void __stdcall16far Resource_Manager_Validate_Active_Context_Logic(void)
{
  u8 *packed_id;
  undefined2 uVar1;
  long lVar2;
  void *pvVar3;
  
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar1 = (undefined2)((ulong)lVar2 >> 0x10);
  packed_id = (u8 *)*(undefined2 *)((int)lVar2 + 0x24);
  if (*(int *)((int)lVar2 + 0x26) != 0x0 || packed_id != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    if (pvVar3 != NULL)
    {
      return;
    }
  }
  return;
}



long __stdcall16far Entity_Get_Indirect_ID_Logic(long entity_ref)
{
  undefined4 uVar1;
  undefined2 uVar2;
  long in_stack_00000008;
  undefined2 uStack_6;
  
  if ((in_stack_00000008 != 0x0) &&
     (uVar2 = (undefined2)((ulong)in_stack_00000008 >> 0x10),
     uVar1 = *(undefined4 *)((int)in_stack_00000008 + 0x2e), uStack_6 = (int)uVar1,
     *(int *)((int)in_stack_00000008 + 0x30) != 0x0 || uStack_6 != 0x0))
  {
    uVar2 = (undefined2)((ulong)uVar1 >> 0x10);
    return CONCAT22(*(undefined2 *)(uStack_6 + 0x202),*(undefined2 *)(uStack_6 + 0x200))
    ;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far Resource_Manager_Get_Global_65E2_Pointer(void)
{
  return CONCAT22(((undefined2 *)_p_SimulatorWorldContext)[0x1],
                  *_p_SimulatorWorldContext);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves generic entity category name (e.g. 'Fleet', 'Base'). Maps type IDs to
// resource strings 0x593-0x664 and loads via global manager at 1050:14CC.

char * __stdcall16far
Entity_Get_Category_Name_Logic
          (undefined2 param_1,undefined2 param_2,undefined1 *param_3,void *param_4)
{
  undefined1 *puVar1;
  undefined2 in_DX;
  void *pvVar2;
  char *pcVar3;
  undefined2 uVar4;
  undefined2 in_stack_0000fff0;
  undefined4 uStack_6;
  
  uStack_6 = param_3;
  if (param_3 == NULL)
  {
    puVar1 = allocate_memory(CONCAT22(in_stack_0000fff0,0x100));
    uStack_6 = (undefined1 *)CONCAT22(in_DX,puVar1);
  }
  pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(param_4);
  pcVar3 = (char *)((ulong)uStack_6 >> 0x10);
  switch(*(undefined2 *)((int)(void *)pvVar2 + 0x12))
  {
  case 0x1:
  case 0x2:
  case 0x4:
    uVar4 = 0x594;
    break;
  case 0x3:
  case 0x5:
    uVar4 = 0x593;
    break;
  case 0x6:
    uVar4 = 0x595;
    break;
  case 0x7:
    uVar4 = 0x596;
    break;
  case 0x8:
    uVar4 = 0x5f3;
    break;
  case 0x9:
    uVar4 = 0x664;
    break;
  default:
    *uStack_6 = 0x0;
    return pcVar3;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),
             CONCAT22((undefined1 *)uStack_6,0x3ff),(long)CONCAT22(uVar4,pcVar3));
  return pcVar3;
}



// Constructor and initializer for a specialized UI entity summary object. Based on the
// provided type (param_3), it selects from various global metadata tables, allocates a
// property array, and registers itself with the simulator dispatcher.

void * __stdcall16far
UI_Entity_Summary_Object_ctor_init
          (void *param_1,undefined2 param_2,u16 param_3,undefined4 param_4)
{
  void *pvVar1;
  u16 *ptr;
  u16 *puVar2;
  int in_DX;
  void *pvVar3;
  undefined2 unaff_SI;
  u16 *puVar4;
  undefined4 uStack_1a;
  u16 uStack_12;
  u16 uStack_10;
  ulong *puStack_e;
  undefined4 uStack_6;
  
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x18));
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    ptr = NULL;
    pvVar1 = NULL;
  }
  else
  {
    puVar4 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(in_DX,pvVar1));
    pvVar1 = (void *)((ulong)puVar4 >> 0x10);
    ptr = (u16 *)puVar4;
  }
  uStack_6 = (u16 *)CONCAT22(pvVar1,ptr);
  pvVar3 = (void *)((uint)pvVar1 | (uint)ptr);
  if (pvVar3 == NULL)
  {
    return NULL;
  }
  puStack_e = NULL;
  uStack_12 = 0x0;
  uStack_10 = 0x0;
  if (true)
  {
    switch(param_3)
    {
    case 0x5:
      puStack_e = (ulong *)0x1050352c;
      uStack_12 = 0xfa4;
      uStack_10 = 0x30;
      break;
    default:
      goto switchD_1010_c717_caseD_6;
    case 0xa:
      puStack_e = &ULONG_1050_358c;
      uStack_12 = 0xfb3;
      uStack_10 = 0x51;
      break;
    case 0xb:
      puStack_e = &ULONG_1050_358c;
      uStack_12 = 0xfb4;
      uStack_10 = 0x51;
      break;
    case 0xc:
      puStack_e = &ULONG_1050_362e;
      uStack_12 = 0xfb6;
      uStack_10 = 0x30;
      break;
    case 0x10:
      puStack_e = (ulong *)&u16_1050_368e;
      uStack_12 = 0xfc4;
      uStack_10 = 0x3c;
      break;
    case 0x11:
      puStack_e = (ulong *)&u16_1050_3706;
      uStack_12 = 0xfc1;
      uStack_10 = 0x4b;
      break;
    case 0x12:
      puStack_e = &ULONG_1050_379c;
      uStack_12 = 0xfc5;
      uStack_10 = 0x8;
      break;
    case 0x13:
      pvVar3 = pvVar1;
      Simulator_Populate_Active_ID_List_Logic
                (param_1,CONCAT22(param_3,param_2),ptr + 0x8,pvVar1,ptr + 0x6,pvVar1,
                 (int)param_4,(int)((ulong)param_4 >> 0x10));
      puStack_e = &ULONG_1050_37ac;
      uStack_12 = 0xfc6;
      uStack_10 = 0x1;
      break;
    case 0x15:
      *(undefined4 *)(ptr + 0x3) = param_4;
      ptr[0x5] = param_3;
      break;
    case 0x16:
      puStack_e = (ulong *)((long)&ULONG_1050_37ac + 0x2);
      uStack_12 = 0x157;
      uStack_10 = 0x4;
      break;
    case 0x17:
      puStack_e = &ULONG_1050_37b6;
      uStack_10 = 0x2c;
      uStack_12 = 0xfd8;
    }
    if (puStack_e != NULL)
    {
      *uStack_6 = uStack_10;
      puVar2 = allocate_memory(CONCAT22(unaff_SI,uStack_10 * 0xa + 0x2));
      uStack_1a = (u16 *)CONCAT22(pvVar3,puVar2);
      if (pvVar3 == NULL && puVar2 == NULL)
      {
        (ptr + 0x1)[0x0] = 0x0;
        (ptr + 0x1)[0x1] = 0x0;
      }
      else
      {
        *uStack_1a = uStack_10;
        call_function_n_times((void *)0xa564,0x1040,uStack_10);
        ptr[0x1] = (u16)(puVar2 + 0x1);
        ptr[0x2] = (u16)pvVar3;
      }
      *(undefined4 *)(ptr + 0x3) = param_4;
      ptr[0x5] = param_3;
      ptr[0x9] = uStack_12;
      Simulator_Event_Dispatch_Table_Dispatch_Logic
                (param_1,(long)puStack_e,(long)CONCAT22(pvVar1,ptr));
    }
    return pvVar1;
  }
switchD_1010_c717_caseD_6:
  if (uStack_6 != NULL)
  {
    UI_Managed_Collection_dtor_Internal_a5d0((u16 *)CONCAT22(pvVar1,ptr));
    free_if_not_null(ptr);
  }
  return NULL;
}



// Retrieves a 32-bit value from offset 0x14 of an entity if it matches specific
// category and status criteria (at offsets 0x12 and 0x18). Used for indirect property
// lookups.

long __stdcall16far Entity_Get_Indirect_Long_at_Offset_14_Logic(long entity_ref)
{
  int iVar1;
  int iVar2;
  u32 fptr_a;
  void *in_stack_00000008;
  undefined4 uStack_10;
  astruct_485 *offset;
  
  if (in_stack_00000008 != NULL)
  {
    fptr_a = (u32)UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
    fptr_a._2_2_ = (int)(fptr_a >> 0x10);
    offset = (astruct_485 *)fptr_a;
    uStack_10 = (long *)CONCAT22(fptr_a._2_2_,&offset->field_0x14);
    if (fptr_a._2_2_ != 0x0 || &offset->field_0x14 != NULL)
    {
      iVar1 = offset->field18_0x12;
      iVar2 = offset->field23_0x18;
      if (((((iVar1 == 0x4) ||
            ((((iVar1 == 0x6 && (iVar2 == 0x4)) || (iVar1 == 0x5)) ||
             ((iVar1 == 0x6 && (iVar2 == 0x5)))))) || (iVar1 == 0x8)) ||
          ((iVar1 == 0x6 && (iVar2 == 0x8)))) && (*uStack_10 != 0x0))
      {
        return *uStack_10;
      }
    }
  }
  return 0x0;
}
