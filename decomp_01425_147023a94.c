// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147023a94 FUN_147023a94 body=433 status=ok
// SIG undefined FUN_147023a94(void)

void FUN_147023a94(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar6);
    }
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1448fc38a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14488f93c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x60 + lVar2 + -0x5c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x18;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar8;
      if (param_2 != 0) {
        plVar7 = param_1 + 2;
        uVar12 = uVar8 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar7,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar7;
        }
        if (uVar8 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 147023c46 FUN_147023c46 body=338 status=ok
// SIG undefined FUN_147023c46(void)

undefined8 FUN_147023c46(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  void *_Dst;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  undefined8 *puVar14;
  int iVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  
  iVar2 = *(int *)((longlong)param_1 + 0x34);
  if ((longlong)iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 1);
    iVar7 = uVar3 - iVar2;
    iVar6 = iVar7;
    if ((int)param_1[6] == -1) {
      uVar9 = 0;
    }
    else {
      lVar5 = *param_1;
      uVar9 = 0;
      iVar10 = (int)param_1[6];
      uVar11 = uVar3;
      do {
        iVar4 = *(int *)(lVar5 + 4 + (longlong)iVar10 * 0x10);
        if (iVar10 < iVar7) {
          puVar14 = (undefined8 *)((longlong)iVar10 * 0x10 + lVar5);
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          puVar17 = (undefined8 *)((longlong)(int)(uVar11 - 1) * 0x10 + lVar5 + 0x10);
          uVar8 = uVar11;
          do {
            puVar16 = puVar17;
            uVar11 = uVar8 - 1;
            uVar13 = uVar8 + 0x1e;
            if (-1 < (int)uVar11) {
              uVar13 = uVar11;
            }
            puVar17 = puVar16 + -2;
            uVar8 = uVar11;
          } while ((*(uint *)((longlong)plVar12 + (longlong)((int)uVar13 >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) == 0);
          uVar8 = 1 << ((byte)iVar10 & 0x1f);
          uVar9 = puVar16[-1];
          *puVar14 = *puVar17;
          puVar14[1] = uVar9;
          plVar12 = (longlong *)param_1[4];
          if ((longlong *)param_1[4] == (longlong *)0x0) {
            plVar12 = param_1 + 2;
          }
          iVar15 = iVar10 + 0x1f;
          if (-1 < iVar10) {
            iVar15 = iVar10;
          }
          puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar15 >> 5) * 4);
          *puVar1 = *puVar1 | uVar8;
          uVar9 = CONCAT71((uint7)(uint3)(uVar8 >> 8),1);
        }
        iVar10 = iVar4;
      } while (iVar4 != -1);
      iVar10 = (int)param_1[1] - uVar3;
      if (iVar10 != 0) {
        _Dst = (void *)((longlong)iVar7 * 0x10 + *param_1);
        memmove(_Dst,(void *)((longlong)iVar2 * 0x10 + (longlong)_Dst),(longlong)iVar10 << 4);
        iVar6 = (int)param_1[1] - iVar2;
      }
    }
    *(int *)(param_1 + 1) = iVar6;
    FUN_144a6134a(param_1 + 2,iVar7,iVar2);
    param_1[6] = 0xffffffff;
    if (*(int *)((longlong)param_1 + 0xc) != (int)param_1[1]) {
      FUN_14472eb64(param_1);
    }
  }
  return uVar9;
}



// FUNCTION 147023d98 FUN_147023d98 body=136 status=ok
// SIG undefined FUN_147023d98(void)

void FUN_147023d98(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == param_2) {
          FUN_147023e20(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + *param_1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147023e20 FUN_147023e20 body=95 status=ok
// SIG undefined FUN_147023e20(void)

void FUN_147023e20(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_147023e80();
  return;
}



// FUNCTION 147023e80 FUN_147023e80 body=88 status=ok
// SIG undefined FUN_147023e80(void)

void FUN_147023e80(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(lVar1 + lVar2 + 8);
  FUN_1470239fe(param_1,param_2,1);
  return;
}



// FUNCTION 147023ed8 FUN_147023ed8 body=93 status=ok
// SIG undefined FUN_147023ed8(void)

void FUN_147023ed8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_140906bd0(param_1,param_2,1);
  return;
}



// FUNCTION 147023f3a FUN_147023f3a body=677 status=ok
// SIG undefined FUN_147023f3a(void)

undefined8 *
FUN_147023f3a(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong *param_5)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  undefined4 uStack_98;
  undefined4 uStack_94;
  int iStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_64;
  undefined8 uStack_5c;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((int)param_5[1] != 0) && ((longlong *)*param_5 != (longlong *)0x0)) {
    cVar8 = (**(code **)(*(longlong *)*param_5 + 0x30))();
    if (cVar8 != '\0') {
      if (((int)param_5[1] == 0) || (plVar2 = (longlong *)*param_5, plVar2 == (longlong *)0x0)) {
        *param_2 = 0;
      }
      else {
        (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
      }
      uVar13 = 0;
      local_64 = 0;
      FUN_14485c47a(&local_64,param_3);
      uStack_88 = *(undefined4 *)(param_4 + 1);
      uVar3 = *param_4;
      local_50 = 0;
      uStack_5c._0_4_ = (int)uVar3;
      uStack_5c._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
      uStack_5c = uVar3;
      local_54 = uStack_88;
      if ((short)param_1[2] < 1) {
        uVar9 = (uint)*(ushort *)((longlong)param_1 + 0x14);
        if ((int)*(uint *)(param_1 + 1) < (int)(uint)*(ushort *)((longlong)param_1 + 0x14)) {
          uVar9 = *(uint *)(param_1 + 1);
        }
        if (0 < (int)uVar9) {
          uVar13 = 0;
          uVar11 = (ulonglong)uVar9;
          do {
            uVar11 = uVar11 >> 1;
            uVar12 = (uint)uVar11 + (int)uVar13;
            uVar3 = *(undefined8 *)(*param_1 + 8 + (ulonglong)uVar12 * 0x30);
            iVar14 = (int)uStack_5c - (int)uVar3;
            if (iVar14 == 0) {
              iVar14 = uStack_5c._4_4_ - (int)((ulonglong)uVar3 >> 0x20);
            }
            if (-1 < iVar14) {
              uVar13 = (ulonglong)(uVar12 + (uVar9 & 1));
            }
            bVar6 = 1 < uVar9;
            uVar9 = (uint)uVar11;
          } while (bVar6);
        }
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_98 = (undefined4)local_64;
        uStack_94 = local_64._4_4_;
        iStack_90 = (int)uStack_5c;
        local_8c = uStack_5c._4_4_;
        lVar4 = *param_5;
        *param_5 = 0;
        lVar7 = param_5[1];
        *(undefined4 *)(param_5 + 1) = 0;
        iVar14 = (int)param_1[1];
        *(int *)(param_1 + 1) = iVar14 + 1;
        if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
          FUN_1470252c4(param_1,iVar14);
        }
        lVar10 = uVar13 * 0x30;
        memmove((void *)(*param_1 + lVar10 + 0x30),(void *)(*param_1 + lVar10),
                (ulonglong)(uint)(iVar14 - (int)uVar13) * 0x30);
        lVar5 = *param_1;
        puVar1 = (undefined4 *)(lVar5 + lVar10);
        *puVar1 = (undefined4)local_64;
        puVar1[1] = local_64._4_4_;
        puVar1[2] = (int)uStack_5c;
        puVar1[3] = uStack_5c._4_4_;
        puVar1 = (undefined4 *)(lVar5 + 0xc + lVar10);
        *puVar1 = uStack_5c._4_4_;
        puVar1[1] = local_54;
        puVar1[2] = (undefined4)local_50;
        puVar1[3] = local_50._4_4_;
        *(longlong *)(lVar5 + 0x20 + lVar10) = lVar4;
        local_78 = 0;
        *(int *)(lVar5 + 0x28 + lVar10) = (int)lVar7;
        local_70 = 0;
        FUN_1449db362(&local_78);
      }
      else {
        uStack_84 = 0;
        uStack_80 = 0;
        uStack_98 = (undefined4)local_64;
        uStack_94 = local_64._4_4_;
        iStack_90 = (int)uStack_5c;
        local_8c = uStack_5c._4_4_;
        lVar4 = *param_5;
        *param_5 = 0;
        lVar7 = param_5[1];
        *(undefined4 *)(param_5 + 1) = 0;
        iVar14 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
          FUN_1470252c4(param_1,iVar14);
        }
        lVar5 = *param_1;
        lVar10 = (longlong)iVar14 * 0x30;
        puVar1 = (undefined4 *)(lVar5 + 0xc + lVar10);
        *puVar1 = uStack_5c._4_4_;
        puVar1[1] = local_54;
        puVar1[2] = (undefined4)local_50;
        puVar1[3] = local_50._4_4_;
        puVar1 = (undefined4 *)(lVar5 + lVar10);
        *puVar1 = (undefined4)local_64;
        puVar1[1] = local_64._4_4_;
        puVar1[2] = (int)uStack_5c;
        puVar1[3] = uStack_5c._4_4_;
        *(longlong *)(lVar5 + 0x20 + lVar10) = lVar4;
        local_78 = 0;
        *(int *)(lVar5 + 0x28 + lVar10) = (int)lVar7;
        local_70 = 0;
        FUN_1449db362(&local_78);
        if ((ushort)*(int *)((longlong)param_1 + 0x14) < (ushort)iVar14) {
          iVar14 = *(int *)((longlong)param_1 + 0x14);
        }
        *(short *)((longlong)param_1 + 0x14) = (short)iVar14;
      }
      goto LAB_147023fa5;
    }
  }
  *param_2 = 0;
LAB_147023fa5:
  FUN_1449db362(param_5);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470241e0 FUN_1470241e0 body=788 status=ok
// SIG undefined FUN_1470241e0(void)

undefined8 *
FUN_1470241e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
             longlong param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong *plVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_74;
  undefined8 uStack_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  cVar9 = FUN_14113f0c0(param_5);
  if (cVar9 == '\0') {
    *param_2 = 0;
  }
  else {
    local_a8 = *(undefined8 *)(param_5 + 8);
    uVar11 = FUN_14479d2ce(param_5);
    local_58 = (longlong *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    local_50 = 3;
    FUN_147025358(local_58,uVar11,&local_a8);
    if (local_58 == (longlong *)0x0 || local_50 == 0) {
      *param_2 = 0;
    }
    else {
      (**(code **)(*local_58 + 0x38))(local_58,param_2);
    }
    local_74 = 0;
    FUN_14485c47a(&local_74,param_3);
    iVar8 = local_50;
    plVar7 = local_58;
    iStack_98 = *(int *)(param_4 + 1);
    uVar11 = *param_4;
    uVar5 = *(undefined8 *)(param_5 + 8);
    uStack_6c._0_4_ = (int)uVar11;
    uStack_6c._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
    local_60._0_4_ = (int)uVar5;
    local_60._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
    uStack_6c = uVar11;
    local_64 = iStack_98;
    local_60 = uVar5;
    if ((short)param_1[2] < 1) {
      uVar4 = *(uint *)(param_1 + 1);
      uVar10 = (uint)*(ushort *)((longlong)param_1 + 0x14);
      if ((int)uVar4 < (int)(uint)*(ushort *)((longlong)param_1 + 0x14)) {
        uVar10 = uVar4;
      }
      lVar13 = *param_1;
      if ((int)uVar10 < 1) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0;
        uVar14 = (ulonglong)uVar10;
        do {
          uVar14 = uVar14 >> 1;
          uVar15 = (uint)uVar14 + uVar16;
          uVar11 = *(undefined8 *)(lVar13 + 8 + (ulonglong)uVar15 * 0x30);
          iVar17 = (int)uStack_6c - (int)uVar11;
          if (iVar17 == 0) {
            iVar17 = uStack_6c._4_4_ - (int)((ulonglong)uVar11 >> 0x20);
          }
          if (-1 < iVar17) {
            uVar16 = uVar15 + (uVar10 & 1);
          }
          bVar6 = 1 < uVar10;
          uVar10 = (uint)uVar14;
        } while (bVar6);
      }
      iStack_94 = (int)local_60;
      iStack_90 = local_60._4_4_;
      local_a8 = local_74;
      iStack_a0 = (int)uStack_6c;
      iStack_9c = uStack_6c._4_4_;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      *(uint *)(param_1 + 1) = uVar4 + 1;
      if (*(uint *)((longlong)param_1 + 0xc) == uVar4) {
        FUN_1470252c4(param_1,uVar4);
        lVar13 = *param_1;
      }
      lVar12 = (ulonglong)uVar16 * 0x30;
      memmove((void *)(lVar13 + lVar12 + 0x30),(void *)(lVar13 + lVar12),
              (ulonglong)(uVar4 - uVar16) * 0x30);
      lVar13 = *param_1;
      *(undefined8 *)(lVar13 + lVar12) = local_a8;
      ((undefined8 *)(lVar13 + lVar12))[1] = CONCAT44(iStack_9c,iStack_a0);
      piVar3 = (int *)(lVar13 + 0xc + lVar12);
      *piVar3 = iStack_9c;
      piVar3[1] = iStack_98;
      piVar3[2] = iStack_94;
      piVar3[3] = iStack_90;
      *(longlong **)(lVar13 + 0x20 + lVar12) = plVar7;
      local_88 = 0;
      *(int *)(lVar13 + 0x28 + lVar12) = iVar8;
      local_80 = 0;
      FUN_1449db362(&local_88);
    }
    else {
      iStack_94 = (int)local_60;
      iStack_90 = local_60._4_4_;
      local_a8 = local_74;
      iStack_a0 = (int)uStack_6c;
      iStack_9c = uStack_6c._4_4_;
      local_58 = (longlong *)0x0;
      local_50 = 0;
      iVar17 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar17 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar17 + 1U) {
        FUN_1470252c4(param_1,iVar17);
      }
      lVar13 = *param_1;
      lVar12 = (longlong)iVar17 * 0x30;
      puVar2 = (undefined8 *)(lVar13 + 0xc + lVar12);
      *puVar2 = CONCAT44(iStack_98,iStack_9c);
      puVar2[1] = CONCAT44(iStack_90,iStack_94);
      puVar1 = (undefined4 *)(lVar13 + lVar12);
      *puVar1 = (undefined4)local_a8;
      puVar1[1] = local_a8._4_4_;
      puVar1[2] = iStack_a0;
      puVar1[3] = iStack_9c;
      *(longlong **)(lVar13 + 0x20 + lVar12) = plVar7;
      local_88 = 0;
      *(int *)(lVar13 + 0x28 + lVar12) = iVar8;
      local_80 = 0;
      FUN_1449db362(&local_88);
      if ((ushort)*(int *)((longlong)param_1 + 0x14) < (ushort)iVar17) {
        iVar17 = *(int *)((longlong)param_1 + 0x14);
      }
      *(short *)((longlong)param_1 + 0x14) = (short)iVar17;
    }
    FUN_1449db362(&local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470244f6 FUN_1470244f6 body=99 status=ok
// SIG undefined FUN_1470244f6(void)

void FUN_1470244f6(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  
  lVar1 = *param_1;
  FUN_1449db362(lVar1 + (longlong)(int)param_2 * 0x30 + 0x20);
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x30);
    memmove(_Dst,(void *)((longlong)_Dst + 0x30),(longlong)(int)(~param_2 + iVar2) * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  FUN_1470256f2(param_1);
  return;
}



// FUNCTION 14702455a FUN_14702455a body=438 status=ok
// SIG undefined FUN_14702455a(void)

undefined2 *
FUN_14702455a(longlong *param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4,
             longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  byte *local_60;
  undefined8 local_58;
  byte local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_49 = 0;
  local_4a = 0;
  if (param_5 == 0) {
    *param_2 = 0;
    goto LAB_14702468c;
  }
  local_70 = &param_5;
  local_68 = &local_49;
  local_60 = &local_4a;
  lVar1 = *param_4;
  uVar6 = *(ushort *)((longlong)param_1 + 0x14);
  uVar8 = (uint)uVar6;
  uVar9 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar9;
  uVar4 = (uint)uVar6;
  if ((int)uVar9 < (int)(uint)uVar6) {
    uVar4 = uVar9;
  }
  uVar11 = 0;
  local_78 = param_1;
  local_58 = param_3;
  if ((int)uVar4 < 1) {
LAB_147024645:
    bVar7 = (byte)uVar11;
    if ((int)uVar8 < (int)uVar10) {
      do {
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        if (*(longlong *)(*param_1 + 8 + uVar10 * 0x30) == lVar1) {
          cVar5 = FUN_142aec51a(&local_78,*param_1 + uVar10 * 0x30,uVar10);
          bVar7 = local_4a;
          if (cVar5 == '\0') break;
          uVar6 = *(ushort *)((longlong)param_1 + 0x14);
        }
        bVar7 = local_4a;
      } while (uVar6 < uVar9);
    }
  }
  else {
    uVar12 = (ulonglong)uVar4;
    do {
      uVar12 = uVar12 >> 1;
      uVar15 = (uint)uVar12 + (int)uVar11;
      uVar2 = *(undefined8 *)(*param_1 + 8 + (ulonglong)uVar15 * 0x30);
      iVar14 = (int)lVar1 - (int)uVar2;
      if (iVar14 == 0) {
        iVar14 = (int)((ulonglong)lVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
      }
      if (-1 < iVar14) {
        uVar11 = (ulonglong)(uVar15 + (uVar4 & 1));
      }
      bVar3 = 1 < uVar4;
      uVar4 = (uint)uVar12;
    } while (bVar3);
    if ((int)uVar9 < (int)uVar11 || (int)uVar11 < 1) {
      uVar11 = 0;
      goto LAB_147024645;
    }
    lVar13 = uVar11 * 0x30;
    do {
      lVar13 = lVar13 + -0x30;
      if (((longlong)uVar11 < 1) || (*(longlong *)(*param_1 + 8 + lVar13) != lVar1)) break;
      uVar11 = uVar11 - 1;
      cVar5 = FUN_142aec51a(&local_78,*param_1 + lVar13,uVar11 & 0xffffffff);
    } while (cVar5 != '\0');
    uVar11 = (ulonglong)local_4a;
    bVar7 = local_4a;
    if ((local_4a & 1) == 0) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      uVar6 = *(ushort *)((longlong)param_1 + 0x14);
      uVar8 = (uint)uVar6;
      goto LAB_147024645;
    }
  }
  *(undefined1 *)param_2 = local_49;
  *(byte *)((longlong)param_2 + 1) = bVar7;
LAB_14702468c:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147024712 FUN_147024712 body=445 status=ok
// SIG undefined FUN_147024712(void)

undefined2 *
FUN_147024712(longlong *param_1,undefined2 *param_2,undefined8 param_3,longlong *param_4,
             undefined8 param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined1 *local_68;
  byte *local_60;
  undefined8 local_58;
  byte local_4a;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_49 = 0;
  local_4a = 0;
  cVar5 = FUN_14113f0c0();
  if (cVar5 == '\0') {
    *param_2 = 0;
    goto LAB_147024852;
  }
  local_70 = param_5;
  local_68 = &local_49;
  local_60 = &local_4a;
  lVar1 = *param_4;
  uVar6 = *(ushort *)((longlong)param_1 + 0x14);
  uVar8 = (uint)uVar6;
  uVar9 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar9;
  uVar4 = (uint)uVar6;
  if ((int)uVar9 < (int)(uint)uVar6) {
    uVar4 = uVar9;
  }
  uVar11 = 0;
  local_78 = param_1;
  local_58 = param_3;
  if ((int)uVar4 < 1) {
LAB_147024804:
    bVar7 = (byte)uVar11;
    if ((int)uVar8 < (int)uVar10) {
      do {
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
        if (*(longlong *)(*param_1 + 8 + uVar10 * 0x30) == lVar1) {
          cVar5 = FUN_142aec654(&local_78,*param_1 + uVar10 * 0x30,uVar10);
          bVar7 = local_4a;
          if (cVar5 == '\0') break;
          uVar6 = *(ushort *)((longlong)param_1 + 0x14);
        }
        bVar7 = local_4a;
      } while (uVar6 < uVar9);
    }
  }
  else {
    uVar12 = (ulonglong)uVar4;
    do {
      uVar12 = uVar12 >> 1;
      uVar15 = (uint)uVar12 + (int)uVar11;
      uVar2 = *(undefined8 *)(*param_1 + 8 + (ulonglong)uVar15 * 0x30);
      iVar14 = (int)lVar1 - (int)uVar2;
      if (iVar14 == 0) {
        iVar14 = (int)((ulonglong)lVar1 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
      }
      if (-1 < iVar14) {
        uVar11 = (ulonglong)(uVar15 + (uVar4 & 1));
      }
      bVar3 = 1 < uVar4;
      uVar4 = (uint)uVar12;
    } while (bVar3);
    if ((int)uVar9 < (int)uVar11 || (int)uVar11 < 1) {
      uVar11 = 0;
      goto LAB_147024804;
    }
    lVar13 = uVar11 * 0x30;
    do {
      lVar13 = lVar13 + -0x30;
      if (((longlong)uVar11 < 1) || (*(longlong *)(*param_1 + 8 + lVar13) != lVar1)) break;
      uVar11 = uVar11 - 1;
      cVar5 = FUN_142aec654(&local_78,*param_1 + lVar13,uVar11 & 0xffffffff);
    } while (cVar5 != '\0');
    uVar11 = (ulonglong)local_4a;
    bVar7 = local_4a;
    if ((local_4a & 1) == 0) {
      uVar10 = (ulonglong)*(uint *)(param_1 + 1);
      uVar6 = *(ushort *)((longlong)param_1 + 0x14);
      uVar8 = (uint)uVar6;
      goto LAB_147024804;
    }
  }
  *(undefined1 *)param_2 = local_49;
  *(byte *)((longlong)param_2 + 1) = bVar7;
LAB_147024852:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470248d0 FUN_1470248d0 body=521 status=ok
// SIG undefined FUN_1470248d0(void)

int * FUN_1470248d0(longlong *param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0x80;
  local_58 = param_2;
  local_50 = param_3;
  if ((short)param_1[2] < 1) {
    uVar7 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar7) {
      lVar5 = uVar7 * 0x30;
      do {
        lVar5 = lVar5 + -0x30;
        if (*(int *)(*param_1 + 0x28 + lVar5) == 0) {
LAB_147024ab0:
          FUN_1470244f6(param_1,(int)uVar7 + -1);
        }
        else {
          lVar6 = *param_1 + lVar5;
          if ((*(longlong **)(lVar6 + 0x20) == (longlong *)0x0) ||
             (cVar4 = (**(code **)(**(longlong **)(lVar6 + 0x20) + 0x28))(), cVar4 != '\0'))
          goto LAB_147024ab0;
          cVar4 = FUN_14135aabc(lVar6,param_3);
          if (cVar4 != '\0') {
            if ((((param_4 == 0) || (*(int *)(lVar6 + 0x28) == 0)) ||
                (plVar8 = *(longlong **)(lVar6 + 0x20), plVar8 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,param_4), cVar4 == '\0')) {
              FUN_142aec03c(&local_58,lVar6);
            }
            else {
              FUN_1470244f6(param_1,(int)uVar7 + -1);
              *param_2 = *param_2 + 1;
            }
          }
        }
        bVar3 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar3);
    }
    *(undefined2 *)((longlong)param_1 + 0x12) = 0;
  }
  else if ((longlong)(int)param_1[1] != 0) {
    lVar5 = (longlong)(int)param_1[1] * 0x30;
    plVar8 = (longlong *)(*param_1 + 0x20);
    do {
      cVar4 = FUN_14135aabc(plVar8 + -4,param_3);
      if (cVar4 != '\0') {
        if (((param_4 == 0) || ((int)plVar8[1] == 0)) ||
           ((plVar1 = (longlong *)*plVar8, plVar1 == (longlong *)0x0 ||
            (cVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,param_4), cVar4 == '\0')))) {
          if ((((int)plVar8[1] != 0) && ((longlong *)*plVar8 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*(longlong *)*plVar8 + 0x28))(), cVar4 == '\0')) {
            FUN_142aec03c(&local_58,plVar8 + -4);
          }
        }
        else {
          if (((int)plVar8[1] != 0) && (puVar2 = (undefined8 *)*plVar8, puVar2 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar8,0,0,0x10);
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) + 1;
          *param_2 = *param_2 + 1;
        }
      }
      plVar8 = plVar8 + 6;
      lVar5 = lVar5 + -0x30;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147024ada FUN_147024ada body=570 status=ok
// SIG undefined FUN_147024ada(void)

int * FUN_147024ada(longlong *param_1,int *param_2,undefined8 param_3,longlong *param_4,
                   longlong param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_2 = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0x80;
  local_58 = param_2;
  local_50 = param_3;
  if ((short)param_1[2] < 1) {
    uVar7 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar7) {
      lVar9 = uVar7 * 0x30;
      do {
        lVar9 = lVar9 + -0x30;
        lVar4 = *param_1;
        if (*(int *)(lVar4 + 0x28 + lVar9) == 0) {
LAB_147024ced:
          FUN_1470244f6(param_1,(int)uVar7 + -1);
        }
        else {
          lVar1 = lVar4 + lVar9;
          if ((*(longlong **)(lVar1 + 0x20) == (longlong *)0x0) ||
             (cVar6 = (**(code **)(**(longlong **)(lVar1 + 0x20) + 0x28))(), cVar6 != '\0'))
          goto LAB_147024ced;
          cVar6 = FUN_14135aabc(lVar1,param_3);
          if (cVar6 != '\0') {
            if ((((param_5 == 0) || (*(longlong *)(lVar4 + 8 + lVar9) != *param_4)) ||
                (*(int *)(lVar1 + 0x28) == 0)) ||
               ((plVar8 = *(longlong **)(lVar1 + 0x20), plVar8 == (longlong *)0x0 ||
                (cVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,param_5), cVar6 == '\0')))) {
              FUN_142aec2a4(&local_58,lVar1);
            }
            else {
              FUN_1470244f6(param_1,(int)uVar7 + -1);
              *param_2 = *param_2 + 1;
            }
          }
        }
        bVar5 = 1 < uVar7;
        uVar7 = uVar7 - 1;
      } while (bVar5);
    }
    *(undefined2 *)((longlong)param_1 + 0x12) = 0;
  }
  else if ((longlong)(int)param_1[1] != 0) {
    lVar9 = (longlong)(int)param_1[1] * 0x30;
    plVar8 = (longlong *)(*param_1 + 0x20);
    do {
      cVar6 = FUN_14135aabc(plVar8 + -4,param_3);
      if (cVar6 != '\0') {
        if (((plVar8[-3] == *param_4) && (param_5 != 0)) &&
           (((int)plVar8[1] != 0 &&
            ((plVar2 = (longlong *)*plVar8, plVar2 != (longlong *)0x0 &&
             (cVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,param_5), cVar6 != '\0')))))) {
          if (((int)plVar8[1] != 0) && (puVar3 = (undefined8 *)*plVar8, puVar3 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar3)(puVar3,0);
            FUN_1446efa72(plVar8,0,0,0x10);
            *(undefined4 *)(plVar8 + 1) = 0;
          }
          *(short *)((longlong)param_1 + 0x12) = *(short *)((longlong)param_1 + 0x12) + 1;
          *param_2 = *param_2 + 1;
        }
        else if ((((int)plVar8[1] != 0) && ((longlong *)*plVar8 != (longlong *)0x0)) &&
                (cVar6 = (**(code **)(*(longlong *)*plVar8 + 0x28))(), cVar6 == '\0')) {
          FUN_142aec2a4(&local_58,plVar8 + -4);
        }
      }
      plVar8 = plVar8 + 6;
      lVar9 = lVar9 + -0x30;
    } while (lVar9 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147024d16 FUN_147024d16 body=444 status=ok
// SIG undefined FUN_147024d16(void)

void FUN_147024d16(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(short *)(param_1 + 2) = (short)param_1[2] + 1;
  uVar1 = *(ushort *)((longlong)param_1 + 0x14);
  uVar6 = (uint)uVar1;
  uVar9 = *(uint *)(param_1 + 1);
  uVar14 = (ulonglong)uVar9;
  uVar12 = (uint)uVar1;
  if ((int)uVar9 < (int)(uint)uVar1) {
    uVar12 = uVar9;
  }
  if (0 < (int)uVar12) {
    uVar13 = 0;
    uVar8 = (ulonglong)uVar12;
    do {
      uVar12 = (int)(uVar8 >> 1) + uVar13;
      uVar2 = *(undefined8 *)(*param_1 + 8 + (ulonglong)uVar12 * 0x30);
      iVar11 = (int)*param_3 - (int)uVar2;
      if (iVar11 == 0) {
        iVar11 = (int)((ulonglong)*param_3 >> 0x20) - (int)((ulonglong)uVar2 >> 0x20);
      }
      uVar7 = (uint)uVar8;
      if (-1 < iVar11) {
        uVar13 = uVar12 + (uVar7 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar7);
    if ((int)uVar13 <= (int)uVar9 && 0 < (int)uVar13) {
      uVar14 = (ulonglong)uVar13 + 1;
      lVar10 = (ulonglong)uVar13 * 0x30;
      do {
        lVar10 = lVar10 + -0x30;
        lVar3 = *param_1;
        if (*(longlong *)(lVar3 + 8 + lVar10) != *param_3) break;
        cVar5 = FUN_14135aabc(lVar10 + lVar3,param_2);
        if (((cVar5 != '\0') && (*(int *)(lVar3 + 0x28 + lVar10) != 0)) &&
           (plVar4 = *(longlong **)(lVar3 + 0x20 + lVar10), plVar4 != (longlong *)0x0)) {
          local_50 = (undefined4)param_3[1];
          local_58 = *param_3;
          (**(code **)(*plVar4 + 0x60))(plVar4,param_2,&local_58);
        }
        uVar14 = uVar14 - 1;
      } while (1 < uVar14);
      uVar14 = (ulonglong)*(uint *)(param_1 + 1);
      uVar6 = (uint)*(ushort *)((longlong)param_1 + 0x14);
    }
  }
  if ((int)uVar6 < (int)uVar14) {
    do {
      uVar9 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar9;
      if (*(longlong *)(*param_1 + 8 + uVar14 * 0x30) == *param_3) {
        lVar10 = *param_1 + uVar14 * 0x30;
        cVar5 = FUN_14135aabc(lVar10,param_2);
        if (((cVar5 != '\0') && (*(int *)(lVar10 + 0x28) != 0)) &&
           (plVar4 = *(longlong **)(lVar10 + 0x20), plVar4 != (longlong *)0x0)) {
          local_50 = (undefined4)param_3[1];
          local_58 = *param_3;
          (**(code **)(*plVar4 + 0x60))(plVar4,param_2,&local_58);
        }
      }
    } while ((int)(uint)*(ushort *)((longlong)param_1 + 0x14) < (int)uVar9);
  }
  *(short *)(param_1 + 2) = (short)param_1[2] + -1;
  FUN_147024ed4(param_1);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147024ed4 FUN_147024ed4 body=717 status=ok
// SIG undefined FUN_147024ed4(void)

void FUN_147024ed4(longlong *param_1)

{
  undefined4 *puVar1;
  longlong lVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  undefined1 auStack_98 [32];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((short)param_1[2] < 1) {
    if (2 < *(short *)((longlong)param_1 + 0x12)) {
      uVar12 = (ulonglong)(int)param_1[1];
      if (0 < (longlong)uVar12) {
        lVar11 = uVar12 * 0x30 + -8;
        do {
          if (((*(int *)(*param_1 + lVar11) == 0) ||
              (plVar4 = *(longlong **)(*param_1 + -8 + lVar11), plVar4 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar4 + 0x28))(), cVar8 != '\0')) {
            FUN_1470244f6(param_1,(int)uVar12 + -1);
            uVar3 = *(ushort *)((longlong)param_1 + 0x14);
            if (uVar12 <= uVar3 && (ulonglong)uVar3 != 0xffff) {
              *(ushort *)((longlong)param_1 + 0x14) = uVar3 - 1;
            }
          }
          lVar11 = lVar11 + -0x30;
          bVar7 = 1 < uVar12;
          uVar12 = uVar12 - 1;
        } while (bVar7);
      }
      *(undefined2 *)((longlong)param_1 + 0x12) = 0;
    }
    uVar12 = (ulonglong)*(ushort *)((longlong)param_1 + 0x14);
    if ((int)(uint)*(ushort *)((longlong)param_1 + 0x14) < (int)param_1[1]) {
      do {
        uVar9 = (ulonglong)(((uint)uVar12 & 0xffff) * 0x30);
        if ((*(int *)(*param_1 + 0x28 + uVar9) == 0) ||
           (plVar4 = *(longlong **)(*param_1 + uVar9 + 0x20), plVar4 == (longlong *)0x0)) {
LAB_147025088:
          FUN_1470257a0(param_1,uVar12 & 0xffff);
          FUN_1470256f2(param_1);
          uVar12 = (ulonglong)*(ushort *)((longlong)param_1 + 0x14);
        }
        else {
          cVar8 = (**(code **)(*plVar4 + 0x30))();
          uVar3 = *(ushort *)((longlong)param_1 + 0x14);
          uVar12 = (ulonglong)uVar3;
          if (cVar8 == '\0') goto LAB_147025088;
          lVar11 = *param_1;
          uVar9 = (ulonglong)*(uint *)(param_1 + 1);
          if ((int)(uint)uVar3 <= (int)*(uint *)(param_1 + 1)) {
            uVar9 = uVar12;
          }
          if ((int)uVar9 < 1) {
            uVar12 = 0;
          }
          else {
            uVar5 = *(undefined8 *)
                     (lVar11 + 8 + (ulonglong)(((uint)uVar3 + (uint)uVar3 * 2) * 0x10));
            uVar12 = 0;
            do {
              uVar10 = (int)(uVar9 >> 1) + (int)uVar12;
              uVar6 = *(undefined8 *)(lVar11 + 8 + (ulonglong)uVar10 * 0x30);
              iVar14 = (int)uVar5 - (int)uVar6;
              if (iVar14 == 0) {
                iVar14 = (int)((ulonglong)uVar5 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20);
              }
              uVar13 = (uint)uVar9;
              if (-1 < iVar14) {
                uVar12 = (ulonglong)(uVar10 + (uVar13 & 1));
              }
              uVar9 = uVar9 >> 1;
            } while (1 < uVar13);
          }
          if ((uint)uVar12 != (uint)uVar3) {
            uVar9 = (ulonglong)(((uint)uVar3 + (uint)uVar3 * 2) * 0x10);
            puVar1 = (undefined4 *)(lVar11 + uVar9);
            uStack_78 = *puVar1;
            uStack_74 = puVar1[1];
            uStack_70 = puVar1[2];
            local_6c = puVar1[3];
            lVar2 = lVar11 + 0xc + uVar9;
            uStack_68 = *(undefined4 *)(lVar2 + 4);
            uStack_64 = *(undefined4 *)(lVar2 + 8);
            uStack_60 = *(undefined4 *)(lVar2 + 0xc);
            local_58 = *(undefined8 *)(lVar11 + 0x20 + uVar9);
            *(undefined8 *)(lVar11 + 0x20 + uVar9) = 0;
            local_50 = *(undefined4 *)(lVar11 + 0x28 + uVar9);
            *(undefined4 *)(lVar11 + 0x28 + uVar9) = 0;
            FUN_1470257a0(param_1,*(undefined2 *)((longlong)param_1 + 0x14));
            FUN_1470256f2(param_1);
            iVar14 = (int)param_1[1];
            *(int *)(param_1 + 1) = iVar14 + 1;
            if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
              FUN_1470252c4(param_1,iVar14);
            }
            lVar2 = uVar12 * 0x30;
            memmove((void *)(*param_1 + lVar2 + 0x30),(void *)(*param_1 + lVar2),
                    (ulonglong)(iVar14 - (uint)uVar12) * 0x30);
            lVar11 = *param_1;
            *(undefined8 *)(lVar11 + lVar2) = CONCAT44(uStack_74,uStack_78);
            ((undefined8 *)(lVar11 + lVar2))[1] = CONCAT44(local_6c,uStack_70);
            puVar1 = (undefined4 *)(lVar11 + 0xc + lVar2);
            *puVar1 = local_6c;
            puVar1[1] = uStack_68;
            puVar1[2] = uStack_64;
            puVar1[3] = uStack_60;
            *(undefined8 *)(lVar11 + 0x20 + lVar2) = 0;
            *(undefined4 *)(lVar11 + 0x28 + lVar2) = 0;
            *(undefined8 *)(lVar11 + 0x20 + lVar2) = local_58;
            local_58 = 0;
            *(undefined4 *)(lVar11 + 0x28 + lVar2) = local_50;
            local_50 = 0;
            FUN_1449db362(&local_58);
            uVar3 = *(ushort *)((longlong)param_1 + 0x14);
          }
          uVar12 = (ulonglong)(uVar3 + 1);
          *(short *)((longlong)param_1 + 0x14) = (short)(uVar3 + 1);
        }
      } while ((int)((uint)uVar12 & 0xffff) < (int)param_1[1]);
    }
    *(undefined2 *)((longlong)param_1 + 0x14) = 0xffff;
    *(undefined2 *)(param_1 + 2) = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14702520e FUN_14702520e body=79 status=ok
// SIG undefined FUN_14702520e(void)

int FUN_14702520e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = *param_2;
  iVar2 = FUN_144a788f7();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar2 + (int)((ulonglong)uVar1 >> 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470252c4 FUN_1470252c4 body=147 status=ok
// SIG undefined FUN_1470252c4(void)

void FUN_1470252c4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147025358 FUN_147025358 body=154 status=ok
// SIG undefined FUN_147025358(void)

undefined8 * FUN_147025358(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149fcc480;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  param_1[2] = lVar3;
  *param_1 = &PTR_FUN_149fcc410;
  param_1[4] = *param_3;
  param_1[5] = 0;
  FUN_14485c47a(param_1 + 5,param_2);
  if (param_2 != 0) {
    uVar2 = FUN_14479d2ce(param_1 + 5);
    uVar2 = FUN_14477b072(uVar2,*param_3);
    param_1[3] = uVar2;
  }
  return param_1;
}



// FUNCTION 1470253f2 FUN_1470253f2 body=34 status=ok
// SIG undefined FUN_1470253f2(void)

undefined8 FUN_1470253f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 14702542c FUN_14702542c body=29 status=ok
// SIG undefined FUN_14702542c(void)

bool FUN_14702542c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x28);
  return lVar1 == param_2;
}



// FUNCTION 14702544a FUN_14702544a body=26 status=ok
// SIG undefined FUN_14702544a(void)

bool FUN_14702544a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x28,1);
  return lVar1 == 0;
}



// FUNCTION 14702547a FUN_14702547a body=101 status=ok
// SIG undefined FUN_14702547a(void)

void FUN_14702547a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fcc480;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fcc410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1470254e0 FUN_1470254e0 body=101 status=ok
// SIG undefined FUN_1470254e0(void)

void FUN_1470254e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149fcc480;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fcc410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147025546 FUN_147025546 body=131 status=ok
// SIG undefined FUN_147025546(void)

void FUN_147025546(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149fcc480;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fcc410;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1470255ca FUN_1470255ca body=108 status=ok
// SIG undefined FUN_1470255ca(void)

void FUN_1470255ca(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_20 = 1;
  local_38 = param_2;
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  (**(code **)(*plVar1 + 0x248))(plVar1,*(undefined8 *)(param_1 + 0x18),&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147025638 FUN_147025638 body=182 status=ok
// SIG undefined FUN_147025638(void)

bool FUN_147025638(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x28,&local_50);
    lVar3 = local_50;
  }
  else {
    lVar3 = 0;
  }
  plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    local_48 = *param_3;
    local_40 = *(undefined4 *)(param_3 + 1);
    local_38 = 1;
    local_50 = param_2;
    (**(code **)(*plVar2 + 0x248))(plVar2,*(undefined8 *)(param_1 + 0x18));
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return plVar2 != (longlong *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470256f2 FUN_1470256f2 body=62 status=ok
// SIG undefined FUN_1470256f2(void)

void FUN_1470256f2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147025730(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x30,8);
  }
  return;
}



// FUNCTION 147025730 FUN_147025730 body=112 status=ok
// SIG undefined FUN_147025730(void)

ulonglong FUN_147025730(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x30) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_14702576a;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x30,8);
      param_2 = param_2 / 0x30;
    }
  }
LAB_14702576a:
  return param_2 & 0xffffffff;
}



// FUNCTION 1470257a0 FUN_1470257a0 body=114 status=ok
// SIG undefined FUN_1470257a0(void)

void FUN_1470257a0(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  FUN_1449db362(lVar1 + (ulonglong)param_2 * 0x30 + 0x20);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove((void *)((ulonglong)param_2 * 0x30 + lVar1),
            (void *)((longlong)(iVar2 - iVar3) * 0x30 + lVar1),(longlong)iVar3 * 0x30);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 147025812 FUN_147025812 body=89 status=ok
// SIG undefined FUN_147025812(void)

longlong * FUN_147025812(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140007850();
  if (lVar1 == 0) {
    if ((*(byte *)(param_3 + 0x10) & 1) == 0) {
      *param_2 = 0;
      *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfc;
    }
    else {
      lVar1 = FUN_140081d40(param_1,0);
      *param_2 = lVar1;
      *(bool *)(param_2 + 1) = lVar1 != 0;
    }
  }
  else {
    *param_2 = lVar1;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  *(undefined1 *)(param_2 + 2) = 0;
  return param_2;
}



// FUNCTION 14702586c FUN_14702586c body=143 status=ok
// SIG undefined FUN_14702586c(void)

undefined8 * FUN_14702586c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14010318a(*param_3,&local_48,0);
  local_38 = local_48;
  local_30 = local_40 + -1;
  if (local_40 == 0) {
    local_30 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470258fc FUN_1470258fc body=189 status=ok
// SIG undefined FUN_1470258fc(void)

undefined8 * FUN_1470258fc(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (longlong *)*param_3;
  uStack_30 = param_3[1];
  FUN_14475bf92(*(undefined4 *)param_3,&local_38);
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a5dc74(&local_38);
  local_28 = CONCAT35((int3)((ulonglong)local_28 >> 0x28),0x100000000);
  *param_2 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    (**(code **)(*local_38 + 8))();
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
    *(undefined1 *)((longlong)param_2 + 0x14) = local_28._4_1_;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470259be FUN_1470259be body=123 status=ok
// SIG undefined FUN_1470259be(void)

undefined8 * FUN_1470259be(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f8c06(param_1,0);
  }
  if ((undefined2 *)*param_1 != (undefined2 *)0x0) {
    *(undefined2 *)*param_1 = 0;
  }
  if ((param_3[1] != 0) && (cVar1 = FUN_144b00bde(*param_3), cVar1 != '\0')) {
    FUN_1401031ac(*param_3,param_3[1],param_1);
    *param_2 = param_3[1];
    *(undefined1 *)(param_2 + 1) = 1;
    return param_2;
  }
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 2;
  return param_2;
}



// FUNCTION 147025a3a FUN_147025a3a body=202 status=ok
// SIG undefined FUN_147025a3a(void)

undefined8 * FUN_147025a3a(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f8bcc(param_1,*(undefined4 *)(param_3 + 1));
  FUN_1400020e8(param_1,*param_3,*(undefined4 *)(param_3 + 1));
  local_38 = (longlong *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_144a5dc74(&local_38);
  local_28 = CONCAT35((int3)((ulonglong)local_28 >> 0x28),0x100000000);
  *param_2 = local_38;
  if (local_38 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)(param_2 + 2) = 0;
    *(undefined1 *)((longlong)param_2 + 0x14) = 1;
  }
  else {
    (**(code **)(*local_38 + 8))();
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_30;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_28;
    *(undefined1 *)((longlong)param_2 + 0x14) = local_28._4_1_;
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147025b06 FUN_147025b06 body=32 status=ok
// SIG undefined FUN_147025b06(void)

undefined8 FUN_147025b06(undefined8 param_1,longlong param_2)

{
  char cVar1;
  
  if ((param_2 != 0) && (cVar1 = FUN_144b00bde(), cVar1 != '\0')) {
    return 1000;
  }
  return 0;
}



// FUNCTION 147025b26 FUN_147025b26 body=28 status=ok
// SIG undefined FUN_147025b26(void)

undefined8 * FUN_147025b26(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  FUN_147025b42();
  return param_1;
}



// FUNCTION 147025b42 FUN_147025b42 body=148 status=ok
// SIG undefined FUN_147025b42(void)

void FUN_147025b42(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_140843826(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1470295bc(param_1,0);
  }
  if ((param_2 == 0) || (cVar2 = FUN_147025ff2(param_1,param_2,param_3,param_4), cVar2 == '\0')) {
    FUN_140843826(*param_1,*(undefined4 *)(param_1 + 1));
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_1470295bc(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 147025bd6 FUN_147025bd6 body=544 status=ok
// SIG undefined FUN_147025bd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_147025bd6(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar4 = *(int *)(param_1 + 1);
  if (iVar4 == 0) {
    *param_2 = 0;
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xfc;
    *(undefined1 *)(param_2 + 2) = 0;
    goto LAB_147025c0a;
  }
  plVar7 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_149fcd8a0;
  uVar2 = *(undefined1 *)(param_3 + 0x10);
  plVar7[2] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  uVar5 = *param_1;
  *(int *)(plVar7 + 5) = iVar4;
  FUN_1470288d8(plVar7 + 4,iVar4,0);
  FUN_14702893a(plVar7[4],uVar5,iVar4);
  *(byte *)(plVar7 + 0xb) = *(byte *)(plVar7 + 0xb) & 0xfc;
  *(undefined1 *)(plVar7 + 9) = 0;
  plVar7[10] = 0;
  *(undefined1 *)(plVar7 + 0xc) = 0;
  *(undefined4 *)(plVar7 + 0xd) = 0xffffffff;
  *(undefined1 *)((longlong)plVar7 + 0x6c) = uVar2;
  *(undefined1 *)((longlong)plVar7 + 0x6d) = 0;
  plVar9 = plVar7 + 2;
  if ((plVar9 == (longlong *)0x0) ||
     (((*plVar9 != 0 && (plVar7[3] != 0)) && (0 < *(int *)(plVar7[3] + 8))))) {
    if (plVar7 == (longlong *)0x0) goto LAB_147025dee;
LAB_147025cef:
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    bVar6 = false;
  }
  else {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      plVar7[2] = (longlong)plVar9;
      if ((longlong *)plVar7[3] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar7[3];
        if ((longlong *)plVar7[3] != (longlong *)0x0) goto LAB_147025da2;
        plVar7[3] = (longlong)plVar7;
      }
LAB_147025db7:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_147025cef;
    }
    _DAT_00000010 = 0x10;
    plVar8 = _DAT_00000018;
    if (_DAT_00000018 != (longlong *)0x0) {
LAB_147025da2:
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))();
      }
      plVar7[3] = (longlong)plVar7;
      if (plVar7 != (longlong *)0x0) goto LAB_147025db7;
    }
LAB_147025dee:
    bVar6 = true;
  }
  local_48 = 0;
  local_40 = 0;
  FUN_142aec8c8(plVar9);
  bVar3 = *(byte *)(plVar7 + 0xc);
  *(byte *)(param_2 + 2) = bVar3;
  (*(code *)(&PTR_FUN_149fcd7e0)[bVar3])(param_2,plVar7 + 10);
  if (!bVar6) {
    LOCK();
    plVar9 = plVar7 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_147025c0a:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147025dfc FUN_147025dfc body=153 status=ok
// SIG undefined FUN_147025dfc(void)

longlong FUN_147025dfc(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28 [2];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  plVar2 = local_28;
  local_40 = param_2;
  FUN_140521ea8(param_1,plVar2);
  if (local_18 == 1) {
    while ((*(byte *)(local_28[0] + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(local_28[0] + 0x70) + 0x20))
                (*(longlong **)(local_28[0] + 0x70),0xffffffff,0);
    }
    plVar2 = (longlong *)(local_28[0] + 0x80);
  }
  lVar1 = *plVar2;
  (*(code *)(&PTR_FUN_149fcd7f0)[local_18])(local_28);
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147025e96 FUN_147025e96 body=153 status=ok
// SIG undefined FUN_147025e96(void)

longlong FUN_147025e96(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28 [2];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 1;
  plVar2 = local_28;
  local_40 = param_2;
  FUN_140521ea8(param_1,plVar2);
  if (local_18 == 1) {
    while ((*(byte *)(local_28[0] + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(local_28[0] + 0x70) + 0x20))
                (*(longlong **)(local_28[0] + 0x70),0xffffffff,0);
    }
    plVar2 = (longlong *)(local_28[0] + 0x80);
  }
  lVar1 = *plVar2;
  (*(code *)(&PTR_FUN_149fcd7f0)[local_18])(local_28);
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 147025f30 FUN_147025f30 body=139 status=ok
// SIG undefined FUN_147025f30(void)

void FUN_147025f30(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28 [2];
  byte local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 2;
  local_40 = param_2;
  FUN_140521ea8(param_1,local_28);
  if (local_18 == 1) {
    while ((*(byte *)(local_28[0] + 0x78) & 1) == 0) {
      (**(code **)(**(longlong **)(local_28[0] + 0x70) + 0x20))
                (*(longlong **)(local_28[0] + 0x70),0xffffffff,0);
    }
  }
  (*(code *)(&PTR_FUN_149fcd7f0)[local_18])();
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147025fbc FUN_147025fbc body=53 status=ok
// SIG undefined FUN_147025fbc(void)

void FUN_147025fbc(undefined8 *param_1)

{
  FUN_140843826(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    return;
  }
  FUN_1470295bc(param_1,0);
  return;
}



// FUNCTION 147025ff2 FUN_147025ff2 body=425 status=ok
// SIG undefined FUN_147025ff2(void)

ulonglong FUN_147025ff2(longlong *param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  char local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined8 uStack_42;
  char local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar4 = (undefined8 *)FUN_1470275de(param_2,param_3);
  if (puVar4 == (undefined8 *)0x0) {
    uVar6 = 0;
  }
  else {
    FUN_1414cd37a();
    local_3a = (char)((uint)((int)puVar4 - DAT_14c99e168) >> 3) * -0x5d;
    puVar7 = &local_58;
    local_39 = 0;
    FUN_1411b5c94(puVar7,puVar4);
    if ((local_39 & 2) == 0) {
      puVar7 = (undefined4 *)CONCAT44(uStack_54,local_58);
    }
    local_78 = param_2;
    local_70 = param_3;
    (*(code *)*puVar4)(&local_68,
                       (ulonglong)((uint)(1L << (local_39 >> 2)) & 0xfffffffe) + (longlong)puVar7,
                       &local_78);
    uVar6 = CONCAT71((int7)((ulonglong)puVar4 >> 8),local_60 != '\x02');
    if (local_60 == '\x02') {
      if (((local_39 & 1) != 0) && (DAT_14c872bd8 == '\0')) {
        FUN_14084385c(&local_58);
      }
    }
    else {
      if ((((local_60 == '\x01') && (local_68 != param_4)) && (local_68 != param_3)) &&
         (local_68 != 0)) {
        FUN_147025ff2(param_1,local_68,0,param_4);
      }
      iVar2 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
        FUN_147029656(param_1,iVar2);
      }
      lVar3 = *param_1;
      lVar5 = (longlong)iVar2 * 0x20;
      *(char *)(lVar3 + 0x1e + lVar5) = local_3a;
      bVar1 = *(byte *)(lVar3 + 0x1f + lVar5);
      *(byte *)(lVar3 + 0x1f + lVar5) = bVar1 & 0xfe | local_39 & 1;
      *(byte *)(lVar3 + 0x1f + lVar5) = bVar1 & 0xfc | local_39 & 1 | local_39 & 2;
      *(byte *)(lVar3 + 0x1f + lVar5) = local_39;
      puVar7 = (undefined4 *)(lVar3 + lVar5);
      *puVar7 = local_58;
      puVar7[1] = uStack_54;
      puVar7[2] = uStack_50;
      puVar7[3] = CONCAT22(uStack_4a,uStack_4c);
      puVar4 = (undefined8 *)(lVar3 + 0xe + lVar5);
      *puVar4 = CONCAT62(uStack_48,uStack_4a);
      puVar4[1] = uStack_42;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702619c FUN_14702619c body=136 status=ok
// SIG undefined FUN_14702619c(void)

void FUN_14702619c(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  byte bVar10;
  
  iVar3 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_147029656(param_1,iVar3);
  }
  lVar4 = *param_1;
  lVar9 = (longlong)iVar3 * 0x20;
  *(undefined1 *)(lVar4 + 0x1e + lVar9) = *(undefined1 *)((longlong)param_2 + 0x1e);
  bVar8 = *(byte *)((longlong)param_2 + 0x1f) & 1;
  bVar2 = *(byte *)(lVar4 + 0x1f + lVar9);
  *(byte *)(lVar4 + 0x1f + lVar9) = bVar2 & 0xfe | bVar8;
  bVar10 = *(byte *)((longlong)param_2 + 0x1f) & 2;
  *(byte *)(lVar4 + 0x1f + lVar9) = bVar2 & 0xfc | bVar8 | bVar10;
  *(byte *)(lVar4 + 0x1f + lVar9) = *(byte *)((longlong)param_2 + 0x1f) & 0xfc | bVar8 | bVar10;
  uVar5 = param_2[1];
  uVar6 = *(undefined8 *)((longlong)param_2 + 0xe);
  uVar7 = *(undefined8 *)((longlong)param_2 + 0x16);
  *(undefined8 *)(lVar4 + lVar9) = *param_2;
  ((undefined8 *)(lVar4 + lVar9))[1] = uVar5;
  puVar1 = (undefined8 *)(lVar4 + 0xe + lVar9);
  *puVar1 = uVar6;
  puVar1[1] = uVar7;
  *(undefined2 *)((longlong)param_2 + 0x1e) = 0xff;
  return;
}



// FUNCTION 147026224 FUN_147026224 body=91 status=ok
// SIG undefined FUN_147026224(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_147026224(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 == 0) {
    bVar4 = 0;
  }
  else {
    lVar1 = *param_1;
    lVar5 = 0;
    bVar4 = 0;
    do {
      if (*(char *)(lVar1 + 0x1e + lVar5) != -1) {
        FUN_1414cd37a();
        lVar3 = (ulonglong)*(byte *)(lVar1 + 0x1e + lVar5) * 0x58 + _DAT_14c99e168;
        if (lVar3 != 0) {
          bVar4 = bVar4 | *(byte *)(lVar3 + 0x50);
        }
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)(int)lVar2 * 0x20 != lVar5);
  }
  return bVar4;
}



// FUNCTION 147026280 FUN_147026280 body=717 status=ok
// SIG undefined FUN_147026280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147026280(longlong *param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined2 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  ulonglong *local_158;
  char local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_168 = local_148;
  local_150 = '\0';
  local_158 = &local_48;
  puVar2 = *(undefined8 **)(param_2 + 8);
  local_160 = local_168;
  if (*(ulonglong *)(param_2 + 0x10) <= (longlong)puVar2 + 0xeU) {
    FUN_140213274(param_2,7);
    puVar2 = *(undefined8 **)(param_2 + 8);
  }
  *(undefined8 *)((longlong)puVar2 + 6) = 0x2f002f003a006a;
  *puVar2 = 0x6a0062006f0075;
  puVar2 = (undefined8 *)((longlong)puVar2 + 0xe);
  *(undefined8 **)(param_2 + 8) = puVar2;
  if (0 < (int)param_1[1]) {
    lVar6 = 0;
    lVar7 = 0x1e;
    iVar5 = 0;
    do {
      lVar4 = *param_1;
      if (*(char *)(lVar4 + lVar7) != -1) {
        FUN_1414cd37a();
        lVar4 = (ulonglong)*(byte *)(lVar4 + lVar7) * 0x58 + _DAT_14c99e168;
        if (lVar4 != 0) {
          if (iVar5 != 0) {
            puVar3 = *(undefined2 **)(param_2 + 8);
            if (*(undefined2 **)(param_2 + 0x10) <= puVar3 + 1) {
              FUN_140213274(param_2,1);
              puVar3 = *(undefined2 **)(param_2 + 8);
            }
            *(undefined2 **)(param_2 + 8) = puVar3 + 1;
            *puVar3 = 0x2f;
          }
          FUN_14005eb5c(lVar4 + 0x40,param_2);
          iVar5 = iVar5 + 1;
        }
      }
      lVar6 = lVar6 + 1;
      lVar7 = lVar7 + 0x20;
    } while (lVar6 < (int)param_1[1]);
    puVar2 = *(undefined8 **)(param_2 + 8);
    if (iVar5 != 0) {
      if (*(undefined2 **)(param_2 + 0x10) <= (undefined2 *)((longlong)puVar2 + 2)) {
        FUN_140213274(param_2,1);
        puVar2 = *(undefined8 **)(param_2 + 8);
      }
      *(undefined2 *)puVar2 = 0x3f;
      *(undefined2 **)(param_2 + 8) = (undefined2 *)((longlong)puVar2 + 2);
      if (0 < (int)param_1[1]) {
        lVar6 = 0;
        uVar8 = 0;
        iVar5 = 0;
        do {
          lVar7 = *param_1;
          if (*(char *)(lVar7 + 0x1e + lVar6) != -1) {
            puVar2 = (undefined8 *)(lVar7 + lVar6);
            FUN_1414cd37a();
            lVar4 = (ulonglong)*(byte *)((longlong)puVar2 + 0x1e) * 0x58 + _DAT_14c99e168;
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x28) != 0)) {
              if (iVar5 != 0) {
                puVar3 = *(undefined2 **)(param_2 + 8);
                if (*(undefined2 **)(param_2 + 0x10) <= puVar3 + 1) {
                  FUN_140213274(param_2,1);
                  puVar3 = *(undefined2 **)(param_2 + 8);
                }
                *(undefined2 **)(param_2 + 8) = puVar3 + 1;
                *puVar3 = 0x26;
              }
              local_160 = local_168;
              bVar1 = *(byte *)(lVar7 + 0x1f + lVar6);
              if ((bVar1 & 2) == 0) {
                puVar2 = (undefined8 *)*puVar2;
              }
              (**(code **)(lVar4 + 0x10))
                        ((ulonglong)((uint)(1L << (bVar1 >> 2)) & 0xfffffffe) + (longlong)puVar2,
                         &local_168);
              if ((int)((ulonglong)((longlong)local_160 - (longlong)local_168) >> 1) != 0) {
                FUN_140212e80(param_2,L"payload%i=",uVar8 & 0xffffffff);
                FUN_1449668a2(param_2,local_168,
                              (ulonglong)((longlong)local_160 - (longlong)local_168) >> 1);
              }
              iVar5 = iVar5 + 1;
            }
          }
          uVar8 = uVar8 + 1;
          lVar6 = lVar6 + 0x20;
        } while ((longlong)uVar8 < (longlong)(int)param_1[1]);
      }
      goto LAB_1470264ce;
    }
  }
  if (*(undefined8 **)(param_2 + 0x10) <= puVar2 + 1) {
    FUN_140213274(param_2,4);
    puVar2 = *(undefined8 **)(param_2 + 8);
  }
  *puVar2 = 0x65006e006f006e;
  *(undefined8 **)(param_2 + 8) = puVar2 + 1;
LAB_1470264ce:
  if (local_150 == '\x01') {
    FUN_1400020a8(local_168);
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14702654e FUN_14702654e body=3282 status=ok
// SIG undefined FUN_14702654e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14702654e(undefined8 param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  wchar_t *pwVar18;
  bool bVar19;
  undefined1 auStack_288 [38];
  byte local_262;
  char local_261;
  longlong *local_260;
  byte *local_258;
  longlong *local_250;
  undefined8 local_248;
  undefined1 local_240 [4];
  undefined1 local_23c [4];
  longlong *local_238 [2];
  undefined8 local_228;
  longlong *local_220;
  undefined8 local_218;
  longlong *local_210 [2];
  longlong local_200;
  uint local_1f8;
  longlong *local_1f0 [2];
  longlong local_1e0;
  uint local_1d8;
  longlong local_1d0;
  uint local_1c8;
  uint local_1c0;
  int local_1bc;
  longlong local_1b8;
  uint local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined *local_190;
  undefined4 local_188;
  longlong *local_180 [2];
  undefined8 local_170;
  longlong *local_168;
  longlong local_160;
  int local_158;
  undefined4 local_154;
  longlong *local_150 [2];
  longlong *local_140 [2];
  longlong local_130;
  int local_128;
  undefined4 local_124;
  longlong *local_120 [2];
  int local_110;
  char local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d0;
  undefined4 local_c8;
  int local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  longlong *local_b0;
  wchar_t **local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80 [2];
  longlong *local_78 [2];
  undefined4 local_68 [4];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_258 = param_4;
  FUN_144a5dc74(&local_d0);
  local_c0 = 0;
  local_bc = 0;
  iVar11 = (int)param_3[1];
  if ((longlong)iVar11 < 7) {
LAB_147026d90:
    if ((*local_258 & 1) != 0) {
      local_88 = L"Error_MissingScheme";
      local_80[0] = 0x13;
      FUN_1446e940c(local_120,&local_88);
      local_88 = L"UOL";
      local_80[0] = 3;
      FUN_1446e940c(&local_98,&local_88);
      pwVar18 = L"String does not start with uobj://";
      goto LAB_147026e2a;
    }
LAB_147026d9a:
    FUN_144a5dc74(&local_88);
  }
  else {
    lVar15 = *param_3;
    iVar8 = FUN_144a54874(L"uobj://",lVar15,7);
    if (iVar8 != 0) goto LAB_147026d90;
    local_c0 = 7;
    uVar9 = iVar11 - 7;
    lVar15 = lVar15 + (longlong)iVar11 * 2 + (ulonglong)uVar9 * -2;
    *param_3 = lVar15;
    *(uint *)(param_3 + 1) = uVar9;
    if (uVar9 != 0) {
      uVar10 = 4;
      if (uVar9 < 4) {
        uVar10 = uVar9;
      }
      iVar8 = FUN_144a54874(lVar15,&DAT_149e62e78,uVar10);
      if ((iVar11 == 0xb) && (iVar8 == 0)) {
        FUN_147025fbc(param_1);
        local_bc = 1;
        *param_2 = (longlong)local_d0;
        if (local_d0 != (longlong *)0x0) {
          (**(code **)(*local_d0 + 8))();
        }
        *(undefined4 *)(param_2 + 1) = local_c8;
        *(int *)(param_2 + 2) = local_c0;
        *(undefined1 *)((longlong)param_2 + 0x14) = local_bc;
      }
      else {
        local_e8 = 0;
        uStack_e0 = 0;
        local_250 = param_2 + 2;
        local_260 = param_2;
        local_248 = param_1;
        do {
          local_f8 = &DAT_149fccbaa;
          local_f0 = 3;
          local_108 = (undefined4)*param_3;
          uStack_104 = *(undefined4 *)((longlong)param_3 + 4);
          uStack_100 = (undefined4)param_3[1];
          uStack_fc = *(undefined4 *)((longlong)param_3 + 0xc);
          iVar8 = FUN_1461c0c01(&local_108,&local_f8,0,0);
          uVar6 = uStack_e0;
          lVar15 = *param_3;
          iVar11 = (int)param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          if (iVar8 == -1) {
            local_c0 = local_c0 + iVar11;
            *param_3 = 0;
            *(undefined4 *)(param_3 + 1) = 0;
            bVar19 = false;
LAB_147026724:
            lVar16 = (longlong)(int)(uint)uStack_e0;
            uVar9 = (uint)uStack_e0 + 1;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,uVar9);
            if (uStack_e0._4_4_ < uVar9) {
              FUN_147029656(&local_e8,uVar6 & 0xffffffff);
            }
            *(undefined2 *)(local_e8 + 0x1e + lVar16 * 0x20) = 0xff;
            local_130 = lVar15;
            local_128 = iVar11;
            local_124 = uVar3;
            FUN_142aecc74(local_e8 + lVar16 * 0x20,local_120);
            cVar7 = local_10c;
            local_c0 = local_c0 + local_110;
            if (local_10c == '\0') {
              local_262 = *local_258;
              if ((local_262 & 1) == 0) {
                FUN_144a5dc74(local_140);
                plVar17 = local_260;
              }
              else {
                local_160 = lVar15;
                local_158 = iVar11;
                local_154 = uVar3;
                FUN_1417036e0(local_150,&local_160);
                local_88 = L"Error_InvalidFragmentType";
                local_80[0] = 0x19;
                FUN_1446e940c(local_238,&local_88);
                local_88 = L"UOL";
                local_80[0] = 3;
                FUN_1446e940c(&local_218,&local_88);
                FUN_140208bae(local_180,&local_218,local_238);
                FUN_14023409e(&local_170,local_180,1);
                local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
                FUN_14023423e(local_78,local_150);
                local_a0 = (ulonglong *)local_68;
                local_a8 = &local_88;
                FUN_14010d304(&local_98,&local_a8);
                local_b8 = local_170;
                local_b0 = local_168;
                if (local_168 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_168 + 1) = (int)local_168[1] + 1;
                  UNLOCK();
                }
                FUN_14010c016(local_140,&local_b8);
                FUN_14007f2db(local_98,local_90);
                if (local_98 != 0) {
                  FUN_1400020a8();
                }
                plVar17 = local_260;
                if (local_78[0] != (longlong *)0x0) {
                  (**(code **)(*local_78[0] + 0x10))();
                }
                plVar13 = local_168;
                if (local_168 != (longlong *)0x0) {
                  LOCK();
                  plVar12 = local_168 + 1;
                  *(int *)plVar12 = (int)*plVar12 + -1;
                  UNLOCK();
                  if ((int)*plVar12 == 0) {
                    (**(code **)*local_168)(local_168);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar13 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar13 + 0x10))(plVar13);
                    }
                  }
                }
                if (local_150[0] != (longlong *)0x0) {
                  (**(code **)(*local_150[0] + 0x10))();
                }
              }
              plVar12 = (longlong *)FUN_147027222(&local_d0,local_140);
              plVar13 = (longlong *)*plVar12;
              *plVar17 = (longlong)plVar13;
              if (plVar13 != (longlong *)0x0) {
                (**(code **)(*plVar13 + 8))();
              }
              *(int *)(plVar17 + 1) = (int)plVar12[1];
              *(undefined1 *)((longlong)local_250 + 4) = *(undefined1 *)((longlong)plVar12 + 0x14);
              *(int *)local_250 = (int)plVar12[2];
              if (local_140[0] != (longlong *)0x0) {
                (**(code **)(*local_140[0] + 0x10))();
              }
              if (((local_262 & 1) != 0) && (local_180[0] != (longlong *)0x0)) {
                (**(code **)(*local_180[0] + 0x10))();
              }
            }
            if (local_120[0] != (longlong *)0x0) {
              (**(code **)(*local_120[0] + 0x10))();
            }
            if (cVar7 == '\0') goto LAB_147026d21;
            iVar14 = (int)param_3[1];
          }
          else {
            sVar2 = *(short *)(lVar15 + (longlong)iVar8 * 2);
            bVar19 = sVar2 == 0x3f;
            iVar4 = iVar11;
            if (iVar8 < iVar11) {
              iVar4 = iVar8;
            }
            if (sVar2 == 0x23) {
              lVar16 = 0;
              iVar14 = 0;
            }
            else {
              iVar8 = iVar8 + 1;
              iVar14 = iVar11 - iVar8;
              if (iVar11 <= iVar11 - iVar8) {
                iVar14 = iVar11;
              }
              if (iVar14 < 1) {
                iVar14 = 0;
              }
              lVar16 = ((longlong)iVar11 * 2 + lVar15) - (ulonglong)(uint)(iVar14 * 2);
            }
            local_c0 = iVar8 + local_c0;
            *param_3 = lVar16;
            *(int *)(param_3 + 1) = iVar14;
            iVar11 = iVar4;
            if (0 < iVar4) goto LAB_147026724;
          }
        } while ((iVar14 != 0) && (!bVar19));
        if (iVar14 != 0) {
          do {
            local_190 = &DAT_149fccc38;
            local_188 = 2;
            local_1a8 = (undefined4)*param_3;
            uStack_1a4 = *(undefined4 *)((longlong)param_3 + 4);
            uStack_1a0 = (undefined4)param_3[1];
            uStack_19c = *(undefined4 *)((longlong)param_3 + 0xc);
            uVar10 = FUN_1461c0c01(&local_1a8,&local_190,0,0);
            lVar15 = *param_3;
            uVar9 = *(uint *)(param_3 + 1);
            if (uVar10 == 0xffffffff) {
              local_c0 = local_c0 + uVar9;
              *param_3 = 0;
              *(undefined4 *)(param_3 + 1) = 0;
LAB_147026aef:
              local_1b8 = lVar15;
              local_1b0 = uVar9;
              local_1ac = *(undefined4 *)((longlong)param_3 + 0xc);
              iVar11 = FUN_144aff2e5(&local_1b8,0x3d);
              if ((6 < (int)uVar9 && iVar11 != -1) &&
                 (iVar8 = FUN_144a54874(L"payload",lVar15), 8 < uVar9 && iVar8 == 0)) {
                local_1bc = 0;
                local_1c0 = 0;
                local_1c8 = uVar9 - 7;
                lVar15 = lVar15 + (ulonglong)uVar9 * 2;
                local_1d0 = lVar15 + (ulonglong)local_1c8 * -2;
                cVar7 = FUN_147027277(&local_1d0,&local_1c0);
                if ((cVar7 == '\0') ||
                   ((((longlong)(int)local_1c0 < 0 || ((uint)uStack_e0 <= local_1c0)) ||
                    (local_1bc + 7 != iVar11)))) {
                  local_c0 = local_c0 + uVar9;
                }
                else {
                  local_c0 = local_c0 + local_1bc + 8;
                  uVar10 = uVar9 - (local_1bc + 8);
                  if ((int)uVar10 < (int)uVar9) {
                    uVar9 = uVar10;
                  }
                  if ((int)uVar9 < 1) {
                    uVar9 = 0;
                  }
                  if (((int)local_1c0 < (int)(uint)uStack_e0) && (0 < (int)uVar10)) {
                    lVar15 = lVar15 - (ulonglong)(uVar9 * 2);
                    lVar16 = (longlong)(int)local_1c0 * 0x20 + local_e8;
                    local_1e0 = lVar15;
                    local_1d8 = uVar9;
                    FUN_147027328(lVar16,local_120);
                    local_c0 = local_c0 + local_110;
                    cVar7 = local_10c;
                    if (local_10c == '\0') {
                      local_261 = local_10c;
                      if (*(char *)(lVar16 + 0x1e) == -1) {
                        lVar16 = 0;
                      }
                      else {
                        FUN_1414cd37a();
                        lVar16 = (ulonglong)*(byte *)(lVar16 + 0x1e) * 0x58 + _DAT_14c99e168;
                      }
                      local_262 = *local_258;
                      if ((local_262 & 1) == 0) {
                        FUN_144a5dc74(local_140);
                      }
                      else {
                        local_200 = lVar15;
                        local_1f8 = uVar9;
                        FUN_1417036e0(local_1f0,&local_200);
                        if (lVar16 == 0) {
                          local_218 = 0;
                        }
                        else {
                          local_218 = *(undefined8 *)(lVar16 + 0x40);
                        }
                        FUN_145715fae(local_210,&local_218);
                        local_88 = L"Error_InvalidPayload";
                        local_80[0] = 0x14;
                        FUN_1446e940c(local_23c,&local_88);
                        local_88 = L"UOL";
                        local_80[0] = 3;
                        FUN_1446e940c(local_240,&local_88);
                        FUN_140208bae(local_238,local_240,local_23c);
                        FUN_14023409e(&local_228,local_238,1);
                        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,4);
                        FUN_14023423e(local_78,local_210);
                        local_68[0] = 4;
                        FUN_14023423e(local_58,local_1f0);
                        local_a0 = &local_48;
                        local_a8 = &local_88;
                        FUN_14010d304(&local_98,&local_a8);
                        local_b8 = local_228;
                        local_b0 = local_220;
                        if (local_220 != (longlong *)0x0) {
                          LOCK();
                          *(int *)(local_220 + 1) = (int)local_220[1] + 1;
                          UNLOCK();
                        }
                        FUN_14010c016(local_140,&local_b8);
                        FUN_14007f2db(local_98,local_90);
                        if (local_98 != 0) {
                          FUN_1400020a8();
                        }
                        lVar15 = 0x30;
                        do {
                          plVar17 = *(longlong **)((longlong)local_80 + lVar15 + -8);
                          if (plVar17 != (longlong *)0x0) {
                            (**(code **)(*plVar17 + 0x10))();
                            *(undefined8 *)((longlong)local_80 + lVar15 + -8) = 0;
                            *(undefined4 *)((longlong)local_80 + lVar15) = 0;
                          }
                          plVar17 = local_220;
                          lVar15 = lVar15 + -0x20;
                        } while (lVar15 != -0x10);
                        if (local_220 != (longlong *)0x0) {
                          LOCK();
                          plVar13 = local_220 + 1;
                          *(int *)plVar13 = (int)*plVar13 + -1;
                          UNLOCK();
                          if ((int)*plVar13 == 0) {
                            (**(code **)*local_220)(local_220);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar17 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar17 + 0x10))(plVar17);
                            }
                          }
                        }
                        if (local_210[0] != (longlong *)0x0) {
                          (**(code **)(*local_210[0] + 0x10))();
                        }
                        if (local_1f0[0] != (longlong *)0x0) {
                          (**(code **)(*local_1f0[0] + 0x10))();
                        }
                      }
                      plVar13 = (longlong *)FUN_147027222(&local_d0,local_140);
                      plVar17 = (longlong *)*plVar13;
                      *local_260 = (longlong)plVar17;
                      if (plVar17 != (longlong *)0x0) {
                        (**(code **)(*plVar17 + 8))();
                      }
                      *(int *)(local_260 + 1) = (int)plVar13[1];
                      *(undefined1 *)((longlong)local_250 + 4) =
                           *(undefined1 *)((longlong)plVar13 + 0x14);
                      *(int *)local_250 = (int)plVar13[2];
                      if (local_140[0] != (longlong *)0x0) {
                        (**(code **)(*local_140[0] + 0x10))();
                      }
                      cVar7 = local_261;
                      if (((local_262 & 1) != 0) && (local_238[0] != (longlong *)0x0)) {
                        (**(code **)(*local_238[0] + 0x10))();
                        cVar7 = local_261;
                      }
                    }
                    if (local_120[0] != (longlong *)0x0) {
                      (**(code **)(*local_120[0] + 0x10))();
                    }
                    if (cVar7 == '\0') goto LAB_147026d21;
                  }
                }
              }
              uVar10 = *(uint *)(param_3 + 1);
            }
            else {
              uVar5 = uVar9;
              if ((int)uVar10 < (int)uVar9) {
                uVar5 = uVar10;
              }
              local_c0 = local_c0 + uVar10 + 1;
              uVar10 = uVar9 - (uVar10 + 1);
              if ((int)uVar9 <= (int)uVar10) {
                uVar10 = uVar9;
              }
              if ((int)uVar10 < 1) {
                uVar10 = 0;
              }
              *param_3 = (lVar15 + (longlong)(int)uVar9 * 2) - (ulonglong)(uVar10 * 2);
              *(uint *)(param_3 + 1) = uVar10;
              uVar9 = uVar5;
              if (0 < (int)uVar5) goto LAB_147026aef;
            }
          } while (uVar10 != 0);
        }
        FUN_147029504(local_248,&local_e8);
        plVar17 = local_260;
        local_bc = 1;
        *local_260 = (longlong)local_d0;
        if (local_d0 != (longlong *)0x0) {
          (**(code **)(*local_d0 + 8))();
        }
        *(undefined4 *)(plVar17 + 1) = local_c8;
        *(undefined1 *)((longlong)local_250 + 4) = local_bc;
        *(int *)local_250 = local_c0;
LAB_147026d21:
        FUN_140843826(local_e8,uStack_e0 & 0xffffffff);
        param_2 = local_260;
        if (local_e8 != 0) {
          FUN_1400020a8();
          param_2 = local_260;
        }
      }
      goto LAB_147026d4c;
    }
    if ((*local_258 & 1) == 0) goto LAB_147026d9a;
    local_88 = L"Error_EmptyPath";
    local_80[0] = 0xf;
    FUN_1446e940c(local_120,&local_88);
    local_88 = L"UOL";
    local_80[0] = 3;
    FUN_1446e940c(&local_98,&local_88);
    pwVar18 = L"Path is empty.";
LAB_147026e2a:
    FUN_140208bae(&local_88,&local_98,local_120,pwVar18);
  }
  plVar13 = (longlong *)FUN_147027222(&local_d0,&local_88);
  plVar17 = (longlong *)*plVar13;
  *param_2 = (longlong)plVar17;
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 8))();
  }
  *(int *)(param_2 + 1) = (int)plVar13[1];
  *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)plVar13 + 0x14);
  *(int *)(param_2 + 2) = (int)plVar13[2];
  if (local_88 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_88 + 0x10))();
  }
LAB_147026d4c:
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147027222 FUN_147027222 body=85 status=ok
// SIG undefined FUN_147027222(void)

longlong * FUN_147027222(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  
  cVar3 = FUN_144a7c5f6(param_2);
  if (cVar3 == '\0') {
    plVar1 = (longlong *)*param_2;
    plVar2 = (longlong *)*param_1;
    if (plVar2 != plVar1) {
      *param_1 = (longlong)plVar1;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 147027277 FUN_147027277 body=176 status=ok
// SIG undefined FUN_147027277(void)

ulonglong FUN_147027277(longlong *param_1,uint *param_2,int *param_3)

{
  ushort _C;
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  
  uVar5 = 0;
  if (0 < (int)param_1[1]) {
    iVar6 = 1;
    lVar7 = 0;
    do {
      _C = *(ushort *)(*param_1 + lVar7 * 2);
      iVar1 = iswdigit(_C);
      uVar4 = (uint)uVar5;
      uVar2 = uVar4;
      if (iVar1 == 0) break;
      iVar1 = _C - 0x30;
      uVar2 = 0;
      if (uVar4 != 0 || iVar1 != 0) {
        if (uVar4 * 10 < uVar4) goto LAB_147027312;
        uVar3 = iVar1 * iVar6 + uVar4 * 10;
        uVar2 = uVar3;
        if (uVar3 <= uVar4) {
          uVar2 = uVar4;
        }
        if (uVar3 < uVar4) goto LAB_147027312;
        iVar6 = iVar6 * 10;
      }
      lVar7 = lVar7 + 1;
      uVar5 = (ulonglong)uVar2;
    } while (lVar7 < (int)param_1[1]);
    if ((int)lVar7 == 0) {
LAB_147027312:
      uVar5 = 0;
    }
    else {
      *param_2 = uVar2;
      uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
      if (param_3 != (int *)0x0) {
        *param_3 = (int)lVar7;
      }
    }
  }
  return uVar5;
}



// FUNCTION 147027328 FUN_147027328 body=693 status=ok
// SIG undefined FUN_147027328(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_147027328(undefined8 *param_1,longlong *param_2,undefined8 *param_3,byte *param_4)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  undefined1 auStack_88 [40];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  longlong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)((longlong)param_1 + 0x1f) & 1) == 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_144a5dc74(&local_58);
    local_48 = local_48 & 0xffffff0000000000;
    if ((*param_4 & 1) == 0) goto LAB_147027479;
    local_38 = L"Error_Uninitialized";
    local_30 = 0x13;
    FUN_1446e940c(local_5c,&local_38);
    local_38 = L"UOL";
    local_30 = 3;
    FUN_1446e940c(local_60,&local_38);
    pwVar6 = L"Unable to parse a payload for an uninitialized fragment.";
LAB_1470274ec:
    FUN_140208bae(&local_38,local_60,local_5c,pwVar6);
LAB_1470274fc:
    plVar3 = (longlong *)FUN_147027222(&local_58,&local_38);
    plVar2 = (longlong *)*plVar3;
    *param_2 = (longlong)plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    *(int *)(param_2 + 1) = (int)plVar3[1];
    *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)plVar3 + 0x14);
    *(int *)(param_2 + 2) = (int)plVar3[2];
    if (local_38 != (wchar_t *)0x0) {
      (**(code **)(*(longlong *)local_38 + 0x10))();
    }
  }
  else {
    if (*(char *)((longlong)param_1 + 0x1e) == -1) {
LAB_14702744e:
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      local_48 = 0;
      FUN_144a5dc74(&local_58);
      local_48 = local_48 & 0xffffff0000000000;
      if ((*param_4 & 1) != 0) {
        local_38 = L"Error_Expired";
        local_30 = 0xd;
        FUN_1446e940c(local_5c,&local_38);
        local_38 = L"UOL";
        local_30 = 3;
        FUN_1446e940c(local_60,&local_38);
        pwVar6 = L"Unable to parse a payload for a fragment whose type has expired.";
        goto LAB_1470274ec;
      }
LAB_147027479:
      FUN_144a5dc74(&local_38);
      goto LAB_1470274fc;
    }
    FUN_1414cd37a();
    lVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x28) == 0)) goto LAB_14702744e;
    pbVar1 = (byte *)((longlong)param_1 + 0x1f);
    if ((*pbVar1 & 2) == 0) {
      param_1 = (undefined8 *)*param_1;
    }
    lVar4 = (ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)param_1;
    if (*(int *)(param_3 + 1) != 0) {
      local_58 = (longlong *)*param_3;
      uStack_50 = param_3[1];
      (**(code **)(lVar5 + 0x18))(param_2,lVar4,&local_58,param_4);
      goto LAB_1470273c4;
    }
    FUN_141095ae8(*(longlong *)(lVar5 + 0x28),lVar4,1);
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    local_48 = 0;
    FUN_144a5dc74(&local_58);
    local_48 = CONCAT35((int3)(local_48 >> 0x28),0x100000000);
    *param_2 = (longlong)local_58;
    if (local_58 == (longlong *)0x0) {
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      goto LAB_1470273c4;
    }
    (**(code **)(*local_58 + 8))();
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
    *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
    *(undefined1 *)((longlong)param_2 + 0x14) = local_48._4_1_;
  }
  if (local_58 != (longlong *)0x0) {
    (**(code **)(*local_58 + 0x10))();
  }
LAB_1470273c4:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470275de FUN_1470275de body=114 status=ok
// SIG undefined FUN_1470275de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1470275de(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1414cd37a();
  if ((longlong)DAT_14c99e170 != 0) {
    lVar5 = (longlong)DAT_14c99e170 * 0x58;
    uVar3 = 0;
    lVar2 = 0;
    lVar4 = _DAT_14c99e168;
    do {
      uVar1 = (**(code **)(lVar4 + 0x20))(param_1,param_2);
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
        lVar2 = lVar4;
      }
      lVar4 = lVar4 + 0x58;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x28) != 0)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 147027650 FUN_147027650 body=707 status=ok
// SIG undefined FUN_147027650(void)

undefined8 FUN_147027650(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  char cVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  undefined8 uStack_42;
  undefined1 local_3a;
  byte local_39;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99e140) {
    FUN_144b3d300(&DAT_14c99e140);
    if (DAT_14c99e140 == -1) {
      FUN_1446ddc76(&DAT_14c99e138,"SoftObjectPath",1);
      _Init_thread_footer(&DAT_14c99e140);
    }
  }
  uVar4 = *(ulonglong *)(param_2 + 0xc);
  FUN_1401a700c(&local_88,0x13);
  if (uVar4 == (local_88 & 0xffffffff)) {
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_68 = 0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x130))();
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    FUN_140843826(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar3 < 1) && (*(int *)((longlong)param_1 + 0xc) != 1)) {
      FUN_1470295bc(param_1,1);
    }
    FUN_1470296dc(&local_58,DAT_14c99e130,&uStack_80);
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_147029656(param_1,iVar3);
    }
    lVar9 = *param_1;
    lVar10 = (longlong)iVar3 * 0x20;
    *(undefined1 *)(lVar9 + 0x1e + lVar10) = local_3a;
    bVar2 = *(byte *)(lVar9 + 0x1f + lVar10);
    *(byte *)(lVar9 + 0x1f + lVar10) = bVar2 & 0xfe | local_39 & 1;
    *(byte *)(lVar9 + 0x1f + lVar10) = bVar2 & 0xfc | local_39 & 1 | local_39 & 2;
    *(byte *)(lVar9 + 0x1f + lVar10) = local_39;
    puVar1 = (undefined8 *)(lVar9 + 0xe + lVar10);
    *puVar1 = CONCAT62(uStack_48,uStack_4a);
    puVar1[1] = uStack_42;
    puVar7 = (undefined4 *)(lVar9 + lVar10);
    *puVar7 = local_58;
    puVar7[1] = uStack_54;
    puVar7[2] = uStack_50;
    puVar7[3] = CONCAT22(uStack_4a,uStack_4c);
    lVar9 = uStack_70;
  }
  else {
    local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(param_2 + 8));
    cVar6 = FUN_1468ec2ac(&local_88,DAT_14c99e138);
    if (cVar6 == '\0') {
      uVar8 = 0;
      goto LAB_147027798;
    }
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x128))();
    iVar3 = *(int *)((longlong)param_1 + 0xc);
    FUN_140843826(*param_1,(int)param_1[1]);
    *(undefined4 *)(param_1 + 1) = 0;
    if ((iVar3 < 1) && (*(int *)((longlong)param_1 + 0xc) != 1)) {
      FUN_1470295bc(param_1,1);
    }
    uVar5 = DAT_14c99e130;
    puVar7 = (undefined4 *)FUN_14001cc68(0x20,8);
    *puVar7 = (undefined4)local_88;
    puVar7[1] = local_88._4_4_;
    puVar7[2] = (undefined4)uStack_80;
    puVar7[3] = uStack_80._4_4_;
    *(longlong *)(puVar7 + 4) = local_78;
    local_78 = 0;
    puVar7[6] = (undefined4)uStack_70;
    puVar7[7] = uStack_70._4_4_;
    uStack_70 = 0;
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_147029656(param_1,iVar3);
    }
    lVar9 = *param_1;
    lVar10 = (longlong)iVar3 * 0x20;
    *(undefined1 *)(lVar9 + 0x1e + lVar10) = uVar5;
    *(undefined1 *)(lVar9 + 0x1f + lVar10) = 1;
    *(undefined4 **)(lVar9 + lVar10) = puVar7;
    lVar9 = local_78;
  }
  if (lVar9 != 0) {
    FUN_1400020a8();
  }
  uVar8 = 1;
LAB_147027798:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147027914 FUN_147027914 body=20 status=ok
// SIG undefined FUN_147027914(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147027914(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (((*(byte *)((longlong)param_1 + 0x1f) & 1) != 0) && (DAT_14c872bd8 == '\0')) {
    bVar2 = *(byte *)((longlong)param_1 + 0x1f);
    if ((bVar2 & 1) != 0) {
      puVar3 = param_1;
      if ((bVar2 & 2) == 0) {
        puVar3 = (undefined8 *)*param_1;
      }
      lVar5 = (ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe) + (longlong)puVar3;
      if (*(char *)((longlong)param_1 + 0x1e) != -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c99e178) {
          FUN_144b3d300(&DAT_14c99e178);
          if (DAT_14c99e178 == -1) {
            _DAT_14c99e148 = &PTR_LAB_149e668b0;
            _DAT_14c99e150 = 0;
            FUN_1405bceb4(&DAT_14c99e148);
            _DAT_14c99e148 = &PTR_FUN_149fcd880;
            DAT_14c99e158 = 0;
            _DAT_14c99e160 = 0;
            _DAT_14c99e168 = 0;
            _DAT_14c99e170 = 0;
            atexit((_func_5014 *)&LAB_142aedb63);
            _Init_thread_footer(&DAT_14c99e178);
          }
        }
        lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
        if ((lVar4 != 0) && (plVar1 = *(longlong **)(lVar4 + 0x28), plVar1 != (longlong *)0x0)) {
          (**(code **)(*plVar1 + 0x2f0))(plVar1,lVar5,1);
        }
      }
      bVar2 = *(byte *)((longlong)param_1 + 0x1f);
      if ((bVar2 & 2) == 0) {
        FUN_1400020a8(lVar5 - (ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe));
        bVar2 = *(byte *)((longlong)param_1 + 0x1f);
      }
      *(byte *)((longlong)param_1 + 0x1f) = bVar2 & 0xfe;
    }
    return;
  }
  return;
}



// FUNCTION 147027928 FUN_147027928 body=178 status=ok
// SIG undefined FUN_147027928(void)

void FUN_147027928(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_158 [32];
  undefined2 *local_138;
  undefined2 *local_130;
  ulonglong *local_128;
  char local_120;
  undefined2 local_118 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_138 = local_118;
  local_120 = '\0';
  local_128 = &local_18;
  local_130 = local_138;
  FUN_147026280(param_1,&local_138);
  FUN_140002184(param_2,0x28);
  uVar1 = (longlong)local_130 - (longlong)local_138;
  *local_130 = 0;
  FUN_1400020e8(param_2,local_138,uVar1 >> 1);
  FUN_140002184(param_2,0x29);
  if (local_120 == '\x01') {
    FUN_1400020a8(local_138);
  }
  if ((local_18 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470279dc FUN_1470279dc body=322 status=ok
// SIG undefined FUN_1470279dc(void)

ulonglong FUN_1470279dc(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  wchar_t *pwVar1;
  char cVar2;
  uint uVar3;
  wchar_t *pwVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  wchar_t *local_58;
  int local_50;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pwVar1 = (wchar_t *)*param_2;
  if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 == L'(')) {
    pwVar4 = wcschr(pwVar1,L')');
    pwVar1 = (wchar_t *)*param_2;
    if ((pwVar1 != pwVar4) && ((longlong)pwVar4 - (longlong)pwVar1 < 0xfffffffe)) {
      local_50 = (int)((ulonglong)((longlong)pwVar4 - (longlong)pwVar1) >> 1) + -1;
      local_58 = pwVar1 + 1;
      local_41 = 0;
      FUN_14702654e(param_1,&local_78);
      cVar2 = local_68._4_1_;
      if (local_78 != (longlong *)0x0) {
        (**(code **)(*local_78 + 0x10))();
      }
      if (cVar2 != '\0') {
        *param_2 = (longlong)(pwVar4 + 1);
        uVar6 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
        goto LAB_147027a83;
      }
    }
  }
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_88 = param_5;
  local_80 = 0;
  uVar3 = FUN_140c98f9a(&local_78,param_2,param_3,param_4);
  uVar6 = (ulonglong)uVar3;
  if ((char)uVar3 != '\0') {
    uVar5 = FUN_140007850(&local_78);
    FUN_147025b42(param_1,uVar5,0,0);
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_147027a83:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147027b1f FUN_147027b1f body=161 status=ok
// SIG undefined FUN_147027b1f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_147027b1f(undefined8 *param_1,undefined8 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 in_RAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte bVar6;
  
  bVar6 = *(byte *)((longlong)param_1 + 0x1f) & 1;
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),*(undefined1 *)((longlong)param_2 + 0x1f)) &
          0xffffffffffffff01;
  if (bVar6 != (byte)uVar3) {
    return 0;
  }
  if (bVar6 == 0) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  if (*(char *)((longlong)param_1 + 0x1e) != *(char *)((longlong)param_2 + 0x1e)) {
    return 0;
  }
  if (*(char *)((longlong)param_2 + 0x1e) != -1) {
    FUN_1414cd37a();
    lVar4 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)(lVar4 + 0x28);
      goto LAB_147027b73;
    }
  }
  uVar5 = 0;
LAB_147027b73:
  pbVar1 = (byte *)((longlong)param_1 + 0x1f);
  if ((*pbVar1 & 2) == 0) {
    param_1 = (undefined8 *)*param_1;
  }
  pbVar2 = (byte *)((longlong)param_2 + 0x1f);
  if ((*pbVar2 & 2) == 0) {
    param_2 = (undefined8 *)*param_2;
  }
  uVar5 = FUN_14470ec92(uVar5,(ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) +
                              (longlong)param_1,
                        (ulonglong)((uint)(1L << (*pbVar2 >> 2)) & 0xfffffffe) + (longlong)param_2,0
                       );
  return uVar5;
}



// FUNCTION 147027bc0 FUN_147027bc0 body=141 status=ok
// SIG undefined FUN_147027bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_147027bc0(undefined8 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  if ((*(byte *)((longlong)param_1 + 0x1f) & 1) != 0) {
    bVar2 = *(byte *)((longlong)param_1 + 0x1e);
    uVar6 = (uint)bVar2;
    if (bVar2 == 0xff) {
      uVar6 = 0xff;
    }
    else {
      FUN_1414cd37a();
      lVar5 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
      if ((lVar5 != 0) && (plVar3 = *(longlong **)(lVar5 + 0x28), plVar3 != (longlong *)0x0)) {
        pbVar1 = (byte *)((longlong)param_1 + 0x1f);
        if ((*pbVar1 & 2) == 0) {
          param_1 = (undefined8 *)*param_1;
        }
        iVar4 = (**(code **)(*plVar3 + 0x360))
                          (plVar3,(ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) +
                                  (longlong)param_1);
        uVar6 = (uint)bVar2 ^ iVar4 + ((uint)(bVar2 >> 2) | (uint)bVar2 << 6) + 0x9e3779b9;
      }
    }
  }
  return uVar6;
}



// FUNCTION 147027c4e FUN_147027c4e body=302 status=ok
// SIG undefined FUN_147027c4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147027c4e(undefined8 *param_1,longlong param_2)

{
  byte *pbVar1;
  undefined2 *puVar2;
  longlong lVar3;
  undefined1 auStack_168 [40];
  undefined1 *local_140;
  undefined1 *local_138;
  ulonglong *local_130;
  char local_128;
  undefined1 local_120 [256];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)((longlong)param_1 + 0x1e) != -1) {
    FUN_1414cd37a();
    lVar3 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) {
      FUN_14005eb5c(lVar3 + 0x40,param_2);
      local_140 = local_120;
      local_128 = '\0';
      local_130 = &local_20;
      pbVar1 = (byte *)((longlong)param_1 + 0x1f);
      if ((*pbVar1 & 2) == 0) {
        param_1 = (undefined8 *)*param_1;
      }
      local_138 = local_140;
      (**(code **)(lVar3 + 0x10))
                ((ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)param_1,
                 &local_140);
      if ((int)((ulonglong)((longlong)local_138 - (longlong)local_140) >> 1) != 0) {
        puVar2 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar2 + 1) {
          FUN_140213274(param_2,1);
          puVar2 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar2 + 1;
        *puVar2 = 0x3d;
        FUN_1449668a2(param_2,local_140,(ulonglong)((longlong)local_138 - (longlong)local_140) >> 1)
        ;
      }
      if (local_128 == '\x01') {
        FUN_1400020a8(local_140);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147027d7e FUN_147027d7e body=815 status=ok
// SIG undefined FUN_147027d7e(void)

longlong * FUN_147027d7e(longlong param_1,longlong *param_2,longlong *param_3,byte *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  uint local_a8;
  longlong local_a0;
  uint local_98;
  undefined4 local_94;
  undefined1 local_90 [4];
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar9 = *(uint *)(param_3 + 1);
  if (uVar9 == 0) {
    FUN_14084385c(param_1);
    *(undefined1 *)(param_1 + 0x1e) = 0xff;
    local_78 = (longlong *)0x0;
    uStack_70 = 0;
    local_68 = 0;
    FUN_144a5dc74(&local_78);
    local_68 = local_68 & 0xffffffff00000000;
LAB_147027e50:
    local_68._0_5_ = CONCAT14(1,(int)local_68);
    *param_2 = (longlong)local_78;
    if (local_78 == (longlong *)0x0) {
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
      *(int *)(param_2 + 2) = (int)local_68;
      *(undefined1 *)((longlong)param_2 + 0x14) = 1;
      goto LAB_147027e8b;
    }
    (**(code **)(*local_78 + 8))();
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
    *(int *)(param_2 + 2) = (int)local_68;
    *(char *)((longlong)param_2 + 0x14) = local_68._4_1_;
  }
  else {
    uVar5 = 4;
    if ((int)uVar9 < 4) {
      uVar5 = uVar9;
    }
    lVar11 = *param_3;
    iVar6 = FUN_144a54874(lVar11,&DAT_149e62e78,(longlong)(int)uVar5);
    if ((uVar9 == 4) && (iVar6 == 0)) {
      FUN_14084385c(param_1);
      *(undefined1 *)(param_1 + 0x1e) = 0xff;
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_144a5dc74(&local_78);
      local_68 = CONCAT44(local_68._4_4_,4);
      goto LAB_147027e50;
    }
    uVar1 = *(undefined4 *)((longlong)param_3 + 0xc);
    local_88 = (undefined4)*param_3;
    uStack_84 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_80 = (undefined4)param_3[1];
    uStack_7c = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar5 = 0;
    uVar7 = FUN_144aff2e5(&local_88,0x3d,0);
    if (uVar7 == 0xffffffff) {
      lVar10 = 0;
LAB_147027f1e:
      local_a0 = lVar11;
      local_98 = uVar9;
      local_94 = uVar1;
      FUN_142aecc74(param_1,&local_78,&local_a0,param_4);
      if (local_68._4_1_ == '\0') {
        FUN_14023423e(param_2,&local_78);
        *(int *)(param_2 + 2) = (int)local_68;
        *(char *)((longlong)param_2 + 0x14) = local_68._4_1_;
      }
      else {
        local_b0 = lVar10;
        local_a8 = uVar5;
        FUN_147027328(param_1,param_2,&local_b0,param_4);
        *(int *)(param_2 + 2) = (int)local_68 + (int)param_2[2] + 1;
      }
    }
    else {
      uVar2 = *(uint *)(param_3 + 1);
      uVar9 = uVar2;
      if ((int)uVar7 < (int)uVar2) {
        uVar9 = uVar7;
      }
      uVar4 = ~uVar7 + uVar2;
      if ((int)uVar2 <= (int)(~uVar7 + uVar2)) {
        uVar4 = uVar2;
      }
      uVar5 = 0;
      if (0 < (int)uVar4) {
        uVar5 = uVar4;
      }
      if (0 < (int)uVar9) {
        lVar11 = *param_3;
        lVar10 = (lVar11 + (longlong)(int)uVar2 * 2) - (ulonglong)(uVar5 * 2);
        goto LAB_147027f1e;
      }
      local_78 = (longlong *)0x0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_144a5dc74(&local_78);
      local_68 = local_68 & 0xffffff0000000000;
      if ((*param_4 & 1) == 0) {
        FUN_144a5dc74(&local_58);
      }
      else {
        local_58 = L"Error_UnexpectedEquals";
        local_50 = 0x16;
        FUN_1446e940c(local_8c,&local_58);
        local_58 = L"UOL";
        local_50 = 3;
        FUN_1446e940c(local_90,&local_58);
        FUN_140208bae(&local_58,local_90,local_8c,
                      L"Unexpected \'=\'\' when expecting a fragment type.");
      }
      plVar8 = (longlong *)FUN_147027222(&local_78,&local_58);
      plVar3 = (longlong *)*plVar8;
      *param_2 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(int *)(param_2 + 1) = (int)plVar8[1];
      *(undefined1 *)((longlong)param_2 + 0x14) = *(undefined1 *)((longlong)plVar8 + 0x14);
      *(int *)(param_2 + 2) = (int)plVar8[2];
      if (local_58 != (wchar_t *)0x0) {
        (**(code **)(*(longlong *)local_58 + 0x10))();
      }
    }
  }
  if (local_78 != (longlong *)0x0) {
    (**(code **)(*local_78 + 0x10))();
  }
LAB_147027e8b:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1470280ae FUN_1470280ae body=178 status=ok
// SIG undefined FUN_1470280ae(void)

void FUN_1470280ae(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_70;
  ulonglong *local_68;
  char local_60;
  undefined2 local_58 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = local_58;
  local_60 = '\0';
  local_68 = &local_18;
  local_70 = local_78;
  FUN_147027c4e(param_1,&local_78);
  FUN_140002184(param_2,0x28);
  uVar1 = (longlong)local_70 - (longlong)local_78;
  *local_70 = 0;
  FUN_1400020e8(param_2,local_78,uVar1 >> 1);
  FUN_140002184(param_2,0x29);
  if (local_60 == '\x01') {
    FUN_1400020a8(local_78);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028162 FUN_147028162 body=175 status=ok
// SIG undefined FUN_147028162(void)

undefined8 FUN_147028162(undefined8 param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [40];
  wchar_t *local_50;
  int local_48;
  undefined1 local_39;
  longlong *local_38 [2];
  char local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pwVar1 = (wchar_t *)*param_2;
  if ((pwVar1 != (wchar_t *)0x0) && (*pwVar1 == L'(')) {
    pwVar2 = wcschr(pwVar1,L')');
    pwVar1 = (wchar_t *)*param_2;
    if ((pwVar1 != pwVar2) && ((longlong)pwVar2 - (longlong)pwVar1 < 0xfffffffe)) {
      local_48 = (int)((ulonglong)((longlong)pwVar2 - (longlong)pwVar1) >> 1) + -1;
      local_50 = pwVar1 + 1;
      local_39 = 0;
      FUN_147027d7e(param_1,local_38);
      if (local_38[0] != (longlong *)0x0) {
        (**(code **)(*local_38[0] + 0x10))();
      }
      uVar3 = 1;
      if (local_24 != '\0') goto LAB_1470281ac;
    }
  }
  uVar3 = 0;
LAB_1470281ac:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 147028212 FUN_147028212 body=32 status=ok
// SIG undefined FUN_147028212(void)

undefined8 FUN_147028212(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"UE::UniversalObjectLocator::FRegistry");
  return param_2;
}



// FUNCTION 14702826e FUN_14702826e body=75 status=ok
// SIG undefined FUN_14702826e(void)

undefined1 FUN_14702826e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (param_4 != 0) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar6);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(param_2 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      FUN_144a787a6();
      lVar6 = lVar6 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1470282ba FUN_1470282ba body=31 status=ok
// SIG undefined FUN_1470282ba(void)

undefined1
FUN_1470282ba(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_144a7afa6(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1470282f6 FUN_1470282f6 body=70 status=ok
// SIG undefined FUN_1470282f6(void)

void FUN_1470282f6(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_1470283bd(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028348 FUN_147028348 body=38 status=ok
// SIG undefined FUN_147028348(void)

void FUN_147028348(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1470283bd FUN_1470283bd body=198 status=ok
// SIG undefined FUN_1470283bd(void)

void FUN_1470283bd(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar10 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar9 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar9) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4);
  iVar8 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar10) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar10 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_1 + 3) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_1[2];
    iVar8 = *(int *)(param_1 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar8,puVar7);
  FUN_144a78877(uVar5,uVar6);
  return;
}



// FUNCTION 1470284a2 FUN_1470284a2 body=54 status=ok
// SIG undefined FUN_1470284a2(void)

undefined1 FUN_1470284a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 1470284d8 FUN_1470284d8 body=64 status=ok
// SIG undefined FUN_1470284d8(void)

undefined8
FUN_1470284d8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  uint7 uVar4;
  ulonglong uVar3;
  bool bVar5;
  
  iVar1 = *(int *)(param_2 + 1);
  iVar2 = *(int *)(param_3 + 1);
  if (iVar1 == iVar2) {
    uVar4 = (uint7)(uint3)((uint)iVar2 >> 8);
    bVar5 = true;
    if (iVar1 < 2) goto LAB_14702850e;
    uVar3 = FUN_144a80a00(*param_2,*param_3);
    bVar5 = (int)uVar3 == 0;
  }
  else {
    uVar3 = (ulonglong)(uint)(iVar2 + iVar1);
    bVar5 = iVar2 + iVar1 == 1;
  }
  uVar4 = (uint7)(uVar3 >> 8);
LAB_14702850e:
  *param_5 = bVar5;
  return CONCAT71(uVar4,1);
}



// FUNCTION 147028534 FUN_147028534 body=94 status=ok
// SIG undefined FUN_147028534(void)

void FUN_147028534(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = *(int *)(param_2 + 1);
  if (iVar1 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  FUN_144a49b4a(iVar2,puVar3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702859e FUN_14702859e body=37 status=ok
// SIG undefined FUN_14702859e(void)

void FUN_14702859e(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147028624 FUN_147028624 body=44 status=ok
// SIG undefined FUN_147028624(void)

void FUN_147028624(undefined8 param_1,longlong *param_2)

{
  FUN_140843826(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147028666 FUN_147028666 body=54 status=ok
// SIG undefined FUN_147028666(void)

undefined1 FUN_147028666(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702887a(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 14702869c FUN_14702869c body=51 status=ok
// SIG undefined FUN_14702869c(void)

undefined8
FUN_14702869c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  if (*(int *)(param_2 + 1) == *(int *)(param_3 + 1)) {
    uVar1 = FUN_147029578(*param_2,*param_3);
  }
  else {
    uVar1 = 0;
  }
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 1470286d0 FUN_1470286d0 body=135 status=ok
// SIG undefined FUN_1470286d0(void)

undefined8 FUN_1470286d0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [12];
  byte local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_30);
    FUN_147027928(param_3,param_2);
    (**(code **)(*param_1 + 8))(param_1,local_30);
    if ((local_24 & 4) != 0) {
      FUN_140843826(0,0);
    }
  }
  else {
    FUN_147027928(param_3,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028758 FUN_147028758 body=39 status=ok
// SIG undefined FUN_147028758(void)

void FUN_147028758(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1470279dc(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 147028798 FUN_147028798 body=129 status=ok
// SIG undefined FUN_147028798(void)

uint FUN_147028798(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 8))(param_1,local_30);
  if ((longlong)(int)param_2[1] == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *param_2;
    lVar2 = (longlong)(int)param_2[1] << 5;
    uVar3 = 0;
    do {
      iVar1 = FUN_147027bc0(lVar4);
      uVar3 = uVar3 ^ iVar1 + (uVar3 >> 2) + uVar3 * 0x40 + 0x9e3779b9;
      lVar4 = lVar4 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14702887a FUN_14702887a body=93 status=ok
// SIG undefined FUN_14702887a(void)

undefined8 * FUN_14702887a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140843826(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1470288d8(param_1,iVar1);
      FUN_14702893a(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1470288d8 FUN_1470288d8 body=98 status=ok
// SIG undefined FUN_1470288d8(void)

void FUN_1470288d8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 5,8);
    iVar1 = (int)(uVar2 >> 5);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x20,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14702893a FUN_14702893a body=52 status=ok
// SIG undefined FUN_14702893a(void)

void FUN_14702893a(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_142aed880(param_1,param_2);
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return;
}



// FUNCTION 147028970 FUN_147028970 body=48 status=ok
// SIG undefined FUN_147028970(void)

void FUN_147028970(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_140843826(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 1470289d2 FUN_1470289d2 body=54 status=ok
// SIG undefined FUN_1470289d2(void)

undefined1 FUN_1470289d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_142aed9b8(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 147028a08 FUN_147028a08 body=31 status=ok
// SIG undefined FUN_147028a08(void)

undefined1
FUN_147028a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 *param_5)

{
  undefined1 uVar1;
  
  uVar1 = FUN_147027b1f(param_2,param_3);
  *param_5 = uVar1;
  return 1;
}



// FUNCTION 147028a28 FUN_147028a28 body=117 status=ok
// SIG undefined FUN_147028a28(void)

undefined8 FUN_147028a28(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_4 == 0) {
    (**(code **)(*param_1 + 8))(param_1,local_30);
    FUN_1470280ae(param_3,param_2);
    (**(code **)(*param_1 + 8))(param_1,local_30);
  }
  else {
    FUN_1470280ae(param_3,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028aba FUN_147028aba body=70 status=ok
// SIG undefined FUN_147028aba(void)

void FUN_147028aba(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_147027bc0(param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028b0c FUN_147028b0c body=47 status=ok
// SIG undefined FUN_147028b0c(void)

void FUN_147028b0c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x20) == '\x01') {
    if (((*(byte *)(param_2 + 0x1f) & 1) != 0) && (DAT_14c872bd8 == '\0')) {
      FUN_14084385c(param_2);
    }
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  return;
}



// FUNCTION 147028bd2 FUN_147028bd2 body=59 status=ok
// SIG undefined FUN_147028bd2(void)

undefined8 FUN_147028bd2(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147028c74 FUN_147028c74 body=7 status=ok
// SIG undefined FUN_147028c74(void)

void FUN_147028c74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



// FUNCTION 147028c92 FUN_147028c92 body=56 status=ok
// SIG undefined FUN_147028c92(void)

void FUN_147028c92(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147028cbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147028cca FUN_147028cca body=79 status=ok
// SIG undefined FUN_147028cca(void)

longlong FUN_147028cca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(char *)(param_1 + 0x18) == '\x01') &&
     (plVar3 = *(longlong **)(param_1 + 8), plVar3 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_147028e4a(param_1);
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  return param_1;
}



// FUNCTION 147028d1a FUN_147028d1a body=281 status=ok
// SIG undefined FUN_147028d1a(void)

void FUN_147028d1a(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [8];
  longlong *local_70;
  longlong local_68 [2];
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != (longlong *)0x0) && ((char)param_1[2] == '\x01')) {
    if ((*param_1 == 0) || ((*(byte *)(*param_1 + 0x78) & 1) == 0)) {
      local_68[0] = *param_2;
      local_58 = param_2[2];
      param_2[2] = 0;
      local_48 = (undefined4)param_2[4];
      uStack_44 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_40 = (undefined4)param_2[5];
      uStack_3c = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_38 = (undefined4)param_2[6];
      uStack_34 = *(undefined4 *)((longlong)param_2 + 0x34);
      uStack_30 = (undefined4)param_2[7];
      uStack_2c = *(undefined4 *)((longlong)param_2 + 0x3c);
      if (local_68[0] != 0) {
        *param_2 = 0;
      }
      FUN_147028f3a(param_1,local_78,local_68);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar3 = local_70 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar1 = (int *)((longlong)local_70 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_70 + 0x10))(local_70);
          }
        }
      }
      if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar2 = *param_1;
    while ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
      plVar3 = *(longlong **)(lVar2 + 0x70);
      (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    }
  }
  plVar3 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar3 = (longlong *)param_2[2];
  }
  (**(code **)(*plVar3 + 8))(plVar3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 147028e4a FUN_147028e4a body=94 status=ok
// SIG undefined FUN_147028e4a(void)

longlong * FUN_147028e4a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0xa0,0x10);
  FUN_147028ea8(plVar3);
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 147028ea8 FUN_147028ea8 body=99 status=ok
// SIG undefined FUN_147028ea8(void)

undefined8 * FUN_147028ea8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_149fcd810;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 2));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 2),4000);
  param_1[8] = 0;
  param_1[10] = 0;
  uVar1 = FUN_1405d8a54(1);
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 147028f1c FUN_147028f1c body=29 status=ok
// SIG undefined FUN_147028f1c(void)

undefined8 FUN_147028f1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147028f3a FUN_147028f3a body=675 status=ok
// SIG undefined FUN_147028f3a(void)

longlong * FUN_147028f3a(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108;
  longlong local_f8;
  longlong lStack_f0;
  undefined1 local_e8;
  longlong local_d8;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  longlong lStack_90;
  undefined1 *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_145d28d24(&local_118);
  lVar5 = local_118;
  local_108 = 1;
  local_128 = local_118;
  if (plStack_110 == (longlong *)0x0) {
    plVar8 = (longlong *)0;
  }
  else {
    LOCK();
    *(int *)((longlong)plStack_110 + 8) = *(int *)((longlong)plStack_110 + 8) + 1;
    UNLOCK();
    plVar8 = plStack_110;
  }
  local_130 = (longlong)plStack_110;
  local_f8 = local_118;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  local_e8 = 0;
  lVar3 = *param_3;
  lVar4 = param_3[2];
  param_3[2] = 0;
  local_b8 = (undefined4)param_3[4];
  uStack_b4 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_b0 = (undefined4)param_3[5];
  uStack_ac = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_a8 = (undefined4)param_3[6];
  uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_a0 = (undefined4)param_3[7];
  uStack_9c = *(undefined4 *)((longlong)param_3 + 0x3c);
  if (lVar3 != 0) {
    *param_3 = 0;
  }
  local_98 = *param_1;
  lStack_90 = param_1[1];
  if (lStack_90 != 0) {
    LOCK();
    *(int *)(lStack_90 + 8) = *(int *)(lStack_90 + 8) + 1;
    UNLOCK();
  }
  local_88[0] = (undefined1 *)0x0;
  local_120 = param_2;
  lStack_f0 = (longlong)plVar8;
  local_d8 = lVar3;
  local_c8 = lVar4;
  local_78 = (longlong *)FUN_14001cc68(0x80,0x10);
  plVar7 = local_120;
  lVar6 = local_128;
  *local_78 = (longlong)&PTR_LAB_149fcd830;
  local_78[2] = lVar5;
  local_78[3] = (longlong)plVar8;
  local_f8 = 0;
  lStack_f0 = 0;
  *(undefined1 *)(local_78 + 4) = 0;
  local_78[6] = lVar3;
  local_78[8] = lVar4;
  local_c8 = 0;
  *(undefined4 *)(local_78 + 0xc) = local_a8;
  *(undefined4 *)((longlong)local_78 + 100) = uStack_a4;
  *(undefined4 *)(local_78 + 0xd) = uStack_a0;
  *(undefined4 *)((longlong)local_78 + 0x6c) = uStack_9c;
  *(undefined4 *)(local_78 + 10) = local_b8;
  *(undefined4 *)((longlong)local_78 + 0x54) = uStack_b4;
  *(undefined4 *)(local_78 + 0xb) = uStack_b0;
  *(undefined4 *)((longlong)local_78 + 0x5c) = uStack_ac;
  if (lVar3 != 0) {
    local_d8 = 0;
  }
  local_78[0xe] = local_98;
  local_78[0xf] = lStack_90;
  local_98 = 0;
  lStack_90 = 0;
  if (local_78 != (longlong *)&DAT_fffffffffffffff0) {
    local_88[0] = &LAB_14702938a;
  }
  FUN_1470291de(&local_f8);
  lVar5 = *param_1;
  plVar8 = (longlong *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  FUN_14702925e(lVar5,local_88);
  *plVar7 = lVar6;
  plVar7[1] = local_130;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (local_88[0] != (undefined1 *)0x0) {
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      plVar8 = local_68;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  plVar8 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1470291de FUN_1470291de body=128 status=ok
// SIG undefined FUN_1470291de(void)

void FUN_1470291de(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x68);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar3 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147029252. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14702925e FUN_14702925e body=267 status=ok
// SIG undefined FUN_14702925e(void)

void FUN_14702925e(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  HANDLE pvVar1;
  HANDLE pvVar2;
  ULONG_PTR UVar3;
  PRTL_CRITICAL_SECTION_DEBUG p_Var4;
  HANDLE pvVar5;
  HANDLE pvVar6;
  longlong lVar7;
  HANDLE pvVar8;
  HANDLE pvVar9;
  ULONG_PTR UVar10;
  PRTL_CRITICAL_SECTION_DEBUG p_Var11;
  longlong lVar12;
  HANDLE pvVar13;
  longlong *plVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((ulonglong)param_1[3].DebugInfo & 1) == 0) {
    EnterCriticalSection(param_1);
    if (((ulonglong)param_1[3].DebugInfo & 1) == 0) {
      local_58._0_4_ = param_1[1].LockCount;
      local_58._4_4_ = param_1[1].RecursionCount;
      pvVar1 = param_1[1].OwningThread;
      pvVar2 = param_1[1].LockSemaphore;
      UVar3 = param_1[1].SpinCount;
      p_Var4 = param_1[2].DebugInfo;
      uStack_30._0_4_ = param_1[2].LockCount;
      uStack_30._4_4_ = param_1[2].RecursionCount;
      pvVar5 = param_1[2].OwningThread;
      pvVar6 = param_1[2].LockSemaphore;
      lVar7 = *param_2;
      pvVar8 = (HANDLE)param_2[1];
      pvVar9 = (HANDLE)param_2[2];
      UVar10 = param_2[3];
      p_Var11 = (PRTL_CRITICAL_SECTION_DEBUG)param_2[4];
      lVar12 = param_2[5];
      pvVar13 = (HANDLE)param_2[7];
      param_1[2].OwningThread = (HANDLE)param_2[6];
      param_1[2].LockSemaphore = pvVar13;
      param_1[2].DebugInfo = p_Var11;
      param_1[2].LockCount = (int)lVar12;
      param_1[2].RecursionCount = (int)((ulonglong)lVar12 >> 0x20);
      param_1[1].LockSemaphore = pvVar9;
      param_1[1].SpinCount = UVar10;
      param_1[1].LockCount = (int)lVar7;
      param_1[1].RecursionCount = (int)((ulonglong)lVar7 >> 0x20);
      param_1[1].OwningThread = pvVar8;
      uStack_50._0_4_ = SUB84(pvVar1,0);
      uStack_50._4_4_ = (undefined4)((ulonglong)pvVar1 >> 0x20);
      local_48._0_4_ = SUB84(pvVar2,0);
      local_48._4_4_ = (undefined4)((ulonglong)pvVar2 >> 0x20);
      uStack_40._0_4_ = (undefined4)UVar3;
      uStack_40._4_4_ = (undefined4)(UVar3 >> 0x20);
      local_38._0_4_ = SUB84(p_Var4,0);
      local_38._4_4_ = (undefined4)((ulonglong)p_Var4 >> 0x20);
      local_28._0_4_ = SUB84(pvVar5,0);
      local_28._4_4_ = (undefined4)((ulonglong)pvVar5 >> 0x20);
      uStack_20._0_4_ = SUB84(pvVar6,0);
      uStack_20._4_4_ = (undefined4)((ulonglong)pvVar6 >> 0x20);
      *(undefined4 *)(param_2 + 6) = (undefined4)local_28;
      *(undefined4 *)((longlong)param_2 + 0x34) = local_28._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_2 + 0x3c) = uStack_20._4_4_;
      *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)param_2 + 0x2c) = uStack_30._4_4_;
      *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
      *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
      *(undefined4 *)(param_2 + 3) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)param_2 + 0x1c) = uStack_40._4_4_;
      *(undefined4 *)param_2 = (undefined4)local_58;
      *(undefined4 *)((longlong)param_2 + 4) = local_58._4_4_;
      *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
      uStack_50 = pvVar1;
      local_48 = pvVar2;
      uStack_40 = UVar3;
      local_38 = p_Var4;
      local_28 = pvVar5;
      uStack_20 = pvVar6;
      if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
      }
      goto LAB_14702936b;
    }
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  if (*param_2 != 0) {
    plVar14 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar14 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar14 + 8))(plVar14);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_78);
  }
LAB_14702936b:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702939a FUN_14702939a body=29 status=ok
// SIG undefined FUN_14702939a(void)

void FUN_14702939a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1470293b8 FUN_1470293b8 body=52 status=ok
// SIG undefined FUN_1470293b8(void)

undefined8 * FUN_1470293b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_149fcd830;
  FUN_1470291de(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470293ec FUN_1470293ec body=150 status=ok
// SIG undefined FUN_1470293ec(void)

void FUN_1470293ec(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_1 + 0x60);
  puVar2 = *(undefined8 **)(param_1 + 0x68);
  local_20 = puVar2;
  if (puVar2 == (undefined8 *)0x0) {
    FUN_147029493(param_1,param_1 + 0x20,&local_28);
  }
  else {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
    FUN_147029493(param_1,param_1 + 0x20);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2);
        LOCK();
        piVar1 = (int *)((longlong)puVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147029493 FUN_147029493 body=112 status=ok
// SIG undefined FUN_147029493(void)

void FUN_147029493(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  lVar1 = *param_3;
  while ((*(byte *)(lVar1 + 0x78) & 1) == 0) {
    (**(code **)(**(longlong **)(lVar1 + 0x70) + 0x20))(*(longlong **)(lVar1 + 0x70),0xffffffff,0);
  }
  pcVar2 = (code *)*param_2;
  plVar4 = param_2 + 4;
  if ((longlong *)param_2[2] != (longlong *)0x0) {
    plVar4 = (longlong *)param_2[2];
  }
  uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
  (*pcVar2)(uVar3,lVar1 + 0x80);
  *(undefined4 *)(*param_1 + 0x80) = 0;
  FUN_140b576f0();
  return;
}



// FUNCTION 147029504 FUN_147029504 body=78 status=ok
// SIG undefined FUN_147029504(void)

longlong * FUN_147029504(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140843826(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 147029552 FUN_147029552 body=38 status=ok
// SIG undefined FUN_147029552(void)

undefined8 FUN_147029552(undefined8 param_1,int param_2)

{
  FUN_145ccfb14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147029578 FUN_147029578 body=68 status=ok
// SIG undefined FUN_147029578(void)

char FUN_147029578(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  
  if (param_3 == 0) {
    cVar1 = '\x01';
  }
  else {
    do {
      param_3 = param_3 + -1;
      cVar1 = FUN_147027b1f(param_1,param_2);
      if (cVar1 == '\0') {
        return '\0';
      }
      param_1 = param_1 + 0x20;
      param_2 = param_2 + 0x20;
    } while (param_3 != 0);
  }
  return cVar1;
}



// FUNCTION 1470295bc FUN_1470295bc body=153 status=ok
// SIG undefined FUN_1470295bc(void)

void FUN_1470295bc(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    if (DAT_14c872d28 == (longlong *)0x0) {
      uVar1 = 0x20;
    }
    else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e02];
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0x20,8);
    }
    uVar2 = 0x7fffffff;
    if (0 < (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 147029656 FUN_147029656 body=132 status=ok
// SIG undefined FUN_147029656(void)

void FUN_147029656(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1470296dc FUN_1470296dc body=168 status=ok
// SIG undefined FUN_1470296dc(void)

longlong * FUN_1470296dc(longlong *param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  
  *(undefined1 *)((longlong)param_1 + 0x1e) = param_2;
  *(byte *)((longlong)param_1 + 0x1f) = (*(byte *)((longlong)param_1 + 0x1f) & 2) + 1;
  lVar7 = FUN_14001cc68(0x20,8);
  *param_1 = lVar7;
  bVar2 = *(byte *)((longlong)param_1 + 0x1f);
  *(byte *)((longlong)param_1 + 0x1f) = bVar2 & 0xfd;
  uVar8 = (ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe);
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  puVar1 = (undefined4 *)(lVar7 + uVar8);
  *puVar1 = *param_3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar7 + 0x10 + uVar8) = 0;
  iVar3 = param_3[6];
  _Src = *(void **)(param_3 + 4);
  *(int *)(lVar7 + 0x18 + uVar8) = iVar3;
  if ((longlong)iVar3 == 0) {
    *(undefined4 *)(lVar7 + uVar8 + 0x1c) = 0;
  }
  else {
    puVar9 = (undefined8 *)(lVar7 + uVar8 + 0x10);
    FUN_1446dd670(puVar9,iVar3,0);
    memcpy((void *)*puVar9,_Src,(longlong)iVar3 * 2);
  }
  return param_1;
}



// FUNCTION 147029784 FUN_147029784 body=31 status=ok
// SIG undefined FUN_147029784(void)

undefined8 FUN_147029784(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1470297c0 FUN_1470297c0 body=93 status=ok
// SIG undefined FUN_1470297c0(void)

void FUN_1470297c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fcd8c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14702981e FUN_14702981e body=126 status=ok
// SIG undefined FUN_14702981e(void)

void FUN_14702981e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fcd8c0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014702988d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14702989c FUN_14702989c body=21 status=ok
// SIG undefined FUN_14702989c(void)

undefined8 FUN_14702989c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1470298b4 FUN_1470298b4 body=36 status=ok
// SIG undefined FUN_1470298b4(void)

void FUN_1470298b4(undefined8 param_1,uint param_2)

{
  FUN_1414cd37a();
  *(undefined8 *)(DAT_14c99e158 + (ulonglong)(param_2 & 0xff) * 8) = 0;
  return;
}



// FUNCTION 1470298f6 FUN_1470298f6 body=28 status=ok
// SIG undefined FUN_1470298f6(void)

undefined8 FUN_1470298f6(undefined8 param_1,undefined8 param_2)

{
  FUN_1470259be(param_2,param_1);
  return param_1;
}



// FUNCTION 14702992e FUN_14702992e body=78 status=ok
// SIG undefined FUN_14702992e(void)

undefined8 FUN_14702992e(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147025a3a(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702997e FUN_14702997e body=28 status=ok
// SIG undefined FUN_14702997e(void)

undefined8 FUN_14702997e(undefined8 param_1,undefined8 param_2)

{
  FUN_147025812(param_2,param_1);
  return param_1;
}



// FUNCTION 14702999a FUN_14702999a body=28 status=ok
// SIG undefined FUN_14702999a(void)

undefined8 FUN_14702999a(undefined8 param_1,undefined8 param_2)

{
  FUN_14702586c(param_2,param_1);
  return param_1;
}



// FUNCTION 1470299bc FUN_1470299bc body=78 status=ok
// SIG undefined FUN_1470299bc(void)

undefined8 FUN_1470299bc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_1470258fc(param_2,param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147029a0b FUN_147029a0b body=42 status=ok
// SIG undefined FUN_147029a0b(void)

undefined8 FUN_147029a0b(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_1411bde97(*(undefined8 *)(param_1 + 0x10),param_1,0,param_2,param_3);
  }
  return uVar1;
}



// FUNCTION 147029a36 FUN_147029a36 body=5 status=ok
// SIG undefined FUN_147029a36(void)

undefined8 FUN_147029a36(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



// FUNCTION 147029a3c FUN_147029a3c body=4 status=ok
// SIG undefined FUN_147029a3c(void)

undefined4 FUN_147029a3c(longlong param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



// FUNCTION 147029a40 FUN_147029a40 body=51 status=ok
// SIG undefined FUN_147029a40(void)

ulonglong * FUN_147029a40(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  *param_2 = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 147029a73 FUN_147029a73 body=673 status=ok
// SIG undefined FUN_147029a73(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_147029a73(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 *puVar9;
  longlong lVar10;
  size_t _Size;
  longlong lVar11;
  undefined1 *_Dst;
  longlong lVar12;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  puVar9 = auStack_68;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  iVar8 = (int)param_2[6];
  lVar11 = (longlong)iVar8;
  plVar7 = param_2 + 5;
  if (iVar8 == -1) {
    plVar7 = param_2 + 4;
  }
  lVar3 = param_2[1];
  local_58 = param_3;
  local_50 = param_1;
  if (iVar8 + 1 < (int)lVar3) {
    local_60 = *plVar7;
    lVar10 = lVar11 << 0x20;
    lVar12 = lVar11 * 0x20 + 0x38;
    do {
      lVar10 = lVar10 + 0x100000000;
      iVar8 = *(int *)(*param_2 + -0x10 + lVar12);
      plVar7 = *(longlong **)(*param_2 + lVar12);
      if (((ulonglong)plVar7 & 1) != 0) {
        if ((((ulonglong)plVar7 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
          FUN_1456cec3c((ulonglong)plVar7 & 0xfffffffffffffffe);
        }
        plVar7 = (longlong *)0x0;
      }
      cVar5 = (**(code **)(*plVar7 + 0x88))(plVar7);
      if (cVar5 != '\0') {
        if (iVar8 == -1) {
          iVar8 = 0;
        }
        if (iVar8 < (int)plVar7[6]) {
          if (lVar11 != -2) {
            lVar11 = *param_2;
            lVar10 = lVar10 >> 0x1b;
            iVar8 = *(int *)(lVar11 + 8 + lVar10);
            plVar7 = *(longlong **)(lVar11 + 0x18 + lVar10);
            if (((ulonglong)plVar7 & 1) != 0) {
              if ((((ulonglong)plVar7 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
                FUN_1456cec3c((ulonglong)plVar7 & 0xfffffffffffffffe);
              }
              plVar7 = (longlong *)0x0;
            }
            lVar3 = local_60;
            iVar6 = 0;
            if (iVar8 != -1) {
              iVar6 = iVar8;
            }
            lVar12 = (longlong)iVar6 * (longlong)*(int *)((longlong)plVar7 + 0x34) +
                     *(int *)((longlong)plVar7 + 0x44) + local_60;
            if (lVar12 != 0) {
              lVar11 = *(longlong *)(lVar11 + 0x10 + lVar10);
              iVar8 = *(int *)(lVar11 + 0x58);
              _Size = (size_t)iVar8;
              if (_Size == 0) {
                _Dst = (undefined1 *)0x0;
                puVar9 = auStack_68;
              }
              else {
                uVar1 = *(uint *)(lVar11 + 0x5c);
                if ((int)uVar1 < 0x11) {
                  uStack_70 = 0x147029c1d;
                  lVar11 = -(_Size + 0x1e & 0xfffffffffffffff0);
                  _Dst = auStack_68 + lVar11;
                  puVar9 = auStack_68 + lVar11;
                }
                else {
                  uStack_70 = 0x147029d11;
                  lVar11 = -((longlong)(int)(iVar8 + uVar1 + -1) + 0xfU & 0xfffffffffffffff0);
                  _Dst = (undefined1 *)
                         (-(longlong)(int)uVar1 &
                         (ulonglong)(auStack_68 + (ulonglong)uVar1 + lVar11 + -1));
                  puVar9 = auStack_68 + lVar11;
                }
              }
              *(undefined8 *)(puVar9 + -0x28) = 0x147029c36;
              memset(_Dst,0,_Size);
              if ((*(byte *)((longlong)plVar7 + 0x39) & 2) == 0) {
                pcVar2 = *(code **)(*plVar7 + 0x160);
                *(undefined8 *)(puVar9 + -0x28) = 0x147029c54;
                (*pcVar2)(plVar7,_Dst);
              }
              else {
                iVar8 = *(int *)((longlong)plVar7 + 0x34);
                lVar11 = plVar7[6];
                *(undefined8 *)(puVar9 + -0x28) = 0x147029c70;
                memset(_Dst,0,(longlong)(int)lVar11 * (longlong)iVar8);
              }
              pcVar2 = *(code **)(*plVar7 + 0xa0);
              *(undefined8 *)(puVar9 + -0x28) = 0x147029c8a;
              (*pcVar2)(plVar7,lVar3,_Dst);
              uVar4 = local_50;
              lVar12 = local_58 - lVar12;
              *(undefined8 *)(puVar9 + -0x28) = 0x147029ca8;
              FUN_142aeee9c(uVar4,param_2,_Dst + lVar12);
              if ((*(byte *)((longlong)plVar7 + 0x3c) & 0x10) == 0) {
                pcVar2 = *(code **)(*plVar7 + 0x148);
                *(undefined8 *)(puVar9 + -0x28) = 0x147029cc6;
                (*pcVar2)(plVar7,_Dst);
              }
            }
            if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              *(undefined **)(puVar9 + -0x28) = &UNK_147029cf4;
              FUN_144d8e3a0();
            }
            return;
          }
          break;
        }
      }
      lVar11 = lVar11 + 1;
      lVar12 = lVar12 + 0x20;
    } while ((int)lVar3 + -1 != (int)lVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_48 ^ (ulonglong)&local_48);
}



// FUNCTION 147029d3e FUN_147029d3e body=217 status=ok
// SIG undefined FUN_147029d3e(void)

longlong * FUN_147029d3e(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_88 [32];
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar5 = 0;
    do {
      iVar1 = *(int *)(lVar2 + 8 + lVar5);
      puVar6 = &DAT_149dfb77a;
      iVar4 = 0;
      if (iVar1 != 0) {
        puVar6 = *(undefined2 **)(lVar2 + lVar5);
        iVar4 = iVar1 + -1;
      }
      FUN_140e90204(local_68,iVar4,puVar6);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_140e90104(param_1,iVar1);
      }
      FUN_14702c9de((longlong)iVar1 * 0x20 + *param_1,local_68);
      lVar5 = lVar5 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147029e18 FUN_147029e18 body=72 status=ok
// SIG undefined FUN_147029e18(void)

undefined8 * FUN_147029e18(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 1) = 1;
  FUN_140e90104(0,0);
  FUN_14702acb0(*param_1,param_2);
  return param_1;
}



// FUNCTION 147029e60 FUN_147029e60 body=15 status=ok
// SIG undefined FUN_147029e60(void)

longlong FUN_147029e60(longlong *param_1)

{
  return (longlong)((int)param_1[1] + -1) * 0x20 + *param_1;
}



// FUNCTION 147029e70 FUN_147029e70 body=5 status=ok
// SIG undefined FUN_147029e70(void)

void FUN_147029e70(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 147029e76 FUN_147029e76 body=47 status=ok
// SIG undefined FUN_147029e76(void)

void FUN_147029e76(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x18) = param_2;
  return;
}



// FUNCTION 147029ea6 FUN_147029ea6 body=37 status=ok
// SIG undefined FUN_147029ea6(void)

bool FUN_147029ea6(longlong param_1)

{
  bool bVar1;
  
  if ((*(char *)(param_1 + 0x34) == '\x01') && (*(longlong *)(param_1 + 0x20) != 0)) {
    bVar1 = true;
    if (*(longlong *)(param_1 + 0x18) == 0) {
      bVar1 = *(longlong *)(param_1 + 0x10) != 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



// FUNCTION 147029ecc FUN_147029ecc body=5 status=ok
// SIG undefined FUN_147029ecc(void)

undefined8 FUN_147029ecc(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



// FUNCTION 147029ed2 FUN_147029ed2 body=5 status=ok
// SIG undefined FUN_147029ed2(void)

undefined8 FUN_147029ed2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 147029ed8 FUN_147029ed8 body=304 status=ok
// SIG undefined FUN_147029ed8(void)

undefined8 * FUN_147029ed8(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < (int)param_1[1]) {
    lVar3 = 8;
    lVar4 = 0;
    do {
      lVar1 = *param_1;
      local_60 = *(undefined8 *)(lVar1 + -8 + lVar3);
      FUN_1400021e4(&local_60,&local_58);
      iVar2 = local_50 + -1;
      if (local_50 == 0) {
        iVar2 = 0;
      }
      FUN_1400020e8(param_2,local_58,iVar2);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (*(int *)(lVar1 + lVar3) != -1) {
        FUN_140002266(&local_58,L"[%d]");
        iVar2 = local_50 + -1;
        if (local_50 == 0) {
          iVar2 = 0;
        }
        FUN_1400020e8(param_2,local_58,iVar2);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      iVar2 = (int)param_1[1];
      if (lVar4 < (longlong)iVar2 + -1) {
        FUN_1400020e8(param_2,&DAT_149e0635c,1);
        iVar2 = (int)param_1[1];
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x20;
    } while (lVar4 < iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a038 FUN_14702a038 body=124 status=ok
// SIG undefined FUN_14702a038(void)

void FUN_14702a038(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x179) = 1;
  FUN_14702a2fe(local_78,param_1 + 0x50);
  FUN_14702a0b6(param_3,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a0b6 FUN_14702a0b6 body=115 status=ok
// SIG undefined FUN_14702a0b6(void)

longlong FUN_14702a0b6(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  FUN_144a787a6(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  lVar4 = *(longlong *)(param_2 + 0x58);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x58);
    }
  }
  *(longlong *)(param_1 + 0x58) = lVar4;
  return param_1;
}



// FUNCTION 14702a176 FUN_14702a176 body=160 status=ok
// SIG undefined FUN_14702a176(void)

void FUN_14702a176(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined1 *)(param_1 + 0x178) = 1;
  *(undefined4 *)(param_1 + 0x48) = local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a218 FUN_14702a218 body=229 status=ok
// SIG undefined FUN_14702a218(void)

void FUN_14702a218(longlong param_1,longlong param_2)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [96];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145abcf84(local_80);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14702a2fe(local_e0,local_80);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0x50,local_e0);
  FUN_145c34a8e(local_e0);
  FUN_145c34a8e(local_80);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a2fe FUN_14702a2fe body=257 status=ok
// SIG undefined FUN_14702a2fe(void)

undefined8 * FUN_14702a2fe(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *param_1 = &PTR_FUN_149fcfbd0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  param_1[6] = &PTR_FUN_149fcfa50;
  uVar4 = *(undefined4 *)(param_2 + 0x3c);
  uVar5 = *(undefined4 *)(param_2 + 0x40);
  uVar6 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar6;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 0x50);
  pvVar2 = *(void **)(param_2 + 0x48);
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  lVar3 = *(longlong *)(param_2 + 0x58);
  param_1[0xb] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14702a400 FUN_14702a400 body=232 status=ok
// SIG undefined FUN_14702a400(void)

void FUN_14702a400(longlong param_1,longlong param_2)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [96];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145abcf84(local_80);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14702a2fe(local_e0,local_80);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0x110,local_e0);
  FUN_145c34a8e(local_e0);
  FUN_145c34a8e(local_80);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a4ea FUN_14702a4ea body=232 status=ok
// SIG undefined FUN_14702a4ea(void)

void FUN_14702a4ea(longlong param_1,longlong param_2)

{
  undefined1 auStack_108 [40];
  undefined1 local_e0 [96];
  undefined1 local_80 [96];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_145abcf84(local_80);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14702a2fe(local_e0,local_80);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0xb0,local_e0);
  FUN_145c34a8e(local_e0);
  FUN_145c34a8e(local_80);
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a5f8 FUN_14702a5f8 body=108 status=ok
// SIG undefined FUN_14702a5f8(void)

void FUN_14702a5f8(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x179) = 1;
  FUN_14702a2fe(local_78,param_1 + 0x50);
  FUN_14702a0b6(param_2,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a666 FUN_14702a666 body=108 status=ok
// SIG undefined FUN_14702a666(void)

void FUN_14702a666(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14702a2fe(local_78);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0x50,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a6d4 FUN_14702a6d4 body=111 status=ok
// SIG undefined FUN_14702a6d4(void)

void FUN_14702a6d4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x179) = 1;
  FUN_14702a2fe(local_78,param_1 + 0xb0);
  FUN_14702a0b6(param_2,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a744 FUN_14702a744 body=111 status=ok
// SIG undefined FUN_14702a744(void)

void FUN_14702a744(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14702a2fe(local_78);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0xb0,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a7b4 FUN_14702a7b4 body=111 status=ok
// SIG undefined FUN_14702a7b4(void)

void FUN_14702a7b4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)(param_1 + 0x179) = 1;
  FUN_14702a2fe(local_78,param_1 + 0x110);
  FUN_14702a0b6(param_2,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a824 FUN_14702a824 body=111 status=ok
// SIG undefined FUN_14702a824(void)

void FUN_14702a824(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14702a2fe(local_78);
  *(undefined1 *)(param_1 + 0x178) = 1;
  FUN_14702a0b6(param_1 + 0x110,local_78);
  FUN_145c34a8e(local_78);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a8d4 FUN_14702a8d4 body=81 status=ok
// SIG undefined FUN_14702a8d4(void)

void FUN_14702a8d4(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(param_3 + 0x10);
  if (lVar1 != 0) {
    *(undefined8 *)(param_3 + 0x10) = 0;
    FUN_14105c69e(param_3,local_10,lVar1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702a932 FUN_14702a932 body=54 status=ok
// SIG undefined FUN_14702a932(void)

undefined1 FUN_14702a932(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702aa30(param_2,param_3);
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
  }
  return 1;
}



// FUNCTION 14702a990 FUN_14702a990 body=59 status=ok
// SIG undefined FUN_14702a990(void)

undefined8 FUN_14702a990(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702aa30 FUN_14702aa30 body=104 status=ok
// SIG undefined FUN_14702aa30(void)

undefined8 * FUN_14702aa30(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar2 = param_2[2];
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  if ((((uVar1 & 1) != 0) && ((uVar1 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14702aaf2 FUN_14702aaf2 body=54 status=ok
// SIG undefined FUN_14702aaf2(void)

undefined1 FUN_14702aaf2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702ac0a(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 14702ab50 FUN_14702ab50 body=59 status=ok
// SIG undefined FUN_14702ab50(void)

undefined8 FUN_14702ab50(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702ab96 FUN_14702ab96 body=37 status=ok
// SIG undefined FUN_14702ab96(void)

void FUN_14702ab96(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[7] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 7) = 0;
  }
  return;
}



// FUNCTION 14702ac0a FUN_14702ac0a body=86 status=ok
// SIG undefined FUN_14702ac0a(void)

longlong FUN_14702ac0a(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_14702ac60();
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (DAT_14c950c29 == '\x01') {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x18);
    }
  }
  *(longlong *)(param_1 + 0x18) = lVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  return param_1;
}



// FUNCTION 14702ac60 FUN_14702ac60 body=79 status=ok
// SIG undefined FUN_14702ac60(void)

undefined8 * FUN_14702ac60(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140d87dac(param_1,iVar1);
      FUN_140d87d23(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14702acb0 FUN_14702acb0 body=100 status=ok
// SIG undefined FUN_14702acb0(void)

undefined8 * FUN_14702acb0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14702ad16 FUN_14702ad16 body=34 status=ok
// SIG undefined FUN_14702ad16(void)

undefined8 FUN_14702ad16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14702ad44 FUN_14702ad44 body=463 status=ok
// SIG undefined FUN_14702ad44(void)

undefined8 FUN_14702ad44(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = (longlong)((int)param_2[1] + -1) * 0x20;
  uVar8 = *(uint *)(*param_2 + 8 + lVar4);
  uVar2 = *(ulonglong *)(*param_2 + 0x18 + lVar4);
  local_38 = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar5 = FUN_1446e6bbc();
  cVar3 = FUN_1400164de(&local_38,uVar5);
  if ((cVar3 == '\0') || (uVar2 == 0)) {
    lVar4 = FUN_140010bca();
    if (((uVar2 & 1) == 0) ||
       (puVar6 = (ulonglong *)(uVar2 & 0xfffffffffffffffe), puVar6 == (ulonglong *)0x0)) {
LAB_14702ae48:
      uVar5 = FUN_1446ddbd2();
      cVar3 = FUN_1400164de(&local_38,uVar5);
      uVar5 = 0;
      if ((cVar3 == '\0') || (uVar2 == 0)) goto LAB_14702aec1;
      uVar5 = 0;
      if ((ulonglong)uVar8 == 0xffffffff) {
        uVar8 = 0;
      }
      if (*(int *)(uVar2 + 0x30) <= (int)uVar8) goto LAB_14702aec1;
      puVar6 = (ulonglong *)
               (param_1 + *(int *)(uVar2 + 0x44) +
               (longlong)(int)uVar8 * (longlong)*(int *)(uVar2 + 0x34));
      goto joined_r0x00014702aea3;
    }
    if ((*(int *)(puVar6[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(puVar6[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) goto LAB_14702ae48;
    lVar4 = 0x18;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(puVar6);
    }
LAB_14702aebb:
    *(ulonglong **)((longlong)param_2 + lVar4) = puVar6;
    uVar5 = 1;
  }
  else {
    puVar6 = (ulonglong *)(param_1 + *(int *)(uVar2 + 0x44));
    if (uVar8 == 0xffffffff) {
joined_r0x00014702aea3:
      lVar4 = 0x10;
      if (puVar6 != (ulonglong *)0x0) goto LAB_14702aebb;
    }
    else {
      bVar1 = *(byte *)(uVar2 + 0x70);
      (**(code **)(**(longlong **)(uVar2 + 0x78) + 0x178))();
      if ((-1 < (int)uVar8) && ((int)uVar8 < (int)puVar6[1])) {
        if ((bVar1 & 1) == 0) {
          uVar7 = *puVar6;
        }
        else {
          uVar7 = *puVar6;
          if ((uVar7 & 1) != 0) {
            uVar7 = (longlong)puVar6 + ((longlong)uVar7 >> 0x18);
          }
        }
        puVar6 = (ulonglong *)
                 (uVar7 + (longlong)*(int *)(*(longlong *)(uVar2 + 0x78) + 0x34) * (ulonglong)uVar8)
        ;
        goto joined_r0x00014702aea3;
      }
    }
    uVar5 = 0;
  }
LAB_14702aec1:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702af14 FUN_14702af14 body=34 status=ok
// SIG undefined FUN_14702af14(void)

undefined8 FUN_14702af14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 14702af3c FUN_14702af3c body=610 status=ok
// SIG undefined FUN_14702af3c(void)

undefined8 FUN_14702af3c(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined7 uVar9;
  longlong *plVar10;
  byte bVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = *(undefined8 *)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  lVar6 = (longlong)((int)param_3[1] + -1) * 0x20;
  uVar14 = *(uint *)(*param_3 + 8 + lVar6);
  plVar10 = *(longlong **)(*param_3 + 0x18 + lVar6);
  local_40 = plVar10;
  if (((((ulonglong)plVar10 & 1) != 0) && (((ulonglong)plVar10 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar7 = FUN_1446e6bbc();
  cVar4 = FUN_1400164de(&local_40,uVar7);
  bVar11 = (byte)uVar7;
  if ((cVar4 == '\0') || (plVar10 == (longlong *)0x0)) {
    lVar6 = FUN_140010bca();
    if ((((ulonglong)plVar10 & 1) != 0) && (((ulonglong)plVar10 & 0xfffffffffffffffe) != 0)) {
      lVar3 = *(longlong *)(((ulonglong)plVar10 & 0xfffffffffffffffe) + 0x10);
      if (((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
           lVar6 + 0x30)) && (&DAT_00000001 < plVar10)) {
        bVar11 = 0;
        bVar5 = 1;
        uVar9 = (int7)((ulonglong)(lVar6 + 0x30) >> 8);
        goto LAB_14702b04e;
      }
    }
    uVar7 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_40,uVar7);
    bVar11 = 1;
    bVar5 = 0;
    uVar9 = 0;
    if ((cVar4 == '\0') || (uVar9 = 0, plVar10 == (longlong *)0x0)) goto LAB_14702b04e;
    bVar5 = 0;
    uVar9 = 0;
    if ((ulonglong)uVar14 == 0xffffffff) {
      uVar14 = 0;
    }
    if ((int)plVar10[6] <= (int)uVar14) goto LAB_14702b04e;
    param_2 = (longlong)(int)uVar14 * (longlong)*(int *)((longlong)plVar10 + 0x34) +
              param_2 + *(int *)((longlong)plVar10 + 0x44);
    if (param_2 == 0) goto LAB_14702b12b;
    *puVar2 = plVar10;
    lVar6 = *plVar10;
LAB_14702b03e:
    uVar7 = 0;
  }
  else {
    puVar12 = (ulonglong *)(*(int *)((longlong)plVar10 + 0x44) + param_2);
    if (uVar14 != 0xffffffff) {
      bVar11 = *(byte *)(plVar10 + 0xe);
      (**(code **)(*(longlong *)plVar10[0xf] + 0x178))();
      if (((int)uVar14 < 0) || ((int)puVar12[1] <= (int)uVar14)) {
LAB_14702b12b:
        bVar11 = 1;
        bVar5 = 0;
        uVar9 = 0;
        goto LAB_14702b04e;
      }
      plVar10 = (longlong *)plVar10[0xf];
      iVar1 = *(int *)((longlong)plVar10 + 0x34);
      *puVar2 = plVar10;
      if ((int)puVar12[1] == 0) {
        param_2 = 0;
      }
      else {
        if ((bVar11 & 1) == 0) {
          uVar13 = *puVar12;
        }
        else {
          uVar13 = *puVar12;
          if ((uVar13 & 1) != 0) {
            uVar13 = (longlong)puVar12 + ((longlong)uVar13 >> 0x18);
          }
        }
        param_2 = (longlong)iVar1 * (ulonglong)uVar14 + uVar13;
      }
      lVar6 = *plVar10;
      goto LAB_14702b03e;
    }
    if (puVar12 == (ulonglong *)0x0) {
      bVar5 = 0;
      uVar9 = 0;
      goto LAB_14702b04e;
    }
    *puVar2 = plVar10;
    lVar6 = *plVar10;
    uVar7 = 1;
  }
  local_50 = 0;
  local_58 = 0;
  uStack_60 = 0;
  local_68 = 0;
  uVar8 = (**(code **)(lVar6 + 0xf0))(plVar10,uVar8,param_2,uVar7);
  bVar5 = 1;
  bVar11 = 1;
  uVar9 = (int7)((ulonglong)uVar8 >> 8);
LAB_14702b04e:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar9,bVar5 & bVar11);
}



// FUNCTION 14702b1a0 FUN_14702b1a0 body=34 status=ok
// SIG undefined FUN_14702b1a0(void)

undefined8 FUN_14702b1a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 14702b1c8 FUN_14702b1c8 body=718 status=ok
// SIG undefined FUN_14702b1c8(void)

ulonglong FUN_14702b1c8(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong **pplVar8;
  longlong *plVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  undefined7 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  undefined2 *puVar16;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar5 = (longlong)((int)param_3[1] + -1) * 0x20;
  uVar13 = *(uint *)(*param_3 + 8 + lVar5);
  plVar9 = *(longlong **)(*param_3 + 0x18 + lVar5);
  local_48 = plVar9;
  if (((((ulonglong)plVar9 & 1) != 0) && (((ulonglong)plVar9 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar6 = FUN_1446e6bbc();
  pplVar8 = &local_48;
  cVar4 = FUN_1400164de(pplVar8,uVar6);
  uVar6 = DAT_14c872be8;
  bVar7 = (byte)pplVar8;
  uVar11 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((cVar4 == '\0') || (plVar9 == (longlong *)0x0)) {
    lVar5 = FUN_140010bca();
    if ((((ulonglong)plVar9 & 1) != 0) && (((ulonglong)plVar9 & 0xfffffffffffffffe) != 0)) {
      lVar3 = *(longlong *)(((ulonglong)plVar9 & 0xfffffffffffffffe) + 0x10);
      if (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
           lVar5 + 0x30)) && (&DAT_00000001 < plVar9)) {
        bVar7 = 0;
        bVar10 = 1;
        goto LAB_14702b431;
      }
    }
    uVar6 = FUN_1446ddbd2();
    cVar4 = FUN_1400164de(&local_48,uVar6);
    uVar6 = DAT_14c872be8;
    bVar7 = 1;
    uVar11 = 0;
    bVar10 = 0;
    if ((cVar4 == '\0') || (bVar10 = 0, plVar9 == (longlong *)0x0)) goto LAB_14702b431;
    bVar10 = 0;
    uVar11 = 0;
    if ((ulonglong)uVar13 == 0xffffffff) {
      uVar13 = 0;
    }
    if ((int)plVar9[6] <= (int)uVar13) goto LAB_14702b431;
    param_2 = (longlong)(int)uVar13 * (longlong)*(int *)((longlong)plVar9 + 0x34) +
              param_2 + *(int *)((longlong)plVar9 + 0x44);
    if (param_2 != 0) {
      if (*(int *)(puVar2 + 1) == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      else {
        puVar16 = (undefined2 *)*puVar2;
      }
      cVar4 = FUN_140d50488(plVar9,0,DAT_14c872be8);
      uVar11 = 0;
      if ((cVar4 != '\0') && (puVar16 != (undefined2 *)0x0)) goto LAB_14702b404;
      goto LAB_14702b42f;
    }
LAB_14702b350:
    bVar7 = 1;
    uVar11 = 0;
    bVar10 = 0;
  }
  else {
    puVar14 = (ulonglong *)(*(int *)((longlong)plVar9 + 0x44) + param_2);
    if (uVar13 == 0xffffffff) {
      if (puVar14 == (ulonglong *)0x0) {
        uVar11 = 0;
        bVar10 = 0;
        goto LAB_14702b431;
      }
      if (*(int *)(puVar2 + 1) == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      else {
        puVar16 = (undefined2 *)*puVar2;
      }
      cVar4 = FUN_140d50488(plVar9,0,DAT_14c872be8);
      if ((cVar4 != '\0') && (puVar16 != (undefined2 *)0x0)) {
        lVar5 = *plVar9;
        local_58 = uVar6;
        uVar12 = 1;
        goto LAB_14702b429;
      }
    }
    else {
      bVar7 = *(byte *)(plVar9 + 0xe);
      (**(code **)(*(longlong *)plVar9[0xf] + 0x178))();
      uVar6 = DAT_14c872be8;
      if (((int)uVar13 < 0) || ((int)puVar14[1] <= (int)uVar13)) goto LAB_14702b350;
      if ((bVar7 & 1) == 0) {
        uVar15 = *puVar14;
      }
      else {
        uVar15 = *puVar14;
        if ((uVar15 & 1) != 0) {
          uVar15 = (longlong)puVar14 + ((longlong)uVar15 >> 0x18);
        }
      }
      plVar9 = (longlong *)plVar9[0xf];
      if (*(int *)(puVar2 + 1) == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      else {
        puVar16 = (undefined2 *)*puVar2;
      }
      iVar1 = *(int *)((longlong)plVar9 + 0x34);
      cVar4 = FUN_140d50488(plVar9,0,DAT_14c872be8);
      if ((cVar4 != '\0') && (puVar16 != (undefined2 *)0x0)) {
        param_2 = uVar15 + (longlong)iVar1 * (ulonglong)uVar13;
LAB_14702b404:
        lVar5 = *plVar9;
        uVar12 = 0;
        local_58 = uVar6;
LAB_14702b429:
        local_60 = 0x8000000;
        local_68 = 0;
        (**(code **)(lVar5 + 0xf8))(plVar9,puVar16,param_2,uVar12);
      }
    }
LAB_14702b42f:
    bVar7 = 1;
    bVar10 = 1;
  }
LAB_14702b431:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar11,bVar10 & bVar7) & 0xffffffff;
}



// FUNCTION 14702b500 FUN_14702b500 body=59 status=ok
// SIG undefined FUN_14702b500(void)

undefined8 FUN_14702b500(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702b5a0 FUN_14702b5a0 body=34 status=ok
// SIG undefined FUN_14702b5a0(void)

undefined8 FUN_14702b5a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14702b658 FUN_14702b658 body=70 status=ok
// SIG undefined FUN_14702b658(void)

undefined1 FUN_14702b658(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x18;
    param_2 = param_2 + 0x18;
    do {
      uVar1 = *(undefined4 *)(param_3 + -0xc);
      uVar2 = *(undefined4 *)(param_3 + -8);
      uVar3 = *(undefined4 *)(param_3 + -4);
      *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_3 + -0x10);
      *(undefined4 *)(param_2 + -0xc) = uVar1;
      *(undefined4 *)(param_2 + -8) = uVar2;
      *(undefined4 *)(param_2 + -4) = uVar3;
      FUN_144a787a6(param_2,param_3);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14702b6c6 FUN_14702b6c6 body=59 status=ok
// SIG undefined FUN_14702b6c6(void)

undefined8 FUN_14702b6c6(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702b70c FUN_14702b70c body=34 status=ok
// SIG undefined FUN_14702b70c(void)

void FUN_14702b70c(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    FUN_145c34b5a(param_2);
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14702b77c FUN_14702b77c body=43 status=ok
// SIG undefined FUN_14702b77c(void)

undefined8 FUN_14702b77c(undefined8 param_1,int param_2)

{
  FUN_145c34b5a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14702b7f6 FUN_14702b7f6 body=54 status=ok
// SIG undefined FUN_14702b7f6(void)

undefined1 FUN_14702b7f6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702a0b6(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}



// FUNCTION 14702b854 FUN_14702b854 body=59 status=ok
// SIG undefined FUN_14702b854(void)

undefined8 FUN_14702b854(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702b89a FUN_14702b89a body=34 status=ok
// SIG undefined FUN_14702b89a(void)

void FUN_14702b89a(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x60) == '\x01') {
    FUN_145c34a8e(param_2);
    *(undefined1 *)(param_2 + 0x60) = 0;
  }
  return;
}



// FUNCTION 14702b90c FUN_14702b90c body=43 status=ok
// SIG undefined FUN_14702b90c(void)

undefined8 FUN_14702b90c(undefined8 param_1,int param_2)

{
  FUN_145c34a8e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x60);
  }
  return param_1;
}



// FUNCTION 14702b948 FUN_14702b948 body=34 status=ok
// SIG undefined FUN_14702b948(void)

void FUN_14702b948(undefined8 param_1,longlong param_2)

{
  FUN_145c34a8e(param_2 + 0x70);
  FUN_145c34a8e(param_2 + 0x10);
  return;
}



// FUNCTION 14702b980 FUN_14702b980 body=63 status=ok
// SIG undefined FUN_14702b980(void)

undefined1 FUN_14702b980(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14702beb6(param_2,param_3);
    param_3 = param_3 + 0xd0;
    param_2 = param_2 + 0xd0;
  }
  return 1;
}



// FUNCTION 14702b9e8 FUN_14702b9e8 body=59 status=ok
// SIG undefined FUN_14702b9e8(void)

undefined8 FUN_14702b9e8(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702ba34 FUN_14702ba34 body=50 status=ok
// SIG undefined FUN_14702ba34(void)

void FUN_14702ba34(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd0) == '\x01') {
    FUN_145c34a8e(param_2 + 0x70);
    FUN_145c34a8e(param_2 + 0x10);
    *(undefined1 *)(param_2 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 14702bab4 FUN_14702bab4 body=875 status=ok
// SIG undefined FUN_14702bab4(void)

longlong * FUN_14702bab4(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_145abcf84(param_1 + 2);
  FUN_145abcf84(param_1 + 0xe);
  uVar1 = FUN_1409ffe1d();
  lVar2 = FUN_14702be20(uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *param_1 = lVar2;
  uVar1 = FUN_1409ffe1d();
  lVar3 = FUN_14702be20(uVar1);
  lVar2 = *param_1;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(lVar2 + 0x170) = lVar3;
  uVar1 = FUN_1409ffe1d();
  lVar3 = FUN_14702be20(uVar1);
  lVar2 = *param_1;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(lVar2 + 0xa8) = lVar3;
  uVar1 = FUN_1409ffe1d();
  lVar3 = FUN_14702be20(uVar1);
  lVar2 = *param_1;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(lVar2 + 0x108) = lVar3;
  uVar1 = FUN_1409ffe1d();
  lVar3 = FUN_14702be20(uVar1);
  lVar2 = *param_1;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  *(longlong *)(lVar2 + 0x168) = lVar3;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145abcf84(&local_98);
  FUN_14702a0b6(param_1 + 2,&local_98);
  FUN_145c34a8e(&local_98);
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x101010100000001;
  FUN_1400b22c2(&local_98,"NewValue");
  if (param_1 + 5 == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 6) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 0x34) = uStack_90._4_4_;
  }
  *(undefined4 *)(param_1 + 7) = 0x3fc00000;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x54) = 1;
  *(undefined4 *)(param_1 + 4) = 0x3030303;
  FUN_1400b22c2(&local_98,"NewValue");
  if (param_1 + 0xb == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[0xb] != 0) {
      FUN_1400020a8();
    }
    param_1[0xb] = local_98;
    *(undefined4 *)(param_1 + 0xc) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)param_1 + 100) = uStack_90._4_4_;
  }
  *(undefined4 *)(param_1 + 9) = 0x3fc00000;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  FUN_145abcf84(&local_98);
  FUN_14702a0b6(param_1 + 0xe,&local_98);
  FUN_145c34a8e(&local_98);
  uVar1 = FUN_1409ffe1d();
  lVar2 = FUN_14702be20(uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[1] = lVar2;
  *(undefined1 *)(lVar2 + 0x28) = 1;
  *(undefined4 *)(param_1[1] + 0x30) = 1;
  *(undefined1 *)(param_1[1] + 0x29) = 1;
  *(undefined1 *)(param_1[1] + 0x2a) = 1;
  *(undefined1 *)(param_1[1] + 0x2b) = 1;
  *(undefined1 *)(param_1[1] + 0x2c) = 1;
  FUN_1400b22c2(&local_98,"NewValue");
  lVar2 = param_1[1];
  if ((longlong *)(lVar2 + 0x38) == &local_98) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar2 + 0x38) = local_98;
    *(undefined4 *)(lVar2 + 0x40) = (undefined4)uStack_90;
    *(undefined4 *)(lVar2 + 0x44) = uStack_90._4_4_;
  }
  *(undefined4 *)(param_1[1] + 0x48) = 0x3fc00000;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702be20 FUN_14702be20 body=148 status=ok
// SIG undefined FUN_14702be20(void)

undefined8 FUN_14702be20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_145892dd2();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702beb6 FUN_14702beb6 body=120 status=ok
// SIG undefined FUN_14702beb6(void)

longlong * FUN_14702beb6(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
    }
  }
  param_1[1] = lVar2;
  FUN_14702a0b6(param_1 + 2,param_2 + 2);
  FUN_14702a0b6(param_1 + 0xe,param_2 + 0xe);
  return param_1;
}



// FUNCTION 14702bf2f FUN_14702bf2f body=815 status=ok
// SIG undefined FUN_14702bf2f(void)

undefined8 FUN_14702bf2f(longlong param_1,longlong *param_2,ulonglong *param_3,void *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined7 uVar12;
  void *pvVar13;
  ulonglong *puVar14;
  void *_Src;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_88 [40];
  longlong local_60;
  ulonglong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = (longlong)((int)param_2[1] + -1) * 0x20;
  uVar2 = *(uint *)(*param_2 + 8 + lVar9);
  plVar4 = *(longlong **)(*param_2 + 0x18 + lVar9);
  local_50 = plVar4;
  if (((((ulonglong)plVar4 & 1) != 0) && (((ulonglong)plVar4 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar10 = FUN_1446e6bbc();
  cVar7 = FUN_1400164de(&local_50,uVar10);
  if ((cVar7 == '\0') || (plVar4 == (longlong *)0x0)) {
    lVar9 = FUN_140010bca();
    if ((((ulonglong)plVar4 & 1) != 0) &&
       (uVar15 = (ulonglong)plVar4 & 0xfffffffffffffffe, uVar15 != 0)) {
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(uVar15 + 0x10) + 0x38)) &&
         (lVar11 = lVar9 + 0x30,
         *(longlong *)
          (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
          ) == lVar11)) {
        if (DAT_14c950c29 == '\x01') {
          lVar11 = FUN_1456cec3c(uVar15);
        }
        param_2[3] = uVar15;
        uVar12 = (undefined7)((ulonglong)lVar11 >> 8);
        bVar8 = 1;
        param_3 = (ulonglong *)0x0;
        goto LAB_14702c0f1;
      }
    }
    uVar10 = FUN_1446ddbd2();
    cVar7 = FUN_1400164de(&local_50,uVar10);
    bVar8 = 0;
    uVar12 = 0;
    if ((cVar7 != '\0') && (bVar8 = 0, uVar12 = 0, plVar4 != (longlong *)0x0)) {
      uVar15 = FUN_14702c260(param_1,param_2,param_4,param_3);
      param_3 = (ulonglong *)(uVar15 & 0xffffffff);
      uVar12 = (undefined7)(uVar15 >> 8);
      bVar8 = 1;
    }
    goto LAB_14702c0f1;
  }
  if (uVar2 == 0xffffffff) {
    lVar9 = plVar4[1];
    lVar11 = FUN_144a810c6();
    if (*(ulonglong *)(lVar11 + 8) == 0) {
      bVar16 = lVar9 != 0;
      if (lVar9 != lVar11 && bVar16) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar16 = lVar9 != 0;
          if (lVar9 == lVar11) break;
        } while (lVar9 != 0);
      }
      if (bVar16) goto LAB_14702c157;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) {
LAB_14702c157:
      cVar7 = FUN_14702c389(plVar4);
      if (cVar7 != '\0') {
        pvVar13 = (void *)(longlong)*(int *)((longlong)plVar4 + 0x44);
        _Src = (void *)(param_1 + (longlong)pvVar13);
        if (_Src == (void *)0x0) {
          bVar8 = 0;
          uVar12 = 0;
        }
        else {
          param_2[2] = (longlong)_Src;
          if (_Src != param_4) {
            if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
              pvVar13 = (void *)(**(code **)(*plVar4 + 0x100))(plVar4,param_4,_Src,1);
            }
            else {
              pvVar13 = memcpy(param_4,_Src,(longlong)*(int *)((longlong)plVar4 + 0x34));
            }
          }
          *param_3 = (ulonglong)plVar4;
LAB_14702c223:
          uVar12 = (undefined7)((ulonglong)pvVar13 >> 8);
          bVar8 = 1;
        }
        param_3 = (ulonglong *)&DAT_00000001;
        goto LAB_14702c0f1;
      }
    }
    bVar8 = 0;
    uVar12 = 0;
  }
  else {
    iVar3 = *(int *)((longlong)plVar4 + 0x44);
    bVar1 = *(byte *)(plVar4 + 0xe);
    local_58 = param_3;
    (**(code **)(*(longlong *)plVar4[0xf] + 0x178))();
    param_3 = (ulonglong *)&DAT_00000001;
    if ((int)uVar2 < 0) goto LAB_14702c149;
    lVar9 = plVar4[0xf];
    bVar8 = 0;
    uVar12 = 0;
    if ((lVar9 == 0) || (puVar14 = (ulonglong *)(param_1 + iVar3), (int)puVar14[1] <= (int)uVar2))
    goto LAB_14702c0f1;
    local_60 = (longlong)*(int *)(lVar9 + 0x34);
    lVar9 = *(longlong *)(lVar9 + 8);
    lVar11 = FUN_144a810c6();
    if (*(ulonglong *)(lVar11 + 8) == 0) {
      bVar16 = lVar9 != 0;
      if (lVar9 != lVar11 && bVar16) {
        do {
          lVar9 = *(longlong *)(lVar9 + 0x30);
          bVar16 = lVar9 != 0;
          if (lVar9 == lVar11) break;
        } while (lVar9 != 0);
      }
      if (bVar16) goto LAB_14702c1ae;
    }
    else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) {
LAB_14702c1ae:
      cVar7 = FUN_14702c389(plVar4[0xf]);
      puVar6 = local_58;
      if ((cVar7 != '\0') && ((int)puVar14[1] != 0)) {
        if ((bVar1 & 1) == 0) {
          uVar15 = *puVar14;
        }
        else {
          uVar15 = *puVar14;
          if ((uVar15 & 1) != 0) {
            uVar15 = (longlong)puVar14 + ((longlong)uVar15 >> 0x18);
          }
        }
        pvVar13 = (void *)(local_60 * (ulonglong)uVar2 + uVar15);
        if (pvVar13 != (void *)0x0) {
          param_2[2] = (longlong)pvVar13;
          if (pvVar13 != param_4) {
            plVar5 = (longlong *)plVar4[0xf];
            if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
              (**(code **)(*plVar5 + 0x100))(plVar5,param_4,pvVar13,1);
            }
            else {
              memcpy(param_4,pvVar13,(longlong)*(int *)((longlong)plVar5 + 0x34));
            }
          }
          pvVar13 = (void *)plVar4[0xf];
          *puVar6 = (ulonglong)pvVar13;
          goto LAB_14702c223;
        }
      }
    }
LAB_14702c149:
    bVar8 = 0;
    uVar12 = 0;
  }
LAB_14702c0f1:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar8 & (byte)param_3);
}



// FUNCTION 14702c260 FUN_14702c260 body=297 status=ok
// SIG undefined FUN_14702c260(void)

undefined8 FUN_14702c260(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  lVar4 = (longlong)((int)param_2[1] + -1) * 0x20;
  plVar1 = *(longlong **)(*param_2 + 0x18 + lVar4);
  if (((ulonglong)plVar1 & 1) == 0) {
    if (plVar1 != (longlong *)0x0) {
      iVar5 = *(int *)(*param_2 + 8 + lVar4);
      lVar4 = plVar1[1];
      lVar3 = FUN_144a810c6();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar6) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar6 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        if (!bVar6) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
      if (iVar5 == -1) {
        iVar5 = 0;
      }
      cVar2 = FUN_14702c389(plVar1);
      if (cVar2 == '\0') {
        return 0;
      }
      if (iVar5 < (int)plVar1[6]) {
        cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
        if (cVar2 == '\0') {
          lVar4 = (longlong)iVar5 * (longlong)*(int *)((longlong)plVar1 + 0x34) +
                  param_1 + *(int *)((longlong)plVar1 + 0x44);
          if (lVar4 != 0) {
            param_2[2] = lVar4;
            FUN_147029a73(param_3,param_2);
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_1,param_3);
        }
        *param_4 = (ulonglong)plVar1;
        return 1;
      }
    }
  }
  else if ((((ulonglong)plVar1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c((ulonglong)plVar1 & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 14702c389 FUN_14702c389 body=113 status=ok
// SIG undefined FUN_14702c389(void)

bool FUN_14702c389(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar2 = FUN_14475a8dc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar4 = lVar3 != 0;
      if (lVar3 != lVar2 && bVar4) {
        do {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          bVar4 = lVar3 != 0;
          if (lVar3 == lVar2) break;
        } while (lVar3 != 0);
      }
      iVar1 = 1;
      if (bVar4) goto LAB_14702c3b9;
    }
    else {
      iVar1 = 1;
      if ((*(ulonglong *)(lVar3 + 0x18) & *(ulonglong *)(lVar2 + 8)) != 0) goto LAB_14702c3b9;
    }
  }
  iVar1 = 8;
LAB_14702c3b9:
  return *(int *)(param_1 + 0x34) == iVar1;
}



// FUNCTION 14702c3fa FUN_14702c3fa body=853 status=ok
// SIG undefined FUN_14702c3fa(void)

undefined8 FUN_14702c3fa(longlong param_1,longlong *param_2,ulonglong *param_3,void *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong *puVar6;
  char cVar7;
  byte bVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined7 uVar12;
  byte unaff_BPL;
  void *pvVar13;
  ulonglong *puVar14;
  void *_Src;
  ulonglong uVar15;
  bool bVar16;
  undefined1 auStack_88 [40];
  ulonglong *local_60;
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = (longlong)((int)param_2[1] + -1) * 0x20;
  uVar2 = *(uint *)(*param_2 + 8 + lVar9);
  plVar4 = *(longlong **)(*param_2 + 0x18 + lVar9);
  local_50 = plVar4;
  if (((((ulonglong)plVar4 & 1) != 0) && (((ulonglong)plVar4 & 0xfffffffffffffffe) != 0)) &&
     (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c();
  }
  uVar10 = FUN_1446e6bbc();
  cVar7 = FUN_1400164de(&local_50,uVar10);
  if ((cVar7 != '\0') && (plVar4 != (longlong *)0x0)) {
    local_60 = param_3;
    if (uVar2 == 0xffffffff) {
      lVar9 = plVar4[1];
      lVar11 = FUN_144a810c6();
      if (*(ulonglong *)(lVar11 + 8) == 0) {
        bVar16 = lVar9 != 0;
        if (lVar9 != lVar11 && bVar16) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar16 = lVar9 != 0;
            if (lVar9 == lVar11) break;
          } while (lVar9 != 0);
        }
        if (bVar16) goto LAB_14702c640;
      }
      else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) {
LAB_14702c640:
        cVar7 = FUN_14702c389(plVar4);
        puVar14 = local_60;
        if (cVar7 != '\0') {
          pvVar13 = (void *)(longlong)*(int *)((longlong)plVar4 + 0x44);
          _Src = (void *)(param_1 + (longlong)pvVar13);
          if (_Src == (void *)0x0) {
            bVar8 = 0;
            uVar12 = 0;
          }
          else {
            param_2[2] = (longlong)_Src;
            if (_Src != param_4) {
              if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
                pvVar13 = (void *)(**(code **)(*plVar4 + 0x100))(plVar4,param_4,_Src,1);
              }
              else {
                pvVar13 = memcpy(param_4,_Src,(longlong)*(int *)((longlong)plVar4 + 0x34));
              }
            }
            *puVar14 = (ulonglong)plVar4;
LAB_14702c70f:
            uVar12 = (undefined7)((ulonglong)pvVar13 >> 8);
            bVar8 = 1;
          }
          unaff_BPL = 1;
          goto LAB_14702c5aa;
        }
      }
      bVar8 = 0;
      uVar12 = 0;
    }
    else {
      iVar3 = *(int *)((longlong)plVar4 + 0x44);
      bVar1 = *(byte *)(plVar4 + 0xe);
      (**(code **)(*(longlong *)plVar4[0xf] + 0x178))();
      unaff_BPL = 1;
      if ((int)uVar2 < 0) goto LAB_14702c606;
      lVar9 = plVar4[0xf];
      bVar8 = 0;
      uVar12 = 0;
      if ((lVar9 == 0) || (puVar14 = (ulonglong *)(param_1 + iVar3), (int)puVar14[1] <= (int)uVar2))
      goto LAB_14702c5aa;
      local_58 = (longlong)*(int *)(lVar9 + 0x34);
      lVar9 = *(longlong *)(lVar9 + 8);
      lVar11 = FUN_144a810c6();
      if (*(ulonglong *)(lVar11 + 8) == 0) {
        bVar16 = lVar9 != 0;
        if (lVar9 != lVar11 && bVar16) {
          do {
            lVar9 = *(longlong *)(lVar9 + 0x30);
            bVar16 = lVar9 != 0;
            if (lVar9 == lVar11) break;
          } while (lVar9 != 0);
        }
        if (bVar16) goto LAB_14702c693;
      }
      else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar11 + 8)) != 0) {
LAB_14702c693:
        cVar7 = FUN_14702c389(plVar4[0xf]);
        puVar6 = local_60;
        if ((cVar7 != '\0') && ((int)puVar14[1] != 0)) {
          if ((bVar1 & 1) == 0) {
            uVar15 = *puVar14;
          }
          else {
            uVar15 = *puVar14;
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar14 + ((longlong)uVar15 >> 0x18);
            }
          }
          pvVar13 = (void *)(local_58 * (ulonglong)uVar2 + uVar15);
          if (pvVar13 != (void *)0x0) {
            param_2[2] = (longlong)pvVar13;
            if (pvVar13 != param_4) {
              plVar5 = (longlong *)plVar4[0xf];
              if ((*(byte *)((longlong)plVar5 + 0x3b) & 0x40) == 0) {
                (**(code **)(*plVar5 + 0x100))(plVar5,param_4,pvVar13,1);
              }
              else {
                memcpy(param_4,pvVar13,(longlong)*(int *)((longlong)plVar5 + 0x34));
              }
            }
            pvVar13 = (void *)plVar4[0xf];
            *puVar6 = (ulonglong)pvVar13;
            goto LAB_14702c70f;
          }
        }
      }
LAB_14702c606:
      bVar8 = 0;
      uVar12 = 0;
    }
    goto LAB_14702c5aa;
  }
  lVar9 = FUN_140010bca();
  if ((((ulonglong)plVar4 & 1) == 0) ||
     (uVar15 = (ulonglong)plVar4 & 0xfffffffffffffffe, uVar15 == 0)) {
LAB_14702c525:
    uVar10 = FUN_1446ddbd2();
    cVar7 = FUN_1400164de(&local_50,uVar10);
    bVar8 = 0;
    uVar12 = 0;
    if ((cVar7 == '\0') || (bVar8 = 0, uVar12 = 0, plVar4 == (longlong *)0x0)) goto LAB_14702c5aa;
    uVar10 = FUN_14702c8b4(param_1,param_2,param_4,param_3);
  }
  else {
    if ((*(int *)(*(longlong *)(uVar15 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
        != lVar9 + 0x30)) goto LAB_14702c525;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(uVar15);
    }
    param_2[3] = uVar15;
    uVar10 = FUN_14702c750(param_1,uVar15,param_4);
  }
  unaff_BPL = (byte)uVar10;
  uVar12 = (undefined7)((ulonglong)uVar10 >> 8);
  bVar8 = 1;
LAB_14702c5aa:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar12,bVar8 & unaff_BPL);
}



// FUNCTION 14702c750 FUN_14702c750 body=355 status=ok
// SIG undefined FUN_14702c750(void)

undefined8 FUN_14702c750(longlong *param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_2 + 0xb4) == '\x01') {
    if (param_2 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = *(longlong *)(param_2 + 0x50);
    }
    local_38 = 0xffffffff;
    local_34 = 0x101;
    local_32 = 0;
    local_48 = param_2;
    FUN_144a2daf0(&local_48);
    if (local_40 != 0) {
      do {
        if ((char)*(ulonglong *)(local_40 + 0x38) < '\0') {
          if ((*(ulonglong *)(local_40 + 0x38) & 0x500) != 0) {
            lVar5 = *(longlong *)(local_40 + 8);
            lVar3 = FUN_144a810c6();
            if (*(ulonglong *)(lVar3 + 8) == 0) {
              bVar6 = lVar5 != 0;
              if (lVar5 == lVar3 || !bVar6) goto LAB_14702c853;
              goto LAB_14702c83f;
            }
            if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) goto LAB_14702c857;
          }
          break;
        }
        local_40 = *(longlong *)(local_40 + 0x18);
        FUN_144a2daf0(&local_48);
      } while (local_40 != 0);
    }
  }
  goto LAB_14702c7e0;
  while (lVar5 != 0) {
LAB_14702c83f:
    lVar5 = *(longlong *)(lVar5 + 0x30);
    bVar6 = lVar5 != 0;
    if (lVar5 == lVar3) break;
  }
LAB_14702c853:
  if (bVar6) {
LAB_14702c857:
    cVar2 = FUN_14702c389();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)((longlong)param_1 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
        (**(code **)(*param_1 + 0x248))(param_1,param_2,param_3);
        uVar4 = 1;
        goto LAB_14702c7e2;
      }
    }
  }
LAB_14702c7e0:
  uVar4 = 0;
LAB_14702c7e2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14702c8b4 FUN_14702c8b4 body=297 status=ok
// SIG undefined FUN_14702c8b4(void)

undefined8 FUN_14702c8b4(longlong param_1,longlong *param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  lVar4 = (longlong)((int)param_2[1] + -1) * 0x20;
  plVar1 = *(longlong **)(*param_2 + 0x18 + lVar4);
  if (((ulonglong)plVar1 & 1) == 0) {
    if (plVar1 != (longlong *)0x0) {
      iVar5 = *(int *)(*param_2 + 8 + lVar4);
      lVar4 = plVar1[1];
      lVar3 = FUN_144a810c6();
      if (*(ulonglong *)(lVar3 + 8) == 0) {
        bVar6 = lVar4 != 0;
        if (lVar4 != lVar3 && bVar6) {
          do {
            lVar4 = *(longlong *)(lVar4 + 0x30);
            bVar6 = lVar4 != 0;
            if (lVar4 == lVar3) break;
          } while (lVar4 != 0);
        }
        if (!bVar6) {
          return 0;
        }
      }
      else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar3 + 8)) == 0) {
        return 0;
      }
      if (iVar5 == -1) {
        iVar5 = 0;
      }
      cVar2 = FUN_14702c389(plVar1);
      if (cVar2 == '\0') {
        return 0;
      }
      if (iVar5 < (int)plVar1[6]) {
        cVar2 = (**(code **)(*plVar1 + 0x88))(plVar1);
        if (cVar2 == '\0') {
          lVar4 = (longlong)iVar5 * (longlong)*(int *)((longlong)plVar1 + 0x34) +
                  param_1 + *(int *)((longlong)plVar1 + 0x44);
          if (lVar4 != 0) {
            param_2[2] = lVar4;
            FUN_147029a73(param_3,param_2);
          }
        }
        else {
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_1,param_3);
        }
        *param_4 = (ulonglong)plVar1;
        return 1;
      }
    }
  }
  else if ((((ulonglong)plVar1 & 0xfffffffffffffffe) != 0) && (DAT_14c950c29 == '\x01')) {
    FUN_1456cec3c((ulonglong)plVar1 & 0xfffffffffffffffe);
  }
  return 0;
}



// FUNCTION 14702c9de FUN_14702c9de body=100 status=ok
// SIG undefined FUN_14702c9de(void)

undefined8 * FUN_14702c9de(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  if ((((uVar2 & 1) != 0) && ((uVar2 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == 1)) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 14702ca42 FUN_14702ca42 body=29 status=ok
// SIG undefined FUN_14702ca42(void)

void FUN_14702ca42(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_149fcfdc0;
  return;
}



// FUNCTION 14702ca60 FUN_14702ca60 body=36 status=ok
// SIG undefined FUN_14702ca60(void)

undefined8 FUN_14702ca60(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14702caa0 FUN_14702caa0 body=93 status=ok
// SIG undefined FUN_14702caa0(void)

void FUN_14702caa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_149fcfd50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14702cafe FUN_14702cafe body=123 status=ok
// SIG undefined FUN_14702cafe(void)

void FUN_14702cafe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_149fcfd50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14702cb86 FUN_14702cb86 body=21 status=ok
// SIG undefined FUN_14702cb86(void)

undefined8 FUN_14702cb86(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14702cb9c FUN_14702cb9c body=34 status=ok
// SIG undefined FUN_14702cb9c(void)

undefined8 FUN_14702cb9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14702cbc1 src_new body=247 status=ok
// SIG undefined src_new(void)

undefined8 * src_new(undefined4 param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  
                    /* 0x702cbc1  855  src_new */
  if (param_3 == (undefined4 *)0x0) {
    if (param_2 < 1) {
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x68,0);
    if (puVar2 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
  }
  else {
    *param_3 = 0;
    if (param_2 < 1) {
      *param_3 = 0xb;
      return (undefined8 *)0x0;
    }
    puVar2 = (undefined8 *)FUN_14001cc68(0x68,0);
    if (puVar2 == (undefined8 *)0x0) {
      *param_3 = 1;
      return (undefined8 *)0x0;
    }
  }
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[0xc] = 0;
  *(int *)((longlong)puVar2 + 0x14) = param_2;
  iVar1 = FUN_14702d504(puVar2,param_1);
  if (((iVar1 != 0) && (iVar1 = FUN_14702d6f0(puVar2,param_1), iVar1 != 0)) &&
     (iVar1 = FUN_14702d465(puVar2,param_1), iVar1 != 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 10;
    }
    FUN_1400020a8(puVar2);
    return (undefined8 *)0x0;
  }
  if ((code *)puVar2[7] != (code *)0x0) {
    (*(code *)puVar2[7])(puVar2);
  }
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0xb) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  return puVar2;
}



// FUNCTION 14702ccb8 src_reset body=62 status=ok
// SIG undefined src_reset(void)

undefined8 src_reset(undefined8 *param_1)

{
  undefined8 uVar1;
  
                    /* 0x702ccb8  857  src_reset */
  if (param_1 == (undefined8 *)0x0) {
    uVar1 = 2;
  }
  else {
    if ((code *)param_1[7] != (code *)0x0) {
      (*(code *)param_1[7])(param_1);
    }
    param_1[0xc] = 0;
    uVar1 = 0;
    *(undefined4 *)(param_1 + 0xb) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  return uVar1;
}



// FUNCTION 14702ccf6 src_clone body=129 status=ok
// SIG undefined src_clone(void)

void * src_clone(void *param_1,int *param_2)

{
  int iVar1;
  void *_Dst;
  
                    /* 0x702ccf6  844  src_clone */
  if (param_2 == (int *)0x0) {
    _Dst = (void *)FUN_14001cc68(0x68,0);
    if (_Dst == (void *)0x0) {
      return (void *)0x0;
    }
  }
  else {
    *param_2 = 0;
    _Dst = (void *)FUN_14001cc68(0x68,0);
    if (_Dst == (void *)0x0) {
      *param_2 = 1;
      return (void *)0x0;
    }
  }
  memcpy(_Dst,param_1,0x68);
  iVar1 = (**(code **)((longlong)param_1 + 0x40))(param_1,_Dst);
  if (iVar1 != 0) {
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
    FUN_1400020a8(_Dst);
    return (void *)0x0;
  }
  return _Dst;
}



// FUNCTION 14702cd77 src_callback_new body=131 status=ok
// SIG undefined src_callback_new(void)

undefined8 *
src_callback_new(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                undefined8 param_5)

{
  undefined8 *puVar1;
  
                    /* 0x702cd77  842  src_callback_new */
  if (param_1 == 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0x11;
    }
  }
  else {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
    puVar1 = (undefined8 *)src_new(param_2,param_3,param_4);
    if (puVar1 != (undefined8 *)0x0) {
      if ((code *)puVar1[7] != (code *)0x0) {
        (*(code *)puVar1[7])(puVar1);
      }
      puVar1[0xc] = 0;
      *(undefined4 *)(puVar1 + 0xb) = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 *)(puVar1 + 2) = 0;
      *(undefined4 *)(puVar1 + 3) = 1;
      puVar1[9] = param_1;
      puVar1[10] = param_5;
      return puVar1;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14702cdfa src_delete body=77 status=ok
// SIG undefined src_delete(void)

undefined8 src_delete(undefined8 *param_1)

{
                    /* 0x702cdfa  845  src_delete */
  if (param_1 != (undefined8 *)0x0) {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0xc] = 0;
    FUN_1400020a8(param_1);
  }
  return 0;
}



// FUNCTION 14702ce47 src_process body=310 status=ok
// SIG undefined src_process(void)

undefined8 src_process(double *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
                    /* 0x702ce47  856  src_process */
  if (param_1 == (double *)0x0) {
    return 2;
  }
  uVar4 = 7;
  if (((param_1[5] != 0.0) && (param_1[6] != 0.0)) && (uVar4 = 0x12, *(int *)(param_1 + 3) == 0)) {
    if (param_2 == (ulonglong *)0x0) {
      return 3;
    }
    uVar1 = *param_2;
    if (((uVar1 != 0) || (uVar4 = 4, (int)param_2[2] < 1)) &&
       ((uVar2 = param_2[1], uVar2 != 0 || (uVar4 = 4, *(int *)((longlong)param_2 + 0x14) < 1)))) {
      dVar7 = (double)param_2[5];
      uVar4 = 6;
      if ((0.00390625 <= dVar7) && (dVar7 <= 256.0)) {
        iVar3 = (int)param_2[2];
        if (iVar3 < 0) {
          *(undefined4 *)(param_2 + 2) = 0;
          iVar3 = 0;
        }
        iVar5 = *(int *)((longlong)param_2 + 0x14);
        if (iVar5 < 0) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          iVar5 = 0;
        }
        if (uVar1 < uVar2) {
          uVar4 = 0x10;
          if (uVar1 + (longlong)(*(int *)((longlong)param_1 + 0x14) * iVar3) * 4 <= uVar2) {
LAB_14702cf33:
            param_2[3] = 0;
            dVar6 = *param_1;
            if (dVar6 < 0.00390625) {
              *param_1 = dVar7;
              dVar6 = dVar7;
              dVar7 = (double)param_2[5];
            }
                    /* WARNING: Could not recover jumptable at 0x00014702cf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            uVar4 = (*(code *)param_1[(ulonglong)(ABS(dVar6 - dVar7) < 1e-15) + 5])();
            return uVar4;
          }
        }
        else {
          uVar4 = 0x10;
          if (uVar2 + (longlong)(*(int *)((longlong)param_1 + 0x14) * iVar5) * 4 <= uVar1)
          goto LAB_14702cf33;
        }
      }
    }
  }
  return uVar4;
}



// FUNCTION 14702cf7d src_callback_read body=440 status=ok
// SIG undefined src_callback_read(void)

int src_callback_read(longlong param_1,double param_2,int param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined1 *local_70;
  longlong local_68;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
                    /* 0x702cf7d  843  src_callback_read */
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_3 && param_1 != 0) {
    iVar2 = iVar1;
    if (*(int *)(param_1 + 0x18) == 1) {
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0x13;
      }
      else {
        local_58 = 0;
        uStack_50 = 0;
        if ((param_2 < 0.00390625) || (256.0 < param_2)) {
          *(undefined4 *)(param_1 + 0x10) = 6;
        }
        else {
          local_70 = *(undefined1 **)(param_1 + 0x60);
          local_60 = *(int *)(param_1 + 0x58);
          iVar2 = 0;
          local_68 = param_4;
          local_5c = param_3;
          local_48 = param_2;
          do {
            if (local_60 == 0) {
              local_78 = local_3c;
              local_60 = (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),&local_78);
              local_70 = local_78;
              if (local_60 == 0) {
                uStack_50 = CONCAT44(uStack_50._4_4_,1);
              }
            }
            *(undefined4 *)(param_1 + 0x18) = 0;
            iVar1 = src_process(param_1,&local_70);
            *(undefined4 *)(param_1 + 0x18) = 1;
            if (iVar1 != 0) {
              *(undefined1 **)(param_1 + 0x60) = local_70;
              *(int *)(param_1 + 0x58) = local_60;
              *(int *)(param_1 + 0x10) = iVar1;
              iVar2 = 0;
              goto LAB_14702cfae;
            }
            local_70 = local_70 + (longlong)(*(int *)(param_1 + 0x14) * (int)local_58) * 4;
            local_60 = local_60 - (int)local_58;
            local_68 = local_68 + (longlong)(*(int *)(param_1 + 0x14) * local_58._4_4_) * 4;
            local_5c = local_5c - local_58._4_4_;
            iVar2 = iVar2 + local_58._4_4_;
          } while (((int)uStack_50 != 1 || local_58._4_4_ != 0) && (iVar2 < param_3));
          *(undefined1 **)(param_1 + 0x60) = local_70;
          *(int *)(param_1 + 0x58) = local_60;
        }
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0x12;
    }
  }
LAB_14702cfae:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702d136 src_set_ratio body=66 status=ok
// SIG undefined src_set_ratio(void)

undefined8 src_set_ratio(double *param_1,double param_2)

{
  undefined8 uVar1;
  
                    /* 0x702d136  858  src_set_ratio */
  if (param_1 != (double *)0x0) {
    uVar1 = 7;
    if ((((param_1[5] != 0.0) && (param_1[6] != 0.0)) && (uVar1 = 6, 0.00390625 <= param_2)) &&
       (param_2 <= 256.0)) {
      *param_1 = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 2;
}



// FUNCTION 14702d178 src_get_channels body=34 status=ok
// SIG undefined src_get_channels(void)

undefined4 src_get_channels(longlong param_1)

{
  undefined4 uVar1;
  
                    /* 0x702d178  849  src_get_channels */
  if (param_1 != 0) {
    uVar1 = 0xfffffff9;
    if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      uVar1 = *(undefined4 *)(param_1 + 0x14);
    }
    return uVar1;
  }
  return 0xfffffffe;
}



// FUNCTION 14702d19a src_get_name body=39 status=ok
// SIG undefined src_get_name(void)

char * src_get_name(uint param_1)

{
  char *pcVar1;
  
                    /* 0x702d19a  851  src_get_name */
  if (param_1 < 4) {
    return &DAT_14a134e40 + *(int *)(&DAT_14a134e40 + (ulonglong)param_1 * 4);
  }
  pcVar1 = (char *)0x0;
  if (param_1 == 4) {
    pcVar1 = "Linear Interpolator";
  }
  return pcVar1;
}



// FUNCTION 14702d1c1 src_get_description body=39 status=ok
// SIG undefined src_get_description(void)

char * src_get_description(uint param_1)

{
  char *pcVar1;
  
                    /* 0x702d1c1  850  src_get_description */
  if (param_1 < 4) {
    return &DAT_14a134e50 + *(int *)(&DAT_14a134e50 + (ulonglong)param_1 * 4);
  }
  pcVar1 = (char *)0x0;
  if (param_1 == 4) {
    pcVar1 = "Linear interpolator, very fast, poor quality.";
  }
  return pcVar1;
}



// FUNCTION 14702d1e8 src_get_version body=8 status=ok
// SIG undefined src_get_version(void)

char * src_get_version(void)

{
                    /* 0x702d1e8  852  src_get_version */
  return "libsamplerate-0.1.8 (c) 2002-2008 Erik de Castro Lopo";
}



// FUNCTION 14702d1f0 src_is_valid_ratio body=38 status=ok
// SIG undefined src_is_valid_ratio(void)

byte src_is_valid_ratio(double param_1)

{
                    /* 0x702d1f0  854  src_is_valid_ratio */
  return -(0.00390625 <= param_1 && param_1 <= 256.0) & 1;
}



// FUNCTION 14702d216 src_error body=12 status=ok
// SIG undefined src_error(void)

undefined4 src_error(longlong param_1)

{
                    /* 0x702d216  846  src_error */
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return 0;
}



// FUNCTION 14702d222 src_strerror body=22 status=ok
// SIG undefined src_strerror(void)

undefined * src_strerror(uint param_1)

{
                    /* 0x702d222  861  src_strerror */
  if (param_1 < 0x18) {
    return (&PTR_s_No_error__14a134e60)[param_1];
  }
  return (undefined *)0x0;
}



// FUNCTION 14702d238 src_simple body=162 status=ok
// SIG undefined src_simple(void)

undefined4 src_simple(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
                    /* 0x702d238  860  src_simple */
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (undefined8 *)src_new(param_2,param_3,&local_1c);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x20) = 1;
    local_1c = src_process(puVar1,param_1);
    if (puVar1[4] != 0) {
      FUN_1400020a8();
    }
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[0xc] = 0;
    FUN_1400020a8(puVar1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_1c;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14702d2db src_short_to_float_array body=56 status=ok
// SIG undefined src_short_to_float_array(void)

void src_short_to_float_array(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
                    /* 0x702d2db  859  src_short_to_float_array */
  if (param_3 != 0) {
    lVar1 = (longlong)param_3;
    do {
      *(float *)(param_2 + -4 + lVar1 * 4) =
           (float)(int)*(short *)(param_1 + -2 + lVar1 * 2) * 3.0517578e-05;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14702d313 src_float_to_short_array body=139 status=ok
// SIG undefined src_float_to_short_array(void)

void src_float_to_short_array(longlong param_1,longlong param_2,int param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  float fVar3;
  
                    /* 0x702d313  848  src_float_to_short_array */
  if (param_3 != 0) {
    lVar2 = (longlong)param_3;
    do {
      fVar3 = *(float *)(param_1 + -4 + lVar2 * 4) * 32768.0;
      uVar1 = 0x7fff;
      if ((fVar3 < 32767.0) && (uVar1 = 0x8000, -32768.0 < fVar3)) {
        uVar1 = lrintf();
      }
      *(undefined2 *)(param_2 + -2 + lVar2 * 2) = uVar1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14702d39e src_int_to_float_array body=51 status=ok
// SIG undefined src_int_to_float_array(void)

void src_int_to_float_array(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
                    /* 0x702d39e  853  src_int_to_float_array */
  if (param_3 != 0) {
    lVar1 = (longlong)param_3;
    do {
      *(float *)(param_2 + -4 + lVar1 * 4) =
           (float)*(int *)(param_1 + -4 + lVar1 * 4) * 4.656613e-10;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14702d3d1 src_float_to_int_array body=148 status=ok
// SIG undefined src_float_to_int_array(void)

void src_float_to_int_array(longlong param_1,longlong param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong lVar3;
  
                    /* 0x702d3d1  847  src_float_to_int_array */
  if (param_3 != 0) {
    lVar3 = (longlong)param_3;
    do {
      fVar1 = *(float *)(param_1 + -4 + lVar3 * 4) * 2.1474836e+09;
      uVar2 = 0x7fffffff;
      if ((fVar1 < 2.1474836e+09) && (uVar2 = 0x80000000, -2.1474836e+09 < fVar1)) {
        uVar2 = lrint();
      }
      *(undefined4 *)(param_2 + -4 + lVar3 * 4) = uVar2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 14702d465 FUN_14702d465 body=159 status=ok
// SIG undefined FUN_14702d465(void)

undefined8 FUN_14702d465(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 10;
  if (param_2 == 4) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar2 = 0;
    puVar1 = (undefined4 *)FUN_14001cc68((longlong)*(int *)(param_1 + 0x14) * 4 + 0x18);
    *(undefined4 **)(param_1 + 0x20) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      *puVar1 = 0x787c4fc;
      *(code **)(param_1 + 0x30) = FUN_142aef22c;
      *(code **)(param_1 + 0x28) = FUN_142aef22c;
      *(undefined1 **)(param_1 + 0x38) = &LAB_142aef6a7;
      *(code **)(param_1 + 0x40) = FUN_142aef6ce;
      puVar1[1] = 0;
      memset(puVar1 + 6,0,(longlong)*(int *)(param_1 + 0x14) << 2);
    }
  }
  return uVar2;
}



// FUNCTION 14702d504 FUN_14702d504 body=492 status=ok
// SIG undefined FUN_14702d504(void)

char FUN_14702d504(longlong param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  cVar11 = '\v';
  if (*(int *)(param_1 + 0x14) < 0x81) {
    uVar4 = *(int *)(param_1 + 0x14) - 1;
    if (uVar4 < 6) {
      pcVar6 = (code *)(&PTR_FUN_14a134f20)[uVar4];
    }
    else {
      pcVar6 = FUN_142af0de8;
    }
    *(code **)(param_1 + 0x30) = pcVar6;
    *(code **)(param_1 + 0x28) = pcVar6;
    *(code **)(param_1 + 0x38) = FUN_142af143c;
    *(code **)(param_1 + 0x40) = FUN_142af14a9;
    cVar11 = '\n';
    if (param_2 < 3) {
      uVar7 = (ulonglong)param_2;
      iVar1 = *(int *)(&DAT_14a134f50 + uVar7 * 4);
      iVar2 = *(int *)(&DAT_14a134f5c + uVar7 * 4);
      iVar3 = *(int *)(&DAT_14a134f68 + uVar7 * 4);
      iVar5 = lrint(((double)(iVar1 + 2) / (double)iVar2) * 256.0 + 1.0);
      iVar13 = 0x1000;
      if (0x1000 < iVar5 * 3) {
        iVar13 = iVar5 * 3;
      }
      iVar13 = iVar13 * *(int *)(param_1 + 0x14);
      cVar11 = '\0';
      puVar8 = (undefined4 *)
               FUN_14001cc68((longlong)(*(int *)(param_1 + 0x14) + iVar13 + 1) * 4 + 0x850);
      if (puVar8 == (undefined4 *)0x0) {
        cVar11 = '\x01';
      }
      else {
        iVar13 = iVar13 + 1;
        *puVar8 = 0x26a5050;
        *(undefined8 *)(puVar8 + 1) = 0;
        *(undefined8 *)(puVar8 + 3) = 0;
        puVar8[5] = iVar1;
        puVar8[6] = iVar2;
        puVar8[7] = 0;
        *(undefined **)(puVar8 + 0xc) = &DAT_14a134f68 + iVar3;
        puVar8[0x11] = iVar13;
        memset(puVar8 + 0x12,0,0x808);
        *(undefined4 **)(param_1 + 0x20) = puVar8;
        *(undefined8 *)(puVar8 + 0xe) = 0;
        puVar8[0x10] = 0xffffffff;
        *(undefined8 *)(puVar8 + 8) = 0;
        *(undefined8 *)(puVar8 + 10) = 0;
        uVar10 = 0;
        memset(puVar8 + 0x212,0,(longlong)iVar13 * 4);
        memset(puVar8 + (longlong)iVar13 + 0x212,(int)CONCAT71((int7)((ulonglong)uVar10 >> 8),0xaa),
               (longlong)*(int *)(param_1 + 0x14) << 2);
        uVar4 = puVar8[5];
        if (1 < (int)uVar4) {
          uVar12 = 1;
          uVar9 = 0xffffffeb;
          do {
            uVar4 = uVar4 | uVar12;
            uVar12 = 1 << ((char)uVar9 + 0x16U & 0x1f);
            uVar9 = uVar9 + 1;
          } while ((int)uVar12 < (int)uVar4);
          cVar11 = (uVar9 < 0xffffffe0) * '\t';
        }
      }
    }
  }
  return cVar11;
}



// FUNCTION 14702d6f0 FUN_14702d6f0 body=156 status=ok
// SIG undefined FUN_14702d6f0(void)

undefined8 FUN_14702d6f0(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 10;
  if (param_2 == 3) {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    uVar2 = 0;
    puVar1 = (undefined4 *)FUN_14001cc68((longlong)*(int *)(param_1 + 0x14) * 4 + 0x18);
    *(undefined4 **)(param_1 + 0x20) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 1;
    }
    else {
      *puVar1 = 0x6f70a93;
      *(code **)(param_1 + 0x30) = FUN_142af1515;
      *(code **)(param_1 + 0x28) = FUN_142af1515;
      *(undefined1 **)(param_1 + 0x38) = &LAB_142af192f;
      *(code **)(param_1 + 0x40) = FUN_142af1953;
      *(undefined1 *)(puVar1 + 1) = 0;
      memset(puVar1 + 6,0,(longlong)*(int *)(param_1 + 0x14) << 2);
    }
  }
  return uVar2;
}



// FUNCTION 14702d78c FUN_14702d78c body=29 status=ok
// SIG undefined FUN_14702d78c(void)

void FUN_14702d78c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(8);
  *puVar1 = &PTR_FUN_14a134e00;
  return;
}



// FUNCTION 14702d7aa FUN_14702d7aa body=36 status=ok
// SIG undefined FUN_14702d7aa(void)

undefined8 FUN_14702d7aa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14702d7ea FUN_14702d7ea body=93 status=ok
// SIG undefined FUN_14702d7ea(void)

void FUN_14702d7ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a134d90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14702d848 FUN_14702d848 body=123 status=ok
// SIG undefined FUN_14702d848(void)

void FUN_14702d848(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a134d90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14702d8d0 FUN_14702d8d0 body=21 status=ok
// SIG undefined FUN_14702d8d0(void)

undefined8 FUN_14702d8d0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14702d8e6 FUN_14702d8e6 body=34 status=ok
// SIG undefined FUN_14702d8e6(void)

undefined8 FUN_14702d8e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 14702d90a FUN_14702d90a body=44 status=ok
// SIG undefined FUN_14702d90a(void)

void FUN_14702d90a(longlong param_1)

{
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 14702d936 FUN_14702d936 body=4 status=ok
// SIG undefined FUN_14702d936(void)

undefined4 FUN_14702d936(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x38);
}



// FUNCTION 14702d93a FUN_14702d93a body=185 status=ok
// SIG undefined FUN_14702d93a(void)

void FUN_14702d93a(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 < param_2) {
    param_2 = iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x38) + param_2;
  iVar2 = iVar4;
  if (iVar1 < iVar4) {
    iVar2 = iVar1;
  }
  iVar3 = 0;
  if (iVar4 < iVar1) {
    iVar3 = -(iVar1 - iVar4);
  }
  iVar3 = iVar3 + param_2;
  *(int *)(param_1 + 0x38) = iVar2;
  iVar2 = *(int *)(param_1 + 0x3c) + iVar3;
  iVar4 = iVar4 - iVar2;
  if (iVar4 < 1) {
    iVar2 = iVar3 + iVar4;
    if (iVar2 != 0 && SCARRY4(iVar3,iVar4) == iVar2 < 0) {
      memset(*(void **)(param_1 + 0x28),0,(longlong)(iVar2 * 4));
    }
    _Dst = *(void **)(param_1 + 0x10);
    *(void **)(param_1 + 0x28) = _Dst;
    *(int *)(param_1 + 0x3c) = -iVar4;
    if (iVar4 < 0) {
      memset(_Dst,0,(longlong)(iVar4 * -4));
      _Dst = *(void **)(param_1 + 0x28);
    }
    *(void **)(param_1 + 0x28) = (void *)((longlong)_Dst + (longlong)iVar4 * -4);
  }
  else {
    if (0 < iVar3) {
      memset(*(void **)(param_1 + 0x28),0,(longlong)(iVar3 * 4));
      iVar2 = *(int *)(param_1 + 0x3c) + iVar3;
    }
    *(int *)(param_1 + 0x3c) = iVar2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 4;
  }
  return;
}



// FUNCTION 14702d9f4 FUN_14702d9f4 body=217 status=ok
// SIG undefined FUN_14702d9f4(void)

void FUN_14702d9f4(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  int iVar3;
  int iVar4;
  
  if (param_2 != (void *)0x0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 < param_3) {
      param_3 = iVar3;
    }
    iVar1 = *(int *)(param_1 + 0x38) + param_3;
    iVar2 = iVar3;
    if (iVar1 < iVar3) {
      iVar2 = iVar1;
    }
    iVar4 = 0;
    if (iVar3 < iVar1) {
      iVar4 = -(iVar1 - iVar3);
    }
    iVar4 = iVar4 + param_3;
    *(int *)(param_1 + 0x38) = iVar2;
    iVar2 = *(int *)(param_1 + 0x3c) + iVar4;
    iVar3 = iVar3 - iVar2;
    if (iVar3 < 1) {
      iVar2 = iVar4 + iVar3;
      if (iVar2 != 0 && SCARRY4(iVar4,iVar3) == iVar2 < 0) {
        memcpy(*(void **)(param_1 + 0x28),param_2,(longlong)(iVar2 * 4));
      }
      _Dst = *(void **)(param_1 + 0x10);
      *(void **)(param_1 + 0x28) = _Dst;
      *(int *)(param_1 + 0x3c) = -iVar3;
      if (iVar3 < 0) {
        memcpy(_Dst,(void *)((longlong)param_2 + (longlong)iVar2 * 4),(longlong)(iVar3 * -4));
        _Dst = *(void **)(param_1 + 0x28);
      }
      *(void **)(param_1 + 0x28) = (void *)((longlong)_Dst + (longlong)iVar3 * -4);
    }
    else {
      if (0 < iVar4) {
        memcpy(*(void **)(param_1 + 0x28),param_2,(longlong)(iVar4 * 4));
        iVar2 = *(int *)(param_1 + 0x3c) + iVar4;
      }
      *(int *)(param_1 + 0x3c) = iVar2;
      *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + (longlong)iVar4 * 4;
    }
  }
  return;
}



// FUNCTION 14702dace FUN_14702dace body=79 status=ok
// SIG undefined FUN_14702dace(void)

void FUN_14702dace(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  piVar1 = (int *)(param_1 + 0x38);
  *piVar1 = *piVar1 - param_2;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
    return;
  }
  lVar4 = (longlong)*(int *)(param_1 + 0x40) + (longlong)param_2;
  lVar3 = *(int *)(param_1 + 0x30) - lVar4;
  iVar2 = (int)lVar3;
  if (0 < iVar2) {
    *(int *)(param_1 + 0x40) = (int)lVar4;
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + (longlong)param_2 * 4;
    return;
  }
  *(int *)(param_1 + 0x40) = -iVar2;
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x10) + lVar3 * -4;
  return;
}



// FUNCTION 14702db1e FUN_14702db1e body=178 status=ok
// SIG undefined FUN_14702db1e(void)

longlong FUN_14702db1e(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 < 1) {
    lVar3 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x34) < param_2) {
      FUN_14702dbd0(param_1,param_2);
    }
    lVar3 = 0;
    if (param_3 + param_2 <= *(int *)(param_1 + 0x38)) {
      iVar2 = 0;
      if (0 < param_3) {
        iVar2 = param_3;
      }
      iVar1 = *(int *)(param_1 + 0x30);
      for (iVar2 = iVar2 + *(int *)(param_1 + 0x40); iVar1 < iVar2; iVar2 = iVar2 - iVar1) {
      }
      if (param_2 + iVar2 < iVar1) {
        lVar3 = (longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x10);
      }
      else {
        iVar4 = iVar1 - iVar2;
        if (iVar4 != 0 && iVar2 <= iVar1) {
          memcpy(*(void **)(param_1 + 0x18),
                 (void *)((longlong)iVar2 * 4 + *(longlong *)(param_1 + 0x10)),(longlong)(iVar4 * 4)
                );
        }
        if (param_2 - iVar4 != 0 && iVar4 <= param_2) {
          memcpy((void *)((longlong)iVar4 * 4 + *(longlong *)(param_1 + 0x18)),
                 *(void **)(param_1 + 0x10),(longlong)((param_2 - iVar4) * 4));
        }
        lVar3 = *(longlong *)(param_1 + 0x18);
      }
    }
  }
  return lVar3;
}



// FUNCTION 14702dbd0 FUN_14702dbd0 body=64 status=ok
// SIG undefined FUN_14702dbd0(void)

void FUN_14702dbd0(undefined4 *param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((int)param_1[0xd] < param_2) {
    FUN_1400020a8(*(undefined8 *)(param_1 + 6));
    *(undefined8 *)(param_1 + 6) = 0;
    uVar1 = FUN_14001cc68((longlong)(param_2 * 4),*param_1);
    *(undefined8 *)(param_1 + 6) = uVar1;
  }
  param_1[0xd] = param_2;
  return;
}



// FUNCTION 14702dc10 FUN_14702dc10 body=89 status=ok
// SIG undefined FUN_14702dc10(void)

void FUN_14702dc10(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0x30)) {
    memset(*(void **)(param_1 + 0x10),0,(longlong)(*(int *)(param_1 + 0x30) << 2));
  }
  if (0 < *(int *)(param_1 + 0x34)) {
    memset(*(void **)(param_1 + 0x18),0,(longlong)(*(int *)(param_1 + 0x34) << 2));
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}



// FUNCTION 14702dc6a FUN_14702dc6a body=41 status=ok
// SIG undefined FUN_14702dc6a(void)

void FUN_14702dc6a(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1470345fa();
  return;
}



// FUNCTION 14702dc94 FUN_14702dc94 body=41 status=ok
// SIG undefined FUN_14702dc94(void)

void FUN_14702dc94(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_1470342f6();
  return;
}



// FUNCTION 14702dcbe FUN_14702dcbe body=954 status=ok
// SIG undefined FUN_14702dcbe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14702dcbe(longlong param_1,int param_2,uint param_3,byte param_4)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 in_XMM1 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar14 [16];
  float _X;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar19 [16];
  
  auVar2 = _DAT_149931e80;
  uVar4 = param_2 - (uint)(param_4 ^ 1);
  iVar6 = (uVar4 & 1) + uVar4;
  uVar4 = iVar6 >> 1;
  if ((0 < param_2) && (-1 < (int)uVar4)) {
    uVar8 = param_2 - 1U;
    if (uVar4 < param_2 - 1U) {
      uVar8 = uVar4;
    }
    lVar5 = (ulonglong)param_3 - 1;
    auVar17._8_4_ = (int)lVar5;
    auVar17._0_8_ = lVar5;
    auVar17._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
    lVar5 = param_1 + 0xc;
    _X = 0.0;
    uVar7 = 0;
    auVar17 = auVar17 ^ _DAT_149931e80;
    auVar19 = pmovsxbq(unaff_XMM14,0x404);
    do {
      fVar9 = cosf(_X);
      fVar10 = cosf(_X + _X);
      in_XMM1._0_8_ = (double)fVar9 * -0.5 + 0.41999998688697815;
      in_XMM1._8_8_ = 0;
      if (0 < (int)param_3) {
        fVar9 = (float)((double)fVar10 * 0.08 + in_XMM1._0_8_);
        lVar3 = 0;
        in_XMM1 = pmovsxbq(in_XMM1,0x100);
        in_XMM2 = pmovsxbq(in_XMM2,0x302);
        do {
          auVar13 = in_XMM1 ^ auVar2;
          lVar11 = auVar17._0_8_;
          lVar12 = auVar17._8_8_;
          if ((bool)(~(lVar11 < auVar13._0_8_) & 1)) {
            *(float *)(lVar5 + -0xc + lVar3) = fVar9;
          }
          if (auVar13._8_8_ <= lVar12) {
            *(float *)(lVar5 + -8 + lVar3) = fVar9;
          }
          auVar13 = in_XMM2 ^ auVar2;
          if (auVar13._0_8_ <= lVar11) {
            *(float *)(lVar5 + -4 + lVar3) = fVar9;
          }
          if (auVar13._8_8_ <= lVar12) {
            *(float *)(lVar5 + lVar3) = fVar9;
          }
          lVar11 = in_XMM1._8_8_;
          in_XMM1._0_8_ = (double)(in_XMM1._0_8_ + auVar19._0_8_);
          in_XMM1._8_8_ = lVar11 + auVar19._8_8_;
          lVar11 = in_XMM2._8_8_;
          in_XMM2._0_8_ = in_XMM2._0_8_ + auVar19._0_8_;
          in_XMM2._8_8_ = lVar11 + auVar19._8_8_;
          lVar3 = lVar3 + 0x10;
        } while ((ulonglong)(param_3 + 3 >> 2) << 4 != lVar3);
      }
      _X = _X + 6.2831855 / (float)(int)((param_2 - (uint)(param_4 ^ 1)) + -1);
      uVar7 = uVar7 + 1;
      lVar5 = lVar5 + (ulonglong)param_3 * 4;
    } while (uVar7 != uVar8 + 1);
  }
  auVar2 = _DAT_149931e80;
  if ((int)(uVar4 + 1) < param_2) {
    lVar5 = (longlong)(int)(uVar4 + 1);
    lVar3 = (ulonglong)param_3 - 1;
    auVar19._8_4_ = (int)lVar3;
    auVar19._0_8_ = lVar3;
    auVar19._12_4_ = (int)((ulonglong)lVar3 >> 0x20);
    lVar3 = param_1 + lVar5 * (int)param_3 * 4 + 0xc;
    auVar17 = pmovsxbq(in_XMM1,0x302);
    auVar13 = pmovsxbq(in_XMM2,0x100);
    auVar19 = auVar19 ^ _DAT_149931e80;
    auVar14 = pmovsxbq(in_XMM5,0x404);
    do {
      if (0 < (int)param_3) {
        uVar1 = *(undefined4 *)(param_1 + (longlong)(iVar6 - (int)lVar5) * 4);
        uVar7 = 0;
        auVar15 = auVar13;
        auVar16 = auVar17;
        do {
          auVar18 = auVar15 ^ auVar2;
          lVar11 = auVar19._0_8_;
          lVar12 = auVar19._8_8_;
          if ((bool)(~(lVar11 < auVar18._0_8_) & 1)) {
            *(undefined4 *)(lVar3 + -0xc + uVar7 * 4) = uVar1;
          }
          if (auVar18._8_8_ <= lVar12) {
            *(undefined4 *)(lVar3 + -8 + uVar7 * 4) = uVar1;
          }
          auVar18 = auVar16 ^ auVar2;
          if (auVar18._0_8_ <= lVar11) {
            *(undefined4 *)(lVar3 + -4 + uVar7 * 4) = uVar1;
          }
          if (auVar18._8_8_ <= lVar12) {
            *(undefined4 *)(lVar3 + uVar7 * 4) = uVar1;
          }
          uVar7 = uVar7 + 4;
          lVar11 = auVar15._8_8_;
          auVar15._0_8_ = auVar15._0_8_ + auVar14._0_8_;
          auVar15._8_8_ = lVar11 + auVar14._8_8_;
          lVar11 = auVar16._8_8_;
          auVar16._0_8_ = auVar16._0_8_ + auVar14._0_8_;
          auVar16._8_8_ = lVar11 + auVar14._8_8_;
        } while ((param_3 + 3 & 0xfffffffc) != uVar7);
      }
      lVar5 = lVar5 + 1;
      lVar3 = lVar3 + (longlong)(int)param_3 * 4;
    } while (lVar5 != param_2);
  }
  return;
}



// FUNCTION 14702e078 FUN_14702e078 body=1134 status=ok
// SIG undefined FUN_14702e078(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14702e078(char *param_1,uint param_2,uint param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  longlong lVar20;
  undefined1 unaff_XMM11 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM12 [16];
  undefined1 auVar22 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar23 [16];
  longlong lVar14;
  
  if (*param_1 != '\0') {
    uVar10 = (ulonglong)param_3;
    uVar7 = (ulonglong)param_2;
    plVar1 = (longlong *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0x14);
    iVar9 = 0;
    if (iVar5 < 0) {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      FUN_1470345fa(plVar1);
      iVar9 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x14);
    }
    uVar3 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x10) = iVar9 + uVar3;
    if ((uint)(iVar5 - iVar9) < uVar3) {
      FUN_145ca0cd4(plVar1);
    }
    memset((void *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 8)),0,(longlong)(int)uVar3 << 2);
    auVar4 = _DAT_149931e80;
    cVar2 = *param_1;
    if (cVar2 == '\x01') {
      if (0 < (int)param_2) {
        lVar8 = (ulonglong)param_3 - 1;
        auVar21._8_4_ = (int)lVar8;
        auVar21._0_8_ = lVar8;
        auVar21._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
        lVar8 = *plVar1 + 0xc;
        fVar18 = 0.0;
        uVar10 = 0;
        auVar19 = pmovsxbq(unaff_XMM11,0x302);
        auVar22 = pmovsxbq(unaff_XMM12,0x100);
        auVar21 = auVar21 ^ _DAT_149931e80;
        auVar23 = pmovsxbq(unaff_XMM15,0x404);
        do {
          fVar12 = cosf(fVar18);
          fVar12 = fVar12 * -0.46 + 0.54;
          if (0 < (int)param_3) {
            lVar6 = 0;
            auVar15 = auVar22;
            auVar16 = auVar19;
            do {
              lVar14 = auVar21._0_8_;
              lVar20 = auVar21._8_8_;
              if ((bool)(~(lVar14 < SUB168(auVar15 ^ auVar4,0)) & 1)) {
                *(float *)(lVar8 + -0xc + lVar6) = fVar12;
              }
              if (SUB168(auVar15 ^ auVar4,8) <= lVar20) {
                *(float *)(lVar8 + -8 + lVar6) = fVar12;
              }
              if (SUB168(auVar16 ^ auVar4,0) <= lVar14) {
                *(float *)(lVar8 + -4 + lVar6) = fVar12;
              }
              if (SUB168(auVar16 ^ auVar4,8) <= lVar20) {
                *(float *)(lVar8 + lVar6) = fVar12;
              }
              lVar14 = auVar15._8_8_;
              auVar15._0_8_ = auVar15._0_8_ + auVar23._0_8_;
              auVar15._8_8_ = lVar14 + auVar23._8_8_;
              lVar14 = auVar16._8_8_;
              auVar16._0_8_ = auVar16._0_8_ + auVar23._0_8_;
              auVar16._8_8_ = lVar14 + auVar23._8_8_;
              lVar6 = lVar6 + 0x10;
            } while ((ulonglong)(param_3 + 3 >> 2) << 4 != lVar6);
          }
          fVar18 = fVar18 + 6.2831855 / (float)(int)(param_2 - (byte)((byte)param_4 ^ 1));
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + (ulonglong)param_3 * 4;
        } while (uVar10 != uVar7);
      }
    }
    else if (cVar2 == '\x02') {
      if (0 < (int)param_2) {
        lVar8 = uVar10 - 1;
        auVar19._8_4_ = (int)lVar8;
        auVar19._0_8_ = lVar8;
        auVar19._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
        lVar8 = *plVar1 + 0xc;
        fVar18 = 0.0;
        uVar11 = 0;
        auVar21 = pmovsxbq(unaff_XMM11,0x302);
        auVar22 = pmovsxbq(unaff_XMM12,0x100);
        auVar19 = auVar19 ^ _DAT_149931e80;
        auVar23 = pmovsxbq(unaff_XMM15,0x404);
        do {
          fVar12 = cosf(fVar18);
          fVar12 = (1.0 - fVar12) * 0.5;
          if (0 < (int)param_3) {
            lVar6 = 0;
            auVar13 = auVar22;
            auVar17 = auVar21;
            do {
              lVar14 = auVar19._0_8_;
              lVar20 = auVar19._8_8_;
              if ((bool)(~(lVar14 < SUB168(auVar13 ^ auVar4,0)) & 1)) {
                *(float *)(lVar8 + -0xc + lVar6) = fVar12;
              }
              if (SUB168(auVar13 ^ auVar4,8) <= lVar20) {
                *(float *)(lVar8 + -8 + lVar6) = fVar12;
              }
              if (SUB168(auVar17 ^ auVar4,0) <= lVar14) {
                *(float *)(lVar8 + -4 + lVar6) = fVar12;
              }
              if (SUB168(auVar17 ^ auVar4,8) <= lVar20) {
                *(float *)(lVar8 + lVar6) = fVar12;
              }
              lVar14 = auVar13._8_8_;
              auVar13._0_8_ = auVar13._0_8_ + auVar23._0_8_;
              auVar13._8_8_ = lVar14 + auVar23._8_8_;
              lVar14 = auVar17._8_8_;
              auVar17._0_8_ = auVar17._0_8_ + auVar23._0_8_;
              auVar17._8_8_ = lVar14 + auVar23._8_8_;
              lVar6 = lVar6 + 0x10;
            } while ((ulonglong)(param_3 + 3 >> 2) << 4 != lVar6);
          }
          fVar18 = fVar18 + 6.2831855 / (float)(int)(param_2 - (byte)((byte)param_4 ^ 1));
          uVar11 = uVar11 + 1;
          lVar8 = lVar8 + uVar10 * 4;
        } while (uVar11 != uVar7);
      }
    }
    else if (cVar2 == '\x03') {
      FUN_14702dcbe(*plVar1,uVar7,uVar10,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 14702e4e6 FUN_14702e4e6 body=19 status=ok
// SIG undefined FUN_14702e4e6(void)

void FUN_14702e4e6(char *param_1,undefined8 param_2)

{
  if (*param_1 != '\0') {
    FUN_1421c4ff0(*(undefined8 *)(param_1 + 8),param_2,*(undefined4 *)(param_1 + 0x18));
    return;
  }
  return;
}



// FUNCTION 14702e4fa FUN_14702e4fa body=3 status=ok
// SIG undefined FUN_14702e4fa(void)

undefined1 FUN_14702e4fa(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 14702e4fe FUN_14702e4fe body=101 status=ok
// SIG undefined FUN_14702e4fe(void)

void FUN_14702e4fe(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14489624a(param_1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 0x10 + *param_1),(void *)*param_2,(longlong)(int)uVar1 << 4);
    return;
  }
  return;
}



// FUNCTION 14702e564 FUN_14702e564 body=116 status=ok
// SIG undefined FUN_14702e564(void)

void FUN_14702e564(longlong *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_3);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_3) {
    FUN_1470345fa(param_1,param_3);
  }
  for (; param_3 != 0; param_3 = param_3 + -1) {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_145ca0cd4(param_1,iVar1);
    }
    *(undefined4 *)(*param_1 + (longlong)iVar1 * 4) = *param_2;
  }
  return;
}



// FUNCTION 14702e5d9 FUN_14702e5d9 body=256 status=ok
// SIG undefined FUN_14702e5d9(void)

undefined8 * FUN_14702e5d9(undefined8 *param_1,wchar_t *param_2,longlong *param_3)

{
  char cVar1;
  size_t sVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)(int)param_3[1] != 0) {
    lVar3 = *param_3;
    lVar4 = (longlong)(int)param_3[1] << 4;
    do {
      if (param_2 == (wchar_t *)0x0) {
        sVar2 = 0;
      }
      else {
        sVar2 = wcslen(param_2);
      }
      cVar1 = FUN_144a791f8(lVar3,param_2,sVar2,1);
      if (cVar1 != '\0') {
        if (lVar3 != 0) {
          local_48 = 0;
          uStack_40 = 0;
          FUN_140056680(local_58,param_2);
          FUN_1407cdba6(lVar3,local_58,0,&local_48);
          if (local_58[0] != 0) {
            FUN_1400020a8();
          }
          *param_1 = local_48;
          *(undefined4 *)(param_1 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)param_1 + 0xc) = uStack_40._4_4_;
          goto LAB_14702e6b4;
        }
        break;
      }
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *param_1 = 0;
  param_1[1] = 0xffffffff00000000;
LAB_14702e6b4:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14702e6da FUN_14702e6da body=33 status=ok
// SIG undefined FUN_14702e6da(void)

void FUN_14702e6da(undefined4 *param_1,float param_2)

{
  *param_1 = 0;
  param_1[3] = 0;
  param_1[1] = param_2;
  param_1[2] = 1.0 - param_2;
  return;
}



// FUNCTION 14702e6fc FUN_14702e6fc body=23 status=ok
// SIG undefined FUN_14702e6fc(void)

void FUN_14702e6fc(longlong param_1,float param_2)

{
  *(float *)(param_1 + 4) = param_2;
  *(float *)(param_1 + 8) = 1.0 - param_2;
  return;
}



// FUNCTION 14702e714 FUN_14702e714 body=8 status=ok
// SIG undefined FUN_14702e714(void)

void FUN_14702e714(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



// FUNCTION 14702e71c FUN_14702e71c body=162 status=ok
// SIG undefined FUN_14702e71c(void)

void FUN_14702e71c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  
  uVar1 = *(uint *)(param_2 + 1);
  pfVar3 = (float *)*param_2;
  FUN_14702dc6a(param_3,uVar1);
  iVar2 = *(int *)(param_3 + 1);
  *(uint *)(param_3 + 1) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_3 + 0xc) - iVar2) < uVar1) {
    FUN_145ca0cd4(param_3);
  }
  pfVar4 = (float *)*param_3;
  *pfVar4 = *pfVar3 * *(float *)(param_1 + 8) + *(float *)(param_1 + 4) * *(float *)(param_1 + 0xc);
  if (1 < (int)uVar1) {
    fVar6 = *pfVar4;
    uVar5 = 0;
    do {
      fVar6 = fVar6 * *(float *)(param_1 + 4) + pfVar3[uVar5 + 1] * *(float *)(param_1 + 8);
      pfVar4[uVar5 + 1] = fVar6;
      uVar5 = uVar5 + 1;
    } while (uVar1 - 1 != uVar5);
  }
  *(float *)(param_1 + 0xc) = pfVar4[(longlong)(int)uVar1 + -1];
  return;
}



// FUNCTION 14702e8c7 FUN_14702e8c7 body=49 status=ok
// SIG undefined FUN_14702e8c7(void)

void FUN_14702e8c7(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14702e8f8(*param_1,*param_2,*(int *)(param_2 + 1) / 2,param_3,param_4);
  return;
}



// FUNCTION 14702e8f8 FUN_14702e8f8 body=172 status=ok
// SIG undefined FUN_14702e8f8(void)

void FUN_14702e8f8(longlong param_1,longlong param_2,uint param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  if (0 < (int)param_3) {
    fVar12 = (float)(int)param_3 * 0.5;
    fVar13 = (float)*param_4;
    auVar8._0_4_ = (float)*param_5 - fVar13;
    fVar14 = (float)((ulonglong)*param_4 >> 0x20);
    auVar8._4_4_ = (float)((ulonglong)*param_5 >> 0x20) - fVar14;
    fVar15 = (float)*param_4;
    auVar8._8_4_ = (float)*param_5 - fVar15;
    fVar16 = (float)((ulonglong)*param_4 >> 0x20);
    auVar8._12_4_ = (float)((ulonglong)*param_5 >> 0x20) - fVar16;
    auVar9._4_4_ = fVar12;
    auVar9._0_4_ = fVar12;
    auVar9._8_4_ = fVar12;
    auVar9._12_4_ = fVar12;
    auVar9 = divps(auVar8,auVar9);
    uVar5 = param_4[1];
    fVar17 = (float)uVar5;
    fVar18 = (float)((ulonglong)uVar5 >> 0x20);
    uVar5 = param_4[1];
    fVar19 = (float)uVar5;
    fVar20 = (float)((ulonglong)uVar5 >> 0x20);
    uVar5 = param_5[1];
    uVar6 = param_5[1];
    auVar10._0_4_ = (float)uVar5 - fVar17;
    auVar10._4_4_ = (float)((ulonglong)uVar5 >> 0x20) - fVar18;
    auVar10._8_4_ = (float)uVar6 - fVar19;
    auVar10._12_4_ = (float)((ulonglong)uVar6 >> 0x20) - fVar20;
    auVar11._4_4_ = fVar12;
    auVar11._0_4_ = fVar12;
    auVar11._8_4_ = fVar12;
    auVar11._12_4_ = fVar12;
    auVar11 = divps(auVar10,auVar11);
    fVar17 = auVar11._0_4_ * 0.5 + fVar17;
    fVar18 = auVar11._4_4_ * 0.5 + fVar18;
    fVar19 = auVar11._8_4_ * 1.0 + fVar19;
    fVar20 = auVar11._12_4_ * 1.0 + fVar20;
    fVar13 = auVar9._0_4_ * 0.5 + fVar13;
    fVar14 = auVar9._4_4_ * 0.5 + fVar14;
    fVar15 = auVar9._8_4_ * 1.0 + fVar15;
    fVar16 = auVar9._12_4_ * 1.0 + fVar16;
    uVar7 = 0;
    do {
      fVar12 = *(float *)(param_1 + uVar7 * 8);
      fVar2 = *(float *)(param_1 + 4 + uVar7 * 8);
      fVar3 = *(float *)(param_1 + 8 + uVar7 * 8);
      fVar4 = *(float *)(param_1 + 0xc + uVar7 * 8);
      pfVar1 = (float *)(param_2 + uVar7 * 8);
      *pfVar1 = fVar2 * fVar17 + fVar12 * fVar13;
      pfVar1[1] = fVar2 * fVar18 + fVar12 * fVar14;
      pfVar1[2] = fVar4 * fVar19 + fVar3 * fVar15;
      pfVar1[3] = fVar4 * fVar20 + fVar3 * fVar16;
      fVar13 = fVar13 + auVar9._0_4_;
      fVar14 = fVar14 + auVar9._4_4_;
      fVar15 = fVar15 + auVar9._8_4_;
      fVar16 = fVar16 + auVar9._12_4_;
      fVar17 = fVar17 + auVar11._0_4_;
      fVar18 = fVar18 + auVar11._4_4_;
      fVar19 = fVar19 + auVar11._8_4_;
      fVar20 = fVar20 + auVar11._12_4_;
      uVar7 = uVar7 + 2;
    } while (uVar7 < param_3);
  }
  return;
}



// FUNCTION 14702eb76 FUN_14702eb76 body=57 status=ok
// SIG undefined FUN_14702eb76(void)

void FUN_14702eb76(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14702ebaf(*param_1,*param_2,*(int *)(param_2 + 1) / 6,param_3,param_4);
  return;
}



// FUNCTION 14702ebaf FUN_14702ebaf body=208 status=ok
// SIG undefined FUN_14702ebaf(void)

void FUN_14702ebaf(longlong param_1,longlong param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float *pfVar4;
  ulonglong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined8 uVar19;
  float fVar21;
  float fVar22;
  
  if (0 < (int)param_3) {
    fVar22 = (float)(int)param_3 * 0.5;
    fVar6 = *param_4;
    fVar7 = param_4[1];
    fVar8 = param_4[2];
    fVar9 = param_4[3];
    fVar10 = param_4[2];
    fVar11 = param_4[3];
    fVar12 = param_4[4];
    fVar13 = param_4[5];
    auVar18._0_4_ = *param_5 - fVar6;
    auVar18._4_4_ = param_5[1] - fVar7;
    auVar18._8_4_ = param_5[2] - fVar8;
    auVar18._12_4_ = param_5[3] - fVar9;
    auVar15._4_4_ = fVar22;
    auVar15._0_4_ = fVar22;
    auVar15._8_4_ = fVar22;
    auVar15._12_4_ = fVar22;
    auVar18 = divps(auVar18,auVar15);
    uVar19 = *(undefined8 *)(param_4 + 4);
    auVar16._0_4_ = (float)*(undefined8 *)(param_5 + 4) - (float)uVar19;
    auVar16._4_4_ =
         (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20) -
         (float)((ulonglong)uVar19 >> 0x20);
    auVar16._8_4_ = *param_5 - fVar6;
    auVar16._12_4_ = param_5[1] - fVar7;
    auVar17._4_4_ = fVar22;
    auVar17._0_4_ = fVar22;
    auVar17._8_4_ = fVar22;
    auVar17._12_4_ = fVar22;
    auVar17 = divps(auVar16,auVar17);
    auVar14._0_4_ = param_5[2] - fVar10;
    auVar14._4_4_ = param_5[3] - fVar11;
    auVar14._8_4_ = param_5[4] - fVar12;
    auVar14._12_4_ = param_5[5] - fVar13;
    auVar3._4_4_ = fVar22;
    auVar3._0_4_ = fVar22;
    auVar3._8_4_ = fVar22;
    auVar3._12_4_ = fVar22;
    auVar15 = divps(auVar14,auVar3);
    pfVar4 = (float *)(param_2 + 0x20);
    uVar5 = 0;
    fVar22 = fVar6;
    fVar21 = fVar7;
    do {
      fVar1 = *(float *)(param_1 + uVar5 * 4);
      fVar2 = *(float *)(param_1 + 4 + uVar5 * 4);
      pfVar4[-8] = fVar1 * fVar6;
      pfVar4[-7] = fVar1 * fVar7;
      pfVar4[-6] = fVar1 * fVar8;
      pfVar4[-5] = fVar1 * fVar9;
      fVar6 = fVar6 + auVar18._0_4_;
      fVar7 = fVar7 + auVar18._4_4_;
      fVar8 = fVar8 + auVar18._8_4_;
      fVar9 = fVar9 + auVar18._12_4_;
      fVar20 = (float)((ulonglong)uVar19 >> 0x20);
      pfVar4[-4] = fVar1 * (float)uVar19;
      pfVar4[-3] = fVar1 * fVar20;
      pfVar4[-2] = fVar2 * fVar22;
      pfVar4[-1] = fVar2 * fVar21;
      uVar19 = CONCAT44(fVar20 + auVar17._4_4_,(float)uVar19 + auVar17._0_4_);
      fVar22 = fVar22 + auVar17._8_4_;
      fVar21 = fVar21 + auVar17._12_4_;
      *pfVar4 = fVar2 * fVar10;
      pfVar4[1] = fVar2 * fVar11;
      pfVar4[2] = fVar2 * fVar12;
      pfVar4[3] = fVar2 * fVar13;
      fVar10 = fVar10 + auVar15._0_4_;
      fVar11 = fVar11 + auVar15._4_4_;
      fVar12 = fVar12 + auVar15._8_4_;
      fVar13 = fVar13 + auVar15._12_4_;
      uVar5 = uVar5 + 2;
      pfVar4 = pfVar4 + 0xc;
    } while (uVar5 < param_3);
  }
  return;
}



// FUNCTION 14702eca6 FUN_14702eca6 body=253 status=ok
// SIG undefined FUN_14702eca6(void)

void FUN_14702eca6(longlong param_1,longlong param_2,uint param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *pfVar23;
  ulonglong uVar24;
  
  if (0 < (int)param_3) {
    fVar7 = *param_4;
    fVar8 = param_4[1];
    fVar9 = param_4[2];
    fVar10 = param_4[3];
    fVar11 = param_4[2];
    fVar12 = param_4[3];
    fVar13 = param_4[4];
    fVar14 = param_4[5];
    uVar5 = *(undefined8 *)(param_4 + 4);
    fVar15 = param_4[6];
    fVar16 = param_4[7];
    fVar17 = param_4[8];
    fVar18 = param_4[9];
    uVar6 = *(undefined8 *)(param_4 + 10);
    fVar19 = param_4[8];
    fVar20 = param_4[9];
    fVar21 = param_4[10];
    fVar22 = param_4[0xb];
    pfVar23 = (float *)(param_2 + 0x20);
    uVar24 = 0;
    do {
      fVar1 = *(float *)(param_1 + uVar24 * 8);
      fVar2 = *(float *)(param_1 + 4 + uVar24 * 8);
      fVar3 = *(float *)(param_1 + 8 + uVar24 * 8);
      fVar4 = *(float *)(param_1 + 0xc + uVar24 * 8);
      pfVar23[-8] = fVar2 * fVar15 + fVar1 * fVar7;
      pfVar23[-7] = fVar2 * fVar16 + fVar1 * fVar8;
      pfVar23[-6] = fVar2 * fVar17 + fVar1 * fVar9;
      pfVar23[-5] = fVar2 * fVar18 + fVar1 * fVar10;
      pfVar23[-4] = fVar2 * (float)uVar6 + fVar1 * (float)uVar5;
      pfVar23[-3] = fVar2 * (float)((ulonglong)uVar6 >> 0x20) +
                    fVar1 * (float)((ulonglong)uVar5 >> 0x20);
      pfVar23[-2] = fVar4 * fVar15 + fVar3 * fVar7;
      pfVar23[-1] = fVar4 * fVar16 + fVar3 * fVar8;
      *pfVar23 = fVar4 * fVar19 + fVar3 * fVar11;
      pfVar23[1] = fVar4 * fVar20 + fVar3 * fVar12;
      pfVar23[2] = fVar4 * fVar21 + fVar3 * fVar13;
      pfVar23[3] = fVar4 * fVar22 + fVar3 * fVar14;
      uVar24 = uVar24 + 2;
      pfVar23 = pfVar23 + 0xc;
    } while (uVar24 < param_3);
  }
  return;
}



// FUNCTION 14702eda3 FUN_14702eda3 body=57 status=ok
// SIG undefined FUN_14702eda3(void)

void FUN_14702eda3(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_14702eddc(*param_1,*param_2,*(int *)(param_2 + 1) / 6,param_3,param_4);
  return;
}



// FUNCTION 14702eddc FUN_14702eddc body=473 status=ok
// SIG undefined FUN_14702eddc(void)

void FUN_14702eddc(longlong param_1,longlong param_2,uint param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float *pfVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  
  if (0 < (int)param_3) {
    fVar25 = (float)(int)param_3 * 0.5;
    fVar8 = *param_4;
    fVar9 = param_4[1];
    fVar10 = param_4[2];
    fVar11 = param_4[3];
    auVar16._0_4_ = *param_5 - fVar8;
    auVar16._4_4_ = param_5[1] - fVar9;
    auVar16._8_4_ = param_5[2] - fVar10;
    auVar16._12_4_ = param_5[3] - fVar11;
    auVar13._4_4_ = fVar25;
    auVar13._0_4_ = fVar25;
    auVar13._8_4_ = fVar25;
    auVar13._12_4_ = fVar25;
    auVar16 = divps(auVar16,auVar13);
    fVar26 = (float)*(undefined8 *)(param_4 + 4);
    fVar27 = (float)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
    auVar14._0_4_ = (float)*(undefined8 *)(param_5 + 4) - fVar26;
    auVar14._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 4) >> 0x20) - fVar27;
    auVar14._8_4_ = *param_5 - fVar8;
    auVar14._12_4_ = param_5[1] - fVar9;
    auVar15._4_4_ = fVar25;
    auVar15._0_4_ = fVar25;
    auVar15._8_4_ = fVar25;
    auVar15._12_4_ = fVar25;
    auVar15 = divps(auVar14,auVar15);
    auVar12._0_4_ = param_5[2] - param_4[2];
    auVar12._4_4_ = param_5[3] - param_4[3];
    auVar12._8_4_ = param_5[4] - param_4[4];
    auVar12._12_4_ = param_5[5] - param_4[5];
    auVar22._4_4_ = fVar25;
    auVar22._0_4_ = fVar25;
    auVar22._8_4_ = fVar25;
    auVar22._12_4_ = fVar25;
    auVar13 = divps(auVar12,auVar22);
    fVar17 = param_4[6];
    fVar18 = param_4[7];
    fVar19 = param_4[8];
    fVar20 = param_4[9];
    auVar23._0_4_ = param_5[6] - fVar17;
    auVar23._4_4_ = param_5[7] - fVar18;
    auVar23._8_4_ = param_5[8] - fVar19;
    auVar23._12_4_ = param_5[9] - fVar20;
    auVar24._4_4_ = fVar25;
    auVar24._0_4_ = fVar25;
    auVar24._8_4_ = fVar25;
    auVar24._12_4_ = fVar25;
    auVar24 = divps(auVar23,auVar24);
    fVar29 = (float)*(undefined8 *)(param_4 + 10);
    fVar30 = (float)((ulonglong)*(undefined8 *)(param_4 + 10) >> 0x20);
    auVar21._0_4_ = (float)*(undefined8 *)(param_5 + 10) - fVar29;
    auVar21._4_4_ = (float)((ulonglong)*(undefined8 *)(param_5 + 10) >> 0x20) - fVar30;
    auVar21._8_4_ = param_5[6] - fVar17;
    auVar21._12_4_ = param_5[7] - fVar18;
    auVar5._4_4_ = fVar25;
    auVar5._0_4_ = fVar25;
    auVar5._8_4_ = fVar25;
    auVar5._12_4_ = fVar25;
    auVar22 = divps(auVar21,auVar5);
    fVar29 = auVar22._0_4_ * 0.0 + fVar29;
    fVar30 = auVar22._4_4_ * 0.0 + fVar30;
    fVar31 = auVar22._8_4_ * 0.5 + fVar17;
    fVar32 = auVar22._12_4_ * 0.5 + fVar18;
    fVar33 = auVar13._0_4_ * 0.5 + param_4[2];
    fVar34 = auVar13._4_4_ * 0.5 + param_4[3];
    fVar35 = auVar13._8_4_ * 0.5 + param_4[4];
    fVar36 = auVar13._12_4_ * 0.5 + param_4[5];
    fVar26 = auVar15._0_4_ * 0.0 + fVar26;
    fVar27 = auVar15._4_4_ * 0.0 + fVar27;
    fVar25 = auVar15._8_4_ * 0.5 + fVar8;
    fVar28 = auVar15._12_4_ * 0.5 + fVar9;
    pfVar6 = (float *)(param_2 + 0x20);
    uVar7 = 0;
    do {
      fVar1 = *(float *)(param_1 + uVar7 * 8);
      fVar2 = *(float *)(param_1 + 4 + uVar7 * 8);
      fVar3 = *(float *)(param_1 + 8 + uVar7 * 8);
      fVar4 = *(float *)(param_1 + 0xc + uVar7 * 8);
      pfVar6[-8] = fVar2 * fVar17 + fVar1 * fVar8;
      pfVar6[-7] = fVar2 * fVar18 + fVar1 * fVar9;
      pfVar6[-6] = fVar2 * fVar19 + fVar1 * fVar10;
      pfVar6[-5] = fVar2 * fVar20 + fVar1 * fVar11;
      fVar8 = fVar8 + auVar16._0_4_;
      fVar9 = fVar9 + auVar16._4_4_;
      fVar10 = fVar10 + auVar16._8_4_;
      fVar11 = fVar11 + auVar16._12_4_;
      fVar17 = fVar17 + auVar24._0_4_;
      fVar18 = fVar18 + auVar24._4_4_;
      fVar19 = fVar19 + auVar24._8_4_;
      fVar20 = fVar20 + auVar24._12_4_;
      pfVar6[-4] = fVar2 * fVar29 + fVar1 * fVar26;
      pfVar6[-3] = fVar2 * fVar30 + fVar1 * fVar27;
      pfVar6[-2] = fVar4 * fVar31 + fVar3 * fVar25;
      pfVar6[-1] = fVar4 * fVar32 + fVar3 * fVar28;
      fVar26 = fVar26 + auVar15._0_4_;
      fVar27 = fVar27 + auVar15._4_4_;
      fVar25 = fVar25 + auVar15._8_4_;
      fVar28 = fVar28 + auVar15._12_4_;
      fVar29 = fVar29 + auVar22._0_4_;
      fVar30 = fVar30 + auVar22._4_4_;
      fVar31 = fVar31 + auVar22._8_4_;
      fVar32 = fVar32 + auVar22._12_4_;
      *pfVar6 = fVar4 * fVar33 + fVar3 * fVar33;
      pfVar6[1] = fVar4 * fVar34 + fVar3 * fVar34;
      pfVar6[2] = fVar4 * fVar35 + fVar3 * fVar35;
      pfVar6[3] = fVar4 * fVar36 + fVar3 * fVar36;
      fVar33 = fVar33 + auVar13._0_4_;
      fVar34 = fVar34 + auVar13._4_4_;
      fVar35 = fVar35 + auVar13._8_4_;
      fVar36 = fVar36 + auVar13._12_4_;
      uVar7 = uVar7 + 2;
      pfVar6 = pfVar6 + 0xc;
    } while (uVar7 < param_3);
  }
  return;
}



// FUNCTION 14702f079 FUN_14702f079 body=131 status=ok
// SIG undefined FUN_14702f079(void)

void FUN_14702f079(longlong *param_1,longlong *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  
  uVar4 = *(uint *)(param_2 + 1);
  if (7 < (int)uVar4) {
    lVar5 = *param_2;
    lVar6 = *param_1;
    fVar7 = *param_3;
    fVar8 = param_3[1];
    fVar9 = param_3[2];
    fVar10 = param_3[3];
    fVar11 = param_3[4];
    fVar12 = param_3[5];
    fVar13 = param_3[6];
    fVar14 = param_3[7];
    fVar15 = param_3[8];
    fVar16 = param_3[9];
    fVar17 = param_3[10];
    fVar18 = param_3[0xb];
    fVar19 = param_3[0xc];
    fVar20 = param_3[0xd];
    fVar21 = param_3[0xe];
    fVar22 = param_3[0xf];
    uVar23 = 0;
    do {
      fVar2 = *(float *)(lVar6 + uVar23);
      fVar3 = *(float *)(lVar6 + 4 + uVar23);
      pfVar1 = (float *)(lVar5 + uVar23 * 4);
      *pfVar1 = fVar15 * fVar3 + fVar7 * fVar2;
      pfVar1[1] = fVar16 * fVar3 + fVar8 * fVar2;
      pfVar1[2] = fVar17 * fVar3 + fVar9 * fVar2;
      pfVar1[3] = fVar18 * fVar3 + fVar10 * fVar2;
      pfVar1 = (float *)(lVar5 + 0x10 + uVar23 * 4);
      *pfVar1 = fVar3 * fVar19 + fVar2 * fVar11;
      pfVar1[1] = fVar3 * fVar20 + fVar2 * fVar12;
      pfVar1[2] = fVar3 * fVar21 + fVar2 * fVar13;
      pfVar1[3] = fVar3 * fVar22 + fVar2 * fVar14;
      uVar23 = uVar23 + 8;
    } while ((uVar4 & 0xfffffff8) != uVar23);
  }
  return;
}



// FUNCTION 14702f0fc FUN_14702f0fc body=293 status=ok
// SIG undefined FUN_14702f0fc(void)

void FUN_14702f0fc(longlong *param_1,longlong *param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  iVar4 = (int)param_2[1];
  iVar8 = iVar4 + 7;
  if (-1 < iVar4) {
    iVar8 = iVar4;
  }
  if (7 < iVar4) {
    lVar5 = *param_2;
    lVar6 = *param_1;
    fVar32 = (float)(iVar8 >> 3);
    fVar9 = param_3[4];
    fVar10 = param_3[5];
    fVar11 = param_3[6];
    fVar12 = param_3[7];
    fVar13 = param_3[0xc];
    fVar14 = param_3[0xd];
    fVar15 = param_3[0xe];
    fVar16 = param_3[0xf];
    auVar17._0_4_ = *param_4 - *param_3;
    auVar17._4_4_ = param_4[1] - param_3[1];
    auVar17._8_4_ = param_4[2] - param_3[2];
    auVar17._12_4_ = param_4[3] - param_3[3];
    auVar18._4_4_ = fVar32;
    auVar18._0_4_ = fVar32;
    auVar18._8_4_ = fVar32;
    auVar18._12_4_ = fVar32;
    auVar18 = divps(auVar17,auVar18);
    auVar19._0_4_ = param_4[4] - fVar9;
    auVar19._4_4_ = param_4[5] - fVar10;
    auVar19._8_4_ = param_4[6] - fVar11;
    auVar19._12_4_ = param_4[7] - fVar12;
    auVar20._4_4_ = fVar32;
    auVar20._0_4_ = fVar32;
    auVar20._8_4_ = fVar32;
    auVar20._12_4_ = fVar32;
    auVar20 = divps(auVar19,auVar20);
    auVar21._0_4_ = param_4[8] - param_3[8];
    auVar21._4_4_ = param_4[9] - param_3[9];
    auVar21._8_4_ = param_4[10] - param_3[10];
    auVar21._12_4_ = param_4[0xb] - param_3[0xb];
    auVar22._4_4_ = fVar32;
    auVar22._0_4_ = fVar32;
    auVar22._8_4_ = fVar32;
    auVar22._12_4_ = fVar32;
    auVar22 = divps(auVar21,auVar22);
    auVar23._0_4_ = param_4[0xc] - fVar13;
    auVar23._4_4_ = param_4[0xd] - fVar14;
    auVar23._8_4_ = param_4[0xe] - fVar15;
    auVar23._12_4_ = param_4[0xf] - fVar16;
    auVar24._4_4_ = fVar32;
    auVar24._0_4_ = fVar32;
    auVar24._8_4_ = fVar32;
    auVar24._12_4_ = fVar32;
    auVar24 = divps(auVar23,auVar24);
    lVar7 = 0;
    fVar32 = *param_3;
    fVar25 = param_3[1];
    fVar26 = param_3[2];
    fVar27 = param_3[3];
    fVar28 = param_3[8];
    fVar29 = param_3[9];
    fVar30 = param_3[10];
    fVar31 = param_3[0xb];
    do {
      fVar2 = *(float *)(lVar6 + lVar7);
      fVar3 = *(float *)(lVar6 + 4 + lVar7);
      pfVar1 = (float *)(lVar5 + lVar7 * 4);
      *pfVar1 = fVar28 * fVar3 + fVar32 * fVar2;
      pfVar1[1] = fVar29 * fVar3 + fVar25 * fVar2;
      pfVar1[2] = fVar30 * fVar3 + fVar26 * fVar2;
      pfVar1[3] = fVar31 * fVar3 + fVar27 * fVar2;
      pfVar1 = (float *)(lVar5 + 0x10 + lVar7 * 4);
      *pfVar1 = fVar3 * fVar13 + fVar2 * fVar9;
      pfVar1[1] = fVar3 * fVar14 + fVar2 * fVar10;
      pfVar1[2] = fVar3 * fVar15 + fVar2 * fVar11;
      pfVar1[3] = fVar3 * fVar16 + fVar2 * fVar12;
      fVar9 = fVar9 + auVar20._0_4_;
      fVar10 = fVar10 + auVar20._4_4_;
      fVar11 = fVar11 + auVar20._8_4_;
      fVar12 = fVar12 + auVar20._12_4_;
      fVar13 = fVar13 + auVar24._0_4_;
      fVar14 = fVar14 + auVar24._4_4_;
      fVar15 = fVar15 + auVar24._8_4_;
      fVar16 = fVar16 + auVar24._12_4_;
      lVar7 = lVar7 + 8;
      fVar32 = auVar18._0_4_ + fVar32;
      fVar25 = auVar18._4_4_ + fVar25;
      fVar26 = auVar18._8_4_ + fVar26;
      fVar27 = auVar18._12_4_ + fVar27;
      fVar28 = auVar22._0_4_ + fVar28;
      fVar29 = auVar22._4_4_ + fVar29;
      fVar30 = auVar22._8_4_ + fVar30;
      fVar31 = auVar22._12_4_ + fVar31;
    } while ((ulonglong)(uint)(iVar8 >> 3) << 3 != lVar7);
  }
  return;
}



// FUNCTION 14702f221 FUN_14702f221 body=182 status=ok
// SIG undefined FUN_14702f221(void)

void FUN_14702f221(uint param_1,uint param_2,longlong *param_3,longlong *param_4,float *param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  ulonglong uVar8;
  float fVar9;
  
  uVar2 = (longlong)(int)param_3[1] / (longlong)(int)param_1;
  if (0 < (int)uVar2) {
    lVar1 = *param_4;
    lVar5 = *param_3;
    uVar8 = 0;
    do {
      if (0 < (int)param_2) {
        uVar4 = 0;
        pfVar3 = param_5;
        do {
          fVar9 = 0.0;
          if (0 < (int)param_1) {
            uVar6 = 0;
            pfVar7 = pfVar3;
            do {
              fVar9 = fVar9 + *(float *)(lVar5 + uVar6 * 4) * *pfVar7;
              uVar6 = uVar6 + 1;
              pfVar7 = pfVar7 + param_2;
            } while (param_1 != uVar6);
          }
          *(float *)(lVar1 + uVar8 * (longlong)(int)param_2 * 4 + uVar4 * 4) = fVar9;
          uVar4 = uVar4 + 1;
          pfVar3 = pfVar3 + 1;
        } while (uVar4 != param_2);
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + (longlong)(int)param_1 * 4;
    } while (uVar8 != (uVar2 & 0xffffffff));
  }
  return;
}


