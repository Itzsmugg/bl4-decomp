// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144b2410c FUN_144b2410c body=57 status=ok
// SIG undefined FUN_144b2410c(void)

void FUN_144b2410c(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x68) + -1;
  if (param_3 < iVar4) {
    iVar4 = param_3;
  }
  lVar3 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x60);
  }
  param_2[2] = *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
  uVar2 = puVar1[1];
  *param_2 = *puVar1;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 144b24146 FUN_144b24146 body=821 status=ok
// SIG undefined FUN_144b24146(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b24146(longlong param_1,double *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  iVar13 = *(int *)(param_1 + 0x68) + -1;
  if (param_3 < iVar13) {
    iVar13 = param_3;
  }
  lVar12 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar12 = *(longlong *)(param_1 + 0x60);
  }
  lVar14 = (longlong)iVar13;
  fVar1 = *(float *)(lVar12 + lVar14 * 0x18);
  fVar2 = *(float *)(lVar12 + 4 + lVar14 * 0x18);
  fVar3 = *(float *)(lVar12 + 8 + lVar14 * 0x18);
  fVar4 = *(float *)(lVar12 + 0xc + lVar14 * 0x18);
  fVar5 = *(float *)(lVar12 + 0x10 + lVar14 * 0x18);
  fVar6 = *(float *)(lVar12 + 0x14 + lVar14 * 0x18);
  lVar12 = *(longlong *)(param_1 + 0xd0);
  lVar14 = (longlong)param_3 * 0x30;
  auVar7 = *(undefined1 (*) [16])(lVar12 + lVar14);
  fVar24 = (fVar3 + fVar6) * 0.5;
  auVar27 = insertps(ZEXT416((uint)((fVar1 + fVar4) * 0.5)),ZEXT416((uint)((fVar2 + fVar5) * 0.5)),
                     0x10);
  fVar17 = (fVar6 - fVar3) * 0.5;
  auVar16 = insertps(ZEXT416((uint)((fVar4 - fVar1) * 0.5)),ZEXT416((uint)((fVar5 - fVar2) * 0.5)),
                     0x10);
  fVar1 = auVar27._0_4_;
  fVar4 = auVar27._4_4_;
  fVar3 = auVar16._0_4_;
  fVar5 = auVar16._4_4_;
  auVar16 = *(undefined1 (*) [16])(lVar12 + 0xc + lVar14);
  auVar21 = insertps(auVar7,auVar7,0x8e);
  auVar27 = *(undefined1 (*) [16])(lVar12 + 0x18 + lVar14);
  uVar8 = auVar27._12_4_;
  auVar19 = insertps(auVar16,auVar16,0x8e);
  auVar23 = insertps(ZEXT416((uint)fVar2),auVar27,0x8e);
  auVar25._4_4_ = uVar8;
  auVar25._0_4_ = uVar8;
  auVar25._8_4_ = uVar8;
  auVar25._12_4_ = uVar8;
  auVar25 = insertps(auVar25,*(undefined4 *)(lVar12 + 0x28 + lVar14),0x10);
  auVar26 = blendps(ZEXT416(*(uint *)(lVar12 + 0x2c + lVar14)),_DAT_149932340,0xe);
  fVar11 = fVar24 * auVar27._0_4_ + fVar4 * auVar16._0_4_ + fVar1 * auVar7._0_4_ + auVar25._0_4_;
  fVar6 = fVar24 * auVar27._4_4_ + fVar4 * auVar16._4_4_ + fVar1 * auVar7._4_4_ + auVar25._4_4_;
  fVar2 = fVar24 * auVar23._0_4_ + fVar4 * auVar19._0_4_ + fVar1 * auVar21._0_4_ + auVar26._0_4_;
  fVar24 = ABS(auVar27._0_4_ * fVar17) + ABS(auVar16._0_4_ * fVar5) + ABS(auVar7._0_4_ * fVar3);
  fVar4 = ABS(auVar27._4_4_ * fVar17) + ABS(auVar16._4_4_ * fVar5) + ABS(auVar7._4_4_ * fVar3);
  fVar1 = ABS(fVar17 * auVar23._0_4_) + ABS(fVar5 * auVar19._0_4_) + ABS(fVar3 * auVar21._0_4_);
  dVar15 = (double)(fVar2 - fVar1);
  dVar18 = (double)(fVar6 - fVar4);
  dVar9 = (double)(fVar11 - fVar24);
  dVar20 = ((double)(fVar1 + fVar2) - dVar15) * 0.5;
  dVar10 = ((double)(fVar4 + fVar6) - dVar18) * 0.5;
  dVar22 = ((double)(fVar24 + fVar11) - dVar9) * 0.5;
  param_2[3] = dVar22;
  param_2[4] = dVar10;
  param_2[5] = dVar20;
  param_2[6] = SQRT(dVar20 * dVar20 + dVar22 * dVar22 + dVar10 * dVar10);
  *param_2 = dVar9 + dVar22 + *(double *)(param_1 + 0x30);
  param_2[1] = dVar18 + dVar10 + *(double *)(param_1 + 0x38);
  param_2[2] = dVar15 + dVar20 + *(double *)(param_1 + 0x40);
  return param_2;
}



// FUNCTION 144b2447c FUN_144b2447c body=322 status=ok
// SIG undefined FUN_144b2447c(void)

void FUN_144b2447c(longlong param_1,double *param_2,int param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  
  lVar7 = *(longlong *)(param_1 + 0xd0);
  lVar14 = (longlong)param_3 * 0x30;
  fVar8 = ((float *)(lVar7 + lVar14))[1];
  pfVar1 = (float *)(lVar7 + 0xc + lVar14);
  fVar9 = *pfVar1;
  fVar10 = pfVar1[1];
  pfVar1 = (float *)(lVar7 + 0x18 + lVar14);
  fVar11 = *pfVar1;
  fVar12 = pfVar1[1];
  fVar13 = pfVar1[3];
  fVar2 = *(float *)(lVar7 + 8 + lVar14);
  fVar3 = *(float *)(lVar7 + 0x14 + lVar14);
  fVar4 = *(float *)(lVar7 + 0x20 + lVar14);
  fVar5 = *(float *)(lVar7 + 0x28 + lVar14);
  fVar6 = *(float *)(lVar7 + 0x2c + lVar14);
  *param_2 = (double)*(float *)(lVar7 + lVar14);
  param_2[1] = (double)fVar8;
  param_2[2] = (double)fVar2;
  param_2[3] = 0.0;
  param_2[4] = (double)fVar9;
  param_2[5] = (double)fVar10;
  param_2[6] = (double)fVar3;
  param_2[7] = 0.0;
  param_2[8] = (double)fVar11;
  param_2[9] = (double)fVar12;
  param_2[10] = (double)fVar4;
  param_2[0xb] = 0.0;
  param_2[0xc] = (double)fVar13 + *(double *)(param_1 + 0x30);
  param_2[0xd] = (double)fVar5 + *(double *)(param_1 + 0x38);
  param_2[0xe] = (double)fVar6 + *(double *)(param_1 + 0x40);
  param_2[0xf] = 1.0;
  return;
}



// FUNCTION 144b24618 FUN_144b24618 body=983 status=ok
// SIG undefined FUN_144b24618(void)

longlong * FUN_144b24618(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  
  *param_1 = *param_2;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  lVar8 = param_2[4];
  lVar3 = param_2[5];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar7 = param_2[7];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 6) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar1;
  *(int *)(param_1 + 7) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  param_1[4] = lVar8;
  param_1[5] = lVar3;
  if (*param_1 != 0) {
    *param_2 = 0;
  }
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0xf) = 0x7fffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  if (param_1 != param_2) {
    lVar8 = param_2[0xc];
    if (lVar8 == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x54);
      lVar8 = param_2[0xb];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x5c);
      *(int *)(param_1 + 10) = (int)param_2[10];
      *(undefined4 *)((longlong)param_1 + 0x54) = uVar1;
      *(int *)(param_1 + 0xb) = (int)lVar8;
      *(undefined4 *)((longlong)param_1 + 0x5c) = uVar2;
      lVar8 = param_2[0xc];
    }
    param_1[0xc] = lVar8;
    param_2[0xc] = 0;
    *(int *)(param_1 + 0xd) = (int)param_2[0xd];
    *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
    param_2[0xd] = 0;
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = param_2[8];
    param_2[8] = 0;
    *(int *)(param_1 + 9) = (int)param_2[9];
    *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)param_2 + 0x74);
  *(int *)(param_1 + 0xe) = (int)param_2[0xe];
  *(int *)(param_1 + 0xf) = (int)param_2[0xf];
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x84);
  lVar8 = param_2[0x11];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x8c);
  *(int *)(param_1 + 0x10) = (int)param_2[0x10];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  *(undefined4 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (*(int *)((longlong)param_2 + 0x4c) < 0) {
    FUN_14480809c(param_2 + 8,0);
  }
  param_2[0xe] = 0x7fffffff00000000;
  param_2[0xf] = 0x7fffffff;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *(undefined2 *)((longlong)param_1 + 0x94) = *(undefined2 *)((longlong)param_2 + 0x94);
  *(int *)(param_1 + 0x12) = (int)param_2[0x12];
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(int *)(param_1 + 0x14) = (int)param_2[0x14];
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x18] = param_2[0x18];
  param_2[0x18] = 0;
  *(int *)(param_1 + 0x19) = (int)param_2[0x19];
  *(undefined4 *)((longlong)param_1 + 0xcc) = *(undefined4 *)((longlong)param_2 + 0xcc);
  param_2[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1a] = param_2[0x1a];
  param_2[0x1a] = 0;
  *(int *)(param_1 + 0x1b) = (int)param_2[0x1b];
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_2[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = 0;
  *(int *)(param_1 + 0x1d) = (int)param_2[0x1d];
  *(undefined4 *)((longlong)param_1 + 0xec) = *(undefined4 *)((longlong)param_2 + 0xec);
  param_2[0x1d] = 0;
  *(short *)(param_1 + 0x1e) = (short)param_2[0x1e];
  param_1[0x22] = 0;
  lVar8 = param_2[0x22];
  if (lVar8 == 0) {
    lVar8 = param_2[0x1f];
    lVar3 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x1f] = lVar8;
    param_1[0x20] = lVar3;
    lVar8 = param_2[0x22];
  }
  param_1[0x22] = lVar8;
  param_2[0x22] = 0;
  *(int *)(param_1 + 0x23) = (int)param_2[0x23];
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  param_2[0x23] = 0x100000000;
  param_1[0x24] = 0;
  param_1[0x24] = param_2[0x24];
  param_2[0x24] = 0;
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  param_2[0x25] = 0;
  plVar9 = param_2 + 0x26;
  plVar10 = param_1 + 0x26;
  for (lVar8 = 9; lVar8 != 0; lVar8 = lVar8 + -1) {
    *plVar10 = *plVar9;
    plVar9 = plVar9 + 1;
    plVar10 = plVar10 + 1;
  }
  lVar8 = param_2[0x35];
  *(char *)(param_1 + 0x35) = (char)lVar8;
  if ((char)lVar8 == '\x01') {
    lVar8 = param_2[0x2f];
    lVar3 = param_2[0x30];
    lVar7 = param_2[0x31];
    lVar5 = param_2[0x32];
    lVar6 = param_2[0x34];
    param_1[0x33] = param_2[0x33];
    param_1[0x34] = lVar6;
    param_1[0x31] = lVar7;
    param_1[0x32] = lVar5;
    param_1[0x2f] = lVar8;
    param_1[0x30] = lVar3;
  }
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x1b4);
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *(undefined8 *)((longlong)param_2 + 0x1ac);
  *(undefined8 *)((longlong)param_1 + 0x1b4) = uVar4;
  return param_1;
}



// FUNCTION 144b249f0 FUN_144b249f0 body=163 status=ok
// SIG undefined FUN_144b249f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_144b249f0(longlong param_1)

{
  byte bVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  PSRWLOCK pRVar4;
  
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    uVar2 = 0;
  }
  else {
    pRVar4 = (PSRWLOCK)(*(longlong *)(param_1 + 0xc0) + 0xe0);
    AcquireSRWLockShared(pRVar4);
    if (param_1 == 0) {
      ReleaseSRWLockShared(pRVar4);
      pRVar4 = (PSRWLOCK)(_DAT_000000c0 + 0xe0);
      AcquireSRWLockShared(pRVar4);
      uVar2 = 0;
    }
    else {
      bVar1 = *(byte *)(param_1 + 0x243);
      ReleaseSRWLockShared(pRVar4);
      uVar3 = (undefined7)((ulonglong)param_1 >> 8);
      if ((bVar1 & 0xc) == 4) {
        uVar2 = CONCAT71(uVar3,1);
        goto LAB_144b24a5e;
      }
      pRVar4 = (PSRWLOCK)(*(longlong *)(param_1 + 0xc0) + 0xe0);
      AcquireSRWLockShared(pRVar4);
      uVar2 = CONCAT71(uVar3,(*(byte *)(param_1 + 0x243) & 0xc) == 8);
    }
    ReleaseSRWLockShared(pRVar4);
  }
LAB_144b24a5e:
  return uVar2 & 0xffffffff;
}



// FUNCTION 144b24a97 FUN_144b24a97 body=53 status=ok
// SIG undefined FUN_144b24a97(void)

void FUN_144b24a97(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  do {
    puVar1[-3] = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>
                 ::TTaskDelegateDummy::vftable;
    puVar1[-2] = 0;
    puVar1[-1] = 0xe800000000000020;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = puVar1 + 9;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



// FUNCTION 144b24acc FUN_144b24acc body=66 status=ok
// SIG undefined FUN_144b24acc(void)

void FUN_144b24acc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x28);
    do {
      if (*(code **)(*plVar1 + 0x18) != FUN_144713626) {
        (**(code **)(*plVar1 + 0x18))(plVar1,plVar1 + -5);
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b24bae FUN_144b24bae body=290 status=ok
// SIG undefined FUN_144b24bae(void)

ulonglong FUN_144b24bae(longlong param_1,uint param_2)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined7 uVar3;
  ulonglong uVar2;
  
  if (param_2 == 0x12) {
    bVar1 = *(byte *)(param_1 + 0x1c4);
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
LAB_144b24bbd:
    uVar2 = CONCAT71(uVar3,bVar1 >> 4);
    goto LAB_144b24bc0;
  }
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_144b24be0::switchdataD_14a9cf054 +
           (longlong)(int)(&switchD_144b24be0::switchdataD_14a9cf054)[param_2]) >> 8);
  switch(param_2) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x1c0);
    goto LAB_144b24bf3;
  case 1:
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x1c1));
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24c1c;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24be8;
  case 4:
    uVar2 = CONCAT71(uVar3,*(byte *)(param_1 + 0x1c1) >> 7);
    break;
  case 5:
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x1c2));
    break;
  case 6:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24c1c;
  case 7:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24be8;
  case 8:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24bfe;
  case 9:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24bf3;
  case 10:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24bfe;
  case 0xb:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24bbd;
  case 0xc:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24c11;
  case 0xd:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24bf3;
  case 0xe:
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0x1c4));
    break;
  case 0xf:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24c1c:
    uVar2 = CONCAT71(uVar3,bVar1 >> 1);
    break;
  case 0x10:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24be8:
    uVar2 = CONCAT71(uVar3,bVar1 >> 2);
    break;
  case 0x11:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24bfe:
    uVar2 = CONCAT71(uVar3,bVar1 >> 3);
    break;
  default:
    FUN_140033559(".\\Runtime/Engine/Private/Materials/Material.cpp",0x645,
                  L"Unknown material usage: %u");
    uVar2 = 0;
    break;
  case 0x13:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24c11:
    uVar2 = CONCAT71(uVar3,bVar1 >> 5);
    break;
  case 0x14:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24bf3:
    uVar2 = CONCAT71(uVar3,bVar1 >> 6);
  }
LAB_144b24bc0:
  return uVar2 & 0xffffffffffffff01;
}



// FUNCTION 144b24cd0 FUN_144b24cd0 body=365 status=ok
// SIG undefined FUN_144b24cd0(void)

undefined4 FUN_144b24cd0(longlong param_1,undefined1 *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  
  *param_2 = 1;
  if ((1 < *(byte *)(param_1 + 0x128)) && (*(byte *)(param_1 + 0x128) != 3)) {
    uVar2 = 0;
    goto LAB_144b24db1;
  }
  if (param_3 == 0x12) {
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24cfa:
    bVar1 = bVar1 >> 4;
    goto LAB_144b24cfd;
  }
  switch(param_3) {
  case 0:
    bVar1 = *(byte *)(param_1 + 0x1c0);
    goto LAB_144b24d37;
  case 1:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    break;
  case 2:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24d69;
  case 3:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24d2c;
  case 4:
    bVar1 = *(byte *)(param_1 + 0x1c1) >> 7;
    break;
  case 5:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    break;
  case 6:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24d69;
  case 7:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24d2c;
  case 8:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24d42;
  case 9:
    bVar1 = *(byte *)(param_1 + 0x1c2);
    goto LAB_144b24d37;
  case 10:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24d42;
  case 0xb:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24cfa;
  case 0xc:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24d55;
  case 0xd:
    bVar1 = *(byte *)(param_1 + 0x1c1);
    goto LAB_144b24d37;
  case 0xe:
    bVar1 = *(byte *)(param_1 + 0x1c4);
    break;
  case 0xf:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24d69:
    bVar1 = bVar1 >> 1;
    break;
  case 0x10:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24d2c:
    bVar1 = bVar1 >> 2;
    break;
  case 0x11:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24d42:
    bVar1 = bVar1 >> 3;
    break;
  default:
    FUN_140033559(".\\Runtime/Engine/Private/Materials/Material.cpp",0x645,
                  L"Unknown material usage: %u",param_3);
    goto LAB_144b24d98;
  case 0x13:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24d55:
    bVar1 = bVar1 >> 5;
    break;
  case 0x14:
    bVar1 = *(byte *)(param_1 + 0x1c4);
LAB_144b24d37:
    bVar1 = bVar1 >> 6;
  }
LAB_144b24cfd:
  if ((bVar1 & 1) == 0) {
LAB_144b24d98:
    if ((*(byte *)(param_1 + 0x1c0) & 0x20) == 0) {
      uVar2 = CONCAT31((int3)(*(uint *)(param_1 + 0x20c) >> 8),
                       (*(uint *)(param_1 + 0x20c) >> (param_3 & 0x1f) & 1) == 0);
LAB_144b24db1:
      *param_2 = 0;
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 144b24e96 FUN_144b24e96 body=215 status=ok
// SIG undefined FUN_144b24e96(void)

bool FUN_144b24e96(longlong *param_1)

{
  undefined *puVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  uStack_10 = 0;
  if (*(code **)(*param_1 + 0x2d0) == (code *)&LAB_14470b6e8) {
    puVar1 = &DAT_14caea5a0;
    if ((undefined *)param_1[0x18] != (undefined *)0x0) {
      puVar1 = (undefined *)param_1[0x18];
    }
  }
  else {
    puVar1 = (undefined *)(**(code **)(*param_1 + 0x2d0))(0,&local_18);
  }
  if ((longlong)*(int *)(puVar1 + 0x2d8) != 0) {
    lVar2 = 0;
    do {
      if (*(int *)(*(longlong *)(puVar1 + 0x2d0) + lVar2) != -1) {
        bVar3 = true;
        goto LAB_144b24f42;
      }
      lVar2 = lVar2 + 4;
    } while ((longlong)*(int *)(puVar1 + 0x2d8) * 4 != lVar2);
  }
  if ((longlong)*(int *)(puVar1 + 0x2e8) == 0) {
    bVar3 = false;
  }
  else {
    lVar2 = 0;
    do {
      bVar3 = *(int *)(*(longlong *)(puVar1 + 0x2e0) + lVar2) != -1;
      if (bVar3) break;
      bVar4 = (longlong)*(int *)(puVar1 + 0x2e8) * 4 + -4 != lVar2;
      lVar2 = lVar2 + 4;
    } while (bVar4);
  }
LAB_144b24f42:
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar3;
}



// FUNCTION 144b24fbc FUN_144b24fbc body=312 status=ok
// SIG undefined FUN_144b24fbc(void)

void FUN_144b24fbc(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar1 = param_2 + 2;
  while( true ) {
    plVar3 = (longlong *)param_2[0x12];
    plVar4 = plVar3;
    if (plVar3 == (longlong *)0x0) {
      plVar4 = plVar1;
    }
    iVar2 = (int)param_2[0x13];
    lVar7 = (longlong)iVar2;
    if (lVar7 != 0) {
      lVar6 = 0;
      do {
        if (*(longlong **)((longlong)plVar4 + lVar6) == param_1) goto LAB_144b250a2;
        lVar6 = lVar6 + 8;
      } while (lVar7 * 8 - lVar6 != 0);
    }
    *(uint *)(param_2 + 0x13) = iVar2 + 1U;
    if (*(uint *)((longlong)param_2 + 0x9c) < iVar2 + 1U) {
      FUN_147bba0a6(plVar1,iVar2);
      plVar3 = (longlong *)param_2[0x12];
    }
    if (plVar3 == (longlong *)0x0) {
      plVar3 = plVar1;
    }
    plVar3[lVar7] = (longlong)param_1;
    lVar7 = param_2[1];
    if (lVar7 == 0) {
      lVar7 = param_1[0x18];
      param_2[1] = lVar7;
    }
    param_1 = (longlong *)param_1[0x22];
    if (param_1 == (longlong *)0x0) break;
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x2c8);
    if (UNRECOVERED_JUMPTABLE != FUN_144b24fbc) {
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_147bae246) {
        *param_2 = (longlong)param_1;
        if (lVar7 == 0) {
          puVar5 = &DAT_14caea5a0;
          if ((undefined *)param_1[0x18] != (undefined *)0x0) {
            puVar5 = (undefined *)param_1[0x18];
          }
          param_2[1] = (longlong)puVar5;
        }
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x000144b250f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return;
    }
  }
LAB_144b250a2:
  FUN_14003fbd6();
                    /* WARNING: Could not recover jumptable at 0x000144b250c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14caea080 + 0x2c8))(DAT_14caea080,param_2);
  return;
}



// FUNCTION 144b250f4 FUN_144b250f4 body=75 status=ok
// SIG undefined FUN_144b250f4(void)

undefined2 * FUN_144b250f4(longlong param_1,undefined2 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x110);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 2;
  }
  else if (*(code **)(*plVar1 + 0x410) == (code *)&LAB_14497e114) {
    *param_2 = (short)plVar1[0x2c];
  }
  else {
    (**(code **)(*plVar1 + 0x410))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 144b25140 FUN_144b25140 body=267 status=ok
// SIG undefined FUN_144b25140(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_144b25140(longlong *param_1,int param_2,char param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (*(code **)(*param_1 + 0x350) != FUN_144a131d6) {
                    /* WARNING: Could not recover jumptable at 0x000144b25242. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (**(code **)(*param_1 + 0x350))();
    return lVar2;
  }
  do {
    if ((*(byte *)(param_1 + 0x2a) & 1) != 0) {
      if (param_3 == '\x04') {
        param_3 = (char)_DAT_14cb0cc00;
      }
      if (0 < (int)*(uint *)(param_1 + 0x5a)) {
        uVar3 = 0;
        lVar2 = 0;
        do {
          lVar4 = *(longlong *)(param_1[0x59] + uVar3 * 8);
          if (*(int *)(lVar4 + 0x24) == param_2) {
            if (*(char *)(lVar4 + 0x20) == '\x04') {
              lVar2 = lVar4;
            }
            if (*(char *)(lVar4 + 0x20) == param_3) {
              return lVar4;
            }
          }
          uVar3 = uVar3 + 1;
          if (*(uint *)(param_1 + 0x5a) == uVar3) {
            return lVar2;
          }
        } while( true );
      }
      goto LAB_144b2523c;
    }
    param_1 = (longlong *)param_1[0x22];
    if (param_1 == (longlong *)0x0) {
      return 0;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x350);
  } while (UNRECOVERED_JUMPTABLE == FUN_144a131d6);
  if (UNRECOVERED_JUMPTABLE != FUN_14478329a) {
                    /* WARNING: Could not recover jumptable at 0x000144b25248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    lVar2 = (*UNRECOVERED_JUMPTABLE)();
    return lVar2;
  }
  if (param_3 == '\x04') {
    param_3 = (char)_DAT_14cb0cc00;
  }
  if ((longlong)(int)param_1[0x4b] < 1) {
LAB_144b2523c:
    lVar2 = 0;
  }
  else {
    lVar4 = 0;
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x4a] + lVar4 * 8);
      if (*(int *)(lVar1 + 0x24) == param_2) {
        if (*(char *)(lVar1 + 0x20) == '\x04') {
          lVar2 = lVar1;
        }
        if (*(char *)(lVar1 + 0x20) == param_3) {
          return lVar1;
        }
      }
      lVar4 = lVar4 + 1;
    } while ((int)param_1[0x4b] != lVar4);
  }
  return lVar2;
}



// FUNCTION 144b252aa FUN_144b252aa body=7 status=ok
// SIG undefined FUN_144b252aa(void)

void FUN_144b252aa(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return;
}



// FUNCTION 144b252b2 FUN_144b252b2 body=5 status=ok
// SIG undefined FUN_144b252b2(void)

undefined8 FUN_144b252b2(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



// FUNCTION 144b252b8 FUN_144b252b8 body=280 status=ok
// SIG undefined FUN_144b252b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_144b252b8(longlong param_1)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  longlong lVar4;
  undefined *puVar5;
  
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      lVar4 = 0x18;
      if (iVar1 != 1) goto LAB_144b252ff;
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 != DVar3) goto LAB_144b252ff;
    }
  }
  lVar4 = 0x10;
LAB_144b252ff:
  if (*(longlong *)(param_1 + lVar4) == 0) {
    puVar5 = &DAT_14caefcd8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14caefe90) {
      FUN_144b3d300(&DAT_14caefe90);
      if (DAT_14caefe90 == -1) {
        puVar5 = &DAT_14caefcd8;
        memset(&DAT_14caefcd8,0,0xc4);
        memset(&DAT_14caefda0,0,0xe8);
        _DAT_14caefe88 = 0x1ffffff;
        DAT_14caefe8c = 0;
        atexit((_func_5014 *)&LAB_14357c04e);
        _Init_thread_footer(&DAT_14caefe90);
      }
    }
  }
  else {
    puVar5 = (undefined *)(*(longlong *)(*(longlong *)(param_1 + lVar4) + 0x28) + 0x70);
  }
  return puVar5;
}



// FUNCTION 144b253d0 FUN_144b253d0 body=28 status=ok
// SIG undefined FUN_144b253d0(void)

undefined8 FUN_144b253d0(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x28);
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x246)) &
            0xffffffffffffff40;
    return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
  return 0;
}



// FUNCTION 144b25530 FUN_144b25530 body=234 status=ok
// SIG undefined FUN_144b25530(void)

ulonglong FUN_144b25530(longlong *param_1,uint param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  ulonglong uVar6;
  undefined8 unaff_RBX;
  bool bVar7;
  bool bVar8;
  
  lVar1 = DAT_14ca97170;
  bVar7 = *(char *)(param_1[8] + 0x178) == '\v';
  if (*(code **)(*param_1 + 0x3f0) == FUN_144927938) {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (((iVar3 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar3 == 2)) {
      uVar6 = 0;
    }
    else if (iVar3 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      uVar6 = (ulonglong)(DVar4 != DVar5);
    }
    else {
      uVar6 = 1;
    }
    if (*(int *)(lVar1 + uVar6 * 4) < 1) goto LAB_144b255a9;
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x3f0))(param_1);
    if (cVar2 == '\0') goto LAB_144b255a9;
  }
  iVar3 = (**(code **)(*param_1 + 0x270))(param_1);
  bVar7 = iVar3 == 7;
LAB_144b255a9:
  bVar8 = true;
  if ((*(uint *)((longlong)&DAT_14ca814d0 + (ulonglong)(param_2 & 0xffff) * 0x3c) & 0x800008) != 8)
  {
    bVar8 = (&DAT_14ca814b8)[(ulonglong)(param_2 & 0xffff) * 0xf] == 1;
  }
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar7 & bVar8) & 0xffffffff;
}



// FUNCTION 144b2561a FUN_144b2561a body=45 status=ok
// SIG undefined FUN_144b2561a(void)

bool FUN_144b2561a(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x40) + 0x1d0) & 4) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
    if (1 < *(int *)(param_1 + 0x24)) {
      iVar1 = FUN_147cee33b();
      bVar2 = iVar1 != 1;
    }
  }
  return bVar2;
}



// FUNCTION 144b25648 FUN_144b25648 body=176 status=ok
// SIG undefined FUN_144b25648(void)

undefined8 FUN_144b25648(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar7;
  code *pcVar6;
  
  pcVar6 = *(code **)(*param_1 + 0x270);
  plVar7 = param_1;
  if (pcVar6 == (code *)&LAB_1447f82f4) {
    plVar7 = (longlong *)param_1[9];
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
      pcVar6 = *(code **)(*plVar7 + 0x408);
      if (pcVar6 == (code *)&LAB_14470b702) {
        bVar2 = *(byte *)((longlong)plVar7 + 0x129);
        if (bVar2 == 1) {
          bVar2 = ~*(byte *)((longlong)plVar7 + 0x1d6) & 1;
        }
        uVar3 = (uint)bVar2;
        goto LAB_144b25690;
      }
    }
    else {
      pcVar6 = *(code **)(*plVar7 + 0x408);
      if (pcVar6 == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar7 + 0x2b);
        goto LAB_144b25690;
      }
    }
  }
  uVar3 = (*pcVar6)(plVar7);
LAB_144b25690:
  if ((uVar3 < 2) || (lVar1 = param_1[8], (*(byte *)(lVar1 + 0x18b) & 0xfe) != 4)) {
    uVar5 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x1d0)) &
            0xffffffffffffff20;
    uVar5 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 5);
  }
  return uVar5;
}



// FUNCTION 144b256fc FUN_144b256fc body=376 status=ok
// SIG undefined FUN_144b256fc(void)

longlong FUN_144b256fc(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x90);
  puVar4 = (ulonglong *)plVar3[1];
  piVar1 = (int *)*puVar4 + 1;
  if ((int *)puVar4[1] < piVar1) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,&local_24,4);
    }
    else {
      FUN_14572512c(plVar3,&local_24);
    }
  }
  else {
    local_24 = *(int *)*puVar4;
    *puVar4 = (ulonglong)piVar1;
  }
  puVar4 = (ulonglong *)plVar3[1];
  puVar2 = (undefined4 *)*puVar4 + 1;
  if ((undefined4 *)puVar4[1] < puVar2) {
    if ((*(byte *)((longlong)plVar3 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar3 + 0x170))(plVar3,&local_28,4);
    }
    else {
      FUN_14572512c(plVar3,&local_28);
    }
  }
  else {
    local_28 = *(undefined4 *)*puVar4;
    *puVar4 = (ulonglong)puVar2;
  }
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0xa8) <= local_24)) {
    uVar5 = *(undefined8 *)(param_1 + 0xb0);
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
    local_40 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
    local_40 = local_40 - *(longlong *)(param_1 + 0xb0);
    local_48 = *(undefined4 *)(param_1 + 0xa8);
    local_38 = uVar6;
    local_30 = uVar5;
    FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x1529,
                  L"FMaterialResourceProxyReader: deserialized an invalid FName, NameIdx=%d, Names.Num()=%d (Offset=%lld, InnerArchive.Tell()=%lld, OffsetToFirstResource=%lld)"
                  ,local_24);
  }
  else {
    *param_2 = CONCAT44(local_28,*(undefined4 *)
                                  (*(longlong *)(param_1 + 0xa0) + (longlong)local_24 * 8));
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b25876 FUN_144b25876 body=409 status=ok
// SIG undefined FUN_144b25876(void)

undefined8 * FUN_144b25876(byte *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1[0x20] == 0) {
    uVar1 = *(undefined4 *)param_1;
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined1 *)(param_2 + 2) = 1;
    param_2[0x13] = 0;
    param_2[0x14] = 0x1000000001;
    *(undefined4 *)(param_2 + 3) = uVar1;
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
  }
  else {
    switch(param_1[0x20]) {
    case 1:
      uVar1 = *(undefined4 *)(param_1 + 0xc);
      uVar2 = *(undefined4 *)(param_1 + 8);
      uVar3 = *(undefined4 *)param_1;
      uVar4 = *(undefined4 *)(param_1 + 4);
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 4;
      param_2[0x13] = 0;
      *(undefined4 *)(param_2 + 3) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
      *(undefined4 *)(param_2 + 4) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
      *(undefined4 *)(param_2 + 5) = uVar2;
      *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
      param_2[0x14] = 0x1000000004;
      *(undefined4 *)(param_2 + 6) = uVar1;
      *(undefined4 *)((longlong)param_2 + 0x34) = 0;
      break;
    case 2:
      uVar9 = *(undefined8 *)param_1;
      uVar10 = *(undefined8 *)(param_1 + 8);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 8;
      param_2[0x13] = 0;
      param_2[3] = uVar9;
      param_2[4] = uVar10;
      param_2[5] = uVar11;
      param_2[6] = uVar12;
      param_2[0x14] = 0x1000000004;
      break;
    default:
      memset(param_2,0,0xa8);
      *(undefined4 *)((longlong)param_2 + 0xa4) = 0x10;
      break;
    case 8:
      bVar5 = *param_1;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0xd;
      param_2[0x13] = 0;
      param_2[0x14] = 0x1000000001;
      param_2[3] = (ulonglong)bVar5;
      break;
    case 9:
      bVar5 = param_1[3];
      bVar6 = param_1[2];
      bVar7 = param_1[1];
      bVar8 = *param_1;
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined1 *)(param_2 + 2) = 0x10;
      param_2[0x13] = 0;
      param_2[3] = (ulonglong)bVar8;
      param_2[4] = (ulonglong)bVar7;
      param_2[5] = (ulonglong)bVar6;
      param_2[0x14] = 0x1000000004;
      param_2[6] = (ulonglong)bVar5;
    }
  }
  return param_2;
}



// FUNCTION 144b25a0f FUN_144b25a0f body=40 status=ok
// SIG undefined FUN_144b25a0f(void)

void FUN_144b25a0f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147bc57aa(param_1);
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 144b25a37 FUN_144b25a37 body=139 status=ok
// SIG undefined FUN_144b25a37(void)

bool FUN_144b25a37(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x270);
  if (pcVar4 == (code *)&LAB_1447f82f4) {
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x408) == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar1 + 0x2b);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x408))(plVar1);
      }
      goto LAB_144b25a77;
    }
    plVar1 = (longlong *)param_1[8];
    pcVar4 = *(code **)(*plVar1 + 0x408);
    if (pcVar4 == (code *)&LAB_14470b702) {
      bVar2 = *(byte *)((longlong)plVar1 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar1 + 0x1d6) & 1;
      }
      uVar3 = (uint)bVar2;
      goto LAB_144b25a77;
    }
  }
  uVar3 = (*pcVar4)();
LAB_144b25a77:
  return uVar3 == 1;
}



// FUNCTION 144b25ac2 FUN_144b25ac2 body=7 status=ok
// SIG undefined FUN_144b25ac2(void)

bool FUN_144b25ac2(uint param_1)

{
  return param_1 < 2;
}



// FUNCTION 144b25ac9 FUN_144b25ac9 body=7 status=ok
// SIG undefined FUN_144b25ac9(void)

bool FUN_144b25ac9(uint param_1)

{
  return 1 < param_1;
}



// FUNCTION 144b25ad0 FUN_144b25ad0 body=139 status=ok
// SIG undefined FUN_144b25ad0(void)

bool FUN_144b25ad0(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(*param_1 + 0x270);
  if (pcVar4 == (code *)&LAB_1447f82f4) {
    plVar1 = (longlong *)param_1[9];
    if (plVar1 != (longlong *)0x0) {
      if (*(code **)(*plVar1 + 0x408) == (code *)&LAB_14497e176) {
        uVar3 = (uint)*(byte *)(plVar1 + 0x2b);
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x408))(plVar1);
      }
      goto LAB_144b25b10;
    }
    plVar1 = (longlong *)param_1[8];
    pcVar4 = *(code **)(*plVar1 + 0x408);
    if (pcVar4 == (code *)&LAB_14470b702) {
      bVar2 = *(byte *)((longlong)plVar1 + 0x129);
      if (bVar2 == 1) {
        bVar2 = ~*(byte *)((longlong)plVar1 + 0x1d6) & 1;
      }
      uVar3 = (uint)bVar2;
      goto LAB_144b25b10;
    }
  }
  uVar3 = (*pcVar4)();
LAB_144b25b10:
  return 1 < uVar3;
}



// FUNCTION 144b25b64 FUN_144b25b64 body=97 status=ok
// SIG undefined FUN_144b25b64(void)

undefined1 FUN_144b25b64(longlong param_1,char param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if ((*(byte *)(param_1 + 0xa4) & 4) == 0) {
    if (param_2 != '\0') {
      *(int *)(param_1 + 0x200) = -*(int *)(param_1 + 0x6c0);
    }
    if (*(char *)(param_1 + 0x1dd8) == '\x01') {
      uVar1 = FUN_1435aa440(param_1 + 0x1d78,*(undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x300))
      ;
    }
    else {
      lVar2 = (longlong)*(int *)(param_1 + 0x200) + *(longlong *)(param_1 + 0x6c0);
      uVar1 = lVar2 == 0 ||
              SCARRY8((longlong)*(int *)(param_1 + 0x200),*(longlong *)(param_1 + 0x6c0)) !=
              lVar2 < 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144b25bc6 FUN_144b25bc6 body=441 status=ok
// SIG undefined FUN_144b25bc6(void)

longlong FUN_144b25bc6(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  if (param_2 == 0) {
    uVar5 = 0;
    uVar1 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar1 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      uVar2 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar2);
      }
      LOCK();
      uVar1 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar1 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar2;
        uVar1 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar1 = uVar2;
      }
    }
  }
  if (*(int *)(param_1 + 0x1628) != *(int *)(param_1 + 0x1654)) {
    uVar2 = uVar1 >> 0xd ^ uVar5 - uVar1;
    uVar4 = uVar2 << 8 ^ (-0x61c88647 - uVar1) - uVar2;
    uVar6 = uVar4 >> 0xd ^ (uVar1 - uVar2) - uVar4;
    uVar8 = uVar6 >> 0xc ^ (uVar2 - uVar4) - uVar6;
    uVar2 = uVar8 << 0x10 ^ (uVar4 - uVar6) - uVar8;
    uVar4 = uVar2 >> 5 ^ (uVar6 - uVar8) - uVar2;
    uVar6 = uVar4 >> 3 ^ (uVar8 - uVar2) - uVar4;
    uVar2 = uVar6 << 10 ^ (uVar2 - uVar4) - uVar6;
    lVar10 = param_1 + 0x1658;
    if (*(longlong *)(param_1 + 0x1660) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x1660);
    }
    iVar7 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x1668) - 1U &
                              (uVar2 >> 0xf ^ uVar4 - (uVar6 + uVar2))) * 4);
    if (iVar7 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x1620);
      do {
        lVar9 = (longlong)iVar7 * 0x60;
        lVar3 = lVar10 + lVar9;
        if ((*(uint *)(lVar10 + lVar9) == uVar5) && (*(uint *)(lVar10 + 4 + lVar9) == uVar1)) break;
        iVar7 = *(int *)(lVar3 + 0x58);
        lVar3 = 0;
      } while (iVar7 != -1);
      goto LAB_144b25c1d;
    }
  }
  lVar3 = 0;
LAB_144b25c1d:
  lVar10 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar10 = 0;
  }
  return lVar10;
}



// FUNCTION 144b25d80 FUN_144b25d80 body=496 status=ok
// SIG undefined FUN_144b25d80(void)

longlong * FUN_144b25d80(longlong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
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
  *param_1 = param_2;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x1d38) = param_3, param_3 != 0)) {
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
    lVar2 = DAT_14cae8b20;
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
    lVar3 = *(longlong *)(param_3 + 0x20);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar4 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    }
    *(longlong *)(*param_1 + 0x1d40) = lVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b25f72 FUN_144b25f72 body=446 status=ok
// SIG undefined FUN_144b25f72(void)

undefined2 * FUN_144b25f72(longlong param_1,undefined2 *param_2,longlong param_3)

{
  undefined2 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  bool bVar12;
  
  if (param_3 == 0) {
    uVar10 = 0;
    uVar2 = 0;
  }
  else {
    uVar10 = *(uint *)(param_3 + 0xc);
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    uVar2 = *(uint *)(lVar11 + 0x10);
    if (*(uint *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar11 + 0x10);
      bVar12 = uVar2 == 0;
      if (bVar12) {
        *(uint *)(lVar11 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar12) {
        uVar2 = uVar3;
      }
    }
  }
  if (*(int *)(param_1 + 0x238) != *(int *)(param_1 + 0x264)) {
    uVar3 = uVar2 >> 0xd ^ uVar10 - uVar2;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar2) - uVar3;
    uVar7 = uVar6 >> 0xd ^ (uVar2 - uVar3) - uVar6;
    uVar9 = uVar7 >> 0xc ^ (uVar3 - uVar6) - uVar7;
    uVar3 = uVar9 << 0x10 ^ (uVar6 - uVar7) - uVar9;
    uVar6 = uVar3 >> 5 ^ (uVar7 - uVar9) - uVar3;
    uVar7 = uVar6 >> 3 ^ (uVar9 - uVar3) - uVar6;
    uVar3 = uVar7 << 10 ^ (uVar3 - uVar6) - uVar7;
    lVar11 = param_1 + 0x268;
    if (*(longlong *)(param_1 + 0x270) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x270);
    }
    iVar4 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0x278) - 1U &
                              (uVar3 >> 0xf ^ uVar6 - (uVar7 + uVar3))) * 4);
    if (iVar4 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x230);
      do {
        lVar8 = (longlong)iVar4 * 0x78;
        lVar5 = lVar11 + lVar8;
        if ((*(uint *)(lVar11 + lVar8) == uVar10) && (*(uint *)(lVar11 + 4 + lVar8) == uVar2)) {
          if (lVar5 != 0) {
            uVar1 = *(undefined2 *)(lVar5 + 0x68);
            lVar5 = lVar5 + 0x58;
            goto LAB_144b260c4;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x70);
      } while (iVar4 != -1);
    }
  }
  uVar1 = 0;
  lVar5 = 0;
LAB_144b260c4:
  *param_2 = uVar1;
  *(longlong *)(param_2 + 4) = lVar5;
  return param_2;
}



// FUNCTION 144b261ba FUN_144b261ba body=386 status=ok
// SIG undefined FUN_144b261ba(void)

undefined1 FUN_144b261ba(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((((*(int *)(param_1 + 0x144) == 0) || (uVar1 = *(uint *)(param_1 + 0x140), (int)uVar1 < 0))
       || (DAT_14c9647dc <= (int)uVar1)) ||
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)(param_1 + 0x144))))) ||
     (((*(uint *)(plVar4 + 1) & 0x10200000) != 0 || (lVar2 = *plVar4, lVar2 == 0)))) {
LAB_144b2625e:
    puVar5 = (undefined1 *)(param_1 + 0x17);
  }
  else {
    if ((*(longlong *)(lVar2 + 0xa8) != 0) &&
       ((*(byte *)(*(longlong *)(lVar2 + 0xa8) + 0x65) & 1) == 0)) {
      uVar3 = 0;
      goto LAB_144b26265;
    }
    if (DAT_14cad2858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) != DAT_14cad2858 + 0x30)) goto LAB_144b2625e;
    puVar5 = (undefined1 *)(lVar2 + 0x427);
  }
  uVar3 = *puVar5;
LAB_144b26265:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b2633e FUN_144b2633e body=357 status=ok
// SIG undefined FUN_144b2633e(void)

ulonglong FUN_144b2633e(char *param_1,longlong param_2,char param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (DAT_14cadbe78 == (code *)0x0) {
    if ((*(uint *)(param_2 + 0xc) & *(uint *)(param_1 + 0xc)) < 0x4000000) {
      uVar4 = 1 << ((byte)(*(uint *)(param_2 + 0xc) >> 0x15) & 0x1f);
      uVar1 = *(uint *)(param_1 + 0xc) >> 0x15 & 0x1f;
      if (*param_1 == '\0') {
        uVar1 = (uint)(byte)((uVar1 == 0) + 1);
        if (param_3 == '\0') {
          uVar1 = 2;
        }
        if ((uVar4 & *(uint *)(param_1 + 4)) == 0) {
          uVar1 = 0;
        }
        uVar2 = (ulonglong)uVar1;
      }
      else {
        uVar3 = (uint)((*(uint *)(param_2 + 8) >> uVar1 & 1) != 0);
        if ((*(uint *)(param_2 + 4) >> uVar1 & 1) != 0) {
          uVar3 = 2;
        }
        uVar1 = (uint)((*(uint *)(param_1 + 8) & uVar4) != 0);
        if ((*(uint *)(param_1 + 4) & uVar4) != 0) {
          uVar1 = 2;
        }
        if ((byte)uVar3 < (byte)uVar1) {
          uVar1 = uVar3;
        }
        uVar2 = (ulonglong)uVar1;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    if (DAT_14cadbe78 != FUN_144b08c16) {
                    /* WARNING: Could not recover jumptable at 0x000144b26470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (*DAT_14cadbe78)(param_1);
      return uVar2;
    }
    uVar4 = 1 << ((byte)(*(uint *)(param_2 + 0xc) >> 0x15) & 0x1f);
    uVar1 = *(uint *)(param_1 + 0xc) >> 0x15 & 0x1f;
    if (*param_1 == '\0') {
      uVar1 = (uint)(byte)((uVar1 == 0) + 1);
      if (param_3 == '\0') {
        uVar1 = 2;
      }
      if ((uVar4 & *(uint *)(param_1 + 4)) == 0) {
        uVar1 = 0;
      }
      uVar2 = (ulonglong)uVar1;
    }
    else {
      uVar3 = (uint)((*(uint *)(param_2 + 8) >> uVar1 & 1) != 0);
      if ((*(uint *)(param_2 + 4) >> uVar1 & 1) != 0) {
        uVar3 = 2;
      }
      uVar1 = (uint)((*(uint *)(param_1 + 8) & uVar4) != 0);
      if ((*(uint *)(param_1 + 4) & uVar4) != 0) {
        uVar1 = 2;
      }
      if ((byte)uVar3 < (byte)uVar1) {
        uVar1 = uVar3;
      }
      uVar2 = (ulonglong)uVar1;
      if (((0x3ffffff < (*(uint *)(param_1 + 0xc) & ~*(uint *)(param_2 + 4))) ||
          (0x3ffffff < (*(uint *)(param_2 + 0xc) & ~*(uint *)(param_1 + 4)))) &&
         ((char)uVar1 == '\x02')) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 144b264a4 FUN_144b264a4 body=576 status=ok
// SIG undefined FUN_144b264a4(void)

undefined8
FUN_144b264a4(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5,
             double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  dVar7 = *param_2;
  dVar1 = *param_1;
  if (dVar7 < dVar1) {
    dVar6 = dVar1;
    if (*param_3 < dVar1) {
      return 0;
    }
LAB_144b26508:
    dVar6 = (dVar6 - dVar7) * *param_5;
    bVar5 = true;
  }
  else {
    dVar6 = param_1[3];
    if (dVar6 < dVar7) {
      if (dVar6 < *param_3) {
        return 0;
      }
      goto LAB_144b26508;
    }
    dVar6 = 0.0;
    bVar5 = false;
  }
  dVar8 = param_2[1];
  dVar2 = param_1[1];
  if (dVar8 < dVar2) {
    if (param_3[1] < dVar2) {
      return 0;
    }
    dVar9 = (dVar2 - dVar8) * param_5[1];
    bVar5 = true;
  }
  else {
    dVar10 = param_1[4];
    dVar9 = 0.0;
    if (dVar10 < dVar8) {
      if (dVar10 < param_3[1]) {
        return 0;
      }
      dVar9 = (dVar10 - dVar8) * param_5[1];
      bVar5 = true;
    }
  }
  dVar10 = param_2[2];
  dVar3 = param_1[2];
  if (dVar10 < dVar3) {
    if (param_3[2] < dVar3) {
      return 0;
    }
    uVar11 = SUB84(dVar3,0);
    uVar12 = (undefined4)((ulonglong)dVar3 >> 0x20);
LAB_144b265cc:
    dVar4 = ((double)CONCAT44(uVar12,uVar11) - dVar10) * param_5[2];
  }
  else {
    dVar4 = param_1[5];
    uVar11 = SUB84(dVar4,0);
    uVar12 = (undefined4)((ulonglong)dVar4 >> 0x20);
    if (dVar4 < dVar10) {
      if (dVar4 < param_3[2]) {
        return 0;
      }
      goto LAB_144b265cc;
    }
    dVar4 = 0.0;
    if (!bVar5) {
      dVar7 = 0.0;
      if (param_6 == (double *)0x0) {
        return 1;
      }
      goto LAB_144b266bd;
    }
  }
  if (dVar6 <= dVar9) {
    dVar6 = dVar9;
  }
  if (dVar6 <= dVar4) {
    dVar6 = dVar4;
  }
  if (dVar6 < 0.0) {
    return 0;
  }
  if (1.0 < dVar6) {
    return 0;
  }
  dVar7 = dVar7 + *param_4 * dVar6;
  if (dVar7 <= dVar1 + -0.10000000149011612) {
    return 0;
  }
  if (param_1[3] + 0.10000000149011612 <= dVar7) {
    return 0;
  }
  dVar8 = dVar8 + param_4[1] * dVar6;
  if (dVar8 <= dVar2 + -0.10000000149011612) {
    return 0;
  }
  if (param_1[4] + 0.10000000149011612 <= dVar8) {
    return 0;
  }
  dVar10 = dVar10 + param_4[2] * dVar6;
  if (dVar10 <= dVar3 + -0.10000000149011612) {
    return 0;
  }
  if (param_1[5] + 0.10000000149011612 <= dVar10) {
    return 0;
  }
  if (param_6 == (double *)0x0) {
    return 1;
  }
  dVar7 = (double)(float)dVar6;
LAB_144b266bd:
  *param_6 = dVar7;
  return 1;
}



// FUNCTION 144b266e4 FUN_144b266e4 body=435 status=ok
// SIG undefined FUN_144b266e4(void)

longlong FUN_144b266e4(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  code *pcVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((*(byte *)(param_1 + 8) & 3) == 0) {
    plVar6 = (longlong *)(param_1 + 0x80);
  }
  else {
    plVar6 = (longlong *)FUN_140135db2(param_1);
  }
  if ((int)plVar6[1] < 1) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0x10) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 8);
  if (lVar1 == 0) {
    return 0;
  }
  if ((int)plVar6[1] == 1) {
    uVar7 = *(uint *)*plVar6;
    if (uVar7 < 0x1000000) {
      return 0;
    }
    uVar3 = uVar7 & 0xffffff;
    if (*(int *)(lVar1 + 0xab8) <= (int)uVar3) {
      return 0;
    }
    lVar9 = lVar1 + 0xaa0;
    if (*(longlong *)(lVar1 + 0xab0) != 0) {
      lVar9 = *(longlong *)(lVar1 + 0xab0);
    }
    if ((*(uint *)(lVar9 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
      return 0;
    }
    uVar7 = uVar7 ^ *(uint *)(*(longlong *)(lVar1 + 0xa90) + (ulonglong)uVar3 * 4);
    goto joined_r0x000144b26868;
  }
  plVar8 = *(longlong **)(param_1 + 0x10);
  pcVar5 = *(code **)(*plVar8 + 0x110);
  if (pcVar5 == (code *)&LAB_144b03702) {
    plVar8 = (longlong *)plVar8[4];
    pcVar5 = *(code **)(*plVar8 + 0x110);
    if (pcVar5 != (code *)&LAB_144b04844) goto LAB_144b26875;
    if ((int)plVar8[9] == 1) {
      pbVar4 = (byte *)plVar8[8];
LAB_144b2678d:
      bVar2 = *pbVar4;
    }
    else {
      if ((int)(param_3 >> 1) < (int)plVar8[9]) {
        pbVar4 = (byte *)((ulonglong)(param_3 >> 1) + plVar8[8]);
        goto LAB_144b2678d;
      }
      bVar2 = 0;
    }
  }
  else {
LAB_144b26875:
    bVar2 = (*pcVar5)(plVar8,param_3);
  }
  if ((int)plVar6[1] <= (int)(uint)bVar2) {
    return 0;
  }
  uVar7 = *(uint *)(*plVar6 + (ulonglong)bVar2 * 4);
  if (uVar7 < 0x1000000) {
    return 0;
  }
  uVar3 = uVar7 & 0xffffff;
  if (*(int *)(lVar1 + 0xab8) <= (int)uVar3) {
    return 0;
  }
  lVar9 = lVar1 + 0xaa0;
  if (*(longlong *)(lVar1 + 0xab0) != 0) {
    lVar9 = *(longlong *)(lVar1 + 0xab0);
  }
  if ((*(uint *)(lVar9 + (ulonglong)(uVar3 >> 5) * 4) >> (uVar7 & 0x1f) & 1) == 0) {
    return 0;
  }
  uVar7 = uVar7 ^ *(uint *)(*(longlong *)(lVar1 + 0xa90) + (ulonglong)uVar3 * 4);
joined_r0x000144b26868:
  if (0xffffff < uVar7) {
    return 0;
  }
  return (ulonglong)(uVar3 << 7) + *(longlong *)(lVar1 + 0xac0);
}



// FUNCTION 144b26898 FUN_144b26898 body=356 status=ok
// SIG undefined FUN_144b26898(void)

void FUN_144b26898(double *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  lVar6 = *param_2;
  lVar7 = *(longlong *)(lVar6 + 0x3e0);
  lVar8 = *(longlong *)(lVar6 + 0x530);
  lVar11 = (longlong)(int)param_2[1] * 0x18;
  lVar6 = *(longlong *)(lVar6 + 0x548);
  lVar12 = (longlong)(int)param_2[1] * 0x10;
  dVar15 = (double)*(float *)(lVar6 + 0xc + lVar12);
  dVar16 = (double)*(float *)(lVar6 + 8 + lVar12);
  dVar14 = (double)*(float *)(lVar6 + 4 + lVar12);
  dVar13 = (double)*(float *)(lVar6 + lVar12);
  dVar1 = *(double *)(lVar7 + lVar11);
  dVar2 = *(double *)(lVar7 + 8 + lVar11);
  dVar3 = *(double *)(lVar7 + 0x10 + lVar11);
  dVar17 = dVar13 * dVar2 - dVar1 * dVar14;
  dVar17 = dVar17 + dVar17;
  dVar10 = dVar16 * dVar1 - dVar3 * dVar13;
  dVar10 = dVar10 + dVar10;
  dVar9 = dVar14 * dVar3 - dVar2 * dVar16;
  dVar9 = dVar9 + dVar9;
  dVar4 = *(double *)(lVar8 + 0x10 + lVar11);
  dVar5 = *(double *)(lVar8 + 8 + lVar11);
  *param_1 = (dVar14 * dVar17 - dVar10 * dVar16) + dVar15 * dVar9 + dVar1 +
             *(double *)(lVar8 + lVar11);
  param_1[1] = (dVar16 * dVar9 - dVar17 * dVar13) + dVar10 * dVar15 + dVar2 + dVar5;
  param_1[2] = (dVar13 * dVar10 - dVar9 * dVar14) + dVar17 * dVar15 + dVar3 + dVar4;
  return;
}



// FUNCTION 144b269fc FUN_144b269fc body=160 status=ok
// SIG undefined FUN_144b269fc(void)

void FUN_144b269fc(undefined8 *param_1,byte param_2,uint param_3,longlong param_4,longlong param_5,
                  int *param_6,byte param_7)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  
  iVar1 = *param_6;
  if (iVar1 == 0) {
    *(undefined4 *)param_1 = 1;
    lVar3 = 0;
    uVar2 = 0;
    uVar4 = 0;
    do {
      if (*(char *)(param_4 + lVar3) == '\x02') {
        uVar4 = uVar4 | 1 << ((uint)lVar3 & 0x1f);
      }
      else if (*(char *)(param_4 + lVar3) == '\x01') {
        uVar2 = uVar2 | 1 << ((uint)lVar3 & 0x1f);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    *(uint *)(param_1 + 1) = uVar2;
    *(uint *)((longlong)param_1 + 4) = uVar4;
    *(uint *)((longlong)param_1 + 0xc) =
         (uint)param_2 * 0x200000 + (param_3 & 0xff) + 1 | *(int *)(param_5 + 0x20) << 0x1a;
  }
  else {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((longlong)param_1 + 4) = iVar1;
    *(uint *)((longlong)param_1 + 0xc) =
         (param_3 & 0xff) + ((uint)param_7 << 0x15 | param_6[1] << 0x1a) + 1;
  }
  return;
}



// FUNCTION 144b26aa4 FUN_144b26aa4 body=68 status=ok
// SIG undefined FUN_144b26aa4(void)

longlong * FUN_144b26aa4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(code **)(*param_1 + 0x670) == (code *)&LAB_1449b4f9e) {
    param_1 = param_1 + 0x322;
  }
  else {
    param_1 = (longlong *)(**(code **)(*param_1 + 0x670))();
  }
  param_2[2] = param_1[5];
  lVar1 = param_1[4];
  *param_2 = param_1[3];
  param_2[1] = lVar1;
  return param_2;
}



// FUNCTION 144b26ae8 FUN_144b26ae8 body=118 status=ok
// SIG undefined FUN_144b26ae8(void)

longlong FUN_144b26ae8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((((*(byte *)(param_1 + 0x44d) & 0x10) == 0) && (*(int *)(param_1 + 0x414) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x410), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)) &&
      (((int)plVar3[2] == *(int *)(param_1 + 0x414) && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))
      ))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    return lVar2 + 200;
  }
  return param_1 + 0x520;
}



// FUNCTION 144b26b6a FUN_144b26b6a body=25 status=ok
// SIG undefined FUN_144b26b6a(void)

undefined8 FUN_144b26b6a(longlong param_1)

{
  ulonglong uVar1;
  
  if (DAT_14c761ae8 - 1U < 3) {
    uVar1 = (ulonglong)CONCAT31((int3)(DAT_14c761ae8 - 1U >> 8),*(undefined1 *)(param_1 + 0x78)) &
            0xffffffffffffff40;
    return CONCAT71((int7)(uVar1 >> 8),(byte)uVar1 >> 6);
  }
  return 0;
}



// FUNCTION 144b26b83 FUN_144b26b83 body=105 status=ok
// SIG undefined FUN_144b26b83(void)

undefined8 FUN_144b26b83(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cafae10;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(undefined1 *)(lVar2 + uVar6));
}



// FUNCTION 144b26bec FUN_144b26bec body=52 status=ok
// SIG undefined FUN_144b26bec(void)

longlong FUN_144b26bec(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = (**(code **)(*param_1 + 0x220))(param_1);
    if (lVar1 != 0) {
      FUN_144ae2964(lVar1);
    }
  }
  return param_1[0x12];
}



// FUNCTION 144b26c6c FUN_144b26c6c body=433 status=ok
// SIG undefined FUN_144b26c6c(void)

void FUN_144b26c6c(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  byte bVar9;
  int *piVar10;
  int *piVar11;
  ulonglong uVar12;
  bool bVar13;
  
  bVar8 = *(byte *)(param_2 + 0x1d0);
  if (*(char *)(param_1 + 0x2d1) == '\x01') {
    bVar9 = 1;
    if ((bVar8 & 4) == 0) {
      bVar13 = (bVar8 & 8) == 0;
LAB_144b26cde:
      bVar9 = bVar13 + 3;
    }
  }
  else {
    if ((bVar8 & 8) != 0) {
      iVar2 = *(int *)(param_2 + 0x17c);
      iVar3 = *(int *)(param_2 + 0x180);
      iVar4 = *(int *)(param_2 + 0x184);
      iVar5 = *(int *)(param_2 + 0x188);
      if ((longlong)*(int *)(param_1 + 0x300) != 0) {
        piVar11 = *(int **)(param_1 + 0x2f8);
        piVar10 = piVar11 + (longlong)*(int *)(param_1 + 0x300) * 4;
        do {
          if ((((*piVar11 == iVar2) && (piVar11[1] == iVar3)) && (piVar11[2] == iVar4)) &&
             (piVar11[3] == iVar5)) {
            bVar9 = 0;
            goto LAB_144b26c9a;
          }
          piVar11 = piVar11 + 4;
        } while (piVar11 != piVar10);
      }
      lVar6 = *(longlong *)(param_1 + 0x2d8);
      if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x10) != 0)) {
        lVar7 = *(longlong *)(lVar6 + 8);
        uVar12 = 0;
        do {
          if (((*(int *)(lVar7 + uVar12) == iVar2) && (*(int *)(lVar7 + 4 + uVar12) == iVar3)) &&
             ((*(int *)(lVar7 + 8 + uVar12) == iVar4 && (*(int *)(lVar7 + 0xc + uVar12) == iVar5))))
          {
            bVar9 = 1;
            if ((int)(~uVar12 >> 4) != 0) goto LAB_144b26c9a;
            break;
          }
          lVar1 = lVar7 + uVar12;
          uVar12 = uVar12 + 0x10;
        } while (lVar1 + 0x10 != (longlong)*(int *)(lVar6 + 0x10) * 0x10 + lVar7);
      }
      lVar6 = *(longlong *)(param_1 + 0x2e0);
      if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x10) != 0)) {
        lVar7 = *(longlong *)(lVar6 + 8);
        uVar12 = 0;
        do {
          if ((((*(int *)(lVar7 + uVar12) == iVar2) && (*(int *)(lVar7 + 4 + uVar12) == iVar3)) &&
              (*(int *)(lVar7 + 8 + uVar12) == iVar4)) && (*(int *)(lVar7 + 0xc + uVar12) == iVar5))
          {
            bVar13 = (~uVar12 & 0xffffffff0) == 0;
            goto LAB_144b26cde;
          }
          lVar1 = lVar7 + uVar12;
          uVar12 = uVar12 + 0x10;
        } while (lVar1 + 0x10 != (longlong)*(int *)(lVar6 + 0x10) * 0x10 + lVar7);
      }
    }
    bVar9 = 4;
  }
LAB_144b26c9a:
  bVar8 = 2;
  if (bVar9 != 4) {
    bVar8 = bVar9;
  }
  *(bool *)param_4 = bVar8 != 0;
  *(bool *)param_3 = bVar9 == 4;
  *(bool *)param_5 = bVar8 < 2;
  *(bool *)param_6 = bVar8 == 3;
  return;
}



// FUNCTION 144b26f16 FUN_144b26f16 body=5 status=ok
// SIG undefined FUN_144b26f16(void)

undefined1 FUN_144b26f16(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x21);
}



// FUNCTION 144b26f1b FUN_144b26f1b body=37 status=ok
// SIG undefined FUN_144b26f1b(void)

void FUN_144b26f1b(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0xffffffff;
    param_1[4] = 0;
    param_1[5] = 0x3f80000000000000;
    param_1 = param_1 + 6;
  }
  return;
}



// FUNCTION 144b26f4c FUN_144b26f4c body=9 status=ok
// SIG undefined FUN_144b26f4c(void)

bool FUN_144b26f4c(int param_1)

{
  return 2 < param_1;
}



// FUNCTION 144b26f56 FUN_144b26f56 body=262 status=ok
// SIG undefined FUN_144b26f56(void)

void FUN_144b26f56(undefined8 *param_1,int param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  longlong lVar2;
  
  param_1[5] = 0;
  param_1[6] = 0x200000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[8] = 0;
  param_1[9] = 0x200000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x200000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x200000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x200000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = param_3;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(int *)(param_1 + 0x23) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x11c) = param_4;
  bVar1 = DAT_14ca96500;
  if (param_2 != 1) {
    if (param_2 < 3) {
      bVar1 = 0;
    }
    else {
      lVar2 = (ulonglong)DAT_14ca85550 * 0x3c;
      bVar1 = 0;
      if ((*(longlong *)(&DAT_14ca814b0 + lVar2) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) {
        if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar2 + 3) & 0x10) == 0) {
          bVar1 = 1;
        }
        else {
          bVar1 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar2 + 3) & 0x20) >> 5;
        }
      }
    }
  }
  *(byte *)(param_1 + 0x24) = bVar1;
  param_1[0x27] = 0;
  param_1[0x28] = 0x200000000;
  return;
}



// FUNCTION 144b2705c FUN_144b2705c body=34 status=ok
// SIG undefined FUN_144b2705c(void)

void FUN_144b2705c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  *(undefined8 *)(param_1 + 0x100) = param_3;
  *(undefined8 *)(param_1 + 0xf8) = param_4;
  *(undefined8 *)(param_1 + 0x108) = param_5;
  return;
}



// FUNCTION 144b2707e FUN_144b2707e body=418 status=ok
// SIG undefined FUN_144b2707e(void)

void FUN_144b2707e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar1 + 1U) {
    FUN_147d0b054(param_1 + 0x70,iVar1);
  }
  lVar2 = param_1 + 0x70;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar1 + 1U) {
    FUN_147d0b134(param_1 + 0x90,iVar1);
  }
  lVar2 = param_1 + 0x90;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
  }
  *(undefined2 *)(lVar2 + (longlong)iVar1 * 2) = 0;
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_147d0b212(param_1 + 0x18,iVar1);
  }
  lVar2 = param_1 + 0x18;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_3;
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_147d0b2f2(param_1 + 0x38,iVar1);
  }
  lVar2 = param_1 + 0x38;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x40);
  }
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 4) = 0;
  iVar1 = *(int *)(param_1 + 0x68);
  *(uint *)(param_1 + 0x68) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x6c) < iVar1 + 1U) {
    FUN_147d0b3da(param_1 + 0x50,iVar1);
  }
  lVar2 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x60);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_4;
  iVar1 = *(int *)(param_1 + 0x140);
  *(uint *)(param_1 + 0x140) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x144) < iVar1 + 1U) {
    FUN_147d0b4ba(param_1 + 0x128,iVar1);
  }
  lVar2 = param_1 + 0x128;
  if (*(longlong *)(param_1 + 0x138) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x138);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = param_5;
  return;
}



// FUNCTION 144b27220 FUN_144b27220 body=265 status=ok
// SIG undefined FUN_144b27220(void)

void FUN_144b27220(longlong param_1)

{
  if (*(int *)(param_1 + 0x8c) < 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_147d0b59a(param_1 + 0x70,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_147d0b5c0(param_1 + 0x90,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  if (*(int *)(param_1 + 0x34) < 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    FUN_147d0b5e6(param_1 + 0x18,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x4c) < 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN_147d0b60c(param_1 + 0x38,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  if (*(int *)(param_1 + 0x6c) < 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    FUN_147d0b632(param_1 + 0x50,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  if (-1 < *(int *)(param_1 + 0x144)) {
    *(undefined4 *)(param_1 + 0x140) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  FUN_147d0b658(param_1 + 0x128,0);
  return;
}



// FUNCTION 144b27329 FUN_144b27329 body=89 status=ok
// SIG undefined FUN_144b27329(void)

longlong FUN_144b27329(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x1dd0) != 0) &&
     (*(longlong **)(DAT_14cb0d2b0 + 0xfd0) != (longlong *)0x0)) {
    uVar2 = (**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfd0) + 0x30))();
    lVar1 = *(longlong *)(param_1 + 8);
    if ((-1 < (int)uVar2 && lVar1 != 0) && ((int)uVar2 < *(int *)(lVar1 + 0x10))) {
      param_1 = *(longlong *)(*(longlong *)(lVar1 + 8) + (ulonglong)uVar2 * 8);
    }
  }
  return param_1;
}



// FUNCTION 144b27382 FUN_144b27382 body=5070 status=ok
// SIG undefined FUN_144b27382(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_144b27382(float *param_1,longlong param_2,longlong param_3)

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
  double dVar11;
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
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  double dVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  double dVar78;
  double dVar79;
  double dVar80;
  double dVar81;
  double dVar82;
  double dVar83;
  double dVar84;
  double dVar85;
  double dVar86;
  double dVar87;
  double dVar88;
  double dVar89;
  double dVar90;
  double dVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  double dVar95;
  double dVar96;
  double dVar97;
  double dVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  float fVar110;
  float fVar111;
  float fVar112;
  float fVar113;
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  float fVar129;
  float fVar130;
  double dVar131;
  double dVar132;
  double dVar133;
  double dVar134;
  double dVar135;
  double dVar136;
  double dVar137;
  double dVar138;
  double dVar139;
  double dVar140;
  double dVar141;
  double dVar142;
  undefined1 auVar143 [16];
  double dVar144;
  
  dVar142 = *(double *)(param_2 + 0xb48);
  dVar1 = *(double *)(param_2 + 0xb50);
  dVar144 = *(double *)(param_2 + 0xb58);
  dVar2 = *(double *)(param_2 + 0x330);
  dVar3 = *(double *)(param_2 + 0x338);
  dVar4 = *(double *)(param_2 + 0x340);
  dVar5 = *(double *)(param_2 + 0x348);
  dVar6 = *(double *)(param_2 + 0x350);
  dVar7 = *(double *)(param_2 + 0x358);
  dVar8 = *(double *)(param_2 + 0x360);
  dVar9 = *(double *)(param_2 + 0x368);
  dVar10 = *(double *)(param_2 + 0x370);
  dVar11 = *(double *)(param_2 + 0x378);
  dVar12 = *(double *)(param_2 + 0x380);
  dVar13 = *(double *)(param_2 + 0x388);
  dVar14 = *(double *)(param_2 + 0x390);
  dVar15 = *(double *)(param_2 + 0x398);
  dVar16 = *(double *)(param_2 + 0x3a0);
  dVar17 = *(double *)(param_2 + 0x3a8);
  dVar18 = *(double *)(param_2 + 0x430);
  dVar19 = *(double *)(param_2 + 0x438);
  dVar20 = *(double *)(param_2 + 0x440);
  dVar21 = *(double *)(param_2 + 0x448);
  dVar22 = *(double *)(param_2 + 0x450);
  dVar23 = *(double *)(param_2 + 0x458);
  dVar85 = *(double *)(param_2 + 0x4d0);
  dVar86 = *(double *)(param_2 + 0x4d8);
  dVar24 = *(double *)(param_2 + 0x460);
  dVar87 = *(double *)(param_2 + 0x4b0);
  dVar88 = *(double *)(param_2 + 0x4b8);
  dVar25 = *(double *)(param_2 + 0x468);
  dVar26 = *(double *)(param_2 + 0x470);
  dVar27 = *(double *)(param_2 + 0x478);
  dVar89 = *(double *)(param_2 + 0x4f0);
  dVar90 = *(double *)(param_2 + 0x4f8);
  dVar28 = *(double *)(param_2 + 0x480);
  dVar29 = *(double *)(param_2 + 0x488);
  dVar30 = *(double *)(param_2 + 0x490);
  dVar31 = *(double *)(param_2 + 0x498);
  dVar32 = *(double *)(param_2 + 0x4a0);
  dVar33 = *(double *)(param_2 + 0x4a8);
  dVar34 = *(double *)(param_3 + 0x530);
  dVar35 = *(double *)(param_3 + 0x538);
  dVar36 = *(double *)(param_3 + 0x540);
  dVar37 = *(double *)(param_3 + 0x548);
  dVar91 = *(double *)(param_2 + 0x4c0);
  dVar92 = *(double *)(param_2 + 0x4c8);
  dVar38 = *(double *)(param_3 + 0x550);
  dVar93 = *(double *)(param_2 + 0x4e0);
  dVar94 = *(double *)(param_2 + 0x4e8);
  dVar39 = *(double *)(param_3 + 0x558);
  dVar95 = *(double *)(param_2 + 0x500);
  dVar96 = *(double *)(param_2 + 0x508);
  dVar40 = *(double *)(param_3 + 0x560);
  dVar97 = *(double *)(param_2 + 0x510);
  dVar98 = *(double *)(param_2 + 0x518);
  dVar41 = *(double *)(param_3 + 0x568);
  dVar131 = *(double *)(param_2 + 0x520);
  dVar132 = *(double *)(param_2 + 0x528);
  dVar42 = *(double *)(param_3 + 0x570);
  dVar43 = *(double *)(param_3 + 0x590);
  dVar44 = *(double *)(param_3 + 0x578);
  dVar45 = *(double *)(param_3 + 0x598);
  dVar46 = *(double *)(param_3 + 0x580);
  dVar141 = *(double *)(param_3 + 0x5a0);
  dVar47 = *(double *)(param_3 + 0x588);
  dVar48 = *(double *)(param_2 + 0x530);
  dVar49 = *(double *)(param_3 + 0x5a8);
  dVar133 = *(double *)(param_2 + 0x538);
  dVar50 = *(double *)(param_2 + 0x538);
  dVar51 = *(double *)(param_3 + 0x430);
  dVar52 = *(double *)(param_2 + 0x540);
  dVar53 = *(double *)(param_3 + 0x438);
  dVar134 = *(double *)(param_2 + 0x548);
  dVar54 = *(double *)(param_2 + 0x548);
  dVar55 = *(double *)(param_3 + 0x440);
  dVar56 = *(double *)(param_2 + 0x550);
  dVar57 = *(double *)(param_3 + 0x448);
  dVar135 = *(double *)(param_2 + 0x558);
  dVar58 = *(double *)(param_2 + 0x558);
  dVar59 = *(double *)(param_3 + 0x450);
  dVar60 = *(double *)(param_2 + 0x560);
  dVar61 = *(double *)(param_3 + 0x458);
  dVar136 = *(double *)(param_2 + 0x568);
  dVar62 = *(double *)(param_2 + 0x568);
  dVar63 = *(double *)(param_3 + 0x460);
  dVar64 = *(double *)(param_2 + 0x570);
  dVar65 = *(double *)(param_3 + 0x468);
  dVar137 = *(double *)(param_2 + 0x578);
  dVar66 = *(double *)(param_2 + 0x578);
  dVar67 = *(double *)(param_3 + 0x470);
  dVar68 = *(double *)(param_2 + 0x580);
  dVar69 = *(double *)(param_3 + 0x478);
  dVar138 = *(double *)(param_2 + 0x588);
  dVar70 = *(double *)(param_2 + 0x588);
  dVar71 = *(double *)(param_3 + 0x480);
  dVar72 = *(double *)(param_2 + 0x590);
  dVar73 = *(double *)(param_3 + 0x488);
  dVar139 = *(double *)(param_2 + 0x598);
  dVar74 = *(double *)(param_2 + 0x598);
  dVar75 = *(double *)(param_3 + 0x490);
  dVar76 = *(double *)(param_2 + 0x5a0);
  dVar77 = *(double *)(param_3 + 0x498);
  dVar140 = *(double *)(param_2 + 0x5a8);
  dVar78 = *(double *)(param_2 + 0x5a8);
  dVar79 = *(double *)(param_3 + 0x4a0);
  dVar80 = *(double *)(param_3 + 0x4a8);
  param_1[0x90] = (float)dVar142;
  param_1[0x91] = (float)dVar1;
  dVar1 = (double)(float)dVar1;
  dVar81 = (double)(float)dVar142;
  param_1[0x92] = (float)dVar144;
  dVar82 = (double)(float)dVar144;
  dVar83 = dVar97 * 0.0;
  dVar84 = dVar98 * 0.0;
  dVar142 = dVar131 * 0.0;
  dVar144 = dVar132 * 0.0;
  *param_1 = (float)(dVar87 + dVar85 * 0.0 + dVar89 * 0.0 + dVar83);
  param_1[1] = (float)(dVar88 + dVar86 * 0.0 + dVar90 * 0.0 + dVar84);
  param_1[2] = (float)(dVar91 + dVar93 * 0.0 + dVar95 * 0.0 + dVar142);
  param_1[3] = (float)(dVar92 + dVar94 * 0.0 + dVar96 * 0.0 + dVar144);
  param_1[4] = (float)(dVar87 * 0.0 + dVar85 + dVar89 * 0.0 + dVar83);
  param_1[5] = (float)(dVar88 * 0.0 + dVar86 + dVar90 * 0.0 + dVar84);
  param_1[6] = (float)(dVar91 * 0.0 + dVar93 + dVar95 * 0.0 + dVar142);
  param_1[7] = (float)(dVar92 * 0.0 + dVar94 + dVar96 * 0.0 + dVar144);
  param_1[8] = (float)(dVar87 * 0.0 + dVar85 * 0.0 + dVar89 + dVar83);
  param_1[9] = (float)(dVar88 * 0.0 + dVar86 * 0.0 + dVar90 + dVar84);
  param_1[10] = (float)(dVar91 * 0.0 + dVar93 * 0.0 + dVar95 + dVar142);
  param_1[0xb] = (float)(dVar92 * 0.0 + dVar94 * 0.0 + dVar96 + dVar144);
  param_1[0xc] = (float)(dVar89 * dVar82 + dVar85 * dVar1 + dVar87 * dVar81 + dVar97);
  param_1[0xd] = (float)(dVar90 * dVar82 + dVar86 * dVar1 + dVar88 * dVar81 + dVar98);
  param_1[0xe] = (float)(dVar82 * dVar95 + dVar1 * dVar93 + dVar81 * dVar91 + dVar131);
  param_1[0xf] = (float)(dVar82 * dVar96 + dVar1 * dVar94 + dVar81 * dVar92 + dVar132);
  auVar143._0_8_ = -dVar82;
  auVar143._8_8_ = 0x8000000000000000;
  dVar43 = dVar43 - dVar81;
  auVar143 = blendpd(auVar143,_DAT_149935300,2);
  dVar142 = auVar143._0_8_;
  dVar144 = auVar143._8_8_;
  param_1[0x20] = (float)((dVar52 * 0.0 + dVar133 * 0.0 + dVar48 * 1.0) - dVar81 * dVar134);
  param_1[0x21] = (float)((dVar52 * 0.0 + dVar50 * 1.0 + dVar48 * 0.0) - dVar1 * dVar54);
  param_1[0x22] = (float)(dVar134 * dVar142 + dVar52 * 1.0 + dVar133 * 0.0 + dVar48 * 0.0);
  param_1[0x23] = (float)(dVar54 * dVar144 + dVar52 * 0.0 + dVar50 * 0.0 + dVar48 * 0.0);
  param_1[0x24] = (float)((dVar60 * 0.0 + dVar135 * 0.0 + dVar56 * 1.0) - dVar81 * dVar136);
  param_1[0x25] = (float)((dVar60 * 0.0 + dVar58 * 1.0 + dVar56 * 0.0) - dVar1 * dVar62);
  param_1[0x26] = (float)(dVar136 * dVar142 + dVar60 * 1.0 + dVar135 * 0.0 + dVar56 * 0.0);
  param_1[0x27] = (float)(dVar62 * dVar144 + dVar60 * 0.0 + dVar58 * 0.0 + dVar56 * 0.0);
  param_1[0x28] = (float)((dVar68 * 0.0 + dVar137 * 0.0 + dVar64 * 1.0) - dVar81 * dVar138);
  param_1[0x29] = (float)((dVar68 * 0.0 + dVar66 * 1.0 + dVar64 * 0.0) - dVar1 * dVar70);
  param_1[0x2a] = (float)(dVar138 * dVar142 + dVar68 * 1.0 + dVar137 * 0.0 + dVar64 * 0.0);
  param_1[0x2b] = (float)(dVar70 * dVar144 + dVar68 * 0.0 + dVar66 * 0.0 + dVar64 * 0.0);
  param_1[0x2c] = (float)((dVar76 * 0.0 + dVar139 * 0.0 + dVar72 * 1.0) - dVar81 * dVar140);
  param_1[0x2d] = (float)((dVar76 * 0.0 + dVar74 * 1.0 + dVar72 * 0.0) - dVar1 * dVar78);
  param_1[0x2e] = (float)(dVar142 * dVar140 + dVar76 * 1.0 + dVar139 * 0.0 + dVar72 * 0.0);
  param_1[0x2f] = (float)(dVar144 * dVar78 + dVar76 * 0.0 + dVar74 * 0.0 + dVar72 * 0.0);
  param_1[0x40] = (float)dVar2;
  param_1[0x41] = (float)dVar3;
  param_1[0x42] = (float)dVar4;
  param_1[0x43] = (float)dVar5;
  param_1[0x44] = (float)dVar6;
  param_1[0x45] = (float)dVar7;
  param_1[0x46] = (float)dVar8;
  param_1[0x47] = (float)dVar9;
  param_1[0x48] = (float)dVar10;
  param_1[0x49] = (float)dVar11;
  param_1[0x4a] = (float)dVar12;
  param_1[0x4b] = (float)dVar13;
  param_1[0x4c] = (float)dVar14;
  param_1[0x4d] = (float)dVar15;
  param_1[0x4e] = (float)dVar16;
  param_1[0x4f] = (float)dVar17;
  param_1[0x50] = (float)dVar18;
  param_1[0x51] = (float)dVar19;
  param_1[0x52] = (float)dVar20;
  param_1[0x53] = (float)dVar21;
  param_1[0x54] = (float)dVar22;
  param_1[0x55] = (float)dVar23;
  param_1[0x56] = (float)dVar24;
  param_1[0x57] = (float)dVar25;
  param_1[0x58] = (float)dVar26;
  param_1[0x59] = (float)dVar27;
  param_1[0x5a] = (float)dVar28;
  param_1[0x5b] = (float)dVar29;
  param_1[0x5c] = (float)dVar30;
  param_1[0x5d] = (float)dVar31;
  param_1[0x5e] = (float)dVar32;
  param_1[0x5f] = (float)dVar33;
  fVar99 = *param_1;
  fVar100 = param_1[1];
  fVar101 = param_1[2];
  fVar102 = param_1[3];
  fVar103 = param_1[0x40];
  fVar104 = param_1[0x41];
  fVar105 = param_1[0x42];
  fVar106 = param_1[0x43];
  fVar107 = param_1[0x44];
  fVar108 = param_1[0x45];
  fVar109 = param_1[0x46];
  fVar110 = param_1[0x47];
  fVar111 = param_1[0x48];
  fVar112 = param_1[0x49];
  fVar113 = param_1[0x4a];
  fVar114 = param_1[0x4b];
  fVar115 = param_1[0x4c];
  fVar116 = param_1[0x4d];
  fVar117 = param_1[0x4e];
  fVar118 = param_1[0x4f];
  fVar119 = param_1[4];
  fVar120 = param_1[5];
  fVar121 = param_1[6];
  fVar122 = param_1[7];
  fVar123 = param_1[8];
  fVar124 = param_1[9];
  fVar125 = param_1[10];
  fVar126 = param_1[0xb];
  fVar127 = param_1[0xc];
  fVar128 = param_1[0xd];
  fVar129 = param_1[0xe];
  fVar130 = param_1[0xf];
  param_1[0x10] = fVar102 * fVar115 + fVar101 * fVar111 + fVar100 * fVar107 + fVar99 * fVar103;
  param_1[0x11] = fVar102 * fVar116 + fVar101 * fVar112 + fVar100 * fVar108 + fVar99 * fVar104;
  param_1[0x12] = fVar102 * fVar117 + fVar101 * fVar113 + fVar100 * fVar109 + fVar99 * fVar105;
  param_1[0x13] = fVar102 * fVar118 + fVar101 * fVar114 + fVar100 * fVar110 + fVar99 * fVar106;
  param_1[0x14] = fVar122 * fVar115 + fVar121 * fVar111 + fVar120 * fVar107 + fVar119 * fVar103;
  param_1[0x15] = fVar122 * fVar116 + fVar121 * fVar112 + fVar120 * fVar108 + fVar119 * fVar104;
  param_1[0x16] = fVar122 * fVar117 + fVar121 * fVar113 + fVar120 * fVar109 + fVar119 * fVar105;
  param_1[0x17] = fVar122 * fVar118 + fVar121 * fVar114 + fVar120 * fVar110 + fVar119 * fVar106;
  param_1[0x18] = fVar126 * fVar115 + fVar125 * fVar111 + fVar124 * fVar107 + fVar123 * fVar103;
  param_1[0x19] = fVar126 * fVar116 + fVar125 * fVar112 + fVar124 * fVar108 + fVar123 * fVar104;
  param_1[0x1a] = fVar126 * fVar117 + fVar125 * fVar113 + fVar124 * fVar109 + fVar123 * fVar105;
  param_1[0x1b] = fVar126 * fVar118 + fVar125 * fVar114 + fVar124 * fVar110 + fVar123 * fVar106;
  param_1[0x1c] = fVar130 * fVar115 + fVar129 * fVar111 + fVar128 * fVar107 + fVar127 * fVar103;
  param_1[0x1d] = fVar130 * fVar116 + fVar129 * fVar112 + fVar128 * fVar108 + fVar127 * fVar104;
  param_1[0x1e] = fVar130 * fVar117 + fVar129 * fVar113 + fVar128 * fVar109 + fVar127 * fVar105;
  param_1[0x1f] = fVar130 * fVar118 + fVar129 * fVar114 + fVar128 * fVar110 + fVar127 * fVar106;
  fVar99 = param_1[0x50];
  fVar100 = param_1[0x51];
  fVar101 = param_1[0x52];
  fVar102 = param_1[0x53];
  fVar103 = param_1[0x20];
  fVar104 = param_1[0x21];
  fVar105 = param_1[0x22];
  fVar106 = param_1[0x23];
  fVar107 = param_1[0x24];
  fVar108 = param_1[0x25];
  fVar109 = param_1[0x26];
  fVar110 = param_1[0x27];
  fVar111 = param_1[0x28];
  fVar112 = param_1[0x29];
  fVar113 = param_1[0x2a];
  fVar114 = param_1[0x2b];
  fVar115 = param_1[0x2c];
  fVar116 = param_1[0x2d];
  fVar117 = param_1[0x2e];
  fVar118 = param_1[0x2f];
  fVar119 = param_1[0x54];
  fVar120 = param_1[0x55];
  fVar121 = param_1[0x56];
  fVar122 = param_1[0x57];
  fVar123 = param_1[0x58];
  fVar124 = param_1[0x59];
  fVar125 = param_1[0x5a];
  fVar126 = param_1[0x5b];
  fVar127 = param_1[0x5c];
  fVar128 = param_1[0x5d];
  fVar129 = param_1[0x5e];
  fVar130 = param_1[0x5f];
  param_1[0x30] = fVar102 * fVar115 + fVar101 * fVar111 + fVar100 * fVar107 + fVar99 * fVar103;
  param_1[0x31] = fVar102 * fVar116 + fVar101 * fVar112 + fVar100 * fVar108 + fVar99 * fVar104;
  param_1[0x32] = fVar102 * fVar117 + fVar101 * fVar113 + fVar100 * fVar109 + fVar99 * fVar105;
  param_1[0x33] = fVar102 * fVar118 + fVar101 * fVar114 + fVar100 * fVar110 + fVar99 * fVar106;
  param_1[0x34] = fVar122 * fVar115 + fVar121 * fVar111 + fVar120 * fVar107 + fVar119 * fVar103;
  param_1[0x35] = fVar122 * fVar116 + fVar121 * fVar112 + fVar120 * fVar108 + fVar119 * fVar104;
  param_1[0x36] = fVar122 * fVar117 + fVar121 * fVar113 + fVar120 * fVar109 + fVar119 * fVar105;
  param_1[0x37] = fVar122 * fVar118 + fVar121 * fVar114 + fVar120 * fVar110 + fVar119 * fVar106;
  param_1[0x38] = fVar126 * fVar115 + fVar125 * fVar111 + fVar124 * fVar107 + fVar123 * fVar103;
  param_1[0x39] = fVar126 * fVar116 + fVar125 * fVar112 + fVar124 * fVar108 + fVar123 * fVar104;
  param_1[0x3a] = fVar126 * fVar117 + fVar125 * fVar113 + fVar124 * fVar109 + fVar123 * fVar105;
  param_1[0x3b] = fVar126 * fVar118 + fVar125 * fVar114 + fVar124 * fVar110 + fVar123 * fVar106;
  param_1[0x3c] = fVar130 * fVar115 + fVar129 * fVar111 + fVar128 * fVar107 + fVar127 * fVar103;
  param_1[0x3d] = fVar130 * fVar116 + fVar129 * fVar112 + fVar128 * fVar108 + fVar127 * fVar104;
  param_1[0x3e] = fVar130 * fVar117 + fVar129 * fVar113 + fVar128 * fVar109 + fVar127 * fVar105;
  param_1[0x3f] = fVar130 * fVar118 + fVar129 * fVar114 + fVar128 * fVar110 + fVar127 * fVar106;
  dVar141 = dVar141 - dVar82;
  dVar45 = dVar45 - dVar1;
  if (2097151.0 <= dVar43) {
    dVar43 = 2097151.0;
  }
  if (2097151.0 <= dVar45) {
    dVar45 = 2097151.0;
  }
  if (2097151.0 <= dVar141) {
    dVar141 = 2097151.0;
  }
  if (dVar43 <= -2097151.0) {
    dVar43 = -2097151.0;
  }
  if (dVar45 <= -2097151.0) {
    dVar45 = -2097151.0;
  }
  if (dVar141 <= -2097151.0) {
    dVar141 = -2097151.0;
  }
  param_1[0x60] = (float)dVar34;
  param_1[0x61] = (float)dVar35;
  param_1[0x62] = (float)dVar36;
  param_1[99] = (float)dVar37;
  param_1[100] = (float)dVar38;
  param_1[0x65] = (float)dVar39;
  param_1[0x66] = (float)dVar40;
  param_1[0x67] = (float)dVar41;
  param_1[0x68] = (float)dVar42;
  param_1[0x69] = (float)dVar44;
  param_1[0x6a] = (float)dVar46;
  param_1[0x6b] = (float)dVar47;
  param_1[0x6c] = (float)dVar43;
  param_1[0x6d] = (float)dVar45;
  param_1[0x6e] = (float)dVar141;
  param_1[0x6f] = (float)dVar49;
  param_1[0x80] = (float)dVar51;
  param_1[0x81] = (float)dVar53;
  param_1[0x82] = (float)dVar55;
  param_1[0x83] = (float)dVar57;
  param_1[0x84] = (float)dVar59;
  param_1[0x85] = (float)dVar61;
  param_1[0x86] = (float)dVar63;
  param_1[0x87] = (float)dVar65;
  param_1[0x88] = (float)dVar67;
  param_1[0x89] = (float)dVar69;
  param_1[0x8a] = (float)dVar71;
  param_1[0x8b] = (float)dVar73;
  param_1[0x8c] = (float)dVar75;
  param_1[0x8d] = (float)dVar77;
  param_1[0x8e] = (float)dVar79;
  param_1[0x8f] = (float)dVar80;
  fVar99 = param_1[0x80];
  fVar100 = param_1[0x81];
  fVar101 = param_1[0x82];
  fVar102 = param_1[0x83];
  fVar103 = param_1[0x60];
  fVar104 = param_1[0x61];
  fVar105 = param_1[0x62];
  fVar106 = param_1[99];
  fVar107 = param_1[100];
  fVar108 = param_1[0x65];
  fVar109 = param_1[0x66];
  fVar110 = param_1[0x67];
  fVar111 = param_1[0x68];
  fVar112 = param_1[0x69];
  fVar113 = param_1[0x6a];
  fVar114 = param_1[0x6b];
  fVar115 = param_1[0x6c];
  fVar116 = param_1[0x6d];
  fVar117 = param_1[0x6e];
  fVar118 = param_1[0x6f];
  fVar119 = param_1[0x84];
  fVar120 = param_1[0x85];
  fVar121 = param_1[0x86];
  fVar122 = param_1[0x87];
  fVar123 = param_1[0x88];
  fVar124 = param_1[0x89];
  fVar125 = param_1[0x8a];
  fVar126 = param_1[0x8b];
  fVar127 = param_1[0x8c];
  fVar128 = param_1[0x8d];
  fVar129 = param_1[0x8e];
  fVar130 = param_1[0x8f];
  param_1[0x70] = fVar102 * fVar115 + fVar101 * fVar111 + fVar100 * fVar107 + fVar99 * fVar103;
  param_1[0x71] = fVar102 * fVar116 + fVar101 * fVar112 + fVar100 * fVar108 + fVar99 * fVar104;
  param_1[0x72] = fVar102 * fVar117 + fVar101 * fVar113 + fVar100 * fVar109 + fVar99 * fVar105;
  param_1[0x73] = fVar102 * fVar118 + fVar101 * fVar114 + fVar100 * fVar110 + fVar99 * fVar106;
  param_1[0x74] = fVar122 * fVar115 + fVar121 * fVar111 + fVar120 * fVar107 + fVar119 * fVar103;
  param_1[0x75] = fVar122 * fVar116 + fVar121 * fVar112 + fVar120 * fVar108 + fVar119 * fVar104;
  param_1[0x76] = fVar122 * fVar117 + fVar121 * fVar113 + fVar120 * fVar109 + fVar119 * fVar105;
  param_1[0x77] = fVar122 * fVar118 + fVar121 * fVar114 + fVar120 * fVar110 + fVar119 * fVar106;
  param_1[0x78] = fVar126 * fVar115 + fVar125 * fVar111 + fVar124 * fVar107 + fVar123 * fVar103;
  param_1[0x79] = fVar126 * fVar116 + fVar125 * fVar112 + fVar124 * fVar108 + fVar123 * fVar104;
  param_1[0x7a] = fVar126 * fVar117 + fVar125 * fVar113 + fVar124 * fVar109 + fVar123 * fVar105;
  param_1[0x7b] = fVar126 * fVar118 + fVar125 * fVar114 + fVar124 * fVar110 + fVar123 * fVar106;
  param_1[0x7c] = fVar130 * fVar115 + fVar129 * fVar111 + fVar128 * fVar107 + fVar127 * fVar103;
  param_1[0x7d] = fVar130 * fVar116 + fVar129 * fVar112 + fVar128 * fVar108 + fVar127 * fVar104;
  param_1[0x7e] = fVar130 * fVar117 + fVar129 * fVar113 + fVar128 * fVar109 + fVar127 * fVar105;
  param_1[0x7f] = fVar130 * fVar118 + fVar129 * fVar114 + fVar128 * fVar110 + fVar127 * fVar106;
  return param_1;
}



// FUNCTION 144b28750 FUN_144b28750 body=25 status=ok
// SIG undefined FUN_144b28750(void)

undefined4 FUN_144b28750(longlong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = &DAT_14c760db4;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x40) + 8);
  }
  return *puVar1;
}



// FUNCTION 144b2876a FUN_144b2876a body=23 status=ok
// SIG undefined FUN_144b2876a(void)

undefined2 FUN_144b2876a(longlong param_1)

{
  return *(undefined2 *)(&DAT_14ca85070 + (longlong)*(int *)(param_1 + 0x3090) * 2);
}



// FUNCTION 144b28782 FUN_144b28782 body=83 status=ok
// SIG undefined FUN_144b28782(void)

longlong FUN_144b28782(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((((*(char *)(param_1 + 0x23f4) != '\0') || (*(char *)(param_1 + 0x23f5) == '\x01')) &&
      (*(int *)(param_1 + 0x1dd0) != 0)) && (lVar2 = *(longlong *)(param_1 + 8), lVar2 != 0)) {
    iVar1 = *(int *)(param_1 + 0x1dd8);
    if ((-2 < (longlong)iVar1) && (iVar1 + 1 < *(int *)(lVar2 + 0x10))) {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 8) + 8 + (longlong)iVar1 * 8);
      lVar3 = 0;
      if (*(int *)(lVar2 + 0x1dd0) == 2) {
        lVar3 = lVar2;
      }
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 144b287d6 FUN_144b287d6 body=132 status=ok
// SIG undefined FUN_144b287d6(void)

void FUN_144b287d6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 144b2885a FUN_144b2885a body=1487 status=ok
// SIG undefined FUN_144b2885a(void)

undefined8 * FUN_144b2885a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar4 = *(byte *)(param_2 + 0x10);
  if ((bVar4 == 0x19) || (bVar5 = *(byte *)(param_3 + 0x10), bVar5 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
    goto LAB_144b28a29;
  }
  uVar21 = (uint)bVar4;
  if (0x1b < bVar4) {
    uVar21 = 0x1c;
  }
  uVar20 = (uint)bVar5;
  if (0x1b < bVar5) {
    uVar20 = 0x1c;
  }
  cVar6 = (&DAT_14aa842ba)[uVar20 << 4];
  lVar22 = (longlong)cVar6;
  cVar7 = (&DAT_14aa842ba)[uVar21 << 4];
  lVar12 = (longlong)cVar7;
  if ((lVar22 == 1) || (cVar7 == '\x01')) {
    lVar16 = lVar12;
    if (cVar7 < cVar6) {
      lVar16 = lVar22;
    }
  }
  else {
    lVar16 = lVar22;
    if (cVar7 < cVar6) {
      lVar16 = lVar12;
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x1000000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  cVar8 = (&DAT_14aa842b9)[uVar21 << 4];
  cVar18 = (char)lVar16;
  uVar21 = (uint)lVar16;
  if ((cVar8 == '\x02') || (cVar9 = (&DAT_14aa842b9)[uVar20 << 4], cVar9 == '\x02')) {
    switch(uVar21 & 0xff) {
    case 1:
      uVar11 = 5;
      break;
    case 2:
      uVar11 = 6;
      break;
    case 3:
      uVar11 = 7;
      break;
    case 4:
      uVar11 = 8;
      break;
    default:
      if ((uVar21 & 0xff) == 0x10) {
        uVar11 = 0x16;
      }
      else {
        uVar11 = 0;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar11;
    FUN_14013e547(&local_98,param_2,&local_78);
    FUN_14013e547(&local_99,param_3,&local_98);
    if ('\0' < cVar18) {
      lVar12 = 0;
      do {
        dVar2 = (double)(&local_78)[lVar12];
        uVar24 = SUB84(dVar2,0);
        uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = (double)(&local_98)[lVar12];
        if (dVar3 <= dVar2) {
          uVar24 = SUB84(dVar3,0);
          uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        iVar10 = *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
          FUN_147bcda28(param_1 + 3,iVar10);
        }
        puVar13 = (undefined8 *)param_1[0x13];
        if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
          puVar13 = param_1 + 3;
        }
        puVar13[iVar10] = CONCAT44(uVar25,uVar24);
        lVar12 = lVar12 + 1;
      } while (cVar18 != lVar12);
    }
    goto LAB_144b28a29;
  }
  if ((cVar8 != '\x01') && (cVar9 != '\x01')) {
    switch(uVar21 & 0xff) {
    case 1:
      uVar11 = 9;
      break;
    case 2:
      uVar11 = 10;
      break;
    case 3:
      uVar11 = 0xb;
      break;
    case 4:
      uVar11 = 0xc;
      break;
    default:
      if ((uVar21 & 0xff) == 0x10) {
        uVar11 = 0x15;
      }
      else {
        uVar11 = 0;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar11;
    FUN_147d0d1b6(param_2,&local_78);
    FUN_147d0d1b6(param_3,&local_98);
    if ('\0' < cVar18) {
      lVar12 = 0;
      do {
        uVar21 = *(uint *)((longlong)&local_98 + lVar12 * 4);
        uVar20 = *(uint *)((longlong)&local_78 + lVar12 * 4);
        if ((int)uVar20 < (int)uVar21) {
          uVar21 = uVar20;
        }
        iVar10 = *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
          FUN_147bcda28(param_1 + 3,iVar10);
        }
        puVar13 = (undefined8 *)param_1[0x13];
        if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
          puVar13 = param_1 + 3;
        }
        puVar13[iVar10] = (ulonglong)uVar21;
        lVar12 = lVar12 + 1;
      } while (cVar18 != lVar12);
    }
    goto LAB_144b28a29;
  }
  cVar19 = cVar18;
  if (cVar18 == '\x01') {
LAB_144b28963:
    cVar19 = cVar18;
  }
  else {
    uVar21 = uVar21 & 0xff;
    if (uVar21 < 4) {
      if ((uVar21 != 2) && (cVar19 = '\0', uVar21 == 3)) goto LAB_144b28963;
    }
    else if ((uVar21 != 4) && (cVar19 = '\0', uVar21 == 0x10)) {
      cVar19 = '\x15';
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = cVar19;
  if (cVar7 == '\x01') {
    pfVar15 = (float *)(param_2 + 0x18);
    if (*(float **)(param_2 + 0x98) != (float *)0x0) {
      pfVar15 = *(float **)(param_2 + 0x98);
    }
    if (cVar8 == '\x01') {
      local_78._0_4_ = *pfVar15;
    }
    else if (cVar8 == '\x03') {
      local_78._0_4_ = (float)(int)*pfVar15;
    }
    else {
      local_78._0_4_ = 0.0;
      if (cVar8 == '\x04') {
        local_78._0_4_ = (float)*(byte *)pfVar15;
      }
    }
    local_78._4_4_ = (float)local_78;
    fStack_70 = (float)local_78;
    fStack_6c = (float)local_78;
  }
  else {
    uVar21 = 4;
    if (cVar7 < '\x04') {
      uVar21 = (int)cVar7;
    }
    if ('\0' < cVar7) {
      lVar16 = param_2 + 0x18;
      if (*(longlong *)(param_2 + 0x98) != 0) {
        lVar16 = *(longlong *)(param_2 + 0x98);
      }
      uVar14 = 0;
      do {
        if (cVar8 == '\x01') {
          fVar23 = *(float *)(lVar16 + uVar14 * 8);
        }
        else if (cVar8 == '\x03') {
          fVar23 = (float)*(int *)(lVar16 + uVar14 * 8);
        }
        else {
          fVar23 = 0.0;
          if (cVar8 == '\x04') {
            fVar23 = (float)*(byte *)(lVar16 + uVar14 * 8);
          }
        }
        *(float *)((longlong)&local_78 + uVar14 * 4) = fVar23;
        uVar14 = uVar14 + 1;
      } while (uVar21 != uVar14);
      if ('\x03' < cVar7) goto LAB_144b2899f;
    }
    memset((void *)((longlong)&local_78 + lVar12 * 4),0,(ulonglong)(3 - uVar21) * 4 + 4);
  }
LAB_144b2899f:
  if (cVar6 == '\x01') {
    pfVar15 = (float *)(param_3 + 0x18);
    if (*(float **)(param_3 + 0x98) != (float *)0x0) {
      pfVar15 = *(float **)(param_3 + 0x98);
    }
    if (cVar9 == '\x01') {
      local_98._0_4_ = *pfVar15;
    }
    else if (cVar9 == '\x03') {
      local_98._0_4_ = (float)(int)*pfVar15;
    }
    else {
      local_98._0_4_ = 0.0;
      if (cVar9 == '\x04') {
        local_98._0_4_ = (float)*(byte *)pfVar15;
      }
    }
    local_98._4_4_ = (float)local_98;
    fStack_90 = (float)local_98;
    fStack_8c = (float)local_98;
  }
  else {
    uVar14 = 4;
    if (cVar6 < '\x04') {
      uVar14 = (ulonglong)(uint)(int)cVar6;
    }
    if ('\0' < cVar6) {
      lVar12 = param_3 + 0x18;
      if (*(longlong *)(param_3 + 0x98) != 0) {
        lVar12 = *(longlong *)(param_3 + 0x98);
      }
      uVar17 = 0;
      do {
        if (cVar9 == '\x01') {
          fVar23 = *(float *)(lVar12 + uVar17 * 8);
        }
        else if (cVar9 == '\x03') {
          fVar23 = (float)*(int *)(lVar12 + uVar17 * 8);
        }
        else {
          fVar23 = 0.0;
          if (cVar9 == '\x04') {
            fVar23 = (float)*(byte *)(lVar12 + uVar17 * 8);
          }
        }
        *(float *)((longlong)&local_98 + uVar17 * 4) = fVar23;
        uVar17 = uVar17 + 1;
      } while (uVar14 != uVar17);
      if ('\x03' < cVar6) goto LAB_144b289d1;
    }
    memset((void *)((longlong)&local_98 + lVar22 * 4),0,(ulonglong)(3 - (int)uVar14) * 4 + 4);
  }
LAB_144b289d1:
  if ('\0' < cVar18) {
    lVar12 = 0;
    do {
      fVar23 = *(float *)((longlong)&local_78 + lVar12 * 4);
      fVar1 = *(float *)((longlong)&local_98 + lVar12 * 4);
      if (fVar1 <= fVar23) {
        fVar23 = fVar1;
      }
      iVar10 = *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
        FUN_147bcda28(param_1 + 3,iVar10);
      }
      puVar13 = (undefined8 *)param_1[0x13];
      if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
        puVar13 = param_1 + 3;
      }
      *(float *)(puVar13 + iVar10) = fVar23;
      *(undefined4 *)((longlong)puVar13 + (longlong)iVar10 * 8 + 4) = 0;
      lVar12 = lVar12 + 1;
    } while (cVar18 != lVar12);
  }
LAB_144b28a29:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144b28e2a FUN_144b28e2a body=1487 status=ok
// SIG undefined FUN_144b28e2a(void)

undefined8 * FUN_144b28e2a(undefined8 *param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  ulonglong uVar17;
  char cVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_c8 [47];
  undefined1 local_99;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined8 local_78;
  float fStack_70;
  float fStack_6c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  bVar4 = *(byte *)(param_2 + 0x10);
  if ((bVar4 == 0x19) || (bVar5 = *(byte *)(param_3 + 0x10), bVar5 == 0x19)) {
    memset(param_1,0,0xa8);
    *(undefined4 *)((longlong)param_1 + 0xa4) = 0x10;
    goto LAB_144b28ff9;
  }
  uVar21 = (uint)bVar4;
  if (0x1b < bVar4) {
    uVar21 = 0x1c;
  }
  uVar20 = (uint)bVar5;
  if (0x1b < bVar5) {
    uVar20 = 0x1c;
  }
  cVar6 = (&DAT_14aa842ba)[uVar20 << 4];
  lVar22 = (longlong)cVar6;
  cVar7 = (&DAT_14aa842ba)[uVar21 << 4];
  lVar12 = (longlong)cVar7;
  if ((lVar22 == 1) || (cVar7 == '\x01')) {
    lVar16 = lVar12;
    if (cVar7 < cVar6) {
      lVar16 = lVar22;
    }
  }
  else {
    lVar16 = lVar22;
    if (cVar7 < cVar6) {
      lVar16 = lVar12;
    }
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0x1000000000;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  cVar8 = (&DAT_14aa842b9)[uVar21 << 4];
  cVar18 = (char)lVar16;
  uVar21 = (uint)lVar16;
  if ((cVar8 == '\x02') || (cVar9 = (&DAT_14aa842b9)[uVar20 << 4], cVar9 == '\x02')) {
    switch(uVar21 & 0xff) {
    case 1:
      uVar11 = 5;
      break;
    case 2:
      uVar11 = 6;
      break;
    case 3:
      uVar11 = 7;
      break;
    case 4:
      uVar11 = 8;
      break;
    default:
      if ((uVar21 & 0xff) == 0x10) {
        uVar11 = 0x16;
      }
      else {
        uVar11 = 0;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar11;
    FUN_14013e547(&local_98,param_2,&local_78);
    FUN_14013e547(&local_99,param_3,&local_98);
    if ('\0' < cVar18) {
      lVar12 = 0;
      do {
        dVar2 = (double)(&local_78)[lVar12];
        uVar24 = SUB84(dVar2,0);
        uVar25 = (undefined4)((ulonglong)dVar2 >> 0x20);
        dVar3 = (double)(&local_98)[lVar12];
        if (dVar2 <= dVar3) {
          uVar24 = SUB84(dVar3,0);
          uVar25 = (undefined4)((ulonglong)dVar3 >> 0x20);
        }
        iVar10 = *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
          FUN_147bcda28(param_1 + 3,iVar10);
        }
        puVar13 = (undefined8 *)param_1[0x13];
        if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
          puVar13 = param_1 + 3;
        }
        puVar13[iVar10] = CONCAT44(uVar25,uVar24);
        lVar12 = lVar12 + 1;
      } while (cVar18 != lVar12);
    }
    goto LAB_144b28ff9;
  }
  if ((cVar8 != '\x01') && (cVar9 != '\x01')) {
    switch(uVar21 & 0xff) {
    case 1:
      uVar11 = 9;
      break;
    case 2:
      uVar11 = 10;
      break;
    case 3:
      uVar11 = 0xb;
      break;
    case 4:
      uVar11 = 0xc;
      break;
    default:
      if ((uVar21 & 0xff) == 0x10) {
        uVar11 = 0x15;
      }
      else {
        uVar11 = 0;
      }
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = uVar11;
    FUN_147d0d1b6(param_2,&local_78);
    FUN_147d0d1b6(param_3,&local_98);
    if ('\0' < cVar18) {
      lVar12 = 0;
      do {
        uVar21 = *(uint *)((longlong)&local_98 + lVar12 * 4);
        uVar20 = *(uint *)((longlong)&local_78 + lVar12 * 4);
        if ((int)uVar20 < (int)uVar21) {
          uVar20 = uVar21;
        }
        iVar10 = *(int *)(param_1 + 0x14);
        *(uint *)(param_1 + 0x14) = iVar10 + 1U;
        if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
          FUN_147bcda28(param_1 + 3,iVar10);
        }
        puVar13 = (undefined8 *)param_1[0x13];
        if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
          puVar13 = param_1 + 3;
        }
        puVar13[iVar10] = (ulonglong)uVar20;
        lVar12 = lVar12 + 1;
      } while (cVar18 != lVar12);
    }
    goto LAB_144b28ff9;
  }
  cVar19 = cVar18;
  if (cVar18 == '\x01') {
LAB_144b28f33:
    cVar19 = cVar18;
  }
  else {
    uVar21 = uVar21 & 0xff;
    if (uVar21 < 4) {
      if ((uVar21 != 2) && (cVar19 = '\0', uVar21 == 3)) goto LAB_144b28f33;
    }
    else if ((uVar21 != 4) && (cVar19 = '\0', uVar21 == 0x10)) {
      cVar19 = '\x15';
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  *(char *)(param_1 + 2) = cVar19;
  if (cVar7 == '\x01') {
    pfVar15 = (float *)(param_2 + 0x18);
    if (*(float **)(param_2 + 0x98) != (float *)0x0) {
      pfVar15 = *(float **)(param_2 + 0x98);
    }
    if (cVar8 == '\x01') {
      local_78._0_4_ = *pfVar15;
    }
    else if (cVar8 == '\x03') {
      local_78._0_4_ = (float)(int)*pfVar15;
    }
    else {
      local_78._0_4_ = 0.0;
      if (cVar8 == '\x04') {
        local_78._0_4_ = (float)*(byte *)pfVar15;
      }
    }
    local_78._4_4_ = (float)local_78;
    fStack_70 = (float)local_78;
    fStack_6c = (float)local_78;
  }
  else {
    uVar21 = 4;
    if (cVar7 < '\x04') {
      uVar21 = (int)cVar7;
    }
    if ('\0' < cVar7) {
      lVar16 = param_2 + 0x18;
      if (*(longlong *)(param_2 + 0x98) != 0) {
        lVar16 = *(longlong *)(param_2 + 0x98);
      }
      uVar14 = 0;
      do {
        if (cVar8 == '\x01') {
          fVar23 = *(float *)(lVar16 + uVar14 * 8);
        }
        else if (cVar8 == '\x03') {
          fVar23 = (float)*(int *)(lVar16 + uVar14 * 8);
        }
        else {
          fVar23 = 0.0;
          if (cVar8 == '\x04') {
            fVar23 = (float)*(byte *)(lVar16 + uVar14 * 8);
          }
        }
        *(float *)((longlong)&local_78 + uVar14 * 4) = fVar23;
        uVar14 = uVar14 + 1;
      } while (uVar21 != uVar14);
      if ('\x03' < cVar7) goto LAB_144b28f6f;
    }
    memset((void *)((longlong)&local_78 + lVar12 * 4),0,(ulonglong)(3 - uVar21) * 4 + 4);
  }
LAB_144b28f6f:
  if (cVar6 == '\x01') {
    pfVar15 = (float *)(param_3 + 0x18);
    if (*(float **)(param_3 + 0x98) != (float *)0x0) {
      pfVar15 = *(float **)(param_3 + 0x98);
    }
    if (cVar9 == '\x01') {
      local_98._0_4_ = *pfVar15;
    }
    else if (cVar9 == '\x03') {
      local_98._0_4_ = (float)(int)*pfVar15;
    }
    else {
      local_98._0_4_ = 0.0;
      if (cVar9 == '\x04') {
        local_98._0_4_ = (float)*(byte *)pfVar15;
      }
    }
    local_98._4_4_ = (float)local_98;
    fStack_90 = (float)local_98;
    fStack_8c = (float)local_98;
  }
  else {
    uVar14 = 4;
    if (cVar6 < '\x04') {
      uVar14 = (ulonglong)(uint)(int)cVar6;
    }
    if ('\0' < cVar6) {
      lVar12 = param_3 + 0x18;
      if (*(longlong *)(param_3 + 0x98) != 0) {
        lVar12 = *(longlong *)(param_3 + 0x98);
      }
      uVar17 = 0;
      do {
        if (cVar9 == '\x01') {
          fVar23 = *(float *)(lVar12 + uVar17 * 8);
        }
        else if (cVar9 == '\x03') {
          fVar23 = (float)*(int *)(lVar12 + uVar17 * 8);
        }
        else {
          fVar23 = 0.0;
          if (cVar9 == '\x04') {
            fVar23 = (float)*(byte *)(lVar12 + uVar17 * 8);
          }
        }
        *(float *)((longlong)&local_98 + uVar17 * 4) = fVar23;
        uVar17 = uVar17 + 1;
      } while (uVar14 != uVar17);
      if ('\x03' < cVar6) goto LAB_144b28fa1;
    }
    memset((void *)((longlong)&local_98 + lVar22 * 4),0,(ulonglong)(3 - (int)uVar14) * 4 + 4);
  }
LAB_144b28fa1:
  if ('\0' < cVar18) {
    lVar12 = 0;
    do {
      fVar23 = *(float *)((longlong)&local_78 + lVar12 * 4);
      fVar1 = *(float *)((longlong)&local_98 + lVar12 * 4);
      if (fVar23 <= fVar1) {
        fVar23 = fVar1;
      }
      iVar10 = *(int *)(param_1 + 0x14);
      *(uint *)(param_1 + 0x14) = iVar10 + 1U;
      if (*(uint *)((longlong)param_1 + 0xa4) < iVar10 + 1U) {
        FUN_147bcda28(param_1 + 3,iVar10);
      }
      puVar13 = (undefined8 *)param_1[0x13];
      if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
        puVar13 = param_1 + 3;
      }
      *(float *)(puVar13 + iVar10) = fVar23;
      *(undefined4 *)((longlong)puVar13 + (longlong)iVar10 * 8 + 4) = 0;
      lVar12 = lVar12 + 1;
    } while (cVar18 != lVar12);
  }
LAB_144b28ff9:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 144b293fa FUN_144b293fa body=55 status=ok
// SIG undefined FUN_144b293fa(void)

ulonglong FUN_144b293fa(undefined8 param_1)

{
  float fVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulonglong)param_1 >> 0x20);
  fVar1 = (float)param_1;
  return CONCAT44(~(uVar2 & 0x7fffffff) & uVar2,~-(uint)(ABS(fVar1) < 1e-05) & (uint)fVar1) |
         (ulonglong)
         (*(uint *)(&DAT_14aa816c0 + (ulonglong)(fVar1 < 0.0) * 4) & -(uint)(ABS(fVar1) < 1e-05));
}



// FUNCTION 144b29432 FUN_144b29432 body=250 status=ok
// SIG undefined FUN_144b29432(void)

undefined8
FUN_144b29432(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  
  *param_5 = 0xffffffff;
  puVar4 = &DAT_14c846480;
  puVar5 = param_3;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *param_4 = 0xffffffff;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c))) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar2 = param_1 + 0x230;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x238);
    }
    iVar6 = *(int *)(lVar2 + (ulonglong)
                             (*(int *)(param_1 + 0x240) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar6 != -1) {
      while (lVar2 = *(longlong *)(param_1 + 0x1f8) + (longlong)iVar6 * 0x90,
            *(longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar6 * 0x90) != param_2) {
        iVar6 = *(int *)(lVar2 + 0x80);
        if (iVar6 == -1) {
          return 0;
        }
      }
      if (lVar2 == 0) {
        return 0;
      }
      if ((undefined8 *)(lVar2 + 0x10) == (undefined8 *)0x0) {
        return 0;
      }
      puVar4 = (undefined8 *)(lVar2 + 0x10);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *param_3 = *puVar4;
        puVar4 = puVar4 + 1;
        param_3 = param_3 + 1;
      }
      *param_5 = *(undefined4 *)(lVar2 + 0x78);
      *param_4 = *(undefined4 *)(lVar2 + 0x7c);
      return *(undefined8 *)(lVar2 + 0x70);
    }
  }
  return 0;
}



// FUNCTION 144b295e4 FUN_144b295e4 body=145 status=ok
// SIG undefined FUN_144b295e4(void)

undefined8 FUN_144b295e4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14cb06e38;
  if (((*(longlong *)(param_1 + 0xe50) != 0) && (*DAT_14cb07778 != 0)) &&
     (*(char *)(param_1 + 0xc7c) == '\0')) {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar5 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar6 = 0;
    }
    else if (uVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      uVar5 = CONCAT44(extraout_var,DVar4);
      uVar6 = (ulonglong)(DVar3 != DVar4);
    }
    else {
      uVar6 = 1;
    }
    if (*(int *)(lVar2 + uVar6 * 4) == 0) {
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 144b296ba FUN_144b296ba body=3199 status=ok
// SIG undefined FUN_144b296ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b296ba(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong param_6,longlong *param_7,uint param_8,
                  ulonglong param_9,longlong *param_10)

{
  undefined4 *puVar1;
  double *pdVar2;
  float *pfVar3;
  float *pfVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ushort uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
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
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  int iVar41;
  longlong lVar42;
  longlong lVar43;
  ulonglong uVar44;
  longlong lVar45;
  uint uVar46;
  uint uVar47;
  longlong *plVar48;
  longlong lVar49;
  float *pfVar50;
  undefined8 *puVar51;
  longlong lVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  double dVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  undefined1 auStack_218 [32];
  longlong *local_1f8;
  longlong *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  undefined8 uStack_1a4;
  undefined4 uStack_19c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  longlong *local_f8;
  ulonglong local_f0 [22];
  
  local_f0[2] = DAT_14c707940 ^ (ulonglong)auStack_218;
  plVar48 = (longlong *)(*(longlong *)(*param_7 + (ulonglong)param_8 * 8) + 0x440);
  local_f8 = plVar48;
  local_f0[0] = param_9;
  local_f0[1] = 0;
  if (plVar48 != (longlong *)0x0) {
    lVar43 = param_3[1];
    lVar45 = param_2[1];
    lVar49 = 0;
    do {
      local_1e0 = lVar49;
      if (0 < (int)plVar48[1]) {
        lVar49 = 0;
        do {
          uVar39 = _DAT_14c846288;
          uVar9 = *(ushort *)(*plVar48 + lVar49 * 2);
          uVar46 = (uint)uVar9;
          if ((int)(uint)uVar9 < (int)param_5[1]) {
            uVar47 = (uint)uVar9;
            lVar52 = (ulonglong)uVar9 * 0x40;
            lVar42 = *param_1;
            uVar44 = (ulonglong)uVar47;
            puVar51 = (undefined8 *)(lVar42 + 0x30 + lVar52);
            *puVar51 = _DAT_14c846280;
            puVar51[1] = uVar39;
            uVar39 = _DAT_14c846278;
            puVar51 = (undefined8 *)(lVar42 + 0x20 + lVar52);
            *puVar51 = _DAT_14c846270;
            puVar51[1] = uVar39;
            uVar39 = _DAT_14c846268;
            puVar51 = (undefined8 *)(lVar42 + 0x10 + lVar52);
            *puVar51 = _DAT_14c846260;
            puVar51[1] = uVar39;
            uVar38 = DAT_14c846258._4_4_;
            uVar37 = (undefined4)DAT_14c846258;
            uVar36 = DAT_14c846254;
            puVar1 = (undefined4 *)(lVar42 + lVar52);
            *puVar1 = DAT_14c846250;
            puVar1[1] = uVar36;
            puVar1[2] = uVar37;
            puVar1[3] = uVar38;
            if (param_4 == (longlong *)0x0) {
              if ((int)uVar46 < (int)param_2[1]) {
                if ((int)lVar43 == (int)lVar45) {
                  if ((((int)uVar46 < *(int *)(param_6 + 0x28)) &&
                      (lVar42 = (longlong)*(int *)(*(longlong *)(param_6 + 0x20) + 8 + uVar44 * 0xc)
                      , lVar42 != -1)) && (*(char *)(*param_3 + uVar44) != '\x01')) {
                    lVar52 = *param_1;
                    lVar42 = lVar42 * 0x40;
                    pfVar50 = (float *)(lVar52 + lVar42);
                    pfVar3 = (float *)(lVar52 + 0x10 + lVar42);
                    pfVar4 = (float *)(lVar52 + 0x20 + lVar42);
                    fVar53 = *pfVar4 * 0.0 + *pfVar3 * 0.0 + *pfVar50 * 0.0;
                    fVar54 = pfVar4[1] * 0.0 + pfVar3[1] * 0.0 + pfVar50[1] * 0.0;
                    fVar55 = pfVar4[2] * 0.0 + pfVar3[2] * 0.0 + pfVar50[2] * 0.0;
                    fVar56 = pfVar4[3] * 0.0 + pfVar3[3] * 0.0 + pfVar50[3] * 0.0;
                    pfVar50 = (float *)(lVar52 + 0x30 + lVar42);
                    fVar68 = *pfVar50;
                    fVar69 = pfVar50[1];
                    fVar66 = pfVar50[2];
                    fVar67 = pfVar50[3];
                    fVar59 = fVar68 * 0.0 + fVar53;
                    fVar60 = fVar69 * 0.0 + fVar54;
                    fVar61 = fVar66 * 0.0 + fVar55;
                    fVar62 = fVar67 * 0.0 + fVar56;
                    lVar42 = (ulonglong)uVar9 * 0x40;
                    pfVar50 = (float *)(lVar52 + lVar42);
                    *pfVar50 = fVar59;
                    pfVar50[1] = fVar60;
                    pfVar50[2] = fVar61;
                    pfVar50[3] = fVar62;
                    pfVar50 = (float *)(lVar52 + 0x10 + lVar42);
                    *pfVar50 = fVar59;
                    pfVar50[1] = fVar60;
                    pfVar50[2] = fVar61;
                    pfVar50[3] = fVar62;
                    pfVar50 = (float *)(lVar52 + 0x20 + lVar42);
                    *pfVar50 = fVar59;
                    pfVar50[1] = fVar60;
                    pfVar50[2] = fVar61;
                    pfVar50[3] = fVar62;
                    pfVar50 = (float *)(lVar52 + 0x30 + lVar42);
                    *pfVar50 = fVar53 + fVar68;
                    pfVar50[1] = fVar54 + fVar69;
                    pfVar50[2] = fVar55 + fVar66;
                    pfVar50[3] = fVar56 + fVar67;
                    goto LAB_144b299fc;
                  }
                  lVar42 = *param_2;
                  uVar44 = (ulonglong)(uVar47 * 0x60);
                  dVar14 = *(double *)(lVar42 + uVar44);
                  dVar15 = ((double *)(lVar42 + uVar44))[1];
                  dVar16 = *(double *)(lVar42 + 0x10 + uVar44);
                  dVar10 = dVar15 + dVar15;
                  dVar65 = dVar16 + dVar16;
                  dVar11 = dVar14 * (dVar14 + dVar14);
                  pdVar2 = (double *)(lVar42 + 0x40 + uVar44);
                  dVar17 = *pdVar2;
                  dVar18 = pdVar2[1];
                  dVar19 = *(double *)(lVar42 + 0x50 + uVar44);
                  dVar13 = *(double *)(lVar42 + uVar44) * dVar65;
                  dVar5 = *(double *)(lVar42 + 0x18 + uVar44);
                  dVar12 = dVar5 * (dVar14 + dVar14);
                  dVar6 = *(double *)(lVar42 + 0x20 + uVar44);
                  dVar7 = *(double *)(lVar42 + 0x28 + uVar44);
                  dVar8 = *(double *)(lVar42 + 0x30 + uVar44);
                  lVar42 = *param_1;
                  lVar52 = (ulonglong)uVar9 * 0x40;
                  *(float *)(lVar42 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar15 * dVar10)) * dVar17);
                  *(float *)(lVar42 + 4 + lVar52) =
                       (float)((dVar10 * dVar14 + dVar5 * dVar65) * dVar17);
                  *(float *)(lVar42 + 8 + lVar52) = (float)((dVar13 - dVar10 * dVar5) * dVar17);
                  *(undefined4 *)(lVar42 + 0xc + lVar52) = 0;
                  *(float *)(lVar42 + 0x10 + lVar52) =
                       (float)((dVar10 * dVar14 - dVar5 * dVar65) * dVar18);
                  *(float *)(lVar42 + 0x14 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar11)) * dVar18);
                  *(float *)(lVar42 + 0x18 + lVar52) = (float)((dVar65 * dVar15 + dVar12) * dVar18);
                  *(undefined4 *)(lVar42 + 0x1c + lVar52) = 0;
                  *(float *)(lVar42 + 0x20 + lVar52) = (float)((dVar13 + dVar10 * dVar5) * dVar19);
                  *(float *)(lVar42 + 0x24 + lVar52) = (float)((dVar65 * dVar15 - dVar12) * dVar19);
                  *(float *)(lVar42 + 0x28 + lVar52) =
                       (float)((1.0 - (dVar11 + dVar15 * dVar10)) * dVar19);
                  *(undefined4 *)(lVar42 + 0x2c + lVar52) = 0;
                  *(float *)(lVar42 + 0x30 + lVar52) = (float)dVar6;
                  *(float *)(lVar42 + 0x34 + lVar52) = (float)dVar7;
                  *(float *)(lVar42 + 0x38 + lVar52) = (float)dVar8;
                }
                else {
                  lVar42 = *param_2;
                  uVar44 = (ulonglong)(uVar47 * 0x60);
                  dVar14 = *(double *)(lVar42 + uVar44);
                  dVar15 = ((double *)(lVar42 + uVar44))[1];
                  dVar16 = *(double *)(lVar42 + 0x10 + uVar44);
                  dVar10 = dVar15 + dVar15;
                  dVar65 = dVar16 + dVar16;
                  dVar11 = dVar14 * (dVar14 + dVar14);
                  pdVar2 = (double *)(lVar42 + 0x40 + uVar44);
                  dVar17 = *pdVar2;
                  dVar18 = pdVar2[1];
                  dVar19 = *(double *)(lVar42 + 0x50 + uVar44);
                  dVar12 = *(double *)(lVar42 + uVar44) * dVar65;
                  dVar5 = *(double *)(lVar42 + 0x18 + uVar44);
                  dVar13 = dVar5 * (dVar14 + dVar14);
                  dVar6 = *(double *)(lVar42 + 0x20 + uVar44);
                  dVar7 = *(double *)(lVar42 + 0x28 + uVar44);
                  dVar8 = *(double *)(lVar42 + 0x30 + uVar44);
                  lVar42 = *param_1;
                  lVar52 = (ulonglong)uVar9 * 0x40;
                  *(float *)(lVar42 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar15 * dVar10)) * dVar17);
                  *(float *)(lVar42 + 4 + lVar52) =
                       (float)((dVar10 * dVar14 + dVar5 * dVar65) * dVar17);
                  *(float *)(lVar42 + 8 + lVar52) = (float)((dVar12 - dVar10 * dVar5) * dVar17);
                  *(undefined4 *)(lVar42 + 0xc + lVar52) = 0;
                  *(float *)(lVar42 + 0x10 + lVar52) =
                       (float)((dVar10 * dVar14 - dVar5 * dVar65) * dVar18);
                  *(float *)(lVar42 + 0x14 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar11)) * dVar18);
                  *(float *)(lVar42 + 0x18 + lVar52) = (float)((dVar65 * dVar15 + dVar13) * dVar18);
                  *(undefined4 *)(lVar42 + 0x1c + lVar52) = 0;
                  *(float *)(lVar42 + 0x20 + lVar52) = (float)((dVar12 + dVar10 * dVar5) * dVar19);
                  *(float *)(lVar42 + 0x24 + lVar52) = (float)((dVar65 * dVar15 - dVar13) * dVar19);
                  *(float *)(lVar42 + 0x28 + lVar52) =
                       (float)((1.0 - (dVar11 + dVar15 * dVar10)) * dVar19);
                  *(undefined4 *)(lVar42 + 0x2c + lVar52) = 0;
                  *(float *)(lVar42 + 0x30 + lVar52) = (float)dVar6;
                  *(float *)(lVar42 + 0x34 + lVar52) = (float)dVar7;
                  *(float *)(lVar42 + 0x38 + lVar52) = (float)dVar8;
                }
                *(undefined4 *)(lVar42 + 0x3c + lVar52) = 0x3f800000;
              }
            }
            else {
              iVar41 = *(int *)(*param_4 + uVar44 * 4);
              lVar42 = (longlong)iVar41;
              local_1f8 = param_3;
              local_1f0 = param_4;
              if ((lVar42 < 0) || ((int)param_2[1] <= iVar41)) {
                iVar41 = -1;
                if ((int)uVar46 < *(int *)(param_6 + 0x28)) {
                  iVar41 = *(int *)(*(longlong *)(param_6 + 0x20) + 8 + uVar44 * 0xc);
                }
                lVar42 = *(longlong *)(param_6 + 0x30);
                uVar44 = (ulonglong)(uVar47 * 0x60);
                dVar12 = *(double *)(lVar42 + uVar44);
                dVar13 = ((double *)(lVar42 + uVar44))[1];
                dVar14 = *(double *)(lVar42 + 0x10 + uVar44);
                pdVar2 = (double *)(lVar42 + 0x40 + uVar44);
                dVar15 = *pdVar2;
                dVar16 = pdVar2[1];
                dVar17 = *(double *)(lVar42 + 0x50 + uVar44);
                dVar6 = dVar13 + dVar13;
                dVar7 = dVar14 + dVar14;
                dVar8 = dVar12 * (dVar12 + dVar12);
                pdVar2 = (double *)(lVar42 + 0x18 + uVar44);
                dVar5 = *pdVar2;
                dVar10 = dVar7 * dVar5;
                dVar11 = (dVar12 + dVar12) * *pdVar2;
                dVar5 = dVar6 * dVar5;
                fVar68 = (float)((1.0 - (dVar14 * dVar7 + dVar13 * dVar6)) * dVar15);
                fVar60 = (float)*(double *)(lVar42 + 0x20 + uVar44);
                fVar61 = (float)*(double *)(lVar42 + 0x28 + uVar44);
                fVar62 = (float)*(double *)(lVar42 + 0x30 + uVar44);
                fVar69 = (float)((dVar6 * dVar12 + dVar10) * dVar15);
                fVar66 = (float)((dVar7 * dVar12 - dVar5) * dVar15);
                local_1d8 = CONCAT44(fVar69,fVar68);
                uStack_1d0 = (ulonglong)(uint)fVar66;
                uVar44 = uStack_1d0;
                fVar67 = (float)((dVar6 * dVar12 - dVar10) * dVar16);
                fVar53 = (float)((1.0 - (dVar14 * dVar7 + dVar8)) * dVar16);
                local_1c8 = CONCAT44(fVar53,fVar67);
                fVar54 = (float)((dVar7 * dVar13 + dVar11) * dVar16);
                uStack_1c0 = (ulonglong)(uint)fVar54;
                uVar40 = uStack_1c0;
                fVar55 = (float)((dVar5 + dVar7 * dVar12) * dVar17);
                fVar56 = (float)((dVar7 * dVar13 - dVar11) * dVar17);
                fVar59 = (float)((1.0 - (dVar8 + dVar13 * dVar6)) * dVar17);
                local_1b8 = CONCAT44(fVar56,fVar55);
                uStack_1ac = 0;
                uStack_1a4 = CONCAT44(fVar62,fVar61);
                uStack_19c = 0x3f800000;
                fStack_1b0 = fVar59;
                fStack_1a8 = fVar60;
                if (iVar41 != -1) {
                  local_1e8 = *param_1;
                  lVar42 = (longlong)iVar41 * 0x40 + local_1e8;
                  goto LAB_144b2a08c;
                }
                lVar42 = *param_1;
                uStack_1d0._4_4_ = 0.0;
                uStack_1c0._4_4_ = 0.0;
                fVar63 = 0.0;
                fVar64 = 1.0;
                fVar57 = uStack_1d0._4_4_;
                fVar58 = uStack_1c0._4_4_;
                uStack_1d0 = uVar44;
                uStack_1c0 = uVar40;
              }
              else {
                if (((*(int *)(param_6 + 0x28) <= (int)uVar47) ||
                    (lVar52 = (longlong)*(int *)(*(longlong *)(param_6 + 0x20) + 8 + uVar44 * 0xc),
                    lVar52 == -1)) || (*(char *)(*param_3 + lVar42) == '\x01')) {
                  lVar52 = *param_2;
                  lVar42 = lVar42 * 0x60;
                  dVar14 = *(double *)(lVar52 + lVar42);
                  dVar15 = ((double *)(lVar52 + lVar42))[1];
                  dVar16 = *(double *)(lVar52 + 0x10 + lVar42);
                  dVar10 = dVar15 + dVar15;
                  dVar65 = dVar16 + dVar16;
                  dVar11 = dVar14 * (dVar14 + dVar14);
                  pdVar2 = (double *)(lVar52 + 0x40 + lVar42);
                  dVar17 = *pdVar2;
                  dVar18 = pdVar2[1];
                  dVar19 = *(double *)(lVar52 + 0x50 + lVar42);
                  dVar12 = *(double *)(lVar52 + lVar42) * dVar65;
                  dVar5 = *(double *)(lVar52 + 0x18 + lVar42);
                  dVar13 = dVar5 * (dVar14 + dVar14);
                  dVar6 = *(double *)(lVar52 + 0x20 + lVar42);
                  dVar7 = *(double *)(lVar52 + 0x28 + lVar42);
                  dVar8 = *(double *)(lVar52 + 0x30 + lVar42);
                  lVar42 = *param_1;
                  lVar52 = (ulonglong)uVar9 * 0x40;
                  *(float *)(lVar42 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar15 * dVar10)) * dVar17);
                  *(float *)(lVar42 + 4 + lVar52) =
                       (float)((dVar10 * dVar14 + dVar5 * dVar65) * dVar17);
                  *(float *)(lVar42 + 8 + lVar52) = (float)((dVar12 - dVar10 * dVar5) * dVar17);
                  *(undefined4 *)(lVar42 + 0xc + lVar52) = 0;
                  *(float *)(lVar42 + 0x10 + lVar52) =
                       (float)((dVar10 * dVar14 - dVar5 * dVar65) * dVar18);
                  *(float *)(lVar42 + 0x14 + lVar52) =
                       (float)((1.0 - (dVar16 * dVar65 + dVar11)) * dVar18);
                  *(float *)(lVar42 + 0x18 + lVar52) = (float)((dVar65 * dVar15 + dVar13) * dVar18);
                  *(undefined4 *)(lVar42 + 0x1c + lVar52) = 0;
                  *(float *)(lVar42 + 0x20 + lVar52) = (float)((dVar12 + dVar10 * dVar5) * dVar19);
                  *(float *)(lVar42 + 0x24 + lVar52) = (float)((dVar65 * dVar15 - dVar13) * dVar19);
                  *(float *)(lVar42 + 0x28 + lVar52) =
                       (float)((1.0 - (dVar11 + dVar15 * dVar10)) * dVar19);
                  *(undefined4 *)(lVar42 + 0x2c + lVar52) = 0;
                  *(float *)(lVar42 + 0x30 + lVar52) = (float)dVar6;
                  *(float *)(lVar42 + 0x34 + lVar52) = (float)dVar7;
                  *(float *)(lVar42 + 0x38 + lVar52) = (float)dVar8;
                  *(undefined4 *)(lVar42 + 0x3c + lVar52) = 0x3f800000;
                  goto LAB_144b299fc;
                }
                local_1e8 = *param_1;
                lVar42 = lVar52 * 0x40 + local_1e8;
                fStack_1a8 = 0.0;
                uStack_1a4 = 0;
                local_1b8 = 0;
                fStack_1b0 = 0.0;
                local_1c8 = 0;
                uStack_1c0 = 0;
                local_1d8 = 0;
                uStack_1d0 = 0;
LAB_144b2a08c:
                uStack_1ac = 0;
                uStack_19c = 0x3f800000;
                FUN_144afeb32(&local_158,&local_1d8,lVar42);
                lVar42 = local_1e8;
                fVar68 = local_158;
                fVar69 = fStack_154;
                fVar66 = fStack_150;
                fVar57 = fStack_14c;
                fVar67 = local_148;
                fVar53 = fStack_144;
                fVar54 = fStack_140;
                fVar58 = fStack_13c;
                fVar55 = local_138;
                fVar56 = fStack_134;
                fVar59 = fStack_130;
                fVar63 = fStack_12c;
                fVar60 = local_128;
                fVar61 = fStack_124;
                fVar62 = fStack_120;
                fVar64 = fStack_11c;
              }
              lVar52 = (ulonglong)uVar9 * 0x40;
              pfVar50 = (float *)(lVar42 + 0x30 + lVar52);
              *pfVar50 = fVar60;
              pfVar50[1] = fVar61;
              pfVar50[2] = fVar62;
              pfVar50[3] = fVar64;
              pfVar50 = (float *)(lVar42 + 0x20 + lVar52);
              *pfVar50 = fVar55;
              pfVar50[1] = fVar56;
              pfVar50[2] = fVar59;
              pfVar50[3] = fVar63;
              pfVar50 = (float *)(lVar42 + 0x10 + lVar52);
              *pfVar50 = fVar67;
              pfVar50[1] = fVar53;
              pfVar50[2] = fVar54;
              pfVar50[3] = fVar58;
              pfVar50 = (float *)(lVar42 + lVar52);
              *pfVar50 = fVar68;
              pfVar50[1] = fVar69;
              pfVar50[2] = fVar66;
              pfVar50[3] = fVar57;
              param_3 = local_1f8;
              param_4 = local_1f0;
            }
          }
LAB_144b299fc:
          lVar49 = lVar49 + 1;
        } while (lVar49 < (int)plVar48[1]);
      }
      plVar48 = (longlong *)local_f0[local_1e0];
      lVar49 = local_1e0 + 1;
    } while (plVar48 != (longlong *)0x0);
  }
  iVar41 = (int)param_1[1];
  if (param_10 != (longlong *)0x0 && param_4 != (longlong *)0x0) {
    FUN_1407a57f6(param_10,iVar41,1);
    if ((int)param_1[1] < 1) goto LAB_144b29bd6;
    lVar49 = 0;
    lVar45 = 0;
    lVar43 = 0;
    do {
      FUN_144b10ee8(&local_1d8,*param_1 + lVar49);
      FUN_1448ac920(&local_158,&local_1d8);
      pfVar50 = &local_158;
      puVar51 = (undefined8 *)(*param_10 + lVar45);
      for (lVar42 = 0xc; lVar42 != 0; lVar42 = lVar42 + -1) {
        *puVar51 = *(undefined8 *)pfVar50;
        pfVar50 = pfVar50 + 2;
        puVar51 = puVar51 + 1;
      }
      lVar43 = lVar43 + 1;
      iVar41 = (int)param_1[1];
      lVar45 = lVar45 + 0x60;
      lVar49 = lVar49 + 0x40;
    } while (lVar43 < iVar41);
  }
  if (0 < iVar41) {
    lVar43 = 0x30;
    lVar45 = 0;
    do {
      lVar49 = *param_5;
      lVar42 = *param_1;
      pfVar50 = (float *)(lVar49 + -0x30 + lVar43);
      fVar68 = *pfVar50;
      fVar69 = pfVar50[1];
      fVar66 = pfVar50[2];
      fVar67 = pfVar50[3];
      pfVar50 = (float *)(lVar49 + -0x20 + lVar43);
      fVar53 = *pfVar50;
      fVar54 = pfVar50[1];
      fVar55 = pfVar50[2];
      fVar56 = pfVar50[3];
      pfVar50 = (float *)(lVar49 + -0x10 + lVar43);
      fVar59 = *pfVar50;
      fVar60 = pfVar50[1];
      fVar61 = pfVar50[2];
      fVar62 = pfVar50[3];
      pfVar50 = (float *)(lVar49 + lVar43);
      fVar63 = *pfVar50;
      fVar64 = pfVar50[1];
      fVar57 = pfVar50[2];
      fVar58 = pfVar50[3];
      pfVar50 = (float *)(lVar42 + -0x30 + lVar43);
      fVar20 = *pfVar50;
      fVar21 = pfVar50[1];
      fVar22 = pfVar50[2];
      fVar23 = pfVar50[3];
      pfVar50 = (float *)(lVar42 + -0x20 + lVar43);
      fVar24 = *pfVar50;
      fVar25 = pfVar50[1];
      fVar26 = pfVar50[2];
      fVar27 = pfVar50[3];
      pfVar50 = (float *)(lVar42 + -0x10 + lVar43);
      fVar28 = *pfVar50;
      fVar29 = pfVar50[1];
      fVar30 = pfVar50[2];
      fVar31 = pfVar50[3];
      pfVar50 = (float *)(lVar42 + lVar43);
      fVar32 = *pfVar50;
      fVar33 = pfVar50[1];
      fVar34 = pfVar50[2];
      fVar35 = pfVar50[3];
      pfVar50 = (float *)(lVar42 + -0x30 + lVar43);
      *pfVar50 = fVar67 * fVar32 + fVar66 * fVar28 + fVar69 * fVar24 + fVar68 * fVar20;
      pfVar50[1] = fVar67 * fVar33 + fVar66 * fVar29 + fVar69 * fVar25 + fVar68 * fVar21;
      pfVar50[2] = fVar67 * fVar34 + fVar66 * fVar30 + fVar69 * fVar26 + fVar68 * fVar22;
      pfVar50[3] = fVar67 * fVar35 + fVar66 * fVar31 + fVar69 * fVar27 + fVar68 * fVar23;
      pfVar50 = (float *)(lVar42 + -0x20 + lVar43);
      *pfVar50 = fVar56 * fVar32 + fVar55 * fVar28 + fVar54 * fVar24 + fVar53 * fVar20;
      pfVar50[1] = fVar56 * fVar33 + fVar55 * fVar29 + fVar54 * fVar25 + fVar53 * fVar21;
      pfVar50[2] = fVar56 * fVar34 + fVar55 * fVar30 + fVar54 * fVar26 + fVar53 * fVar22;
      pfVar50[3] = fVar56 * fVar35 + fVar55 * fVar31 + fVar54 * fVar27 + fVar53 * fVar23;
      pfVar50 = (float *)(lVar42 + -0x10 + lVar43);
      *pfVar50 = fVar62 * fVar32 + fVar61 * fVar28 + fVar60 * fVar24 + fVar59 * fVar20;
      pfVar50[1] = fVar62 * fVar33 + fVar61 * fVar29 + fVar60 * fVar25 + fVar59 * fVar21;
      pfVar50[2] = fVar62 * fVar34 + fVar61 * fVar30 + fVar60 * fVar26 + fVar59 * fVar22;
      pfVar50[3] = fVar62 * fVar35 + fVar61 * fVar31 + fVar60 * fVar27 + fVar59 * fVar23;
      pfVar50 = (float *)(lVar42 + lVar43);
      *pfVar50 = fVar58 * fVar32 + fVar57 * fVar28 + fVar64 * fVar24 + fVar63 * fVar20;
      pfVar50[1] = fVar58 * fVar33 + fVar57 * fVar29 + fVar64 * fVar25 + fVar63 * fVar21;
      pfVar50[2] = fVar58 * fVar34 + fVar57 * fVar30 + fVar64 * fVar26 + fVar63 * fVar22;
      pfVar50[3] = fVar58 * fVar35 + fVar57 * fVar31 + fVar64 * fVar27 + fVar63 * fVar23;
      lVar45 = lVar45 + 1;
      lVar43 = lVar43 + 0x40;
    } while (lVar45 < (int)param_1[1]);
  }
LAB_144b29bd6:
  if ((local_f0[2] ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2a33a FUN_144b2a33a body=35 status=ok
// SIG undefined FUN_144b2a33a(void)

void FUN_144b2a33a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x240) != 0) {
    puVar2 = (undefined8 *)(*(longlong *)(param_1 + 0x240) + 0x260);
    for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}



// FUNCTION 144b2a35e FUN_144b2a35e body=978 status=ok
// SIG undefined FUN_144b2a35e(void)

void FUN_144b2a35e(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  
  lVar18 = *(longlong *)(param_1 + 0x240);
  if ((lVar18 != 0) && (*(int *)(lVar18 + 0x1bc) < *(int *)(lVar18 + 400))) {
    iVar21 = *(int *)(lVar18 + 0x50);
    lVar4 = *(longlong *)(param_1 + 0x230);
    lVar5 = *(longlong *)(**(longlong **)(param_1 + 0x40) + (longlong)iVar21 * 8);
    lVar22 = (longlong)*(int *)(lVar5 + 0x18);
    puVar19 = (undefined8 *)(lVar18 + 0x1e0);
    for (lVar15 = 0x10; lVar15 != 0; lVar15 = lVar15 + -1) {
      *puVar19 = *param_2;
      param_2 = param_2 + 1;
      puVar19 = puVar19 + 1;
    }
    if (0 < lVar22) {
      lVar4 = lVar4 + (longlong)iVar21 * 0xa0;
      lVar18 = 0;
      do {
        if (lVar18 < *(int *)(lVar4 + 0x20)) {
          plVar14 = *(longlong **)(*(longlong *)(lVar4 + 0x18) + lVar18 * 8);
          pcVar6 = *(code **)(*plVar14 + 0x68);
          if (pcVar6 != (code *)&LAB_144b240c4) {
            if (pcVar6 == (code *)&LAB_143519c1c) {
              plVar14 = plVar14 + -0x1c;
            }
            else {
              plVar14 = (longlong *)(*pcVar6)(plVar14);
            }
            if ((plVar14 != (longlong *)0x0) &&
               (lVar15 = *(longlong *)(param_1 + 0x240),
               *(int *)(lVar15 + 400) != *(int *)(lVar15 + 0x1bc))) {
              uVar16 = (uint)(short)(*(short *)(param_1 + 0x128) +
                                    *(short *)(*(longlong *)(lVar5 + 0x10) + 0x50 + lVar18 * 0xf8));
              lVar20 = lVar15 + 0x1c0;
              if (*(longlong *)(lVar15 + 0x1c8) != 0) {
                lVar20 = *(longlong *)(lVar15 + 0x1c8);
              }
              iVar21 = *(int *)(lVar20 + (ulonglong)(*(int *)(lVar15 + 0x1d0) - 1U & uVar16) * 4);
              if (iVar21 != -1) {
                do {
                  lVar20 = *(longlong *)(lVar15 + 0x188) + (longlong)iVar21 * 0x110;
                  if (*(uint *)(*(longlong *)(lVar15 + 0x188) + (longlong)iVar21 * 0x110) == uVar16)
                  {
                    if ((lVar20 != 0) && (lVar20 != -0x10)) {
                      if ((char)plVar14[0x1a] == '\x01') {
                        uVar17 = (ulonglong)*(uint *)((longlong)plVar14 + 0xd4);
                      }
                      else {
                        uVar17 = 0;
                      }
                      dVar8 = *(double *)(lVar20 + 0x90);
                      dVar9 = *(double *)(lVar20 + 0x98);
                      dVar10 = *(double *)(lVar20 + 0xa0);
                      dVar11 = *(double *)(lVar20 + 0xd0);
                      dVar12 = *(double *)(lVar20 + 0xd8);
                      dVar13 = *(double *)(lVar20 + 0xe0);
                      dVar24 = dVar9 + dVar9;
                      dVar25 = dVar10 + dVar10;
                      dVar7 = dVar8 * (dVar8 + dVar8);
                      dVar23 = *(double *)(lVar20 + 0xa8);
                      dVar26 = dVar25 * dVar23;
                      dVar27 = (dVar8 + dVar8) * *(double *)(lVar20 + 0xa8);
                      dVar23 = dVar24 * dVar23;
                      dVar1 = *(double *)(lVar20 + 0xb0);
                      dVar2 = *(double *)(lVar20 + 0xb8);
                      dVar3 = *(double *)(lVar20 + 0xc0);
                      lVar15 = uVar17 * 0x40;
                      *(float *)(plVar14 + uVar17 * 8 + 10) =
                           (float)((1.0 - (dVar10 * dVar25 + dVar9 * dVar24)) * dVar11);
                      *(float *)((longlong)plVar14 + lVar15 + 0x54) =
                           (float)((dVar24 * dVar8 + dVar26) * dVar11);
                      *(float *)(plVar14 + uVar17 * 8 + 0xb) =
                           (float)((dVar25 * dVar8 - dVar23) * dVar11);
                      *(undefined4 *)((longlong)plVar14 + lVar15 + 0x5c) = 0;
                      *(float *)(plVar14 + uVar17 * 8 + 0xc) =
                           (float)((dVar24 * dVar8 - dVar26) * dVar12);
                      *(float *)((longlong)plVar14 + lVar15 + 100) =
                           (float)((1.0 - (dVar10 * dVar25 + dVar7)) * dVar12);
                      *(float *)(plVar14 + uVar17 * 8 + 0xd) =
                           (float)((dVar25 * dVar9 + dVar27) * dVar12);
                      *(undefined4 *)((longlong)plVar14 + lVar15 + 0x6c) = 0;
                      *(float *)(plVar14 + uVar17 * 8 + 0xe) =
                           (float)((dVar23 + dVar25 * dVar8) * dVar13);
                      *(float *)((longlong)plVar14 + lVar15 + 0x74) =
                           (float)((dVar25 * dVar9 - dVar27) * dVar13);
                      *(float *)(plVar14 + uVar17 * 8 + 0xf) =
                           (float)((1.0 - (dVar7 + dVar9 * dVar24)) * dVar13);
                      *(undefined4 *)((longlong)plVar14 + lVar15 + 0x7c) = 0;
                      *(float *)(plVar14 + uVar17 * 8 + 0x10) = (float)dVar1;
                      *(float *)((longlong)plVar14 + lVar15 + 0x84) = (float)dVar2;
                      *(float *)(plVar14 + uVar17 * 8 + 0x11) = (float)dVar3;
                      *(undefined4 *)((longlong)plVar14 + lVar15 + 0x8c) = 0x3f800000;
                    }
                    break;
                  }
                  iVar21 = *(int *)(lVar20 + 0x100);
                } while (iVar21 != -1);
              }
            }
          }
        }
        lVar18 = lVar18 + 1;
      } while (lVar18 != lVar22);
    }
  }
  return;
}



// FUNCTION 144b2a730 FUN_144b2a730 body=805 status=ok
// SIG undefined FUN_144b2a730(void)

undefined8 FUN_144b2a730(longlong *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong *puVar11;
  int iVar12;
  ulonglong *puVar13;
  undefined1 auStack_168 [44];
  int local_13c;
  longlong local_138;
  longlong local_130;
  ulonglong local_128 [12];
  ulonglong local_c8 [17];
  
  local_c8[0x10] = DAT_14c707940 ^ (ulonglong)auStack_168;
  puVar11 = &DAT_14c846480;
  puVar13 = local_c8;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  *param_2 = 0xffffffff;
  puVar1 = param_2 + 2;
  if (*(longlong *)(param_2 + 2) != 0) {
    FUN_1400020a8();
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  puVar11 = local_c8;
  puVar13 = (ulonglong *)(param_2 + 8);
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar13 = puVar13 + 1;
  }
  if ((param_1[0x48] != 0) && (*(char *)(param_1[0x48] + 0x2e4) != '\0')) {
    uVar5 = (**(code **)(*param_1 + 0x90))(param_1);
    plVar4 = (longlong *)param_1[8];
    if ((-1 < (int)uVar5 && plVar4 != (longlong *)0x0) && ((int)uVar5 < (int)plVar4[1])) {
      local_130 = *(longlong *)(*plVar4 + (ulonglong)uVar5 * 8);
      local_13c = *(int *)(local_130 + 0x18);
      local_138 = (ulonglong)uVar5 * 0xa0;
      if (*(int *)(param_1[0x46] + 0x30 + local_138) == local_13c) {
        if (local_13c != 0) {
          iVar12 = 0;
          do {
            lVar10 = FUN_147d236b6(puVar1);
            if (param_1[9] == 0) {
              if (*(longlong *)(param_1[0x46] + 0x58 + local_138) == 0) {
                param_2[4] = 0;
                if ((int)param_2[5] < 0) {
                  FUN_147d2e742(puVar1);
                }
                goto LAB_144b2a7b9;
              }
              lVar8 = param_1[0x46] + local_138;
              lVar7 = *(longlong *)(lVar8 + 0x78);
              *(longlong *)(lVar10 + 0x18) = lVar7;
              lVar8 = *(longlong *)(lVar8 + 0x80);
              if (lVar8 == 0) {
                lVar8 = lVar7;
              }
              *(longlong *)(lVar10 + 0x20) = lVar8;
            }
            else {
              lVar7 = FUN_147adbc58(param_1[9],iVar12);
              if (lVar7 == 0) goto LAB_144b2a7b9;
              lVar8 = FUN_147adbc78(param_1[9],iVar12);
              if (lVar8 == 0) {
                lVar8 = lVar7;
              }
              *(undefined8 *)(lVar10 + 0x18) = *(undefined8 *)(lVar7 + 0x10);
              *(undefined8 *)(lVar10 + 0x20) = *(undefined8 *)(lVar8 + 0x10);
              lVar7 = FUN_147adbc98(param_1[9],iVar12);
              if ((lVar7 == 0) || (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 == 0)) {
                *(undefined8 *)(lVar10 + 0x28) = 0;
              }
              else {
                LOCK();
                *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
                UNLOCK();
                *(longlong *)(lVar10 + 0x28) = lVar7;
                LOCK();
                puVar2 = (uint *)(lVar7 + 8);
                uVar3 = *puVar2;
                *puVar2 = *puVar2 - 1;
                UNLOCK();
                if ((uVar3 & 0x3fffffff) == 1) {
                  FUN_144a54812();
                }
              }
            }
            lVar7 = local_130;
            *(undefined8 *)(lVar10 + 0x38) = *(undefined8 *)(*(longlong *)(local_130 + 0x28) + 0x18)
            ;
            uVar6 = (**(code **)(**(longlong **)(local_130 + 0x28) + 0x50))();
            *(undefined4 *)(lVar10 + 0x5c) = uVar6;
            *(undefined4 *)(lVar10 + 0x58) = *(undefined4 *)(lVar7 + 0xec);
            *(undefined8 *)(lVar10 + 0x30) = *(undefined8 *)(lVar7 + 0x88);
            *(undefined4 *)(lVar10 + 0x40) = 0;
            *(undefined4 *)(lVar10 + 0x44) = *(undefined4 *)(lVar7 + 0xa8);
            lVar7 = *(longlong *)(lVar7 + 0x10);
            lVar8 = (longlong)iVar12 * 0xf8;
            *(uint *)(lVar10 + 100) = uVar5;
            *(int *)(lVar10 + 0x60) = iVar12;
            *(undefined4 *)(lVar10 + 0x48) = *(undefined4 *)(lVar7 + 8 + lVar8);
            *(undefined4 *)(lVar10 + 0x4c) = *(undefined4 *)(lVar7 + 0x48 + lVar8);
            *(undefined4 *)(lVar10 + 0x54) = *(undefined4 *)(lVar7 + 4 + lVar8);
            *(undefined4 *)(lVar10 + 0x50) = *(undefined4 *)(lVar7 + 0x10 + lVar8);
            iVar12 = iVar12 + 1;
          } while (local_13c != iVar12);
        }
        *param_2 = uVar5;
        if (param_1[0x48] == 0) {
          local_c8[0xe] = 0;
          local_c8[0xf] = 0;
          local_c8[0xc] = 0;
          local_c8[0xd] = 0;
          local_c8[10] = 0;
          local_c8[0xb] = 0;
          local_c8[8] = 0;
          local_c8[9] = 0;
          local_c8[6] = 0;
          local_c8[7] = 0;
          local_c8[4] = 0;
          local_c8[5] = 0;
          local_c8[2] = 0;
          local_c8[3] = 0;
          local_c8[0] = 0;
          local_c8[1] = 0;
        }
        else {
          puVar11 = (ulonglong *)(param_1[0x48] + 0x260);
          puVar13 = local_c8;
          for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
            *puVar13 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 1;
          }
        }
        FUN_1448ac920(local_128,local_c8);
        puVar11 = local_128;
        puVar13 = (ulonglong *)(param_2 + 8);
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        uVar9 = 1;
        goto LAB_144b2a7bb;
      }
    }
  }
LAB_144b2a7b9:
  uVar9 = 0;
LAB_144b2a7bb:
  if ((local_c8[0x10] ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b2aa56 FUN_144b2aa56 body=130 status=ok
// SIG undefined FUN_144b2aa56(void)

bool FUN_144b2aa56(longlong *param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x90) == (code *)&LAB_144b2aad8) {
    if (param_1[0x48] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1[0x48] + 0x50);
    }
  }
  else {
    iVar1 = (**(code **)(lVar3 + 0x90))(param_1);
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0xd0) == (code *)&LAB_147d2a32e) {
    if (param_1[0x48] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[0x48] + 0x54);
    }
  }
  else {
    iVar2 = (**(code **)(lVar3 + 0xd0))(param_1);
  }
  if (iVar1 == iVar2) {
    bVar4 = param_1[9] == 0;
  }
  else {
    bVar4 = true;
  }
  return bVar4;
}



// FUNCTION 144b2ab14 FUN_144b2ab14 body=7 status=ok
// SIG undefined FUN_144b2ab14(void)

undefined4 FUN_144b2ab14(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10c);
}



// FUNCTION 144b2ab1c FUN_144b2ab1c body=53 status=ok
// SIG undefined FUN_144b2ab1c(void)

longlong FUN_144b2ab1c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (0 < (longlong)*(int *)(param_1 + 0x1b8))) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar2 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == param_2)) {
        return lVar1;
      }
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x1b8) != lVar2);
  }
  return 0;
}



// FUNCTION 144b2ab52 FUN_144b2ab52 body=47 status=ok
// SIG undefined FUN_144b2ab52(void)

void FUN_144b2ab52(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_2[6] = *(undefined8 *)(param_1 + 0x230);
  uVar1 = *(undefined8 *)(param_1 + 0x200);
  uVar2 = *(undefined8 *)(param_1 + 0x208);
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  uVar4 = *(undefined8 *)(param_1 + 0x218);
  uVar5 = *(undefined8 *)(param_1 + 0x228);
  param_2[4] = *(undefined8 *)(param_1 + 0x220);
  param_2[5] = uVar5;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return;
}



// FUNCTION 144b2ab82 FUN_144b2ab82 body=37 status=ok
// SIG undefined FUN_144b2ab82(void)

undefined8 FUN_144b2ab82(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0x160))) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x158) + (ulonglong)param_2 * 0x30);
  }
  return 0;
}



// FUNCTION 144b2aba8 FUN_144b2aba8 body=78 status=ok
// SIG undefined FUN_144b2aba8(void)

ulonglong FUN_144b2aba8(longlong *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  iVar1 = (int)param_1[1];
  if (0 < iVar1) {
    uVar2 = iVar1 - 1U;
    if ((int)param_2 < (int)(iVar1 - 1U)) {
      uVar2 = param_2;
    }
    uVar3 = 0;
    if (0 < (int)uVar2) {
      uVar3 = (ulonglong)uVar2;
    }
    plVar4 = (longlong *)(uVar3 * 8 + *param_1);
    do {
      if ((*(int *)(*plVar4 + 0x10c) != 0) && (*(int *)(*plVar4 + 100) != 0)) {
        return uVar3;
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      plVar4 = plVar4 + 1;
    } while ((int)uVar2 < iVar1);
  }
  return 0xffffffff;
}



// FUNCTION 144b2abf6 FUN_144b2abf6 body=8 status=ok
// SIG undefined FUN_144b2abf6(void)

undefined8 FUN_144b2abf6(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 144b2abfe FUN_144b2abfe body=8 status=ok
// SIG undefined FUN_144b2abfe(void)

undefined8 FUN_144b2abfe(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



// FUNCTION 144b2ac06 FUN_144b2ac06 body=84 status=ok
// SIG undefined FUN_144b2ac06(void)

ulonglong FUN_144b2ac06(longlong param_1,char param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  
  if ((DAT_14cb0d2b0 != 0) && (*(char *)(DAT_14cb0d2b0 + 0xd58) == '\x01')) {
    if (param_2 == '\0') {
      uVar2 = 0;
      if (DAT_14c760db4 != 1) {
        uVar2 = DAT_14c761b9c;
      }
      if (DAT_14c761de0 == 0) {
        uVar2 = DAT_14c761b9c;
      }
      uVar1 = FUN_144b1da20(param_1 + 0xe8,uVar2);
      return uVar1;
    }
    uVar1 = FUN_147d15c44(param_1 + 0xe8);
    return uVar1;
  }
  return (ulonglong)*(uint *)(param_1 + 0x150);
}



// FUNCTION 144b2ac5a FUN_144b2ac5a body=47 status=ok
// SIG undefined FUN_144b2ac5a(void)

longlong FUN_144b2ac5a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 144b2acae FUN_144b2acae body=11 status=ok
// SIG undefined FUN_144b2acae(void)

bool FUN_144b2acae(longlong param_1)

{
  return *(int *)(param_1 + 0x1dd0) != 0;
}



// FUNCTION 144b2acba FUN_144b2acba body=11 status=ok
// SIG undefined FUN_144b2acba(void)

bool FUN_144b2acba(longlong param_1)

{
  return *(uint *)(param_1 + 0x1dd0) < 2;
}



// FUNCTION 144b2acc6 FUN_144b2acc6 body=11 status=ok
// SIG undefined FUN_144b2acc6(void)

bool FUN_144b2acc6(longlong param_1)

{
  return *(int *)(param_1 + 0x1dd0) == 2;
}



// FUNCTION 144b2acd2 FUN_144b2acd2 body=795 status=ok
// SIG undefined FUN_144b2acd2(void)

void FUN_144b2acd2(longlong param_1,longlong *param_2)

{
  byte bVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  code *pcVar13;
  undefined1 auStack_118 [44];
  undefined4 local_ec;
  longlong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  dVar2 = DAT_14c866ff8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (0 < *(int *)(param_1 + 0x30)) {
    if (param_2 == (longlong *)0x0) {
      bVar1 = *(byte *)(param_1 + 0xc5);
      iVar11 = 0;
      do {
        plVar12 = (longlong *)((longlong)iVar11 * 0xa0 + *(longlong *)(param_1 + 0x28));
        if ((*(longlong *)(param_1 + 0x38) != 0) && (plVar12[4] != 0)) {
          local_e8 = *plVar12;
          local_ec = 0;
          pcVar13 = (code *)plVar12[4];
          plVar10 = plVar12 + 8;
          if ((longlong *)plVar12[6] != (longlong *)0x0) {
            plVar10 = (longlong *)plVar12[6];
          }
          local_a8 = param_1;
          uVar9 = (**(code **)(*plVar10 + 8))();
          (*pcVar13)(uVar9,&local_e8,&local_a8,&local_ec);
          local_e8 = plVar12[4];
          uStack_a0 = plVar12[5];
          local_d8 = (longlong *)plVar12[6];
          uStack_90 = plVar12[7];
          local_88 = plVar12[8];
          uStack_80 = plVar12[9];
          local_78 = plVar12[10];
          uStack_70 = plVar12[0xb];
          lVar7 = local_78;
          lVar8 = uStack_70;
          lVar5 = local_88;
          lVar6 = uStack_80;
          local_98 = local_d8;
          lVar4 = uStack_90;
          local_a8 = local_e8;
          lVar3 = uStack_a0;
          plVar12[10] = CONCAT44(uStack_b4,local_b8);
          plVar12[0xb] = CONCAT44(uStack_ac,uStack_b0);
          plVar12[8] = CONCAT44(uStack_c4,local_c8);
          plVar12[9] = CONCAT44(uStack_bc,uStack_c0);
          plVar12[6] = 0;
          plVar12[7] = CONCAT44(uStack_cc,uStack_d0);
          plVar12[4] = 0;
          plVar12[5] = CONCAT44(uStack_dc,uStack_e0);
          uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
          uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
          local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
          uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
          local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
          uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
          local_b8 = (undefined4)local_78;
          uStack_b4 = local_78._4_4_;
          uStack_b0 = (undefined4)uStack_70;
          uStack_ac = uStack_70._4_4_;
          local_c8 = (undefined4)local_88;
          uStack_c4 = local_88._4_4_;
          uStack_c0 = (undefined4)uStack_80;
          uStack_bc = uStack_80._4_4_;
          uStack_d0 = (undefined4)uStack_90;
          uStack_cc = uStack_90._4_4_;
          uStack_e0 = (undefined4)uStack_a0;
          uStack_dc = uStack_a0._4_4_;
          uStack_a0 = lVar3;
          uStack_90 = lVar4;
          local_88 = lVar5;
          uStack_80 = lVar6;
          local_78 = lVar7;
          uStack_70 = lVar8;
          if (local_e8 != 0) {
            plVar10 = local_d8;
            if (local_d8 == (longlong *)0x0) {
              plVar10 = (longlong *)&local_c8;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
        }
        if (*(char *)((longlong)plVar12 + 0x1d) == '\x01') {
          if ((bool)*(char *)((longlong)plVar12 + 0x1c) != (int)plVar12[3] <= (int)(uint)bVar1)
          goto LAB_144b2af2a;
LAB_144b2aeac:
          local_e8 = *plVar12;
          local_ec = 0;
LAB_144b2aeb8:
          pcVar13 = (code *)plVar12[0xc];
          plVar10 = (longlong *)plVar12[0xe];
          plVar12 = plVar12 + 0x10;
LAB_144b2aece:
          if (plVar10 != (longlong *)0x0) {
            plVar12 = plVar10;
          }
          local_a8 = param_1;
          uVar9 = (**(code **)(*plVar12 + 8))(plVar12);
          (*pcVar13)(uVar9,&local_e8,&local_a8,&local_ec);
          FUN_147d62db6(param_1 + 0x28,iVar11);
          FUN_147d62c96(param_1 + 0x28);
          iVar11 = iVar11 + -1;
        }
        else {
          if (*(byte *)(param_1 + 0xc6) <= bVar1 &&
              *(byte *)(param_1 + 0xc6) != *(byte *)(param_1 + 0xc1)) {
            if (plVar12[4] != 0) {
              local_e8 = *plVar12;
              local_ec = 0;
              pcVar13 = (code *)plVar12[4];
              plVar10 = plVar12 + 8;
              if ((longlong *)plVar12[6] != (longlong *)0x0) {
                plVar10 = (longlong *)plVar12[6];
              }
              local_a8 = param_1;
              uVar9 = (**(code **)(*plVar10 + 8))();
              (*pcVar13)(uVar9,&local_e8,&local_a8,&local_ec);
            }
            goto LAB_144b2aeac;
          }
LAB_144b2af2a:
          if (((double)plVar12[1] <= dVar2 && dVar2 != (double)plVar12[1]) && (plVar12[4] != 0)) {
            local_e8 = *plVar12;
            local_ec = 1;
            pcVar13 = (code *)plVar12[4];
            plVar10 = (longlong *)plVar12[6];
            plVar12 = plVar12 + 8;
            goto LAB_144b2aece;
          }
          if ((double)plVar12[2] <= dVar2 && dVar2 != (double)plVar12[2]) {
            local_e8 = *plVar12;
            local_ec = 1;
            goto LAB_144b2aeb8;
          }
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < *(int *)(param_1 + 0x30));
    }
    else {
      iVar11 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar11 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
        FUN_1457372d6(param_2,iVar11);
      }
      *(longlong *)(*param_2 + (longlong)iVar11 * 8) = param_1;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2afee FUN_144b2afee body=73 status=ok
// SIG undefined FUN_144b2afee(void)

void FUN_144b2afee(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != param_2) {
    *(undefined8 **)(param_1 + 0x10) = param_2;
    if (param_2 != (undefined8 *)0x0) {
      *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + 1;
    }
    if (puVar2 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return;
}



// FUNCTION 144b2b038 FUN_144b2b038 body=81 status=ok
// SIG undefined FUN_144b2b038(void)

void FUN_144b2b038(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 1) == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar3 = (longlong *)*param_1;
  }
  (**(code **)(*plVar3 + 0x58))
            (plVar3,*(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c));
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    param_1[2] = 0;
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000144b2b086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 144b2b08a FUN_144b2b08a body=158 status=ok
// SIG undefined FUN_144b2b08a(void)

void FUN_144b2b08a(longlong *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  if (*(int *)(param_2 + 0x40) != *(int *)(param_2 + 0x6c)) {
    uVar2 = ((uint)(param_3 >> 0x14) & 0xffff ^ (uint)(param_3 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_2 + 0x70;
    if (*(longlong *)(param_2 + 0x78) != 0) {
      lVar3 = *(longlong *)(param_2 + 0x78);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_2 + 0x80) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_3) {
          if (puVar1 == (ulonglong *)0x0) {
            return;
          }
          if (puVar1 + 1 == (ulonglong *)0x0) {
            return;
          }
          *(int *)(param_1 + 1) = (int)puVar1[1];
          return;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 144b2b12c FUN_144b2b12c body=876 status=ok
// SIG undefined FUN_144b2b12c(void)

undefined8 FUN_144b2b12c(longlong param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  puVar1 = (uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = *puVar1;
  lVar8 = 0x118;
  if (((uVar5 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar5 != 2)) {
    if (uVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144b2b16a;
      uVar5 = *puVar1;
    }
    plVar3 = DAT_14c948aa0;
    if (uVar5 != 4) {
      if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
        if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_144b2b46a;
        if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
          cVar4 = (**(code **)(*DAT_14c948aa0 + 0x88))(DAT_14c948aa0);
          goto LAB_144b2b3aa;
        }
        if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
           (DVar6 = GetCurrentThreadId(), DVar6 == *(DWORD *)(plVar3 + 0x50))) goto LAB_144b2b16a;
        if ((DAT_14c86a9f8 != '\x01') || (uVar5 = *puVar1, uVar5 == 2)) {
LAB_144b2b45d:
          if ((int)plVar3[0xbb] != 0) goto LAB_144b2b16a;
          goto LAB_144b2b46a;
        }
        if (uVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 != DVar7) goto LAB_144b2b46a;
          goto LAB_144b2b45d;
        }
      }
      else {
        cVar4 = (*(code *)PTR_FUN_14c758760)();
LAB_144b2b3aa:
        if (cVar4 != '\0') goto LAB_144b2b16a;
LAB_144b2b46a:
        uVar5 = *puVar1;
      }
      if (uVar5 != 8) {
        if (DAT_14c86a9fc == 0) {
          lVar8 = 0x120;
          if (((0x20 < uVar5) || ((0x100010004U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
             (uVar5 != 0x40000010)) {
            return 0xff7fffff;
          }
        }
        else {
          lVar8 = 0x120;
          if (((uVar5 - 0x10 & 0xbfffffef) != 0) && (uVar5 != 0x20)) {
            return 0xff7fffff;
          }
        }
      }
    }
  }
LAB_144b2b16a:
  if (*(longlong *)(param_1 + lVar8) == 0) {
    return 0xff7fffff;
  }
  uVar10 = 0xe0000000;
  uVar11 = 0xc7efffff;
  if ((*(char *)(*(longlong *)(param_1 + 0x128) + 0x18) == '\x01') &&
     (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x128) + 0x10), lVar8 != 0)) {
    uVar2 = *(undefined8 *)(lVar8 + 0x58);
    uVar10 = (undefined4)uVar2;
    uVar11 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  uVar5 = *puVar1;
  lVar8 = 0x118;
  if (((uVar5 != 0x40000002) && (DAT_14c86a9f8 == '\x01')) && (uVar5 != 2)) {
    if (uVar5 == 1) {
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_144b2b1ac;
      uVar5 = *puVar1;
    }
    plVar3 = DAT_14c948aa0;
    if (uVar5 != 4) {
      if ((code *)PTR_FUN_14c758760 == FUN_144955985) {
        if (DAT_14c948aa0 == (longlong *)0x0) goto LAB_144b2b490;
        if (*(code **)(*DAT_14c948aa0 + 0x88) != FUN_141711e26) {
          cVar4 = (**(code **)(*DAT_14c948aa0 + 0x88))(DAT_14c948aa0);
          goto LAB_144b2b3dd;
        }
        if (((*(byte *)((longlong)DAT_14c948aa0 + 0x19) & 1) != 0) &&
           (DVar6 = GetCurrentThreadId(), DVar6 == *(DWORD *)(plVar3 + 0x50))) goto LAB_144b2b1ac;
        if ((DAT_14c86a9f8 != '\x01') || (uVar5 = *puVar1, uVar5 == 2)) {
LAB_144b2b483:
          if ((int)plVar3[0xbb] != 0) goto LAB_144b2b1ac;
          goto LAB_144b2b490;
        }
        if (uVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 != DVar7) goto LAB_144b2b490;
          goto LAB_144b2b483;
        }
      }
      else {
        cVar4 = (*(code *)PTR_FUN_14c758760)();
LAB_144b2b3dd:
        if (cVar4 != '\0') goto LAB_144b2b1ac;
LAB_144b2b490:
        uVar5 = *puVar1;
      }
      if (uVar5 != 8) {
        if (DAT_14c86a9fc == 0) {
          lVar8 = 0x120;
          if (((0x20 < uVar5) || ((0x100010004U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0)) &&
             (uVar5 != 0x40000010)) goto LAB_144b2b37d;
        }
        else {
          lVar8 = 0x120;
          if (((uVar5 - 0x10 & 0xbfffffef) != 0) && (uVar5 != 0x20)) {
LAB_144b2b37d:
            lVar8 = 0;
            goto LAB_144b2b1b0;
          }
        }
      }
    }
  }
LAB_144b2b1ac:
  lVar8 = *(longlong *)(param_1 + lVar8);
LAB_144b2b1b0:
  dVar9 = *(double *)(lVar8 + 0x28);
  if (dVar9 <= (double)CONCAT44(uVar11,uVar10)) {
    dVar9 = (double)CONCAT44(uVar11,uVar10);
  }
  return CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
}



// FUNCTION 144b2b4be FUN_144b2b4be body=100 status=ok
// SIG undefined FUN_144b2b4be(void)

undefined4 FUN_144b2b4be(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x29];
  if (lVar3 == 0) {
    return 0;
  }
  if (*(code **)(*param_1 + 0x330) == (code *)&LAB_14014d366) {
    if (((*(byte *)((longlong)param_1 + 0xfe) & 4) != 0) &&
       (lVar2 = *(longlong *)(lVar3 + 0x28), lVar2 != 0)) {
LAB_144b2b503:
      return *(undefined4 *)(lVar2 + 4);
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x330))(param_1);
    lVar3 = param_1[0x29];
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(lVar3 + 0x28);
      goto LAB_144b2b503;
    }
  }
  return *(undefined4 *)(lVar3 + 0x20);
}



// FUNCTION 144b2b54c FUN_144b2b54c body=324 status=ok
// SIG undefined FUN_144b2b54c(void)

void FUN_144b2b54c(undefined8 *param_1)

{
  int *piVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  longlong *plVar6;
  uint uVar7;
  float fVar8;
  uint uVar9;
  undefined1 auStack_68 [32];
  undefined8 **local_48;
  undefined8 *local_40;
  undefined4 local_34;
  undefined1 local_30;
  undefined4 local_2c;
  code *local_28;
  undefined4 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xbc);
  local_40 = param_1;
  if (*(char *)((longlong)param_1 + 0xc2) == '\x01') {
    local_30 = *(undefined1 *)((longlong)param_1 + 0xc3);
    local_20 = &local_34;
    local_2c = 0;
    local_28 = FUN_143750172;
    local_34 = uVar4;
    (**(code **)(*(longlong *)param_1[0x15] + 0x20))();
  }
  plVar6 = (longlong *)param_1[0x15];
  if (*(char *)((longlong)plVar6 + 0xb) != '\0') {
    uVar3 = *(undefined1 *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_1 + 0x17);
    pbVar5 = (byte *)plVar6[4];
    if ((*pbVar5 & 2) == 0) {
      pbVar5[0x24] = 0;
      pbVar5[0x25] = 0;
      pbVar5[0x26] = 0x80;
      pbVar5[0x27] = 0xbf;
    }
    else {
      fVar8 = (float)*(double *)
                      (param_1[0x16] + 0x6d0 + (ulonglong)(*(byte *)((longlong)plVar6 + 10) & 1) * 8
                      );
      fVar2 = *(float *)(pbVar5 + 0x24);
      *(float *)(pbVar5 + 0x24) = fVar8;
      uVar7 = -(uint)(fVar2 < 0.0);
      uVar9 = uVar7 & uVar9 | ~uVar7 & (uint)(fVar8 - fVar2);
    }
    local_48 = &local_40;
    (**(code **)(*plVar6 + 8))(plVar6,uVar9,uVar3,uVar4);
    plVar6 = (longlong *)param_1[0x15];
  }
  *(undefined1 *)(plVar6[4] + 1) = 0;
  *(undefined8 *)(plVar6[4] + 0x10) = 0;
  if (local_40 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_40 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_40)(local_40,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b2b6af FUN_144b2b6af body=8 status=ok
// SIG undefined FUN_144b2b6af(void)

undefined1 * FUN_144b2b6af(void)

{
  return &DAT_14cb0cbf4;
}



// FUNCTION 144b2b6b8 FUN_144b2b6b8 body=61 status=ok
// SIG undefined FUN_144b2b6b8(void)

undefined8 FUN_144b2b6b8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_2 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2), cVar1 == '\0')) {
    return 0;
  }
  if (*(longlong **)(param_1 + 0xfd0) == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000144b2b6f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0xfd0) + 8))();
  return uVar2;
}



// FUNCTION 144b2b6f6 FUN_144b2b6f6 body=602 status=ok
// SIG undefined FUN_144b2b6f6(void)

void FUN_144b2b6f6(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 *param_6,undefined4 param_7,undefined4 *param_8,
                  undefined8 param_9,undefined8 param_10)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  char cVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  
  if (0 < *(int *)(param_1 + 0x1228)) {
    lVar14 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x1220) + 0x38 + lVar14 * 0x58) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x1220) + lVar14 * 0x58;
        plVar8 = *(longlong **)(lVar13 + 0x30);
        if (plVar8 != (longlong *)0x0) {
          if (*(code **)(*plVar8 + 0x30) == FUN_147d86e08) {
            if ((((*(int *)((longlong)plVar8 + 0x1c) != 0) &&
                 (uVar3 = *(uint *)(plVar8 + 3), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
               && (((plVar9 = (longlong *)
                              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                    plVar9 != (longlong *)0x0 &&
                    ((int)plVar9[2] == *(int *)((longlong)plVar8 + 0x1c))) &&
                   (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 && (*plVar9 != 0)))))) {
LAB_144b2b7b1:
              if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
LAB_144b2b89e:
                puVar11 = param_6;
                uVar7 = param_5;
                if (*(char *)(lVar13 + 0x50) != '\0') {
                  puVar11 = param_8;
                  uVar7 = param_7;
                }
                if (*(int *)(lVar13 + 0x38) == 0) {
                  plVar8 = (longlong *)0x0;
                }
                else {
                  plVar8 = *(longlong **)(lVar13 + 0x30);
                }
                uVar7 = (**(code **)(*plVar8 + 0x58))
                                  (plVar8,param_2,param_3,param_4,uVar7,*puVar11,param_9,param_10);
                *puVar11 = uVar7;
              }
              else {
                pcVar5 = *(code **)(**(longlong **)(param_3 + 0x30) + 0x170);
                if (pcVar5 == FUN_1435046b0) {
                  if ((longlong)DAT_14cadbe30 != 0) {
                    iVar4 = *(int *)(lVar13 + 0x10);
                    plVar8 = DAT_14cadbe28;
LAB_144b2b80d:
                    if ((int)plVar8[1] == iVar4) {
                      if (1 < iVar4) {
                        lVar10 = 0;
                        do {
                          uVar1 = *(ushort *)(*plVar8 + lVar10);
                          uVar2 = *(ushort *)(*(longlong *)(lVar13 + 8) + lVar10);
                          if (uVar1 == uVar2) {
                            if (uVar1 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar2 | uVar1)) {
                              iVar12 = (uint)uVar1 - (uint)uVar2;
                              goto LAB_144b2b92b;
                            }
                            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                            goto LAB_144b2b925;
                          }
                          lVar10 = lVar10 + 2;
                        } while( true );
                      }
                    }
                    else if ((int)plVar8[1] + iVar4 != 1) goto LAB_144b2b81f;
                    goto LAB_144b2b89e;
                  }
                }
                else {
                  cVar6 = (*pcVar5)();
                  if (cVar6 != '\0') goto LAB_144b2b89e;
                }
              }
            }
          }
          else {
            cVar6 = (**(code **)(*plVar8 + 0x30))();
            if (cVar6 != '\0') goto LAB_144b2b7b1;
          }
        }
      }
LAB_144b2b7e2:
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(param_1 + 0x1228));
  }
  return;
LAB_144b2b925:
  iVar12 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_144b2b92b:
  if (iVar12 == 0) goto LAB_144b2b89e;
LAB_144b2b81f:
  plVar8 = plVar8 + 2;
  if (plVar8 == DAT_14cadbe28 + (longlong)DAT_14cadbe30 * 2) goto LAB_144b2b7e2;
  goto LAB_144b2b80d;
}



// FUNCTION 144b2b950 FUN_144b2b950 body=402 status=ok
// SIG undefined FUN_144b2b950(void)

void FUN_144b2b950(longlong param_1)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  iVar3 = *(int *)(param_1 + 0x308);
  if (iVar3 == 0) {
    uVar13 = 1;
    uVar4 = 0;
    iVar5 = 0;
    iVar8 = 0;
  }
  else {
    puVar12 = *(uint **)(param_1 + 0x300);
    if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 0x2f0);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar5 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar5 = iVar3 + -1;
      }
      uVar4 = 0;
      uVar13 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar13 = uVar4;
      }
      iVar8 = 0;
      do {
        if (uVar13 == uVar4) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar9 = puVar12[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar4 = 0;
      iVar8 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar1 = uVar13 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar9 = 0xffffffff;
    do {
      bVar2 = *(byte *)(*(longlong *)(param_1 + 0x2e0) + 0x4c + (longlong)iVar5 * 0x110);
      *(byte *)(*(longlong *)(param_1 + 0x2e0) + 0x4c + (longlong)iVar5 * 0x110) =
           bVar2 & 0xf9 | bVar2 * '\x02' & 2;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = *(uint **)(param_1 + 0x300);
      if (*(uint **)(param_1 + 0x300) == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 0x2f0);
      }
      iVar3 = *(int *)(param_1 + 0x308);
      iVar5 = (int)uVar4;
      lVar7 = (longlong)iVar5;
      uVar6 = puVar12[lVar7] & uVar9;
      if (uVar6 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar5) {
          iVar11 = iVar5;
        }
        if (iVar10 <= iVar5) {
          return;
        }
        lVar14 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar6 = puVar12[lVar7 + lVar14 + 1];
          if (uVar6 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar11 - lVar7 == lVar14) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar5 + (int)lVar14 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar6 & uVar6);
      uVar1 = uVar13 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar8 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 144b2bae2 FUN_144b2bae2 body=319 status=ok
// SIG undefined FUN_144b2bae2(void)

longlong * FUN_144b2bae2(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_2;
  param_1[1] = *(longlong *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0) {
    lVar4 = FUN_144a797b2();
    if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
      goto LAB_144b2bb1b;
    }
  }
  bVar5 = false;
LAB_144b2bb1b:
  *(bool *)((longlong)param_1 + 0x16) = bVar5;
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_144b2bb2a:
    while( true ) {
      for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
        if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x8001) == 0) &&
           ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))
           )) goto LAB_144b2bb4e;
      }
      if (*(char *)((longlong)param_1 + 0x16) != '\x01') break;
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if ((int)plVar2[0x3c] <= iVar3) break;
      lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
      lVar4 = 0;
      if (lVar1 != 0) {
        lVar4 = *(longlong *)(lVar1 + 0x50);
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) != '\x01') goto LAB_144b2bb9d;
    if (*(code **)(*plVar2 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plVar2 = (longlong *)plVar2[8];
    }
    else {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
    }
    if (plVar2 != (longlong *)0x0) {
      lVar4 = plVar2[10];
      *(undefined4 *)(param_1 + 2) = 0xffffffff;
      goto LAB_144b2bb2a;
    }
    plVar2 = (longlong *)0x0;
LAB_144b2bb9d:
    lVar4 = 0;
  }
LAB_144b2bb4e:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 144b2bc26 FUN_144b2bc26 body=467 status=ok
// SIG undefined FUN_144b2bc26(void)

void FUN_144b2bc26(ulonglong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  iVar1 = param_2[4];
  iVar2 = param_2[3];
  iVar3 = param_2[1];
  iVar4 = *param_2;
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar6 + 5;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x30);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 5;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar6 + 2) = (float)iVar4;
  *(float *)((longlong)puVar6 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar6 + 3) = 0;
  *(float *)((longlong)puVar6 + 0x1c) = (float)iVar2;
  *(float *)(puVar6 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  uVar5 = DAT_14cb0f6d0;
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar6 + 5;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x30);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 5;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar6 + 2) = 0;
  puVar6[3] = uVar5;
  *(undefined4 *)(puVar6 + 4) = 0;
  iVar1 = param_2[2];
  iVar2 = param_2[5];
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar6 + 4;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x28);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 4;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a1fc200;
  puVar6[2] = 0x200000000;
  *(int *)(puVar6 + 3) = iVar2 - iVar1;
  return;
}



// FUNCTION 144b2bdfa FUN_144b2bdfa body=677 status=ok
// SIG undefined FUN_144b2bdfa(void)

int FUN_144b2bdfa(longlong param_1,char param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  int *piVar17;
  int *piVar18;
  
  bVar7 = param_2 + *(char *)(param_1 + 0x58);
  piVar4 = *(int **)(param_1 + 0x10);
  uVar1 = piVar4[1];
  uVar14 = (ulonglong)bVar7;
  uVar6 = (uint)bVar7;
  if (bVar7 < uVar1) {
    uVar6 = uVar1;
  }
  do {
    uVar13 = uVar6;
    if (uVar14 == uVar6) break;
    uVar13 = (uint)uVar14;
    if (piVar4[0x48] < 1) {
      if ((-1 < (int)uVar13) && ((int)uVar13 < piVar4[0x3c])) {
        uVar11 = ((param_3 & 0x55555555) >> 1 | param_3 & 0x55555555) & 0x33333333;
        uVar11 = (uVar11 >> 2 | uVar11) & 0xf0f0f0f;
        uVar11 = uVar11 >> 4 | uVar11;
        if (((uVar11 & 0xff | uVar11 >> 8 & 0xff00) <
             *(uint *)(*(longlong *)(piVar4 + 0x3a) + uVar14 * 0x30)) &&
           (lVar10 = *(longlong *)(piVar4 + 0x3a) + uVar14 * 0x30,
           uVar11 = param_3 & 0x22222222 | param_3 >> 1 & 0x44444444,
           uVar11 = (uVar11 >> 3 | uVar11 >> 1) & 0xf0f0f0f, uVar11 = uVar11 >> 4 | uVar11,
           (uVar11 >> 8 & 0xff00 | uVar11 & 0xff) < *(uint *)(lVar10 + 4))) {
          iVar9 = -1;
          if ((int)uVar13 < piVar4[0x38]) {
            if ((int)*(uint *)(lVar10 + 0x18) < 1) {
              lVar16 = -1;
            }
            else {
              iVar15 = 0;
              uVar11 = *(uint *)(lVar10 + 0x18);
              do {
                uVar3 = (uVar11 >> 1) + iVar15;
                if (*(uint *)(*(longlong *)(lVar10 + 0x10) + (ulonglong)uVar3 * 4) <= param_3) {
                  iVar15 = uVar3 + (uVar11 & 1);
                }
                bVar5 = 1 < uVar11;
                uVar11 = uVar11 >> 1;
              } while (bVar5);
              lVar16 = (longlong)(iVar15 + -1);
            }
            iVar15 = *(int *)(*(longlong *)(lVar10 + 0x20) + lVar16 * 4);
            if (((iVar15 != -1) &&
                (iVar2 = *(int *)(*(longlong *)(piVar4 + 0x36) + uVar14 * 4), iVar2 != -1)) &&
               (iVar15 = (param_3 - *(int *)(*(longlong *)(lVar10 + 0x10) + lVar16 * 4)) + iVar15,
               iVar15 != -1)) {
              iVar9 = iVar15 * *(int *)(*(longlong *)(piVar4 + 0x2e) +
                                       (longlong)(piVar4[0x30] + -1) * 4) + iVar2;
            }
          }
          goto LAB_144b2bf7b;
        }
      }
LAB_144b2c009:
      uVar13 = uVar1 - 1;
      break;
    }
    uVar8 = uVar14 & 0xff;
    uVar11 = *piVar4 * param_3 + *(int *)(*(longlong *)(piVar4 + 0x42) + uVar8 * 4);
    if (*(uint *)(*(longlong *)(piVar4 + 0x42) + 4 + uVar8 * 4) <= uVar11) goto LAB_144b2c009;
    iVar9 = -1;
    if ((int)(uVar13 & 0xff) < piVar4[0x34]) {
      iVar9 = *(int *)(*(longlong *)(piVar4 + 0x32) + uVar8 * 4);
    }
    uVar3 = *(uint *)(*(longlong *)(piVar4 + 0x3e) + (longlong)(iVar9 + 1) * 4);
    lVar10 = (longlong)iVar9;
    if (uVar11 < uVar3) {
      piVar17 = (int *)((longlong)(int)uVar11 * 4 + *(longlong *)(piVar4 + 0x46));
    }
    else {
      piVar17 = (int *)(*(longlong *)(piVar4 + 0x2a) + lVar10 * 0x90 + 0x5c);
    }
    uVar12 = *piVar4 + uVar11;
    if (uVar12 < uVar3) {
      piVar18 = (int *)((longlong)(int)uVar12 * 4 + *(longlong *)(piVar4 + 0x46));
    }
    else {
      piVar18 = (int *)(lVar10 * 0x90 + *(longlong *)(piVar4 + 0x2a) + 0x5c);
    }
    iVar9 = -1;
    if (*piVar17 != *piVar18) {
      if (uVar11 < uVar3) {
        piVar17 = (int *)((longlong)(int)uVar11 * 4 + *(longlong *)(piVar4 + 0x46));
      }
      else {
        piVar17 = (int *)(*(longlong *)(piVar4 + 0x2a) + lVar10 * 0x90 + 0x5c);
      }
      iVar9 = *piVar17;
    }
LAB_144b2bf7b:
    param_3 = param_3 >> 2;
    uVar14 = uVar14 + 1;
  } while (iVar9 == -1);
  return uVar13 - bVar7;
}



// FUNCTION 144b2c0a0 FUN_144b2c0a0 body=483 status=ok
// SIG undefined FUN_144b2c0a0(void)

int FUN_144b2c0a0(int *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  ulonglong uVar13;
  int iVar14;
  
  if (param_1[0x48] < 1) {
    iVar7 = -1;
    if (((-1 < (int)param_2) && ((int)param_2 < param_1[0x38])) && ((int)param_2 < param_1[0x3c])) {
      lVar3 = *(longlong *)(param_1 + 0x3a);
      lVar9 = (ulonglong)param_2 * 0x30;
      uVar10 = *(uint *)(lVar3 + 0x18 + lVar9);
      lVar4 = *(longlong *)(lVar3 + 0x10 + lVar9);
      if ((int)uVar10 < 1) {
        lVar8 = -1;
      }
      else {
        iVar14 = 0;
        do {
          uVar2 = (uVar10 >> 1) + iVar14;
          if (*(uint *)(lVar4 + (ulonglong)uVar2 * 4) <= param_3) {
            iVar14 = uVar2 + (uVar10 & 1);
          }
          bVar5 = 1 < uVar10;
          uVar10 = uVar10 >> 1;
        } while (bVar5);
        lVar8 = (longlong)(iVar14 + -1);
      }
      iVar14 = *(int *)(*(longlong *)(lVar3 + lVar9 + 0x20) + lVar8 * 4);
      if (((iVar14 != -1) &&
          (iVar1 = *(int *)(*(longlong *)(param_1 + 0x36) + (ulonglong)param_2 * 4), iVar1 != -1))
         && (iVar14 = (param_3 - *(int *)(lVar4 + lVar8 * 4)) + iVar14, iVar14 != -1)) {
        iVar7 = 0;
        if (param_4 != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x2e) + (longlong)(param_4 + -1) * 4);
        }
        iVar7 = iVar1 + iVar7 +
                *(int *)(*(longlong *)(param_1 + 0x2e) + (longlong)(param_1[0x30] + -1) * 4) *
                iVar14;
      }
    }
  }
  else {
    uVar13 = (ulonglong)(param_2 & 0xff);
    uVar10 = param_3 * *param_1 + *(int *)(*(longlong *)(param_1 + 0x42) + uVar13 * 4);
    iVar7 = -1;
    if (uVar10 < *(uint *)(*(longlong *)(param_1 + 0x42) + 4 + uVar13 * 4)) {
      iVar14 = -1;
      if ((int)(param_2 & 0xff) < param_1[0x34]) {
        iVar14 = *(int *)(*(longlong *)(param_1 + 0x32) + uVar13 * 4);
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 0x3e) + (longlong)(iVar14 + 1) * 4);
      if (uVar10 < uVar2) {
        piVar6 = (int *)((longlong)(int)uVar10 * 4 + *(longlong *)(param_1 + 0x46));
      }
      else {
        piVar6 = (int *)(*(longlong *)(param_1 + 0x2a) + (longlong)iVar14 * 0x90 + 0x5c);
      }
      uVar11 = *param_1 + uVar10;
      if (uVar11 < uVar2) {
        piVar12 = (int *)((longlong)(int)uVar11 * 4 + *(longlong *)(param_1 + 0x46));
      }
      else {
        piVar12 = (int *)((longlong)iVar14 * 0x90 + *(longlong *)(param_1 + 0x2a) + 0x5c);
      }
      iVar7 = -1;
      if (*piVar6 != *piVar12) {
        if (uVar10 + param_4 < uVar2) {
          piVar6 = (int *)((longlong)(int)(uVar10 + param_4) * 4 + *(longlong *)(param_1 + 0x46));
        }
        else {
          piVar6 = (int *)(*(longlong *)(param_1 + 0x2a) + (longlong)iVar14 * 0x90 + 0x5c);
        }
        iVar7 = *piVar6;
      }
    }
  }
  return iVar7;
}



// FUNCTION 144b2c284 FUN_144b2c284 body=173 status=ok
// SIG undefined FUN_144b2c284(void)

int FUN_144b2c284(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0xb0) == 0) {
    iVar2 = *(int *)(param_1 + 0xb4) * 0x90 + 0x128;
  }
  else {
    iVar2 = *(int *)(param_1 + 0xb4) * 0x90 +
            (int)(((longlong)*(int *)(param_1 + 0xb0) * 0x90 - 0x90U) / 0x90) * 0x58 + 0x180;
  }
  iVar1 = (*(int *)(param_1 + 0x104) + *(int *)(param_1 + 0x124) + *(int *)(param_1 + 0x114) +
           *(int *)(param_1 + 0xd4) + *(int *)(param_1 + 0xe4)) * 4;
  if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
    lVar3 = 0;
    do {
      iVar1 = iVar1 + (*(int *)(*(longlong *)(param_1 + 0xe8) + 0x2c + lVar3) +
                      *(int *)(*(longlong *)(param_1 + 0xe8) + 0x1c + lVar3)) * 4;
      lVar3 = lVar3 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0xf0) * 0x30 != lVar3);
  }
  return iVar1 + iVar2;
}



// FUNCTION 144b2c332 FUN_144b2c332 body=19 status=ok
// SIG undefined FUN_144b2c332(void)

byte FUN_144b2c332(longlong param_1)

{
  return 0x6aU >> (*(byte *)(param_1 + 0x152) & 0x1f) & *(byte *)(param_1 + 0x152) < 7;
}



// FUNCTION 144b2c346 FUN_144b2c346 body=69 status=ok
// SIG undefined FUN_144b2c346(void)

ulonglong FUN_144b2c346(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0xe0));
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),(*(byte *)(param_2 + 0x243) & 0xc) == 4);
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0xe0));
  return uVar1 & 0xffffffff;
}



// FUNCTION 144b2c38c FUN_144b2c38c body=47 status=ok
// SIG undefined FUN_144b2c38c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_144b2c38c(double *param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)DAT_14c759090;
  dVar2 = DAT_14c866ff8 - _DAT_14c86a9d8;
  *param_1 = dVar2;
  param_1[1] = dVar2;
  *(float *)(param_1 + 2) = fVar1;
  *(float *)((longlong)param_1 + 0x14) = fVar1;
  return param_1;
}



// FUNCTION 144b2c3bc FUN_144b2c3bc body=179 status=ok
// SIG undefined FUN_144b2c3bc(void)

undefined8 FUN_144b2c3bc(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  
  iVar2 = *(int *)(param_1 + 0x90);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar6 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar6);
      if (plVar4 != (longlong *)0x0) {
        if (*(code **)(*plVar4 + 0x2f0) == (code *)&LAB_144b2df18) {
          if ((char)plVar4[0x38] == '\x01') {
LAB_144b2c422:
            if ((char)plVar4[0x21] != '\x02') {
              if ((char)plVar4[0x21] == '\x03') {
                return 0;
              }
              if (plVar4[0x2f] == 0) {
                return 0;
              }
              bVar1 = *(byte *)(plVar4[0x2f] + 0x240);
              cVar5 = (**(code **)(*plVar4 + 0x2e0))(plVar4);
              if (((bVar1 & 0x20) == 0) == (bool)cVar5) {
                return 0;
              }
            }
          }
        }
        else {
          cVar5 = (**(code **)(*plVar4 + 0x2f0))(plVar4);
          if (cVar5 != '\0') goto LAB_144b2c422;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  return 1;
}



// FUNCTION 144b2c470 FUN_144b2c470 body=7 status=ok
// SIG undefined FUN_144b2c470(void)

undefined4 FUN_144b2c470(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x238);
}



// FUNCTION 144b2c478 FUN_144b2c478 body=94 status=ok
// SIG undefined FUN_144b2c478(void)

undefined8 FUN_144b2c478(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      if (plVar1[0x1e] == 0) {
        return 0;
      }
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x3c0))();
      if (cVar2 != '\0') {
        return 0;
      }
    }
    if ((*(longlong **)(param_1 + 0x108) != (longlong *)0x0) &&
       (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x3c0))(), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 144b2c504 FUN_144b2c504 body=342 status=ok
// SIG undefined FUN_144b2c504(void)

void FUN_144b2c504(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE_00;
  longlong *plVar1;
  
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    plVar1 = (longlong *)(param_1 + 0xf0);
    if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xe0);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x10);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)&LAB_147db93aa) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 != FUN_147db93c4) {
        (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
      }
    }
    else {
      (*UNRECOVERED_JUMPTABLE_00)();
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    plVar1 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0xa0);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x10);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)&LAB_147db9358) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 != FUN_147db9372) {
        (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
      }
    }
    else {
      (*UNRECOVERED_JUMPTABLE_00)();
    }
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x60);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x10);
    if (UNRECOVERED_JUMPTABLE_00 == (code *)&LAB_147db9358) {
      UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
      if (UNRECOVERED_JUMPTABLE_00 != FUN_147db9372) {
        (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
      }
    }
    else {
      (*UNRECOVERED_JUMPTABLE_00)();
    }
  }
  if (*(longlong *)(param_1 + 0x10) != 0) {
    plVar1 = (longlong *)(param_1 + 0x30);
    if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
      plVar1 = *(longlong **)(param_1 + 0x20);
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x10);
    if (UNRECOVERED_JUMPTABLE_00 != (code *)&LAB_147db9358) {
                    /* WARNING: Could not recover jumptable at 0x000144b2c64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar1);
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar1 + 0x18);
    if (UNRECOVERED_JUMPTABLE_00 != FUN_147db9372) {
                    /* WARNING: Could not recover jumptable at 0x000144b2c657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)(plVar1,0);
      return;
    }
  }
  return;
}



// FUNCTION 144b2c65a FUN_144b2c65a body=2840 status=ok
// SIG undefined FUN_144b2c65a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b2c65a(double *param_1,float param_2,longlong param_3,char param_4,undefined8 *param_5)

{
  char *pcVar1;
  code *pcVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  int iVar8;
  longlong lVar9;
  uint uVar10;
  double *pdVar11;
  ushort uVar12;
  ushort uVar13;
  char *pcVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar38;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined4 uVar39;
  undefined4 uVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  undefined1 auStack_208 [40];
  float local_1e0;
  float local_1dc;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  undefined1 local_108 [16];
  double local_f8;
  double local_f0;
  ulonglong local_e0;
  
  iVar8 = (int)((ulonglong)param_3 >> 0x20);
  uVar13 = (ushort)((ulonglong)param_3 >> 0x10);
  uVar12 = (ushort)param_3;
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  pdVar11 = param_1;
  if (*(char *)(param_1 + 0xc) == '\0') {
    if (*(int *)(param_1 + 0xe) != *(int *)((longlong)param_1 + 0x9c)) {
      pdVar11 = param_1 + 0x14;
      if ((double *)param_1[0x15] != (double *)0x0) {
        pdVar11 = (double *)param_1[0x15];
      }
      iVar8 = *(int *)((longlong)pdVar11 +
                      (ulonglong)
                      (*(int *)(param_1 + 0x16) - 1U &
                      iVar8 + ((int)param_3 << 0x10 | (uint)uVar12) +
                      ((uint)uVar13 << 0x13 | (uint)uVar13) + (uint)(uVar12 >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          pdVar11 = (double *)((longlong)iVar8 * 0x10);
          if (*(longlong *)((longlong)param_1[0xd] + (longlong)pdVar11) == param_3)
          goto LAB_144b2c700;
          iVar8 = *(int *)((longlong)pdVar11 + (longlong)param_1[0xd] + 8);
        } while (iVar8 != -1);
      }
      goto LAB_144b2ca95;
    }
  }
  else {
    if (*(char *)(param_1 + 0xc) != '\x01') goto LAB_144b2ca95;
    if (*(int *)(param_1 + 0xe) != *(int *)((longlong)param_1 + 0x9c)) {
      pdVar11 = param_1 + 0x14;
      if ((double *)param_1[0x15] != (double *)0x0) {
        pdVar11 = (double *)param_1[0x15];
      }
      uVar10 = *(uint *)((longlong)pdVar11 +
                        (ulonglong)
                        (*(int *)(param_1 + 0x16) - 1U &
                        iVar8 + ((int)param_3 << 0x10 | (uint)uVar12) +
                        ((uint)uVar13 << 0x13 | (uint)uVar13) + (uint)(uVar12 >> 4)) * 4);
      pdVar11 = (double *)(ulonglong)uVar10;
      if (uVar10 != 0xffffffff) {
        do {
          lVar9 = (longlong)(int)pdVar11 * 0x10;
          if (*(longlong *)((longlong)param_1[0xd] + lVar9) == param_3) goto LAB_144b2ca95;
          uVar10 = *(uint *)(lVar9 + (longlong)param_1[0xd] + 8);
          pdVar11 = (double *)(ulonglong)uVar10;
        } while (uVar10 != 0xffffffff);
      }
    }
  }
LAB_144b2c700:
  dVar16 = 0.0;
  uVar39 = 0;
  uVar40 = 0;
  if (param_4 == '\0') {
    uVar39 = SUB84(param_1[4],0);
    uVar40 = (undefined4)((ulonglong)param_1[4] >> 0x20);
    dVar16 = param_1[6];
  }
  fVar45 = *(float *)(param_1 + 0x2b);
  fVar44 = *(float *)((longlong)param_1 + 0x15c);
  pcVar2 = (code *)*param_5;
  pdVar3 = (double *)param_5[1];
  auVar30._4_4_ = uVar40;
  auVar30._0_4_ = uVar39;
  auVar30._8_8_ = param_1[5];
  auVar30 = divpd(auVar30,_DAT_1499387d0);
  auVar22._0_8_ = dVar16 / 360.0;
  auVar22._8_8_ = 0;
  auVar30 = roundpd(auVar30,auVar30,3);
  auVar22 = roundpd(auVar22,auVar22,3);
  dVar6 = ((double)CONCAT44(uVar40,uVar39) - auVar30._0_8_ * (double)DAT_1499387d0) *
          0.008726646259971648;
  dVar21 = (param_1[5] - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar41 = (dVar16 - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar42 = (0.0 - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  local_1e0 = param_2;
  dVar16 = sin(dVar6);
  dVar17 = sin(dVar21);
  dVar18 = sin(dVar41);
  sin(dVar42);
  dVar19 = cos(dVar6);
  dVar20 = cos(dVar21);
  dVar41 = cos(dVar41);
  cos(dVar42);
  dVar6 = -(dVar20 * dVar16 * dVar18) + dVar17 * dVar19 * dVar41;
  dVar21 = dVar17 * dVar16 * dVar18 + dVar20 * dVar19 * dVar41;
  dVar42 = dVar16 * dVar17 * dVar41 - dVar19 * dVar20 * dVar18;
  dVar19 = -(dVar16 * dVar20 * dVar41) - dVar19 * dVar17 * dVar18;
  dVar16 = param_1[3];
  dVar18 = param_1[1];
  dVar17 = param_1[2];
  lVar9 = (longlong)*(int *)(param_1 + 0x22);
  if (lVar9 == 0) {
    fVar45 = fVar45 + local_1e0;
    if (0.0 < fVar45) {
      dVar20 = DAT_14c8462e8 * 1.0;
      dVar35 = DAT_14c8462e0 * dVar42 - dVar19 * DAT_14c8462d8;
      dVar38 = dVar20 * dVar19 - dVar6 * DAT_14c8462e0;
      dVar31 = DAT_14c8462d8 * dVar6 - dVar42 * dVar20;
      dVar38 = dVar38 + dVar38;
      dVar31 = dVar31 + dVar31;
      dVar35 = dVar35 + dVar35;
      local_f8 = dVar35 * dVar21 + dVar20 + (dVar31 * dVar42 - dVar38 * dVar19);
      auVar22 = maxpd(_DAT_149934d80,_DAT_149934d80);
      auVar22 = maxpd(auVar22,_DAT_149934d80);
      local_110 = (double)(float)auVar22._0_8_ * (double)fVar45;
      dVar34 = DAT_14c8464f0 * 1.0;
      dVar20 = DAT_14c8464e8 * dVar42 - dVar19 * DAT_14c8464e0;
      dVar41 = dVar34 * dVar19 - dVar6 * DAT_14c8464e8;
      dVar43 = DAT_14c8464e0 * dVar6 - dVar42 * dVar34;
      dVar41 = dVar41 + dVar41;
      dVar43 = dVar43 + dVar43;
      dVar20 = dVar20 + dVar20;
      dVar17 = dVar17 + (dVar6 * dVar41 - dVar42 * dVar20) + dVar21 * dVar43 + DAT_14c8464e8;
      local_118 = dVar16 + dVar20 * dVar21 + dVar34 + (dVar43 * dVar42 - dVar41 * dVar19);
      local_128._8_4_ = SUB84(dVar17,0);
      local_128._0_8_ =
           dVar18 + (dVar20 * dVar19 - dVar43 * dVar6) + dVar21 * dVar41 + DAT_14c8464e0;
      local_128._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
      local_108._8_8_ = (dVar6 * dVar38 - dVar42 * dVar35) + dVar21 * dVar31 + DAT_14c8462e0;
      local_108._0_8_ = (dVar35 * dVar19 - dVar31 * dVar6) + dVar21 * dVar38 + DAT_14c8462d8;
      local_f0 = 360.0;
      (*pcVar2)(pdVar3);
    }
  }
  else {
    pcVar14 = (char *)param_1[0x21];
    dVar20 = (double)(lVar9 * 9);
    pcVar1 = pcVar14 + lVar9 * 0x48;
    local_1dc = fVar44;
    local_1c8 = dVar19;
    dStack_1c0 = dVar6;
    local_1b8 = dVar42;
    dStack_1b0 = dVar21;
    local_1a8 = dVar21;
    dStack_1a0 = dVar21;
    do {
      if (*pcVar14 == '\x01') {
        fVar44 = *(float *)(pcVar14 + 4) * local_1e0;
      }
      else {
        fVar44 = *(float *)(pcVar14 + 8);
      }
      fVar15 = 360.0;
      if ((pcVar14[0xc] == '\x01') &&
         (fVar15 = *(float *)(pcVar14 + 0x10) + local_1dc, 360.0 <= fVar15)) {
        fVar15 = 360.0;
      }
      if (param_4 == '\0') {
        dVar20 = *(double *)(pcVar14 + 0x40);
        local_148 = *(double *)(pcVar14 + 0x30);
        dStack_140 = *(double *)(pcVar14 + 0x38);
        local_138 = dVar20;
      }
      else {
        dStack_140 = *(double *)(pcVar14 + 0x38);
        local_148 = 0.0;
        local_138 = 0.0;
      }
      auVar7._8_8_ = dStack_140;
      auVar7._0_8_ = local_148;
      dVar21 = (double)DAT_1499387d0;
      dVar41 = DAT_1499387d0._8_8_;
      auVar22 = divpd(auVar7,_DAT_1499387d0);
      auVar23._0_8_ = local_138 / 360.0;
      auVar23._8_8_ = 0;
      auVar30 = roundpd(auVar22,auVar22,3);
      auVar22 = roundpd(auVar23,auVar23,3);
      auVar36._0_8_ = local_138 - auVar22._0_8_ * dVar21;
      auVar36._8_8_ = 0.0 - auVar22._8_8_ * dVar41;
      dVar43 = local_148 - auVar30._0_8_ * dVar21;
      dVar34 = dStack_140 - auVar30._8_8_ * dVar41;
      auVar33._0_8_ = dVar43 + dVar21;
      auVar33._8_8_ = dVar34 + dVar41;
      auVar32._0_8_ = auVar36._0_8_ + dVar21;
      auVar32._8_8_ = auVar36._8_8_ + dVar41;
      auVar24._8_8_ = -(ulonglong)(0.0 <= dVar34);
      auVar24._0_8_ = -(ulonglong)(0.0 <= dVar43);
      auVar4._8_8_ = dVar34;
      auVar4._0_8_ = dVar43;
      auVar30 = blendvpd(auVar33,auVar4,auVar24);
      auVar25._8_8_ = -(ulonglong)(0.0 <= auVar36._8_8_);
      auVar25._0_8_ = -(ulonglong)(0.0 <= auVar36._0_8_);
      auVar22 = blendvpd(auVar32,auVar36,auVar25);
      auVar37._0_8_ = auVar22._0_8_ + -360.0;
      auVar37._8_8_ = auVar22._8_8_ + -360.0;
      auVar26._8_8_ = -(ulonglong)(180.0 < auVar30._8_8_);
      auVar26._0_8_ = -(ulonglong)(180.0 < auVar30._0_8_);
      auVar5._8_8_ = auVar30._8_8_ + -360.0;
      auVar5._0_8_ = auVar30._0_8_ + -360.0;
      auVar30 = blendvpd(auVar30,auVar5,auVar26);
      auVar27._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
      auVar27._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
      auVar22 = blendvpd(auVar22,auVar37,auVar27);
      auVar28._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._8_8_));
      auVar28._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar30._0_8_));
      iVar8 = movmskpd(SUB84(dVar20,0),auVar28);
      auVar29._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._8_8_));
      auVar29._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar22._0_8_));
      uVar10 = movmskpd((int)pdVar11,auVar29);
      if ((uVar10 & 0x3fffffff) == 0 && iVar8 == 0) {
        local_158 = DAT_14c8462e8;
        local_168 = DAT_14c8462d8;
        dStack_160 = DAT_14c8462e0;
        pdVar11 = (double *)0x0;
        dVar20 = DAT_14c8462e8;
      }
      else {
        pdVar11 = &local_148;
        dVar20 = (double)FUN_144a76660(pdVar11,&local_168);
      }
      local_178 = 0.0;
      if (param_4 == '\0') {
        local_178 = *(double *)(pcVar14 + 0x28);
      }
      uStack_170 = 0;
      dVar21 = (double)(fVar44 + fVar45);
      if (1e-08 < ABS(dVar21)) {
        local_1d8 = (double)fVar15;
        local_188 = *(double *)(pcVar14 + 0x18);
        uStack_180 = 0;
        dVar41 = *(double *)(pcVar14 + 0x20);
        uStack_1d0 = 0;
        if (((9.999999747378752e-05 < ABS(local_168)) ||
            (uVar10 = -(uint)(9.999999747378752e-05 < ABS(local_158) ||
                             9.999999747378752e-05 < ABS(dStack_160)),
            dVar20 = (double)(ulonglong)uVar10, (uVar10 & 1) != 0)) && (1e-08 < ABS(local_1d8))) {
          dVar35 = local_158 * 1.0;
          dVar20 = dStack_160 * dVar42 - local_1c8 * local_168;
          dVar43 = dVar35 * dVar19 - dStack_1c0 * dStack_160;
          dVar34 = local_168 * dVar6 - local_1b8 * dVar35;
          dVar43 = dVar43 + dVar43;
          dVar34 = dVar34 + dVar34;
          dVar20 = dVar20 + dVar20;
          local_f8 = dVar20 * local_1a8 + dVar35 + (dVar34 * dVar42 - dVar43 * local_1c8);
          dVar35 = (dVar6 * dVar43 - local_1b8 * dVar20) + dStack_1a0 * dVar34 + dStack_160;
          auVar22 = maxpd(_DAT_149934d80,_DAT_149934d80);
          auVar22 = maxpd(auVar22,_DAT_149934d80);
          local_198 = dVar21 * (double)(float)auVar22._0_8_;
          uStack_190 = 0;
          dVar21 = dVar41 * dVar42 - local_1c8 * *(double *)(pcVar14 + 0x18);
          dVar31 = local_178 * dVar19 - dStack_1c0 * dVar41;
          dVar38 = local_188 * dVar6 - local_178 * local_1b8;
          dVar31 = dVar31 + dVar31;
          dVar38 = dVar38 + dVar38;
          dVar21 = dVar21 + dVar21;
          local_128._8_8_ =
               (dVar6 * dVar31 - local_1b8 * dVar21) + dStack_1a0 * dVar38 + dVar41 + dVar17;
          local_128._0_8_ =
               (dVar21 * dVar19 - dVar38 * dStack_1c0) +
               local_1a8 * dVar31 + *(double *)(pcVar14 + 0x18) + dVar18;
          local_118 = dVar21 * local_1a8 + local_178 + (dVar38 * dVar42 - dVar31 * local_1c8) +
                      dVar16;
          local_108._8_4_ = SUB84(dVar35,0);
          local_108._0_8_ = (dVar20 * dVar19 - dVar34 * dStack_1c0) + local_1a8 * dVar43 + local_168
          ;
          local_108._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
          pdVar11 = pdVar3;
          local_110 = local_198;
          local_f0 = local_1d8;
          dVar20 = (double)(*pcVar2)(pdVar3,local_128);
        }
      }
      pcVar14 = pcVar14 + 0x48;
    } while (pcVar14 != pcVar1);
  }
LAB_144b2ca95:
  if ((local_e0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2d174 FUN_144b2d174 body=207 status=ok
// SIG undefined FUN_144b2d174(void)

void FUN_144b2d174(longlong param_1,longlong param_2)

{
  *(undefined2 *)(param_1 + 0x28) = 0xff;
  *(undefined8 *)(param_1 + 0x30) = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0x7f7fffff;
  *(undefined8 *)(param_1 + 0x40) = 0x7fefffffffffffff;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x100) = 0x7fefffffffffffff;
  if (*(int *)(param_1 + 0x11c) < 0) {
    *(undefined4 *)(param_1 + 0x118) = 0;
    FUN_14482f6fa(param_1 + 0x110,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_140cb0586(param_1 + 0x120,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  if (*(int *)(param_1 + 0x13c) < 0) {
    *(undefined4 *)(param_1 + 0x138) = 0;
    FUN_147dd5888(param_1 + 0x130);
  }
  else {
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  *(undefined8 *)(param_1 + 0x140) = 0x7fefffffffffffff;
  *(undefined8 *)(param_1 + 0x148) = 0x7fefffffffffffff;
  return;
}



// FUNCTION 144b2d244 FUN_144b2d244 body=1810 status=ok
// SIG undefined FUN_144b2d244(void)

void FUN_144b2d244(longlong param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  bool bVar5;
  longlong lVar6;
  double *pdVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  float _Y;
  double dVar23;
  undefined1 auStack_188 [32];
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined1 local_138 [16];
  double local_128 [11];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  uVar3 = *(uint *)(param_1 + 0x128);
  uVar10 = (ulonglong)uVar3;
  if (uVar10 == 0) {
    *(undefined8 *)(param_1 + 0x100) = 0x7fefffffffffffff;
    *(float *)(param_1 + 0x38) = (float)*(double *)(param_1 + 0x140);
    dVar12 = *(double *)(param_1 + 0x148);
    lVar6 = 0x30;
  }
  else {
    pdVar7 = *(double **)(param_1 + 0x120);
    dVar12 = *pdVar7;
    if (1 < (int)uVar3) {
      uVar9 = 1;
      dVar4 = dVar12;
      do {
        dVar12 = pdVar7[uVar9];
        if (dVar4 <= pdVar7[uVar9]) {
          dVar12 = dVar4;
        }
        uVar9 = uVar9 + 1;
        dVar4 = dVar12;
      } while (uVar10 != uVar9);
    }
    *(double *)(param_1 + 0x100) = dVar12;
    *(float *)(param_1 + 0x38) = (float)*(double *)(param_1 + 0x140);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x148);
    if ((int)uVar3 < 1) {
      dVar12 = 0.0;
      dVar16 = 0.0;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x110);
      dVar4 = 0.0;
      uVar9 = 0;
      do {
        dVar4 = dVar4 + (double)*(float *)(lVar6 + uVar9 * 4);
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
      uVar9 = 0;
      dVar16 = 0.0;
      local_160 = 0.0;
      dVar12 = 0.0;
      fVar11 = DAT_14c761ee4;
      do {
        fVar18 = 1.0;
        _Y = fVar11;
        if (1.0 <= fVar11) {
          _Y = 1.0;
        }
        if (_Y <= 0.0) {
          _Y = 0.0;
        }
        local_148 = dVar16;
        if (1e-08 < _Y) {
          lVar6 = *(longlong *)(param_1 + 0x130);
          lVar8 = uVar9 * 0x40;
          local_150 = *(double *)(param_1 + 0xe0);
          local_158 = *(double *)(param_1 + 0xe8);
          fVar11 = *(float *)(param_1 + 0xf8);
          local_138 = ZEXT416((uint)fVar11);
          dVar23 = (double)fVar11;
          dVar19 = local_158 + dVar23;
          dVar21 = local_150 + dVar23;
          dVar20 = local_150 - dVar23;
          dVar16 = *(double *)(lVar6 + lVar8);
          dVar13 = *(double *)(lVar6 + 8 + lVar8);
          dVar1 = *(double *)(lVar6 + 0x18 + lVar8);
          dVar17 = *(double *)(lVar6 + 0x20 + lVar8);
          dVar14 = dVar1 * dVar17 + dVar16;
          dVar22 = dVar14 - dVar16;
          dVar2 = *(double *)(lVar6 + 0x28 + lVar8);
          local_140 = dVar12;
          if (dVar16 < dVar20) {
            dVar12 = dVar20;
            if (dVar20 <= dVar14) {
LAB_144b2d6d0:
              dVar12 = (dVar12 - dVar16) *
                       (double)(~-(ulonglong)(dVar22 != 0.0) & 0x47eff933c0000000 |
                               (ulonglong)(1.0 / dVar22) & -(ulonglong)(dVar22 != 0.0));
              bVar5 = true;
              goto LAB_144b2d6dc;
            }
LAB_144b2d478:
            dVar12 = dVar17 * dVar17 + dVar2 * dVar2;
            if (9.99999993922529e-09 < dVar12) {
              dVar17 = dVar17 * (1.0 / SQRT(dVar12));
            }
            else {
              dVar17 = 0.0;
            }
            local_128[1] = local_158 + (double)-fVar11;
            local_128[0] = (double)-fVar11 + local_150;
            local_128[2] = local_128[0];
            local_128[3] = dVar19;
            local_128[4] = dVar21;
            local_128[5] = local_128[1];
            local_128[6] = dVar21;
            local_128[7] = dVar19;
            local_128[8] = local_150;
            local_128[9] = local_158;
            fVar11 = 0.0;
            lVar6 = 8;
            do {
              dVar20 = *(double *)((longlong)local_128 + lVar6) - dVar13;
              dVar22 = *(double *)(local_138 + lVar6 + 8) - dVar16;
              dVar1 = dVar22 * dVar22 + dVar20 * dVar20;
              if (9.99999993922529e-09 < dVar1) {
                dVar20 = dVar20 * (1.0 / SQRT(dVar1));
              }
              else {
                dVar20 = 0.0;
              }
              fVar18 = (float)((double)(-(ulonglong)(9.99999993922529e-09 < dVar1) &
                                       (ulonglong)(dVar22 * (1.0 / SQRT(dVar1)))) * dVar17 +
                              dVar20 * (double)(-(ulonglong)(9.99999993922529e-09 < dVar12) &
                                               (ulonglong)(dVar2 * (1.0 / SQRT(dVar12)))));
              if (fVar11 <= fVar18) {
                fVar11 = fVar18;
              }
              lVar6 = lVar6 + 0x10;
            } while (lVar6 != 0x58);
            fVar18 = fVar11;
            if (1.0 <= fVar11) {
              fVar18 = 1.0;
            }
            fVar11 = acosf((float)(~-(uint)(fVar11 < -1.0) & (uint)fVar18 |
                                  -(uint)(fVar11 < -1.0) & 0xbf800000));
            fVar18 = ABS(fVar11 / 3.1415927);
          }
          else {
            if (dVar21 < dVar16) {
              dVar12 = dVar21;
              if (dVar14 <= dVar21) goto LAB_144b2d6d0;
              goto LAB_144b2d478;
            }
            dVar12 = 0.0;
            bVar5 = false;
LAB_144b2d6dc:
            dVar23 = local_158 - dVar23;
            dVar14 = dVar1 * dVar2 + dVar13;
            dVar1 = dVar14 - dVar13;
            local_168 = dVar4;
            if (dVar13 < dVar23) {
              dVar15 = dVar23;
              if (dVar23 <= dVar14) {
LAB_144b2d873:
                dVar14 = (dVar15 - dVar13) *
                         (double)(~-(ulonglong)(dVar1 != 0.0) & 0x47eff933c0000000 |
                                 (ulonglong)(1.0 / dVar1) & -(ulonglong)(dVar1 != 0.0));
LAB_144b2d7a9:
                if (dVar12 <= dVar14) {
                  dVar12 = dVar14;
                }
                if (dVar12 <= 0.0) {
                  dVar12 = 0.0;
                }
                if ((((dVar12 <= 1.0) &&
                     (dVar22 = dVar22 * dVar12 + dVar16, dVar20 + -0.10000000149011612 < dVar22)) &&
                    (dVar22 < dVar21 + 0.10000000149011612)) &&
                   ((dVar12 = dVar1 * dVar12 + dVar13, dVar23 + -0.10000000149011612 < dVar12 &&
                    (fVar18 = 0.0, dVar12 < dVar19 + 0.10000000149011612)))) goto LAB_144b2d625;
              }
              goto LAB_144b2d478;
            }
            if (dVar19 < dVar13) {
              dVar15 = dVar19;
              if (dVar14 <= dVar19) goto LAB_144b2d873;
              goto LAB_144b2d478;
            }
            fVar18 = 0.0;
            if (bVar5) {
              dVar14 = 0.0;
              goto LAB_144b2d7a9;
            }
          }
LAB_144b2d625:
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
          if (fVar18 <= 0.017453292) {
            fVar18 = 0.017453292;
          }
          fVar18 = powf(fVar18,_Y);
          lVar6 = *(longlong *)(param_1 + 0x110);
          pdVar7 = *(double **)(param_1 + 0x120);
          dVar12 = local_140;
          fVar11 = DAT_14c761ee4;
        }
        dVar13 = pdVar7[uVar9] * (double)fVar18 * (double)fVar18;
        dVar16 = (double)*(float *)(lVar6 + uVar9 * 4);
        if ((uVar9 == 0) || ((dVar13 < dVar12 && (local_160 <= dVar16)))) {
          dVar12 = dVar13;
          local_160 = dVar16;
        }
        dVar16 = local_148 + (dVar13 * dVar16) / dVar4;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar10);
    }
    if (dVar16 <= dVar12) {
      dVar12 = dVar16;
    }
    lVar6 = 0x108;
  }
  *(double *)(param_1 + lVar6) = dVar12;
  if ((local_d0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2d958 FUN_144b2d958 body=88 status=ok
// SIG undefined FUN_144b2d958(void)

longlong FUN_144b2d958(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(0x68,0x10);
    FUN_1412be19e(lVar1,param_1 + 0x50,param_1 + 8,(longlong)*(int *)(param_1 + 0x20),
                  *(undefined1 *)(param_1 + 0x90));
    *(longlong *)(param_1 + 0x98) = lVar1;
  }
  return lVar1;
}



// FUNCTION 144b2d9b0 FUN_144b2d9b0 body=307 status=ok
// SIG undefined FUN_144b2d9b0(void)

undefined8 FUN_144b2d9b0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar6 != -1) {
      uVar4 = CONCAT71((int7)((ulonglong)plVar3 >> 8),DAT_14c950c29);
      do {
        if ((param_2 != 0) && ((uVar4 & 1) != 0)) {
          uVar5 = FUN_1456cec3c(param_2);
          uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14c950c29);
        }
        uVar1 = *(ulonglong *)(*param_1 + (longlong)iVar6 * 0x10);
        if (((uVar4 & 1) != 0) && (uVar1 != 0)) {
          uVar5 = FUN_1456cec3c(uVar1);
          uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14c950c29);
        }
        if ((param_2 != 0) && ((uVar4 & 1) != 0)) {
          uVar5 = FUN_1456cec3c(param_2);
          uVar4 = CONCAT71((int7)((ulonglong)uVar5 >> 8),DAT_14c950c29);
        }
        if (uVar1 == param_2) goto LAB_144b2da7e;
        iVar6 = *(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10);
      } while (iVar6 != -1);
      iVar6 = -1;
LAB_144b2da7e:
      return CONCAT71((int7)(uVar4 >> 8),iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 144b2dae4 FUN_144b2dae4 body=537 status=ok
// SIG undefined FUN_144b2dae4(void)

void FUN_144b2dae4(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar14 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar14 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar14 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar11 = 0;
        uVar13 = 1;
        iVar14 = 0;
        iVar10 = 0;
      }
      else {
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        uVar9 = *puVar12;
        if (uVar9 == 0) {
          iVar14 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar14 = iVar2 + -1;
          }
          uVar11 = 0;
          uVar13 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar13 = uVar11;
          }
          iVar10 = 0;
          do {
            if (uVar13 == uVar11) goto LAB_144b2db39;
            iVar10 = iVar10 + 0x20;
            uVar9 = puVar12[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar11 = 0;
          iVar10 = 0;
        }
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar14 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar14) {
          iVar14 = iVar2;
        }
      }
      if (iVar14 != iVar2) {
        uVar9 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xc + (longlong)iVar14 * 0x10) * 4) =
               0xffffffff;
          uVar9 = ~(uint)uVar13 & uVar9;
          puVar12 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar12 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar14 = (int)uVar11;
          lVar5 = (longlong)iVar14;
          uVar8 = puVar12[lVar5] & uVar9;
          if (uVar8 == 0) {
            iVar6 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar6 = iVar3 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar14) {
              iVar7 = iVar14;
            }
            if (iVar14 < iVar6) {
              lVar15 = 0;
              do {
                uVar8 = puVar12[lVar5 + lVar15 + 1];
                if (uVar8 != 0) {
                  uVar11 = (ulonglong)(iVar14 + (int)lVar15 + 1);
                  uVar9 = 0xffffffff;
                  goto LAB_144b2dc75;
                }
                iVar10 = iVar10 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar7 - lVar5 != lVar15);
              uVar9 = 0xffffffff;
              iVar14 = iVar7;
            }
            uVar11 = (ulonglong)(iVar14 + 1);
            iVar14 = iVar3;
          }
          else {
LAB_144b2dc75:
            uVar13 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar13 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar14 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar14) {
              iVar14 = iVar3;
            }
          }
        } while (iVar14 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar5 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_1[9]);
    }
LAB_144b2db39:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 144b2dcfe FUN_144b2dcfe body=537 status=ok
// SIG undefined FUN_144b2dcfe(void)

void FUN_144b2dcfe(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar2 = (int)param_1[9];
    iVar14 = iVar2 + 3;
    if (-1 < iVar2) {
      iVar14 = iVar2;
    }
    if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar14 >> 2) {
      iVar2 = (int)param_1[5];
      if (iVar2 == 0) {
        uVar11 = 0;
        uVar13 = 1;
        iVar14 = 0;
        iVar10 = 0;
      }
      else {
        puVar12 = (uint *)param_1[4];
        if ((uint *)param_1[4] == (uint *)0x0) {
          puVar12 = (uint *)(param_1 + 2);
        }
        uVar9 = *puVar12;
        if (uVar9 == 0) {
          iVar14 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar14 = iVar2 + -1;
          }
          uVar11 = 0;
          uVar13 = (ulonglong)(uint)(iVar14 >> 5);
          if (iVar14 >> 5 < 1) {
            uVar13 = uVar11;
          }
          iVar10 = 0;
          do {
            if (uVar13 == uVar11) goto LAB_144b2dd53;
            iVar10 = iVar10 + 0x20;
            uVar9 = puVar12[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar9 == 0);
        }
        else {
          uVar11 = 0;
          iVar10 = 0;
        }
        uVar13 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar13 * 2 + 1;
        lVar5 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
          }
        }
        iVar14 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar14) {
          iVar14 = iVar2;
        }
      }
      if (iVar14 != iVar2) {
        uVar9 = 0xffffffff;
        do {
          *(undefined4 *)
           ((longlong)plVar4 + (longlong)*(int *)(*param_1 + 0xc + (longlong)iVar14 * 0x10) * 4) =
               0xffffffff;
          uVar9 = ~(uint)uVar13 & uVar9;
          puVar12 = (uint *)param_1[4];
          if ((uint *)param_1[4] == (uint *)0x0) {
            puVar12 = (uint *)(param_1 + 2);
          }
          iVar3 = (int)param_1[5];
          iVar14 = (int)uVar11;
          lVar5 = (longlong)iVar14;
          uVar8 = puVar12[lVar5] & uVar9;
          if (uVar8 == 0) {
            iVar6 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar6 = iVar3 + -1;
            }
            iVar6 = iVar6 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar7 = iVar6;
            if (iVar6 < iVar14) {
              iVar7 = iVar14;
            }
            if (iVar14 < iVar6) {
              lVar15 = 0;
              do {
                uVar8 = puVar12[lVar5 + lVar15 + 1];
                if (uVar8 != 0) {
                  uVar11 = (ulonglong)(iVar14 + (int)lVar15 + 1);
                  uVar9 = 0xffffffff;
                  goto LAB_144b2de8f;
                }
                iVar10 = iVar10 + 0x20;
                lVar15 = lVar15 + 1;
              } while (iVar7 - lVar5 != lVar15);
              uVar9 = 0xffffffff;
              iVar14 = iVar7;
            }
            uVar11 = (ulonglong)(iVar14 + 1);
            iVar14 = iVar3;
          }
          else {
LAB_144b2de8f:
            uVar13 = (ulonglong)(-uVar8 & uVar8);
            uVar1 = uVar13 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar14 = (iVar10 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar14) {
              iVar14 = iVar3;
            }
          }
        } while (iVar14 != iVar2);
      }
    }
    else if (0 < iVar2) {
      lVar5 = 0;
      do {
        *(undefined4 *)((longlong)plVar4 + lVar5 * 4) = 0xffffffff;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (int)param_1[9]);
    }
LAB_144b2dd53:
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    param_1[6] = 0xffffffff;
    *(undefined4 *)(param_1 + 5) = 0;
  }
  return;
}



// FUNCTION 144b2df26 FUN_144b2df26 body=1261 status=ok
// SIG undefined FUN_144b2df26(void)

void FUN_144b2df26(double *param_1,double *param_2,double *param_3,float *param_4,undefined8 param_5
                  ,float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  
  dVar4 = param_1[2] * 100000.0 + param_3[2];
  dVar6 = param_1[1] * 100000.0 + param_3[1];
  dVar18 = param_3[2] + param_2[2];
  dVar12 = param_3[1] + param_2[1];
  dVar3 = *param_1 * 100000.0 + *param_3;
  dVar15 = *param_3 + *param_2;
  dVar11 = dVar18 - dVar4;
  dVar14 = dVar12 - dVar6;
  dVar2 = dVar15 - dVar3;
  fVar21 = (float)SQRT(dVar11 * dVar11 + dVar2 * dVar2 + dVar14 * dVar14);
  fVar7 = *(float *)(param_1 + 3) * 100000.0 + 500.0;
  if (fVar21 < fVar7) {
    dVar19 = 1.0 / (double)fVar21;
    dVar15 = (double)fVar7;
    dVar18 = dVar11 * dVar19 * dVar15 + dVar4;
    dVar12 = dVar14 * dVar19 * dVar15 + dVar6;
    dVar15 = dVar2 * dVar19 * dVar15 + dVar3;
  }
  *param_6 = (float)dVar15;
  param_6[1] = (float)dVar12;
  param_6[2] = (float)dVar18;
  dVar2 = (double)(float)dVar18 - dVar4;
  dVar12 = (double)(float)dVar12 - dVar6;
  dVar15 = (double)(float)dVar15 - dVar3;
  *param_7 = (float)dVar3;
  param_7[1] = (float)dVar6;
  param_7[2] = (float)dVar4;
  param_7[3] = (float)SQRT(dVar2 * dVar2 + dVar15 * dVar15 + dVar12 * dVar12);
  fVar7 = (float)(((double)param_6[2] - dVar4) * 9.999999747378752e-06);
  fVar21 = (float)(((double)param_6[1] - dVar6) * 9.999999747378752e-06);
  fVar5 = (float)(((double)*param_6 - dVar3) * 9.999999747378752e-06);
  fVar8 = fVar7 * fVar7 + fVar5 * fVar5 + fVar21 * fVar21;
  if (1e-08 < fVar8) {
    fVar8 = 1.0 / SQRT(fVar8);
    fVar5 = fVar5 * fVar8;
    fVar21 = fVar21 * fVar8;
    fVar7 = fVar7 * fVar8;
  }
  fVar8 = *param_4;
  fVar16 = param_4[1];
  fVar17 = param_4[2];
  fVar9 = fVar8 * fVar21 - fVar5 * fVar16;
  fVar13 = fVar17 * fVar5 - fVar7 * fVar8;
  fVar10 = fVar16 * fVar7 - fVar21 * fVar17;
  fVar20 = fVar9 * fVar9 + fVar10 * fVar10 + fVar13 * fVar13;
  if (1e-08 < fVar20) {
    fVar20 = 1.0 / SQRT(fVar20);
    fVar10 = fVar10 * fVar20;
    fVar13 = fVar13 * fVar20;
    fVar9 = fVar9 * fVar20;
  }
  if (0.999 < ABS(fVar17 * fVar7 + fVar8 * fVar5 + fVar16 * fVar21)) {
    fVar8 = (float)(~-(uint)(0.0 <= fVar7) & 0xbf800000 | -(uint)(0.0 <= fVar7) & 0x3f800000);
    fVar9 = -1.0 / (fVar7 + fVar8);
    fVar10 = fVar5 * fVar21 * fVar9;
    fVar13 = fVar21 * fVar21 * fVar9 + fVar8;
    fVar17 = -fVar8 * fVar5;
    fVar16 = fVar8 * fVar10;
    fVar8 = fVar5 * fVar5 * fVar8 * fVar9 + 1.0;
    fVar9 = -fVar21;
  }
  else {
    fVar17 = fVar5 * fVar13 - fVar10 * fVar21;
    fVar16 = fVar7 * fVar10 - fVar9 * fVar5;
    fVar8 = fVar21 * fVar9 - fVar13 * fVar7;
    fVar20 = fVar17 * fVar17 + fVar8 * fVar8 + fVar16 * fVar16;
    if (1e-08 < fVar20) {
      fVar20 = 1.0 / SQRT(fVar20);
      fVar8 = fVar8 * fVar20;
      fVar16 = fVar16 * fVar20;
      fVar17 = fVar17 * fVar20;
    }
  }
  *param_8 = fVar8;
  fVar8 = param_8[3];
  fVar20 = param_8[7];
  fVar1 = param_8[0xb];
  param_8[1] = fVar16;
  param_8[2] = fVar17;
  param_8[3] = param_8[0xc];
  param_8[4] = fVar10;
  param_8[5] = fVar13;
  param_8[6] = fVar9;
  param_8[7] = param_8[0xd];
  param_8[8] = fVar5;
  param_8[9] = fVar21;
  param_8[10] = fVar7;
  param_8[0xb] = param_8[0xe];
  param_8[0xc] = fVar8;
  param_8[0xd] = fVar20;
  param_8[0xe] = fVar1;
  return;
}



// FUNCTION 144b2e414 FUN_144b2e414 body=378 status=ok
// SIG undefined FUN_144b2e414(void)

void FUN_144b2e414(longlong param_1,undefined8 *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
  iVar2 = *(int *)(param_1 + 0x58);
  iVar9 = 0x20;
  if (0x20 < iVar2 + param_3) {
    iVar9 = iVar2 + param_3;
  }
  uVar11 = (param_3 - iVar9) + 0x20;
  lVar10 = (longlong)param_4;
  if (0 < (int)uVar11) {
    iVar1 = uVar11 + iVar2;
    iVar4 = iVar2;
    if ((int)(*(uint *)(param_1 + 0x5c) & 0x7fffffff) < iVar1) {
      FUN_147e2d0b6((longlong *)(param_1 + 0x50),iVar1);
      iVar4 = *(int *)(param_1 + 0x58);
    }
    if ((iVar4 < iVar1) || (iVar1 < iVar4)) {
      *(int *)(param_1 + 0x58) = iVar1;
    }
    lVar5 = (longlong)iVar2;
    uVar6 = (ulonglong)uVar11;
    puVar7 = param_2;
    do {
      puVar3 = (undefined8 *)*puVar7;
      *puVar3 = 0x100010000;
      *(undefined1 *)(puVar3 + 1) = 0;
      *(undefined4 *)(puVar3 + 3) = 0;
      puVar3[8] = 0;
      *(undefined8 **)(*(longlong *)(param_1 + 0x50) + lVar5 * 8) = puVar3;
      lVar5 = lVar5 + 1;
      puVar7 = (undefined8 *)((longlong)puVar7 + lVar10);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  if ((int)uVar11 < param_3) {
    iVar9 = iVar9 + -0x20;
    plVar8 = (longlong *)((longlong)param_2 + (int)uVar11 * lVar10);
    do {
      puVar7 = (undefined8 *)*plVar8;
      *(undefined4 *)(puVar7 + 3) = 0;
      if ((-1 < (longlong)*(int *)((longlong)puVar7 + 0x1c)) && (puVar7[2] != 0)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,puVar7[2],(longlong)*(int *)((longlong)puVar7 + 0x1c) << 3
                  );
      }
      puVar7[2] = 0;
      *(undefined4 *)((longlong)puVar7 + 0x1c) = 0x80000000;
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + -1;
      *puVar7 = *(undefined8 *)(param_1 + 0x160);
      *(undefined8 **)(param_1 + 0x160) = puVar7;
      plVar8 = (longlong *)((longlong)plVar8 + lVar10);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
                    /* WARNING: Could not recover jumptable at 0x000144b2e4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x198));
  return;
}



// FUNCTION 144b2e5a2 FUN_144b2e5a2 body=450 status=ok
// SIG undefined FUN_144b2e5a2(void)

void FUN_144b2e5a2(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,int param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  LPCRITICAL_SECTION local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 != 0) {
    uVar12 = (ulonglong)param_3;
    local_70 = (LPCRITICAL_SECTION)(param_1 + 0x170);
    EnterCriticalSection(local_70);
    iVar13 = *(int *)(param_1 + 0x24);
    *(uint *)(param_1 + 0x24) = param_3 + iVar13;
    if (0 < (int)param_3) {
      lVar8 = (longlong)param_5;
      local_78 = (longlong *)(param_1 + 0x28);
      iVar15 = 0;
      local_68 = lVar8;
      local_60 = uVar12;
      do {
        puVar2 = (ushort *)*param_2;
        *puVar2 = (ushort)iVar13;
        puVar1 = puVar2 + 1;
        *puVar1 = *puVar1 - 1;
        if (*puVar1 == 0) {
          (**(code **)(**(longlong **)(puVar2 + 0x20) + 0x10))
                    (*(longlong **)(puVar2 + 0x20),&local_58);
          iVar7 = (int)local_58;
          if ((int)local_58 < 1) {
            iVar7 = 0;
          }
          uVar6 = (ushort)iVar7;
          if (0xfffe < iVar7) {
            uVar6 = 0xffff;
          }
          puVar2[2] = uVar6;
          *(bool *)(puVar2 + 4) = local_58._4_4_ == 1;
          puVar2[2] = (short)*(undefined4 *)(puVar2 + 2) +
                      (ushort)((short)*(undefined4 *)(puVar2 + 2) == 0);
          uVar6 = *puVar2;
          uVar14 = *(uint *)(param_1 + 0x30);
          uVar10 = uVar14;
          if ((int)(*(uint *)(param_1 + 0x34) & 0x7fffffff) <= (int)uVar14) {
            FUN_145c48fb6(local_78,uVar14 + 1);
            uVar10 = *(uint *)(param_1 + 0x30);
          }
          lVar8 = *(longlong *)(param_1 + 0x28);
          *(uint *)(lVar8 + (longlong)(int)uVar10 * 0x10) = (uint)uVar6;
          *(ushort **)(lVar8 + 8 + (longlong)(int)uVar10 * 0x10) = puVar2;
          *(uint *)(param_1 + 0x30) = uVar14 + 1;
          while (uVar10 = (int)(uVar14 - 1) >> 1, -1 < (int)uVar10) {
            lVar8 = *local_78;
            if (*(uint *)(lVar8 + (ulonglong)uVar10 * 0x10) <
                *(uint *)(lVar8 + (longlong)(int)uVar14 * 0x10)) break;
            puVar9 = (undefined8 *)((longlong)(int)uVar14 * 0x10 + lVar8);
            puVar11 = (undefined8 *)((ulonglong)uVar10 * 0x10 + lVar8);
            uVar3 = *puVar9;
            uVar4 = puVar9[1];
            uVar5 = puVar11[1];
            *puVar9 = *puVar11;
            puVar9[1] = uVar5;
            local_58._0_4_ = (int)uVar3;
            local_58._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar4;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
            *(int *)puVar11 = (int)local_58;
            *(int *)((longlong)puVar11 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_50._4_4_;
            uVar14 = uVar10;
            local_58 = uVar3;
            uStack_50 = uVar4;
          }
          LOCK();
          *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + (uint)puVar2[2];
          UNLOCK();
          lVar8 = local_68;
          uVar12 = local_60;
        }
        param_2 = (undefined8 *)((longlong)param_2 + lVar8);
        iVar15 = iVar15 + 1;
        iVar13 = iVar13 + 1;
      } while (iVar15 != (int)uVar12);
    }
    LeaveCriticalSection(local_70);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2e76e FUN_144b2e76e body=191 status=ok
// SIG undefined FUN_144b2e76e(void)

void FUN_144b2e76e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x358) == '\x01') {
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  if (*(char *)(param_1 + 0x2b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  plVar3 = *(longlong **)(param_1 + 0x280);
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
  plVar3 = *(longlong **)(param_1 + 0x110);
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
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    if (*(longlong *)(param_1 + 0xc0) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  return;
}



// FUNCTION 144b2e82e FUN_144b2e82e body=143 status=ok
// SIG undefined FUN_144b2e82e(void)

void FUN_144b2e82e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if ((((*(longlong **)(param_1 + 0x988) != (longlong *)0x0) && (*(int *)(param_1 + 0x984) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x980), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x984))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      iVar2 = *(int *)(param_1 + 0x970);
      lVar3 = (**(code **)(**(longlong **)(param_1 + 0x988) + 0x10))();
      *(bool *)(lVar3 + 0x148) = 0 < iVar2;
      if (0 < iVar2) {
        *(undefined8 *)(lVar3 + 0x150) = DAT_14c872be0;
      }
    }
  }
  return;
}



// FUNCTION 144b2e8e2 FUN_144b2e8e2 body=17 status=ok
// SIG undefined FUN_144b2e8e2(void)

undefined8 * FUN_144b2e8e2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  return param_1;
}



// FUNCTION 144b2e8f4 FUN_144b2e8f4 body=54 status=ok
// SIG undefined FUN_144b2e8f4(void)

void FUN_144b2e8f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[2] = param_2[2];
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = DAT_14cb1c868;
  param_1[3] = DAT_14cb1c860;
  param_1[4] = uVar1;
  param_1[5] = DAT_14cb1c870;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



// FUNCTION 144b2e940 FUN_144b2e940 body=122 status=ok
// SIG undefined FUN_144b2e940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_144b2e940(longlong *param_1)

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
LAB_144b2e98e:
          if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) == 0) {
            return param_1;
          }
        }
      }
      else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
        lVar2 = 0;
        goto LAB_144b2e98e;
      }
    }
    param_1 = (longlong *)*param_1;
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  } while( true );
}



// FUNCTION 144b2e9ba FUN_144b2e9ba body=77 status=ok
// SIG undefined FUN_144b2e9ba(void)

void FUN_144b2e9ba(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    plVar1 = (longlong *)param_1[2];
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6();
    }
    if (lVar2 == *plVar1) break;
    lVar2 = FUN_144b2e940(*(undefined8 *)*param_1);
    *param_1 = lVar2;
  }
  return;
}



// FUNCTION 144b2eb80 FUN_144b2eb80 body=587 status=ok
// SIG undefined FUN_144b2eb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b2eb80(longlong *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint *puVar8;
  ulonglong uVar9;
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar14 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  longlong lVar10;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar5 = 4;
  if (4 < param_2) {
    iVar5 = param_2;
  }
  uVar3 = iVar5 * 2 - 1;
  uVar3 = (int)uVar3 >> 0x10 | uVar3;
  uVar3 = (int)uVar3 >> 8 | uVar3;
  uVar3 = (int)uVar3 >> 4 | uVar3;
  uVar3 = (int)uVar3 >> 2 | uVar3;
  uVar3 = (int)uVar3 >> 1 | uVar3;
  uVar1 = uVar3 + 1;
  lVar6 = (longlong)(int)uVar1 << 3;
  if (*(code **)(PTR_vftable_14c6e47a0 + 8) == FUN_14475e3a6) {
    local_38 = lVar6;
    if (*(code **)(PTR_vftable_14c6e47a0 + 0x10) == FUN_14486e206) {
      lVar6 = (*DAT_14c787670)(CONCAT71(0x14486e2,DAT_14c6e47a8),&local_38,DAT_14c6e47ac);
    }
    else {
      lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 0x10))(&PTR_vftable_14c6e47a0,lVar6,&local_38);
    }
  }
  else {
    lVar6 = (**(code **)(PTR_vftable_14c6e47a0 + 8))(&PTR_vftable_14c6e47a0);
  }
  auVar2 = _DAT_149931e80;
  if (-1 < (int)uVar3) {
    lVar10 = (ulonglong)uVar1 - 1;
    auVar11._8_4_ = (int)lVar10;
    auVar11._0_8_ = lVar10;
    auVar11._12_4_ = (int)((ulonglong)lVar10 >> 0x20);
    auVar13 = pmovsxbq(in_XMM1,0x302);
    auVar14 = pmovsxbq(in_XMM2,0x100);
    uVar7 = 0;
    auVar11 = auVar11 ^ _DAT_149931e80;
    lVar10 = auVar11._0_8_;
    auVar15 = pmovsxbq(in_XMM5,0x404);
    do {
      auVar16 = auVar14 ^ auVar2;
      lVar12 = auVar11._8_8_;
      if ((bool)(~(lVar10 < auVar16._0_8_) & 1)) {
        *(undefined4 *)(lVar6 + 4 + uVar7) = 0xffffffff;
      }
      if (auVar16._8_8_ <= lVar12) {
        *(undefined4 *)(lVar6 + 0xc + uVar7) = 0xffffffff;
      }
      auVar16 = auVar13 ^ auVar2;
      if (auVar16._0_8_ <= lVar10) {
        *(undefined4 *)(lVar6 + 0x14 + uVar7) = 0xffffffff;
      }
      if (auVar16._8_8_ <= lVar12) {
        *(undefined4 *)(lVar6 + 0x1c + uVar7) = 0xffffffff;
      }
      lVar12 = auVar14._8_8_;
      auVar14._0_8_ = auVar14._0_8_ + auVar15._0_8_;
      auVar14._8_8_ = lVar12 + auVar15._8_8_;
      lVar12 = auVar13._8_8_;
      auVar13._0_8_ = auVar13._0_8_ + auVar15._0_8_;
      auVar13._8_8_ = lVar12 + auVar15._8_8_;
      uVar7 = uVar7 + 0x20;
    } while (((ulonglong)uVar1 * 8 + 0x18 & 0xffffffffffffffe0) != uVar7);
  }
  lVar10 = *param_1;
  if ((lVar10 == 0) || (*(int *)(lVar10 + 4) == -2)) {
    *param_1 = lVar6;
    *(uint *)(param_1 + 1) = uVar3;
  }
  else {
    uVar1 = *(uint *)(param_1 + 1);
    uVar7 = (ulonglong)uVar1;
    *param_1 = lVar6;
    *(uint *)(param_1 + 1) = uVar3;
    if (-1 < (int)uVar1) {
      uVar7 = uVar7 + 1;
      uVar4 = 0;
      do {
        uVar1 = *(uint *)(lVar10 + 4 + uVar4 * 8);
        if (-1 < (int)uVar1) {
          uVar3 = *(uint *)(lVar10 + uVar4 * 8);
          lVar6 = *param_1;
          uVar9 = (ulonglong)(*(uint *)(param_1 + 1) & uVar3);
          if (*(int *)(lVar6 + 4 + uVar9 * 8) < 0) {
            puVar8 = (uint *)(lVar6 + uVar9 * 8);
          }
          else {
            do {
              uVar9 = uVar9 + 1 & (longlong)(int)*(uint *)(param_1 + 1);
              puVar8 = (uint *)(lVar6 + uVar9 * 8);
            } while (-1 < (int)puVar8[1]);
          }
          *puVar8 = uVar3;
          puVar8[1] = uVar1;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar7);
    }
    (*DAT_14c787678)(CONCAT71((int7)(uVar7 >> 8),DAT_14c6e47a8),lVar10,0);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2edcc FUN_144b2edcc body=470 status=ok
// SIG undefined FUN_144b2edcc(void)

void FUN_144b2edcc(longlong param_1,undefined8 *param_2,float *param_3)

{
  double dVar1;
  uint uVar3;
  longlong lVar4;
  PSRWLOCK pRVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  LPVOID pvVar9;
  longlong lVar10;
  longlong *plVar11;
  double dVar2;
  
  if (((((*(int *)(param_1 + 0xdc) != 0) && (uVar3 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0xdc))))) &&
     ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x138);
    if (lVar10 != 0) {
      plVar11 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x138);
      if (((plVar11 == (longlong *)0x0) || (*(longlong *)(lVar10 + 8) == 0)) ||
         ((lVar4 = *(longlong *)(*(longlong *)(lVar10 + 8) + 0x260), lVar4 == 0 ||
          (lVar4 = *(longlong *)(lVar4 + 0x38), lVar4 == 0)))) {
        lVar10 = *(longlong *)(lVar10 + 0x40);
        dVar6 = *(double *)(lVar10 + 0x28);
        dVar1 = *(double *)(lVar10 + 0x30);
        dVar2 = *(double *)(lVar10 + 0x30);
        uVar7 = *(undefined8 *)(lVar10 + 0x40);
        uVar8 = *(undefined8 *)(lVar10 + 0x48);
        *param_3 = (float)*(double *)(lVar10 + 0x20) * 0.01;
        param_3[1] = (float)dVar6 * 0.01;
        param_3[2] = (float)dVar1 * 0.01;
        param_3[3] = (float)dVar2 * 0.01;
        *param_2 = uVar7;
        param_2[1] = uVar8;
      }
      else {
        pRVar5 = *(PSRWLOCK *)(lVar4 + 0x218);
        pvVar9 = TlsGetValue(*(DWORD *)&pRVar5[1].Ptr);
        TlsSetValue(*(DWORD *)&pRVar5[1].Ptr,
                    (LPVOID)((ulonglong)((int)pvVar9 + 1) | (ulonglong)pvVar9 & 0xffffffff00000000))
        ;
        if ((int)pvVar9 + (int)((ulonglong)pvVar9 >> 0x20) == 0) {
          AcquireSRWLockShared(pRVar5);
        }
        lVar10 = *plVar11;
        if (lVar10 != 0) {
          lVar10 = *(longlong *)(lVar10 + 0x40);
          dVar6 = *(double *)(lVar10 + 0x28);
          dVar1 = *(double *)(lVar10 + 0x30);
          dVar2 = *(double *)(lVar10 + 0x30);
          uVar7 = *(undefined8 *)(lVar10 + 0x40);
          uVar8 = *(undefined8 *)(lVar10 + 0x48);
          *param_3 = (float)*(double *)(lVar10 + 0x20) * 0.01;
          param_3[1] = (float)dVar6 * 0.01;
          param_3[2] = (float)dVar1 * 0.01;
          param_3[3] = (float)dVar2 * 0.01;
          *param_2 = uVar7;
          param_2[1] = uVar8;
        }
        pRVar5 = *(PSRWLOCK *)(lVar4 + 0x218);
        pvVar9 = TlsGetValue(*(DWORD *)&pRVar5[1].Ptr);
        TlsSetValue(*(DWORD *)&pRVar5[1].Ptr,
                    (LPVOID)((ulonglong)pvVar9 & 0xffffffff00000000 | (ulonglong)((int)pvVar9 - 1)))
        ;
        if (1 - (int)pvVar9 == (int)((ulonglong)pvVar9 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x000144b2ef5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockShared(pRVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 144b2efa2 FUN_144b2efa2 body=594 status=ok
// SIG undefined FUN_144b2efa2(void)

void FUN_144b2efa2(longlong param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  PSRWLOCK pRVar3;
  LPVOID pvVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (((((*(int *)(param_1 + 0xdc) == 0) || (uVar1 = *(uint *)(param_1 + 0xd8), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 == 0 ||
       (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0xdc))))) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x138);
    if (lVar5 != 0) {
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0xd0) + 0x138);
      if (((plVar6 == (longlong *)0x0) || (*(longlong *)(lVar5 + 8) == 0)) ||
         ((lVar2 = *(longlong *)(*(longlong *)(lVar5 + 8) + 0x260), lVar2 == 0 ||
          (lVar2 = *(longlong *)(lVar2 + 0x38), lVar2 == 0)))) {
        lVar5 = *(longlong *)(lVar5 + 0x40);
        fVar10 = 0.0;
        if (lVar5 == 0) {
          fVar8 = 0.0;
          fVar7 = 0.0;
        }
        else {
          fVar8 = 0.0;
          fVar7 = 0.0;
          fVar10 = 0.0;
          if (*(char *)(lVar5 + 0x90) != '\0') {
            fVar10 = *(float *)(lVar5 + 0xa0);
            fVar8 = *(float *)(lVar5 + 0x9c);
            fVar7 = *(float *)(lVar5 + 0x98);
          }
        }
        *param_2 = fVar7 * 0.01;
        param_2[1] = fVar8 * 0.01;
        param_2[2] = fVar10 * 0.01;
        param_2[3] = fVar10 * 0.01;
      }
      else {
        pRVar3 = *(PSRWLOCK *)(lVar2 + 0x218);
        pvVar4 = TlsGetValue(*(DWORD *)&pRVar3[1].Ptr);
        TlsSetValue(*(DWORD *)&pRVar3[1].Ptr,
                    (LPVOID)((ulonglong)((int)pvVar4 + 1) | (ulonglong)pvVar4 & 0xffffffff00000000))
        ;
        if ((int)pvVar4 + (int)((ulonglong)pvVar4 >> 0x20) == 0) {
          AcquireSRWLockShared(pRVar3);
        }
        lVar5 = *plVar6;
        if (lVar5 == 0) {
          fVar7 = 0.0;
          fVar8 = 0.0;
          fVar9 = 0.0;
          fVar10 = 0.0;
        }
        else {
          lVar5 = *(longlong *)(lVar5 + 0x40);
          fVar10 = 0.0;
          if (lVar5 == 0) {
            fVar8 = 0.0;
            fVar7 = 0.0;
          }
          else {
            fVar8 = 0.0;
            fVar7 = 0.0;
            fVar10 = 0.0;
            if (*(char *)(lVar5 + 0x90) != '\0') {
              fVar10 = *(float *)(lVar5 + 0xa0);
              fVar8 = *(float *)(lVar5 + 0x9c);
              fVar7 = *(float *)(lVar5 + 0x98);
            }
          }
          fVar7 = fVar7 * 0.01;
          fVar8 = fVar8 * 0.01;
          fVar9 = fVar10 * 0.01;
          fVar10 = fVar10 * 0.01;
        }
        *param_2 = fVar7;
        param_2[1] = fVar8;
        param_2[2] = fVar9;
        param_2[3] = fVar10;
        pRVar3 = *(PSRWLOCK *)(lVar2 + 0x218);
        pvVar4 = TlsGetValue(*(DWORD *)&pRVar3[1].Ptr);
        TlsSetValue(*(DWORD *)&pRVar3[1].Ptr,
                    (LPVOID)((ulonglong)pvVar4 & 0xffffffff00000000 | (ulonglong)((int)pvVar4 - 1)))
        ;
        if (1 - (int)pvVar4 == (int)((ulonglong)pvVar4 >> 0x20)) {
                    /* WARNING: Could not recover jumptable at 0x000144b2f164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockShared(pRVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 144b2f1f4 FUN_144b2f1f4 body=321 status=ok
// SIG undefined FUN_144b2f1f4(void)

undefined8 FUN_144b2f1f4(longlong *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_1[0x78];
  if (plVar5 != (longlong *)0x0) goto LAB_144b2f208;
  pcVar2 = *(code **)(*param_1 + 0x5e8);
  if (pcVar2 == FUN_140972dde) {
    lVar4 = param_1[0x76];
    if (lVar4 == 0) {
      pcVar2 = *(code **)(*param_1 + 0x5f8);
      if (pcVar2 == FUN_144784df4) {
        if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
            return 0;
          }
          uVar1 = *(uint *)(param_1 + 0xeb6);
          if ((int)uVar1 < 0) {
            return 0;
          }
          if (DAT_14c9647dc <= (int)uVar1) {
            return 0;
          }
          plVar5 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
          if (plVar5 == (longlong *)0x0) {
            return 0;
          }
          if ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x75b4)) {
            return 0;
          }
          if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
            return 0;
          }
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar5;
          }
          else {
            lVar4 = 0;
          }
          lVar4 = lVar4 + 0x110;
        }
        else {
          lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
        }
        if (lVar4 == 0) {
          return 0;
        }
        lVar4 = *(longlong *)(lVar4 + 0x20);
      }
      else {
        lVar4 = (*pcVar2)(param_1);
      }
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = *(longlong *)(lVar4 + 0x3b0);
      goto LAB_144b2f2e8;
    }
  }
  else {
    lVar4 = (*pcVar2)(param_1);
LAB_144b2f2e8:
    if (lVar4 == 0) {
      return 0;
    }
  }
  if (((*(byte *)(lVar4 + 0x39a) & 8) != 0) ||
     ((plVar5 = (longlong *)param_1[0x78], plVar5 == (longlong *)0x0 &&
      (plVar5 = (longlong *)param_1[0x2d], plVar5 == (longlong *)0x0)))) {
    return 0;
  }
LAB_144b2f208:
                    /* WARNING: Could not recover jumptable at 0x000144b2f210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(*plVar5 + 0x498))();
  return uVar3;
}



// FUNCTION 144b2f36a FUN_144b2f36a body=26 status=ok
// SIG undefined FUN_144b2f36a(void)

void FUN_144b2f36a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 144b2f384 FUN_144b2f384 body=54 status=ok
// SIG undefined FUN_144b2f384(void)

longlong * FUN_144b2f384(longlong *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  if (UNRECOVERED_JUMPTABLE == (code *)&LAB_144a13144) {
    param_1 = param_1 + 0x25d;
  }
  else {
    if (UNRECOVERED_JUMPTABLE != (code *)&LAB_144a1313c) {
                    /* WARNING: Could not recover jumptable at 0x000144b2f3b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar1 = (longlong *)(*UNRECOVERED_JUMPTABLE)();
      return plVar1;
    }
    param_1 = param_1 + 0x13;
  }
  return param_1;
}



// FUNCTION 144b2f3ba FUN_144b2f3ba body=178 status=ok
// SIG undefined FUN_144b2f3ba(void)

longlong FUN_144b2f3ba(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 2);
  if ((plVar2 != (longlong *)0x0) && (param_1[1] != 0)) {
    uVar1 = *param_1;
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(uint *)(lVar3 + 0x10) == param_1[1])) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar2 + 0x30) == (code *)&LAB_14493be02) {
        plVar2 = plVar2 + 0x4b;
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x30))(plVar2);
      }
      uVar1 = param_1[4];
      if ((-1 < (longlong)(int)uVar1) &&
         ((int)uVar1 < (int)plVar2[(ulonglong)(byte)param_1[5] * 2 + 0x10])) {
        return (longlong)(int)uVar1 * 0x30 + plVar2[(ulonglong)(byte)param_1[5] * 2 + 0xf];
      }
    }
  }
  return 0;
}



// FUNCTION 144b2f46c FUN_144b2f46c body=27 status=ok
// SIG undefined FUN_144b2f46c(void)

undefined8 FUN_144b2f46c(longlong *param_1)

{
  undefined8 uVar1;
  
  if ((*param_1 == 0) || ((-1 < (short)param_1[1] && (param_1[2] == 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 144b2f49a FUN_144b2f49a body=8 status=ok
// SIG undefined FUN_144b2f49a(void)

bool FUN_144b2f49a(longlong *param_1)

{
  return *param_1 != 0;
}



// FUNCTION 144b2f4a2 FUN_144b2f4a2 body=26 status=ok
// SIG undefined FUN_144b2f4a2(void)

undefined8 * FUN_144b2f4a2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)(param_1 + 0x90);
  puVar3 = param_2;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 144b2f5e8 FUN_144b2f5e8 body=635 status=ok
// SIG undefined FUN_144b2f5e8(void)

void FUN_144b2f5e8(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float local_e4;
  char local_e0 [32];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&uStack_98;
  pbVar5 = *(byte **)(param_1 + 0x10);
  *(byte **)(param_1 + 0x10) = pbVar5 + 1;
  puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*pbVar5 * 8);
  if (puVar6 != (undefined8 *)0x0) {
    local_e0[0] = '\0';
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_60 = param_1;
    if (*(int *)(puVar6 + 1) == 0) {
      plVar8 = (longlong *)0x0;
    }
    else {
      plVar8 = (longlong *)*puVar6;
    }
    if (*(code **)(*plVar8 + 0x58) == FUN_144b34dfa) {
      lVar7 = plVar8[3];
      uVar3 = *(ushort *)(pbVar5 + 1);
      *(byte **)(param_1 + 0x10) = pbVar5 + 3;
      uVar11 = uVar3 & 0x7fff;
      if ((short)uVar3 < 0) {
        lVar12 = (ulonglong)(uVar11 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70);
      }
      else {
        iVar13 = **(int **)(param_1 + 0x20);
        lVar12 = 0;
        if (iVar13 <= (int)uVar11) {
          do {
            uVar11 = uVar11 - iVar13;
            iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
            lVar12 = lVar12 + 1;
          } while (iVar13 <= (int)uVar11);
        }
        lVar12 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8);
      }
      uVar4 = *(ushort *)(pbVar5 + 3);
      *(byte **)(param_1 + 0x10) = pbVar5 + 5;
      uVar11 = uVar4 & 0x7fff;
      if (uVar11 == 0x7fff) {
        pfVar10 = &local_e4;
      }
      else {
        pfVar10 = (float *)((ulonglong)(uVar11 * *(int *)(param_1 + 0x80)) +
                            *(longlong *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x4c) * 4);
      }
      if (0 < *(int *)(param_1 + 0x40)) {
        pfVar9 = (float *)(lVar12 + (longlong)(int)(*(int *)(param_1 + 0x4c) * (uint)(uVar3 >> 0xf))
                                    * 4);
        iVar13 = 0;
        do {
          fVar1 = *(float *)(lVar7 + 0x54);
          fVar15 = (*pfVar9 - *(float *)(lVar7 + 0x48)) * *(float *)(lVar7 + 0x50) * fVar1;
          if (fVar1 <= fVar15) {
            fVar15 = fVar1;
          }
          if (fVar15 <= 0.0) {
            fVar15 = 0.0;
          }
          auVar17 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),3);
          fVar16 = auVar17._0_4_;
          fVar2 = *(float *)(*(longlong *)(lVar7 + 0x38) + (longlong)(int)fVar16 * 4);
          *pfVar10 = (*(float *)(*(longlong *)(lVar7 + 0x38) +
                                (longlong)
                                (int)(float)(~-(uint)(fVar16 < fVar1) & (uint)fVar16 |
                                            (uint)(fVar16 + 1.0) & -(uint)(fVar16 < fVar1)) * 4) -
                     fVar2) * (fVar15 - fVar16) + fVar2;
          pfVar10 = pfVar10 + (int)(uint)(uVar11 != 0x7fff);
          iVar13 = iVar13 + 1;
          piVar14 = (int *)(local_60 + 0x40);
          if (local_e0[0] != '\0') {
            piVar14 = (int *)((longlong)&uStack_a8 + 4);
          }
          pfVar9 = pfVar9 + (uVar3 >> 0xf);
        } while (iVar13 < *piVar14);
      }
    }
    else {
      (**(code **)(*plVar8 + 0x58))(plVar8,local_e0);
    }
  }
  if ((local_38 ^ (ulonglong)&uStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b2f8c8 FUN_144b2f8c8 body=95 status=ok
// SIG undefined FUN_144b2f8c8(void)

void FUN_144b2f8c8(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *pfVar3 = *pfVar1 + *pfVar2;
      pfVar3[1] = fVar9 + fVar12;
      pfVar3[2] = fVar10 + fVar13;
      pfVar3[3] = fVar11 + fVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b2f928 FUN_144b2f928 body=140 status=ok
// SIG undefined FUN_144b2f928(void)

void FUN_144b2f928(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *pfVar2 = *pfVar1 + fVar3;
      pfVar2[1] = fVar7 + fVar3;
      pfVar2[2] = fVar8 + fVar3;
      pfVar2[3] = fVar9 + fVar3;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b2f9b4 FUN_144b2f9b4 body=144 status=ok
// SIG undefined FUN_144b2f9b4(void)

void FUN_144b2f9b4(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *pfVar2 = *pfVar1 + fVar3;
      pfVar2[1] = fVar8 + fVar3;
      pfVar2[2] = fVar9 + fVar3;
      pfVar2[3] = fVar10 + fVar3;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b2fa44 FUN_144b2fa44 body=167 status=ok
// SIG undefined FUN_144b2fa44(void)

void FUN_144b2fa44(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar3;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar9 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    pfVar6 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                      *(longlong *)(param_1 + 0x70));
    fVar9 = fVar9 + fVar1;
    do {
      *pfVar6 = fVar9;
      pfVar6[1] = fVar9;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar9;
      pfVar6 = pfVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144b2faec FUN_144b2faec body=95 status=ok
// SIG undefined FUN_144b2faec(void)

void FUN_144b2faec(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *pfVar3 = *pfVar1 - *pfVar2;
      pfVar3[1] = fVar9 - fVar12;
      pfVar3[2] = fVar10 - fVar13;
      pfVar3[3] = fVar11 - fVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b2fb4c FUN_144b2fb4c body=140 status=ok
// SIG undefined FUN_144b2fb4c(void)

void FUN_144b2fb4c(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *pfVar2 = fVar3 - *pfVar1;
      pfVar2[1] = fVar3 - fVar7;
      pfVar2[2] = fVar3 - fVar8;
      pfVar2[3] = fVar3 - fVar9;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b2fbd8 FUN_144b2fbd8 body=144 status=ok
// SIG undefined FUN_144b2fbd8(void)

void FUN_144b2fbd8(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *pfVar2 = *pfVar1 - fVar3;
      pfVar2[1] = fVar8 - fVar3;
      pfVar2[2] = fVar9 - fVar3;
      pfVar2[3] = fVar10 - fVar3;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b2fc68 FUN_144b2fc68 body=167 status=ok
// SIG undefined FUN_144b2fc68(void)

void FUN_144b2fc68(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar3;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar9 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    pfVar6 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                      *(longlong *)(param_1 + 0x70));
    fVar9 = fVar9 - fVar1;
    do {
      *pfVar6 = fVar9;
      pfVar6[1] = fVar9;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar9;
      pfVar6 = pfVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144b2fd10 FUN_144b2fd10 body=95 status=ok
// SIG undefined FUN_144b2fd10(void)

void FUN_144b2fd10(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *pfVar3 = *pfVar1 * *pfVar2;
      pfVar3[1] = fVar9 * fVar12;
      pfVar3[2] = fVar10 * fVar13;
      pfVar3[3] = fVar11 * fVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b2fd70 FUN_144b2fd70 body=140 status=ok
// SIG undefined FUN_144b2fd70(void)

void FUN_144b2fd70(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *pfVar2 = *pfVar1 * fVar3;
      pfVar2[1] = fVar7 * fVar3;
      pfVar2[2] = fVar8 * fVar3;
      pfVar2[3] = fVar9 * fVar3;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b2fdfc FUN_144b2fdfc body=144 status=ok
// SIG undefined FUN_144b2fdfc(void)

void FUN_144b2fdfc(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *pfVar2 = *pfVar1 * fVar3;
      pfVar2[1] = fVar8 * fVar3;
      pfVar2[2] = fVar9 * fVar3;
      pfVar2[3] = fVar10 * fVar3;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b2fe8c FUN_144b2fe8c body=167 status=ok
// SIG undefined FUN_144b2fe8c(void)

void FUN_144b2fe8c(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float fVar9;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar2 = *puVar3;
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar9 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[1];
  uVar7 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar2) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar2 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    pfVar6 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                      *(longlong *)(param_1 + 0x70));
    fVar9 = fVar9 * fVar1;
    do {
      *pfVar6 = fVar9;
      pfVar6[1] = fVar9;
      pfVar6[2] = fVar9;
      pfVar6[3] = fVar9;
      pfVar6 = pfVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144b2ffb2 FUN_144b2ffb2 body=168 status=ok
// SIG undefined FUN_144b2ffb2(void)

void FUN_144b2ffb2(longlong param_1)

{
  uint *puVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar10 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar7 = **(int **)(param_1 + 0x20);
  lVar9 = 0;
  if (iVar7 <= (int)(uint)uVar4) {
    do {
      uVar10 = uVar10 - iVar7;
      iVar7 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
      lVar9 = lVar9 + 1;
    } while (iVar7 <= (int)uVar10);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) +
                    (longlong)(int)uVar10);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    do {
      auVar11._4_4_ = fVar2;
      auVar11._0_4_ = fVar2;
      auVar11._8_4_ = fVar2;
      auVar11._12_4_ = fVar2;
      auVar11 = divps(*(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar5)),auVar11);
      puVar1 = (uint *)(lVar8 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar1 = auVar11._0_4_ & -(uint)(1e-08 < ABS(fVar2));
      puVar1[1] = auVar11._4_4_ & -(uint)(1e-08 < ABS(fVar2));
      puVar1[2] = auVar11._8_4_ & -(uint)(1e-08 < ABS(fVar2));
      puVar1[3] = auVar11._12_4_ & -(uint)(1e-08 < ABS(fVar2));
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 144b3005a FUN_144b3005a body=118 status=ok
// SIG undefined FUN_144b3005a(void)

void FUN_144b3005a(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  longlong lVar21;
  
  puVar10 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar10;
  *(ushort **)(param_1 + 0x10) = puVar10 + 1;
  lVar21 = *(longlong *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x80);
  uVar6 = puVar10[1];
  *(ushort **)(param_1 + 0x10) = puVar10 + 2;
  uVar7 = puVar10[2];
  *(ushort **)(param_1 + 0x10) = puVar10 + 3;
  uVar8 = puVar10[3];
  *(ushort **)(param_1 + 0x10) = puVar10 + 4;
  iVar20 = *(int *)(param_1 + 0x44);
  if (0 < iVar20) {
    do {
      pfVar1 = (float *)(lVar21 + (ulonglong)((uint)uVar6 * iVar9));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = (float *)(lVar21 + (ulonglong)((uint)uVar5 * iVar9));
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(lVar21 + (ulonglong)((uint)uVar7 * iVar9));
      fVar17 = pfVar3[1];
      fVar18 = pfVar3[2];
      fVar19 = pfVar3[3];
      pfVar4 = (float *)(lVar21 + (ulonglong)((uint)uVar8 * iVar9));
      *pfVar4 = *pfVar1 * *pfVar2 + *pfVar3;
      pfVar4[1] = fVar11 * fVar14 + fVar17;
      pfVar4[2] = fVar12 * fVar15 + fVar18;
      pfVar4[3] = fVar13 * fVar16 + fVar19;
      lVar21 = lVar21 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  return;
}



// FUNCTION 144b300d0 FUN_144b300d0 body=162 status=ok
// SIG undefined FUN_144b300d0(void)

void FUN_144b300d0(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar8;
  uVar16 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  iVar18 = **(int **)(param_1 + 0x20);
  lVar17 = 0;
  if (iVar18 <= (int)(uint)uVar5) {
    do {
      uVar16 = uVar16 - iVar18;
      iVar18 = (*(int **)(param_1 + 0x20))[lVar17 + 1];
      lVar17 = lVar17 + 1;
    } while (iVar18 <= (int)uVar16);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar17 * 8) +
                    (longlong)(int)uVar16);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar18 = *(int *)(param_1 + 0x80);
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar7 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar17 + (ulonglong)((uint)uVar5 * iVar18));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar17 + (ulonglong)((uint)uVar6 * iVar18));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      pfVar3 = (float *)(lVar17 + (ulonglong)((uint)uVar7 * iVar18));
      *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
      pfVar3[1] = fVar9 * fVar4 + fVar12;
      pfVar3[2] = fVar10 * fVar4 + fVar13;
      pfVar3[3] = fVar11 * fVar4 + fVar14;
      lVar17 = lVar17 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b30172 FUN_144b30172 body=166 status=ok
// SIG undefined FUN_144b30172(void)

void FUN_144b30172(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  
  puVar9 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar9;
  *(ushort **)(param_1 + 0x10) = puVar9 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x80);
  uVar6 = puVar9[1];
  uVar19 = (uint)uVar6;
  *(ushort **)(param_1 + 0x10) = puVar9 + 2;
  iVar16 = **(int **)(param_1 + 0x20);
  lVar18 = 0;
  if (iVar16 <= (int)(uint)uVar6) {
    do {
      uVar19 = uVar19 - iVar16;
      iVar16 = (*(int **)(param_1 + 0x20))[lVar18 + 1];
      lVar18 = lVar18 + 1;
    } while (iVar16 <= (int)uVar19);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar18 * 8) +
                    (longlong)(int)uVar19);
  uVar6 = puVar9[2];
  *(ushort **)(param_1 + 0x10) = puVar9 + 3;
  uVar7 = puVar9[3];
  *(ushort **)(param_1 + 0x10) = puVar9 + 4;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      pfVar1 = (float *)(lVar17 + (ulonglong)((uint)uVar5 * iVar8));
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar2 = (float *)(lVar17 + (ulonglong)((uint)uVar6 * iVar8));
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)(lVar17 + (ulonglong)((uint)uVar7 * iVar8));
      *pfVar3 = *pfVar1 * fVar4 + *pfVar2;
      pfVar3[1] = fVar10 * fVar4 + fVar13;
      pfVar3[2] = fVar11 * fVar4 + fVar14;
      pfVar3[3] = fVar12 * fVar4 + fVar15;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 144b30218 FUN_144b30218 body=198 status=ok
// SIG undefined FUN_144b30218(void)

void FUN_144b30218(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar4 = *puVar6;
  uVar12 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar11 = *piVar7;
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar12 = uVar12 - iVar11;
      iVar11 = piVar7[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar12);
  }
  fVar14 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                     (longlong)(int)uVar12);
  uVar4 = puVar6[1];
  uVar12 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar11 = *piVar7;
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar12 = uVar12 - iVar11;
      iVar11 = piVar7[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar12);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar12);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  lVar13 = *(longlong *)(param_1 + 0x70);
  iVar11 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    fVar14 = fVar14 * fVar3;
    do {
      pfVar1 = (float *)(lVar13 + (ulonglong)((uint)uVar4 * iVar11));
      fVar3 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      pfVar2 = (float *)(lVar13 + (ulonglong)((uint)uVar5 * iVar11));
      *pfVar2 = *pfVar1 + fVar14;
      pfVar2[1] = fVar3 + fVar14;
      pfVar2[2] = fVar8 + fVar14;
      pfVar2[3] = fVar9 + fVar14;
      lVar13 = lVar13 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b302de FUN_144b302de body=166 status=ok
// SIG undefined FUN_144b302de(void)

void FUN_144b302de(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  int iVar8;
  ushort *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  
  puVar9 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar9;
  *(ushort **)(param_1 + 0x10) = puVar9 + 1;
  lVar17 = *(longlong *)(param_1 + 0x70);
  iVar8 = *(int *)(param_1 + 0x80);
  uVar6 = puVar9[1];
  *(ushort **)(param_1 + 0x10) = puVar9 + 2;
  uVar7 = puVar9[2];
  uVar19 = (uint)uVar7;
  *(ushort **)(param_1 + 0x10) = puVar9 + 3;
  iVar16 = **(int **)(param_1 + 0x20);
  lVar18 = 0;
  if (iVar16 <= (int)(uint)uVar7) {
    do {
      uVar19 = uVar19 - iVar16;
      iVar16 = (*(int **)(param_1 + 0x20))[lVar18 + 1];
      lVar18 = lVar18 + 1;
    } while (iVar16 <= (int)uVar19);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar18 * 8) +
                    (longlong)(int)uVar19);
  uVar7 = puVar9[3];
  *(ushort **)(param_1 + 0x10) = puVar9 + 4;
  iVar16 = *(int *)(param_1 + 0x44);
  if (0 < iVar16) {
    do {
      pfVar1 = (float *)(lVar17 + (ulonglong)((uint)uVar6 * iVar8));
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar2 = (float *)(lVar17 + (ulonglong)((uint)uVar5 * iVar8));
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar3 = (float *)(lVar17 + (ulonglong)((uint)uVar7 * iVar8));
      *pfVar3 = *pfVar1 * *pfVar2 + fVar4;
      pfVar3[1] = fVar10 * fVar13 + fVar4;
      pfVar3[2] = fVar11 * fVar14 + fVar4;
      pfVar3[3] = fVar12 * fVar15 + fVar4;
      lVar17 = lVar17 + 0x10;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  return;
}



// FUNCTION 144b30384 FUN_144b30384 body=203 status=ok
// SIG undefined FUN_144b30384(void)

void FUN_144b30384(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  piVar8 = *(int **)(param_1 + 0x20);
  uVar5 = *puVar7;
  uVar15 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar13 = *piVar8;
  lVar16 = 0;
  if (iVar13 <= (int)(uint)uVar5) {
    do {
      uVar15 = uVar15 - iVar13;
      iVar13 = piVar8[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar13 <= (int)uVar15);
  }
  lVar14 = *(longlong *)(param_1 + 0x70);
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                    (longlong)(int)uVar15);
  uVar5 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar13 = *(int *)(param_1 + 0x80);
  uVar6 = puVar7[2];
  uVar15 = (uint)uVar6;
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar12 = *piVar8;
  lVar16 = 0;
  if (iVar12 <= (int)(uint)uVar6) {
    do {
      uVar15 = uVar15 - iVar12;
      iVar12 = piVar8[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar12 <= (int)uVar15);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                    (longlong)(int)uVar15);
  uVar6 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    do {
      pfVar1 = (float *)(lVar14 + (ulonglong)((uint)uVar5 * iVar13));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar14 + (ulonglong)((uint)uVar6 * iVar13));
      *pfVar2 = *pfVar1 * fVar3 + fVar4;
      pfVar2[1] = fVar9 * fVar3 + fVar4;
      pfVar2[2] = fVar10 * fVar3 + fVar4;
      pfVar2[3] = fVar11 * fVar3 + fVar4;
      lVar14 = lVar14 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 144b30450 FUN_144b30450 body=201 status=ok
// SIG undefined FUN_144b30450(void)

void FUN_144b30450(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  piVar9 = *(int **)(param_1 + 0x20);
  uVar5 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar6 = puVar8[1];
  uVar15 = (uint)uVar6;
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  iVar13 = *piVar9;
  lVar16 = 0;
  if (iVar13 <= (int)(uint)uVar6) {
    do {
      uVar15 = uVar15 - iVar13;
      iVar13 = piVar9[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar13 <= (int)uVar15);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                    (longlong)(int)uVar15);
  uVar6 = puVar8[2];
  uVar15 = (uint)uVar6;
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar13 = *piVar9;
  lVar16 = 0;
  if (iVar13 <= (int)(uint)uVar6) {
    do {
      uVar15 = uVar15 - iVar13;
      iVar13 = piVar9[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar13 <= (int)uVar15);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                    (longlong)(int)uVar15);
  uVar6 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar13 = *(int *)(param_1 + 0x44);
  if (0 < iVar13) {
    do {
      pfVar1 = (float *)(lVar14 + (ulonglong)((uint)uVar5 * iVar7));
      fVar10 = pfVar1[1];
      fVar11 = pfVar1[2];
      fVar12 = pfVar1[3];
      pfVar2 = (float *)(lVar14 + (ulonglong)((uint)uVar6 * iVar7));
      *pfVar2 = *pfVar1 * fVar3 + fVar4;
      pfVar2[1] = fVar10 * fVar3 + fVar4;
      pfVar2[2] = fVar11 * fVar3 + fVar4;
      pfVar2[3] = fVar12 * fVar3 + fVar4;
      lVar14 = lVar14 + 0x10;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return;
}



// FUNCTION 144b3051a FUN_144b3051a body=224 status=ok
// SIG undefined FUN_144b3051a(void)

void FUN_144b3051a(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  fVar1 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  fVar2 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[2];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  fVar11 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[3];
  *(ushort **)(param_1 + 0x10) = puVar4 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    pfVar8 = (float *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                      *(longlong *)(param_1 + 0x70));
    fVar11 = fVar1 * fVar2 + fVar11;
    do {
      *pfVar8 = fVar11;
      pfVar8[1] = fVar11;
      pfVar8[2] = fVar11;
      pfVar8[3] = fVar11;
      pfVar8 = pfVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 144b305fa FUN_144b305fa body=134 status=ok
// SIG undefined FUN_144b305fa(void)

void FUN_144b305fa(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  longlong lVar21;
  
  puVar10 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar10;
  *(ushort **)(param_1 + 0x10) = puVar10 + 1;
  lVar21 = *(longlong *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x80);
  uVar6 = puVar10[1];
  *(ushort **)(param_1 + 0x10) = puVar10 + 2;
  uVar7 = puVar10[2];
  *(ushort **)(param_1 + 0x10) = puVar10 + 3;
  uVar8 = puVar10[3];
  *(ushort **)(param_1 + 0x10) = puVar10 + 4;
  iVar20 = *(int *)(param_1 + 0x44);
  if (0 < iVar20) {
    do {
      pfVar1 = (float *)(lVar21 + (ulonglong)((uint)uVar7 * iVar9));
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar13 = pfVar1[3];
      pfVar2 = (float *)(lVar21 + (ulonglong)((uint)uVar5 * iVar9));
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar3 = (float *)(lVar21 + (ulonglong)((uint)uVar6 * iVar9));
      fVar17 = pfVar3[1];
      fVar18 = pfVar3[2];
      fVar19 = pfVar3[3];
      pfVar4 = (float *)(lVar21 + (ulonglong)((uint)uVar8 * iVar9));
      *pfVar4 = *pfVar1 * *pfVar3 + (1.0 - *pfVar1) * *pfVar2;
      pfVar4[1] = fVar11 * fVar17 + (1.0 - fVar11) * fVar14;
      pfVar4[2] = fVar12 * fVar18 + (1.0 - fVar12) * fVar15;
      pfVar4[3] = fVar13 * fVar19 + (1.0 - fVar13) * fVar16;
      lVar21 = lVar21 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  return;
}



// FUNCTION 144b30680 FUN_144b30680 body=217 status=ok
// SIG undefined FUN_144b30680(void)

void FUN_144b30680(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  piVar8 = *(int **)(param_1 + 0x20);
  uVar5 = *puVar7;
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar13 = *piVar8;
  lVar15 = 0;
  if (iVar13 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = piVar8[lVar15 + 1];
      lVar15 = lVar15 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar13 = *piVar8;
  lVar15 = 0;
  if (iVar13 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = piVar8[lVar15 + 1];
      lVar15 = lVar15 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  fVar4 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  lVar15 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar6 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    do {
      pfVar1 = (float *)(lVar15 + (ulonglong)((uint)uVar5 * iVar13));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar15 + (ulonglong)((uint)uVar6 * iVar13));
      *pfVar2 = *pfVar1 * fVar4 + (1.0 - *pfVar1) * fVar3;
      pfVar2[1] = fVar9 * fVar4 + (1.0 - fVar9) * fVar3;
      pfVar2[2] = fVar10 * fVar4 + (1.0 - fVar10) * fVar3;
      pfVar2[3] = fVar11 * fVar4 + (1.0 - fVar11) * fVar3;
      lVar15 = lVar15 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 144b3075a FUN_144b3075a body=240 status=ok
// SIG undefined FUN_144b3075a(void)

void FUN_144b3075a(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int *piVar5;
  longlong lVar6;
  int iVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  float fVar11;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar5 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  lVar6 = *(longlong *)(param_1 + 0x18);
  fVar11 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  fVar1 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[2];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar7 = *piVar5;
  lVar10 = 0;
  if (iVar7 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar7;
      iVar7 = piVar5[lVar10 + 1];
      lVar10 = lVar10 + 1;
    } while (iVar7 <= (int)uVar9);
  }
  fVar2 = *(float *)(*(longlong *)(lVar6 + lVar10 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar4[3];
  *(ushort **)(param_1 + 0x10) = puVar4 + 4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    pfVar8 = (float *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                      *(longlong *)(param_1 + 0x70));
    fVar11 = fVar11 * (1.0 - fVar2) + fVar1 * fVar2;
    do {
      *pfVar8 = fVar11;
      pfVar8[1] = fVar11;
      pfVar8[2] = fVar11;
      pfVar8[3] = fVar11;
      pfVar8 = pfVar8 + 4;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 144b30acc FUN_144b30acc body=496 status=ok
// SIG undefined FUN_144b30acc(void)

void FUN_144b30acc(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      fVar17 = ABS(*pfVar1);
      fVar20 = ABS(fVar7);
      fVar21 = ABS(fVar8);
      fVar22 = ABS(fVar9);
      uVar12 = (int)(fVar17 * 1.2732395) + 1;
      uVar14 = (int)(fVar20 * 1.2732395) + 1;
      uVar15 = (int)(fVar21 * 1.2732395) + 1;
      uVar16 = (int)(fVar22 * 1.2732395) + 1;
      fVar23 = (float)(int)(uVar12 & 0xfffffffe);
      fVar24 = (float)(int)(uVar14 & 0xfffffffe);
      fVar25 = (float)(int)(uVar15 & 0xfffffffe);
      fVar26 = (float)(int)(uVar16 & 0xfffffffe);
      fVar23 = fVar23 * -0.78515625 + fVar17 + fVar23 * -0.00024187565 + fVar23 * -3.774895e-08;
      fVar24 = fVar24 * -0.78515625 + fVar20 + fVar24 * -0.00024187565 + fVar24 * -3.774895e-08;
      fVar25 = fVar25 * -0.78515625 + fVar21 + fVar25 * -0.00024187565 + fVar25 * -3.774895e-08;
      fVar26 = fVar26 * -0.78515625 + fVar22 + fVar26 * -0.00024187565 + fVar26 * -3.774895e-08;
      fVar17 = fVar23 * fVar23;
      fVar20 = fVar24 * fVar24;
      fVar21 = fVar25 * fVar25;
      fVar22 = fVar26 * fVar26;
      auVar13._0_4_ = -(uint)((uVar12 & 2) == 0);
      auVar13._4_4_ = -(uint)((uVar14 & 2) == 0);
      auVar13._8_4_ = -(uint)((uVar15 & 2) == 0);
      auVar13._12_4_ = -(uint)((uVar16 & 2) == 0);
      auVar18._0_4_ =
           fVar17 * -0.5 +
           ((fVar17 * 2.4433157e-05 + -0.0013887316) * fVar17 + 0.041666646) * fVar17 * fVar17 + 1.0
      ;
      auVar18._4_4_ =
           fVar20 * -0.5 +
           ((fVar20 * 2.4433157e-05 + -0.0013887316) * fVar20 + 0.041666646) * fVar20 * fVar20 + 1.0
      ;
      auVar18._8_4_ =
           fVar21 * -0.5 +
           ((fVar21 * 2.4433157e-05 + -0.0013887316) * fVar21 + 0.041666646) * fVar21 * fVar21 + 1.0
      ;
      auVar18._12_4_ =
           fVar22 * -0.5 +
           ((fVar22 * 2.4433157e-05 + -0.0013887316) * fVar22 + 0.041666646) * fVar22 * fVar22 + 1.0
      ;
      auVar19._4_4_ =
           ((fVar20 * -0.00019515296 + 0.008332161) * fVar20 + -0.16666655) * fVar20 * fVar24 +
           fVar24;
      auVar19._0_4_ =
           ((fVar17 * -0.00019515296 + 0.008332161) * fVar17 + -0.16666655) * fVar17 * fVar23 +
           fVar23;
      auVar19._8_4_ =
           ((fVar21 * -0.00019515296 + 0.008332161) * fVar21 + -0.16666655) * fVar21 * fVar25 +
           fVar25;
      auVar19._12_4_ =
           ((fVar22 * -0.00019515296 + 0.008332161) * fVar22 + -0.16666655) * fVar22 * fVar26 +
           fVar26;
      auVar19 = blendvps(auVar18,auVar19,auVar13);
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = auVar19._0_4_ ^ (uVar12 * 0x20000000 ^ (uint)*pfVar1) & 0x80000000;
      puVar2[1] = auVar19._4_4_ ^ (uVar14 * 0x20000000 ^ (uint)fVar7) & 0x80000000;
      puVar2[2] = auVar19._8_4_ ^ (uVar15 * 0x20000000 ^ (uint)fVar8) & 0x80000000;
      puVar2[3] = auVar19._12_4_ ^ (uVar16 * 0x20000000 ^ (uint)fVar9) & 0x80000000;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b30cbc FUN_144b30cbc body=501 status=ok
// SIG undefined FUN_144b30cbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b30cbc(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar12;
  uint uVar13;
  undefined1 auVar10 [16];
  uint uVar14;
  undefined1 auVar11 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar8 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  auVar6 = _DAT_1499319e0;
  iVar7 = *(int *)(param_1 + 0x44);
  if (0 < iVar7) {
    auVar15 = pmovsxbd(in_XMM4,0xfefefefe);
    do {
      pfVar1 = (float *)(lVar8 + (ulonglong)((uint)uVar2 * iVar4));
      auVar10._0_4_ = (int)(ABS(*pfVar1) * 1.2732395) + 1;
      auVar10._4_4_ = (int)(ABS(pfVar1[1]) * 1.2732395) + 1;
      auVar10._8_4_ = (int)(ABS(pfVar1[2]) * 1.2732395) + 1;
      auVar10._12_4_ = (int)(ABS(pfVar1[3]) * 1.2732395) + 1;
      auVar10 = auVar10 & auVar15;
      fVar23 = (float)auVar10._0_4_;
      fVar24 = (float)auVar10._4_4_;
      fVar25 = (float)auVar10._8_4_;
      fVar26 = (float)auVar10._12_4_;
      fVar23 = fVar23 * -0.78515625 + ABS(*pfVar1) + fVar23 * -0.00024187565 +
               fVar23 * -3.774895e-08;
      fVar24 = fVar24 * -0.78515625 + ABS(pfVar1[1]) + fVar24 * -0.00024187565 +
               fVar24 * -3.774895e-08;
      fVar25 = fVar25 * -0.78515625 + ABS(pfVar1[2]) + fVar25 * -0.00024187565 +
               fVar25 * -3.774895e-08;
      fVar26 = fVar26 * -0.78515625 + ABS(pfVar1[3]) + fVar26 * -0.00024187565 +
               fVar26 * -3.774895e-08;
      fVar17 = fVar23 * fVar23;
      fVar20 = fVar24 * fVar24;
      fVar21 = fVar25 * fVar25;
      fVar22 = fVar26 * fVar26;
      uVar9 = auVar10._0_4_ + auVar15._0_4_;
      uVar12 = auVar10._4_4_ + auVar15._4_4_;
      uVar13 = auVar10._8_4_ + auVar15._8_4_;
      uVar14 = auVar10._12_4_ + auVar15._12_4_;
      auVar11._0_4_ = -(uint)((uVar9 & 2) == 0);
      auVar11._4_4_ = -(uint)((uVar12 & 2) == 0);
      auVar11._8_4_ = -(uint)((uVar13 & 2) == 0);
      auVar11._12_4_ = -(uint)((uVar14 & 2) == 0);
      auVar18._0_4_ =
           fVar17 * -0.5 +
           ((fVar17 * 2.4433157e-05 + -0.0013887316) * fVar17 + 0.041666646) * fVar17 * fVar17 + 1.0
      ;
      auVar18._4_4_ =
           fVar20 * -0.5 +
           ((fVar20 * 2.4433157e-05 + -0.0013887316) * fVar20 + 0.041666646) * fVar20 * fVar20 + 1.0
      ;
      auVar18._8_4_ =
           fVar21 * -0.5 +
           ((fVar21 * 2.4433157e-05 + -0.0013887316) * fVar21 + 0.041666646) * fVar21 * fVar21 + 1.0
      ;
      auVar18._12_4_ =
           fVar22 * -0.5 +
           ((fVar22 * 2.4433157e-05 + -0.0013887316) * fVar22 + 0.041666646) * fVar22 * fVar22 + 1.0
      ;
      auVar19._4_4_ =
           ((fVar20 * -0.00019515296 + 0.008332161) * fVar20 + -0.16666655) * fVar20 * fVar24 +
           fVar24;
      auVar19._0_4_ =
           ((fVar17 * -0.00019515296 + 0.008332161) * fVar17 + -0.16666655) * fVar17 * fVar23 +
           fVar23;
      auVar19._8_4_ =
           ((fVar21 * -0.00019515296 + 0.008332161) * fVar21 + -0.16666655) * fVar21 * fVar25 +
           fVar25;
      auVar19._12_4_ =
           ((fVar22 * -0.00019515296 + 0.008332161) * fVar22 + -0.16666655) * fVar22 * fVar26 +
           fVar26;
      auVar19 = blendvps(auVar18,auVar19,auVar11);
      auVar16._0_4_ = uVar9 * 0x20000000;
      auVar16._4_4_ = uVar12 * 0x20000000;
      auVar16._8_4_ = uVar13 * 0x20000000;
      auVar16._12_4_ = uVar14 * 0x20000000;
      *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar4)) =
           auVar16 & auVar6 ^ auVar6 ^ auVar19;
      lVar8 = lVar8 + 0x10;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}



// FUNCTION 144b30efe FUN_144b30efe body=346 status=ok
// SIG undefined FUN_144b30efe(void)

void FUN_144b30efe(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  float _Y;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar8 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar8 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar8;
      iVar8 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar8 <= (int)uVar11);
  }
  _Y = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) + (longlong)(int)uVar11)
  ;
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    uVar9 = (ulonglong)((uint)uVar3 * iVar5);
    do {
      pfVar1 = (float *)(lVar10 + uVar9);
      fVar14 = pfVar1[1];
      fVar16 = pfVar1[3];
      fVar15 = *(float *)(lVar10 + 8 + uVar9);
      fVar13 = fmodf(*pfVar1,_Y);
      auVar17._4_4_ = extraout_XMM0_Db;
      auVar17._0_4_ = fVar13;
      auVar17._8_4_ = extraout_XMM0_Dc;
      auVar17._12_4_ = extraout_XMM0_Dd;
      fVar14 = fmodf(fVar14,_Y);
      fVar15 = fmodf(fVar15,_Y);
      fVar16 = fmodf(fVar16,_Y);
      auVar7._4_4_ = extraout_XMM0_Db_00;
      auVar7._0_4_ = fVar14;
      auVar7._8_4_ = extraout_XMM0_Dc_00;
      auVar7._12_4_ = extraout_XMM0_Dd_00;
      auVar18 = insertps(auVar17,auVar7,0x10);
      auVar19._4_4_ = extraout_XMM0_Db_01;
      auVar19._0_4_ = fVar15;
      auVar19._8_4_ = extraout_XMM0_Dc_01;
      auVar19._12_4_ = extraout_XMM0_Dd_01;
      auVar19 = insertps(auVar18,auVar19,0x20);
      auVar18._4_4_ = extraout_XMM0_Db_02;
      auVar18._0_4_ = fVar16;
      auVar18._8_4_ = extraout_XMM0_Dc_02;
      auVar18._12_4_ = extraout_XMM0_Dd_02;
      auVar18 = insertps(auVar19,auVar18,0x30);
      puVar2 = (uint *)(lVar10 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = auVar18._0_4_ & -(uint)(1e-08 < ABS(_Y));
      puVar2[1] = auVar18._4_4_ & -(uint)(1e-08 < ABS(_Y));
      puVar2[2] = auVar18._8_4_ & -(uint)(1e-08 < ABS(_Y));
      puVar2[3] = auVar18._12_4_ & -(uint)(1e-08 < ABS(_Y));
      lVar10 = lVar10 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 144b310a4 FUN_144b310a4 body=201 status=ok
// SIG undefined FUN_144b310a4(void)

void FUN_144b310a4(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  undefined1 auVar8 [16];
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar9 = *piVar7;
  lVar12 = 0;
  if (iVar9 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = piVar7[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) + (longlong)(int)uVar11);
  uVar4 = puVar6[2];
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar9 = *piVar7;
  lVar12 = 0;
  if (iVar9 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = piVar7[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) + (longlong)(int)uVar11);
  uVar4 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      auVar13._4_4_ = uVar1;
      auVar13._0_4_ = uVar1;
      auVar13._8_4_ = uVar1;
      auVar13._12_4_ = uVar1;
      auVar13 = maxps(*(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar3 * iVar5)),auVar13);
      auVar8._4_4_ = uVar2;
      auVar8._0_4_ = uVar2;
      auVar8._8_4_ = uVar2;
      auVar8._12_4_ = uVar2;
      auVar13 = minps(auVar13,auVar8);
      *(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar4 * iVar5)) = auVar13;
      lVar10 = lVar10 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 144b3116e FUN_144b3116e body=230 status=ok
// SIG undefined FUN_144b3116e(void)

void FUN_144b3116e(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort *puVar5;
  int *piVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  int iVar9;
  undefined1 (*pauVar10) [16];
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar4 = *puVar5;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar9 = *piVar6;
  lVar12 = 0;
  if (iVar9 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = piVar6[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  lVar7 = *(longlong *)(param_1 + 0x18);
  uVar1 = *(undefined4 *)(*(longlong *)(lVar7 + lVar12 * 8) + (longlong)(int)uVar11);
  uVar4 = puVar5[1];
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar9 = *piVar6;
  lVar12 = 0;
  if (iVar9 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = piVar6[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar2 = *(undefined4 *)(*(longlong *)(lVar7 + lVar12 * 8) + (longlong)(int)uVar11);
  uVar4 = puVar5[2];
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *piVar6;
  lVar12 = 0;
  if (iVar9 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = piVar6[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar3 = *(undefined4 *)(*(longlong *)(lVar7 + lVar12 * 8) + (longlong)(int)uVar11);
  uVar4 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    auVar13._4_4_ = uVar1;
    auVar13._0_4_ = uVar1;
    auVar13._8_4_ = uVar1;
    auVar13._12_4_ = uVar1;
    auVar14._4_4_ = uVar2;
    auVar14._0_4_ = uVar2;
    auVar14._8_4_ = uVar2;
    auVar14._12_4_ = uVar2;
    auVar14 = maxps(auVar13,auVar14);
    pauVar10 = (undefined1 (*) [16])
               ((ulonglong)((uint)uVar4 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70))
    ;
    auVar8._4_4_ = uVar3;
    auVar8._0_4_ = uVar3;
    auVar8._8_4_ = uVar3;
    auVar8._12_4_ = uVar3;
    auVar14 = minps(auVar14,auVar8);
    do {
      *pauVar10 = auVar14;
      pauVar10 = pauVar10 + 1;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 144b31254 FUN_144b31254 body=144 status=ok
// SIG undefined FUN_144b31254(void)

void FUN_144b31254(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar9);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    do {
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = minps(*(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar2 * iVar4)),auVar10);
      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar3 * iVar4)) = auVar10;
      lVar7 = lVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 144b312e4 FUN_144b312e4 body=144 status=ok
// SIG undefined FUN_144b312e4(void)

void FUN_144b312e4(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  uVar9 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar3) {
    do {
      uVar9 = uVar9 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar9);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar9);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    do {
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = maxps(*(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar2 * iVar4)),auVar10);
      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar3 * iVar4)) = auVar10;
      lVar7 = lVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 144b31496 FUN_144b31496 body=96 status=ok
// SIG undefined FUN_144b31496(void)

void FUN_144b31496(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = -(uint)(*pfVar1 < *pfVar2);
      piVar3[1] = -(uint)(fVar9 < fVar12);
      piVar3[2] = -(uint)(fVar10 < fVar13);
      piVar3[3] = -(uint)(fVar11 < fVar14);
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b314f6 FUN_144b314f6 body=145 status=ok
// SIG undefined FUN_144b314f6(void)

void FUN_144b314f6(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *piVar2 = -(uint)(*pfVar1 < fVar3);
      piVar2[1] = -(uint)(fVar8 < fVar3);
      piVar2[2] = -(uint)(fVar9 < fVar3);
      piVar2[3] = -(uint)(fVar10 < fVar3);
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b31588 FUN_144b31588 body=96 status=ok
// SIG undefined FUN_144b31588(void)

void FUN_144b31588(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = -(uint)(*pfVar1 <= *pfVar2);
      piVar3[1] = -(uint)(fVar9 <= fVar12);
      piVar3[2] = -(uint)(fVar10 <= fVar13);
      piVar3[3] = -(uint)(fVar11 <= fVar14);
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b315e8 FUN_144b315e8 body=141 status=ok
// SIG undefined FUN_144b315e8(void)

void FUN_144b315e8(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *piVar2 = -(uint)(fVar3 <= *pfVar1);
      piVar2[1] = -(uint)(fVar3 <= fVar7);
      piVar2[2] = -(uint)(fVar3 <= fVar8);
      piVar2[3] = -(uint)(fVar3 <= fVar9);
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b31676 FUN_144b31676 body=145 status=ok
// SIG undefined FUN_144b31676(void)

void FUN_144b31676(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *piVar2 = -(uint)(*pfVar1 <= fVar3);
      piVar2[1] = -(uint)(fVar8 <= fVar3);
      piVar2[2] = -(uint)(fVar9 <= fVar3);
      piVar2[3] = -(uint)(fVar10 <= fVar3);
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b31708 FUN_144b31708 body=96 status=ok
// SIG undefined FUN_144b31708(void)

void FUN_144b31708(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = -(uint)(*pfVar1 < *pfVar2);
      piVar3[1] = -(uint)(fVar9 < fVar12);
      piVar3[2] = -(uint)(fVar10 < fVar13);
      piVar3[3] = -(uint)(fVar11 < fVar14);
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b31768 FUN_144b31768 body=145 status=ok
// SIG undefined FUN_144b31768(void)

void FUN_144b31768(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *piVar2 = -(uint)(fVar3 < *pfVar1);
      piVar2[1] = -(uint)(fVar3 < fVar8);
      piVar2[2] = -(uint)(fVar3 < fVar9);
      piVar2[3] = -(uint)(fVar3 < fVar10);
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b317fa FUN_144b317fa body=187 status=ok
// SIG undefined FUN_144b317fa(void)

void FUN_144b317fa(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[1];
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[2];
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    piVar6 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(fVar2 < fVar1);
    do {
      *piVar6 = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[1] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[2] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[3] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144b318b6 FUN_144b318b6 body=96 status=ok
// SIG undefined FUN_144b318b6(void)

void FUN_144b318b6(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      pfVar1 = (float *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      fVar12 = pfVar2[1];
      fVar13 = pfVar2[2];
      fVar14 = pfVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = -(uint)(*pfVar1 <= *pfVar2);
      piVar3[1] = -(uint)(fVar9 <= fVar12);
      piVar3[2] = -(uint)(fVar10 <= fVar13);
      piVar3[3] = -(uint)(fVar11 <= fVar14);
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b31916 FUN_144b31916 body=145 status=ok
// SIG undefined FUN_144b31916(void)

void FUN_144b31916(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *piVar2 = -(uint)(fVar3 <= *pfVar1);
      piVar2[1] = -(uint)(fVar3 <= fVar8);
      piVar2[2] = -(uint)(fVar3 <= fVar9);
      piVar2[3] = -(uint)(fVar3 <= fVar10);
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b319a8 FUN_144b319a8 body=187 status=ok
// SIG undefined FUN_144b319a8(void)

void FUN_144b319a8(longlong param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  ushort *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar4;
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 1;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[1];
  uVar7 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar4 + 2;
  iVar5 = *piVar6;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar3) {
    do {
      uVar7 = uVar7 - iVar5;
      iVar5 = piVar6[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar7);
  }
  fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7
                    );
  uVar3 = puVar4[2];
  *(ushort **)(param_1 + 0x10) = puVar4 + 3;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    piVar6 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(fVar2 <= fVar1);
    do {
      *piVar6 = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[1] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[2] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6[3] = (int)(uVar7 << 0x1f) >> 0x1f;
      piVar6 = piVar6 + 4;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 144b31a64 FUN_144b31a64 body=145 status=ok
// SIG undefined FUN_144b31a64(void)

void FUN_144b31a64(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar14 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                    (longlong)(int)uVar14);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar8 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *piVar2 = -(uint)(*pfVar1 == fVar3);
      piVar2[1] = -(uint)(fVar8 == fVar3);
      piVar2[2] = -(uint)(fVar9 == fVar3);
      piVar2[3] = -(uint)(fVar10 == fVar3);
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b31af6 FUN_144b31af6 body=141 status=ok
// SIG undefined FUN_144b31af6(void)

void FUN_144b31af6(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar6;
  uVar11 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar11);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar13 = *(int *)(param_1 + 0x80);
  uVar5 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar13));
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      fVar9 = pfVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar5 * iVar13));
      *piVar2 = -(uint)(*pfVar1 != fVar3);
      piVar2[1] = -(uint)(fVar7 != fVar3);
      piVar2[2] = -(uint)(fVar8 != fVar3);
      piVar2[3] = -(uint)(fVar9 != fVar3);
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b31b84 FUN_144b31b84 body=124 status=ok
// SIG undefined FUN_144b31b84(void)

void FUN_144b31b84(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  ushort *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  
  puVar10 = *(ushort **)(param_1 + 0x10);
  uVar5 = *puVar10;
  *(ushort **)(param_1 + 0x10) = puVar10 + 1;
  lVar21 = *(longlong *)(param_1 + 0x70);
  iVar9 = *(int *)(param_1 + 0x80);
  uVar6 = puVar10[1];
  *(ushort **)(param_1 + 0x10) = puVar10 + 2;
  uVar7 = puVar10[2];
  *(ushort **)(param_1 + 0x10) = puVar10 + 3;
  uVar8 = puVar10[3];
  *(ushort **)(param_1 + 0x10) = puVar10 + 4;
  iVar20 = *(int *)(param_1 + 0x44);
  if (0 < iVar20) {
    do {
      puVar1 = (uint *)(lVar21 + (ulonglong)((uint)uVar5 * iVar9));
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (uint *)(lVar21 + (ulonglong)((uint)uVar7 * iVar9));
      uVar14 = puVar2[1];
      uVar15 = puVar2[2];
      uVar16 = puVar2[3];
      puVar3 = (uint *)(lVar21 + (ulonglong)((uint)uVar6 * iVar9));
      uVar17 = puVar3[1];
      uVar18 = puVar3[2];
      uVar19 = puVar3[3];
      puVar4 = (uint *)(lVar21 + (ulonglong)((uint)uVar8 * iVar9));
      *puVar4 = *puVar1 & *puVar3 | ~*puVar1 & *puVar2;
      puVar4[1] = uVar11 & uVar17 | ~uVar11 & uVar14;
      puVar4[2] = uVar12 & uVar18 | ~uVar12 & uVar15;
      puVar4[3] = uVar13 & uVar19 | ~uVar13 & uVar16;
      lVar21 = lVar21 + 0x10;
      iVar20 = iVar20 + -1;
    } while (iVar20 != 0);
  }
  return;
}



// FUNCTION 144b31c00 FUN_144b31c00 body=182 status=ok
// SIG undefined FUN_144b31c00(void)

void FUN_144b31c00(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  int iVar17;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar7;
  uVar15 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  iVar17 = **(int **)(param_1 + 0x20);
  lVar16 = 0;
  if (iVar17 <= (int)(uint)uVar4) {
    do {
      uVar15 = uVar15 - iVar17;
      iVar17 = (*(int **)(param_1 + 0x20))[lVar16 + 1];
      lVar16 = lVar16 + 1;
    } while (iVar17 <= (int)uVar15);
  }
  uVar15 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) +
                    (longlong)(int)uVar15);
  uVar4 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar17 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[2];
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  uVar6 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar14 = *(int *)(param_1 + 0x44);
  if (0 < iVar14) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar17));
      uVar11 = puVar1[1];
      uVar12 = puVar1[2];
      uVar13 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar17));
      uVar8 = puVar2[1];
      uVar9 = puVar2[2];
      uVar10 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar17));
      *puVar3 = *puVar2 & uVar15 | *puVar1 & (uVar15 ^ 0xffffffff);
      puVar3[1] = uVar8 & uVar15 | uVar11 & (uVar15 ^ 0xffffffff);
      puVar3[2] = uVar9 & uVar15 | uVar12 & (uVar15 ^ 0xffffffff);
      puVar3[3] = uVar10 & uVar15 | uVar13 & (uVar15 ^ 0xffffffff);
      lVar16 = lVar16 + 0x10;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  return;
}



// FUNCTION 144b31cb6 FUN_144b31cb6 body=172 status=ok
// SIG undefined FUN_144b31cb6(void)

void FUN_144b31cb6(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  uVar18 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  iVar15 = **(int **)(param_1 + 0x20);
  lVar17 = 0;
  if (iVar15 <= (int)(uint)uVar5) {
    do {
      uVar18 = uVar18 - iVar15;
      iVar15 = (*(int **)(param_1 + 0x20))[lVar17 + 1];
      lVar17 = lVar17 + 1;
    } while (iVar15 <= (int)uVar18);
  }
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar17 * 8) +
                    (longlong)(int)uVar18);
  uVar5 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar6 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 & uVar18 | ~*puVar1 & *puVar2;
      puVar3[1] = uVar9 & uVar18 | ~uVar9 & uVar12;
      puVar3[2] = uVar10 & uVar18 | ~uVar10 & uVar13;
      puVar3[3] = uVar11 & uVar18 | ~uVar11 & uVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b31d62 FUN_144b31d62 body=217 status=ok
// SIG undefined FUN_144b31d62(void)

void FUN_144b31d62(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  piVar6 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar5;
  uVar12 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar11 = *piVar6;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar3) {
    do {
      uVar12 = uVar12 - iVar11;
      iVar11 = piVar6[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar12);
  }
  uVar12 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                    (longlong)(int)uVar12);
  uVar3 = puVar5[1];
  uVar13 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar11 = *piVar6;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar3) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar6[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                    (longlong)(int)uVar13);
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar11 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[3];
  *(ushort **)(param_1 + 0x10) = puVar5 + 4;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    uVar13 = uVar13 & uVar12;
    do {
      puVar1 = (uint *)(lVar14 + (ulonglong)((uint)uVar3 * iVar11));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (uint *)(lVar14 + (ulonglong)((uint)uVar4 * iVar11));
      *puVar2 = *puVar1 & (uVar12 ^ 0xffffffff) | uVar13;
      puVar2[1] = uVar7 & (uVar12 ^ 0xffffffff) | uVar13;
      puVar2[2] = uVar8 & (uVar12 ^ 0xffffffff) | uVar13;
      puVar2[3] = uVar9 & (uVar12 ^ 0xffffffff) | uVar13;
      lVar14 = lVar14 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b31e3c FUN_144b31e3c body=172 status=ok
// SIG undefined FUN_144b31e3c(void)

void FUN_144b31e3c(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  uVar18 = (uint)uVar6;
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = **(int **)(param_1 + 0x20);
  lVar17 = 0;
  if (iVar15 <= (int)(uint)uVar6) {
    do {
      uVar18 = uVar18 - iVar15;
      iVar15 = (*(int **)(param_1 + 0x20))[lVar17 + 1];
      lVar17 = lVar17 + 1;
    } while (iVar15 <= (int)uVar18);
  }
  uVar18 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar17 * 8) +
                    (longlong)(int)uVar18);
  uVar6 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 & *puVar2 | ~*puVar1 & uVar18;
      puVar3[1] = uVar9 & uVar12 | ~uVar9 & uVar18;
      puVar3[2] = uVar10 & uVar13 | ~uVar10 & uVar18;
      puVar3[3] = uVar11 & uVar14 | ~uVar11 & uVar18;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b31ee8 FUN_144b31ee8 body=207 status=ok
// SIG undefined FUN_144b31ee8(void)

void FUN_144b31ee8(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar11 = *piVar7;
  lVar15 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar7[lVar15 + 1];
      lVar15 = lVar15 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8) +
                    (longlong)(int)uVar13);
  uVar4 = puVar6[2];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar11 = *piVar7;
  lVar15 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar11;
      iVar11 = piVar7[lVar15 + 1];
      lVar15 = lVar15 + 1;
    } while (iVar11 <= (int)uVar14);
  }
  uVar14 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar15 * 8) +
                    (longlong)(int)uVar14);
  uVar4 = puVar6[3];
  *(ushort **)(param_1 + 0x10) = puVar6 + 4;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      puVar1 = (uint *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = *puVar1 & uVar13 | ~*puVar1 & uVar14;
      puVar2[1] = uVar8 & uVar13 | ~uVar8 & uVar14;
      puVar2[2] = uVar9 & uVar13 | ~uVar9 & uVar14;
      puVar2[3] = uVar10 & uVar13 | ~uVar10 & uVar14;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b31fb8 FUN_144b31fb8 body=98 status=ok
// SIG undefined FUN_144b31fb8(void)

void FUN_144b31fb8(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      piVar1 = (int *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar2 = (int *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      iVar12 = piVar2[1];
      iVar13 = piVar2[2];
      iVar14 = piVar2[3];
      piVar3 = (int *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *piVar3 = *piVar1 + *piVar2;
      piVar3[1] = iVar9 + iVar12;
      piVar3[2] = iVar10 + iVar13;
      piVar3[3] = iVar11 + iVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b3201a FUN_144b3201a body=144 status=ok
// SIG undefined FUN_144b3201a(void)

void FUN_144b3201a(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar11);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar11);
  uVar3 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = *piVar1 + iVar13;
      piVar2[1] = iVar7 + iVar13;
      piVar2[2] = iVar8 + iVar13;
      piVar2[3] = iVar9 + iVar13;
      lVar12 = lVar12 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b320aa FUN_144b320aa body=148 status=ok
// SIG undefined FUN_144b320aa(void)

void FUN_144b320aa(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = *piVar1 + iVar13;
      piVar2[1] = iVar7 + iVar13;
      piVar2[2] = iVar8 + iVar13;
      piVar2[3] = iVar9 + iVar13;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b3213e FUN_144b3213e body=99 status=ok
// SIG undefined FUN_144b3213e(void)

void FUN_144b3213e(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar2 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    do {
      auVar8 = pmulld(*(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar1 * iVar4)),
                      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar2 * iVar4)));
      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar3 * iVar4)) = auVar8;
      lVar7 = lVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 144b321a2 FUN_144b321a2 body=149 status=ok
// SIG undefined FUN_144b321a2(void)

void FUN_144b321a2(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 0x80);
  uVar2 = puVar5[1];
  uVar9 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar9 = uVar9 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar9);
  }
  uVar4 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar9);
  uVar2 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    auVar10._4_4_ = uVar4;
    auVar10._0_4_ = uVar4;
    auVar10._8_4_ = uVar4;
    auVar10._12_4_ = uVar4;
    do {
      auVar11 = pmulld(*(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar1 * iVar3)),auVar10);
      *(undefined1 (*) [16])(lVar7 + (ulonglong)((uint)uVar2 * iVar3)) = auVar11;
      lVar7 = lVar7 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 144b32238 FUN_144b32238 body=171 status=ok
// SIG undefined FUN_144b32238(void)

void FUN_144b32238(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar6 = *piVar4;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar6;
      iVar6 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar2[1];
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar7 = *piVar4;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar7;
      iVar7 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar5);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar3) {
    piVar4 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    iVar7 = iVar7 * iVar6;
    do {
      *piVar4 = iVar7;
      piVar4[1] = iVar7;
      piVar4[2] = iVar7;
      piVar4[3] = iVar7;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 144b322e4 FUN_144b322e4 body=149 status=ok
// SIG undefined FUN_144b322e4(void)

void FUN_144b322e4(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar15 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar14 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar14 <= (int)(uint)uVar4) {
    do {
      uVar15 = uVar15 - iVar14;
      iVar14 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar14 <= (int)uVar15);
  }
  iVar14 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) +
                   (longlong)(int)uVar15);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      piVar1 = (int *)(lVar12 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = *piVar1;
      iVar8 = piVar1[1];
      iVar9 = piVar1[2];
      iVar10 = piVar1[3];
      puVar2 = (uint *)(lVar12 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = (uint)(iVar7 < iVar14) * iVar14 | (uint)(iVar7 >= iVar14) * iVar7;
      puVar2[1] = (uint)(iVar8 < iVar14) * iVar14 | (uint)(iVar8 >= iVar14) * iVar8;
      puVar2[2] = (uint)(iVar9 < iVar14) * iVar14 | (uint)(iVar9 >= iVar14) * iVar9;
      puVar2[3] = (uint)(iVar10 < iVar14) * iVar14 | (uint)(iVar10 >= iVar14) * iVar10;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b3237a FUN_144b3237a body=173 status=ok
// SIG undefined FUN_144b3237a(void)

void FUN_144b3237a(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar3 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar6 = *piVar3;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar6;
      iVar6 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar7);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[1];
  uVar7 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar9 = *piVar3;
  lVar8 = 0;
  if (iVar9 <= (int)(uint)uVar1) {
    do {
      uVar7 = uVar7 - iVar9;
      iVar9 = piVar3[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar9 <= (int)uVar7);
  }
  iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar7);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    puVar5 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar7 = (uint)(iVar6 < iVar9) * iVar9 | (uint)(iVar6 >= iVar9) * iVar6;
    do {
      *puVar5 = uVar7;
      puVar5[1] = uVar7;
      puVar5[2] = uVar7;
      puVar5[3] = uVar7;
      puVar5 = puVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 144b32428 FUN_144b32428 body=148 status=ok
// SIG undefined FUN_144b32428(void)

void FUN_144b32428(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = -(uint)(*piVar1 < iVar13);
      piVar2[1] = -(uint)(iVar7 < iVar13);
      piVar2[2] = -(uint)(iVar8 < iVar13);
      piVar2[3] = -(uint)(iVar9 < iVar13);
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b324bc FUN_144b324bc body=106 status=ok
// SIG undefined FUN_144b324bc(void)

void FUN_144b324bc(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      piVar1 = (int *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      iVar9 = piVar1[1];
      iVar10 = piVar1[2];
      iVar11 = piVar1[3];
      piVar2 = (int *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      iVar12 = piVar2[1];
      iVar13 = piVar2[2];
      iVar14 = piVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = -(uint)(*piVar2 < *piVar1) ^ 0xffffffff;
      puVar3[1] = -(uint)(iVar12 < iVar9) ^ 0xffffffff;
      puVar3[2] = -(uint)(iVar13 < iVar10) ^ 0xffffffff;
      puVar3[3] = -(uint)(iVar14 < iVar11) ^ 0xffffffff;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b32526 FUN_144b32526 body=156 status=ok
// SIG undefined FUN_144b32526(void)

void FUN_144b32526(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = -(uint)(iVar13 < *piVar1) ^ 0xffffffff;
      puVar2[1] = -(uint)(iVar13 < iVar7) ^ 0xffffffff;
      puVar2[2] = -(uint)(iVar13 < iVar8) ^ 0xffffffff;
      puVar2[3] = -(uint)(iVar13 < iVar9) ^ 0xffffffff;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b325c2 FUN_144b325c2 body=148 status=ok
// SIG undefined FUN_144b325c2(void)

void FUN_144b325c2(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = -(uint)(iVar13 < *piVar1);
      piVar2[1] = -(uint)(iVar13 < iVar7);
      piVar2[2] = -(uint)(iVar13 < iVar8);
      piVar2[3] = -(uint)(iVar13 < iVar9);
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b32656 FUN_144b32656 body=148 status=ok
// SIG undefined FUN_144b32656(void)

void FUN_144b32656(longlong param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar2 = (int *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *piVar2 = -(uint)(*piVar1 == iVar13);
      piVar2[1] = -(uint)(iVar7 == iVar13);
      piVar2[2] = -(uint)(iVar8 == iVar13);
      piVar2[3] = -(uint)(iVar9 == iVar13);
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b326ea FUN_144b326ea body=184 status=ok
// SIG undefined FUN_144b326ea(void)

void FUN_144b326ea(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar4;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar7;
      iVar7 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar6);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar3) {
    piVar4 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar6 = (uint)(iVar7 == iVar5);
    do {
      *piVar4 = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[1] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[2] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[3] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 144b327a2 FUN_144b327a2 body=156 status=ok
// SIG undefined FUN_144b327a2(void)

void FUN_144b327a2(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar14 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar13 <= (int)(uint)uVar4) {
    do {
      uVar14 = uVar14 - iVar13;
      iVar13 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar13 <= (int)uVar14);
  }
  iVar13 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                   (longlong)(int)uVar14);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = -(uint)(*piVar1 == iVar13) ^ 0xffffffff;
      puVar2[1] = -(uint)(iVar7 == iVar13) ^ 0xffffffff;
      puVar2[2] = -(uint)(iVar8 == iVar13) ^ 0xffffffff;
      puVar2[3] = -(uint)(iVar9 == iVar13) ^ 0xffffffff;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b3283e FUN_144b3283e body=184 status=ok
// SIG undefined FUN_144b3283e(void)

void FUN_144b3283e(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  piVar4 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar2;
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar7 = *piVar4;
  lVar8 = 0;
  if (iVar7 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar7;
      iVar7 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar7 <= (int)uVar6);
  }
  iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[1];
  uVar6 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *piVar4;
  lVar8 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar6 = uVar6 - iVar5;
      iVar5 = piVar4[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar5 <= (int)uVar6);
  }
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6);
  uVar1 = puVar2[2];
  *(ushort **)(param_1 + 0x10) = puVar2 + 3;
  iVar3 = *(int *)(param_1 + 0x44);
  if (0 < iVar3) {
    piVar4 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    uVar6 = (uint)(iVar7 != iVar5);
    do {
      *piVar4 = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[1] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[2] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4[3] = (int)(uVar6 << 0x1f) >> 0x1f;
      piVar4 = piVar4 + 4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 144b328f6 FUN_144b328f6 body=148 status=ok
// SIG undefined FUN_144b328f6(void)

void FUN_144b328f6(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar10 = **(int **)(param_1 + 0x20);
  lVar12 = 0;
  if (iVar10 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar10;
      iVar10 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
      lVar12 = lVar12 + 1;
    } while (iVar10 <= (int)uVar13);
  }
  uVar13 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                    (longlong)(int)uVar13);
  uVar4 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar10 = *(int *)(param_1 + 0x44);
  if (0 < iVar10) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = *puVar1 & uVar13;
      puVar2[1] = uVar7 & uVar13;
      puVar2[2] = uVar8 & uVar13;
      puVar2[3] = uVar9 & uVar13;
      lVar11 = lVar11 + 0x10;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  return;
}



// FUNCTION 144b3298a FUN_144b3298a body=144 status=ok
// SIG undefined FUN_144b3298a(void)

void FUN_144b3298a(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  uVar10 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  iVar12 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar12 <= (int)(uint)uVar3) {
    do {
      uVar10 = uVar10 - iVar12;
      iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar12 <= (int)uVar10);
  }
  uVar10 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar12 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    do {
      puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar12));
      *puVar2 = *puVar1 | uVar10;
      puVar2[1] = uVar6 | uVar10;
      puVar2[2] = uVar7 | uVar10;
      puVar2[3] = uVar8 | uVar10;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 144b32a1a FUN_144b32a1a body=185 status=ok
// SIG undefined FUN_144b32a1a(void)

void FUN_144b32a1a(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar8[1];
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar9 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar5 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) + (longlong)(int)uVar11);
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    uVar12 = (ulonglong)((uint)uVar2 * iVar4);
    do {
      bVar10 = (byte)uVar5;
      iVar6 = *(int *)(lVar14 + 8 + uVar12);
      iVar7 = *(int *)(lVar14 + 0xc + uVar12);
      puVar1 = (undefined8 *)(lVar14 + (ulonglong)((uint)uVar3 * iVar4));
      *puVar1 = CONCAT44(*(int *)(lVar14 + 4 + uVar12) << (bVar10 & 0x1f),
                         *(int *)(lVar14 + uVar12) << (bVar10 & 0x1f));
      puVar1[1] = CONCAT44(iVar7 << (bVar10 & 0x1f),iVar6 << (bVar10 & 0x1f));
      lVar14 = lVar14 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 144b32ad4 FUN_144b32ad4 body=176 status=ok
// SIG undefined FUN_144b32ad4(void)

void FUN_144b32ad4(longlong param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  piVar7 = *(int **)(param_1 + 0x20);
  uVar1 = *puVar3;
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar6 = *piVar7;
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar6;
      iVar6 = piVar7[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar3[1];
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar4 = *piVar7;
  lVar8 = 0;
  if (iVar4 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar4;
      iVar4 = piVar7[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar4 <= (int)uVar5);
  }
  uVar2 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar3[2];
  *(ushort **)(param_1 + 0x10) = puVar3 + 3;
  iVar4 = *(int *)(param_1 + 0x44);
  if (0 < iVar4) {
    iVar6 = iVar6 << ((byte)uVar2 & 0x1f);
    piVar7 = (int *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                    *(longlong *)(param_1 + 0x70));
    do {
      *piVar7 = iVar6;
      piVar7[1] = iVar6;
      piVar7[2] = iVar6;
      piVar7[3] = iVar6;
      piVar7 = piVar7 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 144b32b84 FUN_144b32b84 body=185 status=ok
// SIG undefined FUN_144b32b84(void)

void FUN_144b32b84(longlong param_1)

{
  undefined8 *puVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar14 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar8[1];
  uVar11 = (uint)uVar3;
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar13 = 0;
  if (iVar9 <= (int)(uint)uVar3) {
    do {
      uVar11 = uVar11 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar13 + 1];
      lVar13 = lVar13 + 1;
    } while (iVar9 <= (int)uVar11);
  }
  uVar5 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar13 * 8) + (longlong)(int)uVar11);
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    uVar12 = (ulonglong)((uint)uVar2 * iVar4);
    do {
      bVar10 = (byte)uVar5;
      iVar6 = *(int *)(lVar14 + 8 + uVar12);
      iVar7 = *(int *)(lVar14 + 0xc + uVar12);
      puVar1 = (undefined8 *)(lVar14 + (ulonglong)((uint)uVar3 * iVar4));
      *puVar1 = CONCAT44(*(int *)(lVar14 + 4 + uVar12) >> (bVar10 & 0x1f),
                         *(int *)(lVar14 + uVar12) >> (bVar10 & 0x1f));
      puVar1[1] = CONCAT44(iVar7 >> (bVar10 & 0x1f),iVar6 >> (bVar10 & 0x1f));
      lVar14 = lVar14 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 144b32c3e FUN_144b32c3e body=95 status=ok
// SIG undefined FUN_144b32c3e(void)

void FUN_144b32c3e(longlong param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar16 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar15 = *(int *)(param_1 + 0x44);
  if (0 < iVar15) {
    do {
      puVar1 = (uint *)(lVar16 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      uVar10 = puVar1[2];
      uVar11 = puVar1[3];
      puVar2 = (uint *)(lVar16 + (ulonglong)((uint)uVar5 * iVar7));
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (uint *)(lVar16 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 & *puVar2;
      puVar3[1] = uVar9 & uVar12;
      puVar3[2] = uVar10 & uVar13;
      puVar3[3] = uVar11 & uVar14;
      lVar16 = lVar16 + 0x10;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
  }
  return;
}



// FUNCTION 144b32c9e FUN_144b32c9e body=95 status=ok
// SIG undefined FUN_144b32c9e(void)

void FUN_144b32c9e(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ushort *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar4 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar7 = *(int *)(param_1 + 0x80);
  uVar5 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  uVar6 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    do {
      puVar1 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar4 * iVar7));
      uVar9 = puVar1[1];
      puVar2 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar5 * iVar7));
      uVar10 = puVar2[1];
      puVar3 = (ulonglong *)(lVar12 + (ulonglong)((uint)uVar6 * iVar7));
      *puVar3 = *puVar1 | *puVar2;
      puVar3[1] = uVar9 | uVar10;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 144b32e3a FUN_144b32e3a body=161 status=ok
// SIG undefined FUN_144b32e3a(void)

void FUN_144b32e3a(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  uVar2 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar4 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar10 = *(longlong *)(param_1 + 0x50);
    uVar13 = (ulonglong)((uint)uVar1 * 0xa0);
    iVar7 = *(int *)(lVar10 + 0x3c + uVar13);
    lVar10 = *(longlong *)
              (*(longlong *)(lVar10 + 0x10 + uVar13) +
              (longlong)(int)((uint)uVar4 + *(int *)(lVar10 + 0x30 + uVar13)) * 8);
    lVar11 = 0;
    do {
      lVar12 = (longlong)*(int *)((ulonglong)((uint)uVar2 * iVar5) + lVar9 + lVar11 * 4);
      if (lVar12 != -1) {
        *(undefined4 *)((longlong)iVar7 * 4 + lVar10 + lVar12 * 4) =
             *(undefined4 *)((ulonglong)((uint)uVar3 * iVar5) + lVar9 + lVar11 * 4);
      }
      lVar11 = lVar11 + 1;
    } while (iVar6 != (int)lVar11);
  }
  return;
}



// FUNCTION 144b32edc FUN_144b32edc body=165 status=ok
// SIG undefined FUN_144b32edc(void)

void FUN_144b32edc(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  
  puVar8 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar8;
  *(ushort **)(param_1 + 0x10) = puVar8 + 1;
  uVar2 = puVar8[1];
  *(ushort **)(param_1 + 0x10) = puVar8 + 2;
  lVar9 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar3 = puVar8[2];
  *(ushort **)(param_1 + 0x10) = puVar8 + 3;
  uVar4 = puVar8[3];
  *(ushort **)(param_1 + 0x10) = puVar8 + 4;
  iVar6 = *(int *)(param_1 + 0x40);
  if (0 < iVar6) {
    lVar10 = *(longlong *)(param_1 + 0x50);
    uVar13 = (ulonglong)((uint)uVar1 * 0xa0);
    iVar7 = *(int *)(lVar10 + 0x3c + uVar13);
    lVar10 = *(longlong *)
              (*(longlong *)(lVar10 + 0x10 + uVar13) +
              (longlong)(int)((uint)uVar4 + *(int *)(lVar10 + 0x2c + uVar13)) * 8);
    lVar11 = 0;
    do {
      lVar12 = (longlong)*(int *)((ulonglong)((uint)uVar2 * iVar5) + lVar9 + lVar11 * 4);
      if (lVar12 != -1) {
        *(undefined4 *)((longlong)iVar7 * 4 + lVar10 + lVar12 * 4) =
             *(undefined4 *)((ulonglong)((uint)uVar3 * iVar5) + lVar9 + lVar11 * 4);
      }
      lVar11 = lVar11 + 1;
    } while (iVar6 != (int)lVar11);
  }
  return;
}



// FUNCTION 144b32f82 FUN_144b32f82 body=189 status=ok
// SIG undefined FUN_144b32f82(void)

void FUN_144b32f82(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  uVar3 = puVar7[1];
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar5 = *(int *)(param_1 + 0x80);
  lVar8 = *(longlong *)(param_1 + 0x70);
  uVar4 = puVar7[2];
  uVar13 = (uint)uVar4;
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = **(int **)(param_1 + 0x20);
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar4) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = (*(int **)(param_1 + 0x20))[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) + (longlong)(int)uVar13);
  uVar4 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar11 = *(int *)(param_1 + 0x40);
  if (0 < iVar11) {
    lVar14 = *(longlong *)(param_1 + 0x50);
    uVar9 = (ulonglong)((uint)uVar2 * 0xa0);
    iVar6 = *(int *)(lVar14 + 0x3c + uVar9);
    lVar14 = *(longlong *)
              (*(longlong *)(lVar14 + 0x10 + uVar9) +
              (longlong)(int)((uint)uVar4 + *(int *)(lVar14 + 0x2c + uVar9)) * 8);
    lVar10 = 0;
    do {
      lVar12 = (longlong)*(int *)((ulonglong)((uint)uVar3 * iVar5) + lVar8 + lVar10 * 4);
      if (lVar12 != -1) {
        *(undefined4 *)((longlong)iVar6 * 4 + lVar14 + lVar12 * 4) = uVar1;
      }
      lVar10 = lVar10 + 1;
    } while (iVar11 != (int)lVar10);
  }
  return;
}



// FUNCTION 144b33040 FUN_144b33040 body=529 status=ok
// SIG undefined FUN_144b33040(void)

void FUN_144b33040(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  int *piVar10;
  int iVar11;
  undefined1 (*pauVar12) [16];
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  piVar10 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)((uint)uVar3 * 0xa0) + 0x38);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  lVar6 = *(longlong *)(param_1 + 0x70);
  iVar14 = *(int *)(param_1 + 0x80);
  uVar4 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  lVar13 = (ulonglong)((uint)uVar4 * iVar14) + lVar6;
  uVar8 = *(uint *)(param_1 + 0x40);
  uVar9 = (ulonglong)uVar8;
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    if (0 < (int)uVar8) {
      uVar1 = uVar9 + 3;
      pauVar12 = (undefined1 (*) [16])(lVar6 + (ulonglong)(iVar14 * (uint)uVar3));
      uVar15 = 0;
      iVar14 = 0;
      do {
        auVar2 = *pauVar12;
        pauVar12 = pauVar12 + 1;
        iVar11 = (int)uVar9;
        iVar7 = 4;
        if (iVar11 < 4) {
          iVar7 = iVar11;
        }
        uVar8 = movmskps(iVar7,auVar2);
        uVar8 = ~(0xff << ((byte)iVar7 & 0x1f)) & uVar8;
        *(char *)(lVar13 + uVar15) = (char)uVar8;
        uVar9 = (ulonglong)uVar8 - (ulonglong)(uVar8 >> 1 & 0xfffffffd);
        uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
        iVar14 = iVar14 + (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) *
                                       0x101010101010101 >> 0x38);
        uVar9 = (ulonglong)(iVar11 - 4);
        uVar15 = uVar15 + 1;
      } while (uVar1 >> 2 != uVar15);
      if (iVar14 != 0) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + iVar14;
        UNLOCK();
        goto LAB_144b33167;
      }
    }
  }
  else if (0 < (int)uVar8) {
    uVar1 = uVar9 + 3;
    pauVar12 = (undefined1 (*) [16])(lVar6 + (ulonglong)(iVar14 * (uint)uVar3));
    uVar15 = 0;
    iVar14 = 0;
    do {
      auVar2 = *pauVar12;
      pauVar12 = pauVar12 + 1;
      iVar11 = (int)uVar9;
      iVar7 = 4;
      if (iVar11 < 4) {
        iVar7 = iVar11;
      }
      uVar8 = movmskps(iVar7,auVar2);
      uVar8 = ~(0xff << ((byte)iVar7 & 0x1f)) & uVar8;
      *(char *)(lVar13 + uVar15) = (char)uVar8;
      uVar9 = (ulonglong)uVar8 - (ulonglong)(uVar8 >> 1 & 0xfffffffd);
      uVar9 = (uVar9 >> 2 & 0x3333333333333333) + (uVar9 & 0x3333333333333333);
      iVar14 = iVar14 + (uint)(byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101
                                    >> 0x38);
      uVar9 = (ulonglong)(iVar11 - 4);
      uVar15 = uVar15 + 1;
    } while (uVar1 >> 2 != uVar15);
    if (iVar14 != 0) {
      iVar7 = *piVar10;
      *piVar10 = iVar7 + iVar14;
LAB_144b33167:
      *(int *)(param_1 + 0xa4) = iVar7 + 1;
      bVar16 = *(int *)(param_1 + 0x40) == iVar14;
      goto LAB_144b33177;
    }
  }
  bVar16 = true;
  iVar14 = 0;
LAB_144b33177:
  *(int *)(param_1 + 0xa8) = iVar14;
  *(bool *)(param_1 + 0xac) = bVar16;
  return;
}



// FUNCTION 144b3332e FUN_144b3332e body=591 status=ok
// SIG undefined FUN_144b3332e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b3332e(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined1 auVar5 [16];
  ushort uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 in_XMM0 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar4 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar4 + 2;
    *(ushort **)(param_1 + 0x10) = puVar4 + (ulonglong)puVar4[2] * 2 + 3;
  }
  else {
    uVar2 = *puVar4;
    *(ushort **)(param_1 + 0x10) = puVar4 + 2;
    uVar3 = puVar4[2];
    *(ushort **)(param_1 + 0x10) = puVar4 + 3;
    auVar5 = _DAT_149931e80;
    if (uVar3 != 0) {
      uVar6 = 0;
      uVar11 = (ulonglong)((uint)uVar2 * 0xa0);
      auVar17 = pmovsxbq(in_XMM0,0x302);
      auVar18 = pmovsxbq(in_XMM1,0x100);
      do {
        puVar4 = *(ushort **)(param_1 + 0x10);
        uVar2 = *puVar4;
        uVar13 = (uint)uVar2;
        *(ushort **)(param_1 + 0x10) = puVar4 + 1;
        iVar8 = **(int **)(param_1 + 0x20);
        lVar7 = 0;
        if (iVar8 <= (int)(uint)uVar2) {
          do {
            uVar13 = uVar13 - iVar8;
            iVar8 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
            lVar7 = lVar7 + 1;
          } while (iVar8 <= (int)uVar13);
        }
        lVar14 = *(longlong *)(param_1 + 0x50);
        uVar1 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) + (longlong)(int)uVar13);
        uVar2 = puVar4[1];
        *(ushort **)(param_1 + 0x10) = puVar4 + 2;
        lVar7 = *(longlong *)
                 (*(longlong *)(lVar14 + 0x10 + uVar11) +
                 (longlong)(int)((uint)uVar2 + *(int *)(lVar14 + 0x2c + uVar11)) * 8);
        lVar14 = (longlong)*(int *)(lVar14 + 0x3c + uVar11);
        iVar8 = *(int *)(param_1 + 0xa4);
        uVar13 = *(uint *)(param_1 + 0xa8);
        uVar9 = uVar13 & 0xfffffffc;
        if ((uVar9 != 0) && (0 < (int)uVar9)) {
          auVar21._4_4_ = uVar1;
          auVar21._0_4_ = uVar1;
          auVar21._8_4_ = uVar1;
          auVar21._12_4_ = uVar1;
          uVar15 = 0;
          do {
            *(undefined1 (*) [16])((longlong)iVar8 * 4 + lVar14 * 4 + lVar7 + uVar15 * 4) = auVar21;
            uVar15 = uVar15 + 4;
          } while (uVar15 < uVar9);
        }
        if (uVar9 != uVar13) {
          uVar12 = (ulonglong)(int)uVar13;
          uVar10 = (ulonglong)(int)uVar9;
          uVar15 = uVar10 | 1;
          if ((longlong)(uVar10 | 1) <= (longlong)uVar12) {
            uVar15 = uVar12;
          }
          lVar16 = ~uVar10 + uVar15;
          auVar19._8_4_ = (int)lVar16;
          auVar19._0_8_ = lVar16;
          auVar19._12_4_ = (int)((ulonglong)lVar16 >> 0x20);
          if ((longlong)uVar12 < (longlong)(uVar10 + 1)) {
            uVar12 = uVar10 + 1;
          }
          lVar7 = lVar7 + (longlong)iVar8 * 4 + lVar14 * 4 + uVar10 * 4;
          uVar15 = 0;
          do {
            lVar14 = SUB168(auVar19 ^ auVar5,0);
            lVar16 = SUB168(auVar19 ^ auVar5,8);
            if ((bool)(~(lVar14 < (longlong)(uVar15 ^ auVar5._0_8_)) & 1)) {
              *(undefined4 *)(lVar7 + uVar15 * 4) = uVar1;
            }
            auVar20._8_4_ = (int)uVar15;
            auVar20._0_8_ = uVar15;
            auVar20._12_4_ = (int)(uVar15 >> 0x20);
            if ((longlong)((auVar20._8_8_ | auVar18._8_8_) ^ auVar5._8_8_) <= lVar16) {
              *(undefined4 *)(lVar7 + 4 + uVar15 * 4) = uVar1;
            }
            auVar21 = (auVar20 | auVar17) ^ auVar5;
            if (auVar21._0_8_ <= lVar14) {
              *(undefined4 *)(lVar7 + 8 + uVar15 * 4) = uVar1;
            }
            if (auVar21._8_8_ <= lVar16) {
              *(undefined4 *)(lVar7 + 0xc + uVar15 * 4) = uVar1;
            }
            uVar15 = uVar15 + 4;
          } while (((uVar12 - uVar10) + 3 & 0xfffffffffffffffc) != uVar15);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar3);
    }
  }
  return;
}



// FUNCTION 144b3357e FUN_144b3357e body=578 status=ok
// SIG undefined FUN_144b3357e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144b3357e(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar5 + 2;
    *(ushort **)(param_1 + 0x10) = puVar5 + (ulonglong)puVar5[2] * 2 + 3;
  }
  else {
    uVar2 = *puVar5;
    *(ushort **)(param_1 + 0x10) = puVar5 + 2;
    uVar3 = puVar5[2];
    *(ushort **)(param_1 + 0x10) = puVar5 + 3;
    auVar6 = _DAT_149931e80;
    if (uVar3 != 0) {
      uVar7 = 0;
      uVar14 = (ulonglong)((uint)uVar2 * 0xa0);
      auVar18 = pmovsxbq(in_XMM0,0x302);
      auVar19 = pmovsxbq(in_XMM1,0x100);
      do {
        puVar5 = *(ushort **)(param_1 + 0x10);
        uVar2 = *puVar5;
        uVar15 = (uint)uVar2;
        *(ushort **)(param_1 + 0x10) = puVar5 + 1;
        iVar13 = **(int **)(param_1 + 0x20);
        lVar10 = 0;
        if (iVar13 <= (int)(uint)uVar2) {
          do {
            uVar15 = uVar15 - iVar13;
            iVar13 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
            lVar10 = lVar10 + 1;
          } while (iVar13 <= (int)uVar15);
        }
        lVar11 = *(longlong *)(param_1 + 0x50);
        uVar4 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) + (longlong)(int)uVar15)
        ;
        uVar2 = puVar5[1];
        *(ushort **)(param_1 + 0x10) = puVar5 + 2;
        lVar10 = *(longlong *)
                  (*(longlong *)(lVar11 + 0x10 + uVar14) +
                  (longlong)(int)((uint)uVar2 + *(int *)(lVar11 + 0x30 + uVar14)) * 8);
        lVar11 = (longlong)*(int *)(lVar11 + 0x3c + uVar14);
        iVar13 = *(int *)(param_1 + 0xa4);
        uVar15 = *(uint *)(param_1 + 0xa8);
        uVar8 = uVar15 & 0xfffffffc;
        if ((uVar8 != 0) && (0 < (int)uVar8)) {
          uVar16 = 0;
          do {
            puVar1 = (undefined4 *)((longlong)iVar13 * 4 + lVar11 * 4 + lVar10 + uVar16 * 4);
            *puVar1 = uVar4;
            puVar1[1] = uVar4;
            puVar1[2] = uVar4;
            puVar1[3] = uVar4;
            uVar16 = uVar16 + 4;
          } while (uVar16 < uVar8);
        }
        if (uVar8 != uVar15) {
          uVar16 = (ulonglong)(int)uVar15;
          uVar9 = (ulonglong)(int)uVar8;
          uVar12 = uVar9 | 1;
          if ((longlong)(uVar9 | 1) <= (longlong)uVar16) {
            uVar12 = uVar16;
          }
          lVar17 = ~uVar9 + uVar12;
          auVar20._8_4_ = (int)lVar17;
          auVar20._0_8_ = lVar17;
          auVar20._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
          if ((longlong)uVar16 < (longlong)(uVar9 + 1)) {
            uVar16 = uVar9 + 1;
          }
          lVar10 = lVar10 + (longlong)iVar13 * 4 + lVar11 * 4 + uVar9 * 4;
          uVar12 = 0;
          do {
            lVar11 = SUB168(auVar20 ^ auVar6,0);
            lVar17 = SUB168(auVar20 ^ auVar6,8);
            if ((bool)(~(lVar11 < (longlong)(uVar12 ^ auVar6._0_8_)) & 1)) {
              *(undefined4 *)(lVar10 + uVar12 * 4) = uVar4;
            }
            auVar21._8_4_ = (int)uVar12;
            auVar21._0_8_ = uVar12;
            auVar21._12_4_ = (int)(uVar12 >> 0x20);
            if ((longlong)((auVar21._8_8_ | auVar19._8_8_) ^ auVar6._8_8_) <= lVar17) {
              *(undefined4 *)(lVar10 + 4 + uVar12 * 4) = uVar4;
            }
            auVar21 = (auVar21 | auVar18) ^ auVar6;
            if (auVar21._0_8_ <= lVar11) {
              *(undefined4 *)(lVar10 + 8 + uVar12 * 4) = uVar4;
            }
            if (auVar21._8_8_ <= lVar17) {
              *(undefined4 *)(lVar10 + 0xc + uVar12 * 4) = uVar4;
            }
            uVar12 = uVar12 + 4;
          } while (((uVar16 - uVar9) + 3 & 0xfffffffffffffffc) != uVar12);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar3);
    }
  }
  return;
}



// FUNCTION 144b337c0 FUN_144b337c0 body=197 status=ok
// SIG undefined FUN_144b337c0(void)

void FUN_144b337c0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar3 + 2;
    *(ushort **)(param_1 + 0x10) = puVar3 + (ulonglong)puVar3[2] * 2 + 3;
  }
  else {
    uVar1 = *puVar3;
    *(ushort **)(param_1 + 0x10) = puVar3 + 2;
    uVar6 = puVar3[2];
    *(ushort **)(param_1 + 0x10) = puVar3 + 3;
    if (uVar6 != 0) {
      uVar5 = (ulonglong)((uint)uVar1 * 0xa0);
      do {
        puVar3 = *(ushort **)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x50);
        uVar1 = *puVar3;
        *(ushort **)(param_1 + 0x10) = puVar3 + 1;
        uVar2 = puVar3[1];
        *(ushort **)(param_1 + 0x10) = puVar3 + 2;
        memcpy((void *)((longlong)*(int *)(lVar4 + 0x3c + uVar5) * 4 +
                        *(longlong *)
                         (*(longlong *)(lVar4 + 0x10 + uVar5) +
                         (longlong)(int)((uint)uVar2 + *(int *)(lVar4 + 0x2c + uVar5)) * 8) +
                       (longlong)*(int *)(param_1 + 0xa4) * 4),
               (void *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70)),(longlong)*(int *)(param_1 + 0xa8) << 2);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 144b33886 FUN_144b33886 body=197 status=ok
// SIG undefined FUN_144b33886(void)

void FUN_144b33886(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ushort uVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xa8) == 0) {
    *(ushort **)(param_1 + 0x10) = puVar3 + 2;
    *(ushort **)(param_1 + 0x10) = puVar3 + (ulonglong)puVar3[2] * 2 + 3;
  }
  else {
    uVar1 = *puVar3;
    *(ushort **)(param_1 + 0x10) = puVar3 + 2;
    uVar6 = puVar3[2];
    *(ushort **)(param_1 + 0x10) = puVar3 + 3;
    if (uVar6 != 0) {
      uVar5 = (ulonglong)((uint)uVar1 * 0xa0);
      do {
        puVar3 = *(ushort **)(param_1 + 0x10);
        lVar4 = *(longlong *)(param_1 + 0x50);
        uVar1 = *puVar3;
        *(ushort **)(param_1 + 0x10) = puVar3 + 1;
        uVar2 = puVar3[1];
        *(ushort **)(param_1 + 0x10) = puVar3 + 2;
        memcpy((void *)((longlong)*(int *)(lVar4 + 0x3c + uVar5) * 4 +
                        *(longlong *)
                         (*(longlong *)(lVar4 + 0x10 + uVar5) +
                         (longlong)(int)((uint)uVar2 + *(int *)(lVar4 + 0x30 + uVar5)) * 8) +
                       (longlong)*(int *)(param_1 + 0xa4) * 4),
               (void *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70)),(longlong)*(int *)(param_1 + 0xa8) << 2);
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
  }
  return;
}



// FUNCTION 144b3394c FUN_144b3394c body=796 status=ok
// SIG undefined FUN_144b3394c(void)

void FUN_144b3394c(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  ushort uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 (*pauVar18) [16];
  undefined1 auVar19 [16];
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar6 + 4;
    *(ulonglong *)(param_1 + 0x10) = lVar6 + (ulonglong)*(ushort *)(lVar6 + 4) * 4 + 6;
  }
  else {
    puVar4 = *(ushort **)(param_1 + 0x10);
    uVar2 = *puVar4;
    if (*(char *)(param_1 + 0xac) == '\x01') {
      *(ushort **)(param_1 + 0x10) = puVar4 + 2;
      uVar13 = puVar4[2];
      *(ushort **)(param_1 + 0x10) = puVar4 + 3;
      if (uVar13 != 0) {
        uVar7 = (ulonglong)((uint)uVar2 * 0xa0);
        do {
          puVar4 = *(ushort **)(param_1 + 0x10);
          lVar6 = *(longlong *)(param_1 + 0x50);
          uVar2 = *puVar4;
          *(ushort **)(param_1 + 0x10) = puVar4 + 1;
          uVar3 = puVar4[1];
          *(ushort **)(param_1 + 0x10) = puVar4 + 2;
          memcpy((void *)((longlong)*(int *)(lVar6 + 0x3c + uVar7) * 4 +
                          *(longlong *)
                           (*(longlong *)(lVar6 + 0x10 + uVar7) +
                           (longlong)(int)((uint)uVar3 + *(int *)(lVar6 + 0x2c + uVar7)) * 8) +
                         (longlong)*(int *)(param_1 + 0xa4) * 4),
                 (void *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70)),(longlong)*(int *)(param_1 + 0xa8) << 2);
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
    }
    else {
      *(ushort **)(param_1 + 0x10) = puVar4 + 1;
      uVar13 = puVar4[1];
      *(ushort **)(param_1 + 0x10) = puVar4 + 2;
      uVar3 = puVar4[2];
      *(ushort **)(param_1 + 0x10) = puVar4 + 3;
      if (uVar3 != 0) {
        lVar6 = (ulonglong)((uint)uVar13 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
        ;
        uVar13 = 0;
        uVar7 = (ulonglong)((uint)uVar2 * 0xa0);
        do {
          puVar4 = *(ushort **)(param_1 + 0x10);
          lVar15 = *(longlong *)(param_1 + 0x50);
          uVar2 = *puVar4;
          *(ushort **)(param_1 + 0x10) = puVar4 + 1;
          uVar17 = (ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80));
          lVar5 = *(longlong *)(param_1 + 0x70);
          uVar2 = puVar4[1];
          *(ushort **)(param_1 + 0x10) = puVar4 + 2;
          pauVar18 = (undefined1 (*) [16])
                     ((longlong)*(int *)(lVar15 + 0x3c + uVar7) * 4 +
                      *(longlong *)
                       (*(longlong *)(lVar15 + 0x10 + uVar7) +
                       (longlong)(int)((uint)uVar2 + *(int *)(lVar15 + 0x2c + uVar7)) * 8) +
                     (longlong)*(int *)(param_1 + 0xa4) * 4);
          iVar12 = *(int *)(param_1 + 0xa8);
          if (iVar12 < 4) {
            uVar8 = 0;
          }
          else {
            pauVar14 = (undefined1 (*) [16])(lVar5 + uVar17);
            uVar8 = 0;
            do {
              uVar10 = (ulonglong)*(char *)(lVar6 + uVar8);
              uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
              uVar11 = (uVar11 >> 2 & 0x3333333333333333) + (uVar11 & 0x3333333333333333);
              auVar19 = pshufb(*pauVar14,*(undefined1 (*) [16])(&DAT_14cb2bae0 + uVar10 * 0x10));
              lVar15 = ((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              *pauVar18 = auVar19;
              pauVar18 = (undefined1 (*) [16])(*pauVar18 + (lVar15 >> 0x38) * 4);
              iVar12 = iVar12 - (char)((ulonglong)lVar15 >> 0x38);
              uVar8 = uVar8 + 1;
              pauVar14 = pauVar14 + 1;
            } while (3 < iVar12);
          }
          if (iVar12 != 0) {
            uVar9 = 0;
            lVar15 = 0;
            do {
              cVar1 = *(char *)((uVar8 & 0xffffffff) + lVar6 + lVar15);
              uVar10 = (longlong)cVar1 - ((ulonglong)(longlong)cVar1 >> 1 & 0x5555555555555555);
              uVar10 = (uVar10 >> 2 & 0x3333333333333333) + (uVar10 & 0x3333333333333333);
              uVar10 = ((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar10 >> 0x38 != 0) {
                lVar16 = 0;
                do {
                  if (((uint)(int)cVar1 >> ((uint)lVar16 & 0x1f) & 1) != 0) {
                    *(undefined4 *)*pauVar18 =
                         *(undefined4 *)
                          ((ulonglong)(uVar9 >> 2) * 0x10 +
                           lVar5 + (ulonglong)(uint)((int)uVar8 << 2) * 4 + uVar17 + lVar16 * 4);
                    pauVar18 = (undefined1 (*) [16])(*pauVar18 + 4);
                  }
                  lVar16 = lVar16 + 1;
                } while (lVar16 != 4);
                iVar12 = iVar12 - (char)(uVar10 >> 0x38);
              }
              lVar15 = lVar15 + 1;
              uVar9 = uVar9 + 4;
            } while (iVar12 != 0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar3);
      }
    }
  }
  return;
}



// FUNCTION 144b33c68 FUN_144b33c68 body=823 status=ok
// SIG undefined FUN_144b33c68(void)

void FUN_144b33c68(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  int iVar11;
  ushort uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  
  if (*(int *)(param_1 + 0xa8) == 0) {
    lVar6 = *(longlong *)(param_1 + 0x10);
    *(longlong *)(param_1 + 0x10) = lVar6 + 4;
    *(ulonglong *)(param_1 + 0x10) = lVar6 + (ulonglong)*(ushort *)(lVar6 + 4) * 4 + 6;
  }
  else {
    puVar4 = *(ushort **)(param_1 + 0x10);
    uVar2 = *puVar4;
    if (*(char *)(param_1 + 0xac) == '\x01') {
      *(ushort **)(param_1 + 0x10) = puVar4 + 2;
      uVar12 = puVar4[2];
      *(ushort **)(param_1 + 0x10) = puVar4 + 3;
      if (uVar12 != 0) {
        uVar7 = (ulonglong)((uint)uVar2 * 0xa0);
        do {
          puVar4 = *(ushort **)(param_1 + 0x10);
          lVar6 = *(longlong *)(param_1 + 0x50);
          uVar2 = *puVar4;
          *(ushort **)(param_1 + 0x10) = puVar4 + 1;
          uVar3 = puVar4[1];
          *(ushort **)(param_1 + 0x10) = puVar4 + 2;
          memcpy((void *)((longlong)*(int *)(lVar6 + 0x3c + uVar7) * 4 +
                          *(longlong *)
                           (*(longlong *)(lVar6 + 0x10 + uVar7) +
                           (longlong)(int)((uint)uVar3 + *(int *)(lVar6 + 0x30 + uVar7)) * 8) +
                         (longlong)*(int *)(param_1 + 0xa4) * 4),
                 (void *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70)),(longlong)*(int *)(param_1 + 0xa8) << 2);
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
    }
    else {
      *(ushort **)(param_1 + 0x10) = puVar4 + 1;
      uVar12 = puVar4[1];
      *(ushort **)(param_1 + 0x10) = puVar4 + 2;
      uVar3 = puVar4[2];
      *(ushort **)(param_1 + 0x10) = puVar4 + 3;
      if (uVar3 != 0) {
        lVar6 = (ulonglong)((uint)uVar12 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
        ;
        uVar12 = 0;
        uVar7 = (ulonglong)((uint)uVar2 * 0xa0);
        do {
          puVar4 = *(ushort **)(param_1 + 0x10);
          lVar13 = *(longlong *)(param_1 + 0x50);
          uVar2 = *puVar4;
          *(ushort **)(param_1 + 0x10) = puVar4 + 1;
          uVar16 = (ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80));
          lVar5 = *(longlong *)(param_1 + 0x70);
          uVar2 = puVar4[1];
          *(ushort **)(param_1 + 0x10) = puVar4 + 2;
          pauVar17 = (undefined1 (*) [16])
                     ((longlong)*(int *)(lVar13 + 0x3c + uVar7) * 4 +
                      *(longlong *)
                       (*(longlong *)(lVar13 + 0x10 + uVar7) +
                       (longlong)(int)((uint)uVar2 + *(int *)(lVar13 + 0x30 + uVar7)) * 8) +
                     (longlong)*(int *)(param_1 + 0xa4) * 4);
          iVar11 = *(int *)(param_1 + 0xa8);
          if (iVar11 < 4) {
            uVar8 = 0;
          }
          else {
            pauVar10 = (undefined1 (*) [16])(lVar5 + uVar16);
            uVar8 = 0;
            do {
              uVar9 = (ulonglong)*(char *)(lVar6 + uVar8);
              uVar14 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
              uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
              auVar18 = pshufb(*pauVar10,*(undefined1 (*) [16])(&DAT_14cb2bae0 + uVar9 * 0x10));
              lVar13 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              *pauVar17 = auVar18;
              pauVar17 = (undefined1 (*) [16])(*pauVar17 + (lVar13 >> 0x38) * 4);
              iVar11 = iVar11 - (char)((ulonglong)lVar13 >> 0x38);
              uVar8 = uVar8 + 1;
              pauVar10 = pauVar10 + 1;
            } while (3 < iVar11);
          }
          if (iVar11 != 0) {
            uVar9 = 0;
            lVar13 = 0;
            do {
              cVar1 = *(char *)((uVar8 & 0xffffffff) + lVar6 + lVar13);
              uVar14 = (longlong)cVar1 - ((ulonglong)(longlong)cVar1 >> 1 & 0x5555555555555555);
              uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
              uVar14 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
              if (uVar14 >> 0x38 != 0) {
                lVar15 = 0;
                do {
                  if (((uint)(int)cVar1 >> ((uint)lVar15 & 0x1f) & 1) != 0) {
                    *(undefined4 *)*pauVar17 =
                         *(undefined4 *)
                          ((uVar9 >> 2 & 0x3fffffff) * 0x10 +
                           lVar5 + (ulonglong)(uint)((int)uVar8 << 2) * 4 + uVar16 + lVar15 * 4);
                    pauVar17 = (undefined1 (*) [16])(*pauVar17 + 4);
                  }
                  lVar15 = lVar15 + 1;
                } while (lVar15 != 4);
                iVar11 = iVar11 - (char)(uVar14 >> 0x38);
              }
              lVar13 = lVar13 + 1;
              uVar9 = uVar9 + 4;
            } while (iVar11 != 0);
          }
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar3);
      }
    }
  }
  return;
}



// FUNCTION 144b33fa0 FUN_144b33fa0 body=154 status=ok
// SIG undefined FUN_144b33fa0(void)

void FUN_144b33fa0(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  
  if (*(char *)(param_1 + 0xa0) == '\x01') {
    FUN_14803e0d4();
    return;
  }
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  uVar2 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar6[2];
  *(ushort **)(param_1 + 0x10) = puVar6 + 3;
  iVar5 = *(int *)(param_1 + 0x40);
  if (0 < iVar5) {
    piVar8 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)((uint)uVar1 * 0xa0) + 0x38);
    lVar9 = 0;
    do {
      if (*(int *)((ulonglong)((uint)uVar2 * iVar4) + lVar7 + lVar9 * 4) == 0) {
        iVar10 = -1;
      }
      else {
        iVar10 = *piVar8 + 1;
        *piVar8 = iVar10;
      }
      *(int *)((ulonglong)((uint)uVar3 * iVar4) + lVar7 + lVar9 * 4) = iVar10;
      lVar9 = lVar9 + 1;
    } while (iVar5 != (int)lVar9);
  }
  return;
}



// FUNCTION 144b3403a FUN_144b3403a body=181 status=ok
// SIG undefined FUN_144b3403a(void)

void FUN_144b3403a(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  if (*(char *)(param_1 + 0xa0) != '\x01') {
    puVar5 = *(ushort **)(param_1 + 0x10);
    uVar1 = *puVar5;
    *(ushort **)(param_1 + 0x10) = puVar5 + 1;
    uVar2 = puVar5[1];
    uVar10 = (uint)uVar2;
    *(ushort **)(param_1 + 0x10) = puVar5 + 2;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                    (longlong)(int)uVar10);
    uVar2 = puVar5[2];
    *(ushort **)(param_1 + 0x10) = puVar5 + 3;
    iVar3 = *(int *)(param_1 + 0x40);
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x80);
      piVar6 = (int *)(*(longlong *)(param_1 + 0x50) + (ulonglong)((uint)uVar1 * 0xa0) + 0x38);
      lVar11 = *(longlong *)(param_1 + 0x70);
      lVar7 = 0;
      do {
        if (iVar9 == 0) {
          iVar8 = -1;
        }
        else {
          iVar8 = *piVar6 + 1;
          *piVar6 = iVar8;
        }
        *(int *)((ulonglong)((uint)uVar2 * iVar4) + lVar11 + lVar7 * 4) = iVar8;
        lVar7 = lVar7 + 1;
      } while (iVar3 != (int)lVar7);
    }
    return;
  }
  FUN_14803e160();
  return;
}



// FUNCTION 144b34100 FUN_144b34100 body=195 status=ok
// SIG undefined FUN_144b34100(void)

void FUN_144b34100(longlong param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar4 + 1U) {
    FUN_14472e0ae(param_1 + 0x10,iVar4);
  }
  lVar7 = param_1 + 0x10;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x90);
  }
  lVar6 = (longlong)iVar4 * 0x10;
  *(undefined8 *)(lVar7 + lVar6) = 0;
  ((undefined8 *)(lVar7 + lVar6))[1] = 0;
  puVar5 = &DAT_14caf6048;
  if (*(undefined8 **)(param_1 + 0x138) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_1 + 0x138);
  }
  *(undefined8 **)(lVar7 + lVar6) = puVar5;
  *(undefined2 *)(lVar7 + 0xc + lVar6) = 8;
  *(undefined4 *)(lVar7 + 8 + lVar6) = 0;
  lVar6 = DAT_14cb2cc68;
  lVar7 = *(longlong *)(param_1 + 0x110);
  if (lVar7 != DAT_14cb2cc68) {
    *(longlong *)(param_1 + 0x110) = DAT_14cb2cc68;
    if (lVar6 != 0) {
      LOCK();
      piVar1 = (int *)(lVar6 + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    if (lVar7 != 0) {
      LOCK();
      puVar2 = (uint *)(lVar7 + 8);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
        return;
      }
    }
  }
  return;
}



// FUNCTION 144b341cc FUN_144b341cc body=861 status=ok
// SIG undefined FUN_144b341cc(void)

void FUN_144b341cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = DAT_14ca94db8;
  if (param_1 == 0) {
    lVar7 = *(longlong *)(DAT_14ca94db8 + 0x10);
    *param_2 = lVar7;
    param_2[1] = lVar7;
    lVar7 = DAT_14ca94dc0;
    param_2[2] = *(longlong *)(DAT_14ca94dc0 + 0x10);
    param_2[3] = *(longlong *)(lVar8 + 0x10);
    memset(param_2 + 4,0,0x18c);
    param_2[0x36] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x37) = DAT_14c846338;
    param_2[0x38] = DAT_14c846330;
    *(undefined4 *)(param_2 + 0x39) = DAT_14c846338;
    *(undefined8 *)((longlong)param_2 + 0x1cc) = 0;
    *(undefined8 *)((longlong)param_2 + 0x1d4) = 0;
    param_2[0x41] = *(longlong *)(lVar7 + 0x10);
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x188);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar8 == 0)) {
      lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    *param_2 = lVar8;
    lVar8 = *(longlong *)(param_1 + 400);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar8 == 0)) {
      lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    param_2[1] = lVar8;
    lVar8 = *(longlong *)(param_1 + 0x1a0);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar8 == 0)) {
      lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    param_2[2] = lVar8;
    lVar8 = *(longlong *)(param_1 + 0x1a8);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar8 == 0)) {
      lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    param_2[3] = lVar8;
    lVar8 = -0x60;
    do {
      puVar1 = (undefined8 *)(param_1 + 0x60 + lVar8);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar8 + 0x80);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(param_1 + 0xc0 + lVar8);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar8 + 0xe0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(param_1 + 0x120 + lVar8);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar8 + 0x140);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar1 = (undefined8 *)(param_1 + 0x180 + lVar8);
      uVar6 = puVar1[1];
      puVar2 = (undefined8 *)((longlong)param_2 + lVar8 + 0x1a0);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      lVar8 = lVar8 + 0x10;
    } while (lVar8 != 0);
    *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_1 + 0x180);
    *(undefined4 *)((longlong)param_2 + 0x1a4) = *(undefined4 *)(param_1 + 0x184);
    *(undefined4 *)(param_2 + 0x35) = *(undefined4 *)(param_1 + 0x1b0);
    dVar4 = *(double *)(param_1 + 0x1c8);
    dVar5 = *(double *)(param_1 + 0x1c0);
    *(float *)(param_2 + 0x36) = (float)*(double *)(param_1 + 0x1b8);
    *(float *)((longlong)param_2 + 0x1b4) = (float)dVar5;
    *(float *)(param_2 + 0x37) = (float)dVar4;
    dVar4 = *(double *)(param_1 + 0x1e0);
    dVar5 = *(double *)(param_1 + 0x1d8);
    *(float *)(param_2 + 0x38) = (float)*(double *)(param_1 + 0x1d0);
    *(float *)((longlong)param_2 + 0x1c4) = (float)dVar5;
    *(float *)(param_2 + 0x39) = (float)dVar4;
    fVar3 = *(float *)(param_1 + 0x1ec);
    *(float *)((longlong)param_2 + 0x1cc) = fVar3;
    *(float *)(param_2 + 0x3a) = 1.0 / fVar3;
    *(undefined4 *)((longlong)param_2 + 0x1d4) = *(undefined4 *)(param_1 + 0x1f0);
    *(undefined4 *)(param_2 + 0x3b) = *(undefined4 *)(param_1 + 500);
    lVar8 = *(longlong *)(param_1 + 0x1f8);
    if ((lVar8 == 0) && (lVar8 = *(longlong *)(DAT_14ca94dc0 + 0x10), lVar8 == 0)) {
      lVar8 = *(longlong *)(DAT_14ca94dc8 + 0x10);
    }
    param_2[0x41] = lVar8;
    lVar7 = *(longlong *)(param_1 + 0x200);
    if ((lVar7 != 0) ||
       (lVar7 = *(longlong *)(DAT_14ca94db8 + 0x10), lVar8 = DAT_14ca94dc8, lVar7 != 0))
    goto LAB_144b3437c;
  }
  lVar7 = *(longlong *)(lVar8 + 0x10);
LAB_144b3437c:
  param_2[0x42] = lVar7;
  *(undefined8 *)((longlong)param_2 + 0x1dc) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1e4) = 0;
  *(undefined4 *)((longlong)param_2 + 0x1ec) = 0;
  lVar8 = DAT_14c9cfce8;
  param_2[0x3e] = DAT_14c9cfce8;
  param_2[0x3f] = lVar8;
  param_2[0x40] = DAT_14c9cfda8;
  return;
}



// FUNCTION 144b3458e FUN_144b3458e body=5 status=ok
// SIG undefined FUN_144b3458e(void)

longlong FUN_144b3458e(longlong param_1)

{
  return param_1 + 0x14;
}



// FUNCTION 144b34594 FUN_144b34594 body=45 status=ok
// SIG undefined FUN_144b34594(void)

undefined8 FUN_144b34594(longlong param_1)

{
  if (*(code **)(param_1 + 0x20) == (code *)&LAB_1480d7d86) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x18) + 0x2b4) = 1;
  }
  else {
    (**(code **)(param_1 + 0x20))();
  }
  return 1;
}



// FUNCTION 144b345c2 FUN_144b345c2 body=297 status=ok
// SIG undefined FUN_144b345c2(void)

int FUN_144b345c2(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  
  iVar8 = *(int *)(param_1 + 0xf4) * 8;
  lVar1 = *(longlong *)(param_1 + 0x2f0);
  if (lVar1 == 0) goto LAB_144b346b2;
  iVar7 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  lVar10 = 0x10;
  if (iVar7 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar7 != 2)) {
      lVar10 = 0x20;
      if (iVar7 == 1) {
        DVar5 = FUN_140ad26c0();
        DVar6 = GetCurrentThreadId();
        if (DVar5 == DVar6) goto LAB_144b346e0;
      }
    }
    else {
LAB_144b346e0:
      lVar10 = 0x10;
    }
  }
  lVar9 = (longlong)*(int *)(lVar1 + 8 + lVar10);
  if (lVar9 == 0) {
    iVar7 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + lVar10);
    lVar10 = 0;
    iVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar10);
      if (plVar2 != (longlong *)0x0) {
        pcVar3 = *(code **)(*plVar2 + 0x48);
        iVar4 = 0x68;
        if ((pcVar3 != (code *)&LAB_144b37fb4) && (iVar4 = 0xb0, pcVar3 != (code *)&LAB_144b3701c))
        {
          if (pcVar3 == (code *)&LAB_144b37022) {
            iVar4 = *(int *)((longlong)plVar2 + 0x234) * 0x14 + 0x58;
          }
          else {
            iVar4 = (*pcVar3)();
          }
        }
        iVar7 = iVar7 + iVar4;
      }
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  iVar8 = iVar8 + iVar7;
LAB_144b346b2:
  return iVar8 + 0x3a0;
}



// FUNCTION 144b34778 FUN_144b34778 body=67 status=ok
// SIG undefined FUN_144b34778(void)

void FUN_144b34778(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x120);
  if (lVar2 != param_2) {
    *(longlong *)(param_1 + 0x120) = param_2;
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + -1;
      UNLOCK();
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x128);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x128) = 0;
    LOCK();
    piVar1 = (int *)(lVar2 + 8);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 144b347bc FUN_144b347bc body=236 status=ok
// SIG undefined FUN_144b347bc(void)

void FUN_144b347bc(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_3c = (undefined1)param_1[4];
  lVar4 = param_1[1];
  local_50 = param_2;
  local_40 = param_3;
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_1;
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar2 + lVar6);
      if (((longlong)iVar1 < 0) || (*(int *)(param_2 + 0x170) <= iVar1)) {
        local_48 = 0;
      }
      else {
        lVar3 = (longlong)iVar1 * 0xc;
        plVar5 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x168) + lVar3);
        local_48 = (longlong)*(int *)(*(longlong *)(param_2 + 0x168) + 8 + lVar3) +
                   *(longlong *)(param_2 + 0x138);
        if ((plVar5 != (longlong *)0x0) && (local_48 != 0)) {
          (**(code **)(*plVar5 + 0x2f8))(plVar5,&local_50);
        }
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)(int)lVar4 * 4 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b348aa FUN_144b348aa body=237 status=ok
// SIG undefined FUN_144b348aa(void)

void FUN_144b348aa(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_3c = *(undefined1 *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x18);
  local_50 = param_2;
  local_40 = param_3;
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar3 + lVar6);
      if (((longlong)iVar2 < 0) || (*(int *)(param_2 + 0x170) <= iVar2)) {
        local_48 = 0;
      }
      else {
        lVar4 = (longlong)iVar2 * 0xc;
        plVar5 = (longlong *)FUN_14479d2ce(*(longlong *)(param_2 + 0x168) + lVar4);
        local_48 = (longlong)*(int *)(*(longlong *)(param_2 + 0x168) + 8 + lVar4) +
                   *(longlong *)(param_2 + 0x138);
        if ((plVar5 != (longlong *)0x0) && (local_48 != 0)) {
          (**(code **)(*plVar5 + 0x300))(plVar5,&local_50);
        }
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b34998 FUN_144b34998 body=9 status=ok
// SIG undefined FUN_144b34998(void)

undefined8 FUN_144b34998(longlong param_1)

{
  return *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10);
}



// FUNCTION 144b349a2 FUN_144b349a2 body=107 status=ok
// SIG undefined FUN_144b349a2(void)

longlong FUN_144b349a2(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if ((*(longlong *)(param_1 + 0x28) != 0) &&
     (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 8), lVar2 != 0)) {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 200) + 0x280) + 0x28);
    lVar4 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x20) + 2) * 0xa8;
    lVar5 = (longlong)*(int *)(lVar3 + 0x70 + lVar4);
    if (lVar5 != 0) {
      lVar1 = lVar3 + 0x68;
      lVar6 = 0;
      do {
        bVar7 = *(longlong *)(*(longlong *)(lVar1 + lVar4) + lVar6) == lVar2;
        lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar7);
        if (bVar7) {
          return lVar3;
        }
        bVar7 = lVar5 * 8 + -8 != lVar6;
        lVar6 = lVar6 + 8;
      } while (bVar7);
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 144b34a0e FUN_144b34a0e body=25 status=ok
// SIG undefined FUN_144b34a0e(void)

void FUN_144b34a0e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x18);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar1 + 0x1c);
  *param_2 = *(undefined8 *)(lVar1 + 0x14);
  return;
}



// FUNCTION 144b34a28 FUN_144b34a28 body=142 status=ok
// SIG undefined FUN_144b34a28(void)

longlong FUN_144b34a28(longlong param_1,short param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  lVar1 = **(longlong **)(param_1 + 0x28);
  uVar2 = *(ulonglong *)(lVar1 + 0x20);
  if ((uVar2 & 1) != 0) {
    uVar2 = ((longlong)uVar2 >> 0x18) + lVar1 + 0x20;
  }
  param_2 = param_2 - (short)*(undefined8 *)(param_1 + 0x38);
  if ((longlong)*(int *)(lVar1 + 0x28) != 0) {
    lVar4 = 0;
    do {
      if (*(short *)(uVar2 + lVar4) == param_2) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar4 = lVar4 + 6;
    } while ((longlong)*(int *)(lVar1 + 0x28) * 6 != lVar4);
  }
  uVar2 = *(ulonglong *)(lVar1 + 0x10);
  if ((uVar2 & 1) != 0) {
    uVar2 = ((longlong)uVar2 >> 0x18) + lVar1 + 0x10;
  }
  lVar1 = (longlong)*(int *)(lVar1 + 0x18);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar4 = lVar1 * 4;
    lVar3 = 0;
    do {
      bVar5 = *(short *)(uVar2 + lVar3) == param_2;
      lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar5);
      if (bVar5) {
        return lVar1;
      }
      bVar5 = lVar4 + -4 != lVar3;
      lVar3 = lVar3 + 4;
    } while (bVar5);
  }
  return lVar1;
}



// FUNCTION 144b34ab6 FUN_144b34ab6 body=86 status=ok
// SIG undefined FUN_144b34ab6(void)

undefined2 FUN_144b34ab6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (longlong)*(int *)(*(longlong *)(param_1 + 0x30) + 0x40);
  if (lVar2 != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x38);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar3) == param_2) {
        return *(undefined2 *)(lVar1 + 8 + lVar3);
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar2 * 0x10 != lVar3);
  }
  FUN_140033559(".\\../Plugins/FX/Niagara/Source/Niagara/Private/NiagaraDataInterface.cpp",0x1f6,
                L"Failed to find Included Parameter Struct \'%s\' in parameters",
                *(undefined8 *)(param_2 + 0x10));
  return 0;
}



// FUNCTION 144b34b0c FUN_144b34b0c body=317 status=ok
// SIG undefined FUN_144b34b0c(void)

bool FUN_144b34b0c(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0xc);
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 144b34dfa FUN_144b34dfa body=635 status=ok
// SIG undefined FUN_144b34dfa(void)

void FUN_144b34dfa(longlong param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int iVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong lVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  byte bVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auStack_68 [40];
  float *local_40;
  uint local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*param_2 == 1) {
    iVar14 = *(int *)(param_2 + 0x30);
    uVar8 = (uint)*(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar14);
    *(int *)(param_2 + 0x30) = iVar14 + 1;
    lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar14 * 8);
    iVar14 = *(int *)(param_2 + 0x44) * uVar8;
    bVar13 = 1;
  }
  else {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar10 = uVar3 & 0x7fff;
    uVar8 = (uint)(uVar3 >> 0xf);
    lVar7 = *(longlong *)(param_2 + 0x80);
    if ((short)uVar3 < 0) {
      lVar11 = (ulonglong)(uVar10 * *(int *)(lVar7 + 0x80)) + *(longlong *)(lVar7 + 0x70);
    }
    else {
      iVar14 = **(int **)(lVar7 + 0x20);
      lVar11 = 0;
      if (iVar14 <= (int)uVar10) {
        do {
          uVar10 = uVar10 - iVar14;
          iVar14 = (*(int **)(lVar7 + 0x20))[lVar11 + 1];
          lVar11 = lVar11 + 1;
        } while (iVar14 <= (int)uVar10);
      }
      lVar11 = (longlong)(int)uVar10 + *(longlong *)(*(longlong *)(lVar7 + 0x18) + lVar11 * 8);
    }
    iVar14 = *(int *)(lVar7 + 0x4c) * uVar8;
    bVar13 = *param_2;
  }
  if ((bVar13 & 1) == 0) {
    puVar6 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar3 = *puVar6;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar6 + 1;
    uVar10 = uVar3 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_40 = &local_34;
      local_38 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_2 + 0x80);
      local_38 = 1;
      local_40 = (float *)((ulonglong)(uVar10 * *(int *)(lVar7 + 0x80)) +
                           *(longlong *)(lVar7 + 0x70) + (longlong)*(int *)(lVar7 + 0x4c) * 4);
    }
  }
  else {
    iVar4 = *(int *)(param_2 + 0x30);
    bVar13 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar4);
    local_38 = (uint)bVar13;
    *(int *)(param_2 + 0x30) = iVar4 + 1;
    local_40 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar13 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar4 * 8));
  }
  pbVar9 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != 0) {
    pbVar9 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    pfVar12 = (float *)(lVar11 + (longlong)iVar14 * 4);
    iVar14 = 0;
    do {
      fVar1 = *(float *)(lVar5 + 0x54);
      fVar15 = (*pfVar12 - *(float *)(lVar5 + 0x48)) * *(float *)(lVar5 + 0x50) * fVar1;
      if (fVar1 <= fVar15) {
        fVar15 = fVar1;
      }
      if (fVar15 <= 0.0) {
        fVar15 = 0.0;
      }
      auVar17 = roundps(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15),3);
      fVar16 = auVar17._0_4_;
      fVar2 = *(float *)(*(longlong *)(lVar5 + 0x38) + (longlong)(int)fVar16 * 4);
      *local_40 = (*(float *)(*(longlong *)(lVar5 + 0x38) +
                             (longlong)
                             (int)(float)(~-(uint)(fVar16 < fVar1) & (uint)fVar16 |
                                         (uint)(fVar16 + 1.0) & -(uint)(fVar16 < fVar1)) * 4) -
                  fVar2) * (fVar15 - fVar16) + fVar2;
      local_40 = local_40 + (int)local_38;
      iVar14 = iVar14 + 1;
      pbVar9 = (byte *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != 0) {
        pbVar9 = param_2 + 0x3c;
      }
      pfVar12 = (float *)((longlong)pfVar12 + (ulonglong)(uVar8 << 2));
    } while (iVar14 < *(int *)pbVar9);
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144b35076 FUN_144b35076 body=176 status=ok
// SIG undefined FUN_144b35076(void)

double * FUN_144b35076(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  auVar5._0_8_ = dVar1 * 1.52587890625e-05 + 0.5;
  auVar5._8_8_ = 0;
  auVar5 = roundpd(auVar5,auVar5,1);
  auVar6._0_8_ = dVar2 * 1.52587890625e-05 + 0.5;
  auVar6._8_8_ = 0;
  auVar6 = roundpd(auVar6,auVar6,1);
  dVar3 = param_2[2];
  auVar4._0_8_ = dVar3 * 1.52587890625e-05 + 0.5;
  auVar4._8_8_ = 0;
  auVar4 = roundpd(auVar4,auVar4,1);
  *param_1 = auVar5._0_8_;
  param_1[1] = auVar6._0_8_;
  param_1[2] = auVar4._0_8_;
  param_1[3] = dVar1 - auVar5._0_8_ * 65536.0;
  param_1[4] = dVar2 - auVar6._0_8_ * 65536.0;
  param_1[5] = dVar3 - auVar4._0_8_ * 65536.0;
  return param_1;
}



// FUNCTION 144b351ea FUN_144b351ea body=107 status=ok
// SIG undefined FUN_144b351ea(void)

void FUN_144b351ea(undefined1 *param_1,longlong param_2,byte param_3,int param_4)

{
  longlong lVar1;
  
  *param_1 = 0;
  param_1[1] = param_3;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if ((param_2 != 0) && (param_4 != -1)) {
    *param_1 = 1;
    lVar1 = 0;
    do {
      *(ulonglong *)(param_1 + lVar1 * 8 + 8) =
           (ulonglong)
           (uint)((param_4 + (int)lVar1) * *(int *)(param_2 + (ulonglong)(param_3 ^ 1) * 8 + 0x128))
           + *(longlong *)(param_2 + ((ulonglong)(param_3 ^ 1) << 5 | 0x18));
      lVar1 = lVar1 + 1;
    } while (lVar1 != 3);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x120);
  }
  return;
}



// FUNCTION 144b35255 FUN_144b35255 body=60 status=ok
// SIG undefined FUN_144b35255(void)

void FUN_144b35255(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 144b35292 FUN_144b35292 body=48 status=ok
// SIG undefined FUN_144b35292(void)

ulonglong FUN_144b35292(longlong param_1,char param_2)

{
  uint *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffff;
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + 8);
  LOCK();
  uVar2 = *puVar1;
  if (uVar2 == 0xffffffff) {
    *puVar1 = 0;
  }
  else {
    uVar3 = (ulonglong)uVar2;
  }
  UNLOCK();
  if (param_2 != '\0') {
    uVar3 = *(ulonglong *)(param_1 + 0x80);
    *(ulonglong *)(param_1 + 0x78) = uVar3;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  return uVar3;
}



// FUNCTION 144b352c2 FUN_144b352c2 body=828 status=ok
// SIG undefined FUN_144b352c2(void)

void FUN_144b352c2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_2 + 0x58);
  *(undefined4 *)(param_2 + 0x58) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  *(undefined4 *)(param_2 + 0x5c) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x68);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x78);
  uVar6 = *(undefined8 *)(param_1 + 0x80);
  uVar7 = *(undefined8 *)(param_1 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 0x60);
  uVar9 = *(undefined8 *)(param_2 + 0x68);
  uVar10 = *(undefined8 *)(param_2 + 0x70);
  uVar11 = *(undefined8 *)(param_2 + 0x78);
  uVar12 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(param_1 + 0x88) = uVar12;
  *(undefined8 *)(param_1 + 0x70) = uVar10;
  *(undefined8 *)(param_1 + 0x78) = uVar11;
  *(undefined8 *)(param_1 + 0x60) = uVar8;
  *(undefined8 *)(param_1 + 0x68) = uVar9;
  *(undefined8 *)(param_2 + 0x80) = uVar6;
  *(undefined8 *)(param_2 + 0x88) = uVar7;
  *(undefined8 *)(param_2 + 0x70) = uVar4;
  *(undefined8 *)(param_2 + 0x78) = uVar5;
  *(undefined8 *)(param_2 + 0x60) = uVar2;
  *(undefined8 *)(param_2 + 0x68) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0xa0);
  uVar5 = *(undefined8 *)(param_1 + 0xa8);
  uVar6 = *(undefined8 *)(param_1 + 0xb0);
  uVar7 = *(undefined8 *)(param_1 + 0xb8);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  uVar10 = *(undefined8 *)(param_2 + 0xa0);
  uVar11 = *(undefined8 *)(param_2 + 0xa8);
  uVar12 = *(undefined8 *)(param_2 + 0xb8);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_2 + 0xb0);
  *(undefined8 *)(param_1 + 0xb8) = uVar12;
  *(undefined8 *)(param_1 + 0xa0) = uVar10;
  *(undefined8 *)(param_1 + 0xa8) = uVar11;
  *(undefined8 *)(param_1 + 0x90) = uVar8;
  *(undefined8 *)(param_1 + 0x98) = uVar9;
  *(undefined8 *)(param_2 + 0xb0) = uVar6;
  *(undefined8 *)(param_2 + 0xb8) = uVar7;
  *(undefined8 *)(param_2 + 0xa0) = uVar4;
  *(undefined8 *)(param_2 + 0xa8) = uVar5;
  *(undefined8 *)(param_2 + 0x90) = uVar2;
  *(undefined8 *)(param_2 + 0x98) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  uVar3 = *(undefined8 *)(param_1 + 200);
  uVar4 = *(undefined8 *)(param_1 + 0xd0);
  uVar5 = *(undefined8 *)(param_1 + 0xd8);
  uVar6 = *(undefined8 *)(param_1 + 0xe0);
  uVar7 = *(undefined8 *)(param_1 + 0xe8);
  uVar8 = *(undefined8 *)(param_2 + 0xc0);
  uVar9 = *(undefined8 *)(param_2 + 200);
  uVar10 = *(undefined8 *)(param_2 + 0xd0);
  uVar11 = *(undefined8 *)(param_2 + 0xd8);
  uVar12 = *(undefined8 *)(param_2 + 0xe8);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(param_1 + 0xe8) = uVar12;
  *(undefined8 *)(param_1 + 0xd0) = uVar10;
  *(undefined8 *)(param_1 + 0xd8) = uVar11;
  *(undefined8 *)(param_1 + 0xc0) = uVar8;
  *(undefined8 *)(param_1 + 200) = uVar9;
  *(undefined8 *)(param_2 + 0xe0) = uVar6;
  *(undefined8 *)(param_2 + 0xe8) = uVar7;
  *(undefined8 *)(param_2 + 0xd0) = uVar4;
  *(undefined8 *)(param_2 + 0xd8) = uVar5;
  *(undefined8 *)(param_2 + 0xc0) = uVar2;
  *(undefined8 *)(param_2 + 200) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0xf0);
  uVar3 = *(undefined8 *)(param_1 + 0xf8);
  uVar4 = *(undefined8 *)(param_1 + 0x100);
  uVar5 = *(undefined8 *)(param_1 + 0x108);
  uVar6 = *(undefined8 *)(param_1 + 0x110);
  uVar7 = *(undefined8 *)(param_1 + 0x118);
  uVar8 = *(undefined8 *)(param_2 + 0xf0);
  uVar9 = *(undefined8 *)(param_2 + 0xf8);
  uVar10 = *(undefined8 *)(param_2 + 0x100);
  uVar11 = *(undefined8 *)(param_2 + 0x108);
  uVar12 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = uVar12;
  *(undefined8 *)(param_1 + 0x100) = uVar10;
  *(undefined8 *)(param_1 + 0x108) = uVar11;
  *(undefined8 *)(param_1 + 0xf0) = uVar8;
  *(undefined8 *)(param_1 + 0xf8) = uVar9;
  local_28._0_4_ = (undefined4)uVar4;
  local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  uStack_20._0_4_ = (undefined4)uVar5;
  uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_18._0_4_ = (undefined4)uVar6;
  local_18._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
  uStack_10._0_4_ = (undefined4)uVar7;
  uStack_10._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
  *(undefined4 *)(param_2 + 0x110) = (undefined4)local_18;
  *(undefined4 *)(param_2 + 0x114) = local_18._4_4_;
  *(undefined4 *)(param_2 + 0x118) = (undefined4)uStack_10;
  *(undefined4 *)(param_2 + 0x11c) = uStack_10._4_4_;
  *(undefined4 *)(param_2 + 0x100) = (undefined4)local_28;
  *(undefined4 *)(param_2 + 0x104) = local_28._4_4_;
  *(undefined4 *)(param_2 + 0x108) = (undefined4)uStack_20;
  *(undefined4 *)(param_2 + 0x10c) = uStack_20._4_4_;
  *(undefined8 *)(param_2 + 0xf0) = uVar2;
  *(undefined8 *)(param_2 + 0xf8) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(param_2 + 0x120);
  *(undefined4 *)(param_2 + 0x120) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_2 + 0x124);
  *(undefined4 *)(param_2 + 0x124) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
  *(undefined4 *)(param_2 + 0x128) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 300) = *(undefined4 *)(param_2 + 300);
  *(undefined4 *)(param_2 + 300) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(param_2 + 0x130);
  *(undefined4 *)(param_2 + 0x130) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x134) = *(undefined4 *)(param_2 + 0x134);
  *(undefined4 *)(param_2 + 0x134) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x138) = *(undefined4 *)(param_2 + 0x138);
  *(undefined4 *)(param_2 + 0x138) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x170);
  uVar3 = *(undefined8 *)(param_1 + 0x178);
  uVar8 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_2 + 0x170);
  *(undefined8 *)(param_1 + 0x178) = uVar8;
  *(undefined8 *)(param_2 + 0x170) = uVar2;
  *(undefined8 *)(param_2 + 0x178) = uVar3;
  uVar2 = *(undefined8 *)(param_1 + 0x160);
  uVar3 = *(undefined8 *)(param_1 + 0x168);
  uVar8 = *(undefined8 *)(param_2 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_2 + 0x160);
  *(undefined8 *)(param_1 + 0x168) = uVar8;
  *(undefined8 *)(param_2 + 0x160) = uVar2;
  *(undefined8 *)(param_2 + 0x168) = uVar3;
  uVar1 = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_2 + 0x180);
  *(undefined4 *)(param_2 + 0x180) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 0x188);
  uVar3 = *(undefined8 *)(param_1 + 400);
  uVar8 = *(undefined8 *)(param_2 + 400);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x188);
  *(undefined8 *)(param_1 + 400) = uVar8;
  local_38._0_4_ = (undefined4)uVar2;
  local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  uStack_30._0_4_ = (undefined4)uVar3;
  uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)(param_2 + 0x188) = (undefined4)local_38;
  *(undefined4 *)(param_2 + 0x18c) = local_38._4_4_;
  *(undefined4 *)(param_2 + 400) = (undefined4)uStack_30;
  *(undefined4 *)(param_2 + 0x194) = uStack_30._4_4_;
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
  local_38 = uVar2;
  uStack_30 = uVar3;
  local_28 = uVar4;
  uStack_20 = uVar5;
  local_18 = uVar6;
  uStack_10 = uVar7;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144b35680 FUN_144b35680 body=4 status=ok
// SIG undefined FUN_144b35680(void)

undefined1 FUN_144b35680(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x20);
}



// FUNCTION 144b356c0 FUN_144b356c0 body=31 status=ok
// SIG undefined FUN_144b356c0(void)

longlong FUN_144b356c0(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 200) * 0x48 +
         *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x38) + 0xb8);
}



// FUNCTION 144b356e0 FUN_144b356e0 body=34 status=ok
// SIG undefined FUN_144b356e0(void)

void FUN_144b356e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x728);
  if (puVar1 == (undefined8 *)0x0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    uVar2 = *puVar1;
    uVar3 = *(undefined4 *)(puVar1 + 1);
  }
  *param_2 = uVar2;
  *(undefined4 *)(param_2 + 1) = uVar3;
  return;
}



// FUNCTION 144b35702 FUN_144b35702 body=235 status=ok
// SIG undefined FUN_144b35702(void)

void FUN_144b35702(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar3 = (longlong)*(int *)(lVar1 + 0x50), lVar3 != 0)) {
    if (*(char *)(lVar1 + 0x40) != '\0') {
      lVar2 = *(longlong *)(lVar1 + 0x48);
      if (((*(int *)(param_1 + 0x34) == 0 && *(int *)(param_1 + 0x30) == 0) &&
          *(int *)(param_1 + 0x38) == 0) && *(int *)(param_1 + 0x3c) == 0) {
        lVar3 = lVar3 * 0x368;
        uVar4 = 0;
        do {
          if ((((*(int *)(lVar2 + 8) == *(int *)(lVar1 + 0x30)) &&
               (*(int *)(lVar2 + 0xc) == *(int *)(lVar1 + 0x34))) &&
              (*(int *)(lVar2 + 0x10) == *(int *)(lVar1 + 0x38))) &&
             (*(int *)(lVar2 + 0x14) == *(int *)(lVar1 + 0x3c))) goto LAB_144b35724;
          lVar2 = lVar2 + 0x368;
          uVar5 = 0;
          lVar3 = lVar3 + -0x368;
        } while (lVar3 != 0);
      }
      else {
        lVar3 = lVar3 * 0x368;
        uVar4 = 0;
        do {
          if (((*(int *)(lVar2 + 8) == *(int *)(param_1 + 0x30)) &&
              (*(int *)(lVar2 + 0xc) == *(int *)(param_1 + 0x34))) &&
             ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x38) &&
              (*(int *)(lVar2 + 0x14) == *(int *)(param_1 + 0x3c))))) goto LAB_144b35724;
          lVar2 = lVar2 + 0x368;
          uVar5 = 0;
          lVar3 = lVar3 + -0x368;
        } while (lVar3 != 0);
      }
      goto LAB_144b35736;
    }
    lVar2 = *(longlong *)(lVar1 + 0x48);
LAB_144b35724:
    if (lVar2 != 0) {
      uVar5 = *(undefined8 *)(lVar2 + 0x228);
      uVar4 = *(undefined4 *)(lVar2 + 0x230);
      goto LAB_144b35736;
    }
  }
  uVar5 = 0;
  uVar4 = 0;
LAB_144b35736:
  *param_2 = uVar5;
  *(undefined4 *)(param_2 + 1) = uVar4;
  return;
}



// FUNCTION 144b3583c FUN_144b3583c body=2103 status=ok
// SIG undefined FUN_144b3583c(void)

void FUN_144b3583c(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  
  if (*(longlong *)(param_2 + 0xc0) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_2 + 0xc0) + 0x88);
  }
  lVar7 = *(longlong *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 600);
  uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 8) + 0x260);
  iVar8 = (*(uint *)(param_2 + 0x264) & 1) * 5 + 6;
  *(undefined4 *)(param_3 + 0x68) = 0;
  if (*(int *)(param_3 + 0x6c) < iVar8) {
    FUN_1481c9adc(param_3,iVar8);
  }
  lVar9 = param_3 + 0x70;
  *(undefined4 *)(param_3 + 0xa8) = 0;
  if (*(int *)(param_3 + 0xac) < iVar8) {
    FUN_1481c9bc8(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(lVar6 + 0x790);
  iVar8 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
    FUN_1481c9c2e(param_3,iVar8);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) = lVar6 + (ulonglong)((bVar1 & 1) << 5) + 0x270;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar6 = lVar9;
  }
  *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x20;
  lVar6 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(lVar6 + 0x790);
  iVar8 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
    FUN_1481c9c2e(param_3,iVar8);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) = lVar6 + (ulonglong)((bVar1 & 1) << 6) + 0x2b0;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar6 = lVar9;
  }
  *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x40;
  lVar6 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)(lVar6 + 0x790);
  iVar8 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
    FUN_1481c9c2e(param_3,iVar8);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) = lVar6 + (ulonglong)((bVar1 & 1) << 9) + 0x330;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar6 = lVar9;
  }
  *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x200;
  iVar8 = *(int *)(param_1 + 200);
  bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x790);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x730);
  iVar3 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar3 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar3 + 1U) {
    FUN_1481c9c2e(param_3,iVar3);
  }
  lVar5 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar5 = param_3;
  }
  *(ulonglong *)(lVar5 + (longlong)iVar3 * 8) =
       ((ulonglong)((bVar1 & 1) << 5) | (longlong)iVar8 << 6) + lVar6;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar6 = lVar9;
  }
  *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x20;
  iVar8 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
    FUN_1481c9c2e(param_3,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar6 = param_3;
  }
  *(longlong *)(lVar6 + (longlong)iVar8 * 8) = lVar7;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  lVar6 = *(longlong *)(param_3 + 0xa0);
  if (*(longlong *)(param_3 + 0xa0) == 0) {
    lVar6 = lVar9;
  }
  *(uint *)(lVar6 + (longlong)iVar8 * 4) = uVar10;
  if ((*(byte *)(param_2 + 0x264) & 1) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    bVar1 = *(byte *)(lVar6 + 0x790);
    iVar8 = *(int *)(param_3 + 0x68);
    *(uint *)(param_3 + 0x68) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
      FUN_1481c9c2e(param_3,iVar8);
    }
    lVar5 = *(longlong *)(param_3 + 0x60);
    if (*(longlong *)(param_3 + 0x60) == 0) {
      lVar5 = param_3;
    }
    *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) =
         lVar6 + (ulonglong)((bVar1 >> 1 ^ bVar1) & 1) * 0x20 + 0x270;
    iVar8 = *(int *)(param_3 + 0xa8);
    *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
      FUN_146beb88a(lVar9,iVar8);
    }
    lVar6 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar6 = lVar9;
    }
    *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x20;
    lVar6 = *(longlong *)(param_1 + 8);
    bVar1 = *(byte *)(lVar6 + 0x790);
    iVar8 = *(int *)(param_3 + 0x68);
    *(uint *)(param_3 + 0x68) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
      FUN_1481c9c2e(param_3,iVar8);
    }
    lVar5 = *(longlong *)(param_3 + 0x60);
    if (*(longlong *)(param_3 + 0x60) == 0) {
      lVar5 = param_3;
    }
    *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) =
         lVar6 + (ulonglong)((bVar1 >> 1 ^ bVar1) & 1) * 0x40 + 0x2b0;
    iVar8 = *(int *)(param_3 + 0xa8);
    *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
      FUN_146beb88a(lVar9,iVar8);
    }
    lVar6 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar6 = lVar9;
    }
    *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x40;
    lVar6 = *(longlong *)(param_1 + 8);
    bVar1 = *(byte *)(lVar6 + 0x790);
    iVar8 = *(int *)(param_3 + 0x68);
    *(uint *)(param_3 + 0x68) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
      FUN_1481c9c2e(param_3,iVar8);
    }
    lVar5 = *(longlong *)(param_3 + 0x60);
    if (*(longlong *)(param_3 + 0x60) == 0) {
      lVar5 = param_3;
    }
    *(ulonglong *)(lVar5 + (longlong)iVar8 * 8) =
         lVar6 + (ulonglong)((bVar1 >> 1 ^ bVar1) & 1) * 0x200 + 0x330;
    iVar8 = *(int *)(param_3 + 0xa8);
    *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
      FUN_146beb88a(lVar9,iVar8);
    }
    lVar6 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar6 = lVar9;
    }
    *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x200;
    iVar8 = *(int *)(param_1 + 200);
    bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x790);
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x730);
    iVar3 = *(int *)(param_3 + 0x68);
    *(uint *)(param_3 + 0x68) = iVar3 + 1U;
    if (*(uint *)(param_3 + 0x6c) < iVar3 + 1U) {
      FUN_1481c9c2e(param_3,iVar3);
    }
    lVar5 = *(longlong *)(param_3 + 0x60);
    if (*(longlong *)(param_3 + 0x60) == 0) {
      lVar5 = param_3;
    }
    *(ulonglong *)(lVar5 + (longlong)iVar3 * 8) =
         ((longlong)iVar8 << 6 | (ulonglong)(((byte)(bVar1 >> 1 ^ bVar1) & 1) << 5)) + lVar6;
    iVar8 = *(int *)(param_3 + 0xa8);
    *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
      FUN_146beb88a(lVar9,iVar8);
    }
    lVar6 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar6 = lVar9;
    }
    *(undefined4 *)(lVar6 + (longlong)iVar8 * 4) = 0x20;
    iVar8 = *(int *)(param_3 + 0x68);
    *(uint *)(param_3 + 0x68) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
      FUN_1481c9c2e(param_3,iVar8);
    }
    lVar6 = *(longlong *)(param_3 + 0x60);
    if (*(longlong *)(param_3 + 0x60) == 0) {
      lVar6 = param_3;
    }
    *(ulonglong *)(lVar6 + (longlong)iVar8 * 8) = lVar7 + (ulonglong)uVar10;
    iVar8 = *(int *)(param_3 + 0xa8);
    *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
    if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
      FUN_146beb88a(lVar9,iVar8);
    }
    lVar7 = *(longlong *)(param_3 + 0xa0);
    if (*(longlong *)(param_3 + 0xa0) == 0) {
      lVar7 = lVar9;
    }
    *(uint *)(lVar7 + (longlong)iVar8 * 4) = uVar10;
  }
  iVar8 = *(int *)(param_3 + 0x68);
  *(uint *)(param_3 + 0x68) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0x6c) < iVar8 + 1U) {
    FUN_1481c9c2e(param_3,iVar8);
  }
  lVar7 = *(longlong *)(param_3 + 0x60);
  if (*(longlong *)(param_3 + 0x60) == 0) {
    lVar7 = param_3;
  }
  *(undefined8 *)(lVar7 + (longlong)iVar8 * 8) = uVar4;
  iVar8 = *(int *)(param_3 + 0xa8);
  *(uint *)(param_3 + 0xa8) = iVar8 + 1U;
  if (*(uint *)(param_3 + 0xac) < iVar8 + 1U) {
    FUN_146beb88a(lVar9,iVar8);
  }
  if (*(longlong *)(param_3 + 0xa0) != 0) {
    lVar9 = *(longlong *)(param_3 + 0xa0);
  }
  *(undefined4 *)(lVar9 + (longlong)iVar8 * 4) = uVar2;
  return;
}



// FUNCTION 144b36074 FUN_144b36074 body=1480 status=ok
// SIG undefined FUN_144b36074(void)

void FUN_144b36074(char *param_1)

{
  longlong *plVar1;
  ushort uVar2;
  ushort *puVar3;
  float *pfVar4;
  uint uVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  int *piVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_2b8 [32];
  float local_298 [4];
  float local_288 [18];
  longlong local_240 [8];
  longlong *local_200;
  undefined8 local_1f8;
  undefined1 local_1f0 [384];
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  local_70 = (undefined1 *)0x0;
  local_68 = 0x1000000000;
  iVar14 = 0;
  do {
    uVar12 = local_68;
    lVar10 = (longlong)(int)local_68;
    uVar5 = (int)local_68 + 1;
    local_68 = CONCAT44(local_68._4_4_,uVar5);
    if (local_68._4_4_ < uVar5) {
      FUN_1481c9dde(local_1f0,uVar12 & 0xffffffff);
    }
    puVar6 = local_70;
    if (local_70 == (undefined1 *)0x0) {
      puVar6 = local_1f0;
    }
    plVar7 = (longlong *)(puVar6 + lVar10 * 0x18);
    *plVar7 = 0;
    plVar7[1] = 0;
    *(undefined4 *)(plVar7 + 2) = 0;
    if (*param_1 == '\x01') {
      *(uint *)(plVar7 + 2) =
           (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30));
      iVar9 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar9 + 1;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8);
      *plVar7 = lVar10;
      iVar9 = (int)plVar7[2] * *(int *)(param_1 + 0x44);
    }
    else {
      puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
      uVar2 = *puVar3;
      *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
      uVar5 = uVar2 & 0x7fff;
      *(uint *)(plVar7 + 2) = (uint)(uVar2 >> 0xf);
      lVar10 = *(longlong *)(param_1 + 0x80);
      if ((short)uVar2 < 0) {
        lVar10 = (ulonglong)(uVar5 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70);
      }
      else {
        iVar9 = **(int **)(lVar10 + 0x20);
        lVar13 = 0;
        if (iVar9 <= (int)uVar5) {
          do {
            uVar5 = uVar5 - iVar9;
            iVar9 = (*(int **)(lVar10 + 0x20))[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (iVar9 <= (int)uVar5);
        }
        lVar10 = (longlong)(int)uVar5 + *(longlong *)(*(longlong *)(lVar10 + 0x18) + lVar13 * 8);
      }
      *plVar7 = lVar10;
      iVar9 = (uint)(uVar2 >> 0xf) * *(int *)(*(longlong *)(param_1 + 0x80) + 0x4c);
    }
    lVar10 = lVar10 + (longlong)iVar9 * 4;
    *plVar7 = lVar10;
    plVar7[1] = lVar10;
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x10);
  local_200 = (longlong *)0x0;
  local_1f8 = 0x400000000;
  iVar14 = 4;
  do {
    uVar12 = local_1f8;
    lVar10 = (longlong)(int)local_1f8;
    uVar5 = (int)local_1f8 + 1;
    local_1f8 = CONCAT44(local_1f8._4_4_,uVar5);
    if (local_1f8._4_4_ < uVar5) {
      FUN_1481c9efe(local_240,uVar12 & 0xffffffff);
    }
    plVar7 = local_200;
    if (local_200 == (longlong *)0x0) {
      plVar7 = local_240;
    }
    plVar1 = plVar7 + lVar10 * 2;
    plVar7[lVar10 * 2] = 0;
    *(undefined4 *)(plVar7 + lVar10 * 2 + 1) = 0;
    if (*param_1 == '\x01') {
      *(uint *)(plVar1 + 1) =
           (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)*(int *)(param_1 + 0x30));
      iVar9 = *(int *)(param_1 + 0x30);
      *(int *)(param_1 + 0x30) = iVar9 + 1;
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar9 * 8);
      *plVar1 = lVar10;
      lVar10 = lVar10 + (longlong)(int)plVar1[1] * (longlong)*(int *)(param_1 + 0x44) * 4;
LAB_144b36276:
      *plVar1 = lVar10;
    }
    else {
      puVar3 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
      uVar2 = *puVar3;
      *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar3 + 1;
      uVar5 = uVar2 & 0x7fff;
      if (uVar5 != 0x7fff) {
        lVar10 = (ulonglong)(uVar5 * *(int *)(*(longlong *)(param_1 + 0x80) + 0x80)) +
                 *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x70);
        *plVar1 = lVar10;
        *(undefined4 *)(plVar1 + 1) = 1;
        lVar10 = lVar10 + (longlong)*(int *)(*(longlong *)(param_1 + 0x80) + 0x4c) * 4;
        goto LAB_144b36276;
      }
      *plVar1 = (longlong)plVar1 + 0xc;
      *(undefined4 *)(plVar1 + 1) = 0;
    }
    iVar14 = iVar14 + -1;
    if (iVar14 == 0) {
      piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar8 = (int *)(param_1 + 0x3c);
      }
      if (0 < *piVar8) {
        iVar14 = 0;
        do {
          lVar10 = 0;
          uVar12 = 0;
          do {
            puVar6 = local_70;
            if (local_70 == (undefined1 *)0x0) {
              puVar6 = local_1f0;
            }
            pfVar4 = *(float **)(puVar6 + lVar10);
            *(float **)(puVar6 + lVar10) = pfVar4 + *(int *)(puVar6 + lVar10 + 0x10);
            local_288[(uVar12 >> 2 & 0x3fffffff) * 4 + (ulonglong)((uint)uVar12 & 3)] = *pfVar4;
            uVar12 = uVar12 + 1;
            lVar10 = lVar10 + 0x18;
          } while (uVar12 != 0x10);
          fVar16 = local_288[0] + local_288[5] + local_288[10];
          if (0.0 < fVar16) {
            fVar18 = 1.0 / SQRT(fVar16 + 1.0);
            fVar16 = (1.0 / fVar18) * 0.5;
            fVar18 = fVar18 * 0.5;
            fVar17 = (local_288[6] - local_288[9]) * fVar18;
            fVar15 = (local_288[8] - local_288[2]) * fVar18;
            fVar18 = (local_288[1] - local_288[4]) * fVar18;
          }
          else {
            uVar12 = (ulonglong)(local_288[0] < local_288[5]);
            if (local_288[(ulonglong)(local_288[0] < local_288[5]) * 4 + uVar12] <= local_288[10] &&
                local_288[10] != local_288[(ulonglong)(local_288[0] < local_288[5]) * 4 + uVar12]) {
              uVar12 = 2;
            }
            uVar11 = (ulonglong)(uint)((int)uVar12 * 4);
            lVar13 = (longlong)*(int *)(&DAT_14adfeac0 + uVar11);
            lVar10 = (longlong)*(int *)(&DAT_14adfeac0 + lVar13 * 4);
            uVar5 = (int)uVar12 << 4;
            fVar16 = 1.0 / SQRT(((*(float *)((longlong)local_288 + uVar11 + uVar5) -
                                 local_288[lVar13 * 5]) - local_288[lVar10 * 5]) + 1.0);
            *(float *)((longlong)local_298 + uVar11) = (1.0 / fVar16) * 0.5;
            fVar16 = fVar16 * 0.5;
            local_298[3] = (local_288[lVar13 * 4 + lVar10] - local_288[lVar10 * 4 + lVar13]) *
                           fVar16;
            local_298[lVar13] =
                 (*(float *)((longlong)local_288 + lVar13 * 4 + (ulonglong)uVar5) +
                 *(float *)((longlong)local_288 + uVar11 + lVar13 * 0x10)) * fVar16;
            local_298[lVar10] =
                 (*(float *)((longlong)local_288 + lVar10 * 4 + (ulonglong)uVar5) +
                 *(float *)((longlong)local_288 + uVar11 + lVar10 * 0x10)) * fVar16;
            fVar16 = local_298[3];
            fVar18 = local_298[2];
            fVar15 = local_298[1];
            fVar17 = local_298[0];
          }
          plVar7 = local_200;
          if (local_200 == (longlong *)0x0) {
            plVar7 = local_240;
          }
          pfVar4 = (float *)*plVar7;
          *plVar7 = (longlong)(pfVar4 + (int)plVar7[1]);
          *pfVar4 = fVar17;
          plVar7 = local_200;
          if (local_200 == (longlong *)0x0) {
            plVar7 = local_240;
          }
          pfVar4 = (float *)plVar7[2];
          plVar7[2] = (longlong)(pfVar4 + (int)plVar7[3]);
          *pfVar4 = fVar15;
          plVar7 = local_200;
          if (local_200 == (longlong *)0x0) {
            plVar7 = local_240;
          }
          pfVar4 = (float *)plVar7[4];
          plVar7[4] = (longlong)(pfVar4 + (int)plVar7[5]);
          *pfVar4 = fVar18;
          plVar7 = local_200;
          if (local_200 == (longlong *)0x0) {
            plVar7 = local_240;
          }
          pfVar4 = (float *)plVar7[6];
          plVar7[6] = (longlong)(pfVar4 + (int)plVar7[7]);
          *pfVar4 = fVar16;
          iVar14 = iVar14 + 1;
          piVar8 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
          if (*param_1 != '\0') {
            piVar8 = (int *)(param_1 + 0x3c);
          }
        } while (iVar14 < *piVar8);
      }
      if (local_200 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      if (local_70 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 144b36654 FUN_144b36654 body=116 status=ok
// SIG undefined FUN_144b36654(void)

uint FUN_144b36654(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = 0x308;
  uVar1 = 0;
  do {
    lVar5 = (longlong)*(int *)(param_1 + 0x18 + lVar2);
    if (lVar5 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x10 + lVar2);
      lVar5 = lVar5 * 0x30 + lVar4;
      do {
        if ((longlong)*(int *)(lVar4 + 0x18) != 0) {
          lVar3 = 0;
          do {
            uVar1 = uVar1 | 1 << (*(byte *)(*(longlong *)
                                             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 8 + lVar3)
                                             + 200) + 0x27c) & 0x1f);
            lVar3 = lVar3 + 0xa8;
          } while ((longlong)*(int *)(lVar4 + 0x18) * 0xa8 - lVar3 != 0);
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar4 != lVar5);
    }
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x368);
  return uVar1;
}



// FUNCTION 144b366f0 FUN_144b366f0 body=413 status=ok
// SIG undefined FUN_144b366f0(void)

void FUN_144b366f0(longlong param_1,int *param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  iVar5 = (int)plVar2[1];
  if (0 < iVar5) {
    uVar4 = *(uint *)(param_1 + 0x2c);
    if ((int)*(uint *)(param_1 + 0x2c) < (int)param_3) {
      uVar4 = param_3;
    }
    if ((int)uVar4 <= (int)(uint)*(byte *)((longlong)plVar2 + 0x8f)) {
      uVar4 = (uint)*(byte *)((longlong)plVar2 + 0x8f);
    }
    if (iVar5 - 1U <= uVar4) {
      uVar4 = iVar5 - 1U;
    }
    uVar8 = (ulonglong)uVar4;
    uVar9 = uVar8;
    do {
      lVar3 = *(longlong *)(*plVar2 + uVar8 * 8);
      iVar7 = (int)uVar9;
      if ((*(int *)(lVar3 + 0x10c) != 0) && (*(int *)(lVar3 + 100) != 0)) {
        *param_2 = iVar7;
        if (iVar7 < (int)(*(longlong **)(param_1 + 0x20))[1]) {
          lVar3 = *(longlong *)(**(longlong **)(param_1 + 0x20) + (uVar8 & 0xffffffff) * 8);
          if (*(char *)(lVar3 + 0x290) != '\x01') {
            param_2[1] = *(int *)(lVar3 + 0x10c);
            iVar5 = *(int *)(lVar3 + 0x1d0);
            if (iVar5 < 0) {
              iVar1 = *(int *)(lVar3 + 0x1c0);
              if (*(char *)(lVar3 + 0x1d4) == '\x01') {
                iVar5 = iVar1 + 3;
                if (-1 < iVar1) {
                  iVar5 = iVar1;
                }
                iVar5 = iVar5 >> 2;
              }
              else {
                iVar5 = iVar1 / 2;
              }
            }
            param_2[2] = iVar5;
            lVar10 = lVar3 + 0x10;
            if (*(longlong *)(lVar3 + 0x30) != 0) {
              lVar10 = *(longlong *)(lVar3 + 0x30);
            }
            iVar5 = *(int *)(lVar3 + 0x38);
            *(longlong *)(param_2 + 4) = lVar10;
            param_2[6] = iVar5;
            *(longlong *)(param_2 + 8) = lVar3 + 0x198;
            if (iVar7 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x18)) {
              uVar6 = *(undefined8 *)
                       (*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0x208 +
                       (uVar8 & 0xffffffff) * 0x450);
            }
            else {
              uVar6 = 0;
            }
            *(undefined8 *)(param_2 + 10) = uVar6;
            param_2[0xc] = 0;
            param_2[0xd] = 0;
            lVar10 = *(longlong *)(lVar3 + 0x218);
            if (lVar10 == 0) {
              return;
            }
            if (*(int *)(lVar10 + 0x88) == -1) {
              return;
            }
            iVar5 = *(int *)(lVar10 + 0xb8);
            if (iVar5 < 0) {
              iVar7 = *(int *)(lVar10 + 0xa8);
              if (*(char *)(lVar10 + 0xbc) == '\x01') {
                iVar5 = iVar7 + 3;
                if (-1 < iVar7) {
                  iVar5 = iVar7;
                }
                iVar5 = iVar5 >> 2;
              }
              else {
                iVar5 = iVar7 / 2;
              }
            }
            param_2[0xe] = iVar5;
            *(longlong *)(param_2 + 0x10) = *(longlong *)(lVar3 + 0x218) + 0x80;
            return;
          }
        }
        break;
      }
      uVar8 = uVar8 + 1;
      uVar9 = (ulonglong)(iVar7 + 1U);
    } while ((int)(iVar7 + 1U) < iVar5);
  }
  *param_2 = -1;
  return;
}



// FUNCTION 144b3688e FUN_144b3688e body=179 status=ok
// SIG undefined FUN_144b3688e(void)

longlong FUN_144b3688e(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  uVar3 = *(uint *)(param_1 + 0x14);
  if ((ulonglong)uVar3 != 0) {
    uVar10 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x10);
      lVar6 = *(longlong *)(param_1 + 8);
      lVar7 = *(longlong *)(param_1 + 0x18);
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      iVar5 = *(int *)(lVar7 + 0x78);
      if (iVar5 != 0) {
        iVar8 = 0;
        do {
          puVar9 = (undefined8 *)
                   ((ulonglong)*(ushort *)(*(longlong *)(lVar7 + 0x70) + (longlong)iVar8 * 4) +
                   (longlong)iVar4 * uVar10 + lVar6);
          if (puVar9 != (undefined8 *)0x0) {
            *puVar9 = 0;
            *(undefined1 *)(puVar9 + 1) = 1;
            *(undefined4 *)((longlong)puVar9 + 9) = 0;
            *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
          }
          iVar8 = iVar8 + 1;
        } while (iVar5 != iVar8);
      }
      if (lVar7 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar7 + 8);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar2 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != uVar3);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144b36941 FUN_144b36941 body=19 status=ok
// SIG undefined FUN_144b36941(void)

void FUN_144b36941(void *param_1,uint param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,(ulonglong)param_2 << 3);
    return;
  }
  return;
}



// FUNCTION 144b36954 FUN_144b36954 body=8 status=ok
// SIG undefined FUN_144b36954(void)

undefined8 FUN_144b36954(void)

{
  return DAT_14cb427b0;
}



// FUNCTION 144b3695c FUN_144b3695c body=8 status=ok
// SIG undefined FUN_144b3695c(void)

undefined8 FUN_144b3695c(void)

{
  return DAT_14cb42830;
}



// FUNCTION 144b36964 FUN_144b36964 body=8 status=ok
// SIG undefined FUN_144b36964(void)

undefined8 FUN_144b36964(void)

{
  return DAT_14cb428b0;
}



// FUNCTION 144b3696c FUN_144b3696c body=8 status=ok
// SIG undefined FUN_144b3696c(void)

undefined8 FUN_144b3696c(void)

{
  return DAT_14cb428f0;
}



// FUNCTION 144b36974 FUN_144b36974 body=86 status=ok
// SIG undefined FUN_144b36974(void)

void FUN_144b36974(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14ae09a28;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[3] = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x100);
  if (*(char *)(param_2 + 0xd1) == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x78);
    if (lVar1 != 0) {
      param_1[4] = lVar1;
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  else {
    param_1[5] = *(undefined8 *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 144b36a0c FUN_144b36a0c body=1463 status=ok
// SIG undefined FUN_144b36a0c(void)

void FUN_144b36a0c(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,longlong param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  byte bVar8;
  uint uVar9;
  float *pfVar10;
  longlong lVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  bVar8 = *(byte *)(param_6 + 0x388) | *(byte *)(param_1 + 0xf0);
  param_2[0xe] = 0;
  param_2[0xf] = 0x3f80000000000000;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0x3f80000000000000;
  param_2[0x24] = 0;
  param_2[0x25] = 0x3f80000000000000;
  *param_2 = *(undefined8 *)(param_3 + 0x30);
  param_2[1] = *(undefined8 *)(param_3 + 0x38);
  param_2[2] = *(undefined8 *)(param_3 + 0x40);
  uVar14 = *(uint *)(param_3 + 0x48);
  if (*(uint *)(param_3 + 0x48) < *(uint *)(param_3 + 0x4c)) {
    uVar14 = *(uint *)(param_3 + 0x4c);
  }
  *(uint *)(param_2 + 3) = uVar14;
  *(undefined4 *)((longlong)param_2 + 0x1c) = *(undefined4 *)(param_3 + 0x50);
  param_2[4] = *(undefined8 *)(param_3 + 0x58);
  *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_3 + 0x60);
  pfVar10 = (float *)&DAT_14c846330;
  if (*(float **)(param_6 + 0x2f0) != (float *)0x0) {
    pfVar10 = *(float **)(param_6 + 0x2f0);
  }
  *(float *)(param_2 + 7) = pfVar10[2];
  param_2[6] = *(undefined8 *)pfVar10;
  *(uint *)((longlong)param_2 + 0x3c) = bVar8 & 1;
  uVar14 = *(uint *)(param_1 + 0x1c8);
  uVar13 = uVar14 >> 8 & 1;
  *(uint *)(param_2 + 8) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x44) = *(undefined4 *)(*(longlong *)(param_4 + 8) + 0x9c);
  *(uint *)(param_2 + 9) = (uint)*(byte *)(param_1 + 0x1c6);
  param_2[10] = *(undefined8 *)(param_5 + 0x3c);
  *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_5 + 0x44);
  uVar12 = *(undefined8 *)(param_5 + 0x58);
  param_2[0xe] = *(undefined8 *)(param_5 + 0x50);
  param_2[0xf] = uVar12;
  bVar18 = *(char *)(param_5 + 0x38) != '\0';
  if (bVar18) {
    dVar3 = *(double *)(param_3 + 0xc0);
    dVar4 = *(double *)(param_3 + 0xb8);
    *(float *)(param_2 + 0xc) = (float)*(double *)(param_3 + 0xb0);
    *(float *)((longlong)param_2 + 100) = (float)dVar4;
    *(float *)(param_2 + 0xd) = (float)dVar3;
  }
  else {
    *(undefined4 *)(param_2 + 0xd) = *(undefined4 *)(param_5 + 0x34);
    param_2[0xc] = *(undefined8 *)(param_5 + 0x2c);
  }
  puVar1 = param_2 + 0x1c;
  puVar2 = param_2 + 0x24;
  *(uint *)(param_2 + 0x10) = (uint)bVar18;
  *(uint *)((longlong)param_2 + 0x84) = uVar14 >> 4 & 1;
  param_2[0x12] = *(undefined8 *)(param_1 + 0x1e0);
  *(undefined4 *)(param_2 + 0x13) = *(undefined4 *)(param_1 + 0x1e8);
  *(uint *)((longlong)param_2 + 0x9c) = (uint)*(byte *)(param_1 + 0x1ec);
  if ((bVar8 & 1) == 0) {
    fVar20 = (float)(*(double *)(param_6 + 0x170) - (double)pfVar10[2] * 65536.0);
    fVar22 = (float)(*(double *)(param_6 + 0x168) - (double)pfVar10[1] * 65536.0);
    fVar21 = (float)(*(double *)(param_6 + 0x160) - (double)*pfVar10 * 65536.0);
  }
  else {
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar20 = 0.0;
  }
  *(float *)(param_2 + 0x1e) = fVar21;
  *(float *)((longlong)param_2 + 0xf4) = fVar22;
  *(float *)(param_2 + 0x1f) = fVar20;
  *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(param_2 + 0x1f);
  param_2[0x26] = param_2[0x1e];
  param_2[0x20] = 0;
  *(undefined4 *)(param_2 + 0x21) = 0;
  *(undefined4 *)(param_2 + 0x29) = 0;
  param_2[0x28] = 0;
  param_2[0x1a] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_2 + 0x1b) = 0x3f800000;
  param_2[0x22] = &DAT_3f8000003f800000;
  *(undefined4 *)(param_2 + 0x23) = 0x3f800000;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0x3f80000000000000;
  *puVar2 = *puVar1;
  param_2[0x25] = param_2[0x1d];
  *(undefined4 *)((longlong)param_2 + 0x10c) = 0;
  *(undefined4 *)((longlong)param_2 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xbc) = 0xffffffff;
  *(undefined4 *)(param_2 + 0x18) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0xc4) = 0xffffffff;
  if (*(char *)(param_1 + 0x1c4) == '\0') {
    lVar6 = *(longlong *)(*(longlong *)(param_3 + 0x20) + 0x10);
    uVar9 = (uint)*(ushort *)(lVar6 + 0x1a);
    if (uVar9 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(param_2 + 0x14) = (uint)*(byte *)(lVar6 + 0x1f) << 0x1f | uVar9;
    uVar9 = (uint)*(ushort *)(lVar6 + 0x22);
    if (uVar9 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)((longlong)param_2 + 0xa4) = (uint)*(byte *)(lVar6 + 0x27) << 0x1f | uVar9;
    uVar9 = (uint)*(ushort *)(lVar6 + 2);
    if (uVar9 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(param_2 + 0x15) = (uint)*(byte *)(lVar6 + 7) << 0x1f | uVar9;
    uVar9 = (uint)*(ushort *)(lVar6 + 10);
    if (uVar9 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)((longlong)param_2 + 0xac) = (uint)*(byte *)(lVar6 + 0xf) << 0x1f | uVar9;
    uVar9 = (uint)*(ushort *)(lVar6 + 0x6a);
    if (uVar9 == 0xffff) {
      uVar9 = 0xffffffff;
    }
    *(uint *)(param_2 + 0x16) = (uint)*(byte *)(lVar6 + 0x6f) << 0x1f | uVar9;
    if ((uVar14 >> 8 & 1) != 0) {
      uVar14 = (uint)*(ushort *)(lVar6 + 0x7a);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      *(uint *)((longlong)param_2 + 0xb4) = (uint)*(byte *)(lVar6 + 0x7f) << 0x1f | uVar14;
      uVar14 = (uint)*(ushort *)(lVar6 + 0x82);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      *(uint *)(param_2 + 0x17) = (uint)*(byte *)(lVar6 + 0x87) << 0x1f | uVar14;
      uVar14 = (uint)*(ushort *)(lVar6 + 0x72);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      *(uint *)((longlong)param_2 + 0xbc) = (uint)*(byte *)(lVar6 + 0x77) << 0x1f | uVar14;
      uVar14 = (uint)*(ushort *)(lVar6 + 0x92);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      *(uint *)(param_2 + 0x18) = (uint)*(byte *)(lVar6 + 0x97) << 0x1f | uVar14;
      uVar14 = (uint)*(ushort *)(lVar6 + 0x8a);
      if (uVar14 == 0xffff) {
        uVar14 = 0xffffffff;
      }
      *(uint *)((longlong)param_2 + 0xc4) = (uint)*(byte *)(lVar6 + 0x8f) << 0x1f | uVar14;
    }
  }
  else if (*(char *)(param_1 + 0x1c4) == '\x01') {
    *(undefined4 *)(param_2 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xac) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x16) = 0xffffffff;
  }
  if ((*(byte *)(param_1 + 0x26c) & 1) != 0) {
    lVar6 = *(longlong *)(param_3 + 8);
    lVar7 = *(longlong *)(lVar6 + 0xa0);
    uVar19 = 0;
    uVar16 = 0;
    do {
      iVar5 = *(int *)(param_1 + 0x220 + uVar16 * 4);
      lVar11 = (longlong)iVar5;
      if ((lVar11 < 0) || (*(int *)(lVar6 + 0xa8) <= iVar5)) {
        switch((int)uVar16) {
        case 0xe:
          *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(param_2 + 0x1f);
          uVar12 = param_2[0x1e];
          goto LAB_144b36f13;
        case 0xf:
          *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)(param_2 + 0x1b);
          uVar12 = param_2[0x1a];
          goto LAB_144b36f22;
        case 0x10:
          *puVar2 = *puVar1;
          param_2[0x25] = param_2[0x1d];
          break;
        case 0x11:
          *(undefined4 *)((longlong)param_2 + 0x14c) = uVar19;
        }
        goto switchD_144b36ee3_caseD_2;
      }
      switch(uVar16 & 0xffffffff) {
      case 0:
        uVar17 = *(undefined4 *)(lVar7 + 8 + lVar11);
        puVar15 = param_2 + 0x1e;
        goto LAB_144b36f4f;
      case 1:
        uVar17 = *(undefined4 *)(lVar7 + 8 + lVar11);
        puVar15 = param_2 + 0x20;
LAB_144b36f4f:
        *(undefined4 *)(puVar15 + 1) = uVar17;
        *puVar15 = *(undefined8 *)(lVar7 + lVar11);
        break;
      case 3:
        *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(lVar7 + 8 + lVar11);
        param_2[0x1a] = *(undefined8 *)(lVar7 + lVar11);
        break;
      case 4:
        uVar12 = ((undefined8 *)(lVar7 + lVar11))[1];
        *puVar1 = *(undefined8 *)(lVar7 + lVar11);
        param_2[0x1d] = uVar12;
        break;
      case 0xd:
        uVar19 = *(undefined4 *)(lVar7 + lVar11);
        *(undefined4 *)((longlong)param_2 + 0x10c) = uVar19;
        break;
      case 0xe:
        *(undefined4 *)(param_2 + 0x27) = *(undefined4 *)(lVar7 + 8 + lVar11);
        uVar12 = *(undefined8 *)(lVar7 + lVar11);
LAB_144b36f13:
        param_2[0x26] = uVar12;
        break;
      case 0xf:
        *(undefined4 *)(param_2 + 0x23) = *(undefined4 *)(lVar7 + 8 + lVar11);
        uVar12 = *(undefined8 *)(lVar7 + lVar11);
LAB_144b36f22:
        param_2[0x22] = uVar12;
        break;
      case 0x10:
        uVar12 = ((undefined8 *)(lVar7 + lVar11))[1];
        *puVar2 = *(undefined8 *)(lVar7 + lVar11);
        param_2[0x25] = uVar12;
        break;
      case 0x11:
        *(undefined4 *)((longlong)param_2 + 0x14c) = *(undefined4 *)(lVar7 + lVar11);
      }
switchD_144b36ee3_caseD_2:
      uVar16 = uVar16 + 1;
    } while ((ulonglong)uVar13 * 5 + 0xe != uVar16);
  }
  return;
}



// FUNCTION 144b36fc4 FUN_144b36fc4 body=88 status=ok
// SIG undefined FUN_144b36fc4(void)

void FUN_144b36fc4(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}


