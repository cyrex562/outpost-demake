/*
 * Source: outpost.c
 * Chunk: 31/117
 * Original lines: 34597-35775
 * Boundaries: top-level declarations/definitions only
 */




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
  void *in_DX;
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
    in_DX = UI_Specialized_Dialog_Create_Helper
                      ((int)*(undefined4 *)((int)this_00 + 0x14),
                       (int)((ulong)*(undefined4 *)((int)this_00 + 0x14) >> 0x10),
                       param_3,(void *)param_4,(int)((ulong)param_4 >> 0x10));
    uStack_6 = CONCAT22(in_DX,(int)param_2);
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
    uVar7 = (uint)in_DX | (uint)pvVar3;
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
      puVar4 = (u16 *)UI_SubDialog_TypeB772_ctor_init_b040(pvVar3,in_DX,(u16)uStack_6);
    }
  }
  else
  {
    switch(param_3)
    {
    case 0x1:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      uVar7 = (uint)in_DX | (uint)pvVar3;
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
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type6386_ctor_init_5626
                                (pvVar3,(ulong)param_4,*(ushort *)((int)this_00 + 0xe));
      break;
    case 0x5:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (in_DX == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type8F3C_ctor_init_8e58
                        (puVar4,in_DX,(u16)uStack_6,uStack_6._2_2_,
                         *(undefined2 *)((int)this_00 + 0xe));
      break;
    case 0x6:
    case 0x7:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x98));
      if (in_DX == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_Type4E18_ctor_init_48a0();
      break;
    case 0x8:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar4 = UI_Resource_Exchange_Dialog_ctor_init_9144
                         ((void *)CONCAT22(in_DX,pvVar3),
                          *(uint16_t *)((int)this_00 + 0xe));
      break;
    case 0x9:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xb8));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_TypeBEBA_ctor_init_b7ee(pvVar3,in_DX,(u16)uStack_6);
      break;
    case 0xa:
    case 0xb:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_Type9AF6_ctor_init_9a1e
                          (pvVar3,in_DX,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0xc:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x12a));
      if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_Type9EFA_ctor_init_9b72
                          (pvVar3,in_DX,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0xd:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type6F32_ctor_init_6826(pvVar3,(ushort)in_DX);
      break;
    case 0xe:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type76A4_ctor_init_6fb6(pvVar3,(ushort)in_DX);
      break;
    case 0x13:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x94));
      if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar10 = UI_SubDialog_TypeA4E8_ctor_init_a234
                          ((void *)CONCAT22(in_DX,pvVar3),(u16)uStack_6,
                           (void *)CONCAT22(*(undefined2 *)((int)this_00 + 0xe),
                                            uStack_6._2_2_));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0x14:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xb8));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type55A2_ctor_init_4e94(pvVar3,in_DX,(u16)uStack_6);
      break;
    case 0x15:
      puVar4 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9a));
      if (in_DX == NULL && puVar4 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      uVar7 = UI_SubDialog_TypeA5D0_ctor_init_0e1c();
      break;
    case 0x16:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x9c));
      uVar7 = (uint)in_DX | (uint)pvVar3;
      if (uVar7 == 0x0) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type2E26_ctor_init_29c2(pvVar3,in_DX,(u16)uStack_6);
      break;
    case 0x17:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0x12a));
      if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1038;
      puVar10 = UI_SubDialog_TypeAE4E_ctor_init_adde
                          (pvVar3,in_DX,(u16)uStack_6,uStack_6._2_2_,
                           *(undefined2 *)((int)this_00 + 0xe));
      uVar7 = (uint)((ulong)puVar10 >> 0x10);
      puVar4 = (u16 *)puVar10;
      break;
    case 0x18:
      pvVar3 = allocate_memory(CONCAT22(in_stack_0000ffd0,0xec));
      if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_73fe;
      uVar9 = 0x1040;
      puVar10 = UI_SubDialog_TypeAC08_ctor_init_a640
                          ((void *)CONCAT22(in_DX,pvVar3),param_4,
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps raw entity type values to internal UI notification categories (1-22). It
// performs multiple lookups in global property arrays to differentiate between
// colonization events, ship types, and base components.

int __stdcall16far
UI_Classify_Entity_Type_for_Notification_Logic(void *this,long entity_ref)
{
  int iVar1;
  int iVar2;
  int in_stack_00000006;
  int iStack_6;
  
  iVar1 = UI_Get_U16_at_Offset_C_Logic
                    ((int)*(undefined4 *)((int)this + 0x14),
                     (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),entity_ref)
  ;
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
  if (iVar2 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
    if (((iVar2 == 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
        iVar2 == 0x0)) &&
       (iVar2 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
       iVar2 == 0x0))
    {
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if ((iVar2 != 0x0) ||
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
         iVar2 != 0x0))
      {
        return 0x5;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if ((iVar2 != 0x0) ||
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
         iVar2 != 0x0))
      {
        return 0x4;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x6;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x7;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x10;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x11;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x15;
      }
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar1 != 0x0)
      {
        return 0x16;
      }
      iVar1 = UI_Validate_Entity_Type_for_Context_Logic_maybe
                        ((int)this,in_stack_00000006);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0xc;
    }
    iStack_6 = 0x1;
  }
  else
  {
    iStack_6 = 0x18;
  }
  return iStack_6;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Broadcasts message 0xEB only to sub-windows associated with specific entity types.
// Filters using search_array_for_value and global type map at 1050:06E0.

void __stdcall16far UI_Window_Broadcast_Msg_EB_by_Type_Logic(void *this,int type_id)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  void *pvVar5;
  int in_stack_00000008;
  undefined2 in_stack_0000ffe4;
  undefined1 local_a [0x8];
  
  if ((*(int *)((int)this + 0x1e) != 0x0 || *(int *)((int)this + 0x1c) != 0x0) &&
     (in_stack_00000008 != 0x0))
  {
    init_long_pair(local_a,*(long *)((int)this + 0x1c));
    while( true )
    {
      lVar4 = get_next_list_item(local_a);
      uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
      iVar1 = (int)lVar4;
      if (lVar4 == 0x0) break;
      if (*(long *)(iVar1 + 0x4) != 0x0)
      {
        pvVar5 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                           ((void *)*(undefined4 *)(iVar1 + 0x4));
        iVar2 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)(void *)pvVar5 + 0xc));
        if (iVar2 != 0x0)
        {
          SendMessage16(0x0,0x0,0xeb,
                        CONCAT22(in_stack_0000ffe4,
                                 *(undefined2 *)
                                  ((int)*(undefined4 *)(iVar1 + 0x8) + 0x6)));
        }
      }
    }
  }
  return;
}



int __stdcall16far UI_Component_Unpack_3Word_at_Offset_C_Logic(void *obj)
{
  int *unaff_SS;
  int in_stack_00000008;
  undefined2 in_stack_0000000a;
  undefined4 local_e;
  undefined2 uStack_a;
  int local_8 [0x3];
  
  local_e = *(undefined4 *)(in_stack_00000008 + 0xc);
  uStack_a = *(undefined2 *)(in_stack_00000008 + 0x10);
  unpack_3word_struct(&local_e,unaff_SS,local_8,unaff_SS);
  return local_8[0x0];
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __stdcall16far
UI_Validate_Entity_Type_for_Context_Logic_maybe(int context_id,int type_id)
{
  int iVar1;
  int in_stack_00000008;
  int in_stack_0000000a;
  
  if (in_stack_00000008 != 0x3)
  {
    if ((in_stack_0000000a < 0xa) || (0x7f < in_stack_0000000a))
    {
      return 0x0;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),in_stack_0000000a);
    if (iVar1 != 0x0)
    {
      return 0x0;
    }
    if (((in_stack_0000000a == 0x6a) && (in_stack_00000008 != 0x4)) &&
       (in_stack_00000008 != 0x5))
    {
      return 0x0;
    }
  }
  return 0x1;
}



void UI_Resource_Summary_dtor_Wrapper_1010_7dc6
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Resource_Summary_Manager_dtor_Scalar_Deleting
            ((void *)(param_2 + -0xa),param_3,param_4);
  return;
}



u16 * __stdcall16far
UI_Base_Object_dtor_Scalar_Deleting_1010_7dd2(u16 *param_1,byte param_2)
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
Resource_Summary_Manager_dtor_Scalar_Deleting(void *param_1,u16 param_2,byte param_3)
{
  Resource_Summary_Manager_dtor_7E28_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u32 * __stdcall16far Global_Resource_Manager_ctor_init_1010_7e40(u32 *param_1)
{
  u32 *puVar1;
  undefined *value;
  long lVar2;
  
  value = (undefined *)((ulong)param_1 >> 0x10);
  puVar1 = (u32 *)param_1;
  *param_1 = 0x0;
  puVar1[0x19f] = 0x0;
  *(undefined2 *)(puVar1 + 0x1a0) = 0x0;
  *(undefined2 *)((int)puVar1 + 0xe82) = 0x0;
  puVar1[0x3a1] = 0x0;
  puVar1[0x3a2] = 0x0;
  memset_far(puVar1 + 0x1,(int)value,0x0);
  memset_far(puVar1 + 0x8b,(int)value,0x0);
  memset_far(puVar1 + 0x115,(int)value,0x0);
  *(undefined1 *)((int)puVar1 + 0x682) = 0x0;
  *(undefined1 *)((int)puVar1 + 0xa82) = 0x0;
  p_GlobalResourceManager = (undefined *)puVar1;
  PTR_DAT_1050_0000_1050_14ce = value;
  lVar2 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  *(int *)(puVar1 + 0x3a2) = (int)lVar2;
  *(undefined2 *)((int)puVar1 + 0xe8a) = (int)((ulong)lVar2 >> 0x10);
  puVar1[0x3a1] = *(u32 *)((int)puVar1[0x3a2] + 0x64);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Global Resource Manager destructor. Iterates through ~400 slots (bitmaps, dialogs,
// collections), invokes virtual destructors, and clears the global singleton at
// 1050:14CC.

void __stdcall16far Global_Resource_Manager_dtor_logic_7EFC(void *this)
{
  void *obj;
  undefined4 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  undefined2 in_stack_00000006;
  int iStack_4;
  
  obj = (void *)*(undefined2 *)((int)this + 0x67c);
  if (*(u16 *)((int)this + 0x67e) != 0x0 || obj != NULL)
  {
    call_virtual_destructor_logic(obj,*(u16 *)((int)this + 0x67e));
    unaff_CS = 0x1000;
    free_if_not_null(obj);
  }
  for (iStack_4 = 0x0; iStack_4 < 0x8a; iStack_4 += 0x1)
  {
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x4);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x6);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
    }
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x22c);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x22e);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1);
    }
    puVar1 = (undefined4 *)*(int *)((int)this + iStack_4 * 0x4 + 0x454);
    iVar2 = *(int *)((int)this + iStack_4 * 0x4 + 0x456);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1);
    }
  }
  free_if_not_null((void *)(void *)*_this);
  _p_GlobalResourceManager = 0x0;
  return;
}



void __stdcall16far Global_Resource_Manager_Release_Object_67C_7fd6(u32 param_1)
{
  void *obj;
  int iVar1;
  undefined2 uVar2;
  u32 local_6;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  iVar1 = (int)param_1;
  obj = (void *)*(undefined2 *)(iVar1 + 0x67c);
  if (*(u16 *)(iVar1 + 0x67e) != 0x0 || obj != NULL)
  {
    call_virtual_destructor_logic(obj,*(u16 *)(iVar1 + 0x67e));
    free_if_not_null(obj);
  }
  *(undefined4 *)(iVar1 + 0x67c) = 0x0;
  *(undefined2 *)(iVar1 + 0x680) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a specific sub-bitmap region from a managed resource collection. Updates
// the internal path if necessary and creates a new bitmap object for the sub-region.

void * __stdcall16far
Resource_Manager_Get_SubBitmap_by_Index_Logic(void *this,int index)
{
  int iVar1;
  void *pvVar2;
  int in_stack_00000008;
  
  if (*(int *)((char *)s_559_bmp_1050_1f9f + 0x1 + in_stack_00000008 * 0xa) != 0x0)
  {
    Resource_Manager_Switch_Active_Bitmap_Logic(this,index);
    if (*(long *)((int)this + 0x67c) != 0x0)
    {
      iVar1 = in_stack_00000008 * 0xa;
      pvVar2 = Bitmap_Object_Create_SubBitmap_Logic
                         ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                          CONCAT22(*(undefined2 *)
                                    ((char *)s_559_bmp_1050_1f9f + 0x7 + iVar1),
                                   *(undefined2 *)
                                    ((char *)s_560_bmp_1050_1fa7 + 0x1 + iVar1)),
                          *(int *)((char *)s_559_bmp_1050_1f9f + 0x5 + iVar1),
                          *(int *)((char *)s_559_bmp_1050_1f9f + 0x3 + iVar1));
      return pvVar2;
    }
  }
  return NULL;
}



// Updates file path based on type ID. Selects between prefixes at 1050:3194 and
// 1050:3196, splits the path, and re-assembles it. Sets result in object at offset 0.

int __stdcall16far Resource_Manager_Update_Path_by_Type_Logic(void *this,int mode)
{
  char *pcVar1;
  int in_DX;
  int unaff_SS;
  int in_stack_00000008;
  char *pcVar2;
  char local_306 [0x100];
  char local_206 [0x100];
  char local_106 [0x104];
  
  splitpath_far_optimized_with_segments
            ((char *)((void **)&PTR_DAT_1050_24ea_1050_2526)
                     [*(int *)((int)this + 0xe82)],
             (char *)((ulong)((void **)&PTR_DAT_1050_24ea_1050_2526)
                             [*(int *)((int)this + 0xe82)] >> 0x10),NULL,NULL,NULL);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_106),
                   (char *)CONCAT22(unaff_SS,local_206));
  if (in_stack_00000008 == 0x2)
  {
    pcVar2 = (char *)0x10503194;
  }
  else
  {
    pcVar2 = (char *)0x10503196;
  }
  strcat_append((char *)CONCAT22(unaff_SS,local_106),pcVar2);
  strcat_append((char *)CONCAT22(unaff_SS,local_106),
                (char *)CONCAT22(unaff_SS,local_306));
  pcVar1 = Resource_Manager_Resolve_File_Path_Logic(this,(char *)mode);
  if ((pcVar1 == local_106) && (in_DX == unaff_SS))
  {
    Resource_Manager_Report_File_Error_Logic(this);
  }
  free_if_not_null((void *)*(void **)_this);
  pcVar1 = strdup_allocate(pcVar1);
  *_this = (int)pcVar1;
  *(int *)((int)this + 0x2) = in_DX;
  return *_this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a bitmap region. Validates path and resource ID, ensuring the backing
// bitmap is loaded before creating a new bitmap object for the requested region
// (offsets 0x18-0x1E).

void * __stdcall16far Resource_Manager_Get_Bitmap_Region_Logic(void *this,int index)
{
  void *pvVar1;
  int iVar2;
  int in_stack_00000008;
  
  if (*(int *)(in_stack_00000008 * 0x10 + 0x16) != *(int *)((int)this + 0x680))
  {
    Resource_Manager_Update_Path_by_Type_Logic(this,index);
    Resource_Manager_Switch_Active_Bitmap_Logic(this,index);
    if (*(long *)((int)this + 0x67c) == 0x0)
    {
      return NULL;
    }
  }
  iVar2 = in_stack_00000008 * 0x10;
  pvVar1 = Bitmap_Object_Copy_Region_To_New_Bitmap
                     ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                      CONCAT22(*(undefined2 *)(iVar2 + 0x1c),
                               *(undefined2 *)(iVar2 + 0x1e)),*(int *)(iVar2 + 0x1a),
                      *(int *)(iVar2 + 0x18));
  return pvVar1;
}



// Retrieves or creates a resource entry (likely a bitmap) in one of three
// sub-collections based on a 32-bit type identifier. Handles lazy initialization of
// sub-collections if needed.

void * __stdcall16far
Resource_Manager_Get_or_Create_Entry_Logic(void *this,long type_id,int index)
{
  void *pvVar1;
  void *in_stack_00000006;
  undefined2 uStack_c;
  int iStack_a;
  
  if (type_id == 0x8000001)
  {
    iStack_a = (int)this + 0x22c;
    uStack_c = 0xfa;
  }
  else if (type_id == 0x8000002)
  {
    iStack_a = (int)this + 0x454;
    uStack_c = 0xfc;
  }
  else
  {
    iStack_a = (int)this + 0x4;
    uStack_c = 0x2;
  }
  if (*(long *)(index * 0x4 + iStack_a) == 0x0)
  {
    if ((0x0 < index) && (index < 0xa))
    {
      Resource_Manager_Bulk_Load_Sourced_SubBitmaps_Logic
                (this,in_stack_00000006,uStack_c,iStack_a,in_stack_00000006);
      return (void *)*(undefined2 *)(index * 0x4 + iStack_a);
    }
    if (index < 0xa)
    {
      return NULL;
    }
    if (0x7f < index)
    {
      return NULL;
    }
    if (*(long *)(iStack_a + 0x14) == 0x0)
    {
      Resource_Manager_Bulk_Load_Sourced_SubBitmaps_Logic
                (this,in_stack_00000006,uStack_c,iStack_a,in_stack_00000006);
    }
    Resource_Manager_Composite_SubBitmap_Logic(this,in_stack_00000006,iStack_a);
  }
  pvVar1 = Resource_Manager_Get_or_Clone_Bitmap_Logic(this,(int)in_stack_00000006);
  return pvVar1;
}



void __stdcall16far Resource_Manager_Set_Offset_E82_Logic(void *this,int value)
{
  undefined2 in_stack_00000008;
  
  *(undefined2 *)((int)this + 0xe82) = in_stack_00000008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Core resource loading engine. Handles 4 types: 1) Load bitmap from file, 2) Extract
// sub-region from parent, 3) Load string/path, 4) Generic path lookup. References
// global manager at 1050:038C.

void * __stdcall16far Resource_Manager_Load_Resource_Object_Logic(void *this,int res_id)
{
  void *pvVar1;
  int in_DX;
  void *other;
  uint uVar2;
  int iVar3;
  undefined2 unaff_SI;
  int in_stack_00000008;
  char *local_2e [0x12];
  char *pcStack_a;
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  iVar3 = in_stack_00000008 * 0x10;
  if (*(int *)(iVar3 + 0x10) == 0x1)
  {
    pcStack_a = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
    if (((char *)*(int *)(iVar3 + 0x12) == pcStack_a) &&
       (*(int *)(iVar3 + 0x14) == in_DX))
    {
      Resource_Manager_Report_File_Error_Logic(this);
      return NULL;
    }
    other = File_Object_ctor();
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,0x1e));
    uVar2 = (uint)other | (uint)pvVar1;
    if (uVar2 == 0x0)
    {
      pvVar1 = NULL;
      uVar2 = 0x0;
    }
    else
    {
      pvVar1 = Bitmap_Object_ctor_from_other(pvVar1,other);
    }
    uStack_6 = (void *)CONCAT22(uVar2,pvVar1);
    File_Object_dtor(local_2e);
  }
  else
  {
    if (*(int *)(in_stack_00000008 * 0x10 + 0x10) == 0x2)
    {
      Resource_Manager_Switch_Active_Bitmap_Logic(this,res_id);
      if (*(long *)((int)this + 0x67c) == 0x0)
      {
        return NULL;
      }
      iVar3 = in_stack_00000008 * 0x10;
      local_2e[0x0] =
           Bitmap_Object_Copy_Region_To_New_Bitmap
                     ((void *)(void *)*(undefined4 *)((int)this + 0x67c),
                      CONCAT22(*(undefined2 *)(iVar3 + 0x1c),
                               *(undefined2 *)(iVar3 + 0x1e)),*(int *)(iVar3 + 0x1a),
                      *(int *)(iVar3 + 0x18));
    }
    else
    {
      iVar3 = in_stack_00000008 * 0x10;
      if (*(int *)(iVar3 + 0x10) == 0x3)
      {
        local_2e[0x0] = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
        if (((char *)*(int *)(iVar3 + 0x12) == local_2e[0x0]) &&
           (*(int *)(iVar3 + 0x14) == in_DX))
        {
          Resource_Manager_Report_File_Error_Logic(this);
        }
      }
      else
      {
        if (*(int *)(in_stack_00000008 * 0x10 + 0x10) != 0x4) goto LAB_1010_8473;
        local_2e[0x0] = Resource_Manager_Resolve_File_Path_Logic(this,(char *)res_id);
      }
    }
    uStack_6 = (void *)ZEXT24(local_2e[0x0]);
  }
LAB_1010_8473:
  return (void *)uStack_6;
}



// Wraps LoadString16 to load a Win16 string resource into the manager's internal buffer
// at offset 0x682. References global application instance at 1050:038C.

char * __stdcall16far
Resource_Manager_LoadString_to_Internal_Buffer(int offset,int segment,int res_id)
{
  u32 result;
  
  LoadString16(0x3ff,offset + 0x682U,(char *)segment,res_id);
  return (char *)(offset + 0x682U);
}



// Loads a string resource into the internal buffer (offset 0x682) and returns a newly
// allocated duplicate copy via strdup.

char * __stdcall16far
Resource_Manager_LoadString_and_Duplicate(int offset,int segment,int res_id)
{
  char *pcVar1;
  
  LoadString16(0x3ff,(ushort)(offset + 0x682),(char *)segment,res_id);
  pcVar1 = strdup_allocate((char *)(offset + 0x682));
  return pcVar1;
}



void __stdcall16far
LoadString_Global_Wrapper(int arg1,int arg2,long buffer_size,long id_segment)
{
  LoadString16((HINSTANCE16)buffer_size,(ushort)((ulong)buffer_size >> 0x10),
               (char *)id_segment,(short)((ulong)id_segment >> 0x10));
  return;
}
