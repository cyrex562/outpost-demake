/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 8/54
 * Original lines (combined): 30072-33509
 * Boundaries: top-level declarations/definitions only
 */




// Adjusts the vertical scroll position or selection offset of a UI component. It
// destroys currently visible sub-windows, updates the internal offset, and triggers a
// full rebuild of the visible item set. Broadcasts notification type 8.

void __stdcall16far
UI_Component_Adjust_Scroll_Position_and_Rebuild_Logic(void *this,int direction)
{
  int *piVar1;
  undefined4 uVar2;
  int in_stack_00000008;
  undefined2 uStack_4;
  
  if (in_stack_00000008 == 0x0)
  {
    piVar1 = (int *)((int)this + 0x28);
    *piVar1 = *piVar1 + -0xa;
    if (*piVar1 < 0x0)
    {
      *(undefined2 *)((int)this + 0x28) = 0x0;
    }
  }
  else
  {
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x28) + *(int *)((int)this + 0x18)
    ;
  }
  if (*(long *)((int)this + 0x52) != 0x0)
  {
    uStack_4 = 0x0;
    do
    {
      if (*(long *)((int)*(undefined4 *)((int)this + 0x52) + uStack_4 * 0x4) != 0x0)
      {
        uVar2 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + uStack_4 * 0x4)
        ;
        DestroyWindow16(*(HWND16 *)((int)uVar2 + 0x18));
        *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + uStack_4 * 0x4) = 0x0;
      }
      uStack_4 += 0x1;
    } while (uStack_4 < 0xa);
  }
  if (*(int *)((int)this + 0x16) == 0x0)
  {
    UI_Component_Rebuild_SubItems_Internal_Logic(this,(void *)direction);
  }
  else
  {
    UI_Component_Rebuild_SubItems_from_Offset_42_Wrapper(this,(void *)direction);
  }
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,direction);
  return;
}



void __stdcall16far UI_Component_Set_Offsets_28_12_Logic(void *this,long value_12)
{
  undefined2 in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x28) = 0x0;
  *(long *)((int)this + 0x12) = value_12;
  return;
}



void __stdcall16far
UI_Component_Rebuild_SubItems_from_Offset_42_Wrapper(void *this,void *src_obj)
{
  UI_Component_Rebuild_SubItems_Internal_Logic(this,src_obj);
  return;
}



void __stdcall16far
UI_TreeNode_Control_Factory_3680(u16 param_1,u16 param_2,u16 param_3,u32 param_4)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_0000fffa;
  u16 local_4;
  
  pvVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x4a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    UI_TreeNode_Control_ctor_init_c54a(pvVar1,in_DX,0x1,param_3,param_4);
    return;
  }
  return;
}



void * __stdcall16far
UI_Window_Base_dtor_Scalar_Deleting_36b4(void *param_1,u16 param_2,byte param_3)
{
  UI_Window_Base_dtor_36DA_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Recursively builds UI tree structure.
// Tracks depth in global variable 1050:11DE.
// Performs indirect calls through [factory] vtable offset 8.
// Invokes virtual methods at offsets 0xC, 0x10, and 4 of the instantiated items.

void * __stdcall16far
UI_Tree_Builder_Recursive_Logic(void *factory,int index_low,int index_high,void *parent)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 in_stack_0000000c;
  int iStack_c;
  
  uVar11 = *_factory;
  puVar1 = (undefined2 *)((int)uVar11 + 0x8);
  puVar10 = (undefined4 *)(*(code *)*puVar1)();
  uVar4 = (undefined2)((ulong)puVar10 >> 0x10);
  puVar2 = (undefined4 *)puVar10;
  if (puVar10 == NULL)
  {
    return NULL;
  }
  puVar2[0x3] = in_stack_0000000c;
  iVar6 = (int)*puVar10;
  (*(code *)*(undefined2 *)(iVar6 + 0xc))();
  *(int *)((int)factory + 0x14) = *(int *)((int)factory + 0x14) + 0x1;
  (*(code *)*(undefined2 *)(iVar6 + 0x10))();
  iVar6 = (*(code *)*(undefined2 *)(iVar6 + 0x4))();
  if (iVar6 != 0x0)
  {
    puVar1 = (undefined2 *)((int)uVar11 + 0x8);
    uVar11 = (*(code *)*puVar1)();
    uVar5 = (undefined2)((ulong)uVar11 >> 0x10);
    *(int *)(puVar2 + 0x2) = (int)uVar11;
    *(undefined2 *)((int)puVar2 + 0xa) = uVar5;
    PTR_DAT_1050_0000_1050_11de = PTR_DAT_1050_0000_1050_11de + 0x1;
    for (iStack_c = 0x0; iStack_c < iVar6; iStack_c += 0x1)
    {
      pvVar3 = UI_Tree_Builder_Recursive_Logic
                         (factory,index_low,iStack_c,(void *)(iStack_c >> 0xf));
      uVar9 = (undefined2)((ulong)puVar2[0x2] >> 0x10);
      iVar7 = (int)puVar2[0x2];
      iVar8 = iStack_c * 0x4;
      *(undefined2 *)(iVar7 + iVar8) = pvVar3;
      *(undefined2 *)(iVar7 + iVar8 + 0x2) = uVar5;
      if (*(long *)((int)puVar2[0x2] + iVar8) == 0x0) break;
    }
    PTR_DAT_1050_0000_1050_11de = PTR_DAT_1050_0000_1050_11de + -0x1;
  }
  return puVar2;
}



u16 __stdcall16far UI_Object_Get_U16_10_3a86(u32 param_1)
{
  return *(u16 *)((int)param_1 + 0x10);
}



void __stdcall16far UI_Component_Set_Offset_12_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x12) = in_stack_00000008;
  return;
}



u32 __stdcall16far UI_Object_Get_Dword_4_3aaa(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0x6),
                  *(undefined2 *)((int)param_1 + 0x4));
}



void __stdcall16far UI_Object_Set_Fields_12_16_3ac2(u32 param_1,u16 param_2,u32 param_3)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  *(u32 *)((int)param_1 + 0x16) = param_3;
  *(u16 *)((int)param_1 + 0x12) = param_2;
  return;
}



void * __stdcall16far UI_Component_Get_FarPtr_from_Offset_16_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(void **)*(undefined4 *)((int)this + 0x16);
}



// Targeted Scan Finding: Vtable
// Resets UI_Complex_Dialog vtable to 1010:4A46 and 1010:4A82 during destruction.
// Iteratively invokes virtual destructors (vtable index 0) for 16 sub-objects in the
// array at offset 0x26.
// Invokes virtual destructor for resource object at offset 0x66.

void __stdcall16far UI_Complex_Dialog_dtor_4A46(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 in_stack_00000006;
  undefined4 uStack_10;
  int iStack_4;
  
  *_this = 0x4a46;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0x20) = 0x4a82;
  *(undefined2 *)((int)this + 0x22) = 0x1010;
  iStack_4 = 0x0;
  do
  {
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x26);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x28);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      puVar3 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar3)();
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0x10);
  if (*(int *)((int)this + 0x68) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x66) != NULL)
  {
    puVar3 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x66);
    (*(code *)*puVar3)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x70));
  if (_this == NULL)
  {
    puVar4 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar4 = (undefined2 *)((int)this + 0x20);
  }
  uStack_10 = (undefined2 *)CONCAT22(in_stack_00000006,puVar4);
  *uStack_10 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Retrieves a 32-bit value from an internal indexed array starting at offset 0x26.

long __stdcall16far UI_Element_Get_Indexed_Data_at_Offset_26_Logic(void *this)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = *(int *)((int)this + 0x24) * 0x4;
  return CONCAT22(*(undefined2 *)((int)this + iVar1 + 0x28),
                  *(undefined2 *)((int)this + iVar1 + 0x26));
}



void __stdcall16far
UI_Grid_Handle_Notification_4566(int param_1,int param_2,int param_3)
{
  if (param_3 != 0x2)
  {
    return;
  }
  UI_Grid_16_Adjust_Index_Logic_maybe((void *)(param_1 + -0x20));
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(param_1 + -0x20),param_2);
  return;
}



// Bulk rendering routine that iterates through all 16 slots of the UI grid and invokes
// the individual slot renderer.

void __stdcall16far UI_Grid_16_Render_All_Slots_Logic(long this_ref)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  do
  {
    UI_Grid_16_Render_Single_Slot_Logic(this_ref,uStack_4);
    uStack_4 += 0x1;
  } while (uStack_4 < 0x10);
  return;
}



void __stdcall16far UI_Grid_16_Adjust_Index_Logic_maybe(void *this)
{
  int *piVar1;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x6a) == 0x0)
  {
    *(int *)((int)this + 0x24) = *(int *)((int)this + 0x24) + 0x1;
    if (0xf < *(int *)((int)this + 0x24))
    {
      *(undefined2 *)((int)this + 0x24) = 0x0;
      return;
    }
  }
  else
  {
    if (*(int *)((int)this + 0x6a) != 0x4)
    {
      return;
    }
    piVar1 = (int *)((int)this + 0x24);
    *piVar1 = *piVar1 + -0x1;
    if (*piVar1 < 0x0)
    {
      *(undefined2 *)((int)this + 0x24) = 0xf;
    }
  }
  return;
}



void UI_Complex_Dialog_dtor_Wrapper_4994(u16 param_1,int param_2,byte param_3)
{
  UI_Complex_Dialog_scalar_dtor_4A46((void *)(param_2 + -0x20),param_3);
  return;
}



u32 __stdcall16far UI_Object_Get_Ptr_at_10_49a0(int param_1,u16 param_2)
{
  return CONCAT22(param_2,param_1 + 0xa);
}



void * __stdcall16far UI_Component_Get_Handle_at_Offset_18_Logic(void *this)
{
  return (void *)((int)this + 0x18);
}



int __stdcall16far UI_Component_Get_Value_at_Offset_14_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)((int)this + 0x14);
}



void __stdcall16far UI_Component_Set_Value_at_Offset_14_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x14) = in_stack_00000008;
  return;
}



u16 __stdcall16far UI_Object_Get_U16_16_49e0(u32 param_1)
{
  return *(u16 *)((int)param_1 + 0x16);
}



void __stdcall16far UI_Component_Set_Value_at_Offset_16_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x16) = in_stack_00000008;
  return;
}



void __stdcall16far UI_Object_Set_U16_12_4a00(u32 param_1,u16 param_2)
{
  *(u16 *)((int)param_1 + 0x12) = param_2;
  return;
}



u16 __stdcall16far UI_Object_Get_U16_12_4a12(u32 param_1)
{
  return *(u16 *)((int)param_1 + 0x12);
}



void * __stdcall16far UI_Complex_Dialog_scalar_dtor_4A46(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Complex_Dialog_dtor_4A46(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



long __stdcall16far UI_Component_Get_Value_at_Offset_16_Logic_2(void *this)
{
  undefined2 in_stack_00000006;
  
  return CONCAT22(*(undefined2 *)((int)this + 0x18),*(undefined2 *)((int)this + 0x16));
}



// Returns a far pointer to an 8-byte structure (RECT) in the indexed array at offset
// 0x1A based on the current selection index (offset 0x20).

void * __stdcall16far UI_Component_Get_Indexed_Rect_Ptr_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x20) == 0x0)
  {
    return NULL;
  }
  return (void *)(*(int *)((int)this + 0x20) * 0x8 + *(int *)((int)this + 0x1a));
}



void __stdcall16far UI_Component_Invoke_Callback_at_Offset_26_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  Collection_Seek_to_Index_Logic((int)*(undefined4 *)((int)this + 0x26));
  return;
}



// Iterates through the collection of RECTs at offset 0x1A and performs a `PtInRect`
// check against the provided coordinates. Updates the current selection index (offset
// 0x20) and returns the 1-based index of the hit item.

int __stdcall16far UI_Component_HitTest_Rect_Array_Logic(void *this,int x,int y)
{
  bool bVar1;
  BOOL16 BVar2;
  int16_t in_stack_0000000a;
  undefined2 uStack_c;
  undefined2 uStack_a;
  undefined4 uStack_8;
  
  uStack_8._2_2_ = y;
  uStack_8._0_2_ = in_stack_0000000a;
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)((int)this + 0x20);
  bVar1 = false;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  uStack_c = 0x0;
  uStack_a = 0x0;
  do
  {
    if (*(int *)((int)this + 0x30) <= uStack_c)
    {
LAB_1010_4e67:
      if (uStack_a != 0x0)
      {
        *(int *)((int)this + 0x20) = uStack_a;
      }
      if (bVar1)
      {
        return uStack_a + 0x1;
      }
      return 0x0;
    }
    BVar2 = PtInRect(uStack_8,(void *)CONCAT22((int)((ulong)*(undefined4 *)
                                                             ((int)this + 0x1a) >> 0x10)
                                               ,(void *)((int)*(undefined4 *)
                                                               ((int)this + 0x1a) +
                                                        uStack_c * 0x8)));
    if (BVar2 != 0x0)
    {
      uStack_a = uStack_c;
      bVar1 = true;
      goto LAB_1010_4e67;
    }
    uStack_c += 0x1;
  } while( true );
}



void __stdcall16far UI_Component_Notify_Listeners_Type_D_Logic(void *this)
{
  int in_stack_00000006;
  
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,in_stack_00000006);
  return;
}



// Returns standard dialog dimensions (width 0x73, height 10) through output pointers.

void __stdcall16far get_standard_dialog_size_logic(int *width_out,int *height_out)
{
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_0000000c = 0xa;
  *in_stack_00000008 = 0x73;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes UI_Special_Dialog_Subclass vtable to 1010:5099. Registers global instance
// at 1050:4230. Loads resource ID 0x1B3.

void __stdcall16far
UI_Special_Dialog_Subclass_ctor_init_5099(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(char **)CONCAT22(segment,this) =
       (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_5099 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x1b3);
  _p_GlobalPaletteObject = (void *)CONCAT22(segment,this);
  return;
}



// Scalar deleting destructor for the specialized dialog subclass (5099).

void * __stdcall16far UI_Special_Dialog_Subclass_scalar_dtor_5099(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  Build_Site_Object_dtor_Internal(_this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void __stdcall16far UI_Set_Entity_ID_at_Offset_12_by_Name_Logic(void *this,char *name)
{
  long lVar1;
  
  lVar1 = UI_Find_Entity_ID_by_Formatted_Name_Logic(this,name);
  *(undefined2 *)((int)this + 0x12) = (int)lVar1;
  *(undefined2 *)((int)this + 0x14) = (int)((ulong)lVar1 >> 0x10);
  return;
}



void __stdcall16far UI_Set_Entity_ID_at_Offset_16_by_Name_Logic(void *this,char *name)
{
  long lVar1;
  
  lVar1 = UI_Find_Entity_ID_by_Formatted_Name_Logic(this,name);
  *(undefined2 *)((int)this + 0x16) = (int)lVar1;
  *(undefined2 *)((int)this + 0x18) = (int)((ulong)lVar1 >> 0x10);
  return;
}



// Retrieves a far pointer to an 8-byte structure within an indexed array at offset
// 0x22, provided the status fields at 0x26/0x28 are non-zero.

void * __stdcall16far
UI_Component_Get_Indexed_Struct_at_Offset_22_Logic(void *this,int index)
{
  int in_stack_0000000a;
  
  if ((*(int *)((int)this + in_stack_0000000a * 0x8 + 0x26) == 0x0) &&
     (*(int *)((int)this + in_stack_0000000a * 0x8 + 0x28) == 0x0))
  {
    return NULL;
  }
  return (void *)((int)this + in_stack_0000000a * 0x8 + 0x22);
}



// Sets two 32-bit values within an indexed structure array at offset 0x22.

void __stdcall16far
UI_Component_Set_Indexed_Struct_at_Offset_22_Logic(void *this,long *data,int index)
{
  undefined4 *in_stack_0000000a;
  undefined2 in_stack_0000000c;
  int in_stack_0000000e;
  
  *(undefined4 *)((int)this + in_stack_0000000e * 0x8 + 0x22) = *in_stack_0000000a;
  *(undefined4 *)((int)this + in_stack_0000000e * 0x8 + 0x26) = in_stack_0000000a[0x1];
  return;
}



void __stdcall16far UI_Component_Set_Offset_76_to_5_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *(undefined4 *)((int)this + 0x76) = 0x5;
  return;
}



// Restores the selection or state index from the backup field at 0x7C to 0x20 if the
// 'dirty' flag at 0x7E is set.

void __stdcall16far UI_Component_Restore_State_from_Offset_7C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x7e) != 0x0)
  {
    *(undefined2 *)((int)this + 0x20) = *(undefined2 *)((int)this + 0x7c);
  }
  return;
}
