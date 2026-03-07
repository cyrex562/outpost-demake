/*
 * Source: outpost.c
 * Chunk: 20/117
 * Original lines: 21845-23023
 * Boundaries: top-level declarations/definitions only
 */




// Scalar deleting destructor for the UI_Special_Dialog class.

void * __stdcall16far UI_Special_Dialog_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Special_Dialog_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDCC.

void * __stdcall16far UI_Element_Subclass_ctor_BDCC(void *this,int arg2,int arg3)
{
  Base_Object_ctor_init_2014_Logic(this,arg2);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined2 *)((int)this + 0x22) = 0x0;
  *(undefined2 *)CONCAT22(arg2,this) = 0xbdcc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets UI_Element_Subclass vtable to 1008:BDCC during destruction.
// Iteratively invokes virtual destructors for sub-objects at offsets 10, 14, and 18.

void __stdcall16far UI_Element_Subclass_dtor_BDCC(void *this)
{
  undefined2 *puVar1;
  undefined2 in_stack_00000006;
  
  *_this = 0xbdcc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  if (*(int *)((int)this + 0xc) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xa) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xa);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x10) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0xe) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0xe);
    (*(code *)*puVar1)();
  }
  if (*(int *)((int)this + 0x14) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x12) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x12);
    (*(code *)*puVar1)();
  }
  Base_Object_dtor_2014_Logic(this);
  return;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC8.

void * __stdcall16far UI_Element_Subclass_ctor_BDC8(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *_this = 0xbdc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1008:BDC8 and then 1008:389A during destruction.

void __stdcall16far UI_Element_Subclass_dtor_BDC8(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = 0xbdc8;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x4));
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC4.

void * __stdcall16far UI_Element_Subclass_ctor_BDC4(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined2 *)((int)this + 0x8) = 0x0;
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)((int)this + 0xe) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *_this = 0xbdc4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDC0.

void * __stdcall16far UI_Element_Subclass_ctor_BDC0(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined4 *)((int)this + 0x8) = 0x0;
  *_this = 0xbdc0;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes UI_Element_Subclass vtable to 1008:BDDC.

void * __stdcall16far UI_Element_Subclass_ctor_BDDC(void *this)
{
  undefined2 in_stack_00000006;
  
  UI_Element_Subclass_ctor_BDC8(this);
  *(undefined2 *)((int)this + 0x8) = 0x0;
  *_this = 0xbddc;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
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



// Replaces a string within a sub-component (offset 0x16). It frees the old string,
// duplicates the new one, and then nullifies the sub-component pointer.

void __stdcall16far
UI_Element_Subclass_Replace_String_at_Offset_16(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  int iVar2;
  undefined2 uVar3;
  char *in_stack_00000008;
  
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)
                                      ((int)*(undefined4 *)((int)this + 0x16) + 0x4));
    pcVar1 = strdup_allocate(in_stack_00000008);
    uVar3 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x16) >> 0x10);
    iVar2 = (int)*(undefined4 *)((int)this + 0x16);
    *(undefined2 *)(iVar2 + 0x4) = pcVar1;
    *(undefined2 *)(iVar2 + 0x6) = in_DX;
    *(undefined4 *)((int)this + 0x16) = 0x0;
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



// Retrieves the filename string pointer from the UI element's sub-component at offset
// 0x16.

char * __stdcall16far UI_Element_Get_SubComponent_Filename_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    return (char *)*(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0x4);
  }
  return NULL;
}



// Retrieves a 32-bit data or string pointer from the UI element's sub-component at
// offset 0x1A.

void * __stdcall16far UI_Element_Get_SubComponent_Data_at_Offset_1A_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x1a) != 0x0)
  {
    return (void *)*(undefined2 *)((int)*(undefined4 *)((int)this + 0x1a) + 0x4);
  }
  return NULL;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Iteratively loads 14 string resources (IDs 0x6D9 to 0x6E6) using global manager at
// 1050:14CC.
// Initializes list entries with UI_Element_Subclass vtable 1008:BDDC.
// Performs indirect call through list object vtable offset 8.
// References global state at 1050:5748.

void * __stdcall16far UI_Populate_Standard_Option_List_Logic(void *this)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  char *pcVar3;
  uint in_DX;
  uint uVar4;
  uint uVar5;
  uint extraout_DX;
  void *pvVar6;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000ffe6;
  int iStack_4;
  
  if (*(long *)((int)this + 0x12) == 0x0)
  {
    this_00 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xc));
    uVar4 = in_DX | (uint)this_00;
    if (uVar4 == 0x0)
    {
      *(undefined4 *)((int)this + 0x12) = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,in_DX);
      *(undefined2 *)((int)this + 0x12) = pvVar2;
      *(uint *)((int)this + 0x14) = uVar4;
    }
    for (iStack_4 = 0x6d9; iStack_4 < 0x6e7; iStack_4 += 0x1)
    {
      if (iStack_4 == 0x6e3)
      {
        pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)0x8000001);
        uVar4 = (uint)((ulong)pvVar6 >> 0x10);
        if (*(int *)((int)(void *)pvVar6 + 0x136) != 0x0) goto LAB_1008_b44a;
      }
      else
      {
LAB_1008_b44a:
        pvVar2 = allocate_memory(CONCAT22(in_stack_0000ffe6,0xa));
        uVar4 |= (uint)pvVar2;
        if (uVar4 == 0x0)
        {
          pvVar2 = NULL;
          uVar4 = 0x0;
        }
        else
        {
          pvVar2 = UI_Element_Subclass_ctor_BDDC(pvVar2);
        }
        uVar5 = uVar4;
        pcVar3 = Resource_Manager_LoadString_and_Duplicate
                           ((int)_p_GlobalResourceManager,
                            (int)((ulong)_p_GlobalResourceManager >> 0x10),iStack_4);
        *(undefined2 *)((int)pvVar2 + 0x4) = pcVar3;
        *(uint *)((int)pvVar2 + 0x6) = uVar5;
        *(int *)((int)pvVar2 + 0x8) = iStack_4 + -0x6d8;
        puVar1 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x12) + 0x8);
        (*(code *)*puVar1)(0x1010,(int)*(undefined4 *)((int)this + 0x12),
                           (int)((ulong)*(undefined4 *)((int)this + 0x12) >> 0x10),
                           pvVar2,uVar4);
        uVar4 = extraout_DX;
      }
    }
  }
  return (void *)*(undefined2 *)((int)this + 0x12);
}



// Retrieves a 32-bit data or string pointer from the UI element's sub-component at
// offset 0x1E.

void * __stdcall16far UI_Element_Get_SubComponent_Data_at_Offset_1E_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(long *)((int)this + 0x1e) != 0x0)
  {
    return (void *)*(undefined2 *)((int)*(undefined4 *)((int)this + 0x1e) + 0x4);
  }
  return NULL;
}



// Orchestrates the high-level initialization of UI sub-systems from a specified file.
// It creates a `File_Object`, populates file and option lists, and initializes
// secondary sub-components at offsets 0x1A and 0x1E based on the file content.

void __stdcall16far
UI_Component_Init_SubSystems_from_File_Logic(void *this,char *filename)
{
  void *pvVar1;
  undefined2 in_DX;
  long in_stack_00000008;
  
  if (in_stack_00000008 == 0x0)
  {
    *(undefined4 *)((int)this + 0x16) = 0x0;
  }
  else
  {
    pvVar1 = UI_Find_Item_In_List_Offset_0A_by_String_Logic(this,filename);
    *(undefined2 *)((int)this + 0x16) = pvVar1;
    *(undefined2 *)((int)this + 0x18) = in_DX;
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0x16) + 0x8) != 0x0)
  {
    UI_Populate_File_List_Logic(this);
    UI_Populate_Standard_Option_List_Logic(this);
    pvVar1 = UI_Find_Item_In_List_Offset_0E_Logic
                       (this,*(long *)((int)*(undefined4 *)((int)this + 0x16) + 0xa));
    *(undefined2 *)((int)this + 0x1a) = pvVar1;
    *(undefined2 *)((int)this + 0x1c) = in_DX;
    pvVar1 = UI_Find_Item_In_List_Offset_12_Logic(this,(int)filename);
    *(undefined2 *)((int)this + 0x1e) = pvVar1;
    *(undefined2 *)((int)this + 0x20) = in_DX;
    return;
  }
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Vtable / Far Pointer
// References global simulator state at 1050:5748.
// Iteratively invokes virtual destructors (vtable index 0) for sub-system lists at
// offsets 0xE and 0x12.

void __stdcall16far UI_Component_Cleanup_SubSystems_Logic(void *this,int arg2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 unaff_CS;
  void *this_ptr;
  int in_stack_00000008;
  
  if (in_stack_00000008 != 0x0)
  {
    if (*(long *)((int)this + 0x1a) != 0x0)
    {
      *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0x8) = 0x1;
      *(undefined4 *)((int)*(undefined4 *)((int)this + 0x16) + 0xa) =
           *(undefined4 *)((int)*(undefined4 *)((int)this + 0x1a) + 0x8);
      *(undefined2 *)((int)*(undefined4 *)((int)this + 0x16) + 0xe) =
           *(undefined2 *)((int)*(undefined4 *)((int)this + 0x1e) + 0x8);
      this_ptr = Simulator_Global_Get_Entity_Object_Wrapper_8344
                           ((u16)_p_SimulatorGlobalState,
                            (u16)((ulong)_p_SimulatorGlobalState >> 0x10),
                            (void *)*(undefined4 *)
                                     ((int)*(undefined4 *)((int)this + 0x16) + 0xa));
      unaff_CS = 0x1038;
      UI_Colony_Window_Free_SubItem_Logic_3608(this_ptr);
    }
  }
  *(undefined4 *)((int)this + 0x1e) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0xe);
  iVar2 = *(int *)((int)this + 0x10);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0xe) = 0x0;
  puVar1 = (undefined4 *)*(int *)((int)this + 0x12);
  iVar2 = *(int *)((int)this + 0x14);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(unaff_CS,puVar1,iVar2,0x1);
  }
  *(undefined4 *)((int)this + 0x12) = 0x0;
  return;
}



// Sets the UI sub-component at offset 0x1A using a newly created object.

void __stdcall16far
UI_Component_Set_SubComponent_at_Offset_1A_Logic(void *this,char *str)
{
  void *pvVar1;
  undefined2 in_DX;
  
  pvVar1 = UI_Find_Item_In_List_Offset_0E_by_String_Logic(this,str);
  *(undefined2 *)((int)this + 0x1a) = pvVar1;
  *(undefined2 *)((int)this + 0x1c) = in_DX;
  return;
}



// Sets the UI sub-component at offset 0x1E using a newly created object.

void __stdcall16far
UI_Component_Set_SubComponent_at_Offset_1E_Logic(void *this,char *str)
{
  void *pvVar1;
  undefined2 in_DX;
  
  pvVar1 = UI_Find_Item_In_List_Offset_12_by_String_Logic(this,str);
  *(undefined2 *)((int)this + 0x1e) = pvVar1;
  *(undefined2 *)((int)this + 0x20) = in_DX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Loads string resources 0x434 or 0x435 using global string manager at 1050:14CC based
// on file status.

void __stdcall16far
UI_Component_Show_File_Status_Message_Logic(void *this,void *buffer,char *filename)
{
  void *pvVar1;
  int in_DX;
  undefined2 in_stack_0000000a;
  undefined2 uVar2;
  
  pvVar1 = UI_Find_Item_In_List_Offset_0A_by_String_Logic(this,buffer);
  if ((in_DX == 0x0 && pvVar1 == NULL) || (*(int *)((int)pvVar1 + 0x8) != 0x1))
  {
    uVar2 = 0x434;
  }
  else
  {
    uVar2 = 0x435;
  }
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(filename,0x3ff),
             CONCAT22(uVar2,in_stack_0000000a));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads string resource 0x6E7 ("Slot %d") using global manager at 1050:14CC.
// Instantiates 5 UI components with vtable 1008:BDC4.
// Performs indirect call through list object vtable offset 8.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Populate_Numbered_Slot_List_Logic(void *this)
{
  undefined2 *puVar1;
  astruct_491 *this_00;
  void *pvVar2;
  char *pcVar3;
  uint in_DX;
  uint uVar4;
  uint extraout_DX;
  uint uVar5;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  void *in_stack_0000fdf4;
  uint uVar6;
  void *pvStack_204;
  undefined1 local_202 [0x100];
  char local_102 [0x100];
  
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_202,0x100),
             CONCAT22(0x6e7,unaff_SS));
  if (*(long *)((int)this + 0xa) == 0x0)
  {
    this_00 = allocate_memory(CONCAT22(in_stack_0000fdf4,0xc));
    uVar4 = in_DX | (uint)this_00;
    if (uVar4 == 0x0)
    {
      pvVar2 = NULL;
      uVar4 = 0x0;
    }
    else
    {
      pvVar2 = construct_object_with_vtable(this_00,in_DX);
    }
    *(undefined2 *)((int)this + 0xa) = pvVar2;
    *(uint *)((int)this + 0xc) = uVar4;
    for (pvStack_204 = (void *)0x1; (int)pvStack_204 < 0x6;
        pvStack_204 = (void *)((int)pvStack_204 + 0x1))
    {
      pvVar2 = allocate_memory(CONCAT22(in_stack_0000fdf4,0x12));
      uVar5 = uVar4 | (uint)pvVar2;
      if (uVar5 == 0x0)
      {
        in_stack_0000fdf4 = NULL;
        uVar5 = 0x0;
      }
      else
      {
        in_stack_0000fdf4 = UI_Element_Subclass_ctor_BDC4(pvVar2);
      }
      uVar6 = uVar5;
      _wsprintf16((char *)CONCAT22(unaff_SS,local_102),
                  (undefined1 *)CONCAT22(unaff_SS,local_202),
                  (void *)CONCAT22(in_stack_0000fdf4,pvStack_204));
      pcVar3 = strdup_allocate(local_102);
      *(undefined2 *)((int)in_stack_0000fdf4 + 0x4) = pcVar3;
      *(uint *)((int)in_stack_0000fdf4 + 0x6) = uVar5;
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
      (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xa),
                         (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),
                         in_stack_0000fdf4,uVar6,in_stack_0000fdf4,uVar6,pvVar2,uVar4);
      uVar4 = extraout_DX;
    }
    *(undefined2 *)((int)this + 0x22) = 0x5;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Loads string resource 0x6E7 using global manager at 1050:14CC.
// Instantiates a UI component with vtable 1008:BDC4.
// Performs indirect call through list object vtable offset 8.
// References bitmap resource: tile2.bmp (offset 1050:1538).

void __stdcall16far UI_Add_New_Numbered_Slot_Entry_Logic(void *this)
{
  undefined2 *puVar1;
  void *this_00;
  char *pcVar2;
  uint in_DX;
  uint uVar3;
  undefined2 unaff_SS;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fdf6;
  undefined1 local_206 [0x100];
  char local_106 [0x100];
  void *pvStack_6;
  uint uStack_4;
  
  this_00 = allocate_memory(CONCAT22(in_stack_0000fdf6,0x12));
  uVar3 = in_DX | (uint)this_00;
  if (uVar3 == 0x0)
  {
    pvStack_6 = NULL;
    uVar3 = 0x0;
  }
  else
  {
    pvStack_6 = UI_Element_Subclass_ctor_BDC4(this_00);
  }
  uStack_4 = uVar3;
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(local_206,0x100),
             CONCAT22(0x6e7,unaff_SS));
  *(int *)((int)this + 0x22) = *(int *)((int)this + 0x22) + 0x1;
  _wsprintf16((char *)CONCAT22(unaff_SS,local_106),
              (undefined1 *)CONCAT22(unaff_SS,local_206),
              (void *)CONCAT22(this_00,(void *)*(undefined2 *)((int)this + 0x22)));
  pcVar2 = strdup_allocate(local_106);
  *(undefined2 *)((int)pvStack_6 + 0x4) = pcVar2;
  *(uint *)((int)pvStack_6 + 0x6) = uVar3;
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x8);
  (*(code *)*puVar1)(0x1538,(int)*(undefined4 *)((int)this + 0xa),
                     (int)((ulong)*(undefined4 *)((int)this + 0xa) >> 0x10),pvStack_6,
                     uStack_4,this_00,in_DX);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global state at 1050:5748.
// Queries entity 0x8000001 to check a status flag at offset 0x152.

void * __stdcall16far UI_Get_Numbered_Slot_List_Head_maybe(void *this)
{
  void *pvVar1;
  undefined2 in_stack_00000006;
  
  pvVar1 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)0x8000001);
  if (*(int *)((int)(void *)pvVar1 + 0x152) == 0x0)
  {
    return NULL;
  }
  return (void *)*(undefined2 *)((int)this + 0xa);
}



// Searches the linked list stored at offset 0xE of the input structure for an item
// whose associated value (offset 8) matches the provided 32-bit identifier. Returns the
// matching item or 0 if not found.

void * __stdcall16far UI_Find_Item_In_List_Offset_0E_Logic(void *this,long id)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined2 in_stack_00000006;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = (void *)pvVar3;
    if (iVar2 == 0x0 && pvVar1 == NULL)
    {
      return NULL;
    }
  } while (*(long *)((int)pvVar1 + 0x8) != id);
  return pvVar1;
}



// Searches the linked list stored at offset 0x12 of the input structure for an item
// whose associated 16-bit ID (offset 8) matches the provided value. Returns the
// matching item or 0 if not found.

void * __stdcall16far UI_Find_Item_In_List_Offset_12_Logic(void *this,int id)
{
  void *pvVar1;
  int in_stack_00000008;
  undefined1 local_a [0x8];
  
  init_long_pair(local_a,*(long *)((int)this + 0x12));
  do
  {
    pvVar1 = (void *)get_next_list_item(local_a);
    if (pvVar1 == NULL)
    {
      return NULL;
    }
  } while (*(int *)((int)(void *)pvVar1 + 0x8) != in_stack_00000008);
  return (void *)pvVar1;
}



// Searches the linked list stored at offset 0xE of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_0E_by_String_Logic(void *this,char *search_name)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_00000008;
  void *pvStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == NULL)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)this + 0xe));
  pvStack_12 = NULL;
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = pvStack_12;
    if (iVar2 == 0x0 && (void *)pvVar3 == NULL) break;
    iVar2 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)(void *)pvVar3 + 0x4),
                       in_stack_00000008);
    pvVar1 = pvVar3;
  } while (iVar2 != 0x0);
  pvStack_12 = pvVar1;
  return (void *)pvStack_12;
}



// Searches the linked list stored at offset 0x12 of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_12_by_String_Logic(void *this,char *search_name)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_00000008;
  void *pvStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == NULL)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)this + 0x12));
  pvStack_12 = NULL;
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = pvStack_12;
    if (iVar2 == 0x0 && (void *)pvVar3 == NULL) break;
    iVar2 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)(void *)pvVar3 + 0x4),
                       in_stack_00000008);
    pvVar1 = pvVar3;
  } while (iVar2 != 0x0);
  pvStack_12 = pvVar1;
  return (void *)pvStack_12;
}



// Searches the linked list stored at offset 10 (0xA) of the input structure for an item
// whose associated name string (offset 4) matches the provided string `param_2`. Uses
// case-sensitive string comparison.

void * __stdcall16far
UI_Find_Item_In_List_Offset_0A_by_String_Logic(void *this,char *search_name)
{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  char *in_stack_00000008;
  void *pvStack_12;
  undefined1 local_a [0x8];
  
  if (in_stack_00000008 == NULL)
  {
    return NULL;
  }
  init_long_pair(local_a,*(long *)((int)this + 0xa));
  pvStack_12 = NULL;
  do
  {
    pvVar3 = (void *)get_next_list_item(local_a);
    iVar2 = (int)((ulong)pvVar3 >> 0x10);
    pvVar1 = pvStack_12;
    if (iVar2 == 0x0 && (void *)pvVar3 == NULL) break;
    iVar2 = strcmp_case_sensitive
                      ((byte *)*(undefined4 *)((int)(void *)pvVar3 + 0x4),
                       in_stack_00000008);
    pvVar1 = pvVar3;
  } while (iVar2 != 0x0);
  pvStack_12 = pvVar1;
  return (void *)pvStack_12;
}



u16 __stdcall16far
UI_Object_Collection_Serialize_to_File_ba38(u32 param_1,void *param_2)
{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  void *unaff_SS;
  u32 local_2a;
  u16 local_1e;
  undefined1 local_14 [0x8];
  u16 local_c;
  u32 local_a;
  u16 local_6;
  
  iVar1 = file_context_write_footer_marker_logic((void *)param_2);
  if (iVar1 != 0x0)
  {
    uVar3 = (undefined2)(param_1 >> 0x10);
    iVar2 = (int)param_1;
    local_c = *(u16 *)(iVar2 + 0x22);
    iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
    if (iVar1 != 0x0)
    {
      if (*(long *)(iVar2 + 0xa) == 0x0)
      {
        local_c = 0x0;
      }
      else
      {
        local_c = *(u16 *)((int)*(undefined4 *)(iVar2 + 0xa) + 0x8);
      }
      local_1e = local_c;
      iVar1 = file_write_check((long)param_2,&local_1e,unaff_SS);
      if (iVar1 != 0x0)
      {
        init_long_pair(local_14,*(long *)(iVar2 + 0xa));
        do
        {
          local_a = get_next_list_item(local_14);
          if ((int)(local_a >> 0x10) == 0x0 && (int)local_a == 0x0)
          {
            return 0x1;
          }
          iVar1 = file_context_write_string_with_terminator_logic
                            ((void *)param_2,(char *)((ulong)param_2 >> 0x10));
          if (iVar1 == 0x0) break;
          local_6 = *(u16 *)((int)local_a + 0x8);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
          if (iVar1 == 0x0) break;
          local_2a = *(u32 *)((int)local_a + 0xa);
          iVar1 = file_write_check((long)param_2,&local_2a,unaff_SS);
          if (iVar1 == 0x0) break;
          local_6 = *(u16 *)((int)local_a + 0xe);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
        } while (iVar1 != 0x0);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



// WARNING: Variable defined which should be unmapped: local_13c

u16 __stdcall16far
UI_Object_Collection_Deserialize_from_File_bb5e(u32 param_1,void *param_2)
{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  astruct_491 *this;
  void *pvVar4;
  char *pcVar5;
  void *handle_wrapper;
  uint in_DX;
  uint uVar6;
  uint uVar7;
  uint extraout_DX;
  void *unaff_SS;
  u32 local_13c;
  u32 local_122;
  u16 local_11e;
  u32 local_11c;
  char local_118 [0x100];
  u16 local_18;
  u16 local_14;
  u16 local_10;
  u32 local_8;
  
  if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
  {
    return 0x1;
  }
  iVar2 = file_context_find_footer_marker_logic();
  if (iVar2 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    iVar2 = (int)param_1;
    handle_wrapper = (void *)(param_1 >> 0x10);
    iVar3 = file_read_check((long)param_2,(void *)(iVar2 + 0x22),handle_wrapper);
    if ((iVar3 != 0x0) &&
       (iVar3 = file_read_check((long)param_2,&local_10,unaff_SS), iVar3 != 0x0))
    {
      if (local_10 == 0x0)
      {
        return 0x1;
      }
      this = allocate_memory(CONCAT22((undefined2)local_13c,0xc));
      uVar6 = in_DX | (uint)this;
      if (uVar6 == 0x0)
      {
        pvVar4 = NULL;
        uVar6 = 0x0;
      }
      else
      {
        pvVar4 = construct_object_with_vtable(this,in_DX);
      }
      *(undefined2 *)(iVar2 + 0xa) = pvVar4;
      *(uint *)(iVar2 + 0xc) = uVar6;
      local_11e = 0x0;
      while( true )
      {
        if (local_10 <= local_11e)
        {
          return 0x1;
        }
        pvVar4 = allocate_memory(CONCAT22((undefined2)local_13c,0x12));
        uVar6 |= (uint)pvVar4;
        if (uVar6 == 0x0)
        {
          pvVar4 = NULL;
          uVar6 = 0x0;
        }
        else
        {
          pvVar4 = UI_Element_Subclass_ctor_BDC4(pvVar4);
        }
        local_11c = CONCAT22(uVar6,pvVar4);
        pcVar5 = local_118;
        uVar7 = uVar6;
        file_context_read_null_terminated_string_logic
                  ((void *)param_2,(char *)((ulong)param_2 >> 0x10));
        if ((((pcVar5 == NULL) ||
             (iVar3 = file_read_check((long)param_2,&local_14,unaff_SS), iVar3 == 0x0))
            || (iVar3 = file_read_check((long)param_2,&local_8,unaff_SS), iVar3 == 0x0))
           || (iVar3 = file_read_check((long)param_2,&local_18,unaff_SS), iVar3 == 0x0))
        break;
        pcVar5 = strdup_allocate(local_118);
        *(undefined2 *)((int)pvVar4 + 0x4) = pcVar5;
        *(uint *)((int)pvVar4 + 0x6) = uVar7;
        *(u16 *)((int)pvVar4 + 0x8) = local_14;
        *(u32 *)((int)pvVar4 + 0xa) = local_8;
        *(u16 *)((int)pvVar4 + 0xe) = local_18;
        puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)(iVar2 + 0xa) + 0x8);
        (*(code *)*puVar1)();
        local_11e += 0x1;
        uVar6 = extraout_DX;
      }
      if (local_11c != 0x0)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)local_11c)
                  (0x1000,pvVar4,uVar6,0x1,pvVar4,uVar6);
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



void * __stdcall16far
UI_Element_Subclass_BDCC_dtor_Scalar_Deleting_bd02
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDCC(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Element_Subclass_BDC8_dtor_Scalar_Deleting_bd28
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDC8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



void * __stdcall16far
UI_Element_Subclass_BDC8_dtor_Scalar_Deleting_bd4e
          (void *param_1,u16 param_2,byte param_3)
{
  UI_Element_Subclass_dtor_BDC8(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xBDC8.

void * __stdcall16far UI_Element_Subclass_scalar_dtor_BDC8(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_BDC8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Scalar deleting destructor for the UI element subclass with vtable 0xBDC8. Duplicate
// instance.

void * __stdcall16far
UI_Element_Subclass_scalar_dtor_BDC8_duplicate(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Element_Subclass_dtor_BDC8(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}
