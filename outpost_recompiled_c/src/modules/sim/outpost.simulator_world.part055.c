/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 55/56
 * Original lines (combined): 126030-130542
 * Boundaries: top-level declarations/definitions only
 */




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



void __stdcall16far Simulator_Object_VCall_7C_692e(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  (*(code *)*puVar1)();
  return;
}



void __stdcall16far Simulator_Object_VCall_7C_70a0(u32 *param_1)
{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)((int)*param_1 + 0x7c);
  (*(code *)*puVar1)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Invokes WinHelp16 using the help filename from resource 0x1F8 and the context ID
// stored at offset 0x8A.

void __stdcall16far UI_Window_Show_Help_800c(void *this_ptr)
{
  void *pvVar1;
  HWND16 reg_dx;
  undefined2 in_stack_00000006;
  uint32_t data;
  uint16_t w_command;
  void *pvVar2;
  
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  if (*(int *)((int)this_ptr + 0x8a) == 0x0)
  {
    w_command = 0x0;
    pvVar2 = (void *)((int)(undefined **)&p_CurrentHeapContext + 0x1);
    data = 0x0;
  }
  else
  {
    pvVar2 = (void *)0x1;
    data = *(uint32_t *)((int)this_ptr + 0x8a);
    w_command = (int)data >> 0xf;
  }
  WinHelp16(data,w_command,(void *)CONCAT22(pvVar1,pvVar2),reg_dx);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Ensures Resource 0x28 (Trade Manager) is loaded and returns its primary 4-byte object
// pointer.

void * __stdcall16far UI_Get_Global_Trade_Manager_Ptr_Logic_805a(void)
{
  if (_p_GlobalPaletteObject == 0x0)
  {
    Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x28);
  }
  return (void *)*(undefined2 *)((int)_p_GlobalPaletteObject + 0xe);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void * __stdcall16far
UI_Main_View_Initialize_Palette_from_Resource_807e(u32 param_1,int param_2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  void *pvVar5;
  int reg_dx;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar6;
  int iVar7;
  undefined2 uVar8;
  u16 local_10;
  u32 local_a;
  u32 local_6;
  
  if (param_2 == 0x1)
  {
    pvVar4 = UI_Get_Global_Trade_Manager_Ptr_Logic_805a();
    return (void *)CONCAT22(reg_dx,pvVar4);
  }
  pvVar4 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  local_6 = CONCAT22(reg_dx,pvVar4);
  if (reg_dx != 0x0 || pvVar4 != NULL)
  {
    puVar3 = (undefined2 *)((int)*(undefined4 *)local_6 + 0x14);
    pvVar5 = pvVar4;
    (*(code *)*puVar3)(0x1010,pvVar4,reg_dx);
    uVar8 = (undefined2)(param_1 >> 0x10);
    iVar7 = (int)param_1;
    uVar6 = extraout_DX;
    if (*(long *)(iVar7 + 0x70) != 0x0)
    {
      puVar1 = (undefined4 *)*(int *)(iVar7 + 0x70);
      iVar2 = *(int *)(iVar7 + 0x72);
      uVar6 = 0x0;
      if (iVar2 != 0x0 || puVar1 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1010,puVar1,iVar2,0x1);
        uVar6 = extraout_DX_00;
      }
    }
    pvVar5 = allocate_memory(CONCAT22(pvVar5,0x14));
    uVar6 |= (uint)pvVar5;
    if (uVar6 == 0x0)
    {
      pvVar5 = NULL;
      uVar6 = 0x0;
    }
    else
    {
      pvVar5 = Palette_Object_ctor_basic(pvVar5);
    }
    *(undefined2 *)(iVar7 + 0x70) = pvVar5;
    *(uint *)(iVar7 + 0x72) = uVar6;
    Palette_Object_Copy_From_Other_Logic
              ((void *)(void *)*(undefined4 *)(iVar7 + 0x70),
               (void *)((ulong)*(undefined4 *)(iVar7 + 0x70) >> 0x10));
    if (local_6 != 0x0)
    {
      (*(code *)*(undefined2 *)*(undefined2 **)local_6)(0x1008,pvVar4,reg_dx,0x1);
    }
    return (void *)CONCAT22(*(undefined2 *)(iVar7 + 0x72),
                            (void *)*(undefined2 *)(iVar7 + 0x70));
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Alternative constructor for Type 0x8DDC dialogs. Accepts a variable number of string
// resource IDs and concatenates them into a single display buffer. Supports complex
// multi-part messages.

ushort __cdecl16far
UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
          (undefined2 *param_1,undefined2 param_2,undefined2 param_3,int param_4,
          int param_5,int param_6)
{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  void *pvVar5;
  undefined2 reg_dx;
  undefined2 unaff_SI;
  undefined2 unaff_SS;
  undefined2 *this_ptr;
  undefined2 uVar6;
  int iStack_16;
  int iStack_10;
  int *piStack_e;
  undefined2 uVar8;
  astruct_34 *uVar7;
  
  this_ptr = (undefined2 *)param_1;
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  UI_SubDialog_Base_ctor_init_7728(this_ptr,uVar6,0x1,0x0,0x0,0xfc3,param_2);
  this_ptr[0x47] = 0x0;
  this_ptr[0x4c] = param_3;
  this_ptr[0x4d] = 0x0;
  this_ptr[0x59] = 0x0;
  *param_1 = 0x8ddc;
  this_ptr[0x1] = 0x1040;
  *(undefined4 *)(this_ptr + 0x4f) = 0x0;
  *(undefined4 *)(this_ptr + 0x51) = 0x12c;
  piVar1 = &param_5;
  iStack_10 = param_4;
  if (param_4 != 0x0)
  {
    piVar1 = &param_6;
    pcVar3 = Resource_Manager_LoadString_and_Duplicate
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),param_5);
    this_ptr[0x4a] = pcVar3;
    this_ptr[0x4b] = reg_dx;
    iStack_10 = param_4 + -0x1;
  }
  _piStack_e = (int *)CONCAT22(unaff_SS,piVar1);
  iStack_16 = 0x0;
  while (piVar2 = _piStack_e, iStack_10 != 0x0)
  {
    uVar8 = (undefined2)((ulong)_piStack_e >> 0x10);
    _piStack_e = (int *)CONCAT22(uVar8,piStack_e + 0x1);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    uVar4 = strlen_get_length((char *)CONCAT22(reg_dx,pcVar3));
    iStack_16 += uVar4;
    iStack_10 = iStack_10 + -0x1;
  }
  pvVar5 = allocate_memory(CONCAT22(unaff_SI,iStack_16 + 0x1));
  this_ptr[0x48] = pvVar5;
  this_ptr[0x49] = reg_dx;
  _piStack_e = (int *)CONCAT22(unaff_SS,&param_6);
  iStack_10 = param_4 + -0x1;
  if (param_4 + -0x1 != 0x0)
  {
    _piStack_e = (int *)CONCAT22(unaff_SS,&stack0x0012);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),
               CONCAT22((int)*(undefined4 *)(this_ptr + 0x48),0x3ff),
               CONCAT22(param_6,(int)((ulong)*(undefined4 *)(this_ptr + 0x48) >> 0x10)))
    ;
    iStack_10 = param_4 + -0x2;
  }
  while (piVar2 = _piStack_e, iStack_10 != 0x0)
  {
    uVar8 = (undefined2)((ulong)_piStack_e >> 0x10);
    _piStack_e = (int *)CONCAT22(uVar8,piStack_e + 0x1);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    strcat_append(*(char **)(this_ptr + 0x48),(char *)CONCAT22(reg_dx,pcVar3));
    iStack_10 = iStack_10 + -0x1;
  }
  UI_Dialog_Load_Icon_by_Bitmask_8b92(this_ptr);
  PTR_DAT_1050_0000_1050_5df8 = NULL;
  return (ushort)this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Dialog_Play_Media_Resource_and_Notify_89a4(void *this_ptr,void *res_ptr)
{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  undefined2 *in_stack_00000008;
  
  win16_conditional_message_loop((int *)(dword *)&DWORD_1050_5df4);
  uVar1 = ((undefined2 *)in_stack_00000008)[0x1];
  uVar2 = *in_stack_00000008;
  uVar5 = 0x1010;
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  iVar4 = (int)lVar6;
  if (*(int *)(iVar4 + 0x72) != 0x0)
  {
    uVar5 = 0x1008;
    media_play_from_full_resource_ptr_logic
              ((void *)_p_UIPanelContainer,CONCAT22(uVar1,uVar2));
    *(int *)((int)this_ptr + 0x8c) = iVar4;
  }
  puVar3 = (undefined2 *)((int)*_this_ptr + 0x74);
  (*(code *)*puVar3)(uVar5,this_ptr,res_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a UI 'Complex Control' (vtable 0x9800). Initializes state, loads
// multiple bitmap resources, and creates a procedure instance for its custom window
// procedure (1040:9684). Increments a global reference counter (1050:5E16).

ushort __stdcall16far
UI_Complex_Control_ctor_9fb8
          (undefined2 *param_1,undefined2 param_2,char *param_3,int param_4,int param_5,
          int param_6,undefined2 param_7,undefined2 param_8)
{
  undefined2 uVar1;
  void *pvVar2;
  char *pcVar3;
  undefined2 reg_dx;
  undefined2 *puVar4;
  ushort uVar5;
  undefined2 in_stack_0000fffa;
  
  uVar5 = (ushort)((ulong)param_1 >> 0x10);
  puVar4 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  *(undefined4 *)(puVar4 + 0x2) = 0x0;
  *(undefined4 *)(puVar4 + 0x4) = 0x0;
  *(undefined4 *)(puVar4 + 0x6) = 0x0;
  *(undefined4 *)(puVar4 + 0x8) = 0x0;
  *(undefined4 *)(puVar4 + 0xa) = 0x0;
  puVar4[0xc] = 0x0;
  puVar4[0xd] = param_8;
  puVar4[0xe] = param_7;
  puVar4[0x1b] = 0x5;
  puVar4[0x1c] = 0x0;
  puVar4[0x1d] = 0x0;
  puVar4[0x1e] = 0x2;
  puVar4[0x1f] = 0x0;
  puVar4[0x20] = param_2;
  *param_1 = 0x9800;
  puVar4[0x1] = 0x1040;
  uVar1 = puVar4[0x1b];
  puVar4[0x14] = uVar1;
  puVar4[0x13] = uVar1;
  puVar4[0x16] = 0x0;
  puVar4[0x15] = 0x0;
  if ((param_6 != 0x0) && (param_5 != 0x0))
  {
    puVar4[0x1c] = 0x1;
    pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    puVar4[0x4] = pvVar2;
    puVar4[0x5] = reg_dx;
    pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    puVar4[0x6] = pvVar2;
    puVar4[0x7] = reg_dx;
    if (param_4 == 0x0)
    {
      *(undefined4 *)(puVar4 + 0x8) = 0x0;
    }
    else
    {
      pvVar2 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      puVar4[0x8] = pvVar2;
      puVar4[0x9] = reg_dx;
    }
  }
  uVar1 = puVar4[0x1b];
  puVar4[0x18] = uVar1;
  puVar4[0x17] = uVar1;
  *(undefined4 *)(puVar4 + 0x19) = 0x0;
  if (param_3 != NULL)
  {
    pcVar3 = strdup_allocate((char *)param_3);
    puVar4[0x2] = pcVar3;
    puVar4[0x3] = reg_dx;
  }
  *(undefined4 *)(puVar4 + 0x11) = 0x0;
  puVar4[0xf] = 0x0;
  puVar4[0x10] = 0x0;
  if (_PTR_DAT_1050_0000_1050_5e18 == NULL)
  {
    _PTR_DAT_1050_0000_1050_5e18 =
         MakeProcInstance16((HANDLE16)PTR_DAT_1050_0000_1050_038c,
                            (void *)CONCAT22(in_stack_0000fffa,(void *)0x1040));
  }
  PTR_DAT_1050_0000_1050_5e16 = PTR_DAT_1050_0000_1050_5e16 + 0x1;
  return uVar5;
}



void __stdcall16far Simulator_Object_Conditional_VCall_10_14_9422(u32 *param_1)
{
  undefined2 *puVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  if (((u32 *)param_1)[0x2] != 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x10);
    (*(code *)*puVar1)();
  }
  if (((u32 *)param_1)[0x1] != 0x0)
  {
    puVar1 = (undefined2 *)((int)*param_1 + 0x14);
    (*(code *)*puVar1)();
  }
  return;
}



// A scalar deleting destructor for a base object, resetting the vtable to 1008:389a.

undefined2 * __stdcall16far
Base_Object_dtor_Scalar_Deleting_a204(undefined2 *param_1,byte param_2)
{
  *param_1 = (char *)s_1_1050_389a;
  ((undefined2 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((undefined2 *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Populates a list box with action-specific strings (from Resource 3) based on the
// linked building's available operations. Appends 'None' if no actions exist.

u16 __stdcall16far
UI_Dialog_Populate_Action_List_Box_a308(void *param_1,uint16_t param_2)
{
  undefined4 uVar1;
  char *pcVar2;
  ushort uVar3;
  undefined2 unaff_SI;
  undefined2 uVar4;
  LRESULT pvVar5;
  void *puVar3;
  ushort w_param;
  long lVar6;
  undefined2 uVar7;
  undefined2 uStack_c;
  
  lVar6 = CONCAT22(unaff_SI,param_2);
  SendMessage16(0x0,0x0,0x0,lVar6);
  lVar6 = CONCAT22((int)((ulong)lVar6 >> 0x10),param_2);
  pvVar5 = SendMessage16(0x0,0x0,0x0,lVar6);
  uVar3 = (ushort)((ulong)pvVar5 >> 0x10);
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x90);
  uVar7 = (undefined2)((ulong)lVar6 >> 0x10);
  if (*(int *)((int)uVar1 + 0x10) == 0x0)
  {
    lVar6 = CONCAT22(uVar7,param_2);
    w_param = 0x0;
    pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
    SendMessage16((HWND16)pcVar2,uVar3,w_param,lVar6);
    uVar7 = (undefined2)((ulong)lVar6 >> 0x10);
  }
  else
  {
    lVar6 = CONCAT22(uVar7,0x3);
    puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    puVar3._2_2_ = (ushort)((ulong)puVar3 >> 0x10);
    for (uStack_c = 0x0; uVar7 = (undefined2)((ulong)lVar6 >> 0x10),
        uVar1 = *(undefined4 *)((int)(void *)param_1 + 0x90),
        uStack_c < *(int *)((int)uVar1 + 0x10); uStack_c += 0x1)
    {
      lVar6 = CONCAT22(uVar7,param_2);
      uVar3 = 0x0;
      pcVar2 = Resource_Manager_Get_Action_String_Logic((int)(void *)puVar3);
      pvVar5 = SendMessage16((HWND16)pcVar2,puVar3._2_2_,uVar3,lVar6);
      puVar3._2_2_ = (ushort)((ulong)pvVar5 >> 0x10);
    }
  }
  SendMessage16(0x0,0x0,0x1,CONCAT22(uVar7,param_2));
  return 0x1;
}
