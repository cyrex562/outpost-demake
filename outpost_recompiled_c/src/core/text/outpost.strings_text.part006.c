/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 6/19
 * Original lines (combined): 27070-32684
 * Boundaries: top-level declarations/definitions only
 */



/* ── part006 fixup: global aliases & externs ── */
#include <outpost.types_structs.part049.h>
#include <outpost.types_structs.part058.h>
#include <ghidra.h>
#include <outpost_types.h>
#include <win16_api.h>
#define _status_out             status_out
#define _p_SimulatorWorldContext p_SimulatorWorldContext
#define _p_GlobalResourceManager p_GlobalResourceManager
extern void           *p_SimulatorWorldContext;
extern void           *p_GlobalResourceManager;
extern void           *_p_ResourceManager;
extern u16             g_ReportFilter_0ECC;
extern void*         _p_StringPropertyTable;
extern const char      s_1_1050_389a[];
extern const char      s_573_bmp_1050_200f[];
extern const char      s_40_33_1050_3b5c[];




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Targeted Scan Finding: Resource / Vtable / Far Pointer
// Performs sophisticated message formatting by concatenating 40+ resource strings (IDs
// 0x757 to 0x7CB) via 1050:14CC.
// Indirectly calls virtual destructor (index 0) of the popped event object.
// Handles variable substitution for resource paths.

void __stdcall16far
Turn_Manager_Format_Resource_Event_Message_Logic
          (void *this,char **message_out,int *status_out)
{
  int iVar1;
  undefined2 *puVar2;
  char *pcVar3;
  uint uVar4;
  char **out_str;
  char **extraout_DX;
  undefined4 *puVar5;
  undefined2 in_stack_0000000a;
  undefined4 *in_stack_0000000c;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  
  *in_stack_0000000c = 0x0;
  _status_out[0x0] = 0x0;
  _status_out[0x1] = 0x0;
  puVar2 = (undefined2 *)((int)*(undefined4 *)*(undefined4 *)((int)this + 0xa) + 0x10);
  puVar5 = (undefined4 *)(*(code *)*puVar2)();
  uVar4 = (uint)((ulong)puVar5 >> 0x10);
  out_str = (char **)(uVar4 | (uint)(undefined4 *)puVar5);
  if (out_str == NULL)
  {
    return;
  }
  iVar1 = *(int *)((undefined4 *)puVar5 + 0x1);
  if (puVar5 != NULL)
  {
    (*(code *)*(undefined2 *)(undefined2 *)*puVar5)();
    out_str = extraout_DX;
  }
  if (*(int *)((int)*(undefined4 *)((int)this + 0xa) + 0x8) == 0x0)
  {
    UI_System_Set_State_Flag_and_Notify(this,(int)message_out,0x0);
    UI_Container_Notify_Listeners_at_Offset_4_Logic(this,(int)message_out);
  }
  pcVar3 = Resource_Manager_LoadString_and_Duplicate
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),iVar1 + 0x757);
  *(char **)in_stack_0000000c = pcVar3;
  *(uint *)((int)(undefined4 *)in_stack_0000000c + 0x2) = (uint)out_str;
  while (pcVar3 = strchr_far_optimized
                            ((char *)(char *)*in_stack_0000000c,
                             (char)((ulong)*in_stack_0000000c >> 0x10)),
        out_str != NULL || pcVar3 != NULL)
  {
    Path_Manager_Construct_Resource_Path
              ((int)this,(int)message_out,pcVar3,out_str,(long)in_stack_0000000c);
  }
  switch(iVar1)
  {
  case 0x1:
    uVar9 = 0x96;
    uVar6 = 0x777;
    goto LAB_1010_0619;
  case 0x2:
    uVar9 = 0x97;
    uVar6 = 0x778;
    goto LAB_1010_0619;
  case 0x3:
    uVar9 = 0x99;
    uVar6 = 0x779;
    uVar7 = 0x798;
    break;
  case 0x4:
    uVar9 = 0x9a;
    uVar6 = 0x77a;
    goto LAB_1010_0619;
  case 0x5:
    uVar9 = 0x9b;
    uVar6 = 0x77b;
    goto LAB_1010_0619;
  case 0x6:
    uVar9 = 0x9d;
    uVar6 = 0x77c;
    uVar7 = 0x79c;
    break;
  case 0x7:
    uVar9 = 0x9e;
    uVar6 = 0x77d;
    goto LAB_1010_0619;
  case 0x8:
    uVar9 = 0x9f;
    uVar6 = 0x77e;
    goto LAB_1010_0619;
  case 0x9:
    uVar9 = 0xa1;
    uVar6 = 0x77f;
    uVar7 = 0x7a0;
    break;
  case 0xa:
    uVar9 = 0xa2;
    uVar6 = 0x780;
    goto LAB_1010_0619;
  case 0xb:
    uVar9 = 0xa3;
    uVar6 = 0x781;
    goto LAB_1010_0619;
  case 0xc:
    uVar9 = 0xa5;
    uVar6 = 0x782;
    uVar7 = 0x7a4;
    break;
  case 0xd:
    uVar9 = 0xa6;
    uVar6 = 0x783;
    goto LAB_1010_0619;
  case 0xe:
    uVar9 = 0xa8;
    uVar6 = 0x784;
    uVar7 = 0x7a7;
    break;
  case 0xf:
    uVar9 = 0xa9;
    uVar6 = 0x785;
    goto LAB_1010_0619;
  case 0x10:
    uVar9 = 0xab;
    uVar6 = 0x786;
    uVar7 = 0x7aa;
    break;
  case 0x11:
    uVar9 = 0xad;
    uVar6 = 0x787;
    uVar7 = 0x7ac;
    break;
  case 0x12:
    uVar9 = 0xaf;
    uVar6 = 0x788;
    uVar7 = 0x7ae;
    break;
  case 0x13:
    uVar9 = 0xb1;
    uVar6 = 0x789;
    uVar7 = 0x7b0;
    break;
  case 0x14:
    uVar9 = 0xb3;
    uVar6 = 0x78a;
    uVar7 = 0x7b2;
    break;
  case 0x15:
    uVar9 = 0xb5;
    uVar6 = 0x78b;
    uVar7 = 0x7b4;
    break;
  case 0x16:
    uVar9 = 0xb6;
    uVar6 = 0x78c;
LAB_1010_0619:
    pcVar3 = res_concatenate_strings_by_id(uVar6,uVar9,0x0);
    goto LAB_1010_0621;
  case 0x17:
    uVar9 = 0xb8;
    uVar6 = 0x78d;
    uVar7 = 0x7b7;
    break;
  case 0x18:
    uVar9 = 0xba;
    uVar6 = 0x78e;
    uVar7 = 0x7b9;
    break;
  case 0x19:
    uVar9 = 0xbd;
    uVar7 = 0x7bb;
    uVar8 = 0x7bc;
    uVar6 = 0x78f;
    goto LAB_1010_0785;
  case 0x1a:
    uVar9 = 0xc0;
    uVar7 = 0x7be;
    uVar8 = 0x7bf;
    uVar6 = 0x790;
    goto LAB_1010_0785;
  case 0x1b:
    uVar9 = 0xc3;
    uVar7 = 0x7c1;
    uVar8 = 0x7c2;
    uVar6 = 0x791;
    goto LAB_1010_0785;
  case 0x1c:
    uVar9 = 0xc5;
    uVar6 = 0x792;
    uVar7 = 0x7c4;
    break;
  case 0x1d:
    uVar9 = 0xc7;
    uVar6 = 0x793;
    uVar7 = 0x7c6;
    break;
  case 0x1e:
    pcVar3 = res_concatenate_strings_by_id(0x794,0x7c8,0xc9,0x0);
    *_status_out = (int)pcVar3;
    status_out[0x1] = (int)out_str;
  case 0x1f:
    uVar9 = 0xcc;
    uVar7 = 0x7ca;
    uVar8 = 0x7cb;
    uVar6 = 0x795;
LAB_1010_0785:
    pcVar3 = res_concatenate_strings_by_id(uVar6,uVar7,uVar8,uVar9,0x0);
    goto LAB_1010_0621;
  default:
    goto switchD_1010_080d_default;
  }
  pcVar3 = res_concatenate_strings_by_id(uVar6,uVar7,uVar9,0x0);
LAB_1010_0621:
  *_status_out = (int)pcVar3;
  status_out[0x1] = (int)out_str;
switchD_1010_080d_default:
  while (pcVar3 = strchr_far_optimized
                            ((char *)*(char **)_status_out,
                             (char)((ulong)*(char **)_status_out >> 0x10)),
        out_str != NULL || pcVar3 != NULL)
  {
    Path_Manager_Construct_Resource_Path
              ((int)this,(int)message_out,pcVar3,out_str,(long)_status_out);
  }
  return;
}



// Targeted Scan Finding: Far Pointer / Vtable
// Core hierarchical list engine managing complex far-pointer array allocations.
// References global property tables in segment 1050 at offsets 0xEBA, 0xEBC, and 0xEBE.
// Performs indirect calls through sub-component vtable offset 0x1C.

void * __stdcall16far UI_Report_List_Internal_Grouping_Engine_Logic(void *this)
{
  undefined4 uVar1;
  void *pvVar2;
  undefined2 *puVar3;
  void *pvVar4;
  void *dest;
  void *dest_00;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  uint reg_dx;
  uint value;
  uint value_00;
  uint uVar9;
  void *extraout_DX;
  uint uVar10;
  void *extraout_DX_00;
  void *extraout_DX_01;
  int iVar11;
  undefined2 unaff_SI;
  undefined2 uVar12;
  undefined2 in_stack_00000006;
  undefined4 *uStack_32;
  int iStack_2a;
  int iStack_28;
  int iStack_1c;
  undefined4 *uStack_1a;
  undefined4 *uStack_16;
  int iStack_e;
  int iStack_c;
  char *pcStack_a;
  
  if (g_ReportFilter_0ECC == 0xffff)
  {
    return NULL;
  }
  pvVar4 = allocate_memory(CONCAT22(unaff_SI,0x1a));
  reg_dx |= (uint)pvVar4;
  if (reg_dx == 0x0)
  {
    pvVar4 = NULL;
    reg_dx = 0x0;
  }
  else
  {
    pvVar4 = Collection_Object_Subclass_ctor_3B3E(pvVar4);
  }
  pcStack_a = (char *)0x10500ece;
  iStack_e = 0x0;
  iStack_c = 0x0;
  value = reg_dx;
  while( true )
  {
    if (*(int *)((int)this + 0x68) <= iStack_e) break;
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)this + 0x64) + iStack_e * 0x4);
    uStack_32 = (undefined4 *)
                CONCAT22((int)((ulong)uVar1 >> 0x10),
                         (undefined4 *)((int)uVar1 + g_ReportFilter_0ECC * 0x8));
    iVar11 = stricmp_case_insensitive_far
                       ((char *)pcStack_a,(char *)((ulong)pcStack_a >> 0x10));
    if (iVar11 != 0x0)
    {
      pcStack_a = (char *)*uStack_32;
      iStack_c += 0x1;
    }
    iStack_e += 0x1;
  }
  *(int *)((int)pvVar4 + 0x10) = iStack_c;
  Collection_Object_Subclass_3B3E_factory(pvVar4,reg_dx);
  dest = allocate_memory(CONCAT22(unaff_SI,0x400));
  value_00 = value;
  dest_00 = allocate_memory(CONCAT22(unaff_SI,0x400));
  iStack_1c = 0x0;
  memset_far(dest,value,0x0);
  memset_far(dest_00,value_00,0x0);
  iStack_2a = 0x0;
  iStack_e = 0x0;
  do
  {
    if (*(int *)((int)pvVar4 + 0x10) <= iStack_e)
    {
      return pvVar4;
    }
    uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
    iVar11 = (int)*(undefined4 *)((int)this + 0x64);
    uVar10 = *(uint *)(iVar11 + iStack_1c * 0x4 + 0x2);
    puVar8 = (undefined4 *)
             (*(int *)(iVar11 + iStack_1c * 0x4) +
             *(int *)(g_ReportFilter_0ECC * 0x6 + 0xeba) * 0x8);
    uStack_16 = (undefined4 *)CONCAT22(uVar10,puVar8);
    uVar9 = uVar10;
    pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x1a));
    uVar9 |= (uint)pvVar5;
    if (uVar9 == 0x0)
    {
      *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4) = 0x0;
    }
    else
    {
      pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar5);
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)pvVar4 + 0x8);
      *(undefined2 *)(iVar11 + iStack_e * 0x4) = pvVar5;
      *(uint *)(iVar11 + iStack_e * 0x4 + 0x2) = uVar9;
    }
    iStack_2a += 0x1;
    uVar12 = (undefined2)((ulong)*(undefined4 *)((int)pvVar4 + 0x8) >> 0x10);
    iVar11 = (int)*(undefined4 *)((int)pvVar4 + 0x8);
    uVar1 = *(undefined4 *)(iVar11 + iStack_e * 0x4);
    puVar3 = (undefined2 *)
             ((int)*(undefined4 *)*(undefined4 *)(iVar11 + iStack_e * 0x4) + 0x1c);
    (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,puVar8,
                       uVar10);
    iStack_c = 0x0;
    pvVar5 = extraout_DX;
    while( true )
    {
      if (*(int *)((int)this + 0x68) <= iStack_1c) break;
      iVar11 = stricmp_case_insensitive_far
                         ((char *)(char *)*uStack_16,(char *)((ulong)*uStack_16 >> 0x10)
                         );
      if (iVar11 != 0x0) break;
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)this + 0x64);
      uVar10 = *(uint *)(iVar11 + iStack_1c * 0x4 + 0x2);
      uStack_1a = (undefined4 *)
                  CONCAT22(uVar10,(undefined4 *)
                                  (*(int *)(iVar11 + iStack_1c * 0x4) +
                                  *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebc) * 0x8));
      pvVar5 = allocate_memory(CONCAT22(unaff_SI,0x1a));
      uVar10 |= (uint)pvVar5;
      if (uVar10 == 0x0)
      {
        pvVar5 = NULL;
        uVar10 = 0x0;
      }
      else
      {
        pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar5);
      }
      *(undefined2 *)(iStack_c * 0x4 + (int)dest) = pvVar5;
      *(uint *)((int)dest + iStack_c * 0x4 + 0x2) = uVar10;
      uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
      iVar11 = (int)*(undefined4 *)((int)this + 0x64);
      iStack_2a += 0x1;
      uVar1 = *(undefined4 *)(iStack_c * 0x4 + (int)dest);
      puVar3 = (undefined2 *)
               ((int)*(undefined4 *)*(undefined4 *)(iStack_c * 0x4 + (int)dest) + 0x1c);
      (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,
                         *(int *)(iVar11 + iStack_1c * 0x4) +
                         *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebc) * 0x8,
                         *(undefined2 *)(iVar11 + iStack_1c * 0x4 + 0x2));
      iStack_28 = 0x0;
      pvVar5 = extraout_DX_00;
      while( true )
      {
        if (*(int *)((int)this + 0x68) <= iStack_1c) break;
        iVar11 = stricmp_case_insensitive_far
                           ((char *)(char *)*uStack_1a,
                            (char *)((ulong)*uStack_1a >> 0x10));
        if (iVar11 != 0x0) break;
        iVar11 = stricmp_case_insensitive_far
                           ((char *)(char *)*uStack_16,
                            (char *)((ulong)*uStack_16 >> 0x10));
        if (iVar11 != 0x0) break;
        pvVar6 = allocate_memory(CONCAT22(unaff_SI,0x1a));
        uVar10 = (uint)pvVar5 | (uint)pvVar6;
        if (uVar10 == 0x0)
        {
          pvVar5 = NULL;
          uVar10 = 0x0;
        }
        else
        {
          pvVar5 = Collection_Object_Subclass_ctor_3B3E(pvVar6);
        }
        *(undefined2 *)(iStack_28 * 0x4 + (int)dest_00) = pvVar5;
        *(uint *)((int)dest_00 + iStack_28 * 0x4 + 0x2) = uVar10;
        uVar12 = (undefined2)((ulong)*(undefined4 *)((int)this + 0x64) >> 0x10);
        iVar11 = (int)*(undefined4 *)((int)this + 0x64);
        iStack_2a += 0x1;
        uVar1 = *(undefined4 *)(iStack_28 * 0x4 + (int)dest_00);
        puVar3 = (undefined2 *)
                 ((int)*(undefined4 *)*(undefined4 *)(iStack_28 * 0x4 + (int)dest_00) +
                 0x1c);
        (*(code *)*puVar3)(0x1000,(int)uVar1,(int)((ulong)uVar1 >> 0x10),iStack_2a,
                           *(int *)(iVar11 + iStack_1c * 0x4) +
                           *(int *)(g_ReportFilter_0ECC * 0x6 + 0xebe) * 0x8,
                           *(undefined2 *)(iVar11 + iStack_1c * 0x4 + 0x2));
        iStack_1c += 0x1;
        iStack_28 += 0x1;
        pvVar5 = extraout_DX_01;
      }
      uVar1 = *(undefined4 *)(iStack_c * 0x4 + (int)dest);
      *(int *)((int)uVar1 + 0x10) = iStack_28;
      pvVar2 = (void *)*(undefined4 *)(iStack_c * 0x4 + (int)dest);
      pvVar6 = dest_00;
      pvVar7 = Collection_Object_Subclass_3B3E_factory
                         ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
      memcpy_far_words(pvVar7,pvVar5,(int)pvVar6);
      memset_far(dest_00,value_00,0x0);
      iStack_c += 0x1;
    }
    uVar1 = *(undefined4 *)((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4);
    *(int *)((int)uVar1 + 0x10) = iStack_c;
    pvVar2 = (void *)*(undefined4 *)
                      ((int)*(undefined4 *)((int)pvVar4 + 0x8) + iStack_e * 0x4);
    pvVar6 = dest;
    pvVar7 = Collection_Object_Subclass_3B3E_factory
                       ((void *)pvVar2,(int)((ulong)pvVar2 >> 0x10));
    memcpy_far_words(pvVar7,pvVar5,(int)pvVar6);
    memset_far(dest,value,0x0);
    iStack_e += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Format_Entity_Name_from_Construction_Manager_Logic
          (u16 param_1,u16 param_2,void *param_3)
{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined2 unaff_SS;
  void *pvVar4;
  char *pcVar5;
  u16 local_62;
  u16 local_60;
  u16 local_5e;
  u16 local_5c;
  u32 local_5a;
  u32 local_56;
  char local_52 [0x50];
  
  pvVar4 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_3);
  uVar2 = (uint)((ulong)pvVar4 >> 0x10);
  uVar3 = uVar2 | (uint)(void *)pvVar4;
  if (uVar3 == 0x0)
  {
    pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                       ((int)_p_GlobalResourceManager,
                        (int)((ulong)_p_GlobalResourceManager >> 0x10),0x424);
    strcpy_optimized((char *)CONCAT22(unaff_SS,local_52),(char *)CONCAT22(uVar3,pcVar1))
    ;
    pcVar1 = local_52;
  }
  else
  {
    pcVar5 = UI_Component_Get_FarPtr_at_1FA
                       ((void *)*(undefined4 *)((int)(void *)pvVar4 + 0x2e));
    pcVar1 = (char *)pcVar5;
  }
  strdup_allocate(pcVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far
UI_Label_Generate_and_Alloc_from_Construction_1788
          (u16 param_1,u16 param_2,void *param_3)
{
  char *str;
  long lVar1;
  char *pcVar2;
  u32 local_6;
  
  lVar1 = Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  pcVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_3);
  str = UI_Generate_Formatted_Label_Logic
                  ((int)lVar1,(int)((ulong)lVar1 >> 0x10),(char *)pcVar2);
  strdup_allocate(str);
  return;
}



void __cdecl16far UI_Report_Filter_Compare_Strings_184a(u32 *param_1)
{
  char *pcVar1;
  u16 uVar2;
  int iVar3;
  u16 local_6;
  
  uVar2 = g_ReportFilter_0ECC;
  pcVar1 = (char *)*(undefined4 *)
                    (*(int *)(g_ReportFilter_0ECC * 0x6 + 0xeba) * 0x8 + (int)*param_1);
  iVar3 = stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10));
  if (iVar3 == 0x0)
  {
    pcVar1 = (char *)*(undefined4 *)
                      (*(int *)(uVar2 * 0x6 + 0xebc) * 0x8 + (int)*param_1);
    iVar3 = stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10))
    ;
    if (iVar3 == 0x0)
    {
      pcVar1 = (char *)*(undefined4 *)
                        (*(int *)(uVar2 * 0x6 + 0xebe) * 0x8 + (int)*param_1);
      stricmp_case_insensitive_far((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

u8 __stdcall16far
UI_Validate_Entity_Against_Property_Table_1a66(u32 param_1,void *param_2)
{
  undefined4 uVar1;
  u8 uVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  long lVar6;
  u16 local_c;
  u16 local_a;
  u16 local_4;
  
  uVar5 = (undefined2)((ulong)param_2 >> 0x10);
  if ((*(int *)((int)(void *)param_2 + 0x1c) != 0x2) ||
     ((*(uint *)((int)(void *)param_2 + 0x1e) & 0xff) != 0x0))
  {
    UI_Build_Item_Get_Construction_Manager_Logic_b58e(param_2);
    uVar5 = (undefined2)(param_1 >> 0x10);
    lVar6 = Entity_Get_Indirect_ID_Logic(*(long *)((int)param_1 + 0x6e));
    if (((int)lVar6 != 0x2) || ((char)((ulong)lVar6 >> 0x10) != '\0'))
    {
      uVar1 = *(undefined4 *)((int)param_1 + 0x6e);
      iVar3 = UI_Get_U16_at_Offset_C_Logic
                        ((int)uVar1,(int)((ulong)uVar1 >> 0x10),(long)param_2);
      iVar4 = search_array_for_value
                        ((int *)_p_StringPropertyTable,
                         (int)((ulong)_p_StringPropertyTable >> 0x10),iVar3);
      if ((iVar4 == 0x0) &&
         (iVar3 = search_array_for_value
                            ((int *)_p_StringPropertyTable,
                             (int)((ulong)_p_StringPropertyTable >> 0x10),iVar3),
         iVar3 == 0x0))
      {
        uVar2 = '\0';
      }
      else
      {
        uVar2 = '\x01';
      }
      return uVar2;
    }
  }
  return '\0';
}



// Retrieves a help or descriptive string resource for a report item.

char * __stdcall16far UI_Report_Get_Help_String_Logic(void *this,long entity_ref)
{
  char *pcVar1;
  char *pcVar2;
  undefined2 in_stack_00000006;
  
  pcVar2 = UI_Build_Item_Get_Construction_Manager_Logic_b58e((void *)entity_ref);
  pcVar1 = UI_Generate_Formatted_Label_Logic
                     ((int)*(undefined4 *)((int)this + 0x6e),
                      (int)((ulong)*(undefined4 *)((int)this + 0x6e) >> 0x10),
                      (char *)pcVar2);
  pcVar1 = strdup_allocate(pcVar1);
  return pcVar1;
}



// Targeted Scan Finding: Vtable
// Initializes Base_Object vtable to 1010:2014 (base 1008:389A).

void * __stdcall16far Base_Object_ctor_init_2014_Logic(void *this,int id)
{
  undefined2 in_stack_00000008;
  
  *(char **)this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  *(undefined4 *)((int)this + 0x4) = 0x0;
  *(undefined2 *)((int)this + 0x8) = in_stack_00000008;
  *(char **)this = (char *)s_573_bmp_1050_200f + 0x5;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:2014 during destruction.
// Invokes virtual destructor (index 0) for sub-object at offset 4.

void __stdcall16far Base_Object_dtor_2014_Logic(void *this)
{
  undefined2 *puVar1;
  int in_stack_00000006;
  
  *(char **)this = (char *)s_573_bmp_1050_200f + 0x5;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  UI_Container_Notify_Listeners_at_Offset_4_Logic(this,in_stack_00000006);
  if (*(int *)((int)this + 0x6) != 0x0 ||
      (undefined4 *)*(int *)((int)this + 0x4) != NULL)
  {
    puVar1 = (undefined2 *)(undefined2 *)*(undefined4 *)*(int *)((int)this + 0x4);
    (*(code *)*puVar1)();
  }
  *(char **)this = (char *)s_1_1050_389a;
  *(undefined2 *)((int)this + 0x2) = 0x1008;
  return;
}



// Targeted Scan Finding: Vtable
// Initializes String_Wrapper_Object vtable to 1010:37C4 (base 1010:2014).

void * __stdcall16far String_Wrapper_Object_ctor_37C4(void *this,int segment,int id)
{
  Base_Object_ctor_init_2014_Logic(this,segment);
  *(undefined4 *)((int)this + 0xa) = 0x0;
  *(undefined2 *)CONCAT22(segment,this) = 0x37c4;
  *(undefined2 *)((int)this + 0x2) = 0x1010;
  return this;
}



char * __stdcall16far String_Wrapper_Object_Get_String_Logic(void *this)
{
  undefined2 in_stack_00000006;
  
  return (char *)*(undefined2 *)((int)this + 0xa);
}



// Sets the string for the wrapper object. Frees any existing string and creates a
// duplicated copy of the input.

void __stdcall16far String_Wrapper_Object_Set_String_Logic(void *this,char *str)
{
  char *pcVar1;
  undefined2 reg_dx;
  char *in_stack_00000008;
  
  free_if_not_null((void *)(void *)*(undefined4 *)((int)this + 0xa));
  pcVar1 = strdup_allocate(in_stack_00000008);
  *(undefined2 *)((int)this + 0xa) = pcVar1;
  *(undefined2 *)((int)this + 0xc) = reg_dx;
  return;
}



void * __stdcall16far String_Wrapper_Object_scalar_dtor_37C4(void *this,byte flags)
{
  byte in_stack_00000008;
  
  String_Wrapper_Object_dtor_37C4(this);
  if ((in_stack_00000008 & 0x1) != 0x0)
  {
    free_if_not_null(this);
  }
  return this;
}



// Targeted Scan Finding: Vtable
// Initializes Collection_Object_Base vtable to 1010:3B5E (replaces base 1008:389A).

void * __stdcall16far Collection_Object_Base_ctor_3B5E(astruct_489 *this)
{
  u16 in_stack_00000006;
  
  *(char **)&this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  this->field1_0x4 = 0x0;
  this->field2_0x8 = 0x0;
  this->field3_0xc = 0x0;
  this->field4_0x10 = 0x0;
  this->field5_0x12 = 0x0;
  this->field6_0x14 = 0x0;
  *(char **)&this->field0_0x0 = (char *)s_40_33_1050_3b5c + 0x2;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1010;
  return this;
}



// Targeted Scan Finding: Vtable
// Resets vtable to 1010:3B5E during destruction.
// Iteratively invokes virtual destructors (vtable index 0) for all array elements.

void __stdcall16far Collection_Object_Base_dtor_3B5E(astruct_490 *this,u16 param_2)
{
  undefined4 *puVar1;
  int iVar2;
  undefined2 *puVar3;
  void *pvVar4;
  undefined2 uVar5;
  int iStack_4;
  
  *(char **)&this->field0_0x0 = (char *)s_40_33_1050_3b5c + 0x2;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1010;
  if (this->field5_0x8 != NULL)
  {
    iStack_4 = 0x0;
    while( true )
    {
      if (this->field10_0x10 <= iStack_4) break;
      uVar5 = (undefined2)((ulong)this->field5_0x8 >> 0x10);
      pvVar4 = (void *)this->field5_0x8;
      puVar1 = (undefined4 *)*(int *)((int)pvVar4 + iStack_4 * 0x4);
      iVar2 = *(int *)((int)pvVar4 + iStack_4 * 0x4 + 0x2);
      if (iVar2 != 0x0 || puVar1 != NULL)
      {
        puVar3 = (undefined2 *)(undefined2 *)*puVar1;
        (*(code *)*puVar3)();
      }
      iStack_4 += 0x1;
    }
    free_if_not_null((void *)this->field5_0x8);
  }
  *(char **)&this->field0_0x0 = (char *)s_1_1050_389a;
  *(undefined2 *)((int)&this->field0_0x0 + 0x2) = 0x1008;
  return;
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
