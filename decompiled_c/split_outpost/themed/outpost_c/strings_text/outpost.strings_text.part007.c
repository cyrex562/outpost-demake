/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 7/19
 * Original lines (combined): 32685-35775
 * Boundaries: top-level declarations/definitions only
 */




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



// Reads comma-separated integer values (x4) from "OUTPOST.INI" for a given index and
// stores them in the object structure at offset 0x22. Uses GetPrivateProfileString16,
// strtok, and atoi.

void __stdcall16far
Configuration_Manager_Read_Indexed_Values_Logic(void *this,int index)
{
  char *pcVar1;
  int iVar2;
  uint in_DX;
  undefined2 unaff_SI;
  int in_stack_00000008;
  
  GetPrivateProfileString16
            ((void *)*(undefined4 *)((int)this + 0xa),0x100,
             (void *)CONCAT22(0x149a,(void *)((ulong)*(undefined4 *)((int)this + 0xe) >>
                                             0x10)),
             (dword *)CONCAT22((int)((void **)&PTR_s_unknown_1050_13fa_1050_1446)
                                    [in_stack_00000008],(dword *)&g_HeapContext),
             (void *)CONCAT22(0x13b8,(void *)((ulong)((void **)
                                                     &PTR_s_unknown_1050_13fa_1050_1446)
                                                     [in_stack_00000008] >> 0x10)),
             (dword *)CONCAT22(unaff_SI,(dword *)&g_HeapContext));
  if (*(char *)*(undefined4 *)((int)this + 0xe) != '\0')
  {
    pcVar1 = strtok_far_optimized_with_state
                       ((char *)(char *)*(undefined4 *)((int)this + 0xe),
                        (char *)((ulong)*(undefined4 *)((int)this + 0xe) >> 0x10));
    in_DX |= (uint)pcVar1;
    if (in_DX != 0x0)
    {
      iVar2 = atoi_wrapper_far(pcVar1);
      *(int *)((int)this + in_stack_00000008 * 0x8 + 0x22) = iVar2;
      pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
      in_DX |= (uint)pcVar1;
      if (in_DX != 0x0)
      {
        iVar2 = atoi_wrapper_far(pcVar1);
        *(int *)((int)this + in_stack_00000008 * 0x8 + 0x24) = iVar2;
        pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
        in_DX |= (uint)pcVar1;
        if (in_DX != 0x0)
        {
          iVar2 = atoi_wrapper_far(pcVar1);
          *(int *)((int)this + in_stack_00000008 * 0x8 + 0x26) = iVar2;
          pcVar1 = strtok_far_optimized_with_state(NULL,NULL);
          if (in_DX != 0x0 || pcVar1 != NULL)
          {
            iVar2 = atoi_wrapper_far(pcVar1);
            *(int *)((int)this + in_stack_00000008 * 0x8 + 0x28) = iVar2;
          }
        }
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Maps raw entity type values to internal UI notification categories (1-22). It
// performs multiple lookups in global property arrays to differentiate between
// colonization events, ship types, and base components.

int __stdcall16far
UI_Classify_Entity_Type_for_Notification_Logic(void *this,long entity_ref)
{
  int iVar1;
  int iVar2;
  int in_stack_00000006;
  int iStack_6;
  
  iVar1 = UI_Get_U16_at_Offset_C_Logic
                    ((int)*(undefined4 *)((int)this + 0x14),
                     (int)((ulong)*(undefined4 *)((int)this + 0x14) >> 0x10),entity_ref)
  ;
  iVar2 = search_array_for_value
                    ((int *)_p_StringPropertyTable,
                     (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
  if (iVar2 == 0x0)
  {
    iVar2 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
    if (((iVar2 == 0x0) &&
        (iVar2 = search_array_for_value
                           ((int *)_p_StringPropertyTable,
                            (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
        iVar2 == 0x0)) &&
       (iVar2 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
       iVar2 == 0x0))
    {
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if ((iVar2 != 0x0) ||
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
         iVar2 != 0x0))
      {
        return 0x5;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if ((iVar2 != 0x0) ||
         (iVar2 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1),
         iVar2 != 0x0))
      {
        return 0x4;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x6;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x7;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x10;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x11;
      }
      iVar2 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar2 != 0x0)
      {
        return 0x15;
      }
      iVar1 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar1);
      if (iVar1 != 0x0)
      {
        return 0x16;
      }
      iVar1 = UI_Validate_Entity_Type_for_Context_Logic_maybe
                        ((int)this,in_stack_00000006);
      if (iVar1 == 0x0)
      {
        return 0x0;
      }
      return 0xc;
    }
    iStack_6 = 0x1;
  }
  else
  {
    iStack_6 = 0x18;
  }
  return iStack_6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int __stdcall16far
UI_Validate_Entity_Type_for_Context_Logic_maybe(int context_id,int type_id)
{
  int iVar1;
  int in_stack_00000008;
  int in_stack_0000000a;
  
  if (in_stack_00000008 != 0x3)
  {
    if ((in_stack_0000000a < 0xa) || (0x7f < in_stack_0000000a))
    {
      return 0x0;
    }
    iVar1 = search_array_for_value
                      ((int *)_p_StringPropertyTable,
                       (int)((ulong)_p_StringPropertyTable >> 0x10),in_stack_0000000a);
    if (iVar1 != 0x0)
    {
      return 0x0;
    }
    if (((in_stack_0000000a == 0x6a) && (in_stack_00000008 != 0x4)) &&
       (in_stack_00000008 != 0x5))
    {
      return 0x0;
    }
  }
  return 0x1;
}



// Updates file path based on type ID. Selects between prefixes at 1050:3194 and
// 1050:3196, splits the path, and re-assembles it. Sets result in object at offset 0.

int __stdcall16far Resource_Manager_Update_Path_by_Type_Logic(void *this,int mode)
{
  char *pcVar1;
  int in_DX;
  int unaff_SS;
  int in_stack_00000008;
  char *pcVar2;
  char local_306 [0x100];
  char local_206 [0x100];
  char local_106 [0x104];
  
  splitpath_far_optimized_with_segments
            ((char *)((void **)&PTR_DAT_1050_24ea_1050_2526)
                     [*(int *)((int)this + 0xe82)],
             (char *)((ulong)((void **)&PTR_DAT_1050_24ea_1050_2526)
                             [*(int *)((int)this + 0xe82)] >> 0x10),NULL,NULL,NULL);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_106),
                   (char *)CONCAT22(unaff_SS,local_206));
  if (in_stack_00000008 == 0x2)
  {
    pcVar2 = (char *)0x10503194;
  }
  else
  {
    pcVar2 = (char *)0x10503196;
  }
  strcat_append((char *)CONCAT22(unaff_SS,local_106),pcVar2);
  strcat_append((char *)CONCAT22(unaff_SS,local_106),
                (char *)CONCAT22(unaff_SS,local_306));
  pcVar1 = Resource_Manager_Resolve_File_Path_Logic(this,(char *)mode);
  if ((pcVar1 == local_106) && (in_DX == unaff_SS))
  {
    Resource_Manager_Report_File_Error_Logic(this);
  }
  free_if_not_null((void *)*(void **)_this);
  pcVar1 = strdup_allocate(pcVar1);
  *_this = (int)pcVar1;
  *(int *)((int)this + 0x2) = in_DX;
  return *_this;
}



// Wraps LoadString16 to load a Win16 string resource into the manager's internal buffer
// at offset 0x682. References global application instance at 1050:038C.

char * __stdcall16far
Resource_Manager_LoadString_to_Internal_Buffer(int offset,int segment,int res_id)
{
  u32 result;
  
  LoadString16(0x3ff,offset + 0x682U,(char *)segment,res_id);
  return (char *)(offset + 0x682U);
}



// Loads a string resource into the internal buffer (offset 0x682) and returns a newly
// allocated duplicate copy via strdup.

char * __stdcall16far
Resource_Manager_LoadString_and_Duplicate(int offset,int segment,int res_id)
{
  char *pcVar1;
  
  LoadString16(0x3ff,(ushort)(offset + 0x682),(char *)segment,res_id);
  pcVar1 = strdup_allocate((char *)(offset + 0x682));
  return pcVar1;
}



void __stdcall16far
LoadString_Global_Wrapper(int arg1,int arg2,long buffer_size,long id_segment)
{
  LoadString16((HINSTANCE16)buffer_size,(ushort)((ulong)buffer_size >> 0x10),
               (char *)id_segment,(short)((ulong)id_segment >> 0x10));
  return;
}
