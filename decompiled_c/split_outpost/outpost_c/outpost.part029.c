/*
 * Source: outpost.c
 * Chunk: 29/117
 * Original lines: 32335-33509
 * Boundaries: top-level declarations/definitions only
 */




// Returns standard dialog dimensions (width 0x73, height 10) through output pointers.

void __stdcall16far get_standard_dialog_size_logic(int *width_out,int *height_out)
{
  undefined2 *in_stack_00000008;
  undefined2 *in_stack_0000000c;
  
  *in_stack_0000000c = 0xa;
  *in_stack_00000008 = 0x73;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Refreshes Colony Morale state. Loads resource objects via global manager at 1050:14CC
// and invokes virtual destructors.

void __stdcall16far UI_Colony_Morale_Dialog_Refresh_Logic(void *this)
{
  undefined4 *puVar1;
  undefined2 *puVar2;
  void *pvVar3;
  int extraout_DX;
  int iVar4;
  undefined2 uVar5;
  undefined2 in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x30) =
       *(undefined2 *)((int)*(undefined4 *)((int)this + 0x12) + 0x8);
  if (*(long *)((int)this + 0x32) != 0x0)
  {
    uVar5 = (undefined2)
            ((ulong)*(undefined4 *)*(undefined4 *)((int)this + 0x12) >> 0x10);
    iVar4 = (int)*(undefined4 *)*(undefined4 *)((int)this + 0x12);
    puVar1 = (undefined4 *)*(long *)(iVar4 + 0x4);
    *(undefined4 *)(iVar4 + 0x4) = *(undefined4 *)((int)this + 0x32);
    if (puVar1 != NULL)
    {
      puVar2 = (undefined2 *)(undefined2 *)*puVar1;
      (*(code *)*puVar2)();
    }
    *(undefined4 *)((int)this + 0x32) = 0x0;
  }
  iVar4 = *(int *)((int)this + 0x18);
  if (iVar4 != 0x0 || (undefined4 *)*(int *)((int)this + 0x16) != NULL)
  {
    puVar2 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x16);
    (*(code *)*puVar2)();
    iVar4 = extraout_DX;
  }
  pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                     ((void *)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10));
  *(undefined2 *)((int)this + 0x16) = pvVar3;
  *(int *)((int)this + 0x18) = iVar4;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined2 *)((int)this + 0x2e) = 0x0;
  return;
}



// Scalar deleting destructor for the Colony Morale dialog class.

void * __stdcall16far UI_Colony_Morale_Dialog_scalar_dtor(void *this,byte flags)
{
  byte in_stack_00000008;
  
  UI_Colony_Morale_Dialog_dtor(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes UI_Special_Dialog_Subclass vtable to 1010:5099. Registers global instance
// at 1050:4230. Loads resource ID 0x1B3.

void __stdcall16far
UI_Special_Dialog_Subclass_ctor_init_5099(void *this,int segment,int id)
{
  Build_Site_Object_Base_ctor((long)CONCAT22(segment,this),id);
  *(char **)CONCAT22(segment,this) =
       (char *)s_SCInternalPutBldg2_site_0x_08lx__1050_5099 + 0x1;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  Build_Site_Object_Initialize_Vtable_and_Resource((long)CONCAT22(segment,this),0x1b3);
  _p_GlobalPaletteObject = (void *)CONCAT22(segment,this);
  return;
}



// Scalar deleting destructor for the specialized dialog subclass (5099).

void * __stdcall16far UI_Special_Dialog_Subclass_scalar_dtor_5099(void *this,byte flags)
{
  undefined1 in_stack_00000007;
  byte in_stack_00000008;
  
  _this = CONCAT13(in_stack_00000007,CONCAT12(flags,this));
  Build_Site_Object_dtor_Internal(_this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Initializes String_Wrapper_Subclass vtable to 1010:53F4 (base 1010:2014).

void * __stdcall16far String_Wrapper_Subclass_ctor_53F4(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined2 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xc) = 0x0;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x53f4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
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



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Validates resource quantities using global simulator state at 1050:65E2. Performs
// cross-group resource summation.

int __stdcall16far UI_Resource_Quantity_Validator_Logic(void *this,int quantity)
{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  uint in_stack_00000008;
  
  if (*(long *)((int)this + 0x16) != 0x0)
  {
    pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)this + 0x16));
    iVar1 = (int)((ulong)pvVar2 >> 0x10);
    if (iVar1 != 0x0 || (void *)pvVar2 != NULL)
    {
      pvVar2 = (void *)*(undefined4 *)((int)(void *)pvVar2 + 0x1f6);
      lVar3 = Colony_Calculate_Sum_Resource_Group_38f2(pvVar2,0x3);
      lVar4 = Colony_Calculate_Sum_Resource_Group_38f2(pvVar2,0x4);
      iVar1 = (int)((ulong)lVar4 >> 0x10) + (int)((ulong)lVar3 >> 0x10) +
              (uint)CARRY2((uint)lVar4,(uint)lVar3);
      if ((0x0 < iVar1) ||
         ((-0x1 < iVar1 && (in_stack_00000008 <= (uint)lVar4 + (uint)lVar3))))
      {
        *(uint *)((int)this + 0xa) = in_stack_00000008;
        return 0x1;
      }
    }
  }
  return 0x0;
}



// Iterates through the global entity collection and populates a dynamically allocated
// array at offset 0xC with 32-bit entity identifiers. Filters out specific magic types
// (0x8000002).

void __stdcall16far
UI_Populate_Entity_ID_List_at_Offset_C_Logic(void *this,int *count_out)
{
  void *pvVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 unaff_SI;
  int iVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  void *pvVar7;
  undefined2 *in_stack_00000008;
  undefined4 uStack_2c;
  undefined1 local_18 [0xc];
  undefined2 uStack_c;
  void *pvStack_6;
  
  pvStack_6 = NULL;
  pvVar7 = Simulator_World_Iterator_ctor_init_dc52
                     ((undefined1 *)CONCAT22(unaff_SS,local_18),0x1,0x0,0x400);
  uVar2 = (undefined2)((ulong)pvVar7 >> 0x10);
  *(undefined2 *)((int)this + 0x10) = uStack_c;
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xc));
  pvVar1 = allocate_memory(CONCAT22(unaff_SI,*(int *)((int)this + 0x10) << 0x2));
  *(undefined2 *)((int)this + 0xc) = pvVar1;
  *(undefined2 *)((int)this + 0xe) = uVar2;
  *(undefined2 *)((int)this + 0x10) = 0x0;
  while( true )
  {
    pvStack_6 = Simulator_World_Iterator_Get_Next_Entity_e4ec
                          ((undefined1 *)CONCAT22(unaff_SS,local_18));
    iVar3 = (int)((ulong)pvStack_6 >> 0x10);
    pvVar1 = (void *)pvStack_6;
    if (iVar3 == 0x0 && pvVar1 == NULL) break;
    if (*(long *)((int)pvVar1 + 0x200) != 0x8000002)
    {
      uVar2 = *(undefined2 *)((int)pvVar1 + 0x6);
      uVar6 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xc) >> 0x10);
      iVar5 = (int)*(undefined4 *)((int)this + 0xc);
      iVar4 = *(int *)((int)this + 0x10) * 0x4;
      uStack_2c = (int *)CONCAT22(count_out,(int *)((int)this + 0x10));
      *(undefined2 *)(iVar4 + iVar5) = *(undefined2 *)((int)pvVar1 + 0x4);
      *(undefined2 *)(iVar4 + iVar5 + 0x2) = uVar2;
      *uStack_2c = *uStack_2c + 0x1;
    }
  }
  *in_stack_00000008 = *(undefined2 *)((int)this + 0x10);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Formats entity names by referencing global simulator state at 1050:65E2 and loading
// report component strings via 1050:14CC. Concatenates labels from far pointer
// 1050:13AC.

char * __stdcall16far
UI_Format_Entity_Name_with_Category_Logic_maybe(int arg1,int arg2,long entity_id)
{
  char *pcVar1;
  uint uVar2;
  void *this_ptr;
  char *pcVar3;
  undefined2 in_stack_0000fff6;
  
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)entity_id);
  uVar2 = (uint)((ulong)this_ptr >> 0x10) | (uint)(void *)this_ptr;
  if (uVar2 == 0x0)
  {
    return NULL;
  }
  pcVar1 = allocate_memory(CONCAT22(in_stack_0000fff6,0x80));
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(pcVar1,0x80),
             CONCAT22(0x5eb,uVar2));
  strcat_append((char *)CONCAT22(uVar2,pcVar1),(char *)0x105013ac);
  pcVar3 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  strcat_append((char *)CONCAT22(uVar2,pcVar1),pcVar3);
  return pcVar1;
}



void __stdcall16far UI_Set_Entity_ID_at_Offset_12_by_Name_Logic(void *this,char *name)
{
  long lVar1;
  
  lVar1 = UI_Find_Entity_ID_by_Formatted_Name_Logic(this,name);
  *(undefined2 *)((int)this + 0x12) = (int)lVar1;
  *(undefined2 *)((int)this + 0x14) = (int)((ulong)lVar1 >> 0x10);
  return;
}



void __stdcall16far UI_Set_Entity_ID_at_Offset_16_by_Name_Logic(void *this,char *name)
{
  long lVar1;
  
  lVar1 = UI_Find_Entity_ID_by_Formatted_Name_Logic(this,name);
  *(undefined2 *)((int)this + 0x16) = (int)lVar1;
  *(undefined2 *)((int)this + 0x18) = (int)((ulong)lVar1 >> 0x10);
  return;
}



// Searches the global entity collection for an ID that matches a provided formatted
// name string. It populates a temporary list, iterates through it, formats each name
// for comparison, and returns the 32-bit ID if a match is found.

long __stdcall16far UI_Find_Entity_ID_by_Formatted_Name_Logic(void *this,char *name)
{
  long entity_id;
  char *ptr;
  int iVar1;
  undefined2 in_DX;
  byte *in_stack_00000008;
  uint uStack_6;
  
  UI_Populate_Entity_ID_List_at_Offset_C_Logic(this,(int *)name);
  uStack_6 = 0x0;
  while( true )
  {
    if (*(uint *)((int)this + 0x10) <= uStack_6)
    {
      return 0x0;
    }
    entity_id = *(long *)((int)*(undefined4 *)((int)this + 0xc) + uStack_6 * 0x4);
    ptr = UI_Format_Entity_Name_with_Category_Logic_maybe((int)this,(int)name,entity_id)
    ;
    iVar1 = strcmp_case_sensitive(in_stack_00000008,(char *)CONCAT22(in_DX,ptr));
    if (iVar1 == 0x0) break;
    free_if_not_null(ptr);
    uStack_6 += 0x1;
  }
  return entity_id;
}



void * __stdcall16far String_Wrapper_Subclass_scalar_dtor_53F4(void *this,byte flags)
{
  byte in_stack_00000008;
  
  String_Wrapper_Subclass_dtor_53F4(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes Configuration_Manager vtable to 1010:6312. Loads "OUTPOST.INI" (string
// 0x578) via 1050:14CC. References global settings at 1050:0ED0 and 1050:13B0.
// Instantiates sub-objects with vtables 1008:5BC4 and 1010:6322.

void * __stdcall16far
Configuration_Manager_ctor_init_6312_Logic(void *this,int segment,int id)
{
  undefined2 *puVar1;
  void *pvVar2;
  char *pcVar3;
  int iVar4;
  astruct_491 *this_00;
  undefined2 *puVar5;
  uint in_DX;
  uint uVar6;
  uint uVar7;
  uint extraout_DX;
  uint extraout_DX_00;
  undefined1 *puVar8;
  undefined2 unaff_SI;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 unaff_SS;
  long lVar11;
  char *delimiters;
  char local_134 [0x102];
  astruct_491 *paStack_32;
  uint uStack_30;
  char *pcStack_2e;
  uint uStack_2c;
  int iStack_2a;
  int iStack_1a;
  uint uStack_18;
  int iStack_16;
  undefined2 *puStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_a;
  char *pcStack_8;
  uint uStack_4;
  
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined4 *)((int)this + 0xe) = 0x0;
  *(undefined4 *)((int)this + 0x12) = 0x0;
  *(undefined4 *)((int)this + 0x16) = 0x0;
  *(undefined4 *)((int)this + 0x1a) = 0x0;
  *(undefined2 *)((int)this + 0x62) = 0x0;
  *(undefined4 *)((int)this + 0x64) = 0x0;
  *(undefined4 *)((int)this + 0x68) = 0x0;
  *(undefined4 *)((int)this + 0x6c) = 0x0;
  *(undefined2 *)((int)this + 0x70) = 0x1;
  *(undefined2 *)((int)this + 0x7a) = 0x0;
  *(undefined2 *)((int)this + 0x7c) = 0x0;
  *(undefined2 *)((int)this + 0x7e) = 0x0;
  *(undefined2 *)((int)this + 0x80) = 0x0;
  *(undefined2 *)((int)this + 0x82) = 0x1;
  *(undefined2 *)CONCAT22(segment,this) = 0x6312;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Component_Init_State_Logic_6034(this);
  pvVar2 = allocate_memory(CONCAT22(unaff_SI,0x101));
  *(undefined2 *)((int)this + 0xe) = pvVar2;
  *(uint *)((int)this + 0x10) = in_DX;
  dos_get_cwd_on_current_drive_wrapper_far
            ((char *)*(undefined2 *)((int)this + 0xe),in_DX);
  uStack_4 = strlen_get_length((char *)*(undefined4 *)((int)this + 0xe));
  uVar9 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10);
  puVar8 = (undefined1 *)((int)*(undefined4 *)((int)this + 0xe) + uStack_4);
  if (puVar8[-0x1] != '\\')
  {
    *puVar8 = 0x5c;
    *(undefined1 *)((int)*(undefined4 *)((int)this + 0xe) + uStack_4 + 0x1) = 0x0;
  }
  pcStack_8 = Resource_Manager_LoadString_to_Internal_Buffer
                        ((int)_p_GlobalResourceManager,
                         (int)((ulong)_p_GlobalResourceManager >> 0x10),0x578);
  strcat_append((char *)*(undefined4 *)((int)this + 0xe),
                (char *)CONCAT22(in_DX,pcStack_8));
  pcVar3 = strdup_allocate((char *)(char *)*(undefined4 *)((int)this + 0xe));
  *(undefined2 *)((int)this + 0xa) = pcVar3;
  *(uint *)((int)this + 0xc) = in_DX;
  GetPrivateProfileString16
            ((void *)CONCAT22(in_DX,(void *)*(undefined2 *)((int)this + 0xa)),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13c01050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    iStack_16 = atoi_wrapper_far((char *)(char *)*(undefined4 *)((int)this + 0xe));
    lVar11 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
    in_DX = (uint)((ulong)lVar11 >> 0x10);
    iStack_1a = (int)lVar11;
    iStack_a = *(int *)(iStack_1a + 0xa);
    iStack_c = *(int *)(iStack_1a + 0xc);
    *(uint *)((int)this + 0x62) = (uint)(iStack_16 != iStack_a);
    uStack_18 = in_DX;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13de1050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x80) = 0x1;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13d21050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x74) = 0x0;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13d81050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x72) = 0x0;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13cc1050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x1e) = 0x0;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13e81050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x20) = 0x0;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x14661050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  uVar6 = in_DX;
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcStack_2e = (char *)atoi_wrapper_far((char *)(char *)*(undefined4 *)
                                                           ((int)this + 0xe));
    uVar6 = 0x0;
    uStack_2c = in_DX;
    if (in_DX != 0x0 || pcStack_2e != NULL)
    {
      *(int *)((int)this + 0x76) = (int)pcStack_2e;
      *(uint *)((int)this + 0x78) = in_DX;
      uVar6 = in_DX;
    }
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x146c1050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if ((*(char *)*(undefined4 *)((int)this + 0xe) != '\0') &&
     (iVar4 = stricmp_case_insensitive_far
                        ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                         (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10)),
     iVar4 == 0x0))
  {
    *(undefined2 *)((int)this + 0x7a) = 0x1;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x147c1050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcVar3 = strdup_allocate((char *)(char *)*(undefined4 *)((int)this + 0xe));
    *(undefined2 *)((int)this + 0x1a) = pcVar3;
    *(uint *)((int)this + 0x1c) = uVar6;
  }
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x14861050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcVar3 = strdup_allocate((char *)(char *)*(undefined4 *)((int)this + 0xe));
    *(undefined2 *)((int)this + 0x68) = pcVar3;
    *(uint *)((int)this + 0x6a) = uVar6;
  }
  uVar9 = 0x1050;
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x148e1050,
             (void *)0x13b01050,(dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    uVar9 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10);
    pcVar3 = strdup_allocate((char *)(char *)*(undefined4 *)((int)this + 0xe));
    *(undefined2 *)((int)this + 0x6c) = pcVar3;
    *(uint *)((int)this + 0x6e) = uVar6;
  }
  if (*(int *)((int)this + 0x62) == 0x0)
  {
    uVar9 = 0x4;
    pcStack_2e = (char *)GetSystemMetrics16(0x4);
    iStack_2a = 0x1;
    do
    {
      Configuration_Manager_Read_Indexed_Values_Logic(this,segment);
      if ((((*(int *)((int)this + iStack_2a * 0x8 + 0x22) < 0x0) ||
           (*(int *)((int)this + iStack_2a * 0x8 + 0x24) < 0x0)) ||
          (iStack_a - (int)pcStack_2e < *(int *)((int)this + iStack_2a * 0x8 + 0x22)))
         || (iStack_c - (int)pcStack_2e < *(int *)((int)this + iStack_2a * 0x8 + 0x24)))
      {
        memset_far((void *)((int)this + iStack_2a * 0x8 + 0x22),segment,0x0);
      }
      iStack_2a += 0x1;
    } while (iStack_2a < 0x8);
  }
  this_00 = allocate_memory(CONCAT22(uVar9,0xc));
  _paStack_32 = (astruct_491 *)CONCAT22(uVar6,this_00);
  uVar7 = uVar6 | (uint)this_00;
  if (uVar7 == 0x0)
  {
    pvVar2 = NULL;
    uVar7 = 0x0;
  }
  else
  {
    pvVar2 = construct_object_with_vtable(this_00,uVar6);
  }
  *(undefined2 *)((int)this + 0x64) = pvVar2;
  *(uint *)((int)this + 0x66) = uVar7;
  dos_get_cwd_on_current_drive_wrapper_far
            ((char *)(char *)*(undefined4 *)((int)this + 0xe),
             (int)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10));
  uStack_4 = strlen_get_length((char *)*(undefined4 *)((int)this + 0xe));
  uVar10 = (undefined2)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10);
  puVar8 = (undefined1 *)((int)*(undefined4 *)((int)this + 0xe) + uStack_4);
  if (puVar8[-0x1] != '\\')
  {
    *puVar8 = 0x5c;
    *(undefined1 *)((int)*(undefined4 *)((int)this + 0xe) + uStack_4 + 0x1) = 0x0;
  }
  pcVar3 = strdup_allocate((char *)(char *)*(undefined4 *)((int)this + 0xe));
  uStack_10 = (char *)CONCAT22(uVar7,pcVar3);
  puVar5 = allocate_memory(CONCAT22(uVar9,0x8));
  _paStack_32 = (astruct_491 *)CONCAT22(uVar7,puVar5);
  if (uVar7 == 0x0 && puVar5 == NULL)
  {
    puStack_14 = NULL;
  }
  else
  {
    *(char **)_paStack_32 = (char *)s_1_1050_389a;
    puVar5[0x1] = 0x1008;
    *(char **)(puVar5 + 0x2) = uStack_10;
    *(undefined2 *)_paStack_32 = 0x6322;
    puVar5[0x1] = 0x1010;
    puStack_14 = (undefined2 *)_paStack_32;
  }
  uVar9 = (undefined2)*(undefined4 *)((int)this + 0x64);
  puVar1 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0x64) + 0x4);
  (*(code *)*puVar1)(0x1000,uVar9,
                     (int)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10),
                     (undefined2 *)puStack_14,(int)((ulong)puStack_14 >> 0x10));
  uVar6 = extraout_DX;
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),(void *)0x13f01050,
             (void *)0x13b01050,(dword *)CONCAT22(uVar9,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcVar3 = (char *)(char *)*(undefined4 *)((int)this + 0xe);
    delimiters = (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10);
    while (pcStack_2e = strtok_far_optimized_with_state(pcVar3,delimiters),
          uVar6 != 0x0 || pcStack_2e != NULL)
    {
      uStack_2c = uVar6;
      strcpy_optimized((char *)CONCAT22(unaff_SS,local_134),
                       (char *)CONCAT22(uVar6,pcStack_2e));
      uVar7 = strlen_get_length((char *)CONCAT22(unaff_SS,local_134));
      uStack_4 = uVar7;
      if (local_134[uVar7 - 0x1] != '\\')
      {
        local_134[uVar7] = '\\';
        local_134[uVar7 + 0x1] = '\0';
      }
      pcVar3 = strdup_allocate(local_134);
      uStack_10 = (char *)CONCAT22(uVar6,pcVar3);
      puVar5 = allocate_memory(CONCAT22(uVar9,0x8));
      _paStack_32 = (astruct_491 *)CONCAT22(uVar6,puVar5);
      if (uVar6 == 0x0 && puVar5 == NULL)
      {
        puStack_14 = NULL;
      }
      else
      {
        *(char **)_paStack_32 = (char *)s_1_1050_389a;
        puVar5[0x1] = 0x1008;
        *(char **)(puVar5 + 0x2) = uStack_10;
        *(undefined2 *)_paStack_32 = 0x6322;
        puVar5[0x1] = 0x1010;
        puStack_14 = (undefined2 *)_paStack_32;
      }
      puVar1 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)((int)this + 0x64) + 0x8);
      (*(code *)*puVar1)(0x1000,(int)*(undefined4 *)((int)this + 0x64),
                         (int)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10),
                         (undefined2 *)puStack_14,(int)((ulong)puStack_14 >> 0x10));
      pcVar3 = NULL;
      delimiters = NULL;
      uVar6 = extraout_DX_00;
    }
  }
  return this;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Configuration_Manager destructor. Resets vtable to 1010:6312 and saves state to
// OUTPOST.INI using templates in segment 1050. Invokes virtual destructor for
// sub-object at offset 100.

void __stdcall16far Configuration_Manager_dtor_6312_Logic(void *this)
{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined2 uVar4;
  long lVar5;
  int in_stack_00000006;
  int iStack_c;
  
  *_this = 0x6312;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  lVar5 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x48);
  uVar4 = (undefined2)((ulong)lVar5 >> 0x10);
  sprintf_wrapper(*(undefined4 *)((int)this + 0xe),0x149c,0x1050,
                  *(undefined2 *)((int)lVar5 + 0xa),*(undefined2 *)((int)lVar5 + 0xc));
  if (*(int *)((int)this + 0x80) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_falseMap_1050_13de,s_general_1050_13b0);
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),
             (void *)*(undefined4 *)((int)this + 0xe),s_rez_1050_13c0,
             s_general_1050_13b0);
  if (*(int *)((int)this + 0x1e) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_anims_1050_13cc,s_general_1050_13b0);
  if (*(int *)((int)this + 0x74) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_music_1050_13d2,s_general_1050_13b0);
  if (*(int *)((int)this + 0x72) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_sound_1050_13d8,s_general_1050_13b0);
  if (*(int *)((int)this + 0x20) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_movies_1050_13e8,s_general_1050_13b0);
  sprintf_wrapper(*(undefined4 *)((int)this + 0xe),0x14a2,0x1050,
                  (int)*(undefined4 *)((int)this + 0x76),
                  (int)((ulong)*(undefined4 *)((int)this + 0x76) >> 0x10));
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),
             (void *)*(undefined4 *)((int)this + 0xe),s_turns_1050_1466,
             s_general_1050_13b0);
  if (*(int *)((int)this + 0x7a) == 0x0)
  {
    pcVar3 = (char *)s_off_1050_13c8;
  }
  else
  {
    pcVar3 = (char *)s_on_1050_13c4;
  }
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),(char *)CONCAT22(0x1050,pcVar3),
             s_turnsDlgStatus_1050_146c,s_general_1050_13b0);
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),
             (void *)*(undefined4 *)((int)this + 0x1a),s_savePath_1050_147c,
             s_general_1050_13b0);
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),
             (void *)*(undefined4 *)((int)this + 0x68),s_aiName_1050_1486,
             s_general_1050_13b0);
  WritePrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),
             (void *)*(undefined4 *)((int)this + 0x6c),s_playerName_1050_148e,
             s_general_1050_13b0);
  iStack_c = 0x1;
  do
  {
    switchD_1010:2ab5::Configuration_Manager_Write_Indexed_Values_Logic
              (this,in_stack_00000006);
    iStack_c += 0x1;
  } while (iStack_c < 0x8);
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xa));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xe));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x12));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x16));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  puVar1 = (undefined4 *)*(int *)((int)this + 0x64);
  iVar2 = *(int *)((int)this + 0x66);
  if (iVar2 != 0x0 || puVar1 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar1)(0x1000,puVar1,iVar2,0x1);
  }
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x68));
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x6c));
  Base_Object_dtor_2014_Logic(this);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Signals resource 0x2E and triggers cleanup of report grid collection using global
// resource manager at 1050:0ED0.

void __stdcall16far
Resource_Manager_Signal_Resource_2E_Logic_maybe(void *this,int signal)
{
  long this_ref;
  int in_stack_00000008;
  
  *(int *)((int)this + 0x1e) = in_stack_00000008;
  if (in_stack_00000008 == 0x0)
  {
    this_ref = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2e);
    UI_Report_Grid_Manager_Cleanup_Collection_Logic(this_ref);
  }
  return;
}



u16 __stdcall16far
UI_Global_Version_and_Field_82_Serialize_to_File_5dc6(u32 param_1,void *param_2)
{
  int iVar1;
  void *unaff_SS;
  void *this;
  char *pcStack_12;
  u16 local_c;
  u16 local_6;
  
  this = (void *)param_2;
  pcStack_12 = (char *)((ulong)param_2 >> 0x10);
  iVar1 = file_context_write_footer_marker_logic(this);
  if (iVar1 != 0x0)
  {
    iVar1 = file_context_write_string_with_terminator_logic(this,pcStack_12);
    if (iVar1 != 0x0)
    {
      iVar1 = file_context_write_string_with_terminator_logic(this,pcStack_12);
      if (iVar1 != 0x0)
      {
        local_c = (u16)g_ModeVersion_13AE;
        iVar1 = file_write_check((long)param_2,&local_c,unaff_SS);
        if (iVar1 != 0x0)
        {
          local_6 = *(u16 *)((int)param_1 + 0x82);
          iVar1 = file_write_check((long)param_2,&local_6,unaff_SS);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d0;
  }
  return 0x0;
}



u16 __stdcall16far UI_Global_Data_Deserialize_from_File_5e56(u32 param_1,void *param_2)
{
  int iVar1;
  char *pcVar2;
  int iVar3;
  undefined2 in_DX;
  void *handle_wrapper;
  void *unaff_SS;
  char *buffer;
  u16 local_404;
  char local_402 [0x400];
  
  iVar1 = file_context_find_footer_marker_logic();
  if (iVar1 == 0x0)
  {
    g_LastFileErrorMsgID = (undefined *)0x6d4;
  }
  else
  {
    pcVar2 = local_402;
    buffer = (char *)((ulong)param_2 >> 0x10);
    file_context_read_null_terminated_string_logic((void *)param_2,buffer);
    if (pcVar2 != NULL)
    {
      pcVar2 = strdup_allocate(local_402);
      handle_wrapper = (void *)(param_1 >> 0x10);
      iVar1 = (int)param_1;
      *(undefined2 *)(iVar1 + 0x68) = pcVar2;
      *(undefined2 *)(iVar1 + 0x6a) = in_DX;
      pcVar2 = local_402;
      file_context_read_null_terminated_string_logic((void *)param_2,buffer);
      if (pcVar2 != NULL)
      {
        pcVar2 = strdup_allocate(local_402);
        *(undefined2 *)(iVar1 + 0x6c) = pcVar2;
        *(undefined2 *)(iVar1 + 0x6e) = in_DX;
        iVar3 = file_read_check((long)param_2,&local_404,unaff_SS);
        if (iVar3 != 0x0)
        {
          g_ModeVersion_13AE = (undefined *)local_404;
          if ((int)PTR_DAT_1050_0000_1050_0312 < 0x2)
          {
            return 0x1;
          }
          iVar1 = file_read_check((long)param_2,(void *)(iVar1 + 0x82),handle_wrapper);
          if (iVar1 != 0x0)
          {
            return 0x1;
          }
        }
      }
    }
    g_LastFileErrorMsgID = (undefined *)0x6d2;
  }
  return 0x0;
}



void __stdcall16far UI_Component_Set_String_at_Offset_16_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x16));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0x16) = pcVar1;
  *(undefined2 *)((int)this + 0x18) = in_DX;
  return;
}



void __stdcall16far UI_Component_Set_String_at_Offset_12_Logic_2(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x12));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0x12) = pcVar1;
  *(undefined2 *)((int)this + 0x14) = in_DX;
  return;
}



// Retrieves a far pointer to an 8-byte structure within an indexed array at offset
// 0x22, provided the status fields at 0x26/0x28 are non-zero.

void * __stdcall16far
UI_Component_Get_Indexed_Struct_at_Offset_22_Logic(void *this,int index)
{
  int in_stack_0000000a;
  
  if ((*(int *)((int)this + in_stack_0000000a * 0x8 + 0x26) == 0x0) &&
     (*(int *)((int)this + in_stack_0000000a * 0x8 + 0x28) == 0x0))
  {
    return NULL;
  }
  return (void *)((int)this + in_stack_0000000a * 0x8 + 0x22);
}



// Sets two 32-bit values within an indexed structure array at offset 0x22.

void __stdcall16far
UI_Component_Set_Indexed_Struct_at_Offset_22_Logic(void *this,long *data,int index)
{
  undefined4 *in_stack_0000000a;
  undefined2 in_stack_0000000c;
  int in_stack_0000000e;
  
  *(undefined4 *)((int)this + in_stack_0000000e * 0x8 + 0x22) = *in_stack_0000000a;
  *(undefined4 *)((int)this + in_stack_0000000e * 0x8 + 0x26) = in_stack_0000000a[0x1];
  return;
}



// Setter for a duplicated string buffer at offset 0x68. Frees any existing buffer
// before allocation.

void __stdcall16far UI_Component_Set_String_at_Offset_68_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x68));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0x68) = pcVar1;
  *(undefined2 *)((int)this + 0x6a) = in_DX;
  return;
}



// Setter for a duplicated string buffer at offset 0x6C. Frees any existing buffer
// before allocation.

void __stdcall16far UI_Component_Set_String_at_Offset_6C_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x6c));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0x6c) = pcVar1;
  *(undefined2 *)((int)this + 0x6e) = in_DX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Initializes internal UI state. Loads strings 0x62F and 0x630 via global manager at
// 1050:14CC. Performs zero-initialization of an array at offset 0x22.

void __stdcall16far UI_Component_Init_State_Logic_6034(void *this)
{
  char *pcVar1;
  undefined2 in_DX;
  int in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x1e) = 0x1;
  *(undefined2 *)((int)this + 0x20) = 0x1;
  *(undefined2 *)((int)this + 0x72) = 0x1;
  *(undefined2 *)((int)this + 0x74) = 0x1;
  UI_Component_Set_Offset_76_to_5_Logic(this);
  memset_far((void *)((int)this + 0x22),in_stack_00000006,0x0);
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x630);
  *(undefined2 *)((int)this + 0x68) = pcVar1;
  *(undefined2 *)((int)this + 0x6a) = in_DX;
  pcVar1 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x62f);
  *(undefined2 *)((int)this + 0x6c) = pcVar1;
  *(undefined2 *)((int)this + 0x6e) = in_DX;
  return;
}



void __stdcall16far UI_Component_Set_Offset_76_to_5_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *(undefined4 *)((int)this + 0x76) = 0x5;
  return;
}



int __stdcall16far get_const_1_stub_1010_60b4(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60ba(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60c0(void)
{
  return 0x1;
}



int __stdcall16far get_const_1_stub_1010_60c6(void)
{
  return 0x1;
}



// Setter for a duplicated string buffer at offset 0x1A. Frees any existing buffer
// before allocation.

void __stdcall16far UI_Component_Set_String_at_Offset_1A_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0x1a));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0x1a) = pcVar1;
  *(undefined2 *)((int)this + 0x1c) = in_DX;
  return;
}



// Saves the current selection or state index (offset 0x20) into a backup field at 0x7C
// and resets the current state to 1. Sets a 'dirty' flag at 0x7E.

void __stdcall16far UI_Component_Save_State_to_Offset_7C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  *(undefined2 *)((int)this + 0x7e) = 0x1;
  *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)((int)this + 0x20);
  *(undefined2 *)((int)this + 0x20) = 0x1;
  return;
}



// Restores the selection or state index from the backup field at 0x7C to 0x20 if the
// 'dirty' flag at 0x7E is set.

void __stdcall16far UI_Component_Restore_State_from_Offset_7C_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  if (*(int *)((int)this + 0x7e) != 0x0)
  {
    *(undefined2 *)((int)this + 0x20) = *(undefined2 *)((int)this + 0x7c);
  }
  return;
}
