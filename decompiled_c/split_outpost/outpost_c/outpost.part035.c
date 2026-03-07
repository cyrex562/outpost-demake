/*
 * Source: outpost.c
 * Chunk: 35/117
 * Original lines: 38655-40245
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Instruction at (ram,0x1010718b) overlaps instruction at (ram,0x10107189)
// 
// WARNING (jumptable): Unable to track spacebase fully for stack
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Massive UI String Formatting Engine (~100 types). Resolves entity names, calculates
// simulation values (pop, cargo), and performs substitution into resource templates.
// Features extensive jump tables and far pointer logic.

char * __stdcall16far
UI_Generate_Formatted_Label_Logic(int offset,int segment,char *format_id)
{
  byte *pbVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  u8 *puVar5;
  undefined2 *puVar6;
  char cVar7;
  char *pcVar8;
  uint uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  void *pvVar13;
  byte *pbVar14;
  char *pcVar15;
  char *pcVar16;
  undefined1 uVar17;
  byte bVar18;
  ulong in_ECX;
  uint uVar19;
  char *pcVar20;
  char *pcVar21;
  undefined1 *puVar22;
  undefined2 *puVar23;
  undefined2 *puVar24;
  undefined2 *unaff_SI;
  undefined4 *unaff_DI;
  int iVar25;
  undefined2 uVar26;
  dword *unaff_SS;
  undefined2 in_FS;
  bool bVar27;
  bool bVar28;
  char *pcVar29;
  undefined **ppuVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  void *pvVar34;
  undefined4 *puVar35;
  undefined1 in_stack_00000003;
  undefined2 in_stack_0000000a;
  uint in_stack_0000000c;
  byte in_stack_00000024;
  char in_stack_0000003c;
  char acStackY_307 [0x100];
  char acStackY_207 [0x100];
  char acStackY_107 [0x9d];
  byte bStackY_6a;
  undefined2 uStackY_54;
  undefined2 uStackY_52;
  int *base_array;
  int iVar36;
  undefined2 uVar37;
  undefined1 uVar38;
  dword *height;
  undefined4 uStack_3c;
  char *pcStack_3a;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  u16 local_18;
  char *local_16;
  undefined **ppuStack_14;
  dword *pdStack_12;
  void *pvStack_10;
  undefined4 uStack_e;
  char *pcStack_a;
  undefined **ppuStack_8;
  dword *pdStack_6;
  undefined2 uStack_4;
  
  ((char *)s__lu_1050_381f)[0x1] = '\0';
  iVar25 = (int)((ulong)*(undefined4 *)(offset + 0x138) >> 0x10);
  pcVar21 = (char *)(char *)*(undefined4 *)(offset + 0x138);
  puVar5 = *(u8 **)(pcVar21 + 0x24);
  pdStack_6 = (dword *)puVar5;
  uStack_4 = (undefined2)((ulong)puVar5 >> 0x10);
  uVar17 = SUB41(puVar5,0x0);
  uVar38 = (undefined1)((ulong)puVar5 >> 0x8);
  uVar26 = 0x1028;
  puVar23 = unaff_SI;
  pcVar29 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                      (_p_SimulatorWorldContext,(u8 *)pdStack_6);
  pcVar15 = (char *)CONCAT11(uVar38,uVar17);
  pcStack_a = (char *)pcVar29;
  ppuStack_8 = (undefined **)(int)((ulong)pcVar29 >> 0x10);
  uVar37 = 0x0;
  uStack_e._0_2_ = NULL;
  uStack_e._2_2_ = NULL;
  pvStack_10 = NULL;
  if ((char *)CONCAT22(in_stack_0000000a,format_id) != NULL)
  {
    uVar26 = 0x1030;
    pcVar15 = format_id;
    pcVar29 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8
                        ((char *)CONCAT22(in_stack_0000000a,format_id));
    pcVar21 = (char *)pcVar29;
    uStack_e._0_2_ = (dword *)pcVar21;
    iVar25 = (int)((ulong)pcVar29 >> 0x10);
    uStack_e._2_2_ = (void *)iVar25;
    pvStack_10 = (void *)*(u16 *)(pcVar21 + 0xc);
  }
  pcVar20 = (char *)((ulong)pcVar29 >> 0x10);
  height = (dword *)((ulong)pcVar29 >> 0x10);
  if (in_stack_0000000c == 0x177e)
  {
    uStack_28 = (undefined **)
                UI_Get_Entity_Property_by_Array_Index_Logic
                          (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),
                           0x10);
    uVar33 = (ulong)uStack_28 >> 0x10;
    puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_28 + 0x10);
    ppuVar12 = (undefined **)(*(code *)*puVar6)();
    uStack_24 = (undefined **)CONCAT22((int)uVar33,ppuVar12);
    for (uStack_20 = NULL; uVar37 = (undefined2)uVar33, uStack_20 < uStack_24;
        uStack_20 = (undefined **)((long)uStack_20 + 0x1))
    {
      puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_28 + 0x4);
      ppuVar12 = (undefined **)(*(code *)*puVar6)();
      uStack_1c = (undefined **)CONCAT22(uVar37,ppuVar12);
      ppuVar30 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                           (_p_SimulatorWorldContext,(u8 *)ppuVar12);
      pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
      ppuStack_14 = (undefined **)ppuVar30;
      pvVar34 = UI_Component_Find_Item_in_List_22_Logic_7c28(ppuVar30,0x1e);
      uVar33 = (ulong)pvVar34 >> 0x10;
    }
    if (uStack_28 != NULL)
    {
      (*(code *)*(undefined2 *)*(undefined2 **)uStack_28)();
    }
    goto LAB_1010_b1f5;
  }
  base_array = (int *)_p_StringPropertyTable;
  iVar36 = (int)((ulong)_p_StringPropertyTable >> 0x10);
  if (in_stack_0000000c < 0x177f)
  {
    if (in_stack_0000000c == 0x13b6)
    {
      height = (dword *)&g_HeapContext;
      uVar17 = 0xa4;
      uVar38 = 0x38;
      goto LAB_1010_b18a;
    }
    if (in_stack_0000000c < 0x13b7)
    {
      if (in_stack_0000000c == 0x1392)
      {
        height = (dword *)&g_HeapContext;
        uVar17 = 0x92;
        uVar38 = 0x38;
      }
      else
      {
        if (0x1392 < in_stack_0000000c)
        {
          if ((in_stack_0000000c + 0xec6a & 0x3) == 0x0)
          {
            pbVar14 = (byte *)(in_stack_0000000c + 0xec6a >> 0x1);
            bVar28 = SBORROW2((int)pbVar14,0xe);
            if (pbVar14 < (byte *)((int)(undefined **)&p_SmallBlockFreeList + 0x1))
            {
              pcVar16 = (char *)CONCAT22(uVar37,pcVar21);
              switch(pbVar14)
              {
              case NULL:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x94;
                uVar38 = 0x38;
                break;
              case (byte *)0x1:
switchD_1010_bdb5_caseD_1:
                puVar23 = (undefined2 *)((int)unaff_SI + 0x1);
                pcVar21 = (char *)pcVar20;
                out(*(undefined1 *)unaff_SI,pcVar21);
                pcVar16 = (char *)CONCAT31((int3)((ulong)pcVar16 >> 0x8),0x6e);
                if (bVar28) goto LAB_1010_70b3;
                out(*(undefined1 *)puVar23,pcVar21);
                cVar7 = (char)(in_ECX >> 0x8);
                uVar17 = (undefined1)in_ECX;
                bVar18 = cVar7 + pbVar14[0x3e];
                in_ECX = (ulong)CONCAT11(bVar18,uVar17);
                while( true )
                {
                  puVar23 = unaff_SI + 0x1;
                  bVar28 = true;
                  if (SCARRY1(cVar7,pbVar14[0x3e])) goto LAB_1010_7105;
                  if (true) break;
                  out(*puVar23,pcVar21);
                  unaff_SI = puVar23;
                }
                puVar24 = (undefined2 *)((int)unaff_DI + 0x2);
                uVar37 = in(pcVar21);
                *(undefined2 *)unaff_DI = uVar37;
                unaff_DI = unaff_DI + 0x1;
                uVar37 = in(pcVar21);
                *puVar24 = uVar37;
                bVar28 = false;
                pbVar14[0x3e] = pbVar14[0x3e] | bVar18;
                if (false) goto LAB_1010_70f5;
                out(*puVar23,pcVar21);
                bVar28 = SBORROW1(bVar18,pbVar14[0x30]);
                in_ECX = (ulong)CONCAT11(bVar18 - pbVar14[0x30],uVar17);
                puVar23 = unaff_SI + 0x3;
                out(unaff_SI[0x2],pcVar21);
                if (bVar28) goto LAB_1010_7114_1;
code_r0x101070d9:
                puVar24 = puVar23 + 0x1;
                out(*puVar23,(char *)pcVar20);
                puVar23 = puVar23 + 0x2;
                out(*puVar24,(char *)pcVar20);
                if (bVar28) goto LAB_1010_711d;
LAB_1010_70df:
                pcVar21 = (char *)pcVar20;
                if (bVar28)
                {
                  pcVar29 = pcVar16;
                  if (true) goto LAB_1010_70ad;
                  goto code_r0x10107121;
                }
                do
                {
                  if (false)
                  {
                    if (false) goto LAB_1010_7114;
                    goto code_r0x10107127;
                  }
                  puVar6 = puVar23;
                  puVar23 = puVar23 + 0x1;
                  out(*puVar6,pcVar21);
                } while (false);
                puVar35 = unaff_DI;
                unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
                uVar37 = in(pcVar21);
                *(undefined2 *)puVar35 = uVar37;
                if (false) goto LAB_1010_7129;
LAB_1010_70eb:
                pcVar21 = (char *)pcVar20;
                if (bVar28) goto LAB_1010_712b;
                if (false) goto LAB_1010_712d;
                if (true)
                {
LAB_1010_70f1:
                  do
                  {
                    puVar6 = puVar23;
                    puVar23 = puVar23 + 0x1;
                    pcVar21 = (char *)pcVar20;
                    out(*puVar6,pcVar21);
                    bVar27 = true;
                    if (bVar28) goto LAB_1010_7133;
LAB_1010_70f5:
                    if (!bVar28)
                    {
                      puVar35 = unaff_DI;
                      unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
                      uVar37 = in((char *)pcVar20);
                      *(undefined2 *)puVar35 = uVar37;
                      while( true )
                      {
                        puVar24 = (undefined2 *)((int)unaff_DI + 0x2);
                        uVar37 = in((char *)pcVar20);
                        *(undefined2 *)unaff_DI = uVar37;
                        unaff_DI = unaff_DI + 0x1;
                        uVar37 = in((char *)pcVar20);
                        *puVar24 = uVar37;
                        if (bVar28) break;
                        do
                        {
                          puVar24 = puVar23;
                          if (false)
                          {
                            if (false) goto LAB_1010_70df;
                            goto LAB_1010_7141;
                          }
                          if (false) goto LAB_1010_7141;
                        } while (false);
LAB_1010_7105:
                        puVar35 = unaff_DI;
                        unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
                        pcVar21 = (char *)pcVar20;
                        uVar37 = in(pcVar21);
                        *(undefined2 *)puVar35 = uVar37;
                        out(*puVar23,pcVar21);
                        if (bVar28)
                        {
                          UI_Dispatch_Global_Event_Logic
                                    (*(long *)(offset + 0x14),(int)format_id);
                          return (char *)pcVar16;
                        }
                        puVar24 = puVar23 + 0x2;
                        out(puVar23[0x1],pcVar21);
                        puVar22 = &stack0xfffe;
                        if (((ulong)pcVar16 & 0x4000) != 0x0) goto LAB_1010_717e;
                        puVar23 = puVar23 + 0x3;
                        out(*puVar24,pcVar21);
                        if (false) goto LAB_1010_7181;
                        if (((ulong)pcVar16 & 0x400) != 0x0) goto LAB_1010_7181_2;
LAB_1010_7114:
                        while( true )
                        {
                          uVar37 = (undefined2)in_ECX;
                          if (bVar28)
                          {
                            do
                            {
                              if (!bVar28)
                              {
                                if (true) goto code_r0x1010709b;
                                goto LAB_1010_6d1e;
                              }
                              if (false) goto code_r0x101070d9;
LAB_1010_7114_1:
                              uVar37 = (undefined2)in_ECX;
                            } while (bVar28);
                          }
                          puVar24 = puVar23 + 0x1;
                          pcVar21 = (char *)pcVar20;
                          out(*puVar23,pcVar21);
                          LOCK();
                          bVar18 = pbVar14[-0x13];
                          pbVar14[-0x13] = (byte)((uint)uVar37 >> 0x8);
                          in_ECX = (ulong)CONCAT11(bVar18,(char)uVar37);
                          UNLOCK();
                          puVar23 = (undefined2 *)((int)puVar23 + 0x3);
                          out(*(undefined1 *)puVar24,pcVar21);
                          pcVar21 = (char *)in(pcVar21);
                          pcVar16 = (char *)CONCAT22((int)((ulong)pcVar16 >> 0x10),
                                                     pcVar21);
LAB_1010_711d:
                          puVar6 = puVar23;
                          puVar23 = (undefined2 *)((int)puVar23 + 0x1);
                          pcVar21 = (char *)pcVar20;
                          out(*(undefined1 *)puVar6,pcVar21);
                          pcVar29 = pcVar16;
                          if (bVar28) break;
code_r0x10107121:
                          puVar24 = puVar23 + 0x1;
                          out(*puVar23,pcVar21);
                          pcVar16 = (char *)CONCAT22((int)((ulong)pcVar29 >> 0x10),
                                                     pcVar21);
                          pcVar20 = (char *)((ulong)pcVar29 & 0xffff);
                          pcVar21 = (char *)pcVar29;
                          puVar23 = puVar23 + 0x2;
                          out(*puVar24,pcVar21);
                          if (!bVar28) goto code_r0x10107127;
                        }
LAB_1010_70ad:
                        while( true )
                        {
                          puVar35 = unaff_DI;
                          unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
                          uVar37 = in((char *)pcVar20);
                          *(undefined2 *)puVar35 = uVar37;
                          pcVar16 = (char *)CONCAT31((int3)((ulong)pcVar16 >> 0x8),0x6e)
                          ;
                          bVar28 = false;
                          bStackY_6a >>= 0x1;
LAB_1010_70b3:
                          pcVar21 = (char *)pcVar20;
                          out(*puVar23,pcVar21);
                          if (!bVar28)
                          {
                            unaff_SI = (undefined2 *)((int)puVar23 + 0x3);
                            out(*(undefined1 *)(puVar23 + 0x1),pcVar21);
                            goto switchD_1010_bdb5_caseD_1;
                          }
                          puVar24 = (undefined2 *)((int)puVar23 + 0x3);
                          out(*(undefined1 *)(puVar23 + 0x1),pcVar21);
                          puVar23 = (undefined2 *)((int)puVar23 + 0x5);
                          out(*puVar24,pcVar21);
                          if (true) break;
                          puVar35 = unaff_DI;
                          unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
                          uVar37 = in(pcVar21);
                          *(undefined2 *)puVar35 = uVar37;
                          bVar27 = SBORROW1(in_stack_0000003c,'p');
                          in_stack_0000003c += -0x70;
                          bVar28 = false;
                          if (bVar27)
                          {
LAB_1010_6d1e:
                            pbVar1 = pbVar14;
                            *pbVar1 = *pbVar1 >> 0x4 | *pbVar1 << 0x4;
                            UI_Broadcast_Virtual_Notification_Wrapper();
                            return (char *)0x1;
                          }
code_r0x1010709b:
                          pcVar21 = (char *)pcVar20;
                          out(*(undefined1 *)puVar23,pcVar21);
                          out(*(undefined1 *)((int)puVar23 + 0x1),pcVar21);
                          if (bVar28)
                          {
                            pbVar14[-0xc] =
                                 pbVar14[-0xc] + (char)((ulong)pcVar20 >> 0x8);
                // WARNING: Could not recover jumptable at 0x1010704d. Too many branches
                // WARNING: Treating indirect jump as call
                            pcVar15 = (char *)(*(code *)*(undefined2 *)
                                                         ((int)(char *)pcVar16 * 0x2 +
                                                         0x7052))();
                            return pcVar15;
                          }
                          puVar22 = (undefined1 *)((int)puVar23 + 0x3);
                          out(*(undefined1 *)(puVar23 + 0x1),pcVar21);
                          uVar37 = in(pcVar21);
                          *(undefined2 *)unaff_DI = uVar37;
                          puVar24 = (undefined2 *)((int)unaff_DI + 0x3);
                          *(char *)(undefined2 *)((int)unaff_DI + 0x2) = (char)pcVar16;
                          puVar23 = puVar23 + 0x2;
                          out(*puVar22,pcVar21);
                          unaff_DI = (undefined4 *)((int)unaff_DI + 0x5);
                          uVar37 = in(pcVar21);
                          *puVar24 = uVar37;
                          if (false)
                          {
                            if (false) goto LAB_1010_7139;
                            goto LAB_1010_70f1;
                          }
                        }
                      }
                      goto LAB_1010_713d;
                    }
                  } while( true );
                }
                goto LAB_1010_7139;
              case (byte *)0x2:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x96;
                uVar38 = 0x38;
                break;
              case (byte *)0x3:
                return (char *)pdStack_6;
              case (byte *)0x4:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x98;
                uVar38 = 0x38;
                break;
              case (byte *)0x5:
                pbVar14[(int)unaff_SI] =
                     pbVar14[(int)unaff_SI] + (char)((ulong)pcVar29 >> 0x10);
                strcpy_optimized((char *)CONCAT22(unaff_SS,acStackY_107),
                                 (char *)CONCAT22(unaff_SS,acStackY_207));
                if (CONCAT11(format_id._0_1_,segment._1_1_) == 0x2)
                {
                  pcVar29 = (char *)0x10503194;
                }
                else
                {
                  pcVar29 = (char *)0x10503196;
                }
                strcat_append((char *)CONCAT22(unaff_SS,acStackY_107),pcVar29);
                strcat_append((char *)CONCAT22(unaff_SS,acStackY_107),
                              (char *)CONCAT22(unaff_SS,acStackY_307));
                pcVar15 = Resource_Manager_Resolve_File_Path_Logic
                                    ((void *)CONCAT21(offset,in_stack_00000003),
                                     (char *)(CONCAT13((undefined1)segment,
                                                       CONCAT21(offset,in_stack_00000003
                                                               )) >> 0x10));
                if ((pcVar15 == acStackY_107) && (height == unaff_SS))
                {
                  Resource_Manager_Report_File_Error_Logic
                            ((char *)CONCAT21(offset,in_stack_00000003));
                }
                free_if_not_null((void *)*(void **)CONCAT13((undefined1)segment,
                                                            CONCAT21(offset,
                                            in_stack_00000003)));
                pcVar15 = strdup_allocate(pcVar15);
                puVar6 = (undefined2 *)
                         CONCAT13((undefined1)segment,CONCAT21(offset,in_stack_00000003)
                                 );
                *puVar6 = pcVar15;
                *(undefined2 *)((int)CONCAT21(offset,in_stack_00000003) + 0x2) = height;
                return (char *)*puVar6;
              case (byte *)0x6:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x9a;
                uVar38 = 0x38;
                break;
              case (byte *)0x7:
                if ((int)in_ECX != 0x0)
                {
                  pbVar14 = pbVar14 + (int)pcVar21;
                }
                iVar36 = (int)pbVar14 * 0x2;
                ppuStack_8 = Bitmap_Object_Copy_Region_To_New_Bitmap
                                       ((void *)(void *)*(undefined4 *)(offset + 0x67c),
                                        CONCAT22(*(undefined2 *)(iVar36 + 0x3388),
                                                 *(undefined2 *)(iVar36 + 0x338a)),
                                        *(int *)(iVar36 + 0x3386),
                                        *(int *)(iVar36 + 0x3384));
                uStack_e._2_2_ = (void *)*(void **)(format_id + 0x14);
                pcStack_a = (char *)((ulong)*(void **)(format_id + 0x14) >> 0x10);
                pdStack_6 = height;
                pvStack_10 = get_with_lazy_init(uStack_e._2_2_);
                uStack_e._0_2_ = height;
                ppuStack_14 = get_with_lazy_init(ppuStack_8);
                pcVar29 = (char *)*(ulong *)((int)ppuStack_14 + 0x4);
                if ((long)pcVar29 < *(long *)((int)pvStack_10 + 0x4))
                {
                  pcVar29 = (char *)(ulong)*(uint *)((int)pvStack_10 + 0x4);
                }
                local_16 = (char *)pcVar29;
                uVar33 = *(ulong *)((int)ppuStack_14 + 0x8);
                if ((long)uVar33 < *(long *)((int)pvStack_10 + 0x8))
                {
                  uVar33 = (ulong)*(uint *)((int)pvStack_10 + 0x8);
                }
                local_18 = (u16)uVar33;
                pdStack_12 = height;
                pvVar13 = allocate_memory(0xff001e);
                uStack_28 = (undefined **)CONCAT22(uStack_28._2_2_,height);
                uVar9 = (uint)height | (uint)pvVar13;
                if (uVar9 == 0x0)
                {
                  pcVar15 = NULL;
                  uVar9 = 0x0;
                }
                else
                {
                  pcVar15 = Bitmap_Object_Subclass_ctor_with_alloc
                                      (pvVar13,(int)height,local_18);
                }
                uStack_1c = (undefined **)CONCAT22(uVar9,pcVar15);
                Bitmap_Object_Clear_with_Color_Logic(pcVar15,(byte)uVar9);
                iVar25 = local_18 - *(int *)((int)pvStack_10 + 0x8);
                uStack_20 = (undefined **)
                            CONCAT22(((int)local_16 - *(int *)((int)pvStack_10 + 0x4)) /
                                     0x2,iVar25);
                pack_3words_alt((void *)((int)&uStack_28 + 0x2),(int)unaff_SS,0x0,iVar25
                               );
                Bitmap_Object_Blit_Transparent_Logic
                          ((char *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),
                           (void *)((int)&uStack_28 + 0x2));
                pack_3words_reverse((void *)((int)&uStack_28 + 0x2),(int)unaff_SS,0x0,
                                    0x0);
                Bitmap_Object_Blit_Transparent_Logic
                          ((char *)uStack_1c,(void *)((ulong)uStack_1c >> 0x10),
                           (void *)((int)&uStack_28 + 0x2));
                *(undefined ***)(format_id + in_stack_0000000c * 0x4) = uStack_1c;
                return (char *)uStack_1c;
              case (byte *)0x8:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x9c;
                uVar38 = 0x38;
                break;
              case (byte *)0x9:
                ppuVar30 = (undefined **)(ulong)((uint)height | (uint)pcVar21);
                if (((uint)height | (uint)pcVar21) == 0x0)
                {
                  pcStack_a = NULL;
                  ppuVar30 = NULL;
                }
                else
                {
                  pcStack_a = UI_Vector_Tracker_Object_ctor(pcVar21);
                }
                ppuStack_8 = (undefined **)ppuVar30;
                for (uStack_e = NULL; ppuVar12 = (undefined **)ppuVar30,
                    uStack_e < (u8 *)CONCAT22(uStack_4,pdStack_6);
                    uStack_e = uStack_e + 0x1)
                {
                  puVar6 = (undefined2 *)
                           ((int)*(undefined4 *)*(undefined4 *)(offset + 0x4) + 0x4);
                  uVar9 = (*(code *)*puVar6)();
                  ppuVar30 = (undefined **)(ulong)((uint)ppuVar12 | uVar9);
                  ppuStack_14 = ppuVar12;
                  if (((uint)ppuVar12 | uVar9) != 0x0)
                  {
                    puVar6 = (undefined2 *)
                             ((int)**(undefined4 **)(pcStack_a + 0x4) + 0xc);
                    (*(code *)*puVar6)();
                  }
                }
                return pcStack_a;
              case (byte *)0xa:
                height = (dword *)&g_HeapContext;
                uVar17 = 0x9e;
                uVar38 = 0x38;
                break;
              case (byte *)0xb:
                do
                {
                } while( true );
              case (byte *)0xc:
                height = (dword *)&g_HeapContext;
                uVar17 = 0xa0;
                uVar38 = 0x38;
                break;
              case (byte *)0xd:
                lVar32 = Resource_Manager_Get_Resource_by_ID_Logic
                                   (_p_ResourceManager,0x2);
                uStack_e._0_2_ = (dword *)((ulong)lVar32 >> 0x10);
                pvStack_10 = (void *)lVar32;
                pdStack_12 = (dword *)g_ModeVersion_13AE;
                if (((undefined **)g_ModeVersion_13AE !=
                     (undefined **)&p_CurrentHeapContext) &&
                   (g_ModeVersion_13AE != (undefined *)0x1))
                {
                  uStack_e._2_2_ = (void *)0x2;
                }
                do
                {
                  while( true )
                  {
                    pcVar29 = (char *)get_next_list_item(&pcStack_a);
                    ppuStack_14 = (undefined **)((ulong)pcVar29 >> 0x10);
                    local_16 = (char *)pcVar29;
                    if (ppuStack_14 == NULL && local_16 == NULL)
                    {
                      return local_16;
                    }
                    iVar25 = *(int *)(local_16 + 0x4);
                    if (iVar25 != 0x12) break;
                    bVar27 = SBORROW2(*(int *)(local_16 + 0x6),0x2);
                    iVar36 = *(int *)(local_16 + 0x6) + -0x2;
                    bVar28 = iVar36 == 0x0;
LAB_1010_a151:
                    if (!bVar28 && bVar27 == iVar36 < 0x0)
                    {
LAB_1010_a153:
                      uStack_1c = (undefined **)
                                  CONCAT22(uStack_1c._2_2_,
                                           (undefined **)
                                           (*(int *)(local_16 + 0x6) /
                                           (int)uStack_e._2_2_));
                      *(int *)(local_16 + 0x6) =
                           *(int *)(local_16 + 0x6) -
                           *(int *)(local_16 + 0x6) / (int)uStack_e._2_2_;
                    }
                  }
                  if (((iVar25 != 0x3e) && (iVar25 != 0x41)) && (iVar25 != 0x80))
                  {
                    if (iVar25 == 0x83)
                    {
                      iVar25 = *(int *)(local_16 + 0x6);
                      bVar27 = SBORROW2(iVar25,0x1);
                      iVar36 = iVar25 + -0x1;
                      bVar28 = iVar25 == 0x1;
                      goto LAB_1010_a151;
                    }
                    goto LAB_1010_a153;
                  }
                  ppuVar10 = (undefined **)(*(int *)(local_16 + 0x6) / 0x2);
                  *(int *)(local_16 + 0x6) = *(int *)(local_16 + 0x6) - (int)ppuVar10;
                  ppuVar12 = ppuVar10;
                  if (ppuVar10 == NULL)
                  {
                    ppuVar12 = (undefined **)0x1;
                  }
                  uStack_1c = (undefined **)CONCAT22(ppuVar10,ppuVar12);
                  UI_Object_Add_Type_Value_Pair_to_Collection_at_Offset_12_Logic
                            ((void *)offset,
                             (int)(CONCAT13(segment._1_1_,
                                            CONCAT12((undefined1)segment,offset)) >>
                                  0x10),(int)ppuVar12);
                } while( true );
              case (byte *)0xe:
                height = (dword *)&g_HeapContext;
                uVar17 = 0xa2;
                uVar38 = 0x38;
              }
              goto LAB_1010_b18a;
            }
          }
          goto switchD_1010_be17_default;
        }
        if (in_stack_0000000c == 0xfa8)
        {
          height = (dword *)&g_HeapContext;
          uVar17 = 0xb0;
          uVar38 = 0x38;
        }
        else
        {
          if (in_stack_0000000c < 0xfa9)
          {
            if (in_stack_0000000c == 0x163)
            {
              pvVar13 = NULL;
              puVar35 = (undefined4 *)
                        UI_Get_Entity_Property_by_Array_Index_Logic
                                  (CONCAT13(segment._1_1_,
                                            CONCAT12((undefined1)segment,offset)),0x1d);
              uVar33 = (ulong)puVar35 >> 0x10;
              puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
              ppuVar12 = (undefined **)(*(code *)*puVar6)();
              uStack_2c = (undefined **)CONCAT22((int)uVar33,ppuVar12);
              for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
                  uStack_28 = (undefined **)((long)uStack_28 + 0x1))
              {
                puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
                ppuVar12 = (undefined **)(*(code *)*puVar6)();
                uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
                uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                                      (_p_SimulatorWorldContext,(u8 *)ppuVar12);
                uStack_1c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_20);
                uVar9 = (uint)((ulong)uStack_1c >> 0x10);
                uVar19 = uVar9 | (uint)(undefined **)uStack_1c;
                uVar33 = (ulong)uVar19;
                if ((uVar19 != 0x0) &&
                   (((undefined **)uStack_1c)[0x9] == (undefined *)0x5))
                {
                  pvVar13 = (void *)((int)pvVar13 + 0x1);
                }
              }
              if (puVar35 != NULL)
              {
                (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
              }
              uVar37 = 0x38b4;
            }
            else if (in_stack_0000000c == 0x164)
            {
              pvVar13 = NULL;
              puVar35 = (undefined4 *)
                        UI_Get_Entity_Property_by_Array_Index_Logic
                                  (CONCAT13(segment._1_1_,
                                            CONCAT12((undefined1)segment,offset)),0x1d);
              uVar33 = (ulong)puVar35 >> 0x10;
              puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
              ppuVar12 = (undefined **)(*(code *)*puVar6)();
              uStack_2c = (undefined **)CONCAT22((int)uVar33,ppuVar12);
              for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
                  uStack_28 = (undefined **)((long)uStack_28 + 0x1))
              {
                puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
                ppuVar12 = (undefined **)(*(code *)*puVar6)();
                uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
                uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                                      (_p_SimulatorWorldContext,(u8 *)ppuVar12);
                uStack_1c = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(uStack_20);
                uVar9 = (uint)((ulong)uStack_1c >> 0x10);
                uVar19 = uVar9 | (uint)(undefined **)uStack_1c;
                uVar33 = (ulong)uVar19;
                if ((uVar19 != 0x0) &&
                   (((undefined **)uStack_1c)[0x9] != (undefined *)0x5))
                {
                  pvVar13 = (void *)((int)pvVar13 + 0x1);
                }
              }
              if (puVar35 != NULL)
              {
                (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
              }
              uVar37 = 0x38b7;
            }
            else
            {
              if (in_stack_0000000c != 0x165) goto switchD_1010_be17_default;
              pvVar13 = (void *)Simulator_Get_Planet_Resource_Metric_6db4();
              uVar37 = 0x38ba;
            }
            _wsprintf16(&PTR_DAT_1048_0000_1048_3820,
                        (void *)CONCAT13(0x10,CONCAT12(0x50,uVar37)),
                        (void *)CONCAT22(puVar23,pvVar13));
            goto switchD_1010_becf_caseD_1826;
          }
          if (in_stack_0000000c == 0xfa9)
          {
            height = (dword *)&g_HeapContext;
            uVar17 = 0xac;
            uVar38 = 0x38;
          }
          else if (in_stack_0000000c == 0x138a)
          {
            height = (dword *)&g_HeapContext;
            uVar17 = 0x8e;
            uVar38 = 0x38;
          }
          else
          {
            if (in_stack_0000000c != 0x138e) goto switchD_1010_be17_default;
            height = (dword *)&g_HeapContext;
            uVar17 = 0x90;
            uVar38 = 0x38;
          }
        }
      }
      goto LAB_1010_b18a;
    }
    if (in_stack_0000000c == 0x1775)
    {
      lVar32 = UI_Get_Entity_Resource_Data_at_Offset_16_Logic(*(long *)(offset + 0x138))
      ;
      ppuVar12 = (undefined **)*(int *)((int)lVar32 + 0x16);
      uStack_28 = (undefined **)CONCAT22(uStack_28._2_2_,ppuVar12);
      if (ppuVar12 == NULL) goto LAB_1010_b686;
      if (ppuVar12 == (undefined **)0x1)
      {
        uVar37 = 0x64d;
      }
      else
      {
        if (ppuVar12 != (undefined **)&p_CurrentHeapContext)
        goto switchD_1010_becf_caseD_1826;
        uVar37 = 0x64e;
      }
      goto LAB_1010_b2d4;
    }
    if (in_stack_0000000c < 0x1776)
    {
      if (in_stack_0000000c == 0x1770)
      {
        ppuStack_14 = NULL;
        iVar25 = search_array_for_value(base_array,iVar36,(int)pvStack_10);
        if (iVar25 == 0x0)
        {
          iVar25 = search_array_for_value
                             ((int *)_p_StringPropertyTable,
                              (int)((ulong)_p_StringPropertyTable >> 0x10),
                              (int)pvStack_10);
          if (iVar25 != 0x0)
          {
            ppuStack_14 = (undefined **)
                          UI_Component_Get_Entity_Resource_Field4_7f5a
                                    ((char *)CONCAT22(in_stack_0000000a,format_id));
          }
        }
        else
        {
          ppuStack_14 = (undefined **)
                        UI_Component_Get_Entity_Resource_Field2_7f98
                                  ((char *)CONCAT22(in_stack_0000000a,format_id));
        }
        goto LAB_1010_b146;
      }
      if (in_stack_0000000c < 0x1771)
      {
        if (in_stack_0000000c == 0x13ba)
        {
          height = (dword *)&g_HeapContext;
          uVar17 = 0xa6;
          uVar38 = 0x38;
        }
        else if (in_stack_0000000c == 0x13be)
        {
          height = (dword *)&g_HeapContext;
          uVar17 = 0xa8;
          uVar38 = 0x38;
        }
        else
        {
          if (in_stack_0000000c != 0x13c2) goto switchD_1010_be17_default;
          height = (dword *)&g_HeapContext;
          uVar17 = 0xaa;
          uVar38 = 0x38;
        }
        goto LAB_1010_b18a;
      }
      if (in_stack_0000000c == 0x1771)
      {
        ppuVar30 = (undefined **)
                   UI_Entity_Calculate_Total_Property_Value_Logic
                             (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                      CONCAT12((undefined1)segment,
                                                               offset)) >> 0x10),offset)
                             );
        pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
        ppuStack_14 = (undefined **)ppuVar30;
      }
      else
      {
        if (in_stack_0000000c != 0x1772)
        {
          if (in_stack_0000000c == 0x1773)
          {
            iVar25 = search_array_for_value(base_array,iVar36,(int)pvStack_10);
            if (iVar25 == 0x0)
            {
              Entity_Format_Detailed_Status_Label_Logic
                        (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                 CONCAT12((undefined1)segment,offset))
                                       >> 0x10),offset),(char *)s__lu_1050_381f + 0x1,
                         (long)CONCAT22(in_stack_0000000a,format_id));
              goto switchD_1010_becf_caseD_1826;
            }
            pcVar15 = Entity_Get_Status_Label_Logic
                                ((char *)offset,
                                 (long)CONCAT22(in_stack_0000000a,format_id));
          }
          else
          {
            pcVar15 = (char *)(in_stack_0000000c + 0xe88c);
            if (pcVar15 != NULL) goto switchD_1010_be17_default;
            height = (dword *)Entity_Get_Category_Name_Logic();
          }
          goto LAB_1010_b188;
        }
        local_18 = 0x0;
        local_16 = NULL;
        uStackY_54 = 0xb235;
        uStackY_52 = uVar26;
        UI_Entity_Get_Two_Related_Values_Logic
                  ((int *)offset,
                   (int *)(CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset))
                          >> 0x10),(long)CONCAT22(unaff_SS,&local_16));
      }
      goto LAB_1010_b1f5;
    }
    switch(in_stack_0000000c)
    {
    case 0x1776:
      uStack_28 = (undefined **)
                  UI_Get_Entity_Resource_Data_at_Offset_16_Logic
                            (*(long *)(offset + 0x138));
      ppuVar12 = (undefined **)((undefined **)uStack_28)[0xd];
      uStack_24 = (undefined **)CONCAT22(uStack_24._2_2_,ppuVar12);
      if (ppuVar12 == NULL)
      {
LAB_1010_b686:
        uVar37 = 0x531;
      }
      else if (ppuVar12 == (undefined **)0x1)
      {
        uVar37 = 0x64f;
      }
      else
      {
        if (ppuVar12 != (undefined **)&p_CurrentHeapContext)
        goto switchD_1010_becf_caseD_1826;
        uVar37 = 0x591;
      }
      goto LAB_1010_b2d4;
    case 0x1777:
      uStack_28 = (undefined **)((ulong)uStack_28 & 0xffff0000);
      uStack_24 = (undefined **)
                  UI_Get_Entity_Property_by_Array_Index_Logic
                            (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)
                                     ),0xb);
      uVar33 = (ulong)uStack_24 >> 0x10;
      puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_24 + 0x10);
      ppuVar12 = (undefined **)(*(code *)*puVar6)();
      uStack_20 = (undefined **)CONCAT22((int)uVar33,ppuVar12);
      for (uStack_1c = NULL; uVar9 = (uint)uVar33, uStack_1c < uStack_20;
          uStack_1c = (undefined **)((long)uStack_1c + 0x1))
      {
        puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_24 + 0x4);
        ppuStack_14 = (undefined **)(*(code *)*puVar6)();
        pdStack_12 = (dword *)uVar9;
        pvVar34 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)ppuStack_14);
        uVar33 = (ulong)pvVar34 >> 0x10;
        iVar25 = UI_Component_Check_Entity_GroupB_and_Active_7ea0(pvVar34);
        if (iVar25 != 0x0)
        {
          uStack_28 = (undefined **)CONCAT22(uStack_28._2_2_,(undefined **)0x1);
          break;
        }
      }
      if (uStack_24 != NULL)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)uStack_24)();
      }
      if ((undefined **)uStack_28 == NULL) goto LAB_1010_b686;
      uVar37 = 0x5f4;
LAB_1010_b2d4:
      LoadString_Global_Wrapper
                ((int)_p_GlobalResourceManager,
                 (int)((ulong)_p_GlobalResourceManager >> 0x10),0x382003ff,
                 CONCAT22(uVar37,0x1048));
      goto switchD_1010_becf_caseD_1826;
    case 0x1778:
      goto switchD_1010_be17_caseD_1778;
    case 0x1779:
      ppuVar30 = (undefined **)
                 Entity_Resolve_Parent_Object_Logic
                           (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                    CONCAT12((undefined1)segment,offset)
                                                   ) >> 0x10),offset));
      pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
      ppuStack_14 = (undefined **)ppuVar30;
      local_16 = (char *)UI_Component_Get_Entity_Resource_A_Output_6fd4(ppuVar30);
      local_18 = UI_Component_Get_Entity_Resource_B_Output_701c
                           ((undefined **)CONCAT22(pdStack_12,ppuStack_14));
      break;
    case 0x177a:
      pcVar15 = Entity_Get_Category_Label_Logic
                          ((char *)offset,(long)CONCAT22(in_stack_0000000a,format_id));
      goto LAB_1010_b188;
    case 0x177b:
      UI_Get_Nested_Collection_Value_Logic
                (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),0xd);
      break;
    case 0x177c:
      UI_Get_Nested_Collection_Value_Logic
                (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),0x27);
      break;
    case 0x177d:
      uStack_28 = (undefined **)
                  UI_Get_Entity_Property_by_Array_Index_Logic
                            (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)
                                     ),0x10);
      uVar33 = (ulong)uStack_28 >> 0x10;
      puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_28 + 0x10);
      ppuVar12 = (undefined **)(*(code *)*puVar6)();
      uStack_24 = (undefined **)CONCAT22((int)uVar33,ppuVar12);
      for (uStack_20 = NULL; uVar37 = (undefined2)uVar33, uStack_20 < uStack_24;
          uStack_20 = (undefined **)((long)uStack_20 + 0x1))
      {
        puVar6 = (undefined2 *)((int)*(undefined4 *)uStack_28 + 0x4);
        ppuVar12 = (undefined **)(*(code *)*puVar6)();
        uStack_1c = (undefined **)CONCAT22(uVar37,ppuVar12);
        ppuVar30 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                             (_p_SimulatorWorldContext,(u8 *)ppuVar12);
        uVar33 = (ulong)ppuVar30 >> 0x10;
        ppuStack_14 = (undefined **)ppuVar30;
        pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
        UI_Component_Get_Entity_Property_v10_AA_Logic_7226(ppuVar30);
      }
      if (uStack_28 != NULL)
      {
        (*(code *)*(undefined2 *)*(undefined2 **)uStack_28)();
      }
      break;
    default:
      goto switchD_1010_be17_default;
    }
    goto LAB_1010_b1f5;
  }
  if (in_stack_0000000c == 0x17ba)
  {
    ppuVar30 = (undefined **)
               Simulator_Sum_Entity_List_Production_4b40
                         ((char *)CONCAT22(ppuStack_8,pcStack_a));
    pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
    ppuStack_14 = (undefined **)ppuVar30;
    goto LAB_1010_b1f5;
  }
  if (0x17ba < in_stack_0000000c)
  {
    if (in_stack_0000000c == 0x1825)
    {
      uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
      lVar32 = Colony_Calculate_Sum_All_Resources_38b8
                         ((int)(undefined **)uStack_28,(u16)((ulong)uStack_28 >> 0x10));
      uStack_24 = (undefined **)(lVar32 + *(long *)((undefined **)uStack_28 + 0xb8));
    }
    else if (in_stack_0000000c < 0x1826)
    {
      if (in_stack_0000000c == 0x17bf)
      {
        pcVar15 = Lookup_Entity_Name_by_ID_Logic_bd80((u16)pvStack_10);
        goto LAB_1010_b188;
      }
      if (0x17bf < in_stack_0000000c)
      {
        if (in_stack_0000000c == 0x17d7)
        {
          iVar25 = search_array_for_value(base_array,iVar36,(int)pvStack_10);
          if (((iVar25 == 0x0) &&
              (iVar25 = search_array_for_value
                                  ((int *)_p_StringPropertyTable,
                                   (int)((ulong)_p_StringPropertyTable >> 0x10),
                                   (int)pvStack_10), iVar25 == 0x0)) &&
             (iVar25 = search_array_for_value
                                 ((int *)_p_StringPropertyTable,
                                  (int)((ulong)_p_StringPropertyTable >> 0x10),
                                  (int)pvStack_10), iVar25 == 0x0))
          {
            iVar25 = search_array_for_value
                               ((int *)_p_StringPropertyTable,
                                (int)((ulong)_p_StringPropertyTable >> 0x10),
                                (int)pvStack_10);
            if (iVar25 == 0x0)
            {
              iVar25 = search_array_for_value
                                 ((int *)_p_StringPropertyTable,
                                  (int)((ulong)_p_StringPropertyTable >> 0x10),
                                  (int)pvStack_10);
              if (iVar25 == 0x0)
              {
                iVar25 = search_array_for_value
                                   ((int *)_p_StringPropertyTable,
                                    (int)((ulong)_p_StringPropertyTable >> 0x10),
                                    (int)pvStack_10);
                if (iVar25 == 0x0)
                {
                  iVar25 = search_array_for_value
                                     ((int *)_p_StringPropertyTable,
                                      (int)((ulong)_p_StringPropertyTable >> 0x10),
                                      (int)pvStack_10);
                  if (iVar25 == 0x0)
                  {
                    uVar37 = 0x5e1;
                  }
                  else
                  {
                    uVar37 = 0x754;
                  }
                }
                else
                {
                  uVar37 = 0x752;
                }
              }
              else
              {
                uVar37 = 0x750;
              }
            }
            else
            {
              uVar37 = 0x5e6;
            }
          }
          else
          {
            uVar37 = 0x5e0;
          }
          goto LAB_1010_b2d4;
        }
        if (in_stack_0000000c == 0x1805) goto switchD_1010_be17_caseD_1778;
        if (in_stack_0000000c == 0x1808)
        {
          UI_Component_Count_Nearby_Buildings_Logic_8030
                    ((char *)CONCAT22(in_stack_0000000a,format_id));
          goto LAB_1010_b146;
        }
        if (in_stack_0000000c == 0x1809)
        {
          pvVar34 = (void *)Entity_Resolve_Parent_Object_Logic
                                      (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                               CONCAT12((undefined1)
                                                                        segment,offset))
                                                     >> 0x10),offset));
          UI_Component_Calculate_Entity_Resource_Output_Logic_7fd6(pvVar34);
          uStackY_52 = 0xba11;
          sprintf_wrapper();
          goto switchD_1010_becf_caseD_1826;
        }
        goto switchD_1010_be17_default;
      }
      if (in_stack_0000000c == 0x17bb)
      {
        ppuVar30 = (undefined **)
                   UI_Entity_Calculate_Total_Property_Value_Logic
                             (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                      CONCAT12((undefined1)segment,
                                                               offset)) >> 0x10),offset)
                             );
        pdStack_12 = (dword *)((ulong)ppuVar30 >> 0x10);
        ppuStack_14 = (undefined **)ppuVar30;
        uStack_1c = (undefined **)
                    Simulator_Sum_Entity_List_Production_4b40
                              ((char *)CONCAT22(ppuStack_8,pcStack_a));
        uVar9 = (uint)((ulong)uStack_1c >> 0x10);
        ppuVar12 = (undefined **)uStack_1c;
        if ((pdStack_12 < uVar9) || ((pdStack_12 <= uVar9 && (ppuStack_14 <= ppuVar12)))
           )
        {
          ppuVar10 = NULL;
          iVar25 = 0x0;
        }
        else
        {
          ppuVar10 = (undefined **)((int)ppuStack_14 - (int)ppuVar12);
          iVar25 = ((int)pdStack_12 - uVar9) - (uint)(ppuStack_14 < ppuVar12);
        }
        uStack_20 = (undefined **)CONCAT22(iVar25,ppuVar10);
      }
      else
      {
        if (in_stack_0000000c != 0x17bc)
        {
          if (in_stack_0000000c == 0x17bd) goto switchD_1010_be42_caseD_1795;
          if (in_stack_0000000c != 0x17be) goto switchD_1010_be17_default;
          pcVar15 = UI_Entity_Get_Type_Description_Logic
                              ((char *)offset,
                               (long)CONCAT22(in_stack_0000000a,format_id));
          goto LAB_1010_b188;
        }
        puVar35 = (undefined4 *)
                  UI_Get_Entity_Property_by_Array_Index_Logic
                            (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)
                                     ),0x2);
        uVar33 = (ulong)puVar35 >> 0x10;
        puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
        uVar37 = (*(code *)*puVar6)();
        uStack_2c = (undefined **)CONCAT22((int)uVar33,uVar37);
        for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
            uStack_28 = (undefined **)((long)uStack_28 + 0x1))
        {
          puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
          ppuVar12 = (undefined **)(*(code *)*puVar6)();
          uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
          uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                                (_p_SimulatorWorldContext,(u8 *)ppuVar12);
          uVar33 = UI_Component_Sum_Entity_Resource_Capacity_70f4(uStack_20);
          uVar33 >>= 0x10;
        }
        if (puVar35 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
        }
        puVar35 = (undefined4 *)
                  UI_Get_Entity_Property_by_Array_Index_Logic
                            (CONCAT22((int)(CONCAT13(segment._1_1_,
                                                     CONCAT12((undefined1)segment,offset
                                                             )) >> 0x10),offset),0x1);
        uVar33 = (ulong)puVar35 >> 0x10;
        puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
        ppuVar12 = (undefined **)(*(code *)*puVar6)();
        uStack_2c = (undefined **)CONCAT22((int)uVar33,ppuVar12);
        for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
            uStack_28 = (undefined **)((long)uStack_28 + 0x1))
        {
          puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
          ppuVar12 = (undefined **)(*(code *)*puVar6)();
          uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
          uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                                (_p_SimulatorWorldContext,(u8 *)ppuVar12);
          uVar33 = UI_Component_Sum_Entity_Resource_Capacity_70f4(uStack_20);
          uVar33 >>= 0x10;
        }
        if (puVar35 != NULL)
        {
          (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
        }
      }
    }
    else
    {
      if (false) goto switchD_1010_be17_default;
      switch(in_stack_0000000c)
      {
      case 0x1826:
        goto switchD_1010_becf_caseD_1826;
      default:
        goto switchD_1010_be17_default;
      case 0x1832:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = (undefined **)
                    Colony_Calculate_Sum_Resource_Group_38f2(uStack_28,0x2);
        break;
      case 0x1833:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = (undefined **)
                    Colony_Calculate_Sum_Resource_Group_38f2(uStack_28,0x1);
        break;
      case 0x1834:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = (undefined **)
                    Colony_Calculate_Sum_Resource_Group_38f2(uStack_28,0x3);
        break;
      case 0x1835:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = (undefined **)
                    Colony_Calculate_Sum_Resource_Group_38f2(uStack_28,0x4);
        break;
      case 0x1836:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = (undefined **)
                    Colony_Calculate_Sum_Resource_Group_38f2(uStack_28,0x5);
        break;
      case 0x1837:
        uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
        uStack_24 = *(undefined ***)((undefined **)uStack_28 + 0xb8);
        break;
      case 0x1838:
        iVar25 = search_array_for_value(base_array,iVar36,(int)pvStack_10);
        if (iVar25 == 0x0)
        {
          uVar37 = 0x753;
        }
        else
        {
          uVar37 = 0x751;
        }
        goto LAB_1010_b2d4;
      case 0x1839:
        UI_Component_Get_Entity_Construction_Progress_6e4c
                  ((char *)CONCAT22(in_stack_0000000a,format_id));
        goto LAB_1010_b146;
      }
    }
    goto LAB_1010_b1f5;
  }
  if (false)
  {
switchD_1010_be17_default:
    height = (dword *)&g_HeapContext;
    uVar17 = 0xc0;
    uVar38 = 0x38;
    goto LAB_1010_b18a;
  }
  switch(in_stack_0000000c)
  {
  case 0x177f:
    puVar35 = (undefined4 *)
              UI_Get_Entity_Property_by_Array_Index_Logic
                        (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),
                         0x3);
    uVar33 = (ulong)puVar35 >> 0x10;
    puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
    ppuVar12 = (undefined **)(*(code *)*puVar6)();
    uStack_2c = (undefined **)CONCAT22((int)uVar33,ppuVar12);
    for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
        uStack_28 = (undefined **)((long)uStack_28 + 0x1))
    {
      puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
      ppuVar12 = (undefined **)(*(code *)*puVar6)();
      uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
      uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)ppuVar12);
      uVar33 = UI_Component_Sum_Entity_Values_from_List_22_7176(uStack_20);
      uVar33 >>= 0x10;
    }
    if (puVar35 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
    }
    break;
  case 0x1780:
    puVar35 = (undefined4 *)
              UI_Get_Entity_Property_by_Array_Index_Logic
                        (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),
                         0x4);
    uVar33 = (ulong)puVar35 >> 0x10;
    puVar6 = (undefined2 *)((int)*puVar35 + 0x10);
    ppuVar12 = (undefined **)(*(code *)*puVar6)();
    uStack_2c = (undefined **)CONCAT22((int)uVar33,ppuVar12);
    for (uStack_28 = NULL; uVar37 = (undefined2)uVar33, uStack_28 < uStack_2c;
        uStack_28 = (undefined **)((long)uStack_28 + 0x1))
    {
      puVar6 = (undefined2 *)((int)*puVar35 + 0x4);
      ppuVar12 = (undefined **)(*(code *)*puVar6)();
      uStack_24 = (undefined **)CONCAT22(uVar37,ppuVar12);
      uStack_20 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                            (_p_SimulatorWorldContext,(u8 *)ppuVar12);
      pvVar34 = UI_Component_Sum_Active_SubValues_Group4_6f5a(uStack_20);
      uVar33 = (ulong)pvVar34 >> 0x10;
    }
    if (puVar35 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*puVar35)();
    }
    break;
  case 0x1781:
    break;
  case 0x1782:
    UI_Get_Nested_Collection_Value_Logic
              (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),0x6);
    break;
  case 0x1783:
    break;
  case 0x1784:
    uStack_20 = *(undefined ***)(pcStack_a + 0x1f6);
    lVar32 = Colony_Calculate_Sum_Resource_Group_38f2(uStack_20,0x3);
    uVar37 = (undefined2)((ulong)uStack_20 >> 0x10);
    ppuVar30 = (undefined **)uStack_20 + 0xb8;
    puVar3 = *ppuVar30;
    puVar11 = *ppuVar30 + (uint)lVar32;
    puVar4 = ((undefined **)uStack_20)[0xb9];
    lVar31 = Colony_Calculate_Sum_Resource_Group_38f2(uStack_20,0x4);
    uStack_1c = (undefined **)
                CONCAT22(puVar4 + (uint)CARRY2((uint)puVar11,(uint)lVar31) +
                                  (int)((ulong)lVar31 >> 0x10) +
                                  (uint)CARRY2((uint)lVar32,(uint)puVar3) +
                                  (int)((ulong)lVar32 >> 0x10),puVar11 + (uint)lVar31);
    break;
  case 0x1785:
    uStack_28 = *(undefined ***)(pcStack_a + 0x1f6);
    uStack_24 = Colony_Calc_Resource_Deficit_at_26_540a
                          ((void *)CONCAT13((char)((uint)ppuStack_8 >> 0x8),
                                            CONCAT12((char)ppuStack_8,pcStack_a)),0x24);
    break;
  case 0x1786:
    UI_Get_Nested_Collection_Value_Logic
              (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),0xe);
    break;
  case 0x1787:
    ppuVar12 = (undefined **)Simulator_Calculate_Total_Medical_Capacity_4c1a();
    uStack_28 = (undefined **)CONCAT22(height,ppuVar12);
    uStack_24 = (undefined **)
                Simulator_Get_Colony_Total_Resource_Sum_4cba
                          ((char *)CONCAT22(ppuStack_8,pcStack_a));
    if (uStack_28 == NULL)
    {
      ppuVar12 = NULL;
    }
    else
    {
      ppuVar12 = (undefined **)
                 ((ZEXT48(uStack_24) * 0x64 & 0xffffffff) / ZEXT48(uStack_28));
    }
    uStack_20 = (undefined **)CONCAT22(uStack_20._2_2_,ppuVar12);
LAB_1010_b146:
    sprintf_wrapper();
    goto switchD_1010_becf_caseD_1826;
  default:
    goto switchD_1010_be17_default;
  case 0x1789:
  case 0x1793:
switchD_1010_be17_caseD_1778:
    Entity_Format_Full_Name_Label_Logic((char *)offset,0x10483820);
    goto switchD_1010_becf_caseD_1826;
  case 0x178a:
    pcVar15 = UI_Entity_Get_SubCategory_Name_Logic
                        ((char *)offset,(long)CONCAT22(uStack_e._2_2_,(dword *)uStack_e)
                        );
    goto LAB_1010_b188;
  case 0x1794:
    uVar37 = 0x64c;
    goto LAB_1010_b2d4;
  case 0x1795:
switchD_1010_be42_caseD_1795:
    pcVar15 = UI_Entity_Format_Status_Value_Label_Logic
                        ((char *)offset,(long)CONCAT22(in_stack_0000000a,format_id));
LAB_1010_b188:
    uVar17 = SUB21(pcVar15,0x0);
    uVar38 = (undefined1)((uint)pcVar15 >> 0x8);
LAB_1010_b18a:
    strcpy_optimized((char *)&PTR_DAT_1048_0000_1048_3820,
                     (char *)CONCAT22(height,(char *)CONCAT11(uVar38,uVar17)));
    goto switchD_1010_becf_caseD_1826;
  case 0x1796:
    UI_Get_Nested_Collection_Value_Logic_Alt
              (CONCAT13(segment._1_1_,CONCAT12((undefined1)segment,offset)),0x2);
  }
LAB_1010_b1f5:
  sprintf_wrapper();
switchD_1010_becf_caseD_1826:
  return (char *)s__lu_1050_381f + 0x1;
code_r0x10107127:
  puVar6 = puVar23;
  puVar23 = (undefined2 *)((int)puVar23 + 0x1);
  out(*(undefined1 *)puVar6,pcVar21);
  in(pcVar21);
  pcVar16 = (char *)((ulong)pcVar16 & 0xffff0000);
LAB_1010_7129:
  puVar6 = puVar23;
  puVar23 = (undefined2 *)((int)puVar23 + 0x1);
  out(*(undefined1 *)puVar6,pcVar21);
  in(pcVar21);
  pcVar16 = (char *)((ulong)pcVar16 & 0xffff0000);
LAB_1010_712b:
  puVar6 = puVar23;
  puVar23 = (undefined2 *)((int)puVar23 + 0x1);
  out(*(undefined1 *)puVar6,pcVar21);
  in(pcVar21);
  pcVar16 = (char *)((ulong)pcVar16 & 0xffff0000);
LAB_1010_712d:
  puVar22 = (undefined1 *)((int)puVar23 + 0x1);
  out(*(undefined1 *)puVar23,pcVar21);
  uVar37 = (undefined2)((ulong)pcVar16 >> 0x10);
  pcVar8 = (char *)in(pcVar21);
  pcVar16 = (char *)CONCAT22(uVar37,pcVar8);
  puVar23 = puVar23 + 0x1;
  out(*puVar22,pcVar21);
  bVar27 = false;
  if (bVar28)
  {
    pbVar14[(int)puVar23] = pbVar14[(int)puVar23] + (char)pcVar8;
    puVar22 = &stack0xffbc;
    pcVar16 = (char *)CONCAT22(uVar37,pcStack_3a);
  }
  else
  {
LAB_1010_7133:
    if (bVar27)
    {
      pcVar16 = (char *)CONCAT31((int3)((ulong)pcVar16 >> 0x8),
                                 (char)pcVar16 + (char)in_ECX);
    }
    else if (true)
    {
      puVar22 = &stack0xfffe;
      if (true)
      {
LAB_1010_7139:
        if (false) goto code_r0x101071a2;
        puVar35 = unaff_DI;
        unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
        uVar37 = in(pcVar21);
        *(undefined2 *)puVar35 = uVar37;
        bVar28 = SBORROW2((int)pcVar21,0x1);
        pcVar20 = (char *)ZEXT24(pcVar21 + -0x1);
LAB_1010_713d:
        puVar35 = unaff_DI;
        unaff_DI = (undefined4 *)((int)unaff_DI + 0x2);
        uVar37 = in((char *)pcVar20);
        *(undefined2 *)puVar35 = uVar37;
        puVar24 = puVar23;
        if (bVar28) goto LAB_1010_70df;
LAB_1010_7141:
        puVar23 = puVar24 + 0x1;
        pcVar21 = (char *)pcVar20;
        out(*puVar24,pcVar21);
        if (bVar28)
        {
LAB_1010_7181_2:
          in_stack_00000024 = 0x0;
        }
        else
        {
          if (false)
          {
            *(char **)(pbVar14 + 0xa) = (char *)pcVar16;
            goto LAB_1010_7189;
          }
          if (true)
          {
            if (true)
            {
              if (true)
              {
                out(*puVar23,pcVar21);
                out(puVar24[0x2],pcVar21);
                out(*(undefined2 *)((int)puVar24 + 0x5),pcVar21);
                uVar2 = in(pcVar21);
                *unaff_DI = uVar2;
                return (char *)0x1;
              }
              goto LAB_1010_70eb;
            }
            goto LAB_1010_7189;
          }
        }
        pcVar15 = (char *)CONCAT11((byte)((ulong)pcVar16 >> 0x8) | in_stack_00000024,
                                   (char)pcVar16);
        pcVar16 = (char *)CONCAT22((int)((ulong)pcVar16 >> 0x10),pcVar15);
        *(char **)(pbVar14 + 0x18) = pcVar15;
        goto LAB_1010_7189;
      }
      goto UI_Window_Event_Dispatcher_7174_3;
    }
    pbVar14[(int)puVar23] = pbVar14[(int)puVar23] | (byte)pcVar16;
    puVar22 = &stack0xfffe;
  }
UI_Window_Event_Dispatcher_7174_3:
  (puVar22 + (int)unaff_DI)[0xa46] = (puVar22 + (int)unaff_DI)[0xa46] + (char)in_ECX;
  pcVar15 = (char *)pcVar16;
  if (pcVar15 == (char *)s_HeapVersion + 0x1)
  {
    uVar2 = *(undefined4 *)((int)*(undefined4 *)(puVar22 + 0x6) + 0x18);
    pcVar29 = (char *)*(undefined4 *)((int)uVar2 + 0x28);
    pcVar15 = (char *)pcVar29;
    iVar25 = (int)((ulong)pcVar29 >> 0x10);
    pcVar16 = *(char **)(puVar22 + 0x6);
code_r0x101071a2:
    pcVar21 = (char *)pcVar16 + -0xa;
    UI_Window_Manager_Destroy_Entity_Window_Logic
              (pcVar21,(long)CONCAT22(iVar25,pcVar15));
    return pcVar21;
  }
  if (pcVar15 < (char *)s_HeapVersion + 0x2)
  {
    if ((char)pcVar16 == '\x01')
    {
LAB_1010_717e:
      iVar25 = (int)((ulong)*(byte **)(puVar22 + 0x6) >> 0x10);
      pbVar14 = (byte *)*(byte **)(puVar22 + 0x6);
LAB_1010_7181:
      pcVar16 = NULL;
      pbVar1 = pbVar14 + 0xa;
      pbVar1[0x0] = 0x0;
      pbVar1[0x1] = 0x0;
      pbVar1[0x2] = 0x0;
      pbVar1[0x3] = 0x0;
LAB_1010_7189:
      *(char **)(pbVar14 + 0x18) = pcVar16;
      return (char *)pcVar16;
    }
    cVar7 = (char)pcVar16 + -0x5;
    pcVar15 = (char *)(char *)CONCAT31((int3)((ulong)pcVar16 >> 0x8),cVar7);
    if (cVar7 == '\0')
    {
      pcVar15 = (char *)((int)*(undefined4 *)(puVar22 + 0x6) + -0xa);
      UI_Window_Broadcast_Msg_EB_Logic(pcVar15);
      return pcVar15;
    }
  }
  return pcVar15;
}
