/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 2/56
 * Original lines (combined): 11071-14465
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References multiple global management pointers in segment 1050:
// - PTR_DAT_1050_14cc (String resources)
// - PTR_DAT_1050_0ed0 (Resource manager)
// - PTR_DAT_1050_5748 (Simulator state)
// Performs an indirect call through [this + 0xe8] offset 0x4.

void __stdcall16far
UI_Prompt_Load_Game_and_Init_World_Logic(void *parent_window,char *filename)
{
  undefined2 *puVar1;
  int iVar2;
  char *pcVar3;
  char *text;
  char *reg_dx;
  char *unaff_SS;
  void *pvVar4;
  long context;
  undefined2 uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_2a;
  undefined2 uStack_26;
  void *pvStack_24;
  undefined2 uStack_22;
  void *pvStack_20;
  void *pvStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined2 uStack_12;
  void *pvStack_10;
  long lStack_c;
  undefined1 local_8 [0x6];
  
  file_context_init_logic(local_8,unaff_SS);
  iVar2 = file_context_perform_load_sequence_logic(local_8);
  if (iVar2 == 0x0)
  {
    if (g_LastFileErrorMsgID == NULL)
    {
      g_LastFileErrorMsgID = (undefined *)0x6d4;
    }
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),
                        (int)g_LastFileErrorMsgID);
    pcVar3 = strdup_allocate(pcVar3);
    text = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    MessageBeep16(0x10);
    MessageBox16(0x10,text,reg_dx,(ushort)pcVar3);
    free_if_not_null(pcVar3);
    win16_app_exit_wrapper();
  }
  UI_Set_Primary_View_Panel_Logic(parent_window,(int)filename);
  lStack_c = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  pvStack_10 = (void *)*(undefined4 *)((int)lStack_c + 0x20);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),pvStack_10);
  uStack_12 = (undefined2)((ulong)pvVar4 >> 0x10);
  pvStack_14 = (void *)pvVar4;
  uStack_18 = *(undefined4 *)((int)pvStack_14 + 0x10);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)parent_window + 0xe8) + 0x4);
  (*(code *)*puVar1)(0x1030,(int)*(undefined4 *)((int)parent_window + 0xe8),
                     (int)((ulong)*(undefined4 *)((int)parent_window + 0xe8) >> 0x10),
                     (void *)pvStack_10,(int)((ulong)pvStack_10 >> 0x10),
                     *(int *)((int)uStack_18 + 0x2) + -0x1,0x2);
  pvStack_1c = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)0x4000001);
  pvStack_20 = (void *)*(undefined4 *)((int)(void *)pvStack_1c + 0x10);
  pvVar4 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),pvStack_20);
  uStack_22 = (undefined2)((ulong)pvVar4 >> 0x10);
  pvStack_24 = (void *)pvVar4;
  local_2a = *(undefined4 *)((int)pvStack_24 + 0xc);
  uStack_26 = *(undefined2 *)((int)pvStack_24 + 0x10);
  iVar2 = UI_Production_Item_Get_ID_Logic_5b00((void *)CONCAT22(uStack_12,pvStack_14));
  puVar6 = &local_2a;
  context = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,iVar2);
  UI_Main_View_Controller_Update_Viewport_from_Struct_Logic
            (context,(long)CONCAT22(unaff_SS,puVar6));
  uVar7 = 0x400;
  iVar2 = 0x1b;
  uVar5 = 0x1;
  pvVar4 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  Turn_Manager_Push_Resource_Event_Logic((void *)pvVar4,CONCAT22(uVar7,uVar5),iVar2);
  file_context_cleanup_logic(local_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global pointers in segment 1050:
// - PTR_DAT_1050_4230
// - PTR_DAT_1050_14cc
// - PTR_DAT_1050_0396
// - PTR_DAT_1050_5748
// Performs an indirect call through [local_a6] offset 0x74.

int __stdcall16far UI_Show_Message_Box_Generic_with_Simulator_Check(void *parent_window)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint reg_dx;
  uint uVar5;
  undefined2 uVar6;
  char *unaff_SS;
  undefined2 in_stack_00000006;
  void *in_stack_0000ff56;
  undefined4 local_a6;
  char local_56 [0x50];
  uint uStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  if (_p_GlobalPaletteObject == 0x0)
  {
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5f2);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_56),(char *)CONCAT22(reg_dx,pcVar3))
    ;
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    strcpy_optimized((char *)CONCAT22(unaff_SS,&local_a6),(char *)CONCAT22(reg_dx,pcVar3)
                    );
    iStack_4 = MessageBox16(0x21,(char *)&local_a6,unaff_SS,(ushort)local_56);
  }
  else
  {
    uVar6 = 0x1000;
    in_stack_0000ff56 = allocate_memory(CONCAT22(in_stack_0000ff56,0xb4));
    uVar5 = reg_dx | (uint)in_stack_0000ff56;
    if (uVar5 == 0x0)
    {
      puVar4 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      uVar6 = 0x1040;
      puVar4 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (in_stack_0000ff56,reg_dx,g_ParentHWND,0x21,0x2,0x57b,0x5f2);
    }
    local_a6 = (undefined4 *)CONCAT22(uVar5,puVar4);
    puVar2 = (undefined2 *)((int)*local_a6 + 0x74);
    iStack_4 = (*(code *)*puVar2)(uVar6,puVar4,uVar5);
  }
  uStack_6 = (uint)(iStack_4 == 0x1);
  if ((uStack_6 != 0x0) && (_p_SimulatorGlobalState != 0x0))
  {
    iVar1 = *(int *)((int)_p_SimulatorGlobalState + 0x8);
    local_a6 = (undefined4 *)CONCAT22(local_a6._2_2_,iVar1);
    if (iVar1 != 0x0)
    {
      PostMessage16(0x0,0x0,0xb4,
                    CONCAT22(in_stack_0000ff56,*(undefined2 *)((int)parent_window + 0x8)
                            ));
      uStack_6 = 0x0;
    }
  }
  return uStack_6;
}



// Targeted Scan Finding: Far Pointer
// References global state pointer at 1050:0010.
// Manages internal buffer for system colors at offset [this+0xf8].

void __stdcall16far UI_Manage_System_Colors_Logic(void *this,int mode)
{
  void *pvVar1;
  COLORREF CVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  int in_stack_00000008;
  undefined4 *COLORREF_ptr;
  int iStack_84;
  int16_t iStack_82;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 uStack_68;
  undefined2 uStack_66;
  undefined2 uStack_64;
  undefined2 uStack_62;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int16_t local_2c [0x15];
  
  local_2c[0x0] = 0x4;
  local_2c[0x1] = 0x7;
  local_2c[0x2] = 0x0;
  local_2c[0x3] = 0xf;
  local_2c[0x4] = 0x14;
  local_2c[0x5] = 0x10;
  local_2c[0x6] = 0x12;
  local_2c[0x7] = 0xd;
  local_2c[0x8] = 0xe;
  local_2c[0x9] = 0x6;
  local_2c[0xa] = 0x5;
  local_2c[0xb] = 0x8;
  local_2c[0xc] = 0x11;
  local_2c[0xd] = 0x1;
  local_2c[0xe] = 0x2;
  local_2c[0xf] = 0x3;
  local_2c[0x10] = 0x9;
  local_2c[0x11] = 0xa;
  local_2c[0x12] = 0xb;
  local_2c[0x13] = 0xc;
  local_2c[0x14] = 0x13;
  local_80 = 0x0;
  uStack_6c = 0x808080;
  iVar3 = 0x100;
  uStack_74 = 0x0;
  uStack_72 = 0x100;
  uStack_64 = 0x0;
  uStack_62 = 0x100;
  uStack_60 = 0xffff;
  uStack_5e = 0x0;
  uStack_7c = 0x2;
  uStack_7a = 0x100;
  uStack_78 = 0x2;
  uStack_76 = 0x100;
  uStack_68 = 0x2;
  uStack_66 = 0x100;
  uStack_5c = 0x2;
  uStack_5a = 0x100;
  uStack_58 = 0x0;
  uStack_50 = 0xc0c0;
  uStack_4e = 0x0;
  uStack_4c = 0x0;
  uStack_48 = 0x0;
  uStack_44 = 0x0;
  uStack_34 = 0x0;
  uStack_70 = 0x8000;
  uStack_54 = 0x8000;
  uStack_40 = 0x8000;
  uStack_3c = 0x8000;
  uStack_38 = 0x8000;
  uStack_30 = 0x8000;
  iStack_82 = 0x15;
  if (*(long *)((int)this + 0xf8) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x54));
    *(undefined2 *)((int)this + 0xf8) = pvVar1;
    *(int *)((int)this + 0xfa) = iVar3;
    for (iStack_84 = 0x0; iStack_84 < 0x15; iStack_84 += 0x1)
    {
      CVar2 = GetSysColor16(local_2c[iStack_84]);
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xf8) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this + 0xf8);
      *(COLORREF *)(iVar4 + iStack_84 * 0x4) = CVar2;
      *(int *)(iVar4 + iStack_84 * 0x4 + 0x2) = iVar3;
    }
  }
  if (in_stack_00000008 != 0x0)
  {
    CVar2 = GetSysColor16(local_2c[0x0]);
    if ((CVar2 == (COLORREF)local_80) && (iVar3 == local_80._2_2_))
    {
      return;
    }
  }
  if (p_FreeBlockListHead == NULL)
  {
    iStack_82 = 0xa;
    uStack_70 = 0xc0c0c0;
  }
  if (in_stack_00000008 == 0x0)
  {
    COLORREF_ptr = (undefined4 *)*(undefined4 *)((int)this + 0xf8);
  }
  else
  {
    COLORREF_ptr = (undefined4 *)CONCAT22(unaff_SS,&local_80);
  }
  SetSysColors16(COLORREF_ptr,(int16_t *)CONCAT22(unaff_SS,local_2c),iStack_82);
  return;
}



// Targeted Scan Finding: Far Pointer
// Initializes a far pointer to offset 10 from the provided base.

void * __stdcall16far get_far_ptr_at_offset_10_logic(void *base_ptr)
{
  return (void *)((int)base_ptr + 0xa);
}



// Targeted Scan Finding: Vtable
// Initializes Bitmap_Object vtable to 1008:48DE.
// Performs indirect call through [in_stack_00000008 + 8].

void * __stdcall16far Bitmap_Object_ctor_from_other(void *this,void *other)
{
  undefined2 *puVar1;
  undefined4 *in_stack_00000008;
  
                // Will apply prototype: void __cdecl16near
                // inferred_transform_3f92_medconf(void);
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (in_stack_00000008 == NULL)
  {
    return this;
  }
  puVar1 = (undefined2 *)((int)*in_stack_00000008 + 0x8);
  (*(code *)*puVar1)();
  Bitmap_Object_Transfer_Resource_Logic(this,other);
  Bitmap_Object_Initialize_Metadata(this);
  Bitmap_Object_Initialize_Palette(this);
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Bitmap_Object vtable to 1008:48DE.

void * __stdcall16far Bitmap_Object_ctor_basic(void *this)
{
  undefined2 in_stack_00000006;
  
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Initializes Bitmap_Object vtable to 1008:48DE.
// References global heap context pointers in segment 1050:5f2c.
// Calculates 8-bit DIB size and initializes BITMAPINFOHEADER at offset 0x10.

void * __stdcall16far
Bitmap_Object_ctor_with_alloc(void *this,void *palette_src,int height,int width)
{
  int iVar1;
  long lVar2;
  void *pvVar3;
  int in_stack_0000000c;
  int in_stack_0000000e;
  undefined4 uStack_a;
  
                // Will apply prototype: void __cdecl16near
                // inferred_builder_405c_medconf(void);
  Base_Graphic_Object_ctor(this);
  *(undefined4 *)((int)this + 0x6) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x14) = 0x0;
  *(undefined4 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x1c) = 0x0;
  *_this = 0x48de;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  iVar1 = in_stack_0000000e * 0x8 + 0x1f;
  iVar1 = ((int)(iVar1 + (iVar1 >> 0xf & 0x1fU)) >> 0x5) << 0x2;
  uStack_a = (long)in_stack_0000000c;
  lVar2 = (long)iVar1 * (long)in_stack_0000000c + 0x436;
  pvVar3 = heap_alloc_with_flags(0x1,lVar2,_g_AllocatedBlock_Offset);
  *(undefined2 *)((int)this + 0x6) = (int)lVar2;
  *(undefined2 *)((int)this + 0x8) = pvVar3;
  Bitmap_Object_Initialize_Metadata(this);
  *(int *)((int)this + 0x18) = iVar1;
  *(int *)((int)this + 0x1a) = iVar1 >> 0xf;
  *(undefined4 *)*(undefined4 *)((int)this + 0x10) = 0x28;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x4) = (long)in_stack_0000000e;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) = uStack_a;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xc) = 0x1;
  *(undefined2 *)((int)*(undefined4 *)((int)this + 0x10) + 0xe) = 0x8;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x10) = 0x0;
  *(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x14) =
       *(long *)((int)this + 0x18) * uStack_a;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x20) = 0x100;
  *(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x24) = 0x100;
  Bitmap_Object_Initialize_Palette(this);
  Palette_Object_Copy_From_Other_Logic
            ((void *)(void *)*(undefined4 *)((int)this + 0xa),
             (void *)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10));
  return this;
}



// Transfers a bitmap resource or memory block from one object to another, clearing the
// source object's reference.

void __stdcall16far Bitmap_Object_Transfer_Resource_Logic(void *this,void *src)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 in_stack_00000008;
  
  uVar3 = (undefined2)((ulong)in_stack_00000008 >> 0x10);
  iVar2 = (int)in_stack_00000008;
  *(undefined4 *)((int)this + 0x6) = *(undefined4 *)(iVar2 + 0x1a);
  *(undefined4 *)(iVar2 + 0x1a) = 0x0;
  if (*(int *)(iVar2 + 0x6) != 0x0 || (undefined4 *)*(int *)(iVar2 + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)(iVar2 + 0x4);
    (*(code *)*puVar1)();
  }
  *(undefined4 *)(iVar2 + 0x4) = 0x0;
  *(undefined4 *)(iVar2 + 0xe) = 0x0;
  *(undefined4 *)(iVar2 + 0x12) = 0x0;
  *(undefined4 *)(iVar2 + 0x16) = 0x0;
  *(undefined2 *)(iVar2 + 0x1e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global heap context pointers in segment 1050:5f2c.
// Creates a deep copy of Bitmap_Object data using far pointer memory copy (HMemCpy).

void * __stdcall16far Bitmap_Object_Clone_Logic(void *this)
{
  void *pvVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffee;
  undefined4 uStack_a;
  
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    pvVar4 = (void *)heap_get_block_size_far
                               ((void *)(void *)*(undefined4 *)((int)this + 0x6));
    pvVar1 = (void *)pvVar4;
    pvVar2 = heap_alloc_with_flags();
    uStack_a = (void *)CONCAT22(pvVar2,pvVar1);
    uVar3 = (uint)pvVar2 | (uint)pvVar1;
    if (uVar3 != 0x0)
    {
      HMemCpy((int32_t)(void *)pvVar4,(void *)*(undefined4 *)((int)this + 0x6),
              (void *)CONCAT22(pvVar2,pvVar1));
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000ffee,0x1e));
      uVar3 |= (uint)pvVar1;
      if (uVar3 == 0x0)
      {
        pvVar1 = NULL;
        uVar3 = 0x0;
      }
      else
      {
        pvVar1 = Bitmap_Object_ctor_basic(pvVar1);
      }
      *(undefined4 *)((int)pvVar1 + 0x6) = uStack_a;
      Bitmap_Object_Initialize_Metadata(pvVar1);
      Bitmap_Object_Initialize_Palette(pvVar1);
      *(undefined2 *)((int)pvVar1 + 0x1c) = 0x1;
      return pvVar1;
    }
  }
  return NULL;
}



// Clears the entire bitmap by filling each scanline with the specified color index
// (`param_2`).

void __stdcall16far Bitmap_Object_Clear_with_Color_Logic(void *this,byte color)
{
  bool bVar1;
  void *dest;
  int value;
  int y;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  undefined4 uStack_6;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(color,this));
  y = (int)((ulong)_this >> 0x10);
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (bVar1)
  {
    if (*(int *)((int)this + 0x16) == 0x0 && *(int *)((int)this + 0x14) == 0x0)
    {
      return;
    }
    uStack_6 = 0x0;
    while( true )
    {
      if (*(long *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) <= uStack_6) break;
      value = uStack_6._2_2_;
      dest = Bitmap_Object_Get_Pixel_Address(this,y,(int)uStack_6);
      memset_far(dest,value,(uint)in_stack_00000008);
      uStack_6 += 0x1;
    }
  }
  return;
}



void * __stdcall16far Bitmap_Object_Get_Internal_Buffer_Ptr_maybe(void *this)
{
  bool bVar1;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0x14);
}



u32 __stdcall16far Bitmap_Object_Ensure_Initialized(void *param_1)
{
  bool bVar1;
  void *this;
  undefined2 uVar2;
  u16 local_4;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return 0x0;
  }
  return CONCAT22(*(undefined2 *)((int)this + 0xc),*(undefined2 *)((int)this + 0xa));
}



// Calculates the memory address of a specific pixel (X, Y) within the bitmap. It
// handles the bottom-up coordinate system typical of Windows DIBs by inverting the Y
// coordinate relative to the height. Ensures the bitmap resources are initialized and
// locked before access.

void * __stdcall16far Bitmap_Object_Get_Pixel_Address(void *this,int y,int x)
{
  bool bVar1;
  int in_stack_0000000c;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)((int)*(undefined4 *)((int)this + 0x18) *
                  (((int)*(undefined4 *)((int)*(undefined4 *)((int)this + 0x10) + 0x8) -
                   x) + -0x1) + in_stack_0000000c + *(int *)((int)this + 0x14));
}



void __stdcall16far Bitmap_Object_Render_to_DC(void *param_1,u32 param_2,HDC16 *param_3)
{
  bool bVar1;
  void *this;
  int x_dest;
  undefined2 uVar2;
  short y_dest;
  u16 local_6;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  this = (void *)param_1;
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return;
  }
  y_dest = (short)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  x_dest = (int)*(undefined4 *)((int)this + 0x10);
  SetDiBitsToDevice16(0x0,x_dest,y_dest,(short)*(undefined4 *)((int)this + 0x14),
                      (short)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                      *(short *)(x_dest + 0x8),0x0,0x0,0x0,
                      (void *)*(short *)(x_dest + 0x8),
                      (void *)*(undefined2 *)(x_dest + 0x4),(ushort)param_2);
  return;
}



// Renders the bitmap object onto a destination device context (HDC) using the
// `StretchDIBits` Windows API. It automatically handles resource initialization,
// locking, and maps internal bitmap metadata to the API parameters.

void __stdcall16far Bitmap_Object_Draw_To_DC(void *this,HDC16 hdc)
{
  bool bVar1;
  int width_dst;
  short height_dst;
  
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(int *)((int)this + 0x8) == 0x0 && *(int *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(int *)((int)this + 0xc) == 0x0 && *(int *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return;
  }
  height_dst = (short)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
  width_dst = (int)*(undefined4 *)((int)this + 0x10);
  StretchDiBits16(0x20,0xcc,0x0,width_dst,height_dst,
                  (short)*(undefined4 *)((int)this + 0x14),
                  (short)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),
                  *(short *)(width_dst + 0x8),*(short *)(width_dst + 0x4),NULL,NULL,
                  *(short *)(width_dst + 0x8),*(short *)(width_dst + 0x4));
  return;
}



void * __stdcall16far get_with_lazy_init(void *this)
{
  bool bVar1;
  undefined2 in_stack_00000006;
  
                // Lazy-initialized getter - ensures fields at offset 6 and 10 are
                // initialized, then returns long from offset 0x10-0x12. Returns 0 if
                // init fails.
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    Bitmap_Object_Initialize_Metadata(this);
  }
  if (*(long *)((int)this + 0x6) == 0x0)
  {
    bVar1 = false;
  }
  else
  {
    if (*(long *)((int)this + 0xa) == 0x0)
    {
      Bitmap_Object_Initialize_Palette(this);
    }
    bVar1 = true;
  }
  if (!bVar1)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0x10);
}



// Internal routine that initializes bitmap metadata from a raw memory block or file
// resource. It calculates the correct offsets for the BITMAPINFOHEADER and pixel data
// (DIB bits), and determines the scanline stride (pitch) using standard 4-byte
// alignment rules.

void __stdcall16far Bitmap_Object_Initialize_Metadata(void *this)
{
  uint uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 in_stack_00000006;
  undefined4 uStack_e;
  int iVar2;
  
  if (*(long *)((int)this + 0x6) != 0x0)
  {
    iVar3 = *(int *)((int)this + 0x8);
    iVar2 = (int)*(undefined4 *)((int)this + 0x6);
    uVar1 = iVar2 + 0xe;
    *(undefined4 *)((int)this + 0x10) =
         CONCAT22((int)((ulong)*(undefined4 *)((int)this + 0x6) >> 0x10),uVar1);
    *(int *)((int)this + 0x14) = iVar2 + 0x436;
    *(int *)((int)this + 0x16) = iVar3 + (-(uint)(0xfbd7 < uVar1) & 0x6c);
    uVar4 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x10) >> 0x10);
    iVar3 = (int)*(undefined4 *)((int)this + 0x10);
    uStack_e = (ulong)*(uint *)(iVar3 + 0xe);
    *(long *)((int)this + 0x18) =
         (long)(uStack_e * *(long *)(iVar3 + 0x4) + 0x1f) / 0x20 << 0x2;
  }
  return;
}



// Scalar deleting destructor for the Bitmap_Object class. Calls the destructor and
// optionally frees the object memory.

void * __stdcall16far Bitmap_Object_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Bitmap_Object_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global resource manager in segment 1050 (offset 0ed0) to retrieve theme
// resource 0x48.
// Maps theme colors to internal palette.

void __stdcall16far Palette_Object_Init_From_Global_Theme_Logic(void *this)
{
  undefined4 uVar1;
  undefined2 uVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined2 uStack_12;
  undefined2 uStack_10;
  undefined2 uStack_a;
  
  lVar3 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar2 = (undefined2)((ulong)lVar3 >> 0x10);
  uVar1 = *(undefined4 *)((int)lVar3 + 0x18);
  uStack_12 = *(int *)((int)lVar3 + 0x16) / 0x2;
  for (uStack_10 = 0x0; uStack_a = (int)uVar1, uStack_10 < uStack_12; uStack_10 += 0x1)
  {
    Palette_Object_Set_Color_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x4),
               (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
               uStack_10 * 0x4 + uStack_a);
  }
  for (uStack_12 = 0x100 - uStack_12; uStack_12 < 0x100; uStack_12 += 0x1)
  {
    Palette_Object_Set_Color_Logic
              ((void *)(void *)*(undefined4 *)((int)this + 0x4),
               (void *)((ulong)*(undefined4 *)((int)this + 0x4) >> 0x10),
               uStack_10 * 0x4 + uStack_a);
    uStack_10 += 0x1;
  }
  return;
}
