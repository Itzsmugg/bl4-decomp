// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140c369f0 FUN_140c369f0 body=1767 status=ok
// SIG undefined FUN_140c369f0(void)

void FUN_140c369f0(longlong param_1,float param_2,char param_3,byte param_4)

{
  longlong *plVar1;
  float fVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  lVar3 = *(longlong *)(param_1 + 0x1a0);
  if (lVar3 == 0) {
    return;
  }
  if (*(int *)(lVar3 + 0xf0) < 1) {
    return;
  }
  plVar1 = *(longlong **)(lVar3 + 0xe8);
  if (param_3 != '\0') {
    *(int *)(param_1 + 0x990) = (int)plVar1[4];
  }
  if (param_4 != 0) {
    *(undefined1 *)(param_1 + 0x989) = 0;
  }
  if (*(char *)(param_1 + 0x988) == '\0') {
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    if ((*(char *)((longlong)plVar1 + 0x31) != '\0') &&
       (*(char *)((longlong)plVar1 + 0x32) == '\x01')) {
      *(undefined1 *)((longlong)plVar1 + 0x32) = 0;
      *(undefined1 *)(param_1 + 0x98a) = 0;
      *(undefined4 *)(param_1 + 0x98c) = 0;
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      *(undefined4 *)(param_1 + 0x9b4) = 0;
      *(undefined8 *)(param_1 + 0x994) = 0;
      *(undefined1 *)(param_1 + 0x99c) = 0;
      *(undefined1 *)(param_1 + 0x988) = 1;
      *(undefined8 *)(param_1 + 0x9a4) = 0;
      *(bool *)(param_1 + 0x989) = *(char *)((longlong)plVar1 + 0x31) == '\x01';
      iVar4 = (int)plVar1[0xb];
      if (iVar4 < 1) {
        fVar9 = 0.0;
      }
      else {
        fVar8 = *(float *)(*plVar1 + 0x268);
        lVar3 = 0;
        fVar6 = 0.0;
        fVar9 = 0.0;
        do {
          fVar9 = fVar9 + *(float *)(plVar1[10] + 4 + lVar3 * 8);
          if ((fVar8 <= ABS(fVar9)) && (ABS(fVar6) < 1e-08)) {
            fVar6 = (float)(-(uint)(0.0 < fVar9) & 0x3f800000 |
                           ~-(uint)(0.0 < fVar9) & -(uint)(fVar9 < 0.0) & 0xbf800000);
            *(float *)(param_1 + 0x9a0) = fVar6;
            *(undefined1 *)(param_1 + 0x99c) = 1;
            iVar4 = (int)plVar1[0xb];
          }
          lVar3 = lVar3 + 1;
        } while (lVar3 < iVar4);
      }
      *(float *)(param_1 + 0x994) = fVar9;
      *(float *)(param_1 + 0x998) = fVar9;
    }
    fVar9 = 0.0;
    if (0.0 < *(float *)(*plVar1 + 0x264)) {
      fVar8 = 0.0 - *(float *)(param_1 + 0x9b8);
      if (1e-08 <= fVar8 * fVar8) {
        param_2 = *(float *)(*plVar1 + 0x264) * param_2;
        if (1.0 <= param_2) {
          param_2 = 1.0;
        }
        if (param_2 <= 0.0) {
          param_2 = 0.0;
        }
        fVar9 = *(float *)(param_1 + 0x9b8) + fVar8 * param_2;
      }
    }
    *(float *)(param_1 + 0x9b8) = fVar9;
    return;
  }
  if (*(char *)(param_1 + 0x98a) == '\x01') {
    fVar9 = *(float *)(param_1 + 0x9a4);
    fVar6 = (float)FUN_140c35dcc(*plVar1 + 0x1e0);
    fVar8 = *(float *)(param_1 + 0x98c);
    if (1.0 <= fVar8) {
      fVar8 = 1.0;
    }
    if (fVar8 <= 0.0) {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x9a8) = (1.0 - fVar8) * fVar6;
    if (*(char *)((longlong)plVar1 + 0x31) == '\0') {
      *(int *)(param_1 + 0x9ac) = *(int *)(param_1 + 0x9ac) + 1;
      *(float *)(param_1 + 0x9b8) =
           (float)SQRT(*(double *)(param_1 + 0x90) * *(double *)(param_1 + 0x90) +
                       *(double *)(param_1 + 0x80) * *(double *)(param_1 + 0x80) +
                       *(double *)(param_1 + 0x88) * *(double *)(param_1 + 0x88));
    }
    if (*(char *)(param_1 + 0x95a) == '\0') {
      *(float *)(param_1 + 0x9a4) = fVar9 + param_2;
    }
    lVar3 = *plVar1;
    if ((SQRT(*(double *)(param_1 + 0x938) * *(double *)(param_1 + 0x938) +
              *(double *)(param_1 + 0x940) * *(double *)(param_1 + 0x940)) <
         (double)(*(float *)(lVar3 + 0x20) * *(float *)(lVar3 + 0x26c))) ||
       (((double)plVar1[1] <= (double)*(float *)(lVar3 + 0x270) &&
         (double)*(float *)(lVar3 + 0x270) != (double)plVar1[1] && (fVar8 <= 1e-08)))) {
      *(undefined1 *)(param_1 + 0x988) = 0;
      *(undefined1 *)(param_1 + 0x98a) = 0;
      *(undefined4 *)(param_1 + 0x98c) = 0;
      *(undefined4 *)(param_1 + 0x9a0) = 0;
      *(undefined4 *)(param_1 + 0x9b4) = 0;
      *(undefined4 *)(param_1 + 0x9a8) = 0;
      *(undefined1 *)(param_1 + 0x99c) = 0;
      *(undefined8 *)(param_1 + 0x994) = 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    if ((*(byte *)(param_1 + 0x95a) | param_4) == 1) {
      if (param_4 != 0) {
        *(undefined1 *)(param_1 + 0x98a) = 1;
      }
      fVar9 = *(float *)(*plVar1 + 0x268);
      fVar8 = *(float *)(param_1 + 0x998);
      dVar7 = (double)FUN_144719204((double)(*(float *)(plVar1 + 4) -
                                            (*(float *)(param_1 + 0x990) -
                                            *(float *)(param_1 + 0x994))));
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      fVar6 = (float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
      *(float *)(param_1 + 0x998) = fVar6;
      if (*(char *)(param_1 + 0x99c) == '\x01') {
        fVar10 = *(float *)(param_1 + 0x9a0);
        if (ABS(fVar10) <= 1e-08) goto LAB_140c36c1b;
        fVar2 = (float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000);
        fVar10 = (float)(-(uint)(0.0 < fVar10) & 0x3f800000 |
                        ~-(uint)(0.0 < fVar10) & -(uint)(fVar10 < 0.0) & 0xbf800000);
        if ((fVar2 == fVar10) && (!NAN(fVar2) && !NAN(fVar10))) goto LAB_140c36c1b;
        fVar10 = (float)(-(uint)(0.0 < fVar8) & 0x3f800000 |
                        ~-(uint)(0.0 < fVar8) & -(uint)(fVar8 < 0.0) & 0xbf800000);
        if (((fVar2 == fVar10) && (!NAN(fVar2) && !NAN(fVar10))) || (180.0 <= ABS(fVar6 - fVar8)))
        goto LAB_140c36c1b;
        *(undefined1 *)(param_1 + 0x99c) = 0;
      }
      if (fVar9 <= ABS(fVar6)) {
        fVar9 = *(float *)(param_1 + 0x9a0);
        fVar8 = (float)(-(uint)(0.0 < fVar6) & 0x3f800000 |
                       ~-(uint)(0.0 < fVar6) & -(uint)(fVar6 < 0.0) & 0xbf800000);
        if (1e-08 <= ABS(fVar9)) {
          fVar9 = (float)(-(uint)(0.0 < fVar9) & 0x3f800000 |
                         ~-(uint)(0.0 < fVar9) & -(uint)(fVar9 < 0.0) & 0xbf800000);
          if ((fVar8 == fVar9) && (!NAN(fVar8) && !NAN(fVar9))) goto LAB_140c36c1b;
        }
        *(float *)(param_1 + 0x9a0) = fVar8;
      }
      else {
        if ((param_4 == 0) || (1e-08 <= ABS(*(float *)(param_1 + 0x9a0)))) goto LAB_140c36c1b;
        dVar7 = ABS((double)plVar1[2]);
        if (1.0 <= dVar7) {
          dVar7 = 1.0;
        }
        dVar7 = asin(dVar7);
        if (dVar7 * 57.29577951308232 < (double)fVar9) {
          *(undefined1 *)(param_1 + 0x988) = 0;
          *(undefined1 *)(param_1 + 0x98a) = 0;
          *(undefined4 *)(param_1 + 0x98c) = 0;
          *(undefined4 *)(param_1 + 0x9a0) = 0;
          *(undefined4 *)(param_1 + 0x9b4) = 0;
          *(undefined4 *)(param_1 + 0x9a8) = 0;
          *(undefined1 *)(param_1 + 0x99c) = 0;
          *(undefined8 *)(param_1 + 0x994) = 0;
          goto LAB_140c36c1b;
        }
        uVar5 = -(ulonglong)(0.0 < (double)plVar1[2]);
        *(float *)(param_1 + 0x9a0) =
             -(float)(double)(uVar5 & 0x3ff0000000000000 |
                             ~uVar5 & (ulonglong)
                                      ((uint)(-(ulonglong)((double)plVar1[2] < 0.0) >> 0x20) &
                                      0xbff00000) << 0x20);
      }
      *(undefined1 *)(param_1 + 0x99c) = 1;
    }
  }
LAB_140c36c1b:
  if (*(char *)((longlong)plVar1 + 0x31) == '\0') {
    *(undefined1 *)(param_1 + 0x988) = 0;
    *(undefined1 *)(param_1 + 0x98a) = 0;
    *(undefined4 *)(param_1 + 0x98c) = 0;
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    *(undefined4 *)(param_1 + 0x9b4) = 0;
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    *(undefined1 *)(param_1 + 0x99c) = 0;
    *(undefined8 *)(param_1 + 0x994) = 0;
  }
  return;
}



// FUNCTION 140c370d8 FUN_140c370d8 body=84 status=ok
// SIG undefined FUN_140c370d8(void)

void FUN_140c370d8(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_140c3712e(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3712e FUN_140c3712e body=84 status=ok
// SIG undefined FUN_140c3712e(void)

void FUN_140c3712e(undefined8 *param_1,longlong param_2)

{
  FUN_140c372b2(param_2,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140c37182(param_2 + 0x18,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140c3721a(param_2 + 0x30,*param_1,*(undefined4 *)(param_1 + 1));
  FUN_140659b5e(param_2 + 0x48,*param_1,*(undefined4 *)(param_1 + 1));
  return;
}



// FUNCTION 140c37182 FUN_140c37182 body=151 status=ok
// SIG undefined FUN_140c37182(void)

void FUN_140c37182(short *param_1,longlong param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_1) goto LAB_140c371b5;
      plVar7 = plVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_140c371b5:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  uVar3 = *(undefined4 *)(param_1 + 4);
  uVar4 = *(undefined4 *)(param_1 + 6);
  uVar5 = *(undefined4 *)(param_1 + 8);
  puVar1 = (undefined4 *)
           (*plVar7 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar7 + 0x1c));
  *puVar1 = *(undefined4 *)(param_1 + 2);
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  if ((char)param_1[10] == '\x01') {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140c37208. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140c3721a FUN_140c3721a body=151 status=ok
// SIG undefined FUN_140c3721a(void)

void FUN_140c3721a(short *param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar3 = *(longlong **)(param_2 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *param_1) goto LAB_140c3724d;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_140c3724d:
  iVar1 = *(int *)(param_2 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  *(undefined8 *)(*plVar3 + (longlong)param_3 * (ulonglong)*(byte *)((longlong)plVar3 + 0x1c)) =
       *(undefined8 *)(param_1 + 4);
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140c372a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140c372b2 FUN_140c372b2 body=186 status=ok
// SIG undefined FUN_140c372b2(void)

void FUN_140c372b2(short *param_1,longlong param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_2 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *param_1) goto LAB_140c372e7;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_140c372e7:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *plVar5;
  bVar1 = *(byte *)((longlong)plVar5 + 0x1c);
  lVar4 = *(longlong *)(param_1 + 4);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_1 + 4);
    }
  }
  *(longlong *)(lVar3 + (longlong)param_3 * (ulonglong)bVar1) = lVar4;
  if ((char)param_1[8] == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000140c37345. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 140c3737a FUN_140c3737a body=45 status=ok
// SIG undefined FUN_140c3737a(void)

undefined8 FUN_140c3737a(undefined8 param_1,int param_2)

{
  FUN_140c373a8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1e0);
  }
  return param_1;
}



// FUNCTION 140c373a8 FUN_140c373a8 body=151 status=ok
// SIG undefined FUN_140c373a8(void)

void FUN_140c373a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b49c1c0;
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  param_1[0x2f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (*(int *)((longlong)param_1 + 0x194) != 0) {
    FUN_140115c12(param_1 + 0x31,0);
  }
  param_1[0x30] = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b49d1f0;
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c37440 FUN_140c37440 body=844 status=ok
// SIG undefined FUN_140c37440(void)

void FUN_140c37440(longlong param_1,longlong param_2,undefined8 param_3)

{
  void *pvVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  byte bVar8;
  void *pvVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  code *local_80;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((DAT_14c7619e0 != 0) && (*(char *)(param_1 + 0xa0) == '\0')) {
    FUN_140c3778e(param_1 + 0x68);
    pvVar1 = (void *)(param_1 + 0xa8);
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0x30);
    uVar11 = *(int *)(param_1 + 0x30) + 0x1f;
    if (0x1f < uVar11) {
      uVar12 = uVar11 >> 5;
      if (*(int *)(param_1 + 0xc4) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(pvVar1,0,uVar12,4);
        *(uint *)(param_1 + 0xc4) = uVar11 & 0xffffffe0;
      }
      pvVar9 = *(void **)(param_1 + 0xb8);
      if (*(void **)(param_1 + 0xb8) == (void *)0x0) {
        pvVar9 = pvVar1;
      }
      if (uVar11 < 0x120) {
        uVar12 = uVar11 >> 3 & 0x3c;
      }
      else {
        uVar12 = uVar12 << 2;
      }
      memset(pvVar9,0,(ulonglong)uVar12);
      iVar3 = *(int *)(param_1 + 0xc0);
      iVar7 = iVar3 + 0x1f;
      if (-1 < iVar3) {
        iVar7 = iVar3;
      }
      if (iVar3 % 0x20 != 0) {
        pvVar9 = *(void **)(param_1 + 0xb8);
        if (*(void **)(param_1 + 0xb8) == (void *)0x0) {
          pvVar9 = pvVar1;
        }
        bVar8 = -(char)(iVar3 % 0x20);
        *(uint *)((longlong)pvVar9 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar9 + (longlong)(iVar7 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    local_68 = param_1 + 0x80;
    local_60 = *(longlong *)(param_1 + 0x78);
    local_58 = *(undefined8 *)(local_60 + 0xc0);
    local_50 = "BuildSharedSerializationForRPC";
    *(undefined8 **)(local_60 + 0xc0) = &local_70;
    local_70 = param_3;
    if (0 < *(int *)(param_1 + 0x30)) {
      uVar14 = 0;
      do {
        lVar13 = uVar14 * 0x30;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x28) + lVar13);
        if ((*(byte *)(lVar4 + 0x39) & 1) == 0) {
          if (lVar4 == 0) {
LAB_140c375d7:
            plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar13);
            cVar6 = (**(code **)(*plVar5 + 200))
                              (plVar5,(longlong)*(int *)((longlong)plVar5 + 0x34) *
                                      (longlong)
                                      *(int *)(*(longlong *)(param_1 + 0x28) + 0x10 + lVar13) +
                                      *(int *)((longlong)plVar5 + 0x44) + param_2,0);
            if (cVar6 != '\0') goto LAB_140c37654;
          }
          else {
            puVar10 = *(undefined8 **)(lVar4 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
            {
              local_88 = FUN_1446ddbd2();
              local_80 = FUN_14067a048;
              local_90 = 0;
              local_98 = 0x28001;
              FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
              atexit(FUN_142811fe5);
              _Init_thread_footer(&DAT_14c951d20);
            }
            if (DAT_14c951cd8 == 0) {
              bVar15 = puVar10 != (undefined8 *)0x0;
              if (puVar10 != &DAT_14c951cd0 && bVar15) {
                do {
                  puVar10 = (undefined8 *)puVar10[6];
                  bVar15 = puVar10 != (undefined8 *)0x0;
                  if (puVar10 == &DAT_14c951cd0) break;
                } while (puVar10 != (undefined8 *)0x0);
              }
              if (!bVar15) goto LAB_140c375d7;
            }
            else if ((puVar10[3] & DAT_14c951cd8) == 0) goto LAB_140c375d7;
          }
          pvVar9 = *(void **)(param_1 + 0xb8);
          if (*(void **)(param_1 + 0xb8) == (void *)0x0) {
            pvVar9 = pvVar1;
          }
          puVar2 = (uint *)((longlong)pvVar9 + (uVar14 >> 5 & 0x7ffffff) * 4);
          *puVar2 = *puVar2 | 1 << ((byte)uVar14 & 0x1f);
          local_90 = local_90 & 0xffffffff00000000;
          local_98 = local_98 & 0xffffffff00000000;
          local_88 = param_1 + 0x68;
          FUN_140c377fe(param_1,*(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1c + lVar13),
                        *(undefined2 *)(*(longlong *)(param_1 + 0x28) + 0x1e + lVar13));
        }
LAB_140c37654:
        uVar14 = uVar14 + 1;
      } while ((longlong)uVar14 < (longlong)*(int *)(param_1 + 0x30));
    }
    *(undefined1 *)(param_1 + 0xa0) = 1;
    *(undefined8 *)(local_60 + 0xc0) = local_58;
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c3778e FUN_140c3778e body=112 status=ok
// SIG undefined FUN_140c3778e(void)

void FUN_140c3778e(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    puVar2 = (undefined8 *)FUN_14001cc68(200,0x10);
    FUN_1447400e4(puVar2,0,1);
    *puVar2 = &PTR_FUN_149e898a0;
    puVar2[0x17] = 0;
    puVar2[0x18] = 0;
    puVar1 = *(undefined8 **)(param_1 + 0x10);
    if ((puVar1 != puVar2) &&
       (*(undefined8 **)(param_1 + 0x10) = puVar2, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140c377fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar1)(puVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140c377fe FUN_140c377fe body=302 status=ok
// SIG undefined FUN_140c377fe(void)

void FUN_140c377fe(longlong param_1,uint param_2,int param_3,longlong param_4,undefined4 param_5,
                  int param_6,ulonglong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_70;
  int local_64;
  uint local_60;
  undefined4 local_5c;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((int)param_2 < param_3) {
    local_64 = param_6 + 1;
    do {
      uVar2 = (ulonglong)param_2;
      lVar1 = *(longlong *)(param_1 + 0x38) + uVar2 * 0x20;
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x1c + uVar2 * 0x20) == '\0') {
        local_88 = param_7;
        FUN_147ce190c(param_1,uVar2,*(int *)(lVar1 + 0xc) + param_4,local_64);
        param_2 = *(ushort *)(lVar1 + 8) - 1;
      }
      else if (((*(byte *)(*(longlong *)
                            (*(longlong *)(param_1 + 0x28) +
                            (ulonglong)((uint)*(ushort *)(lVar1 + 0x16) * 0x30)) + 0x39) & 1) == 0)
              && ((*(byte *)(lVar1 + 0x1d) & 1) != 0)) {
        local_80 = *(int *)(lVar1 + 0xc) + param_4;
        local_5c = param_5;
        local_58 = param_6;
        local_70 = 0;
        local_78 = 0;
        local_88 = local_88 & 0xffffffffffff0000;
        local_60 = param_2;
        local_50 = local_80;
        FUN_14018ac86(param_7,lVar1,&local_60,uVar2);
      }
      param_2 = param_2 + 1;
    } while ((int)param_2 < param_3);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3792e FUN_140c3792e body=127 status=ok
// SIG undefined FUN_140c3792e(void)

void FUN_140c3792e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1409231c6(param_2);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x178), lVar1 != 0)) {
    lVar2 = FUN_14041aabe();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) {
      FUN_140c379ae(param_1 + 8,&DAT_14cbce518);
      return;
    }
  }
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 0x28)])(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x28) = 4;
  return;
}



// FUNCTION 140c379ae FUN_140c379ae body=100 status=ok
// SIG undefined FUN_140c379ae(void)

void FUN_140c379ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  (*(code *)(&PTR_FUN_14a1842f0)[*(byte *)(param_1 + 4)])();
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 4) = 4;
  return;
}



// FUNCTION 140c37a12 FUN_140c37a12 body=3191 status=ok
// SIG undefined FUN_140c37a12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_140c37a12(longlong param_1,float *param_2,undefined8 param_3,longlong param_4)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float *pfVar18;
  undefined *puVar19;
  undefined ***pppuVar20;
  float fVar21;
  float fVar22;
  float _X;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  longlong local_1a0;
  float *local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  longlong local_168;
  longlong local_160;
  char local_158 [16];
  longlong *local_148;
  undefined4 local_130 [2];
  undefined1 *local_128;
  undefined8 uStack_120;
  undefined ***local_118;
  longlong local_110;
  undefined **ppuStack_108;
  code *local_100;
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_198 = param_2;
  if (DAT_14cbd10e0 == (longlong *)0x0) {
    _DAT_14cbd1108 = 0;
    uRam000000014cbd1110 = 0;
    _DAT_14cbd10f8 = 0;
    uRam000000014cbd1100 = 0;
    _DAT_14cbd10e8 = 0;
    DAT_14cbd10f0 = 0;
    _DAT_14cbd1118 = 0;
    FUN_145d11982(&DAT_14cbd10e8);
    DAT_14cbd10e0 = (longlong *)&DAT_14cbd10e8;
  }
  plVar5 = DAT_14cbd10e0;
  plVar15 = DAT_14cbd10e0 + 1;
  if ((char)DAT_14cbd10e0[2] == '\0') {
LAB_140c37a84:
    if (*plVar15 == 0) goto LAB_140c38364;
    cVar6 = FUN_1449e3c20(DAT_14cbd10e0);
    if (cVar6 != '\0') goto LAB_140c383b1;
  }
  else {
    if ((char)DAT_14cbd10e0[2] == '\x02') {
      plVar15 = (longlong *)(*plVar15 + 0x30);
      goto LAB_140c37a84;
    }
LAB_140c38364:
    lVar8 = FUN_140162146();
    if (lVar8 != 0) {
      local_128 = (undefined1 *)0x0;
      uStack_120 = 0;
      local_118 = (undefined ***)((ulonglong)local_118 & 0xffffffff00000000);
      local_110 = 0;
      ppuStack_108 = (undefined **)0x0;
      FUN_1446ddda2(&local_128,"def_globals_rarity",0);
      FUN_140024ada(&local_128,plVar5);
      if (local_110 != 0) {
        FUN_1400020a8();
      }
LAB_140c383b1:
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  if ((((longlong)*(int *)(param_4 + 0x28) == 0) ||
      (lVar8 = FUN_140a495b0(DAT_14c9a3da0 + (longlong)*(int *)(param_4 + 0x28) * 0x10 + -0x10),
      lVar8 == 0)) || (*(int *)(lVar8 + 0xc) == 0)) {
LAB_140c37aab:
    uVar13 = 0;
  }
  else {
    uVar7 = *(uint *)(lVar8 + 8);
    uVar13 = 0;
    if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
      puVar16 = (undefined8 *)
                ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
      if ((puVar16 == (undefined8 *)0x0) ||
         ((*(int *)(puVar16 + 2) != *(int *)(lVar8 + 0xc) ||
          ((*(uint *)(puVar16 + 1) & 0x10200000) != 0)))) goto LAB_140c37aab;
      uVar13 = *puVar16;
    }
  }
  local_158[0] = '\0';
  local_130[0] = 0;
  FUN_1456bb102(local_158,uVar13);
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar13 = FUN_141227ea0();
    lVar8 = FUN_14477b664(uVar13);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  lVar12 = *(longlong *)(param_1 + 0x18);
  if (lVar12 == 0) {
    if ((lVar8 == 0) || (*(longlong *)(param_1 + 8) == 0)) {
      ppuStack_108 = &PTR_LAB_14b999cb0;
      local_100 = FUN_144218062;
LAB_140c38635:
      local_100 = FUN_144218062;
      ppuStack_108 = &PTR_LAB_14b999cb0;
      local_118 = (undefined ***)0x0;
      local_128 = &LAB_148dd2380;
      fVar23 = 1.0;
    }
    else {
      plVar15 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar15 != (longlong *)0x0) &&
         (cVar6 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar6 != '\0')) {
        uVar13 = (**(code **)(*plVar15 + 0x110))(plVar15);
        lVar12 = FUN_144aff482(uVar13,(longlong *)(param_1 + 8));
        *(longlong *)(param_1 + 0x18) = lVar12;
        ppuStack_108 = &PTR_LAB_14b999cb0;
        local_100 = FUN_144218062;
        if (lVar12 != 0) goto LAB_140c37b0b;
        goto LAB_140c38635;
      }
      *(undefined8 *)(param_1 + 0x18) = 0;
      local_118 = (undefined ***)0x0;
      ppuStack_108 = &PTR_LAB_14b999cb0;
      local_100 = FUN_144218062;
      local_128 = &LAB_148dd2380;
      fVar23 = 1.0;
    }
  }
  else {
LAB_140c37b0b:
    local_100 = FUN_144218062;
    ppuStack_108 = &PTR_LAB_14b999cb0;
    local_118 = (undefined ***)0x0;
    local_128 = &LAB_148dd2380;
    lVar8 = FUN_14049cbd6();
    if (lVar8 == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      if (*(longlong *)(lVar8 + 0x178) == 0) {
LAB_140c38012:
        lVar10 = 0;
      }
      else {
        lVar9 = FUN_14030d660();
        lVar8 = *(longlong *)(lVar8 + 0x178);
        if (lVar8 == 0) goto LAB_140c38012;
        lVar10 = 0;
        if ((lVar9 != 0) && (lVar2 = *(longlong *)(lVar8 + 0x10), lVar2 != 0)) {
          if (*(int *)(lVar2 + 0x38) < *(int *)(lVar9 + 0x38)) goto LAB_140c38012;
          lVar10 = 0;
          if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30) {
            lVar10 = lVar8;
          }
        }
      }
      puVar11 = (undefined *)(lVar10 + 0x658);
      if (lVar10 == 0) {
        puVar11 = (undefined *)0x0;
      }
    }
    puVar19 = &DAT_14cbd1120;
    if (puVar11 != (undefined *)0x0) {
      puVar19 = puVar11;
    }
    if (DAT_14c947fe0 == 0) {
      lVar8 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar8);
      DAT_14c947fe0 = lVar8;
    }
    FUN_140045924(DAT_14c947fe0,&local_b8,&DAT_14cbd1168,1);
    lVar8 = 4;
    if (*(longlong *)(lVar12 + 0x1c) == CONCAT44(uStack_b4,local_b8)) {
LAB_140c37bce:
      fVar23 = *(float *)(puVar19 + lVar8);
    }
    else {
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_e0,&DAT_14cbd1190,1);
      lVar8 = 0x10;
      if (*(longlong *)(lVar12 + 0x1c) == CONCAT44(uStack_dc,local_e0)) goto LAB_140c37bce;
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_178,&DAT_14cbd11b8,1);
      lVar8 = 0x1c;
      if (*(longlong *)(lVar12 + 0x1c) == CONCAT44(uStack_174,local_178)) goto LAB_140c37bce;
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_188,&DAT_14cbd11e0,1);
      lVar8 = 0x28;
      if (*(longlong *)(lVar12 + 0x1c) == CONCAT44(uStack_184,local_188)) goto LAB_140c37bce;
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_160,&DAT_14cbd1208,1);
      lVar8 = 0x34;
      if (*(longlong *)(lVar12 + 0x1c) == local_160) goto LAB_140c37bce;
      if (DAT_14c947fe0 == 0) {
        lVar8 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar8);
        DAT_14c947fe0 = lVar8;
      }
      FUN_140045924(DAT_14c947fe0,&local_168,&DAT_14cbd1230,1);
      lVar8 = 0x40;
      if (*(longlong *)(lVar12 + 0x1c) == local_168) goto LAB_140c37bce;
      fVar23 = 1.0;
    }
    lVar9 = FUN_1400e8a68(param_4);
    lVar10 = FUN_140c38791();
    lVar8 = *(longlong *)(lVar10 + 0x90);
    if (lVar8 == 0) {
      uVar13 = FUN_140261af2();
      lVar8 = FUN_14477b664(uVar13);
      *(longlong *)(lVar10 + 0x90) = lVar8;
    }
    lVar2 = lVar12 + 0x150;
    lVar14 = *(longlong *)(lVar10 + 0x98);
    if (lVar14 == 0) {
      if ((lVar8 != 0) && (plVar15 = (longlong *)(lVar10 + 0x88), *plVar15 != 0)) {
        plVar4 = *(longlong **)(lVar8 + 0xb8);
        local_190 = plVar15;
        if ((plVar4 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
          lVar14 = 0;
        }
        else {
          uVar13 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar14 = FUN_144aff482(uVar13,local_190);
        }
        *(longlong *)(lVar10 + 0x98) = lVar14;
        goto LAB_140c37c10;
      }
LAB_140c37c1e:
      local_178 = 0xffffffff;
      uStack_174 = (undefined4)plVar5[6];
      uStack_170 = (undefined4)((ulonglong)plVar5[6] >> 0x20);
      FUN_140c386b6(lVar2,&local_e0,&local_178,param_4);
    }
    else {
LAB_140c37c10:
      if ((((lVar9 == 0) || (lVar14 == 0)) || (*(longlong *)(lVar9 + 0x3f28) == 0)) ||
         (*(longlong *)(lVar12 + 0x170) == 0)) goto LAB_140c37c1e;
      local_1a8 = FUN_140c38886();
      local_178 = 0xffffffff;
      uStack_174 = (undefined4)*(undefined8 *)(lVar12 + 0x170);
      uStack_170 = (undefined4)((ulonglong)*(undefined8 *)(lVar12 + 0x170) >> 0x20);
      local_188 = 0xffffffff;
      uStack_184 = (undefined4)*(undefined8 *)(lVar9 + 0x3f28);
      uStack_180 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x3f28) >> 0x20);
      local_1a0 = param_4;
      FUN_140c38a48(lVar14,&local_e0);
    }
    pfVar17 = &local_e0;
    if (local_c0 == 3) {
      uVar7 = 3;
      fVar24 = local_e0;
    }
    else {
      pfVar18 = &local_b8;
      FUN_1400b56fe(pfVar18,&local_e0,3);
      fVar24 = local_b8;
      if (local_98 == 0) {
        fVar24 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar18 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar18);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      uVar7 = (uint)local_c0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar17 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar17);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    local_178 = 0xffffffff;
    uStack_174 = (undefined4)plVar5[4];
    uStack_170 = (undefined4)((ulonglong)plVar5[4] >> 0x20);
    pfVar17 = &local_e0;
    FUN_140c386b6(lVar2,pfVar17,&local_178,param_4);
    if (local_c0 == 3) {
      uVar7 = 3;
      fVar22 = local_e0;
    }
    else {
      pfVar18 = &local_b8;
      FUN_1400b56fe(pfVar18,&local_e0,3);
      fVar22 = local_b8;
      if (local_98 == 0) {
        fVar22 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar18 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar18);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      uVar7 = (uint)local_c0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar17 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar17);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    local_178 = 0xffffffff;
    uStack_174 = (undefined4)plVar5[5];
    uStack_170 = (undefined4)((ulonglong)plVar5[5] >> 0x20);
    pfVar17 = &local_e0;
    FUN_140c386b6(lVar2,pfVar17,&local_178,param_4);
    if (local_c0 == 3) {
      uVar7 = 3;
      fVar25 = local_e0;
    }
    else {
      pfVar18 = &local_b8;
      FUN_1400b56fe(pfVar18,&local_e0,3);
      fVar25 = local_b8;
      if (local_98 == 0) {
        fVar25 = 1.0;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
      if (pcVar3 != (code *)0x0) {
        if (0x18 < local_a0) {
          pfVar18 = (float *)CONCAT44(uStack_b4,local_b8);
        }
        (*pcVar3)(pfVar18);
      }
      if (0x18 < local_a0) {
        FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
      }
      uVar7 = (uint)local_c0;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_c8) {
        pfVar17 = (float *)CONCAT44(uStack_dc,local_e0);
      }
      (*pcVar3)(pfVar17);
    }
    if (0x18 < local_c8) {
      FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
    }
    fVar21 = (float)FUN_140c388bf(local_158,param_4);
    _X = 1.0;
    if (1.0 <= fVar21) {
      _X = fVar21;
    }
    fVar22 = powf(_X,fVar22);
    fVar23 = fVar23 * fVar24 * fVar25 * fVar22;
    pfVar17 = local_198;
    if (local_128 == (undefined1 *)0x0) goto LAB_140c37dd5;
  }
  pfVar17 = local_198;
  pppuVar20 = &ppuStack_108;
  if (local_118 != (undefined ***)0x0) {
    pppuVar20 = local_118;
  }
  (*(code *)(*pppuVar20)[2])(pppuVar20);
LAB_140c37dd5:
  *(undefined2 *)(pfVar17 + 6) = 4;
  *pfVar17 = fVar23;
  *(undefined1 *)(pfVar17 + 8) = 3;
  FUN_1448173f8(local_130);
  if ((local_158[0] == '\x03') && (local_148 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_148 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_148 + 0x10))();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pfVar17;
}



// FUNCTION 140c3868a FUN_140c3868a body=12 status=ok
// SIG undefined FUN_140c3868a(void)

void FUN_140c3868a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140c38693. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140c38696 FUN_140c38696 body=31 status=ok
// SIG undefined FUN_140c38696(void)

undefined8 FUN_140c38696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c386b6 FUN_140c386b6 body=218 status=ok
// SIG undefined FUN_140c386b6(void)

longlong FUN_140c386b6(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *param_1;
  FUN_1446dcdd4(&local_60);
  if (DAT_14c9a75f8 == 0) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar1 = FUN_144837462(DAT_14c9a75f8,&local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 != 0) {
      local_60 = 0xffffffff;
      local_5c = param_1[3];
      local_78 = param_4;
      FUN_144873f38(lVar1,param_2,&local_60,param_3);
      goto LAB_140c38745;
    }
  }
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_140c38745:
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c38791 FUN_140c38791 body=244 status=ok
// SIG undefined FUN_140c38791(void)

longlong * FUN_140c38791(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cbccd58 == (longlong *)0x0) {
    memset(&DAT_14cbccd60,0,0xb0);
    FUN_145d4dcea(&DAT_14cbccd60);
    DAT_14cbccd58 = (longlong *)&DAT_14cbccd60;
  }
  plVar1 = DAT_14cbccd58;
  plVar3 = DAT_14cbccd58 + 1;
  if ((char)DAT_14cbccd58[2] == '\0') {
LAB_140c387be:
    if (*plVar3 == 0) goto LAB_140c3882b;
    cVar2 = FUN_1449e3c20(DAT_14cbccd58);
    if (cVar2 == '\0') goto LAB_140c387d4;
  }
  else {
    if ((char)DAT_14cbccd58[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140c387be;
    }
LAB_140c3882b:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_140c387d4;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_loot",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140c387d4:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c38886 FUN_140c38886 body=57 status=ok
// SIG undefined FUN_140c38886(void)

void FUN_140c38886(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba5330 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba5330 = FUN_140002ddd(FUN_1465c2616,uVar1,L"LocalRarityModiferData");
  }
  return;
}



// FUNCTION 140c388bf FUN_140c388bf body=387 status=ok
// SIG undefined FUN_140c388bf(void)

void FUN_140c388bf(char *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined4 local_3c;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0x3f800000;
  local_40 = 0;
  local_3c = 0;
  local_38 = '\0';
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    if (*(longlong *)(param_1 + 8) != 0) goto LAB_140c38920;
  }
  else if (cVar1 == '\x02') {
    if (((((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
         ((int)uVar2 < DAT_14c9647dc)) &&
        ((lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar3 != 0 &&
         (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0xc))))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) goto LAB_140c38920;
  }
  else if (((cVar1 == '\x03') && (*(longlong *)(param_1 + 8) != 0)) &&
          ((*(longlong *)(param_1 + 0x10) != 0 && (0 < *(int *)(*(longlong *)(param_1 + 0x10) + 8)))
          )) goto LAB_140c38920;
  param_1 = param_2;
LAB_140c38920:
  FUN_140af2573(param_1,&local_58);
  FUN_1418ea8f0(param_2,&local_58);
  if (local_38 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48._4_4_ + (float)uStack_50,1.0 - local_58._4_4_);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_3c);
  }
  return;
}



// FUNCTION 140c38a48 FUN_140c38a48 body=1087 status=ok
// SIG undefined FUN_140c38a48(void)

longlong FUN_140c38a48(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                      longlong param_5,undefined8 param_6)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  undefined8 local_70;
  undefined1 local_62;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_14016a17c();
  plVar4 = *(longlong **)(param_1 + 0x48);
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) goto LAB_140c38a9c;
  if (*(longlong *)(param_1 + 0x20) == 0) {
LAB_140c38e85:
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar5 = (longlong *)FUN_14000e0c8(param_1 + 0x18);
    plVar4 = *(longlong **)(param_1 + 0x48);
    if (plVar5 == (longlong *)0x0) {
      if (plVar4 == (longlong *)0x0) goto LAB_140c38e85;
      if (DAT_14c872a72 == '\0') {
        FUN_140113f48();
      }
    }
    else {
      if (plVar4 == plVar5) goto LAB_140c38a9c;
      if ((plVar4 != (longlong *)0x0) && (DAT_14c872a72 == '\0')) {
        FUN_140113f48();
      }
      FUN_1401924dc(plVar5);
    }
    *(longlong **)(param_1 + 0x48) = plVar5;
    plVar4 = plVar5;
  }
LAB_140c38a9c:
  if (((param_5 != 0) && (*(int *)(param_5 + 0x38) <= (int)plVar4[7])) &&
     (*(longlong *)(plVar4[6] + (longlong)*(int *)(param_5 + 0x38) * 8) == param_5 + 0x30)) {
    local_e8 = param_6;
    FUN_144873f38(param_1,param_2,param_3,param_4);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
  }
  local_d0 = param_2;
  local_c0 = param_4;
  if (*(int *)(param_1 + 0x58) != *(int *)(param_1 + 0x84)) {
    lVar10 = *(longlong *)(param_3 + 4);
    uVar1 = (uint)((ulonglong)lVar10 >> 0x10);
    uVar7 = (uint)lVar10 & 0xffff;
    lVar6 = param_1 + 0x88;
    if (*(longlong *)(param_1 + 0x90) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x90);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x98) - 1U &
                             (int)((ulonglong)lVar10 >> 0x20) + ((uint)lVar10 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar5 = (longlong *)(*(longlong *)(param_1 + 0x50) + (longlong)iVar8 * 0x18);
        if (*plVar5 == lVar10) {
          if ((plVar5 != (longlong *)0x0) && (plVar5 = plVar5 + 1, plVar5 != (longlong *)0x0)) {
            for (; plVar4 != (longlong *)0x0;
                plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4)) {
              lVar10 = plVar4[10];
LAB_140c38b77:
              if (lVar10 != 0) {
                if ((~*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) & 0x108001) != 0)
                goto code_r0x000140c38b90;
LAB_140c38baf:
                if (*(longlong *)(lVar10 + 0x70) != 0) {
                  lVar3 = FUN_140c38e8e();
                  lVar6 = *(longlong *)(lVar10 + 0x70);
                  if (lVar6 == lVar3) {
                    local_c8 = (longlong)*(int *)(lVar10 + 0x44) + (longlong)plVar5;
                    if ((local_c8 != 0) &&
                       (cVar2 = FUN_1470e0d9a(local_c8,param_5), lVar6 = local_d0, cVar2 != '\0')) {
                      FUN_140c386b6(local_c8,local_d0,local_c0,param_6);
                      goto LAB_140c38cb0;
                    }
                  }
                  else if (((param_5 != 0) && (*(int *)(param_5 + 0x38) <= *(int *)(lVar6 + 0x38)))
                          && (*(longlong *)
                               (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(param_5 + 0x38) * 8
                               ) == param_5 + 0x30)) {
                    local_98 = 0;
                    local_90 = 0;
                    uStack_88 = 0;
                    local_80 = 0;
                    lStack_78 = 0;
                    local_70 = 0;
                    local_a0 = *(undefined8 *)(local_c0 + 4);
                    local_e0 = (longlong)*(int *)(lVar10 + 0x44) + *plVar5;
                    local_a8 = 0;
                    local_b8 = 0;
                    uStack_b0 = 0;
                    local_d8 = 0;
                    local_e8 = lVar6;
                    FUN_1448275b3(&local_62,&local_a0,1,&local_b8);
                    lVar6 = local_d0;
                    if (local_61 == '\0') {
                      FUN_144874210(local_d0,&local_b8,param_6);
                      if (lStack_78 != 0) {
                        FUN_1400020a8();
                      }
                      goto LAB_140c38cb0;
                    }
                    if (lStack_78 != 0) {
                      FUN_1400020a8();
                    }
                  }
                }
                plVar9 = (longlong *)(lVar10 + 0x18);
                do {
                  for (lVar10 = *plVar9; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x18)) {
                    if ((~*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) & 0x108001) == 0)
                    goto LAB_140c38baf;
                  }
                  plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b0))(plVar4,&local_a0);
                  plVar9 = plVar4 + 10;
                } while (plVar4 != (longlong *)0x0);
                break;
              }
            }
          }
          break;
        }
        iVar8 = (int)plVar5[2];
      } while (iVar8 != -1);
    }
  }
  *(undefined2 *)(local_d0 + 0x18) = 0;
  *(undefined1 *)(local_d0 + 0x20) = 0;
  lVar6 = local_d0;
LAB_140c38cb0:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return lVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140c38b90:
  lVar10 = *(longlong *)(lVar10 + 0x18);
  goto LAB_140c38b77;
}



// FUNCTION 140c38e8e FUN_140c38e8e body=57 status=ok
// SIG undefined FUN_140c38e8e(void)

void FUN_140c38e8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5a20 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5a20 = FUN_140002ddd(FUN_1462af3af,uVar1,L"GbxUEDataTableRowHandle");
  }
  return;
}



// FUNCTION 140c38ec8 FUN_140c38ec8 body=4093 status=ok
// SIG undefined FUN_140c38ec8(void)

void FUN_140c38ec8(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  void **ppvVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  int *piVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  longlong lVar16;
  uint uVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined8 *puVar20;
  longlong lVar21;
  void *pvVar22;
  ushort uVar23;
  int iVar24;
  ulonglong uVar25;
  longlong lVar26;
  ushort uVar27;
  ulonglong uVar28;
  longlong lVar29;
  undefined1 auStack_1e8 [32];
  longlong local_1c8;
  void **local_1c0;
  undefined2 *local_1b8;
  int local_1b0;
  undefined4 local_1ac;
  undefined2 *local_1a8;
  undefined8 uStack_1a0;
  undefined2 *local_190;
  int local_188;
  undefined4 local_184;
  longlong local_180 [2];
  longlong *local_170;
  undefined8 *local_168;
  undefined1 local_15c [4];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e4;
  longlong local_d8;
  undefined4 local_d0;
  void *local_c8;
  ulonglong uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  longlong local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  pvVar22 = DAT_14cbceb60;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_c8 = (void *)0x0;
  uStack_c0 = 0;
  local_90 = 0;
  local_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_84 = 0xffffffff00000080;
  local_7c = 0;
  local_70 = 0;
  local_68 = 0;
  local_b8 = 0;
  local_190 = (undefined2 *)0x0;
  lVar21 = (longlong)DAT_14cbceb68;
  local_188 = DAT_14cbceb68;
  if (lVar21 == 0) {
    local_184 = 0;
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
LAB_140c38fa6:
    puVar18 = &DAT_149dfb77a;
  }
  else {
    FUN_1446dd670(&local_190,DAT_14cbceb68,0);
    memcpy(local_190,pvVar22,lVar21 * 2);
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_140 = (longlong *)((ulonglong)uStack_140._4_4_ << 0x20);
    puVar18 = local_190;
    if (local_188 == 0) goto LAB_140c38fa6;
  }
  uStack_148 = 0;
  uStack_150 = (longlong *)0x0;
  FUN_140c3a228(&local_158,puVar18);
  FUN_140056680(local_180,L"GameType");
  local_170 = local_180;
  local_168 = &local_158;
  FUN_140c3a2ee(&local_b0,&local_1a8,&local_170,0);
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(&local_158);
  local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
  uStack_150 = (longlong *)0x0;
  uStack_148 = 0;
  uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
  uVar4 = *(undefined4 *)(param_1 + 400);
  FUN_140c3a2ac(&local_158);
  local_158 = (undefined2 *)CONCAT71(local_158._1_7_,1);
  uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,uVar4);
  FUN_140056680(local_180,L"MaxPartyMembers");
  local_170 = local_180;
  local_168 = &local_158;
  FUN_140c3a2ee(&local_b0,&local_1a8,&local_170,0);
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(&local_158);
  local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
  uStack_150 = (longlong *)0x0;
  uStack_148 = 0;
  uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
  uVar4 = *(undefined4 *)(param_1 + 0x194);
  FUN_140c3a2ac(&local_158);
  local_158 = (undefined2 *)CONCAT71(local_158._1_7_,1);
  uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,uVar4);
  FUN_140056680(local_180,L"NumPartyMembers");
  local_170 = local_180;
  local_168 = &local_158;
  FUN_140c3a2ee(&local_b0,&local_1a8,&local_170,0);
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(&local_158);
  lVar21 = FUN_140c3a4ea(param_1,param_2);
  if (lVar21 != 0) {
    uVar10 = FUN_1401e6c61();
    piVar11 = (int *)FUN_1409e484c(lVar21,uVar10);
    iVar24 = *piVar11;
    if (0 < iVar24) {
      local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
      uStack_150 = (longlong *)0x0;
      uStack_148 = 0;
      uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
      FUN_140c3a2ac(&local_158);
      local_158 = (undefined2 *)CONCAT71(local_158._1_7_,1);
      uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,iVar24);
      FUN_140056680(local_180,L"PlayerLevel");
      local_170 = local_180;
      local_168 = &local_158;
      FUN_140c3a2ee(&local_b0,&local_1a8,&local_170,0);
      if (local_180[0] != 0) {
        FUN_1400020a8();
      }
      FUN_140c3a2ac(&local_158);
    }
  }
  lVar21 = FUN_140c3a4ea(param_1,param_2);
  if (lVar21 != 0) {
    bVar3 = *(byte *)(lVar21 + 0x711);
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_150 = (longlong *)0x0;
    uStack_148 = 0;
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    FUN_140c3a2ac(&local_158);
    local_158 = (undefined2 *)CONCAT71(local_158._1_7_,1);
    uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,(uint)bVar3);
    FUN_140056680(local_180,L"Difficulty");
    local_170 = local_180;
    local_168 = &local_158;
    FUN_140c3a2ee(&local_b0,&local_1a8,&local_170,0);
    if (local_180[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140c3a2ac(&local_158);
  }
  lVar21 = FUN_140c3a4ea(param_1,param_2);
  if ((lVar21 == 0) ||
     (lVar12 = FUN_1403b0700(lVar21), *(longlong *)(lVar12 + 0x38) == DAT_14cb71810)) {
    local_1a8 = (undefined2 *)0x0;
    uStack_1a0 = 0;
    puVar18 = &DAT_149dfb77a;
  }
  else {
    lVar21 = FUN_1403b0700(lVar21);
    local_158 = *(undefined2 **)(lVar21 + 0x38);
    FUN_1400021e4(&local_158,&local_1a8);
    puVar18 = local_1a8;
    if ((int)uStack_1a0 == 0) {
      puVar18 = &DAT_149dfb77a;
    }
  }
  uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
  local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
  uStack_148 = 0;
  uStack_150 = (longlong *)0x0;
  FUN_140c3a228(&local_158,puVar18);
  FUN_140056680(local_180,L"CharacterDef");
  local_170 = local_180;
  local_168 = &local_158;
  FUN_140c3a2ee(&local_b0,&local_1b8,&local_170,0);
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(&local_158);
  pvVar22 = DAT_14cbceb40;
  if (*(char *)(param_1 + 0x1b0) != '\x01') {
    local_1b8 = (undefined2 *)0x0;
    lVar21 = (longlong)DAT_14cbceb48;
    local_1b0 = DAT_14cbceb48;
    if (lVar21 == 0) {
      local_1ac = 0;
      local_158 = (undefined2 *)((ulonglong)local_158._1_7_ << 8);
      uStack_140 = (longlong *)((ulonglong)uStack_140._4_4_ << 0x20);
LAB_140c39b68:
      puVar18 = &DAT_149dfb77a;
    }
    else {
      FUN_1446dd670(&local_1b8,DAT_14cbceb48,0);
      memcpy(local_1b8,pvVar22,lVar21 * 2);
      local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
      uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
      puVar18 = local_1b8;
      if (local_1b0 == 0) goto LAB_140c39b68;
    }
    uStack_148 = 0;
    uStack_150 = (longlong *)0x0;
    FUN_140c3a228(&local_158,puVar18);
    local_170 = &DAT_14cb8e470;
    local_168 = &local_158;
    FUN_140c3a6ca(&local_b0,local_180,&local_170,0);
    FUN_140c3a2ac(&local_158);
    goto LAB_140c394bb;
  }
  iVar24 = (int)uStack_1a0;
  local_1b8 = (undefined2 *)0x0;
  puVar14 = &DAT_14cbceb40;
  if (1 < (int)uStack_1a0) {
    puVar14 = &DAT_14cbceb50;
  }
  iVar5 = *(int *)(puVar14 + 1);
  local_1b0 = iVar5;
  if (iVar5 == 0) {
    local_1ac = 0;
    local_158 = (undefined2 *)((ulonglong)local_158._1_7_ << 8);
    uStack_140 = (longlong *)((ulonglong)uStack_140._4_4_ << 0x20);
LAB_140c39399:
    puVar18 = &DAT_149dfb77a;
  }
  else {
    if (1 < (int)uStack_1a0) {
      pvVar22 = DAT_14cbceb50;
    }
    FUN_1446dd670(&local_1b8,iVar5,0);
    memcpy(local_1b8,pvVar22,(longlong)iVar5 * 2);
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    puVar18 = local_1b8;
    if (local_1b0 == 0) goto LAB_140c39399;
  }
  uStack_148 = 0;
  uStack_150 = (longlong *)0x0;
  FUN_140c3a228(&local_158,puVar18);
  local_170 = &DAT_14cb8e470;
  local_168 = &local_158;
  FUN_140c3a6ca(&local_b0,local_180,&local_170,0);
  FUN_140c3a2ac(&local_158);
  if (iVar24 < 2) goto LAB_140c394bb;
  lVar21 = FUN_140c3a4ea(param_1,param_2);
  if (lVar21 == 0) {
LAB_140c39c59:
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    puVar18 = (undefined2 *)0x0;
    puVar19 = &DAT_149dfb77a;
  }
  else {
    lVar12 = FUN_140944864(lVar21 + 0xde8);
    if (lVar12 == 0) {
      lVar12 = FUN_14129b2e6(lVar21);
      if (lVar12 != 0) {
        lVar12 = FUN_14129b2e6(lVar21);
        lVar12 = *(longlong *)(lVar12 + 0x1c8);
        if (lVar12 == 0) {
          uStack_148 = DAT_14c8464f0;
          local_158 = (undefined2 *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_150 = (longlong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_158 = *(undefined2 **)(lVar12 + 0x260);
          uStack_150 = *(longlong **)(lVar12 + 0x268);
          uStack_148 = *(undefined8 *)(lVar12 + 0x270);
        }
        uVar10 = FUN_1447210f0(lVar21);
        lVar12 = FUN_145788b2d(uVar10,&local_158);
        if (lVar12 != 0) goto LAB_140c3940f;
      }
      lVar29 = FUN_14073fae1();
      lVar21 = *(longlong *)(lVar29 + 0x188);
      if (lVar21 == 0) {
        uVar10 = FUN_141030812();
        lVar21 = FUN_14477b664(uVar10);
        *(longlong *)(lVar29 + 0x188) = lVar21;
      }
      lVar12 = *(longlong *)(lVar29 + 400);
      if (lVar12 == 0) {
        if ((lVar21 != 0) && (*(longlong *)(lVar29 + 0x180) != 0)) {
          plVar6 = *(longlong **)(lVar21 + 0xb8);
          if ((plVar6 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar9 == '\0')) {
            *(undefined8 *)(lVar29 + 400) = 0;
          }
          else {
            uVar10 = (**(code **)(*plVar6 + 0x110))(plVar6);
            lVar12 = FUN_144aff482(uVar10,(longlong *)(lVar29 + 0x180));
            *(longlong *)(lVar29 + 400) = lVar12;
            if (lVar12 != 0) goto LAB_140c3940f;
          }
        }
        goto LAB_140c39c59;
      }
    }
LAB_140c3940f:
    puVar15 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar12 + 8) != (undefined4 *)0x0) {
      puVar15 = *(undefined4 **)(lVar12 + 8);
    }
    local_158 = (undefined2 *)0x0;
    uStack_150 = (longlong *)0x0;
    FUN_1400b2348(puVar15,&local_158,1);
    puVar18 = local_158;
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    puVar19 = puVar18;
    if ((int)uStack_150 == 0) {
      puVar19 = &DAT_149dfb77a;
    }
  }
  uStack_148 = 0;
  uStack_150 = (longlong *)0x0;
  FUN_140c3a228(&local_158,puVar19);
  FUN_140056680(local_180,L"ZoneIdent");
  local_170 = local_180;
  local_168 = &local_158;
  FUN_140c3a2ee(&local_b0,local_15c,&local_170,0);
  if (local_180[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3a2ac(&local_158);
  if (puVar18 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar18);
  }
LAB_140c394bb:
  FUN_140b73172(&local_158,&local_c8,0);
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  local_c8 = local_158;
  uStack_c0 = (ulonglong)uStack_150;
  uStack_148 = 0;
  uStack_140 = (longlong *)0x0;
  local_158 = (void *)0x0;
  uStack_150 = (longlong *)0x0;
  local_138 = *(undefined8 *)(param_1 + 0x18);
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 1;
  local_f8 = 0;
  local_f0 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_ec = 0xffffffff00000080;
  local_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  iVar24 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar24 + 1U;
  pvVar22 = (void *)0x0;
  if (*(uint *)(param_3 + 0x14) < iVar24 + 1U) {
    FUN_141164ea0((longlong *)(param_3 + 8),iVar24);
    pvVar22 = local_158;
  }
  puVar14 = (undefined8 *)((longlong)iVar24 * 0x90 + *(longlong *)(param_3 + 8));
  *puVar14 = pvVar22;
  puVar14[1] = uStack_150;
  local_158 = (void *)0x0;
  uStack_150 = (longlong *)0x0;
  puVar14[2] = uStack_148;
  puVar14[3] = uStack_140;
  uStack_148 = 0;
  uStack_140 = (longlong *)0x0;
  puVar14[4] = local_138;
  puVar14[5] = local_130;
  local_130 = 0;
  *(undefined4 *)(puVar14 + 6) = (undefined4)uStack_128;
  *(undefined4 *)((longlong)puVar14 + 0x34) = uStack_128._4_4_;
  uStack_128 = 0;
  *(undefined1 *)(puVar14 + 7) = local_120;
  FUN_141164924(puVar14 + 8,&local_118);
  local_d0 = 0;
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  FUN_1411632c2(&local_118);
  if (local_130 != 0) {
    FUN_1400020a8();
  }
  plVar6 = uStack_140;
  if (uStack_140 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_140 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_140)(uStack_140);
      LOCK();
      piVar11 = (int *)((longlong)plVar6 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  plVar6 = uStack_150;
  if (uStack_150 != (longlong *)0x0) {
    LOCK();
    plVar1 = uStack_150 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*uStack_150)(uStack_150);
      LOCK();
      piVar11 = (int *)((longlong)plVar6 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((longlong)*(int *)(param_3 + 0x10) == 0) {
LAB_140c39a2b:
    if (local_1b8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_1a8 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_190 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_68 = 0;
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    FUN_1411632c2(&local_b0);
    if (local_c8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar21 = *(longlong *)(param_3 + 8);
  lVar12 = (longlong)*(int *)(param_3 + 0x10) * 0x90 + lVar21;
LAB_140c39681:
  pvVar22 = local_c8;
  ppvVar2 = (void **)(lVar21 + 0x28);
  if (ppvVar2 != &local_c8) {
    iVar24 = (int)uStack_c0;
    lVar29 = (longlong)(int)uStack_c0;
    *(int *)(lVar21 + 0x30) = (int)uStack_c0;
    if ((int)uStack_c0 == 0 && *(int *)(lVar21 + 0x34) == 0) {
      *(undefined4 *)(lVar21 + 0x34) = 0;
    }
    else {
      FUN_1446dd670(ppvVar2,uStack_c0 & 0xffffffff);
      if (iVar24 != 0) {
        memcpy(*ppvVar2,pvVar22,lVar29 * 2);
      }
    }
  }
  *(undefined1 *)(lVar21 + 0x38) = local_b8;
  lVar29 = lVar21 + 0x40;
  local_1c0 = ppvVar2;
  FUN_140c39ec6(lVar29,&local_b0);
  if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
    lVar26 = *(longlong *)(lVar21 + 0x20);
    uVar7 = (uint)((ulonglong)lVar26 >> 0x10);
    uVar17 = (uint)lVar26 & 0xffff;
    lVar16 = *(longlong *)(param_1 + 0x1f8);
    if (*(longlong *)(param_1 + 0x1f8) == 0) {
      lVar16 = param_1 + 0x1f0;
    }
    iVar24 = *(int *)(lVar16 + (ulonglong)
                               (*(int *)(param_1 + 0x200) - 1U &
                               (int)((ulonglong)lVar26 >> 0x20) + ((uint)lVar26 << 0x10 | uVar17) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar17 >> 4)) * 4);
    if (iVar24 != -1) {
      do {
        lVar16 = *(longlong *)(param_1 + 0x1b8) + (longlong)iVar24 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar24 * 0x20) == lVar26) {
          if (((lVar16 != 0) && (lVar16 != -8)) && ((longlong)*(int *)(lVar16 + 0x10) != 0)) {
            puVar14 = *(undefined8 **)(lVar16 + 8);
            puVar13 = puVar14 + (longlong)*(int *)(lVar16 + 0x10) * 2;
            puVar20 = puVar14;
            goto LAB_140c397c5;
          }
          break;
        }
        iVar24 = *(int *)(lVar16 + 0x18);
      } while (iVar24 != -1);
    }
  }
  goto LAB_140c397a2;
LAB_140c397c5:
  puVar18 = &DAT_149dfb77a;
  if (*(int *)(puVar20 + 1) != 0) {
    puVar18 = (undefined2 *)*puVar20;
  }
  lVar26 = 0;
  do {
    uVar23 = *(ushort *)((longlong)puVar18 + lVar26);
    uVar27 = *(ushort *)((longlong)L"steam_player_group" + lVar26);
    local_1c8 = lVar29;
    if (uVar23 == uVar27) {
      if (uVar23 == 0) goto LAB_140c3982b;
    }
    else {
      if (0x7f < (uVar27 | uVar23)) {
        iVar24 = (uint)uVar23 - (uint)uVar27;
        goto LAB_140c39caf;
      }
      if ((&DAT_149e05da0)[uVar23] != (&DAT_149e05da0)[(uint)uVar27]) break;
    }
    lVar26 = lVar26 + 2;
  } while( true );
  iVar24 = (uint)(byte)(&DAT_149e05da0)[uVar23] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar27];
LAB_140c39caf:
  if (iVar24 == 0) {
LAB_140c3982b:
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_150 = (longlong *)0x0;
    uStack_148 = 0;
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    puVar18 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x1a8) != 0) {
      puVar18 = *(undefined2 **)(param_1 + 0x1a0);
    }
    FUN_140c3a228(&local_158,puVar18);
    FUN_140056680(local_180,L"steam_player_group");
    local_170 = local_180;
    local_168 = &local_158;
    FUN_140c3a2ee(lVar29,local_15c,&local_170,0);
    if (local_180[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140c3a2ac(&local_158);
    if ((longlong)*(int *)(lVar16 + 0x10) == 0) goto LAB_140c399d0;
    puVar14 = *(undefined8 **)(lVar16 + 8);
    puVar13 = puVar14 + (longlong)*(int *)(lVar16 + 0x10) * 2;
    bVar8 = true;
    goto LAB_140c398ea;
  }
  puVar20 = puVar20 + 2;
  if (puVar20 == puVar13) goto code_r0x000140c39ccd;
  goto LAB_140c397c5;
code_r0x000140c39ccd:
  bVar8 = false;
LAB_140c398ea:
LAB_140c398f1:
  puVar18 = &DAT_149dfb77a;
  if (*(int *)(puVar14 + 1) != 0) {
    puVar18 = (undefined2 *)*puVar14;
  }
  lVar29 = 0;
  do {
    uVar23 = *(ushort *)((longlong)puVar18 + lVar29);
    uVar25 = (ulonglong)uVar23;
    uVar27 = *(ushort *)((longlong)L"steam_player_group_size" + lVar29);
    if (uVar23 == uVar27) {
      if (uVar23 == 0) goto LAB_140c3994c;
    }
    else {
      if (0x7f < (uVar27 | uVar23)) break;
      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar25];
      uVar28 = (ulonglong)uVar27;
      uVar27 = (ushort)(byte)(&DAT_149e05da0)[uVar28];
      if ((&DAT_149e05da0)[uVar25] != (&DAT_149e05da0)[uVar28]) break;
    }
    lVar29 = lVar29 + 2;
  } while( true );
  if (uVar23 == uVar27) {
LAB_140c3994c:
    local_158 = (undefined2 *)((ulonglong)local_158 & 0xffffffffffffff00);
    uStack_150 = (longlong *)0x0;
    uStack_148 = 0;
    uStack_140 = (longlong *)((ulonglong)uStack_140 & 0xffffffff00000000);
    uVar4 = *(undefined4 *)(param_1 + 0x194);
    FUN_140c3a2ac(&local_158);
    local_158 = (undefined2 *)CONCAT71(local_158._1_7_,1);
    uStack_150 = (longlong *)CONCAT44(uStack_150._4_4_,uVar4);
    FUN_140056680(local_180,L"steam_player_group_size");
    local_170 = local_180;
    local_168 = &local_158;
    FUN_140c3a2ee(local_1c8,local_15c,&local_170,0);
    if (local_180[0] != 0) {
      FUN_1400020a8();
    }
    FUN_140c3a2ac(&local_158);
    goto LAB_140c399d0;
  }
  puVar14 = puVar14 + 2;
  if (puVar14 == puVar13) goto code_r0x000140c39c9f;
  goto LAB_140c398f1;
code_r0x000140c39c9f:
  if (bVar8) {
LAB_140c399d0:
    ppvVar2 = local_1c0;
    FUN_140b73172(&local_158,local_1c0,0);
    if (ppvVar2 == (void **)&local_158) {
      if (local_158 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(lVar21 + 0x28) != 0) {
        FUN_1400020a8();
      }
      *(undefined2 **)(lVar21 + 0x28) = local_158;
      local_158 = (void *)0x0;
      *(int *)(lVar21 + 0x30) = (int)uStack_150;
      *(undefined4 *)(lVar21 + 0x34) = uStack_150._4_4_;
    }
  }
LAB_140c397a2:
  lVar21 = lVar21 + 0x90;
  if (lVar21 == lVar12) goto LAB_140c39a2b;
  goto LAB_140c39681;
}



// FUNCTION 140c39ec6 FUN_140c39ec6 body=154 status=ok
// SIG undefined FUN_140c39ec6(void)

longlong FUN_140c39ec6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140c39f1b;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140c39f1b:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140c39f60(param_1,param_2);
  return param_1;
}



// FUNCTION 140c39f60 FUN_140c39f60 body=337 status=ok
// SIG undefined FUN_140c39f60(void)

undefined8 * FUN_140c39f60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *_Dst;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1411632fa(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_140c3a0b2(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0xc) = *(undefined8 *)(puVar8 + 0xc);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0xe;
        puVar7 = puVar7 + 0xe;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 140c3a0b2 FUN_140c3a0b2 body=105 status=ok
// SIG undefined FUN_140c3a0b2(void)

undefined8 * FUN_140c3a0b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  FUN_140c3a11c(param_1 + 2,param_2 + 2);
  return param_1;
}



// FUNCTION 140c3a11c FUN_140c3a11c body=266 status=ok
// SIG undefined FUN_140c3a11c(void)

undefined4 * FUN_140c3a11c(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *_Dst;
  undefined2 *puVar10;
  ulonglong _Size;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined1 *)param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  cVar1 = *param_2;
  if (cVar1 == '\x06') {
    FUN_140c3a228(param_1,*(undefined8 *)(param_2 + 8));
  }
  else if (cVar1 == '\b') {
    _Src = *(void **)(param_2 + 8);
    uVar2 = *(uint *)(param_2 + 0x10);
    _Size = (ulonglong)uVar2;
    FUN_140c3a2ac(param_1);
    *(undefined1 *)param_1 = 8;
    if (_Size != 0) {
      param_1[4] = uVar2;
      _Dst = (void *)FUN_14001cc68(_Size,0x10);
      *(void **)(param_1 + 2) = _Dst;
      memcpy(_Dst,_Src,_Size);
    }
  }
  else {
    if (cVar1 != '\n') {
      uVar3 = *(undefined4 *)param_2;
      uVar4 = *(undefined4 *)(param_2 + 4);
      uVar5 = *(undefined4 *)(param_2 + 8);
      uVar6 = *(undefined4 *)(param_2 + 0xc);
      uVar7 = *(undefined4 *)(param_2 + 0x14);
      uVar8 = *(undefined4 *)(param_2 + 0x18);
      uVar9 = *(undefined4 *)(param_2 + 0x1c);
      param_1[4] = *(undefined4 *)(param_2 + 0x10);
      param_1[5] = uVar7;
      param_1[6] = uVar8;
      param_1[7] = uVar9;
      *param_1 = uVar3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    FUN_140056680(&local_30,*(undefined8 *)(param_2 + 8));
    puVar10 = local_30;
    if (local_28 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140c3a228(param_1,puVar10);
    *(undefined1 *)param_1 = 10;
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3a228 FUN_140c3a228 body=132 status=ok
// SIG undefined FUN_140c3a228(void)

void FUN_140c3a228(undefined1 *param_1,wchar_t *param_2)

{
  size_t sVar1;
  wchar_t *_Dest;
  longlong lVar2;
  longlong lVar3;
  
  FUN_140c3a2ac();
  *param_1 = 6;
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    lVar3 = (longlong)((sVar1 << 0x20) + 0x100000000) >> 0x1f;
    lVar2 = -1;
    if (-2 < (int)sVar1) {
      lVar2 = lVar3 + (ulonglong)(lVar3 == 0);
    }
    _Dest = (wchar_t *)FUN_14001cc68(lVar2,0x10);
    *(wchar_t **)(param_1 + 8) = _Dest;
    if (0 < (int)sVar1) {
                    /* WARNING: Could not recover jumptable at 0x000140c3a298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      wcscpy(_Dest,param_2);
      return;
    }
    *_Dest = L'\0';
  }
  return;
}



// FUNCTION 140c3a2ac FUN_140c3a2ac body=65 status=ok
// SIG undefined FUN_140c3a2ac(void)

void FUN_140c3a2ac(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((((cVar1 == '\x06') || (cVar1 == '\b')) || (cVar1 == '\n')) &&
     (*(longlong *)(param_1 + 8) != 0)) {
    FUN_1400020a8();
  }
  *param_1 = '\0';
  param_1[8] = '\0';
  param_1[9] = '\0';
  param_1[10] = '\0';
  param_1[0xb] = '\0';
  param_1[0xc] = '\0';
  param_1[0xd] = '\0';
  param_1[0xe] = '\0';
  param_1[0xf] = '\0';
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  param_1[0x14] = '\0';
  param_1[0x15] = '\0';
  param_1[0x16] = '\0';
  param_1[0x17] = '\0';
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  return;
}



// FUNCTION 140c3a2ee FUN_140c3a2ee body=507 status=ok
// SIG undefined FUN_140c3a2ee(void)

undefined4 *
FUN_140c3a2ee(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  undefined2 *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140dfa92e(param_1,local_50);
  puVar1 = (undefined8 *)*param_3;
  puVar2 = (undefined4 *)param_3[1];
  *local_48 = *puVar1;
  uVar18 = 0;
  *puVar1 = 0;
  *(undefined4 *)(local_48 + 1) = *(undefined4 *)(puVar1 + 1);
  *(undefined4 *)((longlong)local_48 + 0xc) = *(undefined4 *)((longlong)puVar1 + 0xc);
  puVar1[1] = 0;
  *(undefined1 *)(local_48 + 2) = 0;
  *(undefined4 *)(local_48 + 5) = 0;
  local_48[3] = 0;
  local_48[4] = 0;
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  uVar7 = puVar2[5];
  uVar8 = puVar2[6];
  uVar9 = puVar2[7];
  *(undefined4 *)(local_48 + 4) = puVar2[4];
  *(undefined4 *)((longlong)local_48 + 0x24) = uVar7;
  *(undefined4 *)(local_48 + 5) = uVar8;
  *(undefined4 *)((longlong)local_48 + 0x2c) = uVar9;
  *(undefined4 *)(local_48 + 2) = uVar3;
  *(undefined4 *)((longlong)local_48 + 0x14) = uVar4;
  *(undefined4 *)(local_48 + 3) = uVar5;
  *(undefined4 *)((longlong)local_48 + 0x1c) = uVar6;
  *(undefined1 *)puVar2 = 0;
  FUN_140c3a2ac();
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  iVar16 = *(int *)(local_48 + 1);
  iVar13 = iVar16 + -1;
  if (iVar16 == 0) {
    iVar13 = 0;
  }
  if (0 < iVar13) {
    if (iVar16 == 0) {
      puVar11 = &DAT_149dfb77a;
    }
    else {
      puVar11 = (undefined2 *)*local_48;
    }
    lVar14 = 0;
    uVar18 = 0;
    do {
      uVar15 = ((uint)(0x19 < (ushort)puVar11[lVar14] - 0x61) * 0x20 + (uint)(ushort)puVar11[lVar14]
               ) - 0x20;
      uVar17 = (uint)(uVar18 >> 8) ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar18 ^ uVar15) & 0xff) * 4);
      uVar18 = (ulonglong)
               (uVar17 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar17 & 0xff ^ uVar15 >> 8 & 0xff) * 4));
      lVar14 = lVar14 + 1;
    } while (iVar13 != (int)lVar14);
  }
  local_68 = param_4;
  cVar10 = FUN_140dfa750(param_1,uVar18,local_48,&local_54);
  if (cVar10 == '\0') {
    uVar15 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar15 < 4) {
      iVar16 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar16 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar15 < 1) || (iVar16 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar18;
      *(uint *)((longlong)local_48 + 0x34) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar16;
      FUN_140dfae20(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3a4ea FUN_140c3a4ea body=405 status=ok
// SIG undefined FUN_140c3a4ea(void)

longlong FUN_140c3a4ea(undefined8 param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = FUN_140c3a680();
  if ((lVar1 == 0) || ((longlong)*(int *)(lVar1 + 0x40) == 0)) {
LAB_140c3a665:
    lVar2 = 0;
  }
  else {
    lVar3 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + lVar3);
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == param_2)) {
        lVar1 = *(longlong *)(lVar2 + 0x30);
        if ((lVar1 == 0) || (lVar3 = *(longlong *)(lVar1 + 0x398), lVar3 == 0)) goto LAB_140c3a665;
        if (DAT_14cbae3d8 == 0) {
          local_30 = &local_18;
          local_18 = FUN_141030f22;
          local_20 = FUN_14081d0ea;
          local_28 = &LAB_1464f5fc4;
          local_38 = &LAB_148c3dd26;
          local_40 = &LAB_1459673ba;
          local_48 = L"Engine";
          local_50 = 0;
          local_58 = 0x10000004;
          local_60 = 0x10;
          local_68 = 0x1360;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
          lVar3 = *(longlong *)(lVar1 + 0x398);
          if (lVar3 == 0) goto LAB_140c3a665;
        }
        lVar2 = 0;
        if ((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 != 0)) {
          if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cbae3d8 + 0x38)) goto LAB_140c3a665;
          lVar2 = 0;
          if (*(longlong *)
               (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
              DAT_14cbae3d8 + 0x30) {
            lVar2 = lVar3;
          }
        }
        break;
      }
      lVar3 = lVar3 + 8;
      lVar2 = 0;
    } while ((longlong)*(int *)(lVar1 + 0x40) * 8 != lVar3);
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140c3a680 FUN_140c3a680 body=73 status=ok
// SIG undefined FUN_140c3a680(void)

undefined8 FUN_140c3a680(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x20);
  uVar2 = 0;
  if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    if (*(int *)(puVar3 + 2) != *(int *)(param_1 + 0x24)) {
      return 0;
    }
    if ((*(uint *)(puVar3 + 1) & 0x10200000) != 0) {
      return 0;
    }
    uVar2 = *puVar3;
  }
  return uVar2;
}



// FUNCTION 140c3a6ca FUN_140c3a6ca body=445 status=ok
// SIG undefined FUN_140c3a6ca(void)

undefined4 *
FUN_140c3a6ca(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140dfa92e();
  uVar8 = 0;
  FUN_140c3a888(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50;
  iVar7 = *(int *)(local_48 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_48;
    }
    lVar5 = 0;
    uVar8 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = uVar8 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar8 ^ uVar6) & 0xff) * 4);
      uVar8 = uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_68 = param_4;
  cVar1 = FUN_140dfa750(param_1,uVar8,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar6 < 4) {
      iVar7 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_48 + 0x34) = uVar8;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_140dfae20(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3a888 FUN_140c3a888 body=133 status=ok
// SIG undefined FUN_140c3a888(void)

undefined8 *
FUN_140c3a888(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar2 = *param_4;
  uVar3 = param_4[1];
  uVar4 = param_4[2];
  uVar5 = param_4[3];
  uVar6 = param_4[5];
  uVar7 = param_4[6];
  uVar8 = param_4[7];
  *(undefined4 *)(param_1 + 4) = param_4[4];
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
  *(undefined4 *)(param_1 + 5) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  *(undefined1 *)param_4 = 0;
  FUN_140c3a2ac(param_4);
  return param_1;
}



// FUNCTION 140c3a90d FUN_140c3a90d body=188 status=ok
// SIG undefined FUN_140c3a90d(void)

void FUN_140c3a90d(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_14067bc2a();
  if (lVar3 != 0) {
    FUN_14067bd00(lVar3,param_2);
    return;
  }
  lVar4 = FUN_14073fae1();
  lVar3 = *(longlong *)(lVar4 + 0x188);
  if (lVar3 == 0) {
    uVar5 = FUN_141030812();
    lVar3 = FUN_14477b664(uVar5);
    *(longlong *)(lVar4 + 0x188) = lVar3;
  }
  if (*(longlong *)(lVar4 + 400) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(lVar4 + 0x180) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar5 = FUN_144aff482(uVar5,(longlong *)(lVar4 + 0x180));
    }
    *(undefined8 *)(lVar4 + 400) = uVar5;
    return;
  }
  return;
}



// FUNCTION 140c3aa26 FUN_140c3aa26 body=429 status=ok
// SIG undefined FUN_140c3aa26(void)

void FUN_140c3aa26(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x4c8);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x1b0);
    if (plVar1 == (longlong *)0x0) {
      plVar1 = (longlong *)(**(code **)(*(longlong *)(lVar2 + 0x398) + 0x10))(lVar2 + 0x398);
    }
    if (*(longlong *)(lVar2 + 0xe10) == 0) {
      plVar3 = *(longlong **)(param_1 + 0x4c8);
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x4c8);
      if ((*(byte *)(*(longlong *)(lVar2 + 0xe10) + 0x588) & 1) != 0) {
        if (plVar1 == (longlong *)0x0) {
          plVar1 = plVar3;
        }
        lVar2 = plVar3[0x39];
        if (lVar2 == 0) {
          local_28 = DAT_14c8464f0;
          local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        }
        else {
          local_38 = *(undefined8 *)(lVar2 + 0x260);
          uStack_30 = *(undefined8 *)(lVar2 + 0x268);
          local_28 = *(undefined8 *)(lVar2 + 0x270);
        }
        lVar2 = *(longlong *)(param_1 + 0xb0);
        if (lVar2 == 0) {
          lVar2 = FUN_1448abda6(param_1);
        }
        FUN_140c3abd4(lVar2,&local_38,plVar1,0);
        goto LAB_140c3aad6;
      }
    }
    if (plVar1 == (longlong *)0x0) {
      plVar1 = plVar3;
    }
    (**(code **)(*plVar3 + 0x328))(plVar3,&local_38);
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0x1c8);
    if (lVar2 == 0) {
      local_48 = DAT_14c8464f0;
      local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_58 = *(undefined8 *)(lVar2 + 0x260);
      uStack_50 = *(undefined8 *)(lVar2 + 0x268);
      local_48 = *(undefined8 *)(lVar2 + 0x270);
    }
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    FUN_140806284(lVar2,&local_58,&local_38,plVar1);
  }
LAB_140c3aad6:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3abd4 FUN_140c3abd4 body=306 status=ok
// SIG undefined FUN_140c3abd4(void)

void FUN_140c3abd4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  longlong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_1 != (longlong *)0x0) && (lVar3 = (**(code **)(*param_1 + 0x180))(), lVar3 != 0)) &&
     (iVar2 = FUN_14490d72a(lVar3), iVar2 != 3)) {
    local_58 = (**(code **)(*param_1 + 0x180))(param_1);
    FUN_1408066c0(local_90,&DAT_14cb78ba8);
    lVar1 = local_68;
    lVar3 = local_80;
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + 1;
    UNLOCK();
    plVar5 = local_88;
LAB_140c3aca0:
    if (plVar5 != local_70) {
      local_a0 = 0;
      local_a8 = param_4;
      FUN_1408067b6(plVar5[2],2,param_2,param_3);
      do {
        plVar5 = (longlong *)*plVar5;
        if (plVar5 == (longlong *)0x0) break;
        if (*(longlong *)(plVar5[2] + 0x30) == 0) {
          lVar4 = 0;
        }
        else {
          lVar4 = FUN_1447210f0();
        }
      } while (lVar4 != *local_78);
      goto LAB_140c3aca0;
    }
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 8) = *(int *)(local_68 + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(local_80 + 8) = *(int *)(local_80 + 8) + -1;
    UNLOCK();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c3ad16 FUN_140c3ad16 body=40 status=ok
// SIG undefined FUN_140c3ad16(void)

undefined8 FUN_140c3ad16(undefined8 param_1,int param_2)

{
  FUN_140c3ad3e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3ad3e FUN_140c3ad3e body=272 status=ok
// SIG undefined FUN_140c3ad3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3ad3e(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b6bfaf0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677d0;
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
  *param_1 = &PTR_FUN_14b4677f0;
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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
                    /* WARNING: Could not recover jumptable at 0x000140c3ae2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c3ae5c FUN_140c3ae5c body=276 status=ok
// SIG undefined FUN_140c3ae5c(void)

void FUN_140c3ae5c(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  FUN_140aa1e3c();
  if ((*(longlong *)(param_1 + 0x128) != 0) && (*(int *)(param_1 + 0x90) == 0)) {
    *(undefined4 *)(param_1 + 0x90) = 1;
    if (*(int *)(param_1 + 0x94) == 0) {
      FUN_1487bea9a(param_1 + 0x88,0);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x88);
    *puVar2 = *(undefined8 *)(param_1 + 0x120);
    uVar4 = *(undefined4 *)(param_1 + 300);
    uVar5 = *(undefined4 *)(param_1 + 0x130);
    uVar6 = *(undefined4 *)(param_1 + 0x134);
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x128);
    *(undefined4 *)((longlong)puVar2 + 0xc) = uVar4;
    *(undefined4 *)(puVar2 + 2) = uVar5;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uVar6;
    puVar2[3] = 0;
    iVar1 = *(int *)(param_1 + 0x140);
    _Src = *(void **)(param_1 + 0x138);
    *(int *)(puVar2 + 4) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(puVar2 + 3,iVar1,0);
      memcpy((void *)puVar2[3],_Src,(longlong)iVar1 * 2);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    *(undefined8 *)(param_1 + 0x128) = 0;
    *(undefined8 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x140) = 0;
    if (*(int *)(param_1 + 0x144) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x138),0);
    }
    puVar3 = *(undefined2 **)(param_1 + 0x138);
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  return;
}



// FUNCTION 140c3af70 FUN_140c3af70 body=25 status=ok
// SIG undefined FUN_140c3af70(void)

undefined8 FUN_140c3af70(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140c3af92 FUN_140c3af92 body=170 status=ok
// SIG undefined FUN_140c3af92(void)

void FUN_140c3af92(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)*param_1;
  FUN_1446f470e(&local_30,L"GeometryCollectionComponent0",1);
  uVar2 = FUN_140a6d95c();
  FUN_140486538(param_1,local_30);
  FUN_14048646a(param_1 + 4,local_30,uVar2,0);
  FUN_140c3b0ca(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ac94f00;
  *(undefined1 *)(puVar1 + 0x74) = 0;
  *(byte *)((longlong)puVar1 + 0x3a) = *(byte *)((longlong)puVar1 + 0x3a) & 0xfb;
  FUN_140c3b03e(puVar1,0);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3b03e FUN_140c3b03e body=139 status=ok
// SIG undefined FUN_140c3b03e(void)

void FUN_140c3b03e(longlong param_1,char param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  
  lVar3 = param_1;
  if ((*(byte *)(param_1 + 0x3a) & 2) != 0) {
    for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x20)) {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
        return;
      }
    }
    pbVar1 = *(byte **)(param_1 + 0x50);
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
      *(char *)(param_1 + 0x3b) = param_2;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x3b);
      if ((cVar4 != '\0') != (bool)param_2) {
        uVar2 = *(undefined8 *)(pbVar1 + 0x28);
        FUN_1402eb48e(uVar2,param_1 + 0x30);
        *(char *)(param_1 + 0x3b) = param_2;
        FUN_1402eb97e(uVar2,param_1 + 0x30);
        cVar4 = *(char *)(param_1 + 0x3b);
      }
      if (cVar4 == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x50) + 0x24) = 0xbf800000;
      }
    }
  }
  return;
}



// FUNCTION 140c3b0ca FUN_140c3b0ca body=263 status=ok
// SIG undefined FUN_140c3b0ca(void)

longlong * FUN_140c3b0ca(longlong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = (longlong)&PTR_FUN_14a402dd0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  FUN_1446f470e(&local_28,L"GeometryCollectionComponent0",1);
  uVar2 = FUN_140f5398e();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_28,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  param_1[0x73] = 0;
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) | 2;
  (**(code **)(*param_1 + 0x400))(param_1,1);
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(undefined1 *)((longlong)param_1 + 0x179) = 4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3b1da FUN_140c3b1da body=441 status=ok
// SIG undefined FUN_140c3b1da(void)

undefined8 * FUN_140c3b1da(undefined8 *param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  FUN_1406ee02c();
  *param_1 = &PTR_FUN_14b7bafd0;
  param_1[0x72] = &PTR_LAB_14b7bb608;
  param_1[0x73] = &PTR_LAB_14b7bb620;
  param_1[0x74] = &PTR_LAB_14b7bb6c0;
  plVar1 = param_1 + 0x75;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e9) = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b7) = 0;
  *(undefined4 *)(param_1 + 0x81) = 2;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x431) = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = &DAT_14a171d50;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x93] = &DAT_14cb70058;
  uVar3 = DAT_14cbc3038;
  uVar4 = FUN_140c3b394();
  lVar5 = FUN_14048696c(param_1,uVar3,uVar4,uVar4,1,0);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar2 = DAT_14c950c29;
  *plVar1 = lVar5;
  *(undefined4 *)(lVar5 + 0x620) = 0;
  *(undefined1 *)(*plVar1 + 0x650) = 1;
  *(undefined4 *)(*plVar1 + 0x648) = 0xffff0000;
  lVar5 = *plVar1;
  if ((bVar2 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = *plVar1;
    }
  }
  param_1[0x39] = lVar5;
  return param_1;
}



// FUNCTION 140c3b394 FUN_140c3b394 body=228 status=ok
// SIG undefined FUN_140c3b394(void)

longlong FUN_140c3b394(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5fe78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1486c1009;
    local_40 = &LAB_140c22d28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelRoadAreaComponent",&DAT_14cb5fe78,&DAT_1486c1008);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5fe78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3b488 FUN_140c3b488 body=40 status=ok
// SIG undefined FUN_140c3b488(void)

undefined8 FUN_140c3b488(undefined8 param_1,int param_2)

{
  FUN_140c3b4b0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3b4b0 FUN_140c3b4b0 body=427 status=ok
// SIG undefined FUN_140c3b4b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140c3b4b0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b302ef0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x59] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b303900;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x000140c3b5e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140c3b65c FUN_140c3b65c body=40 status=ok
// SIG undefined FUN_140c3b65c(void)

undefined8 FUN_140c3b65c(undefined8 param_1,int param_2)

{
  FUN_140c3b684();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3b684 FUN_140c3b684 body=193 status=ok
// SIG undefined FUN_140c3b684(void)

void FUN_140c3b684(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b2ec8f0;
  param_1[5] = &PTR_FUN_14b2eced0;
  param_1[6] = &PTR_LAB_14b2ecf10;
  param_1[0x55] = &PTR_FUN_14b2ecf60;
  if (param_1[0x143] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13e] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3b746(param_1 + 0x70);
  if (param_1[0x6d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 140c3b746 FUN_140c3b746 body=638 status=ok
// SIG undefined FUN_140c3b746(void)

void FUN_140c3b746(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  FUN_140ec0ca4(param_1 + 199,1);
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0xbc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xa9) = 0;
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3ba34(param_1 + 0x40);
  param_1[0x3d] = 0;
  param_1[0x3e] = -1;
  plVar2 = (longlong *)param_1[0x3c];
  if (plVar2 == (longlong *)0x0) goto LAB_140c3b80d;
  *(int *)(plVar2 + 0x21) = (int)plVar2[0x21] + -1;
  if ((int)plVar2[0x26] < 1) {
    FUN_1400847bc(plVar2 + 0x17,0);
    if ((int)plVar2[0x21] == 0) {
      FUN_140087e46(plVar2);
      if (*plVar2 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140c3b802;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar2);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar2);
      }
    }
  }
LAB_140c3b802:
  param_1[0x3c] = 0;
LAB_140c3b80d:
  *(undefined4 *)(param_1 + 0x35) = 0;
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3b9c4(param_1 + 0x2c);
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3b9fc(param_1 + 0x1f);
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],(int)param_1[8]);
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],(int)param_1[5]);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c3b9c4 FUN_140c3b9c4 body=55 status=ok
// SIG undefined FUN_140c3b9c4(void)

void FUN_140c3b9c4(longlong *param_1)

{
  FUN_140c3ba72(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c3b9fc FUN_140c3b9fc body=55 status=ok
// SIG undefined FUN_140c3b9fc(void)

void FUN_140c3b9fc(longlong *param_1)

{
  FUN_140c3baee(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c3ba34 FUN_140c3ba34 body=62 status=ok
// SIG undefined FUN_140c3ba34(void)

void FUN_140c3ba34(longlong param_1)

{
  FUN_1405fdc96(param_1,0);
  if (*(longlong *)(param_1 + 0x318) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x300) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c3ba72 FUN_140c3ba72 body=123 status=ok
// SIG undefined FUN_140c3ba72(void)

void FUN_140c3ba72(longlong param_1,int param_2)

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



// FUNCTION 140c3baee FUN_140c3baee body=123 status=ok
// SIG undefined FUN_140c3baee(void)

void FUN_140c3baee(longlong param_1,int param_2)

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



// FUNCTION 140c3bb6a FUN_140c3bb6a body=9 status=ok
// SIG undefined FUN_140c3bb6a(void)

void FUN_140c3bb6a(longlong param_1)

{
  FUN_140c3bb74(param_1 + 0x10);
  return;
}



// FUNCTION 140c3bb74 FUN_140c3bb74 body=222 status=ok
// SIG undefined FUN_140c3bb74(void)

void FUN_140c3bb74(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b08d700;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140c3bc52(param_1 + 0xd);
  plVar3 = (longlong *)param_1[0xc];
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
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14028f404(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ab50b00;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140c3bc4e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140c3bc52 FUN_140c3bc52 body=54 status=ok
// SIG undefined FUN_140c3bc52(void)

void FUN_140c3bc52(longlong *param_1)

{
  FUN_143c4530e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140c3bc88 FUN_140c3bc88 body=40 status=ok
// SIG undefined FUN_140c3bc88(void)

undefined8 FUN_140c3bc88(undefined8 param_1,int param_2)

{
  FUN_140c3bcb0();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3bcb0 FUN_140c3bcb0 body=101 status=ok
// SIG undefined FUN_140c3bcb0(void)

void FUN_140c3bcb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b208a60;
  param_1[0xd] = &PTR_FUN_14b208de0;
  param_1[0x16] = &PTR_FUN_14b208e20;
  param_1[0x17] = &PTR_FUN_14b208e40;
  param_1[0x18] = &PTR_FUN_14b208e58;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140843792(param_1);
  return;
}



// FUNCTION 140c3beb2 FUN_140c3beb2 body=140 status=ok
// SIG undefined FUN_140c3beb2(void)

void FUN_140c3beb2(longlong param_1)

{
  float fVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140c3bfde();
  FUN_140c3bf40(*(longlong *)(param_1 + 0x48) + 0x2c0,local_20,*(longlong *)(param_1 + 0x40) + 0x240
                ,*(longlong *)(param_1 + 0x48) + 0x2d8);
  fVar1 = (float)FUN_14025bbd2(local_20,*(longlong *)(param_1 + 0x40) + 0x4e8);
  *(int *)(param_1 + 0x448) = (int)ROUND(fVar1 + fVar1 + 0.5) >> 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3bf40 FUN_140c3bf40 body=156 status=ok
// SIG undefined FUN_140c3bf40(void)

undefined8 *
FUN_140c3bf40(longlong param_1,undefined8 *param_2,longlong param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_3 + 0xac) != -1) {
    uVar2 = *param_4;
    goto LAB_140c3bf83;
  }
  local_28 = 0;
  if (*(char *)(param_1 + 0x10) == '\x02') {
    cVar1 = FUN_147f5b036(param_3,*(undefined8 *)(param_1 + 8),&local_28);
LAB_140c3bfd7:
    puVar3 = &local_28;
    if (cVar1 == '\0') goto LAB_140c3bf7d;
  }
  else {
    if (*(char *)(param_1 + 0x10) == '\x01') {
      cVar1 = FUN_147f5ae6c(param_3,*(undefined8 *)(param_1 + 8),&local_28);
      goto LAB_140c3bfd7;
    }
LAB_140c3bf7d:
    puVar3 = param_4;
  }
  uVar2 = *puVar3;
LAB_140c3bf83:
  *param_2 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c3bfde FUN_140c3bfde body=341 status=ok
// SIG undefined FUN_140c3bfde(void)

void FUN_140c3bfde(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400ef488();
  lVar2 = *(longlong *)(param_1 + 0x40) + 0x240;
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar3 = FUN_140309e34(lVar1 + 0x40,lVar2,lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x418) = uVar3;
  fVar4 = (float)FUN_140309e34(lVar1 + 0x60,lVar2,lVar1 + 0x78);
  fVar5 = *(float *)(param_1 + 0x418);
  if (*(float *)(param_1 + 0x418) <= fVar4) {
    fVar5 = fVar4;
  }
  *(float *)(param_1 + 0x41c) = fVar5;
  FUN_140309ec4(lVar1 + 0x80,&local_48,lVar2);
  *(undefined8 *)(param_1 + 0x430) = local_38;
  *(undefined4 *)(param_1 + 0x420) = local_48;
  *(undefined4 *)(param_1 + 0x424) = uStack_44;
  *(undefined4 *)(param_1 + 0x428) = uStack_40;
  *(undefined4 *)(param_1 + 0x42c) = uStack_3c;
  uVar3 = FUN_140309e34(lVar1 + 0x118,lVar2,lVar1 + 0x130);
  *(undefined4 *)(param_1 + 0x438) = uVar3;
  if (*(char *)(lVar1 + 0x2b8) == '\x01') {
    fVar5 = (float)FUN_140309e34(lVar1 + 0x138,lVar2,lVar1 + 0x150);
    if (360.0 <= fVar5) {
      fVar5 = 360.0;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x43c) = fVar5;
    FUN_140d0f87a(lVar1 + 0x158,&local_48,param_1 + 0x420,lVar2);
    fVar5 = (float)(double)CONCAT44(uStack_3c,uStack_40);
  }
  else {
    *(undefined4 *)(param_1 + 0x43c) = 0x43b40000;
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x440) = fVar5;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3c140 FUN_140c3c140 body=411 status=ok
// SIG undefined FUN_140c3c140(void)

undefined8 * FUN_140c3c140(undefined8 *param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  undefined8 local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140312256();
  *param_1 = &PTR_FUN_14ad91c50;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_28,L"NiagaraComponent0",1);
  if (DAT_14cb39ca0 == 0) {
    local_40 = &local_20;
    local_20 = FUN_144a7958c;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_14638c6c0;
    local_48 = &LAB_14811044c;
    local_50 = &LAB_1407f5cf8;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000004;
    local_70 = 0x10;
    local_78 = 0x8e0;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
  }
  local_70 = local_70 & 0xffffff00;
  local_78 = CONCAT31(local_78._1_3_,1);
  lVar2 = FUN_14048696c(param_1,local_28,DAT_14cb39ca0,DAT_14cb39ca0);
  if (lVar2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar2);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar2;
  if ((lVar2 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar2);
    lVar2 = param_1[0x72];
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3c2dc FUN_140c3c2dc body=56 status=ok
// SIG undefined FUN_140c3c2dc(void)

void FUN_140c3c2dc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140c3c314(param_1 + 0x120,(char)param_3 == '\x01');
  FUN_1405b634c(param_1,param_2,param_3);
  return;
}



// FUNCTION 140c3c314 FUN_140c3c314 body=186 status=ok
// SIG undefined FUN_140c3c314(void)

void FUN_140c3c314(longlong param_1,char param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    uVar1 = 0;
    if ((byte)*(int *)(param_1 + 0x78) < 4) {
      uVar1 = (undefined1)(0x101 >> ((byte)(*(int *)(param_1 + 0x78) << 3) & 0x1f));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0xe8) + 0xc70) = uVar1;
    lVar2 = *(longlong *)(param_1 + 0xe8);
    if (lVar2 != 0) {
      if ((param_2 != '\0') &&
         ((*(char *)(lVar2 + 0xc30) != '\0' ||
          (*(float *)(lVar2 + 0x160) - *(float *)(lVar2 + 0xc34) < 0.5)))) {
        FUN_140c3c4a6(lVar2,lVar2 + 0xc38);
        *(undefined1 *)(lVar2 + 0x17d) = 1;
        lVar2 = *(longlong *)(param_1 + 0xe8);
      }
      FUN_140c3c3ce(lVar2);
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + 0x160);
    }
  }
  return;
}



// FUNCTION 140c3c3ce FUN_140c3c3ce body=215 status=ok
// SIG undefined FUN_140c3c3ce(void)

void FUN_140c3c3ce(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  if ((*(char *)(param_1 + 0xc30) == '\x01') && (lVar3 = *(longlong *)(param_1 + 0x40), lVar3 != 0))
  {
    iVar1 = *(int *)(lVar3 + 0x388);
    if (0 < (longlong)iVar1) {
      uVar7 = 0;
      do {
        if (((*(ulonglong *)(param_1 + 0xc60) >> (uVar7 & 0x3f) & 1) != 0) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x380) + uVar7 * 8), lVar5 != 0)) {
          iVar2 = *(int *)(lVar5 + 0x18);
          if ((-1 < (longlong)iVar2) &&
             ((iVar2 < *(int *)(param_1 + 0x78) &&
              (plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 8),
              plVar4 != (longlong *)0x0)))) {
            lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
            lVar6 = FUN_14064d6a4();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (**(code **)(*plVar4 + 0xb0))(plVar4);
            }
          }
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)iVar1 != uVar7);
    }
    *(undefined1 *)(param_1 + 0xc30) = 0;
    *(undefined4 *)(param_1 + 0xc34) = *(undefined4 *)(param_1 + 0x160);
  }
  return;
}



// FUNCTION 140c3c4a6 FUN_140c3c4a6 body=283 status=ok
// SIG undefined FUN_140c3c4a6(void)

void FUN_140c3c4a6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined8 *_Dst;
  undefined8 *_Src;
  int iVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 4) != '\0') {
    plVar1 = (longlong *)(param_1 + 0x888);
    local_30 = param_2;
    FUN_140c3c6fc(plVar1);
    iVar6 = *(int *)(param_1 + 0x890);
    if (7 < iVar6) {
      FUN_140c3c670(plVar1,0);
      FUN_140c3c5c2(plVar1);
      iVar6 = *(int *)(param_1 + 0x890);
    }
    *(uint *)(param_1 + 0x890) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x894) < iVar6 + 1U) {
      FUN_140a4bb3a(plVar1,iVar6);
    }
    puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar6 * 0x28);
    bVar3 = *(byte *)(param_2 + 4);
    uVar4 = *(ushort *)(param_2 + 3);
    *(ushort *)(puVar2 + 3) = uVar4;
    _Dst = puVar2;
    _Src = param_2;
    if (0x18 < uVar4) {
      _Dst = (undefined8 *)FUN_14001cc68(uVar4,0);
      *puVar2 = _Dst;
      _Src = (undefined8 *)*param_2;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar3 * 0x120));
    if (pcVar5 == (code *)0x0) {
      memcpy(_Dst,_Src,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar3 * 0x120)));
    }
    else {
      (*pcVar5)();
    }
    *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(param_2 + 4);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3c5c2 FUN_140c3c5c2 body=64 status=ok
// SIG undefined FUN_140c3c5c2(void)

void FUN_140c3c5c2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140c3c602(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 140c3c602 FUN_140c3c602 body=109 status=ok
// SIG undefined FUN_140c3c602(void)

ulonglong FUN_140c3c602(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x28) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if ((param_2 == 0) || (0x40 < (int)(param_3 - param_2))) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
      uVar1 = uVar1 / 0x28;
    }
  }
  return uVar1;
}



// FUNCTION 140c3c670 FUN_140c3c670 body=139 status=ok
// SIG undefined FUN_140c3c670(void)

void FUN_140c3c670(longlong *param_1,uint param_2)

{
  undefined8 *_Dst;
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  
  _Dst = (undefined8 *)(*param_1 + (longlong)(int)param_2 * 0x28);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(_Dst + 4) * 0x120));
  if (pcVar1 != (code *)0x0) {
    puVar3 = _Dst;
    if (0x18 < *(ushort *)(_Dst + 3)) {
      puVar3 = (undefined8 *)*_Dst;
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < *(ushort *)(_Dst + 3)) {
    FUN_1400020a8(*_Dst);
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    memmove(_Dst,_Dst + 5,(longlong)(int)(~param_2 + iVar2) * 0x28);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 140c3c6fc FUN_140c3c6fc body=581 status=ok
// SIG undefined FUN_140c3c6fc(void)

int FUN_140c3c6fc(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  bool bVar17;
  
  iVar12 = (int)param_1[1];
  lVar13 = (longlong)iVar12;
  if (lVar13 == 0) {
    iVar12 = 0;
  }
  else {
    puVar1 = (undefined8 *)*param_1;
    puVar9 = (undefined8 *)*param_2;
    iVar14 = 0;
    if (*(byte *)(puVar1 + 4) == *(byte *)(puVar9 + 4)) {
      if (0x18 < *(ushort *)(puVar9 + 3)) {
        puVar9 = (undefined8 *)*puVar9;
      }
      puVar8 = puVar1;
      if (0x18 < *(ushort *)(puVar1 + 3)) {
        puVar8 = (undefined8 *)*puVar1;
      }
      uVar6 = (ulonglong)((uint)*(byte *)(puVar1 + 4) * 0x120);
      if (*(code **)(&DAT_14c9a85e0 + uVar6) == (code *)0x0) {
        iVar5 = memcmp(puVar8,puVar9,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
        bVar2 = iVar5 == 0;
      }
      else {
        bVar2 = (**(code **)(&DAT_14c9a85e0 + uVar6))();
      }
    }
    else {
      bVar2 = 0;
    }
    iVar5 = 0;
    do {
      lVar10 = (longlong)iVar5;
      iVar15 = iVar5 + 1;
      iVar16 = iVar15;
      if (iVar15 < iVar12) {
        iVar16 = iVar12;
      }
      if (lVar10 + 1 < lVar13) {
        lVar11 = lVar10 + 2;
        puVar9 = puVar1 + lVar10 * 5 + 5;
        bVar17 = true;
        do {
          puVar8 = (undefined8 *)*param_2;
          bVar3 = bVar2;
          if (*(byte *)(puVar9 + 4) == *(byte *)(puVar8 + 4)) {
            if (0x18 < *(ushort *)(puVar8 + 3)) {
              puVar8 = (undefined8 *)*puVar8;
            }
            _Buf1 = puVar9;
            if (0x18 < *(ushort *)(puVar9 + 3)) {
              _Buf1 = (undefined8 *)*puVar9;
            }
            uVar6 = (ulonglong)((uint)*(byte *)(puVar9 + 4) * 0x120);
            if (*(code **)(&DAT_14c9a85e0 + uVar6) == (code *)0x0) {
              iVar4 = memcmp(_Buf1,puVar8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
              bVar3 = iVar4 == 0;
            }
            else {
              bVar3 = (**(code **)(&DAT_14c9a85e0 + uVar6))();
            }
            bVar3 = bVar3 ^ bVar2;
          }
          iVar4 = iVar15;
          if ((bVar3 & 1) != 0) break;
          bVar17 = lVar11 < lVar13;
          iVar15 = iVar15 + 1;
          lVar7 = (1 - lVar13) + lVar11;
          lVar11 = lVar11 + 1;
          puVar9 = puVar9 + 5;
          iVar4 = iVar16;
        } while (lVar7 != 1);
      }
      else {
        bVar17 = false;
        iVar4 = iVar16;
      }
      iVar16 = iVar4 - iVar5;
      if ((bVar2 & 1) == 0) {
        if (iVar14 != iVar5) {
          memmove(puVar1 + (longlong)iVar14 * 5,puVar1 + lVar10 * 5,(longlong)iVar16 * 0x28);
        }
        iVar14 = iVar14 + iVar16;
      }
      else {
        FUN_1401b95a9(puVar1 + lVar10 * 5,iVar16);
      }
      bVar2 = bVar2 ^ 1;
      iVar5 = iVar4;
    } while (bVar17);
    *(int *)(param_1 + 1) = iVar14;
    iVar12 = iVar12 - iVar14;
  }
  return iVar12;
}



// FUNCTION 140c3c950 FUN_140c3c950 body=196 status=ok
// SIG undefined FUN_140c3c950(void)

undefined8 * FUN_140c3c950(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39b8f0;
  plVar3 = (longlong *)param_1[0x14];
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
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3ca14 FUN_140c3ca14 body=786 status=ok
// SIG undefined FUN_140c3ca14(void)

void FUN_140c3ca14(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined **local_1d0 [5];
  byte local_1a8;
  byte local_1a6;
  undefined8 local_140;
  longlong *local_138;
  undefined1 local_130 [168];
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar4 = FUN_1400439fc(param_1,0,local_130);
  if (cVar4 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_78 = 0xcffc743f;
  uStack_74 = 0x43b04480;
  uStack_70 = 0x939114df;
  uStack_6c = 0x171d2073;
  iVar6 = FUN_1448a256a(param_1);
  if (iVar6 < 0xb) {
    uVar7 = *(uint *)(param_1 + 0x29);
    lVar10 = param_1[9];
    *(uint *)(param_1 + 9) = (int)lVar10 + uVar7;
    if ((uint)(*(int *)((longlong)param_1 + 0x4c) - (int)lVar10) < uVar7) {
      FUN_14058bc12(param_1 + 8);
      uVar7 = *(uint *)(param_1 + 0x29);
    }
    if (0 < (int)uVar7) {
      lVar10 = 0;
      do {
        lVar8 = FUN_14058b350(param_1,0);
        lVar1 = param_1[8];
        if ((lVar8 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar8);
        }
        *(longlong *)(lVar1 + lVar10 * 8) = lVar8;
        local_88[0] = 0;
        local_88[1] = 0;
        local_1d8 = 0;
        uStack_1e0 = CONCAT71(uStack_1e0._1_7_,1);
        local_1e8 = local_1e8 & 0xffffffffffffff00;
        FUN_147587eae(local_130,*(undefined8 *)(param_1[0x28] + lVar10 * 8),local_88,0);
        plVar2 = *(longlong **)(param_1[8] + lVar10 * 8);
        memset(local_1d0,0,0x90);
        FUN_144869430(local_1d0);
        local_140 = 0;
        local_1d0[0] = &PTR_FUN_149fba270;
        local_1a8 = local_1a8 | 1;
        local_138 = local_88;
        FUN_1449c2eca(local_1d0,0);
        local_1a6 = local_1a6 & 0x7b;
        (**(code **)(*plVar2 + 0xd8))(plVar2);
        FUN_144a7fc42(local_1d0);
        FUN_144a7fc42(local_130);
        if (local_88[0] != 0) {
          FUN_1400020a8();
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x29]);
    }
    *(undefined4 *)(param_1 + 0x29) = 0;
    if (*(int *)((longlong)param_1 + 0x14c) != 0) {
      FUN_147c86988(param_1 + 0x28,0);
    }
  }
  iVar6 = (int)param_1[9];
  uVar11 = (ulonglong)iVar6;
  if (0 < (longlong)uVar11) {
    bVar5 = false;
    do {
      lVar10 = param_1[8];
      uVar9 = uVar11;
      while (*(longlong *)(lVar10 + -8 + uVar9 * 8) != 0) {
        bVar3 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar3) {
          if (!bVar5) goto LAB_140c3cac8;
          goto LAB_140c3cb85;
        }
      }
      uVar7 = *(uint *)(param_1 + 9);
      if (uVar7 != uVar9) {
        memmove((void *)(lVar10 + uVar9 * 8 + -8),(void *)(lVar10 + uVar9 * 8),
                (longlong)(int)(uVar7 - (int)uVar9) << 3);
        uVar7 = *(uint *)(param_1 + 9);
      }
      uVar11 = uVar9 - 1;
      *(uint *)(param_1 + 9) = uVar7 - 1;
      FUN_145853056(param_1 + 8);
      bVar5 = true;
    } while (1 < uVar9);
LAB_140c3cb85:
    FUN_140171a5c(param_1 + 0x13,0);
LAB_140c3cac8:
    iVar6 = (int)param_1[9];
  }
  if (iVar6 == 0) {
    FUN_14058bb8c(param_1);
    iVar6 = (int)param_1[9];
  }
  if ((0 < iVar6) && ((int)param_1[0x14] == *(int *)((longlong)param_1 + 0xcc))) {
    FUN_140c3cd28(param_1);
  }
  if ((local_60 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3cd28 FUN_140c3cd28 body=185 status=ok
// SIG undefined FUN_140c3cd28(void)

void FUN_140c3cd28(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_78 [36];
  int local_54;
  longlong local_50;
  int *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140171a5c(param_1 + 0x98,0);
  local_54 = 0;
  iVar2 = *(int *)(param_1 + 0x48);
  if (0 < iVar2) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)local_54 * 8);
      if (lVar1 != 0) {
        local_50 = lVar1 + 0x28;
        local_48 = &local_54;
        FUN_140171856(param_1 + 0x98,local_3c,&local_50,0);
        iVar2 = *(int *)(param_1 + 0x48);
      }
      local_54 = local_54 + 1;
    } while (local_54 < iVar2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3cde2 FUN_140c3cde2 body=173 status=ok
// SIG undefined FUN_140c3cde2(void)

longlong FUN_140c3cde2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_68 [32];
  undefined *local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  byte local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &DAT_14c6ec4a0;
  FUN_144b45ed0(param_1,&local_40,param_2,param_3);
  if ((local_40 != 0) && (local_38 != 0)) {
    cVar1 = FUN_144b45dd0(local_38,&DAT_14c6ec4a0);
    if (cVar1 != '\0') {
      FUN_144b45d50(local_38,local_24);
      lVar2 = 0;
      if ((local_24[0] & 8) == 0) {
        lVar2 = local_40;
      }
      goto LAB_140c3ce55;
    }
  }
  lVar2 = 0;
LAB_140c3ce55:
  if ((local_30 & 1) != 0) {
    FUN_144be6b30(local_30 & 0xfffffffffffffffe);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3ce90 FUN_140c3ce90 body=38 status=ok
// SIG undefined FUN_140c3ce90(void)

undefined8 FUN_140c3ce90(undefined8 param_1,int param_2)

{
  FUN_140c3ceb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3ceb6 FUN_140c3ceb6 body=69 status=ok
// SIG undefined FUN_140c3ceb6(void)

void FUN_140c3ceb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149e40450;
  FUN_140756ad4();
  if ((HANDLE)param_1[1] != (HANDLE)0x0) {
    CloseHandle((HANDLE)param_1[1]);
    param_1[1] = 0;
  }
  FUN_1400020a8(param_1[5]);
  FUN_1400020a8(param_1[6]);
  return;
}



// FUNCTION 140c3cefc FUN_140c3cefc body=300 status=ok
// SIG undefined FUN_140c3cefc(void)

void FUN_140c3cefc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  
  if (((*(int *)(param_1 + 8) != 0) && (uVar1 = *(uint *)(param_1 + 4), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(param_1 + 8))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar3 = *plVar7, lVar3 != 0)))) {
      if ((longlong)*(int *)(param_1 + 0x20) == 0) {
        iVar6 = 0;
      }
      else {
        lVar8 = 0;
        iVar6 = 0;
        do {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8);
          if ((((*(byte *)(lVar4 + 0x8d) & 1) != 0) && (*(int *)(lVar4 + 0x17c) != 0)) &&
             (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8),
             (*(byte *)(lVar4 + 0x8c) & 0x10) == 0)) {
            iVar2 = *(int *)(lVar4 + 0x148);
            if (iVar6 <= iVar2) {
              iVar6 = iVar2;
            }
          }
          lVar8 = lVar8 + 0x10;
        } while ((longlong)*(int *)(param_1 + 0x20) * 0x10 != lVar8);
      }
      *(int *)(lVar3 + 0x5c4) = iVar6;
      if (((*(int *)(lVar3 + 0x388) != 0) && (uVar1 = *(uint *)(lVar3 + 900), -1 < (int)uVar1)) &&
         ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if (((puVar5 != (undefined8 *)0x0) && (*(int *)(puVar5 + 2) == *(int *)(lVar3 + 0x388))) &&
           ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
            FUN_140c3d028(*puVar5);
            return;
          }
          FUN_140c3d028(0);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3d028 FUN_140c3d028 body=98 status=ok
// SIG undefined FUN_140c3d028(void)

void FUN_140c3d028(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  if ((longlong)*(int *)(param_1 + 0x48) == 0) {
    iVar3 = 0;
  }
  else {
    lVar2 = 0;
    iVar3 = 0;
    do {
      iVar1 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + lVar2) + 0x5c4);
      if (iVar3 < iVar1) {
        iVar3 = iVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x48) * 8 != lVar2);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x50));
  *(int *)(param_1 + 0x16c) = iVar3;
  return;
}



// FUNCTION 140c3d08a FUN_140c3d08a body=38 status=ok
// SIG undefined FUN_140c3d08a(void)

void FUN_140c3d08a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140c3d0ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 140c3d118 FUN_140c3d118 body=105 status=ok
// SIG undefined FUN_140c3d118(void)

void FUN_140c3d118(longlong param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0x4e220) = param_2;
  memset((void *)(param_1 + 0x14),0,320000);
  fVar1 = (float)param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  *(float *)(param_1 + 0x4e224) = fVar1;
  *(float *)(param_1 + 0x4e228) = 1.0 / fVar1;
  *(float *)(param_1 + 0x4e320) = 3.1415927 / fVar1;
  return;
}



// FUNCTION 140c3d182 FUN_140c3d182 body=185 status=ok
// SIG undefined FUN_140c3d182(void)

void FUN_140c3d182(longlong param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x4e214) = 0;
  *(undefined8 *)(param_1 + 0x4f358) = 0;
  memset((void *)(param_1 + 0x4f388),0,0x40000);
  *(undefined8 *)(param_1 + 0x4e22c) = 0;
  *(undefined8 *)(param_1 + 0x4e234) = 0;
  *(undefined8 *)(param_1 + 0x4e23c) = 0;
  memset((void *)(param_1 + 0x4e248),0,0xb8);
  *(undefined8 *)(param_1 + 0x4e304) = 0;
  *(undefined8 *)(param_1 + 0x4e30c) = 0;
  *(undefined8 *)(param_1 + 0x4e314) = 0;
  *(undefined8 *)(param_1 + 0x4e324) = 0;
  *(undefined8 *)(param_1 + 0x4e32c) = 0;
  *(undefined8 *)(param_1 + 0x4e334) = 0;
  *(undefined8 *)(param_1 + 0x4e33c) = 0;
  *(undefined8 *)(param_1 + 0x4e344) = 0;
  memset((void *)(param_1 + 0x4e350),0,0x1004);
  *(undefined8 *)(param_1 + 0x4f368) = 0;
  *(undefined8 *)(param_1 + 0x4f370) = 0;
  *(undefined8 *)(param_1 + 0x8f394) = 0;
  *(undefined8 *)(param_1 + 0x8f39c) = 0;
  return;
}



// FUNCTION 140c3d23b FUN_140c3d23b body=58 status=ok
// SIG undefined FUN_140c3d23b(void)

void FUN_140c3d23b(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 140c3d276 FUN_140c3d276 body=38 status=ok
// SIG undefined FUN_140c3d276(void)

undefined8 FUN_140c3d276(undefined8 param_1,int param_2)

{
  FUN_140c3d29c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3d29c FUN_140c3d29c body=128 status=ok
// SIG undefined FUN_140c3d29c(void)

void FUN_140c3d29c(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14a34ce88;
  lVar2 = param_1[0xe];
  if ((lVar2 == 0) || (DAT_14c760b88 == '\0')) {
LAB_140c3d2d9:
    if (lVar2 == 0) goto LAB_140c3d2e6;
  }
  else if (*(longlong *)(lVar2 + 8) != 0) {
    FUN_1402cd10a(param_1[2] + 0x90);
    lVar2 = param_1[0xe];
    goto LAB_140c3d2d9;
  }
  FUN_1400020a8(lVar2);
LAB_140c3d2e6:
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    param_1[4] = 0;
    (**(code **)(*plVar1 + 0x10))();
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[4] + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_149e002e8;
  return;
}



// FUNCTION 140c3d32a FUN_140c3d32a body=31 status=ok
// SIG undefined FUN_140c3d32a(void)

undefined8 FUN_140c3d32a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3d34a FUN_140c3d34a body=80 status=ok
// SIG undefined FUN_140c3d34a(void)

void FUN_140c3d34a(longlong param_1,longlong *param_2)

{
  FUN_144a63cd0();
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x160,0,0);
                    /* WARNING: Could not recover jumptable at 0x000140c3d397. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x168,0,0);
  return;
}



// FUNCTION 140c3d39a FUN_140c3d39a body=301 status=ok
// SIG undefined FUN_140c3d39a(void)

void FUN_140c3d39a(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011ff66();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c874a20) {
      FUN_144b3d300(&DAT_14c874a20);
      if (DAT_14c874a20 == -1) {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
    }
    local_20 = "Niagara";
    local_18 = 7;
    local_14 = 0;
    uVar3 = FUN_14001a6c0(&local_20,1);
    cVar2 = FUN_14011feae(&DAT_14c874628,uVar3);
    if (cVar2 == '\0') {
      local_20 = (char *)0x0;
      FUN_14485c47a(&local_20,param_1);
      uVar1 = DAT_14cb3eb00;
      lVar4 = (longlong)(int)DAT_14cb3eb00;
      DAT_14cb3eb00 = DAT_14cb3eb00 + 1;
      if (DAT_14cb3eb04 < DAT_14cb3eb00) {
        FUN_1481cd8fa(uVar1);
      }
      *(char **)(DAT_14cb3eaf8 + lVar4 * 8) = local_20;
    }
    else {
      FUN_140c3d4c8(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3d4c8 FUN_140c3d4c8 body=3281 status=ok
// SIG undefined FUN_140c3d4c8(void)

void FUN_140c3d4c8(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(longlong *)(param_1 + 0x174) == 0) ||
     (plVar2 = (longlong *)FUN_144741050(param_1 + 0x170), *plVar2 == 0)) {
    FUN_140120ed2(&local_58,&DAT_14cb41b58);
    *(undefined4 *)(param_1 + 0x150) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x148) = local_58;
    if ((undefined8 *)(param_1 + 0x148) != &local_58) {
      if (*(longlong *)(param_1 + 0x158) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x158) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x160) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x164) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x178) = local_28;
    *(undefined4 *)(param_1 + 0x168) = local_38;
    *(undefined4 *)(param_1 + 0x16c) = uStack_34;
    *(undefined4 *)(param_1 + 0x170) = uStack_30;
    *(undefined4 *)(param_1 + 0x174) = uStack_2c;
    *(undefined1 *)(param_1 + 0x17c) = local_24;
    *(undefined1 *)(param_1 + 0x17d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c38);
    *(undefined4 *)(param_1 + 0x188) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x180) = local_58;
    if ((undefined8 *)(param_1 + 0x180) != &local_58) {
      if (*(longlong *)(param_1 + 400) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 400) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x198) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x19c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x1b0) = local_28;
    *(undefined4 *)(param_1 + 0x1a0) = local_38;
    *(undefined4 *)(param_1 + 0x1a4) = uStack_34;
    *(undefined4 *)(param_1 + 0x1a8) = uStack_30;
    *(undefined4 *)(param_1 + 0x1ac) = uStack_2c;
    *(undefined1 *)(param_1 + 0x1b4) = local_24;
    *(undefined1 *)(param_1 + 0x1b5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c18);
    *(undefined4 *)(param_1 + 0x1c0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x1b8) = local_58;
    if ((undefined8 *)(param_1 + 0x1b8) != &local_58) {
      if (*(longlong *)(param_1 + 0x1c8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1c8) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x1d0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x1d4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x1e8) = local_28;
    *(undefined4 *)(param_1 + 0x1d8) = local_38;
    *(undefined4 *)(param_1 + 0x1dc) = uStack_34;
    *(undefined4 *)(param_1 + 0x1e0) = uStack_30;
    *(undefined4 *)(param_1 + 0x1e4) = uStack_2c;
    *(undefined1 *)(param_1 + 0x1ec) = local_24;
    *(undefined1 *)(param_1 + 0x1ed) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41cf8);
    *(undefined4 *)(param_1 + 0x268) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x260) = local_58;
    if ((undefined8 *)(param_1 + 0x260) != &local_58) {
      if (*(longlong *)(param_1 + 0x270) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x270) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x278) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x27c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x290) = local_28;
    *(undefined4 *)(param_1 + 0x280) = local_38;
    *(undefined4 *)(param_1 + 0x284) = uStack_34;
    *(undefined4 *)(param_1 + 0x288) = uStack_30;
    *(undefined4 *)(param_1 + 0x28c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x294) = local_24;
    *(undefined1 *)(param_1 + 0x295) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d18);
    *(undefined4 *)(param_1 + 0x2a0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x298) = local_58;
    if ((undefined8 *)(param_1 + 0x298) != &local_58) {
      if (*(longlong *)(param_1 + 0x2a8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2a8) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x2b0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x2b4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x2c8) = local_28;
    *(undefined4 *)(param_1 + 0x2b8) = local_38;
    *(undefined4 *)(param_1 + 700) = uStack_34;
    *(undefined4 *)(param_1 + 0x2c0) = uStack_30;
    *(undefined4 *)(param_1 + 0x2c4) = uStack_2c;
    *(undefined1 *)(param_1 + 0x2cc) = local_24;
    *(undefined1 *)(param_1 + 0x2cd) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d38);
    *(undefined4 *)(param_1 + 0x2d8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x2d0) = local_58;
    if ((undefined8 *)(param_1 + 0x2d0) != &local_58) {
      if (*(longlong *)(param_1 + 0x2e0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2e0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x2e8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x2ec) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x300) = local_28;
    *(undefined4 *)(param_1 + 0x2f0) = local_38;
    *(undefined4 *)(param_1 + 0x2f4) = uStack_34;
    *(undefined4 *)(param_1 + 0x2f8) = uStack_30;
    *(undefined4 *)(param_1 + 0x2fc) = uStack_2c;
    *(undefined1 *)(param_1 + 0x304) = local_24;
    *(undefined1 *)(param_1 + 0x305) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d58);
    *(undefined4 *)(param_1 + 0x310) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x308) = local_58;
    if ((undefined8 *)(param_1 + 0x308) != &local_58) {
      if (*(longlong *)(param_1 + 0x318) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x318) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 800) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x324) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x338) = local_28;
    *(undefined4 *)(param_1 + 0x328) = local_38;
    *(undefined4 *)(param_1 + 0x32c) = uStack_34;
    *(undefined4 *)(param_1 + 0x330) = uStack_30;
    *(undefined4 *)(param_1 + 0x334) = uStack_2c;
    *(undefined1 *)(param_1 + 0x33c) = local_24;
    *(undefined1 *)(param_1 + 0x33d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d78);
    *(undefined4 *)(param_1 + 0x348) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x340) = local_58;
    if ((undefined8 *)(param_1 + 0x340) != &local_58) {
      if (*(longlong *)(param_1 + 0x350) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x350) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x358) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x35c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x370) = local_28;
    *(undefined4 *)(param_1 + 0x360) = local_38;
    *(undefined4 *)(param_1 + 0x364) = uStack_34;
    *(undefined4 *)(param_1 + 0x368) = uStack_30;
    *(undefined4 *)(param_1 + 0x36c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x374) = local_24;
    *(undefined1 *)(param_1 + 0x375) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41dd8);
    *(undefined4 *)(param_1 + 0x1f8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x1f0) = local_58;
    if ((undefined8 *)(param_1 + 0x1f0) != &local_58) {
      if (*(longlong *)(param_1 + 0x200) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x200) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x208) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x20c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x220) = local_28;
    *(undefined4 *)(param_1 + 0x210) = local_38;
    *(undefined4 *)(param_1 + 0x214) = uStack_34;
    *(undefined4 *)(param_1 + 0x218) = uStack_30;
    *(undefined4 *)(param_1 + 0x21c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x224) = local_24;
    *(undefined1 *)(param_1 + 0x225) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d98);
    *(undefined4 *)(param_1 + 0x230) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x228) = local_58;
    if ((undefined8 *)(param_1 + 0x228) != &local_58) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x238) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x240) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x244) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 600) = local_28;
    *(undefined4 *)(param_1 + 0x248) = local_38;
    *(undefined4 *)(param_1 + 0x24c) = uStack_34;
    *(undefined4 *)(param_1 + 0x250) = uStack_30;
    *(undefined4 *)(param_1 + 0x254) = uStack_2c;
    *(undefined1 *)(param_1 + 0x25c) = local_24;
    *(undefined1 *)(param_1 + 0x25d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41e78);
    *(undefined4 *)(param_1 + 0x380) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x378) = local_58;
    if ((undefined8 *)(param_1 + 0x378) != &local_58) {
      if (*(longlong *)(param_1 + 0x388) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x388) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x390) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x394) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x3a8) = local_28;
    *(undefined4 *)(param_1 + 0x398) = local_38;
    *(undefined4 *)(param_1 + 0x39c) = uStack_34;
    *(undefined4 *)(param_1 + 0x3a0) = uStack_30;
    *(undefined4 *)(param_1 + 0x3a4) = uStack_2c;
    *(undefined1 *)(param_1 + 0x3ac) = local_24;
    *(undefined1 *)(param_1 + 0x3ad) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c78);
    *(undefined4 *)(param_1 + 0x3f0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 1000) = local_58;
    if ((undefined8 *)(param_1 + 1000) != &local_58) {
      if (*(longlong *)(param_1 + 0x3f8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3f8) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x400) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x404) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x418) = local_28;
    *(undefined4 *)(param_1 + 0x408) = local_38;
    *(undefined4 *)(param_1 + 0x40c) = uStack_34;
    *(undefined4 *)(param_1 + 0x410) = uStack_30;
    *(undefined4 *)(param_1 + 0x414) = uStack_2c;
    *(undefined1 *)(param_1 + 0x41c) = local_24;
    *(undefined1 *)(param_1 + 0x41d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41e18);
    *(undefined4 *)(param_1 + 0x428) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x420) = local_58;
    if ((undefined8 *)(param_1 + 0x420) != &local_58) {
      if (*(longlong *)(param_1 + 0x430) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x430) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x438) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x43c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x450) = local_28;
    *(undefined4 *)(param_1 + 0x440) = local_38;
    *(undefined4 *)(param_1 + 0x444) = uStack_34;
    *(undefined4 *)(param_1 + 0x448) = uStack_30;
    *(undefined4 *)(param_1 + 0x44c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x454) = local_24;
    *(undefined1 *)(param_1 + 0x455) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb413f8);
    *(undefined4 *)(param_1 + 0x460) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x458) = local_58;
    if ((undefined8 *)(param_1 + 0x458) != &local_58) {
      if (*(longlong *)(param_1 + 0x468) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x468) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x470) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x474) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x488) = local_28;
    *(undefined4 *)(param_1 + 0x478) = local_38;
    *(undefined4 *)(param_1 + 0x47c) = uStack_34;
    *(undefined4 *)(param_1 + 0x480) = uStack_30;
    *(undefined4 *)(param_1 + 0x484) = uStack_2c;
    *(undefined1 *)(param_1 + 0x48c) = local_24;
    *(undefined1 *)(param_1 + 0x48d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41df8);
    *(undefined4 *)(param_1 + 0x498) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x490) = local_58;
    if ((undefined8 *)(param_1 + 0x490) != &local_58) {
      if (*(longlong *)(param_1 + 0x4a0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4a0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x4a8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x4ac) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x4c0) = local_28;
    *(undefined4 *)(param_1 + 0x4b0) = local_38;
    *(undefined4 *)(param_1 + 0x4b4) = uStack_34;
    *(undefined4 *)(param_1 + 0x4b8) = uStack_30;
    *(undefined4 *)(param_1 + 0x4bc) = uStack_2c;
    *(undefined1 *)(param_1 + 0x4c4) = local_24;
    *(undefined1 *)(param_1 + 0x4c5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41308);
    *(undefined4 *)(param_1 + 0x3b8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x3b0) = local_58;
    if ((undefined8 *)(param_1 + 0x3b0) != &local_58) {
      if (*(longlong *)(param_1 + 0x3c0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3c0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x3c8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x3cc) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x3e0) = local_28;
    *(undefined4 *)(param_1 + 0x3d0) = local_38;
    *(undefined4 *)(param_1 + 0x3d4) = uStack_34;
    *(undefined4 *)(param_1 + 0x3d8) = uStack_30;
    *(undefined4 *)(param_1 + 0x3dc) = uStack_2c;
    *(undefined1 *)(param_1 + 0x3e4) = local_24;
    *(undefined1 *)(param_1 + 0x3e5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    iVar1 = *(int *)(param_1 + 0xc0);
    *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
      FUN_140c3e1a0((longlong *)(param_1 + 0xb8),iVar1);
    }
    thunk_FUN_1405d21d8((longlong)iVar1 * 0x80 + *(longlong *)(param_1 + 0xb8));
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_14094967a(param_1,&local_58,*(undefined1 *)(param_1 + 200));
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c3e19a thunk_FUN_1405d21d8 body=5 status=ok
// SIG undefined thunk_FUN_1405d21d8(void)

undefined8 * thunk_FUN_1405d21d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (DAT_14cb42160 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = FUN_14005ac26(&DAT_14cb42160);
  }
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  param_1[5] = 0x800000000;
  param_1[6] = 0x3ff0000000000000;
  param_1[7] = 0x3ff0000000000000;
  param_1[8] = 0x3ff0000000000000;
  uVar1 = DAT_14c846500;
  param_1[9] = DAT_14c8464f8;
  param_1[10] = uVar1;
  param_1[0xb] = DAT_14c846508;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  return param_1;
}



// FUNCTION 140c3e1a0 FUN_140c3e1a0 body=255 status=ok
// SIG undefined FUN_140c3e1a0(void)

void FUN_140c3e1a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140c3e2a0 FUN_140c3e2a0 body=44 status=ok
// SIG undefined FUN_140c3e2a0(void)

undefined8 FUN_140c3e2a0(undefined8 param_1,int param_2)

{
  FUN_140c3e2cc();
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 140c3e2cc FUN_140c3e2cc body=335 status=ok
// SIG undefined FUN_140c3e2cc(void)

void FUN_140c3e2cc(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_14aba2b00;
  if (param_1[0x1e] != 0) {
    FUN_144b3f230();
  }
  *(undefined4 *)(param_1 + 10) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x54)) && (param_1[9] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[9],(longlong)*(int *)((longlong)param_1 + 0x54) << 2);
  }
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x80000000;
  if ((longlong)*(int *)(param_1 + 8) != 0) {
    lVar1 = param_1[7];
    lVar3 = (longlong)*(int *)(param_1 + 8) * 0x18;
    do {
      lVar2 = *(longlong *)(lVar1 + -0x10 + lVar3);
      if (lVar2 != 0) {
        FUN_144be5d10(lVar2);
        (*DAT_14c787678)(0,lVar2,0);
      }
      if (*(longlong *)(lVar1 + -0x18 + lVar3) != 0) {
        FUN_144b3f230();
      }
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x44)) && (param_1[7] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[7],(longlong)*(int *)((longlong)param_1 + 0x44) * 0x18
              );
  }
  param_1[7] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  lVar1 = param_1[5];
  if (lVar1 != 0) {
    FUN_144be5d10(lVar1);
    (*DAT_14c787678)(0,lVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_144b3f230();
  }
  *param_1 = &PTR_FUN_14ab67d10;
  return;
}



// FUNCTION 140c3e41c FUN_140c3e41c body=166 status=ok
// SIG undefined FUN_140c3e41c(void)

void FUN_140c3e41c(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (DAT_14c76408c != 0) {
    lVar1 = (**(code **)(*param_1 + 0x180))();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
      lVar1 = FUN_1400d6ce6();
      if (lVar1 != 0) {
        plVar2 = (longlong *)FUN_141181ea8(param_1);
        lVar4 = *plVar2;
        AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
        ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x1c0));
        if ((longlong)*(int *)(lVar4 + 0x88) != 0) {
          lVar3 = (longlong)*(int *)(lVar4 + 0x88) * 0x430;
          lVar4 = *(longlong *)(lVar4 + 0x80) + 0x1f0;
          do {
            FUN_140c3e4c2(lVar1,lVar4);
            lVar4 = lVar4 + 0x430;
            lVar3 = lVar3 + -0x430;
          } while (lVar3 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 140c3e4c2 FUN_140c3e4c2 body=176 status=ok
// SIG undefined FUN_140c3e4c2(void)

void FUN_140c3e4c2(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  uint local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = *(uint *)(param_2 + 1);
  if (1 < (int)uVar1) {
    local_60 = (void *)0x0;
    _Src = (void *)*param_2;
    local_58 = uVar1;
    FUN_1446dd670(&local_60,(ulonglong)uVar1,0);
    memcpy(local_60,_Src,(ulonglong)uVar1 * 2);
    local_50 = DAT_14cbe4638;
    local_48 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    uStack_38 = 0;
    uStack_34 = 0;
    if (1 < (int)local_58) {
      FUN_140c3e574(param_1 + 0x120,&local_60);
    }
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3e574 FUN_140c3e574 body=224 status=ok
// SIG undefined FUN_140c3e574(void)

int FUN_140c3e574(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  lVar9 = *param_1;
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  if (lVar8 != 0) {
    uVar10 = 0;
    do {
      cVar6 = FUN_140c3e654(lVar9 + uVar10,param_2);
      if (cVar6 != '\0') {
        iVar7 = (int)(uVar10 >> 3) * -0x49249249;
        if (iVar7 != -1) {
          return iVar7;
        }
        break;
      }
      uVar10 = uVar10 + 0x38;
    } while (lVar8 * 0x38 - uVar10 != 0);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_141306894(param_1,iVar2);
    lVar9 = *param_1;
  }
  lVar8 = lVar8 * 0x38;
  puVar1 = (undefined8 *)(lVar9 + lVar8);
  *(undefined8 *)(lVar9 + lVar8) = 0;
  iVar7 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(lVar9 + 8 + lVar8) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(puVar1,iVar7,0);
    memcpy((void *)*puVar1,_Src,(longlong)iVar7 * 2);
  }
  *(undefined4 *)(puVar1 + 6) = *(undefined4 *)(param_2 + 6);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  puVar1[4] = param_2[4];
  puVar1[5] = uVar5;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  return iVar2;
}



// FUNCTION 140c3e654 FUN_140c3e654 body=173 status=ok
// SIG undefined FUN_140c3e654(void)

undefined8 FUN_140c3e654(longlong *param_1,longlong *param_2)

{
  int iVar1;
  ushort uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_1[1];
  if (iVar1 == (int)param_2[1]) {
    if (1 < iVar1) {
      lVar4 = 0;
      while( true ) {
        uVar5 = *(ushort *)(*param_1 + lVar4);
        uVar6 = (ulonglong)uVar5;
        uVar2 = *(ushort *)(*param_2 + lVar4);
        if (uVar5 != uVar2) break;
        if (uVar5 == 0) goto LAB_140c3e6c3;
LAB_140c3e69a:
        lVar4 = lVar4 + 2;
      }
      if ((uVar2 | uVar5) < 0x80) {
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar3 = (ulonglong)uVar2;
        uVar2 = (ushort)(byte)(&DAT_149e05da0)[uVar3];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar3]) goto LAB_140c3e69a;
      }
      if (uVar5 != uVar2) {
        return 0;
      }
    }
  }
  else if ((int)param_2[1] + iVar1 != 1) {
    return 0;
  }
LAB_140c3e6c3:
  if ((int)param_1[2] != (int)param_2[2]) {
    return 0;
  }
  if (*(int *)((longlong)param_1 + 0x14) == *(int *)((longlong)param_2 + 0x14)) {
    if ((param_1[3] == param_2[3]) && (param_1[4] == param_2[4])) {
      return CONCAT71((int7)((ulonglong)param_1[5] >> 8),param_1[5] == param_2[5]);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 140c3e710 FUN_140c3e710 body=132 status=ok
// SIG undefined FUN_140c3e710(void)

undefined8 * FUN_140c3e710(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b92bd10;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x32) = 0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(param_1 + 0x29);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3e794 FUN_140c3e794 body=69 status=ok
// SIG undefined FUN_140c3e794(void)

void FUN_140c3e794(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if ((int)(*(uint *)((longlong)param_1 + 0xc) & 0x7fffffff) < param_4) {
    FUN_140c3e7da(param_1,param_2,param_4);
  }
  FUN_144b3d470(*param_1,param_3,(longlong)param_4 << 4);
  *(int *)(param_1 + 1) = param_4;
  return;
}



// FUNCTION 140c3e7da FUN_140c3e7da body=136 status=ok
// SIG undefined FUN_140c3e7da(void)

void FUN_140c3e7da(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 << 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 140c3e862 FUN_140c3e862 body=55 status=ok
// SIG undefined FUN_140c3e862(void)

void FUN_140c3e862(longlong param_1,longlong *param_2)

{
  FUN_140c3e89a();
                    /* WARNING: Could not recover jumptable at 0x000140c3e896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x17a0,0,0);
  return;
}



// FUNCTION 140c3e89a FUN_140c3e89a body=374 status=ok
// SIG undefined FUN_140c3e89a(void)

void FUN_140c3e89a(ulonglong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar7;
  
  if ((param_1 != 0) && (*(char *)(param_1 + 0xb8) < '\0')) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
    if (DAT_14cad0160 != DAT_14cad018c) {
      uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      puVar5 = &DAT_14cad0190;
      if (DAT_14cad0198 != (undefined *)0x0) {
        puVar5 = DAT_14cad0198;
      }
      iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14cad01a0 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
      while (iVar1 != -1) {
        lVar7 = DAT_14cad0158 + (longlong)iVar1 * 0x20;
        if (*(ulonglong *)(DAT_14cad0158 + (longlong)iVar1 * 0x20) == param_1) {
          if (((lVar7 != 0) && (lVar7 != -8)) && ((longlong)*(int *)(lVar7 + 0x10) != 0)) {
            lVar6 = *(longlong *)(lVar7 + 8);
            lVar7 = (longlong)*(int *)(lVar7 + 0x10) << 5;
            do {
              (**(code **)(*param_2 + 0x88))(param_2,lVar6,0,0);
              lVar6 = lVar6 + 0x20;
              lVar7 = lVar7 + -0x20;
            } while (lVar7 != 0);
          }
          break;
        }
        iVar1 = *(int *)(lVar7 + 0x18);
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14cad01a8);
  }
  plVar4 = (longlong *)(param_1 + 0x1e8);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x38))(plVar4);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x40))(plVar4);
    if ((cVar2 != '\0') &&
       (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x30))(plVar4), plVar4 != (longlong *)0x0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 0x10);
LAB_140c3e900:
                    /* WARNING: Could not recover jumptable at 0x000140c3e90f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar4,param_2,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
  else {
    plVar4 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28))(plVar4);
    if (plVar4 != (longlong *)0x0) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar4 + 8);
      goto LAB_140c3e900;
    }
  }
  return;
}



// FUNCTION 140c3ea54 FUN_140c3ea54 body=177 status=ok
// SIG undefined FUN_140c3ea54(void)

void FUN_140c3ea54(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x18);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x20) * 2;
    do {
      plVar2 = (longlong *)*plVar5;
      plVar3 = (longlong *)plVar5[1];
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x68))(plVar2,param_2);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
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
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar4);
  }
  plVar5 = *(longlong **)(param_1 + 0x38);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
  }
  plVar5 = *(longlong **)(param_1 + 0x48);
  if (plVar5 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140c3eade. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x68))(plVar5,param_2);
  return;
}



// FUNCTION 140c3eb06 FUN_140c3eb06 body=57 status=ok
// SIG undefined FUN_140c3eb06(void)

void FUN_140c3eb06(longlong param_1,undefined8 param_2)

{
  FUN_140bcc8a6(param_2,param_1 + 0x364,0,0);
  FUN_1407f250a(param_1 + 0x3f0,param_2);
  return;
}



// FUNCTION 140c3eb40 FUN_140c3eb40 body=59 status=ok
// SIG undefined FUN_140c3eb40(void)

void FUN_140c3eb40(longlong *param_1)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 6) & 0x80) != 0) {
    cVar1 = (**(code **)(*param_1 + 0x310))(param_1,0);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x330))(param_1);
    }
  }
  FUN_140c3ee9e(param_1);
  return;
}



// FUNCTION 140c3eb9a FUN_140c3eb9a body=771 status=ok
// SIG undefined FUN_140c3eb9a(void)

undefined8 FUN_140c3eb9a(longlong param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  uint *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  uint uVar16;
  
  fVar4 = DAT_14cad4b70;
  uVar1 = *(uint *)(param_1 + 0x30);
  uVar6 = (ulonglong)uVar1;
  if ((uVar1 >> 8 & 1) == 0) {
    iVar2 = *(int *)(param_1 + 0xd0);
    if (iVar2 == 0) {
      uVar14 = 1;
      uVar10 = 0;
      iVar15 = 0;
      iVar11 = 0;
    }
    else {
      puVar12 = *(uint **)(param_1 + 200);
      if (*(uint **)(param_1 + 200) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0xb8);
      }
      uVar5 = *puVar12;
      if (uVar5 == 0) {
        uVar5 = iVar2 - 1;
        uVar6 = (ulonglong)uVar5;
        uVar16 = iVar2 + 0x1e;
        if (-1 < (int)uVar5) {
          uVar16 = uVar5;
        }
        uVar10 = 0;
        uVar14 = (ulonglong)(uint)((int)uVar16 >> 5);
        if ((int)uVar16 >> 5 < 1) {
          uVar14 = uVar10;
        }
        iVar11 = 0;
        do {
          if (uVar14 == uVar10) goto LAB_140c3ee3b;
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar12[uVar10 + 1];
          uVar10 = uVar10 + 1;
        } while (uVar5 == 0);
      }
      else {
        uVar10 = 0;
        iVar11 = 0;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar6 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar5 = (uint)lVar13 ^ 0x3f;
      uVar6 = (ulonglong)uVar5;
      iVar15 = (iVar11 - uVar5) + 0x3e;
      if (iVar2 <= iVar15) {
        iVar15 = iVar2;
      }
    }
    if (iVar15 < iVar2) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      iVar8 = iVar8 >> 5;
      uVar5 = 0xffffffff;
      do {
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8 + (longlong)iVar15 * 0x20);
        if ((*(longlong *)(lVar13 + 0x48) != 0) ||
           ((((*(int *)(lVar13 + 0xdc) != 0 && (uVar16 = *(uint *)(lVar13 + 0xd8), -1 < (int)uVar16)
              ) && ((int)uVar16 < DAT_14c9647dc)) &&
            (((plVar7 = (longlong *)
                        ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
              plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(lVar13 + 0xdc))) &&
             (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))))) {
          if ((*(byte *)(lVar13 + 0xc) & 1) == 0) {
            return 0;
          }
          if ((*(longlong *)(lVar13 + 0x30) != 0) &&
             (pcVar3 = *(char **)(*(longlong *)(lVar13 + 0x30) + 8), pcVar3 != (char *)0x0)) {
            if (*(int *)(pcVar3 + 4) != *(int *)(pcVar3 + 8)) {
              return 0;
            }
            if (0 < *(int *)(pcVar3 + 0xc)) {
              return 0;
            }
            if (*pcVar3 != '\x01') {
              return 0;
            }
            if (0 < *(int *)(pcVar3 + 0x448)) {
              return 0;
            }
            if ((longlong)*(int *)(pcVar3 + 0x438) != 0) {
              lVar13 = 0;
              do {
                if (*(longlong *)(*(longlong *)(pcVar3 + 0x430) + lVar13) != 0) {
                  return 0;
                }
                lVar13 = lVar13 + 0x28;
              } while ((longlong)*(int *)(pcVar3 + 0x438) * 0x28 != lVar13);
            }
          }
        }
        uVar5 = uVar5 & ~(uint)uVar14;
        puVar12 = *(uint **)(param_1 + 200);
        if (*(uint **)(param_1 + 200) == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 0xb8);
        }
        iVar15 = (int)uVar10;
        uVar6 = (ulonglong)iVar15;
        uVar16 = puVar12[uVar6] & uVar5;
        if (uVar16 == 0) {
          iVar9 = iVar8;
          if (iVar8 < iVar15) {
            iVar9 = iVar15;
          }
          if (iVar8 <= iVar15) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar16 = puVar12[uVar6 + lVar13 + 1];
            if (uVar16 != 0) break;
            lVar13 = lVar13 + 1;
            if ((longlong)iVar9 - uVar6 == lVar13) goto LAB_140c3ee3b;
          }
          uVar10 = (ulonglong)(iVar15 + (int)lVar13 + 1);
          uVar5 = 0xffffffff;
        }
        uVar14 = (ulonglong)(-uVar16 & uVar16);
        uVar6 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar16 = (uint)lVar13 ^ 0x3f;
        uVar6 = (ulonglong)uVar16;
        iVar15 = (iVar11 - uVar16) + 0x3e;
      } while (iVar15 < iVar2);
    }
  }
LAB_140c3ee3b:
  if (((0.0 < DAT_14cad4b70) && (uVar6 = *(ulonglong *)(param_1 + 0x28), uVar6 != 0)) &&
     (*(longlong *)(uVar6 + 0x58) != 0)) {
    *(uint *)(param_1 + 0x30) = uVar1 | 0x100;
    uVar6 = *(ulonglong *)(uVar6 + 0x58);
    if (*(double *)(uVar6 + 0x300) - *(double *)(param_1 + 0x88) < (double)fVar4) {
      return 0;
    }
  }
  return CONCAT71((int7)(uVar6 >> 8),1);
}



// FUNCTION 140c3ee9e FUN_140c3ee9e body=2184 status=ok
// SIG undefined FUN_140c3ee9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140c3ee9e(longlong param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  double dVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  longlong *plVar20;
  undefined *puVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auStack_98 [32];
  uint *local_78;
  LARGE_INTEGER local_70;
  LARGE_INTEGER local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar25 = (ulonglong)*(uint *)(param_1 + 0x118);
  if ((*(uint *)(param_1 + 0x118) != *(uint *)(param_1 + 0x144)) || (*(int *)(param_1 + 0x100) != 0)
     ) {
    QueryPerformanceCounter(&local_68);
    local_70.s = local_68.s;
    uVar26 = *(uint *)(param_1 + 0x138);
    uVar25 = (ulonglong)uVar26;
    if (uVar26 == 0) {
      uVar24 = 1;
      uVar23 = 0;
      iVar19 = 0;
      uVar18 = 0;
    }
    else {
      puVar11 = *(uint **)(param_1 + 0x130);
      if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
        puVar11 = (uint *)(param_1 + 0x120);
      }
      uVar18 = *puVar11;
      if (uVar18 == 0) {
        iVar19 = uVar26 + 0x1e;
        if (-1 < (int)(uVar26 - 1)) {
          iVar19 = uVar26 - 1;
        }
        uVar23 = 0;
        uVar24 = (ulonglong)(uint)(iVar19 >> 5);
        if (iVar19 >> 5 < 1) {
          uVar24 = uVar23;
        }
        iVar19 = 0;
        do {
          if (uVar24 == uVar23) goto LAB_140c3f09f;
          iVar19 = iVar19 + 0x20;
          uVar18 = puVar11[uVar23 + 1];
          uVar23 = uVar23 + 1;
        } while (uVar18 == 0);
      }
      else {
        uVar23 = 0;
        iVar19 = 0;
      }
      uVar24 = (ulonglong)(-uVar18 & uVar18);
      uVar2 = uVar24 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      uVar18 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      if ((int)uVar26 <= (int)uVar18) {
        uVar18 = uVar26;
      }
    }
    if ((int)uVar18 < (int)uVar26) {
      local_78 = (uint *)(param_1 + 0x110);
      uVar26 = 0xffffffff;
      do {
        lVar9 = FUN_140634914(*(undefined8 *)
                               (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x1b8),
                              *(longlong *)(param_1 + 0x110) + (longlong)(int)uVar18 * 0x10,1);
        if (lVar9 == 0) {
          cVar7 = FUN_1408c2550(*(undefined8 *)
                                 (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x1b8),
                                (longlong)(int)uVar18 * 0x10 + *(longlong *)(param_1 + 0x110),1);
          if (cVar7 != '\0') goto LAB_140c3eff5;
        }
        else {
LAB_140c3eff5:
          FUN_140646052(local_78,uVar18);
        }
        uVar26 = uVar26 & ~(uint)uVar24;
        puVar11 = *(uint **)(param_1 + 0x130);
        if (*(uint **)(param_1 + 0x130) == (uint *)0x0) {
          puVar11 = (uint *)(param_1 + 0x120);
        }
        uVar3 = *(uint *)(param_1 + 0x138);
        uVar25 = (ulonglong)uVar3;
        iVar8 = (int)uVar23;
        lVar9 = (longlong)iVar8;
        uVar18 = puVar11[lVar9] & uVar26;
        if (uVar18 == 0) {
          iVar12 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar12 = uVar3 - 1;
          }
          iVar12 = iVar12 >> 5;
          iVar13 = iVar12;
          if (iVar12 < iVar8) {
            iVar13 = iVar8;
          }
          if (iVar12 <= iVar8) break;
          lVar16 = 0;
          while( true ) {
            iVar19 = iVar19 + 0x20;
            uVar18 = puVar11[lVar9 + lVar16 + 1];
            if (uVar18 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar13 - lVar9 == lVar16) goto LAB_140c3f09f;
          }
          uVar23 = (ulonglong)(iVar8 + (int)lVar16 + 1);
          uVar26 = 0xffffffff;
        }
        uVar24 = (ulonglong)(-uVar18 & uVar18);
        uVar2 = uVar24 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        uVar18 = (iVar19 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
      } while ((int)uVar18 < (int)uVar3);
    }
LAB_140c3f09f:
    if (*(int *)(param_1 + 0x100) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x28);
      *(uint *)(param_1 + 0x90) =
           *(uint *)(param_1 + 0x90) & 0xffffff7f |
           (uint)(byte)((char)*(uint *)(param_1 + 0x90) < '\0' |
                       (*(byte *)(*(longlong *)(lVar9 + 0x58) + 0x309) & 2) >> 1) << 7;
      plVar20 = *(longlong **)(lVar9 + 0x58);
      puVar21 = &DAT_14cad4b18;
      if (*(int *)((longlong)plVar20 + 0x86c) == -1) {
        puVar21 = &DAT_14cad4b00;
      }
      if ((**(int **)(puVar21 + 0x10) != 0) &&
         (fVar27 = (float)**(int **)(puVar21 + 0x10),
         fVar27 < *(float *)(plVar20 + 0xdc) || fVar27 == *(float *)(plVar20 + 0xdc))) {
        uVar10 = 0;
        goto LAB_140c3f4d6;
      }
      if (*(int *)(param_1 + 0x118) == *(int *)(param_1 + 0x144)) {
        if ((*(int *)(param_1 + 0x34) != -1) &&
           (*(int *)(lVar9 + 0x1588) != *(int *)(lVar9 + 0x15b4))) {
          lVar16 = *(longlong *)(param_1 + 0x70);
          lVar22 = lVar9 + 0x15b8;
          if (*(longlong *)(lVar9 + 0x15c0) != 0) {
            lVar22 = *(longlong *)(lVar9 + 0x15c0);
          }
          iVar19 = *(int *)(lVar22 + (ulonglong)
                                     (*(int *)(lVar9 + 0x15c8) - 1U &
                                     (int)lVar16 + (int)((ulonglong)lVar16 >> 0x20) * 0x17) * 4);
          if (iVar19 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(lVar9 + 0x1580) + (longlong)iVar19 * 0x20) == lVar16)
              goto LAB_140c3f1bd;
              iVar19 = *(int *)((longlong)iVar19 * 0x20 + *(longlong *)(lVar9 + 0x1580) + 0x18);
            } while (iVar19 != -1);
          }
        }
        cVar7 = (**(code **)(*plVar20 + 0x400))(plVar20,*(undefined8 *)(param_1 + 0x70));
        dVar6 = DAT_14c83f418;
        if (cVar7 != '\0') goto LAB_140c3f1bd;
        cVar7 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x3c0))();
        bVar5 = true;
        if ((cVar7 == '\0') && (0.0 < DAT_14caf2160)) {
          auVar28._0_8_ = (double)CONCAT44(0x43300000,local_70.s.LowPart);
          auVar28._8_4_ = local_70.s.HighPart;
          auVar28._12_4_ = 0x45300000;
          if ((float)((double)(float)(dVar6 * ((auVar28._0_8_ - 4503599627370496.0) +
                                              (auVar28._8_8_ - 1.9342813113834067e+25))) -
                     *(double *)(param_1 + 0x108)) <= _DAT_14c761494) {
            bVar5 = false;
          }
          else {
            piVar1 = (int *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58) + 0x8c8);
            *piVar1 = *piVar1 + 1;
          }
        }
        if (0 < *(int *)(param_1 + 0x100)) {
          uVar25 = 0;
          do {
            if (!bVar5) {
              plVar20 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x58);
              cVar7 = (**(code **)(*plVar20 + 0x3c0))(plVar20);
              fVar27 = 0.0;
              if (cVar7 == '\0') {
                fVar27 = DAT_14caf2160;
              }
              if ((0.0 < fVar27) && (fVar27 < *(float *)(plVar20 + 0x118))) break;
            }
            puVar17 = *(undefined8 **)(*(longlong *)(param_1 + 0xf8) + uVar25 * 8);
            FUN_1434aac2a(param_1,puVar17);
            if (puVar17 != (undefined8 *)0x0) {
              (**(code **)*puVar17)(puVar17,1);
            }
            *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + uVar25 * 8) = 0;
            uVar25 = uVar25 + 1;
          } while ((longlong)uVar25 < (longlong)*(int *)(param_1 + 0x100));
          iVar19 = (int)uVar25;
          if (iVar19 != 0) {
            iVar12 = *(int *)(param_1 + 0x100) - iVar19;
            iVar8 = iVar19;
            if (iVar12 != 0) {
              memmove(*(void **)(param_1 + 0xf8),
                      (void *)((longlong)*(void **)(param_1 + 0xf8) + (uVar25 & 0xffffffff) * 8),
                      (longlong)iVar12 << 3);
              iVar8 = *(int *)(param_1 + 0x100);
            }
            *(int *)(param_1 + 0x100) = iVar8 - iVar19;
            FUN_147a4f264(param_1 + 0xf8);
          }
        }
        local_78 = (uint *)(param_1 + 0xb8);
        iVar19 = *(int *)(param_1 + 0xd0);
        if (iVar19 == 0) {
          uVar23 = 1;
          uVar25 = 0;
          iVar12 = 0;
          iVar8 = 0;
        }
        else {
          puVar11 = *(uint **)(param_1 + 200);
          if (*(uint **)(param_1 + 200) == (uint *)0x0) {
            puVar11 = local_78;
          }
          uVar26 = *puVar11;
          if (uVar26 == 0) {
            iVar8 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar8 = iVar19 + -1;
            }
            uVar25 = 0;
            uVar23 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar23 = uVar25;
            }
            iVar12 = 0;
            do {
              if (uVar23 == uVar25) goto LAB_140c3f405;
              iVar12 = iVar12 + 0x20;
              uVar26 = puVar11[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar26 == 0);
          }
          else {
            uVar25 = 0;
            iVar12 = 0;
          }
          uVar23 = (ulonglong)(-uVar26 & uVar26);
          uVar24 = uVar23 * 2 + 1;
          lVar9 = 0x3f;
          if (uVar24 != 0) {
            for (; uVar24 >> lVar9 == 0; lVar9 = lVar9 + -1) {
            }
          }
          iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
          if (iVar19 <= iVar8) {
            iVar8 = iVar19;
          }
        }
        if (iVar8 != iVar19) {
          uVar26 = 0xffffffff;
          do {
            lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 8 + (longlong)iVar8 * 0x20);
            plVar20 = *(longlong **)(lVar9 + 0x48);
            if (((plVar20 != (longlong *)0x0) ||
                (((((*(int *)(lVar9 + 0xdc) != 0 &&
                    (uVar18 = *(uint *)(lVar9 + 0xd8), -1 < (int)uVar18)) &&
                   ((int)uVar18 < DAT_14c9647dc)) &&
                  ((puVar17 = (undefined8 *)
                              ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
                   puVar17 != (undefined8 *)0x0 && (*(int *)(puVar17 + 2) == *(int *)(lVar9 + 0xdc))
                   ))) && (((*(uint *)(puVar17 + 1) & 0x10200000) == 0 &&
                           (plVar20 = (longlong *)*puVar17, plVar20 != (longlong *)0x0)))))) &&
               (((*(uint *)(plVar20 + 1) >> 0x1e & 1) == 0 &&
                ((((*(longlong *)(lVar9 + 0x50) == 0 ||
                   (plVar4 = *(longlong **)(*(longlong *)(lVar9 + 0x50) + 0x58),
                   plVar4 == (longlong *)0x0)) ||
                  (cVar7 = (**(code **)(*plVar4 + 0x3f8))(), cVar7 == '\0')) &&
                 ((((*(longlong *)(lVar9 + 0x58) == 0 ||
                    (*(int *)(*(longlong *)(lVar9 + 0x58) + 0x100) < 1)) &&
                   (FUN_1400f5d32(*(undefined8 *)(lVar9 + 0x20),**(undefined8 **)(lVar9 + 0x30),
                                  plVar20), (*(uint *)(plVar20 + 1) >> 0x1e & 1) == 0)) &&
                  (*(code **)(*plVar20 + 0x220) != (code *)0x144aff47c)))))))) {
              (**(code **)(*plVar20 + 0x220))(plVar20);
            }
            uVar26 = uVar26 & ~(uint)uVar23;
            puVar11 = *(uint **)(param_1 + 200);
            if (*(uint **)(param_1 + 200) == (uint *)0x0) {
              puVar11 = local_78;
            }
            iVar13 = *(int *)(param_1 + 0xd0);
            iVar8 = (int)uVar25;
            lVar9 = (longlong)iVar8;
            uVar18 = puVar11[lVar9] & uVar26;
            if (uVar18 == 0) {
              iVar14 = iVar13 + 0x1e;
              if (-1 < iVar13 + -1) {
                iVar14 = iVar13 + -1;
              }
              iVar14 = iVar14 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar15 = iVar14;
              if (iVar14 < iVar8) {
                iVar15 = iVar8;
              }
              if (iVar8 < iVar14) {
                lVar16 = 0;
                do {
                  uVar18 = puVar11[lVar9 + lVar16 + 1];
                  if (uVar18 != 0) {
                    uVar25 = (ulonglong)(iVar8 + (int)lVar16 + 1);
                    uVar26 = 0xffffffff;
                    goto LAB_140c3f61f;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar16 = lVar16 + 1;
                } while (iVar15 - lVar9 != lVar16);
                uVar26 = 0xffffffff;
                lVar9 = (longlong)iVar15;
              }
              uVar25 = lVar9 + 1U & 0xffffffff;
              iVar8 = iVar13;
            }
            else {
LAB_140c3f61f:
              uVar23 = (ulonglong)(-uVar18 & uVar18);
              uVar24 = uVar23 * 2 + 1;
              lVar9 = 0x3f;
              if (uVar24 != 0) {
                for (; uVar24 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                }
              }
              iVar8 = (iVar12 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
              if (iVar13 <= iVar8) {
                iVar8 = iVar13;
              }
            }
          } while (iVar8 != iVar19);
        }
LAB_140c3f405:
        lVar9 = *(longlong *)(param_1 + 0x28);
        if (*(longlong *)(lVar9 + 0x68) != 0) {
          lVar16 = FUN_1413dbcfa();
          plVar20 = *(longlong **)(lVar9 + 0x68);
          if (((plVar20 != (longlong *)0x0) && (lVar16 != 0)) && (lVar9 = plVar20[2], lVar9 != 0)) {
            iVar19 = *(int *)(lVar16 + 0x38);
            if ((iVar19 <= *(int *)(lVar9 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar19 * 8) == lVar16 + 0x30))
            {
              (**(code **)(*plVar20 + 0x348))
                        (plVar20,param_1 + 0x70,
                         CONCAT71((int7)(int3)((uint)iVar19 >> 8),*(int *)(param_1 + 0x100) != 0));
            }
          }
        }
        if (*(int *)(param_1 + 0x100) == 0) {
          FUN_140b1a8d4(param_1 + 600);
        }
      }
      else {
LAB_140c3f1bd:
        QueryPerformanceCounter(&local_68);
        if ((double)_DAT_14c76148c <
            ((double)local_68.QuadPart * DAT_14c83f420 + 16777216.0) - *(double *)(param_1 + 0x108))
        {
          QueryPerformanceCounter(&local_68);
          *(double *)(param_1 + 0x108) = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
        }
      }
      QueryPerformanceCounter(&local_68);
      lVar16 = local_68.QuadPart - (longlong)local_70;
      auVar29._8_4_ = (int)((ulonglong)lVar16 >> 0x20);
      auVar29._0_8_ = lVar16;
      auVar29._12_4_ = 0x45300000;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x58);
      *(float *)(lVar9 + 0x6e0) =
           (float)((((double)CONCAT44(0x43300000,(int)lVar16) - 4503599627370496.0) +
                   (auVar29._8_8_ - 1.9342813113834067e+25)) * DAT_14c83f418 * 1000.0) +
           *(float *)(lVar9 + 0x6e0);
      uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),*(int *)(param_1 + 0x100) == 0);
      goto LAB_140c3f4d6;
    }
  }
  uVar10 = CONCAT71((int7)(uVar25 >> 8),1);
LAB_140c3f4d6:
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3f728 FUN_140c3f728 body=618 status=ok
// SIG undefined FUN_140c3f728(void)

undefined8 FUN_140c3f728(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 uVar6;
  void *_Src;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
  if (param_4 != 0) {
    lVar15 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar15) = *(undefined2 *)(param_3 + 0x10 + lVar15);
      *(undefined8 *)(param_2 + 8 + lVar15) = *(undefined8 *)(param_3 + 8 + lVar15);
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar15);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x28 + lVar15);
      uVar10 = *puVar4;
      uVar11 = puVar4[1];
      uVar12 = puVar4[2];
      uVar13 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x18 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      puVar3 = (undefined4 *)(param_2 + 0x28 + lVar15);
      *puVar3 = uVar10;
      puVar3[1] = uVar11;
      puVar3[2] = uVar12;
      puVar3[3] = uVar13;
      *(undefined8 *)(param_2 + 0x38 + lVar15) = *(undefined8 *)(param_3 + 0x38 + lVar15);
      if (param_2 != param_3) {
        FUN_1407c4b0e(*(undefined8 *)(param_2 + 0x40 + lVar15),
                      *(undefined4 *)(param_2 + 0x48 + lVar15));
        iVar5 = *(int *)(param_3 + 0x48 + lVar15);
        uVar6 = *(undefined8 *)(param_3 + 0x40 + lVar15);
        *(int *)(param_2 + 0x48 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x4c + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0x4c + lVar15) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar15 + 0x40);
          FUN_14791a556(puVar14,iVar5);
          FUN_14791a5cc(*puVar14,uVar6,iVar5);
        }
      }
      lVar1 = param_3 + lVar15;
      lVar2 = param_2 + lVar15;
      FUN_1404306dc(param_2 + lVar15 + 0x50,param_3 + lVar15 + 0x50);
      FUN_14054c6c4(param_2 + lVar15 + 0x60,param_3 + lVar15 + 0x60);
      FUN_140c3f992(param_2 + lVar15 + 0x70,param_3 + lVar15 + 0x70);
      FUN_140c3f992(lVar2 + 0x80,lVar1 + 0x80);
      if (lVar2 != lVar1) {
        FUN_1407c4add(*(undefined8 *)(param_2 + 0x90 + lVar15),
                      *(undefined4 *)(param_2 + 0x98 + lVar15));
        iVar5 = *(int *)(param_3 + 0x98 + lVar15);
        uVar6 = *(undefined8 *)(param_3 + 0x90 + lVar15);
        *(int *)(param_2 + 0x98 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0x9c + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0x9c + lVar15) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar15 + 0x90);
          FUN_14791a948(puVar14,iVar5);
          FUN_14791a9bb(*puVar14,uVar6,iVar5);
        }
        iVar5 = *(int *)(param_3 + 0xa8 + lVar15);
        _Src = *(void **)(param_3 + 0xa0 + lVar15);
        *(int *)(param_2 + 0xa8 + lVar15) = iVar5;
        if (iVar5 == 0 && *(int *)(param_2 + 0xac + lVar15) == 0) {
          *(undefined4 *)(param_2 + 0xac + lVar15) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar15 + 0xa0);
          FUN_14791a9f0(puVar14,iVar5);
          if (iVar5 != 0) {
            memcpy((void *)*puVar14,_Src,(longlong)iVar5 << 3);
          }
        }
      }
      puVar3 = (undefined4 *)(param_3 + 0xb0 + lVar15);
      uVar7 = puVar3[1];
      uVar8 = puVar3[2];
      uVar9 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0xb0 + lVar15);
      *puVar4 = *puVar3;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
      FUN_140430734(lVar2 + 0xc0,lVar1 + 0xc0);
      *(undefined4 *)(param_2 + 0xd0 + lVar15) = *(undefined4 *)(param_3 + 0xd0 + lVar15);
      lVar15 = lVar15 + 0xd8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140c3f992 FUN_140c3f992 body=93 status=ok
// SIG undefined FUN_140c3f992(void)

undefined8 * FUN_140c3f992(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1407c4ab5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14791a8a4(param_1,iVar1);
      FUN_14791a906(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140c3f9f0 FUN_140c3f9f0 body=40 status=ok
// SIG undefined FUN_140c3f9f0(void)

undefined8 FUN_140c3f9f0(undefined8 param_1,int param_2)

{
  FUN_140c3fa18();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c3fa18 FUN_140c3fa18 body=48 status=ok
// SIG undefined FUN_140c3fa18(void)

void FUN_140c3fa18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4e7980;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405d1598(param_1);
  return;
}



// FUNCTION 140c3fa48 FUN_140c3fa48 body=425 status=ok
// SIG undefined FUN_140c3fa48(void)

void FUN_140c3fa48(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined1 local_c0;
  undefined1 local_b1;
  undefined8 local_b0;
  char local_a8 [16];
  longlong *local_98;
  undefined4 local_80 [2];
  char local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b1 = param_4;
  local_b0 = param_3;
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (iVar2 = *(int *)(param_1 + 0x4f8), (longlong)iVar2 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x4f0);
    lVar7 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar7);
      if (plVar4 != (longlong *)0x0) {
        lVar5 = (**(code **)(*plVar4 + 8))(plVar4);
        lVar6 = FUN_140c3fbf2();
        if ((((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
             lVar6 + 0x30)) &&
           (((char)plVar4[6] == '\x01' && (*(char *)((longlong)plVar4 + 0x31) == '\0')))) {
          local_a8[0] = '\0';
          local_80[0] = 0;
          FUN_1456bb102(local_a8,local_b0);
          local_78 = '\0';
          local_50[0] = 0;
          local_c8 = local_b1;
          local_c0 = 1;
          (**(code **)(*plVar4 + 0x50))(plVar4,param_2,param_1,local_a8);
          FUN_1448173f8(local_50);
          if (local_78 != '\0') {
            if (local_78 == '\x01') {
              local_70 = 0;
            }
            else if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_68 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_68 + 0x10))();
              }
            }
            local_78 = '\0';
          }
          FUN_1448173f8(local_80);
          if ((local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_98 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_98 + 0x10))();
            }
          }
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c3fbf2 FUN_140c3fbf2 body=57 status=ok
// SIG undefined FUN_140c3fbf2(void)

void FUN_140c3fbf2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb54b78 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb54b78 = FUN_140002ddd(FUN_1464ae8f2,uVar1,L"AttributeEffectAspect");
  }
  return;
}



// FUNCTION 140c3fc2c FUN_140c3fc2c body=89 status=ok
// SIG undefined FUN_140c3fc2c(void)

void FUN_140c3fc2c(longlong param_1)

{
  undefined1 in_stack_00000028;
  char in_stack_00000030;
  undefined1 auStack_48 [32];
  undefined1 local_28;
  undefined1 *local_20;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(char *)(param_1 + 0x30) == '\x01') && (in_stack_00000030 != '\0')) {
    local_20 = &local_9;
    local_28 = in_stack_00000028;
    FUN_140c3fc86(param_1 + 0xb0);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3fc86 FUN_140c3fc86 body=267 status=ok
// SIG undefined FUN_140c3fc86(void)

void FUN_140c3fc86(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((longlong)(int)param_1[1] != 0) {
    lVar7 = *param_1;
    lVar6 = (longlong)(int)param_1[1] * 0x70;
    do {
      local_60 = param_6;
      local_68 = param_5;
      FUN_140c3fd92(lVar7,&local_58,param_3,param_4);
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_140c41468(param_2,iVar3);
      }
      plVar5 = local_50;
      lVar4 = *param_2;
      *(undefined8 *)(lVar4 + (longlong)iVar3 * 0x10) = local_58;
      *(longlong **)(lVar4 + 8 + (longlong)iVar3 * 0x10) = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_50)(local_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
      }
      lVar7 = lVar7 + 0x70;
      lVar6 = lVar6 + -0x70;
    } while (lVar6 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c3fd92 FUN_140c3fd92 body=735 status=ok
// SIG undefined FUN_140c3fd92(void)

undefined8 *
FUN_140c3fd92(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  int *piVar1;
  undefined1 uVar2;
  code *pcVar3;
  byte bVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined8 unaff_RBP;
  int iVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  char local_d0 [16];
  longlong *local_c0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar6 = FUN_144873cc0();
  if (lVar6 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_108);
  }
  local_d0[0] = '\0';
  local_a8 = 0;
  FUN_1456bb102(local_d0,param_3);
  puVar12 = &local_a0;
  FUN_1448729ea(param_1 + 0x20,puVar12,local_d0);
  if (local_80 == 3) {
    uVar5 = 3;
    uVar15 = local_a0;
  }
  else {
    puVar14 = &local_78;
    FUN_1400b56fe(puVar14,&local_a0,3);
    uVar15 = 0;
    if (local_58 != 0) {
      uVar15 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar14 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(puVar14);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar5 = (uint)local_80;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar12 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(puVar12);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar11 = (longlong)local_a8 + -1;
    lVar13 = lVar11 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar6 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar10 = (int)lVar11;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar6 + lVar13) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar13) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar9 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar9 = DAT_14c9a3dc0;
    }
    iVar8 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar8 = iVar10;
    }
    bVar4 = (byte)lVar11 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8 = 0;
  }
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  uVar2 = *(undefined1 *)(param_1 + 0x18);
  uVar7 = FUN_144873cc0(param_1);
  local_d8 = param_6;
  local_e0 = param_5;
  local_e8 = uVar15;
  FUN_140c40077(param_2,uVar7,param_4,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar2) & 0xffffffff
               );
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c40077 FUN_140c40077 body=239 status=ok
// SIG undefined FUN_140c40077(void)

undefined8 *
FUN_140c40077(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,char param_6,undefined8 param_7)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_6 == '\x01') {
    FUN_140c404da(&local_40);
  }
  else {
    if (param_6 != '\0') {
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_140c40152;
    }
    FUN_140c41576(&local_40);
  }
  if (local_40 != (longlong *)0x0) {
    local_48 = param_7;
    (**(code **)(*local_40 + 8))(local_40,param_3,param_4,param_5);
  }
  *param_1 = local_40;
  param_1[1] = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
LAB_140c40152:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4016a FUN_140c4016a body=348 status=ok
// SIG undefined FUN_140c4016a(void)

void FUN_140c4016a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_98 [48];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140c41132(param_1 + 0x78);
  FUN_140c4063e(param_1,param_2,param_3,param_4);
  uVar6 = FUN_14053dec2(param_2);
  FUN_14053daec(&local_50,uVar6);
  if (local_48 != (longlong *)0x0) {
    iVar5 = (int)local_48[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_48[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_48 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_48;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_48 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      if (local_50 != 0) {
        plVar3 = *(longlong **)(param_1 + 0x10);
        if (plVar3 == (longlong *)0x0) {
LAB_140c40278:
          local_68 = 0;
          plStack_60 = (longlong *)0x0;
        }
        else {
          iVar5 = (int)plVar3[1];
          do {
            if (iVar5 == 0) goto LAB_140c40278;
            LOCK();
            iVar4 = (int)plVar3[1];
            bVar8 = iVar5 == iVar4;
            if (bVar8) {
              *(int *)(plVar3 + 1) = iVar5 + 1;
              iVar4 = iVar5;
            }
            iVar5 = iVar4;
            UNLOCK();
          } while (!bVar8);
          local_68 = *(undefined8 *)(param_1 + 8);
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar2 = plVar3 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          plStack_60 = plVar3;
          if ((int)*plVar2 == 0) {
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
        FUN_140c402c8(local_50 + 0x20,&local_68);
      }
      LOCK();
      plVar3 = plVar7 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c402c8 FUN_140c402c8 body=240 status=ok
// SIG undefined FUN_140c402c8(void)

/* WARNING: Removing unreachable block (ram,0x000140c4038a) */
/* WARNING: Removing unreachable block (ram,0x000140c40390) */

void FUN_140c402c8(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  int local_40 [2];
  undefined8 local_38;
  longlong *local_30;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (longlong *)0x0;
  local_40[0] = *(int *)(param_1 + 0xc10) + 5;
  local_38 = *param_2;
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_30 = plVar3;
  }
  if (*(char *)(param_1 + 0xc14) == '\x01') {
    FUN_140c41752(param_1);
    *(undefined1 *)(param_1 + 0xc14) = 0;
  }
  FUN_140c403ba(param_1,local_40,&local_21);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c403ba FUN_140c403ba body=287 status=ok
// SIG undefined FUN_140c403ba(void)

ulonglong FUN_140c403ba(longlong param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar3 = *(int *)(param_1 + 0xc08);
  lVar11 = (longlong)iVar3;
  *(uint *)(param_1 + 0xc08) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xc0c) < iVar3 + 1U) {
    FUN_145789082(param_1,iVar3);
  }
  lVar9 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar9 = param_1;
  }
  *(undefined4 *)(lVar9 + lVar11 * 0x18) = *param_2;
  *(undefined8 *)(lVar9 + 8 + lVar11 * 0x18) = *(undefined8 *)(param_2 + 2);
  lVar4 = *(longlong *)(param_2 + 4);
  *(longlong *)(lVar9 + 0x10 + lVar11 * 0x18) = lVar4;
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0xc) = *(int *)(lVar4 + 0xc) + 1;
    UNLOCK();
  }
  uVar8 = (ulonglong)(*(int *)(param_1 + 0xc08) - 1);
  lVar11 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar11 = param_1;
  }
  if (1 < *(int *)(param_1 + 0xc08)) {
    do {
      uVar12 = (int)uVar8 - 1;
      uVar10 = (ulonglong)(uVar12 >> 1);
      if (*(uint *)(lVar11 + uVar10 * 0x18) <= *(uint *)(lVar11 + uVar8 * 0x18)) break;
      puVar1 = (undefined8 *)(lVar11 + uVar10 * 0x18);
      puVar2 = (undefined8 *)(lVar11 + uVar8 * 0x18);
      local_28 = puVar2[2];
      uVar5 = *puVar2;
      uVar6 = puVar2[1];
      puVar2[2] = puVar1[2];
      uVar7 = puVar1[1];
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar1[2] = local_28;
      local_38._0_4_ = (undefined4)uVar5;
      local_38._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar6;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      *(undefined4 *)puVar1 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar1 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar1 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_30._4_4_;
      uVar8 = uVar10;
      local_38 = uVar5;
      uStack_30 = uVar6;
    } while (1 < uVar12);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140c404da FUN_140c404da body=356 status=ok
// SIG undefined FUN_140c404da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c404da(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = DAT_14c9a65b8;
  if (DAT_14c9a65b8 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_140595974(0x6c00,0);
    lVar7 = 0x7f;
    puVar6 = puVar4;
    do {
      puVar5 = puVar6 + 0x1b;
      *puVar6 = puVar5;
      lVar7 = lVar7 + -1;
      puVar6 = puVar5;
    } while (lVar7 != 0);
    *puVar5 = DAT_14c9a65b8;
    _DAT_14c9a65c0 = _DAT_14c9a65c0 + 0x80;
  }
  DAT_14c9a65b8 = (undefined8 *)*puVar4;
  _DAT_14c9a65c4 = _DAT_14c9a65c4 + 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0x100000000;
  *puVar4 = &PTR_FUN_14a1c75e0;
  *(undefined1 *)(puVar4 + 0xf) = 0;
  *(undefined4 *)(puVar4 + 0x14) = 0;
  *(undefined1 *)(puVar4 + 0x15) = 0;
  *(undefined4 *)(puVar4 + 0x1a) = 0;
  *param_1 = puVar4;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a1c82e0;
  plVar3[2] = (longlong)puVar4;
  param_1[1] = plVar3;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar3 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar4[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar4[2] = plVar3;
      }
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  return param_1;
}



// FUNCTION 140c4063e FUN_140c4063e body=461 status=ok
// SIG undefined FUN_140c4063e(void)

void FUN_140c4063e(longlong param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined4 local_c0;
  undefined1 *local_b8;
  undefined1 local_a9;
  undefined1 local_a8 [8];
  undefined1 local_a0 [48];
  undefined1 *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (0 < *(int *)(param_1 + 0x70)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_e8);
  }
  *(undefined1 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x30);
    plVar5 = *(longlong **)(lVar3 + 0x38);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
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
    if (plVar4 != (longlong *)0x0) {
      FUN_1400606f6(local_a0,lVar3,param_2);
      puVar7 = local_70;
      if (local_70 == (undefined1 *)0x0) {
        puVar7 = local_a0;
      }
      if ((longlong)local_68 == 0) {
        local_68 = 0;
      }
      else {
        lVar6 = (longlong)local_68 * 0x30;
        do {
          local_c0 = *(undefined4 *)(param_1 + 0x28);
          local_c8 = *(undefined1 *)(param_1 + 0x24);
          local_b8 = &local_a9;
          (**(code **)(*plVar4 + 0x60))(plVar4,local_a8,lVar3,puVar7);
          FUN_140c4083a(param_1,puVar7,local_a8);
          puVar7 = puVar7 + 0x30;
          lVar6 = lVar6 + -0x30;
        } while (lVar6 != 0);
      }
      puVar7 = local_a0;
      if (local_70 != (undefined1 *)0x0) {
        puVar7 = local_70;
      }
      FUN_1446fdf58(puVar7,local_68);
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4083a FUN_140c4083a body=612 status=ok
// SIG undefined FUN_140c4083a(void)

/* WARNING: Removing unreachable block (ram,0x000140c409c5) */

void FUN_140c4083a(longlong param_1,char *param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  char local_70 [8];
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  char local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70[0] = *param_2;
  if (local_70[0] == '\x01') {
    local_70[0] = '\x02';
    if (*(longlong *)(param_2 + 8) == 0) {
      local_68._0_4_ = 0;
      iVar3 = 0;
      uVar2 = (uint)local_68;
    }
    else {
      uVar2 = *(uint *)(*(longlong *)(param_2 + 8) + 0xc);
      local_68 = (ulonglong)uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar3 = 0;
        }
        UNLOCK();
        uVar2 = (uint)local_68;
        if (bVar8) {
          iVar3 = iVar5;
        }
      }
    }
    local_68._0_4_ = uVar2;
    local_68 = CONCAT44(iVar3,(uint)local_68);
  }
  else if (local_70[0] == '\x02') {
    local_68 = *(ulonglong *)(param_2 + 8);
  }
  else if (local_70[0] == '\x03') {
    local_68 = *(undefined8 *)(param_2 + 8);
    local_60 = *(longlong **)(param_2 + 0x10);
    if (local_60 == (longlong *)0x0) {
      local_58 = *(undefined8 *)(param_2 + 0x18);
      local_50 = param_2[0x20];
    }
    else {
      LOCK();
      *(int *)((longlong)local_60 + 0xc) = *(int *)((longlong)local_60 + 0xc) + 1;
      UNLOCK();
      local_58 = *(undefined8 *)(param_2 + 0x18);
      local_50 = param_2[0x20];
    }
  }
  local_48[0] = 0;
  if (*(int *)(param_2 + 0x28) != 0) {
    uVar4 = FUN_1448174c4(local_48);
    FUN_1400e08b0(uVar4,DAT_14c9a3da0 + (longlong)*(int *)(param_2 + 0x28) * 0x10 + -0x10);
  }
  local_40 = *(undefined8 *)param_3;
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar3 + 1U) {
    FUN_1457891aa(param_1 + 0x30,iVar3);
  }
  lVar6 = param_1 + 0x30;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x68);
  }
  lVar7 = (longlong)iVar3 * 0x38;
  *(undefined1 *)(lVar6 + lVar7) = 0;
  FUN_14031eb60(lVar6 + lVar7,local_70);
  *(undefined4 *)(lVar6 + 0x28 + lVar7) = local_48[0];
  local_48[0] = 0;
  *(undefined8 *)(lVar6 + 0x30 + lVar7) = local_40;
  if ((local_70[0] == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (*param_3 == '\x01') {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c40aa0 FUN_140c40aa0 body=561 status=ok
// SIG undefined FUN_140c40aa0(void)

undefined1 *
FUN_140c40aa0(longlong *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  longlong local_60;
  longlong local_58;
  char local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar2 = (**(code **)(*param_1 + 0x20))();
  if (cVar2 != '\0') {
    FUN_1400e1dbc(param_1,&local_60);
    if (local_48 != '\0') {
      uVar4 = CONCAT71((int7)((ulonglong)param_4 >> 8),param_5);
      (**(code **)(*param_1 + 0x98))(param_1,&local_60);
      lVar1 = local_60;
      if (local_60 != 0) {
        puVar5 = *(undefined **)(local_60 + 8);
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c952a58) {
          FUN_144b3d300(&DAT_14c952a58);
          if (DAT_14c952a58 == -1) {
            local_78 = FUN_1446ddbd2();
            local_70 = FUN_1403a682c;
            local_80 = 0;
            local_88 = 0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
        }
        if (DAT_14c952a10 == 0) {
          bVar6 = puVar5 != (undefined *)0x0;
          if (puVar5 != &DAT_14c952a08 && bVar6) {
            do {
              puVar5 = *(undefined **)(puVar5 + 0x30);
              bVar6 = puVar5 != (undefined *)0x0;
              if (puVar5 == &DAT_14c952a08) break;
            } while (puVar5 != (undefined *)0x0);
          }
          if (bVar6) goto LAB_140c40b68;
        }
        else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c952a10) != 0) {
LAB_140c40b68:
          if (local_58 != 0) {
            lVar3 = FUN_140168d6e();
            if (*(longlong *)(lVar1 + 0x70) == lVar3) {
              local_88 = param_7;
              FUN_1402a444c(param_2,local_58,uVar4 & 0xffffffff,param_6);
              goto LAB_140c40b9f;
            }
            lVar3 = FUN_140168da8();
            if (*(longlong *)(lVar1 + 0x70) == lVar3) {
              local_88 = param_7;
              FUN_140c416bc(local_58,param_2,uVar4 & 0xffffffff,param_6);
              goto LAB_140c40b9f;
            }
          }
        }
      }
      local_88 = CONCAT44(local_88._4_4_,param_6);
      FUN_145788c93(param_2,local_60,local_58,uVar4 & 0xffffffff);
      goto LAB_140c40b9f;
    }
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 4) = 0xffffffff;
LAB_140c40b9f:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c40cd2 FUN_140c40cd2 body=234 status=ok
// SIG undefined FUN_140c40cd2(void)

void FUN_140c40cd2(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined *puVar8;
  
  if ((((*(byte *)(*param_2 + 0x38) & 0x20) != 0) &&
      (lVar3 = FUN_140c40dbc(param_1 + 0x10), lVar3 != 0)) &&
     ((*(byte *)(lVar3 + 0x38) & 0x20) != 0)) {
    uVar4 = (**(code **)(*(longlong *)param_2[2] + 0x280))();
    if (uVar4 < 0xffffffff00000000) {
      plVar7 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar7 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140c40db9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar7 + 0x58))(plVar7,param_2[2],uVar4);
      return;
    }
    uVar2 = (uint)uVar4;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c998088)) {
      puVar8 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar8 = DAT_14c998080;
      }
      if ((*(uint *)(puVar8 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar2 & 0x1f) & 1) != 0) {
        lVar5 = (ulonglong)(uVar2 & 0x7fffffff) * 0x68 + DAT_14c998060;
        lVar6 = *(longlong *)(lVar5 + 0x18);
        if (*(longlong *)(lVar5 + 0x18) == 0) {
          lVar6 = lVar5 + 8;
        }
        puVar1 = (uint *)(lVar6 + (ulonglong)(*(ushort *)(lVar3 + 0x40) >> 5) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)*(ushort *)(lVar3 + 0x40) & 0x1f);
        *(byte *)(lVar5 + 0x60) = *(byte *)(lVar5 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 140c40dbc FUN_140c40dbc body=885 status=ok
// SIG undefined FUN_140c40dbc(void)

longlong FUN_140c40dbc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x140));
  if (*(int *)(param_1 + 0x118) != 0) {
    uVar9 = 0;
    do {
      lVar2 = param_1 + uVar9 * 0x38;
      if (((((*(int *)(lVar2 + 0x14) == 0) || (uVar3 = *(uint *)(lVar2 + 0x10), (int)uVar3 < 0)) ||
           (DAT_14c9647dc <= (int)uVar3)) ||
          ((plVar7 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(lVar2 + 0x14))))) ||
         (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
          (plVar1 = (longlong *)(lVar2 + 0x18), *plVar7 == 0)))) {
        *(undefined8 *)(lVar2 + 0x18) = 0;
      }
      else {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          uVar6 = FUN_140342cba();
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar6,FUN_1468c7f1e);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        lVar5 = *plVar1;
        if ((((lVar5 == 0) || (*(int *)(lVar2 + 0x24) == 0)) ||
            (uVar3 = *(uint *)(lVar2 + 0x20), (int)uVar3 < 0)) ||
           (((DAT_14c9647dc <= (int)uVar3 ||
             (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 == 0)) ||
            ((*(int *)(lVar8 + 0x10) != *(int *)(lVar2 + 0x24) ||
             ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))))) {
          if (*(int *)(lVar2 + 0x30) == 0) {
LAB_140c40f79:
            if (lVar5 != 0) goto LAB_140c40eee;
          }
          else {
            lVar5 = FUN_14007daa4(plVar1,0,0);
            if (lVar5 != 0) {
              puVar4 = *(undefined **)(lVar5 + 8);
              if (DAT_14c951a40 == 0) {
                bVar10 = puVar4 != (undefined *)0x0;
                if (puVar4 != &DAT_14c951a38 && bVar10) {
                  do {
                    puVar4 = *(undefined **)(puVar4 + 0x30);
                    bVar10 = puVar4 != (undefined *)0x0;
                    if (puVar4 == &DAT_14c951a38) break;
                  } while (puVar4 != (undefined *)0x0);
                }
                if (bVar10) goto LAB_140c40f9d;
              }
              else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951a40) != 0) {
LAB_140c40f9d:
                *plVar1 = lVar5;
                goto LAB_140c40f79;
              }
            }
            if (*plVar1 != 0) {
              *plVar1 = 0;
              *(undefined8 *)(lVar2 + 0x20) = 0;
            }
          }
        }
        else {
LAB_140c40eee:
          puVar4 = *(undefined **)(lVar5 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
            uVar6 = FUN_1446ddbd2();
            FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0,0x4008001,0,uVar6,
                          FUN_1468d96f0);
            atexit(FUN_14281144d);
            _Init_thread_footer(&DAT_14c951cc8);
          }
          if (DAT_14c951c80 == 0) {
            bVar10 = puVar4 != (undefined *)0x0;
            if (puVar4 != &DAT_14c951c78 && bVar10) {
              do {
                puVar4 = *(undefined **)(puVar4 + 0x30);
                bVar10 = puVar4 != (undefined *)0x0;
                if (puVar4 == &DAT_14c951c78) break;
              } while (puVar4 != (undefined *)0x0);
            }
            if (!bVar10) goto LAB_140c410d7;
          }
          else if ((*(ulonglong *)(puVar4 + 0x18) & DAT_14c951c80) == 0) goto LAB_140c410d7;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 0x118));
  }
  lVar5 = 0;
LAB_140c410d7:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x140));
  return lVar5;
}



// FUNCTION 140c41132 FUN_140c41132 body=822 status=ok
// SIG undefined FUN_140c41132(void)

char * FUN_140c41132(char *param_1,char *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
    }
    *param_1 = '\0';
  }
  cVar2 = *param_2;
  *param_1 = cVar2;
  pcVar5 = param_2;
  if (cVar2 == '\x01') {
LAB_140c4115e:
    lVar8 = *(longlong *)(pcVar5 + 8);
    *param_1 = '\x02';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    if (lVar8 == 0) {
      iVar6 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar8 + 0xc);
      *(uint *)(param_1 + 8) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      iVar6 = *(int *)(lVar8 + 0x10);
      if (*(int *)(lVar8 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar9 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar9) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar6 = *(int *)(lVar8 + 0x10);
        bVar9 = iVar6 == 0;
        if (bVar9) {
          *(int *)(lVar8 + 0x10) = iVar7;
          iVar6 = 0;
        }
        UNLOCK();
        if (bVar9) {
          iVar6 = iVar7;
        }
      }
    }
    *(int *)(param_1 + 0xc) = iVar6;
  }
  else if (cVar2 == '\x02') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  }
  else if (cVar2 == '\x03') {
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    lVar8 = *(longlong *)(param_2 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar8;
    if (lVar8 == 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
    }
    else {
      LOCK();
      *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
      UNLOCK();
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      param_1[0x20] = param_2[0x20];
      pcVar5 = param_1;
      if (*param_1 == '\x01') goto LAB_140c4115e;
    }
  }
  FUN_14495544a(param_1 + 0x28,param_2 + 0x28);
  cVar2 = param_1[0x30];
  if (cVar2 != '\0') {
    if (cVar2 == '\x03') {
      plVar4 = *(longlong **)(param_1 + 0x40);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar4 + 0x10))();
        }
      }
    }
    else if (cVar2 == '\x01') {
      param_1[0x38] = '\0';
      param_1[0x39] = '\0';
      param_1[0x3a] = '\0';
      param_1[0x3b] = '\0';
      param_1[0x3c] = '\0';
      param_1[0x3d] = '\0';
      param_1[0x3e] = '\0';
      param_1[0x3f] = '\0';
    }
    param_1[0x30] = '\0';
  }
  cVar2 = param_2[0x30];
  param_1[0x30] = cVar2;
  pcVar5 = param_2;
  if (cVar2 != '\x01') {
    if (cVar2 == '\x02') {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      goto LAB_140c4122e;
    }
    if (cVar2 != '\x03') goto LAB_140c4122e;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    lVar8 = *(longlong *)(param_2 + 0x40);
    *(longlong *)(param_1 + 0x40) = lVar8;
    if (lVar8 == 0) {
      *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
      param_1[0x50] = param_2[0x50];
      goto LAB_140c4122e;
    }
    LOCK();
    *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
    UNLOCK();
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    param_1[0x50] = param_2[0x50];
    pcVar5 = param_1;
    if (param_1[0x30] != '\x01') goto LAB_140c4122e;
  }
  lVar8 = *(longlong *)(pcVar5 + 0x38);
  param_1[0x30] = '\x02';
  param_1[0x38] = '\0';
  param_1[0x39] = '\0';
  param_1[0x3a] = '\0';
  param_1[0x3b] = '\0';
  param_1[0x3c] = '\0';
  param_1[0x3d] = '\0';
  param_1[0x3e] = '\0';
  param_1[0x3f] = '\0';
  if (lVar8 == 0) {
    iVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar8 + 0xc);
    *(uint *)(param_1 + 0x38) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar6 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0x3c) = iVar6;
LAB_140c4122e:
  FUN_14495544a(param_1 + 0x58,param_2 + 0x58);
  return param_1;
}



// FUNCTION 140c41468 FUN_140c41468 body=269 status=ok
// SIG undefined FUN_140c41468(void)

void FUN_140c41468(longlong param_1,int param_2)

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



// FUNCTION 140c41576 FUN_140c41576 body=326 status=ok
// SIG undefined FUN_140c41576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c41576(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar4 = DAT_14c9a65c8;
  if (DAT_14c9a65c8 == (undefined8 *)0x0) {
    puVar4 = (undefined8 *)FUN_140595974(0x1e000,0);
    lVar7 = 0x3ff;
    puVar6 = puVar4;
    do {
      puVar5 = puVar6 + 0xf;
      *puVar6 = puVar5;
      lVar7 = lVar7 + -1;
      puVar6 = puVar5;
    } while (lVar7 != 0);
    *puVar5 = DAT_14c9a65c8;
    _DAT_14c9a65d0 = _DAT_14c9a65d0 + 0x400;
  }
  DAT_14c9a65c8 = (undefined8 *)*puVar4;
  _DAT_14c9a65d4 = _DAT_14c9a65d4 + 1;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = param_2;
  *(undefined4 *)(puVar4 + 4) = 0;
  *(undefined1 *)((longlong)puVar4 + 0x24) = 0;
  *(undefined4 *)(puVar4 + 5) = 0;
  puVar4[0xd] = 0;
  puVar4[0xe] = 0x100000000;
  *puVar4 = &PTR_FUN_14a1c7660;
  *param_1 = puVar4;
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a1c83c0;
  plVar3[2] = (longlong)puVar4;
  param_1[1] = plVar3;
  if (puVar4 != (undefined8 *)0x0) {
    if (plVar3 == (longlong *)0x0) {
      puVar4[1] = puVar4;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      puVar4[1] = puVar4;
      if ((longlong *)puVar4[2] != plVar3) {
        LOCK();
        *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
        UNLOCK();
        plVar2 = (longlong *)puVar4[2];
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        puVar4[2] = plVar3;
      }
      LOCK();
      plVar2 = plVar3 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  return param_1;
}



// FUNCTION 140c416bc FUN_140c416bc body=38 status=ok
// SIG undefined FUN_140c416bc(void)

undefined8
FUN_140c416bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_140c416e2(param_2,param_1,param_3,param_4,param_5);
  return param_2;
}



// FUNCTION 140c416e2 FUN_140c416e2 body=112 status=ok
// SIG undefined FUN_140c416e2(void)

undefined8 FUN_140c416e2(undefined8 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 0) {
    FUN_1402a453c(param_2);
    iVar1 = *param_2;
  }
  FUN_1402a44ba(DAT_14c9a3d60 + (longlong)iVar1 * 0x88 + -0x88,param_1,param_3,param_4);
  FUN_140841e14(param_2,1);
  return param_1;
}



// FUNCTION 140c41752 FUN_140c41752 body=264 status=ok
// SIG undefined FUN_140c41752(void)

void FUN_140c41752(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar3 = *(int *)(param_1 + 0xc08);
  lVar9 = *(longlong *)(param_1 + 0xc00);
  if (*(longlong *)(param_1 + 0xc00) == 0) {
    lVar9 = param_1;
  }
  if (iVar3 != 0) {
    iVar7 = (iVar3 - (iVar3 + -2 >> 0x1f)) + -2 >> 1;
    iVar8 = iVar7;
joined_r0x000140c4179a:
    do {
      iVar10 = iVar7 * 2 + 1;
      if (iVar10 < iVar3) {
        iVar11 = iVar7 * 2 + 2;
        if ((iVar11 < iVar3) &&
           (*(uint *)(lVar9 + (longlong)iVar11 * 0x18) <= *(uint *)(lVar9 + (longlong)iVar10 * 0x18)
           )) {
          iVar10 = iVar11;
        }
        if (*(uint *)(lVar9 + (longlong)iVar10 * 0x18) < *(uint *)(lVar9 + (longlong)iVar7 * 0x18))
        {
          puVar1 = (undefined8 *)(lVar9 + (longlong)iVar7 * 0x18);
          puVar2 = (undefined8 *)(lVar9 + (longlong)iVar10 * 0x18);
          local_18 = puVar1[2];
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          puVar1[2] = puVar2[2];
          uVar6 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar6;
          puVar2[2] = local_18;
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)puVar2 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar2 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar2 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_20._4_4_;
          iVar7 = iVar10;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x000140c4179a;
        }
      }
      bVar12 = iVar8 != 0;
      iVar7 = iVar8 + -1;
      iVar8 = iVar7;
    } while (bVar12);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4185c FUN_140c4185c body=1282 status=ok
// SIG undefined FUN_140c4185c(void)

char * FUN_140c4185c(longlong *param_1,char *param_2,longlong param_3,undefined8 param_4,
                    undefined1 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *_Dst;
  undefined4 *puVar11;
  longlong lVar12;
  code ****_Src;
  code ****ppppcVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code ***local_a0;
  code *local_98;
  code *local_90;
  code ***local_88 [3];
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar5 = (**(code **)(*param_1 + 0x20))();
  if ((param_3 != 0) && (cVar5 != '\0')) {
    plVar6 = (longlong *)FUN_1447262c2(param_4);
    if (plVar6 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_a0 = (code ***)local_88;
        local_88[0] = (code ***)FUN_1449e2820;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_1427b09ee;
        local_a8 = &LAB_1470c76a3;
        local_b0 = FUN_1462ab034;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10004001;
        local_d0 = 8;
        local_d8 = CONCAT44(local_d8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x288))(plVar6,DAT_14c9a4e08);
      if (plVar6 != (longlong *)0x0) {
        if (DAT_14c9a4e08 == 0) {
          local_a0 = (code ***)local_88;
          local_88[0] = (code ***)FUN_1449e2820;
          local_90 = FUN_14081d0ea;
          local_98 = FUN_1427b09ee;
          local_a8 = &LAB_1470c76a3;
          local_b0 = FUN_1462ab034;
          local_b8 = L"Engine";
          local_c0 = 0;
          local_c8 = 0x10004001;
          local_d0 = 8;
          local_d8 = CONCAT44(local_d8._4_4_,0x28);
          FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
        }
        plVar7 = (longlong *)FUN_144718840(plVar6,DAT_14c9a4e08);
        if ((plVar6 != plVar7) && (plVar7 != (longlong *)0x0)) {
          if ((code ****)param_1[1] == (code ****)0x0) {
            puVar11 = &DAT_14c9485f0;
            if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
              puVar11 = *(undefined4 **)(param_3 + 8);
            }
            FUN_1447325ac(puVar11,local_88,1);
            uVar16 = 0xffffffff;
            ppppcVar13 = (code ****)local_88[0];
            if ((code ****)local_88[0] == (code ****)0x0) goto LAB_140c41b9d;
          }
          else {
            uVar16 = *(uint *)(param_1 + 2);
            ppppcVar13 = (code ****)param_1[1];
          }
          lVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
          FUN_140c41d6c(param_1,local_88);
          if ((local_68 & 0xfe) == 2) {
            lVar17 = lVar8 + 0x10;
            iVar2 = *(int *)(lVar8 + 0x918);
            lVar18 = (longlong)iVar2;
            lVar10 = *(longlong *)(lVar8 + 0x910);
            if (((int)uVar16 < 0) || (iVar2 <= (int)uVar16)) {
LAB_140c41a57:
              lVar12 = lVar10;
              if (lVar10 == 0) {
                lVar12 = lVar17;
              }
              if (iVar2 != 0) {
                lVar15 = 0;
                do {
                  if (*(code *****)(lVar12 + 0x28 + lVar15) == ppppcVar13) {
                    uVar16 = (int)(lVar15 >> 3) * 0x38e38e39;
                    if ((-1 < (int)uVar16) && ((int)uVar16 < iVar2)) {
                      uVar14 = (ulonglong)(uVar16 & 0x7fffffff);
                      goto LAB_140c419a0;
                    }
                    break;
                  }
                  lVar15 = lVar15 + 0x48;
                } while (lVar18 * 0x48 != lVar15);
              }
LAB_140c41a89:
              *(uint *)(lVar8 + 0x918) = iVar2 + 1U;
              if (*(uint *)(lVar8 + 0x91c) < iVar2 + 1U) {
                FUN_14576eef0(lVar17,iVar2);
                lVar10 = *(longlong *)(lVar8 + 0x910);
              }
              bVar4 = local_68;
              if (lVar10 == 0) {
                lVar10 = lVar17;
              }
              puVar1 = (undefined8 *)(lVar10 + lVar18 * 0x48);
              *(ushort *)(puVar1 + 3) = local_70;
              if (local_70 < 0x19) {
                _Dst = puVar1;
                _Src = local_88;
              }
              else {
                _Dst = (undefined8 *)FUN_14001cc68(local_70,0);
                *puVar1 = _Dst;
                _Src = (code ****)local_88[0];
              }
              pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar4 * 0x120));
              if (pcVar3 == (code *)0x0) {
                memcpy(_Dst,_Src,
                       (longlong)
                       *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar4 * 0x120)));
              }
              else {
                (*pcVar3)();
              }
              *(byte *)(puVar1 + 4) = local_68;
              puVar1[5] = ppppcVar13;
              *(undefined4 *)(puVar1 + 6) = 0;
              puVar1[7] = 0;
              puVar1[8] = 0;
              if (*(longlong *)(lVar8 + 0x910) != 0) {
                lVar17 = *(longlong *)(lVar8 + 0x910);
              }
              lVar12 = lVar17 + lVar18 * 0x48;
            }
            else {
              lVar12 = lVar10;
              if (lVar10 == 0) {
                lVar12 = lVar17;
              }
              uVar14 = (ulonglong)uVar16;
              if (*(code *****)(lVar12 + 0x28 + uVar14 * 0x48) != ppppcVar13) goto LAB_140c41a57;
LAB_140c419a0:
              lVar12 = lVar12 + uVar14 * 0x48;
              if (lVar12 == 0) goto LAB_140c41a89;
            }
            uVar9 = FUN_140c41dec(lVar12);
            local_d8 = param_7;
            FUN_1402a44ba(uVar9,param_2,param_5,param_6);
            if (*param_2 == '\x01') {
              FUN_140c41f80(lVar12,lVar8);
            }
          }
          else {
            *param_2 = '\0';
            param_2[4] = -1;
            param_2[5] = -1;
            param_2[6] = -1;
            param_2[7] = -1;
          }
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppcVar13 = local_88;
            if (0x18 < local_70) {
              ppppcVar13 = (code ****)local_88[0];
            }
            (*pcVar3)(ppppcVar13);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88[0]);
          }
          goto LAB_140c41a1e;
        }
      }
    }
  }
LAB_140c41b9d:
  *param_2 = '\0';
  param_2[4] = -1;
  param_2[5] = -1;
  param_2[6] = -1;
  param_2[7] = -1;
LAB_140c41a1e:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c41d6c FUN_140c41d6c body=128 status=ok
// SIG undefined FUN_140c41d6c(void)

undefined8 * FUN_140c41d6c(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  _Src = (undefined8 *)(param_1 + 0x20);
  bVar1 = *(byte *)(param_1 + 0x40);
  uVar2 = *(ushort *)(param_1 + 0x38);
  *(ushort *)(param_2 + 3) = uVar2;
  _Dst = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_2 = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  uVar4 = (ulonglong)((uint)bVar1 * 0x120);
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4);
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
  }
  else {
    (*pcVar3)(_Dst,_Src);
  }
  *(undefined1 *)(param_2 + 4) = *(undefined1 *)(param_1 + 0x40);
  return param_2;
}



// FUNCTION 140c41dec FUN_140c41dec body=404 status=ok
// SIG undefined FUN_140c41dec(void)

undefined8 FUN_140c41dec(undefined8 *param_1)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *_Src;
  longlong *plVar7;
  
  if (param_1[7] != 0) goto LAB_140c41dff;
  plVar5 = (longlong *)FUN_14001cc68(0xa8,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a1c8450;
  plVar5[0xe] = 0;
  plVar5[0xf] = 0x800000000;
  plVar7 = plVar5 + 0x10;
  bVar2 = *(byte *)(param_1 + 4);
  uVar3 = *(ushort *)(param_1 + 3);
  *(ushort *)(plVar5 + 0x13) = uVar3;
  _Src = param_1;
  if (0x18 < uVar3) {
    plVar6 = (longlong *)FUN_14001cc68(uVar3,0);
    *plVar7 = (longlong)plVar6;
    _Src = (undefined8 *)*param_1;
    plVar7 = plVar6;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
  if (pcVar4 == (code *)0x0) {
    memcpy(plVar7,_Src,
           (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
  }
  else {
    (*pcVar4)(plVar7);
  }
  *(undefined1 *)(plVar5 + 0x14) = *(undefined1 *)(param_1 + 4);
  if (plVar5 == (longlong *)0x0) {
    param_1[7] = 0x10;
    plVar7 = (longlong *)param_1[8];
    if (plVar7 == (longlong *)0x0) goto LAB_140c41dff;
    param_1[8] = 0;
LAB_140c41f2b:
    LOCK();
    plVar6 = plVar7 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_140c41dff;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    param_1[7] = plVar5 + 2;
    plVar7 = (longlong *)param_1[8];
    if (plVar5 == plVar7) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    else {
      param_1[8] = plVar5;
      if (plVar7 != (longlong *)0x0) goto LAB_140c41f2b;
    }
  }
  LOCK();
  plVar7 = plVar5 + 1;
  *(int *)plVar7 = (int)*plVar7 + -1;
  UNLOCK();
  if ((int)*plVar7 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_140c41dff:
  return param_1[7];
}



// FUNCTION 140c41f80 FUN_140c41f80 body=1050 status=ok
// SIG undefined FUN_140c41f80(void)

void FUN_140c41f80(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 ****ppppuVar6;
  undefined8 unaff_RBP;
  code *pcVar7;
  undefined4 uVar8;
  undefined1 auStack_e8 [32];
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  undefined8 ***local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined8 ***local_78;
  undefined4 local_70;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = *(ushort *)(param_1 + 3);
  if (local_88 < 0x19) {
    uVar4 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85b8 + uVar4);
    if ((pcVar7 == (code *)0x0) &&
       (pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4), pcVar7 == (code *)0x0)) {
      memcpy(local_a0,param_1,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar7)(local_a0,param_1);
    }
  }
  else {
    local_a0[0] = (undefined8 ***)*param_1;
    *param_1 = 0;
    *(undefined2 *)(param_1 + 3) = 0;
  }
  local_80 = *(byte *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  lVar1 = param_1[7];
  cVar2 = *(char *)(lVar1 + 0x90);
  if (cVar2 == '\x03') {
    uVar8 = *(undefined4 *)(lVar1 + 0x70);
  }
  else {
    FUN_1400b56fe(&local_78,(undefined4 *)(lVar1 + 0x70),3);
    uVar8 = 0;
    if (local_58 != 0) {
      uVar8 = local_78._0_4_;
    }
    pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar7 != (code *)0x0) {
      ppppuVar6 = &local_78;
      if (0x18 < local_60) {
        ppppuVar6 = (undefined8 ****)local_78;
      }
      (*pcVar7)(ppppuVar6);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(local_78);
    }
  }
  uVar8 = FUN_14020a770(lVar1,uVar8,0);
  local_60 = 4;
  local_78 = (undefined8 ***)CONCAT44(local_78._4_4_,uVar8);
  local_58 = 3;
  FUN_1400b56fe(local_c8,&local_78,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),cVar2) & 0xffffffff);
  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar7 != (code *)0x0) {
    ppppuVar6 = &local_78;
    if (0x18 < local_60) {
      ppppuVar6 = (undefined8 ****)local_78;
    }
    (*pcVar7)(ppppuVar6);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78);
  }
  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  if (pcVar7 != (code *)0x0) {
    plVar5 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      plVar5 = (longlong *)*param_1;
    }
    (*pcVar7)(plVar5);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
  }
  *(ushort *)(param_1 + 3) = local_b0;
  if (local_b0 < 0x19) {
    uVar4 = (ulonglong)((uint)local_a8 * 0x120);
    pcVar7 = *(code **)((longlong)&DAT_14c9a85b8 + uVar4);
    if ((pcVar7 == (code *)0x0) &&
       (pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + uVar4), pcVar7 == (code *)0x0)) {
      memcpy(param_1,local_c8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar7)(param_1,local_c8);
    }
  }
  else {
    *param_1 = (longlong)local_c8[0];
    local_c8[0] = (undefined8 ****)0x0;
    local_b0 = 0;
  }
  *(byte *)(param_1 + 4) = local_a8;
  local_a8 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar6 = local_c8;
    if (0x18 < local_b0) {
      ppppuVar6 = (undefined8 ****)local_c8[0];
    }
    (*DAT_14c9a85d0)(ppppuVar6);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8[0]);
  }
  if (local_80 == *(byte *)(param_1 + 4)) {
    plVar5 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      plVar5 = (longlong *)*param_1;
    }
    ppppuVar6 = (undefined8 ****)local_a0[0];
    if (local_88 < 0x19) {
      ppppuVar6 = local_a0;
    }
    if (*(code **)(&DAT_14c9a85e0 + (uint)local_80 * 0x120) == (code *)0x0) {
      iVar3 = memcmp(ppppuVar6,plVar5,
                     (longlong)
                     *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)local_80 * 0x120)));
      if (iVar3 == 0) goto LAB_140c421a9;
    }
    else {
      cVar2 = (**(code **)(&DAT_14c9a85e0 + (uint)local_80 * 0x120))();
      if (cVar2 != '\0') goto LAB_140c421a9;
    }
  }
  local_78 = (undefined8 ***)param_1[5];
  local_70 = 0xffffffff;
  FUN_140af0ad8(param_2,&local_78,param_1,param_1);
LAB_140c421a9:
  pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar7 != (code *)0x0) {
    ppppuVar6 = (undefined8 ****)local_a0[0];
    if (local_88 < 0x19) {
      ppppuVar6 = local_a0;
    }
    (*pcVar7)(ppppuVar6);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(local_a0[0]);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4239c FUN_140c4239c body=660 status=ok
// SIG undefined FUN_140c4239c(void)

void FUN_140c4239c(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [42];
  byte local_7e;
  byte local_7d;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1448c4a0e();
  lVar7 = *(longlong *)(param_1 + 0xb0);
  if (lVar7 == 0) {
    lVar7 = FUN_1448abda6(param_1);
  }
  FUN_140c426b4(&local_58,lVar7);
  if (local_50 != (longlong *)0x0) {
    iVar6 = (int)local_50[1];
    do {
      if (iVar6 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)local_50[1];
      bVar16 = iVar6 == iVar9;
      if (bVar16) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar9 = iVar6;
      }
      iVar6 = iVar9;
      UNLOCK();
      plVar14 = local_50;
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar14 != (longlong *)0x0) {
      lVar7 = CONCAT44(iStack_54,local_58);
      if (lVar7 != 0) {
        iStack_54 = 0;
        if (param_1 == 0) {
          local_58 = 0;
          iVar6 = 0;
        }
        else {
          local_58 = *(uint *)(param_1 + 0xc);
          if ((int)local_58 < DAT_14c9647dc) {
            lVar10 = (ulonglong)((local_58 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
          }
          else {
            lVar10 = 0;
          }
          iVar6 = *(int *)(lVar10 + 0x10);
          if (*(int *)(lVar10 + 0x10) == 0) {
            LOCK();
            iVar6 = DAT_14c964868 + 1;
            UNLOCK();
            iVar9 = DAT_14c964868 + 1;
            bVar16 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar6;
            if (bVar16) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar9);
            }
            LOCK();
            iVar6 = *(int *)(lVar10 + 0x10);
            bVar16 = iVar6 == 0;
            if (bVar16) {
              *(int *)(lVar10 + 0x10) = iVar9;
              iVar6 = 0;
            }
            UNLOCK();
            if (bVar16) {
              iVar6 = iVar9;
            }
          }
        }
        iVar9 = *(int *)(lVar7 + 0x38);
        lVar10 = (longlong)iVar9;
        local_70 = lVar7;
        iStack_54 = iVar6;
        if (lVar10 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          local_68 = plVar14;
          bVar4 = FUN_140c4264c(lVar7,&local_58);
          local_60 = lVar7 + 8;
          iVar6 = 0;
          iVar11 = 0;
          local_78 = lVar7;
          do {
            local_7d = bVar4;
            local_7e = local_7d ^ 1;
            lVar7 = (longlong)iVar11;
            iVar3 = iVar11 + 1;
            if (iVar11 + 1 < iVar9) {
              iVar3 = iVar9;
            }
            lVar15 = local_60 + lVar7 * 8;
            bVar4 = local_7d & 1;
            iVar12 = iVar11;
            lVar8 = lVar7;
            local_7c = iVar6;
            do {
              lVar8 = lVar8 + 1;
              iVar13 = iVar3;
              if (lVar10 <= lVar8) break;
              bVar5 = FUN_140c4264c(lVar15,&local_58);
              iVar12 = iVar12 + 1;
              lVar15 = lVar15 + 8;
              iVar13 = iVar12;
            } while (bVar4 == bVar5);
            iVar6 = local_7c;
            bVar4 = local_7e;
            if ((local_7d & 1) == 0) {
              if (local_7c != iVar11) {
                memmove((void *)(local_78 + (longlong)local_7c * 8),(void *)(local_78 + lVar7 * 8),
                        (longlong)(iVar13 - iVar11) << 3);
              }
              iVar6 = iVar6 + (iVar13 - iVar11);
            }
            iVar11 = iVar13;
          } while (lVar8 < lVar10);
          *(int *)(local_70 + 0x38) = iVar6;
          plVar14 = local_68;
        }
        FUN_14062a576(local_70);
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4264c FUN_140c4264c body=104 status=ok
// SIG undefined FUN_140c4264c(void)

ulonglong FUN_140c4264c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140c426b4 FUN_140c426b4 body=310 status=ok
// SIG undefined FUN_140c426b4(void)

longlong * FUN_140c426b4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cb76230;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar1 + 0x10))(plVar1);
          }
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)local_30 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_30 + 0x10))(local_30);
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c427ec FUN_140c427ec body=446 status=ok
// SIG undefined FUN_140c427ec(void)

ulonglong FUN_140c427ec(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  byte bVar7;
  undefined7 uVar9;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined1 local_89;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uVar8;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_89 = param_4;
  lVar4 = FUN_140277b32(0,param_1,param_2,0);
  *param_3 = lVar4;
  uVar9 = (undefined7)((ulonglong)param_3 >> 8);
  if (lVar4 != 0) {
    uVar8 = CONCAT71(uVar9,1);
    goto LAB_140c4290f;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_140056680(&local_68,param_2);
  FUN_140056680(local_78,param_2);
  FUN_140056680(local_88,&DAT_149e0635c);
  local_a0 = 0;
  local_a8 = 1;
  lVar4 = FUN_1407cdbc6(local_78,local_88,&local_68,&local_58);
  cVar1 = (char)lVar4;
  if (local_88[0] != 0) {
    lVar4 = FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    lVar4 = FUN_1400020a8();
  }
  if (cVar1 == '\0') {
LAB_140c428c3:
    if ((*(byte *)(param_1 + 0x243) & 1) == 0) {
LAB_140c4293f:
      bVar2 = (byte)lVar4;
      bVar7 = 0;
      uVar9 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x2b0);
      if (*(longlong *)(lVar4 + 0x3f0) == 0) goto LAB_140c4293f;
      bVar2 = FUN_140c429ac(*(longlong *)(lVar4 + 0x3f0),param_2,param_3,local_89);
      bVar7 = 1;
    }
    uVar8 = CONCAT71(uVar9,bVar7 & bVar2);
  }
  else {
    puVar6 = local_68;
    if (local_60 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    plVar5 = (longlong *)FUN_140277b32(0,param_1,puVar6,0);
    lVar4 = 0;
    if (plVar5 == (longlong *)0x0) goto LAB_140c428c3;
    puVar6 = local_58;
    if ((int)uStack_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    uVar3 = (**(code **)(*plVar5 + 0x98))(plVar5,puVar6,param_3,local_89);
    uVar8 = (ulonglong)uVar3;
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c4290f:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 140c429ac FUN_140c429ac body=132 status=ok
// SIG undefined FUN_140c429ac(void)

undefined8 FUN_140c429ac(longlong param_1,undefined8 param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (lVar3 == 0) {
    lVar3 = FUN_14475ec7e(param_1);
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(param_1 + 0x40);
    if (lVar3 == 0) {
      lVar3 = FUN_14475ec7e(param_1);
    }
  }
  bVar1 = *(byte *)(lVar3 + 0x152);
  if (((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
     (plVar2 = *(longlong **)(param_1 + 0xe0), plVar2 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*plVar2 + 0x300))(plVar2,param_2);
    *param_3 = lVar3;
    if (lVar3 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140c42a30 FUN_140c42a30 body=1600 status=ok
// SIG undefined FUN_140c42a30(void)

void FUN_140c42a30(void *param_1)

{
  void *pvVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined2 *puVar7;
  wchar_t *pwVar8;
  void **ppvVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_254;
  longlong *local_250;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined2 *local_238;
  undefined8 uStack_230;
  void **local_228;
  ulonglong uStack_220;
  void *local_218;
  ulonglong uStack_210;
  undefined4 local_208;
  char local_204;
  undefined1 local_200 [192];
  undefined1 *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_288;
  memset(param_1,0,0x11c);
  if (*(longlong *)((longlong)param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  *(longlong *)((longlong)param_1 + 0x130) = 0;
  *(undefined8 *)((longlong)param_1 + 0x138) = 0;
  local_140 = (undefined1 *)0x0;
  local_138 = 0x800000000;
  local_228 = (void **)0x0;
  uStack_220 = 0;
  local_250 = (longlong *)((longlong)param_1 + 0x130);
  FUN_1403de9f2((longlong)param_1 + 0x120,&local_228,&DAT_149e0635c,0);
  local_70 = (longlong *)0x0;
  local_68 = 0x800000000;
  local_254 = FUN_140c430b0(&local_130,uStack_220 & 0xffffffff);
  if ((longlong)(int)uStack_220 != 0) {
    lVar12 = (longlong)(int)uStack_220 << 4;
    ppvVar9 = local_228;
    do {
      local_204 = '\0';
      local_218 = (void *)0x0;
      uStack_210 = 0;
      local_238 = (undefined2 *)0x0;
      uStack_230 = 0;
      if (ppvVar9 != &local_218) {
        uVar4 = *(uint *)(ppvVar9 + 1);
        pvVar1 = *ppvVar9;
        uStack_210 = (ulonglong)uVar4;
        if ((longlong)(int)uVar4 == 0) {
          uStack_210 = (ulonglong)uVar4;
        }
        else {
          FUN_1446dd670(&local_218,uVar4,0);
          memcpy(local_218,pvVar1,(longlong)(int)uVar4 * 2);
        }
      }
      FUN_140056680(&local_248,&DAT_149e2b508);
      local_260 = 0;
      local_268 = 1;
      cVar3 = FUN_1407cdbc6(ppvVar9,&local_248,&local_218,&local_238);
      if (CONCAT44(uStack_244,local_248) != 0) {
        FUN_1400020a8();
      }
      if (cVar3 == '\0') {
LAB_140c42ba9:
        uVar11 = local_68;
        if ((int)uStack_210 < 2) {
          local_254 = 0;
          goto LAB_140c42ee4;
        }
        lVar13 = (longlong)(int)local_68;
        uVar4 = (int)local_68 + 1;
        local_68 = CONCAT44(local_68._4_4_,uVar4);
        if (local_68._4_4_ < uVar4) {
          FUN_1470b6f44(&local_130,uVar11 & 0xffffffff);
        }
        pvVar1 = local_218;
        plVar10 = local_70;
        if (local_70 == (longlong *)0x0) {
          plVar10 = &local_130;
        }
        plVar10 = plVar10 + lVar13 * 3;
        *plVar10 = 0;
        lVar13 = (longlong)(int)uStack_210;
        *(int *)(plVar10 + 1) = (int)uStack_210;
        if (lVar13 == 0) {
          *(undefined4 *)((longlong)plVar10 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(plVar10,uStack_210 & 0xffffffff,0);
          memcpy((void *)*plVar10,pvVar1,lVar13 * 2);
        }
        *(char *)((longlong)plVar10 + 0x14) = local_204;
        bVar2 = true;
        if (local_204 == '\x01') {
          *(undefined4 *)(plVar10 + 2) = local_208;
        }
      }
      else {
        local_248 = 0;
        uVar5 = FUN_140b127b8(&local_238,&DAT_149e2b50c,1,1);
        if ((char)uVar5 != '\0') {
          puVar7 = local_238;
          if ((int)uStack_230 == 0) {
            puVar7 = &DAT_149dfb77a;
          }
          uVar5 = FUN_1468429ca(&local_248,puVar7);
          if ((char)uVar5 != '\0') {
            local_208 = local_248;
            local_204 = '\x01';
            goto LAB_140c42ba9;
          }
        }
        local_254 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
LAB_140c42ee4:
        bVar2 = false;
      }
      if (local_238 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_204 == '\x01') {
        local_204 = '\0';
      }
      if (local_218 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar2) {
        bVar2 = true;
        goto LAB_140c42d17;
      }
      ppvVar9 = ppvVar9 + 2;
      lVar12 = lVar12 + -0x10;
    } while (lVar12 != 0);
  }
  FUN_140c430b0(local_200,local_68 & 0xffffffff);
  puVar6 = local_140;
  if (local_140 == (undefined1 *)0x0) {
    puVar6 = local_200;
  }
  FUN_140c43101(puVar6,local_138 & 0xffffffff);
  uVar11 = local_68;
  local_138 = CONCAT44(local_138._4_4_,(int)local_68);
  if ((int)local_68 == 0 && local_138._4_4_ == 0) {
    local_138 = CONCAT44(8,(int)local_68);
  }
  else {
    plVar10 = &local_130;
    if (local_70 != (longlong *)0x0) {
      plVar10 = local_70;
    }
    FUN_140c4313c(local_200,local_68 & 0xffffffff);
    puVar6 = local_140;
    if (local_140 == (undefined1 *)0x0) {
      puVar6 = local_200;
    }
    FUN_140c431b1(puVar6,plVar10,uVar11 & 0xffffffff);
  }
  bVar2 = false;
LAB_140c42d17:
  FUN_140c43072(&local_130);
  FUN_1447a1747(local_228,uStack_220 & 0xffffffff);
  if (local_228 != (void **)0x0) {
    FUN_1400020a8();
  }
  if (bVar2) {
    if ((char)local_254 == '\0') {
      pwVar8 = L"Invalid property name.";
    }
    else if ((char)local_254 == '\x01') {
      pwVar8 = L"Invalid array index.";
    }
    else {
      pwVar8 = L"Unknown parsing error.";
    }
    FUN_140056680(&local_130,pwVar8);
  }
  else {
    uVar11 = local_138 & 0xffffffff;
    if (uVar11 < 6) {
      puVar6 = local_140;
      if (local_140 == (undefined1 *)0x0) {
        puVar6 = local_200;
      }
      if (uVar11 != 0) {
        lVar12 = 0;
        do {
          uVar4 = *(uint *)((longlong)param_1 + 0x118);
          *(uint *)((longlong)param_1 + 0x118) = uVar4 + 1;
          puVar7 = &DAT_149dfb77a;
          if (*(int *)(puVar6 + lVar12 + 8) != 0) {
            puVar7 = *(undefined2 **)(puVar6 + lVar12);
          }
          plVar10 = (longlong *)((ulonglong)uVar4 * 0x38 + (longlong)param_1);
          FUN_1446f470e(&local_130,puVar7,1);
          *plVar10 = local_130;
          if (puVar6[lVar12 + 0x14] == '\x01') {
            if (0xff < *(uint *)(puVar6 + lVar12 + 0x10)) {
              memset(param_1,0,0x11c);
              if (*(longlong *)((longlong)param_1 + 0x130) != 0) {
                FUN_1400020a8();
              }
              plVar10 = local_250;
              *local_250 = 0;
              local_250[1] = 0;
              FUN_140002266(&local_130,L"Array index %d exceeds the max of %d.",
                            *(undefined4 *)(puVar6 + lVar12 + 0x10),0xff);
              if (plVar10 != &local_130) goto LAB_140c42e08;
              goto LAB_140c42ff0;
            }
            *(undefined1 *)(plVar10 + 1) = 1;
            *(undefined1 *)((longlong)plVar10 + 9) = puVar6[lVar12 + 0x10];
          }
          lVar12 = lVar12 + 0x18;
        } while (uVar11 * 0x18 != lVar12);
      }
      FUN_140002266(&local_130,L"Successfully parsed %d path element(s)",
                    *(undefined4 *)((longlong)param_1 + 0x118));
    }
    else {
      FUN_140002266(&local_130,L"%d path elements exceeds the max of %d.",uVar11,5);
    }
  }
  if (local_250 == &local_130) {
LAB_140c42ff0:
    if (local_130 != 0) {
      FUN_1400020a8();
    }
  }
  else {
LAB_140c42e08:
    if (*(longlong *)((longlong)param_1 + 0x130) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)((longlong)param_1 + 0x130) = local_130;
    local_130 = 0;
    *(undefined4 *)((longlong)param_1 + 0x138) = local_128;
    *(undefined4 *)((longlong)param_1 + 0x13c) = local_124;
  }
  FUN_140c43072(local_200);
  if ((local_60 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c43072 FUN_140c43072 body=61 status=ok
// SIG undefined FUN_140c43072(void)

void FUN_140c43072(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  FUN_140c43101(lVar1,*(undefined4 *)(param_1 + 200));
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140c430b0 FUN_140c430b0 body=81 status=ok
// SIG undefined FUN_140c430b0(void)

void FUN_140c430b0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (param_2 <= *(int *)(param_1 + 0xcc)) {
    lVar1 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar1 = param_1;
    }
    FUN_140c43101(lVar1,*(undefined4 *)(param_1 + 200));
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  FUN_1470b6de8(param_1);
  return;
}



// FUNCTION 140c43101 FUN_140c43101 body=58 status=ok
// SIG undefined FUN_140c43101(void)

void FUN_140c43101(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x14);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(longlong *)(pcVar1 + -0x14) != 0) {
        FUN_1400020a8();
      }
      pcVar1 = pcVar1 + 0x18;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c4313c FUN_140c4313c body=117 status=ok
// SIG undefined FUN_140c4313c(void)

void FUN_140c4313c(longlong param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 8;
    if (8 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x18,0);
      iVar2 = (int)(uVar1 / 0x18);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar2) {
        iVar3 = iVar2;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_1470b6eae(param_1,0,iVar3);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xcc) = param_3;
  return;
}



// FUNCTION 140c431b1 FUN_140c431b1 body=134 status=ok
// SIG undefined FUN_140c431b1(void)

void FUN_140c431b1(undefined8 *param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *_Src;
  char *pcVar3;
  
  if (param_3 != 0) {
    pcVar3 = (char *)(param_2 + 0x14);
    do {
      *param_1 = 0;
      iVar2 = *(int *)(pcVar3 + -0xc);
      _Src = *(void **)(pcVar3 + -0x14);
      *(int *)(param_1 + 1) = iVar2;
      if ((longlong)iVar2 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_1,iVar2,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
      }
      cVar1 = *pcVar3;
      *(char *)((longlong)param_1 + 0x14) = cVar1;
      if (cVar1 == '\x01') {
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(pcVar3 + -4);
      }
      param_1 = param_1 + 3;
      pcVar3 = pcVar3 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140c43238 FUN_140c43238 body=162 status=ok
// SIG undefined FUN_140c43238(void)

void FUN_140c43238(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140c432c5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140c432c5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140c432da FUN_140c432da body=93 status=ok
// SIG undefined FUN_140c432da(void)

undefined8 FUN_140c432da(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  local_20 = param_2;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c43338 FUN_140c43338 body=300 status=ok
// SIG undefined FUN_140c43338(void)

undefined8 FUN_140c43338(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140c4345d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140c4345d;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140c4345d:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140c43406;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140c43406;
    }
  }
  uVar6 = 0;
LAB_140c43406:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c43466 FUN_140c43466 body=1750 status=ok
// SIG undefined FUN_140c43466(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140c43466(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 ******ppppppuVar4;
  code *pcVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  undefined *puVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 *******pppppppuStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 *******local_70 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  longlong *******local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140191f3c(param_1,5);
  *(undefined4 *)(param_1 + 0x20) = 0;
  plVar9 = param_1;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    FUN_14481578e(param_1 + 0x1f,0);
  }
  for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[4]) {
    if ((*(uint *)(plVar9 + 1) & 0x30) != 0) goto LAB_140c43531;
  }
  lVar10 = param_1[4];
  if ((lVar10 != 0) &&
     (((bVar1 = *(byte *)(lVar10 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      ((longlong)*(int *)(lVar10 + 0x90) != 0)))) {
    lVar19 = 0;
    do {
      if (*(longlong **)(*(longlong *)(lVar10 + 0x88) + lVar19) == param_1) {
        if (*(short *)(lVar10 + 0x75a) != 0) {
          *(short *)(lVar10 + 0x75a) = *(short *)(lVar10 + 0x75a) + -1;
        }
        break;
      }
      lVar19 = lVar19 + 8;
    } while ((longlong)*(int *)(lVar10 + 0x90) * 8 != lVar19);
  }
LAB_140c43531:
  local_78 = *(undefined4 *)((longlong)param_1 + 0xf4);
  local_80 = *(undefined8 *)((longlong)param_1 + 0xec);
  if (param_3 == 0) {
    if (param_4 != 2) {
      FUN_1407f0622(&local_80,0xff,0,&local_80);
      goto LAB_140c436ca;
    }
    uVar13 = 1;
  }
  else {
    local_50 = (longlong *******)local_70;
    local_70[0] = (undefined8 *******)0x0;
    pppppppuStack_a0 = &local_50;
    local_a8 = FUN_143794c14;
    local_c8 = 0;
    FUN_144a56f9f(param_3,&local_a8,0,0);
    if (local_70[0] != (undefined8 *******)0x0) {
      ppppppuVar4 = local_70[0][6];
      plVar9 = param_1;
      if (ppppppuVar4 != (undefined8 ******)0x0) {
LAB_140c435a8:
        plVar16 = plVar9;
        plVar9 = plVar16;
        if ((longlong *)plVar16[4] != (longlong *)0x0) goto code_r0x000140c435b7;
        goto LAB_140c435c9;
      }
      goto LAB_140c436e2;
    }
    *(byte *)(param_3 + 0x2e) = *(byte *)(param_3 + 0x2e) & 0xfd;
    local_50 = (longlong *******)0x0;
    lVar10 = FUN_147dab1b4(param_3);
    if (lVar10 != 0) {
      lVar19 = *param_2;
      uVar18 = (uint)lVar19;
      iVar8 = (int)((ulonglong)lVar19 >> 0x20);
      uVar3 = (uint)((ulonglong)lVar19 >> 0x10);
      if (DAT_14cae8cc8 != DAT_14cae8cf4) {
        puVar15 = &DAT_14cae8cf8;
        if (DAT_14cae8d00 != (undefined *)0x0) {
          puVar15 = DAT_14cae8d00;
        }
        iVar17 = *(int *)(puVar15 +
                         (ulonglong)
                         (DAT_14cae8d08 - 1U &
                         iVar8 + (uVar18 << 0x10 | uVar18 & 0xffff) +
                         (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar18 & 0xffff) >> 4)) * 4);
        if (iVar17 != -1) {
          local_b0 = 0;
          do {
            plVar9 = (longlong *)(DAT_14cae8cc0 + (longlong)iVar17 * 0x18);
            if (*plVar9 == lVar19) {
              if (((uint *)(plVar9 + 1) == (uint *)0x0 || plVar9 == (longlong *)0x0) ||
                 (*(int *)((longlong)plVar9 + 0xc) == 0)) goto LAB_140c43748;
              uVar2 = *(uint *)(plVar9 + 1);
              local_b0 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                plVar16 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if (((plVar16 == (longlong *)0x0) ||
                    ((int)plVar16[2] != *(int *)((longlong)plVar9 + 0xc))) ||
                   ((*(uint *)(plVar16 + 1) & 0x10200000) != 0)) goto LAB_140c43748;
                local_b0 = *plVar16;
              }
              break;
            }
            iVar17 = (int)plVar9[2];
          } while (iVar17 != -1);
          goto LAB_140c4374a;
        }
      }
LAB_140c43748:
      local_b0 = 0;
LAB_140c4374a:
      FUN_1406a129a(&DAT_14cae8cc0,lVar19);
      (**(code **)(*param_1 + 0x2d0))(param_1,&local_a8);
      pcVar6 = local_a8;
      plVar9 = (longlong *)((longlong)param_1 + 0x54);
      pcVar5 = *(code **)((longlong)param_1 + 0x54);
      lVar11 = lVar10;
LAB_140c43781:
      lVar14 = lVar11;
      lVar11 = lVar14;
      if (*(longlong *)(lVar14 + 0x20) != 0) goto code_r0x000140c43790;
      goto LAB_140c437ab;
    }
LAB_140c436ca:
    uVar13 = 2;
  }
  FUN_140191f3c(param_1,uVar13);
  (**(code **)(*param_1 + 0x2c0))(param_1,0);
LAB_140c436e2:
  FUN_14070f0e8(&DAT_14cb108c8,*param_2);
  FUN_1406a129a(&DAT_14cae8cc0,*param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140c435b7:
  plVar9 = (longlong *)plVar16[4];
  if ((*(uint *)(plVar16 + 1) >> 0x1c & 1) == 0) goto LAB_140c435a8;
  plVar9 = (longlong *)FUN_142840154(plVar16);
LAB_140c435c9:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar16[4];
    goto LAB_140c435a8;
  }
  FUN_14355aa64(param_1,ppppppuVar4,param_3);
  goto LAB_140c436e2;
code_r0x000140c43790:
  lVar11 = *(longlong *)(lVar14 + 0x20);
  if ((*(uint *)(lVar14 + 8) >> 0x1c & 1) == 0) goto LAB_140c43781;
  local_b8 = plVar9;
  lVar11 = FUN_142840154(lVar14);
  plVar9 = local_b8;
LAB_140c437ab:
  if (lVar11 == 0) {
    lVar11 = *(longlong *)(lVar14 + 0x20);
    goto LAB_140c43781;
  }
  lVar11 = *(longlong *)(lVar11 + 0x18);
  *plVar9 = lVar11;
  if ((lVar11 != lVar19) && (DAT_14cb108d0 != DAT_14cb108fc)) {
    puVar15 = &DAT_14cb10900;
    if (DAT_14cb10908 != (undefined *)0x0) {
      puVar15 = DAT_14cb10908;
    }
    iVar8 = *(int *)(puVar15 +
                    (ulonglong)
                    (DAT_14cb10910 - 1U &
                    iVar8 + (uVar18 << 0x10 | uVar18 & 0xffff) + (uVar3 << 0x13 | uVar3 & 0xffff) +
                    ((uVar18 & 0xffff) >> 4)) * 4);
    while (iVar8 != -1) {
      plVar16 = (longlong *)(DAT_14cb108c8 + (longlong)iVar8 * 0x14);
      if (*plVar16 == lVar19) {
        if (plVar16 + 1 != (longlong *)0x0 && plVar16 != (longlong *)0x0) {
          lVar14 = plVar16[1];
          uVar3 = (uint)((ulonglong)lVar11 >> 0x10);
          uVar18 = (uint)lVar11 & 0xffff;
          puVar12 = (undefined4 *)
                    FUN_140b19d32(&DAT_14cb108c8,
                                  ((uint)lVar11 << 0x10 | uVar18) + (int)((ulonglong)lVar11 >> 0x20)
                                  + (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar18 >> 4),plVar9);
          *puVar12 = (int)lVar14;
          FUN_14070f0e8(&DAT_14cb108c8,lVar19);
        }
        break;
      }
      iVar8 = *(int *)((longlong)plVar16 + 0xc);
    }
  }
  lVar19 = local_b0;
  if (pcVar6 != pcVar5 && pcVar5 != (code *)0x0) {
    if ((*(longlong *)(param_3 + 0x48) != 0) &&
       (lVar19 = *(longlong *)(*(longlong *)(param_3 + 0x48) + 0x20), lVar19 != 0)) {
      FUN_1427fa082(lVar19);
      uVar13 = FUN_1402a3fee();
      FUN_1468bc878(uVar13,lVar19);
    }
    (*(code *)(*local_50)[0x2e])(local_50,0,DAT_14c951640,0x34);
    *(undefined1 *)(lVar10 + 0x152) = 7;
    goto LAB_140c436e2;
  }
  if (local_b0 != 0) {
    lVar11 = *(longlong *)(lVar10 + 0x30);
    if (lVar11 == 0) {
      lVar19 = 0;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(local_b0);
      }
      *(longlong *)(lVar11 + 0xc0) = lVar19;
      lVar19 = *(longlong *)(lVar10 + 0x30);
    }
    *(undefined1 *)(*(longlong *)(lVar19 + 200) + 0x210) = 1;
    FUN_147b8e5e0(*(undefined8 *)(lVar10 + 0x30));
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = (code *)0x0;
  pppppppuStack_a0 = (undefined8 *******)0x0;
  local_88 = 0;
  FUN_1400bbfc4(local_70,lVar10);
  pppppppuStack_a0 = local_70[0];
  if (uStack_90 != 0) {
    FUN_1400020a8();
  }
  uStack_90 = CONCAT44(uStack_5c,local_60);
  cVar7 = (*(code *)PTR_FUN_14c758760)();
  uVar3 = *(uint *)(lVar10 + 0xc);
  if (cVar7 == '\0') {
LAB_140c43a46:
    local_a8 = (code *)CONCAT44(local_a8._4_4_,uVar3);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar8 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar17 = DAT_14c964868 + 1;
      bVar20 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar20) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar17);
      }
      LOCK();
      iVar8 = *(int *)(lVar10 + 0x10);
      bVar20 = iVar8 == 0;
      if (bVar20) {
        *(int *)(lVar10 + 0x10) = iVar17;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar20) {
        iVar8 = iVar17;
      }
    }
  }
  else {
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    if ((*(uint *)(lVar10 + 8) & 0x8400000) == 0) goto LAB_140c43a46;
    local_a8 = (code *)0x0;
    iVar8 = 0;
  }
  local_a8 = (code *)CONCAT44(iVar8,(undefined4)local_a8);
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_a8);
  if (uStack_90 != 0) {
    FUN_1400020a8();
  }
  goto LAB_140c436e2;
}



// FUNCTION 140c43b3e FUN_140c43b3e body=560 status=ok
// SIG undefined FUN_140c43b3e(void)

double * FUN_140c43b3e(longlong *param_1,double *param_2)

{
  longlong lVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  int local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  (**(code **)(*param_1 + 0xa28))();
  if ((longlong)local_b8 == 0) {
    bVar3 = false;
    dVar7 = 0.0;
    dVar9 = 0.0;
    dVar13 = 0.0;
    dVar15 = 0.0;
    dVar17 = 0.0;
    dVar11 = 0.0;
  }
  else {
    lVar5 = 0;
    bVar3 = false;
    dVar6 = 0.0;
    dVar8 = 0.0;
    dVar10 = 0.0;
    dVar12 = 0.0;
    dVar14 = 0.0;
    dVar16 = 0.0;
    do {
      lVar1 = *(longlong *)(local_c0 + lVar5);
      dVar7 = dVar6;
      dVar9 = dVar8;
      dVar11 = dVar10;
      dVar13 = dVar12;
      dVar15 = dVar14;
      dVar17 = dVar16;
      bVar4 = bVar3;
      if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) {
        dVar2 = *(double *)(lVar1 + 0x170) + *(double *)(lVar1 + 0x188);
        dVar9 = *(double *)(lVar1 + 0x168) + *(double *)(lVar1 + 0x180);
        dVar13 = *(double *)(lVar1 + 0x160) + *(double *)(lVar1 + 0x178);
        dVar15 = *(double *)(lVar1 + 0x170) - *(double *)(lVar1 + 0x188);
        dVar17 = *(double *)(lVar1 + 0x168) - *(double *)(lVar1 + 0x180);
        dVar11 = *(double *)(lVar1 + 0x160) - *(double *)(lVar1 + 0x178);
        bVar4 = true;
        dVar7 = dVar2;
        if (bVar3) {
          if (dVar11 <= dVar10) {
            dVar10 = dVar11;
          }
          if (dVar17 <= dVar16) {
            dVar16 = dVar17;
          }
          if (dVar15 <= dVar14) {
            dVar14 = dVar15;
          }
          if (dVar12 <= dVar13) {
            dVar12 = dVar13;
          }
          if (dVar8 <= dVar9) {
            dVar8 = dVar9;
          }
          dVar7 = dVar6;
          dVar9 = dVar8;
          dVar11 = dVar10;
          dVar13 = dVar12;
          dVar15 = dVar14;
          dVar17 = dVar16;
          if (dVar6 <= dVar2) {
            dVar7 = dVar2;
          }
        }
      }
      bVar3 = bVar4;
      lVar5 = lVar5 + 8;
      dVar6 = dVar7;
      dVar8 = dVar9;
      dVar10 = dVar11;
      dVar12 = dVar13;
      dVar14 = dVar15;
      dVar16 = dVar17;
    } while ((longlong)local_b8 * 8 != lVar5);
  }
  *(bool *)(param_2 + 6) = bVar3;
  *param_2 = dVar11;
  param_2[1] = dVar17;
  param_2[2] = dVar15;
  param_2[3] = dVar13;
  param_2[4] = dVar9;
  param_2[5] = dVar7;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c43d70 FUN_140c43d70 body=149 status=ok
// SIG undefined FUN_140c43d70(void)

longlong * FUN_140c43d70(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 0x19b8);
  if (lVar1 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x19b0);
    if (plVar4 != (longlong *)0x0) {
      if (param_3 == '\0') {
        uVar3 = 0;
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(*plVar4 + 0x570))(plVar4);
        if (iVar2 == 0) {
          return param_2;
        }
        plVar4 = *(longlong **)(param_1 + 0x19b0);
        iVar2 = (int)param_2[1];
        uVar3 = *(uint *)((longlong)param_2 + 0xc);
      }
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (uVar3 < iVar2 + 1U) {
        FUN_140c43e06(param_2,iVar2);
      }
      *(longlong **)(*param_2 + (longlong)iVar2 * 8) = plVar4;
    }
  }
  else {
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_140c43e06(param_2,0);
    *(longlong *)*param_2 = lVar1;
  }
  return param_2;
}



// FUNCTION 140c43e06 FUN_140c43e06 body=353 status=ok
// SIG undefined FUN_140c43e06(void)

void FUN_140c43e06(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c43e8b;
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
LAB_140c43e8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c43f68 FUN_140c43f68 body=93 status=ok
// SIG undefined FUN_140c43f68(void)

undefined8 * FUN_140c43f68(longlong param_1,undefined8 *param_2,char param_3)

{
  int iVar1;
  longlong *plVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  plVar2 = *(longlong **)(param_1 + 0x19b8);
  if (plVar2 != (longlong *)0x0) {
    if (param_3 != '\0') {
      iVar1 = (**(code **)(*plVar2 + 0x570))(plVar2);
      if (iVar1 == 0) {
        return param_2;
      }
      plVar2 = *(longlong **)(param_1 + 0x19b8);
    }
    *(undefined4 *)(param_2 + 1) = 1;
    FUN_140c43e06(param_2,0);
    *(longlong **)*param_2 = plVar2;
  }
  return param_2;
}



// FUNCTION 140c440c4 FUN_140c440c4 body=9 status=ok
// SIG undefined FUN_140c440c4(void)

void FUN_140c440c4(longlong param_1)

{
  FUN_140c440ce(param_1 + 0x10);
  return;
}



// FUNCTION 140c440ce FUN_140c440ce body=164 status=ok
// SIG undefined FUN_140c440ce(void)

void FUN_140c440ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b35b440;
  FUN_140c44172(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  param_1[4] = &PTR_FUN_14b00be10;
  FUN_14487da0a(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[2];
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
                    /* WARNING: Could not recover jumptable at 0x000140c44152. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c44172 FUN_140c44172 body=75 status=ok
// SIG undefined FUN_140c44172(void)

void FUN_140c44172(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c441c8 FUN_140c441c8 body=382 status=ok
// SIG undefined FUN_140c441c8(void)

undefined8 * FUN_140c441c8(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab815a0;
  param_1[5] = &PTR_FUN_14ab81fa0;
  param_1[6] = &PTR_LAB_14ab81fe0;
  param_1[0x55] = &PTR_FUN_14ab82030;
  param_1[0x56] = &PTR_FUN_14ab820b0;
  param_1[0x57] = &PTR_FUN_14ab820c0;
  param_1[0xc4] = &PTR_LAB_14ab74bb0;
  FUN_1403a3c5e(param_1 + 0xc5,param_1,param_1 + 0xc4);
  *param_1 = &PTR_FUN_14ab815a0;
  param_1[5] = &PTR_FUN_14ab81fa0;
  param_1[6] = &PTR_LAB_14ab81fe0;
  param_1[0x55] = &PTR_FUN_14ab82030;
  param_1[0x56] = &PTR_FUN_14ab820b0;
  param_1[0x57] = &PTR_FUN_14ab820c0;
  param_1[0xc4] = &PTR_FUN_14ab820f0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(byte *)((longlong)param_1 + 0x1fa) = *(byte *)((longlong)param_1 + 0x1fa) | 8;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xce) = 0;
  *(undefined4 *)((longlong)param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x67c) = 0x3ff00000;
  param_1[0xd0] = 0x4060000000000000;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0x3ff0000000000000;
  param_1[0xd5] = 0x3ff0000000000000;
  param_1[0xd6] = 0x3ff0000000000000;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0x4280000042800000;
  *(undefined1 *)(param_1 + 0xd9) = 3;
  return param_1;
}



// FUNCTION 140c44346 FUN_140c44346 body=49 status=ok
// SIG undefined FUN_140c44346(void)

longlong FUN_140c44346(void)

{
  if (DAT_14cc1b1b8 == 0) {
    FUN_140f50038(&DAT_14cc1b1b8,&PTR_s__Script_OptimusCore_14bce4b10);
  }
  return DAT_14cc1b1b8;
}



// FUNCTION 140c44378 FUN_140c44378 body=196 status=ok
// SIG undefined FUN_140c44378(void)

bool FUN_140c44378(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  iVar1 = *(int *)(param_2 + 1);
  uVar4 = 0;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  if (0 < iVar3) {
    if (iVar1 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*param_2;
    }
    lVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = ((uint)(0x19 < (ushort)puVar2[lVar6] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar6]) -
              0x20;
      uVar7 = (uint)(uVar4 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar4 ^ uVar5) & 0xff) * 4);
      uVar4 = (ulonglong)
              (uVar7 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4));
      lVar6 = lVar6 + 1;
    } while (iVar3 != (int)lVar6);
  }
  iVar1 = FUN_140c4443c(param_1,uVar4,param_2);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x78));
  return iVar1 != -1;
}



// FUNCTION 140c4443c FUN_140c4443c body=147 status=ok
// SIG undefined FUN_140c4443c(void)

int FUN_140c4443c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      iVar1 = *(int *)(param_3 + 1);
      do {
        lVar6 = (longlong)iVar5 * 0x40;
        iVar3 = *(int *)(lVar2 + 8 + lVar6);
        if (iVar3 == iVar1) {
          if (iVar1 < 2) {
            return iVar5;
          }
          iVar3 = wcscmp(*(wchar_t **)(lVar2 + lVar6),(wchar_t *)*param_3);
          if (iVar3 == 0) {
            return iVar5;
          }
        }
        else if (iVar3 + iVar1 == 1) {
          return iVar5;
        }
        iVar5 = *(int *)(lVar2 + 0x38 + lVar6);
      } while (iVar5 != -1);
    }
  }
  return -1;
}



// FUNCTION 140c444d0 FUN_140c444d0 body=32 status=ok
// SIG undefined FUN_140c444d0(void)

undefined8 * FUN_140c444d0(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aac9170;
  return param_1;
}



// FUNCTION 140c44548 FUN_140c44548 body=316 status=ok
// SIG undefined FUN_140c44548(void)

void FUN_140c44548(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  byte bVar8;
  ulonglong uVar9;
  
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  iVar2 = *(int *)(param_1 + 0x3a4);
  *(int *)(param_1 + 0x3a4) = iVar2 + 1;
  lVar7 = (longlong)*(int *)(param_1 + 0x398);
  if (lVar7 < 1) {
    *(int *)(param_1 + 0x3a4) = iVar2;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x390);
    uVar9 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar8 = 0;
    do {
      if (((*(int *)(*plVar1 + lVar7) == 0) ||
          (plVar3 = *(longlong **)(*plVar1 + -8 + lVar7), plVar3 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_1), cVar4 == '\0')) {
        bVar8 = 1;
      }
      uVar9 = uVar9 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar9);
    iVar2 = *(int *)(param_1 + 0x3a4);
    *(int *)(param_1 + 0x3a4) = iVar2 + -1;
    if ((bool)(bVar8 & iVar2 < 2)) {
      iVar2 = *(int *)(param_1 + 0x398);
      iVar5 = iVar2;
      if (0 < iVar2) {
        iVar6 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar6 * 0x10), plVar3 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar6);
            FUN_14005b248(plVar1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar5 = *(int *)(param_1 + 0x398);
        } while (iVar6 < iVar5);
      }
      iVar6 = 2;
      if (2 < iVar5 * 2) {
        iVar6 = iVar5 * 2;
      }
      *(int *)(param_1 + 0x3a0) = iVar6;
      if ((iVar6 < iVar2) && (*(int *)(param_1 + 0x39c) != iVar5)) {
        FUN_14045812c(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c44684 FUN_140c44684 body=14283 status=ok
// SIG undefined FUN_140c44684(void)

void FUN_140c44684(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  int iVar20;
  undefined8 ****ppppuVar21;
  undefined4 *puVar22;
  undefined *puVar23;
  int iVar24;
  undefined8 *puVar25;
  float *pfVar26;
  longlong lVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_1c8 [40];
  ulonglong local_1a0;
  ulonglong local_198;
  ulonglong local_190;
  undefined8 ***local_188;
  undefined1 *local_180;
  int local_174;
  undefined8 ***local_170;
  undefined1 *local_168;
  undefined8 ***local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined1 local_14c;
  undefined8 local_148;
  ushort local_140;
  undefined1 local_13c [4];
  byte local_138;
  char local_130;
  float local_128;
  float local_124;
  undefined1 local_120;
  undefined4 local_11f;
  undefined1 local_11b;
  longlong *local_118;
  undefined8 uStack_110;
  double local_108;
  uint local_100;
  undefined8 local_f8;
  undefined8 ***local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ushort local_d8;
  byte local_d0;
  char local_c8;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined8 local_b8;
  undefined4 local_b0;
  float local_a8;
  undefined4 uStack_a4;
  ushort local_90;
  byte local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
  }
  local_128 = (float)((uint)local_128 & 0xffffff00);
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar12);
  pfVar26 = &local_a8;
  FUN_1447c3578(param_1 + 0x1d0,pfVar26,&local_128);
  if (local_88 == 3) {
    fVar29 = local_a8;
    bVar7 = 3;
  }
  else {
    FUN_1400b56fe(&local_160,&local_a8,3);
    fVar29 = 0.0;
    if ((byte)local_140 != 0) {
      fVar29 = local_160._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_140 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar21 = &local_160;
      if (0x18 < (ushort)local_148) {
        ppppuVar21 = (undefined8 ****)local_160;
      }
      (*pcVar5)(ppppuVar21);
    }
    bVar7 = local_88;
    if (0x18 < (ushort)local_148) {
      FUN_1400020a8(local_160);
      bVar7 = local_88;
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_90) {
      pfVar26 = (float *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar5)(pfVar26);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  lVar13 = DAT_14c9a3da0;
  if ((longlong)(int)local_100 != 0) {
    lVar14 = (longlong)(int)local_100 + -1;
    lVar27 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar27),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar27));
    if (*(longlong *)(lVar13 + lVar27) != 0) {
      FUN_1400020a8();
    }
    lVar13 = DAT_14c9a3da0;
    iVar24 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar24;
    }
    *(undefined4 *)(lVar13 + lVar27) = 0xffffffff;
    iVar20 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar20 = DAT_14c9a3dd0;
    }
    *(int *)(lVar13 + 4 + lVar27) = iVar20;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar20 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar20 = iVar24;
    }
    bVar7 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar24;
    *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_100 = 0;
  }
  if ((local_128._0_1_ == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  local_128 = (float)((uint)local_128 & 0xffffff00);
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar12);
  pfVar26 = &local_a8;
  FUN_1447c3578(param_1 + 0x208,pfVar26,&local_128);
  if (local_88 == 3) {
    fVar30 = local_a8;
    bVar7 = 3;
  }
  else {
    FUN_1400b56fe(&local_160,&local_a8,3);
    fVar30 = 0.0;
    if ((byte)local_140 != 0) {
      fVar30 = local_160._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_140 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar21 = &local_160;
      if (0x18 < (ushort)local_148) {
        ppppuVar21 = (undefined8 ****)local_160;
      }
      (*pcVar5)(ppppuVar21);
    }
    bVar7 = local_88;
    if (0x18 < (ushort)local_148) {
      FUN_1400020a8(local_160);
      bVar7 = local_88;
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_90) {
      pfVar26 = (float *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar5)(pfVar26);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  lVar13 = DAT_14c9a3da0;
  if ((longlong)(int)local_100 != 0) {
    lVar14 = (longlong)(int)local_100 + -1;
    lVar27 = lVar14 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar27),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar27));
    if (*(longlong *)(lVar13 + lVar27) != 0) {
      FUN_1400020a8();
    }
    lVar13 = DAT_14c9a3da0;
    iVar24 = (int)lVar14;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar24;
    }
    *(undefined4 *)(lVar13 + lVar27) = 0xffffffff;
    iVar20 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar20 = DAT_14c9a3dd0;
    }
    *(int *)(lVar13 + 4 + lVar27) = iVar20;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar20 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar20 = iVar24;
    }
    bVar7 = (byte)lVar14 & 0x1f;
    DAT_14c9a3dd0 = iVar24;
    *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_100 = 0;
  }
  if ((local_128._0_1_ == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  local_128 = (float)((uint)local_128 & 0xffffff00);
  local_100 = 0;
  FUN_1456bb102(&local_128,uVar12);
  pfVar26 = &local_a8;
  FUN_1447c3578(param_1 + 0x240,pfVar26,&local_128);
  if (local_88 == 3) {
    local_88 = 3;
    fVar31 = local_a8;
  }
  else {
    FUN_1400b56fe(&local_160,&local_a8,3);
    fVar31 = 0.0;
    if ((byte)local_140 != 0) {
      fVar31 = local_160._0_4_;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_140 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar21 = &local_160;
      if (0x18 < (ushort)local_148) {
        ppppuVar21 = (undefined8 ****)local_160;
      }
      (*pcVar5)(ppppuVar21);
    }
    if (0x18 < (ushort)local_148) {
      FUN_1400020a8(local_160);
    }
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_88 * 0x120));
  if (pcVar5 != (code *)0x0) {
    if (0x18 < local_90) {
      pfVar26 = (float *)CONCAT44(uStack_a4,local_a8);
    }
    (*pcVar5)(pfVar26);
  }
  if (0x18 < local_90) {
    FUN_1400020a8(CONCAT44(uStack_a4,local_a8));
  }
  lVar13 = DAT_14c9a3da0;
  if ((longlong)(int)local_100 != 0) {
    lVar27 = (longlong)(int)local_100 + -1;
    lVar14 = lVar27 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar14),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar14));
    if (*(longlong *)(lVar13 + lVar14) != 0) {
      FUN_1400020a8();
    }
    lVar13 = DAT_14c9a3da0;
    iVar24 = (int)lVar27;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar24;
    }
    *(undefined4 *)(lVar13 + lVar14) = 0xffffffff;
    iVar20 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar20 = DAT_14c9a3dd0;
    }
    *(int *)(lVar13 + 4 + lVar14) = iVar20;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar23 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar23 = DAT_14c9a3dc0;
    }
    iVar20 = iVar24 + 0x1f;
    if (-1 < iVar24) {
      iVar20 = iVar24;
    }
    bVar7 = (byte)lVar27 & 0x1f;
    DAT_14c9a3dd0 = iVar24;
    *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) =
         *(uint *)(puVar23 + (longlong)(iVar20 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_100 = 0;
  }
  if ((local_128._0_1_ == '\x03') && (local_118 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_118 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_118 + 0x10))();
    }
  }
  uVar12 = DAT_14cb7e538;
  bVar7 = (&DAT_14c9a8514)[(uint)*(byte *)(param_1 + 0x1f8) * 0x120];
  bVar2 = (&DAT_14c9a8514)[(uint)*(byte *)(param_1 + 0x230) * 0x120];
  local_120 = 0;
  local_118 = (longlong *)DAT_14c8464e0;
  uStack_110 = DAT_14c8464e8;
  local_100 = local_100 & 0xff000000;
  local_f0 = DAT_14c8464f8;
  uStack_e8 = DAT_14c846500;
  local_e0 = DAT_14c846508;
  local_f8 = 0;
  local_d8 = 0x18;
  local_d0 = 5;
  local_c8 = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_108 = (double)fVar31;
  local_11b = 1;
  local_11f = 0x1010101;
  local_bf = 0;
  local_128 = fVar29;
  local_124 = fVar30;
  uVar10 = FUN_141115664();
  uVar11 = FUN_140c48046(param_1 + 0x80,uVar10,uVar12,0);
  if (uVar11 != 0) {
    *(undefined4 *)(uVar11 + 0xd0) = 0x3dcccccd;
    if (*(char *)(param_1 + 0x279) == '\x01') {
      local_160 = (undefined8 ****)0x0;
      uVar12 = FUN_140c48368();
      lVar13 = FUN_140c47e50(uVar11,uVar12,&local_160);
      if (lVar13 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar13 + 0x88);
        bVar3 = *(byte *)(lVar13 + 0xa8);
        local_190 = uVar11;
        if (bVar3 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
            FUN_1400020a8(*plVar16);
          }
          bVar3 = *(byte *)(param_1 + 0x1c0);
          uVar9 = (uint)bVar3;
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar13 + 0xa0) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_198 = (ulonglong)bVar3;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_198;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar13 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar13 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
        *(undefined1 *)(lVar13 + 0xb8) = 0;
        puVar28 = (undefined8 *)(param_1 + 0x288);
        puVar25 = (undefined8 *)(lVar13 + 200);
        bVar3 = *(byte *)(lVar13 + 0xe8);
        if (bVar3 == *(byte *)(param_1 + 0x2a8)) {
          if (0x18 < *(ushort *)(param_1 + 0x2a0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x288);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xe0)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar13 + 0xe0)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xe0)) {
            FUN_1400020a8(*puVar25);
          }
          bVar3 = *(byte *)(param_1 + 0x2a8);
          uVar4 = *(ushort *)(param_1 + 0x2a0);
          *(ushort *)(lVar13 + 0xe0) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar3 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar13 + 0xe8) = *(undefined1 *)(param_1 + 0x2a8);
        }
        *(undefined1 *)(lVar13 + 0xf0) = *(undefined1 *)(param_1 + 0x2b0);
        *(undefined4 *)(lVar13 + 0x78) = 0;
        *(undefined1 *)(lVar13 + 0x7c) = 0;
        *(undefined1 *)(lVar13 + 0x78) = 1;
        uVar11 = local_190;
      }
    }
    local_198 = CONCAT71(local_198._1_7_,bVar7 >> 5) & 0xffffffffffffff01;
    local_190 = CONCAT71(local_190._1_7_,bVar2 >> 5) & 0xffffffffffffff01;
    uVar12 = FUN_140a48832();
    lVar13 = FUN_140c483dc(uVar11,uVar12,&DAT_14cb7e550,0);
    if (lVar13 != 0) {
      if (*(char *)(param_1 + 0x278) == '\x01') {
        local_160 = (undefined8 ***)0x0;
        uVar12 = FUN_140c4829a();
        lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
        if (lVar14 != 0) {
          puVar28 = (undefined8 *)(param_1 + 0x1a0);
          plVar16 = (longlong *)(lVar14 + 0x88);
          bVar7 = *(byte *)(lVar14 + 0xa8);
          if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
            if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
              puVar28 = *(undefined8 **)(param_1 + 0x1a0);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar16 = (longlong *)*plVar16;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(plVar16,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              plVar19 = plVar16;
              if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
                plVar19 = (longlong *)*plVar16;
              }
              (*pcVar5)(plVar19);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              FUN_1400020a8(*plVar16);
            }
            bVar7 = *(byte *)(param_1 + 0x1c0);
            uVar9 = (uint)bVar7;
            uVar4 = *(ushort *)(param_1 + 0x1b8);
            *(ushort *)(lVar14 + 0xa0) = uVar4;
            plVar19 = plVar16;
            if (0x18 < uVar4) {
              local_1a0 = (ulonglong)bVar7;
              plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
              *plVar16 = (longlong)plVar19;
              puVar28 = (undefined8 *)*puVar28;
              uVar9 = (uint)local_1a0;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar19,puVar28,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
            }
            else {
              (*pcVar5)(plVar19,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
          }
          *(undefined1 *)(lVar14 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
          puVar28 = (undefined8 *)(param_1 + 0x1d8);
          puVar25 = (undefined8 *)(lVar14 + 0xc0);
          bVar7 = *(byte *)(lVar14 + 0xe0);
          if (bVar7 == *(byte *)(param_1 + 0x1f8)) {
            if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
              puVar28 = *(undefined8 **)(param_1 + 0x1d8);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              puVar25 = (undefined8 *)*puVar25;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar25,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              puVar18 = puVar25;
              if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
                puVar18 = (undefined8 *)*puVar25;
              }
              (*pcVar5)(puVar18);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              FUN_1400020a8(*puVar25);
            }
            bVar7 = *(byte *)(param_1 + 0x1f8);
            uVar4 = *(ushort *)(param_1 + 0x1f0);
            *(ushort *)(lVar14 + 0xd8) = uVar4;
            puVar18 = puVar25;
            if (0x18 < uVar4) {
              puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
              *puVar25 = puVar18;
              puVar28 = (undefined8 *)*puVar28;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar18,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xe0) = *(undefined1 *)(param_1 + 0x1f8);
          }
          *(undefined1 *)(lVar14 + 0xe8) = *(undefined1 *)(param_1 + 0x200);
        }
      }
      local_160 = (undefined8 ***)0x0;
      uVar12 = FUN_140c48226();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        *(undefined4 *)(lVar14 + 0x19c) = 2;
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar14 + 0x1f0);
        bVar7 = *(byte *)(lVar14 + 0x210);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x208)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0x208) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x210) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar14 + 0x218) = *(undefined1 *)(param_1 + 0x1c8);
        FUN_144955a78(lVar14 + 0x98,&local_128);
        *(undefined1 *)(lVar14 + 0x158) = (undefined1)local_198;
        puVar28 = (undefined8 *)(param_1 + 0x1d8);
        plVar16 = (longlong *)(lVar14 + 0x128);
        bVar7 = *(byte *)(lVar14 + 0x148);
        if (bVar7 == *(byte *)(param_1 + 0x1f8)) {
          if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1d8);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x140)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1f8);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1f0);
          *(ushort *)(lVar14 + 0x140) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x148) = *(undefined1 *)(param_1 + 0x1f8);
        }
        *(undefined1 *)(lVar14 + 0x150) = *(undefined1 *)(param_1 + 0x200);
        *(undefined1 *)(lVar14 + 0x198) = (undefined1)local_190;
        puVar28 = (undefined8 *)(param_1 + 0x210);
        puVar25 = (undefined8 *)(lVar14 + 0x168);
        bVar7 = *(byte *)(lVar14 + 0x188);
        if (bVar7 == *(byte *)(param_1 + 0x230)) {
          if (0x18 < *(ushort *)(param_1 + 0x228)) {
            puVar28 = *(undefined8 **)(param_1 + 0x210);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar14 + 0x180)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x230);
          uVar4 = *(ushort *)(param_1 + 0x228);
          *(ushort *)(lVar14 + 0x180) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x188) = *(undefined1 *)(param_1 + 0x230);
        }
        *(undefined1 *)(lVar14 + 400) = *(undefined1 *)(param_1 + 0x238);
        *(undefined1 *)(lVar14 + 0x100) = 2;
      }
      local_160 = (undefined8 ***)0x0;
      uVar12 = FUN_140c483a2();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar14 + 0x88);
        bVar7 = *(byte *)(lVar14 + 0xa8);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0xa0) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar14 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
        puVar28 = (undefined8 *)(param_1 + 0x360);
        plVar16 = (longlong *)(lVar14 + 200);
        bVar7 = *(byte *)(lVar14 + 0xe8);
        if (bVar7 == *(byte *)(param_1 + 0x380)) {
          if (0x18 < *(ushort *)(param_1 + 0x378)) {
            puVar28 = *(undefined8 **)(param_1 + 0x360);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xe0)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x380);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x378);
          *(ushort *)(lVar14 + 0xe0) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0xe8) = *(undefined1 *)(param_1 + 0x380);
        }
        *(undefined1 *)(lVar14 + 0xf0) = *(undefined1 *)(param_1 + 0x388);
        puVar28 = (undefined8 *)(param_1 + 0x398);
        plVar16 = (longlong *)(lVar14 + 0x138);
        bVar7 = *(byte *)(lVar14 + 0x158);
        if (bVar7 == *(byte *)(param_1 + 0x3b8)) {
          if (0x18 < *(ushort *)(param_1 + 0x3b0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x398);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x150)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x150)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x150)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x3b8);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x3b0);
          *(ushort *)(lVar14 + 0x150) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x158) = *(undefined1 *)(param_1 + 0x3b8);
        }
        *(undefined1 *)(lVar14 + 0x160) = *(undefined1 *)(param_1 + 0x3c0);
        *(undefined1 *)(lVar14 + 0x168) = *(undefined1 *)(param_1 + 0x3c8);
        *(undefined1 *)(lVar14 + 0x1a8) = *(undefined1 *)(param_1 + 0x440);
        puVar28 = (undefined8 *)(param_1 + 0x410);
        puVar25 = (undefined8 *)(lVar14 + 0x178);
        bVar7 = *(byte *)(lVar14 + 0x198);
        if (bVar7 == *(byte *)(param_1 + 0x430)) {
          if (0x18 < *(ushort *)(param_1 + 0x428)) {
            puVar28 = *(undefined8 **)(param_1 + 0x410);
          }
          if (0x18 < *(ushort *)(lVar14 + 400)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar14 + 400)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 400)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x430);
          uVar4 = *(ushort *)(param_1 + 0x428);
          *(ushort *)(lVar14 + 400) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x198) = *(undefined1 *)(param_1 + 0x430);
        }
        *(undefined1 *)(lVar14 + 0x1a0) = *(undefined1 *)(param_1 + 0x438);
        *(bool *)(lVar14 + 0x1c) = *(char *)(param_1 + 0x350) != '\0';
      }
      if (*(char *)(param_1 + 0x2c0) == '\x01') {
        local_160 = (undefined8 ***)0x0;
        uVar12 = FUN_1464cccf6();
        FUN_140c47e50(lVar13,uVar12,&local_160);
      }
      else {
        local_160 = (undefined8 ***)0x0;
        uVar12 = FUN_140c48260();
        lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
        if (lVar14 != 0) {
          lVar27 = *(longlong *)(param_1 + 0x2c8);
          if (DAT_14c950c29 == '\x01') {
            if (lVar27 == 0) {
              lVar27 = 0;
            }
            else {
              FUN_1456cec3c();
              lVar27 = *(longlong *)(param_1 + 0x2c8);
            }
          }
          *(longlong *)(lVar14 + 0x80) = lVar27;
          *(undefined4 *)(lVar14 + 0x90) = *(undefined4 *)(param_1 + 0x2d8);
          *(undefined8 *)(lVar14 + 0x88) = *(undefined8 *)(param_1 + 0x2d0);
          puVar28 = (undefined8 *)(param_1 + 0x2e8);
          plVar16 = (longlong *)(lVar14 + 0xa0);
          bVar7 = *(byte *)(lVar14 + 0xc0);
          if (bVar7 == *(byte *)(param_1 + 0x308)) {
            if (0x18 < *(ushort *)(param_1 + 0x300)) {
              puVar28 = *(undefined8 **)(param_1 + 0x2e8);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xb8)) {
              plVar16 = (longlong *)*plVar16;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(plVar16,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              plVar19 = plVar16;
              if (0x18 < *(ushort *)(lVar14 + 0xb8)) {
                plVar19 = (longlong *)*plVar16;
              }
              (*pcVar5)(plVar19);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xb8)) {
              FUN_1400020a8(*plVar16);
            }
            bVar7 = *(byte *)(param_1 + 0x308);
            uVar9 = (uint)bVar7;
            uVar4 = *(ushort *)(param_1 + 0x300);
            *(ushort *)(lVar14 + 0xb8) = uVar4;
            plVar19 = plVar16;
            if (0x18 < uVar4) {
              local_1a0 = (ulonglong)bVar7;
              plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
              *plVar16 = (longlong)plVar19;
              puVar28 = (undefined8 *)*puVar28;
              uVar9 = (uint)local_1a0;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar19,puVar28,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
            }
            else {
              (*pcVar5)(plVar19,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xc0) = *(undefined1 *)(param_1 + 0x308);
          }
          *(undefined1 *)(lVar14 + 200) = *(undefined1 *)(param_1 + 0x310);
          puVar28 = (undefined8 *)(param_1 + 800);
          puVar25 = (undefined8 *)(lVar14 + 0xd8);
          bVar7 = *(byte *)(lVar14 + 0xf8);
          if (bVar7 == *(byte *)(param_1 + 0x340)) {
            if (0x18 < *(ushort *)(param_1 + 0x338)) {
              puVar28 = *(undefined8 **)(param_1 + 800);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xf0)) {
              puVar25 = (undefined8 *)*puVar25;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar25,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              puVar18 = puVar25;
              if (0x18 < *(ushort *)(lVar14 + 0xf0)) {
                puVar18 = (undefined8 *)*puVar25;
              }
              (*pcVar5)(puVar18);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xf0)) {
              FUN_1400020a8(*puVar25);
            }
            bVar7 = *(byte *)(param_1 + 0x340);
            uVar4 = *(ushort *)(param_1 + 0x338);
            *(ushort *)(lVar14 + 0xf0) = uVar4;
            puVar18 = puVar25;
            if (0x18 < uVar4) {
              puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
              *puVar25 = puVar18;
              puVar28 = (undefined8 *)*puVar28;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar18,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xf8) = *(undefined1 *)(param_1 + 0x340);
          }
          *(undefined1 *)(lVar14 + 0x100) = *(undefined1 *)(param_1 + 0x348);
          *(undefined4 *)(lVar14 + 0x108) = *(undefined4 *)(param_1 + 0x444);
        }
      }
      local_160 = (undefined8 ****)0x0;
      uVar12 = FUN_140c4800c();
      lVar13 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar13 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar13 + 0x88);
        bVar7 = *(byte *)(lVar13 + 0xa8);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar13 + 0xa0)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar13 + 0xa0) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar13 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar13 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
        *(undefined1 *)(lVar13 + 0x2a0) = 1;
        puVar28 = (undefined8 *)(param_1 + 0x360);
        puVar25 = (undefined8 *)(lVar13 + 0x270);
        bVar7 = *(byte *)(lVar13 + 0x290);
        if (bVar7 == *(byte *)(param_1 + 0x380)) {
          if (0x18 < *(ushort *)(param_1 + 0x378)) {
            puVar28 = *(undefined8 **)(param_1 + 0x360);
          }
          if (0x18 < *(ushort *)(lVar13 + 0x288)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar13 + 0x288)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar13 + 0x288)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x380);
          uVar4 = *(ushort *)(param_1 + 0x378);
          *(ushort *)(lVar13 + 0x288) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar13 + 0x290) = *(undefined1 *)(param_1 + 0x380);
        }
        *(undefined1 *)(lVar13 + 0x298) = *(undefined1 *)(param_1 + 0x388);
        local_168 = local_13c;
        local_160 = DAT_14cb72618;
        local_158 = CONCAT31(local_158._1_3_,1);
        uStack_154 = (undefined4)DAT_14cb72620;
        uStack_150 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
        local_14c = *(undefined1 *)(param_1 + 0x449);
        local_148 = DAT_14cb72628;
        local_140 = CONCAT11(local_140._1_1_,*(undefined1 *)(param_1 + 0x448));
        local_170 = &local_160;
        FUN_140c482d4(lVar13);
        *(bool *)(lVar13 + 0x1c) = *(char *)(param_1 + 0x350) == '\x01';
      }
    }
    uVar12 = FUN_140a48832();
    lVar13 = FUN_140c483dc(uVar11,uVar12,&DAT_14cb7e558,&local_a8);
    if (lVar13 != 0) {
      lVar14 = *(longlong *)(uVar11 + 0xd8);
      *(undefined1 *)(lVar14 + (longlong)(int)local_a8 * 4) = 0;
      *(undefined1 *)(lVar14 + 2 + (longlong)(int)local_a8 * 4) = *(undefined1 *)(param_1 + 0x3c9);
      *(bool *)(lVar13 + 0x1c) = *(char *)(param_1 + 0x350) != '\0';
      if (*(char *)(param_1 + 0x278) == '\x01') {
        local_160 = (undefined8 ***)0x0;
        uVar12 = FUN_140c4829a();
        lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
        if (lVar14 != 0) {
          puVar28 = (undefined8 *)(param_1 + 0x1a0);
          plVar16 = (longlong *)(lVar14 + 0x88);
          bVar7 = *(byte *)(lVar14 + 0xa8);
          if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
            if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
              puVar28 = *(undefined8 **)(param_1 + 0x1a0);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              plVar16 = (longlong *)*plVar16;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(plVar16,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              plVar19 = plVar16;
              if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
                plVar19 = (longlong *)*plVar16;
              }
              (*pcVar5)(plVar19);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              FUN_1400020a8(*plVar16);
            }
            bVar7 = *(byte *)(param_1 + 0x1c0);
            uVar9 = (uint)bVar7;
            uVar4 = *(ushort *)(param_1 + 0x1b8);
            *(ushort *)(lVar14 + 0xa0) = uVar4;
            plVar19 = plVar16;
            if (0x18 < uVar4) {
              local_1a0 = (ulonglong)bVar7;
              plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
              *plVar16 = (longlong)plVar19;
              puVar28 = (undefined8 *)*puVar28;
              uVar9 = (uint)local_1a0;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar19,puVar28,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
            }
            else {
              (*pcVar5)(plVar19,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
          }
          *(undefined1 *)(lVar14 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
          puVar28 = (undefined8 *)(param_1 + 0x1d8);
          puVar25 = (undefined8 *)(lVar14 + 0xc0);
          bVar7 = *(byte *)(lVar14 + 0xe0);
          if (bVar7 == *(byte *)(param_1 + 0x1f8)) {
            if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
              puVar28 = *(undefined8 **)(param_1 + 0x1d8);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              puVar25 = (undefined8 *)*puVar25;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar25,puVar28);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar5 != (code *)0x0) {
              puVar18 = puVar25;
              if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
                puVar18 = (undefined8 *)*puVar25;
              }
              (*pcVar5)(puVar18);
            }
            if (0x18 < *(ushort *)(lVar14 + 0xd8)) {
              FUN_1400020a8(*puVar25);
            }
            bVar7 = *(byte *)(param_1 + 0x1f8);
            uVar4 = *(ushort *)(param_1 + 0x1f0);
            *(ushort *)(lVar14 + 0xd8) = uVar4;
            puVar18 = puVar25;
            if (0x18 < uVar4) {
              puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
              *puVar25 = puVar18;
              puVar28 = (undefined8 *)*puVar28;
            }
            uVar15 = (ulonglong)((uint)bVar7 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
            if (pcVar5 == (code *)0x0) {
              memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
            }
            else {
              (*pcVar5)(puVar18,puVar28);
            }
            *(undefined1 *)(lVar14 + 0xe0) = *(undefined1 *)(param_1 + 0x1f8);
          }
          *(undefined1 *)(lVar14 + 0xe8) = *(undefined1 *)(param_1 + 0x200);
          *(undefined1 *)(lVar14 + 0x131) = 1;
        }
      }
      local_160 = (undefined8 ***)0x0;
      uVar12 = FUN_140c48226();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        *(undefined4 *)(lVar14 + 0x19c) = 2;
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar14 + 0x1f0);
        bVar7 = *(byte *)(lVar14 + 0x210);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x208)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0x208) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x210) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar14 + 0x218) = *(undefined1 *)(param_1 + 0x1c8);
        FUN_144955a78(lVar14 + 0x98,&local_128);
        *(undefined1 *)(lVar14 + 0x158) = (undefined1)local_198;
        puVar28 = (undefined8 *)(param_1 + 0x1d8);
        plVar16 = (longlong *)(lVar14 + 0x128);
        bVar7 = *(byte *)(lVar14 + 0x148);
        if (bVar7 == *(byte *)(param_1 + 0x1f8)) {
          if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1d8);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x140)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1f8);
          uVar9 = (uint)bVar7;
          uVar4 = *(ushort *)(param_1 + 0x1f0);
          *(ushort *)(lVar14 + 0x140) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            local_1a0 = (ulonglong)bVar7;
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
            uVar9 = (uint)local_1a0;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar9 * 0x120));
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,
                   (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar9 * 0x120)));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x148) = *(undefined1 *)(param_1 + 0x1f8);
        }
        *(undefined1 *)(lVar14 + 0x150) = *(undefined1 *)(param_1 + 0x200);
        *(undefined1 *)(lVar14 + 0x198) = (undefined1)local_190;
        puVar28 = (undefined8 *)(param_1 + 0x210);
        puVar25 = (undefined8 *)(lVar14 + 0x168);
        bVar7 = *(byte *)(lVar14 + 0x188);
        if (bVar7 == *(byte *)(param_1 + 0x230)) {
          if (0x18 < *(ushort *)(param_1 + 0x228)) {
            puVar28 = *(undefined8 **)(param_1 + 0x210);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar14 + 0x180)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x230);
          uVar4 = *(ushort *)(param_1 + 0x228);
          *(ushort *)(lVar14 + 0x180) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x188) = *(undefined1 *)(param_1 + 0x230);
        }
        *(undefined1 *)(lVar14 + 400) = *(undefined1 *)(param_1 + 0x238);
      }
      local_160 = (undefined8 ****)0x0;
      uVar12 = FUN_140c4800c();
      plVar16 = (longlong *)FUN_140c47e50(lVar13,uVar12,&local_160);
      if (plVar16 != (longlong *)0x0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar19 = plVar16 + 0x11;
        bVar7 = *(byte *)(plVar16 + 0x15);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x14)) {
            plVar19 = (longlong *)*plVar19;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar17 = plVar19;
            if (0x18 < *(ushort *)(plVar16 + 0x14)) {
              plVar17 = (longlong *)*plVar19;
            }
            (*pcVar5)(plVar17);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x14)) {
            FUN_1400020a8(*plVar19);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(plVar16 + 0x14) = uVar4;
          plVar17 = plVar19;
          if (0x18 < uVar4) {
            plVar17 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar19 = (longlong)plVar17;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar17,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar17,puVar28);
          }
          *(undefined1 *)(plVar16 + 0x15) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(plVar16 + 0x16) = *(undefined1 *)(param_1 + 0x1c8);
        *(undefined1 *)(plVar16 + 0x54) = 1;
        puVar28 = (undefined8 *)(param_1 + 0x360);
        plVar19 = plVar16 + 0x4e;
        bVar7 = *(byte *)(plVar16 + 0x52);
        if (bVar7 == *(byte *)(param_1 + 0x380)) {
          if (0x18 < *(ushort *)(param_1 + 0x378)) {
            puVar28 = *(undefined8 **)(param_1 + 0x360);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x51)) {
            plVar19 = (longlong *)*plVar19;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar17 = plVar19;
            if (0x18 < *(ushort *)(plVar16 + 0x51)) {
              plVar17 = (longlong *)*plVar19;
            }
            (*pcVar5)(plVar17);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x51)) {
            FUN_1400020a8(*plVar19);
          }
          bVar7 = *(byte *)(param_1 + 0x380);
          uVar4 = *(ushort *)(param_1 + 0x378);
          *(ushort *)(plVar16 + 0x51) = uVar4;
          plVar17 = plVar19;
          if (0x18 < uVar4) {
            plVar17 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar19 = (longlong)plVar17;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar17,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar17,puVar28);
          }
          *(undefined1 *)(plVar16 + 0x52) = *(undefined1 *)(param_1 + 0x380);
        }
        *(undefined1 *)(plVar16 + 0x53) = *(undefined1 *)(param_1 + 0x388);
        if ((char)plVar16[0x17] != '\x04') {
          *(undefined1 *)(plVar16 + 0x17) = 4;
          FUN_1403a3fe6(plVar16);
        }
        *(undefined1 *)((longlong)plVar16 + 0x219) = *(undefined1 *)(param_1 + 0x44a);
        *(undefined1 *)(plVar16 + 0x44) = *(undefined1 *)(param_1 + 0x3c9);
        puVar28 = (undefined8 *)(param_1 + 0x3d8);
        plVar19 = plVar16 + 0x46;
        bVar7 = *(byte *)(plVar16 + 0x4a);
        if (bVar7 == *(byte *)(param_1 + 0x3f8)) {
          if (0x18 < *(ushort *)(param_1 + 0x3f0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x3d8);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x49)) {
            plVar19 = (longlong *)*plVar19;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar17 = plVar19;
            if (0x18 < *(ushort *)(plVar16 + 0x49)) {
              plVar17 = (longlong *)*plVar19;
            }
            (*pcVar5)(plVar17);
          }
          if (0x18 < *(ushort *)(plVar16 + 0x49)) {
            FUN_1400020a8(*plVar19);
          }
          bVar7 = *(byte *)(param_1 + 0x3f8);
          uVar4 = *(ushort *)(param_1 + 0x3f0);
          *(ushort *)(plVar16 + 0x49) = uVar4;
          plVar17 = plVar19;
          if (0x18 < uVar4) {
            plVar17 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar19 = (longlong)plVar17;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar15 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar15);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar17,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar15));
          }
          else {
            (*pcVar5)(plVar17,puVar28);
          }
          *(undefined1 *)(plVar16 + 0x4a) = *(undefined1 *)(param_1 + 0x3f8);
        }
        *(undefined1 *)(plVar16 + 0x4b) = *(undefined1 *)(param_1 + 0x400);
        (**(code **)(*plVar16 + 0x90))(plVar16);
      }
    }
    uVar12 = FUN_140a48832();
    lVar13 = FUN_140c483dc(uVar11,uVar12,&DAT_14cb7e560,&local_174);
    if (lVar13 != 0) {
      *(undefined1 *)(*(longlong *)(uVar11 + 0xd8) + (longlong)local_174 * 4) = 0;
      *(undefined1 *)(lVar13 + 0x1c) = *(undefined1 *)(param_1 + 1099);
      local_160 = (undefined8 ***)0x0;
      uVar12 = FUN_140c48226();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar14 + 0x1f0);
        bVar7 = *(byte *)(lVar14 + 0x210);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x208)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x208)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0x208) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x210) = *(undefined1 *)(param_1 + 0x1c0);
        }
        uVar6 = (undefined1)local_198;
        *(undefined1 *)(lVar14 + 0x218) = *(undefined1 *)(param_1 + 0x1c8);
        FUN_144955a78(lVar14 + 0x98,&local_128);
        *(undefined1 *)(lVar14 + 0x158) = uVar6;
        puVar28 = (undefined8 *)(param_1 + 0x1d8);
        plVar16 = (longlong *)(lVar14 + 0x128);
        bVar7 = *(byte *)(lVar14 + 0x148);
        if (bVar7 == *(byte *)(param_1 + 0x1f8)) {
          if (0x18 < *(ushort *)(param_1 + 0x1f0)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1d8);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0x140)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x140)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1f8);
          uVar4 = *(ushort *)(param_1 + 0x1f0);
          *(ushort *)(lVar14 + 0x140) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x148) = *(undefined1 *)(param_1 + 0x1f8);
        }
        *(undefined1 *)(lVar14 + 0x150) = *(undefined1 *)(param_1 + 0x200);
        *(undefined1 *)(lVar14 + 0x198) = (undefined1)local_190;
        puVar28 = (undefined8 *)(param_1 + 0x210);
        puVar25 = (undefined8 *)(lVar14 + 0x168);
        bVar7 = *(byte *)(lVar14 + 0x188);
        if (bVar7 == *(byte *)(param_1 + 0x230)) {
          if (0x18 < *(ushort *)(param_1 + 0x228)) {
            puVar28 = *(undefined8 **)(param_1 + 0x210);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar14 + 0x180)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0x180)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x230);
          uVar4 = *(ushort *)(param_1 + 0x228);
          *(ushort *)(lVar14 + 0x180) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar14 + 0x188) = *(undefined1 *)(param_1 + 0x230);
        }
        *(undefined1 *)(lVar14 + 400) = *(undefined1 *)(param_1 + 0x238);
      }
      local_160 = (undefined8 ***)0x0;
      uVar12 = FUN_140c4800c();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        puVar25 = (undefined8 *)(lVar14 + 0x88);
        bVar7 = *(byte *)(lVar14 + 0xa8);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            puVar25 = (undefined8 *)*puVar25;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar25,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar25,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar18 = puVar25;
            if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
              puVar18 = (undefined8 *)*puVar25;
            }
            (*pcVar5)(puVar18);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa0)) {
            FUN_1400020a8(*puVar25);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0xa0) = uVar4;
          puVar18 = puVar25;
          if (0x18 < uVar4) {
            puVar18 = (undefined8 *)FUN_14001cc68(uVar4,0);
            *puVar25 = puVar18;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(puVar18,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(puVar18,puVar28);
          }
          *(undefined1 *)(lVar14 + 0xa8) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar14 + 0xb0) = *(undefined1 *)(param_1 + 0x1c8);
        local_180 = local_13c;
        local_160 = DAT_14cb72618;
        local_158 = CONCAT31(local_158._1_3_,*(char *)(param_1 + 0x44c) == '\x01');
        uStack_154 = (undefined4)DAT_14cb72620;
        uStack_150 = (undefined4)((ulonglong)DAT_14cb72620 >> 0x20);
        local_14c = *(undefined1 *)(param_1 + 0x44e);
        local_148 = DAT_14cb72628;
        local_140 = CONCAT11(local_140._1_1_,*(undefined1 *)(param_1 + 0x44d));
        local_188 = &local_160;
        FUN_140c482d4(lVar14);
      }
      local_160 = (undefined8 ****)0x0;
      uVar12 = FUN_140c4880e();
      lVar14 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar14 != 0) {
        puVar28 = (undefined8 *)(param_1 + 0x1a0);
        plVar16 = (longlong *)(lVar14 + 0x90);
        bVar7 = *(byte *)(lVar14 + 0xb0);
        if (bVar7 == *(byte *)(param_1 + 0x1c0)) {
          if (0x18 < *(ushort *)(param_1 + 0x1b8)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1a0);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
            plVar16 = (longlong *)*plVar16;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar16,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar16,puVar28);
          }
        }
        else {
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
          if (pcVar5 != (code *)0x0) {
            plVar19 = plVar16;
            if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
              plVar19 = (longlong *)*plVar16;
            }
            (*pcVar5)(plVar19);
          }
          if (0x18 < *(ushort *)(lVar14 + 0xa8)) {
            FUN_1400020a8(*plVar16);
          }
          bVar7 = *(byte *)(param_1 + 0x1c0);
          uVar4 = *(ushort *)(param_1 + 0x1b8);
          *(ushort *)(lVar14 + 0xa8) = uVar4;
          plVar19 = plVar16;
          if (0x18 < uVar4) {
            plVar19 = (longlong *)FUN_14001cc68(uVar4,0);
            *plVar16 = (longlong)plVar19;
            puVar28 = (undefined8 *)*puVar28;
          }
          uVar11 = (ulonglong)((uint)bVar7 * 0x120);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + uVar11);
          if (pcVar5 == (code *)0x0) {
            memcpy(plVar19,puVar28,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
          }
          else {
            (*pcVar5)(plVar19,puVar28);
          }
          *(undefined1 *)(lVar14 + 0xb0) = *(undefined1 *)(param_1 + 0x1c0);
        }
        *(undefined1 *)(lVar14 + 0xb8) = *(undefined1 *)(param_1 + 0x1c8);
        *(undefined1 *)(lVar14 + 0x80) = *(undefined1 *)(param_1 + 0x2b9);
        local_158 = *(undefined4 *)(param_1 + 700);
        local_160 = (undefined8 ****)0x0;
        local_140 = 4;
        local_138 = 3;
        local_130 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
        FUN_1403719a4(lVar14 + 200,&local_160);
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_138 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (local_140 < 0x19) {
            puVar22 = &local_158;
          }
          else {
            puVar22 = (undefined4 *)CONCAT44(uStack_154,local_158);
          }
          (*pcVar5)(puVar22);
        }
        if (0x18 < local_140) {
          FUN_1400020a8(CONCAT44(uStack_154,local_158));
        }
        FUN_140c48b0c(lVar14,*(undefined1 *)(param_1 + 0x2b8));
      }
      lVar14 = *(longlong *)(param_1 + 0x458);
      if (lVar14 == 0) {
        uVar12 = FUN_1409ff8bc();
        lVar14 = FUN_14477b664(uVar12);
        *(longlong *)(param_1 + 0x458) = lVar14;
      }
      plVar16 = (longlong *)(param_1 + 0x450);
      if (*(longlong *)(param_1 + 0x460) == 0) {
        if ((lVar14 == 0) || (*plVar16 == 0)) goto LAB_140c45c56;
        plVar19 = *(longlong **)(lVar14 + 0xb8);
        if ((plVar19 == (longlong *)0x0) ||
           (cVar8 = (**(code **)(*plVar19 + 0x108))(plVar19), cVar8 == '\0')) {
          *(undefined8 *)(param_1 + 0x460) = 0;
          goto LAB_140c45c56;
        }
        uVar12 = (**(code **)(*plVar19 + 0x110))(plVar19);
        lVar14 = FUN_144aff482(uVar12,plVar16);
        *(longlong *)(param_1 + 0x460) = lVar14;
        if (lVar14 == 0) goto LAB_140c45c56;
      }
      local_160 = (undefined8 ****)0x0;
      uVar12 = FUN_14587d4bc();
      lVar13 = FUN_140c47e50(lVar13,uVar12,&local_160);
      if (lVar13 != 0) {
        FUN_1457892b8(lVar13 + 0x80,plVar16);
        *(undefined4 *)(lVar13 + 0x98) = 1;
      }
    }
  }
LAB_140c45c56:
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar21 = (undefined8 ****)local_f0;
    if (local_d8 < 0x19) {
      ppppuVar21 = &local_f0;
    }
    (*pcVar5)(ppppuVar21);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(local_f0);
  }
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c47e50 FUN_140c47e50 body=168 status=ok
// SIG undefined FUN_140c47e50(void)

undefined8 FUN_140c47e50(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar2 = 0;
  if ((param_2 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar1 = FUN_140c47efa();
    if ((lVar1 == 0) ||
       ((*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38) ||
        (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
         lVar1 + 0x30)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 8);
      lVar1 = *param_3;
      if (*param_3 == 0) {
        FUN_140c47f34(&local_30,param_2);
        lVar1 = local_30;
      }
      local_30 = lVar1;
      uVar2 = FUN_140c48046(uVar2,param_2,local_30,param_1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140c47efa FUN_140c47efa body=57 status=ok
// SIG undefined FUN_140c47efa(void)

void FUN_140c47efa(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21120 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21120 = FUN_140002ddd(FUN_14180b54c,uVar1,L"GbxBrainAspectSettings");
  }
  return;
}



// FUNCTION 140c47f34 FUN_140c47f34 body=215 status=ok
// SIG undefined FUN_140c47f34(void)

undefined8 * FUN_140c47f34(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_868 [40];
  undefined8 local_840;
  undefined1 *local_838;
  undefined1 *local_830;
  ulonglong *local_828;
  char local_820;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_868;
  if (param_2 != 0) {
    local_838 = local_818;
    local_820 = '\0';
    local_828 = &local_18;
    local_840 = *(undefined8 *)(param_2 + 0x18);
    local_830 = local_838;
    FUN_14005eb5c(&local_840,&local_838);
    uVar1 = (uint)((ulonglong)((longlong)local_830 - (longlong)local_838) >> 1);
    if (0x17 < uVar1) {
      FUN_1446f82e2(param_1,uVar1 - 0x17,local_838 + 0x2e,1);
      if (local_820 == '\x01') {
        FUN_1400020a8(local_838);
      }
      goto LAB_140c47fbf;
    }
    if (local_820 == '\x01') {
      FUN_1400020a8(local_838);
    }
  }
  *param_1 = 0;
LAB_140c47fbf:
  if ((local_18 ^ (ulonglong)auStack_868) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4800c FUN_140c4800c body=57 status=ok
// SIG undefined FUN_140c4800c(void)

void FUN_140c4800c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ade0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ade0 = FUN_140002ddd(FUN_1464cd048,uVar1,L"GbxBrainAspectSettings_Rotate");
  }
  return;
}



// FUNCTION 140c48046 FUN_140c48046 body=416 status=ok
// SIG undefined FUN_140c48046(void)

longlong * FUN_140c48046(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *_Dst;
  uint uVar3;
  
  if ((((param_2 != (longlong *)0x0) && (lVar2 = FUN_140c481ec(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= (int)param_2[7])) &&
     ((*(longlong *)(param_2[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30 &&
      (_Dst = (longlong *)
              FUN_14001cc68((longlong)
                            (int)(-*(int *)((longlong)param_2 + 0x5c) &
                                 ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U)),
      _Dst != (longlong *)0x0)))) {
    memset(_Dst,0,(longlong)
                  (int)(-*(int *)((longlong)param_2 + 0x5c) &
                       ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U));
    (**(code **)(*param_2 + 0x2e8))(param_2,_Dst,1);
    _Dst[1] = (longlong)param_1;
    iVar1 = (int)param_1[6];
    *(uint *)(param_1 + 6) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x34) < iVar1 + 1U) {
      FUN_140b3e020(param_1 + 5,iVar1);
    }
    *(longlong **)(param_1[5] + (longlong)iVar1 * 8) = _Dst;
    *(int *)(_Dst + 3) = iVar1;
    if (param_3 != 0) {
      (**(code **)(*_Dst + 0x30))(_Dst,param_3);
    }
    if (param_4 != 0) {
      FUN_1403ecbfe(_Dst,param_4);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[4];
    *(uint *)(param_1 + 4) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
      FUN_140c48848(param_1 + 3,iVar1);
    }
    *(longlong **)(param_1[3] + (longlong)iVar1 * 8) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    lVar2 = (**(code **)(*_Dst + 0x10))(_Dst);
    if (lVar2 != 0) {
      iVar1 = *(int *)(lVar2 + 0x5c) + -1;
      uVar3 = -*(int *)(lVar2 + 0x5c);
      *(uint *)(param_1 + 9) =
           (iVar1 + *(int *)(lVar2 + 0x58) & uVar3) + ((int)param_1[9] + iVar1 & uVar3);
    }
    (**(code **)(*param_1 + 0x38))(param_1);
    return _Dst;
  }
  return (longlong *)0x0;
}



// FUNCTION 140c481e6 FUN_140c481e6 body=5 status=ok
// SIG undefined FUN_140c481e6(void)

void FUN_140c481e6(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}



// FUNCTION 140c481ec FUN_140c481ec body=57 status=ok
// SIG undefined FUN_140c481ec(void)

void FUN_140c481ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14c9a5450 == 0) {
    uVar1 = FUN_140ba080c();
    DAT_14c9a5450 = FUN_140002ddd(FUN_1462ad4de,uVar1,L"GbxGraphNodeSettings");
  }
  return;
}



// FUNCTION 140c48226 FUN_140c48226 body=57 status=ok
// SIG undefined FUN_140c48226(void)

void FUN_140c48226(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21688 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21688 = FUN_140002ddd(FUN_146433c7b,uVar1,L"GbxBrainAspectSettings_NavAttribute");
  }
  return;
}



// FUNCTION 140c48260 FUN_140c48260 body=57 status=ok
// SIG undefined FUN_140c48260(void)

void FUN_140c48260(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aea0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aea0 = FUN_140002ddd(FUN_1464cd2d4,uVar1,L"GbxBrainAspectSettings_Trick");
  }
  return;
}



// FUNCTION 140c4829a FUN_140c4829a body=57 status=ok
// SIG undefined FUN_140c4829a(void)

void FUN_140c4829a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21400 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21400 = FUN_140002ddd(FUN_146432cd2,uVar1,L"GbxBrainAspectSettings_HasNavLoS");
  }
  return;
}



// FUNCTION 140c482d4 FUN_140c482d4 body=148 status=ok
// SIG undefined FUN_140c482d4(void)

void FUN_140c482d4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined1 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) < 0) {
    FUN_1403de8ba(param_1 + 0xc0,0);
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  if (*(int *)(param_1 + 0xdc) < 0) {
    FUN_1403de8ba(param_1 + 0xd0,0);
  }
  lVar1 = param_2[1];
  for (lVar2 = *param_2; lVar2 != lVar1; lVar2 = lVar2 + 0xc) {
    if (*(char *)(lVar2 + 8) == '\x01') {
      FUN_1403a40a4(param_1 + 0xc0,lVar2);
    }
  }
  FUN_1403a3fe6(param_1);
  return;
}



// FUNCTION 140c48368 FUN_140c48368 body=57 status=ok
// SIG undefined FUN_140c48368(void)

void FUN_140c48368(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21198 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21198 = FUN_140002ddd(FUN_146432341,uVar1,L"GbxBrainAspectSettings_CanSee");
  }
  return;
}



// FUNCTION 140c483a2 FUN_140c483a2 body=57 status=ok
// SIG undefined FUN_140c483a2(void)

void FUN_140c483a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ac28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ac28 = FUN_140002ddd(FUN_1464cc901,uVar1,L"GbxBrainAspectSettings_IsFacing");
  }
  return;
}



// FUNCTION 140c483dc FUN_140c483dc body=336 status=ok
// SIG undefined FUN_140c483dc(void)

longlong FUN_140c483dc(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = 0;
  if ((param_2 != 0) && (param_1[1] != 0)) {
    lVar4 = FUN_140a48832();
    if ((lVar4 == 0) ||
       ((*(int *)(param_2 + 0x38) < *(int *)(lVar4 + 0x38) ||
        (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
         lVar4 + 0x30)))) {
      lVar4 = 0;
    }
    else {
      lVar5 = FUN_140c48046(param_1[1],param_2,*param_3,0);
      lVar4 = 0;
      if (lVar5 != 0) {
        iVar2 = (int)param_1[6];
        *(uint *)(param_1 + 6) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x34) < iVar2 + 1U) {
          FUN_1406f8fea(param_1 + 5,iVar2);
        }
        lVar4 = param_1[5];
        lVar6 = (longlong)iVar2 * 0x20;
        *(longlong *)(lVar4 + lVar6) = lVar5;
        *(undefined1 *)(lVar4 + 8 + lVar6) = 3;
        puVar1 = (undefined8 *)(lVar4 + 0xc + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        iVar2 = *(int *)(lVar5 + 0x30);
        *(uint *)(lVar5 + 0x30) = iVar2 + 1U;
        if (*(uint *)(lVar5 + 0x34) < iVar2 + 1U) {
          FUN_1406f8fea((longlong *)(lVar5 + 0x28),iVar2);
        }
        lVar4 = *(longlong *)(lVar5 + 0x28);
        lVar6 = (longlong)iVar2 * 0x20;
        *(longlong **)(lVar4 + lVar6) = param_1;
        *(undefined1 *)(lVar4 + 8 + lVar6) = 2;
        puVar1 = (undefined8 *)(lVar4 + 0xc + lVar6);
        *puVar1 = 0;
        puVar1[1] = 0;
        uVar3 = (undefined4)param_1[0x19];
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = uVar3;
        }
        (**(code **)(*param_1 + 0x88))(param_1,uVar3);
        (**(code **)(*param_1 + 0x98))(param_1,uVar3,lVar5);
        FUN_14024bea0(lVar5,1);
        lVar4 = lVar5;
      }
    }
  }
  return lVar4;
}



// FUNCTION 140c4852c FUN_140c4852c body=53 status=ok
// SIG undefined FUN_140c4852c(void)

void FUN_140c4852c(longlong param_1,int param_2)

{
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 0xe0))) {
    FUN_140c48562(param_1 + 0xd8,param_2);
  }
  FUN_140c485dc(param_1,param_2);
  return;
}



// FUNCTION 140c48562 FUN_140c48562 body=99 status=ok
// SIG undefined FUN_140c48562(void)

void FUN_140c48562(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140c489aa(param_1,iVar1);
  }
  lVar2 = (longlong)param_2;
  memmove((void *)(*param_1 + lVar2 * 4 + 4),(void *)(*param_1 + lVar2 * 4),
          (ulonglong)(uint)(iVar1 - param_2) << 2);
  FUN_140c485c5(lVar2 * 4 + *param_1,1);
  return;
}



// FUNCTION 140c485c5 FUN_140c485c5 body=23 status=ok
// SIG undefined FUN_140c485c5(void)

void FUN_140c485c5(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1 * 4) = 0x1000001;
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 140c485dc FUN_140c485dc body=166 status=ok
// SIG undefined FUN_140c485dc(void)

void FUN_140c485dc(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((-1 < param_2) && (param_2 <= *(int *)(param_1 + 200))) {
    FUN_140c48682(param_1 + 0x80,param_2);
    if (*(longlong *)(param_1 + 8) != 0) {
      for (lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x50); lVar5 != 0;
          lVar5 = *(longlong *)(lVar5 + 0x18)) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar5 + 0x78))) &&
           (plVar2 = *(longlong **)(*(longlong *)(lVar5 + 0x70) + (longlong)iVar1 * 8),
           plVar2 != (longlong *)0x0)) {
          lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar4 = FUN_146435dae();
          if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
              lVar4 + 0x30)) {
            (**(code **)(*plVar2 + 0x130))(plVar2,param_2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c48682 FUN_140c48682 body=105 status=ok
// SIG undefined FUN_140c48682(void)

void FUN_140c48682(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_14576619e(param_1,iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  lVar3 = (longlong)param_2;
  memmove((void *)(lVar2 + lVar3 * 8 + 8),(void *)(lVar2 + lVar3 * 8),
          (ulonglong)(uint)(iVar1 - param_2) << 3);
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar2 = param_1;
  }
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  return;
}



// FUNCTION 140c486ec FUN_140c486ec body=290 status=ok
// SIG undefined FUN_140c486ec(void)

void FUN_140c486ec(longlong param_1,uint param_2,longlong param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 200))) {
    lVar3 = param_1 + 0x80;
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xc0);
    }
    *(longlong *)(lVar3 + (ulonglong)param_2 * 8) = param_3;
    lVar3 = *(longlong *)(param_1 + 8);
    if ((lVar3 != 0) && ((param_3 == 0 || (lVar3 == *(longlong *)(param_3 + 8))))) {
      for (lVar3 = *(longlong *)(lVar3 + 0x50); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
        iVar1 = *(int *)(param_1 + 0x18);
        if (((-1 < (longlong)iVar1) && (iVar1 < *(int *)(lVar3 + 0x78))) &&
           (plVar2 = *(longlong **)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar1 * 8),
           plVar2 != (longlong *)0x0)) {
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_146435dae();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            if (param_3 == 0) {
LAB_140c487f8:
              plVar6 = (longlong *)0x0;
            }
            else {
              iVar1 = *(int *)(param_3 + 0x18);
              if ((((longlong)iVar1 < 0) || (*(int *)(lVar3 + 0x78) <= iVar1)) ||
                 (plVar6 = *(longlong **)(*(longlong *)(lVar3 + 0x70) + (longlong)iVar1 * 8),
                 plVar6 == (longlong *)0x0)) goto LAB_140c487f8;
              lVar4 = (**(code **)(*plVar6 + 8))(plVar6);
              lVar5 = FUN_14071ed30();
              if (((lVar5 == 0) || (*(int *)(lVar4 + 0x38) < *(int *)(lVar5 + 0x38))) ||
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
                  != lVar5 + 0x30)) goto LAB_140c487f8;
            }
            (**(code **)(*plVar2 + 0x140))(plVar2,param_2,plVar6);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c4880e FUN_140c4880e body=57 status=ok
// SIG undefined FUN_140c4880e(void)

void FUN_140c4880e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21508 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21508 = FUN_140002ddd(FUN_14643313b,uVar1,L"GbxBrainAspectSettings_IsInTerritory");
  }
  return;
}



// FUNCTION 140c48848 FUN_140c48848 body=353 status=ok
// SIG undefined FUN_140c48848(void)

void FUN_140c48848(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c488cd;
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
LAB_140c488cd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c489aa FUN_140c489aa body=353 status=ok
// SIG undefined FUN_140c489aa(void)

void FUN_140c489aa(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c48a2f;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_140c48a2f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,1);
  return;
}



// FUNCTION 140c48b0c FUN_140c48b0c body=239 status=ok
// SIG undefined FUN_140c48b0c(void)

void FUN_140c48b0c(longlong param_1,char param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  ushort local_38;
  byte local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == '\0') {
    lVar2 = FUN_144860928();
    *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(lVar2 + 0x80);
    local_50 = *(undefined4 *)(lVar2 + 0x84);
    local_58 = 0;
    local_38 = 4;
    local_30 = 3;
    local_28 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
    FUN_1403719a4(param_1 + 200,&local_58);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_30 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (local_38 < 0x19) {
        puVar3 = &local_50;
      }
      else {
        puVar3 = (undefined4 *)CONCAT44(uStack_4c,local_50);
      }
      (*pcVar1)(puVar3);
    }
    if (0x18 < local_38) {
      FUN_1400020a8(CONCAT44(uStack_4c,local_50));
    }
    *(undefined1 *)(param_1 + 0x146) = 1;
  }
  else {
    *(bool *)(param_1 + 0x1c) = param_2 == '\x02';
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c48c2c FUN_140c48c2c body=1427 status=ok
// SIG undefined FUN_140c48c2c(void)

void FUN_140c48c2c(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140c48d59;
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140c48c8d;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140c48c92;
      goto LAB_140c48cbe;
    }
  }
  else {
LAB_140c48c8d:
    if (iVar8 != 0x10) {
LAB_140c48cbe:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_140c48c92;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140c48c92;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_140c48ed1;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a091f0);
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
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_140c48ed1:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar18 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar14 = 0;
            if (puVar18 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_140c48f53;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_140c48f53:
        *(uint **)(puVar12 + 0x10) = puVar18;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adbeb60;
        puVar19[0x15] = param_1;
        puVar19[0x16] = uVar13;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar17 = (int *)(puVar19 + 1);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbeb40;
        local_88[0] = &LAB_1406e33da;
        local_60 = param_1;
        local_58 = uVar13;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae90);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_140c48d59;
    }
  }
LAB_140c48c92:
  FUN_1406e33ee(param_1 + 0x70,uVar13);
LAB_140c48d59:
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        plVar2 = (longlong *)(lVar5 + (longlong)iVar8 * 0x18);
        if (*plVar2 == lVar4) {
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          if (iVar7 == iVar8) {
            piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar17 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar17;
            } while (iVar7 != iVar8);
          }
          *piVar17 = (int)plVar2[2];
          FUN_143a19f18((longlong *)(param_1 + 0x20));
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c491c0 FUN_140c491c0 body=1427 status=ok
// SIG undefined FUN_140c491c0(void)

void FUN_140c491c0(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140c492ed;
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140c49221;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140c49226;
      goto LAB_140c49252;
    }
  }
  else {
LAB_140c49221:
    if (iVar8 != 0x10) {
LAB_140c49252:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_140c49226;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140c49226;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_140c49465;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a091f0);
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
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_140c49465:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar18 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar14 = 0;
            if (puVar18 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_140c494e7;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_140c494e7:
        *(uint **)(puVar12 + 0x10) = puVar18;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adbcb30;
        puVar19[0x15] = param_1;
        puVar19[0x16] = uVar13;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar17 = (int *)(puVar19 + 1);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbcad0;
        local_88[0] = &LAB_1407bdc86;
        local_60 = param_1;
        local_58 = uVar13;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae40);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_140c492ed;
    }
  }
LAB_140c49226:
  FUN_1407bdc9a(param_1 + 0x70,uVar13);
LAB_140c492ed:
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        plVar2 = (longlong *)(lVar5 + (longlong)iVar8 * 0x18);
        if (*plVar2 == lVar4) {
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          if (iVar7 == iVar8) {
            piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar17 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar17;
            } while (iVar7 != iVar8);
          }
          *piVar17 = (int)plVar2[2];
          FUN_143a0ea6e((longlong *)(param_1 + 0x20));
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c49754 FUN_140c49754 body=1465 status=ok
// SIG undefined FUN_140c49754(void)

void FUN_140c49754(longlong param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  undefined ***pppuVar15;
  longlong lVar16;
  int *piVar17;
  uint *puVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 auStack_b8 [32];
  undefined1 **local_98;
  undefined1 *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x30) & 4) == 0) goto LAB_140c49865;
  uVar13 = *(undefined8 *)(param_3 + 0x100);
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_140c497b9;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_140c49c6b;
      goto LAB_140c497c2;
    }
  }
  else {
LAB_140c497b9:
    if (iVar8 != 0x10) {
LAB_140c497c2:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar4 + 0xc60), iVar8 == 2))
        goto LAB_140c49c6b;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_140c49c6b;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_140c499cf;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143a091f0);
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
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_140c499cf:
          puVar19 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar18 = (uint *)(puVar19 + 0x17);
          uVar14 = puVar12[0x12];
          if (puVar18 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar19 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar18 = (uint *)(puVar19 + 0x17);
            uVar14 = 0;
            if (puVar18 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_140c49a51;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_140c49a51:
        *(uint **)(puVar12 + 0x10) = puVar18;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar19,0);
        *puVar19 = &PTR_FUN_14adbde80;
        puVar19[0x15] = param_1;
        puVar19[0x16] = uVar13;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar19[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar19[0xe] + 0x18))(puVar19 + 0xe,puVar19 + 9);
        }
        puVar19[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar19[9] = puVar19;
        puVar19[10] = puVar19;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar13 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar19[0xf] = uVar13;
        puVar19[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar19 + 0x1c) = iVar8;
        if (puVar19 == (undefined8 *)0x0) {
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar19 + 1) = *(int *)(puVar19 + 1) + 1;
          UNLOCK();
          local_88[0] = (undefined1 *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar19);
          LOCK();
          piVar17 = (int *)(puVar19 + 1);
          *piVar17 = *piVar17 + -1;
          UNLOCK();
          if (*piVar17 == 0) {
            (**(code **)*puVar19)(puVar19,1);
          }
        }
      }
      else {
        local_98 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14adbde60;
        local_88[0] = &LAB_1481326c8;
        local_60 = param_1;
        local_58 = uVar13;
        FUN_14005a792(&DAT_14ca9a440,L"FNDIArrayProxyImpl_RemoveProxy",&DAT_14cb3ae70);
        if (local_88[0] != (undefined1 *)0x0) {
          pppuVar15 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar15 = &local_68;
          }
          (*(code *)(*pppuVar15)[2])();
        }
      }
      goto LAB_140c49865;
    }
  }
LAB_140c49c6b:
  FUN_1481325e6(param_1 + 0x70,uVar13);
LAB_140c49865:
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_3 + 0x100);
    lVar16 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar16 = *(longlong *)(param_1 + 0x60);
    }
    iVar8 = *(int *)(lVar16 + ((longlong)((int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4) &
                              (longlong)*(int *)(param_1 + 0x68) - 1U) * 4);
    if (iVar8 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x20);
      do {
        plVar2 = (longlong *)(lVar5 + (longlong)iVar8 * 0x18);
        if (*plVar2 == lVar4) {
          iVar7 = *(int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          if (iVar7 == iVar8) {
            piVar17 = (int *)(lVar16 + (longlong)*(int *)((longlong)plVar2 + 0x14) * 4);
          }
          else {
            do {
              piVar17 = (int *)(lVar5 + (longlong)iVar7 * 0x18 + 0x10);
              iVar7 = *piVar17;
            } while (iVar7 != iVar8);
          }
          *piVar17 = (int)plVar2[2];
          FUN_143a1598c((longlong *)(param_1 + 0x20));
          break;
        }
        iVar8 = (int)plVar2[2];
      } while (iVar8 != -1);
    }
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c49d16 FUN_140c49d16 body=229 status=ok
// SIG undefined FUN_140c49d16(void)

longlong * FUN_140c49d16(longlong *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = (longlong)&PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = (longlong)&PTR_FUN_14b0d2da0;
  FUN_140785382(param_1 + 0x10,10);
  FUN_1403a4106(param_1 + 0x17);
  *(undefined2 *)(param_1 + 0x36) = 0;
  FUN_1403a4106(param_1 + 0x37);
  param_1[0x56] = 0;
  *(undefined1 *)(param_1 + 0x57) = 3;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)(param_1 + 99) = 0;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}



// FUNCTION 140c49dfc FUN_140c49dfc body=24 status=ok
// SIG undefined FUN_140c49dfc(void)

void FUN_140c49dfc(longlong param_1)

{
  *(undefined2 *)(param_1 + 0x78) = 1;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = *(undefined1 *)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



// FUNCTION 140c49e14 FUN_140c49e14 body=1732 status=ok
// SIG undefined FUN_140c49e14(void)

void FUN_140c49e14(longlong *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)((longlong)param_1 + 0x78c) < 0) {
    *(undefined4 *)(param_1 + 0xf1) = 0;
    FUN_1470d9a06(param_1 + 0xf0,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xf1) = 0;
  }
  local_68 = param_1 + 0xee;
  *(undefined4 *)(param_1 + 0xef) = 0;
  if (*(int *)((longlong)param_1 + 0x77c) < 0) {
    FUN_1470d9a06(local_68,0);
  }
  if (*(int *)((longlong)param_1 + 0x894) < 0) {
    *(undefined4 *)(param_1 + 0x112) = 0;
    FUN_1470d9a06(param_1 + 0x111,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x112) = 0;
  }
  local_70 = param_1 + 0x10f;
  *(undefined4 *)(param_1 + 0x110) = 0;
  if (*(int *)((longlong)param_1 + 0x884) < 0) {
    FUN_1470d9a06(local_70,0);
  }
  plVar6 = param_1 + 0xf2;
  *(undefined4 *)(param_1 + 0xf3) = 0;
  if (*(int *)((longlong)param_1 + 0x79c) < 0) {
    FUN_1470d9a06(plVar6,0);
  }
  plVar7 = param_1 + 0x113;
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (*(int *)((longlong)param_1 + 0x8a4) < 0) {
    FUN_1470d9a06(plVar7,0);
  }
  if ((longlong *)param_1[0x27] != (longlong *)0x0) {
    local_78 = plVar7;
    local_60 = plVar6;
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x58))();
    lVar3 = plVar6[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar10 = *plVar6;
      lVar14 = 0;
      do {
        lVar12 = param_1[0x26];
        plVar6 = (longlong *)param_1[0x27];
        lVar13 = (longlong)*(int *)(*(longlong *)(lVar10 + lVar14) + 0x44);
        lVar8 = (**(code **)(*plVar6 + 0x10))();
        iVar1 = *(int *)(lVar12 + 0x18 + lVar13);
        if (iVar1 < 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = 0;
          if (iVar1 < *(int *)(lVar8 + 8)) {
            plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6);
            lVar9 = (longlong)*(int *)(lVar12 + 0x18 + lVar13) * 0x38 + *plVar6;
          }
        }
        *(longlong *)(lVar12 + 0x38 + lVar13) = lVar9;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar14);
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x48))();
    lVar3 = plVar6[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar10 = *plVar6;
      lVar14 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar10 + lVar14) + 0x44);
        lVar12 = param_1[0x26];
        iVar2 = (int)param_1[0xef];
        *(uint *)(param_1 + 0xef) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x77c) < iVar2 + 1U) {
          FUN_140c4a4dc(local_68,iVar2);
        }
        *(longlong *)(*local_68 + (longlong)iVar2 * 8) = iVar1 + lVar12;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar14);
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x150))();
    lVar3 = plVar6[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar10 = *plVar6;
      lVar14 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar10 + lVar14) + 0x44);
        lVar12 = param_1[0x26];
        iVar2 = (int)param_1[0x110];
        *(uint *)(param_1 + 0x110) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x884) < iVar2 + 1U) {
          FUN_140c4a4dc(local_70,iVar2);
        }
        *(longlong *)(*local_70 + (longlong)iVar2 * 8) = iVar1 + lVar12;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar14);
    }
    plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x50))();
    plVar6 = local_60;
    lVar3 = plVar7[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar10 = *plVar7;
      lVar14 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar10 + lVar14) + 0x44);
        lVar12 = param_1[0x26];
        iVar2 = (int)param_1[0xf3];
        *(uint *)(param_1 + 0xf3) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x79c) < iVar2 + 1U) {
          FUN_140c4a4dc(plVar6,iVar2);
        }
        *(longlong *)(*plVar6 + (longlong)iVar2 * 8) = iVar1 + lVar12;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar14);
    }
    plVar7 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x158))();
    plVar6 = local_78;
    lVar3 = plVar7[1];
    if ((longlong)(int)lVar3 != 0) {
      lVar10 = *plVar7;
      lVar14 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar10 + lVar14) + 0x44);
        lVar12 = param_1[0x26];
        iVar2 = (int)param_1[0x114];
        *(uint *)(param_1 + 0x114) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0x8a4) < iVar2 + 1U) {
          FUN_140c4a4dc(plVar6,iVar2);
        }
        *(longlong *)(*plVar6 + (longlong)iVar2 * 8) = iVar1 + lVar12;
        lVar14 = lVar14 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar14);
    }
    plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x80))();
    lVar10 = DAT_14cacc360;
    lVar3 = DAT_14cacc358;
    if ((longlong)(int)plVar6[1] != 0) {
      plVar7 = (longlong *)*plVar6;
      plVar6 = plVar7 + (longlong)(int)plVar6[1] * 0xf;
      do {
        if ((*plVar7 == lVar10) && (0 < (int)*(uint *)(plVar7 + 4))) {
          uVar11 = 0;
          do {
            if ((*(longlong *)(plVar7[3] + uVar11 * 8) == lVar3) &&
               (lVar14 = *(longlong *)(plVar7[8] + uVar11 * 8), lVar14 != 0)) {
              param_1[0x2f] = (longlong)*(int *)(lVar14 + 0x44) + param_1[0x26];
              break;
            }
            uVar11 = uVar11 + 1;
          } while (*(uint *)(plVar7 + 4) != uVar11);
        }
        plVar7 = plVar7 + 0xf;
      } while (plVar7 != plVar6);
    }
    plVar6 = local_60;
    plVar7 = local_78;
    if ((longlong *)param_1[0x27] != (longlong *)0x0) {
      lVar3 = param_1[0x26];
      plVar6 = (longlong *)(**(code **)(*(longlong *)param_1[0x27] + 0x60))();
      lVar10 = plVar6[1];
      if ((longlong)(int)lVar10 != 0) {
        lVar14 = *plVar6;
        lVar12 = 0;
        do {
          lVar8 = (longlong)*(int *)(*(longlong *)(lVar14 + lVar12) + 0x44);
          (**(code **)(*(longlong *)(param_1[0x26] + lVar8) + 0xa0))
                    (param_1[0x26] + lVar8,param_1,lVar3);
          lVar12 = lVar12 + 8;
        } while ((longlong)(int)lVar10 * 8 != lVar12);
      }
      goto LAB_140c4a181;
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x48))(param_1,&local_58);
  lVar3 = local_58;
  lVar10 = (longlong)(int)uStack_50;
  if (lVar10 != 0) {
    lVar14 = 0;
    local_78 = plVar7;
    do {
      plVar7 = *(longlong **)(lVar3 + lVar14);
      if (plVar7 != (longlong *)0x0) {
        cVar5 = (**(code **)(*plVar7 + 0x78))(plVar7);
        if (cVar5 != '\0') {
          (**(code **)(*plVar7 + 0xa0))(plVar7,param_1,param_1[0x26]);
        }
        cVar5 = (**(code **)(*plVar7 + 0x48))(plVar7);
        if (cVar5 != '\0') {
          iVar1 = (int)param_1[0xef];
          *(uint *)(param_1 + 0xef) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x77c) < iVar1 + 1U) {
            FUN_140c4a4dc(local_68,iVar1);
          }
          *(longlong **)(*local_68 + (longlong)iVar1 * 8) = plVar7;
        }
        cVar5 = (**(code **)(*plVar7 + 200))(plVar7);
        if (cVar5 != '\0') {
          iVar1 = (int)param_1[0x110];
          *(uint *)(param_1 + 0x110) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x884) < iVar1 + 1U) {
            FUN_140c4a4dc(local_70,iVar1);
          }
          *(longlong **)(*local_70 + (longlong)iVar1 * 8) = plVar7;
        }
        cVar5 = (**(code **)(*plVar7 + 0x58))(plVar7);
        if (cVar5 != '\0') {
          iVar1 = (int)param_1[0xf3];
          *(uint *)(param_1 + 0xf3) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x79c) < iVar1 + 1U) {
            FUN_140c4a4dc(plVar6,iVar1);
          }
          *(longlong **)(*plVar6 + (longlong)iVar1 * 8) = plVar7;
        }
        cVar5 = (**(code **)(*plVar7 + 0xe0))(plVar7);
        if (cVar5 != '\0') {
          iVar1 = (int)param_1[0x114];
          *(uint *)(param_1 + 0x114) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0x8a4) < iVar1 + 1U) {
            FUN_140c4a4dc(local_78,iVar1);
          }
          *(longlong **)(*local_78 + (longlong)iVar1 * 8) = plVar7;
        }
      }
      lVar14 = lVar14 + 8;
    } while (lVar10 * 8 != lVar14);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
LAB_140c4a181:
  if (param_2 == '\0') {
    FUN_140c4a63e(param_1,param_1[0x2e]);
    bVar4 = *(byte *)((longlong)param_1 + 0x7e1);
  }
  else {
    bVar4 = *(byte *)((longlong)param_1 + 0x7e1) | 4;
  }
  *(byte *)((longlong)param_1 + 0x7e1) = bVar4 | 8;
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4a4dc FUN_140c4a4dc body=353 status=ok
// SIG undefined FUN_140c4a4dc(void)

void FUN_140c4a4dc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140c4a561;
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
LAB_140c4a561:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140c4a63e FUN_140c4a63e body=340 status=ok
// SIG undefined FUN_140c4a63e(void)

void FUN_140c4a63e(longlong param_1,longlong *param_2)

{
  short sVar1;
  short sVar2;
  undefined1 auStack_ca8 [32];
  longlong local_c88;
  undefined1 *local_c80;
  undefined1 local_c78;
  undefined8 local_c74;
  undefined1 local_c68 [256];
  undefined8 local_b68;
  undefined8 local_b60;
  undefined8 local_b50;
  undefined4 local_b48;
  undefined4 uStack_b44;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  undefined8 local_b30;
  undefined4 local_b28;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_ca8;
  if (param_2 != (longlong *)0x0) {
    local_c80 = local_c68;
    local_b68 = 0;
    local_b60 = 0x400000000;
    local_b50 = 0;
    local_b48 = 0;
    uStack_b44 = 0x20;
    uStack_b40 = 0xffffffff;
    uStack_b3c = 0;
    local_b30 = 0;
    local_b28 = 0;
    local_220 = 0;
    local_218 = 0x800000000;
    local_208 = 0;
    local_200 = 0;
    uStack_1fc = 0x20;
    uStack_1f8 = 0xffffffff;
    uStack_1f4 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_50 = 0;
    local_48 = 0x400000000;
    local_38 = 0;
    local_30 = 0;
    uStack_2c = 0x20;
    uStack_28 = 0xffffffff;
    uStack_24 = 0;
    local_18 = 0;
    local_10 = 0;
    local_c78 = 1;
    local_c74 = 0xffffffffffffffff;
    if (*(longlong **)(param_1 + 0x170) == param_2) {
      sVar1 = (short)*(undefined4 *)(param_1 + 0x5c8);
      sVar2 = sVar1 + 1;
      *(short *)(param_1 + 0x5c8) = sVar2;
      *(undefined8 *)(param_1 + 0x5c0) = DAT_14c872be0;
      if (sVar2 == -1) {
        *(short *)(param_1 + 0x5c8) = sVar1 + 2;
      }
    }
    local_c88 = param_1;
    (**(code **)(*param_2 + 0x10))(param_2,&local_c88);
    FUN_144adfe88(local_c68);
  }
  if ((local_8 ^ (ulonglong)auStack_ca8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4a794 FUN_140c4a794 body=83 status=ok
// SIG undefined FUN_140c4a794(void)

void FUN_140c4a794(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((char)param_2 != '\0') {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      uVar2 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
        FUN_140c4a7e8(uVar2,param_2,1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140c4a7e8 FUN_140c4a7e8 body=135 status=ok
// SIG undefined FUN_140c4a7e8(void)

void FUN_140c4a7e8(undefined8 param_1,undefined1 param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  undefined1 *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = &local_59;
  local_48 = (undefined ***)0x0;
  local_38 = &PTR_LAB_14b432bb0;
  local_58[0] = &LAB_143e53d88;
  local_59 = param_2;
  FUN_140671824(param_1,local_58);
  if (local_58[0] != (undefined1 *)0x0) {
    pppuVar1 = local_48;
    if (local_48 == (undefined ***)0x0) {
      pppuVar1 = &local_38;
    }
    (*(code *)(*pppuVar1)[2])();
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4a87c FUN_140c4a87c body=959 status=ok
// SIG undefined FUN_140c4a87c(void)

undefined8 * FUN_140c4a87c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c4ada0();
  *param_1 = &PTR_FUN_14b7dc580;
  param_1[0x72] = &PTR_FUN_14b7dcc70;
  param_1[0x73] = &PTR_FUN_14b7dcce0;
  param_1[0x74] = &PTR_FUN_14b7dcd50;
  param_1[0x75] = &PTR_FUN_14b7dcd80;
  param_1[0x76] = &PTR_FUN_14b7dcdb0;
  param_1[0x77] = &PTR_FUN_14b7dcde0;
  param_1[0x78] = &PTR_FUN_14b7dce20;
  param_1[0x79] = &PTR_FUN_14b7dce40;
  param_1[0x7a] = &PTR_FUN_14b7dce70;
  param_1[0x7b] = &PTR_FUN_14b7dcf40;
  param_1[0x7c] = &PTR_FUN_14b7dcf90;
  param_1[0x7d] = &PTR_FUN_14b7dd050;
  param_1[0x7e] = &PTR_FUN_14b7dd070;
  param_1[0x7f] = &PTR_FUN_14b7dd0f0;
  param_1[0x80] = &PTR_FUN_14b7dd110;
  param_1[0x81] = &PTR_FUN_14b7dd120;
  param_1[0x82] = &PTR_FUN_14b7dd160;
  param_1[0x83] = &PTR_FUN_14b7dd1d0;
  param_1[0x84] = &PTR_FUN_14b7dd200;
  param_1[0x85] = &PTR_FUN_14b7dd2a0;
  param_1[0x86] = &PTR_FUN_14b7dd2c0;
  param_1[0x87] = &PTR_FUN_14b7dd2e0;
  param_1[0x2a7] = &PTR_FUN_14b7dd300;
  param_1[0x2a8] = &PTR_FUN_14b7dd340;
  param_1[0x2a9] = &PTR_FUN_14b7dd360;
  param_1[0x2aa] = &PTR_FUN_14b7dd400;
  param_1[0x2ab] = &PTR_FUN_14b7dd430;
  *(undefined4 *)(param_1 + 0x2ac) = 0x3f800000;
  param_1[0x2ad] = 0;
  param_1[0x2b0] = 0;
  param_1[0x2b1] = 0x400000000;
  param_1[0x2c2] = 0;
  *(undefined4 *)(param_1 + 0x2c3) = 0;
  param_1[0x2be] = 0;
  param_1[0x2bf] = 0;
  param_1[700] = 0;
  param_1[0x2bd] = 0;
  param_1[0x2ba] = 0;
  param_1[699] = 0;
  param_1[0x2b8] = 0;
  param_1[0x2b9] = 0;
  param_1[0x2b6] = 0;
  param_1[0x2b7] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b2] = 0;
  param_1[0x2b3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x161c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1624) = 0;
  param_1[0x2c6] = 0;
  *(undefined4 *)(param_1 + 0x2c7) = 0;
  param_1[0x2ca] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2c9] = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 1;
  param_1[0x2d3] = 0;
  param_1[0x2d4] = 0;
  param_1[0x2d1] = 0;
  param_1[0x2d2] = 0;
  param_1[0x2cf] = 0;
  param_1[0x2d0] = 0;
  param_1[0x2cd] = 0;
  param_1[0x2ce] = 0;
  *(undefined4 *)(param_1 + 0x2d5) = 2;
  *(undefined4 *)((longlong)param_1 + 0x16bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16b4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 2;
  *(undefined4 *)((longlong)param_1 + 0x16d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16cc) = 0;
  *(undefined4 *)(param_1 + 0x2db) = 2;
  *(undefined4 *)((longlong)param_1 + 0x16fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16e4) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 2;
  *(undefined1 *)(param_1 + 0x2e6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1722) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1714) = 0;
  *(undefined8 *)((longlong)param_1 + 0x171c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1704) = 0;
  *(undefined8 *)((longlong)param_1 + 0x170c) = 0;
  *(undefined1 *)(param_1 + 0x2e7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1734) = 0;
  param_1[0x2ea] = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  uVar1 = FUN_140c4acba();
  param_1[0x2eb] = &PTR_FUN_14aac8f28;
  param_1[0x2f0] = 0;
  *(undefined4 *)(param_1 + 0x2f1) = 0;
  param_1[0x2ec] = 0;
  param_1[0x2ed] = 0;
  *(undefined8 *)((longlong)param_1 + 0x178c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1794) = 0;
  param_1[0x2f4] = 0;
  *(undefined4 *)(param_1 + 0x2f5) = 0;
  param_1[0x2fa] = 0;
  *(undefined4 *)(param_1 + 0x2fb) = 0;
  param_1[0x2f6] = 0;
  param_1[0x2f7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x17dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x17e4) = 0;
  param_1[0x2fe] = 0;
  *(undefined4 *)(param_1 + 0x2ff) = 0;
  param_1[0x300] = uVar1;
  param_1[0x301] = 0;
  *(undefined2 *)(param_1 + 0x302) = 0;
  param_1[0x303] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x304) = 0;
  FUN_1405bceb4(param_1 + 0x303);
  param_1[0x2eb] = &PTR_FUN_14b7dd470;
  param_1[0x303] = &PTR_LAB_14b7dd480;
  *(undefined1 *)(param_1 + 0x305) = 0;
  FUN_140c4ac3c(param_1 + 0x306);
  return param_1;
}



// FUNCTION 140c4ac3c FUN_140c4ac3c body=126 status=ok
// SIG undefined FUN_140c4ac3c(void)

undefined8 * FUN_140c4ac3c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b695510;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  FUN_14020a6cc(param_1 + 2,1);
  *(undefined4 *)(param_1 + 6) = 0x3f800000;
  FUN_14020a6cc(param_1 + 5,1);
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x1c,1);
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3f800000;
  FUN_14020a6cc((longlong)param_1 + 0x34,1);
  return param_1;
}



// FUNCTION 140c4acba FUN_140c4acba body=228 status=ok
// SIG undefined FUN_140c4acba(void)

longlong FUN_140c4acba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbae678 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1465c526e;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_148c4039d;
    local_40 = &LAB_1459a6791;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/OakGame",L"OakProjectileSubsystem",&DAT_14cbae678,&DAT_148c4039c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbae678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4ada0 FUN_140c4ada0 body=2410 status=ok
// SIG undefined FUN_140c4ada0(void)

undefined8 * FUN_140c4ada0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b3affe0;
  param_1[0x72] = &PTR_FUN_14b3b06c0;
  param_1[0x73] = &PTR_FUN_14b3b0730;
  param_1[0x74] = &PTR_FUN_14b3b07a0;
  param_1[0x75] = &PTR_FUN_14b3b07d0;
  param_1[0x76] = &PTR_FUN_14b3b0800;
  param_1[0x77] = &PTR_FUN_14b3b0830;
  param_1[0x78] = &PTR_FUN_14b3b0870;
  param_1[0x79] = &PTR_FUN_14b3b0890;
  param_1[0x7a] = &PTR_FUN_14b3b08c0;
  param_1[0x7b] = &PTR_FUN_14b3b0990;
  param_1[0x7c] = &PTR_FUN_14b3b09e0;
  param_1[0x7d] = &PTR_FUN_14b3b0aa0;
  param_1[0x7e] = &PTR_FUN_14b3b0ac0;
  param_1[0x7f] = &PTR_FUN_14b3b0b40;
  param_1[0x80] = &PTR_FUN_14b3b0b60;
  param_1[0x81] = &PTR_FUN_14b3b0b70;
  param_1[0x82] = &PTR_FUN_14b3b0bb0;
  param_1[0x83] = &PTR_FUN_14b3b0c20;
  param_1[0x84] = &PTR_FUN_14b3b0c50;
  param_1[0x85] = &PTR_FUN_14b3b0cf0;
  param_1[0x86] = &PTR_FUN_14b3b0d10;
  param_1[0x87] = &PTR_FUN_14b3b0d30;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 2;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x46c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x47c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x484) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x494) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x504) = 0xffffffff00000000;
  *(undefined1 *)((longlong)param_1 + 0x50c) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 1;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xb1) = 2;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x58c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x594) = 0;
  *(undefined8 *)((longlong)param_1 + 0x59c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x624) = 0;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x655) = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 2;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x697) = 0;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xda] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xaa] = &PTR_FUN_14b3b10b0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 2;
  *(undefined8 *)((longlong)param_1 + 0x7d3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7f1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e4) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7f9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x7fb) = 0;
  param_1[0x104] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  FUN_140650534(param_1 + 0x105);
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined8 *)((longlong)param_1 + 0x929) = 0;
  *(undefined8 *)((longlong)param_1 + 0x931) = 0;
  FUN_1406524d8(param_1 + 0x128);
  param_1[0x161] = 0;
  param_1[0x162] = 0;
  *(undefined4 *)(param_1 + 0x163) = 2;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb24) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb2c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb34) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb39) = 0;
  *(undefined4 *)(param_1 + 0x169) = 1;
  param_1[0x16a] = &PTR_FUN_14affd590;
  *(undefined4 *)(param_1 + 0x16b) = 1;
  param_1[0x16c] = 0;
  *(undefined4 *)(param_1 + 0x16d) = 0xf00d1e03;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  param_1[0x171] = 0;
  param_1[0x172] = 0;
  param_1[0x173] = 0;
  *(undefined4 *)(param_1 + 0x174) = 2;
  param_1[0x176] = 0;
  param_1[0x177] = 0;
  *(undefined8 *)((longlong)param_1 + 0xba4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbac) = 0;
  *(undefined2 *)(param_1 + 0x177) = 0xffff;
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x178] = 0;
  param_1[0x179] = 0;
  *(undefined2 *)(param_1 + 0x17a) = 0xffff;
  *(undefined4 *)((longlong)param_1 + 0xbdf) = 0;
  *(undefined1 *)((longlong)param_1 + 0xbe3) = 1;
  param_1[0x18a] = 0;
  param_1[0x18b] = 0;
  param_1[0x18c] = 0;
  param_1[0x18d] = 0;
  param_1[0x18e] = 0;
  param_1[399] = 0;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x195] = 0;
  param_1[0x196] = 0;
  param_1[0x197] = 0;
  param_1[0x17d] = 0;
  param_1[0x17e] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x198) = 2;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcd4) = 0x200000000;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  *(undefined8 *)((longlong)param_1 + 0xcec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xce4) = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0x3002;
  memset(param_1 + 0x1a2,0,0xfa);
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c6] = 0;
  param_1[0x1c7] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe56) = 0;
  param_1[0x1cb] = 0;
  param_1[0x1cc] = 0;
  *(undefined4 *)(param_1 + 0x1cd) = 0x3002;
  param_1[0x1ce] = 0;
  param_1[0x1d5] = 0;
  param_1[0x1d6] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0x1d8] = &DAT_14cb769e8;
  param_1[0x1d9] = 0;
  param_1[0x1da] = 0;
  param_1[0x1d7] = &PTR_FUN_14b0394b0;
  *(undefined4 *)((longlong)param_1 + 0xedc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xee4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xeec) = 0x3f800000;
  param_1[0x1de] = 0;
  param_1[0x1df] = 0;
  param_1[0x1e0] = 0xffffffffffffffff;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  *(undefined4 *)(param_1 + 0x1e6) = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e2] = 0;
  *(undefined4 *)(param_1 + 0x1e3) = 0;
  *(undefined4 *)(param_1 + 0x1e9) = 0x4fc71eb4;
  param_1[0x1ed] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1ee) = 0x800000;
  param_1[0x1f6] = 0;
  *(undefined1 *)(param_1 + 0x1fa) = 0;
  *(undefined1 *)(param_1 + 0x1fb) = 0;
  *(undefined1 *)(param_1 + 0x1f5) = 0;
  param_1[499] = 0;
  param_1[500] = 0;
  param_1[0x1f1] = 0;
  param_1[0x1f2] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1f0] = 0;
  param_1[0x1fc] = 0;
  param_1[0x1fd] = 0;
  param_1[0x1fe] = 0;
  param_1[0x1ff] = 0;
  param_1[0x200] = 0;
  param_1[0x201] = 0;
  *(undefined4 *)(param_1 + 0x202) = 0x3f800000;
  memset(param_1 + 0x203,0,0x100);
  *(undefined4 *)(param_1 + 0x21d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x101c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x10bc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x223) = 0;
  param_1[0x229] = 0;
  *(undefined1 *)(param_1 + 0x22a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
  param_1[0x224] = 0;
  param_1[0x225] = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1154) = 0x3f80000000800000;
  *(undefined1 *)(param_1 + 0x22c) = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0x22d] = DAT_14c8464e0;
  param_1[0x22e] = uVar2;
  param_1[0x22f] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 0x230) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1182) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1184) = 0;
  *(undefined1 *)(param_1 + 0x239) = 0;
  param_1[0x237] = 0;
  param_1[0x238] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  param_1[0x233] = 0;
  param_1[0x234] = 0;
  param_1[0x231] = 0;
  param_1[0x232] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x120c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x121c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x122c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1234) = 0;
  param_1[0x247] = 0;
  param_1[0x248] = 0;
  *(undefined4 *)(param_1 + 0x249) = 2;
  *(undefined8 *)((longlong)param_1 + 0x124c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1254) = 0;
  *(undefined4 *)((longlong)param_1 + 0x125c) = 0;
  param_1[0x24c] = 2;
  param_1[0x24e] = 0;
  param_1[0x24f] = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1284) = 0;
  *(undefined4 *)(param_1 + 0x251) = 0;
  *(undefined4 *)((longlong)param_1 + 0x128c) = 0x3ff00000;
  param_1[0x252] = 0;
  param_1[0x253] = 0;
  param_1[0x254] = 0;
  param_1[0x255] = 0;
  *(undefined4 *)(param_1 + 0x256) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12b4) = 0x3ff00000;
  *(undefined4 *)(param_1 + 599) = 0;
  *(undefined4 *)((longlong)param_1 + 0x12bc) = 0x3ff00000;
  param_1[600] = 0x3ff0000000000000;
  param_1[0x259] = 0;
  param_1[0x25a] = 0;
  param_1[0x25c] = 0;
  param_1[0x262] = 0;
  param_1[0x263] = 0;
  param_1[0x264] = 0;
  param_1[0x265] = 0;
  param_1[0x266] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = 0;
  param_1[0x269] = 0;
  param_1[0x26a] = 0;
  param_1[0x26b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x135c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1364) = 0;
  *(undefined1 *)((longlong)param_1 + 0x136c) = 1;
  *(undefined8 *)((longlong)param_1 + 0x139a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13a2) = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x270] = 0;
  param_1[0x271] = 0;
  param_1[0x26e] = 0;
  param_1[0x26f] = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c4) = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x276] = 0;
  *(undefined8 *)((longlong)param_1 + 0x13b7) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13e9) = 0;
  param_1[0x27b] = 0;
  param_1[0x27c] = 0;
  param_1[0x279] = 0;
  param_1[0x27a] = 0;
  *(undefined4 *)(param_1 + 0x281) = 2;
  *(undefined8 *)((longlong)param_1 + 0x140c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x141c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x1431) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x142c) = 0;
  param_1[0x292] = 0;
  param_1[0x290] = 0;
  param_1[0x291] = 0;
  param_1[0x28e] = 0;
  param_1[0x28f] = 0;
  param_1[0x28c] = 0;
  param_1[0x28d] = 0;
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  param_1[0x288] = 0;
  param_1[0x289] = 0;
  FUN_140c4b70a(param_1 + 0x293);
  param_1[0x2a5] = 0;
  param_1[0x2a6] = 0;
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (param_1[0x180] == 0)) {
    plVar1 = param_1 + 0x17e;
    param_1[0x181] = &DAT_14cb8a418;
    param_1[0x180] = param_1;
    lVar4 = DAT_14cb8a418;
    while( true ) {
      param_1[0x17e] = lVar4;
      LOCK();
      lVar3 = *(longlong *)param_1[0x181];
      bVar5 = lVar4 == lVar3;
      if (bVar5) {
        *(longlong *)param_1[0x181] = (longlong)plVar1;
        lVar3 = lVar4;
      }
      UNLOCK();
      if (bVar5) break;
      param_1[0x17e] = lVar3;
      lVar4 = *(longlong *)param_1[0x181];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  *(byte *)(param_1 + 0x228) = *(byte *)(param_1 + 0x228) & 0xfe;
  *(byte *)((longlong)param_1 + 0xed9) = *(byte *)((longlong)param_1 + 0xed9) & 0xfe;
  *(byte *)(param_1 + 0x1dc) = *(byte *)(param_1 + 0x1dc) & 0xf7;
  *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) & 0xfc;
  *(byte *)((longlong)param_1 + 0x1151) = *(byte *)((longlong)param_1 + 0x1151) & 0xe0;
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar4 = FUN_1447210f0(param_1), lVar4 != 0)) &&
     (*(char *)(lVar4 + 0x152) != '\x02')) {
    FUN_140c4b7f0(param_1 + 0x161,param_1 + 0x7d);
  }
  for (lVar4 = *param_2; (lVar4 != 0 && ((*(uint *)(lVar4 + 8) & 0x30) == 0));
      lVar4 = *(longlong *)(lVar4 + 0x20)) {
  }
  return param_1;
}



// FUNCTION 140c4b70a FUN_140c4b70a body=123 status=ok
// SIG undefined FUN_140c4b70a(void)

undefined1 * FUN_140c4b70a(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0x200000000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  FUN_140c4b786();
  FUN_1406089a0(param_1 + 0x28,DAT_14c9a7c98,1);
  return param_1;
}



// FUNCTION 140c4b786 FUN_140c4b786 body=106 status=ok
// SIG undefined FUN_140c4b786(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140c4b786(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a7ca0) {
    FUN_144b3d300(&DAT_14c9a7ca0);
    if (DAT_14c9a7ca0 == -1) {
      DAT_14c9a7c90 = 0;
      _DAT_14c9a7c98 = 0;
      atexit((_func_5014 *)&LAB_142b3fed5);
      _Init_thread_footer(&DAT_14c9a7ca0);
    }
  }
  return &DAT_14c9a7c90;
}



// FUNCTION 140c4b7f0 FUN_140c4b7f0 body=365 status=ok
// SIG undefined FUN_140c4b7f0(void)

void FUN_140c4b7f0(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong *plVar14;
  bool bVar15;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c4b9d0(&local_38);
  *(undefined4 *)(param_1 + 0x28) = local_38;
  *(undefined4 *)(param_1 + 0x2c) = uStack_34;
  *(undefined4 *)(param_1 + 0x30) = uStack_30;
  *(undefined4 *)(param_1 + 0x34) = uStack_2c;
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar11 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140c4b87a;
    puVar12 = (undefined8 *)
              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar12 != (undefined8 *)0x0) &&
       ((*(int *)(puVar12 + 2) == *(int *)(param_1 + 0x2c) &&
        ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) {
      uVar11 = *puVar12;
      goto LAB_140c4b87a;
    }
  }
  uVar11 = 0;
LAB_140c4b87a:
  FUN_1447210f0(uVar11);
  FUN_14060a688(&local_38);
  plVar14 = (longlong *)CONCAT44(uStack_2c,uStack_30);
  if (plVar14 != (longlong *)0x0) {
    iVar10 = (int)plVar14[1];
    do {
      if (iVar10 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar9 = (int)plVar14[1];
      bVar15 = iVar10 == iVar9;
      if (bVar15) {
        *(int *)(plVar14 + 1) = iVar10 + 1;
        iVar9 = iVar10;
      }
      iVar10 = iVar9;
      UNLOCK();
    } while (!bVar15);
    LOCK();
    piVar1 = (int *)((longlong)CONCAT44(uStack_2c,uStack_30) + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*(longlong *)CONCAT44(uStack_2c,uStack_30) + 0x10))();
    }
    if (plVar14 != (longlong *)0x0) {
      if (CONCAT44(uStack_34,local_38) != 0) {
        FUN_140c4b95e();
      }
      LOCK();
      plVar2 = plVar14 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar10 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x18);
    lVar13 = 0;
    do {
      lVar5 = *(longlong *)(lVar4 + lVar13);
      if (lVar5 != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x2c);
        uVar7 = *(undefined4 *)(param_1 + 0x30);
        uVar8 = *(undefined4 *)(param_1 + 0x34);
        *(uint *)(lVar5 + 0xf0) = *(uint *)(param_1 + 0x28);
        *(undefined4 *)(lVar5 + 0xf4) = uVar6;
        *(undefined4 *)(lVar5 + 0xf8) = uVar7;
        *(undefined4 *)(lVar5 + 0xfc) = uVar8;
      }
      lVar13 = lVar13 + 0x10;
    } while ((longlong)iVar10 * 0x10 != lVar13);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4b95e FUN_140c4b95e body=112 status=ok
// SIG undefined FUN_140c4b95e(void)

void FUN_140c4b95e(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140c4b9d0(&local_30);
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
    FUN_14578930c((longlong *)(param_1 + 0x30),iVar2);
  }
  puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x10);
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4b9d0 FUN_140c4b9d0 body=204 status=ok
// SIG undefined FUN_140c4b9d0(void)

uint * FUN_140c4b9d0(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
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
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 140c4bb1c FUN_140c4bb1c body=69 status=ok
// SIG undefined FUN_140c4bb1c(void)

void FUN_140c4bb1c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 5) & 4) == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) | 4;
    if ((longlong)(int)param_1[1] != 0) {
      lVar1 = *param_1;
      lVar2 = (longlong)(int)param_1[1] * 0x90;
      do {
        FUN_140c4bb62(lVar1);
        lVar1 = lVar1 + 0x90;
        lVar2 = lVar2 + -0x90;
      } while (lVar2 != 0);
    }
  }
  return;
}



// FUNCTION 140c4bb62 FUN_140c4bb62 body=106 status=ok
// SIG undefined FUN_140c4bb62(void)

void FUN_140c4bb62(longlong param_1)

{
  if ((*(byte *)(param_1 + 0x88) & 0x20) == 0) {
    *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) | 0x20;
    FUN_1448a8284(param_1 + 8);
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_1407d9874(param_1 + 0x20,0);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (*(int *)(param_1 + 0x3c) != 0) {
      FUN_1407d9874(param_1 + 0x30,0);
    }
    FUN_140e0ec0a(param_1);
    return;
  }
  return;
}



// FUNCTION 140c4bbcc FUN_140c4bbcc body=206 status=ok
// SIG undefined FUN_140c4bbcc(void)

undefined8 * FUN_140c4bbcc(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0xe0);
  *puVar1 = 0;
  *(undefined1 *)((longlong)puVar1 + 0xc) = 0x80;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  memset(puVar1 + 2,0,0x88);
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0xbc) = 0;
  puVar1[0x19] = 0;
  *(undefined4 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0;
  *param_2 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_FUN_14a8bce20;
  puVar2[2] = puVar1;
  param_2[1] = puVar2;
  FUN_140c4bc9a(puVar1,param_3,param_1,1);
  return param_2;
}



// FUNCTION 140c4bc9a FUN_140c4bc9a body=2506 status=ok
// SIG undefined FUN_140c4bc9a(void)

void FUN_140c4bc9a(undefined **param_1,undefined *param_2,undefined *param_3,char param_4)

{
  int *piVar1;
  undefined ***pppuVar2;
  longlong *plVar3;
  undefined *puVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  longlong lVar8;
  byte bVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  undefined *puVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  undefined ***pppuVar19;
  longlong lVar20;
  undefined **ppuVar21;
  bool bVar22;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 *local_230;
  undefined4 local_228;
  undefined *local_218;
  longlong local_210;
  undefined8 *local_208;
  ulonglong local_200;
  undefined ***local_1f8;
  longlong *local_1f0;
  undefined8 local_1e8;
  longlong *plStack_1e0;
  undefined *local_1d0;
  undefined1 *local_1c8;
  undefined ***local_1c0;
  undefined **local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  undefined **local_198;
  longlong *local_190;
  longlong *local_140;
  longlong local_120;
  longlong local_108;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined5 uStack_b8;
  undefined3 uStack_b3;
  undefined5 uStack_b0;
  undefined8 uStack_ab;
  byte local_a3;
  undefined1 local_a2;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_80 [16];
  longlong local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  param_1[9] = param_2;
  if (param_2 == (undefined *)0x0) {
    param_1[0x1b] = (undefined *)0x0;
    goto LAB_140c4c4e9;
  }
  uVar12 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_1 + 0x1b) = uVar12;
  if ((int)uVar12 < DAT_14c9647dc) {
    lVar20 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
  }
  else {
    lVar20 = 0;
  }
  iVar11 = *(int *)(lVar20 + 0x10);
  if (*(int *)(lVar20 + 0x10) == 0) {
    LOCK();
    iVar11 = DAT_14c964868 + 1;
    UNLOCK();
    iVar16 = DAT_14c964868 + 1;
    bVar22 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar11;
    if (bVar22) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar16);
    }
    LOCK();
    iVar11 = *(int *)(lVar20 + 0x10);
    bVar22 = iVar11 == 0;
    if (bVar22) {
      *(int *)(lVar20 + 0x10) = iVar16;
      iVar11 = 0;
    }
    UNLOCK();
    if (bVar22) {
      iVar11 = iVar16;
    }
  }
  *(int *)((longlong)param_1 + 0xdc) = iVar11;
  if ((param_1[9] == (undefined *)0x0) &&
     ((((iVar11 == 0 || (uVar12 = *(uint *)(param_1 + 0x1b), (int)uVar12 < 0)) ||
       (DAT_14c9647dc <= (int)uVar12)) ||
      (((plVar14 = (longlong *)
                   ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
        plVar14 == (longlong *)0x0 || ((int)plVar14[2] != iVar11)) ||
       (((*(uint *)(plVar14 + 1) & 0x10200000) != 0 || (*plVar14 == 0)))))))) goto LAB_140c4c4e9;
  puVar13 = *(undefined **)(param_2 + 0x10);
  if ((puVar13 != (undefined *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(puVar13);
  }
  param_1[8] = puVar13;
  param_1[10] = param_3;
  param_1[0xc] = (undefined *)0x0;
  *(byte *)((longlong)param_1 + 0xc) = *(byte *)((longlong)param_1 + 0xc) & 0xf5;
  puVar4 = param_1[6];
  param_1[6] = (undefined *)0x0;
  if (puVar4 != (undefined *)0x0) {
    FUN_140441e36(puVar4);
    FUN_1400020a8(puVar4);
    puVar13 = param_1[8];
    param_3 = param_1[10];
  }
  param_1[0xb] = (undefined *)0x0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_140b97432(*(undefined8 *)(param_3 + 0x58),&local_198,puVar13);
  plVar14 = local_190;
  pppuVar19 = (undefined ***)(param_1 + 4);
  if (pppuVar19 != &local_198) {
    param_1[4] = (undefined *)local_198;
    local_198 = (undefined **)0x0;
    plVar5 = (longlong *)param_1[5];
    if (local_190 != plVar5) {
      local_190 = (longlong *)0x0;
      param_1[5] = (undefined *)plVar14;
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar14 = plVar5 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
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
    }
  }
  plVar14 = local_190;
  if (local_190 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_190 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_190)(local_190);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_218 = param_2;
  if (param_4 != '\0') {
    puVar13 = param_1[9];
    if (puVar13 == (undefined *)0x0) {
      if (*(int *)((longlong)param_1 + 0xdc) == 0) {
LAB_140c4c54a:
        puVar13 = (undefined *)0x0;
      }
      else {
        uVar12 = *(uint *)(param_1 + 0x1b);
        puVar13 = (undefined *)0x0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          plVar14 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          if ((plVar14 == (longlong *)0x0) ||
             (((int)plVar14[2] != *(int *)((longlong)param_1 + 0xdc) ||
              ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140c4c54a;
          puVar13 = (undefined *)*plVar14;
        }
      }
    }
    local_218 = (undefined *)FUN_144938c96(puVar13);
    if (((local_218 == (undefined *)0x0) &&
        (plVar14 = (longlong *)param_1[8], local_218 = param_2, plVar14 != (longlong *)0x0)) &&
       (local_218 = (undefined *)plVar14[0x22], local_218 == (undefined *)0x0)) {
      (**(code **)(*plVar14 + 1000))(plVar14);
      local_218 = (undefined *)plVar14[0x22];
    }
  }
  puVar13 = param_1[9];
  if (puVar13 == (undefined *)0x0) {
    if (*(int *)((longlong)param_1 + 0xdc) == 0) {
LAB_140c4c63d:
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar12 = *(uint *)(param_1 + 0x1b);
      puVar13 = (undefined *)0x0;
      if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)((longlong)param_1 + 0xdc) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140c4c63d;
        puVar13 = (undefined *)*plVar14;
      }
    }
  }
  pppuVar2 = (undefined ***)(param_1 + 6);
  plVar14 = *(longlong **)(param_1[10] + 0x58);
  bVar9 = (**(code **)(*plVar14 + 0x3c0))(plVar14);
  if (bVar9 == 0) {
    ppuVar21 = *pppuVar19;
    if ((*(byte *)((longlong)plVar14 + 0x309) & 8) != 0) goto LAB_140c4bf77;
    local_1a8 = 0;
    plStack_1a0 = (longlong *)0x0;
    bVar22 = false;
  }
  else {
    ppuVar21 = *pppuVar19;
LAB_140c4bf77:
    FUN_1417e39fa(plVar14,&local_1a8,puVar13);
    bVar22 = true;
  }
  local_238 = (undefined8 *)
              CONCAT44(local_238._4_4_,
                       (uint)(bVar9 & (byte)((*(uint *)(param_1[10] + 0xa4) & 2) >> 1)));
  FUN_140a0283a(ppuVar21,&local_198,local_218,&local_1a8);
  if (pppuVar2 == &local_198) {
LAB_140c4c5d6:
    ppuVar6 = local_198;
    if (local_198 != (undefined **)0x0) {
      FUN_140441e36(local_198);
      FUN_1400020a8(ppuVar6);
    }
  }
  else {
    ppuVar6 = *pppuVar2;
    *pppuVar2 = local_198;
    local_198 = (undefined **)0x0;
    if (ppuVar6 != (undefined **)0x0) {
      FUN_140441e36(ppuVar6);
      FUN_1400020a8(ppuVar6);
      goto LAB_140c4c5d6;
    }
  }
  if (bVar22) {
    *(uint *)((longlong)param_1 + 0xc) =
         *(uint *)((longlong)param_1 + 0xc) & 0xffffffdf | (uint)(DAT_14c761498 != 0) << 5;
    lVar20 = *(longlong *)(param_1[6] + 8);
    if (lVar20 != 0) {
      if (ppuVar21[0xb] == (undefined *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = *(ushort *)(ppuVar21[0xb] + 8);
      }
      local_1f0 = (longlong *)(lVar20 + 0x490);
      FUN_140cf7064(local_1f0,uVar10);
      uVar12 = *(uint *)(param_1[10] + 0xa4);
      if ((uVar12 & 2) != 0) {
        FUN_140cf7064(lVar20 + 0x4a0,uVar10);
        FUN_140cf7064(lVar20 + 0x4b0,uVar10);
      }
      if (uVar10 != 0) {
        local_200 = (ulonglong)uVar10;
        lVar17 = 0;
        uVar18 = 0;
        local_210 = lVar20;
        local_1f8 = pppuVar19;
        do {
          FUN_144a679e2(&local_198,*(undefined8 *)(param_1[10] + 0x68),0x400);
          local_198 = &PTR_FUN_14a8a3730;
          local_d0 = 0;
          uStack_c8 = 0;
          local_c0 = 0;
          uStack_b8 = 0;
          uStack_b3 = 0;
          uStack_b0 = 0;
          uStack_ab = 0;
          local_a3 = local_a3 & 0xf8;
          local_a2 = 0;
          local_70 = 0;
          local_68 = 0;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_64 = 4;
          local_1d0 = (undefined *)plVar14[0x107];
          local_1c8 = local_80;
          local_1b8 = local_d8;
          local_1b0 = "SendPropertiesForRPC";
          local_d8 = &local_1d0;
          lVar20 = *local_1f0;
          puVar15 = (undefined8 *)(lVar20 + lVar17);
          *(undefined8 *)(lVar20 + lVar17) = 0;
          plVar5 = *(longlong **)(lVar20 + 8 + lVar17);
          local_1c0 = &local_198;
          if (plVar5 != (longlong *)0x0) {
            puVar15[1] = 0;
            LOCK();
            plVar3 = plVar5 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              local_208 = puVar15;
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              puVar15 = local_208;
              if (*piVar1 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
                puVar15 = local_208;
              }
            }
          }
          local_1e8 = 0;
          plStack_1e0 = (longlong *)0x0;
          local_228 = *(undefined4 *)(local_210 + 0x1c);
          local_230 = &local_1e8;
          local_238 = puVar15;
          FUN_1434b25a2(param_1,local_218,uVar18 & 0xffffffff,&local_198);
          if ((uVar12 & 2) != 0) {
            lVar20 = *(longlong *)(local_210 + 0x4a0);
            uVar7 = *puVar15;
            lVar8 = puVar15[1];
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            plVar5 = *(longlong **)(lVar20 + 8 + lVar17);
            *(undefined8 *)(lVar20 + lVar17) = uVar7;
            *(longlong *)(lVar20 + 8 + lVar17) = lVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar5 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
            lVar20 = *(longlong *)(local_210 + 0x4b0);
            uVar7 = *puVar15;
            lVar8 = puVar15[1];
            if (lVar8 != 0) {
              LOCK();
              *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
              UNLOCK();
            }
            plVar5 = *(longlong **)(lVar20 + 8 + lVar17);
            *(undefined8 *)(lVar20 + lVar17) = uVar7;
            *(longlong *)(lVar20 + 8 + lVar17) = lVar8;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar5 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
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
            plVar5 = plStack_1e0;
            if (plStack_1e0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_1e0 + 1;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)*plVar3 == 0) {
                (**(code **)*plStack_1e0)(plStack_1e0);
                LOCK();
                piVar1 = (int *)((longlong)plVar5 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                }
              }
            }
          }
          local_1c0[0x18] = local_1b8;
          local_198 = &PTR_FUN_14a8a3730;
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (local_90 != 0) {
            FUN_1400020a8();
          }
          if (local_a0 != 0) {
            FUN_1400020a8();
          }
          local_198 = &PTR_FUN_149e37560;
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          plVar5 = local_140;
          local_198 = &PTR__purecall_149e35f70;
          if (local_140 != (longlong *)0x0) {
            if (*local_140 != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(plVar5);
          }
          lVar20 = local_120;
          if (local_120 != 0) {
            if (*(longlong *)(local_120 + 0x40) != 0) {
              FUN_1400020a8();
            }
            FUN_1400020a8(lVar20);
          }
          uVar18 = uVar18 + 1;
          lVar17 = lVar17 + 0x10;
          pppuVar19 = local_1f8;
        } while (local_200 != uVar18);
      }
    }
  }
  plVar14 = plStack_1a0;
  if (plStack_1a0 != (longlong *)0x0) {
    LOCK();
    plVar5 = plStack_1a0 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plStack_1a0)(plStack_1a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  local_198 = param_1;
  FUN_14066d0c6(*(longlong *)(param_1[10] + 0x58) + 0x670,&local_1d0);
  if (DAT_14cad5528 == '\x01') {
    uVar12 = 0;
    if (DAT_14cad5510 != '\0') {
      bVar9 = *(byte *)(*pppuVar19 + 4);
      uVar12 = 0x40;
      if (((bVar9 & 0x10) == 0) && (*(int *)(*pppuVar19 + 6) != 0)) {
        uVar12 = (bVar9 & 4) << 4;
      }
    }
  }
  else {
    uVar12 = 0;
    if (DAT_14cad5510 != '\0') {
      puVar13 = (*pppuVar19)[4];
      if ((((((ulonglong)puVar13 & 0x10) != 0) || (((ulonglong)puVar13 & 0x20) != 0)) ||
          (*(int *)(*pppuVar19 + 6) == 0)) && ((*pppuVar2)[1] != (undefined *)0x0)) {
        uVar12 = (uint)(*(int *)((*pppuVar2)[1] + 0x498) == 0) << 6;
      }
    }
  }
  *(uint *)((longlong)param_1 + 0xc) = *(uint *)((longlong)param_1 + 0xc) & 0xffffffbf | uVar12;
LAB_140c4c4e9:
  if ((local_60 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4c666 FUN_140c4c666 body=368 status=ok
// SIG undefined FUN_140c4c666(void)

void FUN_140c4c666(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  longlong lVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  
  if (((*(byte *)(param_1 + 0x31) & 1) == 0) ||
     (lVar2 = **(longlong **)(param_1 + 0x1b0), lVar2 == 0)) {
    return;
  }
  iVar1 = *(int *)(lVar2 + 0x90);
  lVar14 = (longlong)iVar1;
  if (lVar14 != 0) {
    plVar4 = (longlong *)(lVar2 + 8);
    if (*(longlong **)(lVar2 + 0x88) != (longlong *)0x0) {
      plVar4 = *(longlong **)(lVar2 + 0x88);
    }
    lVar3 = *plVar4 - (longlong)*(int *)((longlong)plVar4 + 0x1c);
    if ((longlong)*(int *)((longlong)plVar4 + 0x1c) == 0) {
      lVar3 = 0;
    }
    iVar13 = 0;
    bVar12 = lVar3 == param_2;
    iVar7 = 0;
    do {
      lVar3 = (longlong)iVar7;
      iVar5 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar5 = iVar1;
      }
      piVar10 = (int *)((longlong)plVar4 + lVar3 * 0x20 + 0x3c);
      iVar8 = iVar7;
      lVar11 = lVar3;
      do {
        lVar11 = lVar11 + 1;
        iVar9 = iVar5;
        if (lVar14 <= lVar11) break;
        lVar6 = *(longlong *)(piVar10 + -7) - (longlong)*piVar10;
        if ((longlong)*piVar10 == 0) {
          lVar6 = 0;
        }
        iVar8 = iVar8 + 1;
        piVar10 = piVar10 + 8;
        iVar9 = iVar8;
      } while (bVar12 == (lVar6 == param_2));
      iVar5 = iVar9 - iVar7;
      if (bVar12 == false) {
        if (iVar13 != iVar7) {
          memmove(plVar4 + (longlong)iVar13 * 4,plVar4 + lVar3 * 4,(longlong)iVar5 << 5);
        }
        iVar13 = iVar13 + iVar5;
      }
      else {
        FUN_140a503f1(plVar4 + lVar3 * 4,iVar5);
      }
      bVar12 = (bool)(bVar12 ^ 1);
      iVar7 = iVar9;
    } while (lVar11 < lVar14);
    *(int *)(lVar2 + 0x90) = iVar13;
  }
  FUN_1400b7410(lVar2,param_1,0);
  return;
}



// FUNCTION 140c4c7e8 FUN_140c4c7e8 body=7070 status=ok
// SIG undefined FUN_140c4c7e8(void)

void FUN_140c4c7e8(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double *pdVar15;
  undefined8 uVar16;
  char *pcVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  byte *pbVar21;
  int iVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined ***pppuVar25;
  ulonglong *puVar26;
  undefined *puVar27;
  double *pdVar28;
  longlong lVar29;
  undefined8 *puVar30;
  byte bVar31;
  byte bVar32;
  int iVar33;
  ulonglong unaff_RBP;
  double *pdVar34;
  undefined7 uVar35;
  uint uVar36;
  byte *pbVar37;
  bool bVar38;
  float fVar39;
  float fVar40;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  undefined1 local_520;
  undefined1 local_518;
  ulonglong local_510;
  ulonglong local_508 [6];
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  undefined4 uStack_4d0;
  undefined8 uStack_4cc;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined4 local_490;
  undefined2 local_48c;
  undefined1 local_48a;
  undefined4 local_489;
  double local_480 [3];
  float local_468;
  float local_464;
  uint local_460;
  uint local_45c;
  char local_458;
  char local_457;
  undefined **local_454;
  uint local_44c;
  int local_448;
  longlong *local_440;
  undefined1 local_438 [48];
  longlong local_408;
  undefined8 local_3f8;
  double local_3f0;
  undefined ***pppuStack_3e8;
  double local_3e0;
  undefined **ppuStack_3d8;
  ulonglong *local_3d0;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined8 uStack_3bc;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined4 local_380;
  undefined2 uStack_37c;
  undefined1 uStack_37a;
  undefined1 uStack_379;
  undefined2 uStack_378;
  undefined1 uStack_376;
  uint local_368;
  uint uStack_364;
  undefined8 local_360;
  undefined8 local_358;
  double local_350;
  undefined **local_348;
  undefined4 local_340 [172];
  undefined8 local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_548;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
  local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
  if (((((*(longlong *)(param_1 + 0x148) == 0) ||
        (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
        local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
        *(longlong *)(param_1 + 0x140) == 0)) ||
       (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
       local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
       *(longlong *)(param_1 + 0x168) == 0)) ||
      ((local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
       local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
       *(longlong *)(param_1 + 0x170) == 0 ||
       (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
       local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
       *(longlong *)(param_1 + 0x178) == 0)))) ||
     (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
     local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
     *(longlong *)(param_1 + 0x180) == 0)) goto LAB_140c4ce88;
  iVar22 = *(int *)(param_1 + 0x1a8);
  local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
  local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
  if (((longlong)iVar22 == 0) ||
     (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
     local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
     *(char *)(param_1 + 0x199) != '\0')) goto LAB_140c4ce88;
  pdVar15 = *(double **)(param_1 + 0x1a0);
  if (iVar22 != 1) {
    lVar23 = (longlong)iVar22 * 0x88 + -0x88;
    pdVar34 = pdVar15;
    pdVar28 = pdVar15;
    do {
      pdVar15 = pdVar28 + 0x11;
      if (*(float *)((longlong)pdVar28 + 0xa4) < *(float *)((longlong)pdVar34 + 0x1c) ||
          *(float *)((longlong)pdVar28 + 0xa4) == *(float *)((longlong)pdVar34 + 0x1c)) {
        pdVar15 = pdVar34;
      }
      lVar23 = lVar23 + -0x88;
      pdVar34 = pdVar15;
      pdVar28 = pdVar28 + 0x11;
    } while (lVar23 != 0);
  }
  pdVar28 = pdVar15;
  pdVar34 = local_480;
  for (lVar23 = 9; lVar23 != 0; lVar23 = lVar23 + -1) {
    *pdVar34 = *pdVar28;
    pdVar28 = pdVar28 + 1;
    pdVar34 = pdVar34 + 1;
  }
  local_408 = 0;
  pdVar28 = pdVar15 + 9;
  if ((double *)pdVar15[0xf] != (double *)0x0) {
    pdVar28 = (double *)pdVar15[0xf];
  }
  FUN_1400709d4(local_438,pdVar28,*(undefined4 *)(pdVar15 + 0x10),0);
  FUN_140c4e387(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  if (*(int *)(param_1 + 0x1ac) != 0) {
    FUN_140c4e3bc();
  }
  local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
  local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
  if (0.0 < local_464) {
    if (*(longlong *)(param_1 + 0x178) == 0) {
      plVar11 = (longlong *)0x0;
    }
    else {
      plVar11 = *(longlong **)(param_1 + 0x180);
    }
    cVar5 = (**(code **)(*plVar11 + 0x40))();
    if (cVar5 == '\0') {
      plVar11 = (longlong *)FUN_140c4e6cc();
      if (plVar11 == (longlong *)0x0) {
        fVar39 = 0.0;
      }
      else {
        fVar39 = (float)(**(code **)(*plVar11 + 0x8d8))();
      }
      fVar40 = 1.0;
      if (((*(longlong *)(param_1 + 0x178) != 0) &&
          (*(longlong **)(param_1 + 0x180) != (longlong *)0x0)) &&
         (lVar23 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x10))(), lVar23 != 0)) {
        if (*(int *)(lVar23 + 0x40) < 1) {
          fVar40 = -1.0;
        }
        else {
          fVar40 = (float)FUN_1405583ce();
        }
      }
      lVar23 = FUN_140c4e3ec();
      if (*(byte *)(lVar23 + 0x30) < 4) {
        fVar40 = local_464 / fVar40;
        switch(*(byte *)(lVar23 + 0x30)) {
        case 0:
          uVar10 = rand();
          fVar39 = (float)(uVar10 & 0x7fff) / 32767.0;
          bVar31 = 3;
          if ((*(float *)(lVar23 + 0x34) * fVar40 <= fVar39) &&
             (bVar31 = 2, *(float *)(lVar23 + 0x38) * fVar40 <= fVar39)) {
            bVar31 = 0.0 < fVar40;
          }
          break;
        case 1:
          iVar22 = *(int *)(lVar23 + 0x50);
          if ((longlong)iVar22 == 0) goto LAB_140c4cb89;
          lVar23 = *(longlong *)(lVar23 + 0x48);
          lVar20 = (longlong)(iVar22 + -1) * 0x20 + lVar23;
          lVar13 = (longlong)iVar22 << 5;
          do {
            lVar29 = lVar23;
            if (fVar39 < *(float *)(lVar23 + 0x10)) break;
            lVar23 = lVar23 + 0x20;
            lVar13 = lVar13 + -0x20;
            lVar29 = lVar20;
          } while (lVar13 != 0);
          bVar31 = 3;
          if ((local_468 < *(float *)(lVar29 + 0x1c)) &&
             (bVar31 = 2, local_468 < *(float *)(lVar29 + 0x18))) {
            bVar31 = *(float *)(lVar29 + 0x14) <= local_468;
          }
          break;
        case 2:
          iVar22 = *(int *)(lVar23 + 0x50);
          if ((longlong)iVar22 == 0) {
            bVar31 = 0;
          }
          else {
            lVar13 = *(longlong *)(lVar23 + 0x48);
            lVar29 = (longlong)(iVar22 + -1) * 0x20 + lVar13;
            lVar20 = (longlong)iVar22 << 5;
            do {
              lVar12 = lVar13;
              if (fVar39 < *(float *)(lVar13 + 0x10)) break;
              lVar13 = lVar13 + 0x20;
              lVar20 = lVar20 + -0x20;
              lVar12 = lVar29;
            } while (lVar20 != 0);
            bVar31 = 3;
            if ((local_468 < *(float *)(lVar12 + 0x1c)) &&
               (bVar31 = 2, local_468 < *(float *)(lVar12 + 0x18))) {
              bVar31 = *(float *)(lVar12 + 0x14) <= local_468;
            }
          }
          uVar10 = rand();
          fVar39 = (float)(uVar10 & 0x7fff) / 32767.0;
          bVar7 = 3;
          if ((*(float *)(lVar23 + 0x34) * fVar40 <= fVar39) &&
             (bVar7 = 2, *(float *)(lVar23 + 0x38) * fVar40 <= fVar39)) {
            bVar7 = 0.0 < fVar40;
          }
          if (bVar7 < bVar31) {
            bVar31 = bVar7;
          }
          break;
        case 3:
          iVar22 = *(int *)(lVar23 + 0x50);
          if ((longlong)iVar22 == 0) {
            bVar7 = 0;
          }
          else {
            lVar13 = *(longlong *)(lVar23 + 0x48);
            lVar29 = (longlong)(iVar22 + -1) * 0x20 + lVar13;
            lVar20 = (longlong)iVar22 << 5;
            do {
              lVar12 = lVar13;
              if (fVar39 < *(float *)(lVar13 + 0x10)) break;
              lVar13 = lVar13 + 0x20;
              lVar20 = lVar20 + -0x20;
              lVar12 = lVar29;
            } while (lVar20 != 0);
            bVar7 = 3;
            if ((local_468 < *(float *)(lVar12 + 0x1c)) &&
               (bVar7 = 2, local_468 < *(float *)(lVar12 + 0x18))) {
              bVar7 = *(float *)(lVar12 + 0x14) <= local_468;
            }
          }
          uVar10 = rand();
          fVar39 = (float)(uVar10 & 0x7fff) / 32767.0;
          bVar31 = 3;
          if ((*(float *)(lVar23 + 0x34) * fVar40 <= fVar39) &&
             (bVar31 = 2, *(float *)(lVar23 + 0x38) * fVar40 <= fVar39)) {
            bVar31 = 0.0 < fVar40;
          }
          if (bVar31 < bVar7) {
            bVar31 = bVar7;
          }
        }
      }
      else {
LAB_140c4cb89:
        bVar31 = 0;
      }
      lVar23 = FUN_140c4e3ec();
      if (*(char *)(lVar23 + 0xca) == '\x01') {
        if (local_448 == 0) {
LAB_140c4d1c0:
          uVar16 = 0;
        }
        else {
          uVar16 = 0;
          if ((-1 < (int)local_44c) && ((int)local_44c < DAT_14c9647dc)) {
            puVar30 = (undefined8 *)
                      ((ulonglong)((local_44c & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_44c >> 0x10) * 8));
            if ((puVar30 == (undefined8 *)0x0) ||
               ((*(int *)(puVar30 + 2) != local_448 || ((*(uint *)(puVar30 + 1) & 0x10200000) != 0))
               )) goto LAB_140c4d1c0;
            uVar16 = *puVar30;
          }
        }
        FUN_140c4e96d(&local_368,*(undefined8 *)(param_1 + 0x148),uVar16,1);
        uVar10 = local_368;
        if ((char)uStack_364 == '\x01') {
          FUN_140c4e3ec();
          lVar23 = FUN_140c4e3ec();
          if ((*(int *)(lVar23 + 0x58) <= (int)uVar10) &&
             (bVar38 = bVar31 == 0, bVar31 = bVar31 - 1, bVar38)) {
            bVar31 = 0;
          }
        }
      }
      lVar23 = FUN_140c4e3ec();
      if (*(char *)(lVar23 + 200) == '\x01') {
        if (bVar31 == 0) {
          bVar31 = 0;
        }
        else {
          if (*(longlong *)(param_1 + 0x178) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 0x180);
          }
          lVar23 = (**(code **)(*plVar11 + 0x10))();
          if ((lVar23 != 0) && (iVar22 = *(int *)(lVar23 + 0x40), 1 < (longlong)iVar22)) {
            lVar23 = 0x88;
            do {
              cVar5 = FUN_1403ae288();
              if ((cVar5 != '\0') && (lVar13 = FUN_140280ec4(), 0.0 < *(float *)(lVar13 + 200))) {
                cVar5 = -1;
                goto LAB_140c4ccd8;
              }
              lVar23 = lVar23 + 0x88;
            } while ((longlong)iVar22 * 0x88 != lVar23);
            cVar5 = '\0';
LAB_140c4ccd8:
            bVar31 = cVar5 + bVar31;
          }
        }
      }
      lVar23 = FUN_140c4e3ec();
      if (*(char *)(lVar23 + 0xc9) == '\0') {
        local_457 = '\0';
      }
      cVar5 = local_457;
      if (2 < bVar31) {
        cVar5 = '\0';
      }
      lVar23 = FUN_140c4e3ec();
      cVar6 = FUN_140334510(local_438,lVar23 + 0x60,1);
      if (cVar6 == '\0') {
        uVar24 = (ulonglong)(byte)(cVar5 + bVar31);
LAB_140c4cd20:
        lVar23 = FUN_140c4e3ec();
        if ((char)uVar24 != '\0') {
          uVar10 = (uint)uVar24 & 0xff;
          uVar35 = (undefined7)(uVar24 >> 8);
          if (uVar10 == 2) {
            uVar10 = rand();
            fVar39 = (float)(uVar10 & 0x7fff) / 32767.0;
            bVar38 = *(float *)(lVar23 + 0x40) <= fVar39 && fVar39 != *(float *)(lVar23 + 0x40);
            uVar24 = CONCAT71(uVar35,2);
          }
          else {
            if (uVar10 != 3) goto LAB_140c4ced8;
            uVar10 = rand();
            fVar39 = (float)(uVar10 & 0x7fff) / 32767.0;
            bVar38 = *(float *)(lVar23 + 0x3c) <= fVar39 && fVar39 != *(float *)(lVar23 + 0x3c);
            uVar24 = CONCAT71(uVar35,3);
          }
          goto LAB_140c4ce67;
        }
      }
      else {
        FUN_145789392(param_1,local_480);
        if ((*(longlong *)(param_1 + 0x150) != 0) &&
           (lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x150) + 0x3f70), lVar23 != 0)) {
          lVar23 = *(longlong *)(lVar23 + 0xfb8);
          local_368 = (uint)lVar23;
          uStack_364 = (uint)((ulonglong)lVar23 >> 0x20);
          if (lVar23 != 0) {
            uVar16 = FUN_140c4e3ec();
            pcVar17 = (char *)FUN_14036a402(uVar16,&local_368);
            plVar11 = *(longlong **)(param_1 + 0x150);
            if (plVar11 == (longlong *)0x0) {
LAB_140c4d085:
              plVar19 = (longlong *)0x0;
            }
            else {
              uVar16 = FUN_140d929b2();
              plVar18 = (longlong *)(**(code **)(*plVar11 + 0x288))(plVar11,uVar16);
              if (plVar18 == (longlong *)0x0) goto LAB_140c4d085;
              uVar16 = FUN_140d929b2();
              plVar19 = (longlong *)FUN_144718840(plVar18,uVar16);
              plVar11 = plVar18;
              if (plVar18 == plVar19) goto LAB_140c4d085;
            }
            uVar35 = (undefined7)((ulonglong)plVar11 >> 8);
            uVar24 = CONCAT71(uVar35,*pcVar17);
            if (*pcVar17 == '\x04') {
              (**(code **)(*plVar19 + 0x58))();
              uVar24 = CONCAT71(uVar35,*pcVar17);
            }
            goto LAB_140c4cd20;
          }
        }
        FUN_140c4e3ec();
        uVar24 = 4;
LAB_140c4ced8:
        bVar38 = false;
LAB_140c4ce67:
        uVar24 = CONCAT71((int7)(uVar24 >> 8),(char)uVar24 - bVar38);
      }
      bVar7 = FUN_140c4e610(param_1,uVar24 & 0xffffffff);
      uVar14 = 0;
      uVar24 = (ulonglong)bVar7;
      if (bVar7 <= *(byte *)(param_1 + 0x1b8)) {
        uVar24 = uVar14;
      }
      uVar9 = FUN_140c4e592(param_1,uVar24);
      bVar7 = FUN_140c4e528(param_1,uVar9);
      if (*(longlong *)(param_1 + 0x140) != 0) {
        uVar14 = FUN_140963a30(*(longlong *)(param_1 + 0x140) + (ulonglong)bVar7 * 0x28 + 0x18);
      }
      local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
      local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
      if (bVar7 != 0) {
        *(byte *)(param_1 + 0x1b9) = bVar7;
        local_528 = &local_368;
        local_368 = 0;
        uStack_364 = 0;
        local_358._0_4_ = 0;
        local_358._4_4_ = 0;
        local_3f0 = (double)local_468;
        local_3e0 = local_480[2] * local_3f0;
        pppuStack_3e8 = (undefined ***)(local_480[1] * local_3f0);
        local_3f0 = local_3f0 * local_480[0];
        local_3f8 = (code *)CONCAT44(local_3f8._4_4_,local_460);
        ppuStack_3d8 = local_454;
        local_518 = 0;
        local_520 = 0;
        cVar5 = FUN_140c4ec74(param_1,uVar14,&local_3f8,0);
        if (cVar5 == '\0') {
          FUN_140c4e81e(param_1);
          local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
          local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
        }
        else {
          FUN_140c4f358(param_1,local_480);
          local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
          local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
        }
      }
    }
    else {
      local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360);
      local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358);
      if ((((*(longlong *)(param_1 + 0x148) == 0) ||
           (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
           local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
           *(longlong *)(param_1 + 0x140) == 0)) ||
          (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
          local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
          *(longlong *)(param_1 + 0x168) == 0)) ||
         (((local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
           local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
           *(longlong *)(param_1 + 0x170) == 0 ||
           (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
           local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
           *(longlong *)(param_1 + 0x178) == 0)) ||
          (local_360 = (double)CONCAT44(local_360._4_4_,(float)local_360),
          local_358 = (double)CONCAT44(local_358._4_4_,(undefined4)local_358),
          *(longlong **)(param_1 + 0x180) == (longlong *)0x0)))) goto LAB_140c4ce77;
      if (*(char *)(*(longlong *)(param_1 + 0x140) + 0x629) == '\0') {
        plVar11 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))();
        if (plVar11 == (longlong *)0x0) {
LAB_140c4d1d7:
          lVar23 = (longlong)*(int *)(param_1 + 0x228);
          if (lVar23 < 1) {
            lVar23 = FUN_140c4e3ec();
            bVar7 = 0;
            unaff_RBP = 0;
            if (*(char *)(param_1 + 0x1b8) != '\x03') {
              lVar13 = *(longlong *)(param_1 + 0x150);
              if (lVar13 != 0) {
                plVar11 = *(longlong **)(lVar13 + 0x32b8);
                if (plVar11 != (longlong *)0x0) {
                  cVar5 = (**(code **)(*plVar11 + 0x480))(plVar11,DAT_14c9abbf0);
                  bVar7 = 0;
                  unaff_RBP = 0;
                  if (cVar5 != '\0') goto LAB_140c4d121;
                  lVar13 = *(longlong *)(param_1 + 0x150);
                }
                if ((*(longlong *)(lVar13 + 0x11e8) == 0) ||
                   ((&DAT_00001100)[*(longlong *)(lVar13 + 0x11e8)] != '\b')) {
                  bVar38 = false;
                }
                else {
                  bVar38 = *(char *)(lVar13 + 0x32c0) == '\0';
                }
                if ((*(byte *)(lVar13 + 0x32c0) & 0xfe) == 2) {
                  unaff_RBP = 0;
                  goto LAB_140c4d5bb;
                }
                unaff_RBP = 0;
                bVar7 = 0;
                if (bVar38) goto LAB_140c4d121;
              }
              plVar11 = (longlong *)FUN_140c4e6cc(*(undefined8 *)(param_1 + 0x148));
              fVar39 = 0.0;
              if (plVar11 != (longlong *)0x0) {
                fVar39 = (float)(**(code **)(*plVar11 + 0x8d8))(plVar11);
              }
              bVar7 = 0;
              unaff_RBP = 0;
              if ((float)(~-(uint)(0.0 < fVar39) & 0x3f800000 |
                         (uint)(local_468 / fVar39) & -(uint)(0.0 < fVar39)) <
                  *(float *)(lVar23 + 0xcc)) {
                if ((local_440 == (longlong *)0x0) || (5 < *(byte *)((longlong)local_440 + 0x121)))
                goto LAB_140c4d11b;
                unaff_RBP = 0x50604020302 >> ((*(byte *)((longlong)local_440 + 0x121) & 7) << 3);
                goto LAB_140c4d5bb;
              }
            }
          }
          else {
            lVar13 = *(longlong *)(param_1 + 0x220);
LAB_140c4d1ee:
            lVar20 = param_1 + 0x1f0;
            if (lVar13 != 0) {
              lVar20 = lVar13;
            }
            cVar5 = *(char *)(lVar20 + -0xc + lVar23 * 0xc);
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),cVar5);
            if (cVar5 == '\x01') goto LAB_140c4d20f;
LAB_140c4d5bb:
            bVar7 = 0;
          }
        }
        else {
          local_368 = local_368 & 0xffffff00;
          local_340[0] = 0;
          FUN_1405833e0(&local_368,&local_44c);
          plVar18 = (longlong *)FUN_1447262c2(&local_368);
          if (plVar18 == (longlong *)0x0) {
LAB_140c4e080:
            plVar19 = (longlong *)0x0;
          }
          else {
            uVar16 = FUN_1403ec9c0();
            plVar18 = (longlong *)(**(code **)(*plVar18 + 0x288))(plVar18,uVar16);
            if (plVar18 == (longlong *)0x0) goto LAB_140c4e080;
            uVar16 = FUN_1403ec9c0();
            plVar19 = (longlong *)FUN_144718840(plVar18,uVar16);
            if (plVar18 == plVar19) goto LAB_140c4e080;
          }
          FUN_1448173f8(local_340);
          if (((char)local_368 == '\x03') &&
             (plVar18 = (longlong *)CONCAT44(local_358._4_4_,(undefined4)local_358),
             plVar18 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar18 + 0x10))();
            }
          }
          local_3f8 = (code *)((ulonglong)local_3f8._4_4_ << 0x20);
          local_528 = (uint *)((ulonglong)local_528._4_4_ << 0x20);
          cVar5 = (**(code **)(*plVar11 + 0x48))(plVar11,local_45c,plVar19);
          if ((cVar5 == '\0') && (local_458 != '\x01')) goto LAB_140c4d1d7;
          if (plVar19 != (longlong *)0x0) {
            plVar11 = (longlong *)(**(code **)(*plVar19 + 0x10))(plVar19);
            uVar16 = FUN_14049e780();
            cVar5 = FUN_1448093f4(plVar11,uVar16);
            if ((plVar11 != (longlong *)0x0) && (cVar5 != '\0')) {
              local_368 = local_45c;
              uStack_364 = (uint)local_3f8;
              local_360._0_4_ = local_464;
              (**(code **)(*plVar11 + 0x30))(plVar11,*(undefined8 *)(param_1 + 0x148));
            }
          }
          lVar23 = (longlong)*(int *)(param_1 + 0x228);
          if (0 < lVar23) {
            lVar13 = *(longlong *)(param_1 + 0x220);
            lVar20 = param_1 + 0x1f0;
            if (lVar13 != 0) {
              lVar20 = lVar13;
            }
            if (*(char *)(lVar20 + -0xc + lVar23 * 0xc) == '\0') goto LAB_140c4d20f;
            goto LAB_140c4d1ee;
          }
          FUN_140c4e3ec();
LAB_140c4d20f:
          if (*(longlong *)(param_1 + 0x150) != 0) {
            cVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x3c60) + 0x38))();
            bVar7 = 1;
            unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
            if (cVar5 != '\0') goto LAB_140c4d121;
          }
          if (*(longlong *)(param_1 + 0x188) == 0) {
            plVar11 = (longlong *)0x0;
          }
          else {
            plVar11 = *(longlong **)(param_1 + 400);
          }
          uVar16 = (**(code **)(*plVar11 + 0x10))();
          FUN_146553032(uVar16,param_2);
          bVar7 = 1;
          unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),1);
        }
      }
      else {
LAB_140c4d11b:
        bVar7 = 0;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),2);
      }
LAB_140c4d121:
      if (*(longlong *)(param_1 + 0x150) == 0) {
        if (*(longlong *)(param_1 + 0x148) == 0) {
          if (local_440 != (longlong *)0x0) {
            lVar23 = *(longlong *)(param_1 + 0x140);
            bVar31 = *(byte *)((longlong)local_440 + 0x121);
LAB_140c4de2b:
            uVar16 = FUN_140963a30(lVar23 + (ulonglong)bVar31 * 0x28 + 0x538);
            cVar5 = '\x01';
            goto LAB_140c4de47;
          }
          iVar22 = *(int *)(param_1 + 0x244);
          if ((((iVar22 != 0) && (uVar10 = *(uint *)(param_1 + 0x240), -1 < (int)uVar10)) &&
              ((int)uVar10 < DAT_14c9647dc)) &&
             (((lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar23 != 0
               && (*(int *)(lVar23 + 0x10) == iVar22)) &&
              ((*(uint *)(lVar23 + 8) & 0x10200000) == 0)))) {
            uVar16 = 0;
            goto LAB_140c4e19c;
          }
          lVar23 = *(longlong *)(param_1 + 0x140);
          uVar16 = 0;
LAB_140c4deab:
          lVar13 = FUN_140963a30(lVar23 + (unaff_RBP & 0xff) * 0x28 + 0x420);
          if (lVar13 == 0) {
            uVar24 = 0;
            goto LAB_140c4deca;
          }
        }
        else {
          cVar5 = FUN_1405bb4f2();
          if (local_440 == (longlong *)0x0) {
            uVar16 = 0;
LAB_140c4de47:
            iVar22 = *(int *)(param_1 + 0x244);
            if (((iVar22 != 0) && (uVar10 = *(uint *)(param_1 + 0x240), -1 < (int)uVar10)) &&
               ((((int)uVar10 < DAT_14c9647dc &&
                 ((lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                  lVar23 != 0 && (*(int *)(lVar23 + 0x10) == iVar22)))) &&
                ((*(uint *)(lVar23 + 8) & 0x10200000) == 0)))) {
LAB_140c4e19c:
              if (((((int)uVar10 < DAT_14c9647dc) &&
                   (plVar11 = (longlong *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                   plVar11 != (longlong *)0x0)) && ((int)plVar11[2] == iVar22)) &&
                 ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)) {
                lVar13 = *plVar11;
              }
              else {
                lVar13 = 0;
              }
              goto LAB_140c4dee4;
            }
            lVar23 = *(longlong *)(param_1 + 0x140);
            uVar24 = unaff_RBP & 0xffffffff;
            if (cVar5 != '\0') goto LAB_140c4deab;
          }
          else {
            lVar23 = *(longlong *)(param_1 + 0x140);
            bVar31 = *(byte *)((longlong)local_440 + 0x121);
            if (cVar5 != '\0') goto LAB_140c4de2b;
            uVar16 = FUN_140963a30(lVar23 + (ulonglong)bVar31 * 0x28 + 0x2e0);
            iVar22 = *(int *)(param_1 + 0x244);
            if (((iVar22 != 0) && (uVar10 = *(uint *)(param_1 + 0x240), -1 < (int)uVar10)) &&
               (((int)uVar10 < DAT_14c9647dc &&
                (((lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8),
                  lVar23 != 0 && (*(int *)(lVar23 + 0x10) == iVar22)) &&
                 ((*(uint *)(lVar23 + 8) & 0x10200000) == 0)))))) goto LAB_140c4e19c;
            lVar23 = *(longlong *)(param_1 + 0x140);
            uVar24 = unaff_RBP & 0xffffffff;
          }
LAB_140c4deca:
          lVar13 = FUN_140963a30(lVar23 + (uVar24 & 0xff) * 0x28 + 0x1c8);
        }
LAB_140c4dee4:
        local_360 = (double)local_468;
        local_350 = local_480[2] * local_360;
        local_358 = local_480[1] * local_360;
        local_360 = local_360 * local_480[0];
        local_368 = local_460;
        local_348 = local_454;
        local_520 = 0;
        local_528 = (uint *)((ulonglong)local_528 & 0xffffffffffffff00);
        FUN_1410ce3d0(param_1,lVar13,uVar16);
      }
      else {
        if (local_440 == (longlong *)0x0) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ed8);
          lVar23 = 0;
        }
        else {
          lVar23 = FUN_140963a30(*(longlong *)(param_1 + 0x140) +
                                 (ulonglong)*(byte *)((longlong)local_440 + 0x121) * 0x28 + 0x2e0);
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ed8);
          if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar23);
          }
        }
        *plVar11 = lVar23;
        if (((*(int *)(param_1 + 0x244) == 0) ||
            (uVar10 = *(uint *)(param_1 + 0x240), (int)uVar10 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar10 ||
            (((plVar11 = (longlong *)
                         ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
              plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x244))) ||
             ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))))) {
          lVar23 = FUN_140963a30(*(longlong *)(param_1 + 0x140) + (unaff_RBP & 0xff) * 0x28 + 0x1c8)
          ;
LAB_140c4d384:
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ee0);
          if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar23);
          }
        }
        else {
          if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
            lVar23 = *plVar11;
            goto LAB_140c4d384;
          }
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ee0);
          lVar23 = 0;
        }
        *plVar11 = lVar23;
        if (local_440 == (longlong *)0x0) {
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ee8);
          lVar23 = 0;
        }
        else {
          lVar23 = FUN_140963a30(*(longlong *)(param_1 + 0x140) +
                                 (ulonglong)*(byte *)((longlong)local_440 + 0x121) * 0x28 + 0x538);
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ee8);
          if ((lVar23 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar23);
          }
        }
        *plVar11 = lVar23;
        if ((((*(int *)(param_1 + 0x244) == 0) ||
             (uVar10 = *(uint *)(param_1 + 0x240), (int)uVar10 < 0)) ||
            (DAT_14c9647dc <= (int)uVar10)) ||
           (((plVar11 = (longlong *)
                        ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
             plVar11 == (longlong *)0x0 || ((int)plVar11[2] != *(int *)(param_1 + 0x244))) ||
            ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) {
          lVar23 = *(longlong *)(param_1 + 0x140);
          lVar13 = FUN_140963a30(lVar23 + (unaff_RBP & 0xff) * 0x28 + 0x420);
          if (lVar13 == 0) {
            lVar13 = FUN_140963a30(lVar23 + 0x1c8);
          }
LAB_140c4d5ea:
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ef0);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
        }
        else {
          if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
            lVar13 = *plVar11;
            goto LAB_140c4d5ea;
          }
          plVar11 = (longlong *)(*(longlong *)(param_1 + 0x150) + 0x7ef0);
          lVar13 = 0;
        }
        *plVar11 = lVar13;
        if (local_440 == (longlong *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)(*local_440 + 0x18))();
        }
        *(undefined1 *)(*(longlong *)(param_1 + 0x150) + 0x7ef8) = uVar8;
        *(uint *)(*(longlong *)(param_1 + 0x150) + 0x7efc) = local_460;
        dVar3 = (double)local_468;
        lVar23 = *(longlong *)(param_1 + 0x150);
        *(double *)(lVar23 + 0x7f00) = dVar3 * local_480[0];
        *(double *)(lVar23 + 0x7f08) = local_480[1] * dVar3;
        *(double *)(lVar23 + 0x7f10) = local_480[2] * dVar3;
        *(undefined ***)(*(longlong *)(param_1 + 0x150) + 0x7f18) = local_454;
        cVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x150) + 0x3c60) + 0x38))();
        if (cVar5 != '\0') {
          lVar13 = FUN_140963a30(*(longlong *)(param_1 + 0x140) + 0x330);
          lVar23 = *(longlong *)(param_1 + 0x150);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar13);
          }
          *(longlong *)(lVar23 + 0x7ed8) = lVar13;
          lVar13 = FUN_140963a30();
          lVar23 = *(longlong *)(param_1 + 0x150);
          if ((lVar13 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          *(longlong *)(lVar23 + 0x7ee8) = lVar13;
        }
        uVar24 = *(ulonglong *)(*(longlong *)(param_1 + 0x150) + 0x28);
        if (uVar24 < 0xffffffff00000000) {
          plVar11 = DAT_14c9980d0;
          if (DAT_14c9980d8 == 0) {
            plVar11 = (longlong *)0x0;
          }
          (**(code **)(*plVar11 + 0x58))(plVar11,*(longlong *)(param_1 + 0x150),uVar24,0x46);
        }
        else {
          uVar10 = (uint)uVar24;
          if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c998088)) {
            puVar27 = &DAT_14c998070;
            if (DAT_14c998080 != (undefined *)0x0) {
              puVar27 = DAT_14c998080;
            }
            if ((*(uint *)(puVar27 + ((uint)(uVar24 >> 3) & 0xffffffc)) >> (uVar10 & 0x1f) & 1) != 0
               ) {
              lVar13 = DAT_14c998060 + (ulonglong)(uVar10 & 0x7fffffff) * 0x68;
              lVar23 = *(longlong *)(lVar13 + 0x18);
              if (*(longlong *)(lVar13 + 0x18) == 0) {
                lVar23 = lVar13 + 8;
              }
              *(uint *)(lVar23 + 8) = *(uint *)(lVar23 + 8) | 0x40;
              *(byte *)(lVar13 + 0x60) = *(byte *)(lVar13 + 0x60) | 1;
            }
          }
        }
        (**(code **)(**(longlong **)(param_1 + 0x150) + 0x578))();
        FUN_1410ce1e6(param_1,*(longlong *)(param_1 + 0x150) + 0x7ed8);
      }
      if (*(longlong *)(param_1 + 0x148) != 0) {
        lVar23 = FUN_1447210f0();
        if (lVar23 != 0) {
          lVar13 = FUN_140115352(lVar23);
          if ((lVar13 != 0) && (*(longlong *)(param_1 + 0x140) != 0)) {
            dVar3 = local_360;
            dVar4 = local_358;
            if (*(longlong *)(param_1 + 0x188) == 0) {
              bVar31 = 0;
            }
            else {
              bVar31 = 0;
              if ((param_2 != 0) && (*(longlong **)(param_1 + 400) != (longlong *)0x0)) {
                lVar20 = (**(code **)(**(longlong **)(param_1 + 400) + 0x10))();
                cVar5 = FUN_140c4fa2a(lVar20,param_2);
                dVar3 = local_360;
                dVar4 = local_358;
                if (cVar5 == '\0') {
                  bVar31 = *(byte *)(lVar20 + 0x308) & 1;
                }
                else {
                  bVar31 = 1;
                }
              }
            }
            local_358._4_4_ = (undefined4)((ulonglong)dVar4 >> 0x20);
            uVar10 = *(uint *)(lVar23 + 0xc);
            if ((int)uVar10 < DAT_14c9647dc) {
              lVar23 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
            }
            else {
              lVar23 = 0;
            }
            local_510 = unaff_RBP;
            local_360._0_4_ = (float)*(int *)(lVar23 + 0x10);
            if (*(int *)(lVar23 + 0x10) == 0) {
              LOCK();
              iVar22 = DAT_14c964868 + 1;
              UNLOCK();
              iVar33 = DAT_14c964868 + 1;
              bVar38 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar22;
              if (bVar38) {
                local_360 = dVar3;
                local_358 = dVar4;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar33);
              }
              LOCK();
              local_360._0_4_ = *(float *)(lVar23 + 0x10);
              bVar38 = (float)local_360 == 0.0;
              if (bVar38) {
                *(int *)(lVar23 + 0x10) = iVar33;
                local_360._0_4_ = (float)0;
              }
              UNLOCK();
              if (bVar38) {
                local_360._0_4_ = (float)iVar33;
              }
            }
            local_368 = local_368 & 0xffffff00;
            bVar32 = 0;
            local_360._4_4_ = 0;
            local_358._0_4_ = 0;
            local_90 = 0;
            local_88 = 0x800000000;
            local_3f8 = *(code **)(param_1 + 0x148);
            uStack_364 = uVar10;
            lVar23 = FUN_140316ff8();
            FUN_144a6406c(&local_368,lVar23 + 0x1b0,&local_3f8);
            local_3f8 = *(code **)(param_1 + 0x148);
            lVar23 = FUN_140316ff8();
            FUN_144a6406c(&local_368,lVar23 + 0x198,&local_3f8);
            if (local_440 != (longlong *)0x0) {
              bVar32 = *(byte *)((longlong)local_440 + 0x121);
            }
            if (bVar7 == 0 && bVar31 == 0) {
              local_508[0] = local_508[0] & 0xffffffff00000000;
              uVar10 = 3;
              if (4 < (byte)(bVar32 - 1)) {
                pppuStack_3e8 = (undefined ***)0x0;
                ppuStack_3d8 = &PTR_LAB_14b975dc0;
                local_3d0 = local_508;
                local_3f8 = FUN_14416f88c;
                FUN_140cf3304(local_438,&local_3f8);
                if (local_3f8 != (code *)0x0) {
                  pppuVar25 = pppuStack_3e8;
                  if (pppuStack_3e8 == (undefined ***)0x0) {
                    pppuVar25 = &ppuStack_3d8;
                  }
                  (*(code *)(*pppuVar25)[2])();
                }
                uVar10 = (uint)local_508[0];
              }
            }
            else {
              uVar10 = (uint)bVar7 * 2 + 2;
            }
            lVar23 = FUN_1403ca35b();
            if (*(int *)(lVar23 + 0x78) != *(int *)(lVar23 + 0xa4)) {
              lVar20 = lVar23 + 0xa8;
              if (*(longlong *)(lVar23 + 0xb0) != 0) {
                lVar20 = *(longlong *)(lVar23 + 0xb0);
              }
              uVar36 = *(uint *)(lVar20 + (ulonglong)(*(int *)(lVar23 + 0xb8) - 1U & uVar10) * 4);
              if (uVar36 != 0xffffffff) {
                do {
                  puVar2 = (uint *)(*(longlong *)(lVar23 + 0x70) + (longlong)(int)uVar36 * 0x14);
                  if (*puVar2 == uVar10) {
                    if (puVar2 != (uint *)0x0) {
                      lVar23 = FUN_140316ff8();
                      FUN_140428482(&local_368,lVar23 + 0x210,puVar2 + 1);
                    }
                    break;
                  }
                  uVar36 = puVar2[3];
                } while (uVar36 != 0xffffffff);
              }
            }
            lVar23 = FUN_1403ca35b();
            if (*(int *)(lVar23 + 0x28) != *(int *)(lVar23 + 0x54)) {
              lVar20 = lVar23 + 0x58;
              if (*(longlong *)(lVar23 + 0x60) != 0) {
                lVar20 = *(longlong *)(lVar23 + 0x60);
              }
              iVar22 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar23 + 0x68) - 1U & (uint)bVar32) *
                                         4);
              if (iVar22 != -1) {
                do {
                  pbVar21 = (byte *)(*(longlong *)(lVar23 + 0x20) + (longlong)iVar22 * 0x14);
                  if (*pbVar21 == bVar32) {
                    if (pbVar21 != (byte *)0x0) {
                      lVar23 = FUN_140316ff8();
                      FUN_140428482(&local_368,lVar23 + 0x228,pbVar21 + 4);
                    }
                    break;
                  }
                  iVar22 = *(int *)(pbVar21 + 0xc);
                } while (iVar22 != -1);
              }
            }
            lVar23 = FUN_1403ca35b();
            bVar7 = 3;
            bVar32 = (byte)local_510;
            if (*(int *)(lVar23 + 200) != *(int *)(lVar23 + 0xf4)) {
              uVar10 = (uint)((ulonglong)local_454 >> 0x10);
              uVar36 = (uint)local_454 & 0xffff;
              lVar20 = lVar23 + 0xf8;
              if (*(longlong *)(lVar23 + 0x100) != 0) {
                lVar20 = *(longlong *)(lVar23 + 0x100);
              }
              iVar22 = *(int *)(lVar20 + (ulonglong)
                                         (*(int *)(lVar23 + 0x108) - 1U &
                                         (int)((ulonglong)local_454 >> 0x20) +
                                         ((uint)local_454 << 0x10 | uVar36) +
                                         (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar36 >> 4)) * 4);
              if (iVar22 != -1) {
                do {
                  plVar11 = (longlong *)(*(longlong *)(lVar23 + 0xc0) + (longlong)iVar22 * 0x14);
                  if ((undefined **)*plVar11 == local_454) {
                    if ((plVar11 != (longlong *)0x0) && ((byte *)(plVar11 + 1) != (byte *)0x0)) {
                      bVar7 = *(byte *)(plVar11 + 1);
                    }
                    break;
                  }
                  iVar22 = *(int *)((longlong)plVar11 + 0xc);
                } while (iVar22 != -1);
              }
            }
            if (*(int *)(lVar23 + 0x118) != *(int *)(lVar23 + 0x144)) {
              lVar20 = lVar23 + 0x148;
              if (*(longlong *)(lVar23 + 0x150) != 0) {
                lVar20 = *(longlong *)(lVar23 + 0x150);
              }
              iVar22 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar23 + 0x158) - 1U & (uint)bVar7) *
                                         4);
              if (iVar22 != -1) {
                do {
                  pbVar21 = (byte *)(*(longlong *)(lVar23 + 0x110) + (longlong)iVar22 * 0x14);
                  if (*pbVar21 == bVar7) goto LAB_140c4db13;
                  iVar22 = *(int *)(pbVar21 + 0xc);
                } while (iVar22 != -1);
              }
            }
            pbVar21 = (byte *)0x0;
LAB_140c4db13:
            pbVar37 = pbVar21 + 4;
            if (pbVar21 == (byte *)0x0) {
              pbVar37 = (byte *)0x0;
            }
            if (bVar31 == 1 && pbVar37 != (byte *)0x0) {
              lVar23 = FUN_140316ff8();
              FUN_140428482(&local_368,lVar23 + 0x240,pbVar37);
            }
            pppuStack_3e8 = (undefined ***)0x0;
            ppuStack_3d8 = &PTR_LAB_14b975de0;
            local_3f8 = FUN_14416f95a;
            local_3d0 = (ulonglong *)&local_368;
            FUN_140cf3304(local_438,&local_3f8);
            if (local_3f8 != (code *)0x0) {
              pppuVar25 = pppuStack_3e8;
              if (pppuStack_3e8 == (undefined ***)0x0) {
                pppuVar25 = &ppuStack_3d8;
              }
              (*(code *)(*pppuVar25)[2])();
            }
            if (1 < bVar32 && bVar31 == 0) {
              local_3f8 = (code *)((ulonglong)local_3f8 & 0xffffffff00000000);
              local_3f0 = 0.0;
              pppuStack_3e8 = (undefined ***)0x0;
              local_3e0 = 0.0;
              ppuStack_3d8 = (undefined **)0x0;
              local_3d0 = (ulonglong *)0x0;
              uStack_3c8 = 0;
              uStack_3c4 = 0;
              uStack_3c0 = 0;
              uStack_3bc = 0;
              local_3b0 = 0;
              uStack_3a8 = 0;
              local_3a0 = 0;
              uStack_398 = 0;
              local_390 = 0;
              uStack_388 = 0;
              local_380 = 0xffffffff;
              uStack_37c = 0;
              uStack_37a = 1;
              uStack_379 = 1;
              uStack_378 = 0;
              uStack_376 = 0;
              lVar23 = 0x648;
              if (bVar32 == 2) {
                lVar23 = 0x630;
              }
              FUN_1407ae347(lVar13,lVar23 + *(longlong *)(param_1 + 0x140),&local_368);
            }
            uStack_3c0 = 0;
            uStack_3bc = 0;
            local_3d0 = (ulonglong *)0x0;
            uStack_3c8 = 0;
            uStack_3c4 = 0;
            local_3e0 = 0.0;
            ppuStack_3d8 = (undefined **)0x0;
            local_3f0 = 0.0;
            pppuStack_3e8 = (undefined ***)0x0;
            local_3b0 = 0;
            uStack_3a8 = 0;
            local_3a0 = 0;
            uStack_398 = 0;
            local_390 = 0;
            uStack_388 = 0;
            local_380 = 0xffffffff;
            uStack_37c = 0;
            uStack_37a = 1;
            uStack_379 = 0;
            uStack_378 = 0;
            uStack_376 = 0;
            lVar23 = FUN_140316ff8();
            local_3f8 = (code *)CONCAT44(local_3f8._4_4_,*(undefined4 *)(lVar23 + 0x6c4));
            FUN_1407ae347(lVar13,*(longlong *)(param_1 + 0x140) + 0x660,&local_368,&local_3f8);
            if (local_448 == 0) {
LAB_140c4e179:
              local_508[0] = 0;
            }
            else {
              local_508[0] = 0;
              if ((-1 < (int)local_44c) && ((int)local_44c < DAT_14c9647dc)) {
                puVar26 = (ulonglong *)
                          ((ulonglong)((local_44c & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_44c >> 0x10) * 8));
                if ((puVar26 == (ulonglong *)0x0) ||
                   (((int)puVar26[2] != local_448 || ((puVar26[1] & 0x10200000) != 0))))
                goto LAB_140c4e179;
                local_508[0] = *puVar26;
              }
            }
            lVar23 = FUN_140316ff8();
            FUN_144a6406c(&local_368,lVar23 + 0x1b0,local_508);
            local_508[0] = local_508[0] & 0xffffffff00000000;
            local_508[1] = 0;
            local_508[2] = 0;
            local_508[3] = 0;
            local_508[4] = 0;
            local_508[5] = 0;
            uStack_4d8 = 0;
            uStack_4d4 = 0;
            uStack_4d0 = 0;
            uStack_4cc = 0;
            local_4c0 = 0;
            uStack_4b8 = 0;
            local_4b0 = 0;
            uStack_4a8 = 0;
            local_4a0 = 0;
            uStack_498 = 0;
            local_490 = 0xffffffff;
            local_48c = 0;
            local_48a = 1;
            local_489 = 0;
            FUN_1407ae347(lVar13,*(longlong *)(param_1 + 0x140) + 0x678,&local_368,local_508);
            FUN_1407acd04(&local_350);
          }
        }
      }
    }
  }
LAB_140c4ce77:
  if (local_408 != 0) {
    FUN_1400020a8();
  }
LAB_140c4ce88:
  if ((local_80 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4e387 FUN_140c4e387 body=52 status=ok
// SIG undefined FUN_140c4e387(void)

void FUN_140c4e387(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140c4e3bc FUN_140c4e3bc body=48 status=ok
// SIG undefined FUN_140c4e3bc(void)

void FUN_140c4e3bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 140c4e3ec FUN_140c4e3ec body=315 status=ok
// SIG undefined FUN_140c4e3ec(void)

longlong FUN_140c4e3ec(void)

{
  char cVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined1 local_148 [16];
  longlong local_138;
  undefined2 *local_128;
  undefined8 uStack_120;
  undefined1 local_110 [248];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (DAT_14cbcb510 == '\0') {
    DAT_14cbcb510 = '\x01';
    local_128 = (undefined2 *)0x0;
    uStack_120 = 0;
    if (DAT_14c872ce0 != 0) {
      local_158 = &DAT_14c872ce8;
      cVar1 = FUN_1449da20c(DAT_14c872ce0,L"GlobalsData",L"HitReactionSettings",&local_128);
      if (cVar1 != '\0') {
        FUN_1413e28b0(local_110);
        puVar3 = local_128;
        if ((int)uStack_120 == 0) {
          puVar3 = &DAT_149dfb77a;
        }
        FUN_1411e4208(local_148,puVar3);
        lVar2 = FUN_145789500(local_110,local_148,0,0);
        if (local_138 != 0) {
          FUN_1400020a8();
        }
        FUN_140f77756(local_110);
        if ((lVar2 != 0) && (DAT_14cbcb518 != lVar2)) {
          if ((DAT_14cbcb518 != 0) && (DAT_14c872a72 == '\0')) {
            FUN_140113f48();
          }
          FUN_1401924dc(lVar2);
          DAT_14cbcb518 = lVar2;
        }
      }
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return DAT_14cbcb518;
}



// FUNCTION 140c4e528 FUN_140c4e528 body=106 status=ok
// SIG undefined FUN_140c4e528(void)

byte FUN_140c4e528(char *param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  
  if ((*param_1 == '\0') && (lVar1 = *(longlong *)(param_1 + 0x150), lVar1 != 0)) {
    if ((*(longlong *)(lVar1 + 0x11e8) == 0) ||
       ((&DAT_00001100)[*(longlong *)(lVar1 + 0x11e8)] != '\b')) {
      bVar3 = false;
    }
    else {
      bVar3 = *(char *)(lVar1 + 0x32c0) == '\0';
    }
    if (((param_2 < 6) && ((*(byte *)(lVar1 + 0x32c0) & 0xfe) != 2)) && (!bVar3)) {
      bVar2 = 0;
      if (param_1[(ulonglong)param_2 * 0x28 + 0x28] == '\0') {
        bVar2 = param_2;
      }
      return bVar2;
    }
  }
  return 0;
}



// FUNCTION 140c4e592 FUN_140c4e592 body=126 status=ok
// SIG undefined FUN_140c4e592(void)

byte FUN_140c4e592(longlong param_1,byte param_2)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  fVar1 = *(float *)(param_1 + 0x1d0 + (ulonglong)param_2 * 4);
  fVar3 = 0.0;
  if (0.0 < fVar1) {
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar2 = FUN_1447210f0();
      if (lVar2 != 0) {
        fVar3 = (float)*(double *)(lVar2 + 0x6d0);
      }
    }
    if (fVar3 - fVar1 < *(float *)(*(longlong *)(param_1 + 0x140) + 0x1a8 + (ulonglong)param_2 * 4))
    {
      param_2 = *(byte *)(*(longlong *)(param_1 + 0x140) + 0x1c0);
    }
  }
  return param_2;
}



// FUNCTION 140c4e610 FUN_140c4e610 body=188 status=ok
// SIG undefined FUN_140c4e610(void)

uint FUN_140c4e610(longlong param_1,uint param_2)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = FUN_140c4e3ec();
  if ((*(char *)(lVar3 + 0xca) == '\x01') && ((longlong)*(int *)(param_1 + 0x238) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x230);
    lVar4 = (longlong)*(int *)(param_1 + 0x238) * 0x58 + lVar3;
    do {
      if (*(int *)(lVar3 + 0x10) != *(int *)(lVar3 + 0x3c)) {
        lVar6 = lVar3 + 0x40;
        if (*(longlong *)(lVar3 + 0x48) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x48);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar3 + 0x50) - 1U & param_2 & 0xff) * 4);
        if (iVar5 != -1) {
          do {
            pcVar1 = (char *)(*(longlong *)(lVar3 + 8) + (longlong)iVar5 * 0xc);
            if (*pcVar1 == (char)param_2) {
              if (((byte *)(pcVar1 + 1) != (byte *)0x0 && pcVar1 != (char *)0x0) &&
                 (bVar2 = pcVar1[1], param_2 = param_2 & 0xff, bVar2 < 6)) {
                param_2 = (uint)bVar2;
              }
              break;
            }
            iVar5 = *(int *)(pcVar1 + 4);
          } while (iVar5 != -1);
        }
      }
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != lVar4);
  }
  return param_2;
}



// FUNCTION 140c4e6cc FUN_140c4e6cc body=336 status=ok
// SIG undefined FUN_140c4e6cc(void)

longlong FUN_140c4e6cc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x428);
      goto LAB_140c4e725;
    }
    lVar2 = *(longlong *)(param_1 + 0x1c8);
    if (lVar2 != 0) {
      lVar1 = FUN_144a3a302();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) goto LAB_140c4e725;
    }
  }
  lVar2 = 0;
LAB_140c4e725:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4e81e FUN_140c4e81e body=335 status=ok
// SIG undefined FUN_140c4e81e(void)

void FUN_140c4e81e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x148);
  if (((((lVar3 != 0) && (*(longlong *)(param_1 + 0x140) != 0)) &&
       (*(longlong *)(param_1 + 0x168) != 0)) &&
      ((*(longlong *)(param_1 + 0x170) != 0 && (*(longlong *)(param_1 + 0x178) != 0)))) &&
     (*(longlong *)(param_1 + 0x180) != 0)) {
    if (*(char *)(param_1 + 0x199) == '\x01') {
      uVar1 = FUN_1410ce2ea();
      plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2);
        uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
        FUN_140ebeee8(uVar1);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000140c4e96a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(param_1 + 0x148) + 0x5c8))(*(longlong **)(param_1 + 0x148),0);
      return;
    }
    if (((1 < *(byte *)(param_1 + 0x1b8)) && (*(longlong *)(param_1 + 0x158) != 0)) &&
       (*(longlong **)(param_1 + 0x160) != (longlong *)0x0)) {
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x160) + 0x20))();
      if (lVar3 != 0) {
        FUN_140ba2af2(lVar3,&DAT_14cbcb528);
      }
    }
    fVar4 = 0.0;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar3 = FUN_1447210f0();
      if (lVar3 != 0) {
        fVar4 = (float)*(double *)(lVar3 + 0x6d0);
      }
    }
    *(float *)(param_1 + 0x1d0 + (ulonglong)*(byte *)(param_1 + 0x1b8) * 4) = fVar4;
    *(undefined1 *)(param_1 + 0x1b8) = 0;
  }
  return;
}



// FUNCTION 140c4e96d FUN_140c4e96d body=630 status=ok
// SIG undefined FUN_140c4e96d(void)

int * FUN_140c4e96d(int *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_78 [32];
  int *local_58;
  int local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) && (param_3 != (longlong *)0x0)) {
    uVar4 = FUN_14018b740();
    plVar5 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar4);
    if (plVar5 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      uVar4 = FUN_14018b740();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      plVar9 = (longlong *)0x0;
      if (plVar5 != plVar6) {
        plVar9 = plVar6;
      }
    }
    uVar4 = FUN_14018b740();
    plVar5 = (longlong *)(**(code **)(*param_3 + 0x288))(param_3,uVar4);
    if (plVar5 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar4 = FUN_14018b740();
      plVar7 = (longlong *)FUN_144718840(plVar5,uVar4);
      plVar6 = (longlong *)0x0;
      if (plVar5 != plVar7) {
        plVar6 = plVar7;
      }
    }
    lVar8 = FUN_1405c6693(param_2);
    if (((plVar6 != (longlong *)0x0) && (plVar9 != (longlong *)0x0)) && (lVar8 != 0)) {
      local_58 = param_1;
      iVar2 = (**(code **)(*plVar9 + 0x28))(plVar9);
      iVar3 = (**(code **)(*plVar6 + 0x28))(plVar6);
      if (((param_4 == '\0') || (*(char *)(lVar8 + 0x5e4) != '\0')) ||
         (*(char *)(lVar8 + 0x5e5) == '\0')) goto LAB_140c4eac9;
      lVar8 = (**(code **)(*param_2 + 0x5d8))(param_2);
      bVar1 = true;
      if (lVar8 == 0) {
        plVar5 = (longlong *)param_2[0x36];
        if (plVar5 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar5 + 0x5d8))(plVar5);
          if (lVar8 != 0) goto LAB_140c4ea8e;
          if ((longlong *)plVar5[0x36] != (longlong *)0x0) {
            lVar8 = (**(code **)(*(longlong *)plVar5[0x36] + 0x5d8))();
            if (lVar8 != 0) goto LAB_140c4ea8e;
          }
        }
        bVar1 = false;
      }
LAB_140c4ea8e:
      lVar8 = (**(code **)(*param_3 + 0x5d8))(param_3);
      if (lVar8 == 0) {
        plVar5 = (longlong *)param_3[0x36];
        if (plVar5 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar5 + 0x5d8))(plVar5);
          if (lVar8 != 0) goto LAB_140c4eaa3;
          if ((longlong *)plVar5[0x36] != (longlong *)0x0) {
            lVar8 = (**(code **)(*(longlong *)plVar5[0x36] + 0x5d8))();
            if (lVar8 != 0) goto LAB_140c4eaa3;
          }
        }
        if (bVar1) {
          FUN_140c4ebe4(&local_50,plVar9,plVar6);
          if (local_4c != '\x01') goto LAB_140c4eac9;
          iVar2 = iVar2 - local_50;
        }
        else {
LAB_140c4eac9:
          iVar2 = iVar2 - iVar3;
        }
        *local_58 = iVar2;
      }
      else {
LAB_140c4eaa3:
        if (!bVar1) {
          FUN_140c4ebe4(&local_50,plVar6,plVar9);
          if (local_4c != '\0') {
            iVar2 = local_50;
          }
          goto LAB_140c4eac9;
        }
        *local_58 = 0;
      }
      *(undefined1 *)(local_58 + 1) = 1;
      param_1 = local_58;
      goto LAB_140c4ead9;
    }
  }
  *(undefined1 *)(param_1 + 1) = 0;
LAB_140c4ead9:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4ebe4 FUN_140c4ebe4 body=143 status=ok
// SIG undefined FUN_140c4ebe4(void)

int * FUN_140c4ebe4(int *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar4 = (**(code **)(*param_2 + 8))(param_2);
  lVar5 = FUN_1405c6693(uVar4);
  if (((lVar5 != 0) && (*(char *)(lVar5 + 0x5e4) == '\0')) && (*(char *)(lVar5 + 0x5e5) == '\x01'))
  {
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    iVar2 = iVar2 - *(int *)(lVar5 + 0x5e8);
    if (iVar2 != 0) {
      iVar3 = (**(code **)(*param_3 + 0x28))(param_3);
      iVar2 = iVar2 + iVar3;
      iVar6 = 100;
      if (iVar2 < 100) {
        iVar6 = iVar2;
      }
      iVar2 = 1;
      if (1 < iVar6) {
        iVar2 = iVar6;
      }
      if (iVar2 != iVar3) {
        *param_1 = iVar2;
        uVar1 = 1;
        goto LAB_140c4ec5f;
      }
    }
  }
  uVar1 = 0;
LAB_140c4ec5f:
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



// FUNCTION 140c4ec74 FUN_140c4ec74 body=1763 status=ok
// SIG undefined FUN_140c4ec74(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140c4ec74(longlong *****param_1,longlong *param_2,undefined4 *param_3,char param_4,
                       longlong *param_5,undefined1 param_6,char param_7)

{
  int *piVar1;
  longlong ****pppplVar2;
  longlong **pplVar3;
  longlong ***ppplVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  longlong *******ppppppplVar10;
  longlong *plVar11;
  int iVar12;
  longlong *****ppppplVar13;
  longlong ****pppplVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined *local_e0;
  longlong *******local_d8;
  undefined1 local_cc [4];
  longlong *******local_c8;
  longlong ****pppplStack_c0;
  undefined8 local_b8;
  ushort local_b0;
  byte local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((param_2 == (longlong *)0x0) || (param_1[0x2d] == (longlong ****)0x0)) ||
     (param_1[0x2e] == (longlong ****)0x0)) {
    *(undefined1 *)((longlong)param_1 + 0x1b9) = 0;
    uVar15 = 0;
    goto LAB_140c4f239;
  }
  uVar7 = (*(code *)(*param_1[0x2e])[10])();
  if (param_1[0x38] != (longlong ****)0x0) {
    FUN_140c4a7e8(uVar7,*(undefined1 *)(param_1[0x38] + 8),1);
  }
  if (*(char *)((longlong)param_1 + 0x199) == '\0') {
    *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)((longlong)param_1 + 0x1b9);
  }
  *(undefined1 *)((longlong)param_1 + 0x1b9) = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar5 = (**(code **)(*param_2 + 0x2b0))(param_2);
  if (cVar5 == '\0') {
    local_b0 = 4;
    local_c8 = (longlong *******)CONCAT44(local_c8._4_4_,*param_3);
    local_a8 = 3;
    local_e0 = &DAT_14cbcb530;
    local_d8 = (longlong *******)&local_c8;
    FUN_140881f5a(&local_98,local_cc,&local_e0,0);
    pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar8 != (code *)0x0) {
      ppppppplVar10 = (longlong *******)&local_c8;
      if (0x18 < local_b0) {
        ppppppplVar10 = local_c8;
      }
      goto LAB_140c4eef5;
    }
  }
  else {
    local_b0 = 0x18;
    local_c8 = *(longlong ********)(param_3 + 2);
    pppplStack_c0 = *(longlong *****)(param_3 + 4);
    local_b8 = *(undefined8 *)(param_3 + 6);
    local_a8 = 4;
    local_e0 = &DAT_14cbcb538;
    local_d8 = (longlong *******)&local_c8;
    FUN_140881f5a(&local_98,local_cc,&local_e0,0);
    pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar8 != (code *)0x0) {
      ppppppplVar10 = (longlong *******)&local_c8;
      if (0x18 < local_b0) {
        ppppppplVar10 = local_c8;
      }
      (*pcVar8)(ppppppplVar10);
    }
    if (0x18 < local_b0) {
      FUN_1400020a8(local_c8);
    }
    local_b0 = 8;
    local_c8 = *(longlong ********)(param_3 + 8);
    local_a8 = 0x12;
    local_e0 = &DAT_14cbcb540;
    local_d8 = (longlong *******)&local_c8;
    FUN_140881f5a(&local_98,local_cc,&local_e0,0);
    pcVar8 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
    if (pcVar8 != (code *)0x0) {
      ppppppplVar10 = (longlong *******)&local_c8;
      if (0x18 < local_b0) {
        ppppppplVar10 = local_c8;
      }
LAB_140c4eef5:
      (*pcVar8)(ppppppplVar10);
    }
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8);
  }
  pcVar8 = (code *)*param_5;
  if (pcVar8 != (code *)0x0) {
    plVar11 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_5[2];
    }
    uVar9 = (**(code **)(*plVar11 + 8))();
    (*pcVar8)(uVar9,&local_98);
  }
  if (param_4 != '\0') {
    FUN_140dd07e4(&local_98,2);
  }
  local_f8 = &local_98;
  local_f0 = 1;
  FUN_14096dfee(uVar7,&local_c8,param_2,
                CONCAT71((int7)((ulonglong)pcVar8 >> 8),param_6) & 0xffffffff);
  pppplVar14 = pppplStack_c0;
  param_1[0x38] = (longlong ****)local_c8;
  local_c8 = (longlong *******)0x0;
  pppplVar2 = param_1[0x39];
  if (pppplStack_c0 == pppplVar2) {
LAB_140c4efd5:
    pppplVar14 = pppplStack_c0;
    if (pppplStack_c0 != (longlong ****)0x0) {
      LOCK();
      pppplVar2 = pppplStack_c0 + 1;
      *(int *)pppplVar2 = *(int *)pppplVar2 + -1;
      UNLOCK();
      if (*(int *)pppplVar2 == 0) {
        (*(code *)**pppplStack_c0)(pppplStack_c0);
        LOCK();
        piVar1 = (int *)((longlong)pppplVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppplVar14)[2])(pppplVar14);
        }
      }
    }
  }
  else {
    pppplStack_c0 = (longlong ****)0x0;
    param_1[0x39] = pppplVar14;
    if (pppplVar2 != (longlong ****)0x0) {
      LOCK();
      pppplVar14 = pppplVar2 + 1;
      *(int *)pppplVar14 = *(int *)pppplVar14 + -1;
      UNLOCK();
      if (*(int *)pppplVar14 == 0) {
        (*(code *)**pppplVar2)(pppplVar2);
        LOCK();
        piVar1 = (int *)((longlong)pppplVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (*(code *)(*pppplVar2)[2])(pppplVar2);
        }
      }
      goto LAB_140c4efd5;
    }
  }
  pppplVar2 = param_1[0x38];
  uVar15 = CONCAT71((int7)((ulonglong)pppplVar14 >> 8),pppplVar2 != (longlong ****)0x0);
  if (pppplVar2 != (longlong ****)0x0) {
    local_c8 = (longlong *******)0x0;
    pppplStack_c0 = (longlong ****)((ulonglong)pppplStack_c0 & 0xffffffff00000000);
    FUN_1446efa72(&local_c8,0,3,0x10);
    pppplStack_c0 = (longlong ****)CONCAT44(pppplStack_c0._4_4_,3);
    *local_c8 = (longlong ******)&PTR_LAB_14b3e9c20;
    LOCK();
    UNLOCK();
    ppppplVar13 = (longlong *****)(DAT_14c758608 + 1);
    lVar17 = DAT_14c758608 + 1;
    if (ppppplVar13 == (longlong *****)0x0) {
      LOCK();
      UNLOCK();
      ppppplVar13 = (longlong *****)(DAT_14c758608 + 2);
      lVar17 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar17;
    local_c8[2] = (longlong ******)ppppplVar13;
    *local_c8 = (longlong ******)&PTR_FUN_14b975d30;
    local_c8[3] = (longlong ******)param_1;
    local_c8[4] = (longlong ******)FUN_140c4e81e;
    iVar6 = 3;
    if (local_c8 == (longlong *******)0x0) {
LAB_140c4f326:
      if (iVar6 == 0) goto LAB_140c4f1b4;
      if (local_c8 != (longlong *******)0x0) {
        (*(code *)**local_c8)(local_c8,0);
        FUN_1446efa72(&local_c8,0,0,0x10);
        goto LAB_140c4f1a7;
      }
    }
    else {
      cVar5 = (*(code *)(*local_c8)[6])();
      if (cVar5 == '\0') {
        iVar6 = (int)pppplStack_c0;
        goto LAB_140c4f326;
      }
      pppplVar14 = pppplVar2 + 3;
      if (*(int *)((longlong)pppplVar2 + 0x2c) < 1) {
        iVar6 = *(int *)(pppplVar2 + 4);
        iVar12 = *(int *)(pppplVar2 + 5);
        *(int *)(pppplVar2 + 5) = iVar12 + -1;
        if (iVar12 + -1 <= iVar6) {
          iVar12 = iVar6;
          if (0 < iVar6) {
            iVar16 = 0;
            do {
              if (((*(int *)(*pppplVar14 + (longlong)iVar16 * 2 + 1) == 0) ||
                  (pplVar3 = (*pppplVar14)[(longlong)iVar16 * 2], pplVar3 == (longlong **)0x0)) ||
                 (cVar5 = (*(code *)(*pplVar3)[5])(), cVar5 != '\0')) {
                FUN_14005b288(pppplVar14,iVar16);
                FUN_14005b248(pppplVar14);
              }
              else {
                iVar16 = iVar16 + 1;
              }
              iVar12 = *(int *)(pppplVar2 + 4);
            } while (iVar16 < iVar12);
          }
          iVar16 = 2;
          if (2 < iVar12 * 2) {
            iVar16 = iVar12 * 2;
          }
          *(int *)(pppplVar2 + 5) = iVar16;
          if ((iVar16 < iVar6) && (*(int *)((longlong)pppplVar2 + 0x24) != iVar12)) {
            FUN_14045812c();
          }
        }
      }
      if (((int)pppplStack_c0 != 0) && (local_c8 != (longlong *******)0x0)) {
        (*(code *)(*local_c8)[7])(local_c8,&local_e0);
      }
      iVar6 = *(int *)(pppplVar2 + 4);
      lVar17 = (longlong)iVar6;
      *(uint *)(pppplVar2 + 4) = iVar6 + 1U;
      if (*(uint *)((longlong)pppplVar2 + 0x24) < iVar6 + 1U) {
        FUN_1447a71f6(pppplVar14,iVar6);
      }
      ppplVar4 = *pppplVar14;
      ppplVar4[lVar17 * 2] = (longlong **)0x0;
      *(undefined4 *)(ppplVar4 + lVar17 * 2 + 1) = 0;
      ppplVar4[lVar17 * 2] = (longlong **)local_c8;
      local_c8 = (longlong *******)0x0;
      *(int *)(ppplVar4 + lVar17 * 2 + 1) = (int)pppplStack_c0;
LAB_140c4f1a7:
      pppplStack_c0 = (longlong ****)((ulonglong)pppplStack_c0 & 0xffffffff00000000);
LAB_140c4f1b4:
      if (local_c8 != (longlong *******)0x0) {
        FUN_1400020a8();
      }
    }
    if ((((*(char *)((longlong)param_1 + 0x199) != '\0') || (1 < *(byte *)(param_1 + 0x37))) &&
        (param_1[0x2b] != (longlong ****)0x0)) &&
       ((param_1[0x2c] != (longlong ****)0x0 &&
        (lVar17 = (*(code *)(*param_1[0x2c])[4])(), lVar17 != 0)))) {
      FUN_140ba2cd0(lVar17,&DAT_14cbcb528,1);
    }
    if (((param_7 == '\0') &&
        (((*(longlong *)(&DAT_00006850 + (longlong)param_1[0x2a]) == 0 ||
          ((*(longlong *)(*(longlong *)(&DAT_00006850 + (longlong)param_1[0x2a]) + 0x1518) != 0 &&
           (cVar5 = FUN_1408baa42(), cVar5 == '\0')))) && (param_1[0x28] != (longlong ****)0x0))))
       && (*(char *)((longlong)param_1[0x28] + 0x62a) == '\0')) {
      FUN_14103b6f6(param_1[0x38],1);
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_98);
LAB_140c4f239:
  if (*param_5 != 0) {
    plVar11 = param_5 + 4;
    if ((longlong *)param_5[2] != (longlong *)0x0) {
      plVar11 = (longlong *)param_5[2];
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4f358 FUN_140c4f358 body=1179 status=ok
// SIG undefined FUN_140c4f358(void)

void FUN_140c4f358(longlong param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 unaff_RBP;
  ulonglong uVar11;
  bool bVar12;
  undefined4 *puVar13;
  undefined1 auStack_228 [40];
  longlong local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [48];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  longlong local_138;
  longlong local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined1 local_118 [48];
  undefined8 local_e8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80 [12];
  undefined4 *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_228;
  uVar1 = *(undefined1 *)(param_1 + 0x1b8);
  iVar2 = *(int *)(param_1 + 300);
  *(int *)(param_1 + 300) = iVar2 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0x120);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 300) = iVar2;
  }
  else {
    bVar12 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((lVar7 = *(longlong *)(param_1 + 0x118), *(int *)(lVar7 + lVar10) != 0 &&
              (plVar8 = *(longlong **)(lVar7 + -8 + lVar10), plVar8 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar8 + 0x60))
                                (plVar8,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),uVar1) &
                                        0xffffffff), cVar5 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar4 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar4) {
          *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
          if (bVar12) goto LAB_140c4f7e5;
          goto LAB_140c4f3ad;
        }
      }
      uVar6 = uVar11 - 1;
      bVar12 = true;
    } while (1 < uVar11);
    *(int *)(param_1 + 300) = *(int *)(param_1 + 300) + -1;
LAB_140c4f7e5:
    FUN_14474d06a((longlong *)(param_1 + 0x118),0);
  }
LAB_140c4f3ad:
  if ((*(int *)(param_1 + 0x138) < 1) &&
     ((*(longlong *)(param_1 + 0x150) == 0 ||
      (*(int *)(*(longlong *)(param_1 + 0x150) + 0x7ed0) < 1)))) goto LAB_140c4f6d7;
  local_a8 = 0;
  lVar10 = 0;
  local_98 = 0;
  local_90 = 0x3002;
  local_88 = 0;
  local_50 = (undefined4 *)0x0;
  local_48 = 0x200000000;
  local_d0 = CONCAT31(local_d0._1_3_,*(undefined1 *)(param_1 + 0x1b8));
  uStack_cc = param_2[7];
  uStack_c8 = param_2[6];
  local_b0 = *(undefined8 *)(param_2 + 4);
  local_c0 = *param_2;
  uStack_bc = param_2[1];
  uStack_b8 = param_2[2];
  uStack_b4 = param_2[3];
  if (param_2[0xe] != 0) {
    uVar3 = param_2[0xd];
    lVar10 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != param_2[0xe] || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) {
        lVar10 = 0;
      }
      else {
        lVar10 = *plVar8;
        if ((lVar10 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar10);
        }
      }
    }
  }
  local_a0 = lVar10;
  if (*(longlong *)(param_2 + 0x10) == 0) {
LAB_140c4f76b:
    local_200 = 0;
  }
  else {
    puVar9 = *(undefined4 **)(*(longlong *)(param_2 + 0x10) + 8);
    puVar13 = &DAT_14c9485f0;
    if (puVar9 != (undefined4 *)0x0) {
      puVar13 = puVar9;
    }
    if (DAT_14c947fe0 == 0) {
      lVar7 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar7);
      DAT_14c947fe0 = lVar7;
    }
    FUN_140045924(DAT_14c947fe0,&local_200,puVar13,1);
    if (local_200 == 0) goto LAB_140c4f76b;
    local_88 = 0;
  }
  local_138 = lVar10;
  local_98 = local_200;
  if (local_80 != param_2 + 0x12) {
    puVar9 = param_2 + 0x12;
    if (*(undefined4 **)(param_2 + 0x1e) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_2 + 0x1e);
    }
    FUN_1400709d4(local_80,puVar9,param_2[0x20],2);
    local_138 = local_a0;
  }
  uStack_140 = param_2[8];
  local_168 = CONCAT44(uStack_cc,local_d0);
  uStack_160 = CONCAT44(uStack_c4,uStack_c8);
  local_158 = local_c0;
  uStack_154 = uStack_bc;
  uStack_150 = uStack_b8;
  uStack_14c = uStack_b4;
  uStack_148 = (undefined4)local_b0;
  uStack_144 = local_b0._4_4_;
  local_a8 = uStack_140;
  if ((DAT_14c950c29 == 1) && (local_138 != 0)) {
    FUN_1456cec3c(local_138);
  }
  local_130 = local_98;
  local_128 = local_90;
  local_120 = 0;
  local_e8 = 0;
  puVar9 = local_50;
  if (local_50 == (undefined4 *)0x0) {
    puVar9 = local_80;
  }
  FUN_1400709d4(local_118,puVar9,local_48 & 0xffffffff,0);
  FUN_140c4f7f4(param_1 + 0x130,&local_168);
  lVar10 = *(longlong *)(param_1 + 0x150);
  if (lVar10 != 0) {
    uStack_1d8 = (undefined4)local_b0;
    uStack_1d4 = local_b0._4_4_;
    uStack_1d0 = local_a8;
    uStack_1e8 = local_c0;
    uStack_1e4 = uStack_bc;
    uStack_1e0 = uStack_b8;
    local_1dc = uStack_b4;
    local_1f8 = local_d0;
    uStack_1f4 = uStack_cc;
    uStack_1f0 = uStack_c8;
    uStack_1ec = uStack_c4;
    local_1c8 = local_a0;
    if ((local_a0 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_1c0 = local_98;
    local_1b8 = local_90;
    local_1b0 = 0;
    local_178 = 0;
    puVar9 = local_80;
    if (local_50 != (undefined4 *)0x0) {
      puVar9 = local_50;
    }
    FUN_1400709d4(local_1a8,puVar9,local_48 & 0xffffffff,0);
    FUN_140c4f7f4(lVar10 + 0x7ec8,&local_1f8);
  }
  if (local_50 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_140c4f6d7:
  if ((local_40 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140c4f7f4 FUN_140c4f7f4 body=223 status=ok
// SIG undefined FUN_140c4f7f4(void)

void FUN_140c4f7f4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [48];
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = *param_2;
  uStack_a4 = param_2[1];
  uStack_a0 = param_2[2];
  uStack_9c = param_2[3];
  local_98 = param_2[4];
  uStack_94 = param_2[5];
  uStack_90 = param_2[6];
  uStack_8c = param_2[7];
  uStack_88 = param_2[8];
  uStack_84 = param_2[9];
  uStack_80 = param_2[10];
  local_78 = *(longlong *)(param_2 + 0xc);
  if ((local_78 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_70 = *(undefined8 *)(param_2 + 0xe);
  local_68 = param_2[0x10];
  local_60 = 0;
  local_28 = 0;
  puVar1 = param_2 + 0x14;
  if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x20);
  }
  FUN_1400709d4(local_58,puVar1,param_2[0x22],0);
  FUN_140c4f8d4(param_1,&local_a8);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4f8d4 FUN_140c4f8d4 body=341 status=ok
// SIG undefined FUN_140c4f8d4(void)

void FUN_140c4f8d4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  longlong local_88;
  longlong local_80;
  int local_78;
  undefined8 local_70;
  undefined1 local_68 [48];
  longlong local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_80 = 0;
  local_78 = 0x3002;
  local_70 = 0;
  local_38 = 0;
  local_30 = 0x200000000;
  local_b8 = *param_2;
  uStack_b4 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_ac = param_2[3];
  uStack_a8 = param_2[4];
  uStack_a4 = param_2[5];
  uStack_a0 = param_2[6];
  local_9c = param_2[7];
  uStack_98 = param_2[8];
  uStack_94 = param_2[9];
  uStack_90 = param_2[10];
  local_88 = *(longlong *)(param_2 + 0xc);
  if (DAT_14c950c29 == '\x01') {
    if (local_88 == 0) {
      local_88 = 0;
    }
    else {
      FUN_1456cec3c();
      local_88 = *(longlong *)(param_2 + 0xc);
    }
  }
  if (*(longlong *)(param_2 + 0xe) != 0 || param_2[0x10] != 0x3002) {
    local_70 = 0;
    local_80 = *(longlong *)(param_2 + 0xe);
    local_78 = param_2[0x10];
  }
  if (&local_b8 != param_2) {
    puVar1 = param_2 + 0x14;
    if (*(undefined4 **)(param_2 + 0x20) != (undefined4 *)0x0) {
      puVar1 = *(undefined4 **)(param_2 + 0x20);
    }
    FUN_1400709d4(local_68,puVar1,param_2[0x22],2);
  }
  FUN_1447cd2ec(param_1,&local_b8);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4fa2a FUN_140c4fa2a body=154 status=ok
// SIG undefined FUN_140c4fa2a(void)

bool FUN_140c4fa2a(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  float *pfVar3;
  float extraout_XMM0_Da;
  
  if ((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
    lVar2 = (**(code **)(*param_2 + 0x10))(param_2);
    uVar1 = FUN_140a3f8a2(param_1,*(undefined8 *)(lVar2 + 0x198));
    if (uVar1 != 0xffffffff) {
      if ((int)uVar1 < 0) {
        return false;
      }
      if (*(char *)(*(longlong *)(param_1 + 0x38) + 0x10 + (longlong)(int)uVar1 * 0x18) != '\0') {
        return false;
      }
      if (((int)uVar1 < *(int *)(param_1 + 0x40)) &&
         (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 8 + (ulonglong)uVar1 * 0x18),
         lVar2 != 0)) {
        (**(code **)(*param_2 + 0x148))(param_2);
        if (*(char *)(lVar2 + 0x2f) == '\x01') {
          pfVar3 = (float *)(lVar2 + 0x30);
        }
        else {
          pfVar3 = (float *)(*(longlong *)(param_1 + 0x28) + 0x18);
        }
        return *pfVar3 <= extraout_XMM0_Da;
      }
    }
  }
  return false;
}



// FUNCTION 140c4fac4 FUN_140c4fac4 body=59 status=ok
// SIG undefined FUN_140c4fac4(void)

void FUN_140c4fac4(longlong *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  iVar1 = *param_3;
  lVar2 = *param_1;
  FUN_140c4fb22(lVar2,iVar1);
  UNRECOVERED_JUMPTABLE = *(code **)param_1[1];
                    /* WARNING: Could not recover jumptable at 0x000140c4fafc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (((undefined8 *)param_1[1])[1],(longlong)iVar1 * 0x18 + *(longlong *)(lVar2 + 0x60),
             UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 140c4fb00 FUN_140c4fb00 body=34 status=ok
// SIG undefined FUN_140c4fb00(void)

void FUN_140c4fb00(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = FUN_140c4fc1e(param_2);
  UNRECOVERED_JUMPTABLE = (code *)*puVar1;
                    /* WARNING: Could not recover jumptable at 0x000140c4fb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar1[1],uVar2,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 140c4fb22 FUN_140c4fb22 body=251 status=ok
// SIG undefined FUN_140c4fb22(void)

void FUN_140c4fb22(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined1 local_40 [8];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x88))) {
    lVar4 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    if ((*(uint *)(lVar4 + (ulonglong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1) != 0)
    goto LAB_140c4fb6c;
  }
  local_58 = (undefined **)0x0;
  uStack_50 = 0;
  local_48 = (longlong *)0x0;
  FUN_1457895c4(&local_58);
  local_58 = &PTR_FUN_14b3f7678;
  FUN_14578977c(param_1 + 0x60,local_40,param_2);
  FUN_145789644(local_38,&local_58);
  plVar3 = local_48;
  *local_38 = &PTR_FUN_14b3f7678;
  local_58 = &PTR_FUN_14a184350;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_140c4fb6c:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c4fc1e FUN_140c4fc1e body=407 status=ok
// SIG undefined FUN_140c4fc1e(void)

undefined8 FUN_140c4fc1e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_140c4fdb6();
  lVar4 = *(longlong *)(param_1 + 8);
  if ((longlong)*(int *)(lVar4 + 0x10) == 0) {
    iVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(lVar4 + 8);
    lVar8 = (longlong)*(int *)(lVar4 + 0x10) << 5;
    lVar4 = 0;
    do {
      if ((lVar3 != 0) && (lVar2 = *(longlong *)(lVar5 + 8), lVar2 != 0)) {
        iVar6 = *(int *)(lVar3 + 0x38);
        iVar1 = *(int *)(lVar2 + 0x38);
        if ((iVar6 <= iVar1) &&
           (lVar7 = lVar5,
           *(longlong **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar6 * 8) ==
           (longlong *)(lVar3 + 0x30))) break;
        if ((iVar1 <= iVar6) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == lVar2 + 0x30)) {
          local_78 = 0;
          uStack_60 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          uStack_70 = 0x8000000000;
          local_68 = 0xffffffff;
          local_48 = 0;
          FUN_1470b0ad4(lVar5,&local_a8,lVar3);
          FUN_148823464(lVar5,&local_a8);
          uStack_50 = uStack_50 & 0xffffffff00000000;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          FUN_1400fd330(&local_98);
          lVar4 = lVar5;
        }
      }
      lVar5 = lVar5 + 0x20;
      lVar8 = lVar8 + -0x20;
      lVar7 = lVar4;
    } while (lVar8 != 0);
    if (lVar7 != 0) goto LAB_140c4fc9f;
    lVar4 = *(longlong *)(param_1 + 8);
    iVar6 = *(int *)(lVar4 + 0x10);
  }
  *(uint *)(lVar4 + 0x10) = iVar6 + 1U;
  if (*(uint *)(lVar4 + 0x14) < iVar6 + 1U) {
    FUN_1457d8b76((longlong *)(lVar4 + 8),iVar6);
  }
  lVar7 = (longlong)iVar6 * 0x20 + *(longlong *)(lVar4 + 8);
  FUN_1457d8b58(lVar7);
  FUN_1457898ca(lVar7);
LAB_140c4fc9f:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *(undefined8 *)(lVar7 + 0x10);
}



// FUNCTION 140c4fdb6 FUN_140c4fdb6 body=57 status=ok
// SIG undefined FUN_140c4fdb6(void)

void FUN_140c4fdb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61b00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61b00 = FUN_140002ddd(FUN_1464f49a4,uVar1,L"GbxPlayerAnalyticAggregates");
  }
  return;
}



// FUNCTION 140c4fdf0 FUN_140c4fdf0 body=24 status=ok
// SIG undefined FUN_140c4fdf0(void)

void FUN_140c4fdf0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140c4fe04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140c4fe08 FUN_140c4fe08 body=59 status=ok
// SIG undefined FUN_140c4fe08(void)

longlong FUN_140c4fe08(longlong param_1,int param_2)

{
  FUN_140c4fe43(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140c4fe43 FUN_140c4fe43 body=38 status=ok
// SIG undefined FUN_140c4fe43(void)

void FUN_140c4fe43(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_145789548(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 140c4fe69 FUN_140c4fe69 body=781 status=ok
// SIG undefined FUN_140c4fe69(void)

void FUN_140c4fe69(longlong param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x30);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14a38be40;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  puVar5[2] = param_2;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = puVar4;
  FUN_1415b8508();
  FUN_140069376(param_1);
  local_60 = puVar4;
  if ((param_4 & 4) == 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1f0);
      puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar4 = puVar5 + 0x3c;
    }
    *puVar1 = (ulonglong)puVar4;
    local_58 = DAT_14ca96278;
    if (DAT_14ca96278 != 0) {
      LOCK();
      *(int *)(DAT_14ca96278 + 8) = *(int *)(DAT_14ca96278 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca96230;
    local_88 = 2;
    FUN_140068f1a(puVar5);
    *puVar5 = &PTR_FUN_14a38bf00;
    puVar5[0x38] = &local_68;
    puVar5[0x39] = param_2;
    *(undefined4 *)(puVar5 + 0x3a) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1d4) = uStack_74;
    *(undefined4 *)(puVar5 + 0x3b) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x1dc) = uStack_6c;
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar4 = puVar5 + 0x3e;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x200);
      puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar4 = puVar5 + 0x3e;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_58 = DAT_14ca96278;
    if (DAT_14ca96278 != 0) {
      LOCK();
      *(int *)(DAT_14ca96278 + 8) = *(int *)(DAT_14ca96278 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca96230;
    local_88 = 2;
    FUN_140068f1a(puVar5);
    puVar5[0x38] = &local_68;
    puVar5[0x39] = param_2;
    *(undefined4 *)(puVar5 + 0x3a) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1d4) = uStack_74;
    *(undefined4 *)(puVar5 + 0x3b) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x1dc) = uStack_6c;
    *puVar5 = &PTR_FUN_14a38bee0;
    *(undefined4 *)(puVar5 + 0x3c) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c50178 FUN_140c50178 body=154 status=ok
// SIG undefined FUN_140c50178(void)

ulonglong FUN_140c50178(undefined8 param_1,wchar_t *param_2)

{
  DWORD DVar1;
  size_t sVar2;
  ulonglong uVar3;
  undefined1 auStack_258 [32];
  LPCWSTR local_238;
  undefined2 *local_230;
  char local_220;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  sVar2 = wcslen(param_2);
  if ((int)sVar2 == 0) {
    uVar3 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  else {
    FUN_140c50214(&local_238,param_2);
    *local_230 = 0;
    DVar1 = GetFileAttributesW(local_238);
    if (local_220 == '\x01') {
      FUN_1400020a8(local_238);
    }
    uVar3 = (ulonglong)((byte)((DVar1 & 0x10) >> 4) & DVar1 != 0xffffffff);
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c50214 FUN_140c50214 body=149 status=ok
// SIG undefined FUN_140c50214(void)

longlong * FUN_140c50214(longlong *param_1,wchar_t *param_2)

{
  size_t sVar1;
  longlong *_Dst;
  int iVar2;
  
  _Dst = param_1 + 4;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = (longlong)_Dst;
  param_1[1] = (longlong)_Dst;
  param_1[2] = (longlong)(param_1 + 0x44);
  if (param_2 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_2);
    iVar2 = (int)sVar1;
    if (iVar2 < 0x100) {
      if (iVar2 == 0) goto LAB_140c5027f;
    }
    else {
      FUN_140213274(param_1,(longlong)iVar2);
      _Dst = (longlong *)param_1[1];
    }
    memcpy(_Dst,param_2,(longlong)(sVar1 << 0x20) >> 0x1f);
    param_1[1] = (longlong)_Dst + (longlong)iVar2 * 2;
  }
LAB_140c5027f:
  FUN_144a08678(param_1,0);
  return param_1;
}



// FUNCTION 140c502aa FUN_140c502aa body=546 status=ok
// SIG undefined FUN_140c502aa(void)

undefined4 * FUN_140c502aa(longlong *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 *local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined8 **local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 **local_48;
  code *local_40;
  longlong **local_38;
  code **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar7 = *param_1;
  if (*(code **)(lVar7 + 0x5e8) == FUN_140972dde) {
    if (param_1[0x76] != 0) goto LAB_140c5047a;
    if (*(code **)(lVar7 + 0x5f8) == FUN_144784df4) {
      if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
        if ((((*(int *)((longlong)param_1 + 0x75b4) != 0) &&
             (uVar1 = *(uint *)(param_1 + 0xeb6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
           && (((plVar8 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                plVar8 != (longlong *)0x0 &&
                ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x75b4))) &&
               ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
            lVar7 = *plVar8;
          }
          else {
            lVar7 = 0;
          }
          lVar7 = lVar7 + 0x110;
          goto LAB_140c50451;
        }
      }
      else {
        lVar7 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
LAB_140c50451:
        if (lVar7 != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x20);
          goto LAB_140c5045e;
        }
      }
    }
    else {
      lVar7 = (**(code **)(lVar7 + 0x5f8))(param_1);
LAB_140c5045e:
      if (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 0x3b0);
        goto LAB_140c5046e;
      }
    }
  }
  else {
    lVar7 = (**(code **)(lVar7 + 0x5e8))(param_1);
LAB_140c5046e:
    if (lVar7 != 0) {
      lVar7 = *param_1;
LAB_140c5047a:
      cVar5 = (**(code **)(lVar7 + 0x700))(param_1);
      if (cVar5 != '\0') goto LAB_140c5048b;
    }
  }
  local_78 = &local_80;
  local_80 = DAT_14cb72620;
  local_70 = &local_58;
  local_58 = 0;
  local_60 = &local_78;
  local_68 = &LAB_143cbcae0;
  if (param_1[0x309] != 0) {
    local_50 = param_1 + 0x301;
    local_38 = &local_50;
    local_48 = &local_68;
    local_30 = &local_40;
    local_40 = FUN_143cbca2e;
    local_20 = &local_30;
    local_28 = FUN_1487df56e;
    FUN_1447c5ba2();
    if (local_58 != 0) {
      puVar6 = (undefined4 *)FUN_1407726b2();
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *param_2 = *puVar6;
      param_2[1] = uVar2;
      param_2[2] = uVar3;
      param_2[3] = uVar4;
      *(undefined8 *)(param_2 + 4) = *(undefined8 *)(puVar6 + 4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
    }
  }
LAB_140c5048b:
  FUN_140c504ce(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140c504ce FUN_140c504ce body=601 status=ok
// SIG undefined FUN_140c504ce(void)

double * FUN_140c504ce(longlong *param_1,double *param_2)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  int iVar9;
  double dVar10;
  longlong lVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  double local_50;
  
  dVar10 = (double)(DAT_14c707940 ^ (ulonglong)auStack_a8);
  plVar15 = param_1;
  local_50 = dVar10;
  if (param_1[0x78] != 0) {
    dVar10 = (double)(**(code **)(*param_1 + 0x728))();
    if (SUB81(dVar10,0) == '\0') {
      (**(code **)(*(longlong *)param_1[0x78] + 0x718))((longlong *)param_1[0x78],&local_88,param_2)
      ;
      goto LAB_140c5052d;
    }
  }
  uVar13 = SUB84(plVar15,0);
  lVar11 = param_1[0x39];
  if (lVar11 == 0) {
    local_58 = DAT_14c846508;
    local_68 = (undefined4)DAT_14c8464f8;
    uStack_64 = DAT_14c8464f8._4_4_;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
    dVar4 = *(double *)(lVar11 + 0x240);
    dVar5 = *(double *)(lVar11 + 0x248);
    dVar6 = *(double *)(lVar11 + 0x250);
    dVar7 = *(double *)(lVar11 + 600);
    pdVar12 = *(double **)(lVar11 + 0x228);
    local_88 = dVar4;
    uStack_80 = dVar5;
    local_78 = dVar6;
    uStack_70 = dVar7;
    if (pdVar12 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
      dVar10 = DAT_14c8463d8;
      *pdVar12 = DAT_14c8463d0;
      pdVar12[1] = dVar10;
      dVar10 = DAT_14c8463e8;
      pdVar12[2] = DAT_14c8463e0;
      pdVar12[3] = dVar10;
      dVar10 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar12[5] = dVar10;
      dVar10 = DAT_14c846508;
      pdVar12[6] = DAT_14c846508;
      *(double **)(lVar11 + 0x228) = pdVar12;
    }
    auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar12[1]);
    auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar12);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar12[1]) >> 0x20);
    iVar9 = movmskpd(SUB84(dVar10,0),auVar2);
    auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar12[3]);
    auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar12[2]);
    auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar12[3]) >> 0x20);
    uVar14 = movmskpd(uVar13,auVar3);
    if ((uVar14 & 0x3fffffff) != 0 || iVar9 != 0) {
      *(undefined4 *)(pdVar12 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar12 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar12 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar12 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar12[6] = local_58;
      pdVar12[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar12[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = pdVar12[6];
    local_68 = *(undefined4 *)(pdVar12 + 4);
    uStack_64 = *(undefined4 *)((longlong)pdVar12 + 0x24);
    uStack_60 = *(undefined4 *)(pdVar12 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  }
  *param_2 = (double)CONCAT44(uStack_64,local_68);
  param_2[1] = (double)CONCAT44(uStack_5c,uStack_60);
  param_2[2] = local_58;
  if (1e-08 < ABS(*param_2)) goto LAB_140c5052d;
  fVar1 = *(float *)((longlong)param_1 + 0x3a4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    dVar10 = (double)fVar1;
  }
  else {
    lVar11 = FUN_1447210f0(param_1);
    if ((lVar11 != 0) && (lVar11 = *(longlong *)(lVar11 + 0x108), lVar11 != 0)) {
      cVar8 = FUN_147a5faf8(lVar11);
      if (cVar8 != '\0') {
        uVar14 = FUN_147cdd124(lVar11 + 0xcc8,&DAT_14c8733f4);
        if (uVar14 < 0x18) {
          dVar10 = ((double)*(byte *)((longlong)param_1 + 0x3a2) * 360.0) / 255.0;
          goto LAB_140c5063e;
        }
      }
    }
    dVar10 = (double)*(byte *)((longlong)param_1 + 0x3a2) * 360.0 * 0.00390625;
  }
LAB_140c5063e:
  *param_2 = dVar10;
LAB_140c5052d:
  if (((ulonglong)local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c50728 FUN_140c50728 body=593 status=ok
// SIG undefined FUN_140c50728(void)

undefined8 FUN_140c50728(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined7 uVar4;
  undefined8 uVar3;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + 0x3c0);
  if (lVar2 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1463c0cc2;
      local_38 = &LAB_147c9db5b;
      local_40 = &LAB_1463f9c44;
      local_48 = &DAT_149e063b2;
      local_50 = 0x2000000000;
      local_58 = 0x10000004;
      local_60 = 8;
      local_68 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar2 = *(longlong *)(param_1 + 0x3c0);
      if (lVar2 == 0) goto LAB_140c50965;
    }
    lVar5 = 0;
    if ((DAT_14caf9cd0 == 0) || (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 == 0))
    goto LAB_140c50792;
    if (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          == DAT_14caf9cd0 + 0x30) {
        lVar5 = lVar2;
      }
      goto LAB_140c50792;
    }
  }
LAB_140c50965:
  lVar5 = 0;
LAB_140c50792:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf6510) && (FUN_144b3d300(&DAT_14caf6510), DAT_14caf6510 == -1)) {
    FUN_1446f470e(&DAT_14caf6508,L"FreeCam",1);
    _Init_thread_footer(&DAT_14caf6510);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caf6520) && (FUN_144b3d300(&DAT_14caf6520), DAT_14caf6520 == -1)) {
    FUN_1446f470e(&DAT_14caf6518,L"FreeCam_Default",1);
    _Init_thread_footer(&DAT_14caf6520);
  }
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x448) == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x448) + 0x3a0);
    uVar4 = (undefined7)((ulonglong)lVar2 >> 8);
    if (lVar2 == DAT_14caf6508) {
      uVar3 = CONCAT71(uVar4,1);
    }
    else {
      uVar3 = CONCAT71(uVar4,lVar2 == DAT_14caf6518);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140c5097a FUN_140c5097a body=292 status=ok
// SIG undefined FUN_140c5097a(void)

ulonglong FUN_140c5097a(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined8 unaff_RSI;
  ulonglong uVar10;
  bool bVar12;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_30;
  undefined7 uVar11;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x48);
  uVar11 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (((*(uint *)(lVar4 + 0x19c) & 0xfffffffe) == 2) ||
     (plVar5 = *(longlong **)(param_1 + 0xf0), plVar5 == (longlong *)0x0)) goto LAB_140c50a03;
  iVar9 = (int)plVar5[1];
  do {
    if (iVar9 == 0) goto LAB_140c50a03;
    LOCK();
    iVar7 = (int)plVar5[1];
    bVar12 = iVar9 == iVar7;
    if (bVar12) {
      *(int *)(plVar5 + 1) = iVar9 + 1;
      iVar7 = iVar9;
    }
    iVar9 = iVar7;
    UNLOCK();
  } while (!bVar12);
  lVar6 = *(longlong *)(param_1 + 0xe8);
  if (lVar6 == 0) {
LAB_140c509fd:
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_140c50a03;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar9 = *piVar3;
    UNLOCK();
    uVar10 = CONCAT71(uVar11,1);
  }
  else {
    local_48 = 0;
    plStack_40 = (longlong *)0x0;
    FUN_140c50aa0(lVar6,&local_48);
    plVar1 = plStack_40;
    if (plStack_40 != (longlong *)0x0) {
      LOCK();
      plVar2 = plStack_40 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plStack_40)(plStack_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    if ((*(char *)(lVar4 + 0x1e1) != '\x01') ||
       (cVar8 = FUN_141803e3a(lVar6,0x3f800000), cVar8 != '\0')) goto LAB_140c509fd;
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      uVar10 = 0;
      goto LAB_140c50a03;
    }
    (**(code **)*plVar5)(plVar5);
    uVar10 = 0;
    LOCK();
    piVar3 = (int *)((longlong)plVar5 + 0xc);
    *piVar3 = *piVar3 + -1;
    iVar9 = *piVar3;
    UNLOCK();
  }
  if (iVar9 == 0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
LAB_140c50a03:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c50aa0 FUN_140c50aa0 body=511 status=ok
// SIG undefined FUN_140c50aa0(void)

void FUN_140c50aa0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  lVar3 = *param_2;
  if (*(longlong *)(param_1 + 0x390) != lVar3) {
    lVar13 = param_2[1];
    if (lVar13 != 0) {
      LOCK();
      *(int *)(lVar13 + 8) = *(int *)(lVar13 + 8) + 1;
      UNLOCK();
    }
    plVar10 = *(longlong **)(param_1 + 0x398);
    *(longlong *)(param_1 + 0x390) = lVar3;
    *(longlong *)(param_1 + 0x398) = lVar13;
    if (plVar10 != (longlong *)0x0) {
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
    if ((((*(int *)(param_1 + 0x14) != 0) && (uVar2 = *(uint *)(param_1 + 0x10), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar10 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar10 != (longlong *)0x0 && ((int)plVar10[2] == *(int *)(param_1 + 0x14))) &&
        (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 && (lVar3 = *plVar10, lVar3 != 0)))))) {
      iVar7 = *(int *)(lVar3 + 0x1284);
      *(int *)(lVar3 + 0x1284) = iVar7 + 1;
      uVar8 = (ulonglong)*(int *)(lVar3 + 0x1278);
      if ((longlong)uVar8 < 1) {
        *(int *)(lVar3 + 0x1284) = iVar7;
      }
      else {
        plVar10 = (longlong *)(lVar3 + 0x1270);
        bVar11 = false;
        do {
          lVar13 = uVar8 * 0x10 + -8;
          uVar14 = uVar8;
          while (((*(int *)(*plVar10 + lVar13) != 0 &&
                  (plVar4 = *(longlong **)(*plVar10 + -8 + lVar13), plVar4 != (longlong *)0x0)) &&
                 (cVar6 = (**(code **)(*plVar4 + 0x60))(), cVar6 != '\0'))) {
            lVar13 = lVar13 + -0x10;
            bVar5 = uVar14 < 2;
            uVar14 = uVar14 - 1;
            if (bVar5) {
              iVar7 = *(int *)(lVar3 + 0x1284) + -1;
              *(int *)(lVar3 + 0x1284) = iVar7;
              if (!bVar11) {
                return;
              }
              goto LAB_140c50be8;
            }
          }
          uVar8 = uVar14 - 1;
          bVar11 = true;
        } while (1 < uVar14);
        iVar7 = *(int *)(lVar3 + 0x1284) + -1;
        *(int *)(lVar3 + 0x1284) = iVar7;
LAB_140c50be8:
        if (iVar7 < 1) {
          iVar7 = *(int *)(lVar3 + 0x1278);
          iVar9 = iVar7;
          if (0 < iVar7) {
            iVar12 = 0;
            do {
              if (((*(int *)(*plVar10 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                  (plVar4 = *(longlong **)(*plVar10 + (longlong)iVar12 * 0x10),
                  plVar4 == (longlong *)0x0)) ||
                 (cVar6 = (**(code **)(*plVar4 + 0x28))(), cVar6 != '\0')) {
                FUN_14005b288(plVar10,iVar12);
                FUN_14005b248(plVar10);
              }
              else {
                iVar12 = iVar12 + 1;
              }
              iVar9 = *(int *)(lVar3 + 0x1278);
            } while (iVar12 < iVar9);
          }
          iVar12 = 2;
          if (2 < iVar9 * 2) {
            iVar12 = iVar9 * 2;
          }
          *(int *)(lVar3 + 0x1280) = iVar12;
          if ((iVar12 < iVar7) && (*(int *)(lVar3 + 0x127c) != iVar9)) {
            FUN_14045812c(plVar10);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140c50ca0 FUN_140c50ca0 body=52 status=ok
// SIG undefined FUN_140c50ca0(void)

void FUN_140c50ca0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140c50cd4();
  if (lVar1 == 0) {
    return;
  }
  FUN_14107e4c6(lVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38),
                *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x60),0);
  return;
}



// FUNCTION 140c50cd4 FUN_140c50cd4 body=346 status=ok
// SIG undefined FUN_140c50cd4(void)

undefined8 FUN_140c50cd4(void)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_143e4df00();
  if ((lVar3 != 0) && (plVar1 = *(longlong **)(lVar3 + 0x3c0), plVar1 != (longlong *)0x0)) {
    if (DAT_14cb61cd0 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b31ae;
      local_48 = &LAB_1486dca4f;
      local_50 = &LAB_1464f50a6;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
    }
    if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
         DAT_14cb61cd0 + 0x30)) && ((*(byte *)(plVar1 + 0x84) & 2) != 0)) {
      cVar2 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140c50e4c FUN_140c50e4c body=57 status=ok
// SIG undefined FUN_140c50e4c(void)

void FUN_140c50e4c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23410 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23410 = FUN_140002ddd(FUN_14643daa5,uVar1,L"GpsTest_IsCurrentTarget");
  }
  return;
}


