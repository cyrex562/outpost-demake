/*
 * Source: outpost.c
 * Chunk: 26/117
 * Original lines: 28812-29965
 * Boundaries: top-level declarations/definitions only
 */




// Targeted Scan Finding: Vtable
// Initializes UI_Container_Item vtable to 1010:2010 (base 1008:389A).
// Performs indirect call through [container] vtable offset 4 to add item.

void __stdcall16far
UI_Container_Add_Item_at_Offset_4_Logic
          (undefined4 param_1,undefined2 param_2,undefined4 param_3)
{
  undefined2 *puVar1;
  astruct_491 *this;
  void *pvVar2;
  undefined2 *puVar3;
  uint in_DX;
  uint uVar4;
  int iVar5;
  undefined2 uVar6;
  undefined2 in_stack_0000ffe2;
  undefined4 uStack_a;
  undefined2 *puStack_6;
  
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  iVar5 = (int)param_1;
  uVar4 = in_DX;
  if (*(long *)(iVar5 + 0x4) == 0x0)
  {
    this = allocate_memory(CONCAT22(in_stack_0000ffe2,0xc));
    uVar4 = in_DX | (uint)this;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)(iVar5 + 0x4) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this,in_DX);
      *(undefined2 *)(iVar5 + 0x4) = pvVar2;
      *(uint *)(iVar5 + 0x6) = uVar4;
    }
  }
  puVar3 = allocate_memory(CONCAT22(in_stack_0000ffe2,0xa));
  uStack_a = (undefined2 *)CONCAT22(uVar4,puVar3);
  if (uVar4 == 0x0 && puVar3 == NULL)
  {
    puStack_6 = NULL;
  }
  else
  {
    *uStack_a = (char *)s_1_1050_389a;
    puVar3[0x1] = 0x1008;
    *(undefined4 *)(puVar3 + 0x2) = param_3;
    puVar3[0x4] = param_2;
    *uStack_a = (char *)s_573_bmp_1050_200f + 0x1;
    puVar3[0x1] = 0x1010;
    puStack_6 = uStack_a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar5 + 0x4) + 0x4);
  (*(code *)*puVar1)(0x1000,*(undefined4 *)(iVar5 + 0x4),(undefined2 *)puStack_6,
                     (int)((ulong)puStack_6 >> 0x10));
  return;
}



// Searches for and removes an item from the container list at offset 4 by its 32-bit
// ID. Invokes a virtual removal method on the list object for the matching item and
// destroys the list if it becomes empty.

int __stdcall16far UI_Container_Remove_Item_at_Offset_4_Logic(void *this,long item_id)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  int iVar4;
  long lVar5;
  undefined2 in_stack_00000006;
  undefined1 local_c [0x4];
  undefined4 uStack_8;
  int iStack_4;
  
  if (*(long *)((int)this + 0x4) == 0x0)
  {
    return 0x0;
  }
  iStack_4 = 0x0;
  init_long_pair(local_c,*(long *)((int)this + 0x4));
  while( true )
  {
    lVar5 = get_next_list_item(local_c);
    iVar4 = (int)((ulong)lVar5 >> 0x10);
    iVar2 = (int)lVar5;
    if (iVar4 == 0x0 && iVar2 == 0x0) break;
    if (*(long *)(iVar2 + 0x4) == item_id)
    {
      iStack_4 = 0x1;
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x4) + 0xc);
      (*(code *)*puVar3)(0x1008,*(undefined4 *)((int)this + 0x4),iVar2);
      uStack_8 = 0x0;
    }
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0x4) + 0x8) == 0x0)
  {
    puVar1 = (undefined4 *)*(int *)((int)this + 0x4);
    iVar2 = *(int *)((int)this + 0x6);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar1)
                (0x1008,puVar1,iVar2,0x1,puVar1,iVar2,puVar1,iVar2);
    }
    *(undefined4 *)((int)this + 0x4) = 0x0;
  }
  return iStack_4;
}



// Broadcasts a notification (with type `param_2`) to all listeners registered in the
// container list at offset 4. Only listeners with a matching filter type (or type 0)
// are notified via a virtual method call.

void __stdcall16far
UI_Container_Notify_Listeners_at_Offset_4_Logic(void *this,int notify_type)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0x4));
  while( true )
  {
    lVar4 = get_next_list_item(local_a);
    uVar3 = (undefined2)((ulong)lVar4 >> 0x10);
    iVar2 = (int)lVar4;
    if (lVar4 == 0x0) break;
    if (((*(int *)(iVar2 + 0x8) == 0x0) || (in_stack_00000008 == 0x0)) ||
       (*(int *)(iVar2 + 0x8) == in_stack_00000008))
    {
      puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0x4) + 0x4);
      (*(code *)*puVar1)(0x1008,(int)*(undefined4 *)(iVar2 + 0x4),
                         (int)((ulong)*(undefined4 *)(iVar2 + 0x4) >> 0x10),
                         in_stack_00000008);
    }
  }
  return;
}



// A generic scalar deleting destructor that resets the vtable to the base object state.

void * __stdcall16far Base_Object_scalar_dtor_logic_2(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = (undefined2 *)CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



void * __stdcall16far
Base_Object_2014_dtor_Scalar_Deleting_1fea(void *param_1,u16 param_2,byte param_3)
{
  Base_Object_dtor_2014_Logic(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



undefined * __stdcall16far
Resource_Manager_Initialize_Global_Ptr_2024(undefined *param_1)
{
  PTR_DAT_1050_0000_1050_0ed2 = (undefined *)((ulong)param_1 >> 0x10);
  p_ResourceManager = (undefined *)param_1;
  *(undefined2 *)(p_ResourceManager + 0x124) = 0x0;
  memset_far(p_ResourceManager,(int)PTR_DAT_1050_0000_1050_0ed2,0x0);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// Iteratively invokes virtual destructors (vtable index 0) for 73 resource categories.
// Clears global manager pointer at 1050:0ED0.

void __stdcall16far Resource_Manager_dtor_logic(long this_ref)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 uVar4;
  int iStack_4;
  
  Resource_Manager_Finalize_Active_Resource_Logic(this_ref);
  iStack_4 = 0x0;
  do
  {
    uVar4 = (undefined2)((ulong)this_ref >> 0x10);
    puVar1 = (undefined4 *)*(int *)(iStack_4 * 0x4 + (int)this_ref);
    iVar2 = *(int *)(iStack_4 * 0x4 + (int)this_ref + 0x2);
    if (iVar2 != 0x0 || puVar1 != NULL)
    {
      puVar3 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar3)();
    }
    iStack_4 += 0x1;
  } while (iStack_4 < 0x49);
  _p_ResourceManager = 0x0;
  return;
}



// Ensures the resource manager is initialized and then sets an active or current
// resource ID at offset 0x124.

void __stdcall16far Resource_Manager_Set_Active_ID_Logic(long this_ref,int id)
{
  Resource_Manager_Finalize_Active_Resource_Logic(this_ref);
  *(int *)((int)this_ref + 0x124) = id;
  return;
}



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



// Checks for an active resource ID at offset 0x124. If present, it retrieves the
// corresponding object, invokes its virtual destructor, and clears the cache entry.
// This is used to ensure temporary or state-specific resources are properly released.

void __stdcall16far Resource_Manager_Finalize_Active_Resource_Logic(long this_ref)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  
  uVar5 = (undefined2)((ulong)this_ref >> 0x10);
  iVar3 = (int)this_ref;
  if (*(int *)(iVar3 + 0x124) != 0x0)
  {
    iVar4 = *(int *)(iVar3 + 0x124) * 0x4;
    puVar1 = (undefined4 *)*(int *)(iVar4 + iVar3);
    iVar4 = *(int *)(iVar4 + iVar3 + 0x2);
    if (iVar4 != 0x0 || puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    *(undefined4 *)(*(int *)(iVar3 + 0x124) * 0x4 + iVar3) = 0x0;
    *(undefined2 *)(iVar3 + 0x124) = 0x0;
  }
  return;
}



void __cdecl16far UI_Coordinate_Table_Batch_Initialize_286c(void)
{
  pack_3words_alt(NULL,0x1048,0x0,0x5);
  pack_3words_alt((void *)0x65a6,0x1050,0x0,0x9b);
  pack_3words_alt((void *)0x65ac,0x1050,0x0,0xf5);
  pack_3words_alt((void *)0x65b2,0x1050,0x0,0x114);
  pack_3words_alt((void *)0x65b8,0x1050,0x0,0x135);
  pack_3words_alt((void *)0x65be,0x1050,0x0,0xf5);
  pack_3words_alt((void *)0x65c4,0x1050,0x0,0x117);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Option_Selection_Dialog vtable to 1010:29C2.
// Registers global instance pointer at 1050:4230.
// Loads primary resource 0x56 and 16 sub-resources (IDs 0x56-0x65) using 1050:14CC.
// Allocates internal string table using global heap at 1050:5F2C.

void * __stdcall16far UI_Option_Selection_Dialog_ctor(void *this,int segment,int id)
{
  void *pvVar1;
  undefined *heap_ctx;
  undefined *in_DX;
  int iVar2;
  undefined2 uVar3;
  int iStack_6;
  
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(undefined4 *)((int)this + 0x1c) = 0x0;
  *(undefined2 *)((int)this + 0x20) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined2 *)((int)this + 0x26) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_add16_wav_1050_2bdc + 0x8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  p_GlobalPaletteObject = this;
  PTR_DAT_1050_0000_1050_4232 = (undefined *)segment;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x56);
  pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x1c) = pvVar1;
  *(undefined2 *)((int)this + 0x1e) = in_DX;
  if (_g_AllocatedBlock_Offset == NULL)
  {
    heap_ctx = init_memory_allocator();
  }
  else
  {
    in_DX = g_AllocatedBlock_Segment;
    heap_ctx = g_AllocatedBlock_Offset;
  }
  pvVar1 = alloc_with_hooks(0x40,0x1,heap_ctx);
  *(undefined2 *)((int)this + 0x28) = pvVar1;
  *(undefined2 *)((int)this + 0x2a) = in_DX;
  for (iStack_6 = 0x0; iStack_6 < 0x10; iStack_6 += 0x1)
  {
    pvVar1 = Resource_Manager_Load_Resource_Object_Logic
                       ((void *)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10));
    uVar3 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x28) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)this + 0x28);
    *(undefined2 *)(iVar2 + iStack_6 * 0x4) = pvVar1;
    *(undefined2 *)(iVar2 + iStack_6 * 0x4 + 0x2) = in_DX;
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:29C2 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 0x1C.

void __stdcall16far UI_Option_Selection_Dialog_dtor(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_add16_wav_1050_2bdc + 0x8;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(long *)((int)this + 0x1c) != 0x0)
  {
    if (*(int *)((int)this + 0x1e) != 0x0 ||
        (undefined4 *)*(int *)((int)this + 0x1c) != NULL)
    {
      puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x1c);
      (*(code *)*puVar1)();
    }
    *(undefined4 *)((int)this + 0x1c) = 0x0;
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x28));
    *(undefined4 *)((int)this + 0x28) = 0x0;
  }
  Build_Site_Object_dtor_Internal((long)_this);
  return;
}


/*
Unable to decompile 'UI_Planet_View_Notify_Update_Logic_maybe'
Cause: 
Low-level Error: Cannot marshal address space: NO ADDRESS
*/


void __stdcall16far win16_Copy_Struct_6Bytes_Wrapper(void *ptr)
{
  void *in_stack_00000008;
  
  copy_struct_6bytes((void *)in_stack_00000008,
                     (void *)((ulong)in_stack_00000008 >> 0x10));
  return;
}



void * __stdcall16far UI_Element_Get_FarPtr_at_Offset_1C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return (void *)*(undefined2 *)((int)this + 0x1c);
}



// Targeted Scan Finding: Far Pointer
// Copies 124-byte (0x7C) simulation state entry from table starting at 1010:0ED4.

void __stdcall16far
UI_Planet_View_Copy_State_Table_Entry_Logic_maybe
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 *param_4)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)(param_3 * 0x7c + 0xed4);
  puVar5 = (undefined4 *)param_4;
  for (iVar4 = 0x1f; iVar4 != 0x0; iVar4 += -0x1)
  {
    puVar2 = puVar5;
    puVar5 = puVar5 + 0x1;
    puVar1 = puVar3;
    puVar3 = puVar3 + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



void * __stdcall16far
UI_Element_Get_Nested_FarPtr_from_Offset_28_Logic(void *this,int index)
{
  int in_stack_00000008;
  
  return (void *)*(undefined2 *)
                  (in_stack_00000008 * 0x4 + (int)*(undefined4 *)((int)this + 0x28) +
                  -0x158);
}



void * __stdcall16far
UI_Option_Selection_Dialog_dtor_Scalar_Deleting_2bbe
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Option_Selection_Dialog_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Subclass vtable to 1010:2CC2 (base 1010:2014).

void * __stdcall16far UI_Subclass_2CC2_ctor(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(char **)CONCAT22(segment,this) = (char *)s_add39_wav_1050_2cc2;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// References global resource manager at 1050:0ED0 to retrieve resource 3.
// Loads report component string ID 0x5EB using 1050:14CC.
// Concatenates status suffix from 1050:11C8.

char * __stdcall16far UI_Format_Complex_Resource_String_Logic_maybe(void)
{
  char *pcVar1;
  char *pcVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long lVar5;
  undefined2 in_stack_0000fff6;
  
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  uVar3 = (undefined2)((ulong)lVar5 >> 0x10);
  pcVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x80));
  uVar4 = uVar3;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(pcVar1,0x80),
             CONCAT22(0x5eb,uVar3));
  strcat_append((char *)CONCAT22(uVar3,pcVar1),(char *)0x105011c8);
  pcVar2 = Resource_Manager_Get_Current_Entity_Name_Logic();
  strcat_append((char *)CONCAT22(uVar3,pcVar1),(char *)CONCAT22(uVar4,pcVar2));
  return pcVar1;
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
// Targeted Scan Finding: Vtable / Far Pointer / Resource
// Initializes UI_Window_Base vtable to 1010:36DA.
// References Display Adapter resource 0x48 via 1050:0ED0 to calculate screen-centered
// coordinates.
// Initializes 40-byte internal state array.

void * __stdcall16far UI_Window_Base_ctor_init_36DA_Logic(void *this,int segment,int id)
{
  long lVar1;
  int *out2;
  int local_6;
  int local_4;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined2 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)((int)this + 0x18) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)((int)this + 0x24) = 0x0;
  *(undefined2 *)((int)this + 0x26) = 0x0;
  *(undefined2 *)((int)this + 0x28) = 0x0;
  *(undefined4 *)((int)this + 0x52) = 0x0;
  *(undefined4 *)((int)this + 0x56) = 0x0;
  *(undefined2 *)((int)this + 0x5a) = 0x0;
  *(undefined2 *)((int)this + 0x5e) = 0x0;
  *(undefined2 *)((int)this + 0x5c) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x36da;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  out2 = &local_6;
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  unpack_word_pair((void *)((int)lVar1 + 0xe),(int *)((ulong)lVar1 >> 0x10),out2);
  *(undefined4 *)((int)this + 0xe) = 0x19001db;
  *(int *)((int)this + 0xa) = 0x140 - (*(int *)((int)this + 0xe) / 0x2 - local_4);
  *(int *)((int)this + 0xc) = 0xf0 - (*(int *)((int)this + 0x10) / 0x2 - local_6);
  *(undefined4 *)((int)this + 0x1a) = 0xa006e;
  *(undefined4 *)((int)this + 0x1e) = 0xa012c;
  memset_far((void *)((int)this + 0x2a),segment,0x0);
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Window_Base vtable to 1010:36DA during destruction.
// Invokes virtual destructor (index 0) for sub-window manager at offset 0x56.

void __stdcall16far UI_Window_Base_dtor_36DA_Logic(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0x36da;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  if (*(int *)((int)this + 0x58) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x56) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x56);
    (*(code *)*puVar1)();
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x5c));
  Base_Object_dtor_2014_Logic(this);
  return;
}



void * __stdcall16far
UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic(void *this,int index)
{
  int in_stack_00000008;
  
  if (*(long *)((int)this + 0x5c) != 0x0)
  {
    return (void *)*(undefined2 *)
                    ((int)*(undefined4 *)((int)this + 0x5c) + in_stack_00000008 * 0x4);
  }
  return NULL;
}



// Setter for a far pointer in an indexed array stored at offset 0x5C. Inverse of
// `UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic`.

void __stdcall16far
UI_Element_Set_Indexed_FarPtr_at_Offset_5C_Logic(void *this,int low,int high,int index)
{
  int iVar1;
  undefined2 uVar2;
  int in_stack_0000000c;
  
  if (*(long *)((int)this + 0x5c) != 0x0)
  {
    uVar2 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x5c) >> 0x10);
    iVar1 = (int)*(undefined4 *)((int)this + 0x5c);
    *(int *)(iVar1 + in_stack_0000000c * 0x4) = high;
    *(int *)(iVar1 + in_stack_0000000c * 0x4 + 0x2) = index;
  }
  return;
}



// Traverses a hierarchical UI tree structure using a 32-bit bitmask as a path. It
// starts from a base node (offset 0x56) and follows child pointers (offset 8) to find a
// specific leaf or sub-node.

void * __stdcall16far
UI_Element_Find_Node_by_Bitmask_Logic(void *this,long path_bitmask)
{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  if (*(int *)((int)this + 0x5a) == 0x0)
  {
    pvVar2 = (void *)*(undefined2 *)((int)this + 0x56);
    uVar5 = *(undefined2 *)((int)this + 0x58);
  }
  else
  {
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x56) + 0x8);
    uVar5 = (undefined2)((ulong)uVar1 >> 0x10);
    iVar3 = (int)uVar1;
    iVar4 = *(int *)((int)this + 0x5a) * 0x4;
    pvVar2 = (void *)*(undefined2 *)(iVar3 + iVar4);
    uVar5 = *(undefined2 *)(iVar3 + iVar4 + 0x2);
  }
  uStack_8 = (void *)CONCAT22(uVar5,pvVar2);
  uStack_c = path_bitmask;
  if (path_bitmask == 0x0)
  {
    return NULL;
  }
  for (; (uStack_c & 0xf) != 0x0; uStack_c >>= 0x4)
  {
    uStack_8 = (void *)*(undefined4 *)
                        ((((byte)uStack_c & 0xf) - 0x1) * 0x4 +
                        (int)*(undefined4 *)((int)(void *)uStack_8 + 0x8));
  }
  return (void *)uStack_8;
}



// Targeted Scan Finding: Vtable
// Performs multiple indirect calls through [this] vtable:
// - Offset 0x20 (Check rebuild)
// - Offset 0x14 (Re-sort)
// - Offset 0x18 (Build path).
// Manages UI component update cycles and notifications.

long __stdcall16far UI_Component_Process_Update_Cycle_Logic(void *this)
{
  undefined2 *puVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  undefined2 extraout_DX;
  undefined2 uVar5;
  void *in_stack_00000006;
  
  if (*(long *)((int)this + 0x52) != 0x0)
  {
    return CONCAT22(*(undefined2 *)((int)this + 0x54),*(undefined2 *)((int)this + 0x52))
    ;
  }
  *(undefined2 *)((int)this + 0x28) = 0x0;
  uVar2 = *_this;
  puVar1 = (undefined2 *)((int)uVar2 + 0x20);
  iVar3 = (*(code *)*puVar1)();
  if (iVar3 != 0x0)
  {
    puVar1 = (undefined2 *)((int)uVar2 + 0x14);
    (*(code *)*puVar1)();
    uVar5 = extraout_DX;
    pvVar4 = UI_Element_Get_Indexed_FarPtr_from_Offset_5C_Logic
                       (this,(int)in_stack_00000006);
    UI_Component_Build_Hierarchy_Path_Elements_Logic(this,(long)CONCAT22(uVar5,pvVar4));
  }
  UI_Component_Rebuild_SubItems_Internal_Logic(this,in_stack_00000006);
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)in_stack_00000006);
  if (*(long *)((int)this + 0x52) == 0x0)
  {
    return 0x0;
  }
  puVar1 = (undefined2 *)*(undefined4 *)((int)this + 0x52);
  return CONCAT22(((undefined2 *)puVar1)[0x1],*puVar1);
}



// Cleans up window resources for a UI component. It iterates through primary (offset
// 0x2A) and secondary (offset 0x52) sub-window arrays, calling `DestroyWindow16` on
// every active HWND entry.

void __stdcall16far UI_Window_Manager_Cleanup_SubWindows_Logic(void *this)
{
  undefined4 uVar1;
  undefined2 in_stack_00000006;
  int iStack_4;
  
  *(undefined2 *)((int)this + 0x28) = 0x0;
  iStack_4 = 0x0;
  while( true )
  {
    if (*(int *)((int)this + 0x16) <= iStack_4) break;
    uVar1 = *(undefined4 *)((int)this + iStack_4 * 0x4 + 0x2a);
    DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
    iStack_4 += 0x1;
  }
  *(undefined2 *)((int)this + 0x16) = 0x0;
  if (*(int *)((int)this + 0x54) != 0x0 || *(int *)((int)this + 0x52) != 0x0)
  {
    iStack_4 = 0x0;
    do
    {
      if (*(long *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4) != 0x0)
      {
        uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4)
        ;
        DestroyWindow16(*(HWND16 *)((int)uVar1 + 0x18));
        *(undefined4 *)((int)*(undefined4 *)((int)this + 0x52) + iStack_4 * 0x4) = 0x0;
      }
      iStack_4 += 0x1;
    } while (iStack_4 < 0xa);
    free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x52));
    *(undefined4 *)((int)this + 0x52) = 0x0;
  }
  return;
}
