/*
 * Source: outpost.c
 * Chunk: 77/117
 * Original lines: 87368-88528
 * Boundaries: top-level declarations/definitions only
 */




// A massive factory function that instantiates the correct specialized UI Build Item
// class based on a numeric type ID. Handles over 100 unique building and interaction
// types, each mapped to specific constructors and vtables.

void * __stdcall16far
UI_Build_Item_Factory_Create_Wrapper_0016
          (undefined2 param_1,undefined2 param_2,undefined2 param_3)
{
  u16 *puVar1;
  void *pvVar2;
  uint in_DX;
  uint uVar3;
  void *pvVar4;
  undefined2 in_stack_0000fff6;
  
  if (false)
  {
switchD_1030_069f_caseD_19:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX == 0x0 && pvVar2 == NULL)
    {
      return NULL;
    }
    pvVar4 = UI_Build_Item_Base_ctor_init_b354((void *)CONCAT22(in_DX,pvVar2));
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
    if (in_DX != 0x0 || puVar1 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4942_ctor_init_489e(puVar1);
      return pvVar4;
    }
    break;
  case 0xa:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type341C_ctor_2bdc((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0xb:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    uVar3 = in_DX | (uint)pvVar2;
    goto joined_r0x103002a1;
  case 0xc:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type_373E_ctor_init_3670
                         ((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0xd:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_3608_ctor_init_355e((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0xe:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_34F6_ctor_init_3484((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0xf:
    puVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    in_DX |= (uint)puVar1;
    if (in_DX != 0x0)
    {
      puVar1 = UI_Build_Item_Type_42EC_ctor_init_406c(puVar1);
      return (u16 *)CONCAT22(in_DX,puVar1);
    }
    break;
  case 0x10:
  case 0x33:
  case 0x34:
  case 0x60:
  case 0x61:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_1724_ctor_init_0c24((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x11:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_0BBC_ctor_init_0b42((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x12:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_446A_ctor_init_4354((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x62:
  case 0x63:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4BB4_ctor_init_4b84((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6C_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  default:
    goto switchD_1030_069f_caseD_19;
  case 0x1b:
  case 0x1c:
  case 0x1d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeC006_ctor_init_be34((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x1e:
  case 0x1f:
  case 0x20:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_08EC_ctor_0068((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x21:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5280_ctor_init_50d8((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x22:
  case 0x23:
  case 0x24:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4004_ctor_init_3e94((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x25:
  case 0x26:
  case 0x27:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type54_ctor_init_d06c((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x28:
  case 0x29:
  case 0x5d:
  case 0x5e:
  case 0x5f:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeC940_ctor_init_c6f6((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2a:
  case 0x2b:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_CD7E_ctor((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2c:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_2788_ctor_init_26b4((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2d:
  case 0x2e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2a));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4B1C_ctor_init_49aa((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x2f:
  case 0x30:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type59_ctor_init_e7fa((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x31:
  case 0x32:
  case 0x6c:
  case 0x6d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type56_ctor_init_d37c((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x35:
  case 0x36:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type_3E2C_ctor_init_37a6
                         ((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x37:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    uVar3 = in_DX | (uint)pvVar2;
joined_r0x103002a1:
    if (uVar3 != 0x0)
    {
      puVar1 = UI_Build_Item_TypeC68E_ctor_init_c06e((void *)CONCAT22(in_DX,pvVar2));
      return (u16 *)CONCAT22(uVar3,puVar1);
    }
    break;
  case 0x38:
  case 0x39:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x9a));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeD88E_ctor_init_c9a8((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3a:
  case 0x3b:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_6876_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3c:
  case 0x3d:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_4836_ctor_init_44d2((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_D004_ctor((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x3f:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6D_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x40:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_264C_ctor_init_25da((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x41:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Component_Type_CC7C_ctor((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x47:
  case 0x6a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type57_ctor_init_d5a6((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x48:
  case 0x49:
  case 0x4a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type58_ctor_init_d866((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x4c:
  case 0x4d:
  case 0x4e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_TypeDC2E_ctor_init_d8f6((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x4f:
  case 0x50:
  case 0x51:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5D8B_ctor_init_5c54((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x52:
  case 0x53:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_59E0_ctor_init_5966((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x54:
  case 0x55:
  case 0x56:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x22));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_6054_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x57:
  case 0x58:
  case 0x59:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_54BC_ctor_init_53c6((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x5a:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_58FE_ctor_init_5884((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x5b:
  case 0x5c:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_55C8_ctor_init_5524((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x64:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    uVar3 = in_DX | (uint)pvVar2;
    if (uVar3 != 0x0)
    {
      puVar1 = UI_Build_Item_Type_5E70_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return (u16 *)CONCAT22(uVar3,puVar1);
    }
    break;
  case 0x65:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_5BEC_ctor_init_5a48((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x66:
  case 0x67:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_535E_ctor_init_52e8((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x68:
  case 0x69:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_581C_ctor_init_57a6((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x6e:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type_56AC_ctor_init_5630((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x70:
  case 0x71:
  case 0x72:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x20));
    if (in_DX == 0x0 && pvVar2 == NULL)
    {
      pvVar4 = NULL;
    }
    else
    {
      pvVar4 = UI_Build_Item_Type58_ctor_init_d866((void *)CONCAT22(in_DX,pvVar2));
    }
    in_DX = (uint)((ulong)pvVar4 >> 0x10);
  case 0x73:
  case 0x77:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x26));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type60_ctor_init_e8f6
                         ((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x74:
  case 0x78:
  case 0x79:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x2c));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_ctor_init_d954((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x75:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type6B_ctor_init((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
    break;
  case 0x76:
    pvVar2 = allocate_memory(CONCAT22(in_stack_0000fff6,0x24));
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Construction_Item_Type6F_ctor_init_2afa
                         ((void *)CONCAT22(in_DX,pvVar2));
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
    if (in_DX != 0x0 || pvVar2 != NULL)
    {
      pvVar4 = UI_Build_Item_Type6E_ctor_init_27f0((void *)CONCAT22(in_DX,pvVar2));
      return pvVar4;
    }
  }
  return NULL;
}



// A massive parameterized factory function that instantiates the correct specialized UI
// Build Item class based on a numeric type ID. Mirror of 1030:0000 but accepts full
// construction parameters.

void * __stdcall16far
UI_Build_Item_Factory_Create_with_Params_07ac
          (undefined2 param_1,undefined2 param_2,u16 param_3,u16 param_4,
          undefined2 param_5,void *param_6)
{
  void *pvVar1;
  int in_DX;
  void *pvVar2;
  undefined2 in_stack_0000fff4;
  
  if (false)
  {
switchD_1030_0fa3_caseD_19:
    pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
    if (in_DX != 0x0 || pvVar1 != NULL)
    {
      pvVar2 = UI_Build_Item_Base_ctor_with_Params_b39e();
      return pvVar2;
    }
  }
  else
  {
    switch(param_4)
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
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_4942_ctor_with_Params_48c0();
        return pvVar2;
      }
      break;
    case 0xa:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Component_Type341C_ctor_with_Params_2bfe();
        return pvVar2;
      }
      break;
    case 0xb:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
LAB_1030_0adf:
        pvVar2 = UI_Build_Item_TypeC68E_ctor_with_Params_c09c();
        return pvVar2;
      }
      break;
    case 0xc:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x2c));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_Type_373E_ctor_with_Params_3692();
        return pvVar2;
      }
      break;
    case 0xd:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_3608_ctor_with_Params_3580();
        return pvVar2;
      }
      break;
    case 0xe:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_34F6_ctor_with_Params_34a6();
        return pvVar2;
      }
      break;
    case 0xf:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_42EC_ctor_with_Params_408e();
        return pvVar2;
      }
      break;
    case 0x10:
    case 0x33:
    case 0x34:
    case 0x60:
    case 0x61:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_1724_ctor_with_Params_0c50();
        return pvVar2;
      }
      break;
    case 0x11:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_0BBC_ctor_with_Params_0b64();
        return pvVar2;
      }
      break;
    case 0x12:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_446A_ctor_with_Params_4376();
        return pvVar2;
      }
      break;
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x62:
    case 0x63:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_4BB4_ctor_with_Params_4ba6();
        return pvVar2;
      }
      break;
    case 0x16:
    case 0x17:
    case 0x18:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type6C_ctor_with_Params();
        return pvVar2;
      }
      break;
    default:
      goto switchD_1030_0fa3_caseD_19;
    case 0x1b:
    case 0x1c:
    case 0x1d:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_TypeC006_ctor_with_Params_be56();
        return pvVar2;
      }
      break;
    case 0x1e:
    case 0x1f:
    case 0x20:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_08EC_ctor_with_Params_00cc();
        return pvVar2;
      }
      break;
    case 0x21:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_5280_ctor_with_Params_50fa();
        return pvVar2;
      }
      break;
    case 0x22:
    case 0x23:
    case 0x24:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_4004_ctor_with_Params_3ec8();
        return pvVar2;
      }
      break;
    case 0x25:
    case 0x26:
    case 0x27:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type55_ctor_init_d08e();
        return pvVar2;
      }
      break;
    case 0x28:
    case 0x29:
    case 0x5d:
    case 0x5e:
    case 0x5f:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_TypeC940_ctor_with_Params_c71e();
        return pvVar2;
      }
      break;
    case 0x2a:
    case 0x2b:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Component_Type_CD7E_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x2c:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_2788_ctor_with_Params_26d6();
        return pvVar2;
      }
      break;
    case 0x2d:
    case 0x2e:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x2a));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_4B1C_ctor_with_Params_49de();
        return pvVar2;
      }
      break;
    case 0x2f:
    case 0x30:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type59_ctor_with_Params_e81c();
        return pvVar2;
      }
      break;
    case 0x31:
    case 0x32:
    case 0x6c:
    case 0x6d:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type56_ctor_with_Params_d3a4
                           ((void *)CONCAT22(in_DX,pvVar1),param_3,param_4,param_6);
        return pvVar2;
      }
      break;
    case 0x35:
    case 0x36:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x2c));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_Type_3E2C_ctor_with_Params_3816();
        return pvVar2;
      }
      break;
    case 0x37:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL) goto LAB_1030_0adf;
      break;
    case 0x38:
    case 0x39:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x9a));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_TypeD88E_ctor_with_Params_c9e4();
        return pvVar2;
      }
      break;
    case 0x3a:
    case 0x3b:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_6876_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x3c:
    case 0x3d:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_4836_ctor_with_Params_44fe();
        return pvVar2;
      }
      break;
    case 0x3e:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type53_ctor_init_ce08();
        return pvVar2;
      }
      break;
    case 0x3f:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_2572_ctor_with_Params_1fc8();
        return pvVar2;
      }
      break;
    case 0x40:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_264C_ctor_with_Params_25fc();
        return pvVar2;
      }
      break;
    case 0x41:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Component_Type_CC7C_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x47:
    case 0x6a:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type57_ctor_with_Params_d5c8();
        return pvVar2;
      }
      break;
    case 0x48:
    case 0x49:
    case 0x4a:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type58_ctor_with_Params_d888();
        return pvVar2;
      }
      break;
    case 0x4c:
    case 0x4d:
    case 0x4e:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_TypeDC2E_ctor_with_Params_d942();
        return pvVar2;
      }
      break;
    case 0x4f:
    case 0x50:
    case 0x51:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_5D8B_ctor_with_Params_5c76();
        return pvVar2;
      }
      break;
    case 0x52:
    case 0x53:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_59E0_ctor_with_Params_5988();
        return pvVar2;
      }
      break;
    case 0x54:
    case 0x55:
    case 0x56:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x22));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_6054_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x57:
    case 0x58:
    case 0x59:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_54BC_ctor_with_Params_53e8();
        return pvVar2;
      }
      break;
    case 0x5a:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_58FE_ctor_with_Params_58a6();
        return pvVar2;
      }
      break;
    case 0x5b:
    case 0x5c:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_55C8_ctor_with_Params_5546();
        return pvVar2;
      }
      break;
    case 0x64:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_5E70_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x65:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_5BEC_ctor_with_Params_5a6a();
        return pvVar2;
      }
      break;
    case 0x66:
    case 0x67:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_535E_ctor_with_Params_530a();
        return pvVar2;
      }
      break;
    case 0x68:
    case 0x69:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_581C_ctor_with_Params_57c8();
        return pvVar2;
      }
      break;
    case 0x6e:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type_56AC_ctor_with_Params_5652();
        return pvVar2;
      }
      break;
    case 0x70:
    case 0x71:
    case 0x72:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX == 0x0 && pvVar1 == NULL)
      {
        pvVar2 = NULL;
      }
      else
      {
        pvVar2 = UI_Build_Item_Type58_ctor_with_Params_d888();
      }
      in_DX = (int)((ulong)pvVar2 >> 0x10);
    case 0x73:
    case 0x77:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x26));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_Type60_ctor_with_Params_e91e();
        return pvVar2;
      }
      break;
    case 0x74:
    case 0x78:
    case 0x79:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x2c));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_ctor_with_Params_d99e
                           ((void *)CONCAT22(in_DX,pvVar1),param_3,param_4,param_6);
        return pvVar2;
      }
      break;
    case 0x75:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_Type6B_ctor_with_Params();
        return pvVar2;
      }
      break;
    case 0x76:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x24));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Construction_Item_Type6F_ctor_with_Params_2b1c();
        return pvVar2;
      }
      break;
    case 0x7a:
    case 0x7b:
    case 0x7c:
    case 0x7d:
    case 0x7e:
    case 0x7f:
      pvVar1 = allocate_memory(CONCAT22(in_stack_0000fff4,0x20));
      if (in_DX != 0x0 || pvVar1 != NULL)
      {
        pvVar2 = UI_Build_Item_Type6E_ctor_with_Params_2812();
        return pvVar2;
      }
    }
  }
  return NULL;
}



// Orchestrates a production interaction. Instantiates a UI Build Item, syncs its
// simulator object, and updates the production item's list at offset 0x26.

void * __stdcall16far
Simulator_Process_Production_Event_10b0
          (void *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4,
          u8 *param_5)
{
  void *entity_id;
  void *item_ptr;
  void *this_ptr;
  void *in_stack_0000ffe6;
  undefined2 uStack_a;
  
  item_ptr = UI_Build_Item_Factory_Create_with_Params_07ac
                       (param_1,CONCAT22(param_3,param_2),param_4,param_5);
  entity_id = (void *)*(undefined4 *)((int)(void *)item_ptr + 0x4);
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       ((void *)CONCAT22(param_2,param_1),(u8 *)param_5);
  if ((int)((ulong)this_ptr >> 0x10) != 0x0 || (void *)this_ptr != NULL)
  {
    UI_Component_Set_Active_Entity_and_Sync_Logic_7e5a(this_ptr,entity_id);
  }
  uStack_a = (void *)entity_id;
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)param_1 + 0x26),item_ptr,(uint)uStack_a,
             in_stack_0000ffe6);
  return entity_id;
}



// Batch processes production for an entity. Allocates a specialized production object
// (using 1030:2112) and appends it to the manager's list (offset 0x2A).

void * __stdcall16far Simulator_Process_Entity_Batch_Production_1120(void *this_ptr)
{
  void *pvVar1;
  void *pvVar2;
  u16 *puVar3;
  uint in_DX;
  uint uVar4;
  void *in_stack_0000ffe6;
  undefined2 in_stack_0000ffe8;
  
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x3b2));
  uVar4 = in_DX | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Colony_Production_Manager_ctor_with_Params_2112
                       ((void *)CONCAT22(in_DX,pvVar2),NULL);
  }
  pvVar1 = *(void **)(puVar3 + 0x2);
  UI_Managed_List_Set_Item_at_Index_1358
            ((void *)*(undefined4 *)((int)this_ptr + 0x2a),(u16 *)CONCAT22(uVar4,puVar3)
             ,(uint)pvVar1,(void *)CONCAT22(in_stack_0000ffe8,in_stack_0000ffe6));
  return pvVar1;
}



// Standard scalar deleting destructor for base objects using vtable 0x389A.

void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_117a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Base constructor for a managed UI list. Initializes capacity, increment step, and
// sets vtable to 0x1624. Pre-allocates the internal buffer for pointers.

u16 * __stdcall16far
UI_Managed_List_Base_ctor_init_11aa(void *this_ptr,void *increment,void *initial_cap)
{
  astruct_308 *uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_308 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar1->field2_0x2 = 0x1008;
  uVar1->field3_0x4 = 0x0;
  uVar1->field4_0x6 = NULL;
  uVar1->field5_0xa = 0x0;
  uVar1->field6_0xe = initial_cap;
  uVar1->field7_0x12 = 0x0;
  uVar1->field8_0x16 = increment;
  uVar1->field9_0x1a = 0x1;
  *(char **)this_ptr = (char *)s_462_bmp_1050_1620 + 0x4;
  uVar1->field2_0x2 = 0x1030;
  if (uVar1->field6_0xe == NULL)
  {
    uVar1->field6_0xe = (void *)0x5;
  }
  if (uVar1->field8_0x16 == NULL)
  {
    uVar1->field8_0x16 = (void *)0x5;
  }
  UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
  *uVar1->field4_0x6 = 0x0;
  return (u16 *)uVar1;
}
