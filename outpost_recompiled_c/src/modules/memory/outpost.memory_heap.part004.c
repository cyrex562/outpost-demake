/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 4/13
 * Original lines (combined): 3285-21691
 * Boundaries: top-level declarations/definitions only
 */

/* Win16 task-parameter globals saved at startup (1050:038c region) */
pointer g_hInstance;            /* hInstance passed to WinMain (1050:038c, g_TaskDI) */
pointer g_hPrevInstance;        /* hPrevInstance – 0 for first instance (1050:038e) */
pointer g_TaskDX_Param;         /* g_TaskDX value stored at startup (1050:0390) */
char *g_CmdLineDup;             /* strdup of lpCmdLine, freed on exit (1050:0392) */


// Unlinks a heap pool descriptor from the global doubly-linked list of pools. Used
// during pool destruction to ensure the global management structure remains consistent.

void __stdcall16far heap_unlink_pool_from_global_list(void *heap_ctx)
{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  int in_stack_00000006;
  undefined2 uStack_8;
  undefined2 uStack_4;
  
  iVar2 = *(int *)((int)heap_ctx + 0x2e);
  uVar3 = *(undefined2 *)((int)heap_ctx + 0x30);
  uStack_8 = 0x0;
  uStack_4 = *(int *)(iVar2 + 0x6);
  pvVar6 = (void *)*(int *)(iVar2 + 0x4);
  pvVar8 = NULL;
  if (uStack_4 != 0x0 || (void *)*(int *)(iVar2 + 0x4) != NULL)
  {
    while ((pvVar7 = pvVar6, iVar4 = uStack_4, pvVar7 != heap_ctx ||
           (uStack_4 != in_stack_00000006)))
    {
      piVar1 = (int *)((int)pvVar7 + 0x2a);
      uStack_4 = *(int *)((int)pvVar7 + 0x2c);
      pvVar6 = (void *)*piVar1;
      pvVar8 = pvVar7;
      uStack_8 = iVar4;
      if (uStack_4 == 0x0 && (void *)*piVar1 == NULL)
      {
        return;
      }
    }
    if (uStack_8 != 0x0 || pvVar8 != NULL)
    {
      uVar3 = *(undefined2 *)((int)pvVar7 + 0x2c);
      *(undefined2 *)((int)pvVar8 + 0x2a) = *(undefined2 *)((int)pvVar7 + 0x2a);
      *(undefined2 *)((int)pvVar8 + 0x2c) = uVar3;
      return;
    }
    uVar5 = *(undefined2 *)((int)pvVar7 + 0x2c);
    *(undefined2 *)(iVar2 + 0x4) = *(undefined2 *)((int)pvVar7 + 0x2a);
    *(undefined2 *)(iVar2 + 0x6) = uVar5;
  }
  return;
}



void stack_guarded_indirect_call(void *param_1,u16 param_2,int param_3)
{
  int reg_ax;
  undefined1 *puVar1;
  undefined *puVar2;
  undefined2 unaff_SS;
  
  puVar1 = (undefined1 *)(reg_ax + 0x1U & 0xfffe);
  if ((puVar1 < &stack0x0002) &&
     (puVar2 = (undefined *)-((int)puVar1 - (int)&stack0x0002),
     (undefined *)*(uint *)&g_AllocFlags <= puVar2))
  {
    if (puVar2 < *(undefined **)&p_AllocStrategyCode)
    {
      *(undefined **)&p_AllocStrategyCode = puVar2;
    }
                // WARNING: Could not recover jumptable at 0x100025f0. Too many branches
                // WARNING: Treating indirect jump as call
    (*param_1)();
    return;
  }
  fatal_app_exit_with_message_lookup_and_terminate(param_2);
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates global control pointer PTR_DAT_1050_1000_1050_6066 to 1050:1000.

void * __cdecl16near heap_alloc_safe(long size)
{
  undefined *puVar1;
  undefined2 reg_ax;
  void *pvVar2;
  void *reg_cx;
  int reg_dx;
  int reg_bx;
  long size_00;
  
  puVar1 = PTR_DAT_1050_1000_1050_6066;
  LOCK();
  PTR_DAT_1050_1000_1050_6066 = (undefined *)&DAT_1050_1000;
  UNLOCK();
  size_00 = CONCAT22(puVar1,reg_ax);
  pvVar2 = heap_alloc_bytes(size_00);
  PTR_DAT_1050_1000_1050_6066 = (undefined *)((ulong)size_00 >> 0x10);
  if (reg_dx != 0x0 || pvVar2 != NULL)
  {
    return pvVar2;
  }
  fatal_app_exit_with_message_lookup_and_terminate(reg_bx);
  return reg_cx;
}



void __cdecl16far global_free_wrapper_far_3cd8(void *param_1)
{
  global_free_wrapper_far(param_1);
  return;
}



// A far wrapper around GlobalFree16. Releases the specified global memory block.

void __cdecl16far global_free_wrapper_far(void *ptr)
{
  HGLOBAL16 in_stack_00000006;
  
  if (false)
  {
    in_stack_00000006 = handle_table_remove_entry_internal(in_stack_00000006);
    if (in_stack_00000006 == 0x0)
    {
      return;
    }
    GlobalUnlock16(in_stack_00000006);
  }
  GlobalFree16(in_stack_00000006);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

long __stdcall16far heap_global_sweep_all_pools(void)
{
  long lVar1;
  
  if (_p_GlobalResourceManager != 0x0)
  {
    Global_Resource_Manager_Release_Object_67C_7fd6(_p_GlobalResourceManager);
  }
  heap_validate_and_sweep(_p_Pool_Type1_Event);
  heap_validate_and_sweep(_p_Pool_Type2_Component);
  heap_validate_and_sweep(_p_Pool_Type3_Sprite);
  heap_validate_and_sweep(_p_Pool_Type4_Timer);
  heap_validate_and_sweep(_p_Pool_Type5_Entity);
  lVar1 = heap_validate_and_sweep(_g_AllocatedBlock_Offset);
  return lVar1;
}



// Targeted Scan Finding: Vtable
// Initializes base object vtable to 1008:389A.

void * __stdcall16far UI_Base_Object_dtor_cleanup(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
                // (final) Applying prototype via set-function-prototype: void
                // __cdecl16near inferred_helper_377e_lowconf(void);
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:380A and then 1008:389A during object destruction.

void * __stdcall16far UI_Generic_Control_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x380a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts vtable to 1008:48DE and then 1008:389A during object destruction.
// Performs indirect call through [this + 10] at offset 0.

void __stdcall16far Bitmap_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
                // Will apply prototype: void __cdecl16near
                // inferred_validator_41bc_medconf(void);
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x6));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Targeted Scan Finding: Vtable
// Reverts File_Object vtable sequence: 1008:4C4C -> 1008:389A.
// Performs indirect call through [this + 4] during cleanup.

void __stdcall16far File_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x4c4c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x8));
  if (*(long *)((int)this + 0x1a) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  }
  if (*(int *)((int)this + 0xc) != -0x1)
  {
    _lclose16(*(HFILE16 *)((int)this + 0xc));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Targeted Scan Finding: Vtable
// Reverts Palette_Object vtable to 1008:4F1C and then 1008:389A during destruction.

void __stdcall16far Palette_Object_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x4f1c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xe));
  if (*(int *)((int)this + 0x12) != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Copies the entire color table from another Palette_Object. Resizes the destination
// buffer if necessary to match the source entry count.

int __stdcall16far Palette_Object_Copy_From_Other_Logic(void *this,void *other)
{
  void *pvVar1;
  undefined2 reg_dx;
  undefined2 uVar2;
  undefined4 in_stack_00000008;
  undefined2 in_stack_0000fff6;
  
  uVar2 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  if (*(int *)((int)this + 0x12) != 0x0)
  {
    *(undefined2 *)((int)this + 0xc) = *(undefined2 *)((int)in_stack_00000008 + 0xc);
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
    *(undefined4 *)((int)this + 0x4) = 0x0;
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,*(int *)((int)this + 0xc) << 0x2
                                     ));
    *(undefined2 *)((int)this + 0x4) = pvVar1;
    *(undefined2 *)((int)this + 0x6) = reg_dx;
  }
  if (*(int *)((int)this + 0xc) != 0x100)
  {
    return 0x0;
  }
  memcpy_far_words((void *)(void *)*(undefined4 *)((int)this + 0x4),
                   (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
                   (int)*(undefined4 *)((int)in_stack_00000008 + 0x4));
  return 0x1;
}



// Frees the internal memory buffer associated with a sprite or graphical object if it
// exists.

void __stdcall16far Sprite_Object_free_internal_buffer(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x10) != 0x0)
  {
    heap_free_core((void *)(void *)*(undefined4 *)((int)this + 0x10));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// Primary entry point performing extensive global pointer initialization in segment
// 1050:
// - PTR_DAT_1050_03a0, 029c, 4fb8, 68a2, 5744, 5768 (specialized pools)
// - PTR_DAT_1050_038c through 0392 (parameters and cached strings)
// Instantiates Simulator and performs indirect calls through its vtable.
//
// Win16 vtable note: each entry is a 4-byte far code ptr (offset:segment).
// In flat model only the near (offset) half is significant.  The helper macro
// below reads slot N's near ptr via index N*2 into the uint16_t* vtable.

/* Read near (offset) half of Win16 vtable slot N from object `obj`. */
#define VTBL_NEAR(obj, slot) \
    ((code *)(uintptr_t)((uint16_t *)*(void **)(obj))[(slot) * 2])

int __stdcall16far
win16_main_init_and_run_loop
          (undefined *param_1,char *param_2,undefined2 param_3,undefined *param_4,
          undefined *param_5)
{
  void *pvVar3;
  char *pcVar4;
  void *sim;    /* Simulator object: allocate 0xC bytes then call ctor */
  int  iVar6;

  /* hPrevInstance non-NULL: already running — Win16 single-instance guard */
  if (param_4 != NULL)
  {
    return 0x0;
  }

  dos_get_system_time_to_internal_struct_far(NULL);
  srand_seed_internal_far(0); /* Win16 seed was AX from time call; treat as 0 in flat */

  heap_system_increment_refcount();
  _p_Pool_Type1_Event     = heap_create_pool(0x0, 0x32,  0x0, 0x12);
  _p_Pool_Type2_Component = heap_create_pool(0x0, 0x64,  0x0, 0x0c);
  _p_Pool_Type3_Sprite    = heap_create_pool(0x0, 0x64,  0x0, 0x10);
  _p_Pool_Type4_Timer     = heap_create_pool(0x0, 0x64,  0x0, 0x0e);
  _p_Pool_Type5_Entity    = heap_create_pool(0x0, 0x1f4, 0x0, 0x42);
  p_Pool_Type6_Node       = heap_create_pool(0x0, 0x32,  0x0, 0x06);

  g_hInstance     = param_5;  /* g_TaskDI: hInstance for RegisterClass callers */
  g_hPrevInstance = param_4;  /* g_TaskSI: hPrevInstance (NULL = first run) */
  g_TaskDX_Param  = param_1;  /* g_TaskDX backup */

  pcVar4       = strdup_allocate(param_2);
  g_CmdLineDup = pcVar4;

  pvVar3 = allocate_memory(0xc);
  sim    = (pvVar3 != NULL) ? Simulator_ctor(pvVar3) : NULL;

  if (sim != NULL && g_CmdLineDup != NULL)
  {
    /* vtable[1]: Simulator virtual init/parse-cmdline.
     * Win16 args: (int msg, void *sim_near, int sim_seg, char *cmd_near, int cmd_seg)
     * Flat: segment halves (sim_seg, cmd_seg) -> 0. */
    (VTBL_NEAR(sim, 1))(0x1000, sim, 0, g_CmdLineDup, 0);
  }

  if (sim != NULL)
  {
    /* vtable[2]: Simulator virtual start/run — no explicit args in decompiled output,
     * likely receives implicit this via register (flat: the near call handles it). */
    (VTBL_NEAR(sim, 2))();
  }

  iVar6 = win16_main_message_loop_logic();

  if (sim != NULL)
  {
    /* vtable[0]: Simulator scalar-deleting destructor.
     * Win16: (int msg, void *near, int seg, int delete_flag, void *near2, int seg2)
     * Flat: seg args -> 0; delete_flag=1 triggers heap_free after dtor. */
    (VTBL_NEAR(sim, 0))(0x1000, sim, 0, 0x1, sim, 0);
  }

  heap_destroy_pool((void *)_p_Pool_Type1_Event);
  heap_destroy_pool((void *)_p_Pool_Type2_Component);
  heap_destroy_pool((void *)_p_Pool_Type3_Sprite);
  heap_destroy_pool((void *)_p_Pool_Type4_Timer);
  heap_destroy_pool((void *)_p_Pool_Type5_Entity);
  return iVar6;
}

#undef VTBL_NEAR



u16 * __stdcall16far UI_Window_dtor_Alt3_Scalar_Deleting(u16 *param_1,byte param_2)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)param_1 >> 0x10);
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    heap_free_descriptor((u16 *)param_1,bucket_index);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Bitmap_Object subclass vtable to 1008:685A.
// References global heap in segment 1050:5f2c to allocate separate metadata and pixel
// buffers.

void * __stdcall16far
Bitmap_Object_Subclass_ctor_with_alloc(void *this,int height,int width)
{
  void *pvVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  undefined2 uVar5;
  int in_stack_0000000a;
  
  pvVar1 = Bitmap_Object_ctor_basic(this);
  *_this = 0x685a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  pvVar4 = heap_alloc_with_flags(0x1,0x28,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x10) = pvVar1;
  *(undefined2 *)((int)this + 0x12) = pvVar4;
  iVar2 = in_stack_0000000a * 0x8 + 0x1f;
  iVar2 = ((int)(iVar2 + (iVar2 >> 0xf & 0x1fU)) >> 0x5) << 0x2;
  *(int *)((int)this + 0x18) = iVar2;
  *(int *)((int)this + 0x1a) = iVar2 >> 0xf;
  lVar3 = (long)iVar2 * (long)width;
  pvVar1 = heap_alloc_with_flags(0x1,lVar3,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x6) = (int)lVar3;
  *(undefined2 *)((int)this + 0x8) = pvVar1;
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)((int)this + 0x6);
  *(undefined2 *)((int)this + 0x16) = pvVar1;
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = 0x28;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x4) = (long)in_stack_0000000a;
  uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  iVar2 = (int)*(undefined4 *)((int)this + 0x10);
  *(int *)(iVar2 + 0x8) = width;
  *(int *)(iVar2 + 0xa) = width >> 0xf;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xc) = 0x1;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xe) = 0x8;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x10) = 0x0;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x14) =
       *(long *)((int)this + 0x18) * (long)width;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x20) = 0x100;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x24) = 0x100;
  return this;
}



// Performs a deep clone of the specialized Bitmap_Object subclass. It allocates a new
// instance and copies both the metadata header and the full pixel buffer.

void * __stdcall16far Bitmap_Object_Subclass_Clone_Logic(void *this)
{
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff2;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    return NULL;
  }
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0x1e));
  uVar2 = reg_dx | (uint)pvVar1;
  if (uVar2 == 0x0)
  {
    pvVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    pvVar1 = Bitmap_Object_Subclass_ctor_with_alloc
                       (pvVar1,reg_dx,
                        *(int *)((int)*(undefined4 *)((int)this + 0x10) + 0x8));
  }
  memcpy_far_words((void *)(void *)*(undefined4 *)((int)pvVar1 + 0x10),
                   (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x10) >> 0x10),
                   (int)*(undefined4 *)((int)this + 0x10));
  HMemCpy((int32_t)(*(long *)((int)*(undefined4 *)((int)pvVar1 + 0x10) + 0x8) *
                   *(long *)((int)this + 0x18)),(void *)*(undefined4 *)((int)this + 0x6)
          ,(void *)*(undefined4 *)((int)pvVar1 + 0x6));
  *(undefined2 *)((int)pvVar1 + 0x1c) = 0x1;
  return pvVar1;
}



// Targeted Scan Finding: Vtable
// Reverts Gameplay_Object vtable sequence during destruction: 1008:8E9A -> 1008:389A.
// Performs indirect call through [this + 4] during cleanup.

void __stdcall16far Gameplay_Object_dtor(void *this)
{
  void *this_00;
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x8e9a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)*(undefined4 *)((int)this + 0x4) + 0x1c) != 0x0)
  {
    if (*(int *)((int)this + 0x6) != 0x0 ||
        (undefined4 *)*(int *)((int)this + 0x4) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
      (*(code *)*puVar1)();
    }
  }
  this_00 = (void *)*(undefined2 *)((int)this + 0x3a);
  if (*(int *)((int)this + 0x3c) != 0x0 || this_00 != NULL)
  {
    Sprite_Object_free_internal_buffer(this_00);
    free_if_not_null(this_00);
  }
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



void * __stdcall16far
Gameplay_Object_dtor_Scalar_Deleting_8e74(void *param_1,u16 param_2,byte param_3)
{
  Gameplay_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes Data_History_Object vtable to 1008:9170 (base 1008:389A).
// Allocates internal 4-byte element buffer.

void * __stdcall16far
Data_History_Object_ctor(void *this,long initial_count,long max_count)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = 0x0;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(long *)((int)this + 0xe) = max_count;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(long *)((int)this + 0x16) = initial_count;
  *(undefined2 *)((int)this + 0x1a) = 0x1;
  *_this = 0x9170;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(ulong *)((int)this + 0xe) < 0x7)
  {
    *(undefined4 *)((int)this + 0xe) = 0x6;
  }
  Data_History_Object_Allocate_Buffer_Logic(this);
  *(undefined4 *)*(undefined4 *)((int)this + 0x6) = 0x0;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Data_History_Object vtable to 1008:9170 and then 1008:389A during destruction.
// Iteratively invokes virtual destructors for contained objects in the buffer.

void __stdcall16far Data_History_Object_dtor(void *this)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  ulong uStack_6;
  
  *_this = 0x9170;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0x1a) != 0x0)
  {
    uStack_6 = 0x0;
    while( true )
    {
      if (*(ulong *)((int)this + 0xa) <= uStack_6) break;
      iVar4 = (int)uStack_6 * 0x4;
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10);
      iVar3 = (int)*(undefined4 *)((int)this + 0x6);
      puVar1 = (undefined4 *)*(int *)(iVar3 + iVar4);
      iVar3 = *(int *)(iVar3 + iVar4 + 0x2);
      if (iVar3 != 0x0 || puVar1 != NULL)
      {
        puVar2 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar2)();
      }
      uStack_6 += 0x1;
    }
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x6));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Sets a 32-bit data point at a specific index in the history buffer. It performs
// bounds checking and triggers a buffer resize if the index exceeds the current
// capacity.

int __stdcall16far
Data_History_Object_Set_Point_At_Index(void *this,long value,long index)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_00000006;
  
  if ((*(ulong *)((int)this + 0xa) <= (ulong)index) ||
     (*(long *)((int)this + 0x6) == 0x0))
  {
    if ((*(uint *)((int)this + 0x14) <= index._2_2_) &&
       ((*(uint *)((int)this + 0x14) < index._2_2_ ||
        (*(uint *)((int)this + 0x12) <= (uint)index))))
    {
      Data_History_Object_Allocate_Buffer_Logic(this);
    }
    if ((*(ulong *)((int)this + 0x12) <= (ulong)index) ||
       (*(long *)((int)this + 0x6) == 0x0))
    {
      return 0x0;
    }
    if ((*(uint *)((int)this + 0xc) <= index._2_2_) &&
       ((*(uint *)((int)this + 0xc) < index._2_2_ ||
        (*(uint *)((int)this + 0xa) <= (uint)index))))
    {
      *(undefined2 *)((int)this + 0xa) = (int)(index + 0x1);
      *(undefined2 *)((int)this + 0xc) = (int)((ulong)(index + 0x1) >> 0x10);
    }
  }
  uVar2 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10);
  iVar1 = (int)*(undefined4 *)((int)this + 0x6);
  *(undefined2 *)(iVar1 + (uint)index * 0x4) = (undefined2)value;
  *(undefined2 *)(iVar1 + (uint)index * 0x4 + 0x2) = value._2_2_;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050:5f2c.
// Performs heap allocation or reallocation for 4-byte history data points.

void __stdcall16far Data_History_Object_Allocate_Buffer_Logic(void *this)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  undefined2 in_stack_00000006;
  void *in_stack_0000ffe8;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    uVar1 = *(uint *)((int)this + 0xe);
    puVar3 = (undefined *)*(undefined2 *)((int)this + 0x10);
  }
  else
  {
    uVar1 = *(uint *)((int)this + 0x12) + *(uint *)((int)this + 0x16);
    puVar3 = (undefined *)
             (*(int *)((int)this + 0x14) + *(int *)((int)this + 0x18) +
             (uint)CARRY2(*(uint *)((int)this + 0x12),*(uint *)((int)this + 0x16)));
  }
  uStack_6 = CONCAT22(puVar3,uVar1);
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks((ulong)(uVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar3 = (undefined *)
             (((int)puVar3 * 0x2 + (uint)CARRY2(uVar1,uVar1)) * 0x2 +
             (uint)CARRY2(uVar1 * 0x2,uVar1 * 0x2));
    pvVar2 = heap_realloc(0x1,(long)CONCAT22((int)*(undefined4 *)((int)this + 0x6),
                                             puVar3),
                          (void *)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10),
                          in_stack_0000ffe8);
  }
  uStack_a = (void *)CONCAT22(puVar3,pvVar2);
  if (puVar3 != NULL || pvVar2 != NULL)
  {
    *(undefined4 *)((int)this + 0x12) = uStack_6;
    *(undefined4 *)((int)this + 0x6) = uStack_a;
  }
  return;
}



u16 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_1008_93c0(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



u16 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1008_9d02(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes specialized manager vtable to 1008:AD92.
// Allocates and constructs two internal tracker objects using
// construct_object_with_vtable (sets vtable to 1008:5BC4).

void * __stdcall16far UI_Specialized_Manager_ctor(void *this,int arg2,int arg3)
{
  astruct_491 *paVar1;
  void *pvVar2;
  uint reg_dx;
  uint uVar3;
  uint uVar4;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,arg2);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0x410) = 0x0;
  *(undefined2 *)((int)this + 0x414) = 0x0;
  *(undefined2 *)((int)this + 0x416) = 0x0;
  *(undefined2 *)((int)this + 0x418) = 0x0;
  *(undefined2 *)((int)this + 0x41a) = 0x0;
  *(undefined2 *)((int)this + 0x41c) = 0x0;
  *(undefined2 *)((int)this + 0x41e) = 0x0;
  *(undefined2 *)CONCAT22(arg2,this) = 0xad92;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = reg_dx | (uint)paVar1;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,reg_dx);
    *(undefined2 *)((int)this + 0xa) = pvVar2;
    *(uint *)((int)this + 0xc) = uVar3;
  }
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar4 = uVar3 | (uint)paVar1;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,uVar3);
  }
  *(undefined2 *)((int)this + 0x410) = pvVar2;
  *(uint *)((int)this + 0x412) = uVar4;
  return this;
}



u16 * __stdcall16far
Descriptor_Object_dtor_Scalar_Deleting_ad0c(u16 *param_1,byte param_2)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)param_1 >> 0x10);
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    heap_free_descriptor((u16 *)param_1,bucket_index);
  }
  return param_1;
}



u16 * __stdcall16far Base_Object_dtor_Scalar_Deleting_ad38(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



void * __stdcall16far
Turn_Manager_dtor_Scalar_Deleting_ad64(void *param_1,u16 param_2,byte param_3)
{
  Turn_Manager_ctor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}
