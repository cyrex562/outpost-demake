/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 56/56
 * Original lines (combined): 132650-133473
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Calculates and sets the internal layout and bitmap resources for a Tree Node. Loads
// node-specific sprites (IDs 0xFF, 0x100) and triggers base dimension syncing.

void __stdcall16far UI_TreeNode_Init_Layout_Logic_c630(void *this_ptr)
{
  undefined4 uVar2;
  void *pvVar3;
  undefined2 reg_dx;
  astruct_6 *uVar3;
  uint16_t unaff_CS;
  undefined2 in_stack_00000006;
  uint16_t uVar1;
  void *puVar1;
  void *puVar2;
  
  if (*(int *)((int)*(undefined4 *)((int)this_ptr + 0x42) + 0x12) != 0x71)
  {
    *(undefined2 *)((int)this_ptr + 0x36) = 0x5;
    *(undefined2 *)((int)this_ptr + 0x26) = 0x5;
    *(undefined2 *)((int)this_ptr + 0x28) = 0x5;
    uVar1 = *(uint16_t *)((int)this_ptr + 0x36);
    *(uint16_t *)((int)this_ptr + 0x30) = uVar1;
    *(uint16_t *)((int)this_ptr + 0x2e) = uVar1;
    if (PTR_DAT_1050_0000_1050_5f02 == NULL)
    {
      pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      _PTR_DAT_1050_0000_1050_5f04 = (void *)CONCAT22(reg_dx,pvVar3);
      unaff_CS = 0x1010;
      pvVar3 = Resource_Manager_Load_Resource_Object_Logic
                         ((void *)_p_GlobalResourceManager,
                          (int)((ulong)_p_GlobalResourceManager >> 0x10));
      _PTR_DAT_1050_0000_1050_5f08 = (void *)CONCAT22(reg_dx,pvVar3);
    }
    PTR_DAT_1050_0000_1050_5f02 = PTR_DAT_1050_0000_1050_5f02 + 0x1;
    *(undefined4 *)((int)this_ptr + 0x8) = _PTR_DAT_1050_0000_1050_5f04;
    *(undefined4 *)((int)this_ptr + 0xc) = _PTR_DAT_1050_0000_1050_5f08;
    UI_Dialog_Sync_Object_Dimensions_9618((void *)CONCAT22(in_stack_00000006,this_ptr));
    *(undefined2 *)((int)this_ptr + 0x20) = 0x0;
    *(undefined2 *)((int)this_ptr + 0x1e) = 0xc8;
    *(undefined2 *)((int)this_ptr + 0x22) = 0xa0;
    *(int *)((int)this_ptr + 0x24) =
         *(int *)((int)this_ptr + 0x2c) + *(int *)((int)this_ptr + 0x36);
    *(int *)((int)this_ptr + 0x2e) =
         *(int *)((int)this_ptr + 0x36) * 0x3 + *(int *)((int)this_ptr + 0x2a);
    *(undefined2 *)((int)this_ptr + 0x30) = *(undefined2 *)((int)this_ptr + 0x36);
    *(int *)((int)this_ptr + 0x32) =
         *(int *)((int)this_ptr + 0x22) - *(int *)((int)this_ptr + 0x36);
    *(undefined2 *)((int)this_ptr + 0x3c) = 0x25;
    uVar2 = *_this_ptr;
    puVar1 = (void *)((int)uVar2 + 0x4);
    (**(code **)puVar1)(unaff_CS,this_ptr,in_stack_00000006);
    puVar2 = (void *)((int)uVar2 + 0x8);
    (**(code **)puVar2)(unaff_CS,this_ptr,in_stack_00000006);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_TreeNode_Draw_Status_Colored_Text_c94a(void *this_ptr)
{
  int iVar1;
  int iVar2;
  void *puVar3;
  undefined2 in_stack_00000006;
  HDC16 in_stack_00000008;
  
  if (*(int *)((int)this_ptr + 0x48) != 0x0)
  {
    puVar3 = (void *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    puVar3._2_2_ = (HDC16)((ulong)puVar3 >> 0x10);
    iVar1 = *(int *)((int)*(undefined4 *)((int)this_ptr + 0x42) + 0x12);
    iVar2 = iVar1;
    Simulator_Validate_ID_8000001_Logic((int)(void *)puVar3);
    if (iVar2 == -0x1)
    {
      *(undefined2 *)((int)this_ptr + 0x3c) = 0xf9;
    }
    else if (iVar2 == 0x0)
    {
      *(undefined2 *)((int)this_ptr + 0x3c) = 0x25;
      if ((iVar1 == 0x5b) || (iVar1 == 0x9))
      {
        *(undefined2 *)((int)this_ptr + 0x3c) = 0xfe;
      }
    }
    else
    {
      *(undefined2 *)((int)this_ptr + 0x3c) = 0xfb;
    }
  }
  UI_Dialog_Draw_Text_Colored_94fc
            ((void *)CONCAT22(in_stack_00000006,this_ptr),in_stack_00000008,puVar3._2_2_
            );
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Handles selection changes in the D8C4 list box. Resolves the target entity, formats
// its name, and updates the UI. If selection is null, enables interaction buttons.

void __stdcall16far
UI_SubDialog_TypeD8C4_On_Selection_Change_d20c
          (astruct_496 *this_ptr,void *entity_ptr,void *param_3)
{
  u16 unaff_SS;
  char *pcVar1;
  char *pcVar2;
  char local_106 [0x100];
  void *pvStack_6;
  u16 uVar3;
  
  if (param_3 == NULL)
  {
    UI_SubDialog_TypeD8C4_Enable_Interaction_Buttons_d60e
              ((astruct_495 *)this_ptr,(u16)entity_ptr);
    return;
  }
  if (this_ptr->field156_0xa0 != 0x0)
  {
    Collection_Invoke_Method_0C_Logic
              ((void *)(void *)this_ptr->field155_0x9c,
               (u16)((ulong)this_ptr->field155_0x9c >> 0x10));
    UI_SubDialog_TypeD8C4_Enable_Interaction_Buttons_d60e
              ((astruct_495 *)this_ptr,(u16)entity_ptr);
    pvStack_6 = Simulator_Global_Get_Entity_Object_Wrapper_8344
                          ((u16)_p_SimulatorGlobalState,
                           (u16)((ulong)_p_SimulatorGlobalState >> 0x10),param_3);
    pcVar2 = local_106;
    uVar3 = unaff_SS;
    pcVar1 = (char *)Resource_Manager_Get_Resource_by_ID_Logic(_p_ResourceManager,0x3);
    Entity_Format_Full_Name_Label_Logic((char *)pcVar1,(long)CONCAT22(uVar3,pcVar2));
    SendDlgItemMessage16
              ((HWND16)local_106,unaff_SS,0x0,0x401,
               CONCAT22(this_ptr->field6_0x6,0x1847));
  }
  return;
}
