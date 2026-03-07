/*
 * Source: outpost.c
 * Chunk: 16/117
 * Original lines: 17084-18280
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global state and subsystem pointers in segment 1050 during game load.
// Performs indirect call through [PTR_DAT_1050_5748] vtable.

int __stdcall16far file_context_load_core_state_logic(void *this,void *handle_ptr)
{
  int iVar1;
  u16 uVar2;
  undefined2 unaff_SS;
  long lVar3;
  void *pvVar4;
  void *in_stack_00000008;
  undefined1 local_e [0x4];
  undefined4 uStack_a;
  undefined4 *puStack_6;
  
  puStack_6 = (undefined4 *)*_p_SimulatorGlobalState;
  uStack_a = *puStack_6;
  UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_e));
  iVar1 = Save_File_Validate_Footer_Logic_d7ba();
  if (iVar1 != 0x0)
  {
    iVar1 = Simulator_Object_Library_Load_from_File_Logic_5c52
                      (_p_SimulatorObjectLibrary,in_stack_00000008);
    if (iVar1 != 0x0)
    {
      lVar3 = Simulator_Context_Load_from_File_Comprehensive_def2
                        (_p_SimulatorWorldContext,in_stack_00000008);
      if ((int)lVar3 != 0x0)
      {
        pvVar4 = Simulator_Complex_Collection_Load_from_File_7c02
                           (_p_SimulatorTurnManager,in_stack_00000008);
        if ((int)((ulong)pvVar4 >> 0x10) != 0x0)
        {
          uVar2 = Save_File_Validate_Footer_and_Header_a65e
                            ((undefined1 *)CONCAT22(unaff_SS,local_e),in_stack_00000008)
          ;
          if (uVar2 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// Iterates through component IDs at offset 800 using global count at 1050:0334.
// References global resource manager at 1050:0ED0.
// Performs indirect calls through vtable offset 0x8 (Save method).

int __stdcall16far file_context_save_component_chunks_logic(void *this,void *handle_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if ((int)PTR_g_AllocFlags_1050_0334 <= iStack_4)
    {
      return 0x1;
    }
    puVar3 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic
                       (_p_ResourceManager,*(int *)(iStack_4 * 0x2 + 0x320));
    puVar1 = (undefined2 *)((int)*puVar3 + 0x8);
    iVar2 = (*(code *)*puVar1)(0x1010,puVar3,(int)in_stack_00000008,
                               (int)((ulong)in_stack_00000008 >> 0x10));
    if (iVar2 == 0x0) break;
    iStack_4 += 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global resource manager at 1050:0ED0.
// Performs indirect calls through vtable offset 0xC (Load method).

int __stdcall16far file_context_load_component_chunks_logic(void *this,void *handle_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_stack_00000008;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    if ((int)PTR_g_AllocFlags_1050_0334 <= iStack_4)
    {
      return 0x1;
    }
    puVar3 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic
                       (_p_ResourceManager,*(int *)(iStack_4 * 0x2 + 0x320));
    puVar1 = (undefined2 *)((int)*puVar3 + 0xc);
    iVar2 = (*(code *)*puVar1)(0x1010,puVar3,(int)in_stack_00000008,
                               (int)((ulong)in_stack_00000008 >> 0x10));
    if (iVar2 == 0x0) break;
    iStack_4 += 0x1;
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Writes formatted file header using buffer at 1050:65A0.
// Updates global error state at 1050:0310.

int __stdcall16far file_context_create_and_write_header_logic(void *this)
{
  HFILE16 HVar1;
  uint count;
  uint16_t uVar2;
  int iVar3;
  undefined2 unaff_SI;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  HVar1 = _lcreat16(0x0,(char *)CONCAT22(unaff_SI,(char *)((ulong)*_this >> 0x10)));
  *(HFILE16 *)((int)this + 0x4) = HVar1;
  if (HVar1 == 0xffff)
  {
    g_LastFileErrorMsgID = (undefined *)0x6cf;
  }
  else
  {
    PTR_DAT_1050_0000_1050_0312 = (undefined *)&p_LastAllocatedBlock;
    sprintf_wrapper(0x65a0,0x1050,(void *)PTR_s_SC_03d_1050_0314_1050_031c,
                    (int)((ulong)PTR_s_SC_03d_1050_0314_1050_031c >> 0x10),0x4);
    count = strlen_get_length((char *)0x105065a0);
    iVar3 = (int)count >> 0xf;
    uVar2 = _hwrite16(count,(char *)0x105065a0,*(HFILE16 *)((int)this + 0x4));
    if ((uVar2 == count) && (iVar3 == (int)count >> 0xf))
    {
      return 0x1;
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// Opens an existing save file and verifies that its header matches the expected
// application format.

int __stdcall16far file_context_open_and_verify_header_logic(void *this)
{
  HFILE16 HVar1;
  int iVar2;
  undefined2 unaff_BP;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0x4));
    *(undefined2 *)((int)this + 0x4) = 0xffff;
  }
  HVar1 = _lopen16(0x0,(char *)CONCAT22(unaff_BP,(char *)((ulong)*_this >> 0x10)));
  *(HFILE16 *)((int)this + 0x4) = HVar1;
  if (HVar1 == 0xffff)
  {
    g_LastFileErrorMsgID = (undefined *)0x6cf;
  }
  else
  {
    iVar2 = file_context_read_and_parse_version_logic();
    if (iVar2 != 0x0)
    {
      return 0x1;
    }
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer / Resource
// Parses save version from file header and updates global pointer at 1050:0312.
// - Version 1: Sets to 0x1.
// - Version 4: Sets to 1050:0004.
// Uses 1050:65A0 as header buffer.

int __stdcall16far file_context_read_and_parse_version_logic(void)
{
  uint count;
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined2 unaff_SS;
  undefined4 in_stack_00000004;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  char local_e [0x9];
  undefined1 uStack_5;
  int iStack_4;
  
  iStack_4 = 0x1;
  count = strlen_get_length((char *)0x105065a0);
  iStack_16 = 0x0;
  iVar2 = (int)count >> 0xf;
  iVar3 = iVar2;
  uVar1 = _hread16(count,(char *)CONCAT22(unaff_SS,local_e),
                   *(HFILE16 *)((int)in_stack_00000004 + 0x4));
  if ((iVar2 <= iVar3) && ((iVar2 < iVar3 || (count < uVar1))))
  {
    uVar1 = count;
  }
  iStack_18 = uVar1 - 0x2;
  if (iStack_18 < 0x0)
  {
    iStack_18 = 0x0;
  }
  iStack_1a = 0x2;
  while (iStack_18 != 0x0)
  {
    iStack_16 = iStack_16 * 0xa + local_e[iStack_1a] + -0x30;
    iStack_1a += 0x1;
    iStack_18 = iStack_18 + -0x1;
  }
  if (iStack_16 == 0x1)
  {
    PTR_DAT_1050_0000_1050_0312 = (undefined *)0x1;
  }
  else if (iStack_16 == 0x4)
  {
    PTR_DAT_1050_0000_1050_0312 = (undefined *)&p_LastAllocatedBlock;
  }
  else
  {
    uStack_5 = 0x0;
    PTR_DAT_1050_0000_1050_0312 = (undefined *)0x1;
    iStack_4 = 0x0;
  }
  sprintf_wrapper(0x65a0,0x1050,(void *)PTR_s_SC_03d_1050_0314_1050_031c,
                  (int)((ulong)PTR_s_SC_03d_1050_0314_1050_031c >> 0x10),
                  PTR_DAT_1050_0000_1050_0312);
  return iStack_4;
}



// Closes the file handle stored in the provided context structure using `_lclose16`.
// Resets the handle to 0xFFFF upon success. Returns 1 if successful, or 0 if an error
// occurred during closing.

int __stdcall16far file_context_close_handle_logic(void *this)
{
  HFILE16 HVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x4) != -0x1)
  {
    HVar1 = _lclose16(*(HFILE16 *)((int)this + 0x4));
    if (HVar1 == 0xffff)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d1;
      return 0x0;
    }
    *(undefined2 *)((int)this + 0x4) = 0xffff;
    g_LastFileErrorMsgID = NULL;
  }
  return 0x1;
}



// Simple utility to set a 16-bit value at a far pointer.

void * __stdcall16far set_u16_logic(void *dest,int value)
{
  undefined2 in_stack_00000008;
  
  *_dest = in_stack_00000008;
  return dest;
}



// Targeted Scan Finding: Far Pointer
// Checks global save version pointer at 1050:0312 to determine if ID remapping is
// required.

int __stdcall16far file_context_remap_id_by_version_logic(int arg1,int arg2,int id)
{
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    switch(id)
    {
    case 0x1:
      id = 0x1;
      break;
    case 0x2:
      id = 0x2;
      break;
    case 0x3:
      id = 0x3;
      break;
    case 0x4:
      id = 0x5;
      break;
    case 0x5:
      id = 0x4;
      break;
    case 0x6:
      id = 0x6;
      break;
    case 0x7:
      id = 0x7;
      break;
    case 0x8:
      id = 0x8;
      break;
    case 0x9:
      id = 0x9;
      break;
    case 0xa:
      id = 0xa;
      break;
    case 0xb:
      id = 0xb;
      break;
    case 0xc:
      id = 0xc;
      break;
    case 0xd:
      id = 0xd;
      break;
    case 0xe:
      id = 0xe;
      break;
    case 0xf:
      id = 0xf;
      break;
    case 0x10:
      return 0x10;
    case 0x11:
      return 0x11;
    case 0x12:
      return 0x12;
    case 0x13:
      return 0x13;
    default:
      return 0x0;
    }
  }
  return id;
}



// Maps an input ID from one internal category to another using a lookup switch.

int __stdcall16far remap_id_type_A_to_type_B_logic(int arg1,int arg2,int id)
{
  int iVar1;
  
  switch(id)
  {
  case 0x1:
    iVar1 = 0x3;
    break;
  case 0x2:
    iVar1 = 0x4;
    break;
  case 0x3:
    return 0x5;
  case 0x4:
    return 0x6;
  case 0x5:
    return 0x8;
  case 0x6:
    return 0x9;
  case 0x7:
    return 0xa;
  default:
    iVar1 = 0x0;
  }
  return iVar1;
}



// Targeted Scan Finding: Far Pointer
// Checks global save version pointer at 1050:0312 to determine if sequence ID remapping
// is required.

int __stdcall16far
file_context_remap_sequence_id_by_version_logic(int arg1,int arg2,int id)
{
  int iStack_4;
  
  iStack_4 = 0x0;
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    switch(id)
    {
    case 0x1:
    case 0x2:
    case 0x3:
    case 0x4:
    case 0x5:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xa:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
      goto switchD_1008_7435_caseD_1;
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
      iStack_4 = id + 0x3;
      break;
    case 0x3d:
    case 0x3e:
      iStack_4 = id + 0x4;
      break;
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
    case 0x60:
    case 0x61:
    case 0x62:
    case 0x63:
    case 0x64:
    case 0x65:
    case 0x66:
      iStack_4 = id + 0x8;
      break;
    case 0x67:
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x72:
    case 0x73:
    case 0x74:
    case 0x75:
    case 0x76:
    case 0x77:
    case 0x78:
    case 0x79:
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
    case 0x80:
      iStack_4 = id + 0x9;
    }
  }
  else
  {
switchD_1008_7435_caseD_1:
    iStack_4 = id;
  }
  return iStack_4;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through collection object vtable:
// - Offset 0x24 (Begin load)
// - Offset 0x1C (End load / cleanup)
// - Offset 0x28 (Add item)
// Instantiates UI_Planet_View_Component during deserialization if needed.

int __stdcall16far
file_context_deserialize_collection_logic(void *this,void *collection_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined2 unaff_CS;
  void *unaff_SS;
  void *pvVar4;
  long *in_stack_00000008;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000ffd0;
  undefined4 local_1c;
  undefined2 local_18 [0x5];
  void *pvStack_e;
  void *pvStack_a;
  int iStack_8;
  undefined4 local_6;
  
  local_6 = NULL;
  iVar2 = file_read_check((long)CONCAT22(collection_ptr,this),&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  if (local_6 != NULL)
  {
    pvVar4 = local_6;
    iVar2 = local_6._2_2_;
    if (local_6 < (void *)0xc8)
    {
      iVar2 = 0x0;
      pvVar4 = (void *)0xc8;
    }
    pvStack_a = (void *)pvVar4;
    iStack_8 = iVar2;
    if (*in_stack_00000008 == 0x0)
    {
      unaff_CS = 0x1000;
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x1e));
      if (iVar2 == 0x0 && pvVar3 == NULL)
      {
        *in_stack_00000008 = 0x0;
      }
      else
      {
        unaff_CS = 0x1020;
        pvVar4 = UI_Planet_View_Component_ctor_init_logic_c444
                           ((void *)CONCAT22(iVar2,pvVar3),(void *)0x64,
                            (void *)CONCAT22(iStack_8,pvStack_a));
        *(int *)in_stack_00000008 = (int)pvVar4;
        *(undefined2 *)((int)(long *)in_stack_00000008 + 0x2) =
             (int)((ulong)pvVar4 >> 0x10);
      }
    }
    uVar5 = (undefined2)*in_stack_00000008;
    uVar6 = (undefined2)((ulong)*in_stack_00000008 >> 0x10);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x24);
    (*(code *)*puVar1)();
    for (pvStack_e = NULL; pvStack_e < local_6;
        pvStack_e = (void *)((long)pvStack_e + 0x1))
    {
      iVar2 = file_read_check((long)CONCAT22(collection_ptr,this),&local_1c,unaff_SS);
      if ((iVar2 == 0x0) ||
         (iVar2 = file_read_check((long)CONCAT22(collection_ptr,this),local_18,unaff_SS)
         , iVar2 == 0x0))
      {
        puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x1c);
        (*(code *)*puVar1)(unaff_CS,*in_stack_00000008);
        return 0x0;
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x28);
      (*(code *)*puVar1)(unaff_CS,(int)*in_stack_00000008,
                         (int)((ulong)*in_stack_00000008 >> 0x10),local_18[0x0],local_1c
                        );
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x1c);
    (*(code *)*puVar1)(unaff_CS,*in_stack_00000008,uVar5,uVar6);
  }
  return 0x1;
}



// Deserializes a resource-related object from the save file. It reads data using a
// sub-helper and then instantiates and initializes the target object based on the
// retrieved information.

int __stdcall16far
file_context_deserialize_resource_object_logic(void *this,void *resource_obj_ptr)
{
  int iVar1;
  void *pvVar2;
  uint in_DX;
  undefined4 *in_stack_00000008;
  undefined2 in_stack_0000fff6;
  
  *in_stack_00000008 = 0x0;
  iVar1 = file_context_deserialize_list_logic(this,resource_obj_ptr);
  if (iVar1 != 0x0)
  {
    if (false)
    {
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0xc));
      in_DX |= (uint)pvVar2;
      if (in_DX == 0x0)
      {
        pvVar2 = NULL;
        in_DX = 0x0;
      }
      else
      {
        pvVar2 = UI_Vector_Tracker_Object_ctor(pvVar2);
      }
      *(void **)in_stack_00000008 = pvVar2;
      *(uint *)((int)(undefined4 *)in_stack_00000008 + 0x2) = in_DX;
      Collection_Set_Source_Object_Logic((void *)(void *)*in_stack_00000008,0x0);
    }
    return 0x1;
  }
  return 0x0;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through list object vtable:
// - Offset 0x14 (Begin deserialization)
// - Offset 0x18 (Add item)
// - Offset 0x1C (End deserialization)
// Instantiates UI_Production_Item_Base if needed.

int __stdcall16far file_context_deserialize_list_logic(void *this,long *list_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int in_DX;
  void *unaff_SS;
  void *pvVar4;
  long *in_stack_00000008;
  undefined2 in_stack_0000ffdc;
  undefined1 local_18 [0xe];
  void *pvStack_a;
  void *local_6;
  
  local_6 = NULL;
  iVar2 = file_read_check((long)_this,&local_6,unaff_SS);
  if (iVar2 == 0x0)
  {
    return 0x0;
  }
  if (local_6 != NULL)
  {
    if (*in_stack_00000008 == 0x0)
    {
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffdc,0x18));
      if (in_DX == 0x0 && pvVar3 == NULL)
      {
        *in_stack_00000008 = 0x0;
      }
      else
      {
        pvVar4 = UI_Production_Item_Base_ctor_init_1cd8
                           ((void *)CONCAT22(in_DX,pvVar3),(void *)0x5,local_6);
        *(int *)in_stack_00000008 = (int)pvVar4;
        *(undefined2 *)((int)(long *)in_stack_00000008 + 0x2) =
             (int)((ulong)pvVar4 >> 0x10);
      }
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x14);
    (*(code *)*puVar1)();
    for (pvStack_a = NULL; pvStack_a < local_6;
        pvStack_a = (void *)((long)pvStack_a + 0x1))
    {
      iVar2 = file_read_check((long)_this,local_18,unaff_SS);
      if (iVar2 == 0x0)
      {
        return 0x0;
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x18);
      (*(code *)*puVar1)();
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*in_stack_00000008 + 0x1c);
    (*(code *)*puVar1)();
  }
  return 0x1;
}



// Deserializes a map or specialized array of items from the save file. It reads a
// 2-byte count, initializes the target collection, and then loops to read key-value
// pairs (2-byte and 4-byte) and add them to the map.

int __stdcall16far file_context_deserialize_map_logic(void *this,long *map_ptr)
{
  int iVar1;
  void *pvVar2;
  int in_DX;
  void *unaff_SS;
  void *pvVar3;
  long *in_stack_00000008;
  undefined2 in_stack_0000ffd8;
  undefined2 local_14 [0x2];
  undefined1 local_10 [0xa];
  uint uStack_6;
  uint local_4;
  
  local_4 = 0x0;
  iVar1 = file_read_check((long)CONCAT22(map_ptr,this),&local_4,unaff_SS);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  if (local_4 != 0x0)
  {
    if (*in_stack_00000008 == 0x0)
    {
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffd8,0xa));
      if (in_DX == 0x0 && pvVar2 == NULL)
      {
        *in_stack_00000008 = 0x0;
      }
      else
      {
        pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(in_DX,pvVar2),0x5,0x5);
        *(void **)in_stack_00000008 = (void *)pvVar3;
        *(undefined2 *)((int)(long *)in_stack_00000008 + 0x2) =
             (int)((ulong)pvVar3 >> 0x10);
      }
    }
    for (uStack_6 = 0x0; uStack_6 < local_4; uStack_6 += 0x1)
    {
      iVar1 = file_read_check((long)CONCAT22(map_ptr,this),local_14,unaff_SS);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      iVar1 = file_read_check((long)CONCAT22(map_ptr,this),local_10,unaff_SS);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      UI_Item_List_Set_Item_Value_Logic
                ((int)*in_stack_00000008,(int)((ulong)*in_stack_00000008 >> 0x10),
                 (int)local_10._0_4_,SUB42(local_10._0_4_,0x2),local_14[0x0]);
    }
  }
  return 0x1;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Performs indirect call through collection vtable offset 0x10 (Get count).
// Updates global error state at 1050:0310 on write failure.

int __stdcall16far
file_context_serialize_collection_logic(void *this,void *collection_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *unaff_SS;
  undefined4 *in_stack_00000008;
  undefined2 local_26;
  ulong local_24 [0x3];
  ulong local_18;
  undefined2 local_14 [0x5];
  ulong uStack_a;
  ulong uStack_6;
  
  if (in_stack_00000008 == NULL)
  {
    local_18 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*in_stack_00000008 + 0x10);
    local_18 = (*(code *)*puVar1)();
  }
  uStack_6 = local_18;
  iVar2 = file_write_check((long)_this,&local_18,unaff_SS);
  if (iVar2 != 0x0)
  {
    uStack_a = 0x0;
    while( true )
    {
      if (uStack_6 <= uStack_a)
      {
        return 0x1;
      }
      UI_Planet_View_List_Get_Item_at_Index_c4a8
                (in_stack_00000008,(undefined2 *)CONCAT22(unaff_SS,local_14),
                 (ulong *)CONCAT22(unaff_SS,&local_18),(int)uStack_a);
      local_24[0x0] = local_18;
      iVar2 = file_write_check((long)_this,local_24,unaff_SS);
      if (iVar2 == 0x0) break;
      local_26 = local_14[0x0];
      iVar2 = file_write_check((long)_this,&local_26,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      uStack_a += 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Performs multiple indirect calls through list vtable:
// - Offset 0x10 (Get count)
// - Offset 0x4 (Get item)
// Updates global error state at 1050:0310 on write failure.

int __stdcall16far file_context_serialize_list_logic(void *this,void *list_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *unaff_SS;
  ulong uVar3;
  undefined4 *in_stack_00000008;
  undefined4 local_20;
  ulong local_18 [0x3];
  ulong uStack_a;
  ulong uStack_6;
  
  if (in_stack_00000008 == NULL)
  {
    uStack_6 = 0x0;
  }
  else
  {
    puVar1 = (undefined2 *)((int)*in_stack_00000008 + 0x10);
    uStack_6 = (*(code *)*puVar1)();
  }
  local_18[0x0] = uStack_6;
  iVar2 = file_write_check((long)_this,local_18,unaff_SS);
  if (iVar2 != 0x0)
  {
    uStack_a = 0x0;
    while( true )
    {
      if (uStack_6 <= uStack_a)
      {
        return 0x1;
      }
      puVar1 = (undefined2 *)((int)*in_stack_00000008 + 0x4);
      uVar3 = (*(code *)*puVar1)();
      local_20 = uVar3;
      local_18[0x0] = uVar3;
      iVar2 = file_write_check((long)_this,&local_20,unaff_SS);
      if (iVar2 == 0x0) break;
      uStack_a += 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// A wrapper for `file_context_serialize_list_logic` that serializes a list held by
// another object. It extracts the list pointer from offset 4 of the provided object
// before calling the core list serialization routine.

void __stdcall16far
file_context_serialize_contained_list_logic(void *this,void *container_obj)
{
  file_context_serialize_list_logic(this,container_obj);
  return;
}



// Targeted Scan Finding: Far Pointer
// References map count at [map_ptr + 4].
// Updates global error state at 1050:0310 on write failure.

int __stdcall16far file_context_serialize_map_logic(void *this,void *map_ptr)
{
  int iVar1;
  void *unaff_SS;
  void *in_stack_00000008;
  undefined4 local_24 [0x2];
  uint local_1c [0x5];
  uint local_12;
  undefined4 local_10;
  uint uStack_a;
  uint uStack_6;
  uint uStack_4;
  
  if (in_stack_00000008 == NULL)
  {
    uStack_4 = 0x0;
  }
  else
  {
    uStack_4 = *(uint *)((int)(void *)in_stack_00000008 + 0x4);
  }
  local_12 = uStack_4;
  iVar1 = file_write_check((long)CONCAT22(map_ptr,this),&local_12,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  else
  {
    uStack_6 = 0x0;
    while( true )
    {
      if (uStack_4 <= uStack_6)
      {
        return 0x1;
      }
      UI_Item_List_Get_Item_at_Index_Logic
                (in_stack_00000008,(undefined4 *)CONCAT22(unaff_SS,&local_10),
                 (uint *)CONCAT22(unaff_SS,&local_12),uStack_6);
      uStack_a = local_12;
      local_1c[0x0] = local_12;
      iVar1 = file_write_check((long)CONCAT22(map_ptr,this),local_1c,unaff_SS);
      if (iVar1 == 0x0) break;
      local_24[0x0] = local_10;
      iVar1 = file_write_check((long)CONCAT22(map_ptr,this),local_24,unaff_SS);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      uStack_6 += 0x1;
    }
  }
  return 0x0;
}



// Deserializes a map from the save file into an already instantiated map object. It
// reads the entry count and then loops through each key-value pair, inserting them into
// the target map.

int __stdcall16far
file_context_deserialize_map_to_existing_logic(void *this,void *existing_map_ptr)
{
  int iVar1;
  void *unaff_SS;
  undefined4 in_stack_00000008;
  undefined2 local_14 [0x2];
  undefined1 local_10 [0xa];
  uint uStack_6;
  uint local_4;
  
  iVar1 = file_read_check((long)CONCAT22(existing_map_ptr,this),&local_4,unaff_SS);
  if (iVar1 != 0x0)
  {
    uStack_6 = 0x0;
    while( true )
    {
      if (local_4 <= uStack_6)
      {
        return 0x1;
      }
      iVar1 = file_read_check((long)CONCAT22(existing_map_ptr,this),local_14,unaff_SS);
      if ((iVar1 == 0x0) ||
         (iVar1 = file_read_check((long)CONCAT22(existing_map_ptr,this),local_10,
                                  unaff_SS), iVar1 == 0x0)) break;
      UI_Item_List_Set_Item_Value_Logic
                ((int)in_stack_00000008,(int)((ulong)in_stack_00000008 >> 0x10),
                 (int)local_10._0_4_,SUB42(local_10._0_4_,0x2),local_14[0x0]);
      uStack_6 += 0x1;
    }
  }
  return 0x0;
}



// Serializes a 3-word vector structure (6 bytes total) to the save file. It unpacks the
// structure into three 16-bit words and writes them sequentially to the file context.

int __stdcall16far
file_context_serialize_3word_struct_logic(void *this,void *struct_ptr)
{
  int iVar1;
  int *unaff_SS;
  void *in_stack_00000008;
  undefined2 local_12 [0x3];
  int local_c [0x2];
  int local_8;
  int local_6;
  undefined2 local_4;
  
  unpack_3word_struct((void *)in_stack_00000008,
                      (int *)((ulong)in_stack_00000008 >> 0x10),&local_8,unaff_SS);
  local_12[0x0] = local_4;
  iVar1 = file_write_check((long)_this,local_12,unaff_SS);
  if (iVar1 != 0x0)
  {
    local_c[0x0] = local_6;
    iVar1 = file_write_check((long)_this,local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      local_c[0x0] = local_8;
      iVar1 = file_write_check((long)_this,local_c,unaff_SS);
      if (iVar1 != 0x0)
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// Deserializes a 3-word vector structure from the save file. It reads three 16-bit
// words sequentially and then packs them into the target structure using reverse word
// order.

int __stdcall16far
file_context_deserialize_3word_struct_logic(void *this,void *struct_ptr)
{
  int iVar1;
  void *unaff_SS;
  void *in_stack_00000008;
  int local_8;
  int local_6;
  undefined1 local_4 [0x2];
  
  iVar1 = file_read_check((long)CONCAT22(struct_ptr,this),local_4,unaff_SS);
  if (iVar1 != 0x0)
  {
    iVar1 = file_read_check((long)CONCAT22(struct_ptr,this),&local_6,unaff_SS);
    if (iVar1 != 0x0)
    {
      iVar1 = file_read_check((long)CONCAT22(struct_ptr,this),&local_8,unaff_SS);
      if (iVar1 != 0x0)
      {
        pack_3words_reverse((void *)in_stack_00000008,
                            (int)((ulong)in_stack_00000008 >> 0x10),local_8,local_6);
        return 0x1;
      }
    }
  }
  return 0x0;
}



// Targeted Scan Finding: Far Pointer
// References static null-string buffer at 1050:149A if input is NULL.

int __stdcall16far file_context_write_string_with_terminator_logic(void *this,char *str)
{
  int iVar1;
  char *in_stack_00000008;
  
  if (in_stack_00000008 != NULL)
  {
    strlen_get_length(in_stack_00000008);
    iVar1 = file_write_check((long)_this,(char *)in_stack_00000008,
                             (void *)((ulong)in_stack_00000008 >> 0x10));
    return iVar1;
  }
  file_write_check((long)_this,(void *)0x149a,(dword *)&g_HeapContext);
  return 0x1;
}



// Reads a null-terminated string from the save file into the provided buffer. It reads
// characters one by one from the file context until a null character is encountered.

void __stdcall16far
file_context_read_null_terminated_string_logic(void *this,char *buffer)
{
  char *pcVar1;
  undefined2 unaff_SS;
  char *pcStack0008;
  undefined2 uStack000a;
  char local_c [0xa];
  
  while( true )
  {
    pcVar1 = _pcStack0008;
    _hread16(0x1,(char *)CONCAT22(unaff_SS,local_c),*_this);
    if (local_c[0x0] == '\0') break;
    _pcStack0008 = (char *)CONCAT22(uStack000a,pcStack0008 + 0x1);
    *pcVar1 = local_c[0x0];
  }
  *_pcStack0008 = '\0';
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates global error state at 1050:0310 on write failure.

int __stdcall16far file_context_write_footer_marker_logic(void *this)
{
  int iVar1;
  void *unaff_SS;
  undefined2 in_stack_00000006;
  char local_c [0xa];
  
  sprintf_wrapper(local_c);
  strlen_get_length((char *)CONCAT22(unaff_SS,local_c));
  iVar1 = file_write_check((long)_this,local_c,unaff_SS);
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
    return 0x0;
  }
  return 0x1;
}
