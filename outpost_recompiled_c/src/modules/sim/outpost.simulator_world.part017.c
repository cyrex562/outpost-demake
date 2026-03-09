/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 17/56
 * Original lines (combined): 47116-54300
 * Boundaries: top-level declarations/definitions only
 */




// Maps a wide variety of resource and entity identifiers to one of nine internal UI
// category codes (1-9). Used for categorizing items in lists and reports.

int __stdcall16far UI_Map_Resource_ID_to_Category_Logic(int arg1,int arg2,int res_id)
{
  undefined2 uStack_6;
  
  if (false)
  {
switchD_1018_444f_caseD_10:
    uStack_6 = 0x1;
  }
  else
  {
    switch(res_id)
    {
    case 0xf:
    case 0x35:
    case 0x36:
      uStack_6 = 0x7;
      break;
    default:
      goto switchD_1018_444f_caseD_10;
    case 0x11:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x2d:
    case 0x2e:
    case 0x6e:
      uStack_6 = 0x9;
      break;
    case 0x12:
    case 0x31:
    case 0x32:
    case 0x52:
    case 0x53:
    case 0x54:
    case 0x55:
    case 0x56:
    case 0x5a:
    case 0x5b:
    case 0x5c:
    case 0x5d:
    case 0x5e:
    case 0x5f:
      uStack_6 = 0x4;
      break;
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x28:
    case 0x29:
    case 0x2c:
    case 0x2f:
    case 0x30:
    case 0x68:
    case 0x69:
      uStack_6 = 0x5;
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x33:
    case 0x34:
      uStack_6 = 0x6;
      break;
    case 0x22:
    case 0x23:
    case 0x24:
      uStack_6 = 0x8;
      break;
    case 0x25:
    case 0x26:
    case 0x27:
      uStack_6 = 0x2;
      break;
    case 0x38:
    case 0x39:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x57:
    case 0x58:
    case 0x59:
    case 0x66:
    case 0x67:
    case 0x6c:
    case 0x6d:
      uStack_6 = 0x3;
    }
  }
  return uStack_6;
}



// Maps specific simulation state values (7, 8, 12, 13) to UI-specific constants (9, 10,
// 25, 3).

int __stdcall16far UI_Map_Sim_Value_to_Constant_Logic(int arg1,int arg2,int sim_value)
{
  undefined2 uStack_6;
  
  if (sim_value == 0x7)
  {
    uStack_6 = 0x9;
  }
  else if (sim_value == 0x8)
  {
    uStack_6 = 0xa;
  }
  else if (sim_value == 0xc)
  {
    uStack_6 = 0x19;
  }
  else if (sim_value == 0xd)
  {
    uStack_6 = 0x3;
  }
  else
  {
    uStack_6 = 0x8;
  }
  return uStack_6;
}



// Maps internal ship/fleet type identifiers to UI display constants (1-4).

int __stdcall16far UI_Map_Ship_Type_to_Constant_Logic(int arg1,int arg2,int ship_type)
{
  undefined2 uStack_6;
  
  if (false)
  {
switchD_1018_45a3_caseD_17:
    uStack_6 = 0x1;
  }
  else
  {
    switch(ship_type)
    {
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
      uStack_6 = 0x2;
      break;
    case 0x16:
    case 0x1e:
      uStack_6 = 0x3;
      break;
    default:
      goto switchD_1018_45a3_caseD_17;
    case 0x1d:
    case 0x21:
      uStack_6 = 0x4;
    }
  }
  return uStack_6;
}



// Maps specific research-related simulation values (3, 4) to UI constants (0x16, 0x17).
// Defaults to 0x14.

int __stdcall16far
UI_Map_Research_Value_to_Constant_Logic(int arg1,int arg2,int res_value)
{
  undefined2 uStack_6;
  
  if (res_value == 0x3)
  {
    uStack_6 = 0x16;
  }
  else if (res_value == 0x4)
  {
    uStack_6 = 0x17;
  }
  else
  {
    uStack_6 = 0x14;
  }
  return uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Build Site internal object. Initializes base object, vtable, and
// sets a global reference.

void __stdcall16far Build_Site_Object_ctor(long this_ref,int arg2,int arg3)
{
  Build_Site_Object_Base_ctor(this_ref,arg2);
  *(undefined2 *)this_ref = 0x4b06;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  Build_Site_Object_Initialize_Vtable_and_Resource(this_ref,0x9a);
  _p_GlobalPaletteObject = this_ref;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Saves current Build Site object state back into the resource managed structures.

void __stdcall16far Build_Site_Save_To_Resources_Internal(long context,long data_ref)
{
  void *pvVar1;
  
  *(undefined4 *)((int)context + 0xa) = *(undefined4 *)data_ref;
  *(undefined4 *)((int)context + 0xe) = *(undefined4 *)((int)data_ref + 0x4);
  pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  UI_Component_Set_Indexed_Struct_at_Offset_22_Logic
            ((void *)pvVar1,(long *)((ulong)pvVar1 >> 0x10),0x0);
  return;
}



// Base constructor for Build Site internal object. Initializes memory offsets and sets
// a descriptive string pointer ("SCInternalPutBldg site").

void * __stdcall16far Build_Site_Object_Base_ctor(long this_ref,int id)
{
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined4 *)((int)(void *)this_ref + 0xa) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x12) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x14) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x16) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x18) = 0x1;
  *(undefined2 *)((int)(void *)this_ref + 0x1a) = 0x0;
  *(char **)this_ref = (char *)s_SCInternalPutBldg_site_0x_08lx__b_1050_5046 + 0x12;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  return (void *)this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the Build Site object's virtual function table and links it with a
// resource ID.

void __stdcall16far
Build_Site_Object_Initialize_Vtable_and_Resource(long context,int res_id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  puVar1 = (undefined2 *)((int)*(undefined4 *)context + 0x10);
  (*(code *)*puVar1)(0x1010,context,res_id,*(undefined2 *)((int)lVar3 + 0xc),
                     *(undefined2 *)((int)lVar3 + 0xa));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI Sprite Component. Initializes its vtable, loads relevant
// resources (ID 0x27 and 0x48), creates an internal Sprite object, and captures its
// initial graphics from a bitmap.

long __stdcall16far
UI_Sprite_Component_ctor_init_logic(long this_ref,int segment,int id)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  void *pvVar4;
  void *pvVar5;
  undefined2 uVar6;
  int *piVar7;
  int *y;
  uint uVar8;
  undefined4 *puVar9;
  void *unaff_SS;
  long lVar10;
  undefined2 uVar11;
  undefined1 local_c [0x6];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,segment);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined4 *)((int)this_ref + 0x18) = 0x0;
  zero_init_struct_6bytes((void *)((int)this_ref + 0x1c));
  *(undefined ***)this_ref = (undefined **)&PTR_DAT_1050_0000_1050_5e1a;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uStack_4 = (undefined2)((ulong)lVar10 >> 0x10);
  uStack_6 = (undefined2)lVar10;
  zero_init_struct_6bytes(local_c);
  copy_struct_6bytes(local_c,unaff_SS);
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x27);
  uVar6 = (undefined2)((ulong)lVar10 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar10;
  *(undefined2 *)((int)this_ref + 0x16) = uVar6;
  uVar11 = 0x0;
  uVar3 = *(undefined2 *)((int)this_ref + 0x14);
  puVar2 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x14) + 0x4);
  lVar10 = this_ref;
  (*(code *)*puVar2)();
  *(undefined4 *)((int)this_ref + 0x6) = *(undefined4 *)((int)this_ref + 0x14);
  puVar1 = (undefined4 *)
           *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa);
  puVar9 = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar3 = (*(code *)*puVar2)(0x1010,puVar9,(int)((ulong)puVar1 >> 0x10),
                             CONCAT22(this_ref._2_2_,(int)this_ref + 0xa),uVar3,uVar6,
                             uVar11,lVar10);
  *(undefined2 *)((int)this_ref + 0x12) = uVar3;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  copy_struct_6bytes((void *)((int)this_ref + 0x1c),this_ref._2_2_);
  piVar7 = this_ref._2_2_;
  add_3int_vectors((int *)((int)this_ref + 0x1c),this_ref._2_2_);
  pvVar4 = UI_Manager_Get_Resource_Ptr_at_Index
                     ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  pvVar4 = get_with_lazy_init(pvVar4);
  y = piVar7;
  pvVar5 = allocate_memory(CONCAT22(puVar9,0x14));
  uVar8 = (uint)y | (uint)pvVar5;
  if (uVar8 == 0x0)
  {
    *(undefined4 *)((int)this_ref + 0x18) = 0x0;
  }
  else
  {
    pvVar5 = Sprite_Object_init_logic
                       (pvVar5,(int)y,(int)*(undefined4 *)((int)pvVar4 + 0x8),
                        (void *)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10),
                        (int)*(undefined4 *)((int)pvVar4 + 0x4));
    *(undefined2 *)((int)this_ref + 0x18) = pvVar5;
    *(uint *)((int)this_ref + 0x1a) = uVar8;
  }
  Sprite_Object_Capture_From_Bitmap
            ((void *)(void *)*(undefined4 *)((int)this_ref + 0x18));
  *(undefined2 *)((int)this_ref + 0x22) = *(undefined2 *)((int)this_ref + 0x1c);
  *(undefined2 *)((int)this_ref + 0x24) = *(undefined2 *)((int)this_ref + 0x1e);
  *(int *)((int)this_ref + 0x26) =
       *(int *)((int)pvVar4 + 0x4) + *(int *)((int)this_ref + 0x22) + 0x1;
  *(int *)((int)this_ref + 0x28) =
       *(int *)((int)pvVar4 + 0x8) + *(int *)((int)this_ref + 0x24) + 0x1;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Initialize_Slider_and_Entity_Labels_5e9a(void *param_1)
{
  undefined4 *puVar1;
  void *pvVar2;
  int16_t iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 unaff_SS;
  long lVar6;
  void *pvVar7;
  void *this_ptr;
  undefined2 uVar8;
  undefined2 in_stack_0000ffb2;
  u16 local_36;
  u16 local_34;
  u16 local_32;
  u32 local_30;
  u32 local_2c;
  u16 local_28;
  u16 local_26;
  u16 local_16;
  u16 local_14;
  u16 local_12;
  u16 local_10;
  undefined1 local_e [0x6];
  u16 local_8;
  u32 local_6;
  
  this_ptr = (void *)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  iVar4 = (int)((ulong)lVar6 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar6;
  *(int *)((int)this_ptr + 0x90) = iVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffb2,0x12));
  if (iVar4 == 0x0 && pvVar2 == NULL)
  {
    *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  }
  else
  {
    lVar6 = UI_Slider_Component_ctor_init_resource_39
                      ((long)CONCAT22(iVar4,pvVar2),(long)param_1,
                       *(int *)((int)this_ptr + 0x6));
    *(undefined2 *)((int)this_ptr + 0x92) = (int)lVar6;
    *(undefined2 *)((int)this_ptr + 0x94) = (int)((ulong)lVar6 >> 0x10);
  }
  local_6 = CONCAT22((int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (int)*(undefined4 *)((int)this_ptr + 0x8e) + 0xa);
  GetClientRect16((undefined1 *)CONCAT22(unaff_SS,local_e),
                  *(HWND16 *)((int)this_ptr + 0x6));
  iVar3 = GetSystemMetrics16(0x4);
  *(int *)((int)local_6 + 0x6) = iVar3 + local_8;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  local_14 = (u16)((ulong)lVar6 >> 0x10);
  local_16 = (u16)lVar6;
  local_10 = *(u16 *)(local_16 + 0xa);
  local_12 = *(u16 *)(local_16 + 0xc);
  uVar5 = (undefined2)(local_6 >> 0x10);
  *(int *)((int)local_6 + 0x2) = (int)(local_12 - *(int *)((int)local_6 + 0x6)) / 0x2;
  *(int *)local_6 = (int)local_10 / 0x2 + 0x3;
  Simulator_World_Iterator_ctor_init_dc52
            ((u16 *)CONCAT22(unaff_SS,&local_28),0x1,0x0,0x100);
  while( true )
  {
    pvVar7 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                       ((u16 *)CONCAT22(unaff_SS,&local_28));
    iVar4 = (int)((ulong)pvVar7 >> 0x10);
    if (iVar4 == 0x0 && (int)pvVar7 == 0x0) break;
    puVar1 = (undefined4 *)*(long *)((int)pvVar7 + 0x10);
    if (puVar1 != NULL)
    {
      strcat_append((char *)CONCAT22(uVar8,(char *)((int)this_ptr + 0x10)),
                    (char *)*puVar1);
    }
  }
  uVar5 = (undefined2)(local_6 >> 0x10);
  iVar4 = (int)local_6;
  SetWindowPos16(0x44,*(int16_t *)(iVar4 + 0x6),*(int16_t *)(iVar4 + 0x4),
                 *(int16_t *)(iVar4 + 0x2),*(int16_t *)local_6,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Cleans up a UI component by calling the destructor of its internal bitmap object and
// releasing the associated resource ID.

void __stdcall16far
UI_Component_Release_Internal_Bitmap_and_Resource_Logic(long context)
{
  undefined2 *puVar1;
  astruct_423 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  uVar2 = (astruct_423 *)context;
  if (uVar2->field144_0x94 != 0x0 || uVar2->field143_0x92 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar2->field143_0x92;
    (*(code *)*puVar1)();
  }
  (&uVar2->field143_0x92)[0x0] = NULL;
  (&uVar2->field143_0x92)[0x1] = NULL;
  Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar2->field142_0x8e);
  uVar2->field142_0x8e = 0x0;
  return;
}



// Retrieves the palette from an internal bitmap object (offset 0x92) via a virtual
// function call at offset +8. Used to synchronize UI colors with loaded assets.

int __stdcall16far
UI_Component_Update_Palette_from_Internal_Bitmap_vcall_8(long context)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)context + 0x92) + 0x8);
  (*(code *)*puVar1)();
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Planet Summary Panel. Initializes base UI object, sets vtable to
// 0x6880, and loads Resource ID 0xB (Planet data summary).

long __stdcall16far
UI_Planet_Summary_Panel_ctor_init_logic_ResB
          (astruct_421 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_421 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(byte *)CONCAT22(param_2,(byte *)&g_AllocFlags),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_421 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0x6880;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0x691c;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xb);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return (long)param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal child component of the Planet Summary View. Initializes
// with Resource ID 0xB and sets vtable to 0x6A02.

long __stdcall16far
UI_Planet_Summary_Child_Component_ctor_init_logic_ResB(long this_ref,int arg2,int arg3)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,arg2);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0x6a02;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xb);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar3;
  *(undefined2 *)((int)this_ref + 0x16) = uVar2;
  *(undefined2 *)((int)this_ref + 0x6) = *(undefined2 *)((int)this_ref + 0x14);
  *(undefined2 *)((int)this_ref + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa) +
           0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)((int)this_ref + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  return this_ref;
}



// Internal destructor for the Planet Summary child component. Releases internal
// resource IDs and performs cleanup.

void __stdcall16far
UI_Planet_Summary_Child_Component_dtor_Internal_Cleanup_logic(long this_ref)
{
  astruct_417 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_417 *)this_ref;
  *(undefined2 *)this_ref = 0x6a02;
  uVar1->field2_0x2 = 0x1018;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the Planet Summary child component.

long __stdcall16far
UI_Planet_Summary_Child_Component_dtor_Scalar_Deleting(long this_ref,byte flags)
{
  UI_Planet_Summary_Child_Component_dtor_Internal_Cleanup_logic(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates movie centering, hides the cursor, plays a movie resource using MCI, and
// restores the cursor. Triggers cleanup after playback.

void __stdcall16far
UI_Component_Play_Fullscreen_Movie_and_Clean_Logic_Internal(long context)
{
  int iVar1;
  int iVar2;
  int16_t iVar3;
  char *filename;
  int device_id;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  device_id = (int)((ulong)lVar6 >> 0x10);
  iVar1 = *(int *)((int)lVar6 + 0xa);
  iVar2 = *(int *)((int)lVar6 + 0xc);
  uVar5 = (undefined2)((ulong)context >> 0x10);
  iVar4 = (int)context;
  if (0x1 < iVar1 - *(int *)(iVar4 + 0xe6))
  {
    device_id = iVar1 >> 0xf;
    *(int *)(iVar4 + 0xe2) = iVar1 / 0x2 - (*(int *)(iVar4 + 0xe6) + 0x1) / 0x2;
  }
  if (0x1 < iVar2 - *(int *)(iVar4 + 0xe8))
  {
    device_id = iVar2 >> 0xf;
    *(int *)(iVar4 + 0xe4) = iVar2 / 0x2 - (*(int *)(iVar4 + 0xe8) + 0x1) / 0x2;
  }
  iVar3 = ShowCursor16(0x0);
  if (*(int *)(iVar4 + 0xee) != 0x0)
  {
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    *(int16_t *)(iVar4 + 0xf0) = iVar3;
  }
  filename = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
  media_mci_play_file_logic(filename,device_id);
  ShowCursor16(0x1);
  UI_Component_Finalize_and_Signal_Complete_Logic_Internal(context);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Base constructor for UI Build Items. Initializes transaction state, loads/duplicates
// string resources, and sets up viewport dimensions from Resource 0x48.

long __stdcall16far
UI_Build_Item_Base_ctor
          (astruct_415 *param_1,uint param_2,uint param_3,undefined2 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)
{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  astruct_415 *uVar5;
  int value;
  long lVar4;
  
  pvVar3 = UI_Transaction_Item_Type8_ctor_init
                     (param_1,param_4,param_5,param_6,(int)param_7,
                      (int)((ulong)param_7 >> 0x10),(int)param_8,
                      (int)((ulong)param_8 >> 0x10));
  value = (int)((ulong)param_1 >> 0x10);
  uVar5 = (astruct_415 *)param_1;
  uVar5->field245_0xf6 = 0x0;
  uVar5->field246_0xf8 = 0x0;
  uVar5->field247_0xfa = 0x0;
  uVar5->field248_0xfc = 0x0;
  uVar5->field249_0xfe = 0x2;
  (&uVar5->field258_0x108)[0x0] = NULL;
  (&uVar5->field258_0x108)[0x1] = NULL;
  uVar5->field260_0x10c = 0x0;
  uVar5->field261_0x10e = 0x1e0190;
  uVar5->field262_0x112 = 0x0;
  *(undefined2 *)param_1 = 0xc8bc;
  uVar5->field2_0x2 = 0x1018;
  memset_far(&uVar5->field_0x100,value,0x0);
  if ((param_3 == 0x0) || (param_2 != 0x0))
  {
    if ((param_2 & param_3) == 0x0) goto LAB_1018_c4bb;
    piVar2 = (int *)res_concatenate_strings_by_id(param_3,param_2,0x0);
  }
  else
  {
    piVar2 = (int *)Resource_Manager_LoadString_and_Duplicate
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),param_3);
  }
  uVar5->field258_0x108 = piVar2;
  uVar5->field259_0x10a = (u16)pvVar3;
LAB_1018_c4bb:
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  piVar2 = (int *)((ulong)lVar4 >> 0x10);
  iVar1 = (int)lVar4;
  uVar5->field245_0xf6 = *(u16 *)(iVar1 + 0xa);
  uVar5->field246_0xf8 = *(u16 *)(iVar1 + 0xc);
  unpack_word_pair((void *)(iVar1 + 0xe),piVar2,(int *)&uVar5->field248_0xfc);
  return (long)param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex factory for Gameplay Objects. Handles logic for planetary vs non-planetary
// types, resource management, and state-based initialization.

long __stdcall16far
Gameplay_Object_Factory_Complex_Resolver(long context,long entity_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  long lVar6;
  void *this_ptr;
  undefined4 *puVar7;
  undefined4 uVar8;
  u8 *puStack000c;
  char cStack000f;
  undefined4 *puVar9;
  undefined2 uVar10;
  u8 *index;
  undefined2 in_stack_0000ffd0;
  undefined4 uStack_20;
  u8 *puStack_14;
  int iStack_c;
  void *pvStack_6;
  void *pvStack_4;
  
  pvStack_6 = NULL;
  pvStack_4 = NULL;
  uVar10 = (undefined2)((ulong)_puStack000c >> 0x10);
  if (cStack000f == '\0')
  {
    lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    iVar3 = (int)((ulong)lVar6 >> 0x10);
    if (*(int *)((int)lVar6 + 0x1e) == 0x0)
    {
      puStack_14 = puStack000c;
      index = puStack000c;
    }
    else
    {
      if (puStack000c == (u8 *)0x7)
      {
        puStack_14 = (u8 *)0x6;
      }
      else if (puStack000c == (u8 *)0x8)
      {
        puStack_14 = (u8 *)0x7;
      }
      else
      {
        puStack_14 = (u8 *)0x8;
      }
      index = (u8 *)0x6;
    }
    pvVar2 = Resource_Manager_Get_or_Create_Entry_Logic
                       ((void *)_p_GlobalResourceManager,0x0,(int)index);
    if (iVar3 != 0x0 || pvVar2 != NULL)
    {
      iVar5 = iVar3;
      pvStack_6 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x46));
      if (iVar5 == 0x0 && pvStack_6 == NULL)
      {
        pvStack_6 = NULL;
        pvStack_4 = NULL;
      }
      else
      {
        pvStack_4 = Gameplay_Object_ctor
                              (pvStack_6,iVar5,entity_id,puStack_14,pvVar2,iVar3,
                               puStack000c,uVar10);
      }
    }
  }
  else
  {
    this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack000c);
    uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
    puVar7 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
    iVar3 = (int)((ulong)puVar7 >> 0x10);
    puVar9 = (undefined4 *)puVar7;
    if (iVar3 != 0x0 || puVar9 != NULL)
    {
      uVar8 = *(undefined4 *)((int)(void *)this_ptr + 0x2e);
      iStack_c = (int)uVar8;
      if (*(int *)((int)(void *)this_ptr + 0x30) == 0x0 && iStack_c == 0x0)
      {
        uStack_20 = 0x0;
      }
      else
      {
        uStack_20 = *(long *)(iStack_c + 0x200);
      }
      if (*(int *)((int)puVar9 + 0x1e) != 0x0 || *(int *)(puVar9 + 0x7) != 0x0)
      {
        uStack_20 = CONCAT22(*(int *)((int)puVar9 + 0x1e),*(int *)(puVar9 + 0x7));
      }
      puVar1 = (undefined2 *)((int)*puVar7 + 0x14);
      uVar8 = (*(code *)*puVar1)(0x1030,puVar9,iVar3);
      iVar5 = (int)((ulong)uVar8 >> 0x10);
      pvVar2 = Resource_Manager_Get_or_Create_Entry_Logic
                         ((void *)_p_GlobalResourceManager,uStack_20,(int)uVar8);
      iVar3 = iVar5;
      pvStack_6 = allocate_memory(CONCAT22(puVar9,0x46));
      if (iVar3 == 0x0 && pvStack_6 == NULL)
      {
        pvStack_6 = NULL;
        pvStack_4 = NULL;
      }
      else
      {
        pvStack_4 = Gameplay_Object_ctor
                              (pvStack_6,iVar3,entity_id,(int)uVar8,pvVar2,iVar5,
                               puStack000c,uVar10);
      }
      Gameplay_Object_Refresh_Graphic_Logic(pvStack_6);
    }
  }
  return CONCAT22(pvStack_4,pvStack_6);
}



// Scalar deleting destructor for objects using the base vtable at 0x389A.

void * __stdcall16far Base_Object_dtor_Scalar_Deleting_v389a(long this_ref,byte flags)
{
  void *ptr;
  
  ptr = (void *)this_ref;
  *(char **)this_ref = (char *)s_1_1050_389a;
  *(undefined2 *)((int)ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Colony Summary Panel (variant 26). Initializes base UI object,
// sets vtable to 0xE44E, and loads Resource ID 0x26.

long __stdcall16far
UI_Colony_Summary_Panel_ctor_init_logic_Res26_e230
          (astruct_410 *param_1,undefined2 param_2,void *param_3)
{
  uint16_t uVar2;
  astruct_410 *uVar1;
  undefined2 uVar3;
  long lVar4;
  
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(u16 *)CONCAT22(param_2,(u16 *)&p_LastAllocatedBlock),param_3);
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_410 *)param_1;
  uVar1->field233_0xee = 0x0;
  (&uVar1->field234_0xf2)[0x0] = 0x0;
  (&uVar1->field234_0xf2)[0x1] = 0x0;
  *(undefined2 *)param_1 = 0xe44e;
  uVar1->field2_0x2 = 0x1018;
  uVar1->field225_0xe2 = 0xe4ea;
  uVar1->field226_0xe4 = 0x1018;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x26);
  uVar2 = (uint16_t)((ulong)lVar4 >> 0x10);
  uVar1->field234_0xf2 = (uint16_t)lVar4;
  uVar1->field235_0xf4 = uVar2;
  uVar1->field227_0xe6 = uVar1->field234_0xf2;
  uVar1->field228_0xe8 = uVar2;
  return (long)param_1;
}
