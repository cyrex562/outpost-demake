/*
 * Source: outpost.c
 * Chunk: 19/117
 * Original lines: 20656-21844
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Reverts UI_Manager vtables to base states during destruction.
// Unregisters from global tracker list via 1050:0388.
// Iteratively invokes virtual destructors for 12 managed resource sub-objects.

void __stdcall16far UI_Manager_dtor(void *this)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  int in_stack_00000006;
  undefined4 uStack_8;
  int iStack_4;
  
  *_this = 0x9fb2;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x1c) = 0x9fca;
  *(undefined2 *)((int)this + 0x1e) = 0x1008;
  if (_PTR_DAT_1050_0000_1050_0388 != NULL)
  {
    if (in_stack_00000006 == 0x0 && this == NULL)
    {
      iVar3 = 0x0;
      iVar5 = 0x0;
    }
    else
    {
      iVar3 = (int)this + 0x1c;
      iVar5 = in_stack_00000006;
    }
    Simulator_Find_and_Signal_Resource_Tracker
              ((void *)_PTR_DAT_1050_0000_1050_0388,0x50,CONCAT22(iVar5,iVar3));
  }
  iStack_4 = 0x0;
  do
  {
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x22);
    iVar5 = *(int *)((int)this + iStack_4 * 0x4 + 0x24);
    if (iVar5 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0xc);
  if (_this == NULL)
  {
    puVar4 = NULL;
    iVar5 = 0x0;
  }
  else
  {
    puVar4 = (undefined2 *)((int)this + 0x1c);
    iVar5 = in_stack_00000006;
  }
  uStack_8 = (undefined2 *)CONCAT22(iVar5,puVar4);
  *uStack_8 = (char *)s_1_1050_389a;
  puVar4[0x1] = 0x1008;
  Build_Site_Object_dtor_Internal((long)_this);
  return;
}



void __stdcall16far
UI_Manager_Handle_Resource_Notification_Type2(int param_1,int param_2,int param_3)
{
  if (param_3 == 0x2)
  {
    UI_Manager_Increment_Resource_Index((void *)(param_1 + -0x1c));
    UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)(param_1 + -0x1c),param_2);
  }
  return;
}



// Retrieves a 32-bit resource pointer from the UI Manager's internal table using the
// index stored at offset 0x20.

void * __stdcall16far UI_Manager_Get_Resource_Ptr_at_Index(void *this)
{
  undefined2 in_stack_00000006;
  
  return (void *)*(undefined2 *)((int)this + *(int *)((int)this + 0x20) * 0x4 + 0x22);
}



// Increments the internal resource index for the UI Manager, wrapping back to 0 after
// reaching 11 (0xB).

void __stdcall16far UI_Manager_Increment_Resource_Index(void *this)
{
  undefined2 in_stack_00000006;
  
  *(int *)((int)this + 0x20) = *(int *)((int)this + 0x20) + 0x1;
  if (0xb < *(int *)((int)this + 0x20))
  {
    *(undefined2 *)((int)this + 0x20) = 0x0;
  }
  return;
}



void UI_Manager_dtor_Wrapper_1008_9f80(u16 param_1,int param_2,u16 param_3,byte param_4)
{
  UI_Manager_dtor_Scalar_Deleting_9f8c((void *)(param_2 + -0x1c),param_3,param_4);
  return;
}



void * __stdcall16far
UI_Manager_dtor_Scalar_Deleting_9f8c(void *param_1,u16 param_2,byte param_3)
{
  UI_Manager_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes specialized manager vtable to 1008:AD92.
// Allocates and constructs two internal tracker objects using
// construct_object_with_vtable (sets vtable to 1008:5BC4).

void * __stdcall16far UI_Specialized_Manager_ctor(void *this,int arg2,int arg3)
{
  astruct_491 *paVar1;
  void *pvVar2;
  uint in_DX;
  uint uVar3;
  uint uVar4;
  undefined2 in_stack_0000fffa;
  
  Base_Object_ctor_init_2014_Logic(this,arg2);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0x410) = 0x0;
  *(undefined2 *)((int)this + 0x414) = 0x0;
  *(undefined2 *)((int)this + 0x416) = 0x0;
  *(undefined2 *)((int)this + 0x418) = 0x0;
  *(undefined2 *)((int)this + 0x41a) = 0x0;
  *(undefined2 *)((int)this + 0x41c) = 0x0;
  *(undefined2 *)((int)this + 0x41e) = 0x0;
  *(undefined2 *)CONCAT22(arg2,this) = 0xad92;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar3 = in_DX | (uint)paVar1;
  if (uVar3 == 0x0)
  {
    *(undefined4 *)((int)this + 0xa) = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,in_DX);
    *(undefined2 *)((int)this + 0xa) = pvVar2;
    *(uint *)((int)this + 0xc) = uVar3;
  }
  paVar1 = allocate_memory(CONCAT22(in_stack_0000fffa,0xc));
  uVar4 = uVar3 | (uint)paVar1;
  if (uVar4 == 0x0)
  {
    pvVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(paVar1,uVar3);
  }
  *(undefined2 *)((int)this + 0x410) = pvVar2;
  *(uint *)((int)this + 0x412) = uVar4;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Turn_Manager vtable to 1008:AD92.
// Performs indirect calls through vtable index 0 of two internal sub-objects at offsets
// 10 and 0x410.

void __stdcall16far Turn_Manager_ctor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xad92;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x412) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x410) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x410);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



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



void * __stdcall16far Turn_Manager_Trigger_Next_Sequence_Event_Logic_maybe(void *this)
{
  undefined2 in_stack_00000006;
  undefined2 uStack_4;
  
  uStack_4 = NULL;
  if ((*(int *)((int)this + 0x414) == 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)this + 0x410) + 0x8) != 0x0))
  {
    *(undefined2 *)((int)this + 0x414) = 0x1;
    uStack_4 = Turn_Manager_Perform_MCI_Signal_Update_Logic(this);
  }
  return uStack_4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global media context pointer at 1050:02A0.
// Performs indirect call through [this + 0x410] vtable offset 0x10 to pop a signal
// event.
// Invokes virtual destructor (index 0) of the signal object.

void * __stdcall16far Turn_Manager_Perform_MCI_Signal_Update_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x414) != 0x0)
  {
    if (*(int *)((int)*(undefined4 *)((int)this + 0x410) + 0x8) == 0x0)
    {
      *(undefined2 *)((int)this + 0x414) = 0x0;
      return NULL;
    }
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x410) + 0x10);
    puVar3 = (undefined4 *)(*(code *)*puVar1)();
    puVar2 = (undefined4 *)puVar3;
    if (puVar3 != NULL)
    {
      media_play_from_resource_id_shorthand
                ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
      if (puVar3 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar3)();
      }
      return puVar2;
    }
  }
  return NULL;
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



int __stdcall16far Turn_Manager_Has_Active_Sequence_maybe_Logic(void *this)
{
  undefined2 in_stack_00000006;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  if ((*(long *)((int)this + 0xa) != 0x0) &&
     (*(int *)((int)*(undefined4 *)((int)this + 0xa) + 0x8) != 0x0))
  {
    uStack_4 = 0x1;
  }
  return uStack_4;
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



u16 * __stdcall16far
Descriptor_Object_dtor_Scalar_Deleting_ad0c(u16 *param_1,byte param_2)
{
  int bucket_index;
  
  bucket_index = (int)((ulong)param_1 >> 0x10);
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    heap_free_descriptor((u16 *)param_1,bucket_index);
  }
  return param_1;
}



u16 * __stdcall16far Base_Object_dtor_Scalar_Deleting_ad38(u16 *param_1,byte param_2)
{
  *param_1 = (u16)(char *)s_1_1050_389a;
  ((u16 *)param_1)[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((u16 *)param_1);
  }
  return param_1;
}



void * __stdcall16far
Turn_Manager_dtor_Scalar_Deleting_ad64(void *param_1,u16 param_2,byte param_3)
{
  Turn_Manager_ctor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
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



// Refreshes the primary value of a gameplay sub-object by looking up the latest value
// in the table at 0x3A4 using the object's already-stored type index.

void __stdcall16far Gameplay_SubObject_refresh_from_table_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = *(undefined2 *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4);
  return;
}



// Retrieves the value from the properties table (0x3A4) corresponding to the gameplay
// sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4);
}



// Retrieves the second 16-bit field from the properties table entry corresponding to
// the gameplay sub-object's type index.

int __stdcall16far Gameplay_SubObject_get_table_value_field2_logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a6);
}



// Updates the internal value of a gameplay sub-object for each simulation tick.
// Depending on the object's behavior flags (at 0x3A8), it can perform ping-ponging
// increments/decrements or standard wrapping cycles between the minimum and maximum
// values defined in the properties table.

void __stdcall16far Gameplay_SubObject_Process_Tick_Logic(void *this)
{
  int iVar1;
  undefined2 in_stack_00000006;
  
  iVar1 = *(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a8);
  if (iVar1 == 0x2)
  {
    if (*(int *)((int)this + 0x2) == 0x1)
    {
      *(int *)this = *(int *)this + -0x1;
      iVar1 = *(int *)((int)this + 0x4) * 0x6;
      if (*(int *)this < *(int *)(iVar1 + 0x3a4))
      {
        *(int *)this = *(int *)(iVar1 + 0x3a4) + 0x1;
        *(undefined2 *)((int)this + 0x2) = 0x0;
        return;
      }
    }
    else
    {
      *(int *)this = *(int *)this + 0x1;
      iVar1 = *(int *)((int)this + 0x4) * 0x6;
      if (*(int *)(iVar1 + 0x3a6) < *(int *)this)
      {
        *(int *)this = *(int *)(iVar1 + 0x3a6) + -0x1;
        *(undefined2 *)((int)this + 0x2) = 0x1;
        return;
      }
    }
  }
  else if ((iVar1 != 0x3) && (iVar1 != 0x4))
  {
    *(int *)this = *(int *)this + 0x1;
    iVar1 = *(int *)((int)this + 0x4) * 0x6;
    if (*(int *)(iVar1 + 0x3a6) < *(int *)this)
    {
      *(undefined2 *)this = *(undefined2 *)(iVar1 + 0x3a4);
    }
  }
  return;
}



// Returns true (1) if the first field of the properties table entry for this sub-object
// is non-zero. Used for basic state validation.

int __stdcall16far Gameplay_SubObject_Check_Field1_NonZero_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)(*(int *)((int)this + 0x4) * 0x6 + 0x3a4) != 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// Targeted Scan Finding: Vtable / Far Pointer
// Initializes UI_Special_Dialog vtable to 1008:AF7C.
// Registers global special dialog instance at 1050:4230.
// Loads resources with ID 0x1B3 via Build_Site_Object_Initialize_Vtable_and_Resource.

void * __stdcall16far UI_Special_Dialog_ctor_init(void *this,int arg2,int res_id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(arg2,this),res_id);
  *(undefined2 *)CONCAT22(arg2,this) = 0xaf7c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)arg2;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(arg2,this),0x1b3);
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Special_Dialog vtable to 1008:AF7C during destruction.

void __stdcall16far UI_Special_Dialog_dtor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xaf7c;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  Build_Site_Object_dtor_Internal((long)_this);
  return;
}
