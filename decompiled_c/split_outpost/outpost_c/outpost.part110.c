/*
 * Source: outpost.c
 * Chunk: 110/117
 * Original lines: 125699-126774
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for sub-dialog type 5800. Handles complex collection refreshes by
// re-allocating buffers and re-populating items, and synchronizes entity status.

ulong __stdcall16far
UI_SubDialog_Type5800_On_Command_5800
          (undefined4 *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)
{
  undefined2 *puVar1;
  void *pvVar2;
  u16 *puVar3;
  ushort uVar4;
  HWND16 enable;
  int iVar5;
  int iVar6;
  undefined2 unaff_SI;
  undefined2 uVar7;
  undefined2 unaff_SS;
  void *pvVar8;
  ulong uVar9;
  undefined4 *hwnd;
  undefined4 local_18;
  undefined1 local_14 [0x8];
  u16 local_c;
  void *local_a;
  void *local_6;
  
  if (param_4._2_2_ == 0xeb)
  {
    local_6 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    iVar5 = (int)((ulong)local_6 >> 0x10);
    local_a = (void *)param_1[0x24];
    if (local_a == NULL)
    {
      return 0x0;
    }
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (iVar5 == 0x0 && pvVar2 == NULL)
    {
      pvVar2 = NULL;
      iVar5 = 0x0;
    }
    else
    {
      pvVar8 = Helper_ZeroFill_24Bytes_a598((void *)CONCAT22(iVar5,pvVar2));
      iVar5 = (int)((ulong)pvVar8 >> 0x10);
      pvVar2 = (void *)pvVar8;
    }
    *(void **)(param_1 + 0x24) = pvVar2;
    *(int *)((int)param_1 + 0x92) = iVar5;
    *(undefined2 *)param_1[0x24] = 0x6;
    local_c = *(u16 *)param_1[0x24];
    puVar3 = allocate_memory(CONCAT22(unaff_SI,local_c * 0xa + 0x2));
    local_18 = (u16 *)CONCAT22(iVar5,puVar3);
    if (iVar5 == 0x0 && puVar3 == NULL)
    {
      *(undefined4 *)((int)param_1[0x24] + 0x2) = 0x0;
    }
    else
    {
      *local_18 = local_c;
      call_function_n_times((void *)0xa564,0x1040,local_c);
      uVar7 = (undefined2)((ulong)param_1[0x24] >> 0x10);
      iVar6 = (int)param_1[0x24];
      *(int *)(iVar6 + 0x2) = (int)(puVar3 + 0x1);
      *(int *)(iVar6 + 0x4) = iVar5;
    }
    *(undefined4 *)((int)param_1[0x24] + 0x6) =
         *(undefined4 *)((int)(void *)local_a + 0x6);
    *(undefined2 *)((int)param_1[0x24] + 0xa) = 0x4;
    *(undefined2 *)((int)param_1[0x24] + 0x12) = *(undefined2 *)((int)param_1 + 0xa);
    uVar7 = 0x1010;
    Simulator_Event_Dispatch_Table_Dispatch_Logic
              ((void *)local_6,0x10505d78,param_1[0x24]);
    if (local_a != NULL)
    {
      UI_Managed_Collection_dtor_Internal_a5d0(local_a);
      uVar7 = 0x1000;
      free_if_not_null((void *)local_a);
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)CONCAT22(param_2,param_1) + 0x70);
    hwnd = param_1;
    (*(code *)*puVar1)(uVar7,param_1,param_2);
    uVar4 = UI_Component_Sync_Entity_Status_to_9A_Logic_5cd6(param_1);
    if (uVar4 != 0x0)
    {
      UI_Map_Entity_Type_to_Category_ID_Logic_5eaa(param_1);
      *(undefined2 *)(param_1 + 0x25) = 0x0;
    }
    Colony_Calculate_Efficiency_Percentage_Logic_5dc4(param_1);
    GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_14),
                    *(HWND16 *)((int)param_1 + 0x6));
    InvalidateRect16(*(BOOL16 *)(param_1 + 0x27),
                     (void *)((ulong)*(uint *)((int)param_1 + 0x6) << 0x10),(HWND16)hwnd
                    );
    if (*(int *)(param_1 + 0x27) != 0x0)
    {
      *(undefined2 *)(param_1 + 0x27) = 0x0;
    }
  }
  else
  {
    if (param_4._2_2_ != 0x13b)
    {
      uVar9 = UI_SubDialog_Complex_Command_Handler_b54a(param_1,param_2,param_3,param_4)
      ;
      return uVar9;
    }
    enable = GetDlgItem16(0x1790,*(short *)((int)param_1 + 0x6));
    EnableWindow16(0x1,enable);
  }
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex OnPaint handler for sub-dialog type 5A06. Manages GDI objects, selects the
// global palette, and draws custom grids and indicators using resource-loaded bitmaps.

undefined2 __stdcall16far UI_SubDialog_Type5A06_OnPaint_Logic_5a06(undefined4 param_1)
{
  void *pvVar1;
  undefined4 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  HPALETTE16 HVar5;
  undefined4 *puVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int16_t iVar9;
  int iVar10;
  HPEN16 obj;
  HGDIOBJ16 obj_00;
  HDC16 hdc;
  HDC16 hdc_00;
  int iVar11;
  int in_DX;
  undefined2 extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  undefined2 extraout_DX_02;
  undefined2 extraout_DX_03;
  undefined2 uVar12;
  int iVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  uint unaff_SS;
  undefined4 uVar16;
  HDC16 *pHVar17;
  ulong uVar18;
  undefined2 uVar19;
  uint local_52;
  int local_48;
  int local_44;
  undefined4 local_36;
  HDC16 local_2c;
  undefined1 local_2a [0x20];
  undefined1 local_a [0x8];
  
  uVar14 = (undefined2)((ulong)param_1 >> 0x10);
  iVar13 = (int)param_1;
  GetWindowRect16((undefined1 *)CONCAT22(unaff_SS,local_a),*(HWND16 *)(iVar13 + 0x6));
  local_2c = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_2a),
                          *(HWND16 *)(iVar13 + 0x6));
  pvVar1 = (void *)*(undefined4 *)((int)_p_GlobalPaletteObject + 0xe);
  uVar15 = 0x1008;
  HVar5 = Palette_Object_Select_And_Realize_Wrapper_Far
                    ((void *)pvVar1,(HDC16)((ulong)pvVar1 >> 0x10));
  local_36 = NULL;
  if (*(int *)(iVar13 + 0x98) != 0x0)
  {
    puVar6 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    local_36 = (undefined4 *)CONCAT22(in_DX,puVar6);
    iVar11 = in_DX;
    pvVar7 = get_with_lazy_init(puVar6);
    if (iVar11 == 0x0 && pvVar7 == NULL)
    {
      uVar15 = 0x0;
      if (local_36 != NULL)
      {
        if (local_36 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*local_36)(0x1008,puVar6,in_DX,0x1);
          uVar15 = extraout_DX;
        }
      }
      puVar6 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      local_36 = (undefined4 *)CONCAT22(uVar15,puVar6);
    }
    uVar15 = 0x1538;
    GetSystemMetrics16(0x4);
    puVar3 = (undefined2 *)((int)*local_36 + 0x4);
    (*(code *)*puVar3)();
    in_DX = extraout_DX_00;
  }
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*local_36)
                (uVar15,(undefined4 *)local_36,(int)((ulong)local_36 >> 0x10),0x1);
      in_DX = extraout_DX_01;
    }
  }
  puVar8 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_36 = (undefined4 *)CONCAT22(in_DX,puVar8);
  pHVar17 = &local_2c;
  uVar12 = 0x4;
  uVar19 = 0xd;
  iVar9 = GetSystemMetrics16(0x4);
  iVar10 = -(iVar9 + -0x23);
  puVar4 = (undefined2 *)*local_36;
  puVar3 = (undefined2 *)puVar4 + 0x2;
  puVar6 = puVar8;
  iVar11 = in_DX;
  (*(code *)*puVar3)();
  uVar15 = extraout_DX_02;
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      puVar3 = (undefined2 *)puVar4;
      (*(code *)*puVar3)(0x1538,puVar8,in_DX,0x1,puVar6,iVar11,iVar10,uVar12,uVar19,
                         pHVar17);
      uVar15 = extraout_DX_03;
    }
  }
  obj = CreatePen16(0x25,0x100,0x0);
  obj_00 = SelectObject16(0x1538,obj);
  puVar6 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_36 = (undefined4 *)CONCAT22(uVar15,puVar6);
  uVar12 = uVar15;
  pvVar7 = get_with_lazy_init(puVar6);
  uVar16 = *(undefined4 *)((int)pvVar7 + 0x4);
  uVar2 = *(undefined4 *)((int)pvVar7 + 0x8);
  iVar9 = GetSystemMetrics16(0x4);
  hdc = -(iVar9 + -0xc1);
  iVar9 = GetSystemMetrics16(0x4);
  local_48 = (int)uVar2;
  hdc_00 = 0xc5 - (iVar9 - local_48);
  MoveTo16(hdc,0x82,local_2c);
  local_44 = (int)uVar16;
  iVar11 = local_44 * 0xa + 0x85;
  LineTo16(hdc,iVar11,local_2c);
  LineTo16(hdc_00,iVar11,local_2c);
  LineTo16(hdc_00,0x82,local_2c);
  LineTo16(hdc,0x82,local_2c);
  for (local_52 = 0x0; local_52 < *(uint *)(iVar13 + 0x94); local_52 += 0x1)
  {
    pHVar17 = &local_2c;
    uVar18 = (ulong)unaff_SS;
    uVar16 = CONCAT22(local_44 * local_52 + 0x84,0x4);
    iVar9 = GetSystemMetrics16(0x4);
    puVar3 = (undefined2 *)((int)*local_36 + 0x4);
    (*(code *)*puVar3)(0x1538,puVar6,uVar15,-(iVar9 + -0xc4),uVar16,pHVar17,uVar18);
  }
  if (local_36 != NULL)
  {
    if (local_36 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*local_36)(0x1538,puVar6,uVar15,0x1);
    }
  }
  SelectObject16(0x1538,obj_00);
  DeleteObject16(obj);
  HVar5 = SelectPalette16(0x0,HVar5,local_2c);
  DeleteObject16(HVar5);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_2a),*(HWND16 *)(iVar13 + 0x6));
  return 0x0;
}



// Synchronizes an internal state field (offset 0x9A) with the linked entity's status
// value (offset 0x20). Returns 1 if a change occurred.

ushort __stdcall16far UI_Component_Sync_Entity_Status_to_9A_Logic_5cd6(void *this_ptr)
{
  int iVar1;
  ulong uVar2;
  undefined2 in_stack_00000006;
  
  uVar2 = UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(this_ptr);
  if (uVar2 != 0x0)
  {
    iVar1 = *(int *)((int)uVar2 + 0x20);
    if (*(int *)((int)this_ptr + 0x9a) != iVar1)
    {
      *(int *)((int)this_ptr + 0x9a) = iVar1;
      return 0x1;
    }
  }
  return 0x0;
}



// Retrieves a simulator entity object by resolving the packed ID stored at offset 0x90
// of the UI component.

ulong __stdcall16far UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(void *this_ptr)
{
  u16 iVar2;
  undefined2 uVar1;
  void *uVar4;
  undefined2 in_stack_00000006;
  u16 iVar1;
  
  uVar1 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x90) >> 0x10);
  iVar2 = (u16)*(undefined4 *)((int)this_ptr + 0x90);
  iVar1 = *(u16 *)(iVar2 + 0x6);
  if (*(int *)(iVar2 + 0x8) != 0x0 || iVar1 != 0x0)
  {
    uVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                      ((void *)CONCAT22(*(int *)(iVar2 + 0x8),iVar1));
    return (ulong)uVar4;
  }
  return 0x0;
}



// Maps specific entity type IDs (0x5F, 0x28, 0x29, 0x5D, 0x5E) to internal state
// identifiers (0x53, 0x54, 0x55, 0x51, 0x52).

void __stdcall16far UI_Component_Map_Entity_Type_to_State_Logic_5d42(void *this_ptr)
{
  uint uVar1;
  char cVar2;
  ulong uVar3;
  undefined2 in_stack_00000006;
  
  uVar3 = UI_Component_Get_Simulator_Entity_via_90_Logic_5d12(this_ptr);
  if (uVar3 != 0x0)
  {
    uVar1 = *(uint *)((int)uVar3 + 0xc);
    if (uVar1 == 0x5f)
    {
      *(undefined2 *)((int)this_ptr + 0x96) = 0x53;
      return;
    }
    if (uVar1 < 0x60)
    {
      cVar2 = (char)uVar1;
      if (cVar2 == '(')
      {
        *(undefined2 *)((int)this_ptr + 0x96) = 0x54;
        return;
      }
      if (cVar2 == ')')
      {
        *(undefined2 *)((int)this_ptr + 0x96) = 0x55;
        return;
      }
      if (cVar2 == ']')
      {
        *(undefined2 *)((int)this_ptr + 0x96) = 0x51;
        return;
      }
      if (cVar2 == '^')
      {
        *(undefined2 *)((int)this_ptr + 0x96) = 0x52;
        return;
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates a colony's resource efficiency percentage by comparing current stockpiles
// (from Resource 3) against targets in Resource 0x31/0x41. Stores the result at offset
// 0x94.

uint __stdcall16far Colony_Calculate_Efficiency_Percentage_Logic_5dc4(void *this_ptr)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined2 in_stack_00000006;
  int id;
  uint uStack_12;
  
  lVar4 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar3 = (uint)lVar4;
  Simulator_Validate_ID_8000001_Logic(uVar3);
  if (uVar3 == 0x0)
  {
    *(undefined2 *)((int)this_ptr + 0x94) = 0x0;
    *(undefined2 *)((int)this_ptr + 0x9c) = 0x1;
  }
  uStack_12 = uVar3;
  if (-0x1 < (int)uVar3)
  {
    if (*(int *)((int)this_ptr + 0x9a) < 0x72)
    {
      id = 0x31;
    }
    else
    {
      id = 0x41;
    }
    puVar5 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,id);
    puVar1 = (undefined2 *)((int)*puVar5 + 0x14);
    lVar4 = (*(code *)*puVar1)(0x1010,(undefined4 *)puVar5,(int)((ulong)puVar5 >> 0x10),
                               *(int *)((int)this_ptr + 0x9a),
                               *(int *)((int)this_ptr + 0x9a) >> 0xf);
    if (lVar4 == 0x0)
    {
      uStack_12 = 0x0;
    }
    else
    {
      uVar2 = *(undefined4 *)((int)lVar4 + 0x16);
      uStack_12 = *(uint *)((int)uVar2 + 0x4);
    }
    if ((uStack_12 != 0x0) && (uVar3 != 0x0))
    {
      uVar3 = (int)((uStack_12 - uVar3) * 0x64) / (int)uStack_12;
      *(uint *)((int)this_ptr + 0x94) = uVar3 / 0xa;
      uStack_12 = uVar3 / 0xa;
      if (0x4 < uVar3 % 0xa)
      {
        uStack_12 = uVar3 / 0xa + 0x1;
        *(uint *)((int)this_ptr + 0x94) = uStack_12;
      }
    }
  }
  return uStack_12;
}



// A massive dispatcher that maps simulator entity types to discrete UI category IDs
// (0x0-0x4C) for grouping in lists and summaries.

int __stdcall16far UI_Map_Entity_Type_to_Category_ID_Logic_5eaa(void *this_ptr)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  pvVar1 = (void *)*(int *)((int)this_ptr + 0x9a);
  if (true)
  {
    pvVar1 = this_ptr;
    switch((void *)*(int *)((int)this_ptr + 0x9a))
    {
    case NULL:
    case (void *)0x70:
    case (void *)0x71:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x0;
      return (int)this_ptr;
    case (void *)0x1:
    case (void *)0x2:
      *(undefined2 *)((int)this_ptr + 0x98) = 0xd;
      return (int)this_ptr;
    case (void *)0x3:
      *(undefined2 *)((int)this_ptr + 0x98) = 0xe;
      return (int)this_ptr;
    case (void *)0x4:
    case (void *)0x4b:
      *(undefined2 *)((int)this_ptr + 0x98) = 0xf;
      break;
    case (void *)0x5:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x10;
      return (int)this_ptr;
    case (void *)0x6:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x11;
      return (int)this_ptr;
    case (void *)0x7:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x12;
      break;
    case (void *)0x8:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x13;
      break;
    case (void *)0x9:
    case (void *)0xa:
    case (void *)0xb:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x14;
      break;
    case (void *)0xc:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x18;
      break;
    case (void *)0xd:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x19;
      break;
    case (void *)0xe:
    case (void *)0x76:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x17;
      break;
    case (void *)0xf:
    case (void *)0x10:
    case (void *)0x11:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1a;
      break;
    case (void *)0x12:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1b;
      break;
    case (void *)0x13:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1c;
      break;
    case (void *)0x14:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1d;
      break;
    case (void *)0x15:
    case (void *)0x16:
    case (void *)0x17:
    case (void *)0x18:
    case (void *)0x19:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1e;
      break;
    case (void *)0x1a:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x1f;
      break;
    case (void *)0x1b:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x20;
      break;
    case (void *)0x1c:
    case (void *)0x1d:
    case (void *)0x1e:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x21;
      break;
    case (void *)0x1f:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x22;
      break;
    case (void *)0x20:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x23;
      break;
    case (void *)0x21:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x24;
      break;
    case (void *)0x22:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x25;
      break;
    case (void *)0x23:
    case (void *)0x24:
    case (void *)0x25:
    case (void *)0x26:
    case (void *)0x27:
    case (void *)0x28:
    case (void *)0x29:
    case (void *)0x2a:
    case (void *)0x2b:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x26;
      break;
    case (void *)0x2c:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x27;
      break;
    case (void *)0x2d:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x28;
      break;
    case (void *)0x2e:
    case (void *)0x2f:
    case (void *)0x30:
    case (void *)0x31:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x29;
      break;
    case (void *)0x32:
    case (void *)0x33:
    case (void *)0x34:
    case (void *)0x35:
    case (void *)0x4d:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2a;
      break;
    case (void *)0x36:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2b;
      break;
    case (void *)0x37:
    case (void *)0x38:
    case (void *)0x39:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2c;
      break;
    case (void *)0x3a:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2d;
      break;
    case (void *)0x3b:
    case (void *)0x3c:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2e;
      break;
    case (void *)0x3d:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x2f;
      break;
    case (void *)0x3e:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x30;
      break;
    case (void *)0x3f:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x31;
      break;
    case (void *)0x40:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x32;
      break;
    case (void *)0x41:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x33;
      break;
    case (void *)0x42:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x34;
      break;
    case (void *)0x43:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x35;
      break;
    case (void *)0x44:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x36;
      break;
    case (void *)0x45:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x37;
      break;
    case (void *)0x46:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x38;
      break;
    case (void *)0x47:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x39;
      break;
    case (void *)0x48:
    case (void *)0x49:
    case (void *)0x4a:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3a;
      break;
    case (void *)0x4c:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3b;
      break;
    case (void *)0x4e:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3c;
      break;
    case (void *)0x4f:
    case (void *)0x50:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3d;
      break;
    case (void *)0x51:
    case (void *)0x52:
    case (void *)0x53:
    case (void *)0x54:
    case (void *)0x55:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3e;
      break;
    case (void *)0x56:
    case (void *)0x57:
    case (void *)0x58:
    case (void *)0x59:
    case (void *)0x5a:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x3f;
      break;
    case (void *)0x5b:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x40;
      break;
    case (void *)0x5c:
    case (void *)0x5d:
    case (void *)0x5e:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x41;
      break;
    case (void *)0x5f:
    case (void *)0x60:
    case (void *)0x61:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x42;
      break;
    case (void *)0x62:
    case (void *)0x63:
    case (void *)0x64:
    case (void *)0x65:
    case (void *)0x66:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x43;
      break;
    case (void *)0x67:
    case (void *)0x68:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x44;
      break;
    case (void *)0x69:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x45;
      break;
    case (void *)0x6a:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x46;
      break;
    case (void *)0x6b:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x47;
      break;
    case (void *)0x6c:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x48;
      break;
    case (void *)0x6d:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x49;
      break;
    case (void *)0x6e:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x4a;
      break;
    case (void *)0x6f:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x4b;
      break;
    case (void *)0x74:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x15;
      break;
    case (void *)0x75:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x16;
      break;
    case (void *)0x78:
    case (void *)0x7a:
    case (void *)0x7b:
    case (void *)0x7c:
    case (void *)0x7d:
    case (void *)0x7e:
    case (void *)0x7f:
    case (void *)0x80:
    case (void *)0x81:
    case (void *)0x82:
      *(undefined2 *)((int)this_ptr + 0x98) = 0x4c;
    }
  }
  return (int)pvVar1;
}



void * __stdcall16far
UI_SubDialog_dtor_Scalar_Deleting_vB0F8_6360(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0x67BA (vtable 0x67BA). Links to Resource 0x2B and
// triggers an immediate virtual update. Base ID 0x185.

ushort __stdcall16far
UI_SubDialog_Type67BA_ctor_init_6402(void *this_ptr,ushort parent_hwnd)
{
  astruct_49 *uVar1;
  void *puVar3;
  undefined2 in_stack_00000008;
  void *puVar1;
  
  UI_SubDialog_Base_ctor_init_7728(_this_ptr,0x1,0x18500000,in_stack_00000008);
  *(undefined4 *)((int)this_ptr + 0x8e) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x92) = 0x0;
  *_this_ptr = 0x67ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  *(undefined2 *)((int)this_ptr + 0x92) = (int)puVar3;
  *(undefined2 *)((int)this_ptr + 0x94) = (int)((ulong)puVar3 >> 0x10);
  puVar1 = (void *)((int)*(undefined4 *)*(undefined4 *)((int)this_ptr + 0x92) + 0x4);
  (**(code **)puVar1)();
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_Type67BA_dtor_Internal_6470(void *this_ptr)
{
  astruct_48 *uVar1;
  void *unaff_CS;
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x67ba;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  if (*(long *)((int)this_ptr + 0x92) != 0x0)
  {
    unaff_CS = (void *)0x1010;
    UI_Container_Remove_Item_at_Offset_4_Logic
              ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x92),
               (long)CONCAT22(in_stack_00000006,this_ptr));
  }
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e));
  UI_SubDialog_Base_dtor_Internal_782c(this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Loads a sequence of strings (0x7FF-0x802) and displays them in a combined message box
// to provide granular resource details.

void __stdcall16far UI_Show_Resource_Detail_Summary_MessageBox_64ca(void)
{
  char *ptr;
  undefined2 in_DX;
  char *unaff_SS;
  undefined2 in_stack_0000fdee;
  char local_206 [0x102];
  char local_104 [0x102];
  
  ptr = allocate_memory(CONCAT22(in_stack_0000fdee,0x1000));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             (long)CONCAT22(0x57b,unaff_SS));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(ptr,0x3ff),
             CONCAT22(0x7ff,in_DX));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x800,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x801,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_104,0x3ff),
             (long)CONCAT22(0x802,unaff_SS));
  strcat_append((char *)CONCAT22(in_DX,ptr),(char *)CONCAT22(unaff_SS,local_104));
  MessageBox16(0x0,local_206,unaff_SS,(ushort)ptr);
  free_if_not_null(ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes and positions a specialized sub-dialog with multiple complex controls,
// setting up their geometry based on the current game version and system flags.

void __stdcall16far UI_SubDialog_Type65BA_Initialize_and_Layout_65ba(void *param_1)
{
  void *pvVar1;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 unaff_SI;
  undefined2 uVar5;
  undefined2 unaff_SS;
  void *this_ptr;
  int x;
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 *local_1a;
  undefined *puStack_18;
  int local_a;
  int local_8;
  long local_6;
  
  this_ptr = (void *)param_1;
  x = (int)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr);
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
  puVar3 = (undefined *)((ulong)local_6 >> 0x10);
  local_8 = Get_Outpost_Version_Number();
  if (_g_AllocatedBlock_Offset == NULL)
  {
    local_1a = init_memory_allocator();
  }
  else
  {
    local_1a = (undefined2 *)g_AllocatedBlock_Offset;
    puVar3 = g_AllocatedBlock_Segment;
  }
  puStack_18 = puVar3;
  pvVar2 = alloc_with_hooks((ulong)(uint)((local_8 + 0x2) * 0x4),0x1,local_1a);
  *(undefined2 *)((int)this_ptr + 0x8e) = pvVar2;
  *(undefined2 *)((int)this_ptr + 0x90) = puVar3;
  for (local_a = 0x1; local_a <= local_8; local_a += 0x1)
  {
    local_1a = UI_System_Update_Ship_Link_Flag_and_Get_Entry_Ptr((int)local_6);
    local_22 = *local_1a;
    local_20 = local_1a[0x1];
    local_1e = 0x1;
    local_1c = 0x1;
    puStack_18 = puVar3;
    MapDialogRect16((undefined2 *)CONCAT22(unaff_SS,&local_22),
                    *(HWND16 *)((int)this_ptr + 0x6));
    pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x42));
    if (puVar3 == NULL && pvVar2 == NULL)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)this_ptr + 0x8e) + local_a * 0x4) = 0x0;
      puVar3 = NULL;
    }
    else
    {
      puVar3 = UI_Complex_Control_ctor
                         (pvVar2,puVar3,0x0,local_20,local_22,0x101,0x100,0xff,
                          local_1a[0x2],*(undefined2 *)((int)this_ptr + 0x6));
      uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
      iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
      *(undefined2 *)(iVar4 + local_a * 0x4) = pvVar2;
      *(undefined2 *)(iVar4 + local_a * 0x4 + 0x2) = puVar3;
    }
    uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10);
    iVar4 = (int)*(undefined4 *)((int)this_ptr + 0x8e);
    if (*(long *)(iVar4 + local_a * 0x4) != 0x0)
    {
      pvVar1 = (void *)*(undefined4 *)(iVar4 + local_a * 0x4);
      UI_Complex_Control_Enable_Window_9234
                ((void *)pvVar1,(ushort)((ulong)pvVar1 >> 0x10));
    }
  }
  UI_Window_Move_or_Center_826c(this_ptr,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for dialog Type 0x67BA. Manages detail summary triggers and context
// swaps for Resource 0x1851/0x1852.

void __stdcall16far
UI_SubDialog_Type67BA_On_Command_672e
          (void *param_1,ushort param_2,ushort param_3,undefined4 param_4)
{
  undefined2 unaff_BP;
  int dialog_id;
  
  if (param_4._2_2_ == 0x1841)
  {
    UI_Show_Resource_Detail_Summary_MessageBox_64ca(param_1,param_2);
  }
  else
  {
    if (param_4._2_2_ == 0x1851)
    {
      dialog_id = 0x2a;
    }
    else
    {
      if (param_4._2_2_ != 0x1852)
      {
        UI_SubDialog_Base_On_Command_Logic_7b3c
                  (param_1,param_2,param_3,(ushort)param_4,
                   CONCAT22(unaff_BP,param_4._2_2_));
        return;
      }
      dialog_id = 0x29;
    }
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),dialog_id);
    PostMessage16(0x0,0x0,0x2,CONCAT22(unaff_BP,*(undefined2 *)((int)param_1 + 0x6)));
  }
  return;
}



void * __stdcall16far
UI_SubDialog_Type67BA_dtor_Scalar_Deleting_6794(void *this_ptr,uchar flags)
{
  byte in_stack_00000008;
  
  UI_SubDialog_Type67BA_dtor_Internal_6470(this_ptr);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}



// Constructor for sub-dialog Type 0x6F32 (vtable 0x6F32). Links to Resource 0xFDA. Base
// dialog ID inherited from init.

ushort __stdcall16far
UI_SubDialog_Type6F32_ctor_init_6826(void *this_ptr,ushort parent_hwnd)
{
  UI_SubDialog_TypeB772_ctor_Alternative_b0bc(this_ptr,(void *)parent_hwnd,0x0);
  *(undefined4 *)((int)this_ptr + 0x94) = 0x0;
  *(undefined4 *)((int)this_ptr + 0x98) = 0x0;
  *_this_ptr = 0x6f32;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  return (ushort)this_ptr;
}



void __stdcall16far UI_SubDialog_Type6F32_dtor_Internal_6862(void *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x6f32;
  *(undefined2 *)((int)this_ptr + 0x2) = 0x1040;
  UI_SubDialog_TypeB772_dtor_Internal_b0f8(this_ptr);
  return;
}



// Virtual event handler for Type 0x6F32. Enables or disables buttons 0x107 and 0x108
// based on operational flags in the linked resource manager.

void __stdcall16far
UI_SubDialog_Type6F32_Handle_vcall_8_Logic_6880(void *this_ptr,int event_id)
{
  HWND16 HVar1;
  astruct_47 *uVar2;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0x8)
  {
    HVar1 = GetDlgItem16(0x107,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(*(HWND16 *)((int)*(undefined4 *)((int)this_ptr + 0x94) + 0x24),HVar1)
    ;
    HVar1 = GetDlgItem16(0x108,*(short *)((int)this_ptr + 0x6));
    EnableWindow16(*(HWND16 *)((int)*(undefined4 *)((int)this_ptr + 0x94) + 0x26),HVar1)
    ;
  }
  return;
}



// Virtual event dispatcher for dialog Type 0x6F32. Manages WM_COMMAND and virtual
// callbacks at offset 0x80.

ushort __stdcall16far
UI_SubDialog_Type6F32_On_Event_Dispatcher_68d2
          (void *this_ptr,void *event_data,ushort arg3,ushort arg4,uint msg_id)
{
  u16 uVar1;
  int in_stack_0000000e;
  void *puVar1;
  
  if (in_stack_0000000e == 0x2b)
  {
    if (*(int *)arg3 == 0x4)
    {
      UI_Control_Dispatch_Virtual_Event_9566((void *)arg3);
    }
  }
  else
  {
    if (in_stack_0000000e != 0x111)
    {
      uVar1 = UI_SubDialog_Special_Event_Dispatcher_b316
                        (this_ptr,event_data,arg3,arg4,msg_id);
      return uVar1;
    }
    puVar1 = (void *)((int)*_this_ptr + 0x80);
    (**(code **)puVar1)();
  }
  return 0x1;
}



void __stdcall16far Simulator_Object_VCall_7C_692e(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  (*(code *)*puVar1)();
  return;
}
