//
// Created by cyrex on 2/25/2022.
//

#include "unk_18.h"

#include "address_tables/function_tables.h"
#include "fn_ptr_ops/fn_ptr_ops_6.h"
#include "fn_ptr_ops/fn_ptr_ops_7.h"
#include "media/media_1.h"
#include "op_int.h"
#include "op_winapi.h"
#include "string_ops.h"
#include "struct_20.h"
#include "struct_ops/struct_ops_1.h"
#include "struct_ops/struct_ops_4.h"
#include "structs/structs_0xx/structs_5x.h"
#include "structs/structs_6xx/struct_627.h"
#include "structs/structs_6xx/struct_648.h"
#include "structs/structs_6xx/structs_63x.h"
#include "sys_ops/sys_ops_8.h"
#include "unk_12.h"
#include "unk_15.h"
#include "utils.h"
#include "win_ops/win_ops_3.h"

#include <minwindef.h>
#include <stdbool.h>

u16 *mixed_1010_20ba(Globals *globals,
                     u32      param_1,
                     u16      param_2,
                     u16      param_3,
                     u8      *param_4,
                     int      param_5)

{
  fn_ptr_1 **ppcVar1;
  u16 u_var2;
  u8 *puVar3;
  u8 *extraout_DX;
  Struct79 *struct_var4;
//  int iVar5;
//  u16 uVar6;
  u16 uVar7;
  u16 *puVar8;
  u16 *puVar9;
  u32 uVar10;
  u32 uVar11;
  u16 *pu_stack6;
  
  pass1_1010_2816(param_1);
  struct_var4 = (Struct636 *)(param_2 * 4);
//  uVar6 = (u16)(param_1 >> 0x10);
//  iVar5 = (int)param_1;
  pu_stack6 = *(u16 **)((int)&struct_var4->field_0x0 + iVar5);
  if (pu_stack6 != (u16 *)0x0) {
    return pu_stack6;
  }
  if (false) goto switchD_1010:2765_caseD_38;
  switch(param_2) {
  case 1:
      mem_op_1000_179c(globals, 0x18, SEG_1000);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == NULL) {
LAB_1010_2126:
    struct_var4 = NULL;
      puVar3 = NULL;
    }
    else {
      struct_1010_3b7a(struct_var4,param_4,param_2);
    }
    break;
  case 2:
      mem_op_1000_179c(0x84, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    win_sys_op_1010_5404((Struct54 *)struct_var4,param_4,param_2,param_3);
    break;
  case 3:
      mem_op_1000_179c(0x53c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_a1d8((Struct627 *)struct_var4,(u16)param_4,param_2,param_3);
    break;
  case 4:
      mem_op_1000_179c(0x18a, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1018_2b10((Struct55 *)str_var1(param_4, struct_var4),param_2,param_3);
    break;
  case 5:
      mem_op_1000_179c(0x14, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar9 = pass1_1008_eabc((int)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)((u32)puVar9 >> 0x10);
    struct_var4 = (Struct636 *)puVar9;
    break;
  case 6:
      mem_op_1000_179c(0x58, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1018_18b8(param_3,(Struct55 *)str_var1(param_4, struct_var4),param_2);
    break;
  case 7:
      mem_op_1000_179c(0xe, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    uVar11 = pass1_1010_3d82((Struct628 *)struct_var4,(u16)param_4,param_2,param_3);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 8:
      mem_op_1000_179c(0x20, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_95aa((Struct629 *)struct_var4,(u16)param_4,param_2);
    break;
  case 9:
      mem_op_1000_179c(0x26, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_6326((Struct630 *)struct_var4,(u16)param_4,param_2);
    break;
  case 10:
      mem_op_1000_179c(0x1c, param_4, 0);
    if ((u8 *)((uint)param_4 | (uint)struct_var4) == (u8 *)0x0) goto LAB_1010_2126;
    uVar11 = pass1_1010_0eac(NULL,
                             (u8 *)struct_var4,
                             param_4,
                             param_2,
                             (u8 *)((uint)param_4 | (uint)paVar4),
                             param_3);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0xb:
      mem_op_1000_179c(0x1c, param_4, 0);
    if ((u8 *)((uint)param_4 | (uint)struct_var4) == (u8 *)0x0) goto LAB_1010_2126;
    uVar11 = pass1_1008_aefe((u8 *)struct_var4,param_4,param_2,(u8 *)((uint)param_4 | (uint)paVar4),param_3);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
      mem_op_1000_179c(0xaa, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1018_0570((Struct55 *)str_var1(param_4, struct_var4),param_2,param_3);
    break;
  case 0x25:
      mem_op_1000_179c(0x1c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1018_4aaa((int)struct_var4,(u16)param_4,param_2,puVar3,param_3);
    break;
  case 0x26:
      mem_op_1000_179c(0x1c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_d99e((int)struct_var4,(u16)param_4,param_2,puVar3,param_3);
    break;
  case 0x27:
      mem_op_1000_179c(0x58, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_9d36((u8 *)struct_var4,param_4,param_2,param_3);
    break;
  case 0x28:
      mem_op_1000_179c(0x2c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1010_28e6((Struct631 *)struct_var4,param_4,param_2,puVar3,param_3);
    break;
  case 0x29:
      mem_op_1000_179c(0x72, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1018_229c(NULL, (Struct632 *)struct_var4, param_4, param_2, puVar3, param_3);
    break;
  case 0x2a:
      mem_op_1000_179c(0x1c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1010_503e((int)struct_var4,(u16)param_4,param_2,puVar3,param_3);
    break;
  case 0x2b:
      mem_op_1000_179c(0x1a, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_02e0((Struct79 *)struct_var4,(Struct79 *)param_4,param_2);
    break;
  case 0x2c:
      mem_op_1000_179c(0x10, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_eb2a((int)struct_var4,(u16)param_4,param_2);
    break;
  case 0x2d:
      mem_op_1000_179c(0x80, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1010_3e3c((Struct55 *)str_var1(param_4, struct_var4),param_2,param_3);
    break;
  case 0x2e:
      mem_op_1000_179c(0x806, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    uVar11 = pass1_1018_1ff4((Struct634 *)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0x2f:
      mem_op_1000_179c(0x58, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_e9e4((Struct261 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x30:
      mem_op_1000_179c(0xe, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar8 = pass1_1010_3702((int)struct_var4, param_2);
    puVar3 = (u8 *)((u32)puVar8 >> 0x10);
    struct_var4 = (Struct636 *)puVar8;
    break;
  case 0x31:
    u_var2 = 0x60;
          uVar7 = SEG_1000;
          mem_op_1000_179c(0x60, param_4, 0);
    if ((u8 *)((uint)param_4 | (uint)struct_var4) == (u8 *)0x0) {
LAB_1010_2680:
      uVar7 = SEG_1000;
      struct_var4 = (Struct636 *)0x0;
      puVar3 = (u8 *)0x0;
    }
    else {
      uVar11 = pass1_1010_9298((Struct79 *)struct_var4,(Struct79 *)param_4,param_2,(u16)struct_var4,
                               (u8 *)((uint)param_4 | (uint)struct_var4),param_3);
      puVar3 = (u8 *)(uVar11 >> 0x10);
      struct_var4 = (Struct636 *)uVar11;
    }
    goto LAB_1010_2683;
  case 0x32:
      mem_op_1000_179c(0x26, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1010_6abc((Struct635 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x33:
      mem_op_1000_179c(0x72, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) {
LAB_1010_25b8:
      u_var2 = 0;
      uVar7 = 0;
    }
    else {
      uVar10 = pass1_1010_195e((Struct79 *)struct_var4,(Struct79 *)param_4,param_2);
      uVar7 = (u16)((u32)uVar10 >> 0x10);
      u_var2 = (u16)uVar10;
    }
    goto LAB_1010_25bb;
  case 0x34:
      mem_op_1000_179c(0x72, param_4, 0);
    if ((u8 *)((uint)param_4 | (uint)struct_var4) == (u8 *)0x0) goto LAB_1010_25b8;
    uVar11 = pass1_1010_1b6e((Struct79 *)struct_var4,(Struct79 *)param_4,param_2,param_3,
                             (u8 *)((uint)param_4 | (uint)struct_var4));
    uVar7 = (u16)(uVar11 >> 0x10);
    u_var2 = (u16)uVar11;
LAB_1010_25bb:
    pu_stack6 = (u16 *)str_var1(uVar7,u_var2);
    pass1_1010_1146(str_var1(uVar7,u_var2),0,param_5,param_3);
    goto switchD_1010:2765_caseD_38;
  case 0x35:
      mem_op_1000_179c(0x14a, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    uVar11 = pass1_1010_6700(struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0x36:
      mem_op_1000_179c(0x10, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_d790((Struct647 *)struct_var4,(u16)param_4,param_2,param_3);
    break;
  case 0x37:
      mem_op_1000_179c(0x420, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1008_9fd2((Struct79 *)struct_var4,(Struct79 *)param_4,param_2);
    break;
  default:
    goto switchD_1010:2765_caseD_38;
  case 0x39:
      mem_op_1000_179c(0x36, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1010_4a8a((Struct637 *)struct_var4,(u16)param_4,param_2,param_3);
    break;
  case 0x3a:
      mem_op_1000_179c(0xc, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar8 = pass1_1008_d72e((int)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)((u32)puVar8 >> 0x10);
    struct_var4 = (Struct636 *)puVar8;
    break;
  case 0x3b:
      mem_op_1000_179c(0x22, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1008_dd4e((Struct209 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x3c:
      mem_op_1000_179c(0x146, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1018_331c((Struct638 *)struct_var4,(u16)param_4,param_2,param_3,puVar3);
    break;
  case 0x3d:
      mem_op_1000_179c(0xe, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    uVar11 = pass1_1010_8c32((Struct640 *)struct_var4,(u16)param_4,param_2,param_3);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0x3e:
      mem_op_1000_179c(0x18, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1018_5070((Struct641 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x3f:
      mem_op_1000_179c(0x12, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_c72a((Struct642 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x40:
      mem_op_1000_179c(0x24, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    pass1_1008_af94((Struct643 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x41:
    u_var2 = 0x60;
          mem_op_1000_179c(0x60, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2680;
    uVar7 = SEG_1008;
    struct_1008_ecb2((Struct221 *)struct_var4,(u16)param_4,param_2);
    puVar3 = extraout_DX;
LAB_1010_2683:
    *(Struct636 **)(param_2 * 4 + iVar5) = struct_var4;
    *(u8 **)(param_2 * 4 + iVar5 + 2) = puVar3;
    ppcVar1 = (fn_ptr_1 **)((int)*(u32 *)struct_var4 + 0x10);
    (**ppcVar1)(uVar7, struct_var4,puVar3,u_var2);
    break;
  case 0x42:
      mem_op_1000_179c(0xc, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar8 = pass1_1008_ec10((int)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)((u32)puVar8 >> 0x10);
    struct_var4 = (Struct636 *)puVar8;
    break;
  case 0x43:
      mem_op_1000_179c(0x12, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar8 = pass1_1010_2bfc((Struct644 *)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)((u32)puVar8 >> 0x10);
    struct_var4 = (Struct636 *)puVar8;
    break;
  case 0x45:
      mem_op_1000_179c(0xe, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    uVar11 = pass1_1010_0000((Struct645 *)struct_var4,(u16)param_4,param_2,param_3);
    puVar3 = (u8 *)(uVar11 >> 0x10);
    struct_var4 = (Struct636 *)uVar11;
    break;
  case 0x46:
      mem_op_1000_179c(0x1a, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    struct_1010_50b2((Struct646 *)struct_var4,(u16)param_4,param_2);
    break;
  case 0x47:
      mem_op_1000_179c(0xe, param_4, 0);
    if (((uint)param_4 | (uint)struct_var4) == 0) goto LAB_1010_2126;
    puVar8 = pass1_1018_56e6((int)struct_var4,(u16)param_4,param_2);
    puVar3 = (u8 *)((u32)puVar8 >> 0x10);
    struct_var4 = (Struct636 *)puVar8;
    break;
  case 0x48:
      mem_op_1000_179c(0x1c, param_4, 0);
    puVar3 = (u8 *)((uint)param_4 | (uint)struct_var4);
    if (puVar3 == (u8 *)0x0) goto LAB_1010_2126;
    unk_draw_op_1008_da12((Struct19 *)struct_var4,(u16)param_4,param_2);
  }
  pu_stack6 = (u16 *)str_var1(puVar3, struct_var4);
switchD_1010:2765_caseD_38:
  *(u16 **)(param_2 * 4 + iVar5) = pu_stack6;
  return pu_stack6;
}

StructD * FUN_1008_9f8c(StructD *param_1,byte param_2)

{
  pass1_1008_9e5a(param_1);
  if ((param_2 & 1) != 0) {
    fn_ptr_1000_17ce((char *)param_1);
  }
  return param_1;
}

StructD * FUN_1018_2ab4(StructD *param_1,byte param_2)

{
  pass1_1018_2440(param_1);
  if ((param_2 & 1) != 0) {
    fn_ptr_1000_17ce((char *)param_1);
  }
  return param_1;
}

StructD * FUN_1018_e428(StructD *param_1,byte param_2)

{
  pass1_1018_e2a0(param_1);
  if ((param_2 & 1) != 0) {
    fn_ptr_1000_17ce((char *)param_1);
  }
  return param_1;
}

StructD * FUN_1020_775a(StructD *param_1,byte param_2)

{
  pass1_1020_75c4(param_1);
  if ((param_2 & 1) != 0) {
    fn_ptr_1000_17ce((char *)param_1);
  }
  return param_1;
}

void  pass1_1030_c7b0(ulong param_1)

{
  int iVar1;
  ulong uVar2;
  BOOL16 BVar3;
  u32 uVar4;
  uchar *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;

  uVar7 = (uint)(param_1 >> 0x10);
  iVar6 = (int)param_1;
  iVar1 = *(int *)(iVar6 + 0x20);
  if (iVar1 != 0) {
    if (((iVar1 < 0x70) || (SBORROW2(iVar1,0x70))) || (1 < iVar1 + -0x70)) {
      uVar8 = pass1_1028_b58e((astruct_15 *)(param_1 & 0xffff | (ulong)uVar7 << 0x10));
      puVar5 = (uchar *)((ulong)uVar8 >> 0x10);
      uVar8 = *(undefined4 *)((int)uVar8 + 0x2e);
      uVar4 = *(u32 *)((int)uVar8 + 0x200);
      pass1_1028_e1ec(globals->_PTR_LOOP_1050_65e2,uVar4);
      uVar2 = uVar4 & 0xffff | ZEXT24(puVar5) << 0x10;
      BVar3 = pass1_1008_c6ae(_u16_1050_06e0,*(undefined2 *)(iVar6 + 0xc),0x11);
      pass1_1030_23e2(BVar3,puVar5,uVar2,BVar3,*(uint *)(iVar6 + 0x20));
      if (BVar3 != 0) {
          if (*(int *)(iVar6 + 0x20) == 1) {
              pass1_1030_25d8(uVar2,100,*(int *)(iVar6 + 0x20));
              return;
          }
          *(undefined2 *)(iVar6 + 0x20) = 0x70;
      }
    }
  }
}

void  win_1008_5c5c(u16 param_1,u16 param_2,u32 param_3,u16 param_4)

{
  pass1_1010_84f8(0x14cc,param_4);
  win_ui_op_1008_5cfe(NULL, param_3, str_var1(param_2, param_1), (WNDCLASS16 *)0x1050);
}

void win_ui_op_1008_5cfe(Globals    *globals,
                         Struct27   *struct_arg_1,
                         char       *string_arg_2,
                         WNDCLASS16 *wnd_class_arg3)

{
  u32 u32_var1;
  i32 i32_var2;
//  Struct27 *iVar3;
//  u16 uVar3;
  u32    u32_var4;
  i16    i16_var5;
  HWND16 message_1;
  u16    u16_var6;
  HWND16 window_handle_1;
  u8     string_var7[256];
  char *string_var8;
  int    i32_var9;
  int    i32_var10;
//  u8 struct_var11 [4];
  Struct20 struct_var11 = {};
  u16      u16_var12;
  char *string_var13;
  char *string_var14;

pass1_1000_4906(&struct_var11,NULL,0x14);
string_var14 = string_arg_2;
//  uVar3 = (undefined2)((ulong)param_1 >> 0x10);
//  iVar3 = (Struct27 *)param_1;
  u32_var1  = *(undefined4 *)&struct_arg_1->field_0xc;
  i32_var10   = *(int *)((int)u32_var1 + 0x72);
  i32_var9    = 1;
  string_var8 = globals->s_waveaudio_1050_02a4;
  str_1000_4d58(string_arg_2,(char *)NULL,0,0,(WNDCLASS16 *)string_var7);
  i32_var2 = pass1_1000_475e(string_var7,(ulong)s_.mid_1050_02ae);
  if (i32_var2 == 0) {
    u32_var1  = *(undefined4 *)&struct_arg_1->field_0xc;
    i32_var10   = *(int *)((int)u32_var1 + 0x74);
    string_var8 = globals->s_sequencer_1050_02b3;
    i32_var9    = 0;
  }
  if (i32_var10 != 0) {
    if ((i32_var9 != 0) && (*(int *)&struct_arg_1->field_0x10 != 0)) {
      return;
    }
    if ((i32_var9 == 0) && (struct_arg_1->field18_0x12 != 0)) {
      return;
    }
    string_var13 = string_var8;
    u32_var4  = mciSendCommand16(struct_var11->fld0_addr_table,0x2200,0x803,0);
    if (u32_var4 == 0) {
      if (i32_var9 == 0) {
          struct_arg_1->field18_0x12 = 1;
      }
      else {
          *(UINT16 *)&struct_arg_1->field_0xa = u16_var12;
          *(undefined2 *)&struct_arg_1->field_0x10 = 1;
      }
      window_handle_1 = create_window_1008_5e7e();
      if (window_handle_1 == 0) {
          mci_send_command_1008_5cb6(struct_arg_1, u16_var12);
          return;
      }
      pass1_1000_4906(&message_1,(WNDCLASS16 *)0x0,0xc);
      message_1 = window_handle_1;
      u16_var6  = 0;
      mciSendCommand16(&message_1,1,0x806, u16_var12);
      SetWindowWord16(u16_var12,0,window_handle_1);
      return;
    }
  }
  if (i32_var9 == 0) {
    i16_var5 = 0x11;
  }
  else {
    i16_var5 = 0x10;
  }
  pass1_1010_1f62(struct_arg_1, i16_var5);
}

void def_win_proc_1008_5632(LPARAM param_1,WPARAM param_2,u16 param_3,HWND16 param_4)

{
  code **ppcVar1;
  u32 *puStack6;
  u16 uVar2;

  uVar2 = (u16)&DAT_1050_1050;
  puStack6 = (u32 *)GetWindowLong16(0,param_4);
  if (((uint)((ulong)puStack6 >> 0x10) | (uint)puStack6) == 0) {
    if (param_3 != 1) {
      DefWindowProc16(param_1,param_2,param_3,param_4);
      return;
    }
    puStack6 = *(u32 **)param_1;
    SetWindowLong16((long)puStack6,0,param_4);
    pass1_1008_9628(puStack6,param_4);
  }
  ppcVar1 = (code **)((int)*puStack6 + 0x1c);
  (**ppcVar1)((int)s_tile2.bmp_1050_1538,(int)puStack6,(int)((ulong)puStack6 >> 0x10),param_1,
              param_2,param_3,uVar2);
  return;
}

StructD * pass1_1028_ac7a(StructD *param_1,u8 param_2)

{
  param_1->address_offset_field_0x0 = addr_table_1008_380a[36];//0x389a;
  (param_1 + 2) = SEG_1008;
  if ((param_2 & 1) != 0) {
    fn_ptr_1000_17ce((char *)param_1);
  }
  return param_1;
}

void pass1_1038_75ca(int param_1,u32 param_2,u32 param_3)

{
  BOOL16 BVar1;
  int iVar2;
  int iVar3;
  undefined2 uVar4;
  HFILE16 in_stack_0000ffca;
  undefined4 local_10 [2];
  undefined4 local_8;

  uVar4 = (undefined2)(param_2 >> 0x10);
  iVar3 = (int)param_2;
  pass1_1008_79f0(param_3,*(long *)(iVar3 + 4));
  if (param_1 != 0) {
    local_10[0] = *(undefined4 *)(iVar3 + 8);
    BVar1 = write_to_file_1008_7e1c
      ((u8 *)param_3, str_var1(0x1050,local_10),(char *)0x4,in_stack_0000ffca);
    if (BVar1 != 0) {
      write_to_file_1008_7a22(param_3,*(long *)(iVar3 + 0xe));
      if (BVar1 != 0) {
          local_8._0_2_ = *(undefined2 *)(iVar3 + 0xc);
          BVar1 = write_to_file_1008_7e1c
            ((u8 *)param_3, str_var1(0x1050,&local_8),(char *)0x2,in_stack_0000ffca);
          if (BVar1 != 0) {
              local_8._0_2_ = *(undefined2 *)(iVar3 + 0x12);
              BVar1 = write_to_file_1008_7e1c
                ((u8 *)param_3,
                                              str_var1(0x1050,&local_8),(char *)0x2,in_stack_0000ffca );
              if (BVar1 != 0) {
                  local_8 = str_var1(local_8._2_2_,*(undefined2 *)(iVar3 + 0x14));
                  BVar1 = write_to_file_1008_7e1c
                    ((u8 *)param_3,
                                                  str_var1(0x1050,&local_8),(char *)0x2,in_stack_0000ffc a
                    );
                  if (BVar1 != 0) {
                      local_8 = *(undefined4 *)(iVar3 + 0x16);
                      BVar1 = write_to_file_1008_7e1c
                        ((u8 *)param_3,
                                                      str_var1(0x1050,&local_8),(char *)0x4,
                         in_stack_0000ffca);
                      if (BVar1 != 0) {
                          iVar2 = write_to_file_1008_7b4c
                            (param_3,(astruct_615 *)
                                        (param_2 & 0xffff0000 | (ulong)(iVar3 + 0x1a)));
                          if (iVar2 != 0) {
                              local_8 = *(ulong *)(iVar3 + 0x20);
                              BVar1 = write_to_file_1008_7e1c
                                ((u8 *)param_3,
                                                              str_var1(0x1050,&local_8),(char *)0x4,
                                 in_stack_0000ffca);
                              if (BVar1 != 0) {
                                  local_8 = local_8 & 0xffff0000 | (ulong)*(uint *)(iVar3 + 0x24);
                                  BVar1 = write_to_file_1008_7e1c
                                    ((u8 *)param_3,
                                                              str_var1(0x1050,&local_8),(char *)0x2,
                                     in_stack_0000ffca);
                                  if (BVar1 != 0) {
                                      local_8 = local_8 & 0xffff0000 | (ulong)*(uint *)(iVar3 + 0x26);
                                      BVar1 = write_to_file_1008_7e1c
                                        ((u8 *)param_3,
                                        str_var1(0x1050,&local_8),(char *)0x2,
                                         in_stack_0000ffca);
                                      if (BVar1 != 0) {
                                          local_8 = local_8 & 0xffff0000 | (ulong)*(uint *)(iVar3 + 0x28);
                                          BVar1 = write_to_file_1008_7e1c
                                            ((u8 *)param_3,
                                            str_var1(0x1050,&local_8),(char *)0x2,
                                             in_stack_0000ffca);
                                          if (BVar1 != 0) {
                                              return;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
              }
          }
      }
    }
  }
  u16_1050_0310 = 0x6d0;
  return;
}