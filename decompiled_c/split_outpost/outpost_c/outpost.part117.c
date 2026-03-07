/*
 * Source: outpost.c
 * Chunk: 117/117
 * Original lines: 133653-133788
 * Boundaries: top-level declarations/definitions only
 */




// Enables a cluster of interaction buttons (IDs 1, 2, 0x1841, 0x1848-0x184B) in the
// D8C4 dialog and clears the active flag.

void __stdcall16far
UI_SubDialog_TypeD8C4_Enable_Interaction_Buttons_d60e(astruct_495 *this_ptr,u16 param_2)
{
  HWND16 HVar1;
  astruct_1 *offset;
  u16 segment;
  
  HVar1 = GetDlgItem16(0x1,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x2,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1841,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1848,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x1849,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x184a,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  HVar1 = GetDlgItem16(0x184b,this_ptr->win_handle);
  EnableWindow16(0x1,HVar1);
  this_ptr->field159_0xa0 = 0x0;
  return;
}



// Disables a cluster of interaction buttons in the D8C4 dialog and sets the active
// flag.

void __stdcall16far
UI_SubDialog_TypeD8C4_Disable_Interaction_Buttons_d6be
          (astruct_494 *this_ptr,u16 param_2)
{
  HWND16 HVar1;
  astruct *offset;
  u16 segment;
  
  HVar1 = GetDlgItem16(0x1,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x2,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x1841,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x1848,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x1849,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x184a,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  HVar1 = GetDlgItem16(0x184b,this_ptr->win_handle);
  EnableWindow16(0x0,HVar1);
  *(undefined2 *)&this_ptr->field_0xa0 = 0x1;
  return;
}



void __stdcall16far
UI_SubDialog_TypeD8C4_Update_Visibility_and_Clear_9C_d76e
          (astruct_493 *this_ptr,u16 param_2)
{
  UI_Component_Update_Visibility_Logic(this_ptr->field148_0x94,this_ptr->field153_0x9c);
  this_ptr->field153_0x9c = 0x0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Exhaustive UI refresh for dialog Type D8C4. Syncs building names, populates the
// resource link list box (ID 0x1847) from the Vector Tracker, and manages button
// enabled states.

void __stdcall16far
UI_SubDialog_TypeD8C4_Full_Refresh_Logic_d79c(astruct_492 *this_ptr,u16 param_2)
{
  void *pvVar1;
  undefined2 uVar2;
  short unaff_SS;
  LRESULT pvVar3;
  void *pvStack_10e;
  undefined4 uStack_10a;
  char local_106 [0x100];
  char *pcStack_6;
  
  pcStack_6 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
  Entity_Format_Full_Name_Label_Logic
            ((char *)pcStack_6,(long)CONCAT22(unaff_SS,local_106));
  SendDlgItemMessage16
            ((HWND16)local_106,unaff_SS,0x0,0xc,CONCAT22(this_ptr->win_handle,0x1846));
  SendDlgItemMessage16(0x0,0x0,0x0,0xb,CONCAT22(this_ptr->win_handle,0x1847));
  pvVar3 = SendDlgItemMessage16(0x0,0x0,0x0,0x405,CONCAT22(this_ptr->win_handle,0x1847))
  ;
  uVar2 = (undefined2)((ulong)pvVar3 >> 0x10);
  pvVar1 = (void *)pvVar3;
  Collection_Reset_or_Clear_Logic((void *)this_ptr->field155_0x9c);
  uStack_10a = (void *)CONCAT22(uVar2,pvVar1);
  for (pvStack_10e = NULL; pvStack_10e < uStack_10a;
      pvStack_10e = (void *)((long)pvStack_10e + 0x1))
  {
    UI_Vector_Tracker_Get_Resource_Data_Logic
              ((void *)this_ptr->field155_0x9c,
               (char *)((ulong)this_ptr->field155_0x9c >> 0x10));
    if (local_106[0x0] != '\0')
    {
      SendDlgItemMessage16
                ((HWND16)local_106,unaff_SS,0x0,0x401,
                 CONCAT22(this_ptr->win_handle,0x1847));
    }
  }
  SendDlgItemMessage16(0x0,0x0,0x1,0xb,CONCAT22(this_ptr->win_handle,0x1847));
  return;
}



void * __stdcall16far
UI_SubDialog_TypeD8C4_dtor_Scalar_Deleting_d89e(void *this_ptr,uchar flags,u8 param_3)
{
  undefined1 in_stack_00000007;
  
  _this_ptr = CONCAT13(in_stack_00000007,CONCAT12(flags,this_ptr));
  UI_SubDialog_TypeD8C4_dtor_Internal_d1bc(this_ptr,(ushort)((ulong)_this_ptr >> 0x10));
  if ((param_3 & 0x1) != 0x0)
  {
    free_if_not_null(this_ptr);
  }
  return this_ptr;
}
