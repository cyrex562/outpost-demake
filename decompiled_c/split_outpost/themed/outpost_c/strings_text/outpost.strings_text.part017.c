/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 17/19
 * Original lines (combined): 92432-104375
 * Boundaries: top-level declarations/definitions only
 */




// Parses a comma-separated string line into an array of integers. Specifically designed
// for building operational data structures.

void __stdcall16far
Parser_Parse_CSV_Line_to_Int_Array_4c52
          (undefined2 param_1,undefined2 param_2,undefined4 param_3,char *param_4)
{
  char *str;
  int iVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  void *uStack_8;
  undefined2 uStack_4;
  
  uStack_4 = 0x0;
  while( true )
  {
    str = strtok_far_optimized_with_state
                    ((char *)param_4,(char *)((ulong)param_4 >> 0x10));
    uStack_8 = (void *)CONCAT22(in_DX,str);
    if (in_DX == 0x0 && str == NULL) break;
    if (*(char *)uStack_8 != '\"')
    {
      iVar1 = atoi_wrapper_far(str);
      iVar2 = (int)param_3;
      uVar3 = (undefined2)((ulong)param_3 >> 0x10);
      if (uStack_4 < 0x25)
      {
        *(int *)(uStack_4 * 0x4 + iVar2) = iVar1;
        *(int *)(uStack_4 * 0x4 + iVar2 + 0x2) = in_DX;
      }
      else if (uStack_4 == 0x25)
      {
        *(int *)(iVar2 + 0x94) = iVar1;
      }
      else if (uStack_4 == 0x26)
      {
        *(int *)(iVar2 + 0x96) = iVar1;
      }
      else if (uStack_4 == 0x27)
      {
        *(int *)(iVar2 + 0x98) = iVar1;
      }
      else if (uStack_4 == 0x28)
      {
        *(int *)(iVar2 + 0x9a) = iVar1;
      }
      else if (uStack_4 == 0x29)
      {
        *(int *)(iVar2 + 0x9c) = iVar1;
      }
      else if (uStack_4 == 0x2a)
      {
        *(int *)(iVar2 + 0x9e) = iVar1;
      }
      else if (uStack_4 == 0x2b)
      {
        *(int *)(iVar2 + 0xa0) = iVar1;
      }
      else if (uStack_4 == 0x2c)
      {
        *(int *)(iVar2 + 0xa2) = iVar1;
      }
      uStack_4 += 0x1;
    }
    param_4 = NULL;
  }
  return;
}



// Parses a comma-separated string line into an array of shorts. Specifically designed
// for building layout data structures.

void __stdcall16far
Parser_Parse_CSV_Line_to_Short_Array_4d3a
          (undefined2 param_1,undefined2 param_2,astruct_278 *param_3,char *param_4)
{
  char *str;
  int iVar1;
  int in_DX;
  astruct_278 *iVar3;
  astruct_279 *uVar3;
  void *uStack_8;
  int iStack_4;
  
  iStack_4 = 0x0;
  while( true )
  {
    str = strtok_far_optimized_with_state
                    ((char *)param_4,(char *)((ulong)param_4 >> 0x10));
    uStack_8 = (void *)CONCAT22(in_DX,str);
    if (in_DX == 0x0 && str == NULL) break;
    if (*(char *)uStack_8 != '\"')
    {
      iVar1 = atoi_wrapper_far(str);
      iVar3 = (astruct_278 *)param_3;
      uVar3 = (astruct_279 *)((ulong)param_3 >> 0x10);
      if (iStack_4 < 0x25)
      {
        *(int *)(&iVar3->field_0x0 + iStack_4 * 0x4) = iVar1;
        *(int *)(&iVar3->field_0x2 + iStack_4 * 0x4) = in_DX;
      }
      else if (iStack_4 == 0x25)
      {
        iVar3->field148_0x94 = iVar1;
      }
      else if (iStack_4 == 0x26)
      {
        iVar3->field149_0x96 = iVar1;
      }
      iStack_4 += 0x1;
    }
    param_4 = NULL;
  }
  return;
}



// Iterates through a multi-line string buffer and returns a pointer to the start of
// each null-terminated line.

long __stdcall16far
Parser_Get_Next_CSV_Line_Pointer_4dbc(void *this_ptr,void *buffer,long line_count)
{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  astruct_277 *uVar4;
  undefined2 uVar5;
  
  uVar4 = (astruct_277 *)this_ptr;
  uVar5 = (undefined2)((ulong)this_ptr >> 0x10);
  if (0x0 < line_count)
  {
    uVar4->field352_0x160 = buffer;
    uVar4->field353_0x164 = line_count;
  }
  pvVar1 = uVar4->field352_0x160;
  if ((pvVar1 == NULL) ||
     (lVar2 = uVar4->field353_0x164,
     uVar4->field353_0x164 = uVar4->field353_0x164 + -0x1, lVar2 == 0x0))
  {
    uVar4->field352_0x160 = NULL;
  }
  else
  {
    uVar3 = strlen_get_length(uVar4->field352_0x160);
    *(uint *)&uVar4->field352_0x160 = *(int *)&uVar4->field352_0x160 + uVar3 + 0x2;
  }
  return (long)pvVar1;
}



// Pre-processes a text buffer by replacing all newline and carriage return characters
// with null terminators. Returns the line count.

int __stdcall16far
Parser_Replace_Newlines_with_Nulls_4e34(u16 arg1,u16 arg2,long size,char *buffer)
{
  undefined2 in_stack_0000000e;
  int iStack_4;
  
  iStack_4 = 0x0;
  do
  {
    if (size == 0x0)
    {
      return iStack_4;
    }
    if (*_buffer == '\r')
    {
      iStack_4 += 0x1;
LAB_1030_4e5e:
      *_buffer = '\0';
    }
    else if (*_buffer == '\n') goto LAB_1030_4e5e;
    _buffer = (char *)CONCAT22(in_stack_0000000e,buffer + 0x1);
    size = size + -0x1;
  } while( true );
}



// Sets the name string for the internal object linked to a production item. Similar to
// 1030:301A but uses production item offsets.

void __stdcall16far
UI_Production_Item_Set_Object_Name_Logic_5b6c(astruct_268 *param_1,char *param_2)
{
  char *pcVar1;
  u16 in_DX;
  astruct_268 *uVar2;
  astruct_269 *iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  
  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
  uVar2 = (astruct_268 *)param_1;
  if (uVar2->field16_0x10 != 0x0)
  {
    free_if_not_null((void *)(void *)*(undefined4 *)((int)uVar2->field16_0x10 + 0x4));
    pcVar1 = strdup_allocate(param_2);
    uVar4 = (undefined2)((ulong)uVar2->field16_0x10 >> 0x10);
    iVar2 = (astruct_269 *)(astruct_269 *)uVar2->field16_0x10;
    iVar2->field4_0x4 = pcVar1;
    iVar2->field5_0x6 = in_DX;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Writes a formatted debug message to 'simres.out'. Used for internal simulator tracing
// and resource validation.

void __cdecl16far Simulator_Log_Debug_Message_to_File_840a(void *param_1)
{
  int *piVar1;
  undefined2 in_DX;
  undefined2 unaff_SS;
  undefined1 local_106 [0x100];
  undefined1 *puStack_6;
  
  if (PTR_DAT_1050_0000_1050_574c != NULL)
  {
    _puStack_6 = (undefined1 *)CONCAT22(unaff_SS,&stack0x0008);
    if (PTR_DAT_1050_0000_1050_5750 == NULL)
    {
      piVar1 = handle_open_file_wrapper
                         ((char *)s_simres_out_1050_5758,(char *)(dword *)&g_HeapContext
                         );
      _PTR_DAT_1050_0000_1050_5752 = (int *)CONCAT22(in_DX,piVar1);
      PTR_DAT_1050_0000_1050_5750 = (undefined *)0x1;
    }
    wvsprintf16(_puStack_6,param_1,(undefined1 *)CONCAT22(unaff_SS,local_106));
    handle_open_resource_locked(_PTR_DAT_1050_0000_1050_5752,0x5763,0x1050,local_106);
    handle_flush_specific(_PTR_DAT_1050_0000_1050_5752);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Extremely complex routine that scans for valid adjacent sites and spawns sub-entities
// (roads, connectors) to bridge new buildings to the infrastructure. Handles multiple
// building type groups (0x7A-0x7D, 0x4C-0x4E).

void __stdcall16far
Simulator_Process_Site_Adjacency_Spawning_951a(void *arg1,void *arg2,void *arg3)
{
  undefined2 *puVar1;
  u16 uVar2;
  astruct_210 *paVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  int extraout_DX;
  int extraout_DX_00;
  int extraout_DX_01;
  u32 *puVar10;
  int extraout_DX_02;
  int extraout_DX_03;
  int extraout_DX_04;
  int extraout_DX_05;
  uint uVar11;
  int extraout_DX_06;
  int iVar12;
  astruct_210 *puVar9;
  undefined2 uVar13;
  ulong uVar14;
  u8 *puVar15;
  void *pvVar16;
  undefined2 uVar17;
  void *pvVar18;
  int iVar19;
  undefined4 uStack_5e;
  undefined4 uStack_4c;
  ulong uStack_3e;
  undefined4 uStack_3a;
  undefined4 local_36;
  void *uStack_2e;
  void *pvStack_2a;
  uint uStack_28;
  u16 uStack_26;
  void *pvStack_24;
  void *pvStack_20;
  int iStack_1c;
  u16 uStack_14;
  undefined4 uStack_12;
  int iStack_e;
  int iStack_c;
  long lStack_a;
  astruct_210 *paStack_6;
  astruct_206 *uVar15;
  astruct_207 *puVar7;
  astruct_208 *iVar3;
  astruct_209 *puVar8;
  astruct_211 *puVar17;
  astruct_212 *puVar18;
  astruct_213 *iVar4;
  astruct_214 *iVar5;
  
  lStack_a = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x35);
  iVar19 = (int)((ulong)lStack_a >> 0x10);
  _iStack_e = CONCAT22(iVar19,(int)lStack_a + 0xa);
  uVar2 = Simulator_Process_Site_Adjacency_Validation_9048(arg1,0x0,arg3);
  if (uVar2 != 0x0)
  {
    iStack_1c = 0x0;
    pvStack_20 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x8);
    uVar13 = (undefined2)((ulong)pvStack_20 >> 0x10);
    pvStack_24 = (void *)*(long *)((int)(void *)pvStack_20 + 0xe);
    iVar19 = *(int *)((int)(void *)pvStack_20 + 0x10);
    if (iVar19 != 0x0 || (void *)pvStack_24 != NULL)
    {
      init_long_pair(&local_36,(long)CONCAT22(iVar19,(void *)pvStack_24));
      while( true )
      {
        uStack_2e = (void *)get_next_list_item(&local_36);
        uVar11 = (uint)((ulong)uStack_2e >> 0x10);
        pvVar18 = (void *)uStack_2e;
        uVar6 = uVar11 | (uint)pvVar18;
        iVar19 = 0x0;
        if (uVar6 == 0x0) break;
        if ((*(int *)((int)pvVar18 + 0x4) != 0x3e) &&
           (*(int *)((int)pvVar18 + 0x4) != 0x41))
        {
          paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
          uStack_3a = (astruct_210 *)CONCAT22(uVar6,paVar3);
          if (uVar6 == 0x0 && paVar3 == NULL)
          {
            paStack_6 = NULL;
          }
          else
          {
            uVar2 = *(u16 *)((int)(void *)uStack_2e + 0x4);
            uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
            paVar3->field1_0x2 = 0x1008;
            paVar3->field2_0x4 = uVar2;
            uStack_3a->field0_0x0 = 0x9ec8;
            paVar3->field1_0x2 = 0x1030;
            paStack_6 = uStack_3a;
          }
          puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
          (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,
                             (int)((ulong)paStack_6 >> 0x10));
          if (*(int *)((int)(void *)uStack_2e + 0x4) == 0x13)
          {
            iStack_1c = 0x1;
          }
        }
      }
    }
    for (uStack_26 = 0xa; (int)uStack_26 < 0x41; uStack_26 += 0x1)
    {
      if ((((((uStack_26 != 0x37) && (uStack_26 != 0x35)) && (uStack_26 != 0x36)) &&
           ((uStack_26 != 0x25 && (uStack_26 != 0x26)))) &&
          ((uStack_26 != 0x27 &&
           ((*(int *)(uStack_26 * 0x2 + (int)_iStack_e) != 0x0 && (uStack_26 != 0x13))))
          )) && ((uStack_26 != 0x14 || (iStack_1c == 0x0))))
      {
        paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
        if (iVar19 == 0x0 && paVar3 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
          paVar3->field1_0x2 = 0x1008;
          paVar3->field2_0x4 = uStack_26;
          uStack_3a->field0_0x0 = 0x9ec8;
          paVar3->field1_0x2 = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10)
                          );
        iVar19 = extraout_DX;
      }
    }
  }
  uVar13 = (undefined2)((ulong)_iStack_e >> 0x10);
  if (*(int *)((int)_iStack_e + 0x6a) == 0x0)
  {
    if (*(int *)((int)_iStack_e + 0x6c) != 0x0)
    {
      paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
      if (iVar19 == 0x0 && paVar3 == NULL) goto LAB_1030_973e;
      uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
      paVar3->field1_0x2 = 0x1008;
      paVar3->field2_0x4 = 0x36;
      goto LAB_1030_9728;
    }
  }
  else
  {
    paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
    uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
    if (iVar19 == 0x0 && paVar3 == NULL)
    {
LAB_1030_973e:
      paStack_6 = NULL;
    }
    else
    {
      uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
      paVar3->field1_0x2 = 0x1008;
      paVar3->field2_0x4 = 0x35;
LAB_1030_9728:
      paVar3->field0_0x0 = 0x9ec8;
      paVar3->field1_0x2 = 0x1030;
      paStack_6 = uStack_3a;
    }
    puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
    (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
    iVar19 = extraout_DX_00;
  }
  uVar13 = (undefined2)((ulong)_iStack_e >> 0x10);
  iVar12 = (int)_iStack_e;
  pvVar18 = (void *)_p_Pool_Type6_Node;
  if (*(int *)(iVar12 + 0x4a) == 0x0)
  {
    if (*(int *)(iVar12 + 0x4c) == 0x0)
    {
      if (*(int *)(iVar12 + 0x4e) == 0x0) goto LAB_1030_97e8;
      puVar9 = validate_and_get_block(pvVar18);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
      if (iVar19 != 0x0 || puVar9 != NULL)
      {
        uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
        puVar9->field1_0x2 = 0x1008;
        puVar9->field2_0x4 = 0x27;
        goto LAB_1030_9879;
      }
    }
    else
    {
      puVar9 = validate_and_get_block(pvVar18);
      uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
      if (iVar19 != 0x0 || puVar9 != NULL)
      {
        uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
        puVar9->field1_0x2 = 0x1008;
        puVar9->field2_0x4 = 0x26;
        goto LAB_1030_9879;
      }
    }
LAB_1030_97d0:
    paStack_6 = NULL;
  }
  else
  {
    puVar9 = validate_and_get_block(pvVar18);
    uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar9);
    if (iVar19 == 0x0 && puVar9 == NULL) goto LAB_1030_97d0;
    uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
    puVar9->field1_0x2 = 0x1008;
    puVar9->field2_0x4 = 0x25;
LAB_1030_9879:
    puVar9->field0_0x0 = 0x9ec8;
    puVar9->field1_0x2 = 0x1030;
    paStack_6 = uStack_3a;
  }
  puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
  (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
  iVar19 = extraout_DX_01;
LAB_1030_97e8:
  uVar13 = (undefined2)((ulong)lStack_a >> 0x10);
  uStack_12 = CONCAT22(uVar13,(int)lStack_a + 0x11e);
  if (*(int *)((int)lStack_a + 0x138) != 0x0)
  {
    puVar4 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    uVar13 = 0x1038;
    puVar10 = Colony_Batch_Init_Production_Items_by_Type_Logic_4d6e(arg3,puVar4,iVar19);
    uStack_4c = (undefined4 *)CONCAT22(puVar10,puVar4);
    puVar1 = (undefined2 *)((int)*uStack_4c + 0x10);
    uVar14 = (*(code *)*puVar1)(0x1038,puVar4,puVar10);
    iVar19 = (int)(uVar14 >> 0x10);
    for (uStack_3e = 0x0; uStack_3e < uVar14; uStack_3e += 0x1)
    {
      puVar1 = (undefined2 *)((int)*uStack_4c + 0x4);
      puVar15 = (u8 *)(*(code *)*puVar1)(uVar13,puVar4,puVar10,(int)uStack_3e,
                                         (int)(uStack_3e >> 0x10));
      iVar19 = 0xd;
      local_36 = puVar15;
      uStack_2e = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)puVar15);
      pvVar16 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_2e);
      uVar11 = (uint)((ulong)pvVar16 >> 0x10);
      pvStack_2a = (void *)pvVar16;
      uVar13 = 0x1028;
      uStack_28 = uVar11;
      uVar2 = UI_Item_List_Get_Value_by_ID_Offset6_6744(pvVar16,iVar19);
      uVar11 |= uVar2;
      if (uVar11 != 0x0)
      {
        pvStack_20 = _p_Pool_Type6_Node;
        puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(uVar11,puVar5);
        if (uVar11 == 0x0 && puVar5 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          *(char **)uStack_3a = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x4c;
          *(undefined2 *)uStack_3a = 0x9ec8;
          puVar5[0x1] = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,(undefined2 *)paStack_6,
                           (int)((ulong)paStack_6 >> 0x10));
        pvStack_24 = _p_Pool_Type6_Node;
        iVar19 = extraout_DX_02;
        puVar5 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,puVar5);
        if (iVar19 == 0x0 && puVar5 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          *(char **)uStack_3a = (char *)s_1_1050_389a;
          puVar5[0x1] = 0x1008;
          puVar5[0x2] = 0x4d;
          *(undefined2 *)uStack_3a = 0x9ec8;
          puVar5[0x1] = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar5 = (undefined2 *)paStack_6;
        uVar17 = (undefined2)((ulong)paStack_6 >> 0x10);
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        pvVar16 = arg2;
        (*(code *)*puVar1)();
        pvStack_24 = _p_Pool_Type6_Node;
        uVar13 = 0x1000;
        iVar19 = extraout_DX_03;
        paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
        uStack_3a = (astruct_210 *)CONCAT22(iVar19,paVar3);
        if (iVar19 == 0x0 && paVar3 == NULL)
        {
          paStack_6 = NULL;
        }
        else
        {
          uStack_3a->field0_0x0 = (u16)(char *)s_1_1050_389a;
          paVar3->field1_0x2 = 0x1008;
          paVar3->field2_0x4 = 0x4e;
          uStack_3a->field0_0x0 = 0x9ec8;
          paVar3->field1_0x2 = 0x1030;
          paStack_6 = uStack_3a;
        }
        puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
        (*(code *)*puVar1)(0x1000,arg2,paStack_6,pvVar16,puVar5,uVar17);
        iVar19 = extraout_DX_04;
        break;
      }
      iVar19 = 0x0;
    }
    if (uStack_4c != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_4c)(uVar13,puVar4,puVar10,0x1);
      iVar19 = extraout_DX_05;
    }
  }
  for (uStack_14 = 0x7a; (int)uStack_14 < 0x7d; uStack_14 += 0x1)
  {
    if (*(int *)(uStack_14 * 0x2 + (int)_iStack_e) != 0x0)
    {
      paVar3 = validate_and_get_block((void *)_p_Pool_Type6_Node);
      uStack_5e = (astruct_210 *)CONCAT22(iVar19,paVar3);
      if (iVar19 == 0x0 && paVar3 == NULL)
      {
        paStack_6 = NULL;
      }
      else
      {
        uStack_5e->field0_0x0 = (u16)(char *)s_1_1050_389a;
        paVar3->field1_0x2 = 0x1008;
        paVar3->field2_0x4 = uStack_14;
        uStack_5e->field0_0x0 = 0x9ec8;
        paVar3->field1_0x2 = 0x1030;
        paStack_6 = uStack_5e;
      }
      puVar1 = (undefined2 *)((int)*(undefined4 *)arg2 + 0x8);
      (*(code *)*puVar1)(0x1000,arg2,(void *)paStack_6,(int)((ulong)paStack_6 >> 0x10));
      iVar19 = extraout_DX_06;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Finds the first available building name string index and triggers placement
// initialization (9f7a).

void __stdcall16far UI_Build_Item_Find_String_and_Init_9f40(void *this_ptr,u16 type_id)
{
  int type_id_00;
  
  type_id_00 = res_find_first_available_string_index_logic
                         (_p_StringPropertyTable,type_id);
  *(int *)((int)(void *)this_ptr + 0x8) = type_id_00;
  UI_Build_Item_Execute_Placement_Logic_9f7a(this_ptr,type_id_00);
  return;
}



// Constructor for a UI component using vtable 0xB932. Initializes an internal object
// via construct-with-vtable and sets its initial state.

void * __stdcall16far UI_Component_Type_B932_ctor_ae6c(void *this_ptr)
{
  astruct_491 *this;
  u16 *puVar1;
  uint in_DX;
  uint uVar2;
  astruct_193 *uVar3;
  undefined2 uVar4;
  undefined4 in_stack_0000ffee;
  undefined2 uVar5;
  
  uVar4 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar3 = (astruct_193 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar3->field2_0x2 = 0x1008;
  uVar3->field3_0x4 = 0x0;
  uVar5 = (undefined2)((ulong)in_stack_0000ffee >> 0x10);
  zero_init_struct_6bytes(&uVar3->field_0x8);
  uVar3->field10_0xe = 0x0;
  (&uVar3->field11_0x10)[0x0] = NULL;
  (&uVar3->field11_0x10)[0x1] = NULL;
  *(undefined2 *)this_ptr = 0xb932;
  uVar3->field2_0x2 = 0x1030;
  this = allocate_memory(CONCAT22(uVar5,0xc));
  uVar2 = in_DX | (uint)this;
  if (uVar2 == 0x0)
  {
    (&uVar3->field11_0x10)[0x0] = NULL;
    (&uVar3->field11_0x10)[0x1] = NULL;
  }
  else
  {
    puVar1 = construct_object_with_vtable(this,in_DX);
    uVar3->field11_0x10 = puVar1;
    uVar3->field12_0x12 = uVar2;
  }
  *(undefined2 *)((int)*(undefined4 *)&uVar3->field11_0x10 + 0xa) = 0x0;
  return this_ptr;
}



// Parameterized constructor for a UI component using vtable 0xB932. Initializes state
// from a provided template object.

void * __stdcall16far
UI_Component_Type_B932_ctor_with_Params_aefa(void *this_ptr,u16 template_offset)
{
  astruct_491 *this;
  u16 *puVar1;
  uint in_DX;
  uint uVar2;
  astruct_192 *uVar4;
  void *src;
  undefined2 in_stack_0000000a;
  undefined2 in_stack_0000ffec;
  
  src = (void *)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_192 *)this_ptr;
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar4->field2_0x2 = 0x1008;
  uVar4->field3_0x4 = 0x0;
  zero_init_struct_6bytes(&uVar4->field_0x8);
  uVar4->field10_0xe = 0x0;
  (&uVar4->field11_0x10)[0x0] = NULL;
  (&uVar4->field11_0x10)[0x1] = NULL;
  *(undefined2 *)this_ptr = 0xb932;
  uVar4->field2_0x2 = 0x1030;
  uVar4->field3_0x4 = *(u32 *)(template_offset + 0x4);
  copy_struct_6bytes(&uVar4->field_0x8,src);
  this = allocate_memory(CONCAT22(in_stack_0000ffec,0xc));
  uVar2 = in_DX | (uint)this;
  if (uVar2 == 0x0)
  {
    puVar1 = NULL;
    uVar2 = 0x0;
  }
  else
  {
    puVar1 = construct_object_with_vtable(this,in_DX);
  }
  uVar4->field11_0x10 = puVar1;
  uVar4->field12_0x12 = uVar2;
  *(undefined2 *)((int)*(undefined4 *)&uVar4->field11_0x10 + 0xa) = 0x0;
  return this_ptr;
}



// Internal destructor for UI component type 0xB932. Marks the internal object as
// inactive before calling its virtual destructor.

void __stdcall16far UI_Component_Type_B932_dtor_Internal_afa6(void *this_ptr)
{
  undefined2 *puVar1;
  astruct_191 *uVar2;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((ulong)this_ptr >> 0x10);
  uVar2 = (astruct_191 *)this_ptr;
  *(undefined2 *)this_ptr = 0xb932;
  uVar2->field2_0x2 = 0x1030;
  if (*(long *)&uVar2->field_0x10 != 0x0)
  {
    *(undefined2 *)((int)*(undefined4 *)&uVar2->field_0x10 + 0xa) = 0x1;
  }
  if (uVar2->field17_0x12 != 0x0 || *(undefined4 **)&uVar2->field_0x10 != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)**(undefined4 **)&uVar2->field_0x10;
    (*(code *)*puVar1)();
  }
  *(char **)this_ptr = (char *)s_1_1050_389a;
  uVar2->field2_0x2 = 0x1008;
  return;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_Alternative_e282(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_e98e(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  int iVar6;
  undefined2 unaff_SI;
  undefined4 *puVar7;
  undefined2 uVar8;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x112));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar8 = (undefined2)(param_1 >> 0x10);
    iVar6 = (int)param_1;
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)(iVar6 + 0x4);
    puVar4 = (undefined4 *)(iVar6 + 0x8);
    puVar7 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar7;
      puVar7 = puVar7 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined4 *)((int)pvVar3 + 0x108) = *(undefined4 *)(iVar6 + 0x108);
    *(undefined4 *)((int)pvVar3 + 0x10c) = *(undefined4 *)(iVar6 + 0x10c);
    *(undefined2 *)((int)pvVar3 + 0x110) = *(undefined2 *)(iVar6 + 0x110);
    *(undefined2 *)local_a = 0xeb40;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1030;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_eb14(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}



u16 * __stdcall16far Simulator_Object_Clone_Logic_ebf8(u32 param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_DX;
  undefined2 unaff_SI;
  undefined4 *puVar6;
  undefined2 uVar7;
  u32 local_a;
  u32 local_6;
  
  pvVar3 = allocate_memory(CONCAT22(unaff_SI,0x108));
  local_a = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    uVar7 = (undefined2)(param_1 >> 0x10);
    *(undefined4 *)((int)pvVar3 + 0x4) = *(undefined4 *)((int)param_1 + 0x4);
    puVar4 = (undefined4 *)((int)param_1 + 0x8);
    puVar6 = (undefined4 *)((int)pvVar3 + 0x8);
    for (iVar5 = 0x40; iVar5 != 0x0; iVar5 += -0x1)
    {
      puVar2 = puVar6;
      puVar6 = puVar6 + 0x1;
      puVar1 = puVar4;
      puVar4 = puVar4 + 0x1;
      *puVar2 = *puVar1;
    }
    *(undefined2 *)local_a = 0x6ad2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1028;
    *(undefined2 *)local_a = 0xecb2;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1030;
    local_6 = local_a;
  }
  return (u16 *)local_6;
}



void * __stdcall16far
Base_Object_dtor_Scalar_Deleting_v389a_ec86(void *this_ptr,byte flags)
{
  *(char **)this_ptr = (char *)s_1_1050_389a;
  *(undefined2 *)((int)(void *)this_ptr + 0x2) = 0x1008;
  if ((flags & 0x1) != 0x0)
  {
    free_if_not_null((void *)this_ptr);
  }
  return this_ptr;
}
