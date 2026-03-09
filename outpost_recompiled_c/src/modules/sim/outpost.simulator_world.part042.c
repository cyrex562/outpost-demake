/*
 * Source: outpost.c
 * Theme: simulator_world
 * Chunk: 42/56
 * Original lines (combined): 98833-99784
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Complex routine that processes the 'footprint' of a building site. Iterates through a
// rectangular region, checks metadata tags (7, 8, 9), and spawns corresponding
// sub-entities (road/tube segments) to integrate the building into the infrastructure.

void __stdcall16far
Simulator_Process_Building_Site_SubEntities_a044
          (u16 offset,u16 segment,void *coords,long entity_id)
{
  undefined2 *puVar1;
  int iVar2;
  undefined2 uVar3;
  int *unaff_SS;
  bool bVar4;
  u8 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  void *src;
  int *out1;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 local_17e;
  undefined2 uStack_17c;
  int iStack_5a;
  undefined4 *puStack_4e;
  int iStack_46;
  int iStack_44;
  undefined4 uStack_42;
  undefined4 *puStack_3e;
  undefined1 local_3a [0xc];
  undefined4 local_2e;
  undefined2 uStack_2a;
  void *pvStack_28;
  uint16_t uStack_26;
  int local_24;
  int local_22;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  u8 *puStack_14;
  undefined2 uStack_12;
  int iStack_10;
  int iStack_e;
  undefined4 uStack_c;
  int local_8;
  int local_6;
  int local_4;
  
  src = (void *)coords;
  out1 = (int *)((ulong)coords >> 0x10);
  unpack_3word_struct(src,out1,&local_8,unaff_SS);
  puVar5 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)entity_id);
  uStack_12 = (undefined2)((ulong)puVar5 >> 0x10);
  puStack_14 = (u8 *)puVar5;
  pvStack_18 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                         (_p_SimulatorWorldContext,puStack_14);
  uStack_1c = *(undefined4 *)((int)(void *)pvStack_18 + 0x2e);
  uStack_20 = *(undefined4 *)((int)uStack_1c + 0x4);
  pvVar6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                     (_p_SimulatorWorldContext,(u8 *)entity_id);
  uStack_26 = (uint16_t)((ulong)pvVar6 >> 0x10);
  pvStack_28 = (void *)pvVar6;
  puVar7 = Simulator_Get_Entity_Coords_Ptr_5b5c((int)pvStack_28,uStack_26);
  local_2e = *puVar7;
  uStack_2a = *(undefined2 *)((undefined4 *)puVar7 + 0x1);
  puStack_4e = &local_2e;
  unpack_word_pair(&local_2e,unaff_SS,&local_24);
  iStack_e = local_4 + 0x1;
  uStack_c = CONCAT22(local_4 + -0x1,local_6 - 0x1U);
  iStack_10 = local_6 + 0x1;
  if (local_4 + -0x1 < 0x0)
  {
    uStack_c = (ulong)(local_6 - 0x1U);
  }
  if (local_22 <= iStack_e)
  {
    iStack_e = local_22 + -0x1;
  }
  if ((int)uStack_c < 0x0)
  {
    uStack_c &= 0xffff0000;
  }
  if (local_24 <= iStack_10)
  {
    iStack_10 = local_24 + -0x1;
  }
  zero_init_12bytes_struct(local_3a);
  uVar3 = 0x1008;
  pack_two_3word_structs(local_3a,unaff_SS,local_8,iStack_10,iStack_e,local_8,uStack_c);
  puStack_3e = Simulator_Map_Batch_Create_Production_Items_in_Rect_6522
                         (_p_MapContext_5740,(undefined1 *)CONCAT22(unaff_SS,local_3a),
                          entity_id);
  if (puStack_3e != NULL)
  {
    uStack_42 = 0x0;
    iStack_44 = 0x0;
    for (iStack_46 = (int)uStack_c; iStack_46 <= iStack_10; iStack_46 += 0x1)
    {
      for (puStack_4e = (undefined4 *)uStack_c._2_2_; iVar2 = iStack_44,
          (int)puStack_4e <= iStack_e;
          puStack_4e = (undefined4 *)((int)puStack_4e + 0x1))
      {
        iStack_44 += 0x1;
        puVar1 = (undefined2 *)((int)*puStack_3e + 0x4);
        uVar8 = (*(code *)*puVar1)(uVar3,(undefined4 *)puStack_3e,
                                   (int)((ulong)puStack_3e >> 0x10),iVar2);
        iVar2 = (int)uVar8;
        uStack_42._3_1_ = (char)((ulong)uVar8 >> 0x18);
        bVar4 = uStack_42._3_1_ == '\0';
        uStack_42 = uVar8;
        if (bVar4)
        {
          iStack_5a = iVar2;
          if (iVar2 == 0x7)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x6;
          }
          else if (iVar2 == 0x8)
          {
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x7;
          }
          else
          {
            if (iVar2 != 0x9) goto LAB_1030_a1d0;
            pack_3words_reverse(src,(int)out1,local_8,iStack_46);
            uVar10 = (undefined2)uStack_20;
            uVar11 = (undefined2)((ulong)uStack_20 >> 0x10);
            uVar9 = 0x8;
          }
          uVar3 = 0x1028;
          Simulator_Command_InternalPutBldg_ctor_init_87f0
                    (&local_17e,unaff_SS,0x0,0x0,uVar9,coords,uVar10,uVar11,entity_id);
          Simulator_Global_Process_Build_Event_Type4_835a
                    (_p_SimulatorGlobalState,(undefined2 *)CONCAT22(unaff_SS,&local_17e)
                    );
          local_17e = 0x389a;
          uStack_17c = 0x1008;
        }
LAB_1030_a1d0:
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches for an adjacent coordinate containing an entity of group 0x46 (Type 70).
// Used for finding valid connection points.

u16 __stdcall16far
UI_Build_Item_Find_Adjacent_Group46_Coord_a3ae(void *this_ptr,void *out_coords)
{
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u16 uVar4;
  undefined2 reg_dx;
  u32 *puVar5;
  astruct_199 *uVar5;
  void *pvVar6;
  void *src;
  u16 y;
  undefined2 uVar7;
  int *unaff_SS;
  void *pvVar8;
  ulong uStack_2c;
  int local_28;
  int local_26;
  int local_24;
  undefined1 local_22 [0x6];
  int local_1c;
  int iStack_1a;
  long lStack_16;
  ulong uStack_12;
  undefined4 uStack_e;
  undefined4 *puStack_a;
  int iStack_6;
  u16 uStack_4;
  
  uStack_4 = 0x0;
  src = (void *)((ulong)out_coords >> 0x10);
  iStack_6 = *(int *)((int)(void *)out_coords + 0x4);
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar5 = (astruct_199 *)this_ptr;
  puStack_a = puVar3;
  puVar5 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     ((void *)uVar5->field4_0x4,(int)((ulong)uVar5->field4_0x4 >> 0x10),
                      puVar3,reg_dx);
  uStack_e = (undefined4 *)CONCAT22(puVar5,puVar3);
  puVar2 = (undefined2 *)((int)*uStack_e + 0x10);
  uStack_12 = (*(code *)*puVar2)(0x1038,puVar3,puVar5);
  lStack_16 = *(long *)((int)(void *)uVar5->field4_0x4 + 0x8);
  zero_init_struct_6bytes(&local_1c);
  zero_init_struct_6bytes(local_22);
  uStack_2c = 0x0;
  do
  {
    if (uStack_12 <= uStack_2c)
    {
LAB_1030_a4e7:
      if (uStack_e != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)
                  (0x1008,(undefined4 *)uStack_e,(int)((ulong)uStack_e >> 0x10),0x1,
                   puVar3,puVar5,uStack_e,uStack_e);
      }
      return uStack_4;
    }
    pvVar8 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_e);
    if (pvVar8 != NULL)
    {
      copy_struct_6bytes(&local_1c,unaff_SS);
      unpack_3word_struct(&local_1c,unaff_SS,&local_28,unaff_SS);
      if ((local_28 == iStack_6) &&
         (uVar7 = (undefined2)((ulong)uVar5->field4_0x4 >> 0x10),
         pvVar6 = (void *)uVar5->field4_0x4, uVar1 = *(undefined4 *)((int)pvVar6 + 0x4),
         uVar4 = Simulator_Is_Coordinate_Within_Entity_Bounds_addc
                           ((u16)uVar5,y,(int *)CONCAT22(unaff_SS,&local_1c),(u16)uVar1,
                            (u16)((ulong)uVar1 >> 0x10),
                            (void *)*(undefined4 *)((int)pvVar6 + 0x8)), uVar4 != 0x0))
      {
        copy_struct_6bytes(local_22,unaff_SS);
        iStack_1a = local_26 + -0x1;
        uVar4 = Simulator_Check_If_Group46_at_Coords_ad22
                          ((u16)uVar5,y,(int *)CONCAT22(unaff_SS,&local_1c),lStack_16);
        if (uVar4 == 0x0)
        {
          iStack_1a = local_26 + 0x1;
          uVar4 = Simulator_Check_If_Group46_at_Coords_ad22
                            ((u16)uVar5,y,(int *)CONCAT22(unaff_SS,&local_1c),lStack_16)
          ;
          if (uVar4 == 0x0)
          {
            iStack_1a = local_26;
            local_1c = local_24 + -0x1;
            uVar4 = Simulator_Check_If_Group46_at_Coords_ad22
                              ((u16)uVar5,y,(int *)CONCAT22(unaff_SS,&local_1c),
                               lStack_16);
            if (uVar4 == 0x0)
            {
              local_1c = local_24 + 0x1;
              uVar4 = Simulator_Check_If_Group46_at_Coords_ad22
                                ((u16)uVar5,y,(int *)CONCAT22(unaff_SS,&local_1c),
                                 lStack_16);
              if (uVar4 == 0x0) goto LAB_1030_a45b;
            }
          }
        }
        copy_struct_6bytes((void *)out_coords,src);
        uStack_4 = 0x1;
        goto LAB_1030_a4e7;
      }
    }
LAB_1030_a45b:
    uStack_2c += 0x1;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Searches for an adjacent coordinate containing 'infrastructure' type entities (1, 2,
// 3, 7, 8). Used for auto-connecting buildings to roads/tubes.

int __stdcall16far
UI_Build_Item_Find_Adjacent_Infrastructure_Coord_a57e(void *this_ptr,void *out_coords)
{
  long arg4;
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u16 uVar5;
  int iVar6;
  u32 *puVar7;
  astruct_198 *uVar4;
  void *dest;
  void *pvVar8;
  undefined4 *puVar9;
  u16 y;
  void *src;
  undefined2 uVar10;
  undefined2 uVar11;
  int *unaff_SS;
  u32 uVar12;
  void *pvVar13;
  ulong uStack_28;
  ulong uStack_24;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 *puStack_c;
  int iStack_a;
  int iStack_8;
  int iStack_6;
  int iStack_4;
  
  iStack_4 = 0x0;
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_198 *)this_ptr;
  uVar12 = Colony_Calc_Resource_Difference_at_14E_53ba(uVar4->field4_0x4,0x1);
  iStack_a = (int)(uVar12 >> 0x10);
  if ((iStack_a != 0x0) || (iVar6 = 0x0, (int)uVar12 != 0x0))
  {
    src = (void *)((ulong)out_coords >> 0x10);
    dest = (void *)out_coords;
    iStack_6 = *(int *)((int)dest + 0x4);
    iStack_8 = 0x8 - (uint)(iStack_6 == 0x0);
    puVar3 = get_array_element_6bytes
                       ((int *)_p_StringPropertyTable,
                        (int)((ulong)_p_StringPropertyTable >> 0x10));
    puStack_c = puVar3;
    puVar7 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                       ((void *)uVar4->field4_0x4,
                        (int)((ulong)uVar4->field4_0x4 >> 0x10),puVar3,iStack_a);
    uStack_10 = (undefined4 *)CONCAT22(puVar7,puVar3);
    uVar11 = 0x1008;
    zero_init_struct_6bytes(&local_16);
    arg4 = *(long *)((int)(void *)uVar4->field4_0x4 + 0x8);
    uVar10 = (undefined2)((ulong)uStack_10 >> 0x10);
    puVar3 = (undefined4 *)uStack_10;
    puVar2 = (undefined2 *)((int)*uStack_10 + 0x10);
    uStack_24 = (*(code *)*puVar2)(0x1008,puVar3,uVar10);
    for (uStack_28 = 0x0; uStack_28 < uStack_24; uStack_28 += 0x1)
    {
      pvVar13 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_10);
      if (pvVar13 != NULL)
      {
        copy_struct_6bytes(&local_16,unaff_SS);
        unpack_3word_struct(&local_16,unaff_SS,&local_1c,unaff_SS);
        uVar11 = (undefined2)((ulong)uVar4->field4_0x4 >> 0x10);
        pvVar8 = (void *)uVar4->field4_0x4;
        uVar1 = *(undefined4 *)((int)pvVar8 + 0x4);
        uVar5 = Simulator_Is_Coordinate_Within_Entity_Bounds_addc
                          ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),(u16)uVar1,
                           (u16)((ulong)uVar1 >> 0x10),
                           (void *)*(undefined4 *)((int)pvVar8 + 0x8));
        uVar11 = 0x1008;
        if (uVar5 == 0x0) goto switchD_1030_a80d_default;
        pvVar13 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar13);
        switch(*(undefined2 *)((int)(void *)pvVar13 + 0xc))
        {
        case 0x7a:
        case 0x7f:
          iStack_14 = local_1a + -0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
          if (uVar5 != 0x0) goto LAB_1030_a7df;
          iStack_14 = local_1a + 0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
          if (uVar5 == 0x0)
          {
            iStack_14 = local_1a;
            local_16 = local_18 + -0x1;
            uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                              ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
            goto joined_r0x1030a722;
          }
          break;
        case 0x7b:
        case 0x7e:
          iStack_14 = local_1a + -0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
          if (uVar5 != 0x0)
          {
            copy_struct_6bytes(dest,src);
            if (uStack_10 == NULL)
            {
              return 0x1;
            }
            uVar11 = (undefined2)((ulong)uStack_10 >> 0x10);
            puVar9 = (undefined4 *)uStack_10;
            goto LAB_1030_a6ea;
          }
          iStack_14 = local_1a + 0x1;
LAB_1030_a730:
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
          uVar11 = 0x1030;
          if (uVar5 == 0x0) goto switchD_1030_a80d_default;
          break;
        case 0x7c:
        case 0x7d:
          local_16 = local_18 + -0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),arg4);
joined_r0x1030a722:
          if (uVar5 == 0x0)
          {
            local_16 = local_18 + 0x1;
            goto LAB_1030_a730;
          }
LAB_1030_a7df:
          copy_struct_6bytes(dest,src);
          goto LAB_1030_a765;
        default:
          goto switchD_1030_a80d_default;
        }
        copy_struct_6bytes(dest,src);
LAB_1030_a765:
        puVar9 = (undefined4 *)uStack_10;
        if (uStack_10._2_2_ == 0x0 && puVar9 == NULL)
        {
          return 0x1;
        }
        uVar11 = (undefined2)((ulong)uStack_10 >> 0x10);
LAB_1030_a6ea:
        (*(code *)*(undefined2 *)(undefined2 *)*puVar9)
                  (0x1008,puVar9,uVar11,0x1,puVar3,uVar10,uStack_10,uStack_10);
        return 0x1;
      }
switchD_1030_a80d_default:
    }
    iVar6 = iStack_4;
    if (uStack_10 != NULL)
    {
      (*(code *)*(undefined2 *)(undefined2 *)*uStack_10)
                (uVar11,(undefined4 *)uStack_10,(int)((ulong)uStack_10 >> 0x10),0x1,
                 puVar3,uVar10,uStack_10,uStack_10);
      iVar6 = iStack_4;
    }
  }
  return iVar6;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// A specialized search routine that looks for adjacent coordinates containing group
// 0x46 entities which are themselves adjacent to infrastructure. Involves complex
// multi-step proximity checks.

int __stdcall16far
UI_Build_Item_Find_Adjacent_Group46_Infrastructure_Coord_a844
          (void *this_ptr,void *out_coords)
{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  u16 uVar5;
  astruct_195 *uVar4;
  astruct_196 *uVar6;
  astruct_197 *uVar8;
  u16 y;
  undefined2 uVar7;
  void *src;
  int *unaff_SS;
  u32 uVar9;
  void *pvVar10;
  ulong uStack_22;
  int local_1c;
  int local_1a;
  int local_18;
  int local_16;
  int iStack_14;
  int iStack_10;
  long lStack_e;
  ulong uStack_a;
  u32 *puStack_6;
  
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_195 *)this_ptr;
  uVar9 = Colony_Calc_Resource_Difference_at_14E_53ba(uVar4->field4_0x4,0x1);
  if (((int)(uVar9 >> 0x10) != 0x0) || (iStack_10 = 0x0, (int)uVar9 != 0x0))
  {
    uVar7 = (undefined2)((ulong)uVar4->field4_0x4 >> 0x10);
    uVar6 = (astruct_196 *)uVar4->field4_0x4;
    puStack_6 = uVar6->field12_0xc;
    puVar2 = (undefined2 *)((int)*puStack_6 + 0x10);
    uStack_a = (*(code *)*puVar2)(0x1038,(u32 *)puStack_6,
                                  *(undefined2 *)((int)&uVar6->field12_0xc + 0x2));
    lStack_e = *(long *)((int)uVar4->field4_0x4 + 0x8);
    iStack_10 = 0x0;
    zero_init_struct_6bytes(&local_16);
    src = (void *)((ulong)out_coords >> 0x10);
    iVar1 = *(int *)((int)(void *)out_coords + 0x4);
    for (uStack_22 = 0x0; uStack_22 < uStack_a; uStack_22 += 0x1)
    {
      pvVar10 = UI_Component_Get_Simulator_Entity_vcall_4_73a8_Logic_1d7c(puStack_6);
      iVar3 = (int)((ulong)pvVar10 >> 0x10);
      if (((iVar3 != 0x0 || (int)pvVar10 != 0x0) &&
          (iVar3 = search_array_for_value
                             ((int *)_p_StringPropertyTable,
                              (int)((ulong)_p_StringPropertyTable >> 0x10),
                              *(int *)((int)pvVar10 + 0xc)), iVar3 != 0x0)) &&
         (pvVar10 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(puStack_6),
         pvVar10 != NULL))
      {
        copy_struct_6bytes(&local_16,unaff_SS);
        unpack_3word_struct(&local_16,unaff_SS,&local_1c,unaff_SS);
        if ((iVar1 == local_1c) &&
           (uVar7 = (undefined2)((ulong)uVar4->field4_0x4 >> 0x10),
           uVar8 = (astruct_197 *)uVar4->field4_0x4,
           uVar5 = Simulator_Is_Coordinate_Within_Entity_Bounds_addc
                             ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),
                              (u16)uVar8->field4_0x4,(u16)(uVar8->field4_0x4 >> 0x10),
                              uVar8->field5_0x8), uVar5 != 0x0))
        {
          iStack_14 = local_1a + -0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),lStack_e);
          if (uVar5 != 0x0)
          {
LAB_1030_a98e:
            copy_struct_6bytes((void *)out_coords,src);
            return 0x1;
          }
          iStack_14 = local_1a + 0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),lStack_e);
          if (uVar5 != 0x0) goto LAB_1030_a98e;
          iStack_14 = local_1a;
          local_16 = local_18 + -0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),lStack_e);
          if (uVar5 != 0x0) goto LAB_1030_a98e;
          local_16 = local_18 + 0x1;
          uVar5 = Simulator_Check_If_Infrastructure_at_Coords_ad86
                            ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_16),lStack_e);
          if (uVar5 != 0x0) goto LAB_1030_a98e;
        }
      }
    }
  }
  return iStack_10;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// The core logic for finding an adjacent coordinate containing a valid building (types
// 5 or 9) relative to a wall or connection segment. Involves coordinate unpacking and
// directional scans.

u16 __stdcall16far
UI_Build_Item_Find_Adjacent_Building_Coord_aa18(void *this_ptr,void *out_coords)
{
  long arg4;
  undefined4 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  u16 uVar5;
  undefined2 reg_dx;
  u32 *puVar6;
  void *dest;
  astruct_194 *uVar4;
  int iVar7;
  undefined4 *puVar8;
  void *src;
  u16 y;
  undefined2 uVar9;
  undefined2 uVar10;
  int *unaff_SS;
  void *pvVar11;
  ulong uStack_26;
  ulong uStack_22;
  int local_1a;
  int local_18;
  int local_16;
  int local_14;
  int iStack_12;
  undefined4 uStack_e;
  undefined4 *puStack_a;
  int iStack_6;
  int iStack_4;
  
  src = (void *)((ulong)out_coords >> 0x10);
  dest = (void *)out_coords;
  iStack_4 = *(int *)((int)dest + 0x4);
  iStack_6 = 0x8 - (uint)(iStack_4 == 0x0);
  puVar3 = get_array_element_6bytes
                     ((int *)_p_StringPropertyTable,
                      (int)((ulong)_p_StringPropertyTable >> 0x10));
  y = (u16)((ulong)this_ptr >> 0x10);
  uVar4 = (astruct_194 *)this_ptr;
  puStack_a = puVar3;
  puVar6 = Colony_Batch_Init_Production_Items_General_Logic_4e78
                     ((int)uVar4->field4_0x4,(int)((ulong)uVar4->field4_0x4 >> 0x10),
                      puVar3,reg_dx);
  uStack_e = (undefined4 *)CONCAT22(puVar6,puVar3);
  uVar10 = 0x1008;
  zero_init_struct_6bytes(&local_14);
  arg4 = *(long *)((int)uVar4->field4_0x4 + 0x8);
  uVar9 = (undefined2)((ulong)uStack_e >> 0x10);
  puVar3 = (undefined4 *)uStack_e;
  puVar2 = (undefined2 *)((int)*uStack_e + 0x10);
  uStack_22 = (*(code *)*puVar2)(0x1008,puVar3,uVar9);
  uStack_26 = 0x0;
  while( true )
  {
    if (uStack_22 <= uStack_26)
    {
      if (uStack_e != NULL)
      {
        (*(code *)*(undefined2 *)(undefined2 *)*uStack_e)
                  (uVar10,(undefined4 *)uStack_e,(int)((ulong)uStack_e >> 0x10),0x1,
                   puVar3,uVar9,uStack_e,uStack_e);
      }
      return 0x0;
    }
    pvVar11 = UI_Component_Get_Simulator_Object_via_PackedID_1d58(uStack_e);
    if (pvVar11 != NULL) break;
switchD_1030_ac89_default:
    uStack_26 += 0x1;
  }
  copy_struct_6bytes(&local_14,unaff_SS);
  unpack_3word_struct(&local_14,unaff_SS,&local_1a,unaff_SS);
  uVar10 = (undefined2)((ulong)uVar4->field4_0x4 >> 0x10);
  iVar7 = (int)uVar4->field4_0x4;
  uVar1 = *(undefined4 *)(iVar7 + 0x4);
  uVar5 = Simulator_Is_Coordinate_Within_Entity_Bounds_addc
                    ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),(u16)uVar1,
                     (u16)((ulong)uVar1 >> 0x10),(void *)*(undefined4 *)(iVar7 + 0x8));
  uVar10 = 0x1008;
  if (uVar5 == 0x0) goto switchD_1030_ac89_default;
  pvVar11 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar11);
  switch(*(undefined2 *)((int)pvVar11 + 0xc))
  {
  case 0x7a:
  case 0x7f:
    iStack_12 = local_18 + -0x1;
    uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                      ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
    if (uVar5 != 0x0) goto LAB_1030_ac5b;
    iStack_12 = local_18 + 0x1;
    uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                      ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
    if (uVar5 == 0x0)
    {
      iStack_12 = local_18;
      local_14 = local_16 + -0x1;
      uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                        ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
      goto joined_r0x1030ab9e;
    }
    break;
  case 0x7b:
  case 0x7e:
    iStack_12 = local_18 + -0x1;
    uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                      ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
    if (uVar5 != 0x0)
    {
      copy_struct_6bytes(dest,src);
      if (uStack_e == NULL)
      {
        return 0x1;
      }
      uVar10 = (undefined2)((ulong)uStack_e >> 0x10);
      puVar8 = (undefined4 *)uStack_e;
      goto LAB_1030_ab66;
    }
    iStack_12 = local_18 + 0x1;
LAB_1030_abac:
    uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                      ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
    uVar10 = 0x1030;
    if (uVar5 == 0x0) goto switchD_1030_ac89_default;
    break;
  case 0x7c:
  case 0x7d:
    local_14 = local_16 + -0x1;
    uVar5 = Simulator_Check_If_Building_at_Coords_acbe
                      ((u16)uVar4,y,(int *)CONCAT22(unaff_SS,&local_14),arg4);
joined_r0x1030ab9e:
    if (uVar5 == 0x0)
    {
      local_14 = local_16 + 0x1;
      goto LAB_1030_abac;
    }
LAB_1030_ac5b:
    copy_struct_6bytes(dest,src);
    goto LAB_1030_abe1;
  default:
    goto switchD_1030_ac89_default;
  }
  copy_struct_6bytes(dest,src);
LAB_1030_abe1:
  puVar8 = (undefined4 *)uStack_e;
  if (uStack_e._2_2_ == 0x0 && puVar8 == NULL)
  {
    return 0x1;
  }
  uVar10 = (undefined2)((ulong)uStack_e >> 0x10);
LAB_1030_ab66:
  (*(code *)*(undefined2 *)(undefined2 *)*puVar8)
            (0x1008,puVar8,uVar10,0x1,puVar3,uVar9,uStack_e,uStack_e);
  return 0x1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the entity at the specified coordinates is an active or offline building
// (types 5 or 9).

u16 __stdcall16far
Simulator_Check_If_Building_at_Coords_acbe(u16 x,u16 y,void *coords,long arg4)
{
  int iVar1;
  u8 *puVar2;
  void *pvVar3;
  
  puVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                     (_p_MapContext_5740,coords,(void *)arg4);
  if (puVar2 != NULL)
  {
    pvVar3 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)puVar2);
    if (pvVar3 != NULL)
    {
      pvVar3 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar3);
      if ((pvVar3 != NULL) &&
         ((iVar1 = *(int *)((int)pvVar3 + 0xc), iVar1 == 0x5 || (iVar1 == 0x9))))
      {
        return 0x1;
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the entity at the specified coordinates belongs to type group 0x46.

u16 __stdcall16far
Simulator_Check_If_Group46_at_Coords_ad22(u16 x,u16 y,void *coords,long arg4)
{
  u16 uVar1;
  void *lVar2;
  void *pvVar2;
  
  lVar2 = Simulator_Map_Get_Entity_at_Coords_627e
                    (_p_MapContext_5740,coords,(void *)arg4);
  if (lVar2 != NULL)
  {
    pvVar2 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                       (_p_SimulatorWorldContext,(u8 *)lVar2);
    if (pvVar2 != NULL)
    {
      pvVar2 = UI_Component_Resolve_and_Cache_Entity_Ptr_73a8(pvVar2);
      if (pvVar2 != NULL)
      {
        uVar1 = search_array_for_value
                          ((int *)_p_StringPropertyTable,
                           (int)((ulong)_p_StringPropertyTable >> 0x10),
                           *(int *)((int)pvVar2 + 0xc));
        return uVar1;
      }
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Returns 1 if the entity at the specified coordinates is a recognized infrastructure
// type (1, 2, 3, 7, 8).

u16 __stdcall16far
Simulator_Check_If_Infrastructure_at_Coords_ad86(u16 x,u16 y,void *coords,long arg4)
{
  undefined2 unaff_SS;
  undefined4 *puVar1;
  char cStack_11;
  undefined1 local_a [0x4];
  int iStack_6;
  
  puVar1 = Simulator_Map_Get_Entity_at_Coords_via_SubList_64ce
                     (_p_MapContext_5740,coords,arg4,
                      (undefined1 *)CONCAT22(unaff_SS,local_a));
  cStack_11 = (char)((ulong)*puVar1 >> 0x18);
  if (cStack_11 == '\0')
  {
    iStack_6 = (int)*puVar1;
    if (((0x0 < iStack_6) && (!SBORROW2(iStack_6,0x1))) &&
       ((iStack_6 == 0x3 || iStack_6 + -0x2 < 0x1 ||
        ((0x3 < iStack_6 + -0x3 && (iStack_6 == 0x8 || iStack_6 + -0x7 < 0x1))))))
    {
      return 0x1;
    }
  }
  return 0x0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// Checks if a given coordinate is within the world boundaries defined by another
// entity's object. Considers a 1-unit safety margin.

u16 __stdcall16far
Simulator_Is_Coordinate_Within_Entity_Bounds_addc
          (u16 x,u16 y,void *coords,u16 arg4,u16 arg5,void *entity_id)
{
  int *unaff_SS;
  undefined4 *puVar1;
  int local_14;
  int local_12;
  int local_10;
  int local_e;
  undefined4 local_c;
  undefined2 uStack_8;
  void *pvStack_6;
  
  pvStack_6 = Simulator_Get_Entity_Object_from_PackedID_e1ec
                        (_p_SimulatorWorldContext,(u8 *)entity_id);
  puVar1 = Simulator_Get_Entity_Coords_Ptr_5b5c
                     ((int)pvStack_6,(uint16_t)((ulong)pvStack_6 >> 0x10));
  local_c = *puVar1;
  uStack_8 = *(undefined2 *)((undefined4 *)puVar1 + 0x1);
  unpack_word_pair((void *)coords,(int *)((ulong)coords >> 0x10),&local_10);
  unpack_word_pair(&local_c,unaff_SS,&local_14);
  if ((((0x1 < local_e) && (0x1 < local_10)) && (local_e < local_12 + -0x1)) &&
     (local_10 < local_14 + -0x1))
  {
    return 0x1;
  }
  return 0x0;
}
