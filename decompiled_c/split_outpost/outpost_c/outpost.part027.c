/*
 * Source: outpost.c
 * Chunk: 27/117
 * Original lines: 29966-31145
 * Boundaries: top-level declarations/definitions only
 */




// Adds a new sub-window to the tracked collection (offset 0x2A). It handles window
// positioning (FUN_1040_93AA), duplicate detection, and optional cleanup of old
// windows. Broadcasts notifications (types 8, 9, 10) to signal state changes.

void __stdcall16far
UI_Window_Manager_Add_and_Focus_SubWindow_Logic(void *param_1,int param_2,void *param_3)
{
  undefined4 uVar1;
  bool bVar2;
  ushort uVar3;
  void *this;
  int iVar4;
  int iVar5;
  void *src_obj;
  undefined2 uVar6;
  void *this_ptr;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  
  this_ptr = (void *)param_3;
  iVar4 = (int)((ulong)param_3 >> 0x10);
  uVar3 = UI_TreeNode_Get_Linked_Entity_ID_c60e(this_ptr);
  src_obj = (void *)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  *(ushort *)((int)this + 0x12) = uVar3;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  iStack_6 = 0x0;
  bVar2 = false;
  *(undefined2 *)((int)this + 0x28) = 0x0;
  iStack_8 = 0x0;
  do
  {
    if (*(int *)((int)this + 0x16) <= iStack_8)
    {
LAB_1010_30ad:
      iStack_8 = iStack_6;
      if (bVar2)
      {
        while (iStack_8 += 0x1, iStack_8 < *(int *)((int)this + 0x16))
        {
          uVar1 = *(undefined4 *)((int)this + iStack_8 * 0x4 + 0x2a);
          DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
          *(undefined4 *)((int)this + iStack_8 * 0x4 + 0x2a) = 0x0;
        }
        *(int *)((int)this + 0x16) = iStack_6 + 0x1;
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      else
      {
        iVar5 = *(int *)((int)this + 0x16) * 0x4;
        *(undefined2 *)((int)this + iVar5 + 0x2a) = this_ptr;
        *(int *)((int)this + iVar5 + 0x2c) = iVar4;
        iStack_a = 0xa;
        *(int *)((int)this + 0x16) = *(int *)((int)this + 0x16) + 0x1;
        if (0x1 < *(int *)((int)this + 0x16))
        {
          uVar1 = *(undefined4 *)((int)this + *(int *)((int)this + 0x16) * 0x4 + 0x22);
          iVar5 = (int)uVar1;
          uVar6 = (undefined2)((ulong)uVar1 >> 0x10);
          iStack_a = *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24) + 0x8;
        }
        UI_Window_Move_and_Update_93aa(this_ptr,iVar4,iStack_a);
      }
      if (!bVar2)
      {
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      if (param_2 == 0x0)
      {
        if (*(long *)((int)this + 0x52) != 0x0)
        {
          iStack_8 = 0x0;
          do
          {
            uVar6 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
            iVar4 = (int)*(undefined4 *)((int)this + 0x52);
            if ((*(long *)(iVar4 + iStack_8 * 0x4) != 0x0) &&
               ((void *)*(long *)(iVar4 + iStack_8 * 0x4) != param_3))
            {
              uVar1 = *(undefined4 *)
                       ((int)*(undefined4 *)((int)this + 0x52) + iStack_8 * 0x4);
              DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
            }
            *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_8 * 0x4) =
                 0x0;
            iStack_8 += 0x1;
          } while (iStack_8 < 0xa);
        }
        UI_Component_Rebuild_SubItems_from_Offset_42_Wrapper(this,src_obj);
        UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)src_obj);
      }
      return;
    }
    if ((void *)*(long *)((int)this + iStack_8 * 0x4 + 0x2a) == param_3)
    {
      bVar2 = true;
      iStack_6 = iStack_8;
      goto LAB_1010_30ad;
    }
    iStack_8 += 0x1;
  } while( true );
}



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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Core UI rebuild engine performing extensive vtable calls:
// - [this] offset 0x24 (Pre-rebuild check)
// - [puStack0008] offset 4 (Get count)
// - [this] offset 0x1C (Instantiate item).
// References global heap context at 1050:5F2C.
// Allocates a 10-slot (0x28 byte) sub-window tracking array.
// Outputs debug string "Overflow on node %d" (1050:11CA).

void __stdcall16far
UI_Component_Rebuild_SubItems_Internal_Logic(void *this,void *src_node)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined *heap_ctx;
  void *pvVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_CS;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puStack0008;
  int iStack000a;
  undefined4 uStack_30;
  int iStack_10;
  int iStack_c;
  
  if (*(long *)((int)this + 0x52) != 0x0)
  {
    unaff_CS = 0x1000;
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x52));
    *(undefined4 *)((int)this + 0x52) = 0x0;
    *(undefined2 *)((int)this + 0x18) = 0x0;
  }
  if ((iStack000a != 0x0 || puStack0008 != NULL) &&
     (puVar4 = (undefined2 *)((int)*_this + 0x24),
     iVar5 = (*(code *)*puVar4)(unaff_CS,this,src_node,_puStack0008), iVar5 != 0x0))
  {
    puVar4 = (undefined2 *)((int)*_puStack0008 + 0x4);
    uVar12 = (*(code *)*puVar4)(unaff_CS,puStack0008,iStack000a);
    puVar7 = (undefined *)((ulong)uVar12 >> 0x10);
    *(int *)((int)this + 0x18) = (int)uVar12;
    if ((int)uVar12 != 0x0)
    {
      *(undefined2 *)((int)this + 0x24) = 0x0;
      *(undefined2 *)((int)this + 0x26) = 0x0;
      *(int *)((int)this + 0x18) =
           *(int *)((int)this + 0x18) - *(int *)((int)this + 0x28);
      if (0xa < *(int *)((int)this + 0x18))
      {
        *(undefined2 *)((int)this + 0x26) = 0x1;
        *(undefined2 *)((int)this + 0x18) = 0xa;
      }
      if (0x1 < *(int *)((int)this + 0x28))
      {
        *(undefined2 *)((int)this + 0x24) = 0x1;
      }
      if (_g_AllocatedBlock_Offset == NULL)
      {
        heap_ctx = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        heap_ctx = g_AllocatedBlock_Offset;
      }
      uVar11 = 0x1000;
      pvVar6 = alloc_with_hooks(0x28,0x1,heap_ctx);
      *(undefined2 *)((int)this + 0x52) = pvVar6;
      *(undefined2 *)((int)this + 0x54) = puVar7;
      if (*(int *)((int)this + 0x54) != 0x0 || *(int *)((int)this + 0x52) != 0x0)
      {
        uVar12 = puStack0008[0x2];
        iVar5 = *(int *)((int)this + 0x10);
        iStack_c = 0x0;
        for (iStack_10 = 0x0; iStack_10 < *(int *)((int)this + 0x18); iStack_10 += 0x1)
        {
          uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
          puVar1 = (undefined2 *)
                   ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          uStack_30 = (undefined2 *)CONCAT22(uVar10,puVar1);
          uVar13 = *(undefined4 *)
                    ((*(int *)((int)this + 0x28) + iStack_10) * 0x4 + (int)uVar12);
          puVar4 = (undefined2 *)((int)*_this + 0x1c);
          uVar13 = (*(code *)*puVar4)(uVar11,this,src_node,(int)uVar13,
                                      (int)((ulong)uVar13 >> 0x10),
                                      *(undefined2 *)((int)this + 0x22));
          *uStack_30 = (int)uVar13;
          puVar1[0x1] = (int)((ulong)uVar13 >> 0x10);
          uVar13 = *(undefined4 *)
                    ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          iStack_c += *(int *)((int)uVar13 + 0x24) + 0x8;
          if (iVar5 + -0xa < iStack_c)
          {
            uVar11 = 0x1008;
            log_debug_message_v(0x11ca,0x1050,iStack_10);
            *(int *)((int)this + 0x18) = iStack_10 + -0x1;
            *(undefined2 *)((int)this + 0x26) = 0x1;
            uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
            iVar9 = (int)*(undefined4 *)((int)this + 0x52);
            puVar2 = (undefined4 *)*(int *)(iVar9 + iStack_10 * 0x4);
            iVar9 = *(int *)(iVar9 + iStack_10 * 0x4 + 0x2);
            if (iVar9 != 0x0 || puVar2 != NULL)
            {
              (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x1008,puVar2,iVar9,0x1);
            }
            iVar9 = iStack_10 * 0x4;
            *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iVar9) = 0x0;
            if (0x0 < iStack_10)
            {
              uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
              iVar8 = (int)*(undefined4 *)((int)this + 0x52);
              puVar2 = (undefined4 *)*(int *)(iVar8 + iVar9 + -0x4);
              iVar9 = *(int *)(iVar8 + iVar9 + -0x2);
              if (iVar9 != 0x0 || puVar2 != NULL)
              {
                (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x1008,puVar2,iVar9,0x1)
                ;
              }
              *(undefined4 *)
               (iStack_10 * 0x4 + (int)*(undefined4 *)((int)this + 0x52) + -0x4) = 0x0;
            }
          }
        }
        *(undefined2 *)((int)this + 0x20) = 0xa;
        UI_Window_Move_and_Update_93aa
                  ((void *)*(void **)*(undefined4 *)((int)this + 0x52),
                   (int)((ulong)*(void **)*(undefined4 *)((int)this + 0x52) >> 0x10),0xa
                  );
        for (iStack_10 = 0x1; iStack_10 < *(int *)((int)this + 0x18); iStack_10 += 0x1)
        {
          uVar12 = *(undefined4 *)
                    (iStack_10 * 0x4 + (int)*(undefined4 *)((int)this + 0x52) + -0x4);
          iVar5 = (int)uVar12;
          uVar11 = (undefined2)((ulong)uVar12 >> 0x10);
          pvVar3 = (void *)*(undefined4 *)
                            ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          UI_Window_Move_and_Update_93aa
                    ((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10),
                     *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24) + 0x8);
        }
      }
    }
  }
  return;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Traverses hierarchical UI tree using 32-bit bitmask as path.
// Instantiates UI_TreeNode_Control with vtable at 1040:C54A.
// Performs indirect calls through [this] vtable offset 0x18 to add nodes.

void __stdcall16far
UI_Component_Build_Hierarchy_Path_Elements_Logic(void *this,long path_bitmask)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  void *pvVar3;
  int in_DX;
  ushort uVar4;
  int extraout_DX;
  int iVar5;
  int extraout_DX_00;
  undefined2 unaff_SI;
  undefined2 uVar6;
  undefined2 in_stack_00000006;
  undefined4 uVar7;
  long size;
  undefined2 uVar8;
  ulong uStack_c;
  undefined4 uStack_8;
  
  uVar7 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x56) + 0x8);
  uStack_8 = *(undefined4 *)((int)uVar7 + *(int *)((int)this + 0x5a) * 0x4);
  uStack_c = path_bitmask;
  if (path_bitmask != 0x0)
  {
    uVar6 = 0x1000;
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x4a));
    if (in_DX == 0x0 && pvVar3 == NULL)
    {
      pvVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      uVar6 = 0x1040;
      uVar4 = UI_TreeNode_Control_ctor_init_c54a
                        (pvVar3,in_DX,0x1,uStack_8,*(undefined2 *)((int)this + 0x22));
    }
    puVar1 = (undefined2 *)((int)*_this + 0x18);
    uVar7 = CONCAT22(this,uVar6);
    (*(code *)*puVar1)(uVar6,this,in_stack_00000006,0x1,pvVar3,uVar4);
    iVar5 = extraout_DX;
    for (; (uStack_c & 0xf) != 0x0; uStack_c >>= 0x4)
    {
      uVar2 = *(undefined4 *)((int)uStack_8 + 0x8);
      uStack_8 = *(undefined4 *)((((byte)uStack_c & 0xf) - 0x1) * 0x4 + (int)uVar2);
      size = CONCAT22((int)((ulong)uVar7 >> 0x10),0x4a);
      uVar6 = 0x1000;
      pvVar3 = allocate_memory(size);
      uVar8 = (undefined2)((ulong)size >> 0x10);
      if (iVar5 == 0x0 && pvVar3 == NULL)
      {
        pvVar3 = NULL;
        uVar4 = 0x0;
      }
      else
      {
        uVar6 = 0x1040;
        uVar4 = UI_TreeNode_Control_ctor_init_c54a
                          (pvVar3,iVar5,0x1,uStack_8,*(undefined2 *)((int)this + 0x22));
      }
      uVar7 = CONCAT22(uVar8,uVar4);
      puVar1 = (undefined2 *)((int)*_this + 0x18);
      (*(code *)*puVar1)(uVar6,this,in_stack_00000006,0x1,pvVar3,uVar4);
      iVar5 = extraout_DX_00;
    }
  }
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



// Targeted Scan Finding: Vtable
// Initializes String_Wrapper_Object vtable to 1010:37C4 (base 1010:2014).

void * __stdcall16far String_Wrapper_Object_ctor_37C4(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x37c4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:37C4 during destruction.

void __stdcall16far String_Wrapper_Object_dtor_37C4(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x37c4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xa));
  Base_Object_dtor_2014_Logic(this);
  return;
}



char * __stdcall16far String_Wrapper_Object_Get_String_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return (char *)*(undefined2 *)((int)this + 0xa);
}



// Sets the string for the wrapper object. Frees any existing string and creates a
// duplicated copy of the input.

void __stdcall16far String_Wrapper_Object_Set_String_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xa));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0xa) = pcVar1;
  *(undefined2 *)((int)this + 0xc) = in_DX;
  return;
}



void * __stdcall16far String_Wrapper_Object_scalar_dtor_37C4(void *this,byte flags)
{
  byte in_stack_00000008;
  
  String_Wrapper_Object_dtor_37C4(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Collection_Object_Subclass vtable to 1010:3B3E (base 1010:3B5E).

void * __stdcall16far Collection_Object_Subclass_ctor_3B3E(void *this)
{
  u16 in_stack_00000006;
  
  Collection_Object_Base_ctor_3B5E(this);
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *_this = (char *)s_6_0_1050_3b3d + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:3B3E during destruction.

void __stdcall16far Collection_Object_Subclass_dtor_3B3E(void *this)
{
  u16 in_stack_00000006;
  
  *_this = (char *)s_6_0_1050_3b3d + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    free_if_not_null((void *)*(void **)*(undefined4 *)((int)this + 0x16));
  }
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Targeted Scan Finding: Vtable
// Initializes Collection_Object_Base vtable to 1010:3B5E (replaces base 1008:389A).

void * __stdcall16far Collection_Object_Base_ctor_3B5E(astruct_489 *this)
{
  u16 in_stack_00000006;
  
  *(char **)&_this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  this->field1_0x4 = 0x0;
  this->field2_0x8 = 0x0;
  this->field3_0xc = 0x0;
  this->field4_0x10 = 0x0;
  this->field5_0x12 = 0x0;
  this->field6_0x14 = 0x0;
  *(char **)&_this->field0_0x0 = (char *)s_40_33_1050_3b5c + 0x2;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:3B5E during destruction.
// Iteratively invokes virtual destructors (vtable index 0) for all array elements.

void __stdcall16far Collection_Object_Base_dtor_3B5E(astruct_490 *this,u16 param_2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined2 uVar5;
  int iStack_4;
  
  *(char **)&_this->field0_0x0 = (char *)s_40_33_1050_3b5c + 0x2;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1010;
  if (this->field5_0x8 != NULL)
  {
    iStack_4 = 0x0;
    while( true )
    {
      if (this->field10_0x10 <= iStack_4) break;
      uVar5 = (undefined2)((ulong)this->field5_0x8 >> 0x10);
      pvVar4 = (void *)this->field5_0x8;
      puVar1 = (undefined4 *)*(int *)((int)pvVar4 + iStack_4 * 0x4);
      iVar2 = *(int *)((int)pvVar4 + iStack_4 * 0x4 + 0x2);
      if (iVar2 != 0x0 || puVar1 != NULL)
      {
        puVar3 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar3)();
      }
      iStack_4 += 0x1;
    }
    free_if_not_null((void *)this->field5_0x8);
  }
  *(char **)&_this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  return;
}



// Factory function for the collection subclass. If a size is provided, it allocates a
// raw pointer array and stores it in the parent object. If no size is provided, it
// constructs a new collection object instance.

void * __stdcall16far Collection_Object_Subclass_3B3E_factory(void *this,int size)
{
  void *pvVar1;
  int in_DX;
  int in_stack_00000008;
  undefined4 in_stack_0000fff8;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (in_stack_00000008 != 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(uVar2,in_stack_00000008 << 0x2));
    *(undefined2 *)((int)this + 0x8) = pvVar1;
    *(int *)((int)this + 0xa) = in_DX;
    return (void *)*(undefined2 *)((int)this + 0x8);
  }
  pvVar1 = allocate_memory(CONCAT22(uVar2,0x1a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar1 = Collection_Object_Subclass_ctor_3B3E(pvVar1);
    return pvVar1;
  }
  return NULL;
}



void __stdcall16far
Collection_Object_Base_Factory_394a(u16 param_1,u16 param_2,int param_3)
{
  astruct_489 *this;
  int in_DX;
  undefined4 in_stack_0000fff8;
  undefined2 uVar1;
  u16 local_4;
  
  uVar1 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (param_3 != 0x0)
  {
    allocate_memory(CONCAT22(uVar1,param_3 << 0x2));
    return;
  }
  this = allocate_memory(CONCAT22(uVar1,0x16));
  if (in_DX != 0x0 || this != NULL)
  {
    Collection_Object_Base_ctor_3B5E(this);
    return;
  }
  return;
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



void __stdcall16far void_noop_stub_1010_3aa6(void)
{
  return;
}



u32 __stdcall16far UI_Object_Get_Dword_4_3aaa(u32 param_1)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(param_1 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)param_1 + 0x6),
                  *(undefined2 *)((int)param_1 + 0x4));
}



u16 __stdcall16far const_0_stub_1010_3abc(void)
{
  return 0x0;
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



void * __stdcall16far
Collection_Object_Subclass_3B3E_dtor_Scalar_Deleting_3af2
          (void *param_1,u16 param_2,byte param_3)
{
  Collection_Object_Subclass_dtor_3B3E(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



astruct_490 * __stdcall16far
Collection_Object_Base_dtor_Scalar_Deleting_3b18(astruct_490 *param_1,byte param_2)
{
  Collection_Object_Base_dtor_3B5E((astruct_490 *)param_1,(u16)((ulong)param_1 >> 0x10))
  ;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((astruct_490 *)param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes Resource_Category1_Object vtable to 1010:3D6A.
// Initializes embedded sub-object at offset 10 with vtable 1010:3D7A (base 1008:3AA8).

void * __stdcall16far Resource_Category1_Object_ctor(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined2 *)((int)this + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0xc) = 0x1008;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x14) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x3d6a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x3d7a;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets Resource_Category1_Object vtables to 1010:3D6A and 1010:3D7A during
// destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 0xE.

void __stdcall16far Resource_Category1_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 in_stack_00000006;
  undefined4 uStack_e;
  
  *_this = 0x3d6a;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0xa) = 0x3d7a;
  *(undefined2 *)((int)this + 0xc) = 0x1010;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (_this == NULL)
  {
    puVar2 = NULL;
    in_stack_00000006 = 0x0;
  }
  else
  {
    puVar2 = (undefined2 *)((int)this + 0xa);
  }
  uStack_e = (undefined2 *)CONCAT22(in_stack_00000006,puVar2);
  *uStack_e = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// Loads resource object using global string manager at 1050:14CC.
// Indirectly calls virtual destructor (index 0) of the existing resource string.

void __stdcall16far Resource_Category1_Update_String_Logic(void *this,int res_id)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 extraout_DX;
  undefined2 uVar3;
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0x14) = in_stack_00000008;
  uVar3 = 0x0;
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
    uVar3 = extraout_DX;
  }
  pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0xe) = pvVar2;
  *(undefined2 *)((int)this + 0x10) = uVar3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Registers a resource tracking object with the global Simulator. It uses offset 0x12
// as the resource identifier.

void __stdcall16far Simulator_Register_Resource_Tracker_Wrapper(long this_ref)
{
  void *parent;
  
  if (this_ref == 0x0)
  {
    parent = NULL;
  }
  else
  {
    parent = (void *)((int)this_ref + 0xa);
  }
  Simulator_Add_Resource_Tracker
            ((void *)_PTR_DAT_1050_0000_1050_0388,
             (int)((ulong)_PTR_DAT_1050_0000_1050_0388 >> 0x10),
             (ulong)*(uint *)((int)this_ref + 0x12),parent);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sends a signal or update notification to a resource tracker within the Simulator
// context.

void __stdcall16far Simulator_Signal_Resource_Tracker_Wrapper(long this_ref)
{
  int iVar1;
  undefined2 uVar2;
  
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (this_ref == 0x0)
    {
      iVar1 = 0x0;
      uVar2 = 0x0;
    }
    else
    {
      iVar1 = (int)this_ref + 0xa;
      uVar2 = this_ref._2_2_;
    }
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,
               (ulong)*(uint *)((int)this_ref + 0x12),CONCAT22(uVar2,iVar1));
  }
  return;
}



// Event handler for resource updates. If the update type is 2, it signals the simulator
// and notifies all registered UI listeners.

void __stdcall16far
Resource_Tracker_On_Update_Logic(int offset,int segment,int update_type)
{
  if (update_type == 0x2)
  {
    Simulator_Signal_Resource_Tracker_Wrapper
              ((long)CONCAT22(segment,(void *)(offset + -0xa)));
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(offset + -0xa),segment);
  }
  return;
}



void Resource_Category1_dtor_Wrapper_3d38
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Resource_Category1_dtor_Scalar_Deleting_3d44((void *)(param_2 + -0xa),param_3,param_4)
  ;
  return;
}



void * __stdcall16far
Resource_Category1_dtor_Scalar_Deleting_3d44(void *param_1,u16 param_2,byte param_3)
{
  Resource_Category1_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Resource / Far Pointer
// Initializes Resource_Category2_Object vtable to 1010:3E2C.
// Loads a resource object using global manager at 1050:14CC.

void * __stdcall16far Resource_Category2_Object_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  undefined2 in_DX;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(void ***)CONCAT22(segment,this) = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0xa) = pvVar1;
  *(undefined2 *)((int)this + 0xc) = in_DX;
  return this;
}



// Destructor for Resource Category 2 objects. Frees the descriptive string and calls
// the base destructor.

void __stdcall16far Resource_Category2_Object_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = (void **)&PTR_s_0_000_1050_3bbb_1050_3e2c;
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



void * __stdcall16far
Resource_Category2_dtor_Scalar_Deleting_3e06(void *param_1,u16 param_2,byte param_3)
{
  Resource_Category2_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Complex_Dialog vtable to 1010:4A46 and an embedded base vtable at
// offset 0x20 to 1010:4A82 (base 1008:3AA8).
// Registers global instance pointer at 1050:4230.
// Loads a resource object using global string manager at 1050:14CC.
// Performs 16-slot far-pointer array initialization (memset_far).

void * __stdcall16far UI_Complex_Dialog_ctor_4A46(void *this,int id)
{
  void *pvVar1;
  undefined2 uVar2;
  long lVar3;
  int in_stack_00000008;
  
  lVar3 = UI_Metric_Manager_Object_ctor_init
                    ((long)CONCAT22(id,this),0x6,in_stack_00000008);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this + 0x20) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x22) = 0x1008;
  *(undefined2 *)((int)this + 0x20) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)this + 0x22) = 0x1008;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined4 *)((int)this + 0x66) = 0x0;
  *(undefined2 *)((int)this + 0x6a) = 0x4;
  *(undefined4 *)((int)this + 0x6c) = 0x0;
  *(undefined4 *)((int)this + 0x70) = 0x0;
  *(undefined2 *)((int)this + 0x74) = 0x0;
  pack_3words_alt((void *)((int)this + 0x76),id,0x0,0x3);
  *(undefined4 *)((int)this + 0x7c) = 0x0;
  *_this = 0x4a46;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  *(undefined2 *)((int)this + 0x20) = 0x4a82;
  *(undefined2 *)((int)this + 0x22) = 0x1010;
  memset_far((void *)((int)this + 0x26),id,0x0);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x66) = pvVar1;
  *(undefined2 *)((int)this + 0x68) = uVar2;
  Build_Site_Update_From_Resources((long)CONCAT22(id,this));
  return this;
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
