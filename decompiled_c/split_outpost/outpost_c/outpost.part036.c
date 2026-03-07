/*
 * Source: outpost.c
 * Chunk: 36/117
 * Original lines: 40246-41414
 * Boundaries: top-level declarations/definitions only
 */




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



char * __stdcall16far Resource_Manager_Get_String_with_Context_Validation(void)
{
  void *in_AX;
  int in_DX;
  void *pvVar1;
  
  Resource_Manager_Validate_Active_Context_Logic();
  if (in_DX == 0x0 && in_AX == NULL)
  {
    return NULL;
  }
  pvVar1 = UI_Component_Get_FarPtr_at_1FA((void *)CONCAT22(in_DX,in_AX));
  return (char *)((ulong)pvVar1 >> 0x10);
}



void __stdcall16far
Resource_Manager_Set_String_with_Context_Validation
          (undefined2 param_1,undefined2 param_2,long param_3)
{
  int in_AX;
  int in_DX;
  
  if (param_3 != 0x0)
  {
    Resource_Manager_Validate_Active_Context_Logic();
    if (in_DX != 0x0 || in_AX != 0x0)
    {
      UI_Component_Set_String_at_1FA(in_AX,in_DX,param_3);
    }
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



// Formats full entity name labels (e.g. 'Name [Class]'). Resolves name ID via 1008:BD80
// and applies template via sprintf_wrapper using coordinates from 1008:8086.

char * __stdcall16far Entity_Format_Full_Name_Label_Logic(char *dest,long entity_ref)
{
  char *pcVar1;
  undefined2 in_DX;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *in_stack_0000000c;
  undefined2 in_stack_0000fbec;
  char local_40c [0x400];
  u16 uStack_c;
  void *pvStack_a;
  undefined4 uStack_6;
  
  uStack_6 = (char *)entity_ref;
  if (entity_ref == 0x0)
  {
    pcVar1 = allocate_memory(CONCAT22(in_stack_0000fbec,0x100));
    uStack_6 = (char *)CONCAT22(in_DX,pcVar1);
  }
  pvStack_a = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_0000000c);
  uVar2 = (undefined2)((ulong)pvStack_a >> 0x10);
  uStack_c = *(u16 *)((int)pvStack_a + 0xc);
  pcVar1 = Lookup_Entity_Name_by_ID_Logic_bd80(uStack_c);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_40c),(char *)CONCAT22(uVar2,pcVar1));
  UI_Component_Get_Coordinates_Logic_8086(in_stack_0000000c);
  sprintf_wrapper(uStack_6,0x38c5,0x1050,local_40c);
  return (char *)uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sophisticated label formatter that selects category strings and appends status
// suffixes (e.g. population, condition) based on the entity's type and current
// simulation state.

char * __stdcall16far
Entity_Format_Detailed_Status_Label_Logic(long context,char *dest,long entity_ref)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 in_DX;
  void *pvVar4;
  long lVar5;
  undefined2 in_stack_0000000a;
  undefined2 uVar6;
  int arg1;
  int arg2;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 in_stack_0000ffe6;
  char *pcVar11;
  undefined2 uVar12;
  char *pcVar13;
  undefined4 uStack_6;
  
  uStack_6 = _dest;
  if (_dest == NULL)
  {
    pcVar1 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x100));
    uStack_6 = (char *)CONCAT22(in_DX,pcVar1);
  }
  pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  lVar5 = Entity_Get_Indirect_Long_at_Offset_14_Logic(context);
  uVar10 = (undefined2)((ulong)lVar5 >> 0x10);
  pcVar1 = (char *)uStack_6;
  uVar8 = (undefined2)((ulong)uStack_6 >> 0x10);
  arg1 = (int)_p_GlobalResourceManager;
  arg2 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  switch(*(undefined2 *)((int)pvVar4 + 0x12))
  {
  case 0x3:
  case 0x4:
  case 0x5:
    uVar10 = 0x5f4;
    break;
  case 0x6:
    pcVar13 = (char *)*(undefined4 *)((int)lVar5 + 0x90);
    pcVar7 = (char *)pcVar13;
    uVar9 = (undefined2)((ulong)pcVar13 >> 0x10);
    LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(0x531,uVar8));
    uVar2 = strlen_get_length(uStack_6);
    pcVar11 = pcVar7;
    uVar12 = uVar9;
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x61e);
    pcVar13 = (char *)CONCAT22(uVar10,pcVar3);
    uVar6 = 0x38d7;
    goto LAB_1010_c4f9;
  case 0x7:
  case 0x9:
    uVar10 = 0x531;
    break;
  case 0x8:
    pcVar13 = (char *)*(undefined4 *)((int)lVar5 + 0x90);
    LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(0x5f5,uVar8));
    uVar2 = strlen_get_length(uStack_6);
    pcVar7 = (char *)pcVar13;
    uVar9 = (undefined2)((ulong)pcVar13 >> 0x10);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x61e);
    uVar6 = 0x38cd;
    pcVar11 = pcVar3;
    uVar12 = uVar10;
LAB_1010_c4f9:
    sprintf_wrapper((char *)CONCAT22(uVar8,pcVar1 + uVar2),uVar6,0x1050,pcVar3,uVar10,
                    pcVar7,uVar9,pcVar11,uVar12,uVar2,pcVar13);
  default:
    goto switchD_1010_c56d_default;
  }
  LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(uVar10,uVar8));
switchD_1010_c56d_default:
  return pcVar1;
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



// Iterates through a linked list of entities, resolving their names and values, and
// populates a UI list/grid with formatted strings. Used for detailed summary views.

int __stdcall16far
UI_Report_List_Populate_Entity_Details_Logic
          (undefined2 param_1,undefined2 param_2,int *param_3,int param_4,long param_5,
          undefined4 param_6,undefined4 param_7)
{
  astruct_488 *uVar1;
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint16_t uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined4 uStack_41c;
  char local_418 [0x400];
  int iStack_18;
  undefined4 uStack_16;
  u16 uStack_12;
  astruct_488 *paStack_10;
  undefined1 local_c [0x8];
  int iStack_4;
  
  iStack_4 = param_4;
  init_long_pair(local_c,param_5);
  do
  {
    paStack_10 = (astruct_488 *)get_next_list_item(local_c);
    uVar3 = (uint)((ulong)paStack_10 >> 0x10);
    uVar1 = (astruct_488 *)paStack_10;
    uVar4 = uVar3 | (uint)uVar1;
    if (uVar4 == 0x0)
    {
      return iStack_4;
    }
    uStack_12 = uVar1->field7_0xa;
    uStack_16 = NULL;
    if (uVar1->field4_0x4 == 0x0)
    {
      if (uVar1->field5_0x6 == 0x0)
      {
        if (uVar1->field6_0x8 == 0x0)
        {
          return 0x0;
        }
        pcVar1 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(uVar1->field6_0x8);
      }
      else
      {
        pcVar1 = Lookup_Entity_Category_Name_by_ID_Logic_c222(uVar1->field5_0x6);
      }
    }
    else
    {
      pcVar1 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uVar1->field4_0x4);
    }
    uStack_16 = (char *)CONCAT22(uVar4,pcVar1);
    iStack_18 = *(int *)((int)paStack_10 + 0xc);
    *param_3 = *param_3 + iStack_18;
    uVar8 = (undefined2)((ulong)param_7 >> 0x10);
    iVar6 = (int)param_7;
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    pvVar2 = (void *)(*(int *)(iVar6 + 0x2) + iStack_4 * 0xa);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    uVar9 = (undefined2)((ulong)param_6 >> 0x10);
    iVar7 = (int)param_6;
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(iStack_4 * 0x2 + iVar7);
    sprintf_wrapper(local_418);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    iStack_4 += 0x1;
    pvVar2 = (void *)(*(int *)(iVar6 + 0x2) + iStack_4 * 0xa);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(iStack_4 * 0x2 + iVar7);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_418),uStack_16);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
    pvVar2 = (void *)((iStack_4 + 0x1) * 0xa + *(int *)(iVar6 + 0x2));
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)((iStack_4 + 0x1) * 0x2 + iVar7)
    ;
    iStack_4 += 0x2;
    sprintf_wrapper(local_418);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
  } while( true );
}



// Populates a UI list by iterating through two parallel data collections. It formats
// each entry with a numeric value using a resource string template.

int __stdcall16far
UI_Report_List_Populate_Parallel_Collections_Logic
          (undefined2 param_1,undefined2 param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,astruct_487 *param_7)
{
  uint16_t uVar1;
  void *pvVar2;
  uint16_t uVar3;
  astruct_487 *uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  uint uStack_5e;
  int iStack_5c;
  uint uStack_5a;
  undefined4 uStack_58;
  char local_54 [0x52];
  
  uStack_5e = param_3;
  uStack_5a = param_3;
  iStack_5c = 0x0;
  while( true )
  {
    uVar6 = (undefined2)((ulong)param_7 >> 0x10);
    uVar4 = (astruct_487 *)param_7;
    if (*(int *)param_7 - 0x1U < uStack_5e)
    {
      return uStack_5e;
    }
    uVar1 = uVar4->field3_0x4;
    pvVar2 = (void *)(uVar4->field2_0x2 + uStack_5e * 0xa);
    uVar5 = (undefined2)((ulong)param_4 >> 0x10);
    if ((*(long *)(iStack_5c * 0x4 + (int)param_5) == 0x0) &&
       (*(long *)(iStack_5c * 0x4 + (int)param_4) == 0x0)) break;
    uVar3 = uVar1;
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_54),
                     (char *)*(undefined4 *)(iStack_5c * 0x4 + (int)param_4));
    uVar5 = (undefined2)((ulong)param_6 >> 0x10);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(uStack_5a * 0x2 + (int)param_6)
    ;
    UI_Component_Set_Metadata_Strings_a626
              ((void *)CONCAT22(uVar1,pvVar2),(char *)CONCAT22(unaff_SS,local_54),uVar3)
    ;
    sprintf_wrapper(local_54);
    uVar1 = uVar4->field3_0x4;
    pvVar2 = (void *)(uVar4->field2_0x2 + (uStack_5e + 0x1) * 0xa);
    uStack_58 = (void *)CONCAT22(uVar1,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) =
         *(undefined2 *)((uStack_5a + 0x1) * 0x2 + (int)param_6);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_58,(char *)CONCAT22(unaff_SS,local_54),uVar1);
    uStack_5e += 0x2;
    uStack_5a += 0x2;
    iStack_5c += 0x1;
  }
  return uStack_5e;
}



// Populates a UI list with a series of status or error messages. It initializes a
// temporary buffer and copies it into the target grid slots.

void __stdcall16far
UI_Report_List_Populate_Status_Messages_Logic
          (undefined2 param_1,undefined2 param_2,uint param_3,undefined4 param_4,
          uint *param_5)
{
  undefined4 *puVar1;
  uint16_t uVar2;
  undefined4 uVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined2 unaff_SS;
  uint uStack_5a;
  undefined *local_54;
  undefined4 local_52 [0x14];
  
  local_54 = PTR_s_NewFailedMsg_1050_393f;
  puVar6 = local_52;
  for (iVar4 = 0x13; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar1 = puVar6;
    puVar6 = puVar6 + 0x1;
    *puVar1 = 0x0;
  }
  *(undefined2 *)puVar6 = 0x0;
  *(undefined1 *)(undefined2 *)((int)puVar6 + 0x2) = 0x0;
  uStack_5a = param_3;
  while( true )
  {
    uVar7 = (undefined2)((ulong)param_5 >> 0x10);
    if (*param_5 <= uStack_5a) break;
    uVar3 = *(undefined4 *)((uint *)param_5 + 0x1);
    uVar2 = ((uint *)param_5)[0x2];
    pvVar5 = (void *)((int)uVar3 + uStack_5a * 0xa);
    *(undefined2 *)((int)pvVar5 + 0x4) = *(undefined2 *)(uStack_5a * 0x2 + (int)param_4)
    ;
    uStack_5a += 0x1;
    UI_Component_Set_Metadata_Strings_a626
              ((void *)CONCAT22((int)((ulong)uVar3 >> 0x10),pvVar5),
               (char *)CONCAT22(unaff_SS,&local_54),uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Adds a labeled entry followed by an empty separator entry to a UI list or grid. Uses
// resource string 0x590 for the label.

int __stdcall16far
UI_Report_List_Add_Empty_Entry_Logic
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 param_4,
          astruct_486 *param_5)
{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  uint16_t uVar4;
  undefined2 in_DX;
  astruct_486 *iVar6;
  undefined2 uVar5;
  undefined2 uVar6;
  
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x590);
  uVar5 = (undefined2)((ulong)param_5 >> 0x10);
  iVar6 = (astruct_486 *)param_5;
  uVar4 = iVar6->field3_0x4;
  pvVar3 = (void *)(iVar6->field2_0x2 + param_3 * 0xa);
  uVar6 = (undefined2)((ulong)param_4 >> 0x10);
  *(undefined2 *)((int)pvVar3 + 0x4) = *(undefined2 *)(param_3 * 0x2 + (int)param_4);
  UI_Component_Set_Metadata_Strings_a626
            ((void *)CONCAT22(uVar4,pvVar3),(char *)CONCAT22(in_DX,pcVar2),uVar4);
  strcpy_optimized((char *)CONCAT22(in_DX,pcVar2),s__1050_3941);
  uVar4 = param_3 + 0x1;
  uVar1 = *(undefined4 *)&iVar6->field2_0x2;
  pvVar3 = (void *)((int)uVar1 + uVar4 * 0xa);
  *(undefined2 *)((int)pvVar3 + 0x4) = *(undefined2 *)(uVar4 * 0x2 + (int)param_4);
  UI_Component_Set_Metadata_Strings_a626
            ((void *)CONCAT22((int)((ulong)uVar1 >> 0x10),pvVar3),
             (char *)CONCAT22(in_DX,pcVar2),uVar4);
  return uVar4;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a generic category label string (e.g., 'Planet', 'Ship', 'Facility') based
// on the entity's internal type identifier. Uses resource strings 0x597-0x599.

char * __stdcall16far Entity_Get_Category_Label_Logic(char *dest,long entity_ref)
{
  astruct_484 *uVar1;
  void *pvVar1;
  undefined2 in_stack_00000006;
  undefined2 uVar2;
  
  dest[0x13c] = '\0';
  pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  switch(*(undefined2 *)((int)(void *)pvVar1 + 0x12))
  {
  case 0x1:
  case 0x2:
  case 0x4:
  case 0x7:
  case 0x9:
    uVar2 = 0x598;
    break;
  case 0x3:
  case 0x5:
    uVar2 = 0x597;
    break;
  case 0x6:
    uVar2 = 0x599;
    break;
  case 0x8:
    uVar2 = 0x5f3;
    break;
  default:
    goto switchD_1010_de53_default;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(dest + 0x13c,0x3ff)
             ,CONCAT22(uVar2,in_stack_00000006));
switchD_1010_de53_default:
  return dest + 0x13c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a status-related string (e.g., 'Active', 'Disabled') for an entity based on
// a state check from the global simulator context.

char * __stdcall16far Entity_Get_Status_Label_Logic(char *dest,long entity_ref)
{
  u16 uVar1;
  astruct_483 *uVar2;
  undefined2 in_stack_00000006;
  undefined2 uVar3;
  
  dest[0x13c] = '\0';
  uVar1 = UI_Component_Get_Special_State_Value_809c((void *)entity_ref);
  if (uVar1 == 0x0)
  {
    uVar3 = 0x531;
  }
  else
  {
    uVar3 = 0x5f4;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(dest + 0x13c,0x3ff)
             ,CONCAT22(uVar3,in_stack_00000006));
  return dest + 0x13c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates a dynamically allocated array with 16-bit identifiers for active research
// projects or components. It filters the global simulator state (indices 1-66) based on
// the provided category code.

void __stdcall16far
Simulator_Populate_Active_ID_List_Logic
          (undefined4 param_1,uint param_2,int *param_3,int *param_4,void *param_5)
{
  int iVar1;
  int *array_base;
  int iVar2;
  void *pvVar3;
  u16 uVar4;
  u16 uVar5;
  int *piVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  void *entity_ref;
  long lVar8;
  int arg1;
  int arg2;
  int iStack_22;
  int iStack_1e;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  
  param_4[0x0] = 0x0;
  param_4[0x1] = 0x0;
  *param_3 = 0x0;
  entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(param_5);
  iVar2 = *(int *)((int)entity_ref + 0x12);
  arg1 = (int)param_1;
  arg2 = (int)((ulong)param_1 >> 0x10);
  iVar1 = UI_Get_U16_at_Offset_C_Logic(arg1,arg2,(long)entity_ref);
  lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  uVar4 = (u16)((ulong)lVar8 >> 0x10);
  piVar6 = (int *)param_4;
  uVar7 = (undefined2)((ulong)param_4 >> 0x10);
  if (param_2 == 0x13)
  {
    iStack_22 = 0x0;
    while (iStack_22 += 0x1, iStack_22 < 0x43)
    {
      iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
      if (iVar2 != 0x0)
      {
        *param_3 = *param_3 + 0x1;
      }
    }
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,*param_3 * 0x2));
    *param_4 = (int)pvVar3;
    piVar6[0x1] = uVar4;
    if (uVar4 != 0x0 || *param_4 != 0x0)
    {
      iStack_22 = 0x0;
      for (iStack_1e = 0x0; iStack_1e < *param_3; iStack_1e += 0x1)
      {
        do
        {
          iStack_22 += 0x1;
          if (0x42 < iStack_22) goto LAB_1010_e0d4;
          iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
        } while (iVar2 == 0x0);
        *(int *)(iStack_1e * 0x2 + (int)*(undefined4 *)param_4) = iStack_22;
LAB_1010_e0d4:
      }
    }
  }
  else if (param_2 < 0x14)
  {
    if ((char)param_2 == '\x06')
    {
      if (((iVar2 == 0x5) || (iVar2 == 0x6)) || (iVar2 == 0x8))
      {
        array_base = (int *)((int)lVar8 + 0x11e);
        if (iVar1 == 0xf)
        {
          iStack_14 = 0xf;
          iStack_16 = 0x13;
        }
        else if (iVar1 == 0xe)
        {
          iStack_16 = 0x4;
          iStack_14 = 0x1;
        }
        else
        {
          iStack_16 = 0xe;
          iStack_14 = 0x1;
        }
        uVar5 = uVar4;
        iVar2 = Array_Count_NonZero_Entries_in_Range_Logic
                          (arg1,arg2,iStack_16,iStack_14,array_base,uVar4);
        *param_3 = iVar2 + 0x1;
        if (iVar2 + 0x1 != 0x0)
        {
          pvVar3 = allocate_memory(CONCAT22(unaff_SI,*param_3 * 0x2));
          *param_4 = (int)pvVar3;
          piVar6[0x1] = uVar5;
          iStack_18 = 0x0;
          for (iStack_1a = iStack_14; iStack_1a <= iStack_16; iStack_1a += 0x1)
          {
            if (array_base[iStack_1a] != 0x0)
            {
              *(int *)((int)*(undefined4 *)param_4 + iStack_18 * 0x2) = iStack_1a;
              iStack_18 += 0x1;
            }
          }
          *(undefined2 *)((int)*(undefined4 *)param_4 + iStack_18 * 0x2) = 0x14;
          return;
        }
      }
    }
    else if (((char)param_2 == '\a') &&
            (((iVar2 == 0x5 || (iVar2 == 0x6)) || (iVar2 == 0x8))))
    {
      iVar2 = Simulator_Get_Value_at_Offset_116_Logic(arg1);
      iVar1 = -(uint)(iVar2 == 0x0) + 0x10;
      *param_3 = iVar1;
      pvVar3 = allocate_memory(CONCAT22(unaff_SI,iVar1 * 0x2));
      *param_4 = (int)pvVar3;
      piVar6[0x1] = uVar4;
      if (uVar4 == 0x0 && *param_4 == 0x0)
      {
        *param_3 = 0x0;
        return;
      }
      for (iStack_1a = 0x0; iStack_1a < (int)(-(uint)(iVar2 == 0x0) + 0xf);
          iStack_1a += 0x1)
      {
        *(int *)(iStack_1a * 0x2 + (int)*(undefined4 *)param_4) = iStack_1a + 0x1;
      }
      *(undefined2 *)(iStack_1a * 0x2 + (int)*(undefined4 *)param_4) = 0x10;
      return;
    }
  }
  return;
}



// Iterates through a 16-bit word array within a specified index range and returns the
// count of non-zero entries.

int __stdcall16far
Array_Count_NonZero_Entries_in_Range_Logic
          (int arg1,int segment,int end_idx,int start_idx,int *array_base,u16 param_6)
{
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  for (iStack_6 = start_idx; iStack_6 <= end_idx; iStack_6 += 0x1)
  {
    if (array_base[iStack_6] != 0x0)
    {
      iStack_4 += 0x1;
    }
  }
  return iStack_4;
}
