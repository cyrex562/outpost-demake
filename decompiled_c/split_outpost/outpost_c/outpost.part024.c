/*
 * Source: outpost.c
 * Chunk: 24/117
 * Original lines: 26532-27654
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool __stdcall16far
Simulator_Validate_Entity_Type_eeac(u16 param_1,u16 param_2,u32 param_3)
{
  int id;
  char cVar1;
  undefined1 uVar3;
  long lVar4;
  u32 local_a;
  u16 local_6;
  u16 local_4;
  uint uVar2;
  
  uVar2 = *(uint *)((int)param_3 + 0x12);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  id = (int)lVar4;
  if (uVar2 == 0x7d)
  {
    Simulator_Validate_ID_8000001_Logic(id);
    if (uVar2 != 0x0)
    {
      return false;
    }
    Simulator_Validate_ID_8000001_Logic(id);
    if (uVar2 != 0x0)
    {
      return false;
    }
    uVar2 = 0x0;
  }
  else if (uVar2 < 0x7e)
  {
    cVar1 = (char)uVar2;
    uVar3 = (undefined1)(uVar2 >> 0x8);
    uVar2 = CONCAT11(uVar3,cVar1 + -0x73);
    if (((char)(cVar1 + -0x73) != '\0') &&
       (uVar2 = CONCAT11(uVar3,cVar1 + -0x77), (char)(cVar1 + -0x77) != '\0'))
    {
      uVar2 = CONCAT11(uVar3,cVar1 + -0x79);
    }
  }
  Simulator_Validate_ID_8000001_Logic(id);
  return uVar2 == 0x0;
}



// Retrieves a 16-bit value from a specific offset within a nested sub-component.

int __stdcall16far get_u16_from_offset_16_plus_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x2);
}



// Scalar deleting destructor for the UI_Subclass_EFC4 class.

void * __stdcall16far UI_Subclass_EFC4_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Subclass_EFC4_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
UI_Subclass_EF9C_dtor_Scalar_Deleting_ef76(void *param_1,u16 param_2,byte param_3)
{
  UI_Subclass_EF9C_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Game_Settings_Manager vtable to 1010:02C8.
// References global resource manager at 1050:0ED0 to retrieve resource 0x48.
// Unpacks configuration data using unpack_word_pair.

void * __stdcall16far Game_Settings_Manager_ctor(void *this,int segment,int id)
{
  long lVar1;
  int *out2;
  
                // Segment:    3
                // Offset:     00015420
                // Length:     ee9f
                // Min Alloc:  ee9f
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x2c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  out2 = (int *)((int)this + 0xc);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  return this;
}



void __stdcall16far Game_Settings_Manager_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x2c8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Base_Object_dtor_2014_Logic(this);
  return;
}



u16 __stdcall16far
UI_Window_Update_Placement_and_Translate_Logic(void *param_1,int param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  int32_t iVar2;
  undefined2 in_DX;
  undefined2 unaff_SS;
  u16 local_22;
  u32 local_20;
  u32 local_1c;
  u16 local_18;
  u32 local_16;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_18 = 0x16;
  local_16 = 0x0;
  local_12 = 0x0;
  local_10 = 0x0;
  local_e = 0x0;
  local_c = 0x0;
  local_a = 0x0;
  local_8 = 0x0;
  local_6 = 0x0;
  local_4 = 0x0;
  GetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  if ((local_10 == 0xffff) || (param_2 != 0x0))
  {
    local_16 = 0x50001;
    iVar2 = GetWindowLong16(0x0,param_3);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x38);
    (*(code *)*puVar1)(0x1538,(undefined4 *)(undefined4 *)*(undefined4 *)(iVar2 + 0xe0),
                       *(undefined2 *)(iVar2 + 0xe2));
    UI_Map_Coordinate_Translation_Logic
              ((void *)param_1,(void *)((ulong)param_1 >> 0x10),(int)&local_18);
    SetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  }
  return 0x0;
}



u16 __stdcall16far
UI_Window_Update_Placement_from_VTable_1C_Logic(u16 param_1,u16 param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  int32_t iVar2;
  u16 *puVar3;
  undefined2 in_DX;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u16 *puVar5;
  u16 local_26;
  u32 local_24;
  u32 local_20;
  u32 local_1c;
  u16 local_18;
  u16 local_16;
  u16 local_14;
  u16 local_12;
  u16 local_10;
  u16 local_e;
  u16 local_c;
  u16 local_a;
  u16 local_8;
  u16 local_6;
  u16 local_4;
  
  local_18 = 0x16;
  local_16 = 0x0;
  local_14 = 0x0;
  local_12 = 0x0;
  local_10 = 0x0;
  local_e = 0x0;
  local_c = 0x0;
  local_a = 0x0;
  local_8 = 0x0;
  local_6 = 0x0;
  local_4 = 0x0;
  GetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  if (local_a == 0xffff)
  {
    iVar2 = GetWindowLong16(0x0,param_3);
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xe0) + 0x1c);
    puVar5 = (u16 *)(*(code *)*puVar1)(0x1538,(undefined4 *)
                                              (undefined4 *)
                                              *(undefined4 *)(iVar2 + 0xe0),
                                       *(undefined2 *)(iVar2 + 0xe2));
    uVar4 = (undefined2)((ulong)puVar5 >> 0x10);
    puVar3 = (u16 *)puVar5;
    local_14 = 0x9;
    local_a = *puVar5;
    local_8 = puVar3[0x1];
    local_6 = puVar3[0x2] + *puVar5;
    local_4 = puVar3[0x1] + puVar3[0x3];
    SetWindowPlacement16((u16 *)CONCAT22(unaff_SS,&local_18),param_3);
  }
  return 0x0;
}



void __stdcall16far win16_EnumChildWindows_Wrapper(HWND16 parent_hwnd)
{
  void *WNDENUMPROC6_func;
  HWND16 in_stack_00000008;
  
  if (p_FreeBlockListHead == NULL)
  {
    WNDENUMPROC6_func =
         MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                            (void *)CONCAT22(in_stack_00000008,(void *)0x1010));
    EnumChildWindows16(NULL,WNDENUMPROC6_func,in_stack_00000008);
    FreeProcInstance16(WNDENUMPROC6_func);
  }
  return;
}



// Translates abstract map or grid indices into pixel coordinates for the UI. It uses a
// lookup table at 0xE02 to calculate offsets based on the target coordinate system.

void __stdcall16far UI_Map_Coordinate_Translation_Logic(void *src,void *dest,int type)
{
  int iVar1;
  int iVar2;
  undefined2 in_stack_0000000a;
  int in_stack_0000000c;
  
  iVar2 = *(int *)(in_stack_0000000c * 0x4 + 0xe02) * 0x4;
  iVar1 = *(int *)(iVar2 + 0xdfc);
  *(int *)(type + 0x6) =
       *(int *)(in_stack_0000000c * 0x4 + 0xe04) * 0x28 + *(int *)(iVar2 + 0xdfa) +
       *(int *)((int)src + 0xa);
  *(int *)(type + 0x8) = *(int *)((int)src + 0xc) + iVar1;
  return;
}



u16 __stdcall16far
UI_Icon_Window_Dispatch_Resource_45_Action(u16 param_1,u16 param_2,HWND16 param_3)
{
  undefined2 *puVar1;
  undefined2 in_AX;
  BOOL16 BVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  HWND16 HVar5;
  HWND16 HVar6;
  undefined2 uVar7;
  u32 local_8;
  u16 local_4;
  
  uVar7 = 0x1050;
  HVar6 = param_3;
  BVar2 = IsWindow16(param_3);
  if (BVar2 != 0x0)
  {
    puVar3 = (undefined *)GetWindowWord16(-0x6,param_3);
    if (puVar3 == *(undefined **)&PTR_DAT_1050_0000_1050_038c)
    {
      HVar5 = param_3;
      BVar2 = IsIconic16(param_3);
      if (BVar2 != 0x0)
      {
        puVar4 = (undefined4 *)
                 Resource_Manager_Get_Resource_by_ID_Logic
                           (*(long *)(undefined **)&p_ResourceManager,0x45);
        puVar1 = (undefined2 *)((int)*puVar4 + 0x10);
        (*(code *)*puVar1)(0x1538,puVar4,0x1,param_3,HVar5,HVar6,uVar7);
      }
    }
  }
  return 0x1;
}



void * __stdcall16far
Game_Settings_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Game_Settings_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Event_List_Manager vtable to 1010:0E98.
// Allocates and constructs an internal tracker object using
// construct_object_with_vtable (sets vtable to 1008:5BC4).

void * __stdcall16far UI_Event_List_Manager_ctor(void *this,int segment,int id)
{
  astruct_491 *this_00;
  void *pvVar1;
  uint in_DX;
  uint uVar2;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0xe98;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  this_00 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar2 = in_DX | (uint)this_00;
  if (uVar2 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar1 = construct_object_with_vtable(this_00,in_DX);
    *(undefined2 *)((int)this + 0xa) = pvVar1;
    *(uint *)((int)this + 0xc) = uVar2;
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:0E98 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 10.

void __stdcall16far UI_Event_List_Manager_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xe98;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Far Pointer
// Performs state swap with global UI context variables in segment 1050:
// - DAT_1050_0e28
// - PTR_DAT_1050_0e30
// - PTR_DAT_1050_0ea8.

void __stdcall16far UI_System_Context_Swap_Logic(void *this,int mode)
{
  bool bVar1;
  int in_stack_00000008;
  
  bVar1 = false;
  if (in_stack_00000008 != 0x0)
  {
    if (*(int *)((int)this + 0x18) == 0x0)
    {
      *(u16 *)((int)this + 0x12) = u16_1050_0e28;
      *(undefined2 *)((int)this + 0x14) = PTR_DAT_1050_0000_1050_0e30;
      *(undefined2 *)((int)this + 0x16) = PTR_DAT_1050_0000_1050_0ea8;
      u16_1050_0e28 = 0x0;
      PTR_DAT_1050_0000_1050_0e30 = NULL;
      PTR_DAT_1050_0000_1050_0ea8 = NULL;
      *(undefined2 *)((int)this + 0x18) = 0x1;
      bVar1 = true;
      goto LAB_1010_0404;
    }
  }
  if (in_stack_00000008 == 0x0)
  {
    if (*(int *)((int)this + 0x18) != 0x0)
    {
      u16_1050_0e28 = *(u16 *)((int)this + 0x12);
      PTR_DAT_1050_0000_1050_0e30 = (undefined *)*(undefined2 *)((int)this + 0x14);
      PTR_DAT_1050_0000_1050_0ea8 = (undefined *)*(undefined2 *)((int)this + 0x16);
      *(undefined2 *)((int)this + 0x18) = 0x0;
      bVar1 = true;
    }
  }
LAB_1010_0404:
  if (bVar1)
  {
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,mode);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks the system tick count and returns false if fewer than 100 ticks have elapsed
// since initialization.

int __stdcall16far win16_Check_Min_Runtime_Ticks_Logic(void)
{
  u32 uVar1;
  
  uVar1 = Simulator_Global_Get_Current_Tick_8326();
  if (((int)(uVar1 >> 0x10) == 0x0) && ((uint)uVar1 < 0x64))
  {
    return 0x0;
  }
  return 0x1;
}



// Targeted Scan Finding: Vtable
// Initializes resource event tracker with vtable 1010:0EA8 (replaces base 1008:389A).
// Performs indirect call through [this + 10] vtable offset 8 to append event.

void __stdcall16far
Turn_Manager_Push_Resource_Event_Logic(void *this,long value,int type)
{
  undefined2 *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  long lVar7;
  int in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  undefined4 uStack_12;
  undefined2 *puStack_e;
  undefined1 local_a [0x8];
  
  if (type == 0xc)
  {
    if (*(int *)((int)this + 0xe) != 0x0)
    {
      return;
    }
    *(undefined2 *)((int)this + 0xe) = 0x1;
  }
  else if (type == 0xd)
  {
    if (*(int *)((int)this + 0x10) != 0x0)
    {
      return;
    }
    *(undefined2 *)((int)this + 0x10) = 0x1;
  }
  else if (type == 0x12)
  {
    return;
  }
  UI_System_Set_State_Flag_and_Notify(this,in_stack_00000006,0x1);
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  do
  {
    lVar7 = get_next_list_item(local_a);
    uVar4 = (uint)((ulong)lVar7 >> 0x10);
    uVar2 = (uint)lVar7;
    uVar5 = uVar4 | uVar2;
    if (uVar5 == 0x0)
    {
      puVar3 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xa));
      uStack_12 = (undefined2 *)CONCAT22(uVar5,puVar3);
      if (uVar5 == 0x0 && puVar3 == NULL)
      {
        puStack_e = NULL;
      }
      else
      {
        *uStack_12 = (char *)s_1_1050_389a;
        puVar3[0x1] = 0x1008;
        *uStack_12 = 0xea8;
        puVar3[0x1] = 0x1010;
        puStack_e = uStack_12;
      }
      uVar6 = (undefined2)((ulong)puStack_e >> 0x10);
      puVar3 = (undefined2 *)puStack_e;
      puVar3[0x2] = type;
      *(long *)(puVar3 + 0x3) = value;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
      (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0xa),puVar3,uVar6);
      return;
    }
  } while ((*(int *)(uVar2 + 0x4) != type) || (*(long *)(uVar2 + 0x6) != value));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Performs sophisticated message formatting by concatenating 40+ resource strings (IDs
// 0x757 to 0x7CB) via 1050:14CC.
// Indirectly calls virtual destructor (index 0) of the popped event object.
// Handles variable substitution for resource paths.

void __stdcall16far
Turn_Manager_Format_Resource_Event_Message_Logic
          (void *this,char **message_out,int *status_out)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  uint uVar4;
  char **out_str;
  char **extraout_DX;
  undefined4 *puVar5;
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  
  *in_stack_0000000c = 0x0;
  _status_out[0x0] = 0x0;
  _status_out[0x1] = 0x0;
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x10);
  puVar5 = (undefined4 *)(*(code *)*puVar2)();
  uVar4 = (uint)((ulong)puVar5 >> 0x10);
  out_str = (char **)(uVar4 | (uint)(undefined4 *)puVar5);
  if (out_str == NULL)
  {
    return;
  }
  iVar1 = *(int *)((undefined4 *)puVar5 + 0x1);
  if (puVar5 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar5)();
    out_str = extraout_DX;
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0xa) + 0x8) == 0x0)
  {
    UI_System_Set_State_Flag_and_Notify(this,(int)message_out,0x0);
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)message_out);
  }
  pcVar3 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),iVar1 + 0x757);
  *(char **)in_stack_0000000c = pcVar3;
  *(uint *)((int)(undefined4 *)in_stack_0000000c + 0x2) = (uint)out_str;
  while (pcVar3 = strchr_far_optimized
                            ((char *)(char *)*in_stack_0000000c,
                             (char)((ulong)*in_stack_0000000c >> 0x10)),
        out_str != NULL || pcVar3 != NULL)
  {
    Path_Manager_Construct_Resource_Path
              ((int)this,(int)message_out,pcVar3,out_str,(long)in_stack_0000000c);
  }
  switch(iVar1)
  {
  case 0x1:
    uVar9 = 0x96;
    uVar6 = 0x777;
    goto LAB_1010_0619;
  case 0x2:
    uVar9 = 0x97;
    uVar6 = 0x778;
    goto LAB_1010_0619;
  case 0x3:
    uVar9 = 0x99;
    uVar6 = 0x779;
    uVar7 = 0x798;
    break;
  case 0x4:
    uVar9 = 0x9a;
    uVar6 = 0x77a;
    goto LAB_1010_0619;
  case 0x5:
    uVar9 = 0x9b;
    uVar6 = 0x77b;
    goto LAB_1010_0619;
  case 0x6:
    uVar9 = 0x9d;
    uVar6 = 0x77c;
    uVar7 = 0x79c;
    break;
  case 0x7:
    uVar9 = 0x9e;
    uVar6 = 0x77d;
    goto LAB_1010_0619;
  case 0x8:
    uVar9 = 0x9f;
    uVar6 = 0x77e;
    goto LAB_1010_0619;
  case 0x9:
    uVar9 = 0xa1;
    uVar6 = 0x77f;
    uVar7 = 0x7a0;
    break;
  case 0xa:
    uVar9 = 0xa2;
    uVar6 = 0x780;
    goto LAB_1010_0619;
  case 0xb:
    uVar9 = 0xa3;
    uVar6 = 0x781;
    goto LAB_1010_0619;
  case 0xc:
    uVar9 = 0xa5;
    uVar6 = 0x782;
    uVar7 = 0x7a4;
    break;
  case 0xd:
    uVar9 = 0xa6;
    uVar6 = 0x783;
    goto LAB_1010_0619;
  case 0xe:
    uVar9 = 0xa8;
    uVar6 = 0x784;
    uVar7 = 0x7a7;
    break;
  case 0xf:
    uVar9 = 0xa9;
    uVar6 = 0x785;
    goto LAB_1010_0619;
  case 0x10:
    uVar9 = 0xab;
    uVar6 = 0x786;
    uVar7 = 0x7aa;
    break;
  case 0x11:
    uVar9 = 0xad;
    uVar6 = 0x787;
    uVar7 = 0x7ac;
    break;
  case 0x12:
    uVar9 = 0xaf;
    uVar6 = 0x788;
    uVar7 = 0x7ae;
    break;
  case 0x13:
    uVar9 = 0xb1;
    uVar6 = 0x789;
    uVar7 = 0x7b0;
    break;
  case 0x14:
    uVar9 = 0xb3;
    uVar6 = 0x78a;
    uVar7 = 0x7b2;
    break;
  case 0x15:
    uVar9 = 0xb5;
    uVar6 = 0x78b;
    uVar7 = 0x7b4;
    break;
  case 0x16:
    uVar9 = 0xb6;
    uVar6 = 0x78c;
LAB_1010_0619:
    pcVar3 = res_concatenate_strings_by_id(uVar6,uVar9,0x0);
    goto LAB_1010_0621;
  case 0x17:
    uVar9 = 0xb8;
    uVar6 = 0x78d;
    uVar7 = 0x7b7;
    break;
  case 0x18:
    uVar9 = 0xba;
    uVar6 = 0x78e;
    uVar7 = 0x7b9;
    break;
  case 0x19:
    uVar9 = 0xbd;
    uVar7 = 0x7bb;
    uVar8 = 0x7bc;
    uVar6 = 0x78f;
    goto LAB_1010_0785;
  case 0x1a:
    uVar9 = 0xc0;
    uVar7 = 0x7be;
    uVar8 = 0x7bf;
    uVar6 = 0x790;
    goto LAB_1010_0785;
  case 0x1b:
    uVar9 = 0xc3;
    uVar7 = 0x7c1;
    uVar8 = 0x7c2;
    uVar6 = 0x791;
    goto LAB_1010_0785;
  case 0x1c:
    uVar9 = 0xc5;
    uVar6 = 0x792;
    uVar7 = 0x7c4;
    break;
  case 0x1d:
    uVar9 = 0xc7;
    uVar6 = 0x793;
    uVar7 = 0x7c6;
    break;
  case 0x1e:
    pcVar3 = res_concatenate_strings_by_id(0x794,0x7c8,0xc9,0x0);
    *_status_out = (int)pcVar3;
    status_out[0x1] = (int)out_str;
  case 0x1f:
    uVar9 = 0xcc;
    uVar7 = 0x7ca;
    uVar8 = 0x7cb;
    uVar6 = 0x795;
LAB_1010_0785:
    pcVar3 = res_concatenate_strings_by_id(uVar6,uVar7,uVar8,uVar9,0x0);
    goto LAB_1010_0621;
  default:
    goto switchD_1010_080d_default;
  }
  pcVar3 = res_concatenate_strings_by_id(uVar6,uVar7,uVar9,0x0);
LAB_1010_0621:
  *_status_out = (int)pcVar3;
  status_out[0x1] = (int)out_str;
switchD_1010_080d_default:
  while (pcVar3 = strchr_far_optimized
                            ((char *)*(char **)_status_out,
                             (char)((ulong)*(char **)_status_out >> 0x10)),
        out_str != NULL || pcVar3 != NULL)
  {
    Path_Manager_Construct_Resource_Path
              ((int)this,(int)message_out,pcVar3,out_str,(long)_status_out);
  }
  return;
}



// A simple stub function that returns the constant value 10.

int __stdcall16far get_const_10_stub(void)
{
  return 0xa;
}



// A simple stub function that returns the constant value 3.

int __stdcall16far get_const_3_stub(void)
{
  return 0x3;
}



// A simple stub function that returns the constant value 3. Duplicate instance.

int __stdcall16far get_const_3_stub_2(void)
{
  return 0x3;
}



// Returns the major version number of the game (currently 3).

int __stdcall16far Get_Outpost_Version_Number(void)
{
  return 0x3;
}



// Targeted Scan Finding: Far Pointer
// Updates indexed system state flag in lookup table starting at 1010:0E28.
// Triggers UI notification on the provided context object.

void __stdcall16far UI_System_Set_State_Flag_and_Notify(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((in_stack_0000000a + -0x1) * 0x8 + 0xe28) = index;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,value);
  return;
}



// Targeted Scan Finding: Far Pointer
// Updates indexed system state flag in lookup table starting at 1010:0EA8.
// Triggers UI notification on the provided context object.

void __stdcall16far
UI_System_Set_State_Flag_Category2_and_Notify(void *this,int value,int index)
{
  int in_stack_0000000a;
  
  *(int *)((in_stack_0000000a + -0x1) * 0x8 + 0xea8) = index;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,value);
  return;
}



// Targeted Scan Finding: Far Pointer
// Resets a series of global state variables in segment 1050 (offsets 0E28 through
// 0E70).
// Returns far pointer into a flag entry table starting at 1010:0E22.

void * __stdcall16far UI_System_Reset_Flags_and_Get_Entry_Ptr(int index)
{
  int in_stack_00000008;
  
  if (PTR_DAT_1050_0000_1050_4fe8 != NULL)
  {
    u16_1050_0e28 = 0x0;
    PTR_DAT_1050_0000_1050_0e30 = NULL;
    PTR_DAT_1050_0000_1050_0e38 = NULL;
    PTR_DAT_1050_0000_1050_0e40 = NULL;
    PTR_DAT_1050_0000_1050_0e48 = NULL;
    u16_1050_0e58 = 0x0;
    u16_1050_0e60 = 0x0;
    PTR_DAT_1050_0000_1050_0e70 = NULL;
  }
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe22);
}



// Targeted Scan Finding: Far Pointer
// Returns far pointer into a flag entry table starting at 1010:0E72.

void * __stdcall16far UI_System_Get_Flag_Entry_Category2_Ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe72);
}



// Targeted Scan Finding: Far Pointer
// Returns far pointer into a flag entry table starting at 1010:0E8A.

void * __stdcall16far UI_System_Get_Flag_Entry_Category3_Ptr(int index)
{
  int in_stack_00000008;
  
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xe8a);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References Resource Manager at 1050:0ED0 and global state at 1050:5748.
// Performs cross-entity relationship checks between 0x4000001 and 0x4000002.
// Updates global ship-link status flag at 1050:0EA8.
// Returns far pointer into a flag entry table starting at 1010:0EA2.

void * __stdcall16far UI_System_Update_Ship_Link_Flag_and_Get_Entry_Ptr(int index)
{
  int iVar1;
  void *pvVar2;
  int in_stack_00000008;
  long id1;
  long id2;
  
  PTR_DAT_1050_0000_1050_0ea8 = NULL;
  id2 = 0x4000001;
  id1 = 0x4000002;
  pvVar2 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  iVar1 = UI_Relationship_Manager_Is_Link_Active_Type1_Logic((void *)pvVar2,id1,id2);
  if (iVar1 != 0x0)
  {
    pvVar2 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                       ((u16)_p_SimulatorGlobalState,
                        (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x4000002)
    ;
    if (*(long *)((int)pvVar2 + 0x200) == 0x8000002)
    {
      PTR_DAT_1050_0000_1050_0ea8 = (undefined *)0x1;
    }
  }
  return (void *)((in_stack_00000008 + -0x1) * 0x8 + 0xea2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References global resource manager at 1050:0ED0 and simulator state at 1050:5748.
// Constructs full resource paths by appending component-specific filenames.

void __stdcall16far
Path_Manager_Construct_Resource_Path
          (int arg1,int arg2,char *path_comp,char **out_str,long entity_id)
{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  int in_DX;
  undefined2 uVar7;
  long lVar8;
  void *this_ptr;
  char *pcVar9;
  void *in_stack_00000010;
  undefined2 in_stack_0000ffde;
  undefined4 uStack_12;
  char *pcStack_a;
  int iStack_8;
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = path_comp[0x1];
  if (bVar1 == 0x70)
  {
LAB_1010_0a06:
    bVar3 = false;
    bVar2 = true;
  }
  else if (bVar1 < 0x71)
  {
    if (bVar1 != 0x43)
    {
      if (bVar1 == 0x50) goto LAB_1010_0a06;
      if (bVar1 != 0x63) goto LAB_1010_09db;
    }
    bVar3 = true;
    bVar2 = false;
  }
LAB_1010_09db:
  pcStack_a = NULL;
  iStack_8 = 0x0;
  if (bVar2)
  {
    lVar8 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
    uVar7 = (undefined2)((ulong)lVar8 >> 0x10);
    pcVar9 = (char *)CONCAT22(*(undefined2 *)((int)lVar8 + 0x6e),
                              (char *)*(undefined2 *)((int)lVar8 + 0x6c));
  }
  else
  {
    if (!bVar3) goto LAB_1010_0a36;
    this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          in_stack_00000010);
    pcVar9 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  }
  in_DX = (int)((ulong)pcVar9 >> 0x10);
  pcStack_a = (char *)pcVar9;
  iStack_8 = in_DX;
LAB_1010_0a36:
  if (iStack_8 != 0x0 || pcStack_a != NULL)
  {
    uVar4 = strlen_get_length(*(char **)entity_id);
    uVar5 = strlen_get_length((char *)CONCAT22(iStack_8,pcStack_a));
    pcVar6 = allocate_memory(CONCAT22(in_stack_0000ffde,uVar5 + 0xa + uVar4));
    uStack_12 = (char *)CONCAT22(in_DX,pcVar6);
    *_path_comp = '\0';
    strcpy_optimized((char *)CONCAT22(in_DX,pcVar6),*(char **)entity_id);
    strcat_append((char *)CONCAT22(in_DX,pcVar6),(char *)CONCAT22(iStack_8,pcStack_a));
    strcat_append((char *)CONCAT22(in_DX,pcVar6),
                  (char *)CONCAT22(out_str,path_comp + 0x2));
    free_if_not_null((void *)*(void **)entity_id);
    *(char **)entity_id = uStack_12;
  }
  return;
}



u16 __stdcall16far UI_Report_List_Serialize_to_File_Logic(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_2a;
  u16 local_22;
  u16 local_1e;
  u16 local_18;
  u32 local_12;
  undefined1 local_e [0x8];
  u16 local_6;
  u16 local_4;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  uVar3 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  if (*(long *)(iVar1 + 0xa) == 0x0)
  {
    local_6 = 0x0;
  }
  else
  {
    local_6 = *(u16 *)((int)*(undefined4 *)(iVar1 + 0xa) + 0x8);
  }
  local_1e = local_6;
  iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
  if (iVar2 != 0x0)
  {
    init_long_pair(local_e,*(long *)(iVar1 + 0xa));
    do
    {
      local_12 = get_next_list_item(local_e);
      iVar2 = (int)(local_12 >> 0x10);
      if (iVar2 == 0x0 && (int)local_12 == 0x0)
      {
        local_22 = *(u16 *)(iVar1 + 0xe);
        iVar2 = file_write_check((long)param_2,&local_22,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        local_22 = *(u16 *)(iVar1 + 0x10);
        iVar2 = file_write_check((long)param_2,&local_22,unaff_SS);
        if (iVar2 == 0x0)
        {
          g_LastFileErrorMsgID = (undefined *)0x6d0;
          return 0x0;
        }
        if (*(int *)(iVar1 + 0x18) != 0x0)
        {
          u16_1050_0e28 = *(u16 *)(iVar1 + 0x12);
          PTR_DAT_1050_0000_1050_0e30 = (undefined *)*(undefined2 *)(iVar1 + 0x14);
          PTR_DAT_1050_0000_1050_0ea8 = (undefined *)*(undefined2 *)(iVar1 + 0x16);
        }
        local_4 = 0x0;
        while( true )
        {
          if (0x9 < (int)local_4)
          {
            local_4 = 0x0;
            while( true )
            {
              if (0x2 < (int)local_4)
              {
                if (*(int *)(iVar1 + 0x18) != 0x0)
                {
                  u16_1050_0e28 = 0x0;
                  PTR_DAT_1050_0000_1050_0e30 = NULL;
                  PTR_DAT_1050_0000_1050_0ea8 = NULL;
                }
                return 0x1;
              }
              local_1e = *(u16 *)(local_4 * 0x8 + 0xea8);
              iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
              if (iVar2 == 0x0) break;
              local_4 += 0x1;
            }
            g_LastFileErrorMsgID = (undefined *)0x6d0;
            return 0x0;
          }
          local_1e = *(u16 *)(local_4 * 0x8 + 0xe28);
          iVar2 = file_write_check((long)param_2,&local_1e,unaff_SS);
          if (iVar2 == 0x0) break;
          local_4 += 0x1;
        }
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      local_18 = *(u16 *)((int)local_12 + 0x4);
      iVar2 = file_write_check((long)param_2,&local_18,unaff_SS);
      if (iVar2 == 0x0)
      {
        g_LastFileErrorMsgID = (undefined *)0x6d0;
        return 0x0;
      }
      local_2a = *(u32 *)((int)local_12 + 0x6);
      iVar2 = file_write_check((long)param_2,&local_2a,unaff_SS);
    } while (iVar2 != 0x0);
  }
  g_LastFileErrorMsgID = (undefined *)0x6d0;
  return 0x0;
}
