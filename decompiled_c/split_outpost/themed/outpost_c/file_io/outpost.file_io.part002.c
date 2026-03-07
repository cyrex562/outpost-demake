/*
 * Source: outpost.c
 * Theme: file_io
 * Chunk: 2/9
 * Original lines (combined): 17281-22452
 * Boundaries: top-level declarations/definitions only
 */




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



// Searches for the standard footer marker in the save file. It reads the file in 1KB
// chunks and looks for a specific character sequence. If found, it validates the marker
// via `FUN_1008_7e4a` and seeks to the position just after it. Returns 1 if found, 0
// otherwise.

int __stdcall16far file_context_find_footer_marker_logic(void)
{
  bool bVar1;
  int32_t iVar2;
  int iVar3;
  long lVar4;
  int in_DX;
  undefined2 unaff_SS;
  bool bVar5;
  HFILE16 *in_stack_00000004;
  undefined2 in_stack_00000006;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  char local_406 [0x400];
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  bVar1 = false;
  do
  {
    _llseek16(0x0,(int32_t)uStack_6,(HFILE16)((ulong)uStack_6 >> 0x10));
    iVar2 = _hread16(0x400,(char *)CONCAT22(unaff_SS,local_406),
                     *(HFILE16 *)CONCAT22(in_stack_00000006,in_stack_00000004));
    uStack_40c = CONCAT22(in_DX,iVar2);
    for (uStack_410 = 0x0; uStack_410 < uStack_40c; uStack_410 += 0x1)
    {
      if (local_406[(uint)uStack_410] == *(char *)PTR_s_dcbSC_1050_0336_1050_033c)
      {
        if (!bVar1)
        {
          bVar1 = true;
          uStack_6 = CONCAT22(uStack_6._2_2_ + uStack_410._2_2_ +
                              (uint)CARRY2((uint)uStack_6,(uint)uStack_410),
                              (uint)uStack_6 + (uint)uStack_410);
          in_DX = uStack_410._2_2_;
          break;
        }
        bVar1 = false;
        iVar3 = file_context_verify_marker_string_logic();
        if (iVar3 != 0x0)
        {
          lVar4 = uStack_410 + uStack_6 + 0x7;
          _llseek16(0x0,(int32_t)lVar4,(HFILE16)((ulong)lVar4 >> 0x10));
          return 0x1;
        }
      }
    }
    if (!bVar1)
    {
      if (uStack_40c < 0x400)
      {
        return 0x0;
      }
      bVar5 = 0xfb < uStack_6._1_1_;
      uStack_6._0_2_ = CONCAT11(uStack_6._1_1_ + 0x4,(undefined1)uStack_6);
      uStack_6 = CONCAT22(uStack_6._2_2_ + (uint)bVar5,(uint)uStack_6);
    }
  } while( true );
}



int __stdcall16far file_read_check(long size,void *buffer,void *handle_wrapper)
{
  int32_t iVar1;
  int in_DX;
  undefined4 in_stack_0000000c;
  
                // File read with success check - calls _hread16, returns 1 if all bytes
                // read, 0 on failure.
  iVar1 = _hread16((int32_t)in_stack_0000000c,_buffer,*(HFILE16 *)size);
  if ((iVar1 == (int32_t)in_stack_0000000c) && (in_DX == in_stack_0000000c._2_2_))
  {
    return 0x1;
  }
  return 0x0;
}



int __stdcall16far file_write_check(long size,void *buffer,void *handle_wrapper)
{
  uint16_t uVar1;
  int in_DX;
  undefined4 in_stack_0000000c;
  
                // File write with success check - calls _hwrite16, returns 1 if all
                // bytes written, 0 on failure.
  uVar1 = _hwrite16((uint16_t)in_stack_0000000c,_buffer,*(HFILE16 *)size);
  if ((uVar1 == (uint16_t)in_stack_0000000c) && (in_DX == in_stack_0000000c._2_2_))
  {
    return 0x1;
  }
  return 0x0;
}



// Refreshes the primary value of a gameplay sub-object by looking up the latest value
// in the table at 0x3A4 using the object's already-stored type index.

void __stdcall16far Gameplay_SubObject_refresh_from_table_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = *(undefined2 *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4);
  return;
}



// Orchestrates the high-level initialization of UI sub-systems from a specified file.
// It creates a `File_Object`, populates file and option lists, and initializes
// secondary sub-components at offsets 0x1A and 0x1E based on the file content.

void __stdcall16far
UI_Component_Init_SubSystems_from_File_Logic(void *this,char *filename)
{
  void *pvVar1;
  undefined2 in_DX;
  long in_stack_00000008;
  
  if (in_stack_00000008 == 0x0)
  {
    *(undefined4 *)((int)this + 0x16) = 0x0;
  }
  else
  {
    pvVar1 = UI_Find_Item_In_List_Offset_0A_by_String_Logic(this,filename);
    *(undefined2 *)((int)this + 0x16) = pvVar1;
    *(undefined2 *)((int)this + 0x18) = in_DX;
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x8) != 0x0)
  {
    UI_Populate_File_List_Logic(this);
    UI_Populate_Standard_Option_List_Logic(this);
    pvVar1 = UI_Find_Item_In_List_Offset_0E_Logic
                       (this,*(long *)((int)*(undefined4 *)((int)this + 0x16) + 0xa));
    *(undefined2 *)((int)this + 0x1a) = pvVar1;
    *(undefined2 *)((int)this + 0x1c) = in_DX;
    pvVar1 = UI_Find_Item_In_List_Offset_12_Logic(this,(int)filename);
    *(undefined2 *)((int)this + 0x1e) = pvVar1;
    *(undefined2 *)((int)this + 0x20) = in_DX;
    return;
  }
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads string resources 0x434 or 0x435 using global string manager at 1050:14CC based
// on file status.

void __stdcall16far
UI_Component_Show_File_Status_Message_Logic(void *this,void *buffer,char *filename)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_0000000a;
  undefined2 uVar2;
  
  pvVar1 = UI_Find_Item_In_List_Offset_0A_by_String_Logic(this,buffer);
  if ((in_DX == 0x0 && pvVar1 == NULL) || (*(int *)((int)pvVar1 + 0x8) != 0x1))
  {
    uVar2 = 0x434;
  }
  else
  {
    uVar2 = 0x435;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(filename,0x3ff),
             CONCAT22(uVar2,in_stack_0000000a));
  return;
}
