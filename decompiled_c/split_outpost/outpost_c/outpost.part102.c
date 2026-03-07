/*
 * Source: outpost.c
 * Chunk: 102/117
 * Original lines: 116407-117583
 * Boundaries: top-level declarations/definitions only
 */




// The primary factory for all specialized sub-dialogs. Maps category IDs (1-42) to
// specific constructors and vtables. If the dialog already exists, brings it to focus;
// otherwise, allocates memory, instantiates the dialog, and triggers its virtual
// show/init logic.

void * __stdcall16far
UI_SubDialog_Factory_Create_and_Show_by_ID_af40
          (void *table_ptr,uint16_t arg2,int dialog_id)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  u16 *puVar4;
  void *pvVar5;
  astruct_498 *this_ptr;
  void *in_DX;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  undefined2 unaff_SI;
  undefined2 uVar9;
  undefined2 unaff_CS;
  u16 *puVar10;
  ushort in_stack_0000fff0;
  
  puVar3 = (undefined *)
           UI_Global_Focus_and_Bring_to_Top_by_Index_b72e(table_ptr,dialog_id);
  iVar8 = (int)table_ptr;
  uVar9 = (undefined2)((ulong)table_ptr >> 0x10);
  if (puVar3 != NULL) goto LAB_1038_b61f;
  PTR_DAT_1050_0000_1050_5b82 = puVar3;
  if (true)
  {
    unaff_CS = 0x1038;
    switch(dialog_id)
    {
    case 0x1:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x8e));
      if (in_DX == NULL && pvVar5 == NULL)
      {
LAB_1038_afa0:
        unaff_CS = 0x1000;
        puVar10 = NULL;
      }
      else
      {
        puVar10 = UI_SubDialog_TypeA0B6_ctor_init_9f76
                            ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      }
      break;
    case 0x2:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x96));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type1C48_ctor_init_181c(pvVar5,0x0,0x0,0x0,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x3:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeEB32_ctor_init_e99a
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0x4:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeCA6C_ctor_init_c7b8
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0x5:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x96));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type2956_ctor_init_23ea
                                (pvVar5,0x0,0x0,CONCAT22(unaff_SI,arg2),
                                 in_stack_0000fff0);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x6:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type0B90_ctor_init_06e8(pvVar5,0x0,0x0,0x0,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x7:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9c));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type4466_ctor_init_4068(pvVar5,0x0,0x0,0x0,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x8:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeBD70_ctor_init_b772(pvVar5,in_DX,0x0,0x0,0x0,arg2);
      break;
    case 0x9:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x8e));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeE264_ctor_init_e140
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0xa:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x90));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeA428_ctor_init_a33c
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0xb:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x90));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = UI_SubDialog_TypeA62E_ctor_init_a494((void *)CONCAT22(in_DX,pvVar5),arg2)
      ;
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0xc:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x90));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeA832_ctor_init_a69a
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0xd:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x90));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = UI_Colony_Settings_Dialog_ctor_init_a89e
                         ((void *)CONCAT22(in_DX,pvVar5),arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0xe:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x94));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeE92E_ctor_init_e69a
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0xf:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x94));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeCF00_ctor_init_cd06
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0x10:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type0DB0_ctor_init_0bfc(pvVar5,0x0,0x0,0x0,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x11:
      puVar4 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      if (in_DX == NULL && puVar4 == NULL) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      uVar7 = UI_SubDialog_TypeA5D0_ctor_init_0e1c();
      puVar10 = (u16 *)CONCAT22(uVar7,puVar4);
      break;
    case 0x12:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeE0D4_ctor_init_d756
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x13:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeCC9A_ctor_init_cad8
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x14:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xaa));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type237E_ctor_init_1f5a(pvVar5,(ushort)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x15:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x8e));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeD6EA_ctor_init_d242
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x16:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = (u16 *)UI_SubDialog_Type067C_ctor_init_eeda(pvVar5,(ushort)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x17:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x96));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      unaff_CS = 0x1018;
      puVar10 = (u16 *)UI_Allocation_Tab_Manager_ctor_init_logic
                                 ((long)CONCAT22(in_DX,pvVar5),arg2);
      break;
    default:
      goto switchD_1038_b581_caseD_18;
    case 0x19:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x96));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type1EEE_ctor_init_1cb4(pvVar5,0x0,0x0,0x0,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x1a:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type17B0_ctor_init_123e(pvVar5,in_DX,0x0,0x0,0x0);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x1b:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x8e));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeAD72_ctor_init_ab82
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x1c:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeE62E_ctor_init_e2d0
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x1d:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x92));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = UI_SubDialog_TypeEE6E_ctor_init_eb9e(pvVar5,(ushort)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x1e:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x29e));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeC436_ctor_init_bddc
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0x1f:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_TypeC74C_ctor_init_c4a2
                          ((void *)CONCAT22(in_DX,pvVar5),0x0,0x0,0x0,arg2);
      break;
    case 0x20:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x29a));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type3436_ctor_init_2ea2(pvVar5,in_DX,0x0,0x0,0x0);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x21:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xa6));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_Trade_Request_Dialog_ctor_init_3966(pvVar5,in_DX,0x0,0x0,0x0);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x22:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9a));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type38FA_ctor_init_34a2(pvVar5,in_DX,0x0,0x0,0x0);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x23:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x9c));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar10 = UI_SubDialog_TypeAFC4_ctor_init_ac84
                          ((void *)CONCAT22(in_DX,pvVar5),arg2);
      break;
    case 0x25:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xa0));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_TypeD07C_ctor_init_ca16(pvVar5,(ushort)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x26:
      this_ptr = allocate_memory(CONCAT22(unaff_SI,0xa2));
      uVar6 = (uint)in_DX | (uint)this_ptr;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_TypeD8C4_ctor_init_d0f8(this_ptr,(ushort)in_DX,arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x27:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0xa0));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = UI_Transfer_Dialog_ctor_init_88f2((void *)CONCAT22(in_DX,pvVar5),arg2);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x28:
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x96));
      uVar6 = (uint)in_DX | (uint)pvVar5;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      unaff_CS = 0x1040;
      puVar4 = (u16 *)UI_SubDialog_Type67BA_ctor_init_6402(pvVar5,(ushort)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x29:
      unaff_CS = 0x1000;
      puVar4 = allocate_memory(CONCAT22(unaff_SI,0x98));
      uVar6 = (uint)in_DX | (uint)puVar4;
      if (uVar6 == 0x0) goto LAB_1038_afa0;
      puVar4 = UI_SubDialog_Type8876_ctor_init_7d10(puVar4,(uint16_t)in_DX);
      puVar10 = (u16 *)CONCAT22(uVar6,puVar4);
      break;
    case 0x2a:
      unaff_CS = 0x1000;
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x98));
      if (in_DX == NULL && pvVar5 == NULL) goto LAB_1038_afa0;
      puVar10 = UI_SubDialog_Type90C8_ctor_init_8caa((void *)CONCAT22(in_DX,pvVar5));
    }
    *(undefined2 *)(dialog_id * 0x4 + iVar8) = (int)puVar10;
    *(undefined2 *)(dialog_id * 0x4 + iVar8 + 0x2) = (int)((ulong)puVar10 >> 0x10);
  }
switchD_1038_b581_caseD_18:
  if (*(long *)(dialog_id * 0x4 + iVar8) != 0x0)
  {
    if (*(int *)(iVar8 + 0xae) != 0x0)
    {
      uVar2 = *(undefined4 *)(dialog_id * 0x4 + iVar8);
      *(undefined2 *)((int)uVar2 + 0x6e) = *(undefined2 *)(iVar8 + 0xae);
    }
    *(undefined2 *)(iVar8 + 0xae) = 0x0;
    uVar2 = *(undefined4 *)(dialog_id * 0x4 + iVar8);
    puVar1 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)(dialog_id * 0x4 + iVar8) + 0x8);
    (*(code *)*puVar1)(unaff_CS,(int)uVar2,(int)((ulong)uVar2 >> 0x10));
  }
LAB_1038_b61f:
  return (void *)CONCAT22(*(undefined2 *)(dialog_id * 0x4 + iVar8 + 0x2),
                          (void *)*(undefined2 *)(dialog_id * 0x4 + iVar8));
}



// Iterates through the global sub-dialog table (42 slots) and hides all active windows.
// Sets a global 'Hidden' flag at offset 0xAC.

void __stdcall16far UI_Global_Batch_Hide_Active_SubDialogs_b634(void *table_ptr)
{
  astruct_107 *uVar2;
  undefined2 uVar1;
  uint uStack_4;
  
  uVar1 = (undefined2)((ulong)table_ptr >> 0x10);
  uVar2 = (astruct_107 *)table_ptr;
  if (uVar2->field172_0xac == 0x0)
  {
    uVar2->field172_0xac = 0x1;
    for (uStack_4 = 0x1; uStack_4 < 0x2b; uStack_4 += 0x1)
    {
      if (*(int *)(&uVar2->field_0x2 + uStack_4 * 0x4) != 0x0 ||
          *(int *)(&uVar2->field_0x0 + uStack_4 * 0x4) != 0x0)
      {
        ShowWindow16(0x0,*(short *)((int)*(undefined4 *)
                                          (&uVar2->field_0x0 + uStack_4 * 0x4) + 0x6));
      }
    }
  }
  return;
}



// Iterates through the global sub-dialog table and restores visibility for all windows
// that were hidden via b634. Clears the flag at 0xAC.

void __stdcall16far UI_Global_Batch_Show_Active_SubDialogs_b68a(u32 table_ptr)
{
  undefined4 uVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uStack_4;
  
  uVar3 = (undefined2)(table_ptr >> 0x10);
  iVar2 = (int)table_ptr;
  if (*(int *)(iVar2 + 0xac) != 0x0)
  {
    *(undefined2 *)(iVar2 + 0xac) = 0x0;
    for (uStack_4 = 0x1; uStack_4 < 0x2b; uStack_4 += 0x1)
    {
      if (*(int *)(uStack_4 * 0x4 + iVar2 + 0x2) != 0x0 ||
          *(int *)(uStack_4 * 0x4 + iVar2) != 0x0)
      {
        uVar1 = *(undefined4 *)(uStack_4 * 0x4 + iVar2);
        ShowWindow16(0x1,*(short *)((int)uVar1 + 0x6));
      }
    }
  }
  return;
}



// Searches the global sub-dialog table for an entry matching the provided HWND and
// clears its slot. Used during window destruction.

void __stdcall16far
UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0(void *table_ptr,ushort hwnd)
{
  undefined4 uVar1;
  int in_stack_00000008;
  astruct_106 *uStack_4;
  
  uStack_4 = (astruct_106 *)0x1;
  while( true )
  {
    if ((astruct_106 *)((char *)s_NewFailedMsg + 0xa) < uStack_4)
    {
      return;
    }
    if ((*(int *)((int)uStack_4 * 0x4 + table_ptr._2_2_ + 0x2) != 0x0 ||
         *(int *)((int)uStack_4 * 0x4 + table_ptr._2_2_) != 0x0) &&
       (uVar1 = *(undefined4 *)((int)uStack_4 * 0x4 + table_ptr._2_2_),
       *(int *)((int)uVar1 + 0x6) == in_stack_00000008)) break;
    uStack_4 = uStack_4 + 0x1;
  }
  *(undefined4 *)((int)uStack_4 * 0x4 + table_ptr._2_2_) = 0x0;
  return;
}



// Searches a global window array for a valid handle at the specified index and brings
// that window to the foreground with focus.

u16 __stdcall16far
UI_Global_Focus_and_Bring_to_Top_by_Index_b72e(void *table_ptr,int index)
{
  HWND16 hwnd;
  undefined4 uVar1;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)table_ptr >> 0x10);
  if (*(long *)(index * 0x4 + (int)table_ptr) != 0x0)
  {
    uVar1 = *(undefined4 *)(index * 0x4 + (int)table_ptr);
    hwnd = *(HWND16 *)((int)uVar1 + 0x6);
    SetFocus16(hwnd);
    BringWindowToTop16(hwnd);
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xBD70. Links to Resource 0x36 and Resource 6
// (Navigation/Selection). Sets vtable to 0xBD70.

void * __stdcall16far UI_SubDialog_TypeBD70_ctor_init_b772(astruct_105 *param_1)
{
  astruct_105 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  undefined2 in_stack_00000010;
  
  UI_SubDialog_Base_ctor_init_7728(param_1,0x9a,0xfbf0000,in_stack_00000010);
  uVar2 = (undefined2)((ulong)param_1 >> 0x10);
  uVar1 = (astruct_105 *)param_1;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  (&uVar1->field143_0x92)[0x0] = NULL;
  (&uVar1->field143_0x92)[0x1] = NULL;
  uVar1->field145_0x96 = 0x1;
  uVar1->field146_0x98 = 0x0;
  *(undefined2 *)param_1 = 0xbd70;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x36);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  uVar1->field143_0x92 = (u32 *)puVar3;
  uVar1->field144_0x94 = (int)((ulong)puVar3 >> 0x10);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeBD70_dtor_Internal_b7f0(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xbd70;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initialization and display logic for the navigation/selection sub-dialog. Manages a
// range of entity selection buttons (0x1A0-0x1B5), synchronizes with the Navigation
// Manager, and centers the window.

void __stdcall16far UI_SubDialog_TypeBD70_Show_Logic_b81c(void *this_ptr)
{
  undefined2 *puVar1;
  HWND16 *pHVar2;
  HWND16 HVar3;
  undefined2 uVar5;
  long lVar6;
  undefined4 uVar7;
  void *this_ptr_00;
  int x;
  HWND16 HStack_c;
  int iStack_a;
  HWND16 *pHVar4;
  
  this_ptr_00 = (void *)this_ptr;
  x = (int)((ulong)this_ptr >> 0x10);
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x6);
  *(undefined2 *)((int)this_ptr_00 + 0x92) = (int)lVar6;
  *(undefined2 *)((int)this_ptr_00 + 0x94) = (int)((ulong)lVar6 >> 0x10);
  uVar5 = (undefined2)((ulong)*(undefined4 *)((int)this_ptr_00 + 0x92) >> 0x10);
  pHVar2 = (HWND16 *)((int)*(undefined4 *)((int)this_ptr_00 + 0x92) + 0x4e);
  pHVar4 = (HWND16 *)CONCAT22(uVar5,pHVar2);
  iStack_a = 0x0;
  for (HStack_c = 0x1a0; (int)HStack_c < 0x1b5; HStack_c += 0x1)
  {
    if (pHVar2[iStack_a] == HStack_c)
    {
      iStack_a += 0x1;
    }
    else
    {
      CheckDlgButton16(0x2,HStack_c,*(HWND16 *)((int)this_ptr_00 + 0x6));
    }
  }
  HVar3 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr_00 + 0x6));
  EnableWindow16(0x0,HVar3);
  puVar1 = (undefined2 *)
           ((int)*(undefined4 *)*(undefined4 *)((int)this_ptr_00 + 0x92) + 0x10);
  uVar7 = (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this_ptr_00 + 0x92),
                             (int)((ulong)*(undefined4 *)((int)this_ptr_00 + 0x92) >>
                                  0x10));
  UI_Window_Move_or_Center_826c(this_ptr_00,x,*(int *)((int)uVar7 + 0x2) + -0x2);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  UI_Navigation_Manager_Find_and_Select_Entity_Logic
            (*(long *)((int)this_ptr_00 + 0x92),*pHVar4);
  HVar3 = GetDlgItem16(*pHVar4,*(short *)((int)this_ptr_00 + 0x6));
  SetFocus16(HVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the navigation search dialog, managing selection buttons, list
// navigation, and random entity selection for the 'I'm feeling lucky' style search.

undefined4 __stdcall16far
UI_Navigation_Search_Dialog_On_Command_b922
          (void *param_1,undefined4 param_2,uint param_3)
{
  undefined2 *puVar1;
  uint16_t uVar2;
  HWND16 HVar3;
  BOOL16 BVar4;
  char *pcVar5;
  undefined2 in_DX;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  void *this_ptr;
  ushort hwnd;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined **ppuVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  void *in_stack_0000fb90;
  uint local_46c;
  undefined4 local_468;
  undefined1 local_464 [0x50];
  undefined1 local_414 [0x400];
  int *local_14;
  undefined **local_10;
  long local_e;
  undefined **local_a;
  HWND16 local_8;
  ushort local_6;
  undefined2 uStack_4;
  
  local_6 = 0x0;
  uStack_4 = 0x0;
  this_ptr = (void *)param_1;
  hwnd = (ushort)((ulong)param_1 >> 0x10);
  if (param_3 < 0x1b5)
  {
    if (param_3 < 0x1a0)
    {
      if (param_3 != 0x2) goto LAB_1038_bbbf;
    }
    else
    {
      local_8 = GetDlgItem16(param_3,*(short *)((int)this_ptr + 0x6));
      ppuVar10 = SendMessage16(0x0,0x0,0x0,CONCAT22(in_stack_0000fb90,local_8));
      local_a = (undefined **)ppuVar10;
      if (local_a == (undefined **)&p_CurrentHeapContext)
      {
        local_6 = 0x0;
        uStack_4 = 0x0;
        goto LAB_1038_bc26;
      }
      SendMessage16(0x0,0x0,(uint)(local_a == NULL),CONCAT22(in_stack_0000fb90,local_8))
      ;
      uVar2 = IsDlgButtonChecked16(param_3,*(HWND16 *)((int)this_ptr + 0x6));
      if (uVar2 == 0x0)
      {
        *(int *)((int)this_ptr + 0x96) = *(int *)((int)this_ptr + 0x96) + 0x1;
        if (*(int *)((int)this_ptr + 0x96) == 0x1)
        {
          HVar3 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
          EnableWindow16(0x0,HVar3);
        }
      }
      else
      {
        *(int *)((int)this_ptr + 0x96) = *(int *)((int)this_ptr + 0x96) + -0x1;
        HVar3 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
        BVar4 = IsWindowEnabled16(HVar3);
        if (BVar4 == 0x0)
        {
          HVar3 = GetDlgItem16(0xfb1,*(short *)((int)this_ptr + 0x6));
          EnableWindow16(0x1,HVar3);
        }
        if (*(int *)((int)this_ptr + 0x96) < 0x0)
        {
          CheckDlgButton16(0x0,*(int16_t *)((int)this_ptr + 0x98),
                           *(HWND16 *)((int)this_ptr + 0x6));
          *(undefined2 *)((int)this_ptr + 0x96) = 0x0;
        }
        *(uint *)((int)this_ptr + 0x98) = param_3;
        UI_Navigation_Manager_Find_and_Select_Entity_Logic
                  (*(long *)((int)this_ptr + 0x92),param_3);
        local_e = UI_Navigation_Manager_Get_Metadata_Ptr_Logic
                            (*(long *)((int)this_ptr + 0x92),-0x1);
        if (local_e == 0x0)
        {
          local_10 = NULL;
        }
        else
        {
          local_10 = (undefined **)*(undefined2 *)((int)local_e + 0x1c);
        }
        media_play_from_full_resource_ptr_logic
                  ((void *)_p_UIPanelContainer,CONCAT22(local_10,0x1));
      }
    }
    local_6 = 0x1;
    uStack_4 = 0x0;
  }
  else
  {
    if (param_3 == 0xfb1)
    {
      for (local_46c = 0x1a0; local_46c < 0x1b5; local_46c += 0x1)
      {
        uVar2 = IsDlgButtonChecked16(local_46c,*(HWND16 *)((int)this_ptr + 0x6));
        if (uVar2 == 0x1)
        {
          remap_resource_id_to_internal_type_logic
                    ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                     (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
          goto LAB_1038_bba2;
        }
      }
    }
    else
    {
      if (param_3 != 0xfbe) goto LAB_1038_bbbf;
      local_e = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
      local_10 = (undefined **)g_ModeVersion_13AE;
      if (g_ModeVersion_13AE == (undefined *)0x1)
      {
        local_10 = (undefined **)&p_CurrentHeapContext;
      }
      local_a = (undefined **)
                random_int_range(0x0,*(int *)((int)local_10 * 0xc + 0x5b84) + -0x1);
      local_14 = (int *)UI_Navigation_Manager_Get_Metadata_Ptr_Logic
                                  (*(long *)((int)this_ptr + 0x92),
                                   *(int *)(((int)local_10 * 0x6 + (int)local_a) * 0x2 +
                                           0x5b86));
      uVar6 = (uint)((ulong)local_14 >> 0x10);
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_464,0x50)
                 ,CONCAT22(0x5f1,unaff_SS));
      Resource_Manager_LoadString_to_Internal_Buffer
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),*local_14);
      _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_414),s__s__s__1050_5bc0,
                  (undefined1 *)CONCAT22(unaff_SS,local_464));
      uVar9 = 0x1000;
      in_stack_0000fb90 = allocate_memory(CONCAT22(in_stack_0000fb90,0xb4));
      uVar7 = uVar6 | (uint)in_stack_0000fb90;
      if (uVar7 == 0x0)
      {
        pcVar5 = NULL;
        uVar8 = 0x0;
      }
      else
      {
        puVar12 = local_414;
        puVar13 = g_ParentHWND;
        pcVar5 = Resource_Manager_LoadString_to_Internal_Buffer
                           ((int)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
        uVar9 = 0x1040;
        uVar8 = UI_SubDialog_Type8DDC_ctor_init_8478
                          ((void *)CONCAT22(uVar6,in_stack_0000fb90),0x41,pcVar5,uVar7,
                           puVar12,unaff_SS,puVar13);
      }
      local_468 = (char *)CONCAT22(uVar8,pcVar5);
      puVar1 = (undefined2 *)((int)*(undefined4 *)local_468 + 0x74);
      uVar11 = (*(code *)*puVar1)(uVar9,pcVar5,uVar8);
      in_DX = (undefined2)((ulong)uVar11 >> 0x10);
      local_8 = (HWND16)uVar11;
      if (local_8 != 0x1) goto LAB_1038_bc26;
      remap_resource_id_to_internal_type_logic
                ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                 (int)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10));
LAB_1038_bba2:
      UI_Dialog_Execute_Select_Entity_Command_bc30((u32)param_1);
    }
    PostMessage16(0x0,0x0,0xce,(long)CONCAT22(in_stack_0000fb90,g_ParentHWND));
    param_3 = 0x1;
LAB_1038_bbbf:
    local_6 = UI_SubDialog_Base_On_Command_Logic_7b3c
                        (this_ptr,hwnd,(ushort)param_2,(ushort)((ulong)param_2 >> 0x10),
                         CONCAT22(in_stack_0000fb90,param_3));
    uStack_4 = in_DX;
  }
LAB_1038_bc26:
  return CONCAT22(uStack_4,local_6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Orchestrates the 'Select Entity' action. Uses a wait cursor, submits a Select command
// to the simulator, forces a single-tick update to refresh state, and resets the
// simulator tick counter.

void __stdcall16far UI_Dialog_Execute_Select_Entity_Command_bc30(u32 this_ptr)
{
  undefined4 uVar1;
  undefined2 unaff_SS;
  undefined2 local_112;
  undefined2 uStack_110;
  HCURSOR16 HStack_6;
  HCURSOR16 HStack_4;
  
  HStack_4 = LoadCursor16((void *)0x7f02,0x0);
  HStack_6 = SetCursor16(HStack_4);
  uVar1 = *(undefined4 *)((int)this_ptr + 0x8e);
  Simulator_Command_Select_ctor_init_532e
            ((undefined2 *)CONCAT22(unaff_SS,&local_112),
             (void *)((long)*(int *)((int)uVar1 + 0xe) + 0x1000000));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_112));
  Simulator_Global_Execute_Single_Tick_Logic_838e((void **)_p_SimulatorGlobalState);
  local_112 = 0x389a;
  uStack_110 = 0x1008;
  Simulator_Global_Reset_Tick_Counter_8334();
  SetCursor16(HStack_6);
  return;
}



// Retrieves palette metadata from a resource linked to the dialog and synchronizes an
// internal Palette Object (offset 0x70) with the updated color data.

u16 * __stdcall16far UI_Dialog_Sync_Palette_from_Resource_bca8(void *this_ptr)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  void *this;
  u16 *puVar4;
  uint extraout_DX;
  uint extraout_DX_00;
  uint uVar6;
  astruct_104 *uVar5;
  undefined2 uVar7;
  
  uVar7 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_104 *)this_ptr;
  puVar1 = (undefined4 *)*(undefined4 *)((int)uVar5->field140_0x8e + 0xa);
  puVar3 = (undefined4 *)puVar1;
  puVar2 = (undefined2 *)((int)*puVar1 + 0x14);
  (*(code *)*puVar2)();
  uVar6 = extraout_DX;
  if (*(long *)&uVar5->field112_0x70 != 0x0)
  {
    uVar6 = 0x0;
    if (uVar5->field113_0x72 != 0x0 || uVar5->field112_0x70 != NULL)
    {
      puVar2 = (undefined2 *)*(undefined2 **)uVar5->field112_0x70;
      (*(code *)*puVar2)();
      uVar6 = extraout_DX_00;
    }
  }
  this = allocate_memory(CONCAT22(puVar3,0x14));
  uVar6 |= (uint)this;
  if (uVar6 == 0x0)
  {
    puVar4 = NULL;
    uVar6 = 0x0;
  }
  else
  {
    puVar4 = Palette_Object_ctor_basic(this);
  }
  uVar5->field112_0x70 = puVar4;
  uVar5->field113_0x72 = uVar6;
                // WARNING: Load size is inaccurate
  Palette_Object_Copy_From_Other_Logic
            ((void *)uVar5->field112_0x70,(void *)((ulong)uVar5->field112_0x70 >> 0x10))
  ;
  return uVar5->field112_0x70;
}



void * __stdcall16far
UI_SubDialog_TypeBD70_dtor_Scalar_Deleting_bd4a(void *param_1,byte param_2)
{
  UI_SubDialog_TypeBD70_dtor_Internal_b7f0(param_1);
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((void *)param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Constructor for sub-dialog Type 0xC436. Links to Resource 0x3B and initializes state
// fields to zero. Sets vtable to 0xC436.

void * __stdcall16far
UI_SubDialog_TypeC436_ctor_init_bddc(void *this_ptr,u32 arg2,u16 arg3,u16 arg4,u16 arg5)
{
  astruct_103 *uVar1;
  undefined2 uVar2;
  u32 *puVar3;
  
  UI_SubDialog_Base_ctor_init_7728(this_ptr,0x1,arg2,0x176,arg5);
  uVar2 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_103 *)this_ptr;
  (&uVar1->field141_0x8e)[0x0] = NULL;
  (&uVar1->field141_0x8e)[0x1] = NULL;
  uVar1->field143_0x92 = 0x0;
  uVar1->field144_0x94 = 0x0;
  uVar1->field145_0x96 = 0x0;
  uVar1->field146_0x98 = 0x0;
  uVar1->field147_0x9a = 0x0;
  uVar1->field148_0x9c = 0x0;
  *(undefined2 *)this_ptr = 0xc436;
  uVar1->field2_0x2 = 0x1038;
  puVar3 = (u32 *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3b);
  uVar1->field141_0x8e = (u32 *)puVar3;
  uVar1->field142_0x90 = (int)((ulong)puVar3 >> 0x10);
  return this_ptr;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_SubDialog_TypeC436_dtor_Internal_be4a(void *this_ptr)
{
  void *unaff_CS;
  
  *(undefined2 *)this_ptr = 0xc436;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1038;
  UI_Global_SubDialog_Table_Unregister_by_HWND_b6e0
            ((void *)CONCAT22((int)_p_UISubDialogTable,unaff_CS),
             (ushort)((ulong)_p_UISubDialogTable >> 0x10));
  UI_SubDialog_Base_dtor_Internal_782c((void *)this_ptr);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles selection events in dialog Type 0xC436. Swaps the primary UI system context
// using Resource 0x2B before closing the dialog.

void __stdcall16far
UI_SubDialog_TypeC436_On_Select_Logic_be76(void *param_1,undefined4 param_2)
{
  void *pvVar1;
  
  if (param_2._2_2_ == 0x0)
  {
    pvVar1 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2b);
    UI_System_Context_Swap_Logic((void *)pvVar1,(int)((ulong)pvVar1 >> 0x10));
  }
  UI_SubDialog_Base_Try_Destroy_7b98(param_1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes the trade dialog, sets up window text with colony names, and populates
// dual entity lists for trade selection.

void __stdcall16far UI_Trade_Dialog_Initialize_and_Layout_bea4(u32 param_1)
{
  HWND16 HVar1;
  char *pcVar2;
  ushort uVar3;
  int iVar4;
  undefined2 uVar5;
  void *unaff_SS;
  long lVar6;
  LRESULT pvVar7;
  undefined1 *puVar8;
  HWND16 in_stack_0000fed2;
  void *local_116 [0x4];
  undefined1 local_10e [0x82];
  undefined1 local_8c [0x82];
  void *local_a;
  long local_6;
  
  local_6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2);
  local_a = (void *)*(undefined4 *)((int)local_6 + 0x68);
  uVar5 = (undefined2)(param_1 >> 0x10);
  iVar4 = (int)param_1;
  GetWindowText16(0x80,(void *)CONCAT22(*(undefined2 *)(iVar4 + 0x6),unaff_SS),
                  in_stack_0000fed2);
  _wsprintf16((undefined1 *)CONCAT22(unaff_SS,local_10e),
              (undefined1 *)CONCAT22(unaff_SS,local_8c),local_a);
  puVar8 = local_10e;
  SetWindowText16((undefined1 *)CONCAT22(unaff_SS,puVar8),*(HWND16 *)(iVar4 + 0x6));
  HVar1 = GetDlgItem16(0x179,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x92) = HVar1;
  UI_Populate_Dual_Entity_Lists_Logic
            ((void *)(void *)*(undefined4 *)(iVar4 + 0x8e),
             (void **)((ulong)*(undefined4 *)(iVar4 + 0x8e) >> 0x10),local_116);
  UI_Trade_Dialog_Populate_Entity_List_c374
            (param_1,(u32 *)local_116._4_4_,SUB42(local_116._4_4_,0x2));
  lVar6 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  uVar3 = (ushort)((ulong)lVar6 >> 0x10);
  pcVar2 = res_strdup_by_id_logic(*(long *)(iVar4 + 0x8e));
  pvVar7 = SendMessage16((HWND16)pcVar2,uVar3,0xffff,
                         CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x92)));
  uVar3 = (ushort)((ulong)pvVar7 >> 0x10);
  HVar1 = GetDlgItem16(0x17a,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x94) = HVar1;
  UI_Trade_Dialog_Populate_Entity_List_c374
            (param_1,(u32 *)local_116._0_4_,SUB42(local_116._0_4_,0x2));
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  pvVar7 = SendMessage16((HWND16)pcVar2,uVar3,0x0,
                         CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x94)));
  *(undefined2 *)(iVar4 + 0x9c) = (int)pvVar7;
  SendMessage16((HWND16)pcVar2,uVar3,0xffff,
                CONCAT22(puVar8,*(undefined2 *)(iVar4 + 0x94)));
  HVar1 = GetDlgItem16(0x178,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x96) = HVar1;
  HVar1 = GetDlgItem16(0x177,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x98) = HVar1;
  HVar1 = GetDlgItem16(0x184,*(short *)(iVar4 + 0x6));
  *(HWND16 *)(iVar4 + 0x9a) = HVar1;
  return;
}



void __stdcall16far UI_SubDialog_Show_Center_and_Focus_c044(void *this_ptr)
{
  int x;
  void *this_ptr_00;
  
  this_ptr_00 = (void *)this_ptr;
  UI_SubDialog_Base_Create_and_Register_78e2(this_ptr_00);
  x = (int)((ulong)this_ptr >> 0x10);
  UI_Window_Move_or_Center_826c(this_ptr_00,x,-0x1);
  ShowWindow16(0x5,*(short *)((int)this_ptr_00 + 0x6));
  SetFocus16(*(HWND16 *)((int)this_ptr_00 + 0x6));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Command handler for the trade dialog, manages adding/activating links between
// colonies and dispatching list events.

void __stdcall16far
UI_Trade_Dialog_On_Command_c07a
          (void *param_1,ushort param_2,HWND16 param_3,undefined4 param_4)
{
  int iVar1;
  undefined2 unaff_SI;
  char *unaff_SS;
  undefined1 local_70c [0x200];
  char local_50c [0x100];
  undefined1 local_40c [0x402];
  undefined4 local_a;
  char *local_6;
  
  UI_Trade_Dialog_Sync_List_Selections_c228((void *)CONCAT22(param_2,param_1));
  local_6 = Resource_Manager_LoadString_to_Internal_Buffer
                      ((int)_p_GlobalResourceManager,
                       (int)((ulong)_p_GlobalResourceManager >> 0x10),0x531);
  if (param_4._2_2_ == 0x177)
  {
    UI_Relationship_Manager_Add_Link_and_Check_Status_Logic
              ((int)*(undefined4 *)((int)param_1 + 0x8e),
               (int)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10),0x2,
               (int)param_1 + 0x19e,param_2,(int)param_1 + 0x9e,param_2);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_40c,0x200),
               (long)CONCAT22(0x451,unaff_SS));
    sprintf_wrapper(local_70c);
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_50c,0x100),
               (long)CONCAT22(0x57b,unaff_SS));
    MessageBox16(0x30,local_50c,unaff_SS,(ushort)local_70c);
  }
  else
  {
    if (param_4._2_2_ != 0x178)
    {
      if ((param_4._2_2_ != 0x178) && (param_4._2_2_ - 0x179U < 0x2))
      {
        UI_Trade_Dialog_On_List_Event_c31a
                  ((void *)CONCAT22(param_2,param_1),param_3,(ushort)param_4);
        return;
      }
      UI_SubDialog_Base_On_Command_Logic_7b3c
                (param_1,param_2,param_3,(ushort)param_4,
                 CONCAT22(unaff_SI,param_4._2_2_));
      return;
    }
    local_a = CONCAT22(param_2,(int)param_1 + 0x9e);
    iVar1 = UI_Relationship_Manager_Activate_Link_Logic
                      ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
                       (char *)((ulong)*(undefined4 *)((int)param_1 + 0x8e) >> 0x10),
                       (char *)((int)param_1 + 0x19e));
    if (iVar1 == 0x0)
    {
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_40c,0x3ff),(long)CONCAT22(0x450,unaff_SS));
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),
                 CONCAT22(local_50c,0x3ff),(long)CONCAT22(0x57b,unaff_SS));
      MessageBox16(0x30,local_50c,unaff_SS,(ushort)local_40c);
      return;
    }
    UI_Component_Set_Offsets_16_1A_Logic
              ((void *)(void *)*(undefined4 *)((int)param_1 + 0x8e),
               (long)CONCAT22(param_2,(char *)((int)param_1 + 0x19e)),local_a);
    UI_SubDialog_Factory_Create_and_Show_by_ID_af40
              (_p_UISubDialogTable,*(uint16_t *)((int)param_1 + 0x8),0x1f);
  }
  PostMessage16(0x0,0x0,0x2,CONCAT22(unaff_SI,*(undefined2 *)((int)param_1 + 0x6)));
  return;
}



// Synchronizes the current selection between two parallel list boxes (IDs 0x92 and
// 0x94) in a trade or exchange dialog. Equivalent to 1040:323C.

void __stdcall16far UI_Trade_Dialog_Sync_List_Selections_c228(void *this_ptr)
{
  astruct_102 *uVar1;
  ushort msg;
  LRESULT pvVar1;
  LRESULT pvVar2;
  undefined4 in_stack_0000fff4;
  long lVar3;
  ushort w_param;
  
  msg = (ushort)((ulong)this_ptr >> 0x10);
  uVar1 = (astruct_102 *)this_ptr;
  lVar3 = CONCAT22((int)((ulong)in_stack_0000fff4 >> 0x10),uVar1->field146_0x92);
  pvVar1 = SendMessage16(0x0,0x0,0x0,lVar3);
  pvVar2 = SendMessage16(0x0,0x0,0x0,
                         CONCAT22((int)((ulong)lVar3 >> 0x10),uVar1->field147_0x94));
  lVar3 = CONCAT22((void *)pvVar2,uVar1->field146_0x92);
  SendMessage16((HWND16)&uVar1->field_0x9e,msg,(ushort)(void *)pvVar1,lVar3);
  w_param = (ushort)((ulong)lVar3 >> 0x10);
  SendMessage16((HWND16)(uVar1 + 0x1),msg,w_param,CONCAT22(w_param,uVar1->field147_0x94)
               );
  return;
}



// Updates the link status text and button enabled states in a trade dialog based on the
// validity of the selected connection. Equivalent to 1040:32A8.

void __stdcall16far UI_Trade_Dialog_Update_Link_Status_c294(void *this_ptr)
{
  void *pvVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar3 = this_ptr._2_2_;
  pvVar1 = (void *)UI_Relationship_Manager_Report_Link_Status_Logic
                             ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                              (char *)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >>
                                      0x10),(char *)((int)this_ptr + 0x19e));
  SetWindowText16((void *)CONCAT22(uVar3,pvVar1),*(HWND16 *)((int)this_ptr + 0x9a));
  uVar2 = UI_Relationship_Manager_Get_Link_Status_Code_Logic
                    ((void *)(void *)*(undefined4 *)((int)this_ptr + 0x8e),
                     (char *)((ulong)*(undefined4 *)((int)this_ptr + 0x8e) >> 0x10),
                     (char *)((int)this_ptr + 0x19e));
  EnableWindow16(uVar2 & 0x1,*(BOOL16 *)((int)this_ptr + 0x96));
  EnableWindow16(uVar2 & 0x2,*(BOOL16 *)((int)this_ptr + 0x98));
  return;
}
