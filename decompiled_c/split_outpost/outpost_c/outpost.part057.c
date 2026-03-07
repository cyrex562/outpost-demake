/*
 * Source: outpost.c
 * Chunk: 57/117
 * Original lines: 64560-65722
 * Boundaries: top-level declarations/definitions only
 */




void __stdcall16far
UI_Animation_Update_Selected_Structure_Points_8fb4(undefined4 param_1)
{
  undefined2 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  void *pvVar7;
  HWND16 in_stack_0000ffe2;
  int local_8;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(int *)((int)*(undefined4 *)(iVar4 + 0xba) + 0x1e) != 0x0)
  {
    lVar6 = UI_Construction_Manager_Get_Selected_Structure_Bitmap_Logic
                      (*(long *)(iVar4 + 0x16));
    iVar2 = (int)((ulong)lVar6 >> 0x10);
    *(undefined2 *)(iVar4 + 0xaa) = (int)lVar6;
    *(int *)(iVar4 + 0xac) = iVar2;
    if (iVar2 != 0x0 || *(int *)(iVar4 + 0xaa) != 0x0)
    {
      uVar1 = *(undefined2 *)((int)*(undefined4 *)(iVar4 + 0x16) + 0x16);
      iVar2 = *(int *)((int)*(undefined4 *)(iVar4 + 0xaa) + 0xa);
      for (local_8 = 0x0; local_8 < iVar2; local_8 += 0x1)
      {
        pvVar7 = (void *)Data_History_Object_Get_Point_At_Index
                                   ((void *)(void *)*(undefined4 *)(iVar4 + 0xaa),
                                    (long)local_8);
        if ((pvVar7 != NULL) && (0x9 < *(int *)((int)(void *)pvVar7 + 0x2e)))
        {
          lVar6 = Gameplay_Object_Update_Animation_Logic((void *)pvVar7);
          pvVar3 = (void *)((ulong)lVar6 >> 0x10);
          if (pvVar3 != NULL || (int)lVar6 != 0x0)
          {
            InvalidateRect16(0x0,(void *)CONCAT22(uVar1,pvVar3),in_stack_0000ffe2);
          }
        }
      }
    }
  }
  return;
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



// Scalar deleting destructor for the Lab Category List.

void * __stdcall16far
UI_Lab_Item_Category_List_dtor_Scalar_Deleting_logic_91de(void *this_ptr,byte flags)
{
  UI_Lab_Item_Category_List_dtor_Internal_Cleanup_logic_8f74(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI component that renders a grid (likely for the planet surface or
// building sites). Initializes vtable to 0x96C8 and sets up the rendering DC.

void * __stdcall16far UI_SubComponent_Grid_ctor_init_921c(void *this_ptr,u16 parent_id)
{
  HDC16 HVar1;
  undefined2 uVar3;
  astruct_344 *uVar2;
  undefined2 uVar4;
  long lVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_344 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar2->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_18_2_1050_3aa5 + 0x3;
  uVar2->field2_0x2 = 0x1008;
  uVar2->field3_0x4 = parent_id;
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar2->field2_0x2 = 0x1008;
  uVar2->field4_0x6 = 0x0;
  uVar2->field5_0xa = 0x0;
  uVar2->field6_0xc = 0x0;
  uVar2->field7_0xe = 0x0;
  uVar2->field8_0x10 = 0x0;
  uVar2->field9_0x12 = 0x0;
  *(undefined2 *)this_ptr = 0x96c8;
  uVar2->field2_0x2 = 0x1020;
  HVar1 = GetDC16(uVar2->field3_0x4);
  uVar2->field5_0xa = HVar1;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  uVar2->field6_0xc = *(u16 *)((int)lVar5 + 0xa);
  uVar2->field7_0xe = *(u16 *)((int)lVar5 + 0xc);
  return this_ptr;
}



// Internal destructor for the Grid sub-component. Cleans up GDI palettes and reverts
// vtables.

void __stdcall16far
UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(void *this_ptr)
{
  HPALETTE16 obj;
  astruct_343 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_343 *)this_ptr;
  *(undefined2 *)this_ptr = 0x96c8;
  uVar1->field2_0x2 = 0x1020;
  if (uVar1->field16_0x12 != 0x0)
  {
    obj = SelectPalette16(0x0,uVar1->field16_0x12,uVar1->field9_0xa);
    DeleteObject16(obj);
  }
  *(char **)this_ptr = (char *)s_0_020_1050_3ab0;
  uVar1->field2_0x2 = 0x1008;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  return;
}



void __stdcall16far UI_Simple_Bitmap_Component_OnPaint_Logic_9312(u32 param_1)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 uVar4;
  undefined2 unaff_SS;
  u32 local_26;
  undefined1 local_22 [0x20];
  
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar3 = (int)param_1;
  BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  puVar1 = (undefined4 *)*(undefined4 *)((int)*(undefined4 *)(iVar3 + 0x6) + 0xa);
  puVar2 = (undefined2 *)((int)*puVar1 + 0x4);
  (*(code *)*puVar2)(0x1538,(undefined4 *)puVar1,(int)((ulong)puVar1 >> 0x10),0x0,
                     CONCAT22(uVar4,iVar3 + 0xa));
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_22),*(HWND16 *)(iVar3 + 0x4));
  return;
}



// Core drawing logic for the grid UI. Uses complex GDI pen/brush sequences to render
// multi-colored grid lines and background tiles based on resolution-specific scaling
// data.

void __stdcall16far UI_SubComponent_Grid_Draw_Logic_9364(void *this_ptr)
{
  int *piVar1;
  undefined4 uVar2;
  HBRUSH16 HVar3;
  void *pvVar4;
  astruct_342 *uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  void *unaff_SS;
  HDC16 hdc;
  int iStack_3e;
  uint uStack_3a;
  undefined1 local_38 [0x4];
  HGDIOBJ16 HStack_34;
  HPEN16 HStack_32;
  HDC16 HStack_30;
  void *pvStack_2e;
  void *pvStack_2a;
  void *pvStack_26;
  void *pvStack_22;
  undefined4 *puStack_1e;
  undefined2 *puStack_1a;
  u16 uStack_16;
  u16 uStack_14;
  undefined4 local_12;
  undefined4 uStack_e;
  undefined4 local_a;
  undefined4 uStack_6;
  
  uVar6 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_342 *)this_ptr;
  GetClientRect16((undefined4 *)CONCAT22(unaff_SS,&local_a),uVar4->field4_0x4);
  local_12 = local_a;
  uStack_e = uStack_6;
  uStack_14 = u16_1050_4216;
  uStack_16 = u16_1050_422c;
  puStack_1a = PTR_DAT_1050_4172_1050_4212;
  puStack_1e = PTR_s_O_1050_41b2_1050_4218;
  pvStack_22 = PTR_s___1050_41da_1050_421c;
  pvStack_26 = PTR_s_A_1050_4202_1050_4220;
  pvStack_2a = PTR_DAT_1050_419a_1050_4224;
  pvStack_2e = PTR_DAT_1050_41aa_1050_4228;
  HStack_30 = *(HDC16 *)((int)uVar4->field5_0x6 + 0x12);
  uStack_3a = 0x9;
  do
  {
    uVar2 = *(undefined4 *)(uStack_3a * 0x4 + (int)(void *)pvStack_22);
    HStack_32 = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x0);
    HStack_34 = SelectObject16(0x1538,HStack_32);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[uStack_3a],
               (void *)local_a);
    LineTo16(((undefined2 *)puStack_1a)[uStack_3a],(short)uStack_6,HStack_30);
    iVar5 = uStack_14 - uStack_3a;
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[iVar5],
               (void *)local_a);
    LineTo16(((undefined2 *)puStack_1a)[iVar5],(short)uStack_6,HStack_30);
    hdc = HStack_30;
    SelectObject16(0x1538,HStack_34);
    DeleteObject16(HStack_32);
    uStack_3a -= 0x1;
  } while (uStack_3a < 0x8000);
  HVar3 = CreateSolidBrush16(0x0);
  uVar7 = (undefined2)((ulong)puStack_1a >> 0x10);
  local_a = (void *)CONCAT22(((undefined2 *)puStack_1a)[0x9] + 0x1,(void *)local_a);
  uVar7 = ((undefined2 *)puStack_1a)[0xa];
  uStack_e = CONCAT22(uVar7,(undefined2)uStack_e);
  uStack_6 = CONCAT22(uVar7,(short)uStack_6);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  DeleteObject16(HVar3);
  iStack_3e = 0x8;
  for (uStack_3a = 0x1; (int)uStack_3a < 0xa; uStack_3a += 0x1)
  {
    HVar3 = CreateSolidBrush16((COLORREF)((undefined4 *)puStack_1e)[iStack_3e + 0x1]);
    uStack_6 = CONCAT22(local_a._2_2_ + -0x1,(short)uStack_6);
    local_12 = (void *)CONCAT22(uStack_e._2_2_ + 0x1,(void *)local_12);
    uVar7 = (undefined2)((ulong)puStack_1a >> 0x10);
    local_a = (void *)CONCAT22(((undefined2 *)puStack_1a)[iStack_3e] + 0x1,
                               (void *)local_a);
    uStack_e = CONCAT22(((undefined2 *)puStack_1a)[uStack_3a + 0xa],(undefined2)uStack_e
                       );
    FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
    FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
    DeleteObject16(HVar3);
    iStack_3e += -0x1;
  }
  HVar3 = CreateSolidBrush16((COLORREF)*puStack_1e);
  local_a = (void *)((ulong)local_a & 0xffff);
  uStack_6 = CONCAT22(*puStack_1a,(short)uStack_6);
  local_12 = (void *)CONCAT22(((undefined2 *)puStack_1a)[uStack_14] + 0x1,
                              (void *)local_12);
  uStack_e = CONCAT22(uVar4->field10_0xe,(undefined2)uStack_e);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  FillRect16(HVar3,(void *)CONCAT22(HStack_30,unaff_SS),hdc);
  DeleteObject16(HVar3);
  uStack_3a = 0x3;
  do
  {
    uVar2 = *(undefined4 *)(uStack_3a * 0x4 + (int)(void *)pvStack_26);
    HStack_32 = CreatePen16((short)uVar2,(short)((ulong)uVar2 >> 0x10),0x0);
    HStack_34 = SelectObject16(0x1538,HStack_32);
    iVar5 = uStack_3a * 0x2;
    pvVar4 = (void *)(*(int *)(iVar5 + (int)(void *)pvStack_2a) + (int)(void *)local_a);
    uVar7 = (undefined2)((ulong)pvStack_2e >> 0x10);
    piVar1 = (int *)(iVar5 + (int)(void *)pvStack_2e);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,
               ((undefined2 *)puStack_1a)[*(int *)(iVar5 + (int)(void *)pvStack_2e)],
               pvVar4);
    LineTo16(((undefined2 *)puStack_1a)[uStack_14 - *piVar1],(short)pvVar4,HStack_30);
    pvVar4 = (void *)(*(int *)((uStack_16 - uStack_3a) * 0x2 + (int)(void *)pvStack_2a)
                     + (int)(void *)local_a);
    MoveToEx16((HDC16)local_38,(short)unaff_SS,((undefined2 *)puStack_1a)[*piVar1],
               pvVar4);
    LineTo16(((undefined2 *)puStack_1a)[uStack_14 - *piVar1],(short)pvVar4,HStack_30);
    SelectObject16(0x1538,HStack_34);
    DeleteObject16(HStack_32);
    uStack_3a -= 0x1;
  } while (uStack_3a < 0x8000);
  uVar4->field11_0x10 = 0x0;
  return;
}



// Scalar deleting destructor for the Grid sub-component.

void * __stdcall16far
UI_SubComponent_Grid_dtor_Scalar_Deleting_96a2(void *this_ptr,byte flags)
{
  UI_SubComponent_Grid_dtor_Internal_Cleanup_logic_92c4(this_ptr);
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
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



// Writes a standard termination marker/footer to a save game file context.

int __stdcall16far Save_File_Write_Footer_Marker_a644(u16 arg1,u16 arg2,void *file_ctx)
{
  int iVar1;
  
  iVar1 = file_context_write_footer_marker_logic((void *)file_ctx);
  return (uint)(iVar1 != 0x0);
}



// Validates the integrity of a save file by searching for the footer marker and reading
// header metadata blocks.

u16 __stdcall16far Save_File_Validate_Footer_and_Header_a65e(void *arg1,void *file_ctx)
{
  int iVar1;
  void *unaff_SS;
  undefined1 local_a [0x2];
  undefined1 local_8 [0x2];
  undefined1 local_6 [0x2];
  undefined1 local_4 [0x2];
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 != 0x0)
  {
    if (0x1 < (int)PTR_DAT_1050_0000_1050_0312)
    {
LAB_1020_a6dc:
      Simulator_Initialize_Global_Entity_Position_Structs_Logic
                ((u16)(void *)arg1,(u16)((ulong)arg1 >> 0x10),0x0);
      return 0x1;
    }
    iVar1 = file_read_check((long)file_ctx,local_4,unaff_SS);
    if (iVar1 != 0x0)
    {
      iVar1 = file_read_check((long)file_ctx,local_8,unaff_SS);
      if (iVar1 != 0x0)
      {
        iVar1 = file_read_check((long)file_ctx,local_6,unaff_SS);
        if (iVar1 != 0x0)
        {
          iVar1 = file_read_check((long)file_ctx,local_a,unaff_SS);
          if (iVar1 != 0x0) goto LAB_1020_a6dc;
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex batch processor for sub-objects (buildings/components). Iterates
// through resource list 8, updates positions, and notifies the simulator for each valid
// sub-component.

void __stdcall16far
UI_Entity_Batch_Process_SubObjects_Logic_a89e(u32 arg1,u32 *arg2,u16 arg3)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *unaff_SS;
  u16 y;
  undefined2 local_5ee;
  undefined2 uStack_5ec;
  u32 *puStack_4c2;
  int iStack_4be;
  long lStack_4bc;
  undefined1 local_4b8 [0x8];
  long lStack_4b0;
  void *pvStack_4ac;
  undefined1 local_4a8 [0x124];
  undefined1 local_384 [0x124];
  undefined1 local_260 [0x124];
  undefined1 local_13c [0x124];
  int local_18 [0x2];
  u32 local_14;
  undefined2 uStack_10;
  void *pvStack_e;
  u8 *puStack_a;
  long lStack_6;
  
  lStack_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_a = (u8 *)*(undefined4 *)((int)lStack_6 + 0x20);
  pvStack_e = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)puStack_a);
  local_14 = *arg2;
  uStack_10 = (undefined2)arg2[0x1];
  puStack_4c2 = &local_14;
  unpack_word_pair(&local_14,unaff_SS,local_18);
  pack_3words_reverse(&local_14,(int)unaff_SS,0x0,local_18[0x0]);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_13c),0x0,0x7a,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_13c));
  pack_3words_reverse(&local_14,(int)unaff_SS,0x0,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_260),0x0,0x47,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_260));
  pack_3words_reverse(&local_14,(int)unaff_SS,0x1,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_384),0x0,0x6a,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_384));
  y = (u16)(arg1 >> 0x10);
  Simulator_Scan_and_Notify_Neighbor_Entities_Logic
            ((u16)arg1,y,(u32 *)CONCAT22(unaff_SS,&local_14),(long)puStack_a);
  pack_3words_reverse(&local_14,(int)unaff_SS,0x1,local_18[0x0] + -0x2);
  Simulator_Command_InternalPutBldg2_ctor_init_8888
            ((undefined1 *)CONCAT22(unaff_SS,local_4a8),0x0,0x7f,(u16)&local_14,
             (u16)unaff_SS,0x2,0x800,(void *)0x4000002,puStack_a);
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_4a8));
  Simulator_Scan_and_Notify_Neighbor_Entities_Logic
            ((u16)arg1,y,(u32 *)CONCAT22(unaff_SS,&local_14),(long)puStack_a);
  pvStack_4ac = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x8);
  lStack_4b0 = *(long *)((int)pvStack_4ac + 0x12);
  init_long_pair(local_4b8,lStack_4b0);
  iStack_4be = 0x0;
  do
  {
    do
    {
      lStack_4bc = get_next_list_item(local_4b8);
      iVar3 = (int)((ulong)lStack_4bc >> 0x10);
      iVar2 = (int)lStack_4bc;
      if (iVar3 == 0x0 && iVar2 == 0x0)
      {
        UI_Object_Destroy_SubObject_at_Offset_12_Logic((void *)pvStack_4ac);
        return;
      }
    } while ((*(int *)(iVar2 + 0x4) != 0x3e) && (*(int *)(iVar2 + 0x4) != 0x41));
    while (0x0 < *(int *)((int)lStack_4bc + 0x6))
    {
      if ((iStack_4be == 0x0) || (iStack_4be == 0x1))
      {
        iVar2 = local_18[0x0] + -0x2;
LAB_1020_ab51:
        iStack_4be = iStack_4be + 0x1;
        pack_3words_reverse(&local_14,(int)unaff_SS,0x0,iVar2);
      }
      else
      {
        if ((iStack_4be == 0x2) || (iStack_4be == 0x3))
        {
          iVar2 = local_18[0x0] + 0x2;
          goto LAB_1020_ab51;
        }
        iStack_4be = iStack_4be + 0x1;
        Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
                  (arg1,0x0,&local_14,unaff_SS,(int)pvStack_e,
                   (int)((ulong)pvStack_e >> 0x10));
      }
      Simulator_Command_InternalPutBldg2_ctor_init_8888
                ((undefined2 *)CONCAT22(unaff_SS,&local_5ee),0x0,
                 *(u16 *)((int)lStack_4bc + 0x4),(u16)&local_14,(u16)unaff_SS,0x2,0x800,
                 (void *)0x4000002,puStack_a);
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_5ee));
      piVar1 = (int *)((int)lStack_4bc + 0x6);
      *piVar1 = *piVar1 + -0x1;
      local_5ee = 0x389a;
      uStack_5ec = 0x1008;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Submits a single entity interaction event to the game simulator after performing
// coordinate translation and vtable-based validation.

void __stdcall16far
UI_Entity_Submit_Interaction_to_Simulator_abc0
          (undefined4 param_1,int param_2,undefined4 param_3)
{
  undefined2 uVar1;
  undefined2 unaff_SS;
  u16 y;
  char local_12e [0x124];
  int iStack_a;
  undefined1 local_8 [0x4];
  undefined2 uStack_4;
  
  zero_init_struct_6bytes(local_8);
  iStack_a = search_array_for_value
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10),param_2);
  if (iStack_a != 0x0)
  {
    uStack_4 = 0x1;
  }
  y = (u16)((ulong)param_1 >> 0x10);
  Simulator_Find_Nearest_Safe_Coordinate_Spiral_Search_Logic
            ((u16)param_1,y,iStack_a != 0x0,(undefined1 *)CONCAT22(unaff_SS,local_8),
             param_3);
  uVar1 = (undefined2)((ulong)param_3 >> 0x10);
  Simulator_Command_InternalPutBldg_ctor_init_87f0
            (local_12e,unaff_SS,0x0,param_2,local_8,unaff_SS,
             *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4),
             *(undefined4 *)((int)param_3 + 0x4));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(char *)CONCAT22(unaff_SS,local_12e));
  if (iStack_a != 0x0)
  {
    Simulator_Scan_and_Notify_Neighbor_Entities_Logic
              ((u16)param_1,y,(undefined1 *)CONCAT22(unaff_SS,local_8),
               *(long *)((int)param_3 + 0x4));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Moves an entity by a specific coordinate offset (add/sub) and notifies the simulator
// of the new position.

void __stdcall16far
UI_Entity_Move_and_Notify_Simulator_ac6e(void *arg1,int arg2,int arg3,int arg4)
{
  undefined4 uVar1;
  u16 uVar2;
  int *unaff_SS;
  void *pvVar3;
  undefined **src;
  undefined1 local_146 [0x12c];
  void *pvStack_1a;
  undefined2 uStack_18;
  u8 *puStack_16;
  long lStack_12;
  undefined1 local_e [0x6];
  int local_8;
  int local_6;
  int local_4;
  
  if (arg2 == 0x0)
  {
    src = (undefined **)&p_GlobalPaletteObject;
  }
  else
  {
    src = (undefined **)((char *)s_dib_1050_4234 + 0x2);
  }
  unpack_3word_struct(src,(int *)0x1048,&local_8,unaff_SS);
  if (arg4 == 0x0)
  {
    _local_6 = CONCAT22(local_4 + arg3,local_6);
  }
  else if (arg4 == 0x1)
  {
    _local_6 = CONCAT22(local_4,local_6 + arg3);
  }
  else if (arg4 == 0x2)
  {
    _local_6 = CONCAT22(local_4 - arg3,local_6);
  }
  pack_3words_alt(local_e,(int)unaff_SS,local_8,(int)_local_6);
  lStack_12 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  puStack_16 = (u8 *)*(undefined4 *)((int)lStack_12 + 0x20);
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puStack_16);
  uStack_18 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvStack_1a = (void *)pvVar3;
  uVar2 = Simulator_Is_Coordinate_Within_Safe_Margins_Logic
                    ((u16)arg1,(u16)((ulong)arg1 >> 0x10),
                     (undefined1 *)CONCAT22(unaff_SS,local_e),
                     (u8 *)(u8 *)*(undefined4 *)((int)pvStack_1a + 0x4));
  if (uVar2 != 0x0)
  {
    uVar2 = Simulator_Validate_Interaction_at_Coords_Logic
                      (arg1,(undefined1 *)CONCAT22(unaff_SS,local_e),
                       (void *)CONCAT22(uStack_18,pvStack_1a));
    if (uVar2 != 0x0)
    {
      uVar1 = *(undefined4 *)((int)_PTR_DAT_1050_0000_1050_4e70 + 0x4);
      Simulator_Command_InternalPutBldg_ctor_init_87f0
                (local_146,unaff_SS,0x0,(-(uint)(arg2 == 0x0) & 0xfffb) + 0x7f,local_e,
                 unaff_SS,(int)uVar1,(int)((ulong)uVar1 >> 0x10),(int)puStack_16,
                 (int)((ulong)puStack_16 >> 0x10));
      Simulator_Global_Process_Build_Event_Type4_835a
                (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_146));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Scans neighbor entities within a 1-unit radius of a target coordinate and submits
// notification events (Type 6, 7, or 8) to the simulator based on neighbor types (7, 8,
// or 9). Used for updating entity states after interactions.

void __stdcall16far
Simulator_Scan_and_Notify_Neighbor_Entities_Logic
          (u16 x,u16 y,void *coords,long entity_id)
{
  undefined2 *puVar1;
  int iVar2;
  int *unaff_SS;
  bool bVar3;
  u8 *puVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  void *src;
  int *out1;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 local_17e;
  undefined2 uStack_17c;
  int iStack_5a;
  undefined4 *puStack_4e;
  int iStack_46;
  int iStack_44;
  undefined4 uStack_42;
  undefined4 *puStack_3e;
  undefined1 local_3a [0xc];
  undefined4 local_2e;
  undefined2 uStack_2a;
  void *pvStack_28;
  uint16_t uStack_26;
  int local_24;
  int local_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  u8 *puStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  int local_8;
  int local_6;
  int local_4;
  
  src = (void *)coords;
  out1 = (int *)((ulong)coords >> 0x10);
  unpack_3word_struct(src,out1,&local_8,unaff_SS);
  puVar4 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)entity_id);
  uStack_12 = (undefined2)((ulong)puVar4 >> 0x10);
  puStack_14 = (u8 *)puVar4;
  pvStack_18 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack_14);
  uStack_1c = *(undefined4 *)((int)(void *)pvStack_18 + 0x2e);
  uStack_20 = *(undefined4 *)((int)uStack_1c + 0x4);
  pvVar5 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uStack_26 = (uint16_t)((ulong)pvVar5 >> 0x10);
  pvStack_28 = (void *)pvVar5;
  puVar6 = Simulator_Get_Entity_Coords_Ptr_5b5c((int)pvStack_28,uStack_26);
  local_2e = *puVar6;
  uStack_2a = *(undefined2 *)((undefined4 *)puVar6 + 0x1);
  puStack_4e = &local_2e;
  unpack_word_pair(&local_2e,unaff_SS,&local_24);
  iStack_e = local_4 + 0x1;
  uStack_c = CONCAT22(local_4 + -0x1,local_6 - 0x1U);
  iStack_10 = local_6 + 0x1;
  if (local_4 + -0x1 < 0x0)
  {
    uStack_c = (ulong)(local_6 - 0x1U);
  }
  if (local_22 <= iStack_e)
  {
    iStack_e = local_22 + -0x1;
  }
  if ((int)uStack_c < 0x0)
  {
    uStack_c &= 0xffff0000;
  }
  if (local_24 <= iStack_10)
  {
    iStack_10 = local_24 + -0x1;
  }
  zero_init_12bytes_struct(local_3a);
  pack_two_3word_structs(local_3a,unaff_SS,local_8,iStack_10,iStack_e,local_8,uStack_c);
  puStack_3e = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_3a),
                          entity_id);
  if (puStack_3e != NULL)
  {
    uStack_42 = 0x0;
    iStack_44 = 0x0;
    for (iStack_46 = (int)uStack_c; iStack_46 <= iStack_10; iStack_46 += 0x1)
    {
      for (puStack_4e = (undefined4 *)uStack_c._2_2_; iVar2 = iStack_44,
          (int)puStack_4e <= iStack_e;
          puStack_4e = (undefined4 *)((int)puStack_4e + 0x1))
      {
        iStack_44 += 0x1;
        puVar1 = (undefined2 *)((int)*puStack_3e + 0x4);
        uVar7 = (*(code *)*puVar1)(0x1030,(undefined4 *)puStack_3e,
                                   (int)((ulong)puStack_3e >> 0x10),iVar2);
        iVar2 = (int)uVar7;
        uStack_42._3_1_ = (char)((ulong)uVar7 >> 0x18);
        bVar3 = uStack_42._3_1_ == '\0';
        uStack_42 = uVar7;
        if (bVar3)
        {
          iStack_5a = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1020_af1c;
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar9 = (undefined2)uStack_20;
            uVar10 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar8 = 0x8;
          }
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_17e,unaff_SS,0x0,0x0,uVar8,coords,uVar9,uVar10,entity_id);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_17e)
                    );
          local_17e = 0x389a;
          uStack_17c = 0x1008;
        }
LAB_1020_af1c:
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the mapped entity type ID for a specific coordinate and simulator context.
// Maps internal simulator sub-types (1-9) to standard UI entity IDs.

u16 __stdcall16far
Simulator_Get_Entity_Type_at_Coords_Logic(u16 x,u16 y,void *coords,long arg4)
{
  u16 uVar1;
  int iVar2;
  undefined2 unaff_SS;
  undefined4 *puVar3;
  void *this_ptr;
  void *pvVar4;
  char cStack_1b;
  undefined1 local_a [0x4];
  u8 *puStack_6;
  
  puVar3 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,arg4,
                      (undefined1 *)CONCAT22(unaff_SS,local_a));
  puStack_6 = (u8 *)*puVar3;
  cStack_1b = (char)((ulong)puStack_6 >> 0x18);
  if (cStack_1b == '\0')
  {
    return (u16)(u8 *)puStack_6;
  }
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puStack_6);
  pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(this_ptr);
  iVar2 = (int)((ulong)pvVar4 >> 0x10);
  if (iVar2 == 0x0 && (void *)pvVar4 == NULL)
  {
    return *(u16 *)((int)(void *)this_ptr + 0x14);
  }
  switch(*(undefined2 *)((int)(void *)pvVar4 + 0xc))
  {
  case 0x1:
    uVar1 = 0x1;
    break;
  case 0x2:
    uVar1 = 0x2;
    break;
  case 0x3:
    uVar1 = 0x3;
    break;
  case 0x4:
    uVar1 = 0x4;
    break;
  case 0x5:
    uVar1 = 0x5;
    break;
  case 0x6:
    uVar1 = 0x7;
    break;
  case 0x7:
    return 0x8;
  case 0x8:
    return 0x9;
  case 0x9:
    return 0x6;
  default:
    uVar1 = 0x0;
  }
  return uVar1;
}
