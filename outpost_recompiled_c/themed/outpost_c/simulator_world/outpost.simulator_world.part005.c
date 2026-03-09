/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 5/56
 * Original lines (combined): 20871-22163
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global memory block at 1050:03A0.
// Initializes local resource entry with vtable 1008:AD8E.
// Performs indirect call through [this + 10] vtable offset 8 to add entry to managed
// list.

void __stdcall16far
Turn_Manager_Add_Resource_Change_Entry_Logic
          (void *this,long value_delta,int qty_delta,int arg4,long arg5,int resource_id)
{
  undefined2 *puVar1;
  int iVar2;
  bool bVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffbc;
  undefined4 uStack_14;
  undefined2 *puStack_e;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  bVar3 = false;
  do
  {
    lVar7 = get_next_list_item(local_a);
    iVar5 = (int)((ulong)lVar7 >> 0x10);
    iVar2 = (int)lVar7;
    iVar6 = 0x0;
    if (iVar5 == 0x0 && iVar2 == 0x0) goto LAB_1008_a146;
  } while (*(int *)(iVar2 + 0x4) != resource_id);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + qty_delta;
  *(long *)(iVar2 + 0xe) = *(long *)(iVar2 + 0xe) + value_delta;
  iVar6 = *(int *)(iVar2 + 0x10);
  bVar3 = true;
LAB_1008_a146:
  if (!bVar3)
  {
    puVar4 = validate_and_get_block((void *)_p_Pool_Type1_Event);
    uStack_14 = (undefined2 *)CONCAT22(iVar6,puVar4);
    if (iVar6 == 0x0 && puVar4 == NULL)
    {
      puStack_e = NULL;
    }
    else
    {
      *uStack_14 = (char *)s_1_1050_389a;
      puVar4[0x1] = 0x1008;
      puVar4[0x2] = resource_id;
      *(long *)(puVar4 + 0x3) = arg5;
      puVar4[0x5] = arg4;
      puVar4[0x6] = qty_delta;
      *(long *)(puVar4 + 0x7) = value_delta;
      *uStack_14 = 0xad8e;
      puVar4[0x1] = 0x1008;
      puStack_e = uStack_14;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
    (*(code *)*puVar1)(0x1000,(int)*(undefined4 *)((int)this + 0xa),
                       (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),
                       (undefined2 *)puStack_e,(int)((ulong)puStack_e >> 0x10));
  }
  if (resource_id == 0x14)
  {
    PostMessage16(0x0,0x0,0xfc,(long)CONCAT22(in_stack_0000ffbc,g_ParentHWND));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer / Vtable
// Performs exhaustive string resource loading (50+ IDs) via global manager at
// 1050:14CC.
// References global simulator state at 1050:65E2 and resource manager at 1050:0ED0.
// Triggers UI system state change via Resource 0x2B.
// Indirectly calls virtual destructor (index 0) of the popped message object.

char * __stdcall16far
Turn_Manager_Process_Next_Event_Message_Logic
          (void *this,int *resource_id_out,int *attr_out,int *icon_id_out,int *type_out)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined2 uVar8;
  undefined2 unaff_CS;
  undefined2 uVar9;
  undefined2 unaff_SS;
  void *pvVar10;
  undefined2 in_stack_0000000e;
  undefined2 *in_stack_00000010;
  int *in_stack_00000014;
  int arg2;
  undefined4 uVar11;
  undefined1 local_106 [0x100];
  undefined4 *puStack_6;
  
  *in_stack_00000014 = 0x0;
  *in_stack_00000010 = 0x0;
  *_type_out = 0x0;
  *_attr_out = 0x0;
  *(undefined1 *)((int)this + 0xe) = 0x0;
  uVar11 = *(undefined4 *)((int)this + 0xa);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x10);
  puStack_6 = (undefined4 *)(*(code *)*puVar1)();
  uVar5 = (uint)((ulong)puStack_6 >> 0x10);
  puVar2 = (undefined4 *)puStack_6;
  uVar6 = uVar5 | (uint)puVar2;
  if (uVar6 == 0x0)
  {
    return NULL;
  }
  *in_stack_00000014 = *(int *)(puVar2 + 0x1);
  *_type_out = *(int *)((int)puVar2 + 0xa);
  iVar3 = Turn_Manager_Remap_Type_to_Resource_ID_Logic
                    ((int)this,(int)resource_id_out,*in_stack_00000014);
  *_attr_out = iVar3;
  uVar8 = (undefined2)((ulong)puStack_6 >> 0x10);
  if (false) goto switchD_1008_a835_caseD_3;
  uVar9 = 0x1008;
  iVar3 = (int)_p_GlobalResourceManager;
  arg2 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  unaff_CS = 0x1008;
  switch(*(undefined2 *)((undefined4 *)puStack_6 + 0x1))
  {
  case 0x1:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x59a,resource_id_out));
    *in_stack_00000010 = 0xd1;
    goto LAB_1008_a2b1;
  case 0x2:
    pvVar10 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,
                         (u8 *)(u8 *)*(undefined4 *)((int)(undefined4 *)puStack_6 + 0x6)
                        );
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_106,0x100),
               CONCAT22(0x3ff,unaff_SS));
    UI_Component_Get_FarPtr_at_1FA(pvVar10);
    unaff_CS = 0x1000;
    sprintf_wrapper((int)this + 0xe,resource_id_out,local_106);
    break;
  case 0x5:
    uVar8 = 0x59b;
    goto LAB_1008_a277;
  case 0x6:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x631,resource_id_out));
    *in_stack_00000010 = 0xd4;
LAB_1008_a2b1:
    unaff_CS = 0x1010;
    *_type_out = 0x1;
    break;
  case 0x7:
    uVar8 = 0x400;
LAB_1008_a277:
    unaff_CS = 0x1010;
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(uVar8,resource_id_out));
    break;
  case 0x9:
    if (*(int *)((int)this + 0x416) == 0x0)
    {
      *(undefined2 *)((int)this + 0x416) = 0x1;
      unaff_CS = uVar9;
      break;
    }
    goto LAB_1008_a35a;
  case 0xb:
    if (*(int *)((int)this + 0x41a) == 0x0)
    {
      *(undefined2 *)((int)this + 0x41a) = 0x1;
      unaff_CS = uVar9;
      break;
    }
    goto LAB_1008_a35a;
  case 0xe:
    if (*(int *)((int)this + 0x41c) == 0x0)
    {
      *(undefined2 *)((int)this + 0x41c) = 0x1;
      unaff_CS = uVar9;
      break;
    }
    goto LAB_1008_a35a;
  case 0x14:
    if (*(int *)((int)this + 0x418) == 0x0)
    {
      *(undefined2 *)((int)this + 0x418) = 0x1;
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22((char *)((int)this + 0xe),0x3ff),
                 (long)CONCAT22(0x72a,resource_id_out));
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x72b);
      strcat_append((char *)CONCAT22(resource_id_out,(char *)((int)this + 0xe)),
                    (char *)CONCAT22(uVar6,pcVar4));
      *in_stack_00000010 = 0x4c;
      iVar3 = 0x1;
      pvVar10 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2b);
      UI_System_Set_State_Flag_and_Notify
                ((void *)pvVar10,(int)((ulong)pvVar10 >> 0x10),iVar3);
      unaff_CS = 0x1010;
      break;
    }
    goto LAB_1008_a35a;
  case 0x16:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x713,resource_id_out));
    *in_stack_00000010 = 0x28;
    unaff_CS = 0x1010;
    break;
  case 0x17:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x717,resource_id_out));
    *in_stack_00000010 = 0x2c;
    unaff_CS = 0x1010;
    break;
  case 0x18:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x719,resource_id_out));
    *in_stack_00000010 = 0x2e;
    unaff_CS = 0x1010;
    break;
  case 0x1b:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x71b,resource_id_out));
    *in_stack_00000010 = 0x30;
    unaff_CS = 0x1010;
    break;
  case 0x1c:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x71d,resource_id_out));
    *in_stack_00000010 = 0x32;
    unaff_CS = 0x1010;
    break;
  case 0x1f:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x720,resource_id_out));
    *in_stack_00000010 = 0x34;
    unaff_CS = 0x1010;
    break;
  case 0x21:
    if (*(int *)((int)this + 0x41e) == 0x0)
    {
      *(undefined2 *)((int)this + 0x41e) = 0x1;
      break;
    }
LAB_1008_a35a:
    *_attr_out = 0x0;
    unaff_CS = uVar9;
    break;
  case 0x24:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x715,resource_id_out));
    *in_stack_00000010 = 0x2a;
    unaff_CS = 0x1010;
    break;
  case 0x31:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x712,resource_id_out));
    *in_stack_00000010 = 0x27;
    unaff_CS = 0x1010;
    break;
  case 0x32:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x714,resource_id_out));
    *in_stack_00000010 = 0x29;
    unaff_CS = 0x1010;
    break;
  case 0x33:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x716,resource_id_out));
    *in_stack_00000010 = 0x2b;
    unaff_CS = 0x1010;
    break;
  case 0x34:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x718,resource_id_out));
    *in_stack_00000010 = 0x2d;
    unaff_CS = 0x1010;
    break;
  case 0x35:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x71a,resource_id_out));
    *in_stack_00000010 = 0x2f;
    unaff_CS = 0x1010;
    break;
  case 0x36:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x71c,resource_id_out));
    *in_stack_00000010 = 0x31;
    unaff_CS = 0x1010;
    break;
  case 0x37:
    piVar7 = resource_id_out;
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((char *)((int)this + 0xe),0x3ff),
               (long)CONCAT22(0x71e,resource_id_out));
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x71f);
    strcat_append((char *)CONCAT22(resource_id_out,(char *)((int)this + 0xe)),
                  (char *)CONCAT22(piVar7,pcVar4));
    *in_stack_00000010 = 0x33;
    unaff_CS = 0x1000;
    break;
  case 0x38:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x721,resource_id_out));
    *in_stack_00000010 = 0x35;
    unaff_CS = 0x1010;
    break;
  case 0x39:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x722,resource_id_out));
    *in_stack_00000010 = 0x36;
    unaff_CS = 0x1010;
    break;
  case 0x3a:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x723,resource_id_out));
    *in_stack_00000010 = 0x37;
    unaff_CS = 0x1010;
    break;
  case 0x3b:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x724,resource_id_out));
    *in_stack_00000010 = 0x38;
    unaff_CS = 0x1010;
    break;
  case 0x3c:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x725,resource_id_out));
    *in_stack_00000010 = 0x39;
    unaff_CS = 0x1010;
    break;
  case 0x3d:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x742,resource_id_out));
    *in_stack_00000010 = 0xce;
    unaff_CS = 0x1010;
    break;
  case 0x3e:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x743,resource_id_out));
    *in_stack_00000010 = 0xcf;
    unaff_CS = 0x1010;
    break;
  case 0x3f:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x744,resource_id_out));
    *in_stack_00000010 = 0xd0;
    unaff_CS = 0x1010;
    break;
  case 0x40:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x745,resource_id_out));
    *in_stack_00000010 = 0xd1;
    unaff_CS = 0x1010;
    break;
  case 0x41:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x746,resource_id_out));
    *in_stack_00000010 = 0xd2;
    unaff_CS = 0x1010;
    break;
  case 0x42:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x747,resource_id_out));
    *in_stack_00000010 = 0xd3;
    unaff_CS = 0x1010;
    break;
  case 0x43:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x748,resource_id_out));
    *in_stack_00000010 = 0xd5;
    unaff_CS = 0x1010;
    break;
  case 0x44:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x749,resource_id_out));
    *in_stack_00000010 = 0xd6;
    unaff_CS = 0x1010;
    break;
  case 0x45:
    LoadString_Global_Wrapper
              (iVar3,arg2,CONCAT22((int)this + 0xe,0x3ff),
               (long)CONCAT22(0x74a,resource_id_out));
    *in_stack_00000010 = 0xd7;
    unaff_CS = 0x1010;
  }
switchD_1008_a835_caseD_3:
  if (puStack_6 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puStack_6)
              (unaff_CS,(undefined4 *)puStack_6,(int)((ulong)puStack_6 >> 0x10),0x1,
               uVar11);
  }
  return (char *)((int)this + 0xe);
}



char * __stdcall16far
Turn_Manager_Process_Next_Event_Message_with_Lazy_Ptr_Update
          (void *this,int *resource_id_out,long *attr_ptr_out,int *type_out)
{
  char *pcVar1;
  void *in_stack_0000000c;
  int local_6 [0x2];
  
  pcVar1 = Turn_Manager_Process_Next_Event_Message_Logic
                     (this,resource_id_out,(int *)attr_ptr_out,type_out,local_6);
  set_u32_ptr((void *)in_stack_0000000c,(int)((ulong)in_stack_0000000c >> 0x10),
              local_6[0x0]);
  return pcVar1;
}



// Targeted Scan Finding: Vtable
// Initializes local timed-resource tracker with vtable 1008:AD8A.
// Performs indirect call through [this + 0x410] vtable offset 8 to register the
// tracker.

int __stdcall16far
Turn_Manager_Register_New_Timed_Resource_Logic(void *this,int resource_id)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  int in_stack_00000008;
  undefined2 in_stack_0000ffdc;
  undefined4 uStack_18;
  undefined2 *puStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == 0x0)
  {
    return 0x0;
  }
  init_long_pair(local_a,*(long *)((int)this + 0x410));
  do
  {
    lVar6 = get_next_list_item(local_a);
    uVar4 = (uint)((ulong)lVar6 >> 0x10);
    uVar5 = uVar4 | (uint)lVar6;
    if (uVar5 == 0x0)
    {
      puVar2 = allocate_memory(CONCAT22(in_stack_0000ffdc,0x6));
      uStack_18 = (undefined2 *)CONCAT22(uVar5,puVar2);
      if (uVar5 == 0x0 && puVar2 == NULL)
      {
        puStack_12 = NULL;
      }
      else
      {
        *uStack_18 = (char *)s_1_1050_389a;
        puVar2[0x1] = 0x1008;
        puVar2[0x2] = in_stack_00000008;
        *uStack_18 = 0xad8a;
        puVar2[0x1] = 0x1008;
        puStack_12 = uStack_18;
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x410) + 0x8);
      iVar3 = (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this + 0x410),
                                 (undefined2 *)puStack_12,
                                 (int)((ulong)puStack_12 >> 0x10));
      return iVar3;
    }
  } while (*(int *)((uint)lVar6 + 0x4) != in_stack_00000008);
  return 0x1;
}



int __stdcall16far Turn_Manager_Remap_Object_Type_ID_Logic_2(int arg1,int arg2,int id)
{
  int iStack_4;
  
  iStack_4 = 0x0;
  switch(id)
  {
  case 0x1:
    iStack_4 = 0x24;
    break;
  case 0x2:
    iStack_4 = 0x16;
    break;
  case 0x3:
    iStack_4 = 0x17;
    break;
  case 0x4:
    iStack_4 = 0x18;
    break;
  case 0x5:
    iStack_4 = 0x1b;
    break;
  case 0x6:
    iStack_4 = 0x1c;
    break;
  case 0x7:
    iStack_4 = 0x1f;
  }
  return iStack_4;
}



int __stdcall16far
Turn_Manager_Remap_Input_Char_to_Message_Type_Logic(int arg1,int arg2,int character)
{
  if (character == 0x37)
  {
    return 0x22;
  }
  if ((uint)character < 0x38)
  {
    if ((char)character == '\r')
    {
      return 0xf;
    }
    if ((char)character == '*')
    {
      return 0x2b;
    }
  }
  return 0x0;
}



// Maps an internal object or event type ID (param_3) to its corresponding resource
// manager string ID or display index. Uses a large switch-case to handle a variety of
// game-specific types.

int __stdcall16far
Turn_Manager_Remap_Type_to_Resource_ID_Logic(int arg1,int arg2,int type_id)
{
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  if (true)
  {
    switch(type_id)
    {
    case 0x8:
      uStack_4 = 0x82;
      break;
    case 0x9:
      uStack_4 = 0x7f;
      break;
    case 0xa:
      uStack_4 = 0x80;
      break;
    case 0xb:
      uStack_4 = 0x84;
      break;
    case 0xc:
      uStack_4 = 0x89;
      break;
    case 0xd:
      uStack_4 = 0x8a;
      break;
    case 0xe:
      uStack_4 = 0x8c;
      break;
    case 0xf:
      uStack_4 = 0x8e;
      break;
    case 0x10:
      uStack_4 = 0x8f;
      break;
    case 0x11:
      uStack_4 = 0x90;
      break;
    case 0x12:
      uStack_4 = 0x91;
      break;
    case 0x13:
      uStack_4 = 0x95;
      break;
    case 0x14:
      uStack_4 = 0x96;
      break;
    case 0x16:
      uStack_4 = 0x9b;
      break;
    case 0x17:
      uStack_4 = 0x9f;
      break;
    case 0x18:
      uStack_4 = 0xa2;
      break;
    case 0x19:
      uStack_4 = 0xa4;
      break;
    case 0x1b:
    case 0x1c:
      uStack_4 = 0xa7;
      break;
    case 0x1d:
      uStack_4 = 0xaa;
      break;
    case 0x1e:
      uStack_4 = 0xac;
      break;
    case 0x1f:
      uStack_4 = 0xad;
      break;
    case 0x20:
      uStack_4 = 0xae;
      break;
    case 0x21:
      uStack_4 = 0xb1;
      break;
    case 0x22:
      uStack_4 = 0xb3;
      break;
    case 0x23:
      uStack_4 = 0xb4;
      break;
    case 0x24:
      uStack_4 = 0xb5;
      break;
    case 0x25:
      uStack_4 = 0xb6;
      break;
    case 0x26:
      uStack_4 = 0xb7;
      break;
    case 0x27:
      uStack_4 = 0xab;
      break;
    case 0x28:
      uStack_4 = 0xb9;
      break;
    case 0x29:
      uStack_4 = 0xba;
      break;
    case 0x2a:
      uStack_4 = 0xbc;
      break;
    case 0x2b:
      uStack_4 = 0xbe;
      break;
    case 0x2c:
      uStack_4 = 0xdf;
      break;
    case 0x2d:
      uStack_4 = 0xe0;
    }
  }
  return uStack_4;
}



// Targeted Scan Finding: Resource
// References a gameplay sub-object property table at 1008:03A4.
// Initializes object fields from the table based on type index.

void * __stdcall16far Gameplay_SubObject_init_logic(void *this,int type_index)
{
  int in_stack_00000008;
  
  *_this = 0x0;
  *(undefined2 *)((int)this + 0x2) = 0x0;
  *(int *)((int)this + 0x4) = in_stack_00000008;
  *_this = *(undefined2 *)(in_stack_00000008 * 0x6 + 0x3a4);
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Cleans up a UI sub-component reference stored at offset 0x16. It resolves the
// associated resource, calls a cleanup routine, and zeroes the sub-object's state
// fields.

void __stdcall16far UI_Element_Subclass_Cleanup_Offset_16(void *this)
{
  void *this_ptr;
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                         ((u16)_p_SimulatorGlobalState,
                          (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                          (void *)*(undefined4 *)
                                   ((int)*(undefined4 *)((int)this + 0x16) + 0xa));
    UI_Colony_Window_Free_SubItem_Logic_3608(this_ptr);
    *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0x8) = 0x0;
    *(undefined4 *)((int)*(undefined4 *)((int)this + 0x16) + 0xa) = 0x0;
    *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0xe) = 0x0;
    *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0x10) = 0x0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads string resource 0x531 using global string manager at 1050:14CC.

char * __stdcall16far get_resource_string_531(void)
{
  char *pcVar1;
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  return pcVar1;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Performs indirect call through list object vtable index 0 (Destructor) and offset 8
// (Add item).
// Instantiates UI_Element_Subclass with vtable 1008:BDC0 for each file entry.
// Uses global simulator iterator logic.

void * __stdcall16far UI_Populate_File_List_Logic(void *this)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  astruct_491 *this_00;
  void *pvVar3;
  char *pcVar4;
  uint extraout_DX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined2 unaff_SS;
  void *this_ptr;
  char *pcVar9;
  undefined2 in_stack_00000006;
  void *in_stack_0000ffd4;
  undefined1 local_14 [0x12];
  
  if (*(long *)((int)this + 0xe) != 0x0)
  {
    return (void *)*(undefined2 *)((int)this + 0xe);
  }
  uVar5 = *(uint *)((int)this + 0x10);
  if (uVar5 != 0x0 || (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar2)();
    uVar5 = extraout_DX;
  }
  this_00 = allocate_memory(CONCAT22(in_stack_0000ffd4,0xc));
  uVar6 = uVar5 | (uint)this_00;
  if (uVar6 == 0x0)
  {
    pvVar3 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    pvVar3 = construct_object_with_vtable(this_00,uVar5);
  }
  *(undefined2 *)((int)this + 0xe) = pvVar3;
  *(uint *)((int)this + 0x10) = uVar6;
  Simulator_World_Iterator_ctor_init_dc52
            ((undefined1 *)CONCAT22(unaff_SS,local_14),0x1,0x0,0x400);
  while( true )
  {
    this_ptr = Simulator_World_Iterator_Get_Next_Entity_e4ec
                         ((undefined1 *)CONCAT22(unaff_SS,local_14));
    uVar6 = (uint)((ulong)this_ptr >> 0x10);
    uVar5 = (uint)this_ptr;
    uVar7 = uVar6 | uVar5;
    if (uVar7 == 0x0) break;
    uVar1 = *(undefined4 *)(uVar5 + 0x4);
    if (*(long *)(uVar5 + 0x200) == 0x8000001)
    {
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd4,0xc));
      uVar7 |= (uint)pvVar3;
      if (uVar7 == 0x0)
      {
        in_stack_0000ffd4 = NULL;
        uVar7 = 0x0;
      }
      else
      {
        in_stack_0000ffd4 = UI_Element_Subclass_ctor_BDC0(pvVar3);
      }
      pcVar9 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
      uVar8 = (undefined2)((ulong)pcVar9 >> 0x10);
      pcVar4 = strdup_allocate((char *)pcVar9);
      *(undefined2 *)((int)in_stack_0000ffd4 + 0x4) = pcVar4;
      *(undefined2 *)((int)in_stack_0000ffd4 + 0x6) = uVar8;
      *(undefined4 *)((int)in_stack_0000ffd4 + 0x8) = uVar1;
      puVar2 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xe) + 0x8);
      (*(code *)*puVar2)(0x1038,(int)*(undefined4 *)((int)this + 0xe),
                         (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10),
                         in_stack_0000ffd4,uVar7);
    }
  }
  return (void *)(void *)*(undefined4 *)((int)this + 0xe);
}
