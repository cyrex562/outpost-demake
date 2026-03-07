/*
 * Source: outpost.c
 * Chunk: 37/117
 * Original lines: 41415-42511
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Iterates through an entity collection (offset 0xC) and calculates the sum of a
// specific 32-bit property (index 0x23) for all items. Returns the total.

long __stdcall16far UI_Entity_Calculate_Total_Property_Value_Logic(long context)
{
  undefined2 *puVar1;
  undefined4 *puVar2;
  u8 *packed_id;
  undefined2 uVar3;
  undefined2 unaff_CS;
  bool bVar4;
  undefined4 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined2 uVar8;
  ulong uStack_12;
  ulong uStack_e;
  uint uStack_6;
  int iStack_4;
  
  uStack_6 = 0x0;
  iStack_4 = 0x0;
  puVar5 = (undefined4 *)UI_Get_Entity_Property_by_Array_Index_Logic(context,0xc);
  uVar3 = (undefined2)((ulong)puVar5 >> 0x10);
  puVar2 = (undefined4 *)puVar5;
  puVar1 = (undefined2 *)((int)*puVar5 + 0x10);
  puVar7 = puVar2;
  uVar8 = uVar3;
  uStack_e = (*(code *)*puVar1)();
  for (uStack_12 = 0x0; uStack_12 < uStack_e; uStack_12 += 0x1)
  {
    puVar1 = (undefined2 *)((int)*puVar5 + 0x4);
    packed_id = (u8 *)(*(code *)*puVar1)(unaff_CS,puVar2,uVar3,(int)uStack_12,
                                         (int)(uStack_12 >> 0x10));
    pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,packed_id);
    unaff_CS = 0x1030;
    pvVar6 = UI_Component_Find_Item_in_List_22_Logic_7c28(pvVar6,0x23);
    bVar4 = CARRY2(uStack_6,(uint)(void *)pvVar6);
    uStack_6 += (int)(void *)pvVar6;
    iStack_4 = iStack_4 + (int)((ulong)pvVar6 >> 0x10) + (uint)bVar4;
  }
  if (puVar5 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar5)
              (unaff_CS,puVar2,uVar3,0x1,puVar7,uVar8);
  }
  return CONCAT22(iStack_4,uStack_6);
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
// Retrieves a specific sub-category or class name for an entity (e.g., identifying a
// specific ship model or component type) by querying secondary resource trackers.

char * __stdcall16far UI_Entity_Get_SubCategory_Name_Logic(char *dest,long entity_ref)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  astruct_482 *uVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  undefined2 in_stack_00000006;
  
  dest[0x13c] = '\0';
  uVar7 = (undefined2)((ulong)entity_ref >> 0x10);
  iVar1 = *(int *)((int)entity_ref + 0x20);
  iVar5 = *(int *)((int)entity_ref + 0xc);
  iVar4 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
  if (iVar4 == 0x0)
  {
    iVar5 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar5);
    if (iVar5 == 0x0) goto LAB_1010_e675;
    puVar8 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x31);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    puVar8 = (undefined4 *)
             (*(code *)*puVar2)(0x1008,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10)
                                ,iVar1,iVar1 >> 0xf);
  }
  else
  {
    puVar8 = (undefined4 *)
             Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x41);
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    puVar8 = (undefined4 *)
             (*(code *)*puVar2)(0x1008,(undefined4 *)puVar8,(int)((ulong)puVar8 >> 0x10)
                                ,iVar1,iVar1 >> 0xf);
  }
  if (puVar8 == NULL)
  {
    LoadString_Global_Wrapper
              ((int)_p_GlobalResourceManager,
               (int)((ulong)_p_GlobalResourceManager >> 0x10),
               CONCAT22(dest + 0x13c,0x3ff),CONCAT22(0x531,in_stack_00000006));
  }
  else
  {
    puVar2 = (undefined2 *)((int)*puVar8 + 0x14);
    pcVar3 = (char *)(*(code *)*puVar2)(0x1008,puVar8);
    strcpy_optimized((char *)CONCAT22(in_stack_00000006,dest + 0x13c),pcVar3);
  }
LAB_1010_e675:
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



// Retrieves two related 16-bit values from an entity and stores them in provided output
// pointers.

void __stdcall16far
UI_Entity_Get_Two_Related_Values_Logic(int *out1,int *out2,long entity_ref)
{
  u16 uVar1;
  u16 *in_stack_0000000c;
  void *in_stack_00000010;
  
  uVar1 = UI_Component_Get_Entity_Resource_C_Output_7064(in_stack_00000010);
  *in_stack_0000000c = uVar1;
  uVar1 = UI_Component_Get_Entity_Resource_D_Output_70ac(in_stack_00000010);
  *(u16 *)entity_ref = uVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Traverses the entity hierarchy to find the parent or associated high-level object
// (e.g., resolving a ship to its fleet or a facility to its base).

long __stdcall16far Entity_Resolve_Parent_Object_Logic(long entity_ref)
{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *in_stack_00000008;
  
  pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(in_stack_00000008);
  iVar2 = *(int *)((int)(void *)pvVar3 + 0xc);
  iVar1 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
  if (iVar1 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar2);
    if (iVar2 == 0x0)
    {
      return (long)in_stack_00000008;
    }
    pvVar3 = UI_Build_Item_Get_Neighbor_Entity_Alternative_4faa(pvVar3);
  }
  else
  {
    pvVar3 = UI_Build_Item_Get_Neighbor_Entity_121e(pvVar3);
  }
  pvVar3 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(pvVar3);
  return (long)pvVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves the name string of the currently active entity from the global resource
// manager.

char * __stdcall16far Resource_Manager_Get_Current_Entity_Name_Logic(void)
{
  long lVar1;
  void *this_ptr;
  char *pcVar2;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x2f);
  this_ptr = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,
                        (u8 *)(u8 *)*(undefined4 *)((int)lVar1 + 0x24));
  pcVar2 = UI_Component_Get_FarPtr_at_1FA(this_ptr);
  return (char *)pcVar2;
}



void Simulator_Event_Dispatch_Table_dtor_Wrapper_e99a
               (u16 param_1,int param_2,u16 param_3,byte param_4)
{
  Simulator_Event_Dispatch_Table_dtor_Scalar_Deleting_e9a6
            ((void *)(param_2 + -0xa),param_3,param_4);
  return;
}



void * __stdcall16far
Simulator_Event_Dispatch_Table_dtor_Scalar_Deleting_e9a6
          (void *param_1,u16 param_2,byte param_3)
{
  Simulator_Event_Dispatch_Table_Object_dtor(param_1);
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(param_1);
  }
  return param_1;
}



// Constructor for a specialized simulator object (vtable 0x558). It initializes an
// 8-slot array of 32-bit values with default constants and then applies randomized
// jitter to each entry.

long __stdcall16far Simulator_Object_Subclass_ctor_0558(long this_ref)
{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int in_DX;
  undefined2 unaff_SI;
  int iVar6;
  long lVar7;
  int iStack_4;
  
  Base_Object_ctor_init_2014_Logic((void *)this_ref,this_ref._2_2_);
  *(undefined2 *)((int)(void *)this_ref + 0xa) = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1008;
  *(undefined2 *)((int)(void *)this_ref + 0xa) = (char *)s_18_2_1050_3aa5 + 0x3;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1008;
  *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x12) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x16) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x1a) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x1e) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x20) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x24) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x28) = 0x0;
  *(undefined4 *)((int)(void *)this_ref + 0x2c) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x30) = 0x0;
  *(undefined2 *)((int)(void *)this_ref + 0x32) = 0x0;
  *(undefined2 *)this_ref = 0x558;
  *(undefined2 *)((int)(void *)this_ref + 0x2) = 0x1018;
  *(undefined2 *)((int)(void *)this_ref + 0xa) = 0x568;
  *(undefined2 *)((int)(void *)this_ref + 0xc) = 0x1018;
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x4));
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    *(undefined4 *)((int)(void *)this_ref + 0xe) = 0x0;
  }
  else
  {
    lVar7 = Gameplay_Object_Base_vtable_init_Helper((long)CONCAT22(in_DX,pvVar3));
    *(undefined2 *)((int)(void *)this_ref + 0xe) = (int)lVar7;
    *(undefined2 *)((int)(void *)this_ref + 0x10) = (int)((ulong)lVar7 >> 0x10);
  }
  memset_far((void *)((int)(void *)this_ref + 0x34),this_ref._2_2_,0x0);
  *(undefined4 *)((int)(void *)this_ref + 0x38) = 0xfa;
  *(undefined4 *)((int)(void *)this_ref + 0x3c) = 0x15e;
  *(undefined4 *)((int)(void *)this_ref + 0x40) = 0x1c2;
  *(undefined2 *)((int)(void *)this_ref + 0x44) = 0x1c2;
  *(undefined4 *)((int)(void *)this_ref + 0x46) = 0x2260000;
  *(undefined4 *)((int)(void *)this_ref + 0x4a) = 0x28a0000;
  *(undefined4 *)((int)(void *)this_ref + 0x4e) = 0x730000;
  *(undefined4 *)((int)(void *)this_ref + 0x52) = 0x960000;
  *(undefined2 *)((int)(void *)this_ref + 0x56) = 0x0;
  for (iStack_4 = 0x1; iStack_4 < 0x9; iStack_4 += 0x1)
  {
    uVar4 = random_int_range(0x0,0x1d);
    uVar5 = random_int_range(0x1,0x2);
    if ((uVar5 & 0x1) != 0x0)
    {
      uVar4 = -uVar4;
    }
    iVar6 = iStack_4 * 0x4;
    puVar1 = (uint *)((int)(void *)this_ref + iVar6 + 0x34);
    uVar5 = *puVar1;
    iVar2 = *(int *)((int)(void *)this_ref + iVar6 + 0x36);
    *(int *)((int)(void *)this_ref + iVar6 + 0x34) = uVar4 + *puVar1;
    *(int *)((int)(void *)this_ref + iVar6 + 0x36) =
         ((int)uVar4 >> 0xf) + iVar2 + (uint)CARRY2(uVar4,uVar5);
  }
  return this_ref;
}



// Destructor for the simulator object subclass 0x558. Safely destroys nested
// sub-objects and deallocates internal buffers.

void __stdcall16far Simulator_Object_Subclass_dtor_0558(long this_ref)
{
  undefined2 *puVar1;
  u16 *puVar2;
  astruct_481 *uVar3;
  undefined2 uVar4;
  u16 *puStack_e;
  undefined2 uStack_c;
  
  uVar4 = (undefined2)((ulong)this_ref >> 0x10);
  uVar3 = (astruct_481 *)this_ref;
  *(undefined2 *)this_ref = 0x558;
  uVar3->field2_0x2 = 0x1018;
  uVar3->field9_0xa = 0x568;
  uVar3->field10_0xc = 0x1018;
  if (uVar3->field12_0x10 != 0x0 || uVar3->field11_0xe != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*uVar3->field11_0xe;
    (*(code *)*puVar1)();
  }
  UI_Object_Destroy_SubObject_at_Offset_12_Logic_Duplicate(this_ref);
  free_if_not_null((void *)uVar3->field39_0x2c);
  if (this_ref == 0x0)
  {
    puVar2 = NULL;
    uVar4 = 0x0;
  }
  else
  {
    puVar2 = &uVar3->field9_0xa;
  }
  _puStack_e = (u16 *)CONCAT22(uVar4,puVar2);
  *_puStack_e = (u16)(char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  Base_Object_dtor_2014_Logic(uVar3);
  return;
}



// Setter for 32-bit values in the internal array at offset 0x34 of simulator object
// 0x558.

void __stdcall16far
Simulator_Object_Set_Indexed_Value_Logic_0558(long this_ref,int low,int high,int index)
{
  undefined2 uVar1;
  
  uVar1 = (undefined2)((ulong)this_ref >> 0x10);
  *(int *)((int)this_ref + index * 0x4 + 0x34) = low;
  *(int *)((int)this_ref + index * 0x4 + 0x36) = high;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a far pointer from offset 0x10 of an entity managed by the global 0x65E2
// tracking structure.

long __stdcall16far UI_Get_Entity_FarPtr_at_Offset_10_Logic(long entity_id)
{
  undefined2 uVar1;
  void *pvVar2;
  u8 *in_stack_00000008;
  
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,in_stack_00000008);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x12),
                  *(undefined2 *)((int)(void *)pvVar2 + 0x10));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves a far pointer from offset 0x10 of an entity managed by the global 0x65E2
// tracking structure. Identical to `UI_Get_Entity_FarPtr_at_Offset_10_Logic`.

long __stdcall16far UI_Get_Entity_FarPtr_at_Offset_10_Logic_Duplicate(long entity_id)
{
  undefined2 uVar1;
  void *pvVar2;
  u8 *in_stack_00000008;
  
  pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,in_stack_00000008);
  uVar1 = (undefined2)((ulong)pvVar2 >> 0x10);
  return CONCAT22(*(undefined2 *)((int)(void *)pvVar2 + 0x12),
                  *(undefined2 *)((int)(void *)pvVar2 + 0x10));
}



// Sets a far pointer at offset 0x28 and broadcasts notification type 0x13 to registered
// listeners.

void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_28_and_Notify_Logic(long context,long new_ptr)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(long *)((int)(void *)context + 0x28) = new_ptr;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles UI event 0x14. It notifies listeners and then performs a complex update on
// global resource 0x5748 using data from offset 0x20.

void __stdcall16far UI_Component_On_Event_14_Update_Global_5748_Logic(long context)
{
  undefined2 unaff_SS;
  int notify_type;
  undefined1 local_10e [0x10c];
  
  notify_type = (int)((ulong)context >> 0x10);
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  Simulator_Command_Select_ctor_init_532e
            ((undefined1 *)CONCAT22(unaff_SS,local_10e),
             (void *)*(undefined4 *)((int)(void *)context + 0x20));
  Simulator_Global_Process_Build_Event_Type4_835a
            (_p_SimulatorGlobalState,(undefined1 *)CONCAT22(unaff_SS,local_10e));
  return;
}



// WARNING: Unable to use type for symbol uVar1
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Resolves an entity by ID. If the entity is a fleet (magic 0x8000001), it triggers an
// update via `UI_Set_Entity_at_Offset_138_Logic`.

void __stdcall16far
UI_Dispatch_Fleet_Update_by_Entity_ID_Logic(long context,long arg2,long entity_id)
{
  int iVar1;
  u16 uVar3;
  u8 *puVar2;
  void *pvVar3;
  undefined4 uVar1;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,(void *)arg2,(void *)entity_id);
  pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)puVar2);
  uVar1 = *(undefined4 *)((int)(void *)pvVar3 + 0x2e);
  uVar3 = (u16)((ulong)uVar1 >> 0x10);
  iVar1 = (int)uVar1;
  if (*(long *)(iVar1 + 0x200) == 0x8000001)
  {
    UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic
              (context,*(long *)(iVar1 + 0x4));
  }
  return;
}



// Sets a far pointer at offset 0x24 and broadcasts notification type 0x12 to registered
// listeners.

void __stdcall16far
UI_Component_Set_FarPtr_at_Offset_24_and_Notify_Logic(long context,long new_ptr)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(long *)((int)(void *)context + 0x24) = new_ptr;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Retrieves resource-linked data for an entity using the ID stored at offset 0x16.

long __stdcall16far UI_Get_Entity_Resource_Data_at_Offset_16_Logic(long context)
{
  void *pvVar1;
  
  pvVar1 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,
                      (u8 *)(u8 *)*(undefined4 *)((int)context + 0x16));
  return (long)pvVar1;
}



// Sets a 16-bit value at offset 0x1E and broadcasts notification type 4.

void __stdcall16far
UI_Component_Set_Value_at_Offset_1E_and_Notify_Logic(long context,long value)
{
  int notify_type;
  
  notify_type = (int)((ulong)context >> 0x10);
  *(undefined2 *)((int)(void *)context + 0x1e) = (undefined2)value;
  UI_Container_Notify_Listeners_at_Offset_4_Logic((void *)context,notify_type);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Manages a dynamically growing array of 6-byte structures at offset 0x2C. If the array
// is full (based on count at 0x30 and capacity at 0x32), it reallocates memory in
// increments of 5. It then copies a 6-byte struct from a resource into the next
// available slot.

void __stdcall16far
UI_Component_Append_6Byte_Struct_to_Array_at_Offset_2C_Logic
          (long this_ref,long id1,long id2)
{
  int iVar1;
  undefined *heap_ctx;
  void *pvVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 uVar5;
  void *pvVar6;
  void *in_stack_0000ffce;
  
  pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)id2);
  puVar3 = (undefined *)((ulong)pvVar6 >> 0x10);
  uVar5 = (undefined2)((ulong)this_ref >> 0x10);
  iVar4 = (int)this_ref;
  if (*(long *)(iVar4 + 0x2c) == 0x0)
  {
    *(undefined2 *)(iVar4 + 0x32) = 0x5;
    if (_g_AllocatedBlock_Offset == NULL)
    {
      heap_ctx = init_memory_allocator();
    }
    else
    {
      puVar3 = g_AllocatedBlock_Segment;
      heap_ctx = g_AllocatedBlock_Offset;
    }
    pvVar2 = alloc_with_hooks(0x1e,0x1,heap_ctx);
  }
  else
  {
    if (*(int *)(iVar4 + 0x30) + 0x1 < *(int *)(iVar4 + 0x32)) goto LAB_1018_022a;
    *(int *)(iVar4 + 0x32) = *(int *)(iVar4 + 0x32) + 0x5;
    pvVar2 = heap_realloc(0x1,*(long *)(iVar4 + 0x2c) << 0x10,
                          (void *)((ulong)*(long *)(iVar4 + 0x2c) >> 0x10),
                          in_stack_0000ffce);
  }
  *(undefined2 *)(iVar4 + 0x2c) = pvVar2;
  *(undefined2 *)(iVar4 + 0x2e) = puVar3;
LAB_1018_022a:
  pvVar6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                     ((u16)_p_SimulatorGlobalState,
                      (u16)((ulong)_p_SimulatorGlobalState >> 0x10),(void *)id1);
  Simulator_Global_Get_Entity_Object_Wrapper_8344
            ((u16)_p_SimulatorGlobalState,(u16)((ulong)_p_SimulatorGlobalState >> 0x10),
             (void *)*(undefined4 *)((int)pvVar6 + 0x10));
  iVar1 = *(int *)(iVar4 + 0x30);
  *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + 0x1;
  copy_struct_6bytes((void *)((int)*(undefined4 *)(iVar4 + 0x2c) + iVar1 * 0x6),
                     (void *)((ulong)*(undefined4 *)(iVar4 + 0x2c) >> 0x10));
  return;
}
