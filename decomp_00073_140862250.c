// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140862250 FUN_140862250 body=71 status=ok
// SIG undefined FUN_140862250(void)

undefined8 * FUN_140862250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 140862298 FUN_140862298 body=265 status=ok
// SIG undefined FUN_140862298(void)

void FUN_140862298(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar4 = *(longlong *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar3 = FUN_140067708();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x18) = lVar4;
  }
  local_28 = *(longlong *)(param_1 + 0x20);
  if (((local_28 != 0) || (local_28 = 0, lVar4 == 0)) || (*(longlong *)(param_1 + 0x10) == 0))
  goto LAB_140862327;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_14086239e:
    local_28 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_14086239e;
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    local_28 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x10));
  }
  *(longlong *)(param_1 + 0x20) = local_28;
LAB_140862327:
  FUN_140942716();
  if ((*(longlong *)(param_1 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x50));
  }
  *(longlong *)(param_1 + 0x28) = local_28;
  FUN_140942716((longlong *)(param_1 + 0x28));
  if ((local_28 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(local_28 + 0x50));
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408623a2 FUN_1408623a2 body=163 status=ok
// SIG undefined FUN_1408623a2(void)

bool FUN_1408623a2(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    local_28 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,&local_28,param_2);
  }
  if (param_3 == 0) {
    local_30 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x218))(param_1,&local_30,param_3);
    if ((local_30 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(local_30);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_28 == local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140862446 FUN_140862446 body=95 status=ok
// SIG undefined FUN_140862446(void)

ulonglong FUN_140862446(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140862488:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140862488;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 1408624ae FUN_1408624ae body=274 status=ok
// SIG undefined FUN_1408624ae(void)

void FUN_1408624ae(longlong param_1)

{
  byte *pbVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  fVar5 = (*(float *)(param_1 + 0x98) - (*(float *)(param_1 + 0xa0) + *(float *)(param_1 + 0xa8))) *
          *(float *)(param_1 + 0x94);
  local_68 = 0;
  uStack_60 = 0;
  if (*(int *)(param_1 + 0x28) < 1) {
    uVar3 = 0;
  }
  else {
    fVar6 = 0.01;
    if (0.01 <= fVar5) {
      fVar6 = fVar5;
    }
    lVar4 = 0;
    uVar3 = 0;
    do {
      lVar2 = *(longlong *)(param_1 + 0x20);
      FUN_1408625f2(param_1,lVar2 + lVar4);
      if ((*(byte *)(lVar2 + 0x68 + lVar4) & 4) != 0) {
        FUN_1408625c2(*(undefined8 *)(lVar2 + 0x10 + lVar4));
        pbVar1 = (byte *)(lVar2 + 0x68 + lVar4);
        *pbVar1 = *pbVar1 & 0xfb;
      }
      FUN_140862a18(param_1,lVar2 + lVar4);
      FUN_140865462(param_1,uVar3 & 0xffffffff,fVar6,&local_68);
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x70;
    } while ((longlong)uVar3 < (longlong)*(int *)(param_1 + 0x28));
    uVar3 = uStack_60 & 0xffffffff;
  }
  FUN_1408680ad(local_68,uVar3);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408625c2 FUN_1408625c2 body=48 status=ok
// SIG undefined FUN_1408625c2(void)

void FUN_1408625c2(longlong param_1)

{
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    FUN_1408626b2(param_1 + 0x10);
    FUN_140862802(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 1408625f2 FUN_1408625f2 body=191 status=ok
// SIG undefined FUN_1408625f2(void)

void FUN_1408625f2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  undefined2 *puVar10;
  
  if ((*(byte *)(param_2 + 0xd) & 2) != 0) {
    cVar3 = *(char *)(param_1 + 0x92);
    if (cVar3 == '\0') {
      iVar8 = 0;
      if (*(char *)(param_1 + 0x91) != '\x01') {
        iVar4 = *(int *)((undefined8 *)*param_2 + 1);
        if (iVar4 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        else {
          puVar10 = *(undefined2 **)*param_2;
          iVar8 = iVar4 + -1;
        }
        iVar8 = FUN_140f7da8a(puVar10,0,iVar8);
      }
      *(char *)(param_2 + 4) = (char)iVar8;
    }
    else if (cVar3 == '\x01') {
      *(undefined1 *)(param_2 + 4) = 0;
    }
    else if (cVar3 == '\x02') {
      *(undefined1 *)(param_2 + 4) = 1;
    }
    else if (cVar3 == '\x03') {
      lVar9 = FUN_140d5712e();
      uVar5 = *(undefined8 *)(lVar9 + 0x28);
      plVar6 = *(longlong **)(lVar9 + 0x30);
      if (plVar6 == (longlong *)0x0) {
        uVar7 = FUN_1467c5074(uVar5);
        *(undefined1 *)(param_2 + 4) = uVar7;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        uVar7 = FUN_1467c5074(uVar5);
        *(undefined1 *)(param_2 + 4) = uVar7;
        LOCK();
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    *(byte *)(param_2 + 0xd) = *(byte *)(param_2 + 0xd) & 0xfd;
  }
  return;
}



// FUNCTION 1408626b2 FUN_1408626b2 body=335 status=ok
// SIG undefined FUN_1408626b2(void)

void FUN_1408626b2(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x84 + (longlong)iVar4 * 0x88) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140862802 FUN_140862802 body=533 status=ok
// SIG undefined FUN_140862802(void)

void FUN_140862802(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
      iVar6 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar6 = iVar4 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_140862983;
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar3 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *param_1;
      plVar5 = *(longlong **)(lVar13 + 0x78 + (longlong)iVar6 * 0x88);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = *(longlong **)(lVar13 + (longlong)iVar6 * 0x88 + 0x48);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar4 = (int)param_1[5];
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar7 = puVar10[lVar13] & uVar14;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar13 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar13 == lVar11) goto LAB_140862983;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_140862983:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144a544ac(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  return;
}



// FUNCTION 140862a18 FUN_140862a18 body=2023 status=ok
// SIG undefined FUN_140862a18(void)

void FUN_140862a18(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  double dVar7;
  undefined8 uVar8;
  byte bVar9;
  char cVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined1 *local_120;
  uint local_10c;
  uint local_108;
  uint local_104;
  longlong local_100;
  undefined4 local_f4;
  longlong *local_f0;
  uint local_e4;
  ulonglong local_e0;
  ulonglong local_d8;
  uint local_d0;
  uint uStack_cc;
  uint local_c0;
  uint local_bc;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined5 uStack_b5;
  longlong *local_b0;
  longlong *local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  bVar9 = *(byte *)(param_2 + 0xd);
  if ((bVar9 & 1) == 0) goto LAB_140862acf;
  local_f0 = param_2 + 7;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)((longlong)param_2 + 0x44) != 0) {
    FUN_14086512c(local_f0);
    bVar9 = *(byte *)(param_2 + 0xd);
  }
  *(byte *)(param_2 + 0xd) = bVar9 & 0xfe;
  if (0 < *(int *)(param_2 + 6)) {
    lVar21 = 0;
    lVar16 = 0;
    do {
      FUN_140863510(param_2[5] + lVar21);
      lVar16 = lVar16 + 1;
      lVar21 = lVar21 + 0x30;
    } while (lVar16 < *(int *)(param_2 + 6));
  }
  if (*(float *)(param_1 + 0x98) <= 0.0) goto LAB_140862acf;
  plVar15 = *(longlong **)(param_1 + 0xf0);
  if (plVar15 == (longlong *)0x0) {
    FUN_1406607e0(&local_b8);
    plVar15 = local_b0;
    uVar8 = CONCAT53(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8)));
    if (local_b0 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xf0) = uVar8;
      plVar17 = *(longlong **)(param_1 + 0xf8);
      if (plVar17 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0xf8) = 0;
LAB_140863193:
        LOCK();
        plVar15 = plVar17 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*plVar17)(plVar17);
          LOCK();
          piVar1 = (int *)((longlong)plVar17 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar12 = *piVar1;
          UNLOCK();
joined_r0x0001408631cc:
          if (iVar12 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0xf0) = uVar8;
      plVar17 = *(longlong **)(param_1 + 0xf8);
      if (local_b0 == plVar17) {
        LOCK();
        plVar17 = local_b0 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_b0)(local_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar12 = *piVar1;
          UNLOCK();
          plVar17 = plVar15;
          goto joined_r0x0001408631cc;
        }
      }
      else {
        *(longlong **)(param_1 + 0xf8) = local_b0;
        if (plVar17 != (longlong *)0x0) goto LAB_140863193;
      }
    }
    plVar15 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_b0 + 1;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)*plVar17 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar1 = (int *)((longlong)plVar15 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
    }
    plVar15 = *(longlong **)(param_1 + 0xf0);
  }
  (**(code **)(*plVar15 + 0x30))(plVar15,*param_2);
  uVar14 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))();
  if ((int)uVar14 != -1) {
    uVar23 = 0;
    uVar18 = 0;
    local_100 = param_1;
    do {
      uVar19 = uVar14 & 0xffffffff;
      local_b0 = (longlong *)param_2[2];
      plVar15 = (longlong *)param_2[3];
      if (plVar15 == (longlong *)0x0) {
        uStack_b7 = *(undefined1 *)(param_2 + 4);
        local_b8 = *(undefined1 *)(param_1 + 0x91);
        local_a8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        uStack_b7 = *(undefined1 *)(param_2 + 4);
        local_b8 = *(undefined1 *)(param_1 + 0x91);
        LOCK();
        *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
        UNLOCK();
        LOCK();
        plVar17 = plVar15 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        local_a8 = plVar15;
        if ((int)*plVar17 == 0) {
          (**(code **)*plVar15)(plVar15);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      uVar11 = 0;
      iVar12 = *(int *)(param_2 + 6);
      iVar13 = (int)uVar23;
      if ((-1 < iVar13) && (iVar13 < iVar12)) {
        lVar16 = param_2[5];
        lVar21 = (uVar23 & 0xffffffff) * 0x30;
        plVar15 = *(longlong **)(lVar16 + lVar21);
        (**(code **)(*plVar15 + 8))(plVar15,&local_d0);
        uVar22 = local_d0;
        if ((int)local_d0 <= (int)uVar18) {
          uVar22 = uVar18;
        }
        if ((int)uVar22 < 1) {
          uVar11 = 0;
        }
        else {
          plVar15 = *(longlong **)(lVar16 + lVar21);
          uVar11 = (**(code **)(*plVar15 + 0x30))
                             (plVar15,uVar22,*(undefined4 *)(param_1 + 0x94),&local_b8);
        }
        iVar12 = *(int *)(param_2 + 6);
      }
      if (iVar13 < iVar12) {
        uVar23 = (ulonglong)iVar13;
        dVar3 = 0.0;
        fVar24 = 0.0;
        local_10c = 0;
        local_108 = 0;
        dVar4 = 0.0;
        local_104 = uVar18;
        local_f4 = uVar11;
        local_d8 = uVar19;
        do {
          uVar14 = local_d8;
          puVar2 = (undefined8 *)(param_2[5] + uVar23 * 0x30);
          plVar15 = *(longlong **)(param_2[5] + uVar23 * 0x30);
          (**(code **)(*plVar15 + 8))(plVar15,&local_c0);
          local_e4 = local_bc;
          uVar22 = (uint)uVar14;
          if ((int)local_bc < (int)(uint)uVar14) {
            uVar22 = local_bc;
          }
          uVar18 = local_c0;
          if ((int)local_c0 <= (int)local_104) {
            uVar18 = local_104;
          }
          uVar19 = (longlong)(int)uVar22;
          do {
            uVar14 = uVar19;
            if ((longlong)uVar14 <= (longlong)(int)uVar18) break;
            cVar10 = FUN_140665610(*(undefined2 *)(*(longlong *)*param_2 + -2 + uVar14 * 2));
            uVar19 = uVar14 - 1;
          } while (cVar10 != '\0');
          param_1 = local_100;
          dVar7 = DAT_14c8463f0;
          dVar5 = DAT_14c8463f0;
          local_e0 = uVar23;
          if (uVar18 != uVar22) {
            uVar20 = (uint)uVar14;
            if (uVar18 == uVar20) {
              local_128 = *(undefined4 *)(local_100 + 0x94);
              local_120 = &local_b8;
              FUN_14086320e(puVar2,&local_d0,uVar18,uVar22);
              dVar7 = DAT_14c8463f0;
              dVar5 = (double)CONCAT44(uStack_cc,local_d0);
            }
            else if (uVar20 == uVar22) {
              local_128 = *(undefined4 *)(local_100 + 0x94);
              local_120 = &local_b8;
              FUN_14086320e(puVar2,&local_d0,uVar18,uVar22);
              dVar7 = (double)CONCAT44(uStack_cc,local_d0);
              dVar5 = (double)CONCAT44(uStack_cc,local_d0);
            }
            else {
              local_128 = *(undefined4 *)(local_100 + 0x94);
              local_120 = &local_b8;
              FUN_14086320e(puVar2,&local_d0,uVar18,uVar14 & 0xffffffff);
              dVar7 = (double)CONCAT44(uStack_cc,local_d0);
              local_128 = *(undefined4 *)(param_1 + 0x94);
              local_120 = &local_b8;
              FUN_14086320e(puVar2,&local_d0,uVar14 & 0xffffffff,uVar22);
              fVar24 = (float)(double)CONCAT44(uStack_cc,local_d0);
              dVar5 = (double)fVar24 + dVar7;
              if (uVar20 - uVar22 != -1) {
                plVar15 = (longlong *)*puVar2;
                plVar17 = (longlong *)puVar2[1];
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                  UNLOCK();
                }
                local_128 = *(undefined4 *)(local_100 + 0x94);
                local_120 = &local_b8;
                (**(code **)(*plVar15 + 0x28))(plVar15,&local_d0,uVar14 & 0xffffffff,uVar14 + 1);
                fVar24 = (float)(double)CONCAT44(uStack_cc,local_d0);
                param_1 = local_100;
                if (plVar17 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = plVar17 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*plVar17)(plVar17);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar17 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    param_1 = local_100;
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                      param_1 = local_100;
                    }
                  }
                }
              }
            }
          }
          dVar4 = dVar4 + dVar7;
          dVar3 = dVar3 + dVar5;
          iVar12 = (**(code **)(*(longlong *)*puVar2 + 0x18))
                             ((longlong *)*puVar2,*(undefined4 *)(param_1 + 0x94));
          iVar13 = (**(code **)(*(longlong *)*puVar2 + 0x20))
                             ((longlong *)*puVar2,*(undefined4 *)(param_1 + 0x94));
          uVar19 = local_d8;
          uVar20 = iVar13 + iVar12;
          if ((short)(iVar13 + iVar12) <= (short)local_10c) {
            uVar20 = local_10c;
          }
          uVar6 = -iVar12;
          if ((short)-iVar12 <= (short)local_108) {
            uVar6 = local_108;
          }
          uVar18 = local_104;
          local_10c = uVar20;
          local_108 = uVar6;
          uVar11 = local_f4;
          if ((int)local_d8 <= (int)local_e4) {
            iVar12 = (int)local_e0;
            uVar23 = local_e0;
            if (iVar12 < *(int *)(param_2 + 6)) {
              plVar15 = *(longlong **)(param_2[5] + (longlong)iVar12 * 0x30);
              (**(code **)(*plVar15 + 8))(plVar15,&local_d0);
              uVar23 = (ulonglong)((uint)(uVar22 == uStack_cc) + iVar12);
              uVar18 = local_104;
              uVar11 = local_f4;
            }
            break;
          }
          uVar23 = local_e0 + 1;
          param_1 = local_100;
        } while ((longlong)uVar23 < (longlong)*(int *)(param_2 + 6));
      }
      else {
        fVar24 = 0.0;
        dVar4 = 0.0;
        local_108 = 0;
        dVar3 = 0.0;
        uVar14 = uVar14 & 0xffffffff;
        local_10c = 0;
      }
      plVar15 = local_a8;
      if (local_a8 != (longlong *)0x0) {
        LOCK();
        plVar17 = local_a8 + 1;
        *(int *)plVar17 = (int)*plVar17 + -1;
        UNLOCK();
        if ((int)*plVar17 == 0) {
          (**(code **)*local_a8)(local_a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar15 + 0x10))(plVar15);
          }
        }
      }
      iVar12 = *(int *)(param_2 + 8);
      *(uint *)(param_2 + 8) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0x44) < iVar12 + 1U) {
        FUN_14086534e(local_f0,iVar12);
      }
      lVar16 = *local_f0;
      lVar21 = (longlong)iVar12 * 0x30;
      *(ulonglong *)(lVar16 + lVar21) = uVar19 << 0x20 | (ulonglong)uVar18;
      *(ulonglong *)(lVar16 + 8 + lVar21) = uVar14 << 0x20 | (ulonglong)uVar18;
      *(double *)(lVar16 + 0x10 + lVar21) = dVar3;
      *(double *)(lVar16 + 0x18 + lVar21) = (double)((local_10c & 0xffff) + (local_108 & 0xffff));
      *(float *)(lVar16 + 0x20 + lVar21) = (float)dVar4;
      *(float *)(lVar16 + 0x24 + lVar21) = fVar24;
      *(undefined2 *)(lVar16 + 0x28 + lVar21) = (undefined2)local_10c;
      *(undefined2 *)(lVar16 + 0x2a + lVar21) = (undefined2)local_108;
      *(char *)(lVar16 + 0x2c + lVar21) = (char)uVar11;
      *(ushort *)(lVar16 + 0x2d + lVar21) = CONCAT11(uStack_b7,local_b8);
      *(undefined1 *)(lVar16 + 0x2f + lVar21) = uStack_b6;
      uVar14 = (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x78))();
      uVar18 = (uint)uVar19;
    } while ((int)uVar14 != -1);
  }
  (**(code **)(**(longlong **)(param_1 + 0xf0) + 0x50))();
LAB_140862acf:
  if ((local_a0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086320e FUN_14086320e body=166 status=ok
// SIG undefined FUN_14086320e(void)

undefined8 *
FUN_14086320e(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  (**(code **)(*(longlong *)*param_1 + 0x28))();
  iVar2 = *(int *)(param_1 + 3);
  *(uint *)(param_1 + 3) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
    FUN_14086518c(param_1 + 2,iVar2);
  }
  *(ulonglong *)(param_1[2] + (longlong)iVar2 * 8) = CONCAT44(param_4,param_3);
  iVar2 = *(int *)(param_1 + 5);
  *(uint *)(param_1 + 5) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
    FUN_14489624a(param_1 + 4,iVar2);
  }
  uVar3 = param_2[1];
  puVar1 = (undefined8 *)(param_1[4] + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  return param_2;
}



// FUNCTION 1408632b4 FUN_1408632b4 body=219 status=ok
// SIG undefined FUN_1408632b4(void)

int FUN_1408632b4(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  short sVar6;
  undefined8 uVar7;
  longlong *plVar8;
  float fVar9;
  
  lVar5 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    plVar8 = *(longlong **)(lVar5 + 0x38);
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    plVar8 = *(longlong **)(lVar5 + 0x28);
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  sVar6 = FUN_140863390(uVar7,param_1 + 0x98,param_2);
  fVar3 = *(float *)(param_1 + 0x110);
  iVar4 = *(int *)(param_1 + 0xa8);
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
  fVar9 = 0.0;
  if (fVar3 <= 0.0) {
    fVar9 = fVar3;
  }
  return (int)((float)(int)sVar6 - ((float)iVar4 + fVar9) * param_2);
}



// FUNCTION 140863390 FUN_140863390 body=82 status=ok
// SIG undefined FUN_140863390(void)

void FUN_140863390(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144955c2e(*(undefined8 *)(param_1 + 0x50),param_2,param_3,&DAT_14c96b1c0);
  if (*(short *)(lVar2 + 0xe2) == 0) {
    uVar1 = FUN_14574f520(*(undefined8 *)(*(longlong *)(lVar2 + 0xd8) + 0x48),lVar2 + 0x50,
                          *(undefined4 *)(lVar2 + 0xd0));
    *(undefined2 *)(lVar2 + 0xe2) = uVar1;
  }
  return;
}



// FUNCTION 1408633e2 FUN_1408633e2 body=219 status=ok
// SIG undefined FUN_1408633e2(void)

int FUN_1408633e2(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  ushort uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(*(longlong *)(DAT_14c98e618 + 0x20) + 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x10) {
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    plVar8 = *(longlong **)(lVar5 + 0x38);
  }
  else {
    uVar7 = *(undefined8 *)(lVar5 + 0x20);
    plVar8 = *(longlong **)(lVar5 + 0x28);
  }
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  uVar6 = FUN_1408634be(uVar7,param_1 + 0x98,param_2);
  fVar3 = *(float *)(param_1 + 0x110);
  iVar4 = *(int *)(param_1 + 0xa8);
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
  return (int)(((float)iVar4 + ABS(fVar3)) * param_2 + (float)uVar6);
}



// FUNCTION 1408634be FUN_1408634be body=82 status=ok
// SIG undefined FUN_1408634be(void)

void FUN_1408634be(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined2 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_144955c2e(*(undefined8 *)(param_1 + 0x50),param_2,param_3,&DAT_14c96b1c0);
  if (*(short *)(lVar2 + 0xe0) == 0) {
    uVar1 = FUN_14574f6a4(*(undefined8 *)(*(longlong *)(lVar2 + 0xd8) + 0x48),lVar2 + 0x50,
                          *(undefined4 *)(lVar2 + 0xd0));
    *(undefined2 *)(lVar2 + 0xe0) = uVar1;
  }
  return;
}



// FUNCTION 140863510 FUN_140863510 body=70 status=ok
// SIG undefined FUN_140863510(void)

void FUN_140863510(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_14086515c(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) == 0) {
    return;
  }
  FUN_1408652ee(param_1 + 0x20,0);
  return;
}



// FUNCTION 140863556 FUN_140863556 body=796 status=ok
// SIG undefined FUN_140863556(void)

double * FUN_140863556(longlong *param_1,double *param_2,int param_3,int param_4,float param_5,
                      undefined2 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  double dVar5;
  longlong *plVar6;
  short sVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_128 [32];
  undefined2 *local_108;
  longlong local_f8;
  float local_f0;
  undefined2 local_ec;
  longlong local_e8;
  longlong local_e0;
  undefined4 uStack_d8;
  undefined3 uStack_d4;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_88;
  int local_84;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_128;
  dVar5 = 0.0;
  if (*(int *)((longlong)param_1 + 0x374) == param_4) {
    dVar5 = (double)ABS(*(float *)((longlong)param_1 + 0x10c) * param_5);
  }
  fVar3 = *(float *)(param_1 + 0x22);
  fVar10 = (float)(int)param_1[0x15] * param_5;
  fVar11 = fVar10;
  if ((int)param_1[0x6e] != param_3) {
    fVar11 = 0.0;
  }
  fVar12 = fVar10;
  if (*(int *)((longlong)param_1 + 0x374) != param_4) {
    fVar12 = 0.0;
  }
  if (param_4 == param_3) {
    sVar7 = (**(code **)(*param_1 + 0x20))(param_1);
    *param_2 = dVar5 + (double)(fVar11 + fVar12);
    param_2[1] = (double)ABS(fVar3 * param_5) + (double)(int)sVar7 + (double)fVar10;
  }
  else {
    iVar4 = *(int *)((undefined8 *)param_1[0xf] + 1);
    if (iVar4 == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = *(undefined2 **)param_1[0xf];
    }
    uVar8 = (ulonglong)(iVar4 - 1);
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    local_f8 = uVar8 << 0x20;
    local_f0 = param_5;
    local_ec = *param_6;
    local_e8 = param_1[0x13];
    local_88 = param_3;
    local_84 = param_4;
    if ((local_e8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_e0 = param_1[0x14];
    if ((local_e0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_d8 = (undefined4)param_1[0x15];
    uStack_d4 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0xab) >> 8);
    local_d0 = param_1[0x16];
    if ((local_d0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_c8 = param_1[0x17];
    lStack_c0 = param_1[0x18];
    local_b8 = param_1[0x19];
    local_b0 = (longlong *)param_1[0x1a];
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    uStack_a8 = (undefined4)param_1[0x1b];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0xdc);
    uStack_a0 = (undefined4)param_1[0x1c];
    local_9c = *(undefined4 *)((longlong)param_1 + 0xe4);
    uStack_98 = (undefined4)param_1[0x1d];
    uStack_94 = *(undefined4 *)((longlong)param_1 + 0xec);
    uStack_90 = (undefined4)param_1[0x1e];
    local_108 = puVar9;
    FUN_140863873(&local_80,param_6 + 4,&local_f8,&local_88);
    plVar6 = local_b0;
    *param_2 = dVar5 + local_80 + (double)(fVar11 + fVar12);
    param_2[1] = (double)ABS(fVar3 * param_5) + local_78 + (double)fVar10;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140863873 FUN_140863873 body=468 status=ok
// SIG undefined FUN_140863873(void)

double * FUN_140863873(double *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                      undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined6 local_e8;
  undefined2 local_e2;
  undefined6 uStack_e0;
  undefined1 local_d8 [56];
  longlong *local_a0;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_60;
  char local_5c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_140863c1e(*param_2,&local_78,param_3,param_5);
  lVar9 = CONCAT44(uStack_74,local_78);
  local_108 = 1;
  FUN_140863a48(lVar9,&local_60,*(undefined4 *)param_4,*(undefined4 *)((longlong)param_4 + 4));
  if (local_5c == '\0') {
    uStack_e0 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_3 + 6) >> 0x10);
    local_e8 = (undefined6)*param_3;
    local_e2 = (undefined2)((ulonglong)*param_3 >> 0x30);
    FUN_144a87366(local_d8,param_3 + 2);
    local_e8 = (undefined6)*param_4;
    local_e2 = (undefined2)((ulonglong)*param_4 >> 0x30);
    FUN_140863c1e(*param_2,&local_f8,&local_e8,param_5);
    uVar8 = uStack_6c;
    uVar7 = uStack_70;
    uVar6 = uStack_74;
    uVar5 = local_78;
    local_78 = local_f8;
    uStack_74 = uStack_f4;
    uStack_70 = uStack_f0;
    uStack_6c = uStack_ec;
    local_f8 = uVar5;
    uStack_f4 = uVar6;
    uStack_f0 = uVar7;
    uStack_ec = uVar8;
    plVar4 = (longlong *)CONCAT44(uVar8,uVar7);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
    local_60 = FUN_142862942(CONCAT44(uStack_74,local_78));
    local_5c = '\x01';
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_a0 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar2 = (int *)((longlong)local_a0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_a0 + 0x10))(local_a0);
        }
      }
    }
    lVar9 = CONCAT44(uStack_74,local_78);
  }
  uVar3 = *(ushort *)(lVar9 + 0x12);
  *param_1 = (double)local_60;
  param_1[1] = (double)uVar3;
  plVar4 = (longlong *)CONCAT44(uStack_6c,uStack_70);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140863a48 FUN_140863a48 body=208 status=ok
// SIG undefined FUN_140863a48(void)

int * FUN_140863a48(longlong *param_1,int *param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int **local_28;
  int *local_20;
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_14 = 0;
  if ((0 < param_3) && (param_5 != '\0')) {
    iVar2 = 0;
    uVar3 = ~*(uint *)(param_1 + 0xb) + param_3;
    local_14 = 0;
    if ((-1 < (int)uVar3) &&
       (((local_14 = iVar2, (int)uVar3 < (int)param_1[0xd] &&
         (piVar4 = (int *)((ulonglong)uVar3 * 0x18 + param_1[0xc]), piVar4 != (int *)0x0)) &&
        (lVar5 = (longlong)*piVar4, lVar5 != -1)))) {
      local_14 = (int)*(char *)(*param_1 + 0x20 + lVar5 * 0xa8);
    }
  }
  local_20 = &local_14;
  local_28 = &local_20;
  local_30 = &LAB_142867392;
  cVar1 = FUN_140863b1a(param_1,param_3,param_4);
  if (cVar1 == '\x02') {
    *param_2 = local_14;
  }
  *(bool *)(param_2 + 1) = cVar1 == '\x02';
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140863b1a FUN_140863b1a body=259 status=ok
// SIG undefined FUN_140863b1a(void)

char FUN_140863b1a(longlong *param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == param_3) {
    cVar3 = '\x02';
  }
  else {
    while (param_2 < param_3) {
      uVar4 = param_2 - (int)param_1[0xb];
      if ((((int)uVar4 < 0) || ((int)param_1[0xd] <= (int)uVar4)) ||
         (piVar5 = (int *)((ulonglong)uVar4 * 0x18 + param_1[0xc]), piVar5 == (int *)0x0)) {
LAB_140863c00:
        cVar3 = '\0';
        goto LAB_140863bd8;
      }
      iVar1 = *piVar5;
      uVar7 = (ulonglong)iVar1;
      if (uVar7 == 0xffffffffffffffff) goto LAB_140863c00;
      iVar6 = iVar1;
      if (((longlong)piVar5[4] < 1) ||
         (iVar6 = *(int *)(*(longlong *)(piVar5 + 2) + -4 + (longlong)piVar5[4] * 4), iVar1 <= iVar6
         )) {
        lVar8 = uVar7 * 0xa8;
        do {
          lVar2 = *param_1;
          local_4c = (int)uVar7;
          cVar3 = (*(code *)*param_4)(param_4[1],lVar2 + lVar8,&local_4c);
          if (cVar3 == '\0') {
            cVar3 = '\x01';
            goto LAB_140863bd8;
          }
          param_2 = param_2 + (uint)*(byte *)(lVar2 + 0x21 + lVar8);
          uVar4 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar4;
          lVar8 = lVar8 + 0xa8;
        } while (iVar6 + 1U != uVar4);
      }
    }
    cVar3 = (param_2 == param_3) * '\x02';
  }
LAB_140863bd8:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar3;
}



// FUNCTION 140863c1e FUN_140863c1e body=816 status=ok
// SIG undefined FUN_140863c1e(void)

longlong * FUN_140863c1e(longlong *param_1,longlong *param_2,int *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  int local_a8;
  int *local_a0;
  int local_98;
  undefined1 local_90;
  undefined1 local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_140863f54(param_1,&local_70);
  if (local_70 != 0) goto LAB_140863c62;
  plVar7 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar7 == (longlong *)0x0) {
LAB_140863e0f:
    plVar7 = (longlong *)0x0;
LAB_140863e11:
    lVar6 = FUN_14001cc68(0x78,0x10);
    FUN_146a238b4(lVar6);
    local_80 = lVar6;
    local_78 = (longlong *)FUN_14001cc68(0x18,0x10);
    local_78[1] = (longlong)&DAT_100000001;
    *local_78 = (longlong)&PTR_FUN_149f0e000;
    local_78[2] = lVar6;
    if (!bVar3) goto LAB_140863d7f;
  }
  else {
    iVar5 = (int)plVar7[1];
    do {
      if (iVar5 == 0) goto LAB_140863e0f;
      LOCK();
      iVar4 = (int)plVar7[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar7 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    if (*param_1 == 0) {
      bVar3 = false;
      goto LAB_140863e11;
    }
    local_88 = (undefined1)param_3[3];
    local_90 = *(undefined1 *)((longlong)param_3 + 0xd);
    local_98 = param_3[2];
    local_a0 = param_3 + 4;
    local_a8 = param_3[1] - *param_3;
    FUN_140a6a694(*(undefined8 *)(*param_1 + 0x50),&local_50,param_4);
    local_60 = local_50;
    local_58 = local_48;
    if (local_48 == (longlong *)0x0) {
      FUN_140865e56(param_1,&local_80,param_3,&local_60);
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      FUN_140865e56(param_1,&local_80,param_3,&local_60);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)local_48 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
LAB_140863d7f:
    LOCK();
    plVar1 = plVar7 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = local_68;
  plVar1 = local_78;
  local_70 = local_80;
  if (local_78 == (longlong *)0x0) {
    if (local_68 != (longlong *)0x0) {
      local_68 = (longlong *)0x0;
LAB_140863ee9:
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
joined_r0x000140863f20:
        if (iVar5 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_78 + 1) = (int)local_78[1] + 1;
    UNLOCK();
    if (local_78 == local_68) {
      LOCK();
      plVar7 = local_78 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2;
        UNLOCK();
        plVar7 = plVar1;
        goto joined_r0x000140863f20;
      }
    }
    else {
      local_68 = local_78;
      if (plVar7 != (longlong *)0x0) goto LAB_140863ee9;
    }
  }
  plVar7 = local_78;
  if (local_78 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_78)(local_78);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_140863c62:
  plVar7 = local_68;
  *param_2 = local_70;
  param_2[1] = (longlong)local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    if (local_68 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_68 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_68)(local_68);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_c8);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140863f54 FUN_140863f54 body=205 status=ok
// SIG undefined FUN_140863f54(void)

longlong * FUN_140863f54(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  uVar4 = FUN_140864236(param_3);
  iVar5 = FUN_140864022((longlong *)(param_1 + 0x10),uVar4,param_3);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x88 + *(longlong *)(param_1 + 0x10), lVar6 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar2 = *(longlong *)(lVar6 + 0x70);
    plVar3 = *(longlong **)(lVar6 + 0x78);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    if (lVar2 == 0) {
LAB_140863ff7:
      *param_2 = 0;
      param_2[1] = 0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar3 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    else {
      if ((longlong)*(int *)(lVar2 + 0x50) != 0) {
        plVar8 = *(longlong **)(lVar2 + 0x48);
        plVar7 = plVar8 + (longlong)*(int *)(lVar2 + 0x50) * 2;
        do {
          if (((*plVar8 == 0) || (plVar8[1] == 0)) || (*(int *)(plVar8[1] + 8) < 1))
          goto LAB_140863ff7;
          plVar8 = plVar8 + 2;
        } while (plVar8 != plVar7);
      }
      *param_2 = lVar2;
      param_2[1] = (longlong)plVar3;
    }
  }
  return param_2;
}



// FUNCTION 140864022 FUN_140864022 body=180 status=ok
// SIG undefined FUN_140864022(void)

int FUN_140864022(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *param_1;
      do {
        lVar2 = (longlong)iVar6 * 0x88;
        if ((*(int *)(lVar5 + lVar2) == *param_3) &&
           (lVar1 = lVar5 + lVar2, *(int *)(lVar1 + 4) == param_3[1])) {
          if ((*(float *)(lVar1 + 8) == (float)param_3[2]) &&
             (((!NAN(*(float *)(lVar1 + 8)) && !NAN((float)param_3[2]) &&
               (*(char *)(lVar1 + 0xc) == (char)param_3[3])) &&
              (*(char *)(lVar1 + 0xd) == *(char *)((longlong)param_3 + 0xd))))) {
            cVar3 = FUN_1408640d6(lVar1 + 0x10,param_3 + 4);
            if (cVar3 != '\0') {
              return iVar6;
            }
            lVar5 = *param_1;
          }
        }
        iVar6 = *(int *)(lVar5 + 0x80 + lVar2);
      } while (iVar6 != -1);
    }
  }
  return -1;
}



// FUNCTION 1408640d6 FUN_1408640d6 body=352 status=ok
// SIG undefined FUN_1408640d6(void)

ulonglong FUN_1408640d6(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(lVar1);
  }
  if (*param_1 == lVar1) {
    lVar1 = param_2[1];
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
    if ((((param_1[1] == lVar1) && ((int)param_1[2] == (int)param_2[2])) &&
        (*(char *)((longlong)param_1 + 0x14) == *(char *)((longlong)param_2 + 0x14))) &&
       ((*(char *)((longlong)param_1 + 0x15) == *(char *)((longlong)param_2 + 0x15) &&
        (*(char *)((longlong)param_1 + 0x16) == *(char *)((longlong)param_2 + 0x16))))) {
      lVar1 = param_2[3];
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      if (param_1[3] == lVar1) {
        if ((*(float *)(param_1 + 4) == *(float *)(param_2 + 4)) &&
           (!NAN(*(float *)(param_1 + 4)) && !NAN(*(float *)(param_2 + 4)))) {
          if ((*(float *)((longlong)param_1 + 0x24) == *(float *)((longlong)param_2 + 0x24)) &&
             (!NAN(*(float *)((longlong)param_1 + 0x24)) &&
              !NAN(*(float *)((longlong)param_2 + 0x24)))) {
            if ((*(float *)(param_1 + 5) == *(float *)(param_2 + 5)) &&
               (!NAN(*(float *)(param_1 + 5)) && !NAN(*(float *)(param_2 + 5)))) {
              if ((*(float *)((longlong)param_1 + 0x2c) == *(float *)((longlong)param_2 + 0x2c)) &&
                 (((!NAN(*(float *)((longlong)param_1 + 0x2c)) &&
                    !NAN(*(float *)((longlong)param_2 + 0x2c)) && (param_1[6] == param_2[6])) &&
                  (param_1[8] == param_2[8])))) {
                if (((*(float *)(param_1 + 9) == *(float *)(param_2 + 9)) &&
                    (!NAN(*(float *)(param_1 + 9)) && !NAN(*(float *)(param_2 + 9)))) &&
                   (*(int *)((longlong)param_1 + 0x4c) == *(int *)((longlong)param_2 + 0x4c))) {
                  if (((*(float *)(param_1 + 10) == *(float *)(param_2 + 10)) &&
                      (!NAN(*(float *)(param_1 + 10)) && !NAN(*(float *)(param_2 + 10)))) &&
                     (*(char *)((longlong)param_1 + 0x55) == *(char *)((longlong)param_2 + 0x55))) {
                    if (*(char *)((longlong)param_1 + 0x55) == '\0') {
                      return CONCAT71((uint7)(uint3)((uint)*(int *)((longlong)param_1 + 0x4c) >> 8),
                                      1);
                    }
                    return (ulonglong)
                           (-(uint)(*(float *)(param_2 + 0xb) == *(float *)(param_1 + 0xb)) & 1);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140864236 FUN_140864236 body=1094 status=ok
// SIG undefined FUN_140864236(void)

uint FUN_140864236(uint *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar2 = uVar3 >> 0xd ^ -uVar3;
  uVar6 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar7 = uVar6 >> 0xd ^ (uVar3 - uVar2) - uVar6;
  uVar2 = uVar7 >> 0xc ^ (uVar2 - uVar6) - uVar7;
  uVar3 = uVar2 << 0x10 ^ (uVar6 - uVar7) - uVar2;
  uVar6 = uVar3 >> 5 ^ (uVar7 - uVar2) - uVar3;
  uVar2 = uVar6 >> 3 ^ (uVar2 - uVar3) - uVar6;
  uVar3 = uVar2 << 10 ^ (uVar3 - uVar6) - uVar2;
  uVar3 = uVar4 >> 0xd ^ (uVar3 >> 0xf ^ uVar6 - (uVar2 + uVar3)) - uVar4;
  uVar2 = uVar3 << 8 ^ (-0x61c88647 - uVar4) - uVar3;
  uVar6 = uVar2 >> 0xd ^ (uVar4 - uVar3) - uVar2;
  uVar3 = uVar6 >> 0xc ^ (uVar3 - uVar2) - uVar6;
  uVar4 = uVar3 << 0x10 ^ (uVar2 - uVar6) - uVar3;
  uVar2 = uVar4 >> 5 ^ (uVar6 - uVar3) - uVar4;
  uVar6 = uVar2 >> 3 ^ (uVar3 - uVar4) - uVar2;
  uVar3 = uVar6 << 10 ^ (uVar4 - uVar2) - uVar6;
  uVar3 = uVar3 >> 0xf ^ uVar2 - (uVar6 + uVar3);
  uVar2 = uVar3 >> 0xd ^ -uVar3;
  uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar6 = uVar4 >> 0xd ^ (uVar3 - uVar2) - uVar4;
  uVar3 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
  uVar4 = uVar3 << 0x10 ^ (uVar4 - uVar6) - uVar3;
  uVar2 = uVar4 >> 5 ^ (uVar6 - uVar3) - uVar4;
  uVar6 = uVar2 >> 3 ^ (uVar3 - uVar4) - uVar2;
  uVar4 = uVar6 << 10 ^ (uVar4 - uVar2) - uVar6;
  uVar3 = param_1[2];
  uVar2 = uVar3 >> 0xd ^ (uVar4 >> 0xf ^ uVar2 - (uVar6 + uVar4)) - uVar3;
  uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar3) - uVar2;
  uVar6 = uVar4 >> 0xd ^ (uVar3 - uVar2) - uVar4;
  uVar3 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
  uVar4 = uVar3 << 0x10 ^ (uVar4 - uVar6) - uVar3;
  uVar7 = uVar4 >> 5 ^ (uVar6 - uVar3) - uVar4;
  uVar6 = uVar7 >> 3 ^ (uVar3 - uVar4) - uVar7;
  uVar3 = uVar6 << 10 ^ (uVar4 - uVar7) - uVar6;
  bVar1 = (byte)param_1[3];
  uVar4 = (uint)bVar1 * -0x100 ^ 0x9e3779b9;
  uVar2 = uVar4 >> 0xd ^ (uint)bVar1 * 2 - uVar4;
  uVar8 = uVar2 >> 0xc ^ -(bVar1 + uVar4 + uVar2);
  uVar4 = uVar8 << 0x10 ^ (uVar4 - uVar2) - uVar8;
  uVar9 = uVar4 >> 5 ^ (uVar2 - uVar8) - uVar4;
  uVar2 = uVar9 >> 3 ^ (uVar8 - uVar4) - uVar9;
  uVar4 = uVar2 << 10 ^ (uVar4 - uVar9) - uVar2;
  uVar4 = uVar4 >> 0xf ^ uVar9 - (uVar2 + uVar4);
  iVar5 = uVar4 - *(byte *)((longlong)param_1 + 0xd);
  uVar8 = iVar5 * 0x100 ^ 0x9e3779b9 - uVar4;
  uVar2 = uVar8 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 0xd) - iVar5) - uVar8;
  uVar4 = uVar2 >> 0xc ^ (iVar5 - uVar8) - uVar2;
  uVar9 = uVar4 << 0x10 ^ (uVar8 - uVar2) - uVar4;
  uVar8 = uVar9 >> 5 ^ (uVar2 - uVar4) - uVar9;
  uVar2 = uVar8 >> 3 ^ (uVar4 - uVar9) - uVar8;
  uVar4 = uVar2 << 10 ^ (uVar9 - uVar8) - uVar2;
  uVar4 = uVar4 >> 0xf ^ uVar8 - (uVar2 + uVar4);
  uVar2 = uVar4 >> 0xd ^ (uVar3 >> 0xf ^ uVar7 - (uVar6 + uVar3)) - uVar4;
  uVar3 = uVar2 << 8 ^ (-0x61c88647 - uVar4) - uVar2;
  uVar6 = uVar3 >> 0xd ^ (uVar4 - uVar2) - uVar3;
  uVar4 = uVar6 >> 0xc ^ (uVar2 - uVar3) - uVar6;
  uVar2 = uVar4 << 0x10 ^ (uVar3 - uVar6) - uVar4;
  uVar3 = uVar2 >> 5 ^ (uVar6 - uVar4) - uVar2;
  uVar6 = uVar3 >> 3 ^ (uVar4 - uVar2) - uVar3;
  uVar2 = uVar6 << 10 ^ (uVar2 - uVar3) - uVar6;
  uVar4 = FUN_140864845(param_1 + 4);
  uVar2 = uVar4 >> 0xd ^ (uVar2 >> 0xf ^ uVar3 - (uVar6 + uVar2)) - uVar4;
  uVar6 = uVar2 << 8 ^ (-0x61c88647 - uVar4) - uVar2;
  uVar3 = (uVar4 - uVar2) - uVar6 ^ uVar6 >> 0xd;
  uVar2 = uVar3 >> 0xc ^ (uVar2 - uVar6) - uVar3;
  uVar4 = uVar2 << 0x10 ^ (uVar6 - uVar3) - uVar2;
  uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 5;
  uVar2 = uVar3 >> 3 ^ (uVar2 - uVar4) - uVar3;
  uVar4 = uVar2 << 10 ^ (uVar4 - uVar3) - uVar2;
  return uVar3 - (uVar2 + uVar4) ^ uVar4 >> 0xf;
}



// FUNCTION 14086467c FUN_14086467c body=456 status=ok
// SIG undefined FUN_14086467c(void)

uint FUN_14086467c(longlong param_1,uint param_2,undefined4 param_3,undefined2 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined3 uStack_7c;
  longlong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar6 = 0;
  if (0 < (int)param_2) {
    iVar3 = *(int *)(*(undefined8 **)(param_1 + 0x78) + 1);
    uVar5 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar5 = uVar6;
    }
    if (uVar5 != param_2) {
      if (iVar3 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = (undefined2 *)**(undefined8 **)(param_1 + 0x78);
      }
      local_a0 = (ulonglong)uVar5 << 0x20;
      local_94 = *param_4;
      local_90 = *(longlong *)(param_1 + 0x98);
      local_98 = param_3;
      if ((local_90 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_88 = *(longlong *)(param_1 + 0xa0);
      if ((local_88 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      uStack_80 = *(undefined4 *)(param_1 + 0xa8);
      uStack_7c = (undefined3)((uint)*(undefined4 *)(param_1 + 0xab) >> 8);
      local_78 = *(longlong *)(param_1 + 0xb0);
      if ((local_78 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_70 = *(undefined8 *)(param_1 + 0xb8);
      uStack_68 = *(undefined8 *)(param_1 + 0xc0);
      local_60 = *(undefined8 *)(param_1 + 200);
      local_58 = *(longlong **)(param_1 + 0xd0);
      if (local_58 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_58 + 1) = (int)local_58[1] + 1;
        UNLOCK();
      }
      uStack_50 = *(undefined4 *)(param_1 + 0xd8);
      uStack_4c = *(undefined4 *)(param_1 + 0xdc);
      uStack_48 = *(undefined4 *)(param_1 + 0xe0);
      local_44 = *(undefined4 *)(param_1 + 0xe4);
      uStack_40 = *(undefined4 *)(param_1 + 0xe8);
      uStack_3c = *(undefined4 *)(param_1 + 0xec);
      uStack_38 = *(undefined4 *)(param_1 + 0xf0);
      uVar6 = FUN_140864f4c(param_4 + 4,&local_a0,param_2 - 1,puVar7);
      plVar4 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_58 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_58)(local_58);
          LOCK();
          piVar2 = (int *)((longlong)plVar4 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140864845 FUN_140864845 body=1799 status=ok
// SIG undefined FUN_140864845(void)

uint FUN_140864845(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  
  uVar2 = ((uint)(*param_1 >> 0x14) & 0xffff ^ (uint)(*param_1 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = uVar2 >> 0xd ^ -uVar2;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar8 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar5) - uVar8;
  uVar2 = uVar3 << 0x10 ^ (uVar5 - uVar8) - uVar3;
  uVar5 = uVar2 >> 5 ^ (uVar8 - uVar3) - uVar2;
  uVar8 = uVar5 >> 3 ^ (uVar3 - uVar2) - uVar5;
  uVar2 = uVar8 << 10 ^ (uVar2 - uVar5) - uVar8;
  uVar3 = ((uint)(param_1[6] >> 0x14) & 0xffff ^ (uint)(param_1[6] >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  uVar5 = uVar3 >> 0xd ^ (uVar2 >> 0xf ^ uVar5 - (uVar8 + uVar2)) - uVar3;
  uVar2 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
  uVar3 = uVar2 >> 0xd ^ (uVar3 - uVar5) - uVar2;
  uVar5 = uVar3 >> 0xc ^ (uVar5 - uVar2) - uVar3;
  uVar2 = uVar5 << 0x10 ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar2 >> 5 ^ (uVar3 - uVar5) - uVar2;
  uVar8 = uVar3 >> 3 ^ (uVar5 - uVar2) - uVar3;
  uVar5 = uVar8 << 10 ^ (uVar2 - uVar3) - uVar8;
  uVar2 = ((uint)(param_1[1] >> 0x14) & 0xffff ^ (uint)(param_1[1] >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  uVar3 = uVar2 >> 0xd ^ (uVar5 >> 0xf ^ uVar3 - (uVar8 + uVar5)) - uVar2;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar8 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar8 >> 0xc ^ (uVar3 - uVar5) - uVar8;
  uVar2 = uVar3 << 0x10 ^ (uVar5 - uVar8) - uVar3;
  uVar8 = uVar2 >> 5 ^ (uVar8 - uVar3) - uVar2;
  uVar5 = uVar8 >> 3 ^ (uVar3 - uVar2) - uVar8;
  uVar3 = uVar5 << 10 ^ (uVar2 - uVar8) - uVar5;
  uVar1 = param_1[8];
  uVar2 = (uint)(uVar1 >> 0x10);
  uVar7 = (uint)uVar1 & 0xffff;
  uVar2 = ((uint)uVar1 << 0x10 | uVar7) + (int)(uVar1 >> 0x20) + (uVar2 << 0x13 | uVar2 & 0xffff) +
          (uVar7 >> 4);
  uVar5 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar8 - (uVar5 + uVar3)) - uVar2;
  uVar3 = uVar5 << 8 ^ (-0x61c88647 - uVar2) - uVar5;
  uVar8 = uVar3 >> 0xd ^ (uVar2 - uVar5) - uVar3;
  uVar2 = uVar8 >> 0xc ^ (uVar5 - uVar3) - uVar8;
  uVar5 = uVar2 << 0x10 ^ (uVar3 - uVar8) - uVar2;
  uVar3 = uVar5 >> 5 ^ (uVar8 - uVar2) - uVar5;
  uVar8 = uVar3 >> 3 ^ (uVar2 - uVar5) - uVar3;
  uVar2 = uVar8 << 10 ^ (uVar5 - uVar3) - uVar8;
  fVar10 = *(float *)(param_1 + 9);
  if (65535.0 <= fVar10) {
    fVar10 = 65535.0;
  }
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  uVar3 = (uint)fVar10 >> 0xd ^ (uVar2 >> 0xf ^ uVar3 - (uVar8 + uVar2)) - (int)fVar10;
  uVar2 = uVar3 << 8 ^ (-0x61c88647 - uVar3) - (int)fVar10;
  uVar8 = uVar2 >> 0xd ^ ((int)fVar10 - uVar3) - uVar2;
  uVar5 = uVar8 >> 0xc ^ (uVar3 - uVar2) - uVar8;
  uVar2 = uVar5 << 0x10 ^ (uVar2 - uVar8) - uVar5;
  uVar3 = uVar2 >> 5 ^ (uVar8 - uVar5) - uVar2;
  uVar8 = uVar3 >> 3 ^ (uVar5 - uVar2) - uVar3;
  uVar5 = uVar8 << 10 ^ (uVar2 - uVar3) - uVar8;
  uVar2 = *(uint *)((longlong)param_1 + 0x4c);
  uVar5 = uVar2 >> 0xd ^ (uVar5 >> 0xf ^ uVar3 - (uVar8 + uVar5)) - uVar2;
  uVar3 = uVar5 << 8 ^ (-0x61c88647 - uVar2) - uVar5;
  uVar2 = uVar3 >> 0xd ^ (uVar2 - uVar5) - uVar3;
  uVar8 = uVar2 >> 0xc ^ (uVar5 - uVar3) - uVar2;
  uVar5 = uVar8 << 0x10 ^ (uVar3 - uVar2) - uVar8;
  uVar2 = uVar5 >> 5 ^ (uVar2 - uVar8) - uVar5;
  uVar3 = uVar2 >> 3 ^ (uVar8 - uVar5) - uVar2;
  uVar5 = uVar3 << 10 ^ (uVar5 - uVar2) - uVar3;
  fVar10 = *(float *)(param_1 + 10);
  if (5.0 <= fVar10) {
    fVar10 = 5.0;
  }
  if (fVar10 <= -5.0) {
    fVar10 = -5.0;
  }
  uVar2 = (uint)fVar10 >> 0xd ^ (uVar5 >> 0xf ^ uVar2 - (uVar3 + uVar5)) - (int)fVar10;
  uVar3 = uVar2 << 8 ^ (-0x61c88647 - uVar2) - (int)fVar10;
  uVar5 = uVar3 >> 0xd ^ ((int)fVar10 - uVar2) - uVar3;
  uVar2 = uVar5 >> 0xc ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar2 << 0x10 ^ (uVar3 - uVar5) - uVar2;
  uVar8 = uVar3 >> 5 ^ (uVar5 - uVar2) - uVar3;
  uVar6 = uVar8 >> 3 ^ (uVar2 - uVar3) - uVar8;
  uVar3 = uVar6 << 10 ^ (uVar3 - uVar8) - uVar6;
  uVar2 = (uint)param_1[2];
  uVar7 = uVar2 >> 0xd ^ -uVar2;
  uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar2) - uVar7;
  uVar9 = uVar5 >> 0xd ^ (uVar2 - uVar7) - uVar5;
  uVar2 = uVar9 >> 0xc ^ (uVar7 - uVar5) - uVar9;
  uVar7 = uVar2 << 0x10 ^ (uVar5 - uVar9) - uVar2;
  uVar5 = uVar7 >> 5 ^ (uVar9 - uVar2) - uVar7;
  uVar9 = uVar5 >> 3 ^ (uVar2 - uVar7) - uVar5;
  uVar2 = uVar9 << 10 ^ (uVar7 - uVar5) - uVar9;
  uVar2 = uVar2 >> 0xf ^ uVar5 - (uVar9 + uVar2);
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x14);
  uVar2 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar7 = uVar2 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 0x14) - iVar4) - uVar2;
  uVar5 = uVar7 >> 0xc ^ (iVar4 - uVar2) - uVar7;
  uVar2 = uVar5 << 0x10 ^ (uVar2 - uVar7) - uVar5;
  uVar7 = uVar2 >> 5 ^ (uVar7 - uVar5) - uVar2;
  uVar5 = uVar7 >> 3 ^ (uVar5 - uVar2) - uVar7;
  uVar2 = uVar5 << 10 ^ (uVar2 - uVar7) - uVar5;
  uVar2 = uVar2 >> 0xf ^ uVar7 - (uVar5 + uVar2);
  iVar4 = uVar2 - *(byte *)((longlong)param_1 + 0x15);
  uVar5 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar2;
  uVar7 = uVar5 >> 0xd ^ ((uint)*(byte *)((longlong)param_1 + 0x15) - iVar4) - uVar5;
  uVar2 = uVar7 >> 0xc ^ (iVar4 - uVar5) - uVar7;
  uVar5 = uVar2 << 0x10 ^ (uVar5 - uVar7) - uVar2;
  uVar9 = uVar5 >> 5 ^ (uVar7 - uVar2) - uVar5;
  uVar7 = uVar9 >> 3 ^ (uVar2 - uVar5) - uVar9;
  uVar2 = uVar7 << 10 ^ (uVar5 - uVar9) - uVar7;
  uVar2 = uVar2 >> 0xf ^ uVar9 - (uVar7 + uVar2);
  uVar3 = uVar2 >> 0xd ^ (uVar3 >> 0xf ^ uVar8 - (uVar6 + uVar3)) - uVar2;
  uVar5 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
  uVar2 = uVar5 >> 0xd ^ (uVar2 - uVar3) - uVar5;
  uVar3 = uVar2 >> 0xc ^ (uVar3 - uVar5) - uVar2;
  uVar8 = uVar3 << 0x10 ^ (uVar5 - uVar2) - uVar3;
  uVar5 = uVar8 >> 5 ^ (uVar2 - uVar3) - uVar8;
  uVar3 = uVar5 >> 3 ^ (uVar3 - uVar8) - uVar5;
  uVar2 = uVar3 << 10 ^ (uVar8 - uVar5) - uVar3;
  return uVar2 >> 0xf ^ uVar5 - (uVar3 + uVar2);
}



// FUNCTION 140864f4c FUN_140864f4c body=479 status=ok
// SIG undefined FUN_140864f4c(void)

ulonglong FUN_140864f4c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,
                       undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint6 local_c8;
  undefined2 uStack_c2;
  undefined6 uStack_c0;
  undefined1 local_b8 [56];
  longlong *local_80;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_30;
  int iVar8;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140863c1e(*param_1,&local_58,param_2);
  plVar2 = (longlong *)CONCAT44(uStack_54,local_58);
  iVar8 = (int)param_3;
  uVar7 = iVar8 - (int)plVar2[0xb];
  if (((((int)uVar7 < 0) || ((int)plVar2[0xd] <= (int)uVar7)) ||
      (piVar9 = (int *)((ulonglong)uVar7 * 0x18 + plVar2[0xc]), piVar9 == (int *)0x0)) ||
     (lVar10 = (longlong)*piVar9, lVar10 == -1)) {
    uStack_c0 = (undefined6)((ulonglong)*(undefined8 *)((longlong)param_2 + 6) >> 0x10);
    local_c8 = (uint6)*param_2;
    uStack_c2 = (undefined2)((ulonglong)*param_2 >> 0x30);
    FUN_144a87366(local_b8,param_2 + 2);
    local_c8 = (uint6)param_3 & 0xffffffff | (uint6)(iVar8 + 2U) << 0x20;
    uStack_c2 = (undefined2)(iVar8 + 2U >> 0x10);
    FUN_140863c1e(*param_1,&local_d8,&local_c8,param_4);
    uVar6 = uStack_4c;
    uVar5 = uStack_50;
    uVar4 = uStack_54;
    uVar3 = local_58;
    local_58 = local_d8;
    uStack_54 = uStack_d4;
    uStack_50 = uStack_d0;
    uStack_4c = uStack_cc;
    local_d8 = uVar3;
    uStack_d4 = uVar4;
    uStack_d0 = uVar5;
    uStack_cc = uVar6;
    plVar2 = (longlong *)CONCAT44(uVar6,uVar5);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar9 = (int *)((longlong)plVar2 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    plVar2 = (longlong *)CONCAT44(uStack_54,local_58);
    uVar7 = iVar8 - (int)plVar2[0xb];
    if ((((int)uVar7 < 0) || ((int)plVar2[0xd] <= (int)uVar7)) ||
       ((piVar9 = (int *)((ulonglong)uVar7 * 0x18 + plVar2[0xc]), piVar9 == (int *)0x0 ||
        (lVar10 = (longlong)*piVar9, lVar10 == -1)))) {
      uVar7 = 0;
    }
    else {
      uVar7 = CONCAT31((int3)(uVar7 >> 8),*(undefined1 *)(*plVar2 + 0x20 + lVar10 * 0xa8));
    }
    uVar11 = (ulonglong)uVar7;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_80 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar9 = (int *)((longlong)local_80 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
  }
  else {
    uVar11 = CONCAT71((int7)((ulonglong)param_3 >> 8),
                      *(undefined1 *)(*plVar2 + 0x20 + lVar10 * 0xa8)) & 0xffffffff;
  }
  plVar2 = (longlong *)CONCAT44(uStack_4c,uStack_50);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar9 = (int *)((longlong)plVar2 + 0xc);
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (*piVar9 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086512c FUN_14086512c body=48 status=ok
// SIG undefined FUN_14086512c(void)

void FUN_14086512c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14086515c FUN_14086515c body=48 status=ok
// SIG undefined FUN_14086515c(void)

void FUN_14086515c(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 14086518c FUN_14086518c body=353 status=ok
// SIG undefined FUN_14086518c(void)

void FUN_14086518c(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140865213;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140865213:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1408652ee FUN_1408652ee body=96 status=ok
// SIG undefined FUN_1408652ee(void)

void FUN_1408652ee(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 14086534e FUN_14086534e body=275 status=ok
// SIG undefined FUN_14086534e(void)

void FUN_14086534e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 140865462 FUN_140865462 body=2547 status=ok
// SIG undefined FUN_140865462(void)

void FUN_140865462(longlong param_1,int param_2,float param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  double dVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  uint *local_160;
  int *local_158;
  uint *local_150;
  longlong *local_148;
  uint local_134;
  undefined8 local_130;
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  int local_100;
  int local_fc;
  undefined4 local_f8;
  int iStack_f4;
  int local_f0;
  int local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c0;
  longlong *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_dc = 0;
  local_e0 = 0;
  local_e4 = -(uint)(*(int *)(*(longlong *)(param_1 + 0x20) + 0x50 + (longlong)param_2 * 0x70) < 1);
  if (0.0 < *(float *)(param_1 + 0x98)) {
    puVar14 = (undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)param_2 * 0x70);
    iVar6 = *(int *)(puVar14 + 8);
    if (iVar6 != 0) {
      if (0 < iVar6) {
        fVar18 = 0.0;
        uVar19 = 0;
        iVar5 = 0;
        do {
          lVar4 = puVar14[7];
          lVar11 = (longlong)iVar5 * 0x30;
          iVar13 = iVar5 + 1;
          cVar12 = (char)*(undefined4 *)(lVar4 + 0x2c + lVar11);
          if (fVar18 != 0.0) {
            cVar12 = '\0';
          }
          if (NAN(fVar18)) {
            cVar12 = '\0';
          }
          fVar21 = (float)(int)cVar12;
          fVar16 = *(float *)(lVar4 + 0x20 + lVar11) + fVar18 + fVar21;
          lVar3 = lVar4 + lVar11;
          if ((*(char *)(param_1 + 0x9c) == '\x01' && fVar18 == 0.0) && param_3 < fVar16) {
            local_c0 = puVar14[2];
            plVar9 = (longlong *)puVar14[3];
            if (plVar9 == (longlong *)0x0) {
              local_c8._0_2_ =
                   CONCAT11(*(undefined1 *)(puVar14 + 4),*(undefined1 *)(param_1 + 0x91));
              local_b8 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              local_c8._0_2_ =
                   CONCAT11(*(undefined1 *)(puVar14 + 4),*(undefined1 *)(param_1 + 0x91));
              LOCK();
              *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
              UNLOCK();
              LOCK();
              plVar1 = plVar9 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              local_b8 = plVar9;
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar9)(plVar9);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
            local_118 = (longlong)(int)local_e0;
            if (*(int *)((undefined8 *)*puVar14 + 1) == 0) {
              puVar8 = &DAT_149dfb77a;
            }
            else {
              puVar8 = *(undefined2 **)*puVar14;
            }
            FUN_14006620a(&local_f8,puVar8 + local_118,*(int *)(lVar3 + 0xc) - local_e0);
            (**(code **)(**(longlong **)(param_1 + 0x100) + 0x30))
                      (*(longlong **)(param_1 + 0x100),&local_f8);
            plVar9 = *(longlong **)(param_1 + 0x100);
            local_128 = (longlong *)(**(code **)(*plVar9 + 0x78))();
            if ((int)local_128 == -1) {
              fVar18 = 0.0;
              uVar19 = 0;
            }
            else {
              local_108 = (longlong)iVar13;
              local_110 = (longlong *)0x0;
              fVar18 = 0.0;
              uVar19 = 0;
              do {
                fVar16 = 0.0;
                uVar20 = 0;
                for (local_134 = local_dc; (int)local_134 < *(int *)(puVar14 + 6);
                    local_134 = local_134 + 1) {
                  local_130 = (longlong *)puVar14[5];
                  local_120 = (longlong)(int)local_dc * 0x30;
                  (**(code **)(**(longlong **)((longlong)local_130 + local_120) + 8))
                            (*(longlong **)((longlong)local_130 + local_120),&local_100);
                  iVar5 = (int)local_118;
                  iVar6 = local_100 - iVar5;
                  if (local_100 - iVar5 < (int)local_110) {
                    iVar6 = (int)local_110;
                  }
                  iVar10 = local_fc - iVar5;
                  if ((int)local_128 <= local_fc - iVar5) {
                    iVar10 = (int)local_128;
                  }
                  if (iVar10 <= iVar6) {
                    iVar10 = iVar6;
                  }
                  plVar9 = *(longlong **)((longlong)local_130 + local_120);
                  local_130 = *(longlong **)((longlong)local_130 + 8 + local_120);
                  if (local_130 != (longlong *)0x0) {
                    LOCK();
                    *(int *)(local_130 + 1) = (int)local_130[1] + 1;
                    UNLOCK();
                  }
                  local_160 = &local_c8;
                  local_168 = (undefined4 *)
                              CONCAT44(local_168._4_4_,*(undefined4 *)(param_1 + 0x94));
                  (**(code **)(*plVar9 + 0x28))(plVar9,&local_d8,iVar6 + iVar5,iVar5 + iVar10);
                  dVar15 = (double)fVar16 + (double)CONCAT44(uStack_d4,local_d8);
                  uVar20 = (undefined4)((ulonglong)dVar15 >> 0x20);
                  if (local_130 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_130 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      plVar9 = local_130;
                      (**(code **)*local_130)();
                      LOCK();
                      piVar2 = (int *)((longlong)local_130 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      if (*piVar2 == 0) {
                        plVar9 = local_130;
                        (**(code **)(*local_130 + 0x10))();
                      }
                    }
                  }
                  fVar16 = (float)dVar15;
                  if (iVar10 == (int)local_128) break;
                }
                iVar6 = local_f0 + -1;
                if (local_f0 == 0) {
                  iVar6 = 0;
                }
                local_130 = (longlong *)
                            CONCAT44(local_130._4_4_,
                                     (int)CONCAT71((int7)((ulonglong)plVar9 >> 8),
                                                   (int)local_128 == iVar6));
                fVar16 = fVar16 + fVar18;
                if ((((fVar16 <= param_3) && ((int)local_128 == iVar6)) &&
                    (iVar13 < *(int *)(puVar14 + 8))) &&
                   (*(float *)(puVar14[7] + 0x20 + local_108 * 0x30) + fVar16 + fVar21 <= param_3))
                break;
                if ((int)local_128 != iVar6 && fVar16 <= param_3) {
LAB_140865ca3:
                  uVar7 = (**(code **)(**(longlong **)(param_1 + 0x100) + 0x78))();
                  local_110 = local_128;
                  plVar9 = (longlong *)(ulonglong)uVar7;
                  local_128 = plVar9;
                }
                else {
                  if (((int)local_128 != iVar6) || (fVar18 != 0.0 && param_3 < fVar16)) {
                    if ((fVar18 != 0.0) || (NAN(fVar18))) {
                      local_134 = (int)local_118 + (int)local_110;
                      local_120 = (ulonglong)local_120._4_4_ << 0x20;
                    }
                    else {
                      local_134 = (int)local_118 + (int)local_128;
                      local_120 = CONCAT44(local_120._4_4_,
                                           (int)CONCAT71((uint7)(uint3)(local_134 >> 8),1));
                    }
                  }
                  else {
                    local_134 = *(uint *)(lVar3 + 4);
                    local_120 = CONCAT44(local_120._4_4_,
                                         (int)CONCAT71((uint7)(uint3)(local_134 >> 8),1));
                    local_130 = (longlong *)((ulonglong)local_130._4_4_ << 0x20);
                  }
                  uStack_d4 = uStack_d4 & 0xffffff00;
                  local_150 = &local_e0;
                  local_158 = &local_e4;
                  local_160 = &local_dc;
                  local_168 = &local_d8;
                  local_148 = param_4;
                  FUN_140866586(param_1,param_2,local_134,CONCAT44(uVar19,fVar18));
                  uVar7 = local_dc;
                  if (((int)local_dc < *(int *)(puVar14 + 6)) &&
                     (plVar9 = *(longlong **)(puVar14[5] + (longlong)(int)local_dc * 0x30),
                     (**(code **)(*plVar9 + 8))(plVar9,&local_d8), local_134 == uStack_d4)) {
                    local_dc = uVar7 + 1;
                  }
                  local_e0 = local_134;
                  iVar6 = *(int *)((longlong)param_4 + 0xc);
                  plVar9 = (longlong *)*param_4;
                  FUN_1408680ad(plVar9,(int)param_4[1]);
                  *(undefined4 *)(param_4 + 1) = 0;
                  if ((iVar6 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
                    plVar9 = param_4;
                    FUN_146a7538a(param_4,0);
                  }
                  if ((char)local_130 != '\0') {
                    uStack_d4 = uStack_d4 & 0xffffff00;
                    local_150 = &local_e0;
                    local_158 = &local_e4;
                    local_160 = &local_dc;
                    local_168 = &local_d8;
                    local_130 = (longlong *)CONCAT44(local_130._4_4_,*(undefined4 *)(lVar3 + 4));
                    local_148 = param_4;
                    FUN_140866586(param_1,param_2,*(undefined4 *)(lVar3 + 4),0);
                    uVar7 = local_dc;
                    if ((int)local_dc < *(int *)(puVar14 + 6)) {
                      plVar9 = *(longlong **)(puVar14[5] + (longlong)(int)local_dc * 0x30);
                      (**(code **)(*plVar9 + 8))(plVar9,&local_d8);
                      if ((uint)local_130 == uStack_d4) {
                        local_dc = uVar7 + 1;
                      }
                    }
                    local_e0 = (uint)local_130;
                    iVar6 = *(int *)((longlong)param_4 + 0xc);
                    FUN_1408680ad(*param_4,(int)param_4[1]);
                    *(undefined4 *)(param_4 + 1) = 0;
                    fVar16 = 0.0;
                    uVar20 = 0;
                    if ((iVar6 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
                      FUN_146a7538a(param_4,0);
                    }
                    goto LAB_140865ca3;
                  }
                  fVar16 = 0.0;
                  uVar20 = 0;
                  if ((char)local_120 != '\0') goto LAB_140865ca3;
                  uVar7 = (uint)local_128;
                }
                fVar18 = fVar16;
                uVar19 = uVar20;
              } while (uVar7 != 0xffffffff);
            }
            (**(code **)(**(longlong **)(param_1 + 0x100) + 0x50))();
            if (CONCAT44(iStack_f4,local_f8) != 0) {
              FUN_1400020a8();
            }
            plVar9 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              LOCK();
              plVar1 = local_b8 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*local_b8)(local_b8);
                LOCK();
                piVar2 = (int *)((longlong)plVar9 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar9 + 0x10))(plVar9);
                }
              }
            }
          }
          else {
            dVar15 = (double)fVar18;
            dVar17 = *(double *)(lVar4 + 0x10 + lVar11) + dVar15;
            if (((double)param_3 < (double)(int)cVar12 + dVar17) || (iVar13 == iVar6)) {
              lVar11 = (longlong)(iVar5 + -1) * 0x30 + lVar4;
              iVar13 = iVar5 + -1;
              if ((iVar5 == 0 || fVar18 == 0.0) || fVar16 <= param_3) {
                lVar11 = lVar3;
                iVar13 = iVar5;
              }
              if (param_3 < fVar16) {
                uVar19 = 0;
                fVar18 = (float)(*(double *)(lVar11 + 0x10) + dVar15);
                if (param_3 <= fVar18) {
                  fVar18 = param_3;
                }
              }
              else {
                fVar18 = fVar18 + *(float *)(lVar11 + 0x20) + *(float *)(lVar11 + 0x24);
              }
              local_c4 = 0;
              if (lVar11 != (longlong)iVar6 * 0x30 + lVar4 + -0x30) {
                if (lVar11 == lVar3) {
                  dVar17 = 0.0;
                }
                else {
                  dVar17 = *(double *)(lVar11 + 0x10);
                }
                local_c8 = (float)((double)*(float *)(lVar11 + 0x20) + (dVar15 - dVar17));
                local_c4 = 1;
              }
              local_150 = &local_e0;
              local_158 = &local_e4;
              local_160 = &local_dc;
              local_168 = &local_c8;
              local_148 = param_4;
              FUN_140866586(param_1,param_2,*(undefined4 *)(lVar11 + 4),CONCAT44(uVar19,fVar18));
              uVar7 = local_dc;
              if ((int)local_dc < *(int *)(puVar14 + 6)) {
                local_130 = (longlong *)CONCAT44(local_130._4_4_,*(undefined4 *)(lVar11 + 4));
                plVar9 = *(longlong **)(puVar14[5] + (longlong)(int)local_dc * 0x30);
                (**(code **)(*plVar9 + 8))(plVar9,&local_f8);
                if ((uint)local_130 == iStack_f4) {
                  local_dc = uVar7 + 1;
                }
              }
              local_e0 = *(uint *)(lVar11 + 4);
              iVar6 = *(int *)((longlong)param_4 + 0xc);
              FUN_1408680ad(*param_4,(int)param_4[1]);
              *(undefined4 *)(param_4 + 1) = 0;
              if ((iVar6 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
                FUN_146a7538a(param_4,0);
              }
              iVar13 = iVar13 + 1;
              fVar18 = 0.0;
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              fVar18 = (float)dVar17;
            }
          }
          iVar6 = *(int *)(puVar14 + 8);
          iVar5 = iVar13;
        } while (iVar13 < iVar6);
      }
      goto LAB_140865573;
    }
  }
  local_168 = &local_c8;
  local_c4 = 0;
  local_150 = &local_e0;
  local_158 = &local_e4;
  local_160 = &local_dc;
  local_148 = param_4;
  FUN_140866586(param_1,param_2,0xffffffff,0);
  iVar6 = *(int *)((longlong)param_4 + 0xc);
  FUN_1408680ad(*param_4,(int)param_4[1]);
  *(undefined4 *)(param_4 + 1) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_4 + 0xc) != 0)) {
    FUN_146a7538a(param_4,0);
  }
LAB_140865573:
  if (*(char *)(param_1 + 0xb8) == '\0') {
    *(float *)(param_1 + 0xc4) = *(float *)(param_1 + 0xc4) - *(float *)(param_1 + 200);
  }
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140865e56 FUN_140865e56 body=1839 status=ok
// SIG undefined FUN_140865e56(void)

undefined8 *
FUN_140865e56(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  void *_Src;
  uint *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  byte bVar20;
  int iVar21;
  uint *puVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  void *_Dst;
  int iVar26;
  ulonglong uVar27;
  int iVar28;
  uint uVar29;
  ulonglong uVar30;
  
  uVar6 = *param_4;
  lVar24 = param_4[1];
  if (lVar24 != 0) {
    LOCK();
    *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x44) == 0) {
    iVar17 = *(int *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = iVar17 + 1;
    if (*(int *)(param_1 + 0x1c) == iVar17) {
      FUN_1401600aa(plVar1,iVar17);
    }
    iVar26 = *(int *)(param_1 + 0x38);
    if (iVar26 == 0) {
      iVar14 = -1;
    }
    else {
      iVar14 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar14 = iVar26 + -1;
      }
      iVar14 = iVar14 >> 5;
    }
    lVar25 = param_1 + 0x20;
    iVar21 = iVar26 + 1;
    iVar28 = iVar26 + 0x1f;
    if (-1 < iVar26) {
      iVar28 = iVar26;
    }
    if (iVar28 >> 5 == iVar14) {
      *(int *)(param_1 + 0x38) = iVar21;
    }
    else {
      if (*(int *)(param_1 + 0x3c) <= iVar26) {
        if (iVar26 + 0x20U < 0xa0) {
          iVar21 = 0x80;
          iVar14 = iVar26;
        }
        else {
          uVar29 = iVar26 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x3c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar29) {
              uVar15 = uVar29;
            }
          }
          else {
            uVar15 = (uVar29 * 3 >> 3) + uVar29 + 0x10;
          }
          uVar27 = FUN_144a3809e(uVar15 << 2,0);
          iVar14 = (int)(uVar27 >> 2);
          iVar21 = -0x20;
          if ((int)uVar29 <= iVar14) {
            iVar21 = iVar14 << 5;
          }
          iVar14 = *(int *)(param_1 + 0x38);
        }
        *(int *)(param_1 + 0x3c) = iVar21;
        FUN_1446efbd8(lVar25,iVar14);
        iVar21 = *(int *)(param_1 + 0x38) + 1;
      }
      iVar14 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar14 = iVar21;
      }
      *(int *)(param_1 + 0x38) = iVar21;
      if (iVar21 % 0x20 != 0) {
        lVar18 = *(longlong *)(param_1 + 0x30);
        if (*(longlong *)(param_1 + 0x30) == 0) {
          lVar18 = lVar25;
        }
        bVar20 = -(char)(iVar21 % 0x20);
        *(uint *)(lVar18 + (longlong)(iVar14 >> 5) * 4) =
             (uint)(*(int *)(lVar18 + (longlong)(iVar14 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar25 = *(longlong *)(param_1 + 0x30);
    }
    bVar20 = (byte)iVar26 & 0x1f;
    puVar4 = (uint *)(lVar25 + (longlong)(iVar28 >> 5) * 4);
    *puVar4 = *puVar4 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x40);
    lVar18 = (longlong)iVar17;
    iVar26 = *(int *)(*(longlong *)(param_1 + 0x10) + 4 + lVar18 * 0x88);
    *(int *)(param_1 + 0x40) = iVar26;
    iVar14 = *(int *)(param_1 + 0x44) + -1;
    *(int *)(param_1 + 0x44) = iVar14;
    if (iVar14 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar26 * 0x88) = 0xffffffff;
    }
  }
  puVar4 = (uint *)(param_1 + 0x20);
  puVar22 = *(uint **)(param_1 + 0x30);
  if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
    puVar22 = puVar4;
  }
  iVar26 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar26 = iVar17;
  }
  puVar22[iVar26 >> 5] = puVar22[iVar26 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar25 = *(longlong *)(param_1 + 0x10);
  lVar18 = lVar18 * 0x88;
  _Src = (void *)(lVar25 + lVar18);
  uVar7 = *param_3;
  *(undefined8 *)(lVar25 + 6 + lVar18) = *(undefined8 *)((longlong)param_3 + 6);
  *(undefined8 *)(lVar25 + lVar18) = uVar7;
  lVar23 = param_3[2];
  *(longlong *)(lVar25 + 0x10 + lVar18) = lVar23;
  if ((lVar23 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e();
  }
  bVar20 = DAT_14c950c29;
  lVar18 = param_3[3];
  *(longlong *)((longlong)_Src + 0x18) = lVar18;
  if ((lVar18 != 0 & bVar20) == 1) {
    FUN_14689c22e();
    bVar20 = DAT_14c950c29;
  }
  uVar5 = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)((longlong)_Src + 0x23) = *(undefined4 *)((longlong)param_3 + 0x23);
  *(undefined4 *)((longlong)_Src + 0x20) = uVar5;
  lVar18 = param_3[5];
  *(longlong *)((longlong)_Src + 0x28) = lVar18;
  if ((lVar18 != 0 & bVar20) == 1) {
    FUN_14689c22e();
  }
  uVar7 = param_3[7];
  *(undefined8 *)((longlong)_Src + 0x30) = param_3[6];
  *(undefined8 *)((longlong)_Src + 0x38) = uVar7;
  *(undefined8 *)((longlong)_Src + 0x40) = param_3[8];
  lVar18 = param_3[9];
  *(longlong *)((longlong)_Src + 0x48) = lVar18;
  if (lVar18 != 0) {
    LOCK();
    *(int *)(lVar18 + 8) = *(int *)(lVar18 + 8) + 1;
    UNLOCK();
  }
  uVar5 = *(undefined4 *)(param_3 + 10);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x54);
  uVar9 = *(undefined4 *)(param_3 + 0xb);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x5c);
  uVar11 = *(undefined4 *)(param_3 + 0xc);
  uVar12 = *(undefined4 *)((longlong)param_3 + 100);
  uVar13 = *(undefined4 *)(param_3 + 0xd);
  *(undefined4 *)((longlong)_Src + 0x5c) = *(undefined4 *)((longlong)param_3 + 0x5c);
  *(undefined4 *)((longlong)_Src + 0x60) = uVar11;
  *(undefined4 *)((longlong)_Src + 100) = uVar12;
  *(undefined4 *)((longlong)_Src + 0x68) = uVar13;
  *(undefined4 *)((longlong)_Src + 0x50) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x54) = uVar8;
  *(undefined4 *)((longlong)_Src + 0x58) = uVar9;
  *(undefined4 *)((longlong)_Src + 0x5c) = uVar10;
  *(undefined8 *)((longlong)_Src + 0x70) = uVar6;
  *(longlong *)((longlong)_Src + 0x78) = lVar24;
  *(undefined4 *)((longlong)_Src + 0x80) = 0xffffffff;
  uVar15 = FUN_140864236(_Src);
  uVar29 = 1;
  if (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) == 1) {
    uVar16 = 1;
  }
  else {
    iVar26 = FUN_140864022(plVar1,uVar15,_Src);
    if (iVar26 != -1) {
      _Dst = (void *)((longlong)iVar26 * 0x88 + *plVar1);
      FUN_14172129e(_Dst);
      memmove(_Dst,_Src,0x80);
      FUN_146a4b11a(plVar1,iVar17);
      goto LAB_14086609a;
    }
    uVar16 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44);
    if (3 < uVar16) {
      uVar27 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
      lVar24 = 0x3f;
      if (uVar27 != 0) {
        for (; uVar27 >> lVar24 == 0; lVar24 = lVar24 + -1) {
        }
      }
      uVar29 = 1 << ((byte)lVar24 & 0x1f);
    }
  }
  if (((int)uVar16 < 1) || ((int)uVar29 <= *(int *)(param_1 + 0x58))) {
    uVar15 = *(int *)(param_1 + 0x58) - 1U & uVar15;
    *(uint *)((longlong)_Src + 0x84) = uVar15;
    lVar24 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar24 = param_1 + 0x48;
    }
    *(undefined4 *)((longlong)_Src + 0x80) =
         *(undefined4 *)
          (lVar24 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar15) * 4);
    lVar24 = *(longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      lVar24 = param_1 + 0x48;
    }
    *(int *)(lVar24 + ((longlong)*(int *)(param_1 + 0x58) - 1U & (longlong)(int)uVar15) * 4) =
         iVar17;
    goto LAB_14086609a;
  }
  *(uint *)(param_1 + 0x58) = uVar29;
  plVar1 = (longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1446efa72(plVar1,0,0,4);
    uVar29 = *(uint *)(param_1 + 0x58);
  }
  lVar24 = param_1 + 0x48;
  if (uVar29 == 1) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
LAB_1408661b5:
    uVar15 = 0;
    do {
      lVar18 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar18 = lVar24;
      }
      *(undefined4 *)(lVar18 + (ulonglong)(*(int *)(param_1 + 0x58) + 0x7fffffffU & uVar15) * 4) =
           0xffffffff;
      uVar15 = uVar15 + 1;
    } while (uVar29 != uVar15);
  }
  else {
    if (uVar29 == 0) goto LAB_14086609a;
    FUN_1446efa72(plVar1,0,uVar29,4);
    if (0 < (int)uVar29) goto LAB_1408661b5;
  }
  iVar17 = *(int *)(param_1 + 0x38);
  if (iVar17 == 0) {
    uVar27 = 0;
    uVar30 = 1;
    iVar14 = 0;
    iVar26 = 0;
  }
  else {
    puVar22 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar22 = puVar4;
    }
    uVar29 = *puVar22;
    if (uVar29 == 0) {
      iVar26 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar26 = iVar17 + -1;
      }
      uVar27 = 0;
      uVar30 = (ulonglong)(uint)(iVar26 >> 5);
      if (iVar26 >> 5 < 1) {
        uVar30 = uVar27;
      }
      iVar26 = 0;
      do {
        if (uVar30 == uVar27) goto LAB_14086609a;
        iVar26 = iVar26 + 0x20;
        uVar29 = puVar22[uVar27 + 1];
        uVar27 = uVar27 + 1;
      } while (uVar29 == 0);
    }
    else {
      uVar27 = 0;
      iVar26 = 0;
    }
    uVar30 = (ulonglong)(-uVar29 & uVar29);
    uVar19 = uVar30 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar14 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar14) {
      iVar14 = iVar17;
    }
  }
  if (iVar14 < iVar17) {
    uVar29 = 0xffffffff;
    do {
      lVar18 = *(longlong *)(param_1 + 0x10);
      lVar25 = (longlong)iVar14 * 0x88;
      iVar17 = FUN_140864236(lVar18 + lVar25);
      uVar19 = (longlong)iVar17 & (longlong)*(int *)(param_1 + 0x58) - 1U;
      iVar17 = (int)uVar19;
      *(int *)(lVar18 + 0x84 + lVar25) = iVar17;
      lVar23 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar23 = lVar24;
      }
      *(undefined4 *)(lVar18 + 0x80 + lVar25) =
           *(undefined4 *)(lVar23 + ((longlong)*(int *)(param_1 + 0x58) - 1U & uVar19) * 4);
      lVar18 = *(longlong *)(param_1 + 0x50);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        lVar18 = lVar24;
      }
      *(int *)(lVar18 + ((longlong)iVar17 & (longlong)*(int *)(param_1 + 0x58) - 1U) * 4) = iVar14;
      uVar29 = ~(uint)uVar30 & uVar29;
      puVar22 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar22 = puVar4;
      }
      iVar17 = *(int *)(param_1 + 0x38);
      iVar14 = (int)uVar27;
      lVar18 = (longlong)iVar14;
      uVar15 = puVar22[lVar18] & uVar29;
      if (uVar15 == 0) {
        iVar21 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar21 = iVar17 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar28 = iVar21;
        if (iVar21 < iVar14) {
          iVar28 = iVar14;
        }
        if (iVar21 <= iVar14) break;
        lVar25 = 0;
        while( true ) {
          iVar26 = iVar26 + 0x20;
          uVar15 = puVar22[lVar18 + lVar25 + 1];
          if (uVar15 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar28 - lVar18 == lVar25) goto LAB_14086609a;
        }
        uVar27 = (ulonglong)(iVar14 + (int)lVar25 + 1);
        uVar29 = 0xffffffff;
      }
      uVar30 = (ulonglong)(-uVar15 & uVar15);
      uVar19 = uVar30 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar14 = (iVar26 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar17);
  }
LAB_14086609a:
  *param_2 = *param_4;
  lVar24 = param_4[1];
  param_2[1] = lVar24;
  if (lVar24 != 0) {
    LOCK();
    *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
    UNLOCK();
    plVar1 = (longlong *)param_4[1];
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar1 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar1)(plVar1);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140866586 FUN_140866586 body=6873 status=ok
// SIG undefined FUN_140866586(void)

/* WARNING: Removing unreachable block (ram,0x00014086781c) */
/* WARNING: Removing unreachable block (ram,0x000140867826) */
/* WARNING: Removing unreachable block (ram,0x000140867838) */

void FUN_140866586(longlong param_1,int param_2,uint param_3,float param_4,float *param_5,
                  int *param_6,int *param_7,uint *param_8,longlong *param_9)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 uVar4;
  double dVar5;
  longlong *plVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double *pdVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  double *pdVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined2 *puVar21;
  double *pdVar22;
  uint uVar23;
  double *pdVar24;
  short sVar25;
  undefined8 *puVar26;
  undefined1 uVar27;
  int iVar28;
  double *pdVar29;
  double *pdVar30;
  longlong lVar31;
  ulonglong uVar32;
  uint uVar33;
  double *pdVar34;
  longlong lVar35;
  uint uVar36;
  int iVar37;
  double *pdVar38;
  uint uVar39;
  ulonglong uVar40;
  uint *puVar41;
  double *pdVar42;
  uint uVar43;
  longlong lVar44;
  double *pdVar45;
  longlong lVar46;
  bool bVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float fVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  float fVar54;
  undefined1 auStack_4e8 [32];
  undefined8 *local_4c8;
  uint **local_4c0;
  undefined8 *local_4b8;
  byte local_4a1;
  undefined8 *local_4a0;
  longlong local_498;
  uint local_490;
  uint local_48c;
  ulonglong local_488;
  uint local_47c;
  uint *local_478;
  ulonglong local_470;
  uint local_468;
  int local_464;
  longlong *local_460;
  undefined8 *local_458;
  uint local_450;
  undefined4 uStack_44c;
  longlong *local_448;
  uint local_440;
  uint local_43c;
  uint *local_438;
  int local_430;
  undefined4 local_42c;
  uint *local_428;
  undefined8 uStack_420;
  undefined2 local_418;
  uint *local_410;
  longlong *local_408;
  undefined8 local_400;
  double local_3f8;
  undefined1 local_3f0 [8];
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  longlong *plStack_3d8;
  char local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  longlong *local_3b8;
  ulonglong uStack_3b0;
  longlong local_3a8;
  ulonglong uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  float local_378;
  float fStack_374;
  undefined8 uStack_370;
  undefined4 local_368;
  int iStack_364;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  lVar46 = *(longlong *)(param_1 + 0x20);
  lVar31 = (longlong)param_2 * 0x70;
  local_4a0 = (undefined8 *)(lVar46 + lVar31);
  local_410 = *(uint **)(lVar46 + 0x10 + lVar31);
  plVar6 = *(longlong **)(lVar46 + 0x18 + lVar31);
  local_498 = param_1;
  local_48c = param_3;
  local_464 = param_2;
  if (plVar6 == (longlong *)0x0) {
    local_458 = local_4a0 + 4;
    local_418 = CONCAT11(*(undefined1 *)(local_4a0 + 4),*(undefined1 *)(param_1 + 0x91));
    local_408 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    local_458 = local_4a0 + 4;
    local_418 = CONCAT11(*(undefined1 *)(local_4a0 + 4),*(undefined1 *)(param_1 + 0x91));
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar7 = plVar6 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    local_408 = plVar6;
    if ((int)*plVar7 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  lVar46 = local_498;
  puVar26 = local_4a0;
  uVar33 = *param_8;
  if (*param_6 < *(int *)(local_4a0 + 6)) {
    (**(code **)(**(longlong **)(local_4a0[5] + (longlong)*param_6 * 0x30) + 8))();
    if ((int)uVar33 < (int)(uint)local_3c8) {
      uVar33 = (uint)local_3c8;
    }
  }
  uVar23 = local_48c;
  if (local_48c == 0xffffffff) {
    if ((longlong)*(int *)(puVar26 + 6) < 1) {
      uVar23 = 0;
    }
    else {
      (**(code **)(**(longlong **)(puVar26[5] + -0x30 + (longlong)*(int *)(puVar26 + 6) * 0x30) + 8)
      )();
      uVar23 = local_3c8._4_4_;
    }
  }
  local_428 = (uint *)0x0;
  uStack_420 = 0;
  if (*(char *)(param_1 + 0x91) == '\x01') {
    uVar23 = uVar23 - uVar33;
    uStack_420 = 1;
    local_490 = 0;
LAB_14086712f:
    FUN_140868826(&local_428);
LAB_14086713e:
    *local_428 = uVar33;
    local_428[1] = uVar23;
    *(undefined1 *)(local_428 + 2) = 0;
    *(undefined1 *)((longlong)local_428 + 0xb) = local_3c8._2_1_;
    *(undefined2 *)((longlong)local_428 + 9) = (undefined2)local_3c8;
    local_430 = (int)uStack_420;
    local_438 = (uint *)0x0;
    iVar15 = (int)uStack_420;
    if ((int)uStack_420 != 0) goto LAB_140866773;
    local_42c = 0;
  }
  else {
    uVar23 = uVar23 - uVar33;
    if (*(int *)((undefined8 *)*puVar26 + 1) == 0) {
      puVar21 = &DAT_149dfb77a;
    }
    else {
      puVar21 = *(undefined2 **)*puVar26;
    }
    local_4c0 = &local_428;
    local_4c8 = (undefined8 *)CONCAT71(local_4c8._1_7_,*(undefined1 *)(puVar26 + 4));
    local_490 = (**(code **)(**(longlong **)(lVar46 + 0x120) + 8))
                          (*(longlong **)(lVar46 + 0x120),puVar21,uVar33,uVar23);
    iVar15 = (int)uStack_420;
    if ((int)uStack_420 == 0) {
      uStack_420 = CONCAT44(uStack_420._4_4_,1);
      if (uStack_420._4_4_ == 0) goto LAB_14086712f;
      goto LAB_14086713e;
    }
LAB_140866773:
    puVar41 = local_428;
    local_438 = (uint *)0x0;
    local_430 = iVar15;
    FUN_140868302(&local_438,iVar15);
    memcpy(local_438,puVar41,(longlong)iVar15 * 0xc);
    iVar15 = local_430;
    puVar41 = local_438;
    lVar31 = (longlong)local_430;
    if (1 < lVar31) {
      memset(&local_3b8,0,0x2f0);
      local_3c8 = puVar41;
      uStack_3c0 = puVar41 + lVar31 * 3 + -3;
      fVar54 = logf((float)iVar15);
      local_3b8 = (longlong *)CONCAT44(local_3b8._4_4_,(int)(longlong)(fVar54 + fVar54));
      puVar26 = &local_3c8;
      do {
        pdVar22 = (double *)*puVar26;
        pdVar29 = (double *)puVar26[1];
        iVar15 = *(int *)(puVar26 + 2);
        iVar16 = (int)((ulonglong)((longlong)pdVar29 - (longlong)pdVar22) >> 2) * -0x55555555;
        uVar33 = iVar16 + 1;
        pdVar30 = pdVar22;
        pdVar24 = pdVar22;
        pdVar18 = pdVar29;
        if (iVar15 != 0) {
LAB_14086734e:
          if (8 < (int)uVar33) {
            uVar32 = (ulonglong)(uVar33 >> 1);
            iVar16 = *(int *)((longlong)pdVar24 + uVar32 * 0xc + 8);
            dVar9 = *(double *)((longlong)pdVar24 + uVar32 * 0xc);
            *(int *)((longlong)pdVar24 + uVar32 * 0xc + 8) = *(int *)(pdVar24 + 1);
            *(double *)((longlong)pdVar24 + uVar32 * 0xc) = *pdVar24;
            *(int *)(pdVar24 + 1) = iVar16;
            *pdVar24 = dVar9;
            pdVar45 = (double *)((longlong)pdVar18 + 0xc);
            pdVar22 = pdVar24;
            do {
              pdVar12 = (double *)((longlong)pdVar22 + 0xc);
              pdVar34 = (double *)((longlong)pdVar22 + 0xc);
              do {
                pdVar22 = pdVar34;
                pdVar42 = pdVar12;
                if (pdVar18 < pdVar22) break;
                pdVar12 = (double *)((longlong)pdVar42 + 0xc);
                pdVar34 = (double *)((longlong)pdVar22 + 0xc);
              } while (*(int *)pdVar22 <= *(int *)pdVar24);
              pdVar12 = pdVar45 + -3;
              do {
                pdVar34 = pdVar45;
                pdVar38 = pdVar12;
                pdVar45 = (double *)((longlong)pdVar34 + -0xc);
                if (pdVar45 <= pdVar24) break;
                pdVar12 = (double *)((longlong)pdVar38 + -0xc);
              } while (*(int *)pdVar24 <= *(int *)pdVar45);
              if (pdVar45 < pdVar22) goto LAB_140867431;
              iVar16 = *(int *)(pdVar22 + 1);
              dVar9 = *pdVar22;
              *(int *)(pdVar22 + 1) = *(int *)((longlong)pdVar34 + -4);
              *pdVar22 = *pdVar45;
              *(int *)((longlong)pdVar34 + -4) = iVar16;
              *pdVar45 = dVar9;
            } while( true );
          }
          dVar9 = uStack_3e0;
          if (pdVar24 < pdVar18) {
            do {
              pdVar22 = pdVar24;
              if ((double *)((longlong)pdVar24 + 0xcU) <= pdVar18) {
                pdVar29 = (double *)((longlong)pdVar24 + 0xcU);
                iVar15 = *(int *)pdVar24;
                do {
                  iVar16 = *(int *)pdVar29;
                  iVar37 = iVar15;
                  if (iVar15 <= iVar16) {
                    iVar37 = iVar16;
                  }
                  if (iVar15 < iVar16) {
                    pdVar22 = pdVar29;
                  }
                  pdVar29 = (double *)((longlong)pdVar29 + 0xc);
                  iVar15 = iVar37;
                } while (pdVar29 <= pdVar18);
              }
              iVar15 = *(int *)(pdVar22 + 1);
              uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar15);
              local_3e8 = (void *)*pdVar22;
              *(int *)(pdVar22 + 1) = *(int *)(pdVar18 + 1);
              *pdVar22 = *pdVar18;
              *(int *)(pdVar18 + 1) = iVar15;
              *pdVar18 = (double)local_3e8;
              pdVar18 = (double *)((longlong)pdVar18 - 0xc);
              dVar9 = uStack_3e0;
            } while (pdVar24 < pdVar18);
          }
          goto LAB_1408677a6;
        }
LAB_1408674fc:
        dVar9 = uStack_3e0;
        if (uVar33 != 0) {
          iVar15 = (iVar16 - (iVar16 + -1 >> 0x1f)) + -1 >> 1;
          iVar16 = iVar15;
joined_r0x000140867523:
          do {
            iVar37 = iVar15 * 2 + 1;
            uStack_3e0._4_4_ = (uint)((ulonglong)dVar9 >> 0x20);
            if (iVar37 < (int)uVar33) {
              iVar28 = iVar15 * 2 + 2;
              if ((iVar28 < (int)uVar33) &&
                 (*(int *)((longlong)pdVar22 + (longlong)iVar37 * 0xc) <=
                  *(int *)((longlong)pdVar22 + (longlong)iVar28 * 0xc))) {
                iVar37 = iVar28;
              }
              if (*(int *)((longlong)pdVar22 + (longlong)iVar15 * 0xc) <
                  *(int *)((longlong)pdVar22 + (longlong)iVar37 * 0xc)) {
                pdVar18 = (double *)((longlong)pdVar22 + (longlong)iVar15 * 0xc);
                pdVar29 = (double *)((longlong)pdVar22 + (longlong)iVar37 * 0xc);
                iVar15 = *(int *)(pdVar18 + 1);
                uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar15);
                local_3e8 = (void *)*pdVar18;
                *(int *)(pdVar18 + 1) = *(int *)(pdVar29 + 1);
                *pdVar18 = *pdVar29;
                *(int *)(pdVar29 + 1) = iVar15;
                *pdVar29 = (double)local_3e8;
                iVar15 = iVar37;
                dVar9 = uStack_3e0;
                goto joined_r0x000140867523;
              }
            }
            bVar47 = iVar16 != 0;
            iVar15 = iVar16 + -1;
            iVar16 = iVar15;
          } while (bVar47);
          if (1 < (int)uVar33) {
            uVar32 = (ulonglong)uVar33 - 1;
            iVar15 = *(int *)(pdVar22 + 1);
            uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar15);
            local_3e8 = (void *)*pdVar22;
            *(int *)(pdVar22 + 1) = *(int *)((longlong)pdVar22 + uVar32 * 0xc + 8);
            *pdVar22 = *(double *)((longlong)pdVar22 + uVar32 * 0xc);
            *(int *)((longlong)pdVar22 + uVar32 * 0xc + 8) = iVar15;
            *(void **)((longlong)pdVar22 + uVar32 * 0xc) = local_3e8;
            dVar9 = uStack_3e0;
            if (uVar33 != 2) {
              do {
                iVar15 = 0;
                iVar37 = 1;
                iVar16 = 0;
                do {
                  iVar15 = iVar15 + 2;
                  iVar28 = iVar37;
                  if (((longlong)iVar15 < (longlong)uVar32) &&
                     (*(int *)((longlong)pdVar22 + (longlong)iVar37 * 0xc) <=
                      *(int *)((longlong)pdVar22 + (longlong)iVar15 * 0xc))) {
                    iVar28 = iVar15;
                  }
                  if (*(int *)((longlong)pdVar22 + (longlong)iVar28 * 0xc) <=
                      *(int *)((longlong)pdVar22 + (longlong)iVar16 * 0xc)) break;
                  piVar2 = (int *)((longlong)pdVar22 + (longlong)iVar16 * 0xc);
                  piVar3 = (int *)((longlong)pdVar22 + (longlong)iVar28 * 0xc);
                  iVar15 = piVar2[2];
                  uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar15);
                  uVar4 = *(undefined8 *)piVar2;
                  piVar2[2] = piVar3[2];
                  *(undefined8 *)piVar2 = *(undefined8 *)piVar3;
                  piVar3[2] = iVar15;
                  *(undefined8 *)piVar3 = uVar4;
                  iVar15 = iVar28 * 2;
                  iVar37 = iVar28 * 2 + 1;
                  iVar16 = iVar28;
                } while ((longlong)iVar37 < (longlong)uVar32);
                uVar20 = uVar32 - 1;
                iVar15 = *(int *)(pdVar22 + 1);
                uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar15);
                local_3e8 = (void *)*pdVar22;
                *(int *)(pdVar22 + 1) = *(int *)((longlong)pdVar22 + uVar20 * 0xc + 8);
                *pdVar22 = *(double *)((longlong)pdVar22 + uVar20 * 0xc);
                *(int *)((longlong)pdVar22 + uVar20 * 0xc + 8) = iVar15;
                *(void **)((longlong)pdVar22 + uVar20 * 0xc) = local_3e8;
                bVar47 = 2 < uVar32;
                uVar32 = uVar20;
                dVar9 = uStack_3e0;
              } while (bVar47);
            }
          }
        }
LAB_1408677a6:
        uStack_3e0 = dVar9;
        puVar26 = puVar26 + -3;
        lVar46 = local_498;
      } while (&local_3c8 <= puVar26);
    }
  }
  uVar32 = 0;
  local_470 = 0x80000000;
  uVar23 = 0x7fffffff;
  uVar33 = 0;
  local_47c = 0;
  do {
    uVar17 = local_47c;
    if (*(int *)(local_4a0 + 6) <= *param_6) break;
    local_478 = (uint *)CONCAT44(local_478._4_4_,uVar33);
    lVar31 = local_4a0[5];
    lVar44 = (longlong)*param_6 * 0x30;
    plVar6 = *(longlong **)(lVar31 + lVar44);
    local_468 = uVar23;
    (**(code **)(*plVar6 + 8))(plVar6,&local_440);
    lVar46 = local_498;
    uVar33 = *param_8;
    uVar23 = local_440;
    if ((int)local_440 <= (int)uVar33) {
      uVar23 = uVar33;
    }
    uVar17 = local_43c;
    if ((int)uVar32 < local_430) {
      uVar19 = local_438[uVar32 * 3 + 1] + local_438[uVar32 * 3];
      if ((int)uVar19 <= (int)local_43c) {
        uVar17 = uVar19;
      }
      uVar27 = (undefined1)local_438[uVar32 * 3 + 2];
    }
    else {
      uVar19 = 0;
      uVar27 = 0;
    }
    uVar20 = (ulonglong)uVar17;
    if ((longlong)*param_7 == -1) {
LAB_14086687d:
      uStack_3e0 = 0.0;
LAB_140866880:
      local_460 = (longlong *)0x0;
    }
    else {
      lVar35 = (longlong)*param_7 * 0x20;
      uVar43 = *(uint *)(local_4a0[9] + 4 + lVar35);
      if ((int)uVar33 < (int)uVar43) {
        if ((int)uVar43 < (int)uVar17) {
          uVar20 = (ulonglong)uVar43;
        }
        goto LAB_14086687d;
      }
      lVar35 = local_4a0[9] + lVar35;
      uVar33 = *(uint *)(lVar35 + 8);
      uStack_3e0 = *(double *)(lVar35 + 0x10);
      local_460 = *(longlong **)(lVar35 + 0x18);
      if ((int)uVar17 < (int)uVar33) {
        if (local_460 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_460 + 1) = (int)local_460[1] + 1;
          UNLOCK();
          goto LAB_140866883;
        }
        goto LAB_140866880;
      }
      if (local_460 == (longlong *)0x0) {
        local_460 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_460 + 1) = (int)local_460[1] + 1;
        UNLOCK();
      }
      uVar20 = (ulonglong)uVar33;
    }
LAB_140866883:
    local_488 = uVar20;
    if ((int)local_48c < (int)uVar20) {
      local_488 = (ulonglong)local_48c;
    }
    if (local_48c == 0xffffffff) {
      local_488 = uVar20;
    }
    uVar33 = (uint)local_488;
    local_4a1 = uVar33 == uVar19;
    uVar20 = (ulonglong)uVar23;
    local_3e8 = (void *)(uVar20 | local_488 << 0x20);
    if (local_460 == (longlong *)0x0) {
      plStack_3d8 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_460 + 1) = (int)local_460[1] + 1;
      UNLOCK();
      plStack_3d8 = local_460;
    }
    local_3c8 = (uint *)CONCAT62(local_3c8._2_6_,local_418);
    uStack_3c0 = local_410;
    local_3b8 = local_408;
    if (local_408 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_408 + 1) = (int)local_408[1] + 1;
      UNLOCK();
    }
    puVar26 = (undefined8 *)(lVar31 + lVar44);
    uStack_3b0 = CONCAT71(uStack_3b0._1_7_,uVar27);
    uVar49 = *(undefined4 *)(local_498 + 0x94);
    uVar17 = *(uint *)(puVar26 + 3);
    if ((ulonglong)uVar17 == 0) {
      (**(code **)(*(longlong *)*puVar26 + 8))((longlong *)*puVar26,local_3f0);
      plVar6 = (longlong *)*puVar26;
      local_4c8 = (undefined8 *)CONCAT44(local_4c8._4_4_,uVar49);
      local_4c0 = (uint **)&local_3c8;
      (**(code **)(*plVar6 + 0x28))
                (plVar6,&local_400,(ulonglong)local_3e8 & 0xffffffff,local_3e8._4_4_);
      local_4b8 = &uStack_3e0;
      local_4c8 = &local_400;
      local_4c0 = (uint **)&local_3c8;
      (**(code **)(*plVar6 + 0x38))
                (plVar6,&local_450,(ulonglong)local_3e8 & 0xffffffff,local_3e8._4_4_);
    }
    else {
      if ((int)uVar17 < 0x11) {
        uVar19 = uVar17 - 1;
        uVar40 = 0;
        if ((uVar23 == 0) || ((int)uVar17 < 2)) {
LAB_1408671b6:
          uVar43 = (uint)uVar40;
          if ((uVar43 != uVar19) && (uVar19 = uVar43, (int)uVar43 < (int)uVar17)) {
            uVar40 = uVar40 & 0xffffffff;
            do {
              if ((int)uVar33 <= *(int *)(puVar26[2] + 4 + uVar40 * 8)) goto LAB_140866be8;
              uVar40 = uVar40 + 1;
            } while (uVar17 != uVar40);
            uVar40 = (ulonglong)uVar17;
            goto LAB_140866be8;
          }
        }
        else {
          uVar40 = 0;
          do {
            if ((int)uVar23 <= *(int *)(puVar26[2] + uVar40 * 8)) goto LAB_1408671b6;
            uVar40 = uVar40 + 1;
          } while (uVar19 != uVar40);
        }
LAB_140867eab:
        lVar31 = (longlong)(int)uVar19;
        if ((*(uint *)(puVar26[2] + lVar31 * 8) == uVar23) &&
           (*(uint *)(puVar26[2] + 4 + lVar31 * 8) == uVar33)) {
          local_400 = *(double *)(puVar26[4] + lVar31 * 0x10) + 0.0;
          local_3f8 = *(double *)(puVar26[4] + 8 + lVar31 * 0x10) + 0.0;
        }
        else {
          local_4c0 = (uint **)&local_3c8;
          local_4c8 = (undefined8 *)CONCAT44(local_4c8._4_4_,uVar49);
          (**(code **)(*(longlong *)*puVar26 + 0x28))((longlong *)*puVar26,&local_400,uVar20,uVar33)
          ;
          local_400 = local_400 + 0.0;
          local_3f8 = local_3f8 + 0.0;
        }
      }
      else {
        uVar19 = uVar17 - 1;
        uVar43 = 0;
        if (uVar23 != 0) {
          iVar15 = 0;
          uVar36 = uVar19;
          do {
            uVar43 = (int)(uVar36 - iVar15) / 2 + iVar15;
            uVar39 = *(uint *)(puVar26[2] + (longlong)(int)uVar43 * 8);
            if (uVar39 == uVar23) break;
            if ((int)uVar39 < (int)uVar23) {
              iVar15 = uVar43 + 1;
            }
            else {
              uVar36 = uVar43 - 1;
            }
          } while (iVar15 <= (int)uVar36);
        }
        if (uVar43 == uVar19) goto LAB_140867eab;
        if ((int)uVar43 < (int)uVar17) {
          uVar17 = uVar43;
          do {
            uVar39 = (int)(uVar19 - uVar17) / 2 + uVar17;
            uVar40 = (ulonglong)uVar39;
            uVar36 = *(uint *)(puVar26[2] + 4 + (longlong)(int)uVar39 * 8);
            if (uVar36 == uVar33) break;
            if ((int)uVar36 < (int)uVar33) {
              uVar17 = uVar39 + 1;
            }
            else {
              uVar19 = uVar39 - 1;
            }
          } while ((int)uVar17 <= (int)uVar19);
        }
        else {
          uVar40 = 0;
        }
LAB_140866be8:
        uVar17 = (uint)uVar40;
        uVar19 = uVar43;
        if (uVar43 == uVar17) goto LAB_140867eab;
        lVar46 = (longlong)(int)uVar43;
        if (*(uint *)(puVar26[2] + lVar46 * 8) == uVar23) {
          uVar4 = *(undefined8 *)(puVar26[4] + lVar46 * 0x10);
          uVar52 = (undefined4)uVar4;
          uVar53 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uVar4 = *(undefined8 *)(puVar26[4] + 8 + lVar46 * 0x10);
          uVar48 = (undefined4)uVar4;
          uVar50 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        else {
          local_4c0 = (uint **)&local_3c8;
          local_4c8 = (undefined8 *)CONCAT44(local_4c8._4_4_,uVar49);
          (**(code **)(*(longlong *)*puVar26 + 0x28))
                    ((longlong *)*puVar26,&local_400,uVar20,
                     *(undefined4 *)(puVar26[2] + 4 + lVar46 * 8));
          uVar52 = SUB84(local_400,0);
          uVar53 = (undefined4)((ulonglong)local_400 >> 0x20);
          uVar48 = SUB84(local_3f8,0);
          uVar50 = (undefined4)((ulonglong)local_3f8 >> 0x20);
        }
        dVar9 = (double)CONCAT44(uVar50,uVar48) + 0.0;
        dVar5 = (double)CONCAT44(uVar53,uVar52) + 0.0;
        if ((int)(uVar43 + 1) < (int)uVar17) {
          iVar15 = ~uVar43 + uVar17;
          pdVar18 = (double *)((longlong)(int)(uVar43 + 1) * 0x10 + puVar26[4] + 8);
          do {
            dVar5 = dVar5 + pdVar18[-1];
            dVar8 = *pdVar18;
            if (*pdVar18 <= dVar9) {
              dVar8 = dVar9;
            }
            dVar9 = dVar8;
            pdVar18 = pdVar18 + 2;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        lVar46 = (longlong)(int)uVar17;
        if (*(int *)(puVar26[2] + 4 + lVar46 * 8) == local_3e8._4_4_) {
          local_400 = *(double *)(puVar26[4] + lVar46 * 0x10);
          uVar4 = *(undefined8 *)(puVar26[4] + 8 + lVar46 * 0x10);
          uVar49 = (undefined4)uVar4;
          uVar48 = (undefined4)((ulonglong)uVar4 >> 0x20);
        }
        else {
          local_4c0 = (uint **)&local_3c8;
          local_4c8 = (undefined8 *)CONCAT44(local_4c8._4_4_,uVar49);
          (**(code **)(*(longlong *)*puVar26 + 0x28))
                    ((longlong *)*puVar26,&local_400,*(undefined4 *)(puVar26[2] + lVar46 * 8));
          uVar49 = SUB84(local_3f8,0);
          uVar48 = (undefined4)((ulonglong)local_3f8 >> 0x20);
        }
        local_400 = dVar5 + local_400;
        lVar46 = local_498;
        local_3f8 = (double)CONCAT44(uVar48,uVar49);
        if ((double)CONCAT44(uVar48,uVar49) <= dVar9) {
          local_3f8 = dVar9;
        }
      }
      local_4b8 = &uStack_3e0;
      local_4c0 = (uint **)&local_3c8;
      local_4c8 = &local_400;
      (**(code **)(*(longlong *)*puVar26 + 0x38))
                ((longlong *)*puVar26,&local_450,(ulonglong)local_3e8 & 0xffffffff,local_3e8._4_4_);
    }
    iVar15 = (int)param_9[1];
    *(uint *)(param_9 + 1) = iVar15 + 1U;
    if (*(uint *)((longlong)param_9 + 0xc) < iVar15 + 1U) {
      FUN_14086811e(param_9,iVar15);
    }
    plVar6 = local_448;
    lVar31 = *param_9;
    *(ulonglong *)(lVar31 + (longlong)iVar15 * 0x10) = CONCAT44(uStack_44c,local_450);
    *(longlong **)(lVar31 + 8 + (longlong)iVar15 * 0x10) = local_448;
    if (local_448 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_448 + 1) = (int)local_448[1] + 1;
      UNLOCK();
      if (local_448 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_448 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_448)(local_448);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    plVar6 = local_3b8;
    uVar19 = (uint)local_488;
    if (local_3b8 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_3b8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_3b8)(local_3b8);
        uVar19 = (uint)local_488;
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
          uVar19 = (uint)local_488;
        }
      }
    }
    *param_8 = uVar19;
    plVar6 = *(longlong **)(*param_9 + (longlong)((int)param_9[1] + -1) * 0x10);
    (**(code **)(*plVar6 + 0x10))(plVar6,&local_3c8);
    plVar6 = plStack_3d8;
    uVar23 = (uint)local_3c8;
    if ((int)local_468 < (int)(uint)local_3c8) {
      uVar23 = local_468;
    }
    iVar15 = (int)local_470;
    local_470 = local_470 & 0xffffffff;
    if (iVar15 < (int)local_3c8._4_4_) {
      local_470 = (ulonglong)local_3c8._4_4_;
    }
    if (plStack_3d8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_3d8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_3d8)(plStack_3d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    iVar15 = (**(code **)(*(longlong *)*puVar26 + 0x18))
                       ((longlong *)*puVar26,*(undefined4 *)(lVar46 + 0x94));
    iVar16 = (**(code **)(*(longlong *)*puVar26 + 0x20))
                       ((longlong *)*puVar26,*(undefined4 *)(lVar46 + 0x94));
    uVar33 = iVar16 + iVar15;
    if ((short)(iVar16 + iVar15) <= (short)local_478) {
      uVar33 = (uint)local_478;
    }
    uVar17 = -iVar15;
    if ((short)-iVar15 <= (short)local_47c) {
      uVar17 = local_47c;
    }
    if (uVar19 == local_43c) {
      *param_6 = *param_6 + 1;
    }
    iVar15 = *param_7;
    if (((longlong)iVar15 != -1) &&
       (uVar19 = (uint)local_488, uVar19 == *(uint *)(local_4a0[9] + 8 + (longlong)iVar15 * 0x20)))
    {
      iVar15 = iVar15 + 1;
      *param_7 = iVar15;
      iVar16 = -1;
      if (iVar15 < *(int *)(local_4a0 + 10)) {
        iVar16 = iVar15;
      }
      *param_7 = iVar16;
    }
    if (local_460 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_460 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_460)(local_460);
        uVar19 = (uint)local_488;
        LOCK();
        piVar2 = (int *)((longlong)local_460 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_460 + 0x10))();
          uVar19 = (uint)local_488;
        }
      }
    }
    uVar32 = (ulonglong)((int)uVar32 + (uint)local_4a1);
    local_47c = uVar17;
  } while (uVar19 != local_48c);
  dVar9 = (double)*(float *)(lVar46 + 0xc4);
  local_47c = uVar23;
  if ((int)param_9[1] < 1) {
    dVar8 = 0.0;
    dVar11 = 0.0;
    dVar5 = 0.0;
    goto LAB_140867b09;
  }
  dVar9 = dVar9 - *(double *)(lVar46 + 0xe8);
  dVar5 = *(double *)(lVar46 + 0xe0);
  dVar10 = -dVar5;
  bVar47 = (char)local_490 == '\0';
  local_4a0 = (undefined8 *)CONCAT44(local_4a0._4_4_,uVar17);
  local_490 = uVar33;
  if (bVar47 || (int)param_9[1] == 1) {
LAB_140866d5b:
    lVar46 = local_498;
    sVar25 = (short)local_490;
    fVar54 = 0.0;
    lVar31 = 8;
    lVar44 = 0;
    do {
      plVar6 = *(longlong **)(*param_9 + -8 + lVar31);
      plVar7 = *(longlong **)(*param_9 + lVar31);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar6 + 8))(plVar6,&local_3c8);
      sVar14 = (**(code **)(*(longlong *)local_3c8 + 0x18))
                         (local_3c8,*(undefined4 *)(lVar46 + 0x94));
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_3e8);
      puVar41 = local_3c8;
      dVar8 = (double)(int)sVar25 - uStack_3e0;
      uVar49 = *(undefined4 *)(lVar46 + 0x94);
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_3e8);
      cVar13 = (**(code **)(*(longlong *)puVar41 + 0x30))
                         (puVar41,(ulonglong)local_3e8 & 0xffffffff,uVar49,&local_418);
      uStack_3e0 = (double)(int)(short)(int)(dVar8 - (double)(int)sVar14) + dVar9;
      local_3e8 = (void *)((double)(int)cVar13 + ((double)fVar54 - dVar5));
      (**(code **)(*plVar6 + 0x30))(plVar6,&local_3e8);
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_3e8);
      puVar41 = uStack_3c0;
      dVar8 = (double)fVar54 + (double)local_3e8;
      if (uStack_3c0 != (uint *)0x0) {
        LOCK();
        puVar1 = uStack_3c0 + 2;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if (*puVar1 == 0) {
          (*(code *)**(undefined8 **)uStack_3c0)(uStack_3c0);
          LOCK();
          puVar1 = puVar41 + 3;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if (*puVar1 == 0) {
            (**(code **)(*(longlong *)puVar41 + 0x10))(puVar41);
          }
        }
      }
      uVar23 = local_490;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar2 = (int *)((longlong)plVar7 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      fVar54 = (float)dVar8;
      lVar44 = lVar44 + 1;
      uVar33 = *(uint *)(param_9 + 1);
      lVar31 = lVar31 + 0x10;
      uVar17 = (uint)local_4a0;
    } while (lVar44 < (int)uVar33);
  }
  else {
    local_3c8 = (uint *)0x0;
    uStack_3c0 = (uint *)0x0;
    FUN_146a7538a();
    local_3e8 = (void *)0x0;
    uStack_3e0 = 0.0;
    if ((longlong)(int)uStack_420 != 0) {
      local_478 = local_428 + (longlong)(int)uStack_420 * 3;
      puVar41 = local_428;
      do {
        uVar33 = puVar41[1];
        if (0 < (int)uVar33) {
          uVar23 = *puVar41;
          uVar17 = uVar23;
          do {
            if ((longlong)(int)param_9[1] != 0) {
              puVar26 = (undefined8 *)*param_9;
              lVar46 = (longlong)(int)param_9[1] << 4;
              do {
                (**(code **)(*(longlong *)*puVar26 + 0x10))((longlong *)*puVar26,&local_400);
                if (((int)local_400 < (int)local_400._4_4_) &&
                   ((**(code **)(*(longlong *)*puVar26 + 0x10))((longlong *)*puVar26,&local_450),
                   local_450 == uVar17)) goto LAB_140867d4f;
                puVar26 = puVar26 + 2;
                lVar46 = lVar46 + -0x10;
              } while (lVar46 != 0);
            }
            puVar26 = (undefined8 *)0x0;
LAB_140867d4f:
            dVar8 = uStack_3e0;
            if ((char)puVar41[2] == '\0') {
              lVar46 = (longlong)(int)(uint)uStack_3e0;
              uVar17 = (uint)uStack_3e0 + 1;
              uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,uVar17);
              if (uStack_3e0._4_4_ < uVar17) {
                FUN_14086811e(&local_3e8,(ulonglong)dVar8 & 0xffffffff);
              }
              *(undefined8 *)((longlong)local_3e8 + lVar46 * 0x10) = *puVar26;
              lVar31 = puVar26[1];
              *(longlong *)((longlong)local_3e8 + lVar46 * 0x10 + 8) = lVar31;
              if (lVar31 != 0) {
                LOCK();
                *(int *)(lVar31 + 8) = *(int *)(lVar31 + 8) + 1;
                UNLOCK();
              }
            }
            else {
              FUN_146a50268(&local_3e8,puVar26);
            }
            (**(code **)(*(longlong *)*puVar26 + 0x10))((longlong *)*puVar26,&local_400);
            uVar17 = local_400._4_4_;
          } while ((int)local_400._4_4_ < (int)(uVar33 + uVar23));
        }
        puVar1 = uStack_3c0;
        lVar46 = (longlong)(int)(uint)uStack_3e0;
        if (lVar46 != 0) {
          iVar15 = (int)uStack_3c0;
          lVar31 = (longlong)(int)uStack_3c0;
          uStack_3c0 = (uint *)CONCAT44(uStack_3c0._4_4_,(int)uStack_3c0 + (uint)uStack_3e0);
          if ((uint)(uStack_3c0._4_4_ - iVar15) < (uint)uStack_3e0) {
            FUN_14086811e(&local_3c8,(ulonglong)puVar1 & 0xffffffff);
          }
          memmove(local_3c8 + lVar31 * 4,local_3e8,lVar46 << 4);
          uStack_3e0 = (double)((ulonglong)uStack_3e0 & 0xffffffff00000000);
        }
        dVar8 = uStack_3e0;
        FUN_1408680ad(local_3e8,0);
        uVar32 = (ulonglong)uStack_3e0 >> 0x20;
        uStack_3e0 = (double)((ulonglong)uStack_3e0 & 0xffffffff00000000);
        if (((longlong)dVar8 < 0) && ((int)uVar32 != 0)) {
          FUN_146a7538a(&local_3e8);
        }
        puVar41 = puVar41 + 3;
      } while (puVar41 != local_478);
    }
    FUN_146a502c2(param_9,&local_3c8);
    FUN_1408680ad(local_3e8,(ulonglong)uStack_3e0 & 0xffffffff);
    if (local_3e8 != (void *)0x0) {
      FUN_1400020a8();
    }
    FUN_1408680ad(local_3c8,(ulonglong)uStack_3c0 & 0xffffffff);
    if (local_3c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    uVar33 = *(uint *)(param_9 + 1);
    fVar54 = 0.0;
    uVar17 = (uint)local_4a0;
    uVar23 = local_490;
    if (0 < (int)uVar33) goto LAB_140866d5b;
  }
  lVar46 = local_498;
  iVar15 = (uVar17 & 0xffff) + (uVar23 & 0xffff);
  local_378 = (float)iVar15;
  dVar11 = (double)fVar54;
  dVar8 = (double)(*(float *)(local_498 + 0xb4) * local_378);
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_3b8 = (longlong *)0x0;
  uStack_3b0 = 0;
  local_3c8 = (uint *)0x0;
  uStack_3c0 = (uint *)0x0;
  if (*(char *)(param_5 + 1) != '\0') {
    fVar54 = *param_5;
  }
  uStack_370 = (ulonglong)local_47c | local_470 << 0x20;
  local_368 = CONCAT31(local_368._1_3_,*(undefined1 *)local_458);
  iStack_364 = local_464;
  local_398 = dVar10;
  uStack_390 = dVar9;
  local_388 = dVar11;
  uStack_380 = dVar8;
  fStack_374 = fVar54;
  if (uVar33 != 0) {
    uStack_3c0 = (uint *)(ulonglong)uVar33;
    FUN_14086811e(&local_3c8,0);
    FUN_1408680f6(local_3c8,*param_9,uVar33);
  }
  iVar16 = *(int *)(lVar46 + 0x38);
  *(uint *)(lVar46 + 0x38) = iVar16 + 1U;
  if (*(uint *)(lVar46 + 0x3c) < iVar16 + 1U) {
    FUN_140868446((longlong *)(lVar46 + 0x30),iVar16);
  }
  puVar1 = uStack_3c0;
  puVar41 = local_3c8;
  lVar31 = *(longlong *)(lVar46 + 0x30);
  lVar44 = (longlong)iVar16 * 0x68;
  puVar26 = (undefined8 *)(lVar31 + lVar44);
  *(undefined8 *)(lVar31 + lVar44) = 0;
  *(int *)(lVar31 + 8 + lVar44) = (int)uStack_3c0;
  if ((int)uStack_3c0 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0xc) = 0;
  }
  else {
    FUN_14086822c(puVar26,(ulonglong)uStack_3c0 & 0xffffffff);
    FUN_1408680f6(*puVar26,puVar41,(ulonglong)puVar1 & 0xffffffff);
  }
  uVar32 = uStack_3b0;
  plVar6 = local_3b8;
  puVar26[2] = 0;
  *(int *)(puVar26 + 3) = (int)uStack_3b0;
  if ((int)uStack_3b0 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x1c) = 0;
  }
  else {
    FUN_146a753ea(puVar26 + 2,uStack_3b0 & 0xffffffff);
    lVar46 = local_498;
    FUN_146a75454(puVar26[2],plVar6,uVar32 & 0xffffffff);
  }
  uVar32 = uStack_3a0;
  lVar31 = local_3a8;
  puVar26[4] = 0;
  *(int *)(puVar26 + 5) = (int)uStack_3a0;
  if ((int)uStack_3a0 == 0) {
    *(undefined4 *)((longlong)puVar26 + 0x2c) = 0;
  }
  else {
    FUN_146a753ea(puVar26 + 4,uStack_3a0 & 0xffffffff);
    lVar46 = local_498;
    FUN_146a75454(puVar26[4],lVar31,uVar32 & 0xffffffff);
  }
  puVar26[0xc] = CONCAT44(iStack_364,local_368);
  *(float *)(puVar26 + 10) = local_378;
  *(float *)((longlong)puVar26 + 0x54) = fStack_374;
  *(undefined4 *)(puVar26 + 0xb) = (undefined4)uStack_370;
  *(undefined4 *)((longlong)puVar26 + 0x5c) = uStack_370._4_4_;
  *(undefined4 *)(puVar26 + 8) = (undefined4)local_388;
  *(undefined4 *)((longlong)puVar26 + 0x44) = local_388._4_4_;
  *(undefined4 *)(puVar26 + 9) = (undefined4)uStack_380;
  *(undefined4 *)((longlong)puVar26 + 0x4c) = uStack_380._4_4_;
  *(undefined4 *)(puVar26 + 6) = (undefined4)local_398;
  *(undefined4 *)((longlong)puVar26 + 0x34) = local_398._4_4_;
  *(undefined4 *)(puVar26 + 7) = (undefined4)uStack_390;
  *(undefined4 *)((longlong)puVar26 + 0x3c) = uStack_390._4_4_;
  if ((char)local_368 == '\x01') {
    if (*(int *)(lVar46 + 0xb0) == 2) goto LAB_1408670ce;
LAB_140867a64:
    local_3e8 = (void *)CONCAT44(local_3e8._4_4_,*(int *)(lVar46 + 0x38) + -1);
    FUN_144984904(lVar46 + 0x40,&local_400,&local_3e8,0);
  }
  else {
    if (*(int *)(lVar46 + 0xb0) != 0) goto LAB_140867a64;
LAB_1408670ce:
    (**(code **)(**(longlong **)local_3c8 + 0x20))(*(longlong **)local_3c8,&local_3e8);
    plVar6 = plStack_3d8;
    if (plStack_3d8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plStack_3d8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plStack_3d8)(plStack_3d8);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_3d0 == '\x01') goto LAB_140867a64;
  }
  FUN_140868060(local_3a8,uStack_3a0 & 0xffffffff);
  if (local_3a8 != 0) {
    FUN_1400020a8();
  }
  FUN_140868060(local_3b8,uStack_3b0 & 0xffffffff);
  if (local_3b8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_1408680ad(local_3c8,(ulonglong)uStack_3c0 & 0xffffffff);
  if (local_3c8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  dVar5 = (double)iVar15;
  dVar9 = (double)*(float *)(lVar46 + 0xc4);
LAB_140867b09:
  fVar54 = *(float *)(lVar46 + 0xbc);
  if ((double)fVar54 <= dVar11) {
    fVar54 = (float)dVar11;
  }
  fVar51 = *(float *)(lVar46 + 0xc0);
  *(float *)(lVar46 + 0xbc) = fVar54;
  if (local_48c != 0xffffffff) {
    dVar11 = (double)param_4;
  }
  if ((double)fVar51 <= dVar11) {
    fVar51 = (float)dVar11;
  }
  *(float *)(lVar46 + 0xc0) = fVar51;
  *(float *)(lVar46 + 0xc4) = (float)(dVar9 + dVar8);
  *(float *)(lVar46 + 200) = (float)(dVar8 - dVar5);
  if (local_438 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_428 != (uint *)0x0) {
    FUN_1400020a8();
  }
  plVar6 = local_408;
  if (local_408 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_408 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_408)(local_408);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((local_c0 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140867431:
  iVar16 = *(int *)(pdVar24 + 1);
  uStack_3e0 = (double)CONCAT44(uStack_3e0._4_4_,iVar16);
  local_3e8 = (void *)*pdVar24;
  *(int *)(pdVar24 + 1) = *(int *)((longlong)pdVar34 + -4);
  *pdVar24 = *pdVar45;
  *(int *)((longlong)pdVar34 + -4) = iVar16;
  *pdVar45 = (double)local_3e8;
  iVar15 = iVar15 + -1;
  pdVar34 = pdVar34 + -3;
  dVar9 = uStack_3e0;
  if ((longlong)pdVar38 - (longlong)pdVar30 < (longlong)pdVar29 - (longlong)pdVar42) {
    if (pdVar22 < pdVar18) {
      *puVar26 = pdVar22;
      puVar26[1] = pdVar18;
      *(int *)(puVar26 + 2) = iVar15;
      puVar26 = puVar26 + 3;
    }
    pdVar22 = pdVar24;
    pdVar29 = pdVar38;
    if (pdVar45 <= (double *)((longlong)pdVar24 + 0xcU)) goto LAB_1408677a6;
  }
  else {
    if ((double *)((longlong)pdVar24 + 0xcU) < pdVar45) {
      *puVar26 = pdVar24;
      puVar26[1] = pdVar34;
      *(int *)(puVar26 + 2) = iVar15;
      puVar26 = puVar26 + 3;
    }
    pdVar24 = pdVar42;
    pdVar34 = pdVar18;
    pdVar29 = pdVar18;
    if (pdVar18 <= pdVar22) goto LAB_1408677a6;
  }
  iVar16 = (int)((ulonglong)((longlong)pdVar29 - (longlong)pdVar24) >> 2) * -0x55555555;
  uVar33 = iVar16 + 1;
  pdVar30 = pdVar24;
  pdVar24 = pdVar22;
  pdVar18 = pdVar34;
  if (iVar15 == 0) goto LAB_1408674fc;
  goto LAB_14086734e;
}



// FUNCTION 140868060 FUN_140868060 body=77 status=ok
// SIG undefined FUN_140868060(void)

void FUN_140868060(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408680ad FUN_1408680ad body=73 status=ok
// SIG undefined FUN_1408680ad(void)

void FUN_1408680ad(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408680f6 FUN_1408680f6 body=40 status=ok
// SIG undefined FUN_1408680f6(void)

void FUN_1408680f6(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
    lVar1 = *(longlong *)(param_2 + 8 + lVar2);
    *(longlong *)(param_1 + 8 + lVar2) = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    lVar2 = lVar2 + 0x10;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 14086811e FUN_14086811e body=269 status=ok
// SIG undefined FUN_14086811e(void)

void FUN_14086811e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14086822c FUN_14086822c body=213 status=ok
// SIG undefined FUN_14086822c(void)

void FUN_14086822c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 140868302 FUN_140868302 body=323 status=ok
// SIG undefined FUN_140868302(void)

undefined8 FUN_140868302(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar5 = (longlong)param_2 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar8 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 >> 4]];
      }
      else {
        if ((uVar8 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar8 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar9 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140868368;
            lVar1 = uVar6 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar8 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140868368:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar5;
  uVar4 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar8 = 0x7fffffff;
  if (param_2 <= (int)(uVar5 / 0xc)) {
    uVar8 = uVar5 / 0xc & 0xffffffff;
  }
  iVar7 = (int)uVar8;
  if (iVar7 < 1) {
    iVar7 = 0;
  }
  else {
    uVar4 = FUN_1446f8d3c(param_1,0,uVar8,0xc,4);
  }
  *(int *)(param_1 + 0xc) = iVar7;
  return uVar4;
}



// FUNCTION 140868446 FUN_140868446 body=366 status=ok
// SIG undefined FUN_140868446(void)

void FUN_140868446(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x68;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408684cb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1408684cb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 1408685b4 FUN_1408685b4 body=487 status=ok
// SIG undefined FUN_1408685b4(void)

longlong *
FUN_1408685b4(longlong param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
             undefined4 *param_5,undefined8 param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = *param_5;
  uStack_54 = param_5[1];
  uStack_50 = param_5[2];
  uStack_4c = param_5[3];
  plVar3 = *(longlong **)(param_1 + 0x10);
  local_60 = param_3;
  local_5c = param_4;
  if (plVar3 == (longlong *)0x0) {
LAB_14086870a:
    local_78 = 0;
    plStack_70 = (longlong *)0x0;
    bVar9 = true;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14086870a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar9 = iVar6 == iVar5;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar9);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    bVar9 = false;
    local_78 = uVar4;
    plStack_70 = plVar3;
  }
  plVar3 = plStack_70;
  lVar7 = FUN_14001cc68(0x70,0x10);
  local_48 = local_58;
  uStack_44 = uStack_54;
  uStack_40 = uStack_50;
  uStack_3c = uStack_4c;
  local_80 = param_7;
  local_88 = param_6;
  FUN_14086879c(lVar7,&local_78,&local_60);
  plVar8 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar8[1] = (longlong)&DAT_100000001;
  *plVar8 = (longlong)&PTR_FUN_149f0e060;
  plVar8[2] = lVar7;
  *param_2 = lVar7;
  param_2[1] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
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
  plVar8 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if (!bVar9) {
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14086879c FUN_14086879c body=137 status=ok
// SIG undefined FUN_14086879c(void)

void FUN_14086879c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined2 *param_5,undefined8 *param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_149f0e020;
  param_1[1] = *param_2;
  lVar1 = param_2[1];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[3] = *param_3;
  uVar2 = param_4[1];
  param_1[4] = *param_4;
  param_1[5] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 8) = *param_5;
  param_1[9] = *(undefined8 *)(param_5 + 4);
  lVar1 = *(longlong *)(param_5 + 8);
  param_1[10] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_5 + 0xc);
  param_1[0xc] = *param_6;
  lVar1 = param_6[1];
  param_1[0xd] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140868826 FUN_140868826 body=370 status=ok
// SIG undefined FUN_140868826(void)

void FUN_140868826(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0xc;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408688af;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1408688af:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 14086899e FUN_14086899e body=57 status=ok
// SIG undefined FUN_14086899e(void)

void FUN_14086899e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb233e0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb233e0 = FUN_140002ddd(FUN_14643d9b9,uVar1,L"GpsTest_History");
  }
  return;
}



// FUNCTION 1408689e0 FUN_1408689e0 body=815 status=ok
// SIG undefined FUN_1408689e0(void)

undefined4 * FUN_1408689e0(undefined4 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 3) = 0;
  param_1[5] = 0;
  CoCreateGuid((GUID *)(param_1 + 2));
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  *(longlong **)(param_1 + 8) = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) & 0xfe;
  *(undefined2 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) & 0xfe;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  param_1[0x2c] = 0xffffffff;
  *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) & 0xfe;
  param_1[0x2e] = 0;
  param_1[0x36] = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd) = 0;
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined ***)(param_1 + 0x50) = &PTR_LAB_14ae02690;
  *(undefined8 *)(param_1 + 0x6e) = 0;
  *(undefined8 *)(param_1 + 0x6a) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x66) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x62) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x5e) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(byte *)(param_1 + 0x70) = *(byte *)(param_1 + 0x70) | 0xf;
  *(undefined8 *)(param_1 + 0x7e) = 0;
  param_1[0x80] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)(param_1 + 0x75) = 0;
  *(undefined8 *)(param_1 + 0x77) = 0;
  *(undefined8 *)(param_1 + 0x71) = 0;
  *(undefined8 *)(param_1 + 0x73) = 0;
  *(undefined8 *)(param_1 + 0x81) = 0xffffffff00000080;
  param_1[0x83] = 0;
  *(undefined8 *)(param_1 + 0x86) = 0;
  param_1[0x88] = 0;
  *(undefined8 *)(param_1 + 0xa6) = 0;
  *(undefined8 *)(param_1 + 0xa2) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x9a) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0;
  *(undefined8 *)(param_1 + 0x96) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x92) = 0;
  *(undefined8 *)(param_1 + 0x94) = 0;
  *(undefined8 *)(param_1 + 0x8e) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x8a) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  param_1[0xa8] = 0xffffffff;
  *(byte *)(param_1 + 0xa9) = *(byte *)(param_1 + 0xa9) & 0xfe;
  param_1[0xaa] = 0;
  param_1[0xad] = 0x3f800000;
  *(byte *)(param_1 + 0xac) = *(byte *)(param_1 + 0xac) & 0xfe;
  *(byte *)(param_1 + 0xae) = *(byte *)(param_1 + 0xae) & 0xf9;
  *(undefined8 *)(param_1 + 0xaf) = 0;
  *(undefined8 *)(param_1 + 0xb6) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0x100000000;
  *(undefined8 *)(param_1 + 0xc2) = 0;
  param_1[0xc4] = 0;
  *(undefined8 *)(param_1 + 0xba) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 0xc5) = 0xffffffff00000080;
  param_1[199] = 0;
  *(undefined8 *)(param_1 + 0xca) = 0;
  param_1[0xcc] = 0;
  *(undefined1 *)(param_1 + 0xce) = 0;
  *(undefined1 *)((longlong)param_1 + 0x365) = 0;
  *(undefined1 *)((longlong)param_1 + 0x367) = 0;
  *(undefined8 *)(param_1 + 0xd7) = 0;
  *(undefined8 *)(param_1 + 0xd3) = 0;
  *(undefined8 *)(param_1 + 0xd5) = 0;
  *(undefined8 *)(param_1 + 0xcf) = 0;
  *(undefined8 *)(param_1 + 0xd1) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x12) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x14) = 0xc059000000000000;
  *(undefined8 *)(param_1 + 0x16) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0x4059000000000000;
  *(undefined8 *)(param_1 + 0x1a) = 0x4059000000000000;
  *(undefined1 *)(param_1 + 0x1c) = 1;
  return param_1;
}



// FUNCTION 140868d10 FUN_140868d10 body=178 status=ok
// SIG undefined FUN_140868d10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140868d10(longlong param_1,float param_2)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x114) + param_2;
  *(float *)(param_1 + 0x114) = fVar3;
  fVar2 = *(float *)(param_1 + 0x110) + param_2;
  *(float *)(param_1 + 0x110) = fVar2;
  *(float *)(param_1 + 0x120) = param_2 + *(float *)(param_1 + 0x120);
  bVar1 = _DAT_14c7640b0 < fVar3 |
          DAT_14c7640b4 < *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44) |
          *(byte *)(param_1 + 0x11c);
  *(byte *)(param_1 + 0x11c) = bVar1;
  if ((bVar1 != 0) && (_DAT_14c7640ac < fVar3)) {
    FUN_14086950a(param_1 + -0x38);
    fVar2 = *(float *)(param_1 + 0x110);
  }
  if (_DAT_14c7640a8 < fVar2) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_140868dc2(param_1 + -0x38);
    return;
  }
  return;
}



// FUNCTION 140868dc2 FUN_140868dc2 body=1862 status=ok
// SIG undefined FUN_140868dc2(void)

void FUN_140868dc2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  float *pfVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  char cVar12;
  longlong lVar13;
  void **ppvVar14;
  longlong lVar15;
  undefined1 auStack_c8 [32];
  void **local_a8;
  longlong local_a0;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  void **local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x118) == 0) {
    if (*(int *)(param_1 + 0x138) == 0) goto LAB_1408694af;
    plVar1 = (longlong *)(param_1 + 0x130);
    plVar7 = (longlong *)*plVar1;
    local_98 = (void *)0x0;
    local_90 = (int)plVar7[1];
    lVar13 = (longlong)local_90;
    pvVar3 = (void *)*plVar7;
    if (lVar13 == 0) {
      local_8c = 0;
      plVar11 = plVar7;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar3,lVar13 * 2);
      plVar11 = (longlong *)*plVar1;
    }
    local_68 = (int)plVar7[6];
    local_88 = (undefined4)plVar7[2];
    uStack_84 = *(undefined4 *)((longlong)plVar7 + 0x14);
    uStack_80 = (undefined4)plVar7[3];
    uStack_7c = *(undefined4 *)((longlong)plVar7 + 0x1c);
    local_78 = (undefined4)plVar7[4];
    uStack_74 = *(undefined4 *)((longlong)plVar7 + 0x24);
    uStack_70 = (undefined4)plVar7[5];
    uStack_6c = *(undefined4 *)((longlong)plVar7 + 0x2c);
    if (*plVar11 != 0) {
      FUN_1400020a8();
    }
    iVar5 = *(int *)(param_1 + 0x138) + -1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      memmove(plVar11,plVar11 + 7,(longlong)iVar5 * 0x38);
      iVar5 = *(int *)(param_1 + 0x138) + -1;
    }
    *(int *)(param_1 + 0x138) = iVar5;
    FUN_1418fecaa(plVar1);
    cVar12 = '\x01';
    if (*(longlong *)(param_1 + 0x140) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x1d8) = 2;
      lVar13 = *(longlong *)(param_1 + 0x140);
      if (lVar13 != 0) {
        if (*(char *)(lVar13 + 0x1d8) == '\x02') {
          pfVar8 = (float *)&DAT_14c7640c0;
        }
        else {
          if (*(char *)(lVar13 + 0x1d8) != '\x01') goto LAB_14086920a;
          pfVar8 = (float *)&DAT_14c7640bc;
        }
        *(bool *)(lVar13 + 0x1d9) =
             *pfVar8 <= *(float *)(param_1 + 0x158) && *(float *)(param_1 + 0x158) != *pfVar8;
        cVar12 = *(char *)(*(longlong *)(param_1 + 0x140) + 0x1d9);
      }
    }
LAB_14086920a:
    *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
    lVar13 = param_1 + 0x48;
    uVar6 = FUN_1411bcf8a(&local_98);
    plVar7 = (longlong *)FUN_14132ad16(lVar13,uVar6,&local_98);
    local_a0 = *plVar7;
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_140ef4b32(lVar13,&local_98);
    FUN_141328b5c(param_1,&local_a8,&local_98);
    if (local_a8 == (void **)0x0) {
      *(undefined4 *)(param_1 + 0x148) = 0;
      local_58 = &local_a0;
      local_60 = &local_98;
      FUN_140869872(lVar13,local_4c);
      lVar13 = *(longlong *)(param_1 + 0x130);
      iVar5 = *(int *)(param_1 + 0x138);
      lVar9 = (longlong)iVar5;
      if (lVar9 != 0) {
        lVar15 = lVar9 * 0x38;
        lVar10 = lVar13;
        do {
          cVar4 = FUN_140c3e654(lVar10,&local_98);
          if (cVar4 != '\0') goto LAB_1408692e2;
          lVar10 = lVar10 + 0x38;
          lVar15 = lVar15 + -0x38;
        } while (lVar15 != 0);
      }
      if (cVar12 == '\0') {
        FUN_1413067fa(plVar1,&local_98);
      }
      else {
LAB_1408692e2:
        if (DAT_14c7640c4 <= local_68) goto LAB_140869480;
        local_68 = local_68 + 1;
        *(undefined4 *)(param_1 + 0x158) = 0;
        *(uint *)(param_1 + 0x138) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x13c) < iVar5 + 1U) {
          FUN_141306894(plVar1,iVar5);
          lVar13 = *plVar1;
        }
        pvVar3 = local_98;
        lVar9 = lVar9 * 0x38;
        puVar2 = (undefined8 *)(lVar13 + lVar9);
        *(undefined8 *)(lVar13 + lVar9) = 0;
        lVar10 = (longlong)local_90;
        *(int *)(lVar13 + 8 + lVar9) = local_90;
        if (lVar10 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,local_90,0);
          memcpy((void *)*puVar2,pvVar3,lVar10 * 2);
        }
        *(int *)(puVar2 + 6) = local_68;
        puVar2[4] = CONCAT44(uStack_74,local_78);
        puVar2[5] = CONCAT44(uStack_6c,uStack_70);
        *(undefined4 *)(puVar2 + 2) = local_88;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_84;
        *(undefined4 *)(puVar2 + 3) = uStack_80;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_7c;
      }
    }
    else {
      FUN_14596bd8a(param_1,&local_98);
      ppvVar14 = local_a8;
LAB_14086912c:
      FUN_144327088(param_1 + 400,&local_98,ppvVar14);
      *(undefined4 *)(param_1 + 0x148) = 0;
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x110);
    if (*(longlong *)(param_1 + 0x140) != 0) {
      *(undefined1 *)(*(longlong *)(param_1 + 0x140) + 0x1d8) = 1;
    }
    plVar7 = (longlong *)*plVar1;
    local_98 = (void *)0x0;
    local_90 = (int)plVar7[1];
    lVar13 = (longlong)local_90;
    pvVar3 = (void *)*plVar7;
    if (lVar13 == 0) {
      local_8c = 0;
      plVar11 = plVar7;
    }
    else {
      FUN_1446dd670(&local_98,local_90,0);
      memcpy(local_98,pvVar3,lVar13 * 2);
      plVar11 = (longlong *)*plVar1;
    }
    local_68 = (int)plVar7[6];
    local_88 = (undefined4)plVar7[2];
    uStack_84 = *(undefined4 *)((longlong)plVar7 + 0x14);
    uStack_80 = (undefined4)plVar7[3];
    uStack_7c = *(undefined4 *)((longlong)plVar7 + 0x1c);
    local_78 = (undefined4)plVar7[4];
    uStack_74 = *(undefined4 *)((longlong)plVar7 + 0x24);
    uStack_70 = (undefined4)plVar7[5];
    uStack_6c = *(undefined4 *)((longlong)plVar7 + 0x2c);
    if (*plVar11 != 0) {
      FUN_1400020a8();
    }
    iVar5 = *(int *)(param_1 + 0x118) + -1;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      memmove(plVar11,plVar11 + 7,(longlong)iVar5 * 0x38);
      iVar5 = *(int *)(param_1 + 0x118) + -1;
    }
    *(int *)(param_1 + 0x118) = iVar5;
    FUN_1418fecaa(plVar1);
    plVar7 = (longlong *)(param_1 + 0x48);
    uVar6 = FUN_1411bcf8a(&local_98);
    iVar5 = FUN_14132aec2(plVar7,uVar6,&local_98);
    if (iVar5 == -1) {
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + 1;
      lVar13 = *(longlong *)(param_1 + 0x140);
      cVar12 = '\x01';
      if (lVar13 != 0) {
        if (*(char *)(lVar13 + 0x1d8) == '\x02') {
          pfVar8 = (float *)&DAT_14c7640c0;
        }
        else {
          if (*(char *)(lVar13 + 0x1d8) != '\x01') goto LAB_140868f98;
          pfVar8 = (float *)&DAT_14c7640bc;
        }
        *(bool *)(lVar13 + 0x1d9) =
             *pfVar8 <= *(float *)(param_1 + 0x158) && *(float *)(param_1 + 0x158) != *pfVar8;
        cVar12 = *(char *)(*(longlong *)(param_1 + 0x140) + 0x1d9);
      }
LAB_140868f98:
      FUN_141328b5c(param_1,&local_60,&local_98);
      ppvVar14 = local_60;
      if (local_60 != (void **)0x0) {
        if (cVar12 == '\0') {
          FUN_14596bd8a(param_1,&local_98);
        }
        else {
          iVar5 = *(int *)(param_1 + 0x138);
          *(uint *)(param_1 + 0x138) = iVar5 + 1U;
          if (*(uint *)(param_1 + 0x13c) < iVar5 + 1U) {
            FUN_141306894((longlong *)(param_1 + 0x130),iVar5);
          }
          pvVar3 = local_98;
          lVar13 = *(longlong *)(param_1 + 0x130);
          lVar9 = (longlong)iVar5 * 0x38;
          puVar2 = (undefined8 *)(lVar13 + lVar9);
          *(undefined8 *)(lVar13 + lVar9) = 0;
          lVar10 = (longlong)local_90;
          *(int *)(lVar13 + 8 + lVar9) = local_90;
          if (lVar10 == 0) {
            *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(puVar2,local_90,0);
            memcpy((void *)*puVar2,pvVar3,lVar10 * 2);
          }
          *(int *)(puVar2 + 6) = local_68;
          puVar2[4] = CONCAT44(uStack_74,local_78);
          puVar2[5] = CONCAT44(uStack_6c,uStack_70);
          *(undefined4 *)(puVar2 + 2) = local_88;
          *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_84;
          *(undefined4 *)(puVar2 + 3) = uStack_80;
          *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_7c;
        }
        goto LAB_14086912c;
      }
      if ((longlong)*(int *)(param_1 + 0x118) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x110);
        lVar9 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
        do {
          cVar4 = FUN_140c3e654(lVar13,&local_98);
          if (cVar4 != '\0') goto LAB_140869077;
          lVar13 = lVar13 + 0x38;
          lVar9 = lVar9 + -0x38;
        } while (lVar9 != 0);
      }
      if (cVar12 == '\0') {
        FUN_1413067fa(plVar1,&local_98);
      }
      else {
LAB_140869077:
        *(undefined4 *)(param_1 + 0x158) = 0;
        iVar5 = *(int *)(param_1 + 0x138);
        *(uint *)(param_1 + 0x138) = iVar5 + 1U;
        if (*(uint *)(param_1 + 0x13c) < iVar5 + 1U) {
          FUN_141306894((longlong *)(param_1 + 0x130),iVar5);
        }
        pvVar3 = local_98;
        lVar13 = *(longlong *)(param_1 + 0x130);
        lVar9 = (longlong)iVar5 * 0x38;
        puVar2 = (undefined8 *)(lVar13 + lVar9);
        *(undefined8 *)(lVar13 + lVar9) = 0;
        lVar10 = (longlong)local_90;
        *(int *)(lVar13 + 8 + lVar9) = local_90;
        if (lVar10 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,local_90,0);
          memcpy((void *)*puVar2,pvVar3,lVar10 * 2);
        }
        *(int *)(puVar2 + 6) = local_68;
        puVar2[4] = CONCAT44(uStack_74,local_78);
        puVar2[5] = CONCAT44(uStack_6c,uStack_70);
        *(undefined4 *)(puVar2 + 2) = local_88;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_84;
        *(undefined4 *)(puVar2 + 3) = uStack_80;
        *(undefined4 *)((longlong)puVar2 + 0x1c) = uStack_7c;
      }
      *(undefined4 *)(param_1 + 0x148) = 0;
      FUN_140ef4b32(plVar7,&local_98);
    }
    else {
      uVar6 = FUN_1411bcf8a(&local_98);
      iVar5 = FUN_14132aec2(plVar7,uVar6,&local_98);
      if (iVar5 == -1) {
        lVar13 = 0;
      }
      else {
        lVar13 = (longlong)iVar5 * 0x48 + *plVar7;
      }
      FUN_144327088(param_1 + 400,&local_98,*(undefined8 *)(lVar13 + 0x38));
      FUN_14596bd8a(param_1,&local_98);
LAB_140869480:
      *(undefined4 *)(param_1 + 0x158) = 0;
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (*(int *)(param_1 + 0x150) < DAT_14c7640b8) {
    FUN_140868dc2(param_1);
  }
LAB_1408694af:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14086950a FUN_14086950a body=870 status=ok
// SIG undefined FUN_14086950a(void)

void FUN_14086950a(longlong param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  ulonglong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined1 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  FUN_14574f8fc(param_1 + 0x120,param_1 + 0x110);
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    FUN_1447f69b6(param_1 + 0x160);
    uVar11 = 0;
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    uVar8 = *(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x7c);
    if (uVar8 != 0) {
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar8);
      }
      FUN_140869bdc(&local_98,uVar8);
      iVar4 = 1;
      if (3 < uVar8) {
        uVar8 = (uVar8 | 1) + 0xe;
        iVar4 = 0x1f;
        if (uVar8 != 0) {
          for (; uVar8 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        iVar4 = 1 << ((byte)iVar4 & 0x1f);
      }
      if ((local_50 == 0) || (local_50 < iVar4)) {
        local_50 = iVar4;
        FUN_140869a1c();
      }
    }
    local_d8 = param_1 + 0x58;
    local_c0 = 0x100000000;
    local_b0 = 0xffffffff;
    local_a8 = 0;
    local_b8 = local_d8;
    if (*(int *)(param_1 + 0x70) == 0) {
      uVar13 = 1;
      local_b0._0_4_ = 0xffffffff;
      local_b0._4_4_ = 0;
      local_c0._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_c0);
      uVar13 = local_c0 >> 0x20;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x70);
    }
    local_c8 = param_1 + 0x48;
    iVar4 = (int)local_c0;
    uVar8 = (uint)local_b0;
    iVar5 = local_b0._4_4_;
    iVar7 = local_a8;
    lVar12 = local_b8;
    if (local_b0._4_4_ != (int)uVar11 || local_b8 != local_d8) {
      do {
        local_d0 = lVar12;
        local_e0 = uVar11;
        if ((longlong)*(int *)(param_1 + 0x128) != 0) {
          uVar11 = (longlong)iVar5 * 0x48 + *(longlong *)(param_1 + 0x48);
          lVar12 = *(longlong *)(param_1 + 0x120);
          lVar9 = (longlong)*(int *)(param_1 + 0x128) * 0x38;
          do {
            cVar3 = FUN_140c3e654(lVar12,uVar11);
            if (cVar3 != '\0') {
              local_b8 = uVar11 + 0x38;
              local_c0 = uVar11;
              FUN_140869872(&local_98,local_9c,&local_c0);
              break;
            }
            lVar12 = lVar12 + 0x38;
            lVar9 = lVar9 + -0x38;
          } while (lVar9 != 0);
        }
        uVar8 = uVar8 & ~(uint)uVar13;
        lVar12 = *(longlong *)(local_d0 + 0x10);
        if (*(longlong *)(local_d0 + 0x10) == 0) {
          lVar12 = local_d0;
        }
        iVar1 = *(int *)(local_d0 + 0x18);
        lVar9 = (longlong)iVar4;
        uVar6 = *(uint *)(lVar12 + lVar9 * 4) & uVar8;
        if (uVar6 == 0) {
          iVar5 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar5 = iVar1 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar7 = iVar7 + 0x20;
          iVar2 = iVar5;
          if (iVar5 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar4 < iVar5) {
            lVar10 = 0;
            do {
              uVar6 = *(uint *)(lVar12 + lVar9 * 4 + 4 + lVar10 * 4);
              if (uVar6 != 0) {
                iVar4 = iVar4 + (int)lVar10 + 1;
                uVar8 = 0xffffffff;
                goto LAB_140869763;
              }
              iVar7 = iVar7 + 0x20;
              lVar10 = lVar10 + 1;
            } while (iVar2 - lVar9 != lVar10);
            uVar8 = 0xffffffff;
            iVar4 = iVar2;
          }
          iVar4 = iVar4 + 1;
          iVar5 = iVar1;
        }
        else {
LAB_140869763:
          uVar13 = (ulonglong)(-uVar6 & uVar6);
          uVar11 = uVar13 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar5 = (iVar7 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar5) {
            iVar5 = iVar1;
          }
        }
        uVar11 = local_e0;
        lVar12 = local_d0;
      } while (iVar5 != (int)local_e0 || local_d0 != local_d8);
    }
    FUN_14574f95a(local_c8,&local_98);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14574f8c4(&local_98);
    FUN_1447f69b6(param_1 + 0x178);
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140869872 FUN_140869872 body=425 status=ok
// SIG undefined FUN_140869872(void)

undefined4 * FUN_140869872(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14132afb2(param_1,local_58);
  puVar1 = (undefined8 *)*param_3;
  plVar2 = (longlong *)param_3[1];
  *local_50 = 0;
  iVar14 = *(int *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  *(int *)(local_50 + 1) = iVar14;
  if ((longlong)iVar14 == 0) {
    *(undefined4 *)((longlong)local_50 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(local_50,iVar14,0);
    memcpy((void *)*local_50,_Src,(longlong)iVar14 * 2);
  }
  *(undefined4 *)(local_50 + 6) = *(undefined4 *)(puVar1 + 6);
  uVar3 = *(undefined4 *)(puVar1 + 2);
  uVar4 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uVar5 = *(undefined4 *)(puVar1 + 3);
  uVar6 = *(undefined4 *)((longlong)puVar1 + 0x1c);
  uVar7 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uVar8 = *(undefined4 *)(puVar1 + 5);
  uVar9 = *(undefined4 *)((longlong)puVar1 + 0x2c);
  *(undefined4 *)(local_50 + 4) = *(undefined4 *)(puVar1 + 4);
  *(undefined4 *)((longlong)local_50 + 0x24) = uVar7;
  *(undefined4 *)(local_50 + 5) = uVar8;
  *(undefined4 *)((longlong)local_50 + 0x2c) = uVar9;
  *(undefined4 *)(local_50 + 2) = uVar3;
  *(undefined4 *)((longlong)local_50 + 0x14) = uVar4;
  *(undefined4 *)(local_50 + 3) = uVar5;
  *(undefined4 *)((longlong)local_50 + 0x1c) = uVar6;
  lVar15 = *plVar2;
  local_50[7] = lVar15;
  if ((lVar15 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(local_50 + 8) = 0xffffffff;
  local_5c = local_58[0];
  uVar11 = FUN_1411bcf8a(local_50);
  cVar10 = FUN_14132af2e(param_1,uVar11,local_50,&local_5c);
  uVar3 = local_5c;
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar14 = 1;
    if (3 < uVar12) {
      uVar13 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar15 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar15 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar14 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_50 + 0x44) = uVar11;
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 8) =
           *(undefined4 *)
            (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar15 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar15 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar15 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_5c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar14;
      FUN_140869a1c(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140869a1c FUN_140869a1c body=447 status=ok
// SIG undefined FUN_140869a1c(void)

void FUN_140869a1c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar3 = *(uint *)(param_1 + 9);
  uVar4 = local_68;
  if (uVar3 != 0) {
    plVar1 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_58);
    }
    local_78 = local_58;
    local_70 = local_50;
    local_68 = local_48;
    uVar4 = local_68;
    local_60 = local_40;
    local_5c = local_3c;
    local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
    local_80 = param_1;
    if (local_68._4_4_ < (int)local_50[3]) {
      iVar5 = local_68._4_4_;
      local_68 = uVar4;
      do {
        lVar2 = *local_80 + (longlong)iVar5 * 0x48;
        iVar6 = FUN_1411bcf8a(lVar2);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar2 + 0x44) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x40) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar5 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140869bdc FUN_140869bdc body=425 status=ok
// SIG undefined FUN_140869bdc(void)

void FUN_140869bdc(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1403af08a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14021b4e8(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x48 + -0x44);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x48) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x12;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
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
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 140869d86 FUN_140869d86 body=598 status=ok
// SIG undefined FUN_140869d86(void)

longlong * FUN_140869d86(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != param_2) {
    local_70 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = local_70;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      iVar10 = 0;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar15 = local_68 >> 0x20;
      iVar10 = (int)param_1[5];
    }
    plVar6 = local_60;
    iVar8 = (int)local_68;
    uVar16 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ != iVar10 || local_60 != local_70) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x48) != 0) {
          FUN_1400020a8();
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        plVar14 = (longlong *)plVar6[2];
        if ((longlong *)plVar6[2] == (longlong *)0x0) {
          plVar14 = plVar6;
        }
        iVar2 = (int)plVar6[3];
        lVar12 = (longlong)iVar8;
        uVar9 = *(uint *)((longlong)plVar14 + lVar12 * 4) & uVar16;
        if (uVar9 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar13 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar14 + lVar13 * 4 + lVar12 * 4 + 4);
              if (uVar9 != 0) {
                iVar8 = iVar8 + (int)lVar13 + 1;
                uVar16 = 0xffffffff;
                goto LAB_140869eaf;
              }
              iVar11 = iVar11 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar3 - lVar12 != lVar13);
            uVar16 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar2;
        }
        else {
LAB_140869eaf:
          uVar15 = (ulonglong)(-uVar9 & uVar9);
          uVar1 = uVar15 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar7 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar7) {
            iVar7 = iVar2;
          }
        }
      } while (iVar7 != iVar10 || plVar6 != local_70);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar12 = param_2[3];
      uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)local_70 = (int)param_2[2];
      *(undefined4 *)((longlong)local_70 + 4) = uVar4;
      *(int *)(local_70 + 1) = (int)lVar12;
      *(undefined4 *)((longlong)local_70 + 0xc) = uVar5;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140869fde FUN_140869fde body=60 status=ok
// SIG undefined FUN_140869fde(void)

void FUN_140869fde(longlong param_1)

{
  FUN_14086a01a(param_1 + 0x28f8,0);
  *(undefined8 *)(param_1 + 0x2500) = 0;
  FUN_140283eaa(param_1 + 0x2568,0);
  FUN_140521022(param_1);
  return;
}



// FUNCTION 14086a01a FUN_14086a01a body=126 status=ok
// SIG undefined FUN_14086a01a(void)

void FUN_14086a01a(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 14086a098 FUN_14086a098 body=65 status=ok
// SIG undefined FUN_14086a098(void)

undefined8 * FUN_14086a098(undefined8 *param_1)

{
  FUN_14086a0da();
  *param_1 = &PTR_FUN_14b0c08d0;
  param_1[5] = &PTR_FUN_14b0c0b80;
  param_1[10] = &PTR_FUN_14b0c0bb0;
  param_1[0xb] = &PTR_FUN_14b0c0be0;
  return param_1;
}



// FUNCTION 14086a0da FUN_14086a0da body=116 status=ok
// SIG undefined FUN_14086a0da(void)

undefined8 * FUN_14086a0da(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a1ad920;
  param_1[5] = &PTR_FUN_14a1adbd0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 14086a14e FUN_14086a14e body=874 status=ok
// SIG undefined FUN_14086a14e(void)

void FUN_14086a14e(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  char *_Str;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  longlong lVar10;
  undefined1 auStack_418 [32];
  wchar_t *local_3f8;
  ulonglong local_3f0;
  ulonglong local_3e8;
  wchar_t *pwStack_3e0;
  undefined4 local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  undefined2 **local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined2 *local_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined4 local_388;
  undefined8 local_380;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  code *local_1c8;
  undefined8 local_1b8;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [256];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_418;
  pcVar4 = (code *)param_2[1];
  pcVar5 = (code *)param_2[2];
  if ((code *)*param_2 == (code *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (*(code *)*param_2)();
  }
  if (pcVar4 == (code *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (*pcVar4)();
  }
  if (pcVar5 == (code *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = (*pcVar5)();
  }
  if (*param_1 == 0) {
    uVar3 = *(undefined4 *)(param_2 + 6);
    _Str = (char *)param_2[3];
    local_78 = 0;
    local_3b0 = uVar8;
    if (_Str == (char *)0x0) {
      local_70 = 0;
      local_68 = 0;
    }
    else {
      sVar9 = strlen(_Str);
      FUN_1446e6fe8(local_178,_Str,sVar9 & 0xffffffff,1);
    }
    FUN_1446f470e(&local_3a8,local_70,1);
    if (DAT_14c948fa0 == 0) {
      local_3a0 = &DAT_1427db2a2;
      lVar10 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar10;
      FUN_1446f470e(&local_398,L"ScriptStruct",1);
      local_3c0 = &local_3a0;
      local_3c8 = &LAB_1468915ce;
      local_3d0 = FUN_1427dc742;
      pwStack_3e0 = L"Engine";
      local_3d8 = 199;
      local_3e8 = 0x10;
      local_3f0 = CONCAT44(local_3f0._4_4_,0x10000020);
      local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,8);
      FUN_14574b4b2(lVar10);
      DAT_14c948fa0 = lVar10;
      local_3b8 = FUN_1446f8646();
      lVar10 = DAT_14c948fa0;
      uVar8 = FUN_1449e2fb2();
      local_3f8 = L"ScriptStruct";
      FUN_14574b446(uVar8,lVar10,local_3b8,L"/Script/CoreUObject");
    }
    local_3e8 = 0;
    pwStack_3e0 = (wchar_t *)0x0;
    local_3f0 = local_3f0 & 0xffffffffffffff00;
    local_3f8 = (wchar_t *)((ulonglong)local_3f8 & 0xffffffff00000000);
    lVar10 = FUN_140010cf7(DAT_14c948fa0,uVar6,local_3a8,uVar3);
    bVar1 = *(byte *)((longlong)param_2 + 0x2c);
    uVar2 = *(ushort *)((longlong)param_2 + 0x2a);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
    local_398 = 0;
    uStack_390 = 0;
    local_388 = 0x10000;
    local_380 = 0;
    local_278 = 0;
    local_270 = 0x800000000;
    local_1e8 = 0;
    local_1e0 = 0x800000000;
    local_1d8 = 0;
    local_1b8 = 0;
    local_1a8 = &PTR_LAB_149e01e20;
    local_1a0 = &DAT_142840532;
    local_1c8 = FUN_140d11fbe;
    local_188 = 0;
    uStack_180 = 0;
    FUN_140282ace(&local_398);
    local_3f8 = (wchar_t *)CONCAT44(local_3f8._4_4_,uVar3);
    local_3f0 = (ulonglong)uVar2;
    local_3e8 = (ulonglong)bVar1;
    FUN_14086a4ba(lVar10,&local_398,uVar7,local_3b0);
    FUN_140010906(&local_398);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    *param_1 = lVar10;
    FUN_1400102c4(lVar10,param_2[4],*(undefined2 *)(param_2 + 5));
    FUN_140010366(lVar10,0);
  }
  if ((local_60 ^ (ulonglong)auStack_418) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086a4ba FUN_14086a4ba body=120 status=ok
// SIG undefined FUN_14086a4ba(void)

undefined8 *
FUN_14086a4ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             uint param_5,longlong param_6,longlong param_7)

{
  if (param_4 != 0) {
    param_7 = (longlong)*(int *)(param_4 + 0xc);
    param_6 = (longlong)*(int *)(param_4 + 8);
  }
  FUN_140010446(param_1,param_2,param_3,param_6,param_7);
  *param_1 = &PTR_FUN_149e6bd00;
  *(uint *)(param_1 + 0x16) = param_4 != 0 | param_5;
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x17] = param_4;
  FUN_14086a532(param_1);
  return param_1;
}



// FUNCTION 14086a532 FUN_14086a532 body=1313 status=ok
// SIG undefined FUN_14086a532(void)

void FUN_14086a532(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *_Dst;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  size_t _Size;
  undefined *puVar10;
  longlong lVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0xb4) != '\0') goto LAB_14086aa34;
  plVar7 = *(longlong **)(param_1 + 0xb8);
  if (plVar7 == (longlong *)0x0) {
    FUN_1427dc684();
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar5 = param_1;
LAB_14086a895:
    lVar8 = lVar5;
    lVar5 = lVar8;
    if (*(longlong *)(lVar8 + 0x20) != 0) goto code_r0x00014086a8a4;
    goto LAB_14086a8b5;
  }
LAB_14086a569:
  (**(code **)(*plVar7 + 8))(plVar7,&local_38);
  if (((local_2c & 8) != 0) ||
     ((**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38),
     (local_2c & 0x10) != 0)) {
    *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 8;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2c & 0x20) != 0) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 4;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2b & 2) != 0) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 0x20;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2c & 0x40) != 0) {
    *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 4;
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
    if ((char)local_2c < '\0') {
      *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 0x40;
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2b & 1) != 0) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 0x10;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  uVar9 = 0x6000;
  if ((local_2b & 4) == 0) {
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
    if ((local_2b & 0x20) != 0) {
      *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 0x10;
    }
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
    uVar9 = 0x4000;
    if ((local_2c & 4) == 0) goto LAB_14086a6ab;
  }
  else {
LAB_14086a6ab:
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) | uVar9;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2c & 2) != 0) {
    *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 0x80;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if (((local_2b & 4) != 0) &&
     ((**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(), (local_2c & 2) == 0)) {
    _Size = (size_t)*(int *)(*(longlong *)(param_1 + 0xb8) + 8);
    _Dst = (void *)FUN_14001cc68(_Size);
    memset(_Dst,0,_Size);
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))(*(longlong **)(param_1 + 0xb8),_Dst);
    (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x10))(*(longlong **)(param_1 + 0xb8),_Dst);
    if ((longlong)_Size < 1) {
      FUN_1400020a8(_Dst);
    }
    else {
      lVar4 = 1;
      do {
        cVar1 = *(char *)((longlong)_Dst + lVar4 + -1);
        if ((longlong)_Size <= lVar4) break;
        lVar4 = lVar4 + 1;
      } while (cVar1 == '\0');
      FUN_1400020a8(_Dst);
      if (cVar1 != '\0') goto LAB_14086a7a1;
    }
    *(byte *)(param_1 + 0xb1) = *(byte *)(param_1 + 0xb1) | 0x80;
  }
LAB_14086a7a1:
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2b & 0x40) != 0) {
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 2;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2a & 2) != 0) {
    *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 0x40;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((char)local_2b < '\0') {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 1;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_2a & 1) != 0) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 2;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if (((local_2a & 4) != 0) ||
     ((**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38),
     (local_2a & 8) != 0)) {
    *(byte *)(param_1 + 0xb2) = *(byte *)(param_1 + 0xb2) | 8;
  }
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))(*(longlong **)(param_1 + 0xb8),&local_38);
  if ((local_29 & 2) != 0) {
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 4;
  }
  goto LAB_14086aa2d;
code_r0x00014086a8a4:
  lVar5 = *(longlong *)(lVar8 + 0x20);
  if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) goto LAB_14086a895;
  lVar5 = FUN_142840154(lVar8);
LAB_14086a8b5:
  if (lVar5 == 0) {
    lVar5 = *(longlong *)(lVar8 + 0x20);
    goto LAB_14086a895;
  }
  if (DAT_14c949410 != DAT_14c94943c) {
    lVar5 = *(longlong *)(lVar5 + 0x18);
    uVar9 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar12 = (uint)lVar5 & 0xffff;
    uVar3 = (uint)((ulonglong)lVar4 >> 0x10);
    uVar6 = (uint)lVar4 & 0xffff;
    uVar9 = (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar12) +
            (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4);
    puVar10 = &DAT_14c949440;
    if (DAT_14c949448 != (undefined *)0x0) {
      puVar10 = DAT_14c949448;
    }
    iVar2 = *(int *)(puVar10 +
                    (ulonglong)
                    (DAT_14c949450 - 1U &
                    ((uVar9 >> 2) +
                     (int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar6) +
                     (uVar6 >> 4) + (uVar3 << 0x13 | uVar3 & 0xffff) + uVar9 * 0x40 + 0x9e3779b9 ^
                    uVar9)) * 4);
    while (iVar2 != -1) {
      lVar11 = (longlong)iVar2 * 0x20;
      lVar8 = DAT_14c949408 + lVar11;
      if ((*(longlong *)(DAT_14c949408 + lVar11) == lVar5) &&
         (*(longlong *)(DAT_14c949408 + 8 + lVar11) == lVar4)) {
        if (lVar8 != 0) {
          plVar7 = *(longlong **)(lVar8 + 0x10);
          *(longlong **)(param_1 + 0xb8) = plVar7;
          if (plVar7 == (longlong *)0x0) goto LAB_14086a9d0;
          *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 1;
          goto LAB_14086a569;
        }
        break;
      }
      iVar2 = *(int *)(lVar8 + 0x18);
    }
  }
  *(undefined8 *)(param_1 + 0xb8) = 0;
LAB_14086a9d0:
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    local_40 = *(undefined8 *)(param_1 + 0x18);
    FUN_1400021e4(&local_40,&local_38);
    puVar13 = local_38;
    if (local_30 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/Class.cpp",0xbb9,
                  L"Couldn\'t bind to native struct %s. Headers need to be rebuilt, or a noexport class is missing a IMPLEMENT_STRUCT."
                  ,puVar13);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14086aa2d:
  *(undefined1 *)(param_1 + 0xb4) = 1;
LAB_14086aa34:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086aa54 FUN_14086aa54 body=120 status=ok
// SIG undefined FUN_14086aa54(void)

void FUN_14086aa54(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x1c8);
  if (lVar1 == 0) {
    local_18 = DAT_14c8464f0;
    local_28 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_20 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    uVar2 = (undefined4)DAT_14c8464e0;
  }
  else {
    local_28 = *(undefined8 *)(lVar1 + 0x260);
    uStack_20 = *(undefined8 *)(lVar1 + 0x268);
    local_18 = *(undefined8 *)(lVar1 + 0x270);
    uVar2 = (int)local_18;
  }
  FUN_14086aacd(uVar2,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086aacd FUN_14086aacd body=91 status=ok
// SIG undefined FUN_14086aacd(void)

undefined8 FUN_14086aacd(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if (lVar2 != 0) {
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      uVar3 = (**(code **)(*param_1 + 0x180))(param_1);
      uVar3 = FUN_14086ab28(uVar3,param_2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 14086ab28 FUN_14086ab28 body=488 status=ok
// SIG undefined FUN_14086ab28(void)

ulonglong FUN_14086ab28(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == 0) {
    uVar10 = 0;
    goto LAB_14086ac89;
  }
  lVar4 = FUN_1405c673d();
  lVar4 = FUN_140877d78(lVar4 + 0x88);
  FUN_1408b794c(&local_58,param_1);
  plVar9 = (longlong *)CONCAT44(uStack_4c,local_50);
  if (plVar9 == (longlong *)0x0) {
LAB_14086acc1:
    bVar11 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar3 = (int)plVar9[1];
    do {
      if (iVar3 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar2 = (int)plVar9[1];
      bVar11 = iVar3 == iVar2;
      if (bVar11) {
        *(int *)(plVar9 + 1) = iVar3 + 1;
        iVar2 = iVar3;
      }
      iVar3 = iVar2;
      UNLOCK();
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_4c,local_50) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x10))();
    }
    if (plVar9 == (longlong *)0x0) goto LAB_14086acc1;
    if (local_58 != 0) {
      lVar5 = FUN_144a2b138();
      if (lVar5 == 0) {
        local_50 = 0x3860a972;
        local_58 = 0;
      }
      else {
        local_58 = *(ulonglong *)(lVar5 + 0x3c8);
        local_50 = *(undefined4 *)(lVar5 + 0x3d0);
      }
      local_48 = 0;
      plVar6 = (longlong *)FUN_140944864();
      if (plVar6 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar6 + 8))(plVar6);
        lVar7 = FUN_14086ad12();
        if ((((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) && (plVar6[0x3a] != 0)) {
          lVar4 = FUN_140877d78(plVar6 + 0x39);
        }
      }
    }
    bVar11 = false;
  }
  if (lVar4 == 0) {
LAB_14086acbd:
    uVar10 = 0;
  }
  else {
    uVar8 = FUN_1402a1570(param_1,lVar4);
    FUN_1402a10ba(&local_58,param_1,uVar8,param_2);
    if ((local_58._1_1_ != '\x01') || (*(int *)(lVar4 + 0x68) <= (int)(uint)(byte)local_58))
    goto LAB_14086acbd;
    uVar10 = CONCAT71((int7)((ulonglong)param_2 >> 8),
                      *(undefined1 *)(*(longlong *)(lVar4 + 0x60) + 8 + (local_58 & 0xff) * 0x20));
  }
  if (!bVar11) {
    LOCK();
    plVar6 = plVar9 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
LAB_14086ac89:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 14086ad12 FUN_14086ad12 body=57 status=ok
// SIG undefined FUN_14086ad12(void)

void FUN_14086ad12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc1500 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc1500 = FUN_140002ddd(FUN_14661bac2,uVar1,L"WorldRegionDef");
  }
  return;
}



// FUNCTION 14086ad4c FUN_14086ad4c body=21 status=ok
// SIG undefined FUN_14086ad4c(void)

undefined8 FUN_14086ad4c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14086ad62 FUN_14086ad62 body=831 status=ok
// SIG undefined FUN_14086ad62(void)

void FUN_14086ad62(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ushort uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  
  if (0 < (longlong)*(int *)(param_1 + 0xf8)) {
    uVar16 = (longlong)*(int *)(param_1 + 0xf8);
    do {
      uVar14 = uVar16 - 1;
      if ((longlong)uVar16 <= (longlong)*(int *)(param_1 + 0x118)) {
        lVar15 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar15 = param_1 + 0x100;
        }
        if (((*(uint *)(lVar15 + (uVar14 >> 5) * 4) >> ((uint)uVar14 & 0x1f) & 1) != 0) &&
           (cVar5 = FUN_14086b0a2(uVar14 * 0x10 + *(longlong *)(param_1 + 0xf0)), cVar5 != '\0')) {
          FUN_140bbeb80((longlong *)(param_1 + 0xf0),uVar14 & 0xffffffff);
          uVar17 = (uint)(uVar14 & 0xffff);
          if ((int)uVar17 < *(int *)(param_1 + 0x140)) {
            lVar15 = param_1 + 0x128;
            if (*(longlong *)(param_1 + 0x138) != 0) {
              lVar15 = *(longlong *)(param_1 + 0x138);
            }
            puVar9 = (uint *)(lVar15 + ((uVar14 & 0xffff) >> 5) * 4);
            *puVar9 = *puVar9 & ~(1 << ((byte)uVar14 & 0x1f));
          }
          if (*(int *)(param_1 + 0x98) != 0) {
            lVar15 = param_1 + 0x88;
            if (*(longlong *)(param_1 + 0x90) != 0) {
              lVar15 = *(longlong *)(param_1 + 0x90);
            }
            plVar1 = (longlong *)(param_1 + 0x50);
            iVar13 = *(int *)(lVar15 + (ulonglong)(*(int *)(param_1 + 0x98) - 1U & uVar17) * 4);
            while (iVar11 = iVar13, iVar11 != -1) {
              lVar15 = *plVar1;
              iVar13 = *(int *)(lVar15 + 4 + (longlong)iVar11 * 0xc);
              if (*(short *)(lVar15 + (longlong)iVar11 * 0xc) == (short)uVar14) {
                do {
                  FUN_140bbeb1c(param_1,lVar15 + (longlong)iVar11 * 0xc + 2);
                  FUN_14086b624(plVar1,iVar11);
                  do {
                    iVar11 = iVar13;
                    if (iVar11 == -1) goto LAB_14086adde;
                    lVar15 = *plVar1;
                    iVar13 = *(int *)(lVar15 + 4 + (longlong)iVar11 * 0xc);
                  } while (*(short *)(lVar15 + (longlong)iVar11 * 0xc) != (short)uVar14);
                } while( true );
              }
            }
          }
        }
      }
LAB_14086adde:
      bVar4 = 1 < (longlong)uVar16;
      uVar16 = uVar14;
    } while (bVar4);
  }
  iVar13 = *(int *)(param_1 + 200);
  if (iVar13 == 0) {
    uVar16 = 1;
    uVar14 = 0;
    iVar11 = 0;
    iVar12 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0xb0);
    }
    uVar17 = *puVar9;
    if (uVar17 == 0) {
      iVar11 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar11 = iVar13 + -1;
      }
      uVar14 = 0;
      uVar16 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar16 = uVar14;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar14) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar17 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar14 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar11 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar11) {
      iVar11 = iVar13;
    }
  }
  if (iVar11 < iVar13) {
    uVar17 = 0xffffffff;
    do {
      cVar5 = FUN_14086b0a2((longlong)iVar11 * 0x14 + *(longlong *)(param_1 + 0xa0));
      if ((cVar5 == '\0') &&
         (uVar3 = *(ushort *)(*(longlong *)(param_1 + 0xa0) + 8 + (longlong)iVar11 * 0x14),
         (int)(uint)uVar3 < *(int *)(param_1 + 0x118))) {
        lVar15 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar15 = param_1 + 0x100;
        }
        if ((*(uint *)(lVar15 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
        goto LAB_14086afb2;
      }
      else {
LAB_14086afb2:
        FUN_140bbece6((longlong *)(param_1 + 0xa0),iVar11);
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar9 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0xb0);
      }
      iVar13 = *(int *)(param_1 + 200);
      iVar11 = (int)uVar14;
      lVar15 = (longlong)iVar11;
      uVar6 = puVar9[lVar15] & uVar17;
      if (uVar6 == 0) {
        iVar7 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar7 = iVar13 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar11) {
          iVar8 = iVar11;
        }
        if (iVar7 <= iVar11) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar6 = puVar9[lVar15 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar15 == lVar10) {
            return;
          }
        }
        uVar14 = (ulonglong)(iVar11 + (int)lVar10 + 1);
        uVar17 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar11 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar13);
  }
  return;
}



// FUNCTION 14086b0a2 FUN_14086b0a2 body=143 status=ok
// SIG undefined FUN_14086b0a2(void)

uint FUN_14086b0a2(ulonglong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  
  uVar1 = *param_1;
  uVar2 = 1;
  if (((uVar1 >> 0x20 != 0) && (uVar4 = (uint)uVar1, -1 < (int)uVar4)) &&
     ((int)uVar4 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == (int)(uVar1 >> 0x20))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar3 = *plVar5, lVar3 != 0 && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)))))) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      uVar2 = *(uint *)(lVar3 + 8) >> 0x1c & 1;
    }
  }
  return uVar2;
}



// FUNCTION 14086b132 FUN_14086b132 body=888 status=ok
// SIG undefined FUN_14086b132(void)

void FUN_14086b132(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  byte bVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  longlong *local_80;
  uint local_74;
  ulonglong local_70;
  longlong *local_68;
  longlong local_60;
  uint *local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_14009d2a0();
  local_82 = *(undefined2 *)(lVar4 + 0x11c);
  iVar13 = (int)param_1[5];
  if (iVar13 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar14 = 0;
    iVar15 = 0;
  }
  else {
    puVar5 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar14 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar14 = iVar13 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar17) goto LAB_14086b483;
        iVar15 = iVar15 + 0x20;
        uVar12 = puVar5[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar18 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar14 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if (iVar13 <= iVar14) {
      iVar14 = iVar13;
    }
  }
  if (iVar14 < iVar13) {
    param_2 = param_2 + 0x28;
    local_68 = param_1 + 10;
    local_80 = param_1 + 0x25;
    uVar12 = 0xffffffff;
    local_60 = param_2;
    local_58 = (uint *)(param_1 + 2);
    do {
      local_4a = *(undefined2 *)(*param_1 + (longlong)iVar14 * 0xc);
      uVar1 = *(ushort *)(*param_1 + 2 + (longlong)iVar14 * 0xc);
      local_74 = uVar12;
      if ((uVar1 != 0xffff) && (cVar2 = FUN_140bbead8(param_2,local_4a,local_82), cVar2 != '\0')) {
        FUN_14086b58e(local_68,uVar1,&local_4a);
        iVar7 = uVar1 + 1;
        iVar13 = (int)param_1[0x28];
        iVar16 = iVar7 - iVar13;
        if (0 < iVar16) {
          if (iVar13 == 0) {
LAB_14086b381:
            uVar12 = *(uint *)((longlong)param_1 + 0x144);
            if (uVar12 == uVar1 || (int)uVar12 < (int)(uint)uVar1) {
              if (uVar1 < 0x80) {
                iVar11 = 0x80;
                iVar7 = iVar13;
              }
              else {
                uVar3 = uVar1 + 0x20 >> 5;
                local_70 = (ulonglong)uVar3;
                if (uVar12 + 0x1f < 0xa0) {
                  uVar9 = 4;
                  if (4 < uVar3) {
                    uVar9 = (ulonglong)uVar3;
                  }
                }
                else {
                  uVar9 = local_70 + (uVar3 * 3 >> 3) + 0x10;
                }
                uVar9 = FUN_144a3809e(uVar9 << 2,0);
                iVar7 = (int)(uVar9 >> 2);
                iVar11 = -0x20;
                if ((int)local_70 <= iVar7) {
                  iVar11 = iVar7 << 5;
                }
                iVar7 = (int)param_1[0x28];
              }
              *(int *)((longlong)param_1 + 0x144) = iVar11;
              FUN_1446efbd8(local_80,iVar7);
              iVar7 = (int)param_1[0x28] + iVar16;
            }
            iVar11 = iVar7 + 0x1f;
            if (-1 < iVar7) {
              iVar11 = iVar7;
            }
            *(int *)(param_1 + 0x28) = iVar7;
            if (iVar7 % 0x20 != 0) {
              plVar8 = (longlong *)param_1[0x27];
              if ((longlong *)param_1[0x27] == (longlong *)0x0) {
                plVar8 = local_80;
              }
              bVar6 = -(char)(iVar7 % 0x20);
              *(uint *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4) =
                   (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)
                         ) >> (bVar6 & 0x1f);
            }
          }
          else {
            iVar11 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar11 = iVar13 + -1;
            }
            if ((uint)(uVar1 >> 5) != iVar11 >> 5) goto LAB_14086b381;
            *(int *)(param_1 + 0x28) = iVar7;
          }
          FUN_1447c6044(local_80,iVar13,iVar16,0);
        }
        plVar8 = (longlong *)param_1[0x27];
        if ((longlong *)param_1[0x27] == (longlong *)0x0) {
          plVar8 = local_80;
        }
        puVar5 = (uint *)((longlong)plVar8 + (ulonglong)(uVar1 >> 5) * 4);
        *puVar5 = *puVar5 | 1 << ((byte)uVar1 & 0x1f);
        FUN_14086b4ac(param_1,iVar14);
        iVar13 = (int)param_1[5];
        param_2 = local_60;
      }
      uVar12 = local_74 & ~(uint)uVar18;
      puVar5 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar5 = local_58;
      }
      iVar14 = (int)uVar17;
      lVar4 = (longlong)iVar14;
      uVar3 = puVar5[lVar4] & uVar12;
      if (uVar3 == 0) {
        iVar7 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar7 = iVar13 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar16 = iVar7;
        if (iVar7 < iVar14) {
          iVar16 = iVar14;
        }
        if (iVar7 <= iVar14) break;
        lVar10 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar3 = puVar5[lVar4 + lVar10 + 1];
          if (uVar3 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar16 - lVar4 == lVar10) goto LAB_14086b483;
        }
        uVar17 = (ulonglong)(iVar14 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar3 & uVar3);
      uVar9 = uVar18 * 2 + 1;
      lVar4 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar14 = (iVar15 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar13);
  }
LAB_14086b483:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086b4ac FUN_14086b4ac body=91 status=ok
// SIG undefined FUN_14086b4ac(void)

void FUN_14086b4ac(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar5 = (longlong)*(int *)(lVar1 + 8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 4);
  FUN_14086b508(param_1,param_2,1);
  return;
}



// FUNCTION 14086b508 FUN_14086b508 body=134 status=ok
// SIG undefined FUN_14086b508(void)

void FUN_14086b508(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14086b58e FUN_14086b58e body=150 status=ok
// SIG undefined FUN_14086b58e(void)

int FUN_14086b58e(longlong *param_1,ushort param_2,short *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  int iVar5;
  int iVar4;
  
  if ((int)param_1[9] != 0) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & (uint)param_2) * 4);
    while (iVar4 = iVar3, iVar4 != -1) {
      lVar1 = *param_1;
      iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
      if (*(ushort *)(lVar1 + (longlong)iVar4 * 0xc) == param_2) {
        iVar5 = 0;
        do {
          if (*(short *)(lVar1 + 2 + (longlong)iVar4 * 0xc) == *param_3) {
            FUN_14086b624(param_1);
            iVar5 = iVar5 + 1;
          }
          do {
            iVar4 = iVar3;
            if (iVar4 == -1) {
              return iVar5;
            }
            lVar1 = *param_1;
            iVar3 = *(int *)(lVar1 + 4 + (longlong)iVar4 * 0xc);
          } while (*(ushort *)(lVar1 + (longlong)iVar4 * 0xc) != param_2);
        } while( true );
      }
    }
  }
  return 0;
}



// FUNCTION 14086b624 FUN_14086b624 body=91 status=ok
// SIG undefined FUN_14086b624(void)

void FUN_14086b624(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0xc;
  lVar5 = (longlong)*(int *)(lVar1 + 8);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0xc + 4);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 4);
  FUN_14086b680(param_1,param_2,1);
  return;
}



// FUNCTION 14086b680 FUN_14086b680 body=134 status=ok
// SIG undefined FUN_14086b680(void)

void FUN_14086b680(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0xc + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 3;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14086b706 FUN_14086b706 body=1687 status=ok
// SIG undefined FUN_14086b706(void)

ulonglong FUN_14086b706(longlong *param_1,undefined8 param_2,undefined4 param_3,double *param_4)

{
  longlong *plVar1;
  longlong **pplVar2;
  longlong *plVar3;
  int *piVar4;
  longlong *plVar5;
  undefined *puVar6;
  longlong **pplVar7;
  uint3 uVar8;
  int iVar9;
  undefined8 uVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong ***ppplVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_368 [32];
  uint local_348;
  int local_340;
  undefined4 local_338;
  undefined8 local_328;
  undefined **local_320;
  undefined2 local_318;
  undefined1 local_316;
  int local_314;
  int local_310;
  undefined8 local_308;
  float local_300;
  float fStack_2fc;
  float local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  longlong *local_2e8;
  undefined8 local_2e0;
  longlong **pplStack_2d8;
  longlong *local_2d0;
  ulonglong local_2c8;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined7 local_2b8;
  undefined4 uStack_2b1;
  undefined8 local_2a8;
  longlong **local_2a0;
  longlong *local_298;
  undefined4 local_28c;
  longlong *local_288;
  undefined ***local_280;
  undefined8 local_1d0;
  longlong **pplStack_1c8;
  longlong *local_1c0;
  longlong ***local_a8;
  undefined4 local_a0;
  longlong *local_88;
  longlong local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_368;
  local_328 = param_2;
  if ((*(char *)((longlong)param_1 + 0x37b) == '\x01') &&
     (((char)param_1[0x6f] != '\0' || (*(char *)((longlong)param_1 + 0x379) == '\x01')))) {
    *(undefined1 *)((longlong)param_1 + 0x37a) = 1;
    plVar13 = (longlong *)FUN_144a81a0a();
    (**(code **)(*plVar13 + 0x50))(plVar13,&local_28c);
    iVar9 = DAT_14c9680a8;
    (**(code **)(*(longlong *)DAT_14c968088[1] + 0x20))((longlong *)DAT_14c968088[1],&local_1d0);
    local_338 = local_28c;
    local_340 = iVar9;
    local_348 = 0;
    uVar12 = (**(code **)(*param_1 + 0xe0))(param_1,local_328,&local_1d0,0x3f800000);
    uVar16 = (ulonglong)uVar12;
    goto LAB_14086b990;
  }
  plVar13 = param_1 + -0x29;
  FUN_140e6b8b4(&local_2a8,param_3);
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_288);
  plVar3 = local_298;
  if (local_298 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_298 + 1) = (int)local_298[1] + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 1;
  (**(code **)(param_1[-0x29] + 0x70))(plVar13,&local_1d0);
  puVar6 = local_1d0;
  fVar19 = (float)param_4[1];
  fVar20 = (float)*param_4;
  local_314 = (*(code *)**(undefined8 **)param_1[0xbb])();
  uVar10 = local_328;
  local_318 = local_288._0_2_;
  local_316 = 0;
  local_308 = 0;
  local_320 = &PTR_FUN_149eda650;
  local_2f8 = (float)local_1d0;
  local_2f4 = local_1d0._4_4_;
  local_2ec = fVar19 - local_1d0._4_4_;
  local_2f0 = fVar20 - (float)local_1d0;
  local_2e0 = local_2a8;
  pplStack_2d8 = local_2a0;
  local_2d0 = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  local_2c8 = 10;
  local_2c0 = 0x3f800000;
  local_2bc = 0;
  local_2b8 = 0;
  uStack_2b1 = 0;
  local_310 = local_314;
  local_300 = fVar20;
  fStack_2fc = fVar19;
  local_2e8 = plVar1;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar4 = (int *)((longlong)plVar3 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  dVar17 = (double)(**(code **)(param_1[-0x29] + 0x60))(plVar13);
  dVar18 = (double)param_1[0x45];
  if ((dVar18 != dVar17) || (NAN(dVar18) || NAN(dVar17))) {
    param_1[0x45] = (longlong)dVar17;
    FUN_1402c1cc6(param_1 + 0x47);
    dVar18 = (double)param_1[0x45];
  }
  param_1[0x46] = (longlong)dVar18;
  (**(code **)(*DAT_14c968088 + 0x48))(DAT_14c968088,uVar10);
  if (local_314 == 0) {
    local_1d0 = (undefined *)local_2e0;
    pplStack_1c8 = pplStack_2d8;
    local_1c0 = local_2d0;
    if (local_2d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2d0 + 1) = (int)local_2d0[1] + 1;
      UNLOCK();
    }
    FUN_14086bd9e(plVar1,&local_288,&local_1d0,0);
    plVar3 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar4 = (int *)((longlong)plVar3 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  local_280 = &local_320;
  pplStack_1c8 = &local_288;
  local_1d0 = &DAT_1428f5dd4;
  local_288 = plVar13;
  cVar11 = FUN_1402c4aee(param_1 + 0xa0);
  iVar9 = local_314;
  uVar8 = (uint3)((ulonglong)puVar6 >> 0x28);
  uVar16 = CONCAT71((uint7)uVar8,1);
  if (cVar11 == '\0') {
    if (((longlong)local_314 < 0) || ((int)param_1[0x3a] <= local_314)) {
LAB_14086bd43:
      FUN_141370954(plVar13,&local_1d0,iVar9,0);
    }
    else {
      lVar14 = (longlong)local_314 * 0x10;
      puVar6 = *(undefined **)(param_1[0x39] + lVar14);
      pplVar7 = *(longlong ***)(param_1[0x39] + 8 + lVar14);
      if (pplVar7 == (longlong **)0x0) {
        if (puVar6 == (undefined *)0x0) goto LAB_14086bd43;
        pplStack_1c8 = (longlong **)0x0;
        local_1d0 = puVar6;
      }
      else {
        LOCK();
        *(int *)(pplVar7 + 1) = *(int *)(pplVar7 + 1) + 1;
        UNLOCK();
        if (puVar6 != (undefined *)0x0) {
          LOCK();
          *(int *)(pplVar7 + 1) = *(int *)(pplVar7 + 1) + 1;
          UNLOCK();
          local_1d0 = puVar6;
          pplStack_1c8 = pplVar7;
        }
        LOCK();
        pplVar2 = pplVar7 + 1;
        *(int *)pplVar2 = *(int *)pplVar2 + -1;
        UNLOCK();
        if (*(int *)pplVar2 == 0) {
          (*(code *)**pplVar7)(pplVar7);
          LOCK();
          piVar4 = (int *)((longlong)pplVar7 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (*(code *)(*pplVar7)[2])(pplVar7);
          }
        }
        if (puVar6 == (undefined *)0x0) goto LAB_14086bd43;
      }
    }
    cVar11 = FUN_1408025c4(local_1d0,local_2c8 & 0xffffffff);
    pplVar7 = pplStack_1c8;
    if (pplStack_1c8 != (longlong **)0x0) {
      LOCK();
      pplVar2 = pplStack_1c8 + 1;
      *(int *)pplVar2 = *(int *)pplVar2 + -1;
      UNLOCK();
      if (*(int *)pplVar2 == 0) {
        (*(code *)**pplVar7)(pplVar7);
        LOCK();
        piVar4 = (int *)((longlong)pplVar7 + 0xc);
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (*piVar4 == 0) {
          (*(code *)(*pplVar7)[2])(pplVar7);
        }
      }
    }
    iVar9 = local_314;
    if (cVar11 == '\0') {
      FUN_1401b43e8(plVar13,&local_288);
      local_340 = iVar9;
      local_348 = local_348 & 0xffffff00;
      (**(code **)(*plVar13 + 0x108))(plVar13,&local_1d0,CONCAT44(fStack_2fc,local_300),&local_288);
      FUN_1401b439d(local_288,(ulonglong)local_280 & 0xffffffff);
      if (local_288 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      FUN_14574fc6a(plVar13,&local_288,&local_1d0,&local_320);
      uVar16 = (ulonglong)CONCAT31(uVar8,local_288._0_1_);
      FUN_14493db24(&local_288);
      FUN_1447fa2ac(local_80,local_78);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar13 = local_88 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar4 = (int *)((longlong)local_88 + 0xc);
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (*piVar4 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
          }
        }
      }
      ppplVar15 = local_a8;
      if (local_a8 == (longlong ***)0x0) {
        ppplVar15 = &pplStack_1c8;
      }
      FUN_1447157bd(ppplVar15,local_a0);
      if (local_a8 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1411b470e(plVar13,uVar10,&local_320);
    }
  }
  plVar13 = local_2d0;
  local_320 = &PTR_FUN_149eda650;
  if (local_2d0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_2d0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_2d0)(local_2d0);
      LOCK();
      piVar4 = (int *)((longlong)plVar13 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_298 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_298 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_298)(local_298);
      LOCK();
      piVar4 = (int *)((longlong)local_298 + 0xc);
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (*piVar4 == 0) {
        (**(code **)(*local_298 + 0x10))(local_298);
      }
    }
  }
LAB_14086b990:
  if ((local_70 ^ (ulonglong)auStack_368) == DAT_14c707940) {
    return uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086bd9e FUN_14086bd9e body=371 status=ok
// SIG undefined FUN_14086bd9e(void)

undefined4 *
FUN_14086bd9e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14086bfec(param_1,local_48);
  *local_40 = *param_3;
  local_40[1] = param_3[1];
  local_40[2] = param_3[2];
  param_3[1] = 0;
  param_3[2] = 0;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14086bf12(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14113c126(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086bf12 FUN_14086bf12 body=218 status=ok
// SIG undefined FUN_14086bf12(void)

void FUN_14086bf12(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  uVar8 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar8 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(puVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          lVar6 = *param_3;
          uVar4 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar3 + 4) = param_3[2];
          *puVar3 = (int)lVar6;
          puVar3[1] = uVar4;
          puVar3[2] = (int)lVar7;
          puVar3[3] = uVar5;
          FUN_14086c0d2(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_14086bf81;
        }
        iVar10 = puVar3[6];
      } while (iVar10 != -1);
    }
    uVar8 = 0;
  }
LAB_14086bf81:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 14086bfec FUN_14086bfec body=229 status=ok
// SIG undefined FUN_14086bfec(void)

int * FUN_14086bfec(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 14086c0d2 FUN_14086c0d2 body=136 status=ok
// SIG undefined FUN_14086c0d2(void)

void FUN_14086c0d2(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14086c15a FUN_14086c15a body=985 status=ok
// SIG undefined FUN_14086c15a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14086c15a(longlong *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_158 [32];
  double *local_138;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((char)param_1[0x2f] == '\x01') {
    if ((param_1[0x93] == 0) || (*(char *)(param_1[0x93] + 0x1fb) != '\x02')) {
      lVar3 = param_1[0x39];
      if (lVar3 == 0) {
        local_b8 = DAT_14c8464f0;
        local_c8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_c8 = *(double *)(lVar3 + 0x260);
        uStack_c0 = *(double *)(lVar3 + 0x268);
        local_b8 = *(double *)(lVar3 + 0x270);
      }
      FUN_140496eb6(&local_e0,param_1 + 0x22,param_1);
      lVar3 = param_1[0x39];
      if (lVar3 == 0) {
        local_108 = 0;
        uStack_100 = 0;
        local_f8 = 0;
        uStack_f0 = 0x3ff0000000000000;
      }
      else {
        local_108 = *(undefined8 *)(lVar3 + 0x240);
        uStack_100 = *(undefined8 *)(lVar3 + 0x248);
        local_f8 = *(undefined8 *)(lVar3 + 0x250);
        uStack_f0 = *(undefined8 *)(lVar3 + 600);
      }
      *(byte *)(param_1[0x86] + 0x34a) = *(byte *)(param_1[0x86] + 0x34a) & 0xfd;
      bVar11 = 1;
      if ((((local_c8 == local_e0) && (!NAN(local_c8) && !NAN(local_e0))) && (uStack_c0 == local_d8)
          ) && (!NAN(uStack_c0) && !NAN(local_d8))) {
        bVar11 = -(local_d0 != local_b8) & 1;
      }
      bVar2 = *(byte *)(param_1[0x86] + 0x5b4);
      *(byte *)(param_1[0x86] + 0x5b4) = bVar2 & 0xdf | ((bVar2 & 0x20) >> 5 | bVar11) << 5;
      lVar3 = param_1[0x86];
      auVar1 = *(undefined1 (*) [16])(param_1 + 0x25);
      auVar12 = divpd(auVar1,_DAT_1499387d0);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = param_1[0x27];
      auVar13 = divpd(auVar13,_DAT_1499387d0);
      auVar12 = roundpd(auVar12,auVar12,3);
      auVar13 = roundpd(auVar13,auVar13,3);
      dVar9 = (auVar1._0_8_ - auVar12._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
      dVar10 = (auVar1._8_8_ - auVar12._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar7 = ((double)param_1[0x27] - auVar13._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
      ;
      dVar8 = (0.0 - auVar13._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
      dVar4 = sin(dVar9);
      dVar5 = sin(dVar10);
      dVar6 = sin(dVar7);
      sin(dVar8);
      dVar9 = cos(dVar9);
      dVar10 = cos(dVar10);
      dVar7 = cos(dVar7);
      cos(dVar8);
      dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
      local_128 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
      dStack_120 = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
      local_138 = &local_128;
      local_118._8_4_ = SUB84(dVar8,0);
      local_118._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
      local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      (**(code **)(*(longlong *)(lVar3 + 0x1e8) + 0x20))
                (lVar3 + 0x1e8,&local_c8,&local_108,&local_e0);
      (**(code **)(*param_1 + 0x8d0))(param_1,&local_c8,&local_108);
    }
    *(byte *)(param_1[0x86] + 0x5b4) = *(byte *)(param_1[0x86] + 0x5b4) | 0x40;
  }
  if ((local_b0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086c534 FUN_14086c534 body=791 status=ok
// SIG undefined FUN_14086c534(void)

void FUN_14086c534(longlong param_1,double *param_2)

{
  byte *pbVar1;
  float fVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  uint uVar15;
  double *pdVar16;
  byte bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  bVar3 = *(byte *)(param_1 + 0x551);
  *(byte *)(param_1 + 0x551) = bVar3 & 0xfe;
  lVar12 = *(longlong *)(param_1 + 0x1c8);
  if (lVar12 == 0) {
    pdVar16 = (double *)&DAT_14c8464e0;
    uVar18 = (undefined4)DAT_14c8464f0;
    uVar19 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar18 = (undefined4)*(undefined8 *)(lVar12 + 0x270);
    uVar19 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x270) >> 0x20);
    pdVar16 = (double *)(lVar12 + 0x260);
  }
  bVar17 = 1;
  if ((((*param_2 == *pdVar16) && (!NAN(*param_2) && !NAN(*pdVar16))) && (param_2[1] == pdVar16[1]))
     && (!NAN(param_2[1]) && !NAN(pdVar16[1]))) {
    bVar17 = -((double)CONCAT44(uVar19,uVar18) != param_2[2]) & 1;
  }
  if ((bVar3 & 2) == 0) goto LAB_14086c792;
  lVar12 = *(longlong *)(param_1 + 0x430);
  if (((*(double *)(lVar12 + 0x128) != 0.0) || (NAN(*(double *)(lVar12 + 0x128)))) ||
     ((*(double *)(lVar12 + 0x130) != 0.0 || (NAN(*(double *)(lVar12 + 0x130))))))
  goto LAB_14086c792;
  if ((*(double *)(lVar12 + 0x138) != 0.0) || (NAN(*(double *)(lVar12 + 0x138))))
  goto LAB_14086c792;
  if (bVar17 == 0) {
    fVar2 = *(float *)(param_1 + 0x180);
    lVar12 = FUN_1447210f0(param_1);
    if ((*(double *)(lVar12 + 0x6d0) != (double)fVar2) ||
       (NAN(*(double *)(lVar12 + 0x6d0)) || NAN((double)fVar2))) goto LAB_14086c792;
  }
  lVar12 = param_1;
  dVar13 = (double)FUN_1447210f0();
  uVar18 = (undefined4)lVar12;
  lVar12 = *(longlong *)(param_1 + 0x1c8);
  if (lVar12 == 0) {
    local_98 = DAT_14c846508;
    local_a8 = DAT_14c8464f8;
    dStack_a0 = DAT_14c846500;
LAB_14086c74f:
    local_b8 = DAT_14c8464f0;
    local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  }
  else {
    dVar6 = *(double *)(lVar12 + 0x240);
    dVar7 = *(double *)(lVar12 + 0x248);
    dVar8 = *(double *)(lVar12 + 0x250);
    dVar9 = *(double *)(lVar12 + 600);
    pdVar16 = *(double **)(lVar12 + 0x228);
    dVar14 = dVar13;
    local_88 = dVar6;
    uStack_80 = dVar7;
    local_78 = dVar8;
    dStack_70 = dVar9;
    if (pdVar16 == (double *)0x0) {
      uVar18 = 0x40;
      pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
      dVar14 = DAT_14c8463d8;
      *pdVar16 = DAT_14c8463d0;
      pdVar16[1] = dVar14;
      dVar14 = DAT_14c8463e8;
      pdVar16[2] = DAT_14c8463e0;
      pdVar16[3] = dVar14;
      dVar14 = DAT_14c846500;
      pdVar16[4] = DAT_14c8464f8;
      pdVar16[5] = dVar14;
      dVar14 = DAT_14c846508;
      pdVar16[6] = DAT_14c846508;
      *(double **)(lVar12 + 0x228) = pdVar16;
    }
    auVar4._8_4_ = (int)-(ulonglong)(dVar7 != pdVar16[1]);
    auVar4._0_8_ = -(ulonglong)(dVar6 != *pdVar16);
    auVar4._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar16[1]) >> 0x20);
    iVar11 = movmskpd(SUB84(dVar14,0),auVar4);
    auVar5._8_4_ = (int)-(ulonglong)(dVar9 != pdVar16[3]);
    auVar5._0_8_ = -(ulonglong)(dVar8 != pdVar16[2]);
    auVar5._12_4_ = (int)(-(ulonglong)(dVar9 != pdVar16[3]) >> 0x20);
    uVar15 = movmskpd(uVar18,auVar5);
    if ((uVar15 & 0x3fffffff) != 0 || iVar11 != 0) {
      pdVar16[2] = local_78;
      pdVar16[3] = dStack_70;
      *(undefined4 *)pdVar16 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar16 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar16 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar16 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar16[6] = local_58;
      pdVar16[4] = local_68;
      pdVar16[5] = dStack_60;
    }
    local_98 = pdVar16[6];
    local_a8 = pdVar16[4];
    dStack_a0 = pdVar16[5];
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    if (lVar12 == 0) goto LAB_14086c74f;
    local_c8 = *(undefined8 *)(lVar12 + 0x260);
    uStack_c0 = *(undefined8 *)(lVar12 + 0x268);
    local_b8 = *(undefined8 *)(lVar12 + 0x270);
  }
  local_d8 = 0;
  cVar10 = FUN_140c59c06(dVar13,param_1,&local_c8,&local_a8);
  if (cVar10 != '\0') {
    *(byte *)(param_1 + 0x551) = *(byte *)(param_1 + 0x551) | 1;
  }
LAB_14086c792:
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
  *(byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4) =
       bVar3 & 0xdf | (bVar17 | (bVar3 & 0x20) >> 5) << 5;
  pbVar1 = (byte *)(*(longlong *)(param_1 + 0x430) + 0x5b4);
  *pbVar1 = *pbVar1 | 0x40;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086c84c FUN_14086c84c body=92 status=ok
// SIG undefined FUN_14086c84c(void)

longlong FUN_14086c84c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_14086c98e(param_1 + -0x3c30);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14086c8a8();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_14086c8a8();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 == lVar4) {
        return 0;
      }
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 14086c8a8 FUN_14086c8a8 body=228 status=ok
// SIG undefined FUN_14086c8a8(void)

longlong FUN_14086c8a8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb61b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148c659f7;
    local_40 = FUN_1466011d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIVitalsInterface",&DAT_14cbb61b8,&DAT_148c659f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb61b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086c98e FUN_14086c98e body=105 status=ok
// SIG undefined FUN_14086c98e(void)

void FUN_14086c98e(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_14086ca44();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14086c9f8(param_1 + 0x9050,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086c9f8 FUN_14086c9f8 body=76 status=ok
// SIG undefined FUN_14086c9f8(void)

void FUN_14086c9f8(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_14086ca44();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_14086ca35;
    }
  }
  lVar2 = 0;
LAB_14086ca35:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 14086ca44 FUN_14086ca44 body=228 status=ok
// SIG undefined FUN_14086ca44(void)

longlong FUN_14086ca44(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbb2070 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c56e4;
    local_28 = &LAB_1458f3280;
    local_38 = &LAB_148c5875f;
    local_40 = FUN_1418d0bc7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a8;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_CharacterVitals",&DAT_14cbb2070,
                  FUN_1465f4b0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb2070;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086cb2a FUN_14086cb2a body=8 status=ok
// SIG undefined FUN_14086cb2a(void)

void FUN_14086cb2a(undefined8 *param_1)

{
  FUN_14086cb32(*param_1);
  return;
}



// FUNCTION 14086cb32 FUN_14086cb32 body=428 status=ok
// SIG undefined FUN_14086cb32(void)

uint FUN_14086cb32(longlong param_1)

{
  uint uVar1;
  uint *puVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  
  puVar10 = (uint *)(param_1 + 0x40);
  puVar2 = *(uint **)(param_1 + 0x50);
  puVar8 = puVar2;
  if (puVar2 == (uint *)0x0) {
    puVar8 = puVar10;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  uVar9 = uVar1 + 0x1f;
  if (0x1f < uVar9) {
    lVar11 = 0;
    puVar12 = puVar8;
    do {
      if (*puVar12 != 0xffffffff) {
        uVar13 = ~*puVar12;
        iVar7 = 0;
        if (uVar13 != 0) {
          for (; (uVar13 >> iVar7 & 1) == 0; iVar7 = iVar7 + 1) {
          }
        }
        uVar13 = iVar7 - (int)lVar11;
        if ((int)uVar13 < (int)uVar1 && iVar7 + 1 != (int)lVar11) {
          uVar9 = uVar13 + 0x1f;
          if (-1 < (int)uVar13) {
            uVar9 = uVar13;
          }
          puVar8[(int)uVar9 >> 5] = puVar8[(int)uVar9 >> 5] | 1 << ((byte)iVar7 & 0x1f);
          return uVar13;
        }
        break;
      }
      lVar11 = lVar11 + -0x20;
      puVar12 = puVar12 + 1;
    } while ((ulonglong)(uVar9 & 0xffffffe0) + lVar11 != 0);
  }
  if (uVar1 == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = uVar1 + 0x1e;
    if (-1 < (int)(uVar1 - 1)) {
      iVar7 = uVar1 - 1;
    }
    iVar7 = iVar7 >> 5;
  }
  iVar6 = uVar1 + 1;
  if (-1 < (int)uVar1) {
    uVar9 = uVar1;
  }
  if ((int)uVar9 >> 5 == iVar7) {
    *(int *)(param_1 + 0x58) = iVar6;
  }
  else {
    if (*(int *)(param_1 + 0x5c) <= (int)uVar1) {
      if (uVar1 + 0x20 < 0xa0) {
        iVar7 = 0x80;
        uVar13 = uVar1;
      }
      else {
        uVar13 = uVar1 + 0x20 >> 5;
        if (*(int *)(param_1 + 0x5c) + 0x1fU < 0xa0) {
          uVar5 = 4;
          if (4 < uVar13) {
            uVar5 = uVar13;
          }
        }
        else {
          uVar5 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
        }
        uVar3 = FUN_144a3809e(uVar5 << 2,0);
        iVar6 = (int)(uVar3 >> 2);
        iVar7 = -0x20;
        if ((int)uVar13 <= iVar6) {
          iVar7 = iVar6 << 5;
        }
        uVar13 = *(uint *)(param_1 + 0x58);
      }
      *(int *)(param_1 + 0x5c) = iVar7;
      FUN_1446efbd8(puVar10,uVar13);
      iVar6 = *(int *)(param_1 + 0x58) + 1;
      puVar2 = *(uint **)(param_1 + 0x50);
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0x58) = iVar6;
    if (iVar6 % 0x20 != 0) {
      if (puVar2 == (uint *)0x0) {
        puVar2 = puVar10;
      }
      bVar4 = -(char)(iVar6 % 0x20);
      puVar2[iVar7 >> 5] = (puVar2[iVar7 >> 5] << (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      puVar2 = *(uint **)(param_1 + 0x50);
    }
  }
  if (puVar2 != (uint *)0x0) {
    puVar10 = puVar2;
  }
  puVar10[(int)uVar9 >> 5] = puVar10[(int)uVar9 >> 5] | 1 << ((byte)uVar1 & 0x1f);
  return uVar1;
}



// FUNCTION 14086cce4 FUN_14086cce4 body=57 status=ok
// SIG undefined FUN_14086cce4(void)

void FUN_14086cce4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac40 = FUN_140002ddd(FUN_1464cc95b,uVar1,L"GbxBrainAspect_IsFacing");
  }
  return;
}



// FUNCTION 14086cd1e FUN_14086cd1e body=6392 status=ok
// SIG undefined FUN_14086cd1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_14086cd1e(longlong *param_1,uint param_2,double *param_3,char param_4,char param_5,
             undefined1 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined8 uVar18;
  byte bVar19;
  double *pdVar20;
  longlong lVar21;
  longlong *plVar22;
  uint uVar23;
  double *pdVar24;
  double *pdVar25;
  ulonglong uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar44;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar47;
  undefined1 auVar43 [16];
  double dVar53;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar54;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  undefined1 auStack_468 [32];
  undefined1 local_448 [16];
  undefined1 local_438 [16];
  double local_428;
  double dStack_420;
  undefined1 **local_418;
  undefined4 local_410;
  double local_408 [4];
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  undefined1 local_358 [16];
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 *local_328;
  double dStack_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  double local_2f8;
  double dStack_2f0;
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  double local_2c8 [2];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  double local_268 [2];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  double local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_468;
  if (((int)param_2 < 0) || ((int)param_1[0xe5] <= (int)param_2)) {
    uVar18 = 0;
    goto LAB_14086d09b;
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  pdVar25 = (double *)((ulonglong)param_2 * 0x80 + param_1[0xe4]);
  FUN_1448ac920(&local_3a8);
  if (param_4 == '\0') {
    pdVar20 = param_3;
    pdVar24 = local_408;
    for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
      *pdVar24 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar24 = pdVar24 + 1;
    }
    iVar17 = 0;
  }
  else {
    pdVar20 = param_3;
    FUN_1449437a2(param_3,local_408,param_1 + 0x48);
    iVar17 = (int)pdVar20;
  }
  auVar63 = _DAT_149934d80;
  dVar44 = local_408[1] + local_408[1];
  dVar33 = local_408[2] + local_408[2];
  dVar1 = local_408[0] * (local_408[0] + local_408[0]);
  dVar36 = (double)DAT_149934d80;
  dVar47 = DAT_149934d80._8_8_;
  dVar34 = (local_408[0] + local_408[0]) * local_408[3];
  *pdVar25 = (dVar36 - (local_408[2] * dVar33 + local_408[1] * dVar44)) * local_3c8;
  pdVar25[1] = (dVar44 * local_408[0] + dVar33 * local_408[3]) * local_3c8;
  pdVar25[2] = (local_408[0] * dVar33 - dVar44 * local_408[3]) * local_3c8;
  pdVar25[3] = 0.0;
  pdVar25[4] = (dVar44 * local_408[0] - dVar33 * local_408[3]) * dStack_3c0;
  pdVar25[5] = (dVar47 - (local_408[2] * dVar33 + dVar1)) * dStack_3c0;
  pdVar25[6] = (dVar33 * local_408[1] + dVar34) * dStack_3c0;
  pdVar25[7] = 0.0;
  pdVar25[8] = (dVar44 * local_408[3] + local_408[0] * dVar33) * local_3b8;
  pdVar25[9] = (dVar33 * local_408[1] - dVar34) * local_3b8;
  pdVar25[10] = (1.0 - (dVar1 + local_408[1] * dVar44)) * local_3b8;
  pdVar25[0xb] = 0.0;
  pdVar25[0xc] = local_3e8;
  pdVar25[0xd] = dStack_3e0;
  pdVar25[0xe] = local_3d8;
  pdVar25[0xf] = 1.0;
  bVar19 = *(byte *)((longlong)param_1 + 0x95d);
  uVar14 = (uint)bVar19;
  if (bVar19 == 1) {
    uVar14 = *(uint *)(param_1 + 0x119);
    if (uVar14 == 0) {
      uVar14 = *(uint *)(param_1 + 0x11c);
    }
    if ((int)uVar14 <= (int)param_2) {
      uVar14 = param_2;
    }
    uVar23 = uVar14 + 7 >> 3;
    if ((int)param_1[0x11e] < (int)uVar23) {
      FUN_1402d2c96(param_1 + 0x11d,uVar23,1);
    }
    *(uint *)(param_1 + 0x123) = uVar14;
    uVar14 = *(uint *)(param_1 + 0x124);
    if ((int)param_2 <= (int)*(uint *)(param_1 + 0x124)) {
      uVar14 = param_2;
    }
    *(uint *)(param_1 + 0x124) = uVar14;
    uVar14 = *(uint *)((longlong)param_1 + 0x924);
    if ((int)*(uint *)((longlong)param_1 + 0x924) < (int)param_2) {
      uVar14 = param_2;
    }
    *(uint *)((longlong)param_1 + 0x924) = uVar14;
    bVar19 = (char)param_2 * '\x04' & 0x1c;
    uVar14 = *(uint *)(param_1[0x11d] + (ulonglong)(param_2 >> 3) * 4);
    if ((uVar14 >> bVar19 & 3) == 0) {
      *(int *)((longlong)param_1 + 0x92c) = *(int *)((longlong)param_1 + 0x92c) + 1;
    }
    *(uint *)(param_1[0x11d] + (ulonglong)(param_2 >> 3) * 4) = uVar14 | 2 << bVar19;
LAB_14086d01c:
    iVar17 = (int)param_1 + 0x8c0;
    uVar14 = FUN_1402d2c26();
  }
  else if (bVar19 != 2) {
    *(byte *)((longlong)param_1 + 0x95e) = *(byte *)((longlong)param_1 + 0x95e) | 0x10;
    goto LAB_14086d01c;
  }
  if ((*(byte *)((longlong)param_1 + 0x9c) & 8) != 0) {
    if (param_4 == '\0') {
      local_238 = 0.0;
      dStack_230 = 0.0;
      local_248 = ZEXT816(0);
      local_448 = *(undefined1 (*) [16])(param_1 + 0x50);
      auVar41 = *(undefined1 (*) [16])(param_1 + 0x52);
      dVar1 = auVar41._0_8_;
      dVar33 = auVar41._8_8_;
      auVar32._8_8_ = dStack_3c0;
      auVar32._0_8_ = local_3c8;
      local_438._8_8_ = dStack_3b0;
      local_438._0_8_ = local_3b8;
      auVar32 = minpd(auVar32,local_448);
      auVar38 = minpd(local_438,auVar41);
      auVar41._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
      iVar15 = movmskpd(uVar14,auVar41);
      auVar49._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar49._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      uVar14 = movmskpd(iVar17,auVar49);
      if ((uVar14 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar60 = (double)param_1[0x48];
        dVar62 = (double)param_1[0x49];
        local_428 = (double)param_1[0x4a];
        dStack_420 = (double)param_1[0x4b];
        dVar44 = (double)param_1[0x4b];
        dVar34 = (double)param_1[0x4b];
        dVar46 = (double)param_1[0x48];
        dVar53 = (double)param_1[0x48];
        dVar55 = (double)param_1[0x49];
        dVar35 = (double)param_1[0x49];
        dVar54 = (double)param_1[0x4a];
        dVar58 = (double)param_1[0x4a];
        local_268[0] = local_408[1] * dVar54 * -1.0 +
                       local_408[2] * dVar55 + local_408[3] * dVar46 * 1.0 + local_408[0] * dVar44;
        local_268[1] = local_408[0] * dVar58 * 1.0 +
                       local_408[3] * dVar35 + local_408[2] * dVar53 * -1.0 + local_408[1] * dVar34;
        local_3e8 = local_3e8 * (double)local_448._0_8_;
        dStack_3e0 = dStack_3e0 * (double)local_448._8_8_;
        local_3d8 = local_3d8 * dVar1;
        dStack_3d0 = dStack_3d0 * dVar33;
        dVar45 = dStack_3e0 * dVar60 - dVar62 * local_3e8;
        dVar56 = local_3d8 * dVar62 - local_428 * dStack_3e0;
        dVar57 = local_3e8 * local_428 - dVar60 * local_3d8;
        dVar59 = dStack_3d0 * dStack_420 - dStack_420 * dStack_3d0;
        dVar56 = dVar56 + dVar56;
        dVar57 = dVar57 + dVar57;
        dVar45 = dVar45 + dVar45;
        dVar59 = dVar59 + dVar59;
        dVar61 = (dVar56 * local_428 - dVar45 * dVar60) + dVar34 * dVar57 + dStack_3e0 +
                 (double)param_1[0x4d];
        local_238 = (dVar57 * dVar60 - dVar62 * dVar56) + dVar44 * dVar45 + local_3d8 +
                    (double)param_1[0x4e];
        dStack_230 = (dVar59 * dStack_420 - dVar59 * dStack_420) + dVar34 * dVar59 + dStack_3d0 +
                     (double)param_1[0x4f];
        local_258._8_8_ =
             local_408[2] * dVar58 * -1.0 +
             ((dVar53 * local_408[0] * -1.0 + local_408[3] * dVar34) - local_408[1] * dVar35);
        local_258._0_8_ =
             local_408[3] * dVar54 * 1.0 +
             ((dVar46 * local_408[1] * 1.0 + local_408[2] * dVar44) - local_408[0] * dVar55);
        local_248._8_4_ = SUB84(dVar61,0);
        local_248._0_8_ =
             (dVar45 * dVar62 - local_428 * dVar57) + dVar44 * dVar56 + local_3e8 +
             (double)param_1[0x4c];
        local_248._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
        local_228._8_8_ = dStack_3c0 * (double)local_448._8_8_;
        local_228._0_8_ = local_3c8 * (double)local_448._0_8_;
        local_218._8_8_ = dStack_3b0 * dVar33;
        local_218._0_8_ = local_3b8 * dVar1;
      }
      else {
        dVar53 = (double)param_1[0x48];
        dVar55 = (double)param_1[0x49];
        dVar35 = (double)param_1[0x4a];
        dVar54 = dVar55 + dVar55;
        dVar58 = dVar35 + dVar35;
        dVar44 = dVar53 * (dVar53 + dVar53);
        local_118 = (1.0 - (dVar44 + dVar55 * dVar54)) * dVar1;
        dVar34 = (double)param_1[0x4b];
        dVar45 = dVar58 * dVar34;
        dVar56 = (dVar53 + dVar53) * (double)param_1[0x4b];
        dVar34 = dVar54 * dVar34;
        local_128 = (dVar34 + (double)param_1[0x48] * dVar58) * dVar1;
        dVar44 = (dVar47 - (dVar35 * dVar58 + dVar44)) * (double)local_448._8_8_;
        dVar46 = (dVar54 * dVar53 + dVar45) * (double)local_448._0_8_;
        local_138 = (dVar58 * dVar55 + dVar56) * (double)local_448._8_8_;
        dStack_120 = (dVar58 * dVar55 - dVar56) * dVar1;
        local_158 = ((double)param_1[0x48] * dVar58 - dVar34) * (double)local_448._0_8_;
        local_168._8_4_ = SUB84(dVar46,0);
        local_168._0_8_ = (dVar36 - (dVar35 * dVar58 + dVar55 * dVar54)) * (double)local_448._0_8_;
        local_168._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        uStack_150 = 0;
        local_148._8_4_ = SUB84(dVar44,0);
        local_148._0_8_ = (dVar54 * dVar53 - dVar45) * (double)local_448._8_8_;
        local_148._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        uStack_130 = 0;
        uStack_110 = 0;
        local_108 = (double)param_1[0x4c];
        dStack_100 = (double)param_1[0x4d];
        local_f8 = (double)param_1[0x4e];
        uStack_f0 = 0x3ff0000000000000;
        dVar53 = local_408[1] + local_408[1];
        dVar55 = local_408[2] + local_408[2];
        dVar46 = local_408[0] * (local_408[0] + local_408[0]);
        local_198 = (1.0 - (dVar46 + local_408[1] * dVar53)) * local_3b8;
        dVar35 = (local_408[0] + local_408[0]) * local_408[3];
        local_1a8 = (dVar53 * local_408[3] + local_408[0] * dVar55) * local_3b8;
        dStack_1a0 = (dVar55 * local_408[1] - dVar35) * local_3b8;
        dVar34 = (double)local_448._0_8_ * local_3c8;
        dVar44 = (double)local_448._8_8_ * dStack_3c0;
        dVar46 = (dVar47 - (local_408[2] * dVar55 + dVar46)) * dStack_3c0;
        local_1b8 = (dVar55 * local_408[1] + dVar35) * dStack_3c0;
        local_1d8 = (local_408[0] * dVar55 - dVar53 * local_408[3]) * local_3c8;
        local_1e8._8_8_ = (dVar53 * local_408[0] + dVar55 * local_408[3]) * local_3c8;
        local_1e8._0_8_ = (dVar36 - (local_408[2] * dVar55 + local_408[1] * dVar53)) * local_3c8;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar46,0);
        local_1c8._0_8_ = (dVar53 * local_408[0] - dVar55 * local_408[3]) * dStack_3c0;
        local_1c8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = local_3e8;
        dStack_180 = dStack_3e0;
        local_178 = local_3d8;
        uStack_170 = 0x3ff0000000000000;
        FUN_1447fea8d(&local_328);
        FUN_144a1c686(&local_328,0x3e45798ee0000000);
        auVar38._8_8_ = -(ulonglong)(0.0 <= dVar44);
        auVar38._0_8_ = -(ulonglong)(0.0 <= dVar34);
        auVar41 = blendvpd(_DAT_149936790,auVar63,auVar38);
        uVar26 = -(ulonglong)(0.0 <= dVar1 * local_3b8);
        dVar46 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
        dVar53 = auVar41._0_8_;
        dStack_320 = dStack_320 * dVar53;
        local_328 = (undefined1 *)((double)local_328 * dVar53);
        local_318._0_8_ = (double)local_318._0_8_ * dVar53;
        dVar53 = auVar41._8_8_;
        local_2f8 = local_2f8 * dVar53;
        local_308._8_8_ = (double)local_308._8_8_ * dVar53;
        local_308._0_8_ = dVar53 * (double)local_308._0_8_;
        local_2e8._8_8_ = (double)local_2e8._8_8_ * dVar46;
        local_2e8._0_8_ = dVar46 * (double)local_2e8._0_8_;
        local_2d8._0_8_ = (double)local_2d8._0_8_ * dVar46;
        FUN_14481fd10(&local_348,&local_328);
        dVar46 = local_338 * local_338 + local_348 * local_348;
        dVar53 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
        auVar37._0_8_ = dVar46 + dVar53;
        auVar37._8_8_ = dVar46 + dVar53;
        auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
        auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
        auVar41 = sqrtpd(auVar37,auVar37);
        auVar41 = divpd(auVar63,auVar41);
        auVar48._0_8_ = auVar41._0_8_ * local_338;
        auVar48._8_8_ = auVar41._8_8_ * dStack_330;
        local_268[0] = (double)((ulonglong)(local_348 * auVar41._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_));
        local_268[1] = (double)((ulonglong)(dStack_340 * auVar41._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_));
        local_258 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar27);
        local_228._8_4_ = SUB84(dVar44,0);
        local_228._0_8_ = dVar34;
        local_228._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        local_218._8_4_ = SUB84(dVar33 * dStack_3b0,0);
        local_218._0_8_ = dVar1 * local_3b8;
        local_218._12_4_ = (int)((ulonglong)(dVar33 * dStack_3b0) >> 0x20);
        local_238 = (double)local_2b8._0_8_;
        local_248._8_8_ = local_2c8[1];
        local_248._0_8_ = local_2c8[0];
        dStack_230 = 0.0;
      }
    }
    else {
      pdVar20 = param_3;
      pdVar24 = local_268;
      for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
        *pdVar24 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar24 = pdVar24 + 1;
      }
    }
    FUN_14086e618(param_1,(ulonglong)param_2,local_268,
                  CONCAT71((int7)((ulonglong)pdVar25 >> 8),param_6) & 0xffffffff);
  }
  if (((*(byte *)((longlong)param_1 + 0x9e) & 0x40) != 0) &&
     ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) {
    plVar22 = param_1;
    uVar16 = (**(code **)(*param_1 + 0xbd0))();
    if ((char)uVar16 == '\0') {
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
    else {
      local_2f8 = 0.0;
      dStack_2f0 = 0.0;
      local_308 = ZEXT816(0);
      local_448 = *(undefined1 (*) [16])(param_1 + 0x50);
      auVar41 = *(undefined1 (*) [16])(param_1 + 0x52);
      dVar1 = auVar41._0_8_;
      dVar33 = local_368._0_8_;
      dVar34 = local_368._8_8_;
      auVar38 = minpd(local_368,local_448);
      local_438 = local_358;
      auVar32 = local_438;
      auVar49 = minpd(local_358,auVar41);
      auVar39._8_8_ = -(ulonglong)(auVar38._8_8_ < 0.0);
      auVar39._0_8_ = -(ulonglong)(auVar38._0_8_ < 0.0);
      iVar17 = movmskpd(uVar16,auVar39);
      auVar50._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar50._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      uVar14 = movmskpd((int)plVar22,auVar50);
      uVar18 = local_448._0_8_;
      uVar11 = local_448._8_8_;
      local_438._0_8_ = local_358._0_8_;
      uVar12 = local_438._0_8_;
      local_438._8_8_ = local_358._8_8_;
      uVar13 = local_438._8_8_;
      local_438 = auVar32;
      if ((uVar14 & 0x3fffffff) == 0 && iVar17 == 0) {
        dVar62 = (double)param_1[0x48];
        dVar67 = (double)param_1[0x49];
        local_428 = (double)param_1[0x4a];
        dStack_420 = (double)param_1[0x4b];
        dVar46 = (double)param_1[0x4b];
        dVar44 = (double)param_1[0x4b];
        dVar55 = (double)param_1[0x48];
        dVar53 = (double)param_1[0x48];
        dVar54 = (double)param_1[0x49];
        dVar35 = (double)param_1[0x49];
        dVar45 = (double)param_1[0x4a];
        dVar58 = (double)param_1[0x4a];
        local_328 = (undefined1 *)
                    (dStack_3a0 * dVar45 * -1.0 +
                    local_398 * dVar54 + dStack_390 * dVar55 * 1.0 + local_3a8 * dVar46);
        dStack_320 = local_3a8 * dVar58 * 1.0 +
                     dStack_390 * dVar35 + local_398 * dVar53 * -1.0 + dStack_3a0 * dVar44;
        local_388 = local_388 * (double)local_448._0_8_;
        dStack_380 = dStack_380 * (double)local_448._8_8_;
        local_378 = local_378 * dVar1;
        dStack_370 = dStack_370 * auVar41._8_8_;
        dVar56 = dStack_380 * dVar62 - dVar67 * local_388;
        dVar57 = local_378 * dVar67 - local_428 * dStack_380;
        dVar61 = local_388 * local_428 - dVar62 * local_378;
        dVar60 = dStack_370 * dStack_420 - dStack_420 * dStack_370;
        dVar57 = dVar57 + dVar57;
        dVar61 = dVar61 + dVar61;
        dVar56 = dVar56 + dVar56;
        dVar60 = dVar60 + dVar60;
        dVar59 = (dVar57 * local_428 - dVar56 * dVar62) + dVar44 * dVar61 + dStack_380 +
                 (double)param_1[0x4d];
        local_2f8 = (dVar61 * dVar62 - dVar67 * dVar57) + dVar46 * dVar56 + local_378 +
                    (double)param_1[0x4e];
        dStack_2f0 = (dVar60 * dStack_420 - dVar60 * dStack_420) + dVar44 * dVar60 + dStack_370 +
                     (double)param_1[0x4f];
        local_318._8_8_ =
             local_398 * dVar58 * -1.0 +
             ((dVar53 * local_3a8 * -1.0 + dStack_390 * dVar44) - dStack_3a0 * dVar35);
        local_318._0_8_ =
             dStack_390 * dVar45 * 1.0 +
             ((dVar55 * dStack_3a0 * 1.0 + local_398 * dVar46) - local_3a8 * dVar54);
        local_308._8_4_ = SUB84(dVar59,0);
        local_308._0_8_ =
             (dVar56 * dVar67 - local_428 * dVar61) + dVar46 * dVar57 + local_388 +
             (double)param_1[0x4c];
        local_308._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
        uVar16 = 0;
      }
      else {
        dVar35 = (double)param_1[0x48];
        dVar54 = (double)param_1[0x49];
        dVar58 = (double)param_1[0x4a];
        dVar45 = dVar54 + dVar54;
        dVar56 = dVar58 + dVar58;
        dVar53 = dVar35 * (dVar35 + dVar35);
        local_198 = (1.0 - (dVar53 + dVar54 * dVar45)) * dVar1;
        dVar44 = (double)param_1[0x4b];
        dVar57 = dVar56 * dVar44;
        dVar61 = (dVar35 + dVar35) * (double)param_1[0x4b];
        dVar44 = dVar45 * dVar44;
        local_1a8 = (dVar44 + (double)param_1[0x48] * dVar56) * dVar1;
        dVar46 = dVar1 * (double)local_438._0_8_;
        dVar53 = (dVar47 - (dVar58 * dVar56 + dVar53)) * (double)local_448._8_8_;
        dVar55 = (dVar45 * dVar35 + dVar57) * (double)local_448._0_8_;
        local_1b8 = (dVar56 * dVar54 + dVar61) * (double)local_448._8_8_;
        dStack_1a0 = (dVar56 * dVar54 - dVar61) * dVar1;
        local_1d8 = ((double)param_1[0x48] * dVar56 - dVar44) * (double)local_448._0_8_;
        local_1e8._8_4_ = SUB84(dVar55,0);
        local_1e8._0_8_ = (dVar36 - (dVar58 * dVar56 + dVar54 * dVar45)) * (double)local_448._0_8_;
        local_1e8._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar53,0);
        local_1c8._0_8_ = (dVar45 * dVar35 - dVar57) * (double)local_448._8_8_;
        local_1c8._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
        uStack_1b0 = 0;
        uStack_190 = 0;
        local_188 = (double)param_1[0x4c];
        dStack_180 = (double)param_1[0x4d];
        local_178 = (double)param_1[0x4e];
        uStack_170 = 0x3ff0000000000000;
        dVar54 = dStack_3a0 + dStack_3a0;
        dVar58 = local_398 + local_398;
        dVar35 = local_3a8 * (local_3a8 + local_3a8);
        dVar45 = (local_3a8 + local_3a8) * dStack_390;
        dVar44 = (double)local_448._0_8_ * dVar33;
        dVar53 = (double)local_448._8_8_ * dVar34;
        local_268[0] = (dVar36 - (local_398 * dVar58 + dStack_3a0 * dVar54)) * dVar33;
        dVar55 = (dVar47 - (local_398 * dVar58 + dVar35)) * dVar34;
        local_268[1] = (dVar54 * local_3a8 + dVar58 * dStack_390) * dVar33;
        local_238 = (dVar58 * dStack_3a0 + dVar45) * dVar34;
        local_258._8_8_ = 0;
        local_258._0_8_ = (local_3a8 * dVar58 - dVar54 * dStack_390) * dVar33;
        local_248._8_4_ = SUB84(dVar55,0);
        local_248._0_8_ = (dVar54 * local_3a8 - dVar58 * dStack_390) * dVar34;
        local_248._12_4_ = (int)((ulonglong)dVar55 >> 0x20);
        dStack_230 = 0.0;
        local_228._8_8_ = (dVar58 * dStack_3a0 - dVar45) * (double)local_438._0_8_;
        local_228._0_8_ = (dVar54 * dStack_390 + local_3a8 * dVar58) * (double)local_438._0_8_;
        local_218._8_8_ = 0;
        local_218._0_8_ = (1.0 - (dVar35 + dStack_3a0 * dVar54)) * (double)local_438._0_8_;
        local_208 = local_388;
        dStack_200 = dStack_380;
        local_1f8 = local_378;
        uStack_1f0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_168);
        FUN_144a1c686(local_168,0x3e45798ee0000000);
        auVar28._8_8_ = -(ulonglong)(0.0 <= dVar53);
        auVar28._0_8_ = -(ulonglong)(0.0 <= dVar44);
        auVar32 = blendvpd(_DAT_149936790,auVar63,auVar28);
        uVar26 = -(ulonglong)(0.0 <= dVar46);
        dVar44 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
        dVar46 = auVar32._0_8_;
        local_158 = local_158 * dVar46;
        local_168._8_8_ = (double)local_168._8_8_ * dVar46;
        local_168._0_8_ = (double)local_168._0_8_ * dVar46;
        dVar46 = auVar32._8_8_;
        local_138 = local_138 * dVar46;
        local_148._8_8_ = (double)local_148._8_8_ * dVar46;
        local_148._0_8_ = dVar46 * (double)local_148._0_8_;
        local_118 = local_118 * dVar44;
        dStack_120 = dStack_120 * dVar44;
        local_128 = dVar44 * local_128;
        pdVar25 = &local_348;
        iVar17 = FUN_14481fd10(pdVar25,local_168);
        uVar16 = SUB84(pdVar25,0);
        dVar44 = local_338 * local_338 + local_348 * local_348;
        dVar46 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
        auVar40._0_8_ = dVar44 + dVar46;
        auVar40._8_8_ = dVar44 + dVar46;
        auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_);
        auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_);
        auVar32 = sqrtpd(auVar40,auVar40);
        auVar32 = divpd(auVar63,auVar32);
        auVar51._0_8_ = auVar32._0_8_ * local_338;
        auVar51._8_8_ = auVar32._8_8_ * dStack_330;
        local_328 = (undefined1 *)
                    ((ulonglong)(local_348 * auVar32._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar40._0_8_));
        dStack_320 = (double)((ulonglong)(dStack_340 * auVar32._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar40._8_8_));
        local_318 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar29);
        local_308._8_8_ = dStack_100;
        local_308._0_8_ = local_108;
        local_2f8 = local_f8;
        dStack_2f0 = 0.0;
      }
      dVar44 = auVar41._8_8_ * (double)uVar13;
      local_2e8._8_4_ = SUB84((double)uVar11 * dVar34,0);
      local_2e8._0_8_ = (double)uVar18 * dVar33;
      local_2e8._12_4_ = (int)((ulonglong)((double)uVar11 * dVar34) >> 0x20);
      local_2d8._8_4_ = SUB84(dVar44,0);
      local_2d8._0_8_ = dVar1 * (double)uVar12;
      local_2d8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      if (param_4 == '\0') {
        local_298 = 0.0;
        dStack_290 = 0.0;
        local_2a8 = 0.0;
        dStack_2a0 = 0.0;
        auVar41 = *(undefined1 (*) [16])(param_1 + 0x50);
        dVar1 = auVar41._0_8_;
        dVar46 = auVar41._8_8_;
        auVar32 = *(undefined1 (*) [16])(param_1 + 0x52);
        dVar33 = auVar32._0_8_;
        dVar53 = auVar32._8_8_;
        auVar38 = *(undefined1 (*) [16])(param_3 + 8);
        dVar34 = auVar38._0_8_;
        dVar55 = auVar38._8_8_;
        auVar49 = *(undefined1 (*) [16])(param_3 + 10);
        dVar44 = auVar49._0_8_;
        auVar41 = minpd(auVar38,auVar41);
        auVar32 = minpd(auVar49,auVar32);
        auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
        auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
        iVar17 = movmskpd(iVar17,auVar42);
        auVar52._8_8_ = -(ulonglong)(auVar32._8_8_ < 0.0);
        auVar52._0_8_ = -(ulonglong)(auVar32._0_8_ < 0.0);
        uVar14 = movmskpd(uVar16,auVar52);
        if ((uVar14 & 0x3fffffff) == 0 && iVar17 == 0) {
          dVar3 = *param_3;
          dVar4 = param_3[1];
          dVar5 = param_3[2];
          dVar6 = param_3[3];
          dVar7 = (double)param_1[0x48];
          dVar8 = (double)param_1[0x49];
          dVar9 = (double)param_1[0x4a];
          dVar10 = (double)param_1[0x4b];
          dVar47 = (double)param_1[0x4b];
          dVar36 = (double)param_1[0x4b];
          dVar35 = (double)param_1[0x48];
          dVar54 = (double)param_1[0x48];
          dVar45 = (double)param_1[0x49];
          dVar58 = (double)param_1[0x49];
          dVar57 = (double)param_1[0x4a];
          dVar56 = (double)param_1[0x4a];
          local_2c8[0] = dVar4 * dVar57 * -1.0 +
                         dVar5 * dVar45 + dVar6 * dVar35 * 1.0 + dVar3 * dVar47;
          local_2c8[1] = dVar3 * dVar56 * 1.0 +
                         dVar6 * dVar58 + dVar5 * dVar54 * -1.0 + dVar4 * dVar36;
          dVar61 = param_3[4] * dVar1;
          dVar59 = param_3[5] * dVar46;
          dVar60 = param_3[6] * dVar33;
          dVar62 = param_3[7] * dVar53;
          dVar65 = dVar59 * dVar7 - dVar8 * dVar61;
          dVar66 = dVar60 * dVar8 - dVar9 * dVar59;
          dVar67 = dVar61 * dVar9 - dVar7 * dVar60;
          dVar2 = dVar62 * dVar10 - dVar10 * dVar62;
          dVar66 = dVar66 + dVar66;
          dVar67 = dVar67 + dVar67;
          dVar65 = dVar65 + dVar65;
          dVar2 = dVar2 + dVar2;
          local_2a8 = (dVar65 * dVar8 - dVar9 * dVar67) + dVar47 * dVar66 + dVar61 +
                      (double)param_1[0x4c];
          dStack_2a0 = (dVar66 * dVar9 - dVar65 * dVar7) + dVar36 * dVar67 + dVar59 +
                       (double)param_1[0x4d];
          local_298 = (dVar67 * dVar7 - dVar8 * dVar66) + dVar47 * dVar65 + dVar60 +
                      (double)param_1[0x4e];
          dStack_290 = (dVar2 * dVar10 - dVar2 * dVar10) + dVar36 * dVar2 + dVar62 +
                       (double)param_1[0x4f];
          local_2b8._8_8_ =
               dVar5 * dVar56 * -1.0 + ((dVar54 * dVar3 * -1.0 + dVar6 * dVar36) - dVar4 * dVar58);
          local_2b8._0_8_ =
               dVar6 * dVar57 * 1.0 + ((dVar35 * dVar4 * 1.0 + dVar5 * dVar47) - dVar3 * dVar45);
          local_288._8_8_ = dVar55 * dVar46;
          local_288._0_8_ = dVar34 * dVar1;
          local_278._8_8_ = auVar49._8_8_ * dVar53;
          local_278._0_8_ = dVar44 * dVar33;
        }
        else {
          dVar45 = (double)param_1[0x48];
          dVar56 = (double)param_1[0x49];
          dVar57 = (double)param_1[0x4a];
          dVar61 = dVar56 + dVar56;
          dVar59 = dVar57 + dVar57;
          dVar54 = dVar45 * (dVar45 + dVar45);
          local_198 = (1.0 - (dVar54 + dVar56 * dVar61)) * dVar33;
          dVar35 = (double)param_1[0x4b];
          dVar60 = dVar59 * dVar35;
          dVar62 = (dVar45 + dVar45) * (double)param_1[0x4b];
          dVar35 = dVar61 * dVar35;
          local_1a8 = (dVar35 + (double)param_1[0x48] * dVar59) * dVar33;
          dVar53 = dVar53 * auVar49._8_8_;
          dVar54 = (dVar47 - (dVar57 * dVar59 + dVar54)) * dVar46;
          dVar58 = (dVar61 * dVar45 + dVar60) * dVar1;
          local_1b8 = (dVar59 * dVar56 + dVar62) * dVar46;
          dStack_1a0 = (dVar59 * dVar56 - dVar62) * dVar33;
          local_1d8 = ((double)param_1[0x48] * dVar59 - dVar35) * dVar1;
          local_1e8._8_4_ = SUB84(dVar58,0);
          local_1e8._0_8_ = (dVar36 - (dVar57 * dVar59 + dVar56 * dVar61)) * dVar1;
          local_1e8._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
          uStack_1d0 = 0;
          local_1c8._8_4_ = SUB84(dVar54,0);
          local_1c8._0_8_ = (dVar61 * dVar45 - dVar60) * dVar46;
          local_1c8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
          uStack_1b0 = 0;
          uStack_190 = 0;
          local_188 = (double)param_1[0x4c];
          dStack_180 = (double)param_1[0x4d];
          local_178 = (double)param_1[0x4e];
          uStack_170 = 0x3ff0000000000000;
          dVar58 = *param_3;
          dVar45 = param_3[1];
          dVar56 = param_3[2];
          dVar57 = dVar45 + dVar45;
          dVar61 = dVar56 + dVar56;
          dVar54 = dVar58 * (dVar58 + dVar58);
          dVar35 = param_3[3];
          dVar59 = dVar61 * dVar35;
          dVar60 = (dVar58 + dVar58) * param_3[3];
          dVar35 = dVar57 * dVar35;
          dVar46 = dVar46 * dVar55;
          local_268[0] = (dVar36 - (dVar56 * dVar61 + dVar45 * dVar57)) * dVar34;
          dVar36 = (dVar47 - (dVar56 * dVar61 + dVar54)) * dVar55;
          local_268[1] = (dVar57 * dVar58 + dVar59) * dVar34;
          local_238 = (dVar61 * dVar45 + dVar60) * dVar55;
          local_258._8_8_ = 0;
          local_258._0_8_ = (*param_3 * dVar61 - dVar35) * dVar34;
          local_248._8_4_ = SUB84(dVar36,0);
          local_248._0_8_ = (dVar57 * dVar58 - dVar59) * dVar55;
          local_248._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          dStack_230 = 0.0;
          local_228._8_8_ = (dVar61 * dVar45 - dVar60) * dVar44;
          local_228._0_8_ = (dVar35 + *param_3 * dVar61) * dVar44;
          local_218._8_8_ = 0;
          local_218._0_8_ = (1.0 - (dVar54 + dVar45 * dVar57)) * dVar44;
          local_208 = param_3[4];
          dStack_200 = param_3[5];
          local_1f8 = param_3[6];
          uStack_1f0 = 0x3ff0000000000000;
          FUN_1447fea8d(local_168);
          FUN_144a1c686(local_168,0x3e45798ee0000000);
          auVar30._8_8_ = -(ulonglong)(0.0 <= dVar46);
          auVar30._0_8_ = -(ulonglong)(0.0 <= dVar1 * dVar34);
          auVar41 = blendvpd(_DAT_149936790,auVar63,auVar30);
          uVar26 = -(ulonglong)(0.0 <= dVar33 * dVar44);
          dVar36 = (double)(~uVar26 & 0xbff0000000000000 | uVar26 & 0x3ff0000000000000);
          dVar47 = auVar41._0_8_;
          local_158 = local_158 * dVar47;
          local_168._8_8_ = (double)local_168._8_8_ * dVar47;
          local_168._0_8_ = (double)local_168._0_8_ * dVar47;
          dVar47 = auVar41._8_8_;
          local_138 = local_138 * dVar47;
          local_148._8_8_ = (double)local_148._8_8_ * dVar47;
          local_148._0_8_ = dVar47 * (double)local_148._0_8_;
          local_118 = local_118 * dVar36;
          dStack_120 = dStack_120 * dVar36;
          local_128 = dVar36 * local_128;
          FUN_14481fd10(&local_348,local_168);
          dVar36 = local_338 * local_338 + local_348 * local_348;
          dVar47 = dStack_330 * dStack_330 + dStack_340 * dStack_340;
          auVar43._0_8_ = dVar36 + dVar47;
          auVar43._8_8_ = dVar36 + dVar47;
          auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_);
          auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_);
          auVar41 = sqrtpd(auVar43,auVar43);
          auVar63 = divpd(auVar63,auVar41);
          auVar64._0_8_ = auVar63._0_8_ * local_338;
          auVar64._8_8_ = auVar63._8_8_ * dStack_330;
          local_2c8[0] = (double)((ulonglong)(local_348 * auVar63._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar43._0_8_));
          local_2c8[1] = (double)((ulonglong)(dStack_340 * auVar63._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar43._8_8_));
          local_2b8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar31);
          local_288._8_4_ = SUB84(dVar46,0);
          local_288._0_8_ = dVar1 * dVar34;
          local_288._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          local_278._8_4_ = SUB84(dVar53,0);
          local_278._0_8_ = dVar33 * dVar44;
          local_278._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
          local_2a8 = local_108;
          dStack_2a0 = dStack_100;
          local_298 = local_f8;
          dStack_290 = 0.0;
        }
      }
      else {
        pdVar25 = local_2c8;
        for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
          *pdVar25 = *param_3;
          param_3 = param_3 + 1;
          pdVar25 = pdVar25 + 1;
        }
      }
      local_418 = &local_328;
      local_410 = 2;
      (**(code **)(*param_1 + 0xbc0))(param_1);
    }
  }
  if (param_5 != '\0') {
    FUN_1448215fa(param_1);
  }
  if ((longlong)DAT_14cae4f58 != 0) {
    lVar21 = 0;
    do {
      if ((*(int *)(DAT_14cae4f50 + 8 + lVar21) != 0) &&
         (*(longlong *)(DAT_14cae4f50 + lVar21) != 0)) {
        local_328 = local_168;
        local_168._0_4_ = param_2;
        dStack_320 = (double)CONCAT44(dStack_320._4_4_,1);
        FUN_147b4ea06(param_1);
        break;
      }
      lVar21 = lVar21 + 0x10;
    } while ((longlong)DAT_14cae4f58 * 0x10 != lVar21);
  }
  uVar18 = 1;
LAB_14086d09b:
  if ((local_e0 ^ (ulonglong)auStack_468) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar18;
}



// FUNCTION 14086e618 FUN_14086e618 body=313 status=ok
// SIG undefined FUN_14086e618(void)

void FUN_14086e618(longlong param_1,uint param_2,longlong param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x840))) {
    lVar1 = *(longlong *)(param_1 + 0x838);
    uVar4 = (ulonglong)param_2;
    lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
    if ((9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x40))) ||
       ((9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x48)) ||
        (9.999999747378752e-05 < ABS(*(double *)(param_3 + 0x50)))))) {
      if (lVar2 == 0) {
        uVar3 = FUN_14001cc68(0x188,0x10);
        FUN_144805afa(uVar3);
        *(undefined8 *)(lVar1 + uVar4 * 8) = uVar3;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
      FUN_140043566(lVar2,param_3,param_4,1);
      local_48 = *(undefined8 *)(param_3 + 0x40);
      uStack_40 = *(undefined8 *)(param_3 + 0x48);
      local_38 = *(undefined8 *)(param_3 + 0x50);
      FUN_140043360(*(undefined8 *)(lVar1 + uVar4 * 8),&local_48,0);
    }
    else if (lVar2 != 0) {
      FUN_140156df6(lVar2,0,0);
      lVar2 = *(longlong *)(lVar1 + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_144760d56(lVar2);
        FUN_1400020a8(lVar2);
      }
      *(undefined8 *)(lVar1 + uVar4 * 8) = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086e76a FUN_14086e76a body=1395 status=ok
// SIG undefined FUN_14086e76a(void)

void FUN_14086e76a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  undefined8 uStack_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x20) != param_2) {
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = (code *)&LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    lVar1 = DAT_14cac9ca8;
    if (DAT_14c951858 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1468c5283;
      local_70 = FUN_142809da0;
      local_78 = L"Engine";
      local_80 = 0x400000000;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar6 = *(longlong *)(param_1 + 0x20);
    if (lVar6 == 0) {
      lVar5 = 0;
    }
    else {
      iVar4 = *(int *)(lVar1 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < iVar4) ||
           (lVar5 = lVar6,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
           lVar1 + 0x30)) {
          lVar5 = 0;
        }
      } while ((lVar5 == 0) && (lVar6 = *(longlong *)(lVar6 + 0x20), lVar6 != 0));
    }
    *(longlong *)(param_1 + 0xa8) = lVar5;
    if (DAT_14cac9ca8 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_14081d0ea;
      local_68 = &LAB_1478c0a72;
      local_70 = (code *)&LAB_1417b2375;
      local_78 = L"Engine";
      local_80 = 0x1000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) {
      uVar2 = FUN_144a6c4d8();
      param_2 = FUN_144a78ede(param_2,uVar2);
    }
    lVar1 = *(longlong *)(param_1 + 0xa8);
    if (lVar1 != param_2) {
      if (param_2 != 0) {
        FUN_1400f829a(param_2,param_1);
        lVar1 = *(longlong *)(param_1 + 0xa8);
      }
      if (lVar1 != 0) {
        FUN_14010ee68(lVar1,param_1);
      }
      local_48 = (code *)0x0;
      uStack_40 = 0;
      local_98 = 0;
      FUN_14086ecde(param_1,&local_48,0,0);
      if (0 < (int)uStack_40) {
        lVar6 = 0;
        lVar1 = DAT_14cac9ca8;
        do {
          lVar5 = *(longlong *)(local_48 + lVar6 * 8);
          if (lVar1 == 0) {
            local_60 = &local_38;
            local_38 = FUN_141030f22;
            local_50 = FUN_14081d0ea;
            local_58 = FUN_14081d0ea;
            local_68 = &LAB_1478c0a72;
            local_70 = (code *)&LAB_1417b2375;
            local_78 = L"Engine";
            local_80 = 0x1000000000;
            local_88 = 0x10000004;
            local_90 = 8;
            local_98 = 0x390;
            FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
            lVar1 = DAT_14cac9ca8;
          }
          lVar3 = *(longlong *)(lVar5 + 0x10);
          iVar4 = *(int *)(lVar3 + 0x38);
          if ((iVar4 < *(int *)(lVar1 + 0x38)) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
              lVar1 + 0x30)) {
            if (lVar5 != 0) {
              if (DAT_14cad00c8 == 0) {
                local_60 = &local_38;
                local_38 = FUN_144a7958c;
                local_50 = FUN_14081d0ea;
                local_58 = FUN_14081d0ea;
                local_68 = &LAB_1479b7a0c;
                local_70 = (code *)&LAB_1463b464e;
                local_78 = L"Engine";
                local_80 = 0;
                local_88 = 0x10000005;
                local_90 = 8;
                local_98 = 0x110;
                FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
                lVar3 = *(longlong *)(lVar5 + 0x10);
                iVar4 = *(int *)(lVar3 + 0x38);
              }
              if ((*(int *)(DAT_14cad00c8 + 0x38) <= iVar4) &&
                 (*(longlong *)
                   (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
                  DAT_14cad00c8 + 0x30)) {
                lVar1 = *(longlong *)(param_1 + 0xa8);
                *(longlong *)(lVar5 + 0xa8) = lVar1;
                if (param_2 != 0) {
                  FUN_1400f829a(param_2,lVar5);
                  lVar1 = *(longlong *)(param_1 + 0xa8);
                }
                if (lVar1 != 0) {
                  FUN_14010ee68(lVar1,lVar5);
                }
              }
            }
            local_98 = 0;
            FUN_14086ecde(lVar5,&local_48,0,0);
            lVar1 = DAT_14cac9ca8;
          }
          lVar6 = lVar6 + 1;
        } while (lVar6 < (int)uStack_40);
      }
      if (local_48 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  *(byte *)(param_1 + 0x9d) = *(byte *)(param_1 + 0x9d) | 0x10;
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14086ecde FUN_14086ecde body=3128 status=ok
// SIG undefined FUN_14086ecde(void)

void FUN_14086ecde(ulonglong param_1,longlong *param_2,undefined1 param_3,uint param_4,uint param_5)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  uint *puVar13;
  uint uVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined7 uVar18;
  longlong *plVar17;
  bool bVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong *plVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 in_R11;
  ulonglong uVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  byte bVar30;
  undefined1 auStack_f8 [32];
  uint local_d8;
  uint local_d4;
  longlong *local_d0;
  uint *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  int local_ac;
  uint *local_a8;
  longlong local_a0;
  longlong local_98;
  uint *local_90;
  ulonglong local_88;
  uint local_7c;
  longlong *local_78;
  LPCRITICAL_SECTION local_70;
  ulonglong local_68;
  uint *local_60;
  undefined8 local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_7c = param_4;
  uVar4 = FUN_14482ca40();
  iVar27 = (int)param_2[1];
  local_c0 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c964670) && (FUN_144b3d300(&DAT_14c964670), DAT_14c964670 == -1)) {
    FUN_145794a58(&DAT_14c964408);
    atexit((_func_5014 *)&LAB_142840318);
    _Init_thread_footer(&DAT_14c964670);
  }
  if (((DAT_14c949800 & 1) == 0) || (cVar3 = FUN_144a61b4f(), cVar3 == '\0')) {
    local_70 = (LPCRITICAL_SECTION)&DAT_14c964408;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964408);
    uVar26 = 0;
  }
  else {
    uVar26 = CONCAT71((int7)((ulonglong)in_R11 >> 8),1);
    local_70 = (LPCRITICAL_SECTION)0x0;
  }
  if (DAT_14c9644d8 != DAT_14c964504) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    puVar8 = DAT_14c964510;
    if (DAT_14c964510 == (undefined *)0x0) {
      puVar8 = &DAT_14c964508;
    }
    iVar6 = *(int *)(puVar8 + (ulonglong)(DAT_14c964518 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar6 != -1) {
      uVar4 = uVar4 | param_5 | 0x10000000;
      do {
        lVar21 = DAT_14c9644d0 + (longlong)iVar6 * 0x20;
        if (*(ulonglong *)(DAT_14c9644d0 + (longlong)iVar6 * 0x20) == param_1) {
          if ((lVar21 != 0) && (local_a0 = lVar21 + 8, local_a0 != 0)) {
            plVar9 = *(longlong **)(lVar21 + 0x10);
            bVar28 = *(longlong *)(lVar21 + 8) != 0;
            local_b8 = (longlong *)0x0;
            if (!bVar28 && plVar9 != (longlong *)0x0) {
              local_b8 = plVar9;
            }
            local_d4 = (uint)uVar26;
            local_90 = (uint *)CONCAT71(local_90._1_7_,param_3);
            local_ac = iVar27;
            if (bVar28 || plVar9 == (longlong *)0x0) {
              local_68 = 0x100000000;
              local_60 = &DAT_14c964330;
              local_58 = 0xffffffff;
              local_50 = 0;
              if (DAT_14c964348 == 0) {
                local_c8 = (uint *)&DAT_00000001;
                local_58._0_4_ = 0xffffffff;
                local_d0 = (longlong *)0x0;
                uVar20 = 0;
                uVar5 = 0;
              }
              else {
                FUN_1449c0562(&local_68);
                uVar26 = (ulonglong)local_d4;
                uVar20 = local_68 & 0xffffffff;
                local_c8 = (uint *)(local_68 >> 0x20);
                local_d0 = (longlong *)(ulonglong)local_50;
                uVar5 = local_58._4_4_;
              }
              plVar9 = *(longlong **)(lVar21 + 0x10);
              bVar28 = *(longlong *)(lVar21 + 8) == 0;
              local_b8 = &DAT_14c964320;
              local_d8 = (uint)local_58;
              local_a8 = local_60;
              goto LAB_14086eed8;
            }
            local_a8 = (uint *)(plVar9 + 2);
            uVar5 = *(uint *)(plVar9 + 5);
            local_c8 = (uint *)&DAT_00000001;
            bVar28 = true;
            if (uVar5 == 0) {
              local_d0 = (longlong *)0x0;
              uVar20 = 0;
              local_b8 = plVar9;
              uVar22 = 0;
              goto LAB_14086f57f;
            }
            puVar12 = (uint *)plVar9[4];
            if ((uint *)plVar9[4] == (uint *)0x0) {
              puVar12 = local_a8;
            }
            uVar22 = *puVar12;
            if (uVar22 != 0) {
              uVar20 = 0;
              plVar17 = (longlong *)0x0;
              goto LAB_14086f543;
            }
            iVar27 = uVar5 + 0x1e;
            if (-1 < (int)(uVar5 - 1)) {
              iVar27 = uVar5 - 1;
            }
            uVar25 = 0;
            uVar24 = (ulonglong)(uint)(iVar27 >> 5);
            if (iVar27 >> 5 < 1) {
              uVar24 = uVar25;
            }
            uVar20 = (ulonglong)((int)uVar24 + 1);
            local_d0 = (longlong *)(ulonglong)((int)uVar24 * 0x20 + 0x20);
            plVar17 = (longlong *)0x0;
            goto LAB_14086f522;
          }
          break;
        }
        iVar6 = *(int *)(lVar21 + 0x18);
      } while (iVar6 != -1);
    }
  }
LAB_14086f473:
  if ((char)uVar26 == '\0') {
    LeaveCriticalSection(local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while( true ) {
    plVar17 = (longlong *)(ulonglong)((int)plVar17 + 0x20);
    uVar22 = puVar12[uVar25 + 1];
    uVar25 = uVar25 + 1;
    if (uVar22 != 0) break;
LAB_14086f522:
    if (uVar24 == uVar25) {
      local_d8 = 0xffffffff;
      uVar26 = uVar26 & 0xffffffff;
      goto LAB_14086eed8;
    }
  }
  uVar20 = uVar25 & 0xffffffff;
LAB_14086f543:
  local_c8 = (uint *)(ulonglong)(-uVar22 & uVar22);
  uVar24 = (longlong)local_c8 * 2 + 1;
  lVar15 = 0x3f;
  if (uVar24 != 0) {
    for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
    }
  }
  uVar22 = ((int)plVar17 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
  local_d0 = plVar17;
  if ((int)uVar5 <= (int)uVar22) {
    uVar22 = uVar5;
  }
LAB_14086f57f:
  uVar5 = uVar22;
  local_d8 = 0xffffffff;
  uVar26 = uVar26 & 0xffffffff;
LAB_14086eed8:
  bVar19 = (bool)(plVar9 != (longlong *)0x0 & bVar28);
  bVar28 = (bool)(plVar9 == (longlong *)0x0 & bVar28);
  bVar30 = 0;
  plVar9 = local_c0;
LAB_14086eee9:
  if (bVar19) {
    if ((int)local_a8[6] <= (int)uVar5) goto LAB_14086f0b0;
    plVar17 = (longlong *)((longlong)(int)uVar5 * 0x10 + *local_b8);
  }
  else {
    if (bVar28) goto LAB_14086f0b0;
    plVar17 = (longlong *)(local_a0 + (ulonglong)bVar30 * 8);
  }
  lVar15 = *plVar17;
  local_88 = uVar20;
  if ((local_7c & *(uint *)(lVar15 + 8)) == 0) {
    uVar22 = *(uint *)(lVar15 + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar22 & 0xffff) * 0x18) + DAT_14c9647c8[uVar22 >> 0x10];
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) & uVar4) == 0) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar15);
        uVar26 = (ulonglong)local_d4;
        plVar9 = local_c0;
      }
      iVar27 = (int)plVar9[1];
      *(uint *)(plVar9 + 1) = iVar27 + 1U;
      if (*(uint *)((longlong)plVar9 + 0xc) < iVar27 + 1U) {
        FUN_1447f76d2(plVar9,iVar27);
        uVar26 = (ulonglong)local_d4;
        plVar9 = local_c0;
      }
      *(longlong *)(*plVar9 + (longlong)iVar27 * 8) = lVar15;
    }
  }
  uVar20 = local_88;
  if (bVar19) {
    local_d8 = local_d8 & ~(uint)local_c8;
    puVar12 = *(uint **)(local_a8 + 4);
    if (*(uint **)(local_a8 + 4) == (uint *)0x0) {
      puVar12 = local_a8;
    }
    uVar22 = local_a8[6];
    iVar27 = (int)local_88;
    lVar15 = (longlong)iVar27;
    uVar5 = puVar12[lVar15] & local_d8;
    if (uVar5 == 0) {
      iVar6 = uVar22 + 0x1e;
      if (-1 < (int)(uVar22 - 1)) {
        iVar6 = uVar22 - 1;
      }
      iVar6 = iVar6 >> 5;
      local_d0 = (longlong *)(ulonglong)((int)local_d0 + 0x20);
      iVar7 = iVar6;
      if (iVar6 < iVar27) {
        iVar7 = iVar27;
      }
      if (iVar27 < iVar6) {
        lVar10 = 0;
        do {
          uVar5 = puVar12[lVar15 + lVar10 + 1];
          if (uVar5 != 0) {
            local_d8 = 0xffffffff;
            uVar20 = (ulonglong)(iVar27 + (int)lVar10 + 1);
            goto LAB_14086f07f;
          }
          local_d0 = (longlong *)(ulonglong)((int)local_d0 + 0x20);
          lVar10 = lVar10 + 1;
        } while (iVar7 - lVar15 != lVar10);
        local_d8 = 0xffffffff;
        iVar27 = iVar7;
      }
      uVar20 = (ulonglong)(iVar27 + 1);
      uVar26 = (ulonglong)local_d4;
      plVar9 = local_c0;
      uVar5 = uVar22;
    }
    else {
LAB_14086f07f:
      local_c8 = (uint *)(ulonglong)(-uVar5 & uVar5);
      uVar24 = (longlong)local_c8 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      uVar5 = ((int)local_d0 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if ((int)uVar22 <= (int)uVar5) {
        uVar5 = uVar22;
      }
    }
  }
  else {
    bVar28 = true;
    bVar29 = bVar30 == 0;
    bVar30 = 1;
    if (bVar29) {
      bVar28 = *(longlong *)(lVar21 + 0x10) == 0;
      bVar30 = 1;
    }
  }
  goto LAB_14086eee9;
LAB_14086f0b0:
  iVar27 = (int)plVar9[1];
  iVar6 = local_ac;
  if ((char)local_90 == '\x01' && local_ac != iVar27) {
    do {
      iVar7 = iVar27;
      if (iVar6 < iVar27) {
        lVar21 = (longlong)iVar6;
        do {
          if (DAT_14c9644d8 != DAT_14c964504) {
            uVar20 = *(ulonglong *)(*plVar9 + lVar21 * 8);
            uVar5 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
            uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
            puVar8 = DAT_14c964510;
            if (DAT_14c964510 == (undefined *)0x0) {
              puVar8 = &DAT_14c964508;
            }
            iVar27 = *(int *)(puVar8 + (ulonglong)(DAT_14c964518 - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4
                             );
            while (iVar27 != -1) {
              lVar15 = DAT_14c9644d0 + (longlong)iVar27 * 0x20;
              if (*(ulonglong *)(DAT_14c9644d0 + (longlong)iVar27 * 0x20) == uVar20) {
                lVar10 = lVar15 + 8;
                if (lVar10 != 0 && lVar15 != 0) {
                  plVar17 = *(longlong **)(lVar15 + 0x10);
                  bVar28 = *(longlong *)(lVar15 + 8) != 0;
                  plVar16 = plVar17;
                  if (bVar28 || plVar17 == (longlong *)0x0) {
                    plVar16 = (longlong *)0x0;
                  }
                  local_98 = lVar10;
                  if (bVar28 || plVar17 == (longlong *)0x0) {
                    local_68 = 0x100000000;
                    local_60 = &DAT_14c964330;
                    local_58 = 0xffffffff;
                    local_50 = 0;
                    if (DAT_14c964348 == 0) {
                      local_a8 = (uint *)&DAT_00000001;
                      local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
                      local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffff00000000);
                      local_c8 = (uint *)0x0;
                      local_d0 = (longlong *)0x0;
                    }
                    else {
                      FUN_1449c0562(&local_68);
                      uVar26 = (ulonglong)local_d4;
                      local_d0 = (longlong *)(local_68 & 0xffffffff);
                      local_a8 = (uint *)(local_68 >> 0x20);
                      local_a0 = CONCAT44(local_a0._4_4_,(uint)local_58);
                      local_c8 = (uint *)(local_58 >> 0x20);
                      local_b8 = (longlong *)CONCAT44(local_b8._4_4_,local_50);
                      plVar9 = local_c0;
                    }
                    lVar10 = *(longlong *)(lVar15 + 8);
                    plVar17 = *(longlong **)(lVar15 + 0x10);
                    local_78 = &DAT_14c964320;
                    puVar12 = (uint *)&DAT_14c964320;
                    local_90 = local_60;
                    goto LAB_14086f23f;
                  }
                  local_90 = (uint *)(plVar17 + 2);
                  uVar5 = *(uint *)(plVar17 + 5);
                  local_c8 = (uint *)(ulonglong)uVar5;
                  local_a8 = (uint *)&DAT_00000001;
                  local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
                  plVar9 = local_c0;
                  if (uVar5 == 0) {
                    lVar10 = 0;
                    local_b8 = (longlong *)((ulonglong)local_b8._4_4_ << 0x20);
                    local_c8 = (uint *)0x0;
                    local_d0 = (longlong *)0x0;
                    puVar12 = local_90;
                    local_78 = plVar17;
                    goto LAB_14086f23f;
                  }
                  puVar13 = (uint *)plVar17[4];
                  if ((uint *)plVar17[4] == (uint *)0x0) {
                    puVar13 = local_90;
                  }
                  uVar22 = *puVar13;
                  if (uVar22 != 0) {
                    local_d0 = (longlong *)0x0;
                    uVar14 = 0;
                    goto LAB_14086f63d;
                  }
                  iVar27 = uVar5 + 0x1e;
                  if (-1 < (int)(uVar5 - 1)) {
                    iVar27 = uVar5 - 1;
                  }
                  local_d0 = (longlong *)0x0;
                  plVar23 = (longlong *)(ulonglong)(uint)(iVar27 >> 5);
                  if (iVar27 >> 5 < 1) {
                    plVar23 = local_d0;
                  }
                  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)plVar23 * 0x20 + 0x20);
                  uVar14 = 0;
                  goto LAB_14086f61f;
                }
                break;
              }
              iVar27 = *(int *)(lVar15 + 0x18);
            }
          }
LAB_14086f17d:
          lVar21 = lVar21 + 1;
        } while (iVar7 != (int)lVar21);
        iVar27 = (int)plVar9[1];
      }
      iVar6 = iVar7;
    } while (iVar7 != iVar27);
  }
  goto LAB_14086f473;
  while( true ) {
    uVar14 = uVar14 + 0x20;
    uVar22 = puVar13[(longlong)local_d0 + 1];
    local_d0 = (longlong *)((longlong)local_d0 + 1);
    if (uVar22 != 0) break;
LAB_14086f61f:
    puVar12 = (uint *)(ulonglong)uVar14;
    plVar2 = (longlong *)(ulonglong)((int)plVar23 + 1);
    if (plVar23 == local_d0) goto LAB_14086f67d;
  }
LAB_14086f63d:
  local_a8 = (uint *)(ulonglong)(-uVar22 & uVar22);
  uVar20 = (longlong)local_a8 * 2 + 1;
  lVar10 = 0x3f;
  if (uVar20 != 0) {
    for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
    }
  }
  uVar22 = (uVar14 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
  puVar12 = (uint *)(ulonglong)uVar22;
  if ((int)uVar5 <= (int)uVar22) {
    puVar12 = local_c8;
  }
  local_b8 = (longlong *)CONCAT44(local_b8._4_4_,uVar14);
  plVar2 = local_d0;
  local_c8 = puVar12;
LAB_14086f67d:
  local_d0 = plVar2;
  lVar10 = 0;
  local_78 = plVar16;
LAB_14086f23f:
  plVar16 = (longlong *)CONCAT71((int7)((ulonglong)puVar12 >> 8),plVar17 != (longlong *)0x0);
  local_88 = CONCAT71(local_88._1_7_,lVar10 == 0 && plVar17 != (longlong *)0x0);
  bVar30 = lVar10 == 0 && plVar17 == (longlong *)0x0;
  local_d8 = 0;
  puVar12 = local_c8;
  lVar10 = local_98;
  local_ac = iVar7;
  do {
    local_c8 = (uint *)CONCAT71(local_c8._1_7_,bVar30);
    while( true ) {
      iVar7 = local_ac;
      if ((char)local_88 == '\0') {
        if ((bVar30 & 1) != 0) goto LAB_14086f17d;
        plVar17 = (longlong *)(lVar10 + (ulonglong)(byte)local_d8 * 8);
      }
      else {
        if ((int)local_90[6] <= (int)puVar12) goto LAB_14086f17d;
        plVar17 = (longlong *)((longlong)(int)puVar12 * 0x10 + *local_78);
        plVar16 = local_78;
      }
      lVar1 = *plVar17;
      if ((local_7c & *(uint *)(lVar1 + 8)) == 0) {
        uVar5 = *(uint *)(lVar1 + 0xc);
        if ((int)uVar5 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar5 & 0xffff) * 0x18) + DAT_14c9647c8[uVar5 >> 0x10];
          plVar16 = DAT_14c9647c8;
        }
        else {
          lVar11 = 0;
        }
        if ((*(uint *)(lVar11 + 8) & uVar4) == 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
            uVar26 = (ulonglong)local_d4;
            lVar10 = local_98;
            plVar9 = local_c0;
          }
          uVar5 = *(uint *)(plVar9 + 1);
          *(uint *)(plVar9 + 1) = uVar5 + 1;
          if (*(uint *)((longlong)plVar9 + 0xc) < uVar5 + 1) {
            plVar16 = (longlong *)(ulonglong)uVar5;
            FUN_1447f76d2(plVar9,plVar16);
            uVar26 = (ulonglong)local_d4;
            lVar10 = local_98;
            plVar9 = local_c0;
          }
          *(longlong *)(*plVar9 + (longlong)(int)uVar5 * 8) = lVar1;
        }
      }
      if ((char)local_88 == '\0') break;
      uVar5 = (uint)local_a0 & ~(uint)local_a8;
      puVar12 = *(uint **)(local_90 + 4);
      if (*(uint **)(local_90 + 4) == (uint *)0x0) {
        puVar12 = local_90;
      }
      uVar22 = local_90[6];
      iVar27 = (int)local_d0;
      plVar16 = (longlong *)(longlong)iVar27;
      local_a0 = CONCAT44(local_a0._4_4_,uVar5);
      uVar5 = puVar12[(longlong)plVar16] & uVar5;
      if (uVar5 == 0) {
        iVar6 = uVar22 + 0x1e;
        if (-1 < (int)(uVar22 - 1)) {
          iVar6 = uVar22 - 1;
        }
        iVar6 = iVar6 >> 5;
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8 + 0x20);
        iVar7 = iVar6;
        if (iVar6 < iVar27) {
          iVar7 = iVar27;
        }
        if (iVar27 < iVar6) {
          local_d0 = (longlong *)((longlong)iVar7 + 1);
          plVar17 = (longlong *)0x0;
          do {
            uVar5 = puVar12[(longlong)plVar16 + (longlong)plVar17 + 1];
            if (uVar5 != 0) {
              local_d0 = (longlong *)(ulonglong)(iVar27 + (int)plVar17 + 1);
              local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
              plVar16 = plVar17;
              goto LAB_14086f3bd;
            }
            local_b8 = (longlong *)CONCAT44(local_b8._4_4_,(int)local_b8 + 0x20);
            plVar17 = (longlong *)((longlong)plVar17 + 1);
          } while ((longlong *)((longlong)iVar7 - (longlong)plVar16) != plVar17);
          local_a0 = CONCAT44(local_a0._4_4_,0xffffffff);
          plVar16 = plVar17;
        }
        else {
          local_d0 = (longlong *)((longlong)plVar16 + 1);
          plVar16 = local_d0;
        }
        uVar26 = (ulonglong)local_d4;
        plVar9 = local_c0;
        uVar5 = uVar22;
      }
      else {
LAB_14086f3bd:
        local_a8 = (uint *)(ulonglong)(-uVar5 & uVar5);
        uVar20 = (longlong)local_a8 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar5 = ((int)local_b8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar22 <= (int)uVar5) {
          uVar5 = uVar22;
        }
      }
      puVar12 = (uint *)(ulonglong)uVar5;
      lVar10 = local_98;
      bVar30 = (byte)local_c8;
    }
    bVar30 = true;
    uVar5 = local_d8 & 1;
    uVar18 = (undefined7)((ulonglong)plVar16 >> 8);
    plVar16 = (longlong *)CONCAT71(uVar18,1);
    local_d8 = (uint)plVar16;
    if (uVar5 == 0) {
      bVar30 = *(longlong *)(lVar15 + 0x10) == 0;
      plVar16 = (longlong *)CONCAT71(uVar18,1);
      local_d8 = (uint)plVar16;
    }
  } while( true );
}



// FUNCTION 14086f918 FUN_14086f918 body=1327 status=ok
// SIG undefined FUN_14086f918(void)

longlong * FUN_14086f918(ulonglong *param_1,longlong *param_2,uint param_3,undefined2 *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  ushort uVar8;
  ulonglong uVar9;
  void *pvVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  byte bVar15;
  ushort uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  byte *pbVar20;
  bool bVar21;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  byte *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar4 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar4;
  uVar4 = param_3 - 1 & uVar4;
  uVar13 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar13 = (uVar13 >> 2 & 0x3333333333333333) + (uVar13 & 0x3333333333333333);
  uVar18 = ((uVar13 >> 4) + uVar13 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar19 = uVar18 >> 0x38;
  local_88 = *param_1;
  bVar15 = *(byte *)((longlong)param_1 + 0xc);
  uVar16 = 2;
  if (bVar15 != 0) {
    lVar11 = 0;
    do {
      uVar8 = (ushort)*(byte *)(local_88 + 3 + lVar11);
      if (uVar16 < uVar8) {
        uVar16 = uVar8;
      }
      lVar11 = lVar11 + 6;
    } while ((ulonglong)((uint)bVar15 + (uint)bVar15) * 3 != lVar11);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_14086fe48(local_78,bVar15 + 1,CONCAT71((int7)(uVar13 >> 8),1));
  lVar11 = (ulonglong)((uint)bVar15 * 2 + 2) * 3;
  uVar4 = 0;
  bVar3 = (byte)(uVar18 >> 0x38);
  uVar17 = (uint)bVar3;
  if (uVar19 != 0) {
    uVar4 = (uint)bVar3 + (uint)(uVar17 == 0);
    pbVar20 = (byte *)(local_88 + 3);
    lVar14 = 0;
    do {
      uVar13 = -(ulonglong)*pbVar20 & (lVar11 + (ulonglong)*pbVar20) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + lVar14 * 2) = (short)uVar13;
      lVar11 = pbVar20[-1] + uVar13;
      lVar14 = lVar14 + 1;
      pbVar20 = pbVar20 + 6;
    } while (uVar19 + (uVar19 == 0) != lVar14);
  }
  uVar13 = lVar11 + 1U & 0xfffffffffffffffe;
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar9 = (ulonglong)uVar4;
  *(short *)(puVar5 + uVar9 * 2) = (short)uVar13;
  uVar13 = uVar13 + 2;
  if (uVar4 < bVar15) {
    pbVar20 = (byte *)(local_88 + uVar9 * 6 + 3);
    do {
      uVar13 = -(ulonglong)*pbVar20 & (uVar13 + *pbVar20) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar9 * 2 + 2) = (short)uVar13;
      uVar9 = uVar9 + 1;
      uVar13 = pbVar20[-1] + uVar13;
      pbVar20 = pbVar20 + 6;
    } while (bVar15 != uVar9);
  }
  uVar9 = *param_1;
  if (((ushort)param_1[1] < uVar16) || (*(ushort *)((longlong)param_1 + 10) < uVar13)) {
    uVar12 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar13 < uVar12) {
      uVar13 = uVar12;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar13;
    uVar13 = FUN_14001cc68(uVar13 & 0xffff,uVar16);
    *param_1 = uVar13;
    bVar15 = 1;
  }
  else {
    bVar15 = 0;
    uVar13 = uVar9;
  }
  bVar6 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar6;
  uVar12 = (ulonglong)bVar6;
  iVar7 = bVar6 - 1;
  if ((int)(uint)bVar3 < iVar7) {
    pbVar20 = (byte *)(local_88 + (ulonglong)bVar6 * 6 + -10);
    uVar13 = (ulonglong)bVar6;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar10 = (void *)(uVar9 + *(ushort *)(pbVar20 + -2));
      if ((ulonglong)*(ushort *)(pbVar20 + -2) == 0xffff) {
        pvVar10 = (void *)0x0;
      }
      local_80 = pbVar20;
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar13 * 2 + -2) + *param_1),pvVar10,
              (ulonglong)*pbVar20);
      uVar12 = uVar13 - 1;
      pbVar20 = local_80 + -6;
      lVar11 = uVar13 - 2;
      uVar13 = uVar12;
    } while ((longlong)uVar19 < lVar11);
    iVar7 = (int)uVar12 + -1;
    uVar13 = *param_1;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  *(undefined2 *)(uVar13 + *(ushort *)(puVar5 + (longlong)iVar7 * 2)) = *param_4;
  if (1 < (int)uVar12) {
    uVar13 = (ulonglong)((int)uVar12 - 2);
    pbVar20 = (byte *)(local_88 + uVar13 * 6 + 2);
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar10 = (void *)(uVar9 + *(ushort *)(pbVar20 + -2));
      if ((ulonglong)*(ushort *)(pbVar20 + -2) == 0xffff) {
        pvVar10 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar13 * 2) + *param_1),pvVar10,
              (ulonglong)*pbVar20);
      pbVar20 = pbVar20 + -6;
      bVar21 = uVar13 != 0;
      uVar13 = uVar13 - 1;
    } while (bVar21);
  }
  uVar13 = *param_1;
  bVar3 = *(byte *)((longlong)param_1 + 0xc);
  uVar4 = (uint)bVar3;
  iVar7 = bVar3 - 1;
  uVar12 = uVar13;
  if ((int)uVar17 < iVar7) {
    lVar11 = (ulonglong)((uint)bVar3 + (uint)bVar3) * 3;
    uVar12 = (ulonglong)(uint)bVar3;
    do {
      *(undefined2 *)((uVar13 - 2) + lVar11) = *(undefined2 *)((local_88 - 8) + lVar11);
      *(undefined4 *)((uVar13 - 6) + lVar11) = *(undefined4 *)((local_88 - 0xc) + lVar11);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)((uVar13 - 6) + lVar11) = *(undefined2 *)(puVar5 + uVar12 * 2 + -2);
      uVar1 = uVar12 - 1;
      lVar11 = lVar11 + -6;
      lVar14 = uVar12 - 2;
      uVar12 = uVar1;
    } while ((longlong)uVar19 < lVar14);
    uVar4 = (uint)uVar1;
    iVar7 = uVar4 - 1;
    uVar12 = *param_1;
  }
  puVar2 = (ushort *)(uVar13 + (longlong)iVar7 * 6);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar16 = *(ushort *)(puVar5 + (longlong)iVar7 * 2);
  *puVar2 = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*param_1 <= uVar16 + uVar12) {
    *puVar2 = (short)(uVar16 + uVar12) - (short)*param_1;
  }
  puVar2[1] = 0x202;
  puVar2[2] = 0;
  if (1 < (int)uVar4) {
    uVar19 = (ulonglong)(uVar4 - 2);
    lVar11 = uVar19 * 6;
    do {
      *(undefined2 *)(uVar13 + 4 + lVar11) = *(undefined2 *)(local_88 + 4 + lVar11);
      *(undefined4 *)(uVar13 + lVar11) = *(undefined4 *)(local_88 + lVar11);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)(uVar13 + lVar11) = *(undefined2 *)(puVar5 + uVar19 * 2);
      lVar11 = lVar11 + -6;
      bVar21 = uVar19 != 0;
      uVar19 = uVar19 - 1;
    } while (bVar21);
  }
  if ((bool)(bVar15 & uVar9 != 0)) {
    FUN_1400020a8(uVar9);
  }
  iVar7 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
    FUN_14086feca(param_1 + 3,iVar7);
  }
  lVar11 = (uVar18 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar11 + 0x10),(void *)(param_1[3] + lVar11),
          (ulonglong)(iVar7 - uVar17) << 4);
  uVar13 = param_1[3];
  *(undefined1 **)(uVar13 + lVar11) = &LAB_1432df842;
  *(undefined **)(uVar13 + 8 + lVar11) = &DAT_1432df846;
  lVar11 = 0;
  if ((ulonglong)*puVar2 != 0xffff) {
    lVar11 = *param_1 + (ulonglong)*puVar2;
  }
  *param_2 = (ulonglong)(byte)puVar2[2] + lVar11;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((longlong)puVar2 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14086fe48 FUN_14086fe48 body=128 status=ok
// SIG undefined FUN_14086fe48(void)

void FUN_14086fe48(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x28) = param_2;
    if ((uint)(*(int *)(param_1 + 0x2c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14009fe5c(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 2),0,(longlong)(param_2 - iVar1) * 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x28) = param_2, param_3 == '\x01')) {
      FUN_14754fbc8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14086feca FUN_14086feca body=262 status=ok
// SIG undefined FUN_14086feca(void)

void FUN_14086feca(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14086ffd2 FUN_14086ffd2 body=432 status=ok
// SIG undefined FUN_14086ffd2(void)

void FUN_14086ffd2(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 *puVar6;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  undefined4 local_68;
  undefined4 local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 local_40;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = (longlong *)param_2[3];
  if (*(int *)((undefined8 *)*param_2 + 1) == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = *(undefined2 **)*param_2;
  }
  *(uint *)(plVar2 + 2) = (int)plVar2[2] + 0xfU & 0xfffffff0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3be38) {
    FUN_144b3d300(&DAT_14cb3be38);
    if (DAT_14cb3be38 == -1) {
      FUN_145dc068e(local_30);
      local_40 = 0;
      local_50 = 0;
      local_70 = "Unknown";
      local_80 = 0;
      uStack_78 = 0;
      local_88 = L"FNiagaraDataInterfaceCurveParameters";
      local_48 = 0;
      local_60 = 0x20;
      local_68 = 0x25;
      local_58 = local_30;
      FUN_140b49562(&DAT_14cb3bdb8,0,1);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143a3d970);
      _Init_thread_footer(&DAT_14cb3be38);
    }
  }
  iVar1 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(plVar2,iVar1);
  }
  lVar3 = *plVar2;
  lVar5 = (longlong)iVar1 * 0x30;
  lVar4 = plVar2[2];
  *(undefined2 **)(lVar3 + lVar5) = puVar6;
  *(undefined2 **)(lVar3 + 8 + lVar5) = &DAT_149dfb77a;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x7b;
  *(int *)(lVar3 + 0x14 + lVar5) = (int)lVar4;
  *(undefined2 *)(lVar3 + 0x18 + lVar5) = 0x14;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(undefined **)(lVar3 + 0x28 + lVar5) = &DAT_14cb3bdb8;
  *(int *)(plVar2 + 2) = (int)plVar2[2] + 0x20;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140870184 FUN_140870184 body=275 status=ok
// SIG undefined FUN_140870184(void)

void FUN_140870184(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
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



// FUNCTION 140870298 FUN_140870298 body=358 status=ok
// SIG undefined FUN_140870298(void)

undefined4 *
FUN_140870298(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408704a0(param_1,local_48);
  puVar1 = (undefined2 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  *(undefined2 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140870400(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)(local_40 + 2) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0xc) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14087068c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140870400 FUN_140870400 body=159 status=ok
// SIG undefined FUN_140870400(void)

void FUN_140870400(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_1470a35e6(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_140870469;
    }
  }
  uVar2 = 0;
LAB_140870469:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 1408704a0 FUN_1408704a0 body=492 status=ok
// SIG undefined FUN_1408704a0(void)

int * FUN_1408704a0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_140171ad2(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 14087068c FUN_14087068c body=688 status=ok
// SIG undefined FUN_14087068c(void)

void FUN_14087068c(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1408706f2;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1408706f2:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar16 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar16 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar16 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar16 >> 5);
      if (iVar16 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar16) {
      iVar16 = iVar7;
    }
  }
  if (iVar16 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar15 = (longlong)iVar16;
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar16;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar16 = (int)uVar4;
      lVar9 = (longlong)iVar16;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar16) {
          iVar12 = iVar16;
        }
        if (iVar11 <= iVar16) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar15 + 1];
          if (uVar3 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar12 - lVar9 == lVar15) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar16 + (int)lVar15 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar16 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar16 < iVar7);
  }
  return;
}



// FUNCTION 14087093c FUN_14087093c body=1364 status=ok
// SIG undefined FUN_14087093c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_14087093c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  uint uVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong lVar18;
  byte bVar19;
  double *pdVar20;
  double *pdVar21;
  undefined4 *puVar22;
  longlong lVar23;
  double dVar24;
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auStack_248 [32];
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 *local_210;
  undefined8 *local_208;
  undefined8 local_200;
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  double local_1b8 [2];
  undefined1 local_1a8 [16];
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  double local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined2 uStack_140;
  undefined6 local_13e;
  undefined2 uStack_138;
  undefined8 uStack_136;
  undefined1 local_128 [32];
  undefined1 *local_108;
  int local_100;
  undefined4 local_fc;
  undefined1 local_f8 [16];
  undefined1 *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  *(undefined4 *)(param_2 + 1) = 0;
  plVar16 = param_1;
  local_1f0 = param_2;
  local_1e8 = param_3;
  local_1e0 = param_4;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1417bb680(param_2,0);
    plVar16 = param_2;
  }
  iVar13 = (int)param_1[0x19c];
  if ((iVar13 < 0) || ((int)param_1[0x1af] <= iVar13)) {
    bVar19 = 0;
  }
  else {
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x50);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x52);
    lVar23 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
    auVar25._8_4_ = (int)lVar23;
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
    auVar25._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    iVar13 = movmskpd(iVar13,auVar25);
    lVar23 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
    auVar27._8_4_ = (int)lVar23;
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
    auVar27._12_4_ = (int)((ulonglong)lVar23 >> 0x20);
    uVar15 = movmskpd((int)plVar16,auVar27);
    if ((uVar15 & 0x3fffffff) == 0 && iVar13 == 0) {
      pdVar20 = (double *)&DAT_14c846480;
      pdVar21 = local_1b8;
      for (lVar23 = 0xc; lVar23 != 0; lVar23 = lVar23 + -1) {
        *pdVar21 = *pdVar20;
        pdVar20 = pdVar20 + 1;
        pdVar21 = pdVar21 + 1;
      }
    }
    else {
      auVar27 = divpd(_DAT_149934d80,auVar1);
      auVar25 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
      dVar4 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar27._0_8_);
      dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar27._8_8_);
      local_168 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar25._0_8_);
      local_1b8[0] = -(double)param_1[0x48];
      local_1b8[1] = -(double)param_1[0x49];
      dVar7 = (double)param_1[0x4a] * -1.0;
      dVar8 = (double)param_1[0x4b] * 1.0;
      dVar24 = (double)param_1[0x4c] * dVar4;
      dVar26 = (double)param_1[0x4d] * dVar5;
      dVar6 = (double)param_1[0x4e] * local_168;
      local_1a8._8_4_ = SUB84(dVar8,0);
      local_1a8._0_8_ = dVar7;
      local_1a8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      dVar10 = dVar26 * local_1b8[0] - local_1b8[1] * dVar24;
      dVar11 = dVar6 * local_1b8[1] - dVar7 * dVar26;
      dVar9 = dVar24 * dVar7 - local_1b8[0] * dVar6;
      dVar11 = dVar11 + dVar11;
      dVar9 = dVar9 + dVar9;
      dVar10 = dVar10 + dVar10;
      local_198 = 0.0 - ((dVar10 * local_1b8[1] - dVar9 * dVar7) + dVar8 * dVar11 + dVar24);
      dStack_190 = 0.0 - (dVar10 * (double)param_1[0x48] + dVar7 * dVar11 + dVar8 * dVar9 + dVar26);
      local_188 = 0.0 - (dVar8 * dVar10 + dVar6 + (dVar9 * local_1b8[0] - dVar11 * local_1b8[1]));
      uStack_180 = 0;
      local_178._8_4_ = SUB84(dVar5,0);
      local_178._0_8_ = dVar4;
      local_178._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      uStack_160 = 0;
    }
    puVar14 = (undefined8 *)(**(code **)(*param_1 + 0x558))(param_1);
    local_1d8 = *puVar14;
    uStack_1d0 = puVar14[1];
    local_1c8 = puVar14[2];
    uStack_1c0 = puVar14[3];
    local_158 = *param_7;
    uStack_154 = param_7[1];
    uStack_150 = param_7[2];
    uStack_14c = param_7[3];
    uStack_148 = *(undefined8 *)(param_7 + 4);
    uStack_136 = *(undefined8 *)((longlong)param_7 + 0x22);
    uStack_138 = (undefined2)((ulonglong)*(undefined8 *)((longlong)param_7 + 0x1a) >> 0x30);
    uStack_140 = (undefined2)*(undefined8 *)(param_7 + 6);
    local_13e = (undefined6)((ulonglong)*(undefined8 *)(param_7 + 6) >> 0x10);
    local_108 = (undefined1 *)0x0;
    local_100 = param_7[0x16];
    lVar23 = (longlong)local_100;
    if (lVar23 == 0) {
      local_fc = 8;
    }
    else {
      puVar22 = param_7 + 0xc;
      if (*(undefined4 **)(param_7 + 0x14) != (undefined4 *)0x0) {
        puVar22 = *(undefined4 **)(param_7 + 0x14);
      }
      FUN_14470be6c(local_128,local_100,0);
      puVar17 = local_108;
      if (local_108 == (undefined1 *)0x0) {
        puVar17 = local_128;
      }
      memcpy(puVar17,puVar22,lVar23 << 2);
    }
    local_e8 = (undefined1 *)0x0;
    local_e0 = param_7[0x1e];
    lVar23 = (longlong)local_e0;
    if (lVar23 == 0) {
      local_dc = 4;
    }
    else {
      puVar22 = param_7 + 0x18;
      if (*(undefined4 **)(param_7 + 0x1c) != (undefined4 *)0x0) {
        puVar22 = *(undefined4 **)(param_7 + 0x1c);
      }
      FUN_1447163e6(local_f8,local_e0,0);
      puVar17 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar17 = local_f8;
      }
      memcpy(puVar17,puVar22,lVar23 << 2);
    }
    local_d8 = *(undefined1 *)(param_7 + 0x20);
    FUN_140870e92(&local_158,param_1);
    lVar23 = param_1[0x1af];
    if ((longlong)(int)lVar23 == 0) {
      bVar19 = 0;
    }
    else {
      lVar3 = param_1[0x1ae];
      lVar18 = 0;
      bVar19 = 0;
      do {
        local_200 = param_8;
        local_218 = param_6;
        local_220 = param_5;
        local_228 = local_1e0;
        local_210 = &local_158;
        local_208 = &local_1d8;
        bVar12 = FUN_14019b68c(*(undefined8 *)(lVar3 + lVar18),local_1f0,local_1e8,local_1b8);
        bVar19 = bVar19 | bVar12;
        lVar18 = lVar18 + 8;
      } while ((longlong)(int)lVar23 * 8 != lVar18);
    }
    if (local_e8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar19 & 1;
}



// FUNCTION 140870e92 FUN_140870e92 body=109 status=ok
// SIG undefined FUN_140870e92(void)

void FUN_140870e92(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != (longlong *)0x0) &&
     (((iVar2 = (**(code **)(*param_2 + 0x570))(param_2), iVar2 == 3 || (iVar2 == 5)) ||
      (iVar2 == 1)))) {
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
      FUN_140694806(param_1 + 0x30,iVar2);
    }
    lVar3 = param_1 + 0x30;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    *(undefined4 *)(lVar3 + (longlong)iVar2 * 4) = uVar1;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



// FUNCTION 140870f00 FUN_140870f00 body=103 status=ok
// SIG undefined FUN_140870f00(void)

ulonglong FUN_140870f00(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140870f4a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140870f4a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
    }
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 140870f68 FUN_140870f68 body=317 status=ok
// SIG undefined FUN_140870f68(void)

void FUN_140870f68(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  double *pdVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if ((param_2 != 0) && (*(char *)(param_1 + 0xa8) == '\x01')) {
    lVar3 = FUN_1447210f0(param_2);
    if (((lVar3 != 0) &&
        ((((*(byte *)(lVar3 + 0x155) & 0x20) == 0 && (*(int *)(param_1 + 0x74) != 0)) &&
         (uVar1 = *(uint *)(param_1 + 0x70), -1 < (int)uVar1)))) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x74))) &&
         (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar3 == *plVar6)))) {
        lVar4 = FUN_1408710a5();
        lVar2 = *(longlong *)(param_2 + 0x1c8);
        if (lVar2 == 0) {
          pdVar5 = (double *)&DAT_14c8464e0;
          dVar8 = DAT_14c8464f0;
        }
        else {
          pdVar5 = (double *)(lVar2 + 0x260);
          dVar8 = *(double *)(lVar2 + 0x270);
        }
        dVar7 = *(double *)(param_1 + 0x90) - *pdVar5;
        dVar9 = *(double *)(param_1 + 0x98) - pdVar5[1];
        dVar8 = *(double *)(param_1 + 0xa0) - dVar8;
        if ((float)(dVar8 * dVar8 + dVar9 * dVar9 + dVar7 * dVar7) <=
            *(float *)(lVar4 + 0x28) * *(float *)(lVar4 + 0x28)) {
          *(float *)(param_1 + 0x84) = (float)*(double *)(lVar3 + 0x6d0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408710a5 FUN_1408710a5 body=600 status=ok
// SIG undefined FUN_1408710a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1408710a5(void)

{
  ushort uVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbc65e8 == (longlong *)0x0) {
    DAT_14cbc65f8 = 0;
    uRam000000014cbc6600 = 0;
    plVar3 = &DAT_14cbc65f8;
    _DAT_14cbc6608 = 0xffffffff;
    _DAT_14cbc65f0 = &PTR_FUN_14b72e050;
    _DAT_14cbc6610 = 0x3e80000041700000;
    _DAT_14cbc6618 = 0x457a0000;
    uRam000000014cbc661c = 0x40a00000;
    uRam000000014cbc6620 = 0x41f00000;
    uRam000000014cbc6624 = 0x44fa0000;
    _DAT_14cbc6628 = 0x14;
    _DAT_14cbc6630 = 0;
    uRam000000014cbc6638 = 0;
    _DAT_14cbc6640 = 0;
    uRam000000014cbc6648 = 0;
    _DAT_14cbc6650 = 0;
    uRam000000014cbc6658 = 0;
    _DAT_14cbc6660 = 0;
    uRam000000014cbc6668 = 0;
    _DAT_14cbc6670 = 0;
    uRam000000014cbc6678 = 0;
    DAT_14cbc65e8 = (longlong *)&DAT_14cbc65f0;
LAB_1408710d8:
    bVar5 = true;
    plVar6 = plVar3;
LAB_1408710db:
    plVar7 = DAT_14cbc65e8;
    if (*plVar6 == 0) goto LAB_1408711e4;
    plVar6 = plVar3;
    if (!bVar5) {
      plVar6 = (longlong *)(*plVar3 + 0x30);
    }
    if (*plVar6 == 0) {
      if ((DAT_14c9a1ab0 == 0) || (*plVar3 == 0)) goto LAB_140871108;
      uVar1 = *(ushort *)(*plVar3 + 0x28);
      if (((short)uVar1 < 0) ||
         ((*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1 ||
          (plVar3 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
          plVar3 == (longlong *)0x0)))) goto LAB_140871108;
      cVar2 = (**(code **)(*plVar3 + 0x2a0))(plVar3,DAT_14cbc65e8);
    }
    else {
      if ((((int)DAT_14cbc65e8[3] == *(int *)(*plVar6 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         (*plVar3 == 0)) goto LAB_140871108;
      uVar1 = *(ushort *)(*plVar3 + 0x28);
      if ((((short)uVar1 < 0) || (*(int *)(DAT_14c9a1ab0 + 0xd0) <= (int)(short)uVar1)) ||
         (plVar3 = *(longlong **)(*(longlong *)(DAT_14c9a1ab0 + 200) + (ulonglong)uVar1 * 8),
         plVar3 == (longlong *)0x0)) goto LAB_140871108;
      cVar2 = (**(code **)(*plVar3 + 0x2a8))(plVar3,DAT_14cbc65e8);
    }
    if (cVar2 == '\0') goto LAB_140871108;
  }
  else {
    plVar3 = DAT_14cbc65e8 + 1;
    if ((char)DAT_14cbc65e8[2] == '\0') goto LAB_1408710d8;
    if ((char)DAT_14cbc65e8[2] == '\x02') {
      plVar6 = (longlong *)(*plVar3 + 0x30);
      bVar5 = false;
      goto LAB_1408710db;
    }
LAB_1408711e4:
    plVar7 = DAT_14cbc65e8;
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_140871108;
    local_48 = DAT_14cbc65d8;
    local_50 = DAT_14cbc65d0;
    FUN_1448075d0(local_40);
    FUN_140024ada(local_40,plVar7);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_140871108:
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 140871304 FUN_140871304 body=1303 status=ok
// SIG undefined FUN_140871304(void)

void FUN_140871304(longlong *param_1)

{
  ushort uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 *local_140;
  code **local_138;
  longlong local_130;
  wchar_t *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  code *local_108;
  code *local_100;
  ulonglong local_f8;
  undefined4 local_ec;
  code **local_e8;
  undefined8 *local_e0;
  longlong local_d8;
  ulonglong uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  code *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_128 = (wchar_t *)param_1[9];
  local_130 = param_1[1];
  local_140 = (undefined8 *)param_1[8];
  uVar1 = *(ushort *)param_1[7];
  local_88 = (code *)*local_140;
  uStack_80 = local_140[1];
  local_78._0_3_ = (uint3)(ushort)((uVar1 & 0x1c) + (uVar1 & 0x20) * 2);
  local_148 = CONCAT22(local_148._2_2_,uVar1);
  local_138 = &local_88;
  FUN_140a0aac7(param_1[5],param_1[6],param_1[2],*param_1);
  lVar2 = *param_1;
  if (0 < *(int *)(lVar2 + 0x1c50)) {
    lVar7 = lVar2 + 0x48;
    if (*(longlong *)(lVar2 + 0x1c48) != 0) {
      lVar7 = *(longlong *)(lVar2 + 0x1c48);
    }
    uVar4 = FUN_1402d488d(*(int *)(lVar2 + 0x1c50),lVar7,param_1[8],param_1[0xb]);
    *(undefined1 *)param_1[10] = uVar4;
    plVar8 = (longlong *)param_1[0xb];
    if (((int)plVar8[1] != 0) &&
       (puVar3 = (undefined8 *)param_1[4], *(char *)((longlong)puVar3 + 0x17) == '\x01')) {
      lVar2 = param_1[6];
      lVar7 = param_1[0xd];
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      if (0 < (int)plVar8[1]) {
        lVar13 = 0x24;
        lVar14 = 0;
        local_ec = *(undefined4 *)param_1[3];
        local_e8 = (code **)param_1[0xc];
        local_e0 = (undefined8 *)param_1[2];
        do {
          local_d8 = 0;
          uStack_d0 = 0;
          iVar6 = *(int *)(*plVar8 + lVar13);
          if (((((iVar6 != 0) && (uVar5 = *(uint *)(*plVar8 + -4 + lVar13), -1 < (int)uVar5)) &&
               ((int)uVar5 < DAT_14c9647dc)) &&
              ((plVar8 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar6)))) &&
             (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
              (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))) {
            if (DAT_14caf6930 == 0) {
              local_88 = FUN_1463f2e14;
              local_100 = FUN_14081d0ea;
              local_108 = FUN_142b4ce0c;
              local_118 = &LAB_147c4f169;
              local_120 = &LAB_145fef46b;
              local_128 = L"Engine";
              local_130 = 0;
              local_138 = (code **)CONCAT44(local_138._4_4_,0x10000004);
              local_140 = (undefined8 *)CONCAT44(local_140._4_4_,0x10);
              local_148 = 0x870;
              local_110 = &local_88;
              FUN_14081cfa3(L"/Script/Engine",L"ClusterUnionComponent",&DAT_14caf6930,FUN_1463f2dec)
              ;
            }
            if ((*(int *)(DAT_14caf6930 + 0x38) <= *(int *)(plVar8[2] + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(plVar8[2] + 0x30) + (longlong)*(int *)(DAT_14caf6930 + 0x38) * 8) ==
                DAT_14caf6930 + 0x30)) {
              local_88 = (code *)*local_e0;
              uStack_80 = local_e0[1];
              local_78 = local_e0[2];
              uStack_70 = local_e0[3];
              local_a8 = local_e0[4];
              uStack_a0 = local_e0[5];
              local_98 = local_e0[6];
              local_128 = (wchar_t *)&local_d8;
              local_138 = local_e8;
              local_148 = local_ec;
              local_140 = puVar3;
              local_130 = lVar7;
              (**(code **)(*plVar8 + 0x9a8))(plVar8,&local_a8,&local_88,lVar2);
              uVar9 = uStack_c0;
              uVar11 = uStack_d0 & 0xffffffff;
              if (((int)uStack_d0 == 0 | *(byte *)(param_1[4] + 0x18)) == 1) {
                lVar12 = (longlong)(int)uStack_c0;
                uVar5 = (int)uStack_c0 + 1;
                uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar5);
                iVar6 = (int)uStack_d0;
                if (uStack_c0._4_4_ < uVar5) {
                  local_f8 = uVar11;
                  FUN_1446f48e2(&local_c8,uVar9 & 0xffffffff);
                  iVar6 = (int)local_f8;
                }
                *(int *)(local_c8 + lVar12 * 4) = (int)lVar14;
                uVar11 = uStack_d0 & 0xffffffff;
                if ((int)uStack_d0 == 0 || iVar6 == 0) goto LAB_1408714c1;
              }
              uVar9 = uStack_b0;
              iVar6 = (uint)uStack_b0;
              lVar12 = (longlong)(int)(uint)uStack_b0;
              uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 + (uint)uVar11);
              local_f8 = uVar11;
              if ((uint)(uStack_b0._4_4_ - iVar6) < (uint)uVar11) {
                FUN_1414fa4c8(&local_b8,uVar9 & 0xffffffff);
              }
              FUN_144a80303(lVar12 * 0x48 + local_b8,local_d8,local_f8);
            }
          }
LAB_1408714c1:
          if (local_d8 != 0) {
            FUN_1400020a8();
          }
          lVar14 = lVar14 + 1;
          plVar8 = (longlong *)param_1[0xb];
          lVar13 = lVar13 + 0x48;
        } while (lVar14 < (int)plVar8[1]);
        if (0 < (longlong)(int)uStack_c0) {
          uVar9 = (longlong)(int)uStack_c0 + 1;
          do {
            plVar8 = (longlong *)param_1[0xb];
            uVar5 = *(uint *)(local_c8 + -8 + uVar9 * 4);
            iVar6 = (int)plVar8[1];
            iVar10 = ~uVar5 + iVar6;
            if (iVar10 != 0) {
              if (0 < iVar10) {
                iVar10 = 1;
              }
              memmove((void *)(*plVar8 + (longlong)(int)uVar5 * 0x48),
                      (void *)(*plVar8 + (longlong)(iVar6 - iVar10) * 0x48),(longlong)iVar10 * 0x48)
              ;
              iVar6 = (int)plVar8[1];
            }
            *(int *)(plVar8 + 1) = iVar6 + -1;
            uVar9 = uVar9 - 1;
          } while (1 < uVar9);
          plVar8 = (longlong *)param_1[0xb];
        }
      }
      uVar9 = uStack_b0;
      if ((*(char *)(param_1[4] + 0x18) != '\0') && ((uint)uStack_b0 != 0)) {
        iVar6 = (int)plVar8[1];
        *(uint *)(plVar8 + 1) = iVar6 + (uint)uStack_b0;
        if ((uint)(*(int *)((longlong)plVar8 + 0xc) - iVar6) < (uint)uStack_b0) {
          FUN_1414fa4c8(plVar8,iVar6);
        }
        FUN_144a80303((longlong)iVar6 * 0x48 + *plVar8,local_b8,uVar9 & 0xffffffff);
        plVar8 = (longlong *)param_1[0xb];
      }
      *(byte *)param_1[10] = *(byte *)param_1[10] & (int)plVar8[1] != 0;
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if (local_b8 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087181c FUN_14087181c body=335 status=ok
// SIG undefined FUN_14087181c(void)

void FUN_14087181c(longlong param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  void *pvVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar13 = (ulonglong)*(int *)(param_1 + 0xf0);
  if (0 < (longlong)uVar13) {
    lVar14 = uVar13 * 0x30 + 0x28;
    do {
      lVar11 = (uVar13 - 1) * 0x30;
      cVar6 = *(char *)(*(longlong *)(param_1 + 0xe8) + 8 + lVar11);
      lVar5 = *(longlong *)(param_1 + 0xe8) + lVar11;
      if ((cVar6 == '\x01') && (*(int *)(lVar5 + 4) <= param_2)) {
        cVar6 = '\0';
        *(undefined1 *)(lVar5 + 8) = 0;
        *(undefined1 *)(lVar5 + 0x18) = 0;
      }
      if ((*(char *)(lVar5 + 0x18) == '\0') && (cVar6 == '\0')) {
        uVar10 = uVar13 & 0xffffffff;
        lVar7 = lVar14;
        if ((longlong)uVar13 < (longlong)*(int *)(param_1 + 0xf0)) {
          do {
            piVar1 = (int *)(*(longlong *)(param_1 + 0xe8) + lVar7);
            *piVar1 = *piVar1 - *(int *)(lVar5 + 0x2c);
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            lVar7 = lVar7 + 0x30;
          } while ((int)uVar9 < *(int *)(param_1 + 0xf0));
        }
        iVar2 = *(int *)(lVar5 + 0x2c);
        if ((longlong)iVar2 != 0) {
          iVar4 = *(int *)(param_1 + 0xc0);
          iVar12 = iVar4 - (*(int *)(lVar5 + 0x28) + iVar2);
          if (iVar12 != 0) {
            pvVar8 = (void *)((longlong)*(int *)(lVar5 + 0x28) * 0x68 +
                             *(longlong *)(param_1 + 0xb8));
            memmove(pvVar8,(void *)((longlong)iVar2 * 0x68 + (longlong)pvVar8),
                    (longlong)iVar12 * 0x68);
            iVar4 = *(int *)(param_1 + 0xc0);
          }
          *(int *)(param_1 + 0xc0) = iVar4 - iVar2;
        }
        pvVar8 = (void *)(lVar11 + *(longlong *)(param_1 + 0xe8));
        FUN_14087196b(pvVar8,1);
        uVar9 = *(uint *)(param_1 + 0xf0);
        if (uVar13 != uVar9) {
          memmove(pvVar8,(void *)((longlong)pvVar8 + 0x30),
                  (longlong)(int)(uVar9 - (int)uVar13) * 0x30);
          uVar9 = *(uint *)(param_1 + 0xf0);
        }
        *(uint *)(param_1 + 0xf0) = uVar9 - 1;
      }
      lVar14 = lVar14 + -0x30;
      bVar3 = 1 < (longlong)uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 14087196b FUN_14087196b body=27 status=ok
// SIG undefined FUN_14087196b(void)

void FUN_14087196b(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 8);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1 = pcVar1 + 0x30;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140871986 FUN_140871986 body=761 status=ok
// SIG undefined FUN_140871986(void)

void FUN_140871986(undefined8 *param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_148 = *(undefined8 *)((longlong)param_2 + 0x80);
  local_158 = *(undefined8 *)((longlong)param_2 + 0x70);
  uStack_150 = *(undefined8 *)((longlong)param_2 + 0x78);
  local_48 = *(undefined8 *)((longlong)param_2 + 0x98);
  local_58 = *(undefined8 *)((longlong)param_2 + 0x88);
  uStack_50 = *(undefined8 *)((longlong)param_2 + 0x90);
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined8 *)((longlong)param_2 + 0x80) = local_148;
  *(undefined8 *)((longlong)param_2 + 0x70) = local_158;
  *(undefined8 *)((longlong)param_2 + 0x78) = uStack_150;
  *(undefined8 *)((longlong)param_2 + 0x98) = local_48;
  *(undefined4 *)((longlong)param_2 + 0x88) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_2 + 0x8c) = local_58._4_4_;
  *(undefined4 *)((longlong)param_2 + 0x90) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0x94) = uStack_50._4_4_;
  if (((((*(int *)(param_1 + 2) != 0) &&
        (uVar1 = *(uint *)((longlong)param_1 + 0xc), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 2))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
      (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))) {
    lVar5 = plVar7[0x15];
    local_188 = param_1 + 3;
    FUN_140871c80(&local_158,lVar5,plVar7,param_1 + 8);
    memcpy(param_2,&local_158,0x100);
    *(undefined8 *)((longlong)param_2 + 0xf8) = *param_1;
    lVar4 = (**(code **)(*plVar7 + 0x7b8))(plVar7,0,1,0xffffffff);
    if (lVar4 == 0) {
      if (lVar5 != 0) {
        lVar4 = FUN_144a7ce84();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          local_168 = param_1[10];
          local_178 = *(undefined4 *)(param_1 + 8);
          uStack_174 = *(undefined4 *)((longlong)param_1 + 0x44);
          uStack_170 = *(undefined4 *)(param_1 + 9);
          uStack_16c = *(undefined4 *)((longlong)param_1 + 0x4c);
          uVar6 = FUN_147456f4c(lVar5,&local_178,2);
          puVar8 = (undefined8 *)((longlong)param_2 + 0xb0);
          FUN_14485c47a(puVar8,uVar6);
          cVar2 = FUN_144729dda(puVar8);
          if (cVar2 == '\0') {
            lVar5 = *(longlong *)(lVar5 + 0x548);
            if ((DAT_14c950c29 == '\x01') && (lVar5 != 0)) {
              FUN_1456cec3c(lVar5);
            }
            local_158 = 0;
            FUN_14485c47a(&local_158,lVar5);
            *puVar8 = local_158;
          }
        }
      }
    }
    else {
      lVar5 = FUN_14034b308(lVar4);
      if (lVar5 == 0) {
        *(undefined4 *)((longlong)param_2 + 0xb0) = 0;
        iVar3 = 0;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        *(uint *)((longlong)param_2 + 0xb0) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar3 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar3 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar3 = *(int *)(lVar5 + 0x10);
          bVar10 = iVar3 == 0;
          if (bVar10) {
            *(int *)(lVar5 + 0x10) = iVar9;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar3 = iVar9;
          }
        }
      }
      *(int *)((longlong)param_2 + 0xb4) = iVar3;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140871c80 FUN_140871c80 body=358 status=ok
// SIG undefined FUN_140871c80(void)

void * FUN_140871c80(void *param_1,undefined8 param_2,longlong param_3,undefined8 *param_4,
                    undefined8 *param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  memset(param_1,0,0x100);
  uVar2 = param_4[2];
  uVar7 = param_4[1];
  *(undefined8 *)((longlong)param_1 + 0x10) = *param_4;
  *(undefined8 *)((longlong)param_1 + 0x18) = uVar7;
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar2;
  uVar2 = *param_4;
  uVar7 = param_4[1];
  *(undefined8 *)((longlong)param_1 + 0x38) = param_4[2];
  *(undefined8 *)((longlong)param_1 + 0x28) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x30) = uVar7;
  uVar2 = *param_5;
  uVar7 = param_5[1];
  *(undefined8 *)((longlong)param_1 + 0x50) = param_5[2];
  *(undefined8 *)((longlong)param_1 + 0x40) = uVar2;
  *(undefined8 *)((longlong)param_1 + 0x48) = uVar7;
  uVar3 = *(undefined4 *)param_5;
  uVar4 = *(undefined4 *)((longlong)param_5 + 4);
  uVar5 = *(undefined4 *)(param_5 + 1);
  uVar6 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined8 *)((longlong)param_1 + 0x68) = param_5[2];
  *(undefined4 *)((longlong)param_1 + 0x58) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x60) = uVar5;
  *(undefined4 *)((longlong)param_1 + 100) = uVar6;
  FUN_140871de8(&local_58,param_2);
  *(undefined4 *)((longlong)param_1 + 0xb8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0xbc) = uStack_54;
  *(undefined4 *)((longlong)param_1 + 0xc0) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uStack_4c;
  *(undefined4 *)((longlong)param_1 + 200) = local_48;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uStack_44;
  *(undefined4 *)((longlong)param_1 + 0xd0) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uStack_3c;
  if (param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xd8) = 0;
    iVar9 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)((longlong)param_1 + 0xd8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar9 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar9 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar9 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar8;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar9 = iVar8;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar9;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140871de8 FUN_140871de8 body=186 status=ok
// SIG undefined FUN_140871de8(void)

uint * FUN_140871de8(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffff;
  *(undefined1 *)(param_1 + 7) = 1;
  if (DAT_14cad83b0 == '\x01') {
    FUN_144a61b4f();
  }
  return param_1;
}



// FUNCTION 140871ea2 thunk_FUN_140f51a94 body=5 status=ok
// SIG undefined thunk_FUN_140f51a94(void)

void thunk_FUN_140f51a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1e7df0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140f51afa(param_1 + 0x12);
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140871ea8 FUN_140871ea8 body=1136 status=ok
// SIG undefined FUN_140871ea8(void)

void FUN_140871ea8(longlong param_1,double *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  int iVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  dVar7 = *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x28);
  dVar9 = *(double *)(param_1 + 0x30);
  dVar22 = *(double *)(param_1 + 0x38);
  dVar27 = *(double *)(param_1 + 0x38);
  dVar21 = dVar7 * 0.0 - dVar8 * 1.0;
  dVar5 = dVar8 * 0.0 - dVar9 * 0.0;
  dVar6 = dVar9 * 1.0 - dVar7 * 0.0;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  dVar21 = dVar21 + dVar21;
  dVar4 = 1.0 / *(double *)(param_1 + 0x60);
  dVar23 = dVar7 * 1.0 - dVar8 * 0.0;
  dVar24 = dVar8 * 0.0 - dVar9 * 1.0;
  dVar29 = dVar9 * 0.0 - dVar7 * 0.0;
  dVar24 = dVar24 + dVar24;
  dVar29 = dVar29 + dVar29;
  dVar23 = dVar23 + dVar23;
  dVar20 = 1.0 / *(double *)(param_1 + 0x68);
  dVar26 = param_2[2] - *(double *)(param_1 + 0x50);
  dVar25 = param_2[1] - *(double *)(param_1 + 0x48);
  dVar28 = *param_2 - *(double *)(param_1 + 0x40);
  dVar24 = (dVar23 * dVar22 + 0.0 + (dVar29 * dVar7 - dVar24 * dVar8)) * dVar20 * dVar26 +
           ((dVar23 * dVar8 - dVar29 * dVar9) + dVar22 * dVar24 + 0.0) * dVar20 * dVar28 +
           ((dVar9 * dVar24 - dVar7 * dVar23) + dVar27 * dVar29 + 1.0) * dVar20 * dVar25;
  dVar23 = dVar4;
  if (dVar4 <= dVar20) {
    dVar23 = dVar20;
  }
  dVar27 = dVar26 * (dVar21 * dVar22 + 0.0 + (dVar6 * dVar7 - dVar5 * dVar8)) * dVar4 +
           dVar28 * ((dVar21 * dVar8 - dVar6 * dVar9) + dVar22 * dVar5 + 1.0) * dVar4 +
           dVar25 * ((dVar9 * dVar5 - dVar7 * dVar21) + dVar27 * dVar6 + 0.0) * dVar4;
  dVar29 = (double)(float)((double)(float)dVar23 * param_2[6]);
  uVar1 = *(uint *)(param_1 + 0x84);
  uVar13 = *(uint *)(param_1 + 0x80);
  dVar22 = (dVar24 + dVar29) * (double)(int)uVar1;
  dVar25 = (dVar24 - dVar29) * (double)(int)uVar1;
  dVar23 = (dVar27 - dVar29) * (double)(int)uVar13;
  dVar27 = (dVar27 + dVar29) * (double)(int)uVar13;
  uVar18 = (ulonglong)(longlong)ROUND(dVar23 + dVar23 + -0.5) >> 1;
  uVar19 = uVar18 & 0xffffffff;
  if ((int)uVar18 < 1) {
    uVar19 = 0;
  }
  uVar18 = (ulonglong)(longlong)ROUND(dVar25 + dVar25 + -0.5) >> 1;
  uVar16 = 0;
  if (0 < (int)uVar18) {
    uVar16 = uVar18 & 0xffffffff;
  }
  uVar12 = -(int)((ulonglong)(longlong)ROUND(-0.5 - (dVar27 + dVar27)) >> 1);
  if ((int)uVar13 <= (int)uVar12) {
    uVar12 = uVar13;
  }
  uVar13 = (uint)(((longlong)ROUND(-0.5 - (dVar22 + dVar22)) & 0xfffffffffffffffeU) * -0x80000000 >>
                 0x20);
  if ((int)uVar13 < (int)uVar1) {
    uVar1 = uVar13;
  }
  iVar17 = (int)uVar19;
  uVar18 = uVar19;
  if (iVar17 < (int)uVar12) {
    uVar18 = (ulonglong)uVar12;
  }
  iVar15 = (int)uVar16;
  uVar10 = (ulonglong)uVar1;
  if ((iVar15 < (int)uVar1) || (uVar10 = uVar16, iVar17 < (int)uVar12)) {
    uVar19 = uVar16 << 0x20 | uVar19;
    uVar16 = uVar10 << 0x20 | uVar18;
    iVar2 = *(int *)(param_1 + 0xa0);
    lVar14 = (longlong)iVar2;
    *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
      FUN_140872318(param_1 + 0x98,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x98);
    *(ulonglong *)(lVar3 + lVar14 * 0x14) = uVar19;
    *(ulonglong *)(lVar3 + 8 + lVar14 * 0x14) = uVar16;
    *(byte *)(lVar3 + 0x10 + lVar14 * 0x14) = param_3;
    if (iVar2 == 0) {
      *(ulonglong *)(param_1 + 0xa8) = uVar19;
      *(ulonglong *)(param_1 + 0xb0) = uVar16;
      *(byte *)(param_1 + 0xb8) = param_3;
    }
    else {
      if (*(int *)(param_1 + 0xa8) < iVar17) {
        iVar17 = *(int *)(param_1 + 0xa8);
      }
      *(int *)(param_1 + 0xa8) = iVar17;
      if (*(int *)(param_1 + 0xac) < iVar15) {
        iVar15 = *(int *)(param_1 + 0xac);
      }
      *(int *)(param_1 + 0xac) = iVar15;
      iVar17 = *(int *)(param_1 + 0xb0);
      if (*(int *)(param_1 + 0xb0) < (int)uVar18) {
        iVar17 = (int)uVar18;
      }
      *(int *)(param_1 + 0xb0) = iVar17;
      iVar17 = *(int *)(param_1 + 0xb4);
      if (*(int *)(param_1 + 0xb4) < (int)uVar10) {
        iVar17 = (int)uVar10;
      }
      *(int *)(param_1 + 0xb4) = iVar17;
      bVar11 = (byte)*(undefined4 *)(param_1 + 0xb8);
      if (param_3 <= bVar11) {
        param_3 = bVar11;
      }
      *(byte *)(param_1 + 0xb8) = param_3;
    }
  }
  return;
}



// FUNCTION 140872318 FUN_140872318 body=373 status=ok
// SIG undefined FUN_140872318(void)

void FUN_140872318(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408723a3;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_1408723a3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 14087248e FUN_14087248e body=142 status=ok
// SIG undefined FUN_14087248e(void)

ulonglong FUN_14087248e(longlong *param_1)

{
  code *pcVar1;
  undefined8 ****ppppuVar2;
  undefined8 unaff_RBX;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 8))(param_1,local_50);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar2 = (undefined8 ****)local_48[0];
    if (local_30 < 0x19) {
      ppppuVar2 = local_48;
    }
    (*pcVar1)(ppppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_20) & 0xffffffff;
}



// FUNCTION 14087251e FUN_14087251e body=201 status=ok
// SIG undefined FUN_14087251e(void)

undefined8 * FUN_14087251e(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x18);
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 8;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (lVar4 == 0) {
    *(undefined4 *)(param_2 + 1) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar4 + 0xc);
    *(uint *)(param_2 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    iVar2 = *(int *)(lVar4 + 0x10);
    if (*(int *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar5;
      }
    }
  }
  *(int *)((longlong)param_2 + 0xc) = iVar2;
  *(undefined1 *)(param_2 + 5) = 7;
  uVar3 = 7;
  if ((DAT_14c9a8cf4 & 0x20) != 0) {
    uVar3 = 0;
  }
  *(undefined1 *)(param_2 + 6) = uVar3;
  return param_2;
}



// FUNCTION 1408725e8 FUN_1408725e8 body=57 status=ok
// SIG undefined FUN_1408725e8(void)

void FUN_1408725e8(longlong param_1)

{
  FUN_140872622();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_140872868(param_1 + 0x520);
  }
  FUN_14078a7c0(param_1 + 0x7c0);
  FUN_140633582(param_1);
  return;
}



// FUNCTION 140872622 FUN_140872622 body=581 status=ok
// SIG undefined FUN_140872622(void)

void FUN_140872622(code *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*(longlong *)param_1 + 0x4c0))(param_1,0);
  if (DAT_14cae8b20 == 0) {
    local_40 = &local_28;
    local_28 = (code *)&LAB_14355090c;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147b8e16d;
    local_50 = (code *)&LAB_140810a38;
    local_58 = L"Engine";
    local_60 = 0x800000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar4 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_1468c5283;
    local_50 = FUN_142809da0;
    local_58 = L"Engine";
    local_60 = 0x400000000;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 != 0) {
    iVar1 = *(int *)(lVar4 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar5 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar4 + 0x30)) {
        lVar5 = 0;
      }
    } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if (lVar5 != 0) {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
        local_28 = param_1;
        if ((param_1 != (code *)0x0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(param_1);
        }
        FUN_144a61248(lVar5 + 0xa0,&local_28,0);
      }
    }
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140872868 FUN_140872868 body=955 status=ok
// SIG undefined FUN_140872868(void)

void FUN_140872868(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    if (0 < DAT_14cae9144) {
      FUN_140872fe2(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
    if ((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
         (uVar1 = *(uint *)(param_1 + 9), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) &&
       (((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)((longlong)param_1 + 0x4c))) &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar7 = *plVar4, lVar7 != 0)))))) {
      if (DAT_14cac9ca8 == 0) {
        local_50 = &local_38;
        local_38 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1478c0a72;
        local_60 = &LAB_1417b2375;
        local_68 = L"Engine";
        local_70 = 0x1000000000;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
        if (param_1[0x2f] != 0) {
          FUN_14480f766(lVar7 + 0x2d0);
        }
        if (param_1[0x30] != 0) {
          FUN_14480f766(lVar7 + 0x2b8);
        }
      }
    }
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    FUN_140872fe2(param_1);
    (**(code **)(*param_1 + 0x88))(param_1);
    FUN_140872c3a(param_1);
    if (((((*(int *)((longlong)param_1 + 0x4c) == 0) ||
          (uVar1 = *(uint *)(param_1 + 9), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
        ((plVar4 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x4c))))) ||
       (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (*plVar4 == 0)))) {
      FUN_140872c8a(param_1);
    }
    else {
      uVar1 = *(uint *)(*plVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar6 = *(int *)(lVar7 + 0x10);
      if (iVar6 == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar6 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar6 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar5;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar6 = iVar5;
        }
        FUN_140872c8a(param_1);
        if (iVar6 == 0) goto LAB_14087288c;
      }
      else {
        FUN_140872c8a(param_1);
      }
      if (((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
         ((plVar4 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar4 != (longlong *)0x0 &&
          ((((int)plVar4[2] == iVar6 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
           (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))))) {
        uVar2 = FUN_140566488();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
        if (plVar4 != (longlong *)0x0) {
          uVar2 = FUN_140566488();
          plVar3 = (longlong *)FUN_144718840(plVar4,uVar2);
          if ((plVar4 != plVar3) && (plVar3 != (longlong *)0x0)) {
            (**(code **)(*plVar3 + 0x50))(plVar3,0);
          }
        }
      }
    }
  }
LAB_14087288c:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140872c3a FUN_140872c3a body=80 status=ok
// SIG undefined FUN_140872c3a(void)

void FUN_140872c3a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined8 *)(param_1 + 0xf8) = 0;
  plVar3 = *(longlong **)(param_1 + 0x100);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x100) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140872c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140872c8a FUN_140872c8a body=204 status=ok
// SIG undefined FUN_140872c8a(void)

void FUN_140872c8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  (**(code **)(*param_1 + 0x28))();
  lVar3 = param_1[8];
  if (lVar3 != 0) {
    param_1[8] = 0;
    lVar4 = param_1[3];
    lVar5 = param_1[4];
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + 0x20) = lVar5;
      param_1[3] = 0;
    }
    if (lVar5 == 0) {
      *(longlong *)(lVar3 + 0x50) = lVar4;
    }
    else {
      *(longlong *)(lVar5 + 0x18) = lVar4;
      param_1[4] = 0;
    }
  }
  FUN_140872d56(param_1,0);
  FUN_140872e36(param_1,0);
  param_1[0x1e] = 0;
  FUN_1408735ae(param_1);
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0;
  param_1[0x24] = 0;
  plVar6 = (longlong *)param_1[0x25];
  if (plVar6 != (longlong *)0x0) {
    param_1[0x25] = 0;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140872d52. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140872d56 FUN_140872d56 body=223 status=ok
// SIG undefined FUN_140872d56(void)

void FUN_140872d56(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  bool bVar8;
  
  plVar6 = *(longlong **)(param_1 + 0x58);
  if (plVar6 == (longlong *)0x0) {
    lVar7 = 0;
  }
  else {
    iVar4 = (int)plVar6[1];
    lVar7 = 0;
    do {
      if (iVar4 == 0) goto LAB_140872d71;
      LOCK();
      iVar3 = (int)plVar6[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar8);
    lVar7 = *(longlong *)(param_1 + 0x50);
    LOCK();
    plVar2 = plVar6 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_140872d71:
  if (lVar7 == param_2) {
    return;
  }
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_2 + 8);
    plVar6 = *(longlong **)(param_2 + 0x10);
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
      goto LAB_140872ddd;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140872ddd:
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  plVar2 = *(longlong **)(param_1 + 0x58);
  *(longlong **)(param_1 + 0x58) = plVar6;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140872e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140872e36 FUN_140872e36 body=263 status=ok
// SIG undefined FUN_140872e36(void)

void FUN_140872e36(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  if (plVar5 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar4 = (int)plVar5[1];
    lVar6 = 0;
    do {
      if (iVar4 == 0) goto LAB_140872e51;
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(plVar5 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
    } while (!bVar7);
    lVar6 = *(longlong *)(param_1 + 0x60);
    LOCK();
    plVar2 = plVar5 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_140872e51:
  if (lVar6 == param_2) {
    return;
  }
  if (param_2 == 0) {
    param_2 = 0;
    FUN_140872d56(param_1,0);
  }
  else {
    FUN_140872d56(param_1,*(undefined8 *)(param_2 + 0x40));
    if (*(longlong *)(param_2 + 0x40) == 0) {
      param_2 = 0;
    }
    else {
      plVar5 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x118);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
        goto LAB_140872ea0;
      }
    }
  }
  plVar5 = (longlong *)0x0;
LAB_140872ea0:
  *(longlong *)(param_1 + 0x60) = param_2;
  plVar2 = *(longlong **)(param_1 + 0x68);
  *(longlong **)(param_1 + 0x68) = plVar5;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140872ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140872f3e FUN_140872f3e body=164 status=ok
// SIG undefined FUN_140872f3e(void)

void FUN_140872f3e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = param_1[0x2a];
  iVar1 = (int)param_1[0x2b];
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  if ((longlong)iVar1 != 0) {
    lVar4 = (longlong)iVar1 << 4;
    lVar3 = lVar2;
    do {
      (**(code **)(*param_1 + 0x80))(param_1,lVar3);
      lVar3 = lVar3 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (*(int *)((longlong)param_1 + 0x20c) != 0) {
    FUN_1488729ba(param_1 + 0x40,0);
  }
  FUN_1403d7d42(lVar2,iVar1);
  if (lVar2 != 0) {
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 140872fe2 FUN_140872fe2 body=662 status=ok
// SIG undefined FUN_140872fe2(void)

void FUN_140872fe2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  DWORD DVar5;
  DWORD DVar6;
  DWORD DVar7;
  LPVOID lpTlsValue;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_140873266;
    }
  }
  else {
LAB_140873266:
    if (DAT_14c950c28 != '\0') goto LAB_140873039;
  }
  iVar1 = *(int *)(param_1 + 0x168);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x160);
    lVar10 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar10);
      if (((lVar4 != 0) && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)) &&
         ((*(uint *)(lVar4 + 8) & 0x18000) == 0)) {
        DVar6 = DAT_14c75ec34;
        if (DAT_14c75ec34 == 0xffffffff) {
          DVar6 = TlsAlloc();
          DVar7 = 0xffffffff;
          LOCK();
          bVar11 = DAT_14c75ec34 != 0xffffffff;
          DVar5 = DVar6;
          if (bVar11) {
            DVar7 = DAT_14c75ec34;
            DVar5 = DAT_14c75ec34;
          }
          DAT_14c75ec34 = DVar5;
          UNLOCK();
          if (bVar11) {
            TlsFree(DVar6);
            DVar6 = DVar7;
          }
        }
        lpTlsValue = TlsGetValue(DVar6);
        if (lpTlsValue == (LPVOID)0x0) {
          lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
          FUN_141073f92(lpTlsValue);
          FUN_140fddf04(lpTlsValue);
          TlsSetValue(DVar6,lpTlsValue);
        }
        if (((*(char *)((longlong)lpTlsValue + 0x20) == '\0') &&
            ((*(byte *)(lVar4 + 0x290) | 4) == 5)) &&
           ((plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28),
            *plVar8 != 0 && (plVar8[1] != 0)))) {
          FUN_145750376(lVar4);
        }
        plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28);
        if ((*plVar8 == 0) || (plVar8[1] == 0)) {
          FUN_140873510(lVar4 + 0x138);
        }
        else {
          FUN_14087345e(lVar4 + 0x28);
        }
        FUN_140873278(lVar4);
        if (((((*(int *)(param_1 + 0x4c) != 0) &&
              (uVar2 = *(uint *)(param_1 + 0x48), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
            && ((plVar8 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar8 != (longlong *)0x0 && ((int)plVar8[2] == *(int *)(param_1 + 0x4c))))) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
          lVar9 = *plVar8;
          if ((*(uint *)(plVar8 + 1) & 0x10200000) != 0) {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x18000) == 0) {
            FUN_1405691ed(lVar4,0x35);
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
LAB_140873039:
  if (*(int *)(param_1 + 0x16c) < 0) {
    *(undefined4 *)(param_1 + 0x168) = 0;
    FUN_141888aca(param_1 + 0x160,0);
    return;
  }
  *(undefined4 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 140873278 FUN_140873278 body=178 status=ok
// SIG undefined FUN_140873278(void)

void FUN_140873278(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14087332c(param_1 + 0x2e0);
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 == 0) goto LAB_1408732f3;
  if (*(char *)(param_1 + 0x41c) == '\x01') {
    *(undefined1 *)(param_1 + 0x41c) = 0;
  }
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_1408732d0;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1408732d0:
    local_20 = param_1 + 0x210;
  }
  local_28 = param_1;
  FUN_140873c04(lVar1);
  *(undefined8 *)(param_1 + 0x3b0) = 0;
LAB_1408732f3:
  *(undefined1 *)(param_1 + 0x290) = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087332c FUN_14087332c body=216 status=ok
// SIG undefined FUN_14087332c(void)

void FUN_14087332c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1[1] == 0) {
    uVar7 = 0xffff;
    uVar8 = 0;
  }
  else {
    uVar7 = *(uint *)(param_1[1] + 0x30);
    uVar8 = uVar7 & 0xffff0000;
  }
  param_1[1] = 0;
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    param_1[2] = 0;
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((((short)uVar7 != -1) && (lVar5 = *param_1, lVar5 != 0)) &&
     ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) && (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
      FUN_140873404(lVar5,uVar8 | uVar7 & 0xffff);
    }
  }
  *param_1 = 0;
  return;
}



// FUNCTION 140873404 FUN_140873404 body=90 status=ok
// SIG undefined FUN_140873404(void)

void FUN_140873404(longlong param_1)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 0x270) = *(longlong *)(param_1 + 0x270) + 1;
  FUN_14009d5de(*(undefined8 *)(param_1 + 0x548));
  FUN_1403b3b6e(param_1);
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x80);
  if ((uVar1 & 0x14) == 0 && (uVar1 & 0x1e0) != 0) {
    *(uint *)(*(longlong *)(param_1 + 0x5d8) + 0x80) = DAT_14c760fec & 0xfffffffb;
  }
  return;
}



// FUNCTION 14087345e FUN_14087345e body=176 status=ok
// SIG undefined FUN_14087345e(void)

void FUN_14087345e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140873510(param_1 + 0x22);
  lVar4 = (**(code **)(*param_1 + 0x10))(param_1);
  local_28 = *(undefined8 *)(lVar4 + 8);
  plVar3 = *(longlong **)(lVar4 + 0x10);
  if (plVar3 == (longlong *)0x0) {
    local_20 = (longlong *)0x0;
    FUN_140873fc6(param_1 + 2);
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    local_20 = plVar3;
    FUN_140873fc6(param_1 + 2);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140873510 FUN_140873510 body=157 status=ok
// SIG undefined FUN_140873510(void)

void FUN_140873510(void)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  uint local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar3 = (uint *)FUN_14027385c();
  if ((((puVar3 != (uint *)0x0) && (puVar3[1] != 0)) && (uVar1 = *puVar3, -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && (*(uint *)(plVar4 + 2) == puVar3[1])) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      local_10 = puVar3[2];
      local_18 = lVar2;
      FUN_140873dd8(lVar2 + 0x430);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408735ae FUN_1408735ae body=1621 status=ok
// SIG undefined FUN_1408735ae(void)

void FUN_1408735ae(longlong param_1)

{
  longlong *plVar1;
  uint *puVar2;
  undefined8 uVar3;
  uint *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auStack_e8 [40];
  undefined8 *local_c0;
  uint *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined1 local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0xa0);
  puVar2 = (uint *)(param_1 + 0xb0);
  iVar12 = *(int *)(param_1 + 200);
  if (iVar12 == 0) {
    uVar17 = 1;
    uVar11 = 0;
    iVar14 = 0;
    iVar10 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0xc0);
    if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
      puVar4 = puVar2;
    }
    uVar16 = *puVar4;
    if (uVar16 == 0) {
      iVar14 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar14 = iVar12 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar14 = 0;
      do {
        if (uVar15 == uVar11) {
          iVar8 = 1;
          goto LAB_140873608;
        }
        iVar14 = iVar14 + 0x20;
        uVar16 = puVar4[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar11 = 0;
      iVar14 = 0;
    }
    uVar17 = (ulonglong)(-uVar16 & uVar16);
    uVar15 = uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar10) {
      iVar10 = iVar12;
    }
  }
  iVar8 = iVar12;
  if (iVar10 != iVar12) {
    uVar16 = 0xffffffff;
    do {
      lVar13 = *plVar1;
      lVar5 = (longlong)iVar10 * 0x38;
      if (*(longlong *)(lVar13 + 0x28 + lVar5) != 0) {
        local_c0 = (undefined8 *)(lVar13 + lVar5 + 0x28);
        local_b0 = FUN_1402b888a(lVar13 + lVar5,param_1 + 0x90);
        if (local_b0 != 0) {
          local_99 = 2;
          local_a8 = FUN_14479d2ce(param_1 + 0x48);
          local_98 = *(undefined8 *)(param_1 + 8);
          uStack_90 = *(uint **)(param_1 + 0x10);
          if (uStack_90 == (uint *)0x0) {
            local_b8 = (uint *)0x0;
          }
          else {
            LOCK();
            uStack_90[3] = uStack_90[3] + 1;
            UNLOCK();
            local_b8 = uStack_90;
          }
          local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
          local_50 = 0;
          FUN_1402b8912(&local_78,&local_98,&local_a8,&local_99);
          if (local_b8 != (uint *)0x0) {
            LOCK();
            puVar4 = local_b8 + 3;
            *puVar4 = *puVar4 - 1;
            UNLOCK();
            if (*puVar4 == 0) {
              (**(code **)(*(longlong *)local_b8 + 0x10))();
            }
          }
          if (*(code **)(&DAT_14c9a8600 + (uint)*(byte *)(local_b0 + 0x28) * 0x120) != (code *)0x0)
          {
            (**(code **)(&DAT_14c9a8600 + (uint)*(byte *)(local_b0 + 0x28) * 0x120))
                      (local_b0 + 8,&local_78,local_c0);
          }
          FUN_144a5ac3a(&local_78);
        }
        *local_c0 = 0;
        iVar8 = *(int *)(param_1 + 200);
      }
      uVar16 = uVar16 & ~(uint)uVar17;
      puVar4 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar4 = puVar2;
      }
      iVar10 = (int)uVar11;
      lVar13 = (longlong)iVar10;
      uVar9 = puVar4[lVar13] & uVar16;
      if (uVar9 == 0) {
        iVar6 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar6 = iVar8 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar10) {
          iVar7 = iVar10;
        }
        if (iVar10 < iVar6) {
          lVar5 = 0;
          do {
            uVar9 = puVar4[lVar13 + lVar5 + 1];
            if (uVar9 != 0) {
              uVar11 = (ulonglong)(iVar10 + (int)lVar5 + 1);
              uVar16 = 0xffffffff;
              goto LAB_1408736fb;
            }
            iVar14 = iVar14 + 0x20;
            lVar5 = lVar5 + 1;
          } while (iVar7 - lVar13 != lVar5);
          uVar16 = 0xffffffff;
          iVar10 = iVar7;
        }
        uVar11 = (ulonglong)(iVar10 + 1);
        iVar10 = iVar8;
      }
      else {
LAB_1408736fb:
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar15 = uVar17 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar8 <= iVar10) {
          iVar10 = iVar8;
        }
      }
    } while (iVar10 != iVar12);
  }
LAB_140873608:
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar13 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar13 = *(longlong *)(param_1 + 0xe0);
    }
    iVar12 = *(int *)(param_1 + 0xe8);
    iVar14 = iVar12 + 3;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    if (*(int *)(param_1 + 0xa8) - *(int *)(param_1 + 0xd4) < iVar14 >> 2) {
      local_98 = 0x100000000;
      local_88 = 0xffffffff;
      uStack_80 = 0;
      uStack_90 = puVar2;
      if (iVar8 == 0) {
        iVar12 = 0;
      }
      else {
        FUN_1449c0562(&local_98);
        iVar12 = *(int *)(param_1 + 200);
      }
      local_70 = (undefined4)local_98;
      uStack_6c = local_98._4_4_;
      uStack_68 = (undefined4)uStack_90;
      uStack_64 = uStack_90._4_4_;
      uStack_58 = CONCAT44(uStack_7c,uStack_80);
      local_60 = local_88;
      uVar3 = local_60;
      local_60._4_4_ = (int)((ulonglong)local_88 >> 0x20);
      iVar14 = local_60._4_4_;
      local_78 = plVar1;
      if ((local_60._4_4_ != iVar12) || (local_60 = local_88, uStack_90 != puVar2)) {
        do {
          local_60 = uVar3;
          *(undefined4 *)
           (lVar13 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar14 * 0x38) * 4) =
               0xffffffff;
          local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
          FUN_1449c0562(&local_70);
          iVar14 = local_60._4_4_;
          uVar3 = local_60;
        } while (local_78 != plVar1 ||
                 ((uint *)CONCAT44(uStack_64,uStack_68) != puVar2 || local_60._4_4_ != iVar12));
      }
    }
    else if (0 < iVar12) {
      lVar5 = 0;
      do {
        *(undefined4 *)(lVar13 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0xe8));
    }
    iVar12 = *(int *)(param_1 + 200);
    if (iVar12 == 0) {
      uVar11 = 0;
      uVar15 = 1;
      iVar8 = 0;
      iVar14 = 0;
    }
    else {
      puVar4 = *(uint **)(param_1 + 0xc0);
      if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
        puVar4 = puVar2;
      }
      uVar16 = *puVar4;
      if (uVar16 == 0) {
        iVar14 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar14 = iVar12 + -1;
        }
        uVar11 = 0;
        uVar15 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar15 = uVar11;
        }
        iVar14 = 0;
        do {
          if (uVar15 == uVar11) goto LAB_140873ac6;
          iVar14 = iVar14 + 0x20;
          uVar16 = puVar4[uVar11 + 1];
          uVar11 = uVar11 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar11 = 0;
        iVar14 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar17 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar12 <= iVar8) {
        iVar8 = iVar12;
      }
    }
    if (iVar8 < iVar12) {
      uVar16 = 0xffffffff;
      do {
        local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,iVar14);
        lVar13 = *plVar1;
        lVar5 = (longlong)iVar8 * 0x38;
        FUN_144760e21(*(undefined8 *)(lVar13 + 0x10 + lVar5),*(undefined4 *)(lVar13 + 0x18 + lVar5))
        ;
        if (*(longlong *)(lVar13 + 0x10 + lVar5) != 0) {
          FUN_1400020a8();
        }
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar4 = *(uint **)(param_1 + 0xc0);
        if (*(uint **)(param_1 + 0xc0) == (uint *)0x0) {
          puVar4 = puVar2;
        }
        iVar12 = *(int *)(param_1 + 200);
        iVar8 = (int)uVar11;
        lVar13 = (longlong)iVar8;
        uVar9 = puVar4[lVar13] & uVar16;
        iVar14 = (int)local_c0;
        if (uVar9 == 0) {
          iVar10 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar10 = iVar12 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar6 = iVar10;
          if (iVar10 < iVar8) {
            iVar6 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar5 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar9 = puVar4[lVar13 + lVar5 + 1];
            if (uVar9 != 0) break;
            lVar5 = lVar5 + 1;
            if (iVar6 - lVar13 == lVar5) goto LAB_140873ac6;
          }
          uVar11 = (ulonglong)(iVar8 + (int)lVar5 + 1);
          uVar16 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar17 = uVar15 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar17 != 0) {
          for (; uVar17 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = (iVar14 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar12);
    }
LAB_140873ac6:
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (*(int *)(param_1 + 0xac) < 0) {
      FUN_144748838(plVar1,0);
    }
    *(undefined8 *)(param_1 + 0xd0) = 0xffffffff;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  iVar12 = *(int *)(param_1 + 0x9c);
  FUN_1403d8100(*(undefined8 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x98));
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((iVar12 < 0) && (*(int *)(param_1 + 0x9c) != 0)) {
    FUN_1470e8cfe(param_1 + 0x90,0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140873c04 FUN_140873c04 body=294 status=ok
// SIG undefined FUN_140873c04(void)

void FUN_140873c04(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar4 = param_2[1], lVar4 != 0)) {
    plVar2 = *(longlong **)(param_1 + 0x78);
    if (plVar2 == (longlong *)0x0) {
      FUN_140873d40(param_1 + 0x80);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
    }
    local_50 = lVar3;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
      lVar3 = *param_2;
      lVar4 = param_2[1];
    }
    local_40 = 0;
    local_48 = lVar4;
    FUN_14485c47a(&local_40,lVar3);
    uStack_38 = 0;
    local_30 = 0x100000100;
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_140a1b400(plVar2,iVar1);
    }
    plVar2 = (longlong *)(*plVar2 + (longlong)iVar1 * 0x28);
    *plVar2 = local_50;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    plVar2[1] = local_48;
    *(undefined4 *)(plVar2 + 2) = (undefined4)local_40;
    *(undefined4 *)((longlong)plVar2 + 0x14) = local_40._4_4_;
    *(undefined4 *)(plVar2 + 3) = (undefined4)uStack_38;
    *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_38._4_4_;
    plVar2[4] = local_30;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140873d40 FUN_140873d40 body=152 status=ok
// SIG undefined FUN_140873d40(void)

void FUN_140873d40(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    plVar5 = (longlong *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) << 4;
    do {
      if ((((int)plVar5[1] != 0) && ((longlong *)*plVar5 != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(*(longlong *)*plVar5 + 0x30))(), cVar2 != '\0')) {
        if (((int)plVar5[1] == 0) || ((longlong *)*plVar5 == (longlong *)0x0)) {
          lVar3 = 0;
        }
        else {
          lVar3 = (**(code **)(*(longlong *)*plVar5 + 8))();
        }
        if (((lVar3 == param_2) && ((int)plVar5[1] != 0)) &&
           (puVar1 = (undefined8 *)*plVar5, puVar1 != (undefined8 *)0x0)) {
          (**(code **)*puVar1)(puVar1,0);
          FUN_1446efa72(plVar5,0,0,0x10);
          *(undefined4 *)(plVar5 + 1) = 0;
        }
      }
      plVar5 = plVar5 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 140873dd8 FUN_140873dd8 body=493 status=ok
// SIG undefined FUN_140873dd8(void)

void FUN_140873dd8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined4 local_78;
  undefined1 local_69;
  undefined1 *local_68;
  undefined1 *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_58);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2,&local_58);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x38)) {
    plVar2 = (longlong *)(param_1 + 0x30);
    uVar8 = (longlong)*(int *)(param_1 + 0x38);
    do {
      uVar9 = uVar8 - 1;
      lVar3 = *plVar2;
      plVar10 = *(longlong **)(lVar3 + 8 + uVar9 * 0x10);
      bVar5 = true;
      if (plVar10 == (longlong *)0x0) {
LAB_140873fbd:
        plVar10 = (longlong *)0x0;
LAB_140873fa4:
        FUN_14756bec6(plVar2,uVar9 & 0xffffffff);
        FUN_14756bf38(plVar2);
        if (!bVar5) goto LAB_140873f75;
      }
      else {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_140873fbd;
          LOCK();
          iVar6 = (int)plVar10[1];
          bVar11 = iVar7 == iVar6;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
          UNLOCK();
        } while (!bVar11);
        plVar4 = *(longlong **)(lVar3 + uVar9 * 0x10);
        if (plVar4 == (longlong *)0x0) {
          bVar5 = false;
          goto LAB_140873fa4;
        }
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,&local_58);
LAB_140873f75:
        LOCK();
        plVar4 = plVar10 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      bVar5 = 1 < (longlong)uVar8;
      uVar8 = uVar9;
    } while (bVar5);
  }
  local_60 = &local_69;
  local_68 = &LAB_1432dcd9c;
  local_80 = local_58;
  local_78 = (undefined4)uStack_50;
  FUN_14087537a(param_1,param_2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140873fc6 FUN_140873fc6 body=550 status=ok
// SIG undefined FUN_140873fc6(void)

void FUN_140873fc6(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar3 = *(int *)(param_1 + 0xd0);
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0xb8);
    }
    uVar11 = *puVar7;
    if (uVar11 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_14087415b;
        iVar12 = iVar12 + 0x20;
        uVar11 = puVar7[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar2 = uVar16 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar11 = 0xffffffff;
    do {
      lVar13 = *(longlong *)(param_1 + 0xa8);
      local_58 = *param_2;
      local_50 = param_2[1];
      if (local_50 != 0) {
        LOCK();
        *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
        UNLOCK();
      }
      FUN_140874208(lVar13 + (longlong)iVar6 * 400 + 8,&local_58);
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar7 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0xb8);
      }
      iVar4 = *(int *)(param_1 + 0xd0);
      iVar6 = (int)uVar15;
      lVar13 = (longlong)iVar6;
      uVar10 = puVar7[lVar13] & uVar11;
      if (uVar10 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = iVar12 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar6 < iVar8) {
          lVar14 = 0;
          do {
            uVar10 = puVar7[lVar13 + lVar14 + 1];
            if (uVar10 != 0) {
              uVar15 = (ulonglong)(iVar6 + (int)lVar14 + 1);
              uVar11 = 0xffffffff;
              goto LAB_14087412c;
            }
            iVar12 = iVar12 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar9 - lVar13 != lVar14);
          uVar11 = 0xffffffff;
          iVar6 = iVar9;
        }
        uVar15 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_14087412c:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
LAB_14087415b:
  puVar5 = (undefined8 *)param_2[1];
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5);
      LOCK();
      piVar1 = (int *)((longlong)puVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140874208 FUN_140874208 body=1886 status=ok
// SIG undefined FUN_140874208(void)

void FUN_140874208(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    lVar16 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x68);
    }
    iVar6 = *(int *)(param_1 + 0x70);
    iVar8 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar8 = iVar6;
    }
    if (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x5c) < iVar8 >> 2) {
      iVar6 = *(int *)(param_1 + 0x50);
      if (iVar6 == 0) {
        uVar17 = 0;
        uVar19 = 1;
        iVar8 = 0;
        iVar13 = 0;
      }
      else {
        puVar12 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x38);
        }
        uVar18 = *puVar12;
        if (uVar18 == 0) {
          iVar8 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar8 = iVar6 + -1;
          }
          uVar17 = 0;
          uVar19 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar19 = uVar17;
          }
          iVar13 = 0;
          do {
            if (uVar19 == uVar17) goto LAB_14087427b;
            iVar13 = iVar13 + 0x20;
            uVar18 = puVar12[uVar17 + 1];
            uVar17 = uVar17 + 1;
          } while (uVar18 == 0);
        }
        else {
          uVar17 = 0;
          iVar13 = 0;
        }
        uVar19 = (ulonglong)(-uVar18 & uVar18);
        uVar3 = uVar19 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar8) {
          iVar8 = iVar6;
        }
      }
      if (iVar8 != iVar6) {
        uVar18 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar16 + (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x28) + 0x34 + (longlong)iVar8 * 0x38) * 4) =
               0xffffffff;
          uVar18 = ~(uint)uVar19 & uVar18;
          puVar12 = *(uint **)(param_1 + 0x48);
          if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
            puVar12 = (uint *)(param_1 + 0x38);
          }
          iVar10 = *(int *)(param_1 + 0x50);
          iVar8 = (int)uVar17;
          lVar11 = (longlong)iVar8;
          uVar9 = puVar12[lVar11] & uVar18;
          if (uVar9 == 0) {
            iVar14 = iVar10 + 0x1e;
            if (-1 < iVar10 + -1) {
              iVar14 = iVar10 + -1;
            }
            iVar14 = iVar14 >> 5;
            iVar13 = iVar13 + 0x20;
            iVar15 = iVar14;
            if (iVar14 < iVar8) {
              iVar15 = iVar8;
            }
            if (iVar8 < iVar14) {
              lVar20 = 0;
              do {
                uVar9 = puVar12[lVar11 + lVar20 + 1];
                if (uVar9 != 0) {
                  uVar17 = (ulonglong)(iVar8 + (int)lVar20 + 1);
                  uVar18 = 0xffffffff;
                  goto LAB_14087475d;
                }
                iVar13 = iVar13 + 0x20;
                lVar20 = lVar20 + 1;
              } while (iVar15 - lVar11 != lVar20);
              uVar18 = 0xffffffff;
              lVar11 = (longlong)iVar15;
            }
            uVar17 = lVar11 + 1U & 0xffffffff;
            iVar8 = iVar10;
          }
          else {
LAB_14087475d:
            uVar19 = (ulonglong)(-uVar9 & uVar9);
            uVar3 = uVar19 * 2 + 1;
            lVar11 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
              }
            }
            iVar8 = (iVar13 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
            if (iVar10 <= iVar8) {
              iVar8 = iVar10;
            }
          }
        } while (iVar8 != iVar6);
      }
    }
    else if (0 < iVar6) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar11 * 4) = 0xffffffff;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0x70));
    }
LAB_14087427b:
    iVar6 = *(int *)(param_1 + 0x50);
    if (iVar6 == 0) {
      uVar19 = 0;
      uVar17 = 1;
      iVar8 = 0;
      iVar13 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x38);
      }
      uVar18 = *puVar12;
      if (uVar18 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        uVar19 = 0;
        uVar17 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar17 = uVar19;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar19) goto LAB_1408743b0;
          iVar13 = iVar13 + 0x20;
          uVar18 = puVar12[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar19 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar3 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar8) {
        iVar8 = iVar6;
      }
    }
    if (iVar8 < iVar6) {
      uVar18 = 0xffffffff;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20 + (longlong)iVar8 * 0x38) != 0) {
          FUN_1400020a8();
          iVar6 = *(int *)(param_1 + 0x50);
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar12 = *(uint **)(param_1 + 0x48);
        if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x38);
        }
        iVar8 = (int)uVar19;
        lVar16 = (longlong)iVar8;
        uVar9 = puVar12[lVar16] & uVar18;
        if (uVar9 == 0) {
          iVar10 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar10 = iVar6 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar10;
          if (iVar10 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar11 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar9 = puVar12[lVar16 + lVar11 + 1];
            if (uVar9 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar14 - lVar16 == lVar11) goto LAB_1408743b0;
          }
          uVar19 = (ulonglong)(iVar8 + (int)lVar11 + 1);
          uVar18 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar6);
    }
LAB_1408743b0:
    *(undefined4 *)(param_1 + 0x30) = 0;
    if (*(int *)(param_1 + 0x34) < 0) {
      FUN_144748838((longlong *)(param_1 + 0x28),0);
    }
    *(undefined8 *)(param_1 + 0x58) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  if (*(int *)(param_1 + 0x80) != *(int *)(param_1 + 0xac)) {
    lVar16 = param_1 + 0xb0;
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar16 = *(longlong *)(param_1 + 0xb8);
    }
    plVar4 = (longlong *)(param_1 + 0x78);
    iVar6 = *(int *)(param_1 + 0xc0);
    iVar8 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar8 = iVar6;
    }
    if (*(int *)(param_1 + 0x80) - *(int *)(param_1 + 0xac) < iVar8 >> 2) {
      lVar11 = param_1 + 0x88;
      local_68 = 0x100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      uStack_60 = lVar11;
      if (*(int *)(param_1 + 0xa0) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar6 = *(int *)(param_1 + 0xa0);
      }
      local_88 = (undefined4)uStack_60;
      uStack_84 = uStack_60._4_4_;
      uStack_78 = CONCAT44(uStack_4c,uStack_50);
      uStack_90 = local_68;
      local_80 = local_58;
      uVar5 = local_80;
      local_80._4_4_ = (int)((ulonglong)local_58 >> 0x20);
      iVar8 = local_80._4_4_;
      local_98 = plVar4;
      if ((local_80._4_4_ != iVar6) || (local_80 = local_58, uStack_60 != lVar11)) {
        do {
          local_80 = uVar5;
          *(undefined4 *)(lVar16 + (longlong)*(int *)(*local_98 + 100 + (longlong)iVar8 * 0x68) * 4)
               = 0xffffffff;
          local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
          FUN_1449c0562(&uStack_90);
          iVar8 = local_80._4_4_;
          uVar5 = local_80;
        } while (local_98 != plVar4 ||
                 (CONCAT44(uStack_84,local_88) != lVar11 || local_80._4_4_ != iVar6));
      }
    }
    else if (0 < iVar6) {
      lVar11 = 0;
      do {
        *(undefined4 *)(lVar16 + lVar11 * 4) = 0xffffffff;
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_1 + 0xc0));
    }
    iVar6 = *(int *)(param_1 + 0xa0);
    if (iVar6 == 0) {
      uVar19 = 0;
      uVar17 = 1;
      iVar8 = 0;
      iVar13 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 0x98);
      if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x88);
      }
      uVar18 = *puVar12;
      if (uVar18 == 0) {
        iVar8 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar8 = iVar6 + -1;
        }
        uVar19 = 0;
        uVar17 = (ulonglong)(uint)(iVar8 >> 5);
        if (iVar8 >> 5 < 1) {
          uVar17 = uVar19;
        }
        iVar13 = 0;
        do {
          if (uVar17 == uVar19) goto LAB_1408745ea;
          iVar13 = iVar13 + 0x20;
          uVar18 = puVar12[uVar19 + 1];
          uVar19 = uVar19 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar19 = 0;
        iVar13 = 0;
      }
      uVar17 = (ulonglong)(-uVar18 & uVar18);
      uVar3 = uVar17 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar8) {
        iVar8 = iVar6;
      }
    }
    if (iVar8 < iVar6) {
      uVar18 = 0xffffffff;
      do {
        if (*(longlong *)(*plVar4 + 0x50 + (longlong)iVar8 * 0x68) != 0) {
          FUN_1400020a8();
          iVar6 = *(int *)(param_1 + 0xa0);
        }
        uVar18 = uVar18 & ~(uint)uVar17;
        puVar12 = *(uint **)(param_1 + 0x98);
        if (*(uint **)(param_1 + 0x98) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0x88);
        }
        iVar8 = (int)uVar19;
        lVar16 = (longlong)iVar8;
        uVar9 = puVar12[lVar16] & uVar18;
        if (uVar9 == 0) {
          iVar10 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar10 = iVar6 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar14 = iVar10;
          if (iVar10 < iVar8) {
            iVar14 = iVar8;
          }
          if (iVar10 <= iVar8) break;
          lVar11 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar9 = puVar12[lVar16 + lVar11 + 1];
            if (uVar9 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar14 - lVar16 == lVar11) goto LAB_1408745ea;
          }
          uVar19 = (ulonglong)(iVar8 + (int)lVar11 + 1);
          uVar18 = 0xffffffff;
        }
        uVar17 = (ulonglong)(-uVar9 & uVar9);
        uVar3 = uVar17 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar8 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      } while (iVar8 < iVar6);
    }
LAB_1408745ea:
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x84) < 0) {
      FUN_14059f004(plVar4,0);
    }
    *(undefined8 *)(param_1 + 0xa8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    FUN_145750682(param_1 + 200);
    FUN_145750560(param_1 + 200);
  }
  *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x168) + 1;
  puVar7 = (undefined8 *)FUN_140874c26(*param_2 + 0x38);
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7);
  }
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  FUN_140874968(param_1);
  plVar4 = (longlong *)param_2[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140874968 FUN_140874968 body=265 status=ok
// SIG undefined FUN_140874968(void)

void FUN_140874968(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar5 + 1;
    lVar5 = lVar5 * 0x10 + -8;
    bVar6 = 0;
    do {
      if (((*(int *)(*param_1 + lVar5) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar5), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar3 == '\0')) {
        bVar6 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar5 = lVar5 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar6 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar7 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar7);
            FUN_14005b248(param_1);
          }
          else {
            iVar7 = iVar7 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar7 < iVar4);
      }
      iVar7 = 2;
      if (2 < iVar4 * 2) {
        iVar7 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar7;
      if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140874a72 FUN_140874a72 body=271 status=ok
// SIG undefined FUN_140874a72(void)

undefined8 FUN_140874a72(longlong param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140874b7b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140874b7b;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_140874b7b:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140874b31;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,*(undefined4 *)(param_1 + 8));
      uVar6 = 1;
      goto LAB_140874b31;
    }
  }
  uVar6 = 0;
LAB_140874b31:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140874b82 FUN_140874b82 body=163 status=ok
// SIG undefined FUN_140874b82(void)

void FUN_140874b82(longlong param_1,undefined4 *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  uint local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x548);
  uVar2 = param_3 & 0xffff;
  if ((int)uVar2 < *(int *)(lVar1 + 0x30)) {
    lVar3 = lVar1 + 0x18;
    if (*(longlong *)(lVar1 + 0x28) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x28);
    }
    if (((*(uint *)(lVar3 + (ulonglong)(uVar2 >> 5) * 4) >> (param_3 & 0x1f) & 1) != 0) &&
       (param_3 >> 0x10 ==
        (uint)*(ushort *)(*(longlong *)(lVar1 + 8) + 0x11c + (ulonglong)uVar2 * 0x128))) {
      local_28 = *param_2;
      uStack_24 = param_2[1];
      uStack_20 = param_2[2];
      uStack_1c = param_2[3];
      local_18 = param_3;
      FUN_140874ce2(lVar1 + 0x48,local_2c,&local_28,0);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140874c26 FUN_140874c26 body=188 status=ok
// SIG undefined FUN_140874c26(void)

undefined8 * FUN_140874c26(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) >> (DAT_14cab328c & 0x1f) & 1) != 0) {
    uVar5 = (1 << ((byte)DAT_14cab328c & 0x1f)) - 1U & *(uint *)(param_1 + 2);
    uVar6 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x3333333333333333) + (uVar6 & 0x3333333333333333);
    uVar6 = ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    lVar2 = *param_1;
    uVar3 = (ulonglong)*(ushort *)(lVar2 + uVar6 * 6);
    lVar7 = lVar2 + uVar3;
    if (uVar3 == 0xffff) {
      lVar7 = 0;
    }
    puVar4 = (undefined8 *)((ulonglong)*(byte *)(lVar2 + 4 + uVar6 * 6) + lVar7);
    if (puVar4 != (undefined8 *)0x0) {
      cVar1 = *(char *)(lVar2 + uVar6 * 6 + 5);
      if (cVar1 != '\x01') {
        if (cVar1 == '\0') {
          return puVar4;
        }
        if (cVar1 != '\x02') {
          return (undefined8 *)0x0;
        }
      }
      return (undefined8 *)*puVar4;
    }
  }
  return (undefined8 *)0x0;
}



// FUNCTION 140874ce2 FUN_140874ce2 body=343 status=ok
// SIG undefined FUN_140874ce2(void)

undefined4 *
FUN_140874ce2(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined4 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140874eb6(param_1,local_50);
  local_48[4] = param_3[4];
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *local_48 = *param_3;
  local_48[1] = uVar1;
  local_48[2] = uVar2;
  local_48[3] = uVar3;
  local_48[5] = 0xffffffff;
  local_54 = local_50[0];
  uVar5 = FUN_1447addd0(local_48,0x10);
  uVar5 = (uVar5 >> 2) + uVar5 * 0x40 + (uint)*(ushort *)(local_48 + 4) + 0x9e3779b9 ^ uVar5;
  local_68 = param_4;
  cVar4 = FUN_140874e3a(param_1,uVar5,local_48,&local_54);
  if (cVar4 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar8 = 1;
    if (3 < uVar7) {
      uVar6 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar8 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar8 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_48[6] = uVar5;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      local_48[5] = *(undefined4 *)
                     (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar8;
      FUN_1408750a8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140874e3a FUN_140874e3a body=123 status=ok
// SIG undefined FUN_140874e3a(void)

void FUN_140874e3a(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  int iVar8;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar8 = FUN_1405e090e();
    if (iVar8 != -1) {
      lVar2 = *param_1;
      uVar3 = *param_3;
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      *(undefined4 *)(lVar2 + 0x10 + (longlong)iVar8 * 0x1c) = param_3[4];
      puVar1 = (undefined4 *)(lVar2 + (longlong)iVar8 * 0x1c);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      FUN_140875fb0(param_1,*param_4,1);
      *param_4 = iVar8;
      uVar7 = 1;
      goto LAB_140874e56;
    }
  }
  uVar7 = 0;
LAB_140874e56:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar7;
  }
  return;
}



// FUNCTION 140874eb6 FUN_140874eb6 body=497 status=ok
// SIG undefined FUN_140874eb6(void)

int * FUN_140874eb6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_1406245f8(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x1c);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x1c) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x1c + *param_1;
  return param_2;
}



// FUNCTION 1408750a8 FUN_1408750a8 body=721 status=ok
// SIG undefined FUN_1408750a8(void)

void FUN_1408750a8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  
  plVar3 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar3,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar3 != 0) {
      FUN_1446efa72(plVar3,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar3,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_14087510e;
  }
  uVar2 = 0;
  do {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    *(undefined4 *)((longlong)plVar3 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar14 != uVar2);
LAB_14087510e:
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar11 = 0;
    uVar15 = 1;
    iVar4 = 0;
    iVar12 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar12 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar12 = iVar5 + -1;
      }
      uVar11 = 0;
      uVar15 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar15 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar15 == uVar11) {
          return;
        }
        iVar12 = iVar12 + 0x20;
        uVar14 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar9 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar4) {
      iVar4 = iVar5;
    }
  }
  if (iVar4 < iVar5) {
    uVar14 = 0xffffffff;
    do {
      lVar13 = *param_1;
      lVar10 = (longlong)iVar4 * 0x1c;
      uVar2 = FUN_1447addd0(lVar13 + lVar10,0x10);
      uVar9 = (longlong)
              (int)((uVar2 >> 2) + uVar2 * 0x40 + (uint)*(ushort *)(lVar13 + 0x10 + lVar10) +
                    0x9e3779b9 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar5 = (int)uVar9;
      *(int *)(lVar13 + 0x18 + lVar10) = iVar5;
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x14 + lVar10) =
           *(undefined4 *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
      plVar3 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar3 = plVar1;
      }
      *(int *)((longlong)plVar3 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar5 = (int)param_1[5];
      iVar4 = (int)uVar11;
      lVar13 = (longlong)iVar4;
      uVar2 = puVar8[lVar13] & uVar14;
      if (uVar2 == 0) {
        iVar6 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar6 <= iVar4) {
          return;
        }
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar2 = puVar8[lVar13 + lVar10 + 1];
          if (uVar2 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar7 - lVar13 == lVar10) {
            return;
          }
        }
        uVar11 = (ulonglong)(iVar4 + (int)lVar10 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar2 & uVar2);
      uVar9 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar4 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar5);
  }
  return;
}



// FUNCTION 14087537a FUN_14087537a body=1762 status=ok
// SIG undefined FUN_14087537a(void)

void FUN_14087537a(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  uint uStack_84;
  uint *local_80;
  uint local_78;
  int local_74;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  undefined2 local_58;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = param_4;
  if ((longlong)(int)param_3[1] != 0) {
    lVar13 = *param_3;
    lVar20 = (longlong)(int)param_3[1] * 0x14;
    do {
      lVar19 = FUN_140adecae(param_1,lVar13);
      if (lVar19 != 0) {
        sVar7 = (short)*(undefined4 *)(lVar19 + 0xc) + -1;
        *(short *)(lVar19 + 0xc) = sVar7;
        if (*(char *)(lVar13 + 0x10) == '\x01') {
          *(short *)(lVar19 + 0xe) = *(short *)(lVar19 + 0xe) + -1;
        }
        if (sVar7 == 0) {
          *(undefined1 *)(lVar19 + 0x10) = 0;
          *(undefined4 *)(lVar19 + 8) = *(undefined4 *)(lVar13 + 0xc);
        }
      }
      lVar13 = lVar13 + 0x14;
      lVar20 = lVar20 + -0x14;
    } while (lVar20 != 0);
  }
  plVar14 = (longlong *)(param_1 + 0x60);
  iVar5 = *(int *)(param_1 + 0x68);
  local_c8 = plVar14;
  if (0 < iVar5) {
    lVar13 = param_1 + 0x70;
    uVar21 = 0;
    do {
      lVar20 = *(longlong *)(param_1 + 0x80);
      if (*(longlong *)(param_1 + 0x80) == 0) {
        lVar20 = lVar13;
      }
      if ((*(uint *)(lVar20 + (uVar21 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar21 & 0x1f) & 1) != 0) {
        lVar20 = *plVar14;
        lVar19 = uVar21 * 0x70;
        iVar11 = *(int *)(lVar20 + 0x68 + lVar19);
        uVar10 = (ulonglong)iVar11;
        if (0 < (longlong)uVar10) {
          lVar8 = lVar20 + lVar19 + 0x10;
          puVar18 = (undefined8 *)(lVar20 + lVar19);
          iVar11 = -iVar11;
          lVar20 = uVar10 * 0x14;
          do {
            lVar12 = puVar18[0xc];
            if (puVar18[0xc] == 0) {
              lVar12 = lVar8;
            }
            if ((*(short *)(lVar12 + -8 + lVar20) == 0) &&
               ((*(short *)(lVar12 + -0xc + lVar20) == -1 ||
                (*(int *)(lVar12 + -0xc + lVar20) == *(int *)(param_2 + 8))))) {
              local_c0 = lVar8;
              local_b8 = lVar13;
              local_b0 = param_2;
              FUN_140875a5e(param_1,&local_90,*(undefined4 *)(lVar12 + -0x14 + lVar20));
              local_a0 = *(undefined4 *)(lVar12 + -0x10 + lVar20);
              (*(code *)*local_a8)(local_a8[1],local_90,&local_a0);
              uVar9 = *(uint *)(puVar18 + 0xd);
              if (uVar10 != uVar9) {
                lVar13 = puVar18[0xc];
                if (puVar18[0xc] == 0) {
                  lVar13 = local_c0;
                }
                memmove((void *)(lVar13 + lVar20 + -0x14),(void *)(lVar13 + lVar20),
                        (longlong)(int)(uVar9 + iVar11) * 0x14);
                uVar9 = *(uint *)(puVar18 + 0xd);
              }
              *(uint *)(puVar18 + 0xd) = uVar9 - 1;
              plVar4 = (longlong *)CONCAT44(uStack_84,local_88);
              lVar8 = local_c0;
              param_2 = local_b0;
              plVar14 = local_c8;
              lVar13 = local_b8;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar4 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar4)(plVar4);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar4 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  lVar8 = local_c0;
                  param_2 = local_b0;
                  plVar14 = local_c8;
                  lVar13 = local_b8;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar4 + 0x10))(plVar4);
                    lVar8 = local_c0;
                    param_2 = local_b0;
                    plVar14 = local_c8;
                    lVar13 = local_b8;
                  }
                }
              }
            }
            if (*(int *)(puVar18 + 0xd) == 0) {
              local_c0 = lVar8;
              local_b8 = lVar13;
              local_b0 = param_2;
              (**(code **)(*(longlong *)*puVar18 + 0x10))((longlong *)*puVar18,uVar21 & 0xffffffff);
              lVar13 = *local_c8;
              if (*(longlong *)(lVar13 + 0x60 + lVar19) != 0) {
                FUN_1400020a8();
              }
              plVar14 = *(longlong **)(lVar13 + lVar19 + 8);
              if (plVar14 != (longlong *)0x0) {
                LOCK();
                plVar4 = plVar14 + 1;
                *(int *)plVar4 = (int)*plVar4 + -1;
                UNLOCK();
                if ((int)*plVar4 == 0) {
                  (**(code **)*plVar14)(plVar14);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar14 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar14 + 0x10))(plVar14);
                  }
                }
              }
              FUN_140875ae0(local_c8,uVar21 & 0xffffffff);
              lVar8 = local_c0;
              param_2 = local_b0;
              plVar14 = local_c8;
              lVar13 = local_b8;
            }
            iVar11 = iVar11 + 1;
            lVar20 = lVar20 + -0x14;
            bVar22 = 1 < uVar10;
            uVar10 = uVar10 - 1;
          } while (bVar22);
          iVar5 = *(int *)(param_1 + 0x68);
        }
      }
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < (longlong)iVar5);
  }
  local_90 = (longlong *)(param_1 + 0x98);
  local_80 = (uint *)(param_1 + 0xa8);
  iVar5 = *(int *)(param_1 + 0xc0);
  uStack_84 = 1;
  if (iVar5 == 0) {
    local_70 = 0;
    local_88 = 0;
    local_74 = 0;
  }
  else {
    puVar16 = *(uint **)(param_1 + 0xb8);
    if (*(uint **)(param_1 + 0xb8) == (uint *)0x0) {
      puVar16 = local_80;
    }
    uVar9 = *puVar16;
    if (uVar9 == 0) {
      iVar11 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar11 = iVar5 + -1;
      }
      uVar10 = 0;
      uVar21 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar21 = uVar10;
      }
      local_88 = (int)uVar21 + 1;
      local_70 = (int)uVar21 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_74 = iVar5;
        if (uVar21 == uVar10) goto LAB_140875493;
        iVar11 = iVar11 + 0x20;
        uVar9 = puVar16[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar9 == 0);
      local_88 = (int)uVar10;
      local_70 = iVar11;
    }
    else {
      local_70 = 0;
      local_88 = 0;
    }
    uStack_84 = -uVar9 & uVar9;
    uVar21 = (ulonglong)uStack_84 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_74 = (local_70 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar5 <= local_74) {
      local_74 = iVar5;
    }
  }
LAB_140875493:
  local_78 = 0xffffffff;
  local_58 = 0;
  local_68 = local_90;
  local_60 = local_90;
  if (local_74 < iVar5) {
    do {
      if (*(short *)(*local_90 + 0x14 + (longlong)local_74 * 0x24) == 0) {
        lVar13 = *local_90 + (longlong)local_74 * 0x24;
        if ((*(short *)(lVar13 + 0x10) == -1) || (*(int *)(lVar13 + 0x10) == *(int *)(param_2 + 8)))
        {
          FUN_140875a5e(param_1,&local_a0,*(undefined4 *)(lVar13 + 8));
          local_4c = *(undefined4 *)(lVar13 + 0xc);
          (*(code *)*local_a8)(local_a8[1],CONCAT44(uStack_9c,local_a0),&local_4c);
          FUN_145750382(local_68,local_74);
          plVar14 = local_98;
          local_58 = CONCAT11(local_58._1_1_,1);
          if (local_98 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_98 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_98)(local_98);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
        }
      }
      local_78 = local_78 & ~uStack_84;
      FUN_1449c0562(&local_88);
    } while (local_74 < (int)local_80[6]);
    if (((local_58 & 1) != 0) && (local_58._1_1_ == '\x01')) {
      FUN_14756be82(local_60,(int)local_60[1] - *(int *)((longlong)local_60 + 0x34));
    }
  }
  iVar5 = *(int *)(param_1 + 0x88);
  if (iVar5 == 0) {
    iVar11 = -1;
  }
  else {
    iVar11 = -1;
    lVar13 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar13 = param_1 + 0x70;
    }
    uVar21 = (ulonglong)(iVar5 + 0x1fU >> 5);
    iVar15 = -0x3e - (iVar5 + 0x1fU & 0xffffffe0);
    uVar9 = 0xffffffff >> (-(char)iVar5 & 0x1fU);
    do {
      bVar22 = uVar21 == 0;
      uVar21 = uVar21 - 1;
      if (bVar22) goto LAB_140875555;
      iVar15 = iVar15 + 0x20;
      uVar17 = uVar9 & *(uint *)(lVar13 + uVar21 * 4);
      uVar9 = 0xffffffff;
    } while (uVar17 == 0);
    uVar21 = (ulonglong)uVar17 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar21 != 0) {
      for (; uVar21 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar11 = -(((uint)lVar13 ^ 0x3f) + iVar15);
  }
LAB_140875555:
  iVar5 = iVar11 + 1;
  iVar15 = *(int *)(param_1 + 0x68);
  if (iVar5 < iVar15) {
    if ((0 < *(int *)(param_1 + 0x94)) &&
       (uVar21 = (ulonglong)*(uint *)(param_1 + 0x90), *(uint *)(param_1 + 0x90) != 0xffffffff)) {
      lVar13 = *(longlong *)(param_1 + 0x60);
      do {
        iVar15 = (int)uVar21;
        if (iVar11 < iVar15) {
          lVar20 = (longlong)iVar15 * 0x70;
          iVar15 = *(int *)(lVar13 + lVar20);
          iVar3 = *(int *)(lVar13 + 4 + lVar20);
          uVar21 = (ulonglong)iVar3;
          if (uVar21 != 0xffffffffffffffff) {
            *(int *)(lVar13 + uVar21 * 0x70) = iVar15;
          }
          if (iVar15 == -1) {
            *(int *)(param_1 + 0x90) = iVar3;
          }
          else {
            *(int *)(lVar13 + 4 + (longlong)iVar15 * 0x70) = iVar3;
          }
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -1;
        }
        else {
          uVar21 = (ulonglong)*(uint *)(lVar13 + 4 + (longlong)iVar15 * 0x70);
        }
      } while ((int)uVar21 != -1);
      iVar15 = *(int *)(param_1 + 0x68);
    }
    if (iVar15 != iVar5) {
      *(int *)(param_1 + 0x68) = iVar5;
    }
    *(int *)(param_1 + 0x88) = iVar5;
    iVar11 = iVar11 + 0x20;
    if (-1 < iVar5) {
      iVar11 = iVar5;
    }
    iVar15 = iVar5;
    if (iVar5 % 0x20 != 0) {
      lVar13 = param_1 + 0x70;
      if (*(longlong *)(param_1 + 0x80) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x80);
      }
      bVar6 = -(char)(iVar5 % 0x20);
      *(uint *)(lVar13 + (longlong)(iVar11 >> 5) * 4) =
           (uint)(*(int *)(lVar13 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
           (bVar6 & 0x1f);
      iVar15 = *(int *)(param_1 + 0x68);
    }
  }
  if (*(int *)(param_1 + 0x6c) != iVar15) {
    FUN_140875b54(local_c8);
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140875a5e FUN_140875a5e body=130 status=ok
// SIG undefined FUN_140875a5e(void)

void FUN_140875a5e(longlong param_1,undefined8 *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar7 = 0;
  uVar8 = uVar3;
  if (0 < (int)uVar3) {
    do {
      uVar1 = (uVar8 >> 1) + uVar7;
      if (*(uint *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar1 * 0x18) < param_3) {
        uVar7 = uVar1 + (uVar8 & 1);
      }
      bVar5 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar5);
  }
  if ((int)uVar7 < (int)uVar3) {
    puVar2 = (uint *)(*(longlong *)(param_1 + 0xe8) + (ulonglong)uVar7 * 0x18);
    puVar6 = (uint *)0x0;
    if (*puVar2 <= param_3) {
      puVar6 = puVar2 + 2;
    }
  }
  else {
    puVar6 = (uint *)0x0;
  }
  *param_2 = *(undefined8 *)puVar6;
  lVar4 = *(longlong *)(puVar6 + 2);
  param_2[1] = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140875ae0 FUN_140875ae0 body=116 status=ok
// SIG undefined FUN_140875ae0(void)

void FUN_140875ae0(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x70) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x70 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 140875b54 FUN_140875b54 body=222 status=ok
// SIG undefined FUN_140875b54(void)

void FUN_140875b54(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_2 != 0) {
    uVar2 = (longlong)param_2 * 0x70;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar2 >> 4]];
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar5 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar5,0x70,8);
  }
  return;
}



// FUNCTION 140875c32 FUN_140875c32 body=617 status=ok
// SIG undefined FUN_140875c32(void)

void FUN_140875c32(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  plVar1 = (longlong *)(param_1 + 0x68);
  iVar5 = *(int *)(param_1 + 0x70);
  iVar11 = *(int *)(param_1 + 0x9c);
  if (iVar5 != iVar11) {
    lVar6 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xa8);
    }
    uVar8 = *(uint *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xb0) - 1U & param_2) * 4);
    if (uVar8 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar8 * 0x14);
        if (*puVar9 == param_2) goto LAB_140875c9d;
        uVar8 = puVar9[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  puVar9 = (uint *)0x0;
LAB_140875c9d:
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    iVar13 = (int)*(undefined8 *)(puVar9 + 1);
    uVar14 = (uint)((ulonglong)*(undefined8 *)(puVar9 + 1) >> 0x20);
    uVar8 = uVar14 >> 0xd ^ iVar13 - uVar14;
    uVar10 = uVar8 << 8 ^ (-0x61c88647 - uVar8) - uVar14;
    uVar15 = uVar10 >> 0xd ^ (uVar14 - uVar8) - uVar10;
    uVar16 = uVar15 >> 0xc ^ (uVar8 - uVar10) - uVar15;
    uVar8 = uVar16 << 0x10 ^ (uVar10 - uVar15) - uVar16;
    uVar10 = uVar8 >> 5 ^ (uVar15 - uVar16) - uVar8;
    uVar15 = uVar10 >> 3 ^ (uVar16 - uVar8) - uVar10;
    uVar8 = uVar15 << 10 ^ (uVar8 - uVar10) - uVar15;
    lVar6 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar6 + ((longlong)(int)(uVar8 >> 0xf ^ uVar10 - (uVar15 + uVar8)) &
                             (longlong)*(int *)(param_1 + 0x60) - 1U) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x18);
      do {
        piVar2 = (int *)(lVar4 + (longlong)iVar3 * 0x14);
        if ((*piVar2 == iVar13) && (*(uint *)(lVar4 + 4 + (longlong)iVar3 * 0x14) == uVar14)) {
          iVar5 = *(int *)(lVar6 + (longlong)piVar2[4] * 4);
          if (iVar5 == iVar3) {
            piVar12 = (int *)(lVar6 + (longlong)piVar2[4] * 4);
          }
          else {
            do {
              piVar12 = (int *)(lVar4 + (longlong)iVar5 * 0x14 + 0xc);
              iVar5 = *piVar12;
            } while (iVar5 != iVar3);
          }
          *piVar12 = piVar2[3];
          FUN_140875e9c((longlong *)(param_1 + 0x18),iVar3,1);
          iVar5 = *(int *)(param_1 + 0x70);
          iVar11 = *(int *)(param_1 + 0x9c);
          break;
        }
        iVar3 = piVar2[3];
      } while (iVar3 != -1);
    }
  }
  if (iVar5 != iVar11) {
    lVar6 = param_1 + 0xa0;
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xa8);
    }
    uVar8 = *(uint *)(lVar6 + ((longlong)(int)param_2 & (longlong)*(int *)(param_1 + 0xb0) - 1U) * 4
                     );
    if (uVar8 != 0xffffffff) {
      do {
        puVar9 = (uint *)(*plVar1 + (longlong)(int)uVar8 * 0x14);
        if (*puVar9 == param_2) {
          uVar10 = *(uint *)(lVar6 + (longlong)(int)puVar9[4] * 4);
          if (uVar10 == uVar8) {
            puVar7 = (uint *)(lVar6 + (longlong)(int)puVar9[4] * 4);
          }
          else {
            do {
              puVar7 = (uint *)(*plVar1 + (longlong)(int)uVar10 * 0x14 + 0xc);
              uVar10 = *puVar7;
            } while (uVar10 != uVar8);
          }
          *puVar7 = puVar9[3];
          FUN_140875f26(plVar1,uVar8,1);
          return;
        }
        uVar8 = puVar9[3];
      } while (uVar8 != 0xffffffff);
    }
  }
  return;
}



// FUNCTION 140875e9c FUN_140875e9c body=138 status=ok
// SIG undefined FUN_140875e9c(void)

void FUN_140875e9c(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140875f26 FUN_140875f26 body=138 status=ok
// SIG undefined FUN_140875f26(void)

void FUN_140875f26(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140875fb0 FUN_140875fb0 body=151 status=ok
// SIG undefined FUN_140875fb0(void)

void FUN_140875fb0(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1c + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      uVar4 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140876048 FUN_140876048 body=1092 status=ok
// SIG undefined FUN_140876048(void)

void FUN_140876048(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  uint *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined1 auStack_108 [44];
  uint local_dc;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  uint *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = *(int *)(param_2 + 8);
  if ((short)local_d8 == -1) {
    plVar1 = (longlong *)(param_1 + 8);
    local_60 = param_1 + 0x18;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    uVar5 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = plVar1;
    local_80 = plVar1;
    local_78 = plVar1;
    if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar6 = local_90._4_4_;
      local_90 = uVar5;
      do {
        FUN_14755bf22(param_3,*local_a8 + (longlong)iVar6 * 0x40 + 0x10);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
      } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
      uVar5 = local_90;
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756acc6(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
        uVar5 = local_90;
      }
    }
    local_90 = uVar5;
    FUN_14756ad0c(plVar1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
    if (iVar6 == 0) {
      uVar21 = 1;
      uVar20 = 0;
      iVar12 = 0;
      iVar11 = 0;
    }
    else {
      puVar8 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 0x18);
      }
      uVar16 = *puVar8;
      if (uVar16 == 0) {
        iVar11 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar11 = iVar6 + -1;
        }
        uVar20 = 0;
        uVar21 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar21 = uVar20;
        }
        iVar11 = 0;
        do {
          if (uVar21 == uVar20) goto LAB_140876417;
          iVar11 = iVar11 + 0x20;
          uVar16 = puVar8[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar20 = 0;
        iVar11 = 0;
      }
      uVar21 = (ulonglong)(-uVar16 & uVar16);
      uVar7 = uVar21 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar12 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar12) {
        iVar12 = iVar6;
      }
    }
    if (iVar12 < iVar6) {
      local_c8 = (longlong *)(param_1 + 8);
      uVar16 = 0xffffffff;
      local_b8 = (uint *)(param_1 + 0x18);
      local_b0 = param_1;
      do {
        iVar6 = *(int *)(*local_c8 + 0x30 + (longlong)iVar12 * 0x40);
        uVar7 = (ulonglong)iVar6;
        local_d4 = iVar11;
        if (0 < (longlong)uVar7) {
          lVar17 = *local_c8 + (longlong)iVar12 * 0x40;
          iVar11 = -iVar6;
          lVar15 = uVar7 * 0x14;
          uVar14 = uVar7;
          do {
            lVar10 = *(longlong *)(lVar17 + 0x28);
            if (*(longlong *)(lVar17 + 0x28) == 0) {
              lVar10 = lVar17 + 0x10;
            }
            if (*(int *)(lVar10 + -8 + lVar15) == local_d8) {
              lVar9 = (longlong)(int)param_3[1];
              uVar13 = (int)param_3[1] + 1;
              *(uint *)(param_3 + 1) = uVar13;
              local_dc = uVar16;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar13) {
                local_d0 = lVar9;
                local_c0 = param_3;
                FUN_14087648e(param_3,lVar9);
                lVar9 = local_d0;
                param_3 = local_c0;
              }
              lVar10 = lVar10 + lVar15;
              lVar3 = *param_3;
              *(undefined4 *)(lVar3 + 0x10 + lVar9 * 0x14) = *(undefined4 *)(lVar10 + -4);
              uVar5 = *(undefined8 *)(lVar10 + -0xc);
              puVar2 = (undefined8 *)(lVar3 + lVar9 * 0x14);
              *puVar2 = *(undefined8 *)(lVar10 + -0x14);
              puVar2[1] = uVar5;
              uVar16 = *(uint *)(lVar17 + 0x30);
              if (uVar14 != uVar16) {
                lVar10 = *(longlong *)(lVar17 + 0x28);
                if (*(longlong *)(lVar17 + 0x28) == 0) {
                  lVar10 = lVar17 + 0x10;
                }
                memmove((void *)(lVar10 + lVar15 + -0x14),(void *)(lVar10 + lVar15),
                        (longlong)(int)(uVar16 + iVar11) * 0x14);
                uVar16 = *(uint *)(lVar17 + 0x30);
              }
              uVar7 = (ulonglong)(uVar16 - 1);
              *(uint *)(lVar17 + 0x30) = uVar16 - 1;
              uVar16 = local_dc;
            }
            iVar6 = (int)uVar7;
            iVar11 = iVar11 + 1;
            lVar15 = lVar15 + -0x14;
            bVar4 = 1 < uVar14;
            uVar14 = uVar14 - 1;
          } while (bVar4);
        }
        if (iVar6 == 0) {
          FUN_140da27c2(local_c8,iVar12);
        }
        uVar16 = uVar16 & ~(uint)uVar21;
        puVar8 = *(uint **)(local_b0 + 0x28);
        if (*(uint **)(local_b0 + 0x28) == (uint *)0x0) {
          puVar8 = local_b8;
        }
        iVar6 = *(int *)(local_b0 + 0x30);
        iVar12 = (int)uVar20;
        lVar17 = (longlong)iVar12;
        uVar13 = puVar8[lVar17] & uVar16;
        iVar11 = local_d4;
        if (uVar13 == 0) {
          iVar18 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar18 = iVar6 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar19 = iVar18;
          if (iVar18 < iVar12) {
            iVar19 = iVar12;
          }
          if (iVar18 <= iVar12) break;
          lVar15 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar13 = puVar8[lVar17 + lVar15 + 1];
            if (uVar13 != 0) break;
            lVar15 = lVar15 + 1;
            if (iVar19 - lVar17 == lVar15) goto LAB_140876417;
          }
          uVar20 = (ulonglong)(iVar12 + (int)lVar15 + 1);
          uVar16 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar13 & uVar13);
        uVar7 = uVar21 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar7 != 0) {
          for (; uVar7 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar12 = (iVar11 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar6);
    }
  }
LAB_140876417:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087648e FUN_14087648e body=373 status=ok
// SIG undefined FUN_14087648e(void)

void FUN_14087648e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140876517;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
    }
  }
LAB_140876517:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 140876604 FUN_140876604 body=1114 status=ok
// SIG undefined FUN_140876604(void)

void FUN_140876604(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  int iVar20;
  longlong lVar21;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  uint local_d8;
  int local_d4;
  longlong local_d0;
  longlong *local_c8;
  uint *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar7 = *(int *)(param_2 + 8);
  if ((short)iVar7 == -1) {
    plVar1 = (longlong *)(param_1 + 8);
    local_60 = param_1 + 0x18;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    uVar5 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_a8 = plVar1;
    local_80 = plVar1;
    local_78 = plVar1;
    if (local_90._4_4_ < *(int *)(local_60 + 0x18)) {
      iVar7 = local_90._4_4_;
      local_90 = uVar5;
      do {
        FUN_14755bf22(param_3,*local_a8 + (longlong)iVar7 * 0x38 + 8);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar7 = local_90._4_4_;
      } while (local_90._4_4_ < *(int *)(local_98 + 0x18));
      uVar5 = local_90;
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756b752(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
        uVar5 = local_90;
      }
    }
    local_90 = uVar5;
    FUN_14756b798(plVar1);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x30);
    if (iVar6 == 0) {
      uVar19 = 1;
      uVar12 = 0;
      iVar13 = 0;
      iVar20 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x18);
      }
      uVar16 = *puVar10;
      if (uVar16 == 0) {
        iVar20 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar20 = iVar6 + -1;
        }
        uVar12 = 0;
        uVar19 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar19 = uVar12;
        }
        iVar20 = 0;
        do {
          if (uVar19 == uVar12) goto LAB_1408769f2;
          iVar20 = iVar20 + 0x20;
          uVar16 = puVar10[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar12 = 0;
        iVar20 = 0;
      }
      uVar19 = (ulonglong)(-uVar16 & uVar16);
      uVar8 = uVar19 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar13 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar6 <= iVar13) {
        iVar13 = iVar6;
      }
    }
    if (iVar13 < iVar6) {
      local_c8 = (longlong *)(param_1 + 8);
      uVar16 = 0xffffffff;
      local_c0 = (uint *)(param_1 + 0x18);
      local_b8 = param_1;
      do {
        iVar6 = *(int *)(*local_c8 + 0x28 + (longlong)iVar13 * 0x38);
        uVar8 = (ulonglong)iVar6;
        local_d4 = iVar20;
        local_b0 = uVar12;
        if (0 < (longlong)uVar8) {
          lVar15 = *local_c8 + (longlong)iVar13 * 0x38;
          iVar20 = -iVar6;
          lVar21 = uVar8 * 0x14;
          uVar12 = uVar8;
          do {
            lVar11 = *(longlong *)(lVar15 + 0x20);
            if (*(longlong *)(lVar15 + 0x20) == 0) {
              lVar11 = lVar15 + 8;
            }
            if (*(int *)(lVar11 + -8 + lVar21) == iVar7) {
              lVar9 = (longlong)(int)param_3[1];
              uVar14 = (int)param_3[1] + 1;
              *(uint *)(param_3 + 1) = uVar14;
              if (*(uint *)((longlong)param_3 + 0xc) < uVar14) {
                local_e0 = param_3;
                local_d8 = uVar16;
                local_d0 = lVar9;
                FUN_14087648e(param_3,lVar9);
                lVar9 = local_d0;
                param_3 = local_e0;
                uVar16 = local_d8;
              }
              lVar11 = lVar11 + lVar21;
              lVar3 = *param_3;
              *(undefined4 *)(lVar3 + 0x10 + lVar9 * 0x14) = *(undefined4 *)(lVar11 + -4);
              uVar5 = *(undefined8 *)(lVar11 + -0xc);
              puVar2 = (undefined8 *)(lVar3 + lVar9 * 0x14);
              *puVar2 = *(undefined8 *)(lVar11 + -0x14);
              puVar2[1] = uVar5;
              uVar14 = *(uint *)(lVar15 + 0x28);
              if (uVar12 != uVar14) {
                lVar11 = *(longlong *)(lVar15 + 0x20);
                if (*(longlong *)(lVar15 + 0x20) == 0) {
                  lVar11 = lVar15 + 8;
                }
                local_e0 = param_3;
                memmove((void *)(lVar11 + lVar21 + -0x14),(void *)(lVar11 + lVar21),
                        (longlong)(int)(uVar14 + iVar20) * 0x14);
                uVar14 = *(uint *)(lVar15 + 0x28);
                param_3 = local_e0;
              }
              uVar8 = (ulonglong)(uVar14 - 1);
              *(uint *)(lVar15 + 0x28) = uVar14 - 1;
            }
            iVar6 = (int)uVar8;
            iVar20 = iVar20 + 1;
            lVar21 = lVar21 + -0x14;
            bVar4 = 1 < uVar12;
            uVar12 = uVar12 - 1;
          } while (bVar4);
        }
        if (iVar6 == 0) {
          FUN_140cc0dc4(local_c8,iVar13);
        }
        uVar16 = uVar16 & ~(uint)uVar19;
        puVar10 = *(uint **)(local_b8 + 0x28);
        if (*(uint **)(local_b8 + 0x28) == (uint *)0x0) {
          puVar10 = local_c0;
        }
        iVar6 = *(int *)(local_b8 + 0x30);
        iVar13 = (int)local_b0;
        lVar15 = (longlong)iVar13;
        uVar14 = puVar10[lVar15] & uVar16;
        uVar12 = local_b0;
        iVar20 = local_d4;
        if (uVar14 == 0) {
          iVar17 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar17 = iVar6 + -1;
          }
          iVar17 = iVar17 >> 5;
          iVar18 = iVar17;
          if (iVar17 < iVar13) {
            iVar18 = iVar13;
          }
          if (iVar17 <= iVar13) break;
          lVar21 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar14 = puVar10[lVar15 + lVar21 + 1];
            if (uVar14 != 0) break;
            lVar21 = lVar21 + 1;
            if (iVar18 - lVar15 == lVar21) goto LAB_1408769f2;
          }
          uVar12 = (ulonglong)(iVar13 + (int)lVar21 + 1);
          uVar16 = 0xffffffff;
        }
        uVar19 = (ulonglong)(-uVar14 & uVar14);
        uVar8 = uVar19 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar8 != 0) {
          for (; uVar8 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar13 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      } while (iVar13 < iVar6);
    }
  }
LAB_1408769f2:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140876a60 FUN_140876a60 body=931 status=ok
// SIG undefined FUN_140876a60(void)

void FUN_140876a60(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  undefined8 local_a0;
  uint *local_98;
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  undefined2 local_70;
  undefined8 local_68;
  uint *local_60;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar7 = *(int *)(param_2 + 8);
  plVar1 = (longlong *)(param_1 + 8);
  local_a8 = plVar1;
  local_80 = plVar1;
  local_78 = plVar1;
  if ((short)iVar7 == -1) {
    local_60 = (uint *)(param_1 + 0x18);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (*(int *)(param_1 + 0x30) != 0) {
      FUN_1449c0562(&local_68);
    }
    local_90 = local_58;
    uVar6 = local_90;
    local_88 = local_50;
    local_84 = local_4c;
    local_a0 = local_68;
    local_98 = local_60;
    local_70 = 0;
    local_90._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    if (local_90._4_4_ < (int)local_60[6]) {
      iVar7 = local_90._4_4_;
      local_90 = uVar6;
      do {
        FUN_14755bf22(param_3,*local_a8 + (longlong)iVar7 * 0x40 + 0x10);
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar7 = local_90._4_4_;
      } while (local_90._4_4_ < (int)local_98[6]);
      uVar6 = local_90;
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756b91c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
        uVar6 = local_90;
      }
    }
    local_90 = uVar6;
    FUN_14756b960(plVar1);
  }
  else {
    local_98 = (uint *)(param_1 + 0x18);
    iVar8 = *(int *)(param_1 + 0x30);
    uVar12 = 1;
    if (iVar8 == 0) {
      local_88 = 0;
      iVar10 = 0;
      iVar13 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar14 = local_98;
      }
      uVar18 = *puVar14;
      if (uVar18 == 0) {
        iVar13 = iVar8 + 0x1e;
        if (-1 < iVar8 + -1) {
          iVar13 = iVar8 + -1;
        }
        uVar17 = 0;
        uVar9 = (ulonglong)(uint)(iVar13 >> 5);
        if (iVar13 >> 5 < 1) {
          uVar9 = uVar17;
        }
        iVar10 = (int)uVar9 + 1;
        local_88 = (int)uVar9 * 0x20 + 0x20;
        iVar15 = 0;
        do {
          iVar13 = iVar8;
          if (uVar9 == uVar17) goto LAB_140876b37;
          iVar15 = iVar15 + 0x20;
          uVar18 = puVar14[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar18 == 0);
        iVar10 = (int)uVar17;
        local_88 = iVar15;
      }
      else {
        local_88 = 0;
        iVar10 = 0;
      }
      uVar12 = -uVar18 & uVar18;
      uVar9 = (ulonglong)uVar12 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar13 = (local_88 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar8 <= iVar13) {
        iVar13 = iVar8;
      }
    }
LAB_140876b37:
    local_a0 = CONCAT44(uVar12,iVar10);
    local_90 = CONCAT44(iVar13,0xffffffff);
    local_70 = 0;
    if (iVar13 < iVar8) {
      do {
        iVar8 = *(int *)(*local_a8 + 0x30 + (longlong)iVar13 * 0x40);
        uVar9 = (ulonglong)iVar8;
        if (0 < (longlong)uVar9) {
          lVar5 = *local_a8 + (longlong)iVar13 * 0x40;
          iVar13 = -iVar8;
          lVar16 = uVar9 * 0x14;
          uVar17 = uVar9;
          do {
            lVar11 = *(longlong *)(lVar5 + 0x28);
            if (*(longlong *)(lVar5 + 0x28) == 0) {
              lVar11 = lVar5 + 0x10;
            }
            if (*(int *)(lVar11 + -8 + lVar16) == iVar7) {
              iVar8 = (int)param_3[1];
              *(uint *)(param_3 + 1) = iVar8 + 1U;
              if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
                FUN_14087648e(param_3,iVar8);
              }
              lVar11 = lVar11 + lVar16;
              lVar3 = *param_3;
              *(undefined4 *)(lVar3 + 0x10 + (longlong)iVar8 * 0x14) = *(undefined4 *)(lVar11 + -4);
              uVar6 = *(undefined8 *)(lVar11 + -0xc);
              puVar2 = (undefined8 *)(lVar3 + (longlong)iVar8 * 0x14);
              *puVar2 = *(undefined8 *)(lVar11 + -0x14);
              puVar2[1] = uVar6;
              uVar12 = *(uint *)(lVar5 + 0x30);
              if (uVar17 != uVar12) {
                lVar11 = *(longlong *)(lVar5 + 0x28);
                if (*(longlong *)(lVar5 + 0x28) == 0) {
                  lVar11 = lVar5 + 0x10;
                }
                memmove((void *)(lVar11 + lVar16 + -0x14),(void *)(lVar11 + lVar16),
                        (longlong)(int)(uVar12 + iVar13) * 0x14);
                uVar12 = *(uint *)(lVar5 + 0x30);
              }
              uVar9 = (ulonglong)(uVar12 - 1);
              *(uint *)(lVar5 + 0x30) = uVar12 - 1;
            }
            iVar8 = (int)uVar9;
            iVar13 = iVar13 + 1;
            lVar16 = lVar16 + -0x14;
            bVar4 = 1 < uVar17;
            uVar17 = uVar17 - 1;
          } while (bVar4);
        }
        if (iVar8 == 0) {
          FUN_1461f10d4(local_80,local_90._4_4_);
          local_70 = CONCAT11(local_70._1_1_,1);
        }
        local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar13 = local_90._4_4_;
      } while (local_90._4_4_ < (int)local_98[6]);
      if (((local_70 & 1) != 0) && (local_70._1_1_ == '\x01')) {
        FUN_14756b91c(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34));
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140876e04 FUN_140876e04 body=1150 status=ok
// SIG undefined FUN_140876e04(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140876e04(longlong *param_1,longlong param_2,double *param_3,int param_4,longlong *param_5)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  ulonglong uVar4;
  byte bVar5;
  undefined1 *puVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  double *_Dst;
  double *_Src;
  undefined2 *puVar10;
  undefined1 *puVar11;
  double *pdVar12;
  double *pdVar13;
  longlong lVar14;
  size_t _Size;
  longlong *plVar15;
  double dStack_8e8;
  longlong local_8e0;
  longlong local_8d8;
  undefined8 local_8d0;
  longlong *local_8c8;
  ulonglong local_8c0;
  double *local_8b8;
  int local_8ac;
  double local_8a8;
  double local_8a0;
  double local_898;
  undefined1 *local_890;
  int local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  char local_868 [8];
  undefined1 local_860 [2070];
  undefined1 local_4a [2];
  ulonglong local_48;
  
  pdVar12 = &dStack_8e8;
  local_48 = DAT_14c707940 ^ (ulonglong)local_868;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  local_8e0 = param_2;
  local_8c8 = param_1;
  local_8ac = param_4;
  if ((*(short *)(param_2 + 0xb8) != -1) || (pdVar13 = param_3, 1 < *(byte *)(param_2 + 0xb4))) {
    if (uVar1 == 0) {
      pdVar13 = (double *)0x0;
      pdVar12 = &dStack_8e8;
    }
    else {
      lVar9 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      pdVar13 = (double *)((longlong)&dStack_8e8 + lVar9);
      pdVar12 = (double *)((longlong)&dStack_8e8 + lVar9);
    }
    plVar15 = *(longlong **)(param_2 + 0x70);
    local_8b8 = param_3;
    if (plVar15 != (longlong *)0x0) {
      local_8d8 = (longlong)param_4;
      bVar5 = 1;
      do {
        if (*(int *)((longlong)plVar15 + 0x34) * (int)plVar15[6] +
            *(int *)((longlong)plVar15 + 0x44) <= (int)(uint)uVar1) {
          local_8a8 = (double)plVar15[4];
          local_868[0] = '\0';
          local_880 = local_860;
          local_870 = local_4a;
          local_878 = local_880;
          *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140876ee8;
          FUN_14005eb5c(&local_8a8);
          local_890 = local_880;
          local_888 = (int)((ulonglong)((longlong)local_878 - (longlong)local_880) >> 1);
          if (0 < local_888) {
            iVar8 = 0;
            do {
              iVar8 = iVar8 + 1;
            } while (local_888 != iVar8);
          }
          *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140876f6e;
          iVar8 = FUN_140877288(param_5);
          lVar9 = (longlong)iVar8 * 0x28 + *param_5;
          if (iVar8 == -1) {
            lVar9 = 0;
          }
          if (lVar9 == 0) {
            if ((*(byte *)((longlong)plVar15 + 0x39) & 2) == 0) {
              iVar8 = *(int *)((longlong)plVar15 + 0x44);
              pcVar3 = *(code **)(*plVar15 + 0x160);
              *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140877060;
              (*pcVar3)(plVar15,(longlong)iVar8 + (longlong)pdVar13);
            }
            else {
              iVar8 = *(int *)((longlong)plVar15 + 0x34);
              lVar9 = plVar15[6];
              iVar2 = *(int *)((longlong)plVar15 + 0x44);
              *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140876fbe;
              memset((void *)((longlong)iVar2 + (longlong)pdVar13),0,
                     (longlong)(int)lVar9 * (longlong)iVar8);
            }
          }
          else {
            if (*(int *)(lVar9 + 0x18) == 0) {
              puVar10 = &DAT_149dfb77a;
            }
            else {
              puVar10 = *(undefined2 **)(lVar9 + 0x10);
            }
            local_8c0 = (ulonglong)*(int *)((longlong)plVar15 + 0x44);
            local_8d0 = DAT_14c872be8;
            *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x1408770fe;
            cVar7 = FUN_140d50488(plVar15,0);
            if ((puVar10 != (undefined2 *)0x0) && (cVar7 != '\0')) {
              lVar14 = local_8c0 + (longlong)pdVar13;
              lVar9 = *plVar15;
              *(undefined8 *)((longlong)pdVar12 + -0x10) = local_8d0;
              *(longlong **)((longlong)pdVar12 + -0x20) = local_8c8;
              *(undefined4 *)((longlong)pdVar12 + -0x18) = 0x8000000;
              pcVar3 = *(code **)(lVar9 + 0xf8);
              *(undefined8 *)((longlong)pdVar12 + -0x48) = 0x14087714a;
              (*pcVar3)(plVar15,puVar10,lVar14,0);
            }
          }
          if ((bool)((*(uint *)(plVar15 + 7) & 0x480) == 0x80 & bVar5)) {
            iVar8 = *(int *)((longlong)plVar15 + 0x34);
            if ((local_8ac == 0xc) && (lVar9 = plVar15[0xe], lVar9 != 0 && iVar8 == 0x18)) {
              local_8c0 = *(ulonglong *)(lVar9 + 0x18);
              *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140877199;
              FUN_1401a700c(&local_8a8,0x3b);
              if (local_8c0 != ((ulonglong)local_8a8 & 0xffffffff)) {
                uVar4 = *(ulonglong *)(lVar9 + 0x18);
                *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x1408771bf;
                FUN_1401a700c(&local_8a8,0x49);
                if (uVar4 != ((ulonglong)local_8a8 & 0xffffffff)) {
                  iVar8 = *(int *)((longlong)plVar15 + 0x34);
                  goto LAB_140877006;
                }
              }
              local_898 = (double)*(float *)(local_8b8 + 1);
              local_8a0 = (double)*(float *)((longlong)local_8b8 + 4);
              local_8a8 = (double)*(float *)local_8b8;
              _Dst = (double *)((longlong)*(int *)((longlong)plVar15 + 0x44) + (longlong)pdVar13);
              if (_Dst != &local_8a8) {
                if ((*(byte *)((longlong)plVar15 + 0x3b) & 0x40) == 0) {
                  pcVar3 = *(code **)(*plVar15 + 0x100);
                  *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140877228;
                  (*pcVar3)(plVar15,_Dst);
                }
                else {
                  _Size = (longlong)(int)plVar15[6] * (longlong)*(int *)((longlong)plVar15 + 0x34);
                  _Src = &local_8a8;
LAB_14087703e:
                  *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140877043;
                  memcpy(_Dst,_Src,_Size);
                }
              }
            }
            else {
LAB_140877006:
              puVar6 = local_880;
              if (iVar8 != local_8ac) {
                if (local_868[0] != '\x01') goto LAB_140877081;
                puVar11 = (undefined1 *)((longlong)pdVar12 + -0x20);
                *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x14087725d;
                FUN_1400020a8(puVar6);
                goto LAB_14087707d;
              }
              _Dst = (double *)((longlong)*(int *)((longlong)plVar15 + 0x44) + (longlong)pdVar13);
              if (_Dst != local_8b8) {
                if ((*(byte *)((longlong)plVar15 + 0x3b) & 0x40) != 0) {
                  _Size = (int)plVar15[6] * local_8d8;
                  _Src = local_8b8;
                  goto LAB_14087703e;
                }
                pcVar3 = *(code **)(*plVar15 + 0x100);
                *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x140877241;
                (*pcVar3)(plVar15);
              }
            }
          }
          puVar6 = local_880;
          if (local_868[0] == '\x01') {
            *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x1408770c3;
            FUN_1400020a8(puVar6);
          }
          bVar5 = 0;
        }
        plVar15 = (longlong *)plVar15[9];
      } while (plVar15 != (longlong *)0x0);
    }
  }
  plVar15 = local_8c8;
  lVar9 = local_8e0;
  puVar11 = (undefined1 *)((longlong)pdVar12 + -0x20);
  pcVar3 = *(code **)(*local_8c8 + 0x248);
  *(undefined8 *)((longlong)pdVar12 + -0x28) = 0x14087707d;
  (*pcVar3)(plVar15,lVar9,pdVar13);
LAB_14087707d:
  pdVar12 = (double *)(puVar11 + 0x20);
LAB_140877081:
  if ((local_48 ^ (ulonglong)local_868) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)pdVar12 + -0x28) = &UNK_1408770b1;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140877288 FUN_140877288 body=168 status=ok
// SIG undefined FUN_140877288(void)

int FUN_140877288(longlong *param_1,uint param_2,undefined4 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        uStack_44 = param_3[1];
        uStack_40 = param_3[2];
        uStack_3c = param_3[3];
        cVar1 = FUN_14277ac86(lVar3 + (longlong)iVar4 * 0x28,&local_48);
        if (cVar1 != '\0') goto LAB_1408772af;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x20 + (longlong)iVar4 * 0x28);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1408772af:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 140877332 thunk_FUN_140877338 body=5 status=ok
// SIG undefined thunk_FUN_140877338(void)

ulonglong thunk_FUN_140877338(ulonglong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined1 auStack_168 [40];
  ulonglong uStack_140;
  ulonglong uStack_138;
  undefined1 auStack_12c [4];
  ulonglong *puStack_128;
  ulonglong *puStack_120;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_88;
  longlong *plStack_78;
  longlong alStack_68 [5];
  ulonglong uStack_40;
  
  uStack_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uStack_138 = param_1;
  if (param_1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x152);
    if (bVar2 != 1) {
      uVar7 = 0;
      if ((6 < bVar2) || (uVar7 = 0, (0x68U >> (bVar2 & 0x1f) & 1) == 0)) goto LAB_140877457;
    }
    if ((*(byte *)(param_1 + 0x155) & 0x20) == 0) {
      if (DAT_14cb7f9a0 != DAT_14cb7f9cc) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar10 = &DAT_14cb7f9d0;
        if (DAT_14cb7f9d8 != (undefined *)0x0) {
          puVar10 = DAT_14cb7f9d8;
        }
        iVar4 = *(int *)(puVar10 + (ulonglong)(DAT_14cb7f9e0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar4 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb7f998 + (longlong)iVar4 * 0x18);
          if (*puVar1 == param_1) {
            if ((puVar1 != (ulonglong *)0x0) && (uVar7 = puVar1[1], puVar1[1] != 0))
            goto LAB_140877457;
            break;
          }
          iVar4 = (int)puVar1[2];
        }
      }
      iVar4 = FUN_14490d72a(param_1);
      if (iVar4 != 3) {
        if ((DAT_14c86a9f8 != '\x01') ||
           (iVar4 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar4 == 2)) {
LAB_1408774ae:
          uStack_a8 = 0;
          uStack_a0 = 0;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          lStack_88 = 0;
          plStack_78 = (longlong *)0x0;
          uStack_98 = 0x4800080101;
          uVar8 = FUN_14069ec50();
          puStack_128 = (ulonglong *)0x0;
          puStack_120 = (ulonglong *)0x0;
          uStack_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0x3ff00000;
          uStack_108 = 0;
          uStack_100 = 0;
          uStack_f8 = 0;
          uStack_f0 = 0;
          uStack_e8 = 0;
          uStack_e4 = 0x3ff00000;
          uStack_e0 = 0;
          uStack_dc = 0x3ff00000;
          uStack_d8 = 0x3ff0000000000000;
          uStack_d0 = 0;
          uStack_140 = FUN_141037e38(param_1,uVar8,&puStack_128,&uStack_c8);
          puStack_120 = &uStack_140;
          puStack_128 = &uStack_138;
          FUN_1457507c6(auStack_12c,&puStack_128);
          uVar7 = uStack_140;
          if (lStack_88 != 0) {
            plVar9 = plStack_78;
            if (plStack_78 == (longlong *)0x0) {
              plVar9 = alStack_68;
            }
            (**(code **)(*plVar9 + 0x10))();
            uVar7 = uStack_140;
          }
          goto LAB_140877457;
        }
        if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_1408774ae;
        }
      }
    }
  }
  uVar7 = 0;
LAB_140877457:
  if ((uStack_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140877338 FUN_140877338 body=573 status=ok
// SIG undefined FUN_140877338(void)

ulonglong FUN_140877338(ulonglong param_1)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  undefined *puVar10;
  undefined1 auStack_168 [40];
  ulonglong local_140;
  ulonglong local_138;
  undefined1 local_12c [4];
  ulonglong *local_128;
  ulonglong *puStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_138 = param_1;
  if (param_1 != 0) {
    bVar2 = *(byte *)(param_1 + 0x152);
    if (bVar2 != 1) {
      uVar7 = 0;
      if ((6 < bVar2) || (uVar7 = 0, (0x68U >> (bVar2 & 0x1f) & 1) == 0)) goto LAB_140877457;
    }
    if ((*(byte *)(param_1 + 0x155) & 0x20) == 0) {
      if (DAT_14cb7f9a0 != DAT_14cb7f9cc) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar10 = &DAT_14cb7f9d0;
        if (DAT_14cb7f9d8 != (undefined *)0x0) {
          puVar10 = DAT_14cb7f9d8;
        }
        iVar4 = *(int *)(puVar10 + (ulonglong)(DAT_14cb7f9e0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar4 != -1) {
          puVar1 = (ulonglong *)(DAT_14cb7f998 + (longlong)iVar4 * 0x18);
          if (*puVar1 == param_1) {
            if ((puVar1 != (ulonglong *)0x0) && (uVar7 = puVar1[1], puVar1[1] != 0))
            goto LAB_140877457;
            break;
          }
          iVar4 = (int)puVar1[2];
        }
      }
      iVar4 = FUN_14490d72a(param_1);
      if (iVar4 != 3) {
        if ((DAT_14c86a9f8 != '\x01') ||
           (iVar4 = *(int *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0xc60), iVar4 == 2)) {
LAB_1408774ae:
          local_a8 = 0;
          uStack_a0 = 0;
          local_b8 = 0;
          uStack_b0 = 0;
          local_c8 = 0;
          uStack_c0 = 0;
          local_88 = 0;
          local_78 = (longlong *)0x0;
          local_98 = 0x4800080101;
          uVar8 = FUN_14069ec50();
          local_128 = (ulonglong *)0x0;
          puStack_120 = (ulonglong *)0x0;
          local_118 = 0;
          uStack_114 = 0;
          uStack_110 = 0;
          uStack_10c = 0x3ff00000;
          local_108 = 0;
          uStack_100 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_e8 = 0;
          uStack_e4 = 0x3ff00000;
          uStack_e0 = 0;
          uStack_dc = 0x3ff00000;
          local_d8 = 0x3ff0000000000000;
          uStack_d0 = 0;
          local_140 = FUN_141037e38(param_1,uVar8,&local_128,&local_c8);
          puStack_120 = &local_140;
          local_128 = &local_138;
          FUN_1457507c6(local_12c,&local_128);
          uVar7 = local_140;
          if (local_88 != 0) {
            plVar9 = local_78;
            if (local_78 == (longlong *)0x0) {
              plVar9 = local_68;
            }
            (**(code **)(*plVar9 + 0x10))();
            uVar7 = local_140;
          }
          goto LAB_140877457;
        }
        if (iVar4 == 1) {
          DVar5 = FUN_140ad26c0();
          DVar6 = GetCurrentThreadId();
          if (DVar5 == DVar6) goto LAB_1408774ae;
        }
      }
    }
  }
  uVar7 = 0;
LAB_140877457:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140877576 FUN_140877576 body=277 status=ok
// SIG undefined FUN_140877576(void)

void FUN_140877576(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1aab90;
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x9a) = 0;
  if (param_1[0x99] != 0) {
    FUN_1400020a8();
  }
  FUN_14087768c(param_1 + 0x91);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1408776c4(param_1 + 0x87);
  FUN_14064ee12(param_1);
  return;
}



// FUNCTION 14087768c FUN_14087768c body=55 status=ok
// SIG undefined FUN_14087768c(void)

void FUN_14087768c(longlong *param_1)

{
  FUN_1408776fc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408776c4 FUN_1408776c4 body=55 status=ok
// SIG undefined FUN_1408776c4(void)

void FUN_1408776c4(longlong *param_1)

{
  FUN_140877778(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408776fc FUN_1408776fc body=123 status=ok
// SIG undefined FUN_1408776fc(void)

void FUN_1408776fc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 140877778 FUN_140877778 body=123 status=ok
// SIG undefined FUN_140877778(void)

void FUN_140877778(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1408777fa FUN_1408777fa body=1404 status=ok
// SIG undefined FUN_1408777fa(void)

void FUN_1408777fa(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 *local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(uint *)(param_1 + 8) & 0x10) != 0) ||
     (puVar3 = *(undefined8 **)(param_1 + 0x248), puVar3 == (undefined8 *)0x0)) goto LAB_140877958;
  *(undefined8 *)(param_1 + 0x248) = 0;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_14087785e;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140877863;
      goto LAB_14087789a;
    }
LAB_140877863:
    LOCK();
    piVar1 = (int *)(puVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      puVar10 = (undefined8 *)*puVar3;
      puVar18 = puVar3;
LAB_140877873:
      (*(code *)*puVar10)(puVar18,1);
    }
  }
  else {
LAB_14087785e:
    if (iVar7 == 0x10) goto LAB_140877863;
LAB_14087789a:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar7 = *(int *)(lVar4 + 0xc60), iVar7 == 2))
      goto LAB_140877863;
      if (iVar7 == 1) {
        DVar8 = FUN_140ad26c0();
        DVar9 = GetCurrentThreadId();
        if (DVar8 == DVar9) goto LAB_140877863;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar10 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar12 = (uint *)*puVar10;
      if (puVar12 != (uint *)0x0) goto LAB_140877aa4;
      while( true ) {
        uVar14 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar14 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar14 | 1;
          __tlregdtor(&LAB_143574684);
        }
        lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar11 = *(undefined4 **)(lVar4 + 0x310);
        *(undefined8 *)(lVar4 + 0x310) = 0;
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar11 = 0xffffffff;
        *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar10 = puVar11;
        FUN_140217a48(puVar10);
        puVar12 = (uint *)*puVar10;
LAB_140877aa4:
        puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar16 = (uint *)(puVar18 + 0x16);
        uVar14 = puVar12[0x12];
        if (puVar16 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar2 = *puVar12;
          *puVar12 = *puVar12 + uVar14 + 1;
          UNLOCK();
          if ((uVar2 ^ uVar14) != 0xffffffff) break;
          puVar12 = (uint *)*puVar10;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar10 = puVar12;
          puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x16);
          uVar14 = 0;
          if (puVar16 <= puVar12 + 0x4000) {
            uVar14 = 1;
            goto LAB_140877b24;
          }
        }
      }
      uVar14 = uVar14 + 1;
LAB_140877b24:
      *(uint **)(puVar12 + 0x10) = puVar16;
      puVar12[0x12] = uVar14;
      iVar7 = 0;
      FUN_1447247dc(puVar18,0);
      *puVar18 = &PTR_FUN_14a9d4850;
      puVar18[0x15] = puVar3;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar14 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
          uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
        }
        else {
          uVar17 = 2;
        }
      }
      else {
        iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar17 = 5;
      }
      if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
      }
      puVar18[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar18[9] = puVar18;
      puVar18[10] = puVar18;
      lVar4 = *(longlong *)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x2b8);
      if (lVar4 == 0) {
        uVar6 = 1;
        if ((char)uVar17 != '\x06') {
          uVar6 = uVar17;
        }
        uVar17 = uVar6;
        uVar13 = 0;
      }
      else {
        if ((char)uVar17 == '\x06') {
          uVar17 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
        }
        uVar13 = *(undefined8 *)(lVar4 + 0x30);
      }
      puVar18[0xf] = uVar13;
      puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar18 + 0x1c) = iVar7;
      if (puVar18 == (undefined8 *)0x0) {
        local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
        FUN_1447439e4(0);
        goto LAB_140877931;
      }
      LOCK();
      *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
      UNLOCK();
      local_68[0] = (undefined *)CONCAT71(local_68[0]._1_7_,1);
      FUN_1447439e4(puVar18);
      LOCK();
      piVar1 = (int *)(puVar18 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 != 0) goto LAB_140877931;
      puVar10 = (undefined8 *)*puVar18;
      goto LAB_140877873;
    }
    local_78 = local_68;
    local_58 = (undefined ***)0x0;
    local_48 = &PTR_LAB_14a9d4830;
    local_68[0] = &DAT_1435754a8;
    local_40 = puVar3;
    FUN_14005a792(&DAT_14ca9a440,L"FDestroyMaterialInstanceResourceCommand",&DAT_14caec358);
    if (local_68[0] != (undefined *)0x0) {
      pppuVar15 = local_58;
      if (local_58 == (undefined ***)0x0) {
        pppuVar15 = &local_48;
      }
      (*(code *)(*pppuVar15)[2])();
    }
  }
LAB_140877931:
  puVar3 = *(undefined8 **)(param_1 + 0x248);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x248) = 0;
    LOCK();
    piVar1 = (int *)(puVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
LAB_140877958:
  iVar7 = *(int *)(param_1 + 0x2d0);
  if ((longlong)iVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2c8);
    lVar19 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar4 + lVar19);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)iVar7 * 8 != lVar19);
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_14063db1c(param_1 + 0x2c8,0);
  }
  plVar5 = *(longlong **)(param_1 + 0x2b0);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x2b0) = 0;
    if (*plVar5 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar5);
  }
  FUN_14063dadc(param_1);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140877d78 FUN_140877d78 body=380 status=ok
// SIG undefined FUN_140877d78(void)

longlong FUN_140877d78(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140877ef4();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 140877ef4 FUN_140877ef4 body=228 status=ok
// SIG undefined FUN_140877ef4(void)

longlong FUN_140877ef4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbbf218 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7ae1;
    local_40 = FUN_1466111e1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_Difficulty",&DAT_14cbbf218,
                  &DAT_148ca7ae0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf218;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140877fda FUN_140877fda body=11400 status=ok
// SIG undefined FUN_140877fda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140877fda(longlong *param_1,ulonglong *param_2,longlong *param_3,ulonglong *param_4)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  undefined7 uVar8;
  uint uVar9;
  longlong lVar10;
  ushort uVar11;
  int iVar12;
  ulonglong uVar13;
  double *pdVar14;
  float *pfVar15;
  undefined2 *puVar16;
  undefined *puVar17;
  ushort uVar18;
  undefined8 *puVar19;
  undefined2 *puVar20;
  wchar_t *pwVar21;
  bool bVar22;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined2 *local_f0;
  wchar_t *local_e8;
  code *local_e0;
  undefined2 *local_d8;
  int local_d0;
  undefined2 *local_c8;
  int local_c0;
  wchar_t *local_b8;
  int local_b0;
  undefined2 *local_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined2 *local_78;
  undefined8 uStack_70;
  undefined2 *local_68;
  undefined8 uStack_60;
  int local_58;
  undefined4 local_54;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,param_3);
  uVar8 = (undefined7)((ulonglong)param_3 >> 8);
  if (cVar3 == '\0') {
    if (param_1 == (longlong *)0x0) goto LAB_140878bed;
    puVar19 = (undefined8 *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_1408a629c;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f0 = (undefined2 *)0x0;
      local_f8 = (undefined2 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
    if (DAT_14c952380 == 0) {
      bVar22 = puVar19 != (undefined8 *)0x0;
      if (puVar19 != &DAT_14c952378 && bVar22) {
        do {
          puVar19 = (undefined8 *)puVar19[6];
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 == &DAT_14c952378) break;
        } while (puVar19 != (undefined8 *)0x0);
      }
      if (!bVar22) goto LAB_1408780f0;
LAB_140878067:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_14079c5e4;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f8 = (undefined2 *)0x101008001;
          local_f0 = (undefined2 *)0x0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
        }
        if (DAT_14c9523d8 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c9523d0 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c9523d0) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14087828c;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) {
LAB_14087828c:
          if ((int)param_1[6] == (int)param_3[6]) {
            uVar5 = CONCAT71(uVar8,1);
            if (0 < (int)param_1[6]) {
              lVar4 = 0;
              do {
                *(float *)((longlong)param_2 + lVar4 * 4) = (float)(double)param_4[lVar4];
                lVar4 = lVar4 + 1;
              } while (lVar4 < (int)param_1[6]);
            }
            goto LAB_140878c3c;
          }
        }
      }
      goto LAB_140878bed;
    }
    if ((puVar19[3] & DAT_14c952380) != 0) goto LAB_140878067;
LAB_1408780f0:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_14079c5e4;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f8 = (undefined2 *)0x101008001;
      local_f0 = (undefined2 *)0x0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
    if (DAT_14c9523d8 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c9523d0 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c9523d0) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_1408781b8;
LAB_14087812f:
      if (param_3 != (longlong *)0x0) {
        puVar19 = (undefined8 *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9523c8) &&
           (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_1408a629c;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
        if (DAT_14c952380 == 0) {
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 != &DAT_14c952378 && bVar22) {
            do {
              puVar19 = (undefined8 *)puVar19[6];
              bVar22 = puVar19 != (undefined8 *)0x0;
              if (puVar19 == &DAT_14c952378) break;
            } while (puVar19 != (undefined8 *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_1408783cf;
        }
        else if ((puVar19[3] & DAT_14c952380) != 0) {
LAB_1408783cf:
          if ((int)param_1[6] == (int)param_3[6]) {
            uVar5 = CONCAT71(uVar8,1);
            if (0 < (int)param_1[6]) {
              lVar4 = 0;
              do {
                param_2[lVar4] = (ulonglong)(double)*(float *)((longlong)param_4 + lVar4 * 4);
                lVar4 = lVar4 + 1;
              } while (lVar4 < (int)param_1[6]);
            }
            goto LAB_140878c3c;
          }
        }
      }
      goto LAB_140878bed;
    }
    if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) goto LAB_14087812f;
LAB_1408781b8:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_1468e0f50;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x1008001;
        FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
        atexit(FUN_142816f26);
        _Init_thread_footer(&DAT_14c952108);
      }
      local_e0 = FUN_1409f1a5c;
      local_e8 = (wchar_t *)&DAT_14c9520b8;
      local_f0 = (undefined2 *)0x0;
      local_f8 = (undefined2 *)0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
    if (DAT_14c951d30 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c951d28 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c951d28) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_1408782fb;
LAB_1408781fb:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9496d8) &&
           (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_e8 = (wchar_t *)FUN_140342cba();
            local_e0 = FUN_1468c7f1e;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_e0 = FUN_140a4831c;
          local_e8 = (wchar_t *)&DAT_14c951a38;
          local_f8 = (undefined2 *)0x1000000008001;
          local_f0 = (undefined2 *)0x0;
          FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
          atexit(FUN_1427e14fe);
          _Init_thread_footer(&DAT_14c9496d8);
        }
        if (DAT_14c949690 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c949688 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c949688) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_1408784cb;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) {
LAB_1408784cb:
          if (param_1[0xe] == param_3[0xf]) goto LAB_140878c00;
        }
      }
      goto LAB_140878bed;
    }
    if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) goto LAB_1408781fb;
LAB_1408782fb:
    puVar17 = (undefined *)param_1[1];
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_e8 = (wchar_t *)FUN_140342cba();
        local_e0 = FUN_1468c7f1e;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      local_e0 = FUN_140a4831c;
      local_e8 = (wchar_t *)&DAT_14c951a38;
      local_f8 = (undefined2 *)0x1000000008001;
      local_f0 = (undefined2 *)0x0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
    if (DAT_14c949690 == 0) {
      bVar22 = puVar17 != (undefined *)0x0;
      if (puVar17 != &DAT_14c949688 && bVar22) {
        do {
          puVar17 = *(undefined **)(puVar17 + 0x30);
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 == &DAT_14c949688) break;
        } while (puVar17 != (undefined *)0x0);
      }
      if (!bVar22) goto LAB_14087843e;
LAB_14087833e:
      if (param_3 != (longlong *)0x0) {
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d78) &&
           (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_e8 = (wchar_t *)FUN_140342cba();
              local_e0 = FUN_1468c7f1e;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_e0 = FUN_1468e0f50;
            local_e8 = (wchar_t *)&DAT_14c951a38;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008001;
            FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
            atexit(FUN_142816f26);
            _Init_thread_footer(&DAT_14c952108);
          }
          local_e0 = FUN_1409f1a5c;
          local_e8 = (wchar_t *)&DAT_14c9520b8;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x1008041;
          FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
          atexit(FUN_14281201f);
          _Init_thread_footer(&DAT_14c951d78);
        }
        if (DAT_14c951d30 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c951d28 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c951d28) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_1408785a2;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) {
LAB_1408785a2:
          if (param_3[0xe] == param_1[0xf]) goto LAB_140878c00;
        }
      }
    }
    else {
      if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) goto LAB_14087833e;
LAB_14087843e:
      puVar17 = (undefined *)param_1[1];
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_e8 = (wchar_t *)FUN_140342cba();
          local_e0 = FUN_1468c7f1e;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_e0 = FUN_140b31576;
        local_e8 = (wchar_t *)&DAT_14c951a38;
        local_f0 = (undefined2 *)0x0;
        local_f8 = (undefined2 *)0x208001;
        FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
        atexit(FUN_14280cbf7);
        _Init_thread_footer(&DAT_14c951ae0);
      }
      if (DAT_14c951a98 == 0) {
        bVar22 = puVar17 != (undefined *)0x0;
        if (puVar17 != &DAT_14c951a90 && bVar22) {
          do {
            puVar17 = *(undefined **)(puVar17 + 0x30);
            bVar22 = puVar17 != (undefined *)0x0;
            if (puVar17 == &DAT_14c951a90) break;
          } while (puVar17 != (undefined *)0x0);
        }
        if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_14087851e;
      }
      else if ((param_3 != (longlong *)0x0) &&
              ((DAT_14c951a98 & *(ulonglong *)(puVar17 + 0x18)) != 0)) {
LAB_14087851e:
        puVar17 = (undefined *)param_3[1];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951ae0) &&
           (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
            local_e8 = (wchar_t *)FUN_140342cba();
            local_e0 = FUN_1468c7f1e;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x8001;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
          local_e0 = FUN_140b31576;
          local_e8 = (wchar_t *)&DAT_14c951a38;
          local_f0 = (undefined2 *)0x0;
          local_f8 = (undefined2 *)0x208001;
          FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
          atexit(FUN_14280cbf7);
          _Init_thread_footer(&DAT_14c951ae0);
        }
        if (DAT_14c951a98 == 0) {
          bVar22 = puVar17 != (undefined *)0x0;
          if (puVar17 != &DAT_14c951a90 && bVar22) {
            do {
              puVar17 = *(undefined **)(puVar17 + 0x30);
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 == &DAT_14c951a90) break;
            } while (puVar17 != (undefined *)0x0);
          }
          if (!(bool)(bVar22 ^ 1U | param_3 == (longlong *)0x0)) goto LAB_1408785f5;
        }
        else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951a98) != 0) {
LAB_1408785f5:
          bVar1 = *(byte *)(param_1 + 0xe);
          local_54 = (**(code **)(*(longlong *)param_1[0xf] + 0x178))();
          local_68 = (undefined2 *)param_1[0xf];
          local_58 = *(int *)(local_68 + 0x1a);
          bVar2 = *(byte *)(param_3 + 0xe);
          uStack_60 = param_2;
          local_50 = bVar1;
          (**(code **)(*(longlong *)param_3[0xf] + 0x178))();
          iVar12 = *(int *)(param_3[0xf] + 0x34);
          puVar19 = *(undefined8 **)(param_1[0xf] + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_1468e0f50;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008001;
              FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
              atexit(FUN_142816f26);
              _Init_thread_footer(&DAT_14c952108);
            }
            local_e0 = FUN_1408a629c;
            local_e8 = (wchar_t *)&DAT_14c9520b8;
            local_f0 = (undefined2 *)0x0;
            local_f8 = (undefined2 *)0x1008101;
            FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
            atexit(FUN_14281708e);
            _Init_thread_footer(&DAT_14c9523c8);
          }
          if (DAT_14c952380 != 0) {
            if ((puVar19[3] & DAT_14c952380) != 0) goto LAB_140878690;
LAB_140878716:
            puVar17 = *(undefined **)(param_1[0xf] + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_14079c5e4;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f8 = (undefined2 *)0x101008001;
              local_f0 = (undefined2 *)0x0;
              FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
              atexit(FUN_1428170bb);
              _Init_thread_footer(&DAT_14c952420);
            }
            if (DAT_14c9523d8 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c9523d0 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c9523d0) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (!bVar22) goto LAB_1408788c5;
LAB_14087875e:
              puVar19 = *(undefined8 **)(param_3[0xf] + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c9523c8) &&
                 (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c952108) &&
                   (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951a88) &&
                     (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                    local_e8 = (wchar_t *)FUN_140342cba();
                    local_e0 = FUN_1468c7f1e;
                    local_f0 = (undefined2 *)0x0;
                    local_f8 = (undefined2 *)0x8001;
                    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                    atexit(FUN_14280c819);
                    _Init_thread_footer(&DAT_14c951a88);
                  }
                  local_e0 = FUN_1468e0f50;
                  local_e8 = (wchar_t *)&DAT_14c951a38;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x1008001;
                  FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                  atexit(FUN_142816f26);
                  _Init_thread_footer(&DAT_14c952108);
                }
                local_e0 = FUN_1408a629c;
                local_e8 = (wchar_t *)&DAT_14c9520b8;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008101;
                FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
                atexit(FUN_14281708e);
                _Init_thread_footer(&DAT_14c9523c8);
              }
              if (DAT_14c952380 == 0) {
                bVar22 = puVar19 != (undefined8 *)0x0;
                if (puVar19 != &DAT_14c952378 && bVar22) {
                  do {
                    puVar19 = (undefined8 *)puVar19[6];
                    bVar22 = puVar19 != (undefined8 *)0x0;
                    if (puVar19 == &DAT_14c952378) break;
                  } while (puVar19 != (undefined8 *)0x0);
                }
                if (bVar22) goto LAB_1408789a5;
              }
              else if ((puVar19[3] & DAT_14c952380) != 0) {
LAB_1408789a5:
                FUN_144a8a902(&local_68);
                if (0 < (int)uStack_60[1]) {
                  lVar4 = 0;
                  lVar10 = 0;
                  do {
                    if ((local_50 & 1) == 0) {
                      uVar5 = *uStack_60;
                    }
                    else {
                      uVar5 = *uStack_60;
                      if ((uVar5 & 1) != 0) {
                        uVar5 = (longlong)uStack_60 + ((longlong)uVar5 >> 0x18);
                      }
                    }
                    if ((int)param_4[1] == 0) {
                      pfVar15 = (float *)0x0;
                    }
                    else {
                      if ((bVar2 & 1) == 0) {
                        uVar13 = *param_4;
                      }
                      else {
                        uVar13 = *param_4;
                        if ((uVar13 & 1) != 0) {
                          uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)param_4;
                        }
                      }
                      pfVar15 = (float *)(uVar13 + lVar4);
                    }
                    *(double *)(uVar5 + local_58 * lVar10) = (double)*pfVar15;
                    lVar10 = lVar10 + 1;
                    lVar4 = lVar4 + iVar12;
                  } while (lVar10 < (int)uStack_60[1]);
                }
                goto LAB_140878a48;
              }
              goto LAB_140878bed;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) goto LAB_14087875e;
LAB_1408788c5:
            lVar4 = param_1[0xf];
            if (lVar4 == 0) goto LAB_140878bed;
            puVar17 = *(undefined **)(lVar4 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_1409f1a5c;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008041;
              FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
              atexit(FUN_14281201f);
              _Init_thread_footer(&DAT_14c951d78);
            }
            if (DAT_14c951d30 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c951d28 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c951d28) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (!bVar22) goto LAB_140878a88;
LAB_140878916:
              lVar10 = param_3[0xf];
              if (lVar10 != 0) {
                puVar17 = *(undefined **)(lVar10 + 8);
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c9496d8) &&
                   (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
                  if ((*(int *)(*(longlong *)
                                 ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                               0x110) < DAT_14c951a88) &&
                     (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                    local_e8 = (wchar_t *)FUN_140342cba();
                    local_e0 = FUN_1468c7f1e;
                    local_f0 = (undefined2 *)0x0;
                    local_f8 = (undefined2 *)0x8001;
                    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                    atexit(FUN_14280c819);
                    _Init_thread_footer(&DAT_14c951a88);
                  }
                  local_e0 = FUN_140a4831c;
                  local_e8 = (wchar_t *)&DAT_14c951a38;
                  local_f8 = (undefined2 *)0x1000000008001;
                  local_f0 = (undefined2 *)0x0;
                  FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
                  atexit(FUN_1427e14fe);
                  _Init_thread_footer(&DAT_14c9496d8);
                }
                if (DAT_14c949690 == 0) {
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 != &DAT_14c949688 && bVar22) {
                    do {
                      puVar17 = *(undefined **)(puVar17 + 0x30);
                      bVar22 = puVar17 != (undefined *)0x0;
                      if (puVar17 == &DAT_14c949688) break;
                    } while (puVar17 != (undefined *)0x0);
                  }
                  if (bVar22) goto LAB_140878b12;
                }
                else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) != 0) {
LAB_140878b12:
                  if (*(longlong *)(lVar4 + 0x70) == *(longlong *)(lVar10 + 0x78))
                  goto LAB_140879068;
                }
              }
              goto LAB_140878bed;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) != 0) goto LAB_140878916;
LAB_140878a88:
            lVar4 = param_1[0xf];
            if (lVar4 == 0) goto LAB_140878bed;
            puVar17 = *(undefined **)(lVar4 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_140a4831c;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f8 = (undefined2 *)0x1000000008001;
              local_f0 = (undefined2 *)0x0;
              FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
              atexit(FUN_1427e14fe);
              _Init_thread_footer(&DAT_14c9496d8);
            }
            if (DAT_14c949690 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c949688 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c949688) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (bVar22) goto LAB_140878b5f;
              goto LAB_140878bed;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c949690) == 0) goto LAB_140878bed;
LAB_140878b5f:
            lVar10 = param_3[0xf];
            if (lVar10 == 0) goto LAB_140878bed;
            puVar17 = *(undefined **)(lVar10 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d78) && (FUN_144b3d300(&DAT_14c951d78), DAT_14c951d78 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952108) &&
                 (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_e8 = (wchar_t *)FUN_140342cba();
                  local_e0 = FUN_1468c7f1e;
                  local_f0 = (undefined2 *)0x0;
                  local_f8 = (undefined2 *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_e0 = FUN_1468e0f50;
                local_e8 = (wchar_t *)&DAT_14c951a38;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x1008001;
                FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
                atexit(FUN_142816f26);
                _Init_thread_footer(&DAT_14c952108);
              }
              local_e0 = FUN_1409f1a5c;
              local_e8 = (wchar_t *)&DAT_14c9520b8;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008041;
              FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
              atexit(FUN_14281201f);
              _Init_thread_footer(&DAT_14c951d78);
            }
            if (DAT_14c951d30 == 0) {
              bVar22 = puVar17 != (undefined *)0x0;
              if (puVar17 != &DAT_14c951d28 && bVar22) {
                do {
                  puVar17 = *(undefined **)(puVar17 + 0x30);
                  bVar22 = puVar17 != (undefined *)0x0;
                  if (puVar17 == &DAT_14c951d28) break;
                } while (puVar17 != (undefined *)0x0);
              }
              if (bVar22) goto LAB_140878bde;
              goto LAB_140878bed;
            }
            if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c951d30) == 0) goto LAB_140878bed;
LAB_140878bde:
            if (*(longlong *)(lVar10 + 0x70) != *(longlong *)(lVar4 + 0x78)) goto LAB_140878bed;
LAB_140879068:
            if (param_2 != param_4) {
              if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
                (**(code **)(*param_1 + 0x100))(param_1,param_2,param_4,(int)param_1[6]);
              }
              else {
                memcpy(param_2,param_4,
                       (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
              }
            }
LAB_140878a48:
            uVar5 = CONCAT71(uVar8,1);
            goto LAB_140878c3c;
          }
          bVar22 = puVar19 != (undefined8 *)0x0;
          if (puVar19 != &DAT_14c952378 && bVar22) {
            do {
              puVar19 = (undefined8 *)puVar19[6];
              bVar22 = puVar19 != (undefined8 *)0x0;
              if (puVar19 == &DAT_14c952378) break;
            } while (puVar19 != (undefined8 *)0x0);
          }
          if (!bVar22) goto LAB_140878716;
LAB_140878690:
          puVar17 = *(undefined **)(param_3[0xf] + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952420) && (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952108) && (FUN_144b3d300(&DAT_14c952108), DAT_14c952108 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_e8 = (wchar_t *)FUN_140342cba();
                local_e0 = FUN_1468c7f1e;
                local_f0 = (undefined2 *)0x0;
                local_f8 = (undefined2 *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_e0 = FUN_1468e0f50;
              local_e8 = (wchar_t *)&DAT_14c951a38;
              local_f0 = (undefined2 *)0x0;
              local_f8 = (undefined2 *)0x1008001;
              FUN_14000176a(&DAT_14c9520b8,L"FNumericProperty",0x1000000,0);
              atexit(FUN_142816f26);
              _Init_thread_footer(&DAT_14c952108);
            }
            local_e0 = FUN_14079c5e4;
            local_e8 = (wchar_t *)&DAT_14c9520b8;
            local_f8 = (undefined2 *)0x101008001;
            local_f0 = (undefined2 *)0x0;
            FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
            atexit(FUN_1428170bb);
            _Init_thread_footer(&DAT_14c952420);
          }
          if (DAT_14c9523d8 == 0) {
            bVar22 = puVar17 != (undefined *)0x0;
            if (puVar17 != &DAT_14c9523d0 && bVar22) {
              do {
                puVar17 = *(undefined **)(puVar17 + 0x30);
                bVar22 = puVar17 != (undefined *)0x0;
                if (puVar17 == &DAT_14c9523d0) break;
              } while (puVar17 != (undefined *)0x0);
            }
            if (bVar22) goto LAB_1408787e4;
          }
          else if ((*(ulonglong *)(puVar17 + 0x18) & DAT_14c9523d8) != 0) {
LAB_1408787e4:
            FUN_144a8a902(&local_68);
            if (0 < (int)uStack_60[1]) {
              lVar4 = 0;
              lVar10 = 0;
              do {
                if ((local_50 & 1) == 0) {
                  uVar5 = *uStack_60;
                }
                else {
                  uVar5 = *uStack_60;
                  if ((uVar5 & 1) != 0) {
                    uVar5 = (longlong)uStack_60 + ((longlong)uVar5 >> 0x18);
                  }
                }
                if ((int)param_4[1] == 0) {
                  pdVar14 = (double *)0x0;
                }
                else {
                  if ((bVar2 & 1) == 0) {
                    uVar13 = *param_4;
                  }
                  else {
                    uVar13 = *param_4;
                    if ((uVar13 & 1) != 0) {
                      uVar13 = ((longlong)uVar13 >> 0x18) + (longlong)param_4;
                    }
                  }
                  pdVar14 = (double *)(uVar13 + lVar4);
                }
                *(float *)(uVar5 + local_58 * lVar10) = (float)*pdVar14;
                lVar10 = lVar10 + 1;
                lVar4 = lVar4 + iVar12;
              } while (lVar10 < (int)uStack_60[1]);
            }
            goto LAB_140878a48;
          }
        }
      }
    }
LAB_140878bed:
    cVar3 = (**(code **)(*param_1 + 0x1b0))(param_1,param_3);
    if (cVar3 == '\0') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cc01210) && (FUN_144b3d300(&DAT_14cc01210), DAT_14cc01210 == -1))
      {
        _DAT_14cc011e0 = 0;
        _DAT_14cc011e8 = 0;
        DAT_14cc011c0 = 0;
        _DAT_14cc011c8 = 0;
        _DAT_14cc011ec = 0xffffffff00000080;
        DAT_14cc011f4 = 0;
        DAT_14cc01200 = (undefined *)0x0;
        DAT_14cc01208 = 0;
        atexit(FUN_14447234d);
        _Init_thread_footer(&DAT_14cc01210);
      }
      local_68 = (undefined2 *)0x0;
      uStack_60 = (ulonglong *)0x0;
      local_78 = (undefined2 *)0x0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      (**(code **)(*param_1 + 0x70))(param_1,&local_a8,&local_88,0);
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_a8;
      uStack_60 = (ulonglong *)CONCAT44(uStack_9c,iStack_a0);
      (**(code **)(*param_3 + 0x70))(param_3,&local_a8,&local_98,0);
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_a8;
      iVar12 = (int)uStack_80 + -1;
      if ((int)uStack_80 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_68,local_88,iVar12);
      iVar12 = (int)uStack_90 + -1;
      if ((int)uStack_90 == 0) {
        iVar12 = 0;
      }
      FUN_1400020e8(&local_78,local_98,iVar12);
      lVar4 = FUN_14689b0d6(param_1);
      if (lVar4 == 0) {
        pwVar21 = L"<Unknown Package>";
      }
      else {
        local_a8 = *(undefined2 **)(lVar4 + 0x18);
        FUN_1400021e4(&local_a8,&local_b8);
        pwVar21 = local_b8;
        if (local_b0 == 0) {
          pwVar21 = L"";
        }
      }
      puVar6 = local_68;
      if ((int)uStack_60 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      if (param_1 == (longlong *)0x0) {
        FUN_140056680(&local_c8,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(param_1 + 4,&local_c8);
      }
      puVar20 = &DAT_149dfb77a;
      if (local_c0 != 0) {
        puVar20 = local_c8;
      }
      if (param_3 == (longlong *)0x0) {
        FUN_140056680(&local_d8,&DAT_149e01fe8);
      }
      else {
        FUN_1400021e4(param_3 + 4,&local_d8);
      }
      puVar16 = local_d8;
      if (local_d0 == 0) {
        puVar16 = &DAT_149dfb77a;
      }
      local_f8 = puVar20;
      local_f0 = puVar6;
      local_e8 = pwVar21;
      FUN_140002266(&local_a8,L"Failed to copy %s (%s) to %s (%s) in package %s",puVar16);
      if (local_d8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_c8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if ((lVar4 != 0) && (local_b8 != (wchar_t *)0x0)) {
        FUN_1400020a8();
      }
      uVar9 = 0;
      iVar12 = iStack_a0 + -1;
      if (iStack_a0 == 0) {
        iVar12 = 0;
      }
      if (0 < iVar12) {
        puVar6 = local_a8;
        if (iStack_a0 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar4 = 0;
        do {
          uVar7 = ((uint)(0x19 < (ushort)puVar6[lVar4] - 0x61) * 0x20 + (uint)(ushort)puVar6[lVar4])
                  - 0x20;
          uVar9 = uVar9 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar9 ^ uVar7) & 0xff) * 4);
          uVar9 = uVar9 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar9 & 0xff ^ uVar7 >> 8 & 0xff) * 4);
          lVar4 = lVar4 + 1;
        } while (iVar12 != (int)lVar4);
      }
      if (DAT_14cc011c8 != DAT_14cc011f4) {
        puVar17 = &DAT_14cc011f8;
        if (DAT_14cc01200 != (undefined *)0x0) {
          puVar17 = DAT_14cc01200;
        }
        iVar12 = *(int *)(puVar17 + (ulonglong)(DAT_14cc01208 - 1U & uVar9) * 4);
        if (iVar12 != -1) {
LAB_140878f7c:
          lVar4 = (longlong)iVar12;
          iVar12 = *(int *)(DAT_14cc011c0 + 8 + lVar4 * 0x18);
          if (iVar12 == iStack_a0) {
            if (1 < iStack_a0) {
              lVar10 = 0;
              do {
                uVar18 = *(ushort *)(*(longlong *)(DAT_14cc011c0 + lVar4 * 0x18) + lVar10);
                uVar5 = (ulonglong)uVar18;
                uVar11 = *(ushort *)((longlong)local_a8 + lVar10);
                if (uVar18 == uVar11) {
                  if (uVar18 == 0) break;
                }
                else {
                  if (0x7f < (uVar11 | uVar18)) goto LAB_140878fe6;
                  uVar18 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
                  uVar13 = (ulonglong)uVar11;
                  uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                  if ((&DAT_149e05da0)[uVar5] != (&DAT_149e05da0)[uVar13]) goto LAB_140878fe6;
                }
                lVar10 = lVar10 + 2;
              } while( true );
            }
          }
          else if (iVar12 + iStack_a0 != 1) goto LAB_140878f96;
          goto LAB_14087900f;
        }
      }
LAB_140878ff0:
      FUN_14482b35e(&DAT_14cc011c0,&local_c8,&local_a8,0);
LAB_14087900f:
      if (local_a8 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_68 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar5 = 0;
      goto LAB_140878c3c;
    }
  }
LAB_140878c00:
  uVar5 = CONCAT71(uVar8,1);
  if (param_2 != param_4) {
    if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
      (**(code **)(*param_1 + 0x100))(param_1,param_2,param_4,(int)param_1[6]);
    }
    else {
      memcpy(param_2,param_4,
             (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
    }
  }
LAB_140878c3c:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140878fe6:
  if (uVar18 == uVar11) goto LAB_14087900f;
LAB_140878f96:
  iVar12 = *(int *)(DAT_14cc011c0 + 0x10 + lVar4 * 0x18);
  if (iVar12 == -1) goto LAB_140878ff0;
  goto LAB_140878f7c;
}



// FUNCTION 14087ac72 FUN_14087ac72 body=71 status=ok
// SIG undefined FUN_14087ac72(void)

undefined8 * FUN_14087ac72(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7ee2a0;
  FUN_14087acb9(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14087acb9 FUN_14087acb9 body=133 status=ok
// SIG undefined FUN_14087acb9(void)

void FUN_14087acb9(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b7f2890;
    if ((longlong *)param_1[0x19] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x19] + 0x10))();
    }
    if ((longlong *)param_1[0x17] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x17] + 0x10))();
    }
    if ((longlong *)param_1[0x15] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x15] + 0x10))();
    }
    if ((longlong *)param_1[0x13] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x13] + 0x10))();
    }
    if (param_1[0xe] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x1c;
  }
  return;
}



// FUNCTION 14087ad3e FUN_14087ad3e body=919 status=ok
// SIG undefined FUN_14087ad3e(void)

float * FUN_14087ad3e(float *param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  undefined1 auStack_148 [32];
  float *local_128;
  undefined8 local_120;
  float local_118;
  undefined8 local_114;
  undefined1 local_10c [12];
  undefined8 local_100;
  float fStack_f8;
  undefined4 uStack_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_2[0] = 1.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  fVar8 = param_1[6];
  if (fVar8 == 0.0) {
    FUN_14087b0d8(param_1,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_148);
  }
  if ((int)fVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(fVar8);
  }
  local_128 = param_2 + 4;
  FUN_14756a040();
  lVar5 = (longlong)(int)param_1[6];
  if (0 < lVar5) {
    uVar6 = lVar5 + 1;
    lVar5 = lVar5 * 0x18;
    do {
      lVar5 = lVar5 + -0x18;
      lVar4 = *(longlong *)(param_1 + 4);
      dVar3 = *(double *)(lVar4 + lVar5);
      if ((uint)((ulonglong)dVar3 >> 0x33) < 0x1fff) {
        if (3.4028234663852886e+38 <= dVar3) {
          dVar3 = 3.4028234663852886e+38;
        }
        if (dVar3 <= -3.4028234663852886e+38) {
          dVar3 = -3.4028234663852886e+38;
        }
        local_118 = (float)dVar3;
        local_114 = *(undefined8 *)(lVar4 + 8 + lVar5);
        FUN_14087b0d8(&local_118,local_10c);
        FUN_14755aae5(&local_100,param_2,local_10c);
        param_2[2] = fStack_f8;
        *(undefined8 *)param_2 = local_100;
      }
      else {
        if (param_2[1] == 0.0) {
          fVar8 = *param_2;
          if ((1e-08 < ABS(param_2[2])) || (1e-08 < ABS(fVar8 + -1.0))) goto LAB_14087af8c;
        }
        else {
          fVar8 = *param_2;
LAB_14087af8c:
          uVar7 = -(ulonglong)(1e-08 < ABS((double)fVar8));
          local_120 = *(undefined8 *)(param_2 + 1);
          fVar2 = param_2[6];
          param_2[6] = (float)((int)fVar2 + 1);
          if ((uint)param_2[7] < (uint)((int)fVar2 + 1)) {
            FUN_14756a096(local_128,fVar2);
          }
          lVar4 = *(longlong *)(param_2 + 4);
          *(ulonglong *)(lVar4 + (longlong)(int)fVar2 * 0x10) =
               (ulonglong)(~(uint)(uVar7 >> 0x20) & 0xfff90000) << 0x20 |
               (ulonglong)(double)fVar8 & uVar7;
          *(undefined8 *)(lVar4 + 8 + (longlong)(int)fVar2 * 0x10) = local_120;
          param_2[0] = 1.0;
          param_2[1] = 0.0;
          param_2[2] = 0.0;
          lVar4 = *(longlong *)(param_1 + 4);
        }
        FUN_147559272(lVar4 + lVar5,&local_100);
        fVar8 = param_2[6];
        param_2[6] = (float)((int)fVar8 + 1);
        if ((uint)param_2[7] < (uint)((int)fVar8 + 1)) {
          FUN_14756a096(local_128,fVar8);
        }
        puVar1 = (undefined8 *)(*(longlong *)local_128 + (longlong)(int)fVar8 * 0x10);
        *puVar1 = local_100;
        puVar1[1] = CONCAT44(uStack_f4,fStack_f8);
      }
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  if (((param_1[1] != 0.0) || (1e-08 < ABS(param_1[2]))) || (1e-08 < ABS(*param_1 + -1.0))) {
    FUN_14087b0d8(param_1,local_10c);
    FUN_14755aae5(&local_100,local_10c,param_2);
    param_2[2] = fStack_f8;
    *(undefined8 *)param_2 = local_100;
  }
  if ((local_f0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087b0d8 FUN_14087b0d8 body=366 status=ok
// SIG undefined FUN_14087b0d8(void)

void FUN_14087b0d8(float *param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  
  fVar1 = *param_1;
  if (ABS(fVar1) <= 1e-08) {
    fVar4 = param_1[2];
    fVar5 = 0.0;
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      uVar2 = ~(uint)param_1[1];
      fVar5 = (1.0 - fVar4) + 0.5 + -0.5;
      if (0.99999994 <= fVar5) {
        fVar5 = 0.99999994;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
    else {
      uVar2 = -(int)param_1[1];
    }
  }
  else {
    fVar4 = (float)((ulonglong)*(undefined8 *)(param_1 + 1) >> 0x20);
    uVar2 = (uint)*(undefined8 *)(param_1 + 1);
    if ((fVar4 != 0.0) || (NAN(fVar4))) {
      uVar2 = uVar2 ^ 0xffffffff;
      fVar4 = (1.0 - fVar4) + 0.5 + -0.5;
      if (0.99999994 <= fVar4) {
        fVar4 = 0.99999994;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
      dVar7 = (double)fVar4;
    }
    else {
      uVar2 = -uVar2;
      dVar7 = 0.0;
    }
    dVar8 = ((double)(int)uVar2 + dVar7) / (double)fVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar8;
    auVar6 = roundpd(auVar6,auVar6,1);
    dVar7 = auVar6._0_8_;
    dVar8 = dVar8 - dVar7;
    if (2147483647.0 <= dVar7) {
      dVar7 = 2147483647.0;
    }
    if (dVar7 <= -2147483648.0) {
      dVar7 = -2147483648.0;
    }
    uVar2 = (uint)dVar7;
    fVar4 = (float)dVar8;
    if (0.99999994 <= fVar4) {
      fVar4 = 0.99999994;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    fVar5 = fVar4 + 0.5 + -0.5;
    if (0.99999994 <= fVar5) {
      fVar5 = 0.99999994;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  uVar3 = -(uint)(ABS(fVar1) <= 1e-08);
  *param_2 = ~uVar3 & (uint)(1.0 / fVar1) | uVar3 & 0x7f800000;
  param_2[1] = uVar2;
  param_2[2] = (uint)fVar5;
  return;
}



// FUNCTION 14087b246 FUN_14087b246 body=2700 status=ok
// SIG undefined FUN_14087b246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_14087b246(longlong *param_1,undefined1 (*param_2) [16],float *param_3,char param_4,
             double *param_5)

{
  uint uVar1;
  ulonglong uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  byte bVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined1 auStack_158 [39];
  char local_131;
  float *local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar22 = param_5[8];
  dVar25 = param_5[9];
  dVar31 = param_5[10];
  if (*(int *)((longlong)param_1 + 0x66c) == 0) {
LAB_14087baaa:
    plVar15 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xcd);
    plVar15 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar17 = (undefined8 *)
                ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar17 == (undefined8 *)0x0) ||
         ((*(int *)(puVar17 + 2) != *(int *)((longlong)param_1 + 0x66c) ||
          ((*(uint *)(puVar17 + 1) & 0x10200000) != 0)))) goto LAB_14087baaa;
      plVar15 = (longlong *)*puVar17;
    }
  }
  local_131 = param_4;
  local_130 = param_3;
  lVar11 = (**(code **)(*param_1 + 0xb98))();
  if (plVar15 == (longlong *)0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = (**(code **)(*plVar15 + 0xb98))();
  }
  plVar18 = (longlong *)param_1[0xcb];
  if (plVar18 == (longlong *)0x0) {
    plVar18 = (longlong *)param_1[0xcc];
    if ((DAT_14c950c29 & plVar18 != (longlong *)0x0) != 0) goto LAB_14087bacb;
  }
  else if (DAT_14c950c29 == 1) {
LAB_14087bacb:
    FUN_1456cec3c();
  }
  bVar19 = true;
  if (((ABS(dVar22 - dVar25) <= 9.999999747378752e-05) &&
      (ABS(dVar22 - dVar31) <= 9.999999747378752e-05)) &&
     (ABS(dVar25 - dVar31) <= 9.999999747378752e-05)) {
    if (param_1[0xcb] == 0) {
      if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_14087bbb2;
      if (param_1[0xcc] != 0) goto LAB_14087b3e3;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_14087bbb2:
        FUN_1456cec3c();
      }
LAB_14087b3e3:
      lVar14 = param_1[(longlong)(int)param_1[0xe3] * 2 + 0xdb];
      lVar12 = (**(code **)(*plVar18 + 0x308))();
      bVar19 = lVar13 == 0 && (int)lVar14 != *(int *)(lVar12 + 0x28);
    }
  }
  if (DAT_14cb0cbf8 < (int)(uint)*(byte *)((longlong)param_1 + 0x1fc)) {
    bVar16 = 0;
  }
  else {
    cVar10 = FUN_140041326(param_1);
    bVar16 = 1;
    if (cVar10 == '\0') {
      bVar16 = (*(byte *)((longlong)param_1 + 0x2dc) & 0x40) >> 6;
    }
  }
  bVar21 = true;
  bVar20 = true;
  if (lVar11 != 0) {
    bVar20 = *(int *)(lVar11 + 0x48) == 0;
  }
  if (lVar13 != 0) {
    bVar21 = *(int *)(lVar13 + 0x48) == 0;
  }
  if ((bVar16 == 0) || ((*(byte *)((longlong)param_1 + 0x89f) & 4) != 0)) {
    if (param_1[0xcb] == 0) {
      if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_14087bc09;
      if (param_1[0xcc] != 0) goto LAB_14087b611;
      goto LAB_14087b468;
    }
    if (DAT_14c950c29 == 1) {
LAB_14087bc09:
      FUN_1456cec3c();
    }
LAB_14087b611:
    (**(code **)(*plVar18 + 0x3d0))(plVar18,&local_128);
    local_128 = (double)*local_130 + local_128;
    local_120 = (double)local_130[1] + local_120;
    dVar5 = (double)local_130[2] + local_118;
    dVar32 = *param_5;
    dVar8 = param_5[1];
    dVar31 = param_5[2];
    dVar27 = param_5[8];
    dVar22 = param_5[9];
    dVar25 = param_5[10];
    dVar33 = dVar8 + dVar8;
    dVar7 = dVar31 + dVar31;
    dVar26 = dVar32 * (dVar32 + dVar32);
    dVar23 = (1.0 - (dVar31 * dVar7 + dVar8 * dVar33)) * dVar27;
    dVar4 = (1.0 - (dVar31 * dVar7 + dVar26)) * dVar22;
    dVar24 = (1.0 - (dVar26 + dVar8 * dVar33)) * dVar25;
    dVar31 = param_5[3];
    dVar26 = dVar7 * dVar31;
    dVar30 = (dVar32 + dVar32) * param_5[3];
    dVar31 = dVar33 * dVar31;
    dVar28 = (dVar33 * dVar32 + dVar26) * dVar27;
    dVar29 = (dVar7 * dVar8 + dVar30) * dVar22;
    dVar3 = (dVar31 + *param_5 * dVar7) * dVar25;
    dVar27 = (*param_5 * dVar7 - dVar31) * dVar27;
    dVar22 = (dVar33 * dVar32 - dVar26) * dVar22;
    dVar25 = (dVar7 * dVar8 - dVar30) * dVar25;
    dVar31 = dVar5 * dVar3 + local_120 * dVar22 + local_128 * dVar23;
    dVar7 = dVar5 * dVar25 + local_120 * dVar4 + local_128 * dVar28;
    uVar2 = DAT_149931180;
    uVar34 = (undefined4)DAT_149931180;
    uVar35 = DAT_149931180._4_4_;
    uVar36 = DAT_149931180._8_4_;
    uVar37 = DAT_149931180._12_4_;
    dVar30 = (double)((ulonglong)(local_108 * dVar22) & uVar2) +
             (double)((ulonglong)(dVar23 * local_110) & uVar2);
    dVar32 = (double)((ulonglong)(local_108 * dVar4) & DAT_149931180._8_8_) +
             (double)((ulonglong)(dVar28 * local_110) & DAT_149931180._8_8_);
    dVar26 = (double)((ulonglong)(dVar29 * local_108) & uVar2) +
             (double)((ulonglong)(dVar27 * local_110) & uVar2);
    uVar38 = SUB84(local_100,0);
    uVar39 = (undefined4)((ulonglong)local_100 >> 0x20);
LAB_14087b7db:
    dVar30 = (double)((ulonglong)(dVar3 * (double)CONCAT44(uVar39,uVar38)) & CONCAT44(uVar35,uVar34)
                     ) + dVar30;
    dVar32 = (double)((ulonglong)(dVar25 * (double)CONCAT44(uVar39,uVar38)) &
                     CONCAT44(uVar37,uVar36)) + dVar32;
    dVar26 = (double)((ulonglong)(dVar24 * (double)CONCAT44(uVar39,uVar38)) &
                     CONCAT44(uVar35,uVar34)) + dVar26;
    dVar8 = local_128 * dVar27;
    dVar33 = local_120 * dVar29;
    dVar22 = dVar3 * dVar3 + dVar22 * dVar22 + dVar23 * dVar23;
    dVar25 = dVar25 * dVar25 + dVar4 * dVar4 + dVar28 * dVar28;
    dVar23 = dVar24 * dVar24 + dVar29 * dVar29 + dVar27 * dVar27;
    if (dVar22 <= dVar25) {
      dVar22 = dVar25;
    }
    if (dVar22 <= dVar23) {
      dVar22 = dVar23;
    }
    dVar23 = param_5[4];
    dVar4 = param_5[5];
    dVar25 = param_5[6];
    if (dVar22 < 0.0) {
      dVar22 = sqrt(dVar22);
    }
    else {
      dVar22 = SQRT(dVar22);
    }
    dVar27 = SQRT(dVar32 * dVar32 + dVar26 * dVar26 + dVar30 * dVar30);
    dVar3 = dVar22 * local_f8;
    if (dVar27 <= dVar22 * local_f8) {
      dVar3 = dVar27;
    }
    auVar6._8_4_ = SUB84(dVar7 + dVar4,0);
    auVar6._0_8_ = dVar31 + dVar23;
    auVar6._12_4_ = (int)((ulonglong)(dVar7 + dVar4) >> 0x20);
    *param_2 = auVar6;
    *(double *)param_2[1] = dVar5 * dVar24 + dVar33 + dVar8 + dVar25;
    *(double *)(param_2[1] + 8) = dVar30;
    *(double *)param_2[2] = dVar32;
    *(double *)(param_2[2] + 8) = dVar26;
  }
  else {
LAB_14087b468:
    if (plVar15 != (longlong *)0x0) {
      lVar14 = FUN_144a7954a(plVar15);
      if ((lVar14 != 0) && ((*(byte *)((longlong)plVar15 + 0x89f) & 4) != 0)) {
        plVar15 = (longlong *)FUN_144a7954a(plVar15);
        (**(code **)(*plVar15 + 0x3d0))(plVar15,&local_128);
        local_128 = (double)*local_130 + local_128;
        local_120 = (double)local_130[1] + local_120;
        local_118 = (double)local_130[2] + local_118;
        FUN_144a80a4c(&local_128,param_2,param_5);
        goto LAB_14087b521;
      }
      if (!bVar19) {
        if ((*(byte *)((longlong)param_1 + 0x89e) & 0x10) != 0) {
          (**(code **)(*plVar15 + 0x528))(plVar15,param_2,param_5);
          goto LAB_14087b521;
        }
        goto LAB_14087b471;
      }
LAB_14087b8c6:
      plVar15 = (longlong *)param_1[0xcb];
      if (plVar15 == (longlong *)0x0) {
        plVar15 = (longlong *)param_1[0xcc];
        if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) goto LAB_14087bc80;
        if (plVar15 == (longlong *)0x0) {
          dVar22 = param_5[4];
          dVar25 = param_5[5];
          dVar31 = param_5[6];
          *(undefined8 *)(param_2[2] + 8) = DAT_14c8464f0;
          uVar9 = DAT_14c8464e8;
          *(undefined8 *)(param_2[1] + 8) = DAT_14c8464e0;
          *(undefined8 *)param_2[2] = uVar9;
          *(double *)*param_2 = dVar22;
          *(double *)(*param_2 + 8) = dVar25;
          *(double *)param_2[1] = dVar31;
          *(undefined8 *)param_2[3] = 0;
          goto LAB_14087b521;
        }
LAB_14087bca1:
        if ((DAT_14c950c29 & plVar15 != (longlong *)0x0) != 0) {
LAB_14087bcc6:
          FUN_1456cec3c(plVar15);
        }
      }
      else if (DAT_14c950c29 != 0) {
LAB_14087bc80:
        FUN_1456cec3c(plVar15);
        plVar15 = (longlong *)param_1[0xcb];
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)param_1[0xcc];
          goto LAB_14087bca1;
        }
        if ((DAT_14c950c29 & 1) == 0) goto LAB_14087b8e3;
        goto LAB_14087bcc6;
      }
LAB_14087b8e3:
      (**(code **)(*plVar15 + 0x3d0))(plVar15,&local_128);
      local_128 = (double)*local_130 + local_128;
      local_120 = (double)local_130[1] + local_120;
      dVar5 = (double)local_130[2] + local_118;
      dVar32 = *param_5;
      dVar8 = param_5[1];
      dVar31 = param_5[2];
      dVar27 = param_5[8];
      dVar22 = param_5[9];
      dVar25 = param_5[10];
      dVar33 = dVar8 + dVar8;
      dVar7 = dVar31 + dVar31;
      dVar26 = dVar32 * (dVar32 + dVar32);
      dVar23 = (1.0 - (dVar31 * dVar7 + dVar8 * dVar33)) * dVar27;
      dVar4 = (1.0 - (dVar31 * dVar7 + dVar26)) * dVar22;
      dVar24 = (1.0 - (dVar26 + dVar8 * dVar33)) * dVar25;
      dVar31 = param_5[3];
      dVar26 = dVar7 * dVar31;
      dVar30 = (dVar32 + dVar32) * param_5[3];
      dVar31 = dVar33 * dVar31;
      dVar28 = (dVar33 * dVar32 + dVar26) * dVar27;
      dVar29 = (dVar7 * dVar8 + dVar30) * dVar22;
      dVar3 = (dVar31 + *param_5 * dVar7) * dVar25;
      dVar27 = (*param_5 * dVar7 - dVar31) * dVar27;
      dVar22 = (dVar33 * dVar32 - dVar26) * dVar22;
      dVar25 = (dVar7 * dVar8 - dVar30) * dVar25;
      dVar31 = dVar5 * dVar3 + local_120 * dVar22 + local_128 * dVar23;
      dVar7 = dVar5 * dVar25 + local_120 * dVar4 + local_128 * dVar28;
      uVar2 = DAT_149931180;
      uVar34 = (undefined4)DAT_149931180;
      uVar35 = DAT_149931180._4_4_;
      uVar36 = DAT_149931180._8_4_;
      uVar37 = DAT_149931180._12_4_;
      dVar30 = (double)((ulonglong)(local_108 * dVar22) & uVar2) +
               (double)((ulonglong)(dVar23 * local_110) & uVar2);
      dVar32 = (double)((ulonglong)(local_108 * dVar4) & DAT_149931180._8_8_) +
               (double)((ulonglong)(dVar28 * local_110) & DAT_149931180._8_8_);
      dVar26 = (double)((ulonglong)(dVar29 * local_108) & uVar2) +
               (double)((ulonglong)(dVar27 * local_110) & uVar2);
      uVar38 = SUB84(local_100,0);
      uVar39 = (undefined4)((ulonglong)local_100 >> 0x20);
      goto LAB_14087b7db;
    }
LAB_14087b471:
    if (((bVar20 || local_131 != '\x01') || bVar19) &&
       ((plVar15 == (longlong *)0x0 || (lVar11 = lVar13, bVar19 || bVar21)))) goto LAB_14087b8c6;
    FUN_14087bcd4(lVar11,&local_128,param_1,param_5);
    dVar31 = (local_100 - local_118) * 0.5;
    dVar22 = (local_108 - local_120) * 0.5;
    dVar25 = (local_110 - local_128) * 0.5;
    *(double *)*param_2 = local_128 + dVar25;
    *(double *)(*param_2 + 8) = local_120 + dVar22;
    *(double *)param_2[1] = local_118 + dVar31;
    *(double *)(param_2[1] + 8) = dVar25;
    *(double *)param_2[2] = dVar22;
    *(double *)(param_2[2] + 8) = dVar31;
    dVar3 = SQRT(dVar31 * dVar31 + dVar25 * dVar25 + dVar22 * dVar22);
  }
  *(double *)param_2[3] = dVar3;
LAB_14087b521:
  dVar31 = (double)*(float *)((longlong)param_1 + 0x3ac);
  *(double *)(param_2[1] + 8) = *(double *)(param_2[1] + 8) * dVar31;
  *(double *)param_2[2] = *(double *)param_2[2] * dVar31;
  *(double *)(param_2[2] + 8) = *(double *)(param_2[2] + 8) * dVar31;
  *(double *)param_2[3] = dVar31 * *(double *)param_2[3];
  if ((local_f0 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14087bcd4 FUN_14087bcd4 body=1243 status=ok
// SIG undefined FUN_14087bcd4(void)

double * FUN_14087bcd4(longlong param_1,double *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_198 [40];
  longlong local_170;
  longlong local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double dStack_148;
  double local_140;
  double dStack_138;
  char local_130;
  undefined7 uStack_12f;
  undefined1 local_128 [96];
  longlong local_c8;
  ulonglong uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  *(undefined1 *)(param_2 + 6) = 0;
  if (param_3 == 0) goto LAB_14087c14b;
  if (((9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x48))) ||
      (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x40) - *(double *)(param_4 + 0x50)))) ||
     (9.999999747378752e-05 < ABS(*(double *)(param_4 + 0x48) - *(double *)(param_4 + 0x50)))) {
LAB_14087c053:
    dVar12 = *(double *)(param_4 + 0x20);
    dVar14 = *(double *)(param_4 + 0x28);
    dVar11 = *(double *)(param_4 + 0x30);
    dVar13 = *(double *)(param_4 + 0x28);
    *param_2 = dVar12;
    param_2[1] = dVar14;
    param_2[2] = dVar11;
    param_2[3] = dVar12;
    param_2[4] = dVar14;
    param_2[5] = dVar11;
    *(undefined1 *)(param_2 + 6) = 1;
    dVar14 = dVar11;
    dVar15 = dVar13;
    dVar16 = dVar12;
  }
  else {
    local_c8 = 0;
    uStack_c0 = 0;
    if ((*(byte *)(param_3 + 0x89f) & 8) == 0) {
      plVar9 = (longlong *)(param_1 + 0x30);
    }
    else {
      uStack_c0 = (ulonglong)*(uint *)(param_1 + 0x48);
      plVar9 = &local_c8;
      if ((*(uint *)(param_1 + 0x48) != 0) &&
         (FUN_1446f48e2(plVar9,0), 0 < *(int *)(param_1 + 0x48))) {
        lVar7 = 0;
        do {
          *(int *)(local_c8 + lVar7 * 4) = (int)lVar7;
          lVar7 = lVar7 + 1;
        } while (lVar7 < *(int *)(param_1 + 0x48));
      }
    }
    lVar7 = (longlong)(int)plVar9[1];
    local_170 = lVar7;
    if (0 < lVar7) {
      lVar8 = 1;
      local_168 = param_3;
      do {
        iVar6 = *(int *)(*plVar9 + -4 + lVar8 * 4);
        if (((-1 < (longlong)iVar6) && (iVar6 < *(int *)(param_1 + 0x48))) &&
           ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 8), lVar1 != 0
            && ((((*(byte *)(lVar1 + 0xb8) & 2) != 0 || ((*(byte *)(param_3 + 0x89f) & 8) != 0)) &&
                (iVar6 = FUN_144909502(param_3,*(undefined8 *)(lVar1 + 0x28)), iVar6 != -1)))))) {
          FUN_140084aae(param_3,local_128,iVar6,param_4);
          FUN_144875afe(lVar1 + 0x38,&local_160,local_128);
          dVar13 = local_150;
          dVar12 = dStack_158;
          dVar11 = local_160;
          if (dStack_148 < local_160) {
            local_160 = dStack_148;
            dStack_148 = dVar11;
          }
          if (local_140 < dStack_158) {
            dStack_158 = local_140;
            local_140 = dVar12;
          }
          if (dStack_138 < local_150) {
            local_150 = dStack_138;
            dStack_138 = dVar13;
          }
          param_3 = local_168;
          if (local_130 == '\0' || *(char *)(param_2 + 6) == '\0') {
            if (local_130 != '\0') {
              param_2[6] = (double)CONCAT71(uStack_12f,local_130);
              param_2[4] = local_140;
              param_2[5] = dStack_138;
              param_2[2] = local_150;
              param_2[3] = dStack_148;
              *param_2 = local_160;
              param_2[1] = dStack_158;
            }
          }
          else {
            dVar11 = *param_2;
            uVar17 = SUB84(dVar11,0);
            uVar18 = (undefined4)((ulonglong)dVar11 >> 0x20);
            if (local_160 <= dVar11) {
              uVar17 = SUB84(local_160,0);
              uVar18 = (undefined4)((ulonglong)local_160 >> 0x20);
            }
            dVar11 = param_2[1];
            if (dStack_158 <= param_2[1]) {
              dVar11 = dStack_158;
            }
            *param_2 = (double)CONCAT44(uVar18,uVar17);
            param_2[1] = dVar11;
            dVar11 = param_2[2];
            if (local_150 <= param_2[2]) {
              dVar11 = local_150;
            }
            param_2[2] = dVar11;
            dVar11 = param_2[3];
            if (param_2[3] <= dStack_148) {
              dVar11 = dStack_148;
            }
            param_2[3] = dVar11;
            dVar11 = param_2[4];
            if (param_2[4] <= local_140) {
              dVar11 = local_140;
            }
            param_2[4] = dVar11;
            dVar11 = param_2[5];
            if (param_2[5] <= dStack_138) {
              dVar11 = dStack_138;
            }
            param_2[5] = dVar11;
          }
        }
        bVar10 = lVar8 != lVar7;
        lVar8 = lVar8 + 1;
      } while (bVar10);
    }
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    if (*(char *)(param_2 + 6) == '\0') goto LAB_14087c053;
    dVar11 = param_2[2];
    dVar12 = *param_2;
    dVar13 = param_2[1];
    dVar14 = param_2[5];
    dVar15 = param_2[4];
    dVar16 = param_2[3];
  }
  dVar4 = dVar14 - dVar11;
  dVar3 = dVar15 - dVar13;
  dVar2 = dVar16 - dVar12;
  dVar5 = dVar2;
  if (dVar3 <= dVar2) {
    dVar5 = dVar3;
  }
  if (dVar4 <= dVar5) {
    dVar5 = dVar4;
  }
  if (dVar5 < 1.0) {
    dVar5 = 0.0;
    if (0.0 <= 1.0 - dVar4) {
      dVar5 = 1.0 - dVar4;
    }
    dVar4 = 0.0;
    if (0.0 <= 1.0 - dVar3) {
      dVar4 = 1.0 - dVar3;
    }
    dVar3 = 0.0;
    if (0.0 <= 1.0 - dVar2) {
      dVar3 = 1.0 - dVar2;
    }
    *param_2 = dVar12 - dVar3 * 0.5;
    param_2[1] = dVar13 - dVar4 * 0.5;
    param_2[2] = dVar11 - dVar5 * 0.5;
    param_2[3] = dVar16 + dVar3 * 0.5;
    param_2[4] = dVar15 + dVar4 * 0.5;
    param_2[5] = dVar14 + dVar5 * 0.5;
    *(undefined1 *)(param_2 + 6) = 1;
  }
LAB_14087c14b:
  if ((local_b0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14087c1be FUN_14087c1be body=40 status=ok
// SIG undefined FUN_14087c1be(void)

undefined8 FUN_14087c1be(undefined8 param_1,int param_2)

{
  FUN_14087c1e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14087c1e6 FUN_14087c1e6 body=317 status=ok
// SIG undefined FUN_14087c1e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14087c1e6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b392a30;
  FUN_14087c323(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x10,0);
  }
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[10] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_140115c12(param_1 + 0xc,0);
  }
  param_1[0xb] = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00014087c2f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14087c323 FUN_14087c323 body=113 status=ok
// SIG undefined FUN_14087c323(void)

void FUN_14087c323(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14087c394 FUN_14087c394 body=201 status=ok
// SIG undefined FUN_14087c394(void)

undefined8 FUN_14087c394(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((int)(param_3 & 0xff) < *(int *)(param_1 + 0x30)) {
    lVar1 = *(longlong *)(param_1 + 0x28) + (param_3 & 0xff) * 0x170;
    lVar6 = *(longlong *)(lVar1 + 0x38);
    if (lVar6 == 0) {
      uVar4 = FUN_140261af2();
      lVar6 = FUN_14477b664(uVar4);
      *(longlong *)(lVar1 + 0x38) = lVar6;
    }
    lVar5 = *(longlong *)(lVar1 + 0x40);
    if (lVar5 != 0) {
LAB_14087c3d0:
      uVar4 = FUN_14087c45e(lVar5,*param_2,L"GetModifierForDamageTypeVsHealthType",1);
      return uVar4;
    }
    if ((lVar6 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(lVar1 + 0x40) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x30));
        *(longlong *)(lVar1 + 0x40) = lVar5;
        if (lVar5 != 0) goto LAB_14087c3d0;
      }
    }
  }
  return 0;
}



// FUNCTION 14087c45e FUN_14087c45e body=350 status=ok
// SIG undefined FUN_14087c45e(void)

longlong FUN_14087c45e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  FUN_14016a17c();
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar4 != 0) goto LAB_14087c47d;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  lVar3 = FUN_14000e0c8(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
LAB_14087c583:
    *(longlong *)(param_1 + 0x48) = lVar3;
    lVar4 = lVar3;
  }
  else if (lVar4 != lVar3) {
    if ((lVar4 != 0) && (DAT_14c872a72 == '\0')) {
      FUN_140113f48();
    }
    FUN_1401924dc(lVar3);
    goto LAB_14087c583;
  }
  if (lVar4 == 0) {
    return 0;
  }
LAB_14087c47d:
  lVar3 = FUN_1418c98fe();
  if ((((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
      (param_2 != 0 &&
       *(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)) && (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84))) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar4 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x90);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      while (plVar1 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar6 * 0x18),
            *plVar1 != param_2) {
        iVar6 = (int)plVar1[2];
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
        return plVar1[1];
      }
    }
  }
  return 0;
}



// FUNCTION 14087c5bc FUN_14087c5bc body=1077 status=ok
// SIG undefined FUN_14087c5bc(void)

void FUN_14087c5bc(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined4 local_90;
  undefined8 local_88;
  wchar_t *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined8 local_50;
  longlong *local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(longlong *)(param_1 + 0x140) = param_2;
  lVar7 = param_2;
  do {
    if ((longlong)*(int *)(lVar7 + 0x128) != 0) {
      plVar12 = *(longlong **)(lVar7 + 0x120);
      lVar14 = (longlong)*(int *)(lVar7 + 0x128) * 0x18;
      do {
        lVar10 = plVar12[1];
        if (lVar10 == 0) {
          uVar8 = FUN_145d175f8();
          lVar10 = FUN_14477b664(uVar8);
          plVar12[1] = lVar10;
        }
        lVar13 = plVar12[2];
        if (lVar13 == 0) {
          if (lVar10 == 0) {
            lVar13 = 0;
          }
          else {
            lVar13 = 0;
            if (*plVar12 != 0) {
              plVar11 = *(longlong **)(lVar10 + 0xb8);
              if ((plVar11 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar11 + 0x108))(plVar11), cVar5 == '\0')) {
                lVar13 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar11 + 0x110))(plVar11);
                lVar13 = FUN_144aff482(uVar8,plVar12);
              }
              plVar12[2] = lVar13;
            }
          }
        }
        FUN_14087c9f2(param_1,lVar13);
        plVar12 = plVar12 + 3;
        lVar14 = lVar14 + -0x18;
      } while (lVar14 != 0);
    }
  } while ((*(char *)(lVar7 + 0x118) != '\0') && (lVar7 = FUN_14001d26e(lVar7), lVar7 != 0));
  FUN_140255ee2(param_2,param_1 + 0x18);
  puVar1 = (uint *)(param_2 + 0x70);
  if (((*(int *)(param_2 + 0x74) == 0) ||
      (((uVar3 = *puVar1, (int)uVar3 < 0 || (DAT_14c9647dc <= (int)uVar3)) ||
       (plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0)))) ||
     ((((int)plVar12[2] != *(int *)(param_2 + 0x74) || ((*(uint *)(plVar12 + 1) & 0x10200000) != 0))
      || (plVar12 = (longlong *)*plVar12, plVar12 == (longlong *)0x0)))) {
    if (*(longlong *)(param_2 + 0x78) == 0) goto LAB_14087c78b;
    plVar12 = (longlong *)FUN_140007850();
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if ((plVar12 == (longlong *)0x0) || (cVar5 == '\0')) {
      FUN_14485c47a(puVar1,plVar12);
      if (plVar12 == (longlong *)0x0) goto LAB_14087c78b;
    }
    else {
      uVar3 = *(uint *)((longlong)plVar12 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,plVar12);
      }
    }
    if ((*(uint *)(plVar12 + 1) >> 0x1e & 1) != 0) goto LAB_14087c78b;
  }
  if (DAT_14c949118 == 0) {
    local_40 = FUN_140631fbe;
    lVar7 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar7;
    FUN_1446f470e(&local_50,L"Class",1);
    local_68 = &LAB_146891e90;
    local_70 = &LAB_146273097;
    local_80 = L"Engine";
    local_78 = 199;
    local_88 = 0x20;
    local_90 = 0x10000000;
    local_98 = (wchar_t *)CONCAT44(local_98._4_4_,8);
    local_60 = &local_40;
    FUN_14574b4b2(lVar7);
    DAT_14c949118 = lVar7;
    uVar8 = FUN_144a7a812();
    lVar7 = DAT_14c949118;
    uVar9 = FUN_1449e2fb2();
    local_98 = L"Class";
    FUN_14574b446(uVar9,lVar7,uVar8,L"/Script/CoreUObject");
  }
  if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
        DAT_14c949118 + 0x30)) && (lVar7 = FUN_140126fc0(), lVar7 != 0)) &&
     ((*(int *)(lVar7 + 0x38) <= (int)plVar12[7] &&
      (*(longlong *)(plVar12[6] + (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)))) {
    plVar11 = (longlong *)plVar12[0x22];
    if (plVar11 == (longlong *)0x0) {
      (**(code **)(*plVar12 + 1000))(plVar12);
      plVar11 = (longlong *)plVar12[0x22];
    }
    local_48 = *(longlong **)(param_1 + 0x1f0);
    if (local_48 == (longlong *)0x0) {
      local_48 = (longlong *)0x0;
      local_50 = 0;
    }
    else {
      iVar6 = (int)local_48[1];
      local_50 = 0;
      do {
        if (iVar6 == 0) {
          local_48 = (longlong *)0x0;
          goto LAB_14087c75d;
        }
        LOCK();
        iVar4 = (int)local_48[1];
        bVar15 = iVar6 == iVar4;
        if (bVar15) {
          *(int *)(local_48 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar15);
      local_50 = *(undefined8 *)(param_1 + 0x1e8);
    }
LAB_14087c75d:
    (**(code **)(*plVar11 + 0x688))(plVar11,&local_50,param_2);
    plVar12 = local_48;
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_48 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
LAB_14087c78b:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087c9f2 FUN_14087c9f2 body=232 status=ok
// SIG undefined FUN_14087c9f2(void)

void FUN_14087c9f2(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  ulonglong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar2 = param_1 + 0x1d0;
    if (*(longlong *)(param_1 + 0x1d8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x1d8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x1e0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 0x10) == param_2)
        goto LAB_14087ca31;
        iVar3 = *(int *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x198) + 8);
      } while (iVar3 != -1);
    }
  }
  FUN_14087cadc(param_1 + 0x148,local_14,&local_10,0);
LAB_14087ca31:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087cadc FUN_14087cadc body=1481 status=ok
// SIG undefined FUN_14087cadc(void)

void FUN_14087cadc(longlong *param_1,int *param_2,ulonglong *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar17 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar17 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar17) {
      FUN_1446efaca(param_1,iVar17);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar9 = iVar21 + 1;
    iVar13 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar13 = iVar21;
    }
    if (iVar13 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar21;
        }
        else {
          uVar8 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar5 = 4;
            if (4 < uVar8) {
              uVar5 = uVar8;
            }
          }
          else {
            uVar5 = (uVar8 * 3 >> 3) + uVar8 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar5 << 2,0);
          iVar4 = (int)(uVar12 >> 2);
          iVar9 = -0x20;
          if ((int)uVar8 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar11,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar11;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar19 = (longlong)iVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar21 & 0x1f;
    puVar2 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = (int)param_1[6];
    lVar19 = (longlong)iVar17;
    iVar21 = *(int *)(*param_1 + 4 + lVar19 * 0x10);
    *(int *)(param_1 + 6) = iVar21;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x10) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar2;
  }
  iVar21 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar21 = iVar17;
  }
  puVar10[iVar21 >> 5] = puVar10[iVar21 >> 5] | 1 << ((byte)iVar17 & 0x1f);
  lVar20 = *param_1;
  lVar19 = lVar19 * 0x10;
  uVar12 = *param_3;
  *(ulonglong *)(lVar20 + lVar19) = uVar12;
  *(undefined4 *)(lVar20 + 8 + lVar19) = 0xffffffff;
  uVar8 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  uVar8 = uVar8 >> 0x10 ^ uVar8;
  cVar6 = '\0';
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar8) * 4);
    if (iVar21 == -1) {
      cVar6 = '\0';
    }
    else {
      do {
        puVar1 = (ulonglong *)(*param_1 + (longlong)iVar21 * 0x10);
        if (*(ulonglong *)(*param_1 + (longlong)iVar21 * 0x10) == uVar12) {
          *puVar1 = uVar12;
          FUN_141109152(param_1,iVar17,1);
          cVar6 = '\x01';
          iVar17 = iVar21;
          break;
        }
        iVar21 = (int)puVar1[1];
        cVar6 = '\0';
      } while (iVar21 != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar6;
  }
  if (cVar6 != '\0') goto LAB_14087ccc2;
  uVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar5 < 4) {
    uVar18 = 1;
  }
  else {
    uVar12 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
    lVar3 = 0x3f;
    if (uVar12 != 0) {
      for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar18 = 1 << ((byte)lVar3 & 0x1f);
  }
  if (((int)uVar5 < 1) || ((int)uVar18 <= (int)param_1[9])) {
    uVar8 = (int)param_1[9] - 1U & uVar8;
    *(uint *)(lVar20 + lVar19 + 0xc) = uVar8;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(undefined4 *)(lVar20 + lVar19 + 8) =
         *(undefined4 *)
          ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar8) * 4) =
         iVar17;
    goto LAB_14087ccc2;
  }
  *(uint *)(param_1 + 9) = uVar18;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar18 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar18 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_14087cd5d:
    uVar8 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
           0xffffffff;
      uVar8 = uVar8 + 1;
    } while (uVar18 != uVar8);
  }
  else {
    if (uVar18 == 0) goto LAB_14087ccc2;
    FUN_1446efa72(plVar11,0,uVar18,4);
    if (0 < (int)uVar18) goto LAB_14087cd5d;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar12 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar2;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      uVar12 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar12;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar12) goto LAB_14087ccc2;
        iVar9 = iVar9 + 0x20;
        uVar8 = puVar10[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar12 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar8 & uVar8);
    uVar22 = uVar16 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar4) {
      iVar4 = iVar21;
    }
  }
  if (iVar4 < iVar21) {
    uVar8 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar20 = (longlong)iVar4 * 0x10;
      uVar5 = ((uint)(*(ulonglong *)(lVar19 + lVar20) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar19 + lVar20) >> 4)) * -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      uVar22 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar19 + 0xc + lVar20) = iVar21;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(undefined4 *)(lVar19 + 8 + lVar20) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar8 = ~(uint)uVar16 & uVar8;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar2;
      }
      iVar21 = (int)param_1[5];
      iVar4 = (int)uVar12;
      lVar19 = (longlong)iVar4;
      uVar5 = puVar10[lVar19] & uVar8;
      if (uVar5 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar4) {
          iVar14 = iVar4;
        }
        if (iVar13 <= iVar4) break;
        lVar20 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = puVar10[lVar19 + lVar20 + 1];
          if (uVar5 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar14 - lVar19 == lVar20) goto LAB_14087ccc2;
        }
        uVar12 = (ulonglong)(iVar4 + (int)lVar20 + 1);
        uVar8 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar5 & uVar5);
      uVar22 = uVar16 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar21);
  }
LAB_14087ccc2:
  *param_2 = iVar17;
  return;
}



// FUNCTION 14087d0ae FUN_14087d0ae body=229 status=ok
// SIG undefined FUN_14087d0ae(void)

undefined4 FUN_14087d0ae(longlong param_1,undefined8 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar2 = FUN_14087d25c();
  if ((char)uVar2 == '\0') {
    local_58 = 0;
    local_50 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_4c = 0xffffffff00000080;
    local_44 = 0;
    local_38 = 0;
    local_30 = 0;
    uVar3 = FUN_14087d194();
    FUN_1446e7478(param_2,&local_78,uVar3,1);
    uVar1 = FUN_14087d1ce(&DAT_14cb863c0,&local_78);
    *(undefined2 *)(param_1 + 0x10) = uVar1;
    if (DAT_14cb863cc != DAT_14cb863c8) {
      FUN_14087d2f8(&DAT_14cb863c0);
    }
    local_30 = 0;
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1405b6d62(&local_78);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087d194 FUN_14087d194 body=57 status=ok
// SIG undefined FUN_14087d194(void)

void FUN_14087d194(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6c080 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6c080 = FUN_140002ddd(FUN_1465300a8,uVar1,L"MissionDisplayTextRuntimeKeyContainer");
  }
  return;
}



// FUNCTION 14087d1ce FUN_14087d1ce body=142 status=ok
// SIG undefined FUN_14087d1ce(void)

int FUN_14087d1ce(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_14087d3e0(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 4) * -0x33333333;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x50;
    } while ((longlong)(int)lVar2 * 0x50 != uVar5);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145750d42(param_1,iVar4);
  }
  FUN_145750cc4((longlong)iVar4 * 0x50 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 14087d25c FUN_14087d25c body=154 status=ok
// SIG undefined FUN_14087d25c(void)

undefined8 FUN_14087d25c(undefined8 param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  longlong *local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
    uVar2 = 0;
  }
  else {
    FUN_1400b22c2(local_40,*(undefined8 *)(pbVar1 + 8));
    FUN_140233b1a(local_30,local_40);
    FUN_140008f88(param_1,local_30);
    if (local_30[0] != (longlong *)0x0) {
      (**(code **)(*local_30[0] + 0x10))();
    }
    if (local_40[0] != 0) {
      FUN_1400020a8();
    }
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087d2f8 FUN_14087d2f8 body=232 status=ok
// SIG undefined FUN_14087d2f8(void)

void FUN_14087d2f8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar1 = -uVar2 & (uVar1 + uVar2) - 1;
        }
      }
      else {
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 14087d3e0 FUN_14087d3e0 body=725 status=ok
// SIG undefined FUN_14087d3e0(void)

ulonglong FUN_14087d3e0(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 unaff_R13;
  undefined7 uVar12;
  ulonglong uVar11;
  ulonglong uVar13;
  ulonglong uVar14;
  int local_58;
  uint local_54;
  
  uVar14 = 0;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) ==
      (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    iVar2 = (int)param_1[5];
    uVar13 = 1;
    local_58 = 0;
    uVar12 = (undefined7)((ulonglong)unaff_R13 >> 8);
    iVar10 = 0;
    if (iVar2 != 0) {
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      uVar7 = *puVar6;
      if (uVar7 == 0) {
        iVar10 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar10 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar13 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar13 = uVar14;
        }
        do {
          if (uVar13 == uVar14) {
            uVar11 = CONCAT71(uVar12,1);
            goto LAB_14087d434;
          }
          local_58 = local_58 + 0x20;
          uVar7 = puVar6[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar7 == 0);
      }
      else {
        uVar14 = 0;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar11 = uVar13 * 2 + 1;
      lVar3 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = (local_58 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar10) {
        iVar10 = iVar2;
      }
    }
    uVar11 = CONCAT71(uVar12,1);
    if (iVar10 < iVar2) {
      lVar3 = *param_1;
      local_54 = 0xffffffff;
      do {
        lVar4 = (longlong)iVar10;
        iVar2 = *(int *)(lVar3 + lVar4 * 0x48 + 8);
        iVar10 = iVar2 + -1;
        if (iVar2 == 0) {
          iVar10 = 0;
        }
        if (0 < iVar10) {
          iVar2 = 0;
          do {
            iVar2 = iVar2 + 1;
          } while (iVar10 != iVar2);
        }
        iVar2 = FUN_14087d6b6(param_2);
        lVar5 = (longlong)iVar2 * 0x48 + *param_2;
        if ((((lVar5 == 0 || iVar2 == -1) ||
             (lVar3 = *param_1, *(char *)(lVar5 + 0x10) != *(char *)(lVar3 + 0x10 + lVar4 * 0x48)))
            || (*(longlong *)(lVar5 + 0x18) != *(longlong *)(lVar3 + 0x18 + lVar4 * 0x48))) ||
           (((*(int *)(lVar5 + 0x20) != *(int *)(lVar3 + 0x20 + lVar4 * 0x48) ||
             (*(int *)(lVar5 + 0x30) != *(int *)(lVar3 + 0x30 + lVar4 * 0x48))) ||
            (*(int *)(lVar5 + 0x38) != *(int *)(lVar3 + 0x38 + lVar4 * 0x48))))) goto LAB_14087d54f;
        local_54 = local_54 & ~(uint)uVar13;
        puVar6 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar6 = (uint *)(param_1 + 2);
        }
        iVar2 = (int)param_1[5];
        iVar10 = (int)uVar14;
        lVar4 = (longlong)iVar10;
        uVar7 = puVar6[lVar4] & local_54;
        if (uVar7 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar10) {
            iVar9 = iVar10;
          }
          if (iVar8 <= iVar10) break;
          lVar5 = 0;
          while( true ) {
            local_58 = local_58 + 0x20;
            uVar7 = puVar6[lVar4 + lVar5 + 1];
            if (uVar7 != 0) break;
            lVar5 = lVar5 + 1;
            if (iVar9 - lVar4 == lVar5) goto LAB_14087d434;
          }
          uVar14 = (ulonglong)(iVar10 + (int)lVar5 + 1);
          local_54 = 0xffffffff;
        }
        uVar13 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar13 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar10 = (local_58 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar2);
    }
  }
  else {
LAB_14087d54f:
    uVar11 = 0;
  }
LAB_14087d434:
  return uVar11 & 0xffffffff;
}



// FUNCTION 14087d6b6 FUN_14087d6b6 body=195 status=ok
// SIG undefined FUN_14087d6b6(void)

int FUN_14087d6b6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_14087d6f8:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x48);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x48) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_14087d771;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_14087d771;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_14087d75b;
    }
  }
  return -1;
LAB_14087d771:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_14087d75b:
  iVar1 = *(int *)(lVar4 + 0x40 + lVar10 * 0x48);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_14087d6f8;
}



// FUNCTION 14087d77a FUN_14087d77a body=1893 status=ok
// SIG undefined FUN_14087d77a(void)

void FUN_14087d77a(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  ulonglong uVar24;
  uint uVar25;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  longlong local_118;
  longlong *local_110;
  longlong local_108;
  uint *local_100;
  ulonglong local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  ushort uStack_70;
  undefined2 uStack_6e;
  undefined4 uStack_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f0 = param_1 + 0x58;
  FUN_14087dfa2(local_f0,0);
  plVar2 = (longlong *)(param_1 + 0xa8);
  iVar18 = *(int *)(param_1 + 0xf0);
  local_118 = param_1;
  local_110 = plVar2;
  local_108 = param_2;
  if (iVar18 < 2) {
    lVar14 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar14 = *(longlong *)(param_1 + 0xe8);
    }
    iVar20 = iVar18 + 3;
    if (-1 < iVar18) {
      iVar20 = iVar18;
    }
    if (*(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xdc) < iVar20 >> 2) {
      plVar2 = (longlong *)(param_1 + 0xb8);
      local_88 = 0;
      uStack_84 = 1;
      local_78 = 0xffffffff;
      uStack_70 = 0;
      uStack_6e = 0;
      uStack_80 = plVar2;
      if (*(int *)(param_1 + 0xd0) == 0) {
        iVar18 = 0;
      }
      else {
        FUN_1449c0562(&local_88);
        iVar18 = *(int *)(local_118 + 0xd0);
      }
      local_e0 = local_110;
      uStack_c0 = CONCAT44(uStack_6c,CONCAT22(uStack_6e,uStack_70));
      local_d8 = (longlong *)CONCAT44(uStack_84,local_88);
      local_c8 = local_78;
      uVar6 = local_c8;
      local_c8._4_4_ = (int)((ulonglong)local_78 >> 0x20);
      iVar20 = local_c8._4_4_;
      uStack_d0 = uStack_80;
      if ((local_c8._4_4_ != iVar18) || (local_c8 = uVar6, uStack_80 != plVar2)) {
        do {
          local_c8 = uVar6;
          *(undefined4 *)
           (lVar14 + (longlong)*(int *)(*local_e0 + 0x14 + (longlong)iVar20 * 0x18) * 4) =
               0xffffffff;
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar20 = local_c8._4_4_;
          uVar6 = local_c8;
        } while (local_e0 != local_110 || (uStack_d0 != plVar2 || local_c8._4_4_ != iVar18));
      }
    }
    else {
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
      uStack_d0 = (longlong *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
      if (iVar18 == 1) {
        lVar21 = 0;
        do {
          *(undefined4 *)(lVar14 + lVar21 * 4) = 0xffffffff;
          lVar21 = lVar21 + 1;
          uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
          uStack_d0 = (longlong *)CONCAT44(uStack_d0._4_4_,(undefined4)uStack_d0);
        } while (lVar21 < *(int *)(param_1 + 0xf0));
      }
    }
    param_2 = local_108;
    FUN_1400fd368(local_110,0);
  }
  else {
    FUN_1400fd368(plVar2,0);
    *(undefined4 *)(param_1 + 0xf0) = 1;
    FUN_1448426b2(plVar2);
  }
  FUN_14087e154(param_2,1);
  puVar23 = (uint *)(param_2 + 0x50);
  uVar17 = *(uint *)(param_2 + 0x68);
  lVar14 = local_118;
  if (uVar17 == 0) {
    uVar24 = 1;
    uVar15 = 0;
    uVar8 = 0;
    iVar18 = 0;
  }
  else {
    puVar10 = *(uint **)(param_2 + 0x60);
    if (*(uint **)(param_2 + 0x60) == (uint *)0x0) {
      puVar10 = puVar23;
    }
    uVar8 = *puVar10;
    if (uVar8 == 0) {
      iVar18 = uVar17 + 0x1e;
      if (-1 < (int)(uVar17 - 1)) {
        iVar18 = uVar17 - 1;
      }
      uVar15 = 0;
      uVar24 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar24 = uVar15;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar15) goto LAB_14087db15;
        iVar18 = iVar18 + 0x20;
        uVar8 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar8 == 0);
    }
    else {
      uVar15 = 0;
      iVar18 = 0;
    }
    uVar24 = (ulonglong)(-uVar8 & uVar8);
    uVar11 = uVar24 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    uVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
    if ((int)uVar17 <= (int)uVar8) {
      uVar8 = uVar17;
    }
  }
  if (uVar8 != uVar17) {
    local_e8 = local_118 + 0xe0;
    uVar25 = 0xffffffff;
    local_100 = puVar23;
    local_f8 = (ulonglong)uVar17;
    do {
      plVar2 = local_110;
      lVar21 = *(longlong *)(*(longlong *)(param_2 + 0x40) + 8 + (longlong)(int)uVar8 * 0x18);
      if (lVar21 != 0) {
        plVar3 = (longlong *)(*(longlong *)(param_2 + 0x40) + (longlong)(int)uVar8 * 0x18);
        if (*(char *)(lVar21 + 8) == '\0') {
          FUN_1400e6050(local_110,&local_e0);
          plVar5 = local_d8;
          puVar23 = local_100;
          lVar14 = *plVar3;
          *local_d8 = lVar14;
          local_d8[1] = *(longlong *)(lVar21 + 0x28);
          *(undefined4 *)(local_d8 + 2) = 0xffffffff;
          local_88 = local_e0._0_4_;
          uVar17 = (uint)((ulonglong)lVar14 >> 0x10);
          uVar8 = (uint)lVar14 & 0xffff;
          uVar17 = ((uint)lVar14 << 0x10 | uVar8) + (int)((ulonglong)lVar14 >> 0x20) +
                   (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar8 >> 4);
          local_128 = 0;
          cVar7 = FUN_1400e5fb8(plVar2,uVar17,local_d8,&local_88);
          lVar14 = local_118;
          param_2 = local_108;
          if (cVar7 == '\0') {
            uVar8 = *(int *)(local_118 + 0xb0) - *(int *)(local_118 + 0xdc);
            iVar20 = 1;
            if (3 < uVar8) {
              uVar11 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
              lVar21 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
                }
              }
              iVar20 = 1 << ((byte)lVar21 & 0x1f);
            }
            if (((int)uVar8 < 1) || (iVar20 <= *(int *)(local_118 + 0xf0))) {
              uVar17 = *(int *)(local_118 + 0xf0) - 1U & uVar17;
              *(uint *)((longlong)plVar5 + 0x14) = uVar17;
              lVar21 = *(longlong *)(local_118 + 0xe8);
              if (*(longlong *)(local_118 + 0xe8) == 0) {
                lVar21 = local_e8;
              }
              *(undefined4 *)(plVar5 + 2) =
                   *(undefined4 *)
                    (lVar21 + ((longlong)*(int *)(local_118 + 0xf0) - 1U & (longlong)(int)uVar17) *
                              4);
              lVar21 = *(longlong *)(local_118 + 0xe8);
              if (*(longlong *)(local_118 + 0xe8) == 0) {
                lVar21 = local_e8;
              }
              *(undefined4 *)
               (lVar21 + ((longlong)*(int *)(local_118 + 0xf0) - 1U & (longlong)(int)uVar17) * 4) =
                   local_88;
            }
            else {
              *(int *)(local_118 + 0xf0) = iVar20;
              FUN_1448426b2(local_110);
              lVar14 = local_118;
              param_2 = local_108;
            }
          }
        }
        else {
          local_d8 = (longlong *)(lVar21 + 0x30);
          local_e0 = plVar3;
          FUN_144a405ac(local_f0,&local_88,&local_e0,0);
          lVar14 = local_118;
        }
      }
      uVar25 = uVar25 & ~(uint)uVar24;
      puVar10 = *(uint **)(param_2 + 0x60);
      if (*(uint **)(param_2 + 0x60) == (uint *)0x0) {
        puVar10 = puVar23;
      }
      uVar17 = *(uint *)(param_2 + 0x68);
      iVar20 = (int)uVar15;
      lVar21 = (longlong)iVar20;
      uVar8 = puVar10[lVar21] & uVar25;
      if (uVar8 == 0) {
        iVar12 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar12 = uVar17 - 1;
        }
        iVar12 = iVar12 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar20) {
          iVar13 = iVar20;
        }
        if (iVar20 < iVar12) {
          lVar22 = 0;
          do {
            uVar8 = puVar10[lVar21 + lVar22 + 1];
            if (uVar8 != 0) {
              uVar15 = (ulonglong)(iVar20 + (int)lVar22 + 1);
              uVar25 = 0xffffffff;
              goto LAB_14087daad;
            }
            iVar18 = iVar18 + 0x20;
            lVar22 = lVar22 + 1;
          } while (iVar13 - lVar21 != lVar22);
          uVar25 = 0xffffffff;
          iVar20 = iVar13;
        }
        uVar15 = (ulonglong)(iVar20 + 1);
        lVar14 = local_118;
        puVar23 = local_100;
        param_2 = local_108;
        uVar8 = uVar17;
      }
      else {
LAB_14087daad:
        uVar24 = (ulonglong)(-uVar8 & uVar8);
        uVar11 = uVar24 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        uVar8 = (iVar18 - ((uint)lVar21 ^ 0x3f)) + 0x3e;
        if ((int)uVar17 <= (int)uVar8) {
          uVar8 = uVar17;
        }
      }
    } while (uVar8 != (uint)local_f8);
  }
LAB_14087db15:
  uVar9 = FUN_14087e0a8(lVar14,&DAT_14cb843e8,0);
  *(undefined4 *)(lVar14 + 0x38) = uVar9;
  *(undefined4 *)(lVar14 + 0x3c) = uVar9;
  lVar21 = FUN_14087dee0(param_2);
  if (lVar21 != 0) {
    local_e0 = (longlong *)((ulonglong)local_e0 & 0xffffffffffffff00);
    local_b8[0] = 0;
    FUN_140217b36(&local_e0,lVar14 + 0x1e8);
    local_88 = 0xffffffff;
    uStack_84 = (undefined4)*(undefined8 *)(lVar21 + 0x178);
    uStack_80._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar21 + 0x178) >> 0x20);
    puVar19 = &local_b0;
    FUN_140c386b6(lVar21 + 0x150,puVar19,&local_88,&local_e0);
    if (local_90 == 3) {
      uVar17 = 3;
      uVar9 = local_b0;
    }
    else {
      uVar9 = *(undefined4 *)(local_118 + 0x138);
      puVar16 = &local_88;
      FUN_1400b56fe(puVar16,&local_b0,3);
      if (local_68 != 0) {
        uVar9 = local_88;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < uStack_70) {
          puVar16 = (undefined4 *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar4)(puVar16);
      }
      if (0x18 < uStack_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      uVar17 = (uint)local_90;
    }
    *(undefined4 *)(local_118 + 0x138) = uVar9;
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar17 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_98) {
        puVar19 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar4)(puVar19);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    FUN_1448173f8(local_b8);
    uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
    if (((char)local_e0 == '\x03') &&
       (uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80),
       uStack_d0 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)uStack_d0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uStack_80 = (longlong *)CONCAT44(uStack_80._4_4_,(undefined4)uStack_80);
      if (*piVar1 == 0) {
        (**(code **)(*uStack_d0 + 0x10))();
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087dee0 FUN_14087dee0 body=55 status=ok
// SIG undefined FUN_14087dee0(void)

longlong FUN_14087dee0(longlong *param_1)

{
  longlong lVar1;
  
  if ((param_1[1] != 0) && (lVar1 = FUN_14087df18(), lVar1 != 0)) {
    return lVar1;
  }
  if (*param_1 == 0) {
    return 0;
  }
  lVar1 = FUN_14087e00e();
  return lVar1;
}



// FUNCTION 14087df18 FUN_14087df18 body=138 status=ok
// SIG undefined FUN_14087df18(void)

longlong FUN_14087df18(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x68);
  if (lVar4 == 0) {
    uVar3 = FUN_141227ea0();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x68) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x70) == 0) {
    if ((*(longlong *)(param_1 + 0x60) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x60));
      }
      *(longlong *)(param_1 + 0x70) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0x70);
}



// FUNCTION 14087dfa2 FUN_14087dfa2 body=107 status=ok
// SIG undefined FUN_14087dfa2(void)

void FUN_14087dfa2(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14087dff1:
      FUN_14064e812(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1408cb1a2(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14087dff1;
  FUN_144a40a0c(param_1);
  FUN_14064e812(param_1,param_2);
  return;
}



// FUNCTION 14087e00e FUN_14087e00e body=153 status=ok
// SIG undefined FUN_14087e00e(void)

longlong FUN_14087e00e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xf0);
  if (lVar4 == 0) {
    uVar3 = FUN_141227ea0();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xf0) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xf8) == 0) {
    if ((*(longlong *)(param_1 + 0xe8) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xe8));
      }
      *(longlong *)(param_1 + 0xf8) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0xf8);
}



// FUNCTION 14087e0a8 FUN_14087e0a8 body=171 status=ok
// SIG undefined FUN_14087e0a8(void)

longlong FUN_14087e0a8(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0xe0;
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xe8);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xf0) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return param_3;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return param_3;
          }
          return plVar1[1];
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return param_3;
}



// FUNCTION 14087e154 FUN_14087e154 body=1300 status=ok
// SIG undefined FUN_14087e154(void)

void FUN_14087e154(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong *_Dst;
  undefined4 *puVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 **local_128;
  undefined1 local_11c [4];
  undefined8 *local_118;
  ulonglong uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0xc1) == '\0') {
    FUN_140368e06();
    local_e8 = 0;
    local_e0 = 0;
    local_118 = (undefined8 *)0x0;
    uStack_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0xffffffff00000080;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    if (*param_1 != 0) {
      FUN_14087ecb8();
    }
    FUN_14087e82c(&local_118);
    if (param_1[1] != 0) {
      lVar8 = FUN_140a9668e();
      if (lVar8 != 0) {
        do {
          uVar9 = FUN_14087ea48(lVar8);
          FUN_14087e82c(&local_118,uVar9);
          FUN_14087e702(&local_118,lVar8 + 0x108);
          lVar8 = FUN_140a9668e(lVar8);
        } while (lVar8 != 0);
      }
      uVar9 = FUN_14087ea48(param_1[1]);
      FUN_14087e82c(&local_118,uVar9);
      FUN_14087e702(&local_118);
    }
    lVar8 = param_1[3];
    if ((longlong)(int)lVar8 != 0) {
      lVar2 = param_1[2];
      lVar19 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar19) != 0) {
          uVar9 = FUN_14087e66a(*(longlong *)(lVar2 + lVar19));
          FUN_14087e82c(&local_118,uVar9);
          FUN_14087e702(&local_118);
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)(int)lVar8 * 8 != lVar19);
    }
    FUN_14087ed52(&local_118);
    plVar1 = param_1 + 8;
    uVar20 = (uint)uStack_110;
    uVar13 = uStack_110 & 0xffffffff;
    iVar6 = (int)param_1[9];
    if ((uint)(iVar6 - *(int *)((longlong)param_1 + 0x74)) < (uint)uStack_110) {
      if ((int)(uint)uStack_110 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)(uint)uStack_110);
      }
      if (iVar6 < (int)(uint)uStack_110) {
        uVar21 = (uint)uStack_110 - iVar6;
        iVar14 = *(int *)((longlong)param_1 + 0x4c);
        iVar15 = iVar6;
        if (iVar14 < (int)(uint)uStack_110) {
          FUN_144727cd0(plVar1);
          iVar15 = (int)param_1[9];
          iVar14 = *(int *)((longlong)param_1 + 0x4c);
        }
        *(uint *)(param_1 + 9) = iVar15 + uVar21;
        if ((uint)(iVar14 - iVar15) < uVar21) {
          FUN_14482b872(plVar1);
        }
        if (iVar15 < (int)uVar20) {
          lVar8 = *plVar1;
          iVar14 = *(int *)((longlong)param_1 + 0x74);
          puVar11 = (undefined4 *)(lVar8 + uVar13 * 0x18 + -0x14);
          do {
            iVar12 = (int)uVar13;
            if (iVar14 != 0) {
              *(int *)(lVar8 + (longlong)(int)param_1[0xe] * 0x18) = iVar12 + -1;
            }
            puVar11[-1] = 0xffffffff;
            if (*(int *)((longlong)param_1 + 0x74) < 1) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = (undefined4)param_1[0xe];
            }
            uVar13 = uVar13 - 1;
            *puVar11 = uVar7;
            *(int *)(param_1 + 0xe) = iVar12 + -1;
            iVar14 = *(int *)((longlong)param_1 + 0x74) + 1;
            *(int *)((longlong)param_1 + 0x74) = iVar14;
            puVar11 = puVar11 + -6;
          } while ((longlong)iVar15 < (longlong)uVar13);
        }
        if (iVar6 == 0) {
          plVar16 = param_1 + 10;
          *(uint *)(param_1 + 0xd) = uVar21;
          uVar18 = uVar21 + 0x1f >> 5;
          if (*(int *)((longlong)param_1 + 0x6c) + 0x1fU >> 5 < uVar18) {
            FUN_14499171c(plVar16,0,uVar18,4);
            *(uint *)((longlong)param_1 + 0x6c) = uVar21 + 0x1f & 0xffffffe0;
          }
          _Dst = (longlong *)param_1[0xc];
          if ((longlong *)param_1[0xc] == (longlong *)0x0) {
            _Dst = plVar16;
          }
          if (uVar21 < 0x101) {
            uVar18 = uVar18 + (uVar18 == 0);
          }
          memset(_Dst,0,(ulonglong)(uVar18 << 2));
          iVar6 = (int)param_1[0xd];
          iVar14 = iVar6 + 0x1f;
          if (-1 < iVar6) {
            iVar14 = iVar6;
          }
          if (iVar6 % 0x20 != 0) {
            if ((longlong *)param_1[0xc] != (longlong *)0x0) {
              plVar16 = (longlong *)param_1[0xc];
            }
            bVar10 = -(char)(iVar6 % 0x20);
            *(uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4) << (bVar10 & 0x1f)
                       ) >> (bVar10 & 0x1f);
          }
        }
        else if (-1 < (int)uVar21) {
          uVar7 = FUN_144a54ea4(param_1 + 10,uVar21);
          FUN_1447c6044(param_1 + 10,uVar7,uVar21,0);
        }
      }
      if (uVar20 < 4) {
        iVar6 = 1;
      }
      else {
        uVar20 = (uVar20 | 1) + 0xe;
        iVar6 = 0x1f;
        if (uVar20 != 0) {
          for (; uVar20 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        iVar6 = 1 << ((byte)iVar6 & 0x1f);
      }
      if (((int)param_1[0x11] == 0) || ((int)param_1[0x11] < iVar6)) {
        *(int *)(param_1 + 0x11) = iVar6;
        FUN_1403692e0(plVar1);
      }
    }
    if ((longlong)(int)(uint)uStack_110 != 0) {
      lVar8 = (longlong)(int)(uint)uStack_110 * 0x28;
      puVar17 = local_118;
      do {
        local_138 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        local_138[4] = 0;
        local_138[5] = 0;
        *local_138 = 0;
        local_138[1] = 0;
        local_138[2] = 0;
        local_138[3] = 0;
        local_138[6] = 0;
        *(undefined4 *)(local_138 + 4) = 0x3f800000;
        *(undefined1 *)((longlong)local_138 + 0x25) = 8;
        *(undefined2 *)((longlong)local_138 + 0x26) = 0xffff;
        local_138[7] = 0;
        local_138[8] = 0;
        local_130 = puVar17;
        local_128 = &local_138;
        FUN_1406fdf00(plVar1,local_11c,&local_130,0);
        local_138[4] = puVar17[4];
        uVar9 = *puVar17;
        uVar5 = puVar17[1];
        uVar7 = *(undefined4 *)((longlong)puVar17 + 0x14);
        uVar3 = *(undefined4 *)(puVar17 + 3);
        uVar4 = *(undefined4 *)((longlong)puVar17 + 0x1c);
        *(undefined4 *)(local_138 + 2) = *(undefined4 *)(puVar17 + 2);
        *(undefined4 *)((longlong)local_138 + 0x14) = uVar7;
        *(undefined4 *)(local_138 + 3) = uVar3;
        *(undefined4 *)((longlong)local_138 + 0x1c) = uVar4;
        *local_138 = uVar9;
        local_138[1] = uVar5;
        if (param_2 != '\0') {
          *(undefined1 *)((longlong)local_138 + 0x34) = 1;
          local_138[5] = local_138[2];
          *(undefined4 *)(local_138 + 6) = *(undefined4 *)(local_138 + 3);
          FUN_14087eae0(local_138,local_138 + 5,local_138 + 6);
        }
        puVar17 = puVar17 + 5;
        lVar8 = lVar8 + -0x28;
      } while (lVar8 != 0);
    }
    *(undefined1 *)((longlong)param_1 + 0xc1) = 1;
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_14087ea10(&local_b8);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_14087e9d8(&local_108);
    if (local_118 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087e66a FUN_14087e66a body=151 status=ok
// SIG undefined FUN_14087e66a(void)

longlong FUN_14087e66a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 == 0) {
    uVar3 = FUN_14087e99e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xa0) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xa8) == 0) {
    if ((*(longlong *)(param_1 + 0x98) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x98));
      }
      *(longlong *)(param_1 + 0xa8) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0xa8);
}



// FUNCTION 14087e702 FUN_14087e702 body=297 status=ok
// SIG undefined FUN_14087e702(void)

void FUN_14087e702(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar6 = param_2[1];
  if ((longlong)(int)lVar6 != 0) {
    lVar2 = *param_2;
    lVar11 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar11);
      if (lVar3 != 0) {
        plVar4 = *(longlong **)(lVar2 + 8 + lVar11);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
        lVar8 = *(longlong *)(lVar3 + 0x20);
        if (lVar8 == 0) {
          uVar9 = FUN_14087e99e();
          lVar8 = FUN_14477b664(uVar9);
          *(longlong *)(lVar3 + 0x20) = lVar8;
        }
        lVar10 = *(longlong *)(lVar3 + 0x28);
        if (lVar10 == 0) {
          if ((*(longlong *)(lVar3 + 0x18) == 0) || (lVar8 == 0)) {
            lVar10 = 0;
          }
          else {
            plVar5 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar5 == (longlong *)0x0) ||
               (cVar7 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar7 == '\0')) {
              lVar10 = 0;
            }
            else {
              uVar9 = (**(code **)(*plVar5 + 0x110))(plVar5);
              lVar10 = FUN_144aff482(uVar9,(longlong *)(lVar3 + 0x18));
            }
            *(longlong *)(lVar3 + 0x28) = lVar10;
          }
        }
        FUN_14087e82c(param_1,lVar10);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar4 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar1 = (int *)((longlong)plVar4 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
      lVar11 = lVar11 + 0x18;
    } while ((longlong)(int)lVar6 * 0x18 != lVar11);
  }
  return;
}



// FUNCTION 14087e82c FUN_14087e82c body=368 status=ok
// SIG undefined FUN_14087e82c(void)

void FUN_14087e82c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  undefined1 auStack_88 [38];
  undefined2 local_62;
  longlong *local_60;
  undefined2 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != 0) && ((longlong)*(int *)(param_2 + 0x20) != 0)) {
    plVar15 = *(longlong **)(param_2 + 0x18);
    plVar1 = plVar15 + (longlong)*(int *)(param_2 + 0x20) * 5;
    do {
      if ((int)param_1[3] != *(int *)((longlong)param_1 + 0x44)) {
        lVar16 = *plVar15;
        uVar4 = (uint)((ulonglong)lVar16 >> 0x10);
        uVar13 = (uint)lVar16 & 0xffff;
        plVar12 = (longlong *)param_1[10];
        if ((longlong *)param_1[10] == (longlong *)0x0) {
          plVar12 = param_1 + 9;
        }
        iVar14 = *(int *)((longlong)plVar12 +
                         (ulonglong)
                         ((int)param_1[0xb] - 1U &
                         (int)((ulonglong)lVar16 >> 0x20) + ((uint)lVar16 << 0x10 | uVar13) +
                         (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar13 >> 4)) * 4);
        if (iVar14 != -1) {
          do {
            plVar12 = (longlong *)(param_1[2] + (longlong)iVar14 * 0x14);
            if (*plVar12 == lVar16) {
              if (((ulonglong)(plVar12 + 1) & 0xfffffffffffffff7) != 0) goto LAB_14087e968;
              break;
            }
            iVar14 = *(int *)((longlong)plVar12 + 0xc);
          } while (iVar14 != -1);
        }
      }
      local_62 = (undefined2)param_1[1];
      local_58 = &local_62;
      local_60 = plVar15;
      FUN_140870298(param_1 + 2,local_4c,&local_60,0);
      iVar14 = (int)param_1[1];
      lVar16 = (longlong)iVar14;
      *(uint *)(param_1 + 1) = iVar14 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar14 + 1U) {
        FUN_141895faa(param_1,iVar14);
      }
      lVar3 = *param_1;
      *(longlong *)(lVar3 + 0x20 + lVar16 * 0x28) = plVar15[4];
      lVar9 = *plVar15;
      uVar5 = *(undefined4 *)((longlong)plVar15 + 4);
      lVar10 = plVar15[1];
      uVar6 = *(undefined4 *)((longlong)plVar15 + 0xc);
      uVar7 = *(undefined4 *)((longlong)plVar15 + 0x14);
      lVar11 = plVar15[3];
      uVar8 = *(undefined4 *)((longlong)plVar15 + 0x1c);
      puVar2 = (undefined4 *)(lVar3 + 0x10 + lVar16 * 0x28);
      *puVar2 = (int)plVar15[2];
      puVar2[1] = uVar7;
      puVar2[2] = (int)lVar11;
      puVar2[3] = uVar8;
      puVar2 = (undefined4 *)(lVar3 + lVar16 * 0x28);
      *puVar2 = (int)lVar9;
      puVar2[1] = uVar5;
      puVar2[2] = (int)lVar10;
      puVar2[3] = uVar6;
LAB_14087e968:
      plVar15 = plVar15 + 5;
    } while (plVar15 != plVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087e99e FUN_14087e99e body=57 status=ok
// SIG undefined FUN_14087e99e(void)

void FUN_14087e99e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a3f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a3f0 = FUN_140002ddd(FUN_146525fe2,uVar1,L"InventoryParamsDef");
  }
  return;
}



// FUNCTION 14087e9d8 FUN_14087e9d8 body=55 status=ok
// SIG undefined FUN_14087e9d8(void)

void FUN_14087e9d8(longlong *param_1)

{
  FUN_14087ebc4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14087ea10 FUN_14087ea10 body=55 status=ok
// SIG undefined FUN_14087ea10(void)

void FUN_14087ea10(longlong *param_1)

{
  FUN_14087ec3e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14087ea48 FUN_14087ea48 body=151 status=ok
// SIG undefined FUN_14087ea48(void)

longlong FUN_14087ea48(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x168);
  if (lVar4 == 0) {
    uVar3 = FUN_14087e99e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x168) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x170) == 0) {
    if ((*(longlong *)(param_1 + 0x160) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x160));
      }
      *(longlong *)(param_1 + 0x170) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0x170);
}



// FUNCTION 14087eae0 FUN_14087eae0 body=227 status=ok
// SIG undefined FUN_14087eae0(void)

void FUN_14087eae0(longlong param_1,ulonglong *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  
  if ((*(char *)(param_1 + 0x24) == '\x01') && (bVar3 = *(byte *)(param_1 + 0x25), bVar3 != 0)) {
    if (bVar3 == 0x3f) {
      uVar6 = 0;
    }
    else {
      lVar7 = 1L << (bVar3 & 0x3f);
      uVar6 = lVar7 - 1;
      uVar4 = rand();
      uVar5 = (ulonglong)(int)((float)lVar7 * ((float)(uVar4 & 0x7fff) / 32767.0));
      if ((longlong)uVar5 < (longlong)uVar6) {
        uVar6 = uVar5;
      }
    }
    *param_2 = uVar6;
    if (*(char *)(param_1 + 8) == '\x01') {
      fVar1 = *(float *)(param_1 + 0x1c);
      fVar2 = *(float *)(param_1 + 0x20);
      fVar8 = ((fVar2 - fVar1) * (float)uVar6) / (float)~(-1L << (*(byte *)(param_1 + 0x25) & 0x3f))
              + fVar1;
      if (fVar2 <= fVar8) {
        fVar8 = fVar2;
      }
      if (fVar8 <= fVar1) {
        fVar8 = fVar1;
      }
      *param_3 = fVar8;
    }
  }
  return;
}



// FUNCTION 14087ebc4 FUN_14087ebc4 body=121 status=ok
// SIG undefined FUN_14087ebc4(void)

void FUN_14087ebc4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1401ad22e(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14087ec3e FUN_14087ec3e body=121 status=ok
// SIG undefined FUN_14087ec3e(void)

void FUN_14087ec3e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1447a08a2(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 14087ecb8 FUN_14087ecb8 body=153 status=ok
// SIG undefined FUN_14087ecb8(void)

longlong FUN_14087ecb8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x478);
  if (lVar4 == 0) {
    uVar3 = FUN_14087e99e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x478) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x480) == 0) {
    if ((*(longlong *)(param_1 + 0x470) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x470));
      }
      *(longlong *)(param_1 + 0x480) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0x480);
}



// FUNCTION 14087ed52 FUN_14087ed52 body=1971 status=ok
// SIG undefined FUN_14087ed52(void)

void FUN_14087ed52(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  short *psVar3;
  short *psVar4;
  short sVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  
  uVar11 = (int)param_1[3] - *(int *)((longlong)param_1 + 0x44);
  if (uVar11 < 4) {
    iVar17 = 1;
  }
  else {
    uVar7 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
    lVar24 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar24 == 0; lVar24 = lVar24 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar24 & 0x1f);
  }
  plVar1 = param_1 + 0xc;
  iVar21 = (int)param_1[0x15];
  if (iVar21 < iVar17 && 0 < (int)uVar11 || iVar17 < iVar21) {
    FUN_14087ec3e(plVar1);
    *(int *)(param_1 + 0x15) = iVar17;
    FUN_141895db0(plVar1);
  }
  else {
    plVar9 = param_1 + 0x13;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[0x14];
    }
    iVar17 = iVar21 + 3;
    if (-1 < iVar21) {
      iVar17 = iVar21;
    }
    if ((int)param_1[0xd] - *(int *)((longlong)param_1 + 0x94) < iVar17 >> 2) {
      iVar17 = (int)param_1[0x11];
      if (iVar17 != 0) {
        puVar22 = (uint *)param_1[0x10];
        if ((uint *)param_1[0x10] == (uint *)0x0) {
          puVar22 = (uint *)(param_1 + 0xe);
        }
        uVar11 = *puVar22;
        if (uVar11 == 0) {
          iVar21 = iVar17 + 0x1e;
          if (-1 < iVar17 + -1) {
            iVar21 = iVar17 + -1;
          }
          uVar7 = 0;
          uVar18 = (ulonglong)(uint)(iVar21 >> 5);
          if (iVar21 >> 5 < 1) {
            uVar18 = uVar7;
          }
          iVar21 = 0;
          do {
            if (uVar18 == uVar7) goto LAB_14087f2bc;
            iVar21 = iVar21 + 0x20;
            uVar11 = puVar22[uVar7 + 1];
            uVar7 = uVar7 + 1;
          } while (uVar11 == 0);
        }
        else {
          uVar7 = 0;
          iVar21 = 0;
        }
        uVar23 = (ulonglong)(-uVar11 & uVar11);
        uVar18 = uVar23 * 2 + 1;
        lVar24 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
          }
        }
        iVar13 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
        if (iVar13 < iVar17) {
          uVar11 = 0xffffffff;
          do {
            *(undefined4 *)
             ((longlong)plVar9 + (longlong)*(int *)(param_1[0xc] + 8 + (longlong)iVar13 * 0xc) * 4)
                 = 0xffffffff;
            uVar11 = ~(uint)uVar23 & uVar11;
            puVar22 = (uint *)param_1[0x10];
            if ((uint *)param_1[0x10] == (uint *)0x0) {
              puVar22 = (uint *)(param_1 + 0xe);
            }
            iVar19 = (int)param_1[0x11];
            iVar13 = (int)uVar7;
            lVar24 = (longlong)iVar13;
            uVar25 = puVar22[lVar24] & uVar11;
            if (uVar25 == 0) {
              iVar14 = iVar19 + 0x1e;
              if (-1 < iVar19 + -1) {
                iVar14 = iVar19 + -1;
              }
              iVar14 = iVar14 >> 5;
              iVar21 = iVar21 + 0x20;
              iVar15 = iVar14;
              if (iVar14 < iVar13) {
                iVar15 = iVar13;
              }
              if (iVar13 < iVar14) {
                lVar27 = 0;
                do {
                  uVar25 = puVar22[lVar24 + lVar27 + 1];
                  if (uVar25 != 0) {
                    uVar7 = (ulonglong)(iVar13 + (int)lVar27 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_14087f494;
                  }
                  iVar21 = iVar21 + 0x20;
                  lVar27 = lVar27 + 1;
                } while (iVar15 - lVar24 != lVar27);
                uVar11 = 0xffffffff;
                lVar24 = (longlong)iVar15;
              }
              uVar7 = lVar24 + 1U & 0xffffffff;
              iVar13 = iVar19;
            }
            else {
LAB_14087f494:
              uVar23 = (ulonglong)(-uVar25 & uVar25);
              uVar18 = uVar23 * 2 + 1;
              lVar24 = 0x3f;
              if (uVar18 != 0) {
                for (; uVar18 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              iVar13 = (iVar21 - ((uint)lVar24 ^ 0x3f)) + 0x3e;
              if (iVar19 <= iVar13) {
                iVar13 = iVar19;
              }
            }
          } while (iVar13 != iVar17);
        }
      }
    }
    else if (0 < iVar21) {
      lVar24 = 0;
      do {
        *(undefined4 *)((longlong)plVar9 + lVar24 * 4) = 0xffffffff;
        lVar24 = lVar24 + 1;
      } while (lVar24 < (int)param_1[0x15]);
    }
LAB_14087f2bc:
    FUN_14087ec3e(plVar1);
  }
  uVar7 = (longlong)(int)param_1[3] - (longlong)*(int *)((longlong)param_1 + 0x44);
  iVar17 = (int)param_1[0xd];
  uVar11 = (uint)uVar7;
  if ((uint)(iVar17 - *(int *)((longlong)param_1 + 0x94)) < uVar11) {
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b(uVar7);
    }
    uVar25 = uVar11 - iVar17;
    if (uVar25 != 0 && iVar17 <= (int)uVar11) {
      iVar21 = *(int *)((longlong)param_1 + 0x6c);
      iVar13 = iVar17;
      if (iVar21 < (int)uVar11) {
        FUN_1447a08a2(plVar1);
        iVar13 = (int)param_1[0xd];
        iVar21 = *(int *)((longlong)param_1 + 0x6c);
      }
      *(uint *)(param_1 + 0xd) = iVar13 + uVar25;
      if ((uint)(iVar21 - iVar13) < uVar25) {
        FUN_1447cc1b4(plVar1);
      }
      if (iVar13 < (int)uVar11) {
        lVar24 = *plVar1;
        uVar7 = uVar7 & 0xffffffff;
        iVar21 = *(int *)((longlong)param_1 + 0x94);
        puVar12 = (undefined4 *)(lVar24 + uVar7 * 0xc + -8);
        do {
          iVar19 = (int)uVar7;
          if (iVar21 != 0) {
            *(int *)(lVar24 + (longlong)(int)param_1[0x12] * 0xc) = iVar19 + -1;
          }
          puVar12[-1] = 0xffffffff;
          if (*(int *)((longlong)param_1 + 0x94) < 1) {
            uVar6 = 0xffffffff;
          }
          else {
            uVar6 = (undefined4)param_1[0x12];
          }
          uVar7 = uVar7 - 1;
          *puVar12 = uVar6;
          *(int *)(param_1 + 0x12) = iVar19 + -1;
          iVar21 = *(int *)((longlong)param_1 + 0x94) + 1;
          *(int *)((longlong)param_1 + 0x94) = iVar21;
          puVar12 = puVar12 + -3;
        } while ((longlong)iVar13 < (longlong)uVar7);
      }
      if (iVar17 == 0) {
        *(uint *)(param_1 + 0x11) = uVar25;
        uVar26 = uVar25 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x8c) + 0x1fU >> 5 < uVar26) {
          if ((0x80 < uVar25) || (param_1[0x10] != 0)) {
            uVar20 = 0;
            if (0x80 < uVar25) {
              uVar20 = uVar26;
            }
            FUN_1446efa72(param_1 + 0x10,0,uVar20,4);
          }
          *(uint *)((longlong)param_1 + 0x8c) = uVar25 + 0x1f & 0xffffffe0;
        }
        plVar9 = (longlong *)param_1[0x10];
        if ((longlong *)param_1[0x10] == (longlong *)0x0) {
          plVar9 = param_1 + 0xe;
        }
        if (uVar25 < 0x101) {
          uVar26 = uVar26 + (uVar26 == 0);
        }
        memset(plVar9,0,(ulonglong)(uVar26 << 2));
        iVar17 = (int)param_1[0x11];
        iVar21 = iVar17 + 0x1f;
        if (-1 < iVar17) {
          iVar21 = iVar17;
        }
        if (iVar17 % 0x20 != 0) {
          plVar9 = param_1 + 0xe;
          if ((longlong *)param_1[0x10] != (longlong *)0x0) {
            plVar9 = (longlong *)param_1[0x10];
          }
          bVar10 = -(char)(iVar17 % 0x20);
          *(uint *)((longlong)plVar9 + (longlong)(iVar21 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar9 + (longlong)(iVar21 >> 5) * 4) << (bVar10 & 0x1f))
               >> (bVar10 & 0x1f);
        }
      }
      else if (-1 < (int)uVar25) {
        uVar6 = FUN_144a54ea4(param_1 + 0xe,uVar25);
        FUN_1447c6044(param_1 + 0xe,uVar6,uVar25,0);
      }
    }
    iVar17 = 1;
    if (3 < uVar11) {
      uVar11 = (uVar11 | 1) + 0xe;
      iVar17 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar17 == 0; iVar17 = iVar17 + -1) {
        }
      }
      iVar17 = 1 << ((byte)iVar17 & 0x1f);
    }
    if (((int)param_1[0x15] == 0) || ((int)param_1[0x15] < iVar17)) {
      *(int *)(param_1 + 0x15) = iVar17;
      FUN_141895db0(plVar1);
    }
  }
  iVar17 = (int)param_1[1];
  if (0 < iVar17) {
    plVar2 = param_1 + 0x13;
    plVar9 = param_1 + 0xe;
    lVar24 = 0;
    do {
      lVar27 = *param_1;
      sVar5 = *(short *)(lVar27 + 0x26 + lVar24 * 0x28);
      uVar11 = (uint)sVar5;
      if (0 < sVar5) {
        iVar21 = (int)param_1[0xd];
        iVar17 = *(int *)((longlong)param_1 + 0x94);
        if (iVar21 != iVar17) {
          plVar8 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar8 = plVar2;
          }
          iVar13 = *(int *)((longlong)plVar8 +
                           (ulonglong)((int)param_1[0x15] + 0x7fffU & uVar11) * 4);
          if (iVar13 != -1) {
            do {
              psVar3 = (short *)(*plVar1 + (longlong)iVar13 * 0xc);
              if (*psVar3 == sVar5) {
                if (psVar3 != (short *)0x0) goto LAB_14087f124;
                break;
              }
              iVar13 = *(int *)(psVar3 + 2);
            } while (iVar13 != -1);
          }
        }
        if (iVar17 == 0) {
          *(int *)(param_1 + 0xd) = iVar21 + 1;
          if (*(int *)((longlong)param_1 + 0x6c) == iVar21) {
            FUN_1447cc1b4(plVar1,iVar21);
          }
          lVar16 = (longlong)iVar21;
          iVar17 = FUN_144a54ea4(plVar9,1);
          plVar8 = (longlong *)param_1[0x10];
          if ((longlong *)param_1[0x10] == (longlong *)0x0) {
            plVar8 = plVar9;
          }
          iVar13 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar13 = iVar17;
          }
          bVar10 = (byte)iVar17 & 0x1f;
          puVar22 = (uint *)((longlong)plVar8 + (longlong)(iVar13 >> 5) * 4);
          *puVar22 = *puVar22 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
        }
        else {
          iVar21 = (int)param_1[0x12];
          lVar16 = (longlong)iVar21;
          iVar13 = *(int *)(param_1[0xc] + 4 + lVar16 * 0xc);
          *(int *)(param_1 + 0x12) = iVar13;
          *(int *)((longlong)param_1 + 0x94) = iVar17 + -1;
          if (iVar17 + -1 != 0) {
            *(undefined4 *)(param_1[0xc] + (longlong)iVar13 * 0xc) = 0xffffffff;
          }
        }
        plVar8 = (longlong *)param_1[0x10];
        if ((longlong *)param_1[0x10] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar17 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar17 = iVar21;
        }
        puVar22 = (uint *)((longlong)plVar8 + (longlong)(iVar17 >> 5) * 4);
        *puVar22 = *puVar22 | 1 << ((byte)iVar21 & 0x1f);
        psVar3 = (short *)(param_1[0xc] + lVar16 * 0xc);
        sVar5 = *(short *)(lVar27 + lVar24 * 0x28 + 0x26);
        *psVar3 = sVar5;
        psVar3[1] = (short)lVar24;
        psVar3[2] = -1;
        psVar3[3] = -1;
        uVar25 = (int)param_1[0xd] - *(int *)((longlong)param_1 + 0x94);
        if ((uVar25 != 0) && (uVar25 != 1)) {
          plVar8 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar8 = plVar2;
          }
          iVar17 = *(int *)((longlong)plVar8 +
                           (ulonglong)((int)param_1[0x15] + 0x7fffU & uVar11) * 4);
          if (iVar17 != -1) {
            do {
              psVar4 = (short *)(*plVar1 + (longlong)iVar17 * 0xc);
              if (*psVar4 == sVar5) {
                *(undefined4 *)psVar4 = *(undefined4 *)psVar3;
                FUN_1488d2242(plVar1,iVar21);
                goto LAB_14087f124;
              }
              iVar17 = *(int *)(psVar4 + 2);
            } while (iVar17 != -1);
          }
        }
        if (uVar25 < 4) {
          iVar17 = 1;
        }
        else {
          uVar7 = (ulonglong)(uVar25 & 0xfffffffe) + 0xf;
          lVar27 = 0x3f;
          if (uVar7 != 0) {
            for (; uVar7 >> lVar27 == 0; lVar27 = lVar27 + -1) {
            }
          }
          iVar17 = 1 << ((byte)lVar27 & 0x1f);
        }
        if (((int)uVar25 < 1) || (iVar17 <= (int)param_1[0x15])) {
          uVar11 = (int)param_1[0x15] + 0x7fffU & uVar11;
          *(uint *)(psVar3 + 4) = uVar11;
          plVar8 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar8 = plVar2;
          }
          *(undefined4 *)(psVar3 + 2) =
               *(undefined4 *)
                ((longlong)plVar8 + (ulonglong)((int)param_1[0x15] + 0x7fffU & uVar11) * 4);
          plVar8 = (longlong *)param_1[0x14];
          if ((longlong *)param_1[0x14] == (longlong *)0x0) {
            plVar8 = plVar2;
          }
          *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[0x15] + 0x7fffU & uVar11) * 4) =
               iVar21;
        }
        else {
          *(int *)(param_1 + 0x15) = iVar17;
          FUN_141895db0(plVar1);
        }
LAB_14087f124:
        iVar17 = (int)param_1[1];
      }
      lVar24 = lVar24 + 1;
    } while (lVar24 < iVar17);
  }
  return;
}



// FUNCTION 14087f506 FUN_14087f506 body=218 status=ok
// SIG undefined FUN_14087f506(void)

int FUN_14087f506(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  code *local_38;
  undefined4 local_30;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_14087f5f4();
  if ((iVar1 == 0) && (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03')) {
    FUN_14087f5e2(param_1 + 0x178,*(longlong *)(param_1 + 0x170) + 0x498);
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_141269fce(param_1 + 0x178,0,*(undefined8 *)(param_1 + 0x38));
    }
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (lVar4 != 0) {
      uVar2 = FUN_14136bb9a();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        local_38 = FUN_1458cf8ec;
        local_30 = 0;
        FUN_145750f8e(lVar4 + 0x10,local_28,param_1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087f5e2 FUN_14087f5e2 body=18 status=ok
// SIG undefined FUN_14087f5e2(void)

void FUN_14087f5e2(longlong *param_1,longlong *param_2)

{
  if (*param_1 != *param_2) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
  }
  return;
}



// FUNCTION 14087f5f4 FUN_14087f5f4 body=1124 status=ok
// SIG undefined FUN_14087f5f4(void)

void FUN_14087f5f4(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  LARGE_INTEGER *pLVar9;
  undefined4 *puVar10;
  undefined1 auStack_e8 [32];
  float local_c8;
  char local_c4;
  LARGE_INTEGER local_c0 [2];
  longlong *local_b0;
  ushort local_a8;
  byte local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1405b019a(&local_c8,param_1 + 9);
  if (local_c4 == '\x01') {
    if (0.0 < local_c8) {
      FUN_1405b0300(local_c0,param_1 + 9);
      if ((undefined1)local_c0[0].s.HighPart == '\0') {
        FUN_1489a7b18(param_1,local_c8);
      }
    }
  }
  if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
    QueryPerformanceCounter(local_c0);
    *(undefined4 *)((longlong)param_1 + 0x144) = local_c0[0].s.LowPart;
    local_a8 = 4;
    local_a0 = 2;
    pLVar9 = local_c0;
    FUN_1408834b4(param_1,&DAT_14cb8cf00,pLVar9);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_a8) {
        pLVar9 = (LARGE_INTEGER *)CONCAT44(local_c0[0].s.HighPart,local_c0[0].s.LowPart);
      }
      (*pcVar2)(pLVar9);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(local_c0[0].s.HighPart,local_c0[0].s.LowPart));
    }
    lVar3 = param_1[0x2c];
    bVar4 = *(byte *)(lVar3 + 0x38d);
    if (bVar4 == 2) {
      bVar4 = FUN_1408855b2(param_1);
      *(byte *)(param_1 + 0x2b) = bVar4;
      local_c0[0]._0_4_ = ZEXT14(bVar4);
      local_a0 = 1;
      puVar7 = &DAT_14cb8cf08;
    }
    else if (bVar4 == 1) {
      local_c0[0].s.LowPart = (uint)(uint3)local_c0[0]._1_3_ << 8;
      local_98[0] = 0;
      FUN_1456bb102(local_c0,param_1[7]);
      puVar10 = &local_68;
      FUN_1447c3578(lVar3 + 0x3c8,puVar10,local_c0);
      uVar6 = FUN_1405d5f74(puVar10);
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar6;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_50) {
          puVar10 = (undefined4 *)CONCAT44(uStack_64,local_68);
        }
        (*pcVar2)(puVar10);
      }
      if (0x18 < local_50) {
        FUN_1400020a8(CONCAT44(uStack_64,local_68));
      }
      FUN_144a5ac3a(local_c0);
      local_c0[0]._0_4_ = *(uint *)((longlong)param_1 + 0x134);
      local_a0 = 2;
      puVar7 = &DAT_14cb8cef8;
    }
    else {
      if (bVar4 - 3 < 2) goto LAB_14087f740;
      local_c0[0].s.LowPart = (uint)(uint3)local_c0[0]._1_3_ << 8;
      local_98[0] = 0;
      FUN_1456bb102(local_c0,param_1[7]);
      puVar10 = &local_90;
      FUN_1447c3578(lVar3 + 0x390,puVar10,local_c0);
      if (local_70 == 3) {
        uVar5 = 3;
        uVar6 = local_90;
      }
      else {
        puVar8 = &local_68;
        FUN_1400b56fe(puVar8,&local_90,3);
        uVar6 = 0;
        if (local_48 != 0) {
          uVar6 = local_68;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar8 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar2)(puVar8);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        uVar5 = (uint)local_70;
      }
      *(undefined4 *)(param_1 + 0x26) = uVar6;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_78) {
          puVar10 = (undefined4 *)CONCAT44(uStack_8c,local_90);
        }
        (*pcVar2)(puVar10);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(CONCAT44(uStack_8c,local_90));
      }
      FUN_1448173f8(local_98);
      if (((undefined1)local_c0[0].s.LowPart == '\x03') && (local_b0 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
      local_c0[0]._0_4_ = *(undefined4 *)(param_1 + 0x26);
      local_a0 = 3;
      puVar7 = &DAT_14cb8cef0;
    }
    local_a8 = 4;
    pLVar9 = local_c0;
    FUN_1408834b4(param_1,puVar7,pLVar9);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a0 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_a8) {
        pLVar9 = (LARGE_INTEGER *)CONCAT44(local_c0[0].s.HighPart,local_c0[0].s.LowPart);
      }
      (*pcVar2)(pLVar9);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(CONCAT44(local_c0[0].s.HighPart,local_c0[0].s.LowPart));
    }
  }
  else {
    FUN_140881414(param_1);
  }
LAB_14087f740:
  FUN_140880bb4(param_1);
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14087fa5a FUN_14087fa5a body=59 status=ok
// SIG undefined FUN_14087fa5a(void)

bool FUN_14087fa5a(longlong param_1)

{
  char cVar1;
  bool bVar2;
  
  FUN_14087fa96();
  if (*(char *)(param_1 + 0xa0) == '\0') {
    do {
      cVar1 = FUN_14087fd2a(param_1);
    } while (cVar1 != '\0');
    bVar2 = *(char *)(param_1 + 0x120) == '\x04';
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



// FUNCTION 14087fa96 FUN_14087fa96 body=336 status=ok
// SIG undefined FUN_14087fa96(void)

undefined8 FUN_14087fa96(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xd8);
    lVar7 = (longlong)*(int *)(param_1 + 0xe0) * 0x50;
    do {
      if (*(char *)(lVar4 + 0x40) == '\x01') {
        if ((*(char *)(lVar4 + 8) != '\0') ||
           (*(float *)(lVar4 + 0x34) <= *(float *)(lVar4 + 0x3c) &&
            *(float *)(lVar4 + 0x3c) != *(float *)(lVar4 + 0x34))) goto LAB_14087fb9a;
      }
      else if (((*(int *)(lVar4 + 0x18) != 0) &&
               (((uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc))
                && (plVar6 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar6 != (longlong *)0x0)))) &&
              ((((int)plVar6[2] == *(int *)(lVar4 + 0x18) &&
                ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (*plVar6 != 0)))) {
        if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_14087fbe1:
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            puVar3 = (undefined8 *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((puVar3 == (undefined8 *)0x0) || (*(int *)(puVar3 + 2) != *(int *)(lVar4 + 0x10)))
               || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0)) goto LAB_14087fbe1;
            uVar5 = *puVar3;
          }
        }
        cVar2 = FUN_14489e746(*plVar6,lVar4,uVar5,0);
        if (cVar2 != '\0') {
LAB_14087fb9a:
          FUN_14489ea98(param_1);
          FUN_14018caa0(param_1);
          FUN_14087fbe6(param_1);
          return 0;
        }
      }
      lVar4 = lVar4 + 0x50;
      lVar7 = lVar7 + -0x50;
    } while (lVar7 != 0);
  }
  return 1;
}



// FUNCTION 14087fbe6 FUN_14087fbe6 body=323 status=ok
// SIG undefined FUN_14087fbe6(void)

void FUN_14087fbe6(longlong param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(*(longlong *)(param_1 + 0xd0) + 0xd0) == '\x01') && (*(int *)(param_1 + 0xe0) != 0)
     ) {
    FUN_14088245e(param_1,local_38);
    if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xd8);
      lVar3 = (longlong)*(int *)(param_1 + 0xe0) * 0x50;
      do {
        if ((((*(int *)(lVar4 + 0x18) != 0) && (uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1))
            && ((int)uVar1 < DAT_14c9647dc)) &&
           (((plVar6 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(lVar4 + 0x18))) &&
            (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (*plVar6 != 0)))))) {
          if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_14087fd25:
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((int)uVar1 < DAT_14c9647dc) {
              puVar2 = (undefined8 *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
              if (((puVar2 == (undefined8 *)0x0) || (*(int *)(puVar2 + 2) != *(int *)(lVar4 + 0x10))
                  ) || ((*(uint *)(puVar2 + 1) & 0x10200000) != 0)) goto LAB_14087fd25;
              uVar5 = *puVar2;
            }
          }
          FUN_140880986(*plVar6,lVar4,uVar5,local_38);
        }
        lVar4 = lVar4 + 0x50;
        lVar3 = lVar3 + -0x50;
      } while (lVar3 != 0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14087fd2a FUN_14087fd2a body=3162 status=ok
// SIG undefined FUN_14087fd2a(void)

/* WARNING: Type propagation algorithm not settling */

bool FUN_14087fd2a(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  float fVar9;
  longlong lVar10;
  longlong *******ppppppplVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  longlong *******unaff_RBX;
  undefined1 uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined4 uVar25;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong *******local_190;
  int local_188;
  ushort local_178;
  byte local_170;
  longlong *******local_110;
  int local_108;
  undefined4 local_104;
  char local_100 [16];
  longlong *local_f0;
  undefined4 local_d8 [2];
  undefined4 local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  cVar2 = (char)param_1[0x24];
  switch(cVar2) {
  case '\x01':
    if ((*(char *)((longlong)param_1 + 0x15a) == '\x01') &&
       (cVar7 = FUN_1410c9af0(param_1), cVar7 != '\0')) {
      *(undefined2 *)((longlong)param_1 + 0x159) = 1;
      unaff_RBX = (longlong *******)&local_190;
      local_178 = 4;
      local_190 = (longlong *******)CONCAT44(local_190._4_4_,1);
      local_170 = 1;
      FUN_1408834b4(param_1,&DAT_14cb8cf18,unaff_RBX);
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_178) {
          unaff_RBX = local_190;
        }
        (*pcVar5)(unaff_RBX);
      }
      if (0x18 < local_178) {
        FUN_1400020a8(local_190);
      }
    }
    if (*(char *)((longlong)param_1 + 0x159) != '\x01') {
      if ((longlong)(int)param_1[0x1c] != 0) {
        unaff_RBX = (longlong *******)param_1[0x1b];
        lVar10 = (longlong)(int)param_1[0x1c] * 0x50;
        do {
          if (*(char *)(unaff_RBX + 8) == '\x01') {
            if ((*(char *)(unaff_RBX + 1) != '\0') ||
               (*(float *)((longlong)unaff_RBX + 0x34) <= *(float *)((longlong)unaff_RBX + 0x3c) &&
                *(float *)((longlong)unaff_RBX + 0x3c) != *(float *)((longlong)unaff_RBX + 0x34)))
            goto switchD_14087fd8d_caseD_4;
          }
          else if (((*(int *)(unaff_RBX + 3) != 0) &&
                   (((uVar8 = *(uint *)((longlong)unaff_RBX + 0x14), -1 < (int)uVar8 &&
                     ((int)uVar8 < DAT_14c9647dc)) &&
                    (plVar17 = (longlong *)
                               ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                    plVar17 != (longlong *)0x0)))) &&
                  ((((int)plVar17[2] == *(int *)(unaff_RBX + 3) &&
                    ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))) {
            if ((*(int *)(unaff_RBX + 2) == 0) ||
               (uVar8 = *(uint *)((longlong)unaff_RBX + 0xc), (int)uVar8 < 0)) {
LAB_14087ff30:
              uVar15 = 0;
            }
            else {
              uVar15 = 0;
              if ((int)uVar8 < DAT_14c9647dc) {
                puVar13 = (undefined8 *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                if (((puVar13 == (undefined8 *)0x0) ||
                    (*(int *)(puVar13 + 2) != *(int *)(unaff_RBX + 2))) ||
                   ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_14087ff30;
                uVar15 = *puVar13;
              }
            }
            cVar7 = FUN_14489e746(*plVar17,unaff_RBX,uVar15,0);
            if (cVar7 != '\0') goto switchD_14087fd8d_caseD_4;
          }
          unaff_RBX = unaff_RBX + 10;
          lVar10 = lVar10 + -0x50;
        } while (lVar10 != 0);
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      lVar10 = FUN_1447210f0(param_1[7]);
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(longlong *)(lVar10 + 0x6d0);
      }
      param_1[0x27] = lVar10;
      uVar14 = 2;
      if (*(char *)((longlong)param_1 + 0x15a) == '\x01') {
        FUN_1410c9a0e(param_1,0);
      }
      break;
    }
    goto LAB_14088040f;
  case '\x02':
    if ((longlong)(int)param_1[0x1c] != 0) {
      unaff_RBX = (longlong *******)param_1[0x1b];
      lVar10 = (longlong)(int)param_1[0x1c] * 0x50;
      do {
        if (*(char *)(unaff_RBX + 8) == '\x01') {
          if ((*(char *)(unaff_RBX + 1) != '\0') ||
             (*(float *)((longlong)unaff_RBX + 0x34) <= *(float *)((longlong)unaff_RBX + 0x3c) &&
              *(float *)((longlong)unaff_RBX + 0x3c) != *(float *)((longlong)unaff_RBX + 0x34))) {
LAB_1408801aa:
            lVar10 = param_1[0x2c];
            if (*(char *)(lVar10 + 0x38c) != '\x01') goto switchD_14087fd8d_caseD_4;
            bVar6 = false;
            goto LAB_1408801c0;
          }
        }
        else if (((*(int *)(unaff_RBX + 3) != 0) &&
                 ((uVar8 = *(uint *)((longlong)unaff_RBX + 0x14), -1 < (int)uVar8 &&
                  ((int)uVar8 < DAT_14c9647dc)))) &&
                ((plVar17 = (longlong *)
                            ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                 plVar17 != (longlong *)0x0 &&
                 ((((int)plVar17[2] == *(int *)(unaff_RBX + 3) &&
                   ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))))) {
          if ((*(int *)(unaff_RBX + 2) == 0) ||
             (uVar8 = *(uint *)((longlong)unaff_RBX + 0xc), (int)uVar8 < 0)) {
LAB_140880041:
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (((puVar13 == (undefined8 *)0x0) ||
                  (*(int *)(puVar13 + 2) != *(int *)(unaff_RBX + 2))) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140880041;
              uVar15 = *puVar13;
            }
          }
          cVar7 = FUN_14489e746(*plVar17,unaff_RBX,uVar15,0);
          if (cVar7 != '\0') goto LAB_1408801aa;
        }
        unaff_RBX = unaff_RBX + 10;
        lVar10 = lVar10 + -0x50;
      } while (lVar10 != 0);
    }
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + 1.0;
    lVar10 = param_1[0x2c];
    bVar6 = true;
LAB_1408801c0:
    switch(*(undefined1 *)(lVar10 + 0x38d)) {
    case 1:
      if (*(float *)(param_1 + 0x28) <= (float)*(int *)((longlong)param_1 + 0x134))
      goto switchD_1408801e0_caseD_3;
      goto LAB_140880394;
    case 2:
      if ((((char)param_1[0x2b] == '\0') && (*(char *)((longlong)param_1 + 0x41) == '\x01')) &&
         (cVar7 = FUN_1408855b2(param_1), cVar7 != '\0')) {
        *(undefined1 *)(param_1 + 0x2b) = 1;
        unaff_RBX = (longlong *******)&local_190;
        local_178 = 4;
        local_190 = (longlong *******)CONCAT44(local_190._4_4_,1);
        local_170 = 1;
        FUN_1408834b4(param_1,&DAT_14cb8cf08,unaff_RBX);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_170 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_178) {
            unaff_RBX = local_190;
          }
          (*pcVar5)(unaff_RBX);
        }
        if (0x18 < local_178) {
          FUN_1400020a8(local_190);
        }
      }
      cVar7 = (char)param_1[0x2b];
      goto joined_r0x000140880313;
    case 3:
      goto switchD_1408801e0_caseD_3;
    case 4:
      cVar7 = (**(code **)(*param_1 + 0xa0))(param_1);
joined_r0x000140880313:
      if (cVar7 == '\0') goto switchD_1408801e0_caseD_3;
      goto LAB_140880394;
    }
    lVar10 = FUN_1447210f0(param_1[7]);
    if (lVar10 == 0) {
      dVar22 = 0.0;
    }
    else {
      dVar22 = *(double *)(lVar10 + 0x6d0);
    }
    if (*(float *)(param_1 + 0x26) <= (float)(dVar22 - (double)param_1[0x27])) goto LAB_140880394;
switchD_1408801e0_caseD_3:
    if ((*(char *)((longlong)param_1 + 0x159) == '\0') &&
       (cVar7 = FUN_1408814c2(param_1,&DAT_14cb8cf18,0), cVar7 == '\0')) {
      if (!bVar6) goto switchD_14087fd8d_caseD_4;
      uVar8 = *(int *)((longlong)param_1 + 0x144) * 0xbb38435 + 0x3619636b;
      DAT_14c83e67c = uVar8;
      *(uint *)((longlong)param_1 + 0x144) = uVar8;
      lVar10 = param_1[0x2c];
      if (((*(char *)(lVar10 + 0x38d) == '\x01') || (*(char *)(lVar10 + 0x38c) != '\x01')) ||
         ((*(int *)(lVar10 + 0x230) != 1 || (*(char *)((longlong)param_1 + 0x15b) == '\x01')))) {
        fVar9 = (float)(uVar8 & 0x7fffff | 0x3f800000);
        auVar23 = roundss(ZEXT816(0),ZEXT416((uint)fVar9),0xb);
        fVar9 = fVar9 - auVar23._0_4_;
        local_198 = param_1[7];
        if (fVar9 < 0.0) {
          uVar8 = rand();
          fVar9 = (float)(uVar8 & 0x7fff) / 32767.0;
        }
        local_110 = (longlong *******)0x0;
        local_104 = 0x20;
        local_108 = *(int *)(lVar10 + 0x230);
        uVar18 = (ulonglong)local_108;
        if (0x20 < uVar18) {
          FUN_140fb08bc(&local_190);
        }
        ppppppplVar11 = local_110;
        if (local_110 == (longlong *******)0x0) {
          ppppppplVar11 = (longlong *******)&local_190;
        }
        memset(ppppppplVar11,0,uVar18 << 2);
        if (*(int *)(lVar10 + 0x230) < 1) {
          uVar18 = 0xffffffff;
        }
        else {
          fVar24 = 0.0;
          lVar19 = 0;
          lVar20 = 0;
          do {
            lVar4 = *(longlong *)(lVar10 + 0x228);
            local_100[0] = '\0';
            local_d8[0] = 0;
            FUN_1456bb102(local_100,local_198);
            FUN_1447c3578(lVar4 + lVar19,&local_d0);
            if (local_b0 == 3) {
              uVar8 = 3;
              uVar25 = local_d0;
            }
            else {
              FUN_1400b56fe(&local_a8,&local_d0);
              uVar25 = 0;
              if (local_88 != 0) {
                uVar25 = local_a8;
              }
              pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
              if (pcVar5 != (code *)0x0) {
                puVar12 = &local_a8;
                if (0x18 < local_90) {
                  puVar12 = (undefined4 *)CONCAT44(uStack_a4,local_a8);
                }
                (*pcVar5)(puVar12);
              }
              if (0x18 < local_90) {
                FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
              }
              uVar8 = (uint)local_b0;
            }
            unaff_RBX = (longlong *******)&DAT_14c9a8508;
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
            if (pcVar5 != (code *)0x0) {
              puVar12 = &local_d0;
              if (0x18 < local_b8) {
                puVar12 = (undefined4 *)CONCAT44(uStack_cc,local_d0);
              }
              (*pcVar5)(puVar12);
            }
            if (0x18 < local_b8) {
              FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
            }
            FUN_1448173f8(local_d8);
            if ((local_100[0] == '\x03') && (local_f0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_f0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_f0 + 0x10))();
              }
            }
            ppppppplVar11 = local_110;
            if (local_110 == (longlong *******)0x0) {
              ppppppplVar11 = (longlong *******)&local_190;
            }
            *(undefined4 *)((longlong)ppppppplVar11 + lVar20 * 4) = uVar25;
            ppppppplVar11 = local_110;
            if (local_110 == (longlong *******)0x0) {
              ppppppplVar11 = (longlong *******)&local_190;
            }
            fVar24 = fVar24 + *(float *)((longlong)ppppppplVar11 + lVar20 * 4);
            lVar20 = lVar20 + 1;
            iVar3 = *(int *)(lVar10 + 0x230);
            lVar19 = lVar19 + 0x188;
          } while (lVar20 < iVar3);
          uVar18 = 0xffffffff;
          if (0 < iVar3) {
            fVar21 = 0.0;
            uVar16 = 0;
            do {
              bVar6 = fVar21 <= fVar9 * fVar24;
              fVar21 = fVar21 + *(float *)((longlong)ppppppplVar11 + uVar16 * 4);
              if ((bVar6) && (fVar9 * fVar24 <= fVar21)) {
                uVar18 = uVar16 & 0xffffffff;
                break;
              }
              uVar16 = uVar16 + 1;
            } while ((longlong)iVar3 != uVar16);
          }
        }
        if (local_110 != (longlong *******)0x0) {
          FUN_1400020a8();
        }
        if ((-1 < (int)uVar18) &&
           (unaff_RBX = (longlong *******)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1),
           (int)uVar18 < *(int *)(param_1[0x2c] + 0x230))) goto LAB_1408807fa;
      }
      else {
        uVar18 = 0;
        unaff_RBX = (longlong *******)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
LAB_1408807fa:
        FUN_140671132(param_1);
        if (param_1[0x2a] != 0) {
          FUN_1489a7558(param_1,*(longlong *)(param_1[0x2c] + 0x228) + uVar18 * 0x188 + 0x38,
                        param_1 + 0x2a,*(undefined4 *)((longlong)param_1 + 0x14c));
        }
        FUN_1408838b6(param_1,*(longlong *)(param_1[0x2c] + 0x228) + uVar18 * 0x188 + 0x38,
                      (ulonglong)unaff_RBX & 0xffffffff,(int)param_1[0x29] != (int)uVar18);
        *(int *)(param_1 + 0x29) = (int)uVar18;
      }
      if ((((((*(int *)((longlong)param_1 + 0x16c) != 0) &&
             (uVar8 = *(uint *)(param_1 + 0x2d), -1 < (int)uVar8)) && ((int)uVar8 < DAT_14c9647dc))
           && ((puVar13 = (undefined8 *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               puVar13 != (undefined8 *)0x0 &&
               (*(int *)(puVar13 + 2) == *(int *)((longlong)param_1 + 0x16c))))) &&
          ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)) &&
         (unaff_RBX = (longlong *******)*puVar13, unaff_RBX != (longlong *******)0x0)) {
        local_188 = (int)*(float *)(param_1 + 0x28);
        local_190 = (longlong *******)param_1[7];
        uVar15 = FUN_14477b072(unaff_RBX,DAT_14cb68470);
        (*(code *)(*unaff_RBX)[0x49])(unaff_RBX,uVar15,&local_190);
      }
      goto switchD_14087fd8d_caseD_4;
    }
LAB_140880394:
    if ((((*(int *)((longlong)param_1 + 0x16c) != 0) &&
         (uVar8 = *(uint *)(param_1 + 0x2d), -1 < (int)uVar8)) &&
        (((int)uVar8 < DAT_14c9647dc &&
         (((puVar13 = (undefined8 *)
                      ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
           puVar13 != (undefined8 *)0x0 &&
           (*(int *)(puVar13 + 2) == *(int *)((longlong)param_1 + 0x16c))) &&
          ((*(uint *)(puVar13 + 1) & 0x10200000) == 0)))))) &&
       (unaff_RBX = (longlong *******)*puVar13, unaff_RBX != (longlong *******)0x0)) {
      local_190 = (longlong *******)param_1[7];
      uVar15 = FUN_14477b072(unaff_RBX,DAT_14cb68480);
      (*(code *)(*unaff_RBX)[0x49])(unaff_RBX,uVar15,&local_190);
    }
LAB_14088040f:
    FUN_1418b184a(param_1);
    uVar14 = 3;
    break;
  case '\x03':
    uVar14 = 4;
    if ((longlong)(int)param_1[0x1c] != 0) {
      unaff_RBX = (longlong *******)param_1[0x1b];
      lVar10 = (longlong)(int)param_1[0x1c] * 0x50;
      do {
        if (*(char *)(unaff_RBX + 8) == '\x01') {
          if ((*(char *)(unaff_RBX + 1) != '\0') ||
             (*(float *)((longlong)unaff_RBX + 0x34) <= *(float *)((longlong)unaff_RBX + 0x3c) &&
              *(float *)((longlong)unaff_RBX + 0x3c) != *(float *)((longlong)unaff_RBX + 0x34)))
          goto switchD_14087fd8d_caseD_4;
        }
        else if (((*(int *)(unaff_RBX + 3) != 0) &&
                 (((uVar8 = *(uint *)((longlong)unaff_RBX + 0x14), -1 < (int)uVar8 &&
                   ((int)uVar8 < DAT_14c9647dc)) &&
                  (plVar17 = (longlong *)
                             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                  plVar17 != (longlong *)0x0)))) &&
                ((((int)plVar17[2] == *(int *)(unaff_RBX + 3) &&
                  ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)) && (*plVar17 != 0)))) {
          if ((*(int *)(unaff_RBX + 2) == 0) ||
             (uVar8 = *(uint *)((longlong)unaff_RBX + 0xc), (int)uVar8 < 0)) {
LAB_140880155:
            uVar15 = 0;
          }
          else {
            uVar15 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              puVar13 = (undefined8 *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (((puVar13 == (undefined8 *)0x0) ||
                  (*(int *)(puVar13 + 2) != *(int *)(unaff_RBX + 2))) ||
                 ((*(uint *)(puVar13 + 1) & 0x10200000) != 0)) goto LAB_140880155;
              uVar15 = *puVar13;
            }
          }
          cVar7 = FUN_14489e746(*plVar17,unaff_RBX,uVar15,0);
          if (cVar7 != '\0') goto switchD_14087fd8d_caseD_4;
        }
        unaff_RBX = unaff_RBX + 10;
        lVar10 = lVar10 + -0x50;
      } while (lVar10 != 0);
    }
    break;
  case '\x04':
    goto switchD_14087fd8d_caseD_4;
  default:
    if (*(char *)((longlong)param_1 + 0x159) == '\x01') goto LAB_14088040f;
    lVar10 = FUN_1447210f0(param_1[7]);
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = *(longlong *)(lVar10 + 0x6d0);
    }
    param_1[0x25] = lVar10;
    if (param_1[0x2a] != 0) {
      FUN_1489a7558(param_1,param_1[0x2c] + 0xd8,param_1 + 0x2a,
                    *(undefined4 *)((longlong)param_1 + 0x14c));
    }
    uVar14 = 1;
    FUN_1408838b6(param_1,param_1[0x2c] + 0xd8,1,1);
  }
  *(undefined1 *)(param_1 + 0x24) = uVar14;
switchD_14087fd8d_caseD_4:
  cVar7 = (char)param_1[0x24];
  if (cVar7 != cVar2) {
    (**(code **)(*param_1 + 0x98))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar7) & 0xffffffff,cVar2);
  }
  if ((local_80 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar7 != cVar2;
}



// FUNCTION 140880986 FUN_140880986 body=379 status=ok
// SIG undefined FUN_140880986(void)

void FUN_140880986(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = param_1[4];
    if (lVar2 != 0) {
      if (DAT_14cad2858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_144a7958c;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_146395584;
        local_58 = &LAB_147a0ba80;
        local_60 = &LAB_14575ccce;
        local_68 = L"Engine";
        local_70 = 0x40000000000;
        local_78 = 0x10000004;
        local_80 = 0x10;
        local_88 = 0x1180;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
      }
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
      }
    }
    lVar2 = param_1[0x7c];
    if (lVar2 == 0) {
      lVar2 = (**(code **)(*param_1 + 0x350))(param_1);
      param_1[0x7c] = lVar2;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    FUN_140880b02(lVar2,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
}



// FUNCTION 140880b02 FUN_140880b02 body=178 status=ok
// SIG undefined FUN_140880b02(void)

void FUN_140880b02(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x800) != *(int *)(param_1 + 0x82c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar6 = (uint)lVar2 & 0xffff;
    lVar5 = param_1 + 0x830;
    if (*(longlong *)(param_1 + 0x838) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x838);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x840) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar4 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          plVar1 = (longlong *)plVar1[1];
          if (plVar1 == (longlong *)0x0) {
            return;
          }
                    /* WARNING: Could not recover jumptable at 0x000140880ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar1 + 0x118))(plVar1,param_3,param_4);
          return;
        }
        iVar4 = (int)plVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 140880bb4 FUN_140880bb4 body=70 status=ok
// SIG undefined FUN_140880bb4(void)

byte FUN_140880bb4(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  
  FUN_140880c0c();
  FUN_140880f34(param_1);
  lVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar2 == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_1408838b6(param_1,lVar2,0,1);
    bVar1 = bVar1 ^ 1;
  }
  return bVar1;
}



// FUNCTION 140880c0c FUN_140880c0c body=193 status=ok
// SIG undefined FUN_140880c0c(void)

undefined8 FUN_140880c0c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140880cce();
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 8))();
  }
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    local_28 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = FUN_14477b072(plVar1,DAT_14cb680c8);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
    local_28 = *(undefined8 *)(param_1 + 0x38);
    plVar1 = *(longlong **)(param_1 + 0xa8);
    uVar2 = FUN_14477b072(plVar1,DAT_14cb680d8);
    (**(code **)(*plVar1 + 0x248))(plVar1,uVar2,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140880cce FUN_140880cce body=288 status=ok
// SIG undefined FUN_140880cce(void)

void FUN_140880cce(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x42) != '\x01') {
    local_50 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    FUN_140880df0(local_88,&DAT_14cb8cca8);
    lVar2 = local_60;
    lVar1 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
    if (local_80 != local_68) {
      puVar5 = local_80;
      do {
        local_50 = 0;
        FUN_140881600(puVar5[2],param_1,0,&local_50);
        puVar3 = (undefined8 *)FUN_140880eba(*puVar5);
        if (puVar3 == (undefined8 *)0x0) {
          puVar5 = (undefined8 *)0x0;
        }
        else {
          do {
            lVar4 = (**(code **)(*(longlong *)puVar3[2] + 0x180))();
            puVar5 = puVar3;
            if (lVar4 == *local_70) break;
            puVar3 = (undefined8 *)FUN_140880eba(*puVar3);
            puVar5 = (undefined8 *)0x0;
          } while (puVar3 != (undefined8 *)0x0);
        }
      } while (puVar5 != local_68);
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140880df0 FUN_140880df0 body=111 status=ok
// SIG undefined FUN_140880df0(void)

undefined8 * FUN_140880df0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = *param_3;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  uVar1 = FUN_140880eba(*param_2);
  param_1[1] = uVar1;
  param_1[2] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[3] = param_1;
  FUN_140880e60(param_1 + 1);
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[4] = 0;
  param_1[5] = param_2;
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
  UNLOCK();
  param_1[6] = param_1;
  FUN_140880e60(param_1 + 4);
  LOCK();
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  UNLOCK();
  return param_1;
}



// FUNCTION 140880e60 FUN_140880e60 body=67 status=ok
// SIG undefined FUN_140880e60(void)

void FUN_140880e60(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while ((lVar2 != 0 &&
         (plVar1 = (longlong *)param_1[2],
         lVar2 = (**(code **)(**(longlong **)(lVar2 + 0x10) + 0x180))(), lVar2 != *plVar1))) {
    lVar2 = FUN_140880eba(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 140880eba FUN_140880eba body=122 status=ok
// SIG undefined FUN_140880eba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140880eba(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  do {
    lVar2 = param_1[2];
    if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) & 0x40018000) == 0)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar2 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((*(uint *)(lVar2 + 8 + (ulonglong)(uVar1 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
          lVar2 = lVar2 + (ulonglong)(uVar1 & 0xffff) * 0x18;
LAB_140880f08:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_140880f08;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 140880f34 FUN_140880f34 body=444 status=ok
// SIG undefined FUN_140880f34(void)

void FUN_140880f34(longlong param_1)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  char local_98 [16];
  longlong *local_88;
  longlong local_80;
  undefined4 local_70 [2];
  char local_68;
  undefined8 local_60;
  longlong *local_58;
  undefined4 local_40 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined1 *)(param_1 + 0x11c) = 0;
  lVar4 = *(longlong *)(param_1 + 0xd0);
  if (*(int *)(lVar4 + 0x9c) == 1) {
    lVar5 = *(longlong *)(lVar4 + 0xb8);
    if (lVar5 == 0) {
      local_a0 = *(undefined8 *)(lVar4 + 0xa8);
      FUN_1446dcdd4(local_98);
      lVar5 = FUN_1448fdc6e(local_98);
      if (local_80 != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(lVar4 + 0xb8) = lVar5;
      if (lVar5 == 0) goto LAB_140881063;
    }
    local_98[0] = '\0';
    local_70[0] = 0;
    FUN_1456bb102(local_98,*(undefined8 *)(param_1 + 0x38));
    local_68 = '\0';
    local_40[0] = 0;
    uVar2 = FUN_1408810f1(lVar5,local_98);
    *(undefined1 *)(param_1 + 0x11c) = uVar2;
    FUN_1448173f8(local_40);
    if (local_68 != '\0') {
      if (local_68 == '\x01') {
        local_60 = 0;
      }
      else if ((local_68 == '\x03') && (local_58 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_58 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      local_68 = '\0';
    }
    FUN_1448173f8(local_70);
    if ((local_98[0] == '\x03') && (local_88 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_88 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_88 + 0x10))();
      }
    }
  }
  else if (((*(int *)(lVar4 + 0x9c) == 3) &&
           (lVar4 = FUN_140502f56(*(undefined8 *)(param_1 + 0x38)), lVar4 != 0)) &&
          (lVar4 = FUN_1470de3b0(lVar4,*(longlong *)(param_1 + 0xd0) + 0xc0), lVar4 != 0)) {
    uVar3 = FUN_14883b6a8();
    *(bool *)(param_1 + 0x11c) = (uVar3 & ~*(uint *)(lVar4 + 0x30)) != 0;
  }
LAB_140881063:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408810f1 FUN_1408810f1 body=340 status=ok
// SIG undefined FUN_1408810f1(void)

undefined4 FUN_1408810f1(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [48];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x30);
    plVar3 = *(longlong **)(param_1 + 0x38);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
    if (lVar5 == 0) {
      uVar4 = 0;
    }
    else {
      FUN_1400606f6(local_80,param_1,param_2);
      puVar6 = local_50;
      if (local_50 == (undefined1 *)0x0) {
        puVar6 = local_80;
      }
      if ((longlong)local_48 == 0) {
        uVar4 = 0;
        local_48 = 0;
      }
      else {
        lVar5 = (longlong)local_48 * 0x30;
        do {
          lVar5 = lVar5 + -0x30;
          uVar4 = FUN_140881246(param_1,puVar6);
          if ((char)uVar4 != '\0') break;
          puVar6 = puVar6 + 0x30;
        } while (lVar5 != 0);
      }
      puVar6 = local_80;
      if (local_50 != (undefined1 *)0x0) {
        puVar6 = local_50;
      }
      FUN_1446fdf58(puVar6,local_48);
      if (local_50 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
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
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 140881246 FUN_140881246 body=145 status=ok
// SIG undefined FUN_140881246(void)

byte FUN_140881246(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x30);
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    param_2 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2);
    param_2 = param_2 & 0xffffffff;
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  return plVar3 != (longlong *)0x0 & (byte)param_2;
}



// FUNCTION 1408812d8 FUN_1408812d8 body=86 status=ok
// SIG undefined FUN_1408812d8(void)

bool FUN_1408812d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auStack_58 [40];
  longlong local_30 [3];
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400e1dbc(param_1,local_30,param_3,param_3);
  if (local_18 == '\x01') {
    bVar1 = (*(byte *)(local_30[0] + 0x38) & 0x20) == 0;
  }
  else {
    bVar1 = false;
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140881330 FUN_140881330 body=228 status=ok
// SIG undefined FUN_140881330(void)

longlong FUN_140881330(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    uVar1 = (uint)((ulonglong)DAT_14cb8cc80 >> 0x10);
    uVar4 = (uint)DAT_14cb8cc80 & 0xffff;
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x88);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)DAT_14cb8cc80 >> 0x20) +
                             ((uint)DAT_14cb8cc80 << 0x10 | uVar4) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar2 != -1) {
      while (lVar3 = *(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 0x38,
            *(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 0x38) != DAT_14cb8cc80)
      {
        iVar2 = *(int *)(lVar3 + 0x30);
        if (iVar2 == -1) {
          return 0;
        }
      }
      if (lVar3 + 8 != 0 && lVar3 != 0) {
        uVar1 = FUN_14005fbd2(lVar3 + 8,0);
        if ((int)uVar1 < 0) {
          return 0;
        }
        if ((int)uVar1 < *(int *)(*(longlong *)(param_1 + 0x120) + 0xe8)) {
          return *(longlong *)(*(longlong *)(param_1 + 0x120) + 0xe0) + (ulonglong)uVar1 * 400 +
                 0x38;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140881414 FUN_140881414 body=173 status=ok
// SIG undefined FUN_140881414(void)

void FUN_140881414(longlong param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = FUN_14088155e(param_1,&DAT_14cb8cf00,0);
  *(undefined4 *)(param_1 + 0x144) = uVar3;
  uVar2 = FUN_1408814c2(param_1,&DAT_14cb8cf18,0);
  *(undefined1 *)(param_1 + 0x159) = uVar2;
  bVar1 = *(byte *)(*(longlong *)(param_1 + 0x160) + 0x38d);
  if (bVar1 == 2) {
    uVar2 = FUN_1408814c2(param_1,&DAT_14cb8cf08,0);
    *(undefined1 *)(param_1 + 0x158) = uVar2;
  }
  else if (bVar1 == 1) {
    fVar4 = (float)FUN_140ed0982(param_1,&DAT_14cb8cef8,0);
    *(int *)(param_1 + 0x134) = (int)fVar4;
  }
  else if (1 < bVar1 - 3) {
    uVar3 = FUN_140ed0982(param_1,&DAT_14cb8cef0,0);
    *(undefined4 *)(param_1 + 0x130) = uVar3;
  }
  return;
}



// FUNCTION 1408814c2 FUN_1408814c2 body=156 status=ok
// SIG undefined FUN_1408814c2(void)

ulonglong FUN_1408814c2(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if ((lVar4 != 0) && (lVar4 + 8 != 0)) {
            uVar3 = FUN_140168b7a(lVar4 + 8,param_3);
            return uVar3;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return (ulonglong)param_3;
}



// FUNCTION 14088155e FUN_14088155e body=162 status=ok
// SIG undefined FUN_14088155e(void)

ulonglong FUN_14088155e(longlong param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    lVar4 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x88);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar6 * 0x38) == lVar1) {
          if ((lVar4 != 0) && (lVar4 + 8 != 0)) {
            uVar3 = FUN_14005fbd2(lVar4 + 8,param_3);
            return uVar3;
          }
          break;
        }
        iVar6 = *(int *)(lVar4 + 0x30);
      } while (iVar6 != -1);
    }
  }
  return (ulonglong)param_3;
}



// FUNCTION 140881600 FUN_140881600 body=2393 status=ok
// SIG undefined FUN_140881600(void)

void FUN_140881600(undefined8 *param_1,longlong param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  double *pdVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  char cVar14;
  ulonglong uVar15;
  double dVar16;
  undefined8 *puVar17;
  double *pdVar18;
  uint uVar19;
  longlong lVar20;
  double dVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong lVar24;
  char *pcVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  longlong lVar33;
  bool bVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined1 auStack_128 [39];
  char local_101;
  longlong local_100;
  int local_f4;
  longlong local_f0;
  longlong *local_e8;
  undefined8 *local_e0;
  undefined1 local_d4 [4];
  longlong *local_d0;
  undefined8 *puStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar24 = param_1[5];
  if (*(longlong *)(param_2 + 0x38) == 0) {
    uVar22 = 0;
    uVar19 = 0;
  }
  else {
    uVar22 = *(uint *)(*(longlong *)(param_2 + 0x38) + 0xc);
    if ((int)uVar22 < DAT_14c9647dc) {
      lVar33 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
    }
    else {
      lVar33 = 0;
    }
    uVar19 = *(uint *)(lVar33 + 0x10);
    if (*(uint *)(lVar33 + 0x10) == 0) {
      LOCK();
      iVar28 = DAT_14c964868 + 1;
      UNLOCK();
      uVar29 = DAT_14c964868 + 1;
      bVar34 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar28;
      if (bVar34) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar29);
      }
      LOCK();
      uVar19 = *(uint *)(lVar33 + 0x10);
      bVar34 = uVar19 == 0;
      if (bVar34) {
        *(uint *)(lVar33 + 0x10) = uVar29;
        uVar19 = 0;
      }
      UNLOCK();
      if (bVar34) {
        uVar19 = uVar29;
      }
    }
  }
  if (*(int *)(lVar24 + 0x1460) != *(int *)(lVar24 + 0x148c)) {
    lVar33 = lVar24 + 0x1490;
    if (*(longlong *)(lVar24 + 0x1498) != 0) {
      lVar33 = *(longlong *)(lVar24 + 0x1498);
    }
    iVar28 = *(int *)(lVar33 + (ulonglong)(*(int *)(lVar24 + 0x14a0) - 1U & (uVar19 ^ uVar22)) * 4);
    if (iVar28 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar24 + 0x1458) + (longlong)iVar28 * 0x18) ==
            CONCAT44(uVar19,uVar22)) {
          cVar14 = *(char *)(param_2 + 0x42);
          if (cVar14 == '\x03') {
            cVar14 = FUN_140885768(param_1,*(undefined8 *)(param_2 + 0x38));
            if (cVar14 != '\0') break;
          }
          else if ((cVar14 == '\x01') ||
                  ((cVar14 != '\x02' &&
                   (cVar14 = (**(code **)(**(longlong **)(param_1[5] + 0x58) + 0x3c0))(),
                   cVar14 == '\0')))) break;
          cVar14 = *(char *)(param_2 + 0x40);
          local_100 = *(longlong *)(param_2 + 0x38);
          local_f4 = param_3;
          if (param_3 != 3) {
            iVar5 = *(int *)(param_1 + 0xe);
            lVar24 = (longlong)iVar5;
            if (lVar24 == 0) goto LAB_140881a01;
            plVar6 = (longlong *)param_1[0xd];
            local_f0 = (longlong)plVar6 + 0xac;
            iVar28 = 0;
            bVar34 = *plVar6 == local_100 && *(char *)((longlong)plVar6 + 0x14) == cVar14;
            iVar30 = 0;
            local_101 = cVar14;
            local_e8 = param_4;
            local_e0 = param_1;
            do {
              lVar33 = (longlong)iVar30;
              iVar27 = iVar30 + 1;
              if (iVar30 + 1 < iVar5) {
                iVar27 = iVar5;
              }
              pcVar25 = (char *)(local_f0 + lVar33 * 0x98);
              iVar31 = iVar30;
              lVar26 = lVar33;
              do {
                lVar26 = lVar26 + 1;
                iVar32 = iVar27;
                if (lVar24 <= lVar26) break;
                cVar14 = *pcVar25;
                plVar1 = (longlong *)(pcVar25 + -0x14);
                iVar31 = iVar31 + 1;
                pcVar25 = pcVar25 + 0x98;
                iVar32 = iVar31;
              } while (bVar34 == (*plVar1 == local_100 && cVar14 == local_101));
              iVar27 = iVar32 - iVar30;
              if (bVar34 == false) {
                if (iVar28 != iVar30) {
                  memmove(plVar6 + (longlong)iVar28 * 0x13,plVar6 + lVar33 * 0x13,
                          (longlong)iVar27 * 0x98);
                }
                iVar28 = iVar28 + iVar27;
              }
              else {
                FUN_140882410(plVar6 + lVar33 * 0x13,iVar27);
              }
              param_1 = local_e0;
              param_4 = local_e8;
              bVar34 = (bool)(bVar34 ^ 1);
              iVar30 = iVar32;
            } while (lVar26 < lVar24);
            goto LAB_140881a04;
          }
          iVar28 = *(int *)(param_1 + 0xe);
          if ((longlong)iVar28 == 0) {
LAB_140881a01:
            iVar28 = 0;
            goto LAB_140881a04;
          }
          lVar24 = param_1[0xd];
          lVar33 = 0;
          goto LAB_140881882;
        }
        iVar28 = *(int *)(*(longlong *)(lVar24 + 0x1458) + (longlong)iVar28 * 0x18 + 0x10);
      } while (iVar28 != -1);
    }
  }
  goto LAB_140881c7e;
  while (iVar28 = *(int *)(lVar20 + 0x30), iVar28 != -1) {
LAB_140881926:
    lVar20 = *(longlong *)(param_2 + 0x48) + (longlong)iVar28 * 0x38;
    if (*(longlong *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar28 * 0x38) == lVar26) {
      if (lVar20 != 0) {
        puVar23 = (undefined8 *)(lVar20 + 8);
        bVar3 = *(byte *)(lVar20 + 0x28);
        uVar4 = *(ushort *)(lVar20 + 0x20);
        uStack_a0 = (double)CONCAT62(uStack_a0._2_6_,uVar4);
        if (uVar4 < 0x19) {
          puVar17 = &local_b8;
        }
        else {
          puVar17 = (undefined8 *)FUN_14001cc68(uVar4,0);
          puVar23 = (undefined8 *)*puVar23;
          local_b8 = puVar17;
        }
        uVar15 = (ulonglong)((uint)bVar3 * 0x120);
        pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
        if (pcVar7 == (code *)0x0) {
          memcpy(puVar17,puVar23,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
        }
        else {
          (*pcVar7)(puVar17,puVar23);
        }
        local_98 = *(byte *)(lVar20 + 0x28);
        goto LAB_14088199f;
      }
      break;
    }
  }
LAB_140881ef2:
  uStack_a0 = (double)((ulonglong)uStack_a0._2_6_ << 0x10);
  local_98 = 0;
LAB_14088199f:
  local_d0 = param_4;
  puStack_c8 = &local_b8;
  FUN_140881f5a(lVar24 + lVar33 + 0x18,local_d4,&local_d0,0);
  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
  if (pcVar7 != (code *)0x0) {
    puVar23 = &local_b8;
    if (0x18 < (ushort)uStack_a0) {
      puVar23 = local_b8;
    }
    (*pcVar7)(puVar23);
  }
  if (0x18 < (ushort)uStack_a0) {
    FUN_1400020a8(local_b8);
  }
  goto LAB_140881c4e;
  while (lVar33 = lVar33 + 0x98, (longlong)iVar28 * 0x98 - lVar33 != 0) {
LAB_140881882:
    if ((((*(char *)(lVar24 + 0x14 + lVar33) == cVar14) &&
         (*(longlong *)(lVar24 + lVar33) == local_100)) &&
        (*(char *)(lVar24 + 0x68 + lVar33) == '\0')) && (*(float *)(lVar24 + 0x6c + lVar33) <= 0.0))
    {
      if (*(int *)(param_2 + 0x50) == *(int *)(param_2 + 0x7c)) goto LAB_140881ef2;
      lVar26 = *param_4;
      uVar19 = (uint)((ulonglong)lVar26 >> 0x10);
      uVar22 = (uint)lVar26 & 0xffff;
      lVar20 = param_2 + 0x80;
      if (*(longlong *)(param_2 + 0x88) != 0) {
        lVar20 = *(longlong *)(param_2 + 0x88);
      }
      iVar28 = *(int *)(lVar20 + (ulonglong)
                                 (*(int *)(param_2 + 0x90) - 1U &
                                 (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar22)
                                 + (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar22 >> 4)) * 4);
      if (iVar28 == -1) goto LAB_140881ef2;
      goto LAB_140881926;
    }
  }
LAB_140881a04:
  *(uint *)(param_1 + 0xe) = iVar28 + 1U;
  if (*(uint *)((longlong)param_1 + 0x74) < iVar28 + 1U) {
    FUN_14088594e(param_1 + 0xd,iVar28);
  }
  iVar5 = local_f4;
  lVar24 = param_1[0xd];
  pdVar2 = (double *)(lVar24 + (longlong)iVar28 * 0x98);
  lVar33 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(lVar24 + (longlong)iVar28 * 0x98) = lVar33;
  if (lVar33 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c();
  }
  bVar3 = DAT_14c950c29;
  dVar16 = *(double *)(param_2 + 0x30);
  pdVar2[1] = dVar16;
  if ((dVar16 != 0.0) && ((bVar3 & 1) != 0)) {
    FUN_1456cec3c();
  }
  *(int *)(pdVar2 + 2) = iVar5;
  *(undefined1 *)((longlong)pdVar2 + 0x14) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)((longlong)pdVar2 + 0x15) = *(undefined1 *)(param_2 + 0x42);
  pdVar2[7] = 0.0;
  *(undefined4 *)(pdVar2 + 8) = 0;
  pdVar2[3] = 0.0;
  pdVar2[4] = 0.0;
  *(undefined8 *)((longlong)pdVar2 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)pdVar2 + 0x4c) = 0;
  pdVar2[0xb] = 0.0;
  *(undefined4 *)(pdVar2 + 0xc) = 0;
  *(undefined1 *)(pdVar2 + 0xd) = 0;
  *(undefined4 *)((longlong)pdVar2 + 0x6c) = 0xbf000000;
  *(undefined1 *)(pdVar2 + 0x12) = 0;
  if (iVar5 == 3) {
    if (*(int *)(param_2 + 0x50) != *(int *)(param_2 + 0x7c)) {
      lVar24 = *param_4;
      uVar19 = (uint)((ulonglong)lVar24 >> 0x10);
      uVar22 = (uint)lVar24 & 0xffff;
      lVar33 = param_2 + 0x80;
      if (*(longlong *)(param_2 + 0x88) != 0) {
        lVar33 = *(longlong *)(param_2 + 0x88);
      }
      iVar28 = *(int *)(lVar33 + (ulonglong)
                                 (*(int *)(param_2 + 0x90) - 1U &
                                 (int)((ulonglong)lVar24 >> 0x20) + ((uint)lVar24 << 0x10 | uVar22)
                                 + (uVar19 << 0x13 | uVar19 & 0xffff) + (uVar22 >> 4)) * 4);
      if (iVar28 != -1) {
        do {
          lVar33 = *(longlong *)(param_2 + 0x48) + (longlong)iVar28 * 0x38;
          if (*(longlong *)(*(longlong *)(param_2 + 0x48) + (longlong)iVar28 * 0x38) == lVar24) {
            if (lVar33 != 0) {
              puVar23 = (undefined8 *)(lVar33 + 8);
              bVar3 = *(byte *)(lVar33 + 0x28);
              uVar4 = *(ushort *)(lVar33 + 0x20);
              uStack_a0 = (double)CONCAT62(uStack_a0._2_6_,uVar4);
              if (uVar4 < 0x19) {
                puVar17 = &local_b8;
              }
              else {
                puVar17 = (undefined8 *)FUN_14001cc68(uVar4,0);
                puVar23 = (undefined8 *)*puVar23;
                local_b8 = puVar17;
              }
              uVar15 = (ulonglong)((uint)bVar3 * 0x120);
              pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
              if (pcVar7 == (code *)0x0) {
                memcpy(puVar17,puVar23,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
              }
              else {
                (*pcVar7)(puVar17,puVar23);
              }
              local_98 = *(byte *)(lVar33 + 0x28);
              goto LAB_140881ae6;
            }
            break;
          }
          iVar28 = *(int *)(lVar33 + 0x30);
        } while (iVar28 != -1);
      }
    }
    uStack_a0 = (double)((ulonglong)uStack_a0._2_6_ << 0x10);
    local_98 = 0;
LAB_140881ae6:
    local_d0 = param_4;
    puStack_c8 = &local_b8;
    FUN_140881f5a(pdVar2 + 3,local_d4,&local_d0,0);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
    if (pcVar7 != (code *)0x0) {
      puVar23 = &local_b8;
      if (0x18 < (ushort)uStack_a0) {
        puVar23 = local_b8;
      }
      (*pcVar7)(puVar23);
    }
    if (0x18 < (ushort)uStack_a0) {
      FUN_1400020a8(local_b8);
    }
  }
  else {
    FUN_140725242(pdVar2 + 3,param_2 + 0x48);
  }
  dVar16 = *pdVar2;
  if (((dVar16 != 0.0) && (dVar21 = pdVar2[1], dVar21 != 0.0)) &&
     (*(char *)((longlong)dVar21 + 0x90) == '\x01')) {
    lVar24 = *(longlong *)((longlong)dVar16 + 0x1c8);
    if (lVar24 == 0) {
      uVar41 = (undefined4)DAT_14c8464f0;
      uVar42 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      uVar35 = SUB84(DAT_14c846500,0);
      uVar36 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
      uVar37 = (undefined4)DAT_14c8464e0;
      uVar38 = DAT_14c8464e0._4_4_;
      uVar39 = (undefined4)DAT_14c8464e8;
      uVar40 = DAT_14c8464e8._4_4_;
    }
    else {
      uVar37 = *(undefined4 *)(lVar24 + 0x260);
      uVar38 = *(undefined4 *)(lVar24 + 0x264);
      uVar39 = *(undefined4 *)(lVar24 + 0x268);
      uVar40 = *(undefined4 *)(lVar24 + 0x26c);
      uVar41 = (undefined4)*(undefined8 *)(lVar24 + 0x270);
      uVar42 = (undefined4)((ulonglong)*(undefined8 *)(lVar24 + 0x270) >> 0x20);
      dVar10 = *(double *)(lVar24 + 0x240);
      dVar11 = *(double *)(lVar24 + 0x248);
      dVar12 = *(double *)(lVar24 + 0x250);
      dVar13 = *(double *)(lVar24 + 600);
      pdVar18 = *(double **)(lVar24 + 0x228);
      local_b8 = (undefined8 *)dVar10;
      uStack_b0 = dVar11;
      local_a8 = dVar12;
      uStack_a0 = dVar13;
      if (pdVar18 == (double *)0x0) {
        dVar21 = 3.16202013338398e-322;
        pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
        dVar16 = DAT_14c8463d8;
        *pdVar18 = DAT_14c8463d0;
        pdVar18[1] = dVar16;
        dVar16 = DAT_14c8463e8;
        pdVar18[2] = DAT_14c8463e0;
        pdVar18[3] = dVar16;
        dVar16 = DAT_14c846500;
        pdVar18[4] = DAT_14c8464f8;
        pdVar18[5] = dVar16;
        dVar16 = DAT_14c846508;
        pdVar18[6] = DAT_14c846508;
        *(double **)(lVar24 + 0x228) = pdVar18;
      }
      auVar8._8_4_ = (int)-(ulonglong)(dVar11 != pdVar18[1]);
      auVar8._0_8_ = -(ulonglong)(dVar10 != *pdVar18);
      auVar8._12_4_ = (int)(-(ulonglong)(dVar11 != pdVar18[1]) >> 0x20);
      iVar28 = movmskpd(SUB84(dVar16,0),auVar8);
      auVar9._8_4_ = (int)-(ulonglong)(dVar13 != pdVar18[3]);
      auVar9._0_8_ = -(ulonglong)(dVar12 != pdVar18[2]);
      auVar9._12_4_ = (int)(-(ulonglong)(dVar13 != pdVar18[3]) >> 0x20);
      uVar19 = movmskpd(SUB84(dVar21,0),auVar9);
      if ((uVar19 & 0x3fffffff) != 0 || iVar28 != 0) {
        *(undefined4 *)(pdVar18 + 2) = (undefined4)local_a8;
        *(undefined4 *)((longlong)pdVar18 + 0x14) = local_a8._4_4_;
        *(undefined4 *)(pdVar18 + 3) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)pdVar18 + 0x1c) = uStack_a0._4_4_;
        *(undefined4 *)pdVar18 = (undefined4)local_b8;
        *(undefined4 *)((longlong)pdVar18 + 4) = local_b8._4_4_;
        *(undefined4 *)(pdVar18 + 1) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)pdVar18 + 0xc) = uStack_b0._4_4_;
        FUN_1448052ee(&local_b8,&local_d0);
        pdVar18[6] = local_c0;
        pdVar18[4] = (double)local_d0;
        pdVar18[5] = (double)puStack_c8;
      }
      uVar35 = SUB84(pdVar18[5],0);
      uVar36 = (undefined4)((ulonglong)pdVar18[5] >> 0x20);
    }
    *(undefined4 *)(pdVar2 + 0xe) = uVar37;
    *(undefined4 *)((longlong)pdVar2 + 0x74) = uVar38;
    *(undefined4 *)(pdVar2 + 0xf) = uVar39;
    *(undefined4 *)((longlong)pdVar2 + 0x7c) = uVar40;
    pdVar2[0x10] = (double)CONCAT44(uVar42,uVar41);
    *(float *)(pdVar2 + 0x11) = (float)(double)CONCAT44(uVar36,uVar35);
    *(undefined1 *)(pdVar2 + 0x12) = 1;
  }
LAB_140881c4e:
  lVar24 = param_1[5];
  local_b8 = param_1;
  if ((param_1 != (undefined8 *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_1);
  }
  FUN_1405f6d44(lVar24 + 0x16c8,&local_b8);
LAB_140881c7e:
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140881f5a FUN_140881f5a body=359 status=ok
// SIG undefined FUN_140881f5a(void)

undefined4 *
FUN_140881f5a(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14040cfbc(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_1408820c2(local_40 + 1,0,uVar1);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14040c306(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140882160(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408820c2 FUN_1408820c2 body=141 status=ok
// SIG undefined FUN_1408820c2(void)

undefined8 * FUN_1408820c2(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  
  bVar1 = *(byte *)(param_3 + 4);
  uVar2 = *(ushort *)(param_3 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  if (uVar2 < 0x19) {
    uVar3 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b8 + uVar3);
    if ((pcVar4 == (code *)0x0) &&
       (pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar3), pcVar4 == (code *)0x0)) {
      memcpy(param_1,param_3,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
    }
    else {
      (*pcVar4)(param_1,param_3);
    }
  }
  else {
    *param_1 = *param_3;
    *param_3 = 0;
    *(undefined2 *)(param_3 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 0;
  return param_1;
}



// FUNCTION 140882160 FUN_140882160 body=688 status=ok
// SIG undefined FUN_140882160(void)

void FUN_140882160(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  
  plVar6 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar6,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar10 = *(uint *)(param_1 + 9);
  if (uVar10 == 1) {
    if (*plVar6 != 0) {
      FUN_1446efa72(plVar6,0,0,4);
    }
  }
  else {
    if (uVar10 == 0) {
      return;
    }
    FUN_1446efa72(plVar6,0,uVar10,4);
    if ((int)uVar10 < 1) goto LAB_1408821c6;
  }
  uVar3 = 0;
  do {
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = plVar1;
    }
    *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar10 != uVar3);
LAB_1408821c6:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar14 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar14 == uVar4) {
          return;
        }
        iVar5 = iVar5 + 0x20;
        uVar10 = puVar13[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar14 = (ulonglong)(-uVar10 & uVar10);
    uVar8 = uVar14 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x38;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x34 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x30 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 140882410 FUN_140882410 body=78 status=ok
// SIG undefined FUN_140882410(void)

void FUN_140882410(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x90);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      pcVar1[-0x30] = '\0';
      pcVar1[-0x2f] = '\0';
      pcVar1[-0x2e] = '\0';
      pcVar1[-0x2d] = '\0';
      if (*(longlong *)(pcVar1 + -0x38) != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(pcVar1 + -0x78);
      pcVar1 = pcVar1 + 0x98;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14088245e FUN_14088245e body=459 status=ok
// SIG undefined FUN_14088245e(void)

undefined4 * FUN_14088245e(longlong *param_1,undefined4 *param_2)

{
  double *pdVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  undefined4 *puVar7;
  double *pdVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ushort local_60;
  byte local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(char *)(param_1[0x1a] + 0xd0) == '\0') && ((char)param_1[0x22] == '\x01')) {
    pdVar8 = (double *)(param_1 + 0x1f);
    goto LAB_1408824d7;
  }
  (**(code **)(*param_1 + 0x90))(param_1,&local_48);
  pdVar1 = (double *)(param_1 + 0x1f);
  bVar6 = *(byte *)(param_1 + 0x22);
  if ((local_30 == bVar6 & local_30) == 1) {
    if (((double)CONCAT44(uStack_44,local_48) == *pdVar1) &&
       (!NAN((double)CONCAT44(uStack_44,local_48)) && !NAN(*pdVar1))) {
      if (((double)CONCAT44(uStack_3c,uStack_40) == (double)param_1[0x20]) &&
         (!NAN((double)CONCAT44(uStack_3c,uStack_40)) && !NAN((double)param_1[0x20]))) {
        if ((local_38 == (double)param_1[0x21]) && (!NAN(local_38) && !NAN((double)param_1[0x21])))
        goto LAB_1408824c9;
      }
    }
LAB_140882521:
    if ((double *)&local_48 != pdVar1) {
      if ((local_30 & 1) == 0) {
        if (bVar6 == 0) goto LAB_140882547;
        bVar6 = 0;
      }
      else {
        param_1[0x21] = (longlong)local_38;
        *(undefined4 *)pdVar1 = local_48;
        *(undefined4 *)((longlong)param_1 + 0xfc) = uStack_44;
        *(undefined4 *)(param_1 + 0x20) = uStack_40;
        *(undefined4 *)((longlong)param_1 + 0x104) = uStack_3c;
        bVar6 = 1;
      }
      *(byte *)(param_1 + 0x22) = bVar6;
    }
LAB_140882547:
    local_30 = bVar6;
    if ((*(char *)((longlong)param_1 + 0x11c) == '\x01') &&
       (*(char *)(param_1[7] + 0x178) == '\x03')) {
      local_60 = 0;
      if (local_30 == 0) {
        local_58 = 0;
      }
      else {
        local_60 = 0x18;
        local_78 = *(undefined4 *)pdVar1;
        uStack_74 = *(undefined4 *)((longlong)param_1 + 0xfc);
        uStack_70 = (undefined4)param_1[0x20];
        uStack_6c = *(undefined4 *)((longlong)param_1 + 0x104);
        local_68 = param_1[0x21];
        local_58 = 4;
      }
      puVar7 = &local_78;
      FUN_1408834b4(param_1,&DAT_14cb8ce00,puVar7);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          puVar7 = (undefined4 *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(puVar7);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      local_30 = *(byte *)(param_1 + 0x22);
    }
  }
  else if (local_30 != bVar6) goto LAB_140882521;
LAB_1408824c9:
  pdVar8 = (double *)&DAT_14c8464e0;
  if ((local_30 & 1) != 0) {
    pdVar8 = pdVar1;
  }
LAB_1408824d7:
  *(double *)(param_2 + 4) = pdVar8[2];
  uVar3 = *(undefined4 *)((longlong)pdVar8 + 4);
  uVar4 = *(undefined4 *)(pdVar8 + 1);
  uVar5 = *(undefined4 *)((longlong)pdVar8 + 0xc);
  *param_2 = *(undefined4 *)pdVar8;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14088262a FUN_14088262a body=3721 status=ok
// SIG undefined FUN_14088262a(void)

double * FUN_14088262a(longlong param_1,double *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  double ***pppdVar4;
  double dVar5;
  double ***pppdVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  double ****ppppdVar11;
  longlong lVar12;
  double ****ppppdVar13;
  int iVar14;
  double ****unaff_RBX;
  undefined7 uVar15;
  uint uVar16;
  uint uVar17;
  float *_Src;
  code *pcVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8 [8];
  undefined4 local_188 [8];
  double ***local_168;
  double ***local_160;
  longlong *local_158;
  ushort local_150;
  undefined6 uStack_14e;
  byte local_148;
  undefined4 local_140 [2];
  char local_138;
  undefined8 local_130;
  longlong *local_128;
  undefined4 local_110 [2];
  double ***local_108 [3];
  ushort local_f0;
  byte local_e8;
  double ***local_e0;
  double **ppdStack_d8;
  double **local_d0;
  ushort local_c8;
  byte local_c0;
  double ***local_b8;
  double **ppdStack_b0;
  double **local_a8;
  double ***local_88;
  int local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_c8 = 0;
  local_c0 = 0;
  lVar10 = *(longlong *)(param_1 + 0xd0);
  iVar14 = *(int *)(lVar10 + 0x9c);
  if (iVar14 == 1) {
    if ((*(char *)(param_1 + 0x11c) != '\x01') ||
       (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) == '\x03')) {
      lVar9 = *(longlong *)(lVar10 + 0xb8);
      if (lVar9 == 0) {
        local_b8 = *(double ****)(lVar10 + 0xa8);
        FUN_1446dcdd4(&local_168);
        lVar9 = FUN_1448fdc6e(&local_168);
        if (CONCAT62(uStack_14e,local_150) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(lVar10 + 0xb8) = lVar9;
        if (lVar9 == 0) goto LAB_1408826a7;
      }
      local_168 = (double ***)((ulonglong)local_168 & 0xffffffffffffff00);
      local_140[0] = 0;
      FUN_1456bb102(&local_168,*(undefined8 *)(param_1 + 0x38));
      local_138 = '\0';
      local_110[0] = 0;
      FUN_1400606f6(&local_b8,lVar9,&local_168);
      ppppdVar11 = (double ****)local_88;
      if ((double ****)local_88 == (double ****)0x0) {
        ppppdVar11 = &local_b8;
      }
      ppppdVar13 = (double ****)&DAT_14c9a40e0;
      if (0 < local_80) {
        ppppdVar13 = ppppdVar11;
      }
      FUN_1400603ec(local_108,lVar9,ppppdVar13);
      ppppdVar11 = (double ****)local_88;
      if ((double ****)local_88 == (double ****)0x0) {
        ppppdVar11 = &local_b8;
      }
      FUN_1446fdf58(ppppdVar11,local_80);
      if ((double ****)local_88 != (double ****)0x0) {
        FUN_1400020a8();
      }
      pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
      if (pcVar18 != (code *)0x0) {
        ppppdVar11 = (double ****)local_e0;
        if (local_c8 < 0x19) {
          ppppdVar11 = &local_e0;
        }
        (*pcVar18)(ppppdVar11);
      }
      if (0x18 < local_c8) {
        FUN_1400020a8(local_e0);
      }
      local_c8 = local_f0;
      if (local_f0 < 0x19) {
        uVar8 = (ulonglong)((uint)local_e8 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar8) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar8) == (code *)0x0) {
            memcpy(&local_e0,local_108,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar8))(&local_e0,local_108);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar8))(&local_e0,local_108);
        }
      }
      else {
        local_e0 = local_108[0];
        local_108[0] = (double ***)0x0;
        local_f0 = 0;
      }
      local_c0 = local_e8;
      local_e8 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppdVar11 = local_108;
        if (0x18 < local_f0) {
          ppppdVar11 = (double ****)local_108[0];
        }
        (*DAT_14c9a85d0)(ppppdVar11);
      }
      unaff_RBX = (double ****)local_110;
      if (0x18 < local_f0) {
        FUN_1400020a8(local_108[0]);
      }
      FUN_1448173f8(unaff_RBX);
      if (local_138 != '\0') {
        if (local_138 == '\x01') {
          local_130 = 0;
        }
        else if ((local_138 == '\x03') && (local_128 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_128 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_128 + 0x10))();
          }
        }
        local_138 = '\0';
      }
      FUN_1448173f8(local_140);
      ppppdVar11 = (double ****)local_e0;
      if (((char)local_168 == '\x03') && (local_158 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_158 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_158 + 0x10))();
          ppppdVar11 = (double ****)local_e0;
        }
      }
      goto LAB_140882924;
    }
    puVar19 = local_188;
LAB_140882fd2:
    *(undefined8 *)(puVar19 + 4) = DAT_14c9ab238;
    *puVar19 = (undefined4)DAT_14c9ab228;
    puVar19[1] = DAT_14c9ab228._4_4_;
    puVar19[2] = (undefined4)DAT_14c9ab230;
    puVar19[3] = DAT_14c9ab230._4_4_;
    FUN_145764874(param_1,param_2,&DAT_14cb8ce00);
  }
  else {
    if (iVar14 != 2) {
      if (iVar14 == 3) {
        if ((*(char *)(param_1 + 0x11c) == '\x01') &&
           (*(char *)(*(longlong *)(param_1 + 0x38) + 0x178) != '\x03')) {
          puVar19 = local_1a8;
          goto LAB_140882fd2;
        }
        lVar10 = FUN_140502f56();
        if (lVar10 != 0) {
          unaff_RBX = &local_168;
          FUN_144a7fe3a(lVar10,unaff_RBX,*(longlong *)(param_1 + 0xd0) + 0xc0);
          pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
          if (pcVar18 != (code *)0x0) {
            ppppdVar11 = (double ****)local_e0;
            if (local_c8 < 0x19) {
              ppppdVar11 = &local_e0;
            }
            (*pcVar18)(ppppdVar11);
          }
          if (0x18 < local_c8) {
            FUN_1400020a8(local_e0);
          }
          local_c8 = local_150;
          if (local_150 < 0x19) {
            uVar8 = (ulonglong)((uint)local_148 * 0x120);
            pcVar18 = *(code **)((longlong)&DAT_14c9a85b8 + uVar8);
            if ((pcVar18 == (code *)0x0) &&
               (pcVar18 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8), pcVar18 == (code *)0x0)) {
              memcpy(&local_e0,&local_168,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
            }
            else {
              (*pcVar18)(&local_e0,&local_168);
            }
          }
          else {
            local_e0 = local_168;
            local_168 = (double ***)0x0;
            local_150 = 0;
          }
          local_c0 = local_148;
          local_148 = 0;
          if (DAT_14c9a85d0 != (code *)0x0) {
            if (0x18 < local_150) {
              unaff_RBX = (double ****)local_168;
            }
            (*DAT_14c9a85d0)(unaff_RBX);
          }
          if (0x18 < local_150) {
            FUN_1400020a8(local_168);
          }
          ppppdVar11 = (double ****)local_e0;
          if (local_c0 != 0) {
            iVar14 = *(int *)(*(longlong *)(param_1 + 0xd0) + 0xcc);
            if (iVar14 == 1) {
              cVar7 = FUN_144a7b75a(local_c0,3);
              pppdVar4 = DAT_14c8464f0;
              ppppdVar11 = (double ****)local_e0;
              if (cVar7 != '\0') {
                uVar25 = SUB84(DAT_14c8464f0,0);
                uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                fVar22 = (float)FUN_144a7ecd0(&local_e0);
                pppdVar6 = (double ***)sin((double)(fVar22 * 0.017453292));
                uVar20 = SUB84(pppdVar6,0);
                uVar23 = (undefined4)((ulonglong)pppdVar6 >> 0x20);
                ppppdVar11 = (double ****)cos((double)(fVar22 * 0.017453292));
                uVar21 = SUB84(ppppdVar11,0);
                uVar24 = (undefined4)((ulonglong)ppppdVar11 >> 0x20);
                if (local_c0 == 4) {
LAB_140883261:
                  local_d0 = (double **)CONCAT44(uVar26,uVar25);
                  ppppdVar11 = (double ****)CONCAT44(uVar24,uVar21);
                  ppdStack_d8 = (double **)CONCAT44(uVar23,uVar20);
                }
                else {
                  pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 +
                                      (ulonglong)((uint)local_c0 * 0x120));
                  if (pcVar18 != (code *)0x0) {
                    ppppdVar13 = &local_e0;
                    if (0x18 < local_c8) {
                      ppppdVar13 = (double ****)local_e0;
                    }
                    (*pcVar18)(ppppdVar13);
                  }
                  if (0x18 < local_c8) {
                    FUN_1400020a8(local_e0);
                  }
                  local_c8 = 0x18;
                  local_d0 = (double **)pppdVar4;
                  local_c0 = 4;
                  ppdStack_d8 = (double **)pppdVar6;
                }
              }
            }
            else if ((iVar14 == 0) &&
                    (cVar7 = FUN_144a7b75a(local_c0,4), ppppdVar11 = (double ****)local_e0,
                    cVar7 != '\0')) {
              unaff_RBX = &local_b8;
              FUN_144a7b7fe(&local_e0,unaff_RBX);
              FUN_144a79a9c(unaff_RBX,&local_168);
              ppppdVar11 = (double ****)local_160;
              if (local_c0 != 0x15) {
                pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120))
                ;
                if (pcVar18 != (code *)0x0) {
                  ppppdVar11 = &local_e0;
                  if (0x18 < local_c8) {
                    ppppdVar11 = (double ****)local_e0;
                  }
                  (*pcVar18)(ppppdVar11);
                }
                if (0x18 < local_c8) {
                  FUN_1400020a8(local_e0);
                }
                local_c8 = 8;
                local_e0 = local_160;
                local_c0 = 0x15;
                ppppdVar11 = (double ****)local_e0;
              }
            }
          }
          goto LAB_140882924;
        }
      }
LAB_1408826a7:
      *(undefined1 *)(param_2 + 3) = 0;
      goto LAB_1408826ab;
    }
    ppppdVar11 = (double ****)local_e0;
    if (*(int *)(param_1 + 0x50) != *(int *)(param_1 + 0x7c)) {
      lVar9 = *(longlong *)(lVar10 + 0xa0);
      uVar16 = (uint)((ulonglong)lVar9 >> 0x10);
      uVar17 = (uint)lVar9 & 0xffff;
      lVar12 = param_1 + 0x80;
      if (*(longlong *)(param_1 + 0x88) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x88);
      }
      iVar14 = *(int *)(lVar12 + (ulonglong)
                                 (*(int *)(param_1 + 0x90) - 1U &
                                 (int)((ulonglong)lVar9 >> 0x20) + ((uint)lVar9 << 0x10 | uVar17) +
                                 (uVar16 << 0x13 | uVar16 & 0xffff) + (uVar17 >> 4)) * 4);
      if (iVar14 != -1) {
        lVar12 = *(longlong *)(param_1 + 0x48);
        do {
          lVar2 = lVar12 + (longlong)iVar14 * 0x38;
          if (*(longlong *)(lVar12 + (longlong)iVar14 * 0x38) == lVar9) {
            if ((lVar2 != 0) && (_Src = (float *)(lVar2 + 8), _Src != (float *)0x0)) {
              if (*(int *)(lVar10 + 0xcc) == 1) {
                unaff_RBX = (double ****)(ulonglong)*(byte *)(lVar2 + 0x28);
                if (unaff_RBX == (double ****)&DAT_00000003) {
                  uVar25 = SUB84(DAT_14c8464f0,0);
                  uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
LAB_140882cc7:
                  fVar22 = *_Src;
                }
                else {
                  uVar16 = (uint)*(byte *)(lVar2 + 0x28) * 0x120;
                  if (*(code **)(&DAT_14c9a8560 + uVar16) == (code *)0x0) {
LAB_140882b86:
                    if (((DAT_14c9a88c8 == (code *)0x0) ||
                        (cVar7 = (*DAT_14c9a88c8)(unaff_RBX), cVar7 == '\0')) &&
                       (((((&DAT_14c9a8514)[uVar16] & 0x20) == 0 || ((DAT_14c9a8874 & 0x20) != 0))
                        || ((*(code **)(&DAT_14c9a8588 + uVar16) != (code *)0x0 &&
                            (cVar7 = (**(code **)(&DAT_14c9a8588 + uVar16))(3), cVar7 == '\0'))))))
                    goto LAB_140882ba5;
                  }
                  else {
                    cVar7 = (**(code **)(&DAT_14c9a8560 + uVar16))
                                      (CONCAT71((int7)((ulonglong)lVar12 >> 8),3));
                    if (cVar7 == '\0') goto LAB_140882b86;
                  }
                  uVar25 = SUB84(DAT_14c8464f0,0);
                  uVar26 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                  if (*(char *)(lVar2 + 0x28) == '\x03') goto LAB_140882cc7;
                  unaff_RBX = &local_168;
                  FUN_1400b56fe(unaff_RBX,_Src,3);
                  fVar22 = 0.0;
                  if (local_148 != 0) {
                    fVar22 = local_168._0_4_;
                  }
                  pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 +
                                      (ulonglong)((uint)local_148 * 0x120));
                  if (pcVar18 != (code *)0x0) {
                    if (0x18 < local_150) {
                      unaff_RBX = (double ****)local_168;
                    }
                    (*pcVar18)(unaff_RBX);
                  }
                  if (0x18 < local_150) {
                    FUN_1400020a8(local_168);
                  }
                }
                pppdVar4 = (double ***)sin((double)(fVar22 * 0.017453292));
                uVar20 = SUB84(pppdVar4,0);
                uVar23 = (undefined4)((ulonglong)pppdVar4 >> 0x20);
                ppppdVar11 = (double ****)cos((double)(fVar22 * 0.017453292));
                uVar21 = SUB84(ppppdVar11,0);
                uVar24 = (undefined4)((ulonglong)ppppdVar11 >> 0x20);
                if (local_c0 == 4) goto LAB_140883261;
                pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120))
                ;
                if (pcVar18 != (code *)0x0) {
                  ppppdVar13 = (double ****)local_e0;
                  if (local_c8 < 0x19) {
                    ppppdVar13 = &local_e0;
                  }
                  (*pcVar18)(ppppdVar13);
                }
                if (0x18 < local_c8) {
                  FUN_1400020a8(local_e0);
                }
                local_c8 = 0x18;
                local_d0 = (double **)CONCAT44(uVar26,uVar25);
                local_c0 = 4;
                *(undefined1 *)(param_2 + 3) = 0;
                uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),4);
                local_e0 = (double ***)ppppdVar11;
                ppdStack_d8 = (double **)pppdVar4;
                goto LAB_140882943;
              }
LAB_140882ba5:
              if (*(char *)(lVar2 + 0x28) != '\0') {
                if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(&local_e0), 0x18 < local_c8)
                   ) {
                  FUN_1400020a8(local_e0);
                }
                bVar3 = *(byte *)(lVar2 + 0x28);
                local_c8 = *(ushort *)(lVar2 + 0x20);
                if (local_c8 < 0x19) {
                  ppppdVar11 = &local_e0;
                }
                else {
                  ppppdVar11 = (double ****)FUN_14001cc68(local_c8,0);
                  _Src = *(float **)_Src;
                  local_e0 = (double ***)ppppdVar11;
                }
                uVar8 = (ulonglong)((uint)bVar3 * 0x120);
                pcVar18 = *(code **)((longlong)&DAT_14c9a85b0 + uVar8);
                if (pcVar18 == (code *)0x0) {
                  memcpy(ppppdVar11,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar8));
                }
                else {
                  (*pcVar18)(ppppdVar11,_Src);
                }
                local_c0 = *(byte *)(lVar2 + 0x28);
                uVar8 = (ulonglong)local_c0;
                goto LAB_14088292b;
              }
              if (0x18 < *(ushort *)(lVar2 + 0x20)) {
                _Src = *(float **)(lVar2 + 8);
              }
              if (DAT_14c9a85c0 == (code *)0x0) {
                memcpy(&local_e0,_Src,(longlong)DAT_14c9a8510);
                ppppdVar11 = (double ****)local_e0;
              }
              else {
                (*DAT_14c9a85c0)(&local_e0,_Src);
                ppppdVar11 = (double ****)local_e0;
              }
            }
            break;
          }
          iVar14 = *(int *)(lVar2 + 0x30);
        } while (iVar14 != -1);
      }
    }
LAB_140882924:
    local_e0 = (double ***)ppppdVar11;
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_c0);
LAB_14088292b:
    *(undefined1 *)(param_2 + 3) = 0;
    if ((char)uVar8 == '\x03') {
LAB_140882d8d:
      uVar8 = (ulonglong)local_c0;
    }
    else {
      if ((uVar8 & 0xff) == 0) goto LAB_1408826ab;
LAB_140882943:
      uVar16 = ((uint)uVar8 & 0xff) * 0x120;
      if (((*(code **)(&DAT_14c9a8560 + uVar16) != (code *)0x0) &&
          (cVar7 = (**(code **)(&DAT_14c9a8560 + uVar16))(3), cVar7 != '\0')) ||
         ((DAT_14c9a88c8 != (code *)0x0 &&
          (cVar7 = (*DAT_14c9a88c8)(uVar8 & 0xffffffff), cVar7 != '\0')))) goto LAB_140882d8d;
      uVar15 = (undefined7)(uVar8 >> 8);
      if ((((&DAT_14c9a8514)[uVar16] & 0x20) == 0) || ((DAT_14c9a8874 & 0x20) != 0)) {
        uVar16 = (uint)CONCAT71(uVar15,local_c0);
LAB_14088298e:
        if ((char)uVar16 != '\x04') {
          uVar17 = (uVar16 & 0xff) * 0x120;
          if ((((*(code **)(&DAT_14c9a8560 + uVar17) == (code *)0x0) ||
               (cVar7 = (**(code **)(&DAT_14c9a8560 + uVar17))(4), cVar7 == '\0')) &&
              ((DAT_14c9a89e8 == (code *)0x0 || (cVar7 = (*DAT_14c9a89e8)(uVar16), cVar7 == '\0'))))
             && (((((&DAT_14c9a8514)[uVar17] & 0x20) == 0 || ((DAT_14c9a8994 & 0x20) != 0)) ||
                 ((*(code **)(&DAT_14c9a8588 + uVar17) != (code *)0x0 &&
                  (cVar7 = (**(code **)(&DAT_14c9a8588 + uVar17))(4), cVar7 == '\0'))))))
          goto LAB_1408826ab;
        }
        if (local_c0 == 4) {
          local_a8 = local_d0;
          local_b8 = local_e0;
          ppdStack_b0 = ppdStack_d8;
        }
        else {
          FUN_1400b56fe(&local_168,&local_e0,4);
          ppppdVar11 = (double ****)&DAT_14c9ab228;
          if (local_148 != 0) {
            ppppdVar11 = &local_168;
          }
          local_a8 = (double **)ppppdVar11[2];
          local_b8 = *ppppdVar11;
          ppdStack_b0 = (double **)ppppdVar11[1];
          pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
          if (pcVar18 != (code *)0x0) {
            ppppdVar11 = &local_168;
            if (0x18 < local_150) {
              ppppdVar11 = (double ****)local_168;
            }
            (*pcVar18)(ppppdVar11);
          }
          if (0x18 < local_150) {
            FUN_1400020a8(local_168);
          }
        }
        param_2[2] = (double)local_a8;
        *param_2 = (double)local_b8;
        param_2[1] = (double)ppdStack_b0;
        goto LAB_140882db7;
      }
      if (*(code **)(&DAT_14c9a8588 + uVar16) == (code *)0x0) goto LAB_140882d8d;
      cVar7 = (**(code **)(&DAT_14c9a8588 + uVar16))(3);
      uVar8 = CONCAT71(uVar15,local_c0);
      uVar16 = (uint)uVar8;
      if (cVar7 == '\0') goto LAB_14088298e;
    }
    if ((char)uVar8 == '\x03') {
      fVar22 = local_e0._0_4_;
    }
    else {
      FUN_1400b56fe(&local_168,&local_e0,3);
      fVar22 = 0.0;
      if (local_148 != 0) {
        fVar22 = local_168._0_4_;
      }
      pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
      if (pcVar18 != (code *)0x0) {
        ppppdVar11 = &local_168;
        if (0x18 < local_150) {
          ppppdVar11 = (double ****)local_168;
        }
        (*pcVar18)(ppppdVar11);
      }
      if (0x18 < local_150) {
        FUN_1400020a8(local_168);
      }
    }
    dVar5 = (double)fVar22;
    *param_2 = dVar5;
    param_2[1] = dVar5;
    param_2[2] = dVar5;
  }
LAB_140882db7:
  *(undefined1 *)(param_2 + 3) = 1;
LAB_1408826ab:
  pcVar18 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
  if (pcVar18 != (code *)0x0) {
    ppppdVar11 = (double ****)local_e0;
    if (local_c8 < 0x19) {
      ppppdVar11 = &local_e0;
    }
    (*pcVar18)(ppppdVar11);
  }
  if (0x18 < local_c8) {
    FUN_1400020a8(local_e0);
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408834b4 FUN_1408834b4 body=363 status=ok
// SIG undefined FUN_1408834b4(void)

void FUN_1408834b4(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined8 *_Buf1;
  uint uVar9;
  void *_Buf2;
  undefined1 auStack_68 [40];
  longlong *local_40;
  undefined8 *local_38;
  undefined1 local_2c [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[10] != *(int *)((longlong)param_1 + 0x7c)) {
    lVar2 = *param_2;
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar9 = (uint)lVar2 & 0xffff;
    plVar8 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[0x11];
    }
    iVar6 = *(int *)((longlong)plVar8 +
                    (ulonglong)
                    ((int)param_1[0x12] - 1U &
                    (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar9) +
                    (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar3 = param_1[9];
      do {
        lVar1 = lVar3 + (longlong)iVar6 * 0x38;
        if (*(longlong *)(lVar3 + (longlong)iVar6 * 0x38) == lVar2) {
          if (((lVar1 != 0) && (_Buf2 = (void *)(lVar1 + 8), _Buf2 != (void *)0x0)) &&
             (*(byte *)(param_3 + 4) == *(byte *)(lVar1 + 0x28))) {
            if (0x18 < *(ushort *)(lVar1 + 0x20)) {
              _Buf2 = *(void **)(lVar1 + 8);
            }
            _Buf1 = param_3;
            if (0x18 < *(ushort *)(param_3 + 3)) {
              _Buf1 = (undefined8 *)*param_3;
            }
            uVar7 = (ulonglong)((uint)*(byte *)(param_3 + 4) * 0x120);
            if (*(code **)(&DAT_14c9a85e0 + uVar7) == (code *)0x0) {
              iVar6 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
              if (iVar6 == 0) goto LAB_14088358d;
            }
            else {
              cVar5 = (**(code **)(&DAT_14c9a85e0 + uVar7))();
              if (cVar5 != '\0') goto LAB_14088358d;
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x30);
      } while (iVar6 != -1);
    }
  }
  local_40 = param_2;
  local_38 = param_3;
  FUN_14088374e(param_1 + 9,local_2c,&local_40,0);
  FUN_140883632(param_1,param_2);
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_3);
LAB_14088358d:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140883632 FUN_140883632 body=283 status=ok
// SIG undefined FUN_140883632(void)

void FUN_140883632(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  longlong local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x42) != '\x01') {
    local_50 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x38));
    FUN_140880df0(local_88,&DAT_14cb8cca8);
    lVar2 = local_60;
    lVar1 = local_78;
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + 1;
    UNLOCK();
LAB_1408836a5:
    if (local_80 != local_68) {
      FUN_140881600(local_80[2],param_1,3,param_2);
      puVar3 = (undefined8 *)FUN_140880eba(*local_80);
      if (puVar3 == (undefined8 *)0x0) {
        local_80 = (undefined8 *)0x0;
      }
      else {
        do {
          lVar4 = (**(code **)(*(longlong *)puVar3[2] + 0x180))();
          local_80 = puVar3;
          if (lVar4 == *local_70) break;
          puVar3 = (undefined8 *)FUN_140880eba(*puVar3);
          local_80 = (undefined8 *)0x0;
        } while (puVar3 != (undefined8 *)0x0);
      }
      goto LAB_1408836a5;
    }
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_60 + 8) = *(int *)(local_60 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_78 + 8) = *(int *)(local_78 + 8) + -1;
    UNLOCK();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14088374e FUN_14088374e body=359 status=ok
// SIG undefined FUN_14088374e(void)

undefined4 *
FUN_14088374e(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14040cfbc(param_1,local_48);
  uVar1 = param_3[1];
  *local_40 = *(undefined8 *)*param_3;
  FUN_14040c290(local_40 + 1,0,uVar1);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14040c306(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140882160(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408838b6 FUN_1408838b6 body=7211 status=ok
// SIG undefined FUN_1408838b6(void)

bool FUN_1408838b6(longlong *param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  float fVar6;
  ulonglong uVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong *puVar21;
  longlong lVar22;
  undefined8 *******pppppppuVar23;
  longlong *plVar24;
  undefined8 *****pppppuVar25;
  undefined8 *******pppppppuVar26;
  int iVar27;
  longlong *plVar28;
  ulonglong uVar29;
  undefined8 ******ppppppuVar30;
  longlong lVar31;
  undefined8 ******ppppppuVar32;
  byte bVar33;
  bool bVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_428 [32];
  longlong *local_408;
  byte local_3fb;
  undefined1 local_3fa;
  char local_3f9;
  longlong local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  longlong local_3e0;
  longlong *local_3d8;
  int local_3cc;
  uint local_3c8;
  undefined4 local_3c4;
  longlong *local_3c0;
  longlong *local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  longlong local_3a0;
  undefined8 local_398;
  undefined4 local_390;
  undefined1 local_38c;
  longlong local_388;
  longlong lStack_380;
  undefined1 local_378;
  float local_370;
  undefined1 local_36c;
  longlong local_368;
  longlong lStack_360;
  undefined1 local_358;
  undefined1 local_350;
  ulonglong local_348;
  undefined4 local_340;
  undefined4 uStack_33c;
  uint uStack_338;
  int iStack_334;
  longlong *local_330;
  undefined4 local_328;
  undefined4 local_324;
  undefined8 ******local_320;
  longlong local_318;
  ulonglong uStack_310;
  undefined8 ******local_308;
  longlong lStack_300;
  ulonglong uStack_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined1 local_2e8;
  undefined1 local_2e7;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  longlong *local_2d0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298;
  undefined6 uStack_294;
  undefined2 local_28e;
  undefined6 uStack_28c;
  undefined8 ******local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258;
  undefined1 uStack_257;
  undefined8 local_250;
  undefined8 uStack_248;
  longlong *local_240;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined6 uStack_204;
  undefined2 local_1fe;
  undefined6 uStack_1fc;
  undefined8 ******local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a0;
  uint uStack_198;
  int iStack_194;
  longlong *local_190;
  undefined4 local_178 [38];
  longlong *local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  uVar9 = (uint)param_3;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_428;
  local_3f9 = param_4;
  if ((*(char *)(param_1[0x1a] + 0x99) == '\x01') &&
     (cVar8 = FUN_14124e3da(param_1[7]), cVar8 != '\0')) {
    bVar34 = false;
    goto LAB_14088544d;
  }
  local_3cc = (int)param_1[0x1c];
  if ((int)param_1[10] == *(int *)((longlong)param_1 + 0x7c)) {
LAB_140883965:
    cVar8 = '\0';
  }
  else {
    uVar20 = (uint)((ulonglong)DAT_14cb8cca0 >> 0x10);
    uVar18 = (uint)DAT_14cb8cca0 & 0xffff;
    plVar14 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[0x11];
    }
    iVar19 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)param_1[0x12] - 1U &
                     (int)((ulonglong)DAT_14cb8cca0 >> 0x20) +
                     ((uint)DAT_14cb8cca0 << 0x10 | uVar18) + (uVar20 << 0x13 | uVar20 & 0xffff) +
                     (uVar18 >> 4)) * 4);
    if (iVar19 == -1) goto LAB_140883965;
    do {
      lVar10 = param_1[9] + (longlong)iVar19 * 0x38;
      if (*(longlong *)(param_1[9] + (longlong)iVar19 * 0x38) == DAT_14cb8cca0) {
        if (lVar10 + 8 == 0 || lVar10 == 0) goto LAB_140883965;
        cVar8 = FUN_14005fbd2(lVar10 + 8,0);
        break;
      }
      iVar19 = *(int *)(lVar10 + 0x30);
      cVar8 = '\0';
    } while (iVar19 != -1);
  }
  if (cVar8 == '\0' && (char)(param_3 & 0xffffffff) == '\0') {
    bVar33 = 1;
    if (*(char *)((longlong)param_2 + 0x103) == '\x01') {
      bVar33 = *(byte *)((longlong)param_2 + 0x104);
      uVar9 = (uint)CONCAT71((int7)((param_3 & 0xffffffff) >> 8),1);
    }
  }
  else {
    uVar20 = uVar9 & 0xff;
    uVar9 = 1;
    if (cVar8 == '\0') {
      uVar9 = uVar20;
    }
    bVar33 = cVar8 != '\x02';
  }
  lVar10 = FUN_1447210f0(param_1[7]);
  if (lVar10 == 0) {
    fVar38 = 0.0;
  }
  else {
    fVar38 = (float)*(double *)(lVar10 + 0x6d0);
  }
  FUN_1403dcede(param_2);
  if ((longlong)(int)param_2[1] != 0) {
    local_3c0 = param_1 + 0x1b;
    lVar10 = *param_2;
    local_3b0 = (longlong)(int)param_2[1] * 0xf0 + lVar10;
    local_3fa = (char)uVar9 == '\x02';
    local_3b8 = param_1 + 0x1d;
    local_3fb = bVar33 & (char)uVar9 == '\x01' ^ 1;
    local_408 = param_1;
    local_3c8 = uVar9;
    do {
      lVar17 = lVar10 + 0x10;
      lVar11 = FUN_143e50c2a(param_1,lVar10 + 4,lVar17,*(undefined1 *)(lVar10 + 0xe1));
      if ((lVar11 == 0) ||
         ((lVar12 = *(longlong *)(lVar10 + 0x18), lVar12 == 0 &&
          (lVar12 = FUN_1404dcd0c(lVar11 + 0x1288,lVar17), lVar12 == 0)))) {
        lVar12 = (**(code **)(*(longlong *)param_1[0x13] + 0x68))
                           ((longlong *)param_1[0x13],lVar10 + 4,lVar17);
        if (lVar12 != 0) {
          uVar35 = (undefined4)CONCAT71((int7)((ulonglong)lVar17 >> 8),1);
          if (lVar11 != 0) goto LAB_140883b3a;
          lVar17 = 0;
          goto LAB_140883b8e;
        }
      }
      else {
        uVar35 = 0;
LAB_140883b3a:
        lVar17 = *(longlong *)(lVar11 + 0xae8);
        if ((DAT_14c950c29 == 1) && (lVar17 != 0)) {
          FUN_1456cec3c(lVar17);
        }
        else if ((~(byte)uVar35 & lVar17 == 0) != 0) goto LAB_140883b5e;
LAB_140883b8e:
        local_3c4 = uVar35;
        local_3a0 = 0;
        local_398 = 0x3f800000;
        local_390 = 0x3dcccccd;
        local_38c = 0;
        local_378 = 0;
        local_388 = 0;
        lStack_380 = 0;
        local_370 = 0.1;
        local_36c = 0;
        local_358 = 0;
        local_368 = 0;
        lStack_360 = 0;
        local_350 = 0;
        local_348 = 0;
        local_330 = (longlong *)DAT_14c8464f0;
        local_340 = (undefined4)DAT_14c8464e0;
        uStack_33c = DAT_14c8464e0._4_4_;
        uStack_338 = (undefined4)DAT_14c8464e8;
        iStack_334 = DAT_14c8464e8._4_4_;
        local_3a8 = *(undefined8 *)(lVar10 + 0x28);
        local_3e8 = lVar11;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar12);
        }
        local_1a0 = local_1a0 & 0xffffffffffffff00;
        local_178[0] = 0;
        local_3a0 = lVar12;
        FUN_1456bb102(&local_1a0,param_1[7]);
        uVar35 = FUN_140bb540c(lVar10,&local_1a0);
        uVar35 = (**(code **)(*param_1 + 0x10))(param_1,lVar12,uVar35);
        local_398 = CONCAT44(local_398._4_4_,uVar35);
        FUN_1448173f8(local_178);
        if (((char)local_1a0 == '\x03') && (local_190 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_190 + 0x10))();
          }
        }
        local_1a0 = local_1a0 & 0xffffffffffffff00;
        local_178[0] = 0;
        FUN_1456bb102(&local_1a0,param_1[7]);
        uVar35 = FUN_1411e1adc(lVar10,&local_1a0);
        uVar35 = (**(code **)(*param_1 + 0x18))(param_1,uVar35);
        local_398 = CONCAT44(uVar35,(float)local_398);
        FUN_1448173f8(local_178);
        if (((char)local_1a0 == '\x03') && (local_190 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_190 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_190 + 0x10))();
          }
        }
        local_38c = *(undefined1 *)(lVar10 + 0x34);
        local_390 = *(undefined4 *)(lVar10 + 0x30);
        lVar11 = *(longlong *)(lVar10 + 0x38);
        local_3f0 = lVar17;
        if (DAT_14c950c29 == 1) {
          if (lVar11 == 0) {
            lVar11 = 0;
            param_1 = local_408;
          }
          else {
            FUN_1456cec3c();
            lVar11 = *(longlong *)(lVar10 + 0x38);
            param_1 = local_408;
          }
        }
        lVar17 = *(longlong *)(lVar10 + 0x40);
        local_388 = lVar11;
        if ((DAT_14c950c29 & 1) != 0) {
          if (lVar17 == 0) {
            lVar17 = 0;
            param_1 = local_408;
          }
          else {
            FUN_1456cec3c();
            lVar17 = *(longlong *)(lVar10 + 0x40);
            param_1 = local_408;
          }
        }
        local_378 = *(undefined1 *)(lVar10 + 0x48);
        if (local_3f9 == '\0') {
          local_390 = 0;
        }
        local_36c = *(undefined1 *)(lVar10 + 0x54);
        local_370 = *(float *)(lVar10 + 0x50);
        lVar11 = *(longlong *)(lVar10 + 0x58);
        lStack_380 = lVar17;
        if (DAT_14c950c29 == 1) {
          if (lVar11 == 0) {
            lVar11 = 0;
            param_1 = local_408;
          }
          else {
            FUN_1456cec3c();
            lVar11 = *(longlong *)(lVar10 + 0x58);
            param_1 = local_408;
          }
        }
        lVar17 = *(longlong *)(lVar10 + 0x60);
        local_368 = lVar11;
        if ((DAT_14c950c29 & 1) != 0) {
          if (lVar17 == 0) {
            lVar17 = 0;
            param_1 = local_408;
          }
          else {
            FUN_1456cec3c();
            lVar17 = *(longlong *)(lVar10 + 0x60);
            param_1 = local_408;
          }
        }
        local_358 = *(undefined1 *)(lVar10 + 0x68);
        local_350 = (undefined1)local_3c8;
        lStack_360 = lVar17;
        FUN_14088245e(param_1,&local_1a0);
        local_330 = local_190;
        local_340 = (undefined4)local_1a0;
        uStack_33c = local_1a0._4_4_;
        uStack_338 = uStack_198;
        iStack_334 = iStack_194;
        if (*(char *)(param_1[0x1a] + 0x98) == '\x01') {
          uVar9 = rand();
          cVar8 = 0.5 < (float)(uVar9 & 0x7fff) / 32767.0;
        }
        else {
          cVar8 = *(char *)(lVar10 + 0xe0);
        }
        uVar7 = local_348;
        if (((local_3e8 != 0) && (cVar8 != '\0')) &&
           (FUN_1411e1c16(local_3e8,&local_1a0), uVar7 = local_1a0, DAT_14c950c29 == 1)) {
          if (local_1a0 == 0) {
            uVar7 = 0;
          }
          else {
            FUN_1456cec3c(local_1a0);
          }
        }
        local_348 = uVar7;
        iVar19 = (int)param_1[0x1c];
        *(uint *)(param_1 + 0x1c) = iVar19 + 1U;
        if (*(uint *)((longlong)param_1 + 0xe4) < iVar19 + 1U) {
          FUN_1418b2952(local_3c0,iVar19);
        }
        lVar11 = *local_3c0;
        lVar22 = (longlong)iVar19 * 0x50;
        lVar17 = lVar11 + lVar22;
        FUN_143e53f31(lVar17);
        *(undefined8 *)(lVar11 + lVar22) = *(undefined8 *)(lVar10 + 0x28);
        uVar9 = *(uint *)(lVar12 + 0xc);
        *(uint *)(lVar11 + 0xc + lVar22) = uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar19 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar19 = DAT_14c964868 + 1;
          UNLOCK();
          iVar27 = DAT_14c964868 + 1;
          bVar34 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar19;
          if (bVar34) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar27);
          }
          LOCK();
          iVar19 = *(int *)(lVar11 + 0x10);
          bVar34 = iVar19 == 0;
          if (bVar34) {
            *(int *)(lVar11 + 0x10) = iVar27;
            iVar19 = 0;
          }
          UNLOCK();
          if (bVar34) {
            iVar19 = iVar27;
          }
        }
        *(int *)(lVar17 + 0x10) = iVar19;
        if (local_3f0 == 0) {
          *(undefined4 *)(lVar17 + 0x14) = 0;
          iVar19 = 0;
        }
        else {
          uVar9 = *(uint *)(local_3f0 + 0xc);
          *(uint *)(lVar17 + 0x14) = uVar9;
          if ((int)uVar9 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          iVar19 = *(int *)(lVar11 + 0x10);
          if (*(int *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar19 = DAT_14c964868 + 1;
            UNLOCK();
            iVar27 = DAT_14c964868 + 1;
            bVar34 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar19;
            if (bVar34) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar27);
            }
            LOCK();
            iVar19 = *(int *)(lVar11 + 0x10);
            bVar34 = iVar19 == 0;
            if (bVar34) {
              *(int *)(lVar11 + 0x10) = iVar27;
              iVar19 = 0;
            }
            UNLOCK();
            if (bVar34) {
              iVar19 = iVar27;
            }
          }
        }
        lVar11 = local_3f0;
        *(int *)(lVar17 + 0x18) = iVar19;
        *(float *)(lVar17 + 0x38) = fVar38;
        fVar36 = (float)FUN_1405b046e(lVar12);
        fVar6 = (float)local_398;
        *(float *)(lVar17 + 0x30) = fVar36 / (float)local_398;
        *(undefined1 *)(lVar17 + 8) = local_3fa;
        *(float *)(lVar17 + 0x48) = local_370;
        if (0.0 < (float)local_398) {
          plVar14 = (longlong *)local_408[7];
          if (plVar14 == (longlong *)0x0) {
LAB_14088521a:
            lVar11 = 0;
          }
          else {
            uVar13 = FUN_1407ca880();
            plVar14 = (longlong *)(**(code **)(*plVar14 + 0x288))(plVar14,uVar13);
            if (plVar14 == (longlong *)0x0) goto LAB_14088521a;
            uVar13 = FUN_1407ca880();
            plVar15 = (longlong *)FUN_144718840(plVar14,uVar13);
            if (plVar14 == plVar15) goto LAB_14088521a;
            lVar11 = 0;
            if (plVar15 != (longlong *)0x0) {
              lVar11 = (**(code **)(*plVar15 + 0x50))(plVar15);
            }
          }
          local_3f8 = lVar17;
          local_3e0 = lVar11;
          if ((((*(int *)(lVar17 + 0x10) == 0) || (uVar9 = *(uint *)(lVar17 + 0xc), (int)uVar9 < 0))
              || ((DAT_14c9647dc <= (int)uVar9 ||
                  ((plVar14 = (longlong *)
                              ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
                   plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar17 + 0x10)))))))
             || ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) {
            local_e0 = (longlong *)0x0;
            local_d8 = 0x400000000;
          }
          else {
            plVar14 = (longlong *)*plVar14;
            local_e0 = (longlong *)0x0;
            local_d8 = 0x400000000;
            if (plVar14 != (longlong *)0x0) {
              lVar12 = FUN_14063d1f6();
              if ((*(int *)(plVar14[2] + 0x38) < *(int *)(lVar12 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) !=
                  lVar12 + 0x30)) {
                lVar12 = FUN_1405b04b6();
                if ((*(int *)(lVar12 + 0x38) <= *(int *)(plVar14[2] + 0x38)) &&
                   ((*(longlong *)
                      (*(longlong *)(plVar14[2] + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8) ==
                     lVar12 + 0x30 && ((longlong)(int)plVar14[0x23] != 0)))) {
                  plVar24 = (longlong *)plVar14[0x22];
                  plVar15 = plVar24 + (longlong)(int)plVar14[0x23] * 5;
                  do {
                    lVar12 = *plVar24;
                    if ((lVar12 != 0) && ((longlong)*(int *)(lVar12 + 0x90) != 0)) {
                      lVar22 = *(longlong *)(lVar12 + 0x88);
                      lVar12 = (longlong)*(int *)(lVar12 + 0x90) * 0xb8;
                      do {
                        if (DAT_14c950c29 == 1) {
                          FUN_1456cec3c(plVar14);
                        }
                        if ((lVar22 != 0) && (lVar11 = *(longlong *)(lVar22 + 0x48), lVar11 != 0)) {
                          lVar31 = FUN_1414cc67e();
                          lVar11 = *(longlong *)(lVar11 + 0x10);
                          if ((*(int *)(lVar31 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                             (*(longlong *)
                               (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar31 + 0x38) * 8
                               ) == lVar31 + 0x30)) {
                            lVar17 = (longlong)(int)local_d8;
                            uVar9 = (int)local_d8 + 1;
                            local_d8 = CONCAT44(local_d8._4_4_,uVar9);
                            if (local_d8._4_4_ < uVar9) {
                              FUN_145af78b8(&local_1a0);
                            }
                            plVar28 = local_e0;
                            if (local_e0 == (longlong *)0x0) {
                              plVar28 = &local_1a0;
                            }
                            plVar28[lVar17 * 6] = 0;
                            (plVar28 + lVar17 * 6)[1] = 0;
                            plVar28[lVar17 * 6 + 2] = lVar22;
                            plVar28[lVar17 * 6 + 3] = 0;
                            plVar28[lVar17 * 6 + 4] = (longlong)plVar14;
                            if (DAT_14c950c29 == 1) {
                              FUN_1456cec3c(plVar14);
                            }
                            *(undefined4 *)(plVar28 + lVar17 * 6 + 5) = 0;
                            *(undefined1 *)((longlong)plVar28 + lVar17 * 0x30 + 0x2c) = 0;
                            lVar17 = local_3f8;
                          }
                        }
                        lVar22 = lVar22 + 0xb8;
                        lVar12 = lVar12 + -0xb8;
                        lVar11 = local_3e0;
                      } while (lVar12 != 0);
                    }
                    plVar24 = plVar24 + 5;
                  } while (plVar24 != plVar15);
                }
              }
              else {
                local_278 = (undefined8 *******)0x0;
                uStack_270 = 0;
                local_268 = 0x3f800000;
                local_260 = 0x3f800000;
                local_258 = 0;
                local_25c = 0;
                uStack_257 = 1;
                local_240 = (longlong *)0x0;
                local_250 = 0;
                uStack_248 = 0;
                local_208 = 0;
                local_218 = 0;
                uStack_210 = 0;
                uStack_1fc = 0;
                uStack_204 = 0;
                local_1fe = 0;
                local_308 = &local_278;
                lStack_300 = 0;
                uStack_2f8 = 0;
                local_320 = (undefined8 ******)CONCAT44(local_320._4_4_,0x7f7fffff);
                local_324 = 0;
                (**(code **)(*plVar14 + 0x2c8))(plVar14,&local_324,&local_320,&local_308);
                uVar7 = uStack_2f8;
                lVar12 = lStack_300;
                lVar22 = (longlong)(int)uStack_2f8;
                lStack_300 = 0;
                uStack_2f8 = 0;
                if (lVar22 != 0) {
                  lVar31 = 0;
                  do {
                    if (((*(longlong *)(lVar12 + 0x20 + lVar31) != 0) &&
                        (lVar11 = *(longlong *)(lVar12 + 0x10 + lVar31), lVar11 != 0)) &&
                       (lVar11 = *(longlong *)(lVar11 + 0x48), lVar11 != 0)) {
                      lVar16 = FUN_1414cc67e();
                      uVar29 = local_d8;
                      lVar11 = *(longlong *)(lVar11 + 0x10);
                      if ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                          lVar16 + 0x30)) {
                        lVar17 = (longlong)(int)local_d8;
                        uVar9 = (int)local_d8 + 1;
                        local_d8 = CONCAT44(local_d8._4_4_,uVar9);
                        if (local_d8._4_4_ < uVar9) {
                          FUN_145af78b8(&local_1a0,uVar29 & 0xffffffff);
                        }
                        plVar14 = local_e0;
                        if (local_e0 == (longlong *)0x0) {
                          plVar14 = &local_1a0;
                        }
                        plVar14[lVar17 * 6] = *(longlong *)(lVar12 + lVar31);
                        lVar11 = *(longlong *)(lVar12 + 8 + lVar31);
                        plVar14[lVar17 * 6 + 1] = lVar11;
                        if (lVar11 != 0) {
                          LOCK();
                          *(int *)(lVar11 + 8) = *(int *)(lVar11 + 8) + 1;
                          UNLOCK();
                        }
                        plVar14[lVar17 * 6 + 2] = *(longlong *)(lVar12 + 0x10 + lVar31);
                        lVar11 = *(longlong *)(lVar12 + 0x18 + lVar31);
                        plVar14[lVar17 * 6 + 3] = lVar11;
                        if ((DAT_14c950c29 == 1) && (lVar11 != 0)) {
                          FUN_1456cec3c();
                        }
                        lVar11 = *(longlong *)(lVar12 + 0x20 + lVar31);
                        plVar14[lVar17 * 6 + 4] = lVar11;
                        if (((DAT_14c950c29 & 1) != 0) && (lVar11 != 0)) {
                          FUN_1456cec3c();
                        }
                        *(undefined1 *)((longlong)plVar14 + lVar17 * 0x30 + 0x2c) =
                             *(undefined1 *)(lVar12 + 0x2c + lVar31);
                        *(undefined4 *)(plVar14 + lVar17 * 6 + 5) =
                             *(undefined4 *)(lVar12 + 0x28 + lVar31);
                        lVar17 = local_3f8;
                      }
                    }
                    lVar31 = lVar31 + 0x30;
                    lVar11 = local_3e0;
                  } while (lVar22 * 0x30 != lVar31);
                }
                FUN_1448262fc(lVar12,uVar7 & 0xffffffff);
                if (lVar12 != 0) {
                  FUN_1400020a8(lVar12);
                }
                FUN_1448262fc(lStack_300);
                if (lStack_300 != 0) {
                  FUN_1400020a8();
                }
                plVar14 = local_240;
                if (local_240 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = local_240 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*local_240)(local_240);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                }
              }
              plVar14 = local_e0;
              if (local_e0 == (longlong *)0x0) {
                plVar14 = &local_1a0;
              }
              if ((longlong)(int)local_d8 != 0) {
                plVar15 = plVar14 + (longlong)(int)local_d8 * 6;
                local_3d8 = (longlong *)(lVar17 + 0x20);
                do {
                  if (plVar14[4] == 0) {
                    lVar12 = 0;
                  }
                  else {
                    lVar12 = plVar14[2];
                  }
                  lVar22 = *(longlong *)(lVar12 + 0x48);
                  if (lVar11 == 0) {
LAB_14088451e:
                    plVar24 = (longlong *)*plVar14;
                    if ((plVar24 != (longlong *)0x0) &&
                       (lVar17 = plVar24[1], (longlong)(int)lVar17 != 0)) {
                      lVar11 = *plVar24;
                      lVar31 = 0;
                      do {
                        (**(code **)(**(longlong **)(lVar11 + lVar31) + 8))();
                        if ((undefined8 *******)local_278 == DAT_14cadbea8) {
                          lVar17 = *(longlong *)(lVar11 + lVar31);
                          if (lVar17 != 0) {
                            if (*(char *)(lVar12 + 0x19) == '\x02') {
                              fVar36 = *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x20) +
                                       *(float *)(lVar12 + 0x1c);
                            }
                            else if (*(char *)(lVar12 + 0x19) == '\x01') {
                              fVar36 = *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
                            }
                            else {
                              fVar36 = *(float *)(lVar12 + 0x24);
                            }
                            uVar9 = -(uint)(*(float *)(lVar17 + 0x14) < 0.0);
                            fVar36 = ((float)*(int *)(lVar17 + 0x1c) *
                                      (*(float *)(lVar17 + 0x10) - *(float *)(lVar17 + 0xc)) +
                                     ((fVar36 + *(float *)(lVar12 + 0x30)) -
                                     (float)(~uVar9 & (uint)*(float *)(lVar17 + 0xc) |
                                            uVar9 & (uint)*(float *)(lVar17 + 0x10)))) /
                                     *(float *)(lVar17 + 0x14) + *(float *)(lVar17 + 8);
                            goto LAB_140884614;
                          }
                          break;
                        }
                        lVar31 = lVar31 + 8;
                      } while ((longlong)(int)lVar17 * 8 != lVar31);
                    }
                    if (*(char *)(lVar12 + 0x19) == '\x02') {
                      fVar36 = *(float *)(lVar12 + 0x24) * *(float *)(lVar12 + 0x20) +
                               *(float *)(lVar12 + 0x1c);
                    }
                    else if (*(char *)(lVar12 + 0x19) == '\x01') {
                      fVar36 = *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
                    }
                    else {
                      fVar36 = *(float *)(lVar12 + 0x24);
                    }
                    fVar36 = fVar36 + *(float *)(lVar12 + 0x30);
LAB_140884614:
                    lVar17 = local_3f8;
                    uVar13 = *(undefined8 *)(lVar22 + 0x40);
                    lVar11 = (longlong)*(int *)(local_3f8 + 0x28);
                    uVar9 = *(int *)(local_3f8 + 0x28) + 1;
                    *(uint *)(local_3f8 + 0x28) = uVar9;
                    if (*(uint *)(local_3f8 + 0x2c) < uVar9) {
                      FUN_1418b2b74(local_3d8);
                    }
                    lVar12 = *local_3d8;
                    *(undefined1 *)(lVar12 + lVar11 * 0x18) = 0;
                    *(float *)(lVar12 + 4 + lVar11 * 0x18) = fVar36 / fVar6;
                    *(float *)(lVar12 + 8 + lVar11 * 0x18) = fVar36 / fVar6;
                    *(undefined8 *)(lVar12 + 0xc + lVar11 * 0x18) = uVar13;
                    *(undefined1 *)(lVar12 + 0x14 + lVar11 * 0x18) = 0;
                    lVar11 = local_3e0;
                  }
                  else {
                    if ((longlong)*(int *)(lVar11 + 0xd8) < 1) {
LAB_1408844ed:
                      if ((longlong)*(int *)(lVar11 + 0xe8) != 0) {
                        lVar31 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar11 + 0xe0) + lVar31) ==
                              *(longlong *)(lVar22 + 0x40)) goto LAB_140884666;
                          lVar31 = lVar31 + 8;
                        } while ((longlong)*(int *)(lVar11 + 0xe8) * 8 != lVar31);
                      }
                      goto LAB_14088451e;
                    }
                    lVar31 = 0;
                    do {
                      if (*(longlong *)(*(longlong *)(lVar11 + 0xd0) + lVar31) ==
                          *(longlong *)(lVar22 + 0x40)) goto LAB_1408844ed;
                      lVar31 = lVar31 + 8;
                    } while ((longlong)*(int *)(lVar11 + 0xd8) * 8 != lVar31);
                  }
LAB_140884666:
                  plVar14 = plVar14 + 6;
                } while (plVar14 != plVar15);
              }
            }
          }
          if (((((*(int *)(lVar17 + 0x10) == 0) || (uVar9 = *(uint *)(lVar17 + 0xc), (int)uVar9 < 0)
                ) || (DAT_14c9647dc <= (int)uVar9)) ||
              ((plVar14 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
               plVar14 == (longlong *)0x0 || ((int)plVar14[2] != *(int *)(lVar17 + 0x10))))) ||
             ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)) {
            local_1b8 = (undefined8 *******)0x0;
            local_1b0 = 0x400000000;
          }
          else {
            ppppppuVar30 = (undefined8 ******)*plVar14;
            local_1b8 = (undefined8 *******)0x0;
            local_1b0 = 0x400000000;
            if (ppppppuVar30 != (undefined8 ******)0x0) {
              lVar12 = FUN_14063d1f6();
              if ((*(int *)(ppppppuVar30[2] + 7) < *(int *)(lVar12 + 0x38)) ||
                 (ppppppuVar30[2][6][*(int *)(lVar12 + 0x38)] != (undefined8 ***)(lVar12 + 0x30))) {
                lVar12 = FUN_1405b04b6();
                if ((*(int *)(lVar12 + 0x38) <= *(int *)(ppppppuVar30[2] + 7)) &&
                   ((ppppppuVar30[2][6][*(int *)(lVar12 + 0x38)] == (undefined8 ***)(lVar12 + 0x30)
                    && ((longlong)*(int *)(ppppppuVar30 + 0x23) != 0)))) {
                  pppppuVar25 = ppppppuVar30[0x22];
                  pppppuVar4 = pppppuVar25 + (longlong)*(int *)(ppppppuVar30 + 0x23) * 5;
                  do {
                    ppppuVar5 = *pppppuVar25;
                    if ((ppppuVar5 != (undefined8 ****)0x0) &&
                       ((longlong)*(int *)(ppppuVar5 + 0x12) != 0)) {
                      ppppppuVar32 = (undefined8 ******)ppppuVar5[0x11];
                      lVar12 = (longlong)*(int *)(ppppuVar5 + 0x12) * 0xb8;
                      do {
                        if (DAT_14c950c29 == 1) {
                          FUN_1456cec3c(ppppppuVar30);
                        }
                        if ((ppppppuVar32 != (undefined8 ******)0x0) &&
                           (pppppuVar3 = ppppppuVar32[10], pppppuVar3 != (undefined8 *****)0x0)) {
                          lVar11 = FUN_1414cc764();
                          uVar7 = local_1b0;
                          ppppuVar5 = pppppuVar3[2];
                          if ((*(int *)(lVar11 + 0x38) <= *(int *)(ppppuVar5 + 7)) &&
                             (ppppuVar5[6][*(int *)(lVar11 + 0x38)] ==
                              (undefined8 **)(lVar11 + 0x30))) {
                            lVar17 = (longlong)(int)local_1b0;
                            uVar9 = (int)local_1b0 + 1;
                            local_1b0 = CONCAT44(local_1b0._4_4_,uVar9);
                            if (local_1b0._4_4_ < uVar9) {
                              FUN_145af78b8(&local_278,uVar7 & 0xffffffff);
                            }
                            pppppppuVar23 = (undefined8 *******)local_1b8;
                            if ((undefined8 *******)local_1b8 == (undefined8 *******)0x0) {
                              pppppppuVar23 = &local_278;
                            }
                            pppppppuVar23[lVar17 * 6] = (undefined8 ******)0x0;
                            (pppppppuVar23 + lVar17 * 6)[1] = (undefined8 ******)0x0;
                            pppppppuVar23[lVar17 * 6 + 2] = ppppppuVar32;
                            pppppppuVar23[lVar17 * 6 + 3] = (undefined8 ******)0x0;
                            pppppppuVar23[lVar17 * 6 + 4] = ppppppuVar30;
                            if (DAT_14c950c29 == 1) {
                              FUN_1456cec3c(ppppppuVar30);
                            }
                            *(undefined4 *)(pppppppuVar23 + lVar17 * 6 + 5) = 0;
                            *(undefined1 *)((longlong)pppppppuVar23 + lVar17 * 0x30 + 0x2c) = 0;
                            lVar17 = local_3f8;
                          }
                        }
                        ppppppuVar32 = ppppppuVar32 + 0x17;
                        lVar12 = lVar12 + -0xb8;
                        lVar11 = local_3e0;
                      } while (lVar12 != 0);
                    }
                    pppppuVar25 = pppppuVar25 + 5;
                  } while (pppppuVar25 != pppppuVar4);
                }
              }
              else {
                local_308 = (undefined8 *******)0x0;
                lStack_300 = 0;
                uStack_2f8 = 0x3f800000;
                local_2f0 = 0x3f800000;
                local_2e8 = 0;
                local_2ec = 0;
                local_2e7 = 1;
                local_2d0 = (longlong *)0x0;
                local_2e0 = 0;
                uStack_2d8 = 0;
                local_298 = 0;
                local_2a8 = 0;
                uStack_2a0 = 0;
                uStack_28c = 0;
                uStack_294 = 0;
                local_28e = 0;
                local_320 = &local_308;
                local_318 = 0;
                uStack_310 = 0;
                local_324 = 0x7f7fffff;
                local_328 = 0;
                (*(code *)(*ppppppuVar30)[0x59])(ppppppuVar30,&local_328,&local_324,&local_320);
                uVar7 = uStack_310;
                lVar12 = local_318;
                lVar22 = (longlong)(int)uStack_310;
                local_318 = 0;
                uStack_310 = 0;
                if (lVar22 != 0) {
                  lVar31 = 0;
                  do {
                    if (((*(longlong *)(lVar12 + 0x20 + lVar31) != 0) &&
                        (lVar11 = *(longlong *)(lVar12 + 0x10 + lVar31), lVar11 != 0)) &&
                       (lVar11 = *(longlong *)(lVar11 + 0x50), lVar11 != 0)) {
                      lVar16 = FUN_1414cc764();
                      uVar29 = local_1b0;
                      lVar11 = *(longlong *)(lVar11 + 0x10);
                      if ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
                          lVar16 + 0x30)) {
                        lVar17 = (longlong)(int)local_1b0;
                        uVar9 = (int)local_1b0 + 1;
                        local_1b0 = CONCAT44(local_1b0._4_4_,uVar9);
                        if (local_1b0._4_4_ < uVar9) {
                          FUN_145af78b8(&local_278,uVar29 & 0xffffffff);
                        }
                        pppppppuVar23 = (undefined8 *******)local_1b8;
                        if ((undefined8 *******)local_1b8 == (undefined8 *******)0x0) {
                          pppppppuVar23 = &local_278;
                        }
                        pppppppuVar23[lVar17 * 6] = *(undefined8 *******)(lVar12 + lVar31);
                        ppppppuVar30 = *(undefined8 *******)(lVar12 + 8 + lVar31);
                        pppppppuVar23[lVar17 * 6 + 1] = ppppppuVar30;
                        if (ppppppuVar30 != (undefined8 ******)0x0) {
                          LOCK();
                          *(int *)(ppppppuVar30 + 1) = *(int *)(ppppppuVar30 + 1) + 1;
                          UNLOCK();
                        }
                        pppppppuVar23[lVar17 * 6 + 2] =
                             *(undefined8 *******)(lVar12 + 0x10 + lVar31);
                        ppppppuVar30 = *(undefined8 *******)(lVar12 + 0x18 + lVar31);
                        pppppppuVar23[lVar17 * 6 + 3] = ppppppuVar30;
                        if ((DAT_14c950c29 == 1) && (ppppppuVar30 != (undefined8 ******)0x0)) {
                          FUN_1456cec3c();
                        }
                        ppppppuVar30 = *(undefined8 *******)(lVar12 + 0x20 + lVar31);
                        pppppppuVar23[lVar17 * 6 + 4] = ppppppuVar30;
                        if (((DAT_14c950c29 & 1) != 0) && (ppppppuVar30 != (undefined8 ******)0x0))
                        {
                          FUN_1456cec3c();
                        }
                        *(undefined1 *)((longlong)pppppppuVar23 + lVar17 * 0x30 + 0x2c) =
                             *(undefined1 *)(lVar12 + 0x2c + lVar31);
                        *(undefined4 *)(pppppppuVar23 + lVar17 * 6 + 5) =
                             *(undefined4 *)(lVar12 + 0x28 + lVar31);
                        lVar17 = local_3f8;
                      }
                    }
                    lVar31 = lVar31 + 0x30;
                    lVar11 = local_3e0;
                  } while (lVar22 * 0x30 != lVar31);
                }
                FUN_1448262fc(lVar12,uVar7 & 0xffffffff);
                if (lVar12 != 0) {
                  FUN_1400020a8(lVar12);
                }
                FUN_1448262fc(local_318,uStack_310 & 0xffffffff);
                if (local_318 != 0) {
                  FUN_1400020a8();
                }
                plVar14 = local_2d0;
                if (local_2d0 != (longlong *)0x0) {
                  LOCK();
                  plVar15 = local_2d0 + 1;
                  *(int *)plVar15 = (int)*plVar15 + -1;
                  UNLOCK();
                  if ((int)*plVar15 == 0) {
                    (**(code **)*local_2d0)(local_2d0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar14 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar14 + 0x10))(plVar14);
                    }
                  }
                }
              }
              pppppppuVar23 = (undefined8 *******)local_1b8;
              if ((undefined8 *******)local_1b8 == (undefined8 *******)0x0) {
                pppppppuVar23 = &local_278;
              }
              if ((longlong)(int)local_1b0 != 0) {
                pppppppuVar26 = pppppppuVar23 + (longlong)(int)local_1b0 * 6;
                local_3d8 = (longlong *)(lVar17 + 0x20);
                do {
                  if (pppppppuVar23[4] == (undefined8 ******)0x0) {
                    ppppppuVar30 = (undefined8 ******)0x0;
                  }
                  else {
                    ppppppuVar30 = pppppppuVar23[2];
                  }
                  pppppuVar4 = ppppppuVar30[10];
                  if (lVar11 == 0) {
LAB_140884c30:
                    ppppppuVar32 = *pppppppuVar23;
                    if ((ppppppuVar32 != (undefined8 ******)0x0) &&
                       (iVar19 = *(int *)(ppppppuVar32 + 1), (longlong)iVar19 != 0)) {
                      pppppuVar25 = *ppppppuVar32;
                      lVar17 = 0;
                      do {
                        plVar14 = *(longlong **)((longlong)pppppuVar25 + lVar17);
                        (**(code **)(*plVar14 + 8))(plVar14,&local_308);
                        if ((undefined8 *******)local_308 == DAT_14cadbea8) {
                          lVar17 = *(longlong *)((longlong)pppppuVar25 + lVar17);
                          if (lVar17 != 0) {
                            if (*(char *)((longlong)ppppppuVar30 + 0x19) == '\x02') {
                              fVar36 = *(float *)((longlong)ppppppuVar30 + 0x24) *
                                       *(float *)(ppppppuVar30 + 4) +
                                       *(float *)((longlong)ppppppuVar30 + 0x1c);
                            }
                            else if (*(char *)((longlong)ppppppuVar30 + 0x19) == '\x01') {
                              fVar36 = *(float *)((longlong)ppppppuVar30 + 0x1c) +
                                       *(float *)((longlong)ppppppuVar30 + 0x24);
                            }
                            else {
                              fVar36 = *(float *)((longlong)ppppppuVar30 + 0x24);
                            }
                            uVar9 = -(uint)(*(float *)(lVar17 + 0x14) < 0.0);
                            fVar36 = ((float)*(int *)(lVar17 + 0x1c) *
                                      (*(float *)(lVar17 + 0x10) - *(float *)(lVar17 + 0xc)) +
                                     ((fVar36 + *(float *)(ppppppuVar30 + 6)) -
                                     (float)(~uVar9 & (uint)*(float *)(lVar17 + 0xc) |
                                            uVar9 & (uint)*(float *)(lVar17 + 0x10)))) /
                                     *(float *)(lVar17 + 0x14) + *(float *)(lVar17 + 8);
                            fVar37 = (float)FUN_140166c3e(ppppppuVar30);
                            uVar9 = -(uint)(*(float *)(lVar17 + 0x14) < 0.0);
                            fVar37 = ((float)*(int *)(lVar17 + 0x1c) *
                                      (*(float *)(lVar17 + 0x10) - *(float *)(lVar17 + 0xc)) +
                                     (fVar37 - (float)(~uVar9 & (uint)*(float *)(lVar17 + 0xc) |
                                                      uVar9 & (uint)*(float *)(lVar17 + 0x10)))) /
                                     *(float *)(lVar17 + 0x14) + *(float *)(lVar17 + 8);
                            lVar17 = local_3f8;
                            goto LAB_140884d87;
                          }
                          break;
                        }
                        lVar17 = lVar17 + 8;
                      } while ((longlong)iVar19 * 8 != lVar17);
                    }
                    lVar17 = local_3f8;
                    if (*(char *)((longlong)ppppppuVar30 + 0x19) == '\x02') {
                      fVar36 = *(float *)((longlong)ppppppuVar30 + 0x24) *
                               *(float *)(ppppppuVar30 + 4) +
                               *(float *)((longlong)ppppppuVar30 + 0x1c);
                    }
                    else if (*(char *)((longlong)ppppppuVar30 + 0x19) == '\x01') {
                      fVar36 = *(float *)((longlong)ppppppuVar30 + 0x1c) +
                               *(float *)((longlong)ppppppuVar30 + 0x24);
                    }
                    else {
                      fVar36 = *(float *)((longlong)ppppppuVar30 + 0x24);
                    }
                    fVar36 = fVar36 + *(float *)(ppppppuVar30 + 6);
                    fVar37 = (float)FUN_140166c3e(ppppppuVar30);
LAB_140884d87:
                    ppppuVar5 = pppppuVar4[7];
                    iVar19 = *(int *)(lVar17 + 0x28);
                    lVar11 = (longlong)iVar19;
                    *(uint *)(lVar17 + 0x28) = iVar19 + 1U;
                    if (*(uint *)(lVar17 + 0x2c) < iVar19 + 1U) {
                      FUN_1418b2b74(local_3d8,iVar19);
                    }
                    lVar12 = *local_3d8;
                    *(undefined1 *)(lVar12 + lVar11 * 0x18) = 1;
                    *(float *)(lVar12 + 4 + lVar11 * 0x18) = fVar36 / fVar6;
                    *(float *)(lVar12 + 8 + lVar11 * 0x18) = fVar37 / fVar6;
                    *(undefined8 *****)(lVar12 + 0xc + lVar11 * 0x18) = ppppuVar5;
                    *(undefined1 *)(lVar12 + 0x14 + lVar11 * 0x18) = 0;
                    lVar11 = local_3e0;
                  }
                  else {
                    if ((longlong)*(int *)(lVar11 + 0xd8) < 1) {
LAB_140884bff:
                      if ((longlong)*(int *)(lVar11 + 0xe8) != 0) {
                        lVar12 = 0;
                        do {
                          if (*(undefined8 *****)(*(longlong *)(lVar11 + 0xe0) + lVar12) ==
                              pppppuVar4[7]) goto LAB_140884ddf;
                          lVar12 = lVar12 + 8;
                        } while ((longlong)*(int *)(lVar11 + 0xe8) * 8 != lVar12);
                      }
                      goto LAB_140884c30;
                    }
                    lVar12 = 0;
                    do {
                      if (*(undefined8 *****)(*(longlong *)(lVar11 + 0xd0) + lVar12) ==
                          pppppuVar4[7]) goto LAB_140884bff;
                      lVar12 = lVar12 + 8;
                    } while ((longlong)*(int *)(lVar11 + 0xd8) * 8 != lVar12);
                  }
LAB_140884ddf:
                  pppppppuVar23 = pppppppuVar23 + 6;
                } while (pppppppuVar23 != pppppppuVar26);
              }
            }
          }
          FUN_1418b0ffc(&local_278);
          FUN_1418b0ffc(&local_1a0);
          lVar11 = local_3f0;
        }
        lVar12 = local_3e8;
        param_1 = local_408;
        if ((char)local_3c4 == '\0') {
          bVar34 = local_3e8 != 0;
          *(float *)(lVar17 + 0x44) = (float)local_398;
          FUN_140657bfa(lVar11,&local_3a8);
          if (bVar34 && local_3fb == 0) {
            plVar14 = *(longlong **)(lVar12 + 0x658);
            if (plVar14 == (longlong *)0x0) {
              plVar14 = *(longlong **)(lVar12 + 0x660);
              if ((DAT_14c950c29 == 1) && (plVar14 != (longlong *)0x0)) goto LAB_140885337;
              if (plVar14 == (longlong *)0x0) goto LAB_140883b5e;
LAB_1408851d3:
              plVar14 = *(longlong **)(local_3e8 + 0x660);
              if (((DAT_14c950c29 & 1) != 0) && (plVar14 != (longlong *)0x0)) {
LAB_14088542b:
                FUN_1456cec3c(plVar14);
              }
            }
            else if (DAT_14c950c29 != 0) {
LAB_140885337:
              FUN_1456cec3c(plVar14);
              plVar14 = *(longlong **)(local_3e8 + 0x658);
              param_1 = local_408;
              lVar11 = local_3f0;
              if (plVar14 == (longlong *)0x0) goto LAB_1408851d3;
              if ((DAT_14c950c29 & 1) == 0) goto LAB_140884f03;
              goto LAB_14088542b;
            }
LAB_140884f03:
            lVar17 = (**(code **)(*plVar14 + 0x3f8))(plVar14);
            if (lVar17 != 0) {
              plVar14 = *(longlong **)(local_3e8 + 0x658);
              if (plVar14 == (longlong *)0x0) {
                plVar14 = *(longlong **)(local_3e8 + 0x660);
                if ((DAT_14c950c29 == 1) && (plVar14 != (longlong *)0x0)) goto LAB_14088520d;
              }
              else if (DAT_14c950c29 == 1) {
LAB_14088520d:
                FUN_1456cec3c(plVar14);
              }
              lVar17 = (**(code **)(*plVar14 + 0x3f8))(plVar14);
              if (*(int *)(lVar17 + 0x290) != *(int *)(lVar17 + 700)) {
                lVar12 = *(longlong *)(lVar10 + 0x28);
                uVar9 = (uint)((ulonglong)lVar12 >> 0x10);
                uVar20 = (uint)lVar12 & 0xffff;
                lVar22 = lVar17 + 0x2c0;
                if (*(longlong *)(lVar17 + 0x2c8) != 0) {
                  lVar22 = *(longlong *)(lVar17 + 0x2c8);
                }
                iVar19 = *(int *)(lVar22 + (ulonglong)
                                           (*(int *)(lVar17 + 0x2d0) - 1U &
                                           (int)((ulonglong)lVar12 >> 0x20) +
                                           ((uint)lVar12 << 0x10 | uVar20) +
                                           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar20 >> 4)) * 4);
                if (iVar19 != -1) {
                  do {
                    plVar14 = (longlong *)(*(longlong *)(lVar17 + 0x288) + (longlong)iVar19 * 0x18);
                    if (*plVar14 == lVar12) goto LAB_140884fdd;
                    iVar19 = (int)plVar14[2];
                  } while (iVar19 != -1);
                }
              }
              plVar14 = (longlong *)0x0;
LAB_140884fdd:
              puVar21 = (ulonglong *)(plVar14 + 1);
              if (plVar14 == (longlong *)0x0) {
                puVar21 = (ulonglong *)0x0;
              }
              if (puVar21 == (ulonglong *)0x0) {
                puVar21 = &DAT_14cacd708;
              }
              local_1a0 = *puVar21;
              iStack_194 = 0;
              if (lVar11 == 0) {
                uStack_198 = 0;
                iVar19 = 0;
              }
              else {
                uStack_198 = *(uint *)(lVar11 + 0xc);
                if ((int)uStack_198 < DAT_14c9647dc) {
                  lVar17 = (ulonglong)((uStack_198 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uStack_198 >> 0x10) * 8);
                }
                else {
                  lVar17 = 0;
                }
                iVar19 = *(int *)(lVar17 + 0x10);
                if (*(int *)(lVar17 + 0x10) == 0) {
                  LOCK();
                  iVar19 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar27 = DAT_14c964868 + 1;
                  bVar34 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar19;
                  if (bVar34) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar27);
                  }
                  LOCK();
                  iVar19 = *(int *)(lVar17 + 0x10);
                  bVar34 = iVar19 == 0;
                  if (bVar34) {
                    *(int *)(lVar17 + 0x10) = iVar27;
                    iVar19 = 0;
                  }
                  UNLOCK();
                  if (bVar34) {
                    iVar19 = iVar27;
                  }
                }
              }
              uVar7 = local_1a0;
              lVar17 = local_408[0x1e];
              iStack_194 = iVar19;
              if ((longlong)(int)lVar17 != 0) {
                lVar11 = local_408[0x1d];
                uVar29 = 0;
                do {
                  if ((*(ulonglong *)(lVar11 + uVar29) == uVar7) &&
                     (cVar8 = FUN_14018cc58(lVar11 + 8 + uVar29,&uStack_198), cVar8 != '\0')) {
                    param_1 = local_408;
                    if ((int)(~uVar29 >> 4) != 0) goto LAB_140883b5e;
                    break;
                  }
                  uVar29 = uVar29 + 0x10;
                } while ((longlong)(int)lVar17 * 0x10 != uVar29);
              }
              plVar14 = local_3b8;
              iVar19 = (int)local_408[0x1e];
              *(uint *)(local_408 + 0x1e) = iVar19 + 1U;
              if (*(uint *)((longlong)local_408 + 0xf4) < iVar19 + 1U) {
                FUN_1418b2a66(local_3b8,iVar19);
              }
              puVar1 = (undefined4 *)(*plVar14 + (longlong)iVar19 * 0x10);
              *puVar1 = (undefined4)local_1a0;
              puVar1[1] = local_1a0._4_4_;
              puVar1[2] = uStack_198;
              puVar1[3] = iStack_194;
              param_1 = local_408;
            }
          }
        }
        else {
          *(float *)(lVar17 + 0x3c) = *(float *)(lVar17 + 0x30) - local_370;
          *(undefined1 *)(lVar17 + 0x40) = 1;
        }
      }
LAB_140883b5e:
      lVar10 = lVar10 + 0xf0;
    } while (lVar10 != local_3b0);
  }
  lVar10 = param_1[0x1c];
  FUN_14489ea98(param_1);
  bVar34 = local_3cc < (int)lVar10;
LAB_14088544d:
  if ((local_d0 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar34;
}



// FUNCTION 1408854e2 FUN_1408854e2 body=207 status=ok
// SIG undefined FUN_1408854e2(void)

void FUN_1408854e2(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*param_2 == DAT_14cb8d418) {
    if (*(char *)(param_3 + 8) == '\x03') {
      uVar3 = *param_3;
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x120);
      puVar2 = &local_58;
      FUN_1400b56fe(puVar2,param_3,3);
      if (local_38 != 0) {
        uVar3 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar2 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    *(undefined4 *)(param_1 + 0x120) = uVar3;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408855b2 FUN_1408855b2 body=437 status=ok
// SIG undefined FUN_1408855b2(void)

ulonglong FUN_1408855b2(longlong param_1)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  int local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  int local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar3 = *(longlong *)(param_1 + 0x160) + 0x400;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0,*(undefined8 *)(param_1 + 0x38));
  piVar4 = &local_80;
  FUN_1447c3578(lVar3,piVar4,local_b0);
  if (local_60 == 1) {
    bVar6 = local_80 != 0;
    uVar2 = 1;
  }
  else {
    piVar5 = &local_58;
    FUN_1400b56fe(piVar5,&local_80,1);
    bVar6 = local_58 != 0;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_40) {
        piVar5 = (int *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar1)(piVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    bVar6 = local_38 != 0 && bVar6;
    uVar2 = (uint)local_60;
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar2 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (0x18 < local_68) {
      piVar4 = (int *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(piVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar4 = (int *)((longlong)local_a0 + 0xc);
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (*piVar4 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)lVar3 >> 8),
                    bVar6 ^ *(char *)(*(longlong *)(param_1 + 0x160) + 0x438) != '\0') & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140885768 FUN_140885768 body=485 status=ok
// SIG undefined FUN_140885768(void)

ulonglong FUN_140885768(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RDI;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98), lVar7 != 0)) {
    do {
      lVar4 = param_2;
      param_2 = *(longlong *)(lVar4 + 0x168);
    } while (*(longlong *)(lVar4 + 0x168) != 0);
    uVar5 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (lVar7 == lVar4) goto LAB_1408857ca;
    if (DAT_14caf64b8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = FUN_142b4754c;
      local_68 = &LAB_147c45ce0;
      local_70 = &LAB_1463f1ff4;
      local_78 = &DAT_149e063b2;
      local_80 = 0x4000000000;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if (*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) {
      lVar7 = *(longlong *)(param_1 + 0x28);
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x28);
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) == DAT_14caf64b8 + 0x30) {
LAB_140885937:
        uVar5 = CONCAT71((int7)(uVar5 >> 8),
                         *(longlong *)(lVar7 + 0x98) == *(longlong *)(lVar4 + 0x3c0));
        goto LAB_1408857ca;
      }
    }
    iVar1 = *(int *)(lVar7 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(lVar7 + 0x48);
      lVar6 = 0;
      do {
        lVar7 = *(longlong *)(lVar2 + lVar6);
        bVar8 = *(longlong *)(lVar7 + 0x98) == lVar4;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),bVar8);
        if (bVar8) break;
        lVar3 = FUN_144a7cbb2();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) goto LAB_140885937;
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
      goto LAB_1408857ca;
    }
  }
  uVar5 = 0;
LAB_1408857ca:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14088594e FUN_14088594e body=372 status=ok
// SIG undefined FUN_14088594e(void)

void FUN_14088594e(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x98;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408859d6;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1408859d6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x98)) {
    uVar7 = uVar5 / 0x98 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x98,8);
  return;
}


