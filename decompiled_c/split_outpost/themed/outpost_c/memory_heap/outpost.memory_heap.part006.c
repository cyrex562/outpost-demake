/*
 * Source: outpost.c
 * Theme: memory_heap
 * Chunk: 6/13
 * Original lines (combined): 29051-36805
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Vtable / Resource / Far Pointer
// Central object factory for 73 resource categories.
// Instantiates 50+ classes including UI Managers, Dialogs, Bitmaps, and Sim objects.
// Maintains a category-indexed far-pointer cache.
// Orchestrates lazy-initialization and memory allocation using global heap context.

long __stdcall16far Resource_Manager_Get_Resource_by_ID_Logic(long this_ref,int id)
{
  long lVar1;
  undefined2 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  void *in_DX;
  uint uVar5;
  int unaff_SI;
  int iVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  undefined4 uStack_6;
  
  Resource_Manager_Finalize_Active_Resource_Logic(this_ref);
  uVar7 = (undefined2)((ulong)this_ref >> 0x10);
  iVar6 = (int)this_ref;
  lVar1 = *(long *)(id * 0x4 + iVar6);
  if (lVar1 != 0x0)
  {
    return lVar1;
  }
  uStack_6 = NULL;
  if (false) goto switchD_1010_2765_caseD_38;
  switch(id)
  {
  case 0x1:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0)
    {
LAB_1010_2126:
      puVar4 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      puVar4 = Resource_Category1_Object_ctor(pvVar3,(int)in_DX,id);
    }
    break;
  case 0x2:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x84));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Configuration_Manager_ctor_init_6312_Logic(pvVar3,(int)in_DX,id);
    break;
  case 0x3:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x53c));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Simulator_Event_Dispatch_Table_Object_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x4:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18a));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Ship_View_Controller_ctor_init_32D8_Logic
                       ((long)CONCAT22(in_DX,pvVar3),id);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x5:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x14));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_EB1A(pvVar3,(int)in_DX,id);
    break;
  case 0x6:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x58));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Navigation_Manager_ctor_init_1FB0_Logic((long)CONCAT22(in_DX,pvVar3),id)
    ;
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x7:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xe));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Resource_Category2_Object_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x8:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x20));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Object_Subclass_ctor_A1C8(pvVar3,(int)in_DX,id);
    break;
  case 0x9:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x26));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Resource_Category_Object_ctor_66F0(pvVar3,(int)in_DX,id);
    break;
  case 0xa:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Special_Manager_Subclass_ctor_init_F0C(pvVar3,(int)in_DX,id);
    break;
  case 0xb:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Special_Dialog_ctor_init(pvVar3,(int)in_DX,id);
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xaa));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Main_View_Controller_ctor_init_1874_Logic
                       ((long)CONCAT22(in_DX,pvVar3),id);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x25:
    puVar4 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)puVar4;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    Build_Site_Object_ctor((long)CONCAT22(in_DX,puVar4),id,unaff_SI);
    break;
  case 0x26:
    puVar4 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)puVar4;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    UI_Special_Dialog_Subclass_ctor_init(puVar4,(int)in_DX,id);
    break;
  case 0x27:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x58));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Manager_ctor(pvVar3,in_DX,id);
    break;
  case 0x28:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x2c));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Option_Selection_Dialog_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x29:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x72));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Construction_Manager_ctor_init_2ADA_Logic
                       ((long)CONCAT22(in_DX,pvVar3),id);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x2a:
    puVar4 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)puVar4;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    UI_Special_Dialog_Subclass_ctor_init_5099(puVar4,(int)in_DX,id);
    break;
  case 0x2b:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x1a));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Event_List_Manager_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x2c:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x10));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_EC00(pvVar3,(int)in_DX,id);
    break;
  case 0x2d:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x80));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Complex_Dialog_ctor_4A46(pvVar3,(int)in_DX);
    break;
  case 0x2e:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x806));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Report_Grid_Manager_ctor_init_21E8_Logic
                       ((long)CONCAT22(in_DX,pvVar3),id);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x2f:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x58));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             Simulator_Object_Subclass_ctor_0558((long)CONCAT22(in_DX,pvVar3));
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x30:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xe));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = String_Wrapper_Object_ctor_37C4(pvVar3,(int)in_DX,id);
    break;
  case 0x31:
    uVar8 = 0x1000;
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x60));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0)
    {
LAB_1010_2680:
      uVar8 = 0x1000;
      puVar4 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      puVar4 = UI_Window_Subclass_ctor_9566(pvVar3,(int)in_DX,id);
    }
    goto LAB_1010_2683;
  case 0x32:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x26));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Resource_Summary_Manager_ctor_init_7E28_Logic(pvVar3,(int)in_DX,id);
    break;
  case 0x33:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x72));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0)
    {
LAB_1010_25b8:
      puVar4 = NULL;
      uVar5 = 0x0;
    }
    else
    {
      puVar4 = UI_Report_List_Manager_ctor_init_1B2A_Logic(pvVar3,(int)in_DX,id);
    }
    goto LAB_1010_25bb;
  case 0x34:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x72));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_25b8;
    puVar4 = UI_Report_List_Manager_ctor_init_1D04_Logic(pvVar3,(int)in_DX,id);
LAB_1010_25bb:
    uStack_6 = (undefined4 *)CONCAT22(uVar5,puVar4);
    UI_Report_List_Sort_Items_by_Column_Logic(puVar4,uVar5);
    goto switchD_1010_2765_caseD_38;
  case 0x35:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x14a));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Simulator_Settings_Object_ctor_init_6AAC_Logic(pvVar3,(int)in_DX,id);
    break;
  case 0x36:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x10));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_D98E(pvVar3,(int)in_DX,id);
    break;
  case 0x37:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x420));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Specialized_Manager_ctor(pvVar3,(int)in_DX,id);
    break;
  default:
    goto switchD_1010_2765_caseD_38;
  case 0x39:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x36));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Colony_Morale_Dialog_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x3a:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xc));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_D780(pvVar3,(int)in_DX,id);
    break;
  case 0x3b:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x22));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Relationship_Manager_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x3c:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x146));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)
             UI_Trade_Manager_ctor_init_470C_Logic
                       ((long)CONCAT22(in_DX,pvVar3),id,unaff_SI);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x3d:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xe));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Component_Subclass_ctor_8EE2(pvVar3,(int)in_DX,id);
    break;
  case 0x3e:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x18));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)Build_Site_List_Item_ctor_init((long)CONCAT22(in_DX,pvVar3));
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x3f:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x12));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_CA4A(pvVar3,(int)in_DX,id);
    break;
  case 0x40:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x24));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_BDCC(pvVar3,(int)in_DX,id);
    break;
  case 0x41:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x60));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2680;
    uVar8 = 0x1008;
    puVar4 = UI_Subclass_EF9C_ctor(pvVar3,(int)in_DX,id);
LAB_1010_2683:
    *(undefined2 *)(id * 0x4 + iVar6) = puVar4;
    *(uint *)(id * 0x4 + iVar6 + 0x2) = uVar5;
    puVar2 = (undefined2 *)((int)*puVar4 + 0x10);
    (*(code *)*puVar2)(uVar8,puVar4,uVar5);
    break;
  case 0x42:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xc));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Element_Subclass_ctor_EC62(pvVar3,(int)in_DX,id);
    break;
  case 0x43:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x12));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = UI_Subclass_2CC2_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x45:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xe));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Game_Settings_Manager_ctor(pvVar3,(int)in_DX,id);
    break;
  case 0x46:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x1a));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = String_Wrapper_Subclass_ctor_53F4(pvVar3,(int)in_DX,id);
    break;
  case 0x47:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0xe));
    if (in_DX == NULL && pvVar3 == NULL) goto LAB_1010_2126;
    puVar9 = (undefined4 *)UI_Building_Manager_ctor_init(pvVar3,(int)in_DX,id);
    uVar5 = (uint)((ulong)puVar9 >> 0x10);
    puVar4 = (undefined4 *)puVar9;
    break;
  case 0x48:
    pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x1c));
    uVar5 = (uint)in_DX | (uint)pvVar3;
    if (uVar5 == 0x0) goto LAB_1010_2126;
    puVar4 = Display_Adapter_Object_ctor(pvVar3,(int)in_DX,id);
  }
  uStack_6 = (undefined4 *)CONCAT22(uVar5,puVar4);
switchD_1010_2765_caseD_38:
  *(undefined4 *)(id * 0x4 + iVar6) = uStack_6;
  return (long)uStack_6;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_2c9c(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Core UI rebuild engine performing extensive vtable calls:
// - [this] offset 0x24 (Pre-rebuild check)
// - [puStack0008] offset 4 (Get count)
// - [this] offset 0x1C (Instantiate item).
// References global heap context at 1050:5F2C.
// Allocates a 10-slot (0x28 byte) sub-window tracking array.
// Outputs debug string "Overflow on node %d" (1050:11CA).

void __stdcall16far
UI_Component_Rebuild_SubItems_Internal_Logic(void *this,void *src_node)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined *heap_ctx;
  void *pvVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  undefined2 unaff_CS;
  undefined2 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puStack0008;
  int iStack000a;
  undefined4 uStack_30;
  int iStack_10;
  int iStack_c;
  
  if (*(long *)((int)this + 0x52) != 0x0)
  {
    unaff_CS = 0x1000;
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x52));
    *(undefined4 *)((int)this + 0x52) = 0x0;
    *(undefined2 *)((int)this + 0x18) = 0x0;
  }
  if ((iStack000a != 0x0 || puStack0008 != NULL) &&
     (puVar4 = (undefined2 *)((int)*_this + 0x24),
     iVar5 = (*(code *)*puVar4)(unaff_CS,this,src_node,_puStack0008), iVar5 != 0x0))
  {
    puVar4 = (undefined2 *)((int)*_puStack0008 + 0x4);
    uVar12 = (*(code *)*puVar4)(unaff_CS,puStack0008,iStack000a);
    puVar7 = (undefined *)((ulong)uVar12 >> 0x10);
    *(int *)((int)this + 0x18) = (int)uVar12;
    if ((int)uVar12 != 0x0)
    {
      *(undefined2 *)((int)this + 0x24) = 0x0;
      *(undefined2 *)((int)this + 0x26) = 0x0;
      *(int *)((int)this + 0x18) =
           *(int *)((int)this + 0x18) - *(int *)((int)this + 0x28);
      if (0xa < *(int *)((int)this + 0x18))
      {
        *(undefined2 *)((int)this + 0x26) = 0x1;
        *(undefined2 *)((int)this + 0x18) = 0xa;
      }
      if (0x1 < *(int *)((int)this + 0x28))
      {
        *(undefined2 *)((int)this + 0x24) = 0x1;
      }
      if (_g_AllocatedBlock_Offset == NULL)
      {
        heap_ctx = init_memory_allocator();
      }
      else
      {
        puVar7 = g_AllocatedBlock_Segment;
        heap_ctx = g_AllocatedBlock_Offset;
      }
      uVar11 = 0x1000;
      pvVar6 = alloc_with_hooks(0x28,0x1,heap_ctx);
      *(undefined2 *)((int)this + 0x52) = pvVar6;
      *(undefined2 *)((int)this + 0x54) = puVar7;
      if (*(int *)((int)this + 0x54) != 0x0 || *(int *)((int)this + 0x52) != 0x0)
      {
        uVar12 = puStack0008[0x2];
        iVar5 = *(int *)((int)this + 0x10);
        iStack_c = 0x0;
        for (iStack_10 = 0x0; iStack_10 < *(int *)((int)this + 0x18); iStack_10 += 0x1)
        {
          uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
          puVar1 = (undefined2 *)
                   ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          uStack_30 = (undefined2 *)CONCAT22(uVar10,puVar1);
          uVar13 = *(undefined4 *)
                    ((*(int *)((int)this + 0x28) + iStack_10) * 0x4 + (int)uVar12);
          puVar4 = (undefined2 *)((int)*_this + 0x1c);
          uVar13 = (*(code *)*puVar4)(uVar11,this,src_node,(int)uVar13,
                                      (int)((ulong)uVar13 >> 0x10),
                                      *(undefined2 *)((int)this + 0x22));
          *uStack_30 = (int)uVar13;
          puVar1[0x1] = (int)((ulong)uVar13 >> 0x10);
          uVar13 = *(undefined4 *)
                    ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          iStack_c += *(int *)((int)uVar13 + 0x24) + 0x8;
          if (iVar5 + -0xa < iStack_c)
          {
            uVar11 = 0x1008;
            log_debug_message_v(0x11ca,0x1050,iStack_10);
            *(int *)((int)this + 0x18) = iStack_10 + -0x1;
            *(undefined2 *)((int)this + 0x26) = 0x1;
            uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
            iVar9 = (int)*(undefined4 *)((int)this + 0x52);
            puVar2 = (undefined4 *)*(int *)(iVar9 + iStack_10 * 0x4);
            iVar9 = *(int *)(iVar9 + iStack_10 * 0x4 + 0x2);
            if (iVar9 != 0x0 || puVar2 != NULL)
            {
              (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x1008,puVar2,iVar9,0x1);
            }
            iVar9 = iStack_10 * 0x4;
            *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iVar9) = 0x0;
            if (0x0 < iStack_10)
            {
              uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x52) >> 0x10);
              iVar8 = (int)*(undefined4 *)((int)this + 0x52);
              puVar2 = (undefined4 *)*(int *)(iVar8 + iVar9 + -0x4);
              iVar9 = *(int *)(iVar8 + iVar9 + -0x2);
              if (iVar9 != 0x0 || puVar2 != NULL)
              {
                (*(code *)*(undefined2 *)(undefined2 *)*puVar2)(0x1008,puVar2,iVar9,0x1)
                ;
              }
              *(undefined4 *)
               (iStack_10 * 0x4 + (int)*(undefined4 *)((int)this + 0x52) + -0x4) = 0x0;
            }
          }
        }
        *(undefined2 *)((int)this + 0x20) = 0xa;
        UI_Window_Move_and_Update_93aa
                  ((void *)*(void **)*(undefined4 *)((int)this + 0x52),
                   (int)((ulong)*(void **)*(undefined4 *)((int)this + 0x52) >> 0x10),0xa
                  );
        for (iStack_10 = 0x1; iStack_10 < *(int *)((int)this + 0x18); iStack_10 += 0x1)
        {
          uVar12 = *(undefined4 *)
                    (iStack_10 * 0x4 + (int)*(undefined4 *)((int)this + 0x52) + -0x4);
          iVar5 = (int)uVar12;
          uVar11 = (undefined2)((ulong)uVar12 >> 0x10);
          pvVar3 = (void *)*(undefined4 *)
                            ((int)*(undefined4 *)((int)this + 0x52) + iStack_10 * 0x4);
          UI_Window_Move_and_Update_93aa
                    ((void *)pvVar3,(int)((ulong)pvVar3 >> 0x10),
                     *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24) + 0x8);
        }
      }
    }
  }
  return;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:37C4 during destruction.

void __stdcall16far String_Wrapper_Object_dtor_37C4(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x37c4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xa));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:3B3E during destruction.

void __stdcall16far Collection_Object_Subclass_dtor_3B3E(void *this)
{
  u16 in_stack_00000006;
  
  *_this = (char *)s_6_0_1050_3b3d + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    free_if_not_null((void *)*(void **)*(undefined4 *)((int)this + 0x16));
  }
  Collection_Object_Base_dtor_3B5E(this,in_stack_00000006);
  return;
}



// Factory function for the collection subclass. If a size is provided, it allocates a
// raw pointer array and stores it in the parent object. If no size is provided, it
// constructs a new collection object instance.

void * __stdcall16far Collection_Object_Subclass_3B3E_factory(void *this,int size)
{
  void *pvVar1;
  int in_DX;
  int in_stack_00000008;
  undefined4 in_stack_0000fff8;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (in_stack_00000008 != 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(uVar2,in_stack_00000008 << 0x2));
    *(undefined2 *)((int)this + 0x8) = pvVar1;
    *(int *)((int)this + 0xa) = in_DX;
    return (void *)*(undefined2 *)((int)this + 0x8);
  }
  pvVar1 = allocate_memory(CONCAT22(uVar2,0x1a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar1 = Collection_Object_Subclass_ctor_3B3E(pvVar1);
    return pvVar1;
  }
  return NULL;
}



void __stdcall16far
Collection_Object_Base_Factory_394a(u16 param_1,u16 param_2,int param_3)
{
  astruct_489 *this;
  int in_DX;
  undefined4 in_stack_0000fff8;
  undefined2 uVar1;
  u16 local_4;
  
  uVar1 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (param_3 != 0x0)
  {
    allocate_memory(CONCAT22(uVar1,param_3 << 0x2));
    return;
  }
  this = allocate_memory(CONCAT22(uVar1,0x16));
  if (in_DX != 0x0 || this != NULL)
  {
    Collection_Object_Base_ctor_3B5E(this);
    return;
  }
  return;
}



void * __stdcall16far
Collection_Object_Subclass_3B3E_dtor_Scalar_Deleting_3af2
          (void *param_1,u16 param_2,byte param_3)
{
  Collection_Object_Subclass_dtor_3B3E(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



astruct_490 * __stdcall16far
Collection_Object_Base_dtor_Scalar_Deleting_3b18(astruct_490 *param_1,byte param_2)
{
  Collection_Object_Base_dtor_3B5E((astruct_490 *)param_1,(u16)((ulong)param_1 >> 0x10))
  ;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null((astruct_490 *)param_1);
  }
  return param_1;
}



// Setter for a 4-word (8-byte) structure (likely a RECT) within a dynamically allocated
// array at offset 0x1A. Initializes the array based on the count at offset 0x30 if
// necessary.

void __stdcall16far
UI_Component_Set_Indexed_Rect_at_Offset_1A_Logic
          (void *this,int left,int top,int right,int bottom,int index)
{
  void *pvVar1;
  undefined2 in_DX;
  undefined2 unaff_SI;
  int iVar2;
  int in_stack_00000010;
  
  if (*(long *)((int)this + 0x1a) == 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(unaff_SI,*(int *)((int)this + 0x30) << 0x3));
    *(undefined2 *)((int)this + 0x1a) = pvVar1;
    *(undefined2 *)((int)this + 0x1c) = in_DX;
  }
  iVar2 = in_stack_00000010 * 0x8;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2) = index;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x2) = bottom;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x4) = right;
  *(int *)((int)*(undefined4 *)((int)this + 0x1a) + iVar2 + 0x6) = top;
  return;
}



// Destructor for the 0x53F4 string wrapper subclass. Frees the managed buffer at offset
// 12.

void __stdcall16far String_Wrapper_Subclass_dtor_53F4(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0x53f4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xc));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Scalar destructor for subclass 0x6322. Resets vtable to 0x389A (segment 1008) and
// frees sub-object at offset 4.

void * __stdcall16far UI_Subclass_6322_scalar_dtor(void *this,byte flags)
{
  undefined2 uVar1;
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  uVar1 = (undefined2)((ulong)_this >> 0x10);
  *_this = 0x6322;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far Base_Object_scalar_dtor_logic_3(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far Base_Object_scalar_dtor_logic_4(void *this,byte flags)
{
  byte in_stack_00000008;
  
  Base_Object_dtor_2014_Logic(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
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



// Factory for Collection_Object_Subclass_958E. Handles both array allocation and
// individual instance construction/initialization.

void * __stdcall16far Collection_Object_Subclass_958E_factory(int mode)
{
  void *pvVar1;
  int in_DX;
  int in_stack_00000008;
  undefined4 in_stack_0000fff8;
  undefined2 uVar2;
  
  uVar2 = (undefined2)((ulong)in_stack_0000fff8 >> 0x10);
  if (in_stack_00000008 != 0x0)
  {
    pvVar1 = allocate_memory(CONCAT22(uVar2,in_stack_00000008 << 0x2));
    return pvVar1;
  }
  pvVar1 = allocate_memory(CONCAT22(uVar2,0x1a));
  if (in_DX != 0x0 || pvVar1 != NULL)
  {
    pvVar1 = Collection_Object_Subclass_ctor_958E(pvVar1);
    return pvVar1;
  }
  return NULL;
}
