/*
 * Source: outpost.c
 * Theme: strings_text
 * Chunk: 8/19
 * Original lines (combined): 35776-37930
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Specialized path update logic for resource type 3. Splits current path and appends
// conditional fragments based on internal state (offset 0x70) and templates in segment
// 1050.

void __stdcall16far Resource_Manager_Update_Path_Type3_Logic(void *this,int id)
{
  char *pcVar1;
  undefined2 unaff_SS;
  int in_stack_00000008;
  char *pcStack_30c;
  char local_308 [0x100];
  char local_208 [0x100];
  char local_108 [0x104];
  int iStack_4;
  
  if (*(int *)(in_stack_00000008 * 0x10 + 0x10) != 0x3)
  {
    return;
  }
  iStack_4 = *(int *)((int)*(undefined4 *)((int)this + 0xe88) + 0x70);
  pcVar1 = (char *)*(undefined4 *)(in_stack_00000008 * 0x10 + 0x12);
  splitpath_far_optimized_with_segments
            ((char *)pcVar1,(char *)((ulong)pcVar1 >> 0x10),NULL,NULL,NULL);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_108),
                   (char *)CONCAT22(unaff_SS,local_208));
  if (local_308[0x0] == '\0')
  {
    if (iStack_4 == 0x0)
    {
      pcStack_30c = (char *)s__mid_1050_14c0;
    }
    else
    {
      pcStack_30c = (char *)s__wav_1050_14ba;
    }
    _pcStack_30c = (char *)CONCAT22(0x1050,pcStack_30c);
  }
  else
  {
    _pcStack_30c = (char *)CONCAT22(unaff_SS,local_308);
  }
  strcat_append((char *)CONCAT22(unaff_SS,local_108),_pcStack_30c);
  Resource_Manager_Resolve_File_Path_Logic(this,(char *)id);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Displays a 'File Not Found' error message box to the user. It formats the message
// using resource strings 0x3FA and 0x57B and notifies the main window.

void __stdcall16far Resource_Manager_Report_File_Error_Logic(char *filename)
{
  char *pcVar1;
  char *in_DX;
  undefined2 unaff_SS;
  char *in_stack_00000008;
  char local_402 [0x400];
  
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x3fa);
  strcpy_optimized((char *)CONCAT22(unaff_SS,local_402),(char *)CONCAT22(in_DX,pcVar1));
  strcat_append((char *)CONCAT22(unaff_SS,local_402),in_stack_00000008);
  pcVar1 = Resource_Manager_LoadString_to_Internal_Buffer
                     ((int)_p_GlobalResourceManager,
                      (int)((ulong)_p_GlobalResourceManager >> 0x10),0x57b);
  MessageBox16(0x1010,pcVar1,in_DX,(ushort)local_402);
  PostMessage16(0x0,0x0,0xee,(long)CONCAT22(pcVar1,g_ParentHWND));
  return;
}



// Retrieves resource-linked data or a string for the coordinate tracking object using a
// source entity.

char * __stdcall16far UI_Vector_Tracker_Get_Resource_Data_Logic(void *this,char *buffer)
{
  char *pcVar1;
  void *pvVar2;
  undefined1 *in_stack_00000008;
  
  pvVar2 = UI_Component_Get_Simulator_Object_via_PackedID_1d58
                     ((void *)*(undefined4 *)((int)this + 0x4));
  if (pvVar2 != NULL)
  {
    pcVar1 = Entity_Format_Full_Name_Label_Logic
                       ((char *)(char *)*(undefined4 *)((int)this + 0x8),
                        (long)in_stack_00000008);
    return pcVar1;
  }
  *in_stack_00000008 = 0x0;
  return NULL;
}



// Dispatches game events by looking up and invoking function pointers from the internal
// table at offset 0xE based on event IDs.

void __stdcall16far
Simulator_Event_Dispatch_Table_Dispatch_Logic(void *this,long context,long event_data)
{
  int iVar1;
  int in_stack_00000006;
  undefined4 local_8;
  int iStack_4;
  
  memset_far((void *)((int)this + 0xa4),in_stack_00000006,0x0);
  iVar1 = *(int *)((int)event_data + 0xa);
  local_8 = (code *)*(undefined4 *)((int)this + iVar1 * 0x6 + 0xe);
  iStack_4 = *(int *)((int)this + iVar1 * 0x6 + 0x12);
  (*(code *)local_8)(0x1000,(int)this + iStack_4,in_stack_00000006,context,event_data);
  return;
}
