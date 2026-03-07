/*
 * Source: outpost.c
 * Chunk: 30/117
 * Original lines: 33510-34596
 * Boundaries: top-level declarations/definitions only
 */




// Reads comma-separated integer values (x4) from "OUTPOST.INI" for a given index and
// stores them in the object structure at offset 0x22. Uses GetPrivateProfileString16,
// strtok, and atoi.

void __stdcall16far
Configuration_Manager_Read_Indexed_Values_Logic(void *this,int index)
{
  char *pcVar1;
  int iVar2;
  uint in_DX;
  undefined2 unaff_SI;
  int in_stack_00000008;
  
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),
             (dword *)CONCAT22((int)((void **)&PTR_s_unknown_1050_13fa_1050_1446)
                                    [in_stack_00000008],(dword *)&g_HeapContext),
             (void *)CONCAT22(0x13b8,(void *)((ulong)((void **)
                                                     &PTR_s_unknown_1050_13fa_1050_1446)
                                                     [in_stack_00000008] >> 0x10)),
             (dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcVar1 = strtok_far_optimized_with_state
                       ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                        (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10));
    in_DX |= (uint)pcVar1;
    if (in_DX != 0x0)
    {
      iVar2 = atoi_wrapper_far(pcVar1);
      *(int *)((int)this + in_stack_00000008 * 0x8 + 0x22) = iVar2;
      pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
      in_DX |= (uint)pcVar1;
      if (in_DX != 0x0)
      {
        iVar2 = atoi_wrapper_far(pcVar1);
        *(int *)((int)this + in_stack_00000008 * 0x8 + 0x24) = iVar2;
        pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
        in_DX |= (uint)pcVar1;
        if (in_DX != 0x0)
        {
          iVar2 = atoi_wrapper_far(pcVar1);
          *(int *)((int)this + in_stack_00000008 * 0x8 + 0x26) = iVar2;
          pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
          if (in_DX != 0x0 || pcVar1 != NULL)
          {
            iVar2 = atoi_wrapper_far(pcVar1);
            *(int *)((int)this + in_stack_00000008 * 0x8 + 0x28) = iVar2;
          }
        }
      }
    }
  }
  return;
}



// Writes comma-separated integer values (x4) from the object structure at offset 0x22
// back to "OUTPOST.INI" for a given index. Inverse of the read logic.

void __stdcall16far
switchD_1010:2ab5::Configuration_Manager_Write_Indexed_Values_Logic
          (void *this,int index)
{
  int in_stack_00000008;
  
  if ((((*(int *)((int)this + in_stack_00000008 * 0x8 + 0x22) != 0x0) ||
       (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x24) != 0x0)) ||
      (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x26) != 0x0)) ||
     (*(int *)((int)this + in_stack_00000008 * 0x8 + 0x28) != 0x0))
  {
    sprintf_wrapper(*(undefined4 *)((int)this + 0xe),0x14ae,0x1050,
                    *(undefined4 *)((int)this + in_stack_00000008 * 0x8 + 0x22),
                    *(undefined4 *)((int)this + in_stack_00000008 * 0x8 + 0x26));
    WritePrivateProfileString16
              ((void *)*(undefined4 *)((int)this + 0xa),
               (void *)*(undefined4 *)((int)this + 0xe),
               ((void **)&PTR_s_unknown_1050_13fa_1050_1446)[in_stack_00000008],
               s_windows_1050_13b8);
  }
  return;
}



// Scalar destructor for subclass 0x6322. Resets vtable to 0x389A (segment 1008) and
// frees sub-object at offset 4.

void * __stdcall16far UI_Subclass_6322_scalar_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x6322;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Scalar deleting destructor for the global configuration manager.

void * __stdcall16far Configuration_Manager_scalar_dtor_6312(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Configuration_Manager_dtor_6312_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for Resource_Category_Object. Initializes vtable to 1010:66F0 and clears
// seven internal state pointers.

void * __stdcall16far Resource_Category_Object_ctor_66F0(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x66f0;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Finds a dynamic offset within the object structure (using `FUN_1010_6646`) and sets
// two 16-bit values at that location.

void __stdcall16far
UI_Component_Set_Dynamic_Offset_Value_Logic(void *this,int value1,int value2,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,value1,&local_4,unaff_SS);
  if (local_4 != 0x0)
  {
    *(int *)((int)this + local_4) = map_id;
    *(int *)((int)this + local_4 + 0x2) = value2;
  }
  return;
}



// Finds a dynamic offset within the object structure and returns the difference between
// two 16-bit values stored there.

int __stdcall16far
UI_Component_Get_Dynamic_Offset_Difference_Logic(void *this,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 == 0x0)
  {
    return 0x0;
  }
  return *(int *)((int)this + local_4) - *(int *)((int)this + local_4 + 0x2);
}



// Retrieves a 16-bit value from a mapped offset within a resource category object. Uses
// `Resource_Category_Map_ID_to_Offset_Logic` to resolve the field location.

int __stdcall16far
Resource_Category_Get_Mapped_Offset_Value_Logic(void *this,int map_id)
{
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 == 0x0)
  {
    return 0x0;
  }
  return *(int *)((int)this + local_4 + 0x2);
}



// Increments a 16-bit value at a mapped offset and notifies UI listeners (type 0x15)
// about the change.

void __stdcall16far
Resource_Category_Increment_Mapped_Offset_Value_Logic(void *this,int map_id)
{
  int iVar1;
  int unaff_SS;
  int local_4;
  
  Resource_Category_Map_ID_to_Offset_Logic(this,map_id,&local_4,unaff_SS);
  if (local_4 != 0x0)
  {
    iVar1 = *(int *)((int)this + local_4 + 0x2);
    *(undefined2 *)((int)this + local_4) = *(undefined2 *)((int)this + local_4);
    *(int *)((int)this + local_4 + 0x2) = iVar1 + 0x1;
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,map_id);
  }
  return;
}



// Maps resource string IDs (0x83-0x89) to specific byte offsets (10-34) within the
// category management structure. Used for dynamic property access.

void __stdcall16far
Resource_Category_Map_ID_to_Offset_Logic
          (void *arg1,int segment,int *offset_out,int map_id)
{
  undefined2 in_stack_0000000c;
  
  switch(in_stack_0000000c)
  {
  case 0x83:
    *_offset_out = 0xa;
    break;
  case 0x84:
    *_offset_out = 0xe;
    break;
  case 0x85:
    *_offset_out = 0x12;
    break;
  case 0x86:
    *_offset_out = 0x16;
    return;
  case 0x87:
    *_offset_out = 0x1a;
    return;
  case 0x88:
    *_offset_out = 0x1e;
    return;
  case 0x89:
    *_offset_out = 0x22;
    return;
  default:
    *_offset_out = 0x0;
    return;
  }
  return;
}



void * __stdcall16far Base_Object_scalar_dtor_logic_3(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Constructor for Simulator_Settings_Object. Initializes vtable to 1010:6AAC. Sets turn
// limit to 0x33 and initializes two primary flag data blocks (offsets 10 and 0x11E).

void * __stdcall16far
Simulator_Settings_Object_ctor_init_6AAC_Logic(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0x148) = 0x33;
  *(undefined2 *)CONCAT22(segment,this) = 0x6aac;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  memset_far((void *)((int)this + 0xa),segment,0x0);
  *(undefined2 *)((int)this + 0x32) = 0x1;
  *(undefined2 *)((int)this + 0x40) = 0x1;
  *(undefined2 *)((int)this + 0x46) = 0x1;
  *(undefined2 *)((int)this + 0x4e) = 0x1;
  *(undefined2 *)((int)this + 0x54) = 0x1;
  *(undefined2 *)((int)this + 0x5e) = 0x1;
  *(undefined2 *)((int)this + 0x68) = 0x1;
  *(undefined2 *)((int)this + 0x6c) = 0x1;
  *(undefined2 *)((int)this + 0x74) = 0x1;
  *(undefined2 *)((int)this + 0x78) = 0x1;
  *(undefined2 *)((int)this + 0x7a) = 0x1;
  *(undefined2 *)((int)this + 0x7e) = 0x1;
  *(undefined2 *)((int)this + 0x82) = 0x1;
  *(undefined2 *)((int)this + 0xa2) = 0x1;
  *(undefined2 *)((int)this + 0xa4) = 0x1;
  *(undefined2 *)((int)this + 0xa6) = 0x1;
  *(undefined2 *)((int)this + 0xa8) = 0x1;
  *(undefined2 *)((int)this + 0xae) = 0x1;
  *(undefined2 *)((int)this + 0xb2) = 0x1;
  *(undefined2 *)((int)this + 0xb8) = 0x1;
  *(undefined2 *)((int)this + 0xbe) = 0x1;
  *(undefined2 *)((int)this + 0xc0) = 0x1;
  *(undefined2 *)((int)this + 0xc4) = 0x1;
  *(undefined2 *)((int)this + 0xd4) = 0x1;
  *(undefined2 *)((int)this + 0xda) = 0x1;
  *(undefined2 *)((int)this + 0xe2) = 0x1;
  *(undefined2 *)((int)this + 0xfe) = 0x1;
  *(undefined2 *)((int)this + 0x100) = 0x1;
  *(undefined2 *)((int)this + 0x102) = 0x1;
  *(undefined2 *)((int)this + 0x104) = 0x1;
  *(undefined2 *)((int)this + 0x106) = 0x1;
  *(undefined2 *)((int)this + 0x108) = 0x1;
  memset_far((void *)((int)this + 0x11e),segment,0x0);
  *(undefined2 *)((int)this + 0x120) = 0x1;
  *(undefined2 *)((int)this + 0x122) = 0x1;
  *(undefined2 *)((int)this + 0x124) = 0x1;
  *(undefined2 *)((int)this + 0x126) = 0x1;
  *(undefined2 *)((int)this + 0x128) = 0x1;
  *(undefined2 *)((int)this + 0x12c) = 0x1;
  *(undefined2 *)((int)this + 0x138) = 0x1;
  return this;
}



void __stdcall16far
Simulator_Settings_Set_Flag_in_Block2_Logic(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((int)this + in_stack_0000000a * 0x2 + 0x11e) = index;
  return;
}



void __stdcall16far
Simulator_Settings_Set_Flag_in_Block1_Logic(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((int)this + in_stack_0000000a * 0x2 + 0xa) = index;
  return;
}



// Serializes Simulator_Settings to a file. Writes two data blocks (size 0x114 and 0x2A)
// and a 2-byte trailer. Sets error 0x6D0 on failure.

int __stdcall16far Simulator_Settings_Serialize_to_File_Logic(void *this,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  void *in_stack_00000008;
  undefined2 local_c [0x5];
  
  iVar1 = file_context_write_footer_marker_logic((void *)in_stack_00000008);
  if (iVar1 != 0x0)
  {
    iVar1 = file_write_check((long)in_stack_00000008,(void *)((int)this + 0xa),file_ctx)
    ;
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check((long)in_stack_00000008,(void *)((int)this + 0x11e),
                               file_ctx);
      if (iVar1 != 0x0)
      {
        local_c[0x0] = *(undefined2 *)((int)this + 0x148);
        iVar1 = file_write_check((long)in_stack_00000008,local_c,unaff_SS);
        if (iVar1 != 0x0)
        {
          return 0x1;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far
UI_Object_Collection_Remap_and_Deserialize_68c6(u32 param_1,void *param_2)
{
  int iVar1;
  void *buffer;
  int iVar2;
  int iVar3;
  void *handle_wrapper;
  void *in_DX;
  void *pvVar4;
  void *unaff_SS;
  int arg2;
  u32 local_12;
  u32 local_e;
  u32 local_a;
  u16 local_6;
  u16 local_4;
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
    return 0x0;
  }
  iVar1 = (int)param_1;
  handle_wrapper = (void *)(param_1 >> 0x10);
  iVar3 = (int)param_2;
  arg2 = (int)((ulong)param_2 >> 0x10);
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    buffer = allocate_memory(0x1020102);
    pvVar4 = in_DX;
    iVar2 = file_read_check((long)param_2,buffer,in_DX);
    if (iVar2 == 0x0) goto LAB_1010_692c;
    local_4 = 0x1;
    do
    {
      iVar2 = file_context_remap_sequence_id_by_version_logic(iVar3,arg2,local_4);
      *(undefined2 *)(iVar1 + iVar2 * 0x2 + 0xa) =
           *(undefined2 *)(local_4 * 0x2 + (int)buffer);
      local_4 += 0x1;
    } while (local_4 < 0x81);
    free_if_not_null(buffer);
    in_DX = pvVar4;
  }
  else
  {
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0xa),handle_wrapper);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    buffer = allocate_memory(0x2a002a);
    iVar2 = file_read_check((long)param_2,buffer,in_DX);
    if (iVar2 == 0x0)
    {
LAB_1010_692c:
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      free_if_not_null(buffer);
      return 0x0;
    }
    local_4 = 0x0;
    do
    {
      iVar2 = file_context_remap_id_by_version_logic(iVar3,arg2,local_4);
      *(undefined2 *)(iVar1 + iVar2 * 0x2 + 0x11e) =
           *(undefined2 *)(local_4 * 0x2 + (int)buffer);
      local_4 += 0x1;
    } while (local_4 < 0x15);
    free_if_not_null(buffer);
  }
  else
  {
    iVar2 = file_read_check((long)param_2,(void *)(iVar1 + 0x11e),handle_wrapper);
    if (iVar2 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
  }
  iVar2 = file_read_check((long)param_2,&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d2;
    return 0x0;
  }
  iVar3 = file_context_remap_sequence_id_by_version_logic(iVar3,arg2,local_6);
  *(int *)(iVar1 + 0x148) = iVar3;
  return 0x1;
}



void * __stdcall16far Base_Object_scalar_dtor_logic_4(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for Resource_Summary_Manager. Initializes vtable to 1010:7E28.
// Initializes sub-object at offset 10 with vtable 1010:7E38. Registers with global
// resource managers (IDs 3 and 0x2F) via 1050:0ED0.

void * __stdcall16far
Resource_Summary_Manager_ctor_init_7E28_Logic(void *this,int segment,int id)
{
  undefined2 *puVar1;
  long lVar2;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x7e28;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x7e38;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  *(undefined2 *)((int)this + 0x14) = (int)lVar2;
  *(undefined2 *)((int)this + 0x16) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x14) + 0x4);
  (*(code *)*puVar1)();
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  *(undefined2 *)((int)this + 0x22) = (int)lVar2;
  *(undefined2 *)((int)this + 0x24) = (int)((ulong)lVar2 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x22) + 0x4);
  (*(code *)*puVar1)();
  return this;
}



// Destructor for the Resource Summary Manager. It unregisters itself from multiple
// simulator resource trackers (offsets 10 and 0x11) and cleans up sub-objects before
// calling the base destructor.

void __stdcall16far Resource_Summary_Manager_dtor_7E28_Logic(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  int in_stack_00000006;
  undefined4 uStack_e;
  
  *_this = 0x7e28;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x7e38;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(int *)((int)this + 0x1e) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x1c) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1c);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  if (*(long *)((int)this + 0x14) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar2 = 0x0;
      iVar4 = 0x0;
    }
    else
    {
      iVar2 = (int)this + 0xa;
      iVar4 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x14),CONCAT22(iVar4,iVar2));
  }
  if (*(long *)((int)this + 0x22) != 0x0)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar2 = 0x0;
      iVar4 = 0x0;
    }
    else
    {
      iVar2 = (int)this + 0xa;
      iVar4 = in_stack_00000006;
    }
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x22),CONCAT22(iVar4,iVar2));
  }
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x22) = 0x0;
  if (_this == NULL)
  {
    puVar3 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar3 = (undefined2 *)((int)this + 0xa);
  }
  uStack_e = (undefined2 *)CONCAT22(in_stack_00000006,puVar3);
  *uStack_e = (char *)s_1_1050_389a;
  puVar3[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Validates a list of entity IDs against a resource tracker. It iterates through the
// provided variable arguments and returns true (1) only if all IDs are successfully
// validated via `FUN_1010_a5ca`.

int __cdecl16far
Resource_Tracker_Batch_Validate_IDs_Logic(undefined4 param_1,int param_2)
{
  ulong uVar1;
  int *piVar2;
  int iVar3;
  undefined2 unaff_SS;
  int iStack_a;
  int *piStack_8;
  
  _piStack_8 = (int *)CONCAT22(unaff_SS,&stack0x000a);
  iStack_a = param_2;
  do
  {
    piVar2 = _piStack_8;
    if (iStack_a == 0x0)
    {
      return 0x1;
    }
    uVar1 = (ulong)_piStack_8 >> 0x10;
    _piStack_8 = (int *)CONCAT22((int)uVar1,piStack_8 + 0x1);
    iVar3 = *piVar2;
    Simulator_Validate_ID_8000001_Logic((int)*(undefined4 *)((int)param_1 + 0x14));
    iStack_a = iStack_a + -0x1;
  } while (iVar3 == 0x0);
  return 0x0;
}



// UI Event Dispatcher. Maps entity types and events to UI notifications. Uses virtual
// notification broadcasts to bridge simulation state to UI updates. Batch validates IDs
// via 1010:6CA2.

int UI_Event_Dispatcher_Map_Entity_to_Notification_Logic
              (undefined2 param_1,void *param_2,int param_3)
{
  int iVar1;
  void *this;
  int type_id;
  undefined2 uVar2;
  
  if (false)
  {
LAB_1010_703e:
    return 0x0;
  }
  this = (void *)param_2;
  type_id = (int)((ulong)param_2 >> 0x10);
  switch(param_3)
  {
  case 0x1:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1);
    UI_Window_Broadcast_Msg_EB_by_Type_Logic(this,type_id);
    return 0x1;
  default:
    goto LAB_1010_703e;
  case 0x4:
    uVar2 = 0x2;
    break;
  case 0x5:
    uVar2 = 0x3;
    break;
  case 0x6:
    uVar2 = 0x4;
    break;
  case 0x7:
    uVar2 = 0x5;
    break;
  case 0x9:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x6);
  case 0x2e:
    uVar2 = 0x38;
    break;
  case 0xa:
  case 0x80:
    uVar2 = 0x2d;
    break;
  case 0xb:
    uVar2 = 0x7;
    break;
  case 0xc:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x21:
  case 0x75:
  case 0x81:
    if (param_3 == 0x75)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x8);
      UI_Broadcast_Virtual_Notification_Wrapper();
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (this,type_id,0x810007,0x17,0x18,0x19,0x21,0xc,0x75);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x10);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x3,0x17,0x18,0x19);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x11);
    }
    if (param_3 == 0x21)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x14);
    }
    if (param_3 != 0xc)
    {
      return 0x1;
    }
    uVar2 = 0x9;
    goto LAB_1010_6d4c;
  case 0xe:
    uVar2 = 0xc;
    goto LAB_1010_6d4c;
  case 0x10:
  case 0x11:
  case 0x13:
    uVar2 = 0xd;
    break;
  case 0x12:
    uVar2 = 0xe;
    break;
  case 0x1b:
  case 0x1f:
  case 0x5b:
  case 0x78:
  case 0x7e:
  case 0x7f:
    if (param_3 == 0x7e)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x2c);
    }
    if (param_3 == 0x5b)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x38);
    }
    if (param_3 == 0x1f)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x3f);
    }
    if (param_3 == 0x7f)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x42);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (param_2,0x5,0x1b,0x1f,0x5b,0x78,0x7e);
    if ((iVar1 == 0x0) &&
       (iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                          (param_2,0x5,0x1b,0x1f,0x5b,0x78,0x7f), iVar1 == 0x0))
    {
      return 0x1;
    }
    uVar2 = 0x37;
    break;
  case 0x1d:
  case 0x2a:
  case 0x2c:
  case 0x3c:
  case 0x3d:
  case 0x4b:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x1d,0x5a);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x12);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (this,type_id,0x8,0x2c002a,0x3c,0x3d,0x4b,0x53,0x54,0x55);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1a);
    }
    if (param_3 == 0x2c)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1d);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x5a,0x2c);
    if (iVar1 == 0x0)
    {
      return 0x1;
    }
    uVar2 = 0x1c;
    break;
  case 0x22:
    uVar2 = 0x15;
    break;
  case 0x25:
    uVar2 = 0x16;
    break;
  case 0x26:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x17);
  case 0x1e:
    uVar2 = 0x13;
    break;
  case 0x27:
    uVar2 = 0x18;
    break;
  case 0x29:
    uVar2 = 0x19;
    break;
  case 0x2b:
    uVar2 = 0x1b;
    break;
  case 0x2f:
  case 0x36:
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x2f,0x36);
    if (iVar1 == 0x0)
    {
      return 0x0;
    }
    uVar2 = 0x1e;
    break;
  case 0x30:
    uVar2 = 0x1f;
    break;
  case 0x31:
    uVar2 = 0x35;
    break;
  case 0x33:
    uVar2 = 0x21;
    break;
  case 0x34:
    uVar2 = 0x22;
    break;
  case 0x35:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x23);
  case 0x65:
  case 0x66:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    uVar2 = 0x34;
    break;
  case 0x38:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x24);
    uVar2 = 0x3d;
    break;
  case 0x39:
    uVar2 = 0x25;
    break;
  case 0x3e:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x26);
    UI_Broadcast_Virtual_Notification_Wrapper();
    uVar2 = 0x27;
    break;
  case 0x40:
    uVar2 = 0x2a;
    break;
  case 0x41:
    uVar2 = 0x39;
    break;
  case 0x42:
    uVar2 = 0x3a;
    break;
  case 0x44:
    uVar2 = 0x36;
    break;
  case 0x45:
    uVar2 = 0x3b;
    break;
  case 0x49:
    uVar2 = 0x29;
    break;
  case 0x50:
    uVar2 = 0x2b;
    break;
  case 0x56:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x3c);
    uVar2 = 0x3e;
    break;
  case 0x5d:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x2f);
    uVar2 = 0x40;
    break;
  case 0x5e:
  case 0x60:
    uVar2 = 0x2f;
    break;
  case 0x5f:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x34);
    uVar2 = 0x41;
    break;
  case 0x61:
    uVar2 = 0x30;
    break;
  case 0x63:
    uVar2 = 0x31;
    break;
  case 0x64:
    uVar2 = 0x24;
    break;
  case 0x68:
    uVar2 = 0x32;
    break;
  case 0x69:
    uVar2 = 0x33;
    break;
  case 0x76:
    uVar2 = 0xa;
LAB_1010_6d4c:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,uVar2);
    uVar2 = 0xb;
  }
  UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,uVar2);
  return 0x1;
}



// Invokes a virtual notification method on an object stored at offset 0x14 of the
// parent. Used to bridge simulation events to UI updates.

void UI_Broadcast_Virtual_Notification_Wrapper
               (undefined2 param_1,undefined4 param_2,int param_3)
{
  UI_Dispatch_Global_Event_Logic(*(long *)((int)param_2 + 0x14),param_3);
  return;
}



void __stdcall16far UI_Window_Event_Dispatcher_7174(u32 param_1,uint param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (param_2 == 0x13)
  {
    UI_Window_Manager_Destroy_Entity_Window_Logic
              ((void *)(iVar1 + -0xa),
               *(long *)((int)*(undefined4 *)(iVar1 + 0x18) + 0x28));
    return;
  }
  if (param_2 < 0x14)
  {
    if ((char)param_2 == '\x01')
    {
      *(undefined4 *)(iVar1 + 0xa) = 0x0;
      *(undefined4 *)(iVar1 + 0x18) = 0x0;
      return;
    }
    if ((char)param_2 == '\x05')
    {
      UI_Window_Broadcast_Msg_EB_Logic((void *)(iVar1 + -0xa));
      return;
    }
  }
  return;
}



// Determines UI actions for entities. Classifies entity types and uses
// UI_Window_Focus_Manager_Logic to bring existing windows to top, or factory logic to
// create new ones.

int __stdcall16far
UI_Determine_and_Dispatch_Entity_Action_Logic(void *this,int action_mode)
{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  void *this_ptr;
  void *entity_ref;
  int in_stack_00000008;
  undefined2 *in_stack_0000000a;
  int iStack_14;
  int iStack_e;
  
  this_ptr = (void *)UI_Get_Entity_by_Index_Logic
                               ((int)*(undefined4 *)((int)this + 0x14),
                                (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                                *in_stack_0000000a,
                                *(undefined4 *)((undefined2 *)in_stack_0000000a + 0x1));
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  if (this_ptr == NULL)
  {
    return 0x0;
  }
  entity_ref = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar5 = (int)((ulong)entity_ref >> 0x10);
  iVar3 = (int)entity_ref;
  if ((iVar5 != 0x0 || iVar3 != 0x0) && (*(long *)(iVar3 + 0x1c) == 0x8000002))
  {
    return 0x0;
  }
  uVar1 = *(undefined4 *)((int)this_ptr + 0x2e);
  iStack_e = (int)uVar1;
  if ((*(int *)((int)this_ptr + 0x30) != 0x0 || iStack_e != 0x0) &&
     (*(long *)(iStack_e + 0x200) == 0x8000002))
  {
    return 0x0;
  }
  iVar2 = UI_Get_U16_at_Offset_C_Logic
                    ((int)*(undefined4 *)((int)this + 0x14),
                     (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                     (long)entity_ref);
  if (*(int *)(iVar3 + 0x12) == 0x4)
  {
    in_stack_00000008 = 0x4;
  }
  else if (*(int *)(iVar3 + 0x12) == 0x7)
  {
    in_stack_00000008 = 0x5;
  }
  if (in_stack_00000008 != 0x2)
  {
    if (in_stack_00000008 == 0x3)
    {
      if ((iVar2 == 0xb) || (iVar2 == 0x37))
      {
        iStack_14 = 0xb;
      }
      else
      {
        iStack_14 = 0xa;
      }
      goto LAB_1010_72a7;
    }
    if (in_stack_00000008 == 0x4)
    {
      iStack_14 = 0x17;
      goto LAB_1010_72a7;
    }
    if (in_stack_00000008 != 0x5)
    {
      iStack_14 = UI_Classify_Entity_Type_for_Notification_Logic(this,(long)entity_ref);
      goto LAB_1010_72a7;
    }
  }
  iStack_14 = 0xc;
LAB_1010_72a7:
  if (iStack_14 == 0x0)
  {
    return 0x0;
  }
  iVar3 = UI_Window_Focus_Manager_Logic(this,action_mode,0x0,this_ptr);
  if (iVar3 == 0x0)
  {
    UI_Specialized_Dialog_Factory_Logic(_this,0x0,0x0,iStack_14,this_ptr);
  }
  return 0x1;
}
