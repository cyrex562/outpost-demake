/*
 * Source: outpost.c
 * Chunk: 11/117
 * Original lines: 11170-12329
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable Initializations
// A massive object factory performing far pointer initializations for 50+ specialized
// UI components.
// References context pointer 1050:1050 during error logging.
// Sets global media context pointer PTR_DAT_1050_02a0.

void * __stdcall16far UI_Get_or_Create_Child_Object_by_ID_Logic(void *this,int child_id)
{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  long lVar6;
  void *pvVar7;
  int in_stack_00000008;
  undefined2 in_stack_0000ffe0;
  undefined1 local_e [0x8];
  undefined4 uStack_6;
  
  uStack_6 = NULL;
  init_8byte_pair_with_long_and_zero(local_e,CONCAT22(child_id,(int)this + 0xd2));
  do
  {
    lVar6 = get_next_list_item(local_e);
    iVar2 = (int)((ulong)lVar6 >> 0x10);
    iVar1 = (int)lVar6;
    iVar4 = 0x0;
    if (iVar2 == 0x0 && iVar1 == 0x0) goto LAB_1008_162a;
    iVar4 = *(int *)(iVar1 + 0x6);
    pvVar5 = (void *)(void *)*(undefined4 *)(iVar1 + 0x4);
  } while (*(int *)((int)pvVar5 + 0xde) != in_stack_00000008);
  uStack_6 = (void *)CONCAT22(iVar4,pvVar5);
LAB_1008_162a:
  if (uStack_6 != NULL) goto LAB_1008_2b49;
  if (false)
  {
switchD_1008_2a63_caseD_2:
    log_debug_message_v(0x1a3,0x1050,in_stack_00000008);
    win16_app_exit_wrapper();
  }
  else
  {
    switch(in_stack_00000008)
    {
    case 0x1:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xec));
      if (iVar4 != 0x0 || pvVar5 != NULL)
      {
        *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
        pvVar3 = UI_DanBrotherton_Window_ctor_init_logic
                           ((void *)CONCAT22(iVar4,pvVar5),
                            *(undefined2 *)((int)this + 0xcc),this,child_id);
        break;
      }
LAB_1008_169a:
      uStack_6 = NULL;
      goto LAB_1008_2b3a;
    default:
      goto switchD_1008_2a63_caseD_2;
    case 0x3:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xfa));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Colony_Summary_Panel_ctor_init_logic_Res28_Res32_e91e
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf6));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Colony_Summary_Panel_ctor_init_logic_Res26_e230
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf6));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = UI_Navigation_Panel_ctor_init_logic_Res25
                         ((void *)CONCAT22(iVar4,pvVar5),
                          *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x6:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf8));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar3 = UI_Allocation_Panel_ctor_init
                         ((void *)CONCAT22(iVar4,pvVar5),
                          *(undefined2 *)((int)this + 0xcc),this,child_id);
      break;
    case 0x7:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf6));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = UI_Report_Panel_ctor_init_logic_Res2A_2524
                         ((void *)CONCAT22(iVar4,pvVar5),
                          *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x8:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x118));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = UI_Lab_View_ctor_init_logic_41c8
                         ((void *)CONCAT22(iVar4,pvVar5),
                          *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x9:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf6));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar3 = UI_Navigation_Summary_Panel_ctor_init_logic_Res10_e5dc
                         ((void *)CONCAT22(iVar4,pvVar5),
                          *(undefined2 *)((int)this + 0xcc),this,child_id);
      break;
    case 0xa:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf6));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Planet_Summary_Panel_ctor_init_logic_ResB
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0xb:
      media_play_from_resource_id_shorthand
                ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type11_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0xc:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type12_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0xd:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type13_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0xe:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type14_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0xf:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type15_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x10:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type16_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x11:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type17_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x12:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type18_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x13:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type19_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x14:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type20_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x15:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type21_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x16:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type22_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x17:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type23_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x18:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type24_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x19:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type25_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1a:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type26_ctor_init_timer1EC
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1b:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type27_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1c:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type28_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1d:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type29_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1e:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type30_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x1f:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type31_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x21:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type33_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x22:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type34_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x23:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type35_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x24:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type36_ctor_init_timer1ED
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x25:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type37_ctor_init_stateEE
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x26:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type38_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x27:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type39_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x28:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type40_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x29:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type41_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2a:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type42_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2b:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type43_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2c:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type44_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2d:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type45_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2e:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type46_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x2f:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type47_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x30:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type48_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x31:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type49_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x32:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type50_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x33:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type51_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x34:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0x114));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Build_Item_Type52_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x35:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type53_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x36:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type54_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x37:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type55_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x38:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type56_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x39:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type57_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3a:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type58_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3b:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type59_ctor_init_timer1E2
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3c:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type60_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3d:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type61_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3e:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type62_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x3f:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type63_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x40:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type64_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x41:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type65_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x42:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type66_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x43:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type67_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x44:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type68_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x45:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type69_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x46:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type70_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x47:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type71_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x48:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type72_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x49:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type73_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4a:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type74_ctor_init_timer500
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4b:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type75_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4c:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type76_ctor_init_stateEE
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4d:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type77_ctor_init_state9C
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4e:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type78_ctor_init_state9D
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x4f:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type79_ctor_init_state9E
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x50:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type80_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x51:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type81_ctor_init_timer1D9
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x52:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type82_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x53:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type83_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x55:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type85_ctor_init_timer1E4
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x56:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type86_ctor_init_timer1E4
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x57:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type87_ctor_init_timer1DA
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x58:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type88_ctor_init_timer1D8
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x59:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type89_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5a:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type90_ctor_init_timer1EF
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5b:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type91_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5c:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type92_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5d:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type93_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5e:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type94_ctor_init_timer1E6_stateEE
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x5f:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type95_ctor_init_timer1DA
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x60:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type96_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x61:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type97_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x62:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type98_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x63:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type99_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x64:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type100_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x65:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type101_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x66:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type102_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x67:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type103_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x68:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type104_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
      break;
    case 0x69:
      pvVar5 = allocate_memory(CONCAT22(in_stack_0000ffe0,0xf2));
      if (iVar4 == 0x0 && pvVar5 == NULL) goto LAB_1008_169a;
      *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 0x1;
      pvVar7 = (void *)UI_Control_Type105_ctor_init
                                 ((void *)CONCAT22(iVar4,pvVar5),
                                  *(undefined2 *)((int)this + 0xcc),this,child_id);
      pvVar3 = (void *)((ulong)pvVar7 >> 0x10);
      pvVar5 = (void *)pvVar7;
    }
    uStack_6 = (void *)CONCAT22(pvVar3,pvVar5);
  }
LAB_1008_2b3a:
  UI_Window_Register_Child_Event_Handler
            (_this,0x0,(int)uStack_6,(int)((ulong)uStack_6 >> 0x10));
LAB_1008_2b49:
  return (void *)uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Vtable
// References global pointers in segment 1050:
// - PTR_DAT_1050_4230
// - PTR_DAT_1050_14cc
// - PTR_DAT_1050_0396
// - PTR_DAT_1050_5748
// Performs an indirect call through [local_a6] offset 0x74.

int __stdcall16far UI_Show_Message_Box_Generic_with_Simulator_Check(void *parent_window)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  uint in_DX;
  uint uVar5;
  undefined2 uVar6;
  char *unaff_SS;
  undefined2 in_stack_00000006;
  void *in_stack_0000ff56;
  undefined4 local_a6;
  char local_56 [0x50];
  uint uStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  if (_p_GlobalPaletteObject == 0x0)
  {
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x5f2);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_56),(char *)CONCAT22(in_DX,pcVar3))
    ;
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
    strcpy_optimized((char *)CONCAT22(unaff_SS,&local_a6),(char *)CONCAT22(in_DX,pcVar3)
                    );
    iStack_4 = MessageBox16(0x21,(char *)&local_a6,unaff_SS,(ushort)local_56);
  }
  else
  {
    uVar6 = 0x1000;
    in_stack_0000ff56 = allocate_memory(CONCAT22(in_stack_0000ff56,0xb4));
    uVar5 = in_DX | (uint)in_stack_0000ff56;
    if (uVar5 == 0x0)
    {
      puVar4 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      uVar6 = 0x1040;
      puVar4 = (undefined4 *)
               UI_SubDialog_Type8DDC_ctor_VarArgs_Logic_8520
                         (in_stack_0000ff56,in_DX,g_ParentHWND,0x21,0x2,0x57b,0x5f2);
    }
    local_a6 = (undefined4 *)CONCAT22(uVar5,puVar4);
    puVar2 = (undefined2 *)((int)*local_a6 + 0x74);
    iStack_4 = (*(code *)*puVar2)(uVar6,puVar4,uVar5);
  }
  uStack_6 = (uint)(iStack_4 == 0x1);
  if ((uStack_6 != 0x0) && (_p_SimulatorGlobalState != 0x0))
  {
    iVar1 = *(int *)((int)_p_SimulatorGlobalState + 0x8);
    local_a6 = (undefined4 *)CONCAT22(local_a6._2_2_,iVar1);
    if (iVar1 != 0x0)
    {
      PostMessage16(0x0,0x0,0xb4,
                    CONCAT22(in_stack_0000ff56,*(undefined2 *)((int)parent_window + 0x8)
                            ));
      uStack_6 = 0x0;
    }
  }
  return uStack_6;
}
