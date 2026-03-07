/*
 * Source: outpost.c
 * Chunk: 80/117
 * Original lines: 90906-92094
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the primary Colony object. Initializes internal state arrays,
// resource tracking, and default morale levels.

u16 * __stdcall16far Colony_Object_ctor_init_314c(void *this_ptr,void *arg2)
{
  astruct_285 *uVar5;
  int value;
  int iStack_c;
  
  value = (int)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_285 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar5->field2_0x2 = 0x1008;
  uVar5->field367_0x170 = 0x0;
  uVar5->field410_0x1a4 = arg2;
  uVar5->field411_0x1a8 = 0x5;
  uVar5->field412_0x1aa = 0x0;
  uVar5->field413_0x1ae = 0x10;
  *(char **)this_ptr = (char *)s_G1_1050_3af2;
  uVar5->field2_0x2 = 0x1030;
  memset_far(&uVar5->field_0x4,value,0x0);
  memset_far(&uVar5->field_0x18c,value,0x0);
  memset_far(&uVar5->field_0x174,value,0x0);
  memset_far(&uVar5->field_0x180,value,0x0);
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if ((int)g_ModeVersion_13AE < 0x2)
  {
    Colony_Initialize_Default_Metrics_Logic_34da(this_ptr);
  }
  else
  {
    uVar5->field370_0x176 = 0x1;
    uVar5->field371_0x178 = 0x2;
    uVar5->field372_0x17a = 0x2;
    uVar5->field373_0x17c = 0x60001;
    for (iStack_c = 0x1; iStack_c < 0x6; iStack_c += 0x1)
    {
      *(undefined2 *)(&uVar5->field_0x180 + iStack_c * 0x2) = 0x64;
    }
  }
  return (u16 *)uVar5;
}



// Setter for a 16-bit colony metric at offset 0x1AE.

void __stdcall16far Colony_Set_Metric_Offset_1AE(void *this_ptr,u16 value)
{
  *(u16 *)((int)this_ptr + 0x1ae) = value;
  return;
}



// Exponentially increases a colony growth or population factor (offset 0x1AA), capped
// by a calculated maximum.

void * __stdcall16far Colony_Double_Growth_Factor_Logic_326a(void *this_ptr)
{
  ulong uVar1;
  uint16_t uVar2;
  astruct_284 *uVar3;
  u16 segment;
  ulong uVar4;
  
  segment = (u16)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_284 *)this_ptr;
  if (*(long *)&uVar3->field426_0x1aa == 0x0)
  {
    (&uVar3->field426_0x1aa)[0x0] = 0x1;
    (&uVar3->field426_0x1aa)[0x1] = 0x0;
  }
  else
  {
    *(long *)&uVar3->field426_0x1aa = *(long *)&uVar3->field426_0x1aa * 0x2;
  }
  uVar4 = Colony_Calculate_Sum_All_Resources_38b8((int)uVar3,segment);
  uVar1 = *(ulong *)&uVar3->field426_0x1aa;
  uVar2 = uVar3->field427_0x1ac;
  if ((long)uVar4 < (long)uVar1)
  {
    uVar1 = uVar4 & 0xffff;
    uVar2 = (uint16_t)(uVar4 >> 0x10);
  }
  uVar3->field426_0x1aa = (uint16_t)uVar1;
  uVar3->field427_0x1ac = uVar2;
  Colony_Distribute_Value_Decrement_across_Group_375a
            (this_ptr,0x0,(uint16_t)uVar1,uVar2);
  return (void *)CONCAT22(uVar3->field427_0x1ac,(void *)uVar3->field426_0x1aa);
}



// Serializes the entire Colony object state to a save file, including all internal
// resource and population buffers.

short __stdcall16far
Colony_Object_Save_to_File_Logic_32e4(void *this_ptr,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  long in_stack_00000008;
  undefined4 local_16 [0x2];
  undefined2 local_c;
  undefined4 local_a [0x2];
  
  iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x4),file_ctx);
  if (iVar1 != 0x0)
  {
    iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x174),file_ctx)
    ;
    if (iVar1 != 0x0)
    {
      iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x180),
                               file_ctx);
      if (iVar1 != 0x0)
      {
        iVar1 = file_write_check(in_stack_00000008,(void *)((int)this_ptr + 0x18c),
                                 file_ctx);
        if (iVar1 != 0x0)
        {
          local_c = *(undefined2 *)((int)this_ptr + 0x1a8);
          iVar1 = file_write_check(in_stack_00000008,&local_c,unaff_SS);
          if (iVar1 != 0x0)
          {
            local_16[0x0] = *(undefined4 *)((int)this_ptr + 0x1aa);
            iVar1 = file_write_check(in_stack_00000008,local_16,unaff_SS);
            if (iVar1 != 0x0)
            {
              local_a[0x0] = *(undefined4 *)((int)this_ptr + 0x170);
              iVar1 = file_write_check(in_stack_00000008,local_a,unaff_SS);
              if (iVar1 != 0x0)
              {
                local_c = *(undefined2 *)((int)this_ptr + 0x1ae);
                iVar1 = file_write_check(in_stack_00000008,&local_c,unaff_SS);
                if (iVar1 != 0x0)
                {
                  return 0x1;
                }
              }
            }
          }
        }
      }
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}



// Deserializes the Colony object state from a save file, restoring all internal metrics
// and arrays.

u16 __stdcall16far Colony_Object_Load_from_File_Logic_33f0(u32 this_ptr,void *file_ctx)
{
  int iVar1;
  int iVar2;
  void *handle_wrapper;
  undefined2 in_stack_0000000a;
  
  iVar2 = (int)this_ptr;
  handle_wrapper = (void *)(this_ptr >> 0x10);
  iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x4),handle_wrapper);
  if (((((iVar1 != 0x0) &&
        (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x174),handle_wrapper)
        , iVar1 != 0x0)) &&
       (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x180),handle_wrapper),
       iVar1 != 0x0)) &&
      ((iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x18c),handle_wrapper),
       iVar1 != 0x0 &&
       (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1a8),handle_wrapper),
       iVar1 != 0x0)))) &&
     (iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1aa),handle_wrapper),
     iVar1 != 0x0))
  {
    if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
    {
      return 0x1;
    }
    iVar1 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x170),handle_wrapper);
    if ((iVar1 != 0x0) &&
       (iVar2 = file_read_check((long)_file_ctx,(void *)(iVar2 + 0x1ae),handle_wrapper),
       iVar2 != 0x0))
    {
      return 0x1;
    }
  }
  g_LastFileErrorMsgID = (undefined *)0x6d2;
  return 0x0;
}



// Resets various colony-wide metrics (morale, multipliers, flags) to their hardcoded
// starting values.

void __stdcall16far Colony_Initialize_Default_Metrics_Logic_34da(void *this_ptr)
{
  astruct_283 *uVar1;
  int value;
  
  value = (int)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_283 *)this_ptr;
  uVar1->field374_0x176 = 0x1;
  uVar1->field375_0x178 = 0x1;
  uVar1->field376_0x17a = 0x1;
  uVar1->field377_0x17c = 0x1;
  uVar1->field378_0x17e = 0x4;
  uVar1->field381_0x182 = 0x32;
  uVar1->field382_0x184 = 0xa;
  uVar1->field383_0x186 = 0xa;
  uVar1->field384_0x188 = 0xa;
  uVar1->field385_0x18a = 0x4b;
  memset_far(uVar1 + 0x1,value,0x0);
  return;
}



// Sets the total population value (or a related 32-bit metric) at offset 4 of the
// colony structure.

void __stdcall16far Colony_Set_Population_Total_Logic_3534(u32 this_ptr,u32 value)
{
  *(u32 *)((int)this_ptr + 0x4) = value;
  return;
}



// Adds a 32-bit value to the colony's total population or primary resource counter
// (offset 4).

void __stdcall16far Colony_Resource_Add_to_Total_3548(u32 this_ptr,long amount)
{
  long *plVar1;
  
  plVar1 = (long *)((int)this_ptr + 0x4);
  *plVar1 = *plVar1 + amount;
  return;
}



// Bulk adds values from a provided source array (param_2) to the colony's resource
// tracking array (offset 4). Processes all 91 (0x5B) elements.

void __stdcall16far Colony_Resource_Batch_Add_355c(u32 this_ptr,u32 src_array)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  do
  {
    iVar1 = uStack_4 * 0x4;
    uVar2 = (undefined2)(this_ptr >> 0x10);
    *(long *)((int)this_ptr + iVar1 + 0x4) =
         *(long *)(iVar1 + (int)src_array) + *(long *)((int)this_ptr + 0x4 + iVar1);
    uStack_4 += 0x1;
  } while (uStack_4 < 0x5b);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Processes a large-scale population departure or loss event. Allocates a temporary
// buffer to track removed counts per category, then randomly decrements population from
// categories 3 and 4 until the target (param_2) is reached. Triggers sound and resets
// metrics.

uint * __stdcall16far
Colony_Process_Population_Departure_Logic_35a4(void *this_ptr,long amount)
{
  uint *puVar1;
  uint uVar2;
  undefined *heap_ctx;
  uint *puVar3;
  int index;
  undefined *in_DX;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u32 uVar5;
  long lVar6;
  long lVar7;
  undefined1 local_c [0x2];
  undefined1 local_a [0x2];
  undefined1 local_8 [0x2];
  uint *puStack_6;
  undefined *puStack_4;
  
  Simulator_Log_Debug_Message_to_File_840a(0x516a,0x1050,amount);
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  puVar3 = alloc_with_hooks(0x16c,0x1,heap_ctx);
  _puStack_6 = (uint *)CONCAT22(in_DX,puVar3);
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_c),
             (undefined1 *)CONCAT22(unaff_SS,local_a),0x3);
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(undefined1 *)CONCAT22(unaff_SS,local_8),
             (undefined1 *)CONCAT22(unaff_SS,local_c),0x4);
  do
  {
    if (amount < 0x1) break;
    index = random_int_range((int)_local_a,(int)((ulong)_local_a >> 0x10));
    uVar5 = Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                      (this_ptr,(long *)CONCAT22(unaff_SS,&amount),index);
    uVar4 = (undefined2)((ulong)_puStack_6 >> 0x10);
    puVar1 = (uint *)_puStack_6 + index * 0x2;
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (uint)uVar5;
    puVar1 = (uint *)_puStack_6 + index * 0x2 + 0x1;
    *puVar1 = *puVar1 + (int)(uVar5 >> 0x10) + (uint)CARRY2(uVar2,(uint)uVar5);
    lVar6 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x3);
    lVar7 = Colony_Calculate_Sum_Resource_Group_38f2(this_ptr,0x4);
  } while ((int)((ulong)lVar6 >> 0x10) + (int)((ulong)lVar7 >> 0x10) +
           (uint)CARRY2((uint)lVar6,(uint)lVar7) != 0x0 ||
           (uint)lVar6 + (uint)lVar7 != 0x0);
  memset_far((void *)((int)(void *)this_ptr + 0x18c),(int)((ulong)this_ptr >> 0x10),0x0)
  ;
  return puStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles specialized population departures (param_2 1-4). Either decrements counts
// sequentially from a range (using 39DC) or picks random categories from the full range
// (0-90) until the target is met.

void * __stdcall16far
Colony_Process_Special_Departure_Logic_3694(void *param_1,int param_2,long param_3)
{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  undefined *heap_ctx;
  void *pvVar4;
  int index;
  undefined *in_DX;
  undefined2 unaff_SS;
  u32 uVar5;
  
  Simulator_Log_Debug_Message_to_File_840a
            (0x517a,0x1050,(int)param_3,(int)((ulong)param_3 >> 0x10));
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar4 = alloc_with_hooks(0x16c,0x1,heap_ctx);
  if (((param_2 < 0x1) || (SBORROW2(param_2,0x1))) || (0x4 < param_2 + -0x1))
  {
    while (0x0 < param_3)
    {
      index = random_int_range(0x0,0x5a);
      uVar5 = Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                        (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),index);
      puVar1 = (uint *)(index * 0x4 + (int)pvVar4);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 + (uint)uVar5;
      piVar2 = (int *)((int)pvVar4 + index * 0x4 + 0x2);
      *piVar2 = *piVar2 + (int)(uVar5 >> 0x10) + (uint)CARRY2(uVar3,(uint)uVar5);
    }
  }
  else
  {
    Colony_Decrement_Range_Sequentially_39dc
              (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),
               (void *)CONCAT22(in_DX,pvVar4),param_2);
  }
  memset_far((void *)((int)(void *)param_1 + 0x18c),(int)((ulong)param_1 >> 0x10),0x0);
  return (void *)CONCAT22(in_DX,pvVar4);
}



// Decrements a total value from a specific category group (param_2). Either scans the
// entire array or uses 3948 to find the group's range and evenly distributes the loss.
// Triggers resource change events on completion.

void __stdcall16far
Colony_Distribute_Value_Decrement_across_Group_375a
          (astruct_282 *param_1,int param_2,long param_3)
{
  int iVar1;
  int iVar2;
  long lVar3;
  void *lVar8;
  astruct_282 *uVar9;
  int iVar4;
  int value;
  undefined2 unaff_SS;
  int iStack_14;
  undefined4 uStack_12;
  int local_6;
  int local_4;
  
  uVar9 = (astruct_282 *)param_1;
  value = (int)((ulong)param_1 >> 0x10);
  if (param_2 == 0x0)
  {
    local_4 = 0x5a;
    while ((-0x1 < local_4 &&
           (Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                      (param_1,(undefined4 *)CONCAT22(unaff_SS,&param_3),local_4),
           param_3 != 0x0)))
    {
      local_4 += -0x1;
    }
  }
  else
  {
    Colony_Get_Resource_Group_Array_Range_3948
              (param_1,(int *)CONCAT22(unaff_SS,&local_4),
               (int *)CONCAT22(unaff_SS,&local_6),param_2);
    iVar2 = (local_4 - local_6) + 0x1;
    lVar3 = param_3 / (long)iVar2;
    lVar8 = (void *)(lVar3 * iVar2);
    uStack_12 = CONCAT22(((int)((ulong)param_3 >> 0x10) - (int)((ulong)lVar8 >> 0x10)) -
                         (uint)((uint)param_3 < (uint)lVar8),(uint)param_3 - (uint)lVar8
                        );
    for (iStack_14 = local_6; iStack_14 <= local_4; iStack_14 += 0x1)
    {
      iVar4 = iStack_14 * 0x4;
      *(long *)(&uVar9->field_0x4 + iVar4) =
           *(long *)(&uVar9->field_0x4 + iVar4) - lVar3;
      iVar2 = *(int *)(&uVar9->field_0x6 + iVar4);
      if (uStack_12._2_2_ != 0x0 || (int)uStack_12 != 0x0)
      {
        iVar1 = *(int *)(&uVar9->field_0x4 + iVar4);
        *(int *)(&uVar9->field_0x4 + iVar4) = iVar1 + -0x1;
        *(uint *)(&uVar9->field_0x6 + iVar4) = iVar2 - (uint)(iVar1 == 0x0);
        uStack_12 += -0x1;
      }
      if (*(int *)(&uVar9->field_0x6 + iStack_14 * 0x4) < 0x0)
      {
        *(undefined4 *)(&uVar9->field_0x4 + iStack_14 * 0x4) = 0x0;
      }
    }
  }
  memset_far(uVar9 + 0x1,value,0x0);
  return;
}



// Shifts all resource/population values one slot to the right in the internal array,
// effectively clearing the first slot (offset 4).

void __stdcall16far Colony_Resource_Shift_Left_Logic_387c(void *this_ptr)
{
  u16 uStack_4;
  
  uStack_4 = 0x5a;
  do
  {
    *(undefined4 *)(uStack_4 * 0x4 + (int)this_ptr + 0x4) =
         *(undefined4 *)(uStack_4 * 0x4 + (int)this_ptr);
    uStack_4 -= 0x1;
  } while (0x0 < (int)uStack_4);
  *(undefined4 *)((int)this_ptr + 0x4) = 0x0;
  return;
}



// Returns the aggregate sum of all 91 elements in the colony's primary resource
// tracking array.

long __stdcall16far Colony_Calculate_Sum_All_Resources_38b8(int offset,u16 segment)
{
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  uStack_6 = 0x0;
  uStack_8 = 0x0;
  do
  {
    uStack_6 += *(long *)(offset + 0x4 + uStack_8 * 0x4);
    uStack_8 += 0x1;
  } while (uStack_8 < 0x5b);
  return uStack_6;
}



// Calculates the sum of resource values for a specific category group (param_2), using
// 3948 to determine the relevant array range.

long __stdcall16far
Colony_Calculate_Sum_Resource_Group_38f2(void *this_ptr,int group_id)
{
  undefined2 unaff_SS;
  int iStack_c;
  int local_a;
  int local_8;
  long lStack_6;
  
  lStack_6 = 0x0;
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(int *)CONCAT22(unaff_SS,&local_a),
             (int *)CONCAT22(unaff_SS,&local_8),group_id);
  for (iStack_c = local_8; iStack_c <= local_a; iStack_c += 0x1)
  {
    lStack_6 += *(long *)((int)(void *)this_ptr + iStack_c * 0x4 + 0x4);
  }
  return lStack_6;
}



// Maps a group ID (1-5) to a start and end index within the colony's primary 91-element
// resource array. Groups likely represent Workers, Scientists, Colonists, etc.

void __stdcall16far
Colony_Get_Resource_Group_Array_Range_3948
          (void *this_ptr,void *out_end,void *out_start,int group_id)
{
  undefined2 uVar1;
  
  if (group_id == 0x1)
  {
    *(undefined2 *)out_start = 0x0;
    *(undefined2 *)out_end = 0x3;
    return;
  }
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  if (group_id == 0x2)
  {
    *(undefined2 *)out_start = 0x4;
    *(undefined2 *)out_end = *(undefined2 *)((int)this_ptr + 0x1ae);
    return;
  }
  if (group_id == 0x3)
  {
    *(int *)out_start = *(int *)((int)this_ptr + 0x1ae) + 0x1;
    *(undefined2 *)out_end = 0x27;
    return;
  }
  if (group_id != 0x4)
  {
    if (group_id == 0x5)
    {
      *(undefined2 *)out_start = 0x4c;
    }
    else
    {
      *(undefined2 *)out_start = 0x0;
    }
    *(undefined2 *)out_end = 0x5a;
    return;
  }
  *(undefined2 *)out_start = 0x28;
  *(undefined2 *)out_end = 0x4b;
  return;
}



// Decrements values from the colony's tracking array by scanning a specific group range
// in reverse order until the target total (param_2) is reached. Stores individual
// decrements in a result buffer.

void __stdcall16far
Colony_Decrement_Range_Sequentially_39dc
          (void *this_ptr,void *amount,void *out_decrements,int group_id)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  u32 uVar2;
  int iStack_8;
  int local_6;
  int local_4;
  
  Colony_Get_Resource_Group_Array_Range_3948
            (this_ptr,(int *)CONCAT22(unaff_SS,&local_6),
             (int *)CONCAT22(unaff_SS,&local_4),group_id);
  iStack_8 = local_6;
  while( true )
  {
    if (iStack_8 < local_4)
    {
      return;
    }
    uVar2 = Simulator_Process_Turn_Decrement_Resource_Group_3a3a
                      (this_ptr,amount,iStack_8);
    uVar1 = (undefined2)((ulong)out_decrements >> 0x10);
    *(undefined2 *)(iStack_8 * 0x4 + (int)out_decrements) = (int)uVar2;
    *(undefined2 *)(iStack_8 * 0x4 + (int)out_decrements + 0x2) = (int)(uVar2 >> 0x10);
    if (*(long *)amount == 0x0) break;
    iStack_8 += -0x1;
  }
  return;
}



// Decrements a target resource amount from a specific group in the colony's linked
// list. Handles remainders and returns the net change.

u32 __stdcall16far
Simulator_Process_Turn_Decrement_Resource_Group_3a3a
          (void *this_ptr,void *amount,int index)
{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  void *pvVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  int iStack_4;
  
  uVar8 = (undefined2)((ulong)amount >> 0x10);
  uVar4 = *(undefined4 *)amount;
  iVar1 = *(int *)((int)(void *)amount + 0x2);
  uVar9 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  iVar7 = index * 0x4;
  iVar2 = *(int *)((int)pvVar6 + iVar7 + 0x6);
  uVar5 = (uint)uVar4;
  if ((iVar2 < iVar1) ||
     ((iVar2 <= iVar1 && (*(uint *)((int)pvVar6 + iVar7 + 0x4) < uVar5))))
  {
    *(long *)amount = *(long *)amount - *(long *)((int)pvVar6 + index * 0x4 + 0x4);
    *(undefined4 *)((int)pvVar6 + index * 0x4 + 0x4) = 0x0;
  }
  else
  {
    uVar3 = *(uint *)((int)pvVar6 + iVar7 + 0x4);
    iVar2 = *(int *)((int)pvVar6 + iVar7 + 0x6);
    *(int *)((int)pvVar6 + iVar7 + 0x4) = uVar3 - uVar5;
    *(int *)((int)pvVar6 + iVar7 + 0x6) = (iVar2 - iVar1) - (uint)(uVar3 < uVar5);
    *(undefined4 *)amount = 0x0;
  }
  iStack_4 = (int)((ulong)uVar4 >> 0x10);
  return CONCAT22((iStack_4 - *(int *)((int)(void *)amount + 0x2)) -
                  (uint)(uVar5 < *(uint *)amount),uVar5 - *(int *)amount);
}



undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_3ac6(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



// An alternative routine for initializing DanBrotherton UI windows with specific
// resource IDs.

void * __stdcall16far
UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
          (void *this_ptr,u16 arg1,u16 arg2,u16 arg3,u16 arg4)
{
  astruct_281 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_281 *)this_ptr;
  *(undefined4 *)this_ptr = *(undefined4 *)arg3;
  uVar1->field4_0x4 = *(u16 *)(arg3 + 0x4);
  uVar1->field5_0x6 = arg2;
  uVar1->field6_0x8 = arg1;
  return this_ptr;
}



// Initializes a large table of 3D coordinate offsets (at 0x1050:65E6) used for mapping
// neighbor tiles and entity proximity. Maps over 60 directions/offsets.

u32 * __cdecl16far Simulator_Context_Initialize_Coordinate_Offsets_3b28(void)
{
  void *pvVar1;
  u16 in_DX;
  u16 uVar2;
  int unaff_SS;
  void *pvVar3;
  u32 *puVar4;
  undefined1 local_8 [0x6];
  
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065e6,0x115,0x15b,(u16)pvVar1,in_DX);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065f0,0x116,0x15c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105065fa,0x117,0x15d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506604,0x118,0x15e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050660e,0x119,0x15f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x28);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506618,0x11a,0x160,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506622,0x11b,0x161,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050662c,0x11c,0x162,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506636,0x11d,0x163,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506640,0x11e,0x164,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050664a,0x11f,0x165,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506654,0x120,0x166,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050665e,0x121,0x167,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506668,0x122,0x168,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x28);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506672,0x123,0x169,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050667c,0x124,0x16a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506686,0x125,0x16b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506690,0x126,0x16c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050669a,0x127,0x16d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066a4,0x128,0x16e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066ae,0x129,0x16f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066b8,0x12a,0x170,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066c2,0x12b,0x171,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x37);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066cc,0x12c,0x172,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066d6,0x12d,0x173,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066e0,0x12e,0x174,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066ea,0x12f,0x175,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066f4,0x130,0x176,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x3c);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105066fe,0x131,0x177,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506708,0x132,0x178,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506712,0x133,0x179,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050671c,0x134,0x17a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506726,0x135,0x17b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506730,0x136,0x17c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050673a,0x137,0x17d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506744,0x138,0x17e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050674e,0x139,0x17f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506758,0x13a,0x180,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506762,0x13b,0x181,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050676c,0x13c,0x182,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506776,0x13d,0x183,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506780,0x13e,0x184,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050678a,0x13f,0x185,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506794,0x140,0x186,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050679e,0x141,0x187,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x64);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067a8,0x142,0x188,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067b2,0x143,0x189,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x64);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067bc,0x144,0x18a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067c6,0x145,0x18b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067d0,0x146,0x18c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x32);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067da,0x147,0x18d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067e4,0x148,0x18e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067ee,0x149,0x18f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x105067f8,0x14a,0x190,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506802,0x14b,0x191,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050680c,0x14c,0x192,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506816,0x14d,0x193,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506820,0x14e,0x194,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050682a,0x14f,0x195,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xf);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506834,0x150,0x196,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x1e);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050683e,0x151,0x197,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x23);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506848,0x152,0x198,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506852,0x153,0x199,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x2d);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050685c,0x154,0x19a,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x19);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506866,0x155,0x19b,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0xa);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506870,0x156,0x19c,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050687a,0x157,0x19d,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x5);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506884,0x158,0x19e,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,-0x14);
  pvVar3 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x1050688e,0x159,0x19f,(u16)pvVar1,uVar2);
  uVar2 = (u16)((ulong)pvVar3 >> 0x10);
  pvVar1 = pack_3words_alt(local_8,unaff_SS,0x0,0x0);
  puVar4 = UI_DanBrotherton_Window_Initialize_vtable_and_Resource_Alternative_3af6
                     ((void *)0x10506898,0x15a,0x1a0,(u16)pvVar1,uVar2);
  return (u32 *)puVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Simulator Map Context. Initializes internal tracking fields and
// links to the global planetary resource state (Resource ID 2).

u32 * __stdcall16far Simulator_Map_Context_ctor_init_44be(u32 *this_ptr)
{
  long lVar1;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x0;
  this_ptr[0x2] = 0x0;
  *(undefined4 *)((int)this_ptr + 0x12) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x152) = 0x0;
  *(undefined2 *)(this_ptr + 0x55) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x156) = 0x0;
  *(undefined2 *)(this_ptr + 0x56) = 0x0;
  *(undefined2 *)((int)this_ptr + 0x15a) = 0x0;
  this_ptr[0x57] = 0x0;
  this_ptr[0x58] = 0x0;
  this_ptr[0x59] = 0x0;
  this_ptr[0x15a] = 0x0;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  this_ptr[0x15a] = *(u32 *)((int)lVar1 + 0x64);
  return this_ptr;
}



// Frees multiple internal data buffers managed by the Simulator Map Context.

void __stdcall16far Simulator_Map_Context_Free_Internal_Buffers_4538(void *this_ptr)
{
  undefined2 uVar1;
  
  free_if_not_null((void *)*(void **)this_ptr);
  uVar1 = (undefined2)((ulong)this_ptr >> 0x10);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x12));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)(void *)this_ptr + 0x15c));
  return;
}



// Retrieves a pointer to the 'active' 3D coordinate structure within the simulator
// context.

void * __stdcall16far Simulator_Get_Active_Coordinate_Ptr_4574(void *this_ptr)
{
  astruct_280 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_280 *)this_ptr;
  uVar1->field12_0xc = u16_1050_518c;
  uVar1->field13_0xe = 0x518e;
  uVar1->field14_0x10 = (undefined *)(dword *)&g_HeapContext;
  return (void *)CONCAT22(uVar2,&uVar1->field12_0xc);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Allocates and initializes a specialized resource entry for the simulator. Loads the
// resource name string and maps its internal state.

u16 * __stdcall16far
Simulator_Factory_Create_Resource_Entry_4594
          (undefined2 param_1,undefined2 param_2,int param_3)
{
  undefined2 *puVar1;
  char *pcVar2;
  int in_DX;
  int iVar3;
  undefined2 unaff_SI;
  u16 *w1;
  undefined4 uStack_c;
  undefined2 *puStack_8;
  
  puVar1 = allocate_memory(CONCAT22(unaff_SI,0x10));
  uStack_c = (undefined2 *)CONCAT22(in_DX,puVar1);
  if (in_DX == 0x0 && puVar1 == NULL)
  {
    puStack_8 = NULL;
    in_DX = 0x0;
  }
  else
  {
    zero_init_struct_6bytes(puVar1 + 0x2);
    puStack_8 = uStack_c;
  }
  iVar3 = (param_3 + -0x1) * 0x12;
  pcVar2 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),
                      *(int *)(iVar3 + 0x51b8));
  w1 = (u16 *)((ulong)puStack_8 >> 0x10);
  puVar1 = (undefined2 *)puStack_8;
  *puStack_8 = pcVar2;
  puVar1[0x1] = in_DX;
  puVar1[0x5] = *(undefined2 *)(iVar3 + 0x51ba);
  pack_3words_reverse(puVar1 + 0x2,(int)w1,*(int *)(iVar3 + 0x51c0),
                      *(int *)(iVar3 + 0x51be));
  puVar1[0x6] = iVar3 + 0x51c2;
  puVar1[0x7] = (dword *)&g_HeapContext;
  return w1;
}



// A complex factory routine that instantiates a specialized simulator entity. Includes
// randomized state initialization and internal coordinate mapping.

int * __stdcall16far
Simulator_Factory_Create_Specialized_Entity_Entry_4628
          (undefined2 param_1,undefined2 param_2,int param_3)
{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  int iVar6;
  int *dest;
  int *w1;
  int iStack_18;
  undefined4 uStack_14;
  int iStack_a;
  int *piStack_8;
  
  iVar2 = param_3 + -0x1;
  piVar3 = allocate_memory(CONCAT22(unaff_SI,0x28));
  uStack_14 = (int *)CONCAT22(in_DX,piVar3);
  if (in_DX == 0x0 && piVar3 == NULL)
  {
    piStack_8 = NULL;
  }
  else
  {
    zero_init_struct_6bytes(piVar3 + 0x3);
    piStack_8 = uStack_14;
  }
  w1 = (int *)((ulong)piStack_8 >> 0x10);
  piVar3 = (int *)piStack_8;
  (piVar3 + 0x1)[0x0] = 0x0;
  (piVar3 + 0x1)[0x1] = 0x0;
  iVar6 = iVar2 * 0x5e;
  pack_3words_reverse(piVar3 + 0x3,(int)w1,*(int *)(iVar6 + 0x5336),
                      *(int *)(iVar6 + 0x5334));
  piVar3[0x6] = *(int *)(iVar6 + 0x5348);
  *piStack_8 = param_3;
  *(undefined4 *)(piVar3 + 0x7) = *(undefined4 *)(iVar6 + 0x534a);
  iStack_a = 0x0;
  do
  {
    piVar3[iStack_a + 0x9] = *(int *)((iVar2 * 0x2f + iStack_a) * 0x2 + 0x5338);
    iStack_a += 0x1;
  } while (iStack_a < 0x8);
  uVar1 = *(undefined4 *)(iVar2 * 0x5e + 0x5350);
  iVar4 = random_int_range((int)uVar1,(int)((ulong)uVar1 >> 0x10));
  piVar3[0x11] = iVar4;
  dest = (int *)(iVar2 * 0x5e + 0x5354);
  piVar3[0x12] = (int)dest;
  piVar3[0x13] = (int)(dword *)&g_HeapContext;
  iVar6 = *dest;
  memset_far(dest,0x1050,0x0);
  iStack_a = 0x0;
LAB_1030_474c:
  if (iVar4 <= iStack_a)
  {
    return w1;
  }
  do
  {
    iVar5 = random_int_range(iVar6,*(int *)(iVar2 * 0x5e + 0x534e) + iVar6 + -0x1);
    iStack_18 = 0x0;
    while( true )
    {
      if (iStack_a < iStack_18)
      {
        *(int *)((int)*(undefined4 *)(piVar3 + 0x12) + iStack_a * 0x2) = iVar5;
        iStack_a += 0x1;
        goto LAB_1030_474c;
      }
      if (*(int *)((int)*(undefined4 *)(piVar3 + 0x12) + iStack_18 * 0x2) == iVar5)
      break;
      iStack_18 += 0x1;
    }
  } while( true );
}
