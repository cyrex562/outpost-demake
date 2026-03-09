/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 4/56
 * Original lines (combined): 17488-20870
 * Boundaries: top-level declarations/definitions only
 */




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
// Resets vtable to 1008:380A and then 1008:389A during object destruction.

void * __stdcall16far UI_Event_Handler_scalar_dtor_logic_2(void *this,byte flags)
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
// Reverts vtable sequence during destruction: 1008:87C8 -> 1008:389A.

void __stdcall16far MicroSpinControl_dtor_internal_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x87c8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Scalar deleting destructor for the MicroSpinControl class.

void * __stdcall16far MicroSpinControl_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  MicroSpinControl_dtor_internal_logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Gameplay_Object vtable to 1008:8E9A.
// References global resource object in segment 1050 (offset 0382).
// Performs multiple vector initializations (zero_init_struct_6bytes).

void * __stdcall16far
Gameplay_Object_ctor
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
          undefined4 param_5,undefined4 param_6)
{
  long lVar1;
  void *pvVar2;
  undefined2 reg_dx;
  uint type_index;
  uint uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined2 unaff_SI;
  void *w1;
  undefined2 uVar6;
  int *unaff_SS;
  void *pvVar7;
  undefined4 uStack_30;
  undefined4 local_24;
  undefined2 uStack_20;
  void *pvStack_1e;
  undefined2 uStack_1c;
  undefined4 uStack_1a;
  undefined4 uStack_12;
  int iStack_e;
  undefined2 uStack_c;
  int iStack_a;
  undefined2 uStack_8;
  void *pvStack_6;
  undefined2 uStack_4;
  
  w1 = (void *)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  *(undefined4 *)(puVar4 + 0x2) = param_5;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  puVar4[0x6] = param_3;
  puVar4[0x7] = param_2;
  puVar4[0x8] = 0x0;
  puVar4[0x9] = 0x0;
  zero_init_struct_6bytes(puVar4 + 0xe);
  zero_init_struct_6bytes(puVar4 + 0x11);
  zero_init_struct_6bytes(puVar4 + 0x14);
  puVar4[0x17] = param_4;
  puVar4[0x18] = 0xffff;
  *(undefined4 *)(puVar4 + 0x1d) = 0x0;
  puVar4[0x1f] = 0x1;
  puVar4[0x20] = 0x1;
  *(undefined4 *)(puVar4 + 0x21) = param_6;
  *param_1 = 0x8e9a;
  puVar4[0x1] = 0x1008;
  if (_PTR_DAT_1050_0000_1050_0382 == 0x0)
  {
    _PTR_DAT_1050_0000_1050_0382 =
         Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2e);
    reg_dx = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_0382 >> 0x10);
  }
  pvStack_6 = get_with_lazy_init((void *)*(void **)(puVar4 + 0x2));
  puVar4[0x9] = 0x2f - *(int *)((int)pvStack_6 + 0x8);
  uVar6 = (undefined2)((ulong)_PTR_DAT_1050_0000_1050_0382 >> 0x10);
  iVar5 = (int)_PTR_DAT_1050_0000_1050_0382;
  uStack_8 = *(undefined2 *)(iVar5 + 0xa);
  iStack_a = *(int *)(iVar5 + 0xc);
  uStack_c = *(undefined2 *)(iVar5 + 0xe);
  iStack_e = *(int *)(iVar5 + 0x10);
  lVar1 = (long)(int)(puVar4[0x6] + puVar4[0x7]) * (long)iStack_e;
  type_index = (uint)((ulong)lVar1 >> 0x10);
  uStack_4 = reg_dx;
  pack_3words_reverse(puVar4 + 0xe,(int)w1,0x0,(int)lVar1 + puVar4[0x9] + iStack_a);
  puVar4[0xa] = puVar4[0xe] + 0x20;
  puVar4[0xb] = *(int *)((int)pvStack_6 + 0x8) + puVar4[0xf] + -0x25;
  puVar4[0xc] = puVar4[0xa] + 0x32;
  puVar4[0xd] = puVar4[0xb] + 0x19;
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x6));
  uStack_1a = (void *)CONCAT22(type_index,pvVar2);
  uVar3 = type_index | (uint)pvVar2;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    pvVar2 = Gameplay_SubObject_init_logic(pvVar2,type_index);
    puVar4[0x4] = pvVar2;
    puVar4[0x5] = uVar3;
  }
  iVar5 = Gameplay_SubObject_Check_Field1_NonZero_Logic
                    ((void *)*(void **)(puVar4 + 0x4));
  if (iVar5 == 0x0)
  {
    uStack_1a = *(void **)(puVar4 + 0x4);
    uStack_12 = uStack_1a;
    free_if_not_null((void *)uStack_1a);
    *(undefined4 *)(puVar4 + 0x4) = 0x0;
  }
  else
  {
    pvVar7 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                               (_PTR_DAT_1050_0000_1050_0382,
                                (int *)*(int **)(puVar4 + 0x4));
    uVar6 = (undefined2)((ulong)pvVar7 >> 0x10);
    uStack_12._0_2_ = (void *)pvVar7;
    uStack_12._2_2_ = uVar6;
    Gameplay_SubObject_refresh_from_table_logic((void *)*(void **)(puVar4 + 0x4));
    pvStack_1e = get_with_lazy_init((void *)uStack_12);
    uStack_1c = uVar6;
    UI_Pack_Words_from_Table_3E8E_Logic
              (_PTR_DAT_1050_0000_1050_0382,(int)(puVar4 + 0x14));
    local_24 = *(undefined4 *)(puVar4 + 0xe);
    uStack_20 = puVar4[0x10];
    add_3int_vectors((int *)&local_24,unaff_SS);
    uStack_30 = (int *)CONCAT22(w1,puVar4 + 0x19);
    unpack_word_pair(&local_24,unaff_SS,puVar4 + 0x1a);
    puVar4[0x1b] = *(int *)((int)pvStack_1e + 0x4) + *uStack_30;
    puVar4[0x1c] = *(int *)((int)pvStack_1e + 0x8) + puVar4[0x1a];
    iVar5 = random_int_range(0x2,0x5);
    puVar4[0x1f] = iVar5;
  }
  return w1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References animation resource via segment 1050 (offset 0382).
// Performs transparent blit of animation frames.

long __stdcall16far Gameplay_Object_Update_Animation_Logic(void *this)
{
  int iVar1;
  int *in_stack_00000006;
  int local_a [0x2];
  void *pvStack_6;
  
  if (*(long *)((int)this + 0x8) != 0x0)
  {
    iVar1 = *(int *)((int)this + 0x40);
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 0x1;
    if (iVar1 % *(int *)((int)this + 0x3e) == 0x0)
    {
      *(undefined2 *)((int)this + 0x40) = 0x1;
      pvStack_6 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                                    (_PTR_DAT_1050_0000_1050_0382,
                                     (int *)(int *)*(undefined4 *)((int)this + 0x8));
      unpack_word_pair((void *)((int)this + 0x28),in_stack_00000006,local_a);
      Gameplay_Object_Manage_Background_Cache_Logic
                (this,in_stack_00000006,(void *)pvStack_6);
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)(void *)*(undefined4 *)((int)this + 0x4),
                 (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
                 (void *)((int)this + 0x28));
      return CONCAT22(in_stack_00000006,(int)this + 0x32);
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References graphical resource via segment 1050 (offset 0382).

long __stdcall16far Gameplay_Object_Refresh_Graphic_Logic(void *this)
{
  int *in_stack_00000006;
  int local_a [0x2];
  void *pvStack_6;
  
  if (*(long *)((int)this + 0x8) == 0x0)
  {
    return 0x0;
  }
  pvStack_6 = (void *)UI_Report_Grid_Get_Item_Bitmap_Logic
                                (_PTR_DAT_1050_0000_1050_0382,
                                 (int *)(int *)*(undefined4 *)((int)this + 0x8));
  unpack_word_pair((void *)((int)this + 0x28),in_stack_00000006,local_a);
  Gameplay_Object_Manage_Background_Cache_Logic
            (this,in_stack_00000006,(void *)pvStack_6);
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0x4),
             (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
             (void *)((int)this + 0x28));
  return CONCAT22(in_stack_00000006,(int)this + 0x32);
}



// Draws the gameplay object onto a destination bitmap at an offset from the provided
// coordinates. It captures the background into a new sprite object before blitting,
// allowing for later restoration. This is typically used for transient or offset-based
// rendering within the simulation.

void * __stdcall16far
Gameplay_Object_Draw_With_Offset_Logic(void *this,void *pos,void *dest_bitmap)
{
  void *pvVar1;
  uint reg_dx;
  uint uVar2;
  int unaff_SS;
  int *in_stack_0000000a;
  void *in_stack_0000000c;
  undefined2 in_stack_0000ffec;
  undefined1 local_10 [0x6];
  undefined4 uStack_a;
  void *pvStack_6;
  uint uStack_4;
  
  pvStack_6 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x4));
  uStack_a = NULL;
  uStack_4 = reg_dx;
  pack_3words_alt(local_10,unaff_SS,0x0,*(int *)((int)this + 0x12));
  add_3int_vectors(dest_bitmap,in_stack_0000000a);
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffec,0x14));
  uVar2 = reg_dx | (uint)pvVar1;
  if (uVar2 == 0x0)
  {
    pvVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    pvVar1 = Sprite_Object_init_logic
                       (pvVar1,reg_dx,(int)*(undefined4 *)((int)pvStack_6 + 0x8),
                        (void *)((ulong)*(undefined4 *)((int)pvStack_6 + 0x8) >> 0x10),
                        (int)*(undefined4 *)((int)pvStack_6 + 0x4));
  }
  uStack_a = (void *)CONCAT22(uVar2,pvVar1);
  Sprite_Object_Capture_From_Bitmap(pvVar1);
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)in_stack_0000000c,(void *)((ulong)in_stack_0000000c >> 0x10),
             dest_bitmap);
  return (void *)uStack_a;
}



// Scalar deleting destructor for the Data_History_Object class.

void * __stdcall16far Data_History_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Data_History_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Resource_Tracker_Object vtable to 1008:9412 (base 1008:389A).

void * __stdcall16far
Resource_Tracker_Object_ctor(void *this,long resource_id,void *parent)
{
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000000e;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = _parent;
  *(long *)((int)this + 0x8) = resource_id;
  *(long *)((int)this + 0xc) = resource_id;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0x9412;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 6] vtable offset 4, likely adding a tracker to
// a managed list.

void __stdcall16far
Simulator_Add_Resource_Tracker(void *this,int arg2,long resource_id,void *parent)
{
  undefined2 *puVar1;
  void *pvVar2;
  uint reg_dx;
  undefined2 in_stack_0000fff6;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x12));
  reg_dx |= (uint)pvVar2;
  if (reg_dx == 0x0)
  {
    pvVar2 = NULL;
    reg_dx = 0x0;
  }
  else
  {
    pvVar2 = Resource_Tracker_Object_ctor(pvVar2,resource_id,parent);
  }
  if (reg_dx != 0x0 || pvVar2 != NULL)
  {
    puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0x6) + 0x4);
    (*(code *)*puVar1)(0x1000,(undefined4 *)((int)this + 0x6),arg2,pvVar2,reg_dx);
  }
  return;
}



// Targeted Scan Finding: Vtable
// Performs indirect call through [this + 6] vtable offset 0xC to signal a specific
// resource tracker.

int __stdcall16far
Simulator_Find_and_Signal_Resource_Tracker(void *this,long id1,long id2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined2 in_stack_00000006;
  undefined1 local_c [0x4];
  undefined4 uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  init_8byte_pair_with_long_and_zero
            (local_c,CONCAT22(in_stack_00000006,(int)this + 0x6));
  while( true )
  {
    lVar4 = get_next_list_item(local_c);
    iVar3 = (int)((ulong)lVar4 >> 0x10);
    iVar2 = (int)lVar4;
    if (iVar3 == 0x0 && iVar2 == 0x0) break;
    if ((*(long *)(iVar2 + 0x4) == id2) && (*(long *)(iVar2 + 0x8) == id1))
    {
      iStack_4 = 0x1;
      puVar1 = (undefined2 *)((int)*(undefined4 *)((int)this + 0x6) + 0xc);
      (*(code *)*puVar1)();
      uStack_8 = 0x0;
    }
  }
  return iStack_4;
}



// Targeted Scan Finding: Vtable
// Performs indirect calls through vtable offset 4 of multiple timed entities in a loop.
// Manages 16-bit tick arithmetic (decrementing by 0x37 / 55ms).

void __stdcall16far Simulator_Process_Update_Tick(void *this)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x4) == 0x0)
  {
    *(undefined2 *)((int)this + 0x4) = 0x1;
    init_8byte_pair_with_long_and_zero
              (local_a,CONCAT22(in_stack_00000006,(int)this + 0x6));
    while( true )
    {
      lVar5 = get_next_list_item(local_a);
      iVar3 = (int)((ulong)lVar5 >> 0x10);
      iVar2 = (int)lVar5;
      if (iVar3 == 0x0 && iVar2 == 0x0) break;
      iVar4 = *(int *)(iVar2 + 0xe) - (uint)(*(uint *)(iVar2 + 0xc) < 0x37);
      *(int *)(iVar2 + 0xc) = *(uint *)(iVar2 + 0xc) - 0x37;
      *(int *)(iVar2 + 0xe) = iVar4;
      if ((iVar4 < 0x1) &&
         (((iVar4 < 0x0 || (*(int *)(iVar2 + 0xc) == 0x0)) &&
          (*(int *)(iVar2 + 0x10) == 0x0))))
      {
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x4) + 0x4);
        (*(code *)*puVar1)();
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x8);
      }
    }
    *(undefined2 *)((int)this + 0x4) = 0x0;
  }
  return;
}



void * __stdcall16far
Simulator_Timer_Object_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Simulator_Timer_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable
// Reverts Simulator vtable to 1008:052A during teardown.

void __stdcall16far Simulator_Destructor_Internal_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x52a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)_PTR_DAT_1050_0000_1050_0392);
  _PTR_DAT_1050_0000_1050_0392 = NULL;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Manager vtable to 1008:9FB2 and a sub-vtable at offset 0x1C to
// 1008:9FCA.
// Registers global manager instance at 1050:4230.
// Iteratively loads 12 resource objects using global manager at 1050:14CC.
// Registers itself as a resource tracker via global state at 1050:0388.

void * __stdcall16far UI_Manager_ctor(void *this,void *arg2,int arg3)
{
  void *pvVar1;
  undefined2 reg_dx;
  int iStack_4;
  
  Build_Site_Object_Base_ctor((long)CONCAT22(arg2,this),arg3);
  *(undefined2 *)((int)this + 0x1c) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  zero_init_struct_6bytes((void *)((int)this + 0x52));
  *(undefined2 *)CONCAT22(arg2,this) = 0x9fb2;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = 0x9fca;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = arg2;
  memset_far((void *)((int)this + 0x22),(int)arg2,0x0);
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(arg2,this),0x1c0);
  iStack_4 = 0x0;
  do
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    *(undefined2 *)((int)this + iStack_4 * 0x4 + 0x22) = pvVar1;
    *(undefined2 *)((int)this + iStack_4 * 0x4 + 0x24) = reg_dx;
    iStack_4 += 0x1;
  } while (iStack_4 < 0xc);
  pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)((int)this + 0x22));
  pack_3words_reverse((void *)((int)this + 0x52),(int)arg2,0x0,
                      (0x1e0 - *(int *)((int)pvVar1 + 0x8)) / 0x2 + -0x32);
  if ((void *)CONCAT22(arg2,this) == NULL)
  {
    pvVar1 = NULL;
  }
  else
  {
    pvVar1 = (void *)((int)this + 0x1c);
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),0x50,pvVar1);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Reverts UI_Manager vtables to base states during destruction.
// Unregisters from global tracker list via 1050:0388.
// Iteratively invokes virtual destructors for 12 managed resource sub-objects.

void __stdcall16far UI_Manager_dtor(void *this)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int in_stack_00000006;
  undefined4 uStack_8;
  int iStack_4;
  
  *_this = 0x9fb2;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = 0x9fca;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar3 = 0x0;
      iVar5 = 0x0;
    }
    else
    {
      iVar3 = (int)this + 0x1c;
      iVar5 = in_stack_00000006;
    }
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,0x50,CONCAT22(iVar5,iVar3));
  }
  iStack_4 = 0x0;
  do
  {
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x22);
    iVar5 = *(int *)((int)this + iStack_4 * 0x4 + 0x24);
    if (iVar5 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0xc);
  if (_this == NULL)
  {
    puVar4 = NULL;
    iVar5 = 0x0;
  }
  else
  {
    puVar4 = (undefined2 *)((int)this + 0x1c);
    iVar5 = in_stack_00000006;
  }
  uStack_8 = (undefined2 *)CONCAT22(iVar5,puVar4);
  *uStack_8 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  Build_Site_Object_dtor_Internal(_this);
  return;
}



// Retrieves a 32-bit resource pointer from the UI Manager's internal table using the
// index stored at offset 0x20.

void * __stdcall16far UI_Manager_Get_Resource_Ptr_at_Index(void *this)
{
  undefined2 in_stack_00000006;
  
  return (void *)*(undefined2 *)((int)this + *(int *)((int)this + 0x20) * 0x4 + 0x22);
}



// Increments the internal resource index for the UI Manager, wrapping back to 0 after
// reaching 11 (0xB).

void __stdcall16far UI_Manager_Increment_Resource_Index(void *this)
{
  undefined2 in_stack_00000006;
  
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 0x1;
  if (0xb < *(int *)((int)this + 0x20))
  {
    *(undefined2 *)((int)this + 0x20) = 0x0;
  }
  return;
}



// Targeted Scan Finding: Vtable
// Initializes Turn_Manager vtable to 1008:AD92.
// Performs indirect calls through vtable index 0 of two internal sub-objects at offsets
// 10 and 0x410.

void __stdcall16far Turn_Manager_ctor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xad92;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x412) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x410) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x410);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}
