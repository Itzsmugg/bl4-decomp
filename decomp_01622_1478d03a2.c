// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1478d03a2 FUN_1478d03a2 body=193 status=ok
// SIG undefined FUN_1478d03a2(void)

void FUN_1478d03a2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  uVar1 = FUN_1478d0464(param_1,&local_30);
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d0464 FUN_1478d0464 body=145 status=ok
// SIG undefined FUN_1478d0464(void)

longlong FUN_1478d0464(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = *param_2;
  if (((((lVar1 != 0) && (lVar3 = FUN_1458cba10(), lVar3 != 0)) &&
       (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
      ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30 && (lVar1 = *param_2, lVar1 != 0)))) &&
     ((longlong)*(int *)(param_1 + 0x70) != 0)) {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x68) + lVar3);
      if (lVar2 != 0) {
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
          return lVar2;
        }
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x70) * 8 != lVar3);
  }
  return 0;
}



// FUNCTION 1478d04f6 FUN_1478d04f6 body=43 status=ok
// SIG undefined FUN_1478d04f6(void)

void FUN_1478d04f6(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2b0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1478d0524 FUN_1478d0524 body=175 status=ok
// SIG undefined FUN_1478d0524(void)

longlong *
FUN_1478d0524(longlong *param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
             longlong param_5,longlong param_6)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined2 *)(param_1 + 4) = 0x100;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a) = 0;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[9] = param_5;
  param_1[0xd] = param_6;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 1478d05de FUN_1478d05de body=251 status=ok
// SIG undefined FUN_1478d05de(void)

void FUN_1478d05de(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    local_38 = *(longlong *)(param_2 + 0x10);
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    lVar2 = (**(code **)(*param_1 + 0x18))(param_1,&local_38);
    if (lVar2 != 0) {
      local_40 = lVar2;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      local_30 = &local_40;
      FUN_1474be378(param_1 + 10);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0xb];
    *(uint *)(param_1 + 0xb) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x5c) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 10,iVar1);
    }
    *(longlong *)(param_1[10] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d06da FUN_1478d06da body=172 status=ok
// SIG undefined FUN_1478d06da(void)

longlong FUN_1478d06da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x58)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_1478d071d:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_1478d073f;
        }
        else {
          if (lVar3 != 0) goto LAB_1478d071d;
LAB_1478d073f:
          lVar3 = 0;
        }
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x58));
  }
  return 0;
}



// FUNCTION 1478d0786 FUN_1478d0786 body=256 status=ok
// SIG undefined FUN_1478d0786(void)

void FUN_1478d0786(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x58);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x50) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_1478d07d3:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_1478d07f5;
        }
        else {
          if (lVar5 != 0) goto LAB_1478d07d3;
LAB_1478d07f5:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x58);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x58);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x50) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x58);
            }
            *(int *)(param_1 + 0x58) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x50));
            return;
          }
        }
      }
      bVar2 = lVar6 < iVar3;
      lVar6 = lVar6 + 1;
    } while (bVar2);
  }
  return;
}



// FUNCTION 1478d0894 FUN_1478d0894 body=17 status=ok
// SIG undefined FUN_1478d0894(void)

void FUN_1478d0894(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_14a794840;
  *(undefined4 *)(param_1 + 1) = param_2;
  return;
}



// FUNCTION 1478d08a6 FUN_1478d08a6 body=61 status=ok
// SIG undefined FUN_1478d08a6(void)

longlong FUN_1478d08a6(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar3 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x28);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2 * 8;
    lVar4 = 0;
    do {
      bVar5 = *(int *)(lVar3 + lVar4) == param_2;
      lVar2 = CONCAT71((int7)((ulonglong)lVar2 >> 8),bVar5);
      if (bVar5) {
        return lVar2;
      }
      bVar5 = lVar1 + -8 != lVar4;
      lVar4 = lVar4 + 8;
    } while (bVar5);
  }
  return lVar2;
}



// FUNCTION 1478d08e4 FUN_1478d08e4 body=60 status=ok
// SIG undefined FUN_1478d08e4(void)

undefined8 FUN_1478d08e4(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1 + 8;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x28);
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(lVar1 + lVar2) == param_2) && (*(int *)(lVar1 + 4 + lVar2) == param_3)) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x30) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1478d0970 FUN_1478d0970 body=911 status=ok
// SIG undefined FUN_1478d0970(void)

void FUN_1478d0970(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  float fVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_148 [32];
  longlong *local_128;
  longlong local_120;
  longlong *local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  float local_b0 [16];
  float *local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  puVar4 = (undefined8 *)*param_6;
  local_128 = (longlong *)param_6[1];
  local_120 = param_6[2];
  lVar11 = puVar4[2];
  local_c8 = 0;
  uStack_c0 = (ulonglong)*(uint *)(puVar4 + 1);
  local_118 = param_2;
  local_110 = param_3;
  if (*(uint *)(puVar4 + 1) != 0) {
    FUN_1446f48e2(&local_c8,0);
  }
  uVar8 = FUN_14479d2ce(lVar11 + 0x40);
  (**(code **)*param_4)(param_4,&local_d8,uVar8);
  fVar3 = *(float *)(puVar4 + 1);
  if (fVar3 != 0.0) {
    fVar10 = 0.0;
    do {
      local_b0[0] = fVar10;
      uVar6 = (**(code **)(*param_4 + 0x10))(param_4,local_b0,lVar11,local_d8);
      *(undefined4 *)(local_c8 + (longlong)(int)local_b0[0] * 4) = uVar6;
      fVar10 = (float)((int)fVar10 + 1);
    } while (fVar3 != fVar10);
  }
  FUN_1478d0d00(&local_c8,*param_5,puVar4,*param_1);
  if (1 < (int)param_1[1]) {
    lVar12 = 1;
    lVar11 = 0x60;
    lVar15 = 0x18;
    do {
      FUN_1478d0df5(&local_c8,*param_5 + lVar11,puVar4,*param_1 + lVar15);
      lVar12 = lVar12 + 1;
      lVar11 = lVar11 + 0x60;
      lVar15 = lVar15 + 0x18;
    } while (lVar12 < (int)param_1[1]);
  }
  FUN_142400cf0(*puVar4,*(undefined4 *)(puVar4 + 1));
  plVar5 = local_118;
  plVar1 = local_128;
  if (0 < (int)local_118[1]) {
    local_70 = (float *)0x0;
    local_64 = 0x10;
    uVar7 = *(uint *)(param_5 + 1);
    local_68 = uVar7;
    if (0x10 < uVar7) {
      FUN_1478ddd44(local_b0,0);
      uVar7 = *(uint *)(param_5 + 1);
    }
    if (0 < (int)uVar7) {
      lVar11 = 4;
      lVar12 = 0;
      do {
        pfVar13 = local_70;
        if (local_70 == (float *)0x0) {
          pfVar13 = local_b0;
        }
        pfVar13[lVar12] = *(float *)(*param_5 + lVar11 * 4);
        lVar12 = lVar12 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar12 < (int)param_5[1]);
    }
    pfVar13 = local_70;
    if (local_70 == (float *)0x0) {
      pfVar13 = local_b0;
    }
    uVar7 = *(uint *)(plVar5 + 1);
    if (0 < (int)uVar7) {
      lVar11 = *plVar5;
      fVar3 = *pfVar13;
      FUN_144717214(plVar1);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(lVar11 + 0x10);
      if ((1e-08 < ABS(fVar3 + -1.0)) && (lVar12 = plVar1[1], (longlong)(int)lVar12 != 0)) {
        lVar15 = *plVar1;
        lVar9 = 0;
        do {
          *(float *)(lVar15 + 8 + lVar9) = *(float *)(lVar15 + 8 + lVar9) * fVar3;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)(int)lVar12 * 0x10 != lVar9);
      }
      if (uVar7 != 1) {
        uVar16 = 2;
        if (2 < (int)uVar7) {
          uVar16 = (ulonglong)uVar7;
        }
        uVar14 = 1;
        do {
          lVar11 = lVar11 + 0x20;
          if (1e-05 < pfVar13[uVar14]) {
            FUN_144716836(plVar1,lVar11,pfVar13[uVar14]);
          }
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
      }
    }
    if (local_70 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < (int)local_110[2]) {
    local_e8 = *param_5;
    lStack_e0 = param_5[1];
    local_f8 = local_c8;
    local_f0 = (undefined4)uStack_c0;
    local_108 = *local_110;
    uStack_104 = local_110[1];
    uStack_100 = local_110[2];
    uStack_fc = local_110[3];
    FUN_1433eb16c(&local_108,&local_f8,&local_e8,local_120);
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d0d00 FUN_1478d0d00 body=245 status=ok
// SIG undefined FUN_1478d0d00(void)

void FUN_1478d0d00(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  double *pdVar1;
  double *pdVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong lVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  
  uVar3 = *(uint *)(param_4 + 1);
  if ((ulonglong)uVar3 != 0) {
    fVar24 = *(float *)(param_2 + 0x10);
    if (1.0 <= fVar24) {
      fVar24 = 1.0;
    }
    if (fVar24 <= 0.0) {
      fVar24 = 0.0;
    }
    lVar22 = 0x14;
    uVar23 = 0;
    do {
      uVar4 = *(uint *)(*param_1 + uVar23 * 4);
      fVar25 = fVar24;
      if ((((ulonglong)uVar4 != 0xffffffff) && (-1 < (int)uVar4)) &&
         ((int)uVar4 < *(int *)(param_2 + 0x48))) {
        fVar25 = *(float *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar4 * 4);
      }
      lVar5 = *param_3;
      dVar8 = (double)fVar25;
      dVar9 = (double)fVar25;
      lVar6 = *param_4;
      pdVar1 = (double *)(lVar6 + -0x10 + lVar22 * 4);
      dVar13 = *pdVar1;
      dVar14 = pdVar1[1];
      pdVar1 = (double *)(lVar6 + lVar22 * 4);
      dVar15 = *pdVar1;
      dVar16 = pdVar1[1];
      pdVar1 = (double *)(lVar6 + -0x30 + lVar22 * 4);
      dVar17 = *pdVar1;
      dVar18 = pdVar1[1];
      pdVar1 = (double *)(lVar6 + -0x20 + lVar22 * 4);
      dVar19 = *pdVar1;
      dVar20 = pdVar1[1];
      pdVar1 = (double *)(lVar6 + -0x50 + lVar22 * 4);
      dVar12 = pdVar1[1] * dVar9;
      pdVar2 = (double *)(lVar6 + -0x40 + lVar22 * 4);
      dVar21 = *pdVar2;
      dVar10 = dVar9 * pdVar2[1];
      auVar11._8_4_ = SUB84(dVar12,0);
      auVar11._0_8_ = *pdVar1 * dVar8;
      auVar11._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(lVar5 + -0x50 + lVar22 * 4) = auVar11;
      auVar7._8_4_ = SUB84(dVar10,0);
      auVar7._0_8_ = dVar8 * dVar21;
      auVar7._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      *(undefined1 (*) [16])(lVar5 + -0x40 + lVar22 * 4) = auVar7;
      pdVar1 = (double *)(lVar5 + -0x30 + lVar22 * 4);
      *pdVar1 = dVar17 * dVar8;
      pdVar1[1] = dVar18 * dVar9;
      pdVar1 = (double *)(lVar5 + -0x20 + lVar22 * 4);
      *pdVar1 = dVar19 * dVar8;
      pdVar1[1] = dVar20 * dVar9;
      pdVar1 = (double *)(lVar5 + -0x10 + lVar22 * 4);
      *pdVar1 = dVar13 * dVar8;
      pdVar1[1] = dVar14 * dVar9;
      pdVar1 = (double *)(lVar5 + lVar22 * 4);
      *pdVar1 = dVar15 * dVar8;
      pdVar1[1] = dVar16 * dVar9;
      uVar23 = uVar23 + 1;
      lVar22 = lVar22 + 0x18;
    } while (uVar3 != uVar23);
  }
  return;
}



// FUNCTION 1478d0df5 FUN_1478d0df5 body=381 status=ok
// SIG undefined FUN_1478d0df5(void)

void FUN_1478d0df5(longlong *param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar33;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  
  uVar5 = *(uint *)(param_4 + 1);
  if ((ulonglong)uVar5 != 0) {
    fVar20 = *(float *)(param_2 + 0x10);
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    lVar16 = 0x14;
    uVar17 = 0;
    do {
      uVar6 = *(uint *)(*param_1 + uVar17 * 4);
      fVar21 = fVar20;
      if ((((ulonglong)uVar6 != 0xffffffff) && (-1 < (int)uVar6)) &&
         ((int)uVar6 < *(int *)(param_2 + 0x48))) {
        fVar21 = *(float *)(*(longlong *)(param_2 + 0x40) + (ulonglong)uVar6 * 4);
      }
      dVar24 = (double)fVar21;
      dVar25 = (double)fVar21;
      lVar7 = *param_3;
      lVar8 = *param_4;
      pdVar1 = (double *)(lVar8 + -0x50 + lVar16 * 4);
      dVar26 = *pdVar1 * dVar24;
      dVar27 = pdVar1[1] * dVar25;
      pdVar1 = (double *)(lVar8 + -0x40 + lVar16 * 4);
      dVar28 = *pdVar1 * dVar24;
      dVar29 = pdVar1[1] * dVar25;
      pdVar1 = (double *)(lVar7 + -0x50 + lVar16 * 4);
      dVar4 = *pdVar1;
      dVar11 = pdVar1[1];
      pdVar1 = (double *)(lVar7 + -0x40 + lVar16 * 4);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      dVar30 = dVar28 * dVar14 + dVar26 * dVar4;
      dVar33 = dVar29 * dVar15 + dVar27 * dVar11;
      lVar18 = -(ulonglong)(0.0 <= dVar30 + dVar33);
      lVar19 = -(ulonglong)(0.0 <= dVar30 + dVar33);
      uVar22 = (undefined4)lVar19;
      uVar23 = (undefined4)((ulonglong)lVar19 >> 0x20);
      auVar31._0_8_ = 0.0 - dVar26;
      auVar31._8_8_ = 0.0 - dVar27;
      auVar32._8_4_ = uVar22;
      auVar32._0_8_ = lVar18;
      auVar32._12_4_ = uVar23;
      auVar12._8_8_ = dVar27;
      auVar12._0_8_ = dVar26;
      auVar32 = blendvpd(auVar31,auVar12,auVar32);
      auVar34._0_8_ = 0.0 - dVar28;
      auVar34._8_8_ = 0.0 - dVar29;
      auVar35._8_4_ = uVar22;
      auVar35._0_8_ = lVar18;
      auVar35._12_4_ = uVar23;
      auVar13._8_8_ = dVar29;
      auVar13._0_8_ = dVar28;
      auVar35 = blendvpd(auVar34,auVar13,auVar35);
      pdVar1 = (double *)(lVar7 + -0x50 + lVar16 * 4);
      *pdVar1 = auVar32._0_8_ + dVar4;
      pdVar1[1] = auVar32._8_8_ + dVar11;
      pdVar1 = (double *)(lVar7 + -0x40 + lVar16 * 4);
      *pdVar1 = auVar35._0_8_ + dVar14;
      pdVar1[1] = auVar35._8_8_ + dVar15;
      pdVar1 = (double *)(lVar8 + -0x30 + lVar16 * 4);
      pdVar2 = (double *)(lVar8 + -0x20 + lVar16 * 4);
      dVar14 = *pdVar2;
      dVar15 = pdVar2[1];
      pdVar2 = (double *)(lVar7 + -0x30 + lVar16 * 4);
      dVar11 = pdVar1[1] * dVar25 + pdVar2[1];
      pdVar3 = (double *)(lVar7 + -0x20 + lVar16 * 4);
      dVar4 = pdVar3[1];
      auVar9._8_4_ = SUB84(dVar11,0);
      auVar9._0_8_ = *pdVar1 * dVar24 + *pdVar2;
      auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + -0x30 + lVar16 * 4) = auVar9;
      pdVar1 = (double *)(lVar7 + -0x20 + lVar16 * 4);
      *pdVar1 = dVar14 * dVar24 + *pdVar3;
      pdVar1[1] = dVar15 * dVar25 + dVar4;
      pdVar2 = (double *)(lVar8 + -0x10 + lVar16 * 4);
      pdVar1 = (double *)(lVar8 + lVar16 * 4);
      dVar14 = *pdVar1;
      dVar15 = pdVar1[1];
      pdVar3 = (double *)(lVar7 + -0x10 + lVar16 * 4);
      dVar11 = pdVar2[1] * dVar25 + pdVar3[1];
      pdVar1 = (double *)(lVar7 + lVar16 * 4);
      dVar4 = pdVar1[1];
      auVar10._8_4_ = SUB84(dVar11,0);
      auVar10._0_8_ = *pdVar2 * dVar24 + *pdVar3;
      auVar10._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
      *(undefined1 (*) [16])(lVar7 + -0x10 + lVar16 * 4) = auVar10;
      pdVar2 = (double *)(lVar7 + lVar16 * 4);
      *pdVar2 = dVar24 * dVar14 + *pdVar1;
      pdVar2[1] = dVar25 * dVar15 + dVar4;
      uVar17 = uVar17 + 1;
      lVar16 = lVar16 + 0x18;
    } while (uVar5 != uVar17);
  }
  return;
}



// FUNCTION 1478d0f72 FUN_1478d0f72 body=979 status=ok
// SIG undefined FUN_1478d0f72(void)

void FUN_1478d0f72(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  float *pfVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  undefined4 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  float local_b0 [16];
  float *local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar4 = (undefined8 *)*param_7;
  local_138 = (longlong *)param_7[1];
  local_130 = param_7[2];
  lVar12 = puVar4[2];
  local_c8 = 0;
  uStack_c0 = (ulonglong)*(uint *)(puVar4 + 1);
  lVar15 = lVar12;
  local_128 = param_2;
  local_120 = param_3;
  if (*(uint *)(puVar4 + 1) != 0) {
    FUN_1446f48e2(&local_c8,0);
    lVar15 = puVar4[2];
  }
  uVar9 = FUN_14479d2ce(lVar15 + 0x40);
  (**(code **)*param_4)(param_4,&local_d8,uVar9);
  fVar3 = *(float *)(puVar4 + 1);
  if (fVar3 != 0.0) {
    fVar13 = 0.0;
    do {
      local_b0[0] = fVar13;
      uVar7 = (**(code **)(*param_4 + 0x10))(param_4,local_b0,lVar12,local_d8);
      *(undefined4 *)(local_c8 + (longlong)(int)local_b0[0] * 4) = uVar7;
      fVar13 = (float)((int)fVar13 + 1);
    } while (fVar3 != fVar13);
  }
  FUN_1478d0d00(&local_c8,(longlong)*(int *)*param_6 * 0x60 + *param_5,puVar4,*param_1);
  if (1 < (int)param_1[1]) {
    lVar15 = 1;
    lVar12 = 0x18;
    do {
      FUN_1478d0df5(&local_c8,(longlong)*(int *)(*param_6 + lVar15 * 4) * 0x60 + *param_5,puVar4,
                    *param_1 + lVar12);
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + 0x18;
    } while (lVar15 < (int)param_1[1]);
  }
  FUN_142400cf0(*puVar4,*(undefined4 *)(puVar4 + 1));
  plVar6 = local_128;
  plVar1 = local_138;
  if (0 < (int)local_128[1]) {
    local_70 = (float *)0x0;
    local_64 = 0x10;
    uVar8 = *(uint *)(param_6 + 1);
    local_68 = uVar8;
    if (0x10 < uVar8) {
      FUN_1478ddd44(local_b0,0);
      uVar8 = *(uint *)(param_6 + 1);
    }
    if (0 < (int)uVar8) {
      lVar12 = 0;
      do {
        pfVar10 = local_70;
        if (local_70 == (float *)0x0) {
          pfVar10 = local_b0;
        }
        pfVar10[lVar12] =
             *(float *)(*param_5 + 0x10 + (longlong)*(int *)(*param_6 + lVar12 * 4) * 0x60);
        lVar12 = lVar12 + 1;
      } while (lVar12 < (int)param_6[1]);
    }
    pfVar10 = local_70;
    if (local_70 == (float *)0x0) {
      pfVar10 = local_b0;
    }
    uVar8 = *(uint *)(plVar6 + 1);
    if (0 < (int)uVar8) {
      lVar12 = *plVar6;
      fVar3 = *pfVar10;
      FUN_144717214(plVar1);
      *(undefined1 *)(plVar1 + 2) = *(undefined1 *)(lVar12 + 0x10);
      if ((1e-08 < ABS(fVar3 + -1.0)) && (lVar15 = plVar1[1], (longlong)(int)lVar15 != 0)) {
        lVar5 = *plVar1;
        lVar11 = 0;
        do {
          *(float *)(lVar5 + 8 + lVar11) = *(float *)(lVar5 + 8 + lVar11) * fVar3;
          lVar11 = lVar11 + 0x10;
        } while ((longlong)(int)lVar15 * 0x10 != lVar11);
      }
      if (uVar8 != 1) {
        uVar16 = 2;
        if (2 < (int)uVar8) {
          uVar16 = (ulonglong)uVar8;
        }
        uVar14 = 1;
        do {
          lVar12 = lVar12 + 0x20;
          if (1e-05 < pfVar10[uVar14]) {
            FUN_144716836(plVar1,lVar12,pfVar10[uVar14]);
          }
          uVar14 = uVar14 + 1;
        } while (uVar16 != uVar14);
      }
    }
    if (local_70 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < (int)local_120[2]) {
    local_e8 = *param_6;
    lStack_e0 = param_6[1];
    local_f8 = *param_5;
    lStack_f0 = param_5[1];
    local_108 = local_c8;
    local_100 = (undefined4)uStack_c0;
    local_118 = *local_120;
    uStack_114 = local_120[1];
    uStack_110 = local_120[2];
    uStack_10c = local_120[3];
    local_148 = local_130;
    FUN_1433eb9e8();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478d1346 FUN_1478d1346 body=1050 status=ok
// SIG undefined FUN_1478d1346(void)

void FUN_1478d1346(longlong *param_1,longlong *param_2,undefined4 *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong param_7,longlong *param_8)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  float *pfVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong *local_140;
  longlong local_138;
  longlong *local_130;
  longlong *local_128;
  undefined4 *local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  longlong *local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  float local_b0 [16];
  float *local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar5 = (undefined8 *)*param_8;
  local_140 = (longlong *)param_8[1];
  local_138 = param_8[2];
  lVar13 = puVar5[2];
  local_c8 = 0;
  uStack_c0 = (ulonglong)*(uint *)(puVar5 + 1);
  lVar14 = lVar13;
  local_130 = param_1;
  local_128 = param_2;
  local_120 = param_3;
  if (*(uint *)(puVar5 + 1) != 0) {
    FUN_1446f48e2(&local_c8,0);
    lVar14 = puVar5[2];
  }
  uVar10 = FUN_14479d2ce(lVar14 + 0x40);
  (**(code **)*param_4)(param_4,&local_d8,uVar10);
  uVar9 = *(uint *)(puVar5 + 1);
  if ((ulonglong)uVar9 != 0) {
    uVar16 = 0;
    do {
      if ((longlong)uVar16 < (longlong)*(int *)(param_7 + 0x28)) {
        iVar4 = *(int *)(*(longlong *)(param_7 + 0x20) + uVar16 * 4);
        uVar8 = 0xffffffff;
        if (((-1 < (longlong)iVar4) && (iVar4 < *(int *)(lVar13 + 0x88))) &&
           (local_b0[0] = *(float *)(*(longlong *)(lVar13 + 0x80) + (longlong)iVar4 * 4),
           local_b0[0] != -NAN)) {
          uVar8 = (**(code **)(*param_4 + 0x10))(param_4,local_b0,lVar13,local_d8);
        }
      }
      else {
        uVar8 = 0xffffffff;
      }
      *(undefined4 *)(local_c8 + uVar16 * 4) = uVar8;
      uVar16 = uVar16 + 1;
    } while (uVar9 != uVar16);
  }
  plVar1 = local_130;
  FUN_1478d0d00(&local_c8,(longlong)*(int *)*param_6 * 0x60 + *param_5,puVar5,*local_130);
  if (1 < (int)plVar1[1]) {
    lVar14 = 1;
    lVar13 = 0x18;
    do {
      FUN_1478d0df5(&local_c8,(longlong)*(int *)(*param_6 + lVar14 * 4) * 0x60 + *param_5,puVar5,
                    *plVar1 + lVar13);
      lVar14 = lVar14 + 1;
      lVar13 = lVar13 + 0x18;
    } while (lVar14 < (int)plVar1[1]);
  }
  FUN_142400cf0(*puVar5,*(undefined4 *)(puVar5 + 1));
  plVar1 = local_128;
  if (0 < (int)local_128[1]) {
    local_70 = (float *)0x0;
    local_64 = 0x10;
    uVar9 = *(uint *)(param_6 + 1);
    local_68 = uVar9;
    if (0x10 < uVar9) {
      FUN_1478ddd44(local_b0,0);
      uVar9 = *(uint *)(param_6 + 1);
    }
    plVar7 = local_140;
    if (0 < (int)uVar9) {
      lVar13 = 0;
      do {
        pfVar11 = local_70;
        if (local_70 == (float *)0x0) {
          pfVar11 = local_b0;
        }
        pfVar11[lVar13] =
             *(float *)(*param_5 + 0x10 + (longlong)*(int *)(*param_6 + lVar13 * 4) * 0x60);
        lVar13 = lVar13 + 1;
      } while (lVar13 < (int)param_6[1]);
    }
    pfVar11 = local_70;
    if (local_70 == (float *)0x0) {
      pfVar11 = local_b0;
    }
    uVar9 = *(uint *)(plVar1 + 1);
    if (0 < (int)uVar9) {
      lVar13 = *plVar1;
      fVar3 = *pfVar11;
      FUN_144717214(local_140);
      *(undefined1 *)(plVar7 + 2) = *(undefined1 *)(lVar13 + 0x10);
      if ((1e-08 < ABS(fVar3 + -1.0)) && (lVar14 = plVar7[1], (longlong)(int)lVar14 != 0)) {
        lVar6 = *plVar7;
        lVar12 = 0;
        do {
          *(float *)(lVar6 + 8 + lVar12) = *(float *)(lVar6 + 8 + lVar12) * fVar3;
          lVar12 = lVar12 + 0x10;
        } while ((longlong)(int)lVar14 * 0x10 != lVar12);
      }
      if (uVar9 != 1) {
        uVar16 = 2;
        if (2 < (int)uVar9) {
          uVar16 = (ulonglong)uVar9;
        }
        uVar15 = 1;
        do {
          lVar13 = lVar13 + 0x20;
          if (1e-05 < pfVar11[uVar15]) {
            FUN_144716836(plVar7,lVar13,pfVar11[uVar15]);
          }
          uVar15 = uVar15 + 1;
        } while (uVar16 != uVar15);
      }
    }
    if (local_70 != (float *)0x0) {
      FUN_1400020a8();
    }
  }
  if (0 < (int)local_120[2]) {
    local_e8 = *param_6;
    lStack_e0 = param_6[1];
    local_f8 = *param_5;
    lStack_f0 = param_5[1];
    local_108 = local_c8;
    local_100 = (undefined4)uStack_c0;
    local_118 = *local_120;
    uStack_114 = local_120[1];
    uStack_110 = local_120[2];
    uStack_10c = local_120[3];
    local_148 = local_138;
    FUN_1433eb9e8();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d1762 FUN_1478d1762 body=1117 status=ok
// SIG undefined FUN_1478d1762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478d1762(longlong *param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5,longlong *param_6)

{
  longlong *plVar1;
  double *pdVar2;
  double dVar3;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar20;
  undefined1 auVar19 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar26;
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  longlong *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  double dVar4;
  
  auVar12 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  plVar6 = (longlong *)*param_6;
  local_108 = (longlong *)*param_1;
  local_100 = 0;
  if ((longlong)(int)param_1[1] != 0) {
    plVar1 = local_108 + (longlong)(int)param_1[1] * 3;
    do {
      uVar5 = *(uint *)(local_108 + 1);
      if ((ulonglong)uVar5 != 0) {
        lVar15 = 0x10;
        uVar16 = 0;
        do {
          lVar14 = (longlong)*(int *)(*(longlong *)(local_108[2] + 0x90) + uVar16 * 4);
          if (lVar14 != -1) {
            lVar13 = *local_108;
            lVar14 = lVar14 * 0x60;
            pdVar2 = (double *)(lVar13 + -0x10 + lVar15);
            dVar10 = *pdVar2;
            dVar22 = pdVar2[1];
            dVar24 = *(double *)(lVar13 + lVar15);
            dVar11 = ((double *)(lVar13 + lVar15))[1];
            pdVar2 = (double *)(lVar13 + 0x18 + lVar14);
            dVar18 = *pdVar2;
            dVar20 = *pdVar2;
            pdVar2 = (double *)(lVar13 + 8 + lVar14);
            dVar25 = *pdVar2;
            dVar31 = *pdVar2;
            dVar26 = *(double *)(lVar13 + lVar14);
            dVar32 = *(double *)(lVar13 + lVar14);
            pdVar2 = (double *)(lVar13 + 0x10 + lVar14);
            dVar3 = *pdVar2;
            dVar4 = *pdVar2;
            dVar21 = dVar22 * dVar3 * -1.0 +
                     dVar24 * dVar25 + dVar26 * dVar11 * 1.0 + dVar18 * dVar10;
            dVar23 = dVar10 * dVar4 * 1.0 +
                     dVar11 * dVar31 + dVar32 * dVar24 * -1.0 + dVar20 * dVar22;
            dVar18 = dVar11 * dVar3 * 1.0 +
                     ((dVar26 * dVar22 * 1.0 + dVar18 * dVar24) - dVar25 * dVar10);
            dVar20 = dVar24 * dVar4 * -1.0 +
                     ((dVar32 * dVar10 * -1.0 + dVar20 * dVar11) - dVar31 * dVar22);
            dVar25 = dVar18 * dVar18 + dVar21 * dVar21;
            dVar31 = dVar20 * dVar20 + dVar23 * dVar23;
            auVar27._0_8_ = dVar25 + dVar31;
            auVar27._8_8_ = dVar25 + dVar31;
            uVar17 = -(ulonglong)(9.99999993922529e-09 <= auVar27._8_8_);
            auVar28 = sqrtpd(auVar27,auVar27);
            auVar28 = divpd(auVar12,auVar28);
            auVar33._0_8_ = auVar28._0_8_ * dVar18;
            auVar33._8_8_ = auVar28._8_8_ * dVar20;
            auVar30._0_8_ =
                 (ulonglong)(dVar21 * auVar28._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
            auVar30._8_8_ = (ulonglong)(dVar23 * auVar28._8_8_) & uVar17;
            auVar28._8_4_ = (int)uVar17;
            auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar27._0_8_);
            auVar28._12_4_ = (int)(uVar17 >> 0x20);
            auVar28 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar33,auVar28);
            *(undefined1 (*) [16])(lVar13 + -0x10 + lVar15) = auVar30;
            *(undefined1 (*) [16])(lVar13 + lVar15) = auVar28;
          }
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 0x60;
        } while (uVar5 != uVar16);
      }
      local_108 = local_108 + 3;
    } while (local_108 != plVar1);
    local_108 = (longlong *)*param_1;
    local_100 = (undefined4)param_1[1];
  }
  local_d8 = *param_5;
  uStack_d0 = param_5[1];
  local_118 = &local_d8;
  lVar15 = param_4 + 0x88;
  if (param_4 == 0) {
    lVar15 = 0;
  }
  local_e8 = *param_3;
  uStack_e0 = param_3[1];
  local_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  uStack_ec = param_2[3];
  local_110 = param_6;
  FUN_1478d0970(&local_108,&local_f8,&local_e8,lVar15);
  auVar28 = _DAT_149935300;
  auVar12 = _DAT_149934d80;
  lVar15 = (longlong)(int)plVar6[1];
  if (lVar15 != 0) {
    lVar14 = lVar15 * 0x60 + -0x50;
    do {
      lVar13 = (longlong)*(int *)(*(longlong *)(plVar6[2] + 0x90) + -4 + lVar15 * 4);
      if (lVar13 != -1) {
        lVar7 = *plVar6;
        lVar13 = lVar13 * 0x60;
        pdVar2 = (double *)(lVar7 + 0x10 + lVar13);
        dVar22 = *pdVar2 * -1.0;
        dVar24 = pdVar2[1] * 1.0;
        pdVar2 = (double *)(lVar7 + -0x10 + lVar14);
        dVar32 = *pdVar2;
        dVar3 = pdVar2[1];
        dVar4 = *(double *)(lVar7 + lVar14);
        dVar10 = ((double *)(lVar7 + lVar14))[1];
        pdVar2 = (double *)(lVar7 + 8 + lVar13);
        dVar18 = *pdVar2;
        dVar20 = *pdVar2;
        dVar31 = *(double *)(lVar7 + lVar13);
        dVar25 = *(double *)(lVar7 + lVar13);
        dVar26 = dVar4 * dVar22 * -1.0 + dVar20 * dVar3 + (dVar24 * dVar10 - dVar25 * dVar32 * -1.0)
        ;
        pdVar2 = (double *)(lVar7 + -0x10 + lVar14);
        *pdVar2 = dVar3 * dVar22 * -1.0 +
                  ((dVar32 * dVar24 - dVar31 * dVar10 * 1.0) - dVar4 * dVar18);
        pdVar2[1] = dVar32 * dVar22 * 1.0 +
                    ((dVar3 * dVar24 - dVar25 * dVar4 * -1.0) - dVar10 * dVar20);
        auVar9._8_4_ = SUB84(dVar26,0);
        auVar9._0_8_ = dVar10 * dVar22 * 1.0 +
                       dVar18 * dVar32 + (dVar24 * dVar4 - dVar31 * dVar3 * 1.0);
        auVar9._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
        *(undefined1 (*) [16])(lVar7 + lVar14) = auVar9;
        lVar13 = *plVar6;
        pdVar2 = (double *)(lVar13 + -0x10 + lVar14);
        dVar20 = *pdVar2;
        dVar18 = pdVar2[1];
        dVar25 = *(double *)(lVar13 + lVar14);
        dVar31 = ((double *)(lVar13 + lVar14))[1];
        dVar26 = dVar25 * dVar25 + dVar20 * dVar20;
        dVar32 = dVar31 * dVar31 + dVar18 * dVar18;
        auVar29._0_8_ = dVar26 + dVar32;
        auVar29._8_8_ = dVar26 + dVar32;
        uVar16 = -(ulonglong)(1e-08 <= auVar29._8_8_);
        auVar30 = sqrtpd(auVar29,auVar29);
        auVar30 = divpd(auVar12,auVar30);
        auVar34._0_8_ = auVar30._0_8_ * dVar25;
        auVar34._8_8_ = auVar30._8_8_ * dVar31;
        auVar19._0_8_ = (ulonglong)(dVar20 * auVar30._0_8_) & -(ulonglong)(1e-08 <= auVar29._0_8_);
        auVar19._8_8_ = (ulonglong)(dVar18 * auVar30._8_8_) & uVar16;
        auVar8._8_4_ = (int)uVar16;
        auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar29._0_8_);
        auVar8._12_4_ = (int)(uVar16 >> 0x20);
        auVar30 = blendvpd(auVar28,auVar34,auVar8);
        *(undefined1 (*) [16])(lVar13 + -0x10 + lVar14) = auVar19;
        *(undefined1 (*) [16])(lVar13 + lVar14) = auVar30;
      }
      lVar15 = lVar15 + -1;
      lVar14 = lVar14 + -0x60;
    } while (lVar15 != 0);
  }
  if ((local_c0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d1bc0 FUN_1478d1bc0 body=822 status=ok
// SIG undefined FUN_1478d1bc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478d1bc0(ulonglong *param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double *pdVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar13;
  undefined1 auVar12 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((ulonglong)uVar1 == 1) {
    puVar6 = (ulonglong *)*param_2;
  }
  else {
    if (uVar1 != 0) {
      pdVar5 = (double *)*param_2;
      dVar16 = (double)*(float *)*param_3;
      dVar14 = pdVar5[6] * dVar16;
      dVar21 = pdVar5[5] * dVar16;
      dVar9 = *pdVar5 * dVar16;
      dVar10 = pdVar5[1] * dVar16;
      dVar11 = dVar16 * pdVar5[2];
      dVar13 = dVar16 * pdVar5[3];
      dVar15 = pdVar5[4] * dVar16;
      dVar2 = pdVar5[10] * dVar16;
      dVar3 = pdVar5[9] * dVar16;
      dVar16 = dVar16 * pdVar5[8];
      if (1 < (int)uVar1) {
        pdVar5 = pdVar5 + 0x16;
        uVar7 = 1;
        do {
          dVar17 = (double)((float *)*param_3)[uVar7];
          dVar14 = (pdVar5[-4] - dVar14) * dVar17 + dVar14;
          dVar21 = (pdVar5[-5] - dVar21) * dVar17 + dVar21;
          dVar15 = (pdVar5[-6] - dVar15) * dVar17 + dVar15;
          dVar2 = (*pdVar5 - dVar2) * dVar17 + dVar2;
          dVar3 = (pdVar5[-1] - dVar3) * dVar17 + dVar3;
          dVar16 = (pdVar5[-2] - dVar16) * dVar17 + dVar16;
          uVar8 = -(ulonglong)
                   (0.0 <= dVar13 * pdVar5[-7] +
                           dVar11 * pdVar5[-8] + dVar9 * pdVar5[-10] + dVar10 * pdVar5[-9]);
          dVar18 = (double)(~uVar8 & (ulonglong)-(1.0 - dVar17) | uVar8 & (ulonglong)(1.0 - dVar17))
          ;
          dVar9 = dVar9 * dVar18 + pdVar5[-10] * dVar17;
          dVar10 = dVar10 * dVar18 + pdVar5[-9] * dVar17;
          dVar11 = dVar11 * dVar18 + dVar17 * pdVar5[-8];
          dVar13 = dVar13 * dVar18 + dVar17 * pdVar5[-7];
          uVar7 = uVar7 + 1;
          pdVar5 = pdVar5 + 0xc;
        } while (uVar1 != uVar7);
      }
      dVar17 = dVar11 * dVar11 + dVar9 * dVar9;
      dVar18 = dVar13 * dVar13 + dVar10 * dVar10;
      auVar19._0_8_ = dVar17 + dVar18;
      auVar19._8_8_ = dVar17 + dVar18;
      auVar12._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      auVar12._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar20 = sqrtpd(auVar19,auVar19);
      auVar20 = divpd(_DAT_149934d80,auVar20);
      auVar22._0_8_ = auVar20._0_8_ * dVar11;
      auVar22._8_8_ = auVar20._8_8_ * dVar13;
      auVar12 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar22,auVar12);
      *param_1 = (ulonglong)(dVar9 * auVar20._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      param_1[1] = (ulonglong)(dVar10 * auVar20._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      *(undefined1 (*) [16])(param_1 + 2) = auVar12;
      param_1[4] = (ulonglong)dVar15;
      param_1[5] = (ulonglong)dVar21;
      param_1[6] = (ulonglong)dVar14;
      param_1[7] = 0;
      param_1[8] = (ulonglong)dVar16;
      param_1[9] = (ulonglong)dVar3;
      param_1[10] = (ulonglong)dVar2;
      param_1[0xb] = 0;
      return;
    }
    puVar6 = &DAT_14c846480;
  }
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_1 = *puVar6;
    puVar6 = puVar6 + 1;
    param_1 = param_1 + 1;
  }
                    /* WARNING: Read-only address (ram,0x000149934d80) is written */
  return;
}



// FUNCTION 1478d1ef6 FUN_1478d1ef6 body=485 status=ok
// SIG undefined FUN_1478d1ef6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478d1ef6(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar2 = *param_2;
  dVar3 = param_2[1];
  dVar6 = param_2[2] * -1.0;
  dVar8 = param_2[3] * 1.0;
  dVar16 = param_1[3];
  dVar1 = param_1[3];
  dVar10 = param_1[1];
  dVar11 = param_1[1];
  dVar17 = param_1[2];
  dVar18 = param_1[2];
  dVar7 = (dVar6 * dVar10 + (*param_1 * dVar8 * 1.0 - dVar16 * dVar2)) - dVar3 * dVar17 * -1.0;
  dVar9 = (dVar8 * dVar11 + (*param_1 * dVar6 * -1.0 - dVar1 * dVar3)) - dVar2 * dVar18 * 1.0;
  dVar10 = dVar8 * dVar17 * 1.0 + dVar10 * dVar2 + (dVar16 * dVar6 - *param_1 * dVar3 * 1.0);
  dVar11 = dVar6 * dVar18 * -1.0 + dVar11 * dVar3 + (dVar1 * dVar8 - *param_1 * dVar2 * -1.0);
  *param_1 = dVar7;
  param_1[1] = dVar9;
  param_1[2] = dVar10;
  param_1[3] = dVar11;
  dVar1 = param_2[6];
  dVar16 = param_2[5];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - dVar16;
  param_1[6] = param_1[6] - dVar1;
  param_1[7] = 0.0;
  dVar1 = param_2[9];
  auVar12._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) &
               (ulonglong)(1.0 / param_2[10])) * param_1[10] + -1.0;
  auVar12._8_8_ = 0;
  dVar16 = dVar10 * dVar10 + dVar7 * dVar7;
  dVar18 = dVar11 * dVar11 + dVar9 * dVar9;
  dVar17 = dVar16 + dVar18;
  dVar16 = dVar16 + dVar18;
  param_1[8] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[8])) &
                       (ulonglong)(1.0 / param_2[8])) * param_1[8] + -1.0;
  param_1[9] = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar1)) & (ulonglong)(1.0 / dVar1))
               * param_1[9] + -1.0;
  *(undefined1 (*) [16])(param_1 + 10) = auVar12;
  uVar4 = -(ulonglong)(1e-08 <= dVar17);
  uVar5 = -(ulonglong)(1e-08 <= dVar16);
  auVar14._8_8_ = dVar16;
  auVar14._0_8_ = dVar17;
  auVar13 = sqrtpd(auVar12,auVar14);
  auVar14 = divpd(_DAT_149934d80,auVar13);
  auVar15._0_8_ = auVar14._0_8_ * dVar10;
  auVar15._8_8_ = auVar14._8_8_ * dVar11;
  auVar13._8_8_ = uVar5;
  auVar13._0_8_ = uVar4;
  auVar13 = blendvpd(_DAT_149935300,auVar15,auVar13);
  *param_1 = (double)((ulonglong)(dVar7 * auVar14._0_8_) & uVar4);
  param_1[1] = (double)((ulonglong)(dVar9 * auVar14._8_8_) & uVar5);
  *(undefined1 (*) [16])(param_1 + 2) = auVar13;
  return;
}



// FUNCTION 1478d20dc FUN_1478d20dc body=2116 status=ok
// SIG undefined FUN_1478d20dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1478d20dc(undefined1 (*param_1) [16],double *param_2,longlong *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uVar18;
  double *pdVar19;
  int iVar20;
  longlong lVar21;
  uint uVar22;
  undefined8 *puVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar36;
  double dVar37;
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  iVar20 = *(int *)param_2;
  puVar23 = &DAT_14c846480;
  pauVar24 = param_1;
  for (lVar21 = 0xc; lVar21 != 0; lVar21 = lVar21 + -1) {
    *(undefined8 *)*pauVar24 = *puVar23;
    puVar23 = puVar23 + 1;
    pauVar24 = (undefined1 (*) [16])(*pauVar24 + 8);
  }
  dVar34 = *(double *)*param_1;
  dVar37 = *(double *)(*param_1 + 8);
  if (iVar20 != -1) {
    auVar31 = param_1[1];
    dVar26 = *(double *)param_1[3];
    dVar29 = *(double *)(param_1[3] + 8);
    dVar14 = *(double *)param_1[4];
    dVar44 = *(double *)(param_1[4] + 8);
    dVar7 = *(double *)param_1[5];
    dVar33 = *(double *)(param_1[5] + 8);
    dVar30 = *(double *)param_1[2];
    dVar32 = *(double *)(param_1[2] + 8);
    do {
      auVar39 = _DAT_149934d80;
      lVar21 = param_3[0x1d];
      lVar25 = (longlong)iVar20;
      if (lVar21 == 0) {
        lVar21 = param_3[9];
        pdVar19 = (double *)
                  ((ulonglong)((uint)*(ushort *)(*param_3 + lVar25 * 2) * 0x60) +
                  *(longlong *)(lVar21 + 0x30));
      }
      else {
        pdVar19 = (double *)(lVar25 * 0x60 + *(longlong *)(lVar21 + 0x10));
      }
      auVar41 = *(undefined1 (*) [16])(pdVar19 + 8);
      dVar2 = auVar41._0_8_;
      dVar3 = auVar41._8_8_;
      auVar42 = *(undefined1 (*) [16])(pdVar19 + 10);
      dVar11 = auVar42._0_8_;
      dVar8 = auVar42._8_8_;
      auVar49._8_8_ = dVar44;
      auVar49._0_8_ = dVar14;
      auVar41 = minpd(auVar49,auVar41);
      local_2a8._8_4_ = SUB84(dVar44,0);
      local_2a8._0_8_ = dVar14;
      local_2a8._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
      auVar48._8_8_ = dVar33;
      auVar48._0_8_ = dVar7;
      auVar49 = minpd(auVar48,auVar42);
      auVar42._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
      auVar42._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
      iVar20 = movmskpd((int)lVar21,auVar42);
      auVar41._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
      auVar41._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
      uVar22 = movmskpd((int)param_2,auVar41);
      dVar44 = auVar31._0_8_;
      dVar45 = auVar31._8_8_;
      uVar18 = local_2a8._8_8_;
      local_298 = dVar30;
      dStack_290 = dVar32;
      if ((uVar22 & 0x3fffffff) == 0 && iVar20 == 0) {
        local_2b8._8_4_ = SUB84(dVar33,0);
        local_2b8._0_8_ = dVar7;
        local_2b8._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        dVar36 = *pdVar19;
        dVar15 = pdVar19[1];
        dVar16 = pdVar19[2];
        dVar17 = pdVar19[3];
        dVar9 = pdVar19[3];
        dVar10 = pdVar19[3];
        dVar47 = *pdVar19 * dVar37;
        dVar50 = *pdVar19 * dVar34;
        dVar38 = pdVar19[1];
        dVar33 = pdVar19[1];
        dVar5 = dVar34 * dVar38;
        dVar6 = dVar37 * dVar33;
        dVar1 = pdVar19[2];
        dVar13 = pdVar19[2];
        dVar43 = dVar34 * dVar13;
        dVar34 = dVar37 * dVar1 * -1.0 + dVar44 * dVar38 + dVar45 * *pdVar19 * 1.0 + dVar34 * dVar9;
        dVar37 = dVar43 * 1.0 + dVar45 * dVar33 + dVar44 * *pdVar19 * -1.0 + dVar37 * dVar10;
        dVar30 = dVar30 * dVar2;
        dVar32 = dVar32 * dVar3;
        dVar26 = dVar26 * dVar11;
        dVar29 = dVar29 * dVar8;
        dVar33 = dVar32 * dVar36 - dVar30 * dVar15;
        dVar46 = dVar26 * dVar15 - dVar32 * dVar16;
        dVar43 = dVar30 * dVar16 - dVar26 * dVar36;
        dVar38 = dVar29 * dVar17 - dVar29 * dVar17;
        dVar46 = dVar46 + dVar46;
        dVar43 = dVar43 + dVar43;
        dVar33 = dVar33 + dVar33;
        dVar38 = dVar38 + dVar38;
        dVar30 = (dVar33 * dVar15 - dVar16 * dVar43) + dVar9 * dVar46 + dVar30 + pdVar19[4];
        dVar32 = (dVar46 * dVar16 - dVar33 * dVar36) + dVar10 * dVar43 + dVar32 + pdVar19[5];
        dVar26 = (dVar43 * dVar36 - dVar15 * dVar46) + dVar9 * dVar33 + dVar26 + pdVar19[6];
        dVar29 = (dVar38 * dVar17 - dVar38 * dVar17) + dVar10 * dVar38 + dVar29 + pdVar19[7];
        dVar7 = dVar7 * dVar11;
        dVar33 = (double)local_2b8._8_8_ * dVar8;
        auVar31._8_8_ = dVar44 * dVar13 * -1.0 + ((dVar50 * -1.0 + dVar45 * dVar10) - dVar6);
        auVar31._0_8_ = dVar45 * dVar1 * 1.0 + ((dVar47 * 1.0 + dVar44 * dVar9) - dVar5);
        param_2 = (double *)0x0;
      }
      else {
        local_2b8._8_8_ = dVar33 * dVar8;
        local_2b8._0_8_ = dVar7 * dVar11;
        dVar1 = *pdVar19;
        dVar5 = pdVar19[1];
        dVar6 = pdVar19[2];
        dVar36 = dVar5 + dVar5;
        dVar9 = dVar6 + dVar6;
        dVar8 = dVar1 * (dVar1 + dVar1);
        local_198 = (1.0 - (dVar8 + dVar5 * dVar36)) * dVar11;
        dVar33 = pdVar19[3];
        dVar10 = dVar9 * dVar33;
        dVar38 = (dVar1 + dVar1) * pdVar19[3];
        dVar33 = dVar36 * dVar33;
        dVar29 = (dVar9 * dVar5 - dVar38) * dVar11;
        dVar13 = (double)local_2a8._8_8_ * dVar3;
        local_1e8 = (1.0 - (dVar6 * dVar9 + dVar5 * dVar36)) * dVar2;
        dVar8 = (1.0 - (dVar6 * dVar9 + dVar8)) * dVar3;
        dStack_1e0 = (dVar36 * dVar1 + dVar10) * dVar2;
        local_1b8 = (dVar9 * dVar5 + dVar38) * dVar3;
        local_1d8 = (*pdVar19 * dVar9 - dVar33) * dVar2;
        uStack_1d0 = 0;
        local_1c8._8_4_ = SUB84(dVar8,0);
        local_1c8._0_8_ = (dVar36 * dVar1 - dVar10) * dVar3;
        local_1c8._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
        uStack_1b0 = 0;
        local_1a8._8_4_ = SUB84(dVar29,0);
        local_1a8._0_8_ = (dVar33 + *pdVar19 * dVar9) * dVar11;
        local_1a8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_190 = 0;
        local_188 = pdVar19[4];
        dStack_180 = pdVar19[5];
        local_178 = pdVar19[6];
        uStack_170 = 0x3ff0000000000000;
        dVar29 = dVar37 + dVar37;
        dVar8 = dVar44 + dVar44;
        dVar33 = dVar34 * (dVar34 + dVar34);
        local_218 = (1.0 - (dVar33 + dVar37 * dVar29)) * dVar7;
        dVar9 = (dVar34 + dVar34) * dVar45;
        dVar11 = (dVar8 * dVar37 - dVar9) * dVar7;
        local_268 = ((double)DAT_149934d80 - (dVar44 * dVar8 + dVar37 * dVar29)) * dVar14;
        dVar33 = (DAT_149934d80._8_8_ - (dVar44 * dVar8 + dVar33)) * (double)local_2a8._8_8_;
        dStack_260 = (dVar29 * dVar34 + dVar8 * dVar45) * dVar14;
        local_238 = (dVar8 * dVar37 + dVar9) * (double)local_2a8._8_8_;
        local_258 = (dVar34 * dVar8 - dVar29 * dVar45) * dVar14;
        uStack_250 = 0;
        local_248._8_4_ = SUB84(dVar33,0);
        local_248._0_8_ = (dVar29 * dVar34 - dVar8 * dVar45) * (double)local_2a8._8_8_;
        local_248._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        uStack_230 = 0;
        local_228._8_4_ = SUB84(dVar11,0);
        local_228._0_8_ = (dVar29 * dVar45 + dVar34 * dVar8) * dVar7;
        local_228._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
        uStack_210 = 0;
        uStack_1f0 = 0x3ff0000000000000;
        local_208 = dVar30;
        dStack_200 = dVar32;
        local_1f8 = dVar26;
        FUN_1447fea8d(&local_168,&local_268,&local_1e8);
        FUN_144a1c686(&local_168,0x3e45798ee0000000);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar13);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar14 * dVar2);
        auVar31 = blendvpd(_DAT_149936790,auVar39,auVar27);
        dVar7 = (double)local_2b8._0_8_;
        dVar33 = (double)local_2b8._8_8_;
        dVar34 = (double)(~-(ulonglong)(0.0 <= (double)local_2b8._0_8_) & 0xbff0000000000000 |
                         -(ulonglong)(0.0 <= (double)local_2b8._0_8_) & 0x3ff0000000000000);
        dVar37 = auVar31._0_8_;
        local_158 = local_158 * dVar37;
        local_160 = local_160 * dVar37;
        local_168 = local_168 * dVar37;
        dVar37 = auVar31._8_8_;
        local_138 = local_138 * dVar37;
        local_140 = local_140 * dVar37;
        local_148 = dVar37 * local_148;
        local_118 = local_118 * dVar34;
        local_120 = local_120 * dVar34;
        local_128 = dVar34 * local_128;
        param_2 = &local_168;
        FUN_14481fd10(&local_288);
        dVar34 = local_278 * local_278 + local_288 * local_288;
        dVar37 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
        auVar35._0_8_ = dVar34 + dVar37;
        auVar35._8_8_ = dVar34 + dVar37;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
        auVar31 = sqrtpd(auVar35,auVar35);
        auVar39 = divpd(auVar39,auVar31);
        auVar40._0_8_ = auVar39._0_8_ * local_278;
        auVar40._8_8_ = auVar39._8_8_ * dStack_270;
        auVar31 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar28);
        dVar34 = (double)((ulonglong)(local_288 * auVar39._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
        dVar37 = (double)((ulonglong)(dStack_280 * auVar39._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
        dVar29 = 0.0;
        dVar26 = local_f8;
        dVar30 = local_108;
        dVar32 = dStack_100;
      }
      dVar44 = (double)uVar18 * dVar3;
      dVar14 = dVar14 * dVar2;
      iVar20 = *(int *)(param_3[0x12] + lVar25 * 4);
    } while (iVar20 != -1);
    auVar12._8_4_ = SUB84(dVar44,0);
    auVar12._0_8_ = dVar14;
    auVar12._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    param_1[4] = auVar12;
    auVar39._8_4_ = SUB84(dVar33,0);
    auVar39._0_8_ = dVar7;
    auVar39._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    param_1[5] = auVar39;
    param_1[1] = auVar31;
    *(double *)param_1[2] = dVar30;
    *(double *)(param_1[2] + 8) = dVar32;
    *(double *)param_1[3] = dVar26;
    *(double *)(param_1[3] + 8) = dVar29;
  }
  auVar4._8_4_ = SUB84(dVar37,0);
  auVar4._0_8_ = dVar34;
  auVar4._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  *param_1 = auVar4;
  if ((local_e0 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d2922 FUN_1478d2922 body=348 status=ok
// SIG undefined FUN_1478d2922(void)

void FUN_1478d2922(longlong *param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_3 + 0x78);
    FUN_14007db62();
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + uVar5;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar5) {
      FUN_14007e22a(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(int)uVar5 << 3);
    if (0 < (int)param_2[1]) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(*param_2 + lVar9 * 8);
        if ((lVar2 != 0) && (*(char *)(lVar2 + 0x48) == '\x02')) {
          lVar6 = FUN_14481774e(DAT_14cacd528,*(undefined8 *)(lVar2 + 0x30),param_3);
          if (0 < *(int *)(lVar2 + 0x40)) {
            lVar7 = 0;
            lVar8 = 0;
            do {
              cVar4 = FUN_144729dda(lVar6);
              if (cVar4 == '\0') {
LAB_1478d2a1f:
                uVar5 = *(int *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar7) * 2 >> 1;
LAB_1478d2a2b:
                if ((-1 < (int)uVar5) && ((int)uVar5 < (int)param_1[1])) {
                  lVar3 = *param_1;
                  *(int *)(lVar3 + (ulonglong)uVar5 * 8) = (int)lVar9;
                  *(undefined4 *)(lVar3 + 4 + (ulonglong)uVar5 * 8) =
                       *(undefined4 *)(*(longlong *)(lVar2 + 0x38) + 0x10 + lVar7);
                }
              }
              else {
                cVar4 = FUN_144729dda(lVar6 + 8);
                if (cVar4 == '\0') goto LAB_1478d2a1f;
                uVar5 = *(int *)(*(longlong *)(lVar2 + 0x38) + 8 + lVar7) * 2 >> 1;
                if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(lVar6 + 0x18))) {
                  uVar5 = *(uint *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)uVar5 * 4);
                  goto LAB_1478d2a2b;
                }
              }
              lVar8 = lVar8 + 1;
              lVar7 = lVar7 + 0x14;
            } while (lVar8 < *(int *)(lVar2 + 0x40));
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)param_2[1]);
    }
  }
  return;
}



// FUNCTION 1478d2a7e FUN_1478d2a7e body=72 status=ok
// SIG undefined FUN_1478d2a7e(void)

undefined8 * FUN_1478d2a7e(longlong *param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1[3] + (longlong)param_3) == '\0') {
    FUN_1478d3e88(param_1,param_3);
  }
  puVar2 = (undefined8 *)((longlong)param_3 * 0x60 + *param_1);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 1478d2ac6 FUN_1478d2ac6 body=2177 status=ok
// SIG undefined FUN_1478d2ac6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16]
FUN_1478d2ac6(undefined1 (*param_1) [16],longlong param_2,longlong *param_3,uint param_4)

{
  double *pdVar1;
  double dVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  int iVar21;
  longlong lVar22;
  int iVar23;
  undefined8 *puVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar39;
  double dVar40;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar53;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  iVar21 = *(int *)(param_2 + 0x28);
  if (iVar21 <= (int)param_4 || (int)param_4 < 0) {
    puVar24 = &DAT_14c846480;
    for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
      *(undefined8 *)*param_1 = *puVar24;
      puVar24 = puVar24 + 1;
      param_1 = (undefined1 (*) [16])(*param_1 + 8);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_2e8);
  }
  uVar28 = (ulonglong)param_4;
  puVar24 = (undefined8 *)((ulonglong)param_4 * 0x60 + *param_3);
  pauVar25 = param_1;
  for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
    *(undefined8 *)*pauVar25 = *puVar24;
    puVar24 = puVar24 + 1;
    pauVar25 = (undefined1 (*) [16])(*pauVar25 + 8);
  }
  dVar37 = *(double *)*param_1;
  dVar40 = *(double *)(*param_1 + 8);
  auVar34 = param_1[1];
  dVar29 = *(double *)param_1[3];
  dVar32 = *(double *)(param_1[3] + 8);
  dVar16 = *(double *)param_1[4];
  dVar47 = *(double *)(param_1[4] + 8);
  dVar9 = *(double *)param_1[5];
  dVar36 = *(double *)(param_1[5] + 8);
  dVar33 = *(double *)param_1[2];
  dVar35 = *(double *)(param_1[2] + 8);
  while( true ) {
    auVar42 = _DAT_149934d80;
    if (iVar21 <= (int)uVar28) break;
    iVar3 = *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (uVar28 & 0xffffffff) * 0xc);
    uVar28 = (ulonglong)iVar3;
    if (uVar28 == 0xffffffffffffffff) break;
    lVar22 = *param_3;
    lVar27 = uVar28 * 0x60;
    pdVar1 = (double *)(lVar22 + lVar27);
    auVar44 = *(undefined1 (*) [16])(lVar22 + 0x40 + lVar27);
    dVar4 = auVar44._0_8_;
    dVar5 = auVar44._8_8_;
    auVar45 = *(undefined1 (*) [16])(lVar22 + 0x50 + lVar27);
    dVar13 = auVar45._0_8_;
    dVar10 = auVar45._8_8_;
    auVar52._8_8_ = dVar47;
    auVar52._0_8_ = dVar16;
    auVar44 = minpd(auVar52,auVar44);
    local_2b8._8_4_ = SUB84(dVar47,0);
    local_2b8._0_8_ = dVar16;
    local_2b8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
    auVar51._8_8_ = dVar36;
    auVar51._0_8_ = dVar9;
    auVar52 = minpd(auVar51,auVar45);
    auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
    auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
    iVar23 = movmskpd((int)lVar22,auVar45);
    auVar44._8_8_ = -(ulonglong)(auVar52._8_8_ < 0.0);
    auVar44._0_8_ = -(ulonglong)(auVar52._0_8_ < 0.0);
    uVar26 = movmskpd((int)lVar27,auVar44);
    dVar47 = auVar34._0_8_;
    dVar48 = auVar34._8_8_;
    uVar20 = local_2b8._8_8_;
    local_2a8 = dVar33;
    dStack_2a0 = dVar35;
    if ((uVar26 & 0x3fffffff) == 0 && iVar23 == 0) {
      local_2c8._8_4_ = SUB84(dVar36,0);
      local_2c8._0_8_ = dVar9;
      local_2c8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      dVar39 = *pdVar1;
      dVar17 = pdVar1[1];
      dVar18 = pdVar1[2];
      dVar19 = pdVar1[3];
      dVar11 = pdVar1[3];
      dVar12 = pdVar1[3];
      dVar50 = *pdVar1 * dVar40;
      dVar53 = *pdVar1 * dVar37;
      dVar41 = pdVar1[1];
      dVar36 = pdVar1[1];
      dVar6 = dVar37 * dVar41;
      dVar7 = dVar40 * dVar36;
      dVar2 = pdVar1[2];
      dVar15 = pdVar1[2];
      dVar46 = dVar37 * dVar15;
      dVar37 = dVar40 * dVar2 * -1.0 + dVar47 * dVar41 + dVar48 * *pdVar1 * 1.0 + dVar37 * dVar11;
      dVar40 = dVar46 * 1.0 + dVar48 * dVar36 + dVar47 * *pdVar1 * -1.0 + dVar40 * dVar12;
      dVar33 = dVar33 * dVar4;
      dVar35 = dVar35 * dVar5;
      dVar29 = dVar29 * dVar13;
      dVar32 = dVar32 * dVar10;
      dVar36 = dVar35 * dVar39 - dVar33 * dVar17;
      dVar49 = dVar29 * dVar17 - dVar35 * dVar18;
      dVar46 = dVar33 * dVar18 - dVar29 * dVar39;
      dVar41 = dVar32 * dVar19 - dVar32 * dVar19;
      dVar49 = dVar49 + dVar49;
      dVar46 = dVar46 + dVar46;
      dVar36 = dVar36 + dVar36;
      dVar41 = dVar41 + dVar41;
      dVar33 = (dVar36 * dVar17 - dVar18 * dVar46) + dVar11 * dVar49 + dVar33 + pdVar1[4];
      dVar35 = (dVar49 * dVar18 - dVar36 * dVar39) + dVar12 * dVar46 + dVar35 + pdVar1[5];
      dVar29 = (dVar46 * dVar39 - dVar17 * dVar49) + dVar11 * dVar36 + dVar29 + pdVar1[6];
      dVar32 = (dVar41 * dVar19 - dVar41 * dVar19) + dVar12 * dVar41 + dVar32 + pdVar1[7];
      dVar9 = dVar9 * dVar13;
      dVar36 = (double)local_2c8._8_8_ * dVar10;
      auVar34._8_8_ = dVar47 * dVar15 * -1.0 + ((dVar53 * -1.0 + dVar48 * dVar12) - dVar7);
      auVar34._0_8_ = dVar48 * dVar2 * 1.0 + ((dVar50 * 1.0 + dVar47 * dVar11) - dVar6);
    }
    else {
      local_2c8._8_8_ = dVar36 * dVar10;
      local_2c8._0_8_ = dVar9 * dVar13;
      dVar2 = *pdVar1;
      dVar6 = pdVar1[1];
      dVar7 = pdVar1[2];
      dVar39 = dVar6 + dVar6;
      dVar11 = dVar7 + dVar7;
      dVar10 = dVar2 * (dVar2 + dVar2);
      local_1a8 = (1.0 - (dVar10 + dVar6 * dVar39)) * dVar13;
      dVar36 = pdVar1[3];
      dVar12 = dVar11 * dVar36;
      dVar41 = (dVar2 + dVar2) * pdVar1[3];
      dVar36 = dVar39 * dVar36;
      dVar32 = (dVar11 * dVar6 - dVar41) * dVar13;
      dVar15 = (double)local_2b8._8_8_ * dVar5;
      local_1f8 = (1.0 - (dVar7 * dVar11 + dVar6 * dVar39)) * dVar4;
      dVar10 = (1.0 - (dVar7 * dVar11 + dVar10)) * dVar5;
      dStack_1f0 = (dVar39 * dVar2 + dVar12) * dVar4;
      local_1c8 = (dVar11 * dVar6 + dVar41) * dVar5;
      local_1e8 = (*pdVar1 * dVar11 - dVar36) * dVar4;
      uStack_1e0 = 0;
      local_1d8._8_4_ = SUB84(dVar10,0);
      local_1d8._0_8_ = (dVar39 * dVar2 - dVar12) * dVar5;
      local_1d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar32,0);
      local_1b8._0_8_ = (dVar36 + *pdVar1 * dVar11) * dVar13;
      local_1b8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      uStack_1a0 = 0;
      local_198 = pdVar1[4];
      dStack_190 = pdVar1[5];
      local_188 = pdVar1[6];
      uStack_180 = 0x3ff0000000000000;
      dVar32 = dVar40 + dVar40;
      dVar10 = dVar47 + dVar47;
      dVar36 = dVar37 * (dVar37 + dVar37);
      local_228 = (1.0 - (dVar36 + dVar40 * dVar32)) * dVar9;
      dVar11 = (dVar37 + dVar37) * dVar48;
      dVar13 = (dVar10 * dVar40 - dVar11) * dVar9;
      local_278 = ((double)DAT_149934d80 - (dVar47 * dVar10 + dVar40 * dVar32)) * dVar16;
      dVar36 = (DAT_149934d80._8_8_ - (dVar47 * dVar10 + dVar36)) * (double)local_2b8._8_8_;
      dStack_270 = (dVar32 * dVar37 + dVar10 * dVar48) * dVar16;
      local_248 = (dVar10 * dVar40 + dVar11) * (double)local_2b8._8_8_;
      local_268 = (dVar37 * dVar10 - dVar32 * dVar48) * dVar16;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar36,0);
      local_258._0_8_ = (dVar32 * dVar37 - dVar10 * dVar48) * (double)local_2b8._8_8_;
      local_258._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar13,0);
      local_238._0_8_ = (dVar32 * dVar48 + dVar37 * dVar10) * dVar9;
      local_238._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0x3ff0000000000000;
      local_218 = dVar33;
      dStack_210 = dVar35;
      local_208 = dVar29;
      FUN_1447fea8d(&local_178,&local_278,&local_1f8);
      FUN_144a1c686(&local_178,0x3e45798ee0000000);
      auVar30._8_8_ = -(ulonglong)(0.0 <= dVar15);
      auVar30._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar4);
      auVar34 = blendvpd(_DAT_149936790,auVar42,auVar30);
      dVar9 = (double)local_2c8._0_8_;
      dVar36 = (double)local_2c8._8_8_;
      dVar37 = (double)(~-(ulonglong)(0.0 <= (double)local_2c8._0_8_) & 0xbff0000000000000 |
                       -(ulonglong)(0.0 <= (double)local_2c8._0_8_) & 0x3ff0000000000000);
      dVar40 = auVar34._0_8_;
      local_168 = local_168 * dVar40;
      local_170 = local_170 * dVar40;
      local_178 = local_178 * dVar40;
      dVar40 = auVar34._8_8_;
      local_148 = local_148 * dVar40;
      local_150 = local_150 * dVar40;
      local_158 = dVar40 * local_158;
      local_128 = local_128 * dVar37;
      local_130 = local_130 * dVar37;
      local_138 = dVar37 * local_138;
      FUN_14481fd10(&local_298,&local_178);
      dVar37 = local_288 * local_288 + local_298 * local_298;
      dVar40 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar38._0_8_ = dVar37 + dVar40;
      auVar38._8_8_ = dVar37 + dVar40;
      auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
      auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
      auVar34 = sqrtpd(auVar38,auVar38);
      auVar42 = divpd(auVar42,auVar34);
      auVar43._0_8_ = auVar42._0_8_ * local_288;
      auVar43._8_8_ = auVar42._8_8_ * dStack_280;
      auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar31);
      dVar37 = (double)((ulonglong)(local_298 * auVar42._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_));
      dVar40 = (double)((ulonglong)(dStack_290 * auVar42._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_));
      dVar32 = 0.0;
      iVar21 = *(int *)(param_2 + 0x28);
      dVar29 = local_108;
      dVar33 = local_118;
      dVar35 = dStack_110;
    }
    dVar47 = (double)uVar20 * dVar5;
    dVar16 = dVar16 * dVar4;
    if ((iVar3 < 0) || (iVar21 <= iVar3)) break;
  }
  auVar14._8_4_ = SUB84(dVar47,0);
  auVar14._0_8_ = dVar16;
  auVar14._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
  param_1[4] = auVar14;
  auVar8._8_4_ = SUB84(dVar36,0);
  auVar8._0_8_ = dVar9;
  auVar8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  param_1[5] = auVar8;
  param_1[1] = auVar34;
  *(double *)param_1[2] = dVar33;
  *(double *)(param_1[2] + 8) = dVar35;
  *(double *)param_1[3] = dVar29;
  *(double *)(param_1[3] + 8) = dVar32;
  auVar42._8_4_ = SUB84(dVar40,0);
  auVar42._0_8_ = dVar37;
  auVar42._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  *param_1 = auVar42;
  if ((local_f0 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d3348 FUN_1478d3348 body=81 status=ok
// SIG undefined FUN_1478d3348(void)

undefined8 FUN_1478d3348(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(undefined8 *)(param_2 + 0x30);
  local_18 = *(undefined4 *)(param_2 + 0x38);
  FUN_1478d2ac6();
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d339a FUN_1478d339a body=1957 status=ok
// SIG undefined FUN_1478d339a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1478d339a(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,
                      longlong *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double *pdVar18;
  longlong lVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  double dVar30;
  undefined1 auVar29 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_2b8 [32];
  longlong *local_298;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  undefined1 local_248 [16];
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
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
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar26 = (longlong)(int)param_3;
  if (*(char *)(*param_5 + lVar26) == '\0') {
    *(undefined1 *)(*param_5 + lVar26) = 1;
    lVar25 = lVar26 * 0x60;
    puVar21 = &DAT_14c846480;
    puVar22 = (undefined8 *)(*param_4 + lVar25);
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *puVar22 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar22 = puVar22 + 1;
    }
    if ((-1 < (int)param_3) && ((int)param_3 < *(int *)(param_1 + 0x28))) {
      iVar23 = *(int *)(*(longlong *)(param_1 + 0x20) + 8 + (ulonglong)param_3 * 0xc);
      if (iVar23 == -1) {
        puVar21 = (undefined8 *)(*param_2 + lVar26 * 0x60);
        puVar22 = (undefined8 *)(lVar26 * 0x60 + *param_4);
        for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
          *puVar22 = *puVar21;
          puVar21 = puVar21 + 1;
          puVar22 = puVar22 + 1;
        }
      }
      else {
        local_298 = param_5;
        pdVar18 = (double *)FUN_1478d339a(param_1,param_2,iVar23,param_4);
        auVar42 = _DAT_149934d80;
        lVar19 = *param_2;
        pdVar1 = (double *)(lVar19 + lVar25);
        auVar33 = *(undefined1 (*) [16])(pdVar18 + 8);
        dVar6 = auVar33._0_8_;
        dVar10 = auVar33._8_8_;
        auVar4 = *(undefined1 (*) [16])(pdVar18 + 10);
        dVar7 = auVar4._0_8_;
        auVar34 = *(undefined1 (*) [16])(lVar19 + 0x40 + lVar25);
        dVar8 = auVar34._0_8_;
        dVar11 = auVar34._8_8_;
        auVar5 = *(undefined1 (*) [16])(lVar19 + 0x50 + lVar25);
        dVar9 = auVar5._0_8_;
        auVar33 = minpd(auVar34,auVar33);
        auVar37 = minpd(auVar5,auVar4);
        auVar34._8_8_ = -(ulonglong)(auVar33._8_8_ < 0.0);
        auVar34._0_8_ = -(ulonglong)(auVar33._0_8_ < 0.0);
        iVar20 = movmskpd((int)lVar19,auVar34);
        auVar33._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
        auVar33._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
        uVar24 = movmskpd(iVar23,auVar33);
        if ((uVar24 & 0x3fffffff) == 0 && iVar20 == 0) {
          dVar35 = *pdVar1;
          dVar39 = pdVar1[1];
          dVar40 = pdVar1[2];
          dVar41 = pdVar1[3];
          dVar14 = *pdVar18;
          dVar15 = pdVar18[1];
          dVar16 = pdVar18[2];
          dVar17 = pdVar18[3];
          dVar30 = pdVar18[3];
          dVar31 = pdVar18[3];
          dVar13 = pdVar18[1];
          dVar2 = pdVar18[1];
          dVar3 = pdVar18[2];
          dVar38 = pdVar18[2];
          dVar32 = dVar39 * dVar3 * -1.0 +
                   dVar40 * dVar13 + dVar41 * *pdVar18 * 1.0 + dVar35 * dVar30;
          dVar36 = dVar35 * dVar38 * 1.0 +
                   dVar41 * dVar2 + dVar40 * *pdVar18 * -1.0 + dVar39 * dVar31;
          auVar42._0_8_ =
               dVar41 * dVar3 * 1.0 +
               ((*pdVar18 * dVar39 * 1.0 + dVar40 * dVar30) - dVar35 * dVar13);
          auVar42._8_8_ =
               dVar40 * dVar38 * -1.0 +
               ((*pdVar18 * dVar35 * -1.0 + dVar41 * dVar31) - dVar39 * dVar2);
          dVar38 = pdVar1[4] * dVar6;
          dVar35 = pdVar1[5] * dVar10;
          dVar39 = pdVar1[6] * dVar7;
          dVar40 = pdVar1[7] * auVar4._8_8_;
          dVar13 = dVar35 * dVar14 - dVar15 * dVar38;
          dVar2 = dVar39 * dVar15 - dVar16 * dVar35;
          dVar3 = dVar38 * dVar16 - dVar14 * dVar39;
          dVar41 = dVar40 * dVar17 - dVar17 * dVar40;
          dVar2 = dVar2 + dVar2;
          dVar3 = dVar3 + dVar3;
          dVar13 = dVar13 + dVar13;
          dVar41 = dVar41 + dVar41;
          local_108 = (dVar13 * dVar15 - dVar16 * dVar3) + dVar30 * dVar2 + dVar38 + pdVar18[4];
          dStack_100 = (dVar2 * dVar16 - dVar13 * dVar14) + dVar31 * dVar3 + dVar35 + pdVar18[5];
          local_f8 = (dVar3 * dVar14 - dVar15 * dVar2) + dVar30 * dVar13 + dVar39 + pdVar18[6];
          dVar31 = (dVar41 * dVar17 - dVar41 * dVar17) + dVar31 * dVar41 + dVar40 + pdVar18[7];
        }
        else {
          dVar2 = *pdVar18;
          dVar3 = pdVar18[1];
          dVar38 = pdVar18[2];
          dVar35 = dVar3 + dVar3;
          dVar39 = dVar38 + dVar38;
          dVar30 = dVar2 * (dVar2 + dVar2);
          local_198 = (1.0 - (dVar30 + dVar3 * dVar35)) * dVar7;
          dVar31 = pdVar18[3];
          dVar40 = dVar39 * dVar31;
          dVar41 = (dVar2 + dVar2) * pdVar18[3];
          dVar31 = dVar35 * dVar31;
          local_1a8 = (dVar31 + *pdVar18 * dVar39) * dVar7;
          dVar30 = (DAT_149934d80._8_8_ - (dVar38 * dVar39 + dVar30)) * dVar10;
          dVar13 = (dVar35 * dVar2 + dVar40) * dVar6;
          local_1b8 = (dVar39 * dVar3 + dVar41) * dVar10;
          dStack_1a0 = (dVar39 * dVar3 - dVar41) * dVar7;
          local_1d8 = (*pdVar18 * dVar39 - dVar31) * dVar6;
          local_1e8._8_4_ = SUB84(dVar13,0);
          local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar38 * dVar39 + dVar3 * dVar35)) * dVar6;
          local_1e8._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
          uStack_1d0 = 0;
          local_1c8._8_4_ = SUB84(dVar30,0);
          local_1c8._0_8_ = (dVar35 * dVar2 - dVar40) * dVar10;
          local_1c8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          uStack_1b0 = 0;
          uStack_190 = 0;
          local_188 = pdVar18[4];
          dStack_180 = pdVar18[5];
          local_178 = pdVar18[6];
          uStack_170 = 0x3ff0000000000000;
          dVar13 = *pdVar1;
          dVar2 = pdVar1[1];
          dVar3 = pdVar1[2];
          dVar38 = dVar2 + dVar2;
          dVar35 = dVar3 + dVar3;
          dVar30 = dVar13 * (dVar13 + dVar13);
          local_218 = (1.0 - (dVar30 + dVar2 * dVar38)) * dVar9;
          dVar31 = pdVar1[3];
          dVar39 = dVar35 * dVar31;
          dVar40 = (dVar13 + dVar13) * pdVar1[3];
          dVar31 = dVar38 * dVar31;
          local_228 = (dVar31 + *pdVar1 * dVar35) * dVar9;
          dStack_220 = (dVar35 * dVar2 - dVar40) * dVar9;
          local_268 = ((double)DAT_149934d80 - (dVar3 * dVar35 + dVar2 * dVar38)) * dVar8;
          dVar30 = (DAT_149934d80._8_8_ - (dVar3 * dVar35 + dVar30)) * dVar11;
          dStack_260 = (dVar38 * dVar13 + dVar39) * dVar8;
          local_238 = (dVar35 * dVar2 + dVar40) * dVar11;
          local_258 = (*pdVar1 * dVar35 - dVar31) * dVar8;
          uStack_250 = 0;
          local_248._8_4_ = SUB84(dVar30,0);
          local_248._0_8_ = (dVar38 * dVar13 - dVar39) * dVar11;
          local_248._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          uStack_230 = 0;
          uStack_210 = 0;
          local_208 = pdVar1[4];
          dStack_200 = pdVar1[5];
          local_1f8 = pdVar1[6];
          uStack_1f0 = 0x3ff0000000000000;
          FUN_1447fea8d(&local_168);
          FUN_144a1c686(&local_168,0x3e45798ee0000000);
          auVar37._8_8_ = -(ulonglong)(0.0 <= dVar10 * dVar11);
          auVar37._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
          auVar33 = blendvpd(_DAT_149936790,auVar42,auVar37);
          uVar27 = -(ulonglong)(0.0 <= dVar7 * dVar9);
          dVar31 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
          dVar30 = auVar33._0_8_;
          local_158 = local_158 * dVar30;
          local_160 = local_160 * dVar30;
          local_168 = local_168 * dVar30;
          dVar30 = auVar33._8_8_;
          local_138 = local_138 * dVar30;
          local_140 = local_140 * dVar30;
          local_148 = dVar30 * local_148;
          local_118 = local_118 * dVar31;
          local_120 = local_120 * dVar31;
          local_128 = dVar31 * local_128;
          FUN_14481fd10(&local_288,&local_168);
          dVar31 = local_278 * local_278 + local_288 * local_288;
          dVar30 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
          auVar29._0_8_ = dVar31 + dVar30;
          auVar29._8_8_ = dVar31 + dVar30;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
          auVar33 = sqrtpd(auVar29,auVar29);
          auVar33 = divpd(auVar42,auVar33);
          auVar43._0_8_ = auVar33._0_8_ * local_278;
          auVar43._8_8_ = auVar33._8_8_ * dStack_270;
          dVar32 = (double)((ulonglong)(local_288 * auVar33._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
          dVar36 = (double)((ulonglong)(dStack_280 * auVar33._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
          auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar28);
          dVar31 = 0.0;
        }
        dVar30 = auVar4._8_8_ * auVar5._8_8_;
        lVar19 = *param_4;
        *(double *)(lVar19 + lVar25) = dVar32;
        ((double *)(lVar19 + lVar25))[1] = dVar36;
        *(undefined1 (*) [16])(lVar19 + 0x10 + lVar25) = auVar42;
        auVar5._8_4_ = SUB84(dStack_100,0);
        auVar5._0_8_ = local_108;
        auVar5._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
        *(undefined1 (*) [16])(lVar19 + 0x20 + lVar25) = auVar5;
        pdVar1 = (double *)(lVar19 + 0x30 + lVar25);
        *pdVar1 = local_f8;
        pdVar1[1] = dVar31;
        auVar12._8_4_ = SUB84(dVar10 * dVar11,0);
        auVar12._0_8_ = dVar6 * dVar8;
        auVar12._12_4_ = (int)((ulonglong)(dVar10 * dVar11) >> 0x20);
        *(undefined1 (*) [16])(lVar19 + 0x40 + lVar25) = auVar12;
        auVar4._8_4_ = SUB84(dVar30,0);
        auVar4._0_8_ = dVar7 * dVar9;
        auVar4._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        *(undefined1 (*) [16])(lVar19 + 0x50 + lVar25) = auVar4;
      }
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return lVar26 * 0x60 + *param_4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d3b40 FUN_1478d3b40 body=746 status=ok
// SIG undefined FUN_1478d3b40(void)

void FUN_1478d3b40(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong *puVar5;
  uint uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_128 [32];
  longlong *local_108;
  ulonglong local_100;
  int local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  uint uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 local_a4 [4];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar2 = local_d8;
  if ((param_1 != (longlong *)0x0) && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    lVar4 = (**(code **)(*param_1 + 0x430))();
    iVar9 = *(int *)(lVar4 + 8);
    FUN_144aa29e6(param_4,iVar9,1);
    uVar2 = local_d8;
    if (iVar9 != 0) {
      fVar10 = (float)FUN_147d218e0();
      plVar1 = param_2 + 2;
      local_c8 = (ulonglong *)&DAT_100000000;
      local_b8 = 0xffffffff;
      uStack_b0 = 0;
      uStack_c0 = plVar1;
      if ((int)param_2[5] == 0) {
        iVar9 = 0;
      }
      else {
        FUN_1449c0562(&local_c8);
        iVar9 = (int)param_2[5];
      }
      local_e8 = (undefined4)local_c8;
      uStack_e4 = local_c8._4_4_;
      uStack_e0 = (undefined4)uStack_c0;
      uStack_dc = uStack_c0._4_4_;
      uStack_d0 = CONCAT44(uStack_ac,uStack_b0);
      local_d8 = local_b8;
      uVar2 = local_d8;
      local_d8._4_4_ = (int)((ulonglong)local_b8 >> 0x20);
      local_f0 = param_2;
      if ((local_d8._4_4_ != iVar9) || (uStack_c0 != plVar1)) {
        local_108 = param_3 + 7;
        iVar3 = local_d8._4_4_;
        local_d8 = uVar2;
        do {
          fVar11 = *(float *)(*local_f0 + 8 + (longlong)iVar3 * 0x14);
          local_f4 = -1;
          local_100 = FUN_147d15074(param_1,*(undefined8 *)(*local_f0 + (longlong)iVar3 * 0x14),
                                    &local_f4);
          if (local_100 != 0) {
            if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
              uVar6 = ((uint)(local_100 >> 0x14) & 0xffff ^ (uint)(local_100 >> 4)) * -0x7a143595;
              uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
              plVar8 = (longlong *)param_3[8];
              if ((longlong *)param_3[8] == (longlong *)0x0) {
                plVar8 = local_108;
              }
              iVar3 = *(int *)((longlong)plVar8 +
                              (ulonglong)((int)param_3[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
              if (iVar3 != -1) {
                do {
                  puVar7 = (ulonglong *)(*param_3 + (longlong)iVar3 * 0x18);
                  if (*puVar7 == local_100) goto LAB_1478d3d04;
                  iVar3 = (int)puVar7[2];
                } while (iVar3 != -1);
              }
            }
            puVar7 = (ulonglong *)0x0;
LAB_1478d3d04:
            puVar5 = puVar7 + 1;
            if (puVar7 == (ulonglong *)0x0) {
              puVar5 = (ulonglong *)0x0;
            }
            if (ABS(fVar11) <= 1e-08) {
              fVar11 = 0.0;
              if (puVar5 == (ulonglong *)0x0) goto LAB_1478d3de4;
            }
            else {
              if (fVar10 <= fVar11) {
                fVar11 = fVar10;
              }
              if (fVar11 <= -fVar10) {
                fVar11 = -fVar10;
              }
              if (puVar5 == (ulonglong *)0x0) {
                local_c8 = &local_100;
                uStack_c0 = (longlong *)&local_f4;
                FUN_1478ddf56(param_3,local_a4,&local_c8,0);
              }
            }
            *(float *)(*param_4 + (longlong)local_f4 * 4) = fVar11;
          }
LAB_1478d3de4:
          local_d8 = CONCAT44(local_d8._4_4_,(uint)local_d8 & ~uStack_e4);
          FUN_1449c0562(&local_e8);
          iVar3 = local_d8._4_4_;
          uVar2 = local_d8;
        } while (local_f0 != param_2 ||
                 ((longlong *)CONCAT44(uStack_dc,uStack_e0) != plVar1 || local_d8._4_4_ != iVar9));
      }
    }
  }
  local_d8 = uVar2;
  if ((local_a0 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478d3e2c FUN_1478d3e2c body=91 status=ok
// SIG undefined FUN_1478d3e2c(void)

void FUN_1478d3e2c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  FUN_144756208(param_1,param_3);
  local_11 = 0;
  FUN_141724bc2(param_1 + 0x18,&local_11,*(undefined4 *)(param_1 + 8));
  **(undefined1 **)(param_1 + 0x18) = 1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d3e88 FUN_1478d3e88 body=1970 status=ok
// SIG undefined FUN_1478d3e88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1478d3e88(longlong *param_1,int param_2)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  undefined1 auVar24 [16];
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStack_298 [32];
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  iVar15 = FUN_1434175de(param_1[2]);
  if (*(char *)(param_1[3] + (longlong)iVar15) == '\0') {
    FUN_1478d3e88(param_1,iVar15);
  }
  auVar42 = _DAT_149934d80;
  lVar16 = *param_1;
  lVar20 = (longlong)param_2;
  lVar17 = lVar20 * 0x60;
  pdVar1 = (double *)(lVar16 + lVar17);
  lVar19 = (longlong)iVar15 * 0x60;
  pdVar2 = (double *)(lVar16 + lVar19);
  auVar29 = *(undefined1 (*) [16])(lVar16 + 0x40 + lVar19);
  dVar6 = auVar29._0_8_;
  dVar28 = auVar29._8_8_;
  auVar36 = *(undefined1 (*) [16])(lVar16 + 0x50 + lVar19);
  dVar7 = auVar36._0_8_;
  auVar30 = *(undefined1 (*) [16])(lVar16 + 0x40 + lVar17);
  dVar8 = auVar30._0_8_;
  dVar34 = auVar30._8_8_;
  auVar5 = *(undefined1 (*) [16])(lVar16 + 0x50 + lVar17);
  dVar9 = auVar5._0_8_;
  auVar29 = minpd(auVar30,auVar29);
  auVar35 = minpd(auVar5,auVar36);
  auVar30._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  iVar15 = movmskpd((int)lVar17,auVar30);
  auVar29._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
  auVar29._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
  uVar18 = movmskpd((int)lVar19,auVar29);
  if ((uVar18 & 0x3fffffff) == 0 && iVar15 == 0) {
    dVar32 = *pdVar1;
    dVar39 = pdVar1[1];
    dVar40 = pdVar1[2];
    dVar41 = pdVar1[3];
    dVar11 = *pdVar2;
    dVar12 = pdVar2[1];
    dVar13 = pdVar2[2];
    dVar14 = pdVar2[3];
    dVar25 = pdVar2[3];
    dVar26 = pdVar2[3];
    dVar10 = pdVar2[1];
    dVar3 = pdVar2[1];
    dVar38 = pdVar2[2];
    dVar4 = pdVar2[2];
    dVar27 = dVar39 * dVar38 * -1.0 + dVar40 * dVar10 + dVar41 * *pdVar2 * 1.0 + dVar32 * dVar25;
    dVar33 = dVar32 * dVar4 * 1.0 + dVar41 * dVar3 + dVar40 * *pdVar2 * -1.0 + dVar39 * dVar26;
    auVar42._0_8_ =
         dVar41 * dVar38 * 1.0 + ((*pdVar2 * dVar39 * 1.0 + dVar40 * dVar25) - dVar32 * dVar10);
    auVar42._8_8_ =
         dVar40 * dVar4 * -1.0 + ((*pdVar2 * dVar32 * -1.0 + dVar41 * dVar26) - dVar39 * dVar3);
    dVar10 = pdVar1[4] * dVar6;
    dVar3 = pdVar1[5] * dVar28;
    dVar4 = pdVar1[6] * dVar7;
    dVar38 = pdVar1[7] * auVar36._8_8_;
    dVar40 = dVar3 * dVar11 - dVar12 * dVar10;
    dVar41 = dVar4 * dVar12 - dVar13 * dVar3;
    dVar32 = dVar10 * dVar13 - dVar11 * dVar4;
    dVar39 = dVar38 * dVar14 - dVar14 * dVar38;
    dVar41 = dVar41 + dVar41;
    dVar32 = dVar32 + dVar32;
    dVar40 = dVar40 + dVar40;
    dVar39 = dVar39 + dVar39;
    local_f8 = (dVar40 * dVar12 - dVar13 * dVar32) + dVar25 * dVar41 + dVar10 + pdVar2[4];
    dStack_f0 = (dVar41 * dVar13 - dVar40 * dVar11) + dVar26 * dVar32 + dVar3 + pdVar2[5];
    local_e8 = (dVar32 * dVar11 - dVar12 * dVar41) + dVar25 * dVar40 + dVar4 + pdVar2[6];
    dVar26 = (dVar39 * dVar14 - dVar39 * dVar14) + dVar26 * dVar39 + dVar38 + pdVar2[7];
  }
  else {
    dVar3 = *pdVar2;
    dVar4 = pdVar2[1];
    dVar38 = pdVar2[2];
    dVar32 = dVar4 + dVar4;
    dVar39 = dVar38 + dVar38;
    dVar25 = dVar3 * (dVar3 + dVar3);
    local_188 = (1.0 - (dVar25 + dVar4 * dVar32)) * dVar7;
    dVar26 = pdVar2[3];
    dVar40 = dVar39 * dVar26;
    dVar41 = (dVar3 + dVar3) * pdVar2[3];
    dVar26 = dVar32 * dVar26;
    local_198 = (dVar26 + *pdVar2 * dVar39) * dVar7;
    dVar25 = (DAT_149934d80._8_8_ - (dVar38 * dVar39 + dVar25)) * dVar28;
    dVar10 = (dVar32 * dVar3 + dVar40) * dVar6;
    local_1a8 = (dVar39 * dVar4 + dVar41) * dVar28;
    dStack_190 = (dVar39 * dVar4 - dVar41) * dVar7;
    local_1c8 = (*pdVar2 * dVar39 - dVar26) * dVar6;
    local_1d8._8_4_ = SUB84(dVar10,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar38 * dVar39 + dVar4 * dVar32)) * dVar6;
    local_1d8._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar25,0);
    local_1b8._0_8_ = (dVar32 * dVar3 - dVar40) * dVar28;
    local_1b8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = pdVar2[4];
    dStack_170 = pdVar2[5];
    local_168 = pdVar2[6];
    uStack_160 = 0x3ff0000000000000;
    dVar10 = *pdVar1;
    dVar3 = pdVar1[1];
    dVar4 = pdVar1[2];
    dVar38 = dVar3 + dVar3;
    dVar32 = dVar4 + dVar4;
    dVar25 = dVar10 * (dVar10 + dVar10);
    local_208 = (1.0 - (dVar25 + dVar3 * dVar38)) * dVar9;
    dVar26 = pdVar1[3];
    dVar39 = dVar32 * dVar26;
    dVar40 = (dVar10 + dVar10) * pdVar1[3];
    dVar26 = dVar38 * dVar26;
    local_218 = (dVar26 + *pdVar1 * dVar32) * dVar9;
    dStack_210 = (dVar32 * dVar3 - dVar40) * dVar9;
    local_258 = ((double)DAT_149934d80 - (dVar4 * dVar32 + dVar3 * dVar38)) * dVar8;
    dVar25 = (DAT_149934d80._8_8_ - (dVar4 * dVar32 + dVar25)) * dVar34;
    dStack_250 = (dVar38 * dVar10 + dVar39) * dVar8;
    local_228 = (dVar32 * dVar3 + dVar40) * dVar34;
    local_248 = (*pdVar1 * dVar32 - dVar26) * dVar8;
    uStack_240 = 0;
    local_238._8_4_ = SUB84(dVar25,0);
    local_238._0_8_ = (dVar38 * dVar10 - dVar39) * dVar34;
    local_238._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = pdVar1[4];
    dStack_1f0 = pdVar1[5];
    local_1e8 = pdVar1[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar35._8_8_ = -(ulonglong)(0.0 <= dVar28 * dVar34);
    auVar35._0_8_ = -(ulonglong)(0.0 <= dVar6 * dVar8);
    auVar29 = blendvpd(_DAT_149936790,auVar42,auVar35);
    uVar21 = -(ulonglong)(0.0 <= dVar7 * dVar9);
    dVar26 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar25 = auVar29._0_8_;
    local_148 = local_148 * dVar25;
    local_150 = local_150 * dVar25;
    local_158 = local_158 * dVar25;
    dVar25 = auVar29._8_8_;
    local_128 = local_128 * dVar25;
    local_130 = local_130 * dVar25;
    local_138 = dVar25 * local_138;
    local_108 = local_108 * dVar26;
    local_110 = local_110 * dVar26;
    local_118 = dVar26 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar26 = local_268 * local_268 + local_278 * local_278;
    dVar25 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar24._0_8_ = dVar26 + dVar25;
    auVar24._8_8_ = dVar26 + dVar25;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_);
    auVar29 = sqrtpd(auVar24,auVar24);
    auVar29 = divpd(auVar42,auVar29);
    auVar43._0_8_ = auVar29._0_8_ * local_268;
    auVar43._8_8_ = auVar29._8_8_ * dStack_260;
    dVar27 = (double)((ulonglong)(local_278 * auVar29._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar24._0_8_));
    dVar33 = (double)((ulonglong)(dStack_270 * auVar29._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar24._8_8_));
    auVar42 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar43,auVar22);
    dVar26 = 0.0;
    lVar16 = *param_1;
  }
  dVar25 = auVar36._8_8_ * auVar5._8_8_;
  lVar17 = lVar20 * 0x60;
  *(double *)(lVar16 + lVar17) = dVar27;
  ((double *)(lVar16 + lVar17))[1] = dVar33;
  *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) = auVar42;
  pdVar1 = (double *)(lVar16 + 0x20 + lVar17);
  *pdVar1 = local_f8;
  pdVar1[1] = dStack_f0;
  pdVar1 = (double *)(lVar16 + 0x30 + lVar17);
  *pdVar1 = local_e8;
  pdVar1[1] = dVar26;
  auVar5._8_4_ = SUB84(dVar28 * dVar34,0);
  auVar5._0_8_ = dVar6 * dVar8;
  auVar5._12_4_ = (int)((ulonglong)(dVar28 * dVar34) >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 0x40 + lVar17) = auVar5;
  auVar36._8_4_ = SUB84(dVar25,0);
  auVar36._0_8_ = dVar7 * dVar9;
  auVar36._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
  *(undefined1 (*) [16])(lVar16 + 0x50 + lVar17) = auVar36;
  lVar16 = *param_1;
  dVar6 = *(double *)(lVar16 + lVar17);
  dVar7 = ((double *)(lVar16 + lVar17))[1];
  pdVar1 = (double *)(lVar16 + 0x10 + lVar17);
  dVar8 = *pdVar1;
  dVar9 = pdVar1[1];
  dVar28 = dVar8 * dVar8 + dVar6 * dVar6;
  dVar34 = dVar9 * dVar9 + dVar7 * dVar7;
  auVar31._0_8_ = dVar28 + dVar34;
  auVar31._8_8_ = dVar28 + dVar34;
  auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar31._8_8_);
  auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar31._0_8_);
  auVar29 = sqrtpd(auVar31,auVar31);
  auVar36 = divpd(_DAT_149934d80,auVar29);
  auVar37._0_8_ = auVar36._0_8_ * dVar8;
  auVar37._8_8_ = auVar36._8_8_ * dVar9;
  auVar29 = blendvpd(_DAT_149935300,auVar37,auVar23);
  *(ulonglong *)(lVar16 + lVar17) =
       (ulonglong)(dVar6 * auVar36._0_8_) & -(ulonglong)(1e-08 <= auVar31._0_8_);
  ((ulonglong *)(lVar16 + lVar17))[1] =
       (ulonglong)(dVar7 * auVar36._8_8_) & -(ulonglong)(1e-08 <= auVar31._8_8_);
  *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) = auVar29;
  *(undefined1 *)(param_1[3] + lVar20) = 1;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d463c FUN_1478d463c body=107 status=ok
// SIG undefined FUN_1478d463c(void)

void FUN_1478d463c(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  if ((longlong)(int)param_3[1] != 0) {
    lVar2 = (longlong)(int)param_3[1] * 2;
    lVar1 = 0;
    do {
      if (*(ushort *)(*param_3 + lVar1 * 2) == param_2) {
        local_1c = (undefined4)lVar1;
        break;
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -2;
    } while (lVar2 != 0);
  }
  (**(code **)(*param_1 + 0x10))();
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1478d46a8 FUN_1478d46a8 body=534 status=ok
// SIG undefined FUN_1478d46a8(void)

ulonglong * FUN_1478d46a8(ulonglong *param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  double dVar2;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  if (param_3 == 3) {
    dVar2 = (double)FUN_144719204(*param_1 ^ 0x8000000000000000);
    dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                    (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
    *param_1 = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
               (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
    dVar2 = 180.0 - (double)param_1[2];
  }
  else if (param_3 == 2) {
    dVar2 = (double)FUN_144719204(param_1[1] ^ 0x8000000000000000);
    dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                    (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
    param_1[1] = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                 (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
    dVar2 = -(double)param_1[2];
  }
  else {
    if (param_3 != 1) {
      return param_1;
    }
    dVar2 = (double)FUN_144719204(180.0 - (double)param_1[1]);
    dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                    (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
    param_1[1] = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                 (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
    dVar2 = -(double)param_1[2];
  }
  dVar2 = (double)FUN_144719204(dVar2);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  param_1[2] = ~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
               (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2);
  return param_1;
}



// FUNCTION 1478d48be FUN_1478d48be body=117 status=ok
// SIG undefined FUN_1478d48be(void)

void FUN_1478d48be(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1478d4934(param_1,&local_28);
  FUN_1410e5bda(param_3,&local_28);
  FUN_1447a1747(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d4934 FUN_1478d4934 body=284 status=ok
// SIG undefined FUN_1478d4934(void)

undefined8 FUN_1478d4934(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [40];
  ulonglong ***local_a0;
  ulonglong *local_98;
  ulonglong **local_90 [2];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1400021e4(param_1 + 0x58,local_90);
  FUN_1400021e4(param_1 + 0x60,local_80);
  FUN_1400021e4(param_1 + 0x68,local_70);
  FUN_1400021e4(param_1 + 0x70,local_60);
  FUN_1400021e4(param_1 + 0x78,local_50);
  FUN_1400021e4(param_1 + 0x80,local_40);
  FUN_1400021e4(param_1 + 0x88,local_30);
  local_98 = &local_20;
  local_a0 = local_90;
  FUN_141469cae(param_2);
  lVar1 = 0x70;
  do {
    if (*(longlong *)((longlong)&local_a0 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0);
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x90);
    lVar2 = (longlong)*(int *)(param_1 + 0x98) << 5;
    do {
      FUN_1412fabe8(param_2,lVar1);
      lVar1 = lVar1 + 0x20;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d4a86 FUN_1478d4a86 body=8 status=ok
// SIG undefined FUN_1478d4a86(void)

longlong FUN_1478d4a86(longlong param_1)

{
  return param_1 + 0x138;
}



// FUNCTION 1478d4a8e FUN_1478d4a8e body=94 status=ok
// SIG undefined FUN_1478d4a8e(void)

undefined8 * FUN_1478d4a8e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1478d4aec(param_1);
  return param_1;
}



// FUNCTION 1478d4aec FUN_1478d4aec body=87 status=ok
// SIG undefined FUN_1478d4aec(void)

void FUN_1478d4aec(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  
  plVar1 = (longlong *)(param_1 + 0x50);
  uVar2 = *(uint *)(param_1 + 0x5c);
  iVar3 = 0;
  if ((int)uVar2 < 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN_14480809c(plVar1,0);
    iVar3 = *(int *)(param_1 + 0x58);
    uVar2 = *(uint *)(param_1 + 0x5c);
  }
  *(uint *)(param_1 + 0x58) = iVar3 + 1U;
  if (uVar2 < iVar3 + 1U) {
    FUN_1447808da(plVar1,iVar3);
  }
  *(undefined4 *)(*plVar1 + (longlong)iVar3 * 4) = 0;
  return;
}



// FUNCTION 1478d4b44 FUN_1478d4b44 body=86 status=ok
// SIG undefined FUN_1478d4b44(void)

void FUN_1478d4b44(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478d4b9a FUN_1478d4b9a body=85 status=ok
// SIG undefined FUN_1478d4b9a(void)

void FUN_1478d4b9a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = 2;
  do {
    FUN_1433cfa4c(param_1,0);
    bVar1 = FUN_1478d4bf0(param_1);
    bVar5 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while ((bVar1 & bVar5) != 0);
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = (longlong)*(int *)(param_1 + 0x10) << 5;
    do {
      FUN_1478d4e56(lVar2);
      lVar2 = lVar2 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1478d4bf0 FUN_1478d4bf0 body=613 status=ok
// SIG undefined FUN_1478d4bf0(void)

byte FUN_1478d4bf0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  void *_Src;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  int *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*param_1 == 0) {
    bVar9 = 0;
  }
  else {
    iVar6 = (int)param_1[2];
    if (0 < iVar6) {
      lVar11 = 0;
      do {
        if ((longlong)(int)param_1[0xd] != 0) {
          lVar12 = lVar11 * 0x20;
          lVar1 = param_1[1];
          piVar8 = (int *)(lVar1 + lVar12 + 0x18);
          lVar10 = 0;
          do {
            if (*(int *)(param_1[0xc] + lVar10) == *piVar8) {
              local_58 = piVar8;
              FUN_140b16dce(param_1 + 8,&local_58);
              FUN_1478d4e56(lVar1 + lVar12);
              EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              iVar6 = (int)param_1[2];
              iVar7 = ~(uint)lVar11 + iVar6;
              if (iVar7 != 0) {
                if (0 < iVar7) {
                  iVar7 = 1;
                }
                memmove((void *)(lVar12 + param_1[1]),
                        (void *)((longlong)(iVar6 - iVar7) * 0x20 + param_1[1]),(longlong)iVar7 << 5
                       );
                iVar6 = (int)param_1[2];
              }
              *(int *)(param_1 + 2) = iVar6 + -1;
              LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
              iVar6 = (int)param_1[2];
              break;
            }
            lVar10 = lVar10 + 4;
          } while ((longlong)(int)param_1[0xd] * 4 != lVar10);
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < iVar6);
    }
    if (*(int *)((longlong)param_1 + 0x6c) < 0) {
      *(undefined4 *)(param_1 + 0xd) = 0;
      FUN_14480809c(param_1 + 0xc,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xd) = 0;
    }
    local_58 = (int *)0x0;
    uStack_50 = 0;
    local_68[0] = 0;
    local_68[1] = 0;
    cVar4 = FUN_1478d4f34(param_1);
    if (cVar4 == '\0') {
      bVar9 = 0;
    }
    else {
      lVar11 = param_1[2];
      if ((longlong)(int)lVar11 == 0) {
        bVar9 = 0;
      }
      else {
        lVar1 = param_1[1];
        lVar10 = 0;
        bVar9 = 0;
        do {
          plVar2 = *(longlong **)(lVar1 + 8 + lVar10);
          if (plVar2 != (longlong *)0x0) {
            bVar5 = (**(code **)(*plVar2 + 8))();
            bVar9 = bVar9 | bVar5 ^ 1;
            if (((bVar5 ^ 1) == 0) &&
               (plVar2 = *(longlong **)(lVar1 + 8 + lVar10), plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x10))(plVar2,0);
              puVar3 = *(undefined8 **)(lVar1 + 8 + lVar10);
              if (puVar3 != (undefined8 *)0x0) {
                (**(code **)*puVar3)(puVar3,1);
              }
              *(undefined8 *)(lVar1 + 8 + lVar10) = 0;
            }
          }
          lVar10 = lVar10 + 0x20;
        } while ((longlong)(int)lVar11 * 0x20 != lVar10);
      }
      iVar6 = (int)param_1[0xb];
      _Src = (void *)param_1[10];
      *(int *)(param_1 + 9) = iVar6;
      if (iVar6 == 0 && *(int *)((longlong)param_1 + 0x4c) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
      }
      else {
        FUN_1447bda9e(param_1 + 8,iVar6);
        if (iVar6 != 0) {
          memcpy((void *)param_1[8],_Src,(longlong)iVar6 << 2);
        }
      }
      FUN_1433cfc66(param_1,&local_58,local_68);
    }
    FUN_1478d4aec(param_1);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58 != (int *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar9 & 1;
}



// FUNCTION 1478d4e56 FUN_1478d4e56 body=117 status=ok
// SIG undefined FUN_1478d4e56(void)

longlong FUN_1478d4e56(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((longlong *)param_1[1] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[1] + 0x28))();
    (**(code **)(*(longlong *)param_1[1] + 0x10))((longlong *)param_1[1],0);
    puVar1 = (undefined8 *)param_1[1];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[1] = 0;
  }
  if ((*(char *)((longlong)param_1 + 0x1c) == '\x01') && (lVar2 = *param_1, lVar2 != 0)) {
    FUN_1402d524c(lVar2);
    FUN_1400020a8(lVar2);
  }
  LOCK();
  lVar2 = *param_1;
  *param_1 = 0;
  UNLOCK();
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return lVar2;
}



// FUNCTION 1478d4ecc FUN_1478d4ecc body=104 status=ok
// SIG undefined FUN_1478d4ecc(void)

longlong FUN_1478d4ecc(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  iVar1 = *(int *)(param_1 + 0x10);
  FUN_1478d5064(param_1 + 8);
  lVar3 = (longlong)iVar1 * 0x20;
  LOCK();
  *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar3) = param_3;
  UNLOCK();
  *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x1c + lVar3) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x18 + lVar3) = param_2;
  lVar2 = *(longlong *)(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return lVar3 + lVar2;
}



// FUNCTION 1478d4f34 FUN_1478d4f34 body=303 status=ok
// SIG undefined FUN_1478d4f34(void)

bool FUN_1478d4f34(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) < 0) {
    FUN_14480809c(param_2,0);
  }
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) < 0) {
    FUN_14480809c(param_3,0);
  }
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    puVar3 = *(uint **)(param_1 + 0x50);
    puVar1 = puVar3 + *(int *)(param_1 + 0x58);
    do {
      local_3c = *puVar3;
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        lVar2 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x40) + lVar2) == local_3c) goto LAB_1478d4fd2;
          lVar2 = lVar2 + 4;
        } while ((longlong)*(int *)(param_1 + 0x48) * 4 != lVar2);
      }
      FUN_144aa71ce(param_2,&local_3c);
LAB_1478d4fd2:
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    puVar3 = *(uint **)(param_1 + 0x40);
    puVar1 = puVar3 + *(int *)(param_1 + 0x48);
    do {
      local_3c = *puVar3;
      if ((longlong)*(int *)(param_1 + 0x58) != 0) {
        lVar2 = 0;
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x50) + lVar2) == local_3c) goto LAB_1478d5026;
          lVar2 = lVar2 + 4;
        } while ((longlong)*(int *)(param_1 + 0x58) * 4 != lVar2);
      }
      FUN_144aa71ce(param_3,&local_3c);
LAB_1478d5026:
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 0 < *(int *)(param_3 + 8) || 0 < *(int *)(param_2 + 8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d5064 FUN_1478d5064 body=55 status=ok
// SIG undefined FUN_1478d5064(void)

void FUN_1478d5064(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1478de4b2(param_1,iVar1);
  }
  FUN_1478de48f((longlong)iVar1 * 0x20 + *param_1);
  return;
}



// FUNCTION 1478d509c FUN_1478d509c body=257 status=ok
// SIG undefined FUN_1478d509c(void)

longlong FUN_1478d509c(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    lVar7 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x50);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar4 >> 0x10 ^ uVar4)) *
                             4);
    if (iVar6 != -1) {
      lVar7 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar6 * 0x18);
        if (*puVar1 == param_2) {
          if (((puVar1 != (ulonglong *)0x0) && (uVar2 = puVar1[1], uVar2 != 0)) &&
             (iVar6 = *(int *)(uVar2 + 0x10), (longlong)iVar6 != 0)) {
            lVar3 = *(longlong *)(uVar2 + 8);
            lVar8 = 0;
            lVar7 = 0;
            do {
              if ((*(longlong *)(lVar3 + lVar8) != 0) && (*(char *)(lVar3 + 0x1c + lVar8) == '\x01')
                 ) {
                lVar5 = FUN_1478e022c(*(undefined8 *)(lVar3 + lVar8));
                lVar7 = lVar7 + lVar5;
              }
              lVar8 = lVar8 + 0x20;
            } while ((longlong)iVar6 * 0x20 != lVar8);
            break;
          }
          goto LAB_1478d50c2;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
      goto LAB_1478d50c4;
    }
  }
LAB_1478d50c2:
  lVar7 = 0;
LAB_1478d50c4:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return lVar7;
}



// FUNCTION 1478d51a6 FUN_1478d51a6 body=323 status=ok
// SIG undefined FUN_1478d51a6(void)

void FUN_1478d51a6(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  ulonglong *local_48;
  longlong *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if ((puVar1 != (ulonglong *)0x0) && (puVar1[1] != 0)) goto LAB_1478d5299;
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
    }
  }
  lVar4 = FUN_14001cc68(0x78,0x10);
  FUN_1478d4a8e(lVar4);
  local_58 = lVar4;
  cVar2 = FUN_1433cfc00(lVar4,param_2,param_1);
  if (cVar2 == '\0') {
    if (lVar4 != 0) {
      FUN_1478d4b44(lVar4);
      FUN_1400020a8(lVar4);
    }
  }
  else {
    local_48 = &local_50;
    local_40 = &local_58;
    FUN_1478de538((longlong *)(param_1 + 0x10),local_34);
  }
LAB_1478d5299:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d52ea FUN_1478d52ea body=231 status=ok
// SIG undefined FUN_1478d52ea(void)

undefined8 FUN_1478d52ea(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x48;
    if (*(longlong *)(param_1 + 0x50) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x50);
    }
    iVar5 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar5 != -1) {
      uVar6 = 0;
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar5 * 0x18);
        if (*puVar1 == param_2) {
          if ((puVar1 == (ulonglong *)0x0) || (uVar2 = puVar1[1], uVar2 == 0)) goto LAB_1478d530f;
          FUN_1478dea34((longlong *)(param_1 + 0x10),param_2);
          FUN_1478d4b9a(uVar2);
          FUN_1478d4b44(uVar2);
          FUN_1400020a8(uVar2);
          uVar6 = 1;
          break;
        }
        iVar5 = (int)puVar1[2];
      } while (iVar5 != -1);
      goto LAB_1478d5311;
    }
  }
LAB_1478d530f:
  uVar6 = 0;
LAB_1478d5311:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return uVar6;
}



// FUNCTION 1478d53da FUN_1478d53da body=71 status=ok
// SIG undefined FUN_1478d53da(void)

void FUN_1478d53da(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*param_2 + 8);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e39130);
  (**(code **)(*plVar1 + 0x218))(plVar1,&DAT_149e31250);
  FUN_140958b58(param_1,plVar1);
  return;
}



// FUNCTION 1478d545e FUN_1478d545e body=138 status=ok
// SIG undefined FUN_1478d545e(void)

void FUN_1478d545e(longlong param_1)

{
  FUN_14797e798();
  FUN_14499183d(*(undefined8 *)(param_1 + 0x3d0),*(undefined4 *)(param_1 + 0x3d8));
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(int *)(param_1 + 0x3dc) != 0) {
    FUN_1417b4232(param_1 + 0x3d0,0);
  }
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  FUN_140e6d3e0(*(undefined8 *)(param_1 + 0x3b8),*(undefined4 *)(param_1 + 0x3c0));
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  if (*(int *)(param_1 + 0x3c4) == 0) {
    return;
  }
  FUN_1478deb10(param_1 + 0x3b8);
  return;
}



// FUNCTION 1478d54e8 FUN_1478d54e8 body=305 status=ok
// SIG undefined FUN_1478d54e8(void)

undefined8 FUN_1478d54e8(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  local_20 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_1411d76c8((longlong *)(param_1 + 0x1c0),uVar1 >> 0x10 ^ uVar1,&local_20);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else {
    lVar4 = (longlong)iVar2 * 0x68 + *(longlong *)(param_1 + 0x1c0);
    uVar3 = 0;
    if (lVar4 != -8 && lVar4 != 0) {
      uVar3 = FUN_1479073de();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d561a FUN_1478d561a body=41 status=ok
// SIG undefined FUN_1478d561a(void)

void FUN_1478d561a(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x18,
                L"Pure virtual not implemented (%s)",L"UAISystemBase::InitializeActorsForPlay");
  return;
}



// FUNCTION 1478d5644 FUN_1478d5644 body=41 status=ok
// SIG undefined FUN_1478d5644(void)

void FUN_1478d5644(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/AISystemBase.h",0x20,
                L"Pure virtual not implemented (%s)",L"UAISystemBase::WorldOriginLocationChanged");
  return;
}



// FUNCTION 1478d566e FUN_1478d566e body=41 status=ok
// SIG undefined FUN_1478d566e(void)

void FUN_1478d566e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0xf9,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::Tick");
  return;
}



// FUNCTION 1478d5698 FUN_1478d5698 body=41 status=ok
// SIG undefined FUN_1478d5698(void)

void FUN_1478d5698(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0xfa,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::CleanUp");
  return;
}



// FUNCTION 1478d56c2 FUN_1478d56c2 body=41 status=ok
// SIG undefined FUN_1478d56c2(void)

void FUN_1478d56c2(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0xfb,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::Configure");
  return;
}



// FUNCTION 1478d56ec FUN_1478d56ec body=41 status=ok
// SIG undefined FUN_1478d56ec(void)

void FUN_1478d56ec(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0xfd,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::AppendConfig");
  return;
}



// FUNCTION 1478d571c FUN_1478d571c body=41 status=ok
// SIG undefined FUN_1478d571c(void)

void FUN_1478d571c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x106,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::ApplyWorldOffset");
  return;
}



// FUNCTION 1478d5746 FUN_1478d5746 body=41 status=ok
// SIG undefined FUN_1478d5746(void)

void FUN_1478d5746(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x108,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::InitializeForWorld");
  return;
}



// FUNCTION 1478d5774 FUN_1478d5774 body=41 status=ok
// SIG undefined FUN_1478d5774(void)

void FUN_1478d5774(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x111,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::SetBuildBounds");
  return;
}



// FUNCTION 1478d579e FUN_1478d579e body=66 status=ok
// SIG undefined FUN_1478d579e(void)

undefined8 * FUN_1478d579e(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x113,
                L"Pure virtual not implemented (%s)",
                L"UNavigationSystemBase::GetNavigableWorldBounds");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 1478d57e0 FUN_1478d57e0 body=42 status=ok
// SIG undefined FUN_1478d57e0(void)

undefined8 FUN_1478d57e0(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x115,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::ContainsNavData");
  return 0;
}



// FUNCTION 1478d580a FUN_1478d580a body=66 status=ok
// SIG undefined FUN_1478d580a(void)

undefined8 * FUN_1478d580a(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x116,
                L"Pure virtual not implemented (%s)",
                L"UNavigationSystemBase::GetNavigableWorldBounds");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 1478d5852 FUN_1478d5852 body=42 status=ok
// SIG undefined FUN_1478d5852(void)

undefined8 FUN_1478d5852(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x11c,
                L"Pure virtual not implemented (%s)",L"UNavigationSystemBase::IsWorldInitDone");
  return 0;
}



// FUNCTION 1478d587c FUN_1478d587c body=42 status=ok
// SIG undefined FUN_1478d587c(void)

undefined1 FUN_1478d587c(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/NavigationSystemBase.h",0x123,
                L"Pure virtual not implemented (%s)",
                L"UNavigationSystemBase::ShouldCreateNavigationSystemInstance");
  return 1;
}



// FUNCTION 1478d58a6 FUN_1478d58a6 body=45 status=ok
// SIG undefined FUN_1478d58a6(void)

longlong FUN_1478d58a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_1457fa068(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d58d4 FUN_1478d58d4 body=41 status=ok
// SIG undefined FUN_1478d58d4(void)

void FUN_1478d58d4(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h",0x35,
                L"Pure virtual not implemented (%s)",L"UNavCollisionBase::Setup");
  return;
}



// FUNCTION 1478d58fe FUN_1478d58fe body=70 status=ok
// SIG undefined FUN_1478d58fe(void)

undefined8 * FUN_1478d58fe(undefined8 param_1,undefined8 *param_2)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h",0x37,
                L"Pure virtual not implemented (%s)",L"UNavCollisionBase::GetBounds");
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[6] = 0;
  return param_2;
}



// FUNCTION 1478d5944 FUN_1478d5944 body=42 status=ok
// SIG undefined FUN_1478d5944(void)

undefined8 FUN_1478d5944(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h",0x3a,
                L"Pure virtual not implemented (%s)",L"UNavCollisionBase::ExportGeometry");
  return 0;
}



// FUNCTION 1478d596e FUN_1478d596e body=41 status=ok
// SIG undefined FUN_1478d596e(void)

void FUN_1478d596e(void)

{
  FUN_140033559("Runtime\\Engine\\Classes\\AI/Navigation/NavCollisionBase.h",0x3d,
                L"Pure virtual not implemented (%s)",L"UNavCollisionBase::GetNavigationModifier");
  return;
}



// FUNCTION 1478d59a0 FUN_1478d59a0 body=45 status=ok
// SIG undefined FUN_1478d59a0(void)

longlong FUN_1478d59a0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14040f2c8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d59ce FUN_1478d59ce body=45 status=ok
// SIG undefined FUN_1478d59ce(void)

longlong FUN_1478d59ce(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_14040f2c8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d59fc FUN_1478d59fc body=45 status=ok
// SIG undefined FUN_1478d59fc(void)

longlong FUN_1478d59fc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_14040f2c8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5a2a FUN_1478d5a2a body=29 status=ok
// SIG undefined FUN_1478d5a2a(void)

undefined8 FUN_1478d5a2a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5a56 FUN_1478d5a56 body=57 status=ok
// SIG undefined FUN_1478d5a56(void)

undefined8 * FUN_1478d5a56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a79c890;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5a90 FUN_1478d5a90 body=45 status=ok
// SIG undefined FUN_1478d5a90(void)

longlong FUN_1478d5a90(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5abe FUN_1478d5abe body=45 status=ok
// SIG undefined FUN_1478d5abe(void)

longlong FUN_1478d5abe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5aec FUN_1478d5aec body=45 status=ok
// SIG undefined FUN_1478d5aec(void)

longlong FUN_1478d5aec(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5b1a FUN_1478d5b1a body=45 status=ok
// SIG undefined FUN_1478d5b1a(void)

longlong FUN_1478d5b1a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5b48 FUN_1478d5b48 body=45 status=ok
// SIG undefined FUN_1478d5b48(void)

longlong FUN_1478d5b48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x30;
  thunk_FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5b76 FUN_1478d5b76 body=45 status=ok
// SIG undefined FUN_1478d5b76(void)

longlong FUN_1478d5b76(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x38;
  thunk_FUN_140b35bde(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5bb2 FUN_1478d5bb2 body=48 status=ok
// SIG undefined FUN_1478d5bb2(void)

longlong FUN_1478d5bb2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x250;
  FUN_140e6c99c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5be2 FUN_1478d5be2 body=48 status=ok
// SIG undefined FUN_1478d5be2(void)

longlong FUN_1478d5be2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x3b0;
  FUN_140e6c99c(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5c2a FUN_1478d5c2a body=26 status=ok
// SIG undefined FUN_1478d5c2a(void)

void FUN_1478d5c2a(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x0001478d5c3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xd8))(plVar1);
  return;
}



// FUNCTION 1478d5c44 FUN_1478d5c44 body=26 status=ok
// SIG undefined FUN_1478d5c44(void)

void FUN_1478d5c44(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x0001478d5c57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xe8))(plVar1);
  return;
}



// FUNCTION 1478d5c5e FUN_1478d5c5e body=26 status=ok
// SIG undefined FUN_1478d5c5e(void)

void FUN_1478d5c5e(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14068fdd8();
                    /* WARNING: Could not recover jumptable at 0x0001478d5c71. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf0))(plVar1);
  return;
}



// FUNCTION 1478d5c78 FUN_1478d5c78 body=67 status=ok
// SIG undefined FUN_1478d5c78(void)

ulonglong FUN_1478d5c78(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x70))();
  if ((longlong)(int)plVar1[1] != 0) {
    lVar2 = (longlong)(int)plVar1[1] << 3;
    uVar3 = 0;
    do {
      if (*(longlong *)(*plVar1 + uVar3 * 8) == param_2) {
        return uVar3 & 0xffffffff;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0xffffffff;
}



// FUNCTION 1478d5cf6 FUN_1478d5cf6 body=29 status=ok
// SIG undefined FUN_1478d5cf6(void)

undefined8 FUN_1478d5cf6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5d34 FUN_1478d5d34 body=85 status=ok
// SIG undefined FUN_1478d5d34(void)

void FUN_1478d5d34(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ca30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7983f0;
  return;
}



// FUNCTION 1478d5d8a FUN_1478d5d8a body=85 status=ok
// SIG undefined FUN_1478d5d8a(void)

void FUN_1478d5d8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ca30;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7983f0;
  return;
}



// FUNCTION 1478d5de0 FUN_1478d5de0 body=118 status=ok
// SIG undefined FUN_1478d5de0(void)

void FUN_1478d5de0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ca30;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7983f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d5e47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d5e6a FUN_1478d5e6a body=29 status=ok
// SIG undefined FUN_1478d5e6a(void)

undefined8 FUN_1478d5e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d5ea8 FUN_1478d5ea8 body=85 status=ok
// SIG undefined FUN_1478d5ea8(void)

void FUN_1478d5ea8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798460;
  return;
}



// FUNCTION 1478d5efe FUN_1478d5efe body=85 status=ok
// SIG undefined FUN_1478d5efe(void)

void FUN_1478d5efe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb10;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798460;
  return;
}



// FUNCTION 1478d5f54 FUN_1478d5f54 body=118 status=ok
// SIG undefined FUN_1478d5f54(void)

void FUN_1478d5f54(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cb10;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798460;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d5fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d5fd2 FUN_1478d5fd2 body=29 status=ok
// SIG undefined FUN_1478d5fd2(void)

undefined8 FUN_1478d5fd2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6010 FUN_1478d6010 body=85 status=ok
// SIG undefined FUN_1478d6010(void)

void FUN_1478d6010(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7984d0;
  return;
}



// FUNCTION 1478d6066 FUN_1478d6066 body=85 status=ok
// SIG undefined FUN_1478d6066(void)

void FUN_1478d6066(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79caa0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7984d0;
  return;
}



// FUNCTION 1478d60bc FUN_1478d60bc body=118 status=ok
// SIG undefined FUN_1478d60bc(void)

void FUN_1478d60bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79caa0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7984d0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d6123. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d613a FUN_1478d613a body=29 status=ok
// SIG undefined FUN_1478d613a(void)

undefined8 FUN_1478d613a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6178 FUN_1478d6178 body=85 status=ok
// SIG undefined FUN_1478d6178(void)

void FUN_1478d6178(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798540;
  return;
}



// FUNCTION 1478d61ce FUN_1478d61ce body=85 status=ok
// SIG undefined FUN_1478d61ce(void)

void FUN_1478d61ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cb80;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798540;
  return;
}



// FUNCTION 1478d6224 FUN_1478d6224 body=118 status=ok
// SIG undefined FUN_1478d6224(void)

void FUN_1478d6224(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cb80;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798540;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d628b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d62a2 FUN_1478d62a2 body=29 status=ok
// SIG undefined FUN_1478d62a2(void)

undefined8 FUN_1478d62a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d62e0 FUN_1478d62e0 body=85 status=ok
// SIG undefined FUN_1478d62e0(void)

void FUN_1478d62e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7985b0;
  return;
}



// FUNCTION 1478d6336 FUN_1478d6336 body=85 status=ok
// SIG undefined FUN_1478d6336(void)

void FUN_1478d6336(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7985b0;
  return;
}



// FUNCTION 1478d638c FUN_1478d638c body=118 status=ok
// SIG undefined FUN_1478d638c(void)

void FUN_1478d638c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7985b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d63f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d640a FUN_1478d640a body=29 status=ok
// SIG undefined FUN_1478d640a(void)

undefined8 FUN_1478d640a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d643c FUN_1478d643c body=85 status=ok
// SIG undefined FUN_1478d643c(void)

void FUN_1478d643c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798620;
  return;
}



// FUNCTION 1478d6492 FUN_1478d6492 body=85 status=ok
// SIG undefined FUN_1478d6492(void)

void FUN_1478d6492(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798620;
  return;
}



// FUNCTION 1478d64e8 FUN_1478d64e8 body=118 status=ok
// SIG undefined FUN_1478d64e8(void)

void FUN_1478d64e8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798620;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d654f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6564 FUN_1478d6564 body=29 status=ok
// SIG undefined FUN_1478d6564(void)

undefined8 FUN_1478d6564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6596 FUN_1478d6596 body=85 status=ok
// SIG undefined FUN_1478d6596(void)

void FUN_1478d6596(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798690;
  return;
}



// FUNCTION 1478d65ec FUN_1478d65ec body=85 status=ok
// SIG undefined FUN_1478d65ec(void)

void FUN_1478d65ec(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cbf0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798690;
  return;
}



// FUNCTION 1478d6642 FUN_1478d6642 body=118 status=ok
// SIG undefined FUN_1478d6642(void)

void FUN_1478d6642(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cbf0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798690;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d66a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d66be FUN_1478d66be body=29 status=ok
// SIG undefined FUN_1478d66be(void)

undefined8 FUN_1478d66be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d66fc FUN_1478d66fc body=85 status=ok
// SIG undefined FUN_1478d66fc(void)

void FUN_1478d66fc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798700;
  return;
}



// FUNCTION 1478d6752 FUN_1478d6752 body=85 status=ok
// SIG undefined FUN_1478d6752(void)

void FUN_1478d6752(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cc60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798700;
  return;
}



// FUNCTION 1478d67a8 FUN_1478d67a8 body=118 status=ok
// SIG undefined FUN_1478d67a8(void)

void FUN_1478d67a8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cc60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798700;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d680f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6826 FUN_1478d6826 body=29 status=ok
// SIG undefined FUN_1478d6826(void)

undefined8 FUN_1478d6826(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6858 FUN_1478d6858 body=85 status=ok
// SIG undefined FUN_1478d6858(void)

void FUN_1478d6858(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798770;
  return;
}



// FUNCTION 1478d68ae FUN_1478d68ae body=85 status=ok
// SIG undefined FUN_1478d68ae(void)

void FUN_1478d68ae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798770;
  return;
}



// FUNCTION 1478d6904 FUN_1478d6904 body=118 status=ok
// SIG undefined FUN_1478d6904(void)

void FUN_1478d6904(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798770;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d696b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6982 FUN_1478d6982 body=29 status=ok
// SIG undefined FUN_1478d6982(void)

undefined8 FUN_1478d6982(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d69c0 FUN_1478d69c0 body=85 status=ok
// SIG undefined FUN_1478d69c0(void)

void FUN_1478d69c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7987e0;
  return;
}



// FUNCTION 1478d6a16 FUN_1478d6a16 body=85 status=ok
// SIG undefined FUN_1478d6a16(void)

void FUN_1478d6a16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7987e0;
  return;
}



// FUNCTION 1478d6a6c FUN_1478d6a6c body=118 status=ok
// SIG undefined FUN_1478d6a6c(void)

void FUN_1478d6a6c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7987e0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d6ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6ae8 FUN_1478d6ae8 body=29 status=ok
// SIG undefined FUN_1478d6ae8(void)

undefined8 FUN_1478d6ae8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6b26 FUN_1478d6b26 body=85 status=ok
// SIG undefined FUN_1478d6b26(void)

void FUN_1478d6b26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798850;
  return;
}



// FUNCTION 1478d6b7c FUN_1478d6b7c body=85 status=ok
// SIG undefined FUN_1478d6b7c(void)

void FUN_1478d6b7c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798850;
  return;
}



// FUNCTION 1478d6bd2 FUN_1478d6bd2 body=118 status=ok
// SIG undefined FUN_1478d6bd2(void)

void FUN_1478d6bd2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cdb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798850;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d6c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6c50 FUN_1478d6c50 body=29 status=ok
// SIG undefined FUN_1478d6c50(void)

undefined8 FUN_1478d6c50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6c82 FUN_1478d6c82 body=85 status=ok
// SIG undefined FUN_1478d6c82(void)

void FUN_1478d6c82(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7988c0;
  return;
}



// FUNCTION 1478d6cd8 FUN_1478d6cd8 body=85 status=ok
// SIG undefined FUN_1478d6cd8(void)

void FUN_1478d6cd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7988c0;
  return;
}



// FUNCTION 1478d6d2e FUN_1478d6d2e body=118 status=ok
// SIG undefined FUN_1478d6d2e(void)

void FUN_1478d6d2e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7988c0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d6d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6daa FUN_1478d6daa body=29 status=ok
// SIG undefined FUN_1478d6daa(void)

undefined8 FUN_1478d6daa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6ddc FUN_1478d6ddc body=85 status=ok
// SIG undefined FUN_1478d6ddc(void)

void FUN_1478d6ddc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798930;
  return;
}



// FUNCTION 1478d6e32 FUN_1478d6e32 body=85 status=ok
// SIG undefined FUN_1478d6e32(void)

void FUN_1478d6e32(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798930;
  return;
}



// FUNCTION 1478d6e88 FUN_1478d6e88 body=118 status=ok
// SIG undefined FUN_1478d6e88(void)

void FUN_1478d6e88(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798930;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d6eef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d6f04 FUN_1478d6f04 body=29 status=ok
// SIG undefined FUN_1478d6f04(void)

undefined8 FUN_1478d6f04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d6f36 FUN_1478d6f36 body=85 status=ok
// SIG undefined FUN_1478d6f36(void)

void FUN_1478d6f36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7989a0;
  return;
}



// FUNCTION 1478d6f8c FUN_1478d6f8c body=85 status=ok
// SIG undefined FUN_1478d6f8c(void)

void FUN_1478d6f8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cdb0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7989a0;
  return;
}



// FUNCTION 1478d6fe2 FUN_1478d6fe2 body=118 status=ok
// SIG undefined FUN_1478d6fe2(void)

void FUN_1478d6fe2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cdb0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7989a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7049. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d705e FUN_1478d705e body=29 status=ok
// SIG undefined FUN_1478d705e(void)

undefined8 FUN_1478d705e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7090 FUN_1478d7090 body=85 status=ok
// SIG undefined FUN_1478d7090(void)

void FUN_1478d7090(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798a10;
  return;
}



// FUNCTION 1478d70e6 FUN_1478d70e6 body=85 status=ok
// SIG undefined FUN_1478d70e6(void)

void FUN_1478d70e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798a10;
  return;
}



// FUNCTION 1478d713c FUN_1478d713c body=118 status=ok
// SIG undefined FUN_1478d713c(void)

void FUN_1478d713c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798a10;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d71a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d71b8 FUN_1478d71b8 body=29 status=ok
// SIG undefined FUN_1478d71b8(void)

undefined8 FUN_1478d71b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d71ea FUN_1478d71ea body=85 status=ok
// SIG undefined FUN_1478d71ea(void)

void FUN_1478d71ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798a80;
  return;
}



// FUNCTION 1478d7240 FUN_1478d7240 body=85 status=ok
// SIG undefined FUN_1478d7240(void)

void FUN_1478d7240(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798a80;
  return;
}



// FUNCTION 1478d7296 FUN_1478d7296 body=118 status=ok
// SIG undefined FUN_1478d7296(void)

void FUN_1478d7296(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798a80;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d72fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7312 FUN_1478d7312 body=29 status=ok
// SIG undefined FUN_1478d7312(void)

undefined8 FUN_1478d7312(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7344 FUN_1478d7344 body=85 status=ok
// SIG undefined FUN_1478d7344(void)

void FUN_1478d7344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798af0;
  return;
}



// FUNCTION 1478d739a FUN_1478d739a body=85 status=ok
// SIG undefined FUN_1478d739a(void)

void FUN_1478d739a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798af0;
  return;
}



// FUNCTION 1478d73f0 FUN_1478d73f0 body=118 status=ok
// SIG undefined FUN_1478d73f0(void)

void FUN_1478d73f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798af0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7457. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d746c FUN_1478d746c body=29 status=ok
// SIG undefined FUN_1478d746c(void)

undefined8 FUN_1478d746c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d749e FUN_1478d749e body=85 status=ok
// SIG undefined FUN_1478d749e(void)

void FUN_1478d749e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798b60;
  return;
}



// FUNCTION 1478d74f4 FUN_1478d74f4 body=85 status=ok
// SIG undefined FUN_1478d74f4(void)

void FUN_1478d74f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798b60;
  return;
}



// FUNCTION 1478d754a FUN_1478d754a body=118 status=ok
// SIG undefined FUN_1478d754a(void)

void FUN_1478d754a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798b60;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d75b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d75c6 FUN_1478d75c6 body=29 status=ok
// SIG undefined FUN_1478d75c6(void)

undefined8 FUN_1478d75c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d75f8 FUN_1478d75f8 body=85 status=ok
// SIG undefined FUN_1478d75f8(void)

void FUN_1478d75f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798bd0;
  return;
}



// FUNCTION 1478d764e FUN_1478d764e body=85 status=ok
// SIG undefined FUN_1478d764e(void)

void FUN_1478d764e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798bd0;
  return;
}



// FUNCTION 1478d76a4 FUN_1478d76a4 body=118 status=ok
// SIG undefined FUN_1478d76a4(void)

void FUN_1478d76a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798bd0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d770b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7720 FUN_1478d7720 body=29 status=ok
// SIG undefined FUN_1478d7720(void)

undefined8 FUN_1478d7720(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7752 FUN_1478d7752 body=85 status=ok
// SIG undefined FUN_1478d7752(void)

void FUN_1478d7752(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798c40;
  return;
}



// FUNCTION 1478d77a8 FUN_1478d77a8 body=85 status=ok
// SIG undefined FUN_1478d77a8(void)

void FUN_1478d77a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cd40;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798c40;
  return;
}



// FUNCTION 1478d77fe FUN_1478d77fe body=118 status=ok
// SIG undefined FUN_1478d77fe(void)

void FUN_1478d77fe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cd40;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798c40;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7865. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d787a FUN_1478d787a body=29 status=ok
// SIG undefined FUN_1478d787a(void)

undefined8 FUN_1478d787a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d78ac FUN_1478d78ac body=85 status=ok
// SIG undefined FUN_1478d78ac(void)

void FUN_1478d78ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798cb0;
  return;
}



// FUNCTION 1478d7902 FUN_1478d7902 body=85 status=ok
// SIG undefined FUN_1478d7902(void)

void FUN_1478d7902(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ccd0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798cb0;
  return;
}



// FUNCTION 1478d7958 FUN_1478d7958 body=118 status=ok
// SIG undefined FUN_1478d7958(void)

void FUN_1478d7958(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ccd0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798cb0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d79bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d79d4 FUN_1478d79d4 body=29 status=ok
// SIG undefined FUN_1478d79d4(void)

undefined8 FUN_1478d79d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7a12 FUN_1478d7a12 body=85 status=ok
// SIG undefined FUN_1478d7a12(void)

void FUN_1478d7a12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798d20;
  return;
}



// FUNCTION 1478d7a68 FUN_1478d7a68 body=85 status=ok
// SIG undefined FUN_1478d7a68(void)

void FUN_1478d7a68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798d90;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798d20;
  return;
}



// FUNCTION 1478d7abe FUN_1478d7abe body=118 status=ok
// SIG undefined FUN_1478d7abe(void)

void FUN_1478d7abe(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a798d90;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798d20;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7b3c FUN_1478d7b3c body=29 status=ok
// SIG undefined FUN_1478d7b3c(void)

undefined8 FUN_1478d7b3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7b7a FUN_1478d7b7a body=85 status=ok
// SIG undefined FUN_1478d7b7a(void)

void FUN_1478d7b7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798e70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798e00;
  return;
}



// FUNCTION 1478d7bd0 FUN_1478d7bd0 body=85 status=ok
// SIG undefined FUN_1478d7bd0(void)

void FUN_1478d7bd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a798e70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798e00;
  return;
}



// FUNCTION 1478d7c26 FUN_1478d7c26 body=118 status=ok
// SIG undefined FUN_1478d7c26(void)

void FUN_1478d7c26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a798e70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798e00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7c8d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7ca6 FUN_1478d7ca6 body=29 status=ok
// SIG undefined FUN_1478d7ca6(void)

undefined8 FUN_1478d7ca6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7ce4 FUN_1478d7ce4 body=85 status=ok
// SIG undefined FUN_1478d7ce4(void)

void FUN_1478d7ce4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ce20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798ee0;
  return;
}



// FUNCTION 1478d7d3a FUN_1478d7d3a body=85 status=ok
// SIG undefined FUN_1478d7d3a(void)

void FUN_1478d7d3a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79ce20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798ee0;
  return;
}



// FUNCTION 1478d7d90 FUN_1478d7d90 body=118 status=ok
// SIG undefined FUN_1478d7d90(void)

void FUN_1478d7d90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79ce20;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798ee0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7df7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7e10 FUN_1478d7e10 body=31 status=ok
// SIG undefined FUN_1478d7e10(void)

undefined8 FUN_1478d7e10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7e52 FUN_1478d7e52 body=93 status=ok
// SIG undefined FUN_1478d7e52(void)

void FUN_1478d7e52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79ce90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478d7eb0 FUN_1478d7eb0 body=93 status=ok
// SIG undefined FUN_1478d7eb0(void)

void FUN_1478d7eb0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cf00;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79ce90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478d7f0e FUN_1478d7f0e body=126 status=ok
// SIG undefined FUN_1478d7f0e(void)

void FUN_1478d7f0e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cf00;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79ce90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d7f7d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d7f8c FUN_1478d7f8c body=14 status=ok
// SIG undefined FUN_1478d7f8c(void)

undefined1 FUN_1478d7f8c(longlong param_1)

{
  (**(code **)(param_1 + 0x18))();
  return 1;
}



// FUNCTION 1478d7f9c FUN_1478d7f9c body=31 status=ok
// SIG undefined FUN_1478d7f9c(void)

undefined8 FUN_1478d7f9c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d7fde FUN_1478d7fde body=93 status=ok
// SIG undefined FUN_1478d7fde(void)

void FUN_1478d7fde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79cf70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478d803c FUN_1478d803c body=93 status=ok
// SIG undefined FUN_1478d803c(void)

void FUN_1478d803c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79cfe0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a79cf70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1478d809a FUN_1478d809a body=126 status=ok
// SIG undefined FUN_1478d809a(void)

void FUN_1478d809a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79cfe0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a79cf70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d8122 FUN_1478d8122 body=20 status=ok
// SIG undefined FUN_1478d8122(void)

undefined8 FUN_1478d8122(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1478d8138 FUN_1478d8138 body=29 status=ok
// SIG undefined FUN_1478d8138(void)

undefined8 FUN_1478d8138(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d8176 FUN_1478d8176 body=85 status=ok
// SIG undefined FUN_1478d8176(void)

void FUN_1478d8176(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798f50;
  return;
}



// FUNCTION 1478d81cc FUN_1478d81cc body=85 status=ok
// SIG undefined FUN_1478d81cc(void)

void FUN_1478d81cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d050;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798f50;
  return;
}



// FUNCTION 1478d8222 FUN_1478d8222 body=118 status=ok
// SIG undefined FUN_1478d8222(void)

void FUN_1478d8222(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d050;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798f50;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d82a0 FUN_1478d82a0 body=29 status=ok
// SIG undefined FUN_1478d82a0(void)

undefined8 FUN_1478d82a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d82de FUN_1478d82de body=85 status=ok
// SIG undefined FUN_1478d82de(void)

void FUN_1478d82de(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798fc0;
  return;
}



// FUNCTION 1478d8334 FUN_1478d8334 body=85 status=ok
// SIG undefined FUN_1478d8334(void)

void FUN_1478d8334(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d0c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a798fc0;
  return;
}



// FUNCTION 1478d838a FUN_1478d838a body=118 status=ok
// SIG undefined FUN_1478d838a(void)

void FUN_1478d838a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d0c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a798fc0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d83f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d8408 FUN_1478d8408 body=29 status=ok
// SIG undefined FUN_1478d8408(void)

undefined8 FUN_1478d8408(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d8446 FUN_1478d8446 body=85 status=ok
// SIG undefined FUN_1478d8446(void)

void FUN_1478d8446(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a799030;
  return;
}



// FUNCTION 1478d849c FUN_1478d849c body=85 status=ok
// SIG undefined FUN_1478d849c(void)

void FUN_1478d849c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d130;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a799030;
  return;
}



// FUNCTION 1478d84f2 FUN_1478d84f2 body=118 status=ok
// SIG undefined FUN_1478d84f2(void)

void FUN_1478d84f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d130;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a799030;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8559. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d8572 FUN_1478d8572 body=31 status=ok
// SIG undefined FUN_1478d8572(void)

undefined8 FUN_1478d8572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d85b2 FUN_1478d85b2 body=85 status=ok
// SIG undefined FUN_1478d85b2(void)

void FUN_1478d85b2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a799110;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7990a0;
  return;
}



// FUNCTION 1478d8608 FUN_1478d8608 body=85 status=ok
// SIG undefined FUN_1478d8608(void)

void FUN_1478d8608(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a799110;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7990a0;
  return;
}



// FUNCTION 1478d865e FUN_1478d865e body=118 status=ok
// SIG undefined FUN_1478d865e(void)

void FUN_1478d865e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a799110;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7990a0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d86c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d86d4 FUN_1478d86d4 body=16 status=ok
// SIG undefined FUN_1478d86d4(void)

undefined1 FUN_1478d86d4(void)

{
  FUN_144a6c4d8();
  return 1;
}



// FUNCTION 1478d86e6 FUN_1478d86e6 body=29 status=ok
// SIG undefined FUN_1478d86e6(void)

undefined8 FUN_1478d86e6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d8724 FUN_1478d8724 body=85 status=ok
// SIG undefined FUN_1478d8724(void)

void FUN_1478d8724(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a799180;
  return;
}



// FUNCTION 1478d877a FUN_1478d877a body=85 status=ok
// SIG undefined FUN_1478d877a(void)

void FUN_1478d877a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d1a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a799180;
  return;
}



// FUNCTION 1478d87d0 FUN_1478d87d0 body=118 status=ok
// SIG undefined FUN_1478d87d0(void)

void FUN_1478d87d0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d1a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a799180;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d884e FUN_1478d884e body=29 status=ok
// SIG undefined FUN_1478d884e(void)

undefined8 FUN_1478d884e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d888c FUN_1478d888c body=85 status=ok
// SIG undefined FUN_1478d888c(void)

void FUN_1478d888c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7991f0;
  return;
}



// FUNCTION 1478d88e2 FUN_1478d88e2 body=85 status=ok
// SIG undefined FUN_1478d88e2(void)

void FUN_1478d88e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a79d210;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a7991f0;
  return;
}



// FUNCTION 1478d8938 FUN_1478d8938 body=118 status=ok
// SIG undefined FUN_1478d8938(void)

void FUN_1478d8938(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a79d210;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a7991f0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d899f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1478d89d2 FUN_1478d89d2 body=39 status=ok
// SIG undefined FUN_1478d89d2(void)

undefined8 FUN_1478d89d2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xb; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x58;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478d8a22 FUN_1478d8a22 body=59 status=ok
// SIG undefined FUN_1478d8a22(void)

undefined8 FUN_1478d8a22(longlong *param_1)

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



// FUNCTION 1478d8ac4 FUN_1478d8ac4 body=9 status=ok
// SIG undefined FUN_1478d8ac4(void)

void FUN_1478d8ac4(longlong param_1)

{
  FUN_1478d8aec(param_1 + 0x10);
  return;
}



// FUNCTION 1478d8ace FUN_1478d8ace body=29 status=ok
// SIG undefined FUN_1478d8ace(void)

undefined8 FUN_1478d8ace(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1478d8aec FUN_1478d8aec body=69 status=ok
// SIG undefined FUN_1478d8aec(void)

void FUN_1478d8aec(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_1449db362(param_1 + 0x30);
  FUN_1449db362(param_1 + 0x20);
  FUN_1449db362(param_1 + 0x10);
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8b26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1478d8b32 FUN_1478d8b32 body=164 status=ok
// SIG undefined FUN_1478d8b32(void)

void FUN_1478d8b32(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1478d8baa;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1478d8baa;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1478d8baa:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d8bca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1478d8bd6 FUN_1478d8bd6 body=47 status=ok
// SIG undefined FUN_1478d8bd6(void)

void FUN_1478d8bd6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x58);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1478d8c05 FUN_1478d8c05 body=52 status=ok
// SIG undefined FUN_1478d8c05(void)

void FUN_1478d8c05(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478d8c3a(param_1,param_2);
    param_1 = param_1 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return;
}



// FUNCTION 1478d8c3a FUN_1478d8c3a body=136 status=ok
// SIG undefined FUN_1478d8c3a(void)

undefined4 * FUN_1478d8c3a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *param_1 = *param_2;
  lVar2 = 0x15;
  puVar3 = param_2;
  puVar4 = param_1;
  while( true ) {
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar4 = *puVar3;
  }
  *(undefined8 *)(param_1 + 0x16) = 0;
  iVar1 = param_2[0x18];
  _Src = *(void **)(param_2 + 0x16);
  param_1[0x18] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x19] = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 0x16,iVar1,0);
    memcpy(*(void **)(param_1 + 0x16),_Src,(longlong)iVar1 * 0x18);
  }
  *(undefined1 *)((longlong)param_1 + 0x6a) = *(undefined1 *)((longlong)param_2 + 0x6a);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  return param_1;
}



// FUNCTION 1478d8cc2 FUN_1478d8cc2 body=64 status=ok
// SIG undefined FUN_1478d8cc2(void)

void FUN_1478d8cc2(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1478d8d02 FUN_1478d8d02 body=60 status=ok
// SIG undefined FUN_1478d8d02(void)

void FUN_1478d8d02(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1478d8d3e(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 1478d8d3e FUN_1478d8d3e body=190 status=ok
// SIG undefined FUN_1478d8d3e(void)

undefined4 * FUN_1478d8d3e(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = 0;
  iVar1 = param_2[4];
  uVar2 = *(undefined8 *)(param_2 + 2);
  param_1[4] = iVar1;
  if (iVar1 == 0) {
    param_1[5] = 0;
  }
  else {
    FUN_1478d8dfc(param_1 + 2,iVar1,0);
    FUN_1478d8e6b(*(undefined8 *)(param_1 + 2),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 6) = 0;
  iVar1 = param_2[8];
  uVar2 = *(undefined8 *)(param_2 + 6);
  param_1[8] = iVar1;
  if (iVar1 == 0) {
    param_1[9] = 0;
  }
  else {
    FUN_1478d8f0e(param_1 + 6,iVar1,0);
    FUN_1478d8f81(*(undefined8 *)(param_1 + 6),uVar2,iVar1);
  }
  puVar4 = (undefined8 *)(param_2 + 0xc);
  puVar5 = (undefined8 *)(param_1 + 0xc);
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  return param_1;
}



// FUNCTION 1478d8dfc FUN_1478d8dfc body=111 status=ok
// SIG undefined FUN_1478d8dfc(void)

void FUN_1478d8dfc(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x70,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x70,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478d8e6b FUN_1478d8e6b body=162 status=ok
// SIG undefined FUN_1478d8e6b(void)

void FUN_1478d8e6b(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  longlong lVar22;
  
  if (param_3 != 0) {
    lVar22 = 0;
    bVar21 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar22);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar22);
      uVar9 = *puVar1;
      uVar10 = puVar1[1];
      uVar11 = puVar1[2];
      uVar12 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x1b + lVar22);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      puVar3 = (undefined4 *)(param_1 + 0x1b + lVar22);
      *puVar3 = *puVar1;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      puVar1 = (undefined4 *)(param_1 + 0x10 + lVar22);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1 = (undefined4 *)(param_1 + lVar22);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      lVar4 = *(longlong *)(param_2 + 0x30 + lVar22);
      *(longlong *)(param_1 + 0x30 + lVar22) = lVar4;
      if (((bVar21 & 1) != 0) && (lVar4 != 0)) {
        FUN_1456cec3c();
        bVar21 = DAT_14c950c29;
      }
      lVar4 = param_1 + lVar22;
      lVar2 = param_2 + lVar22;
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(lVar2 + 0x38);
      uVar16 = *(undefined8 *)(lVar2 + 0x48);
      uVar17 = *(undefined8 *)(lVar2 + 0x50);
      uVar18 = *(undefined8 *)(lVar2 + 0x58);
      uVar19 = *(undefined8 *)(lVar2 + 0x60);
      uVar20 = *(undefined8 *)(lVar2 + 0x68);
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(lVar2 + 0x40);
      *(undefined8 *)(lVar4 + 0x48) = uVar16;
      *(undefined8 *)(lVar4 + 0x50) = uVar17;
      *(undefined8 *)(lVar4 + 0x58) = uVar18;
      *(undefined8 *)(lVar4 + 0x60) = uVar19;
      *(undefined8 *)(lVar4 + 0x68) = uVar20;
      lVar22 = lVar22 + 0x70;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478d8f0e FUN_1478d8f0e body=115 status=ok
// SIG undefined FUN_1478d8f0e(void)

void FUN_1478d8f0e(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1478d8f81 FUN_1478d8f81 body=165 status=ok
// SIG undefined FUN_1478d8f81(void)

void FUN_1478d8f81(longlong param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  byte bVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  longlong lVar18;
  
  if (param_3 != 0) {
    lVar18 = 0;
    bVar14 = DAT_14c950c29;
    do {
      puVar1 = (undefined4 *)(param_2 + lVar18);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x10 + lVar18);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar1 = (undefined4 *)(param_2 + 0x1b + lVar18);
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (undefined4 *)(param_1 + 0x1b + lVar18);
      *puVar2 = *puVar1;
      puVar2[1] = uVar11;
      puVar2[2] = uVar12;
      puVar2[3] = uVar13;
      puVar1 = (undefined4 *)(param_1 + 0x10 + lVar18);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      puVar1[2] = uVar9;
      puVar1[3] = uVar10;
      puVar1 = (undefined4 *)(param_1 + lVar18);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      lVar15 = *(longlong *)(param_2 + 0x30 + lVar18);
      *(longlong *)(param_1 + 0x30 + lVar18) = lVar15;
      if (((bVar14 & 1) != 0) && (lVar15 != 0)) {
        FUN_1456cec3c();
        bVar14 = DAT_14c950c29;
      }
      *(undefined8 *)(param_1 + lVar18 + 0x38) = *(undefined8 *)(param_2 + lVar18 + 0x38);
      puVar16 = (undefined8 *)(param_2 + lVar18 + 0x40);
      puVar17 = (undefined8 *)(param_1 + lVar18 + 0x40);
      for (lVar15 = 0xc; lVar15 != 0; lVar15 = lVar15 + -1) {
        *puVar17 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar17 = puVar17 + 1;
      }
      lVar18 = lVar18 + 0xa0;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1478d9026 FUN_1478d9026 body=143 status=ok
// SIG undefined FUN_1478d9026(void)

void FUN_1478d9026(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1478d9122 FUN_1478d9122 body=59 status=ok
// SIG undefined FUN_1478d9122(void)

undefined8 FUN_1478d9122(longlong *param_1)

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



// FUNCTION 1478d9230 FUN_1478d9230 body=82 status=ok
// SIG undefined FUN_1478d9230(void)

int FUN_1478d9230(longlong *param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)((ulonglong)*param_2 >> 0x20) * 0x17 + (int)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d934e FUN_1478d934e body=59 status=ok
// SIG undefined FUN_1478d934e(void)

undefined8 FUN_1478d934e(longlong *param_1)

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



// FUNCTION 1478d946e FUN_1478d946e body=59 status=ok
// SIG undefined FUN_1478d946e(void)

undefined8 FUN_1478d946e(longlong *param_1)

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



// FUNCTION 1478d9568 FUN_1478d9568 body=86 status=ok
// SIG undefined FUN_1478d9568(void)

undefined1 FUN_1478d9568(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  if (param_4 != 0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar7);
      lVar2 = param_2 + 0x28 + lVar7;
      *(undefined1 *)(lVar2 + -0x28) = *puVar1;
      uVar6 = *(undefined8 *)(puVar1 + 0xc);
      *(undefined8 *)(lVar2 + -0x24) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(lVar2 + -0x1c) = uVar6;
      uVar3 = *(undefined4 *)(puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 0x20);
      uVar5 = *(undefined4 *)(puVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6();
      lVar7 = lVar7 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478d95e6 FUN_1478d95e6 body=87 status=ok
// SIG undefined FUN_1478d95e6(void)

uint FUN_1478d95e6(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)*(float *)(param_2 + 0xc) ^
           ((int)(short)(int)*(float *)(param_2 + 8) | (int)*(float *)(param_2 + 4) << 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d9648 FUN_1478d9648 body=38 status=ok
// SIG undefined FUN_1478d9648(void)

void FUN_1478d9648(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 1478d96ee FUN_1478d96ee body=48 status=ok
// SIG undefined FUN_1478d96ee(void)

void FUN_1478d96ee(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478d9734 FUN_1478d9734 body=184 status=ok
// SIG undefined FUN_1478d9734(void)

undefined8 FUN_1478d9734(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    do {
      puVar1 = (undefined1 *)(param_3 + lVar8);
      lVar2 = param_2 + 0x28 + lVar8;
      *(undefined1 *)(lVar2 + -0x28) = *puVar1;
      uVar7 = *(undefined8 *)(puVar1 + 0xc);
      *(undefined8 *)(lVar2 + -0x24) = *(undefined8 *)(puVar1 + 4);
      *(undefined8 *)(lVar2 + -0x1c) = uVar7;
      uVar3 = *(undefined4 *)(puVar1 + 0x1c);
      uVar4 = *(undefined4 *)(puVar1 + 0x20);
      uVar5 = *(undefined4 *)(puVar1 + 0x24);
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(puVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar3;
      *(undefined4 *)(lVar2 + -8) = uVar4;
      *(undefined4 *)(lVar2 + -4) = uVar5;
      FUN_144a787a6(lVar2,puVar1 + 0x28);
      uVar7 = *(undefined8 *)(puVar1 + 0x40);
      uVar3 = *(undefined4 *)(puVar1 + 0x48);
      uVar4 = *(undefined4 *)(puVar1 + 0x4c);
      uVar5 = *(undefined4 *)(puVar1 + 0x50);
      uVar6 = *(undefined4 *)(puVar1 + 0x54);
      *(undefined8 *)(lVar2 + 0x10) = *(undefined8 *)(puVar1 + 0x38);
      *(undefined8 *)(lVar2 + 0x18) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar3;
      *(undefined4 *)(lVar2 + 0x24) = uVar4;
      *(undefined4 *)(lVar2 + 0x28) = uVar5;
      *(undefined4 *)(lVar2 + 0x2c) = uVar6;
      *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(puVar1 + 0x58);
      *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(puVar1 + 0x60);
      uVar3 = *(undefined4 *)(puVar1 + 0x6c);
      uVar4 = *(undefined4 *)(puVar1 + 0x70);
      uVar5 = *(undefined4 *)(puVar1 + 0x74);
      *(undefined4 *)(lVar2 + 0x40) = *(undefined4 *)(puVar1 + 0x68);
      *(undefined4 *)(lVar2 + 0x44) = uVar3;
      *(undefined4 *)(lVar2 + 0x48) = uVar4;
      *(undefined4 *)(lVar2 + 0x4c) = uVar5;
      FUN_144a787a6(param_2 + lVar8 + 0x78,param_3 + lVar8 + 0x78);
      lVar8 = lVar8 + 0x88;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478d9814 FUN_1478d9814 body=87 status=ok
// SIG undefined FUN_1478d9814(void)

uint FUN_1478d9814(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (int)*(float *)(param_2 + 0xc) ^
           ((int)(short)(int)*(float *)(param_2 + 8) | (int)*(float *)(param_2 + 4) << 0x10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1478d98d4 FUN_1478d98d4 body=58 status=ok
// SIG undefined FUN_1478d98d4(void)

void FUN_1478d98d4(longlong param_1)

{
  if (*(char *)(param_1 + 0x88) == '\x01') {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x28) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x88) = 0;
  }
  return;
}



// FUNCTION 1478d994e FUN_1478d994e body=109 status=ok
// SIG undefined FUN_1478d994e(void)

undefined1 FUN_1478d994e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_4 != 0) {
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(param_3 + lVar4);
      if ((bVar2 & 1) != 0) {
        if (lVar3 == 0) {
          lVar3 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar3 = *(longlong *)(param_3 + lVar4);
          bVar2 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar4);
      *plVar1 = lVar3;
      *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(param_3 + 8 + lVar4);
      *(undefined1 *)((longlong)plVar1 + 0xc) = *(undefined1 *)(param_3 + 0xc + lVar4);
      lVar4 = lVar4 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478d99e4 FUN_1478d99e4 body=59 status=ok
// SIG undefined FUN_1478d99e4(void)

undefined8 FUN_1478d99e4(longlong *param_1)

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



// FUNCTION 1478d9aee FUN_1478d9aee body=121 status=ok
// SIG undefined FUN_1478d9aee(void)

undefined1 FUN_1478d9aee(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte bVar11;
  longlong lVar12;
  longlong lVar13;
  
  if (param_4 != 0) {
    lVar13 = 0;
    bVar11 = DAT_14c950c29;
    do {
      lVar12 = *(longlong *)(param_3 + lVar13);
      if ((bVar11 & 1) != 0) {
        if (lVar12 == 0) {
          lVar12 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar12 = *(longlong *)(param_3 + lVar13);
          bVar11 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar13);
      *plVar1 = lVar12;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar13);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar13);
      uVar7 = *puVar3;
      uVar8 = puVar3[1];
      uVar9 = puVar3[2];
      uVar10 = puVar3[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar4;
      *(undefined4 *)(plVar1 + 2) = uVar5;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
      *(undefined4 *)(plVar1 + 3) = uVar7;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
      *(undefined4 *)(plVar1 + 4) = uVar9;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = *(undefined4 *)(param_3 + 0x28 + lVar13);
      lVar13 = lVar13 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1478d9b90 FUN_1478d9b90 body=59 status=ok
// SIG undefined FUN_1478d9b90(void)

undefined8 FUN_1478d9b90(longlong *param_1)

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



// FUNCTION 1478d9c32 FUN_1478d9c32 body=50 status=ok
// SIG undefined FUN_1478d9c32(void)

void FUN_1478d9c32(undefined8 *param_1)

{
  FUN_1447a1747(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  FUN_14585d45a(param_1,*param_1);
  return;
}



// FUNCTION 1478d9c64 FUN_1478d9c64 body=194 status=ok
// SIG undefined FUN_1478d9c64(void)

undefined4 * FUN_1478d9c64(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  param_1[0xc] = param_2[0xc];
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[9];
  uVar12 = param_2[10];
  uVar13 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar11;
  param_1[10] = uVar12;
  param_1[0xb] = uVar13;
  param_1[4] = uVar7;
  param_1[5] = uVar8;
  param_1[6] = uVar9;
  param_1[7] = uVar10;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = uVar6;
  *(undefined8 *)(param_1 + 0xe) = 0;
  iVar1 = param_2[0x10];
  pvVar2 = *(void **)(param_2 + 0xe);
  param_1[0x10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x11] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xe,iVar1,0);
    memcpy(*(void **)(param_1 + 0xe),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 0x12) = 0;
  iVar1 = param_2[0x14];
  pvVar2 = *(void **)(param_2 + 0x12);
  param_1[0x14] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x15] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x12,iVar1,0);
    memcpy(*(void **)(param_1 + 0x12),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1478d9d82 FUN_1478d9d82 body=48 status=ok
// SIG undefined FUN_1478d9d82(void)

void FUN_1478d9d82(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1478d9dc8 FUN_1478d9dc8 body=54 status=ok
// SIG undefined FUN_1478d9dc8(void)

undefined1 FUN_1478d9dc8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478d9ec2(param_2,param_3);
    param_3 = param_3 + 0x60;
    param_2 = param_2 + 0x60;
  }
  return 1;
}


