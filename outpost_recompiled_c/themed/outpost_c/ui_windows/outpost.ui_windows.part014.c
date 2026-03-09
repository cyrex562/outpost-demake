/*
 * Source: outpost.c
 * Theme: ui_windows
 * Chunk: 14/54
 * Original lines (combined): 51222-52108
 * Boundaries: top-level declarations/definitions only
 */




// Constructor for UI Control Type 97 (0x61). Initializes base class with resource ID
// 0xEF.

long __stdcall16far
UI_Control_Type97_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x6101f0,0xef,param_2,param_3);
  *param_1 = 0x947a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 98 (0x62). Initializes base class with resource ID
// 0xF0 and state 0xCC.

long __stdcall16far
UI_Control_Type98_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x6201f7,0xcc00f0,param_2,param_3);
  *param_1 = 0xa75e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7DA6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7DEE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7E36_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7E7E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7EC6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F0E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F56_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F9E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7FE6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_802E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8076_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_80BE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8106_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_814E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8196_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_81DE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8226_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_826E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_82B6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_82FE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8346_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_838E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_83D6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_841E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8466_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_84AE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_84F6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_853E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8586_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_85CE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8616_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_865E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_86A6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_86EE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8736_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_877E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_87C6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_880E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8856_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}
