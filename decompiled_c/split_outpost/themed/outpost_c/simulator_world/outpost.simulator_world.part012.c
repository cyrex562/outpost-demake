/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 12/56
 * Original lines (combined): 36023-38257
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Creates composite bitmap by centering a sub-region onto a UI container bitmap.
// Performs blit operations and sets result at offset 0 in resource entry.

void __stdcall16far
Resource_Manager_Composite_SubBitmap_Logic(void *this,void *container,int index)
{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  uint in_DX;
  uint uVar5;
  int unaff_SS;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  undefined1 local_26 [0x6];
  int iStack_20;
  int iStack_1e;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  uint uStack_12;
  void *pvStack_10;
  uint uStack_e;
  void *pvStack_c;
  void *pvStack_8;
  uint uStack_6;
  int iStack_4;
  
  iStack_4 = in_stack_0000000c + -0xa;
  Resource_Manager_Switch_Active_Bitmap_Logic(this,(int)container);
  if (*(long *)((int)this + 0x67c) != 0x0)
  {
    iVar1 = iStack_4 * 0xa;
    pvVar2 = Bitmap_Object_Copy_Region_To_New_Bitmap
                       ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                        CONCAT22(*(undefined2 *)(iVar1 + 0x3388),
                                 *(undefined2 *)(iVar1 + 0x338a)),
                        *(int *)(iVar1 + 0x3386),*(int *)(iVar1 + 0x3384));
    _pvStack_8 = (void *)CONCAT22(in_DX,pvVar2);
    pvStack_c = (void *)*(undefined4 *)(index + 0x14);
    pvStack_10 = get_with_lazy_init((void *)pvStack_c);
    uStack_e = in_DX;
    pvVar2 = get_with_lazy_init((void *)_pvStack_8);
    _pvStack_14 = (void *)CONCAT22(in_DX,pvVar2);
    uVar3 = *(ulong *)((int)pvVar2 + 0x4);
    if ((long)uVar3 < *(long *)((int)pvStack_10 + 0x4))
    {
      uVar3 = (ulong)*(uint *)((int)pvStack_10 + 0x4);
    }
    uVar4 = *(ulong *)((int)pvVar2 + 0x8);
    if ((long)uVar4 < *(long *)((int)pvStack_10 + 0x8))
    {
      uVar4 = (ulong)*(uint *)((int)pvStack_10 + 0x8);
    }
    uStack_18 = CONCAT22((int)uVar3,(int)uVar4);
    pvVar2 = allocate_memory(0xff001e);
    uVar5 = in_DX | (uint)pvVar2;
    if (uVar5 == 0x0)
    {
      pvVar2 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      pvVar2 = Bitmap_Object_Subclass_ctor_with_alloc(pvVar2,in_DX,(int)uStack_18);
    }
    uStack_1c = (void *)CONCAT22(uVar5,pvVar2);
    Bitmap_Object_Clear_with_Color_Logic(pvVar2,(byte)uVar5);
    iStack_1e = (uStack_18._2_2_ - *(int *)((int)pvStack_10 + 0x4)) / 0x2;
    iStack_20 = (int)uStack_18 - *(int *)((int)pvStack_10 + 0x8);
    pack_3words_alt(local_26,unaff_SS,0x0,iStack_20);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),local_26);
    pack_3words_reverse(local_26,unaff_SS,0x0,0x0);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),local_26);
    *(undefined4 *)(in_stack_0000000c * 0x4 + index) = uStack_1c;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far UI_Component_Subclass_ctor_8EE2(void *this,int segment,int id)
{
  long lVar1;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x8ee2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0xa) = (int)lVar1;
  *(undefined2 *)((int)this + 0xc) = (int)((ulong)lVar1 >> 0x10);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Localized status formatting. Selects resource strings 0x436-0x43C based on entity
// state/type and performs variable substitution for population/coords.

void __stdcall16far
UI_Format_Status_Description_Logic(void *this,char *buffer,void *data)
{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u8 *puVar5;
  void *pvVar6;
  undefined2 in_stack_0000000a;
  undefined4 in_stack_0000000c;
  char *pcVar7;
  char *pcStack_2e;
  undefined4 local_10;
  void *pvStack_c;
  void *pvStack_a;
  undefined2 uStack_8;
  char *pcStack_6;
  undefined2 uStack_4;
  
  uVar4 = (undefined2)((ulong)in_stack_0000000c >> 0x10);
  iVar3 = (int)in_stack_0000000c;
  iVar1 = *(int *)(iVar3 + 0x6);
  if (iVar1 == 0x0)
  {
    uVar4 = 0x436;
  }
  else if (iVar1 == 0x1)
  {
    if (false)
    {
      return;
    }
    switch(*(undefined2 *)(iVar3 + 0x4))
    {
    case 0x1:
    case 0x2:
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uStack_4 = (undefined2)((ulong)pvVar6 >> 0x10);
      pvStack_a = (void *)pvVar6;
      local_10 = *(undefined4 *)((int)pvStack_a + 0xc);
      pvStack_c = (void *)*(int *)((int)pvStack_a + 0x10);
      uStack_8 = uStack_4;
      if (0x0 < (int)pvStack_c)
      {
        pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x437);
        _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                    (char *)CONCAT22(uStack_4,pcStack_6),
                    (void *)CONCAT22(unaff_SI,pvStack_c));
        return;
      }
      break;
    case 0x3:
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uVar4 = (undefined2)((ulong)pvVar6 >> 0x10);
      local_10 = *(undefined4 *)((int)(void *)pvVar6 + 0xc);
      pvStack_c = (void *)*(int *)((int)(void *)pvVar6 + 0x10);
      if (0x0 < (int)pvStack_c)
      {
        pvStack_c = NULL;
        pvVar6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar6);
        pvVar6 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(pvVar6);
        uStack_8 = (undefined2)((ulong)pvVar6 >> 0x10);
        pvStack_a = (void *)pvVar6;
        puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                           (_p_MapContext_5740,
                            (undefined4 *)CONCAT22(unaff_SS,&local_10),pvVar6);
        pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)puVar5);
        uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
        pcStack_2e = Entity_Format_Full_Name_Label_Logic
                               ((char *)(char *)*(undefined4 *)((int)this + 0xa),0x0);
        pcVar7 = pcStack_2e;
        uVar4 = uVar2;
        pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x439);
        uStack_4 = uVar2;
        _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                    (char *)CONCAT22(uVar2,pcStack_6),(char *)CONCAT22(uVar4,pcVar7));
        goto LAB_1010_8def;
      }
      break;
    default:
      goto switchD_1010_8e11_caseD_3;
    case 0x5:
    case 0x8:
    case 0x9:
    case 0xb:
      uVar4 = 0x43a;
      goto LAB_1010_8ea5;
    }
    uVar4 = 0x438;
  }
  else if (iVar1 == 0x2)
  {
    if ((*(int *)(iVar3 + 0x4) == 0x4) || (*(int *)(iVar3 + 0x4) == 0xc))
    {
      pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,
                          (u8 *)(u8 *)*(undefined4 *)(iVar3 + 0x8));
      uVar2 = (undefined2)((ulong)pvVar6 >> 0x10);
      pcStack_2e = Entity_Format_Full_Name_Label_Logic
                             ((char *)(char *)*(undefined4 *)((int)this + 0xa),0x0);
      pcVar7 = pcStack_2e;
      uVar4 = uVar2;
      pcStack_6 = Resource_Manager_LoadString_to_Internal_Buffer
                            ((int)_p_GlobalResourceManager,
                             (int)((ulong)_p_GlobalResourceManager >> 0x10),0x43b);
      uStack_4 = uVar2;
      _wsprintf16((void *)CONCAT22(in_stack_0000000a,data),
                  (char *)CONCAT22(uVar2,pcStack_6),(char *)CONCAT22(uVar4,pcVar7));
LAB_1010_8def:
      free_if_not_null(pcStack_2e);
      return;
    }
    uVar4 = 0x43c;
  }
  else
  {
    uVar4 = 0x5d9;
  }
LAB_1010_8ea5:
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(data,0x3ff),
             CONCAT22(uVar4,in_stack_0000000a));
switchD_1010_8e11_caseD_3:
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI_Vector_Tracker_Object. Initializes vtable to 1010:9254. Allocates
// and constructs a nested sub-object at offset 4 (init 1010:1CD8) and registers with
// resource tracker 3 via 1050:0ED0.

void * __stdcall16far UI_Vector_Tracker_Object_ctor(void *this)
{
  void *pvVar1;
  int in_DX;
  void *pvVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff6;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0x9254;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x18));
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)this + 0x4) = 0x0;
  }
  else
  {
    pvVar2 = UI_Production_Item_Base_ctor_init_1cd8
                       ((void *)CONCAT22(in_DX,pvVar1),(void *)0x5,(void *)0x5);
    *(undefined2 *)((int)this + 0x4) = (void *)pvVar2;
    *(undefined2 *)((int)this + 0x6) = (int)((ulong)pvVar2 >> 0x10);
  }
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x8) = (int)lVar3;
  *(undefined2 *)((int)this + 0xa) = (int)((ulong)lVar3 >> 0x10);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a resource string based on an ID stored within a sub-component at offset
// 0x16. Duplicate logic.

char * __stdcall16far get_resource_string_from_offset_16_Logic_2(void *this)
{
  char *pcVar1;
  undefined2 in_stack_00000006;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)*(undefined4 *)((int)this + 0x16));
  return pcVar1;
}



// Scalar deleting destructor for the `Collection_Object_Subclass_958E` class.

void * __stdcall16far Collection_Object_Subclass_scalar_dtor_958E(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Collection_Object_Subclass_dtor_958E(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles randomized quantity reduction at offset 0x1E. Decrements timer at 0x1C; rolls
// random value (1, 5, or 10) for subtraction based on simulator tick count via
// 1008:8326.

int __stdcall16far UI_Object_Process_Randomized_Quantity_Decrement_Logic(void *this)
{
  int *piVar1;
  int iVar2;
  u32 uVar3;
  undefined2 in_stack_00000006;
  undefined2 uStack_8;
  
  if (*(int *)((int)this + 0x1a) != 0x0)
  {
    if (0x0 < *(int *)((int)this + 0x1c))
    {
      *(int *)((int)this + 0x1c) = *(int *)((int)this + 0x1c) + -0x1;
    }
    if ((*(int *)((int)this + 0x1c) == 0x0) && (*(int *)((int)this + 0x1e) != 0x0))
    {
      uStack_8 = 0x1;
      uVar3 = Simulator_Global_Get_Current_Tick_8326();
      iVar2 = (int)(uVar3 >> 0x10);
      if ((iVar2 != 0x0) || (0x32 < (uint)uVar3))
      {
        uStack_8 = 0x5;
      }
      if ((iVar2 != 0x0) || (0x3c < (uint)uVar3))
      {
        uStack_8 = 0xa;
      }
      if (*(int *)((int)this + 0x1e) < uStack_8)
      {
        uStack_8 = *(int *)((int)this + 0x1e);
      }
      piVar1 = (int *)((int)this + 0x1e);
      *piVar1 = *piVar1 - uStack_8;
      if (*piVar1 < 0x0)
      {
        *(undefined2 *)((int)this + 0x1e) = 0x0;
      }
      if (0x0 < *(int *)((int)this + 0x1e))
      {
        return uStack_8;
      }
      return -0x1;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Reduces quantities based on entity type. For types 0x3E, 0x41, 0x80, it halves the
// value and migrates it to a secondary collection via 1010:9FEE. Rate adjusted by
// global difficulty at 1050:13AE.

void __stdcall16far UI_Object_Process_Quantity_Reduction_and_Migration_Logic(void *this)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  int in_stack_00000006;
  int iStack_c;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  iStack_c = 0x4;
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (((undefined **)g_ModeVersion_13AE != (undefined **)&p_CurrentHeapContext) &&
     (g_ModeVersion_13AE != (undefined *)0x1))
  {
    iStack_c = 0x2;
  }
  do
  {
    while( true )
    {
      lVar7 = get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)lVar7 >> 0x10);
      iVar2 = (int)lVar7;
      if (lVar7 == 0x0)
      {
        return;
      }
      iVar3 = *(int *)(iVar2 + 0x4);
      if (iVar3 != 0x12) break;
      bVar6 = SBORROW2(*(int *)(iVar2 + 0x6),0x2);
      iVar1 = *(int *)(iVar2 + 0x6) + -0x2;
      bVar5 = iVar1 == 0x0;
LAB_1010_a151:
      if (!bVar5 && bVar6 == iVar1 < 0x0)
      {
LAB_1010_a153:
        *(int *)(iVar2 + 0x6) = *(int *)(iVar2 + 0x6) - *(int *)(iVar2 + 0x6) / iStack_c
        ;
      }
    }
    if (((iVar3 != 0x3e) && (iVar3 != 0x41)) && (iVar3 != 0x80))
    {
      if (iVar3 == 0x83)
      {
        iVar3 = *(int *)(iVar2 + 0x6);
        bVar6 = SBORROW2(iVar3,0x1);
        iVar1 = iVar3 + -0x1;
        bVar5 = iVar3 == 0x1;
        goto LAB_1010_a151;
      }
      goto LAB_1010_a153;
    }
    iVar3 = *(int *)(iVar2 + 0x6) / 0x2;
    *(int *)(iVar2 + 0x6) = *(int *)(iVar2 + 0x6) - iVar3;
    if (iVar3 == 0x0)
    {
      iVar3 = 0x1;
    }
    UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic
              (this,in_stack_00000006,iVar3);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for Simulator_Event_Dispatch_Table. Initializes vtable to 1010:E9CC.
// Populates 25 function pointer slots with defaults (1010:C7E2) and specific overrides
// for game events (e.g., 1010:C864, 1010:CC56).

void * __stdcall16far
Simulator_Event_Dispatch_Table_Object_ctor(void *this,int segment,int id)
{
  undefined2 *puVar1;
  long lVar2;
  uint uStack_4;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined4 *)((int)this + 0x138) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xe9cc;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0xe9dc;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)this + 0x138) = (int)lVar2;
  *(undefined2 *)((int)this + 0x13a) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x138) + 0x4);
  (*(code *)*puVar1)();
  memset_far((void *)((int)this + 0xa4),segment,0x0);
  memset_far((void *)((int)this + 0xe),segment,0x0);
  uStack_4 = 0x0;
  do
  {
    *(undefined4 *)((int)this + uStack_4 * 0x6 + 0xe) = 0x1010c7e2;
    *(undefined2 *)((int)this + uStack_4 * 0x6 + 0x12) = 0x0;
    uStack_4 += 0x1;
  } while (uStack_4 < 0x19);
  *(undefined4 *)((int)this + 0x4a) = 0x1010c864;
  *(undefined2 *)((int)this + 0x4e) = 0x0;
  *(undefined4 *)((int)this + 0x50) = 0x1010cc56;
  *(undefined2 *)((int)this + 0x54) = 0x0;
  *(undefined4 *)((int)this + 0x56) = 0x1010cf36;
  *(undefined2 *)((int)this + 0x5a) = 0x0;
  *(undefined4 *)((int)this + 0x2c) = 0x1010d24a;
  *(undefined2 *)((int)this + 0x30) = 0x0;
  *(undefined4 *)((int)this + 0x6e) = 0x1010d448;
  *(undefined2 *)((int)this + 0x72) = 0x0;
  *(undefined4 *)((int)this + 0x74) = 0x1010d5ae;
  *(undefined2 *)((int)this + 0x78) = 0x0;
  *(undefined4 *)((int)this + 0x98) = 0x1010d710;
  *(undefined2 *)((int)this + 0x9c) = 0x0;
  return this;
}



// Destructor for the Simulator Event Dispatch Table object. Unregisters from the
// resource tracker at offset 0x9C.

void __stdcall16far Simulator_Event_Dispatch_Table_Object_dtor(void *this)
{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int in_stack_00000006;
  undefined4 uStack_6;
  
  *_this = 0xe9cc;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0xe9dc;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(long *)((int)this + 0x138) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar1 = 0x0;
      iVar3 = 0x0;
    }
    else
    {
      iVar1 = (int)this + 0xa;
      iVar3 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x138),CONCAT22(iVar3,iVar1))
    ;
  }
  *(undefined4 *)((int)this + 0x138) = 0x0;
  if (_this == NULL)
  {
    puVar2 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this + 0xa);
  }
  uStack_6 = (undefined2 *)CONCAT22(in_stack_00000006,puVar2);
  *uStack_6 = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Update_Resource_8000001_Wrapper_1(int value)
{
  void *this_ptr;
  int in_stack_00000008;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001)
  ;
  Colony_Try_Append_to_State_Array_2622(this_ptr,in_stack_00000008);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Update_Resource_8000001_Wrapper_2(int value)
{
  void *pvVar1;
  undefined2 in_stack_00000008;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  Colony_Check_If_Value_in_State_Array_266c
            ((int)pvVar1,(int)((ulong)pvVar1 >> 0x10),in_stack_00000008);
  return;
}



int __stdcall16far Simulator_Get_Entity_Value_at_Offset_20_Logic(long entity_ref)
{
  void *pvVar1;
  void *in_stack_00000008;
  
  pvVar1 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
  return *(int *)((int)(void *)pvVar1 + 0x20);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates an ID against the 0x8000001 resource tracker in the simulator.

void __stdcall16far Simulator_Validate_ID_8000001_Logic(int id)
{
  void *this_ptr;
  int in_stack_00000008;
  
  this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001)
  ;
  UI_Colony_Get_Active_Metric_by_Index_2242(this_ptr,in_stack_00000008);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the current action or state for an entity. Handles state transitions and
// signals the simulator settings object if flags change.

void __stdcall16far
UI_Update_Entity_Action_Logic(int param_1,undefined2 param_2,u16 param_3,void *param_4)
{
  u16 index;
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  void *this_ptr;
  undefined4 *puVar4;
  
  if (param_4._2_2_ != 0x0 || (int)param_4 != 0x0)
  {
    this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)0x8000001);
    puVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(param_4);
    index = *(u16 *)((undefined4 *)puVar4 + 0x8);
    if (index != param_3)
    {
      uVar2 = param_3;
      Simulator_Validate_ID_8000001_Logic(param_1);
      if ((index != 0x70) && ((int)uVar2 < 0x0))
      {
        Colony_Set_Value_at_Index_25d8(this_ptr,uVar2 + 0x1,index);
      }
      puVar1 = (undefined2 *)((int)*puVar4 + 0x8);
      iVar3 = (*(code *)*puVar1)();
      if (param_3 != 0x70)
      {
        Simulator_Validate_ID_8000001_Logic(param_1);
        if (iVar3 < 0x0)
        {
          Colony_Set_Value_at_Index_25d8(this_ptr,iVar3 - 0x1,param_3);
        }
      }
    }
  }
  return;
}



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
