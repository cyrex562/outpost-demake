/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 37/56
 * Original lines (combined): 91436-93531
 * Boundaries: top-level declarations/definitions only
 */




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
  int reg_dx;
  int iVar3;
  undefined2 unaff_SI;
  u16 *w1;
  undefined4 uStack_c;
  undefined2 *puStack_8;
  
  puVar1 = allocate_memory(CONCAT22(unaff_SI,0x10));
  uStack_c = (undefined2 *)CONCAT22(reg_dx,puVar1);
  if (reg_dx == 0x0 && puVar1 == NULL)
  {
    puStack_8 = NULL;
    reg_dx = 0x0;
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
  puVar1[0x1] = reg_dx;
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
  int reg_dx;
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
  uStack_14 = (int *)CONCAT22(reg_dx,piVar3);
  if (reg_dx == 0x0 && piVar3 == NULL)
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex factory for creating building entries in the simulator. Handles
// resource allocation, naming (via string resources), vtable assignment (0x6AD2), and
// complex coordinate-based footprint generation for the building site.

int * __stdcall16far
Simulator_Factory_Create_Building_Entry_Logic_4782
          (undefined2 param_1,undefined2 param_2,int param_3,int param_4,
          undefined2 param_5)
{
  void *pvVar1;
  u16 uVar2;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined *reg_dx;
  uint uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  undefined2 unaff_SI;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  undefined2 *puVar11;
  long context;
  void *pvVar12;
  undefined *puVar13;
  int iStack_dc;
  undefined *local_c4;
  undefined *puStack_c2;
  undefined *local_c0;
  int iStack_be;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_b4;
  void *pvStack_b2;
  undefined *puStack_b0;
  void *pvStack_ae;
  undefined *puStack_ac;
  uint uStack_aa;
  int iStack_a8;
  int iStack_a6;
  u16 uStack_a4;
  u16 uStack_a2;
  int iStack_a0;
  int iStack_9e;
  int iStack_9c;
  void *pvStack_9a;
  undefined2 uStack_98;
  char *pcStack_96;
  undefined2 uStack_94;
  char local_92 [0x80];
  void *pvStack_12;
  undefined2 uStack_10;
  u8 *puStack_e;
  undefined2 uStack_a;
  undefined2 uStack_8;
  undefined4 uStack_6;
  
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_c4 = init_memory_allocator();
  }
  else
  {
    reg_dx = g_AllocatedBlock_Segment;
    local_c4 = g_AllocatedBlock_Offset;
  }
  puStack_c2 = reg_dx;
  pvVar1 = alloc_with_hooks(0x20,0x1,local_c4);
  uStack_b8 = (void *)CONCAT22(reg_dx,pvVar1);
  if (reg_dx == NULL && pvVar1 == NULL)
  {
    puVar8 = NULL;
    pvVar1 = NULL;
  }
  else
  {
    puVar11 = Simulator_Entity_Init_State_84ae((void *)CONCAT22(reg_dx,pvVar1));
    pvVar1 = (void *)((ulong)puVar11 >> 0x10);
    puVar8 = (undefined2 *)puVar11;
  }
  uStack_6 = (undefined2 *)CONCAT22(pvVar1,puVar8);
  *uStack_6 = param_5;
  copy_struct_6bytes(puVar8 + 0x4,pvVar1);
  if (param_4 != 0x0)
  {
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    uStack_8 = (undefined2)((ulong)context >> 0x10);
    uStack_a = (undefined2)context;
    puStack_e = (u8 *)UI_Component_Get_FarPtr_at_Offset_16_Logic(context);
    pvVar12 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)puStack_e);
    uVar10 = (undefined2)((ulong)pvVar12 >> 0x10);
    pvStack_12 = (void *)pvVar12;
    uStack_10 = uVar10;
    pcStack_96 = Resource_Manager_LoadString_to_Internal_Buffer
                           ((int)(void *)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),0x62d);
    uStack_94 = uVar10;
    uVar2 = Simulator_Entity_Increment_Sequence_ID_2a98
                      ((void *)CONCAT22(uStack_10,pvStack_12));
    ((undefined2 *)uStack_6)[0x1] = uVar2;
    sprintf_wrapper(local_92);
    pcVar3 = strdup_allocate(local_92);
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    ((undefined2 *)uStack_6)[0x2] = pcVar3;
    ((undefined2 *)uStack_6)[0x3] = uVar10;
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    ((undefined2 *)uStack_6)[0x7] = pvVar1;
    ((undefined2 *)uStack_6)[0x8] = uVar10;
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar9 = (undefined2)((ulong)uStack_6 >> 0x10);
    puVar8 = (undefined2 *)uStack_6;
    puVar8[0x9] = pvVar1;
    puVar8[0xa] = uVar10;
    pvStack_9a = get_with_lazy_init((void *)*(void **)(puVar8 + 0x7));
    iStack_9c = *(int *)((int)pvStack_9a + 0x4) + -0x1;
    iStack_9e = *(int *)((int)pvStack_9a + 0x8) + -0x1;
    if (param_3 != 0x0)
    {
      iStack_a0 = 0xf;
      uStack_98 = uVar10;
      if (puStack_e == NULL)
      {
        log_debug_message_v(0x56de,0x1050);
      }
      else
      {
        Simulator_Get_Site_Bounds_by_Entity_Type_2f1a
                  ((void *)CONCAT22(uStack_10,pvStack_12),
                   (undefined **)CONCAT22(unaff_SS,&local_c0),
                   (undefined **)CONCAT22(unaff_SS,&local_c4));
        iStack_a0 = random_int_range((int)local_c4,(int)local_c0);
      }
      uVar10 = (undefined2)((ulong)uStack_6 >> 0x10);
      ((undefined2 *)uStack_6)[0xe] = iStack_a0 * 0xa;
      ((undefined2 *)uStack_6)[0xe] = (iStack_a0 * 0xa) / 0x64;
      puVar13 = (undefined *)
                Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
      puStack_c2 = (undefined *)((ulong)puVar13 >> 0x10);
      local_c4 = (undefined *)puVar13;
      local_c0 = g_ModeVersion_13AE;
      pvVar12 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x9);
      iStack_be = Resource_Category_Get_Mapped_Offset_Value_Logic
                            ((void *)pvVar12,(int)((ulong)pvVar12 >> 0x10));
      iStack_bc = 0x3c;
      if ((int)local_c0 < 0x3)
      {
        if (0x0 < iStack_be)
        {
          iStack_bc = 0x5a;
        }
      }
      else if (iStack_be == 0x1)
      {
        iStack_bc = 0x44;
      }
      else if (iStack_be == 0x2)
      {
        iStack_bc = 0x4b;
      }
      else if (iStack_be == 0x3)
      {
        iStack_bc = 0x53;
      }
      else if (iStack_be == 0x4)
      {
        iStack_bc = 0x5a;
      }
      iVar4 = iStack_bc * iStack_a0;
      iStack_a0 = iVar4 / 0x64;
      uVar6 = iVar4 % 0x64;
      uVar10 = (undefined2)((ulong)uStack_6 >> 0x10);
      ((undefined2 *)uStack_6)[0xd] = iStack_a0;
      uStack_a4 = iStack_a0 + ((undefined2 *)uStack_6)[0xe];
      uStack_a2 = uStack_a4;
      pvVar1 = allocate_memory(CONCAT22(unaff_SI,uStack_a4 * 0x6));
      uStack_b8 = (void *)CONCAT22(uVar6,pvVar1);
      puVar7 = (undefined *)(uVar6 | (uint)pvVar1);
      if (puVar7 == NULL)
      {
        *(undefined4 *)((undefined2 *)uStack_6 + 0xb) = 0x0;
      }
      else
      {
        call_function_n_times
                  ((void *)((int)(void **)&PTR_s_M3_1050_3bc1_1050_3e36 + 0x2),0x1008,
                   uStack_a4);
        *(void **)((undefined2 *)uStack_6 + 0xb) = uStack_b8;
      }
      uStack_aa = uStack_a2 * 0x2;
      if (_g_AllocatedBlock_Offset == NULL)
      {
        puVar5 = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        puVar5 = g_AllocatedBlock_Offset;
      }
      pvVar1 = alloc_with_hooks((ulong)uStack_aa,0x1,puVar5);
      _pvStack_ae = (void *)CONCAT22(puVar7,pvVar1);
      if (_g_AllocatedBlock_Offset == NULL)
      {
        puVar5 = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        puVar5 = g_AllocatedBlock_Offset;
      }
      pvStack_b2 = alloc_with_hooks((ulong)uStack_aa,0x1,puVar5);
      iStack_b4 = 0x0;
      puStack_b0 = puVar7;
LAB_1030_4b57:
      if (iStack_b4 < (int)uStack_a2)
      {
        do
        {
          iStack_a6 = random_int_range(0x0,iStack_9c);
          iStack_a8 = random_int_range(0x0,iStack_9e);
          iStack_dc = 0x0;
          while( true )
          {
            uVar10 = (undefined2)((ulong)_pvStack_ae >> 0x10);
            if (iStack_b4 <= iStack_dc)
            {
              *(int *)(iStack_b4 * 0x2 + (int)(void *)_pvStack_ae) = iStack_a6;
              *(int *)(iStack_b4 * 0x2 + (int)pvStack_b2) = iStack_a8;
              pack_3words_reverse((void *)((int)*(undefined4 *)
                                                 ((undefined2 *)uStack_6 + 0xb) +
                                          iStack_b4 * 0x6),
                                  (int)((ulong)*(undefined4 *)
                                                ((undefined2 *)uStack_6 + 0xb) >> 0x10),
                                  0x0,iStack_a8);
              iStack_b4 += 0x1;
              goto LAB_1030_4b57;
            }
            if ((*(int *)(iStack_dc * 0x2 + (int)(void *)_pvStack_ae) == iStack_a6) &&
               (*(int *)(iStack_dc * 0x2 + (int)pvStack_b2) == iStack_a8)) break;
            iStack_dc += 0x1;
          }
        } while( true );
      }
      free_if_not_null((void *)_pvStack_ae);
      uStack_b8._0_2_ = pvStack_b2;
      uStack_b8._2_2_ = puStack_b0;
      free_if_not_null(pvStack_b2);
    }
  }
  return uStack_6._2_2_;
}



// Loads a 152-byte (0x26 dwords) object template from the context's internal resource
// list (offset 0x12) into an active object slot.

void __stdcall16far
Simulator_Map_Context_Load_Object_Template_4bbe(void *this_ptr,int index)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  if (*(long *)((int)pvVar6 + 0x12) == 0x0)
  {
    Simulator_Context_Load_bldgbld_dat_Logic_4f5a(this_ptr);
  }
  puVar4 = (undefined4 *)((int)pvVar6 + 0x16);
  uVar3 = *(undefined2 *)((int)pvVar6 + 0x14);
  puVar7 = (undefined4 *)(*(int *)((int)pvVar6 + 0x12) + index * 0x98);
  for (iVar5 = 0x26; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar4;
    puVar4 = puVar4 + 0x1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



// Loads a 174-byte (0xAE) building operational template from the context's internal
// library (offset 0x15C).

void __stdcall16far
Simulator_Context_Load_Building_Op_Template_4c06(void *this_ptr,int index)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  
  uVar8 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar6 = (void *)this_ptr;
  if (*(long *)((int)pvVar6 + 0x15c) == 0x0)
  {
    Simulator_Context_Load_bldgops_dat_Logic_5044(this_ptr);
  }
  puVar4 = (undefined4 *)((int)pvVar6 + 0xae);
  uVar3 = *(undefined2 *)((int)pvVar6 + 0x15e);
  puVar7 = (undefined4 *)(*(int *)((int)pvVar6 + 0x15c) + index * 0xae);
  for (iVar5 = 0x2b; iVar5 != 0x0; iVar5 += -0x1)
  {
    puVar2 = puVar4;
    puVar4 = puVar4 + 0x1;
    puVar1 = puVar7;
    puVar7 = puVar7 + 0x1;
    *puVar2 = *puVar1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar7;
  return;
}



void __cdecl16far Simulator_Context_Initialize_Coordinate_Offsets_51eb(void)
{
  Simulator_Context_Initialize_Coordinate_Offsets_3b28();
  return;
}



// Constructor for the 'GenKids' simulator command. Initializes base class with ID 12999
// and sets internal name 'SCGenKids'. Sets vtable to 0x55FE.

void * __stdcall16far
Simulator_Command_GenKids_ctor_init_521c(void *this_ptr,void *arg2)
{
  astruct_275 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x32c7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_275 *)this_ptr;
  uVar1->field263_0x108 = arg2;
  *(undefined2 *)this_ptr = 0x55fe;
  uVar1->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar1->field7_0x8,uVar2,0x5714,0x1050,arg2);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves an entity from the simulator and triggers its virtual update callback at
// offset 0x14.

u16 __stdcall16far Simulator_Command_Update_Entity_vcall_14_Logic_5260(void *this_ptr)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)this_ptr + 0x108));
  puVar1 = (undefined2 *)((int)*puVar2 + 0x14);
  (*(code *)*puVar1)();
  return 0x1;
}



// Constructor for the 'Select' simulator command. Initializes base class with ID 12999
// and sets internal name 'SCSelect'. Sets vtable to 0x55EE.

void * __stdcall16far Simulator_Command_Select_ctor_init_532e(void *this_ptr,void *arg2)
{
  astruct_274 *uVar1;
  undefined2 uVar2;
  
  UI_Build_Item_Type_6AD2_ctor_init_d1dc(this_ptr,0x32c7);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_274 *)this_ptr;
  uVar1->field260_0x108 = arg2;
  *(undefined2 *)this_ptr = 0x55ee;
  uVar1->field2_0x2 = 0x1030;
  sprintf_wrapper(&uVar1->field4_0x8,uVar2,0x5726,0x1050,uVar1->field3_0x4,
                  *(uint *)((int)&uVar1->field260_0x108 + 0x2) >> 0x8);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Resource_Manager_Dispatch_Set_Ptr_538a(undefined4 param_1)
{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
  long context;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = *(uint *)(iVar2 + 0x10a) >> 0x8;
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  if (uVar1 == 0x1)
  {
    UI_Component_Set_FarPtr_at_Offset_1A_Logic_2(context,*(long *)(iVar2 + 0x108));
  }
  else if (uVar1 == 0x2)
  {
    UI_Component_Set_FarPtr_at_Offset_16_Logic(context,*(long *)(iVar2 + 0x108));
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far Simulator_Dispatch_Entity_Event_53f4(undefined4 param_1)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 unaff_SS;
  char cStack_123;
  undefined1 local_11e [0x10e];
  undefined4 local_10;
  undefined4 local_c;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  iVar2 = (int)param_1;
  uVar1 = *(undefined4 *)(iVar2 + 0x108);
  local_c._3_1_ = (char)((ulong)uVar1 >> 0x18);
  local_c = uVar1;
  if (local_c._3_1_ == -0x1)
  {
    Simulator_Invoke_Virtual_Function_by_TypeID_e2e0
              (_p_SimulatorWorldContext,0x0,0x0,(int)*(undefined4 *)(iVar2 + 0x108),
               (int)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x10),0x0,0x0);
  }
  else
  {
    uVar1 = *(undefined4 *)(iVar2 + 0x108);
    local_10._3_1_ = (char)((ulong)uVar1 >> 0x18);
    local_10 = (void *)uVar1;
    if (local_10._3_1_ == '\x03')
    {
      Simulator_Validate_and_Cleanup_Neighbor_Entities_e44a
                (_p_SimulatorWorldContext,*(long *)(iVar2 + 0x108));
    }
    else
    {
      Simulator_Batch_Process_Entities_in_Proximity_e372
                (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x108),
                 (uint)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x10));
    }
  }
  local_c._3_1_ = (char)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x18);
  if (local_c._3_1_ != '\x03')
  {
    local_c = *(undefined4 *)(iVar2 + 0x108);
    Simulator_Command_GenKids_ctor_init_521c
              ((undefined1 *)CONCAT22(unaff_SS,local_11e),
               (void *)*(undefined4 *)(iVar2 + 0x108));
    local_10 = (void *)*_p_SimulatorGlobalState;
    UI_Build_Item_Process_Event_Type4_Logic_d566
              (local_10,(undefined1 *)CONCAT22(unaff_SS,local_11e));
    cStack_123 = (char)((ulong)*(undefined4 *)(iVar2 + 0x108) >> 0x18);
    if (cStack_123 == '\x02')
    {
      Simulator_Get_Entity_Object_from_PackedID_e1ec
                (_p_SimulatorWorldContext,(u8 *)(u8 *)*(undefined4 *)(iVar2 + 0x108));
      Resource_Manager_Set_Offset_E82_Logic
                ((void *)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10));
    }
  }
  return 0x1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_5596(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Updates the production item's layout based on its linked object's dimensions.
// Calculates coordinate differences for UI positioning.

void __stdcall16far
UI_Production_Item_Update_Layout_Logic_5a80(void *this_ptr,void *entity_ptr)
{
  u16 uVar1;
  void *unaff_SS;
  undefined1 local_20 [0xc];
  undefined1 local_14 [0x6];
  u32 uStack_e;
  u32 uStack_a;
  astruct_270 *iStack_6;
  undefined2 uStack_4;
  
  uVar1 = (u16)((ulong)this_ptr >> 0x10);
  *(undefined4 *)((int)this_ptr + 0x10) = entity_ptr;
  iStack_6 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)entity_ptr + 0xe));
  uStack_a = iStack_6->field4_0x4;
  uStack_e = iStack_6->field5_0x8;
  uStack_4 = entity_ptr._2_2_;
  pack_3words_alt(local_14,(int)unaff_SS,0x0,(int)uStack_e + -0x1);
  copy_two_6byte_structs_to_12byte(local_20,unaff_SS,local_14);
  calc_abs_diff_between_halves_of_12byte_struct
            (local_20,unaff_SS,(int)this_ptr + 0x14,uVar1);
  return;
}



// Updates per-turn production metrics (offsets 0x1A, 0x1C) for a simulator entity.
// Ensuring the secondary counter meets or exceeds param_2.

void __stdcall16far
Simulator_Update_Entity_Production_Metrics_5b3e(u32 entity_ptr,int min_val,u16 value)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)(entity_ptr >> 0x10);
  iVar1 = (int)entity_ptr;
  *(u16 *)(iVar1 + 0x1a) = value;
  if (*(int *)(iVar1 + 0x1c) < min_val)
  {
    *(int *)(iVar1 + 0x1c) = min_val;
  }
  return;
}



// Returns a pointer to the 2D world coordinates (offset 0x14) within a simulator entity
// structure.

void * __stdcall16far Simulator_Get_Entity_Coords_Ptr_5b5c(int offset,uint16_t segment)
{
  return (void *)CONCAT22(segment,(void *)(offset + 0x14));
}
