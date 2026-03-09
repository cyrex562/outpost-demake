/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 9/54
 * Original lines (combined): 34169-35235
 * Boundaries: top-level declarations/definitions only
 */




// UI Event Dispatcher. Maps entity types and events to UI notifications. Uses virtual
// notification broadcasts to bridge simulation state to UI updates. Batch validates IDs
// via 1010:6CA2.

int UI_Event_Dispatcher_Map_Entity_to_Notification_Logic
              (undefined2 param_1,void *param_2,int param_3)
{
  int iVar1;
  void *this;
  int type_id;
  undefined2 uVar2;
  
  if (false)
  {
LAB_1010_703e:
    return 0x0;
  }
  this = (void *)param_2;
  type_id = (int)((ulong)param_2 >> 0x10);
  switch(param_3)
  {
  case 0x1:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1);
    UI_Window_Broadcast_Msg_EB_by_Type_Logic(this,type_id);
    return 0x1;
  default:
    goto LAB_1010_703e;
  case 0x4:
    uVar2 = 0x2;
    break;
  case 0x5:
    uVar2 = 0x3;
    break;
  case 0x6:
    uVar2 = 0x4;
    break;
  case 0x7:
    uVar2 = 0x5;
    break;
  case 0x9:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x6);
  case 0x2e:
    uVar2 = 0x38;
    break;
  case 0xa:
  case 0x80:
    uVar2 = 0x2d;
    break;
  case 0xb:
    uVar2 = 0x7;
    break;
  case 0xc:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x21:
  case 0x75:
  case 0x81:
    if (param_3 == 0x75)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x8);
      UI_Broadcast_Virtual_Notification_Wrapper();
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (this,type_id,0x810007,0x17,0x18,0x19,0x21,0xc,0x75);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x10);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x3,0x17,0x18,0x19);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x11);
    }
    if (param_3 == 0x21)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x14);
    }
    if (param_3 != 0xc)
    {
      return 0x1;
    }
    uVar2 = 0x9;
    goto LAB_1010_6d4c;
  case 0xe:
    uVar2 = 0xc;
    goto LAB_1010_6d4c;
  case 0x10:
  case 0x11:
  case 0x13:
    uVar2 = 0xd;
    break;
  case 0x12:
    uVar2 = 0xe;
    break;
  case 0x1b:
  case 0x1f:
  case 0x5b:
  case 0x78:
  case 0x7e:
  case 0x7f:
    if (param_3 == 0x7e)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x2c);
    }
    if (param_3 == 0x5b)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x38);
    }
    if (param_3 == 0x1f)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x3f);
    }
    if (param_3 == 0x7f)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x42);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (param_2,0x5,0x1b,0x1f,0x5b,0x78,0x7e);
    if ((iVar1 == 0x0) &&
       (iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                          (param_2,0x5,0x1b,0x1f,0x5b,0x78,0x7f), iVar1 == 0x0))
    {
      return 0x1;
    }
    uVar2 = 0x37;
    break;
  case 0x1d:
  case 0x2a:
  case 0x2c:
  case 0x3c:
  case 0x3d:
  case 0x4b:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x5a:
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x1d,0x5a);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x12);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic
                      (this,type_id,0x8,0x2c002a,0x3c,0x3d,0x4b,0x53,0x54,0x55);
    if (iVar1 != 0x0)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1a);
    }
    if (param_3 == 0x2c)
    {
      UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x1d);
    }
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x5a,0x2c);
    if (iVar1 == 0x0)
    {
      return 0x1;
    }
    uVar2 = 0x1c;
    break;
  case 0x22:
    uVar2 = 0x15;
    break;
  case 0x25:
    uVar2 = 0x16;
    break;
  case 0x26:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x17);
  case 0x1e:
    uVar2 = 0x13;
    break;
  case 0x27:
    uVar2 = 0x18;
    break;
  case 0x29:
    uVar2 = 0x19;
    break;
  case 0x2b:
    uVar2 = 0x1b;
    break;
  case 0x2f:
  case 0x36:
    iVar1 = Resource_Tracker_Batch_Validate_IDs_Logic(this,type_id,0x2,0x2f,0x36);
    if (iVar1 == 0x0)
    {
      return 0x0;
    }
    uVar2 = 0x1e;
    break;
  case 0x30:
    uVar2 = 0x1f;
    break;
  case 0x31:
    uVar2 = 0x35;
    break;
  case 0x33:
    uVar2 = 0x21;
    break;
  case 0x34:
    uVar2 = 0x22;
    break;
  case 0x35:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x23);
  case 0x65:
  case 0x66:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
    uVar2 = 0x34;
    break;
  case 0x38:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x24);
    uVar2 = 0x3d;
    break;
  case 0x39:
    uVar2 = 0x25;
    break;
  case 0x3e:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x26);
    UI_Broadcast_Virtual_Notification_Wrapper();
    uVar2 = 0x27;
    break;
  case 0x40:
    uVar2 = 0x2a;
    break;
  case 0x41:
    uVar2 = 0x39;
    break;
  case 0x42:
    uVar2 = 0x3a;
    break;
  case 0x44:
    uVar2 = 0x36;
    break;
  case 0x45:
    uVar2 = 0x3b;
    break;
  case 0x49:
    uVar2 = 0x29;
    break;
  case 0x50:
    uVar2 = 0x2b;
    break;
  case 0x56:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x3c);
    uVar2 = 0x3e;
    break;
  case 0x5d:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x2f);
    uVar2 = 0x40;
    break;
  case 0x5e:
  case 0x60:
    uVar2 = 0x2f;
    break;
  case 0x5f:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,0x34);
    uVar2 = 0x41;
    break;
  case 0x61:
    uVar2 = 0x30;
    break;
  case 0x63:
    uVar2 = 0x31;
    break;
  case 0x64:
    uVar2 = 0x24;
    break;
  case 0x68:
    uVar2 = 0x32;
    break;
  case 0x69:
    uVar2 = 0x33;
    break;
  case 0x76:
    uVar2 = 0xa;
LAB_1010_6d4c:
    UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,uVar2);
    uVar2 = 0xb;
  }
  UI_Broadcast_Virtual_Notification_Wrapper(0x1010,this,type_id,uVar2);
  return 0x1;
}



// Invokes a virtual notification method on an object stored at offset 0x14 of the
// parent. Used to bridge simulation events to UI updates.

void UI_Broadcast_Virtual_Notification_Wrapper
               (undefined2 param_1,undefined4 param_2,int param_3)
{
  UI_Dispatch_Global_Event_Logic(*(long *)((int)param_2 + 0x14),param_3);
  return;
}



void __stdcall16far UI_Window_Event_Dispatcher_7174(u32 param_1,uint param_2)
{
  int iVar1;
  undefined2 uVar2;
  
  iVar1 = (int)param_1;
  uVar2 = (undefined2)(param_1 >> 0x10);
  if (param_2 == 0x13)
  {
    UI_Window_Manager_Destroy_Entity_Window_Logic
              ((void *)(iVar1 + -0xa),
               *(long *)((int)*(undefined4 *)(iVar1 + 0x18) + 0x28));
    return;
  }
  if (param_2 < 0x14)
  {
    if ((char)param_2 == '\x01')
    {
      *(undefined4 *)(iVar1 + 0xa) = 0x0;
      *(undefined4 *)(iVar1 + 0x18) = 0x0;
      return;
    }
    if ((char)param_2 == '\x05')
    {
      UI_Window_Broadcast_Msg_EB_Logic((void *)(iVar1 + -0xa));
      return;
    }
  }
  return;
}



// Massive UI Factory Dispatcher. Allocates and constructs specialized dialog objects
// (fleet, base, morale, research) based on notification types. Registers listeners and
// manages window parenting.

void __stdcall16far
UI_Specialized_Dialog_Factory_Logic
          (void *param_1,long param_2,uint param_3,void *param_4)
{
  undefined2 *puVar1;
  char cVar2;
  void *pvVar3;
  u16 *puVar4;
  BOOL16 BVar5;
  astruct_491 *this;
  undefined2 *puVar6;
  void *reg_dx;
  uint uVar7;
  uint extraout_DX;
  uint uVar8;
  void *this_00;
  int notify_type;
  undefined2 uVar9;
  u16 *puVar10;
  LRESULT pvVar11;
  HWND16 hwnd;
  u16 *puVar12;
  undefined2 in_stack_0000ffd0;
  undefined2 *puStack_14;
  undefined4 uStack_e;
  undefined4 uStack_a;
  undefined4 uStack_6;
  
  if (param_3 == 0x0)
  {
    return;
  }
  uStack_6 = param_2;
  this_00 = (void *)param_1;
  notify_type = (int)((ulong)param_1 >> 0x10);
  if (param_2 == 0x0)
  {
    reg_dx = UI_Specialized_Dialog_Create_Helper
                      ((int)*(undefined4 *)((int)this_00 + 0x14),
                       (int)((ulong)*(undefined4 *)((int)this_00 + 0x14) >> 0x10),
                       param_3,(void *)param_4,(int)((ulong)param_4 >> 0x10));
    uStack_6 = CONCAT22(reg_dx,(int)param_2);
  }
  if (true)
  {
    switch(param_3)
    {
    case 0x1:
    case 0x4:
    case 0x6:
    case 0x7:
    case 0x8:
    case 0x9:
    case 0xd:
    case 0xe:
    case 0x14:
    case 0x18:
      goto switchD_1010_734d_caseD_1;
    default:
      break;
    }
  }
  if (uStack_6._2_2_ == NULL && (u16)uStack_6 == 0x0)
  {
    return;
  }
switchD_1010_734d_caseD_1:
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this_00,notify_type);
  if (*(int *)((int)this_00 + 0xe) == 0x0)
  {
    return;
  }
  if (false)
  {
switchD_1010_76b9_caseD_2:
    pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
    uVar7 = (uint)reg_dx | (uint)pvVar3;
    if (uVar7 == 0x0)
    {
LAB_1010_73fe:
      uVar9 = 0x1000;
      puVar4 = NULL;
      uVar7 = 0x0;
    }
    else
    {
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_TypeB772_ctor_init_b040(pvVar3,reg_dx,(u16)uStack_6);
    }
  }
  else
  {
    switch(param_3)
    {
    case 0x1:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 != 0x0)
      {
        uVar9 = 0x1040;
        puVar4 = (u16 *)UI_SubDialog_Type4824_ctor_init_44d2
                                  (pvVar3,(ulong)param_4,*(ushort *)((int)this_00 + 0xe)
                                  );
        break;
      }
      goto LAB_1010_73fe;
    default:
      goto switchD_1010_76b9_caseD_2;
    case 0x4:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9e));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type6386_ctor_init_5626
                                (pvVar3,(ulong)param_4,*(ushort *)((int)this_00 + 0xe));
      break;
    case 0x5:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (reg_dx == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type8F3C_ctor_init_8e58
                        (puVar4,reg_dx,(u16)uStack_6,uStack_6._2_2_,
                         *(undefined2 *)((int)this_00 + 0xe));
      break;
    case 0x6:
    case 0x7:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x98));
      if (reg_dx == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type4E18_ctor_init_48a0();
      break;
    case 0x8:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar4 = UI_Resource_Exchange_Dialog_ctor_init_9144
                         ((void *)CONCAT22(reg_dx,pvVar3),
                          *(uint16_t *)((int)this_00 + 0xe));
      break;
    case 0x9:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xb8));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_TypeBEBA_ctor_init_b7ee(pvVar3,reg_dx,(u16)uStack_6);
      break;
    case 0xa:
    case 0xb:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (reg_dx == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_Type9AF6_ctor_init_9a1e
                          (pvVar3,reg_dx,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0xc:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x12a));
      if (reg_dx == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_Type9EFA_ctor_init_9b72
                          (pvVar3,reg_dx,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0xd:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type6F32_ctor_init_6826(pvVar3,(ushort)reg_dx);
      break;
    case 0xe:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type76A4_ctor_init_6fb6(pvVar3,(ushort)reg_dx);
      break;
    case 0x13:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (reg_dx == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar10 = UI_SubDialog_TypeA4E8_ctor_init_a234
                          ((void *)CONCAT22(reg_dx,pvVar3),(u16)uStack_6,
                           (void *)CONCAT22(*(undefined2 *)((int)this_00 + 0xe),
                                            uStack_6._2_2_));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0x14:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xb8));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type55A2_ctor_init_4e94(pvVar3,reg_dx,(u16)uStack_6);
      break;
    case 0x15:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9a));
      if (reg_dx == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_TypeA5D0_ctor_init_0e1c();
      break;
    case 0x16:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)reg_dx | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type2E26_ctor_init_29c2(pvVar3,reg_dx,(u16)uStack_6);
      break;
    case 0x17:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x12a));
      if (reg_dx == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_TypeAE4E_ctor_init_adde
                          (pvVar3,reg_dx,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0x18:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xec));
      if (reg_dx == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar10 = UI_SubDialog_TypeAC08_ctor_init_a640
                          ((void *)CONCAT22(reg_dx,pvVar3),param_4,
                           *(u16 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
    }
  }
  uStack_a = (u16 *)CONCAT22(uVar7,puVar4);
  puVar1 = (undefined2 *)((int)*(undefined4 *)uStack_a + 0x8);
  puVar12 = puVar4;
  (*(code *)*puVar1)(uVar9,puVar4,uVar7);
  uVar8 = extraout_DX;
  if (param_3 != 0x17)
  {
    if (0x17 < param_3) goto LAB_1010_7710;
    cVar2 = (char)param_3;
    if ((cVar2 != '\x05') &&
       (((char)(cVar2 + -0x5) < '\x05' || ('\x02' < (char)(cVar2 + -0xa)))))
    goto LAB_1010_7710;
  }
  if (*(int *)((u16)uStack_6 + 0x16) != 0x0)
  {
    pvVar11 = SendMessage16(0x0,0x0,0xf8,
                            CONCAT22(puVar12,*(undefined2 *)((u16)uStack_6 + 0x14)));
    uVar8 = (uint)((ulong)pvVar11 >> 0x10);
  }
LAB_1010_7710:
  if (uStack_a != NULL)
  {
    hwnd = puVar4[0x3];
    BVar5 = IsWindow16(hwnd);
    if (BVar5 != 0x0)
    {
      uVar7 = uVar8;
      if (*(long *)((int)this_00 + 0x1c) == 0x0)
      {
        this = allocate_memory(CONCAT22(hwnd,0xc));
        uVar7 = uVar8 | (uint)this;
        if (uVar7 == 0x0)
        {
          *(undefined4 *)((int)this_00 + 0x1c) = 0x0;
        }
        else
        {
          pvVar3 = construct_object_with_vtable(this,uVar8);
          *(undefined2 *)((int)this_00 + 0x1c) = pvVar3;
          *(uint *)((int)this_00 + 0x1e) = uVar7;
        }
      }
      puVar6 = allocate_memory(CONCAT22(hwnd,0xc));
      uStack_e = (undefined2 *)CONCAT22(uVar7,puVar6);
      if (uVar7 == 0x0 && puVar6 == NULL)
      {
        puStack_14 = NULL;
      }
      else
      {
        *uStack_e = (char *)s_1_1050_389a;
        puVar6[0x1] = 0x1008;
        *(void **)(puVar6 + 0x2) = param_4;
        *(u16 **)(puVar6 + 0x4) = uStack_a;
        *uStack_e = 0x7e24;
        puVar6[0x1] = 0x1010;
        puStack_14 = uStack_e;
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this_00 + 0x1c) + 0x4);
      (*(code *)*puVar1)(0x1000,*(undefined4 *)((int)this_00 + 0x1c),
                         (undefined2 *)puStack_14,(int)((ulong)puStack_14 >> 0x10));
      return;
    }
  }
  if (uVar7 != 0x0 || puVar4 != NULL)
  {
    (*(code *)*(undefined2 *)*(undefined2 **)uStack_a)();
  }
  return;
}



// Searches the list of active sub-windows for an entry matching a specific entity ID or
// index. If found, it uses `SetFocus16` and `BringWindowToTop16` to bring that window
// to the foreground and returns 1.

int __stdcall16far
UI_Window_Focus_Manager_Logic(undefined4 param_1,int param_2,long param_3)
{
  HWND16 hwnd;
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined2 uVar4;
  long lVar5;
  long lStack_12;
  undefined1 local_a [0x8];
  
  uVar4 = (undefined2)((ulong)param_1 >> 0x10);
  if ((*(long *)((int)param_1 + 0x1c) != 0x0) && ((param_3 != 0x0 || (param_2 != 0x0))))
  {
    init_long_pair(local_a,*(long *)((int)param_1 + 0x1c));
    lStack_12 = 0x0;
    do
    {
      lVar5 = get_next_list_item(local_a);
      uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
      iVar2 = (int)lVar5;
      lVar3 = lStack_12;
      if (((lVar5 == 0x0) ||
          ((lVar3 = lVar5, param_2 == 0x0 && (*(long *)(iVar2 + 0x4) == param_3)))) ||
         ((param_3 == 0x0 &&
          (*(int *)((int)*(undefined4 *)(iVar2 + 0x8) + 0xa) == param_2)))) break;
    } while ((*(long *)(iVar2 + 0x4) != param_3) ||
            (*(int *)((int)*(undefined4 *)(iVar2 + 0x8) + 0xa) != param_2));
    lStack_12 = lVar3;
    if (lStack_12 != 0x0)
    {
      uVar1 = *(undefined4 *)((int)lStack_12 + 0x8);
      hwnd = *(HWND16 *)((int)uVar1 + 0x6);
      SetFocus16(hwnd);
      BringWindowToTop16(hwnd);
      return 0x1;
    }
  }
  return 0x0;
}



// Iterates through all registered sub-windows and hides them using `ShowWindow16(0,
// ...)`. Sets an internal flag indicating that windows are globally hidden.

void __stdcall16far UI_Window_Bulk_Hide_SubWindows_Logic(void *this)
{
  undefined4 uVar1;
  long lVar2;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x20) == 0x0)
  {
    *(undefined2 *)((int)this + 0x20) = 0x1;
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    while( true )
    {
      lVar2 = get_next_list_item(local_a);
      if (lVar2 == 0x0) break;
      uVar1 = *(undefined4 *)((int)lVar2 + 0x8);
      ShowWindow16(0x0,*(short *)((int)uVar1 + 0x6));
    }
  }
  return;
}



// Iterates through all registered sub-windows and shows them using `ShowWindow16(1,
// ...)`. Resets the internal 'hidden' flag.

void __stdcall16far UI_Window_Bulk_Show_SubWindows_Logic(void *this)
{
  undefined4 uVar1;
  long lVar2;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x20) != 0x0)
  {
    *(undefined2 *)((int)this + 0x20) = 0x0;
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    while( true )
    {
      lVar2 = get_next_list_item(local_a);
      if (lVar2 == 0x0) break;
      uVar1 = *(undefined4 *)((int)lVar2 + 0x8);
      ShowWindow16(0x1,*(short *)((int)uVar1 + 0x6));
    }
  }
  return;
}



// Searches the list of tracked sub-windows for an entry matching a specific 32-bit
// entity ID and destroys its associated HWND.

void __stdcall16far
UI_Window_Manager_Destroy_Entity_Window_Logic(void *this,long entity_id)
{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x1e) != 0x0 || *(int *)((int)this + 0x1c) != 0x0)
  {
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    do
    {
      lVar3 = get_next_list_item(local_a);
      iVar2 = (int)((ulong)lVar3 >> 0x10);
      iVar1 = (int)lVar3;
      if (iVar2 == 0x0 && iVar1 == 0x0) break;
    } while (*(long *)(iVar1 + 0x4) != entity_id);
    if (iVar2 != 0x0 || iVar1 != 0x0)
    {
      DestroyWindow16(*(HWND16 *)((int)*(undefined4 *)(iVar1 + 0x8) + 0x6));
    }
  }
  return;
}



// Searches the list of tracked sub-windows for an entry matching a specific window
// handle (HWND). Removes the entry from the list, destroys the container if it's empty,
// and triggers a virtual cleanup.

void __stdcall16far UI_Window_Manager_Remove_by_HWND_Logic(void *this,HWND16 hwnd)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x1e) != 0x0 || *(int *)((int)this + 0x1c) != 0x0)
  {
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    do
    {
      lVar5 = get_next_list_item(local_a);
      iVar4 = (int)((ulong)lVar5 >> 0x10);
      if (lVar5 == 0x0) break;
      uVar3 = *(undefined4 *)((int)lVar5 + 0x8);
    } while (*(int *)((int)uVar3 + 0x6) != in_stack_00000008);
    if (iVar4 != 0x0 || (int)lVar5 != 0x0)
    {
      puVar2 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x1c) + 0xc);
      (*(code *)*puVar2)(0x1008,*(undefined4 *)((int)this + 0x1c),lVar5);
    }
    if (*(int *)((int)*(undefined4 *)((int)this + 0x1c) + 0x8) == 0x0)
    {
      puVar1 = (undefined4 *)*(int *)((int)this + 0x1c);
      iVar4 = *(int *)((int)this + 0x1e);
      if (iVar4 != 0x0 || puVar1 != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*puVar1)
                  (0x1008,puVar1,iVar4,0x1,puVar1,iVar4,puVar1,iVar4);
      }
      *(undefined4 *)((int)this + 0x1c) = 0x0;
    }
  }
  return;
}



// Broadcasts message 0xEB to all tracked sub-windows via `SendMessage16`. used to
// signal global state changes or layout refreshes.

void __stdcall16far UI_Window_Broadcast_Msg_EB_Logic(void *this)
{
  undefined4 uVar1;
  long lVar2;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffec;
  undefined1 local_a [0x8];
  
  if (*(int *)((int)this + 0x1e) != 0x0 || *(int *)((int)this + 0x1c) != 0x0)
  {
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    while( true )
    {
      lVar2 = get_next_list_item(local_a);
      if (lVar2 == 0x0) break;
      uVar1 = *(undefined4 *)((int)lVar2 + 0x8);
      SendMessage16(0x0,0x0,0xeb,
                    CONCAT22(in_stack_0000ffec,*(undefined2 *)((int)uVar1 + 0x6)));
    }
  }
  return;
}
