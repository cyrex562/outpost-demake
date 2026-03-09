/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 10/13
 * Original lines (combined): 85964-87890
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Allocates 174 bytes (0xAE) using a custom allocator, and initializes a new simulator
// object by copying 174 bytes (0x2B dwords + word) from the resource manager.

void * __stdcall16far
Simulator_Object_Alloc_and_Init_from_Manager_e100(undefined4 param_1,int param_2)
{
  undefined4 *puVar1;
  undefined *heap_ctx;
  undefined4 *puVar2;
  int iVar4;
  undefined *reg_dx;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 uStack_a;
  undefined4 *puStack_6;
  undefined4 *puVar3;
  
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    reg_dx = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  puVar2 = alloc_with_hooks(0xae,0x1,heap_ctx);
  puVar3 = (undefined4 *)ZEXT24(puVar2);
  uStack_a = (undefined4 *)CONCAT22(reg_dx,puVar2);
  uVar5 = (uint)reg_dx | (uint)puVar2;
  if (uVar5 == 0x0)
  {
    puStack_6 = NULL;
  }
  else
  {
    puVar2[0x29] = 0x0;
    puVar2[0x2a] = 0x0;
    *(undefined2 *)(puVar2 + 0x2b) = 0x0;
    puStack_6 = uStack_a;
    puVar3 = uStack_a;
  }
  puVar2 = (undefined4 *)puVar3;
  Simulator_Context_Load_Building_Op_Template_4c06
            ((void *)*(undefined4 *)((int)param_1 + 0x52),param_2);
  uVar7 = (undefined2)((ulong)puStack_6 >> 0x10);
  puVar6 = (undefined4 *)puStack_6;
  for (iVar4 = 0x2b; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar1 = puVar6;
    puVar6 = puVar6 + 0x1;
    puVar3 = puVar2;
    puVar2 = puVar2 + 0x1;
    *puVar1 = *puVar3;
  }
  *(undefined2 *)puVar6 = *(undefined2 *)puVar2;
  return puStack_6;
}



// A massive factory function that instantiates the correct specialized UI Build Item
// class based on a numeric type ID. Handles over 100 unique building and interaction
// types, each mapped to specific constructors and vtables.

void * __stdcall16far
UI_Build_Item_Factory_Create_Wrapper_0016
          (undefined2 param_1,undefined2 param_2,undefined2 param_3)
{
  u16 *puVar1;
  void *pvVar2;
  uint reg_dx;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fff6;
  
  if (false)
  {
switchD_1030_069f_caseD_19:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx == 0x0 && pvVar2 == NULL)
    {
      return NULL;
    }
    pvVar4 = UI_Build_Item_Base_ctor_init_b354((void *)CONCAT22(reg_dx,pvVar2));
    return pvVar4;
  }
  switch(param_3)
  {
  case 0x1:
  case 0x2:
  case 0x3:
  case 0x4:
  case 0x5:
  case 0x6:
  case 0x7:
  case 0x8:
  case 0x9:
    puVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || puVar1 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4942_ctor_init_489e(puVar1);
      return pvVar4;
    }
    break;
  case 0xa:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type341C_ctor_2bdc((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0xb:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    uVar3 = reg_dx | (uint)pvVar2;
    goto joined_r0x103002a1;
  case 0xc:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type_373E_ctor_init_3670
                         ((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0xd:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_3608_ctor_init_355e((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0xe:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_34F6_ctor_init_3484((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0xf:
    puVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    reg_dx |= (uint)puVar1;
    if (reg_dx != 0x0)
    {
      puVar1 = UI_Build_Item_Type_42EC_ctor_init_406c(puVar1);
      return (u16 *)CONCAT22(reg_dx,puVar1);
    }
    break;
  case 0x10:
  case 0x33:
  case 0x34:
  case 0x60:
  case 0x61:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_1724_ctor_init_0c24((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x11:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_0BBC_ctor_init_0b42((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x12:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_446A_ctor_init_4354((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x62:
  case 0x63:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4BB4_ctor_init_4b84((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6C_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  default:
    goto switchD_1030_069f_caseD_19;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeC006_ctor_init_be34((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_08EC_ctor_0068((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x21:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5280_ctor_init_50d8((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x22:
  case 0x23:
  case 0x24:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4004_ctor_init_3e94((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x25:
  case 0x26:
  case 0x27:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type54_ctor_init_d06c((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x28:
  case 0x29:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeC940_ctor_init_c6f6((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2a:
  case 0x2b:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_CD7E_ctor((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2c:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_2788_ctor_init_26b4((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2d:
  case 0x2e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2a));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4B1C_ctor_init_49aa((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2f:
  case 0x30:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type59_ctor_init_e7fa((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x31:
  case 0x32:
  case 0x6c:
  case 0x6d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type56_ctor_init_d37c((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x35:
  case 0x36:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type_3E2C_ctor_init_37a6
                         ((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x37:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    uVar3 = reg_dx | (uint)pvVar2;
joined_r0x103002a1:
    if (uVar3 != 0x0)
    {
      puVar1 = UI_Build_Item_TypeC68E_ctor_init_c06e((void *)CONCAT22(reg_dx,pvVar2));
      return (u16 *)CONCAT22(uVar3,puVar1);
    }
    break;
  case 0x38:
  case 0x39:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x9a));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeD88E_ctor_init_c9a8((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3a:
  case 0x3b:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_6876_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3c:
  case 0x3d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4836_ctor_init_44d2((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_D004_ctor((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3f:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6D_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x40:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_264C_ctor_init_25da((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x41:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_CC7C_ctor((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x47:
  case 0x6a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type57_ctor_init_d5a6((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type58_ctor_init_d866((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeDC2E_ctor_init_d8f6((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x4f:
  case 0x50:
  case 0x51:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5D8B_ctor_init_5c54((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x52:
  case 0x53:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_59E0_ctor_init_5966((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x54:
  case 0x55:
  case 0x56:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_6054_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x57:
  case 0x58:
  case 0x59:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_54BC_ctor_init_53c6((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x5a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_58FE_ctor_init_5884((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x5b:
  case 0x5c:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_55C8_ctor_init_5524((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x64:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    uVar3 = reg_dx | (uint)pvVar2;
    if (uVar3 != 0x0)
    {
      puVar1 = UI_Build_Item_Type_5E70_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return (u16 *)CONCAT22(uVar3,puVar1);
    }
    break;
  case 0x65:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5BEC_ctor_init_5a48((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x66:
  case 0x67:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_535E_ctor_init_52e8((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x68:
  case 0x69:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_581C_ctor_init_57a6((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x6e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_56AC_ctor_init_5630((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x70:
  case 0x71:
  case 0x72:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx == 0x0 && pvVar2 == NULL)
    {
      pvVar4 = NULL;
    }
    else
    {
      pvVar4 = UI_Build_Item_Type58_ctor_init_d866((void *)CONCAT22(reg_dx,pvVar2));
    }
    reg_dx = (uint)((ulong)pvVar4 >> 0x10);
  case 0x73:
  case 0x77:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type60_ctor_init_e8f6
                         ((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x74:
  case 0x78:
  case 0x79:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_ctor_init_d954((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x75:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type6B_ctor_init((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x76:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type6F_ctor_init_2afa
                         ((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
    break;
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (reg_dx != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6E_ctor_init_27f0((void *)CONCAT22(reg_dx,pvVar2));
      return pvVar4;
    }
  }
  return NULL;
}
