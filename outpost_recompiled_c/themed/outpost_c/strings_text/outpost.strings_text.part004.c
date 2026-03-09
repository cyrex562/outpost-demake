/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 4/19
 * Original lines (combined): 12650-22696
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Far Pointer
// Invokes Windows 16-bit Common Dialog APIs:
// - GetOpenFilename16
// - GetSaveFilename16
// References string resources via Resource Manager (segment 1050:14cc) with IDs 0x579,
// 0x74c, 0x74d, 0x74e, 0x3fd, 0x57b.
// References bitmap resource: tile2.bmp (offset 1050:1538).

char * __stdcall16far UI_Prompt_File_Dialog_Get_Path(void *parent_window,int mode)
{
  char cVar1;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  BOOL16 BVar5;
  int iVar6;
  char *pcVar7;
  undefined2 uVar8;
  int unaff_SS;
  int in_stack_00000008;
  char local_782 [0x104];
  char local_67e [0x8];
  undefined4 uStack_676;
  char *pcStack_672;
  char *pcStack_670;
  char *pcStack_66e;
  char local_666 [0x100];
  char *pcStack_566;
  undefined4 local_562;
  undefined2 uStack_55e;
  char *pcStack_55a;
  char *pcStack_54a;
  int iStack_52e;
  char acStack_519 [0x101];
  uint uStack_418;
  char local_416 [0x8];
  undefined2 uStack_40e;
  char local_40c [0x102];
  char *pcStack_30a;
  void *pvStack_306;
  undefined1 local_302;
  char local_202 [0xff];
  char acStack_103 [0x101];
  
  acStack_103[0x1] = 0x0;
  local_302 = 0x0;
  local_202[0x0] = '\0';
  pvStack_306 = (void *)Resource_Manager_Get_Resource_by_ID_Logic
                                  (_p_ResourceManager,0x2);
  uVar8 = (undefined2)((ulong)pvStack_306 >> 0x10);
  pvVar3 = (void *)pvStack_306;
  pcStack_30a = (char *)*(undefined4 *)((int)pvVar3 + 0x1a);
  iVar6 = *(int *)((int)pvVar3 + 0x1c);
  pcVar7 = (char *)pcStack_30a;
  if (iVar6 == 0x0 && (char *)pcStack_30a == NULL)
  {
    pcStack_66e = (char *)*(undefined4 *)((int)pvVar3 + 0x64);
    if (*(int *)((int)pvVar3 + 0x66) != 0x0 || (char *)pcStack_66e != NULL)
    {
      init_long_pair(local_67e,
                     (long)CONCAT22(*(int *)((int)pvVar3 + 0x66),(char *)pcStack_66e));
      uStack_676 = (char *)get_next_list_item(local_67e);
      iVar6 = (int)((ulong)uStack_676 >> 0x10);
      if (iVar6 != 0x0 || (char *)uStack_676 != NULL)
      {
        pcVar2 = *(char **)((char *)uStack_676 + 0x4);
        iVar6 = (int)((ulong)pcVar2 >> 0x10);
        pcVar7 = (char *)pcVar2;
        goto LAB_1008_3206;
      }
    }
  }
  else
  {
LAB_1008_3206:
    strcpy_optimized((char *)CONCAT22(unaff_SS,acStack_103 + 0x1),
                     (char *)CONCAT22(iVar6,pcVar7));
  }
  dos_get_cwd_on_current_drive_wrapper_far(local_40c,unaff_SS);
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,local_40c));
  if (local_40c[uStack_40e - 0x1] == '\\')
  {
    local_40c[uStack_40e - 0x1] = '\0';
  }
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,acStack_103 + 0x1));
  if (acStack_103[uStack_40e] == '\\')
  {
    acStack_103[uStack_40e] = '\0';
  }
  dos_delete_file_internal_far((char *)&DAT_1050_1000);
  uVar8 = (undefined2)((ulong)pvStack_306 >> 0x10);
  pcStack_30a = (char *)*(undefined4 *)((int)(void *)pvStack_306 + 0x12);
  pcVar7 = (char *)*(int *)((int)(void *)pvStack_306 + 0x14);
  if (pcVar7 != NULL || (char *)pcStack_30a != NULL)
  {
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_202),
                     (char *)CONCAT22(pcVar7,(char *)pcStack_30a));
  }
  local_416[0x0] = '\0';
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x579);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_416),(char *)CONCAT22(pcVar7,pcVar4))
  ;
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,local_416));
  for (uStack_418 = uStack_40e; -0x1 < (int)uStack_418; uStack_418 = uStack_418 - 0x1)
  {
    if (local_416[uStack_418] == '.')
    {
      strcpy_optimized((char *)CONCAT22(unaff_SS,local_67e),
                       (char *)CONCAT22(unaff_SS,local_416 + uStack_418 + 0x1));
      strcpy_optimized((char *)CONCAT22(unaff_SS,local_416),
                       (char *)CONCAT22(unaff_SS,local_67e));
    }
  }
  acStack_519[0x1] = 0x0;
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x74c);
  strcpy_optimized((char *)CONCAT22(unaff_SS,acStack_519 + 0x1),
                   (char *)CONCAT22(pcVar7,pcVar4));
  uStack_40e = strlen_get_length((char *)CONCAT22(unaff_SS,acStack_519 + 0x1));
  cVar1 = acStack_519[uStack_40e];
  uStack_418 = 0x0;
  while (acStack_519[uStack_418 + 0x1] != '\0')
  {
    if (acStack_519[uStack_418 + 0x1] == cVar1)
    {
      acStack_519[uStack_418 + 0x1] = '\0';
    }
    uStack_418 = uStack_418 + 0x1;
  }
  pcVar4 = (char *)&DAT_1050_1000;
  memset_far(&local_562,unaff_SS,0x0);
  local_562 = 0x48;
  uStack_55e = *(undefined2 *)((int)parent_window + 0x8);
  pcStack_55a = acStack_519 + 0x1;
  _pcStack_54a = (char *)CONCAT22(unaff_SS,local_202);
  pcStack_566 = NULL;
  local_666[0x0] = '\0';
  iVar6 = (int)((ulong)_p_GlobalResourceManager >> 0x10);
  if (in_stack_00000008 == 0x1)
  {
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,iVar6,0x74d);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_666),
                     (char *)CONCAT22(pcVar7,pcVar4));
    BVar5 = GetOpenFilename16((undefined4 *)CONCAT22(unaff_SS,&local_562));
  }
  else
  {
    if (in_stack_00000008 != 0x2)
    {
      log_debug_message_v(0x1ca,0x1050);
      goto LAB_1008_3461;
    }
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,iVar6,0x74e);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_666),
                     (char *)CONCAT22(pcVar7,pcVar4));
    BVar5 = GetSaveFilename16((undefined4 *)CONCAT22(unaff_SS,&local_562));
  }
  pcVar4 = (char *)s_tile2_bmp_1050_1538;
  if (BVar5 != 0x0)
  {
    pcStack_566 = _pcStack_54a;
  }
LAB_1008_3461:
  if (pcStack_566 != NULL)
  {
    if (iStack_52e < 0x0)
    {
      pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                         ((int)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10),0x3fd);
      uStack_676 = (char *)CONCAT22(pcVar7,pcVar4);
      pcVar4 = strdup_allocate(pcVar4);
      uStack_676 = (char *)CONCAT22(pcVar7,pcVar4);
      pcStack_672 = Resource_Manager_LoadString_to_Internal_Buffer
                              ((int)_p_GlobalResourceManager,
                               (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
      pcStack_670 = pcVar7;
      MessageBox16(0x10,pcStack_672,pcVar7,(ushort)(char *)uStack_676);
      pcStack_566 = NULL;
      pcStack_66e = uStack_676;
      pcVar4 = (char *)&DAT_1050_1000;
      free_if_not_null((char *)uStack_676);
    }
    else
    {
      pcVar4 = (char *)&DAT_1050_1000;
      strncpy_fixed_optimized
                ((char *)CONCAT22(unaff_SS,local_782),_pcStack_54a,iStack_52e);
      local_782[iStack_52e] = '\0';
      if (local_782[0x0] != '\0')
      {
        pcVar4 = (char *)0x1010;
        UI_Component_Set_String_at_Offset_1A_Logic
                  ((void *)pvStack_306,(char *)((ulong)pvStack_306 >> 0x10));
      }
    }
  }
  dos_delete_file_internal_far(pcVar4);
  return (char *)pcStack_566;
}



// Blits a source bitmap onto the current bitmap with transparency handling. Pixels with
// value 0xFF (-1) are skipped. Iterates through scanlines and manages 16-bit segment
// boundaries.

void __stdcall16far
Bitmap_Object_Blit_Transparent_Logic(void *this,void *pos,void *src_bitmap)
{
  int iVar1;
  int iVar2;
  int x;
  void *pvVar3;
  char *pcVar4;
  undefined2 in_DX;
  int iVar5;
  int *in_stack_0000000a;
  void *in_stack_0000000c;
  int iStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_6 [0x2];
  
  unpack_word_pair(src_bitmap,in_stack_0000000a,local_6);
  pvVar3 = get_with_lazy_init((void *)in_stack_0000000c);
  iVar1 = *(int *)((int)pvVar3 + 0x4);
  iVar2 = *(int *)((int)pvVar3 + 0x8);
  for (iStack_10 = 0x0; x = local_6[0x0], iStack_10 < iVar2; iStack_10 += 0x1)
  {
    iVar5 = local_6[0x0] >> 0xf;
    local_6[0x0] = local_6[0x0] + 0x1;
    pcVar4 = Bitmap_Object_Get_Pixel_Address(this,(int)pos,x);
    uStack_14 = (char *)CONCAT22(iVar5,pcVar4);
    pcVar4 = Bitmap_Object_Get_Pixel_Address
                       ((void *)in_stack_0000000c,
                        (int)((ulong)in_stack_0000000c >> 0x10),iStack_10);
    uStack_18 = (char *)CONCAT22(iVar5,pcVar4);
    iStack_1a = iVar1;
    while (iStack_1a != 0x0)
    {
      if (*uStack_18 != -0x1)
      {
        *uStack_14 = *uStack_18;
      }
      uStack_18 = (char *)CONCAT22(uStack_18._2_2_ +
                                   (-(uint)((char *)0xfffe < (char *)uStack_18) & 0x6c),
                                   (char *)uStack_18 + 0x1);
      uStack_14 = (char *)CONCAT22(uStack_14._2_2_ +
                                   (-(uint)((char *)0xfffe < (char *)uStack_14) & 0x6c),
                                   (char *)uStack_14 + 0x1);
      iStack_1a = iStack_1a + -0x1;
    }
  }
  return;
}



// Targeted Scan Finding: Vtable
// Initializes File_Object vtable to 1008:4C4C (replaces base 1008:389A).

void * __stdcall16far
File_Object_ctor(undefined2 *param_1,undefined2 param_2,char *param_3)
{
  char *pcVar1;
  undefined2 in_DX;
  undefined2 *puVar2;
  void *pvVar3;
  
  pvVar3 = (void *)((ulong)param_1 >> 0x10);
  puVar2 = (undefined2 *)param_1;
  *param_1 = (char *)s_1_1050_389a;
  puVar2[0x1] = 0x1008;
  *(undefined4 *)(puVar2 + 0x2) = 0x0;
  *(undefined4 *)(puVar2 + 0x4) = 0x0;
  puVar2[0x6] = 0xffff;
  *(undefined4 *)(puVar2 + 0x7) = 0x0;
  *(undefined4 *)(puVar2 + 0x9) = 0x0;
  *(undefined4 *)(puVar2 + 0xb) = 0x0;
  *(undefined4 *)(puVar2 + 0xd) = 0x0;
  puVar2[0xf] = 0x0;
  puVar2[0x11] = param_2;
  *param_1 = 0x4c4c;
  puVar2[0x1] = 0x1008;
  pcVar1 = strdup_allocate(param_3);
  puVar2[0x4] = pcVar1;
  puVar2[0x5] = in_DX;
  return pvVar3;
}



// Targeted Scan Finding: Vtable
// Initializes Base_Graphic_Object vtable to 1008:389A.

void * __stdcall16far Base_Graphic_Object_ctor(void *this)
{
  undefined2 in_stack_00000006;
  
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined2 *)((int)this + 0x4) = 0x0;
  *_this = (char *)s__s__d_1050_573a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes object vtable to 1008:5BC4 (base 1008:389A).

void * __stdcall16far construct_object_with_vtable(astruct_491 *this,u16 param_2)
{
                // Constructor - initializes object with vtable pointers (0x389a, then
                // 0x5bc4) and default field values.
  *(char **)&_this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  this->field1_0x4 = 0x0;
  this->field2_0x8 = 0x0;
  this->field3_0xa = 0x1;
  *(char **)&_this->field0_0x0 = (char *)s__s__s__1050_5bc0 + 0x4;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  return this;
}



// Targeted Scan Finding: Vtable
// Reverts vtable sequence during destruction: 1008:5BC4 -> 1008:389A.

void __stdcall16far UI_Control_Sub_dtor_logic(void *this)
{
  u16 in_stack_00000006;
  
  *_this = (char *)s__s__s__1050_5bc0 + 0x4;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  linked_list_clear_and_destroy_items(this,in_stack_00000006);
  *_this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Add_Window_to_List(u32 param_1,u32 param_2)
{
  void *pvVar1;
  int in_DX;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  u32 local_a;
  u32 local_6;
  
  pvVar1 = validate_and_get_block((void *)_p_Pool_Type2_Component);
  local_a = CONCAT22(in_DX,pvVar1);
  if (in_DX == 0x0 && pvVar1 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_a = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar1 + 0x2) = 0x1008;
    *(undefined4 *)((int)pvVar1 + 0x4) = 0x0;
    *(undefined4 *)((int)pvVar1 + 0x8) = 0x0;
    *(char **)local_a = (char *)s__s__s__1050_5bc0;
    *(undefined2 *)((int)pvVar1 + 0x2) = 0x1008;
    local_6 = local_a;
  }
  if (local_6 == 0x0)
  {
    return 0x0;
  }
  uVar3 = (undefined2)(local_6 >> 0x10);
  *(u32 *)((int)local_6 + 0x8) = param_2;
  uVar4 = (undefined2)(param_1 >> 0x10);
  iVar2 = (int)param_1;
  *(undefined4 *)((int)local_6 + 0x4) = *(undefined4 *)(iVar2 + 0x4);
  *(u32 *)(iVar2 + 0x4) = local_6;
  *(int *)(iVar2 + 0x8) = *(int *)(iVar2 + 0x8) + 0x1;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u16 __stdcall16far UI_Component_Append_Window_to_List(u32 *param_1,u32 param_2)
{
  u32 *puVar1;
  u16 uVar2;
  void *pvVar3;
  int in_DX;
  u32 *puVar4;
  u16 uVar5;
  u16 uVar6;
  u32 local_e;
  u32 local_a;
  u32 local_6;
  u16 *puVar2;
  
  uVar5 = (u16)((ulong)param_1 >> 0x10);
  puVar4 = (u32 *)param_1;
  if ((int)puVar4[0x2] == 0x0)
  {
    puVar2 = (u16 *)((int)*param_1 + 0x4);
    uVar2 = (*(code *)*puVar2)();
    return uVar2;
  }
  pvVar3 = validate_and_get_block((void *)_p_Pool_Type2_Component);
  local_e = CONCAT22(in_DX,pvVar3);
  if (in_DX == 0x0 && pvVar3 == NULL)
  {
    local_6 = 0x0;
  }
  else
  {
    *(char **)local_e = (char *)s_1_1050_389a;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    *(undefined4 *)((int)pvVar3 + 0x4) = 0x0;
    *(undefined4 *)((int)pvVar3 + 0x8) = 0x0;
    *(char **)local_e = (char *)s__s__s__1050_5bc0;
    *(undefined2 *)((int)pvVar3 + 0x2) = 0x1008;
    local_6 = local_e;
  }
  if (local_6 == 0x0)
  {
    return 0x0;
  }
  *(u32 *)((int)local_6 + 0x8) = param_2;
  do
  {
    param_1 = (u32 *)((u32 *)param_1)[0x1];
    uVar6 = (u16)((ulong)param_1 >> 0x10);
  } while (((u32 *)param_1)[0x1] != 0x0);
  ((u32 *)param_1)[0x1] = local_6;
  puVar1 = puVar4 + 0x2;
  *(int *)puVar1 = (int)*puVar1 + 0x1;
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global string resource manager at 1050:14CC.

char * __cdecl16far res_concatenate_strings_by_id(int param_1)
{
  ulong uVar1;
  int *piVar2;
  char *pcVar3;
  char *pcVar4;
  undefined2 in_DX;
  undefined2 uVar5;
  undefined2 unaff_SS;
  undefined2 in_stack_0000ffdc;
  int *piStack_6;
  
  _piStack_6 = (int *)CONCAT22(unaff_SS,&stack0x0006);
  pcVar3 = allocate_memory(CONCAT22(in_stack_0000ffdc,0x1000));
  uVar5 = in_DX;
  pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),param_1);
  strcpy_optimized((char *)CONCAT22(in_DX,pcVar3),(char *)CONCAT22(uVar5,pcVar4));
  while( true )
  {
    piVar2 = _piStack_6;
    uVar1 = (ulong)_piStack_6 >> 0x10;
    _piStack_6 = (int *)CONCAT22((int)uVar1,piStack_6 + 0x1);
    if (*piVar2 == 0x0) break;
    pcVar4 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),*piVar2);
    strcat_append((char *)CONCAT22(in_DX,pcVar3),(char *)CONCAT22(uVar5,pcVar4));
  }
  return pcVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer / Resource
// References debug logging flags and objects in segment 1050:
// - PTR_DAT_1050_02ec
// - _PTR_DAT_1050_02f0 (Log handle)
// Outputs debug string suffix at far pointer 1050:02FA.

void __cdecl16far log_debug_message_v(void *param_1)
{
  char *pcVar1;
  int in_DX;
  undefined2 unaff_SS;
  undefined1 local_106 [0x100];
  undefined1 *puStack_6;
  
  if (PTR_DAT_1050_0000_1050_02ec != NULL)
  {
    _puStack_6 = (undefined1 *)CONCAT22(unaff_SS,&stack0x0008);
    if (u16_1050_02ee == 0xffff)
    {
      pcVar1 = getenv_wrapper_far_ptr_search((char *)s_MONO2_1050_02f4);
      u16_1050_02ee = (u16)(in_DX != 0x0 || pcVar1 != NULL);
    }
    if (u16_1050_02ee != 0x0)
    {
      wvsprintf16(_puStack_6,param_1,(undefined1 *)CONCAT22(unaff_SS,local_106));
      OutputDebugString((undefined1 *)CONCAT22(unaff_SS,local_106));
      OutputDebugString(s__1050_02fa);
      if (_PTR_DAT_1050_0000_1050_02f0 != NULL)
      {
        handle_open_resource_locked(_PTR_DAT_1050_0000_1050_02f0,0x2fd,0x1050,local_106)
        ;
        handle_flush_specific(_PTR_DAT_1050_0000_1050_02f0);
      }
    }
  }
  return;
}



char * __cdecl16far strdup_allocate(char *str)
{
  uint uVar1;
  char *pcVar2;
  int in_DX;
  undefined2 in_stack_00000006;
  undefined2 in_stack_0000fff8;
  
                // String duplication - allocates memory for strlen+1, copies string,
                // returns new pointer. Returns NULL if param is NULL or allocation
                // fails.
  if (_str != NULL)
  {
    uVar1 = strlen_get_length((char *)CONCAT22(in_stack_00000006,str));
    pcVar2 = allocate_memory(CONCAT22(in_stack_0000fff8,uVar1 + 0x1));
    if (in_DX != 0x0 || pcVar2 != NULL)
    {
      strcpy_optimized((char *)CONCAT22(in_DX,pcVar2),
                       (char *)CONCAT22(in_stack_00000006,str));
      return pcVar2;
    }
  }
  return NULL;
}



// Targeted Scan Finding: Far Pointer / Resource
// Initializes global save version pointer at 1050:0312.
// Uses 1050:1050 as scratch for sprintf.
// References string literal "SC%03d" (1050:031C) for file header formatting.

void * __stdcall16far file_context_init_logic(void *this,char *filename)
{
  char *pcVar1;
  undefined2 in_DX;
  char *in_stack_00000008;
  
  *_this = 0x0;
  *(undefined2 *)((int)this + 0x4) = 0xffff;
  PTR_DAT_1050_0000_1050_0312 = (undefined *)&p_LastAllocatedBlock;
  sprintf_wrapper(0x65a0,0x1050,(void *)PTR_s_SC_03d_1050_0314_1050_031c,
                  (int)((ulong)PTR_s_SC_03d_1050_0314_1050_031c >> 0x10),0x4);
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(char **)_this = pcVar1;
  *(undefined2 *)((int)this + 0x2) = in_DX;
  return this;
}



// Targeted Scan Finding: Far Pointer
// References static null-string buffer at 1050:149A if input is NULL.

int __stdcall16far file_context_write_string_with_terminator_logic(void *this,char *str)
{
  int iVar1;
  char *in_stack_00000008;
  
  if (in_stack_00000008 != NULL)
  {
    strlen_get_length(in_stack_00000008);
    iVar1 = file_write_check((long)_this,(char *)in_stack_00000008,
                             (void *)((ulong)in_stack_00000008 >> 0x10));
    return iVar1;
  }
  file_write_check((long)_this,(void *)0x149a,(dword *)&g_HeapContext);
  return 0x1;
}



// Reads a null-terminated string from the save file into the provided buffer. It reads
// characters one by one from the file context until a null character is encountered.

void __stdcall16far
file_context_read_null_terminated_string_logic(void *this,char *buffer)
{
  char *pcVar1;
  undefined2 unaff_SS;
  char *pcStack0008;
  undefined2 uStack000a;
  char local_c [0xa];
  
  while( true )
  {
    pcVar1 = _pcStack0008;
    _hread16(0x1,(char *)CONCAT22(unaff_SS,local_c),*_this);
    if (local_c[0x0] == '\0') break;
    _pcStack0008 = (char *)CONCAT22(uStack000a,pcStack0008 + 0x1);
    *pcVar1 = local_c[0x0];
  }
  *_pcStack0008 = '\0';
  return;
}



// Verifies a marker string in the file buffer against a generated template. Returns 1
// if the strings match, 0 otherwise. Used internally by
// `file_context_find_footer_marker_logic`.

int __stdcall16far file_context_verify_marker_string_logic(void)
{
  int iVar1;
  undefined2 unaff_SS;
  char *in_stack_0000000a;
  char local_c [0xa];
  
  sprintf_wrapper(local_c);
  strlen_get_length((char *)CONCAT22(unaff_SS,local_c));
  iVar1 = strncmp_fixed_optimized
                    ((char *)in_stack_0000000a,
                     (char *)((ulong)in_stack_0000000a >> 0x10),(int)local_c);
  if (iVar1 == 0x0)
  {
    return 0x1;
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Far Pointer
// References global UI color/pen pointers in segment 1050:
// - PTR_PTR_1050_0368
// - DAT_1050_0364.

void __cdecl16far UI_SpinControl_PaintHandler(HWND16 param_1,undefined4 param_2)
{
  HGDIOBJ16 HVar1;
  HGDIOBJ16 HVar2;
  HDC16 hdc;
  undefined2 uVar3;
  undefined2 unaff_SS;
  short local_58;
  short sStack_56;
  uint uStack_54;
  uint uStack_52;
  HBRUSH16 HStack_50;
  HPEN16 HStack_4e;
  HPEN16 HStack_4c;
  HDC16 HStack_4a;
  uint uStack_48;
  uint uStack_46;
  uint uStack_44;
  uint uStack_42;
  uint uStack_40;
  uint uStack_3e;
  undefined1 local_3c [0x20];
  int local_1c;
  int iStack_1a;
  int iStack_18;
  int iStack_16;
  int iStack_14;
  int iStack_12;
  int local_10;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  uint uStack_4;
  
  HStack_4a = BeginPaint16((undefined1 *)CONCAT22(unaff_SS,local_3c),param_1);
  uStack_4 = 0x0;
  HStack_4c = CreatePen16((short)_PTR_p_CurrentHeapContext_1050_0368,
                          (short)((ulong)_PTR_p_CurrentHeapContext_1050_0368 >> 0x10),
                          0x1);
  HStack_4e = CreatePen16((short)u32_1050_0364,(short)(u32_1050_0364 >> 0x10),0x1);
  HStack_50 = CreateSolidBrush16((COLORREF)u32_1050_0364);
  GetClientRect16((short *)CONCAT22(unaff_SS,&local_58),param_1);
  uStack_3e = uStack_54;
  uStack_40 = uStack_52;
  uStack_42 = uStack_54 >> 0x1;
  uStack_44 = uStack_52 >> 0x1;
  uStack_46 = uStack_54 >> 0x2;
  uStack_48 = uStack_52 >> 0x2;
  HVar1 = GetStockObject16(0x7);
  HVar1 = SelectObject16(0x1538,HVar1);
  HVar2 = GetStockObject16(0x4);
  HVar2 = SelectObject16(0x1538,HVar2);
  Rectangle16(uStack_52,uStack_54,sStack_56,local_58,HStack_4a);
  MoveTo16(uStack_44,0x0,HStack_4a);
  LineTo16(uStack_44,uStack_3e,HStack_4a);
  uVar3 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(byte *)((int)param_2 + 0x4) & 0x4) != 0x0)
  {
    uStack_4 = 0x1;
  }
  local_10 = uStack_42 + uStack_4;
  iStack_e = uStack_48 + uStack_4 + -0x2;
  iStack_c = local_10 + -0x3;
  iStack_a = uStack_48 + uStack_4 + 0x1;
  iStack_8 = local_10 + 0x3;
  iStack_6 = iStack_a;
  SelectObject16(0x1538,HStack_4c);
  if (uStack_4 == 0x0)
  {
    MoveTo16(uStack_44 - 0x2,0x1,HStack_4a);
    LineTo16(0x1,0x1,HStack_4a);
    LineTo16(0x1,uStack_3e - 0x1,HStack_4a);
  }
  uStack_4 = (uint)((*(byte *)((int)param_2 + 0x4) & 0x8) != 0x0);
  local_1c = uStack_42 + uStack_4;
  iStack_16 = (uStack_40 - uStack_48) + uStack_4;
  iStack_1a = iStack_16 + 0x1;
  iStack_18 = local_1c + -0x3;
  iStack_16 += -0x2;
  iStack_14 = local_1c + 0x3;
  iStack_12 = iStack_16;
  if (uStack_4 == 0x0)
  {
    MoveTo16(uStack_52 - 0x2,0x1,HStack_4a);
    hdc = uStack_44 + 0x1;
    LineTo16(hdc,0x1,HStack_4a);
    LineTo16(hdc,uStack_3e - 0x1,HStack_4a);
  }
  SelectObject16(0x1538,HStack_4e);
  SelectObject16(0x1538,HStack_50);
  Polygon16(0x1538,(void *)((int)(undefined **)&p_CurrentHeapContext + 0x1),
            (short)&local_10);
  Polygon16(0x1538,(void *)((int)(undefined **)&p_CurrentHeapContext + 0x1),
            (short)&local_1c);
  SelectObject16(0x1538,HVar2);
  SelectObject16(0x1538,HVar1);
  DeleteObject16(HStack_4c);
  DeleteObject16(HStack_4e);
  DeleteObject16(HStack_50);
  EndPaint16((undefined1 *)CONCAT22(unaff_SS,local_3c),param_1);
  return;
}



void __stdcall16far
UI_Control_Set_Window_Text_from_Offset_A_Logic(u32 param_1,u16 param_2,char *param_3)
{
  strcpy_optimized((char *)CONCAT22(param_1._2_2_,(char *)((int)param_1 + 0xa)),param_3)
  ;
  SetWindowText16((char *)CONCAT22(param_1._2_2_,(char *)((int)param_1 + 0xa)),
                  *(HWND16 *)((int)param_1 + 0x8));
  return;
}



uint __stdcall16far
UI_Control_Get_Window_Text_to_Offset_A_Logic(u32 param_1,char *param_2,int param_3)
{
  uint uVar1;
  undefined2 uVar2;
  u16 local_4;
  
  uVar2 = (undefined2)(param_1 >> 0x10);
  uVar1 = strlen_get_length((char *)CONCAT22(uVar2,(char *)((int)param_1 + 0xa)));
  if (param_3 < (int)uVar1)
  {
    uVar1 = param_3 - 0x1;
  }
  strncpy_fixed_optimized
            (param_2,(char *)CONCAT22(uVar2,(char *)((int)param_1 + 0xa)),uVar1);
  return uVar1;
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
