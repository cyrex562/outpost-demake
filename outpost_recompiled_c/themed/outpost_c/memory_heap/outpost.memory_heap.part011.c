/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 11/13
 * Original lines (combined): 87891-89719
 * Boundaries: top-level declarations/definitions only
 */




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



// Scans the managed list for the first null (zero) entry and updates the internal
// 'first free' index tracker.

void __stdcall16far UI_Managed_List_Find_First_Null_Index_12ca(void *this_ptr)
{
  astruct_306 *uVar1;
  undefined2 uVar2;
  ulong uStack_6;
  
  uStack_6 = 0x1;
  while( true )
  {
    uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
    uVar1 = (astruct_306 *)this_ptr;
    if (uVar1->field6_0xa <= uStack_6)
    {
      uVar1->field4_0x4 = 0x0;
      return;
    }
    if (*(long *)((int)uVar1->field5_0x6 + (int)uStack_6 * 0x4) == 0x0) break;
    uStack_6 += 0x1;
  }
  return;
}



// Inserts an object pointer at a specific index. Automatically handles buffer expansion
// if the index is beyond the current capacity. Marks the list as dirty.

u16 __stdcall16far
UI_Managed_List_Set_Item_at_Index_1358
          (void *this_ptr,void *item_ptr,uint index_lo,void *index)
{
  uint uVar2;
  astruct_304 *uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint in_stack_0000000e;
  
  if (_index_lo == 0x0)
  {
    return 0x0;
  }
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_304 *)this_ptr;
  if ((*(ulong *)&uVar1->field7_0xa <= _index_lo) || (uVar1->field6_0x6 == 0x0))
  {
    uVar2 = *(uint *)((int)&uVar1->field13_0x12 + 0x2);
    if ((uVar2 <= in_stack_0000000e) &&
       ((uVar2 < in_stack_0000000e || ((uint)uVar1->field13_0x12 <= index_lo))))
    {
      UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
    }
    if (uVar1->field13_0x12 <= _index_lo)
    {
      return 0x0;
    }
    if (uVar1->field6_0x6 == 0x0)
    {
      return 0x0;
    }
    if ((uVar1->field8_0xc <= in_stack_0000000e) &&
       ((uVar1->field8_0xc < in_stack_0000000e || (uVar1->field7_0xa <= index_lo))))
    {
      uVar1->field7_0xa = index_lo + 0x1;
      uVar1->field8_0xc = in_stack_0000000e + (0xfffe < index_lo);
    }
  }
  uVar5 = (undefined2)((ulong)uVar1->field6_0x6 >> 0x10);
  iVar3 = (int)uVar1->field6_0x6;
  *(undefined2 *)(iVar3 + index_lo * 0x4) = (void *)item_ptr;
  *(undefined2 *)(iVar3 + index_lo * 0x4 + 0x2) = item_ptr._2_2_;
  return 0x1;
}



// Resets a managed UI list by freeing its internal buffer, clearing its item count, and
// updating its maximum capacity logic based on the provided parameter.

void __stdcall16far
UI_Managed_List_Reset_and_Update_Max_Logic_145a(void *this_ptr,void *max_count)
{
  ulong uVar1;
  undefined2 uVar2;
  astruct_303 *uVar3;
  undefined2 uVar4;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_303 *)this_ptr;
  free_if_not_null((void *)uVar3->field6_0x6);
  uVar3->field6_0x6 = NULL;
  uVar3->field7_0xa = 0x0;
  uVar1 = uVar3->field10_0x16 + (long)max_count;
  uVar2 = (undefined2)(uVar1 >> 0x10);
  if (uVar1 < uVar3->field8_0xe)
  {
    uVar1 = (ulong)(uint)uVar3->field8_0xe;
    uVar2 = *(undefined2 *)((int)&uVar3->field8_0xe + 0x2);
  }
  *(int *)&uVar3->field8_0xe = (int)uVar1;
  *(undefined2 *)((int)&uVar3->field8_0xe + 0x2) = uVar2;
  uVar3->field9_0x12 = 0x0;
  return;
}



// Sets a 4-byte far pointer into the managed list at the specified index. Automatically
// triggers a buffer expansion if the index is beyond current capacity.

u16 __stdcall16far
UI_Managed_List_Set_Item_FarPtr_Logic_14b4
          (void *this_ptr,u16 item_offset,u16 item_segment,void *index)
{
  uint uVar2;
  astruct_302 *uVar1;
  int iVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_302 *)this_ptr;
  if ((*(void **)&uVar1->field7_0xa <= index) || (uVar1->field6_0x6 == 0x0))
  {
    uVar2 = *(uint *)((int)&uVar1->field13_0x12 + 0x2);
    if ((uVar2 <= index._2_2_) &&
       ((uVar2 < index._2_2_ || ((uint)uVar1->field13_0x12 <= (uint)index))))
    {
      UI_Managed_List_Realloc_Buffer_Logic_1550(this_ptr);
    }
    if (((void *)uVar1->field13_0x12 <= index) || (uVar1->field6_0x6 == 0x0))
    {
      return 0x0;
    }
    if ((uVar1->field8_0xc <= index._2_2_) &&
       ((uVar1->field8_0xc < index._2_2_ || (uVar1->field7_0xa <= (uint)index))))
    {
      uVar1->field7_0xa = (uint)((long)index + 0x1);
      uVar1->field8_0xc = (uint)((ulong)((long)index + 0x1) >> 0x10);
    }
  }
  uVar5 = (undefined2)((ulong)uVar1->field6_0x6 >> 0x10);
  iVar3 = (int)uVar1->field6_0x6;
  *(u16 *)(iVar3 + (uint)index * 0x4) = item_offset;
  *(u16 *)(iVar3 + (uint)index * 0x4 + 0x2) = item_segment;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages the allocation and reallocation of the internal pointer buffer for a managed
// UI list. Increases capacity based on the defined increment step.

void __stdcall16far UI_Managed_List_Realloc_Buffer_Logic_1550(void *this_ptr)
{
  void *pvVar1;
  undefined *heap_ctx;
  astruct_301 *uVar5;
  undefined2 uVar2;
  void *puVar5;
  void *in_stack_0000ffe8;
  undefined4 uStack_a;
  void *uStack_6;
  
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_301 *)this_ptr;
  if (*(long *)&uVar5->field_0x12 == 0x0)
  {
    pvVar1 = (void *)uVar5->field11_0xe;
    puVar5._2_2_ = uVar5->field12_0x10;
  }
  else
  {
    pvVar1 = (void *)(*(uint *)&uVar5->field_0x12 + uVar5->field16_0x16);
    puVar5._2_2_ = (undefined *)
                   (uVar5->field15_0x14 + uVar5->field17_0x18 +
                   (uint)CARRY2(*(uint *)&uVar5->field_0x12,uVar5->field16_0x16));
  }
  uStack_6 = (void *)CONCAT22(puVar5._2_2_,pvVar1);
  if (uVar5->field6_0x6 == NULL)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar5._2_2_ = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    puVar5._0_2_ = alloc_with_hooks((ulong)(uint)((int)pvVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar5._2_2_ = (undefined *)
                   (((int)puVar5._2_2_ * 0x2 + (uint)CARRY2((uint)pvVar1,(uint)pvVar1))
                    * 0x2 + (uint)CARRY2((int)pvVar1 * 0x2,(int)pvVar1 * 0x2));
    puVar5._0_2_ = heap_realloc(0x1,(long)CONCAT22((uint *)uVar5->field6_0x6,
                                                   puVar5._2_2_),
                                (void *)((ulong)uVar5->field6_0x6 >> 0x10),
                                in_stack_0000ffe8);
  }
  uStack_a = (uint *)CONCAT22(puVar5._2_2_,(void *)puVar5);
  if (puVar5._2_2_ != NULL || (void *)puVar5 != NULL)
  {
    *(void **)&uVar5->field_0x12 = uStack_6;
    uVar5->field6_0x6 = uStack_a;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined2 __stdcall16far
UI_Window_Simple_List_Deserialize_from_File_1b18(u32 param_1,void *param_2)
{
  void *pvVar1;
  int iVar2;
  undefined *heap_ctx;
  void *pvVar3;
  void *pvVar4;
  undefined *in_DX;
  undefined2 uVar5;
  int iVar6;
  undefined2 uVar7;
  
  iVar6 = (int)param_1;
  uVar7 = (undefined2)(param_1 >> 0x10);
  iVar2 = UI_Window_with_List_Load_from_File_Logic_19b4(param_1,(void *)param_2);
  if (iVar2 != 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      heap_ctx = g_AllocatedBlock_Offset;
      in_DX = g_AllocatedBlock_Segment;
    }
    pvVar3 = alloc_with_hooks(0x6,0x1,heap_ctx);
    *(undefined2 *)(iVar6 + 0x10) = pvVar3;
    *(undefined2 *)(iVar6 + 0x12) = in_DX;
    pvVar3 = (void *)*(undefined2 *)(iVar6 + 0x12);
    iVar2 = file_read_check((long)param_2,(void *)*(undefined2 *)(iVar6 + 0x10),pvVar3);
    if (iVar2 != 0x0)
    {
      if (*(int *)*(undefined4 *)(iVar6 + 0x10) == 0x0)
      {
        return 0x1;
      }
      iVar2 = *(int *)*(undefined4 *)(iVar6 + 0x10) * 0x2;
      pvVar4 = allocate_memory(CONCAT22(iVar2,iVar2));
      uVar5 = (undefined2)((ulong)*(undefined4 *)(iVar6 + 0x10) >> 0x10);
      iVar2 = (int)*(undefined4 *)(iVar6 + 0x10);
      *(undefined2 *)(iVar2 + 0x2) = pvVar4;
      *(undefined2 *)(iVar2 + 0x4) = pvVar3;
      pvVar1 = (void *)*(undefined4 *)((int)*(undefined4 *)(iVar6 + 0x10) + 0x2);
      iVar2 = file_read_check((long)param_2,(void *)pvVar1,
                              (void *)((ulong)pvVar1 >> 0x10));
      if (iVar2 != 0x0)
      {
        return 0x1;
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far Simulator_Object_Realloc_Internal_Buffer_1f70(undefined4 param_1)
{
  uint uVar1;
  void *pvVar2;
  undefined *heap_ctx;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  void *in_stack_0000ffe8;
  undefined4 local_a;
  undefined4 local_6;
  
  uVar5 = (undefined2)((ulong)param_1 >> 0x10);
  iVar4 = (int)param_1;
  if (*(long *)(iVar4 + 0x10) == 0x0)
  {
    uVar1 = *(uint *)(iVar4 + 0xc);
    puVar3 = (undefined *)*(undefined2 *)(iVar4 + 0xe);
  }
  else
  {
    uVar1 = *(uint *)(iVar4 + 0x10) + *(uint *)(iVar4 + 0x14);
    puVar3 = (undefined *)
             (*(int *)(iVar4 + 0x12) + *(int *)(iVar4 + 0x16) +
             (uint)CARRY2(*(uint *)(iVar4 + 0x10),*(uint *)(iVar4 + 0x14)));
  }
  local_6 = CONCAT22(puVar3,uVar1);
  if (*(long *)(iVar4 + 0x4) == 0x0)
  {
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks((ulong)(uVar1 << 0x2),0x1,heap_ctx);
  }
  else
  {
    puVar3 = (undefined *)
             (((int)puVar3 * 0x2 + (uint)CARRY2(uVar1,uVar1)) * 0x2 +
             (uint)CARRY2(uVar1 * 0x2,uVar1 * 0x2));
    pvVar2 = heap_realloc(0x1,(long)CONCAT22((int)*(undefined4 *)(iVar4 + 0x4),puVar3),
                          (void *)((ulong)*(undefined4 *)(iVar4 + 0x4) >> 0x10),
                          in_stack_0000ffe8);
  }
  local_a = (void *)CONCAT22(puVar3,pvVar2);
  if (puVar3 != NULL || pvVar2 != NULL)
  {
    *(undefined4 *)(iVar4 + 0x10) = local_6;
    *(undefined4 *)(iVar4 + 0x4) = local_a;
  }
  return;
}
