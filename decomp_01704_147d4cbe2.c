// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147d4cbe2 FUN_147d4cbe2 body=42 status=ok
// SIG undefined FUN_147d4cbe2(void)

void FUN_147d4cbe2(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147d4cc18 FUN_147d4cc18 body=96 status=ok
// SIG undefined FUN_147d4cc18(void)

undefined8 FUN_147d4cc18(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1415997be();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb09bb0,1);
  return uVar3;
}



// FUNCTION 147d4cc78 FUN_147d4cc78 body=52 status=ok
// SIG undefined FUN_147d4cc78(void)

void FUN_147d4cc78(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147d4ccac FUN_147d4ccac body=42 status=ok
// SIG undefined FUN_147d4ccac(void)

void FUN_147d4ccac(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 147d4cce2 FUN_147d4cce2 body=96 status=ok
// SIG undefined FUN_147d4cce2(void)

undefined8 FUN_147d4cce2(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  thunk_FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1414d71fc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14cb09c38,1);
  return uVar3;
}



// FUNCTION 147d4cd42 FUN_147d4cd42 body=52 status=ok
// SIG undefined FUN_147d4cd42(void)

void FUN_147d4cd42(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  FUN_147432e26(_Dst);
  return;
}



// FUNCTION 147d4cd7a FUN_147d4cd7a body=107 status=ok
// SIG undefined FUN_147d4cd7a(void)

void FUN_147d4cd7a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 99) & 8) != 0) {
    FUN_145980c64(param_1,param_2);
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x3c0) = param_2;
  if (lVar1 != param_2) {
    FUN_147c45b2c(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 147d4cde6 FUN_147d4cde6 body=129 status=ok
// SIG undefined FUN_147d4cde6(void)

void FUN_147d4cde6(longlong *param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)FUN_14093f908();
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x668))(plVar1);
    if (fVar2 <= 0.0001) {
                    /* WARNING: Could not recover jumptable at 0x000147d4ce64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x780))
                (param_1,param_2 * *(float *)(param_1 + 0x85) * (float)DAT_14c759090 *
                         *(float *)((longlong)param_1 + 0x74));
      return;
    }
  }
  FUN_147a5f0cc(param_1,param_2);
  return;
}



// FUNCTION 147d4ce68 FUN_147d4ce68 body=129 status=ok
// SIG undefined FUN_147d4ce68(void)

void FUN_147d4ce68(longlong *param_1,float param_2)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)FUN_14093f908();
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x668))(plVar1);
    if (fVar2 <= 0.0001) {
                    /* WARNING: Could not recover jumptable at 0x000147d4cee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x778))
                (param_1,param_2 * *(float *)((longlong)param_1 + 0x42c) * (float)DAT_14c759090 *
                         *(float *)((longlong)param_1 + 0x74));
      return;
    }
  }
  FUN_147a5f114(param_1,param_2);
  return;
}



// FUNCTION 147d4cf28 FUN_147d4cf28 body=2935 status=ok
// SIG undefined FUN_147d4cf28(void)

void FUN_147d4cf28(longlong param_1,char param_2,double param_3)

{
  float fVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_a8 [44];
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(ulonglong *)(param_1 + 0x550) =
       ~-(ulonglong)(*(double *)(param_1 + 0x548) == -1.0) &
       (ulonglong)(param_3 - *(double *)(param_1 + 0x548));
  *(double *)(param_1 + 0x548) = param_3;
  memcpy((void *)(param_1 + 0x770),(void *)(param_1 + 0x650),0x120);
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x650) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x654) = 0;
    *(undefined8 *)(param_1 + 0x65c) = 0;
    *(undefined4 *)(param_1 + 0x664) = 0;
    *(undefined1 **)(param_1 + 0x668) = &DAT_3f8000003f800000;
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    *(undefined8 *)(param_1 + 0x6a0) = 0;
    *(undefined4 *)(param_1 + 0x6a8) = 0;
    *(undefined8 *)(param_1 + 0x6c0) = 0;
    *(undefined8 *)(param_1 + 0x6b4) = 0;
    *(undefined8 *)(param_1 + 0x6d0) = 0;
    *(undefined8 *)(param_1 + 0x700) = 0;
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined8 *)(param_1 + 0x678) = 0;
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined8 *)(param_1 + 0x688) = 0;
    *(undefined8 *)(param_1 + 0x690) = 0;
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    *(undefined8 *)(param_1 + 0x6ec) = 0;
    *(undefined8 *)(param_1 + 0x6f4) = 0;
    *(undefined8 *)(param_1 + 0x710) = 0;
    *(undefined8 *)(param_1 + 0x718) = 0;
    *(undefined8 *)(param_1 + 0x71c) = 0;
    *(undefined8 *)(param_1 + 0x724) = 0;
    *(undefined4 *)(param_1 + 0x6d8) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x708) = 0x3f800000;
    *(undefined8 *)(param_1 + 0x730) = 0;
    *(undefined8 *)(param_1 + 0x738) = 0x3f80000000000000;
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x4f0);
    *(ulonglong *)(param_1 + 0x768) =
         *(ulonglong *)(param_1 + 0x4f4) << 0x20 | *(ulonglong *)(param_1 + 0x4f4) >> 0x20;
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x4fc);
    *(undefined8 *)(param_1 + 0x750) = *(undefined8 *)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x740) = *(undefined8 *)(param_1 + 0x504);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x50c);
    *(undefined8 *)(param_1 + 0x758) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x558) == '\x01') {
      FUN_147d4daa0(param_1,param_3);
    }
    dVar17 = *(double *)(param_1 + 0x5c8);
    dVar2 = *(double *)(param_1 + 0x5d0);
    fVar19 = 1.0;
    if ((dVar2 != dVar17) || (NAN(dVar2) || NAN(dVar17))) {
      dVar17 = (param_3 - dVar17) / (dVar2 - dVar17);
      dVar2 = 0.0;
      if (0.0 <= dVar17) {
        dVar2 = dVar17;
      }
      dVar17 = 1.0;
      if (dVar2 <= 1.0) {
        dVar17 = dVar2;
      }
      fVar19 = (float)dVar17;
    }
    fVar15 = expf(-(fVar19 * 12.0 + -6.0));
    fVar15 = 1.0 / (fVar15 + 1.0);
    fVar15 = (fVar19 - fVar15) * 0.5 + fVar15;
    if (0.5 <= fVar15) {
      fVar15 = fVar15 + -0.5;
      lVar6 = 0x5c0;
      lVar8 = 0x5b4;
      lVar9 = 0x5bc;
      lVar11 = 0x5b0;
      lVar12 = 0x5b8;
      lVar13 = 0x5ac;
    }
    else {
      lVar6 = 0x5e0;
      lVar8 = 0x5c0;
      lVar9 = 0x5dc;
      lVar11 = 0x5bc;
      lVar12 = 0x5d8;
      lVar13 = 0x5b8;
    }
    fVar15 = fVar15 + fVar15;
    fVar19 = (*(float *)(param_1 + lVar13) - *(float *)(param_1 + lVar12)) * fVar15 +
             *(float *)(param_1 + lVar12);
    fVar16 = (*(float *)(param_1 + lVar11) - *(float *)(param_1 + lVar9)) * fVar15 +
             *(float *)(param_1 + lVar9);
    fVar15 = (*(float *)(param_1 + lVar8) - *(float *)(param_1 + lVar6)) * fVar15 +
             *(float *)(param_1 + lVar6);
    fVar18 = SQRT(fVar15 * fVar15 + fVar19 * fVar19 + fVar16 * fVar16);
    fVar20 = 0.0;
    bVar3 = NAN(fVar18);
    bVar4 = fVar18 == 0.0;
    fVar19 = fVar19 / fVar18;
    if ((bVar4) && (!bVar3)) {
      fVar19 = 0.0;
    }
    fVar16 = fVar16 / fVar18;
    if ((bVar4) && (!bVar3)) {
      fVar16 = 0.0;
    }
    fVar15 = fVar15 / fVar18;
    if ((bVar4) && (!bVar3)) {
      fVar15 = 0.0;
    }
    *(float *)(param_1 + 0x538) = fVar19;
    *(float *)(param_1 + 0x53c) = fVar16;
    *(float *)(param_1 + 0x540) = fVar15;
    dVar17 = *(double *)(param_1 + 0x598);
    dVar2 = *(double *)(param_1 + 0x5a0);
    if ((dVar2 != dVar17) || (NAN(dVar2) || NAN(dVar17))) {
      dVar17 = (param_3 - dVar17) / (dVar2 - dVar17);
      dVar2 = 0.0;
      if (0.0 <= dVar17) {
        dVar2 = dVar17;
      }
      dVar17 = 1.0;
      if (dVar2 <= 1.0) {
        dVar17 = dVar2;
      }
      fVar20 = (float)dVar17;
    }
    fVar19 = expf(-(fVar20 * 12.0 + -6.0));
    fVar19 = 1.0 / (fVar19 + 1.0);
    fVar16 = 0.0;
    fVar15 = (*(float *)(param_1 + 0x590) - *(float *)(param_1 + 0x5a8)) *
             ((fVar20 - fVar19) * 0.0 + fVar19) + *(float *)(param_1 + 0x5a8);
    *(float *)(param_1 + 0x534) = fVar15;
    fVar15 = fVar15 + *(float *)(param_1 + 0x55c);
    fVar19 = 1.0;
    if (fVar15 <= 1.0) {
      fVar19 = fVar15;
    }
    fVar15 = 0.0;
    if (0.0 <= fVar19) {
      fVar15 = fVar19;
    }
    *(float *)(param_1 + 0x5ec) = fVar15;
    fVar19 = *(float *)(param_1 + 0x538);
    dVar17 = *(double *)(param_1 + 0x550);
    fVar20 = (float)((double)(fVar19 * fVar15 * *(float *)(param_1 + 0x500)) * dVar17 +
                    (double)*(float *)(param_1 + 0x5e4));
    *(float *)(param_1 + 0x5e4) = fVar20;
    fVar18 = *(float *)(param_1 + 0x53c);
    fVar21 = (float)((double)(fVar15 * fVar18 * *(float *)(param_1 + 0x500)) * dVar17 +
                    (double)*(float *)(param_1 + 0x5e8));
    *(float *)(param_1 + 0x5e8) = fVar21;
    uVar5 = (uint)(fVar15 * 9.0);
    uVar10 = 9;
    if ((int)uVar5 < 9) {
      if ((int)uVar5 < 0) {
        uVar10 = 0;
        uVar14 = 0;
      }
      else {
        fVar16 = fVar15 * 9.0 - (float)(int)uVar5;
        uVar14 = (ulonglong)(uVar5 + 1);
        uVar10 = (ulonglong)uVar5;
      }
    }
    else {
      uVar14 = 9;
    }
    pfVar7 = (float *)(param_1 + 0x5f0);
    lVar6 = 4;
    do {
      fVar1 = *(float *)(param_1 + uVar10 * 4 + lVar6 * 4);
      *pfVar7 = (float)((double)((*(float *)(param_1 + uVar14 * 4 + lVar6 * 4) - fVar1) * fVar16 +
                                fVar1) * dVar17 + (double)*pfVar7);
      lVar6 = lVar6 + 10;
      pfVar7 = pfVar7 + 1;
    } while (lVar6 != 0x68);
    *(float *)(param_1 + 0x650) = fVar19;
    *(float *)(param_1 + 0x654) = fVar18;
    *(undefined4 *)(param_1 + 0x658) = *(undefined4 *)(param_1 + 0x540);
    *(float *)(param_1 + 0x65c) = fVar15;
    fVar19 = *(float *)(param_1 + 0x1a8 + uVar10 * 4);
    *(float *)(param_1 + 0x664) =
         (*(float *)(param_1 + 0x1a8 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x5f0);
    uVar5 = -(uint)(*(float *)(param_1 + 0x1a0) != 0.0);
    *(uint *)(param_1 + 0x668) =
         ~uVar5 & 0x3f800000 | (uint)(1.0 / *(float *)(param_1 + 0x1a0)) & uVar5;
    *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x1a4);
    fVar19 = *(float *)(param_1 + 0x1d0 + uVar10 * 4);
    *(float *)(param_1 + 0x6b0) =
         (*(float *)(param_1 + 0x1d0 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x1f8 + uVar10 * 4);
    *(float *)(param_1 + 0x674) =
         (*(float *)(param_1 + 0x1f8 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_1 + 0x5f4);
    fVar19 = *(float *)(param_1 + 0x27c + uVar10 * 4);
    *(float *)(param_1 + 0x67c) =
         (*(float *)(param_1 + 0x27c + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x678) = *(undefined4 *)(param_1 + 0x5f8);
    FUN_147d4deb0(param_1,&local_7c);
    *(undefined4 *)(param_1 + 0x6a0) = local_7c;
    *(undefined4 *)(param_1 + 0x6a4) = local_78;
    *(undefined4 *)(param_1 + 0x6a8) = local_74;
    fVar19 = *(float *)(param_1 + 0x220 + uVar10 * 4);
    fVar19 = (*(float *)(param_1 + 0x220 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(float *)(param_1 + 0x6b4) = fVar19;
    if (*(char *)(param_1 + 0x61b) != '\0') {
      *(float *)(param_1 + 0x6b4) = fVar19 * *(float *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x270);
    fVar19 = *(float *)(param_1 + 0x2a4 + uVar10 * 4);
    fVar19 = (*(float *)(param_1 + 0x2a4 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(float *)(param_1 + 0x6b8) = fVar19;
    if (*(char *)(param_1 + 0x621) == '\x01') {
      *(float *)(param_1 + 0x6b8) = fVar19 * *(float *)(param_1 + 0x640);
    }
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x2f4);
    *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x274);
    *(undefined8 *)(param_1 + 0x688) = *(undefined8 *)(param_1 + 0x2f8);
    fVar19 = *(float *)(param_1 + 0x248 + uVar10 * 4);
    *(float *)(param_1 + 0x690) =
         (*(float *)(param_1 + 0x248 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x2cc + uVar10 * 4);
    *(float *)(param_1 + 0x694) =
         (*(float *)(param_1 + 0x2cc + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x5fc);
    fVar19 = *(float *)(param_1 + 0x300 + uVar10 * 4);
    *(float *)(param_1 + 0x6d4) =
         (*(float *)(param_1 + 0x300 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x700) = *(undefined4 *)(param_1 + 0x608);
    fVar19 = *(float *)(param_1 + 0x3e0 + uVar10 * 4);
    *(float *)(param_1 + 0x704) =
         (*(float *)(param_1 + 0x3e0 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x6e0) = *(undefined4 *)(param_1 + 0x600);
    fVar19 = *(float *)(param_1 + 0x328 + uVar10 * 4);
    *(float *)(param_1 + 0x6e4) =
         (*(float *)(param_1 + 0x328 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x350 + uVar10 * 4);
    *(float *)(param_1 + 0x6e8) =
         (*(float *)(param_1 + 0x350 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x378 + uVar10 * 4);
    *(float *)(param_1 + 0x6ec) =
         (*(float *)(param_1 + 0x378 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined4 *)(param_1 + 0x710) = *(undefined4 *)(param_1 + 0x60c);
    fVar19 = *(float *)(param_1 + 0x408 + uVar10 * 4);
    *(float *)(param_1 + 0x714) =
         (*(float *)(param_1 + 0x408 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x430 + uVar10 * 4);
    *(float *)(param_1 + 0x718) =
         (*(float *)(param_1 + 0x430 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x458 + uVar10 * 4);
    *(float *)(param_1 + 0x71c) =
         (*(float *)(param_1 + 0x458 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x3a0 + uVar10 * 4);
    *(float *)(param_1 + 0x6f0) =
         (*(float *)(param_1 + 0x3a0 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0xd8 + uVar10 * 4);
    fVar19 = (*(float *)(param_1 + 0xd8 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar18 = 0.0;
    fVar15 = 0.0;
    if (1.1920929e-07 <= fVar19) {
      fVar15 = (1.0 / fVar19) * *(float *)(param_1 + 0x3c8) * 10.0;
    }
    *(float *)(param_1 + 0x6f4) = fVar15;
    *(undefined4 *)(param_1 + 0x6f8) = *(undefined4 *)(param_1 + 0x604);
    fVar19 = *(float *)(param_1 + 0x480 + uVar10 * 4);
    *(float *)(param_1 + 0x720) =
         (*(float *)(param_1 + 0x480 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    fVar19 = *(float *)(param_1 + 0x150 + uVar10 * 4);
    fVar19 = (*(float *)(param_1 + 0x150 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    if (1.1920929e-07 <= fVar19) {
      fVar18 = (1.0 / fVar19) * *(float *)(param_1 + 0x4a8) * 10.0;
    }
    *(float *)(param_1 + 0x724) = fVar18;
    *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x610);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x3dc);
    *(undefined4 *)(param_1 + 0x708) = *(undefined4 *)(param_1 + 0x4bc);
    *(undefined4 *)(param_1 + 0x730) = *(undefined4 *)(param_1 + 0x614);
    fVar19 = *(float *)(param_1 + 0x4c0 + uVar10 * 4);
    *(float *)(param_1 + 0x734) =
         (*(float *)(param_1 + 0x4c0 + uVar14 * 4) - fVar19) * fVar16 + fVar19;
    *(undefined8 *)(param_1 + 0x738) = *(undefined8 *)(param_1 + 0x4e8);
    *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_1 + 0x4f0);
    *(undefined4 *)(param_1 + 0x76c) = *(undefined4 *)(param_1 + 0x4f4);
    *(undefined4 *)(param_1 + 0x768) = *(undefined4 *)(param_1 + 0x4f8);
    *(undefined4 *)(param_1 + 0x760) = *(undefined4 *)(param_1 + 0x4fc);
    *(undefined4 *)(param_1 + 0x750) = *(undefined4 *)(param_1 + 0x510);
    *(undefined4 *)(param_1 + 0x754) = *(undefined4 *)(param_1 + 0x514);
    *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x504);
    *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x508);
    *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x50c);
    *(float *)(param_1 + 0x758) = fVar20;
    *(float *)(param_1 + 0x75c) = fVar21;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4daa0 FUN_147d4daa0 body=1039 status=ok
// SIG undefined FUN_147d4daa0(void)

void FUN_147d4daa0(float *param_1,double param_2)

{
  double dVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (((*(double *)(param_1 + 0x15c) <= param_2 && param_2 != *(double *)(param_1 + 0x15c)) ||
      ((param_2 < *(double *)(param_1 + 0x162) &&
       (*(double *)(param_1 + 0x15a) <= param_2 && param_2 != *(double *)(param_1 + 0x15a))))) &&
     (dVar4 = *(double *)(param_1 + 0x154), uVar2 = rand(),
     (double)(((float)(uVar2 & 0x7fff) / 32767.0) * (float)dVar4 + 0.0) <
     (double)param_1[0x146] * *(double *)(param_1 + 0x154) * 0.009999999776482582)) {
    *(double *)(param_1 + 0x15e) = param_2;
    *(double *)(param_1 + 0x160) = (double)param_1[0x157];
    fVar7 = param_1[0x147];
    fVar5 = param_1[0x148];
    uVar2 = rand();
    fVar7 = ((float)(uVar2 & 0x7fff) / 32767.0) * (fVar5 - fVar7) + fVar7;
    dVar4 = (double)fVar7;
    *(double *)(param_1 + 0x158) = dVar4;
    fVar5 = 1.0 - param_1[0x14d];
    if (fVar5 < fVar7) {
      dVar4 = (double)fVar5;
      *(double *)(param_1 + 0x158) = dVar4;
    }
    fVar6 = *param_1 * 0.5;
    fVar6 = (*param_1 - fVar6) * ABS((float)(dVar4 - (double)param_1[0x14d])) + fVar6;
    fVar8 = fVar6 + fVar6;
    fVar7 = param_1[(ulonglong)(dVar4 <= (double)param_1[0x157]) + 0x14b];
    uVar2 = rand();
    dVar4 = (double)((((float)(uVar2 & 0x7fff) / 32767.0) * (fVar8 - fVar6) + fVar6) * fVar7) +
            param_2;
    *(double *)(param_1 + 0x15a) = dVar4;
    fVar7 = param_1[0x149];
    fVar5 = param_1[0x14a];
    uVar2 = rand();
    dVar4 = (double)(((float)(uVar2 & 0x7fff) / 32767.0) * (fVar5 - fVar7) + fVar7) + dVar4;
    *(double *)(param_1 + 0x162) = dVar4;
    fVar7 = param_1[0x14c];
    uVar2 = rand();
    *(double *)(param_1 + 0x15c) =
         (double)((((float)(uVar2 & 0x7fff) / 32767.0) * (fVar6 * 3.0 - fVar8) + fVar8) * fVar7) +
         dVar4;
  }
  if (*(double *)(param_1 + 0x15a) <= param_2) {
    dVar4 = *(double *)(param_1 + 0x162);
    if (((param_2 <= dVar4) || (dVar1 = *(double *)(param_1 + 0x15c), dVar1 <= 0.0)) ||
       (dVar1 <= dVar4)) goto LAB_147d4dda5;
    fVar6 = (float)((param_2 - dVar4) / (dVar1 - dVar4));
    fVar7 = expf(-(fVar6 * 12.0 + -6.0));
    fVar5 = 1.0 / (fVar7 + 1.0);
    fVar5 = (fVar6 - fVar5) * 0.5 + fVar5;
    fVar7 = 0.0;
    lVar3 = 0x560;
  }
  else {
    fVar6 = (float)((param_2 - *(double *)(param_1 + 0x15e)) /
                   (*(double *)(param_1 + 0x15a) - *(double *)(param_1 + 0x15e)));
    fVar7 = expf(-(fVar6 * 12.0 + -6.0));
    fVar5 = 1.0 / (fVar7 + 1.0);
    fVar5 = (fVar6 - fVar5) * 0.0 + fVar5;
    fVar7 = (float)*(double *)(param_1 + 0x158);
    lVar3 = 0x580;
  }
  param_1[0x157] =
       (fVar7 - (float)*(double *)((longlong)param_1 + lVar3)) * fVar5 +
       (float)*(double *)((longlong)param_1 + lVar3);
LAB_147d4dda5:
  fVar7 = 1.0;
  if (param_1[0x157] <= 1.0) {
    fVar7 = param_1[0x157];
  }
  fVar5 = 0.0;
  if (0.0 <= fVar7) {
    fVar5 = fVar7;
  }
  param_1[0x157] = fVar5;
  return;
}



// FUNCTION 147d4deb0 FUN_147d4deb0 body=179 status=ok
// SIG undefined FUN_147d4deb0(void)

void FUN_147d4deb0(longlong param_1,float *param_2)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x538);
  fVar4 = *(float *)(param_1 + 0x53c);
  fVar3 = *(float *)(param_1 + 0x540) + *(float *)(param_1 + 8);
  fVar6 = SQRT(fVar3 * fVar3 + fVar5 * fVar5 + fVar4 * fVar4);
  bVar1 = NAN(fVar6);
  bVar2 = fVar6 == 0.0;
  fVar4 = fVar4 / fVar6;
  if ((bVar2) && (!bVar1)) {
    fVar4 = 0.0;
  }
  fVar5 = fVar5 / fVar6;
  if ((bVar2) && (!bVar1)) {
    fVar5 = 0.0;
  }
  fVar3 = fVar3 / fVar6;
  if ((bVar2) && (!bVar1)) {
    fVar3 = 0.0;
  }
  *param_2 = fVar5 * *(float *)(param_1 + 0x640) * *(float *)(param_1 + 0xc) +
             *(float *)(param_1 + 0x634);
  param_2[1] = fVar4 * *(float *)(param_1 + 0x640) * *(float *)(param_1 + 0xc) +
               *(float *)(param_1 + 0x638);
  param_2[2] = fVar3 * *(float *)(param_1 + 0x640) * *(float *)(param_1 + 0xc) +
               *(float *)(param_1 + 0x63c);
  return;
}



// FUNCTION 147d4df64 FUN_147d4df64 body=506 status=ok
// SIG undefined FUN_147d4df64(void)

void FUN_147d4df64(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  
  dVar1 = *param_2;
  fVar10 = *(float *)(param_1 + 0x538);
  dVar13 = (double)fVar10;
  if ((dVar1 != dVar13) || (NAN(dVar1) || NAN(dVar13))) {
    fVar11 = *(float *)(param_1 + 0x53c);
    dVar9 = (double)fVar11;
  }
  else {
    fVar11 = *(float *)(param_1 + 0x53c);
    dVar9 = (double)fVar11;
    if ((param_2[1] == dVar9) && (!NAN(param_2[1]) && !NAN(dVar9))) {
      if ((param_2[2] == (double)*(float *)(param_1 + 0x540)) &&
         (!NAN(param_2[2]) && !NAN((double)*(float *)(param_1 + 0x540)))) {
        return;
      }
    }
  }
  *(float *)(param_1 + 0x5ac) = (float)dVar1;
  dVar2 = param_2[1];
  *(float *)(param_1 + 0x5b0) = (float)dVar2;
  dVar3 = param_2[2];
  *(float *)(param_1 + 0x5b4) = (float)dVar3;
  dVar4 = param_2[1];
  dVar5 = *param_2;
  fVar12 = *(float *)(param_1 + 0x540);
  dVar6 = param_2[2];
  *(double *)(param_1 + 0x5c8) = *(double *)(param_1 + 0x548);
  fVar14 = *(float *)(param_1 + 4) * 0.5;
  *(double *)(param_1 + 0x5d0) =
       (double)((*(float *)(param_1 + 4) - fVar14) *
                (1.0 - ((float)((double)fVar12 * dVar6 + dVar13 * dVar5 + dVar9 * dVar4) + 1.0) *
                       0.5) + fVar14) + *(double *)(param_1 + 0x548);
  *(float *)(param_1 + 0x5d8) = fVar10;
  *(float *)(param_1 + 0x5dc) = fVar11;
  *(float *)(param_1 + 0x5e0) = fVar12;
  fVar10 = (fVar10 + (float)dVar1) * 0.5;
  fVar11 = (fVar11 + (float)dVar2) * 0.5;
  fVar12 = (fVar12 + (float)dVar3) * 0.5;
  fVar14 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
  bVar7 = NAN(fVar14);
  bVar8 = fVar14 == 0.0;
  fVar10 = fVar10 / fVar14;
  if ((bVar8) && (!bVar7)) {
    fVar10 = 0.0;
  }
  fVar11 = fVar11 / fVar14;
  if ((bVar8) && (!bVar7)) {
    fVar11 = 0.0;
  }
  fVar12 = fVar12 / fVar14;
  if ((bVar8) && (!bVar7)) {
    fVar12 = 0.0;
  }
  *(float *)(param_1 + 0x5b8) = fVar10;
  *(float *)(param_1 + 0x5bc) = fVar11;
  *(float *)(param_1 + 0x5c0) = fVar12;
  return;
}



// FUNCTION 147d4e162 FUN_147d4e162 body=30 status=ok
// SIG undefined FUN_147d4e162(void)

undefined8 FUN_147d4e162(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x390) + 0x48))();
  return param_2;
}



// FUNCTION 147d4e250 FUN_147d4e250 body=114 status=ok
// SIG undefined FUN_147d4e250(void)

longlong * FUN_147d4e250(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14aab4e40;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  plVar1 = (longlong *)FUN_141235872();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147d4e2c2 FUN_147d4e2c2 body=148 status=ok
// SIG undefined FUN_147d4e2c2(void)

longlong * FUN_147d4e2c2(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14aab4e40;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  *param_1 = (longlong)&PTR_FUN_14aab4e60;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  plVar1 = (longlong *)FUN_141235872();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147d4e356 FUN_147d4e356 body=79 status=ok
// SIG undefined FUN_147d4e356(void)

void FUN_147d4e356(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aab4e60;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aab4e40;
  FUN_144760d56(param_1 + 5);
  return;
}



// FUNCTION 147d4e3a6 FUN_147d4e3a6 body=176 status=ok
// SIG undefined FUN_147d4e3a6(void)

longlong * FUN_147d4e3a6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = (longlong)&PTR_FUN_14aab4e40;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(byte *)((longlong)param_1 + 0x1b) = (*(byte *)((longlong)param_1 + 0x1b) & 0xf8) + 1;
  FUN_144805afa(param_1 + 5);
  *param_1 = (longlong)&PTR_FUN_14aab4e80;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  plVar1 = (longlong *)FUN_141235872();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
  }
  (**(code **)(*param_1 + 8))(param_1,lVar2,1);
  return param_1;
}



// FUNCTION 147d4e456 FUN_147d4e456 body=149 status=ok
// SIG undefined FUN_147d4e456(void)

void FUN_147d4e456(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aab4e80;
  FUN_14063df0f(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x44] != 0) {
    FUN_1400020a8();
  }
  FUN_1406c2f92(param_1[0x3f],*(undefined4 *)(param_1 + 0x40));
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14aab4e40;
  FUN_144760d56(param_1 + 5);
  return;
}



// FUNCTION 147d4e4ec FUN_147d4e4ec body=191 status=ok
// SIG undefined FUN_147d4e4ec(void)

void FUN_147d4e4ec(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x660);
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  *(longlong *)(param_1 + 0x1d0) = lVar1;
  FUN_140c99494(param_1 + 0x1d8,param_2 + 0x620);
  lVar1 = *(longlong *)(param_2 + 0x630);
  if (DAT_14c950c29 == 1) {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x630);
    }
  }
  *(longlong *)(param_1 + 0x1e8) = lVar1;
  FUN_147876444(param_1 + 0x1f0,param_2 + 0x390);
  FUN_147d4e660(param_1,param_2,param_3);
  return;
}



// FUNCTION 147d4e5ac FUN_147d4e5ac body=178 status=ok
// SIG undefined FUN_147d4e5ac(void)

undefined4 FUN_147d4e5ac(longlong param_1)

{
  undefined1 auStack_e8 [40];
  longlong local_c0 [18];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147d4f0da();
  FUN_141711404(local_c0,*(undefined4 *)(param_1 + 8),0);
  (**(code **)(local_c0[0] + 0x138))(local_c0,param_1 + 0x1d0);
  FUN_147b4fb58(local_c0,param_1 + 0x1d8);
  (**(code **)(local_c0[0] + 0x138))(local_c0,param_1 + 0x1e8);
  FUN_147b4fcea(local_c0,param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4e660 FUN_147d4e660 body=936 status=ok
// SIG undefined FUN_147d4e660(void)

void FUN_147d4e660(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  double dVar15;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xdf;
  lVar3 = FUN_141235872();
  lVar1 = param_2[2];
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x10) = lVar1;
  }
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x1fb);
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x3a3);
  uVar2 = FUN_1448e5c9e(param_2);
  *(undefined1 *)(param_1 + 0x1a) = uVar2;
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x2ec);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x334);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)((longlong)param_2 + 0x331);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)((longlong)param_2 + 0x2e9);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)((longlong)param_2 + 0x332);
  *(int *)(param_1 + 0x1b0) = (int)*(char *)((longlong)param_2 + 0x3a1);
  *(int *)(param_1 + 0x1b4) = (int)param_2[0x71];
  *(int *)(param_1 + 0x1b8) = (int)param_2[0xd0];
  *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)((longlong)param_2 + 0x33c);
  bVar4 = *(byte *)((longlong)param_2 + 0x2d6) >> 1 & 1;
  bVar11 = *(byte *)(param_1 + 0x1c0);
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xfe | bVar4;
  bVar5 = *(byte *)((longlong)param_2 + 0x2d6) >> 1 & 2;
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xfc | bVar4 | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 8;
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xf4 | bVar4 | bVar5 | bVar6;
  bVar7 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 4;
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xf0 | bVar4 | bVar5 | bVar6 | bVar7;
  bVar8 = (*(byte *)((longlong)param_2 + 0x2dc) & 2) << 3;
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xe0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8;
  bVar9 = *(byte *)((longlong)param_2 + 0x2dc) >> 2 & 0x20;
  *(byte *)(param_1 + 0x1c0) = bVar11 & 0xc0 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9;
  bVar10 = *(byte *)((longlong)param_2 + 0x2dc) & 0x40;
  *(byte *)(param_1 + 0x1c0) =
       bVar11 & 0x80 | bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10;
  *(byte *)(param_1 + 0x1c0) =
       bVar4 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10 |
       (*(byte *)((longlong)param_2 + 0x2d6) & 8) << 4;
  bVar5 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 1;
  bVar11 = *(byte *)(param_1 + 0x1c1);
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xfe | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x2d6) >> 4 & 2;
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xfc | bVar5 | bVar6;
  bVar7 = *(byte *)((longlong)param_2 + 0x2d4) >> 4 & 4;
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xf8 | bVar5 | bVar6 | bVar7;
  bVar8 = *(char *)((longlong)param_2 + 0x675) * '\x02' & 8;
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xf0 | bVar5 | bVar6 | bVar7 | bVar8;
  bVar9 = *(byte *)((longlong)param_2 + 0x2d5) & 0x10;
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xe0 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9;
  bVar10 = *(byte *)((longlong)param_2 + 0x2de) & 0x40;
  *(byte *)(param_1 + 0x1c1) = bVar11 & 0xa0 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10;
  bVar12 = *(byte *)((longlong)param_2 + 0x1f9) >> 3 & 1;
  bVar4 = *(byte *)(param_1 + 0x1c2);
  *(byte *)(param_1 + 0x1c2) = bVar4 & 0xfe | bVar12;
  bVar13 = *(byte *)((longlong)param_2 + 0x9f) & 2;
  *(byte *)(param_1 + 0x1c2) = bVar4 & 0xfc | bVar12 | bVar13;
  bVar14 = *(byte *)(param_2 + 0x3f) >> 3 & 4;
  *(byte *)(param_1 + 0x1c2) = bVar4 & 0xf8 | bVar12 | bVar13 | bVar14;
  *(byte *)(param_1 + 0x1c1) =
       bVar11 & 0x20 | bVar5 | bVar6 | bVar7 | bVar8 | bVar9 | bVar10 |
       (*(byte *)((longlong)param_2 + 0x2d4) & 8) << 4;
  *(byte *)(param_1 + 0x1c2) =
       bVar4 & 0xf0 | bVar12 | bVar13 | bVar14 | *(byte *)((longlong)param_2 + 0x66c) >> 1 & 8;
  *(int *)(param_1 + 0x1c4) = (int)param_2[0xcd];
  *(undefined1 *)(param_1 + 0x1c8) = *(undefined1 *)((longlong)param_2 + 0x2d1);
  *(undefined1 *)(param_1 + 0x1c9) = *(undefined1 *)((longlong)param_2 + 0x1fc);
  (**(code **)(*param_2 + 0x7a8))(param_2,local_a8);
  dVar15 = (double)FUN_144a91046(local_a8);
  bVar5 = ((dVar15 < 0.0 ^ *(byte *)((longlong)param_2 + 0x676)) & 1) << 4;
  bVar11 = *(byte *)(param_1 + 0x1c2);
  bVar4 = *(byte *)(param_1 + 0x1c3);
  *(byte *)(param_1 + 0x1c2) = bVar11 & 0xef | bVar5;
  bVar6 = *(byte *)((longlong)param_2 + 0x675) >> 1 & 0x20;
  *(byte *)(param_1 + 0x1c2) = bVar11 & 0xcf | bVar5 | bVar6;
  bVar7 = (*(byte *)((longlong)param_2 + 0x2d3) & 8) << 3;
  *(byte *)(param_1 + 0x1c2) = bVar11 & 0x8f | bVar5 | bVar6 | bVar7;
  *(byte *)(param_1 + 0x1c2) =
       bVar11 & 0xf | bVar5 | bVar6 | bVar7 | *(char *)((longlong)param_2 + 0x674) * '\x02' & 0x80U;
  bVar11 = *(byte *)((longlong)param_2 + 0x674) >> 7;
  *(byte *)(param_1 + 0x1c3) = bVar4 & 0xfe | bVar11;
  *(byte *)(param_1 + 0x1c3) = bVar4 & 0xfc | bVar11 | *(byte *)((longlong)param_2 + 0x2de) & 2;
  if (param_3 != '\0') {
    thunk_FUN_1400f437c(param_1 + 0x28,param_2 + 0x82);
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4ea0a FUN_147d4ea0a body=1742 status=ok
// SIG undefined FUN_147d4ea0a(void)

/* WARNING: Removing unreachable block (ram,0x000147d4ed69) */
/* WARNING: Removing unreachable block (ram,0x000147d4f069) */

void FUN_147d4ea0a(longlong param_1,longlong param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined2 *puVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [39];
  undefined1 local_b1;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = *(longlong *)(param_2 + 0x660);
  local_b1 = param_3;
  local_b0 = param_2;
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
LAB_147d4ea67:
    FUN_1400bbfae(&local_a8,lVar5);
    *(undefined4 *)(param_1 + 0x1d8) = (undefined4)local_a8;
    *(undefined4 *)(param_1 + 0x1dc) = local_a8._4_4_;
    *(undefined4 *)(param_1 + 0x1e0) = (undefined4)uStack_a0;
    *(undefined4 *)(param_1 + 0x1e4) = uStack_a0._4_4_;
    if ((undefined8 *)(param_1 + 0x1d8) == &local_a8) {
      if (local_98 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x1e8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1e8) = local_98;
      local_98 = 0;
      *(undefined4 *)(param_1 + 0x1f0) = (undefined4)uStack_90;
      *(undefined4 *)(param_1 + 500) = uStack_90._4_4_;
    }
    cVar7 = (*(code *)PTR_FUN_14c758760)();
    if (cVar7 != '\0') {
      uVar2 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        goto LAB_147d4eb81;
      }
    }
    FUN_14485c47a(param_1 + 0x1d0,lVar5);
  }
  else {
    if (lVar5 != 0) goto LAB_147d4ea67;
    *(undefined8 *)(param_1 + 0x1d0) = 0;
    *(undefined8 *)(param_1 + 0x1d8) = 0;
    *(undefined8 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    if (*(int *)(param_1 + 500) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x1e8),0);
    }
    puVar6 = *(undefined2 **)(param_1 + 0x1e8);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
    }
  }
LAB_147d4eb81:
  iVar3 = *(int *)(local_b0 + 0x628);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(local_b0 + 0x620);
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(lVar5 + lVar8);
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
LAB_147d4ec70:
        local_88 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        FUN_1400bbfae(&local_80,lVar10);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        if (cVar7 != '\0') {
          uVar2 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_147d4ed00;
          }
        }
        FUN_14485c47a(&local_a8,lVar10);
      }
      else {
        uStack_90 = 0;
        local_88 = 0;
        if (lVar10 != 0) goto LAB_147d4ec70;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
LAB_147d4ed00:
      iVar4 = *(int *)(param_1 + 0x200);
      lVar10 = (longlong)iVar4;
      *(uint *)(param_1 + 0x200) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x204) < iVar4 + 1U) {
        FUN_147b4fa30((longlong *)(param_1 + 0x1f8),iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x1f8);
      *(undefined8 *)(lVar9 + lVar10 * 0x28) = local_a8;
      puVar1 = (undefined4 *)(lVar9 + 8 + lVar10 * 0x28);
      *puVar1 = (undefined4)uStack_a0;
      puVar1[1] = uStack_a0._4_4_;
      puVar1[2] = (undefined4)local_98;
      puVar1[3] = local_98._4_4_;
      *(longlong *)(lVar9 + 0x18 + lVar10 * 0x28) = uStack_90;
      uStack_90 = 0;
      *(undefined4 *)(lVar9 + 0x20 + lVar10 * 0x28) = (undefined4)local_88;
      *(undefined4 *)(lVar9 + 0x24 + lVar10 * 0x28) = local_88._4_4_;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  lVar5 = *(longlong *)(local_b0 + 0x630);
  if ((lVar5 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar5);
  }
  else if (lVar5 == 0) {
    *(undefined8 *)(param_1 + 0x208) = 0;
    *(undefined8 *)(param_1 + 0x210) = 0;
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x228) = 0;
    if (*(int *)(param_1 + 0x22c) < 0) {
      FUN_1446f8c06((undefined8 *)(param_1 + 0x220),0);
    }
    puVar6 = *(undefined2 **)(param_1 + 0x220);
    if (puVar6 != (undefined2 *)0x0) {
      *puVar6 = 0;
    }
    goto LAB_147d4eeb1;
  }
  FUN_1400bbfae(&local_a8,lVar5);
  *(undefined4 *)(param_1 + 0x210) = (undefined4)local_a8;
  *(undefined4 *)(param_1 + 0x214) = local_a8._4_4_;
  *(undefined4 *)(param_1 + 0x218) = (undefined4)uStack_a0;
  *(undefined4 *)(param_1 + 0x21c) = uStack_a0._4_4_;
  if ((undefined8 *)(param_1 + 0x210) == &local_a8) {
    if (local_98 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x220) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x220) = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0x228) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0x22c) = uStack_90._4_4_;
  }
  cVar7 = (*(code *)PTR_FUN_14c758760)();
  if (cVar7 != '\0') {
    uVar2 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
      *(undefined8 *)(param_1 + 0x208) = 0;
      goto LAB_147d4eeb1;
    }
  }
  FUN_14485c47a(param_1 + 0x208,lVar5);
LAB_147d4eeb1:
  iVar3 = *(int *)(local_b0 + 0x398);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(local_b0 + 0x390);
    lVar8 = 0;
    do {
      lVar10 = *(longlong *)(lVar5 + lVar8);
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
      }
      if ((lVar10 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar10);
LAB_147d4ef70:
        local_88 = 0;
        uStack_90 = 0;
        local_98 = 0;
        uStack_a0 = 0;
        local_a8 = 0;
        FUN_1400bbfae(&local_80,lVar10);
        uStack_a0 = CONCAT44(uStack_7c,local_80);
        local_98 = CONCAT44(uStack_74,uStack_78);
        if (uStack_90 != 0) {
          FUN_1400020a8();
        }
        uStack_90 = CONCAT44(uStack_6c,local_70);
        local_88 = CONCAT44(uStack_64,uStack_68);
        cVar7 = (*(code *)PTR_FUN_14c758760)();
        if (cVar7 != '\0') {
          uVar2 = *(uint *)(lVar10 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          if ((*(uint *)(lVar9 + 8) & 0x8400000) != 0) {
            local_a8 = 0;
            goto LAB_147d4f000;
          }
        }
        FUN_14485c47a(&local_a8,lVar10);
      }
      else {
        uStack_90 = 0;
        local_88 = 0;
        if (lVar10 != 0) goto LAB_147d4ef70;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
      }
LAB_147d4f000:
      iVar4 = *(int *)(param_1 + 0x238);
      lVar10 = (longlong)iVar4;
      *(uint *)(param_1 + 0x238) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x23c) < iVar4 + 1U) {
        FUN_147b4fac4((longlong *)(param_1 + 0x230),iVar4);
      }
      lVar9 = *(longlong *)(param_1 + 0x230);
      *(undefined8 *)(lVar9 + lVar10 * 0x28) = local_a8;
      puVar1 = (undefined4 *)(lVar9 + 8 + lVar10 * 0x28);
      *puVar1 = (undefined4)uStack_a0;
      puVar1[1] = uStack_a0._4_4_;
      puVar1[2] = (undefined4)local_98;
      puVar1[3] = local_98._4_4_;
      *(longlong *)(lVar9 + 0x18 + lVar10 * 0x28) = uStack_90;
      uStack_90 = 0;
      *(undefined4 *)(lVar9 + 0x20 + lVar10 * 0x28) = (undefined4)local_88;
      *(undefined4 *)(lVar9 + 0x24 + lVar10 * 0x28) = local_88._4_4_;
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar3 * 8 != lVar8);
  }
  FUN_147d4e660(param_1,local_b0,local_b1);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4f0da FUN_147d4f0da body=176 status=ok
// SIG undefined FUN_147d4f0da(void)

undefined4 FUN_147d4f0da(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [144];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_141711404(local_c0,0,0);
  *(undefined4 *)(param_1 + 8) = 0;
  if (DAT_14cb097c8 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cb097c8 = FUN_140002ddd(FUN_146404e65,uVar1,L"SplineMeshComponentDescriptorBase");
  }
  FUN_14047320e(DAT_14cb097c8,local_c0,param_1,0);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4f18c FUN_147d4f18c body=178 status=ok
// SIG undefined FUN_147d4f18c(void)

undefined4 FUN_147d4f18c(longlong param_1)

{
  undefined1 auStack_e8 [40];
  longlong local_c0 [18];
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_147d4f0da();
  FUN_141711404(local_c0,*(undefined4 *)(param_1 + 8),0);
  (**(code **)(local_c0[0] + 0x130))(local_c0,param_1 + 0x1d0);
  FUN_147b4ff10(local_c0,param_1 + 0x1f8);
  (**(code **)(local_c0[0] + 0x130))(local_c0,param_1 + 0x208);
  FUN_147b501aa(local_c0,param_1 + 0x230);
  *(undefined4 *)(param_1 + 8) = local_30;
  FUN_144a7fc42(local_c0);
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return local_30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4f240 FUN_147d4f240 body=846 status=ok
// SIG undefined FUN_147d4f240(void)

void FUN_147d4f240(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(undefined1 *)((longlong)param_2 + 0x1fb) = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)((longlong)param_2 + 0x3a3) = *(undefined1 *)(param_1 + 0x19);
  FUN_1479ed6d8(param_2,*(undefined1 *)(param_1 + 0x1a));
  *(undefined1 *)((longlong)param_2 + 0x2ec) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined4 *)((longlong)param_2 + 0x334) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined1 *)((longlong)param_2 + 0x331) = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)((longlong)param_2 + 0x2e9) = *(undefined1 *)(param_1 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x332) = *(undefined1 *)(param_1 + 0x22);
  lVar9 = param_1 + 0x28;
  thunk_FUN_1400f437c(param_2 + 0x82,lVar9);
  *(undefined1 *)((longlong)param_2 + 0x3a1) = *(undefined1 *)(param_1 + 0x1b0);
  *(undefined4 *)(param_2 + 0x71) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_2 + 0xd0) = *(undefined4 *)(param_1 + 0x1b8);
  *(undefined4 *)((longlong)param_2 + 0x33c) = *(undefined4 *)(param_1 + 0x1bc);
  uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),*(char *)(param_1 + 0x1c0) * '\x02') &
           0xffffffffffffff02;
  bVar3 = *(byte *)((longlong)param_2 + 0x2d6);
  bVar1 = *(byte *)((longlong)param_2 + 0x2dc);
  bVar4 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar3 & 0xfd | bVar4;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(char *)(param_1 + 0x1c0) * '\x02') & 0xffffffffffffff04;
  bVar5 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar3 & 0xf9 | bVar4 | bVar5;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(char *)(param_1 + 0x1c0) << 4) & 0xffffffffffffff80;
  bVar6 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar3 & 0x79 | bVar4 | bVar5 | bVar6;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(char *)(param_1 + 0x1c0) << 4) & 0xffffffffffffff40;
  bVar7 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar3 & 0x39 | bVar4 | bVar5 | bVar6 | bVar7;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(byte *)(param_1 + 0x1c0) >> 3) & 0xffffffffffffff02;
  bVar2 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2dc) = bVar1 & 0xfd | bVar2;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(char *)(param_1 + 0x1c0) << 2) & 0xffffffffffffff80;
  bVar8 = (byte)uVar10;
  *(byte *)((longlong)param_2 + 0x2dc) = bVar1 & 0x7d | bVar2 | bVar8;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(undefined1 *)(param_1 + 0x1c0)) & 0xffffffffffffff40;
  *(byte *)((longlong)param_2 + 0x2dc) = bVar1 & 0x3d | bVar2 | bVar8 | (byte)uVar10;
  bVar1 = *(byte *)(param_1 + 0x1c0) >> 4 & 8;
  *(byte *)((longlong)param_2 + 0x2d6) = bVar3 & 0x31 | bVar4 | bVar5 | bVar6 | bVar7 | bVar1;
  bVar2 = (*(byte *)(param_1 + 0x1c1) & 1) << 4;
  *(byte *)((longlong)param_2 + 0x2d6) =
       bVar3 & 0x21 | bVar4 | bVar5 | bVar6 | bVar7 | bVar1 | bVar2;
  *(byte *)((longlong)param_2 + 0x2d6) =
       bVar3 & 1 | bVar4 | bVar5 | bVar6 | bVar7 | bVar1 | bVar2 |
       (*(byte *)(param_1 + 0x1c1) & 2) << 4;
  *(byte *)((longlong)param_2 + 0x2d4) =
       *(byte *)((longlong)param_2 + 0x2d4) & 0xbf | (*(byte *)(param_1 + 0x1c1) & 4) << 4;
  *(byte *)((longlong)param_2 + 0x675) =
       *(byte *)((longlong)param_2 + 0x675) & 0xfb | *(byte *)(param_1 + 0x1c1) >> 1 & 4;
  *(byte *)((longlong)param_2 + 0x2d5) =
       *(byte *)((longlong)param_2 + 0x2d5) & 0xef | *(byte *)(param_1 + 0x1c1) & 0x10;
  *(byte *)((longlong)param_2 + 0x2de) =
       *(byte *)((longlong)param_2 + 0x2de) & 0xbf | *(byte *)(param_1 + 0x1c1) & 0x40;
  *(byte *)((longlong)param_2 + 0x1f9) =
       *(byte *)((longlong)param_2 + 0x1f9) & 0xf7 | (*(byte *)(param_1 + 0x1c2) & 1) << 3;
  *(byte *)((longlong)param_2 + 0x9f) =
       *(byte *)((longlong)param_2 + 0x9f) & 0xfd | *(byte *)(param_1 + 0x1c2) & 2;
  uVar10 = CONCAT71((int7)(uVar10 >> 8),*(undefined1 *)(param_1 + 0x1c2)) & 0xffffffffffffff04;
  FUN_14581d7fa(param_2,CONCAT71((int7)(uVar10 >> 8),(byte)uVar10 >> 2));
  *(byte *)((longlong)param_2 + 0x2d4) =
       *(byte *)((longlong)param_2 + 0x2d4) & 0xf7 | *(byte *)(param_1 + 0x1c1) >> 4 & 8;
  *(byte *)((longlong)param_2 + 0x66c) =
       *(byte *)((longlong)param_2 + 0x66c) & 0xef | *(char *)(param_1 + 0x1c2) * '\x02' & 0x10U;
  *(byte *)((longlong)param_2 + 0x676) =
       *(byte *)((longlong)param_2 + 0x676) & 0xfe | *(byte *)(param_1 + 0x1c2) >> 4 & 1;
  *(byte *)((longlong)param_2 + 0x675) =
       *(byte *)((longlong)param_2 + 0x675) & 0xbf | *(char *)(param_1 + 0x1c2) * '\x02' & 0x40U;
  bVar3 = *(byte *)(param_1 + 0x1c2);
  if (((*(byte *)((longlong)param_2 + 0x2d3) & 8) == 0) == (bool)((bVar3 & 0x40) >> 6)) {
    *(byte *)((longlong)param_2 + 0x2d3) =
         *(byte *)((longlong)param_2 + 0x2d3) & 0xf7 | (bVar3 & 0x40) >> 3;
    (**(code **)(*param_2 + 0x958))(param_2);
    bVar3 = *(byte *)(param_1 + 0x1c2);
  }
  bVar1 = *(byte *)((longlong)param_2 + 0x674);
  bVar3 = bVar3 >> 1 & 0x40;
  *(byte *)((longlong)param_2 + 0x674) = bVar1 & 0xbf | bVar3;
  *(byte *)((longlong)param_2 + 0x674) = bVar1 & 0x3f | bVar3 | *(char *)(param_1 + 0x1c3) << 7;
  *(byte *)((longlong)param_2 + 0x2de) =
       *(byte *)((longlong)param_2 + 0x2de) & 0xfd | *(byte *)(param_1 + 0x1c3) & 2;
  *(undefined4 *)(param_2 + 0xcd) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined1 *)((longlong)param_2 + 0x2d1) = *(undefined1 *)(param_1 + 0x1c8);
  *(undefined1 *)((longlong)param_2 + 0x1fc) = *(undefined1 *)(param_1 + 0x1c9);
  return;
}



// FUNCTION 147d4f58e FUN_147d4f58e body=404 status=ok
// SIG undefined FUN_147d4f58e(void)

void FUN_147d4f58e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0xa78))(param_2,*(undefined8 *)(param_1 + 0x1d0));
  iVar2 = *(int *)(param_1 + 0x1e0);
  local_50 = param_2;
  if (iVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar2);
  }
  plVar1 = param_2 + 0xc4;
  *(undefined4 *)(param_2 + 0xc5) = 0;
  if (*(int *)((longlong)param_2 + 0x62c) != iVar2) {
    FUN_1474ba72a(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x1e0);
  local_58 = param_1;
  if ((longlong)iVar2 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1d8);
    lVar5 = 0;
    do {
      lVar6 = FUN_14370bca6(&local_50,*(undefined8 *)(lVar4 + lVar5));
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      iVar3 = (int)param_2[0xc5];
      *(uint *)(param_2 + 0xc5) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0x62c) < iVar3 + 1U) {
        FUN_140655806(plVar1,iVar3);
      }
      *(longlong *)(*plVar1 + (longlong)iVar3 * 8) = lVar6;
      if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar6);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  lVar4 = local_58;
  lVar5 = FUN_14370bca6(&local_50,*(undefined8 *)(local_58 + 0x1e8));
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar5);
  }
  param_2[0xc6] = lVar5;
  FUN_147876444(param_2 + 0x72,lVar4 + 0x1f0);
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147d4f240(lVar4,param_2);
  return;
}



// FUNCTION 147d4f724 FUN_147d4f724 body=572 status=ok
// SIG undefined FUN_147d4f724(void)

void FUN_147d4f724(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_147b066f2(param_1 + 0x1d0);
  (**(code **)(*param_2 + 0xa78))(param_2,uVar2);
  iVar5 = *(int *)(param_1 + 0x200);
  local_50 = param_2;
  if (-1 < iVar5) {
    plVar1 = param_2 + 0xc4;
    *(undefined4 *)(param_2 + 0xc5) = 0;
    if (*(int *)((longlong)param_2 + 0x62c) != iVar5) {
      FUN_1474ba72a(plVar1);
    }
    if ((longlong)*(int *)(param_1 + 0x200) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x1f8);
      lVar6 = (longlong)*(int *)(param_1 + 0x200) * 0x28;
      do {
        lVar4 = FUN_14370bf4a(&local_50,lVar3);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        iVar5 = (int)param_2[0xc5];
        *(uint *)(param_2 + 0xc5) = iVar5 + 1U;
        if (*(uint *)((longlong)param_2 + 0x62c) < iVar5 + 1U) {
          FUN_140655806(plVar1,iVar5);
        }
        *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar4;
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        lVar3 = lVar3 + 0x28;
        lVar6 = lVar6 + -0x28;
      } while (lVar6 != 0);
    }
    lVar3 = FUN_14370bf4a(&local_50,param_1 + 0x208);
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    param_2[0xc6] = lVar3;
    iVar5 = *(int *)(param_1 + 0x238);
    if (-1 < iVar5) {
      plVar1 = param_2 + 0x72;
      *(undefined4 *)(param_2 + 0x73) = 0;
      if (*(int *)((longlong)param_2 + 0x39c) != iVar5) {
        FUN_147b50444(plVar1);
      }
      if ((longlong)*(int *)(param_1 + 0x238) != 0) {
        lVar3 = *(longlong *)(param_1 + 0x230);
        lVar6 = (longlong)*(int *)(param_1 + 0x238) * 0x28;
        do {
          lVar4 = FUN_147b07efc(lVar3);
          if (lVar4 != 0) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar4);
            }
            iVar5 = (int)param_2[0x73];
            *(uint *)(param_2 + 0x73) = iVar5 + 1U;
            if (*(uint *)((longlong)param_2 + 0x39c) < iVar5 + 1U) {
              FUN_147b4fe8a(plVar1,iVar5);
            }
            *(longlong *)(*plVar1 + (longlong)iVar5 * 8) = lVar4;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar4);
            }
          }
          lVar3 = lVar3 + 0x28;
          lVar6 = lVar6 + -0x28;
        } while (lVar6 != 0);
      }
      if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      FUN_147d4f240(param_1,param_2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar5);
}



// FUNCTION 147d4f97c FUN_147d4f97c body=72 status=ok
// SIG undefined FUN_147d4f97c(void)

undefined4
FUN_147d4f97c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_5;
  uVar1 = FUN_147d5b9d0();
  if ((char)uVar1 != '\0') {
    FUN_1406740ca(param_1,param_2,param_5,param_4,uVar2,param_6);
  }
  return uVar1;
}



// FUNCTION 147d4f9c4 FUN_147d4f9c4 body=86 status=ok
// SIG undefined FUN_147d4f9c4(void)

undefined4
FUN_147d4f9c4(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_7;
  uVar1 = FUN_147d5bb6c(param_1);
  if ((char)uVar1 != '\0') {
    FUN_1406740ca(param_1,param_2,param_7,param_4,param_5,param_6,uVar2);
  }
  return uVar1;
}



// FUNCTION 147d4fa1a FUN_147d4fa1a body=88 status=ok
// SIG undefined FUN_147d4fa1a(void)

undefined4
FUN_147d4fa1a(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_7;
  uVar1 = FUN_147d5bcb0(param_1);
  if ((char)uVar1 != '\0') {
    FUN_1406740ca(param_1,param_2,param_7,param_4,param_5,param_6,uVar2);
  }
  return uVar1;
}



// FUNCTION 147d4fa72 FUN_147d4fa72 body=1022 status=ok
// SIG undefined FUN_147d4fa72(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147d4fa72(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_228 [32];
  byte local_208;
  undefined1 local_200;
  undefined1 local_1f8;
  longlong local_1f0;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  int local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined8 local_150;
  longlong local_148 [4];
  int local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined1 uStack_11c;
  undefined1 uStack_11b;
  undefined2 uStack_11a;
  undefined4 uStack_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined8 uStack_fc;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  int local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_228;
  if ((*(int *)(DAT_14cb09888 + 4) != 0) && ((*(byte *)(param_1 + 0x2cc) & 1) != 0)) {
    bVar2 = *(byte *)(param_1 + 0x6d);
    bVar3 = *(byte *)(*(longlong *)(param_1 + 0x298) + 0x8f);
    uVar6 = FUN_147d5c788(param_1,*(undefined8 *)(param_2 + 0x148));
    uVar10 = (uint)bVar3;
    if ((int)uVar6 < (int)uVar10) {
      uVar6 = uVar10;
    }
    uVar9 = (ulonglong)uVar6;
    local_1e0 = *(longlong *)(**(longlong **)(param_1 + 0x298) + uVar9 * 8);
    lVar12 = param_1 + 0x2d0;
    if (*(longlong *)(param_1 + 0x850) != 0) {
      lVar12 = *(longlong *)(param_1 + 0x850);
    }
    local_148[1] = 0;
    local_148[2] = 0;
    uStack_120 = 0xff;
    uStack_11c = 0;
    uStack_11b = 1;
    uStack_118 = 0;
    local_d0 = 0;
    local_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_100 = 0;
    uStack_fc = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    iVar11 = *(int *)(local_1e0 + 0x38);
    if ((iVar11 == *(int *)(param_1 + 0x868)) && (uVar6 == (int)*(short *)(param_1 + 0x870))) {
      uStack_11b = 0;
    }
    else {
      lVar1 = param_1 + 0x860;
      iVar4 = *(int *)(param_1 + 0x86c);
      FUN_140064c53(*(undefined8 *)(param_1 + 0x860));
      *(undefined4 *)(param_1 + 0x868) = 0;
      if ((iVar4 < 0) && (*(int *)(param_1 + 0x86c) != 0)) {
        FUN_147a3b5ca(lVar1,0);
      }
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      local_1d8 = lVar12;
      if (*(int *)(param_1 + 0x86c) < iVar11) {
        FUN_147a3b5ca(lVar1,iVar11);
      }
      if (0 < *(int *)(local_1e0 + 0x38)) {
        local_1d0 = uVar9 * 0x450;
        iVar11 = 0;
        do {
          lVar12 = FUN_1474b7f2a(lVar1);
          local_1f8 = 0;
          local_200 = 0;
          local_208 = bVar2 & 7;
          local_1f0 = lVar12;
          cVar5 = FUN_14015294c(param_1,uVar9,0,iVar11);
          if (cVar5 == '\0') {
            plVar7 = (longlong *)FUN_1447277f0(0);
            uVar8 = (**(code **)(*plVar7 + 0x2f0))(plVar7);
            *(undefined8 *)(lVar12 + 0xc0) = uVar8;
            *(longlong *)(lVar12 + 0xb8) =
                 *(longlong *)(*(longlong *)(param_1 + 0x298) + 0x10) + local_1d0;
          }
          else {
            FUN_1406740ca(param_1,uVar9);
          }
          *(uint *)(lVar12 + 0xe4) =
               *(uint *)(lVar12 + 0xe4) & 0xffffffbf | (*(uint *)(param_1 + 0x880) & 2) << 5;
          *(int *)(lVar12 + 0xd8) = iVar11;
          *(short *)(lVar12 + 0xdc) = (short)iVar11;
          iVar11 = iVar11 + 1;
        } while (iVar11 < *(int *)(local_1e0 + 0x38));
      }
      *(short *)(param_1 + 0x870) = (short)uVar6;
      iVar11 = *(int *)(param_1 + 0x868);
      lVar12 = local_1d8;
    }
    lVar12 = lVar12 + uVar9 * 0xb0;
    local_e0 = param_1 + 0x100;
    uStack_d8 = 1;
    uVar8 = *(undefined8 *)(param_1 + 0x860);
    local_148[0] = lVar12;
    local_148[3] = uVar8;
    local_128 = iVar11;
    if ((DAT_14cae9ea1 & 4) != 0) {
      local_c8 = 0;
      local_c0 = iVar11;
      if (iVar11 == 0) {
        local_bc = 0;
      }
      else {
        FUN_147471e8a(&local_c8,iVar11,0);
        FUN_147471efc(local_c8,uVar8,iVar11);
      }
      local_b8 = 0;
      local_b4 = *(int *)(local_1e0 + 0x10c);
      local_b0 = local_b4 * 0xc;
      local_ac = *(undefined4 *)(lVar12 + 0x50);
      local_a0 = 0;
      local_98 = 1;
      local_94 = 0;
      local_88 = _DAT_14c846250;
      uStack_80 = DAT_14c846258;
      local_78 = _DAT_14c846260;
      uStack_70 = _DAT_14c846268;
      local_68 = _DAT_14c846270;
      uStack_60 = _DAT_14c846278;
      local_58 = DAT_14c846280;
      uStack_54 = DAT_14c846284;
      uStack_50 = DAT_14c846288;
      uStack_4c = DAT_14c84628c;
      local_a8 = lVar12;
      FUN_147ceea5a(param_2);
    }
    local_1c0 = 0;
    uStack_1b8 = 0;
    local_148[1] = 0;
    local_148[2] = 0;
    local_1a4 = CONCAT44(uStack_120,local_124);
    uStack_19c = CONCAT44(uStack_118,CONCAT22(uStack_11a,CONCAT11(uStack_11b,uStack_11c)));
    local_1b0 = local_148[3];
    local_1a8 = local_128;
    local_190 = 0;
    uStack_188 = 0;
    local_110 = 0;
    uStack_108 = 0;
    uStack_104 = 0;
    local_180 = local_100;
    uStack_17c = (undefined4)uStack_fc;
    uStack_178 = uStack_fc._4_4_;
    uStack_174 = uStack_f4;
    local_170 = 0;
    uStack_168 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_160 = (undefined4)local_e0;
    uStack_15c = local_e0._4_4_;
    uStack_158 = uStack_d8;
    uStack_154 = uStack_d4;
    local_150 = 0;
    local_d0 = 0;
    local_1c8 = lVar12;
    FUN_147cee9b0(param_2);
    FUN_1472aaabe(local_148);
  }
  if ((local_48 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d4fe8a FUN_147d4fe8a body=211 status=ok
// SIG undefined FUN_147d4fe8a(void)

void FUN_147d4fe8a(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_147ccb55c();
  if ((longlong)(int)param_3[1] != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x310) + 0x10);
    lVar2 = *param_3;
    lVar3 = (longlong)(int)param_3[1] * 0xf0;
    do {
      lVar4 = *(longlong *)(lVar2 + 0xa8);
      if (*(longlong *)(lVar2 + 0xa8) == 0) {
        lVar4 = lVar2;
      }
      *(undefined8 *)(lVar2 + 0xb8) =
           *(undefined8 *)
            ((longlong)param_2 * 0x450 + lVar1 + 0x440 +
            (ulonglong)(*(uint *)(lVar4 + 0x7c) >> 5 & 8));
      *(uint *)(lVar2 + 0xe4) =
           *(uint *)(lVar2 + 0xe4) & 0xffffffbf |
           ((byte)((byte)*(uint *)(lVar2 + 0xe4) >> 6 ^
                  -(*(float *)(param_1 + 0x970) < 0.0) ^ -(*(float *)(param_1 + 0x974) < 0.0)) & 1)
           << 6;
      lVar2 = lVar2 + 0xf0;
      lVar3 = lVar3 + -0xf0;
    } while (lVar3 != 0);
  }
  return;
}



// FUNCTION 147d4ff5d FUN_147d4ff5d body=128 status=ok
// SIG undefined FUN_147d4ff5d(void)

void FUN_147d4ff5d(longlong param_1,void *param_2)

{
  undefined8 uVar1;
  
  if ((*(byte *)(param_1 + 0x74) & 8) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x95c);
    memcpy((void *)(param_1 + 0x8c0),param_2,0xb0);
    *(undefined8 *)(param_1 + 0x95c) = uVar1;
    FUN_147d5948c(param_1 + 0x8b8,1);
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x9c4);
  memcpy((void *)(param_1 + 0x928),param_2,0xb0);
  *(undefined8 *)(param_1 + 0x9c4) = uVar1;
  FUN_147d59402(param_1 + 0x920,1);
  return;
}



// FUNCTION 147d4ffde FUN_147d4ffde body=160 status=ok
// SIG undefined FUN_147d4ffde(void)

void FUN_147d4ffde(longlong param_1,longlong param_2)

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
  FUN_147a2e8a6(*(undefined8 *)(param_1 + 0x3a0),local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50080 FUN_147d50080 body=160 status=ok
// SIG undefined FUN_147d50080(void)

void FUN_147d50080(longlong param_1,longlong param_2)

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
  FUN_147a2e986(*(undefined8 *)(param_1 + 0x3a0),local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5014c FUN_147d5014c body=175 status=ok
// SIG undefined FUN_147d5014c(void)

void FUN_147d5014c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
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
  FUN_147d501fc(param_1,&local_30,local_28);
  *param_3 = local_30;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d501fc FUN_147d501fc body=244 status=ok
// SIG undefined FUN_147d501fc(void)

ulonglong * FUN_147d501fc(longlong param_1,ulonglong *param_2,longlong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(param_3 + 0x18);
    *param_2 = uVar6;
    lVar9 = *(longlong *)(param_1 + 0x158);
    iVar2 = *(int *)(param_1 + 0x160);
    lVar10 = (longlong)iVar2;
    if (lVar10 != 0) {
      uVar5 = uVar6 >> 0x20;
      lVar4 = 0;
      uVar7 = uVar6 & 0xffffffff;
      do {
        uVar3 = *(undefined8 *)(lVar9 + 8 + lVar4);
        if ((int)uVar7 == (int)uVar3) {
          uVar8 = (int)((ulonglong)uVar3 >> 0x20) + 1;
          uVar7 = (ulonglong)uVar8;
          if ((int)uVar8 <= (int)uVar5) {
            uVar7 = uVar5;
          }
          uVar5 = uVar7;
          uVar7 = uVar6 & 0xffffffff;
          uVar6 = uVar6 & 0xffffffff | uVar5 << 0x20;
        }
        lVar4 = lVar4 + 0x30;
      } while (lVar10 * 0x30 != lVar4);
      *param_2 = uVar6;
    }
    *(uint *)(param_1 + 0x160) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x164) < iVar2 + 1U) {
      FUN_147d597be((longlong *)(param_1 + 0x158),iVar2);
      lVar9 = *(longlong *)(param_1 + 0x158);
    }
    lVar10 = lVar10 * 0x30;
    FUN_147d53066(lVar9 + lVar10,param_3,uVar6);
    *(undefined2 *)(lVar9 + 0x18 + lVar10) = 1;
    puVar1 = (undefined8 *)(lVar9 + 0x1c + lVar10);
    *puVar1 = &DAT_3f8000003f800000;
    puVar1[1] = &DAT_3f8000003f800000;
  }
  return param_2;
}



// FUNCTION 147d502f0 FUN_147d502f0 body=192 status=ok
// SIG undefined FUN_147d502f0(void)

void FUN_147d502f0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_147d5a520(param_1 + 0x1b0,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d503b2 FUN_147d503b2 body=98 status=ok
// SIG undefined FUN_147d503b2(void)

void FUN_147d503b2(longlong param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  FUN_147d5a520(param_1 + 0x1b0,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50422 FUN_147d50422 body=346 status=ok
// SIG undefined FUN_147d50422(void)

void FUN_147d50422(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  longlong local_38 [3];
  
  local_38[2] = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar2 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_3c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  iVar1 = local_3c;
  local_40 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d5057e(param_1,plVar2,iVar1 != 0,local_40 != 0);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38[2] ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5057e FUN_147d5057e body=274 status=ok
// SIG undefined FUN_147d5057e(void)

void FUN_147d5057e(undefined8 param_1,longlong *param_2,undefined1 param_3,undefined1 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [40];
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = (int)param_2[1];
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar1);
  }
  if (iVar1 != 0) {
    FUN_147d59b9c(&local_58);
    lVar4 = param_2[1];
    if ((longlong)(int)lVar4 != 0) {
      lVar2 = *param_2;
      lVar7 = 0;
      do {
        uVar5 = uStack_50;
        lVar3 = *(longlong *)(lVar2 + lVar7);
        lVar8 = (longlong)(int)uStack_50;
        uVar6 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
        if (uStack_50._4_4_ < uVar6) {
          FUN_147d59bfc(&local_58,uVar5 & 0xffffffff);
        }
        *(longlong *)(local_58 + lVar8 * 8) = lVar3 + 0x28;
        lVar7 = lVar7 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar7);
    }
  }
  local_70 = 1;
  local_6d = 1;
  local_6b = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_6e = param_3;
  local_6c = param_4;
  FUN_143714670(param_1,&local_58);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d50692 FUN_147d50692 body=156 status=ok
// SIG undefined FUN_147d50692(void)

void FUN_147d50692(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147d50730(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50730 FUN_147d50730 body=46 status=ok
// SIG undefined FUN_147d50730(void)

longlong * FUN_147d50730(longlong param_1)

{
  longlong *plVar1;
  
  if (param_1 == 0) {
    param_1 = DAT_14c951640;
  }
  plVar1 = (longlong *)FUN_147d54fb8(param_1);
  (**(code **)(*plVar1 + 0x2a0))(plVar1);
  return plVar1;
}



// FUNCTION 147d5075e FUN_147d5075e body=212 status=ok
// SIG undefined FUN_147d5075e(void)

void FUN_147d5075e(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != 0) && (0 < (longlong)*(int *)(param_1 + 0x1b8))) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar2 * 8);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x28) == local_28)) goto LAB_147d507ed;
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_1 + 0x1b8) != lVar2);
  }
  lVar1 = 0;
LAB_147d507ed:
  *param_3 = lVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50834 FUN_147d50834 body=181 status=ok
// SIG undefined FUN_147d50834(void)

void FUN_147d50834(longlong param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *(double *)(param_1 + 0x210);
  dVar2 = *(double *)(param_1 + 0x228);
  dVar3 = *(double *)(param_1 + 0x200);
  dVar4 = *(double *)(param_1 + 0x208);
  dVar5 = *(double *)(param_1 + 0x220);
  dVar6 = *(double *)(param_1 + 0x218);
  *param_3 = dVar3 - dVar6;
  param_3[1] = dVar4 - dVar5;
  param_3[2] = dVar1 - dVar2;
  param_3[3] = dVar3 + dVar6;
  param_3[4] = dVar4 + dVar5;
  param_3[5] = dVar1 + dVar2;
  *(undefined1 *)(param_3 + 6) = 1;
  return;
}



// FUNCTION 147d5092a FUN_147d5092a body=191 status=ok
// SIG undefined FUN_147d5092a(void)

void FUN_147d5092a(longlong param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (((longlong)local_24 < 0) || (*(int *)(param_1 + 0x160) <= local_24)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x158) + (longlong)local_24 * 0x30);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d509ea FUN_147d509ea body=208 status=ok
// SIG undefined FUN_147d509ea(void)

void FUN_147d509ea(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a63fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x160)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x158) + 8);
    lVar3 = 0;
    do {
      if (*plVar2 == local_28) {
        uVar1 = (undefined4)lVar3;
        break;
      }
      lVar3 = lVar3 + 1;
      plVar2 = plVar2 + 6;
    } while (*(int *)(param_1 + 0x160) != lVar3);
  }
  *param_3 = uVar1;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d50abc FUN_147d50abc body=151 status=ok
// SIG undefined FUN_147d50abc(void)

void FUN_147d50abc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50b54 FUN_147d50b54 body=213 status=ok
// SIG undefined FUN_147d50b54(void)

void FUN_147d50b54(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_68);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50c2a FUN_147d50c2a body=151 status=ok
// SIG undefined FUN_147d50c2a(void)

void FUN_147d50c2a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0xffffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50cc2 FUN_147d50cc2 body=213 status=ok
// SIG undefined FUN_147d50cc2(void)

void FUN_147d50cc2(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_68);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50d98 FUN_147d50d98 body=296 status=ok
// SIG undefined FUN_147d50d98(void)

void FUN_147d50d98(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147d1e8e8(&local_68);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50eea FUN_147d50eea body=200 status=ok
// SIG undefined FUN_147d50eea(void)

void FUN_147d50eea(longlong param_1,longlong param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0xe0);
  uVar2 = 0;
  if ((plVar1 != (longlong *)0x0 && -1 < (longlong)local_24) &&
     (uVar2 = 0, local_24 < (int)plVar1[1])) {
    uVar2 = *(undefined4 *)(*(longlong *)(*plVar1 + (longlong)local_24 * 8) + 0x38);
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d50fb4 FUN_147d50fb4 body=45 status=ok
// SIG undefined FUN_147d50fb4(void)

undefined4 FUN_147d50fb4(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  uVar2 = 0;
  if ((-1 < (int)param_2 && plVar1 != (longlong *)0x0) && ((int)param_2 < (int)plVar1[1])) {
    uVar2 = *(undefined4 *)(*(longlong *)(*plVar1 + (ulonglong)param_2 * 8) + 0x38);
  }
  return uVar2;
}



// FUNCTION 147d50fe2 FUN_147d50fe2 body=255 status=ok
// SIG undefined FUN_147d50fe2(void)

void FUN_147d50fe2(longlong param_1,longlong param_2,int *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_48 [36];
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0xe0);
  iVar3 = 0;
  if ((plVar1 != (longlong *)0x0 && -1 < (longlong)local_24) &&
     (iVar3 = 0, local_24 < (int)plVar1[1])) {
    lVar2 = *(longlong *)(*plVar1 + (longlong)local_24 * 8);
    if (0 < (longlong)*(int *)(lVar2 + 0x38)) {
      lVar4 = lVar2 + 0x10;
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x30);
      }
      lVar5 = 0;
      iVar3 = 0;
      do {
        iVar3 = iVar3 + *(int *)(lVar4 + 8 + lVar5);
        lVar5 = lVar5 + 0x1c;
      } while ((longlong)*(int *)(lVar2 + 0x38) * 0x1c != lVar5);
    }
  }
  *param_3 = iVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d510e2 FUN_147d510e2 body=249 status=ok
// SIG undefined FUN_147d510e2(void)

void FUN_147d510e2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38[0] = 0;
  local_38[1] = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d511dc(param_1,&local_48,local_38);
  if (&local_48 == param_3) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_48;
    local_48 = 0;
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d511dc FUN_147d511dc body=172 status=ok
// SIG undefined FUN_147d511dc(void)

longlong * FUN_147d511dc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x1b8)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b0) + lVar3 * 8);
      if (lVar1 != 0) {
        iVar2 = *(int *)(lVar1 + 0x80);
        if (iVar2 == *(int *)(param_3 + 1)) {
          if ((iVar2 < 2) ||
             (iVar2 = FUN_144a80a00(*(undefined8 *)(lVar1 + 0x78),*param_3), iVar2 == 0)) {
LAB_147d51242:
            iVar2 = (int)param_2[1];
            *(uint *)(param_2 + 1) = iVar2 + 1U;
            if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
              FUN_147d5a70e(param_2,iVar2);
            }
            *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar1;
          }
        }
        else if (*(int *)(param_3 + 1) + iVar2 == 1) goto LAB_147d51242;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1b8));
  }
  return param_2;
}



// FUNCTION 147d512a8 FUN_147d512a8 body=79 status=ok
// SIG undefined FUN_147d512a8(void)

undefined8 * FUN_147d512a8(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147d59314(param_1,iVar1);
      FUN_147d59387(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147d512f8 FUN_147d512f8 body=149 status=ok
// SIG undefined FUN_147d512f8(void)

void FUN_147d512f8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5138e FUN_147d5138e body=156 status=ok
// SIG undefined FUN_147d5138e(void)

void FUN_147d5138e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d5142c(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5142c FUN_147d5142c body=106 status=ok
// SIG undefined FUN_147d5142c(void)

void FUN_147d5142c(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_18 = &local_20;
  FUN_147d5a5de(param_1 + 0x1b0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d51498 FUN_147d51498 body=210 status=ok
// SIG undefined FUN_147d51498(void)

void FUN_147d51498(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5156c FUN_147d5156c body=213 status=ok
// SIG undefined FUN_147d5156c(void)

void FUN_147d5156c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(&local_68);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d51642 FUN_147d51642 body=289 status=ok
// SIG undefined FUN_147d51642(void)

void FUN_147d51642(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_3c = 0xffffffff00000080;
  local_34 = 0;
  local_28 = 0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_6c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_20 = 0;
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_147d1e8e8(&local_68);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d51764 FUN_147d51764 body=187 status=ok
// SIG undefined FUN_147d51764(void)

void FUN_147d51764(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar1 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147d512a8(param_1 + 0x158,plVar1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d51890 FUN_147d51890 body=355 status=ok
// SIG undefined FUN_147d51890(void)

void FUN_147d51890(void)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  uint local_68;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((DAT_14cb0d2b0 != 0) && (*(char *)(DAT_14cb0d2b0 + 0xd58) == '\x01')) {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1464059a4(&local_78,0x10,0);
    uVar5 = (ulonglong)local_68;
    lVar4 = local_78;
    if ((int)local_68 < local_70 && -1 < (int)local_68) {
      iVar2 = local_70;
      do {
        uVar6 = uStack_80;
        lVar1 = *(longlong *)(lVar4 + (uVar5 & 0xffffffff) * 8);
        uVar3 = (uint)uVar5;
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0x134) < *(int *)(lVar1 + 0x108))) {
          lVar4 = (longlong)(int)uStack_80;
          uVar3 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar3);
          if (uStack_80._4_4_ < uVar3) {
            FUN_147d5a794(&local_88,uVar6 & 0xffffffff);
          }
          *(longlong *)(local_88 + lVar4 * 8) = lVar1;
          lVar4 = local_78;
          iVar2 = local_70;
          uVar3 = local_68;
        }
        uVar5 = (longlong)(int)uVar3;
        do {
          uVar6 = uVar5;
          uVar5 = uVar6 + 1;
          local_68 = (uint)uVar5;
          if ((longlong)iVar2 <= (longlong)uVar5) break;
        } while (*(longlong *)(lVar4 + uVar5 * 8) == 0);
      } while ((-2 < (longlong)uVar6) && ((int)local_68 < iVar2));
    }
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
    if (0 < (int)uStack_80) {
      FUN_147d5c942(&local_78,&local_88,0,0);
      FUN_147d5cdcc(&local_78);
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d519f4 FUN_147d519f4 body=104 status=ok
// SIG undefined FUN_147d519f4(void)

void FUN_147d519f4(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x18);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    LOCK();
    puVar1 = (uint *)(lVar3 + 8);
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



// FUNCTION 147d51a5c FUN_147d51a5c body=59 status=ok
// SIG undefined FUN_147d51a5c(void)

int FUN_147d51a5c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x38) < 1) {
    iVar1 = 0;
  }
  else {
    lVar2 = param_1 + 0x10;
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
    }
    lVar3 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)(lVar2 + 8 + lVar3);
      lVar3 = lVar3 + 0x1c;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x1c != lVar3);
  }
  return iVar1;
}



// FUNCTION 147d51a98 FUN_147d51a98 body=7 status=ok
// SIG undefined FUN_147d51a98(void)

undefined4 FUN_147d51a98(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x108);
}



// FUNCTION 147d51aa0 FUN_147d51aa0 body=587 status=ok
// SIG undefined FUN_147d51aa0(void)

float FUN_147d51aa0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar2 + 0x1d4);
  uVar13 = *(ulonglong *)(lVar2 + 0x1b8);
  if ((uVar13 & 1) != 0) {
    uVar13 = ((longlong)uVar13 >> 0x18) + lVar2 + 0x1b8;
  }
  iVar4 = *(int *)(lVar2 + 0x1c0) / (int)((uint)bVar1 * 2 + 2);
  lVar8 = lVar2 + 0x10;
  if (*(longlong *)(lVar2 + 0x30) != 0) {
    lVar8 = *(longlong *)(lVar2 + 0x30);
  }
  iVar3 = iVar4 / 3;
  if (iVar4 < -2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  lVar2 = (longlong)*(int *)(param_1 + 0x38) * 0x1c;
  iVar4 = *(int *)(lVar8 + 4 + lVar2);
  lVar14 = (longlong)iVar4;
  iVar12 = *(int *)(lVar8 + 8 + lVar2) * 3 + iVar4;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
    FUN_14482f6fa(param_2);
  }
  fVar19 = 0.0;
  if (iVar4 < iVar12) {
    do {
      if (bVar1 == 0) {
        uVar5 = (uint)*(ushort *)(uVar13 + lVar14 * 2);
        uVar10 = (uint)*(ushort *)(uVar13 + 2 + lVar14 * 2);
        uVar7 = (uint)*(ushort *)(uVar13 + 4 + lVar14 * 2);
      }
      else {
        uVar5 = *(uint *)(uVar13 + lVar14 * 4);
        uVar10 = *(uint *)(uVar13 + 4 + lVar14 * 4);
        uVar7 = *(uint *)(uVar13 + 8 + lVar14 * 4);
      }
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x140);
      iVar4 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x148);
      uVar6 = (ulonglong)(uVar5 * iVar4);
      fVar21 = *(float *)(lVar2 + 4 + uVar6);
      fVar22 = *(float *)(lVar2 + 8 + uVar6);
      uVar11 = (ulonglong)(uVar10 * iVar4);
      uVar9 = (ulonglong)(uVar7 * iVar4);
      fVar18 = *(float *)(lVar2 + 8 + uVar11) - fVar22;
      fVar17 = *(float *)(lVar2 + 4 + uVar11) - fVar21;
      fVar15 = *(float *)(lVar2 + uVar11) - *(float *)(lVar2 + uVar6);
      fVar22 = *(float *)(lVar2 + 8 + uVar9) - fVar22;
      fVar21 = *(float *)(lVar2 + 4 + uVar9) - fVar21;
      fVar20 = *(float *)(lVar2 + uVar9) - *(float *)(lVar2 + uVar6);
      fVar16 = fVar15 * fVar21 - fVar20 * fVar17;
      fVar15 = fVar18 * fVar20 - fVar22 * fVar15;
      fVar21 = fVar17 * fVar22 - fVar21 * fVar18;
      fVar21 = SQRT(fVar16 * fVar16 + fVar21 * fVar21 + fVar15 * fVar15) * 0.5;
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14475e4ac(param_2,iVar4);
      }
      *(float *)(*param_2 + (longlong)iVar4 * 4) = fVar21;
      fVar19 = fVar19 + fVar21;
      lVar14 = lVar14 + 3;
    } while (lVar14 < iVar12);
  }
  return fVar19;
}



// FUNCTION 147d51cec FUN_147d51cec body=260 status=ok
// SIG undefined FUN_147d51cec(void)

float FUN_147d51cec(longlong param_1,longlong *param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  
  if (*(longlong *)(param_1 + 0x30) == 0) {
    fVar9 = 0.0;
  }
  else {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x38);
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != iVar3) {
      FUN_14482f6fa(param_2);
    }
    puVar6 = *(undefined8 **)(param_1 + 0x30);
    if (*(int *)(puVar6 + 7) < 1) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = 0.0;
      lVar7 = 0x28;
      lVar8 = 0;
      do {
        uVar4 = puVar6[0x4b];
        uVar5 = (longlong)puVar6 + ((longlong)uVar4 >> 0x18) + 600;
        if ((uVar4 & 1) == 0) {
          uVar5 = uVar4;
        }
        fVar2 = *(float *)(uVar5 + lVar7);
        iVar3 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
          FUN_14475e4ac(param_2,iVar3);
        }
        *(float *)(*param_2 + (longlong)iVar3 * 4) = fVar2;
        fVar9 = fVar9 + fVar2;
        lVar8 = lVar8 + 1;
        puVar6 = *(undefined8 **)(param_1 + 0x30);
        lVar7 = lVar7 + 0x40;
      } while (lVar8 < *(int *)(puVar6 + 7));
    }
    if (puVar6 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      LOCK();
      piVar1 = (int *)(puVar6 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar6)(puVar6,1);
      }
    }
  }
  return fVar9;
}



// FUNCTION 147d51df2 FUN_147d51df2 body=308 status=ok
// SIG undefined FUN_147d51df2(void)

void FUN_147d51df2(longlong param_1,undefined8 param_2,undefined4 param_3,char param_4,
                  longlong *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  
  uVar3 = *(undefined1 *)(param_1 + 0xb8);
  *param_5 = param_1 + 0x88;
  *(undefined4 *)(param_5 + 1) = 0;
  *(undefined1 *)((longlong)param_5 + 0xc) = 0;
  *(undefined1 *)((longlong)param_5 + 0xd) = uVar3;
  *(undefined2 *)((longlong)param_5 + 0xe) = 3;
  param_5[0x13] = *(longlong *)(param_1 + 0xa0);
  FUN_144a7dcdc(param_1,param_2,param_5);
  FUN_14472d638(param_1,param_2,param_5,0xffffffff);
  FUN_140042a1e(param_1,param_2,param_5,param_3);
  if (param_4 == '\0') {
    if (*(int *)(param_1 + 0xfc) == 0) {
      puVar1 = &DAT_14ca94d98;
      param_5[0x16] = DAT_14ca94db0;
      *(undefined4 *)(param_5 + 0x17) = 0;
      uVar2 = 4;
      uVar3 = 0;
    }
    else {
      puVar1 = (undefined8 *)(param_1 + 200);
      param_5[0x16] = *(longlong *)(param_1 + 0xe8);
      *(undefined4 *)(param_5 + 0x17) = 0xffffffff;
      uVar3 = *(undefined1 *)(param_1 + 0xf8);
      uVar2 = 4;
    }
  }
  else {
    puVar1 = &DAT_14ca94d98;
    param_5[0x16] = DAT_14ca94db0;
    *(undefined4 *)(param_5 + 0x17) = 0;
    uVar2 = 6;
    uVar3 = 4;
  }
  param_5[0x11] = (longlong)puVar1;
  *(undefined4 *)(param_5 + 0x12) = 0;
  *(undefined1 *)((longlong)param_5 + 0x94) = 0;
  *(undefined1 *)((longlong)param_5 + 0x95) = uVar3;
  *(undefined1 *)((longlong)param_5 + 0x96) = 8;
  *(undefined1 *)((longlong)param_5 + 0x97) = uVar2;
  return;
}



// FUNCTION 147d51f26 FUN_147d51f26 body=633 status=ok
// SIG undefined FUN_147d51f26(void)

void FUN_147d51f26(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78;
  longlong *local_70;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(int *)(param_2 + 8) = (int)param_3[1];
  param_2[7] = *param_3;
  *(undefined8 *)((longlong)param_2 + 0x44) = *param_4;
  lVar15 = *(longlong *)(param_1 + 0x1a8);
  lVar12 = *param_2;
  local_78 = param_1;
  local_70 = param_2;
  if (lVar12 != lVar15) {
    *param_2 = lVar15;
    if (lVar15 != 0) {
      LOCK();
      *(int *)(lVar15 + 8) = *(int *)(lVar15 + 8) + 1;
      UNLOCK();
    }
    if (lVar12 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar12 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined1 *)((longlong)local_70 + 0x14) = 0;
  *(undefined8 *)((longlong)local_70 + 0xc) = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = *(int *)(local_78 + 0x38);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  plVar13 = local_70;
  if (iVar3 != 0) {
    lVar15 = local_78 + 0x10;
    FUN_1472c1754(&local_58);
    if (*(longlong *)(local_78 + 0x30) != 0) {
      lVar15 = *(longlong *)(local_78 + 0x30);
    }
    plVar13 = local_70;
    if ((longlong)*(int *)(local_78 + 0x38) != 0) {
      lVar12 = (longlong)*(int *)(local_78 + 0x38) * 0x1c;
      lVar11 = 0;
      lVar10 = local_78;
      local_60 = lVar12;
      do {
        uVar8 = uStack_50;
        lVar7 = *(longlong *)(lVar10 + 0x128);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        local_64 = *(undefined4 *)(lVar10 + 0x148);
        uVar4 = *(undefined4 *)(lVar10 + 0x14c);
        uVar5 = *(uint *)(lVar15 + 4 + lVar11);
        uVar6 = *(undefined4 *)(lVar15 + 8 + lVar11);
        uVar14 = *(undefined1 *)(lVar15 + 0x16 + lVar11);
        uVar2 = *(undefined1 *)(lVar15 + 0x18 + lVar11);
        lVar16 = (longlong)(int)uStack_50;
        uVar9 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar9);
        if (uStack_50._4_4_ < uVar9) {
          local_79 = uVar14;
          FUN_1471b2628(&local_58,uVar8 & 0xffffffff);
          lVar10 = local_78;
          lVar12 = local_60;
          plVar13 = local_70;
          uVar14 = local_79;
        }
        *(longlong *)(local_58 + lVar16 * 0x28) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        lVar16 = local_58 + lVar16 * 0x28;
        *(undefined8 *)(lVar16 + 8) = 3;
        *(undefined4 *)(lVar16 + 0x10) = local_64;
        *(undefined4 *)(lVar16 + 0x14) = uVar4;
        *(uint *)(lVar16 + 0x18) = uVar5 / 3;
        *(undefined4 *)(lVar16 + 0x1c) = uVar6;
        *(undefined1 *)(lVar16 + 0x20) = uVar2;
        *(undefined1 *)(lVar16 + 0x21) = 1;
        *(undefined1 *)(lVar16 + 0x22) = uVar14;
        *(int *)(plVar13 + 2) = (int)plVar13[2] + *(int *)(lVar15 + 8 + lVar11);
        if (lVar7 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar7 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            FUN_144a54812(lVar7);
            lVar10 = local_78;
            lVar12 = local_60;
            plVar13 = local_70;
          }
        }
        lVar11 = lVar11 + 0x1c;
      } while (lVar12 != lVar11);
    }
  }
  FUN_14737756a(plVar13 + 3,&local_58);
  FUN_14005bcf4(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d521a2 FUN_147d521a2 body=646 status=ok
// SIG undefined FUN_147d521a2(void)

void FUN_147d521a2(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined1 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_a8 [47];
  undefined1 local_79;
  longlong local_78;
  longlong *local_70;
  undefined4 local_64;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(int *)(param_2 + 8) = (int)param_3[1];
  param_2[7] = *param_3;
  *(undefined8 *)((longlong)param_2 + 0x44) = *param_4;
  lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 0x10);
  lVar15 = *param_2;
  local_78 = param_1;
  local_70 = param_2;
  if (lVar15 != lVar12) {
    *param_2 = lVar12;
    if (lVar12 != 0) {
      LOCK();
      *(int *)(lVar12 + 8) = *(int *)(lVar12 + 8) + 1;
      UNLOCK();
    }
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
  }
  *(undefined1 *)((longlong)local_70 + 0x14) = 0;
  *(undefined8 *)((longlong)local_70 + 0xc) = 0;
  local_58 = 0;
  uStack_50 = 0;
  iVar3 = *(int *)(*(longlong *)(local_78 + 8) + 0x28);
  if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar3);
  }
  plVar13 = local_70;
  if (iVar3 != 0) {
    FUN_1472c1754(&local_58);
    lVar12 = *(longlong *)(local_78 + 8);
    lVar15 = *(longlong *)(lVar12 + 0x20);
    if (*(longlong *)(lVar12 + 0x20) == 0) {
      lVar15 = lVar12;
    }
    plVar13 = local_70;
    if ((longlong)*(int *)(lVar12 + 0x28) != 0) {
      lVar12 = (longlong)*(int *)(lVar12 + 0x28) * 0x1c;
      lVar11 = 0;
      lVar10 = local_78;
      local_60 = lVar12;
      do {
        uVar8 = uStack_50;
        lVar16 = *(longlong *)(lVar10 + 0x10);
        lVar7 = *(longlong *)(lVar16 + 0x98);
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
          lVar16 = *(longlong *)(lVar10 + 0x10);
        }
        local_64 = *(undefined4 *)(lVar16 + 0xb8);
        uVar4 = *(undefined4 *)(lVar16 + 0xbc);
        uVar5 = *(uint *)(lVar15 + 4 + lVar11);
        uVar6 = *(undefined4 *)(lVar15 + 8 + lVar11);
        uVar14 = *(undefined1 *)(lVar15 + 0x16 + lVar11);
        uVar2 = *(undefined1 *)(lVar15 + 0x18 + lVar11);
        lVar16 = (longlong)(int)uStack_50;
        uVar9 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar9);
        if (uStack_50._4_4_ < uVar9) {
          local_79 = uVar14;
          FUN_1471b2628(&local_58,uVar8 & 0xffffffff);
          lVar10 = local_78;
          lVar12 = local_60;
          plVar13 = local_70;
          uVar14 = local_79;
        }
        *(longlong *)(local_58 + lVar16 * 0x28) = lVar7;
        if (lVar7 != 0) {
          LOCK();
          *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
          UNLOCK();
        }
        lVar16 = local_58 + lVar16 * 0x28;
        *(undefined8 *)(lVar16 + 8) = 3;
        *(undefined4 *)(lVar16 + 0x10) = local_64;
        *(undefined4 *)(lVar16 + 0x14) = uVar4;
        *(uint *)(lVar16 + 0x18) = uVar5 / 3;
        *(undefined4 *)(lVar16 + 0x1c) = uVar6;
        *(undefined1 *)(lVar16 + 0x20) = uVar2;
        *(undefined1 *)(lVar16 + 0x21) = 1;
        *(undefined1 *)(lVar16 + 0x22) = uVar14;
        *(int *)(plVar13 + 2) = (int)plVar13[2] + *(int *)(lVar15 + 8 + lVar11);
        if (lVar7 != 0) {
          LOCK();
          puVar1 = (uint *)(lVar7 + 8);
          uVar5 = *puVar1;
          *puVar1 = *puVar1 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            FUN_144a54812(lVar7);
            lVar10 = local_78;
            lVar12 = local_60;
            plVar13 = local_70;
          }
        }
        lVar11 = lVar11 + 0x1c;
      } while (lVar12 != lVar11);
    }
  }
  FUN_14737756a(plVar13 + 3,&local_58);
  FUN_14005bcf4(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d5242a FUN_147d5242a body=163 status=ok
// SIG undefined FUN_147d5242a(void)

void FUN_147d5242a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte bVar3;
  
  bVar3 = *(byte *)(param_1 + 9);
  if (((bVar3 & 1) != 0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
    bVar3 = *(byte *)(param_1 + 9);
  }
  if ((bVar3 & 2) != 0) {
    lVar2 = param_1[2];
    if (lVar2 != 0) {
      FUN_140296b76(lVar2 + 200);
      FUN_140296ab8(lVar2 + 0x88);
      FUN_140296d44(lVar2);
      FUN_1400020a8(lVar2);
    }
    puVar1 = (undefined8 *)param_1[3];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  FUN_1400ea36e(param_1 + 4,param_1 + 4);
  return;
}



// FUNCTION 147d524ce FUN_147d524ce body=97 status=ok
// SIG undefined FUN_147d524ce(void)

void FUN_147d524ce(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 9);
  if ((bVar1 & 1) != 0) {
    FUN_140414380(*param_1,0);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 2) == 0) {
    return;
  }
  FUN_140414380(param_1[3],0);
  FUN_140414380(param_1[2],0);
  FUN_140414380(param_1[2] + 0x88,0);
  FUN_140414380(param_1[2] + 200,0);
  return;
}



// FUNCTION 147d52530 FUN_147d52530 body=751 status=ok
// SIG undefined FUN_147d52530(void)

void FUN_147d52530(longlong *param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_40;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    FUN_1406d0862();
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_34 = *(uint *)(param_1 + 9) >> 1 & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    uVar3 = local_34;
    if (1 < local_34) {
      FUN_14572541c(param_2);
      uVar3 = local_34;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfd | (uVar3 != 0) * '\x02';
  if (uVar3 != 0) {
    if (param_1[2] == 0) {
      pvVar4 = (void *)FUN_14001cc68(0x108);
      memset(pvVar4,0,0x108);
      FUN_1415eaa34(pvVar4);
      *(undefined4 *)((longlong)pvVar4 + 0x90) = 0xffffffff;
      *(undefined2 *)((longlong)pvVar4 + 0x94) = 0x105;
      *(undefined1 *)((longlong)pvVar4 + 0x96) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0x98) = 0;
      *(undefined ***)((longlong)pvVar4 + 0x88) = &PTR_FUN_14aa50910;
      *(undefined8 *)((longlong)pvVar4 + 0xa0) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xa8) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xb0) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xb8) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0xc0) = 1;
      *(undefined4 *)((longlong)pvVar4 + 0xd0) = 0xffffffff;
      *(undefined2 *)((longlong)pvVar4 + 0xd4) = 0x105;
      *(undefined1 *)((longlong)pvVar4 + 0xd6) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xd8) = 0;
      *(undefined ***)((longlong)pvVar4 + 200) = &PTR_FUN_14aa61a50;
      *(undefined8 *)((longlong)pvVar4 + 0xe0) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xe8) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xf0) = 0;
      *(undefined8 *)((longlong)pvVar4 + 0xf8) = 0;
      *(undefined1 *)((longlong)pvVar4 + 0x100) = 1;
      param_1[2] = (longlong)pvVar4;
    }
    if (param_1[3] == 0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x40);
      *(undefined4 *)(puVar5 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar5 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar5 + 0xe) = 0;
      puVar5[2] = 0;
      *puVar5 = &PTR_FUN_14aa57ea0;
      puVar5[4] = 0;
      puVar5[5] = 0;
      puVar5[3] = &PTR_FUN_14a3d4750;
      *(undefined1 *)(puVar5 + 6) = 0;
      *(undefined4 *)(puVar5 + 7) = 0xffffffff;
      *(undefined2 *)((longlong)puVar5 + 0x3c) = 0;
      param_1[3] = (longlong)puVar5;
    }
    puVar5 = (undefined8 *)param_1[1];
    if (puVar5 == (undefined8 *)0x0) {
      puVar5 = (undefined8 *)FUN_14001cc68(0x30,0x10);
      puVar5[4] = 0;
      puVar5[5] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined4 *)((longlong)puVar5 + 0x2c) = 1;
      param_1[1] = (longlong)puVar5;
    }
    FUN_14041d590(param_2,puVar5);
  }
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    local_34 = *(byte *)(param_1 + 9) & 1;
    (**(code **)(*param_2 + 0x170))(param_2,&local_34,4);
    uVar3 = local_34;
    if (1 < local_34) {
      FUN_14572541c(param_2);
      uVar3 = local_34;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  bVar6 = *(byte *)(param_1 + 9) & 0xfe | uVar3 != 0;
  *(byte *)(param_1 + 9) = bVar6;
  if ((uVar3 != 0) && (*param_1 == 0)) {
    pvVar4 = (void *)FUN_14001cc68(0xb0);
    memset(pvVar4,0,0xb0);
    FUN_143268f94(pvVar4);
    *param_1 = (longlong)pvVar4;
    bVar6 = *(byte *)(param_1 + 9);
  }
  if ((bVar6 & 4) == 0) {
    local_40 = 0;
    local_48 = 1;
    FUN_140430222(param_1 + 4,param_2,param_3,0);
  }
  else {
    FUN_147d52820(param_1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d52820 FUN_147d52820 body=128 status=ok
// SIG undefined FUN_147d52820(void)

void FUN_147d52820(longlong *param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 9);
  if ((bVar1 & 2) != 0) {
    FUN_140563088(param_1[2] + 0x88,param_2,0);
    FUN_14056327c(param_1[2],param_2,0);
    FUN_140564d22(param_1[2] + 200,param_2,0);
    FUN_140397912(param_1[3],param_2,0);
    bVar1 = *(byte *)(param_1 + 9);
  }
  if ((bVar1 & 1) != 0) {
    FUN_140397b96(*param_1 + 0x18,param_2,0);
    return;
  }
  return;
}



// FUNCTION 147d528a0 FUN_147d528a0 body=70 status=ok
// SIG undefined FUN_147d528a0(void)

void FUN_147d528a0(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x18) == '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
    FUN_1403fa1cd(*plVar1,(int)plVar1[1]);
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  FUN_147d528e6(param_1);
  return;
}



// FUNCTION 147d528e6 FUN_147d528e6 body=61 status=ok
// SIG undefined FUN_147d528e6(void)

void FUN_147d528e6(longlong *param_1)

{
  FUN_147d5965e();
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1447ab16c(param_1,0);
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d52924 FUN_147d52924 body=108 status=ok
// SIG undefined FUN_147d52924(void)

void FUN_147d52924(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    uVar1 = 0;
    do {
      FUN_1437125d8(*(undefined8 *)(*param_1 + uVar1 * 8),param_2);
      if ((char)param_1[3] == '\0') {
        FUN_14083888c(*(longlong *)param_1[2] + lVar2,
                      *(undefined8 *)(*(longlong *)(*param_1 + uVar1 * 8) + 0x10),uVar1 & 0xffffffff
                      ,param_2);
      }
      uVar1 = uVar1 + 1;
      lVar2 = lVar2 + 0x450;
    } while ((longlong)uVar1 < (longlong)(int)param_1[1]);
  }
  return;
}



// FUNCTION 147d52990 FUN_147d52990 body=80 status=ok
// SIG undefined FUN_147d52990(void)

void FUN_147d52990(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < (int)param_1[1]) {
    lVar2 = 0;
    lVar1 = 0;
    do {
      FUN_147d524ce(*(undefined8 *)(*param_1 + lVar1 * 8));
      if ((char)param_1[3] == '\0') {
        FUN_1417f1988(*(longlong *)param_1[2] + lVar2);
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + 0x450;
    } while (lVar1 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 147d529e0 FUN_147d529e0 body=459 status=ok
// SIG undefined FUN_147d529e0(void)

void FUN_147d529e0(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_68 [42];
  byte local_3e [2];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140562eea(local_3e,param_2,0,&DAT_14c896044);
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    local_3c = (uint)*(byte *)(param_1 + 3);
    (**(code **)(*param_2 + 0x170))(param_2,&local_3c,4);
    if (1 < local_3c) {
      FUN_14572541c(param_2);
    }
    *(bool *)(param_1 + 3) = local_3c != 0;
  }
  else {
    *(bool *)(param_1 + 3) = *piVar2 != 0;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (((local_3e[0] & 2) == 0) &&
     (FUN_147d52bac(param_1,param_2,param_3), (*(byte *)(param_2 + 5) & 1) != 0)) {
    if ((char)param_1[3] == '\x01') {
      if (0 < (int)param_1[1]) {
        lVar4 = 0;
        do {
          puVar5 = *(undefined8 **)(*param_1 + lVar4 * 8);
          puVar5[1] = *(longlong *)(*param_4 + lVar4 * 8) + 0x10;
          puVar5[2] = *(longlong *)(*param_4 + lVar4 * 8) + 0x90;
          puVar5[3] = *(longlong *)(*param_4 + lVar4 * 8) + 0x198;
          if ((*(byte *)(puVar5 + 9) & 1) == 0) {
            *puVar5 = *(undefined8 *)(*(longlong *)(*param_4 + lVar4 * 8) + 0x50);
          }
          lVar4 = lVar4 + 1;
        } while (lVar4 < (int)param_1[1]);
      }
      param_1[2] = (longlong)(param_4 + 2);
    }
    else {
      puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
      *puVar5 = 0;
      puVar5[1] = 0;
      param_1[2] = (longlong)puVar5;
      FUN_1403fa188(puVar5,(int)param_1[1]);
      if (0 < (int)param_1[1]) {
        iVar6 = 0;
        do {
          plVar3 = (longlong *)param_1[2];
          iVar1 = (int)plVar3[1];
          *(uint *)(plVar3 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
            FUN_147d596a4(plVar3,iVar1);
          }
          FUN_143712b08((longlong)iVar1 * 0x450 + *plVar3,DAT_14c760db4);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)param_1[1]);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d52bac FUN_147d52bac body=534 status=ok
// SIG undefined FUN_147d52bac(void)

void FUN_147d52bac(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [36];
  int local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)(int)param_1[1] << 3,(longlong)*(int *)((longlong)param_1 + 0xc) << 3
            );
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    local_54 = (int)param_1[1];
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
      }
      else {
        FUN_14572512c(param_2,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_54) {
      lVar7 = 0;
      do {
        FUN_147d52530(*(undefined8 *)(*param_1 + lVar7 * 8),param_2,param_3);
        lVar7 = lVar7 + 1;
      } while (lVar7 < local_54);
    }
  }
  else {
    local_54 = 0;
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_54,4);
      }
      else {
        FUN_14572512c(param_2,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    FUN_147d5961e(param_1,local_54);
    if (0 < local_54) {
      iVar5 = 0;
      iVar6 = local_54;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar4[4] = 0;
        puVar4[5] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        *(undefined1 *)((longlong)puVar4 + 0x31) = 0xff;
        *(undefined4 *)((longlong)puVar4 + 0x2d) = 0xffffffff;
        puVar4[7] = DAT_14c845dbc;
        *(undefined4 *)(puVar4 + 8) = DAT_14c845dc4;
        *(undefined1 *)(puVar4 + 9) = 3;
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(param_1,iVar2);
          iVar6 = local_54;
        }
        *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar4;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar6);
      if (0 < iVar6) {
        lVar7 = 0;
        do {
          FUN_147d52530(*(undefined8 *)(*param_1 + lVar7 * 8),param_2,param_3);
          lVar7 = lVar7 + 1;
        } while (lVar7 < local_54);
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d52dc4 FUN_147d52dc4 body=195 status=ok
// SIG undefined FUN_147d52dc4(void)

void FUN_147d52dc4(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (-1 < param_2) {
    if (*(int *)((longlong)param_1 + 0xc) < param_2) {
      FUN_1447ab16c(param_1,param_2);
    }
    if (*(int *)((longlong)param_1 + 0x1c) < param_2) {
      FUN_1403fa314(param_1 + 2,param_2);
    }
    while ((int)param_1[1] < param_2) {
      uVar2 = FUN_14001cc68(0x298,0x10);
      FUN_143712352(uVar2);
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1456bd870(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
      iVar1 = (int)param_1[3];
      *(uint *)(param_1 + 3) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
        FUN_147d596a4(param_1 + 2,iVar1);
      }
      FUN_143712b08((longlong)iVar1 * 0x450 + param_1[2],DAT_14c760db4);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147d52e88 FUN_147d52e88 body=459 status=ok
// SIG undefined FUN_147d52e88(void)

void FUN_147d52e88(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  void *pvVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  cVar4 = FUN_147430ddd();
  uVar1 = *(uint *)(param_1 + 1);
  uVar10 = (ulonglong)uVar1;
  if (0 < (int)uVar1 && cVar4 == '\0') {
    uVar9 = 0;
    do {
      lVar3 = *(longlong *)(*param_1 + uVar9 * 8);
      pvVar6 = (void *)FUN_14001cc68(0xb0);
      memset(pvVar6,0,0xb0);
      FUN_143268f94(pvVar6);
      *(void **)(lVar3 + 0x50) = pvVar6;
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  *plVar7 = 0;
  plVar7[1] = 0;
  plVar7[2] = 0;
  plVar7[3] = 0;
  param_1[9] = (longlong)plVar7;
  *(undefined1 *)(plVar7 + 3) = 1;
  if (-1 < (int)uVar1) {
    if (uVar10 != 0) {
      FUN_1447ab16c(plVar7,uVar10);
      uVar9 = 0;
      do {
        lVar3 = *(longlong *)(*param_1 + uVar9 * 8);
        puVar8 = (undefined8 *)FUN_14001cc68(0x50,0x10);
        puVar8[4] = 0;
        puVar8[5] = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
        puVar8[3] = 0;
        puVar8[6] = 0;
        *(undefined1 *)((longlong)puVar8 + 0x31) = 0xff;
        *(undefined4 *)((longlong)puVar8 + 0x2d) = 0xffffffff;
        puVar8[7] = DAT_14c845dbc;
        *(undefined4 *)(puVar8 + 8) = DAT_14c845dc4;
        *(char *)(puVar8 + 9) = cVar4 + '\x02';
        if (cVar4 == '\0') {
          pvVar6 = *(void **)(lVar3 + 0x50);
          bVar5 = 0;
        }
        else {
          pvVar6 = (void *)FUN_14001cc68(0xb0);
          memset(pvVar6,0,0xb0);
          FUN_143268f94(pvVar6);
          bVar5 = *(byte *)(puVar8 + 9);
        }
        *puVar8 = pvVar6;
        puVar8[1] = lVar3 + 0x10;
        puVar8[2] = lVar3 + 0x90;
        puVar8[3] = lVar3 + 0x198;
        *(byte *)(puVar8 + 9) = bVar5 & 0xfd;
        iVar2 = (int)plVar7[1];
        *(uint *)(plVar7 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)plVar7 + 0xc) < iVar2 + 1U) {
          FUN_1456bd870(plVar7,iVar2);
        }
        *(undefined8 **)(*plVar7 + (longlong)iVar2 * 8) = puVar8;
        uVar9 = uVar9 + 1;
      } while (uVar10 != uVar9);
      plVar7 = (longlong *)param_1[9];
    }
    plVar7[2] = (longlong)(param_1 + 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar10);
}



// FUNCTION 147d53054 FUN_147d53054 body=18 status=ok
// SIG undefined FUN_147d53054(void)

undefined8 * FUN_147d53054(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 147d53066 FUN_147d53066 body=94 status=ok
// SIG undefined FUN_147d53066(void)

longlong * FUN_147d53066(longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
    param_2 = *param_1;
  }
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  if (param_3 == 0 && param_2 != 0) {
    param_1[1] = *(longlong *)(param_2 + 0x18);
  }
  return param_1;
}



// FUNCTION 147d530c4 FUN_147d530c4 body=66 status=ok
// SIG undefined FUN_147d530c4(void)

void FUN_147d530c4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(param_1 + 0xe0);
  if (plVar2 != param_2) {
    lVar1 = *plVar2;
    *plVar2 = *param_2;
    *param_2 = 0;
    if (lVar1 != 0) {
      FUN_14029672a(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 147d5310c FUN_147d5310c body=2671 status=ok
// SIG undefined FUN_147d5310c(void)

void FUN_147d5310c(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_388 [32];
  longlong local_368;
  ulonglong local_358;
  undefined4 local_350;
  int local_34c;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined8 local_338;
  longlong local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 uStack_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  void *local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  int local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  void *local_88;
  ulonglong uStack_80;
  undefined8 local_78;
  void *local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  iVar6 = 0;
  local_350 = 0;
  uVar8 = 0;
  iVar7 = 0;
  local_34c = 0;
  if (puVar1 != (undefined8 *)0x0) {
    iVar7 = 0;
    if (0 < *(int *)(puVar1 + 1)) {
      lVar5 = *(longlong *)*puVar1;
      iVar7 = *(int *)(lVar5 + 0x1d0);
      if (iVar7 < 0) {
        iVar3 = *(int *)(lVar5 + 0x1c0);
        if (*(char *)(lVar5 + 0x1d4) == '\x01') {
          iVar7 = iVar3 + 3;
          if (-1 < iVar3) {
            iVar7 = iVar3;
          }
          iVar7 = iVar7 >> 2;
        }
        else {
          iVar7 = iVar3 / 2;
        }
      }
      iVar7 = iVar7 / 3;
      local_350 = *(undefined4 *)(lVar5 + 0x108);
      uVar8 = *(undefined4 *)(lVar5 + 0x10c);
      local_34c = *(int *)(puVar1 + 1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x188);
  if (lVar5 != 0) {
    iVar6 = *(int *)(lVar5 + 0x60) + *(int *)(lVar5 + 0x40) + *(int *)(lVar5 + 0x50) +
            *(int *)(lVar5 + 0x70) + *(int *)(lVar5 + 0x80) + *(int *)(lVar5 + 0x90) +
            *(int *)(lVar5 + 0xa0);
  }
  if (puVar1 == (undefined8 *)0x0) {
    dVar12 = 0.0;
    dVar11 = 0.0;
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    uVar9 = (undefined4)puVar1[0xd];
    uVar10 = (undefined4)((ulonglong)puVar1[0xd] >> 0x20);
    dVar11 = (double)puVar1[0xe];
    dVar12 = (double)puVar1[0xf];
  }
  local_368 = (longlong)ROUND(dVar12 + dVar12 + dVar12 + dVar12 + 0.5) >> 1;
  dVar12 = (double)CONCAT44(uVar10,uVar9) + (double)CONCAT44(uVar10,uVar9);
  FUN_140002266(&local_70,L"%lldx%lldx%lld",(longlong)ROUND(dVar12 + dVar12 + 0.5) >> 1,
                (longlong)ROUND(dVar11 + dVar11 + dVar11 + dVar11 + 0.5) >> 1);
  local_78 = 0;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    local_88 = (void *)0x0;
    uStack_80 = 0;
  }
  else {
    FUN_1406900ec(*(longlong *)(param_1 + 0x188) + 0x148,&local_78);
    local_88 = (void *)0x0;
    uStack_80 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      FUN_144b0760a(*(longlong *)(param_1 + 0x188),&local_b8);
      uVar4 = FUN_146ef13e2(local_b8 & 0xff);
      FUN_14020fad6(&local_88,uVar4);
    }
  }
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  if (puVar1 == (undefined8 *)0x0) {
    uVar10 = 0;
    uVar9 = 0;
  }
  else {
    lVar5 = puVar1[8];
    uVar9 = 0;
    uVar10 = 0;
    if ((0 < *(int *)(lVar5 + 0x70)) && (0 < *(int *)(lVar5 + 8))) {
      uVar9 = *(undefined4 *)(lVar5 + 0x98);
      uVar10 = *(undefined4 *)(lVar5 + 0x9c);
    }
    if ((0 < *(int *)(puVar1 + 1)) &&
       (lVar5 = *(longlong *)(*(longlong *)*puVar1 + 0x40), lVar5 != 0)) {
      iVar3 = FUN_147d53b7c(lVar5);
      local_358 = (ulonglong)(uint)(iVar3 + *(int *)(lVar5 + 0xe8));
      goto LAB_147d53355;
    }
  }
  local_358 = 0;
LAB_147d53355:
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,uVar9);
  FUN_1446ddc76(&local_c0,"NaniteTriangles",1);
  local_a8 = local_c0;
  local_a0 = (undefined4)local_b8;
  uStack_9c = local_b8._4_4_;
  uStack_98 = (undefined4)uStack_b0;
  uStack_94 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_90 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,uVar10);
  FUN_1446ddc76(&local_e8,"NaniteVertices",1);
  local_e0 = local_e8;
  local_d8 = (undefined4)local_b8;
  uStack_d4 = local_b8._4_4_;
  uStack_d0 = (undefined4)uStack_b0;
  uStack_cc = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,iVar7);
  FUN_1446ddc76(&local_110,"Triangles",1);
  local_108 = local_110;
  local_100 = (undefined4)local_b8;
  uStack_fc = local_b8._4_4_;
  uStack_f8 = (undefined4)uStack_b0;
  uStack_f4 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_f0 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,uVar8);
  FUN_1446ddc76(&local_138,"Vertices",1);
  local_130 = local_138;
  local_128 = (undefined4)local_b8;
  uStack_124 = local_b8._4_4_;
  uStack_120 = (undefined4)uStack_b0;
  uStack_11c = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_118 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,local_350);
  FUN_1446ddc76(&local_160,"UVChannels",1);
  local_158 = local_160;
  local_150 = (undefined4)local_b8;
  uStack_14c = local_b8._4_4_;
  uStack_148 = (undefined4)uStack_b0;
  uStack_144 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_140 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,*(undefined4 *)(param_1 + 0x160));
  FUN_1446ddc76(&local_188,"Materials",1);
  local_180 = local_188;
  local_178 = (undefined4)local_b8;
  uStack_174 = local_b8._4_4_;
  uStack_170 = (undefined4)uStack_b0;
  uStack_16c = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_168 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_1b0,"ApproxSize",1);
  pvVar2 = local_70;
  local_1a8 = local_1b0;
  local_1a0 = (void *)0x0;
  local_198 = local_68;
  if ((longlong)local_68 == 0) {
    local_194 = 0;
  }
  else {
    FUN_1446dd670(&local_1a0,local_68,0);
    memcpy(local_1a0,pvVar2,(longlong)local_68 * 2);
  }
  local_190 = 3;
  FUN_1407c67d8(param_2);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,iVar6);
  FUN_1446ddc76(&local_1d8,"CollisionPrims",1);
  local_1d0 = local_1d8;
  local_1c8 = (undefined4)local_b8;
  uStack_1c4 = local_b8._4_4_;
  uStack_1c0 = (undefined4)uStack_b0;
  uStack_1bc = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_1b8 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,local_34c);
  FUN_1446ddc76(&local_200,&DAT_14aa8fb77,1);
  local_1f8 = local_200;
  local_1f0 = (undefined4)local_b8;
  uStack_1ec = local_b8._4_4_;
  uStack_1e8 = (undefined4)uStack_b0;
  uStack_1e4 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_1e0 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1468c78a0(param_1 + 0x150,&local_b8);
  FUN_1446ddc76(&local_228,"MinLOD",1);
  local_220 = local_228;
  local_218 = (undefined4)local_b8;
  uStack_214 = local_b8._4_4_;
  uStack_210 = (undefined4)uStack_b0;
  uStack_20c = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_208 = 1;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_147c473ac(param_1 + 0xe8,&local_b8);
  FUN_1446ddc76(&local_250,"QualityLevelMinLOD",1);
  local_248 = local_250;
  local_240 = (undefined4)local_b8;
  uStack_23c = local_b8._4_4_;
  uStack_238 = (undefined4)uStack_b0;
  uStack_234 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_230 = 1;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,0);
  FUN_1446ddc76(&local_278,"SectionsWithCollision",1);
  local_270 = local_278;
  local_268 = (undefined4)local_b8;
  uStack_264 = local_b8._4_4_;
  uStack_260 = (undefined4)uStack_b0;
  uStack_25c = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_258 = 2;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(&local_78,&local_b8);
  FUN_1446ddc76(&local_2a0,"DefaultCollision",1);
  local_298 = local_2a0;
  local_290 = (undefined4)local_b8;
  uStack_28c = local_b8._4_4_;
  uStack_288 = (undefined4)uStack_b0;
  uStack_284 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_280 = 1;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1446ddc76(&local_2c8,"CollisionComplexity",1);
  pvVar2 = local_88;
  local_2c0 = local_2c8;
  local_2b8 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_80;
  local_2b0 = (int)uStack_80;
  if (lVar5 == 0) {
    local_2ac = 0;
  }
  else {
    FUN_1446dd670(&local_2b8,uStack_80 & 0xffffffff,0);
    memcpy(local_2b8,pvVar2,lVar5 * 2);
  }
  local_2a8 = 1;
  FUN_1407c67d8(param_2);
  local_b8 = 0;
  uStack_b0 = 0;
  FUN_144a83b10(&local_b8,local_358);
  FUN_1446ddc76(&local_2f0,"DistanceFieldSize",1);
  local_2e8 = local_2f0;
  local_2e0 = (undefined4)local_b8;
  uStack_2dc = local_b8._4_4_;
  uStack_2d8 = (undefined4)uStack_b0;
  uStack_2d4 = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_2d0 = 0x800000002;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_b8,L"%llu",0);
  FUN_1446ddc76(&local_318,"EstTotalCompressedSize",1);
  local_310 = local_318;
  local_308 = (undefined4)local_b8;
  uStack_304 = local_b8._4_4_;
  uStack_300 = (undefined4)uStack_b0;
  uStack_2fc = uStack_b0._4_4_;
  local_b8 = 0;
  uStack_b0 = 0;
  local_2f8 = 0x800000002;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_140002266(&local_b8,L"%llu",0);
  FUN_1446ddc76(&local_340,"EstNaniteCompressedSize",1);
  local_338 = local_340;
  local_330 = local_b8;
  uStack_328 = uStack_b0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_320 = 0x800000002;
  FUN_1407c67d8(param_2);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1427dc336(local_348,param_2);
  switchD_143c3d4dc::caseD_3d(param_1,local_348);
  if (local_88 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d53b7c FUN_147d53b7c body=111 status=ok
// SIG undefined FUN_147d53b7c(void)

undefined8 FUN_147d53b7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_138 [40];
  undefined1 local_110 [248];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1468200e0(local_110);
  FUN_1403474ae(param_1,local_110);
  uVar1 = FUN_140209a84(local_110);
  FUN_1400fd2aa(local_110);
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d53bec FUN_147d53bec body=577 status=ok
// SIG undefined FUN_147d53bec(void)

void FUN_147d53bec(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  lVar4 = *(longlong *)(param_1 + 0xe0);
  dVar5 = 0.0;
  dVar6 = 0.0;
  dVar7 = 0.0;
  dVar9 = 0.0;
  dVar10 = 0.0;
  dVar11 = 0.0;
  uVar12 = 0;
  uVar13 = 0;
  if (lVar4 != 0) {
    dVar5 = *(double *)(lVar4 + 0x50);
    dVar6 = *(double *)(lVar4 + 0x58);
    dVar7 = *(double *)(lVar4 + 0x60);
    dVar9 = *(double *)(lVar4 + 0x68);
    dVar10 = *(double *)(lVar4 + 0x70);
    dVar11 = *(double *)(lVar4 + 0x78);
    uVar12 = (undefined4)*(undefined8 *)(lVar4 + 0x80);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x80) >> 0x20);
  }
  dVar8 = (double)CONCAT44(uVar13,uVar12);
  dVar1 = *(double *)(param_1 + 0x1e8);
  dVar2 = *(double *)(param_1 + 0x1f0);
  dVar3 = *(double *)(param_1 + 0x1f8);
  if (((((dVar1 != 0.0) || (NAN(dVar1))) || (dVar2 != 0.0)) ||
      ((((NAN(dVar2) || (dVar3 != 0.0)) ||
        ((NAN(dVar3) ||
         ((*(double *)(param_1 + 0x1d0) != 0.0 || (NAN(*(double *)(param_1 + 0x1d0)))))))) ||
       (*(double *)(param_1 + 0x1d8) != 0.0)))) ||
     (((NAN(*(double *)(param_1 + 0x1d8)) || (*(double *)(param_1 + 0x1e0) != 0.0)) ||
      (NAN(*(double *)(param_1 + 0x1e0)))))) {
    dVar1 = (dVar5 - dVar9) - dVar1;
    dVar2 = (dVar6 - dVar10) - dVar2;
    dVar9 = dVar5 + dVar9 + *(double *)(param_1 + 0x1d0);
    dVar10 = dVar6 + dVar10 + *(double *)(param_1 + 0x1d8);
    dVar8 = dVar7 + dVar11 + *(double *)(param_1 + 0x1e0);
    dVar3 = (dVar7 - dVar11) - dVar3;
    dVar7 = (dVar3 + dVar8) * 0.5;
    dVar6 = (dVar2 + dVar10) * 0.5;
    dVar5 = (dVar1 + dVar9) * 0.5;
    dVar11 = (dVar8 - dVar3) * 0.5;
    dVar10 = (dVar10 - dVar2) * 0.5;
    dVar9 = (dVar9 - dVar1) * 0.5;
    dVar8 = SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar10 * dVar10);
  }
  *(double *)(param_1 + 0x200) = dVar5;
  *(double *)(param_1 + 0x208) = dVar6;
  *(double *)(param_1 + 0x210) = dVar7;
  *(double *)(param_1 + 0x218) = dVar9;
  *(double *)(param_1 + 0x220) = dVar10;
  *(double *)(param_1 + 0x228) = dVar11;
  *(double *)(param_1 + 0x230) = dVar8;
  return;
}



// FUNCTION 147d53e2e FUN_147d53e2e body=180 status=ok
// SIG undefined FUN_147d53e2e(void)

void FUN_147d53e2e(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x188) == 0) {
    FUN_144a4a122(&local_21);
    lVar1 = FUN_14099beef(param_1);
    FUN_144a49ece(&local_21);
    FUN_140078ec2(lVar1 + 0x148,DAT_14cad0ef8);
    *(byte *)(lVar1 + 0xb8) =
         *(byte *)(lVar1 + 0xb8) & 0x7f | (*(byte *)(param_1 + 0x194) & 0x10) << 3;
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x188) = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d53ee4 FUN_147d53ee4 body=4235 status=ok
// SIG undefined FUN_147d53ee4(void)

void FUN_147d53ee4(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *_Dst;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  longlong lVar16;
  uint *puVar17;
  longlong lVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  uint *local_178;
  ulonglong local_170;
  longlong local_168;
  longlong local_160;
  undefined4 local_154;
  longlong local_150;
  int *local_148;
  longlong local_140;
  void *local_138;
  int local_130;
  undefined4 local_12c;
  void *local_128;
  ulonglong uStack_120;
  longlong local_118;
  undefined2 local_10a;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8 [3];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(param_2 + 0x58);
  }
  lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 0x80);
  if (lVar9 == 0) {
    lVar9 = *(longlong *)(param_2 + 0x70);
  }
  if (*(int *)(lVar12 + 0x18) != 0) {
    if (*(uint *)(lVar9 + 0x18) != *(uint *)(lVar9 + 0x78)) {
      local_160 = CONCAT44(local_160._4_4_,*(uint *)(lVar9 + 0x78));
      local_b8[0] = 0;
      local_b8[1] = 0;
      local_178 = (uint *)CONCAT44(local_178._4_4_,*(int *)(lVar12 + 0x18));
      local_170 = (ulonglong)*(uint *)(lVar9 + 0x18);
      local_140 = param_1;
      FUN_147d54f70();
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x50) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x50);
      }
      FUN_146fa21b4(lVar12 + 0x20,&local_c0,DAT_14c99c0d0);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      FUN_146fa2268(lVar12 + 0x20,&local_c8,DAT_14c99c628);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      FUN_146fa2268(lVar12 + 0x20,&local_d0,DAT_14c99c630);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      FUN_146fa231c(lVar12 + 0x20,&local_d8,DAT_14c99c638);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      FUN_146fa1e6a(lVar12 + 0x20,&local_e0,DAT_14c99c640);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      uVar11 = DAT_14c99c620;
      FUN_146fa23d0(lVar12 + 0x20,&local_e8,DAT_14c99c620);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x58);
      }
      local_a0 = (uint *)0x100000000;
      local_90._0_4_ = 0xffffffff;
      local_90._4_4_ = 0;
      local_88 = 0;
      local_98 = lVar12;
      if (*(int *)(lVar12 + 0x18) != 0) {
        FUN_1449c0562(&local_a0);
      }
      local_f8._0_4_ = (uint)local_90;
      local_f8._4_4_ = local_90._4_4_;
      local_f0 = local_88;
      local_ec = local_84;
      local_108 = local_a0;
      local_100 = local_98;
      local_90._4_4_ = *(uint *)(lVar12 + 0x18);
      local_a0 = (uint *)CONCAT44(1 << ((byte)local_90._4_4_ & 0x1f),(int)local_90._4_4_ >> 5);
      local_90._0_4_ = -1 << ((byte)local_90._4_4_ & 0x1f);
      local_88 = local_90._4_4_ & 0xffffffe0;
      local_98 = lVar12;
      if (*(uint *)(lVar12 + 0x18) != local_90._4_4_) {
        FUN_1449c0562(&local_a0);
      }
      uVar13 = local_90._4_4_;
      lVar12 = local_98;
      uVar11 = uVar11 & 0xffffffffffffff00;
      if (local_100 != local_98 || local_f8._4_4_ != local_90._4_4_) {
        do {
          uVar4 = local_f8._4_4_;
          if (*(int *)(local_100 + 0x18) <= (int)local_f8._4_4_) {
            uVar4 = 0xffffffff;
          }
          lVar9 = (longlong)(int)uVar4 * 0x74;
          plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x30);
          plVar7 = (longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
          if (plVar6 != (longlong *)0x0) {
            plVar7 = plVar6;
          }
          plVar6 = (longlong *)(local_c0 + 0x18);
          if (*(longlong **)(local_c0 + 0x30) != (longlong *)0x0) {
            plVar6 = *(longlong **)(local_c0 + 0x30);
          }
          lVar10 = *plVar6;
          lVar18 = (longlong)
                   ((int)plVar6[2] * *(int *)(*plVar7 + (longlong)(int)((int)plVar7[2] * uVar4) * 4)
                   );
          *(undefined4 *)(local_b8[0] + 8 + lVar9) = *(undefined4 *)(lVar10 + 8 + lVar18 * 0xc);
          *(undefined8 *)(local_b8[0] + lVar9) = *(undefined8 *)(lVar10 + lVar18 * 0xc);
          plVar6 = *(longlong **)(local_d0 + 0x30);
          if (*(longlong **)(local_d0 + 0x30) == (longlong *)0x0) {
            plVar6 = (longlong *)(local_d0 + 0x18);
          }
          lVar10 = *plVar6;
          lVar18 = (longlong)(int)((int)plVar6[2] * uVar4);
          *(undefined4 *)(local_b8[0] + 0x14 + lVar9) = *(undefined4 *)(lVar10 + 8 + lVar18 * 0xc);
          *(undefined8 *)(local_b8[0] + 0xc + lVar9) = *(undefined8 *)(lVar10 + lVar18 * 0xc);
          plVar6 = *(longlong **)(local_d0 + 0x30);
          if (*(longlong **)(local_d0 + 0x30) == (longlong *)0x0) {
            plVar6 = (longlong *)(local_d0 + 0x18);
          }
          lVar10 = *plVar6;
          lVar18 = (longlong)(int)((int)plVar6[2] * uVar4);
          plVar6 = (longlong *)(local_c8 + 0x18);
          if (*(longlong **)(local_c8 + 0x30) != (longlong *)0x0) {
            plVar6 = *(longlong **)(local_c8 + 0x30);
          }
          lVar14 = *plVar6;
          lVar16 = (longlong)(int)(uVar4 * (int)plVar6[2]);
          fVar23 = *(float *)(lVar10 + lVar18 * 0xc);
          fVar25 = *(float *)(lVar10 + 4 + lVar18 * 0xc);
          fVar29 = *(float *)(lVar14 + lVar16 * 0xc);
          fVar24 = *(float *)(lVar14 + 4 + lVar16 * 0xc);
          fVar27 = fVar29 * fVar25 - fVar23 * fVar24;
          fVar26 = *(float *)(lVar14 + 8 + lVar16 * 0xc);
          fVar28 = *(float *)(lVar10 + 8 + lVar18 * 0xc);
          fVar23 = fVar23 * fVar26 - fVar29 * fVar28;
          fVar25 = fVar24 * fVar28 - fVar25 * fVar26;
          fVar29 = fVar27 * fVar27 + fVar25 * fVar25 + fVar23 * fVar23;
          if (((fVar29 != 1.0) || (fVar24 = fVar23, fVar26 = fVar25, fVar28 = fVar27, NAN(fVar29)))
             && (fVar24 = DAT_14c846330._4_4_, fVar26 = (float)DAT_14c846330, fVar28 = DAT_14c846338
                , 1e-08 <= fVar29)) {
            fVar29 = 1.0 / SQRT(fVar29);
            fVar24 = fVar23 * fVar29;
            fVar26 = fVar25 * fVar29;
            fVar28 = fVar27 * fVar29;
          }
          lVar9 = local_b8[0] + lVar9;
          plVar6 = (longlong *)(local_d8 + 0x18);
          if (*(longlong **)(local_d8 + 0x30) != (longlong *)0x0) {
            plVar6 = *(longlong **)(local_d8 + 0x30);
          }
          fVar23 = *(float *)(*plVar6 + (longlong)(int)((int)plVar6[2] * uVar4) * 4);
          *(float *)(lVar9 + 0x18) = fVar26 * fVar23;
          *(float *)(lVar9 + 0x1c) = fVar24 * fVar23;
          *(float *)(lVar9 + 0x20) = fVar28 * fVar23;
          plVar6 = (longlong *)(local_c8 + 0x18);
          if (*(longlong **)(local_c8 + 0x30) != (longlong *)0x0) {
            plVar6 = *(longlong **)(local_c8 + 0x30);
          }
          lVar10 = *plVar6;
          lVar18 = (longlong)(int)((int)plVar6[2] * uVar4);
          *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)(lVar10 + 8 + lVar18 * 0xc);
          *(undefined8 *)(lVar9 + 0x24) = *(undefined8 *)(lVar10 + lVar18 * 0xc);
          if (0 < *(int *)(local_e8 + 0x38)) {
            lVar10 = 2;
            lVar18 = 0;
            do {
              lVar14 = local_e8 + 0x18;
              if (*(longlong *)(local_e8 + 0x30) != 0) {
                lVar14 = *(longlong *)(local_e8 + 0x30);
              }
              *(undefined8 *)(lVar9 + 0x30 + lVar18 * 8) =
                   *(undefined8 *)
                    (*(longlong *)(lVar14 + -0x10 + lVar10 * 8) +
                    (longlong)(int)(*(int *)(lVar14 + lVar10 * 8) * uVar4) * 8);
              lVar18 = lVar18 + 1;
              lVar10 = lVar10 + 3;
            } while (lVar18 < *(int *)(local_e8 + 0x38));
          }
          local_f8._0_4_ = (uint)local_f8 & ~local_108._4_4_;
          lVar9 = local_e8;
          FUN_1449c0562(&local_108);
          bVar15 = local_100 != lVar12 || local_f8._4_4_ != uVar13;
          uVar11 = CONCAT71((int7)((ulonglong)lVar9 >> 8),bVar15);
        } while (bVar15);
      }
      if (local_e0 == 0) {
        iVar5 = 0;
      }
      else {
        lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x58) + 0x80);
        if (lVar12 == 0) {
          lVar12 = *(longlong *)(param_2 + 0x58);
        }
        local_a0 = (uint *)0x100000000;
        local_90._0_4_ = 0xffffffff;
        local_90._4_4_ = 0;
        local_88 = 0;
        local_98 = lVar12;
        if (*(int *)(lVar12 + 0x18) != 0) {
          FUN_1449c0562(&local_a0);
        }
        local_f8._0_4_ = (uint)local_90;
        local_f8._4_4_ = local_90._4_4_;
        local_f0 = local_88;
        local_ec = local_84;
        local_108 = local_a0;
        local_100 = local_98;
        local_90._4_4_ = *(uint *)(lVar12 + 0x18);
        local_a0 = (uint *)CONCAT44(1 << ((byte)local_90._4_4_ & 0x1f),(int)local_90._4_4_ >> 5);
        local_90._0_4_ = -1 << ((byte)local_90._4_4_ & 0x1f);
        local_88 = local_90._4_4_ & 0xffffffe0;
        local_98 = lVar12;
        if (*(uint *)(lVar12 + 0x18) != local_90._4_4_) {
          FUN_1449c0562(&local_a0);
        }
        uVar13 = local_90._4_4_;
        lVar12 = local_98;
        uVar11 = uVar11 & 0xffffffffffffff00;
        iVar5 = 0;
        local_168 = param_3;
        if (local_100 != local_98 || local_f8._4_4_ != local_90._4_4_) {
          do {
            uVar4 = local_f8._4_4_;
            if (*(int *)(local_100 + 0x18) <= (int)local_f8._4_4_) {
              uVar4 = 0xffffffff;
            }
            lVar9 = (longlong)(int)uVar4 * 0x74 + local_b8[0];
            plVar6 = (longlong *)(local_e0 + 0x18);
            if (*(longlong **)(local_e0 + 0x30) != (longlong *)0x0) {
              plVar6 = *(longlong **)(local_e0 + 0x30);
            }
            FUN_1414dd342(&local_a0,(longlong)(int)(uVar4 * (int)plVar6[2]) * 0x10 + *plVar6);
            if (((float)local_a0 != 1.0) || (NAN((float)local_a0))) {
LAB_147d546e4:
              FUN_1411ab38a(&local_a0,&local_128);
              *(undefined4 *)(lVar9 + 0x70) = local_128._0_4_;
              iVar5 = 1;
            }
            else {
              if ((local_a0._4_4_ != 1.0) || (NAN(local_a0._4_4_))) goto LAB_147d546e4;
              if (((float)local_98 != 1.0) || (NAN((float)local_98))) goto LAB_147d546e4;
              if ((local_98._4_4_ != 1.0) || (NAN(local_98._4_4_))) goto LAB_147d546e4;
              *(undefined4 *)(lVar9 + 0x70) = 0xffffffff;
            }
            local_f8._0_4_ = (uint)local_f8 & ~local_108._4_4_;
            FUN_1449c0562(&local_108);
            bVar15 = local_100 != lVar12 || local_f8._4_4_ != uVar13;
            uVar11 = CONCAT71((int7)(uVar11 >> 8),bVar15);
            param_3 = local_168;
          } while (bVar15);
        }
      }
      uVar13 = (int)local_170 - (int)local_160;
      FUN_147cab1bc(param_3 + 0x118,local_b8,CONCAT71((int7)(uVar11 >> 8),1));
      local_10a = 1;
      FUN_147cdb9b8(param_3 + 0x90,local_b8,*(undefined4 *)(local_e8 + 0x38));
      *(uint *)(param_3 + 0x5c) = (*(uint *)(param_3 + 0x5c) & 0xfffffff7) + iVar5 * 8;
      if (iVar5 == 0) {
        local_188 = 1;
        FUN_147cc774a(param_3 + 0x158,&DAT_149e1e2cc,(ulonglong)local_178 & 0xffffffff,0);
      }
      else {
        FUN_147cc77bc(param_3 + 0x158,local_b8,1);
      }
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x80);
      }
      FUN_146fa2484(lVar12 + 0x20,&local_118,DAT_14c99c688);
      local_128 = (void *)0x0;
      uStack_120 = 0;
      FUN_1402d2c96(&local_128,uVar13 * 3,1);
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x80) + 0x80);
      if (lVar12 == 0) {
        lVar12 = *(longlong *)(param_2 + 0x80);
      }
      local_a0 = (uint *)&DAT_100000000;
      local_90 = 0xffffffff;
      local_88 = 0;
      local_98 = lVar12;
      if (*(int *)(lVar12 + 0x18) != 0) {
        FUN_1449c0562(&local_a0);
      }
      local_f8 = local_90;
      local_f0 = local_88;
      local_ec = local_84;
      local_108 = local_a0;
      local_100 = local_98;
      uVar4 = *(uint *)(lVar12 + 0x18);
      uVar21 = 1;
      local_a0 = (uint *)CONCAT44(1 << ((byte)uVar4 & 0x1f),(int)uVar4 >> 5);
      local_90 = CONCAT44(uVar4,-1 << ((byte)uVar4 & 0x1f));
      local_88 = uVar4 & 0xffffffe0;
      local_98 = lVar12;
      if (*(uint *)(lVar12 + 0x18) != uVar4) {
        FUN_1449c0562(&local_a0);
        uVar4 = local_90._4_4_;
      }
      lVar12 = local_98;
      local_170 = (ulonglong)uVar13;
      if (local_100 != local_98 || local_f8._4_4_ != uVar4) {
        lVar9 = param_3 + 0x10;
        local_160 = param_2 + 0x288;
        uVar21 = 1;
        lVar10 = 0;
        local_168 = param_2 + 0x250;
        do {
          uVar13 = local_f8._4_4_;
          if (*(int *)(local_100 + 0x18) <= (int)local_f8._4_4_) {
            uVar13 = 0xffffffff;
          }
          FUN_146f92b68(local_160,&local_a0,uVar13,0);
          if ((float)local_98 != 0.0) {
            local_154 = uVar21;
            local_150 = lVar9;
            local_148 = (int *)FUN_14041d718(lVar9);
            local_148[1] = (int)lVar10;
            uVar22 = 0;
            FUN_146f716d6(local_168,&local_a0,uVar13);
            if ((longlong)(int)(float)local_98 == 0) {
              uVar8 = 0xffffffff;
              iVar5 = 0;
            }
            else {
              local_178 = local_a0 + (int)(float)local_98;
              uVar8 = 0xffffffff;
              iVar5 = 0;
              uVar22 = 0;
              puVar17 = local_a0;
              do {
                uVar1 = *puVar17;
                plVar6 = *(longlong **)(*(longlong *)(param_2 + 0xa0) + 0x30);
                plVar7 = (longlong *)(*(longlong *)(param_2 + 0xa0) + 0x18);
                if (plVar6 != (longlong *)0x0) {
                  plVar7 = plVar6;
                }
                if ((longlong)*(int *)(param_2 + 0xa8) == 0) {
                  lVar14 = (longlong)((int)uVar1 >> 8) * 0xc18;
                  lVar9 = *plVar7 + lVar14;
                  lVar18 = (longlong)*(int *)(lVar9 + 0x410 + (ulonglong)(uVar1 & 0xff) * 4);
                  if (lVar18 != 0) {
                    puVar19 = (uint *)((longlong)
                                       *(int *)(lVar9 + 0x10 + (ulonglong)(uVar1 & 0xff) * 4) * 4 +
                                      *(longlong *)(*plVar7 + lVar14));
                    puVar20 = puVar19 + lVar18;
                    goto LAB_147d54a39;
                  }
                }
                else {
                  puVar19 = (uint *)((longlong)(int)(uVar1 * (int)plVar7[2]) * 4 + *plVar7);
                  puVar20 = puVar19 + *(int *)(param_2 + 0xa8);
LAB_147d54a39:
                  lVar10 = (longlong)(int)lVar10;
                  do {
                    uVar1 = *puVar19;
                    if (uVar1 <= uVar8) {
                      uVar8 = uVar1;
                    }
                    if (uVar22 < uVar1) {
                      uVar22 = uVar1;
                    }
                    *(uint *)((longlong)local_128 + lVar10 * 4) = uVar1;
                    lVar10 = lVar10 + 1;
                    puVar19 = puVar19 + 1;
                  } while (puVar19 != puVar20);
                }
                iVar5 = iVar5 + 1;
                puVar17 = puVar17 + 1;
              } while (puVar17 != local_178);
            }
            local_148[2] = iVar5;
            local_148[3] = uVar8;
            local_148[4] = uVar22;
            if ((longlong)*(int *)(local_140 + 0x160) != 0) {
              plVar6 = (longlong *)(local_118 + 0x18);
              if (*(longlong **)(local_118 + 0x30) != (longlong *)0x0) {
                plVar6 = *(longlong **)(local_118 + 0x30);
              }
              uVar11 = 0;
              do {
                if (*(longlong *)(*(longlong *)(local_140 + 0x158) + 8 + uVar11) ==
                    *(longlong *)(*plVar6 + (longlong)(int)(uVar13 * (int)plVar6[2]) * 8)) {
                  iVar5 = (int)(uVar11 >> 4) * -0x55555555;
                  goto LAB_147d54adb;
                }
                uVar11 = uVar11 + 0x30;
              } while ((longlong)*(int *)(local_140 + 0x160) * 0x30 != uVar11);
            }
            iVar5 = -1;
LAB_147d54adb:
            *local_148 = iVar5;
            *(undefined2 *)(local_148 + 5) = 0x101;
            lVar9 = local_150;
            uVar21 = local_154;
            if (0xffff < uVar22) {
              uVar21 = 2;
            }
          }
          local_f8 = CONCAT44(local_f8._4_4_,(uint)local_f8 & ~local_108._4_4_);
          FUN_1449c0562(&local_108);
        } while (local_100 != lVar12 || local_f8._4_4_ != uVar4);
      }
      FUN_140905aa4(param_3 + 0x198,&local_128,uVar21);
      pvVar3 = local_128;
      local_a0 = (void *)0x0;
      lVar12 = (longlong)(int)uStack_120;
      local_98 = CONCAT44(local_98._4_4_,(int)uStack_120);
      if (lVar12 == 0) {
        local_98 = uStack_120 & 0xffffffff;
      }
      else {
        FUN_1447bda9e(&local_a0,uStack_120 & 0xffffffff,0);
        memcpy(local_a0,pvVar3,lVar12 << 2);
        pvVar3 = local_a0;
        lVar12 = (longlong)(int)(float)local_98;
        if (lVar12 != 0) {
          lVar9 = 0;
          do {
            plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x30);
            plVar7 = (longlong *)(*(longlong *)(param_2 + 0x88) + 0x18);
            if (plVar6 != (longlong *)0x0) {
              plVar7 = plVar6;
            }
            FUN_146f7163e(param_2 + 0x100,&local_108,
                          *(undefined4 *)
                           (*plVar7 +
                           (longlong)((int)plVar7[2] * *(int *)((longlong)pvVar3 + lVar9)) * 4),0);
            *(undefined4 *)((longlong)pvVar3 + lVar9) = *local_108;
            lVar9 = lVar9 + 4;
          } while (lVar12 * 4 != lVar9);
        }
      }
      *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) | 1;
      FUN_140905aa4(param_3 + 0x1d8,&local_a0,uVar21);
      pvVar3 = local_128;
      *(int *)(param_3 + 0x60) = (int)local_170;
      *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) | 8;
      local_108 = (void *)0x0;
      lVar12 = (longlong)(int)uStack_120;
      local_100 = CONCAT44(local_100._4_4_,(int)uStack_120);
      if (lVar12 == 0) {
        local_100 = uStack_120 & 0xffffffff;
      }
      else {
        FUN_1447bda9e(&local_108,uStack_120 & 0xffffffff,0);
        memcpy(local_108,pvVar3,lVar12 << 2);
        if (0 < (int)uStack_120) {
          lVar12 = 0;
          do {
            uVar2 = *(undefined4 *)((longlong)local_108 + lVar12 * 4);
            *(undefined4 *)((longlong)local_108 + lVar12 * 4) =
                 *(undefined4 *)((longlong)local_108 + lVar12 * 4 + 8);
            *(undefined4 *)((longlong)local_108 + lVar12 * 4 + 8) = uVar2;
            lVar12 = lVar12 + 3;
          } while (lVar12 < (int)uStack_120);
        }
      }
      _Dst = (undefined8 *)FUN_14001cc68(0xc0);
      memset(_Dst,0,0xc0);
      *(undefined4 *)(_Dst + 1) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0xc) = 0x105;
      _Dst[2] = 0;
      *_Dst = &PTR_FUN_14aa57ea0;
      _Dst[4] = 0;
      _Dst[5] = 0;
      _Dst[3] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 7) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0x3d) = 0;
      *(undefined4 *)(_Dst + 9) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0x4c) = 0x105;
      _Dst[10] = 0;
      _Dst[8] = &PTR_FUN_14aa57ea0;
      _Dst[0xc] = 0;
      _Dst[0xd] = 0;
      _Dst[0xb] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 0xf) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0x7d) = 0;
      *(undefined4 *)(_Dst + 0x11) = 0xffffffff;
      *(undefined2 *)((longlong)_Dst + 0x8c) = 0x105;
      _Dst[0x12] = 0;
      _Dst[0x10] = &PTR_FUN_14aa57ea0;
      _Dst[0x14] = 0;
      _Dst[0x15] = 0;
      _Dst[0x13] = &PTR_FUN_14a3d4750;
      *(undefined4 *)(_Dst + 0x17) = 0xffffffff;
      *(undefined1 *)((longlong)_Dst + 0xbd) = 0;
      *(undefined8 **)(param_3 + 0x218) = _Dst;
      *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) | 2;
      FUN_140905aa4(_Dst,&local_108,uVar21);
      pvVar3 = local_a0;
      local_138 = (void *)0x0;
      lVar12 = (longlong)(int)(float)local_98;
      local_130 = (int)(float)local_98;
      if (lVar12 == 0) {
        local_12c = 0;
      }
      else {
        FUN_1447bda9e(&local_138,local_98 & 0xffffffff,0);
        memcpy(local_138,pvVar3,lVar12 << 2);
      }
      if (0 < (int)uStack_120) {
        lVar12 = 0;
        do {
          uVar2 = *(undefined4 *)((longlong)local_138 + lVar12 * 4);
          *(undefined4 *)((longlong)local_138 + lVar12 * 4) =
               *(undefined4 *)((longlong)local_138 + lVar12 * 4 + 8);
          *(undefined4 *)((longlong)local_138 + lVar12 * 4 + 8) = uVar2;
          lVar12 = lVar12 + 3;
        } while (lVar12 < (int)uStack_120);
      }
      *(byte *)(param_3 + 0x5c) = *(byte *)(param_3 + 0x5c) | 4;
      FUN_140905aa4(*(longlong *)(param_3 + 0x218) + 0x40,&local_108,uVar21);
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_128 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d54f70 FUN_147d54f70 body=71 status=ok
// SIG undefined FUN_147d54f70(void)

void FUN_147d54f70(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147d599cc();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_147d59a60();
      return;
    }
  }
  return;
}



// FUNCTION 147d54fb8 FUN_147d54fb8 body=182 status=ok
// SIG undefined FUN_147d54fb8(void)

undefined8 FUN_147d54fb8(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1458d3bc2();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  local_98 = 0;
  local_80 = 0;
  lStack_78 = 0;
  uStack_a0 = 0x40;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d55070 FUN_147d55070 body=50 status=ok
// SIG undefined FUN_147d55070(void)

undefined8 FUN_147d55070(longlong param_1,uint param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xe0);
  if ((-1 < (int)param_2 && plVar1 != (longlong *)0x0) && ((int)param_2 < (int)plVar1[1])) {
    uVar2 = FUN_1411c4210(*(longlong *)(*plVar1 + (ulonglong)param_2 * 8) + 0x80);
    return uVar2;
  }
  return 0;
}



// FUNCTION 147d550d4 FUN_147d550d4 body=139 status=ok
// SIG undefined FUN_147d550d4(void)

undefined8 FUN_147d550d4(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  puVar1 = *(undefined8 **)(param_1 + 0xe0);
  uVar3 = 0;
  if (puVar1 == (undefined8 *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(puVar1 + 1);
    if (0 < iVar5) {
      lVar2 = *(longlong *)*puVar1;
      if ((longlong)*(int *)(lVar2 + 0x38) < 1) {
        iVar6 = 0;
      }
      else {
        lVar4 = lVar2 + 0x10;
        if (*(longlong *)(lVar2 + 0x30) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x30);
        }
        lVar7 = 0;
        iVar6 = 0;
        do {
          iVar6 = iVar6 + *(int *)(lVar4 + 8 + lVar7);
          lVar7 = lVar7 + 0x1c;
        } while ((longlong)*(int *)(lVar2 + 0x38) * 0x1c != lVar7);
      }
      uVar3 = *(undefined4 *)(lVar2 + 0x10c);
      goto LAB_147d55138;
    }
  }
  iVar6 = 0;
LAB_147d55138:
  FUN_140002266(param_2,L"%d LODs, %d Tris, %d Verts",iVar5,iVar6,uVar3);
  return param_2;
}



// FUNCTION 147d55226 FUN_147d55226 body=157 status=ok
// SIG undefined FUN_147d55226(void)

undefined8 FUN_147d55226(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  plVar1 = *(longlong **)(param_1 + 0x18);
  if ((plVar1 == (longlong *)0x0) || ((int)plVar1[1] == 0)) {
    uVar3 = 0;
  }
  else {
    uVar7 = 0;
    if (param_3 == '\0') {
      uVar8 = (int)plVar1[1] - 1;
      if ((int)*(uint *)(param_1 + 200) < (int)uVar8) {
        uVar8 = *(uint *)(param_1 + 200);
      }
      if (0 < (int)uVar8) {
        uVar7 = (ulonglong)uVar8;
      }
    }
    lVar6 = *plVar1;
    lVar2 = *(longlong *)(lVar6 + uVar7 * 8);
    *param_2 = 0;
    iVar5 = *(int *)(lVar2 + 0x38);
    uVar3 = CONCAT71((int7)((ulonglong)lVar6 >> 8),1);
    if (0 < iVar5) {
      lVar9 = 0x14;
      lVar10 = 0;
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(lVar2 + 0x30);
        if (*(longlong *)(lVar2 + 0x30) == 0) {
          lVar4 = lVar2 + 0x10;
        }
        if ((param_3 != '\0') || (*(char *)(lVar4 + lVar9) == '\x01')) {
          lVar10 = lVar10 + (ulonglong)(uint)(*(int *)(lVar4 + -0xc + lVar9) * 3);
          *param_2 = lVar10;
          iVar5 = *(int *)(lVar2 + 0x38);
        }
        lVar6 = lVar6 + 1;
        lVar9 = lVar9 + 0x1c;
      } while (lVar6 < iVar5);
    }
  }
  return uVar3;
}



// FUNCTION 147d552ca FUN_147d552ca body=269 status=ok
// SIG undefined FUN_147d552ca(void)

void FUN_147d552ca(longlong *param_1,longlong param_2)

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
      FUN_1474be378(param_1 + 0x2d);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    iVar1 = (int)param_1[0x2e];
    *(uint *)(param_1 + 0x2e) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0x174) < iVar1 + 1U) {
      FUN_140730f78(param_1 + 0x2d,iVar1);
    }
    *(longlong *)(param_1[0x2d] + (longlong)iVar1 * 8) = param_2;
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



// FUNCTION 147d553d8 FUN_147d553d8 body=181 status=ok
// SIG undefined FUN_147d553d8(void)

longlong FUN_147d553d8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (0 < *(int *)(param_1 + 0x170)) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + lVar4 * 8);
      if (lVar1 != 0) {
        lVar3 = *param_2;
        if ((lVar3 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar3);
LAB_147d55421:
          lVar2 = FUN_144ae113c();
          if (((lVar2 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) goto LAB_147d55443;
        }
        else {
          if (lVar3 != 0) goto LAB_147d55421;
LAB_147d55443:
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
    } while (lVar4 < *(int *)(param_1 + 0x170));
  }
  return 0;
}



// FUNCTION 147d5548e FUN_147d5548e body=281 status=ok
// SIG undefined FUN_147d5548e(void)

void FUN_147d5548e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar3 = *(int *)(param_1 + 0x170);
  if (0 < iVar3) {
    lVar6 = 1;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x168) + -8 + lVar6 * 8);
      if (lVar1 != 0) {
        lVar5 = *param_2;
        if ((lVar5 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar5);
LAB_147d554e1:
          lVar4 = FUN_144ae113c();
          if (((lVar4 == 0) || (*(int *)(lVar5 + 0x38) < *(int *)(lVar4 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
              lVar4 + 0x30)) goto LAB_147d55503;
        }
        else {
          if (lVar5 != 0) goto LAB_147d554e1;
LAB_147d55503:
          lVar5 = 0;
        }
        lVar1 = *(longlong *)(lVar1 + 0x10);
        if (*(int *)(lVar1 + 0x38) < *(int *)(lVar5 + 0x38)) {
          iVar3 = *(int *)(param_1 + 0x170);
        }
        else {
          iVar3 = *(int *)(param_1 + 0x170);
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30) {
            if (iVar3 != (int)lVar6) {
              memmove((void *)(*(longlong *)(param_1 + 0x168) + lVar6 * 8 + -8),
                      (void *)(*(longlong *)(param_1 + 0x168) + lVar6 * 8),
                      (longlong)(iVar3 - (int)lVar6) << 3);
              iVar3 = *(int *)(param_1 + 0x170);
            }
            *(int *)(param_1 + 0x170) = iVar3 + -1;
            FUN_1474be4b6((longlong *)(param_1 + 0x168));
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



// FUNCTION 147d555b0 FUN_147d555b0 body=240 status=ok
// SIG undefined FUN_147d555b0(void)

void FUN_147d555b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(byte *)(param_1 + 0x194) & 4) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
    *(undefined8 *)(param_1 + 0x248) = 0;
  }
  else {
    if (*(longlong *)(param_1 + 0x248) == 0) {
      FUN_144a4a122();
      plVar2 = DAT_14cacb0f8;
      if (DAT_14cacb100 == 0) {
        plVar2 = (longlong *)0x0;
      }
      lVar1 = (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
      FUN_144a49ece(&local_21);
      if ((lVar1 == 0) || (DAT_14c950c29 == '\0')) {
        *(longlong *)(param_1 + 0x248) = lVar1;
        if (lVar1 == 0) goto LAB_147d555dd;
      }
      else {
        FUN_1456cec3c(lVar1);
        *(longlong *)(param_1 + 0x248) = lVar1;
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x188) + 0x2a0))();
    (**(code **)(**(longlong **)(param_1 + 0x248) + 0x2a0))
              (*(longlong **)(param_1 + 0x248),*(undefined8 *)(param_1 + 0x188));
  }
LAB_147d555dd:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d556a2 FUN_147d556a2 body=18 status=ok
// SIG undefined FUN_147d556a2(void)

void FUN_147d556a2(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x248) = 0;
  FUN_147d555b0(param_1,0);
  return;
}



// FUNCTION 147d556b4 FUN_147d556b4 body=363 status=ok
// SIG undefined FUN_147d556b4(void)

undefined8 FUN_147d556b4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined1 auStack_e8 [40];
  double local_c0;
  double dStack_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  double dStack_98;
  char local_90;
  undefined7 uStack_8f;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dStack_60 = *(double *)(param_1 + 0x210) + *(double *)(param_1 + 0x228);
  local_68 = *(double *)(param_1 + 0x208) + *(double *)(param_1 + 0x220);
  dStack_70 = *(double *)(param_1 + 0x200) + *(double *)(param_1 + 0x218);
  local_78 = *(double *)(param_1 + 0x210) - *(double *)(param_1 + 0x228);
  dStack_80 = *(double *)(param_1 + 0x208) - *(double *)(param_1 + 0x220);
  local_88 = *(double *)(param_1 + 0x200) - *(double *)(param_1 + 0x218);
  local_58 = CONCAT71(local_58._1_7_,1);
  plVar1 = *(longlong **)(param_1 + 0x248);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2a8))(plVar1,&local_c0);
    if (local_90 != '\0') {
      local_58 = CONCAT71(uStack_8f,local_90);
      local_68 = local_a0;
      dStack_60 = dStack_98;
      local_78 = local_b0;
      dStack_70 = dStack_a8;
      local_88 = local_c0;
      dStack_80 = dStack_b8;
    }
  }
  FUN_144a1c3a2(&local_88,param_2,param_3);
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d55820 FUN_147d55820 body=165 status=ok
// SIG undefined FUN_147d55820(void)

void FUN_147d55820(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x588))(plVar1,local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d558de FUN_147d558de body=55 status=ok
// SIG undefined FUN_147d558de(void)

undefined8 FUN_147d558de(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x390);
  if (plVar1 == (longlong *)0x0) {
    FUN_140056680(param_2,L"No_StaticMeshComponent");
  }
  else {
    (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 147d55916 FUN_147d55916 body=38 status=ok
// SIG undefined FUN_147d55916(void)

undefined8 FUN_147d55916(undefined8 param_1,int param_2)

{
  FUN_145ca74a4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d5593c FUN_147d5593c body=45 status=ok
// SIG undefined FUN_147d5593c(void)

longlong FUN_147d5593c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x10;
  FUN_145ca74a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d5596a FUN_147d5596a body=45 status=ok
// SIG undefined FUN_147d5596a(void)

longlong FUN_147d5596a(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_140d7aa08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55998 FUN_147d55998 body=48 status=ok
// SIG undefined FUN_147d55998(void)

longlong FUN_147d55998(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  thunk_FUN_140d7aa08(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d559c8 FUN_147d559c8 body=52 status=ok
// SIG undefined FUN_147d559c8(void)

undefined8 * FUN_147d559c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aab4e40;
  FUN_144760d56(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d559fc FUN_147d559fc body=38 status=ok
// SIG undefined FUN_147d559fc(void)

undefined8 FUN_147d559fc(undefined8 param_1,int param_2)

{
  FUN_147d4e356();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55a22 FUN_147d55a22 body=38 status=ok
// SIG undefined FUN_147d55a22(void)

undefined8 FUN_147d55a22(undefined8 param_1,int param_2)

{
  FUN_147d4e456();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55a48 FUN_147d55a48 body=48 status=ok
// SIG undefined FUN_147d55a48(void)

longlong FUN_147d55a48(longlong param_1,int param_2)

{
  param_1 = param_1 + -200;
  FUN_14029654a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55a84 FUN_147d55a84 body=48 status=ok
// SIG undefined FUN_147d55a84(void)

longlong FUN_147d55a84(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd0;
  FUN_14029654a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55abc FUN_147d55abc body=48 status=ok
// SIG undefined FUN_147d55abc(void)

longlong FUN_147d55abc(longlong param_1,int param_2)

{
  param_1 = param_1 + -0xd8;
  FUN_14029654a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55af4 FUN_147d55af4 body=38 status=ok
// SIG undefined FUN_147d55af4(void)

undefined8 FUN_147d55af4(undefined8 param_1,int param_2)

{
  FUN_140296c34();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55b1a FUN_147d55b1a body=32 status=ok
// SIG undefined FUN_147d55b1a(void)

undefined8 FUN_147d55b1a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStaticMeshSectionAreaWeightedTriangleSamplerBuffer");
  return param_2;
}



// FUNCTION 147d55b3a FUN_147d55b3a body=38 status=ok
// SIG undefined FUN_147d55b3a(void)

undefined8 FUN_147d55b3a(undefined8 param_1,int param_2)

{
  FUN_140296a6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55b60 FUN_147d55b60 body=76 status=ok
// SIG undefined FUN_147d55b60(void)

undefined8 * FUN_147d55b60(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_14aaba160;
  puVar2 = (undefined8 *)param_1[6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140296a6e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d55bac FUN_147d55bac body=138 status=ok
// SIG undefined FUN_147d55bac(void)

code * FUN_147d55bac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"NumTilesToCopy";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c00000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146405b72;
}



// FUNCTION 147d55c36 FUN_147d55c36 body=138 status=ok
// SIG undefined FUN_147d55c36(void)

code * FUN_147d55c36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcVoxelDataOffsetA";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55cc0;
}



// FUNCTION 147d55cc0 FUN_147d55cc0 body=138 status=ok
// SIG undefined FUN_147d55cc0(void)

code * FUN_147d55cc0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileIndexOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55d4a;
}



// FUNCTION 147d55d4a FUN_147d55d4a body=138 status=ok
// SIG undefined FUN_147d55d4a(void)

code * FUN_147d55d4a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FallbackValueB";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55dd4;
}



// FUNCTION 147d55dd4 FUN_147d55dd4 body=138 status=ok
// SIG undefined FUN_147d55dd4(void)

code * FUN_147d55dd4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FallbackValueA";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55e5e;
}



// FUNCTION 147d55e5e FUN_147d55e5e body=138 status=ok
// SIG undefined FUN_147d55e5e(void)

code * FUN_147d55e5e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstTileCoordsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55ee8;
}



// FUNCTION 147d55ee8 FUN_147d55ee8 body=138 status=ok
// SIG undefined FUN_147d55ee8(void)

code * FUN_147d55ee8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataOffsetsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55f72;
}



// FUNCTION 147d55f72 FUN_147d55f72 body=138 status=ok
// SIG undefined FUN_147d55f72(void)

code * FUN_147d55f72(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OccupancyBitsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d55ffc;
}



// FUNCTION 147d55ffc FUN_147d55ffc body=138 status=ok
// SIG undefined FUN_147d55ffc(void)

code * FUN_147d55ffc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcPhysicalTileBufferB";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56086;
}



// FUNCTION 147d56086 FUN_147d56086 body=138 status=ok
// SIG undefined FUN_147d56086(void)

code * FUN_147d56086(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcPhysicalTileBufferA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f1f03e;
}



// FUNCTION 147d56110 FUN_147d56110 body=132 status=ok
// SIG undefined FUN_147d56110(void)

undefined1 * FUN_147d56110(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstPhysicalTileTextureA";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147d56194;
}



// FUNCTION 147d56198 FUN_147d56198 body=138 status=ok
// SIG undefined FUN_147d56198(void)

code * FUN_147d56198(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"UpdateCoordOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56222;
}



// FUNCTION 147d56222 FUN_147d56222 body=138 status=ok
// SIG undefined FUN_147d56222(void)

code * FUN_147d56222(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageTableUpdates";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000042;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145bdfc42;
}



// FUNCTION 147d562ac FUN_147d562ac body=138 status=ok
// SIG undefined FUN_147d562ac(void)

code * FUN_147d562ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindRollingNoise";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24000000174;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd50c;
}



// FUNCTION 147d56336 FUN_147d56336 body=138 status=ok
// SIG undefined FUN_147d56336(void)

code * FUN_147d56336(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindRollingBranch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x22000000172;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146405d0a;
}



// FUNCTION 147d563c0 FUN_147d563c0 body=138 status=ok
// SIG undefined FUN_147d563c0(void)

code * FUN_147d563c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf2Twitch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000170;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d5644a;
}



// FUNCTION 147d5644a FUN_147d5644a body=138 status=ok
// SIG undefined FUN_147d5644a(void)

code * FUN_147d5644a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf2Tumble";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1f00000016f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d564d4;
}



// FUNCTION 147d564d4 FUN_147d564d4 body=138 status=ok
// SIG undefined FUN_147d564d4(void)

code * FUN_147d564d4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf2Ripple";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1e00000016e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d5655e;
}



// FUNCTION 147d5655e FUN_147d5655e body=138 status=ok
// SIG undefined FUN_147d5655e(void)

code * FUN_147d5655e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf1Twitch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d00000016d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d565e8;
}



// FUNCTION 147d565e8 FUN_147d565e8 body=138 status=ok
// SIG undefined FUN_147d565e8(void)

code * FUN_147d565e8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf1Tumble";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000016c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56672;
}



// FUNCTION 147d56672 FUN_147d56672 body=138 status=ok
// SIG undefined FUN_147d56672(void)

code * FUN_147d56672(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindLeaf1Ripple";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1b00000016b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d566fc;
}



// FUNCTION 147d566fc FUN_147d566fc body=138 status=ok
// SIG undefined FUN_147d566fc(void)

code * FUN_147d566fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindTurbulences";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a00000016a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56786;
}



// FUNCTION 147d56786 FUN_147d56786 body=138 status=ok
// SIG undefined FUN_147d56786(void)

code * FUN_147d56786(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindBranchAdherences";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000169;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56810;
}



// FUNCTION 147d56810 FUN_147d56810 body=138 status=ok
// SIG undefined FUN_147d56810(void)

code * FUN_147d56810(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindBranchAnchor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000168;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d5689a;
}



// FUNCTION 147d5689a FUN_147d5689a body=138 status=ok
// SIG undefined FUN_147d5689a(void)

code * FUN_147d5689a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindBranchWhip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x17000000167;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56924;
}



// FUNCTION 147d56924 FUN_147d56924 body=138 status=ok
// SIG undefined FUN_147d56924(void)

code * FUN_147d56924(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindBranchTwitch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x16000000166;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d569ae;
}



// FUNCTION 147d569ae FUN_147d569ae body=138 status=ok
// SIG undefined FUN_147d569ae(void)

code * FUN_147d569ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindBranch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x15000000165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56a38;
}



// FUNCTION 147d56a38 FUN_147d56a38 body=138 status=ok
// SIG undefined FUN_147d56a38(void)

code * FUN_147d56a38(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindGlobal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000164;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56ac2;
}



// FUNCTION 147d56ac2 FUN_147d56ac2 body=138 status=ok
// SIG undefined FUN_147d56ac2(void)

code * FUN_147d56ac2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PrevWindVector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000163;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd482;
}



// FUNCTION 147d56b4c FUN_147d56b4c body=138 status=ok
// SIG undefined FUN_147d56b4c(void)

code * FUN_147d56b4c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindRollingNoise";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000160;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56bd6;
}



// FUNCTION 147d56bd6 FUN_147d56bd6 body=138 status=ok
// SIG undefined FUN_147d56bd6(void)

code * FUN_147d56bd6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindRollingLeafAndDirection";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000015f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145fcd596;
}



// FUNCTION 147d56c60 FUN_147d56c60 body=138 status=ok
// SIG undefined FUN_147d56c60(void)

code * FUN_147d56c60(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindFrondRipple";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000015d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146405d92;
}



// FUNCTION 147d56cea FUN_147d56cea body=138 status=ok
// SIG undefined FUN_147d56cea(void)

code * FUN_147d56cea(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindLeaf2Tumble";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000015b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56d74;
}



// FUNCTION 147d56d74 FUN_147d56d74 body=138 status=ok
// SIG undefined FUN_147d56d74(void)

code * FUN_147d56d74(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindLeaf2Ripple";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb00000015a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56dfe;
}



// FUNCTION 147d56dfe FUN_147d56dfe body=138 status=ok
// SIG undefined FUN_147d56dfe(void)

code * FUN_147d56dfe(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindLeaf1Twitch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000159;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56e88;
}



// FUNCTION 147d56e88 FUN_147d56e88 body=138 status=ok
// SIG undefined FUN_147d56e88(void)

code * FUN_147d56e88(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindLeaf1Tumble";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000158;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56f12;
}



// FUNCTION 147d56f12 FUN_147d56f12 body=138 status=ok
// SIG undefined FUN_147d56f12(void)

code * FUN_147d56f12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindLeaf1Ripple";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000157;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d56f9c;
}



// FUNCTION 147d56f9c FUN_147d56f9c body=138 status=ok
// SIG undefined FUN_147d56f9c(void)

code * FUN_147d56f9c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindTurbulences";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000156;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d57026;
}



// FUNCTION 147d57026 FUN_147d57026 body=138 status=ok
// SIG undefined FUN_147d57026(void)

code * FUN_147d57026(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindBranchAdherences";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000155;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d570b0;
}



// FUNCTION 147d570b0 FUN_147d570b0 body=138 status=ok
// SIG undefined FUN_147d570b0(void)

code * FUN_147d570b0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindBranchAnchor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000154;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d5713a;
}



// FUNCTION 147d5713a FUN_147d5713a body=138 status=ok
// SIG undefined FUN_147d5713a(void)

code * FUN_147d5713a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindBranchWhip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000153;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d571c4;
}



// FUNCTION 147d571c4 FUN_147d571c4 body=138 status=ok
// SIG undefined FUN_147d571c4(void)

code * FUN_147d571c4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindBranchTwitch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000152;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d5724e;
}



// FUNCTION 147d5724e FUN_147d5724e body=138 status=ok
// SIG undefined FUN_147d5724e(void)

code * FUN_147d5724e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindBranch";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000151;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d572d8;
}



// FUNCTION 147d572d8 FUN_147d572d8 body=138 status=ok
// SIG undefined FUN_147d572d8(void)

code * FUN_147d572d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindGlobal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147d57362;
}



// FUNCTION 147d57362 FUN_147d57362 body=132 status=ok
// SIG undefined FUN_147d57362(void)

undefined1 * FUN_147d57362(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WindVector";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_147d573e6;
}



// FUNCTION 147d5741e FUN_147d5741e body=63 status=ok
// SIG undefined FUN_147d5741e(void)

undefined1 FUN_147d5741e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d57568(param_2,param_3);
    param_3 = param_3 + 0x1d0;
    param_2 = param_2 + 0x1d0;
  }
  return 1;
}



// FUNCTION 147d57486 FUN_147d57486 body=81 status=ok
// SIG undefined FUN_147d57486(void)

int FUN_147d57486(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    iVar1 = (int)param_2[1];
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d574e8 FUN_147d574e8 body=49 status=ok
// SIG undefined FUN_147d574e8(void)

void FUN_147d574e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3a) == '\x01') {
    *param_2 = &PTR_FUN_14aab4e40;
    FUN_144760d56(param_2 + 5);
    *(undefined1 *)(param_2 + 0x3a) = 0;
  }
  return;
}



// FUNCTION 147d57568 FUN_147d57568 body=118 status=ok
// SIG undefined FUN_147d57568(void)

longlong FUN_147d57568(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if (DAT_14c950c29 == '\x01') {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar4 = *(longlong *)(param_2 + 0x10);
    }
  }
  *(longlong *)(param_1 + 0x10) = lVar4;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  FUN_1400f437c(param_1 + 0x28,param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x1b8);
  uVar2 = *(undefined8 *)(param_2 + 0x1ba);
  uVar3 = *(undefined8 *)(param_2 + 0x1c2);
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined8 *)(param_1 + 0x1b8) = uVar1;
  *(undefined8 *)(param_1 + 0x1ba) = uVar2;
  *(undefined8 *)(param_1 + 0x1c2) = uVar3;
  return param_1;
}



// FUNCTION 147d57614 FUN_147d57614 body=63 status=ok
// SIG undefined FUN_147d57614(void)

undefined1 FUN_147d57614(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d57754(param_2,param_3);
    param_3 = param_3 + 0x200;
    param_2 = param_2 + 0x200;
  }
  return 1;
}



// FUNCTION 147d5767c FUN_147d5767c body=81 status=ok
// SIG undefined FUN_147d5767c(void)

int FUN_147d5767c(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    iVar1 = (int)param_2[1];
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d576de FUN_147d576de body=40 status=ok
// SIG undefined FUN_147d576de(void)

void FUN_147d576de(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x200) == '\x01') {
    FUN_147d4e356(param_2);
    *(undefined1 *)(param_2 + 0x200) = 0;
  }
  return;
}



// FUNCTION 147d57754 FUN_147d57754 body=152 status=ok
// SIG undefined FUN_147d57754(void)

longlong FUN_147d57754(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  FUN_147d57568();
  lVar1 = *(longlong *)(param_2 + 0x1d0);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1d0);
    }
  }
  *(longlong *)(param_1 + 0x1d0) = lVar1;
  FUN_140c99494(param_1 + 0x1d8,param_2 + 0x1d8);
  lVar1 = *(longlong *)(param_2 + 0x1e8);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x1e8);
    }
  }
  *(longlong *)(param_1 + 0x1e8) = lVar1;
  FUN_147876444(param_1 + 0x1f0,param_2 + 0x1f0);
  return param_1;
}



// FUNCTION 147d57822 FUN_147d57822 body=63 status=ok
// SIG undefined FUN_147d57822(void)

undefined1 FUN_147d57822(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d57962(param_2,param_3);
    param_3 = param_3 + 0x240;
    param_2 = param_2 + 0x240;
  }
  return 1;
}



// FUNCTION 147d5788a FUN_147d5788a body=81 status=ok
// SIG undefined FUN_147d5788a(void)

int FUN_147d5788a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  iVar1 = (int)param_2[1];
  if (iVar1 == 0) {
    (**(code **)(*param_2 + 0x10))(param_2);
    iVar1 = (int)param_2[1];
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d578ec FUN_147d578ec body=40 status=ok
// SIG undefined FUN_147d578ec(void)

void FUN_147d578ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x240) == '\x01') {
    FUN_147d4e456(param_2);
    *(undefined1 *)(param_2 + 0x240) = 0;
  }
  return;
}



// FUNCTION 147d57962 FUN_147d57962 body=154 status=ok
// SIG undefined FUN_147d57962(void)

longlong FUN_147d57962(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_147d57568();
  *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)(param_2 + 0x1d0);
  uVar1 = *(undefined4 *)(param_2 + 0x1dc);
  uVar2 = *(undefined4 *)(param_2 + 0x1e0);
  uVar3 = *(undefined4 *)(param_2 + 0x1e4);
  *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(param_2 + 0x1d8);
  *(undefined4 *)(param_1 + 0x1dc) = uVar1;
  *(undefined4 *)(param_1 + 0x1e0) = uVar2;
  *(undefined4 *)(param_1 + 0x1e4) = uVar3;
  FUN_144a787a6(param_1 + 0x1e8,param_2 + 0x1e8);
  FUN_147b4c404(param_1 + 0x1f8,param_2 + 0x1f8);
  *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)(param_2 + 0x208);
  uVar1 = *(undefined4 *)(param_2 + 0x214);
  uVar2 = *(undefined4 *)(param_2 + 0x218);
  uVar3 = *(undefined4 *)(param_2 + 0x21c);
  *(undefined4 *)(param_1 + 0x210) = *(undefined4 *)(param_2 + 0x210);
  *(undefined4 *)(param_1 + 0x214) = uVar1;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  *(undefined4 *)(param_1 + 0x21c) = uVar3;
  FUN_144a787a6(param_1 + 0x220,param_2 + 0x220);
  FUN_147b4c462(param_1 + 0x230,param_2 + 0x230);
  return param_1;
}



// FUNCTION 147d57ab6 FUN_147d57ab6 body=59 status=ok
// SIG undefined FUN_147d57ab6(void)

undefined8 FUN_147d57ab6(longlong *param_1)

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



// FUNCTION 147d57be0 FUN_147d57be0 body=59 status=ok
// SIG undefined FUN_147d57be0(void)

undefined8 FUN_147d57be0(longlong *param_1)

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



// FUNCTION 147d57cd0 FUN_147d57cd0 body=42 status=ok
// SIG undefined FUN_147d57cd0(void)

void FUN_147d57cd0(undefined8 param_1,longlong param_2)

{
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_147d57e3a(param_2);
  return;
}



// FUNCTION 147d57d10 FUN_147d57d10 body=54 status=ok
// SIG undefined FUN_147d57d10(void)

undefined1 FUN_147d57d10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147d57ef2(param_2,param_3);
    param_3 = param_3 + 0x50;
    param_2 = param_2 + 0x50;
  }
  return 1;
}



// FUNCTION 147d57d6e FUN_147d57d6e body=59 status=ok
// SIG undefined FUN_147d57d6e(void)

undefined8 FUN_147d57d6e(longlong *param_1)

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



// FUNCTION 147d57db4 FUN_147d57db4 body=55 status=ok
// SIG undefined FUN_147d57db4(void)

void FUN_147d57db4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x50) == '\x01') {
    *(undefined4 *)(param_2 + 0x48) = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1400020a8();
    }
    FUN_147d57e3a(param_2);
    *(undefined1 *)(param_2 + 0x50) = 0;
  }
  return;
}



// FUNCTION 147d57e3a FUN_147d57e3a body=54 status=ok
// SIG undefined FUN_147d57e3a(void)

void FUN_147d57e3a(longlong *param_1)

{
  FUN_147d57e70(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147d57e70 FUN_147d57e70 body=128 status=ok
// SIG undefined FUN_147d57e70(void)

void FUN_147d57e70(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405357e8(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 147d57ef2 FUN_147d57ef2 body=122 status=ok
// SIG undefined FUN_147d57ef2(void)

longlong FUN_147d57ef2(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147d57f6c(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 147d57f6c FUN_147d57f6c body=121 status=ok
// SIG undefined FUN_147d57f6c(void)

undefined8 * FUN_147d57f6c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_147d57e70(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 147d5803e FUN_147d5803e body=39 status=ok
// SIG undefined FUN_147d5803e(void)

undefined8 FUN_147d5803e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d5808e FUN_147d5808e body=59 status=ok
// SIG undefined FUN_147d5808e(void)

undefined8 FUN_147d5808e(longlong *param_1)

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



// FUNCTION 147d58158 FUN_147d58158 body=121 status=ok
// SIG undefined FUN_147d58158(void)

undefined1 FUN_147d58158(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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



// FUNCTION 147d581fa FUN_147d581fa body=59 status=ok
// SIG undefined FUN_147d581fa(void)

undefined8 FUN_147d581fa(longlong *param_1)

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



// FUNCTION 147d582dc FUN_147d582dc body=73 status=ok
// SIG undefined FUN_147d582dc(void)

undefined8 FUN_147d582dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_2 + lVar1) = *(undefined4 *)(param_3 + lVar1);
      FUN_14054c6c4();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147d5834e FUN_147d5834e body=59 status=ok
// SIG undefined FUN_147d5834e(void)

undefined8 FUN_147d5834e(longlong *param_1)

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



// FUNCTION 147d58394 FUN_147d58394 body=38 status=ok
// SIG undefined FUN_147d58394(void)

void FUN_147d58394(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 147d5840a FUN_147d5840a body=67 status=ok
// SIG undefined FUN_147d5840a(void)

undefined8 * FUN_147d5840a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14aabc2f0;
  param_1[2] = &PTR_FUN_14aabc320;
  FUN_144725486();
  FUN_145ca74a4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d58458 FUN_147d58458 body=98 status=ok
// SIG undefined FUN_147d58458(void)

void FUN_147d58458(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_14151c76a(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147d584ba FUN_147d584ba body=62 status=ok
// SIG undefined FUN_147d584ba(void)

void FUN_147d584ba(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d584f8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147d584f8 FUN_147d584f8 body=112 status=ok
// SIG undefined FUN_147d584f8(void)

ulonglong FUN_147d584f8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d58532;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_147d58532:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d58568 FUN_147d58568 body=89 status=ok
// SIG undefined FUN_147d58568(void)

void FUN_147d58568(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x100 + *param_1);
  FUN_1410fadde(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x100 + (longlong)_Dst),(longlong)iVar2 << 8);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 147d585c2 FUN_147d585c2 body=62 status=ok
// SIG undefined FUN_147d585c2(void)

void FUN_147d585c2(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d58600(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x100,8);
  }
  return;
}



// FUNCTION 147d58600 FUN_147d58600 body=93 status=ok
// SIG undefined FUN_147d58600(void)

ulonglong FUN_147d58600(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc0U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 8,8);
      uVar1 = uVar1 >> 8;
    }
  }
  return uVar1;
}



// FUNCTION 147d5865e FUN_147d5865e body=312 status=ok
// SIG undefined FUN_147d5865e(void)

undefined4 * FUN_147d5865e(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147d58798(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_147d5887e(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_147d5896c(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d58798 FUN_147d58798 body=229 status=ok
// SIG undefined FUN_147d58798(void)

int * FUN_147d58798(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 147d5887e FUN_147d5887e body=124 status=ok
// SIG undefined FUN_147d5887e(void)

undefined8 FUN_147d5887e(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_147d588fa(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 147d588fa FUN_147d588fa body=114 status=ok
// SIG undefined FUN_147d588fa(void)

void FUN_147d588fa(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d5896c FUN_147d5896c body=477 status=ok
// SIG undefined FUN_147d5896c(void)

void FUN_147d5896c(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x10;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0xc + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 8 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147d58b4a FUN_147d58b4a body=114 status=ok
// SIG undefined FUN_147d58b4a(void)

void FUN_147d58b4a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d58bbc FUN_147d58bbc body=114 status=ok
// SIG undefined FUN_147d58bbc(void)

void FUN_147d58bbc(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d58c2e FUN_147d58c2e body=144 status=ok
// SIG undefined FUN_147d58c2e(void)

void FUN_147d58c2e(undefined2 *param_1)

{
  *param_1 = 0xffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  *(undefined8 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x56) = 0x10;
  *(undefined8 *)(param_1 + 0x5a) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x74) = DAT_14c9a5298;
  *(undefined4 *)(param_1 + 0x78) = DAT_14c9a52a0;
  *(undefined8 *)(param_1 + 0x7a) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 147d58cbe FUN_147d58cbe body=58 status=ok
// SIG undefined FUN_147d58cbe(void)

void FUN_147d58cbe(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d58cf8(*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c));
  if (iVar1 == *(int *)(param_1 + 0x4c)) {
    return;
  }
  *(int *)(param_1 + 0x4c) = iVar1;
  FUN_14682d43c(param_1,*(undefined4 *)(param_1 + 0x48),iVar1,4);
  return;
}



// FUNCTION 147d58cf8 FUN_147d58cf8 body=108 status=ok
// SIG undefined FUN_147d58cf8(void)

ulonglong FUN_147d58cf8(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_1) {
    iVar2 = param_2 - param_1;
    if (((longlong)iVar2 & 0x3ffffffffffff000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_2 * 2) <= (int)(param_1 * 3)) {
        return (ulonglong)param_2;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_2;
    }
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,0);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}



// FUNCTION 147d58d64 FUN_147d58d64 body=132 status=ok
// SIG undefined FUN_147d58d64(void)

void FUN_147d58d64(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 2,2);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 2)) {
      uVar5 = uVar3 >> 2 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,4,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d58dea FUN_147d58dea body=137 status=ok
// SIG undefined FUN_147d58dea(void)

void FUN_147d58dea(longlong *param_1,short *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x30;
        if ((*(short *)(lVar1 + lVar4) == *param_2) && (*(short *)(lVar1 + 2 + lVar4) == param_2[1])
           ) {
          FUN_147d58e74(param_1);
          return;
        }
        iVar2 = *(int *)(lVar4 + lVar1 + 0x28);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 147d58e74 FUN_147d58e74 body=95 status=ok
// SIG undefined FUN_147d58e74(void)

void FUN_147d58e74(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x2c + (longlong)param_2 * 0x30);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x28 + lVar5 * 0x30);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x30 + 0x28);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x30 + 0x28);
  FUN_147d58ed4();
  return;
}



// FUNCTION 147d58ed4 FUN_147d58ed4 body=122 status=ok
// SIG undefined FUN_147d58ed4(void)

void FUN_147d58ed4(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x30) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x30 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147d58f4e FUN_147d58f4e body=90 status=ok
// SIG undefined FUN_147d58f4e(void)

void FUN_147d58f4e(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147d588fa();
  return;
}



// FUNCTION 147d58fa8 FUN_147d58fa8 body=90 status=ok
// SIG undefined FUN_147d58fa8(void)

void FUN_147d58fa8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_147d58b4a();
  return;
}



// FUNCTION 147d59002 FUN_147d59002 body=322 status=ok
// SIG undefined FUN_147d59002(void)

void FUN_147d59002(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 147d59146 FUN_147d59146 body=48 status=ok
// SIG undefined FUN_147d59146(void)

void FUN_147d59146(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,4);
  }
  return;
}



// FUNCTION 147d59176 FUN_147d59176 body=132 status=ok
// SIG undefined FUN_147d59176(void)

void FUN_147d59176(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d591fc FUN_147d591fc body=62 status=ok
// SIG undefined FUN_147d591fc(void)

void FUN_147d591fc(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d5923a(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 147d5923a FUN_147d5923a body=93 status=ok
// SIG undefined FUN_147d5923a(void)

ulonglong FUN_147d5923a(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147d59298 FUN_147d59298 body=38 status=ok
// SIG undefined FUN_147d59298(void)

undefined8 FUN_147d59298(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d592be FUN_147d592be body=48 status=ok
// SIG undefined FUN_147d592be(void)

void FUN_147d592be(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 147d592ee FUN_147d592ee body=38 status=ok
// SIG undefined FUN_147d592ee(void)

undefined8 FUN_147d592ee(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147d59314 FUN_147d59314 body=115 status=ok
// SIG undefined FUN_147d59314(void)

void FUN_147d59314(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147d59387 FUN_147d59387 body=118 status=ok
// SIG undefined FUN_147d59387(void)

void FUN_147d59387(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  longlong lVar11;
  
  if (param_3 != 0) {
    lVar11 = 0;
    bVar10 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_2 + lVar11);
      *(longlong *)(param_1 + lVar11) = lVar2;
      if ((lVar2 != 0 & bVar10) == 1) {
        FUN_1456cec3c();
        bVar10 = DAT_14c950c29;
      }
      lVar2 = param_1 + lVar11;
      lVar1 = param_2 + lVar11;
      *(undefined4 *)(lVar2 + 0x28) = *(undefined4 *)(lVar1 + 0x28);
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + 0x1c) = uVar7;
      *(undefined4 *)(lVar2 + 0x20) = uVar8;
      *(undefined4 *)(lVar2 + 0x24) = uVar9;
      *(undefined4 *)(lVar2 + 8) = uVar3;
      *(undefined4 *)(lVar2 + 0xc) = uVar4;
      *(undefined4 *)(lVar2 + 0x10) = uVar5;
      *(undefined4 *)(lVar2 + 0x14) = uVar6;
      lVar11 = lVar11 + 0x30;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147d59402 FUN_147d59402 body=136 status=ok
// SIG undefined FUN_147d59402(void)

void FUN_147d59402(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[0x30] != 0) {
    local_30 = param_1[0x2f];
    local_28 = (int)param_1[0x30];
    FUN_14066ba35(param_1 + 1);
    if (param_2 != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4b8))
                (*(longlong **)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218),8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d5948c FUN_147d5948c body=136 status=ok
// SIG undefined FUN_147d5948c(void)

void FUN_147d5948c(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = (**(code **)(*param_1 + 8))();
  if ((int)param_1[0x30] != 0) {
    local_30 = param_1[0x2f];
    local_28 = (int)param_1[0x30];
    FUN_14066ba35(param_1 + 1);
    if (param_2 != '\0') {
      (**(code **)(**(longlong **)(lVar1 + 0x210) + 0x4b8))
                (*(longlong **)(lVar1 + 0x210),*(undefined8 *)(lVar1 + 0x218),8);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147d59516 FUN_147d59516 body=108 status=ok
// SIG undefined FUN_147d59516(void)

void FUN_147d59516(ulonglong *param_1,uint param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  void *_Dst;
  
  uVar1 = *param_1;
  uVar4 = ((longlong)uVar1 >> 0x18) + (longlong)param_1;
  if ((uVar1 & 1) == 0) {
    uVar4 = uVar1;
  }
  _Dst = (void *)((ulonglong)param_2 * 0x40 + uVar4);
  FUN_140296a48(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (iVar3 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x40 + (longlong)_Dst),(longlong)iVar3 << 6);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 147d59582 FUN_147d59582 body=62 status=ok
// SIG undefined FUN_147d59582(void)

void FUN_147d59582(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d595c0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_144a7f90c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 147d595c0 FUN_147d595c0 body=93 status=ok
// SIG undefined FUN_147d595c0(void)

ulonglong FUN_147d595c0(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 6,8);
      uVar1 = uVar1 >> 6;
    }
  }
  return uVar1;
}



// FUNCTION 147d5961e FUN_147d5961e body=62 status=ok
// SIG undefined FUN_147d5961e(void)

void FUN_147d5961e(longlong param_1,int param_2)

{
  FUN_147d5965e();
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) == param_2) {
    return;
  }
  FUN_1447ab16c(param_1,param_2);
  return;
}



// FUNCTION 147d5965e FUN_147d5965e body=70 status=ok
// SIG undefined FUN_147d5965e(void)

void FUN_147d5965e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[1];
  if ((int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar4 * 8);
      if (lVar2 != 0) {
        FUN_147d5242a(lVar2);
        FUN_1400020a8(lVar2);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar3 != (int)lVar4);
  }
  return;
}



// FUNCTION 147d596a4 FUN_147d596a4 body=146 status=ok
// SIG undefined FUN_147d596a4(void)

void FUN_147d596a4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x450,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x450)) {
      uVar5 = uVar4 / 0x450 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x450,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d59738 FUN_147d59738 body=132 status=ok
// SIG undefined FUN_147d59738(void)

void FUN_147d59738(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d597be FUN_147d597be body=147 status=ok
// SIG undefined FUN_147d597be(void)

void FUN_147d597be(longlong param_1,int param_2)

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



// FUNCTION 147d59852 FUN_147d59852 body=123 status=ok
// SIG undefined FUN_147d59852(void)

void FUN_147d59852(longlong param_1,short *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = param_1;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(short *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 1) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 2;
    } while (lVar5 * 2 != uVar4);
  }
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_147d598ce(param_1,iVar1);
    lVar2 = *(longlong *)(param_1 + 8);
  }
  if (lVar2 != 0) {
    param_1 = lVar2;
  }
  *(short *)(param_1 + lVar5 * 2) = *param_2;
  return;
}



// FUNCTION 147d598ce FUN_147d598ce body=122 status=ok
// SIG undefined FUN_147d598ce(void)

void FUN_147d598ce(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 * 2,0);
      iVar3 = (int)(uVar4 >> 1);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_147d5994a(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d5994a FUN_147d5994a body=130 status=ok
// SIG undefined FUN_147d5994a(void)

void FUN_147d5994a(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,2);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 * 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,2);
  return;
}



// FUNCTION 147d599cc FUN_147d599cc body=147 status=ok
// SIG undefined FUN_147d599cc(void)

void FUN_147d599cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x74,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x74)) {
      uVar5 = uVar4 / 0x74 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x74,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d59a60 FUN_147d59a60 body=62 status=ok
// SIG undefined FUN_147d59a60(void)

void FUN_147d59a60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147d59a9e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x74,4);
  }
  return;
}



// FUNCTION 147d59a9e FUN_147d59a9e body=108 status=ok
// SIG undefined FUN_147d59a9e(void)

ulonglong FUN_147d59a9e(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x74) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147d59ad4;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x74,4);
      param_2 = param_2 / 0x74;
    }
  }
LAB_147d59ad4:
  return param_2 & 0xffffffff;
}



// FUNCTION 147d59b0a FUN_147d59b0a body=145 status=ok
// SIG undefined FUN_147d59b0a(void)

void FUN_147d59b0a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar3 = (longlong)(int)uVar2;
      }
      else {
        lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x1c,0);
      iVar5 = (int)(uVar4 / 0x1c);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar6;
    FUN_14041dce2(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d59b9c FUN_147d59b9c body=96 status=ok
// SIG undefined FUN_147d59b9c(void)

void FUN_147d59b9c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 147d59bfc FUN_147d59bfc body=132 status=ok
// SIG undefined FUN_147d59bfc(void)

void FUN_147d59bfc(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147d59c82 FUN_147d59c82 body=98 status=ok
// SIG undefined FUN_147d59c82(void)

undefined8 * FUN_147d59c82(undefined8 *param_1,longlong param_2)

{
  if (*(char *)(param_1 + 0xb) == '\x01') {
    FUN_147d5cdcc(param_1);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_147d59ce4(param_1,param_2);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0xb) = 1;
  return param_1;
}



// FUNCTION 147d59ce4 FUN_147d59ce4 body=122 status=ok
// SIG undefined FUN_147d59ce4(void)

longlong FUN_147d59ce4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_147d59d5e(param_1,param_2);
  }
  return param_1;
}


