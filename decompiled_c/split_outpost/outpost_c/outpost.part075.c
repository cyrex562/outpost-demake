/*
 * Source: outpost.c
 * Chunk: 75/117
 * Original lines: 85648-86393
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The primary routine for serializing the entire global simulator state to a file.
// Writes headers, footers, internal resource managers, and all 8 specialized
// world-tracking entity lists in sequence.

u16 __stdcall16far
Simulator_Context_Save_to_File_Comprehensive_dce2(u32 *this_ptr,void *file_ctx)
{
  undefined2 *puVar1;
  int iVar2;
  u16 uVar3;
  void *unaff_SS;
  u16 in_stack_00000006;
  void *this;
  u32 local_26 [0x2];
  undefined2 local_1e [0x3];
  void *pvStack_18;
  undefined1 local_14 [0x12];
  
  this = (void *)file_ctx;
  iVar2 = file_context_write_footer_marker_logic(this);
  if (iVar2 != 0x0)
  {
    local_26[0x0] = *_this_ptr;
    iVar2 = file_write_check((long)file_ctx,local_26,unaff_SS);
    if (iVar2 != 0x0)
    {
      local_1e[0x0] = (undefined2)this_ptr[0x2];
      iVar2 = file_write_check((long)file_ctx,local_1e,unaff_SS);
      if (iVar2 != 0x0)
      {
        puVar1 = (undefined2 *)((int)*_PTR_DAT_1050_0000_1050_5166 + 0xc);
        iVar2 = (*(code *)*puVar1)(0x1008,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
                                   (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10),
                                   file_ctx);
        if (iVar2 != 0x0)
        {
          iVar2 = file_context_write_footer_marker_logic(this);
          if (iVar2 != 0x0)
          {
            uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                              ((u16)this_ptr,in_stack_00000006,file_ctx,
                               (void *)0x1000000);
            if (uVar3 != 0x0)
            {
              iVar2 = file_context_write_footer_marker_logic(this);
              if (iVar2 != 0x0)
              {
                uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                  ((u16)this_ptr,in_stack_00000006,file_ctx,
                                   (void *)0x2000000);
                if (uVar3 != 0x0)
                {
                  iVar2 = file_context_write_footer_marker_logic(this);
                  if (iVar2 != 0x0)
                  {
                    uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                      ((u16)this_ptr,in_stack_00000006,file_ctx,
                                       (void *)0x3000000);
                    if (uVar3 != 0x0)
                    {
                      iVar2 = file_context_write_footer_marker_logic(this);
                      if (iVar2 != 0x0)
                      {
                        uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                          ((u16)this_ptr,in_stack_00000006,file_ctx,
                                           (void *)0x4000000);
                        if (uVar3 != 0x0)
                        {
                          iVar2 = file_context_write_footer_marker_logic(this);
                          if (iVar2 != 0x0)
                          {
                            uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                              ((u16)this_ptr,in_stack_00000006,file_ctx,
                                               (void *)0x5000000);
                            if (uVar3 != 0x0)
                            {
                              iVar2 = file_context_write_footer_marker_logic(this);
                              if (iVar2 != 0x0)
                              {
                                uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                                  ((u16)this_ptr,in_stack_00000006,
                                                   file_ctx,(void *)0x6000000);
                                if (uVar3 != 0x0)
                                {
                                  iVar2 = file_context_write_footer_marker_logic(this);
                                  if (iVar2 != 0x0)
                                  {
                                    uVar3 = Simulator_Save_Entity_Collection_to_File_e56c
                                                      ((u16)this_ptr,in_stack_00000006,
                                                       file_ctx,(void *)0x7000000);
                                    if (uVar3 != 0x0)
                                    {
                                      iVar2 = file_context_write_footer_marker_logic
                                                        (this);
                                      if (iVar2 != 0x0)
                                      {
                                        uVar3 = 
                                            Simulator_Save_Entity_Collection_to_File_e56c
                                                      ((u16)this_ptr,in_stack_00000006,
                                                       file_ctx,(void *)0x8000000);
                                        if (uVar3 != 0x0)
                                        {
                                          Simulator_World_Iterator_ctor_init_dc52
                                                    ((undefined1 *)
                                                     CONCAT22(unaff_SS,local_14),0x1,0x0
                                                     ,0x400);
                                          while( true )
                                          {
                                            pvStack_18 = 
                                            Simulator_World_Iterator_Get_Next_Entity_e4ec
                                                      ((undefined1 *)
                                                       CONCAT22(unaff_SS,local_14));
                                            if (pvStack_18 == NULL) break;
                                            if (*(long *)((int)pvStack_18 + 0x200) !=
                                                0x8000002)
                                            {
                                              Colony_Rebuild_SubItem_Manager_List_3ba0
                                                        (pvStack_18);
                                            }
                                          }
                                          return 0x1;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The primary routine for deserializing the entire global simulator state from a file.
// Reconstructs all internal managers and entity lists in the correct sequence,
// validating integrity at each step.

long __stdcall16far
Simulator_Context_Load_from_File_Comprehensive_def2(void *param_1,long param_2)
{
  undefined2 *puVar1;
  int iVar2;
  char *in_DX;
  undefined4 uVar3;
  void *buffer;
  void *handle_wrapper;
  
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 != 0x0)
  {
    buffer = (void *)param_1;
    handle_wrapper = (void *)((ulong)param_1 >> 0x10);
    iVar2 = file_read_check(param_2,buffer,handle_wrapper);
    if (iVar2 != 0x0)
    {
      iVar2 = file_read_check(param_2,(void *)((int)buffer + 0x8),handle_wrapper);
      if (iVar2 != 0x0)
      {
        puVar1 = (undefined2 *)((int)*_PTR_DAT_1050_0000_1050_5166 + 0x10);
        uVar3 = (*(code *)*puVar1)(0x1008,(undefined4 *)_PTR_DAT_1050_0000_1050_5166,
                                   (int)((ulong)_PTR_DAT_1050_0000_1050_5166 >> 0x10),
                                   (int)param_2,(int)((ulong)param_2 >> 0x10));
        in_DX = (char *)((ulong)uVar3 >> 0x10);
        if ((int)uVar3 != 0x0)
        {
          iVar2 = file_context_find_footer_marker_logic();
          if (iVar2 != 0x0)
          {
            in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                              (buffer,handle_wrapper);
            if (iVar2 != 0x0)
            {
              iVar2 = file_context_find_footer_marker_logic();
              if (iVar2 != 0x0)
              {
                in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                  (buffer,handle_wrapper);
                if (iVar2 != 0x0)
                {
                  iVar2 = file_context_find_footer_marker_logic();
                  if (iVar2 != 0x0)
                  {
                    in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                      (buffer,handle_wrapper);
                    if (iVar2 != 0x0)
                    {
                      iVar2 = file_context_find_footer_marker_logic();
                      if (iVar2 != 0x0)
                      {
                        in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                          (buffer,handle_wrapper);
                        if (iVar2 != 0x0)
                        {
                          iVar2 = file_context_find_footer_marker_logic();
                          if (iVar2 != 0x0)
                          {
                            in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                              (buffer,handle_wrapper);
                            if (iVar2 != 0x0)
                            {
                              iVar2 = file_context_find_footer_marker_logic();
                              if (iVar2 != 0x0)
                              {
                                in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                                  (buffer,handle_wrapper);
                                if (iVar2 != 0x0)
                                {
                                  iVar2 = file_context_find_footer_marker_logic();
                                  if (iVar2 != 0x0)
                                  {
                                    in_DX = Simulator_Context_Load_Entity_Collection_from_File_e628
                                                      (buffer,handle_wrapper);
                                    if (iVar2 != 0x0)
                                    {
                                      iVar2 = file_context_find_footer_marker_logic();
                                      if (iVar2 != 0x0)
                                      {
                                        in_DX = 
                                            Simulator_Context_Load_Entity_Collection_from_File_e628
                                                      (param_1);
                                        if (iVar2 != 0x0)
                                        {
                                          return CONCAT22(in_DX,0x1);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return ZEXT24(in_DX) << 0x10;
}



// A wrapper that retrieves map cell data from the simulator map using the primary
// sub-manager (offset 0x52). Equivalent to 1028:C89C but uses a different manager
// offset.

void * __stdcall16far
Simulator_Get_Map_Cell_Data_Wrapper_e0a0(undefined4 param_1,undefined4 param_2)
{
  void *in_AX;
  int *piVar1;
  void *uVar1;
  
  piVar1 = Simulator_Factory_Create_Building_Entry_Logic_4782
                     (*(undefined4 *)((int)param_1 + 0x52),0x1,param_2);
  return (void *)CONCAT22(piVar1,in_AX);
}



// Allocates 152 bytes and clones an internal object from the simulator's resource
// manager (offset 0x52). Bulk copies 152 bytes (0x26 dwords) from the manager's source.

void * __stdcall16far
Simulator_Object_Clone_from_Manager_e0bc(undefined4 param_1,int param_2)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined2 in_DX;
  undefined2 uVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x98));
  puVar4 = puVar3;
  uVar6 = in_DX;
  Simulator_Map_Context_Load_Object_Template_4bbe
            ((void *)*(undefined4 *)((int)param_1 + 0x52),param_2);
  puVar7 = puVar3;
  for (iVar5 = 0x26; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar7;
    puVar7 = puVar7 + 0x1;
    puVar1 = puVar4;
    puVar4 = puVar4 + 0x1;
    *puVar2 = *puVar1;
  }
  return (void *)CONCAT22(in_DX,puVar3);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Allocates 174 bytes (0xAE) using a custom allocator, and initializes a new simulator
// object by copying 174 bytes (0x2B dwords + word) from the resource manager.

void * __stdcall16far
Simulator_Object_Alloc_and_Init_from_Manager_e100(undefined4 param_1,int param_2)
{
  undefined4 *puVar1;
  undefined *heap_ctx;
  undefined4 *puVar2;
  int iVar4;
  undefined *in_DX;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 uStack_a;
  undefined4 *puStack_6;
  undefined4 *puVar3;
  
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  puVar2 = alloc_with_hooks(0xae,0x1,heap_ctx);
  puVar3 = (undefined4 *)ZEXT24(puVar2);
  uStack_a = (undefined4 *)CONCAT22(in_DX,puVar2);
  uVar5 = (uint)in_DX | (uint)puVar2;
  if (uVar5 == 0x0)
  {
    puStack_6 = NULL;
  }
  else
  {
    puVar2[0x29] = 0x0;
    puVar2[0x2a] = 0x0;
    *(undefined2 *)(puVar2 + 0x2b) = 0x0;
    puStack_6 = uStack_a;
    puVar3 = uStack_a;
  }
  puVar2 = (undefined4 *)puVar3;
  Simulator_Context_Load_Building_Op_Template_4c06
            ((void *)*(undefined4 *)((int)param_1 + 0x52),param_2);
  uVar7 = (undefined2)((ulong)puStack_6 >> 0x10);
  puVar6 = (undefined4 *)puStack_6;
  for (iVar4 = 0x2b; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar1 = puVar6;
    puVar6 = puVar6 + 0x1;
    puVar3 = puVar2;
    puVar2 = puVar2 + 0x1;
    *puVar1 = *puVar3;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar2;
  return puStack_6;
}



// Resolves a 4-byte packed entity ID into its (X, Y) world coordinates by retrieving
// the object and calling its coordinate accessor.

void __stdcall16far
Simulator_Get_Entity_Coords_from_TypeID_e198
          (void *this_ptr,void *out_x,void *out_y,u8 *packed_id)
{
  void *this_ptr_00;
  
  this_ptr_00 = Simulator_Get_Entity_Object_from_PackedID_e1ec(this_ptr,packed_id);
  UI_Production_Item_Get_Coords_Logic_5b1c(this_ptr_00,out_x,out_y);
  return;
}



// Retrieves the head pointer of one of the simulator's 8 specialized world-tracking
// entity lists.

void * __stdcall16far
Simulator_Get_World_List_Head_e1bc(void *this_ptr,u16 arg2,uint list_index)
{
  astruct_310 *paVar1;
  astruct_310 *iVar2;
  undefined2 uVar2;
  
  paVar1 = (astruct_310 *)
           *(undefined4 *)((int)(void *)this_ptr + (list_index >> 0x8) * 0x4 + 0xa);
  uVar2 = (undefined2)((ulong)paVar1 >> 0x10);
  iVar2 = (astruct_310 *)paVar1;
  return (void *)CONCAT22(iVar2->field11_0xc,(void *)iVar2->field10_0xa);
}



// The primary routine for resolving a 4-byte packed ID into a memory pointer for a
// simulator entity. Handles null, special 0xFF (global), and list-indexed lookups.

void * __stdcall16far
Simulator_Get_Entity_Object_from_PackedID_e1ec(void *this_ptr,u8 *packed_id)
{
  void *pvVar1;
  undefined2 in_stack_0000000a;
  
  if (in_stack_0000000a._1_1_ == 0x0)
  {
    return NULL;
  }
  if (in_stack_0000000a._1_1_ == 0xff)
  {
    return (void *)CONCAT22(PTR_DAT_1050_0000_1050_5168,PTR_DAT_1050_0000_1050_5166);
  }
  pvVar1 = UI_Managed_List_Get_Item_at_Index_1312
                     ((void *)*(undefined4 *)
                               ((int)this_ptr + 0xa +
                               (uint)in_stack_0000000a._1_1_ * 0x4),
                      (ulong)CONCAT22(in_stack_0000000a,packed_id) & 0xffffff);
  return pvVar1;
}



// Increments the global simulator tick counter. Every 100 ticks, posts message 0x41 to
// the main UI. Conditionally triggers a resource manager update.

void __stdcall16far
Simulator_Main_Tick_Counter_Update_e242(void *this_ptr,int trigger_update)
{
  undefined2 unaff_BP;
  
  if (*(ulong *)this_ptr % 0x64 == 0x0)
  {
    SendMessage16(0x0,0x0,0x0,(long)CONCAT22(unaff_BP,g_ParentHWND));
  }
  *(long *)this_ptr = *(long *)this_ptr + 0x1;
  if (trigger_update != 0x0)
  {
    Simulator_Trigger_Global_Resource_Update_e28a();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Triggers a per-turn resource update (virtual call at offset +4) for the global
// planetary resource manager (Resource ID 0x2F).

void __stdcall16far Simulator_Trigger_Global_Resource_Update_e28a(void)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  long lVar4;
  
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  puVar2 = (undefined4 *)((int)lVar4 + 0xa);
  puVar1 = (undefined2 *)((int)*puVar2 + 0x4);
  (*(code *)*puVar1)(0x1010,puVar2,uVar3,0x5);
  return;
}



// Invokes a virtual initialization function from the simulator's vtable array (offset
// 0x2E) based on a stack-passed index.

void __stdcall16far Simulator_Call_Virtual_Initializer_e2ac(u32 this_ptr)
{
  byte in_stack_00000011;
  undefined4 uStack_6;
  
  uStack_6 = (code *)*(undefined4 *)
                      ((int)this_ptr + (uint)in_stack_00000011 * 0x4 + 0x2e);
  (*(code *)uStack_6)();
  return;
}



// Invokes a virtual function for a specific simulator entity type. Handles 0xFF as a
// special global case.

void * __stdcall16far Simulator_Invoke_Virtual_Function_by_TypeID_e2e0(u32 param_1)
{
  int iVar1;
  undefined2 uVar2;
  void *pvVar3;
  uint in_stack_00000010;
  undefined2 auStack_a [0x3];
  uint uStack_4;
  
  uStack_4 = in_stack_00000010 >> 0x8;
  if (uStack_4 == 0xff)
  {
    pvVar3 = (void *)Simulator_Get_Active_Context_Pointer_ebee(param_1);
    return pvVar3;
  }
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1 + 0x2e;
  auStack_a[0x0] = *(undefined2 *)(iVar1 + uStack_4 * 0x4 + 0x2);
  pvVar3 = (void *)(*(code *)*(undefined2 *)(iVar1 + uStack_4 * 0x4))();
  return pvVar3;
}



// A wrapper that retrieves entity data from the simulator map at specific coordinates.
// Equivalent to 1030:627E but with different parameter packing.

void __stdcall16far
Simulator_Get_Entity_at_Coords_Wrapper_e332(u32 this_ptr,u16 arg2,u16 arg3)
{
  if ((arg3._1_1_ != 0x0) && (arg3._1_1_ < 0xa))
  {
    UI_Managed_List_Remove_Item_at_Index_13f6
              ((void *)*(undefined4 *)((int)this_ptr + 0xa + (uint)arg3._1_1_ * 0x4),
               (void *)(CONCAT22(arg3,arg2) & 0xffffff));
  }
  return;
}



// Iterates through entities near a target coordinate and triggers virtual updates
// (offset 0x18) for all except the target itself. Used for localized state
// synchronization.

void __stdcall16far
Simulator_Batch_Process_Entities_in_Proximity_e372
          (void *this_ptr,u8 *packed_id,uint arg3)
{
  void *this_ptr_00;
  void *pvVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  void *pvStack_20;
  void *pvStack_10;
  
  if (arg3 >> 0x8 != 0xff)
  {
    this_ptr_00 = (void *)*(undefined4 *)
                           ((int)(void *)this_ptr + (arg3 >> 0x8) * 0x4 + 0xa);
    pvVar1 = (void *)*(ulong *)((int)(void *)this_ptr_00 + 0xa);
    pvStack_10 = (void *)((ulong)CONCAT22(arg3,packed_id) & 0xffffff);
    pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec(this_ptr,packed_id);
    puVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (this_ptr,(u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar5 + 0x8))
    ;
    for (pvStack_20 = (void *)0x1; pvStack_20 < pvVar1;
        pvStack_20 = (void *)((long)pvStack_20 + 0x1))
    {
      if (pvStack_20 != pvStack_10)
      {
        pvVar5 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_00,(ulong)pvStack_20);
        iVar4 = (int)((ulong)pvVar5 >> 0x10);
        if (iVar4 != 0x0 || (void *)pvVar5 != NULL)
        {
          uVar2 = *(undefined4 *)((int)(void *)pvVar5 + 0x4);
          UI_Managed_List_Remove_Item_at_Index_13f6(this_ptr_00,pvStack_20);
          puVar3 = (undefined2 *)((int)*puVar6 + 0x18);
          (*(code *)*puVar3)(0x1030,(undefined4 *)puVar6,(int)((ulong)puVar6 >> 0x10),
                             uVar2);
        }
      }
    }
  }
  return;
}



// Validates neighbors of a construction manager and removes those that don't match the
// target entity ID (param_2). Cleans up simulator map cells and notifies the
// construction manager.

void __stdcall16far
Simulator_Validate_and_Cleanup_Neighbor_Entities_e44a(void *this_ptr,long entity_id)
{
  void *this_ptr_00;
  void *this_ptr_01;
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  void *pvVar5;
  void *pvStack_12;
  
  Simulator_Batch_Process_Entities_in_Proximity_e372
            (this_ptr,(u8 *)entity_id,(uint)((ulong)entity_id >> 0x10));
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  this_ptr_00 = (void *)*(undefined4 *)((int)this_ptr + 0x26);
  this_ptr_01 = (void *)*(undefined4 *)((int)this_ptr + 0x1e);
  pvVar1 = (void *)*(ulong *)((int)this_ptr_01 + 0xa);
  for (pvStack_12 = (void *)0x1; pvStack_12 < pvVar1;
      pvStack_12 = (void *)((long)pvStack_12 + 0x1))
  {
    pvVar5 = UI_Managed_List_Get_Item_at_Index_1312(this_ptr_01,(ulong)pvStack_12);
    iVar3 = (int)((ulong)pvVar5 >> 0x10);
    iVar2 = (int)pvVar5;
    if ((iVar3 != 0x0 || iVar2 != 0x0) && (*(long *)(iVar2 + 0x8) != entity_id))
    {
      UI_Managed_List_Remove_Item_at_Index_13f6
                (this_ptr_00,
                 (void *)(CONCAT22(*(undefined2 *)(iVar2 + 0x18),
                                   *(undefined2 *)(iVar2 + 0x16)) & 0xffffff));
      UI_Managed_List_Remove_Item_at_Index_13f6(this_ptr_01,pvStack_12);
    }
  }
  return;
}



// Retrieves the next valid entity from the world iterator. Supports both forward and
// reverse scanning of the simulator's entity lists. Returns a null far pointer when the
// list is exhausted.

void * __stdcall16far Simulator_World_Iterator_Get_Next_Entity_e4ec(void *this_ptr)
{
  ulong index;
  astruct_309 *uVar2;
  undefined2 uVar1;
  void *pvVar2;
  void *pvStack_6;
  int iStack_4;
  
  pvStack_6 = NULL;
  iStack_4 = 0x0;
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_309 *)this_ptr;
  if (uVar2->field7_0x10 == 0x0)
  {
    do
    {
      if (uVar2->field5_0x8 == 0x0) break;
      uVar2->field5_0x8 = uVar2->field5_0x8 - 0x1;
      pvVar2 = UI_Managed_List_Get_Item_at_Index_1312
                         (uVar2->field4_0x4,uVar2->field5_0x8);
      iStack_4 = (int)((ulong)pvVar2 >> 0x10);
      pvStack_6 = (void *)pvVar2;
    } while (iStack_4 == 0x0 && pvStack_6 == NULL);
  }
  else
  {
    do
    {
      if (uVar2->field6_0xc < uVar2->field5_0x8) break;
      index = uVar2->field5_0x8;
      uVar2->field5_0x8 = uVar2->field5_0x8 + 0x1;
      pvVar2 = UI_Managed_List_Get_Item_at_Index_1312(uVar2->field4_0x4,index);
      iStack_4 = (int)((ulong)pvVar2 >> 0x10);
      pvStack_6 = (void *)pvVar2;
    } while (iStack_4 == 0x0 && pvStack_6 == NULL);
  }
  return (void *)CONCAT22(iStack_4,pvStack_6);
}



// Serializes a collection of world entities to a file. Writes the count, then iterates
// through each entity using its virtual serialization callback (offset 0xC).

u16 __stdcall16far
Simulator_Save_Entity_Collection_to_File_e56c
          (u16 arg1,u16 arg2,void *file_ctx,void *collection_ptr)
{
  undefined2 *puVar1;
  int iVar2;
  void *unaff_SS;
  long local_2a [0x3];
  undefined4 *puStack_1c;
  long lStack_18;
  undefined1 local_14 [0x8];
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined2 uStack_6;
  int iStack_4;
  
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,(u16)collection_ptr,
             (uint)((ulong)collection_ptr >> 0x10));
  lStack_18 = 0x0;
  while (puStack_1c = Simulator_World_Iterator_Get_Next_Entity_e4ec
                                ((undefined1 *)CONCAT22(unaff_SS,local_14)),
        (int)((ulong)puStack_1c >> 0x10) != 0x0 || (undefined4 *)puStack_1c != NULL)
  {
    lStack_18 += 0x1;
  }
  local_2a[0x0] = lStack_18;
  iVar2 = file_write_check((long)file_ctx,local_2a,unaff_SS);
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  else
  {
    uStack_c = uStack_8;
    uStack_a = uStack_6;
    if (iStack_4 != 0x0)
    {
      uStack_c = 0x1;
      uStack_a = 0x0;
    }
    do
    {
      puStack_1c = Simulator_World_Iterator_Get_Next_Entity_e4ec
                             ((undefined1 *)CONCAT22(unaff_SS,local_14));
      if (puStack_1c == NULL)
      {
        return 0x1;
      }
      puVar1 = (undefined2 *)((int)*puStack_1c + 0xc);
      iVar2 = (*(code *)*puVar1)(0x1008,puStack_1c,file_ctx);
      local_2a[0x0] = CONCAT22(local_2a[0x0]._2_2_,iVar2);
    } while (iVar2 != 0x0);
  }
  return 0x0;
}
