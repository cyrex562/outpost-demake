/*
 * Source: outpost.c
 * Chunk: 64/117
 * Original lines: 72787-73962
 * Boundaries: top-level declarations/definitions only
 */




// Performs a cardinal adjacency check (N, S, E, W) specifically validating against type
// 0x40 and other infrastructure. Used for complex road/connection validation.

int __stdcall16far
Simulator_Check_Complex_Road_Adjacency_Logic_2290
          (void *arg1,u16 x,u16 y,u16 arg4,u16 arg5,void *arg6)
{
  u16 uVar1;
  int *unaff_SS;
  u16 local_e;
  u16 local_c;
  int local_a;
  void *local_8;
  u16 uStack_4;
  
  local_8 = *(void **)x;
  uStack_4 = *(u16 *)(x + 0x4);
  unpack_3word_struct(&local_8,unaff_SS,(int *)&local_e,unaff_SS);
  local_8 = (void *)CONCAT22(local_c - 0x1,(void *)local_8);
  uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                    (arg1,0x16,&local_8,unaff_SS,arg6);
  if (uVar1 == 0x0)
  {
    local_8 = (void *)CONCAT22(local_c + 0x1,(void *)local_8);
    uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                      (arg1,0x16,&local_8,unaff_SS,arg6);
    if (uVar1 == 0x0)
    {
      local_8 = (void *)CONCAT22(local_c,(void *)(local_a + -0x1));
      uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                        (arg1,0x17,&local_8,unaff_SS,arg6);
      if (uVar1 == 0x0)
      {
        local_8 = (void *)CONCAT22(local_8._2_2_,(void *)(local_a + 0x1));
        uVar1 = Simulator_Is_Entity_Type_Type64_or_Param_at_Coords_2220
                          (arg1,0x17,&local_8,unaff_SS,arg6);
        if (uVar1 == 0x0)
        {
          return 0x0;
        }
      }
    }
  }
  return 0x1;
}



undefined2 __stdcall16far UI_Build_Item_Handle_Transition_to_State6_236a(void *param_1)
{
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  if ((*(byte *)((int)(void *)param_1 + 0x1a) & 0x2) == 0x0)
  {
    uVar3 = 0x0;
    uVar4 = 0x23;
    uVar2 = 0x1;
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_1);
    UI_Component_Set_List_Value_at_26_Logic_7d7c
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),uVar2,uVar3,uVar4);
    UI_Build_Item_Transition_State_Logic_bdac(param_1,0x6);
    return 0x0;
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
Simulator_Validate_Entity_Proximity_23a8
          (undefined2 param_1,undefined2 param_2,void *param_3,u8 *param_4,
          undefined2 param_5,long param_6)
{
  int iVar1;
  u16 unaff_SS;
  void *pvVar2;
  undefined1 local_4 [0x2];
  
  Helper_Identity_Function_bcae((undefined1 *)CONCAT22(unaff_SS,local_4));
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,param_4);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)(void *)pvVar2 + 0x10));
  iVar1 = Simulator_Calc_Manhattan_Distance_to_Coord_bcde
                    ((u16)local_4,unaff_SS,pvVar2,param_3,param_6);
  if (iVar1 < 0x0)
  {
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6af;
    return 0x0;
  }
  return 0x1;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Serialize_to_File_2418(void *param_1,void *param_2)
{
  undefined4 uVar1;
  u16 uVar2;
  int iVar3;
  undefined2 uVar4;
  void *unaff_SS;
  long lVar5;
  undefined2 local_1c [0x6];
  undefined2 local_10;
  undefined4 local_e;
  undefined1 local_a [0x8];
  
  uVar2 = UI_Build_Item_Save_to_File_Logic_b5ec(param_1,param_2);
  uVar4 = 0x0;
  if (uVar2 != 0x0)
  {
    uVar4 = (undefined2)((ulong)param_1 >> 0x10);
    init_long_pair(local_a,*(long *)((int)(void *)param_1 + 0x20));
    uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x20);
    local_1c[0x0] = *(undefined2 *)((int)uVar1 + 0x8);
    local_10 = local_1c[0x0];
    iVar3 = file_write_check((long)param_2,local_1c,unaff_SS);
    if (iVar3 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d0;
      return 0x0;
    }
    while( true )
    {
      lVar5 = get_next_list_item(local_a);
      if (lVar5 == 0x0) break;
      local_e = lVar5;
      uVar2 = Simulator_Resource_List_Save_to_File_Logic_75ca
                        ((int)lVar5,(int)((ulong)lVar5 >> 0x10),param_2);
      if (uVar2 == 0x0)
      {
        return 0x0;
      }
    }
    uVar4 = 0x1;
  }
  return uVar4;
}



undefined2 __stdcall16far
UI_Build_Item_Complex_Resource_Deserialize_from_File_24a2(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  u16 uVar2;
  int iVar3;
  void *pvVar4;
  int in_DX;
  int extraout_DX;
  void *unaff_SS;
  void *arg1;
  void *file_ctx;
  uint local_6;
  uint local_4;
  
  uVar2 = UI_Build_Item_Load_from_File_Logic_b81a(param_1,(void *)param_2);
  if (uVar2 == 0x0)
  {
    return 0x0;
  }
  if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
  {
    iVar3 = file_read_check((long)param_2,&local_4,unaff_SS);
    if (iVar3 == 0x0)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d2;
      return 0x0;
    }
    for (local_6 = 0x0; local_6 < local_4; local_6 += 0x1)
    {
      file_ctx = param_2;
      pvVar4 = allocate_memory(CONCAT22((void *)param_2,0x2a));
      if (in_DX == 0x0 && pvVar4 == NULL)
      {
        arg1 = NULL;
      }
      else
      {
        arg1 = Simulator_Resource_Change_Item_ctor_init_6520
                         ((void *)CONCAT22(in_DX,pvVar4));
      }
      uVar2 = Simulator_Resource_List_Load_from_File_Logic_774e(arg1,file_ctx);
      if (uVar2 == 0x0)
      {
        return 0x0;
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)param_1 + 0x20) + 0x8);
      (*(code *)*puVar1)();
      in_DX = extraout_DX;
    }
  }
  return 0x1;
}



void * __stdcall16far
UI_Build_Item_Type2572_dtor_Scalar_Deleting_254c(void *param_1,byte param_2)
{
  UI_Build_Item_Type_2572_dtor_Internal_2042(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 264C. Initializes base class and sets its internal
// metadata string. Sets vtable to 0x264C.

void * __stdcall16far UI_Build_Item_Type_264C_ctor_init_25da(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem16_wav_1050_2644 + 0x8;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 264C.

void * __stdcall16far
UI_Build_Item_Type_264C_ctor_with_Params_25fc
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem16_wav_1050_2644 + 0x8;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_2626(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x2788. Initializes base class and sets vtable to
// 0x2788.

void * __stdcall16far UI_Build_Item_Type_2788_ctor_init_26b4(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem48_wav_1050_2784 + 0x4;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x2788.

void * __stdcall16far
UI_Build_Item_Type_2788_ctor_with_Params_26d6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem48_wav_1050_2784 + 0x4;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far UI_Build_Item_OnTick_State6_Update_and_Notify_2700(void *param_1)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State6_Update_be2a(param_1);
  if (*(int *)((int)(void *)param_1 + 0x12) == 0x5)
  {
    pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
    *(undefined2 *)((int)(void *)pvVar1 + 0x204) = 0x1;
  }
  return;
}



void __stdcall16far UI_Build_Item_OnTick_State4_Update_and_Notify_272e(void *param_1)
{
  void *pvVar1;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b4f2(param_1);
  if (*(int *)((int)param_1 + 0x12) == 0x5)
  {
    *(undefined2 *)((int)pvVar1 + 0x204) = 0x1;
  }
  return;
}



// Scalar deleting destructor for a UI build item. Reverts vtables and optionally frees
// memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_2762(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 6E (0x6E). Initializes base class and sets vtable
// to 0x2A92.

void * __stdcall16far UI_Build_Item_Type6E_ctor_init_27f0(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(char **)this_ptr = (char *)s_fem123_wav_1050_2a89 + 0x9;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 6E. Initializes base class and sets
// vtable to 0x2A92.

void * __stdcall16far
UI_Build_Item_Type6E_ctor_with_Params_2812
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_fem123_wav_1050_2a89 + 0x9;
  param_1[0x1] = 0x1028;
  param_1[0x7] = param_1[0x6];
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far
Simulator_Validate_Adjacency_MultiCoord_Logic_2844
          (u32 param_1,undefined4 *param_2,undefined2 param_3,undefined2 param_4,
          undefined2 param_5,long param_6)
{
  u16 uVar1;
  int *unaff_SS;
  int local_e;
  int local_c;
  int local_a;
  undefined4 local_8;
  undefined2 uStack_4;
  
  local_8 = *param_2;
  uStack_4 = *(undefined2 *)(param_2 + 0x1);
  unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
  local_8 = CONCAT22(local_c + -0x1,(int)local_8);
  uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                    (param_1,0x7b,&local_8,unaff_SS,param_6);
  if (uVar1 == 0x0)
  {
    uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                      (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6);
    if (uVar1 == 0x0)
    {
      local_8 = CONCAT22(local_c + 0x1,(int)local_8);
      uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                        (param_1,0x7b,&local_8,unaff_SS,param_6);
      if (uVar1 == 0x0)
      {
        uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                          (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6);
        if (uVar1 == 0x0)
        {
          local_8._0_2_ = local_a + -0x1;
          local_8._2_2_ = local_c;
          uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                            (param_1,0x7c,&local_8,unaff_SS,param_6);
          if (uVar1 == 0x0)
          {
            uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                              (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_6
                              );
            if (uVar1 == 0x0)
            {
              local_8 = CONCAT22(local_8._2_2_,local_a + 0x1);
              uVar1 = Simulator_Is_Entity_Type_7A_or_Param_at_Coords_c5a6
                                (param_1,0x7c,&local_8,unaff_SS,param_6);
              if (uVar1 == 0x0)
              {
                uVar1 = Simulator_Validate_Adjacency_Placement_Rules_297c
                                  (param_1,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                   param_6);
                if (uVar1 == 0x0)
                {
                  return 0x0;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates if an entity can be placed at coordinates based on its adjacency to
// existing structures. Specific rules for roads, tubes (0x18, 0x3F), and other
// infrastructure types.

u16 __stdcall16far
Simulator_Validate_Adjacency_Placement_Rules_297c(u32 arg1,void *coords,long arg3)
{
  uint uVar1;
  char cVar2;
  u16 uVar3;
  u8 *puVar4;
  void *pvVar5;
  
  uVar3 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                    ((u16)arg1,(u16)(arg1 >> 0x10),coords,arg3);
  if (uVar3 == 0x0)
  {
    puVar4 = Simulator_Map_Get_Entity_at_Coords_627e
                       (_p_MapContext_5740,coords,(void *)arg3);
    if (puVar4 != NULL)
    {
      pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,(u8 *)puVar4);
      pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar5);
      uVar1 = *(uint *)((int)(void *)pvVar5 + 0xc);
      if ((int)uVar1 < 0x4b)
      {
        if (0x47 < (int)uVar1)
        {
          return 0x0;
        }
        if (uVar1 == 0x41)
        {
          return 0x0;
        }
        if (uVar1 < 0x42)
        {
          cVar2 = (char)uVar1;
          if (cVar2 < '5')
          {
            if ('2' < cVar2)
            {
              return 0x0;
            }
            cVar2 += -0x10;
          }
          else
          {
            cVar2 += -0x3e;
          }
          if (cVar2 == '\0')
          {
            return 0x0;
          }
        }
      }
      else if (true)
      {
        switch(uVar1)
        {
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
        case 0x6e:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
          goto switchD_1028_2a0b_caseD_4c;
        }
      }
      return 0x1;
    }
  }
switchD_1028_2a0b_caseD_4c:
  return 0x0;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_2a6c(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 6F (0x6F). Initializes base class and sets
// vtable to 0x2B74.

void * __stdcall16far UI_Construction_Item_Type6F_ctor_init_2afa(void *this_ptr)
{
  UI_Build_Item_TypeE036_ctor_init_dc96(this_ptr);
  *(char **)this_ptr = (char *)s_add5_wav_1050_2b73 + 0x1;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 6F. Initializes base class
// and sets vtable to 0x2B74.

void * __stdcall16far
UI_Construction_Item_Type6F_ctor_with_Params_2b1c
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_TypeE036_ctor_with_Params_dcc2
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = (char *)s_add5_wav_1050_2b73 + 0x1;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void __stdcall16far void_noop_stub_1028_2b46(void)
{
  return;
}



void __stdcall16far void_noop_stub_1028_2b4a(void)
{
  return;
}



void * __stdcall16far
UI_Build_Item_TypeE036_dtor_Scalar_Deleting_2b4e(void *param_1,byte param_2)
{
  UI_Build_Item_TypeE036_dtor_Internal_dcf4(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for a UI component using vtable 0x341C.

void * __stdcall16far UI_Component_Type341C_ctor_2bdc(void *this_ptr)
{
  UI_Build_Item_Type_0ADA_ctor_init_0954(this_ptr);
  *(undefined2 *)this_ptr = 0x341c;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0x341C.

void * __stdcall16far
UI_Component_Type341C_ctor_with_Params_2bfe
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_0ADA_ctor_with_Params_0982
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x341c;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far
UI_Build_Item_Comprehensive_Placement_Validator_2c28
          (u32 param_1,undefined4 *param_2,u8 *param_3,undefined2 param_4,long param_5)
{
  u16 uVar1;
  int *unaff_SS;
  u16 x;
  u16 y;
  int local_e;
  int iStack_c;
  undefined4 local_8;
  undefined2 uStack_4;
  
  uVar1 = UI_Build_Item_Validate_Placement_MultiStage_Logic_09d4
                    (param_1,param_2,param_3,param_5);
  if (uVar1 != 0x0)
  {
    local_8 = *param_2;
    uStack_4 = *(undefined2 *)((undefined4 *)param_2 + 0x1);
    unpack_3word_struct(&local_8,unaff_SS,&local_e,unaff_SS);
    pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
    x = (u16)param_1;
    y = (u16)(param_1 >> 0x10);
    uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                      (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
    if (uVar1 != 0x0)
    {
      pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
      uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                        (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
      if (uVar1 != 0x0)
      {
        pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + -0x1);
        uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                          (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
        if (uVar1 != 0x0)
        {
          pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
          uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                            (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
          if (uVar1 != 0x0)
          {
            pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
            uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                              (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
            if (uVar1 != 0x0)
            {
              pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c);
              uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5);
              if (uVar1 != 0x0)
              {
                pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                  (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),param_5
                                  );
                if (uVar1 != 0x0)
                {
                  pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                  uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                    (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                     param_5);
                  if (uVar1 != 0x0)
                  {
                    pack_3words_reverse(&local_8,(int)unaff_SS,local_e,iStack_c + 0x1);
                    uVar1 = Simulator_Get_Entity_Type_at_Coords_Comprehensive_c7b6
                                      (x,y,(undefined4 *)CONCAT22(unaff_SS,&local_8),
                                       param_5);
                    if (uVar1 != 0x0)
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
    }
    PTR_DAT_1050_0000_1050_50ca = (undefined *)0x6a8;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Build_Item_OnTick_State4_Finalize_and_Notify_2e40(void *param_1)
{
  void *pvVar1;
  int index;
  
  UI_Build_Item_OnTick_State4_Update_be9e(param_1);
  if (*(int *)((int)(void *)param_1 + 0x12) == 0x5)
  {
    Simulator_Notify_All_Cardinal_Neighbors_2f18(param_1);
    UI_Build_Item_Initialize_Default_Resource_Quotas_3246(param_1);
    index = 0x1;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Set_State_Flag_and_Notify
              ((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10),index);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finalizes road/infrastructure placement. Updates planetary resource tracking (Turn
// Manager) and triggers UI state refreshes.

void __stdcall16far
Simulator_Finalize_Road_Placement_and_Update_Resources_2e84
          (void *param_1,undefined4 param_2)
{
  void *pvVar1;
  long context;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  int arg4;
  undefined2 uVar5;
  undefined2 uVar6;
  int resource_id;
  
  UI_Build_Item_Set_Flag_at_14_Logic_09b8((void *)CONCAT22((int)param_2,param_1));
  if ((int)((ulong)param_2 >> 0x10) == 0x0)
  {
    uVar6 = 0x0;
    resource_id = 0x8;
    arg4 = 0x1;
    uVar5 = 0x0;
    uVar3 = 0x0;
    iVar4 = 0x0;
    uVar2 = 0x0;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x37);
    Turn_Manager_Add_Resource_Change_Entry_Logic
              ((void *)pvVar1,CONCAT22(uVar3,uVar2),iVar4,arg4,CONCAT22(uVar6,uVar5),
               resource_id);
    uVar3 = 0x400;
    iVar4 = 0x3;
    uVar2 = 0x1;
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    Turn_Manager_Push_Resource_Event_Logic((void *)pvVar1,CONCAT22(uVar3,uVar2),iVar4);
    Turn_Manager_Push_Resource_Event_Logic((void *)pvVar1,0x4000001,0x4);
    context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    UI_Component_On_Event_14_Update_Global_5748_Logic(context);
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x8);
    UI_Object_Init_State_at_Offset_1A_Logic((void *)pvVar1);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Notifies all 8 surrounding neighbor tiles of an entity's placement or change.
// Specifically uses cardinal direction-based notification codes (0xB, 0xC, 0xD, 0xE).

void __stdcall16far Simulator_Notify_All_Cardinal_Neighbors_2f18(void *this_ptr)
{
  int iVar1;
  undefined2 uVar2;
  int *unaff_SS;
  void *pvVar3;
  undefined1 local_944 [0x124];
  undefined1 local_820 [0x124];
  undefined1 local_6fc [0x124];
  undefined1 local_5d8 [0x124];
  undefined1 local_4b4 [0x124];
  undefined1 local_390 [0x6];
  undefined1 local_38a [0x124];
  undefined1 local_266 [0x124];
  undefined1 local_142 [0x124];
  int local_1e;
  int local_1c;
  undefined4 local_18;
  undefined2 uStack_14;
  undefined4 uStack_12;
  undefined4 uStack_e;
  void *pvStack_a;
  void *pvStack_6;
  undefined2 uStack_4;
  
  pvVar3 = UI_Build_Item_Get_World_Coordinates_Alternative_bb24(this_ptr);
  uStack_4 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvStack_6 = (void *)pvVar3;
  pvStack_a = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uVar2 = (undefined2)((ulong)pvStack_a >> 0x10);
  iVar1 = (int)pvStack_a;
  uStack_e = *(undefined4 *)(iVar1 + 0x2e);
  uStack_12 = *(undefined4 *)((int)uStack_e + 0x4);
  local_18 = *(undefined4 *)(iVar1 + 0xc);
  uStack_14 = *(undefined2 *)(iVar1 + 0x10);
  unpack_3word_struct(&local_18,unaff_SS,&local_1e,unaff_SS);
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_142,unaff_SS,0x0,0xd0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_142));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_266,unaff_SS,0x0,0xc0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_266));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_38a,unaff_SS,0x0,0xe0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_38a));
  pack_3words_alt(local_390,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_4b4,unaff_SS,0x0,0xb0000,local_390,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_4b4));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + -0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_5d8,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_5d8));
  pack_3words_reverse(&local_18,(int)unaff_SS,(int)_local_1e,
                      (int)((ulong)_local_1e >> 0x10));
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_6fc,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_6fc));
  pack_3words_reverse(&local_18,(int)unaff_SS,local_1e,local_1c + 0x1);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_820,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_820));
  pack_3words_reverse(&local_18,(int)unaff_SS,(int)_local_1e,
                      (int)((ulong)_local_1e >> 0x10));
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_944,unaff_SS,0x0,0x7a0000,&local_18,unaff_SS,(int)uStack_12,
             (int)((ulong)uStack_12 >> 0x10),pvStack_6,uStack_4);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_944));
  pvVar3 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_390),
                      (void *)CONCAT22(uStack_4,pvStack_6));
  uVar2 = (undefined2)((ulong)uStack_e >> 0x10);
  *(undefined2 *)((int)uStack_e + 0x10) = (int)pvVar3;
  *(undefined2 *)((int)uStack_e + 0x12) = (int)((ulong)pvVar3 >> 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes default resource quotas (power, food, medicine, etc.) for a newly created
// build item. Involves complex state checks and triggers batch sub-object processing if
// the item is a player-controlled entity.

void __stdcall16far
UI_Build_Item_Initialize_Default_Resource_Quotas_3246(void *this_ptr)
{
  undefined2 unaff_SS;
  void *pvVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined1 local_20 [0x6];
  long lStack_1a;
  void *pvStack_12;
  undefined2 uStack_10;
  u8 *puStack_e;
  undefined4 uStack_a;
  void *pvStack_6;
  
  pvStack_6 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  uStack_a = *(undefined4 *)((int)(void *)pvStack_6 + 0x2e);
  puStack_e = (u8 *)*(undefined4 *)((int)uStack_a + 0x10);
  uVar3 = 0x0;
  uVar4 = 0x1;
  uVar2 = 0x1;
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_e);
  uStack_10 = (undefined2)((ulong)pvVar1 >> 0x10);
  pvStack_12 = (void *)pvVar1;
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50
            (pvStack_12,uStack_10,uVar2,uVar3,uVar4);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x2);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x3);
  UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x1,0x0,0x5);
  lStack_1a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if (*(int *)((int)lStack_1a + 0x82) == 0x0)
  {
    UI_Component_Batch_Spawn_SubEntities_Logic_7c50(pvStack_12,uStack_10,0x4,0x0,0x4);
  }
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x11);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x12);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x13);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x14);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x15);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x16);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x17);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x18);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0xc8,0x0,0x19);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1a);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1b);
  UI_Component_Add_Value_to_List_at_22_Logic_7ddc(pvStack_12,uStack_10,0x14,0x0,0x1c);
  if (*(long *)((int)uStack_a + 0x200) == 0x8000002)
  {
    UI_Entity_Summary_Display_ctor_a43e((undefined1 *)CONCAT22(unaff_SS,local_20));
    UI_Entity_Batch_Process_SubObjects_Logic_a89e
              ((u32)CONCAT22(unaff_SS,local_20),(u32 *)((int)(void *)pvStack_6 + 0xc),
               (u16)((ulong)pvStack_6 >> 0x10));
  }
  return;
}



// Scalar deleting destructor for UI build items using the B418 internal cleanup logic.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_33f6(void *this_ptr,byte flags)
{
  UI_Build_Item_Base_dtor_Internal_b418(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Build Item Type 0x34F6. Inherits from Type 0x08EC and sets its own
// vtable.

void * __stdcall16far UI_Build_Item_Type_34F6_ctor_init_3484(void *this_ptr)
{
  UI_Build_Item_Type_08EC_ctor_0068(this_ptr);
  *(undefined2 *)this_ptr = 0x34f6;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x34F6.

void * __stdcall16far
UI_Build_Item_Type_34F6_ctor_with_Params_34a6
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Type_08EC_ctor_with_Params_00cc
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x34f6;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



void * __stdcall16far
UI_Build_Item_Type08EC_dtor_Scalar_Deleting_34d0(void *param_1,byte param_2)
{
  UI_Build_Item_Type_08EC_dtor_Internal_0138(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Build Item Type 0x3608. Initializes base class and sets vtable to
// 0x3608.

void * __stdcall16far UI_Build_Item_Type_3608_ctor_init_355e(void *this_ptr)
{
  UI_Build_Item_Base_ctor_init_b354(this_ptr);
  *(undefined2 *)this_ptr = 0x3608;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Build Item Type 0x3608.

void * __stdcall16far
UI_Build_Item_Type_3608_ctor_with_Params_3580
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Build_Item_Base_ctor_with_Params_b39e(param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x3608;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far const_1_stub_1028_35aa(void)
{
  return 0x1;
}



// Updates an internal property (code 0x35) of the build item's simulator object. Sets
// the value to 0x32 if param_2 is non-zero, otherwise 0.

void __stdcall16far
UI_Build_Item_Update_Internal_Property_35_Logic_35b0(void *this_ptr,int state)
{
  void *pvVar1;
  undefined2 uVar2;
  
  pvVar1 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(this_ptr);
  if (state == 0x0)
  {
    uVar2 = 0x0;
  }
  else
  {
    uVar2 = 0x32;
  }
  UI_Component_Set_List_Value_at_22_Logic_7d1c(pvVar1,uVar2,0x230000);
  return;
}



void * __stdcall16far
UI_Build_Item_Base_dtor_Scalar_Deleting_35e2(void *param_1,byte param_2)
{
  UI_Build_Item_Base_dtor_Internal_b418(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// Constructor for UI Construction Item Type 0x373E. Inherits from Type 0x3E2C and sets
// its own vtable.

void * __stdcall16far UI_Construction_Item_Type_373E_ctor_init_3670(void *this_ptr)
{
  UI_Construction_Item_Type_3E2C_ctor_init_37a6(this_ptr);
  *(undefined2 *)this_ptr = 0x373e;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1028;
  return this_ptr;
}



// Parameterized constructor for UI Construction Item Type 0x373E.

void * __stdcall16far
UI_Construction_Item_Type_373E_ctor_with_Params_3692
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  UI_Construction_Item_Type_3E2C_ctor_with_Params_3816
            (param_1,CONCAT22(param_3,param_2),param_4);
  *(undefined2 *)CONCAT22(param_2,param_1) = 0x373e;
  param_1[0x1] = 0x1028;
  return (undefined2 *)CONCAT22(param_2,param_1);
}



undefined2 __stdcall16far
UI_Build_Item_Sum_Resource_List_28_Check_249(undefined4 param_1,ulong *param_2)
{
  int *piVar1;
  ulong uVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 local_4;
  
  *param_2 = 0x0;
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  if (*(long *)((int)param_1 + 0x28) != 0x0)
  {
    for (local_4 = 0x4; local_4 < 0x1d; local_4 += 0x1)
    {
      pvVar4 = UI_Item_List_Find_Item_FarPtr_Logic
                         (*(undefined4 *)((int)param_1 + 0x28),local_4);
      uVar2 = *param_2;
      *(int *)param_2 = (int)*param_2 + (int)(void *)pvVar4;
      piVar1 = (int *)((int)(ulong *)param_2 + 0x2);
      *piVar1 = *piVar1 + (int)((ulong)pvVar4 >> 0x10) +
                (uint)CARRY2((uint)uVar2,(uint)(void *)pvVar4);
      if (0xf9 < *param_2)
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// Scalar deleting destructor for UI Construction Item Type 0x373E.

void * __stdcall16far
UI_Construction_Item_Type_373E_dtor_Scalar_Deleting_3718(void *this_ptr,byte flags)
{
  UI_Construction_Item_Type_3E2C_dtor_Internal_388e(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Constructor for UI Construction Item Type 0x3E2C. Initializes base class and creates
// an internal UI Item List. Sets vtable to 0x3E2C.

void * __stdcall16far UI_Construction_Item_Type_3E2C_ctor_init_37a6(void *this_ptr)
{
  void *pvVar1;
  int iVar2;
  astruct_331 *uVar3;
  void *pvVar3;
  void *pvVar4;
  undefined2 uVar5;
  undefined2 in_stack_0000fffa;
  
  pvVar4 = (void *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar3 = UI_Build_Item_Base_ctor_init_b354(this_ptr);
  iVar2 = (int)((ulong)pvVar3 >> 0x10);
  *(undefined4 *)((int)pvVar4 + 0x20) = 0x0;
  *(undefined4 *)((int)pvVar4 + 0x24) = 0x0;
  *(undefined4 *)((int)pvVar4 + 0x28) = 0x0;
  *(void ***)this_ptr = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  *(undefined2 *)((int)pvVar4 + 0x2) = 0x1028;
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xa));
  if (iVar2 == 0x0 && pvVar1 == NULL)
  {
    *(undefined4 *)((int)pvVar4 + 0x28) = 0x0;
  }
  else
  {
    pvVar3 = UI_Item_List_ctor_init_logic((void *)CONCAT22(iVar2,pvVar1),0x5,0x5);
    *(undefined2 *)((int)pvVar4 + 0x28) = (void *)pvVar3;
    *(undefined2 *)((int)pvVar4 + 0x2a) = (int)((ulong)pvVar3 >> 0x10);
  }
  return this_ptr;
}
