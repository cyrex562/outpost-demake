/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 21/56
 * Original lines (combined): 63106-65256
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for the internal child component of the Navigation View. Initializes with
// Resource ID 0x25 and sets vtable to 0x7902.

void * __stdcall16far
UI_Navigation_Child_Component_ctor_init_logic_Res25(void *this_ptr,u16 res_id)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  long lVar3;
  
  UI_SubComponent_Grid_ctor_init_921c(this_ptr,res_id);
  *(undefined4 *)((int)this_ptr + 0x14) = 0x0;
  *(undefined2 *)this_ptr = 0x7902;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x25);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  *(undefined2 *)((int)this_ptr + 0x14) = (int)lVar3;
  *(undefined2 *)((int)this_ptr + 0x16) = uVar2;
  *(undefined2 *)((int)this_ptr + 0x6) = *(undefined2 *)((int)this_ptr + 0x14);
  *(undefined2 *)((int)this_ptr + 0x8) = uVar2;
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)
                  *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x14) + 0xa) +
           0x8);
  uVar2 = (*(code *)*puVar1)();
  *(undefined2 *)((int)this_ptr + 0x12) = uVar2;
  UI_SubComponent_Grid_Draw_Logic_9364(this_ptr);
  return this_ptr;
}



// Updates the component's selected entity index. If the selection has changed, posts
// message 0x85 and triggers a virtual selection update callback.

void __stdcall16far
UI_Component_Update_Selected_Entity_Logic_79fc
          (void *this_ptr,u16 arg1,u16 arg2,int selection)
{
  undefined2 *puVar1;
  int iVar2;
  astruct_352 *uVar3;
  undefined2 uVar4;
  u32 *puVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_352 *)this_ptr;
  puVar5 = (u32 *)uVar3->field223_0xe0;
  puVar1 = (undefined2 *)((int)*uVar3->field223_0xe0 + 0x24);
  iVar2 = (*(code *)*puVar1)();
  if (iVar2 != selection)
  {
    PostMessage16(0x0,0x0,0x0,CONCAT22(puVar5,uVar3->field8_0x8));
    puVar1 = (undefined2 *)((int)*uVar3->field223_0xe0 + 0x28);
    (*(code *)*puVar1)();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing a single lab item. Initializes base list
// with 1 item and sets vtable to 0x8462.

u16 * __stdcall16far UI_Lab_Item_Single_ctor_init(u16 *this_ptr)
{
  u16 uVar1;
  long lVar2;
  u16 in_stack_00000006;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  zero_init_struct_6bytes(this_ptr + 0xb);
  (this_ptr + 0xe)[0x0] = 0x0;
  (this_ptr + 0xe)[0x1] = 0x0;
  *_this_ptr = 0x8462;
  this_ptr[0x1] = 0x1020;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar1 = (u16)((ulong)lVar2 >> 0x10);
  this_ptr[0xe] = (u16)lVar2;
  this_ptr[0xf] = uVar1;
  win16_Copy_Struct_6Bytes_Wrapper_4210(CONCAT22(uVar1,this_ptr[0xe]));
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),(int *)*(int **)(this_ptr + 0x4),
             *(u32 *)((int)*(undefined4 *)(this_ptr + 0xe) + 0x2a),
             (int *)(this_ptr + 0xb));
  return this_ptr;
}



// Calculates a bounding rectangle (L,T,R,B) by adding an object's bitmap dimensions to
// its base coordinates.

void __stdcall16far
UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
          (u32 unused,int *out_rect,u32 bitmap_ptr,int *base_coords)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 in_stack_0000000a;
  int *in_stack_00000012;
  
  add_3int_vectors(base_coords,in_stack_00000012);
  pvVar1 = get_with_lazy_init((void *)bitmap_ptr);
  unpack_word_pair(base_coords,in_stack_00000012,out_rect + 0x1);
  out_rect[0x2] = *(int *)((int)pvVar1 + 0x4) + *_out_rect;
  out_rect[0x3] = *(int *)((int)pvVar1 + 0x8) + out_rect[0x1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing four lab items. Initializes base list
// with 4 items and sets vtable to 0x8A84.

u16 * __stdcall16far UI_Lab_Item_Quad_ctor_init_87c2(u16 *this_ptr)
{
  long lVar1;
  u16 in_stack_00000006;
  int local_12 [0x4];
  int iStack_a;
  u16 *puStack_8;
  int iStack_4;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  iStack_4 = 0x4;
  puStack_8 = this_ptr + 0xb;
  do
  {
    zero_init_struct_6bytes(puStack_8);
    puStack_8 = puStack_8 + 0x3;
    iStack_4 += -0x1;
  } while (iStack_4 != 0x0);
  (this_ptr + 0x17)[0x0] = 0x0;
  (this_ptr + 0x17)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x19);
  (this_ptr + 0x1c)[0x0] = 0x0;
  (this_ptr + 0x1c)[0x1] = 0x0;
  *_this_ptr = 0x8a84;
  this_ptr[0x1] = 0x1020;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  this_ptr[0x17] = (u16)lVar1;
  this_ptr[0x18] = (u16)((ulong)lVar1 >> 0x10);
  iStack_a = 0x0;
  do
  {
    Resource_Manager_Get_6Byte_Struct_from_65CA_Logic
              ((int)*(undefined4 *)(this_ptr + 0x17),
               (int)((ulong)*(undefined4 *)(this_ptr + 0x17) >> 0x10),iStack_a,
               this_ptr + iStack_a * 0x3 + 0xb,in_stack_00000006);
    UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
              ((u32)CONCAT22(in_stack_00000006,this_ptr),
               (int *)(this_ptr[0x4] + iStack_a * 0x8),
               *(u32 *)((int)*(undefined4 *)(this_ptr + 0x17) + 0x2e + iStack_a * 0x4),
               (int *)(this_ptr + iStack_a * 0x3 + 0xb));
    iStack_a += 0x1;
  } while (iStack_a < 0x4);
  win16_Copy_Struct_6Bytes_Wrapper_2(*(long *)(this_ptr + 0x17));
  *(undefined4 *)(this_ptr + 0x1c) =
       *(undefined4 *)((int)*(undefined4 *)(this_ptr + 0x17) + 0x6e);
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),local_12,
             *(u32 *)(this_ptr + 0x1c),(int *)(this_ptr + 0x19));
  return this_ptr;
}



void __stdcall16far
UI_Complex_Control_OnPaint_Manage_4_Sprites_8908(undefined4 param_1,void *param_2)
{
  void *pvVar1;
  void *this;
  int in_DX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SI;
  int iVar5;
  int iVar6;
  undefined2 uVar7;
  void *pos;
  undefined2 local_4;
  
  for (local_4 = 0x0; pos = (void *)((ulong)param_2 >> 0x10), iVar5 = (int)param_1,
      iVar3 = (int)((ulong)param_1 >> 0x10), local_4 < 0x4; local_4 += 0x1)
  {
    if (*(int *)(iVar5 + 0x4) == 0x0)
    {
      uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xc) >> 0x10);
      iVar3 = (int)*(undefined4 *)(iVar5 + 0xc);
      iVar5 = local_4 * 0x4;
      if (*(int *)(iVar3 + iVar5 + 0x2) != 0x0 || *(int *)(iVar3 + iVar5) != 0x0)
      {
        Sprite_Object_Restore_To_Bitmap((void *)(void *)*(undefined4 *)(iVar3 + iVar5));
      }
    }
    else
    {
      pvVar1 = get_with_lazy_init((void *)(void *)*(undefined4 *)
                                                   ((int)*(undefined4 *)(iVar5 + 0x2e) +
                                                    0x2e + local_4 * 0x4));
      iVar6 = local_4 * 0x4;
      if (*(long *)((int)*(undefined4 *)(iVar5 + 0xc) + iVar6) == 0x0)
      {
        iVar4 = in_DX;
        this = allocate_memory(CONCAT22(unaff_SI,0x14));
        if (iVar4 == 0x0 && this == NULL)
        {
          *(undefined4 *)((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4) = 0x0;
        }
        else
        {
          iVar2 = iVar3;
          pvVar1 = Sprite_Object_init_logic
                             (this,iVar4,(int)*(undefined4 *)((int)pvVar1 + 0x8),
                              (void *)((ulong)*(undefined4 *)((int)pvVar1 + 0x8) >> 0x10
                                      ),(int)*(undefined4 *)((int)pvVar1 + 0x4));
          uVar7 = (undefined2)((ulong)*(undefined4 *)(iVar5 + 0xc) >> 0x10);
          iVar4 = (int)*(undefined4 *)(iVar5 + 0xc);
          *(undefined2 *)(iVar4 + iVar6) = pvVar1;
          *(int *)(iVar4 + iVar6 + 0x2) = iVar2;
        }
        Sprite_Object_Capture_From_Bitmap
                  ((void *)(void *)*(undefined4 *)
                                    ((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4))
        ;
      }
      Sprite_Object_Restore_To_Bitmap
                ((void *)(void *)*(undefined4 *)
                                  ((int)*(undefined4 *)(iVar5 + 0xc) + local_4 * 0x4));
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)param_2,pos,(void *)(local_4 * 0x6 + iVar5 + 0x16));
      in_DX = iVar3;
    }
  }
  if (*(int *)(iVar5 + 0x4) != 0x0)
  {
    Bitmap_Object_Blit_Transparent_Logic((void *)param_2,pos,(void *)(iVar5 + 0x32));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component representing two lab items. Initializes base list with
// 2 items and sets vtable to 0x8E92. Includes a specific bitmap from resource 2.

u16 * __stdcall16far UI_Lab_Item_Dual_ctor_init_8a9c(u16 *this_ptr)
{
  u16 uVar1;
  void *unaff_SS;
  long lVar2;
  u32 bitmap_ptr;
  u16 in_stack_00000006;
  undefined1 local_48 [0x1e];
  undefined1 local_2a [0x24];
  undefined2 uStack_6;
  undefined2 uStack_4;
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  zero_init_struct_6bytes(this_ptr + 0xb);
  zero_init_struct_6bytes(this_ptr + 0xe);
  (this_ptr + 0x11)[0x0] = 0x0;
  (this_ptr + 0x11)[0x1] = 0x0;
  *_this_ptr = 0x8e92;
  this_ptr[0x1] = 0x1020;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar1 = (u16)((ulong)lVar2 >> 0x10);
  this_ptr[0x11] = (u16)lVar2;
  this_ptr[0x12] = uVar1;
  win16_Copy_Struct_6Bytes_Wrapper_4216(CONCAT22(uVar1,this_ptr[0x11]));
  bitmap_ptr = UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic
                         (*(long *)(this_ptr + 0x11));
  uStack_4 = (undefined2)(bitmap_ptr >> 0x10);
  uStack_6 = (undefined2)bitmap_ptr;
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),(int *)*(int **)(this_ptr + 0x4),
             bitmap_ptr,(int *)(this_ptr + 0xb));
  win16_Copy_Struct_6Bytes_Wrapper_421c(*(long *)(this_ptr + 0x11));
  Resource_Manager_Load_Resource_Object_Logic
            ((void *)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10));
  File_Object_ctor();
  Bitmap_Object_ctor_from_other(local_48,unaff_SS);
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),
             (int *)((int)*(undefined4 *)(this_ptr + 0x4) + 0x8),
             (u32)CONCAT22(unaff_SS,local_48),(int *)(this_ptr + 0xe));
  Bitmap_Object_dtor(local_48);
  File_Object_dtor(local_2a);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Turn_Counter_Component_OnPaint_Logic_8bcc(undefined4 param_1)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  void *y;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  void *unaff_SS;
  void *pvVar11;
  undefined2 in_stack_0000ffa4;
  undefined1 local_58 [0x1e];
  undefined1 local_3a [0x26];
  void *local_14;
  void *pvStack_12;
  undefined2 local_c;
  void *local_a;
  uint uStack_8;
  void *local_6;
  
  uVar9 = (undefined2)((ulong)param_1 >> 0x10);
  iVar7 = (int)param_1;
  if (*(int *)(iVar7 + 0x4) != 0x0)
  {
    local_6 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0x22) + 0xa);
    pvVar11 = (void *)UI_Component_Get_Indexed_FarPtr_at_Offset_46_Logic
                                (*(long *)(iVar7 + 0x22));
    uVar6 = (uint)((ulong)pvVar11 >> 0x10);
    local_a = (void *)pvVar11;
    local_c = *(undefined2 *)((int)*(undefined4 *)(iVar7 + 0x22) + 0x16);
    uStack_8 = uVar6;
    if (*(long *)*(undefined4 *)(iVar7 + 0xc) == 0x0)
    {
      local_14 = get_with_lazy_init(local_a);
      pvStack_12 = (void *)uVar6;
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffa4,0x14));
      uVar5 = uVar6 | (uint)pvVar3;
      if (uVar5 == 0x0)
      {
        *(undefined4 *)*(undefined4 *)(iVar7 + 0xc) = 0x0;
      }
      else
      {
        pvVar4 = Sprite_Object_init_logic
                           (pvVar3,uVar6,(int)*(undefined4 *)((int)local_14 + 0x8),
                            (void *)((ulong)*(undefined4 *)((int)local_14 + 0x8) >> 0x10
                                    ),(int)*(undefined4 *)((int)local_14 + 0x4));
        puVar2 = (undefined2 *)*(undefined4 *)(iVar7 + 0xc);
        *puVar2 = pvVar4;
        ((undefined2 *)puVar2)[0x1] = uVar5;
      }
      Sprite_Object_Capture_From_Bitmap((void *)*(void **)*(undefined4 *)(iVar7 + 0xc));
      pvVar4 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      y = File_Object_ctor(local_3a,unaff_SS,0x1,pvVar4,uVar5);
      Bitmap_Object_ctor_from_other(local_58,unaff_SS);
      pvVar4 = get_with_lazy_init(local_58);
      _local_14 = (void *)CONCAT22(y,pvVar4);
      pvVar3 = allocate_memory(CONCAT22(pvVar3,0x14));
      uVar6 = (uint)y | (uint)pvVar3;
      if (uVar6 == 0x0)
      {
        *(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xc) + 0x4) = 0x0;
      }
      else
      {
        uVar10 = (undefined2)((ulong)_local_14 >> 0x10);
        uVar1 = *(undefined4 *)((int)_local_14 + 0x8);
        pvVar3 = Sprite_Object_init_logic
                           (pvVar3,(int)y,(int)uVar1,(void *)((ulong)uVar1 >> 0x10),
                            (int)*(undefined4 *)((int)_local_14 + 0x4));
        uVar10 = (undefined2)((ulong)*(undefined4 *)(iVar7 + 0xc) >> 0x10);
        iVar8 = (int)*(undefined4 *)(iVar7 + 0xc);
        *(undefined2 *)(iVar8 + 0x4) = pvVar3;
        *(uint *)(iVar8 + 0x6) = uVar6;
      }
      Sprite_Object_Capture_From_Bitmap
                ((void *)(void *)*(undefined4 *)
                                  ((int)*(undefined4 *)(iVar7 + 0xc) + 0x4));
      Bitmap_Object_dtor(local_58);
      File_Object_dtor(local_3a);
    }
    Sprite_Object_Restore_To_Bitmap
              ((void *)(void *)*(undefined4 *)((int)*(undefined4 *)(iVar7 + 0xc) + 0x4))
    ;
    Sprite_Object_Restore_To_Bitmap((void *)*(void **)*(undefined4 *)(iVar7 + 0xc));
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)local_6,(void *)((ulong)local_6 >> 0x10),(void *)(iVar7 + 0x16));
    UI_Draw_Turn_Counter_Text_Logic_8d90
              (param_1,local_c,(int)local_6,(int)((ulong)local_6 >> 0x10));
  }
  return;
}



// Renders the current game turn number as text into a bitmap, blits it to the screen,
// and invalidates the target rectangle for repainting.

void __stdcall16far
UI_Draw_Turn_Counter_Text_Logic_8d90
          (undefined4 param_1,undefined2 param_2,void *param_3)
{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *out1;
  void *unaff_SS;
  long lVar5;
  HWND16 in_stack_0000ffa0;
  int local_40 [0x2];
  void *pvStack_3c;
  void *pvStack_3a;
  undefined1 local_38 [0x28];
  undefined1 local_10 [0xa];
  int iStack_6;
  int iStack_4;
  
  out1 = (int *)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  iVar2 = UI_Component_Get_Value_at_Offset_44_Logic_2(*(long *)(iVar4 + 0x22));
  if (iVar2 != 0x0)
  {
    lVar5 = Simulator_Get_Ticks_Wrapper();
    iStack_4 = (int)((ulong)lVar5 >> 0x10);
    iStack_6 = (int)lVar5;
    if (iStack_4 != 0x0 || iStack_6 != 0x0)
    {
      sprintf_wrapper(local_10);
      uVar1 = *(undefined4 *)((int)*(undefined4 *)(iVar4 + 0x22) + 0xe);
      pvVar3 = Text_Bitmap_Object_ctor_and_render
                         (local_38,unaff_SS,(int)uVar1,(int)((ulong)uVar1 >> 0x10),0x25,
                          local_10,unaff_SS);
      Bitmap_Object_Blit_Transparent_Logic
                ((void *)param_3,(void *)((ulong)param_3 >> 0x10),(void *)(iVar4 + 0x1c)
                );
      pvStack_3c = get_with_lazy_init(local_38);
      pvStack_3a = pvVar3;
      unpack_word_pair((void *)(iVar4 + 0x1c),out1,local_40);
      InvalidateRect16(0x0,(void *)CONCAT22(param_2,unaff_SS),in_stack_0000ffa0);
      Bitmap_Object_dtor(local_38);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI list of lab research categories. Initializes base list with 37
// (0x25) items and sets vtable to 0x9204. Loads category-specific graphics from
// resource 0x1CE.

u16 * __stdcall16far UI_Lab_Item_Category_List_ctor_init_8eaa(u16 *this_ptr)
{
  void *pvVar1;
  u16 uVar2;
  long lVar3;
  u16 in_stack_00000006;
  int local_a [0x4];
  
  UI_Lab_Item_List_Base_ctor_init(this_ptr,in_stack_00000006);
  (this_ptr + 0xb)[0x0] = 0x0;
  (this_ptr + 0xb)[0x1] = 0x0;
  (this_ptr + 0x55)[0x0] = 0x0;
  (this_ptr + 0x55)[0x1] = 0x0;
  zero_init_struct_6bytes(this_ptr + 0x57);
  (this_ptr + 0x5a)[0x0] = 0x0;
  (this_ptr + 0x5a)[0x1] = 0x0;
  this_ptr[0x5c] = 0xffff;
  (this_ptr + 0x5d)[0x0] = 0x0;
  (this_ptr + 0x5d)[0x1] = 0x0;
  *_this_ptr = 0x9204;
  this_ptr[0x1] = 0x1020;
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x29);
  uVar2 = (u16)((ulong)lVar3 >> 0x10);
  this_ptr[0xb] = (u16)lVar3;
  this_ptr[0xc] = uVar2;
  win16_Copy_Struct_6Bytes_Wrapper_4222(CONCAT22(uVar2,this_ptr[0xb]));
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  this_ptr[0x5a] = (u16)pvVar1;
  this_ptr[0x5b] = uVar2;
  UI_Calculate_Rect_from_Base_and_Bitmap_Logic_8712
            ((u32)CONCAT22(in_stack_00000006,this_ptr),local_a,
             CONCAT22(uVar2,this_ptr[0x5a]),(int *)(this_ptr + 0x57));
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  this_ptr[0x5d] = (u16)lVar3;
  this_ptr[0x5e] = (u16)((ulong)lVar3 >> 0x10);
  return this_ptr;
}



// Refreshes the display of the currently selected building in the construction view.
// Consumes the selection bitmap, blits it, and draws sub-objects like footprints or
// workers.

void __stdcall16far
UI_Construction_View_Refresh_Selected_Structure_Display_9068(void *this_ptr)
{
  undefined2 *puVar1;
  void *pvVar2;
  int iVar3;
  uint uVar5;
  astruct_345 *uVar4;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  long lVar9;
  void *pvVar10;
  int iStack_a;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_345 *)this_ptr;
  pvVar10 = (void *)*(undefined4 *)((int)uVar4->field19_0x16 + 0xa);
  lVar9 = UI_Construction_Manager_Consume_Selected_Structure_Bitmap_Logic
                    (uVar4->field19_0x16);
  iVar3 = (int)((ulong)lVar9 >> 0x10);
  uVar4->field164_0xaa = (int)lVar9;
  uVar4->field165_0xac = iVar3;
  if (iVar3 == 0x0 && uVar4->field164_0xaa == 0x0)
  {
    lVar9 = UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic
                      (uVar4->field19_0x16);
    uVar4->field164_0xaa = (int)lVar9;
    uVar4->field165_0xac = (int)((ulong)lVar9 >> 0x10);
  }
  if (uVar4->field165_0xac != 0x0 || uVar4->field164_0xaa != 0x0)
  {
    UI_Lab_View_Update_Category_Graphics_from_Resource_915a(this_ptr);
    Bitmap_Object_Blit_Transparent_Logic
              ((void *)pvVar10,(void *)((ulong)pvVar10 >> 0x10),&uVar4->field_0xae);
    puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x10);
    (*(code *)*puVar1)();
    iVar3 = *(int *)((int)*(undefined4 *)&uVar4->field164_0xaa + 0xa);
    for (iStack_a = 0x0; iStack_a < iVar3; iStack_a += 0x1)
    {
      pvVar10 = (void *)Data_History_Object_Get_Point_At_Index
                                  ((void *)*(void **)&uVar4->field164_0xaa,
                                   (long)iStack_a);
      pvVar2 = (void *)((ulong)pvVar10 >> 0x10);
      uVar5 = (uint)pvVar2 | (uint)(void *)pvVar10;
      if (uVar5 != 0x0)
      {
        pvVar2 = Gameplay_Object_Draw_Logic((void *)pvVar10,pvVar2);
        uVar8 = (undefined2)(uVar4->field12_0xc >> 0x10);
        iVar6 = (int)uVar4->field12_0xc;
        *(undefined2 *)(iVar6 + iStack_a * 0x4) = pvVar2;
        *(uint *)(iVar6 + iStack_a * 0x4 + 0x2) = uVar5;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Updates the Research Lab category icons based on the current research level or state.
// Loads corresponding resources (0x1CE-0x1D2).

void __stdcall16far
UI_Lab_View_Update_Category_Graphics_from_Resource_915a(void *this_ptr)
{
  int iVar1;
  void *pvVar2;
  undefined2 uVar3;
  void *pvVar4;
  undefined2 uVar5;
  long lVar6;
  
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (undefined2)((ulong)lVar6 >> 0x10);
  iVar1 = *(int *)((int)lVar6 + 0x1e);
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar4 = (void *)this_ptr;
  if (*(int *)((int)pvVar4 + 0xb8) != iVar1)
  {
    pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    *(undefined2 *)((int)pvVar4 + 0xb4) = pvVar2;
    *(undefined2 *)((int)pvVar4 + 0xb6) = uVar3;
    *(int *)((int)pvVar4 + 0xb8) = iVar1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for an entity summary display. Selects a static configuration table based
// on current game state (civ/planet type). Sets vtable to 0xBA36.

void * __stdcall16far UI_Entity_Summary_Display_ctor_a43e(void *this_ptr)
{
  *(undefined2 *)this_ptr = 0xba36;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1020;
  if (_PTR_DAT_1050_0000_1050_4e74 != NULL)
  {
    return this_ptr;
  }
  Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  if ((0x0 < (int)g_ModeVersion_13AE) && (!SBORROW2((int)g_ModeVersion_13AE,0x1)))
  {
    if ((undefined **)g_ModeVersion_13AE == (undefined **)&p_CurrentHeapContext ||
        (int)(g_ModeVersion_13AE + -0x1) < 0x1)
    {
      PTR_DAT_1050_0000_1050_4e74 = (undefined *)0x44b4;
      goto LAB_1020_a482;
    }
    if ((u16 *)g_ModeVersion_13AE == (u16 *)&p_LastAllocatedBlock)
    {
      PTR_DAT_1050_0000_1050_4e74 = (undefined *)0x4b2c;
      goto LAB_1020_a482;
    }
  }
  PTR_DAT_1050_0000_1050_4e74 = (undefined *)0x47f0;
LAB_1020_a482:
  _PTR_DAT_1050_0000_1050_4e74 =
       (undefined *)CONCAT22(0x1050,PTR_DAT_1050_0000_1050_4e74);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Dispatches interactions for game entities, calculating world coordinates and
// submitting events to the simulator. Handles coordinate translation via vector
// addition.

void __stdcall16far
UI_Entity_Handle_Interaction_Dispatch_a49a
          (void *this_ptr,void *coords,int interaction_type)
{
  undefined4 uVar1;
  undefined2 unaff_SS;
  void *pvVar2;
  char local_136 [0x128];
  undefined2 uStack_e;
  undefined2 uStack_c;
  u8 *puStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_a = (u8 *)*(undefined4 *)((int)lStack_6 + 0x20);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_a);
  uStack_c = (undefined2)((ulong)pvVar2 >> 0x10);
  uStack_e = SUB42(pvVar2,0x0);
  if (coords != NULL)
  {
    add_3int_vectors((int *)coords,(int *)((ulong)coords >> 0x10));
    uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_136,unaff_SS,0x0,interaction_type,coords,(int)uVar1,
               (int)((ulong)uVar1 >> 0x10),(int)puStack_a,
               (int)((ulong)puStack_a >> 0x10));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(char *)CONCAT22(unaff_SS,local_136));
    return;
  }
  UI_Entity_Submit_Interaction_to_Simulator_abc0
            (this_ptr,interaction_type,uStack_e,uStack_c);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles interactions for entities within specific ranges or with specific state
// flags. Performs coordinate packing and simulator notification.

void __stdcall16far
UI_Entity_Handle_Range_Interaction_Logic_a54c(u16 arg1,u16 arg2,int range_index)
{
  undefined4 uVar1;
  int *unaff_SS;
  void *pvVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined1 local_140 [0x124];
  undefined4 *puStack_1c;
  int local_18 [0x2];
  undefined4 local_14;
  undefined *puStack_10;
  void *pvStack_e;
  undefined2 uStack_c;
  u8 *puStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_a = (u8 *)*(undefined4 *)((int)lStack_6 + 0x20);
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_a);
  uStack_c = (undefined2)((ulong)pvVar2 >> 0x10);
  pvStack_e = (void *)pvVar2;
  local_14 = _PTR_DAT_1048_0000_1048_4230;
  puStack_10 = PTR_DAT_1048_0000_1048_4234;
  puStack_1c = &local_14;
  unpack_word_pair(&local_14,unaff_SS,local_18);
  if ((range_index < 0x0) || (0x5 < range_index))
  {
    pack_3words_reverse(&local_14,(int)unaff_SS,0x0,local_18[0x0] + -0x9);
    uVar6 = SUB42(puStack_a,0x0);
    uVar7 = (undefined2)((ulong)puStack_a >> 0x10);
    uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
    uVar4 = (undefined2)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar3 = 0x14;
  }
  else
  {
    pack_3words_reverse(&local_14,(int)unaff_SS,0x0,(local_18[0x0] - range_index) + -0x3
                       );
    uVar6 = SUB42(puStack_a,0x0);
    uVar7 = (undefined2)((ulong)puStack_a >> 0x10);
    uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
    uVar4 = (undefined2)uVar1;
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    uVar3 = 0x7b;
  }
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_140,unaff_SS,0x0,uVar3,&local_14,unaff_SS,uVar4,uVar5,uVar6,uVar7);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_140));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates global state and dispatches a command for a specific entity ID, including
// coordinate packing and simulator notification. Handles special tracking for history
// items.

void __stdcall16far UI_Entity_Dispatch_Command_from_ID_a6ee(u32 coords,u16 entity_id)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  undefined1 local_13e [0x124];
  int iStack_1a;
  undefined1 local_18 [0x4];
  undefined2 uStack_14;
  int iStack_12;
  undefined2 uStack_10;
  u8 *puStack_e;
  long lStack_a;
  void *pvStack_6;
  
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(undefined **)&p_CurrentHeapContext);
  iVar2 = (int)((ulong)pvStack_6 >> 0x10);
  if ((iVar2 == 0x0 && (int)pvStack_6 == 0x0) ||
     (*(long *)((int)pvStack_6 + 0x200) == 0x8000002))
  {
    lStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    puStack_e = (u8 *)*(undefined4 *)((int)lStack_a + 0x20);
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_e);
    uStack_10 = (undefined2)((ulong)pvVar3 >> 0x10);
    iStack_12 = (int)pvVar3;
    zero_init_struct_6bytes(local_18);
    iStack_1a = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),entity_id);
    if (iStack_1a != 0x0)
    {
      uStack_14 = 0x1;
    }
    Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
              (coords,iStack_1a != 0x0,local_18,unaff_SS,iStack_12,uStack_10);
    uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
    Simulator_Command_InternalPutBldg_ctor_init_87f0
              (local_13e,unaff_SS,0x0,entity_id,local_18,unaff_SS,(int)uVar1,
               (int)((ulong)uVar1 >> 0x10),(int)*(undefined4 *)(iStack_12 + 0x4),
               (int)((ulong)*(undefined4 *)(iStack_12 + 0x4) >> 0x10));
    Simulator_Global_Process_Build_Event_Type4_835a
              (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_13e));
    if (iStack_1a != 0x0)
    {
      Simulator_Scan_and_Notify_Neighbor_Entities_Logic
                ((u16)coords,(u16)(coords >> 0x10),
                 (undefined1 *)CONCAT22(unaff_SS,local_18),*(long *)(iStack_12 + 0x4));
    }
    *(undefined4 *)((int)local_13e._288_4_ + 0x1c) = 0x8000001;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles specialized entity events (like event ID 10) or falls back to a default
// entity interaction handler.

void __stdcall16far
UI_Entity_Handle_Specialized_Event_10_or_Default_a80e(u16 x,u16 y,int event_id)
{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)(undefined **)&p_CurrentHeapContext
                     );
  iVar1 = (int)((ulong)pvVar2 >> 0x10);
  if ((iVar1 == 0x0 && (void *)pvVar2 == NULL) ||
     (*(long *)((int)(void *)pvVar2 + 0x200) == 0x8000002))
  {
    lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
    pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)lVar3 + 0x20));
    if (event_id == 0xa)
    {
      Simulator_Spawn_Random_Safe_Entity_Logic((void *)CONCAT22(y,x),pvVar2);
      return;
    }
    iVar1 = UI_Entity_Summary_Resolve_Randomized_Type_Logic(x,y,event_id);
    if (iVar1 != 0x0)
    {
      UI_Entity_Submit_Interaction_to_Simulator_abc0
                (x,y,iVar1,(void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
    }
  }
  return;
}
