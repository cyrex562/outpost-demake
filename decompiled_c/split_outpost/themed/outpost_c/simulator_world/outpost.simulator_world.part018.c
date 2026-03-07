/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 18/56
 * Original lines (combined): 54458-57219
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal child component of the Colony Summary View. Initializes
// with Resource ID 0x26 and sets vtable to 0xE5D0.

long __stdcall16far
UI_Colony_Summary_Child_Component_ctor_init_logic_Res26_e4f2
          (int offset,int segment,int id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)CONCAT22(segment,offset),id);
  *(undefined4 *)(offset + 0x14) = 0x0;
  *(undefined2 *)CONCAT22(segment,offset) = 0xe5d0;
  *(undefined2 *)(offset + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x26);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)(offset + 0x14) = (int)lVar3;
  *(undefined2 *)(offset + 0x16) = uVar2;
  *(undefined2 *)(offset + 0x6) = *(undefined2 *)(offset + 0x14);
  *(undefined2 *)(offset + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)(offset + 0x14) + 0xa) + 0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)(offset + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)CONCAT22(segment,offset));
  return CONCAT22(segment,offset);
}



// Internal destructor for the Colony Summary child component. Releases internal
// resource IDs.

void __stdcall16far
UI_Colony_Summary_Child_Component_dtor_Internal_Cleanup_logic_e57a(long this_ref)
{
  astruct_406 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  uVar1 = (astruct_406 *)this_ref;
  *(undefined2 *)this_ref = 0xe5d0;
  uVar1->field2_0x2 = 0x1018;
  if (uVar1->field19_0x14 != 0x0)
  {
    Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar1->field19_0x14);
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// Scalar deleting destructor for the Colony Summary child component.

long __stdcall16far
UI_Colony_Summary_Child_Component_dtor_Scalar_Deleting_e5aa(long this_ref,byte flags)
{
  UI_Colony_Summary_Child_Component_dtor_Internal_Cleanup_logic_e57a(this_ref);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ref);
  }
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Planet Info Panel (Resource 10). Initializes base object and
// loads relevant graphics.

long __stdcall16far
UI_Planet_Info_Panel_ctor_init_logic_Res10(long this_ref,int id1,int id2)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,id1);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  *(undefined2 *)this_ref = 0xe912;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1018;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0xa);
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the Colony Summary Panel. Initializes base object, loads Resource
// 0x28 (Colony info) and 0x32 (Toolbar/Icons). Sets up initial child control state.

long __stdcall16far
UI_Colony_Summary_Panel_ctor_init_logic_Res28_Res32_e91e
          (astruct_400 *param_1,undefined2 param_2,void *param_3)
{
  undefined2 *puVar1;
  u16 *puVar2;
  uint16_t uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  astruct_400 *uVar5;
  
  uVar5 = (astruct_400 *)param_1;
  iVar6 = (int)((ulong)param_1 >> 0x10);
  UI_Panel_Base_ctor_init_logic_7f7a
            (param_1,(void *)CONCAT22(param_2,(void *)((int)(undefined **)
                                                            &p_CurrentHeapContext + 0x1)
                                     ),param_3);
  uVar5->field233_0xee = 0x0;
  (&uVar5->field234_0xf2)[0x0] = 0x0;
  (&uVar5->field234_0xf2)[0x1] = 0x0;
  uVar5->field236_0xf6 = NULL;
  *(undefined2 *)param_1 = 0xebd0;
  uVar5->field2_0x2 = 0x1018;
  uVar5->field225_0xe2 = 0xec6c;
  uVar5->field226_0xe4 = 0x1018;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  uVar3 = (uint16_t)((ulong)lVar5 >> 0x10);
  uVar5->field234_0xf2 = (uint16_t)lVar5;
  uVar5->field235_0xf4 = uVar3;
  uVar5->field227_0xe6 = uVar5->field234_0xf2;
  uVar5->field228_0xe8 = uVar3;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x32);
  *(int *)&uVar5->field236_0xf6 = (int)lVar5;
  *(undefined2 *)((int)&uVar5->field236_0xf6 + 0x2) = (int)((ulong)lVar5 >> 0x10);
  if (iVar6 == 0x0 && uVar5 == NULL)
  {
    puVar2 = NULL;
    iVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar5->field225_0xe2;
    iVar4 = iVar6;
  }
  puVar1 = (undefined2 *)((int)*uVar5->field236_0xf6 + 0x4);
  (*(code *)*puVar1)(0x1010,(u32 *)uVar5->field236_0xf6,
                     (int)((ulong)uVar5->field236_0xf6 >> 0x10),0xb,puVar2,iVar4);
  return (long)param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal component of the Planet Surface View. Initializes with
// Resource ID 0x28 and sets vtable to 0x1CC.

long __stdcall16far
UI_Planet_Surface_Child_Component_ctor_init_logic_Res28_ec74(long this_ref,int id)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 extraout_DX;
  undefined2 uVar6;
  long lVar7;
  undefined2 uVar8;
  
  UI_SubComponent_Grid_ctor_init_921c((void *)this_ref,id);
  *(undefined4 *)((int)this_ref + 0x14) = 0x0;
  zero_init_struct_6bytes((void *)((int)this_ref + 0x18));
  zero_init_struct_6bytes((void *)((int)this_ref + 0x1e));
  *(undefined4 *)((int)this_ref + 0x24) = 0x0;
  *(undefined2 *)this_ref = 0x1cc;
  *(undefined2 *)((int)this_ref + 0x2) = 0x1020;
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  uVar5 = (undefined2)((ulong)lVar7 >> 0x10);
  *(undefined2 *)((int)this_ref + 0x14) = (int)lVar7;
  *(undefined2 *)((int)this_ref + 0x16) = uVar5;
  uVar8 = 0x0;
  uVar4 = *(undefined2 *)((int)this_ref + 0x14);
  puVar2 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ref + 0x14) + 0x4);
  lVar7 = this_ref;
  (*(code *)*puVar2)();
  *(undefined4 *)((int)this_ref + 0x6) = *(undefined4 *)((int)this_ref + 0x14);
  uVar6 = extraout_DX;
  win16_Copy_Struct_6Bytes_Wrapper
            ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  pvVar3 = UI_Element_Get_FarPtr_at_Offset_1C_Logic
                     ((void *)(void *)*(undefined4 *)((int)this_ref + 0x14));
  *(undefined2 *)((int)this_ref + 0x24) = pvVar3;
  *(undefined2 *)((int)this_ref + 0x26) = uVar6;
  puVar1 = (undefined4 *)
           *(undefined4 *)((int)*(undefined4 *)((int)this_ref + 0x14) + 0xa);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x8);
  uVar4 = (*(code *)*puVar2)(0x1010,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),
                             CONCAT22(this_ref._2_2_,(int)this_ref + 0xa),uVar4,uVar5,
                             uVar8,lVar7);
  *(undefined2 *)((int)this_ref + 0x12) = uVar4;
  UI_SubComponent_Grid_Draw_Logic_9364((void *)this_ref);
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  copy_struct_6bytes((void *)((int)this_ref + 0x1e),this_ref._2_2_);
  add_3int_vectors((int *)((int)this_ref + 0x18),this_ref._2_2_);
  return this_ref;
}



// Internal destructor for the Planet Surface child component. Releases internal
// resource IDs.

void __stdcall16far
UI_Planet_Surface_Child_Component_dtor_Internal_Cleanup_logic_ed98(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ref >> 0x10);
  iVar1 = (int)this_ref;
  *(undefined2 *)this_ref = 0x1cc;
  *(undefined2 *)(iVar1 + 0x2) = 0x1020;
  if (*(long *)(iVar1 + 0x14) != 0x0)
  {
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x14),this_ref);
    Resource_Manager_Check_ID_Wrapper_Logic
              ((void *)(void *)*(undefined4 *)(iVar1 + 0x14));
  }
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4((void *)this_ref);
  return;
}



// WARNING: Variable defined which should be unmapped: local_b6
// WARNING: Variable defined which should be unmapped: local_be

void __stdcall16far UI_Planet_View_Surface_OnPaint_Logic_0000(u32 param_1)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int iVar5;
  int *out1;
  undefined2 uVar6;
  int unaff_SS;
  undefined1 local_c4 [0x6];
  u32 local_be;
  u16 local_b8;
  u16 local_b6;
  u16 local_b4;
  u16 local_b2;
  undefined1 auStack_b0 [0x2];
  int aiStack_ae [0x3b];
  u16 local_38;
  u16 local_30;
  u32 local_2e;
  u16 local_2a;
  u16 local_28;
  u32 local_26;
  undefined1 local_22 [0x20];
  
                // Segment:    5
                // Offset:     00033420
                // Length:     efba
                // Min Alloc:  efba
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  out1 = (int *)(param_1 >> 0x10);
  iVar5 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar5 + 0x4));
  local_26 = *(u32 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0xa);
  piVar4 = out1;
  unpack_word_pair((void *)(iVar5 + 0x18),out1,(int *)&local_2a);
  uVar6 = 0x1008;
  Bitmap_Object_Blit_Transparent_Logic
            ((void *)local_26,(void *)(local_26 >> 0x10),(void *)(iVar5 + 0x18));
  local_2e = 0x0;
  for (local_30 = 0x0; (int)local_30 < 0x6; local_30 += 0x1)
  {
    uVar6 = 0x1010;
    UI_Planet_View_Copy_State_Table_Entry_Logic_maybe
              ((int)*(undefined4 *)(iVar5 + 0x14),
               (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10),local_30,&local_b4,
               unaff_SS);
    if (local_b4 == 0x0)
    {
      for (local_38 = 0x0; (int)local_38 <= (int)local_b2; local_38 = local_38 + 0x1)
      {
        iVar2 = local_38 * 0x6;
        local_b8 = (u16)(auStack_b0 + iVar2);
        if (*(int *)(auStack_b0 + iVar2 + 0x4) != 0x0)
        {
          pvVar3 = UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic
                             ((void *)(void *)*(undefined4 *)(iVar5 + 0x14),
                              (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10));
          local_2e = CONCAT22(piVar4,pvVar3);
          pack_3words_alt(&local_be,unaff_SS,0x0,
                          *(int *)(auStack_b0 + iVar2 + 0x2) + local_2a);
          uVar6 = 0x1008;
          Bitmap_Object_Blit_Transparent_Logic
                    ((void *)local_26,(void *)(local_26 >> 0x10),&local_be);
        }
      }
    }
    else
    {
      local_be = CONCAT22(unaff_SS,auStack_b0 + local_b2 * 0x6);
      if (*(int *)(auStack_b0 + local_b2 * 0x6 + 0x4) != 0x0)
      {
        pvVar3 = UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic
                           ((void *)(void *)*(undefined4 *)(iVar5 + 0x14),
                            (int)((ulong)*(undefined4 *)(iVar5 + 0x14) >> 0x10));
        local_2e = CONCAT22(piVar4,pvVar3);
        pack_3words_alt(local_c4,unaff_SS,0x0,*(int *)((int)local_be + 0x2) + local_2a);
        uVar6 = 0x1008;
        Bitmap_Object_Blit_Transparent_Logic
                  ((void *)local_26,(void *)(local_26 >> 0x10),local_c4);
      }
    }
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)local_26 + 0x4);
  (*(code *)*puVar1)(uVar6,(int)local_26,(int)(local_26 >> 0x10),0x0,0x0,iVar5 + 0xa,
                     out1);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar5 + 0x4));
  return;
}



void * __stdcall16far
UI_Planet_Surface_Child_Component_dtor_Scalar_Deleting_01a6(void *param_1,byte param_2)
{
  UI_Planet_Surface_Child_Component_dtor_Internal_Cleanup_logic_ed98((long)param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 1 (Resource ID 1). Initializes base object and sets
// vtable to 0x75A. Loads additional viewport data from resource 0x48.

void * __stdcall16far
UI_Control_Type1_ctor_init_Res1_logic_04f6(void *this,int parent_id)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *out1;
  long lVar4;
  undefined2 in_stack_00000008;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0x75a;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x1);
  uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
  *(undefined2 *)((int)this + 0x6) = (int)lVar4;
  *(undefined2 *)((int)this + 0x8) = uVar3;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x6) + 0x4);
  (*(code *)*puVar1)(0x1010,*(undefined2 *)((int)this + 0x6),uVar3,0x0,this,parent_id);
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  out1 = (int *)((ulong)lVar4 >> 0x10);
  iVar2 = (int)lVar4;
  *(undefined2 *)((int)this + 0xa) = *(undefined2 *)(iVar2 + 0xa);
  *(undefined2 *)((int)this + 0xc) = *(undefined2 *)(iVar2 + 0xc);
  unpack_word_pair((void *)(iVar2 + 0xe),out1,(int *)((int)this + 0x10));
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 7 (Resource ID 7). Initializes base object and sets
// vtable to 0xDBC. Loads additional resource info from resource 0x48.

void * __stdcall16far
UI_Control_Type7_ctor_init_Res7_logic_0baa(void *this,int parent_id)
{
  long lVar1;
  undefined2 in_stack_00000008;
  int *out2;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = in_stack_00000008;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *_this = 0xdbc;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x7);
  *(undefined2 *)((int)this + 0x6) = (int)lVar1;
  *(undefined2 *)((int)this + 0x8) = (int)((ulong)lVar1 >> 0x10);
  out2 = (int *)((int)this + 0xc);
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  return this;
}



// Scalar deleting destructor for objects using the base vtable at 0x3AB0.

void * __stdcall16far Base_Object_dtor_Scalar_Deleting_v3ab0_0d82(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Cleans up internal GDI icons and resource-managed bitmaps for a UI component.

void __stdcall16far UI_Component_Internal_Resource_Cleanup_logic(long context)
{
  u32 *puVar1;
  int iVar2;
  astruct_386 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  uVar3 = (astruct_386 *)context;
  DestroyIcon16(uVar3->field193_0xc2);
  uVar3->field193_0xc2 = 0x0;
  uVar3->field8_0x8 = 0x0;
  puVar1 = uVar3->field241_0xf6;
  iVar2 = uVar3->field242_0xf8;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1538,puVar1,iVar2,0x1);
  }
  (&uVar3->field241_0xf6)[0x0] = NULL;
  (&uVar3->field241_0xf6)[0x1] = NULL;
  Resource_Manager_Check_ID_Wrapper_Logic((void *)(void *)uVar3->field240_0xf2);
  uVar3->field240_0xf2 = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for an internal sub-component of the PC popup menu. Sets up GDI contexts
// and realizes palettes.

long __stdcall16far
UI_PC_PopupMenu_Internal_SubComponent_ctor(long this_ref,long parent)
{
  void *pvVar1;
  undefined2 *puVar2;
  HDC16 HVar3;
  HPALETTE16 HVar4;
  int iVar5;
  undefined2 uVar6;
  long lVar7;
  void *pvVar8;
  
  UI_SubComponent_Base_ctor_init_metrics_7c1a((void *)this_ref,(void *)parent);
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  iVar5 = (int)this_ref;
  *(undefined4 *)(iVar5 + 0x14) = 0x0;
  *(undefined4 *)(iVar5 + 0x18) = 0x0;
  zero_init_struct_6bytes((void *)(iVar5 + 0x1e));
  *(undefined2 *)this_ref = 0x1730;
  *(undefined2 *)(iVar5 + 0x2) = 0x1020;
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2d);
  *(undefined2 *)(iVar5 + 0x14) = (int)lVar7;
  *(undefined2 *)(iVar5 + 0x16) = (int)((ulong)lVar7 >> 0x10);
  lVar7 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x14) + 0x4);
  (*(code *)*puVar2)();
  HVar3 = GetDC16(*(HWND16 *)(iVar5 + 0x4));
  *(HDC16 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0x7c) = HVar3;
  *(undefined4 *)(iVar5 + 0x18) =
       *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0x14) + 0x66);
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x18) + 0x14);
  pvVar8 = (void *)(*(code *)*puVar2)();
  pvVar1 = (void *)*(undefined4 *)((int)lVar7 + 0xe);
  Palette_Object_Copy_From_Other_Logic((void *)pvVar8,(void *)((ulong)pvVar8 >> 0x10));
  HVar4 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar1,(HDC16)((ulong)pvVar1 >> 0x10));
  *(HPALETTE16 *)(iVar5 + 0x1c) = HVar4;
  return this_ref;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Colony_Morale_Dialog_Initialize_and_Layout_179c(void *param_1)
{
  undefined2 *puVar1;
  int iVar2;
  void *pvVar3;
  int16_t iVar4;
  HWND16 hwnd;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  int16_t *piVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *pvVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined2 uVar12;
  void *this_ptr;
  undefined2 uVar13;
  undefined1 local_178 [0x102];
  int16_t local_76;
  int iStack_74;
  undefined4 local_72;
  int local_6e;
  int iStack_6c;
  undefined4 local_6a;
  HWND16 local_66;
  int16_t local_62;
  int16_t local_5e;
  void *local_4e;
  uint local_4c;
  int local_4a;
  int iStack_48;
  HWND16 local_46;
  int local_44;
  int iStack_42;
  undefined4 local_40;
  void *local_3c;
  undefined2 uStack_3a;
  undefined2 local_38;
  undefined4 *local_36;
  void *local_32;
  undefined1 local_2e [0x12];
  int local_1c;
  int iStack_1a;
  undefined4 local_18;
  int local_14;
  int local_12;
  int local_10;
  undefined2 uStack_e;
  int16_t *local_c;
  uint local_8;
  void *local_6;
  int iStack_4;
  
  this_ptr = (void *)param_1;
  uVar13 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  pvVar9 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x9);
  iStack_4 = (int)((ulong)pvVar9 >> 0x10);
  local_6 = (void *)pvVar9;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  local_8 = (uint)(iVar2 == 0x0);
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  if (iVar2 != 0x0)
  {
    local_8 = 0x0;
  }
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar12 = (undefined2)((ulong)lVar10 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x8e) = (int)lVar10;
  *(undefined2 *)((int)this_ptr + 0x90) = uVar12;
  uVar8 = *(undefined2 *)((int)this_ptr + 0x8e);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x8e) + 0x10);
  (*(code *)*puVar1)(0x1010,uVar8,uVar12,local_8);
  uVar5 = extraout_DX;
  local_4e = allocate_memory(CONCAT22(uVar8,0x12));
  uVar6 = uVar5 | (uint)local_4e;
  local_4c = uVar5;
  if (uVar6 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  }
  else
  {
    pvVar3 = UI_Control_Type7_ctor_init_Res39_1eea
                       (local_4e,(long)param_1,*(int *)((int)this_ptr + 0x6));
    *(undefined2 *)((int)this_ptr + 0x92) = pvVar3;
    *(uint *)((int)this_ptr + 0x94) = uVar6;
  }
  local_c = (int16_t *)
            CONCAT22((int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (int16_t *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0xa));
  lVar10 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uStack_e = (undefined2)((ulong)lVar10 >> 0x10);
  local_10 = (int)lVar10;
  GetClientRect16((int *)CONCAT22(unaff_SS,&local_1c),*(HWND16 *)((int)this_ptr + 0x6));
  uVar12 = 0x4;
  iVar4 = GetSystemMetrics16(0x4);
  uVar8 = (undefined2)((ulong)local_c >> 0x10);
  piVar7 = (int16_t *)local_c;
  piVar7[0x3] = iVar4 + local_18._2_2_;
  local_12 = *(int *)(local_10 + 0xa);
  local_14 = *(int *)(local_10 + 0xc);
  piVar7[0x1] = (local_14 - piVar7[0x3]) / 0x2;
  *local_c = (local_12 - piVar7[0x2]) / 0x2;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_2e),0x1,0x0,0x100);
  local_38 = 0x0;
  while( true )
  {
    local_32 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_2e));
    iVar2 = (int)((ulong)local_32 >> 0x10);
    if (iVar2 == 0x0 && (void *)local_32 == NULL) break;
    local_36 = (undefined4 *)*(long *)((int)(void *)local_32 + 0x10);
    if (local_36 != NULL)
    {
      strcat_append((char *)CONCAT22(uVar13,(char *)((int)this_ptr + 0x10)),
                    (char *)*local_36);
    }
  }
  iVar2 = UI_Colony_Morale_Dialog_Check_State_Logic(this_ptr);
  *(int *)((int)this_ptr + 0x96) = iVar2;
  iVar2 = Resource_Category_Get_Mapped_Offset_Value_Logic(local_6,iStack_4);
  if ((iVar2 == 0x0) || (*(int *)((int)this_ptr + 0x96) != 0x0))
  {
    *(undefined2 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + 0x2c) = 0x0;
    puVar11 = (undefined1 *)0x1010;
    local_66 = GetDlgItem16(0x175,*(short *)((int)this_ptr + 0x6));
    if (local_8 != 0x0)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_178,0x100),CONCAT22(0x72d,unaff_SS));
      puVar11 = local_178;
      SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar11),local_66);
    }
    pvVar9 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                                (void *)CONCAT22(puVar11,(void *)0x1020));
    uStack_3a = (undefined2)((ulong)pvVar9 >> 0x10);
    local_3c = (void *)pvVar9;
    GetWindowRect16((int *)CONCAT22(unaff_SS,&local_6e),local_66);
    local_72 = local_6a;
    local_62 = (int)local_6a - local_6e;
    local_5e = local_6a._2_2_ - iStack_6c;
    local_76 = -(local_62 - ((int16_t *)local_c)[0x2]) / 0x2;
    iStack_74 = iStack_6c;
    iVar4 = GetSystemMetrics16(0x4);
    iStack_74 -= iVar4;
    MoveWindow16(0x0,local_5e,local_62,iStack_74,local_76,local_66);
  }
  else
  {
    media_play_from_full_resource_ptr_logic((void *)_p_UIPanelContainer,0x9d0001);
    *(int *)((int)this_ptr + 0x8c) = iVar2;
    pvVar9 = MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                                (void *)CONCAT22(uVar12,(void *)0x1020));
    uStack_3a = (undefined2)((ulong)pvVar9 >> 0x10);
    local_3c = (void *)pvVar9;
  }
  EnumChildWindows16(NULL,(void *)CONCAT22(uStack_3a,local_3c),
                     *(HWND16 *)((int)this_ptr + 0x6));
  FreeProcInstance16((void *)CONCAT22(uStack_3a,local_3c));
  local_46 = GetDlgItem16(0x1,*(short *)((int)this_ptr + 0x6));
  GetWindowRect16((int *)CONCAT22(unaff_SS,&local_1c),local_46);
  local_40 = local_18;
  iVar2 = (int)local_18 - local_1c;
  _local_4a = CONCAT22(iVar2,local_18._2_2_ - iStack_1a);
  local_44 = -(iVar2 - ((int16_t *)local_c)[0x2]) / 0x2;
  iStack_42 = iStack_1a;
  iVar4 = GetSystemMetrics16(0x4);
  iStack_42 -= iVar4;
  uVar8 = unaff_SS;
  if (*(int *)((int)this_ptr + 0x96) == 0x0)
  {
    if (local_8 == 0x0) goto LAB_1020_1b24;
    hwnd = 0x72e;
    puVar11 = local_178;
    uVar12 = 0x100;
  }
  else
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_178,0x100),
               CONCAT22(0x72f,unaff_SS));
    hwnd = GetDlgItem16(0x175,*(short *)((int)this_ptr + 0x6));
    puVar11 = local_178;
    SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar11),hwnd);
    uVar12 = 0x3fe;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(puVar11,uVar12),
             CONCAT22(hwnd,uVar8));
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,local_178),local_46);
LAB_1020_1b24:
  MoveWindow16(0x0,(int16_t)_local_4a,(int16_t)((ulong)_local_4a >> 0x10),iStack_42,
               local_44,local_46);
  uVar8 = (undefined2)((ulong)local_c >> 0x10);
  piVar7 = (int16_t *)local_c;
  SetWindowPos16(0x44,piVar7[0x3],piVar7[0x2],piVar7[0x1],*local_c,0x0,
                 *(HWND16 *)((int)this_ptr + 0x6));
  return;
}



// Internal destructor for the Colony Morale Dialog. Cleans up internal objects and
// refreshes morale logic.

void __stdcall16far UI_Colony_Morale_Dialog_dtor_Internal(long this_ref)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ref >> 0x10);
  iVar2 = (int)this_ref;
  if (*(int *)(iVar2 + 0x94) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0x92) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0x92);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0x92) = 0x0;
  UI_Colony_Morale_Dialog_Refresh_Logic((void *)(void *)*(undefined4 *)(iVar2 + 0x8e));
  *(undefined4 *)(iVar2 + 0x8e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for UI Control Type 7, specifically initialized with Resource ID 0x39.
// Sets vtable to 0x2518.

void * __stdcall16far
UI_Control_Type7_ctor_init_Res39_1eea(void *this,long parent_id,int id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *_this = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(int *)((int)this + 0x4) = id;
  *_this = (char *)s_0_020_1050_3ab0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(long *)((int)this + 0xa) = parent_id;
  *_this = (char *)s_218_bmp_1050_2516 + 0x2;
  *(undefined2 *)((int)this + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x39);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0x6) = (int)lVar3;
  *(undefined2 *)((int)this + 0x8) = uVar2;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x6) + 0x4);
  (*(code *)*puVar1)(0x1010,*(undefined2 *)((int)this + 0x6),uVar2,0x0,this,
                     in_stack_00000006);
  return this;
}
