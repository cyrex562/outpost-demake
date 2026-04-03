/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 11/19
 * Original lines (combined): 42332-45644
 * Boundaries: top-level declarations/definitions only
 */




// Sets a far pointer at offset 0x28 and broadcasts notification type 0x13 to registered
// listeners.

void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_28_and_Notify_Logic(long context,long new_ptr)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(long *)((int)(void *)context + 0x28) = new_ptr;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



// Sets a far pointer at offset 0x24 and broadcasts notification type 0x12 to registered
// listeners.

void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic(long context,long new_ptr)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(long *)((int)(void *)context + 0x24) = new_ptr;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



// Sets a 16-bit value at offset 0x1E and broadcasts notification type 4.

void __stdcall16far
UI_Component_Set_Value_at_Offset_1E_and_Notify_Logic(long context,long value)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(undefined2 *)((int)(void *)context + 0x1e) = (undefined2)value;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_16_Logic(long context,long new_ptr)
{
  *(long *)((int)context + 0x16) = new_ptr;
  return;
}



long __stdcall16far UI_Component_Get_FarPtr_at_Offset_16_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  return CONCAT22(*(undefined2 *)((int)context + 0x18),
                  *(undefined2 *)((int)context + 0x16));
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_1A_Logic_2(long context,long new_ptr)
{
  *(long *)((int)context + 0x1a) = new_ptr;
  return;
}



void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_20_Logic_2(long context,long new_ptr)
{
  *(long *)((int)context + 0x20) = new_ptr;
  return;
}



// Returns either the primary (0x24) or secondary (0x28) buffer pointer based on the
// current display state flag at 0x84.

long __stdcall16far UI_Main_View_Controller_Get_Active_Buffer_Ptr_Logic(long context)
{
  astruct_479 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_479 *)context;
  if (uVar1->field128_0x84 == 0x2)
  {
    return CONCAT22(uVar1->field39_0x2a,uVar1->field38_0x28);
  }
  return CONCAT22(uVar1->field37_0x26,uVar1->field36_0x24);
}



// Toggles the display state flag at 0x84 between 1 and 2 and notifies listeners. Used
// for switching between map layers or view modes.

void __stdcall16far UI_Main_View_Controller_Toggle_Display_State_Logic(long context)
{
  undefined2 uVar1;
  void *this;
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  this = (void *)context;
  if (*(int *)((int)this + 0x84) == 0x1)
  {
    uVar1 = 0x2;
  }
  else
  {
    uVar1 = 0x1;
  }
  *(undefined2 *)((int)this + 0x84) = uVar1;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,notify_type);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Set_FarPtr_at_Offset_80_Logic(long context,long new_ptr)
{
  *(long *)((int)context + 0x80) = new_ptr;
  return;
}



long __stdcall16far UI_Main_View_Controller_Get_FarPtr_at_Offset_80_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  return CONCAT22(*(undefined2 *)((int)context + 0x82),
                  *(undefined2 *)((int)context + 0x80));
}



void __stdcall16far
UI_Main_View_Controller_Set_Value_at_Offset_5E_Logic(long context,int value)
{
  *(int *)((int)context + 0x5e) = value;
  return;
}



int __stdcall16far UI_Main_View_Controller_Get_Value_at_Offset_5E_Logic(long context)
{
  return *(int *)((int)context + 0x5e);
}



long __stdcall16far
UI_Main_View_Controller_Get_Indirect_FarPtr_from_Offset_7C_Logic(long context)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
  iVar2 = (int)uVar1;
  return CONCAT22(*(undefined2 *)(iVar2 + 0x6),*(undefined2 *)(iVar2 + 0x4));
}



// Calculates clamped bounds for a viewport or selection region. It unpacks a coordinate
// from offset 0x30, ensures it stays within safe margins (3 pixels) of the parent
// entity's boundaries, and generates two bounding structures at 0x40 and 0x46.

void __stdcall16far
UI_Main_View_Controller_Calculate_Clamped_Viewport_Bounds_Logic
          (long context,long dest_ref)
{
  int iVar1;
  astruct_478 *uVar3;
  int *out1;
  int *unaff_SS;
  void *src;
  int local_8;
  int local_6;
  int local_4;
  
  uVar3 = (astruct_478 *)context;
  out1 = (int *)((ulong)context >> 0x10);
  uVar3 = (astruct_478 *)&uVar3->field_0x30;
  unpack_3word_struct(uVar3,out1,&local_8,unaff_SS);
  if (local_4 + -0x3 < 0x1)
  {
    local_4 = 0x3;
  }
  if (local_6 + -0x3 < 0x1)
  {
    local_6 = 0x3;
  }
  iVar1 = *(int *)((int)uVar3->field90_0x5a + 0x4);
  if (iVar1 <= local_4 + 0x2)
  {
    local_4 = iVar1 + -0x3;
  }
  iVar1 = *(int *)((int)uVar3->field90_0x5a + 0x8);
  if (iVar1 <= local_6 + 0x2)
  {
    local_6 = iVar1 + -0x3;
  }
  pack_two_3word_structs
            (&uVar3->field_0x40,out1,local_8,local_6 + 0x2,local_4 + 0x2,local_8,
             local_6 + -0x3,local_4 + -0x3);
  src = (void *)((ulong)dest_ref >> 0x10);
  copy_struct_6bytes((void *)dest_ref,src);
  copy_struct_6bytes((void *)((int)(void *)dest_ref + 0x6),src);
  return;
}



// Compares the selected entity ID at offset 0x3C with the current simulator context at
// offset 0x2C to determine if the selection is still valid and active.

int __stdcall16far UI_Main_View_Controller_Is_Selected_Entity_Active_Logic(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = *(undefined4 *)((int)context + 0x2c);
  if (*(long *)((int)uVar1 + 0x20) == *(long *)((int)context + 0x3c))
  {
    return 0x1;
  }
  return 0x0;
}



void __stdcall16far
UI_Main_View_Controller_Get_Indirect_Refs_from_Offset_7C_Logic
          (long context,int *out1,long *out2)
{
  undefined4 uVar1;
  undefined2 uVar2;
  undefined4 *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  *in_stack_0000000c = *(undefined4 *)((int)uVar1 + 0x16);
  uVar1 = *(undefined4 *)((int)context + 0x7c);
  *_out1 = *(int *)((int)uVar1 + 0x1a);
  return;
}



// Getter for the fleet list at offset 0x94. Triggers lazy population if the list is
// null.

void __stdcall16far
UI_Main_View_Controller_Get_Fleet_List_Logic(long context,int *count_out,long *list_out)
{
  astruct_477 *uVar1;
  undefined2 uVar2;
  long *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_477 *)context;
  if (uVar1->field147_0x94 == 0x0)
  {
    UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(context);
  }
  *in_stack_0000000c = uVar1->field147_0x94;
  *_count_out = uVar1->field146_0x92;
  return;
}



// Getter for the link list at offset 0x9A. Triggers lazy population if the list is
// null.

void __stdcall16far
UI_Main_View_Controller_Get_Link_List_Logic_maybe
          (long context,int *count_out,long *list_out)
{
  astruct_476 *uVar1;
  undefined2 uVar2;
  long *in_stack_0000000c;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_476 *)context;
  if (uVar1->field153_0x9a == 0x0)
  {
    UI_Main_View_Controller_Populate_Fleet_and_Link_Lists_Logic(context);
  }
  *in_stack_0000000c = uVar1->field153_0x9a;
  *_count_out = uVar1->field152_0x98;
  return;
}



void __stdcall16far
UI_Main_View_Controller_Get_Collection_88_Logic
          (long context,int *count_out,long *list_out)
{
  undefined2 uVar1;
  undefined4 *in_stack_0000000c;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *in_stack_0000000c = *(undefined4 *)((int)context + 0x88);
  *_count_out = *(int *)((int)context + 0x86);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Get_Collection_8E_Logic
          (long context,int *count_out,long *list_out)
{
  undefined2 uVar1;
  undefined4 *in_stack_0000000c;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *in_stack_0000000c = *(undefined4 *)((int)context + 0x8e);
  *_count_out = *(int *)((int)context + 0x8c);
  return;
}



// Unpacks a coordinate pair from offset 0x36, applies provided X/Y offsets, and
// re-packs the result into a 3-word structure at `param_2`.

void __stdcall16far
UI_Main_View_Controller_Offset_and_Pack_3Word_Logic
          (long context,long dest_ref,int dx,int dy)
{
  int *out1;
  int local_6;
  int local_4;
  
  out1 = (int *)((ulong)context >> 0x10);
  unpack_word_pair((void *)((int)context + 0x36),out1,&local_6);
  local_6 += dx + -0x3;
  _local_6 = CONCAT22(local_4 + dy + -0x3,local_6);
  pack_3words_reverse((void *)dest_ref,(int)((ulong)dest_ref >> 0x10),
                      *(int *)((int)context + 0x44),local_6);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_1(long context,int dx,int dy)
{
  int local_6 [0x2];
  
  unpack_word_pair((void *)((int)context + 0x36),(int *)((ulong)context >> 0x10),local_6
                  );
  UI_Main_View_Controller_Update_Viewport_and_History_Logic();
  return;
}



void __stdcall16far
UI_Main_View_Controller_Update_Viewport_Offset_Wrapper_2(long context,long coords)
{
  UI_Main_View_Controller_Update_Viewport_and_History_Logic
            (context,*(undefined2 *)((int)context + 0x44),coords);
  return;
}



void __stdcall16far
UI_Main_View_Controller_Submit_Command_Wrapper(long context,long arg2,long arg3)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  UI_Component_Submit_Simulator_Command_Logic
            (*(undefined4 *)((int)context + 0x2c),arg2,arg3,
             *(undefined4 *)((int)context + 0x3c));
  return;
}



// Destructor for the Navigation Manager. Frees internal buffers and calls the base
// destructor.

void __stdcall16far UI_Navigation_Manager_dtor_1FB0_Logic(long this_ref)
{
  undefined2 *puVar1;
  u16 *puVar2;
  astruct_474 *uVar3;
  undefined2 uVar4;
  u16 *puStack_e;
  undefined2 uStack_c;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_474 *)this_ref;
  *(char **)this_ref = (char *)s_561_bmp_1050_1faf + 0x1;
  uVar3->field2_0x2 = 0x1018;
  uVar3->field31_0x20 = (u16)((char *)s_568_bmp_1050_1fe7 + 0x5);
  uVar3->field32_0x22 = 0x1018;
  if (uVar3->field34_0x26 != 0x0 || uVar3->field33_0x24 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar3->field33_0x24;
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)uVar3->field59_0x40);
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar3->field31_0x20;
  }
  _puStack_e = (u16 *)CONCAT22(uVar4,puVar2);
  *_puStack_e = 0x389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// Searches the navigation entity collection for a match against an external ID and sets
// it as the active selection if found.

int __stdcall16far
UI_Navigation_Manager_Find_and_Select_Entity_Logic(long context,int id)
{
  undefined4 uVar1;
  astruct_472 *uVar2;
  undefined2 uVar3;
  int iStack_a;
  
  iStack_a = 0x0;
  while( true )
  {
    uVar3 = (undefined2)((ulong)context >> 0x10);
    if (*(int *)((int)context + 0x44) <= iStack_a)
    {
      return 0x0;
    }
    uVar1 = *(undefined4 *)((int)context + 0x40);
    uVar3 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar2 = (astruct_472 *)((int)uVar1 + iStack_a * 0x18);
    if (*(int *)(uVar2->field12_0xc * 0x1e + 0x3c32) == id) break;
    iStack_a += 0x1;
  }
  UI_Navigation_Manager_Set_Active_Selection_Logic(context,(long)CONCAT22(uVar3,uVar2));
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Performs complex coordinate transformations and rounding for map entities. It snaps
// values to 5 or 10 pixel increments and validates positions against global boundary
// tables.

void __stdcall16far UI_Navigation_Manager_Snap_Entity_Coordinates_Logic(long context)
{
  int iVar1;
  astruct_471 *uVar3;
  void *dest;
  int *out1;
  int *unaff_SS;
  int iStack_1a;
  int local_18 [0x2];
  int iStack_14;
  int iStack_12;
  int iStack_10;
  int local_e;
  int local_c;
  int local_a;
  int iStack_8;
  undefined4 uStack_6;
  
  out1 = (int *)((ulong)context >> 0x10);
  uVar3 = (astruct_471 *)context;
  uStack_6 = uVar3->field64_0x40;
  iStack_8 = 0x0;
  do
  {
    if (uVar3->field65_0x44 <= iStack_8)
    {
      return;
    }
    unpack_3word_struct((void *)(iStack_8 * 0x18 + (int)uStack_6),uStack_6._2_2_,
                        &local_e,unaff_SS);
    local_a /= 0xa;
    iStack_10 = local_c % 0xa;
    if (iStack_10 != 0x0)
    {
      if (iStack_10 < 0x6)
      {
        local_c -= iStack_10;
      }
      else
      {
        local_c += 0xa - iStack_10;
      }
    }
    iStack_12 = abs_u16_to_i16_logic(local_e);
    iStack_12 /= 0x5;
    if (0x14 < iStack_12)
    {
      iStack_12 = 0x14;
      iVar1 = abs_u16_to_i16_logic(local_e);
      local_e = (local_e / iVar1) * 0x64;
    }
    iStack_10 = abs_u16_to_i16_logic(local_e);
    iStack_10 %= 0x5;
    if (iStack_10 != 0x0)
    {
      if (local_e < 0x0)
      {
        iVar1 = iStack_10;
        if (0x2 < iStack_10)
        {
          iVar1 = iStack_10 + -0x5;
        }
        local_e += iVar1;
      }
      else if (iStack_10 < 0x3)
      {
        local_e -= iStack_10;
      }
      else
      {
        local_e += 0x5 - iStack_10;
      }
    }
    iStack_14 = *(int *)((int)(void **)&PTR_s_3_65_1050_39b1_1050_3c1e +
                        iStack_12 * 0x48 + 0x2);
    if (local_c < iStack_14)
    {
      for (iStack_1a = iStack_12; iStack_1a < 0x15; iStack_1a += 0x1)
      {
        if (*(int *)((int)(void **)&PTR_s_3_65_1050_39b1_1050_3c1e +
                    iStack_1a * 0x48 + 0x2) <= local_c)
        {
          iStack_12 = iStack_1a;
          break;
        }
      }
    }
    unpack_word_pair(&uVar3->field_0x3a,out1,local_18);
    dest = (void *)(iStack_8 * 0x18 + (int)uStack_6);
    iVar1 = (int)uStack_6._2_2_;
    *(int *)((int)dest + 0x6) = local_a;
    *(int *)((int)dest + 0x8) = iStack_12;
    pack_3words_reverse(dest,(int)uStack_6._2_2_,0x0,local_e);
    *(undefined2 *)((int)dest + 0xa) = *(undefined2 *)(local_a * 0x2 + 0x3966);
    iStack_8 += 0x1;
  } while( true );
}



// Returns a far pointer to a metadata entry in the global table at 0x3C18 based on an
// entity index.

long __stdcall16far UI_Navigation_Manager_Get_Metadata_Ptr_Logic(long context,int index)
{
  undefined4 uVar1;
  
  if (index == -0x1)
  {
    uVar1 = *(undefined4 *)((int)context + 0x46);
    index = *(int *)((int)uVar1 + 0xc);
  }
  return CONCAT22(0x1050,index * 0x1e + 0x3c18);
}



// Updates the active selection pointer at offset 0x46. Manages state flags (1 for
// active, 2 for previously active) and notifies listeners.

void __stdcall16far
UI_Navigation_Manager_Set_Active_Selection_Logic(long context,long selection)
{
  astruct_469 *uVar1;
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  uVar1 = (astruct_469 *)context;
  if (uVar1->field70_0x46 != NULL)
  {
    *(undefined2 *)((int)(void *)uVar1->field70_0x46 + 0xe) = 0x2;
  }
  uVar1->field70_0x46 = (void *)selection;
  *(undefined2 *)((int)selection + 0xe) = 0x1;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(uVar1,notify_type);
  return;
}



int __stdcall16far
UI_Navigation_Manager_Contains_Value_at_Offset_4E_Logic(long context,int value)
{
  astruct_468 *uVar1;
  undefined2 uVar2;
  int iStack_6;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_468 *)context;
  if (uVar1->field86_0x56 == 0x0)
  {
    return 0x0;
  }
  iStack_6 = 0x0;
  while( true )
  {
    if (uVar1->field86_0x56 <= iStack_6)
    {
      return 0x0;
    }
    if (*(int *)(&uVar1->field_0x4e + iStack_6 * 0x2) == value) break;
    iStack_6 += 0x1;
  }
  return 0x1;
}



// Retrieves a bitmap pointer for a specific item in the report grid. It uses an
// external tracker (param_2) to index into the grid's 509-slot cache and performs lazy
// loading of the bitmap range if necessary.

long __stdcall16far UI_Report_Grid_Get_Item_Bitmap_Logic(long context,int *item_ptr)
{
  int iVar1;
  undefined2 uVar2;
  undefined2 in_stack_0000000a;
  undefined4 uStack_8;
  
  iVar1 = Gameplay_SubObject_Check_Field1_NonZero_Logic(item_ptr);
  if (iVar1 == 0x0)
  {
    return 0x0;
  }
  iVar1 = *_item_ptr;
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uStack_8 = *(long *)((int)context + iVar1 * 0x4 + 0x12);
  if (uStack_8 == 0x0)
  {
    UI_Report_Grid_Bulk_Load_Item_Bitmaps_Logic(context,(long)_item_ptr);
    uStack_8 = *(long *)((int)context + iVar1 * 0x4 + 0x12);
  }
  Gameplay_SubObject_Process_Tick_Logic(item_ptr);
  return uStack_8;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Destructor for the Construction Manager. It unregisters from the simulator tracker,
// destroys sub-objects at offsets 0x2A and 0x6E, and cleans up internal buffers before
// calling the base destructor.

void __stdcall16far UI_Construction_Manager_dtor_2ADA_Logic(long this_ref)
{
  u32 *puVar1;
  int iVar2;
  u16 *puVar3;
  undefined2 uVar4;
  astruct_467 *uVar5;
  undefined2 uVar6;
  undefined2 unaff_CS;
  u16 *puStack_6;
  undefined2 uStack_4;
  
  uVar6 = (undefined2)((ulong)this_ref >> 0x10);
  uVar5 = (astruct_467 *)this_ref;
  *(char **)this_ref = (char *)s_fem130_wav_1050_2ad6 + 0x4;
  uVar5->field2_0x2 = 0x1018;
  uVar5->field27_0x1c = (u16)((char *)s_fem132_wav_1050_2aec + 0x6);
  uVar5->field28_0x1e = 0x1018;
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (this_ref == 0x0)
    {
      puVar3 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      puVar3 = &uVar5->field27_0x1c;
      uVar4 = uVar6;
    }
    unaff_CS = 0x1008;
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,0x73,(long)CONCAT22(uVar4,puVar3));
  }
  puVar1 = uVar5->field39_0x2a;
  iVar2 = uVar5->field40_0x2c;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  puVar1 = uVar5->field105_0x6e;
  iVar2 = uVar5->field106_0x70;
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  if (this_ref == 0x0)
  {
    puVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar3 = &uVar5->field27_0x1c;
  }
  _puStack_6 = (u16 *)CONCAT22(uVar6,puVar3);
  *_puStack_6 = (u16)(char *)s_1_1050_389a;
  puVar3[0x1] = 0x1008;
  Build_Site_Object_dtor_Internal((void *)this_ref);
  return;
}



int __stdcall16far UI_Component_Get_Value_at_Offset_26_plus_10_Logic_maybe(long context)
{
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  if (*(long *)((int)context + 0x26) != 0x0)
  {
    uVar1 = *(undefined4 *)((int)context + 0x26);
    return *(int *)((int)uVar1 + 0xa);
  }
  return 0x0;
}



// Resets internal selection state flags at offsets 0x3E and 0x44.

void __stdcall16far UI_Construction_Manager_Reset_Selection_State_Logic(long context)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)context >> 0x10);
  *(undefined2 *)((int)context + 0x44) = 0x1;
  *(undefined4 *)((int)context + 0x3e) = 0x0;
  return;
}



int __stdcall16far UI_Component_Get_Value_at_Offset_44_Logic_2(long context)
{
  return *(int *)((int)context + 0x44);
}



// Retrieves a far pointer from an indexed array starting at offset 0x46, based on the
// index value at 0x3E. If flag 0x42 is set, it also resets state fields at 0x40 and
// 0x44.

long __stdcall16far UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic(long context)
{
  astruct_465 *uVar1;
  int iVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_465 *)context;
  if (uVar1->field65_0x42 != 0x0)
  {
    *(undefined4 *)&uVar1->field_0x40 = 0x0;
    uVar1->field66_0x44 = 0x1;
  }
  iVar1 = uVar1->field62_0x3e * 0x4;
  return CONCAT22(*(undefined2 *)(&uVar1[0x1].field_0x2 + iVar1),
                  *(undefined2 *)(&uVar1[0x1].field_0x0 + iVar1));
}



void __stdcall16far UI_Construction_Manager_Advance_Selection_Index_Logic(long context)
{
  astruct_461 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)context >> 0x10);
  uVar1 = (astruct_461 *)context;
  if ((uVar1->field63_0x40 != 0x0) &&
     (uVar1->field62_0x3e = uVar1->field62_0x3e + 0x1, 0x9 < uVar1->field62_0x3e))
  {
    uVar1->field62_0x3e = 0x0;
    uVar1->field64_0x42 = 0x1;
  }
  return;
}



// Clears the field at offset 0x18 if the input segment matches 0x280, then forwards the
// call to a coordinate transformation routine.

void __stdcall16far
UI_Component_Conditional_Clear_Offset_18_Logic
          (int param_1,undefined2 param_2,int param_3,undefined4 param_4)
{
  if ((*(int *)(param_1 + 0x18) != 0x0) && (param_4._2_2_ == 0x280))
  {
    *(undefined2 *)(param_1 + 0x18) = 0x0;
  }
  Build_Site_Object_Setup_GDI_Context
            (CONCAT22(param_2,param_1),param_3,(int)param_4,param_4._2_2_);
  return;
}



// Decrements the selection index in the Ship View entity list, with wrapping support.

void __stdcall16far UI_Ship_View_Select_Previous_Entity_Logic(long context)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)context >> 0x10);
  iVar3 = (int)context;
  if (*(int *)(iVar3 + 0x180) != 0x0 || *(int *)(iVar3 + 0x17e) != 0x0)
  {
    piVar1 = (int *)(iVar3 + 0x174);
    *piVar1 = *piVar1 + -0x1;
    if (*piVar1 < 0x0)
    {
      *(int *)(iVar3 + 0x174) =
           *(int *)((int)*(undefined4 *)(iVar3 + 0x17e) + 0xa) + -0x1;
    }
    iVar2 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    *(int *)(iVar3 + 0x176) = iVar2;
  }
  return;
}



// Increments the selection index in the Ship View entity list, with wrapping support.

void __stdcall16far UI_Ship_View_Select_Next_Entity_Logic(long context)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)context >> 0x10);
  iVar2 = (int)context;
  if (*(int *)(iVar2 + 0x180) != 0x0 || *(int *)(iVar2 + 0x17e) != 0x0)
  {
    *(int *)(iVar2 + 0x174) = *(int *)(iVar2 + 0x174) + 0x1;
    if (*(int *)((int)*(undefined4 *)(iVar2 + 0x17e) + 0xa) <= *(int *)(iVar2 + 0x174))
    {
      *(undefined2 *)(iVar2 + 0x174) = 0x0;
    }
    iVar1 = UI_Ship_View_Get_Selected_Entity_ID_Logic(context);
    *(int *)(iVar2 + 0x176) = iVar1;
  }
  return;
}
