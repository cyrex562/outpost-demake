/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 10/19
 * Original lines (combined): 40461-42055
 * Boundaries: top-level declarations/definitions only
 */




char * __stdcall16far Resource_Manager_Get_String_with_Context_Validation(void)
{
  void *reg_ax;
  int reg_dx;
  void *pvVar1;
  
  Resource_Manager_Validate_Active_Context_Logic();
  if (reg_dx == 0x0 && reg_ax == NULL)
  {
    return NULL;
  }
  pvVar1 = UI_Component_Get_FarPtr_at_1FA((void *)CONCAT22(reg_dx,reg_ax));
  return (char *)((ulong)pvVar1 >> 0x10);
}



void __stdcall16far
Resource_Manager_Set_String_with_Context_Validation
          (undefined2 param_1,undefined2 param_2,long param_3)
{
  int reg_ax;
  int reg_dx;
  
  if (param_3 != 0x0)
  {
    Resource_Manager_Validate_Active_Context_Logic();
    if (reg_dx != 0x0 || reg_ax != 0x0)
    {
      UI_Component_Set_String_at_1FA(reg_ax,reg_dx,param_3);
    }
  }
  return;
}



// Formats full entity name labels (e.g. 'Name [Class]'). Resolves name ID via 1008:BD80
// and applies template via sprintf_wrapper using coordinates from 1008:8086.

char * __stdcall16far Entity_Format_Full_Name_Label_Logic(char *dest,long entity_ref)
{
  char *pcVar1;
  undefined2 reg_dx;
  undefined2 uVar2;
  undefined2 unaff_SS;
  void *in_stack_0000000c;
  undefined2 in_stack_0000fbec;
  char local_40c [0x400];
  u16 uStack_c;
  void *pvStack_a;
  undefined4 uStack_6;
  
  uStack_6 = (char *)entity_ref;
  if (entity_ref == 0x0)
  {
    pcVar1 = allocate_memory(CONCAT22(in_stack_0000fbec,0x100));
    uStack_6 = (char *)CONCAT22(reg_dx,pcVar1);
  }
  pvStack_a = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_0000000c);
  uVar2 = (undefined2)((ulong)pvStack_a >> 0x10);
  uStack_c = *(u16 *)((int)pvStack_a + 0xc);
  pcVar1 = Lookup_Entity_Name_by_ID_Logic_bd80(uStack_c);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_40c),(char *)CONCAT22(uVar2,pcVar1));
  UI_Component_Get_Coordinates_Logic_8086(in_stack_0000000c);
  sprintf_wrapper(uStack_6,0x38c5,0x1050,local_40c);
  return (char *)uStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Sophisticated label formatter that selects category strings and appends status
// suffixes (e.g. population, condition) based on the entity's type and current
// simulation state.

char * __stdcall16far
Entity_Format_Detailed_Status_Label_Logic(long context,char *dest,long entity_ref)
{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 reg_dx;
  void *pvVar4;
  long lVar5;
  undefined2 in_stack_0000000a;
  undefined2 uVar6;
  int arg1;
  int arg2;
  char *pcVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 in_stack_0000ffe6;
  char *pcVar11;
  undefined2 uVar12;
  char *pcVar13;
  undefined4 uStack_6;
  
  uStack_6 = _dest;
  if (_dest == NULL)
  {
    pcVar1 = allocate_memory(CONCAT22(in_stack_0000ffe6,0x100));
    uStack_6 = (char *)CONCAT22(reg_dx,pcVar1);
  }
  pvVar4 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  lVar5 = Entity_Get_Indirect_Long_at_Offset_14_Logic(context);
  uVar10 = (undefined2)((ulong)lVar5 >> 0x10);
  pcVar1 = (char *)uStack_6;
  uVar8 = (undefined2)((ulong)uStack_6 >> 0x10);
  arg1 = (int)_p_GlobalResourceManager;
  arg2 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  switch(*(undefined2 *)((int)pvVar4 + 0x12))
  {
  case 0x3:
  case 0x4:
  case 0x5:
    uVar10 = 0x5f4;
    break;
  case 0x6:
    pcVar13 = (char *)*(undefined4 *)((int)lVar5 + 0x90);
    pcVar7 = (char *)pcVar13;
    uVar9 = (undefined2)((ulong)pcVar13 >> 0x10);
    LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(0x531,uVar8));
    uVar2 = strlen_get_length(uStack_6);
    pcVar11 = pcVar7;
    uVar12 = uVar9;
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x61e);
    pcVar13 = (char *)CONCAT22(uVar10,pcVar3);
    uVar6 = 0x38d7;
    goto LAB_1010_c4f9;
  case 0x7:
  case 0x9:
    uVar10 = 0x531;
    break;
  case 0x8:
    pcVar13 = (char *)*(undefined4 *)((int)lVar5 + 0x90);
    LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(0x5f5,uVar8));
    uVar2 = strlen_get_length(uStack_6);
    pcVar7 = (char *)pcVar13;
    uVar9 = (undefined2)((ulong)pcVar13 >> 0x10);
    pcVar3 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x61e);
    uVar6 = 0x38cd;
    pcVar11 = pcVar3;
    uVar12 = uVar10;
LAB_1010_c4f9:
    sprintf_wrapper((char *)CONCAT22(uVar8,pcVar1 + uVar2),uVar6,0x1050,pcVar3,uVar10,
                    pcVar7,uVar9,pcVar11,uVar12,uVar2,pcVar13);
  default:
    goto switchD_1010_c56d_default;
  }
  LoadString_Global_Wrapper(arg1,arg2,CONCAT22(pcVar1,0x3ff),CONCAT22(uVar10,uVar8));
switchD_1010_c56d_default:
  return pcVar1;
}



// Iterates through a linked list of entities, resolving their names and values, and
// populates a UI list/grid with formatted strings. Used for detailed summary views.

int __stdcall16far
UI_Report_List_Populate_Entity_Details_Logic
          (undefined2 param_1,undefined2 param_2,int *param_3,int param_4,long param_5,
          undefined4 param_6,undefined4 param_7)
{
  astruct_488 *uVar1;
  char *pcVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint16_t uVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 unaff_SS;
  undefined4 uStack_41c;
  char local_418 [0x400];
  int iStack_18;
  undefined4 uStack_16;
  u16 uStack_12;
  astruct_488 *paStack_10;
  undefined1 local_c [0x8];
  int iStack_4;
  
  iStack_4 = param_4;
  init_long_pair(local_c,param_5);
  do
  {
    paStack_10 = (astruct_488 *)get_next_list_item(local_c);
    uVar3 = (uint)((ulong)paStack_10 >> 0x10);
    uVar1 = (astruct_488 *)paStack_10;
    uVar4 = uVar3 | (uint)uVar1;
    if (uVar4 == 0x0)
    {
      return iStack_4;
    }
    uStack_12 = uVar1->field7_0xa;
    uStack_16 = NULL;
    if (uVar1->field4_0x4 == 0x0)
    {
      if (uVar1->field5_0x6 == 0x0)
      {
        if (uVar1->field6_0x8 == 0x0)
        {
          return 0x0;
        }
        pcVar1 = Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8(uVar1->field6_0x8);
      }
      else
      {
        pcVar1 = Lookup_Entity_Category_Name_by_ID_Logic_c222(uVar1->field5_0x6);
      }
    }
    else
    {
      pcVar1 = Lookup_Research_Category_Name_by_ID_Logic_c0d8(uVar1->field4_0x4);
    }
    uStack_16 = (char *)CONCAT22(uVar4,pcVar1);
    iStack_18 = *(int *)((int)paStack_10 + 0xc);
    *param_3 = *param_3 + iStack_18;
    uVar8 = (undefined2)((ulong)param_7 >> 0x10);
    iVar6 = (int)param_7;
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    pvVar2 = (void *)(*(int *)(iVar6 + 0x2) + iStack_4 * 0xa);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    uVar9 = (undefined2)((ulong)param_6 >> 0x10);
    iVar7 = (int)param_6;
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(iStack_4 * 0x2 + iVar7);
    sprintf_wrapper(local_418);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    iStack_4 += 0x1;
    pvVar2 = (void *)(*(int *)(iVar6 + 0x2) + iStack_4 * 0xa);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(iStack_4 * 0x2 + iVar7);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_418),uStack_16);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
    pvVar2 = (void *)((iStack_4 + 0x1) * 0xa + *(int *)(iVar6 + 0x2));
    uVar5 = *(uint16_t *)(iVar6 + 0x4);
    uStack_41c = (void *)CONCAT22(uVar5,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)((iStack_4 + 0x1) * 0x2 + iVar7)
    ;
    iStack_4 += 0x2;
    sprintf_wrapper(local_418);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_41c,(char *)CONCAT22(unaff_SS,local_418),uVar5);
  } while( true );
}



// Populates a UI list by iterating through two parallel data collections. It formats
// each entry with a numeric value using a resource string template.

int __stdcall16far
UI_Report_List_Populate_Parallel_Collections_Logic
          (undefined2 param_1,undefined2 param_2,uint param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,astruct_487 *param_7)
{
  uint16_t uVar1;
  void *pvVar2;
  uint16_t uVar3;
  astruct_487 *uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 unaff_SS;
  uint uStack_5e;
  int iStack_5c;
  uint uStack_5a;
  undefined4 uStack_58;
  char local_54 [0x52];
  
  uStack_5e = param_3;
  uStack_5a = param_3;
  iStack_5c = 0x0;
  while( true )
  {
    uVar6 = (undefined2)((ulong)param_7 >> 0x10);
    uVar4 = (astruct_487 *)param_7;
    if (*(int *)param_7 - 0x1U < uStack_5e)
    {
      return uStack_5e;
    }
    uVar1 = uVar4->field3_0x4;
    pvVar2 = (void *)(uVar4->field2_0x2 + uStack_5e * 0xa);
    uVar5 = (undefined2)((ulong)param_4 >> 0x10);
    if ((*(long *)(iStack_5c * 0x4 + (int)param_5) == 0x0) &&
       (*(long *)(iStack_5c * 0x4 + (int)param_4) == 0x0)) break;
    uVar3 = uVar1;
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_54),
                     (char *)*(undefined4 *)(iStack_5c * 0x4 + (int)param_4));
    uVar5 = (undefined2)((ulong)param_6 >> 0x10);
    *(undefined2 *)((int)pvVar2 + 0x4) = *(undefined2 *)(uStack_5a * 0x2 + (int)param_6)
    ;
    UI_Component_Set_Metadata_Strings_a626
              ((void *)CONCAT22(uVar1,pvVar2),(char *)CONCAT22(unaff_SS,local_54),uVar3)
    ;
    sprintf_wrapper(local_54);
    uVar1 = uVar4->field3_0x4;
    pvVar2 = (void *)(uVar4->field2_0x2 + (uStack_5e + 0x1) * 0xa);
    uStack_58 = (void *)CONCAT22(uVar1,pvVar2);
    *(undefined2 *)((int)pvVar2 + 0x4) =
         *(undefined2 *)((uStack_5a + 0x1) * 0x2 + (int)param_6);
    UI_Component_Set_Metadata_Strings_a626
              (uStack_58,(char *)CONCAT22(unaff_SS,local_54),uVar1);
    uStack_5e += 0x2;
    uStack_5a += 0x2;
    iStack_5c += 0x1;
  }
  return uStack_5e;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Adds a labeled entry followed by an empty separator entry to a UI list or grid. Uses
// resource string 0x590 for the label.

int __stdcall16far
UI_Report_List_Add_Empty_Entry_Logic
          (undefined2 param_1,undefined2 param_2,int param_3,undefined4 param_4,
          astruct_486 *param_5)
{
  undefined4 uVar1;
  char *pcVar2;
  void *pvVar3;
  uint16_t uVar4;
  undefined2 reg_dx;
  astruct_486 *iVar6;
  undefined2 uVar5;
  undefined2 uVar6;
  
  pcVar2 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x590);
  uVar5 = (undefined2)((ulong)param_5 >> 0x10);
  iVar6 = (astruct_486 *)param_5;
  uVar4 = iVar6->field3_0x4;
  pvVar3 = (void *)(iVar6->field2_0x2 + param_3 * 0xa);
  uVar6 = (undefined2)((ulong)param_4 >> 0x10);
  *(undefined2 *)((int)pvVar3 + 0x4) = *(undefined2 *)(param_3 * 0x2 + (int)param_4);
  UI_Component_Set_Metadata_Strings_a626
            ((void *)CONCAT22(uVar4,pvVar3),(char *)CONCAT22(reg_dx,pcVar2),uVar4);
  strcpy_optimized((char *)CONCAT22(reg_dx,pcVar2),s__1050_3941);
  uVar4 = param_3 + 0x1;
  uVar1 = *(undefined4 *)&iVar6->field2_0x2;
  pvVar3 = (void *)((int)uVar1 + uVar4 * 0xa);
  *(undefined2 *)((int)pvVar3 + 0x4) = *(undefined2 *)(uVar4 * 0x2 + (int)param_4);
  UI_Component_Set_Metadata_Strings_a626
            ((void *)CONCAT22((int)((ulong)uVar1 >> 0x10),pvVar3),
             (char *)CONCAT22(reg_dx,pcVar2),uVar4);
  return uVar4;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Large dispatcher that resolves an entity's type and state into a descriptive string
// resource (e.g., 'Fleet', 'Colony', 'Exploration Ship'). Handles over 30 specific type
// categories.

char * __stdcall16far UI_Entity_Get_Type_Description_Logic(char *dest,long entity_ref)
{
  uint category;
  char cVar1;
  int iVar2;
  char *pcVar3;
  u16 uVar4;
  void *entity_ref_00;
  undefined2 in_stack_00000006;
  undefined2 uVar5;
  
  dest[0x13c] = '\0';
  entity_ref_00 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  uVar5 = (undefined2)((ulong)entity_ref_00 >> 0x10);
  category = *(uint *)((int)entity_ref_00 + 0xc);
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),category);
  if ((iVar2 == 0x0) &&
     (iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category),
     iVar2 == 0x0))
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),category);
    if (iVar2 == 0x0)
    {
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),category);
      if (iVar2 == 0x0)
      {
        iVar2 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),category);
        if (iVar2 == 0x0)
        {
          iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),category);
          if (iVar2 == 0x0)
          {
            iVar2 = search_array_for_value
                              ((int *)_p_StringPropertyTable,
                               (int)((ulong)_p_StringPropertyTable >> 0x10),category);
            if (iVar2 == 0x0)
            {
              iVar2 = search_array_for_value
                                ((int *)_p_StringPropertyTable,
                                 (int)((ulong)_p_StringPropertyTable >> 0x10),category);
              if (iVar2 == 0x0)
              {
                iVar2 = search_array_for_value
                                  ((int *)_p_StringPropertyTable,
                                   (int)((ulong)_p_StringPropertyTable >> 0x10),category
                                  );
                if (iVar2 == 0x0)
                {
                  iVar2 = search_array_for_value
                                    ((int *)_p_StringPropertyTable,
                                     (int)((ulong)_p_StringPropertyTable >> 0x10),
                                     category);
                  if (iVar2 == 0x0)
                  {
                    iVar2 = search_array_for_value
                                      ((int *)_p_StringPropertyTable,
                                       (int)((ulong)_p_StringPropertyTable >> 0x10),
                                       category);
                    if (iVar2 == 0x0)
                    {
                      iVar2 = search_array_for_value
                                        ((int *)_p_StringPropertyTable,
                                         (int)((ulong)_p_StringPropertyTable >> 0x10),
                                         category);
                      if (iVar2 == 0x0)
                      {
                        iVar2 = search_array_for_value
                                          ((int *)_p_StringPropertyTable,
                                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                                           category);
                        if ((iVar2 == 0x0) &&
                           (iVar2 = search_array_for_value
                                              ((int *)_p_StringPropertyTable,
                                               (int)((ulong)_p_StringPropertyTable >>
                                                    0x10),category), iVar2 == 0x0))
                        {
                          iVar2 = search_array_for_value
                                            ((int *)_p_StringPropertyTable,
                                             (int)((ulong)_p_StringPropertyTable >> 0x10
                                                  ),category);
                          if (iVar2 == 0x0)
                          {
                            iVar2 = search_array_for_value
                                              ((int *)_p_StringPropertyTable,
                                               (int)((ulong)_p_StringPropertyTable >>
                                                    0x10),category);
                            if ((iVar2 == 0x0) &&
                               (iVar2 = search_array_for_value
                                                  ((int *)_p_StringPropertyTable,
                                                   (int)((ulong)_p_StringPropertyTable
                                                        >> 0x10),category), iVar2 == 0x0
                               ))
                            {
                              iVar2 = search_array_for_value
                                                ((int *)_p_StringPropertyTable,
                                                 (int)((ulong)_p_StringPropertyTable >>
                                                      0x10),category);
                              if (iVar2 == 0x0)
                              {
                                iVar2 = search_array_for_value
                                                  ((int *)_p_StringPropertyTable,
                                                   (int)((ulong)_p_StringPropertyTable
                                                        >> 0x10),category);
                                if (iVar2 == 0x0)
                                {
                                  iVar2 = search_array_for_value
                                                    ((int *)_p_StringPropertyTable,
                                                     (int)((ulong)_p_StringPropertyTable
                                                          >> 0x10),category);
                                  if ((iVar2 == 0x0) &&
                                     (iVar2 = search_array_for_value
                                                        ((int *)_p_StringPropertyTable,
                                                         (int)((ulong)
                                            _p_StringPropertyTable >> 0x10),category),
                                     iVar2 == 0x0))
                                  {
                                    iVar2 = search_array_for_value
                                                      ((int *)_p_StringPropertyTable,
                                                       (int)((ulong)
                                            _p_StringPropertyTable >> 0x10),category);
                                    if (iVar2 == 0x0)
                                    {
                                      iVar2 = search_array_for_value
                                                        ((int *)_p_StringPropertyTable,
                                                         (int)((ulong)
                                            _p_StringPropertyTable >> 0x10),category);
                                      if (iVar2 == 0x0)
                                      {
                                        iVar2 = search_array_for_value
                                                          ((int *)_p_StringPropertyTable
                                                           ,(int)((ulong)
                                            _p_StringPropertyTable >> 0x10),category);
                                        if (iVar2 == 0x0)
                                        {
                                          iVar2 = search_array_for_value
                                                            ((int *)
                                            _p_StringPropertyTable,
                                            (int)((ulong)_p_StringPropertyTable >> 0x10)
                                            ,category);
                                          if ((iVar2 == 0x0) &&
                                             (iVar2 = search_array_for_value
                                                                ((int *)
                                            _p_StringPropertyTable,
                                            (int)((ulong)_p_StringPropertyTable >> 0x10)
                                            ,category), iVar2 == 0x0))
                                          {
                                            iVar2 = search_array_for_value
                                                              ((int *)
                                            _p_StringPropertyTable,
                                            (int)((ulong)_p_StringPropertyTable >> 0x10)
                                            ,category);
                                            if (iVar2 == 0x0)
                                            {
                                              iVar2 = search_array_for_value
                                                                ((int *)
                                            _p_StringPropertyTable,
                                            (int)((ulong)_p_StringPropertyTable >> 0x10)
                                            ,category);
                                            if (iVar2 == 0x0)
                                            {
                                              iVar2 = search_array_for_value
                                                                ((int *)
                                            _p_StringPropertyTable,
                                            (int)((ulong)_p_StringPropertyTable >> 0x10)
                                            ,category);
                                            if (iVar2 != 0x0) goto LAB_1010_e3c2;
                                            if (category == 0x6a)
                                            {
                                              uVar5 = 0x531;
                                            }
                                            else if (category < 0x6b)
                                            {
                                              cVar1 = (char)category;
                                              if (cVar1 == '!')
                                              {
                                                uVar5 = 0x5e4;
                                              }
                                              else if (cVar1 < '\"')
                                              {
                                                if (cVar1 == '\n')
                                                {
                                                  uVar5 = 0x654;
                                                }
                                                else if (cVar1 == '\x0f')
                                                {
LAB_1010_e54c:
                                                  uVar5 = 0x655;
                                                }
                                                else
                                                {
                                                  if (cVar1 != '\x11')
                                                  goto LAB_1010_e576;
                                                  uVar5 = 0x656;
                                                }
                                              }
                                              else if (cVar1 == ',')
                                              {
                                                uVar5 = 0x69b;
                                              }
                                              else
                                              {
                                                if (cVar1 != '@')
                                                {
                                                  if (cVar1 == 'd') goto LAB_1010_e54c;
                                                  goto LAB_1010_e576;
                                                }
                                                uVar5 = 0x600;
                                              }
                                            }
                                            else
                                            {
LAB_1010_e576:
                                              uVar5 = 0x5ea;
                                            }
                                            goto LAB_1010_e241;
                                            }
                                            uVar4 = 
                                            UI_Component_Get_Entity_Resource_Field2_7f98
                                                      ((void *)entity_ref);
                                            pcVar3 = 
                                            Lookup_Entity_Category_Name_by_ID_Logic_c222
                                                      (uVar4);
                                            }
                                            else
                                            {
                                              uVar4 = 
                                            UI_Component_Get_Entity_Resource_Field4_7f5a
                                                      ((void *)entity_ref);
                                            pcVar3 = 
                                            Lookup_Entity_SubCategory_Name_by_ID_Logic_c2f8
                                                      (uVar4);
                                            }
                                          }
                                          else
                                          {
                                            pcVar3 = 
                                            UI_Entity_Get_SubCategory_Name_Logic
                                                      (dest,(long)entity_ref_00);
                                          }
                                          strcpy_optimized((char *)CONCAT22(
                                            in_stack_00000006,dest + 0x13c),
                                            (char *)CONCAT22(uVar5,pcVar3));
                                          goto LAB_1010_e57c;
                                        }
                                        uVar5 = 0x5d4;
                                      }
                                      else
                                      {
                                        uVar5 = 0x5e5;
                                      }
                                    }
                                    else
                                    {
                                      uVar5 = 0x632;
                                    }
                                  }
                                  else
                                  {
                                    uVar5 = 0x42f;
                                  }
                                }
                                else
                                {
                                  uVar5 = 0x5df;
                                }
                              }
                              else
                              {
                                uVar5 = 0x42e;
                              }
                            }
                            else
                            {
LAB_1010_e3c2:
                              uVar5 = 0x663;
                            }
                          }
                          else
                          {
                            uVar5 = 0x662;
                          }
                        }
                        else
                        {
                          uVar5 = 0x660;
                        }
                      }
                      else
                      {
                        uVar5 = 0x65f;
                      }
                    }
                    else
                    {
                      uVar5 = 0x65e;
                    }
                  }
                  else
                  {
                    uVar5 = 0x65d;
                  }
                }
                else
                {
                  uVar5 = 0x65c;
                }
              }
              else
              {
                uVar5 = 0x65b;
              }
            }
            else
            {
              uVar5 = 0x65a;
            }
          }
          else
          {
            uVar5 = 0x659;
          }
        }
        else
        {
          uVar5 = 0x658;
        }
      }
      else
      {
        uVar5 = 0x4f8;
      }
    }
    else
    {
      uVar5 = 0x657;
    }
  }
  else
  {
    uVar5 = 0x5d7;
  }
LAB_1010_e241:
  LoadString_Global_Wrapper
            ((int)_p_GlobalResourceManager,
             (int)((ulong)_p_GlobalResourceManager >> 0x10),CONCAT22(dest + 0x13c,0x3ff)
             ,CONCAT22(uVar5,in_stack_00000006));
LAB_1010_e57c:
  return dest + 0x13c;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Generates a formatted status string containing dynamic simulation values (e.g., 'Pop:
// 500', 'Cargo: 80%') based on the entity's type and current state.

char * __stdcall16far
UI_Entity_Format_Status_Value_Label_Logic(char *dest,long entity_ref)
{
  int iVar1;
  void *pvVar2;
  undefined2 unaff_SS;
  void *pvVar3;
  int *in_stack_00000006;
  undefined2 uVar4;
  void *local_1e;
  void *local_1a;
  void *pvStack_18;
  int iStack_16;
  undefined4 uStack_14;
  u8 *puStack_10;
  void *pvStack_c;
  int iStack_8;
  void *pvStack_6;
  
  dest[0x13c] = '\0';
  pvStack_6 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8((void *)entity_ref);
  iStack_8 = *(int *)((int)(void *)pvStack_6 + 0xc);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
  if (iVar1 == 0x0)
  {
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
    if (iVar1 != 0x0) goto LAB_1010_e6df;
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
    if (iVar1 != 0x0) goto LAB_1010_e6df;
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
    if (iVar1 != 0x0)
    {
      puStack_10 = (u8 *)*(long *)((int)*(undefined4 *)(dest + 0x138) + 0x24);
      pvStack_c = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puStack_10);
      uStack_14 = *(undefined4 *)((int)(void *)pvStack_c + 0x1f6);
      iVar1 = *(int *)((int)uStack_14 + 0x1a8);
      uVar4 = 0x3947;
      iStack_16 = iVar1;
LAB_1010_e76d:
      sprintf_wrapper(dest + 0x13c,in_stack_00000006,uVar4,0x1050,iVar1);
      goto LAB_1010_e8c3;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
    if (iVar1 == 0x0)
    {
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
      if (iVar1 != 0x0) goto LAB_1010_e7a8;
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
      if (iVar1 == 0x0)
      {
        iVar1 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
        if (iVar1 == 0x0)
        {
          iVar1 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
          if (iVar1 == 0x0)
          {
            iVar1 = search_array_for_value
                              ((int *)_p_StringPropertyTable,
                               (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
            if (iVar1 == 0x0)
            {
              iVar1 = search_array_for_value
                                ((int *)_p_StringPropertyTable,
                                 (int)((ulong)_p_StringPropertyTable >> 0x10),iStack_8);
              if (iVar1 == 0x0)
              {
                LoadString_Global_Wrapper
                          ((int)_p_GlobalResourceManager,
                           (int)((ulong)_p_GlobalResourceManager >> 0x10),
                           CONCAT22(dest + 0x13c,0x3ff),
                           (long)CONCAT22(0x598,in_stack_00000006));
                goto LAB_1010_e8c3;
              }
              iVar1 = UI_Component_Get_Entity_Value_at_1A_Logic_6ddc((void *)entity_ref)
              ;
              uVar4 = 0x395c;
              goto LAB_1010_e76d;
            }
            pvVar3 = UI_Component_Find_Item_in_List_22_Logic_7c28
                               ((void *)entity_ref,0x21);
            pvVar2 = (void *)((ulong)pvVar3 >> 0x10);
            local_1e = (void *)pvVar3;
            uVar4 = 0x3958;
            goto LAB_1010_e705;
          }
        }
        pvVar3 = (void *)Entity_Resolve_Parent_Object_Logic
                                   ((long)CONCAT22(in_stack_00000006,dest));
        pvVar3 = UI_Component_Find_Item_in_List_22_Logic_7c28(pvVar3,0x23);
        pvVar2 = (void *)((ulong)pvVar3 >> 0x10);
        local_1e = (void *)pvVar3;
        uVar4 = 0x3954;
        local_1a = local_1e;
        pvStack_18 = pvVar2;
      }
      else
      {
        pvVar3 = UI_Component_Find_Item_in_List_22_Logic_7c28((void *)entity_ref,0x1e);
        pvVar2 = (void *)((ulong)pvVar3 >> 0x10);
        local_1e = (void *)pvVar3;
        uVar4 = 0x3950;
      }
    }
    else
    {
LAB_1010_e7a8:
      local_1e = NULL;
      local_1a = NULL;
      UI_Entity_Get_Two_Related_Values_Logic
                ((int *)dest,in_stack_00000006,(long)CONCAT22(unaff_SS,&local_1a));
      uVar4 = 0x394a;
      pvVar2 = local_1a;
    }
  }
  else
  {
LAB_1010_e6df:
    pvStack_c = (void *)Entity_Resolve_Parent_Object_Logic
                                  ((long)CONCAT22(in_stack_00000006,dest));
    puStack_10 = (u8 *)UI_Component_Sum_Entity_Resource_Capacity_70f4(pvStack_c);
    local_1e = (void *)puStack_10;
    uVar4 = 0x3943;
    pvVar2 = (void *)((ulong)puStack_10 >> 0x10);
  }
LAB_1010_e705:
  sprintf_wrapper(dest + 0x13c,in_stack_00000006,uVar4,0x1050,local_1e,pvVar2);
LAB_1010_e8c3:
  return dest + 0x13c;
}
