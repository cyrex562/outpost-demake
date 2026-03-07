/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 9/13
 * Original lines (combined): 79897-85512
 * Boundaries: top-level declarations/definitions only
 */




// Internal destructor for build item 0x8FB0. Frees an internal far pointer at offset
// 0x8A and reverts vtables.

void __stdcall16far UI_Build_Item_Type_8FB0_dtor_Internal_8dec(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x8fb0;
  this_ptr[0x1] = 0x1028;
  free_if_not_null((void *)*(void **)(this_ptr + 0x8a));
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8ea6(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    *local_a = 0x8fb0;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_8fea(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x110));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *local_a = 0x6e50;
    puVar3[0x1] = 0x1028;
    *local_a = 0x90d6;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_9264(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x10a));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    puVar3[0x84] = *(undefined2 *)(iVar6 + 0x108);
    *local_a = 0x932c;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_94e4(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x124));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    puVar3[0x8c] = *(undefined2 *)(iVar6 + 0x118);
    puVar3[0x8d] = *(undefined2 *)(iVar6 + 0x11a);
    puVar3[0x8e] = *(undefined2 *)(iVar6 + 0x11c);
    *(undefined4 *)(puVar3 + 0x8f) = *(undefined4 *)(iVar6 + 0x11e);
    puVar3[0x91] = *(undefined2 *)(iVar6 + 0x122);
    *local_a = 0x9934;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Internal destructor for build item 0x9C52. Frees an internal far pointer at offset
// 0x8A and reverts vtables.

void __stdcall16far UI_Build_Item_Type_9C52_dtor_Internal_9992(u16 *this_ptr)
{
  undefined2 in_stack_00000006;
  
  *_this_ptr = 0x9c52;
  this_ptr[0x1] = 0x1028;
  free_if_not_null((void *)*(void **)(this_ptr + 0x8a));
  *_this_ptr = (u16)(char *)s_1_1050_389a;
  this_ptr[0x1] = 0x1008;
  return;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_9b48(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x118));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  iVar6 = (int)param_1;
  uVar8 = (undefined2)((ulong)param_1 >> 0x10);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    *(undefined4 *)(puVar3 + 0x8a) = *(undefined4 *)(iVar6 + 0x114);
    *local_a = 0x9c52;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  *(undefined4 *)(iVar6 + 0x114) = 0x0;
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_a82a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_a982(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_aaf6(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_ac7a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_ad9c(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar7 = (undefined2)((ulong)param_1 >> 0x10);
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *local_a = 0xae56;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_ae2a(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_afce(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x116));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined4 *)(puVar3 + 0x88) = *(undefined4 *)(iVar6 + 0x110);
    puVar3[0x8a] = *(undefined2 *)(iVar6 + 0x114);
    *local_a = 0xb0ce;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_b0a2(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



undefined2 * __stdcall16far Simulator_Object_Clone_Logic_b108(undefined4 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  undefined4 local_a;
  undefined2 *local_6;
  
  puVar3 = allocate_memory(CONCAT22(unaff_SI,0x110));
  local_a = (undefined2 *)CONCAT22(in_DX,puVar3);
  if (in_DX == 0x0 && puVar3 == NULL)
  {
    local_6 = NULL;
  }
  else
  {
    *local_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    uVar8 = (undefined2)((ulong)param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)(puVar3 + 0x2) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)(puVar3 + 0x4);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *local_a = 0x6ad2;
    puVar3[0x1] = 0x1028;
    *(undefined4 *)(puVar3 + 0x84) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)(puVar3 + 0x86) = *(undefined4 *)(iVar6 + 0x10c);
    *local_a = 0x6e50;
    puVar3[0x1] = 0x1028;
    *local_a = 0xb1f4;
    puVar3[0x1] = 0x1028;
    local_6 = local_a;
  }
  return local_6;
}



// Scalar deleting destructor for UI objects. Reverts vtable to base and conditionally
// frees memory.

void * __stdcall16far UI_Build_Item_dtor_Scalar_Deleting_b1c8(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



// Core state transition logic for UI build items. Handles state 6
// (intermediate/paused), memory cleanup for states 4/5, and triggers virtual
// state-change callbacks (offset 0x3C).

void __stdcall16far
UI_Build_Item_Transition_State_Logic_bdac(void *this_ptr,int new_state)
{
  undefined2 *puVar1;
  void *pvVar2;
  undefined2 uVar3;
  undefined2 unaff_CS;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  pvVar2 = (void *)this_ptr;
  if (*(int *)((int)pvVar2 + 0x12) != new_state)
  {
    if (*(int *)((int)pvVar2 + 0x12) == 0x6)
    {
      if (*(int *)((int)pvVar2 + 0x18) == new_state)
      {
        *(undefined2 *)((int)pvVar2 + 0x12) = *(undefined2 *)((int)pvVar2 + 0x18);
        *(undefined2 *)((int)pvVar2 + 0x18) = 0x0;
        return;
      }
    }
    else
    {
      if (new_state != 0x6)
      {
        if ((*(int *)((int)pvVar2 + 0x12) == 0x4) ||
           (*(int *)((int)pvVar2 + 0x12) == 0x5))
        {
          unaff_CS = 0x1000;
          free_if_not_null((void *)(void *)*(undefined4 *)((int)pvVar2 + 0x14));
        }
        *(int *)((int)pvVar2 + 0x12) = new_state;
        puVar1 = (undefined2 *)((int)*(undefined4 *)this_ptr + 0x3c);
        (*(code *)*puVar1)(unaff_CS,this_ptr);
        return;
      }
      *(undefined2 *)((int)pvVar2 + 0x18) = *(undefined2 *)((int)pvVar2 + 0x12);
      *(undefined2 *)((int)pvVar2 + 0x12) = 0x6;
    }
  }
  return;
}



// Iterates through all nodes in a Data History object, calling their virtual
// destructors and freeing memory.

u16 __stdcall16far Data_History_Object_Clear_All_Nodes_Logic_d01a(undefined4 *param_1)
{
  undefined4 *node_ptr;
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_DX;
  int extraout_DX;
  ulong uVar5;
  undefined4 uStack_e;
  
  node_ptr = (undefined4 *)**(undefined4 **)*param_1;
  puVar4 = node_ptr;
  while( true )
  {
    puVar3 = (undefined4 *)puVar4;
    UI_Build_Item_Node_dtor_Logic_d728(node_ptr);
    uStack_e = (undefined4 *)CONCAT22(in_DX,puVar3);
    if (in_DX == 0x0 && puVar3 == NULL) break;
    puVar2 = (undefined2 *)*uStack_e;
    puVar1 = (undefined2 *)puVar2 + 0x2;
    (*(code *)*puVar1)();
    puVar4 = NULL;
    in_DX = extraout_DX;
    if (uStack_e != NULL)
    {
      puVar1 = (undefined2 *)puVar2;
      uVar5 = (*(code *)*puVar1)();
      in_DX = (int)(uVar5 >> 0x10);
      puVar4 = (undefined4 *)(uVar5 & 0xffff);
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for a manager that coordinates two sorted linked lists (vtable 0xD804).

void * __stdcall16far UI_Sorted_Linked_List_Manager_ctor_init_d59c(astruct_314 *param_1)
{
  astruct_491 *paVar1;
  uint in_DX;
  u16 uVar2;
  astruct_314 *uVar4;
  undefined2 uVar3;
  undefined2 in_stack_0000fff2;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar4 = (astruct_314 *)param_1;
  *(undefined4 *)param_1 = 0x0;
  uVar4->field4_0x4 = NULL;
  uVar4->field5_0x8 = NULL;
  *(undefined4 *)param_1 = *_p_SimulatorGlobalState;
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fff2,0xc));
  uVar2 = in_DX | (uint)paVar1;
  if (uVar2 == 0x0)
  {
    uVar4->field4_0x4 = NULL;
  }
  else
  {
    construct_object_with_vtable(paVar1,in_DX);
    *(undefined2 *)&((astruct_491 *)CONCAT22(in_DX,paVar1))->field0_0x0 = 0xd804;
    *(undefined2 *)((int)&paVar1->field0_0x0 + 0x2) = 0x1028;
    uVar4->field4_0x4 = (u16 *)CONCAT22(in_DX,paVar1);
  }
  paVar1 = allocate_memory(CONCAT22(paVar1,0xc));
  if (uVar2 == 0x0 && paVar1 == NULL)
  {
    uVar4->field5_0x8 = NULL;
  }
  else
  {
    construct_object_with_vtable(paVar1,uVar2);
    *(undefined2 *)&((astruct_491 *)CONCAT22(uVar2,paVar1))->field0_0x0 = 0xd804;
    *(undefined2 *)((int)&paVar1->field0_0x0 + 0x2) = 0x1028;
    uVar4->field5_0x8 = (u16 *)CONCAT22(uVar2,paVar1);
  }
  return param_1;
}



// Main constructor for the global Simulator Context structure. Initializes numerous
// vtables (ec36, ecac, ed2c, edc4, ee54, ef00, 10b0, 1120), creates internal resource
// managers, and pre-allocates 8 specialized UI Item Lists for world tracking. Sets the
// global 1050:65E2 pointer.

u32 * __stdcall16far Simulator_Context_ctor_init_Global_d81c(u32 *this_ptr,u32 *arg2)
{
  u32 *puVar1;
  void **table_ptr_out;
  void *pvVar2;
  u16 *puVar3;
  uint in_DX;
  uint uVar4;
  uint uVar5;
  u32 in_stack_00000008;
  undefined2 in_stack_0000fffa;
  
  *_this_ptr = 0x0;
  this_ptr[0x1] = in_stack_00000008;
  *(undefined4 *)((int)this_ptr + 0x52) = 0x0;
  p_SimulatorWorldContext = (undefined *)this_ptr;
  PTR_DAT_1050_0000_1050_65e4 = (undefined *)arg2;
  *(undefined2 *)((int)this_ptr + 0x32) = 0xec36;
  *(undefined2 *)(this_ptr + 0xd) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x36) = 0xecac;
  *(undefined2 *)(this_ptr + 0xe) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x3a) = 0xed2c;
  *(undefined2 *)(this_ptr + 0xf) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x3e) = 0xedc4;
  *(undefined2 *)(this_ptr + 0x10) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x42) = 0xee54;
  *(undefined2 *)(this_ptr + 0x11) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x46) = 0xef00;
  *(undefined2 *)(this_ptr + 0x12) = 0x1028;
  *(undefined2 *)((int)this_ptr + 0x4a) = 0x10b0;
  *(undefined2 *)(this_ptr + 0x13) = 0x1030;
  *(undefined2 *)((int)this_ptr + 0x4e) = 0x1120;
  *(undefined2 *)(this_ptr + 0x14) = 0x1030;
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x8));
  in_DX |= (uint)puVar1;
  if (in_DX != 0x0)
  {
    Simulator_Map_Context_ctor_init_615a(puVar1);
  }
  puVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0x56c));
  in_DX |= (uint)puVar1;
  if (in_DX == 0x0)
  {
    puVar1 = NULL;
    in_DX = 0x0;
  }
  else
  {
    puVar1 = Simulator_Map_Context_ctor_init_44be(puVar1);
  }
  *(undefined2 *)((int)this_ptr + 0x52) = puVar1;
  *(uint *)(this_ptr + 0x15) = in_DX;
  table_ptr_out = allocate_memory(CONCAT22(in_stack_0000fffa,0x4));
  in_DX |= (uint)table_ptr_out;
  if (in_DX != 0x0)
  {
    res_init_string_property_table_logic(table_ptr_out);
  }
  memset_far((void *)((int)this_ptr + 0xa),(int)arg2,0x0);
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = in_DX | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    *(undefined4 *)((int)this_ptr + 0xe) = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(in_DX,pvVar2),(void *)0x5,(void *)0x15);
    *(undefined2 *)((int)this_ptr + 0xe) = puVar3;
    *(uint *)(this_ptr + 0x4) = uVar4;
  }
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0xa);
  }
  *(undefined2 *)((int)this_ptr + 0x12) = puVar3;
  *(uint *)(this_ptr + 0x5) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x5,(void *)0x19);
  }
  *(undefined2 *)((int)this_ptr + 0x16) = puVar3;
  *(uint *)(this_ptr + 0x6) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0xa);
  }
  *(undefined2 *)((int)this_ptr + 0x1a) = puVar3;
  *(uint *)(this_ptr + 0x7) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x64,(void *)0x1f4);
  }
  *(undefined2 *)((int)this_ptr + 0x1e) = puVar3;
  *(uint *)(this_ptr + 0x8) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x19,(void *)0x64);
  }
  *(undefined2 *)((int)this_ptr + 0x22) = puVar3;
  *(uint *)(this_ptr + 0x9) = uVar5;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar4 = uVar5 | (uint)pvVar2;
  if (uVar4 == 0x0)
  {
    puVar3 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar5,pvVar2),(void *)0x64,(void *)0x1f4);
  }
  *(undefined2 *)((int)this_ptr + 0x26) = puVar3;
  *(uint *)(this_ptr + 0xa) = uVar4;
  pvVar2 = allocate_memory(CONCAT22(in_stack_0000fffa,0x1c));
  uVar5 = uVar4 | (uint)pvVar2;
  if (uVar5 == 0x0)
  {
    puVar3 = NULL;
    uVar5 = 0x0;
  }
  else
  {
    puVar3 = UI_Managed_List_Base_ctor_init_11aa
                       ((void *)CONCAT22(uVar4,pvVar2),(void *)0x5,(void *)0x2);
  }
  *(undefined2 *)((int)this_ptr + 0x2a) = puVar3;
  *(uint *)(this_ptr + 0xb) = uVar5;
  return this_ptr;
}
