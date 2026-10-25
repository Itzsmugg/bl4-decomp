// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144c08670 FUN_144c08670 body=123 status=ok
// SIG undefined FUN_144c08670(void)

void FUN_144c08670(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c086f0 FUN_144c086f0 body=155 status=ok
// SIG undefined FUN_144c086f0(void)

longlong FUN_144c086f0(ulonglong *param_1,undefined4 *param_2,uint *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int local_res8 [2];
  
  FUN_144c135f0(param_1,local_res8,param_2);
  if (local_res8[0] == (int)param_1[1]) {
    iVar5 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_144c14910(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    uVar3 = *param_1;
    puVar1 = (undefined4 *)(uVar3 + (longlong)(int)param_1[1] * 8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_2;
      uVar3 = (ulonglong)*param_3;
      puVar1[1] = *param_3;
    }
    *(int *)(param_1 + 1) = iVar5;
    lVar4 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    uVar2 = *param_3;
    *(uint *)(*param_1 + 4 + (longlong)local_res8[0] * 8) = uVar2;
    lVar4 = (ulonglong)(uint3)(uVar2 >> 8) << 8;
  }
  return lVar4;
}



// FUNCTION 144c08790 FUN_144c08790 body=510 status=ok
// SIG undefined FUN_144c08790(void)

void FUN_144c08790(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 != 0) {
    FUN_144c089f0(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  *(undefined ***)(param_1 + 200) = hkMemory::BufferedAllocatorNoCleanup::vftable;
  FUN_144f89650();
  FUN_144c07f30(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xb4)) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0xa8),
               (ulonglong)(*(uint *)(param_1 + 0xb4) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(longlong *)(param_1 + 0x98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x98),
               (ulonglong)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x94)) && (*(longlong *)(param_1 + 0x88) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x88),
               (ulonglong)(*(uint *)(param_1 + 0x94) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0x80000000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x84)) && (*(longlong *)(param_1 + 0x78) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x78),
               (ulonglong)(*(uint *)(param_1 + 0x84) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0x80000000;
  FUN_144c08670(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               *(uint *)(param_1 + 0x34) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               *(uint *)(param_1 + 0x24) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_144f87d90(param_1);
  return;
}



// FUNCTION 144c08990 FUN_144c08990 body=87 status=ok
// SIG undefined FUN_144c08990(void)

undefined8 FUN_144c08990(undefined8 param_1,ulonglong param_2)

{
  FUN_144c08790();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 144c089f0 FUN_144c089f0 body=123 status=ok
// SIG undefined FUN_144c089f0(void)

void FUN_144c089f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c08a70 FUN_144c08a70 body=832 status=ok
// SIG undefined FUN_144c08a70(void)

undefined4 *
FUN_144c08a70(longlong param_1,undefined4 *param_2,uint *param_3,ulonglong param_4,longlong *param_5
             )

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined4 local_28 [2];
  ulonglong local_20;
  
  puVar6 = (ulonglong *)FUN_144befe50(param_4,1);
  uVar7 = 0;
  uVar11 = uVar7;
  if (puVar6 != (ulonglong *)0x0) {
    uVar11 = *puVar6;
  }
  iVar5 = (int)(uVar11 >> 8);
  uVar4 = 0;
  if (iVar5 != 0) {
    FUN_144beff00(param_4,&local_20);
    if (local_20 != 0) {
      uVar4 = FUN_144beec90(local_20);
      uVar7 = FUN_144befdb0(local_20);
      if ((uVar7 & 1) != 0) {
        FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
      }
    }
    *param_5 = (longlong)param_3;
    param_5[1] = local_20;
    *(int *)(param_5 + 2) = iVar5;
    *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
    uVar11 = param_5[3];
    param_5[3] = uVar7;
    goto LAB_144c08c21;
  }
  FUN_144bf0690(&local_20,param_4);
  while (1 < local_20) {
    param_4 = *(ulonglong *)(param_4 + 8);
    FUN_144bf0690(&local_20,param_4);
  }
  puVar8 = (undefined4 *)FUN_144bef800(param_4,local_28);
  uVar11 = uVar7;
  if (((byte)*puVar8 & 0x1f) == 8) {
    uVar11 = param_4;
  }
  puVar9 = (uint *)FUN_144b45d50(uVar11,local_28);
  if ((*puVar9 >> 0xd & 1) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x48);
    if ((uint)((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50) - lVar3) / 0xc) <= *param_3) {
      *param_5 = 0;
      param_5[1] = 0;
      param_5[2] = 0;
      uVar11 = param_5[3];
      param_5[3] = 0;
      if ((uVar11 & 1) != 0) {
        FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
      }
      *param_2 = 0x80040200;
      return param_2;
    }
    puVar9 = (uint *)(lVar3 + (longlong)(int)*param_3 * 0xc);
LAB_144c08cde:
    if ((*puVar9 & 0xf0000000) == 0x20000000) {
      uVar1 = puVar9[2];
      lVar3 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x10) + 8) +
               (ulonglong)(*puVar9 & 0xffffff) * 8);
      uVar4 = 0;
      if (uVar1 == 0) {
        if (lVar3 != 0) {
          uVar4 = FUN_144beec90(lVar3);
          uVar7 = FUN_144befdb0(lVar3);
          if ((uVar7 & 1) != 0) {
            FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
          }
        }
        *param_5 = 0;
        param_5[1] = lVar3;
        *(undefined4 *)(param_5 + 2) = 0;
        *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
        uVar11 = param_5[3];
        param_5[3] = uVar7;
      }
      else {
        uVar2 = puVar9[1];
        lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
        if (lVar3 != 0) {
          uVar4 = FUN_144beec90(lVar3);
          uVar7 = FUN_144befdb0(lVar3);
          if ((uVar7 & 1) != 0) {
            FUN_144be6b20(uVar7 & 0xfffffffffffffffe);
          }
        }
        *param_5 = (int)uVar2 + lVar10;
        param_5[1] = lVar3;
        *(uint *)(param_5 + 2) = uVar1;
        *(undefined4 *)((longlong)param_5 + 0x14) = uVar4;
        uVar11 = param_5[3];
        param_5[3] = uVar7;
      }
      goto LAB_144c08c21;
    }
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    iVar5 = FUN_144beec90(uVar11);
    if (iVar5 == 0x10) {
      lVar10 = *(longlong *)param_3;
    }
    else {
      lVar10 = (longlong)(int)*param_3;
    }
    if (lVar10 != 0) {
      uVar11 = (longlong)param_3 + (lVar10 - lVar3);
      lVar3 = *(longlong *)(param_1 + 0x10);
      if (*(int *)(lVar3 + 0x60) == 0) {
        for (puVar9 = *(uint **)(lVar3 + 0x48); puVar9 != *(uint **)(lVar3 + 0x50);
            puVar9 = puVar9 + 3) {
          if (puVar9[1] == uVar11) goto LAB_144c08c00;
        }
      }
      else {
        local_28[0] = (undefined4)uVar11;
        lVar10 = FUN_144c136f0(lVar3 + 0x58,local_28);
        if ((lVar10 != 0) &&
           (lVar10 = *(longlong *)(lVar3 + 0x58) + (longlong)*(int *)(lVar10 + 4) * 8, lVar10 != 0))
        {
          puVar9 = (uint *)(*(longlong *)(lVar3 + 0x48) + (longlong)*(int *)(lVar10 + 4) * 0xc);
LAB_144c08c00:
          if (puVar9 != (uint *)0x0) goto LAB_144c08cde;
        }
      }
    }
  }
  *param_5 = 0;
  param_5[1] = 0;
  param_5[2] = 0;
  uVar11 = param_5[3];
  param_5[3] = 0;
LAB_144c08c21:
  if ((uVar11 & 1) != 0) {
    FUN_144be6b30(uVar11 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c08db0 FUN_144c08db0 body=10 status=ok
// SIG undefined FUN_144c08db0(void)

undefined4 * FUN_144c08db0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c08dc0 FUN_144c08dc0 body=87 status=ok
// SIG undefined FUN_144c08dc0(void)

undefined8 FUN_144c08dc0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144c08e20 FUN_144c08e20 body=10 status=ok
// SIG undefined FUN_144c08e20(void)

undefined4 * FUN_144c08e20(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c08e30 FUN_144c08e30 body=567 status=ok
// SIG undefined FUN_144c08e30(void)

undefined4 *
FUN_144c08e30(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 local_28;
  longlong local_20;
  ulonglong uVar11;
  
  puVar3 = param_5;
  uVar6 = 0;
  *param_5 = 0;
  param_5[1] = 0;
  uVar8 = param_5[2];
  param_5[2] = 0;
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  puVar4 = (uint *)FUN_144b45d50(param_4,&param_5);
  if ((*puVar4 >> 0xd & 1) == 0) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    uVar10 = *param_3;
    lVar5 = *(longlong *)(lVar7 + 0x48);
    if ((uint)((*(longlong *)(lVar7 + 0x50) - lVar5) / 0xc) <= uVar10) {
LAB_144c09044:
      *param_2 = 0x80040200;
      return param_2;
    }
    lVar9 = lVar5 + (longlong)(int)uVar10 * 0xc;
    uVar10 = *(uint *)(lVar5 + (longlong)(int)uVar10 * 0xc) & 0xf0000000;
    if (uVar10 == 0x30000000) {
      lVar9 = lVar5 + (longlong)*(int *)(lVar9 + 8) * 0xc;
    }
    else if (uVar10 == 0x20000000) goto LAB_144c09044;
LAB_144c08fe7:
    FUN_144c08450(lVar7,&local_28,lVar9);
    if (local_20 != 0) {
      uVar6 = FUN_144befdb0(local_20);
    }
    if ((uVar6 & 1) != 0) {
      FUN_144be6b20(uVar6 & 0xfffffffffffffffe);
    }
    *puVar3 = local_28;
    puVar3[1] = local_20;
    uVar8 = puVar3[2];
    puVar3[2] = uVar6;
  }
  else {
    if (*(longlong *)param_3 != 0) {
      lVar7 = *(longlong *)(param_1 + 0x10);
      uVar8 = (*(longlong *)param_3 - *(longlong *)(lVar7 + 0x38)) + (longlong)param_3;
      if (*(int *)(lVar7 + 0x60) == 0) {
        lVar9 = *(longlong *)(lVar7 + 0x48);
        lVar5 = *(longlong *)(lVar7 + 0x50) - lVar9;
        iVar2 = (int)(lVar5 >> 0x3f);
        iVar1 = (int)(lVar5 / 0xc) + iVar2;
        if (iVar1 != iVar2 && -1 < iVar1 - iVar2) {
          puVar4 = (uint *)(lVar9 + 4);
          uVar11 = uVar6;
          do {
            if (*puVar4 == uVar8) {
              lVar9 = lVar9 + (longlong)(int)uVar11 * 0xc;
              goto LAB_144c08fe7;
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
            puVar4 = puVar4 + 3;
          } while ((int)uVar10 < (int)((*(longlong *)(lVar7 + 0x50) - lVar9) / 0xc));
        }
      }
      else {
        param_5._0_4_ = (undefined4)uVar8;
        lVar5 = FUN_144c136f0(lVar7 + 0x58,&param_5);
        if ((lVar5 != 0) &&
           (lVar5 = *(longlong *)(lVar7 + 0x58) + (longlong)*(int *)(lVar5 + 4) * 8, lVar5 != 0)) {
          lVar9 = *(longlong *)(lVar7 + 0x48) + (longlong)*(int *)(lVar5 + 4) * 0xc;
          goto LAB_144c08fe7;
        }
      }
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    uVar8 = puVar3[2];
    puVar3[2] = 0;
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c09070 FUN_144c09070 body=87 status=ok
// SIG undefined FUN_144c09070(void)

undefined8 FUN_144c09070(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144c090d0 FUN_144c090d0 body=10 status=ok
// SIG undefined FUN_144c090d0(void)

undefined4 * FUN_144c090d0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c090e0 FUN_144c090e0 body=278 status=ok
// SIG undefined FUN_144c090e0(void)

uint * FUN_144c090e0(longlong param_1,uint *param_2,uint *param_3,undefined8 param_4,
                    longlong *param_5)

{
  longlong lVar1;
  longlong *plVar2;
  uint uVar3;
  uint *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 local_res8 [8];
  
  plVar2 = param_5;
  *param_5 = 0;
  param_5._0_4_ = (int)param_3 - *(int *)(*(longlong *)(param_1 + 0x10) + 0x38);
  if (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x120) != 0) {
    puVar4 = (uint *)FUN_144bef800(param_4,local_res8);
    uVar6 = *puVar4 >> 0x10;
    if ((*puVar4 & 0x20) == 0) {
      uVar6 = 0;
    }
    if ((uVar6 != 0) &&
       ((lVar5 = FUN_144bdd570(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x120),&param_5),
        lVar5 == 0 || (*(int *)(lVar5 + 4) < 0)))) {
      *plVar2 = (longlong)param_3;
      *param_2 = 0;
      return param_2;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  uVar6 = *param_3;
  lVar1 = *(longlong *)(lVar5 + 0x48);
  if (uVar6 < (uint)((*(longlong *)(lVar5 + 0x50) - lVar1) / 0xc)) {
    uVar3 = *(uint *)(lVar1 + (longlong)(int)uVar6 * 0xc) & 0xf0000000;
    if (uVar3 != 0x20000000) {
      *param_2 = -(uint)(uVar3 != 0) & 0x80040200;
      return param_2;
    }
    uVar6 = *(uint *)(lVar1 + 4 + (longlong)(int)uVar6 * 0xc);
    if ((ulonglong)uVar6 < (ulonglong)(longlong)(*(int *)(lVar5 + 0x40) - *(int *)(lVar5 + 0x38))) {
      *plVar2 = (longlong)(int)uVar6 + *(longlong *)(lVar5 + 0x38);
      *param_2 = 0;
      return param_2;
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c09200 FUN_144c09200 body=87 status=ok
// SIG undefined FUN_144c09200(void)

undefined8 FUN_144c09200(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144c092e0 FUN_144c092e0 body=953 status=ok
// SIG undefined FUN_144c092e0(void)

undefined4 * FUN_144c092e0(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 *local_28;
  undefined1 local_20;
  undefined *local_18;
  undefined1 local_10;
  
  puVar1 = (undefined8 *)(param_1 + 2);
  *param_1 = 0;
  FUN_144f87d70(puVar1);
  *puVar1 = hkSerialize::Detail::TagfileBundle::vftable;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x80000000;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x80000000;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x80000000;
  uVar3 = FUN_144b3d480();
  *(undefined8 *)(param_1 + 0x1c) = uVar3;
  param_1[0x1e] = 0;
  *(undefined ***)(param_1 + 0x34) = hkMemory::BufferedAllocatorNoCleanup::vftable;
  puVar2 = (undefined8 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined **)(param_1 + 0x20) = &DAT_14c787818;
  param_1[0x26] = 0;
  param_1[0x27] = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x80000000;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x80000000;
  *(undefined8 *)(param_1 + 0x30) = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0x80000000;
  *(undefined ***)(param_1 + 0x36) = &PTR_vftable_14c6e47a0;
  *(undefined8 *)(param_1 + 0x38) = 0x1fc0;
  param_1[0x3a] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0x80000000;
  *(undefined8 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0;
  *(undefined8 *)(param_1 + 0x45) = 0xffffffff80000000;
  *(undefined8 **)(param_1 + 0x48) = puVar2;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  param_1[0x22] = 1;
  param_1[0x23] = 0x80000001;
  param_1[0x4c] = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0x80000000;
  param_1[0x52] = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0x80000000;
  puVar4 = (undefined4 *)(**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,0x18);
  *(undefined4 **)(param_1 + 0x54) = puVar4;
  param_1[0x56] = 1;
  param_1[0x57] = 1;
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 1;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[5] = 0x80000000;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0x80000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0x80000000;
  FUN_144be6ac0(puVar2);
  *(undefined8 **)(param_1 + 0x68) = puVar1;
  *puVar2 = hkSerialize::Detail::TagfilePointerImpl::vftable;
  FUN_144be6ac0(param_1 + 0x6a);
  *(undefined8 **)(param_1 + 0x6e) = puVar1;
  *(undefined ***)(param_1 + 0x6a) = hkSerialize::Detail::TagfileArrayImpl::vftable;
  FUN_144be6ac0(param_1 + 0x70);
  *(undefined8 **)(param_1 + 0x74) = puVar1;
  *(undefined ***)(param_1 + 0x70) = hkSerialize::Detail::TagfileStringImpl::vftable;
  *(undefined8 *)(param_1 + 0x76) = 0;
  param_1[0x78] = 0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0x80000000;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0x80000000;
  *(undefined8 *)(param_1 + 0x82) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0x80000000;
  param_1[0x86] = 0;
  local_78[0] = 1;
  local_74 = 0x3fff;
  local_70 = 0x1fffffff;
  local_68 = 1;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 1;
  FUN_144f8a9e0(param_1 + 0x88,local_78);
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined **)(param_1 + 0xa0) = &DAT_149990bb0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined **)(param_1 + 0xa2) = &DAT_149990c70;
  local_3c = 0x3bff;
  local_30 = &LAB_144c09260;
  local_18 = &DAT_14c787820;
  local_38 = 0x16b0c01f;
  local_10 = 1;
  local_40[0] = 1;
  local_20 = 1;
  local_28 = puVar1;
  FUN_144f8aab0(param_1 + 0x88,local_40);
  return param_1;
}



// FUNCTION 144c096a0 FUN_144c096a0 body=783 status=ok
// SIG undefined FUN_144c096a0(void)

longlong * FUN_144c096a0(int *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 local_res8;
  int local_378;
  int iStack_374;
  int iStack_370;
  int iStack_36c;
  longlong *local_368;
  undefined8 local_360;
  undefined1 *local_358;
  int local_350;
  uint local_34c;
  undefined1 local_348 [384];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  if (((*(longlong *)(param_1 + 4) != *(longlong *)(param_1 + 4) + (longlong)param_1[6] * 8) &&
      (param_1[0x46] == -1)) && (param_1[0x52] != 1)) {
    *param_2 = 0;
    return param_2;
  }
  (**(code **)(*(longlong *)(param_1 + 2) + 0x20))(param_1 + 2);
  local_360 = 0x7fffffffffffffff;
  local_358 = local_348;
  iVar6 = 0x54414730;
  local_350 = 0;
  local_34c = 0x80000010;
  local_368 = param_3;
  iVar5 = FUN_144c07a00(&local_368,0x54414730);
  if (iVar5 == 0x54414730) {
LAB_144c09771:
    uVar1 = *(uint *)(local_358 + (longlong)(local_350 + -1) * 0x18 + 4);
    lVar8 = param_3[2];
    lVar2 = param_3[5];
    lVar3 = *param_3;
    uVar7 = FUN_144f89500(param_3);
    FUN_144f894c0(param_3,&local_res8,((ulonglong)(uVar1 & 0x3fffffff) - lVar8) + lVar2 + lVar3 + -8
                 );
    local_378 = param_1[0xa0];
    iStack_374 = param_1[0xa1];
    iStack_370 = param_1[0xa2];
    iStack_36c = param_1[0xa3];
    param_1[0x46] = param_1[0x46] + 1;
    FUN_144c0f200(&local_368,param_1,&local_378);
    if (-1 < *param_1) {
      iVar5 = local_350 + -1;
      if ((local_368[5] - local_368[2]) + *local_368 ==
          (ulonglong)(*(uint *)(local_358 + (longlong)iVar5 * 0x18 + 4) & 0x3fffffff) +
          *(longlong *)(local_358 + (longlong)iVar5 * 0x18 + 8)) {
        local_360 = *(undefined8 *)(local_358 + (longlong)iVar5 * 0x18 + 0x10);
        local_350 = iVar5;
      }
      else {
        *(byte *)(local_368 + 4) = *(byte *)(local_368 + 4) | 2;
      }
      if (iVar6 == 0x54434d30) {
        param_1[0x52] = 1;
      }
      *param_2 = (longlong)(param_1 + 2);
      FUN_144f894c0(param_3,&local_res8,uVar7);
      goto LAB_144c09951;
    }
    FUN_144f894c0(param_3,&local_res8,uVar7);
  }
  else {
    iVar6 = FUN_144c07a00(&local_368,0x54434d30);
    if (iVar6 == 0x54434d30) {
      param_1[0x52] = 2;
      iVar6 = 0x54434d30;
      goto LAB_144c09771;
    }
    if ((1 < DAT_14c787870) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(local_1c8);
        local_res8 = 0;
        lVar8 = FUN_144bdc480(uVar7,"Input does not appear to be a tagfile",&local_res8,0);
        *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x6fe;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar7 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        local_res8 = 0;
        lVar8 = FUN_144bdc480(uVar7,"Input does not appear to be a tagfile",&local_res8,0);
        *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x6fe;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 2;
  *param_2 = 0;
LAB_144c09951:
  local_350 = 0;
  if ((-1 < (int)local_34c) && (local_358 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_358,(ulonglong)(local_34c & 0x7fffffff) * 0x18);
  }
  return param_2;
}



// FUNCTION 144c099b0 FUN_144c099b0 body=757 status=ok
// SIG undefined FUN_144c099b0(void)

longlong *
FUN_144c099b0(int *param_1,longlong *param_2,int *param_3,longlong param_4,ulonglong *param_5,
             longlong *param_6)

{
  uint uVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 local_3c8;
  longlong lStack_3c0;
  int *local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  int *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 uStack_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined4 uStack_37c;
  longlong lStack_378;
  undefined4 local_370;
  undefined4 uStack_36c;
  uint uStack_368;
  undefined4 uStack_364;
  longlong local_360;
  undefined1 *local_358;
  int local_350;
  uint local_34c;
  undefined1 local_348 [384];
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  puVar2 = param_5;
  *param_5 = 0;
  if (((*(longlong *)(param_1 + 4) != *(longlong *)(param_1 + 4) + (longlong)param_1[6] * 8) &&
      (param_1[0x46] == -1)) && (param_1[0x52] != 1)) {
    *param_2 = 0;
    return param_2;
  }
  (**(code **)(*(longlong *)(param_1 + 2) + 0x20))(param_1 + 2);
  local_358 = local_348;
  lStack_3c0 = (longlong)param_3 + param_4;
  iVar5 = 0x54414730;
  local_3c8._0_4_ = SUB84(param_3,0);
  local_3c8._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
  uStack_3b0 = uStack_3b0 & 0xffffff00;
  local_350 = 0;
  local_380 = (undefined4)local_3c8;
  uStack_37c = local_3c8._4_4_;
  local_34c = 0x80000010;
  local_370 = (undefined4)local_3c8;
  uStack_36c = local_3c8._4_4_;
  uStack_368 = uStack_3b0;
  uStack_364 = uStack_3ac;
  local_3c8 = param_3;
  local_3b8 = param_3;
  local_360 = param_4;
  lStack_378 = lStack_3c0;
  iVar4 = FUN_144c078c0(&local_380,0x54414730);
  if (iVar4 == 0x54414730) {
LAB_144c09aa5:
    param_1[0x46] = param_1[0x46] + 1;
    local_3a8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_3a0 = *(undefined8 *)(param_1 + 0xa2);
    uVar1 = *(uint *)(local_358 + (longlong)(local_350 + -1) * 0x18 + 4);
    uStack_390 = (undefined4)*param_6;
    uStack_38c = *(undefined4 *)((longlong)param_6 + 4);
    lStack_3c0 = *param_6;
    uStack_388 = (undefined4)param_6[1];
    uStack_384 = *(undefined4 *)((longlong)param_6 + 0xc);
    local_3b8 = (int *)param_6[1];
    local_3c8 = param_1;
    local_398 = param_1;
    FUN_144c0f660(&local_380,&local_3c8,&local_3a8);
    if (-1 < *param_1) {
      lVar7 = (longlong)(local_350 + -1);
      *puVar2 = (ulonglong)(uVar1 & 0x3fffffff);
      if (CONCAT44(uStack_37c,local_380) - CONCAT44(uStack_36c,local_370) ==
          (ulonglong)(*(uint *)(local_358 + lVar7 * 0x18 + 4) & 0x3fffffff) +
          *(longlong *)(local_358 + lVar7 * 0x18 + 8)) {
        local_360 = *(longlong *)(local_358 + lVar7 * 0x18 + 0x10);
      }
      else {
        uStack_368 = uStack_368 | 2;
      }
      if (iVar5 == 0x54434d30) {
        param_1[0x52] = 1;
      }
      *param_2 = (longlong)(param_1 + 2);
      goto joined_r0x000144c09b7c;
    }
  }
  else {
    iVar5 = FUN_144c078c0(&local_380,0x54434d30);
    if (iVar5 == 0x54434d30) {
      param_1[0x52] = 2;
      iVar5 = 0x54434d30;
      goto LAB_144c09aa5;
    }
    if (DAT_14c787870 < 2) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 != '\0') goto LAB_144c09b9d;
    }
    else {
LAB_144c09b9d:
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        uVar6 = FUN_144bdc640(local_1c8);
        param_5 = (ulonglong *)0x0;
        lVar7 = FUN_144bdc480(uVar6,"Input does not appear to be a tagfile",&param_5,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x6fe;
        FUN_144bdc690(local_1c8);
      }
      else {
        uVar6 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        param_5 = (ulonglong *)0x0;
        lVar7 = FUN_144bdc480(uVar6,"Input does not appear to be a tagfile",&param_5,0);
        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar7 + 0x40) = 0x6fe;
        FUN_144bdc8a0(local_178);
      }
    }
  }
  *param_2 = 0;
joined_r0x000144c09b7c:
  if ((-1 < (int)local_34c) && (local_350 = 0, local_358 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_358,(ulonglong)(local_34c & 0x7fffffff) * 0x18);
  }
  return param_2;
}



// FUNCTION 144c09cb0 FUN_144c09cb0 body=12653 status=ok
// SIG undefined FUN_144c09cb0(void)

void FUN_144c09cb0(uint *param_1,longlong *param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int *piVar14;
  undefined8 *puVar15;
  uint *puVar16;
  undefined8 *puVar17;
  ulonglong *puVar18;
  undefined4 *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  short *psVar25;
  int iVar26;
  int iVar27;
  uint *puVar28;
  uint *puVar29;
  int iVar30;
  longlong *plVar31;
  bool bVar32;
  undefined8 local_res8;
  uint local_res10 [2];
  undefined8 local_res18;
  uint *local_res20;
  undefined8 local_868;
  uint *local_860;
  undefined8 local_858;
  code *pcStack_850;
  uint **local_848;
  code *pcStack_840;
  uint **local_838;
  uint local_808 [2];
  uint *local_800;
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  uint **local_7e8;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  uint **local_7d8;
  undefined8 local_7a8;
  code *pcStack_7a0;
  uint **local_798;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  uint **local_788;
  uint *local_780;
  uint *local_778;
  undefined1 local_770 [80];
  ulonglong local_720;
  int local_718;
  int local_714;
  undefined1 *local_710;
  int local_708;
  uint local_704;
  undefined1 local_700 [128];
  undefined1 *local_680;
  int local_678;
  uint local_674;
  undefined1 local_670 [128];
  undefined1 *local_5f0;
  int local_5e8;
  uint local_5e4;
  undefined1 local_5e0 [8];
  undefined1 local_5d8 [336];
  undefined1 local_488 [96];
  ulonglong local_428;
  ulonglong local_420;
  undefined1 *local_418;
  uint *local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3a8;
  ulonglong local_380;
  ulonglong local_378;
  uint *local_368;
  undefined8 local_358;
  undefined8 local_340;
  undefined1 local_268 [96];
  ulonglong local_208;
  undefined1 *local_170;
  longlong local_160;
  
  iVar30 = 0;
  param_3[0] = 0;
  param_3[1] = 0;
  *(undefined1 *)param_4 = 0;
  local_res8 = param_1;
  local_res18 = param_3;
  local_res20 = param_4;
  uVar8 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar8) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  local_860._0_4_ = (int)uVar8;
  uVar8 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar8) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  uVar9 = FUN_144c07b70(param_2);
  if (0xffffffff < uVar9) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  local_res10[0] = (uint)uVar9;
  if ((char)param_2[3] != '\0') {
    *param_1 = 0x80040200;
LAB_144c09d4d:
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) {
      return;
    }
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      uVar10 = FUN_144bdc640(&local_858);
      local_res8 = (uint *)0x0;
      lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5a9;
      FUN_144bdc690(&local_858);
      return;
    }
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_res8 = (uint *)0x0;
    lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5a9;
    FUN_144bdc8a0(local_5d8);
    return;
  }
  if ((int)*param_1 < 0) goto LAB_144c09d4d;
  if (((int)local_860 < 1) || ((int)param_1[0x22] <= (int)local_860)) {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      uVar10 = FUN_144bdc640(local_770);
      local_res8 = (uint *)0x0;
      lVar11 = FUN_144bdc480(uVar10,"Invalid type ID (out of bounds).",&local_res8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5ad;
      *(undefined4 *)(lVar11 + 0x1c) = 0x71b95bd8;
      FUN_144bdc690(local_770);
      goto LAB_144c0cdfd;
    }
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_res18 = (uint *)0x0;
    lVar11 = FUN_144bdc480(uVar10,"Invalid type ID (out of bounds).",&local_res18,0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5ad;
    *(undefined4 *)(lVar11 + 0x1c) = 0x71b95bd8;
LAB_144c0cdf1:
    FUN_144bdc8a0(local_5d8);
LAB_144c0cdfd:
    *param_1 = 0x80040200;
    return;
  }
  if ((int)param_1[6] <= (int)local_860) {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      uVar10 = FUN_144bdc640(&local_858);
      local_res8 = (uint *)0x0;
      lVar11 = FUN_144bdc480(uVar10,"Invalid type ID (out of bounds).",&local_res8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5ae;
      *(undefined4 *)(lVar11 + 0x1c) = 0x71b95bd9;
      FUN_144bdc690(&local_858);
      goto LAB_144c0cdfd;
    }
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_res18 = (uint *)0x0;
    lVar11 = FUN_144bdc480(uVar10,"Invalid type ID (out of bounds).",&local_res18,0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5ae;
    *(undefined4 *)(lVar11 + 0x1c) = 0x71b95bd9;
    goto LAB_144c0cdf1;
  }
  if (*(longlong *)(*(longlong *)(param_1 + 4) + (longlong)(int)local_860 * 8) != 0) {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      uVar10 = FUN_144bdc640(&local_858);
      local_7f8 = (uint *)0x1;
      uStack_7f0 = FUN_144f50970;
      local_7e8 = &local_860;
      local_7a8 = 1;
      pcStack_7a0 = FUN_144f50970;
      local_798 = local_7e8;
      lVar11 = FUN_144bdc480(uVar10,"TypeId {} already read",&local_7a8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5af;
      FUN_144bdc690(&local_858);
      goto LAB_144c0cdfd;
    }
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_7f8 = (uint *)&DAT_00000001;
    uStack_7f0 = FUN_144f50970;
    local_7e8 = &local_860;
    local_7a8 = 1;
    pcStack_7a0 = FUN_144f50970;
    local_798 = local_7e8;
    lVar11 = FUN_144bdc480(uVar10,"TypeId {} already read",&local_7a8,0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5af;
    goto LAB_144c0cdf1;
  }
  puVar21 = *(uint **)((longlong)(int)local_860 * 8 + *(longlong *)(param_1 + 0x20));
  iVar26 = (int)uVar8;
  local_800 = puVar21;
  if ((iVar26 < 0) || ((int)param_1[0x22] <= iVar26)) {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      local_res8 = (uint *)FUN_144beee40(puVar21);
      uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
      local_7f8 = (uint *)0x1;
      uStack_7f0 = FUN_144f50c70;
      local_848 = (uint **)&local_res8;
      local_858 = 1;
      pcStack_850 = FUN_144f50c70;
      local_7e8 = local_848;
      lVar11 = FUN_144bdc480(uVar10,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                             &local_858,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5b3;
      FUN_144bdc690(local_770);
      goto LAB_144c0cdfd;
    }
    local_res18 = (uint *)FUN_144beee40(puVar21);
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_7f8 = (uint *)&DAT_00000001;
    uStack_7f0 = FUN_144f50c70;
    local_848 = (uint **)&local_res18;
    local_858 = 1;
    pcStack_850 = FUN_144f50c70;
    local_7e8 = local_848;
    lVar11 = FUN_144bdc480(uVar10,"Invalid parent type ID (out of bounds) for type \'{}\'.",
                           &local_858,0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5b3;
    goto LAB_144c0cdf1;
  }
  uVar8 = (ulonglong)local_868 >> 0x20;
  local_868 = (uint *)((ulonglong)local_868 & 0xffffffff00000000);
  bVar32 = (uVar9 & 1) != 0;
  if (bVar32) {
    local_res10[0] = local_res10[0] ^ 1;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)CONCAT44((int)uVar8,1);
  }
  uVar22 = (uint)bVar32;
  if ((uVar9 & 2) != 0) {
    uVar22 = bVar32 | 2;
    local_res10[0] = (uint)uVar9 ^ 2;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)(CONCAT44(local_868._4_4_,(uint)bVar32) | 2);
  }
  uVar23 = uVar22;
  if ((uVar9 & 4) != 0) {
    uVar23 = uVar22 | 0x10;
    local_res10[0] = (uint)uVar9 ^ 4;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar22) | 0x10);
  }
  uVar22 = uVar23;
  if ((uVar9 & 8) != 0) {
    uVar22 = uVar23 | 0x100000;
    local_res10[0] = (uint)uVar9 ^ 8;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar23) | 0x100000);
  }
  uVar23 = uVar22;
  if ((uVar9 & 0x10) != 0) {
    uVar23 = uVar22 | 0x200000;
    local_res10[0] = (uint)uVar9 ^ 0x10;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar22) | 0x200000);
  }
  uVar22 = uVar23;
  if ((uVar9 & 0x20) != 0) {
    uVar22 = uVar23 | 0x800000;
    local_res10[0] = (uint)uVar9 ^ 0x20;
    uVar9 = (ulonglong)local_res10[0];
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar23) | 0x800000);
  }
  uVar23 = uVar22;
  uVar20 = (uint)uVar9;
  if ((uVar9 & 0x40) != 0) {
    uVar23 = uVar22 | 0x4000;
    local_res10[0] = (uint)uVar9 ^ 0x40;
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar22) | 0x4000);
    uVar20 = local_res10[0];
  }
  uVar22 = uVar23;
  if ((char)uVar20 < '\0') {
    uVar22 = uVar23 | 0x2000000;
    local_res10[0] = uVar20 ^ 0x80;
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar23) | 0x2000000);
    uVar20 = local_res10[0];
  }
  if ((uVar20 >> 8 & 1) != 0) {
    local_res10[0] = uVar20 ^ 0x100;
    local_868 = (uint *)(CONCAT44(local_868._4_4_,uVar22) | 0x10000000);
    uVar20 = local_res10[0];
  }
  if (uVar20 != 0) {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      local_res8 = (uint *)FUN_144beee40(puVar21);
      uVar10 = FUN_144bdc640(&local_7f8,&DAT_14c787820,1);
      local_858 = 2;
      pcStack_850 = FUN_144f50a00;
      local_848 = (uint **)local_res10;
      pcStack_840 = FUN_144f50c70;
      local_838 = (uint **)&local_res8;
      local_7a8 = 2;
      pcStack_7a0 = FUN_144f50a00;
      uStack_790 = 0x44f50c70;
      uStack_78c = 1;
      local_798 = local_848;
      local_788 = local_838;
      lVar11 = FUN_144bdc480(uVar10,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",&local_7a8,
                             0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5c5;
      FUN_144bdc690(&local_7f8);
      goto LAB_144c0cdfd;
    }
    local_res18 = (uint *)FUN_144beee40(puVar21);
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_858 = 2;
    pcStack_850 = FUN_144f50a00;
    local_848 = (uint **)local_res10;
    pcStack_840 = FUN_144f50c70;
    local_838 = (uint **)&local_res18;
    local_7a8 = 2;
    pcStack_7a0 = FUN_144f50a00;
    uStack_790 = 0x44f50c70;
    uStack_78c = 1;
    local_798 = local_848;
    local_788 = local_838;
    lVar11 = FUN_144bdc480(uVar10,"Invalid Opt bits 0x{:x} on content of type \'{}\'.",&local_7a8,0)
    ;
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5c5;
    goto LAB_144c0cdf1;
  }
  cVar7 = FUN_144f8ab30(param_1 + 0x88);
  if (cVar7 == '\0') {
    if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0')) goto LAB_144c0cdfd;
    cVar7 = FUN_144bdbf80();
    if (cVar7 == '\0') {
      local_res8 = (uint *)FUN_144beee40(puVar21);
      uVar10 = FUN_144bdc640(&local_7f8,&DAT_14c787820,1);
      local_858 = 2;
      pcStack_850 = FUN_144f50a00;
      local_848 = (uint **)&local_868;
      pcStack_840 = FUN_144f50c70;
      local_838 = (uint **)&local_res8;
      local_7a8 = 2;
      pcStack_7a0 = FUN_144f50a00;
      uStack_790 = 0x44f50c70;
      uStack_78c = 1;
      local_798 = local_848;
      local_788 = local_838;
      lVar11 = FUN_144bdc480(uVar10,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",
                             &local_7a8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x5c8;
      FUN_144bdc690(&local_7f8);
      goto LAB_144c0cdfd;
    }
    local_res18 = (uint *)FUN_144beee40(puVar21);
    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
    local_858 = 2;
    pcStack_850 = FUN_144f50a00;
    local_848 = (uint **)&local_868;
    pcStack_840 = FUN_144f50c70;
    local_838 = (uint **)&local_res18;
    local_7a8 = 2;
    pcStack_7a0 = FUN_144f50a00;
    uStack_790 = 0x44f50c70;
    uStack_78c = 1;
    local_798 = local_848;
    local_788 = local_838;
    lVar11 = FUN_144bdc480(uVar10,"Forbidden Opt bits 0x{:x} on content of type \'{}\'.",&local_7a8,
                           0);
    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar11 + 0x40) = 0x5c8;
    goto LAB_144c0cdf1;
  }
  local_res10[0] = (uint)local_868;
  FUN_144f6faa0(local_488);
  FUN_144f6fee0(local_488,param_1);
  local_710 = local_700;
  local_680 = local_670;
  local_714 = 0;
  local_5f0 = local_5e0;
  local_708 = 0;
  local_704 = 0x80000020;
  local_678 = 0;
  local_674 = 0x80000020;
  local_5e8 = 0;
  local_5e4 = 0x80000002;
  local_808[0] = 0;
  local_718 = iVar26;
  if ((local_res10[0] & 1) == 0) goto LAB_144c0a809;
  uVar8 = FUN_144c07b70(param_2);
  if (0xffffffff < uVar8) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  local_808[0] = (uint)uVar8;
  if ((char)param_2[3] != '\0') {
    *param_1 = 0x80040200;
LAB_144c0a510:
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        uVar10 = FUN_144bdc640(&local_858);
        local_res8 = (uint *)0x0;
        lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x5dd;
        FUN_144bdc690(&local_858);
      }
      else {
        uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
        local_res8 = (uint *)0x0;
        lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x5dd;
        FUN_144bdc8a0(local_5d8);
      }
    }
    goto LAB_144c0cb14;
  }
  if ((int)*param_1 < 0) goto LAB_144c0a510;
  local_428 = local_428 | 1;
  local_420 = uVar8 & 0xffffffff;
  switch(local_808[0] & 0x1f) {
  case 0:
    local_410 = (uint *)&DAT_14c787918;
    break;
  case 1:
    local_410 = (uint *)&DAT_14c787928;
    break;
  case 2:
  case 4:
  case 5:
    lVar11 = FUN_144f6a4d0(uVar8 & 0xffffffff);
    if (lVar11 != 0) {
      local_410 = (uint *)FUN_144befdb0(lVar11);
      uVar8 = (ulonglong)local_808[0];
      break;
    }
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        local_res8 = (uint *)FUN_144beee40(puVar21);
        uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
        local_858 = 2;
        pcStack_850 = FUN_144f50a00;
        local_848 = (uint **)local_808;
        pcStack_840 = FUN_144f50c70;
        local_838 = (uint **)&local_res8;
        local_7a8 = 2;
        pcStack_7a0 = FUN_144f50a00;
        uStack_790 = 0x44f50c70;
        uStack_78c = 1;
        local_798 = local_848;
        local_788 = local_838;
        lVar11 = FUN_144bdc480(uVar10,
                               "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                               ,&local_7a8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x5f8;
        *(undefined4 *)(lVar11 + 0x1c) = 0x775182a1;
        FUN_144bdc690(local_770);
        *param_1 = 0x80040200;
      }
      else {
        local_res18 = (uint *)FUN_144beee40(puVar21);
        uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
        local_858 = 2;
        pcStack_850 = FUN_144f50a00;
        local_848 = (uint **)local_808;
        pcStack_840 = FUN_144f50c70;
        local_838 = (uint **)&local_res18;
        local_7f8 = (uint *)0x2;
        uStack_7f0 = FUN_144f50a00;
        uStack_7e0 = 0x44f50c70;
        uStack_7dc = 1;
        local_7e8 = local_848;
        local_7d8 = local_838;
        lVar11 = FUN_144bdc480(uVar10,
                               "Cannot find a built-in type corresponding to format 0x{:x8} of type \'{}\' (invalid format?)."
                               ,&local_7f8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x5f8;
        *(undefined4 *)(lVar11 + 0x1c) = 0x775182a1;
        FUN_144bdc8a0(local_5d8);
        *param_1 = 0x80040200;
      }
      goto LAB_144c0cb14;
    }
    goto LAB_144c0c5d6;
  case 3:
    local_410 = param_1 + 0x70;
    break;
  case 6:
    local_410 = param_1 + 100;
    break;
  case 7:
    local_410 = (uint *)&DAT_14c784688;
    break;
  case 8:
    local_410 = param_1 + 0x6a;
    break;
  default:
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        local_res20 = (uint *)FUN_144beee40(puVar21);
        local_res8 = (uint *)(CONCAT44(local_res8._4_4_,local_808[0]) & 0xffffffff0000001f);
        uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
        local_858 = 2;
        pcStack_850 = FUN_144f50a00;
        local_848 = (uint **)&local_res8;
        pcStack_840 = FUN_144f50c70;
        local_838 = &local_res20;
        local_7a8 = 2;
        pcStack_7a0 = FUN_144f50a00;
        uStack_790 = 0x44f50c70;
        uStack_78c = 1;
        local_798 = local_848;
        local_788 = local_838;
        lVar11 = FUN_144bdc480(uVar10,"Unknown format kind 0x{:x8} for type \'{}\'.",&local_7a8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x60e;
        FUN_144bdc690(local_770);
        *param_1 = 0x80040200;
      }
      else {
        local_780 = (uint *)FUN_144beee40(puVar21);
        local_res18 = (uint *)(CONCAT44(local_res18._4_4_,local_808[0]) & 0xffffffff0000001f);
        uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
        local_858 = 2;
        pcStack_850 = FUN_144f50a00;
        local_848 = (uint **)&local_res18;
        pcStack_840 = FUN_144f50c70;
        local_838 = &local_780;
        local_7a8 = 2;
        pcStack_7a0 = FUN_144f50a00;
        uStack_790 = 0x44f50c70;
        uStack_78c = 1;
        local_798 = local_848;
        local_788 = local_838;
        lVar11 = FUN_144bdc480(uVar10,"Unknown format kind 0x{:x8} for type \'{}\'.",&local_7a8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x60e;
        FUN_144bdc8a0(local_5d8);
        *param_1 = 0x80040200;
      }
      goto LAB_144c0cb14;
    }
    goto LAB_144c0c5d6;
  }
  iVar30 = (int)uVar8;
  local_428 = local_428 | 4;
LAB_144c0a809:
  if ((local_res10[0] & 2) == 0) {
LAB_144c0ad56:
    if ((local_res10[0] & 0x10) != 0) {
      local_868 = (uint *)FUN_144c07b70(param_2);
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          if ((((ulonglong)local_868 & 0xffffffff00000000) == 0) ||
             (((ulonglong)local_868 & 0xffffffff00000000) == 0xffffffff00000000)) {
            if (-1 < (int)local_868) {
              local_428 = local_428 | 0x10;
              local_400 = (longlong)(int)local_868;
              goto LAB_144c0b112;
            }
            if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                uVar10 = FUN_144bdc640(local_770);
                local_7f8 = (uint *)&DAT_00000001;
                uStack_7f0 = FUN_144f50970;
                local_848 = &local_860;
                local_858 = 1;
                pcStack_850 = FUN_144f50970;
                local_7e8 = local_848;
                lVar11 = FUN_144bdc480(uVar10,"Invalid negative version for type #{}.",&local_858,0)
                ;
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x635;
                FUN_144bdc690(local_770);
                *param_1 = 0x80040200;
              }
              else {
                uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                local_7f8 = (uint *)&DAT_00000001;
                uStack_7f0 = FUN_144f50970;
                local_848 = &local_860;
                local_858 = 1;
                pcStack_850 = FUN_144f50970;
                local_7e8 = local_848;
                lVar11 = FUN_144bdc480(uVar10,"Invalid negative version for type #{}.",&local_858,0)
                ;
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x635;
                FUN_144bdc8a0(local_5d8);
                *param_1 = 0x80040200;
              }
              goto LAB_144c0cb14;
            }
          }
          else if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
            cVar7 = FUN_144bdbf80();
            if (cVar7 == '\0') {
              uVar10 = FUN_144bdc640(local_770);
              local_858 = 2;
              pcStack_850 = FUN_144f50b20;
              local_848 = (uint **)&local_868;
              pcStack_840 = FUN_144f50970;
              local_838 = &local_860;
              local_7a8 = 2;
              pcStack_7a0 = FUN_144f50b20;
              uStack_790 = 0x44f50970;
              uStack_78c = 1;
              local_798 = local_848;
              local_788 = local_838;
              lVar11 = FUN_144bdc480(uVar10,"Invalid version number {} for type #{}.",&local_7a8,0);
              *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar11 + 0x40) = 0x633;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfc913ab0;
              FUN_144bdc690(local_770);
              *param_1 = 0x80040200;
            }
            else {
              uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
              local_858 = 2;
              pcStack_850 = FUN_144f50b20;
              local_848 = (uint **)&local_868;
              pcStack_840 = FUN_144f50970;
              local_838 = &local_860;
              local_7f8 = (uint *)0x2;
              uStack_7f0 = FUN_144f50b20;
              uStack_7e0 = 0x44f50970;
              uStack_7dc = 1;
              local_7e8 = local_848;
              local_7d8 = local_838;
              lVar11 = FUN_144bdc480(uVar10,"Invalid version number {} for type #{}.",&local_7f8,0);
              *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar11 + 0x40) = 0x633;
              *(undefined4 *)(lVar11 + 0x1c) = 0xfc913ab0;
              FUN_144bdc8a0(local_5d8);
              *param_1 = 0x80040200;
            }
            goto LAB_144c0cb14;
          }
          goto LAB_144c0c5d6;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x630;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x630;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0b112:
    if ((local_res10[0] & 0x100000) != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0xffffffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      uVar9 = FUN_144c07b70(param_2);
      if (0xffffffff < uVar9) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          local_380 = uVar8 & 0xffff | (uVar9 & 0xffff) << 0x10;
          local_428 = local_428 | 0x100000;
          goto LAB_144c0b240;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x63e;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x63e;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0b240:
    if ((local_res10[0] & 0x200000) != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0xffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          local_428 = local_428 | 0x200000;
          local_378 = uVar8 & 0xffff;
          goto LAB_144c0b353;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x64b;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x64b;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0b353:
    if ((local_res10[0] & 0x800000) != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0xffffffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          puVar21 = (uint *)(uVar8 & 0xffff);
          local_720 = uVar8 >> 0x10 & 0xffff;
          iVar30 = (int)local_720;
          local_780 = puVar21;
          if ((longlong)
              ((param_2[1] - *param_2) + (ulonglong)((uint)(param_2[1] - *param_2 >> 0x3f) & 3)) >>
              2 < (longlong)puVar21) {
            if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                uVar10 = FUN_144bdc640(local_770);
                local_res8 = (uint *)0x0;
                lVar11 = FUN_144bdc480(uVar10,"Too many fields",&local_res8,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x658;
                FUN_144bdc690(local_770);
                *param_1 = 0x80040200;
              }
              else {
                uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                local_res8 = (uint *)0x0;
                lVar11 = FUN_144bdc480(uVar10,"Too many fields",&local_res8,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x658;
                FUN_144bdc8a0(local_5d8);
                *param_1 = 0x80040200;
              }
              goto LAB_144c0cb14;
            }
            goto LAB_144c0c5d6;
          }
          local_7f8 = (uint *)FUN_144bf0930(0,puVar21,local_720,param_1 + 0x34);
          local_428 = local_428 | 0x800000;
          lVar11 = 0;
          local_368 = local_7f8;
          if (puVar21 != (uint *)0x0) {
            local_778 = local_7f8 + 2;
            do {
              uVar8 = FUN_144c07b70(param_2);
              if (0xffff < uVar8) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              if ((int)param_1[0x2a] <= (int)((uint)uVar8 & 0xffff)) {
                if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0'))
                goto LAB_144c0c5d6;
                cVar7 = FUN_144bdbf80();
                if (cVar7 == '\0') {
                  uVar10 = FUN_144bdc640(local_770);
                  local_res8 = (uint *)0x0;
                  lVar11 = FUN_144bdc480(uVar10,"Invalid field name string ID (out of bounds).",
                                         &local_res8,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x663;
                  FUN_144bdc690(local_770);
                  *param_1 = 0x80040200;
                }
                else {
                  uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                  local_res8 = (uint *)0x0;
                  lVar11 = FUN_144bdc480(uVar10,"Invalid field name string ID (out of bounds).",
                                         &local_res8,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x663;
                  FUN_144bdc8a0(local_5d8);
                  *param_1 = 0x80040200;
                }
                goto LAB_144c0cb14;
              }
              local_868 = *(uint **)(*(longlong *)(param_1 + 0x28) + (uVar8 & 0xffff) * 8);
              uVar8 = FUN_144c07b70(param_2);
              if (0xffff < uVar8) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              uVar22 = 0;
              if ((char)uVar8 < '\0') {
                uVar8 = (ulonglong)((ushort)uVar8 & 0xff7f);
                *(undefined1 *)local_res20 = 1;
                uVar22 = FUN_144c07b70(param_2);
              }
              uVar9 = FUN_144c07b70(param_2);
              if (0xffff < uVar9) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              uVar12 = FUN_144c07b70(param_2);
              if (0x7fffffff < uVar12) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              if ((char)param_2[3] != '\0') {
                *param_1 = 0x80040200;
LAB_144c0bb0d:
                if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
                  cVar7 = FUN_144bdbf80();
                  if (cVar7 == '\0') {
                    uVar10 = FUN_144bdc640(local_770);
                    local_res8 = (uint *)0x0;
                    lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
                    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    *(undefined8 *)(lVar11 + 0x40) = 0x675;
                    FUN_144bdc690(local_770);
                  }
                  else {
                    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                    local_res8 = (uint *)0x0;
                    lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
                    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    *(undefined8 *)(lVar11 + 0x40) = 0x675;
                    FUN_144bdc8a0(local_5d8);
                  }
                }
                goto LAB_144c0cb14;
              }
              if ((int)*param_1 < 0) goto LAB_144c0bb0d;
              iVar30 = (int)uVar12;
              if ((iVar30 < 1) || ((int)param_1[0x22] <= iVar30)) {
                if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0'))
                goto LAB_144c0c5d6;
                cVar7 = FUN_144bdbf80();
                if (cVar7 == '\0') {
                  local_res8 = (uint *)FUN_144beee40(local_800);
                  uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
                  local_7f8 = (uint *)&DAT_00000001;
                  uStack_7f0 = FUN_144f50c70;
                  local_848 = (uint **)&local_res8;
                  local_858 = 1;
                  pcStack_850 = FUN_144f50c70;
                  local_7e8 = local_848;
                  lVar11 = FUN_144bdc480(uVar10,
                                         "Invalid field type ID (out of bounds) for type \'{}\'.",
                                         &local_858,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x676;
                  FUN_144bdc690(local_770);
                  *param_1 = 0x80040200;
                }
                else {
                  local_res18 = (uint *)FUN_144beee40(local_800);
                  uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                  local_7f8 = (uint *)&DAT_00000001;
                  uStack_7f0 = FUN_144f50c70;
                  local_848 = (uint **)&local_res18;
                  local_858 = 1;
                  pcStack_850 = FUN_144f50c70;
                  local_7e8 = local_848;
                  lVar11 = FUN_144bdc480(uVar10,
                                         "Invalid field type ID (out of bounds) for type \'{}\'.",
                                         &local_858,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x676;
                  FUN_144bdc8a0(local_5d8);
                  *param_1 = 0x80040200;
                }
                goto LAB_144c0cb14;
              }
              if (((byte)uVar8 & 0x30) != 0x20) {
                if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0'))
                goto LAB_144c0c5d6;
                cVar7 = FUN_144bdbf80();
                if (cVar7 == '\0') {
                  local_res8 = (uint *)FUN_144beee40(local_800);
                  uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
                  local_858 = 2;
                  pcStack_850 = FUN_144f50c70;
                  local_848 = (uint **)&local_res8;
                  pcStack_840 = FUN_144f50c70;
                  local_838 = (uint **)&local_868;
                  local_7a8 = 2;
                  pcStack_7a0 = FUN_144f50c70;
                  uStack_790 = 0x44f50c70;
                  uStack_78c = 1;
                  local_798 = local_848;
                  local_788 = local_838;
                  lVar11 = FUN_144bdc480(uVar10,"Invalid flags on {}::{}",&local_7a8,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x678;
                  FUN_144bdc690(local_770);
                  *param_1 = 0x80040200;
                }
                else {
                  local_res18 = (uint *)FUN_144beee40(local_800);
                  uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                  local_858 = 2;
                  pcStack_850 = FUN_144f50c70;
                  local_848 = (uint **)&local_res18;
                  pcStack_840 = FUN_144f50c70;
                  local_838 = (uint **)&local_868;
                  local_7a8 = 2;
                  pcStack_7a0 = FUN_144f50c70;
                  uStack_790 = 0x44f50c70;
                  uStack_78c = 1;
                  local_798 = local_848;
                  local_788 = local_838;
                  lVar11 = FUN_144bdc480(uVar10,"Invalid flags on {}::{}",&local_7a8,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x678;
                  FUN_144bdc8a0(local_5d8);
                  *param_1 = 0x80040200;
                }
                goto LAB_144c0cb14;
              }
              FUN_144f6faa0(local_268);
              FUN_144f70370(local_268,local_868,uVar9 & 0xffff);
              local_170 = &DAT_14c6ddac0;
              uVar8 = local_208 | 0x40000;
              if (uVar22 != 0) {
                local_160 = (ulonglong)(uVar22 & 0xf) << 0x1c;
                uVar8 = local_208 | 0x140000;
              }
              local_208 = uVar8;
              uVar10 = FUN_144f706a0(local_268,param_1 + 0x34);
              puVar21 = local_778;
              *(undefined8 *)local_778 = uVar10;
              iVar26 = local_708 + 1;
              if ((int)(local_704 & 0x7fffffff) < iVar26) {
                FUN_1401f86b2(&local_710,&PTR_vftable_14c6e47a0,(longlong)iVar26);
              }
              if ((int *)(local_710 + (longlong)local_708 * 4) != (int *)0x0) {
                *(int *)(local_710 + (longlong)local_708 * 4) = iVar30;
              }
              local_708 = iVar26;
              FUN_144f6fbe0(local_268);
              local_778 = puVar21 + 2;
              lVar11 = lVar11 + 1;
            } while (lVar11 < (longlong)local_780);
            iVar30 = (int)local_720;
          }
          puVar16 = local_7f8;
          iVar26 = 0;
          puVar21 = local_800;
          if (iVar30 != 0) {
            do {
              FUN_144f6faa0(local_268);
              FUN_144f6ff10(local_268,&DAT_14c6ddac0);
              FUN_144f70370(local_268,"$PLACEHOLDER$",0,0x11);
              local_208 = local_208 | 0x40000;
              local_170 = &DAT_14c6ddac0;
              uVar10 = FUN_144f706a0(local_268,param_1 + 0x34);
              *(undefined8 *)(puVar16 + (longlong)((short)*puVar16 + iVar26) * 2 + 2) = uVar10;
              FUN_144f6fbe0(local_268);
              iVar26 = iVar26 + 1;
              puVar21 = local_800;
            } while (iVar26 < iVar30);
          }
          goto LAB_144c0b801;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x653;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x653;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0b801:
    iVar30 = 0;
    if ((local_res10[0] & 0x4000) != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0x7fffffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          iVar26 = (int)uVar8;
          if ((param_2[1] - *param_2) / 2 < (longlong)iVar26) {
            if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                uVar10 = FUN_144bdc640(local_770);
                local_res8 = (uint *)0x0;
                lVar11 = FUN_144bdc480(uVar10,"Too many fields",&local_res8,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x69e;
                FUN_144bdc690(local_770);
                *param_1 = 0x80040200;
              }
              else {
                uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                local_res8 = (uint *)0x0;
                lVar11 = FUN_144bdc480(uVar10,"Too many fields",&local_res8,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x69e;
                FUN_144bdc8a0(local_5d8);
                *param_1 = 0x80040200;
              }
              goto LAB_144c0cb14;
            }
            goto LAB_144c0c5d6;
          }
          if (0 < iVar26) {
            do {
              uVar8 = FUN_144c07b70(param_2);
              if (0x7fffffff < uVar8) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              uVar9 = FUN_144c07b70(param_2);
              if (0x7fffffff < uVar9) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              if ((char)param_2[3] != '\0') {
                *param_1 = 0x80040200;
LAB_144c0c0af:
                if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
                  cVar7 = FUN_144bdbf80();
                  if (cVar7 == '\0') {
                    uVar10 = FUN_144bdc640(local_770);
                    local_res8 = (uint *)0x0;
                    lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
                    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    *(undefined8 *)(lVar11 + 0x40) = 0x6a4;
                    FUN_144bdc690(local_770);
                  }
                  else {
                    uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                    local_res8 = (uint *)0x0;
                    lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
                    *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    *(undefined8 *)(lVar11 + 0x40) = 0x6a4;
                    FUN_144bdc8a0(local_5d8);
                  }
                }
                goto LAB_144c0cb14;
              }
              if ((int)*param_1 < 0) goto LAB_144c0c0af;
              iVar27 = (int)uVar8;
              if ((iVar27 < 1) || ((int)param_1[0x22] <= iVar27)) {
                if ((DAT_14c787870 == '\0') && (cVar7 = FUN_144bdbf80(), cVar7 == '\0'))
                goto LAB_144c0c5d6;
                cVar7 = FUN_144bdbf80();
                if (cVar7 == '\0') {
                  local_res8 = (uint *)FUN_144beee40(puVar21);
                  uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
                  local_7f8 = (uint *)&DAT_00000001;
                  uStack_7f0 = FUN_144f50c70;
                  local_848 = (uint **)&local_res8;
                  local_858 = 1;
                  pcStack_850 = FUN_144f50c70;
                  local_7e8 = local_848;
                  lVar11 = FUN_144bdc480(uVar10,
                                         "Invalid interface type ID (out of bounds) for type \'{}\'."
                                         ,&local_858,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x6a5;
                  FUN_144bdc690(local_770);
                  *param_1 = 0x80040200;
                }
                else {
                  local_res18 = (uint *)FUN_144beee40(puVar21);
                  uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                  local_7f8 = (uint *)&DAT_00000001;
                  uStack_7f0 = FUN_144f50c70;
                  local_848 = (uint **)&local_res18;
                  local_858 = 1;
                  pcStack_850 = FUN_144f50c70;
                  local_7e8 = local_848;
                  lVar11 = FUN_144bdc480(uVar10,
                                         "Invalid interface type ID (out of bounds) for type \'{}\'."
                                         ,&local_858,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x6a5;
                  FUN_144bdc8a0(local_5d8);
                  *param_1 = 0x80040200;
                }
                goto LAB_144c0cb14;
              }
              FUN_144f702e0(local_488,0,uVar9 & 0xffffffff);
              iVar1 = local_5e8 + 1;
              if ((int)(local_5e4 & 0x7fffffff) < iVar1) {
                FUN_1401f86b2(&local_5f0,&PTR_vftable_14c6e47a0,(longlong)iVar1);
              }
              if ((int *)(local_5f0 + (longlong)local_5e8 * 4) != (int *)0x0) {
                *(int *)(local_5f0 + (longlong)local_5e8 * 4) = iVar27;
              }
              iVar30 = iVar30 + 1;
              local_5e8 = iVar1;
            } while (iVar30 < iVar26);
          }
          goto LAB_144c0bf26;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x69d;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x69d;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0bf26:
    if ((local_res10[0] & 0x2000000) != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0x7fffffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          if ((int)param_1[0x2e] <= (int)uVar8) {
            if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
              cVar7 = FUN_144bdbf80();
              if (cVar7 == '\0') {
                local_res8 = (uint *)FUN_144beee40(puVar21);
                uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
                local_7f8 = (uint *)&DAT_00000001;
                uStack_7f0 = FUN_144f50c70;
                local_848 = (uint **)&local_res8;
                local_858 = 1;
                pcStack_850 = FUN_144f50c70;
                local_7e8 = local_848;
                lVar11 = FUN_144bdc480(uVar10,
                                       "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                       ,&local_858,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x6b0;
                FUN_144bdc690(local_770);
                *param_1 = 0x80040200;
              }
              else {
                local_res18 = (uint *)FUN_144beee40(puVar21);
                uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
                local_7f8 = (uint *)&DAT_00000001;
                uStack_7f0 = FUN_144f50c70;
                local_848 = (uint **)&local_res18;
                local_858 = 1;
                pcStack_850 = FUN_144f50c70;
                local_7e8 = local_848;
                lVar11 = FUN_144bdc480(uVar10,
                                       "Invalid attribute string ID (out of bounds) for type \'{}\'."
                                       ,&local_858,0);
                *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x6b0;
                FUN_144bdc8a0(local_5d8);
                *param_1 = 0x80040200;
              }
              goto LAB_144c0cb14;
            }
            goto LAB_144c0c5d6;
          }
          local_358 = *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + (longlong)(int)uVar8 * 8);
          local_428 = local_428 | 0x2000000;
          goto LAB_144c0c3bc;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x6af;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x6af;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
LAB_144c0c3bc:
    if ((((*puVar21 & 8) != 0) &&
        (plVar13 = (longlong *)FUN_144befea0(puVar21,8), plVar13 != (longlong *)0x0)) &&
       (*plVar13 != 0)) {
      local_428 = local_428 | 8;
      local_408 = *plVar13;
    }
    if ((((*puVar21 >> 0xf & 1) != 0) &&
        (plVar13 = (longlong *)FUN_144befea0(puVar21,0x8000), plVar13 != (longlong *)0x0)) &&
       ((lVar11 = *plVar13, lVar11 != 0 && (*(short *)(lVar11 + 8) != 0)))) {
      local_428 = local_428 | 0x8000;
      plVar13 = (longlong *)(lVar11 + 0x10);
      plVar31 = plVar13 + (ulonglong)*(ushort *)(lVar11 + 8) * 2;
      local_3a8 = lVar11;
      for (; plVar13 != plVar31; plVar13 = plVar13 + 2) {
        if (*(char *)plVar13[1] == 't') {
          uVar5 = *(undefined4 *)(*plVar13 + 0x30);
          iVar30 = local_678 + 1;
          if ((int)(local_674 & 0x7fffffff) < iVar30) {
            FUN_1401f86b2(&local_680,&PTR_vftable_14c6e47a0,(longlong)iVar30);
          }
          if ((undefined4 *)(local_680 + (longlong)local_678 * 4) != (undefined4 *)0x0) {
            *(undefined4 *)(local_680 + (longlong)local_678 * 4) = uVar5;
          }
          *plVar13 = 0;
          local_678 = iVar30;
        }
      }
    }
    puVar21 = local_res18;
    if ((local_res10[0] & 0x10000000) != 0) {
      local_428 = local_428 | 0x10000000;
      local_340 = 0;
    }
    puVar16 = (uint *)0x0;
    piVar14 = (int *)FUN_144f704f0(local_488,&local_res20,param_1 + 0x34,local_res18);
    if (-1 < *piVar14) {
      if ((((**(uint **)puVar21 >> 0x17 & 1) != 0) &&
          (plVar13 = (longlong *)FUN_144befea0(*(uint **)puVar21,0x800000),
          plVar13 != (longlong *)0x0)) &&
         (puVar17 = (undefined8 *)*plVar13, puVar17 != (undefined8 *)0x0)) {
        puVar4 = puVar17 + (longlong)*(short *)((longlong)puVar17 + 4) + 1;
        while (puVar17 = puVar17 + 1, puVar17 != puVar4) {
          uVar10 = *(undefined8 *)puVar21;
          puVar15 = (undefined8 *)FUN_144befed0(*puVar17,0x40000);
          *puVar15 = uVar10;
        }
      }
      puVar21 = *(uint **)puVar21;
      *(uint **)(*(longlong *)(param_1 + 4) + (longlong)(int)local_860 * 8) = puVar21;
      uVar22 = param_1[6];
      lVar11 = *(longlong *)(param_1 + 4);
      uVar23 = param_1[0x32];
      if (uVar23 != 0) {
        do {
          lVar24 = (longlong)(int)uVar23 * 0x10 + *(longlong *)(param_1 + 0x30);
          iVar30 = *(int *)(lVar24 + -8);
          if (((int)((longlong)(int)uVar22 * 8 >> 3) <= iVar30) ||
             (lVar6 = *(longlong *)(lVar11 + (longlong)iVar30 * 8), lVar6 == 0)) break;
          **(longlong **)(lVar24 + -0x10) = lVar6;
          puVar3 = param_1 + 0x32;
          *puVar3 = *puVar3 - 1;
          uVar23 = param_1[0x32];
        } while (*puVar3 != 0);
      }
      puVar28 = *(uint **)(param_1 + 4);
      puVar3 = param_1 + 0x30;
      local_800 = *(uint **)(param_1 + 0x20);
      puVar29 = puVar28 + (longlong)(int)param_1[6] * 2;
      local_res20 = puVar28;
      local_868 = puVar29;
      local_780 = puVar21;
      if (0 < local_718) {
        puVar2 = puVar21 + 2;
        if ((local_718 < (int)((longlong)(int)param_1[6] * 8 >> 3)) &&
           (*(longlong *)(puVar28 + (longlong)local_718 * 2) != 0)) {
          *(longlong *)puVar2 = *(longlong *)(puVar28 + (longlong)local_718 * 2);
        }
        else {
          *(undefined8 *)puVar2 = *(undefined8 *)(local_800 + (longlong)local_718 * 2);
          uVar22 = param_1[0x32] + 1;
          uStack_7f0 = (code *)CONCAT44(uStack_7f0._4_4_,local_718);
          local_7f8 = puVar2;
          if ((int)(param_1[0x33] & 0x7fffffff) < (int)uVar22) {
            FUN_144c141f0(puVar3,&PTR_vftable_14c6e47a0,(longlong)(int)uVar22);
          }
          puVar19 = (undefined4 *)((longlong)(int)param_1[0x32] * 0x10 + *(longlong *)puVar3);
          if (puVar19 != (undefined4 *)0x0) {
            *puVar19 = (undefined4)local_7f8;
            puVar19[1] = local_7f8._4_4_;
            puVar19[2] = (undefined4)uStack_7f0;
            puVar19[3] = uStack_7f0._4_4_;
          }
          param_1[0x32] = uVar22;
        }
      }
      puVar2 = local_800;
      if (0 < local_714) {
        if ((*puVar21 & 2) != 0) {
          puVar16 = (uint *)FUN_144befea0(puVar21,2);
        }
        if ((local_714 < (int)((longlong)puVar29 - (longlong)puVar28 >> 3)) &&
           (*(longlong *)(puVar28 + (longlong)local_714 * 2) != 0)) {
          *(longlong *)puVar16 = *(longlong *)(puVar28 + (longlong)local_714 * 2);
        }
        else {
          uStack_7f0 = (code *)CONCAT44(uStack_7f0._4_4_,local_714);
          *(undefined8 *)puVar16 = *(undefined8 *)(puVar2 + (longlong)local_714 * 2);
          uVar22 = param_1[0x32] + 1;
          local_7f8 = puVar16;
          if ((int)(param_1[0x33] & 0x7fffffff) < (int)uVar22) {
            FUN_144c141f0(puVar3,&PTR_vftable_14c6e47a0,(longlong)(int)uVar22);
          }
          puVar19 = (undefined4 *)((longlong)(int)param_1[0x32] * 0x10 + *(longlong *)puVar3);
          if (puVar19 != (undefined4 *)0x0) {
            *puVar19 = (undefined4)local_7f8;
            puVar19[1] = local_7f8._4_4_;
            puVar19[2] = (undefined4)uStack_7f0;
            puVar19[3] = uStack_7f0._4_4_;
          }
          param_1[0x32] = uVar22;
        }
      }
      puVar16 = param_1;
      if (local_708 != 0) {
        if (((*puVar21 >> 0x17 & 1) == 0) ||
           (puVar17 = (undefined8 *)FUN_144befea0(puVar21,0x800000), puVar17 == (undefined8 *)0x0))
        {
          psVar25 = (short *)0x0;
        }
        else {
          psVar25 = (short *)*puVar17;
        }
        uVar8 = 0;
        puVar28 = local_res20;
        if (0 < *psVar25) {
          lVar11 = (longlong)puVar29 - (longlong)local_res20;
          uVar9 = uVar8;
          uVar12 = uVar8;
          do {
            puVar21 = (uint *)(*(longlong *)(uVar8 + 8 + (longlong)psVar25) + 8);
            iVar30 = *(int *)(local_710 + uVar12);
            if ((iVar30 < (int)(lVar11 >> 3)) &&
               (*(longlong *)(local_res20 + (longlong)iVar30 * 2) != 0)) {
              *(longlong *)puVar21 = *(longlong *)(local_res20 + (longlong)iVar30 * 2);
            }
            else {
              uStack_7f0 = (code *)CONCAT44(uStack_7f0._4_4_,iVar30);
              *(undefined8 *)puVar21 = *(undefined8 *)(local_800 + (longlong)iVar30 * 2);
              uVar22 = param_1[0x32] + 1;
              local_7f8 = puVar21;
              if ((int)(param_1[0x33] & 0x7fffffff) < (int)uVar22) {
                FUN_144c141f0(puVar3,&PTR_vftable_14c6e47a0,(longlong)(int)uVar22);
              }
              puVar19 = (undefined4 *)((longlong)(int)param_1[0x32] * 0x10 + *(longlong *)puVar3);
              if (puVar19 != (undefined4 *)0x0) {
                *puVar19 = (undefined4)local_7f8;
                puVar19[1] = local_7f8._4_4_;
                puVar19[2] = (undefined4)uStack_7f0;
                puVar19[3] = uStack_7f0._4_4_;
              }
              param_1[0x32] = uVar22;
            }
            uVar22 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar22;
            uVar8 = uVar8 + 8;
            uVar12 = uVar12 + 4;
            puVar16 = local_res8;
            puVar28 = local_res20;
            puVar21 = local_780;
          } while ((int)uVar22 < (int)*psVar25);
        }
      }
      if (local_678 != 0) {
        if (((*puVar21 >> 0xf & 1) == 0) ||
           (puVar17 = (undefined8 *)FUN_144befea0(puVar21,0x8000), puVar17 == (undefined8 *)0x0)) {
          local_778 = (uint *)0x0;
        }
        else {
          local_778 = (uint *)*puVar17;
        }
        uVar8 = 0;
        puVar21 = local_778 + 4;
        if (0 < local_678) {
          lVar11 = (longlong)local_868 - (longlong)puVar28;
          puVar29 = puVar21;
          uVar9 = uVar8;
          do {
            if (puVar29 != puVar21 + (ulonglong)(local_778[2] & 0xffff) * 4) {
              do {
                if (**(char **)(puVar29 + 2) == 't') break;
                puVar29 = puVar29 + 4;
              } while (puVar29 != puVar21 + (ulonglong)(local_778[2] & 0xffff) * 4);
            }
            iVar30 = *(int *)(local_680 + uVar9);
            if ((iVar30 < (int)(lVar11 >> 3)) &&
               (*(longlong *)(puVar28 + (longlong)iVar30 * 2) != 0)) {
              *(longlong *)puVar29 = *(longlong *)(puVar28 + (longlong)iVar30 * 2);
            }
            else {
              uStack_7f0 = (code *)CONCAT44(uStack_7f0._4_4_,iVar30);
              *(undefined8 *)puVar29 = *(undefined8 *)(local_800 + (longlong)iVar30 * 2);
              uVar22 = param_1[0x32] + 1;
              local_7f8 = puVar29;
              if ((int)(param_1[0x33] & 0x7fffffff) < (int)uVar22) {
                FUN_144c141f0(puVar3,&PTR_vftable_14c6e47a0,(longlong)(int)uVar22);
              }
              puVar19 = (undefined4 *)((longlong)(int)param_1[0x32] * 0x10 + *(longlong *)puVar3);
              if (puVar19 != (undefined4 *)0x0) {
                *puVar19 = (undefined4)local_7f8;
                puVar19[1] = local_7f8._4_4_;
                puVar19[2] = (undefined4)uStack_7f0;
                puVar19[3] = uStack_7f0._4_4_;
              }
              param_1[0x32] = uVar22;
              puVar28 = local_res20;
            }
            puVar29 = puVar29 + 4;
            uVar22 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar22;
            uVar9 = uVar9 + 4;
            puVar16 = local_res8;
          } while ((int)uVar22 < local_678);
        }
      }
      uVar8 = 0;
      if (local_5e8 != 0) {
        uVar9 = uVar8;
        if (((*local_780 >> 0xe & 1) != 0) &&
           (puVar18 = (ulonglong *)FUN_144befea0(local_780,0x4000), puVar18 != (ulonglong *)0x0)) {
          uVar9 = *puVar18;
        }
        puVar21 = local_res20;
        puVar29 = (uint *)(uVar9 + 8);
        if (0 < local_5e8) {
          local_868 = (uint *)((longlong)local_868 - (longlong)local_res20 >> 3);
          uVar9 = uVar8;
          do {
            iVar30 = *(int *)(local_5f0 + uVar8);
            if ((iVar30 < (int)local_868) && (*(longlong *)(puVar21 + (longlong)iVar30 * 2) != 0)) {
              *(longlong *)puVar29 = *(longlong *)(puVar21 + (longlong)iVar30 * 2);
            }
            else {
              uStack_7f0 = (code *)CONCAT44(uStack_7f0._4_4_,iVar30);
              *(undefined8 *)puVar29 = *(undefined8 *)(local_800 + (longlong)iVar30 * 2);
              uVar22 = param_1[0x32] + 1;
              local_7f8 = puVar29;
              if ((int)(param_1[0x33] & 0x7fffffff) < (int)uVar22) {
                FUN_144c141f0(puVar3,&PTR_vftable_14c6e47a0,(longlong)(int)uVar22);
              }
              puVar19 = (undefined4 *)((longlong)(int)param_1[0x32] * 0x10 + *(longlong *)puVar3);
              if (puVar19 != (undefined4 *)0x0) {
                *puVar19 = (undefined4)local_7f8;
                puVar19[1] = local_7f8._4_4_;
                puVar19[2] = (undefined4)uStack_7f0;
                puVar19[3] = uStack_7f0._4_4_;
              }
              param_1[0x32] = uVar22;
            }
            uVar22 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar22;
            uVar8 = uVar8 + 4;
            puVar29 = puVar29 + 4;
            puVar16 = local_res8;
          } while ((int)uVar22 < local_5e8);
        }
      }
      if (*(code **)(puVar16 + 0xa4) != (code *)0x0) {
        (**(code **)(puVar16 + 0xa4))(*(undefined8 *)local_res18);
      }
      goto LAB_144c0cb14;
    }
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        uVar10 = FUN_144bdc640(local_770);
        local_res8 = (uint *)0x0;
        lVar11 = FUN_144bdc480(uVar10,"Failed to allocate type from builder",&local_res8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x6de;
        FUN_144bdc690(local_770);
        *param_1 = 0x80040200;
        goto LAB_144c0cb14;
      }
      uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
      local_res8 = (uint *)0x0;
      lVar11 = FUN_144bdc480(uVar10,"Failed to allocate type from builder",&local_res8,0);
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar11 + 0x40) = 0x6de;
      FUN_144bdc8a0(local_5d8);
    }
  }
  else {
    if (iVar30 != 0) {
      uVar8 = FUN_144c07b70(param_2);
      if (0x7fffffff < uVar8) {
        *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
      }
      if ((char)param_2[3] == '\0') {
        if (-1 < (int)*param_1) {
          iVar30 = (int)uVar8;
          if (-1 < iVar30) {
            local_428 = local_428 | 2;
            if (iVar30 < (int)param_1[0x22]) {
              local_418 = (undefined1 *)0x0;
              local_714 = iVar30;
            }
            else {
              local_418 = &DAT_14c6ddac0;
            }
            goto LAB_144c0ad56;
          }
          if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
            cVar7 = FUN_144bdbf80();
            if (cVar7 == '\0') {
              local_res8 = (uint *)FUN_144beee40(puVar21);
              uVar10 = FUN_144bdc640(local_770,&DAT_14c787820,1);
              local_7f8 = (uint *)&DAT_00000001;
              uStack_7f0 = FUN_144f50c70;
              local_848 = (uint **)&local_res8;
              local_858 = 1;
              pcStack_850 = FUN_144f50c70;
              local_7e8 = local_848;
              lVar11 = FUN_144bdc480(uVar10,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                                     &local_858,0);
              *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar11 + 0x40) = 0x619;
              FUN_144bdc690(local_770);
              *param_1 = 0x80040200;
            }
            else {
              local_res18 = (uint *)FUN_144beee40(puVar21);
              uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
              local_7f8 = (uint *)&DAT_00000001;
              uStack_7f0 = FUN_144f50c70;
              local_848 = (uint **)&local_res18;
              local_858 = 1;
              pcStack_850 = FUN_144f50c70;
              local_7e8 = local_848;
              lVar11 = FUN_144bdc480(uVar10,"Invalid sub-type ID (out of bounds) for type \'{}\'.",
                                     &local_858,0);
              *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar11 + 0x40) = 0x619;
              FUN_144bdc8a0(local_5d8);
              *param_1 = 0x80040200;
            }
            goto LAB_144c0cb14;
          }
          goto LAB_144c0c5d6;
        }
      }
      else {
        *param_1 = 0x80040200;
      }
      if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
        cVar7 = FUN_144bdbf80();
        if (cVar7 == '\0') {
          uVar10 = FUN_144bdc640(local_770);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x618;
          FUN_144bdc690(local_770);
        }
        else {
          uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
          local_res8 = (uint *)0x0;
          lVar11 = FUN_144bdc480(uVar10,"Error in input stream.",&local_res8,0);
          *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x618;
          FUN_144bdc8a0(local_5d8);
        }
      }
      goto LAB_144c0cb14;
    }
    if ((DAT_14c787870 != '\0') || (cVar7 = FUN_144bdbf80(), cVar7 != '\0')) {
      cVar7 = FUN_144bdbf80();
      if (cVar7 == '\0') {
        uVar10 = FUN_144bdc640(local_770);
        local_7f8 = (uint *)&DAT_00000001;
        uStack_7f0 = FUN_144f50970;
        local_7e8 = &local_860;
        local_7a8 = 1;
        pcStack_7a0 = FUN_144f50970;
        local_798 = local_7e8;
        lVar11 = FUN_144bdc480(uVar10,
                               "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                               &local_7a8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x615;
        *(undefined4 *)(lVar11 + 0x1c) = 0x1aff8e1a;
        FUN_144bdc690(local_770);
        *param_1 = 0x80040200;
      }
      else {
        uVar10 = FUN_144bdc810(local_5d8,&DAT_14c787820,1);
        local_7f8 = (uint *)&DAT_00000001;
        uStack_7f0 = FUN_144f50970;
        local_848 = &local_860;
        local_858 = 1;
        pcStack_850 = FUN_144f50970;
        local_7e8 = local_848;
        lVar11 = FUN_144bdc480(uVar10,
                               "Invalid type #{} with Opt::SUBTYPE optional but no Opt::FORMAT.",
                               &local_858,0);
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x615;
        *(undefined4 *)(lVar11 + 0x1c) = 0x1aff8e1a;
        FUN_144bdc8a0(local_5d8);
        *param_1 = 0x80040200;
      }
      goto LAB_144c0cb14;
    }
  }
LAB_144c0c5d6:
  *param_1 = 0x80040200;
LAB_144c0cb14:
  local_5e8 = 0;
  if ((-1 < (int)local_5e4) && (local_5f0 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_5f0,(ulonglong)(local_5e4 & 0x7fffffff) << 2);
  }
  local_5f0 = (undefined1 *)0x0;
  local_5e4 = 0x80000000;
  local_678 = 0;
  if ((-1 < (int)local_674) && (local_680 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_680,(ulonglong)(local_674 & 0x7fffffff) << 2);
  }
  local_680 = (undefined1 *)0x0;
  local_674 = 0x80000000;
  local_708 = 0;
  if ((-1 < (int)local_704) && (local_710 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_710,(ulonglong)(local_704 & 0x7fffffff) << 2);
  }
  local_710 = (undefined1 *)0x0;
  local_704 = 0x80000000;
  FUN_144f6fbe0(local_488);
  return;
}



// FUNCTION 144c0ce50 FUN_144c0ce50 body=4604 status=ok
// SIG undefined FUN_144c0ce50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144c0ce50(int *param_1,longlong *param_2,undefined8 param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong *puVar4;
  char *pcVar5;
  char ******ppppppcVar6;
  char *******pppppppcVar7;
  char ******ppppppcVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  int *piVar14;
  ulonglong *puVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong *puVar19;
  longlong lVar20;
  char ******local_res8;
  char *******local_res10;
  int local_res20 [2];
  longlong local_248;
  longlong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  char *******local_228;
  code *local_220;
  longlong *local_218;
  code *local_210;
  char *******local_208;
  longlong *local_1e8;
  char ******local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  iVar18 = param_1[0x22];
  lVar20 = (longlong)iVar18;
  uVar10 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar10) {
    *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
  }
  if ((char)param_2[3] != '\0') {
    *param_1 = -0x7ffbfe00;
LAB_144c0ceab:
    if ((DAT_14c787870 != '\0') || (cVar9 = FUN_144bdbf80(), cVar9 != '\0')) {
      cVar9 = FUN_144bdbf80();
      if (cVar9 == '\0') {
        uVar11 = FUN_144bdc640(&local_238);
        local_res8 = (char ******)0x0;
        lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
        *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar20 + 0x40) = 0x884;
        FUN_144bdc690(&local_238);
      }
      else {
        uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
        local_res8 = (char ******)0x0;
        lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
        *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar20 + 0x40) = 0x884;
        FUN_144bdc8a0(local_188);
      }
    }
    return;
  }
  if (*param_1 < 0) goto LAB_144c0ceab;
  iVar16 = (int)uVar10;
  if (iVar16 < iVar18) {
    if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) goto LAB_144c0deb5;
    cVar9 = FUN_144bdbf80();
    if (cVar9 == '\0') {
      uVar11 = FUN_144bdc640(&local_238);
      local_res8 = (char ******)0x0;
      lVar20 = FUN_144bdc480(uVar11,"Cannot remove types.",&local_res8,0);
      *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar20 + 0x40) = 0x887;
      FUN_144bdc690(&local_238);
      *param_1 = -0x7ffbfe00;
      return;
    }
    uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
    local_res8 = (char ******)0x0;
    lVar20 = FUN_144bdc480(uVar11,"Cannot remove types.",&local_res8,0);
    *(undefined8 *)(lVar20 + 0x40) = 0x887;
  }
  else {
    if (iVar16 == iVar18) {
      return;
    }
    iVar17 = iVar16 - iVar18;
    if ((longlong)iVar17 <= param_2[1] - *param_2) {
      if ((int)(param_1[0x23] & 0x7fffffffU) < iVar16) {
        FUN_144c13de0(param_1 + 0x20,&PTR_vftable_14c6e47a0,(longlong)iVar16);
      }
      iVar3 = param_1[0x22];
      if (iVar3 < iVar16) {
        param_1[0x22] = iVar16;
        uVar10 = (ulonglong)(uint)(iVar16 - iVar3);
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 8);
        if (0 < iVar16 - iVar3) {
          do {
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
            }
            uVar10 = uVar10 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar10 != 0);
        }
      }
      else if (iVar16 < iVar3) {
        param_1[0x22] = iVar16;
      }
      local_res8 = (char ******)(param_1 + 0x52);
      if ((*(int *)local_res8 == 2) && ((int)(param_1[0x57] & 0x7fffffffU) < iVar16)) {
        FUN_144c13870(param_1 + 0x54,&PTR_vftable_14c6e47a0,(longlong)iVar16);
      }
      local_1e8 = (longlong *)(param_1 + 0x34);
      lVar12 = (**(code **)(*local_1e8 + 8))(local_1e8,(longlong)iVar17 * 0x38);
      local_248 = (longlong)iVar16;
      if (lVar20 < local_248) {
        puVar13 = (undefined8 *)(lVar12 + 0x18);
        lVar12 = lVar20;
        iVar16 = iVar18;
        do {
          puVar1 = puVar13 + -3;
          if (puVar1 != (undefined8 *)0x0) {
            puVar13[-1] = 1;
            *puVar13 = 0;
            puVar13[1] = 0;
            puVar13[2] = 0;
            puVar13[-2] = 0;
            *(int *)(puVar13 + 3) = iVar16;
            *puVar1 = 0x100001;
          }
          puVar13 = puVar13 + 7;
          iVar16 = iVar16 + 1;
          *(undefined8 **)(*(longlong *)(param_1 + 0x20) + lVar12 * 8) = puVar1;
          lVar12 = lVar12 + 1;
        } while (lVar12 < local_248);
        local_1e8 = (longlong *)(param_1 + 0x34);
        local_res8 = (char ******)(param_1 + 0x52);
      }
      param_1[0x86] = param_1[0x86] + iVar17;
      if (param_4 == 0) {
        iVar16 = 1;
        local_res8 = (char ******)(param_1 + 0x52);
        local_1e8 = (longlong *)(param_1 + 0x34);
        if (1 < iVar18) {
          do {
            FUN_144c07b70(param_2);
            uVar10 = FUN_144c07b70(param_2);
            if (0x7fffffff < uVar10) {
              *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
            }
            if ((char)param_2[3] != '\0') {
              *param_1 = -0x7ffbfe00;
LAB_144c0d2f7:
              if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
                return;
              }
              cVar9 = FUN_144bdbf80();
              if (cVar9 == '\0') {
                uVar11 = FUN_144bdc640(&local_238);
                local_res8 = (char ******)0x0;
                lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
                *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar20 + 0x40) = 0x8ac;
                FUN_144bdc690(&local_238);
                return;
              }
              uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
              local_res8 = (char ******)0x0;
              lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
              *(undefined8 *)(lVar20 + 0x40) = 0x8ac;
              goto LAB_144c0e01e;
            }
            if (*param_1 < 0) goto LAB_144c0d2f7;
            if (0 < (int)uVar10) {
              uVar10 = uVar10 & 0xffffffff;
              do {
                FUN_144c07b70(param_2);
                FUN_144c07b70(param_2);
                uVar10 = uVar10 - 1;
              } while (uVar10 != 0);
            }
            iVar16 = iVar16 + 1;
          } while (iVar16 < iVar18);
        }
        local_1e8 = (longlong *)(param_1 + 0x34);
        local_res8 = (char ******)(param_1 + 0x52);
        if ((char)param_2[3] == '\0') {
          if (-1 < *param_1) goto LAB_144c0d45e;
        }
        else {
          *param_1 = -0x7ffbfe00;
        }
        if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
          return;
        }
        cVar9 = FUN_144bdbf80();
        if (cVar9 == '\0') {
          uVar11 = FUN_144bdc640(&local_238);
          local_res8 = (char ******)0x0;
          lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
          *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar20 + 0x40) = 0x8b3;
          FUN_144bdc690(&local_238);
          return;
        }
        uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
        local_res8 = (char ******)0x0;
        lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res8,0);
        *(undefined8 *)(lVar20 + 0x40) = 0x8b3;
      }
      else {
LAB_144c0d45e:
        ppppppcVar6 = local_res8;
        if (local_248 <= lVar20) {
          return;
        }
        while( true ) {
          puVar4 = *(ulonglong **)(*(longlong *)(param_1 + 0x20) + lVar20 * 8);
          local_240 = lVar20;
          uVar10 = FUN_144c07b70(param_2);
          if (0x7fffffff < uVar10) {
            *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
          }
          local_res8 = (char ******)CONCAT44(local_res8._4_4_,(int)uVar10);
          if ((char)param_2[3] != '\0') break;
          if (*param_1 < 0) goto LAB_144c0df79;
          if (*(int *)ppppppcVar6 == 2) {
            iVar18 = param_1[0x56] + 1;
            if ((int)(param_1[0x57] & 0x7fffffffU) < iVar18) {
              FUN_144c144a0(param_1 + 0x54,&PTR_vftable_14c6e47a0,(longlong)iVar18);
              uVar10 = (ulonglong)local_res8 & 0xffffffff;
            }
            puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0x54) + (longlong)param_1[0x56] * 0x18);
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = (int)uVar10;
              *(undefined8 *)(puVar2 + 2) = 0;
              puVar2[4] = 0;
              puVar2[1] = 1;
              puVar2[5] = 0x80000000;
              uVar10 = (ulonglong)local_res8 & 0xffffffff;
            }
            param_1[0x56] = iVar18;
          }
          iVar18 = (int)uVar10;
          if (iVar18 != -1) {
            if (param_1[0x26] <= iVar18) {
              if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
              goto LAB_144c0deb5;
              cVar9 = FUN_144bdbf80();
              if (cVar9 == '\0') {
                uVar11 = FUN_144bdc640(local_1d8);
                local_238 = 1;
                uStack_230 = FUN_144f50970;
                local_228 = &local_res8;
                lVar20 = FUN_144bdc480(uVar11,"Invalid type name string ID #{} (out of bounds).",
                                       &local_238,0);
                *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar20 + 0x40) = 0x8cb;
                FUN_144bdc690(local_1d8);
                *param_1 = -0x7ffbfe00;
                return;
              }
              uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
              local_238 = 1;
              uStack_230 = FUN_144f50970;
              local_228 = &local_res8;
              lVar20 = FUN_144bdc480(uVar11,"Invalid type name string ID #{} (out of bounds).",
                                     &local_238,0);
              *(undefined8 *)(lVar20 + 0x40) = 0x8cb;
              goto LAB_144c0dea1;
            }
            pcVar5 = *(char **)(*(longlong *)(param_1 + 0x24) + (longlong)iVar18 * 8);
            if (*pcVar5 != '\0') {
              *puVar4 = *puVar4 | 8;
              puVar4[3] = (ulonglong)pcVar5;
            }
          }
          uVar10 = FUN_144c07b70(param_2);
          if (0x7fffffff < uVar10) {
            *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
          }
          if ((char)param_2[3] != '\0') {
            *param_1 = -0x7ffbfe00;
LAB_144c0dec6:
            if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
              return;
            }
            cVar9 = FUN_144bdbf80();
            if (cVar9 == '\0') {
              uVar11 = FUN_144bdc640(local_1d8);
              local_res10 = (char *******)0x0;
              lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res10,0);
              *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar20 + 0x40) = 0x8d6;
              FUN_144bdc690(local_1d8);
              return;
            }
            uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
            local_res10 = (char *******)0x0;
            lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res10,0);
            *(undefined8 *)(lVar20 + 0x40) = 0x8d6;
            goto LAB_144c0e01e;
          }
          if (*param_1 < 0) goto LAB_144c0dec6;
          iVar18 = (int)uVar10;
          if (0 < iVar18) {
            lVar20 = (longlong)iVar18;
            if ((param_2[1] - *param_2) / 2 < lVar20) {
              if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
              goto LAB_144c0deb5;
              cVar9 = FUN_144bdbf80();
              if (cVar9 == '\0') {
                uVar11 = FUN_144bdc640(local_1d8);
                local_res10 = (char *******)0x0;
                lVar20 = FUN_144bdc480(uVar11,"Invalid template",&local_res10,0);
                *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar20 + 0x40) = 0x8d9;
                FUN_144bdc690(local_1d8);
                *param_1 = -0x7ffbfe00;
                return;
              }
              uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
              local_res10 = (char *******)0x0;
              lVar20 = FUN_144bdc480(uVar11,"Invalid template",&local_res10,0);
              *(undefined8 *)(lVar20 + 0x40) = 0x8d9;
              goto LAB_144c0dea1;
            }
            puVar13 = (undefined8 *)(**(code **)(*local_1e8 + 8))(local_1e8,(lVar20 + 1) * 0x10);
            puVar13[1] = lVar20;
            *puVar13 = 0;
            *puVar4 = *puVar4 | 0x8000;
            puVar4[4] = (ulonglong)puVar13;
            if ((*(int *)ppppppcVar6 == 2) &&
               (lVar12 = *(longlong *)(param_1 + 0x54) + (longlong)param_1[0x56] * 0x18,
               (int)(*(uint *)(lVar12 + -4) & 0x7fffffff) < iVar18)) {
              FUN_144c139c0(lVar12 + -0x10,&PTR_vftable_14c6e47a0,lVar20);
            }
            puVar15 = puVar13 + 2;
            puVar19 = puVar15 + puVar13[1] * 2;
            for (; puVar15 != puVar19; puVar15 = puVar15 + 2) {
              uVar10 = FUN_144c07b70(param_2);
              if (0x7fffffff < uVar10) {
                *(byte *)(param_2 + 3) = *(byte *)(param_2 + 3) | 2;
              }
              local_res20[0] = (int)uVar10;
              local_1e0 = (char ******)FUN_144c07b70(param_2);
              ppppppcVar8 = (char ******)uStack_230;
              if ((char)param_2[3] != '\0') {
                *param_1 = -0x7ffbfe00;
LAB_144c0dd4e:
                if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
                  return;
                }
                cVar9 = FUN_144bdbf80();
                if (cVar9 == '\0') {
                  uVar11 = FUN_144bdc640(local_1d8);
                  local_248 = 0;
                  lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_248,0);
                  *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar20 + 0x40) = 0x8ea;
                  FUN_144bdc690(local_1d8);
                  return;
                }
                uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                local_248 = 0;
                lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_248,0);
                *(undefined8 *)(lVar20 + 0x40) = 0x8ea;
                goto LAB_144c0e01e;
              }
              if (*param_1 < 0) goto LAB_144c0dd4e;
              uStack_230._0_4_ = (int)local_1e0;
              iVar18 = (int)uStack_230;
              if (*(int *)ppppppcVar6 == 2) {
                lVar20 = *(longlong *)(param_1 + 0x54) + (longlong)param_1[0x56] * 0x18;
                iVar16 = *(int *)(*(longlong *)(param_1 + 0x54) + -8 +
                                 (longlong)param_1[0x56] * 0x18);
                piVar14 = (int *)((longlong)iVar16 * 0x10 + *(longlong *)(lVar20 + -0x10));
                if (piVar14 != (int *)0x0) {
                  local_238._4_4_ = local_res20[0] >> 0x1f;
                  uStack_230._4_4_ = (int)((ulonglong)local_1e0 >> 0x20);
                  *piVar14 = local_res20[0];
                  piVar14[1] = local_238._4_4_;
                  piVar14[2] = (int)uStack_230;
                  piVar14[3] = uStack_230._4_4_;
                }
                *(int *)(lVar20 + -8) = iVar16 + 1;
                local_238 = (longlong)local_res20[0];
                ppppppcVar8 = local_1e0;
              }
              uStack_230 = (code *)ppppppcVar8;
              local_res10 = *(char ********)
                             (*(longlong *)(param_1 + 0x24) + (longlong)local_res20[0] * 8);
              if ((local_res20[0] < 0) || (param_1[0x26] <= local_res20[0])) {
                if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
                goto LAB_144c0deb5;
                cVar9 = FUN_144bdbf80();
                if (cVar9 == '\0') {
                  local_248 = FUN_144beee40(puVar4);
                  uVar11 = FUN_144bdc640(local_1d8,&DAT_14c787820,1);
                  local_238 = 2;
                  uStack_230 = FUN_144f50970;
                  local_228 = (char *******)local_res20;
                  local_220 = FUN_144f50c70;
                  local_218 = &local_248;
                  lVar20 = FUN_144bdc480(uVar11,
                                         "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                         ,&local_238,0);
                  *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar20 + 0x40) = 0x8f5;
                  FUN_144bdc690(local_1d8);
                  *param_1 = -0x7ffbfe00;
                  return;
                }
                local_240 = FUN_144beee40(puVar4);
                uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                local_238 = 2;
                uStack_230 = FUN_144f50970;
                local_228 = (char *******)local_res20;
                local_220 = FUN_144f50c70;
                local_218 = &local_240;
                lVar20 = FUN_144bdc480(uVar11,
                                       "Invalid template parameter name string ID #{} (out of bounds) for type \'{}\'."
                                       ,&local_238,0);
                *(undefined8 *)(lVar20 + 0x40) = 0x8f5;
                goto LAB_144c0dea1;
              }
              if ((*(char *)local_res10 == '\0') || (*(char *)((longlong)local_res10 + 1) == '\0'))
              {
                if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
                goto LAB_144c0deb5;
                cVar9 = FUN_144bdbf80();
                if (cVar9 == '\0') {
                  local_248 = FUN_144beee40(puVar4);
                  uVar11 = FUN_144bdc640(local_1d8,&DAT_14c787820,1);
                  local_238 = 3;
                  uStack_230 = FUN_144f50970;
                  local_218 = &local_248;
                  local_228 = (char *******)local_res20;
                  local_220 = FUN_144f50c70;
                  local_210 = FUN_144f50c70;
                  local_208 = (char *******)&local_res10;
                  lVar20 = FUN_144bdc480(uVar11,
                                         "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                                         ,&local_238,0);
                  *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar20 + 0x40) = 0x8f8;
                  FUN_144bdc690(local_1d8);
                  *param_1 = -0x7ffbfe00;
                  return;
                }
                local_240 = FUN_144beee40(puVar4);
                uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                local_238 = 3;
                uStack_230 = FUN_144f50970;
                local_218 = &local_240;
                local_228 = (char *******)local_res20;
                local_220 = FUN_144f50c70;
                local_210 = FUN_144f50c70;
                local_208 = (char *******)&local_res10;
                lVar20 = FUN_144bdc480(uVar11,
                                       "Invalid template parameter string ID #{} with empty name for type \'{}\': \'{}\'."
                                       ,&local_238,0);
                *(undefined8 *)(lVar20 + 0x40) = 0x8f8;
                goto LAB_144c0dea1;
              }
              if ((*(char *)local_res10 + 0x8cU & 0xfd) != 0) {
                if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
                goto LAB_144c0deb5;
                cVar9 = FUN_144bdbf80();
                if (cVar9 == '\0') {
                  local_248 = FUN_144beee40(puVar4);
                  pppppppcVar7 = local_res10;
                  uVar11 = FUN_144bdc640(local_1d8,&DAT_14c787820,1);
                  local_238 = 3;
                  uStack_230 = FUN_144f50c70;
                  local_228 = (char *******)&local_res10;
                  local_220 = FUN_144f50c70;
                  local_218 = &local_248;
                  local_208 = pppppppcVar7;
                  local_210 = FUN_144c14680;
                  lVar20 = FUN_144bdc480(uVar11,
                                         "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                         ,&local_238,0);
                  *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar20 + 0x40) = 0x8fc;
                  FUN_144bdc690(local_1d8);
                  *param_1 = -0x7ffbfe00;
                  return;
                }
                local_240 = FUN_144beee40(puVar4);
                pppppppcVar7 = local_res10;
                uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                local_238 = 3;
                uStack_230 = FUN_144f50c70;
                local_228 = (char *******)&local_res10;
                local_220 = FUN_144f50c70;
                local_218 = &local_240;
                local_208 = pppppppcVar7;
                local_210 = FUN_144c14680;
                lVar20 = FUN_144bdc480(uVar11,
                                       "Invalid template parameter name \'{}\' for type \'{}\' (expected \'t\' for type, \'v\' for value; found \'{}\' instead)."
                                       ,&local_238,0);
                *(undefined8 *)(lVar20 + 0x40) = 0x8fc;
                goto LAB_144c0dea1;
              }
              puVar15[1] = (ulonglong)local_res10;
              if (*(char *)local_res10 == 't') {
                if ((local_1e0 == (char ******)0x0) ||
                   ((char ******)(longlong)param_1[0x22] <= local_1e0)) {
                  if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
                  goto LAB_144c0deb5;
                  cVar9 = FUN_144bdbf80();
                  if (cVar9 == '\0') {
                    local_248 = FUN_144beee40(puVar4);
                    uVar11 = FUN_144bdc640(local_1d8,&DAT_14c787820,1);
                    local_238 = 2;
                    uStack_230 = FUN_144f50b20;
                    local_228 = &local_1e0;
                    local_220 = FUN_144f50c70;
                    local_218 = &local_248;
                    lVar20 = FUN_144bdc480(uVar11,
                                           "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                           ,&local_238,0);
                    *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    *(undefined8 *)(lVar20 + 0x40) = 0x904;
                    FUN_144bdc690(local_1d8);
                    *param_1 = -0x7ffbfe00;
                    return;
                  }
                  local_240 = FUN_144beee40(puVar4);
                  uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                  local_238 = 2;
                  uStack_230 = FUN_144f50b20;
                  local_228 = &local_1e0;
                  local_220 = FUN_144f50c70;
                  local_218 = &local_240;
                  lVar20 = FUN_144bdc480(uVar11,
                                         "Invalid template type ID #{} (out of bounds) for type \'{}\'."
                                         ,&local_238,0);
                  *(undefined8 *)(lVar20 + 0x40) = 0x904;
                  goto LAB_144c0dea1;
                }
                *puVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar18 * 8);
              }
              else {
                *puVar15 = (ulonglong)local_1e0;
              }
            }
          }
          lVar20 = local_240 + 1;
          if (local_248 <= lVar20) {
            return;
          }
        }
        *param_1 = -0x7ffbfe00;
LAB_144c0df79:
        if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
          return;
        }
        cVar9 = FUN_144bdbf80();
        if (cVar9 == '\0') {
          uVar11 = FUN_144bdc640(local_1d8);
          local_res10 = (char *******)0x0;
          lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res10,0);
          *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar20 + 0x40) = 0x8bd;
          FUN_144bdc690(local_1d8);
          return;
        }
        uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
        local_res10 = (char *******)0x0;
        lVar20 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res10,0);
        *(undefined8 *)(lVar20 + 0x40) = 0x8bd;
      }
LAB_144c0e01e:
      *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      FUN_144bdc8a0(local_188);
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) goto LAB_144c0deb5;
    cVar9 = FUN_144bdbf80();
    if (cVar9 == '\0') {
      uVar11 = FUN_144bdc640(&local_238);
      local_res8 = (char ******)0x0;
      lVar20 = FUN_144bdc480(uVar11,"More types than would fit in the section",&local_res8,0);
      *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar20 + 0x40) = 0x88e;
      FUN_144bdc690(&local_238);
      *param_1 = -0x7ffbfe00;
      return;
    }
    uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
    local_res8 = (char ******)0x0;
    lVar20 = FUN_144bdc480(uVar11,"More types than would fit in the section",&local_res8,0);
    *(undefined8 *)(lVar20 + 0x40) = 0x88e;
  }
LAB_144c0dea1:
  *(char **)(lVar20 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_188);
LAB_144c0deb5:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 144c0e050 FUN_144c0e050 body=2937 status=ok
// SIG undefined FUN_144c0e050(void)

void FUN_144c0e050(int *param_1,ulonglong *param_2,char *param_3,int param_4)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *pcVar8;
  char cVar9;
  ushort uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  short *psVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  undefined8 *puVar24;
  longlong *plVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  undefined8 *puVar30;
  ulonglong local_res18;
  int local_res20;
  int local_230 [2];
  undefined8 *local_228;
  uint local_220;
  uint local_21c;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  ulonglong *local_1f8;
  undefined1 local_1f0 [80];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined8 *local_190;
  undefined1 local_188 [336];
  
  puVar30 = (undefined8 *)0x0;
  if (*param_3 != '\0') {
    return;
  }
  local_res20 = param_4;
  if (param_1[0x52] == 1) {
    if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) goto LAB_144c0e220;
    cVar9 = FUN_144bdbf80();
    if (cVar9 == '\0') {
      uVar11 = FUN_144bdc640(local_1f0);
      local_res18 = 0;
      lVar12 = FUN_144bdc480(uVar11,"Types cannot be added to when using a compendium.",&local_res18
                             ,0);
      *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar12 + 0x40) = 0x7ab;
      FUN_144bdc690(local_1f0);
      *param_1 = -0x7ffbfe00;
      return;
    }
    uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
    local_res18 = 0;
    lVar12 = FUN_144bdc480(uVar11,"Types cannot be added to when using a compendium.",&local_res18,0
                          );
    *(undefined8 *)(lVar12 + 0x40) = 0x7ab;
  }
  else {
    iVar20 = param_1[6];
    iVar2 = param_1[0x22];
    if (iVar20 < 1) {
      iVar20 = 1;
    }
    if (iVar20 <= iVar2) {
      if ((int)(param_1[7] & 0x7fffffffU) < iVar2) {
        FUN_144c13a80(param_1 + 4,&PTR_vftable_14c6e47a0,(longlong)iVar2);
      }
      iVar20 = param_1[6];
      if (iVar20 < iVar2) {
        param_1[6] = iVar2;
        if (0 < iVar2 - iVar20) {
          uVar15 = (ulonglong)(uint)(iVar2 - iVar20);
          puVar13 = (undefined8 *)(*(longlong *)(param_1 + 4) + (longlong)iVar20 * 8);
          do {
            if (puVar13 != (undefined8 *)0x0) {
              *puVar13 = 0;
            }
            uVar15 = uVar15 - 1;
            puVar13 = puVar13 + 1;
          } while (uVar15 != 0);
        }
      }
      else if (iVar2 < iVar20) {
        param_1[6] = iVar2;
      }
      uVar29 = 0;
      if (local_res20 == 0) {
        if (param_2[1] < *(longlong *)(param_1 + 0x76) + *param_2) {
          *param_2 = param_2[1];
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
        }
        else {
          *param_2 = *(longlong *)(param_1 + 0x76) + *param_2;
        }
        if ((char)param_2[3] != '\0') {
          *param_1 = -0x7ffbfe00;
LAB_144c0e2dd:
          if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) {
            return;
          }
          cVar9 = FUN_144bdbf80();
          if (cVar9 == '\0') {
            uVar11 = FUN_144bdc640(local_1f0);
            local_res18 = 0;
            lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
            *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar12 + 0x40) = 0x7b8;
            FUN_144bdc690(local_1f0);
            return;
          }
          uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_res18 = 0;
          lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
          *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x7b8;
          FUN_144bdc8a0(local_188);
          return;
        }
        if (*param_1 < 0) goto LAB_144c0e2dd;
      }
      pcVar16 = (char *)*param_2;
      iVar20 = param_1[0x86];
      uVar28 = 0;
      local_228 = (undefined8 *)0x0;
      local_220 = 0;
      local_21c = 0x80000000;
      puVar17 = puVar30;
      puVar13 = puVar30;
      uVar27 = uVar29;
      local_230[0] = iVar20;
      if ((char *)param_2[1] != pcVar16 && -1 < (longlong)param_2[1] - (longlong)pcVar16) {
        do {
          uVar27 = (uint)puVar17;
          if (*pcVar16 == '\0') break;
          if (iVar20 < 1) {
            if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0'))
            goto LAB_144c0ea8c;
            cVar9 = FUN_144bdbf80();
            if (cVar9 == '\0') {
              uVar11 = FUN_144bdc640(local_1f0);
              local_1f8 = (ulonglong *)local_230;
              local_208 = 1;
              uStack_204 = 0;
              uStack_200 = 0x44f50970;
              uStack_1fc = 1;
              lVar12 = FUN_144bdc480(uVar11,
                                     "Too many type bodies actually present in bundle compared to what expected ({})."
                                     ,&local_208,0);
              *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
              *(undefined8 *)(lVar12 + 0x40) = 0x7c2;
              FUN_144bdc690(local_1f0);
              *param_1 = -0x7ffbfe00;
              goto LAB_144c0eb6f;
            }
            uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
            local_1f8 = (ulonglong *)local_230;
            local_208 = 1;
            uStack_204 = 0;
            uStack_200 = 0x44f50970;
            uStack_1fc = 1;
            lVar12 = FUN_144bdc480(uVar11,
                                   "Too many type bodies actually present in bundle compared to what expected ({})."
                                   ,&local_208,0);
            *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar12 + 0x40) = 0x7c2;
            goto LAB_144c0ea83;
          }
          FUN_144c09cb0(param_1,param_2,&local_218);
          if ((char)param_2[3] != '\0') {
            *param_1 = -0x7ffbfe00;
LAB_144c0e560:
            if ((DAT_14c787870 != '\0') || (cVar9 = FUN_144bdbf80(), cVar9 != '\0')) {
              cVar9 = FUN_144bdbf80();
              if (cVar9 == '\0') {
                uVar11 = FUN_144bdc640(local_1f0);
                local_res18 = 0;
                lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
                *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar12 + 0x40) = 0x7c6;
                FUN_144bdc690(local_1f0);
              }
              else {
                uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                local_res18 = 0;
                lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
                *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                *(undefined8 *)(lVar12 + 0x40) = 0x7c6;
                FUN_144bdc8a0(local_188);
              }
            }
            goto LAB_144c0eb6f;
          }
          if (*param_1 < 0) goto LAB_144c0e560;
          if ((char)local_res18 != '\0') {
            uVar23 = uVar27 + 1;
            if ((int)(uVar28 & 0x7fffffff) < (int)uVar23) {
              FUN_144c13a80(&local_228,&PTR_vftable_14c6e47c0,(longlong)(int)uVar23);
              puVar13 = local_228;
              uVar28 = local_21c;
              uVar27 = local_220;
            }
            if (puVar13 + (int)uVar27 != (ulonglong *)0x0) {
              puVar13[(int)uVar27] = local_218;
            }
            puVar17 = (undefined8 *)(ulonglong)uVar23;
            local_220 = uVar23;
          }
          uVar27 = (uint)puVar17;
          pcVar16 = (char *)*param_2;
          iVar20 = param_1[0x86] + -1;
          pcVar3 = (char *)param_2[1];
          param_1[0x86] = iVar20;
        } while (pcVar3 != pcVar16 && -1 < (longlong)pcVar3 - (longlong)pcVar16);
      }
      if (*param_1 < 0) goto LAB_144c0eb6f;
      if (param_1[0x52] == 2) {
        uVar15 = param_2[2];
        local_218._0_4_ = (int)uVar15;
        local_218._4_4_ = (int)(uVar15 >> 0x20);
        uStack_210._0_4_ = (int)pcVar16;
        uStack_210._4_4_ = (int)((ulonglong)pcVar16 >> 0x20);
        param_1[0x58] = (int)local_218;
        param_1[0x59] = local_218._4_4_;
        param_1[0x5a] = (int)uStack_210;
        param_1[0x5b] = uStack_210._4_4_;
        local_218 = uVar15;
        uStack_210 = pcVar16;
      }
      iVar20 = param_1[6];
      uVar15 = (ulonglong)param_1[0x32];
      puVar13 = *(undefined8 **)(param_1 + 0x30);
      lVar12 = *(longlong *)(param_1 + 4);
      if (param_1[0x32] != 0) {
        puVar17 = puVar13 + uVar15 * 2 + -2;
        puVar21 = puVar30;
        puVar24 = puVar30;
        do {
          if ((*(int *)(puVar17 + 1) < (int)((longlong)iVar20 * 8 >> 3)) &&
             (lVar4 = *(longlong *)(lVar12 + (longlong)*(int *)(puVar17 + 1) * 8), lVar4 != 0)) {
            puVar24 = (undefined8 *)(ulonglong)((int)puVar24 + 1);
            *(longlong *)*puVar17 = lVar4;
            if (puVar21 == (undefined8 *)0x0) {
              puVar18 = puVar17 + -2;
              puVar22 = puVar21;
            }
            else {
              if (puVar17 != puVar21) {
                uVar5 = *(undefined4 *)((longlong)puVar21 + 4);
                uVar6 = *(undefined4 *)(puVar21 + 1);
                uVar7 = *(undefined4 *)((longlong)puVar21 + 0xc);
                *(undefined4 *)puVar17 = *(undefined4 *)puVar21;
                *(undefined4 *)((longlong)puVar17 + 4) = uVar5;
                *(undefined4 *)(puVar17 + 1) = uVar6;
                *(undefined4 *)((longlong)puVar17 + 0xc) = uVar7;
              }
              puVar13 = puVar17 + 2;
              puVar18 = puVar21 + -2;
              puVar22 = puVar30;
            }
          }
          else {
            puVar18 = puVar13;
            puVar22 = puVar17;
            if (puVar21 != (undefined8 *)0x0) {
              puVar18 = puVar17 + 2;
              puVar22 = puVar21;
            }
          }
          uVar29 = (uint)puVar24;
          uVar28 = (int)uVar15 - 1;
          uVar15 = (ulonglong)uVar28;
          puVar17 = puVar18;
          puVar21 = puVar22;
        } while (uVar28 != 0);
      }
      param_1[0x32] = param_1[0x32] - uVar29;
      puVar30 = local_228 + (int)uVar27;
      puVar13 = local_228;
      for (puVar17 = local_228; local_228 = puVar13, puVar17 != puVar30; puVar17 = puVar17 + 1) {
        if (((*(uint *)*puVar17 >> 0x17 & 1) == 0) ||
           (puVar13 = (undefined8 *)FUN_144befea0((uint *)*puVar17,0x800000),
           puVar13 == (undefined8 *)0x0)) {
          psVar19 = (short *)0x0;
        }
        else {
          psVar19 = (short *)*puVar13;
        }
        sVar1 = *psVar19;
        for (plVar25 = (longlong *)(psVar19 + 4);
            plVar25 != (longlong *)(psVar19 + ((longlong)sVar1 + 1) * 4); plVar25 = plVar25 + 1) {
          if (((*(uint *)*plVar25 >> 0x14 & 1) != 0) &&
             (puVar14 = (ulonglong *)FUN_144befea0((uint *)*plVar25,0x100000),
             puVar14 != (ulonglong *)0x0)) {
            uVar10 = FUN_144beec90(*(undefined8 *)(*plVar25 + 8));
            *puVar14 = (ulonglong)uVar10 | *puVar14 & 0xffff0000;
          }
        }
        puVar13 = local_228;
      }
      pcVar16 = (char *)param_2[1];
      pcVar3 = (char *)*param_2;
      if ((longlong)pcVar16 - (longlong)pcVar3 < 4) {
        pcVar8 = pcVar3;
        do {
          while( true ) {
            if (pcVar16 == pcVar8) {
              if ((char)param_2[3] == '\0') {
                if (-1 < *param_1) {
                  if (local_res20 == 0) {
                    *(ulonglong *)(param_1 + 0x76) = (longlong)pcVar3 - param_2[2];
                  }
                  goto LAB_144c0eb6f;
                }
              }
              else {
                *param_1 = -0x7ffbfe00;
              }
              if ((DAT_14c787870 != '\0') || (cVar9 = FUN_144bdbf80(), cVar9 != '\0')) {
                cVar9 = FUN_144bdbf80();
                if (cVar9 == '\0') {
                  uVar11 = FUN_144bdc640(local_1f0);
                  local_res18 = 0;
                  lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
                  *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar12 + 0x40) = 0x800;
                  FUN_144bdc690(local_1f0);
                }
                else {
                  uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
                  local_res18 = 0;
                  lVar12 = FUN_144bdc480(uVar11,"Error in input stream.",&local_res18,0);
                  *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                  *(undefined8 *)(lVar12 + 0x40) = 0x800;
                  FUN_144bdc8a0(local_188);
                }
              }
              goto LAB_144c0eb6f;
            }
            pcVar26 = pcVar8 + 1;
            if (pcVar26 <= pcVar16) break;
            *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
            *param_2 = (ulonglong)pcVar16;
            pcVar8 = pcVar16;
          }
          cVar9 = *pcVar8;
          *param_2 = (ulonglong)pcVar26;
          pcVar8 = pcVar26;
        } while (cVar9 == '\0');
        if ((DAT_14c787870 != '\0') || (cVar9 = FUN_144bdbf80(), cVar9 != '\0')) {
          cVar9 = FUN_144bdbf80();
          if (cVar9 == '\0') {
            uVar11 = FUN_144bdc640(local_1f0);
            local_res18 = 0;
            lVar12 = FUN_144bdc480(uVar11,
                                   "Found non-zero byte in padding of type body section (TBOD/TBDY)."
                                   ,&local_res18,0);
            *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar12 + 0x40) = 0x7fe;
            *(undefined4 *)(lVar12 + 0x1c) = 0x68bf09d3;
            FUN_144bdc690(local_1f0);
            *param_1 = -0x7ffbfe00;
            goto LAB_144c0eb6f;
          }
          uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_218 = 0;
          lVar12 = FUN_144bdc480(uVar11,
                                 "Found non-zero byte in padding of type body section (TBOD/TBDY).",
                                 &local_218,0);
          *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x7fe;
          *(undefined4 *)(lVar12 + 0x1c) = 0x68bf09d3;
          goto LAB_144c0ea83;
        }
      }
      else if ((DAT_14c787870 != '\0') || (cVar9 = FUN_144bdbf80(), cVar9 != '\0')) {
        cVar9 = FUN_144bdbf80();
        if (cVar9 == '\0') {
          local_res18 = (longlong)pcVar16 - (longlong)pcVar3;
          uVar11 = FUN_144bdc640(local_1f0);
          local_1f8 = &local_res18;
          local_208 = 1;
          uStack_204 = 0;
          uStack_200 = 0x44f50a90;
          uStack_1fc = 1;
          lVar12 = FUN_144bdc480(uVar11,
                                 "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                                 ,&local_208,0);
          *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar12 + 0x40) = 0x7f9;
          *(undefined4 *)(lVar12 + 0x1c) = 0x16964161;
          FUN_144bdc690(local_1f0);
          *param_1 = -0x7ffbfe00;
          goto LAB_144c0eb6f;
        }
        local_218 = (longlong)pcVar16 - (longlong)pcVar3;
        uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
        local_190 = &local_218;
        local_1a0 = 1;
        uStack_19c = 0;
        uStack_198 = 0x44f50a90;
        uStack_194 = 1;
        lVar12 = FUN_144bdc480(uVar11,
                               "Type body section (TBOD/TBDY) has oversized padding: max padding of 3 bytes expected, found {} instead."
                               ,&local_1a0,0);
        *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar12 + 0x40) = 0x7f9;
        *(undefined4 *)(lVar12 + 0x1c) = 0x16964161;
LAB_144c0ea83:
        FUN_144bdc8a0(local_188);
      }
LAB_144c0ea8c:
      *param_1 = -0x7ffbfe00;
LAB_144c0eb6f:
      if ((int)local_21c < 0) {
        return;
      }
      if (puVar13 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,puVar13,(ulonglong)(local_21c & 0x7fffffff) << 3);
      return;
    }
    if ((DAT_14c787870 == '\0') && (cVar9 = FUN_144bdbf80(), cVar9 == '\0')) goto LAB_144c0e220;
    cVar9 = FUN_144bdbf80();
    if (cVar9 == '\0') {
      uVar11 = FUN_144bdc640(local_1f0);
      local_res18 = 0;
      lVar12 = FUN_144bdc480(uVar11,"Cannot remove types while deserializing.",&local_res18,0);
      *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar12 + 0x40) = 0x7b0;
      FUN_144bdc690(local_1f0);
      *param_1 = -0x7ffbfe00;
      return;
    }
    uVar11 = FUN_144bdc810(local_188,&DAT_14c787820,1);
    local_res18 = 0;
    lVar12 = FUN_144bdc480(uVar11,"Cannot remove types while deserializing.",&local_res18,0);
    *(undefined8 *)(lVar12 + 0x40) = 0x7b0;
  }
  *(char **)(lVar12 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_188);
LAB_144c0e220:
  *param_1 = -0x7ffbfe00;
  return;
}



// FUNCTION 144c0ebd0 FUN_144c0ebd0 body=850 status=ok
// SIG undefined FUN_144c0ebd0(void)

void FUN_144c0ebd0(undefined4 *param_1,longlong *param_2,char *param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 local_res18 [2];
  undefined8 local_1c8;
  undefined1 local_1c0 [80];
  undefined1 local_170 [344];
  
  puVar11 = (undefined8 *)0x0;
  if (*param_3 == '\0') goto LAB_144c0ee6f;
  lVar6 = param_2[1];
  lVar2 = *param_2;
  if ((lVar6 - lVar2 & 7U) != 0) {
    if ((DAT_14c787870 != '\0') || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar5 = FUN_144bdc640(local_1c0);
        local_res18[0] = 0;
        lVar6 = FUN_144bdc480(uVar5,"NATIVE_POINTERS section has the wrong size",local_res18,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x9b2;
        *(undefined4 *)(lVar6 + 0x1c) = 0x574328eb;
        FUN_144bdc690(local_1c0);
        *param_1 = 0x80040200;
        return;
      }
      uVar5 = FUN_144bdc810(local_170,&DAT_14c787820,1);
      local_1c8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"NATIVE_POINTERS section has the wrong size",&local_1c8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x9b2;
      *(undefined4 *)(lVar6 + 0x1c) = 0x574328eb;
LAB_144c0edef:
      FUN_144bdc8a0(local_170);
    }
LAB_144c0edf9:
    *param_1 = 0x80040200;
    return;
  }
  lVar3 = param_2[2];
  *(undefined1 *)(param_1 + 0xa6) = param_4;
  uVar10 = (uint)((ulonglong)(lVar6 - lVar2) >> 3);
  lVar6 = (longlong)(int)uVar10;
  puVar7 = puVar11;
  if (0 < (int)uVar10) {
    do {
      if (*(longlong *)(lVar3 + (longlong)puVar7 * 8) != 0) {
        if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) goto LAB_144c0edf9;
        cVar4 = FUN_144bdbf80();
        if (cVar4 == '\0') {
          uVar5 = FUN_144bdc640(local_1c0);
          local_res18[0] = 0;
          lVar6 = FUN_144bdc480(uVar5,"Buffer already inplace loaded",local_res18,0);
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x9ba;
          FUN_144bdc690(local_1c0);
          *param_1 = 0x80040200;
          return;
        }
        uVar5 = FUN_144bdc810(local_170,&DAT_14c787820,1);
        local_res18[0] = 0;
        lVar6 = FUN_144bdc480(uVar5,"Buffer already inplace loaded",local_res18,0);
        *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar6 + 0x40) = 0x9ba;
        goto LAB_144c0edef;
      }
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
    } while ((longlong)puVar7 < lVar6);
  }
  if (param_3[1] == '\0') {
    *(longlong *)(param_1 + 4) = lVar3;
    param_1[7] = uVar10 | 0x80000000;
LAB_144c0ee14:
    param_1[6] = uVar10;
  }
  else {
    if ((int)(param_1[7] & 0x7fffffff) < (int)uVar10) {
      FUN_144c13a80(param_1 + 4,&PTR_vftable_14c6e47a0,lVar6);
    }
    if (((int)param_1[6] < (int)uVar10) || ((int)uVar10 < (int)param_1[6])) goto LAB_144c0ee14;
  }
  if ((int)(param_1[0x7d] & 0x7fffffff) < (int)uVar10) {
    FUN_14180788c(param_1 + 0x7a,&PTR_vftable_14c6e47a0,lVar6);
  }
  iVar1 = param_1[0x7c];
  if (iVar1 < (int)uVar10) {
    param_1[0x7c] = uVar10;
    if (0 < (int)(uVar10 - iVar1)) {
      uVar9 = (ulonglong)(uVar10 - iVar1);
      puVar8 = (undefined1 *)((longlong)iVar1 + *(longlong *)(param_1 + 0x7a));
      do {
        if (puVar8 != (undefined1 *)0x0) {
          *puVar8 = 0;
        }
        uVar9 = uVar9 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar9 != 0);
    }
  }
  else if ((int)uVar10 < iVar1) {
    param_1[0x7c] = uVar10;
  }
LAB_144c0ee6f:
  if (*(longlong *)(param_1 + 0x4a) == 0) {
    local_res18[0] = 0x20;
    puVar7 = (undefined8 *)(*DAT_14c787670)(0,local_res18,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar7,"hkHashSet");
    }
    if (puVar7 != (undefined8 *)0x0) {
      puVar7[2] = 0;
      puVar7[3] = 0;
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 0x80000000;
      uVar5 = FUN_144b3d480();
      puVar7[2] = uVar5;
      *(undefined4 *)(puVar7 + 3) = 0;
      puVar11 = puVar7;
    }
    lVar6 = *(longlong *)(param_1 + 0x4a);
    *(undefined8 **)(param_1 + 0x4a) = puVar11;
    if (lVar6 != 0) {
      FUN_144c089f0(lVar6);
      (*DAT_14c787678)(0,lVar6,0);
    }
  }
  return;
}



// FUNCTION 144c0ef30 FUN_144c0ef30 body=316 status=ok
// SIG undefined FUN_144c0ef30(void)

void FUN_144c0ef30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x54) & 0x7fffffff) << 3);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],*(uint *)((longlong)param_1 + 0x44) & 0x7fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar1 = param_1[3];
  lVar2 = lVar1 + (longlong)(int)param_1[4] * 0x18;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x18;
    FUN_144c07760(lVar2);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c0f070 FUN_144c0f070 body=386 status=ok
// SIG undefined FUN_144c0f070(void)

longlong FUN_144c0f070(longlong param_1,ulonglong param_2)

{
  FUN_144c07840(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x210) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x214)) && (*(longlong *)(param_1 + 0x208) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x208),
               (ulonglong)(*(uint *)(param_1 + 0x214) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0x80000000;
  *(undefined4 *)(param_1 + 0x200) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x204)) && (*(longlong *)(param_1 + 0x1f8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1f8),
               (ulonglong)(*(uint *)(param_1 + 0x204) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 500)) && (*(longlong *)(param_1 + 0x1e8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x1e8),
               *(uint *)(param_1 + 500) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 500) = 0x80000000;
  FUN_144be6ae0(param_1 + 0x1c0);
  FUN_144be6ae0(param_1 + 0x1a8);
  FUN_144be6ae0(param_1 + 400);
  FUN_144c0ef30(param_1 + 0x138);
  FUN_144c08790(param_1 + 8);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x2a0);
  }
  return param_1;
}



// FUNCTION 144c0f200 FUN_144c0f200 body=1112 status=ok
// SIG undefined FUN_144c0f200(void)

void FUN_144c0f200(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined8 local_res10;
  undefined1 *local_200;
  int local_1f8;
  uint local_1f4;
  undefined1 local_1f0 [16];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 *local_1d0;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  bVar4 = false;
  bVar15 = false;
  local_200 = local_1f0;
  local_res10 = local_res10 & 0xffffffff00000000;
  piVar1 = (int *)*param_3;
  local_1f8 = 0;
  local_1f4 = 0x80000010;
  iVar14 = (int)(param_3[1] - (longlong)piVar1 >> 5);
  iVar7 = 0;
  if (0x10 < iVar14) {
    FUN_14180788c(&local_200,&PTR_vftable_14c6e47c0,(longlong)iVar14);
    iVar7 = local_1f8;
  }
  local_1f8 = iVar14;
  if (iVar7 < iVar14) {
    uVar13 = (ulonglong)(uint)(iVar14 - iVar7);
    puVar9 = local_200 + iVar7;
    if (0 < iVar14 - iVar7) {
      do {
        if (puVar9 != (undefined1 *)0x0) {
          *puVar9 = 0;
        }
        uVar13 = uVar13 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar13 != 0);
    }
  }
  else {
    local_1f8 = iVar7;
    if (iVar14 < iVar7) {
      local_1f8 = iVar14;
    }
  }
  uVar8 = *param_2;
joined_r0x000144c0f2bf:
  do {
    if ((int)uVar8 < 0) {
LAB_144c0f604:
      *(undefined4 *)(param_1 + 3) = 0;
LAB_144c0f608:
      local_1f8 = 0;
      if ((-1 < (int)local_1f4) && (local_200 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_200,local_1f4 & 0x7fffffff);
      }
      return;
    }
    iVar7 = FUN_144c07a00(param_1,0);
    uVar13 = local_res10;
    if (iVar7 == 1) {
      if ((1 < DAT_14c787870) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
        cVar5 = FUN_144bdbf80();
        bVar15 = cVar5 != '\0';
        if (bVar15) {
          uVar10 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          uVar10 = FUN_144bdc640(local_1c8);
        }
        cVar5 = !bVar15;
        local_res10 = 0;
        lVar11 = FUN_144bdc480(uVar10,"IO error",&local_res10,0);
        *(undefined8 *)(lVar11 + 0x40) = 0x52f;
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (bVar15) {
          FUN_144bdc8a0(local_178);
        }
LAB_144c0f5f2:
        if (cVar5 != '\0') {
          FUN_144bdc690(local_1c8);
        }
      }
LAB_144c0f5fe:
      *param_2 = 0x80040200;
      goto LAB_144c0f604;
    }
    if (iVar7 == 0) goto LAB_144c0f608;
    piVar12 = piVar1;
    while( true ) {
      if (piVar12 == (int *)param_3[1]) {
        local_res10._0_3_ =
             CONCAT12((char)((uint)iVar7 >> 8),
                      CONCAT11((char)((uint)iVar7 >> 0x10),(char)((uint)iVar7 >> 0x18)));
        uVar8 = CONCAT13((char)iVar7,(undefined3)local_res10);
        local_res10._5_3_ = SUB83(uVar13,5);
        local_res10._0_5_ = (uint5)uVar8;
        if ((DAT_14c787870 < 2) && (cVar5 = FUN_144bdbf80(), cVar5 == '\0')) goto LAB_144c0f5fe;
        cVar6 = FUN_144bdbf80();
        if (cVar6 != '\0') {
          cVar5 = '\0';
          uVar10 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          cVar5 = '\x10';
          uVar10 = FUN_144bdc640(local_1c8);
        }
        local_1d0 = &local_res10;
        local_1e0 = 1;
        uStack_1dc = 0;
        uStack_1d8 = 0x44be3530;
        uStack_1d4 = 1;
        lVar11 = FUN_144bdc480(uVar10,"Unexpected section {}",&local_1e0,0);
        *(undefined8 *)(lVar11 + 0x40) = 0x558;
        *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (cVar6 != '\0') {
          FUN_144bdc8a0(local_178);
        }
        goto LAB_144c0f5f2;
      }
      if (*piVar12 == iVar7) break;
      piVar12 = piVar12 + 8;
    }
    iVar7 = (int)((longlong)piVar12 - (longlong)piVar1 >> 5);
    if (local_200[iVar7] == '\0') {
      local_200[iVar7] = 1;
      if (*(code **)(piVar12 + 2) == (code *)0x0) {
        puVar2 = (ulonglong *)*param_1;
        uVar13 = *puVar2 + ((ulonglong)
                            (*(uint *)(param_1[2] + -0x14 + (longlong)(int)param_1[3] * 0x18) &
                            0x3fffffff) - 8);
        if (puVar2[1] < uVar13) {
          FUN_144f89540();
        }
        else {
          *puVar2 = uVar13;
        }
        *param_2 = -(uint)(*(char *)(*param_1 + 0x20) != '\0') & 0x80040200;
      }
      else {
        (**(code **)(piVar12 + 2))(param_2);
      }
      if (-1 < (int)*param_2) {
        plVar3 = (longlong *)*param_1;
        lVar11 = param_1[2] + (longlong)(int)param_1[3] * 0x18;
        if ((plVar3[5] - plVar3[2]) + *plVar3 !=
            (ulonglong)(*(uint *)(lVar11 + -0x14) & 0x3fffffff) + *(longlong *)(lVar11 + -0x10)) {
          *(byte *)(plVar3 + 4) = *(byte *)(plVar3 + 4) | 2;
          uVar8 = *param_2;
          goto joined_r0x000144c0f2bf;
        }
        lVar11 = *(longlong *)(lVar11 + -8);
        *(int *)(param_1 + 3) = (int)param_1[3] + -1;
        param_1[1] = lVar11;
      }
      uVar8 = *param_2;
      goto joined_r0x000144c0f2bf;
    }
    if ((1 < DAT_14c787870) || (cVar5 = FUN_144bdbf80(), cVar5 != '\0')) {
      cVar5 = FUN_144bdbf80();
      if (cVar5 == '\0') {
        bVar4 = true;
        uVar10 = FUN_144bdc640(local_1c8);
      }
      else {
        bVar15 = true;
        uVar10 = FUN_144bdc810(local_178,&DAT_14c787820,2);
      }
      local_res10 = 0;
      lVar11 = FUN_144bdc480(uVar10,"Duplicate section",&local_res10,0);
      *(undefined8 *)(lVar11 + 0x40) = 0x551;
      *(char **)(lVar11 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      if (bVar15) {
        bVar15 = false;
        FUN_144bdc8a0(local_178);
      }
      if (bVar4) {
        bVar4 = false;
        FUN_144bdc690(local_1c8);
      }
    }
    *param_2 = 0x80040200;
    uVar8 = 0x80040200;
  } while( true );
}



// FUNCTION 144c0f660 FUN_144c0f660 body=1260 status=ok
// SIG undefined FUN_144c0f660(void)

void FUN_144c0f660(ulonglong *param_1,undefined8 *param_2,longlong *param_3)

{
  uint *puVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  code *pcVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  undefined8 local_res10;
  longlong local_248;
  code *pcStack_240;
  code *local_238;
  undefined1 *local_228;
  int local_220;
  uint local_21c;
  undefined1 local_218 [16];
  undefined8 local_208;
  code *pcStack_200;
  code *local_1f8;
  uint uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  bVar2 = false;
  bVar15 = false;
  local_228 = local_218;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar10 = *param_3;
  puVar1 = (uint *)*param_2;
  local_220 = 0;
  local_21c = 0x80000010;
  iVar13 = (int)(param_3[1] - lVar10 >> 5);
  iVar5 = 0;
  if (0x10 < iVar13) {
    FUN_14180788c(&local_228,&PTR_vftable_14c6e47c0,(longlong)iVar13);
    iVar5 = local_220;
  }
  local_220 = iVar13;
  if (iVar5 < iVar13) {
    puVar7 = local_228 + iVar5;
    uVar11 = (ulonglong)(uint)(iVar13 - iVar5);
    if (0 < iVar13 - iVar5) {
      do {
        if (puVar7 != (undefined1 *)0x0) {
          *puVar7 = 0;
        }
        uVar11 = uVar11 - 1;
        puVar7 = puVar7 + 1;
      } while (uVar11 != 0);
    }
  }
  else {
    local_220 = iVar5;
    if (iVar13 < iVar5) {
      local_220 = iVar13;
    }
  }
  uVar6 = *puVar1;
joined_r0x000144c0f720:
  do {
    if ((int)uVar6 < 0) {
LAB_144c0faf2:
      *(undefined4 *)(param_1 + 6) = 0;
LAB_144c0faf9:
      local_220 = 0;
      if ((-1 < (int)local_21c) && (local_228 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_228,local_21c & 0x7fffffff);
      }
      return;
    }
    iVar5 = FUN_144c078c0(param_1,0);
    uVar11 = local_res10;
    if (iVar5 == 1) {
      if (DAT_14c787870 < 2) {
        cVar3 = FUN_144bdbf80();
        if (cVar3 != '\0') goto LAB_144c0fa66;
      }
      else {
LAB_144c0fa66:
        cVar3 = FUN_144bdbf80();
        bVar15 = cVar3 != '\0';
        if (bVar15) {
          uVar8 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          uVar8 = FUN_144bdc640(local_1c8);
        }
        cVar3 = !bVar15;
        local_res10 = 0;
        lVar10 = FUN_144bdc480(uVar8,"IO error",&local_res10,0);
        *(undefined8 *)(lVar10 + 0x40) = 0x52f;
        *(char **)(lVar10 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (bVar15) {
          FUN_144bdc8a0(local_178);
        }
LAB_144c0fae0:
        if (cVar3 != '\0') {
          FUN_144bdc690(local_1c8);
        }
      }
LAB_144c0faeb:
      *puVar1 = 0x80040200;
      goto LAB_144c0faf2;
    }
    if (iVar5 == 0) goto LAB_144c0faf9;
    piVar14 = (int *)*param_3;
    while( true ) {
      if (piVar14 == (int *)param_3[1]) {
        local_res10._0_3_ =
             CONCAT12((char)((uint)iVar5 >> 8),
                      CONCAT11((char)((uint)iVar5 >> 0x10),(char)((uint)iVar5 >> 0x18)));
        uVar6 = CONCAT13((char)iVar5,(undefined3)local_res10);
        local_res10._5_3_ = SUB83(uVar11,5);
        local_res10._0_5_ = (uint5)uVar6;
        if (DAT_14c787870 < 2) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') goto LAB_144c0faeb;
        }
        cVar4 = FUN_144bdbf80();
        if (cVar4 != '\0') {
          cVar3 = '\0';
          uVar8 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          cVar3 = '\x10';
          uVar8 = FUN_144bdc640(local_1c8);
        }
        local_248 = 1;
        pcStack_240 = FUN_144be3530;
        local_238 = (code *)&local_res10;
        local_208 = (code *)&DAT_00000001;
        pcStack_200 = FUN_144be3530;
        local_1f8 = local_238;
        lVar10 = FUN_144bdc480(uVar8,"Unexpected section {}",&local_208,0);
        *(undefined8 *)(lVar10 + 0x40) = 0x558;
        *(char **)(lVar10 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (cVar4 != '\0') {
          FUN_144bdc8a0(local_178);
        }
        goto LAB_144c0fae0;
      }
      if (*piVar14 == iVar5) break;
      piVar14 = piVar14 + 8;
    }
    iVar5 = (int)((longlong)piVar14 - lVar10 >> 5);
    if (local_228[iVar5] == '\0') {
      local_228[iVar5] = 1;
      if (*(longlong *)(piVar14 + 4) == 0) {
        uVar11 = (*param_1 - 8) +
                 (ulonglong)
                 (*(uint *)((param_1[5] - 0x14) + (longlong)(int)param_1[6] * 0x18) & 0x3fffffff);
        if (param_1[1] < uVar11) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          uVar11 = param_1[1];
        }
        *param_1 = uVar11;
        *puVar1 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
      }
      else {
        uVar8 = *param_2;
        local_248 = param_2[1];
        local_1f8 = (code *)*param_1;
        pcStack_240 = (code *)param_2[2];
        pcStack_200 = local_1f8 +
                      (longlong)
                      (int)(*(uint *)((param_1[5] - 0x14) + (longlong)(int)param_1[6] * 0x18) &
                           0x3fffffff) + -8;
        pcVar12 = pcStack_200;
        if ((code *)param_1[1] < pcStack_200) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          pcVar12 = (code *)param_1[1];
        }
        *param_1 = (ulonglong)pcVar12;
        local_208._0_4_ = SUB84(local_1f8,0);
        local_208._4_4_ = (undefined4)((ulonglong)local_1f8 >> 0x20);
        uStack_1f0 = uStack_1f0 & 0xffffff00;
        local_1e8 = (undefined4)local_208;
        uStack_1e4 = local_208._4_4_;
        local_1d8 = (undefined4)local_208;
        uStack_1d4 = local_208._4_4_;
        uStack_1d0 = uStack_1f0;
        uStack_1cc = uStack_1ec;
        local_238 = pcStack_240;
        local_208 = local_1f8;
        uStack_1e0 = pcStack_200;
        (**(code **)(piVar14 + 4))(uVar8,&local_1e8,&local_248);
      }
      if (-1 < (int)*puVar1) {
        lVar9 = param_1[5] + (longlong)(int)param_1[6] * 0x18;
        if (*param_1 - param_1[2] !=
            (ulonglong)(*(uint *)(lVar9 + -0x14) & 0x3fffffff) + *(longlong *)(lVar9 + -0x10)) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
          uVar6 = *puVar1;
          goto joined_r0x000144c0f720;
        }
        uVar11 = *(ulonglong *)(lVar9 + -8);
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
        param_1[4] = uVar11;
      }
      uVar6 = *puVar1;
      goto joined_r0x000144c0f720;
    }
    if (DAT_14c787870 < 2) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 != '\0') goto LAB_144c0f929;
    }
    else {
LAB_144c0f929:
      cVar3 = FUN_144bdbf80();
      if (cVar3 == '\0') {
        bVar2 = true;
        uVar8 = FUN_144bdc640(local_1c8);
      }
      else {
        bVar15 = true;
        uVar8 = FUN_144bdc810(local_178,&DAT_14c787820,2);
      }
      local_res10 = 0;
      lVar9 = FUN_144bdc480(uVar8,"Duplicate section",&local_res10,0);
      *(undefined8 *)(lVar9 + 0x40) = 0x551;
      *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      if (bVar15) {
        bVar15 = false;
        FUN_144bdc8a0(local_178);
      }
      if (bVar2) {
        bVar2 = false;
        FUN_144bdc690(local_1c8);
      }
    }
    *puVar1 = 0x80040200;
    uVar6 = 0x80040200;
  } while( true );
}



// FUNCTION 144c0fb50 FUN_144c0fb50 body=1707 status=ok
// SIG undefined FUN_144c0fb50(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144c0fb50(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong local_res8;
  int local_res10 [2];
  undefined8 local_res18;
  ulonglong local_238 [2];
  code *local_228;
  ulonglong *local_220;
  code *local_218;
  int *local_210;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  iVar11 = 0;
  local_res18 = param_3;
  local_238[0] = FUN_144c07b70(param_2);
  puVar9 = param_2 + 3;
  if (0x7fffffff < local_238[0]) {
    *(byte *)puVar9 = (byte)*puVar9 | 2;
  }
  if ((char)*puVar9 == '\0') {
    if (-1 < *param_1) {
      iVar10 = (int)local_238[0];
      if ((longlong)(param_2[1] - *param_2) / 5 < (longlong)iVar10) {
        if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(local_1e0);
            local_238[1] = 1;
            local_228 = FUN_144c148d0;
            local_220 = (ulonglong *)0x1499912c0;
            lVar6 = FUN_144bdc480(uVar5,&DAT_1499819e4,local_238 + 1,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x934;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_238[1] = 1;
          local_228 = FUN_144c148d0;
          local_220 = (ulonglong *)0x1499912c0;
          lVar6 = FUN_144bdc480(uVar5,&DAT_1499819e4,local_238 + 1,0);
          *(undefined8 *)(lVar6 + 0x40) = 0x934;
LAB_144c10105:
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          FUN_144bdc8a0(local_190);
        }
LAB_144c10119:
        *param_1 = -0x7ffbfe00;
        return;
      }
      if ((param_1[0x52] == 2) && ((int)(param_1[99] & 0x7fffffffU) < iVar10)) {
        FUN_144c13760(param_1 + 0x60,&PTR_vftable_14c6e47a0);
      }
      puVar9 = param_2 + 3;
      if (iVar10 < 1) {
        return;
      }
      do {
        uVar7 = FUN_144c07b70(param_2);
        uVar2 = local_res8;
        if (0x7fffffff < uVar7) {
          *(byte *)puVar9 = (byte)*puVar9 | 2;
        }
        local_res10[0] = 0;
        local_res8 = local_res8 & 0xffffffff00000000;
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *(byte *)puVar9 = (byte)*puVar9 | 1;
          *param_2 = param_2[1];
          bVar4 = (byte)*puVar9 | 2;
          *(byte *)puVar9 = bVar4;
        }
        else {
          local_res10[0] = *(int *)*param_2;
          local_res8 = CONCAT44(SUB84(uVar2,4),local_res10[0]);
          bVar4 = (byte)*puVar9;
          *param_2 = (ulonglong)piVar1;
        }
        if (bVar4 != 0) {
          *param_1 = -0x7ffbfe00;
LAB_144c1012a:
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
            return;
          }
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(local_1e0);
            local_res8 = 0;
            lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x940;
            FUN_144bdc690(local_1e0);
            return;
          }
          uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_res8 = 0;
          lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
          *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar6 + 0x40) = 0x940;
          FUN_144bdc8a0(local_190);
          return;
        }
        if (*param_1 < 0) goto LAB_144c1012a;
        iVar10 = (int)uVar7;
        if ((iVar10 < 1) || (param_1[0x22] <= iVar10)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c10119;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar5 = FUN_144bdc640(local_1e0);
            local_238[1] = 1;
            local_228 = FUN_144c148f0;
            local_220 = (ulonglong *)0x1499912e0;
            lVar6 = FUN_144bdc480(uVar5,&DAT_1499819e4,local_238 + 1,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x941;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_238[1] = 1;
          local_228 = FUN_144c148f0;
          local_220 = (ulonglong *)0x1499912e0;
          lVar6 = FUN_144bdc480(uVar5,&DAT_1499819e4,local_238 + 1,0);
          *(undefined8 *)(lVar6 + 0x40) = 0x941;
          goto LAB_144c10105;
        }
        lVar6 = (longlong)iVar10 * 8;
        lVar8 = FUN_144f69d80(param_3,*(undefined8 *)(lVar6 + *(longlong *)(param_1 + 0x20)));
        if (lVar8 == 0) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c10119;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            local_res8 = *(ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x20));
            uVar5 = FUN_144bdc640(local_1e0);
            local_238[1] = 2;
            local_228 = FUN_144bf0db0;
            local_220 = &local_res8;
            local_218 = FUN_144f50a00;
            local_210 = local_res10;
            lVar6 = FUN_144bdc480(uVar5,"Type {} with hash {:x} does not match a native type",
                                  local_238 + 1,0);
            *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar6 + 0x40) = 0x944;
            FUN_144bdc690(local_1e0);
            *param_1 = -0x7ffbfe00;
            return;
          }
          local_238[0] = *(ulonglong *)(lVar6 + *(longlong *)(param_1 + 0x20));
          uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
          local_238[1] = 2;
          local_228 = FUN_144bf0db0;
          local_220 = local_238;
          local_218 = FUN_144f50a00;
          local_210 = local_res10;
          lVar6 = FUN_144bdc480(uVar5,"Type {} with hash {:x} does not match a native type",
                                local_238 + 1,0);
          *(undefined8 *)(lVar6 + 0x40) = 0x944;
          goto LAB_144c10105;
        }
        *(longlong *)(lVar6 + *(longlong *)(param_1 + 4)) = lVar8;
        if (param_1[0x52] == 2) {
          iVar12 = param_1[0x62] + 1;
          if ((int)(param_1[99] & 0x7fffffffU) < iVar12) {
            FUN_144c146f0(param_1 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar12);
          }
          piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + (longlong)param_1[0x62] * 8);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar10;
            piVar1[1] = local_res10[0];
          }
          param_1[0x62] = iVar12;
          param_3 = local_res18;
        }
        iVar11 = iVar11 + 1;
        if ((int)local_238[0] <= iVar11) {
          return;
        }
      } while( true );
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar5 = FUN_144bdc640(local_238 + 1);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x932;
      FUN_144bdc690(local_238 + 1);
    }
    else {
      uVar5 = FUN_144bdc810(local_190,&DAT_14c787820,1);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"Error in input stream.",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x932;
      FUN_144bdc8a0(local_190);
    }
  }
  return;
}



// FUNCTION 144c10200 FUN_144c10200 body=1750 status=ok
// SIG undefined FUN_144c10200(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_144c10200(int *param_1,ulonglong *param_2,undefined8 *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong local_res8;
  int local_res10 [2];
  undefined8 *local_res18;
  ulonglong local_238 [2];
  code *local_228;
  ulonglong *local_220;
  code *local_218;
  int *local_210;
  ulonglong local_1e0;
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  iVar10 = 0;
  local_res18 = param_3;
  local_238[0] = FUN_144c07b70(param_2);
  puVar9 = param_2 + 3;
  if (0x7fffffff < local_238[0]) {
    *(byte *)puVar9 = (byte)*puVar9 | 2;
  }
  if ((char)*puVar9 == '\0') {
    if (-1 < *param_1) {
      iVar11 = (int)local_238[0];
      if ((longlong)(param_2[1] - *param_2) / 5 < (longlong)iVar11) {
        if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar6 = FUN_144bdc640(local_1d8);
            local_238[1] = 1;
            local_228 = FUN_144c148d0;
            local_220 = (ulonglong *)0x1499912c0;
            lVar7 = FUN_144bdc480(uVar6,&DAT_1499819e4,local_238 + 1,0);
            *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x934;
            FUN_144bdc690(local_1d8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_238[1] = 1;
          local_228 = FUN_144c148d0;
          local_220 = (ulonglong *)0x1499912c0;
          lVar7 = FUN_144bdc480(uVar6,&DAT_1499819e4,local_238 + 1,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x934;
LAB_144c107de:
          *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          FUN_144bdc8a0(local_188);
        }
LAB_144c107f2:
        *param_1 = -0x7ffbfe00;
        return;
      }
      if ((param_1[0x52] == 2) && ((int)(param_1[99] & 0x7fffffffU) < iVar11)) {
        FUN_144c13760(param_1 + 0x60,&PTR_vftable_14c6e47a0);
      }
      puVar9 = param_2 + 3;
      if (iVar11 < 1) {
        return;
      }
      do {
        uVar8 = FUN_144c07b70(param_2);
        uVar2 = local_res8;
        if (0x7fffffff < uVar8) {
          *(byte *)puVar9 = (byte)*puVar9 | 2;
        }
        iVar11 = 0;
        local_res8 = local_res8 & 0xffffffff00000000;
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *(byte *)puVar9 = (byte)*puVar9 | 1;
          *param_2 = param_2[1];
          bVar4 = (byte)*puVar9 | 2;
          *(byte *)puVar9 = bVar4;
        }
        else {
          iVar11 = *(int *)*param_2;
          local_res8 = CONCAT44(SUB84(uVar2,4),iVar11);
          bVar4 = (byte)*puVar9;
          *param_2 = (ulonglong)piVar1;
        }
        local_res10[0] = iVar11;
        if (bVar4 != 0) {
          *param_1 = -0x7ffbfe00;
LAB_144c10803:
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0')) {
            return;
          }
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar6 = FUN_144bdc640(local_1d8);
            local_res8 = 0;
            lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
            *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x940;
            FUN_144bdc690(local_1d8);
            return;
          }
          uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_res8 = 0;
          lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
          *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          *(undefined8 *)(lVar7 + 0x40) = 0x940;
          FUN_144bdc8a0(local_188);
          return;
        }
        if (*param_1 < 0) goto LAB_144c10803;
        iVar12 = (int)uVar8;
        if ((iVar12 < 1) || (param_1[0x22] <= iVar12)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c107f2;
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar6 = FUN_144bdc640(local_1d8);
            local_238[1] = 1;
            local_228 = FUN_144c148f0;
            local_220 = (ulonglong *)0x1499912e0;
            lVar7 = FUN_144bdc480(uVar6,&DAT_1499819e4,local_238 + 1,0);
            *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x941;
            FUN_144bdc690(local_1d8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_238[1] = 1;
          local_228 = FUN_144c148f0;
          local_220 = (ulonglong *)0x1499912e0;
          lVar7 = FUN_144bdc480(uVar6,&DAT_1499819e4,local_238 + 1,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x941;
          goto LAB_144c107de;
        }
        local_res8 = (longlong)iVar12 * 8;
        lVar7 = (**(code **)(*(longlong *)*param_3 + 0x28))
                          ((longlong *)*param_3,
                           *(undefined8 *)(local_res8 + *(longlong *)(param_1 + 0x20)));
        if ((lVar7 == 0) || (iVar5 = FUN_144f89af0(local_res18 + 1,lVar7), iVar5 != iVar11)) {
          if ((DAT_14c787870 == '\0') && (cVar3 = FUN_144bdbf80(), cVar3 == '\0'))
          goto LAB_144c107f2;
          cVar3 = FUN_144bdbf80();
          local_1e0 = *(ulonglong *)(local_res8 + *(longlong *)(param_1 + 0x20));
          if (cVar3 == '\0') {
            local_238[0] = local_1e0;
            uVar6 = FUN_144bdc640(local_1d8);
            local_238[1] = 2;
            local_228 = FUN_144bf0db0;
            local_220 = local_238;
            local_218 = FUN_144f50a00;
            local_210 = local_res10;
            lVar7 = FUN_144bdc480(uVar6,"Type {} with hash {:x} does not match a native type",
                                  local_238 + 1,0);
            *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar7 + 0x40) = 0x944;
            FUN_144bdc690(local_1d8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
          local_238[1] = 2;
          local_228 = FUN_144bf0db0;
          local_220 = &local_1e0;
          local_218 = FUN_144f50a00;
          local_210 = local_res10;
          lVar7 = FUN_144bdc480(uVar6,"Type {} with hash {:x} does not match a native type",
                                local_238 + 1,0);
          *(undefined8 *)(lVar7 + 0x40) = 0x944;
          goto LAB_144c107de;
        }
        *(longlong *)(local_res8 + *(longlong *)(param_1 + 4)) = lVar7;
        if (param_1[0x52] == 2) {
          iVar11 = param_1[0x62] + 1;
          if ((int)(param_1[99] & 0x7fffffffU) < iVar11) {
            FUN_144c146f0(param_1 + 0x60,&PTR_vftable_14c6e47a0,(longlong)iVar11);
          }
          piVar1 = (int *)(*(longlong *)(param_1 + 0x60) + (longlong)param_1[0x62] * 8);
          if (piVar1 != (int *)0x0) {
            *piVar1 = iVar12;
            piVar1[1] = local_res10[0];
          }
          param_1[0x62] = iVar11;
        }
        iVar10 = iVar10 + 1;
        param_3 = local_res18;
        if ((int)local_238[0] <= iVar10) {
          return;
        }
      } while( true );
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar6 = FUN_144bdc640(local_238 + 1);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x932;
      FUN_144bdc690(local_238 + 1);
    }
    else {
      uVar6 = FUN_144bdc810(local_188,&DAT_14c787820,1);
      local_res8 = 0;
      lVar7 = FUN_144bdc480(uVar6,"Error in input stream.",&local_res8,0);
      *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      *(undefined8 *)(lVar7 + 0x40) = 0x932;
      FUN_144bdc8a0(local_188);
    }
  }
  return;
}



// FUNCTION 144c108e0 FUN_144c108e0 body=1524 status=ok
// SIG undefined FUN_144c108e0(void)

void FUN_144c108e0(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_res18;
  int local_res20 [2];
  int local_258 [2];
  undefined8 local_250;
  code *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong local_218;
  code *local_210;
  int *local_208;
  code *local_200;
  int *local_1f8;
  undefined1 local_1e8 [80];
  undefined1 local_198 [344];
  
  lVar8 = *(longlong *)(param_1 + 4);
  iVar2 = param_1[6];
  iVar11 = 0;
  local_res18 = param_3;
  uVar6 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar6) {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
  }
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      if ((int)uVar6 < 1) {
        return;
      }
      while( true ) {
        uVar9 = FUN_144c07b70();
        uVar3 = local_res10;
        if (0x7fffffff < uVar9) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        local_res20[0] = 0;
        iVar10 = (int)uVar9;
        local_res8 = CONCAT44(local_res8._4_4_,iVar10);
        local_res10 = local_res10 & 0xffffffff00000000;
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
          *param_2 = param_2[1];
          bVar5 = (byte)param_2[3] | 2;
          *(byte *)(param_2 + 3) = bVar5;
        }
        else {
          local_res20[0] = *(int *)*param_2;
          local_res10 = CONCAT44(SUB84(uVar3,4),local_res20[0]);
          bVar5 = (byte)param_2[3];
          *param_2 = (ulonglong)piVar1;
        }
        if (bVar5 != 0) break;
        if (*param_1 < 0) goto LAB_144c10e07;
        if ((iVar10 < 1) || ((int)((longlong)iVar2 * 8 >> 3) <= iVar10)) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c10df6;
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_res10 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Invalid type ID (out of bounds) when reading property hash"
                                  ,&local_res10,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x984;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_res10 = 0;
          lVar8 = FUN_144bdc480(uVar7,"Invalid type ID (out of bounds) when reading property hash",
                                &local_res10,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x984;
LAB_144c10de2:
          *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          FUN_144bdc8a0(local_198);
LAB_144c10df6:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(longlong *)(lVar8 + (longlong)iVar10 * 8) == 0) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c10df6;
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_250 = 1;
            local_248 = FUN_144f50970;
            local_240 = &local_res8;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                  ,&local_250,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x987;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_250 = 1;
          local_248 = FUN_144f50970;
          local_240 = &local_res8;
          lVar8 = FUN_144bdc480(uVar7,
                                "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                ,&local_250,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x987;
          goto LAB_144c10de2;
        }
        local_258[0] = FUN_144f69f20(local_res18);
        if (local_res20[0] != local_258[0]) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c10df6;
          cVar4 = FUN_144bdbf80();
          local_218 = *(longlong *)(param_1 + 0x20) + (longlong)(int)local_res8 * 8;
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_238 = 4;
            local_230 = FUN_144f50970;
            local_208 = local_res20;
            local_228 = &local_res8;
            local_220 = FUN_144c14a10;
            local_210 = FUN_144f50a00;
            local_200 = FUN_144f50a00;
            local_1f8 = local_258;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                  ,&local_238,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x98e;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_238 = 4;
          local_230 = FUN_144f50970;
          local_208 = local_res20;
          local_228 = &local_res8;
          local_220 = FUN_144c14a10;
          local_210 = FUN_144f50a00;
          local_200 = FUN_144f50a00;
          local_1f8 = local_258;
          lVar8 = FUN_144bdc480(uVar7,
                                "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                ,&local_238,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x98e;
          goto LAB_144c10de2;
        }
        iVar11 = iVar11 + 1;
        *(undefined1 *)((longlong)(int)local_res8 + *(longlong *)(param_1 + 0x7a)) = 1;
        if ((int)uVar6 <= iVar11) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_144c10e07:
      if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
        return;
      }
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(local_1e8);
        local_res10 = 0;
        lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res10,0);
        *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x97f;
        FUN_144bdc690(local_1e8);
        return;
      }
      uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
      local_res10 = 0;
      lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res10,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x97f;
      goto LAB_144c10eac;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
    return;
  }
  cVar4 = FUN_144bdbf80();
  if (cVar4 == '\0') {
    uVar7 = FUN_144bdc640(&local_238);
    local_res8 = 0;
    lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res8,0);
    *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar8 + 0x40) = 0x979;
    FUN_144bdc690(&local_238);
    return;
  }
  uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
  local_res8 = 0;
  lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res8,0);
  *(undefined8 *)(lVar8 + 0x40) = 0x979;
LAB_144c10eac:
  *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_198);
  return;
}



// FUNCTION 144c10ee0 FUN_144c10ee0 body=1524 status=ok
// SIG undefined FUN_144c10ee0(void)

void FUN_144c10ee0(int *param_1,ulonglong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_res18;
  int local_res20 [2];
  int local_258 [2];
  undefined8 local_250;
  code *local_248;
  undefined8 *local_240;
  undefined8 local_238;
  code *local_230;
  undefined8 *local_228;
  code *local_220;
  longlong local_218;
  code *local_210;
  int *local_208;
  code *local_200;
  int *local_1f8;
  undefined1 local_1e8 [80];
  undefined1 local_198 [344];
  
  lVar8 = *(longlong *)(param_1 + 4);
  iVar2 = param_1[6];
  iVar11 = 0;
  local_res18 = param_3;
  uVar6 = FUN_144c07b70(param_2);
  if (0x7fffffff < uVar6) {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
  }
  if ((char)param_2[3] == '\0') {
    if (-1 < *param_1) {
      if ((int)uVar6 < 1) {
        return;
      }
      while( true ) {
        uVar9 = FUN_144c07b70();
        uVar3 = local_res10;
        if (0x7fffffff < uVar9) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        local_res20[0] = 0;
        iVar10 = (int)uVar9;
        local_res8 = CONCAT44(local_res8._4_4_,iVar10);
        local_res10 = local_res10 & 0xffffffff00000000;
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 1;
          *param_2 = param_2[1];
          bVar5 = (byte)param_2[3] | 2;
          *(byte *)(param_2 + 3) = bVar5;
        }
        else {
          local_res20[0] = *(int *)*param_2;
          local_res10 = CONCAT44(SUB84(uVar3,4),local_res20[0]);
          bVar5 = (byte)param_2[3];
          *param_2 = (ulonglong)piVar1;
        }
        if (bVar5 != 0) break;
        if (*param_1 < 0) goto LAB_144c11407;
        if ((iVar10 < 1) || ((int)((longlong)iVar2 * 8 >> 3) <= iVar10)) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c113f6;
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_res10 = 0;
            lVar8 = FUN_144bdc480(uVar7,"Invalid type ID (out of bounds) when reading property hash"
                                  ,&local_res10,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x984;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_res10 = 0;
          lVar8 = FUN_144bdc480(uVar7,"Invalid type ID (out of bounds) when reading property hash",
                                &local_res10,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x984;
LAB_144c113e2:
          *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
          FUN_144bdc8a0(local_198);
LAB_144c113f6:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(longlong *)(lVar8 + (longlong)iVar10 * 8) == 0) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c113f6;
          cVar4 = FUN_144bdbf80();
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_250 = 1;
            local_248 = FUN_144f50970;
            local_240 = &local_res8;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                  ,&local_250,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x987;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_250 = 1;
          local_248 = FUN_144f50970;
          local_240 = &local_res8;
          lVar8 = FUN_144bdc480(uVar7,
                                "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                                ,&local_250,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x987;
          goto LAB_144c113e2;
        }
        local_258[0] = FUN_144f8a220(local_res18);
        if (local_res20[0] != local_258[0]) {
          if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0'))
          goto LAB_144c113f6;
          cVar4 = FUN_144bdbf80();
          local_218 = *(longlong *)(param_1 + 0x20) + (longlong)(int)local_res8 * 8;
          if (cVar4 == '\0') {
            uVar7 = FUN_144bdc640(local_1e8);
            local_238 = 4;
            local_230 = FUN_144f50970;
            local_208 = local_res20;
            local_228 = &local_res8;
            local_220 = FUN_144c14a10;
            local_210 = FUN_144f50a00;
            local_200 = FUN_144f50a00;
            local_1f8 = local_258;
            lVar8 = FUN_144bdc480(uVar7,
                                  "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                  ,&local_238,0);
            *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
            *(undefined8 *)(lVar8 + 0x40) = 0x98e;
            FUN_144bdc690(local_1e8);
            *param_1 = -0x7ffbfe00;
            return;
          }
          uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
          local_238 = 4;
          local_230 = FUN_144f50970;
          local_208 = local_res20;
          local_228 = &local_res8;
          local_220 = FUN_144c14a10;
          local_210 = FUN_144f50a00;
          local_200 = FUN_144f50a00;
          local_1f8 = local_258;
          lVar8 = FUN_144bdc480(uVar7,
                                "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                                ,&local_238,0);
          *(undefined8 *)(lVar8 + 0x40) = 0x98e;
          goto LAB_144c113e2;
        }
        iVar11 = iVar11 + 1;
        *(undefined1 *)((longlong)(int)local_res8 + *(longlong *)(param_1 + 0x7a)) = 1;
        if ((int)uVar6 <= iVar11) {
          return;
        }
      }
      *param_1 = -0x7ffbfe00;
LAB_144c11407:
      if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
        return;
      }
      cVar4 = FUN_144bdbf80();
      if (cVar4 == '\0') {
        uVar7 = FUN_144bdc640(local_1e8);
        local_res10 = 0;
        lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res10,0);
        *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        *(undefined8 *)(lVar8 + 0x40) = 0x97f;
        FUN_144bdc690(local_1e8);
        return;
      }
      uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
      local_res10 = 0;
      lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res10,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x97f;
      goto LAB_144c114ac;
    }
  }
  else {
    *param_1 = -0x7ffbfe00;
  }
  if ((DAT_14c787870 == '\0') && (cVar4 = FUN_144bdbf80(), cVar4 == '\0')) {
    return;
  }
  cVar4 = FUN_144bdbf80();
  if (cVar4 == '\0') {
    uVar7 = FUN_144bdc640(&local_238);
    local_res8 = 0;
    lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res8,0);
    *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
    *(undefined8 *)(lVar8 + 0x40) = 0x979;
    FUN_144bdc690(&local_238);
    return;
  }
  uVar7 = FUN_144bdc810(local_198,&DAT_14c787820,1);
  local_res8 = 0;
  lVar8 = FUN_144bdc480(uVar7,"Error in input stream.",&local_res8,0);
  *(undefined8 *)(lVar8 + 0x40) = 0x979;
LAB_144c114ac:
  *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
  FUN_144bdc8a0(local_198);
  return;
}



// FUNCTION 144c114e0 FUN_144c114e0 body=4503 status=ok
// SIG undefined FUN_144c114e0(void)

/* WARNING: Removing unreachable block (ram,0x000144c12436) */

uint * FUN_144c114e0(longlong *param_1,uint *param_2,longlong *param_3)

{
  uint *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint *puVar6;
  longlong lVar7;
  int *piVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_648 [2];
  uint local_640 [2];
  code *local_638;
  uint *local_630;
  code *local_628;
  uint *local_620;
  code *local_618;
  longlong local_610;
  uint local_608;
  uint local_604;
  uint local_600 [2];
  uint local_5f8;
  longlong local_5f0;
  uint local_5e8;
  uint local_5e0;
  uint local_5dc;
  uint local_5d8;
  uint local_5d4;
  longlong local_5d0;
  uint local_5c8;
  uint local_5c4;
  uint local_5c0;
  uint local_5bc;
  uint local_5b8;
  uint local_5b4;
  uint local_5b0 [2];
  ulonglong local_5a8;
  longlong local_5a0;
  longlong local_598;
  uint local_590 [2];
  code *local_588;
  uint *local_580;
  code *local_578;
  uint *local_570;
  undefined8 local_568;
  undefined8 local_560;
  uint local_558 [2];
  ulonglong local_550;
  longlong local_548;
  longlong local_540;
  uint *local_538;
  undefined1 local_530 [4];
  undefined1 local_52c [4];
  undefined1 local_528 [8];
  longlong local_520;
  uint local_518 [2];
  code *local_510;
  longlong *local_508;
  code *local_500;
  longlong *local_4f8;
  uint local_4c8 [2];
  code *local_4c0;
  undefined8 *local_4b8;
  undefined8 local_4b0;
  code *local_4a8;
  char *local_4a0;
  code *local_498;
  uint *local_490;
  uint local_488 [2];
  code *local_480;
  longlong *local_478;
  code *local_470;
  uint *local_468;
  undefined8 local_460;
  code *local_458;
  char *local_450;
  code *local_448;
  uint *local_440;
  undefined8 local_438;
  code *local_430;
  char *local_428;
  code *local_420;
  uint *local_418;
  undefined8 local_410;
  code *local_408;
  char *local_400;
  code *local_3f8;
  uint *local_3f0;
  uint local_3e8 [2];
  code *local_3e0;
  uint *local_3d8;
  code *local_3d0;
  longlong local_3c8;
  undefined1 local_3c0 [80];
  uint local_370 [2];
  code *local_368;
  longlong *local_360;
  code *local_358;
  longlong *local_350;
  code *local_348;
  uint *local_340;
  undefined1 local_320 [80];
  undefined1 local_2d0 [336];
  undefined1 local_180 [80];
  undefined1 local_130 [80];
  undefined1 local_e0 [80];
  undefined1 local_90 [88];
  ulonglong uVar16;
  
  uVar10 = 0;
  local_res18[0] = 0;
  local_5d0 = *param_3;
  if ((param_3[1] - local_5d0 & 3U) == 0) {
    local_5a8 = (ulonglong)(param_3[1] - local_5d0) >> 2;
    local_res18[0] = 0;
    uVar11 = local_5a8;
    uVar16 = uVar10;
    uVar14 = 0;
    if (2 < (int)local_5a8) {
      do {
        uVar11 = local_5a8;
        lVar4 = 0;
        iVar9 = (int)uVar10;
        local_res18[0] = iVar9 + 1;
        uVar14 = *(uint *)(local_5d0 + (longlong)iVar9 * 4);
        local_res20[0] = uVar14;
        uVar15 = 0;
        if (uVar14 == 0) {
          local_5e8 = 0;
        }
        else {
          uVar13 = (uint)uVar16;
          if ((ulonglong)uVar14 < (ulonglong)(param_1[4] - param_1[3] >> 3)) {
            if (*(longlong *)(param_1[3] + (longlong)(int)uVar14 * 8) == 0) {
              if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar2 = FUN_144bdbf80(), cVar2 != '\0'))
              {
                cVar2 = FUN_144bdbf80();
                if (cVar2 == '\0') {
                  local_5c0 = local_res18[0] - 1;
                  uVar13 = uVar13 | 0x4000;
                  uVar3 = FUN_144bdc640(local_518);
                  local_630 = &local_5c0;
                }
                else {
                  local_5bc = local_res18[0] - 1;
                  uVar13 = uVar13 | 0x8000;
                  uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
                  local_630 = &local_5bc;
                }
                local_620 = local_res20;
                local_640[0] = 2;
                local_640[1] = 0;
                local_638 = FUN_144f50970;
                local_628 = FUN_144f50970;
                lVar7 = FUN_144bdc480(uVar3,
                                      "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type"
                                      ,local_640,0);
                *(undefined8 *)(lVar7 + 0x40) = 0xd8;
                *(char **)(lVar7 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                if ((uVar13 >> 0xf & 1) != 0) {
                  uVar13 = uVar13 & 0xffff7fff;
                  FUN_144bdc8a0(local_2d0);
                }
                uVar16 = (ulonglong)uVar13;
                if ((uVar13 >> 0xe & 1) != 0) {
                  uVar16 = (ulonglong)(uVar13 & 0xffffbfff);
                  goto LAB_144c11740;
                }
              }
            }
            else {
              lVar7 = (longlong)(int)local_res18[0];
              local_res18[0] = iVar9 + 2;
              local_648[0] = *(uint *)(local_5d0 + lVar7 * 4);
              if ((int)(local_res18[0] + local_648[0]) <= (int)local_5a8) {
                if ((3 < *(byte *)(*param_1 + 0x50)) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
                  cVar2 = FUN_144bdbf80();
                  lVar4 = param_1[3];
                  lVar7 = (longlong)(int)local_res20[0];
                  if (cVar2 == '\0') {
                    uVar13 = uVar13 | 0x40000;
                    uVar3 = FUN_144bdc640(local_518);
                  }
                  else {
                    uVar13 = uVar13 | 0x80000;
                    uVar3 = FUN_144bdc810(local_2d0,*param_1,4);
                  }
                  local_630 = local_res20;
                  local_640[0] = 3;
                  local_640[1] = 0;
                  local_620 = local_648;
                  local_638 = FUN_144f50970;
                  local_628 = FUN_144f50970;
                  local_618 = FUN_144bf0db0;
                  local_610 = lVar4 + lVar7 * 8;
                  lVar4 = FUN_144bdc480(uVar3,"Type {} ({} entries) //{}",local_640,0);
                  *(undefined8 *)(lVar4 + 0x40) = 0xe3;
                  *(char **)(lVar4 + 0x38) =
                       "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                  ;
                  if (uVar13 >> 0x13 != 0) {
                    uVar13 = uVar13 & 0xfff7ffff;
                    FUN_144bdc8a0(local_2d0);
                  }
                  if ((uVar13 >> 0x12 & 1) != 0) {
                    uVar13 = uVar13 & 0xfffbffff;
                    FUN_144bdc690(local_518);
                  }
                  uVar16 = (ulonglong)uVar13;
                  uVar11 = local_5a8;
                }
                lVar4 = *(longlong *)(param_1[3] + (longlong)(int)local_res20[0] * 8);
                local_5e8 = local_648[0];
                goto LAB_144c11a08;
              }
              if ((*(byte *)(*param_1 + 0x50) != 0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
                cVar2 = FUN_144bdbf80();
                if (cVar2 == '\0') {
                  local_5b8 = local_res18[0] - 1;
                  uVar13 = uVar13 | 0x10000;
                  uVar3 = FUN_144bdc640(local_518);
                  local_630 = &local_5b8;
                }
                else {
                  local_5b4 = local_res18[0] - 1;
                  uVar13 = uVar13 | 0x20000;
                  uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
                  local_630 = &local_5b4;
                }
                local_620 = local_648;
                local_640[0] = 2;
                local_640[1] = 0;
                local_638 = FUN_144f50970;
                local_628 = FUN_144f50970;
                lVar7 = FUN_144bdc480(uVar3,
                                      "Corrupt patch index body at index {}: invalid entries number {}"
                                      ,local_640,0);
                *(undefined8 *)(lVar7 + 0x40) = 0xdf;
                *(char **)(lVar7 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                if ((uVar13 >> 0x11 & 1) != 0) {
                  uVar13 = uVar13 & 0xfffdffff;
                  FUN_144bdc8a0(local_2d0);
                }
                uVar16 = (ulonglong)uVar13;
                if ((uVar13 >> 0x10 & 1) != 0) {
                  uVar16 = (ulonglong)(uVar13 & 0xfffeffff);
                  goto LAB_144c11740;
                }
              }
            }
          }
          else if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar2 = FUN_144bdbf80(), cVar2 != '\0'))
          {
            cVar2 = FUN_144bdbf80();
            if (cVar2 == '\0') {
              local_5c8 = local_res18[0] - 1;
              uVar13 = uVar13 | 0x1000;
              uVar3 = FUN_144bdc640(local_518);
              local_630 = &local_5c8;
            }
            else {
              local_5c4 = local_res18[0] - 1;
              uVar13 = uVar13 | 0x2000;
              uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
              local_630 = &local_5c4;
            }
            local_620 = local_res20;
            local_640[0] = 2;
            local_640[1] = 0;
            local_638 = FUN_144f50970;
            local_628 = FUN_144f50970;
            lVar7 = FUN_144bdc480(uVar3,"Corrupt patch index body at index {}: invalid TypeId {}",
                                  local_640,0);
            *(undefined8 *)(lVar7 + 0x40) = 0xd3;
            *(char **)(lVar7 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
            ;
            if ((uVar13 >> 0xd & 1) != 0) {
              uVar13 = uVar13 & 0xffffdfff;
              FUN_144bdc8a0(local_2d0);
            }
            uVar16 = (ulonglong)uVar13;
            if ((uVar13 >> 0xc & 1) != 0) {
              uVar16 = (ulonglong)(uVar13 & 0xffffefff);
LAB_144c11740:
              FUN_144bdc690(local_518);
            }
          }
          uVar15 = 0x80040200;
          local_5e8 = 0;
        }
LAB_144c11a08:
        if ((int)uVar15 < 0) {
          *param_2 = uVar15;
          return param_2;
        }
        local_5a0 = *param_1;
        local_5f8 = uVar15;
        local_5f0 = lVar4;
        if (lVar4 == 0) {
          if ((3 < *(byte *)(local_5a0 + 0x50)) ||
             (cVar2 = FUN_144bdbf80(), uVar14 = local_res18[0], cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            if (cVar2 != '\0') {
              uVar3 = FUN_144bdc810(local_2d0,*param_1,4);
            }
            else {
              uVar3 = FUN_144bdc640(local_3c0);
            }
            local_res20[0] = 0;
            local_res20[1] = 0;
            lVar4 = FUN_144bdc480(uVar3,"Finished internal, starting external",local_res20,0);
            *(undefined8 *)(lVar4 + 0x40) = 0x105;
            *(char **)(lVar4 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
            ;
            if (cVar2 != '\0') {
              FUN_144bdc8a0(local_2d0);
              uVar14 = local_res18[0];
            }
            else {
              FUN_144bdc690(local_3c0);
              uVar14 = local_res18[0];
            }
          }
          break;
        }
        if ((3 < *(byte *)(local_5a0 + 0x50)) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
          cVar2 = FUN_144bdbf80();
          if (cVar2 == '\0') {
            uVar14 = (uint)uVar16 | 0x10;
            uVar3 = FUN_144bdc640(local_320);
            local_508 = &local_5f0;
            local_518[0] = 1;
            local_518[1] = 0;
            puVar6 = local_518;
            local_510 = FUN_144bf0db0;
          }
          else {
            uVar14 = (uint)uVar16 | 0x20;
            uVar3 = FUN_144bdc810(local_2d0,*param_1,4);
            local_630 = (uint *)&local_5f0;
            local_640[0] = 1;
            local_640[1] = 0;
            puVar6 = local_640;
            local_638 = FUN_144bf0db0;
          }
          lVar4 = FUN_144bdc480(uVar3,"Internal fixups for type {}",puVar6,0);
          *(undefined8 *)(lVar4 + 0x40) = 0x109;
          *(char **)(lVar4 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
          ;
          *(undefined1 *)(lVar4 + 0x19) = 1;
          if ((uVar14 & 0x20) != 0) {
            uVar14 = uVar14 & 0xffffffdf;
            FUN_144bdc8a0(local_2d0);
          }
          uVar16 = (ulonglong)uVar14;
          if ((uVar14 & 0x10) != 0) {
            uVar16 = (ulonglong)(uVar14 & 0xffffffef);
            FUN_144bdc690(local_320);
          }
        }
        lVar4 = local_5f0;
        plVar5 = (longlong *)FUN_144befdb0(local_5f0);
        puVar6 = (uint *)FUN_144bef800(lVar4,local_530);
        uVar10 = (ulonglong)(int)local_res18[0];
        uVar14 = *puVar6;
        puVar6 = (uint *)(local_5d0 + uVar10 * 4);
        local_538 = puVar6 + (int)local_5e8;
        if (puVar6 != local_538) {
          do {
            if ((ulonglong)(param_1[2] - param_1[1]) <= (ulonglong)*puVar6) {
              if ((*(byte *)(*param_1 + 0x50) != 0) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
                cVar2 = FUN_144bdbf80();
                if (cVar2 == '\0') {
                  uVar3 = FUN_144bdc640(local_3c0);
                  local_590[0] = 2;
                  local_590[1] = 0;
                  local_588 = FUN_144f50970;
                  local_580 = local_res18;
                  local_578 = FUN_144f50a00;
                  local_570 = puVar6;
                  lVar4 = FUN_144bdc480(uVar3,
                                        "Corrupt patch index body at index {}: invalid offset {}",
                                        local_590,0);
                  *(char **)(lVar4 + 0x38) =
                       "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                  ;
                  *(undefined8 *)(lVar4 + 0x40) = 0x114;
                  FUN_144bdc690(local_3c0);
                }
                else {
                  uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
                  local_590[0] = 2;
                  local_590[1] = 0;
                  local_588 = FUN_144f50970;
                  local_580 = local_res18;
                  local_578 = FUN_144f50a00;
                  local_570 = puVar6;
                  lVar4 = FUN_144bdc480(uVar3,
                                        "Corrupt patch index body at index {}: invalid offset {}",
                                        local_590,0);
                  *(char **)(lVar4 + 0x38) =
                       "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                  ;
                  *(undefined8 *)(lVar4 + 0x40) = 0x114;
                  FUN_144bdc8a0(local_2d0);
                }
              }
              *param_2 = 0x80040200;
              goto LAB_144c124c8;
            }
            puVar12 = (uint *)((longlong)(int)*puVar6 + param_1[1]);
            if ((3 < *(byte *)(*param_1 + 0x50)) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
              cVar2 = FUN_144bdbf80();
              if (cVar2 == '\0') {
                uVar15 = (uint)uVar16 | 0x100;
                uVar3 = FUN_144bdc640(local_320);
              }
              else {
                uVar15 = (uint)uVar16 | 0x200;
                uVar3 = FUN_144bdc810(local_2d0,*param_1,4);
              }
              local_640[0] = 1;
              local_640[1] = 0;
              local_638 = FUN_144f50a00;
              local_630 = puVar6;
              lVar4 = FUN_144bdc480(uVar3,"srcOff={}",local_640,0);
              *(undefined8 *)(lVar4 + 0x40) = 0x118;
              *(char **)(lVar4 + 0x38) =
                   "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
              ;
              if ((uVar15 >> 9 & 1) != 0) {
                uVar15 = uVar15 & 0xfffffdff;
                FUN_144bdc8a0(local_2d0);
              }
              uVar16 = (ulonglong)uVar15;
              if ((uVar15 >> 8 & 1) != 0) {
                uVar16 = (ulonglong)(uVar15 & 0xfffffeff);
                FUN_144bdc690(local_320);
              }
            }
            local_5d4 = *puVar12;
            local_598 = local_5f0;
            local_5e0 = 0x80040200;
            if ((ulonglong)local_5d4 < (ulonglong)param_1[5]) {
              *puVar12 = 0;
              if (local_5d4 == 0) {
                local_600[0] = 0x80040200;
                piVar8 = (int *)(**(code **)(*plVar5 + 8))(plVar5,local_528,puVar12,local_5f0,0,0,0)
                ;
                if ((*piVar8 < 0) && ((int)local_600[0] < 0)) {
                  uVar15 = local_600[0];
                  if (DAT_14c787870 != '\0') {
                    local_540 = (longlong)puVar12 - param_1[1];
                    lVar4 = FUN_144bdc640(local_320,&DAT_14c787820,1);
                    local_640[0] = 2;
                    local_640[1] = 0;
                    *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    local_638 = FUN_144c148b0;
                    local_630 = (uint *)0x149991e80;
                    local_628 = FUN_144bdef40;
                    local_620 = local_600;
                    *(undefined8 *)(lVar4 + 0x40) = 0xadf;
                    uVar3 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",local_640,0);
                    local_518[0] = 2;
                    local_518[1] = 0;
                    local_510 = FUN_144bf0db0;
                    local_508 = &local_598;
                    local_500 = FUN_144f50a90;
                    local_4f8 = &local_540;
                    FUN_144bdc480(uVar3,
                                  "Failed to apply null fixup of type \'{}\' at data offset {}",
                                  local_518,0);
                    FUN_144bdc690(local_320);
                    uVar15 = local_600[0];
                  }
                  goto LAB_144c12325;
                }
              }
              else {
                puVar1 = (uint *)(*(longlong *)(param_1[6] + 0x48) + (longlong)(int)local_5d4 * 0xc)
                ;
                FUN_144c08450(param_1[6],&local_568,puVar1);
                if ((uVar14 & 0x1f) == 6) {
                  uVar15 = 0x80040200;
                  local_5dc = 0x80040200;
                  if (((*puVar1 & 0xf0000000) + 0xe0000000 & 0xefffffff) == 0) {
                    if (DAT_14c787870 != '\0') {
                      lVar4 = FUN_144bdc640(local_130,&DAT_14c787820,1);
                      local_460 = 2;
                      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      local_458 = FUN_144c14850;
                      local_450 = "targetItem.isKindVarN() || targetItem.isKindNote()";
                      local_448 = FUN_144bdef40;
                      local_440 = &local_5dc;
                      *(undefined8 *)(lVar4 + 0x40) = 0xac7;
                      uVar3 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",&local_460,0
                                           );
                      local_558[0] = 0;
                      local_558[1] = 0;
                      FUN_144bdc480(uVar3,"Found invalid fixup for pointer",local_558,0);
                      FUN_144bdc690(local_130);
                      uVar15 = local_5dc;
                    }
                    goto LAB_144c12325;
                  }
                }
                else if ((uVar14 & 0x1f) == 3) {
                  local_608 = 0x80040200;
                  cVar2 = FUN_144bef570(local_560,&DAT_14c6da360);
                  if (cVar2 == '\0') {
                    if (-1 < (int)local_608) goto LAB_144c12329;
                    uVar15 = local_608;
                    if (DAT_14c787870 != '\0') {
                      lVar4 = FUN_144bdc640(local_e0,&DAT_14c787820,1);
                      local_438 = 2;
                      *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                      local_430 = FUN_144c14870;
                      local_428 = "!addrAndType.m_type->equals(hkReflect::getType<char>())";
                      local_420 = FUN_144bdef40;
                      local_418 = &local_608;
                      *(undefined8 *)(lVar4 + 0x40) = 0xacc;
                      uVar3 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",&local_438,0
                                           );
                      local_4c8[0] = 1;
                      local_4c8[1] = 0;
                      local_4c0 = FUN_144bf0db0;
                      local_4b8 = &local_560;
                      FUN_144bdc480(uVar3,
                                    "Found string whose item type is \'{}\' instead of \'char\'",
                                    local_4c8,0);
                      FUN_144bdc690(local_e0);
                      uVar15 = local_608;
                    }
                    goto LAB_144c12325;
                  }
                }
                if ((*puVar1 & 0xf0000000) == 0x50000000) {
                  FUN_144bf07c0(&local_550,local_568);
                  uVar15 = 0x80040200;
                  local_5d8 = 0x80040200;
                  if (1 < local_550) {
                    uVar10 = (ulonglong)(*puVar1 & 0xffffff);
                    if (*(char *)(uVar10 + param_1[7]) == '\0') {
                      if (DAT_14c787870 != '\0') {
                        lVar4 = param_1[3];
                        local_5b0[0] = *puVar1 & 0xffffff;
                        lVar7 = FUN_144bdc640(local_90,&DAT_14c787820,
                                              CONCAT71((uint7)(uint3)(local_5b0[0] >> 8),1));
                        local_410 = 2;
                        *(char **)(lVar7 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                        local_408 = FUN_144c14850;
                        local_400 = "decl && !m_propHashVerified[targetItem.getIndex()]";
                        local_3f8 = FUN_144bdef40;
                        local_3f0 = &local_5d8;
                        *(undefined8 *)(lVar7 + 0x40) = 0xad5;
                        uVar3 = FUN_144bdc480(lVar7,"HK_RETURN_RES_IF({}) returning {}. ",&local_410
                                              ,0);
                        local_3e8[0] = 2;
                        local_3e8[1] = 0;
                        local_3e0 = FUN_144f50a00;
                        local_3d8 = local_5b0;
                        local_3d0 = FUN_144bf0db0;
                        local_3c8 = lVar4 + uVar10 * 8;
                        FUN_144bdc480(uVar3,
                                      "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                                      ,local_3e8,0);
                        FUN_144bdc690(local_90);
                        uVar15 = local_5d8;
                      }
                      goto LAB_144c12325;
                    }
                  }
                }
                local_604 = 0x80040200;
                piVar8 = (int *)(**(code **)(*plVar5 + 8))
                                          (plVar5,local_52c,puVar12,local_598,local_568,local_560,
                                           puVar1[2]);
                if ((*piVar8 < 0) && ((int)local_604 < 0)) {
                  uVar15 = local_604;
                  if (DAT_14c787870 != '\0') {
                    local_548 = (longlong)puVar12 - param_1[1];
                    lVar4 = FUN_144bdc640(local_3c0,&DAT_14c787820,1);
                    local_590[0] = 2;
                    local_590[1] = 0;
                    *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                    local_588 = FUN_144c14890;
                    local_580 = (uint *)0x149991dc0;
                    local_578 = FUN_144bdef40;
                    local_570 = &local_604;
                    *(undefined8 *)(lVar4 + 0x40) = 0xada;
                    uVar3 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",local_590,0);
                    local_370[0] = 3;
                    local_370[1] = 0;
                    local_368 = FUN_144bf0db0;
                    local_360 = &local_598;
                    local_358 = FUN_144f50a90;
                    local_350 = &local_548;
                    local_348 = FUN_144f50a00;
                    local_340 = &local_5d4;
                    FUN_144bdc480(uVar3,
                                  "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                                  ,local_370,0);
                    FUN_144bdc690(local_3c0);
                    uVar15 = local_604;
                  }
                  goto LAB_144c12325;
                }
              }
            }
            else {
              uVar15 = 0x80040200;
              if (DAT_14c787870 != '\0') {
                local_520 = (longlong)puVar12 - param_1[1];
                lVar4 = FUN_144bdc640(local_180,&DAT_14c787820,1);
                local_4b0 = 2;
                *(char **)(lVar4 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
                local_4a8 = FUN_144c14830;
                local_4a0 = "tgtIdx >= m_numItems";
                local_498 = FUN_144bdef40;
                local_490 = &local_5e0;
                *(undefined8 *)(lVar4 + 0x40) = 0xab8;
                uVar3 = FUN_144bdc480(lVar4,"HK_RETURN_RES_IF({}) returning {}. ",&local_4b0,0);
                local_488[0] = 2;
                local_488[1] = 0;
                local_480 = FUN_144f50a90;
                local_478 = &local_520;
                local_470 = FUN_144f50a00;
                local_468 = &local_5d4;
                FUN_144bdc480(uVar3,"Corrupt data at offset {}: invalid target index {}",local_488,0
                             );
                FUN_144bdc690(local_180);
                uVar15 = local_5e0;
              }
LAB_144c12325:
              if ((int)uVar15 < 0) {
                *param_2 = uVar15;
LAB_144c124c8:
                if (*(byte *)(local_5a0 + 0x50) < 4) {
                  return param_2;
                }
                lVar4 = FUN_144bdc640(local_3c0,local_5a0,4);
                *(undefined1 *)(lVar4 + 0x19) = 0xff;
                FUN_144bdc690(local_3c0);
                return param_2;
              }
            }
LAB_144c12329:
            puVar6 = puVar6 + 1;
            local_res18[0] = local_res18[0] + 1;
            uVar10 = (ulonglong)local_res18[0];
          } while (puVar6 != local_538);
        }
        if (3 < *(byte *)(local_5a0 + 0x50)) {
          lVar4 = FUN_144bdc640(local_320,local_5a0,4);
          *(undefined1 *)(lVar4 + 0x19) = 0xff;
          FUN_144bdc690(local_320);
          uVar10 = (ulonglong)local_res18[0];
        }
        uVar11 = local_5a8;
        uVar14 = (uint)uVar10;
      } while ((int)((uint)uVar10 + 2) < (int)local_5a8);
    }
    if ((int)uVar11 <= (int)(uVar14 + 2)) {
      *param_2 = 0;
      return param_2;
    }
    if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 != '\0') {
        uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
      }
      else {
        uVar3 = FUN_144bdc640(local_3c0);
      }
      local_res20[0] = 0;
      local_res20[1] = 0;
      lVar4 = FUN_144bdc480(uVar3,"Unexpected external fixups",local_res20,0);
      *(undefined8 *)(lVar4 + 0x40) = 0x124;
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
      ;
      if (cVar2 != '\0') {
        FUN_144bdc8a0(local_2d0);
      }
      else {
        FUN_144bdc690(local_3c0);
      }
    }
  }
  else if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
    cVar2 = FUN_144bdbf80();
    if (cVar2 == '\0') {
      uVar3 = FUN_144bdc640(local_370);
      local_res20[0] = 0;
      local_res20[1] = 0;
      lVar4 = FUN_144bdc480(uVar3,"PATCH_DATA section has the wrong size",local_res20,0);
      *(char **)(lVar4 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
      ;
      *(undefined8 *)(lVar4 + 0x40) = 0xec;
      *(undefined4 *)(lVar4 + 0x1c) = 0x20f2cca4;
      FUN_144bdc690(local_370);
      *param_2 = 0x80040200;
      return param_2;
    }
    uVar3 = FUN_144bdc810(local_2d0,*param_1,1);
    local_5d0 = 0;
    lVar4 = FUN_144bdc480(uVar3,"PATCH_DATA section has the wrong size",&local_5d0,0);
    *(char **)(lVar4 + 0x38) =
         "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
    ;
    *(undefined8 *)(lVar4 + 0x40) = 0xec;
    *(undefined4 *)(lVar4 + 0x1c) = 0x20f2cca4;
    FUN_144bdc8a0(local_2d0);
    *param_2 = 0x80040200;
    return param_2;
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c12680 FUN_144c12680 body=2609 status=ok
// SIG undefined FUN_144c12680(void)

/* WARNING: Removing unreachable block (ram,0x000144c12e88) */

int * FUN_144c12680(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  uint local_res18 [2];
  longlong local_res20;
  uint local_2a8 [2];
  longlong local_2a0;
  code *local_298;
  uint *local_290;
  code *local_288;
  uint *local_280;
  code *local_278;
  longlong local_270;
  int local_250;
  longlong local_248;
  uint local_240;
  ulonglong local_238;
  uint local_230;
  uint local_22c;
  uint local_228;
  uint local_224;
  uint local_220;
  uint local_21c;
  int local_218 [2];
  undefined1 local_210 [80];
  undefined1 local_1c0 [8];
  longlong local_1b8;
  longlong local_1b0;
  code *local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  undefined1 local_188 [336];
  ulonglong uVar14;
  
  uVar10 = 0;
  local_res18[0] = 0;
  local_1b8 = *param_3;
  if ((param_3[1] - local_1b8 & 3U) == 0) {
    local_238 = (ulonglong)(param_3[1] - local_1b8) >> 2;
    local_res18[0] = 0;
    uVar14 = uVar10;
    uVar15 = local_238;
    uVar12 = 0;
    if (2 < (int)local_238) {
      do {
        lVar8 = local_1b8;
        uVar15 = local_238;
        lVar5 = 0;
        iVar9 = (int)uVar10;
        local_res18[0] = iVar9 + 1;
        uVar12 = *(uint *)(local_1b8 + (longlong)iVar9 * 4);
        local_res20 = CONCAT44(local_res20._4_4_,uVar12);
        iVar17 = 0;
        if (uVar12 == 0) {
          local_240 = 0;
        }
        else {
          uVar11 = (uint)uVar14;
          if ((ulonglong)uVar12 < (ulonglong)(param_1[4] - param_1[3] >> 3)) {
            if (*(longlong *)(param_1[3] + (longlong)(int)uVar12 * 8) == 0) {
              if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0'))
              {
                cVar3 = FUN_144bdbf80();
                if (cVar3 == '\0') {
                  local_228 = local_res18[0] - 1;
                  uVar11 = uVar11 | 0x4000;
                  uVar4 = FUN_144bdc640(local_210);
                  local_290 = &local_228;
                }
                else {
                  local_224 = local_res18[0] - 1;
                  uVar11 = uVar11 | 0x8000;
                  uVar4 = FUN_144bdc810(local_188,*param_1,1);
                  local_290 = &local_224;
                }
                local_280 = (uint *)&local_res20;
                local_2a0 = 2;
                local_298 = FUN_144f50970;
                local_288 = FUN_144f50970;
                lVar6 = FUN_144bdc480(uVar4,
                                      "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type"
                                      ,&local_2a0,0);
                *(undefined8 *)(lVar6 + 0x40) = 0xd8;
                *(char **)(lVar6 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                if ((uVar11 >> 0xf & 1) != 0) {
                  uVar11 = uVar11 & 0xffff7fff;
                  FUN_144bdc8a0(local_188);
                }
                uVar14 = (ulonglong)uVar11;
                if ((uVar11 >> 0xe & 1) != 0) {
                  uVar14 = (ulonglong)(uVar11 & 0xffffbfff);
                  goto LAB_144c128c6;
                }
              }
            }
            else {
              lVar6 = (longlong)(int)local_res18[0];
              local_res18[0] = iVar9 + 2;
              local_2a8[0] = *(uint *)(local_1b8 + lVar6 * 4);
              if ((int)(local_2a8[0] + local_res18[0]) <= (int)local_238) {
                if ((3 < *(byte *)(*param_1 + 0x50)) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
                  cVar3 = FUN_144bdbf80();
                  lVar5 = param_1[3];
                  lVar6 = (longlong)(int)(uint)local_res20;
                  if (cVar3 == '\0') {
                    uVar11 = uVar11 | 0x40000;
                    uVar4 = FUN_144bdc640(local_210);
                  }
                  else {
                    uVar11 = uVar11 | 0x80000;
                    uVar4 = FUN_144bdc810(local_188,*param_1,4);
                  }
                  local_290 = (uint *)&local_res20;
                  local_2a0 = 3;
                  local_280 = local_2a8;
                  local_298 = FUN_144f50970;
                  local_288 = FUN_144f50970;
                  local_278 = FUN_144bf0db0;
                  local_270 = lVar5 + lVar6 * 8;
                  lVar5 = FUN_144bdc480(uVar4,"Type {} ({} entries) //{}",&local_2a0,0);
                  *(undefined8 *)(lVar5 + 0x40) = 0xe3;
                  *(char **)(lVar5 + 0x38) =
                       "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                  ;
                  if (uVar11 >> 0x13 != 0) {
                    uVar11 = uVar11 & 0xfff7ffff;
                    FUN_144bdc8a0(local_188);
                  }
                  if ((uVar11 >> 0x12 & 1) != 0) {
                    uVar11 = uVar11 & 0xfffbffff;
                    FUN_144bdc690(local_210);
                  }
                  uVar14 = (ulonglong)uVar11;
                  uVar15 = local_238;
                }
                lVar5 = *(longlong *)(param_1[3] + (longlong)(int)(uint)local_res20 * 8);
                local_240 = local_2a8[0];
                goto LAB_144c12b83;
              }
              if ((*(byte *)(*param_1 + 0x50) != 0) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
                cVar3 = FUN_144bdbf80();
                if (cVar3 == '\0') {
                  local_220 = local_res18[0] - 1;
                  uVar11 = uVar11 | 0x10000;
                  uVar4 = FUN_144bdc640(local_210);
                  local_290 = &local_220;
                }
                else {
                  local_21c = local_res18[0] - 1;
                  uVar11 = uVar11 | 0x20000;
                  uVar4 = FUN_144bdc810(local_188,*param_1,1);
                  local_290 = &local_21c;
                }
                local_280 = local_2a8;
                local_2a0 = 2;
                local_298 = FUN_144f50970;
                local_288 = FUN_144f50970;
                lVar6 = FUN_144bdc480(uVar4,
                                      "Corrupt patch index body at index {}: invalid entries number {}"
                                      ,&local_2a0,0);
                *(undefined8 *)(lVar6 + 0x40) = 0xdf;
                *(char **)(lVar6 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                if ((uVar11 >> 0x11 & 1) != 0) {
                  uVar11 = uVar11 & 0xfffdffff;
                  FUN_144bdc8a0(local_188);
                }
                uVar14 = (ulonglong)uVar11;
                if ((uVar11 >> 0x10 & 1) != 0) {
                  uVar14 = (ulonglong)(uVar11 & 0xfffeffff);
                  goto LAB_144c128c6;
                }
              }
            }
          }
          else if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0'))
          {
            cVar3 = FUN_144bdbf80();
            if (cVar3 == '\0') {
              local_230 = local_res18[0] - 1;
              uVar11 = uVar11 | 0x1000;
              uVar4 = FUN_144bdc640(local_210);
              local_290 = &local_230;
            }
            else {
              local_22c = local_res18[0] - 1;
              uVar11 = uVar11 | 0x2000;
              uVar4 = FUN_144bdc810(local_188,*param_1,1);
              local_290 = &local_22c;
            }
            local_280 = (uint *)&local_res20;
            local_2a0 = 2;
            local_298 = FUN_144f50970;
            local_288 = FUN_144f50970;
            lVar6 = FUN_144bdc480(uVar4,"Corrupt patch index body at index {}: invalid TypeId {}",
                                  &local_2a0,0);
            *(undefined8 *)(lVar6 + 0x40) = 0xd3;
            *(char **)(lVar6 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
            ;
            if ((uVar11 >> 0xd & 1) != 0) {
              uVar11 = uVar11 & 0xffffdfff;
              FUN_144bdc8a0(local_188);
            }
            uVar14 = (ulonglong)uVar11;
            if ((uVar11 >> 0xc & 1) != 0) {
              uVar14 = (ulonglong)(uVar11 & 0xffffefff);
LAB_144c128c6:
              FUN_144bdc690(local_210);
            }
          }
          iVar17 = -0x7ffbfe00;
          local_240 = 0;
        }
LAB_144c12b83:
        if (iVar17 < 0) {
          *param_2 = iVar17;
          return param_2;
        }
        lVar6 = *param_1;
        local_250 = iVar17;
        local_248 = lVar5;
        if (lVar5 == 0) {
          if ((3 < *(byte *)(lVar6 + 0x50)) ||
             (cVar3 = FUN_144bdbf80(), uVar12 = local_res18[0], cVar3 != '\0')) {
            cVar3 = FUN_144bdbf80();
            if (cVar3 != '\0') {
              uVar4 = FUN_144bdc810(local_188,*param_1,4);
            }
            else {
              uVar4 = FUN_144bdc640(local_210);
            }
            local_res20 = 0;
            lVar5 = FUN_144bdc480(uVar4,"Finished internal, starting external",&local_res20,0);
            *(undefined8 *)(lVar5 + 0x40) = 0x105;
            *(char **)(lVar5 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
            ;
            if (cVar3 != '\0') {
              FUN_144bdc8a0(local_188);
              uVar12 = local_res18[0];
            }
            else {
              FUN_144bdc690(local_210);
              uVar12 = local_res18[0];
            }
          }
          break;
        }
        if ((3 < *(byte *)(lVar6 + 0x50)) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
          cVar3 = FUN_144bdbf80();
          if (cVar3 == '\0') {
            uVar12 = (uint)uVar14 | 0x10;
            uVar4 = FUN_144bdc640(local_210);
            local_1b0 = 1;
            local_1a8 = FUN_144bf0db0;
            plVar16 = &local_1b0;
            local_1a0 = &local_248;
          }
          else {
            uVar12 = (uint)uVar14 | 0x20;
            uVar4 = FUN_144bdc810(local_188,*param_1,4);
            local_2a0 = 1;
            local_298 = FUN_144bf0db0;
            plVar16 = &local_2a0;
            local_290 = (uint *)&local_248;
          }
          lVar5 = FUN_144bdc480(uVar4,"Internal fixups for type {}",plVar16,0);
          *(undefined8 *)(lVar5 + 0x40) = 0x109;
          *(char **)(lVar5 + 0x38) =
               "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
          ;
          *(undefined1 *)(lVar5 + 0x19) = 1;
          if ((uVar12 & 0x20) != 0) {
            uVar12 = uVar12 & 0xffffffdf;
            FUN_144bdc8a0(local_188);
          }
          uVar14 = (ulonglong)uVar12;
          if ((uVar12 & 0x10) != 0) {
            uVar14 = (ulonglong)(uVar12 & 0xffffffef);
            FUN_144bdc690(local_210);
          }
        }
        puVar7 = (uint *)FUN_144bef800(local_248,local_1c0);
        uVar10 = (ulonglong)(int)local_res18[0];
        uVar12 = *puVar7;
        puVar7 = (uint *)(lVar8 + uVar10 * 4);
        puVar1 = puVar7 + (int)local_240;
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          lVar5 = param_1[1];
          uVar11 = *puVar7;
          if ((ulonglong)(param_1[2] - lVar5) <= (ulonglong)uVar11) {
            if ((*(byte *)(*param_1 + 0x50) != 0) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
              cVar3 = FUN_144bdbf80();
              if (cVar3 == '\0') {
                uVar4 = FUN_144bdc640(local_210);
                local_2a0 = 2;
                local_298 = FUN_144f50970;
                local_290 = local_res18;
                local_288 = FUN_144f50a00;
                local_280 = puVar7;
                lVar5 = FUN_144bdc480(uVar4,
                                      "Corrupt patch index body at index {}: invalid offset {}",
                                      &local_2a0,0);
                *(char **)(lVar5 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                *(undefined8 *)(lVar5 + 0x40) = 0x114;
                FUN_144bdc690(local_210);
              }
              else {
                uVar4 = FUN_144bdc810(local_188,*param_1,1);
                local_2a0 = 2;
                local_298 = FUN_144f50970;
                local_290 = local_res18;
                local_288 = FUN_144f50a00;
                local_280 = puVar7;
                lVar5 = FUN_144bdc480(uVar4,
                                      "Corrupt patch index body at index {}: invalid offset {}",
                                      &local_2a0,0);
                *(char **)(lVar5 + 0x38) =
                     "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
                ;
                *(undefined8 *)(lVar5 + 0x40) = 0x114;
                FUN_144bdc8a0(local_188);
              }
            }
            bVar2 = *(byte *)(lVar6 + 0x50);
            *param_2 = -0x7ffbfe00;
            if (bVar2 < 4) {
              return param_2;
            }
            lVar5 = FUN_144bdc640(local_210,lVar6,4);
            *(undefined1 *)(lVar5 + 0x19) = 0xff;
            FUN_144bdc690(local_210);
            return param_2;
          }
          if ((3 < *(byte *)(*param_1 + 0x50)) || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
            cVar3 = FUN_144bdbf80();
            if (cVar3 == '\0') {
              uVar13 = (uint)uVar14 | 0x100;
              uVar4 = FUN_144bdc640(local_210);
            }
            else {
              uVar13 = (uint)uVar14 | 0x200;
              uVar4 = FUN_144bdc810(local_188,*param_1,4);
            }
            local_2a0 = 1;
            local_298 = FUN_144f50a00;
            local_290 = puVar7;
            lVar8 = FUN_144bdc480(uVar4,"srcOff={}",&local_2a0,0);
            *(undefined8 *)(lVar8 + 0x40) = 0x118;
            *(char **)(lVar8 + 0x38) =
                 "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
            ;
            if ((uVar13 >> 9 & 1) != 0) {
              uVar13 = uVar13 & 0xfffffdff;
              FUN_144bdc8a0(local_188);
            }
            uVar14 = (ulonglong)uVar13;
            if ((uVar13 >> 8 & 1) != 0) {
              uVar14 = (ulonglong)(uVar13 & 0xfffffeff);
              FUN_144bdc690(local_210);
            }
          }
          if ((uVar12 & 0x1f) == 3) {
            local_218[0] = (uVar11 + (int)lVar5) - *(int *)(param_1[6] + 0x38);
            FUN_144bdd4d0(*(undefined8 *)(param_1[6] + 0x120),local_198,local_218);
          }
          local_res18[0] = local_res18[0] + 1;
          uVar10 = (ulonglong)local_res18[0];
        }
        if (3 < *(byte *)(lVar6 + 0x50)) {
          lVar5 = FUN_144bdc640(local_210,lVar6,4);
          *(undefined1 *)(lVar5 + 0x19) = 0xff;
          FUN_144bdc690(local_210);
          uVar10 = (ulonglong)local_res18[0];
        }
        uVar15 = local_238;
        uVar12 = (uint)uVar10;
      } while ((int)((uint)uVar10 + 2) < (int)local_238);
    }
    if ((int)uVar15 <= (int)(uVar12 + 2)) {
      *param_2 = 0;
      return param_2;
    }
    if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
      cVar3 = FUN_144bdbf80();
      if (cVar3 != '\0') {
        uVar4 = FUN_144bdc810(local_188,*param_1,1);
      }
      else {
        uVar4 = FUN_144bdc640(local_210);
      }
      local_res20 = 0;
      lVar5 = FUN_144bdc480(uVar4,"Unexpected external fixups",&local_res20,0);
      *(undefined8 *)(lVar5 + 0x40) = 0x124;
      *(char **)(lVar5 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
      ;
      if (cVar3 != '\0') {
        FUN_144bdc8a0(local_188);
      }
      else {
        FUN_144bdc690(local_210);
      }
    }
  }
  else if ((*(char *)(*param_1 + 0x50) != '\0') || (cVar3 = FUN_144bdbf80(), cVar3 != '\0')) {
    cVar3 = FUN_144bdbf80();
    if (cVar3 == '\0') {
      uVar4 = FUN_144bdc640(&local_2a0);
      local_res20 = 0;
      lVar5 = FUN_144bdc480(uVar4,"PATCH_DATA section has the wrong size",&local_res20,0);
      *(char **)(lVar5 + 0x38) =
           "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
      ;
      *(undefined8 *)(lVar5 + 0x40) = 0xec;
      *(undefined4 *)(lVar5 + 0x1c) = 0x20f2cca4;
      FUN_144bdc690(&local_2a0);
      *param_2 = -0x7ffbfe00;
      return param_2;
    }
    uVar4 = FUN_144bdc810(local_188,*param_1,1);
    local_238 = 0;
    lVar5 = FUN_144bdc480(uVar4,"PATCH_DATA section has the wrong size",&local_238,0);
    *(char **)(lVar5 + 0x38) =
         "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h"
    ;
    *(undefined8 *)(lVar5 + 0x40) = 0xec;
    *(undefined4 *)(lVar5 + 0x1c) = 0x20f2cca4;
    FUN_144bdc8a0(local_188);
    *param_2 = -0x7ffbfe00;
    return param_2;
  }
  *param_2 = -0x7ffbfe00;
  return param_2;
}



// FUNCTION 144c130c0 FUN_144c130c0 body=1191 status=ok
// SIG undefined FUN_144c130c0(void)

void FUN_144c130c0(ulonglong *param_1,uint *param_2,longlong *param_3)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  code *pcVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  undefined8 local_res10;
  undefined8 *local_228;
  code *pcStack_220;
  undefined8 *local_218;
  uint uStack_210;
  undefined4 uStack_20c;
  undefined1 *local_208;
  int local_200;
  uint local_1fc;
  undefined1 local_1f8 [16];
  undefined8 *local_1e8;
  code *pcStack_1e0;
  undefined8 *local_1d8;
  uint uStack_1d0;
  undefined4 uStack_1cc;
  undefined1 local_1c8 [80];
  undefined1 local_178 [336];
  
  bVar1 = false;
  bVar14 = false;
  local_208 = local_1f8;
  local_res10 = local_res10 & 0xffffffff00000000;
  lVar9 = *param_3;
  local_200 = 0;
  local_1fc = 0x80000010;
  iVar12 = (int)(param_3[1] - lVar9 >> 5);
  iVar4 = 0;
  if (0x10 < iVar12) {
    FUN_14180788c(&local_208,&PTR_vftable_14c6e47c0,(longlong)iVar12);
    iVar4 = local_200;
  }
  local_200 = iVar12;
  if (iVar4 < iVar12) {
    uVar10 = (ulonglong)(uint)(iVar12 - iVar4);
    puVar6 = local_208 + iVar4;
    if (0 < iVar12 - iVar4) {
      do {
        if (puVar6 != (undefined1 *)0x0) {
          *puVar6 = 0;
        }
        uVar10 = uVar10 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar10 != 0);
    }
  }
  else {
    local_200 = iVar4;
    if (iVar12 < iVar4) {
      local_200 = iVar12;
    }
  }
  uVar5 = *param_2;
joined_r0x000144c13180:
  do {
    if ((int)uVar5 < 0) {
LAB_144c13513:
      *(undefined4 *)(param_1 + 6) = 0;
LAB_144c13517:
      local_200 = 0;
      if ((-1 < (int)local_1fc) && (local_208 != (undefined1 *)0x0)) {
        (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                  (&PTR_vftable_14c6e47c0,local_208,local_1fc & 0x7fffffff);
      }
      return;
    }
    iVar4 = FUN_144c078c0(param_1,0);
    uVar10 = local_res10;
    if (iVar4 == 1) {
      if ((1 < DAT_14c787870) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        bVar14 = cVar2 != '\0';
        if (bVar14) {
          uVar7 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          uVar7 = FUN_144bdc640(local_1c8);
        }
        cVar2 = !bVar14;
        local_res10 = 0;
        lVar9 = FUN_144bdc480(uVar7,"IO error",&local_res10,0);
        *(undefined8 *)(lVar9 + 0x40) = 0x52f;
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (bVar14) {
          FUN_144bdc8a0(local_178);
        }
LAB_144c13501:
        if (cVar2 != '\0') {
          FUN_144bdc690(local_1c8);
        }
      }
LAB_144c1350c:
      *param_2 = 0x80040200;
      goto LAB_144c13513;
    }
    if (iVar4 == 0) goto LAB_144c13517;
    piVar13 = (int *)*param_3;
    while( true ) {
      if (piVar13 == (int *)param_3[1]) {
        local_res10._0_3_ =
             CONCAT12((char)((uint)iVar4 >> 8),
                      CONCAT11((char)((uint)iVar4 >> 0x10),(char)((uint)iVar4 >> 0x18)));
        uVar5 = CONCAT13((char)iVar4,(undefined3)local_res10);
        local_res10._5_3_ = SUB83(uVar10,5);
        local_res10._0_5_ = (uint5)uVar5;
        if ((DAT_14c787870 < 2) && (cVar2 = FUN_144bdbf80(), cVar2 == '\0')) goto LAB_144c1350c;
        cVar3 = FUN_144bdbf80();
        if (cVar3 != '\0') {
          cVar2 = '\0';
          uVar7 = FUN_144bdc810(local_178,&DAT_14c787820,2);
        }
        else {
          cVar2 = '\x10';
          uVar7 = FUN_144bdc640(local_1c8);
        }
        local_228 = (undefined8 *)&DAT_00000001;
        pcStack_220 = FUN_144be3530;
        local_218 = &local_res10;
        local_1e8 = (undefined8 *)&DAT_00000001;
        pcStack_1e0 = FUN_144be3530;
        local_1d8 = local_218;
        lVar9 = FUN_144bdc480(uVar7,"Unexpected section {}",&local_1e8,0);
        *(undefined8 *)(lVar9 + 0x40) = 0x558;
        *(char **)(lVar9 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
        if (cVar3 != '\0') {
          FUN_144bdc8a0(local_178);
        }
        goto LAB_144c13501;
      }
      if (*piVar13 == iVar4) break;
      piVar13 = piVar13 + 8;
    }
    iVar4 = (int)((longlong)piVar13 - lVar9 >> 5);
    if (local_208[iVar4] == '\0') {
      local_208[iVar4] = 1;
      if (*(longlong *)(piVar13 + 6) == 0) {
        uVar10 = (*param_1 - 8) +
                 (ulonglong)
                 (*(uint *)((param_1[5] - 0x14) + (longlong)(int)param_1[6] * 0x18) & 0x3fffffff);
        if (param_1[1] < uVar10) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          uVar10 = param_1[1];
        }
        *param_1 = uVar10;
        *param_2 = -(uint)((char)param_1[3] != '\0') & 0x80040200;
      }
      else {
        local_228 = (undefined8 *)*param_1;
        pcStack_220 = (code *)((longlong)local_228 +
                              (longlong)
                              (int)(*(uint *)((param_1[5] - 0x14) + (longlong)(int)param_1[6] * 0x18
                                             ) & 0x3fffffff) + -8);
        pcVar11 = pcStack_220;
        if ((code *)param_1[1] < pcStack_220) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 1;
          pcVar11 = (code *)param_1[1];
        }
        *param_1 = (ulonglong)pcVar11;
        uStack_1d0 = uStack_1d0 & 0xffffff00;
        uStack_210 = uStack_1d0;
        uStack_20c = uStack_1cc;
        local_218 = local_228;
        local_1e8 = local_228;
        pcStack_1e0 = pcStack_220;
        local_1d8 = local_228;
        (**(code **)(piVar13 + 6))(&local_228);
      }
      if (-1 < (int)*param_2) {
        lVar8 = param_1[5] + (longlong)(int)param_1[6] * 0x18;
        if (*param_1 - param_1[2] !=
            (ulonglong)(*(uint *)(lVar8 + -0x14) & 0x3fffffff) + *(longlong *)(lVar8 + -0x10)) {
          *(byte *)(param_1 + 3) = (byte)param_1[3] | 2;
          uVar5 = *param_2;
          goto joined_r0x000144c13180;
        }
        uVar10 = *(ulonglong *)(lVar8 + -8);
        *(int *)(param_1 + 6) = (int)param_1[6] + -1;
        param_1[4] = uVar10;
      }
      uVar5 = *param_2;
      goto joined_r0x000144c13180;
    }
    if ((1 < DAT_14c787870) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        bVar1 = true;
        uVar7 = FUN_144bdc640(local_1c8);
      }
      else {
        bVar14 = true;
        uVar7 = FUN_144bdc810(local_178,&DAT_14c787820,2);
      }
      local_res10 = 0;
      lVar8 = FUN_144bdc480(uVar7,"Duplicate section",&local_res10,0);
      *(undefined8 *)(lVar8 + 0x40) = 0x551;
      *(char **)(lVar8 + 0x38) = "Format\\Tagfile\\hkTagfileReadFormat.cpp";
      if (bVar14) {
        bVar14 = false;
        FUN_144bdc8a0(local_178);
      }
      if (bVar1) {
        bVar1 = false;
        FUN_144bdc690(local_1c8);
      }
    }
    *param_2 = 0x80040200;
    uVar5 = 0x80040200;
  } while( true );
}



// FUNCTION 144c13570 FUN_144c13570 body=123 status=ok
// SIG undefined FUN_144c13570(void)

undefined8 * FUN_144c13570(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  DAT_14c6e4950 = 1;
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"TagfileReadFormat");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144c070e0(lVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c135f0 FUN_144c135f0 body=253 status=ok
// SIG undefined FUN_144c135f0(void)

uint * FUN_144c135f0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c136c5:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 8) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144c136c5;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144c136f0 FUN_144c136f0 body=99 status=ok
// SIG undefined FUN_144c136f0(void)

uint * FUN_144c136f0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)(*param_1 + (ulonglong)uVar3 * 8) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144c13760 FUN_144c13760 body=259 status=ok
// SIG undefined FUN_144c13760(void)

void FUN_144c13760(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144c13870 FUN_144c13870 body=336 status=ok
// SIG undefined FUN_144c13870(void)

void FUN_144c13870(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  lVar2 = (**(code **)(*param_2 + 8))(param_2);
  uVar1 = *(uint *)(param_1 + 1);
  puVar5 = (undefined4 *)*param_1;
  uVar4 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar7 = puVar5 + 5;
    uVar6 = (ulonglong)uVar1;
    puVar3 = (undefined4 *)(lVar2 + 0x14);
    puVar8 = puVar5;
    do {
      if (puVar3 + -5 != (undefined4 *)0x0) {
        puVar3[-5] = *puVar8;
        puVar3[-4] = puVar7[-4];
        *(undefined8 *)(puVar3 + -3) = 0;
        puVar3[-1] = 0;
        *puVar3 = 0x80000000;
        FUN_144c076e0(puVar7 + -3);
        *(undefined8 *)(puVar3 + -3) = *(undefined8 *)(puVar7 + -3);
        puVar3[-1] = puVar7[-1];
        *puVar3 = *puVar7;
        *(undefined8 *)(puVar7 + -3) = 0;
        *(undefined8 *)(puVar7 + -1) = 0;
      }
      puVar3 = puVar3 + 6;
      puVar8 = puVar8 + 6;
      puVar7 = puVar7 + 6;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
    do {
      FUN_144c07760(puVar5);
      puVar5 = puVar5 + 6;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = lVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c139c0 FUN_144c139c0 body=179 status=ok
// SIG undefined FUN_144c139c0(void)

void FUN_144c139c0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c13a80 FUN_144c13a80 body=247 status=ok
// SIG undefined FUN_144c13a80(void)

void FUN_144c13a80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c13b80 FUN_144c13b80 body=291 status=ok
// SIG undefined FUN_144c13b80(void)

ulonglong FUN_144c13b80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144c13cb0 FUN_144c13cb0 body=291 status=ok
// SIG undefined FUN_144c13cb0(void)

ulonglong FUN_144c13cb0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144c13de0 FUN_144c13de0 body=247 status=ok
// SIG undefined FUN_144c13de0(void)

void FUN_144c13de0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c13ee0 FUN_144c13ee0 body=269 status=ok
// SIG undefined FUN_144c13ee0(void)

void FUN_144c13ee0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c13ff0 FUN_144c13ff0 body=269 status=ok
// SIG undefined FUN_144c13ff0(void)

void FUN_144c13ff0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c14100 FUN_144c14100 body=235 status=ok
// SIG undefined FUN_144c14100(void)

void FUN_144c14100(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c141f0 FUN_144c141f0 body=258 status=ok
// SIG undefined FUN_144c141f0(void)

void FUN_144c141f0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c14300 FUN_144c14300 body=291 status=ok
// SIG undefined FUN_144c14300(void)

ulonglong FUN_144c14300(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar5 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  uVar10 = (ulonglong)*(uint *)(param_1 + 1);
  puVar7 = (undefined4 *)*param_1;
  puVar6 = puVar5;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar6 != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *puVar6 = *puVar7;
        puVar6[1] = uVar2;
        puVar6[2] = uVar3;
        puVar6[3] = uVar4;
        *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(puVar7 + 4);
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = puVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144c14430 FUN_144c14430 body=111 status=ok
// SIG undefined FUN_144c14430(void)

undefined4 *
FUN_144c14430(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6e4460;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c144a0 FUN_144c144a0 body=472 status=ok
// SIG undefined FUN_144c144a0(void)

ulonglong FUN_144c144a0(ulonglong *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  ulonglong local_res18;
  ulonglong local_res20;
  
  uVar3 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar3 * 2;
  uVar9 = param_3;
  if (param_3 < uVar7) {
    uVar9 = uVar7;
  }
  if ((0x7ffffffe < uVar9) && (uVar9 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res20 = (**(code **)(*param_2 + 0x10))(param_2,uVar9 * 0x18,&local_res18);
  uVar1 = (uint)param_1[1];
  local_res8 = (ulonglong)uVar1;
  puVar6 = (undefined4 *)*param_1;
  uVar7 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined4 *)(local_res20 + 0x14);
    puVar8 = puVar6 + 5;
    puVar5 = puVar6;
    do {
      if (puVar4 + -5 != (undefined4 *)0x0) {
        puVar4[-5] = *puVar5;
        puVar4[-4] = puVar8[-4];
        *(undefined8 *)(puVar4 + -3) = 0;
        puVar4[-1] = 0;
        *puVar4 = 0x80000000;
        FUN_144c076e0(puVar8 + -3);
        *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar8 + -3);
        puVar4[-1] = puVar8[-1];
        *puVar4 = *puVar8;
        *(undefined8 *)(puVar8 + -3) = 0;
        *(undefined8 *)(puVar8 + -1) = 0;
      }
      puVar4 = puVar4 + 6;
      puVar5 = puVar5 + 6;
      puVar8 = puVar8 + 6;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
    do {
      FUN_144c07760(puVar6);
      puVar6 = puVar6 + 6;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar9 * 0x18 + 0x18;
  uVar10 = uVar9;
  if (uVar7 <= local_res18) {
    local_res18 = local_res18 - 0x18;
    uVar10 = uVar9 + 1;
    if (uVar7 <= local_res18) {
      uVar9 = local_res18 + uVar9 * -0x18;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar9;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar2,0);
      uVar10 = uVar10 + uVar9 / 0x18;
    }
  }
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    *param_1 = local_res20;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar3 * 0x18);
    *param_1 = local_res20;
    uVar7 = local_res20;
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar7;
}



// FUNCTION 144c14680 FUN_144c14680 body=111 status=ok
// SIG undefined FUN_144c14680(void)

undefined4 *
FUN_144c14680(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6da360;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c146f0 FUN_144c146f0 body=269 status=ok
// SIG undefined FUN_144c146f0(void)

void FUN_144c146f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong local_res8;
  
  uVar7 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar6 = uVar7 * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar7 * 8);
  }
  *param_1 = puVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c14800 FUN_144c14800 body=38 status=ok
// SIG undefined FUN_144c14800(void)

undefined4 *
FUN_144c14800(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_144bf0040(param_2,param_4);
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c14830 FUN_144c14830 body=32 status=ok
// SIG undefined FUN_144c14830(void)

undefined8 FUN_144c14830(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c14850 FUN_144c14850 body=32 status=ok
// SIG undefined FUN_144c14850(void)

undefined8 FUN_144c14850(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c14870 FUN_144c14870 body=32 status=ok
// SIG undefined FUN_144c14870(void)

undefined8 FUN_144c14870(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c14890 FUN_144c14890 body=32 status=ok
// SIG undefined FUN_144c14890(void)

undefined8 FUN_144c14890(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c148b0 FUN_144c148b0 body=32 status=ok
// SIG undefined FUN_144c148b0(void)

undefined8 FUN_144c148b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c148d0 FUN_144c148d0 body=32 status=ok
// SIG undefined FUN_144c148d0(void)

undefined8 FUN_144c148d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c148f0 FUN_144c148f0 body=32 status=ok
// SIG undefined FUN_144c148f0(void)

undefined8 FUN_144c148f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c14910 FUN_144c14910 body=247 status=ok
// SIG undefined FUN_144c14910(void)

void FUN_144c14910(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c14a10 FUN_144c14a10 body=36 status=ok
// SIG undefined FUN_144c14a10(void)

undefined8 FUN_144c14a10(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *param_2;
  FUN_144f50bb0(param_1,local_res8);
  return param_1;
}



// FUNCTION 144c14a40 FUN_144c14a40 body=505 status=ok
// SIG undefined FUN_144c14a40(void)

undefined8 * FUN_144c14a40(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 local_res8;
  
  FUN_144f880d0();
  local_res8 = 0x198;
  *param_1 = hkSerialize::XmlReadFormat::vftable;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,&DAT_149991fec);
  }
  if (lVar1 != 0) {
    FUN_144be7ee0(lVar1 + 8);
    *(longlong *)(lVar1 + 0x10) = lVar1;
    *(undefined ***)(lVar1 + 8) = hkSerialize::XmlReadFormat::Impl::AllocationImpl::vftable;
    *(undefined ***)(lVar1 + 0x18) = hkMemory::BufferedAllocatorNoCleanup::vftable;
    *(undefined8 *)(lVar1 + 0x28) = 0x1fc0;
    *(undefined ***)(lVar1 + 0x20) = &PTR_vftable_14c6e47a0;
    *(undefined4 *)(lVar1 + 0x30) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined4 *)(lVar1 + 0x48) = 0;
    *(undefined4 *)(lVar1 + 0x4c) = 0x80000000;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined4 *)(lVar1 + 0x58) = 0;
    *(undefined4 *)(lVar1 + 0x5c) = 0x80000000;
    FUN_144f94380(lVar1 + 0x60);
    *(undefined ***)(lVar1 + 0x60) =
         hkSerialize::Detail::BundleWithRelocs<hkSerialize::Detail::IndexedBundle>::vftable;
    FUN_144f94810(lVar1 + 0xd0);
    *(undefined ***)(lVar1 + 0x60) = hkSerialize::XmlReadFormat::Impl::BundleXml::vftable;
    *(undefined ***)(lVar1 + 0xf0) = hkMemory::BufferedAllocatorNoCleanup::vftable;
    *(undefined ***)(lVar1 + 0xf8) = &PTR_vftable_14c6e47a0;
    *(undefined8 *)(lVar1 + 0x100) = 0x1fc0;
    *(undefined4 *)(lVar1 + 0x108) = 0xffffffff;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined4 *)(lVar1 + 0x120) = 0;
    *(undefined4 *)(lVar1 + 0x124) = 0x80000000;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined4 *)(lVar1 + 0x130) = 0;
    *(undefined4 *)(lVar1 + 0x134) = 0x80000000;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined4 *)(lVar1 + 0x140) = 0;
    *(undefined4 *)(lVar1 + 0x144) = 0x80000000;
    *(undefined4 *)(lVar1 + 0x148) = 0;
    FUN_144be6ac0(lVar1 + 0x150);
    *(longlong *)(lVar1 + 0x160) = lVar1;
    *(undefined ***)(lVar1 + 0x150) = hkSerialize::XmlReadFormat::Impl::ArrayImpl::vftable;
    FUN_144be6ac0(lVar1 + 0x168);
    *(undefined ***)(lVar1 + 0x168) = hkSerialize::XmlReadFormat::Impl::StringImpl::vftable;
    *(longlong *)(lVar1 + 0x178) = lVar1;
    *(undefined8 *)(lVar1 + 0x180) = 0;
    *(undefined4 *)(lVar1 + 0x188) = 0;
    *(undefined4 *)(lVar1 + 0x18c) = 0x80000000;
    param_1[3] = lVar1;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 144c14c40 FUN_144c14c40 body=27 status=ok
// SIG undefined FUN_144c14c40(void)

undefined8 FUN_144c14c40(longlong param_1,undefined8 param_2)

{
  FUN_144c14ff0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c14c60 FUN_144c14c60 body=107 status=ok
// SIG undefined FUN_144c14c60(void)

undefined8
FUN_144c14c60(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,longlong *param_5)

{
  undefined8 uVar1;
  longlong local_48 [2];
  longlong local_38;
  longlong local_20;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_144f89370(local_48,param_3,(longlong)param_4);
  FUN_144c14ff0(uVar1,param_2,local_48);
  if (param_5 != (longlong *)0x0) {
    *param_5 = (local_48[0] - local_38) + local_20;
  }
  FUN_144f893a0(local_48);
  return param_2;
}



// FUNCTION 144c14cd0 FUN_144c14cd0 body=333 status=ok
// SIG undefined FUN_144c14cd0(void)

undefined8 * FUN_144c14cd0(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[3];
  *param_1 = hkSerialize::XmlReadFormat::vftable;
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x188) = 0;
    if ((-1 < (int)*(uint *)(lVar1 + 0x18c)) && (*(longlong *)(lVar1 + 0x180) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(lVar1 + 0x180),
                 (ulonglong)(*(uint *)(lVar1 + 0x18c) & 0x7fffffff) << 4);
    }
    *(undefined8 *)(lVar1 + 0x180) = 0;
    *(undefined4 *)(lVar1 + 0x18c) = 0x80000000;
    FUN_144be6ae0(lVar1 + 0x168);
    FUN_144be6ae0(lVar1 + 0x150);
    FUN_144c17b50(lVar1 + 0x138);
    *(undefined ***)(lVar1 + 0xf0) = hkMemory::BufferedAllocatorNoCleanup::vftable;
    FUN_144f89650();
    thunk_FUN_144f94e00(lVar1 + 0xd0);
    FUN_144c14e20(lVar1 + 0x60);
    *(undefined ***)(lVar1 + 0x18) = hkMemory::BufferedAllocatorNoCleanup::vftable;
    FUN_144f89650();
    FUN_144be7ef0(lVar1 + 8);
    (*DAT_14c787678)(0,lVar1,0);
  }
  FUN_144f880f0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c14e20 FUN_144c14e20 body=118 status=ok
// SIG undefined FUN_144c14e20(void)

void FUN_144c14e20(longlong param_1)

{
  FUN_144be6ae0(param_1 + 0x58);
  FUN_144be6ae0(param_1 + 0x40);
  FUN_144be6ae0(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(longlong *)(param_1 + 0x18) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x18),
               (ulonglong)(*(uint *)(param_1 + 0x24) & 0x7fffffff) * 0x18);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_144f87d90(param_1);
  return;
}



// FUNCTION 144c14ea0 FUN_144c14ea0 body=95 status=ok
// SIG undefined FUN_144c14ea0(void)

void FUN_144c14ea0(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0) + 1;
  if ((int)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) < iVar2) {
    FUN_1401f86b2((longlong *)(param_1 + 0x98),&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x98) + (longlong)*(int *)(param_1 + 0xa0) * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
  }
  *(int *)(param_1 + 0xa0) = iVar2;
  return;
}



// FUNCTION 144c14f00 FUN_144c14f00 body=233 status=ok
// SIG undefined FUN_144c14f00(void)

void FUN_144c14f00(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x130) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x134)) && (*(longlong *)(param_1 + 0x128) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x128),
               (ulonglong)(*(uint *)(param_1 + 0x134) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0x80000000;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xa4)) && (*(longlong *)(param_1 + 0x98) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x98),
               (ulonglong)(*(uint *)(param_1 + 0xa4) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               (ulonglong)(*(uint *)(param_1 + 0x14) & 0x7fffffff) << 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  return;
}



// FUNCTION 144c14ff0 FUN_144c14ff0 body=1813 status=ok
// SIG undefined FUN_144c14ff0(void)

longlong * FUN_144c14ff0(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int *piVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong local_res8;
  longlong *local_res10;
  int local_res20 [2];
  int local_3a8;
  int local_3a4;
  int local_3a0;
  undefined1 local_39c [4];
  undefined8 local_398 [2];
  undefined1 local_388 [200];
  int local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [80];
  undefined1 local_188 [336];
  
  local_res8 = param_1;
  local_res10 = param_2;
  (**(code **)(*(longlong *)(param_1 + 0x60) + 0x20))(param_1 + 0x60);
  plVar12 = (longlong *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 400) = 0;
  iVar10 = *(int *)(param_1 + 0x188) + 1;
  if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) < iVar10) {
    FUN_144c19c20(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar10);
  }
  *(int *)(param_1 + 0x188) = iVar10;
  FUN_144f95540(local_388,param_3);
  iVar10 = FUN_144f95520(local_388);
  while( true ) {
    if ((iVar10 == 6) || (iVar10 == 7)) goto LAB_144c1509f;
    if (iVar10 - 1U < 2) break;
    iVar10 = FUN_144f95520();
  }
  plVar7 = (longlong *)FUN_144f956e0(local_388,local_398);
  cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"hktagfile");
  if (cVar4 != '\0') {
    piVar8 = (int *)FUN_144f957d0(local_388,&local_3a8,"version",local_res20);
    if ((*piVar8 < 0) || (local_res20[0] != 3)) goto LAB_144c156e3;
    goto LAB_144c15177;
  }
LAB_144c1509f:
  if ((1 < DAT_14c787988) || (cVar4 = FUN_144bdbf80(), cVar4 != '\0')) {
    cVar4 = FUN_144bdbf80();
    if (cVar4 == '\0') {
      uVar5 = FUN_144bdc640(local_1d8);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"File does not begin with a \'tagfile\' element",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x12e;
      FUN_144bdc690(local_1d8);
    }
    else {
      uVar5 = FUN_144bdc810(local_188,&DAT_14c787938,2);
      local_res8 = 0;
      lVar6 = FUN_144bdc480(uVar5,"File does not begin with a \'tagfile\' element",&local_res8,0);
      *(char **)(lVar6 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
      *(undefined8 *)(lVar6 + 0x40) = 0x12e;
      FUN_144bdc8a0(local_188);
    }
  }
  goto LAB_144c156e3;
LAB_144c15177:
  do {
    if (local_2c0 == 2) {
      plVar7 = (longlong *)FUN_144f956e0(local_388,local_2b8);
      cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"hktagfile");
      if (cVar4 != '\0') goto LAB_144c15207;
    }
    iVar10 = FUN_144f95520(local_388);
    while( true ) {
      if ((iVar10 == 6) || (iVar10 == 7)) goto LAB_144c15207;
      if (iVar10 == 1) goto LAB_144c15311;
      if (iVar10 == 2) break;
      if (iVar10 == 3) {
        plVar7 = (longlong *)FUN_144f956e0(local_388,local_2a8);
        cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"hktagfile");
        if (cVar4 != '\0') goto LAB_144c15207;
      }
      iVar10 = FUN_144f95520(local_388);
    }
    plVar7 = (longlong *)FUN_144f956e0(local_388,local_298);
    cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"hktagfile");
    if (cVar4 != '\0') {
LAB_144c15207:
      iVar10 = 1;
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x80) + -1;
      lVar6 = param_1;
      if (1 < *(int *)(param_1 + 0x188)) {
        plVar7 = (longlong *)(param_1 + 0x78);
        lVar11 = 0x10;
        do {
          iVar1 = *(int *)(lVar6 + 0x80);
          lVar13 = (longlong)iVar1;
          lVar6 = *plVar12;
          local_3a8 = *(int *)(lVar11 + 8 + lVar6);
          local_398[0] = *(undefined8 *)(lVar11 + lVar6);
          uVar2 = *(undefined4 *)(lVar11 + 0xc + lVar6);
          iVar3 = iVar1 + 1;
          if (iVar1 + 1 < iVar1) {
            iVar3 = iVar1;
          }
          if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar3) {
            FUN_144c13b80(plVar7,&PTR_vftable_14c6e47a0,(longlong)iVar3);
          }
          iVar1 = *(int *)(param_1 + 0x80);
          if (iVar1 < iVar3) {
            lVar6 = *plVar7;
            *(int *)(param_1 + 0x80) = iVar3;
            for (puVar9 = (undefined8 *)(lVar6 + (longlong)iVar1 * 0x18);
                puVar9 != (undefined8 *)(lVar6 + (longlong)iVar3 * 0x18); puVar9 = puVar9 + 3) {
              if (puVar9 != (undefined8 *)0x0) {
                *puVar9 = 0;
                puVar9[1] = 0;
                *(undefined1 *)(puVar9 + 2) = 0;
                *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
              }
            }
          }
          else if (iVar3 < iVar1) {
            *(int *)(param_1 + 0x80) = iVar3;
          }
          iVar10 = iVar10 + 1;
          lVar11 = lVar11 + 0x10;
          uVar5 = *(undefined8 *)(*(longlong *)(local_res8 + 0x68) + (longlong)local_3a8 * 8);
          lVar6 = *plVar7;
          *(undefined4 *)(lVar6 + 0x14 + lVar13 * 0x18) = uVar2;
          plVar12 = (longlong *)(local_res8 + 0x180);
          *(undefined8 *)(lVar6 + lVar13 * 0x18) = local_398[0];
          *(undefined8 *)(lVar6 + 8 + lVar13 * 0x18) = uVar5;
          *(undefined1 *)(lVar6 + 0x10 + lVar13 * 0x18) = 1;
          lVar6 = local_res8;
          param_2 = local_res10;
        } while (iVar10 < *(int *)(local_res8 + 0x188));
      }
      *(undefined4 *)(lVar6 + 0x188) = 0;
      *param_2 = lVar6 + 0x60;
      FUN_144f955e0(local_388);
      return param_2;
    }
LAB_144c15311:
    plVar7 = (longlong *)FUN_144f956e0(local_388,local_288);
    cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,&DAT_149971580);
    if (cVar4 != '\0') {
      FUN_144c15f30(param_1,&local_3a4,local_388);
      if (local_3a4 < 0) break;
      goto LAB_144c15177;
    }
    plVar7 = (longlong *)FUN_144f956e0(local_388,local_278);
    cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"object");
    if (cVar4 == '\0') {
      plVar7 = (longlong *)FUN_144f956e0(local_388,local_268);
      cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"import");
      if (cVar4 != '\0') {
LAB_144c153e1:
        do {
          if (local_2c0 == 2) {
            plVar7 = (longlong *)FUN_144f956e0(local_388,local_258);
            cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"import");
            if (cVar4 != '\0') goto LAB_144c15177;
          }
          iVar10 = FUN_144f95520(local_388);
          while( true ) {
            if ((iVar10 == 6) || (iVar10 == 7)) goto LAB_144c15177;
            if (iVar10 == 1) goto LAB_144c153e1;
            if (iVar10 == 2) break;
            if (iVar10 == 3) {
              plVar7 = (longlong *)FUN_144f956e0(local_388,local_248);
              cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"import");
              if (cVar4 != '\0') goto LAB_144c15177;
            }
            iVar10 = FUN_144f95520(local_388);
          }
          plVar7 = (longlong *)FUN_144f956e0(local_388,local_238);
          cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"import");
          if (cVar4 != '\0') goto LAB_144c15177;
        } while( true );
      }
      plVar7 = (longlong *)FUN_144f956e0(local_388,local_228);
      cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"export");
      if (cVar4 != '\0') {
LAB_144c154e4:
        do {
          if (local_2c0 == 2) {
            plVar7 = (longlong *)FUN_144f956e0(local_388,local_218);
            cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"export");
            if (cVar4 != '\0') goto LAB_144c15177;
          }
          iVar10 = FUN_144f95520(local_388);
          while( true ) {
            if ((iVar10 == 6) || (iVar10 == 7)) goto LAB_144c15177;
            if (iVar10 == 1) goto LAB_144c154e4;
            if (iVar10 == 2) break;
            if (iVar10 == 3) {
              plVar7 = (longlong *)FUN_144f956e0(local_388,local_208);
              cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"export");
              if (cVar4 != '\0') goto LAB_144c15177;
            }
            iVar10 = FUN_144f95520(local_388);
          }
          plVar7 = (longlong *)FUN_144f956e0(local_388,local_1f8);
          cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"export");
          if (cVar4 != '\0') goto LAB_144c15177;
        } while( true );
      }
      plVar7 = (longlong *)FUN_144f956e0(local_388,local_1e8);
      cVar4 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,&DAT_1499928d0);
      if (cVar4 == '\0') break;
      FUN_144c17320(param_1,local_398);
      FUN_144c15830(param_1,&local_3a8,local_388,1);
      iVar10 = local_3a8;
    }
    else {
      FUN_144c17320(param_1,local_39c);
      FUN_144c15830(param_1,&local_3a0,local_388,0);
      iVar10 = local_3a0;
    }
  } while (-1 < iVar10);
LAB_144c156e3:
  *param_2 = 0;
  FUN_144f955e0(local_388);
  return param_2;
}



// FUNCTION 144c15710 FUN_144c15710 body=99 status=ok
// SIG undefined FUN_144c15710(void)

longlong FUN_144c15710(longlong param_1,ulonglong param_2)

{
  thunk_FUN_144f94e00(param_1 + 0x70);
  FUN_144c14e20(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x90);
  }
  return param_1;
}



// FUNCTION 144c15780 FUN_144c15780 body=34 status=ok
// SIG undefined FUN_144c15780(void)

void FUN_144c15780(longlong param_1)

{
  FUN_144f895c0(param_1 + 0x90);
  FUN_144f946f0(param_1);
  return;
}



// FUNCTION 144c157b0 FUN_144c157b0 body=121 status=ok
// SIG undefined FUN_144c157b0(void)

longlong FUN_144c157b0(longlong param_1,ulonglong param_2)

{
  *(undefined ***)(param_1 + 0x90) = hkMemory::BufferedAllocatorNoCleanup::vftable;
  FUN_144f89650();
  thunk_FUN_144f94e00(param_1 + 0x70);
  FUN_144c14e20(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 144c15830 FUN_144c15830 body=1785 status=ok
// SIG undefined FUN_144c15830(void)

undefined4 * FUN_144c15830(longlong param_1,undefined4 *param_2,undefined8 param_3,char param_4)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  char *pcVar16;
  longlong lVar17;
  undefined1 local_288 [4];
  uint local_284 [3];
  char *local_278;
  char *pcStack_270;
  undefined1 local_268 [8];
  uint local_260 [2];
  char *local_258;
  char *pcStack_250;
  ulonglong local_248;
  char *local_238;
  char *pcStack_230;
  undefined8 local_228;
  code *local_220;
  uint *local_218;
  code *local_210;
  uint *local_208;
  longlong local_200;
  undefined1 local_1f8 [8];
  int local_1f0 [2];
  undefined8 local_1e8;
  undefined1 local_1e0 [80];
  undefined1 local_190 [344];
  
  local_238 = (char *)0x0;
  pcStack_230 = (char *)0x0;
  piVar7 = (int *)FUN_144f95730(param_3,local_288,&DAT_1499928d8,&local_238);
  if (-1 < *piVar7) {
    if ((local_238 != pcStack_230) && (*local_238 == '\"')) {
      local_278 = local_238 + 1;
      pcStack_270 = pcStack_230 + -1;
      local_238 = local_278;
      pcStack_230 = pcStack_270;
    }
    pcVar16 = "object";
    cVar4 = FUN_144bfbf70(local_238,(longlong)pcStack_230 - (longlong)local_238,"object");
    if (cVar4 != '\0') {
      iVar5 = FUN_144bfbbb0("object");
      local_238 = local_238 + iVar5;
      piVar7 = (int *)FUN_144f95c90(local_288,&local_238,local_260);
      if (-1 < *piVar7) {
        local_248 = (ulonglong)local_260[0];
        local_278 = (char *)0x0;
        pcStack_270 = (char *)0x0;
        piVar7 = (int *)FUN_144f95730(param_3,local_288,"typeid",&local_278);
        if (-1 < *piVar7) {
          if ((local_278 != pcStack_270) && (*local_278 == '\"')) {
            local_278 = local_278 + 1;
            pcStack_270 = pcStack_270 + -1;
          }
          cVar4 = FUN_144bfbf70(local_278,(longlong)pcStack_270 - (longlong)local_278,&DAT_149971580
                               );
          if (cVar4 != '\0') {
            iVar5 = FUN_144bfbbb0(&DAT_149971580);
            local_278 = local_278 + iVar5;
            piVar7 = (int *)FUN_144f95c90(local_288,&local_278,local_1f0);
            if (-1 < *piVar7) {
              local_284[0] = 0;
              if (param_4 == '\0') {
LAB_144c15aa1:
                if (param_4 != '\0') {
                  pcVar16 = "note";
                }
                local_258 = pcVar16;
                piVar7 = (int *)FUN_144c17530(param_1,local_288,param_3,pcVar16);
                if (-1 < *piVar7) {
                  lVar15 = (longlong)(int)local_248;
                  lVar11 = (longlong)local_1f0[0] * 8;
                  local_200 = lVar11;
                  do {
                    uVar3 = local_248;
                    local_1e8 = *(undefined8 *)(lVar11 + *(longlong *)(param_1 + 0x68));
                    FUN_144f69200(&local_228,local_1e8);
                    uVar10 = local_228;
                    uVar2 = local_284[0];
                    lVar17 = (longlong)(int)local_284[0];
                    uVar6 = *(uint *)(param_1 + 0x84) & 0x7fffffff;
                    iVar5 = *(int *)(param_1 + 0x80);
                    uVar14 = (uint)uVar3;
                    if (local_284[0] == 0) {
                      iVar13 = uVar14 + 1;
                      if ((int)(uVar14 + 1) < iVar5) {
                        iVar13 = iVar5;
                      }
                      if ((int)uVar6 < iVar13) {
                        FUN_144c13b80(param_1 + 0x78,&PTR_vftable_14c6e47a0,(longlong)iVar13);
                      }
                      iVar5 = *(int *)(param_1 + 0x80);
                      if (iVar5 < iVar13) {
                        lVar17 = *(longlong *)(param_1 + 0x78);
                        *(int *)(param_1 + 0x80) = iVar13;
                        for (puVar9 = (undefined8 *)(lVar17 + (longlong)iVar5 * 0x18);
                            puVar9 != (undefined8 *)(lVar17 + (longlong)iVar13 * 0x18);
                            puVar9 = puVar9 + 3) {
                          if (puVar9 != (undefined8 *)0x0) {
                            *puVar9 = 0;
                            puVar9[1] = 0;
                            *(undefined1 *)(puVar9 + 2) = 0;
                            *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
                          }
                        }
                      }
                      else if (iVar13 < iVar5) {
                        *(int *)(param_1 + 0x80) = iVar13;
                      }
                      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + lVar11);
                      lVar17 = *(longlong *)(param_1 + 0x78);
                      *(undefined8 *)(lVar17 + lVar15 * 0x18) = uVar10;
                      *(undefined8 *)(lVar17 + 8 + lVar15 * 0x18) = uVar1;
                      *(undefined1 *)(lVar17 + 0x10 + lVar15 * 0x18) = 0;
                      *(undefined4 *)(lVar17 + 0x14 + lVar15 * 0x18) = 0;
                    }
                    else {
                      uVar12 = local_284[0];
                      if ((int)local_284[0] < (int)uVar14) {
                        uVar12 = uVar14;
                      }
                      iVar13 = uVar12 + 1;
                      if ((int)(uVar12 + 1) < iVar5) {
                        iVar13 = iVar5;
                      }
                      if ((int)uVar6 < iVar13) {
                        FUN_144c13b80(param_1 + 0x78,&PTR_vftable_14c6e47a0,(longlong)iVar13);
                      }
                      iVar5 = *(int *)(param_1 + 0x80);
                      if (iVar5 < iVar13) {
                        lVar11 = *(longlong *)(param_1 + 0x78);
                        *(int *)(param_1 + 0x80) = iVar13;
                        for (puVar9 = (undefined8 *)(lVar11 + (longlong)iVar5 * 0x18);
                            puVar9 != (undefined8 *)(lVar11 + (longlong)iVar13 * 0x18);
                            puVar9 = puVar9 + 3) {
                          if (puVar9 != (undefined8 *)0x0) {
                            *puVar9 = 0;
                            puVar9[1] = 0;
                            *(undefined1 *)(puVar9 + 2) = 0;
                            *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
                          }
                        }
                      }
                      else if (iVar13 < iVar5) {
                        *(int *)(param_1 + 0x80) = iVar13;
                      }
                      if (*(longlong *)(*(longlong *)(param_1 + 0x78) + lVar17 * 0x18) == 0) {
                        *(int *)(*(longlong *)(param_1 + 0x78) + 0x14 + lVar17 * 0x18) =
                             (int)local_248;
                      }
                      uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + local_200);
                      lVar11 = *(longlong *)(param_1 + 0x78);
                      *(undefined8 *)(lVar11 + lVar15 * 0x18) = uVar10;
                      *(undefined8 *)(lVar11 + 8 + lVar15 * 0x18) = uVar1;
                      *(undefined1 *)(lVar11 + 0x10 + lVar15 * 0x18) = 2;
                      *(uint *)(lVar11 + 0x14 + lVar15 * 0x18) = uVar2;
                      lVar11 = local_200;
                    }
                    uVar10 = local_228;
                    iVar5 = FUN_144beec90(local_1e8);
                    FUN_144bfb540(uVar10,0,(longlong)iVar5);
                    piVar7 = (int *)FUN_144c17bc0(param_1,local_1f8,param_3,&local_228);
                    if (*piVar7 < 0) {
                      *param_2 = 0x80040200;
                      if (((ulonglong)local_218 & 1) == 0) {
                        return param_2;
                      }
                      FUN_144be6b30((ulonglong)local_218 & 0xfffffffffffffffe);
                      return param_2;
                    }
                    if (((ulonglong)local_218 & 1) != 0) {
                      FUN_144be6b30((ulonglong)local_218 & 0xfffffffffffffffe);
                    }
                    piVar7 = (int *)FUN_144c17530(param_1,local_288,param_3,local_258);
                  } while (-1 < *piVar7);
                }
                *param_2 = 0;
                return param_2;
              }
              pcVar8 = (char *)FUN_144f95960(param_3,local_268,"annotates");
              if (*pcVar8 == '\0') {
                local_278 = (char *)0x0;
                pcStack_270 = (char *)0x0;
                piVar7 = (int *)FUN_144f95730(param_3,local_288,&DAT_1499928d8,&local_278);
                if (-1 < *piVar7) {
                  if ((local_278 != pcStack_270) && (*local_278 == '\"')) {
                    local_278 = local_278 + 1;
                    pcStack_270 = pcStack_270 + -1;
                  }
                  cVar4 = FUN_144bfbf70(local_278,(longlong)pcStack_270 - (longlong)local_278,
                                        &DAT_1499928d0);
                  if (cVar4 != '\0') {
                    iVar5 = FUN_144bfbbb0(&DAT_1499928d0);
                    local_278 = local_278 + iVar5;
                    piVar7 = (int *)FUN_144f95c90(local_288,&local_278,local_260);
                    if ((-1 < *piVar7) &&
                       ((local_284[0] = local_260[0], 1 < DAT_14c787988 ||
                        (cVar4 = FUN_144bdbf80(), cVar4 != '\0')))) {
                      cVar4 = FUN_144bdbf80();
                      if (cVar4 == '\0') {
                        uVar10 = FUN_144bdc640(local_1e0);
                        local_228 = 2;
                        local_220 = FUN_144f50970;
                        local_218 = local_284;
                        local_210 = FUN_144f50970;
                        local_208 = local_284;
                        lVar11 = FUN_144bdc480(uVar10,
                                               "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
                                               ,&local_228,0);
                        *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                        *(undefined8 *)(lVar11 + 0x40) = 0x3ae;
                        FUN_144bdc690(local_1e0);
                      }
                      else {
                        uVar10 = FUN_144bdc810(local_190,&DAT_14c787938,2);
                        local_228 = 2;
                        local_220 = FUN_144f50970;
                        local_218 = local_284;
                        local_210 = FUN_144f50970;
                        local_208 = local_284;
                        lVar11 = FUN_144bdc480(uVar10,
                                               "Found deprecated note \'note{}\'. Must be assigned an explicit unique id and an \'annotates\' attribute, e.g. \'<note id=\"object99\" annotates=\"object{}\">\'"
                                               ,&local_228,0);
                        *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                        *(undefined8 *)(lVar11 + 0x40) = 0x3ae;
                        FUN_144bdc8a0(local_190);
                      }
                    }
                  }
                }
              }
              else {
                local_258 = (char *)0x0;
                pcStack_250 = (char *)0x0;
                piVar7 = (int *)FUN_144f95730(param_3,local_288,"annotates",&local_258);
                if (-1 < *piVar7) {
                  if ((local_258 != pcStack_250) && (*local_258 == '\"')) {
                    local_258 = local_258 + 1;
                    pcStack_250 = pcStack_250 + -1;
                  }
                  cVar4 = FUN_144bfbf70(local_258,(longlong)pcStack_250 - (longlong)local_258,
                                        "object");
                  if (cVar4 != '\0') {
                    iVar5 = FUN_144bfbbb0("object");
                    local_258 = local_258 + iVar5;
                    piVar7 = (int *)FUN_144f95c90(local_288,&local_258,local_260);
                    if (-1 < *piVar7) {
                      local_284[0] = local_260[0];
                      goto LAB_144c15aa1;
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
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c15f30 FUN_144c15f30 body=5058 status=ok
// SIG undefined FUN_144c15f30(void)

undefined4 * FUN_144c15f30(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  uint local_res20 [2];
  char *local_798;
  char *pcStack_790;
  undefined8 local_788;
  undefined1 *local_780;
  int local_778;
  uint local_774;
  undefined1 local_770 [128];
  undefined1 *local_6f0;
  undefined4 local_6e8;
  uint local_6e4;
  undefined1 local_6e0 [128];
  undefined1 *local_660;
  undefined4 local_658;
  uint local_654;
  undefined1 local_650 [8];
  undefined1 local_648 [16];
  char *local_638;
  char *pcStack_630;
  ulonglong local_628;
  int local_620;
  undefined2 local_61c [2];
  undefined1 local_618 [4];
  int local_614;
  int local_610;
  undefined1 local_60c [4];
  undefined1 local_608 [16];
  char *local_5f8;
  char *pcStack_5f0;
  undefined8 local_5e8;
  code *pcStack_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  code *pcStack_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [4];
  undefined1 local_5b4 [4];
  undefined1 local_5b0 [4];
  undefined1 local_5ac [4];
  undefined1 local_5a8 [4];
  undefined1 local_5a4 [4];
  undefined1 local_5a0 [4];
  undefined1 local_59c [4];
  undefined1 local_598 [4];
  undefined1 local_594 [4];
  undefined1 local_590 [4];
  undefined1 local_58c [4];
  undefined1 local_588 [4];
  undefined1 local_584 [4];
  undefined1 local_580 [4];
  undefined1 local_57c [4];
  undefined1 local_578 [8];
  undefined4 local_570 [2];
  undefined8 local_568;
  undefined4 local_560 [2];
  undefined1 local_558 [8];
  undefined8 local_550;
  undefined1 local_548 [4];
  undefined1 local_544 [4];
  undefined1 local_540 [4];
  undefined1 local_53c [4];
  undefined1 local_538 [16];
  char *local_528;
  char *pcStack_520;
  char *local_518;
  char *pcStack_510;
  char *local_508;
  char *pcStack_500;
  char *local_4f8;
  char *pcStack_4f0;
  char *local_4e8;
  char *pcStack_4e0;
  char *local_4d8;
  char *pcStack_4d0;
  char *local_4c8;
  char *pcStack_4c0;
  undefined8 local_4b8;
  int local_4b0;
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [96];
  ulonglong local_398;
  longlong local_390;
  undefined8 local_388;
  undefined *local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_318;
  longlong local_2f8;
  ulonglong local_2f0;
  longlong local_2e8;
  undefined8 local_2d8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  undefined1 local_178 [336];
  
  local_res20[0] = 0;
  local_638 = (char *)0x0;
  pcStack_630 = (char *)0x0;
  piVar3 = (int *)FUN_144f95730(param_3,local_648,&DAT_1499928d8,&local_638);
  if (-1 < *piVar3) {
    if ((local_638 != pcStack_630) && (*local_638 == '\"')) {
      local_798 = local_638 + 1;
      pcStack_790 = pcStack_630 + -1;
      local_638 = local_798;
      pcStack_630 = pcStack_790;
    }
    cVar1 = FUN_144bfbf70(local_638,(longlong)pcStack_630 - (longlong)local_638,&DAT_149971580);
    if (cVar1 != '\0') {
      iVar2 = FUN_144bfbbb0(&DAT_149971580);
      local_798 = local_638 + iVar2;
      pcStack_790 = pcStack_630;
      local_638 = local_798;
      piVar3 = (int *)FUN_144f95c90(local_648,&local_638,&local_628);
      uVar15 = local_628;
      if (-1 < *piVar3) {
        FUN_144f6faa0(local_3f8);
        FUN_144f6fee0(local_3f8,param_1);
        local_780 = local_770;
        local_788 = 0;
        local_6f0 = local_6e0;
        local_778 = 0;
        local_660 = local_650;
        local_774 = 0x80000020;
        local_6e8 = 0;
        local_6e4 = 0x80000020;
        local_658 = 0;
        local_654 = 0x80000002;
        piVar3 = (int *)FUN_144c17530(param_1,local_648,param_3,&DAT_149971580);
        if (-1 < *piVar3) {
LAB_144c160e9:
          puVar19 = (undefined *)0x0;
          plVar4 = (longlong *)FUN_144f956e0(param_3,local_1d8);
          cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"parent");
          if (cVar1 != '\0') {
            local_798 = (char *)0x0;
            pcStack_790 = (char *)0x0;
            piVar3 = (int *)FUN_144f95730(param_3,local_540,&DAT_1499928d8,&local_798);
            if (-1 < *piVar3) {
              if ((local_798 != pcStack_790) && (*local_798 == '\"')) {
                local_798 = local_798 + 1;
                pcStack_790 = pcStack_790 + -1;
                local_4f8 = local_798;
                pcStack_4f0 = pcStack_790;
              }
              cVar1 = FUN_144bfbf70(local_798,(longlong)pcStack_790 - (longlong)local_798,
                                    &DAT_149971580);
              if (cVar1 != '\0') {
                iVar2 = FUN_144bfbbb0(&DAT_149971580);
                local_798 = local_798 + iVar2;
                pcStack_4e0 = pcStack_790;
                local_4e8 = local_798;
                piVar3 = (int *)FUN_144f95c90(local_5b8,&local_798,local_570);
                if (-1 < *piVar3) {
                  local_788 = CONCAT44(local_788._4_4_,local_570[0]);
                  goto LAB_144c16d84;
                }
              }
            }
            goto LAB_144c17113;
          }
          plVar4 = (longlong *)FUN_144f956e0(param_3,local_1c8);
          cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"format");
          if (cVar1 != '\0') {
            piVar3 = (int *)FUN_144f957d0(param_3,local_5b4,"value",local_res20);
            if (-1 < *piVar3) {
              local_390 = (longlong)(int)local_res20[0];
              local_2f8 = param_1 + 8;
              uVar15 = local_398 | 0x180001;
              local_2f0 = 0;
              puVar17 = (undefined *)0x0;
              puVar12 = puVar19;
              puVar18 = puVar19;
              switch(local_res20[0] & 0xf) {
              case 0:
                puVar12 = &DAT_14c787a30;
                puVar18 = puVar17;
                break;
              case 1:
                puVar12 = &DAT_14c787a40;
                puVar18 = puVar17;
                break;
              case 2:
                puVar12 = &DAT_14c784828;
                puVar18 = (undefined *)0x1;
                puVar19 = puVar18;
                break;
              case 3:
                puVar12 = (undefined *)(param_1 + 0x168);
                goto LAB_144c16494;
              case 4:
              case 5:
                local_398 = uVar15;
                uVar5 = (**(code **)(*DAT_14c797f68 + 0x58))();
                puVar12 = (undefined *)FUN_144befdb0(uVar5);
                uVar8 = FUN_144beec90(uVar5);
                uVar14 = FUN_144beecf0(uVar5);
                uVar15 = local_398;
                puVar18 = (undefined *)(ulonglong)uVar8;
                puVar19 = (undefined *)(ulonglong)uVar14;
                break;
              case 6:
                puVar12 = (undefined *)(param_1 + 0xa0);
                goto LAB_144c16494;
              case 7:
                local_398 = local_398 | 0x980001;
                local_2d8 = 0;
                puVar12 = &DAT_14c784688;
                iVar2 = *(int *)(param_1 + 0x140) + -1;
                if (iVar2 < *(int *)(param_1 + 0x148) * 2) {
                  FUN_144c178b0((longlong *)(param_1 + 0x138),local_5b0,iVar2 * 2 + 2);
                }
                iVar16 = (int)local_628;
                iVar13 = 1;
                lVar10 = *(longlong *)(param_1 + 0x138);
                uVar14 = *(int *)(param_1 + 0x140) - 1;
                uVar8 = iVar16 * -0x61c8864f;
                uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                        iVar16 * -0x4f000000) & uVar14;
                lVar6 = (longlong)(int)uVar8;
                iVar2 = *(int *)(lVar10 + lVar6 * 4);
                while (iVar2 != -1) {
                  if (*(int *)(lVar10 + lVar6 * 4) == iVar16) goto LAB_144c16476;
                  uVar8 = uVar8 + 1 & uVar14;
                  lVar6 = (longlong)(int)uVar8;
                  iVar2 = *(int *)(lVar10 + lVar6 * 4);
                }
                goto LAB_144c16479;
              case 8:
                if (0 < (int)local_res20[0] >> 8) {
                  puVar12 = &DAT_14c784768;
                  iVar2 = *(int *)(param_1 + 0x140) + -1;
                  local_398 = uVar15;
                  if (iVar2 < *(int *)(param_1 + 0x148) * 2) {
                    FUN_144c178b0((longlong *)(param_1 + 0x138),local_5ac,iVar2 * 2 + 2);
                  }
                  iVar16 = (int)local_628;
                  iVar13 = 1;
                  lVar10 = *(longlong *)(param_1 + 0x138);
                  uVar14 = *(int *)(param_1 + 0x140) - 1;
                  uVar8 = iVar16 * -0x61c8864f;
                  uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                          iVar16 * -0x4f000000) & uVar14;
                  lVar6 = (longlong)(int)uVar8 * 4;
                  iVar2 = *(int *)(lVar10 + (longlong)(int)uVar8 * 4);
                  while (iVar2 != -1) {
                    if (*(int *)(lVar10 + lVar6) == iVar16) goto LAB_144c16476;
                    uVar8 = uVar8 + 1 & uVar14;
                    lVar6 = (longlong)(int)uVar8 * 4;
                    iVar2 = *(int *)(lVar6 + lVar10);
                  }
                  goto LAB_144c16479;
                }
                puVar12 = (undefined *)(param_1 + 0x150);
LAB_144c16494:
                puVar18 = (undefined *)0x4;
                puVar19 = puVar18;
              }
              goto switchD_144c162b8_default;
            }
            goto LAB_144c17113;
          }
          plVar4 = (longlong *)FUN_144f956e0(param_3,local_1b8);
          cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,&DAT_149971528);
          if (cVar1 != '\0') {
            FUN_144bdf360(&local_4b8);
            local_798 = (char *)0x0;
            pcStack_790 = (char *)0x0;
            piVar3 = (int *)FUN_144f95730(param_3,local_5a8,"value",&local_798);
            if (-1 < *piVar3) {
              piVar3 = (int *)FUN_144f959a0(local_5a4,&local_798,&local_4b8);
              if (-1 < *piVar3) {
                cVar1 = FUN_144bdfee0(&local_4b8,&DAT_149981f00);
                if (cVar1 != '\0') {
                  FUN_144be05f0(&local_4b8,1);
                  FUN_144be0640(&local_4b8,1);
                }
                local_378 = FUN_144f96600(local_4b8,(longlong)local_4b0 + -1);
                local_398 = local_398 | 8;
                FUN_144bdf2f0(&local_4b8);
                goto LAB_144c16d84;
              }
            }
LAB_144c16e60:
            *param_2 = 0x80040200;
            FUN_144bdf2f0(&local_4b8);
            goto LAB_144c17232;
          }
          plVar4 = (longlong *)FUN_144f956e0(param_3,local_188);
          cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"flags");
          if (cVar1 == '\0') {
            plVar4 = (longlong *)FUN_144f956e0(param_3,local_1a8);
            cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"subtype");
            if (cVar1 == '\0') {
              plVar4 = (longlong *)FUN_144f956e0(param_3,local_198);
              cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"fields");
              if (cVar1 == '\0') {
                plVar4 = (longlong *)FUN_144f956e0(param_3,&local_5d0);
                cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"version");
                if (cVar1 == '\0') {
                  plVar4 = (longlong *)FUN_144f956e0(param_3,&local_5e8);
                  cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"parameters");
                  if (cVar1 != '\0') {
                    piVar3 = (int *)FUN_144f957d0(param_3,local_544,"count",local_53c);
                    if (*piVar3 < 0) goto LAB_144c16e72;
                    local_398 = local_398 | 0x8000;
                    local_318 = 0;
                    piVar3 = (int *)FUN_144c17530(param_1,local_60c,param_3,"parameters");
                    iVar2 = *piVar3;
                    while (-1 < iVar2) {
                      plVar4 = (longlong *)FUN_144f956e0(param_3,local_418);
                      cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"typeparam");
                      if (cVar1 != '\0') {
                        local_798 = (char *)0x0;
                        pcStack_790 = (char *)0x0;
                        piVar3 = (int *)FUN_144f95730(param_3,local_558,&DAT_1499928d8,&local_798);
                        if (-1 < *piVar3) {
                          if ((local_798 != pcStack_790) && (*local_798 == '\"')) {
                            local_798 = local_798 + 1;
                            pcStack_790 = pcStack_790 + -1;
                            local_508 = local_798;
                            pcStack_500 = pcStack_790;
                          }
                          cVar1 = FUN_144bfbf70(local_798,
                                                (longlong)pcStack_790 - (longlong)local_798,
                                                &DAT_149971580);
                          if (cVar1 != '\0') {
                            iVar2 = FUN_144bfbbb0(&DAT_149971580);
                            local_798 = local_798 + iVar2;
                            pcStack_5f0 = pcStack_790;
                            local_5f8 = local_798;
                            piVar3 = (int *)FUN_144f95c90(local_578,&local_798,&local_638);
                            if (-1 < *piVar3) {
                              FUN_144f70120(local_3f8,0,&DAT_149992924);
                              FUN_144c14ea0(&local_788,(ulonglong)local_638 & 0xffffffff);
                              goto LAB_144c16d62;
                            }
                          }
                        }
LAB_144c16f96:
                        *param_2 = 0x80040200;
                        FUN_144c14f00(&local_788);
                        goto LAB_144c16f46;
                      }
                      plVar4 = (longlong *)FUN_144f956e0(param_3,local_408);
                      cVar1 = FUN_144bfbf10(*plVar4,plVar4[1] - *plVar4,"valueparam");
                      if ((cVar1 == '\0') ||
                         (piVar3 = (int *)FUN_144f957d0(param_3,local_608,"value",&local_610),
                         *piVar3 < 0)) goto LAB_144c16f96;
                      FUN_144f70200(local_3f8,(longlong)local_610,&DAT_149992934);
LAB_144c16d62:
                      piVar3 = (int *)FUN_144c17530(param_1,local_60c,param_3,"parameters");
                      iVar2 = *piVar3;
                    }
                    goto LAB_144c16d84;
                  }
                  if ((DAT_14c787988 < 2) && (cVar1 = FUN_144bdbf80(), cVar1 == '\0'))
                  goto LAB_144c17113;
                  cVar1 = FUN_144bdbf80();
                  if (cVar1 == '\0') {
                    uVar5 = FUN_144f956e0(param_3,local_408);
                    uVar7 = FUN_144bdc640(&local_4b8,&DAT_14c787938,2);
                    local_5e8 = 1;
                    pcStack_5e0 = FUN_144c19e40;
                    local_5d0 = 1;
                    pcStack_5c8 = FUN_144c19e40;
                    local_5d8 = uVar5;
                    local_5c0 = uVar5;
                    lVar6 = FUN_144bdc480(uVar7,"Unknown element {}",&local_5d0,0);
                    *(char **)(lVar6 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                    *(undefined8 *)(lVar6 + 0x40) = 0x251;
                    FUN_144bdc690(&local_4b8);
                    *param_2 = 0x80040200;
                    goto LAB_144c17232;
                  }
                  uVar5 = FUN_144f956e0(param_3,local_418);
                  uVar7 = FUN_144bdc810(local_178,&DAT_14c787938,2);
                  local_5e8 = 1;
                  pcStack_5e0 = FUN_144c19e40;
                  local_5d0 = 1;
                  pcStack_5c8 = FUN_144c19e40;
                  local_5d8 = uVar5;
                  local_5c0 = uVar5;
                  lVar6 = FUN_144bdc480(uVar7,"Unknown element {}",&local_5d0,0);
                  *(undefined8 *)(lVar6 + 0x40) = 0x251;
                  goto LAB_144c170fc;
                }
                piVar3 = (int *)FUN_144f957d0(param_3,local_538,"value",&local_614);
                if (*piVar3 < 0) goto LAB_144c16e72;
                local_370 = (longlong)local_614;
                local_398 = local_398 | 0x10;
              }
              else {
                piVar3 = (int *)FUN_144f957d0(param_3,local_58c,"count",local_590);
                if (*piVar3 < 0) {
LAB_144c16e72:
                  *param_2 = 0x80040200;
LAB_144c16e90:
                  local_658 = 0;
                  if ((-1 < (int)local_654) && (local_660 != (undefined1 *)0x0)) {
                    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                              (&PTR_vftable_14c6e47a0,local_660,
                               (ulonglong)(local_654 & 0x7fffffff) << 2);
                  }
                  local_660 = (undefined1 *)0x0;
                  local_654 = 0x80000000;
                  local_6e8 = 0;
                  if ((-1 < (int)local_6e4) && (local_6f0 != (undefined1 *)0x0)) {
                    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                              (&PTR_vftable_14c6e47a0,local_6f0,
                               (ulonglong)(local_6e4 & 0x7fffffff) << 2);
                  }
                  local_778 = 0;
                  local_6e4 = 0x80000000;
                  local_6f0 = (undefined1 *)0x0;
                  if (((int)local_774 < 0) || (local_780 == (undefined1 *)0x0)) goto LAB_144c16f39;
                  goto LAB_144c16f36;
                }
                piVar3 = (int *)FUN_144c17530(param_1,local_618,param_3,"fields");
                iVar2 = *piVar3;
                while (-1 < iVar2) {
                  FUN_144bdf360(&local_4b8);
                  local_798 = (char *)0x0;
                  pcStack_790 = (char *)0x0;
                  piVar3 = (int *)FUN_144f95730(param_3,local_588,&DAT_149971528,&local_798);
                  if (*piVar3 < 0) goto LAB_144c16e60;
                  piVar3 = (int *)FUN_144f959a0(local_584,&local_798,&local_4b8);
                  if (*piVar3 < 0) goto LAB_144c16e60;
                  cVar1 = FUN_144bdfee0(&local_4b8,&DAT_149981f00);
                  if (cVar1 != '\0') {
                    FUN_144be05f0(&local_4b8,1);
                    FUN_144be0640(&local_4b8,1);
                  }
                  local_798 = (char *)0x0;
                  pcStack_790 = (char *)0x0;
                  piVar3 = (int *)FUN_144f95730(param_3,local_580,"typeid",&local_798);
                  if (*piVar3 < 0) {
LAB_144c16f7d:
                    *param_2 = 0x80040200;
                    FUN_144bdf2f0(&local_4b8);
                    goto LAB_144c17232;
                  }
                  if ((local_798 != pcStack_790) && (*local_798 == '\"')) {
                    local_798 = local_798 + 1;
                    pcStack_790 = pcStack_790 + -1;
                    local_528 = local_798;
                    pcStack_520 = pcStack_790;
                  }
                  cVar1 = FUN_144bfbf70(local_798,(longlong)pcStack_790 - (longlong)local_798,
                                        &DAT_149971580);
                  if (cVar1 == '\0') goto LAB_144c16f7d;
                  iVar2 = FUN_144bfbbb0(&DAT_149971580);
                  local_798 = local_798 + iVar2;
                  pcStack_510 = pcStack_790;
                  local_518 = local_798;
                  piVar3 = (int *)FUN_144f95c90(local_548,&local_798,local_560);
                  if (*piVar3 < 0) goto LAB_144c16f7d;
                  piVar3 = (int *)FUN_144f957d0(param_3,local_57c,"flags",local_61c);
                  if (*piVar3 < 0) {
                    *param_2 = 0x80040200;
                    FUN_144bdf2f0(&local_4b8);
                    goto LAB_144c16e90;
                  }
                  uVar5 = FUN_144f96600(local_4b8,(longlong)local_4b0 + -1);
                  FUN_144f703c0(local_3f8,uVar5,0,local_61c[0],0);
                  iVar2 = local_778 + 1;
                  if ((int)(local_774 & 0x7fffffff) < iVar2) {
                    FUN_1401f86b2(&local_780,&PTR_vftable_14c6e47a0,(longlong)iVar2);
                  }
                  if ((undefined4 *)(local_780 + (longlong)local_778 * 4) != (undefined4 *)0x0) {
                    *(undefined4 *)(local_780 + (longlong)local_778 * 4) = local_560[0];
                  }
                  local_778 = iVar2;
                  FUN_144bdf2f0(&local_4b8);
                  piVar3 = (int *)FUN_144c17530(param_1,local_618,param_3,"fields");
                  iVar2 = *piVar3;
                }
              }
            }
            else {
              local_798 = (char *)0x0;
              pcStack_790 = (char *)0x0;
              piVar3 = (int *)FUN_144f95730(param_3,local_59c,&DAT_1499928d8,&local_798);
              if (*piVar3 < 0) goto LAB_144c17113;
              if ((local_798 != pcStack_790) && (*local_798 == '\"')) {
                local_798 = local_798 + 1;
                pcStack_790 = pcStack_790 + -1;
                local_4d8 = local_798;
                pcStack_4d0 = pcStack_790;
              }
              cVar1 = FUN_144bfbf70(local_798,(longlong)pcStack_790 - (longlong)local_798,
                                    &DAT_149971580);
              if (cVar1 == '\0') goto LAB_144c17113;
              iVar2 = FUN_144bfbbb0(&DAT_149971580);
              local_798 = local_798 + iVar2;
              pcStack_4c0 = pcStack_790;
              local_4c8 = local_798;
              piVar3 = (int *)FUN_144f95c90(local_598,&local_798,&local_568);
              if (*piVar3 < 0) goto LAB_144c17113;
              local_398 = local_398 | 2;
              local_388 = 0;
              if (((local_res20[0] & 0xf) - 6 & 0xfffffffd) != 0) goto LAB_144c17113;
              iVar13 = *(int *)(param_1 + 0x140) + -1;
              iVar2 = (int)local_568;
              local_788 = CONCAT44(iVar2,(undefined4)local_788);
              if (iVar13 < *(int *)(param_1 + 0x148) * 2) {
                FUN_144c178b0((longlong *)(param_1 + 0x138),local_594,iVar13 * 2 + 2);
              }
              lVar10 = *(longlong *)(param_1 + 0x138);
              uVar14 = *(int *)(param_1 + 0x140) - 1;
              uVar8 = iVar2 * -0x61c8864f;
              uVar8 = (uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 |
                      iVar2 * -0x4f000000) & uVar14;
              lVar6 = (longlong)(int)uVar8 * 4;
              iVar13 = 1;
              if (*(int *)(lVar10 + (longlong)(int)uVar8 * 4) == -1) {
LAB_144c16803:
                *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar13;
                *(int *)(lVar10 + (longlong)(int)uVar8 * 4) = iVar2;
              }
              else {
                do {
                  iVar13 = 0;
                  if (*(int *)(lVar10 + lVar6) == iVar2) goto LAB_144c16803;
                  uVar8 = uVar8 + 1 & uVar14;
                  lVar6 = (longlong)(int)uVar8 * 4;
                } while (*(int *)(lVar6 + lVar10) != -1);
                *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
                *(int *)(lVar10 + (longlong)(int)uVar8 * 4) = iVar2;
              }
            }
          }
          else {
            piVar3 = (int *)FUN_144f957d0(param_3,local_5a0,"value",&local_620);
            if (*piVar3 < 0) goto LAB_144c16e72;
            local_2e8 = (longlong)local_620;
            local_398 = local_398 | 0x200000;
          }
          goto LAB_144c16d84;
        }
LAB_144c16dad:
        piVar3 = (int *)FUN_144f704f0(local_3f8,local_608,param_1 + 0x18,&local_550);
        if (*piVar3 < 0) {
          if ((DAT_14c787988 != 0) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
            cVar1 = FUN_144bdbf80();
            if (cVar1 == '\0') {
              uVar5 = FUN_144bdc640(&local_4b8);
              local_638 = (char *)0x0;
              lVar6 = FUN_144bdc480(uVar5,"Failed to allocate type from builder",&local_638,0);
              *(char **)(lVar6 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
              *(undefined8 *)(lVar6 + 0x40) = 0x259;
              FUN_144bdc690(&local_4b8);
              *param_2 = 0x80040200;
              goto LAB_144c17232;
            }
            uVar5 = FUN_144bdc810(local_178,&DAT_14c787938,1);
            local_638 = (char *)0x0;
            lVar6 = FUN_144bdc480(uVar5,"Failed to allocate type from builder",&local_638,0);
            *(undefined8 *)(lVar6 + 0x40) = 0x259;
LAB_144c170fc:
            *(char **)(lVar6 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
            FUN_144bdc8a0(local_178);
          }
LAB_144c17113:
          *param_2 = 0x80040200;
        }
        else {
          iVar2 = (int)uVar15 + 1;
          if (iVar2 < *(int *)(param_1 + 0x70)) {
            iVar2 = *(int *)(param_1 + 0x70);
          }
          if ((int)(*(uint *)(param_1 + 0x74) & 0x7fffffff) < iVar2) {
            FUN_144c13a80(param_1 + 0x68,&PTR_vftable_14c6e47a0,(longlong)iVar2);
          }
          iVar13 = *(int *)(param_1 + 0x70);
          if (iVar13 < iVar2) {
            *(int *)(param_1 + 0x70) = iVar2;
            if (0 < iVar2 - iVar13) {
              uVar9 = (ulonglong)(uint)(iVar2 - iVar13);
              puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar13 * 8);
              do {
                if (puVar11 != (undefined8 *)0x0) {
                  *puVar11 = 0;
                }
                uVar9 = uVar9 - 1;
                puVar11 = puVar11 + 1;
              } while (uVar9 != 0);
            }
          }
          else if (iVar2 < iVar13) {
            *(int *)(param_1 + 0x70) = iVar2;
          }
          *(undefined8 *)(*(longlong *)(param_1 + 0x68) + (longlong)(int)uVar15 * 8) = local_550;
          FUN_144f94860(param_1 + 0xd0,uVar15 & 0xffffffff,local_550);
          local_5f8 = *(char **)(param_1 + 0x68);
          pcStack_5f0 = local_5f8 + (longlong)*(int *)(param_1 + 0x70) * 8;
          FUN_144f94920(param_1 + 0xd0,local_550,&local_788,&local_5f8);
          *param_2 = 0;
        }
LAB_144c17232:
        local_658 = 0;
        if ((-1 < (int)local_654) && (local_660 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_660,(ulonglong)(local_654 & 0x7fffffff) << 2);
        }
        local_6e8 = 0;
        local_654 = 0x80000000;
        local_660 = (undefined1 *)0x0;
        if ((-1 < (int)local_6e4) && (local_6f0 != (undefined1 *)0x0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_6f0,(ulonglong)(local_6e4 & 0x7fffffff) << 2);
        }
        local_778 = 0;
        local_6e4 = 0x80000000;
        local_6f0 = (undefined1 *)0x0;
        if ((-1 < (int)local_774) && (local_780 != (undefined1 *)0x0)) {
LAB_144c16f36:
          local_6e4 = 0x80000000;
          local_6f0 = (undefined1 *)0x0;
          local_778 = 0;
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,local_780,(ulonglong)(local_774 & 0x7fffffff) << 2);
        }
LAB_144c16f39:
        local_780 = (undefined1 *)0x0;
        local_774 = 0x80000000;
LAB_144c16f46:
        FUN_144f6fbe0(local_3f8);
        return param_2;
      }
    }
  }
  *param_2 = 0x80040200;
  return param_2;
LAB_144c16476:
  iVar13 = 0;
LAB_144c16479:
  *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + iVar13;
  *(int *)(lVar10 + (longlong)(int)uVar8 * 4) = iVar16;
  uVar15 = local_398;
  puVar18 = puVar17;
switchD_144c162b8_default:
  local_2f0 = (ulonglong)puVar18 & 0xffff | (ulonglong)((uint)puVar19 & 0xfff) << 0x10;
  local_398 = uVar15 | 0x100004;
  local_380 = puVar12;
LAB_144c16d84:
  piVar3 = (int *)FUN_144c17530(param_1,local_648,param_3);
  uVar15 = local_628;
  if (*piVar3 < 0) goto LAB_144c16dad;
  goto LAB_144c160e9;
}



// FUNCTION 144c17320 FUN_144c17320 body=513 status=ok
// SIG undefined FUN_144c17320(void)

undefined4 * FUN_144c17320(longlong param_1,undefined4 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  longlong local_res8;
  undefined4 *local_res10;
  longlong local_res18;
  longlong local_res20;
  undefined4 *local_58;
  uint local_50;
  uint local_4c;
  
  puVar15 = (undefined4 *)0x0;
  uVar13 = 0x80000000;
  uVar10 = 0;
  local_50 = 0;
  plVar2 = (longlong *)(param_1 + 0x138);
  local_58 = (undefined4 *)0x0;
  local_res18 = *(longlong *)(param_1 + 0x68);
  local_4c = 0x80000000;
  iVar8 = 0;
  local_res20 = (longlong)*(int *)(param_1 + 0x70) * 8;
  iVar4 = *(int *)(param_1 + 0x140) + -1;
  if (-1 < iVar4) {
    lVar6 = 0;
    piVar5 = (int *)*plVar2;
    do {
      if (*piVar5 != -1) break;
      iVar8 = iVar8 + 1;
      lVar6 = lVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (lVar6 <= iVar4);
  }
  local_res8 = param_1;
  local_res10 = param_2;
  if (iVar8 <= *(int *)(param_1 + 0x140) + -1) {
    lVar14 = local_res20 >> 3;
    lVar6 = param_1;
    do {
      iVar4 = *(int *)(*plVar2 + (longlong)iVar8 * 4);
      if (iVar4 < (int)lVar14) {
        if (*(longlong *)(local_res18 + (longlong)iVar4 * 8) != 0) {
          FUN_144f93660();
        }
        uVar1 = uVar10 + 1;
        uVar11 = uVar10;
        if ((int)(uVar13 & 0x7fffffff) < (int)uVar1) {
          FUN_1401f86b2(&local_58,&PTR_vftable_14c6e47c0,(longlong)(int)uVar1);
          puVar15 = local_58;
          uVar11 = local_50;
          uVar13 = local_4c;
        }
        lVar6 = local_res8;
        uVar10 = uVar1;
        local_50 = uVar1;
        if (puVar15 + (int)uVar11 != (int *)0x0) {
          puVar15[(int)uVar11] = iVar4;
        }
      }
      iVar8 = iVar8 + 1;
      iVar4 = *(int *)(param_1 + 0x140) + -1;
      if (iVar8 <= iVar4) {
        lVar7 = (longlong)iVar8;
        piVar5 = (int *)(*plVar2 + lVar7 * 4);
        do {
          if (*piVar5 != -1) break;
          iVar8 = iVar8 + 1;
          lVar7 = lVar7 + 1;
          piVar5 = piVar5 + 1;
        } while (lVar7 <= iVar4);
      }
    } while (iVar8 <= *(int *)(lVar6 + 0x140) + -1);
  }
  puVar3 = local_res10;
  if (0 < (int)uVar10) {
    uVar12 = (ulonglong)uVar10;
    puVar9 = puVar15;
    do {
      FUN_144c17770(plVar2,&local_res8,*puVar9);
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *puVar3 = 0;
  if ((-1 < (int)uVar13) && (puVar15 != (undefined4 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
              (&PTR_vftable_14c6e47c0,puVar15,(ulonglong)(uVar13 & 0x7fffffff) << 2);
  }
  return puVar3;
}



// FUNCTION 144c17530 FUN_144c17530 body=235 status=ok
// SIG undefined FUN_144c17530(void)

undefined4 *
FUN_144c17530(undefined8 param_1,undefined4 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 local_18 [16];
  
  if (*(int *)(param_3 + 200) == 2) {
    plVar3 = (longlong *)FUN_144f956e0(param_3,local_18);
    cVar1 = FUN_144bfbf10(*plVar3,plVar3[1] - *plVar3,param_4);
    if (cVar1 != '\0') {
LAB_144c175c6:
      *param_2 = 0x80040200;
      return param_2;
    }
  }
  iVar2 = FUN_144f95520(param_3);
  do {
    if ((iVar2 == 6) || (iVar2 == 7)) goto LAB_144c175c6;
    if (iVar2 == 1) {
LAB_144c17602:
      *param_2 = 0;
      return param_2;
    }
    if (iVar2 == 2) {
      plVar3 = (longlong *)FUN_144f956e0(param_3,local_18);
      cVar1 = FUN_144bfbf10(*plVar3,plVar3[1] - *plVar3,param_4);
      if (cVar1 == '\0') goto LAB_144c17602;
      goto LAB_144c175c6;
    }
    if (iVar2 == 3) {
      plVar3 = (longlong *)FUN_144f956e0(param_3,local_18);
      cVar1 = FUN_144bfbf10(*plVar3,plVar3[1] - *plVar3,param_4);
      if (cVar1 != '\0') goto LAB_144c175c6;
    }
    iVar2 = FUN_144f95520(param_3);
  } while( true );
}



// FUNCTION 144c17620 FUN_144c17620 body=115 status=ok
// SIG undefined FUN_144c17620(void)

undefined8 * FUN_144c17620(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar1 = FUN_144beec90(param_3);
  plVar4 = (longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
  uVar2 = (**(code **)(*plVar4 + 8))(plVar4,(longlong)iVar1);
  param_2[1] = param_3;
  *param_2 = uVar2;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_144befdb0(param_3);
  }
  param_2[2] = uVar3;
  if ((uVar3 & 1) != 0) {
    FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144c176a0 FUN_144c176a0 body=17 status=ok
// SIG undefined FUN_144c176a0(void)

undefined8 * FUN_144c176a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 144c176c0 FUN_144c176c0 body=79 status=ok
// SIG undefined FUN_144c176c0(void)

void FUN_144c176c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
  iVar2 = FUN_144beec90(param_3);
                    /* WARNING: Could not recover jumptable at 0x000144c1770c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x18))(*(longlong *)(param_1 + 8) + 0xf0,param_2,(longlong)iVar2);
  return;
}



// FUNCTION 144c17710 FUN_144c17710 body=87 status=ok
// SIG undefined FUN_144c17710(void)

undefined8 FUN_144c17710(undefined8 param_1,ulonglong param_2)

{
  FUN_144be7ef0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 144c17770 FUN_144c17770 body=305 status=ok
// SIG undefined FUN_144c17770(void)

undefined4 * FUN_144c17770(longlong *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 1);
  uVar1 = uVar8 - 1;
  uVar5 = uVar8;
  if (0 < (int)uVar1) {
    uVar5 = param_3 * -0x61c8864f;
    uVar6 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | param_3 * -0x4f000000
            ) & uVar1;
    iVar3 = *(int *)(*param_1 + (longlong)(int)uVar6 * 4);
    while ((uVar5 = uVar8, iVar3 != -1 && (uVar5 = uVar6, iVar3 != param_3))) {
      uVar6 = uVar6 + 1 & uVar1;
      iVar3 = *(int *)(*param_1 + (longlong)(int)uVar6 * 4);
    }
  }
  if ((int)uVar1 < (int)uVar5) {
    *param_2 = 0x80040200;
    return param_2;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  *(undefined4 *)(*param_1 + (longlong)(int)uVar5 * 4) = 0xffffffff;
  lVar4 = *param_1;
  uVar8 = uVar5 + uVar1 & uVar1;
  iVar3 = *(int *)(lVar4 + (longlong)(int)uVar8 * 4);
  while (iVar3 != -1) {
    uVar8 = uVar8 + uVar1 & uVar1;
    iVar3 = *(int *)(lVar4 + (longlong)(int)uVar8 * 4);
  }
  uVar6 = uVar8 + 1 & uVar1;
  uVar8 = uVar5 + 1 & uVar1;
  lVar2 = (longlong)(int)uVar8 * 4;
  iVar3 = *(int *)(lVar2 + lVar4);
  do {
    if (iVar3 == -1) {
      *param_2 = 0;
      return param_2;
    }
    iVar3 = *(int *)(lVar2 + lVar4);
    uVar7 = iVar3 * -0x61c8864f;
    uVar7 = (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar3 * -0x4f000000)
            & uVar1;
    if ((uVar8 < uVar6) || (uVar7 <= uVar5)) {
      if (uVar8 < uVar5) {
        if ((uVar7 <= uVar5) && (uVar8 < uVar7)) {
LAB_144c1784e:
          *(int *)(lVar4 + (longlong)(int)uVar5 * 4) = iVar3;
          *(undefined4 *)(lVar2 + *param_1) = 0xffffffff;
          uVar5 = uVar8;
        }
      }
      else if ((uVar7 <= uVar5) || (uVar6 <= uVar7)) goto LAB_144c1784e;
    }
    lVar4 = *param_1;
    uVar8 = uVar8 + 1 & uVar1;
    lVar2 = (longlong)(int)uVar8 * 4;
    iVar3 = *(int *)(lVar4 + lVar2);
  } while( true );
}



// FUNCTION 144c178b0 FUN_144c178b0 body=670 status=ok
// SIG undefined FUN_144c178b0(void)

undefined4 * FUN_144c178b0(longlong *param_1,undefined4 *param_2,int param_3)

{
  longlong lVar1;
  longlong *_Dst;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined1 local_res8 [8];
  uint local_res18;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  iVar8 = 8;
  if (8 < param_3) {
    iVar8 = param_3;
  }
  lVar3 = param_1[1];
  lVar11 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res18 = 0x80000000;
  local_3c = 0x80000000;
  if (param_1 != &local_48) {
    FUN_143821c08(&local_48,&PTR_vftable_14c6e47a0);
    FUN_143821c08(param_1,&PTR_vftable_14c6e47a0);
    lVar11 = *param_1;
    *param_1 = local_48;
    local_res18 = *(uint *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = local_40;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
  }
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar8) {
    FUN_141807e20(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar8);
  }
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar5 = uVar5 | uVar5 >> 1;
  uVar5 = uVar5 | uVar5 >> 2;
  uVar5 = uVar5 | uVar5 >> 4;
  uVar5 = uVar5 | uVar5 >> 8;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar7 = uVar5 - (uVar5 >> 1);
  if ((int)param_1[1] < (int)uVar7) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  else if ((int)uVar7 < (int)param_1[1]) {
    *(uint *)(param_1 + 1) = uVar7;
  }
  iVar9 = 0;
  iVar8 = iVar9;
  if ((0 < (int)uVar7) && (iVar8 = 0, 3 < uVar7)) {
    _Dst = (longlong *)*param_1;
    if ((param_1 < _Dst) ||
       ((longlong *)((longlong)_Dst + (longlong)(int)(uVar7 - 1) * 4) < param_1)) {
      uVar4 = uVar7 & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      do {
        iVar9 = iVar9 + 4;
      } while (iVar9 < (int)(uVar7 - uVar4));
      iVar8 = (uVar7 - uVar4) + 3;
      memset(_Dst,-1,(longlong)((int)(iVar8 + (iVar8 >> 0x1f & 3U)) >> 2) << 4);
      iVar8 = iVar9;
    }
  }
  for (lVar6 = (longlong)iVar8; lVar6 < (longlong)((ulonglong)uVar5 - (ulonglong)(uVar5 >> 1));
      lVar6 = lVar6 + 1) {
    *(undefined4 *)(*param_1 + lVar6 * 4) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  lVar6 = 0;
  if (0 < (longlong)(int)lVar3) {
    do {
      iVar8 = *(int *)(lVar11 + lVar6 * 4);
      if (iVar8 != -1) {
        iVar9 = (int)param_1[1] + -1;
        if (iVar9 < (int)param_1[2] * 2) {
          FUN_144c178b0(param_1,local_res8,iVar9 * 2 + 2);
        }
        iVar10 = 1;
        lVar2 = *param_1;
        uVar7 = (int)param_1[1] - 1;
        uVar5 = iVar8 * -0x61c8864f;
        uVar5 = (uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                iVar8 * -0x4f000000) & uVar7;
        lVar1 = (longlong)(int)uVar5 * 4;
        iVar9 = *(int *)(lVar1 + lVar2);
        while (iVar9 != -1) {
          if (*(int *)(lVar1 + lVar2) == iVar8) {
            iVar10 = 0;
            break;
          }
          uVar5 = uVar5 + 1 & uVar7;
          lVar1 = (longlong)(int)uVar5 * 4;
          iVar9 = *(int *)(lVar1 + lVar2);
        }
        *(int *)(param_1 + 2) = (int)param_1[2] + iVar10;
        *(int *)(lVar2 + (longlong)(int)uVar5 * 4) = iVar8;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)lVar3);
  }
  *param_2 = 0;
  if ((-1 < (int)local_res18) && (lVar11 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar11,(ulonglong)(local_res18 & 0x7fffffff) << 2);
  }
  return param_2;
}



// FUNCTION 144c17b50 FUN_144c17b50 body=104 status=ok
// SIG undefined FUN_144c17b50(void)

void FUN_144c17b50(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c17bc0 FUN_144c17bc0 body=7325 status=ok
// SIG undefined FUN_144c17bc0(void)

undefined4 *
FUN_144c17bc0(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  code *pcVar14;
  byte bVar15;
  char **ppcVar16;
  undefined8 *puVar17;
  longlong *****ppppplVar18;
  longlong *******ppppppplVar19;
  longlong *******ppppppplVar20;
  longlong ******pppppplVar21;
  bool bVar22;
  longlong *******ppppppplVar23;
  undefined1 local_538 [4];
  byte local_534;
  undefined8 local_530;
  longlong ******local_528;
  longlong ****pppplStack_520;
  undefined8 local_518;
  code *local_510;
  uint *local_508;
  uint local_500 [2];
  longlong ******local_4f8;
  longlong ******pppppplStack_4f0;
  undefined8 local_4e8;
  longlong ******pppppplStack_4e0;
  longlong ******local_4d8;
  code *pcStack_4d0;
  longlong ******local_4c8;
  code *local_4c0;
  uint *local_4b8;
  longlong ******local_4a8;
  code *pcStack_4a0;
  undefined1 local_498 [16];
  undefined1 local_488 [80];
  longlong ******local_438;
  int local_430;
  char *local_2e8;
  int local_2e0;
  char *local_198 [46];
  
  ppppppplVar19 = (longlong *******)0x0;
  plVar7 = (longlong *)FUN_144f956e0(param_3,&local_4d8);
  cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"record");
  if (cVar2 == '\0') {
    plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
    cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"integer");
    if (cVar2 == '\0') {
      plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
      cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,&DAT_1499929ac);
      if (cVar2 == '\0') {
        plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
        cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,&DAT_149982ba0);
        if (cVar2 == '\0') {
          plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
          cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"string");
          if (cVar2 != '\0') {
            local_530 = (longlong ******)0x0;
            if ((param_4[1] != 0) &&
               (puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538),
               ((byte)*puVar8 & 0x1f) == 3)) {
              local_530 = (longlong ******)*param_4;
              if ((*(byte *)(param_4 + 2) & 1) != 0) {
                FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
              }
              ppppppplVar19 = (longlong *******)param_4[2];
            }
            pppppplVar21 = local_530;
            param_4 = param_4 + 1;
            if (local_530 == (longlong ******)0x0) {
              if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
                cVar2 = FUN_144bdbf80();
                if (cVar2 == '\0') {
                  puVar8 = (undefined4 *)FUN_144bef800(*param_4,local_538);
                  local_4f8 = (longlong ******)*param_4;
                  local_4e8 = (longlong *******)
                              (CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
                  uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
                  local_528 = (longlong ******)0x2;
                  pppplStack_520 = (longlong ****)FUN_144c00d20;
                  local_518 = &local_4f8;
                  local_510 = FUN_144c19e60;
                  local_508 = (uint *)&local_4e8;
                  lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a string ({})",&local_528,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x314;
                  FUN_144bdc690(local_488);
                }
                else {
                  puVar12 = (uint *)FUN_144bef800(*param_4,local_538);
                  local_530 = (longlong ******)*param_4;
                  local_500[0] = *puVar12 & 0x1f;
                  uVar10 = FUN_144bdc810(local_198,&DAT_14c787938,2);
                  local_528 = (longlong ******)0x2;
                  pppplStack_520 = (longlong ****)FUN_144c00d20;
                  local_518 = (longlong *******)&local_530;
                  local_510 = FUN_144c19e60;
                  local_508 = local_500;
                  lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a string ({})",&local_528,0);
                  *(undefined8 *)(lVar11 + 0x40) = 0x314;
LAB_144c18cb7:
                  *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                  FUN_144bdc8a0(local_198);
                }
              }
LAB_144c18cce:
              *param_2 = 0x80040200;
              goto LAB_144c18cd6;
            }
            local_4d8 = (longlong ******)0x0;
            pcStack_4d0 = (code *)0x0;
            piVar9 = (int *)FUN_144f95730(param_3,local_538,"value",&local_4d8);
            if (*piVar9 < 0) {
              *(uint *)pppppplVar21 = 0;
              goto LAB_144c193ea;
            }
            FUN_144bdfbf0(&local_438,&local_4d8);
            FUN_144f959a0(local_538,&local_4d8,&local_438);
            cVar2 = FUN_144bdfee0(&local_438,&DAT_149981f00);
            iVar3 = 1;
            if (cVar2 != '\0') {
              FUN_144be05f0(&local_438,1);
              FUN_144be0640(&local_438,1);
            }
            local_500[0] = *(uint *)(param_1 + 0x188);
            local_4e8 = (longlong *******)local_438;
            if (*(int *)(param_1 + 400) == 0) {
              iVar6 = *(int *)(param_1 + 0x70);
              ppppppplVar20 = *(longlong ********)(param_1 + 0x68);
              local_4f8 = (longlong ******)ppppppplVar20;
              if (1 < (longlong)iVar6) {
                lVar11 = 1;
                do {
                  pppppplVar21 = ppppppplVar20[lVar11];
                  if (((pppppplVar21 != (longlong ******)0x0) &&
                      (piVar9 = (int *)FUN_144bef800(pppppplVar21,local_538),
                      ppppppplVar20 = (longlong *******)local_4f8,
                      (*piVar9 - 0x2004U & 0xfffffdff) == 0)) &&
                     (lVar13 = FUN_144beee40(pppppplVar21),
                     ppppppplVar20 = (longlong *******)local_4f8, lVar13 != 0)) {
                    uVar10 = FUN_144beee40(pppppplVar21);
                    cVar2 = FUN_144bfbf10(&DAT_149982c64,4,uVar10);
                    ppppppplVar20 = (longlong *******)local_4f8;
                    if (cVar2 != '\0') {
                      *(int *)(param_1 + 400) = iVar3;
                      pppppplVar21 = local_530;
                      break;
                    }
                  }
                  iVar3 = iVar3 + 1;
                  lVar11 = lVar11 + 1;
                  pppppplVar21 = local_530;
                } while (lVar11 < iVar6);
              }
              if (*(int *)(param_1 + 400) != 0) goto LAB_144c18e1e;
            }
            else {
LAB_144c18e1e:
              ppppppplVar20 = local_4e8;
              uVar10 = FUN_144bfbd30(local_4e8,param_1 + 0xf0);
              uVar5 = FUN_144bfbbb0(ppppppplVar20);
              local_4e8 = (longlong *******)CONCAT44(local_4e8._4_4_,*(uint *)(param_1 + 400));
              iVar3 = *(int *)(param_1 + 0x188) + 1;
              uVar4 = *(uint *)(param_1 + 400);
              if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) < iVar3) {
                FUN_144c19d30((longlong *)(param_1 + 0x180),&PTR_vftable_14c6e47a0,(longlong)iVar3);
                uVar4 = (uint)local_4e8;
              }
              puVar17 = (undefined8 *)
                        ((longlong)*(int *)(param_1 + 0x188) * 0x10 + *(longlong *)(param_1 + 0x180)
                        );
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = uVar10;
                *(uint *)(puVar17 + 1) = uVar4;
                *(undefined4 *)((longlong)puVar17 + 0xc) = uVar5;
              }
              *(int *)(param_1 + 0x188) = iVar3;
              if (-1 < (int)local_500[0]) {
                *(uint *)pppppplVar21 = local_500[0];
                FUN_144bdf2f0(&local_438);
                goto LAB_144c193ea;
              }
            }
            *param_2 = 0x80040200;
            FUN_144bdf2f0(&local_438);
LAB_144c18cd6:
            if (((ulonglong)ppppppplVar19 & 1) == 0) {
              return param_2;
            }
            FUN_144be6b30((ulonglong)ppppppplVar19 & 0xfffffffffffffffe);
            return param_2;
          }
          plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
          cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"array");
          if (cVar2 == '\0') {
            plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
            cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"pointer");
            if (cVar2 == '\0') goto LAB_144c193fc;
            local_534 = 0;
            ppppppplVar20 = ppppppplVar19;
            if (param_4[1] != 0) {
              puVar8 = (undefined4 *)FUN_144bef800();
              local_534 = 0;
              ppppppplVar20 = (longlong *******)0x0;
              if (((byte)*puVar8 & 0x1f) == 6) {
                local_4d8 = (longlong ******)*param_4;
                if ((*(byte *)(param_4 + 2) & 1) != 0) {
                  FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
                }
                ppppppplVar19 = (longlong *******)param_4[2];
                local_534 = (byte)ppppppplVar19;
                ppppppplVar20 = (longlong *******)local_4d8;
              }
            }
            puVar17 = param_4 + 1;
            if (ppppppplVar20 == (longlong *******)0x0) {
              if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
                cVar2 = FUN_144bdbf80();
                if (cVar2 == '\0') {
                  puVar8 = (undefined4 *)FUN_144bef800(*puVar17,local_538);
                  local_4d8 = (longlong ******)*puVar17;
                  local_530 = (longlong ******)
                              (CONCAT44(local_530._4_4_,*puVar8) & 0xffffffff0000001f);
                  uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
                  local_528 = (longlong ******)0x2;
                  pppplStack_520 = (longlong ****)FUN_144c00d20;
                  local_518 = &local_4d8;
                  local_510 = FUN_144c19e60;
                  local_508 = (uint *)&local_530;
                  lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a pointer ({})",&local_528,0);
                  *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                  *(undefined8 *)(lVar11 + 0x40) = 0x36e;
                  FUN_144bdc690(local_488);
                  *param_2 = 0x80040200;
                  goto LAB_144c19843;
                }
                puVar8 = (undefined4 *)FUN_144bef800(*puVar17,local_538);
                local_4f8 = (longlong ******)*puVar17;
                local_4e8 = (longlong *******)
                            (CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
                uVar10 = FUN_144bdc810(local_198,&DAT_14c787938,2);
                local_528 = (longlong ******)0x2;
                pppplStack_520 = (longlong ****)FUN_144c00d20;
                local_518 = &local_4f8;
                local_510 = FUN_144c19e60;
                local_508 = (uint *)&local_4e8;
                lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a pointer ({})",&local_528,0);
                *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
                *(undefined8 *)(lVar11 + 0x40) = 0x36e;
                FUN_144bdc8a0(local_198);
              }
              *param_2 = 0x80040200;
            }
            else {
              FUN_144bdf360(&local_2e8);
              local_4d8 = (longlong ******)0x0;
              pcStack_4d0 = (code *)0x0;
              piVar9 = (int *)FUN_144f95730(param_3,local_538,&DAT_1499928d8,&local_4d8);
              if (*piVar9 < 0) {
                *param_2 = 0x80040200;
                FUN_144bdf2f0(&local_2e8);
                bVar15 = local_534;
                goto LAB_144c18236;
              }
              piVar9 = (int *)FUN_144f959a0(local_538,&local_4d8,&local_2e8);
              if (*piVar9 < 0) {
                *param_2 = 0x80040200;
                FUN_144bdf2f0();
                bVar22 = (local_534 & 1) == 0;
                goto LAB_144c19846;
              }
              cVar2 = FUN_144bdfee0(&local_2e8,&DAT_149981f00);
              if (cVar2 != '\0') {
                FUN_144be05f0(&local_2e8,1);
                FUN_144be0640(&local_2e8,1);
              }
              iVar3 = 0x4998cf04;
              cVar2 = FUN_144bdfee0(&local_2e8,"object");
              if (cVar2 == '\0') {
                iVar3 = 0x499928d0;
                cVar2 = FUN_144bdfee0(&local_2e8,&DAT_1499928d0);
                if (cVar2 != '\0') {
                  iVar6 = 0x499928d4;
                  goto LAB_144c1972f;
                }
              }
              else {
                iVar6 = 0x4998cf0a;
LAB_144c1972f:
                local_4d8 = (longlong ******)(local_2e8 + (iVar6 - iVar3));
                pcStack_4d0 = (code *)(local_2e8 + (longlong)local_2e0 + -1);
                local_4a8 = local_4d8;
                pcStack_4a0 = pcStack_4d0;
                piVar9 = (int *)FUN_144f95c90(local_538,&local_4a8,local_500);
                uVar4 = local_500[0];
                if (-1 < *piVar9) {
                  iVar3 = local_500[0] + 1;
                  if ((int)(local_500[0] + 1) < *(int *)(param_1 + 0x80)) {
                    iVar3 = *(int *)(param_1 + 0x80);
                  }
                  if ((int)(*(uint *)(param_1 + 0x84) & 0x7fffffff) < iVar3) {
                    FUN_144c13b80(param_1 + 0x78,&PTR_vftable_14c6e47a0,(longlong)iVar3);
                  }
                  iVar6 = *(int *)(param_1 + 0x80);
                  if (iVar6 < iVar3) {
                    lVar11 = *(longlong *)(param_1 + 0x78);
                    *(int *)(param_1 + 0x80) = iVar3;
                    for (puVar17 = (undefined8 *)(lVar11 + (longlong)iVar6 * 0x18);
                        puVar17 != (undefined8 *)(lVar11 + (longlong)iVar3 * 0x18);
                        puVar17 = puVar17 + 3) {
                      if (puVar17 != (undefined8 *)0x0) {
                        *puVar17 = 0;
                        puVar17[1] = 0;
                        *(undefined1 *)(puVar17 + 2) = 0;
                        *(undefined4 *)((longlong)puVar17 + 0x14) = 0;
                      }
                    }
                  }
                  else if (iVar3 < iVar6) {
                    *(int *)(param_1 + 0x80) = iVar3;
                  }
                  *(uint *)*param_4 = uVar4;
                  FUN_144bdf2f0(&local_2e8);
                  if (((ulonglong)ppppppplVar19 & 1) == 0) goto LAB_144c193fc;
                  plVar7 = (longlong *)((ulonglong)ppppppplVar19 & 0xfffffffffffffffe);
                  goto LAB_144c193f7;
                }
              }
              *param_2 = 0x80040200;
              FUN_144bdf2f0(&local_2e8);
            }
LAB_144c19843:
            bVar22 = ((ulonglong)ppppppplVar19 & 1) == 0;
LAB_144c19846:
            if (bVar22) {
              return param_2;
            }
            FUN_144be6b30((ulonglong)ppppppplVar19 & 0xfffffffffffffffe);
            return param_2;
          }
          local_4e8 = (longlong *******)0x0;
          pppppplStack_4e0 = (longlong ******)0x0;
          piVar9 = (int *)FUN_144f95730(param_3,local_538,"elementtypeid",&local_4e8);
          if (*piVar9 < 0) {
LAB_144c19428:
            *param_2 = 0x80040200;
            return param_2;
          }
          if ((local_4e8 != (longlong *******)pppppplStack_4e0) && (*(char *)local_4e8 == '\"')) {
            local_4f8 = (longlong ******)((longlong)local_4e8 + 1);
            pppppplStack_4f0 = (longlong ******)((longlong)pppppplStack_4e0 + -1);
            local_4e8 = (longlong *******)local_4f8;
            pppppplStack_4e0 = pppppplStack_4f0;
          }
          cVar2 = FUN_144bfbf70(local_4e8,(longlong)pppppplStack_4e0 - (longlong)local_4e8,
                                &DAT_149971580);
          if (cVar2 == '\0') goto LAB_144c19428;
          iVar3 = FUN_144bfbbb0(&DAT_149971580);
          local_4e8 = (longlong *******)((longlong)local_4e8 + (longlong)iVar3);
          piVar9 = (int *)FUN_144f95c90(local_538,&local_4e8,&local_4d8);
          if ((*piVar9 < 0) ||
             (piVar9 = (int *)FUN_144f957d0(param_3,local_538,"count",&local_4a8), *piVar9 < 0))
          goto LAB_144c19428;
          local_530 = (longlong ******)0x0;
          pppppplVar21 = (longlong ******)(param_4 + 1);
          pppplStack_520 = (longlong ****)0x0;
          local_518 = (longlong *******)0x0;
          ppppplVar18 = (longlong *****)pppplStack_520;
          ppppppplVar19 = local_518;
          if ((param_4[1] != 0) &&
             (local_4f8 = pppppplVar21, puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538),
             ppppplVar18 = (longlong *****)pppplStack_520, ppppppplVar19 = local_518,
             ((byte)*puVar8 & 0x1f) == 8)) {
            local_530 = (longlong ******)*param_4;
            ppppplVar18 = *pppppplVar21;
            if ((*(byte *)(param_4 + 2) & 1) != 0) {
              local_4f8 = pppppplVar21;
              FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
            }
            ppppppplVar19 = (longlong *******)param_4[2];
          }
          local_4f8 = (longlong ******)(param_4 + 1);
          if (local_530 == (longlong ******)0x0) {
            if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
              cVar2 = FUN_144bdbf80();
              pppppplVar21 = local_4f8;
              if (cVar2 != '\0') {
                puVar12 = (uint *)FUN_144bef800(*local_4f8,local_538);
                local_4d8 = (longlong ******)*pppppplVar21;
                local_500[0] = *puVar12 & 0x1f;
                uVar10 = FUN_144bdc810(local_198,&DAT_14c787938,2);
                local_528 = (longlong ******)0x2;
                pppplStack_520 = (longlong ****)FUN_144c00d20;
                local_518 = &local_4d8;
                local_510 = FUN_144c19e60;
                local_508 = local_500;
                lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not an array ({})",&local_528,0);
                *(undefined8 *)(lVar11 + 0x40) = 0x33b;
                goto LAB_144c18cb7;
              }
              puVar8 = (undefined4 *)FUN_144bef800(*local_4f8,local_538);
              local_530 = (longlong ******)*pppppplVar21;
              local_4e8 = (longlong *******)(CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f)
              ;
              uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
              local_528 = (longlong ******)0x2;
              pppplStack_520 = (longlong ****)FUN_144c00d20;
              local_518 = (longlong *******)&local_530;
              local_510 = FUN_144c19e60;
              local_508 = (uint *)&local_4e8;
              lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not an array ({})",&local_528,0);
              *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
              *(undefined8 *)(lVar11 + 0x40) = 0x33b;
              FUN_144bdc690(local_488);
            }
            goto LAB_144c18cce;
          }
          pcVar14 = (code *)0x0;
          puVar17 = (undefined8 *)FUN_144befe50(ppppplVar18,1);
          iVar3 = 0;
          if (puVar17 != (undefined8 *)0x0) {
            iVar3 = (int)((ulonglong)*puVar17 >> 8);
          }
          if (iVar3 == 0) {
            if ((uint)local_4a8 != 0) {
              ppppplVar18 = *(longlong ******)
                             (*(longlong *)(param_1 + 0x68) + (longlong)(int)local_4d8 * 8);
              *(uint *)local_530 = *(uint *)(param_1 + 0x188);
              iVar3 = FUN_144beec90(ppppplVar18);
              local_4f8 = (longlong ******)
                          (**(code **)(*(longlong *)(param_1 + 0xf0) + 8))
                                    ((longlong *)(param_1 + 0xf0),
                                     (longlong)(int)(iVar3 * (uint)local_4a8));
              pcStack_4d0 = (code *)CONCAT44((int)local_4a8,(int)local_4d8);
              iVar3 = *(int *)(param_1 + 0x188) + 1;
              local_4d8 = local_4f8;
              if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) < iVar3) {
                FUN_144c19d30((longlong *)(param_1 + 0x180),&PTR_vftable_14c6e47a0,(longlong)iVar3);
              }
              puVar17 = (undefined8 *)
                        ((longlong)*(int *)(param_1 + 0x188) * 0x10 + *(longlong *)(param_1 + 0x180)
                        );
              if (puVar17 != (undefined8 *)0x0) {
                *puVar17 = local_4d8;
                puVar17[1] = pcStack_4d0;
              }
              *(int *)(param_1 + 0x188) = iVar3;
              pcVar14 = (code *)0x0;
              local_4e8 = (longlong *******)CONCAT44(local_4e8._4_4_,(uint)local_4a8);
              local_500[0] = 0;
              uVar4 = (uint)local_4a8;
              if (ppppplVar18 != (longlong *****)0x0) {
                local_500[0] = FUN_144beec90(ppppplVar18);
                pcVar14 = (code *)FUN_144befdb0(ppppplVar18);
                if (((ulonglong)pcVar14 & 1) != 0) {
                  FUN_144be6b20((ulonglong)pcVar14 & 0xfffffffffffffffe);
                }
                uVar4 = (uint)local_4e8;
              }
              goto LAB_144c192d8;
            }
            *(uint *)local_530 = 0;
          }
          else {
            local_518 = (longlong *******)0x0;
            local_528 = (longlong ******)0x0;
            pppplStack_520 = (longlong ****)0x0;
            local_510 = (code *)0x0;
            (**(code **)(*(longlong *)((ulonglong)ppppppplVar19 & 0xfffffffffffffffe) + 0x48))
                      ((longlong *)((ulonglong)ppppppplVar19 & 0xfffffffffffffffe),local_538,
                       local_530,ppppplVar18,&local_528);
            local_4f8 = local_528;
            local_500[0] = local_518._4_4_;
            ppppplVar18 = (longlong *****)pppplStack_520;
            pcVar14 = local_510;
            uVar4 = (uint)local_518;
LAB_144c192d8:
            if ((uVar4 != 0) &&
               (piVar9 = (int *)FUN_144c17530(param_1,&local_530,param_3,"array"), -1 < *piVar9)) {
              ppppppplVar20 =
                   (longlong *******)
                   (((ulonglong)pcVar14 & 0xff ^ (ulonglong)pcVar14) & 0xfffffffffffffffe ^
                   (ulonglong)pcVar14 & 0xff);
              local_534 = (byte)ppppppplVar20 & 1;
              local_4e8 = (longlong *******)((ulonglong)local_4e8 & 0xffffffff00000000);
              uVar4 = 0;
              do {
                local_528 = (longlong ******)((longlong)local_4f8 + (longlong)(int)uVar4);
                pppplStack_520 = (longlong ****)ppppplVar18;
                local_518 = ppppppplVar20;
                if (local_534 != 0) {
                  FUN_144be6b20((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
                }
                piVar9 = (int *)FUN_144c17bc0(param_1,local_538,param_3,&local_528);
                if (*piVar9 < 0) {
                  *param_2 = 0x80040200;
                  if (((ulonglong)local_518 & 1) != 0) {
                    FUN_144be6b30((ulonglong)local_518 & 0xfffffffffffffffe);
                  }
                  if (((ulonglong)pcVar14 & 1) != 0) {
                    FUN_144be6b30((ulonglong)pcVar14 & 0xfffffffffffffffe);
                  }
                  goto LAB_144c18cd6;
                }
                local_4e8 = (longlong *******)
                            CONCAT44(local_4e8._4_4_,(uint)local_4e8 + local_500[0]);
                if (((ulonglong)local_518 & 1) != 0) {
                  FUN_144be6b30((ulonglong)local_518 & 0xfffffffffffffffe);
                }
                piVar9 = (int *)FUN_144c17530(param_1,&local_530,param_3,"array");
                uVar4 = (uint)local_4e8;
              } while (-1 < *piVar9);
            }
          }
          if (((ulonglong)pcVar14 & 1) != 0) {
            FUN_144be6b30((ulonglong)pcVar14 & 0xfffffffffffffffe);
          }
LAB_144c193ea:
          if (((ulonglong)ppppppplVar19 & 1) == 0) goto LAB_144c193fc;
          plVar7 = (longlong *)((ulonglong)ppppppplVar19 & 0xfffffffffffffffe);
          goto LAB_144c193f7;
        }
        local_4f8 = (longlong ******)0x0;
        pppplStack_520 = (longlong ****)0x0;
        local_518 = (longlong *******)0x0;
        if ((param_4[1] == 0) ||
           (puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538), ((byte)*puVar8 & 0x1f) != 2)
           ) {
          bVar15 = 0;
          ppppplVar18 = (longlong *****)pppplStack_520;
          ppppppplVar20 = local_518;
        }
        else {
          local_4f8 = (longlong ******)*param_4;
          ppppplVar18 = (longlong *****)param_4[1];
          if ((*(byte *)(param_4 + 2) & 1) != 0) {
            FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
          }
          ppppppplVar19 = (longlong *******)param_4[2];
          bVar15 = (byte)ppppppplVar19;
          ppppppplVar20 = ppppppplVar19;
        }
        param_4 = param_4 + 1;
        if ((longlong *******)local_4f8 == (longlong *******)0x0) {
          if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            if (cVar2 != '\0') {
              puVar12 = (uint *)FUN_144bef800(*param_4,local_538);
              local_530 = (longlong ******)*param_4;
              local_500[0] = *puVar12 & 0x1f;
              uVar10 = FUN_144bdc810(local_198,&DAT_14c787938,2);
              local_528 = (longlong ******)0x2;
              pppplStack_520 = (longlong ****)FUN_144c00d20;
              local_518 = (longlong *******)&local_530;
              local_510 = FUN_144c19e60;
              local_508 = local_500;
              lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a bool ({})",&local_528,0);
              *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
              ppcVar16 = local_198;
              *(undefined8 *)(lVar11 + 0x40) = 0x305;
              goto LAB_144c181cb;
            }
            puVar8 = (undefined4 *)FUN_144bef800(*param_4,local_538);
            local_4f8 = (longlong ******)*param_4;
            local_4e8 = (longlong *******)(CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
            uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
            local_528 = (longlong ******)0x2;
            pppplStack_520 = (longlong ****)FUN_144c00d20;
            local_518 = &local_4f8;
            local_510 = FUN_144c19e60;
            local_508 = (uint *)&local_4e8;
            lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a bool ({})",&local_528,0);
            *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
            *(undefined8 *)(lVar11 + 0x40) = 0x305;
            FUN_144bdc690(local_488);
          }
          goto LAB_144c181d0;
        }
        FUN_144bdf360(&local_438);
        local_4d8 = (longlong ******)0x0;
        pcStack_4d0 = (code *)0x0;
        piVar9 = (int *)FUN_144f95730(param_3,local_538,"value",&local_4d8);
        if (*piVar9 < 0) goto LAB_144c18221;
        piVar9 = (int *)FUN_144f959a0(local_538,&local_4d8,&local_438);
        if (-1 < *piVar9) {
          cVar2 = FUN_144bdfee0(&local_438,&DAT_149981f00);
          if (cVar2 != '\0') {
            FUN_144be05f0(&local_438,1);
            FUN_144be0640(&local_438,1);
          }
          iVar3 = FUN_144bfbae0(local_438,&DAT_149981e34);
          plVar7 = (longlong *)((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
          (**(code **)(*plVar7 + 0x28))(plVar7,local_538,local_4f8,ppppplVar18,iVar3 == 0);
          goto LAB_144c18ad1;
        }
        *param_2 = 0x80040200;
        FUN_144bdf2f0();
        bVar22 = (bVar15 & 1) == 0;
      }
      else {
        local_530 = (longlong ******)0x0;
        pppplStack_520 = (longlong ****)0x0;
        local_518 = (longlong *******)0x0;
        if ((param_4[1] == 0) ||
           (puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538), ((byte)*puVar8 & 0x1f) != 5)
           ) {
          bVar15 = 0;
          ppppplVar18 = (longlong *****)pppplStack_520;
          ppppppplVar20 = local_518;
        }
        else {
          local_530 = (longlong ******)*param_4;
          ppppplVar18 = (longlong *****)param_4[1];
          if ((*(byte *)(param_4 + 2) & 1) != 0) {
            FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
          }
          ppppppplVar19 = (longlong *******)param_4[2];
          bVar15 = (byte)ppppppplVar19;
          ppppppplVar20 = ppppppplVar19;
        }
        param_4 = param_4 + 1;
        if (local_530 == (longlong ******)0x0) {
          if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
            cVar2 = FUN_144bdbf80();
            if (cVar2 != '\0') {
              puVar12 = (uint *)FUN_144bef800(*param_4,local_538);
              local_4a8 = (longlong ******)*param_4;
              local_500[0] = *puVar12 & 0x1f;
              uVar10 = FUN_144bdc810(local_198,&DAT_14c787938,2);
              local_528 = (longlong ******)0x2;
              pppplStack_520 = (longlong ****)FUN_144c00d20;
              local_518 = &local_4a8;
              local_510 = FUN_144c19e60;
              local_508 = local_500;
              lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a real ({})",&local_528,0);
              *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
              ppcVar16 = local_198;
              *(undefined8 *)(lVar11 + 0x40) = 0x2c6;
              goto LAB_144c181cb;
            }
            puVar8 = (undefined4 *)FUN_144bef800(*param_4,local_538);
            local_530 = (longlong ******)*param_4;
            local_4e8 = (longlong *******)(CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
            uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
            local_528 = (longlong ******)0x2;
            pppplStack_520 = (longlong ****)FUN_144c00d20;
            local_518 = (longlong *******)&local_530;
            local_510 = FUN_144c19e60;
            local_508 = (uint *)&local_4e8;
            lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a real ({})",&local_528,0);
            *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
            *(undefined8 *)(lVar11 + 0x40) = 0x2c6;
            FUN_144bdc690(local_488);
          }
          goto LAB_144c181d0;
        }
        FUN_144bdf360(&local_438);
        FUN_144bdf360(&local_2e8);
        local_4d8 = (longlong ******)0x0;
        pcStack_4d0 = (code *)0x0;
        piVar9 = (int *)FUN_144f95730(param_3,local_538,&DAT_1499929d8,&local_4d8);
        if (*piVar9 < 0) {
          *param_2 = 0x80040200;
          FUN_144bdf2f0(&local_2e8);
          goto LAB_144c18229;
        }
        piVar9 = (int *)FUN_144f959a0(local_538,&local_4d8,&local_2e8);
        if (*piVar9 < 0) {
          *param_2 = 0x80040200;
          FUN_144bdf2f0();
          FUN_144bdf2f0(&local_438);
          bVar22 = (bVar15 & 1) == 0;
        }
        else {
          cVar2 = FUN_144bdfee0(&local_2e8,&DAT_149981f00);
          if (cVar2 != '\0') {
            FUN_144be05f0(&local_2e8,1);
            FUN_144be0640(&local_2e8,1);
          }
          local_4d8 = (longlong ******)0x0;
          pcStack_4d0 = (code *)0x0;
          piVar9 = (int *)FUN_144f95730(param_3,local_538,&DAT_1499929dc,&local_4d8);
          if ((-1 < *piVar9) &&
             (piVar9 = (int *)FUN_144f959a0(local_538,&local_4d8,&local_438), -1 < *piVar9)) {
            cVar2 = FUN_144bdfee0(&local_438,&DAT_149981f00);
            if (cVar2 != '\0') {
              FUN_144be05f0(&local_438,1);
              FUN_144be0640(&local_438,1);
            }
            if (*local_2e8 == '#') {
              local_4d8 = local_438;
              pcStack_4d0 = (code *)((longlong)local_438 + (longlong)local_430 + -1);
              local_4f8 = (longlong ******)0x0;
              FUN_144f68ca0(local_538,&local_4d8,&local_4f8);
              ppppppplVar19 = (longlong *******)0x0;
              local_2e8 = local_2e8 + 1;
              cVar2 = *local_2e8;
              while (cVar2 != '\0') {
                if ((byte)(cVar2 - 0x30U) < 10) {
                  iVar3 = cVar2 + -0x30;
                }
                else if ((byte)(cVar2 + 0x9fU) < 6) {
                  iVar3 = cVar2 + -0x57;
                }
                else {
                  if (5 < (byte)(cVar2 + 0xbfU)) break;
                  iVar3 = cVar2 + -0x37;
                }
                if (iVar3 == -1) break;
                if ((byte)(cVar2 - 0x30U) < 10) {
                  iVar3 = cVar2 + -0x30;
                }
                else if ((byte)(cVar2 + 0x9fU) < 6) {
                  iVar3 = cVar2 + -0x57;
                }
                else if ((byte)(cVar2 + 0xbfU) < 6) {
                  iVar3 = cVar2 + -0x37;
                }
                else {
                  iVar3 = -1;
                }
                pcVar1 = local_2e8 + 1;
                local_2e8 = local_2e8 + 1;
                ppppppplVar19 = (longlong *******)((longlong)ppppppplVar19 * 0x10 + (longlong)iVar3)
                ;
                cVar2 = *pcVar1;
              }
              ppppppplVar23 = ppppppplVar19;
              if ((((((ulonglong)ppppppplVar19 & 0x7ff0000000000000) == 0x7ff0000000000000) ||
                   ((double)local_4f8 <= 0.0)) ||
                  (ppppppplVar23 = (longlong *******)local_4f8,
                  (double)ppppppplVar19 == (double)local_4f8)) ||
                 (piVar9 = (int *)FUN_144bef800(ppppplVar18,local_538),
                 ppppppplVar23 = ppppppplVar19, *piVar9 != 0x174605)) {
                (**(code **)(*(longlong *)((ulonglong)ppppppplVar20 & 0xfffffffffffffffe) + 0x28))
                          ((longlong *)((ulonglong)ppppppplVar20 & 0xfffffffffffffffe),local_538,
                           local_530,ppppplVar18,ppppppplVar23);
              }
              else {
                uVar4 = FUN_144bea7d0(ppppppplVar19);
                *(uint *)local_530 = uVar4;
              }
              FUN_144bdf2f0(&local_2e8);
              FUN_144bdf2f0(&local_438);
              if (((ulonglong)ppppppplVar20 & 1) == 0) goto LAB_144c193fc;
              plVar7 = (longlong *)((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
              goto LAB_144c193f7;
            }
          }
          *param_2 = 0x80040200;
          FUN_144bdf2f0(&local_2e8);
          FUN_144bdf2f0(&local_438);
          bVar22 = ((ulonglong)ppppppplVar20 & 1) == 0;
        }
      }
    }
    else {
      local_4f8 = (longlong ******)0x0;
      pppplStack_520 = (longlong ****)0x0;
      local_518 = (longlong *******)0x0;
      if ((param_4[1] == 0) ||
         (puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538), ((byte)*puVar8 & 0x1f) != 4))
      {
        bVar15 = 0;
        ppppplVar18 = (longlong *****)pppplStack_520;
        ppppppplVar20 = local_518;
      }
      else {
        local_4f8 = (longlong ******)*param_4;
        ppppplVar18 = (longlong *****)param_4[1];
        if ((*(byte *)(param_4 + 2) & 1) != 0) {
          FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
        }
        ppppppplVar19 = (longlong *******)param_4[2];
        bVar15 = (byte)ppppppplVar19;
        ppppppplVar20 = ppppppplVar19;
      }
      param_4 = param_4 + 1;
      if ((longlong *******)local_4f8 != (longlong *******)0x0) {
        FUN_144bdf360(&local_438);
        local_4d8 = (longlong ******)0x0;
        pcStack_4d0 = (code *)0x0;
        piVar9 = (int *)FUN_144f95730(param_3,local_538,"value",&local_4d8);
        if (*piVar9 < 0) {
LAB_144c18221:
          *param_2 = 0x80040200;
LAB_144c18229:
          FUN_144bdf2f0(&local_438);
LAB_144c18236:
          if ((bVar15 & 1) == 0) {
            return param_2;
          }
          FUN_144be6b30((ulonglong)ppppppplVar19 & 0xfffffffffffffffe);
          return param_2;
        }
        piVar9 = (int *)FUN_144f959a0(local_538,&local_4d8,&local_438);
        if (*piVar9 < 0) {
          *param_2 = 0x80040200;
          FUN_144bdf2f0();
          if ((bVar15 & 1) == 0) {
            return param_2;
          }
          FUN_144be6b30((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
          return param_2;
        }
        cVar2 = FUN_144bdfee0(&local_438,&DAT_149981f00);
        if (cVar2 != '\0') {
          FUN_144be05f0(&local_438,1);
          FUN_144be0640(&local_438,1);
        }
        cVar2 = *(char *)local_438;
        if (cVar2 == '-') {
          local_438 = (longlong ******)((longlong)local_438 + 1);
        }
        local_4d8 = (longlong ******)FUN_144bfbc00(local_438,0);
        pcStack_4d0 = (code *)CONCAT71(pcStack_4d0._1_7_,cVar2 == '-');
        plVar7 = (longlong *)((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
        (**(code **)(*plVar7 + 0x28))(plVar7,local_538,local_4f8,ppppplVar18,&local_4d8);
LAB_144c18ad1:
        FUN_144bdf2f0(&local_438);
        if (((ulonglong)ppppppplVar20 & 1) == 0) goto LAB_144c193fc;
        goto LAB_144c193f7;
      }
      if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
        cVar2 = FUN_144bdbf80();
        if (cVar2 == '\0') {
          puVar8 = (undefined4 *)FUN_144bef800(*param_4,local_538);
          local_4f8 = (longlong ******)*param_4;
          local_4e8 = (longlong *******)(CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
          uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
          local_528 = (longlong ******)0x2;
          pppplStack_520 = (longlong ****)FUN_144c00d20;
          local_518 = &local_4f8;
          local_510 = FUN_144c19e60;
          local_508 = (uint *)&local_4e8;
          lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not an integer ({})",&local_528,0);
          *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
          *(undefined8 *)(lVar11 + 0x40) = 0x2ab;
          FUN_144bdc690(local_488);
        }
        else {
          puVar12 = (uint *)FUN_144bef800(*param_4,local_538);
          local_530 = (longlong ******)*param_4;
          local_500[0] = *puVar12 & 0x1f;
          uVar10 = FUN_144bdc810(&local_2e8,&DAT_14c787938,2);
          local_528 = (longlong ******)0x2;
          pppplStack_520 = (longlong ****)FUN_144c00d20;
          local_518 = (longlong *******)&local_530;
          local_510 = FUN_144c19e60;
          local_508 = local_500;
          lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not an integer ({})",&local_528,0);
          *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
          ppcVar16 = &local_2e8;
          *(undefined8 *)(lVar11 + 0x40) = 0x2ab;
LAB_144c181cb:
          FUN_144bdc8a0(ppcVar16);
        }
      }
LAB_144c181d0:
      *param_2 = 0x80040200;
      bVar22 = ((ulonglong)ppppppplVar20 & 1) == 0;
    }
    if (!bVar22) {
      FUN_144be6b30((ulonglong)ppppppplVar20 & 0xfffffffffffffffe);
    }
  }
  else {
    local_518 = (longlong *******)0x0;
    local_528 = (longlong ******)0x0;
    pppplStack_520 = (longlong ****)0x0;
    if (param_4[1] != 0) {
      puVar8 = (undefined4 *)FUN_144bef800(param_4[1],&local_530);
      if (((byte)*puVar8 & 0x1f) == 7) {
        local_528 = (longlong ******)*param_4;
        pppplStack_520 = (longlong ****)param_4[1];
        if ((*(byte *)(param_4 + 2) & 1) != 0) {
          FUN_144be6b20(param_4[2] & 0xfffffffffffffffe);
        }
        if (((ulonglong)local_518 & 1) != 0) {
          FUN_144be6b30((ulonglong)local_518 & 0xfffffffffffffffe);
        }
        local_518 = (longlong *******)param_4[2];
      }
      if ((longlong *******)local_528 != (longlong *******)0x0) {
        piVar9 = (int *)FUN_144c17530(param_1,&local_4e8,param_3,"record");
        iVar3 = *piVar9;
        while (-1 < iVar3) {
          plVar7 = (longlong *)FUN_144f956e0(param_3,local_498);
          cVar2 = FUN_144bfbf10(*plVar7,plVar7[1] - *plVar7,"field");
          if (cVar2 == '\0') {
            *param_2 = 0x80040200;
LAB_144c17e38:
            bVar15 = (byte)local_518;
            goto LAB_144c17e40;
          }
          FUN_144bdf360(&local_438);
          local_4d8 = (longlong ******)0x0;
          pcStack_4d0 = (code *)0x0;
          piVar9 = (int *)FUN_144f95730(param_3,&local_530,&DAT_149971528,&local_4d8);
          if (*piVar9 < 0) {
            *param_2 = 0x80040200;
LAB_144c17e33:
            FUN_144bdf2f0(&local_438);
            goto LAB_144c17e38;
          }
          piVar9 = (int *)FUN_144f959a0(local_500,&local_4d8,&local_438);
          if (*piVar9 < 0) {
            *param_2 = 0x80040200;
            goto LAB_144c17e33;
          }
          cVar2 = FUN_144bdfee0(&local_438,&DAT_149981f00);
          if (cVar2 != '\0') {
            FUN_144be05f0(&local_438,1);
            FUN_144be0640(&local_438,1);
          }
          FUN_144befa90(pppplStack_520,&local_4f8,local_438,1);
          if (&DAT_00000001 < local_4f8) {
            FUN_144bebf80(&local_528,&local_4d8);
            piVar9 = (int *)FUN_144c17530(param_1,&local_4a8,param_3,"field");
            if ((-1 < *piVar9) &&
               (piVar9 = (int *)FUN_144c17bc0(param_1,local_538,param_3,&local_4d8), *piVar9 < 0)) {
              *param_2 = 0x80040200;
              if (((ulonglong)local_4c8 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_4c8 & 0xfffffffffffffffe);
              }
              goto LAB_144c17e33;
            }
            if (((ulonglong)local_4c8 & 1) != 0) {
              FUN_144be6b30((ulonglong)local_4c8 & 0xfffffffffffffffe);
            }
          }
          FUN_144bdf2f0(&local_438);
          piVar9 = (int *)FUN_144c17530(param_1,&local_4e8,param_3,"record");
          iVar3 = *piVar9;
        }
        if (((ulonglong)local_518 & 1) == 0) goto LAB_144c193fc;
        plVar7 = (longlong *)((ulonglong)local_518 & 0xfffffffffffffffe);
LAB_144c193f7:
        FUN_144be6b30(plVar7);
LAB_144c193fc:
        *param_2 = 0;
        return param_2;
      }
    }
    if ((1 < DAT_14c787988) || (cVar2 = FUN_144bdbf80(), cVar2 != '\0')) {
      cVar2 = FUN_144bdbf80();
      if (cVar2 == '\0') {
        puVar8 = (undefined4 *)FUN_144bef800(param_4[1],local_538);
        local_4f8 = (longlong ******)param_4[1];
        local_4e8 = (longlong *******)(CONCAT44(local_4e8._4_4_,*puVar8) & 0xffffffff0000001f);
        uVar10 = FUN_144bdc640(local_488,&DAT_14c787938,2);
        local_4d8 = (longlong ******)0x2;
        pcStack_4d0 = FUN_144c00d20;
        local_4c8 = (longlong ******)&local_4f8;
        local_4c0 = FUN_144c19e60;
        local_4b8 = (uint *)&local_4e8;
        lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a record ({})",&local_4d8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x287;
        FUN_144bdc690(local_488);
      }
      else {
        puVar12 = (uint *)FUN_144bef800(param_4[1],local_538);
        local_530 = (longlong ******)param_4[1];
        local_500[0] = *puVar12 & 0x1f;
        uVar10 = FUN_144bdc810(&local_438,&DAT_14c787938,2);
        local_4d8 = (longlong ******)0x2;
        pcStack_4d0 = FUN_144c00d20;
        local_4c8 = (longlong ******)&local_530;
        local_4c0 = FUN_144c19e60;
        local_4b8 = local_500;
        lVar11 = FUN_144bdc480(uVar10,"Type \'{}\' is not a record ({})",&local_4d8,0);
        *(char **)(lVar11 + 0x38) = "Format\\Xml\\hkXmlReadFormat.cpp";
        *(undefined8 *)(lVar11 + 0x40) = 0x287;
        FUN_144bdc8a0(&local_438);
      }
    }
    bVar15 = (byte)local_518;
    *param_2 = 0x80040200;
LAB_144c17e40:
    if ((bVar15 & 1) != 0) {
      FUN_144be6b30((ulonglong)local_518 & 0xfffffffffffffffe);
    }
  }
  return param_2;
}



// FUNCTION 144c19860 FUN_144c19860 body=375 status=ok
// SIG undefined FUN_144c19860(void)

undefined4 *
FUN_144c19860(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  
  if (*param_3 == 0) {
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    uVar8 = param_5[3];
    param_5[3] = 0;
    if ((uVar8 & 1) != 0) {
      FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
    }
    *param_2 = 0;
    return param_2;
  }
  lVar7 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x194) + *param_3);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  if (*(char *)(lVar1 + 0x10 + lVar7 * 0x18) == '\x01') {
    iVar10 = *(int *)(lVar1 + 0x14 + lVar7 * 0x18);
  }
  else {
    iVar10 = -1;
  }
  lVar2 = *(longlong *)(lVar1 + 8 + lVar7 * 0x18);
  uVar9 = 0;
  uVar3 = *(undefined8 *)(lVar1 + lVar7 * 0x18);
  uVar8 = uVar9;
  if (lVar2 != 0) {
    uVar8 = FUN_144befdb0(lVar2);
  }
  if ((uVar8 & 1) != 0) {
    FUN_144be6b20(uVar8 & 0xfffffffffffffffe);
  }
  uVar6 = 0;
  iVar5 = -iVar10;
  if (-1 < iVar10) {
    iVar5 = iVar10;
  }
  if (lVar2 != 0) {
    uVar6 = FUN_144beec90(lVar2);
    uVar9 = FUN_144befdb0(lVar2);
    if ((uVar9 & 1) != 0) {
      FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
    }
  }
  *param_5 = uVar3;
  param_5[1] = lVar2;
  *(int *)(param_5 + 2) = iVar5;
  *(undefined4 *)((longlong)param_5 + 0x14) = uVar6;
  uVar4 = param_5[3];
  param_5[3] = uVar9;
  if ((uVar4 & 1) != 0) {
    FUN_144be6b30(uVar4 & 0xfffffffffffffffe);
  }
  *param_2 = 0;
  if ((uVar8 & 1) != 0) {
    FUN_144be6b30(uVar8 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144c199e0 FUN_144c199e0 body=10 status=ok
// SIG undefined FUN_144c199e0(void)

undefined4 * FUN_144c199e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c199f0 FUN_144c199f0 body=87 status=ok
// SIG undefined FUN_144c199f0(void)

undefined8 FUN_144c199f0(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144c19a50 FUN_144c19a50 body=10 status=ok
// SIG undefined FUN_144c19a50(void)

undefined4 * FUN_144c19a50(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c19a60 FUN_144c19a60 body=219 status=ok
// SIG undefined FUN_144c19a60(void)

undefined4 *
FUN_144c19a60(longlong param_1,undefined4 *param_2,int *param_3,undefined8 param_4,
             undefined8 *param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (*param_3 == 0) {
    *param_2 = 0;
    *param_5 = 0;
    return param_2;
  }
  lVar4 = (longlong)(*(int *)(*(longlong *)(param_1 + 0x10) + 0x194) + *param_3);
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x78);
  uVar2 = *(undefined8 *)(lVar1 + lVar4 * 0x18);
  lVar3 = *(longlong *)(lVar1 + 8 + lVar4 * 0x18);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_144befdb0(lVar3,lVar1 + lVar4 * 0x18);
  }
  if ((uVar5 & 1) != 0) {
    FUN_144be6b20(uVar5 & 0xfffffffffffffffe);
    *param_5 = uVar2;
    *param_2 = 0;
    FUN_144be6b30(uVar5 & 0xfffffffffffffffe);
    return param_2;
  }
  *param_5 = uVar2;
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c19b40 FUN_144c19b40 body=87 status=ok
// SIG undefined FUN_144c19b40(void)

undefined8 FUN_144c19b40(undefined8 param_1,ulonglong param_2)

{
  FUN_144be6ae0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 144c19ba0 FUN_144c19ba0 body=123 status=ok
// SIG undefined FUN_144c19ba0(void)

undefined8 * FUN_144c19ba0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  DAT_14c6e4988 = 1;
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"XmlReadFormat");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144c14a40(lVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c19c20 FUN_144c19c20 body=266 status=ok
// SIG undefined FUN_144c19c20(void)

void FUN_144c19c20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c19d30 FUN_144c19d30 body=258 status=ok
// SIG undefined FUN_144c19d30(void)

void FUN_144c19d30(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c19e40 FUN_144c19e40 body=32 status=ok
// SIG undefined FUN_144c19e40(void)

undefined8 FUN_144c19e40(undefined8 param_1,undefined8 param_2)

{
  FUN_144f5a700(param_2,param_1);
  return param_1;
}



// FUNCTION 144c19e60 FUN_144c19e60 body=111 status=ok
// SIG undefined FUN_144c19e60(void)

undefined4 *
FUN_144c19e60(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_20 = &DAT_14c6def80;
  local_28 = param_2;
  local_18 = FUN_144befdb0();
  if ((local_18 & 1) != 0) {
    FUN_144be6b20(local_18 & 0xfffffffffffffffe);
  }
  FUN_144bec220(&local_28,param_4);
  *param_1 = 0;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c19ed0 FUN_144c19ed0 body=254 status=ok
// SIG undefined FUN_144c19ed0(void)

undefined8 * FUN_144c19ed0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined1 local_48 [64];
  
  FUN_144f87f30();
  local_res8 = 0x10;
  *param_1 = hkSerialize::TagfileWriteFormat::vftable;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"TypeCopier");
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144f96940(local_48);
    uVar2 = FUN_144f96b10(lVar1,uVar2);
  }
  local_res8 = 0x360;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,&DAT_149991fec);
  }
  if (lVar1 == 0) {
    param_1[3] = 0;
  }
  else {
    uVar2 = FUN_144c1b390(lVar1,uVar2,0,1,0);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 144c19fd0 FUN_144c19fd0 body=286 status=ok
// SIG undefined FUN_144c19fd0(void)

undefined8 * FUN_144c19fd0(undefined8 *param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined1 local_48 [64];
  
  FUN_144f87f30();
  *param_1 = hkSerialize::TagfileWriteFormat::vftable;
  FUN_144f96940(local_48);
  lVar2 = 0;
  if (param_2 != 0) {
    lVar1 = FUN_144f969a0(local_48,param_2);
    if (*(char *)(lVar1 + 0x30) != '\0') {
      local_res8 = 0x10;
      lVar1 = (*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar1,"TypeCopier");
      }
      lVar2 = 0;
      if (lVar1 != 0) {
        lVar2 = FUN_144f96b10(lVar1,local_48);
      }
    }
  }
  local_res8 = 0x360;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,&DAT_149991fec);
  }
  if (lVar1 == 0) {
    param_1[3] = 0;
  }
  else {
    uVar3 = FUN_144c1b390(lVar1,lVar2,1,lVar2 != 0,param_3);
    param_1[3] = uVar3;
  }
  return param_1;
}



// FUNCTION 144c1a0f0 FUN_144c1a0f0 body=22 status=ok
// SIG undefined FUN_144c1a0f0(void)

void FUN_144c1a0f0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x348) = param_2;
  *(undefined4 *)(lVar1 + 0x350) = 1;
  return;
}



// FUNCTION 144c1a110 FUN_144c1a110 body=9 status=ok
// SIG undefined FUN_144c1a110(void)

void FUN_144c1a110(longlong param_1)

{
  FUN_144c1b870(*(undefined8 *)(param_1 + 0x18));
  return;
}



// FUNCTION 144c1a120 FUN_144c1a120 body=122 status=ok
// SIG undefined FUN_144c1a120(void)

undefined8 FUN_144c1a120(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
  (**(code **)(*param_4 + 0x20))(param_4,uVar2);
  FUN_144c1d030(uVar1,param_2,param_3,uVar2,1,param_4);
  return param_2;
}



// FUNCTION 144c1a1a0 FUN_144c1a1a0 body=51 status=ok
// SIG undefined FUN_144c1a1a0(void)

undefined8
FUN_144c1a1a0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_144c1d030(*(undefined8 *)(param_1 + 0x18),param_2,param_4,param_3,0,param_5);
  return param_2;
}



// FUNCTION 144c1a1e0 FUN_144c1a1e0 body=27 status=ok
// SIG undefined FUN_144c1a1e0(void)

undefined8 FUN_144c1a1e0(longlong param_1,undefined8 param_2)

{
  FUN_144c1c3d0(*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 144c1a200 FUN_144c1a200 body=24 status=ok
// SIG undefined FUN_144c1a200(void)

undefined8 FUN_144c1a200(longlong param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x1d8) + -8 +
          (longlong)*(int *)(*(longlong *)(param_1 + 0x18) + 0x1e0) * 8);
}



// FUNCTION 144c1a220 FUN_144c1a220 body=270 status=ok
// SIG undefined FUN_144c1a220(void)

undefined4 * FUN_144c1a220(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8;
  undefined1 local_1a8 [80];
  undefined1 local_158 [336];
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (((*(int *)(lVar3 + 0x20) == 0) && (*(int *)(lVar3 + 0x38) == 0)) &&
     (*(int *)(lVar3 + 0xf8) < 2)) {
    *(undefined1 *)(lVar3 + 0x289) = 1;
    *param_2 = 0;
    return param_2;
  }
  if ((1 < DAT_14c787aa0) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar2 = FUN_144bdc640(local_1a8);
      local_res8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"You must enable multibundle before writing any data",&local_res8,
                            0);
      *(char **)(lVar3 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x658;
      FUN_144bdc690(local_1a8);
    }
    else {
      uVar2 = FUN_144bdc810(local_158,&DAT_14c787a50,2);
      local_res8 = 0;
      lVar3 = FUN_144bdc480(uVar2,"You must enable multibundle before writing any data",&local_res8,
                            0);
      *(char **)(lVar3 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar3 + 0x40) = 0x658;
      FUN_144bdc8a0(local_158);
    }
  }
  *param_2 = 0x80040200;
  return param_2;
}



// FUNCTION 144c1a330 FUN_144c1a330 body=119 status=ok
// SIG undefined FUN_144c1a330(void)

undefined8 * FUN_144c1a330(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  *param_1 = hkSerialize::TagfileWriteFormat::vftable;
  puVar1 = (undefined8 *)param_1[3];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_144f87f50(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 144c1a3b0 FUN_144c1a3b0 body=58 status=ok
// SIG undefined FUN_144c1a3b0(void)

void FUN_144c1a3b0(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x28) & 0xfffffffffffffffe);
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_144be6b30(*(ulonglong *)(param_1 + 0x10) & 0xfffffffffffffffe);
    return;
  }
  return;
}



// FUNCTION 144c1a3f0 FUN_144c1a3f0 body=104 status=ok
// SIG undefined FUN_144c1a3f0(void)

undefined8 * FUN_144c1a3f0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  uVar1 = param_2[5];
  param_1[5] = uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
  }
  return param_1;
}



// FUNCTION 144c1a460 FUN_144c1a460 body=43 status=ok
// SIG undefined FUN_144c1a460(void)

undefined8 * FUN_144c1a460(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = _anon_22235875::Fixups::vftable;
  if ((param_2 & 1) != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 144c1a490 FUN_144c1a490 body=490 status=ok
// SIG undefined FUN_144c1a490(void)

undefined4 *
FUN_144c1a490(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4,int param_5
             ,int param_6,uint param_7)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ulonglong local_res18;
  ulonglong local_res20;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_58 = *param_4;
  local_48 = param_4[2];
  local_50 = param_4[1];
  puVar6 = (undefined4 *)*param_3;
  if ((local_48 & 1) != 0) {
    FUN_144be6b20(local_48 & 0xfffffffffffffffe);
  }
  if (0 < (int)param_7) {
    uVar5 = (ulonglong)param_7;
    do {
      iVar3 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x18))
                        (*(longlong **)(param_1 + 0x288),&local_58);
      lVar1 = local_50;
      if ((*(char *)(param_1 + 0x2a8) != '\0') && (iVar3 != 0)) {
        FUN_144bf0690(&local_res18,local_50);
        while (1 < local_res18) {
          lVar1 = *(longlong *)(lVar1 + 8);
          FUN_144bf0690(&local_res18,lVar1);
        }
        lVar2 = param_3[1];
        FUN_144bf0690(&local_res20,lVar2);
        while (1 < local_res20) {
          lVar2 = *(longlong *)(lVar2 + 8);
          FUN_144bf0690(&local_res20,lVar2);
        }
        (**(code **)(**(longlong **)(param_1 + 0x2a0) + 8))
                  (*(longlong **)(param_1 + 0x2a0),puVar6,lVar2,lVar1);
      }
      *puVar6 = 0;
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))
                (*(longlong **)(param_1 + 0x2a0),puVar6,iVar3,local_50);
      puVar6 = (undefined4 *)((longlong)puVar6 + (longlong)param_5);
      local_58 = local_58 + param_6;
      uVar4 = local_48 & 0xfffffffffffffffe;
      if ((local_48 & 1) != 0) {
        FUN_144be6b30(local_48 & 0xfffffffffffffffe);
      }
      uVar5 = uVar5 - 1;
      local_48 = uVar4;
    } while (uVar5 != 0);
  }
  *param_2 = 0;
  if ((local_48 & 1) != 0) {
    FUN_144be6b30(local_48 & 0xfffffffffffffffe);
  }
  return param_2;
}



// FUNCTION 144c1a680 FUN_144c1a680 body=407 status=ok
// SIG undefined FUN_144c1a680(void)

void FUN_144c1a680(longlong param_1,undefined8 param_2,char param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong local_res8;
  
  puVar4 = param_5;
  uVar5 = 0;
  if (param_3 != '\0') {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x28))();
    uVar1 = puVar4[2];
    param_5 = (undefined8 *)puVar4[1];
    uVar2 = *puVar4;
    if ((uVar1 & 1) != 0) {
      FUN_144be6b20(uVar1 & 0xfffffffffffffffe);
    }
    iVar8 = *(int *)(param_1 + 0x298) + 1;
    if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) < iVar8) {
      FUN_144c22af0((longlong *)(param_1 + 0x290),&PTR_vftable_14c6e47a0,(longlong)iVar8);
    }
    puVar6 = (undefined8 *)
             ((longlong)*(int *)(param_1 + 0x298) * 0x20 + *(longlong *)(param_1 + 0x290));
    if (puVar6 == (undefined8 *)0x0) {
      *(int *)(param_1 + 0x298) = iVar8;
      if ((uVar1 & 1) != 0) {
        FUN_144be6b30(uVar1 & 0xfffffffffffffffe);
      }
    }
    else {
      puVar6[1] = param_5;
      *puVar6 = uVar2;
      puVar6[2] = uVar1;
      *(undefined4 *)(puVar6 + 3) = uVar5;
      *(int *)(param_1 + 0x298) = iVar8;
    }
    if (*(char *)(param_1 + 0x2a8) != '\0') {
      lVar7 = puVar4[1];
      FUN_144bf0690(&param_5,lVar7);
      if (&DAT_00000001 < param_5) {
        do {
          lVar7 = *(longlong *)(lVar7 + 8);
          FUN_144bf0690(&param_5,lVar7);
        } while (&DAT_00000001 < param_5);
      }
      lVar3 = param_4[1];
      FUN_144bf0690(&local_res8,lVar3);
      while (1 < local_res8) {
        lVar3 = *(longlong *)(lVar3 + 8);
        FUN_144bf0690(&local_res8,lVar3);
      }
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 8))
                (*(longlong **)(param_1 + 0x2a0),*param_4,lVar3,lVar7);
    }
  }
  *(undefined4 *)*param_4 = 0;
                    /* WARNING: Could not recover jumptable at 0x000144c1a813. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))
            (*(longlong **)(param_1 + 0x2a0),*param_4,uVar5,puVar4[1]);
  return;
}



// FUNCTION 144c1a820 FUN_144c1a820 body=1015 status=ok
// SIG undefined FUN_144c1a820(void)

undefined4 *
FUN_144c1a820(longlong param_1,undefined4 *param_2,longlong *param_3,ulonglong *param_4)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  ulonglong local_res8;
  undefined4 *local_res10;
  longlong local_res18;
  ulonglong local_res20;
  
  uVar6 = 0;
  local_res18 = 0;
  local_res10 = param_2;
  (**(code **)(*(longlong *)(param_4[2] & 0xfffffffffffffffe) + 0x30))
            ((longlong *)(param_4[2] & 0xfffffffffffffffe),&local_res8,*param_4,param_4[1],
             &local_res18);
  puVar7 = (uint *)FUN_144bef800(param_3[1],&local_res8);
  uVar1 = *puVar7;
  if (((*(char *)(param_1 + 0x2a8) != '\0') && ((uVar1 & 0x20) != 0)) &&
     (uVar12 = uVar1 >> 0x10, uVar1 >> 0x10 != 0)) {
    if (local_res18 == 0) {
      uVar10 = 1;
    }
    else {
      iVar5 = FUN_144bfbbb0(local_res18);
      uVar10 = iVar5 + 1;
    }
    if (uVar10 <= uVar12) {
      if (local_res18 == 0) {
        *(undefined1 *)*param_3 = 0;
      }
      else {
        FUN_144bfbed0((undefined1 *)*param_3,local_res18,(longlong)(int)uVar10);
      }
      lVar11 = *param_3;
      uVar10 = uVar12 - uVar10;
      if (uVar10 < 0xff) {
        *param_2 = 0;
        *(char *)((ulonglong)(uVar12 - 1) + lVar11) = (char)uVar10;
        return param_2;
      }
      *param_2 = 0;
      *(char *)((ulonglong)(uVar12 - 3) + lVar11) = (char)uVar10;
      *(char *)((ulonglong)(uVar12 - 2) + *param_3) = (char)(uVar10 >> 8);
      *(undefined1 *)((ulonglong)(uVar12 - 1) + *param_3) = 0xff;
      return param_2;
    }
  }
  if (local_res18 != 0) {
    if ((uVar1 >> 7 & 1) == 0) {
      uVar6 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x28))();
      uVar9 = param_4[2];
      local_res8 = param_4[1];
      uVar3 = *param_4;
      if ((uVar9 & 1) != 0) {
        FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
      }
      iVar5 = *(int *)(param_1 + 0x298) + 1;
      if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) < iVar5) {
        FUN_144c22af0((longlong *)(param_1 + 0x290),&PTR_vftable_14c6e47a0,(longlong)iVar5);
      }
      puVar8 = (ulonglong *)
               ((longlong)*(int *)(param_1 + 0x298) * 0x20 + *(longlong *)(param_1 + 0x290));
      if (puVar8 != (ulonglong *)0x0) {
        puVar8[1] = local_res8;
        *puVar8 = uVar3;
        puVar8[2] = uVar9;
        uVar9 = 0;
        *(undefined4 *)(puVar8 + 3) = uVar6;
      }
      *(int *)(param_1 + 0x298) = iVar5;
      if ((uVar9 & 1) != 0) {
        FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
      }
    }
    else {
      plVar2 = *(longlong **)(param_1 + 0x2b0);
      FUN_144c22d60(plVar2,&local_res8,&local_res18);
      iVar5 = (int)local_res8;
      if (iVar5 == (int)plVar2[1]) {
        iVar13 = (int)plVar2[1] + 1;
        if ((int)(*(uint *)((longlong)plVar2 + 0xc) & 0x7fffffff) < iVar13) {
          FUN_144c239a0(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar13);
        }
        lVar11 = (longlong)(int)plVar2[1] * 0x10 + *plVar2;
        if (lVar11 != 0) {
          FUN_144be36a0(lVar11,local_res18,0xffffffff);
          *(undefined4 *)(lVar11 + 8) = 0;
        }
        *(int *)(plVar2 + 1) = iVar13;
      }
      lVar11 = (longlong)iVar5 * 0x10 + *plVar2;
      if (*(int *)(lVar11 + 8) == 0) {
        uVar6 = (**(code **)(**(longlong **)(param_1 + 0x288) + 0x28))();
        *(undefined4 *)(lVar11 + 8) = uVar6;
        local_res8 = *param_4;
        uVar9 = param_4[2];
        local_res20 = param_4[1];
        if ((uVar9 & 1) != 0) {
          FUN_144be6b20(uVar9 & 0xfffffffffffffffe);
        }
        uVar6 = *(undefined4 *)(lVar11 + 8);
        iVar5 = *(int *)(param_1 + 0x298) + 1;
        if ((int)(*(uint *)(param_1 + 0x29c) & 0x7fffffff) < iVar5) {
          FUN_144c22af0((longlong *)(param_1 + 0x290),&PTR_vftable_14c6e47a0,(longlong)iVar5);
        }
        puVar8 = (ulonglong *)
                 ((longlong)*(int *)(param_1 + 0x298) * 0x20 + *(longlong *)(param_1 + 0x290));
        if (puVar8 != (ulonglong *)0x0) {
          *puVar8 = local_res8;
          puVar8[1] = local_res20;
          puVar8[2] = uVar9;
          uVar9 = 0;
          *(undefined4 *)(puVar8 + 3) = uVar6;
        }
        *(int *)(param_1 + 0x298) = iVar5;
        if ((uVar9 & 1) != 0) {
          FUN_144be6b30(uVar9 & 0xfffffffffffffffe);
        }
      }
      uVar6 = *(undefined4 *)(lVar11 + 8);
    }
    param_2 = local_res10;
    if (*(char *)(param_1 + 0x2a8) != '\0') {
      lVar11 = param_3[1];
      lVar4 = *param_3;
      FUN_144bf0690(&local_res8,lVar11);
      while (1 < local_res8) {
        lVar11 = *(longlong *)(lVar11 + 8);
        FUN_144bf0690(&local_res8,lVar11);
      }
      uVar9 = param_4[1];
      FUN_144bf0690(&local_res20,uVar9);
      while (1 < local_res20) {
        uVar9 = *(ulonglong *)(uVar9 + 8);
        FUN_144bf0690(&local_res20,uVar9);
      }
      (**(code **)(**(longlong **)(param_1 + 0x2a0) + 8))
                (*(longlong **)(param_1 + 0x2a0),lVar4,lVar11,uVar9);
      param_2 = local_res10;
    }
  }
  *(undefined4 *)*param_3 = uVar6;
  (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))
            (*(longlong **)(param_1 + 0x2a0),*param_3,uVar6,param_4[1]);
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c1ac20 FUN_144c1ac20 body=172 status=ok
// SIG undefined FUN_144c1ac20(void)

void FUN_144c1ac20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0x10 + lVar1;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -0x10;
    FUN_144b49dd0(lVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 4);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1acd0 FUN_144c1acd0 body=100 status=ok
// SIG undefined FUN_144c1acd0(void)

void FUN_144c1acd0(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c1ad40 FUN_144c1ad40 body=470 status=ok
// SIG undefined FUN_144c1ad40(void)

void FUN_144c1ad40(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int *piVar8;
  longlong local_res10;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  local_res10 = (longlong)(int)param_1[1];
  iVar2 = FUN_144f93210(&local_res10,local_78);
  uVar6 = *param_2;
  if (param_2[1] < uVar6 + (longlong)iVar2) {
    FUN_144beb1c0(param_2,local_78);
  }
  else {
    FUN_144b3d470();
    *param_2 = uVar6 + (longlong)iVar2;
  }
  uVar6 = (ulonglong)(int)param_1[2];
  iVar2 = (int)param_1[1];
  if ((int)param_1[2] < iVar2) {
    lVar7 = uVar6 * 0x18;
    do {
      piVar8 = (int *)(*param_1 + lVar7);
      local_res10 = (longlong)*piVar8;
      iVar2 = FUN_144f93210(&local_res10,local_78);
      uVar1 = *param_2;
      if (param_2[1] < uVar1 + (longlong)iVar2) {
        FUN_144beb1c0(param_2,local_78);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar1 + (longlong)iVar2;
      }
      local_res10 = (longlong)piVar8[4];
      iVar2 = FUN_144f93210(&local_res10,local_68);
      uVar1 = *param_2;
      if (param_2[1] < uVar1 + (longlong)iVar2) {
        FUN_144beb1c0(param_2,local_68);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar1 + (longlong)iVar2;
      }
      iVar2 = 0;
      if (0 < piVar8[4]) {
        lVar4 = 0;
        do {
          local_res10 = *(longlong *)(lVar4 + *(longlong *)(piVar8 + 2));
          iVar3 = FUN_144f93210(&local_res10,local_58);
          uVar1 = *param_2;
          if (param_2[1] < uVar1 + (longlong)iVar3) {
            FUN_144beb1c0(param_2,local_58);
          }
          else {
            FUN_144b3d470();
            *param_2 = uVar1 + (longlong)iVar3;
          }
          local_res10 = *(longlong *)(lVar4 + 8 + *(longlong *)(piVar8 + 2));
          iVar3 = FUN_144f93210(&local_res10,local_48);
          uVar1 = *param_2;
          if (param_2[1] < uVar1 + (longlong)iVar3) {
            FUN_144beb1c0(param_2,local_48);
          }
          else {
            FUN_144b3d470();
            *param_2 = uVar1 + (longlong)iVar3;
          }
          iVar2 = iVar2 + 1;
          lVar4 = lVar4 + 0x10;
        } while (iVar2 < piVar8[4]);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar7 = lVar7 + 0x18;
      iVar2 = (int)param_1[1];
    } while ((int)uVar5 < iVar2);
  }
  *(int *)(param_1 + 2) = iVar2;
  return;
}



// FUNCTION 144c1af20 FUN_144c1af20 body=202 status=ok
// SIG undefined FUN_144c1af20(void)

void FUN_144c1af20(longlong *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = (undefined4 *)*param_1;
  if (puVar2 + (longlong)(int)param_1[1] * 6 != puVar2) {
    puVar3 = puVar2 + (longlong)(int)param_1[1] * 6 + 5;
    do {
      puVar3[-7] = 0;
      if ((-1 < (int)puVar3[-6]) && (*(longlong *)(puVar3 + -9) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar3 + -9),
                   (ulonglong)(puVar3[-6] & 0x7fffffff) << 4);
      }
      puVar1 = puVar3 + -0xb;
      *(undefined8 *)(puVar3 + -9) = 0;
      puVar3[-6] = 0x80000000;
      puVar3 = puVar3 + -6;
    } while (puVar1 != puVar2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0x18);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1aff0 FUN_144c1aff0 body=292 status=ok
// SIG undefined FUN_144c1aff0(void)

void FUN_144c1aff0(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined1 local_28 [16];
  
  local_res8 = (longlong)(int)param_1[1];
  iVar3 = FUN_144f93210(&local_res8,local_28);
  uVar5 = *param_2;
  if (param_2[1] < uVar5 + (longlong)iVar3) {
    FUN_144beb1c0(param_2,local_28);
  }
  else {
    FUN_144b3d470();
    *param_2 = uVar5 + (longlong)iVar3;
  }
  uVar5 = (ulonglong)(int)param_1[2];
  iVar3 = (int)param_1[1];
  if ((int)param_1[2] < iVar3) {
    lVar6 = uVar5 * 8;
    do {
      lVar1 = *param_1;
      local_res8 = (longlong)*(int *)(lVar1 + lVar6);
      iVar3 = FUN_144f93210(&local_res8,local_28);
      uVar2 = *param_2;
      if (param_2[1] < uVar2 + (longlong)iVar3) {
        FUN_144beb1c0(param_2,local_28);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar2 + (longlong)iVar3;
      }
      uVar2 = *param_2;
      local_res8 = CONCAT44(local_res8._4_4_,*(undefined4 *)(lVar1 + 4 + lVar6));
      if (param_2[1] < uVar2 + 4) {
        FUN_144beb1c0(param_2,&local_res8,4);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar2 + 4;
      }
      iVar3 = (int)param_1[1];
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < iVar3);
  }
  *(int *)(param_1 + 2) = iVar3;
  return;
}



// FUNCTION 144c1b120 FUN_144c1b120 body=104 status=ok
// SIG undefined FUN_144c1b120(void)

void FUN_144c1b120(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  return;
}



// FUNCTION 144c1b190 FUN_144c1b190 body=125 status=ok
// SIG undefined FUN_144c1b190(void)

void FUN_144c1b190(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1b210 FUN_144c1b210 body=374 status=ok
// SIG undefined FUN_144c1b210(void)

void FUN_144c1b210(longlong *param_1,ulonglong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong local_res8;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  local_res8 = (longlong)(int)param_1[1];
  iVar3 = FUN_144f93210(&local_res8,local_48);
  uVar6 = *param_2;
  if (param_2[1] < uVar6 + (longlong)iVar3) {
    FUN_144beb1c0(param_2,local_48);
  }
  else {
    FUN_144b3d470();
    *param_2 = uVar6 + (longlong)iVar3;
  }
  uVar6 = (ulonglong)(int)param_1[4];
  iVar3 = (int)param_1[1];
  if ((int)param_1[4] < iVar3) {
    lVar4 = uVar6 * 0xc;
    do {
      lVar1 = *param_1;
      local_res8 = (longlong)*(int *)(lVar1 + lVar4);
      iVar3 = FUN_144f93210(&local_res8,local_48);
      uVar2 = *param_2;
      if (param_2[1] < uVar2 + (longlong)iVar3) {
        FUN_144beb1c0(param_2,local_48);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar2 + (longlong)iVar3;
      }
      local_res8 = (longlong)*(int *)(lVar1 + 4 + lVar4);
      iVar3 = FUN_144f93210(&local_res8,local_38);
      uVar2 = *param_2;
      if (param_2[1] < uVar2 + (longlong)iVar3) {
        FUN_144beb1c0(param_2,local_38);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar2 + (longlong)iVar3;
      }
      local_res8 = (longlong)*(int *)(lVar1 + 8 + lVar4);
      iVar3 = FUN_144f93210(&local_res8,local_28);
      uVar2 = *param_2;
      if (param_2[1] < uVar2 + (longlong)iVar3) {
        FUN_144beb1c0(param_2,local_28);
      }
      else {
        FUN_144b3d470();
        *param_2 = uVar2 + (longlong)iVar3;
      }
      iVar3 = (int)param_1[1];
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
      lVar4 = lVar4 + 0xc;
    } while ((int)uVar5 < iVar3);
  }
  *(int *)(param_1 + 4) = iVar3;
  return;
}



// FUNCTION 144c1b390 FUN_144c1b390 body=676 status=ok
// SIG undefined FUN_144c1b390(void)

undefined8 *
FUN_144c1b390(undefined8 *param_1,longlong param_2,char param_3,char param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_res8;
  undefined8 local_38;
  undefined8 uStack_30;
  
  *(undefined4 *)((longlong)param_1 + 0x14) = 0x80000000;
  lVar5 = 0;
  *param_1 = hkSerialize::TagfileWriteFormat::Impl::vftable;
  param_1[1] = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_144c1e620(param_1 + 3);
  FUN_144c1f240(param_1 + 0x2c);
  param_1[0x37] = 0;
  local_38 = 0;
  uStack_30 = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  FUN_144f84a10(param_1 + 0x3e,&local_38);
  param_1[0x3f] = param_1 + 3;
  *(undefined4 *)(param_1 + 0x40) = param_5;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = param_2;
  if (param_2 == 0) {
    uVar1 = 8;
  }
  else {
    uVar1 = FUN_144f96d70(param_2);
  }
  *(undefined4 *)(param_1 + 0x43) = uVar1;
  if (param_3 != '\0') {
    if (param_2 == 0) {
      iVar2 = 0x10;
    }
    else {
      iVar2 = FUN_144f96d80(param_2);
      iVar2 = iVar2 * 4;
    }
  }
  *(int *)((longlong)param_1 + 0x21c) = iVar2;
  FUN_144f99f90(param_1 + 0x44);
  *(char *)(param_1 + 0x51) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x289) = 0;
  lVar4 = lVar5;
  if (param_4 != '\0') {
    lVar4 = param_2;
  }
  param_1[0x52] = lVar4;
  FUN_144f89a90(param_1 + 0x53,0xffffffffffffffff);
  FUN_144f8a1d0(param_1 + 0x58);
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0x80000000;
  uVar3 = FUN_144b3d480();
  param_1[0x5e] = uVar3;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x60] = hkMemory::BufferedAllocatorNoCleanup::vftable;
  param_1[0x61] = &PTR_vftable_14c6e47a0;
  param_1[0x62] = 0x1fc0;
  *(undefined4 *)(param_1 + 99) = 0xffffffff;
  param_1[100] = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  *(undefined4 *)((longlong)param_1 + 0x334) = 0x80000000;
  param_1[0x67] = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0x80000000;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x6b) = param_5;
  FUN_144f9d9d0(param_1 + 0x44);
  local_res8 = 8;
  lVar4 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar4,"IntAndFloatConversionPass");
  }
  if (lVar4 != 0) {
    lVar5 = FUN_144f9e700(lVar4);
  }
  FUN_144f9a380(param_1 + 0x44,lVar5);
  *(undefined2 *)(param_1 + 0x44) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x225) = 0;
  return param_1;
}



// FUNCTION 144c1b640 FUN_144c1b640 body=555 status=ok
// SIG undefined FUN_144c1b640(void)

void FUN_144c1b640(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_res8;
  ulonglong local_178;
  ulonglong local_170;
  undefined1 *local_138;
  undefined4 local_130;
  uint local_12c;
  undefined1 local_128 [256];
  ulonglong *local_28;
  
  *param_1 = hkSerialize::TagfileWriteFormat::Impl::vftable;
  if (*(int *)(param_1 + 0x3d) == 1) {
    FUN_144beb000(&local_178,param_1 + 0x37);
    local_138 = local_128;
    local_130 = 0;
    local_28 = &local_178;
    local_12c = 0x80000010;
    FUN_144f994f0(&local_138,0,0x54434d30);
    FUN_144f994f0(&local_138,1,0x54434944);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x3c)) {
      lVar4 = 0;
      do {
        uVar1 = local_178 + 8;
        local_res8 = *(undefined8 *)(lVar4 + param_1[0x3b]);
        if (local_170 < uVar1) {
          FUN_144beb1c0(&local_178,&local_res8,8);
        }
        else {
          FUN_144b3d470();
          local_178 = uVar1;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < *(int *)(param_1 + 0x3c));
    }
    FUN_144f995f0(&local_138);
    FUN_144c1de20(param_1,&local_138,&local_178);
    FUN_144f995f0(&local_138);
    local_130 = 0;
    if ((-1 < (int)local_12c) && (local_138 != (undefined1 *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_138,(ulonglong)(local_12c & 0x7fffffff) << 4);
    }
    local_138 = (undefined1 *)0x0;
    local_12c = 0x80000000;
    FUN_144beb0a0(&local_178);
  }
  param_1[0x60] = hkMemory::BufferedAllocatorNoCleanup::vftable;
  FUN_144f89650();
  FUN_144c205f0(param_1 + 0x5c);
  thunk_FUN_144f8a3c0(param_1 + 0x58);
  thunk_FUN_144f8a0b0(param_1 + 0x53);
  puVar2 = (undefined8 *)param_1[0x52];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  FUN_144f9a010(param_1 + 0x44);
  FUN_144f84ab0(param_1 + 0x3e);
  FUN_144c1f400(param_1 + 0x37);
  FUN_144c1f390(param_1 + 1);
  *param_1 = _anon_22235875::Fixups::vftable;
  return;
}



// FUNCTION 144c1b870 FUN_144c1b870 body=2910 status=ok
// SIG undefined FUN_144c1b870(void)

void FUN_144c1b870(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  int *piVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  ulonglong *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  int *piVar16;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  longlong *plVar20;
  uint uVar21;
  longlong lVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  longlong *plVar26;
  undefined8 local_res8;
  int *local_res10;
  ulonglong *local_res18;
  undefined4 *local_res20;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  uint uStack_374;
  longlong *local_370;
  undefined1 *local_358;
  undefined4 local_350;
  uint local_34c;
  undefined1 local_348 [256];
  undefined8 local_248;
  undefined8 local_238;
  int local_230;
  undefined1 local_198 [344];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  local_248 = *(undefined8 *)(param_1 + 0x348);
  local_358 = local_348;
  local_350 = 0;
  local_34c = 0x80000010;
  FUN_144f994f0(&local_358,0,0x54414730);
  FUN_144bdf360(&local_238);
  FUN_144bdff50(&local_238,&DAT_149982374,0x134b038);
  FUN_144f99330(&local_358,0x53444b56,local_238,local_230 + -1);
  FUN_144bdf2f0(&local_238);
  uVar21 = *(uint *)(param_1 + 0x168);
  lVar22 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar22 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar10 = *(longlong *)(lVar22 + 0xf0);
  if (lVar10 == 0) {
    if (*(char *)(lVar22 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar10 = FUN_144b3f4a0();
    *(longlong *)(lVar22 + 0xf0) = lVar10;
  }
  lVar22 = *(longlong *)(*(longlong *)(lVar10 + 0x3d0) + 0x10);
  if (*(longlong *)(lVar22 + 8) != 0) {
    lVar22 = 0;
  }
  puVar11 = (ulonglong *)((longlong)(int)uVar21 * 4);
  local_res18 = puVar11;
  if (lVar22 == 0) {
    puVar13 = (undefined4 *)(*DAT_14c787670)(1,&local_res18,0x40);
  }
  else {
    local_res10 = (int *)((longlong)puVar11 + 0x3fU & 0xffffffffffffffc0);
    if (local_res10 <= *(int **)(lVar22 + 0x28)) {
      puVar13 = *(undefined4 **)(lVar22 + 0x38);
      local_res20 = puVar13;
      if ((ulonglong)((longlong)local_res10 + (longlong)puVar13) <= *(ulonglong *)(lVar22 + 0x40)) {
        *(longlong *)(lVar22 + 0x38) = (longlong)local_res10 + (longlong)puVar13;
        goto LAB_144c1b9f8;
      }
    }
    puVar13 = (undefined4 *)FUN_144b454a0(lVar22,&local_res10);
  }
LAB_144c1b9f8:
  uStack_374 = uVar21 | 0x80000000;
  if (puVar13 != (undefined4 *)0x0) {
    *puVar13 = 0;
  }
  iVar25 = 1;
  iVar24 = 1;
  if (1 < *(int *)(param_1 + 0x168)) {
    lVar10 = 0xc;
    do {
      if (((*(uint *)(*(longlong *)(param_1 + 0x160) + lVar10) & 0xf0000000) == 0) &&
         (*(int *)(*(longlong *)(param_1 + 0x160) + 8 + lVar10) == 0)) {
        *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + -1;
        puVar17 = (undefined8 *)(*(longlong *)(param_1 + 0x160) + (longlong)iVar24 * 0xc);
        uVar21 = *(int *)(param_1 + 0x168) - iVar24;
        uVar23 = (ulonglong)uVar21;
        if (((uVar21 != 0) && (puVar17 != (undefined8 *)((longlong)puVar17 + 0xc))) &&
           (0 < (int)uVar21)) {
          do {
            if (puVar17 != (undefined8 *)0x0) {
              *puVar17 = *(undefined8 *)((longlong)puVar17 + 0xc);
              *(undefined4 *)(puVar17 + 1) = *(undefined4 *)((longlong)puVar17 + 0x14);
            }
            puVar17 = (undefined8 *)((longlong)puVar17 + 0xc);
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
        iVar24 = iVar24 + -1;
        lVar10 = lVar10 + -0xc;
        if (puVar13 + iVar25 != (undefined4 *)0x0) {
          puVar13[iVar25] = 0;
        }
      }
      else if (puVar13 + iVar25 != (int *)0x0) {
        puVar13[iVar25] = iVar24;
      }
      iVar25 = iVar25 + 1;
      iVar24 = iVar24 + 1;
      lVar10 = lVar10 + 0xc;
    } while (iVar24 < *(int *)(param_1 + 0x168));
  }
  plVar3 = *(longlong **)(param_1 + 0x180);
  iVar24 = *(int *)(param_1 + 0x188);
  local_res20 = puVar13;
  if (plVar3 != plVar3 + (longlong)iVar24 * 2) {
    plVar26 = plVar3 + 1;
    do {
      iVar9 = *(int *)((longlong)plVar26 + -4);
      if (iVar9 < iVar25) {
        iVar9 = puVar13[iVar9];
      }
      else {
        iVar9 = (*(int *)(param_1 + 0x168) - iVar25) + iVar9;
      }
      if (iVar9 != 0) {
        plVar20 = (longlong *)((ulonglong)*(uint *)(plVar26 + -1) + *(longlong *)(param_1 + 8));
        puVar12 = (uint *)FUN_144b45d50(*plVar26,&local_res10);
        if (((*puVar12 >> 0xd & 1) == 0) || (*(char *)(param_1 + 0x288) == '\0')) {
          *(int *)plVar20 = iVar9;
          puVar13 = local_res20;
        }
        else {
          lVar4 = *plVar26;
          lVar10 = *(longlong *)(param_1 + 0x160) + (longlong)iVar9 * 0xc;
          lVar18 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x160) + 4 + (longlong)iVar9 * 0xc)
                   + *(longlong *)(param_1 + 8);
          puVar13 = (undefined4 *)FUN_144bef800(lVar4,&local_res18);
          lVar14 = 0;
          if (((byte)*puVar13 & 0x1f) == 6) {
            lVar14 = lVar4;
          }
          if (lVar14 == 0) {
            iVar9 = FUN_144beec90(*plVar26);
            if (iVar9 == 8) {
              *(int *)plVar20 = (int)lVar18 - (int)plVar20;
              *(int *)((longlong)plVar20 + 4) = *(int *)(lVar10 + 8);
              puVar13 = local_res20;
            }
            else {
              iVar9 = FUN_144beec90(*plVar26);
              if ((iVar9 == 0xc) || (iVar9 = FUN_144beec90(*plVar26), iVar9 == 0x10)) {
                *plVar20 = lVar18 - (longlong)plVar20;
                *(int *)(plVar20 + 1) = *(int *)(lVar10 + 8);
                puVar13 = local_res20;
              }
              else if ((1 < DAT_14c787aa0) ||
                      (cVar8 = FUN_144bdbf80(), puVar13 = local_res20, cVar8 != '\0')) {
                cVar8 = FUN_144bdbf80();
                if (cVar8 == '\0') {
                  uVar21 = (uint)local_res8 | 1;
                  local_res8 = local_res8 | 1;
                  uVar15 = FUN_144bdc640(&local_238);
                }
                else {
                  uVar21 = (uint)local_res8 | 2;
                  local_res8 = local_res8 | 2;
                  uVar15 = FUN_144bdc810(local_198,&DAT_14c787a50,2);
                }
                local_380 = 1;
                uStack_37c = 0;
                uStack_378 = 0x44bf0db0;
                uStack_374 = 1;
                local_370 = plVar26;
                lVar10 = FUN_144bdc480(uVar15,"Unknown relative offset fixup {}",&local_380,0);
                *(undefined8 *)(lVar10 + 0x40) = 0x55c;
                *(char **)(lVar10 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
                uVar19 = uVar21;
                if ((uVar21 & 2) != 0) {
                  uVar19 = uVar21 & 0xfffffffd;
                  local_res8 = CONCAT44(local_res8._4_4_,uVar21) & 0xfffffffffffffffd;
                  FUN_144bdc8a0(local_198);
                }
                puVar13 = local_res20;
                if ((uVar19 & 1) != 0) {
                  local_res8 = CONCAT44(local_res8._4_4_,uVar19) & 0xfffffffffffffffe;
                  FUN_144bdc690(&local_238);
                  puVar13 = local_res20;
                }
              }
            }
          }
          else {
            *plVar20 = lVar18 - (longlong)plVar20;
            puVar13 = local_res20;
          }
        }
      }
      plVar20 = plVar26 + 1;
      plVar26 = plVar26 + 2;
    } while (plVar20 != plVar3 + (longlong)iVar24 * 2);
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_144f994f0(&local_358,1,0x44415441);
    puVar5 = *(ulonglong **)(param_1 + 0x348);
    uVar23 = (longlong)*(int *)(param_1 + 0x10) + *puVar5;
    if (puVar5[1] < uVar23) {
      FUN_144beb1c0(puVar5);
    }
    else {
      FUN_144b3d470();
      *puVar5 = uVar23;
    }
    puVar5 = *(ulonglong **)(param_1 + 0x348);
    iVar24 = *(int *)(param_1 + 0x218);
    if (*(int *)(param_1 + 0x218) < *(int *)(param_1 + 0x350)) {
      iVar24 = *(int *)(param_1 + 0x350);
    }
    iVar25 = (int)(((puVar5[4] - puVar5[2]) + *puVar5) % (ulonglong)(longlong)iVar24);
    if (iVar25 != 0) {
      for (iVar25 = iVar24 - iVar25; iVar25 != 0; iVar25 = iVar25 - iVar9) {
        uVar23 = *puVar5;
        iVar9 = 0x20;
        if (iVar25 < 0x20) {
          iVar9 = iVar25;
        }
        if (puVar5[1] < (longlong)iVar9 + uVar23) {
          FUN_144beb1c0(puVar5,&DAT_149992b50);
        }
        else {
          FUN_144b3d470();
          *puVar5 = (longlong)iVar9 + uVar23;
        }
      }
    }
    if (iVar24 < *(int *)(param_1 + 0x350)) {
      iVar24 = *(int *)(param_1 + 0x350);
    }
    *(int *)(param_1 + 0x350) = iVar24;
    FUN_144f995f0(&local_358);
  }
  if ((*(int *)(param_1 + 0x358) == 0) || (*(int *)(param_1 + 0x358) == 1)) {
    if (*(int *)(param_1 + 0x1e8) == 0) {
      FUN_144c1de20(param_1,&local_358,*(undefined8 *)(param_1 + 0x348));
    }
    else {
      FUN_144f994f0(&local_358,1,0x54435246);
      if (((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x38)) &&
          (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x50))) &&
         (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xf8))) {
        uVar23 = *(ulonglong *)(param_1 + 0x118);
      }
      else {
        uVar23 = FUN_144c1eb00();
      }
      plVar3 = (longlong *)(param_1 + 0x1d8);
      if ((*(int *)(param_1 + 0x1e0) == 0) ||
         (*(ulonglong *)(*plVar3 + -8 + (longlong)*(int *)(param_1 + 0x1e0) * 8) != uVar23)) {
        iVar24 = *(int *)(param_1 + 0x1e0) + 1;
        if ((int)(*(uint *)(param_1 + 0x1e4) & 0x7fffffff) < iVar24) {
          FUN_144c14100(plVar3,&PTR_vftable_14c6e47a0,(longlong)iVar24);
        }
        puVar5 = (ulonglong *)(*plVar3 + (longlong)*(int *)(param_1 + 0x1e0) * 8);
        if (puVar5 != (ulonglong *)0x0) {
          *puVar5 = uVar23;
        }
        *(int *)(param_1 + 0x1e0) = iVar24;
      }
      puVar5 = *(ulonglong **)(param_1 + 0x348);
      uVar6 = *puVar5;
      local_res8 = uVar23;
      if (puVar5[1] < uVar6 + 8) {
        FUN_144beb1c0(puVar5,&local_res8,8);
      }
      else {
        FUN_144b3d470();
        *puVar5 = uVar6 + 8;
      }
      if (*(char *)(param_1 + 0x288) != '\0') {
        FUN_144beb140(*(undefined8 *)(param_1 + 0x348),(longlong)(*(int *)(param_1 + 0x218) * 2));
      }
      FUN_144f995f0(&local_358);
    }
    if (*(int *)(param_1 + 0x168) != 0) {
      FUN_144f994f0(&local_358,0,0x494e4458);
      FUN_144f994f0(&local_358,1,0x4954454d);
      puVar13 = local_res20;
      iVar24 = 0;
      if (0 < *(int *)(param_1 + 0x168)) {
        lVar10 = 0;
        do {
          puVar5 = *(ulonglong **)(param_1 + 0x348);
          puVar12 = (uint *)(*(longlong *)(param_1 + 0x160) + lVar10);
          uVar23 = *puVar5;
          local_res8 = CONCAT44(local_res8._4_4_,*puVar12);
          if (puVar5[1] < uVar23 + 4) {
            FUN_144beb1c0(puVar5,&local_res8,4);
          }
          else {
            FUN_144b3d470();
            *puVar5 = uVar23 + 4;
          }
          puVar5 = *(ulonglong **)(param_1 + 0x348);
          local_res8 = CONCAT44(local_res8._4_4_,puVar12[1]);
          uVar23 = *puVar5;
          if (puVar5[1] < uVar23 + 4) {
            FUN_144beb1c0(puVar5,&local_res8,4);
          }
          else {
            FUN_144b3d470();
            *puVar5 = uVar23 + 4;
          }
          if (((*puVar12 & 0xf0000000) == 0) || ((*puVar12 & 0xf0000000) == 0x30000000)) {
            uVar21 = puVar13[(int)puVar12[2]];
          }
          else {
            uVar21 = puVar12[2];
          }
          local_res8 = CONCAT44(local_res8._4_4_,uVar21);
          puVar5 = *(ulonglong **)(param_1 + 0x348);
          uVar23 = *puVar5;
          if (puVar5[1] < uVar23 + 4) {
            FUN_144beb1c0(puVar5,&local_res8,4);
          }
          else {
            FUN_144b3d470();
            *puVar5 = uVar23 + 4;
          }
          iVar24 = iVar24 + 1;
          lVar10 = lVar10 + 0xc;
        } while (iVar24 < *(int *)(param_1 + 0x168));
      }
      FUN_144f995f0(&local_358);
      if ((*(char *)(param_1 + 0x288) != '\0') &&
         ((*(int *)(param_1 + 0x178) != 0 || (*(char *)(param_1 + 0x1b0) != '\0')))) {
        FUN_144f994f0(&local_358,1,0x50544348);
        iVar24 = *(int *)(param_1 + 0x178);
        if (iVar24 != 0) {
          if (1 < iVar24) {
            FUN_144c22950(*(undefined8 *)(param_1 + 0x170),0,iVar24 + -1,0);
          }
          piVar7 = *(int **)(param_1 + 0x170);
          piVar2 = piVar7 + (longlong)*(int *)(param_1 + 0x178) * 2;
          for (; local_res10 = piVar7, piVar7 != piVar2;
              piVar7 = local_res10 + (longlong)(int)((longlong)piVar1 - (longlong)piVar7 >> 3) * 2)
          {
            piVar1 = piVar7 + 2;
            for (piVar16 = piVar1; (piVar16 != piVar2 && (*piVar16 == *piVar7));
                piVar16 = piVar16 + 2) {
              piVar1 = piVar1 + 2;
            }
            local_res18 = *(ulonglong **)(param_1 + 0x348);
            local_res8._4_4_ = (undefined4)(local_res8 >> 0x20);
            local_res8 = CONCAT44(local_res8._4_4_,*piVar7);
            uVar23 = *local_res18;
            if (local_res18[1] < uVar23 + 4) {
              FUN_144beb1c0(local_res18,&local_res8,4);
            }
            else {
              FUN_144b3d470();
              *local_res18 = uVar23 + 4;
            }
            puVar5 = *(ulonglong **)(param_1 + 0x348);
            local_res8 = CONCAT44(local_res8._4_4_,(int)((longlong)piVar1 - (longlong)piVar7 >> 3));
            uVar23 = *puVar5;
            piVar16 = piVar7;
            if (puVar5[1] < uVar23 + 4) {
              FUN_144beb1c0(puVar5,&local_res8,4);
            }
            else {
              FUN_144b3d470();
              *puVar5 = uVar23 + 4;
            }
            for (; piVar16 != piVar1; piVar16 = piVar16 + 2) {
              puVar5 = *(ulonglong **)(param_1 + 0x348);
              local_res8._4_4_ = (undefined4)(local_res8 >> 0x20);
              local_res8 = CONCAT44(local_res8._4_4_,piVar16[1]);
              uVar23 = *puVar5;
              if (puVar5[1] < uVar23 + 4) {
                FUN_144beb1c0(puVar5,&local_res8,4);
              }
              else {
                FUN_144b3d470();
                *puVar5 = uVar23 + 4;
              }
            }
          }
        }
        FUN_144f995f0(&local_358);
      }
      FUN_144f995f0(&local_358);
    }
  }
  FUN_144f995f0(&local_358);
  *(undefined8 *)(param_1 + 0x348) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x14)) && (*(longlong *)(param_1 + 8) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 8),
               *(uint *)(param_1 + 0x14) & 0x7fffffff);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x80000000;
  puVar17 = (undefined8 *)(param_1 + 0x160);
  FUN_144c1f2b0(puVar17);
  if (puVar17 != (undefined8 *)0x0) {
    *puVar17 = 0;
    *(undefined8 *)(param_1 + 0x168) = 0;
    *(undefined8 *)(param_1 + 0x170) = 0;
    *(undefined8 *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    *(undefined8 *)(param_1 + 0x198) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    FUN_144c1f240(puVar17);
  }
  if (lVar22 == 0) {
    (*DAT_14c787678)(1,local_res20);
  }
  else {
    uVar23 = (longlong)puVar11 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(lVar22 + 0x28) < uVar23) ||
       ((longlong)local_res20 + uVar23 != *(longlong *)(lVar22 + 0x38))) {
      FUN_144be8550(lVar22,local_res20);
    }
    else {
      *(undefined4 **)(lVar22 + 0x38) = local_res20;
      if (*(undefined4 **)(lVar22 + 0x48) == local_res20) {
        FUN_144be8430(lVar22);
      }
    }
  }
  local_350 = 0;
  if ((-1 < (int)local_34c) && (local_358 != (undefined1 *)0x0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_358,(ulonglong)(local_34c & 0x7fffffff) << 4);
  }
  return;
}



// FUNCTION 144c1c3d0 FUN_144c1c3d0 body=3148 status=ok
// SIG undefined FUN_144c1c3d0(void)

undefined4 * FUN_144c1c3d0(longlong param_1,undefined4 *param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  int *piVar13;
  char cVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong lVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  undefined4 *puVar23;
  uint *puVar24;
  ulonglong uVar25;
  undefined4 *puVar26;
  longlong lVar27;
  ulonglong uVar28;
  undefined4 *puVar29;
  undefined1 *puVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  longlong lVar35;
  longlong local_res8;
  undefined4 *local_res10;
  longlong *local_res18;
  uint local_358;
  undefined8 local_348;
  longlong lStack_340;
  undefined8 local_338;
  longlong local_330;
  longlong local_328;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  int local_308;
  uint local_304;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298;
  undefined8 local_290;
  undefined1 local_288;
  undefined8 local_280;
  undefined1 local_268 [32];
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  int *local_1d8;
  int *local_1d0;
  undefined1 local_1c8 [8];
  undefined1 local_1c0 [40];
  undefined1 local_198 [16];
  undefined1 local_188 [336];
  
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    if ((DAT_14c787aa0 != '\0') || (cVar14 = FUN_144bdbf80(), cVar14 != '\0')) {
      cVar14 = FUN_144bdbf80();
      if (cVar14 == '\0') {
        uVar17 = FUN_144bdc640(&local_2b8);
        local_res8 = 0;
        lVar18 = FUN_144bdc480(uVar17,"Type Compendium already begun",&local_res8,0);
        *(char **)(lVar18 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
        *(undefined8 *)(lVar18 + 0x40) = 0x601;
        FUN_144bdc690(&local_2b8);
        *param_2 = 0x80040200;
        return param_2;
      }
      uVar17 = FUN_144bdc810(local_188,&DAT_14c787a50,1);
      local_res8 = 0;
      lVar18 = FUN_144bdc480(uVar17,"Type Compendium already begun",&local_res8,0);
      *(char **)(lVar18 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar18 + 0x40) = 0x601;
      FUN_144bdc8a0(local_188);
    }
    *param_2 = 0x80040200;
    return param_2;
  }
  if ((*param_4 == 0) && (param_4[2] == 0)) goto LAB_144c1cfa2;
  local_298 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_290 = 0;
  local_288 = 0;
  local_280 = 0;
  FUN_144f89410(&local_2b8,param_4);
  FUN_144c070e0(local_268);
  plVar19 = (longlong *)FUN_144c071b0(local_268,local_1c8,&local_2b8);
  local_318 = *plVar19;
  if (local_318 == 0) {
    if ((DAT_14c787aa0 != '\0') || (cVar14 = FUN_144bdbf80(), cVar14 != '\0')) {
      cVar14 = FUN_144bdbf80();
      if (cVar14 == '\0') {
        uVar17 = FUN_144bdc640(&local_310);
        local_res8 = 0;
        lVar18 = FUN_144bdc480(uVar17,"Cannot reuse the existing type compendium",&local_res8,0);
        *(char **)(lVar18 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
        *(undefined8 *)(lVar18 + 0x40) = 0x60c;
        FUN_144bdc690(&local_310);
      }
      else {
        uVar17 = FUN_144bdc810(local_188,&DAT_14c787a50,1);
        local_res8 = 0;
        lVar18 = FUN_144bdc480(uVar17,"Cannot reuse the existing type compendium",&local_res8,0);
        *(char **)(lVar18 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
        *(undefined8 *)(lVar18 + 0x40) = 0x60c;
        FUN_144bdc8a0(local_188);
      }
    }
    *param_2 = 0x80040200;
    FUN_144c07170(local_268);
    FUN_144f893a0(&local_2b8);
    return param_2;
  }
  FUN_144c07570(local_268,&local_248);
  FUN_144c1e910(param_1 + 0x48,&local_348,param_1 + 0x300);
  FUN_144c1e910(param_1 + 0x80,&local_348,param_1 + 0x300);
  local_348 = CONCAT44(uStack_204,local_208);
  FUN_144c1e910(param_1 + 0xb8,&local_348,param_1 + 0x300);
  plVar19 = (longlong *)(param_1 + 0xf0);
  local_320 = plVar19;
  if (&local_238 != plVar19) {
    local_330 = local_238;
    lVar18 = (local_230 - local_238) / 6 + (local_230 - local_238 >> 0x3f);
    lVar18 = (lVar18 >> 2) - (lVar18 >> 0x3f);
    iVar32 = (int)lVar18;
    local_338 = lVar18;
    if ((int)(*(uint *)(param_1 + 0xfc) & 0x7fffffff) < iVar32) {
      FUN_144c13870(plVar19,&PTR_vftable_14c6e47a0,(longlong)iVar32);
    }
    if (iVar32 < *(int *)(param_1 + 0xf8)) {
      puVar29 = (undefined4 *)(*plVar19 + (longlong)*(int *)(param_1 + 0xf8) * 0x18);
      puVar23 = (undefined4 *)(*plVar19 + (longlong)iVar32 * 0x18);
      if (puVar29 != puVar23) {
        puVar29 = puVar29 + 5;
        do {
          puVar29[-7] = 0;
          if ((-1 < (int)puVar29[-6]) && (*(longlong *)(puVar29 + -9) != 0)) {
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,*(longlong *)(puVar29 + -9),
                       (ulonglong)(puVar29[-6] & 0x7fffffff) << 4);
          }
          puVar21 = puVar29 + -0xb;
          *(undefined8 *)(puVar29 + -9) = 0;
          puVar29[-6] = 0x80000000;
          puVar29 = puVar29 + -6;
        } while (puVar21 != puVar23);
      }
    }
    lVar20 = *plVar19;
    if (*(int *)(param_1 + 0xf8) < iVar32) {
      iVar32 = *(int *)(param_1 + 0xf8);
    }
    if ((lVar20 != local_238) && (lVar35 = (longlong)iVar32, 0 < iVar32)) {
      puVar24 = (uint *)(lVar20 + 0x14);
      lVar20 = local_238 - lVar20;
      uVar25 = lVar20 - 0x10;
      lVar27 = lVar20 + -0xc;
      local_348 = uVar25;
      local_328 = lVar27;
      do {
        puVar1 = puVar24 + -3;
        puVar24[-5] = *(uint *)(lVar20 + -0x14 + (longlong)puVar24);
        puVar24[-4] = *(uint *)(uVar25 + (longlong)puVar24);
        if ((uint *)(lVar27 + (longlong)puVar24) != puVar1) {
          puVar29 = *(undefined4 **)(lVar27 + (longlong)puVar24);
          uVar15 = *(uint *)((longlong)puVar24 + lVar20 + -4);
          if ((int)(*puVar24 & 0x7fffffff) < (int)uVar15) {
            FUN_144c139c0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar15);
          }
          puVar23 = *(undefined4 **)puVar1;
          uVar6 = uVar15;
          if ((int)puVar24[-1] < (int)uVar15) {
            uVar6 = puVar24[-1];
          }
          if ((puVar23 != puVar29) && (lVar18 = (longlong)(int)uVar6, 0 < (int)uVar6)) {
            puVar21 = puVar23;
            do {
              puVar26 = (undefined4 *)(((longlong)puVar29 - (longlong)puVar23) + (longlong)puVar21);
              uVar16 = puVar26[1];
              uVar7 = puVar26[2];
              uVar8 = puVar26[3];
              *puVar21 = *puVar26;
              puVar21[1] = uVar16;
              puVar21[2] = uVar7;
              puVar21[3] = uVar8;
              lVar18 = lVar18 + -1;
              puVar21 = puVar21 + 4;
            } while (lVar18 != 0);
          }
          puVar29 = puVar29 + (longlong)(int)uVar6 * 4;
          if (0 < (int)(uVar15 - uVar6)) {
            uVar25 = (ulonglong)(uVar15 - uVar6);
            puVar23 = (undefined4 *)(*(longlong *)(puVar24 + -3) + (longlong)(int)uVar6 * 0x10);
            do {
              if (puVar23 != (undefined4 *)0x0) {
                uVar16 = *puVar29;
                uVar7 = puVar29[1];
                uVar8 = puVar29[2];
                uVar9 = puVar29[3];
                puVar29 = puVar29 + 4;
                *puVar23 = uVar16;
                puVar23[1] = uVar7;
                puVar23[2] = uVar8;
                puVar23[3] = uVar9;
              }
              uVar25 = uVar25 - 1;
              puVar23 = puVar23 + 4;
            } while (uVar25 != 0);
          }
          puVar24[-1] = uVar15;
          uVar25 = local_348;
          lVar27 = local_328;
        }
        puVar24 = puVar24 + 6;
        lVar35 = lVar35 + -1;
        local_238 = local_330;
        lVar18 = local_338;
        plVar19 = local_320;
      } while (lVar35 != 0);
    }
    puVar29 = (undefined4 *)(local_238 + (longlong)iVar32 * 0x18);
    uVar15 = (int)lVar18 - iVar32;
    if (0 < (int)uVar15) {
      uVar25 = (ulonglong)uVar15;
      puVar23 = (undefined4 *)(*plVar19 + (longlong)iVar32 * 0x18);
      do {
        if (puVar23 != (undefined4 *)0x0) {
          *puVar23 = *puVar29;
          puVar23[1] = puVar29[1];
          *(undefined8 *)(puVar23 + 2) = 0;
          puVar23[4] = 0;
          puVar23[5] = 0x80000000;
          uVar15 = puVar29[4];
          puVar21 = (undefined4 *)0x0;
          if (*(undefined4 **)(puVar29 + 2) != (undefined4 *)0x0) {
            puVar21 = *(undefined4 **)(puVar29 + 2);
          }
          if (0 < (int)uVar15) {
            uVar17 = (**(code **)(PTR_vftable_14c6e47a0 + 8))
                               (&PTR_vftable_14c6e47a0,(longlong)(int)uVar15 << 4);
            *(undefined8 *)(puVar23 + 2) = uVar17;
            uVar28 = (ulonglong)uVar15;
            puVar23[4] = uVar15;
            puVar23[5] = uVar15;
            puVar26 = *(undefined4 **)(puVar23 + 2);
            do {
              if (puVar26 != (undefined4 *)0x0) {
                uVar16 = *puVar21;
                uVar7 = puVar21[1];
                uVar8 = puVar21[2];
                uVar9 = puVar21[3];
                puVar21 = puVar21 + 4;
                *puVar26 = uVar16;
                puVar26[1] = uVar7;
                puVar26[2] = uVar8;
                puVar26[3] = uVar9;
              }
              uVar28 = uVar28 - 1;
              puVar26 = puVar26 + 4;
            } while (uVar28 != 0);
          }
          puVar29 = puVar29 + 6;
        }
        uVar25 = uVar25 - 1;
        plVar19 = local_320;
        puVar23 = puVar23 + 6;
      } while (uVar25 != 0);
    }
    *(int *)(plVar19 + 1) = (int)lVar18;
  }
  FUN_144f89a90(local_1c0,0xffffffffffffffff);
  lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar25 = local_240 - local_248 >> 3;
  local_308 = 0;
  if (*(char *)(lVar18 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar20 = *(longlong *)(lVar18 + 0xf0);
  if (lVar20 == 0) {
    if (*(char *)(lVar18 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar20 = FUN_144b3f4a0();
    *(longlong *)(lVar18 + 0xf0) = lVar20;
  }
  lVar18 = *(longlong *)(*(longlong *)(lVar20 + 0x3d0) + 0x10);
  uVar15 = (uint)uVar25;
  plVar19 = (longlong *)0;
  if (*(longlong *)(lVar18 + 8) == 0) {
    plVar19 = (longlong *)lVar18;
  }
  local_338 = (longlong)(int)uVar15 * 0x18;
  local_328 = local_338;
  local_320 = plVar19;
  local_300 = (longlong)plVar19;
  local_2f0 = local_338;
  if (plVar19 == (longlong *)0x0) {
    local_330 = (*DAT_14c787670)(CONCAT71((int7)((ulonglong)lVar18 >> 8),1),&local_338,0x40);
  }
  else {
    local_348 = local_338 + 0x3fU & 0xffffffffffffffc0;
    if (local_348 <= *(ulonglong *)((longlong)plVar19 + 0x28)) {
      local_330 = *(longlong *)((longlong)plVar19 + 0x38);
      if (local_348 + local_330 <= *(ulonglong *)((longlong)plVar19 + 0x40)) {
        *(ulonglong *)((longlong)plVar19 + 0x38) = local_348 + local_330;
        goto LAB_144c1caa7;
      }
    }
    local_330 = FUN_144b454a0(plVar19,&local_348);
  }
LAB_144c1caa7:
  local_304 = uVar15 | 0x80000000;
  iVar32 = 0;
  local_310 = local_330;
  local_2f8 = local_330;
  if ((uVar25 & 0x7fffffff) == 0) {
    FUN_144c23720(&local_310,&PTR_vftable_14c6e47a0,1);
    local_328 = local_2f0;
    local_320 = (longlong *)local_300;
    plVar19 = (longlong *)local_300;
    iVar32 = local_308;
  }
  puVar3 = (undefined8 *)(local_310 + (longlong)iVar32 * 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
  }
  iVar32 = 1;
  uVar25 = 1;
  local_308 = 1;
  lVar18 = local_318;
  lVar20 = local_310;
  iVar34 = iVar32;
  local_358 = local_304;
  local_330 = local_310;
  if (1 < (ulonglong)(local_240 - local_248 >> 3)) {
    do {
      iVar31 = (int)uVar25;
      if ((uVar25 < (ulonglong)(longlong)*(int *)(lVar18 + 0x10)) &&
         (*(longlong *)(*(longlong *)(lVar18 + 8) + (longlong)iVar31 * 8) != 0)) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      iVar32 = iVar34 + 1;
      iVar33 = iVar34;
      if ((int)(local_358 & 0x7fffffff) < iVar32) {
        FUN_144c23720(&local_310,&PTR_vftable_14c6e47a0,(longlong)iVar34 + 1);
        local_358 = local_304;
        lVar20 = local_310;
        iVar33 = local_308;
      }
      lVar35 = local_res8;
      puVar3 = (undefined8 *)(lVar20 + (longlong)iVar33 * 0x18);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined1 *)((longlong)puVar3 + 0x14) = 0;
      }
      lVar27 = (longlong)iVar31 * 8;
      puVar29 = (undefined4 *)(lVar20 + (longlong)iVar34 * 0x18);
      pbVar22 = *(byte **)(local_248 + lVar27);
      local_308 = iVar32;
      if ((*pbVar22 >> 3 & 1) != 0) {
        if (*(longlong *)(local_res8 + 0x210) != 0) {
          pbVar22 = (byte *)FUN_144f96bb0(*(longlong *)(local_res8 + 0x210),pbVar22,0);
        }
        puVar23 = (undefined4 *)FUN_144bef0c0(pbVar22,&local_348);
        uVar16 = puVar23[1];
        uVar7 = puVar23[2];
        uVar8 = puVar23[3];
        *puVar29 = *puVar23;
        puVar29[1] = uVar16;
        puVar29[2] = uVar7;
        puVar29[3] = uVar8;
      }
      lVar18 = local_318;
      if (bVar10) {
        uVar16 = FUN_144f89af0(local_1c0,*(undefined8 *)(*(longlong *)(local_318 + 8) + lVar27));
        if (*(char *)(puVar29 + 5) == '\0') {
          *(undefined1 *)(puVar29 + 5) = 1;
        }
        puVar29[4] = uVar16;
        puVar24 = *(uint **)(*(longlong *)(lVar18 + 8) + lVar27);
        if ((*puVar24 >> 0x18 & 1) != 0) {
          *(undefined1 *)(lVar35 + 0x1b0) = 1;
        }
        puVar24 = (uint *)FUN_144bef800(puVar24,&local_338);
        *(uint *)(*(longlong *)(lVar35 + 0xf0) + 4 + (longlong)iVar31 * 0x18) = *puVar24 & 0x1f;
      }
      uVar25 = (ulonglong)(iVar31 + 1);
      iVar34 = iVar32;
    } while (uVar25 < (ulonglong)(local_240 - local_248 >> 3));
    local_328 = local_2f0;
    local_320 = (longlong *)local_300;
    plVar19 = (longlong *)local_300;
    local_330 = lVar20;
  }
  lVar20 = local_2f8;
  lVar35 = local_res8 + 0x1f0;
  lStack_340 = local_330 + (longlong)iVar32 * 0x18;
  local_348 = local_330;
  FUN_144f84ab0(lVar35);
  lVar18 = local_res8;
  puVar30 = local_1f8;
  puVar12 = local_1f0;
  piVar13 = local_1d8;
  if (lVar35 != 0) {
    FUN_144f84a10(lVar35,&local_348);
    lVar18 = local_res8;
    puVar30 = local_1f8;
    puVar12 = local_1f0;
    piVar13 = local_1d8;
  }
  for (; lVar35 = local_res8, piVar13 != local_1d0; piVar13 = piVar13 + 2) {
    iVar32 = *piVar13;
    uVar25 = (ulonglong)local_338 >> 0x20;
    local_338 = CONCAT44((int)uVar25,iVar32);
    lVar20 = local_res8 + 0x2e0;
    local_res8 = lVar18;
    local_1f8 = puVar30;
    local_1f0 = puVar12;
    FUN_144c22790(lVar20,local_198,&local_338);
    uVar16 = FUN_144f89af0(local_1c0,
                           *(undefined8 *)(*(longlong *)(local_318 + 8) + (longlong)iVar32 * 8));
    iVar34 = *(int *)(lVar35 + 0x20) + 1;
    local_348 = CONCAT44(uVar16,iVar32);
    if ((int)(*(uint *)(lVar35 + 0x24) & 0x7fffffff) < iVar34) {
      FUN_144c13760(lVar35 + 0x18,&PTR_vftable_14c6e47a0,(longlong)iVar34);
    }
    plVar19 = (longlong *)(*(longlong *)(lVar35 + 0x18) + (longlong)*(int *)(lVar35 + 0x20) * 8);
    if (plVar19 != (longlong *)0x0) {
      *plVar19 = local_348;
    }
    *(int *)(lVar35 + 0x20) = iVar34;
    if (*(int *)(lVar35 + 0x208) < iVar32) {
      *(int *)(lVar35 + 0x208) = iVar32;
    }
    plVar19 = local_320;
    lVar18 = local_res8;
    lVar20 = local_2f8;
    puVar30 = local_1f8;
    puVar12 = local_1f0;
    local_res8 = lVar35;
  }
  iVar32 = *(int *)(lVar18 + 0x38);
  iVar34 = ((int)puVar12 - (int)puVar30) + iVar32;
  local_res8 = lVar18;
  if ((int)(*(uint *)(lVar18 + 0x3c) & 0x7fffffff) < iVar34) {
    FUN_14039ab22((longlong *)(lVar18 + 0x30),&PTR_vftable_14c6e47a0,(longlong)iVar34);
  }
  lVar35 = local_res8;
  puVar11 = (undefined1 *)((longlong)iVar32 + *(longlong *)(lVar18 + 0x30));
  for (; puVar30 != puVar12; puVar30 = puVar30 + 1) {
    if (puVar11 != (undefined1 *)0x0) {
      *puVar11 = *puVar30;
    }
    puVar11 = puVar11 + 1;
  }
  *(int *)(lVar18 + 0x38) = iVar34;
  plVar2 = (longlong *)(local_res8 + 0x1d8);
  iVar32 = *(int *)(local_res8 + 0x1e0);
  iVar34 = (int)((longlong)local_1e0 - (longlong)local_1e8 >> 3) + iVar32;
  if ((int)(*(uint *)(local_res8 + 0x1e4) & 0x7fffffff) < iVar34) {
    FUN_147e68374(plVar2,&PTR_vftable_14c6e47a0,(longlong)iVar34);
  }
  puVar3 = (undefined8 *)(*plVar2 + (longlong)iVar32 * 8);
  for (; local_1e8 != local_1e0; local_1e8 = local_1e8 + 1) {
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *local_1e8;
    }
    puVar3 = puVar3 + 1;
  }
  *(int *)(lVar35 + 0x1e0) = iVar34;
  if (plVar19 == (longlong *)0x0) {
    (*DAT_14c787678)(1,lVar20);
  }
  else {
    uVar25 = local_328 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)((longlong)plVar19 + 0x28) < uVar25) ||
       (uVar25 + lVar20 != *(longlong *)((longlong)plVar19 + 0x38))) {
      FUN_144be8550(plVar19,lVar20);
    }
    else {
      *(longlong *)((longlong)plVar19 + 0x38) = lVar20;
      if (*(longlong *)((longlong)plVar19 + 0x48) == lVar20) {
        FUN_144be8430(plVar19);
      }
    }
  }
  if ((-1 < (int)local_358) && (local_330 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,local_330,(ulonglong)(local_358 & 0x7fffffff) * 0x18);
  }
  thunk_FUN_144f8a0b0(local_1c0);
  FUN_144c07170(local_268);
  FUN_144f893a0(&local_2b8);
LAB_144c1cfa2:
  plVar19 = local_res18;
  puVar29 = local_res10;
  lVar20 = local_res8;
  lVar18 = *local_res18;
  if (lVar18 != 0) {
    FUN_144b3d910(lVar18);
  }
  lVar35 = *(longlong *)(lVar20 + 0x1b8);
  lVar27 = plVar19[1];
  lVar4 = plVar19[2];
  lVar5 = plVar19[3];
  *(longlong *)(lVar20 + 0x1b8) = lVar18;
  if (lVar35 != 0) {
    FUN_144b3f230();
  }
  *(longlong *)(lVar20 + 0x1c0) = lVar27;
  *(longlong *)(lVar20 + 0x1c8) = lVar4;
  *(longlong *)(lVar20 + 0x1d0) = lVar5;
  *(undefined4 *)(lVar20 + 0x1e8) = 1;
  *puVar29 = 0;
  return puVar29;
}



// FUNCTION 144c1d030 FUN_144c1d030 body=3553 status=ok
// SIG undefined FUN_144c1d030(void)

int * FUN_144c1d030(longlong param_1,int *param_2,longlong *param_3,int param_4,char param_5,
                   longlong *param_6)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  code *pcVar6;
  ulonglong *puVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  byte *pbVar15;
  longlong lVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ulonglong *puVar20;
  uint uVar21;
  ulonglong uVar22;
  longlong lVar23;
  ulonglong uVar24;
  ulonglong local_res18 [2];
  undefined8 in_stack_fffffffffffffb38;
  undefined8 *puVar25;
  uint local_494;
  int local_490;
  longlong *local_488;
  code *pcStack_480;
  int local_478;
  int local_474;
  undefined8 local_470;
  code *pcStack_468;
  char *local_460;
  code *pcStack_458;
  ulonglong *local_450;
  longlong local_448;
  ulonglong uStack_440;
  longlong *local_438;
  code *pcStack_430;
  undefined1 *local_428 [2];
  undefined8 local_418;
  ulonglong uStack_410;
  undefined1 local_408 [4];
  undefined1 local_404 [4];
  undefined1 local_400 [4];
  undefined1 local_3fc [4];
  undefined1 local_3f8 [8];
  undefined8 local_3f0;
  code *pcStack_3e8;
  longlong **local_3e0;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  ulonglong *local_3d0;
  undefined8 local_3c8;
  code *pcStack_3c0;
  longlong **local_3b8;
  longlong *local_3a8;
  code *pcStack_3a0;
  char *local_398;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  ulonglong *local_388;
  undefined1 local_358 [176];
  code *local_2a8;
  code *local_2a0;
  code *local_228;
  code *local_210;
  code *local_1e0;
  code *local_1d0;
  longlong *local_d0;
  ulonglong *local_c8;
  int local_c0;
  uint local_bc;
  longlong local_b8;
  undefined1 local_b0;
  longlong local_a8;
  undefined1 local_98 [96];
  
  uVar9 = (undefined4)((ulonglong)in_stack_fffffffffffffb38 >> 0x20);
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,0x80040200);
  lVar23 = (longlong)param_4;
  if (*param_3 == 0) {
    iVar13 = -0x7ffbfe00;
    if (DAT_14c787aa0 != '\0') {
      lVar23 = FUN_144bdc640(&local_3a8,&DAT_14c787a50,1);
      local_470 = 2;
      *(char **)(lVar23 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      pcStack_468 = FUN_144c23860;
      local_460 = "!topvar";
      pcStack_458 = FUN_144bdef40;
      local_450 = local_res18;
      local_3f0 = 2;
      pcStack_3e8 = FUN_144c23860;
      *(undefined8 *)(lVar23 + 0x40) = 0x6a3;
      local_3e0 = (longlong **)0x149992ef0;
      uStack_3d8 = 0x44bdef40;
      uStack_3d4 = 1;
      local_3d0 = local_450;
      uVar14 = FUN_144bdc480(lVar23,"HK_RETURN_RES_IF({}) returning {}. ",&local_3f0,0);
      local_438 = (longlong *)0x0;
      FUN_144bdc480(uVar14,"Trying to serialize empty Var",&local_438,0);
      FUN_144bdc690(&local_3a8);
      iVar13 = (int)local_res18[0];
    }
    *param_2 = iVar13;
    return param_2;
  }
  local_res18[0] = CONCAT44(local_res18[0]._4_4_,0x80040200);
  pbVar15 = (byte *)FUN_144b45d50(param_3[1],&local_494);
  if ((*pbVar15 & 3) != 0) {
    if (((int)local_res18[0] < 0) && (DAT_14c787aa0 != '\0')) {
      local_438 = (longlong *)param_3[1];
      lVar23 = FUN_144bdc640(local_98,&DAT_14c787a50,1);
      local_470 = 2;
      *(char **)(lVar23 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      pcStack_468 = FUN_144c23880;
      local_460 = "!topvar.getType()->isSerializable()";
      pcStack_458 = FUN_144bdef40;
      local_450 = local_res18;
      local_3a8 = (longlong *)0x2;
      pcStack_3a0 = FUN_144c23880;
      *(undefined8 *)(lVar23 + 0x40) = 0x6a4;
      local_398 = "!topvar.getType()->isSerializable()";
      uStack_390 = 0x44bdef40;
      uStack_38c = 1;
      local_388 = local_450;
      uVar14 = FUN_144bdc480(lVar23,"HK_RETURN_RES_IF({}) returning {}. ",&local_3a8,0);
      local_3f0 = 1;
      pcStack_3e8 = FUN_144c00d20;
      local_3e0 = &local_438;
      local_3c8 = 1;
      pcStack_3c0 = FUN_144c00d20;
      local_3b8 = local_3e0;
      FUN_144bdc480(uVar14,"Trying to serialize instance of non-serializable type \'{}\'",&local_3c8
                    ,0);
      FUN_144bdc690(local_98);
    }
    *param_2 = (int)local_res18[0];
    return param_2;
  }
  if ((((*param_3 == 0) || (param_3[1] == 0)) ||
      (cVar8 = FUN_144f6a410(param_3[1],&DAT_14c6dc530), cVar8 == '\0')) ||
     (lVar16 = *param_3, lVar16 == 0)) {
    uVar2 = *(undefined1 *)(param_1 + 0x288);
    FUN_144f68560(local_358);
    local_2a8 = FUN_144f686b0;
    local_bc = 0x80000000;
    local_228 = FUN_144f687b0;
    local_2a0 = FUN_144f68730;
    local_1e0 = FUN_144f68aa0;
    local_210 = FUN_144f688c0;
    local_1d0 = FUN_144f68b20;
    local_d0 = param_6;
    local_c8 = (ulonglong *)0x0;
    local_c0 = 0;
    local_a8 = param_1 + 400;
    local_b8 = param_1;
    local_b0 = uVar2;
    FUN_144c20510(param_1,&local_488,param_3[1],0);
    plVar5 = local_488;
    uVar10 = FUN_144beecf0(local_488);
    FUN_144c208c0(param_1 + 8,uVar10,param_1 + 0x350,0);
    pcVar6 = pcStack_480;
    uVar21 = (uint)pcStack_480;
    local_438 = local_488;
    pcStack_430 = pcStack_480;
    if ((*(char *)(param_1 + 0x288) != '\0') &&
       (lVar16 = FUN_144c22790(param_1 + 0x2e0,&local_418,&pcStack_430),
       *(char *)(lVar16 + 8) != '\0')) {
      if (*(int *)(param_1 + 0x208) < (int)uVar21) {
        *(uint *)(param_1 + 0x208) = uVar21;
      }
      uVar10 = FUN_144f89af0(param_1 + 0x298,plVar5);
      FUN_144c1e7f0(param_1 + 0x18,(ulonglong)pcVar6 & 0xffffffff,uVar10);
    }
    local_res18[0] = CONCAT44(local_res18[0]._4_4_,*(undefined4 *)(param_1 + 0x10));
    if (param_5 == '\0') {
      local_490 = (**(code **)(*param_6 + 0x10))(param_6,param_3);
      iVar13 = local_490;
      if (local_490 < param_4) {
        iVar13 = param_4;
      }
      FUN_144c20770(iVar13,param_1 + 0x160);
      lVar16 = (longlong)local_490;
      *(uint *)(*(longlong *)(param_1 + 0x160) + lVar16 * 0xc) = uVar21 | 0x30000000;
      *(int *)(*(longlong *)(param_1 + 0x160) + 4 + lVar16 * 0xc) = (int)local_res18[0];
      *(int *)(*(longlong *)(param_1 + 0x160) + 8 + lVar16 * 0xc) = param_4;
      if ((*(uint *)(*(longlong *)(param_1 + 0x160) + lVar23 * 0xc) & 0xf0000000) == 0) {
        *(int *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23 * 0xc) = local_490;
      }
    }
    else {
      FUN_144c20770(param_4,param_1 + 0x160);
      *(uint *)(*(longlong *)(param_1 + 0x160) + lVar23 * 0xc) = uVar21 | 0x10000000;
      *(int *)(*(longlong *)(param_1 + 0x160) + 4 + lVar23 * 0xc) = (int)local_res18[0];
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23 * 0xc) = 1;
    }
    plVar5 = local_488;
    local_res18[0] = FUN_144f9a3e0(param_1 + 0x220,param_3[1],local_488);
    iVar11 = FUN_144beec90(plVar5);
    iVar12 = FUN_144beec90(plVar5);
    iVar13 = *(int *)(param_1 + 0x10);
    iVar12 = iVar13 + iVar12;
    if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar12) {
      FUN_14039ab22(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar12);
    }
    lVar16 = (longlong)iVar13 + *(longlong *)(param_1 + 8);
    *(int *)(param_1 + 0x10) = iVar12;
    FUN_144bfbef0(lVar16,0,(longlong)iVar11);
    lVar23 = *param_3;
    uVar10 = FUN_144beec90(param_3[1]);
    FUN_144c20980(local_res18,local_358,local_res18[0],lVar16,CONCAT44(uVar9,iVar11),lVar23,uVar10,
                  uVar10,iVar11,1);
    local_490 = 0;
    if (0 < (int)(((longlong)local_c0 << 5) >> 5)) {
      local_438 = (longlong *)0x0;
      do {
        plVar5 = local_438;
        lVar23 = *(longlong *)((longlong)local_438 + (longlong)local_c8);
        uVar3 = *(ulonglong *)((longlong)(local_438 + 2) + (longlong)local_c8);
        lVar16 = *(longlong *)((longlong)(local_438 + 1) + (longlong)local_c8);
        local_res18[0] = CONCAT71(local_res18[0]._1_7_,(char)uVar3) & 0xffffffffffffff01;
        local_448 = lVar23;
        if ((uVar3 & 1) != 0) {
          FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
        }
        iVar13 = *(int *)((longlong)(plVar5 + 3) + (longlong)local_c8);
        uVar24 = 0;
        if ((lVar16 == 0) ||
           (puVar17 = (undefined4 *)FUN_144bef800(lVar16,local_408), ((byte)*puVar17 & 0x1f) != 8))
        {
LAB_144c1da53:
          uVar22 = 0;
          if ((lVar16 == 0) ||
             (puVar17 = (undefined4 *)FUN_144bef800(lVar16,local_3fc), ((byte)*puVar17 & 0x1f) != 3)
             ) {
LAB_144c1dd46:
            *param_2 = -0x7ffbfe00;
            if ((uVar22 & 1) != 0) {
              FUN_144be6b30(uVar22 & 0xfffffffffffffffe);
            }
            if ((uVar24 & 1) != 0) {
              FUN_144be6b30(uVar24 & 0xfffffffffffffffe);
            }
            if ((char)local_res18[0] != '\0') {
              FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
            }
            puVar7 = local_c8;
            if (local_c8 + (longlong)local_c0 * 4 != local_c8) {
              puVar20 = local_c8 + (longlong)local_c0 * 4 + 2;
              do {
                if ((puVar20[-4] & 1) != 0) {
                  FUN_144be6b30(puVar20[-4] & 0xfffffffffffffffe);
                }
                puVar1 = puVar20 + -6;
                puVar20 = puVar20 + -4;
              } while (puVar1 != puVar7);
            }
            local_c0 = 0;
            if ((int)local_bc < 0) {
              return param_2;
            }
            if (local_c8 == (ulonglong *)0x0) {
              return param_2;
            }
            (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                      (&PTR_vftable_14c6e47a0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 5);
            return param_2;
          }
          if ((char)local_res18[0] != '\0') {
            FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
          }
          uVar22 = uVar3;
          if (local_448 == 0) goto LAB_144c1dd46;
          FUN_144c20510(param_1,&local_418,&DAT_14c6da360,0);
          local_428[0] = (undefined1 *)0x0;
          local_3a8 = (longlong *)(uVar3 & 0xfffffffffffffffe);
          (**(code **)(*local_3a8 + 0x30))(local_3a8,local_3f8,local_448,lVar16,local_428);
          iVar11 = FUN_144bfbbb0(local_428[0]);
          uVar22 = uStack_410;
          uVar14 = local_418;
          local_494 = iVar11 + 1;
          uVar21 = (uint)uStack_410;
          local_448 = local_418;
          uStack_440 = uStack_410;
          if (*(char *)(param_1 + 0x288) != '\0') {
            lVar23 = FUN_144c22790(param_1 + 0x2e0,&local_3f0,&uStack_440);
            if (*(char *)(lVar23 + 8) != '\0') {
              if (*(int *)(param_1 + 0x208) < (int)uVar21) {
                *(uint *)(param_1 + 0x208) = uVar21;
              }
              uVar9 = FUN_144f89af0(param_1 + 0x298,uVar14);
              FUN_144c1e7f0(param_1 + 0x18,uVar22 & 0xffffffff,uVar9);
            }
            if (*(char *)(param_1 + 0x288) != '\0') {
              FUN_144c208c0(param_1 + 8,2,param_1 + 0x350);
            }
          }
          uVar9 = *(undefined4 *)(param_1 + 0x10);
          FUN_144c20770(iVar13,param_1 + 0x160);
          puVar19 = local_428[0];
          uVar4 = local_494;
          lVar23 = (longlong)iVar13;
          *(uint *)(*(longlong *)(param_1 + 0x160) + lVar23 * 0xc) = uVar21 | 0x20000000;
          uVar22 = (ulonglong)local_494;
          *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 4 + lVar23 * 0xc) = uVar9;
          *(uint *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23 * 0xc) = local_494;
          local_478 = *(int *)(param_1 + 0x10);
          local_494 = local_478 + local_494;
          if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < (int)local_494) {
            FUN_14039ab22(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)(int)local_494);
          }
          puVar18 = (undefined1 *)((longlong)local_478 + *(longlong *)(param_1 + 8));
          if (0 < (int)uVar4) {
            do {
              if (puVar18 != (undefined1 *)0x0) {
                uVar2 = *puVar19;
                puVar19 = puVar19 + 1;
                *puVar18 = uVar2;
              }
              uVar22 = uVar22 - 1;
              puVar18 = puVar18 + 1;
            } while (uVar22 != 0);
          }
          cVar8 = (char)local_res18[0];
          *(uint *)(param_1 + 0x10) = local_494;
          if ((char)local_res18[0] != '\0') {
            FUN_144be6b30(local_3a8);
          }
        }
        else {
          if ((char)local_res18[0] != '\0') {
            FUN_144be6b20(uVar3 & 0xfffffffffffffffe);
          }
          uVar24 = uVar3;
          local_398 = (char *)uVar3;
          if (lVar23 == 0) goto LAB_144c1da53;
          puVar25 = &local_470;
          local_460 = (char *)0x0;
          local_470 = 0;
          pcStack_468 = (code *)0x0;
          pcStack_458 = (code *)0x0;
          (**(code **)(*(longlong *)(uVar3 & 0xfffffffffffffffe) + 0x48))
                    ((longlong *)(uVar3 & 0xfffffffffffffffe),local_404,lVar23,lVar16,puVar25);
          uVar9 = (undefined4)((ulonglong)puVar25 >> 0x20);
          local_448 = (longlong)pcStack_468;
          FUN_144c20510(param_1,&local_488,pcStack_468,0);
          plVar5 = local_488;
          local_474 = (int)local_460;
          iVar11 = FUN_144beecf0(local_488);
          if (iVar11 < *(int *)(param_1 + 0x21c)) {
            iVar11 = *(int *)(param_1 + 0x21c);
          }
          FUN_144c208c0(param_1 + 8,iVar11,param_1 + 0x350);
          pcVar6 = pcStack_480;
          uVar21 = (uint)pcStack_480;
          local_3a8 = local_488;
          pcStack_3a0 = pcStack_480;
          if ((*(char *)(param_1 + 0x288) != '\0') &&
             (lVar23 = FUN_144c22790(param_1 + 0x2e0,&local_3c8,&pcStack_3a0),
             *(char *)(lVar23 + 8) != '\0')) {
            if (*(int *)(param_1 + 0x208) < (int)uVar21) {
              *(uint *)(param_1 + 0x208) = uVar21;
            }
            uVar10 = FUN_144f89af0(param_1 + 0x298,plVar5);
            FUN_144c1e7f0(param_1 + 0x18,(ulonglong)pcVar6 & 0xffffffff,uVar10);
          }
          uVar10 = *(undefined4 *)(param_1 + 0x10);
          FUN_144c20770(iVar13,param_1 + 0x160);
          iVar11 = local_474;
          lVar23 = (longlong)iVar13;
          *(uint *)(*(longlong *)(param_1 + 0x160) + lVar23 * 0xc) = uVar21 | 0x20000000;
          *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 4 + lVar23 * 0xc) = uVar10;
          *(int *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23 * 0xc) = local_474;
          if (local_474 != 0) {
            iVar13 = FUN_144beec90(local_448);
            local_3a8 = (longlong *)CONCAT44(local_3a8._4_4_,iVar13);
            local_478 = FUN_144beec90(local_488);
            local_494 = iVar13 * iVar11;
            iVar11 = local_478 * iVar11;
            local_448 = FUN_144f9a3e0(param_1 + 0x220,local_448,local_488);
            iVar13 = *(int *)(param_1 + 0x10);
            iVar12 = iVar13 + iVar11;
            if ((int)(*(uint *)(param_1 + 0x14) & 0x7fffffff) < iVar12) {
              FUN_14039ab22(param_1 + 8,&PTR_vftable_14c6e47a0,(longlong)iVar12);
            }
            lVar23 = (longlong)iVar13 + *(longlong *)(param_1 + 8);
            *(int *)(param_1 + 0x10) = iVar12;
            FUN_144bfbef0(lVar23,0,(longlong)iVar11);
            FUN_144c20980(local_400,local_358,local_448,lVar23,CONCAT44(uVar9,iVar11),local_470,
                          local_494,local_478,local_3a8._0_4_,local_474);
          }
          if (((ulonglong)pcStack_458 & 1) != 0) {
            FUN_144be6b30((ulonglong)pcStack_458 & 0xfffffffffffffffe);
          }
          cVar8 = (char)local_res18[0];
        }
        if ((uVar24 & 1) != 0) {
          FUN_144be6b30(uVar24 & 0xfffffffffffffffe);
        }
        if (cVar8 != '\0') {
          FUN_144be6b30(uVar3 & 0xfffffffffffffffe);
        }
        local_490 = local_490 + 1;
        local_438 = local_438 + 4;
      } while (local_490 < (int)(((longlong)local_c0 << 5) >> 5));
    }
    puVar7 = local_c8;
    if (local_c8 + (longlong)local_c0 * 4 != local_c8) {
      puVar20 = local_c8 + (longlong)local_c0 * 4 + 2;
      do {
        if ((puVar20[-4] & 1) != 0) {
          FUN_144be6b30(puVar20[-4] & 0xfffffffffffffffe);
        }
        puVar1 = puVar20 + -6;
        puVar20 = puVar20 + -4;
      } while (puVar1 != puVar7);
    }
    local_c0 = 0;
    if ((-1 < (int)local_bc) && (local_c8 != (ulonglong *)0x0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,local_c8,(ulonglong)(local_bc & 0x7fffffff) << 5);
    }
  }
  else {
    FUN_144bf04a0(local_res18,lVar16);
    if (local_res18[0] < 2) {
      FUN_144c20510(param_1,&local_488,lVar16,1);
      FUN_144c20770(param_4,param_1 + 0x160);
      lVar23 = lVar23 * 0xc;
      *(uint *)(lVar23 + *(longlong *)(param_1 + 0x160)) = (uint)pcStack_480 | 0x40000000;
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 4 + lVar23) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23) = 0;
      if ((*(char *)(param_1 + 0x288) != '\0') &&
         (lVar23 = FUN_144c22790(param_1 + 0x2e0,&local_418,&pcStack_480),
         *(char *)(lVar23 + 8) != '\0')) {
        if (*(int *)(param_1 + 0x208) < (int)(uint)pcStack_480) {
          *(uint *)(param_1 + 0x208) = (uint)pcStack_480;
        }
        uVar9 = FUN_144f89af0(param_1 + 0x298,local_488);
        FUN_144c1e7f0(param_1 + 0x18,(ulonglong)pcStack_480 & 0xffffffff,uVar9);
      }
    }
    else {
      if (local_res18[0] == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_144bef220();
      }
      FUN_144c20510(param_1,&local_488,uVar14,1);
      uVar21 = (uint)pcStack_480;
      if ((*(char *)(param_1 + 0x288) != '\0') &&
         (lVar16 = FUN_144c22790(param_1 + 0x2e0,&local_418,&pcStack_480),
         *(char *)(lVar16 + 8) != '\0')) {
        if (*(int *)(param_1 + 0x208) < (int)uVar21) {
          *(uint *)(param_1 + 0x208) = uVar21;
        }
        uVar9 = FUN_144f89af0(param_1 + 0x298,local_488);
        FUN_144c1e7f0(param_1 + 0x18,(ulonglong)pcStack_480 & 0xffffffff,uVar9);
      }
      uVar9 = FUN_144c1e290(param_1,local_res18[0],&local_488);
      FUN_144c20770(param_4,param_1 + 0x160);
      *(uint *)(*(longlong *)(param_1 + 0x160) + lVar23 * 0xc) = uVar21 | 0x50000000;
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 4 + lVar23 * 0xc) = 0xffffffff;
      *(undefined4 *)(*(longlong *)(param_1 + 0x160) + 8 + lVar23 * 0xc) = uVar9;
    }
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 144c1de20 FUN_144c1de20 body=1136 status=ok
// SIG undefined FUN_144c1de20(void)

void FUN_144c1de20(longlong param_1,undefined8 param_2,ulonglong *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  if (((*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) ||
      (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38))) ||
     (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x128))) {
    FUN_144f994f0(param_2,0,0x54595045);
    if ((*(char *)(param_1 + 0x288) != '\0') && (*(uint *)(param_1 + 0x358) < 2)) {
      uVar4 = 0x4d545450;
      if (*(uint *)(param_1 + 0x358) == 0) {
        uVar4 = 0x54505452;
      }
      FUN_144f994f0(param_2,1,uVar4);
      FUN_144beb140(param_3,(longlong)((*(int *)(param_1 + 0x208) + 1) * *(int *)(param_1 + 0x218)))
      ;
      FUN_144f995f0(param_2);
    }
    if (*(char *)(param_1 + 0x289) == '\0') {
      uVar3 = 1;
    }
    else {
      if (((*(int *)(param_1 + 0x108) == *(int *)(param_1 + 0x38)) &&
          (*(int *)(param_1 + 0x10c) == *(int *)(param_1 + 0x50))) &&
         (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0xf8))) {
        uVar3 = (undefined4)*(undefined8 *)(param_1 + 0x118);
      }
      else {
        uVar3 = FUN_144c1eb00();
      }
      FUN_144f994f0(param_2,1,0x54534841);
      local_res8[0] = *(undefined4 *)(param_1 + 0x354);
      uVar2 = *param_3;
      if (param_3[1] < uVar2 + 4) {
        FUN_144beb1c0(param_3,local_res8,4);
      }
      else {
        FUN_144b3d470();
        *param_3 = uVar2 + 4;
      }
      uVar2 = *param_3;
      local_res8[0] = uVar3;
      if (param_3[1] < uVar2 + 4) {
        FUN_144beb1c0(param_3,local_res8,4);
        FUN_144f995f0(param_2);
      }
      else {
        FUN_144b3d470();
        *param_3 = uVar2 + 4;
        FUN_144f995f0(param_2);
      }
    }
    *(undefined4 *)(param_1 + 0x354) = uVar3;
    lVar1 = param_1 + 0x350;
    if (*(int *)(param_1 + 0x68) < *(int *)(param_1 + 0x50)) {
      FUN_144f994f0(param_2,1,0x54535431);
      FUN_144c1e850(param_1 + 0x48,param_3);
      FUN_144c20810(param_3,4,lVar1,&DAT_149992b70);
      FUN_144f995f0(param_2);
    }
    if (*(int *)(param_1 + 0x100) < *(int *)(param_1 + 0xf8)) {
      FUN_144f994f0(param_2,1,0x544e4131);
      FUN_144c1ad40(param_1 + 0xf0,param_3);
      FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
      FUN_144f995f0(param_2);
    }
    if (*(int *)(param_1 + 0x358) == 0) {
      if (*(int *)(param_1 + 0xa0) < *(int *)(param_1 + 0x88)) {
        FUN_144f994f0(param_2,1,0x46535431);
        FUN_144c1e850(param_1 + 0x80,param_3);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b70);
        FUN_144f995f0(param_2);
      }
      if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xc0)) {
        FUN_144f994f0(param_2,1,0x41535431);
        FUN_144c1e850(param_1 + 0xb8,param_3);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b70);
        FUN_144f995f0(param_2);
      }
      if (*(int *)(param_1 + 0x40) < *(int *)(param_1 + 0x38)) {
        FUN_144f994f0(param_2,1,0x54424459);
        uVar2 = *param_3 + (longlong)(*(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x40));
        if (param_3[1] < uVar2) {
          FUN_144beb1c0(param_3,(longlong)*(int *)(param_1 + 0x40) + *(longlong *)(param_1 + 0x30));
        }
        else {
          FUN_144b3d470();
          *param_3 = uVar2;
        }
        *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x38);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
        FUN_144f995f0(param_2);
      }
      if (*(int *)(param_1 + 0x28) < *(int *)(param_1 + 0x20)) {
        FUN_144f994f0(param_2,1,0x54485348);
        FUN_144c1aff0(param_1 + 0x18,param_3);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
        FUN_144f995f0(param_2);
      }
      if (*(int *)(param_1 + 0x140) < *(int *)(param_1 + 0x128)) {
        FUN_144f994f0(param_2,1,0x5450524f);
        FUN_144c1b210(param_1 + 0x120,param_3);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
        FUN_144f995f0(param_2);
      }
      if (*(int *)(param_1 + 0x158) < *(int *)(param_1 + 0x150)) {
        FUN_144f994f0(param_2,1,0x54504853);
        FUN_144c1aff0(param_1 + 0x148,param_3);
        FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
        FUN_144f995f0(param_2);
      }
    }
    FUN_144f994f0(param_2,1,0x54504144);
    FUN_144c20810(param_3,4,lVar1,&DAT_149992b50);
    FUN_144f995f0(param_2);
    FUN_144f995f0(param_2);
  }
  return;
}



// FUNCTION 144c1e290 FUN_144c1e290 body=473 status=ok
// SIG undefined FUN_144c1e290(void)

undefined8 * FUN_144c1e290(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 local_res10;
  ulonglong local_res18;
  undefined8 local_res20;
  undefined4 local_58;
  int iStack_54;
  int local_50;
  undefined4 uStack_4c;
  
  uVar2 = *param_3;
  uVar1 = *(undefined4 *)(param_3 + 1);
  local_res10 = param_2;
  puVar5 = (undefined8 *)FUN_144befde0(uVar2,0x800000);
  puVar10 = (undefined8 *)0x0;
  puVar9 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)*puVar5;
  }
  puVar5 = puVar9;
  if (0 < *(short *)((longlong)puVar9 + 4)) {
    do {
      uVar6 = FUN_144bf0530(&local_res10);
      local_res20 = puVar5[1];
      uVar7 = FUN_144bf0530(&local_res20);
      iVar4 = FUN_144bfb930(uVar7,uVar6);
      iStack_54 = (int)puVar10;
      if (iVar4 == 0) {
        FUN_144bf07c0(&local_res18,local_res20);
        if (local_res18 < 2) {
          return puVar10;
        }
        local_res18 = CONCAT44(local_res18._4_4_,0xffffffff);
        local_58 = uVar1;
        FUN_144c22a50(param_1 + 0x120,&local_50,&local_58,&local_res18);
        lVar8 = (longlong)local_50;
        lVar3 = *(longlong *)(param_1 + 0x120);
        if (-1 < *(int *)(lVar3 + 8 + lVar8 * 0xc)) {
          return puVar10;
        }
        local_res18 = uVar6;
        FUN_144c206d0(param_1 + 0x80,&local_50,&local_res18);
        *(int *)(lVar3 + lVar8 * 0xc + 8) =
             (int)(CONCAT44(uStack_4c,local_50) - *(longlong *)(param_1 + 0x80) >> 3);
        if (*(char *)(param_1 + 0x288) == '\0') {
          return puVar10;
        }
        iStack_54 = FUN_144f8a240(param_1 + 0x2c0,uVar2,&local_res18);
        if ((char)local_res18 == '\0') {
          return puVar10;
        }
        iVar4 = *(int *)(param_1 + 0x150) + 1;
        local_58 = uVar1;
        if ((int)(*(uint *)(param_1 + 0x154) & 0x7fffffff) < iVar4) {
          FUN_144c13760((longlong *)(param_1 + 0x148),&PTR_vftable_14c6e47a0,(longlong)iVar4);
        }
        puVar9 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x148) + (longlong)*(int *)(param_1 + 0x150) * 8);
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = CONCAT44(iStack_54,local_58);
        }
        *(int *)(param_1 + 0x150) = iVar4;
        return puVar10;
      }
      puVar10 = (undefined8 *)(ulonglong)(iStack_54 + 1U);
      puVar5 = puVar5 + 1;
    } while ((int)(iStack_54 + 1U) < (int)*(short *)((longlong)puVar9 + 4));
  }
  return (undefined8 *)&DAT_ffffffff;
}



// FUNCTION 144c1e470 FUN_144c1e470 body=285 status=ok
// SIG undefined FUN_144c1e470(void)

void FUN_144c1e470(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  longlong lVar4;
  int iVar5;
  int local_38;
  int iStack_34;
  undefined8 local_28;
  ulonglong auStack_20 [3];
  
  puVar3 = (uint *)FUN_144b45d50(param_4,&local_38);
  if ((*puVar3 >> 0xd & 1) == 0) {
    param_2 = param_2 - *(int *)(param_1 + 8);
    FUN_144c20510(param_1,&local_28,param_4,0);
    iVar5 = *(int *)(param_1 + 0x178) + 1;
    local_38 = (int)auStack_20[0];
    iStack_34 = param_2;
    if ((int)(*(uint *)(param_1 + 0x17c) & 0x7fffffff) < iVar5) {
      FUN_144c231e0((longlong *)(param_1 + 0x170),&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    puVar1 = (undefined8 *)
             (*(longlong *)(param_1 + 0x170) + (longlong)*(int *)(param_1 + 0x178) * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = CONCAT44(iStack_34,local_38);
    }
    *(int *)(param_1 + 0x178) = iVar5;
    if ((*(char *)(param_1 + 0x288) != '\0') &&
       (lVar4 = FUN_144c22790(param_1 + 0x2e0,&local_38,auStack_20), *(char *)(lVar4 + 8) != '\0'))
    {
      if (*(int *)(param_1 + 0x208) < (int)auStack_20[0]) {
        *(int *)(param_1 + 0x208) = (int)auStack_20[0];
      }
      uVar2 = FUN_144f89af0(param_1 + 0x298,local_28);
      FUN_144c1e7f0(param_1 + 0x18,auStack_20[0] & 0xffffffff,uVar2);
    }
  }
  return;
}



// FUNCTION 144c1e590 FUN_144c1e590 body=131 status=ok
// SIG undefined FUN_144c1e590(void)

void FUN_144c1e590(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x188) + 1;
  uVar2 = *(undefined8 *)(param_1 + 8);
  if ((int)(*(uint *)(param_1 + 0x18c) & 0x7fffffff) < iVar4) {
    FUN_144c22e90((longlong *)(param_1 + 0x180),&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x188);
  *(int *)(param_1 + 0x188) = iVar4;
  piVar3 = (int *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x180));
  *piVar3 = param_2 - (int)uVar2;
  *(undefined8 *)(piVar3 + 2) = param_4;
  piVar3[1] = param_3;
  return;
}



// FUNCTION 144c1e620 FUN_144c1e620 body=452 status=ok
// SIG undefined FUN_144c1e620(void)

undefined8 * FUN_144c1e620(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar3 = FUN_144b3d480();
  param_1[8] = uVar3;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x80000000;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x80000000;
  uVar3 = FUN_144b3d480();
  param_1[0xf] = uVar3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x80000000;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0x80000000;
  uVar3 = FUN_144b3d480();
  param_1[0x16] = uVar3;
  plVar1 = param_1 + 0x1b;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0x80000000;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x80000000;
  uVar3 = FUN_144b3d480();
  param_1[0x23] = uVar3;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar4 = *(int *)(param_1 + 0x1c) + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xe4) & 0x7fffffff) < iVar4) {
    FUN_144c144a0(plVar1,&PTR_vftable_14c6e47a0,(longlong)iVar4);
  }
  puVar2 = (undefined4 *)(*plVar1 + (longlong)*(int *)(param_1 + 0x1c) * 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 1;
    *(undefined8 *)(puVar2 + 2) = 0;
    puVar2[4] = 0;
    puVar2[5] = 0x80000000;
  }
  *(int *)(param_1 + 0x1c) = iVar4;
  *(undefined4 *)(param_1 + 0x1d) = 1;
  return param_1;
}



// FUNCTION 144c1e7f0 FUN_144c1e7f0 body=91 status=ok
// SIG undefined FUN_144c1e7f0(void)

void FUN_144c1e7f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1] + 1;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
    FUN_144c13760(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
  }
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = CONCAT44(param_3,param_2);
  }
  *(int *)(param_1 + 1) = iVar2;
  return;
}



// FUNCTION 144c1e850 FUN_144c1e850 body=177 status=ok
// SIG undefined FUN_144c1e850(void)

void FUN_144c1e850(longlong *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  
  puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
  puVar5 = (undefined8 *)(*param_1 + (longlong)(int)param_1[4] * 8);
  if (puVar5 == puVar1) {
    *(int *)(param_1 + 4) = (int)param_1[1];
    return;
  }
  do {
    uVar3 = *puVar5;
    iVar4 = FUN_144bfbbb0(uVar3);
    uVar2 = *param_2 + (longlong)(iVar4 + 1);
    if (param_2[1] < uVar2) {
      FUN_144beb1c0(param_2,uVar3);
    }
    else {
      FUN_144b3d470();
      *param_2 = uVar2;
    }
    puVar5 = puVar5 + 1;
  } while (puVar5 != puVar1);
  *(int *)(param_1 + 4) = (int)param_1[1];
  return;
}



// FUNCTION 144c1e910 FUN_144c1e910 body=211 status=ok
// SIG undefined FUN_144c1e910(void)

void FUN_144c1e910(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  undefined1 local_28 [16];
  
  puVar1 = (undefined8 *)param_2[1];
  puVar7 = (undefined8 *)*param_2;
  iVar6 = (int)((longlong)puVar1 - (longlong)puVar7 >> 3);
  if ((int)(*(uint *)(param_1 + 0xc) & 0x7fffffff) < iVar6) {
    FUN_144be3180(param_1,&PTR_vftable_14c6e47a0);
  }
  iVar6 = iVar6 + 1;
  uVar2 = (longlong)iVar6 * 3;
  if ((iVar6 < 0) || (0xffffffff < uVar2)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar3 = (longlong)*(int *)(param_1 + 0x18) * 2;
  if ((*(int *)(param_1 + 0x18) < 0) || (0xffffffff < uVar3)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar3 < (uint)uVar2)) {
    FUN_144b2eb80(param_1 + 0x10);
  }
  for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
    local_res8 = FUN_144bfbd30(*puVar7,param_3);
    FUN_144c226f0(param_1,local_28,&local_res8);
  }
  return;
}



// FUNCTION 144c1e9f0 FUN_144c1e9f0 body=123 status=ok
// SIG undefined FUN_144c1e9f0(void)

void FUN_144c1e9f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 3);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1ea70 FUN_144c1ea70 body=136 status=ok
// SIG undefined FUN_144c1ea70(void)

void FUN_144c1ea70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  lVar2 = lVar1 + (longlong)*(int *)(param_1 + 0x30) * 8;
  while (lVar2 != lVar1) {
    lVar2 = lVar2 + -8;
    FUN_144b49dd0(lVar2);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(longlong *)(param_1 + 0x28) != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*(longlong *)(param_1 + 0x28),
               (ulonglong)(*(uint *)(param_1 + 0x34) & 0x7fffffff) << 3);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  FUN_144c1e9f0(param_1);
  return;
}



// FUNCTION 144c1eb00 FUN_144c1eb00 body=1742 status=ok
// SIG undefined FUN_144c1eb00(void)

ulonglong FUN_144c1eb00(ulonglong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  undefined8 local_268;
  code *local_260;
  ulonglong *local_258;
  code *local_250;
  ulonglong *local_248;
  undefined8 local_240;
  code *local_238;
  ulonglong *local_230;
  code *local_228;
  ulonglong *local_220;
  undefined1 local_1f0 [80];
  undefined1 local_1a0 [352];
  
  uVar9 = 0;
  local_res10 = local_res10 & 0xffffffff00000000;
  local_res8 = param_1;
  if ((3 < DAT_14c787b98) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      uVar4 = FUN_144bdc640(&local_240);
      local_res18 = 0;
      lVar5 = FUN_144bdc480(uVar4,"CalcSig",&local_res18,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x252;
      *(undefined1 *)(lVar5 + 0x19) = 1;
      FUN_144bdc690(&local_240);
    }
    else {
      uVar4 = FUN_144bdc810(local_1a0,&DAT_14c787b48,4);
      local_res20 = 0;
      lVar5 = FUN_144bdc480(uVar4,"CalcSig",&local_res20,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x252;
      *(undefined1 *)(lVar5 + 0x19) = 1;
      FUN_144bdc8a0(local_1a0);
    }
  }
  local_res10 = FUN_144f968f0(0,*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20));
  if ((3 < DAT_14c787b98) || (cVar1 = FUN_144bdbf80(), uVar6 = uVar9, cVar1 != '\0')) {
    cVar1 = FUN_144bdbf80();
    if (cVar1 == '\0') {
      local_res18 = (longlong)*(int *)(param_1 + 0x20);
      uVar4 = FUN_144bdc640(&local_240);
      local_258 = &local_res18;
      local_268 = 2;
      local_248 = &local_res10;
      local_260 = FUN_144f50b20;
      local_250 = FUN_144f50b20;
      lVar5 = FUN_144bdc480(uVar4,"Encoded bodies {}b -> {}",&local_268,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x255;
      uVar3 = 4;
    }
    else {
      local_res20 = (longlong)*(int *)(param_1 + 0x20);
      uVar4 = FUN_144bdc810(local_1a0,&DAT_14c787b48,4);
      local_258 = &local_res20;
      local_268 = 2;
      local_248 = &local_res10;
      local_260 = FUN_144f50b20;
      local_250 = FUN_144f50b20;
      lVar5 = FUN_144bdc480(uVar4,"Encoded bodies {}b -> {}",&local_268,0);
      *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
      *(undefined8 *)(lVar5 + 0x40) = 0x255;
      uVar3 = 8;
    }
    if ((uVar3 & 8) != 0) {
      uVar3 = uVar3 & 0xfffffff7;
      FUN_144bdc8a0(local_1a0);
    }
    uVar6 = (ulonglong)uVar3;
    if ((uVar3 & 4) != 0) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffb);
      FUN_144bdc690(&local_240);
    }
  }
  puVar7 = *(ulonglong **)(param_1 + 0x30);
  puVar8 = puVar7 + *(int *)(param_1 + 0x38);
  local_res18 = local_res10;
  for (; puVar7 != puVar8; puVar7 = puVar7 + 1) {
    iVar2 = FUN_144bfbbb0(*puVar7);
    local_res18 = FUN_144f968f0(local_res18,*puVar7,(longlong)iVar2);
    if ((3 < DAT_14c787b98) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
      cVar1 = FUN_144bdbf80();
      if (cVar1 == '\0') {
        uVar4 = FUN_144bdc640(local_1f0);
        local_248 = &local_res18;
        local_268 = 2;
        local_260 = FUN_144f50c70;
        local_250 = FUN_144f50b20;
        local_258 = puVar7;
        lVar5 = FUN_144bdc480(uVar4,"String \'{}\' -> {}",&local_268,0);
        *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x21a;
        uVar3 = 0x100;
      }
      else {
        uVar4 = FUN_144bdc810(local_1a0,&DAT_14c787b48,4);
        local_220 = &local_res18;
        local_240 = 2;
        local_238 = FUN_144f50c70;
        local_228 = FUN_144f50b20;
        local_230 = puVar7;
        lVar5 = FUN_144bdc480(uVar4,"String \'{}\' -> {}",&local_240,0);
        *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
        *(undefined8 *)(lVar5 + 0x40) = 0x21a;
        uVar3 = 0x200;
      }
      uVar3 = uVar3 | (uint)uVar6;
      if (uVar3 >> 9 != 0) {
        uVar3 = uVar3 & 0xfffffdff;
        FUN_144bdc8a0(local_1a0);
      }
      uVar6 = (ulonglong)uVar3;
      if ((uVar3 >> 8 & 1) != 0) {
        uVar6 = (ulonglong)(uVar3 & 0xfffffeff);
        FUN_144bdc690(local_1f0);
      }
    }
    param_1 = local_res8;
  }
  iVar2 = *(int *)(param_1 + 0xe0);
  uVar10 = uVar9;
  local_res10 = local_res18;
  if (0 < iVar2) {
    do {
      puVar8 = (ulonglong *)(*(longlong *)(param_1 + 0xd8) + uVar9);
      local_res10 = FUN_144f968f0(local_res10,puVar8,4);
      if ((3 < DAT_14c787b98) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          uVar4 = FUN_144bdc640(local_1f0);
          local_240 = 2;
          local_238 = FUN_144f50970;
          local_228 = FUN_144f50b20;
          local_220 = &local_res10;
          local_230 = puVar8;
          lVar5 = FUN_144bdc480(uVar4,"NameId {} -> {}",&local_240,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x25b;
          uVar3 = 0x10;
        }
        else {
          uVar4 = FUN_144bdc810(local_1a0,&DAT_14c787b48,4);
          local_240 = 2;
          local_238 = FUN_144f50970;
          local_228 = FUN_144f50b20;
          local_220 = &local_res10;
          local_230 = puVar8;
          lVar5 = FUN_144bdc480(uVar4,"NameId {} -> {}",&local_240,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x25b;
          uVar3 = 0x20;
        }
        uVar3 = uVar3 | (uint)uVar6;
        if ((uVar3 & 0x20) != 0) {
          uVar3 = uVar3 & 0xffffffdf;
          FUN_144bdc8a0(local_1a0);
        }
        uVar6 = (ulonglong)uVar3;
        if ((uVar3 & 0x10) != 0) {
          uVar6 = (ulonglong)(uVar3 & 0xffffffef);
          FUN_144bdc690(local_1f0);
        }
      }
      local_res10 = FUN_144f968f0(local_res10,puVar8[1],(longlong)(int)puVar8[2] << 4);
      if ((3 < DAT_14c787b98) || (cVar1 = FUN_144bdbf80(), cVar1 != '\0')) {
        cVar1 = FUN_144bdbf80();
        if (cVar1 == '\0') {
          local_res8 = (longlong)(int)puVar8[2];
          uVar4 = FUN_144bdc640(local_1f0);
          local_230 = &local_res8;
          local_240 = 2;
          local_220 = &local_res10;
          local_238 = FUN_144f50b20;
          local_228 = FUN_144f50b20;
          lVar5 = FUN_144bdc480(uVar4,"{} ParamId -> {}",&local_240,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x25d;
          uVar3 = 0x40;
        }
        else {
          local_res18 = (longlong)(int)puVar8[2];
          uVar4 = FUN_144bdc810(local_1a0,&DAT_14c787b48,4);
          local_240 = 2;
          local_230 = &local_res18;
          local_238 = FUN_144f50b20;
          local_220 = &local_res10;
          local_228 = FUN_144f50b20;
          lVar5 = FUN_144bdc480(uVar4,"{} ParamId -> {}",&local_240,0);
          *(char **)(lVar5 + 0x38) = "Format\\Tagfile\\hkTagfileWriteFormat.cpp";
          *(undefined8 *)(lVar5 + 0x40) = 0x25d;
          uVar3 = 0x80;
        }
        uVar3 = uVar3 | (uint)uVar6;
        if ((char)uVar3 < '\0') {
          uVar3 = uVar3 & 0xffffff7f;
          FUN_144bdc8a0(local_1a0);
        }
        uVar6 = (ulonglong)uVar3;
        if ((uVar3 & 0x40) != 0) {
          uVar6 = (ulonglong)(uVar3 & 0xffffffbf);
          FUN_144bdc690(local_1f0);
        }
      }
      iVar2 = *(int *)(param_1 + 0xe0);
      uVar3 = (int)uVar10 + 1;
      uVar9 = uVar9 + 0x18;
      uVar10 = (ulonglong)uVar3;
    } while ((int)uVar3 < iVar2);
  }
  uVar9 = local_res10;
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x38);
  *(int *)(param_1 + 0xf8) = iVar2;
  *(ulonglong *)(param_1 + 0x100) = local_res10;
  if (3 < DAT_14c787b98) {
    lVar5 = FUN_144bdc640(local_1f0,&DAT_14c787b48,4);
    *(undefined1 *)(lVar5 + 0x19) = 0xff;
    FUN_144bdc690(local_1f0);
  }
  return uVar9;
}



// FUNCTION 144c1f1d0 FUN_144c1f1d0 body=97 status=ok
// SIG undefined FUN_144c1f1d0(void)

void FUN_144c1f1d0(longlong param_1)

{
  FUN_144c1b120(param_1 + 0x130);
  FUN_144c1b190(param_1 + 0x108);
  FUN_144c1af20(param_1 + 0xd8);
  FUN_144c1ea70(param_1 + 0xa0);
  FUN_144c1ea70(param_1 + 0x68);
  FUN_144c1ea70(param_1 + 0x30);
  FUN_144c1acd0(param_1 + 0x18);
  FUN_144c1b120(param_1);
  return;
}



// FUNCTION 144c1f240 FUN_144c1f240 body=100 status=ok
// SIG undefined FUN_144c1f240(void)

undefined8 * FUN_144c1f240(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  uVar1 = FUN_144b3d480();
  param_1[8] = uVar1;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return param_1;
}



// FUNCTION 144c1f2b0 FUN_144c1f2b0 body=214 status=ok
// SIG undefined FUN_144c1f2b0(void)

void FUN_144c1f2b0(longlong *param_1)

{
  FUN_144c1ac20(param_1 + 6);
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x1c)) && (param_1[2] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[2],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x1c) & 0x7fffffff) << 3);
  }
  param_1[2] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0x80000000;
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xc);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1f390 FUN_144c1f390 body=100 status=ok
// SIG undefined FUN_144c1f390(void)

void FUN_144c1f390(longlong *param_1)

{
  FUN_144c1f2b0(param_1 + 0x2b);
  FUN_144c1f1d0(param_1 + 2);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c1f400 FUN_144c1f400 body=100 status=ok
// SIG undefined FUN_144c1f400(void)

void FUN_144c1f400(longlong *param_1)

{
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 3);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  if (*param_1 != 0) {
    FUN_144b3f230();
    return;
  }
  return;
}



// FUNCTION 144c1f470 FUN_144c1f470 body=894 status=ok
// SIG undefined FUN_144c1f470(void)

ulonglong FUN_144c1f470(undefined1 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *local_res8;
  ulonglong local_res20;
  ulonglong local_60;
  uint local_58;
  uint local_54;
  longlong local_50 [3];
  
  local_res8 = param_1;
  uVar2 = FUN_144f84ad0();
  lVar5 = *(longlong *)(param_1 + 8);
  plVar12 = (longlong *)(lVar5 + 0xd8);
  if ((int)uVar2 == *(int *)(lVar5 + 0xe0)) {
    if ((((*param_2 & 8) == 0) ||
        (puVar3 = (ulonglong *)FUN_144befea0(param_2,8), puVar3 == (ulonglong *)0x0)) ||
       (local_res20 = *puVar3, local_res20 == 0)) {
      lVar14 = *(longlong *)(param_1 + 8);
      local_res8 = &DAT_14996de1b;
      FUN_144c206d0(lVar14 + 0x30,local_50,&local_res8);
      lVar14 = *(longlong *)(lVar14 + 0x30);
      iVar6 = *(int *)(lVar5 + 0xe0) + 1;
      if ((int)(*(uint *)(lVar5 + 0xe4) & 0x7fffffff) < iVar6) {
        FUN_144c144a0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      puVar1 = (undefined4 *)(*plVar12 + (longlong)*(int *)(lVar5 + 0xe0) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = (int)(local_50[0] - lVar14 >> 3);
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
        puVar1[1] = 1;
        puVar1[5] = 0x80000000;
      }
      *(int *)(lVar5 + 0xe0) = iVar6;
    }
    else {
      lVar14 = *(longlong *)(param_1 + 8);
      FUN_144c206d0(lVar14 + 0x30,local_50,&local_res20);
      lVar14 = local_50[0] - *(longlong *)(lVar14 + 0x30);
      iVar6 = *(int *)(lVar5 + 0xe0) + 1;
      if ((int)(*(uint *)(lVar5 + 0xe4) & 0x7fffffff) < iVar6) {
        FUN_144c144a0(plVar12,&PTR_vftable_14c6e47a0,(longlong)iVar6);
      }
      uVar8 = 0;
      puVar1 = (undefined4 *)(*plVar12 + (longlong)*(int *)(lVar5 + 0xe0) * 0x18);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = (int)(lVar14 >> 3);
        puVar1[1] = 1;
        *(undefined8 *)(puVar1 + 2) = 0;
        puVar1[4] = 0;
        puVar1[5] = 0x80000000;
      }
      *(int *)(lVar5 + 0xe0) = iVar6;
      uVar7 = 0x80000000;
      local_res20 = 0;
      local_60 = 0;
      local_58 = 0;
      local_54 = 0x80000000;
      uVar15 = uVar8;
      uVar13 = local_res20;
      if ((((*param_2 >> 0xf & 1) != 0) &&
          (plVar4 = (longlong *)FUN_144befea0(param_2,0x8000), uVar13 = local_res20,
          plVar4 != (longlong *)0x0)) &&
         (plVar4 = (longlong *)*plVar4, uVar15 = 0, plVar4 != (longlong *)0x0)) {
        uVar11 = (ulonglong)*(ushort *)(plVar4 + 1);
        uVar15 = uVar8;
        if (*(ushort *)(plVar4 + 1) != 0) {
          FUN_144c22c50(&local_60,&PTR_vftable_14c6e47a0,uVar11);
          uVar8 = (ulonglong)local_58;
          uVar15 = local_60;
          uVar7 = local_54;
          uVar13 = local_60;
          local_res20 = local_60;
        }
        for (; uVar11 != 0; uVar11 = uVar11 - 1) {
          plVar9 = plVar4 + 2;
          uVar10 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar10;
          if ((int)(uVar7 & 0x7fffffff) < (int)uVar10) {
            FUN_144c23610(&local_60,&PTR_vftable_14c6e47a0,(longlong)(int)uVar10);
            uVar13 = local_60;
            uVar7 = local_54;
          }
          local_res20 = plVar4[3];
          lVar5 = *(longlong *)(local_res8 + 8);
          lVar14 = (longlong)(int)uVar10 * 0x10 + uVar13;
          local_58 = uVar10;
          FUN_144c206d0(lVar5 + 0x30,local_50,&local_res20);
          *(longlong *)(lVar14 + -0x10) =
               (longlong)(int)(local_50[0] - *(longlong *)(lVar5 + 0x30) >> 3);
          if (*(char *)plVar4[3] == 't') {
            iVar6 = FUN_144c1f470(local_res8,*plVar9);
            lVar5 = (longlong)iVar6;
          }
          else {
            lVar5 = *plVar9;
          }
          *(longlong *)(lVar14 + -8) = lVar5;
          plVar4 = plVar9;
          uVar15 = uVar13;
        }
      }
      local_res20 = uVar13;
      puVar3 = (ulonglong *)(*plVar12 + ((longlong)(int)uVar2 * 3 + 1) * 8);
      if (&local_60 != puVar3) {
        uVar7 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        if ((-1 < (int)*(uint *)((longlong)puVar3 + 0xc)) && (*puVar3 != 0)) {
          (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                    (&PTR_vftable_14c6e47a0,*puVar3,
                     (ulonglong)(*(uint *)((longlong)puVar3 + 0xc) & 0x7fffffff) << 4);
        }
        *puVar3 = 0;
        *(undefined4 *)(puVar3 + 1) = 0;
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0x80000000;
        FUN_144c076e0(&local_60,&PTR_vftable_14c6e47a0);
        *puVar3 = local_60;
        *(uint *)(puVar3 + 1) = local_58;
        *(uint *)((longlong)puVar3 + 0xc) = local_54;
        uVar15 = 0;
      }
      if ((-1 < (int)uVar7) && (uVar15 != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,uVar15,(ulonglong)(uVar7 & 0x7fffffff) << 4);
      }
    }
    uVar2 = uVar2 & 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 144c1f7f0 FUN_144c1f7f0 body=3346 status=ok
// SIG undefined FUN_144c1f7f0(void)

void FUN_144c1f7f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong *puVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  ulonglong *puVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  uint uVar16;
  uint *puVar17;
  longlong *plVar18;
  short *psVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  int local_res8 [2];
  int local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint *local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  longlong local_388;
  ulonglong local_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  undefined1 local_348 [16];
  undefined1 local_338 [16];
  undefined1 local_328 [16];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  ulonglong *local_228;
  int local_220;
  undefined8 local_218;
  longlong local_210;
  ulonglong uStack_208;
  longlong local_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined1 *local_1c0;
  longlong local_1b8 [2];
  longlong local_1a8 [2];
  undefined1 local_198 [16];
  undefined8 local_188;
  int local_180;
  undefined8 local_e8 [21];
  
  local_res10 = param_2;
  cVar5 = FUN_144f84e30();
  if (cVar5 == '\0') {
    local_200 = 0;
    lVar8 = FUN_144beaf60(*(longlong *)(param_1 + 8) + 0x18,&PTR_vftable_14c6e47a0);
    if (lVar8 != 0) {
      FUN_144b3d910(lVar8);
    }
    bVar22 = local_200 != 0;
    local_200 = lVar8;
    if (bVar22) {
      FUN_144b3f230();
    }
    local_1e8 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    FUN_144beb000(&local_3c8,&local_200);
    if (local_200 != 0) {
      FUN_144b3f230();
    }
    FUN_144f84e40(param_1,&local_228);
    puVar4 = local_228;
    while (puVar4 != (ulonglong *)0x0) {
      lVar8 = (longlong)local_220;
      local_228 = puVar4;
      iVar6 = FUN_144c1f470(param_1,puVar4[1]);
      FUN_144f84df0(param_1,iVar6);
      local_388 = lVar8;
      iVar7 = FUN_144f93210(&local_388,local_358);
      uVar13 = local_3c8 + (longlong)iVar7;
      if (local_3c0 < uVar13) {
        FUN_144beb1c0(&local_3c8,local_358);
      }
      else {
        FUN_144b3d470();
        local_3c8 = uVar13;
      }
      local_388 = (longlong)iVar6;
      iVar6 = FUN_144f93210(&local_388,local_348);
      uVar13 = local_3c8 + (longlong)iVar6;
      if (local_3c0 < uVar13) {
        FUN_144beb1c0(&local_3c8,local_348);
      }
      else {
        FUN_144b3d470();
        local_3c8 = uVar13;
      }
      uVar13 = *puVar4;
      if ((uVar13 >> 0x15 & 1) == 0) {
        puVar17 = (uint *)0x0;
      }
      else {
        puVar9 = (ulonglong *)FUN_144befea0(puVar4,0x200000);
        if (puVar9 == (ulonglong *)0x0) {
          puVar17 = (uint *)0x0;
        }
        else {
          puVar17 = (uint *)(*puVar9 & 0xffffffffffffefff);
        }
      }
      uVar21 = uVar13 & 0xffffffffffdfffff;
      if (puVar17 != (uint *)0x0) {
        uVar21 = uVar13;
      }
      plVar10 = (longlong *)FUN_144f69110(&local_200,puVar4,&DAT_14c6df050);
      local_388 = *plVar10;
      if ((uStack_1f0 & 1) != 0) {
        FUN_144be6b30(uStack_1f0 & 0xfffffffffffffffe);
      }
      local_380 = uVar21;
      if ((param_2 == 1) && (local_388 != 0)) {
        local_380 = uVar21 | 0x2000000;
      }
      uVar21 = local_380 & 2;
      uVar13 = local_380 & 1;
      uVar16 = (uint)local_380 & 1;
      uVar3 = uVar16 | 2;
      if ((local_380 & 2) == 0) {
        uVar3 = uVar16;
      }
      uVar20 = local_380 & 0x10;
      uVar16 = uVar3 | 4;
      if ((local_380 & 0x10) == 0) {
        uVar16 = uVar3;
      }
      uVar3 = uVar16 | 8;
      if ((local_380 & 0x100000) == 0) {
        uVar3 = uVar16;
      }
      uVar16 = uVar3 | 0x10;
      if ((local_380 & 0x200000) == 0) {
        uVar16 = uVar3;
      }
      uVar3 = uVar16 | 0x20;
      if ((local_380 & 0x800000) == 0) {
        uVar3 = uVar16;
      }
      uVar16 = uVar3 | 0x40;
      if ((local_380 & 0x4000) == 0) {
        uVar16 = uVar3;
      }
      uVar3 = uVar16 | 0x80;
      if ((local_380 & 0x2000000) == 0) {
        uVar3 = uVar16;
      }
      uVar16 = uVar3 | 0x100;
      if ((local_380 & 0x10000000) == 0) {
        uVar16 = uVar3;
      }
      local_3d8 = (uint *)(ulonglong)uVar16;
      iVar6 = FUN_144f93210(&local_3d8,local_338);
      uVar1 = local_3c8 + (longlong)iVar6;
      if (local_3c0 < uVar1) {
        FUN_144beb1c0(&local_3c8,local_338);
      }
      else {
        FUN_144b3d470();
        local_3c8 = uVar1;
      }
      if (uVar13 != 0) {
        if (((*puVar4 & 1) == 0) ||
           (puVar11 = (undefined8 *)FUN_144befea0(puVar4,1), puVar11 == (undefined8 *)0x0)) {
          local_3d8 = (uint *)0x0;
        }
        else {
          local_3d8 = (uint *)*puVar11;
        }
        iVar6 = FUN_144f93210(&local_3d8,local_328);
        uVar13 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar13) {
          FUN_144beb1c0(&local_3c8,local_328);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar13;
        }
      }
      if (uVar21 != 0) {
        puVar12 = (undefined4 *)FUN_144bef800(puVar4,local_res18);
        puVar9 = (ulonglong *)0x0;
        if (((byte)*puVar12 & 0x1f) == 8) {
          puVar9 = puVar4;
        }
        if (puVar9 == (ulonglong *)0x0) {
          puVar12 = (undefined4 *)FUN_144bef800(puVar4,local_res20);
          puVar9 = (ulonglong *)0x0;
          if (((byte)*puVar12 & 0x1f) == 6) {
            puVar9 = puVar4;
          }
          if (puVar9 != (ulonglong *)0x0) {
            FUN_144beff00(puVar9,&local_1d0);
            iVar6 = FUN_144c1f470(param_1,local_1d0);
            local_3d8 = (uint *)(longlong)iVar6;
            iVar6 = FUN_144f93210(&local_3d8,local_308);
            puVar14 = local_308;
            uVar13 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar13) goto LAB_144c1fcaf;
            FUN_144b3d470(local_3c8,puVar14);
            local_3c8 = uVar13;
          }
        }
        else {
          puVar11 = (undefined8 *)FUN_144befe50(puVar9,1);
          iVar6 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            iVar6 = (int)((ulonglong)*puVar11 >> 8);
          }
          if (iVar6 == 0) {
            FUN_144beff00(puVar9,&local_1d8);
            iVar6 = FUN_144c1f470(param_1,local_1d8);
          }
          else {
            FUN_144beff00(puVar9,&local_1e0);
            iVar6 = FUN_144c1f470(param_1,local_1e0);
            FUN_144f84df0(param_1,iVar6);
          }
          local_3d8 = (uint *)(longlong)iVar6;
          iVar6 = FUN_144f93210(&local_3d8,local_318);
          puVar14 = local_318;
          uVar13 = local_3c8 + (longlong)iVar6;
          if (local_3c0 < uVar13) {
LAB_144c1fcaf:
            FUN_144beb1c0(&local_3c8,puVar14);
          }
          else {
            FUN_144b3d470();
            local_3c8 = uVar13;
          }
        }
      }
      if (uVar20 != 0) {
        if (((*puVar4 & 0x10) == 0) ||
           (puVar11 = (undefined8 *)FUN_144befea0(puVar4,0x10), puVar11 == (undefined8 *)0x0)) {
          local_3d8 = (uint *)0x0;
        }
        else {
          local_3d8 = (uint *)*puVar11;
        }
        iVar6 = FUN_144f93210(&local_3d8,local_2f8);
        uVar13 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar13) {
          FUN_144beb1c0(&local_3c8,local_2f8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar13;
        }
      }
      uVar13 = local_380;
      if ((local_380 >> 0x14 & 1) != 0) {
        if ((((uint)*puVar4 >> 0x14 & 1) == 0) ||
           (puVar9 = (ulonglong *)FUN_144befea0(puVar4,0x100000), puVar9 == (ulonglong *)0x0)) {
          uVar21 = 0;
        }
        else {
          uVar21 = *puVar9;
        }
        local_3d8 = (uint *)(uVar21 & 0xffff);
        iVar6 = FUN_144f93210(&local_3d8,local_2e8);
        uVar20 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar20) {
          FUN_144beb1c0(&local_3c8,local_2e8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar20;
        }
        local_3d8 = (uint *)((uVar21 & 0xffffffff) >> 0x10);
        iVar6 = FUN_144f93210(&local_3d8,local_2d8);
        uVar21 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar21) {
          FUN_144beb1c0(&local_3c8,local_2d8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar21;
        }
      }
      if ((uVar13 >> 0x15 & 1) != 0) {
        local_3d8 = puVar17;
        iVar6 = FUN_144f93210(&local_3d8,local_2c8);
        uVar21 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar21) {
          FUN_144beb1c0(&local_3c8,local_2c8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar21;
        }
      }
      if ((uVar13 >> 0x17 & 1) != 0) {
        if ((((uint)*puVar4 >> 0x17 & 1) == 0) ||
           (puVar11 = (undefined8 *)FUN_144befea0(puVar4,0x800000), puVar11 == (undefined8 *)0x0)) {
          psVar19 = (short *)0x0;
        }
        else {
          psVar19 = (short *)*puVar11;
        }
        uVar21 = (ulonglong)*psVar19;
        local_3d8 = (uint *)((longlong)((int)psVar19[1] << 0x10) | uVar21);
        iVar6 = FUN_144f93210(&local_3d8,local_2b8);
        uVar13 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar13) {
          FUN_144beb1c0(&local_3c8,local_2b8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar13;
        }
        lVar8 = 0;
        uVar13 = local_380;
        if (0 < (longlong)uVar21) {
          do {
            psVar19 = psVar19 + 4;
            local_3d8 = *(uint **)psVar19;
            local_3d0 = FUN_144bf0530(&local_3d8);
            lVar2 = *(longlong *)(param_1 + 8);
            FUN_144c206d0(lVar2 + 0x68,local_1b8,&local_3d0);
            local_3d0 = (ulonglong)(int)(local_1b8[0] - *(longlong *)(lVar2 + 0x68) >> 3);
            iVar6 = FUN_144f93210(&local_3d0,local_2a8);
            uVar13 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar13) {
              FUN_144beb1c0(&local_3c8,local_2a8);
            }
            else {
              FUN_144b3d470();
              local_3c8 = uVar13;
            }
            FUN_144bf04d0(&local_3d8,local_res8);
            if ((((*local_3d8 >> 0x14 & 1) == 0) ||
                (puVar9 = (ulonglong *)FUN_144befea0(local_3d8,0x100000), puVar9 == (ulonglong *)0x0
                )) || (uVar13 = *puVar9, uVar13 == 0)) {
              local_3d0 = (ulonglong)local_res8[0];
              iVar6 = FUN_144f93210(&local_3d0,local_278);
              puVar14 = local_278;
              uVar13 = local_3c8 + (longlong)iVar6;
              if (local_3c0 < uVar13) goto LAB_144c20041;
              FUN_144b3d470(local_3c8,puVar14);
              local_3c8 = uVar13;
            }
            else {
              local_3d0 = (longlong)local_res8[0] | 0x80;
              iVar6 = FUN_144f93210(&local_3d0,local_298);
              uVar20 = local_3c8 + (longlong)iVar6;
              if (local_3c0 < uVar20) {
                FUN_144beb1c0(&local_3c8,local_298);
              }
              else {
                FUN_144b3d470();
                local_3c8 = uVar20;
              }
              local_3d0 = (uVar13 & 0xffffffff) >> 0x1c;
              iVar6 = FUN_144f93210(&local_3d0,local_288);
              puVar14 = local_288;
              uVar13 = local_3c8 + (longlong)iVar6;
              if (local_3c0 < uVar13) {
LAB_144c20041:
                FUN_144beb1c0(&local_3c8,puVar14);
              }
              else {
                FUN_144b3d470();
                local_3c8 = uVar13;
              }
            }
            iVar6 = FUN_144bf0700(&local_3d8);
            local_3d0 = (ulonglong)iVar6;
            iVar6 = FUN_144f93210(&local_3d0,local_268);
            uVar13 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar13) {
              FUN_144beb1c0(&local_3c8,local_268);
            }
            else {
              FUN_144b3d470();
              local_3c8 = uVar13;
            }
            iVar6 = FUN_144c1f470(param_1,*(undefined8 *)(local_3d8 + 2));
            FUN_144f84df0(param_1,iVar6);
            local_3d0 = (longlong)iVar6;
            iVar6 = FUN_144f93210(&local_3d0,local_258);
            uVar13 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar13) {
              FUN_144beb1c0(&local_3c8,local_258);
            }
            else {
              FUN_144b3d470();
              local_3c8 = uVar13;
            }
            lVar8 = lVar8 + 1;
            uVar13 = local_380;
          } while (lVar8 < (longlong)uVar21);
        }
      }
      if ((uVar13 >> 0xe & 1) != 0) {
        if ((((uint)*puVar4 >> 0xe & 1) == 0) ||
           (puVar11 = (undefined8 *)FUN_144befea0(puVar4,0x4000), puVar11 == (undefined8 *)0x0)) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)*puVar11;
        }
        plVar18 = plVar10 + 1;
        uVar20 = (ulonglong)(int)((*plVar10 << 4) >> 4);
        local_3d0 = uVar20;
        iVar6 = FUN_144f93210(&local_3d0,local_248);
        uVar21 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar21) {
          FUN_144beb1c0(&local_3c8,local_248);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar21;
        }
        lVar8 = 0;
        if (0 < (longlong)uVar20) {
          do {
            iVar6 = FUN_144c1f470(param_1,*plVar18);
            FUN_144f84df0(param_1,iVar6);
            local_3d0 = (longlong)iVar6;
            iVar6 = FUN_144f93210(&local_3d0,local_238);
            uVar21 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar21) {
              FUN_144beb1c0(&local_3c8,local_238);
            }
            else {
              FUN_144b3d470();
              local_3c8 = uVar21;
            }
            local_3d0 = plVar18[1];
            iVar6 = FUN_144f93210(&local_3d0,local_378);
            uVar21 = local_3c8 + (longlong)iVar6;
            if (local_3c0 < uVar21) {
              FUN_144beb1c0(&local_3c8,local_378);
            }
            else {
              FUN_144b3d470();
              local_3c8 = uVar21;
            }
            lVar8 = lVar8 + 1;
            plVar18 = plVar18 + 2;
          } while (lVar8 < (longlong)uVar20);
        }
      }
      param_2 = local_res10;
      if ((uVar13 >> 0x19 & 1) != 0) {
        if ((((uint)*puVar4 >> 0x19 & 1) == 0) ||
           (puVar11 = (undefined8 *)FUN_144befea0(puVar4,0x2000000), puVar11 == (undefined8 *)0x0))
        {
          uVar15 = 0;
        }
        else {
          uVar15 = *puVar11;
        }
        FUN_144bdf390(local_e8,uVar15);
        lVar8 = local_388;
        param_2 = local_res10;
        if ((local_res10 == 1) && (local_388 != 0)) {
          FUN_144bdf360(&local_188);
          local_210 = 0;
          uStack_208 = 0;
          puVar11 = (undefined8 *)FUN_144beec10(local_198,lVar8,&DAT_14c6df050);
          local_210 = puVar11[1];
          local_218 = *puVar11;
          if (local_210 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_144befdb0();
          }
          if ((uVar13 & 1) != 0) {
            FUN_144be6b20(uVar13 & 0xfffffffffffffffe);
          }
          if ((uStack_208 & 1) != 0) {
            uVar21 = uStack_208 & 0xfffffffffffffffe;
            uStack_208 = uVar13;
            FUN_144be6b30(uVar21);
            uVar13 = uStack_208;
          }
          uStack_208 = uVar13;
          local_1c8 = &DAT_14996de1b;
          local_1c0 = &DAT_14996de1b;
          FUN_144f67ce0(&local_218,&local_188,&local_1c8);
          if ((uStack_208 & 1) != 0) {
            FUN_144be6b30(uStack_208 & 0xfffffffffffffffe);
          }
          FUN_144be0720(local_e8,local_188,local_180 + -1);
          FUN_144bdf2f0(&local_188);
        }
        uVar15 = local_e8[0];
        lVar8 = *(longlong *)(param_1 + 8);
        plVar10 = (longlong *)(lVar8 + 200);
        iVar6 = *(int *)(lVar8 + 0xd0);
        if ((int)(*(uint *)(lVar8 + 0xd4) & 0x7fffffff) < iVar6 + 1) {
          FUN_144bddc40(plVar10,&PTR_vftable_14c6e47a0,(longlong)iVar6 + 1);
        }
        lVar2 = *plVar10 + (longlong)*(int *)(lVar8 + 0xd0) * 8;
        if (lVar2 != 0) {
          FUN_144be36a0(lVar2,uVar15,0xffffffff);
        }
        *(int *)(lVar8 + 0xd0) = iVar6 + 1;
        lVar8 = *(longlong *)(param_1 + 8);
        local_3d0 = *(ulonglong *)(*plVar10 + (longlong)iVar6 * 8) & 0xfffffffffffffffe;
        FUN_144c206d0(lVar8 + 0xa0,local_1a8,&local_3d0);
        local_3d0 = (ulonglong)(int)(local_1a8[0] - *(longlong *)(lVar8 + 0xa0) >> 3);
        iVar6 = FUN_144f93210(&local_3d0,local_368);
        uVar13 = local_3c8 + (longlong)iVar6;
        if (local_3c0 < uVar13) {
          FUN_144beb1c0(&local_3c8,local_368);
          FUN_144bdf2f0(local_e8);
        }
        else {
          FUN_144b3d470();
          local_3c8 = uVar13;
          FUN_144bdf2f0(local_e8);
        }
      }
      FUN_144f84e40(param_1,&local_228);
      puVar4 = local_228;
    }
    FUN_144beb0a0(&local_3c8);
  }
  return;
}



// FUNCTION 144c20510 FUN_144c20510 body=211 status=ok
// SIG undefined FUN_144c20510(void)

undefined8 * FUN_144c20510(longlong param_1,undefined8 *param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint *puVar4;
  undefined1 local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x210) != 0) {
    param_3 = (uint *)FUN_144f96bb0(*(longlong *)(param_1 + 0x210),param_3,0);
  }
  iVar3 = FUN_144c1f470(param_1 + 0x1f0,param_3);
  FUN_144f84df0(param_1 + 0x1f0,iVar3);
  if (*(int *)(param_1 + 0x200) == 0) {
    FUN_144c1f7f0(param_1 + 0x1f0,param_4);
  }
  if ((*param_3 >> 0x18 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1b0) = 1;
  }
  puVar4 = (uint *)FUN_144bef800(param_3,local_res8);
  *param_2 = param_3;
  uVar1 = *puVar4;
  lVar2 = *(longlong *)(param_1 + 0xf0);
  *(int *)(param_2 + 1) = iVar3;
  *(uint *)(lVar2 + 4 + (longlong)iVar3 * 0x18) = uVar1 & 0x1f;
  return param_2;
}



// FUNCTION 144c205f0 FUN_144c205f0 body=123 status=ok
// SIG undefined FUN_144c205f0(void)

void FUN_144c205f0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) << 2);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c20670 FUN_144c20670 body=87 status=ok
// SIG undefined FUN_144c20670(void)

undefined8 FUN_144c20670(undefined8 param_1,ulonglong param_2)

{
  FUN_144c1b640();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x360);
  }
  return param_1;
}



// FUNCTION 144c206d0 FUN_144c206d0 body=149 status=ok
// SIG undefined FUN_144c206d0(void)

longlong * FUN_144c206d0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144c22830(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144c238a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 8;
  return param_2;
}



// FUNCTION 144c20770 FUN_144c20770 body=157 status=ok
// SIG undefined FUN_144c20770(void)

void FUN_144c20770(int param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] <= param_1) {
    param_1 = param_1 + 1;
    if ((int)(*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) < param_1) {
      FUN_144c234e0(param_2,&PTR_vftable_14c6e47a0,(longlong)param_1);
    }
    iVar2 = (int)param_2[1];
    if (iVar2 < param_1) {
      *(int *)(param_2 + 1) = param_1;
      puVar1 = (undefined8 *)(*param_2 + (longlong)param_1 * 0xc);
      puVar3 = (undefined8 *)(*param_2 + (longlong)iVar2 * 0xc);
      if (puVar3 != puVar1) {
        do {
          if (puVar3 != (undefined8 *)0x0) {
            *puVar3 = 0;
            *(undefined4 *)(puVar3 + 1) = 0;
          }
          puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
        } while (puVar3 != puVar1);
        return;
      }
    }
    else if (param_1 < iVar2) {
      *(int *)(param_2 + 1) = param_1;
    }
  }
  return;
}



// FUNCTION 144c20810 FUN_144c20810 body=175 status=ok
// SIG undefined FUN_144c20810(void)

void FUN_144c20810(ulonglong *param_1,int param_2,int *param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(((param_1[4] - param_1[2]) + *param_1) % (ulonglong)(longlong)param_2);
  iVar3 = param_2 - iVar2;
  if (iVar2 == 0) {
    iVar3 = 0;
  }
  for (; iVar3 != 0; iVar3 = iVar3 - iVar2) {
    uVar1 = *param_1;
    iVar2 = 0x20;
    if (iVar3 < 0x20) {
      iVar2 = iVar3;
    }
    if (param_1[1] < uVar1 + (longlong)iVar2) {
      FUN_144beb1c0(param_1,param_4);
    }
    else {
      FUN_144b3d470();
      *param_1 = uVar1 + (longlong)iVar2;
    }
  }
  if (param_2 < *param_3) {
    param_2 = *param_3;
  }
  *param_3 = param_2;
  return;
}



// FUNCTION 144c208c0 FUN_144c208c0 body=192 status=ok
// SIG undefined FUN_144c208c0(void)

void FUN_144c208c0(longlong *param_1,int param_2,int *param_3,undefined1 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = (int)param_1[1];
  iVar5 = (int)((ulonglong)(longlong)iVar1 % (ulonglong)(longlong)param_2);
  uVar4 = param_2 - iVar5;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  if (uVar4 != 0) {
    iVar5 = uVar4 + iVar1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar5) {
      FUN_14039ab22(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar5);
    }
    if (0 < (int)uVar4) {
      uVar3 = (ulonglong)uVar4;
      puVar2 = (undefined1 *)(*param_1 + (longlong)iVar1);
      do {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = param_4;
        }
        uVar3 = uVar3 - 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != 0);
    }
    *(int *)(param_1 + 1) = iVar5;
  }
  if (param_2 < *param_3) {
    param_2 = *param_3;
  }
  *param_3 = param_2;
  return;
}



// FUNCTION 144c20980 FUN_144c20980 body=7347 status=ok
// SIG undefined FUN_144c20980(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * FUN_144c20980(int *param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5,
                   longlong param_6,uint param_7,uint param_8,uint param_9,int param_10)

{
  ulonglong *puVar1;
  float fVar2;
  undefined1 uVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  int iVar7;
  double dVar8;
  code *pcVar9;
  ulonglong *puVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  uint uVar18;
  undefined8 uVar19;
  double *pdVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  double **ppdVar25;
  ulonglong *puVar26;
  double *pdVar27;
  size_t sVar28;
  byte bVar29;
  ulonglong uVar30;
  size_t _Size;
  longlong *plVar31;
  longlong lVar32;
  double **ppdVar33;
  longlong *plVar34;
  ulonglong *puVar35;
  undefined8 uVar36;
  double *pdVar37;
  longlong lVar38;
  ulonglong uVar39;
  double *_Dst;
  longlong lVar40;
  uint uVar41;
  longlong lVar42;
  double *pdVar43;
  bool bVar44;
  double **in_stack_ffffffffffffd1d8;
  undefined4 uVar45;
  longlong *local_2df0;
  double *local_2de8;
  longlong local_2de0;
  longlong *local_2dd8;
  longlong local_2dd0;
  double **local_2dc8;
  ulonglong local_2dc0;
  double *local_2db8;
  longlong local_2db0;
  longlong *local_2da8;
  char *local_2da0;
  int local_2d98;
  int local_2d94;
  ulonglong local_2d90;
  ulonglong local_2d88;
  int local_2d80;
  int local_2d7c;
  int local_2d78;
  uint local_2d74;
  uint local_2d70;
  uint local_2d6c;
  uint local_2d68 [2];
  longlong local_2d60;
  double *local_2d58;
  longlong lStack_2d50;
  ulonglong local_2d48;
  double *local_2d40;
  longlong local_2d38;
  longlong *local_2d30;
  undefined1 local_2d28 [4];
  undefined1 local_2d24 [4];
  undefined1 local_2d20 [4];
  undefined1 local_2d1c [4];
  undefined1 local_2d18 [4];
  undefined1 local_2d14 [4];
  undefined1 local_2d10 [4];
  undefined1 local_2d0c [4];
  undefined1 local_2d08 [4];
  undefined1 local_2d04 [4];
  undefined1 local_2d00 [4];
  undefined1 local_2cfc [4];
  undefined1 local_2cf8 [4];
  undefined1 local_2cf4 [4];
  undefined1 local_2cf0 [4];
  undefined1 local_2cec [4];
  undefined1 local_2ce8 [4];
  undefined1 local_2ce4 [4];
  undefined1 local_2ce0 [4];
  undefined1 local_2cdc [4];
  undefined1 local_2cd8 [4];
  undefined1 local_2cd4 [4];
  undefined1 local_2cd0 [8];
  ulonglong local_2cc8;
  ulonglong local_2cc0;
  double *local_2cb8;
  undefined1 uStack_2cb0;
  undefined7 uStack_2caf;
  undefined1 local_2ca8 [4];
  undefined1 local_2ca4 [4];
  undefined1 local_2ca0 [8];
  double *local_2c98;
  undefined8 uStack_2c90;
  ulonglong *local_2c88;
  uint local_2c80;
  uint local_2c7c;
  ulonglong local_2c78 [384];
  double local_2078 [1030];
  undefined8 uStack_48;
  
  uStack_48 = 0x144c209b2;
  local_2c88 = local_2c78;
  local_2c80 = 0;
  local_2c7c = 0x80000040;
  local_2d94 = 0;
  if (0 < param_10) {
    uVar39 = (ulonglong)(int)param_8;
    lVar40 = (longlong)(int)param_9;
    uVar21 = uVar39;
    local_2dd0 = lVar40;
    local_2dc0 = uVar39;
    do {
      lVar24 = uVar39 * (longlong)local_2d94;
      iVar7 = *(int *)(param_3 + 0x10);
      lVar38 = lVar40 * local_2d94 + param_6;
      param_7 = 0x400;
      if (param_10 - local_2d94 < 0x400) {
        param_7 = param_10 - local_2d94;
      }
      ppdVar33 = (double **)(ulonglong)param_7;
      local_2d98 = 0;
      while( true ) {
        uVar45 = (undefined4)((ulonglong)in_stack_ffffffffffffd1d8 >> 0x20);
        iVar22 = (int)ppdVar33;
        if (local_2d98 == iVar7) break;
        lVar42 = (longlong)local_2d98 * 0x38 + *(longlong *)(param_3 + 8);
        _Dst = (double *)((ulonglong)*(ushort *)(lVar42 + 0xc) + lVar24 + param_4);
        pdVar43 = (double *)((ulonglong)*(ushort *)(lVar42 + 10) + lVar38);
        switch(*(undefined1 *)(lVar42 + 8)) {
        case 1:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2ce0);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 2) {
            lVar32 = lVar40;
          }
          if (lVar32 == 0) {
            local_2df0 = (longlong *)0x0;
          }
          else {
            local_2df0 = (longlong *)FUN_144befdb0(lVar32);
          }
          if (((ulonglong)local_2df0 & 1) != 0) {
            FUN_144be6b20((ulonglong)local_2df0 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cdc);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 2) {
            lVar42 = lVar40;
          }
          if (lVar42 == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0(lVar42);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          local_2da0 = (char *)((ulonglong)local_2da0 & 0xffffffff00000000);
          plVar16 = plVar15;
          if (0 < (int)param_7) {
LAB_144c20dd0:
            param_5 = param_5 & 0xffffff00;
            puVar14 = &param_5;
            plVar15 = (longlong *)((ulonglong)plVar16 & 0xfffffffffffffffe);
            (**(code **)(*plVar15 + 0x30))(plVar15,local_2cd8,pdVar43,lVar42,puVar14);
            plVar31 = (longlong *)((ulonglong)local_2df0 & 0xfffffffffffffffe);
            in_stack_ffffffffffffd1d8 =
                 (double **)CONCAT71((int7)((ulonglong)puVar14 >> 8),(char)param_5);
            (**(code **)(*plVar31 + 0x28))
                      (plVar31,&local_2d80,_Dst,lVar32,in_stack_ffffffffffffd1d8);
            if (-1 < local_2d80) goto code_r0x000144c20e2b;
            *param_1 = local_2d80;
            if (((ulonglong)plVar16 & 1) != 0) {
              FUN_144be6b30(plVar15);
            }
            if (((ulonglong)local_2df0 & 1) != 0) {
              FUN_144be6b30(plVar31);
            }
            puVar10 = local_2c88;
            puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
            while (puVar26 != puVar10) {
              puVar26 = puVar26 + -6;
              FUN_144c1a3b0(puVar26);
            }
            goto LAB_144c222e8;
          }
          goto LAB_144c20e8f;
        case 2:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cd4);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 4) {
            lVar32 = lVar40;
          }
          if (lVar32 == 0) {
            local_2df0 = (longlong *)0x0;
          }
          else {
            local_2df0 = (longlong *)FUN_144befdb0(lVar32);
          }
          if (((ulonglong)local_2df0 & 1) != 0) {
            FUN_144be6b20((ulonglong)local_2df0 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cd0);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 4) {
            lVar42 = lVar40;
          }
          if (lVar42 == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0(lVar42);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          param_5 = 0;
          plVar16 = plVar15;
          if (0 < (int)param_7) {
LAB_144c20f63:
            local_2cb8 = (double *)0x0;
            uStack_2cb0 = 0;
            plVar15 = (longlong *)((ulonglong)plVar16 & 0xfffffffffffffffe);
            (**(code **)(*plVar15 + 0x30))(plVar15,local_2ca8,pdVar43,lVar42,&local_2cb8);
            uStack_2c90 = CONCAT71(uStack_2caf,uStack_2cb0);
            in_stack_ffffffffffffd1d8 = &local_2c98;
            plVar31 = (longlong *)((ulonglong)local_2df0 & 0xfffffffffffffffe);
            local_2c98 = local_2cb8;
            (**(code **)(*plVar31 + 0x28))
                      (plVar31,&local_2d7c,_Dst,lVar32,in_stack_ffffffffffffd1d8);
            if (-1 < local_2d7c) goto code_r0x000144c20fdb;
            *param_1 = local_2d7c;
            if (((ulonglong)plVar16 & 1) != 0) {
              FUN_144be6b30(plVar15);
            }
            if (((ulonglong)local_2df0 & 1) != 0) {
              FUN_144be6b30(plVar31);
            }
            puVar10 = local_2c88;
            puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
            while (puVar26 != puVar10) {
              puVar26 = puVar26 + -6;
              FUN_144c1a3b0(puVar26);
            }
            goto LAB_144c222e8;
          }
          goto LAB_144c20e8f;
        case 3:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2ca4);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 5) {
            lVar32 = lVar40;
          }
          if (lVar32 == 0) {
            local_2df0 = (longlong *)0x0;
          }
          else {
            local_2df0 = (longlong *)FUN_144befdb0(lVar32);
          }
          if (((ulonglong)local_2df0 & 1) != 0) {
            FUN_144be6b20((ulonglong)local_2df0 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2ca0);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 5) {
            lVar42 = lVar40;
          }
          if (lVar42 == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = (longlong *)FUN_144befdb0(lVar42);
          }
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          param_5 = 0;
          plVar15 = plVar16;
          if (0 < (int)param_7) {
LAB_144c21100:
            local_2dc8 = (double **)0x0;
            plVar15 = (longlong *)((ulonglong)plVar16 & 0xfffffffffffffffe);
            (**(code **)(*plVar15 + 0x30))(plVar15,local_2d28,pdVar43,lVar42,&local_2dc8);
            plVar31 = (longlong *)((ulonglong)local_2df0 & 0xfffffffffffffffe);
            in_stack_ffffffffffffd1d8 = local_2dc8;
            (**(code **)(*plVar31 + 0x28))(plVar31,&local_2d78,_Dst,lVar32,local_2dc8);
            if (-1 < local_2d78) goto code_r0x000144c21155;
            *param_1 = local_2d78;
            if (((ulonglong)plVar16 & 1) != 0) {
              FUN_144be6b30(plVar15);
            }
            if (((ulonglong)local_2df0 & 1) != 0) {
              FUN_144be6b30(plVar31);
            }
            puVar10 = local_2c88;
            puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
            while (puVar26 != puVar10) {
              puVar26 = puVar26 + -6;
              FUN_144c1a3b0(puVar26);
            }
            goto LAB_144c222e8;
          }
LAB_144c20e8f:
          bVar44 = ((ulonglong)plVar15 & 1) == 0;
LAB_144c20e93:
          if (!bVar44) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          if (((ulonglong)local_2df0 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_2df0 & 0xfffffffffffffffe);
          }
LAB_144c20eb3:
          ppdVar33 = (double **)(ulonglong)param_7;
          break;
        case 4:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2d14);
          local_2db0 = 0;
          if (((byte)*puVar14 & 0x1f) == 6) {
            local_2db0 = lVar40;
          }
          local_2db8 = _Dst;
          if (local_2db0 == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0();
          }
          local_2da8 = plVar15;
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2d10);
          local_2de0 = 0;
          if (((byte)*puVar14 & 0x1f) == 6) {
            local_2de0 = lVar40;
          }
          local_2de8 = pdVar43;
          if (local_2de0 == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = (longlong *)FUN_144befdb0();
          }
          bVar29 = (byte)plVar16;
          local_2dd8 = plVar16;
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          in_stack_ffffffffffffd1d8 = (double **)CONCAT44(uVar45,param_8);
          piVar17 = (int *)FUN_144c1a490(param_2,local_2d0c,&local_2db8,&local_2de8,
                                         in_stack_ffffffffffffd1d8,param_9,param_7);
          if (-1 < *piVar17) {
LAB_144c21e3a:
            if ((bVar29 & 1) != 0) {
              FUN_144be6b30((ulonglong)plVar16 & 0xfffffffffffffffe);
            }
            if (((ulonglong)plVar15 & 1) == 0) goto LAB_144c20eb3;
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
            ppdVar33 = (double **)(ulonglong)param_7;
            break;
          }
          *param_1 = *piVar17;
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          puVar10 = local_2c88;
          puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
          while (puVar26 != puVar10) {
            puVar26 = puVar26 + -6;
            FUN_144c1a3b0(puVar26);
          }
          goto LAB_144c222e8;
        case 5:
          if ((int)(local_2c7c & 0x7fffffff) < (int)(local_2c80 + iVar22)) {
            FUN_144c232f0(&local_2c88,&PTR_vftable_14c6e47c0,(longlong)(int)(local_2c80 + iVar22));
          }
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2d08);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 3) {
            lVar32 = lVar40;
          }
          if (lVar32 == 0) {
            uVar39 = 0;
          }
          else {
            uVar39 = FUN_144befdb0(lVar32);
          }
          if ((uVar39 & 1) != 0) {
            FUN_144be6b20(uVar39 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2d04);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 3) {
            lVar42 = lVar40;
          }
          if (lVar42 == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0(lVar42);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          uVar21 = uVar39;
          plVar16 = plVar15;
          uVar30 = (ulonglong)param_7;
          if (0 < (int)param_7) {
            do {
              local_2d90 = uVar30;
              local_2d88 = uVar21;
              local_2d58 = _Dst;
              lStack_2d50 = lVar32;
              local_2d48 = uVar21;
              if ((uVar21 & 1) != 0) {
                FUN_144be6b20(uVar21 & 0xfffffffffffffffe);
              }
              local_2d40 = pdVar43;
              local_2d38 = lVar42;
              local_2d30 = plVar16;
              if (((ulonglong)plVar16 & 1) != 0) {
                FUN_144be6b20((ulonglong)plVar16 & 0xfffffffffffffffe);
              }
              param_5 = local_2c80 + 1;
              if ((int)(local_2c7c & 0x7fffffff) < (int)param_5) {
                FUN_144c232f0(&local_2c88,&PTR_vftable_14c6e47c0,(longlong)(int)param_5);
              }
              plVar15 = plVar16;
              if (local_2c88 + (longlong)(int)local_2c80 * 6 != (ulonglong *)0x0) {
                FUN_144c1a3f0(local_2c88 + (longlong)(int)local_2c80 * 6,&local_2d58);
                local_2d88 = local_2d48;
                plVar15 = local_2d30;
              }
              local_2c80 = param_5;
              if (((ulonglong)plVar15 & 1) != 0) {
                FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
              }
              if ((local_2d88 & 1) != 0) {
                FUN_144be6b30(local_2d88 & 0xfffffffffffffffe);
              }
              _Dst = (double *)((longlong)_Dst + local_2dc0);
              uVar39 = uVar21 & 0xfffffffffffffffe;
              if ((uVar21 & 1) != 0) {
                FUN_144be6b30(uVar39);
              }
              pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
              plVar15 = (longlong *)((ulonglong)plVar16 & 0xfffffffffffffffe);
              if (((ulonglong)plVar16 & 1) != 0) {
                local_2dd8 = (longlong *)uVar39;
                FUN_144be6b30(plVar15);
              }
              local_2d90 = local_2d90 - 1;
              uVar21 = uVar39;
              plVar16 = plVar15;
              local_2dd8 = plVar15;
              uVar30 = local_2d90;
            } while (local_2d90 != 0);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          if ((uVar39 & 1) != 0) {
            FUN_144be6b30(uVar39 & 0xfffffffffffffffe);
            ppdVar33 = (double **)(ulonglong)param_7;
            break;
          }
          goto LAB_144c20eb3;
        case 6:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          if (lVar40 == 0) {
            local_2df0 = (longlong *)0x0;
          }
          else {
            local_2df0 = (longlong *)FUN_144befdb0(lVar40);
          }
          if (((ulonglong)local_2df0 & 1) != 0) {
            FUN_144be6b20((ulonglong)local_2df0 & 0xfffffffffffffffe);
          }
          in_stack_ffffffffffffd1d8 = *(double ***)(lVar42 + 0x18);
          if (in_stack_ffffffffffffd1d8 == (double **)0x0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0(in_stack_ffffffffffffd1d8);
          }
          param_5 = CONCAT31(param_5._1_3_,(char)plVar15) & 0xffffff01;
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          piVar17 = (int *)(**(code **)(lVar42 + 0x28))
                                     (local_2d00,_Dst,lVar40,pdVar43,in_stack_ffffffffffffd1d8,
                                      param_7);
          if (*piVar17 < 0) {
            *param_1 = *piVar17;
            if ((char)param_5 != '\0') {
              FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
            }
            if (((ulonglong)local_2df0 & 1) != 0) {
              FUN_144be6b30((ulonglong)local_2df0 & 0xfffffffffffffffe);
            }
            puVar10 = local_2c88;
            puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
            while (puVar26 != puVar10) {
              puVar26 = puVar26 + -6;
              FUN_144c1a3b0(puVar26);
            }
            goto LAB_144c222e8;
          }
          bVar44 = (char)param_5 == '\0';
          goto LAB_144c20e93;
        case 7:
          uVar36 = *(undefined8 *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(uVar36,local_2d24);
          uVar19 = 0;
          if (((byte)*puVar14 & 0x1f) == 4) {
            uVar19 = uVar36;
          }
          FUN_144bef800(uVar19,&local_2d70);
          uVar36 = *(undefined8 *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(uVar36,local_2d20);
          uVar19 = 0;
          if (((byte)*puVar14 & 0x1f) == 4) {
            uVar19 = uVar36;
          }
          FUN_144bef800(uVar19,&local_2d74);
          uVar18 = (local_2d70 >> 10) + 7;
          uVar41 = (local_2d74 >> 10) + 7;
          uVar23 = uVar18 >> 3;
          param_5 = CONCAT21((short)(local_2d74 >> 0x10),
                             (byte)(local_2d74 >> 8) ^ (byte)(local_2d70 >> 8)) & 0xffffff01;
          uVar12 = uVar41 >> 3;
          iVar13 = uVar23 - uVar12;
          if (iVar13 < 1) {
            if ((local_2d74 >> 8 & 1) != 0) {
              pdVar43 = (double *)((longlong)pdVar43 + (longlong)-iVar13);
            }
            if ((char)param_5 == '\0') {
              uVar21 = (ulonglong)param_8;
              if ((uVar23 == param_8) && (uVar23 == param_9)) {
                FUN_144bfbed0(_Dst,pdVar43,(longlong)(int)(uVar23 * iVar22));
              }
              else {
                uVar30 = (ulonglong)uVar23;
                if (iVar22 < 1) goto switchD_144c20acd_default;
                do {
                  if (((uVar18 >> 3 == 0) || (uVar23 < 0x10)) ||
                     ((_Dst <= (double *)(((ulonglong)uVar23 - 1) + (longlong)pdVar43) &&
                      (pdVar43 <= (double *)(((ulonglong)uVar23 - 1) + (longlong)_Dst))))) {
                    if (uVar30 != 0) {
                      pdVar37 = _Dst;
                      uVar21 = uVar30;
                      do {
                        *(undefined1 *)pdVar37 =
                             *(undefined1 *)
                              (((longlong)pdVar43 - (longlong)_Dst) + (longlong)pdVar37);
                        pdVar37 = (double *)((longlong)pdVar37 + 1);
                        uVar21 = uVar21 - 1;
                      } while (uVar21 != 0);
                    }
                  }
                  else {
                    memcpy(_Dst,pdVar43,uVar30);
                  }
                  pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
                  _Dst = (double *)((longlong)_Dst + uVar39);
                  ppdVar33 = (double **)((longlong)ppdVar33 - 1);
                } while (ppdVar33 != (double **)0x0);
                ppdVar33 = (double **)(ulonglong)param_7;
              }
            }
            else {
              ppdVar25 = ppdVar33;
              if (0 < iVar22) {
                do {
                  if (uVar23 == 1) {
                    *(undefined1 *)_Dst = *(undefined1 *)pdVar43;
                  }
                  else if (uVar23 == 2) {
                    *(ushort *)_Dst = *(ushort *)pdVar43 >> 8 | *(ushort *)pdVar43 << 8;
                  }
                  else if (uVar23 == 4) {
                    fVar2 = *(float *)pdVar43;
                    *(uint *)_Dst =
                         (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                         ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18;
                  }
                  else if (uVar23 == 8) {
                    dVar8 = *pdVar43;
                    *_Dst = (double)((ulonglong)dVar8 >> 0x38 |
                                     ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                                     ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                                     ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                                     ((ulonglong)dVar8 & 0xff000000) << 8 |
                                     ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                                     ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
                  }
                  pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
                  _Dst = (double *)((longlong)_Dst + uVar39);
                  ppdVar25 = (double **)((longlong)ppdVar25 - 1);
                } while (ppdVar25 != (double **)0x0);
              }
            }
          }
          else {
            local_2cc0 = (ulonglong)uVar12 - 1;
            local_2d60 = 0;
            local_2d88 = 1;
            local_2d90 = local_2cc0;
            if ((local_2d70 & 0x100) != 0) {
              local_2d60 = (ulonglong)uVar23 - (ulonglong)uVar12;
              local_2d90 = (ulonglong)uVar12;
              local_2d88 = (ulonglong)-iVar13;
            }
            uVar39 = (ulonglong)uVar12;
            if (0 < iVar22) {
              uVar18 = local_2d74 >> 9;
              do {
                local_2da0 = (char *)(local_2d90 + (longlong)_Dst);
                local_2dc8 = (double **)(local_2da0 + local_2d88);
                puVar26 = (ulonglong *)(local_2d60 + (longlong)_Dst);
                if ((char)param_5 == '\0') {
                  if (uVar41 >> 3 == 0) {
                    FUN_144bfbed0(puVar26,pdVar43,0);
                  }
                  else {
                    lVar40 = 0;
                    if (((uVar41 >> 3 == 0) || (uVar12 < 0x10)) ||
                       ((puVar26 <= (ulonglong *)((longlong)pdVar43 + local_2cc0) &&
                        (pdVar43 <= (double *)((longlong)puVar26 + local_2cc0))))) {
                      if (uVar39 != 0) {
                        lVar40 = (longlong)pdVar43 - (longlong)puVar26;
                        uVar21 = uVar39;
                        do {
                          *(undefined1 *)puVar26 = *(undefined1 *)(lVar40 + (longlong)puVar26);
                          puVar26 = (ulonglong *)((longlong)puVar26 + 1);
                          uVar21 = uVar21 - 1;
                        } while (uVar21 != 0);
                      }
                    }
                    else {
                      memcpy(puVar26,pdVar43,uVar39);
                      do {
                        lVar40 = lVar40 + 1;
                      } while (lVar40 < (longlong)uVar39);
                    }
                  }
                }
                else if (uVar12 == 1) {
                  *(undefined1 *)puVar26 = *(undefined1 *)pdVar43;
                }
                else if (uVar12 == 2) {
                  *(ushort *)puVar26 = *(ushort *)pdVar43 >> 8 | *(ushort *)pdVar43 << 8;
                }
                else if (uVar12 == 4) {
                  fVar2 = *(float *)pdVar43;
                  *(uint *)puVar26 =
                       (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                       ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18;
                }
                else if (uVar12 == 8) {
                  dVar8 = *pdVar43;
                  *puVar26 = (ulonglong)dVar8 >> 0x38 |
                             ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                             ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                             ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                             ((ulonglong)dVar8 & 0xff000000) << 8 |
                             ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                             ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38;
                }
                if ((uVar18 & 1) != 0) {
                  FUN_144bfbef0(local_2dc8,*local_2da0 >> 7,(ulonglong)uVar23 - (ulonglong)uVar12);
                }
                _Dst = (double *)((longlong)_Dst + local_2dc0);
                pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
                ppdVar33 = (double **)((longlong)ppdVar33 - 1);
              } while (ppdVar33 != (double **)0x0);
              ppdVar33 = (double **)(ulonglong)param_7;
            }
          }
          break;
        case 8:
          uVar36 = *(undefined8 *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(uVar36,local_2d1c);
          uVar19 = 0;
          if (((byte)*puVar14 & 0x1f) == 5) {
            uVar19 = uVar36;
          }
          FUN_144bef800(uVar19,local_2d68);
          uVar36 = *(undefined8 *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(uVar36,local_2d18);
          uVar19 = 0;
          if (((byte)*puVar14 & 0x1f) == 5) {
            uVar19 = uVar36;
          }
          FUN_144bef800(uVar19,&local_2d6c);
          pdVar37 = local_2078;
          if ((local_2d6c >> 8 & 1) == 0) {
            pdVar37 = pdVar43;
          }
          uVar23 = local_2d6c;
          uVar18 = param_9;
          if ((local_2d6c & 0x100) != 0) {
            uVar18 = 8;
            pdVar20 = (double *)((longlong)local_2078 + (longlong)(iVar22 * 8));
            uVar23 = (local_2d6c >> 0xb & 0x1f) + 7 +
                     (local_2d6c >> 10 & 1) + (local_2d6c >> 0x10 & 0xff) >> 3;
            if (uVar23 == 1) {
              for (pdVar27 = local_2078; pdVar27 < pdVar20; pdVar27 = pdVar27 + 1) {
                uVar3 = *(undefined1 *)pdVar43;
                pdVar43 = (double *)((longlong)pdVar43 + lVar40);
                *(undefined1 *)pdVar27 = uVar3;
              }
            }
            else if (uVar23 == 2) {
              for (pdVar27 = local_2078; pdVar27 < pdVar20; pdVar27 = pdVar27 + 1) {
                uVar6 = *(ushort *)pdVar43;
                pdVar43 = (double *)((longlong)pdVar43 + lVar40);
                *(ushort *)pdVar27 = uVar6 >> 8 | uVar6 << 8;
              }
            }
            else if (uVar23 == 4) {
              for (pdVar27 = local_2078; pdVar27 < pdVar20; pdVar27 = pdVar27 + 1) {
                fVar2 = *(float *)pdVar43;
                pdVar43 = (double *)((longlong)pdVar43 + lVar40);
                *(uint *)pdVar27 =
                     (uint)fVar2 >> 0x18 | ((uint)fVar2 & 0xff0000) >> 8 |
                     ((uint)fVar2 & 0xff00) << 8 | (int)fVar2 << 0x18;
              }
            }
            else if (uVar23 == 8) {
              for (pdVar27 = local_2078; pdVar27 < pdVar20; pdVar27 = pdVar27 + 1) {
                dVar8 = *pdVar43;
                pdVar43 = (double *)((longlong)pdVar43 + lVar40);
                *pdVar27 = (double)((ulonglong)dVar8 >> 0x38 |
                                    ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                                    ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                                    ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                                    ((ulonglong)dVar8 & 0xff000000) << 8 |
                                    ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                                    ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
              }
            }
            uVar23 = local_2d6c & 0xfffffeff;
          }
          pdVar43 = local_2078;
          if ((local_2d68[0] >> 8 & 1) == 0) {
            pdVar43 = _Dst;
          }
          uVar41 = param_8;
          if ((local_2d68[0] & 0x100) != 0) {
            uVar41 = 8;
          }
          uVar12 = local_2d68[0] & 0xfffffeff;
          if (uVar23 == 0x74605) {
            if (uVar12 == 0x74605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  uVar5 = *(undefined2 *)pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(undefined2 *)pdVar43 = uVar5;
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if (uVar12 == 0x174605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  sVar4 = *(short *)pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(int *)pdVar43 = (int)sVar4 << 0x10;
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if ((uVar12 == 0x345e05) &&
                    (pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43),
                    pdVar43 < pdVar20)) {
              do {
                sVar4 = *(short *)pdVar37;
                pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                *pdVar43 = (double)(float)((int)sVar4 << 0x10);
                pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
              } while (pdVar43 < pdVar20);
            }
          }
          else if (uVar23 == 0x174605) {
            if (uVar12 == 0x74605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  fVar2 = *(float *)pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(short *)pdVar43 = (short)((uint)(fVar2 * 1.0039062) >> 0x10);
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if (uVar12 == 0x174605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  fVar2 = *(float *)pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(float *)pdVar43 = fVar2;
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if ((uVar12 == 0x345e05) &&
                    (pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43),
                    pdVar43 < pdVar20)) {
              do {
                fVar2 = *(float *)pdVar37;
                pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                *pdVar43 = (double)fVar2;
                pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
              } while (pdVar43 < pdVar20);
            }
          }
          else if (uVar23 == 0x345e05) {
            if (uVar12 == 0x74605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  dVar8 = *pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(short *)pdVar43 = (short)((uint)((float)dVar8 * 1.0039062) >> 0x10);
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if (uVar12 == 0x174605) {
              pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43);
              if (pdVar43 < pdVar20) {
                do {
                  dVar8 = *pdVar37;
                  pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                  *(float *)pdVar43 = (float)dVar8;
                  pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
                } while (pdVar43 < pdVar20);
              }
            }
            else if ((uVar12 == 0x345e05) &&
                    (pdVar20 = (double *)((longlong)(int)(uVar41 * param_7) + (longlong)pdVar43),
                    pdVar43 < pdVar20)) {
              do {
                dVar8 = *pdVar37;
                pdVar37 = (double *)((longlong)pdVar37 + (longlong)(int)uVar18);
                *pdVar43 = dVar8;
                pdVar43 = (double *)((longlong)pdVar43 + (longlong)(int)uVar41);
              } while (pdVar43 < pdVar20);
            }
          }
          uVar21 = (ulonglong)param_8;
          ppdVar33 = (double **)(ulonglong)param_7;
          if ((local_2d68[0] & 0x100) != 0) {
            pdVar43 = local_2078;
            pdVar37 = (double *)((longlong)(int)(param_7 * param_8) + (longlong)_Dst);
            uVar18 = (local_2d68[0] >> 0xb & 0x1f) + 7 +
                     (local_2d68[0] >> 10 & 1) + (local_2d68[0] >> 0x10 & 0xff) >> 3;
            if (uVar18 == 1) {
              pdVar43 = local_2078;
              for (; _Dst < pdVar37; _Dst = (double *)((longlong)_Dst + uVar39)) {
                uVar3 = *(undefined1 *)pdVar43;
                pdVar43 = pdVar43 + 1;
                *(undefined1 *)_Dst = uVar3;
              }
            }
            else if (uVar18 == 2) {
              for (; _Dst < pdVar37; _Dst = (double *)((longlong)_Dst + uVar39)) {
                uVar6 = *(ushort *)pdVar43;
                pdVar43 = pdVar43 + 1;
                *(ushort *)_Dst = uVar6 >> 8 | uVar6 << 8;
              }
            }
            else if (uVar18 == 4) {
              for (; _Dst < pdVar37; _Dst = (double *)((longlong)_Dst + uVar39)) {
                uVar18 = *(uint *)pdVar43;
                pdVar43 = pdVar43 + 1;
                *(uint *)_Dst =
                     uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                     uVar18 << 0x18;
              }
            }
            else if (uVar18 == 8) {
              for (; _Dst < pdVar37; _Dst = (double *)((longlong)_Dst + uVar39)) {
                dVar8 = *pdVar43;
                pdVar43 = pdVar43 + 1;
                *_Dst = (double)((ulonglong)dVar8 >> 0x38 |
                                 ((ulonglong)dVar8 & 0xff000000000000) >> 0x28 |
                                 ((ulonglong)dVar8 & 0xff0000000000) >> 0x18 |
                                 ((ulonglong)dVar8 & 0xff00000000) >> 8 |
                                 ((ulonglong)dVar8 & 0xff000000) << 8 |
                                 ((ulonglong)dVar8 & 0xff0000) << 0x18 |
                                 ((ulonglong)dVar8 & 0xff00) << 0x28 | (longlong)dVar8 << 0x38);
              }
            }
          }
          goto switchD_144c20acd_default;
        case 9:
          FUN_144beec90(*(undefined8 *)(lVar42 + 0x18));
          FUN_144beec90(*(undefined8 *)(lVar42 + 0x20));
          uVar36 = *(undefined8 *)(lVar42 + 0x20);
          iVar22 = FUN_144beec90(*(undefined8 *)(lVar42 + 0x18));
          iVar13 = FUN_144beec90(uVar36);
          uVar21 = (ulonglong)param_8;
          pdVar37 = (double *)((longlong)(int)(param_7 * param_8) + (longlong)_Dst);
          for (; _Dst < pdVar37; _Dst = (double *)((longlong)_Dst + uVar39)) {
            if (iVar22 == 1) {
              bVar44 = *(char *)pdVar43 == '\0';
            }
            else if (iVar22 == 2) {
              bVar44 = *(short *)pdVar43 == 0;
            }
            else if (iVar22 == 4) {
              bVar44 = *(float *)pdVar43 == 0.0;
            }
            else {
              bVar44 = *pdVar43 == 0.0;
            }
            bVar44 = !bVar44;
            if (iVar13 == 1) {
              *(bool *)_Dst = bVar44;
            }
            else if (iVar13 == 2) {
              *(ushort *)_Dst = (ushort)bVar44;
            }
            else if (iVar13 == 4) {
              *(uint *)_Dst = (uint)bVar44;
            }
            else {
              *_Dst = (double)(ulonglong)bVar44;
            }
            pdVar43 = (double *)((longlong)pdVar43 + lVar40);
          }
          ppdVar33 = (double **)(ulonglong)param_7;
          goto switchD_144c20acd_default;
        case 10:
          FUN_144beec90(*(undefined8 *)(lVar42 + 0x18));
          FUN_144beec90(*(undefined8 *)(lVar42 + 0x20));
          local_2de0 = *(longlong *)(lVar42 + 0x20);
          lVar42 = *(longlong *)(lVar42 + 0x18);
          if (local_2de0 == 0) {
            local_2dd8 = (longlong *)0x0;
            local_2de8 = _Dst;
          }
          else {
            local_2de8 = _Dst;
            local_2dd8 = (longlong *)FUN_144befdb0();
          }
          if (((ulonglong)local_2dd8 & 1) != 0) {
            FUN_144be6b20();
          }
          local_2db0 = lVar42;
          if (lVar42 == 0) {
            local_2da8 = (longlong *)0x0;
            local_2db8 = pdVar43;
          }
          else {
            local_2db8 = pdVar43;
            local_2da8 = (longlong *)FUN_144befdb0(lVar42);
          }
          if (((ulonglong)local_2da8 & 1) != 0) {
            FUN_144be6b20((ulonglong)local_2da8 & 0xfffffffffffffffe);
          }
          if (0 < iVar22) {
            do {
              FUN_144f685c0(param_2,&local_2de8,&local_2db8);
              local_2de8 = (double *)((longlong)local_2de8 + uVar39);
              plVar15 = (longlong *)((ulonglong)local_2dd8 & 0xfffffffffffffffe);
              if (((ulonglong)local_2dd8 & 1) != 0) {
                uVar21 = (ulonglong)local_2dd8 & 0xfffffffffffffffe;
                local_2dd8 = (longlong *)((ulonglong)local_2dd8 & 0xfffffffffffffffe);
                FUN_144be6b30(uVar21);
                plVar15 = local_2dd8;
              }
              local_2dd8 = plVar15;
              local_2db8 = (double *)((longlong)local_2db8 + lVar40);
              plVar15 = (longlong *)((ulonglong)local_2da8 & 0xfffffffffffffffe);
              if (((ulonglong)local_2da8 & 1) != 0) {
                uVar21 = (ulonglong)local_2da8 & 0xfffffffffffffffe;
                local_2da8 = (longlong *)((ulonglong)local_2da8 & 0xfffffffffffffffe);
                FUN_144be6b30(uVar21);
                plVar15 = local_2da8;
              }
              local_2da8 = plVar15;
              ppdVar33 = (double **)((longlong)ppdVar33 - 1);
            } while (ppdVar33 != (double **)0x0);
            ppdVar33 = (double **)(ulonglong)param_7;
          }
          plVar15 = local_2dd8;
          if (((ulonglong)local_2da8 & 1) != 0) {
            FUN_144be6b30((ulonglong)local_2da8 & 0xfffffffffffffffe);
            plVar15 = local_2dd8;
          }
          goto joined_r0x000144c20ce7;
        case 0xb:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cf0);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 8) {
            lVar32 = lVar40;
          }
          puVar14 = (undefined4 *)FUN_144bef800(lVar32,local_2cec);
          local_2de0 = 0;
          if (((byte)*puVar14 & 0x1f) == 8) {
            local_2de0 = lVar32;
          }
          if (local_2de0 == 0) {
            plVar15 = (longlong *)0x0;
            local_2de8 = _Dst;
          }
          else {
            local_2de8 = _Dst;
            plVar15 = (longlong *)FUN_144befdb0();
          }
          local_2dd8 = plVar15;
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2ce8);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 8) {
            lVar42 = lVar40;
          }
          local_2db0 = lVar42;
          if (lVar42 == 0) {
            plVar16 = (longlong *)0x0;
            local_2db8 = pdVar43;
          }
          else {
            local_2db8 = pdVar43;
            plVar16 = (longlong *)FUN_144befdb0(lVar42);
          }
          local_2da8 = plVar16;
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          uVar18 = param_7;
          ppdVar33 = (double **)(ulonglong)param_7;
          iVar22 = *(int *)(param_2 + 0x298) + param_7;
          if ((int)(*(uint *)(param_2 + 0x29c) & 0x7fffffff) < iVar22) {
            FUN_144c22af0(param_2 + 0x290,&PTR_vftable_14c6e47a0,(longlong)iVar22);
          }
          plVar31 = plVar15;
          plVar34 = plVar16;
          if (0 < (int)uVar18) {
            do {
              local_2dc8 = ppdVar33;
              local_2d48 = 0;
              local_2d58 = (double *)0x0;
              lStack_2d50 = 0;
              local_2d40 = (double *)0x0;
              plVar34 = (longlong *)((ulonglong)plVar16 & 0xfffffffffffffffe);
              (**(code **)(*plVar34 + 0x48))(plVar34,local_2ce4,pdVar43,lVar42,&local_2d58);
              if (((int)local_2d48 == 0) &&
                 ((lStack_2d50 == 0 || (FUN_144beff00(lVar42,&local_2cc8), 1 < local_2cc8)))) {
                uVar36 = 0;
              }
              else {
                uVar36 = 1;
              }
              in_stack_ffffffffffffd1d8 = &local_2db8;
              FUN_144c1a680(param_2,&DAT_149992d88,uVar36,&local_2de8,in_stack_ffffffffffffd1d8);
              if (((ulonglong)local_2d40 & 1) != 0) {
                FUN_144be6b30((ulonglong)local_2d40 & 0xfffffffffffffffe);
              }
              _Dst = (double *)((longlong)_Dst + uVar39);
              plVar15 = (longlong *)((ulonglong)plVar31 & 0xfffffffffffffffe);
              local_2de8 = _Dst;
              if (((ulonglong)plVar31 & 1) != 0) {
                FUN_144be6b30(plVar15);
              }
              pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
              if (((ulonglong)plVar16 & 1) != 0) {
                local_2dd8 = plVar15;
                local_2db8 = pdVar43;
                FUN_144be6b30(plVar34);
              }
              uVar39 = local_2dc0;
              plVar31 = plVar15;
              plVar16 = plVar34;
              local_2de8 = _Dst;
              local_2dd8 = plVar15;
              ppdVar33 = (double **)((longlong)local_2dc8 - 1U);
              local_2db8 = pdVar43;
              local_2da8 = plVar34;
            } while ((double **)((longlong)local_2dc8 - 1U) != (double **)0x0);
            ppdVar33 = (double **)(ulonglong)param_7;
            local_2dc8 = (double **)0x0;
          }
          if (((ulonglong)plVar34 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar34 & 0xfffffffffffffffe);
          }
joined_r0x000144c20ce7:
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          break;
        case 0xc:
          lVar40 = *(longlong *)(lVar42 + 0x20);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cfc);
          lVar32 = 0;
          if (((byte)*puVar14 & 0x1f) == 7) {
            lVar32 = lVar40;
          }
          puVar14 = (undefined4 *)FUN_144bef800(lVar32,local_2cf8);
          lVar40 = 0;
          if (((byte)*puVar14 & 0x1f) == 7) {
            lVar40 = lVar32;
          }
          if (lVar40 == 0) {
            plVar15 = (longlong *)0x0;
          }
          else {
            plVar15 = (longlong *)FUN_144befdb0();
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          lVar40 = *(longlong *)(lVar42 + 0x18);
          puVar14 = (undefined4 *)FUN_144bef800(lVar40,local_2cf4);
          lVar42 = 0;
          if (((byte)*puVar14 & 0x1f) == 7) {
            lVar42 = lVar40;
          }
          if (lVar42 == 0) {
            plVar16 = (longlong *)0x0;
          }
          else {
            plVar16 = (longlong *)FUN_144befdb0();
          }
          bVar29 = (byte)plVar16;
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b20((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          if ((int)param_7 < 1) goto LAB_144c21e3a;
          cVar11 = FUN_144f634e0(&DAT_149992cf8,"Not implemented");
          if (cVar11 != '\0') {
            pcVar9 = (code *)swi(3);
            piVar17 = (int *)(*pcVar9)();
            return piVar17;
          }
          *param_1 = -0x7ffbfe00;
          if (((ulonglong)plVar16 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar16 & 0xfffffffffffffffe);
          }
          if (((ulonglong)plVar15 & 1) != 0) {
            FUN_144be6b30((ulonglong)plVar15 & 0xfffffffffffffffe);
          }
          puVar10 = local_2c88;
          puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6;
          while (puVar26 != puVar10) {
            puVar26 = puVar26 + -6;
            FUN_144c1a3b0(puVar26);
          }
          goto LAB_144c222e8;
        case 0xd:
          uVar18 = *(uint *)(lVar42 + 0x18);
          _Size = (size_t)(int)uVar18;
          if ((uVar18 == (uint)uVar21) && (uVar18 == param_9)) {
            FUN_144bfbed0(_Dst,pdVar43,(longlong)(int)(uVar18 * iVar22));
          }
          else {
            if ((int)param_7 < 1) {
              ppdVar33 = (double **)(ulonglong)param_7;
              goto switchD_144c20acd_default;
            }
            uVar39 = (ulonglong)param_7;
            do {
              if ((((int)uVar18 < 1) || (uVar18 < 0x10)) ||
                 ((_Dst <= (double *)((longlong)pdVar43 + (longlong)(int)(uVar18 - 1)) &&
                  (pdVar43 <= (double *)((longlong)_Dst + (longlong)(int)(uVar18 - 1)))))) {
                if (0 < (longlong)_Size) {
                  pdVar37 = _Dst;
                  sVar28 = _Size;
                  do {
                    *(undefined1 *)pdVar37 =
                         *(undefined1 *)(((longlong)pdVar43 - (longlong)_Dst) + (longlong)pdVar37);
                    pdVar37 = (double *)((longlong)pdVar37 + 1);
                    sVar28 = sVar28 - 1;
                  } while (sVar28 != 0);
                }
              }
              else {
                memcpy(_Dst,pdVar43,_Size);
              }
              _Dst = (double *)((longlong)_Dst + local_2dc0);
              pdVar43 = (double *)((longlong)pdVar43 + lVar40);
              uVar39 = uVar39 - 1;
            } while (uVar39 != 0);
            ppdVar33 = (double **)(ulonglong)param_7;
          }
          break;
        default:
          goto switchD_144c20acd_default;
        }
        uVar21 = (ulonglong)param_8;
switchD_144c20acd_default:
        local_2d98 = local_2d98 + 1;
        uVar39 = local_2dc0;
        lVar40 = local_2dd0;
      }
      local_2d94 = local_2d94 + iVar22;
    } while (local_2d94 < param_10);
  }
  puVar35 = local_2c88 + (longlong)(int)local_2c80 * 6;
  puVar26 = local_2c88;
  puVar10 = local_2c88;
joined_r0x000144c224c9:
  local_2c88 = puVar10;
  if (puVar26 != puVar35) {
    piVar17 = (int *)FUN_144c1a820(param_2,&param_10,puVar26,puVar26 + 3);
    puVar10 = local_2c88;
    if (-1 < *piVar17) goto code_r0x000144c224f0;
    *param_1 = *piVar17;
    if (local_2c88 + (longlong)(int)local_2c80 * 6 != local_2c88) {
      puVar26 = local_2c88 + (longlong)(int)local_2c80 * 6 + 2;
      do {
        puVar35 = puVar26 + -6;
        if ((puVar26[-3] & 1) != 0) {
          FUN_144be6b30(puVar26[-3] & 0xfffffffffffffffe);
        }
        if ((*puVar35 & 1) != 0) {
          FUN_144be6b30(*puVar35 & 0xfffffffffffffffe);
        }
        puVar1 = puVar26 + -8;
        puVar26 = puVar35;
      } while (puVar1 != puVar10);
    }
LAB_144c222e8:
    if ((int)local_2c7c < 0) {
      return param_1;
    }
    goto LAB_144c2257c;
  }
  *param_1 = 0;
  if (puVar10 + (longlong)(int)local_2c80 * 6 != puVar10) {
    puVar26 = puVar10 + (longlong)(int)local_2c80 * 6 + 2;
    do {
      puVar35 = puVar26 + -6;
      if ((puVar26[-3] & 1) != 0) {
        FUN_144be6b30(puVar26[-3] & 0xfffffffffffffffe);
      }
      if ((*puVar35 & 1) != 0) {
        FUN_144be6b30(*puVar35 & 0xfffffffffffffffe);
      }
      puVar1 = puVar26 + -8;
      puVar26 = puVar35;
    } while (puVar1 != puVar10);
  }
  if (-1 < (int)local_2c7c) {
LAB_144c2257c:
    local_2c80 = 0;
    if (local_2c88 != (ulonglong *)0x0) {
      (**(code **)(PTR_vftable_14c6e47c0 + 0x18))
                (&PTR_vftable_14c6e47c0,local_2c88,(ulonglong)(local_2c7c & 0x7fffffff) * 0x30);
    }
  }
  return param_1;
code_r0x000144c21155:
  _Dst = (double *)((longlong)_Dst + local_2dc0);
  if (((ulonglong)local_2df0 & 1) != 0) {
    FUN_144be6b30(plVar31);
  }
  pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
  if (((ulonglong)plVar16 & 1) != 0) {
    local_2dd8 = plVar31;
    FUN_144be6b30(plVar15);
  }
  param_5 = param_5 + 1;
  plVar16 = plVar15;
  local_2df0 = plVar31;
  local_2dd8 = plVar15;
  if ((int)param_7 <= (int)param_5) goto LAB_144c20e8f;
  goto LAB_144c21100;
code_r0x000144c20fdb:
  _Dst = (double *)((longlong)_Dst + local_2dc0);
  if (((ulonglong)local_2df0 & 1) != 0) {
    FUN_144be6b30(plVar31);
  }
  pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
  if (((ulonglong)plVar16 & 1) != 0) {
    local_2dd8 = plVar31;
    FUN_144be6b30(plVar15);
  }
  param_5 = param_5 + 1;
  plVar16 = plVar15;
  local_2df0 = plVar31;
  local_2dd8 = plVar15;
  if ((int)param_7 <= (int)param_5) goto LAB_144c20e8f;
  goto LAB_144c20f63;
code_r0x000144c20e2b:
  _Dst = (double *)((longlong)_Dst + local_2dc0);
  if (((ulonglong)local_2df0 & 1) != 0) {
    FUN_144be6b30(plVar31);
  }
  pdVar43 = (double *)((longlong)pdVar43 + local_2dd0);
  if (((ulonglong)plVar16 & 1) != 0) {
    local_2dd8 = plVar31;
    FUN_144be6b30(plVar15);
  }
  iVar22 = (int)local_2da0 + 1;
  local_2da0 = (char *)CONCAT44(local_2da0._4_4_,iVar22);
  plVar16 = plVar15;
  local_2df0 = plVar31;
  local_2dd8 = plVar15;
  if ((int)param_7 <= iVar22) goto LAB_144c20e8f;
  goto LAB_144c20dd0;
code_r0x000144c224f0:
  puVar26 = puVar26 + 6;
  goto joined_r0x000144c224c9;
}



// FUNCTION 144c22670 FUN_144c22670 body=123 status=ok
// SIG undefined FUN_144c22670(void)

undefined8 * FUN_144c22670(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  DAT_14c6e49c0 = 1;
  local_res8 = 0x20;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"TagfileWriteFormat");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144c19ed0(lVar1);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c226f0 FUN_144c226f0 body=149 status=ok
// SIG undefined FUN_144c226f0(void)

longlong * FUN_144c226f0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144c22830(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_144c238a0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 8;
  return param_2;
}



// FUNCTION 144c22790 FUN_144c22790 body=148 status=ok
// SIG undefined FUN_144c22790(void)

longlong * FUN_144c22790(longlong *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  int local_res8 [2];
  
  FUN_144c22fa0(param_1,local_res8);
  iVar3 = (int)param_1[1];
  bVar4 = local_res8[0] == iVar3;
  if (bVar4) {
    iVar3 = iVar3 + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
      FUN_141807aa8(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
    }
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)param_1[1] * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    *(int *)(param_1 + 1) = iVar3;
  }
  lVar2 = *param_1;
  *(bool *)(param_2 + 1) = bVar4;
  *param_2 = lVar2 + (longlong)local_res8[0] * 4;
  return param_2;
}



// FUNCTION 144c22830 FUN_144c22830 body=288 status=ok
// SIG undefined FUN_144c22830(void)

int * FUN_144c22830(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = 0xffffffff;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  uVar6 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar6)) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar6 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  if (*param_3 != 0) {
    uVar5 = FUN_144bea740();
    uVar7 = (ulonglong)uVar5;
  }
  iVar8 = *(int *)(param_1[2] + 4 + (uVar7 & *(uint *)(param_1 + 3)) * 8);
  piVar1 = (int *)(param_1[2] + (uVar7 & *(uint *)(param_1 + 3)) * 8);
  do {
    if (iVar8 < 0) {
      lVar2 = param_1[1];
      *piVar1 = (int)uVar7;
      piVar1[1] = (int)lVar2;
      iVar8 = (int)param_1[1];
LAB_144c22920:
      param_2[1] = (int)((longlong)piVar1 - param_1[2] >> 3);
      *param_2 = iVar8;
      return param_2;
    }
    if (*piVar1 == (int)uVar7) {
      lVar2 = *(longlong *)(*param_1 + (longlong)piVar1[1] * 8);
      if ((lVar2 == *param_3) ||
         (((lVar2 != 0 && (*param_3 != 0)) && (iVar8 = FUN_144bfb930(), iVar8 == 0)))) {
        iVar8 = piVar1[1];
        goto LAB_144c22920;
      }
    }
    lVar2 = param_1[2];
    uVar6 = ((longlong)piVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar8 = *(int *)(lVar2 + 4 + uVar6 * 8);
    piVar1 = (int *)(lVar2 + uVar6 * 8);
  } while( true );
}



// FUNCTION 144c22950 FUN_144c22950 body=250 status=ok
// SIG undefined FUN_144c22950(void)

void FUN_144c22950(longlong param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uStack_3c;
  
  uVar7 = (ulonglong)param_2;
  uVar8 = uVar7;
  do {
    uVar10 = uVar8 & 0xffffffff;
    uVar2 = *(undefined8 *)(param_1 + ((longlong)((int)uVar8 + param_3) >> 1) * 8);
    uStack_3c = (uint)((ulonglong)uVar2 >> 0x20);
    uVar6 = (longlong)param_3;
    iVar5 = param_3;
    do {
      while( true ) {
        uVar1 = *(uint *)(param_1 + uVar7 * 8);
        uVar4 = (uint)uVar2;
        uVar9 = (uint)uVar10;
        if ((uVar4 <= uVar1) &&
           ((uVar1 != uVar4 || (uStack_3c <= *(uint *)(param_1 + 4 + uVar7 * 8))))) break;
        uVar10 = (ulonglong)(uVar9 + 1);
        uVar7 = uVar7 + 1;
      }
      while( true ) {
        uVar1 = *(uint *)(param_1 + uVar6 * 8);
        if ((uVar1 <= uVar4) &&
           ((uVar4 != uVar1 || (*(uint *)(param_1 + 4 + uVar6 * 8) <= uStack_3c)))) break;
        iVar5 = iVar5 + -1;
        uVar6 = uVar6 - 1;
      }
      if ((longlong)uVar6 < (longlong)uVar7) break;
      if (uVar6 != uVar7) {
        uVar3 = *(undefined8 *)(param_1 + uVar6 * 8);
        *(undefined8 *)(param_1 + uVar6 * 8) = *(undefined8 *)(param_1 + uVar7 * 8);
        *(undefined8 *)(param_1 + uVar7 * 8) = uVar3;
      }
      iVar5 = iVar5 + -1;
      uVar6 = uVar6 - 1;
      uVar9 = uVar9 + 1;
      uVar10 = (ulonglong)uVar9;
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 <= (longlong)uVar6);
    if ((int)uVar8 < iVar5) {
      FUN_144c22950(param_1,uVar8 & 0xffffffff,iVar5,param_4);
    }
    if (param_3 <= (int)uVar9) {
      return;
    }
    uVar8 = (ulonglong)uVar9;
  } while( true );
}



// FUNCTION 144c22a50 FUN_144c22a50 body=146 status=ok
// SIG undefined FUN_144c22a50(void)

int * FUN_144c22a50(longlong *param_1,int *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  
  FUN_144c230a0();
  if (*param_2 == (int)param_1[1]) {
    iVar2 = (int)param_1[1] + 1;
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar2) {
      FUN_144c23ae0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 0xc);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = *param_3;
      *(undefined4 *)(puVar1 + 1) = *param_4;
    }
    *(int *)(param_1 + 1) = iVar2;
  }
  return param_2;
}



// FUNCTION 144c22af0 FUN_144c22af0 body=347 status=ok
// SIG undefined FUN_144c22af0(void)

void FUN_144c22af0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar8) {
    uVar7 = uVar8;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x20;
  lVar3 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined8 *)*param_1;
  uVar8 = (ulonglong)uVar1;
  if (0 < (int)uVar1) {
    puVar4 = (undefined8 *)(lVar3 + 0x10);
    uVar9 = (ulonglong)uVar1;
    puVar5 = puVar2;
    do {
      if (puVar4 + -2 != (undefined8 *)0x0) {
        puVar4[-2] = *puVar5;
        puVar4[-1] = puVar5[1];
        *puVar4 = puVar5[2];
        puVar5[2] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar5 + 3);
      }
      puVar4 = puVar4 + 4;
      puVar5 = puVar5 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
    puVar6 = puVar2 + 2;
    do {
      if ((*puVar6 & 1) != 0) {
        FUN_144be6b30(*puVar6 & 0xfffffffffffffffe);
      }
      puVar6 = puVar6 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  uVar8 = uVar7 * 0x20 + 0x20;
  uVar9 = uVar7;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x20;
    uVar9 = uVar7 + 1;
    if (uVar8 <= local_res8) {
      uVar9 = uVar9 + (local_res8 + uVar7 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar3;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return;
}



// FUNCTION 144c22c50 FUN_144c22c50 body=258 status=ok
// SIG undefined FUN_144c22c50(void)

void FUN_144c22c50(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar7 * 0x10;
  puVar4 = (undefined4 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c22d60 FUN_144c22d60 body=294 status=ok
// SIG undefined FUN_144c22d60(void)

int * FUN_144c22d60(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  iVar8 = (int)param_1[1] + 1;
  uVar7 = 0xffffffff;
  if ((iVar8 < 0) || (0xffffffff < (ulonglong)((longlong)iVar8 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar6 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar6)) {
    bVar3 = 0;
  }
  else {
    bVar3 = 1;
  }
  if (((bool)(bVar4 & bVar3)) && ((uint)uVar6 < (uint)((longlong)iVar8 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar8);
  }
  if (*param_3 != 0) {
    uVar5 = FUN_144bea740();
    uVar7 = (ulonglong)uVar5;
  }
  iVar8 = *(int *)(param_1[2] + 4 + (*(uint *)(param_1 + 3) & uVar7) * 8);
  piVar1 = (int *)(param_1[2] + (*(uint *)(param_1 + 3) & uVar7) * 8);
  do {
    if (iVar8 < 0) {
      lVar2 = param_1[1];
      *piVar1 = (int)uVar7;
      piVar1[1] = (int)lVar2;
      iVar8 = (int)param_1[1];
LAB_144c22e56:
      param_2[1] = (int)((longlong)piVar1 - param_1[2] >> 3);
      *param_2 = iVar8;
      return param_2;
    }
    if (*piVar1 == (int)uVar7) {
      if ((*(ulonglong *)(*param_1 + (longlong)piVar1[1] * 0x10) & 0xfffffffffffffffe) == 0) {
        iVar8 = -(uint)(*param_3 != 0);
      }
      else {
        if (*param_3 == 0) goto LAB_144c22e29;
        iVar8 = FUN_144bfb930();
      }
      if (iVar8 == 0) {
        iVar8 = piVar1[1];
        goto LAB_144c22e56;
      }
    }
LAB_144c22e29:
    lVar2 = param_1[2];
    uVar6 = ((longlong)piVar1 - lVar2 >> 3) + 1U & (longlong)(int)param_1[3];
    iVar8 = *(int *)(lVar2 + 4 + uVar6 * 8);
    piVar1 = (int *)(lVar2 + uVar6 * 8);
  } while( true );
}



// FUNCTION 144c22e90 FUN_144c22e90 body=266 status=ok
// SIG undefined FUN_144c22e90(void)

void FUN_144c22e90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c22fa0 FUN_144c22fa0 body=253 status=ok
// SIG undefined FUN_144c22fa0(void)

uint * FUN_144c22fa0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  
  iVar9 = (int)param_1[1] + 1;
  if ((iVar9 < 0) || (0xffffffff < (ulonglong)((longlong)iVar9 * 3))) {
    bVar4 = 0;
  }
  else {
    bVar4 = 1;
  }
  uVar8 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  if (((bool)(bVar5 & bVar4)) && ((uint)uVar8 < (uint)((longlong)iVar9 * 3))) {
    FUN_144b2eb80(param_1 + 2,iVar9);
  }
  iVar9 = *param_3;
  lVar3 = param_1[2];
  uVar7 = iVar9 * -0x61c8864f;
  uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar8 = (ulonglong)(uVar7 & *(uint *)(param_1 + 3));
  iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar6 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar1 < 0) {
      uVar2 = *(uint *)(param_1 + 1);
      *puVar6 = uVar7;
      puVar6[1] = uVar2;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c23075:
      param_2[1] = (uint)((longlong)puVar6 - lVar3 >> 3);
      return param_2;
    }
    if ((*puVar6 == uVar7) && (*(int *)(*param_1 + (longlong)(int)puVar6[1] * 4) == iVar9)) {
      *param_2 = puVar6[1];
      goto LAB_144c23075;
    }
    uVar8 = ((longlong)puVar6 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar1 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144c230a0 FUN_144c230a0 body=309 status=ok
// SIG undefined FUN_144c230a0(void)

uint * FUN_144c230a0(longlong *param_1,uint *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  byte bVar6;
  uint *puVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  iVar9 = (int)param_1[1] + 1;
  uVar8 = (longlong)iVar9 * 3;
  if ((iVar9 < 0) || (0xffffffff < uVar8)) {
    bVar5 = 0;
  }
  else {
    bVar5 = 1;
  }
  uVar4 = (longlong)(int)param_1[3] * 2;
  if (((int)param_1[3] < 0) || (0xffffffff < uVar4)) {
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  if (((bool)(bVar6 & bVar5)) && ((uint)uVar4 < (uint)uVar8)) {
    FUN_144b2eb80(param_1 + 2);
  }
  iVar9 = *param_3;
  iVar1 = param_3[1];
  lVar3 = param_1[2];
  uVar11 = iVar9 * -0x61c8864f;
  uVar10 = iVar1 * -0x61c8864f;
  uVar11 = uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | iVar9 * -0x4f000000;
  uVar10 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar11 = (uVar10 >> 2) + uVar10 + uVar11 * 0x40 + -0x61c88647 ^ uVar11;
  uVar8 = (ulonglong)(*(uint *)(param_1 + 3) & uVar11);
  iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  do {
    puVar7 = (uint *)(lVar3 + uVar8 * 8);
    if (iVar2 < 0) {
      uVar10 = *(uint *)(param_1 + 1);
      *puVar7 = uVar11;
      puVar7[1] = uVar10;
      lVar3 = param_1[2];
      *param_2 = *(uint *)(param_1 + 1);
LAB_144c231aa:
      param_2[1] = (uint)((longlong)puVar7 - lVar3 >> 3);
      return param_2;
    }
    if (*puVar7 == uVar11) {
      uVar10 = puVar7[1];
      if ((*(int *)(*param_1 + (longlong)(int)uVar10 * 0xc) == iVar9) &&
         (*(int *)(*param_1 + 4 + (longlong)(int)uVar10 * 0xc) == iVar1)) {
        *param_2 = uVar10;
        goto LAB_144c231aa;
      }
    }
    uVar8 = ((longlong)puVar7 - lVar3 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar3 + 4 + uVar8 * 8);
  } while( true );
}



// FUNCTION 144c231e0 FUN_144c231e0 body=259 status=ok
// SIG undefined FUN_144c231e0(void)

void FUN_144c231e0(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  uVar6 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar6) {
    uVar3 = uVar6;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  puVar1 = (undefined8 *)
           (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc))
  ;
  puVar5 = (undefined8 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    uVar6 = (ulonglong)*(uint *)(param_1 + 1);
    puVar2 = puVar1;
    do {
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = *puVar5;
      }
      puVar2 = puVar2 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar6 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar6 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = puVar1;
  return;
}



// FUNCTION 144c232f0 FUN_144c232f0 body=483 status=ok
// SIG undefined FUN_144c232f0(void)

ulonglong FUN_144c232f0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  longlong local_res10;
  ulonglong *local_res18;
  ulonglong local_res20;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar10 = param_3;
  if (param_3 < uVar5) {
    uVar10 = uVar5;
  }
  local_res10 = param_2;
  if ((0x7ffffffe < uVar10) && (uVar10 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar5 = uVar10 * 0x30;
  local_res8 = uVar5;
  local_res20 = uVar5;
  lVar4 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  uVar1 = *(uint *)(param_1 + 1);
  puVar7 = (ulonglong *)*param_1;
  uVar8 = (ulonglong)uVar1;
  local_res18 = puVar7;
  if (0 < (int)uVar1) {
    puVar6 = (ulonglong *)(lVar4 + 0x28);
    uVar5 = (ulonglong)uVar1;
    puVar9 = puVar7 + 5;
    do {
      if (puVar6 + -5 != (ulonglong *)0x0) {
        puVar6[-5] = *puVar7;
        puVar6[-4] = puVar9[-4];
        uVar2 = puVar9[-3];
        puVar6[-3] = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
        puVar6[-2] = puVar9[-2];
        puVar6[-1] = puVar9[-1];
        uVar2 = *puVar9;
        *puVar6 = uVar2;
        if ((uVar2 & 1) != 0) {
          FUN_144be6b20(uVar2 & 0xfffffffffffffffe);
        }
      }
      puVar6 = puVar6 + 6;
      puVar7 = puVar7 + 6;
      puVar9 = puVar9 + 6;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    puVar7 = local_res18 + 2;
    do {
      if ((puVar7[3] & 1) != 0) {
        FUN_144be6b30(puVar7[3] & 0xfffffffffffffffe);
      }
      if ((*puVar7 & 1) != 0) {
        FUN_144be6b30(*puVar7 & 0xfffffffffffffffe);
      }
      puVar7 = puVar7 + 6;
      uVar8 = uVar8 - 1;
      uVar5 = local_res20;
      param_2 = local_res10;
    } while (uVar8 != 0);
  }
  uVar8 = uVar5 + 0x30;
  if (uVar8 <= local_res8) {
    local_res8 = local_res8 - 0x30;
    uVar10 = uVar10 + 1;
    if (uVar8 <= local_res8) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_res8 - uVar5;
      uVar8 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar3,0);
      uVar10 = uVar10 + (local_res8 - uVar5) / 0x30;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar8 = (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *param_1 = lVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar10;
  return uVar8;
}



// FUNCTION 144c234e0 FUN_144c234e0 body=289 status=ok
// SIG undefined FUN_144c234e0(void)

ulonglong FUN_144c234e0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0xc,&local_res8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 144c23610 FUN_144c23610 body=266 status=ok
// SIG undefined FUN_144c23610(void)

void FUN_144c23610(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong local_res8;
  
  uVar10 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar9 = uVar10 * 2;
  uVar7 = param_3;
  if (param_3 < uVar9) {
    uVar7 = uVar9;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar4 = (undefined4 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar9 = (ulonglong)*(uint *)(param_1 + 1);
  puVar6 = (undefined4 *)*param_1;
  puVar5 = puVar4;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        uVar1 = puVar6[1];
        uVar2 = puVar6[2];
        uVar3 = puVar6[3];
        *puVar5 = *puVar6;
        puVar5[1] = uVar1;
        puVar5[2] = uVar2;
        puVar5[3] = uVar3;
      }
      puVar5 = puVar5 + 4;
      puVar6 = puVar6 + 4;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  uVar9 = uVar7 * 0x10 + 0x10;
  uVar8 = uVar7;
  if (uVar9 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar8 = uVar7 + 1;
    if (uVar9 <= local_res8) {
      uVar8 = uVar8 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar10 << 4);
  }
  *param_1 = puVar4;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar8;
  return;
}



// FUNCTION 144c23720 FUN_144c23720 body=308 status=ok
// SIG undefined FUN_144c23720(void)

ulonglong FUN_144c23720(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong local_res8;
  
  uVar11 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar10 = uVar11 * 2;
  uVar8 = param_3;
  if (param_3 < uVar10) {
    uVar8 = uVar10;
  }
  if ((0x7ffffffe < uVar8) && (uVar8 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  lVar5 = (**(code **)(*param_2 + 0x10))(param_2,uVar8 * 0x18,&local_res8);
  puVar7 = (undefined4 *)*param_1;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    puVar6 = (undefined1 *)(lVar5 + 0x14);
    uVar10 = (ulonglong)*(uint *)(param_1 + 1);
    do {
      if ((undefined4 *)(puVar6 + -0x14) != (undefined4 *)0x0) {
        uVar2 = puVar7[1];
        uVar3 = puVar7[2];
        uVar4 = puVar7[3];
        *(undefined4 *)(puVar6 + -0x14) = *puVar7;
        *(undefined4 *)(puVar6 + -0x10) = uVar2;
        *(undefined4 *)(puVar6 + -0xc) = uVar3;
        *(undefined4 *)(puVar6 + -8) = uVar4;
        *puVar6 = 0;
        if (*(char *)(puVar7 + 5) != '\0') {
          *(undefined4 *)(puVar6 + -4) = puVar7[4];
          *puVar6 = 1;
        }
      }
      puVar6 = puVar6 + 0x18;
      puVar7 = puVar7 + 6;
      uVar10 = uVar10 - 1;
    } while (uVar10 != 0);
  }
  uVar10 = uVar8 * 0x18 + 0x18;
  uVar9 = uVar8;
  if (uVar10 <= local_res8) {
    local_res8 = local_res8 - 0x18;
    uVar9 = uVar8 + 1;
    if (uVar10 <= local_res8) {
      uVar8 = local_res8 + uVar8 * -0x18;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar8;
      uVar10 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar9 = uVar9 + uVar8 / 0x18;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar10 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar11 * 0x18);
  }
  *param_1 = lVar5;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar9;
  return uVar10;
}



// FUNCTION 144c23860 FUN_144c23860 body=32 status=ok
// SIG undefined FUN_144c23860(void)

undefined8 FUN_144c23860(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c23880 FUN_144c23880 body=32 status=ok
// SIG undefined FUN_144c23880(void)

undefined8 FUN_144c23880(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_144f50c70(param_1,local_res10);
  return param_1;
}



// FUNCTION 144c238a0 FUN_144c238a0 body=247 status=ok
// SIG undefined FUN_144c238a0(void)

void FUN_144c238a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c239a0 FUN_144c239a0 body=317 status=ok
// SIG undefined FUN_144c239a0(void)

void FUN_144c239a0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong local_res8;
  
  uVar9 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar3 = uVar9 * 2;
  uVar7 = param_3;
  if (param_3 < uVar3) {
    uVar7 = uVar3;
  }
  if ((0x7ffffffe < uVar7) && (uVar7 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90);
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar7 * 0x10,&local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = (ulonglong)uVar1;
  puVar5 = (undefined8 *)*param_1;
  uVar6 = (ulonglong)uVar1;
  puVar4 = puVar2;
  puVar8 = puVar5;
  if (0 < (int)uVar1) {
    do {
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = *puVar8;
        *puVar8 = 0;
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)(puVar8 + 1);
      }
      uVar3 = uVar3 - 1;
      puVar4 = puVar4 + 2;
      puVar8 = puVar8 + 2;
    } while (uVar3 != 0);
    do {
      FUN_144b49dd0(puVar5);
      puVar5 = puVar5 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar3 = uVar7 * 0x10 + 0x10;
  uVar6 = uVar7;
  if (uVar3 <= local_res8) {
    local_res8 = local_res8 - 0x10;
    uVar6 = uVar7 + 1;
    if (uVar3 <= local_res8) {
      uVar6 = uVar6 + (local_res8 + uVar7 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar9 << 4);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return;
}



// FUNCTION 144c23ae0 FUN_144c23ae0 body=289 status=ok
// SIG undefined FUN_144c23ae0(void)

ulonglong FUN_144c23ae0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong local_res8;
  
  uVar8 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar7 = uVar8 * 2;
  uVar5 = param_3;
  if (param_3 < uVar7) {
    uVar5 = uVar7;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,uVar5 * 0xc,&local_res8);
  uVar7 = (ulonglong)*(uint *)(param_1 + 1);
  puVar4 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (0 < (int)*(uint *)(param_1 + 1)) {
    do {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *puVar4;
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(puVar4 + 1);
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      puVar4 = (undefined8 *)((longlong)puVar4 + 0xc);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  uVar7 = uVar5 * 0xc + 0xc;
  uVar6 = uVar5;
  if (uVar7 <= local_res8) {
    local_res8 = local_res8 - 0xc;
    uVar6 = uVar5 + 1;
    if (uVar7 <= local_res8) {
      uVar5 = local_res8 + uVar5 * -0xc;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar5;
      uVar7 = SUB168(ZEXT816(0xaaaaaaaaaaaaaaab) * auVar1,0);
      uVar6 = uVar6 + uVar5 / 0xc;
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    uVar7 = (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar8 * 0xc);
  }
  *param_1 = puVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar6;
  return uVar7;
}



// FUNCTION 144c23c10 FUN_144c23c10 body=242 status=ok
// SIG undefined FUN_144c23c10(void)

undefined8 * FUN_144c23c10(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 local_18;
  undefined8 uStack_10;
  
  FUN_144f87f30();
  puVar4 = (undefined8 *)0x0;
  *param_1 = hkSerialize::XmlWriteFormat::vftable;
  param_1[4] = param_2;
  param_1[3] = 0;
  if (param_2 != 0) {
    FUN_144b3d910(param_2);
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  uVar2 = FUN_144b3d480();
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_1[4] == 0) {
    local_res8 = 0x30;
    puVar3 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar3,"TypeWriter");
    }
    if (puVar3 != (undefined8 *)0x0) {
      FUN_144f87eb0(puVar3);
      *puVar3 = hkSerialize::XmlWriteFormat::TypeWriter::vftable;
      local_18 = 0;
      uStack_10 = 0;
      FUN_144f84a10(puVar3 + 3,&local_18);
      puVar3[4] = param_1;
      *(undefined4 *)(puVar3 + 5) = 0;
      puVar4 = puVar3;
    }
    lVar1 = param_1[4];
    param_1[4] = puVar4;
    if (lVar1 != 0) {
      FUN_144b3f230();
    }
  }
  return param_1;
}



// FUNCTION 144c23d10 FUN_144c23d10 body=171 status=ok
// SIG undefined FUN_144c23d10(void)

void FUN_144c23d10(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 local_res8;
  
  local_res8 = 0x10;
  puVar5 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(puVar5,"XmlFormatter");
  }
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = param_2;
    *(undefined4 *)(puVar5 + 1) = 0;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar5;
  iVar4 = FUN_144bfbbb0("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<hktagfile version=\"3\">");
  puVar2 = (ulonglong *)*puVar5;
  uVar3 = *puVar2;
  if (puVar2[1] < uVar3 + (longlong)iVar4) {
    FUN_144beb1c0(puVar2,"<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<hktagfile version=\"3\">");
  }
  else {
    FUN_144b3d470();
    *puVar2 = uVar3 + (longlong)iVar4;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
  *piVar1 = *piVar1 + 1;
  return;
}



// FUNCTION 144c23dc0 FUN_144c23dc0 body=66 status=ok
// SIG undefined FUN_144c23dc0(void)

void FUN_144c23dc0(longlong param_1)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
  *piVar1 = *piVar1 + -1;
  FUN_144c24830(*(undefined8 *)(param_1 + 0x18),local_res8,"</hktagfile>");
  (*DAT_14c787678)(0,*(undefined8 *)(param_1 + 0x18),0);
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 144c23e10 FUN_144c23e10 body=124 status=ok
// SIG undefined FUN_144c23e10(void)

undefined8 FUN_144c23e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_4 + 0x10))(param_4,param_3);
  (**(code **)(*param_4 + 0x20))(param_4,uVar1);
  FUN_144c23f00(param_1,param_2,param_3,uVar1,0,param_4);
  return param_2;
}



// FUNCTION 144c23e90 FUN_144c23e90 body=111 status=ok
// SIG undefined FUN_144c23e90(void)

undefined8
FUN_144c23e90(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             longlong *param_5)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_5 + 0x10))(param_5,param_4);
  FUN_144c23f00(param_1,param_2,param_4,uVar1,param_3,param_5);
  return param_2;
}



// FUNCTION 144c23f00 FUN_144c23f00 body=1059 status=ok
// SIG undefined FUN_144c23f00(void)

int * FUN_144c23f00(longlong param_1,int *param_2,longlong *param_3,undefined4 param_4,int param_5,
                   undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte *pbVar4;
  longlong lVar5;
  int *piVar6;
  undefined8 *puVar7;
  char *pcVar8;
  int local_res18 [2];
  undefined8 in_stack_fffffffffffffcd8;
  undefined4 *puVar9;
  undefined4 uVar10;
  longlong local_308;
  longlong local_300;
  ulonglong local_2f8;
  undefined8 local_2f0;
  code *local_2e8;
  char *local_2e0;
  code *local_2d8;
  int *local_2d0;
  undefined8 local_2c8;
  code *local_2c0;
  longlong *local_2b8;
  undefined8 local_2a8 [20];
  undefined8 local_208 [20];
  undefined8 local_168 [20];
  undefined1 local_c8 [160];
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffcd8 >> 0x20);
  local_res18[0] = -0x7ffbfe00;
  if (*param_3 == 0) {
    iVar1 = -0x7ffbfe00;
    if (DAT_14c787c90 != '\0') {
      lVar2 = FUN_144bdc640(local_2a8,&DAT_14c787c40,1);
      local_2f0 = 2;
      *(char **)(lVar2 + 0x38) = "Format\\Xml\\hkXmlWriteFormat.cpp";
      local_2e8 = FUN_144c23860;
      local_2e0 = "!topVar";
      local_2d8 = FUN_144bdef40;
      local_2d0 = local_res18;
      *(undefined8 *)(lVar2 + 0x40) = 0x1cf;
      uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_2f0,0);
      local_308 = 0;
      FUN_144bdc480(uVar3,"Trying to serialize empty Var",&local_308,0);
      FUN_144bdc690(local_2a8);
      iVar1 = local_res18[0];
    }
  }
  else {
    local_res18[0] = -0x7ffbfe00;
    pbVar4 = (byte *)FUN_144b45d50(param_3[1],&local_308);
    if ((*pbVar4 & 3) == 0) {
      lVar2 = param_3[1];
      lVar5 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0x18))
                        (*(longlong **)(param_1 + 0x20),&local_308,lVar2);
      local_res18[0] = *(int *)(lVar5 + 8);
      FUN_144c24450(param_1,param_3);
      FUN_144bdf360(local_168);
      if (param_5 != 0) {
        puVar9 = &param_5;
        FUN_144be1640(local_168,&local_308,"annotates=\"object{}\"",&DAT_149993518,puVar9);
        uVar10 = (undefined4)((ulonglong)puVar9 >> 0x20);
      }
      pcVar8 = "note";
      if (param_5 == 0) {
        pcVar8 = "object";
      }
      FUN_144bdf360(local_c8);
      FUN_144bdf360(local_208);
      uVar3 = FUN_144beee90(lVar2,local_c8,0,0);
      FUN_144bdff50(local_208,"<%s id=\"object%d\" typeid=\"type%d\" %s> <!-- %s -->",pcVar8,param_4
                    ,CONCAT44(uVar10,local_res18[0]),local_168[0],uVar3);
      piVar6 = (int *)FUN_144c24830(*(undefined8 *)(param_1 + 0x18),local_res18,local_208[0]);
      iVar1 = *piVar6;
      piVar6 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
      *piVar6 = *piVar6 + 1;
      local_2c8 = *(undefined8 *)(param_1 + 0x18);
      local_2f8 = param_3[2];
      local_2c0 = (code *)param_6;
      local_2b8 = *(longlong **)(param_1 + 0x20);
      local_300 = param_3[1];
      if ((local_2f8 & 1) != 0) {
        FUN_144be6b20(local_2f8 & 0xfffffffffffffffe);
      }
      FUN_144beec90(param_3[1]);
      local_308 = *param_3;
      puVar7 = (undefined8 *)FUN_144bef430(local_300,&local_2f0,&DAT_14c6df050);
      uVar3 = *puVar7;
      if (((ulonglong)local_2e0 & 1) != 0) {
        FUN_144be6b30((ulonglong)local_2e0 & 0xfffffffffffffffe);
      }
      FUN_144c26170(&local_2c8,&local_308,0,uVar3);
      if ((local_2f8 & 1) != 0) {
        FUN_144be6b30(local_2f8 & 0xfffffffffffffffe);
      }
      piVar6 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
      *piVar6 = *piVar6 + -1;
      FUN_144bdf360(local_2a8);
      FUN_144bdff50(local_2a8,"</%s>",pcVar8);
      FUN_144c24830(*(undefined8 *)(param_1 + 0x18),local_res18,local_2a8[0]);
      FUN_144bdf2f0(local_2a8);
      FUN_144bdf2f0(local_208);
      FUN_144bdf2f0(local_c8);
      FUN_144bdf2f0(local_168);
      *param_2 = iVar1;
      return param_2;
    }
    iVar1 = local_res18[0];
    if ((local_res18[0] < 0) && (DAT_14c787c90 != '\0')) {
      lVar2 = FUN_144bdc640(local_2a8,&DAT_14c787c40,1);
      local_2f0 = 2;
      *(char **)(lVar2 + 0x38) = "Format\\Xml\\hkXmlWriteFormat.cpp";
      local_2e8 = FUN_144c23880;
      local_2e0 = "!topVar.getType()->isSerializable()";
      local_2d8 = FUN_144bdef40;
      local_2d0 = local_res18;
      *(undefined8 *)(lVar2 + 0x40) = 0x1d0;
      uVar3 = FUN_144bdc480(lVar2,"HK_RETURN_RES_IF({}) returning {}. ",&local_2f0,0);
      local_308 = param_3[1];
      local_2c8 = 1;
      local_2c0 = FUN_144c00d20;
      local_2b8 = &local_308;
      FUN_144bdc480(uVar3,"Trying to serialize instance of non-serializable type \'{}\'",&local_2c8,
                    0);
      FUN_144bdc690(local_2a8);
      *param_2 = local_res18[0];
      return param_2;
    }
  }
  *param_2 = iVar1;
  return param_2;
}



// FUNCTION 144c24330 FUN_144c24330 body=283 status=ok
// SIG undefined FUN_144c24330(void)

undefined1 FUN_144c24330(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char cVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 *local_28;
  undefined8 *local_20;
  
  puVar1 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
  lVar6 = 0;
  if (((byte)*puVar1 & 0x1f) == 7) {
    lVar6 = param_1;
  }
  if (lVar6 == 0) {
    puVar1 = (undefined4 *)FUN_144bef800(param_1,&local_res8);
    lVar6 = 0;
    if (((byte)*puVar1 & 0x1f) == 8) {
      lVar6 = param_1;
    }
    if (lVar6 != 0) {
      FUN_144beff00(lVar6,&local_res8);
      if (local_res8 == 0) {
        return 1;
      }
      FUN_144beff00(lVar6,&local_res8);
      uVar5 = FUN_144c24330(local_res8,param_2);
      return uVar5;
    }
  }
  else if (lVar6 != param_2) {
    FUN_144bf0830(&local_28,lVar6,0);
    while ((puVar3 = local_28 + 1, local_28 + 1 < local_20 ||
           (cVar4 = FUN_144bf0850(&local_28), puVar3 = local_28, cVar4 != '\0'))) {
      local_28 = puVar3;
      pbVar2 = (byte *)FUN_144bf04d0(local_28,&local_res8);
      if (((*pbVar2 & 0x30) != 0) && (cVar4 = FUN_144c24330(*local_28,lVar6), cVar4 != '\0')) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 144c24450 FUN_144c24450 body=859 status=ok
// SIG undefined FUN_144c24450(void)

void FUN_144c24450(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined4 local_res10 [2];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined8 *local_b8;
  undefined8 *puStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong lStack_90;
  ulonglong local_88;
  longlong local_80;
  longlong lStack_78;
  ulonglong local_70;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  uVar1 = param_2[1];
  puVar6 = (undefined4 *)FUN_144bef800(uVar1,local_res10);
  uVar12 = 0;
  uVar7 = uVar12;
  if (((byte)*puVar6 & 0x1f) == 7) {
    uVar7 = uVar1;
  }
  if (uVar7 == 0) {
    uVar1 = param_2[1];
    puVar6 = (undefined4 *)FUN_144bef800(uVar1,local_res10);
    uVar7 = uVar12;
    if (((byte)*puVar6 & 0x1f) == 8) {
      uVar7 = uVar1;
    }
    if (uVar7 == 0) {
      return;
    }
  }
  puVar8 = (undefined8 *)FUN_144befe50(param_2[1],0x2000);
  if (puVar8 == (undefined8 *)0x0) {
    local_res10[0] = 0;
  }
  else {
    local_res10[0] = (undefined4)*puVar8;
  }
  lVar9 = FUN_144bdd570(param_1 + 0x28,local_res10);
  if (lVar9 == 0) {
    iVar13 = -1;
  }
  else {
    iVar13 = *(int *)(lVar9 + 4);
  }
  if (iVar13 < 0) {
    return;
  }
  local_88 = 0;
  local_98 = 0;
  lStack_90 = 0;
  if (param_2[1] != 0) {
    puVar6 = (undefined4 *)FUN_144bef800(param_2[1],local_res18);
    if (((byte)*puVar6 & 0x1f) == 7) {
      local_98 = *param_2;
      lStack_90 = param_2[1];
      if ((*(byte *)(param_2 + 2) & 1) != 0) {
        FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
      }
      if ((local_88 & 1) != 0) {
        FUN_144be6b30(local_88 & 0xfffffffffffffffe);
      }
      local_88 = param_2[2];
    }
    if (local_98 != 0) {
      FUN_144bf0830(&local_b8,lStack_90,0);
      while ((puVar8 = local_b8 + 1, local_b8 + 1 < puStack_b0 ||
             (cVar5 = FUN_144bf0850(&local_b8), puVar8 = local_b8, cVar5 != '\0'))) {
        local_b8 = puVar8;
        pbVar10 = (byte *)FUN_144bf04d0(local_b8,local_res20);
        if ((*pbVar10 & 0x30) != 0) {
          uVar11 = FUN_144bebf80(&local_98,&local_80,*local_b8);
          FUN_144c24450(param_1,uVar11);
          if ((local_70 & 1) != 0) {
            FUN_144be6b30(local_70 & 0xfffffffffffffffe);
          }
        }
      }
      goto LAB_144c2478a;
    }
  }
  local_80 = 0;
  lStack_78 = 0;
  if ((param_2[1] != 0) &&
     (puVar6 = (undefined4 *)FUN_144bef800(param_2[1],local_res20), ((byte)*puVar6 & 0x1f) == 8)) {
    lVar9 = param_2[1];
    lVar2 = *param_2;
    local_80 = lVar2;
    lStack_78 = lVar9;
    if ((*(byte *)(param_2 + 2) & 1) != 0) {
      FUN_144be6b20(param_2[2] & 0xfffffffffffffffe);
    }
    uVar12 = param_2[2];
    local_70 = uVar12;
    if (lVar2 != 0) {
      FUN_144beff00(lVar9,&local_60);
      if (local_60 == 0) {
        plVar3 = *(longlong **)(param_1 + 0x20);
        local_a8 = 0;
        local_b8 = (undefined8 *)0x0;
        puStack_b0 = (undefined8 *)0x0;
        local_a0 = 0;
        (**(code **)(*(longlong *)(uVar12 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(uVar12 & 0xfffffffffffffffe),local_68,lVar2,lVar9,&local_b8);
        puVar8 = puStack_b0;
        if ((local_a0 & 1) != 0) {
          FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
        }
        (**(code **)(*plVar3 + 0x18))(plVar3,local_58,puVar8);
      }
      iVar13 = 0;
      while( true ) {
        local_a8 = 0;
        local_b8 = (undefined8 *)0x0;
        puStack_b0 = (undefined8 *)0x0;
        local_a0 = 0;
        (**(code **)(*(longlong *)(uVar12 & 0xfffffffffffffffe) + 0x48))
                  ((longlong *)(uVar12 & 0xfffffffffffffffe),local_64,lVar2,lVar9,&local_b8);
        iVar4 = (int)local_a8;
        if ((local_a0 & 1) != 0) {
          FUN_144be6b30(local_a0 & 0xfffffffffffffffe);
        }
        if (iVar4 <= iVar13) break;
        uVar11 = FUN_144bed0e0(&local_80,local_58,iVar13);
        FUN_144c24450(param_1,uVar11);
        if ((local_48 & 1) != 0) {
          FUN_144be6b30(local_48 & 0xfffffffffffffffe);
        }
        iVar13 = iVar13 + 1;
      }
    }
  }
  if ((uVar12 & 1) != 0) {
    FUN_144be6b30(uVar12 & 0xfffffffffffffffe);
  }
LAB_144c2478a:
  if ((local_88 & 1) != 0) {
    FUN_144be6b30(local_88 & 0xfffffffffffffffe);
  }
  return;
}



// FUNCTION 144c247b0 FUN_144c247b0 body=123 status=ok
// SIG undefined FUN_144c247b0(void)

undefined8 * FUN_144c247b0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = hkSerialize::XmlWriteFormat::vftable;
  FUN_144c089f0(param_1 + 5);
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  FUN_144f87f50(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 144c24830 FUN_144c24830 body=314 status=ok
// SIG undefined FUN_144c24830(void)

undefined4 * FUN_144c24830(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 local_118 [256];
  
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  if (puVar1[1] < uVar2 + 1) {
    lVar6 = FUN_144beb1c0(puVar1,&DAT_14997f410,1);
    if (lVar6 == 1) goto LAB_144c2488d;
LAB_144c24944:
    *param_2 = 0x80040200;
  }
  else {
    FUN_144b3d470();
    *puVar1 = uVar2 + 1;
LAB_144c2488d:
    iVar3 = *(int *)(param_1 + 1) * 2;
    lVar6 = 0x100;
    if (iVar3 < 0x100) {
      lVar6 = (longlong)iVar3;
      FUN_144bfbef0(local_118,0x20,lVar6);
      if (iVar3 != 0) goto LAB_144c248bf;
    }
    else {
      FUN_144bfbef0(local_118,0x20,0x100);
LAB_144c248bf:
      puVar1 = (ulonglong *)*param_1;
      uVar2 = *puVar1;
      if (puVar1[1] < uVar2 + lVar6) {
        lVar4 = FUN_144beb1c0(puVar1,local_118,lVar6);
        if (lVar4 != lVar6) goto LAB_144c24944;
      }
      else {
        FUN_144b3d470();
        *puVar1 = uVar2 + lVar6;
      }
    }
    iVar3 = FUN_144bfbbb0(param_3);
    puVar1 = (ulonglong *)*param_1;
    lVar6 = (longlong)iVar3;
    uVar2 = *puVar1;
    if (puVar1[1] < uVar2 + lVar6) {
      lVar4 = FUN_144beb1c0(puVar1,param_3,lVar6);
      uVar5 = 0x80040200;
      if (lVar4 == lVar6) {
        uVar5 = 0;
      }
      *param_2 = uVar5;
    }
    else {
      FUN_144b3d470();
      *puVar1 = uVar2 + lVar6;
      *param_2 = 0;
    }
  }
  return param_2;
}



// FUNCTION 144c24970 FUN_144c24970 body=817 status=ok
// SIG undefined FUN_144c24970(void)

void FUN_144c24970(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 local_res8;
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar7;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  local_res8 = param_1;
  puVar1 = (uint *)FUN_144bef800(param_2,&local_res8);
  switch(*puVar1 & 0x1f) {
  case 0:
    FUN_144be06b0(param_4,&DAT_149982a10,0xffffffff);
    return;
  case 1:
    FUN_144be06b0(param_4,"incomplete",0xffffffff);
    return;
  case 2:
    puVar6 = &DAT_14999306c;
    pcVar4 = "unsigned";
    if ((param_3 >> 8 & 1) != 0) {
      puVar6 = &DAT_149993068;
    }
    if ((param_3 >> 9 & 1) != 0) {
      pcVar4 = "signed";
    }
    FUN_144bdff50(param_4,"bool%d (%s, %s)",param_3 >> 10,pcVar4,puVar6);
    return;
  case 3:
    pcVar4 = "ptr";
    uVar3 = param_3 >> 0x10;
    if ((param_3 & 0x20) == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0) {
      pcVar4 = "buffer";
    }
    FUN_144bdff50(param_4,"string (%s)",pcVar4);
    return;
  case 4:
    puVar6 = &DAT_14999306c;
    puVar5 = &DAT_149993090;
    if ((param_3 >> 8 & 1) != 0) {
      puVar6 = &DAT_149993068;
    }
    if ((param_3 >> 9 & 1) != 0) {
      puVar5 = &DAT_14996de1b;
    }
    FUN_144bdff50(param_4,"%sint%d (%s)",puVar5,param_3 >> 10,puVar6);
    return;
  case 5:
    if (param_3 == 0x174605) {
      FUN_144be06b0(param_4,"float",0xffffffff);
      return;
    }
    if (param_3 != 0x345e05) {
      pcVar4 = "";
      puVar6 = &DAT_14999306c;
      uVar3 = param_3 >> 0x10 & 0xff;
      if ((param_3 >> 8 & 1) != 0) {
        puVar6 = &DAT_149993068;
      }
      pcVar2 = "";
      if ((param_3 >> 10 & 1) != 0) {
        pcVar2 = ", implicit one";
      }
      if ((param_3 >> 9 & 1) != 0) {
        pcVar4 = "sign bit";
      }
      FUN_144bdff50(param_4,"fp %d bits (%s, %d exp, %d significand %s, %s)",
                    uVar3 + 7 + (param_3 >> 10 & 1) + (param_3 >> 0xb & 0x1f) >> 3,pcVar4,
                    CONCAT44(uVar7,param_3 >> 0xb) & 0xffffffff0000001f,uVar3,pcVar2,puVar6);
      return;
    }
    FUN_144be06b0(param_4,"double",0xffffffff);
    return;
  case 6:
    FUN_144be06b0(param_4,"pointer",0xffffffff);
    return;
  case 7:
    FUN_144be06b0(param_4,"record",0xffffffff);
    return;
  case 8:
    FUN_144bdff50(param_4,"array");
    if (param_3 >> 8 != 0) {
      FUN_144bdff80(param_4,&DAT_14999310c,param_3 >> 8);
      return;
    }
    break;
  default:
    FUN_144bfc170(0xfdbd9f9,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x1b,"Bad type visitor switch");
  }
  return;
}



// FUNCTION 144c24cd0 FUN_144c24cd0 body=5051 status=ok
// SIG undefined FUN_144c24cd0(void)

void FUN_144c24cd0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined4 *puVar12;
  ulonglong *puVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined *puVar16;
  longlong lVar17;
  undefined1 *puVar18;
  longlong lVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong *plVar25;
  undefined1 local_res18 [8];
  longlong local_res20;
  undefined *in_stack_fffffffffffffab8;
  ulonglong local_530;
  undefined8 local_528 [20];
  undefined1 local_488 [4];
  undefined1 local_484 [4];
  undefined1 local_480 [4];
  undefined1 local_47c [4];
  undefined1 local_478 [4];
  undefined1 local_474 [4];
  undefined1 local_470 [4];
  undefined1 local_46c [4];
  undefined1 local_468 [8];
  undefined8 local_460;
  longlong local_458;
  undefined8 local_450;
  longlong local_448 [2];
  undefined8 local_438 [20];
  undefined1 local_398 [256];
  undefined1 local_298 [16];
  undefined8 local_288 [20];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [256];
  undefined8 local_d8 [20];
  
  puVar10 = (undefined8 *)FUN_144f84e40(param_1 + 0x18,local_298);
  puVar2 = (uint *)*puVar10;
  do {
    if (puVar2 == (uint *)0x0) {
      return;
    }
    iVar7 = FUN_144f84ad0(param_1 + 0x18,puVar2);
    if (*(int *)(param_1 + 0x28) < iVar7) {
      *(int *)(param_1 + 0x28) = iVar7;
    }
    uVar22 = *puVar2;
    local_res20 = CONCAT44(local_res20._4_4_,uVar22);
    FUN_144bdf360(local_d8);
    FUN_144bdff50(local_d8,"<type id=\"type%d\">",iVar7);
    uVar15 = local_d8[0];
    puVar11 = (ulonglong *)*param_2;
    uVar24 = *puVar11;
    if (puVar11[1] < uVar24 + 1) {
      lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
      if (lVar19 == 1) goto LAB_144c24db2;
    }
    else {
      FUN_144b3d470();
      *puVar11 = uVar24 + 1;
LAB_144c24db2:
      iVar7 = *(int *)(param_2 + 1) * 2;
      if (iVar7 < 0x100) {
        lVar19 = (longlong)iVar7;
        FUN_144bfbef0(local_398,0x20,lVar19);
        if (iVar7 != 0) goto LAB_144c24dec;
      }
      else {
        FUN_144bfbef0(local_398,0x20,0x100);
        lVar19 = 0x100;
LAB_144c24dec:
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < lVar19 + uVar24) {
          lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
          if (lVar23 != lVar19) goto LAB_144c24e4d;
        }
        else {
          FUN_144b3d470();
          *puVar11 = lVar19 + uVar24;
        }
      }
      iVar7 = FUN_144bfbbb0(uVar15);
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < (longlong)iVar7 + uVar24) {
        FUN_144beb1c0(puVar11,uVar15);
      }
      else {
        FUN_144b3d470();
        *puVar11 = (longlong)iVar7 + uVar24;
      }
    }
LAB_144c24e4d:
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    if ((uVar22 & 8) != 0) {
      if (((*puVar2 & 8) == 0) ||
         (puVar10 = (undefined8 *)FUN_144befea0(puVar2,8), puVar10 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = *puVar10;
      }
      FUN_144bdf390(local_438,uVar15);
      FUN_144be12b0(local_438,&DAT_149993038,"&amp;",1);
      FUN_144be12b0(local_438,&DAT_149981f0c,&DAT_149981f04,1);
      FUN_144be12b0(local_438,&DAT_149981f18,&DAT_149981f10,1);
      FUN_144be12b0(local_438,&DAT_149981f00,"&quot;",1);
      FUN_144be12b0(local_438,&DAT_14999304c,"&apos;",1);
      FUN_144bdf360(local_528);
      FUN_144bdff50(local_528,"<name value=\"%s\"/>",local_438[0]);
      uVar15 = local_528[0];
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c24f71;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c24f71:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c24fab;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c24fab:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < lVar19 + uVar24) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c2500c;
          }
          else {
            FUN_144b3d470();
            *puVar11 = lVar19 + uVar24;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < (longlong)iVar7 + uVar24) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = (longlong)iVar7 + uVar24;
        }
      }
LAB_144c2500c:
      FUN_144bdf2f0(local_528);
      FUN_144bdf2f0(local_438);
    }
    lVar19 = *(longlong *)(puVar2 + 2);
    if (lVar19 != 0) {
      uVar8 = FUN_144f84d90(param_1 + 0x18,lVar19);
      FUN_144bdf360(local_288);
      in_stack_fffffffffffffab8 = (undefined *)FUN_144beee90(lVar19,local_288,0,0);
      FUN_144bdf360(local_528);
      FUN_144bdff50(local_528,"<%s id=\"type%u\" /> <!-- %s -->","parent",uVar8,
                    in_stack_fffffffffffffab8);
      FUN_144c24830(param_2,local_488,local_528[0]);
      FUN_144bdf2f0(local_528);
      FUN_144bdf2f0(local_288);
    }
    if ((uVar22 & 1) != 0) {
      if (((*puVar2 & 1) == 0) ||
         (puVar11 = (ulonglong *)FUN_144befea0(puVar2,1), puVar11 == (ulonglong *)0x0)) {
        uVar24 = 0;
      }
      else {
        uVar24 = *puVar11;
      }
      FUN_144bdf360(local_438);
      FUN_144c24970(local_res18,puVar2,uVar24 & 0xffffffff,local_438);
      FUN_144bdf360(local_528);
      FUN_144bdff50(local_528,"<format value=\"%u\"/> <!-- %s -->",uVar24 & 0xffffffff);
      uVar15 = local_528[0];
      puVar11 = (ulonglong *)*param_2;
      uVar3 = *puVar11;
      if (puVar11[1] < uVar3 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c25161;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar3 + 1;
LAB_144c25161:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c2519b;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c2519b:
          puVar11 = (ulonglong *)*param_2;
          uVar3 = *puVar11;
          if (puVar11[1] < lVar19 + uVar3) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c251fc;
          }
          else {
            FUN_144b3d470();
            *puVar11 = lVar19 + uVar3;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar3 = *puVar11;
        if (puVar11[1] < (longlong)iVar7 + uVar3) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = (longlong)iVar7 + uVar3;
        }
      }
LAB_144c251fc:
      if (((byte)uVar24 & 0x1f) == 3) {
        FUN_144f84d90(param_1 + 0x18,&DAT_14c6da360);
      }
      FUN_144bdf2f0(local_528);
      FUN_144bdf2f0(local_438);
    }
    if ((uVar22 & 2) != 0) {
      puVar12 = (undefined4 *)FUN_144bef800(puVar2,local_484);
      puVar20 = (uint *)0x0;
      if (((byte)*puVar12 & 0x1f) == 8) {
        puVar20 = puVar2;
      }
      if (puVar20 == (uint *)0x0) {
        puVar12 = (undefined4 *)FUN_144bef800(puVar2,local_47c);
        puVar20 = (uint *)0x0;
        if (((byte)*puVar12 & 0x1f) == 6) {
          puVar20 = puVar2;
        }
        if (puVar20 == (uint *)0x0) goto LAB_144c253db;
        FUN_144beff00(puVar20,&local_450);
        uVar6 = FUN_144f84ad0(param_1 + 0x18,local_450);
        FUN_144beff00(puVar20,local_448);
        lVar19 = local_448[0];
        FUN_144bdf360(local_288);
        if (lVar19 == 0) {
          in_stack_fffffffffffffab8 = &DAT_149993060;
        }
        else {
          in_stack_fffffffffffffab8 = (undefined *)FUN_144beee90(lVar19,local_288,0,0);
        }
        FUN_144bdf360(local_528);
        FUN_144bdff50(local_528,"<%s id=\"type%u\" /> <!-- %s -->","subtype",uVar6,
                      in_stack_fffffffffffffab8);
        puVar18 = local_478;
      }
      else {
        FUN_144befe50(puVar20,1);
        FUN_144beff00(puVar20,&local_460);
        uVar6 = FUN_144f84d90(param_1 + 0x18,local_460);
        FUN_144beff00(puVar20,&local_458);
        lVar19 = local_458;
        FUN_144bdf360(local_288);
        if (lVar19 == 0) {
          in_stack_fffffffffffffab8 = &DAT_149993060;
        }
        else {
          in_stack_fffffffffffffab8 = (undefined *)FUN_144beee90(lVar19,local_288,0,0);
        }
        FUN_144bdf360(local_528);
        FUN_144bdff50(local_528,"<%s id=\"type%u\" /> <!-- %s -->","subtype",uVar6,
                      in_stack_fffffffffffffab8);
        puVar18 = local_480;
      }
      FUN_144c24830(param_2,puVar18,local_528[0]);
      FUN_144bdf2f0(local_528);
      FUN_144bdf2f0(local_288);
    }
LAB_144c253db:
    if ((uVar22 & 0x10) != 0) {
      if (((*puVar2 & 0x10) == 0) ||
         (puVar10 = (undefined8 *)FUN_144befea0(puVar2,0x10), puVar10 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (undefined4)*puVar10;
      }
      FUN_144bdf360(local_528);
      FUN_144bdff50(local_528,"<version value=\"%u\"/>",uVar8);
      uVar15 = local_528[0];
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c25461;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c25461:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c2549b;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c2549b:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < lVar19 + uVar24) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c254fc;
          }
          else {
            FUN_144b3d470();
            *puVar11 = lVar19 + uVar24;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < (longlong)iVar7 + uVar24) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = (longlong)iVar7 + uVar24;
        }
      }
LAB_144c254fc:
      FUN_144bdf2f0(local_528);
    }
    if ((uVar22 >> 0xf & 1) != 0) {
      puVar13 = (ulonglong *)FUN_144bef4c0(puVar2);
      uVar22 = (uint)puVar13[1] & 0xffff;
      local_530 = (ulonglong)uVar22;
      FUN_144bdf360(local_438);
      FUN_144bdff50(local_438,"<parameters count=\"%d\">",local_530);
      uVar15 = local_438[0];
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c2557d;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c2557d:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c255b7;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c255b7:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < lVar19 + uVar24) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c25618;
          }
          else {
            FUN_144b3d470();
            *puVar11 = lVar19 + uVar24;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < (longlong)iVar7 + uVar24) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = (longlong)iVar7 + uVar24;
        }
      }
LAB_144c25618:
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      if (uVar22 != 0) {
        do {
          puVar11 = puVar13 + 2;
          if (*(char *)puVar13[3] == 't') {
            uVar8 = FUN_144f84d90(param_1 + 0x18,*puVar11);
            uVar24 = *puVar11;
            FUN_144bdf360(local_288);
            if (uVar24 == 0) {
              in_stack_fffffffffffffab8 = &DAT_149993060;
            }
            else {
              in_stack_fffffffffffffab8 = (undefined *)FUN_144beee90(uVar24,local_288,0,0);
            }
            FUN_144bdf360(local_528);
            FUN_144bdff50(local_528,"<%s id=\"type%u\" /> <!-- %s -->","typeparam",uVar8,
                          in_stack_fffffffffffffab8);
            FUN_144c24830(param_2,local_474);
            FUN_144bdf2f0(local_528);
            puVar10 = local_288;
          }
          else {
            uVar24 = *puVar11;
            FUN_144bdf360(local_528);
            FUN_144bdff50(local_528,"<valueparam value=\"%u\"/>",uVar24 & 0xffffffff);
            uVar15 = local_528[0];
            puVar13 = (ulonglong *)*param_2;
            uVar24 = *puVar13;
            if (puVar13[1] < uVar24 + 1) {
              lVar19 = FUN_144beb1c0(puVar13,&DAT_14997f410,1);
              if (lVar19 == 1) goto LAB_144c25737;
            }
            else {
              FUN_144b3d470();
              *puVar13 = uVar24 + 1;
LAB_144c25737:
              iVar7 = *(int *)(param_2 + 1) * 2;
              if (iVar7 < 0x100) {
                lVar19 = (longlong)iVar7;
                FUN_144bfbef0(local_398,0x20,lVar19);
                if (iVar7 != 0) goto LAB_144c25771;
              }
              else {
                FUN_144bfbef0(local_398,0x20,0x100);
                lVar19 = 0x100;
LAB_144c25771:
                puVar13 = (ulonglong *)*param_2;
                uVar24 = *puVar13;
                if (puVar13[1] < uVar24 + lVar19) {
                  lVar23 = FUN_144beb1c0(puVar13,local_398,lVar19);
                  if (lVar23 != lVar19) goto LAB_144c257d2;
                }
                else {
                  FUN_144b3d470();
                  *puVar13 = uVar24 + lVar19;
                }
              }
              iVar7 = FUN_144bfbbb0(uVar15);
              puVar13 = (ulonglong *)*param_2;
              uVar24 = *puVar13;
              if (puVar13[1] < (longlong)iVar7 + uVar24) {
                FUN_144beb1c0(puVar13,uVar15);
              }
              else {
                FUN_144b3d470();
                *puVar13 = (longlong)iVar7 + uVar24;
              }
            }
LAB_144c257d2:
            puVar10 = local_528;
          }
          FUN_144bdf2f0(puVar10);
          local_530 = local_530 - 1;
          puVar13 = puVar11;
        } while (local_530 != 0);
      }
      puVar11 = (ulonglong *)*param_2;
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c25828;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c25828:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c25862;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c25862:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < uVar24 + lVar19) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c258cb;
          }
          else {
            FUN_144b3d470();
            *puVar11 = uVar24 + lVar19;
          }
        }
        iVar7 = FUN_144bfbbb0("</parameters>");
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < uVar24 + (longlong)iVar7) {
          FUN_144beb1c0(puVar11,"</parameters>");
        }
        else {
          FUN_144b3d470();
          *puVar11 = uVar24 + (longlong)iVar7;
        }
      }
LAB_144c258cb:
      FUN_144bdf2f0(local_438);
      uVar22 = (uint)local_res20;
    }
    if ((uVar22 >> 0x15 & 1) != 0) {
      if (((*puVar2 >> 0x15 & 1) == 0) ||
         (puVar10 = (undefined8 *)FUN_144befea0(puVar2,0x200000), puVar10 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (undefined4)*puVar10;
      }
      FUN_144bdf360(local_528);
      FUN_144bdff50(local_528,"<flags value=\"%u\"/>",uVar8);
      uVar15 = local_528[0];
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c2596b;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c2596b:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c259a5;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c259a5:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < uVar24 + lVar19) {
            lVar23 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar23 != lVar19) goto LAB_144c25a06;
          }
          else {
            FUN_144b3d470();
            *puVar11 = uVar24 + lVar19;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < uVar24 + (longlong)iVar7) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = uVar24 + (longlong)iVar7;
        }
      }
LAB_144c25a06:
      FUN_144bdf2f0(local_528);
    }
    if ((uVar22 >> 0x17 & 1) != 0) {
      if (((*puVar2 >> 0x17 & 1) == 0) ||
         (puVar10 = (undefined8 *)FUN_144befea0(puVar2,0x800000), puVar10 == (undefined8 *)0x0)) {
        plVar25 = (longlong *)0x0;
      }
      else {
        plVar25 = (longlong *)*puVar10;
      }
      iVar21 = 0;
      iVar7 = (int)*(short *)((longlong)plVar25 + 2) + (int)(short)*plVar25;
      lVar23 = (longlong)iVar7;
      lVar19 = lVar23;
      plVar4 = plVar25;
      if (0 < iVar7) {
        do {
          local_res20 = plVar4[1];
          pbVar14 = (byte *)FUN_144bf04d0(&local_res20,local_470);
          iVar21 = iVar21 + (~(uint)*pbVar14 & 1);
          lVar19 = lVar19 + -1;
          plVar4 = plVar4 + 1;
        } while (lVar19 != 0);
      }
      FUN_144bdf360(local_288);
      FUN_144bdff50(local_288,"<fields count=\"%d\">",iVar21);
      uVar15 = local_288[0];
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c25af0;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c25af0:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_398,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c25b2a;
        }
        else {
          FUN_144bfbef0(local_398,0x20,0x100);
          lVar19 = 0x100;
LAB_144c25b2a:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < uVar24 + lVar19) {
            lVar17 = FUN_144beb1c0(puVar11,local_398,lVar19);
            if (lVar17 != lVar19) goto LAB_144c25b8b;
          }
          else {
            FUN_144b3d470();
            *puVar11 = uVar24 + lVar19;
          }
        }
        iVar7 = FUN_144bfbbb0(uVar15);
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < uVar24 + (longlong)iVar7) {
          FUN_144beb1c0(puVar11,uVar15);
        }
        else {
          FUN_144b3d470();
          *puVar11 = uVar24 + (longlong)iVar7;
        }
      }
LAB_144c25b8b:
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
      if (0 < lVar23) {
        do {
          plVar25 = plVar25 + 1;
          local_res20 = *plVar25;
          pbVar14 = (byte *)FUN_144bf04d0(&local_res20,local_46c);
          uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffab8 >> 0x20);
          if ((~*pbVar14 & 1) != 0) {
            uVar9 = FUN_144f84d90(param_1 + 0x18,*(undefined8 *)(local_res20 + 8));
            uVar15 = FUN_144bf0530(&local_res20);
            FUN_144bdf390(local_438,uVar15);
            FUN_144be12b0(local_438,&DAT_149993038,"&amp;",1);
            FUN_144be12b0(local_438,&DAT_149981f0c,&DAT_149981f04,1);
            FUN_144be12b0(local_438,&DAT_149981f18,&DAT_149981f10,1);
            FUN_144be12b0(local_438,&DAT_149981f00,"&quot;",1);
            FUN_144be12b0(local_438,&DAT_14999304c,"&apos;",1);
            FUN_144bdf360(local_398);
            if (local_res20 == 0) {
              puVar16 = &DAT_149993060;
            }
            else {
              puVar16 = (undefined *)FUN_144beee90(local_res20,local_398,0,0);
            }
            puVar12 = (undefined4 *)FUN_144bf04d0(&local_res20,local_468);
            uVar1 = *puVar12;
            FUN_144bdf360(local_528);
            in_stack_fffffffffffffab8 =
                 (undefined *)(CONCAT44(uVar8,uVar1) & 0xffffffffffffffef | 0x20);
            FUN_144bdff50(local_528,
                          "<field name=\"%s\" typeid=\"type%d\" flags=\"%d\" /> <!-- %s -->",
                          local_438[0],uVar9,in_stack_fffffffffffffab8,puVar16);
            uVar15 = local_528[0];
            puVar11 = (ulonglong *)*param_2;
            uVar24 = *puVar11;
            if (puVar11[1] < uVar24 + 1) {
              lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
              if (lVar19 == 1) goto LAB_144c25d46;
            }
            else {
              FUN_144b3d470();
              *puVar11 = uVar24 + 1;
LAB_144c25d46:
              iVar7 = *(int *)(param_2 + 1) * 2;
              if (iVar7 < 0x100) {
                lVar19 = (longlong)iVar7;
                FUN_144bfbef0(local_1d8,0x20,lVar19);
                if (iVar7 != 0) goto LAB_144c25d80;
              }
              else {
                FUN_144bfbef0(local_1d8,0x20,0x100);
                lVar19 = 0x100;
LAB_144c25d80:
                puVar11 = (ulonglong *)*param_2;
                uVar24 = *puVar11;
                if (puVar11[1] < uVar24 + lVar19) {
                  lVar17 = FUN_144beb1c0(puVar11,local_1d8,lVar19);
                  if (lVar17 != lVar19) goto LAB_144c25de1;
                }
                else {
                  FUN_144b3d470();
                  *puVar11 = uVar24 + lVar19;
                }
              }
              iVar7 = FUN_144bfbbb0(uVar15);
              puVar11 = (ulonglong *)*param_2;
              uVar24 = *puVar11;
              if (puVar11[1] < uVar24 + (longlong)iVar7) {
                FUN_144beb1c0(puVar11,uVar15);
              }
              else {
                FUN_144b3d470();
                *puVar11 = uVar24 + (longlong)iVar7;
              }
            }
LAB_144c25de1:
            FUN_144bdf2f0(local_528);
            FUN_144bdf2f0(local_398);
            FUN_144bdf2f0(local_438);
          }
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      puVar11 = (ulonglong *)*param_2;
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + 1) {
        lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
        if (lVar19 == 1) goto LAB_144c25e4a;
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + 1;
LAB_144c25e4a:
        iVar7 = *(int *)(param_2 + 1) * 2;
        if (iVar7 < 0x100) {
          lVar19 = (longlong)iVar7;
          FUN_144bfbef0(local_1d8,0x20,lVar19);
          if (iVar7 != 0) goto LAB_144c25e84;
        }
        else {
          FUN_144bfbef0(local_1d8,0x20,0x100);
          lVar19 = 0x100;
LAB_144c25e84:
          puVar11 = (ulonglong *)*param_2;
          uVar24 = *puVar11;
          if (puVar11[1] < uVar24 + lVar19) {
            lVar23 = FUN_144beb1c0(puVar11,local_1d8,lVar19);
            if (lVar23 != lVar19) goto LAB_144c25eed;
          }
          else {
            FUN_144b3d470();
            *puVar11 = uVar24 + lVar19;
          }
        }
        iVar7 = FUN_144bfbbb0("</fields>");
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < uVar24 + (longlong)iVar7) {
          FUN_144beb1c0(puVar11,"</fields>");
        }
        else {
          FUN_144b3d470();
          *puVar11 = uVar24 + (longlong)iVar7;
        }
      }
LAB_144c25eed:
      FUN_144bdf2f0(local_288);
    }
    puVar11 = (ulonglong *)*param_2;
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
    uVar24 = *puVar11;
    if (puVar11[1] < uVar24 + 1) {
      lVar19 = FUN_144beb1c0(puVar11,&DAT_14997f410,1);
      if (lVar19 == 1) goto LAB_144c25f35;
    }
    else {
      FUN_144b3d470();
      *puVar11 = uVar24 + 1;
LAB_144c25f35:
      iVar7 = *(int *)(param_2 + 1) * 2;
      if (iVar7 < 0x100) {
        lVar19 = (longlong)iVar7;
        FUN_144bfbef0(local_1d8,0x20,lVar19);
        if (iVar7 != 0) goto LAB_144c25f6f;
      }
      else {
        FUN_144bfbef0(local_1d8,0x20,0x100);
        lVar19 = 0x100;
LAB_144c25f6f:
        puVar11 = (ulonglong *)*param_2;
        uVar24 = *puVar11;
        if (puVar11[1] < uVar24 + lVar19) {
          lVar23 = FUN_144beb1c0(puVar11,local_1d8,lVar19);
          if (lVar23 != lVar19) goto LAB_144c25fd8;
        }
        else {
          FUN_144b3d470();
          *puVar11 = uVar24 + lVar19;
        }
      }
      iVar7 = FUN_144bfbbb0("</type>");
      puVar11 = (ulonglong *)*param_2;
      uVar24 = *puVar11;
      if (puVar11[1] < uVar24 + (longlong)iVar7) {
        FUN_144beb1c0(puVar11,"</type>");
      }
      else {
        FUN_144b3d470();
        *puVar11 = uVar24 + (longlong)iVar7;
      }
    }
LAB_144c25fd8:
    cVar5 = FUN_144c24330(puVar2,0);
    if (cVar5 != '\0') {
      puVar10 = (undefined8 *)FUN_144befe50(puVar2,0x2000);
      if (puVar10 == (undefined8 *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (undefined4)*puVar10;
      }
      local_res20 = CONCAT44(local_res20._4_4_,uVar8);
      FUN_144bdd4d0(*(longlong *)(param_1 + 0x20) + 0x28,local_1e8,&local_res20);
    }
    FUN_144bdf2f0(local_d8);
    puVar10 = (undefined8 *)FUN_144f84e40(param_1 + 0x18,local_298);
    puVar2 = (uint *)*puVar10;
  } while( true );
}



// FUNCTION 144c26090 FUN_144c26090 body=92 status=ok
// SIG undefined FUN_144c26090(void)

undefined8 * FUN_144c26090(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_144f84d90(param_1 + 0x18,param_3);
  FUN_144c24cd0(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18));
  *param_2 = param_3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 144c260f0 FUN_144c260f0 body=4 status=ok
// SIG undefined FUN_144c260f0(void)

undefined4 FUN_144c260f0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



// FUNCTION 144c26100 FUN_144c26100 body=99 status=ok
// SIG undefined FUN_144c26100(void)

longlong FUN_144c26100(longlong param_1,ulonglong param_2)

{
  FUN_144f84ab0(param_1 + 0x18);
  FUN_144f87ed0(param_1);
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 144c26170 FUN_144c26170 body=1523 status=ok
// SIG undefined FUN_144c26170(void)

void FUN_144c26170(undefined8 *param_1,undefined8 *param_2,char param_3,longlong param_4)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  int *piVar9;
  longlong lVar10;
  char *pcVar11;
  char local_res8 [8];
  longlong local_res10;
  longlong local_188;
  char local_180;
  undefined8 local_178 [20];
  undefined8 local_d8 [22];
  
  puVar8 = (uint *)FUN_144bef800(param_2[1],local_res8);
  switch(*puVar8 & 0x1f) {
  case 0:
    FUN_144c271d0(param_1,param_2,param_3,param_4);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  case 1:
    FUN_144c271e0(param_1,param_2,param_3,param_4);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  case 2:
    FUN_144bdf360(local_d8);
    local_res8[0] = '\0';
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),&local_res10,*param_2,param_2[1],
               local_res8);
    pcVar11 = "false";
    if (local_res8[0] != '\0') {
      pcVar11 = "true";
    }
    FUN_144bdff50(local_d8,"<bool value=\"%s\"/>",pcVar11);
    FUN_144c26800(param_1,param_3,local_d8[0]);
    FUN_144bdf2f0(local_d8);
    break;
  case 3:
    local_res10 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_res10);
    if (local_res10 == 0) {
      if (param_3 == '\0') {
        FUN_144c24830(*param_1,local_res8,&DAT_14996de1b);
      }
      puVar1 = (undefined8 *)*param_1;
      iVar6 = FUN_144bfbbb0("<string/>");
      puVar2 = (ulonglong *)*puVar1;
      uVar3 = *puVar2;
      if (puVar2[1] < uVar3 + (longlong)iVar6) {
        FUN_144beb1c0(puVar2,"<string/>");
        FUN_144c26880(param_1,param_2,param_4);
      }
      else {
        FUN_144b3d470();
        *puVar2 = uVar3 + (longlong)iVar6;
        FUN_144c26880(param_1,param_2,param_4);
      }
    }
    else {
      FUN_144bdf390(local_d8);
      FUN_144be12b0(local_d8,&DAT_149993038,"&amp;",1);
      FUN_144be12b0(local_d8,&DAT_149981f0c,&DAT_149981f04,1);
      FUN_144be12b0(local_d8,&DAT_149981f18,&DAT_149981f10,1);
      FUN_144be12b0(local_d8,&DAT_149981f00,"&quot;",1);
      FUN_144be12b0(local_d8,&DAT_14999304c,"&apos;",1);
      FUN_144bdf360(local_178);
      FUN_144bdff50(local_178,"<string value=\"%s\"/>",local_d8[0]);
      FUN_144c26800(param_1,param_3,local_178[0]);
      FUN_144bdf2f0(local_178);
      FUN_144bdf2f0(local_d8);
      FUN_144c26880(param_1,param_2,param_4);
    }
    break;
  case 4:
    local_188 = 0;
    local_180 = '\0';
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_188);
    cVar5 = FUN_144beff30(param_2[1]);
    lVar10 = local_188;
    if (cVar5 == '\0') {
      FUN_144bdf360(local_178);
      pcVar11 = "<integer value=\"%llu\"/>";
    }
    else {
      if (local_180 != '\0') {
        lVar10 = -local_188;
      }
      FUN_144bdf360(local_178);
      pcVar11 = "<integer value=\"%lld\"/>";
    }
    FUN_144bdff50(local_178,pcVar11,lVar10);
    FUN_144c26800(param_1,param_3,local_178[0]);
    FUN_144bdf2f0(local_178);
    if ((param_4 != 0) && (lVar10 = FUN_144f674c0(param_4,param_2), lVar10 != 0)) {
      FUN_144bdf360(local_178);
      FUN_144bdff50(local_178,"<!-- %s -->",lVar10);
      param_1 = (undefined8 *)*param_1;
      iVar6 = FUN_144bfbbb0(local_178[0]);
      puVar2 = (ulonglong *)*param_1;
      uVar3 = *puVar2;
      if (puVar2[1] < uVar3 + (longlong)iVar6) {
        FUN_144beb1c0(puVar2,local_178[0]);
        FUN_144bdf2f0(local_178);
      }
      else {
        FUN_144b3d470();
        *puVar2 = uVar3 + (longlong)iVar6;
        FUN_144bdf2f0(local_178);
      }
    }
    break;
  case 5:
    local_res10 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_res10);
    piVar9 = (int *)FUN_144bef800(param_2[1],local_res8);
    lVar10 = local_res10;
    if (*piVar9 == 0x174605) {
      lVar10 = FUN_144bea840(*(undefined4 *)*param_2);
    }
    FUN_144bdf360(local_d8);
    local_res10 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x30))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
               &local_res10);
    FUN_144bdff50(local_d8,"<real dec=\"%lg\" hex=\"#%llx\"/>",local_res10,lVar10);
    FUN_144c26800(param_1,param_3,local_d8[0]);
    if ((param_4 != 0) && (lVar10 = FUN_144f674c0(param_4,param_2), lVar10 != 0)) {
      FUN_144bdf360(local_178);
      FUN_144bdff50(local_178,"<!-- %s -->",lVar10);
      param_1 = (undefined8 *)*param_1;
      iVar6 = FUN_144bfbbb0(local_178[0]);
      puVar2 = (ulonglong *)*param_1;
      uVar3 = *puVar2;
      if (puVar2[1] < uVar3 + (longlong)iVar6) {
        FUN_144beb1c0(puVar2,local_178[0]);
      }
      else {
        FUN_144b3d470();
        *puVar2 = uVar3 + (longlong)iVar6;
      }
      FUN_144bdf2f0(local_178);
    }
    FUN_144bdf2f0(local_d8);
    break;
  case 6:
    uVar7 = (**(code **)(*(longlong *)param_1[1] + 0x18))((longlong *)param_1[1],param_2);
    FUN_144bdf360(local_178);
    FUN_144bdff50(local_178,"<pointer id=\"object%d\"/>",uVar7);
    FUN_144c26800(param_1,param_3,local_178[0]);
    FUN_144bdf2f0(local_178);
    break;
  case 7:
    FUN_144c26930(param_1,param_2,param_3,param_4);
    break;
  case 8:
    FUN_144c26d20(param_1,param_2,param_3,param_4);
    break;
  default:
    FUN_144bfc170(0x261011c5,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h"
                  ,0x3c,"Bad var visitor switch");
  }
  return;
}



// FUNCTION 144c26790 FUN_144c26790 body=112 status=ok
// SIG undefined FUN_144c26790(void)

void FUN_144c26790(undefined8 param_1,longlong param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  puVar2 = (undefined8 *)FUN_144bef430(*(undefined8 *)(param_2 + 8),local_28,&DAT_14c6df050);
  uVar1 = *puVar2;
  if ((local_18 & 1) != 0) {
    FUN_144be6b30(local_18 & 0xfffffffffffffffe);
  }
  FUN_144c26170(param_1,param_2,param_3,uVar1);
  return;
}



// FUNCTION 144c26800 FUN_144c26800 body=125 status=ok
// SIG undefined FUN_144c26800(void)

void FUN_144c26800(undefined8 *param_1,char param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 local_res10 [8];
  
  if (param_2 == '\0') {
    FUN_144c24830(*param_1,local_res10,&DAT_14996de1b);
  }
  param_1 = (undefined8 *)*param_1;
  iVar3 = FUN_144bfbbb0(param_3);
  puVar1 = (ulonglong *)*param_1;
  uVar2 = *puVar1;
  if (uVar2 + (longlong)iVar3 <= puVar1[1]) {
    FUN_144b3d470();
    *puVar1 = uVar2 + (longlong)iVar3;
    return;
  }
  FUN_144beb1c0(puVar1,param_3);
  return;
}



// FUNCTION 144c26880 FUN_144c26880 body=173 status=ok
// SIG undefined FUN_144c26880(void)

void FUN_144c26880(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 local_a8 [20];
  
  if ((param_3 != 0) && (lVar4 = FUN_144f674c0(param_3), lVar4 != 0)) {
    FUN_144bdf360(local_a8);
    FUN_144bdff50(local_a8,"<!-- %s -->",lVar4);
    param_1 = (undefined8 *)*param_1;
    iVar3 = FUN_144bfbbb0(local_a8[0]);
    puVar1 = (ulonglong *)*param_1;
    uVar2 = *puVar1;
    if (puVar1[1] < uVar2 + (longlong)iVar3) {
      FUN_144beb1c0(puVar1,local_a8[0]);
    }
    else {
      FUN_144b3d470();
      *puVar1 = uVar2 + (longlong)iVar3;
    }
    FUN_144bdf2f0(local_a8);
  }
  return;
}



// FUNCTION 144c26930 FUN_144c26930 body=993 status=ok
// SIG undefined FUN_144c26930(void)

void FUN_144c26930(longlong *param_1,longlong param_2,char param_3)

{
  undefined8 *puVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  char local_res18 [8];
  undefined8 local_358;
  undefined8 *local_350;
  undefined8 *local_348;
  undefined1 local_330 [16];
  ulonglong local_320;
  undefined8 local_318 [20];
  undefined8 local_278 [20];
  undefined8 local_1d8 [20];
  undefined1 local_138 [256];
  
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  }
  local_res18[0] = param_3;
  FUN_144bdf360(local_1d8);
  uVar6 = FUN_144beee40(*(undefined8 *)(param_2 + 8));
  FUN_144bdff50(local_1d8,"<record> <!-- %s -->",uVar6);
  FUN_144c24830(*param_1,local_res8,local_1d8[0]);
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  FUN_144bf0830(&local_350,*(undefined8 *)(param_2 + 8),0);
  do {
    do {
      do {
        puVar1 = local_350 + 1;
        if ((local_348 <= local_350 + 1) &&
           (cVar4 = FUN_144bf0850(&local_350), puVar1 = local_350, cVar4 == '\0')) {
          *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
          FUN_144c24830(*param_1,local_res8,"</record>");
          if (local_res18[0] != '\0') {
            *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
            FUN_144c24830(*param_1,local_res18,&DAT_14996de1b);
          }
          FUN_144bdf2f0(local_1d8);
          return;
        }
        local_350 = puVar1;
        pbVar7 = (byte *)FUN_144bf04d0(local_350,local_res8);
      } while ((*pbVar7 & 0x30) == 0);
      local_358 = *local_350;
      pbVar7 = (byte *)FUN_144bf04d0(&local_358,local_res10);
    } while (((~*pbVar7 & 1) == 0) || (lVar8 = FUN_144bf0530(&local_358), lVar8 == 0));
    uVar6 = FUN_144bf0530(&local_358);
    FUN_144bdf390(local_318,uVar6);
    FUN_144be12b0(local_318,&DAT_149993038,"&amp;",1);
    FUN_144be12b0(local_318,&DAT_149981f0c,&DAT_149981f04,1);
    FUN_144be12b0(local_318,&DAT_149981f18,&DAT_149981f10,1);
    FUN_144be12b0(local_318,&DAT_149981f00,"&quot;",1);
    FUN_144be12b0(local_318,&DAT_14999304c,"&apos;",1);
    FUN_144bdf360(local_278);
    FUN_144bdff50(local_278,"<field name=\"%s\">",local_318[0]);
    uVar6 = local_278[0];
    puVar1 = (undefined8 *)*param_1;
    puVar2 = (ulonglong *)*puVar1;
    uVar3 = *puVar2;
    if (puVar2[1] < uVar3 + 1) {
      lVar8 = FUN_144beb1c0(puVar2,&DAT_14997f410,1);
      if (lVar8 == 1) goto LAB_144c26b62;
    }
    else {
      FUN_144b3d470();
      *puVar2 = uVar3 + 1;
LAB_144c26b62:
      iVar5 = *(int *)(puVar1 + 1) * 2;
      if (iVar5 < 0x100) {
        lVar8 = (longlong)iVar5;
        FUN_144bfbef0(local_138,0x20,lVar8);
        if (iVar5 != 0) goto LAB_144c26b9d;
      }
      else {
        FUN_144bfbef0(local_138,0x20,0x100);
        lVar8 = 0x100;
LAB_144c26b9d:
        puVar2 = (ulonglong *)*puVar1;
        uVar3 = *puVar2;
        if (puVar2[1] < uVar3 + lVar8) {
          lVar9 = FUN_144beb1c0(puVar2,local_138,lVar8);
          if (lVar9 != lVar8) goto LAB_144c26bfe;
        }
        else {
          FUN_144b3d470();
          *puVar2 = uVar3 + lVar8;
        }
      }
      iVar5 = FUN_144bfbbb0(uVar6);
      puVar2 = (ulonglong *)*puVar1;
      uVar3 = *puVar2;
      if (puVar2[1] < uVar3 + (longlong)iVar5) {
        FUN_144beb1c0(puVar2,uVar6);
      }
      else {
        FUN_144b3d470();
        *puVar2 = uVar3 + (longlong)iVar5;
      }
    }
LAB_144c26bfe:
    uVar6 = FUN_144bebf80(param_2,local_330,local_358);
    FUN_144c26790(param_1,uVar6,1);
    if ((local_320 & 1) != 0) {
      FUN_144be6b30(local_320 & 0xfffffffffffffffe);
    }
    puVar1 = (undefined8 *)*param_1;
    iVar5 = FUN_144bfbbb0("</field>");
    puVar2 = (ulonglong *)*puVar1;
    uVar3 = *puVar2;
    if (puVar2[1] < uVar3 + (longlong)iVar5) {
      FUN_144beb1c0(puVar2,"</field>");
    }
    else {
      FUN_144b3d470();
      *puVar2 = uVar3 + (longlong)iVar5;
    }
    FUN_144bdf2f0(local_278);
    FUN_144bdf2f0(local_318);
  } while( true );
}



// FUNCTION 144c26d20 FUN_144c26d20 body=1188 status=ok
// SIG undefined FUN_144c26d20(void)

void FUN_144c26d20(longlong *param_1,undefined8 *param_2,char param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
  longlong local_228;
  longlong lStack_220;
  undefined8 local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  ulonglong local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  ulonglong uStack_188;
  undefined8 local_178 [20];
  undefined1 local_d8 [160];
  
  bVar4 = false;
  bVar3 = false;
  local_res18[0] = 0;
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  }
  local_228 = 0;
  lStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             &local_228);
  lVar7 = lStack_220;
  if ((local_210 & 1) != 0) {
    FUN_144be6b30(local_210 & 0xfffffffffffffffe);
  }
  lVar7 = (**(code **)(*(longlong *)param_1[2] + 0x18))((longlong *)param_1[2],&local_1e8,lVar7);
  uVar1 = *(undefined4 *)(lVar7 + 8);
  FUN_144bdf360(local_d8);
  local_228 = 0;
  lStack_220 = 0;
  local_218 = 0;
  local_210 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             &local_228);
  lVar7 = lStack_220;
  if ((local_210 & 1) != 0) {
    FUN_144be6b30(local_210 & 0xfffffffffffffffe);
  }
  if (lVar7 == 0) {
    puVar8 = &DAT_149993060;
  }
  else {
    puVar8 = (undefined *)FUN_144beee90(lVar7,local_d8,0,0);
  }
  FUN_144bdf360(local_178);
  local_208 = 0;
  uStack_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],&local_208
            );
  uVar6 = local_1f8;
  if ((local_1f0 & 1) != 0) {
    FUN_144be6b30(local_1f0 & 0xfffffffffffffffe);
  }
  FUN_144bdff50(local_178,"<array count=\"%d\" elementtypeid=\"type%d\"> <!-- ArrayOf %s -->",
                uVar6 & 0xffffffff,uVar1,puVar8);
  FUN_144c24830(*param_1,local_res18,local_178[0]);
  iVar10 = 0;
  local_228 = 0;
  lStack_220 = 0;
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
  local_218 = 0;
  local_210 = 0;
  (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
            ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
             &local_228);
  lVar7 = lStack_220;
  if ((local_210 & 1) != 0) {
    FUN_144be6b30(local_210 & 0xfffffffffffffffe);
  }
  if (lVar7 != 0) {
    local_1d0 = 0;
    uStack_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
              ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res18,*param_2,param_2[1],
               &local_1d0);
    uVar2 = uStack_1c8;
    if ((local_1b8 & 1) != 0) {
      FUN_144be6b30(local_1b8 & 0xfffffffffffffffe);
    }
    puVar9 = (undefined8 *)FUN_144bef430(uVar2,&local_208,&DAT_14c6df050);
    uVar2 = *puVar9;
    if ((local_1f8 & 1) != 0) {
      FUN_144be6b30(local_1f8 & 0xfffffffffffffffe);
    }
    while( true ) {
      local_228 = 0;
      lStack_220 = 0;
      local_218 = 0;
      local_210 = 0;
      (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
                ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res8,*param_2,param_2[1],
                 &local_228);
      iVar5 = (int)local_218;
      if ((local_210 & 1) != 0) {
        FUN_144be6b30(local_210 & 0xfffffffffffffffe);
      }
      if (iVar5 <= iVar10) break;
      lVar7 = 0;
      local_228 = 0;
      lStack_220 = 0;
      local_218 = 0;
      local_210 = 0;
      (**(code **)(*(longlong *)(param_2[2] & 0xfffffffffffffffe) + 0x48))
                ((longlong *)(param_2[2] & 0xfffffffffffffffe),local_res10,*param_2,param_2[1],
                 &local_228);
      if ((iVar10 < 0) || ((int)local_218 <= iVar10)) {
        puVar9 = &local_198;
        local_190 = 0;
        uStack_188 = 0;
        bVar3 = true;
      }
      else {
        bVar4 = true;
        lVar7 = local_218._4_4_ * iVar10 + local_228;
        local_1a8 = lStack_220;
        local_1a0 = (ulonglong)((byte)local_210 & 1) | local_210 & 0xfffffffffffffffe;
        if ((ulonglong)((byte)local_210 & 1) != 0) {
          FUN_144be6b20(local_210 & 0xfffffffffffffffe);
        }
        puVar9 = &local_1b0;
      }
      local_1e0 = puVar9[1];
      local_1d8 = puVar9[2];
      puVar9[2] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      local_1e8 = lVar7;
      if ((bVar3) && (bVar3 = false, (uStack_188 & 1) != 0)) {
        FUN_144be6b30(uStack_188 & 0xfffffffffffffffe);
      }
      if ((bVar4) && (bVar4 = false, (local_1a0 & 1) != 0)) {
        FUN_144be6b30(local_1a0 & 0xfffffffffffffffe);
      }
      if ((local_210 & 1) != 0) {
        FUN_144be6b30(local_210 & 0xfffffffffffffffe);
      }
      FUN_144c26170(param_1,&local_1e8,0,uVar2);
      if ((local_1d8 & 1) != 0) {
        FUN_144be6b30(local_1d8 & 0xfffffffffffffffe);
      }
      iVar10 = iVar10 + 1;
    }
  }
  *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
  FUN_144c24830(*param_1,local_res18,"</array>");
  if (param_3 != '\0') {
    *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + -1;
    FUN_144c24830(*param_1,local_res18,&DAT_14996de1b);
  }
  FUN_144bdf2f0(local_178);
  FUN_144bdf2f0(local_d8);
  return;
}



// FUNCTION 144c271d0 FUN_144c271d0 body=1 status=ok
// SIG undefined FUN_144c271d0(void)

void FUN_144c271d0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144c271e0 FUN_144c271e0 body=1 status=ok
// SIG undefined FUN_144c271e0(void)

void FUN_144c271e0(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// FUNCTION 144c271f0 FUN_144c271f0 body=125 status=ok
// SIG undefined FUN_144c271f0(void)

undefined8 * FUN_144c271f0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  DAT_14c6e49f8 = 1;
  local_res8 = 0x48;
  lVar1 = (*DAT_14c787670)(0,&local_res8,0);
  if (DAT_14c787680 != (code *)0x0) {
    (*DAT_14c787680)(lVar1,"XmlWriteFormat");
  }
  if (lVar1 != 0) {
    uVar2 = FUN_144c23c10(lVar1,0);
    *param_1 = uVar2;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c27270 FUN_144c27270 body=186 status=ok
// SIG undefined FUN_144c27270(void)

void FUN_144c27270(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x70);
  EnterCriticalSection(lpCriticalSection);
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x40 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
    FUN_144becfe0(lVar1 + 0x20,3,1);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x40 + lVar1;
  while (lVar2 != lVar1) {
    if ((*(byte *)(lVar2 + -0x10) & 1) != 0) {
      FUN_144be6b30(*(ulonglong *)(lVar2 + -0x10) & 0xfffffffffffffffe);
    }
    FUN_144b49dd0(lVar2 + -0x40);
    lVar2 = lVar2 + -0x40;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x000144c27323. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 144c27330 FUN_144c27330 body=218 status=ok
// SIG undefined FUN_144c27330(void)

void FUN_144c27330(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_res8 [2];
  undefined8 local_res10;
  undefined1 local_218 [16];
  undefined1 local_208 [512];
  
  local_res8[0] = (uint)param_2 & 0x1ff;
  local_res10 = param_2;
  lVar1 = FUN_144c27ac0(param_1 + 0x30,local_res8);
  if (lVar1 == 0) {
    FUN_144bde670(local_218,local_208,0x200);
    uVar2 = FUN_144be6160(local_218,"Category id ");
    uVar2 = FUN_144be6240(uVar2,(uint)param_2 & 0x1ff);
    FUN_144be6160(uVar2," is not a valid id.");
    FUN_144bfc0d0(0x618a364c,local_208,"Process\\hkProcessFactory.cpp",0xe3);
    FUN_144bde6e0(local_218);
  }
  else {
    FUN_144c27410(param_1 + 0x30,lVar1);
    FUN_144c277b0(param_1 + 0x50,&local_res10);
  }
  return;
}



// FUNCTION 144c27410 FUN_144c27410 body=326 status=ok
// SIG undefined FUN_144c27410(void)

void FUN_144c27410(longlong *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar3 = param_2[1];
  if (uVar3 != (int)param_1[1] - 1U) {
    lVar6 = FUN_144c27ac0(param_1,*param_1 + -0xa0 + (longlong)(int)param_1[1] * 0xa0);
    *(uint *)(lVar6 + 4) = uVar3;
  }
  FUN_144bdf2f0(*param_1 + 8 + (longlong)(int)uVar3 * 0xa0);
  lVar6 = param_1[1];
  uVar5 = (int)lVar6 - 1;
  *(uint *)(param_1 + 1) = uVar5;
  if (uVar5 != uVar3) {
    puVar7 = (undefined4 *)(*param_1 + -0xa0 + (longlong)(int)lVar6 * 0xa0);
    puVar1 = (undefined4 *)(*param_1 + (longlong)(int)uVar3 * 0xa0);
    if (puVar1 != puVar7) {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar7;
        FUN_144bdf680(puVar1 + 2,puVar7 + 2);
      }
      FUN_144bdf2f0(puVar7 + 2);
    }
  }
  lVar6 = param_1[2];
  uVar9 = (ulonglong)(int)param_1[3];
  uVar8 = ((longlong)param_2 - lVar6 >> 3) + 1U & uVar9;
  puVar2 = (uint *)(lVar6 + uVar8 * 8);
  iVar4 = *(int *)(lVar6 + 4 + uVar8 * 8);
  while (-1 < iVar4) {
    lVar6 = lVar6 + ((ulonglong)*puVar2 & uVar9 & 0xffffffff) * 8;
    if ((ulonglong)((longlong)param_2 - lVar6 >> 3 & (longlong)(int)param_1[3]) <
        (ulonglong)((longlong)puVar2 - lVar6 >> 3 & (longlong)(int)param_1[3])) {
      *(undefined8 *)param_2 = *(undefined8 *)puVar2;
      param_2 = puVar2;
    }
    lVar6 = param_1[2];
    uVar9 = (ulonglong)(int)param_1[3];
    uVar8 = ((longlong)puVar2 - lVar6 >> 3) + 1U & uVar9;
    puVar2 = (uint *)(lVar6 + uVar8 * 8);
    iVar4 = *(int *)(lVar6 + 4 + uVar8 * 8);
  }
  param_2[1] = 0xffffffff;
  return;
}



// FUNCTION 144c27560 FUN_144c27560 body=194 status=ok
// SIG undefined FUN_144c27560(void)

void FUN_144c27560(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47d8,lVar1,0);
    FUN_144b3ec00(param_1 + 2);
  }
  lVar1 = *param_1;
  for (lVar2 = (longlong)(int)param_1[1] * 0xa0 + lVar1; lVar2 != lVar1; lVar2 = lVar2 + -0xa0) {
    FUN_144bdf2f0(lVar2 + -0x98);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0xc)) && (*param_1 != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,*param_1,
               (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 0xa0);
  }
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000000;
  return;
}



// FUNCTION 144c27630 FUN_144c27630 body=369 status=ok
// SIG undefined FUN_144c27630(void)

undefined8 * FUN_144c27630(undefined8 *param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar1;
  longlong lVar2;
  
  *param_1 = hkProcessFactory::vftable;
  lVar1 = param_1[4];
  lVar2 = (longlong)*(int *)(param_1 + 5) * 0x40 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
    FUN_144becfe0(lVar1 + 0x20,3,1);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xe];
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(lpCriticalSection);
    (*DAT_14c787678)(0,lpCriticalSection,0);
  }
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  if (*(int *)(param_1 + 0xb) != 0) {
    (*DAT_14c787678)(DAT_14c6e47d8,param_1[10],0);
    *(undefined4 *)(param_1 + 0xb) = 0;
    param_1[10] = 0;
  }
  FUN_144c27560(param_1 + 6);
  lVar1 = param_1[4];
  lVar2 = (longlong)*(int *)(param_1 + 5) * 0x40 + lVar1;
  while (lVar2 != lVar1) {
    if ((*(byte *)(lVar2 + -0x10) & 1) != 0) {
      FUN_144be6b30(*(ulonglong *)(lVar2 + -0x10) & 0xfffffffffffffffe);
    }
    FUN_144b49dd0(lVar2 + -0x40);
    lVar2 = lVar2 + -0x40;
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47d0 + 0x18))
              (&PTR_vftable_14c6e47d0,param_1[4],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x2c) & 0x7fffffff) << 6);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
    }
    else {
      FUN_144bda120(param_1,0x78);
    }
  }
  return param_1;
}



// FUNCTION 144c277b0 FUN_144c277b0 body=332 status=ok
// SIG undefined FUN_144c277b0(void)

void FUN_144c277b0(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  uint *puVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  
  iVar8 = (int)param_1[1];
  if (iVar8 <= *(int *)((longlong)param_1 + 0x14)) {
    if (iVar8 == 0) {
      iVar5 = 0;
      iVar7 = 8;
    }
    else {
      iVar5 = iVar8 * 2;
      iVar7 = iVar5;
      if (SBORROW4(iVar8,iVar5) == -iVar8 < 0) goto LAB_144c278c0;
    }
    iVar8 = iVar5;
    if (iVar5 < iVar7) {
      iVar8 = iVar7;
    }
    lVar6 = (**(code **)(PTR_vftable_14c6e47d0 + 8))(&PTR_vftable_14c6e47d0,(longlong)iVar8 << 2);
    if ((lVar6 != 0) && (*param_1 != 0)) {
      if (*(int *)((longlong)param_1 + 0x14) != 0) {
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        lVar4 = param_1[2];
        lVar1 = *param_1 + (longlong)iVar5 * 4;
        if (iVar5 < (int)lVar4) {
          FUN_144bfbed0(lVar6,lVar1,(longlong)*(int *)((longlong)param_1 + 0x14) << 2);
        }
        else {
          lVar3 = (longlong)((int)param_1[1] - iVar5) * 4;
          FUN_144bfbed0(lVar6,lVar1,lVar3);
          FUN_144bfbed0(lVar3 + lVar6,*param_1,(longlong)(int)lVar4 << 2);
        }
      }
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + 0x14);
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    if ((int)param_1[1] != 0) {
      (*DAT_14c787678)(DAT_14c6e47d8,*param_1,0);
    }
    *param_1 = lVar6;
    *(int *)(param_1 + 1) = iVar8;
  }
LAB_144c278c0:
  iVar5 = (int)param_1[2];
  if (iVar5 == iVar8) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar5 = 0;
  }
  puVar2 = (uint *)(*param_1 + (longlong)iVar5 * 4);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *param_2 & 0x1ff;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
  return;
}



// FUNCTION 144c27900 FUN_144c27900 body=341 status=ok
// SIG undefined FUN_144c27900(void)

undefined4 * FUN_144c27900(undefined4 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  if (*param_2 == 0) {
    local_res8 = 0x78;
    puVar2 = (undefined8 *)(*DAT_14c787670)(0,&local_res8,0);
    if (DAT_14c787680 != (code *)0x0) {
      (*DAT_14c787680)(puVar2,"hkProcessFactory");
    }
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      puVar2[1] = 0xffffffff;
      *puVar2 = hkProcessFactory::vftable;
      puVar2[2] = 1;
      *(undefined4 *)(puVar2 + 3) = 0;
      puVar2[4] = 0;
      *(undefined4 *)(puVar2 + 5) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = 0x80000000;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80000000;
      uVar3 = FUN_144b3d480();
      puVar2[8] = uVar3;
      *(undefined4 *)(puVar2 + 9) = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      *(undefined4 *)(puVar2 + 0xd) = 1;
      local_res8 = 0x28;
      lVar4 = (*DAT_14c787670)(0,&local_res8,0);
      if (DAT_14c787680 != (code *)0x0) {
        (*DAT_14c787680)(lVar4,"hkCriticalSection");
      }
      if (lVar4 == 0) {
        puVar2[0xe] = 0;
      }
      else {
        uVar3 = FUN_144b4a250(lVar4,2000);
        puVar2[0xe] = uVar3;
      }
    }
    puVar1 = (undefined8 *)*param_2;
    if ((puVar2 != puVar1) && (*param_2 = (longlong)puVar2, puVar1 != (undefined8 *)0x0)) {
      FUN_144b3f230();
    }
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c27a60 FUN_144c27a60 body=95 status=ok
// SIG undefined FUN_144c27a60(void)

undefined4 * FUN_144c27a60(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    FUN_144b3d910(lVar1);
  }
  lVar2 = *param_2;
  *param_2 = 0;
  if (lVar2 != 0) {
    FUN_144b3f230();
  }
  if (lVar1 != 0) {
    FUN_144b3f230(lVar1);
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 144c27ac0 FUN_144c27ac0 body=109 status=ok
// SIG undefined FUN_144c27ac0(void)

uint * FUN_144c27ac0(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint *puVar6;
  
  iVar1 = *param_2;
  lVar2 = param_1[2];
  uVar3 = iVar1 * -0x61c8864f;
  uVar4 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | iVar1 * -0x4f000000;
  uVar5 = (ulonglong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  while( true ) {
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
    puVar6 = (uint *)(lVar2 + uVar5 * 8);
    if ((*puVar6 == uVar4) && (*(int *)((ulonglong)uVar3 * 0xa0 + *param_1) == iVar1)) break;
    uVar5 = ((longlong)puVar6 - lVar2 >> 3) + 1U & (longlong)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar2 + 4 + uVar5 * 8);
  }
  return puVar6;
}



// FUNCTION 144c27b70 FUN_144c27b70 body=110 status=ok
// SIG undefined FUN_144c27b70(void)

void FUN_144c27b70(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000010;
        FUN_144c29760(param_1,param_2);
      }
      param_2 = param_2 + 0x90;
      param_1 = param_1 + 0x12;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c27be0 FUN_144c27be0 body=134 status=ok
// SIG undefined FUN_144c27be0(void)

void FUN_144c27be0(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x90 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 3);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -0x24;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144c27c70 FUN_144c27c70 body=188 status=ok
// SIG undefined FUN_144c27c70(void)

void FUN_144c27c70(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144c2b9f0(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c27db0 FUN_144c27db0 body=110 status=ok
// SIG undefined FUN_144c27db0(void)

void FUN_144c27db0(longlong *param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  ulonglong uVar1;
  
  if (0 < (int)param_4) {
    uVar1 = (ulonglong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        *(undefined4 *)(param_1 + 1) = 0;
        *param_1 = (longlong)(param_1 + 2);
        *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000010;
        FUN_144c2a520(param_1,param_2);
      }
      param_2 = param_2 + 0x90;
      param_1 = param_1 + 0x12;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}



// FUNCTION 144c27e20 FUN_144c27e20 body=134 status=ok
// SIG undefined FUN_144c27e20(void)

void FUN_144c27e20(longlong param_1,undefined8 param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    puVar1 = (uint *)(lVar2 * 0x90 + 0xc + param_1);
    do {
      puVar1[-1] = 0;
      if ((-1 < (int)*puVar1) && (*(longlong *)(puVar1 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,*(longlong *)(puVar1 + -3),
                   (ulonglong)(*puVar1 & 0x7fffffff) << 3);
      }
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      *puVar1 = 0x80000000;
      puVar1 = puVar1 + -0x24;
      lVar2 = lVar2 + -1;
    } while (-1 < lVar2);
  }
  return;
}



// FUNCTION 144c27eb0 FUN_144c27eb0 body=188 status=ok
// SIG undefined FUN_144c27eb0(void)

void FUN_144c27eb0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  undefined8 uVar4;
  uint *puVar5;
  longlong lVar6;
  
  if (0 < param_4) {
    puVar5 = (uint *)(param_1 + 0xc);
    lVar6 = (longlong)param_4;
    do {
      puVar2 = (uint *)((param_2 - param_1) + -0xc + (longlong)puVar5);
      puVar1 = puVar5 + -3;
      if (puVar2 != puVar1) {
        uVar4 = *(undefined8 *)puVar2;
        uVar3 = *(uint *)((longlong)puVar5 + (param_2 - param_1) + -4);
        if ((int)(*puVar5 & 0x7fffffff) < (int)uVar3) {
          FUN_144c2ba90(puVar1,&PTR_vftable_14c6e47a0,(longlong)(int)uVar3);
        }
        FUN_144b3d470(*(undefined8 *)puVar1,uVar4,(longlong)(int)uVar3 * 8);
        puVar5[-1] = uVar3;
      }
      puVar5 = puVar5 + 0x24;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c28090 FUN_144c28090 body=404 status=ok
// SIG undefined FUN_144c28090(void)

/* WARNING: Removing unreachable block (ram,0x000144c28126) */

void FUN_144c28090(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  if (0 < param_4) {
    puVar5 = (undefined4 *)(param_1 + 0x90);
    param_2 = param_2 - param_1;
    lVar7 = (longlong)param_4;
    do {
      uVar6 = 0;
      plVar1 = (longlong *)(puVar5 + -0x24);
      if (plVar1 != (longlong *)0x0) {
        puVar5[-0x22] = 0;
        plVar8 = (longlong *)(param_2 + -0x90 + (longlong)puVar5);
        puVar5[-0x21] = 0x80000010;
        *plVar1 = (longlong)(puVar5 + -0x20);
        *puVar5 = 0;
        if ((plVar8 != plVar1) && (iVar3 = *(int *)((longlong)puVar5 + param_2), 0 < iVar3)) {
          if (0 < iVar3) {
            FUN_144c2b0d0(plVar1,&PTR_vftable_14c6e47a0,(iVar3 + 0x2a9U) / 0x2aa);
          }
          *puVar5 = *(undefined4 *)((longlong)puVar5 + param_2);
          uVar4 = *(uint *)((longlong)puVar5 + param_2);
          if (uVar4 / 0x2aa != 0) {
            do {
              FUN_144bfbed0(*(undefined8 *)(*plVar1 + (longlong)(int)uVar6 * 8),
                            *(undefined8 *)(*plVar8 + (longlong)(int)uVar6 * 8),0x2000);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar4 / 0x2aa);
          }
          if (uVar4 % 0x2aa != 0) {
            lVar2 = (ulonglong)(uVar4 / 0x2aa) * 8;
            FUN_144bfbed0(*(undefined8 *)(lVar2 + *plVar1),*(undefined8 *)(lVar2 + *plVar8),
                          (uVar4 % 0x2aa) * 0xc);
          }
        }
      }
      puVar5 = puVar5 + 0x26;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c28230 FUN_144c28230 body=342 status=ok
// SIG undefined FUN_144c28230(void)

void FUN_144c28230(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar4 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    piVar5 = (int *)(lVar4 * 0x98 + 0xc + param_1);
    do {
      iVar2 = piVar5[-1];
      if (iVar2 != 0) {
        if (iVar2 * 0x2aa < 0) {
          FUN_144c2b0d0(piVar5 + -3,&PTR_vftable_14c6e47a0,(iVar2 * -0x2aa + 0x2a9U) / 0x2aa);
        }
        if ((piVar5[0x21] < 0) || (0 < piVar5[0x21])) {
          piVar5[0x21] = 0;
        }
        plVar3 = *(longlong **)(piVar5 + -3);
        plVar1 = plVar3 + piVar5[-1];
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 != 0) {
            (*DAT_14c787678)(DAT_14c6e47a8,*plVar3,0);
          }
        }
        piVar5[-1] = 0;
        if ((*(int **)(piVar5 + -3) != piVar5 + 1) && (-1 < *piVar5)) {
          FUN_144c2b400(&PTR_vftable_14c6e47a0,piVar5 + -3,piVar5 + 1,0x10);
        }
      }
      piVar5[-1] = 0;
      if ((-1 < *piVar5) && (*(longlong *)(piVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      piVar5[-3] = 0;
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      piVar5 = piVar5 + -0x26;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 144c28400 FUN_144c28400 body=390 status=ok
// SIG undefined FUN_144c28400(void)

void FUN_144c28400(longlong *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong local_38 [2];
  
  if (0 < param_4) {
    param_2 = param_2 - (longlong)param_1;
    lVar8 = 0;
    lVar7 = (longlong)param_4;
    do {
      if (param_1 != (longlong *)0x0) {
        plVar1 = (longlong *)((longlong)param_1 + param_2);
        *param_1 = 0;
        param_1[1] = 0;
        lVar3 = *plVar1;
        if (lVar3 != 0) {
          iVar2 = *(int *)((longlong)param_1 + param_2 + 8);
          lVar3 = lVar3 + (longlong)plVar1;
          if ((lVar3 != 0) && (0 < iVar2)) {
            *(undefined4 *)((longlong)param_1 + 0xc) = 0;
            uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
            uVar5 = uVar5 | (int)uVar5 >> 8;
            uVar5 = uVar5 | (int)uVar5 >> 4;
            uVar5 = uVar5 | (int)uVar5 >> 2;
            uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
            if ((int)uVar5 < iVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_38[0] = (longlong)(int)uVar5 << 7;
            lVar4 = (*DAT_14c787670)(0,local_38,0);
            lVar6 = *param_1 + (longlong)param_1;
            if (*param_1 == 0) {
              lVar6 = lVar8;
            }
            FUN_144b3d470(lVar4,lVar6,(longlong)(int)param_1[1] << 7);
            if (*(int *)((longlong)param_1 + 0xc) < 0) {
              lVar6 = *param_1 + (longlong)param_1;
              if (*param_1 == 0) {
                lVar6 = lVar8;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            *(int *)(param_1 + 1) = iVar2;
            lVar6 = lVar8;
            if (lVar4 != 0) {
              lVar6 = lVar4 - (longlong)param_1;
            }
            *param_1 = lVar6;
            *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
            FUN_144b3d470(lVar6 + (longlong)param_1,lVar3);
          }
        }
      }
      param_1 = param_1 + 2;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 144c28590 FUN_144c28590 body=95 status=ok
// SIG undefined FUN_144c28590(void)

void FUN_144c28590(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    plVar2 = (longlong *)(lVar3 * 0x10 + param_1);
    do {
      if (*(int *)((longlong)plVar2 + 0xc) < 0) {
        lVar1 = *plVar2 + (longlong)plVar2;
        if (*plVar2 == 0) {
          lVar1 = 0;
        }
        (*DAT_14c787678)(0,lVar1,0);
      }
      plVar2 = plVar2 + -2;
      lVar3 = lVar3 + -1;
    } while (-1 < lVar3);
  }
  return;
}



// FUNCTION 144c285f0 FUN_144c285f0 body=388 status=ok
// SIG undefined FUN_144c285f0(void)

void FUN_144c285f0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong local_38 [2];
  
  if (0 < param_4) {
    puVar8 = (uint *)(param_2 + 8);
    param_1 = param_1 - param_2;
    lVar12 = 0;
    lVar9 = (longlong)param_4;
    do {
      puVar10 = (uint *)(param_1 + -8 + (longlong)puVar8);
      puVar1 = puVar8 + -2;
      if (puVar1 != puVar10) {
        lVar7 = *(longlong *)puVar1 + (longlong)puVar1;
        if (*(longlong *)puVar1 == 0) {
          lVar7 = lVar12;
        }
        uVar11 = *puVar8;
        if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
          uVar11 = puVar8[1] & 0x7fffffff;
        }
        if ((lVar7 == 0) || ((longlong)(int)uVar11 << 7 == 0)) {
          if (*(int *)(param_1 + 4 + (longlong)puVar8) < 0) {
            lVar7 = *(longlong *)puVar10 + (longlong)puVar10;
            if (*(longlong *)puVar10 == 0) {
              lVar7 = lVar12;
            }
            (*DAT_14c787678)(0,lVar7,0);
          }
          puVar10[0] = 0;
          puVar10[1] = 0;
          *(undefined8 *)(param_1 + (longlong)puVar8) = 0;
        }
        else {
          lVar3 = *(longlong *)puVar10;
          uVar2 = *(uint *)(param_1 + 4 + (longlong)puVar8);
          uVar5 = uVar2 & 0x7fffffff;
          lVar6 = lVar3 + (longlong)puVar10;
          if (lVar3 == 0) {
            lVar6 = lVar12;
          }
          uVar4 = *(uint *)(param_1 + (longlong)puVar8);
          if ((int)*(uint *)(param_1 + (longlong)puVar8) < (int)uVar5) {
            uVar4 = uVar5;
          }
          if (uVar11 != uVar4) {
            if ((int)uVar2 < 0) {
              lVar6 = lVar3 + (longlong)puVar10;
              if (lVar3 == 0) {
                lVar6 = lVar12;
              }
              (*DAT_14c787678)(0,lVar6,0);
            }
            local_38[0] = (longlong)(int)uVar11 << 7;
            lVar6 = (*DAT_14c787670)(0,local_38,0);
          }
          FUN_144b3d470(lVar6,lVar7);
          lVar7 = lVar6 - (longlong)puVar10;
          if (lVar6 == 0) {
            lVar7 = lVar12;
          }
          *(longlong *)puVar10 = lVar7;
          *(uint *)(param_1 + (longlong)puVar8) = *puVar8;
          uVar11 = *puVar8;
          if ((int)*puVar8 < (int)(puVar8[1] & 0x7fffffff)) {
            uVar11 = puVar8[1] & 0x7fffffff;
          }
          *(uint *)(param_1 + 4 + (longlong)puVar8) = uVar11 | 0x80000000;
        }
      }
      puVar8 = puVar8 + 4;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 144c287d0 FUN_144c287d0 body=346 status=ok
// SIG undefined FUN_144c287d0(void)

/* WARNING: Removing unreachable block (ram,0x000144c28866) */

void FUN_144c287d0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  if (0 < param_4) {
    puVar3 = (undefined4 *)(param_1 + 0x90);
    param_2 = param_2 - param_1;
    lVar6 = (longlong)param_4;
    do {
      uVar5 = 0;
      plVar1 = (longlong *)(puVar3 + -0x24);
      if (plVar1 != (longlong *)0x0) {
        puVar3[-0x22] = 0;
        plVar8 = (longlong *)(param_2 + -0x90 + (longlong)puVar3);
        puVar3[-0x21] = 0x80000010;
        *plVar1 = (longlong)(puVar3 + -0x20);
        *puVar3 = 0;
        if ((plVar8 != plVar1) && (iVar2 = *(int *)((longlong)puVar3 + param_2), 0 < iVar2)) {
          if (0 < iVar2) {
            FUN_144c2b190(plVar1,&PTR_vftable_14c6e47a0,iVar2 + 0x3fU >> 6);
          }
          *puVar3 = *(undefined4 *)((longlong)puVar3 + param_2);
          uVar7 = *(uint *)((longlong)puVar3 + param_2) >> 6;
          uVar4 = *(uint *)((longlong)puVar3 + param_2) & 0x3f;
          if (uVar7 != 0) {
            do {
              FUN_144bfbed0(*(undefined8 *)(*plVar1 + (longlong)(int)uVar5 * 8),
                            *(undefined8 *)(*plVar8 + (longlong)(int)uVar5 * 8),0x2000);
              uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
          }
          if (uVar4 != 0) {
            FUN_144bfbed0(*(undefined8 *)(*plVar1 + (ulonglong)uVar7 * 8),
                          *(undefined8 *)(*plVar8 + (ulonglong)uVar7 * 8),uVar4 << 7);
          }
        }
      }
      puVar3 = puVar3 + 0x26;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



// FUNCTION 144c28930 FUN_144c28930 body=322 status=ok
// SIG undefined FUN_144c28930(void)

void FUN_144c28930(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  
  lVar4 = (longlong)(param_3 + -1);
  if (-1 < param_3 + -1) {
    piVar5 = (int *)(lVar4 * 0x98 + 0xc + param_1);
    do {
      iVar2 = piVar5[-1];
      if (iVar2 != 0) {
        if (iVar2 << 6 < 0) {
          FUN_144c2b190(piVar5 + -3,&PTR_vftable_14c6e47a0,iVar2 * -0x40 + 0x3fU >> 6);
        }
        if ((piVar5[0x21] < 0) || (0 < piVar5[0x21])) {
          piVar5[0x21] = 0;
        }
        plVar3 = *(longlong **)(piVar5 + -3);
        plVar1 = plVar3 + piVar5[-1];
        for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
          if (*plVar3 != 0) {
            (*DAT_14c787678)(DAT_14c6e47a8,*plVar3,0);
          }
        }
        piVar5[-1] = 0;
        if ((*(int **)(piVar5 + -3) != piVar5 + 1) && (-1 < *piVar5)) {
          FUN_144c2b250(&PTR_vftable_14c6e47a0,piVar5 + -3,piVar5 + 1,0x10);
        }
      }
      piVar5[-1] = 0;
      if ((-1 < *piVar5) && (*(longlong *)(piVar5 + -3) != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))(&PTR_vftable_14c6e47a0);
      }
      piVar5[-3] = 0;
      piVar5[-2] = 0;
      *piVar5 = -0x80000000;
      piVar5 = piVar5 + -0x26;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  return;
}



// FUNCTION 144c28ac0 FUN_144c28ac0 body=147 status=ok
// SIG undefined FUN_144c28ac0(void)

void FUN_144c28ac0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_2 + 0x1d);
  if ((undefined8 *)(param_2 + 0x28) != puVar1) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    iVar2 = *(int *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) < iVar2) {
      FUN_144c2b360(puVar1,&PTR_vftable_14c6e47a0,(longlong)iVar2);
    }
    FUN_144b3d470(*puVar1,uVar3,(longlong)iVar2 << 4);
    *(int *)(param_1 + 0x30) = iVar2;
  }
  return;
}



// FUNCTION 144c28b60 FUN_144c28b60 body=3069 status=ok
// SIG undefined FUN_144c28b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c28b60(longlong param_1,float *param_2,uint *param_3)

{
  char cVar1;
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined4 in_EAX;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  uint *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  uint *puVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  uint uVar40;
  float fVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 local_2d8 [16];
  float local_2c8 [4];
  float local_2b8 [4];
  float local_2a8;
  uint local_2a4;
  float local_298 [4];
  float local_288 [4];
  uint local_278;
  uint local_274;
  undefined1 local_268 [592];
  
  iVar8 = *(int *)(param_1 + 0xc);
  if (iVar8 != 0) {
    if (iVar8 == 1) {
      FUN_144c29b60(param_1,param_2,local_298,local_2c8,2);
      FUN_144c29b60(param_1,local_298,param_3,param_3 + 0xc,1);
      FUN_144c29b60(param_1,local_2c8,param_3 + 0x18,param_3 + 0x24,1);
      return;
    }
    if (iVar8 != 2) {
      FUN_144bde670(local_2d8,local_268,0x200);
      FUN_144be6160(local_2d8,"Partition method not implemented");
      iVar8 = FUN_144bfc110(0x4b23e9b2,local_268,"DataStructures\\SimdTree\\hkcdSimdTree.cpp",0x70);
      if (iVar8 != 0) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FUN_144bde6e0(local_2d8);
      return;
    }
    FUN_144c29f20(param_1,param_2,local_298,local_2c8,2);
    FUN_144c29f20(param_1,local_298,param_3,param_3 + 0xc,1);
    FUN_144c29f20(param_1,local_2c8,param_3 + 0x18,param_3 + 0x24,1);
    return;
  }
  fVar39 = param_2[4] - *param_2;
  fVar41 = param_2[5] - param_2[1];
  fVar44 = param_2[6] - param_2[2];
  auVar36._4_4_ = fVar39;
  auVar36._0_4_ = fVar39;
  auVar36._8_4_ = fVar39;
  auVar36._12_4_ = fVar39;
  auVar29._4_4_ = fVar44;
  auVar29._0_4_ = fVar44;
  auVar29._8_4_ = fVar44;
  auVar29._12_4_ = fVar44;
  auVar35._4_4_ = fVar41;
  auVar35._0_4_ = fVar41;
  auVar35._8_4_ = fVar41;
  auVar35._12_4_ = fVar41;
  auVar36 = maxps(auVar35,auVar36);
  pauVar12 = (undefined1 (*) [16])((longlong)(int)param_2[8] * 0x10 + *(longlong *)(param_1 + 0x28))
  ;
  auVar36 = maxps(auVar29,auVar36);
  auVar30._4_4_ = -(uint)(auVar36._4_4_ <= fVar41);
  auVar30._0_4_ = -(uint)(auVar36._0_4_ <= fVar39);
  auVar30._8_4_ = -(uint)(auVar36._8_4_ <= fVar44);
  auVar30._12_4_ = -(uint)(auVar36._12_4_ <= param_2[7] - param_2[3]);
  uVar9 = movmskps(in_EAX,auVar30);
  pauVar10 = (undefined1 (*) [16])(ulonglong)(uVar9 & 7);
  pauVar17 = pauVar12 + (longlong)(int)param_2[9] + -1;
  uVar49 = (uint)((int)_DAT_14c6dac70 >> 0x1f) >> 1 ^ _DAT_14c6dac70;
  uVar50 = (uint)((int)uRam000000014c6dac74 >> 0x1f) >> 1 ^ uRam000000014c6dac74;
  uVar52 = (uint)((int)uRam000000014c6dac78 >> 0x1f) >> 1 ^ uRam000000014c6dac78;
  uVar54 = (uint)((int)uRam000000014c6dac7c >> 0x1f) >> 1 ^ uRam000000014c6dac7c;
  lVar20 = (longlong)(char)pauVar10[0x14998f5c][0];
  fVar39 = (param_2[lVar20 + 4] + param_2[lVar20]) * 0.5;
  uVar21 = (uint)((int)fVar39 >> 0x1f) >> 1 ^ (uint)fVar39;
  pauVar13 = pauVar12;
  uVar23 = _DAT_14c6dac60;
  uVar42 = uRam000000014c6dac64;
  uVar45 = uRam000000014c6dac68;
  uVar47 = uRam000000014c6dac6c;
  uVar9 = _DAT_14c6dac60;
  uVar51 = uRam000000014c6dac64;
  uVar53 = uRam000000014c6dac68;
  uVar55 = uRam000000014c6dac6c;
  uVar56 = uVar49;
  uVar58 = uVar50;
  uVar60 = uVar52;
  uVar62 = uVar54;
LAB_144c28db5:
  if (pauVar13 <= pauVar17) {
    do {
      pauVar14 = pauVar13;
      pauVar13 = pauVar14;
      if ((int)uVar21 <= *(int *)(*pauVar14 + lVar20 * 4)) break;
      pauVar13 = pauVar14 + 1;
      uVar22 = *(uint *)*pauVar14;
      uVar26 = *(uint *)(*pauVar14 + 4);
      uVar27 = *(uint *)(*pauVar14 + 8);
      uVar28 = *(uint *)(*pauVar14 + 0xc);
      uVar23 = uVar23 & -(uint)((int)uVar23 < (int)uVar22) |
               ~-(uint)((int)uVar23 < (int)uVar22) & uVar22;
      uVar42 = uVar42 & -(uint)((int)uVar42 < (int)uVar26) |
               ~-(uint)((int)uVar42 < (int)uVar26) & uVar26;
      uVar45 = uVar45 & -(uint)((int)uVar45 < (int)uVar27) |
               ~-(uint)((int)uVar45 < (int)uVar27) & uVar27;
      uVar47 = uVar47 & -(uint)((int)uVar47 < (int)uVar28) |
               ~-(uint)((int)uVar47 < (int)uVar28) & uVar28;
      uVar49 = uVar49 & -(uint)((int)uVar22 < (int)uVar49) |
               ~-(uint)((int)uVar22 < (int)uVar49) & uVar22;
      uVar50 = uVar50 & -(uint)((int)uVar26 < (int)uVar50) |
               ~-(uint)((int)uVar26 < (int)uVar50) & uVar26;
      uVar52 = uVar52 & -(uint)((int)uVar27 < (int)uVar52) |
               ~-(uint)((int)uVar27 < (int)uVar52) & uVar27;
      uVar54 = uVar54 & -(uint)((int)uVar28 < (int)uVar54) |
               ~-(uint)((int)uVar28 < (int)uVar54) & uVar28;
      pauVar10 = pauVar14;
    } while (pauVar13 <= pauVar17);
    do {
      if (pauVar17 <= pauVar13) break;
      if (*(int *)(*pauVar17 + lVar20 * 4) < (int)uVar21) goto LAB_144c28e99;
      auVar36 = *pauVar17;
      uVar22 = auVar36._0_4_;
      uVar26 = auVar36._4_4_;
      uVar27 = auVar36._8_4_;
      uVar28 = auVar36._12_4_;
      uVar9 = ~-(uint)((int)uVar9 < (int)uVar22) & uVar22 |
              -(uint)((int)uVar9 < (int)uVar22) & uVar9;
      uVar51 = ~-(uint)((int)uVar51 < (int)uVar26) & uVar26 |
               -(uint)((int)uVar51 < (int)uVar26) & uVar51;
      uVar53 = ~-(uint)((int)uVar53 < (int)uVar27) & uVar27 |
               -(uint)((int)uVar53 < (int)uVar27) & uVar53;
      uVar55 = ~-(uint)((int)uVar55 < (int)uVar28) & uVar28 |
               -(uint)((int)uVar55 < (int)uVar28) & uVar55;
      uVar56 = ~-(uint)((int)uVar22 < (int)uVar56) & uVar22 |
               -(uint)((int)uVar22 < (int)uVar56) & uVar56;
      uVar58 = ~-(uint)((int)uVar26 < (int)uVar58) & uVar26 |
               -(uint)((int)uVar26 < (int)uVar58) & uVar58;
      uVar60 = ~-(uint)((int)uVar27 < (int)uVar60) & uVar27 |
               -(uint)((int)uVar27 < (int)uVar60) & uVar60;
      uVar62 = ~-(uint)((int)uVar28 < (int)uVar62) & uVar28 |
               -(uint)((int)uVar28 < (int)uVar62) & uVar62;
      pauVar10 = pauVar17;
      pauVar17 = pauVar17 + -1;
    } while( true );
  }
LAB_144c28e4c:
  local_2a4 = (uint)((longlong)pauVar13 - (longlong)pauVar12 >> 4);
  uVar27 = (int)_DAT_14c6dac70 >> 0x1f;
  uVar21 = (int)uRam000000014c6dac74 >> 0x1f;
  uVar22 = (int)uRam000000014c6dac78 >> 0x1f;
  uVar26 = (int)uRam000000014c6dac7c >> 0x1f;
  if (((int)local_2a4 < 2) || (local_274 = (int)param_2[9] - local_2a4, (int)local_274 < 2)) {
    local_2a8 = param_2[8];
    local_2a4 = (int)param_2[9] >> 1;
    uVar16 = (ulonglong)local_2a4;
    local_274 = (int)param_2[9] - local_2a4;
    uVar49 = uVar27 >> 1 ^ _DAT_14c6dac70;
    uVar50 = uVar21 >> 1 ^ uRam000000014c6dac74;
    uVar52 = uVar22 >> 1 ^ uRam000000014c6dac78;
    uVar54 = uVar26 >> 1 ^ uRam000000014c6dac7c;
    local_278 = local_2a4 + (int)local_2a8;
    uVar23 = _DAT_14c6dac60;
    uVar42 = uRam000000014c6dac64;
    uVar45 = uRam000000014c6dac68;
    uVar47 = uRam000000014c6dac6c;
    if (0 < (int)local_2a4) {
      pauVar10 = (undefined1 (*) [16])
                 ((longlong)(int)local_2a8 * 0x10 + *(longlong *)(param_1 + 0x28));
      do {
        uVar9 = *(uint *)*pauVar10;
        uVar51 = *(uint *)(*pauVar10 + 4);
        uVar53 = *(uint *)(*pauVar10 + 8);
        uVar55 = *(uint *)(*pauVar10 + 0xc);
        pauVar10 = pauVar10 + 1;
        uVar23 = ~-(uint)((int)uVar23 < (int)uVar9) & uVar9 |
                 -(uint)((int)uVar23 < (int)uVar9) & uVar23;
        uVar42 = ~-(uint)((int)uVar42 < (int)uVar51) & uVar51 |
                 -(uint)((int)uVar42 < (int)uVar51) & uVar42;
        uVar45 = ~-(uint)((int)uVar45 < (int)uVar53) & uVar53 |
                 -(uint)((int)uVar45 < (int)uVar53) & uVar45;
        uVar47 = ~-(uint)((int)uVar47 < (int)uVar55) & uVar55 |
                 -(uint)((int)uVar47 < (int)uVar55) & uVar47;
        uVar49 = ~-(uint)((int)uVar9 < (int)uVar49) & uVar9 |
                 -(uint)((int)uVar9 < (int)uVar49) & uVar49;
        uVar50 = ~-(uint)((int)uVar51 < (int)uVar50) & uVar51 |
                 -(uint)((int)uVar51 < (int)uVar50) & uVar50;
        uVar52 = ~-(uint)((int)uVar53 < (int)uVar52) & uVar53 |
                 -(uint)((int)uVar53 < (int)uVar52) & uVar52;
        uVar54 = ~-(uint)((int)uVar55 < (int)uVar54) & uVar55 |
                 -(uint)((int)uVar55 < (int)uVar54) & uVar54;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    uVar56 = uVar27 >> 1 ^ _DAT_14c6dac70;
    uVar58 = uVar21 >> 1 ^ uRam000000014c6dac74;
    uVar60 = uVar22 >> 1 ^ uRam000000014c6dac78;
    uVar62 = uVar26 >> 1 ^ uRam000000014c6dac7c;
    uVar9 = _DAT_14c6dac60;
    uVar51 = uRam000000014c6dac64;
    uVar53 = uRam000000014c6dac68;
    uVar55 = uRam000000014c6dac6c;
    if (0 < (int)local_274) {
      pauVar10 = (undefined1 (*) [16])
                 ((longlong)(int)local_278 * 0x10 + *(longlong *)(param_1 + 0x28));
      uVar16 = (ulonglong)local_274;
      do {
        uVar28 = *(uint *)*pauVar10;
        uVar40 = *(uint *)(*pauVar10 + 4);
        uVar43 = *(uint *)(*pauVar10 + 8);
        uVar46 = *(uint *)(*pauVar10 + 0xc);
        pauVar10 = pauVar10 + 1;
        uVar9 = ~-(uint)((int)uVar9 < (int)uVar28) & uVar28 |
                -(uint)((int)uVar9 < (int)uVar28) & uVar9;
        uVar51 = ~-(uint)((int)uVar51 < (int)uVar40) & uVar40 |
                 -(uint)((int)uVar51 < (int)uVar40) & uVar51;
        uVar53 = ~-(uint)((int)uVar53 < (int)uVar43) & uVar43 |
                 -(uint)((int)uVar53 < (int)uVar43) & uVar53;
        uVar55 = ~-(uint)((int)uVar55 < (int)uVar46) & uVar46 |
                 -(uint)((int)uVar55 < (int)uVar46) & uVar55;
        uVar56 = ~-(uint)((int)uVar28 < (int)uVar56) & uVar28 |
                 -(uint)((int)uVar28 < (int)uVar56) & uVar56;
        uVar58 = ~-(uint)((int)uVar40 < (int)uVar58) & uVar40 |
                 -(uint)((int)uVar40 < (int)uVar58) & uVar58;
        uVar60 = ~-(uint)((int)uVar43 < (int)uVar60) & uVar43 |
                 -(uint)((int)uVar43 < (int)uVar60) & uVar60;
        uVar62 = ~-(uint)((int)uVar46 < (int)uVar62) & uVar46 |
                 -(uint)((int)uVar46 < (int)uVar62) & uVar62;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else {
    local_2a8 = param_2[8];
    local_278 = (int)local_2a8 + local_2a4;
  }
  local_2c8[0] = (float)((uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23);
  local_2c8[1] = (float)((uint)((int)uVar42 >> 0x1f) >> 1 ^ uVar42);
  local_2c8[2] = (float)((uint)((int)uVar45 >> 0x1f) >> 1 ^ uVar45);
  local_2c8[3] = (float)((uint)((int)uVar47 >> 0x1f) >> 1 ^ uVar47);
  puVar18 = (uint *)((longlong)(int)local_2a8 * 0x10 + *(longlong *)(param_1 + 0x28));
  local_2b8[0] = (float)((uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49);
  local_2b8[1] = (float)((uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50);
  local_2b8[2] = (float)((uint)((int)uVar52 >> 0x1f) >> 1 ^ uVar52);
  local_2b8[3] = (float)((uint)((int)uVar54 >> 0x1f) >> 1 ^ uVar54);
  local_2b8[0] = local_2b8[0] - local_2c8[0];
  local_2b8[1] = local_2b8[1] - local_2c8[1];
  local_2b8[2] = local_2b8[2] - local_2c8[2];
  local_298[0] = (float)((uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9);
  local_298[1] = (float)((uint)((int)uVar51 >> 0x1f) >> 1 ^ uVar51);
  local_298[2] = (float)((uint)((int)uVar53 >> 0x1f) >> 1 ^ uVar53);
  local_298[3] = (float)((uint)((int)uVar55 >> 0x1f) >> 1 ^ uVar55);
  local_288[0] = (float)((uint)((int)uVar56 >> 0x1f) >> 1 ^ uVar56);
  local_288[1] = (float)((uint)((int)uVar58 >> 0x1f) >> 1 ^ uVar58);
  local_288[2] = (float)((uint)((int)uVar60 >> 0x1f) >> 1 ^ uVar60);
  local_288[3] = (float)((uint)((int)uVar62 >> 0x1f) >> 1 ^ uVar62);
  local_288[0] = local_288[0] - local_298[0];
  local_288[1] = local_288[1] - local_298[1];
  local_288[2] = local_288[2] - local_298[2];
  auVar37._4_4_ = local_2b8[1];
  auVar37._0_4_ = local_2b8[1];
  auVar37._8_4_ = local_2b8[1];
  auVar37._12_4_ = local_2b8[1];
  auVar31._4_4_ = local_2b8[2];
  auVar31._0_4_ = local_2b8[2];
  auVar31._8_4_ = local_2b8[2];
  auVar31._12_4_ = local_2b8[2];
  auVar24._4_4_ = local_2b8[0];
  auVar24._0_4_ = local_2b8[0];
  auVar24._8_4_ = local_2b8[0];
  auVar24._12_4_ = local_2b8[0];
  auVar36 = maxps(auVar37,auVar24);
  auVar36 = maxps(auVar31,auVar36);
  auVar25._4_4_ = local_288[0];
  auVar25._0_4_ = local_288[0];
  auVar25._8_4_ = local_288[0];
  auVar25._12_4_ = local_288[0];
  auVar32._4_4_ = -(uint)(auVar36._4_4_ <= local_2b8[1]);
  auVar32._0_4_ = -(uint)(auVar36._0_4_ <= local_2b8[0]);
  auVar32._8_4_ = -(uint)(auVar36._8_4_ <= local_2b8[2]);
  auVar32._12_4_ = -(uint)(auVar36._12_4_ <= local_2b8[3] - local_2c8[3]);
  uVar9 = movmskps((int)pauVar10,auVar32);
  auVar33._4_4_ = local_288[2];
  auVar33._0_4_ = local_288[2];
  auVar33._8_4_ = local_288[2];
  auVar33._12_4_ = local_288[2];
  auVar38._4_4_ = local_288[1];
  auVar38._0_4_ = local_288[1];
  auVar38._8_4_ = local_288[1];
  auVar38._12_4_ = local_288[1];
  auVar36 = maxps(auVar38,auVar25);
  cVar1 = (&DAT_14998f5c0)[uVar9 & 7];
  uVar56 = uVar27 >> 1 ^ _DAT_14c6dac70;
  uVar58 = uVar21 >> 1 ^ uRam000000014c6dac74;
  uVar60 = uVar22 >> 1 ^ uRam000000014c6dac78;
  uVar62 = uVar26 >> 1 ^ uRam000000014c6dac7c;
  auVar36 = maxps(auVar33,auVar36);
  auVar34._4_4_ = -(uint)(auVar36._4_4_ <= local_288[1]);
  auVar34._0_4_ = -(uint)(auVar36._0_4_ <= local_288[0]);
  auVar34._8_4_ = -(uint)(auVar36._8_4_ <= local_288[2]);
  auVar34._12_4_ = -(uint)(auVar36._12_4_ <= local_288[3] - local_298[3]);
  uVar9 = movmskps(uVar9 & 7,auVar34);
  fVar39 = (local_2b8[cVar1] + local_2c8[cVar1]) * 0.5;
  cVar2 = (&DAT_14998f5c0)[uVar9 & 7];
  uVar54 = (uint)((int)fVar39 >> 0x1f) >> 1 ^ (uint)fVar39;
  puVar11 = puVar18 + (longlong)(int)local_2a4 * 4 + -4;
  fVar39 = (local_288[cVar2] + local_298[cVar2]) * 0.5;
  puVar15 = puVar18;
  uVar9 = _DAT_14c6dac60;
  uVar51 = uRam000000014c6dac64;
  uVar53 = uRam000000014c6dac68;
  uVar55 = uRam000000014c6dac6c;
  uVar23 = _DAT_14c6dac60;
  uVar42 = uRam000000014c6dac64;
  uVar45 = uRam000000014c6dac68;
  uVar47 = uRam000000014c6dac6c;
  uVar21 = uVar56;
  uVar49 = uVar58;
  uVar50 = uVar60;
  uVar52 = uVar62;
LAB_144c29131:
  uVar48 = uRam000000014c6dac7c;
  uVar46 = uRam000000014c6dac78;
  uVar43 = uRam000000014c6dac74;
  uVar40 = _DAT_14c6dac70;
  uVar28 = uRam000000014c6dac6c;
  uVar27 = uRam000000014c6dac68;
  uVar26 = uRam000000014c6dac64;
  uVar22 = _DAT_14c6dac60;
  if (puVar15 <= puVar11) {
    do {
      if ((int)uVar54 <= (int)puVar15[cVar1]) break;
      puVar19 = puVar15 + 4;
      uVar57 = *puVar15;
      uVar59 = puVar15[1];
      uVar61 = puVar15[2];
      uVar63 = puVar15[3];
      uVar23 = uVar23 & -(uint)((int)uVar23 < (int)uVar57) |
               ~-(uint)((int)uVar23 < (int)uVar57) & uVar57;
      uVar42 = uVar42 & -(uint)((int)uVar42 < (int)uVar59) |
               ~-(uint)((int)uVar42 < (int)uVar59) & uVar59;
      uVar45 = uVar45 & -(uint)((int)uVar45 < (int)uVar61) |
               ~-(uint)((int)uVar45 < (int)uVar61) & uVar61;
      uVar47 = uVar47 & -(uint)((int)uVar47 < (int)uVar63) |
               ~-(uint)((int)uVar47 < (int)uVar63) & uVar63;
      uVar21 = uVar21 & -(uint)((int)uVar57 < (int)uVar21) |
               ~-(uint)((int)uVar57 < (int)uVar21) & uVar57;
      uVar49 = uVar49 & -(uint)((int)uVar59 < (int)uVar49) |
               ~-(uint)((int)uVar59 < (int)uVar49) & uVar59;
      uVar50 = uVar50 & -(uint)((int)uVar61 < (int)uVar50) |
               ~-(uint)((int)uVar61 < (int)uVar50) & uVar61;
      uVar52 = uVar52 & -(uint)((int)uVar63 < (int)uVar52) |
               ~-(uint)((int)uVar63 < (int)uVar52) & uVar63;
      puVar15 = puVar19;
    } while (puVar19 <= puVar11);
    do {
      if (puVar11 <= puVar15) break;
      if ((int)puVar11[cVar1] < (int)uVar54) goto LAB_144c29213;
      uVar57 = *puVar11;
      uVar59 = puVar11[1];
      uVar61 = puVar11[2];
      uVar63 = puVar11[3];
      uVar9 = uVar9 & -(uint)((int)uVar9 < (int)uVar57) |
              ~-(uint)((int)uVar9 < (int)uVar57) & uVar57;
      uVar51 = uVar51 & -(uint)((int)uVar51 < (int)uVar59) |
               ~-(uint)((int)uVar51 < (int)uVar59) & uVar59;
      uVar53 = uVar53 & -(uint)((int)uVar53 < (int)uVar61) |
               ~-(uint)((int)uVar53 < (int)uVar61) & uVar61;
      uVar55 = uVar55 & -(uint)((int)uVar55 < (int)uVar63) |
               ~-(uint)((int)uVar55 < (int)uVar63) & uVar63;
      uVar56 = ~-(uint)((int)uVar57 < (int)uVar56) & uVar57 |
               -(uint)((int)uVar57 < (int)uVar56) & uVar56;
      uVar58 = ~-(uint)((int)uVar59 < (int)uVar58) & uVar59 |
               -(uint)((int)uVar59 < (int)uVar58) & uVar58;
      uVar60 = ~-(uint)((int)uVar61 < (int)uVar60) & uVar61 |
               -(uint)((int)uVar61 < (int)uVar60) & uVar60;
      uVar62 = ~-(uint)((int)uVar63 < (int)uVar62) & uVar63 |
               -(uint)((int)uVar63 < (int)uVar62) & uVar62;
      puVar11 = puVar11 + -4;
    } while( true );
  }
LAB_144c291c7:
  uVar54 = (uint)((longlong)puVar15 - (longlong)puVar18 >> 4);
  uVar57 = (int)_DAT_14c6dac70 >> 0x1f;
  uVar59 = (int)uRam000000014c6dac74 >> 0x1f;
  uVar63 = (int)uRam000000014c6dac7c >> 0x1f;
  uVar61 = (int)uRam000000014c6dac78 >> 0x1f;
  if (((int)uVar54 < 1) || ((int)(local_2a4 - uVar54) < 1)) {
    param_3[8] = (uint)local_2a8;
    uVar54 = (int)local_2a4 >> 1;
    param_3[9] = uVar54;
    local_2a4 = local_2a4 - uVar54;
    param_3[0x15] = local_2a4;
    param_3[0x14] = (int)local_2a8 + uVar54;
    uVar21 = uVar57 >> 1 ^ uVar40;
    uVar49 = uVar59 >> 1 ^ uVar43;
    uVar50 = uVar61 >> 1 ^ uVar46;
    uVar52 = uVar63 >> 1 ^ uVar48;
    uVar16 = (ulonglong)param_3[9];
    uVar23 = uVar22;
    uVar42 = uVar26;
    uVar45 = uVar27;
    uVar47 = uVar28;
    if (0 < (int)param_3[9]) {
      puVar11 = (uint *)((longlong)(int)param_3[8] * 0x10 + *(longlong *)(param_1 + 0x28));
      do {
        uVar9 = *puVar11;
        uVar51 = puVar11[1];
        uVar53 = puVar11[2];
        uVar55 = puVar11[3];
        puVar11 = puVar11 + 4;
        uVar23 = ~-(uint)((int)uVar23 < (int)uVar9) & uVar9 |
                 -(uint)((int)uVar23 < (int)uVar9) & uVar23;
        uVar42 = ~-(uint)((int)uVar42 < (int)uVar51) & uVar51 |
                 -(uint)((int)uVar42 < (int)uVar51) & uVar42;
        uVar45 = ~-(uint)((int)uVar45 < (int)uVar53) & uVar53 |
                 -(uint)((int)uVar45 < (int)uVar53) & uVar45;
        uVar47 = ~-(uint)((int)uVar47 < (int)uVar55) & uVar55 |
                 -(uint)((int)uVar47 < (int)uVar55) & uVar47;
        uVar21 = ~-(uint)((int)uVar9 < (int)uVar21) & uVar9 |
                 -(uint)((int)uVar9 < (int)uVar21) & uVar21;
        uVar49 = ~-(uint)((int)uVar51 < (int)uVar49) & uVar51 |
                 -(uint)((int)uVar51 < (int)uVar49) & uVar49;
        uVar50 = ~-(uint)((int)uVar53 < (int)uVar50) & uVar53 |
                 -(uint)((int)uVar53 < (int)uVar50) & uVar50;
        uVar52 = ~-(uint)((int)uVar55 < (int)uVar52) & uVar55 |
                 -(uint)((int)uVar55 < (int)uVar52) & uVar52;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    uVar56 = uVar57 >> 1 ^ uVar40;
    uVar58 = uVar59 >> 1 ^ uVar43;
    uVar60 = uVar61 >> 1 ^ uVar46;
    uVar62 = uVar63 >> 1 ^ uVar48;
    uVar9 = uVar22;
    uVar51 = uVar26;
    uVar53 = uVar27;
    uVar55 = uVar28;
    if (0 < (int)local_2a4) {
      puVar11 = (uint *)((longlong)(int)((int)local_2a8 + uVar54) * 0x10 +
                        *(longlong *)(param_1 + 0x28));
      uVar16 = (ulonglong)local_2a4;
      do {
        uVar54 = *puVar11;
        uVar4 = puVar11[1];
        uVar5 = puVar11[2];
        uVar6 = puVar11[3];
        puVar11 = puVar11 + 4;
        uVar9 = ~-(uint)((int)uVar9 < (int)uVar54) & uVar54 |
                -(uint)((int)uVar9 < (int)uVar54) & uVar9;
        uVar51 = ~-(uint)((int)uVar51 < (int)uVar4) & uVar4 |
                 -(uint)((int)uVar51 < (int)uVar4) & uVar51;
        uVar53 = ~-(uint)((int)uVar53 < (int)uVar5) & uVar5 |
                 -(uint)((int)uVar53 < (int)uVar5) & uVar53;
        uVar55 = ~-(uint)((int)uVar55 < (int)uVar6) & uVar6 |
                 -(uint)((int)uVar55 < (int)uVar6) & uVar55;
        uVar56 = ~-(uint)((int)uVar54 < (int)uVar56) & uVar54 |
                 -(uint)((int)uVar54 < (int)uVar56) & uVar56;
        uVar58 = ~-(uint)((int)uVar4 < (int)uVar58) & uVar4 |
                 -(uint)((int)uVar4 < (int)uVar58) & uVar58;
        uVar60 = ~-(uint)((int)uVar5 < (int)uVar60) & uVar5 |
                 -(uint)((int)uVar5 < (int)uVar60) & uVar60;
        uVar62 = ~-(uint)((int)uVar6 < (int)uVar62) & uVar6 |
                 -(uint)((int)uVar6 < (int)uVar62) & uVar62;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else {
    param_3[8] = (uint)local_2a8;
    param_3[9] = uVar54;
    param_3[0x14] = uVar54 + (int)local_2a8;
    param_3[0x15] = local_2a4 - uVar54;
  }
  param_3[4] = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
  param_3[5] = (uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49;
  param_3[6] = (uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50;
  param_3[7] = (uint)((int)uVar52 >> 0x1f) >> 1 ^ uVar52;
  *param_3 = (uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23;
  param_3[1] = (uint)((int)uVar42 >> 0x1f) >> 1 ^ uVar42;
  param_3[2] = (uint)((int)uVar45 >> 0x1f) >> 1 ^ uVar45;
  param_3[3] = (uint)((int)uVar47 >> 0x1f) >> 1 ^ uVar47;
  param_3[0x10] = (uint)((int)uVar56 >> 0x1f) >> 1 ^ uVar56;
  param_3[0x11] = (uint)((int)uVar58 >> 0x1f) >> 1 ^ uVar58;
  param_3[0x12] = (uint)((int)uVar60 >> 0x1f) >> 1 ^ uVar60;
  param_3[0x13] = (uint)((int)uVar62 >> 0x1f) >> 1 ^ uVar62;
  puVar18 = (uint *)((longlong)(int)local_278 * 0x10 + *(longlong *)(param_1 + 0x28));
  uVar23 = (uint)((int)fVar39 >> 0x1f) >> 1 ^ (uint)fVar39;
  uVar40 = uVar57 >> 1 ^ uVar40;
  uVar43 = uVar59 >> 1 ^ uVar43;
  uVar46 = uVar61 >> 1 ^ uVar46;
  uVar48 = uVar63 >> 1 ^ uVar48;
  puVar11 = puVar18 + (longlong)(int)local_274 * 4 + -4;
  param_3[0xc] = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
  param_3[0xd] = (uint)((int)uVar51 >> 0x1f) >> 1 ^ uVar51;
  param_3[0xe] = (uint)((int)uVar53 >> 0x1f) >> 1 ^ uVar53;
  param_3[0xf] = (uint)((int)uVar55 >> 0x1f) >> 1 ^ uVar55;
  puVar15 = puVar18;
  uVar56 = uVar22;
  uVar58 = uVar26;
  uVar60 = uVar27;
  uVar62 = uVar28;
  uVar9 = uVar40;
  uVar51 = uVar43;
  uVar53 = uVar46;
  uVar55 = uVar48;
LAB_144c29461:
  uVar54 = uRam000000014c6dac7c;
  uVar52 = uRam000000014c6dac78;
  uVar50 = uRam000000014c6dac74;
  uVar49 = _DAT_14c6dac70;
  uVar21 = uRam000000014c6dac6c;
  uVar47 = uRam000000014c6dac68;
  uVar45 = uRam000000014c6dac64;
  uVar42 = _DAT_14c6dac60;
  if (puVar15 <= puVar11) {
    do {
      if ((int)uVar23 <= (int)puVar15[cVar2]) break;
      puVar19 = puVar15 + 4;
      uVar57 = *puVar15;
      uVar59 = puVar15[1];
      uVar61 = puVar15[2];
      uVar63 = puVar15[3];
      uVar56 = uVar56 & -(uint)((int)uVar56 < (int)uVar57) |
               ~-(uint)((int)uVar56 < (int)uVar57) & uVar57;
      uVar58 = uVar58 & -(uint)((int)uVar58 < (int)uVar59) |
               ~-(uint)((int)uVar58 < (int)uVar59) & uVar59;
      uVar60 = uVar60 & -(uint)((int)uVar60 < (int)uVar61) |
               ~-(uint)((int)uVar60 < (int)uVar61) & uVar61;
      uVar62 = uVar62 & -(uint)((int)uVar62 < (int)uVar63) |
               ~-(uint)((int)uVar62 < (int)uVar63) & uVar63;
      uVar40 = ~-(uint)((int)uVar57 < (int)uVar40) & uVar57 |
               -(uint)((int)uVar57 < (int)uVar40) & uVar40;
      uVar43 = ~-(uint)((int)uVar59 < (int)uVar43) & uVar59 |
               -(uint)((int)uVar59 < (int)uVar43) & uVar43;
      uVar46 = ~-(uint)((int)uVar61 < (int)uVar46) & uVar61 |
               -(uint)((int)uVar61 < (int)uVar46) & uVar46;
      uVar48 = ~-(uint)((int)uVar63 < (int)uVar48) & uVar63 |
               -(uint)((int)uVar63 < (int)uVar48) & uVar48;
      puVar15 = puVar19;
    } while (puVar19 <= puVar11);
    do {
      if (puVar11 <= puVar15) break;
      if ((int)puVar11[cVar2] < (int)uVar23) goto LAB_144c29541;
      uVar57 = *puVar11;
      uVar59 = puVar11[1];
      uVar61 = puVar11[2];
      uVar63 = puVar11[3];
      uVar22 = ~-(uint)((int)uVar22 < (int)uVar57) & uVar57 |
               -(uint)((int)uVar22 < (int)uVar57) & uVar22;
      uVar26 = ~-(uint)((int)uVar26 < (int)uVar59) & uVar59 |
               -(uint)((int)uVar26 < (int)uVar59) & uVar26;
      uVar27 = ~-(uint)((int)uVar27 < (int)uVar61) & uVar61 |
               -(uint)((int)uVar27 < (int)uVar61) & uVar27;
      uVar28 = ~-(uint)((int)uVar28 < (int)uVar63) & uVar63 |
               -(uint)((int)uVar28 < (int)uVar63) & uVar28;
      uVar9 = ~-(uint)((int)uVar57 < (int)uVar9) & uVar57 |
              -(uint)((int)uVar57 < (int)uVar9) & uVar9;
      uVar51 = ~-(uint)((int)uVar59 < (int)uVar51) & uVar59 |
               -(uint)((int)uVar59 < (int)uVar51) & uVar51;
      uVar53 = ~-(uint)((int)uVar61 < (int)uVar53) & uVar61 |
               -(uint)((int)uVar61 < (int)uVar53) & uVar53;
      uVar55 = ~-(uint)((int)uVar63 < (int)uVar55) & uVar63 |
               -(uint)((int)uVar63 < (int)uVar55) & uVar55;
      puVar11 = puVar11 + -4;
    } while( true );
  }
LAB_144c29501:
  uVar23 = (uint)((longlong)puVar15 - (longlong)puVar18 >> 4);
  if (((int)uVar23 < 1) || ((int)(local_274 - uVar23) < 1)) {
    uVar23 = (int)local_274 >> 1;
    param_3[0x21] = uVar23;
    local_274 = local_274 - uVar23;
    param_3[0x20] = local_278;
    param_3[0x2d] = local_274;
    param_3[0x2c] = local_278 + uVar23;
    uVar16 = (ulonglong)param_3[0x21];
    uVar40 = (uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49;
    uVar43 = (uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50;
    uVar46 = (uint)((int)uVar52 >> 0x1f) >> 1 ^ uVar52;
    uVar48 = (uint)((int)uVar54 >> 0x1f) >> 1 ^ uVar54;
    uVar56 = uVar42;
    uVar58 = uVar45;
    uVar60 = uVar47;
    uVar62 = uVar21;
    if (0 < (int)param_3[0x21]) {
      puVar11 = (uint *)((longlong)(int)param_3[0x20] * 0x10 + *(longlong *)(param_1 + 0x28));
      do {
        uVar9 = *puVar11;
        uVar51 = puVar11[1];
        uVar53 = puVar11[2];
        uVar55 = puVar11[3];
        puVar11 = puVar11 + 4;
        uVar56 = ~-(uint)((int)uVar56 < (int)uVar9) & uVar9 |
                 -(uint)((int)uVar56 < (int)uVar9) & uVar56;
        uVar58 = ~-(uint)((int)uVar58 < (int)uVar51) & uVar51 |
                 -(uint)((int)uVar58 < (int)uVar51) & uVar58;
        uVar60 = ~-(uint)((int)uVar60 < (int)uVar53) & uVar53 |
                 -(uint)((int)uVar60 < (int)uVar53) & uVar60;
        uVar62 = ~-(uint)((int)uVar62 < (int)uVar55) & uVar55 |
                 -(uint)((int)uVar62 < (int)uVar55) & uVar62;
        uVar40 = ~-(uint)((int)uVar9 < (int)uVar40) & uVar9 |
                 -(uint)((int)uVar9 < (int)uVar40) & uVar40;
        uVar43 = ~-(uint)((int)uVar51 < (int)uVar43) & uVar51 |
                 -(uint)((int)uVar51 < (int)uVar43) & uVar43;
        uVar46 = ~-(uint)((int)uVar53 < (int)uVar46) & uVar53 |
                 -(uint)((int)uVar53 < (int)uVar46) & uVar46;
        uVar48 = ~-(uint)((int)uVar55 < (int)uVar48) & uVar55 |
                 -(uint)((int)uVar55 < (int)uVar48) & uVar48;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    uVar9 = (uint)((int)uVar49 >> 0x1f) >> 1 ^ uVar49;
    uVar51 = (uint)((int)uVar50 >> 0x1f) >> 1 ^ uVar50;
    uVar53 = (uint)((int)uVar52 >> 0x1f) >> 1 ^ uVar52;
    uVar55 = (uint)((int)uVar54 >> 0x1f) >> 1 ^ uVar54;
    if (0 < (int)local_274) {
      puVar11 = (uint *)((longlong)(int)(local_278 + uVar23) * 0x10 + *(longlong *)(param_1 + 0x28))
      ;
      uVar16 = (ulonglong)local_274;
      do {
        uVar23 = *puVar11;
        uVar49 = puVar11[1];
        uVar50 = puVar11[2];
        uVar52 = puVar11[3];
        puVar11 = puVar11 + 4;
        uVar42 = ~-(uint)((int)uVar42 < (int)uVar23) & uVar23 |
                 -(uint)((int)uVar42 < (int)uVar23) & uVar42;
        uVar45 = ~-(uint)((int)uVar45 < (int)uVar49) & uVar49 |
                 -(uint)((int)uVar45 < (int)uVar49) & uVar45;
        uVar47 = ~-(uint)((int)uVar47 < (int)uVar50) & uVar50 |
                 -(uint)((int)uVar47 < (int)uVar50) & uVar47;
        uVar21 = ~-(uint)((int)uVar21 < (int)uVar52) & uVar52 |
                 -(uint)((int)uVar21 < (int)uVar52) & uVar21;
        uVar9 = ~-(uint)((int)uVar23 < (int)uVar9) & uVar23 |
                -(uint)((int)uVar23 < (int)uVar9) & uVar9;
        uVar51 = ~-(uint)((int)uVar49 < (int)uVar51) & uVar49 |
                 -(uint)((int)uVar49 < (int)uVar51) & uVar51;
        uVar53 = ~-(uint)((int)uVar50 < (int)uVar53) & uVar50 |
                 -(uint)((int)uVar50 < (int)uVar53) & uVar53;
        uVar55 = ~-(uint)((int)uVar52 < (int)uVar55) & uVar52 |
                 -(uint)((int)uVar52 < (int)uVar55) & uVar55;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
  }
  else {
    param_3[0x20] = local_278;
    param_3[0x21] = uVar23;
    param_3[0x2c] = local_278 + uVar23;
    param_3[0x2d] = local_274 - uVar23;
    uVar42 = uVar22;
    uVar45 = uVar26;
    uVar47 = uVar27;
    uVar21 = uVar28;
  }
  param_3[0x1c] = (uint)((int)uVar40 >> 0x1f) >> 1 ^ uVar40;
  param_3[0x1d] = (uint)((int)uVar43 >> 0x1f) >> 1 ^ uVar43;
  param_3[0x1e] = (uint)((int)uVar46 >> 0x1f) >> 1 ^ uVar46;
  param_3[0x1f] = (uint)((int)uVar48 >> 0x1f) >> 1 ^ uVar48;
  param_3[0x18] = (uint)((int)uVar56 >> 0x1f) >> 1 ^ uVar56;
  param_3[0x19] = (uint)((int)uVar58 >> 0x1f) >> 1 ^ uVar58;
  param_3[0x1a] = (uint)((int)uVar60 >> 0x1f) >> 1 ^ uVar60;
  param_3[0x1b] = (uint)((int)uVar62 >> 0x1f) >> 1 ^ uVar62;
  param_3[0x28] = (uint)((int)uVar9 >> 0x1f) >> 1 ^ uVar9;
  param_3[0x29] = (uint)((int)uVar51 >> 0x1f) >> 1 ^ uVar51;
  param_3[0x2a] = (uint)((int)uVar53 >> 0x1f) >> 1 ^ uVar53;
  param_3[0x2b] = (uint)((int)uVar55 >> 0x1f) >> 1 ^ uVar55;
  param_3[0x24] = (uint)((int)uVar42 >> 0x1f) >> 1 ^ uVar42;
  param_3[0x25] = (uint)((int)uVar45 >> 0x1f) >> 1 ^ uVar45;
  param_3[0x26] = (uint)((int)uVar47 >> 0x1f) >> 1 ^ uVar47;
  param_3[0x27] = (uint)((int)uVar21 >> 0x1f) >> 1 ^ uVar21;
  return;
LAB_144c28e99:
  if (pauVar17 <= pauVar13) goto LAB_144c28e4c;
  uVar22 = *(uint *)*pauVar17;
  uVar26 = *(uint *)(*pauVar17 + 4);
  uVar27 = *(uint *)(*pauVar17 + 8);
  uVar28 = *(uint *)(*pauVar17 + 0xc);
  uVar23 = uVar23 & -(uint)((int)uVar23 < (int)uVar22) |
           ~-(uint)((int)uVar23 < (int)uVar22) & uVar22;
  uVar42 = uVar42 & -(uint)((int)uVar42 < (int)uVar26) |
           ~-(uint)((int)uVar42 < (int)uVar26) & uVar26;
  uVar45 = uVar45 & -(uint)((int)uVar45 < (int)uVar27) |
           ~-(uint)((int)uVar45 < (int)uVar27) & uVar27;
  uVar47 = uVar47 & -(uint)((int)uVar47 < (int)uVar28) |
           ~-(uint)((int)uVar47 < (int)uVar28) & uVar28;
  uVar40 = *(uint *)*pauVar13;
  uVar43 = *(uint *)(*pauVar13 + 4);
  uVar46 = *(uint *)(*pauVar13 + 8);
  uVar48 = *(uint *)(*pauVar13 + 0xc);
  uVar49 = uVar49 & -(uint)((int)uVar22 < (int)uVar49) |
           ~-(uint)((int)uVar22 < (int)uVar49) & uVar22;
  uVar50 = uVar50 & -(uint)((int)uVar26 < (int)uVar50) |
           ~-(uint)((int)uVar26 < (int)uVar50) & uVar26;
  uVar52 = uVar52 & -(uint)((int)uVar27 < (int)uVar52) |
           ~-(uint)((int)uVar27 < (int)uVar52) & uVar27;
  uVar54 = uVar54 & -(uint)((int)uVar28 < (int)uVar54) |
           ~-(uint)((int)uVar28 < (int)uVar54) & uVar28;
  uVar9 = uVar9 & -(uint)((int)uVar9 < (int)uVar40) | ~-(uint)((int)uVar9 < (int)uVar40) & uVar40;
  uVar51 = uVar51 & -(uint)((int)uVar51 < (int)uVar43) |
           ~-(uint)((int)uVar51 < (int)uVar43) & uVar43;
  uVar53 = uVar53 & -(uint)((int)uVar53 < (int)uVar46) |
           ~-(uint)((int)uVar53 < (int)uVar46) & uVar46;
  uVar55 = uVar55 & -(uint)((int)uVar55 < (int)uVar48) |
           ~-(uint)((int)uVar55 < (int)uVar48) & uVar48;
  uVar56 = uVar56 & -(uint)((int)uVar40 < (int)uVar56) |
           ~-(uint)((int)uVar40 < (int)uVar56) & uVar40;
  uVar58 = uVar58 & -(uint)((int)uVar43 < (int)uVar58) |
           ~-(uint)((int)uVar43 < (int)uVar58) & uVar43;
  uVar60 = uVar60 & -(uint)((int)uVar46 < (int)uVar60) |
           ~-(uint)((int)uVar46 < (int)uVar60) & uVar46;
  uVar62 = uVar62 & -(uint)((int)uVar48 < (int)uVar62) |
           ~-(uint)((int)uVar48 < (int)uVar62) & uVar48;
  uVar7 = *(undefined8 *)(*pauVar17 + 8);
  *(undefined8 *)*pauVar13 = *(undefined8 *)*pauVar17;
  *(undefined8 *)(*pauVar13 + 8) = uVar7;
  pauVar13 = pauVar13 + 1;
  *(uint *)*pauVar17 = uVar40;
  *(uint *)(*pauVar17 + 4) = uVar43;
  *(uint *)(*pauVar17 + 8) = uVar46;
  *(uint *)(*pauVar17 + 0xc) = uVar48;
  pauVar17 = pauVar17 + -1;
  goto LAB_144c28db5;
LAB_144c29213:
  if (puVar11 <= puVar15) goto LAB_144c291c7;
  uVar22 = *puVar11;
  uVar26 = puVar11[1];
  uVar27 = puVar11[2];
  uVar28 = puVar11[3];
  uVar7 = *(undefined8 *)(puVar11 + 2);
  uVar23 = uVar23 & -(uint)((int)uVar23 < (int)uVar22) |
           ~-(uint)((int)uVar23 < (int)uVar22) & uVar22;
  uVar42 = uVar42 & -(uint)((int)uVar42 < (int)uVar26) |
           ~-(uint)((int)uVar42 < (int)uVar26) & uVar26;
  uVar45 = uVar45 & -(uint)((int)uVar45 < (int)uVar27) |
           ~-(uint)((int)uVar45 < (int)uVar27) & uVar27;
  uVar47 = uVar47 & -(uint)((int)uVar47 < (int)uVar28) |
           ~-(uint)((int)uVar47 < (int)uVar28) & uVar28;
  uVar40 = *puVar15;
  uVar43 = puVar15[1];
  uVar46 = puVar15[2];
  uVar48 = puVar15[3];
  uVar21 = uVar21 & -(uint)((int)uVar22 < (int)uVar21) |
           ~-(uint)((int)uVar22 < (int)uVar21) & uVar22;
  uVar49 = uVar49 & -(uint)((int)uVar26 < (int)uVar49) |
           ~-(uint)((int)uVar26 < (int)uVar49) & uVar26;
  uVar50 = uVar50 & -(uint)((int)uVar27 < (int)uVar50) |
           ~-(uint)((int)uVar27 < (int)uVar50) & uVar27;
  uVar52 = uVar52 & -(uint)((int)uVar28 < (int)uVar52) |
           ~-(uint)((int)uVar28 < (int)uVar52) & uVar28;
  *(undefined8 *)puVar15 = *(undefined8 *)puVar11;
  *(undefined8 *)(puVar15 + 2) = uVar7;
  *puVar11 = uVar40;
  puVar11[1] = uVar43;
  puVar11[2] = uVar46;
  puVar11[3] = uVar48;
  puVar15 = puVar15 + 4;
  puVar11 = puVar11 + -4;
  uVar9 = uVar9 & -(uint)((int)uVar9 < (int)uVar40) | ~-(uint)((int)uVar9 < (int)uVar40) & uVar40;
  uVar51 = uVar51 & -(uint)((int)uVar51 < (int)uVar43) |
           ~-(uint)((int)uVar51 < (int)uVar43) & uVar43;
  uVar53 = uVar53 & -(uint)((int)uVar53 < (int)uVar46) |
           ~-(uint)((int)uVar53 < (int)uVar46) & uVar46;
  uVar55 = uVar55 & -(uint)((int)uVar55 < (int)uVar48) |
           ~-(uint)((int)uVar55 < (int)uVar48) & uVar48;
  uVar56 = uVar56 & -(uint)((int)uVar40 < (int)uVar56) |
           ~-(uint)((int)uVar40 < (int)uVar56) & uVar40;
  uVar58 = uVar58 & -(uint)((int)uVar43 < (int)uVar58) |
           ~-(uint)((int)uVar43 < (int)uVar58) & uVar43;
  uVar60 = uVar60 & -(uint)((int)uVar46 < (int)uVar60) |
           ~-(uint)((int)uVar46 < (int)uVar60) & uVar46;
  uVar62 = uVar62 & -(uint)((int)uVar48 < (int)uVar62) |
           ~-(uint)((int)uVar48 < (int)uVar62) & uVar48;
  goto LAB_144c29131;
LAB_144c29541:
  if (puVar11 <= puVar15) goto LAB_144c29501;
  uVar42 = *puVar11;
  uVar45 = puVar11[1];
  uVar47 = puVar11[2];
  uVar21 = puVar11[3];
  uVar56 = ~-(uint)((int)uVar56 < (int)uVar42) & uVar42 |
           -(uint)((int)uVar56 < (int)uVar42) & uVar56;
  uVar58 = ~-(uint)((int)uVar58 < (int)uVar45) & uVar45 |
           -(uint)((int)uVar58 < (int)uVar45) & uVar58;
  uVar60 = ~-(uint)((int)uVar60 < (int)uVar47) & uVar47 |
           -(uint)((int)uVar60 < (int)uVar47) & uVar60;
  uVar62 = ~-(uint)((int)uVar62 < (int)uVar21) & uVar21 |
           -(uint)((int)uVar62 < (int)uVar21) & uVar62;
  uVar49 = *puVar15;
  uVar50 = puVar15[1];
  uVar52 = puVar15[2];
  uVar54 = puVar15[3];
  uVar40 = ~-(uint)((int)uVar42 < (int)uVar40) & uVar42 |
           -(uint)((int)uVar42 < (int)uVar40) & uVar40;
  uVar43 = ~-(uint)((int)uVar45 < (int)uVar43) & uVar45 |
           -(uint)((int)uVar45 < (int)uVar43) & uVar43;
  uVar46 = ~-(uint)((int)uVar47 < (int)uVar46) & uVar47 |
           -(uint)((int)uVar47 < (int)uVar46) & uVar46;
  uVar48 = ~-(uint)((int)uVar21 < (int)uVar48) & uVar21 |
           -(uint)((int)uVar21 < (int)uVar48) & uVar48;
  uVar22 = ~-(uint)((int)uVar22 < (int)uVar49) & uVar49 |
           -(uint)((int)uVar22 < (int)uVar49) & uVar22;
  uVar26 = ~-(uint)((int)uVar26 < (int)uVar50) & uVar50 |
           -(uint)((int)uVar26 < (int)uVar50) & uVar26;
  uVar27 = ~-(uint)((int)uVar27 < (int)uVar52) & uVar52 |
           -(uint)((int)uVar27 < (int)uVar52) & uVar27;
  uVar28 = ~-(uint)((int)uVar28 < (int)uVar54) & uVar54 |
           -(uint)((int)uVar28 < (int)uVar54) & uVar28;
  uVar9 = ~-(uint)((int)uVar49 < (int)uVar9) & uVar49 | -(uint)((int)uVar49 < (int)uVar9) & uVar9;
  uVar51 = ~-(uint)((int)uVar50 < (int)uVar51) & uVar50 |
           -(uint)((int)uVar50 < (int)uVar51) & uVar51;
  uVar53 = ~-(uint)((int)uVar52 < (int)uVar53) & uVar52 |
           -(uint)((int)uVar52 < (int)uVar53) & uVar53;
  uVar55 = ~-(uint)((int)uVar54 < (int)uVar55) & uVar54 |
           -(uint)((int)uVar54 < (int)uVar55) & uVar55;
  uVar7 = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)puVar15 = *(undefined8 *)puVar11;
  *(undefined8 *)(puVar15 + 2) = uVar7;
  puVar15 = puVar15 + 4;
  *puVar11 = uVar49;
  puVar11[1] = uVar50;
  puVar11[2] = uVar52;
  puVar11[3] = uVar54;
  puVar11 = puVar11 + -4;
  goto LAB_144c29461;
}



// FUNCTION 144c29760 FUN_144c29760 body=108 status=ok
// SIG undefined FUN_144c29760(void)

undefined8 * FUN_144c29760(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_144c2b9f0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 8);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 144c297d0 FUN_144c297d0 body=217 status=ok
// SIG undefined FUN_144c297d0(void)

void FUN_144c297d0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res8;
  
  FUN_147e56b1c();
  uVar1 = *(uint *)(param_1 + 1);
  uVar5 = *(uint *)((longlong)param_1 + 0xc) & 0x7fffffff;
  uVar2 = uVar1;
  if ((int)uVar1 < (int)uVar5) {
    uVar2 = uVar5;
  }
  if ((int)uVar1 < (int)uVar2) {
    local_res8 = (longlong)(int)uVar1 << 7;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar6 = 0;
    lVar4 = *param_1 + (longlong)param_1;
    if (*param_1 == 0) {
      lVar4 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar4,(longlong)(int)param_1[1] << 7);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar4 = *param_1 + (longlong)param_1;
      if (*param_1 == 0) {
        lVar4 = lVar6;
      }
      (*DAT_14c787678)(0,lVar4,0);
    }
    *(undefined4 *)(param_1 + 2) = 0;
    lVar4 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar4 = lVar6;
    }
    *(uint *)((longlong)param_1 + 0xc) = uVar1 | 0x80000000;
    *param_1 = lVar4;
    return;
  }
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}



// FUNCTION 144c298b0 FUN_144c298b0 body=339 status=ok
// SIG undefined FUN_144c298b0(void)

void FUN_144c298b0(longlong *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  
  bVar7 = 0;
  iVar6 = 0;
  lVar5 = (longlong)param_2 * 0x80 + *param_1;
  if ((*(byte *)((longlong)param_1 + lVar5 + 0x74) & 1) == 0) {
    iVar1 = *(int *)((longlong)param_1 + lVar5 + 0x60);
    if (iVar1 != 0) {
      FUN_144c298b0(param_1,iVar1);
      lVar4 = (longlong)iVar1 * 0x80 + *param_1;
      iVar6 = *(int *)(lVar4 + 0x7c + (longlong)param_1);
      bVar7 = *(byte *)(lVar4 + 0x75 + (longlong)param_1);
      *(int *)(lVar4 + 0x78 + (longlong)param_1) = param_2;
    }
    iVar1 = *(int *)((longlong)param_1 + lVar5 + 100);
    bVar8 = bVar7;
    if (iVar1 != 0) {
      FUN_144c298b0(param_1,iVar1);
      lVar4 = (longlong)iVar1 * 0x80 + *param_1;
      bVar8 = *(byte *)(lVar4 + 0x75 + (longlong)param_1);
      iVar6 = iVar6 + *(int *)(lVar4 + 0x7c + (longlong)param_1);
      *(int *)(lVar4 + 0x78 + (longlong)param_1) = param_2;
      if (bVar8 < bVar7) {
        bVar8 = bVar7;
      }
    }
    iVar1 = *(int *)((longlong)param_1 + lVar5 + 0x68);
    bVar7 = bVar8;
    if (iVar1 != 0) {
      FUN_144c298b0(param_1,iVar1);
      lVar4 = (longlong)iVar1 * 0x80 + *param_1;
      bVar7 = *(byte *)(lVar4 + 0x75 + (longlong)param_1);
      iVar6 = iVar6 + *(int *)(lVar4 + 0x7c + (longlong)param_1);
      *(int *)(lVar4 + 0x78 + (longlong)param_1) = param_2;
      if (bVar7 < bVar8) {
        bVar7 = bVar8;
      }
    }
    iVar1 = *(int *)((longlong)param_1 + lVar5 + 0x6c);
    bVar8 = bVar7;
    if (iVar1 != 0) {
      FUN_144c298b0(param_1,iVar1);
      lVar4 = (longlong)iVar1 * 0x80 + *param_1;
      bVar8 = *(byte *)(lVar4 + 0x75 + (longlong)param_1);
      iVar6 = iVar6 + *(int *)(lVar4 + 0x7c + (longlong)param_1);
      *(int *)(lVar4 + 0x78 + (longlong)param_1) = param_2;
      if (bVar8 < bVar7) {
        bVar8 = bVar7;
      }
    }
    *(byte *)((longlong)param_1 + lVar5 + 0x75) = bVar8 + 1;
    *(int *)((longlong)param_1 + lVar5 + 0x7c) = iVar6;
    return;
  }
  *(undefined1 *)((longlong)param_1 + lVar5 + 0x75) = 1;
  bVar9 = *(int *)((longlong)param_1 + lVar5 + 0x60) != -1;
  uVar3 = bVar9 + 1;
  if (*(int *)((longlong)param_1 + lVar5 + 100) == -1) {
    uVar3 = (uint)bVar9;
  }
  uVar2 = uVar3 + 1;
  if (*(int *)((longlong)param_1 + lVar5 + 0x68) == -1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 + 1;
  if (*(int *)((longlong)param_1 + lVar5 + 0x6c) == -1) {
    uVar3 = uVar2;
  }
  *(uint *)((longlong)param_1 + lVar5 + 0x7c) = uVar3;
  return;
}



// FUNCTION 144c29a10 FUN_144c29a10 body=325 status=ok
// SIG undefined FUN_144c29a10(void)

longlong * FUN_144c29a10(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong local_res8;
  
  lVar6 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  iVar2 = (int)param_2[1];
  lVar1 = *param_2 + (longlong)param_2;
  if (((*param_2 != 0) && (lVar1 != 0)) && (0 < iVar2)) {
    uVar5 = iVar2 - 1U | (int)(iVar2 - 1U) >> 0x10;
    uVar5 = uVar5 | (int)uVar5 >> 8;
    uVar5 = uVar5 | (int)uVar5 >> 4;
    uVar5 = uVar5 | (int)uVar5 >> 2;
    uVar5 = ((int)uVar5 >> 1 | uVar5) + 1;
    if ((int)uVar5 < iVar2) {
      FUN_144bfc170(0x5d9e6698,
                    "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                    ,0x1f0,"Capacity reservation overflow");
    }
    local_res8 = (longlong)(int)uVar5 << 7;
    lVar3 = (*DAT_14c787670)(0,&local_res8,0);
    lVar4 = (longlong)param_1 + *param_1;
    if (*param_1 == 0) {
      lVar4 = lVar6;
    }
    FUN_144b3d470(lVar3,lVar4,(longlong)(int)param_1[1] << 7);
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      lVar4 = (longlong)param_1 + *param_1;
      if (*param_1 == 0) {
        lVar4 = lVar6;
      }
      (*DAT_14c787678)(0,lVar4,0);
    }
    *(int *)(param_1 + 1) = iVar2;
    lVar4 = lVar3 - (longlong)param_1;
    if (lVar3 == 0) {
      lVar4 = lVar6;
    }
    *param_1 = lVar4;
    *(uint *)((longlong)param_1 + 0xc) = uVar5 | 0x80000000;
    FUN_144b3d470(lVar4 + (longlong)param_1,lVar1,(longlong)iVar2 << 7);
  }
  *(int *)(param_1 + 2) = (int)param_2[2];
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  return param_1;
}



// FUNCTION 144c29b60 FUN_144c29b60 body=952 status=ok
// SIG undefined FUN_144c29b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c29b60(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  undefined4 *puVar13;
  longlong lVar14;
  float fVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  uVar1 = *(uint *)(param_2 + 0x24);
  lVar14 = (longlong)(int)uVar1;
  lVar9 = (longlong)*(int *)(param_2 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x28);
  auVar21._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar21._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar21._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  puVar5 = (undefined1 *)register0x00000020;
  auVar24 = _DAT_14c6dae80;
  if (0 < (int)uVar1) {
    puVar13 = (undefined4 *)(lVar9 + 0xc);
    lVar12 = lVar14;
    do {
      plVar2 = *(longlong **)(param_1 + 0x48);
      puVar5 = (undefined1 *)(**(code **)(*plVar2 + 8))(plVar2,*puVar13,local_a8);
      puVar13 = puVar13 + 4;
      auVar24 = minps(auVar24,local_a8);
      auVar21 = maxps(auVar21,local_98);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  fVar20 = auVar21._0_4_ - auVar24._0_4_;
  fVar22 = auVar21._4_4_ - auVar24._4_4_;
  fVar23 = auVar21._8_4_ - auVar24._8_4_;
  lVar12 = 0;
  auVar19._4_4_ = fVar20;
  auVar19._0_4_ = fVar20;
  auVar19._8_4_ = fVar20;
  auVar19._12_4_ = fVar20;
  auVar18._4_4_ = fVar22;
  auVar18._0_4_ = fVar22;
  auVar18._8_4_ = fVar22;
  auVar18._12_4_ = fVar22;
  auVar19 = maxps(auVar18,auVar19);
  auVar15._4_4_ = fVar23;
  auVar15._0_4_ = fVar23;
  auVar15._8_4_ = fVar23;
  auVar15._12_4_ = fVar23;
  auVar19 = maxps(auVar15,auVar19);
  auVar16._4_4_ = -(uint)(auVar19._4_4_ <= fVar22);
  auVar16._0_4_ = -(uint)(auVar19._0_4_ <= fVar20);
  auVar16._8_4_ = -(uint)(auVar19._8_4_ <= fVar23);
  auVar16._12_4_ = -(uint)(auVar19._12_4_ <= auVar21._12_4_ - auVar24._12_4_);
  uVar3 = movmskps((int)puVar5,auVar16);
  if ((int)uVar1 < 2) {
    if ((int)uVar1 < 1) {
      local_b8 = 0x80000000;
      lVar6 = lVar12;
      goto LAB_144c29cab;
    }
  }
  else {
    FUN_144c2aa90(lVar9,0,uVar1 - 1,(int)(char)(&DAT_14998f5c0)[uVar3 & 7]);
  }
  lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0,lVar14 * 4);
  local_b8 = uVar1;
LAB_144c29cab:
  auVar24._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar24._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar24._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  if (0 < (int)uVar1) {
    puVar13 = (undefined4 *)(lVar9 + 0xc);
    auVar21 = _DAT_14c6dae80;
    iVar4 = 1;
    do {
      plVar2 = *(longlong **)(param_1 + 0x48);
      (**(code **)(*plVar2 + 8))(plVar2,*puVar13,local_a8);
      auVar24 = maxps(auVar24,local_98);
      puVar13 = puVar13 + 4;
      auVar21 = minps(auVar21,local_a8);
      fVar20 = auVar24._0_4_ - auVar21._0_4_;
      fVar22 = auVar24._4_4_ - auVar21._4_4_;
      fVar23 = auVar24._8_4_ - auVar21._8_4_;
      *(float *)(lVar6 + lVar12 * 4) =
           (fVar20 * fVar23 * fRam000000014c6dacb8 +
           fVar23 * fVar22 * fRam000000014c6dacb4 + fVar22 * fVar20 * _DAT_14c6dacb0) * (float)iVar4
      ;
      lVar12 = lVar12 + 1;
      iVar4 = iVar4 + 1;
    } while (lVar12 < lVar14);
  }
  iVar11 = 1;
  iVar8 = uVar1 - 1;
  fVar20 = 3.40282e+38;
  iVar4 = -1;
  auVar25._0_8_ = (ulonglong)DAT_14c6dae80 ^ 0x8000000080000000;
  auVar25._8_4_ = DAT_14c6dae80._8_4_ ^ 0x80000000;
  auVar25._12_4_ = DAT_14c6dae80._12_4_ ^ 0x80000000;
  if (0 < iVar8) {
    puVar13 = (undefined4 *)(lVar9 + 0xc + (longlong)iVar8 * 0x10);
    pfVar10 = (float *)(lVar6 + ((longlong)iVar8 + -1) * 4);
    auVar24 = _DAT_14c6dae80;
    iVar7 = -1;
    do {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                (*(longlong **)(param_1 + 0x48),*puVar13,local_a8);
      auVar25 = maxps(auVar25,local_98);
      auVar24 = minps(auVar24,local_a8);
      fVar22 = auVar25._0_4_ - auVar24._0_4_;
      fVar23 = auVar25._4_4_ - auVar24._4_4_;
      fVar17 = auVar25._8_4_ - auVar24._8_4_;
      fVar22 = (fVar22 * fVar17 * fRam000000014c6dacb8 +
               fVar17 * fVar23 * fRam000000014c6dacb4 + fVar23 * fVar22 * _DAT_14c6dacb0) *
               (float)iVar11 + *pfVar10;
      iVar4 = iVar8;
      if (fVar20 <= fVar22) {
        iVar4 = iVar7;
        fVar22 = fVar20;
      }
      fVar20 = fVar22;
      iVar8 = iVar8 + -1;
      pfVar10 = pfVar10 + -1;
      puVar13 = puVar13 + -4;
      iVar11 = iVar11 + 1;
      iVar7 = iVar4;
    } while (0 < iVar8);
  }
  iVar8 = *(int *)(param_2 + 0x20);
  iVar11 = *(int *)(param_2 + 0x24);
  iVar7 = iVar11 - iVar4;
  *(int *)(param_4 + 0x20) = iVar8 + iVar4;
  *(int *)(param_3 + 0x20) = iVar8;
  *(int *)(param_3 + 0x24) = iVar4;
  *(int *)(param_4 + 0x24) = iVar7;
  if ((iVar4 < param_5) || (iVar7 < param_5)) {
    iVar4 = (int)uVar1 / 2;
    *(int *)(param_3 + 0x24) = iVar4;
    *(int *)(param_4 + 0x24) = iVar11 - iVar4;
    *(int *)(param_4 + 0x20) = iVar8 + iVar4;
  }
  if ((-1 < (int)local_b8) && (lVar6 != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,lVar6,(ulonglong)(local_b8 & 0x7fffffff) << 2);
  }
  return;
}



// FUNCTION 144c29f20 FUN_144c29f20 body=1520 status=ok
// SIG undefined FUN_144c29f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c29f20(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  longlong local_120;
  longlong *local_110;
  longlong local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong local_d0;
  uint local_c8 [4];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  
  uVar2 = *(uint *)(param_2 + 0x24);
  uVar16 = (ulonglong)(int)uVar2;
  lVar9 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar9 + 0x114) == '\0') {
    __dyn_tls_on_demand_init();
  }
  lVar5 = *(longlong *)(lVar9 + 0xf0);
  if (lVar5 == 0) {
    if (*(char *)(lVar9 + 0x114) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar5 = FUN_144b3f4a0();
    *(longlong *)(lVar9 + 0xf0) = lVar5;
  }
  uVar19 = 0;
  local_f8 = *(ulonglong *)(*(longlong *)(lVar5 + 0x3d0) + 0x10);
  local_108 = uVar16 * 4;
  if (*(longlong *)(local_f8 + 8) != 0) {
    local_f8 = uVar19;
  }
  if (local_f8 == 0) {
    local_120 = (*DAT_14c787670)(1,&local_108,0x40);
  }
  else {
    local_110 = (longlong *)(local_108 + 0x3fU & 0xffffffffffffffc0);
    if (local_110 <= *(longlong **)(local_f8 + 0x28)) {
      local_120 = *(longlong *)(local_f8 + 0x38);
      if ((ulonglong)(local_120 + (longlong)local_110) <= *(ulonglong *)(local_f8 + 0x40)) {
        *(longlong *)(local_f8 + 0x38) = local_120 + (longlong)local_110;
        goto LAB_144c2a050;
      }
    }
    local_120 = FUN_144b454a0(local_f8,&local_110);
  }
LAB_144c2a050:
  fVar27 = 3.40282e+38;
  iVar13 = uVar2 - 1;
  plVar15 = &local_f0;
  local_100 = uVar16 - 1;
  local_108 = CONCAT44(local_108._4_4_,0xffffffff);
  iVar4 = -1;
  local_f0 = 0;
  local_e8 = 0;
  local_e4 = 0x80000000;
  local_e0 = 0;
  local_d8 = 0;
  local_d4 = 0x80000000;
  local_d0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0x80000000;
  auVar23 = _DAT_14c6dae80;
  do {
    pauVar8 = (undefined1 (*) [16])
              ((longlong)*(int *)(param_2 + 0x20) * 0x10 + *(longlong *)(param_1 + 0x28));
    lVar9 = plVar15[1];
    iVar11 = (int)uVar16;
    iVar10 = (int)lVar9 + iVar11;
    local_110 = plVar15;
    iVar14 = iVar13;
    if ((int)(*(uint *)((longlong)plVar15 + 0xc) & 0x7fffffff) < iVar10) {
      FUN_147e57f40(plVar15,&PTR_vftable_14c6e47a0,(longlong)iVar10);
      iVar14 = iVar11 + -1;
      auVar23 = _DAT_14c6dae80;
    }
    lVar5 = *plVar15;
    if (0 < iVar11) {
      uVar16 = uVar16 & 0xffffffff;
      pauVar6 = (undefined1 (*) [16])((longlong)(int)lVar9 * 0x10 + lVar5);
      do {
        if (pauVar6 != (undefined1 (*) [16])0x0) {
          auVar23 = *pauVar8;
          pauVar8 = pauVar8 + 1;
          *pauVar6 = auVar23;
        }
        uVar16 = uVar16 - 1;
        pauVar6 = pauVar6 + 1;
        auVar23 = _DAT_14c6dae80;
      } while (uVar16 != 0);
    }
    *(int *)(plVar15 + 1) = iVar10;
    if (1 < iVar11) {
      FUN_144c2abc0(lVar5,0,iVar14,uVar19);
      auVar23 = _DAT_14c6dae80;
    }
    lVar9 = 0;
    auVar25._0_8_ = auVar23._0_8_ ^ 0x8000000080000000;
    auVar25._8_4_ = auVar23._8_4_ ^ 0x80000000;
    auVar25._12_4_ = auVar23._12_4_ ^ 0x80000000;
    auVar24 = auVar23;
    if (0 < iVar11) {
      puVar17 = (undefined4 *)(lVar5 + 0xc);
      iVar14 = 0;
      do {
        iVar14 = iVar14 + 1;
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                  (*(longlong **)(param_1 + 0x48),*puVar17,local_b8);
        auVar25 = maxps(auVar25,local_a8);
        puVar17 = puVar17 + 4;
        auVar23 = minps(auVar23,local_b8);
        fVar20 = auVar25._0_4_ - auVar23._0_4_;
        fVar21 = auVar25._4_4_ - auVar23._4_4_;
        fVar22 = auVar25._8_4_ - auVar23._8_4_;
        *(float *)(local_120 + lVar9 * 4) =
             (fVar20 * fVar22 * fRam000000014c6dacb8 +
             fVar22 * fVar21 * fRam000000014c6dacb4 + fVar21 * fVar20 * _DAT_14c6dacb0) *
             (float)iVar14;
        lVar9 = lVar9 + 1;
      } while (lVar9 < iVar11);
      lVar5 = *local_110;
      plVar15 = local_110;
      auVar24 = _DAT_14c6dae80;
    }
    auVar26._0_8_ = auVar24._0_8_ ^ 0x8000000080000000;
    auVar26._8_4_ = auVar24._8_4_ ^ 0x80000000;
    auVar26._12_4_ = auVar24._12_4_ ^ 0x80000000;
    iVar11 = 1;
    auVar23 = auVar24;
    if (0 < iVar13) {
      puVar17 = (undefined4 *)(local_100 * 0x10 + 0xc + lVar5);
      pfVar12 = (float *)(local_120 + (local_100 + -1) * 4);
      iVar14 = iVar13;
      do {
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))
                  (*(longlong **)(param_1 + 0x48),*puVar17,local_b8);
        auVar26 = maxps(auVar26,local_a8);
        auVar24 = minps(auVar24,local_b8);
        fVar20 = auVar26._0_4_ - auVar24._0_4_;
        fVar21 = auVar26._4_4_ - auVar24._4_4_;
        fVar22 = auVar26._8_4_ - auVar24._8_4_;
        fVar20 = (fVar20 * fVar22 * fRam000000014c6dacb8 +
                 fVar22 * fVar21 * fRam000000014c6dacb4 + fVar21 * fVar20 * _DAT_14c6dacb0) *
                 (float)iVar11 + *pfVar12;
        if (fVar20 < fVar27) {
          local_108 = CONCAT44(local_108._4_4_,(int)uVar19);
          fVar27 = fVar20;
          iVar4 = iVar14;
        }
        iVar14 = iVar14 + -1;
        puVar17 = puVar17 + -4;
        pfVar12 = pfVar12 + -1;
        iVar11 = iVar11 + 1;
        plVar15 = local_110;
        auVar23 = _DAT_14c6dae80;
      } while (0 < iVar14);
    }
    uVar16 = (ulonglong)uVar2;
    plVar15 = plVar15 + 2;
    uVar18 = (int)uVar19 + 1;
    uVar19 = (ulonglong)uVar18;
  } while ((int)uVar18 < 3);
  iVar13 = *(int *)(param_2 + 0x20);
  iVar11 = *(int *)(param_2 + 0x24);
  *(int *)(param_4 + 0x20) = iVar13 + iVar4;
  iVar14 = iVar11 - iVar4;
  *(int *)(param_3 + 0x20) = iVar13;
  *(int *)(param_3 + 0x24) = iVar4;
  *(int *)(param_4 + 0x24) = iVar14;
  if ((iVar4 < param_5) || (iVar14 < param_5)) {
    iVar4 = (int)uVar2 / 2;
    *(int *)(param_3 + 0x24) = iVar4;
    *(int *)(param_4 + 0x24) = iVar11 - iVar4;
    *(int *)(param_4 + 0x20) = iVar4 + iVar13;
  }
  puVar7 = (undefined8 *)(&local_f0)[(longlong)(int)local_108 * 2];
  if (uVar2 != 0) {
    lVar9 = ((longlong)iVar13 * 0x10 + *(longlong *)(param_1 + 0x28)) - (longlong)puVar7;
    uVar18 = uVar2;
    do {
      uVar3 = puVar7[1];
      puVar1 = (undefined8 *)(lVar9 + (longlong)puVar7);
      *puVar1 = *puVar7;
      puVar1[1] = uVar3;
      puVar7 = puVar7 + 2;
      uVar18 = uVar18 - 1;
    } while (uVar18 != 0);
  }
  lVar9 = 3;
  puVar17 = (undefined4 *)(local_b8 + 4);
  local_110 = plVar15;
  do {
    lVar9 = lVar9 + -1;
    puVar17[-5] = 0;
    if ((-1 < (int)puVar17[-4]) && (*(longlong *)(puVar17 + -7) != 0)) {
      (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                (&PTR_vftable_14c6e47a0,*(longlong *)(puVar17 + -7),
                 (ulonglong)(puVar17[-4] & 0x7fffffff) << 4);
    }
    *(undefined8 *)(puVar17 + -7) = 0;
    puVar17[-4] = 0x80000000;
    puVar17 = puVar17 + -4;
  } while (lVar9 != 0);
  if (local_f8 == 0) {
    (*DAT_14c787678)(1);
  }
  else {
    uVar16 = (longlong)(int)uVar2 * 4 + 0x3fU & 0xffffffffffffffc0;
    if ((*(ulonglong *)(local_f8 + 0x28) < uVar16) ||
       (local_120 + uVar16 != *(longlong *)(local_f8 + 0x38))) {
      FUN_144be8550();
      return;
    }
    *(longlong *)(local_f8 + 0x38) = local_120;
    if (*(longlong *)(local_f8 + 0x48) == local_120) {
      FUN_144be8430();
      return;
    }
  }
  return;
}



// FUNCTION 144c2a520 FUN_144c2a520 body=108 status=ok
// SIG undefined FUN_144c2a520(void)

undefined8 * FUN_144c2a520(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 != param_1) {
    uVar2 = *param_2;
    iVar1 = *(int *)(param_2 + 1);
    if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar1) {
      FUN_144c2ba90(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar1);
    }
    FUN_144b3d470(*param_1,uVar2,(longlong)iVar1 * 8);
    *(int *)(param_1 + 1) = iVar1;
  }
  return param_1;
}



// FUNCTION 144c2a590 FUN_144c2a590 body=518 status=ok
// SIG undefined FUN_144c2a590(void)

/* WARNING: Removing unreachable block (ram,0x000144c2a5d4) */
/* WARNING: Removing unreachable block (ram,0x000144c2a6a3) */

longlong * FUN_144c2a590(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  uint uVar8;
  
  uVar4 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0x80000010;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (longlong)(param_1 + 2);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if ((param_2 != param_1) && (iVar3 = (int)param_2[0x12], 0 < iVar3)) {
    if (0 < iVar3) {
      FUN_144c2b190(param_1,&PTR_vftable_14c6e47a0,iVar3 + 0x3fU >> 6);
    }
    uVar6 = 0;
    *(int *)(param_1 + 0x12) = (int)param_2[0x12];
    uVar5 = *(uint *)(param_2 + 0x12) >> 6;
    uVar8 = *(uint *)(param_2 + 0x12) & 0x3f;
    if (uVar5 != 0) {
      do {
        FUN_144bfbed0(*(undefined8 *)(*param_1 + (longlong)(int)uVar6 * 8),
                      *(undefined8 *)(*param_2 + (longlong)(int)uVar6 * 8),0x2000);
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar5);
    }
    if (uVar8 != 0) {
      FUN_144bfbed0(*(undefined8 *)(*param_1 + (ulonglong)uVar5 * 8),
                    *(undefined8 *)(*param_2 + (ulonglong)uVar5 * 8),uVar8 << 7);
    }
  }
  plVar1 = param_1 + 0x13;
  plVar7 = param_2 + 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *plVar1 = (longlong)(param_1 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0x80000010;
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((plVar7 != plVar1) && (iVar3 = (int)param_2[0x25], 0 < iVar3)) {
    if (0 < iVar3) {
      FUN_144c2b0d0(plVar1,&PTR_vftable_14c6e47a0,(iVar3 + 0x2a9U) / 0x2aa);
    }
    *(int *)(param_1 + 0x25) = (int)param_2[0x25];
    uVar5 = *(uint *)(param_2 + 0x25);
    if (uVar5 / 0x2aa != 0) {
      do {
        FUN_144bfbed0(*(undefined8 *)(*plVar1 + (longlong)(int)uVar4 * 8),
                      *(undefined8 *)(*plVar7 + (longlong)(int)uVar4 * 8),0x2000);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar5 / 0x2aa);
    }
    if (uVar5 % 0x2aa != 0) {
      lVar2 = (ulonglong)(uVar5 / 0x2aa) * 8;
      FUN_144bfbed0(*(undefined8 *)(lVar2 + *plVar1),*(undefined8 *)(*plVar7 + lVar2),
                    (uVar5 % 0x2aa) * 0xc);
    }
  }
  return param_1;
}



// FUNCTION 144c2a7a0 FUN_144c2a7a0 body=262 status=ok
// SIG undefined FUN_144c2a7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144c2a7a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 1) * 0x40 < 2) {
    FUN_144c2b190(param_1,&PTR_vftable_14c6e47a0,*(int *)(param_1 + 1) * -0x40 + 0x41U >> 6);
  }
  if ((*(int *)(param_1 + 0x12) < 2) || (2 < *(int *)(param_1 + 0x12))) {
    *(undefined4 *)(param_1 + 0x12) = 2;
  }
  uVar3 = uRam000000014c6dae88;
  puVar1 = *(undefined8 **)*param_1;
  *puVar1 = _DAT_14c6dae80;
  puVar1[1] = uVar3;
  uVar3 = uRam000000014c6dae88;
  puVar1[4] = _DAT_14c6dae80;
  puVar1[5] = uVar3;
  uVar3 = uRam000000014c6dae88;
  puVar1[8] = _DAT_14c6dae80;
  puVar1[9] = uVar3;
  uVar3 = uRam000000014c6daed8;
  puVar1[2] = _DAT_14c6daed0;
  puVar1[3] = uVar3;
  uVar3 = uRam000000014c6daed8;
  puVar1[6] = _DAT_14c6daed0;
  puVar1[7] = uVar3;
  uVar3 = uRam000000014c6daed8;
  puVar1[10] = _DAT_14c6daed0;
  puVar1[0xb] = uVar3;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  uVar3 = uRam000000014c6dae88;
  lVar2 = *(longlong *)*param_1;
  *(undefined8 *)(lVar2 + 0x80) = _DAT_14c6dae80;
  *(undefined8 *)(lVar2 + 0x88) = uVar3;
  uVar3 = uRam000000014c6dae88;
  *(undefined8 *)(lVar2 + 0xa0) = _DAT_14c6dae80;
  *(undefined8 *)(lVar2 + 0xa8) = uVar3;
  uVar3 = uRam000000014c6dae88;
  *(undefined8 *)(lVar2 + 0xc0) = _DAT_14c6dae80;
  *(undefined8 *)(lVar2 + 200) = uVar3;
  uVar3 = uRam000000014c6daed8;
  *(undefined8 *)(lVar2 + 0x90) = _DAT_14c6daed0;
  *(undefined8 *)(lVar2 + 0x98) = uVar3;
  uVar3 = uRam000000014c6daed8;
  *(undefined8 *)(lVar2 + 0xb0) = _DAT_14c6daed0;
  *(undefined8 *)(lVar2 + 0xb8) = uVar3;
  uVar3 = uRam000000014c6daed8;
  *(undefined8 *)(lVar2 + 0xd0) = _DAT_14c6daed0;
  *(undefined8 *)(lVar2 + 0xd8) = uVar3;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  *(undefined8 *)(lVar2 + 0xe8) = 0;
  *(undefined8 *)(lVar2 + 0xf0) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  return;
}



// FUNCTION 144c2a8b0 FUN_144c2a8b0 body=376 status=ok
// SIG undefined FUN_144c2a8b0(void)

void FUN_144c2a8b0(longlong *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  
  bVar6 = 0;
  iVar5 = 0;
  lVar4 = (ulonglong)(param_2 & 0x3f) * 0x80 +
          *(longlong *)(*param_1 + (ulonglong)(param_2 >> 6) * 8);
  if ((*(byte *)(lVar4 + 0x74) & 1) == 0) {
    uVar2 = *(uint *)(lVar4 + 0x60);
    if (uVar2 != 0) {
      FUN_144c2a8b0(param_1,uVar2);
      lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x80 +
              *(longlong *)(*param_1 + (ulonglong)(uVar2 >> 6) * 8);
      iVar5 = *(int *)(lVar3 + 0x7c);
      bVar6 = *(byte *)(lVar3 + 0x75);
      *(uint *)(lVar3 + 0x78) = param_2;
    }
    uVar2 = *(uint *)(lVar4 + 100);
    bVar7 = bVar6;
    if (uVar2 != 0) {
      FUN_144c2a8b0(param_1,uVar2);
      lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x80 +
              *(longlong *)(*param_1 + (ulonglong)(uVar2 >> 6) * 8);
      iVar5 = iVar5 + *(int *)(lVar3 + 0x7c);
      *(uint *)(lVar3 + 0x78) = param_2;
      bVar7 = *(byte *)(lVar3 + 0x75);
      if (*(byte *)(lVar3 + 0x75) < bVar6) {
        bVar7 = bVar6;
      }
    }
    uVar2 = *(uint *)(lVar4 + 0x68);
    bVar6 = bVar7;
    if (uVar2 != 0) {
      FUN_144c2a8b0(param_1,uVar2);
      lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x80 +
              *(longlong *)(*param_1 + (ulonglong)(uVar2 >> 6) * 8);
      iVar5 = iVar5 + *(int *)(lVar3 + 0x7c);
      *(uint *)(lVar3 + 0x78) = param_2;
      bVar6 = *(byte *)(lVar3 + 0x75);
      if (*(byte *)(lVar3 + 0x75) < bVar7) {
        bVar6 = bVar7;
      }
    }
    uVar2 = *(uint *)(lVar4 + 0x6c);
    bVar7 = bVar6;
    if (uVar2 != 0) {
      FUN_144c2a8b0(param_1,uVar2);
      lVar3 = (ulonglong)(uVar2 & 0x3f) * 0x80 +
              *(longlong *)(*param_1 + (ulonglong)(uVar2 >> 6) * 8);
      iVar5 = iVar5 + *(int *)(lVar3 + 0x7c);
      *(uint *)(lVar3 + 0x78) = param_2;
      bVar7 = *(byte *)(lVar3 + 0x75);
      if (*(byte *)(lVar3 + 0x75) < bVar6) {
        bVar7 = bVar6;
      }
    }
    *(byte *)(lVar4 + 0x75) = bVar7 + 1;
    *(int *)(lVar4 + 0x7c) = iVar5;
    return;
  }
  *(undefined1 *)(lVar4 + 0x75) = 1;
  bVar8 = *(int *)(lVar4 + 0x60) != -1;
  uVar2 = bVar8 + 1;
  if (*(int *)(lVar4 + 100) == -1) {
    uVar2 = (uint)bVar8;
  }
  uVar1 = uVar2 + 1;
  if (*(int *)(lVar4 + 0x68) == -1) {
    uVar1 = uVar2;
  }
  uVar2 = uVar1 + 1;
  if (*(int *)(lVar4 + 0x6c) == -1) {
    uVar2 = uVar1;
  }
  *(uint *)(lVar4 + 0x7c) = uVar2;
  return;
}



// FUNCTION 144c2aa90 FUN_144c2aa90 body=292 status=ok
// SIG undefined FUN_144c2aa90(void)

void FUN_144c2aa90(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int local_60 [14];
  
  uVar18 = (ulonglong)param_2;
  lVar13 = (longlong)param_4;
  uVar19 = uVar18;
  do {
    uVar15 = uVar19 & 0xffffffff;
    piVar1 = (int *)(param_1 + ((longlong)((int)uVar19 + param_3) >> 1) * 0x10);
    local_60[0] = *piVar1;
    local_60[1] = piVar1[1];
    local_60[2] = piVar1[2];
    local_60[3] = piVar1[3];
    iVar6 = local_60[lVar13];
    uVar17 = (longlong)param_3;
    iVar16 = param_3;
    do {
      uVar14 = (uint)uVar15;
      lVar2 = lVar13 + uVar18 * 4;
      piVar1 = (int *)(param_1 + lVar2 * 4);
      iVar7 = *(int *)(param_1 + lVar2 * 4);
      while (iVar7 < iVar6) {
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        piVar1 = piVar1 + 4;
        uVar18 = uVar18 + 1;
        iVar7 = *piVar1;
      }
      lVar2 = lVar13 + uVar17 * 4;
      piVar1 = (int *)(param_1 + lVar2 * 4);
      iVar7 = *(int *)(param_1 + lVar2 * 4);
      while (iVar6 < iVar7) {
        iVar16 = iVar16 + -1;
        piVar1 = piVar1 + -4;
        uVar17 = uVar17 - 1;
        iVar7 = *piVar1;
      }
      if ((longlong)uVar17 < (longlong)uVar18) break;
      if (uVar17 != uVar18) {
        puVar3 = (undefined8 *)(param_1 + uVar17 * 0x10);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar4 = (undefined4 *)(param_1 + uVar18 * 0x10);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        puVar5 = (undefined4 *)(param_1 + uVar17 * 0x10);
        *puVar5 = *puVar4;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        puVar3 = (undefined8 *)(param_1 + uVar18 * 0x10);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
      }
      iVar16 = iVar16 + -1;
      uVar17 = uVar17 - 1;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 <= (longlong)uVar17);
    if ((int)uVar19 < iVar16) {
      FUN_144c2aa90(param_1,uVar19 & 0xffffffff,iVar16,param_4);
    }
    if (param_3 <= (int)uVar14) {
      return;
    }
    uVar19 = (ulonglong)uVar14;
  } while( true );
}



// FUNCTION 144c2abc0 FUN_144c2abc0 body=292 status=ok
// SIG undefined FUN_144c2abc0(void)

void FUN_144c2abc0(longlong param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int local_60 [14];
  
  uVar18 = (ulonglong)param_2;
  lVar13 = (longlong)param_4;
  uVar19 = uVar18;
  do {
    uVar15 = uVar19 & 0xffffffff;
    piVar1 = (int *)(param_1 + ((longlong)((int)uVar19 + param_3) >> 1) * 0x10);
    local_60[0] = *piVar1;
    local_60[1] = piVar1[1];
    local_60[2] = piVar1[2];
    local_60[3] = piVar1[3];
    iVar6 = local_60[lVar13];
    uVar17 = (longlong)param_3;
    iVar16 = param_3;
    do {
      uVar14 = (uint)uVar15;
      lVar2 = lVar13 + uVar18 * 4;
      piVar1 = (int *)(param_1 + lVar2 * 4);
      iVar7 = *(int *)(param_1 + lVar2 * 4);
      while (iVar7 < iVar6) {
        uVar14 = (int)uVar15 + 1;
        uVar15 = (ulonglong)uVar14;
        piVar1 = piVar1 + 4;
        uVar18 = uVar18 + 1;
        iVar7 = *piVar1;
      }
      lVar2 = lVar13 + uVar17 * 4;
      piVar1 = (int *)(param_1 + lVar2 * 4);
      iVar7 = *(int *)(param_1 + lVar2 * 4);
      while (iVar6 < iVar7) {
        iVar16 = iVar16 + -1;
        piVar1 = piVar1 + -4;
        uVar17 = uVar17 - 1;
        iVar7 = *piVar1;
      }
      if ((longlong)uVar17 < (longlong)uVar18) break;
      if (uVar17 != uVar18) {
        puVar3 = (undefined8 *)(param_1 + uVar17 * 0x10);
        uVar11 = *puVar3;
        uVar12 = puVar3[1];
        puVar4 = (undefined4 *)(param_1 + uVar18 * 0x10);
        uVar8 = puVar4[1];
        uVar9 = puVar4[2];
        uVar10 = puVar4[3];
        puVar5 = (undefined4 *)(param_1 + uVar17 * 0x10);
        *puVar5 = *puVar4;
        puVar5[1] = uVar8;
        puVar5[2] = uVar9;
        puVar5[3] = uVar10;
        puVar3 = (undefined8 *)(param_1 + uVar18 * 0x10);
        *puVar3 = uVar11;
        puVar3[1] = uVar12;
      }
      iVar16 = iVar16 + -1;
      uVar17 = uVar17 - 1;
      uVar14 = uVar14 + 1;
      uVar15 = (ulonglong)uVar14;
      uVar18 = uVar18 + 1;
    } while ((longlong)uVar18 <= (longlong)uVar17);
    if ((int)uVar19 < iVar16) {
      FUN_144c2abc0(param_1,uVar19 & 0xffffffff,iVar16,param_4);
    }
    if (param_3 <= (int)uVar14) {
      return;
    }
    uVar19 = (ulonglong)uVar14;
  } while( true );
}



// FUNCTION 144c2acf0 FUN_144c2acf0 body=81 status=ok
// SIG undefined FUN_144c2acf0(void)

void FUN_144c2acf0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  
  if (0 < param_3) {
    lVar1 = (longlong)param_3;
    do {
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
        param_1[1] = 0;
        *(undefined4 *)(param_1 + 2) = 0;
        FUN_147e56b1c(param_1);
      }
      param_1 = param_1 + 3;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 144c2ad50 FUN_144c2ad50 body=474 status=ok
// SIG undefined FUN_144c2ad50(void)

void FUN_144c2ad50(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    puVar7 = (uint *)(param_1 + 0xc);
    local_38 = param_2 + 8;
    lVar4 = param_2 + -4;
    lVar5 = param_2 + -0xc;
    lVar8 = (longlong)param_4;
    local_40 = lVar4;
    local_30 = lVar5;
    do {
      puVar1 = puVar7 + -3;
      if (puVar1 != (uint *)0x0) {
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar7[-1] = 0;
        puVar7[0] = 0;
        lVar3 = *(longlong *)(lVar5 + (longlong)puVar7);
        if (lVar3 != 0) {
          uVar2 = *(uint *)((longlong)puVar7 + lVar4);
          lVar3 = lVar5 + (longlong)puVar7 + lVar3;
          if ((lVar3 != 0) && (0 < (int)uVar2)) {
            *puVar7 = 0;
            uVar6 = uVar2 - 1 | (int)(uVar2 - 1) >> 0x10;
            uVar6 = uVar6 | (int)uVar6 >> 8;
            uVar6 = uVar6 | (int)uVar6 >> 4;
            uVar6 = uVar6 | (int)uVar6 >> 2;
            uVar6 = ((int)uVar6 >> 1 | uVar6) + 1;
            if ((int)uVar6 < (int)uVar2) {
              FUN_144bfc170(0x5d9e6698,
                            "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/RelArray/hkRelArray.inl"
                            ,0x1f0,"Capacity reservation overflow");
            }
            local_48 = (longlong)(int)uVar6 << 7;
            lVar4 = (*DAT_14c787670)(0,&local_48,0);
            if (*(longlong *)puVar1 == 0) {
              lVar5 = 0;
            }
            else {
              lVar5 = *(longlong *)puVar1 + (longlong)puVar1;
            }
            FUN_144b3d470(lVar4,lVar5,(longlong)(int)puVar7[-1] << 7);
            if ((int)*puVar7 < 0) {
              if (*(longlong *)puVar1 == 0) {
                lVar5 = 0;
              }
              else {
                lVar5 = *(longlong *)puVar1 + (longlong)puVar1;
              }
              (*DAT_14c787678)(0,lVar5,0);
            }
            puVar7[-1] = uVar2;
            lVar5 = 0;
            if (lVar4 != 0) {
              lVar5 = lVar4 - (longlong)puVar1;
            }
            *(longlong *)puVar1 = lVar5;
            *puVar7 = uVar6 | 0x80000000;
            FUN_144b3d470(lVar5 + -0xc + (longlong)puVar7,lVar3,(longlong)(int)uVar2 << 7);
            lVar4 = local_40;
          }
        }
        puVar7[1] = *(uint *)((longlong)puVar7 + param_2 + 4);
        *(undefined1 *)(puVar7 + 2) = *(undefined1 *)(local_38 + (longlong)puVar7);
        lVar5 = local_30;
      }
      puVar7 = puVar7 + 6;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



// FUNCTION 144c2af60 FUN_144c2af60 body=140 status=ok
// SIG undefined FUN_144c2af60(void)

void FUN_144c2af60(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_3) {
    puVar1 = (undefined4 *)(param_1 + 0xa0);
    lVar2 = (longlong)param_3;
    do {
      if ((undefined8 *)(puVar1 + -0x28) != (undefined8 *)0x0) {
        puVar1[-0x26] = 0;
        *(undefined4 **)(puVar1 + -0x28) = puVar1 + -0x24;
        *(undefined4 **)(puVar1 + -2) = puVar1 + 2;
        puVar1[-0x25] = 0x80000010;
        puVar1[-4] = 0;
        *puVar1 = 0;
        puVar1[1] = 0x80000010;
        puVar1[0x22] = 0;
        puVar1[0x24] = 0;
        FUN_144c2a7a0();
      }
      puVar1 = puVar1 + 0x4e;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c2aff0 FUN_144c2aff0 body=105 status=ok
// SIG undefined FUN_144c2aff0(void)

void FUN_144c2aff0(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    lVar2 = (longlong)param_4;
    puVar1 = (undefined4 *)(param_1 + 0x130);
    do {
      if (puVar1 + -0x4c != (undefined4 *)0x0) {
        FUN_144c2a590(puVar1 + -0x4c,param_2 + -0x130 + (longlong)puVar1);
        *puVar1 = *(undefined4 *)(param_2 + (longlong)puVar1);
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 4 + (longlong)puVar1);
      }
      puVar1 = puVar1 + 0x4e;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 144c2b0d0 FUN_144c2b0d0 body=186 status=ok
// SIG undefined FUN_144c2b0d0(void)

void FUN_144c2b0d0(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  iVar3 = (int)param_1[1] + param_3;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_144c2b800(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = (**(code **)(*param_2 + 8))(param_2,0x2000);
      iVar3 = (int)param_1[1] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
        FUN_144c2b8f0(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)(param_1 + 1) = iVar3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144c2b190 FUN_144c2b190 body=186 status=ok
// SIG undefined FUN_144c2b190(void)

void FUN_144c2b190(longlong *param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_3;
  iVar3 = (int)param_1[1] + param_3;
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
    FUN_144c2b710(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
  }
  if (0 < (int)param_3) {
    do {
      uVar2 = (**(code **)(*param_2 + 8))(param_2,0x2000);
      iVar3 = (int)param_1[1] + 1;
      if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < iVar3) {
        FUN_144c2b510(param_1,&PTR_vftable_14c6e47a0,(longlong)iVar3);
      }
      puVar1 = (undefined8 *)(*param_1 + (longlong)(int)param_1[1] * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = uVar2;
      }
      *(int *)(param_1 + 1) = iVar3;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}



// FUNCTION 144c2b250 FUN_144c2b250 body=260 status=ok
// SIG undefined FUN_144c2b250(void)

void FUN_144c2b250(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144be9620(param_2,param_4);
  if ((param_3 == 0) || ((int)param_4 <= (int)param_2[1])) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 < (int)uVar2) {
      uVar2 = param_4;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 3);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_144b3d470(lVar1,*param_2,(longlong)(int)uVar2 << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = lVar1;
    uVar3 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar3 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
  }
  else {
    FUN_144b3d470(param_3,*param_2,(longlong)(int)param_2[1] << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  return;
}



// FUNCTION 144c2b360 FUN_144c2b360 body=158 status=ok
// SIG undefined FUN_144c2b360(void)

void FUN_144c2b360(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c2b400 FUN_144c2b400 body=260 status=ok
// SIG undefined FUN_144c2b400(void)

void FUN_144c2b400(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_144be9620(param_2,param_4);
  if ((param_3 == 0) || ((int)param_4 <= (int)param_2[1])) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar2 = *(uint *)((longlong)param_2 + 0xc) & 0x7fffffff;
    if ((int)param_4 < (int)uVar2) {
      uVar2 = param_4;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1,(longlong)(int)param_4 << 3);
    if ((int)uVar3 <= (int)uVar2) {
      uVar2 = uVar3;
    }
    FUN_144b3d470(lVar1,*param_2,(longlong)(int)uVar2 << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = lVar1;
    uVar3 = 0x7fffffff;
    if (param_4 < 0x7fffffff) {
      uVar3 = param_4;
    }
    *(uint *)((longlong)param_2 + 0xc) = uVar3;
  }
  else {
    FUN_144b3d470(param_3,*param_2,(longlong)(int)param_2[1] << 3);
    (**(code **)(*param_1 + 0x18))
              (param_1,*param_2,((ulonglong)*(uint *)((longlong)param_2 + 0xc) & 0x7fffffff) << 3);
    *param_2 = param_3;
    *(uint *)((longlong)param_2 + 0xc) = param_4 | 0x80000000;
  }
  return;
}



// FUNCTION 144c2b510 FUN_144c2b510 body=247 status=ok
// SIG undefined FUN_144c2b510(void)

void FUN_144c2b510(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c2b610 FUN_144c2b610 body=247 status=ok
// SIG undefined FUN_144c2b610(void)

void FUN_144c2b610(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 4,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar3 * 4 + 4;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 4;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 4);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c2b710 FUN_144c2b710 body=235 status=ok
// SIG undefined FUN_144c2b710(void)

void FUN_144c2b710(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c2b800 FUN_144c2b800 body=235 status=ok
// SIG undefined FUN_144c2b800(void)

void FUN_144c2b800(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong local_res8;
  
  uVar1 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_res8 = uVar3 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_res8,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(*(undefined1 *)(param_2 + 8),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  return;
}



// FUNCTION 144c2b8f0 FUN_144c2b8f0 body=247 status=ok
// SIG undefined FUN_144c2b8f0(void)

void FUN_144c2b8f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff);
  uVar1 = uVar5 * 2;
  uVar3 = param_3;
  if (param_3 < uVar1) {
    uVar3 = uVar1;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,uVar3 * 8,&local_res8);
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar3 * 8 + 8;
  uVar4 = uVar3;
  if (uVar1 <= local_res8) {
    local_res8 = local_res8 - 8;
    uVar4 = uVar3 + 1;
    if (uVar1 <= local_res8) {
      uVar4 = uVar4 + (local_res8 + uVar3 * -8 >> 3);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar5 * 8);
  }
  *param_1 = uVar2;
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  return;
}



// FUNCTION 144c2b9f0 FUN_144c2b9f0 body=159 status=ok
// SIG undefined FUN_144c2b9f0(void)

void FUN_144c2b9f0(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c2ba90 FUN_144c2ba90 body=159 status=ok
// SIG undefined FUN_144c2ba90(void)

void FUN_144c2ba90(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "D:\\p4\\ozhohan_oak2_code\\Engine\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 8);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *param_1 = uVar1;
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  return;
}



// FUNCTION 144c2bb30 FUN_144c2bb30 body=18 status=ok
// SIG undefined FUN_144c2bb30(void)

undefined8 * FUN_144c2bb30(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  param_2[1] = &DAT_14c6e53a0;
  return param_2;
}



// FUNCTION 144c2bb50 FUN_144c2bb50 body=159 status=ok
// SIG undefined FUN_144c2bb50(void)

undefined8 * FUN_144c2bb50(undefined8 *param_1,uint param_2)

{
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((longlong)param_1 + 0x24)) && (param_1[3] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[3],
               (ulonglong)(*(uint *)((longlong)param_1 + 0x24) & 0x7fffffff) << 3);
  }
  param_1[3] = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      (*DAT_14c787678)(0,param_1,0);
      return param_1;
    }
    FUN_144bda120(param_1,0x28);
  }
  return param_1;
}


