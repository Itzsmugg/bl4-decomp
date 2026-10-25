// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 144631ba0 FUN_144631ba0 body=437 status=ok
// SIG undefined FUN_144631ba0(void)

void FUN_144631ba0(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_3;
  lVar5 = *(longlong *)(*param_1 + 0x10);
  iVar4 = *(int *)(*(longlong *)(*param_1 + 0x1b8) + 0x440);
  if (((*(float *)(lVar5 + 0x70) != fVar1) || (NAN(*(float *)(lVar5 + 0x70)) || NAN(fVar1))) ||
     (*(int *)(lVar5 + 0x74) != iVar4)) {
    *(float *)(lVar5 + 0x70) = fVar1;
    *(int *)(lVar5 + 0x74) = iVar4;
  }
  else if ((*(byte *)(lVar5 + 0x60) & 1) == 0) {
    return;
  }
  lVar7 = (longlong)*(int *)(lVar5 + 0x50);
  fVar10 = 1.0;
  if (1 < lVar7) {
    fVar10 = 1.0 / (float)(*(int *)(lVar5 + 0x50) + -1);
  }
  if (0 < lVar7) {
    fVar2 = *(float *)(lVar5 + 0x58);
    fVar3 = *(float *)(lVar5 + 0x5c);
    lVar6 = 0;
    do {
      fVar8 = (float)(int)lVar6 * fVar10 * (fVar3 - fVar2) + fVar2;
      if (fVar8 <= 1e-08) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = 1.0;
        if (fVar8 < 1.0) {
          fVar9 = *(float *)(lVar5 + 0x68);
          fVar8 = expf(fVar8 * *(float *)(lVar5 + 0x6c));
          fVar8 = logf(1.0 - (fVar8 + -1.0) / (fVar9 + -1.0));
          fVar9 = expf(fVar8 * ((fVar1 * 120.0) / (float)iVar4));
          fVar9 = 1.0 - fVar9;
        }
      }
      *(float *)(*(longlong *)(lVar5 + 0x48) + lVar6 * 4) = fVar9;
      lVar6 = lVar6 + 1;
    } while (lVar7 != lVar6);
  }
  *(undefined1 *)(lVar5 + 0x60) = 0;
  return;
}



// FUNCTION 144631d80 FUN_144631d80 body=29 status=ok
// SIG undefined FUN_144631d80(void)

undefined8 FUN_144631d80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631dda FUN_144631dda body=29 status=ok
// SIG undefined FUN_144631dda(void)

undefined8 FUN_144631dda(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631df8 FUN_144631df8 body=68 status=ok
// SIG undefined FUN_144631df8(void)

void FUN_144631df8(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x40);
  FUN_146e7d426(lVar2);
  FUN_146e80d04(lVar2 + 0x208);
  lVar1 = *(longlong *)(lVar1 + 0x40);
  FUN_144630626(lVar1);
  FUN_144630744(lVar1 + 0x208);
  return;
}



// FUNCTION 144631e66 FUN_144631e66 body=29 status=ok
// SIG undefined FUN_144631e66(void)

undefined8 FUN_144631e66(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631ec0 FUN_144631ec0 body=29 status=ok
// SIG undefined FUN_144631ec0(void)

undefined8 FUN_144631ec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631ede FUN_144631ede body=31 status=ok
// SIG undefined FUN_144631ede(void)

void FUN_144631ede(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144630522(*(undefined8 *)(lVar1 + 0x60));
  FUN_1497ff64e(*(undefined8 *)(lVar1 + 0x60));
  return;
}



// FUNCTION 144631f28 FUN_144631f28 body=29 status=ok
// SIG undefined FUN_144631f28(void)

undefined8 FUN_144631f28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631f82 FUN_144631f82 body=29 status=ok
// SIG undefined FUN_144631f82(void)

undefined8 FUN_144631f82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144631fa0 FUN_144631fa0 body=437 status=ok
// SIG undefined FUN_144631fa0(void)

void FUN_144631fa0(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_3;
  lVar5 = *(longlong *)(*param_1 + 0x50);
  iVar4 = *(int *)(*(longlong *)(*param_1 + 0x1b8) + 0x440);
  if (((*(float *)(lVar5 + 0x70) != fVar1) || (NAN(*(float *)(lVar5 + 0x70)) || NAN(fVar1))) ||
     (*(int *)(lVar5 + 0x74) != iVar4)) {
    *(float *)(lVar5 + 0x70) = fVar1;
    *(int *)(lVar5 + 0x74) = iVar4;
  }
  else if ((*(byte *)(lVar5 + 0x60) & 1) == 0) {
    return;
  }
  lVar7 = (longlong)*(int *)(lVar5 + 0x50);
  fVar10 = 1.0;
  if (1 < lVar7) {
    fVar10 = 1.0 / (float)(*(int *)(lVar5 + 0x50) + -1);
  }
  if (0 < lVar7) {
    fVar2 = *(float *)(lVar5 + 0x58);
    fVar3 = *(float *)(lVar5 + 0x5c);
    lVar6 = 0;
    do {
      fVar8 = (float)(int)lVar6 * fVar10 * (fVar3 - fVar2) + fVar2;
      if (fVar8 <= 1e-08) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = 1.0;
        if (fVar8 < 1.0) {
          fVar9 = *(float *)(lVar5 + 0x68);
          fVar8 = expf(fVar8 * *(float *)(lVar5 + 0x6c));
          fVar8 = logf(1.0 - (fVar8 + -1.0) / (fVar9 + -1.0));
          fVar9 = expf(fVar8 * ((fVar1 * 120.0) / (float)iVar4));
          fVar9 = 1.0 - fVar9;
        }
      }
      *(float *)(*(longlong *)(lVar5 + 0x48) + lVar6 * 4) = fVar9;
      lVar6 = lVar6 + 1;
    } while (lVar7 != lVar6);
  }
  *(undefined1 *)(lVar5 + 0x60) = 0;
  return;
}



// FUNCTION 144632180 FUN_144632180 body=29 status=ok
// SIG undefined FUN_144632180(void)

undefined8 FUN_144632180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446321da FUN_1446321da body=29 status=ok
// SIG undefined FUN_1446321da(void)

undefined8 FUN_1446321da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446321f8 FUN_1446321f8 body=58 status=ok
// SIG undefined FUN_1446321f8(void)

void FUN_1446321f8(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_144630966(*(undefined8 *)(lVar1 + 0x70),*param_3,
                *(undefined4 *)(*(longlong *)(lVar1 + 0x1b8) + 0x440));
  FUN_1429b8f44(*(undefined8 *)(lVar1 + 0x70),param_2);
  return;
}



// FUNCTION 14463225c FUN_14463225c body=29 status=ok
// SIG undefined FUN_14463225c(void)

undefined8 FUN_14463225c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446322b6 FUN_1446322b6 body=29 status=ok
// SIG undefined FUN_1446322b6(void)

undefined8 FUN_1446322b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632390 FUN_144632390 body=29 status=ok
// SIG undefined FUN_144632390(void)

undefined8 FUN_144632390(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446323ec FUN_1446323ec body=29 status=ok
// SIG undefined FUN_1446323ec(void)

undefined8 FUN_1446323ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446324c6 FUN_1446324c6 body=29 status=ok
// SIG undefined FUN_1446324c6(void)

undefined8 FUN_1446324c6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632522 FUN_144632522 body=29 status=ok
// SIG undefined FUN_144632522(void)

undefined8 FUN_144632522(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632540 FUN_144632540 body=205 status=ok
// SIG undefined FUN_144632540(void)

void FUN_144632540(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  lVar4 = *param_1;
  lVar3 = *(longlong *)(lVar4 + 0xb0);
  if ((longlong)*(int *)(lVar3 + 0x90) != 0) {
    memset(*(void **)(lVar3 + 0x88),0,(longlong)*(int *)(lVar3 + 0x90) << 2);
    lVar3 = *(longlong *)(lVar4 + 0xb0);
  }
  if ((*(float *)(lVar3 + 0x80) != 1e+07) || (NAN(*(float *)(lVar3 + 0x80)))) {
    *(undefined4 *)(lVar3 + 0x80) = 0x4b189680;
  }
  else if ((*(byte *)(lVar3 + 0x70) & 1) == 0) {
    return;
  }
  lVar4 = (longlong)*(int *)(lVar3 + 0x60);
  fVar6 = 1.0;
  if (1 < lVar4) {
    fVar6 = 1.0 / (float)(*(int *)(lVar3 + 0x60) + -1);
  }
  if (0 < lVar4) {
    fVar1 = *(float *)(lVar3 + 0x68);
    fVar2 = *(float *)(lVar3 + 0x6c);
    lVar5 = 0;
    do {
      fVar7 = (float)(int)lVar5 * fVar6 * (fVar2 - fVar1) + fVar1;
      if (1e+07 <= fVar7) {
        fVar7 = 1e+07;
      }
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)(*(longlong *)(lVar3 + 0x58) + lVar5 * 4) = fVar7;
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  *(undefined1 *)(lVar3 + 0x70) = 0;
  return;
}



// FUNCTION 144632638 FUN_144632638 body=29 status=ok
// SIG undefined FUN_144632638(void)

undefined8 FUN_144632638(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632656 FUN_144632656 body=1214 status=ok
// SIG undefined FUN_144632656(void)

void FUN_144632656(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  float local_c0;
  float local_ac;
  float local_a8;
  float local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  uVar1 = *param_3;
  lVar2 = *(longlong *)(*param_1 + 0xb0);
  if ((*(int *)(lVar2 + 0x60) < 2) ||
     (ABS(*(float *)(lVar2 + 0x68) - *(float *)(lVar2 + 0x6c)) <= 0.0001)) {
    fVar11 = **(float **)(lVar2 + 0x58);
    if ((0.0001 <= fVar11) && (0 < *(int *)(lVar2 + 0x10))) {
      lVar7 = 2;
      lVar8 = 0;
      do {
        lVar5 = *(longlong *)(lVar2 + 8);
        lVar4 = (longlong)*(int *)(lVar5 + -8 + lVar7 * 4);
        lVar6 = (longlong)*(int *)(lVar5 + -4 + lVar7 * 4);
        lVar5 = (longlong)*(int *)(lVar5 + lVar7 * 4);
        local_c8 = (undefined4)lVar8;
        local_c0 = fVar11;
        FUN_149800706(lVar2,&local_ac,param_2,uVar1);
        fVar9 = *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4);
        if (fVar9 <= 1.0 - fVar9) {
          fVar9 = 1.0 - fVar9;
        }
        fVar10 = 2.0 / (fVar9 + 1.0);
        lVar3 = *(longlong *)(param_2 + 0x90);
        fVar9 = *(float *)(lVar3 + lVar4 * 4);
        if (0.0 < fVar9) {
          fVar9 = fVar9 * fVar10;
          lVar3 = *(longlong *)(param_2 + 0xa8);
          lVar4 = lVar4 * 0x10;
          *(float *)(lVar3 + lVar4) = *(float *)(lVar3 + lVar4) - local_ac * fVar9;
          *(float *)(lVar3 + 4 + lVar4) = *(float *)(lVar3 + 4 + lVar4) - local_a8 * fVar9;
          *(float *)(lVar3 + 8 + lVar4) = *(float *)(lVar3 + 8 + lVar4) - fVar9 * local_a4;
          lVar3 = *(longlong *)(param_2 + 0x90);
        }
        fVar9 = *(float *)(lVar3 + lVar6 * 4);
        if ((fVar9 != 0.0) || (NAN(fVar9))) {
          fVar9 = fVar9 * fVar10 * *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4);
          lVar4 = *(longlong *)(param_2 + 0xa8);
          lVar6 = lVar6 * 0x10;
          *(float *)(lVar4 + lVar6) = local_ac * fVar9 + *(float *)(lVar4 + lVar6);
          *(float *)(lVar4 + 4 + lVar6) = local_a8 * fVar9 + *(float *)(lVar4 + 4 + lVar6);
          *(float *)(lVar4 + 8 + lVar6) = fVar9 * local_a4 + *(float *)(lVar4 + 8 + lVar6);
          lVar3 = *(longlong *)(param_2 + 0x90);
        }
        fVar9 = *(float *)(lVar3 + lVar5 * 4);
        if ((fVar9 != 0.0) || (NAN(fVar9))) {
          fVar9 = (1.0 - *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4)) * fVar10 * fVar9;
          lVar4 = *(longlong *)(param_2 + 0xa8);
          lVar5 = lVar5 * 0x10;
          *(float *)(lVar4 + lVar5) = local_ac * fVar9 + *(float *)(lVar4 + lVar5);
          *(float *)(lVar4 + 4 + lVar5) = local_a8 * fVar9 + *(float *)(lVar4 + 4 + lVar5);
          *(float *)(lVar4 + 8 + lVar5) = fVar9 * local_a4 + *(float *)(lVar4 + 8 + lVar5);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 3;
      } while (lVar8 < *(int *)(lVar2 + 0x10));
    }
  }
  else if (0 < *(int *)(lVar2 + 0x10)) {
    lVar7 = 2;
    lVar8 = 0;
    do {
      lVar5 = *(longlong *)(lVar2 + 8);
      local_c0 = *(float *)(*(longlong *)(lVar2 + 0x58) +
                           (ulonglong)*(byte *)(*(longlong *)(lVar2 + 0x48) + lVar8) * 4);
      lVar4 = (longlong)*(int *)(lVar5 + -8 + lVar7 * 4);
      lVar6 = (longlong)*(int *)(lVar5 + -4 + lVar7 * 4);
      lVar5 = (longlong)*(int *)(lVar5 + lVar7 * 4);
      local_c8 = (undefined4)lVar8;
      FUN_149800706(lVar2,&local_ac,param_2,uVar1);
      fVar11 = *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4);
      if (fVar11 <= 1.0 - fVar11) {
        fVar11 = 1.0 - fVar11;
      }
      fVar9 = 2.0 / (fVar11 + 1.0);
      lVar3 = *(longlong *)(param_2 + 0x90);
      fVar11 = *(float *)(lVar3 + lVar4 * 4);
      if (0.0 < fVar11) {
        fVar11 = fVar11 * fVar9;
        lVar3 = *(longlong *)(param_2 + 0xa8);
        lVar4 = lVar4 * 0x10;
        *(float *)(lVar3 + lVar4) = *(float *)(lVar3 + lVar4) - local_ac * fVar11;
        *(float *)(lVar3 + 4 + lVar4) = *(float *)(lVar3 + 4 + lVar4) - local_a8 * fVar11;
        *(float *)(lVar3 + 8 + lVar4) = *(float *)(lVar3 + 8 + lVar4) - fVar11 * local_a4;
        lVar3 = *(longlong *)(param_2 + 0x90);
      }
      fVar11 = *(float *)(lVar3 + lVar6 * 4);
      if ((fVar11 != 0.0) || (NAN(fVar11))) {
        fVar11 = fVar11 * fVar9 * *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4);
        lVar4 = *(longlong *)(param_2 + 0xa8);
        lVar6 = lVar6 * 0x10;
        *(float *)(lVar4 + lVar6) = local_ac * fVar11 + *(float *)(lVar4 + lVar6);
        *(float *)(lVar4 + 4 + lVar6) = local_a8 * fVar11 + *(float *)(lVar4 + 4 + lVar6);
        *(float *)(lVar4 + 8 + lVar6) = fVar11 * local_a4 + *(float *)(lVar4 + 8 + lVar6);
        lVar3 = *(longlong *)(param_2 + 0x90);
      }
      fVar11 = *(float *)(lVar3 + lVar5 * 4);
      if ((fVar11 != 0.0) || (NAN(fVar11))) {
        fVar11 = (1.0 - *(float *)(*(longlong *)(lVar2 + 0x20) + lVar8 * 4)) * fVar9 * fVar11;
        lVar4 = *(longlong *)(param_2 + 0xa8);
        lVar5 = lVar5 * 0x10;
        *(float *)(lVar4 + lVar5) = local_ac * fVar11 + *(float *)(lVar4 + lVar5);
        *(float *)(lVar4 + 4 + lVar5) = local_a8 * fVar11 + *(float *)(lVar4 + 4 + lVar5);
        *(float *)(lVar4 + 8 + lVar5) = fVar11 * local_a4 + *(float *)(lVar4 + 8 + lVar5);
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 3;
    } while (lVar8 < *(int *)(lVar2 + 0x10));
  }
  if ((local_a0 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144632b40 FUN_144632b40 body=29 status=ok
// SIG undefined FUN_144632b40(void)

undefined8 FUN_144632b40(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632b5e FUN_144632b5e body=452 status=ok
// SIG undefined FUN_144632b5e(void)

void FUN_144632b5e(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar1 = *param_3;
  lVar5 = *(longlong *)(*param_1 + 0xa0);
  iVar4 = *(int *)(*(longlong *)(*param_1 + 0x1b8) + 0x440);
  if (((*(float *)(lVar5 + 0x80) != fVar1) || (NAN(*(float *)(lVar5 + 0x80)) || NAN(fVar1))) ||
     (*(int *)(lVar5 + 0x84) != iVar4)) {
    *(float *)(lVar5 + 0x80) = fVar1;
    *(int *)(lVar5 + 0x84) = iVar4;
  }
  else if ((*(byte *)(lVar5 + 0x70) & 1) == 0) {
    return;
  }
  lVar7 = (longlong)*(int *)(lVar5 + 0x60);
  fVar10 = 1.0;
  if (1 < lVar7) {
    fVar10 = 1.0 / (float)(*(int *)(lVar5 + 0x60) + -1);
  }
  if (0 < lVar7) {
    fVar2 = *(float *)(lVar5 + 0x68);
    fVar3 = *(float *)(lVar5 + 0x6c);
    lVar6 = 0;
    do {
      fVar8 = (float)(int)lVar6 * fVar10 * (fVar3 - fVar2) + fVar2;
      if (fVar8 <= 1e-08) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = 1.0;
        if (fVar8 < 1.0) {
          fVar9 = *(float *)(lVar5 + 0x78);
          fVar8 = expf(fVar8 * *(float *)(lVar5 + 0x7c));
          fVar8 = logf(1.0 - (fVar8 + -1.0) / (fVar9 + -1.0));
          fVar9 = expf(fVar8 * ((fVar1 * 120.0) / (float)iVar4));
          fVar9 = 1.0 - fVar9;
        }
      }
      *(float *)(*(longlong *)(lVar5 + 0x58) + lVar6 * 4) = fVar9;
      lVar6 = lVar6 + 1;
    } while (lVar7 != lVar6);
  }
  *(undefined1 *)(lVar5 + 0x70) = 0;
  return;
}



// FUNCTION 144632d4c FUN_144632d4c body=29 status=ok
// SIG undefined FUN_144632d4c(void)

undefined8 FUN_144632d4c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632da8 FUN_144632da8 body=29 status=ok
// SIG undefined FUN_144632da8(void)

undefined8 FUN_144632da8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632e06 FUN_144632e06 body=29 status=ok
// SIG undefined FUN_144632e06(void)

undefined8 FUN_144632e06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632e62 FUN_144632e62 body=29 status=ok
// SIG undefined FUN_144632e62(void)

undefined8 FUN_144632e62(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632ed0 FUN_144632ed0 body=29 status=ok
// SIG undefined FUN_144632ed0(void)

undefined8 FUN_144632ed0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144632eee FUN_144632eee body=762 status=ok
// SIG undefined FUN_144632eee(void)

void FUN_144632eee(longlong *param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar10 = *param_3;
  lVar3 = *(longlong *)(*param_1 + 0xf0);
  iVar2 = *(int *)(*(longlong *)(*param_1 + 0x1b8) + 0x440);
  fVar9 = (fVar10 * 120.0) / (float)iVar2;
  if (((*(float *)(lVar3 + 0x58) != fVar10) || (NAN(*(float *)(lVar3 + 0x58)) || NAN(fVar10))) ||
     (*(int *)(lVar3 + 0x5c) != iVar2)) {
    *(float *)(lVar3 + 0x58) = fVar10;
    *(int *)(lVar3 + 0x5c) = iVar2;
  }
  else if ((*(byte *)(lVar3 + 0x48) & 1) == 0) goto LAB_144633075;
  lVar5 = (longlong)*(int *)(lVar3 + 0x38);
  fVar11 = 1.0;
  if (1 < lVar5) {
    fVar11 = 1.0 / (float)(*(int *)(lVar3 + 0x38) + -1);
  }
  if (0 < lVar5) {
    fVar1 = *(float *)(lVar3 + 0x40);
    fVar6 = *(float *)(lVar3 + 0x44);
    lVar4 = 0;
    do {
      fVar8 = (float)(int)lVar4 * fVar11 * (fVar6 - fVar1) + fVar1;
      if (fVar8 <= 1e-08) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 1.0;
        if (fVar8 < 1.0) {
          fVar7 = *(float *)(lVar3 + 0x50);
          fVar8 = expf(fVar8 * *(float *)(lVar3 + 0x54));
          fVar8 = logf(1.0 - (fVar8 + -1.0) / (fVar7 + -1.0));
          fVar7 = expf(fVar8 * fVar9);
          fVar7 = 1.0 - fVar7;
        }
      }
      *(float *)(*(longlong *)(lVar3 + 0x30) + lVar4 * 4) = fVar7;
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  *(undefined1 *)(lVar3 + 0x48) = 0;
LAB_144633075:
  if (((*(float *)(lVar3 + 0xa0) != fVar10) || (NAN(*(float *)(lVar3 + 0xa0)) || NAN(fVar10))) ||
     (*(int *)(lVar3 + 0xa4) != iVar2)) {
    *(float *)(lVar3 + 0xa0) = fVar10;
    *(int *)(lVar3 + 0xa4) = iVar2;
  }
  else if ((*(byte *)(lVar3 + 0x90) & 1) == 0) {
    return;
  }
  lVar5 = (longlong)*(int *)(lVar3 + 0x80);
  fVar10 = 1.0;
  if (1 < lVar5) {
    fVar10 = 1.0 / (float)(*(int *)(lVar3 + 0x80) + -1);
  }
  if (0 < lVar5) {
    fVar11 = *(float *)(lVar3 + 0x88);
    fVar1 = *(float *)(lVar3 + 0x8c);
    lVar4 = 0;
    do {
      fVar6 = (float)(int)lVar4 * fVar10 * (fVar1 - fVar11) + fVar11;
      if (fVar6 <= 1e-08) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = 1.0;
        if (fVar6 < 1.0) {
          fVar8 = *(float *)(lVar3 + 0x98);
          fVar6 = expf(fVar6 * *(float *)(lVar3 + 0x9c));
          fVar6 = logf(1.0 - (fVar6 + -1.0) / (fVar8 + -1.0));
          fVar8 = expf(fVar6 * fVar9);
          fVar8 = 1.0 - fVar8;
        }
      }
      *(float *)(*(longlong *)(lVar3 + 0x78) + lVar4 * 4) = fVar8;
      lVar4 = lVar4 + 1;
    } while (lVar5 != lVar4);
  }
  *(undefined1 *)(lVar3 + 0x90) = 0;
  return;
}



// FUNCTION 144633212 FUN_144633212 body=29 status=ok
// SIG undefined FUN_144633212(void)

undefined8 FUN_144633212(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633230 FUN_144633230 body=731 status=ok
// SIG undefined FUN_144633230(void)

void FUN_144633230(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 local_78;
  undefined4 *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined8 **local_38;
  longlong local_30;
  undefined4 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined1 local_c [12];
  
  local_c._4_8_ = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_c._0_4_ = *param_3;
  local_80 = *(undefined8 **)(*param_1 + 0xf0);
  if ((*(int *)(local_80 + 7) < 2) ||
     (ABS(*(float *)(local_80 + 8) - *(float *)((longlong)local_80 + 0x44)) <= 0.0001)) {
    local_44 = *(undefined4 *)local_80[6];
    if ((*(int *)(local_80 + 0x10) < 2) ||
       (ABS(*(float *)(local_80 + 0x11) - *(float *)((longlong)local_80 + 0x8c)) <= 0.0001)) {
      local_48 = *(undefined4 *)local_80[0xf];
      local_68 = (longlong *)&local_48;
      local_18 = *(undefined4 *)((longlong)local_80 + 0x14);
      local_20 = *(longlong *)*local_80 + (longlong)*(int *)(local_80 + 2) * 0xc;
      local_58 = &local_20;
      local_30 = (longlong)*(int *)(local_80 + 2) * 0xc + *(longlong *)local_80[1];
      local_50 = &local_30;
      local_70 = &local_44;
      local_60 = (longlong *)local_c;
      local_40 = FUN_144b3d0ea;
    }
    else {
      local_18 = *(undefined4 *)((longlong)local_80 + 0x14);
      local_20 = *(longlong *)*local_80 + (longlong)*(int *)(local_80 + 2) * 0xc;
      local_60 = &local_20;
      local_30 = (longlong)*(int *)(local_80 + 2) * 0xc + *(longlong *)local_80[1];
      local_58 = &local_30;
      local_70 = &local_44;
      local_68 = (longlong *)local_c;
      local_40 = (code *)&LAB_149800ae0;
    }
  }
  else if ((*(int *)(local_80 + 0x10) < 2) ||
          (ABS(*(float *)(local_80 + 0x11) - *(float *)((longlong)local_80 + 0x8c)) <= 0.0001)) {
    local_18 = *(undefined4 *)((longlong)local_80 + 0x14);
    local_20 = *(longlong *)*local_80 + (longlong)*(int *)(local_80 + 2) * 0xc;
    local_60 = &local_20;
    local_30 = (longlong)*(int *)(local_80 + 2) * 0xc + *(longlong *)local_80[1];
    local_58 = &local_30;
    local_70 = (undefined4 *)CONCAT44(local_70._4_4_,*(undefined4 *)local_80[0xf]);
    local_68 = (longlong *)local_c;
    local_40 = FUN_144633554;
  }
  else {
    local_18 = *(undefined4 *)((longlong)local_80 + 0x14);
    local_20 = *(longlong *)*local_80 + (longlong)*(int *)(local_80 + 2) * 0xc;
    local_68 = &local_20;
    local_30 = (longlong)*(int *)(local_80 + 2) * 0xc + *(longlong *)local_80[1];
    local_60 = &local_30;
    local_70 = (undefined4 *)local_c;
    local_40 = (code *)&LAB_149800922;
  }
  local_38 = &local_80;
  local_78 = param_2;
  local_28 = local_18;
  FUN_1400bd65e(local_18,&local_40,0);
  if ((local_c._4_8_ ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144633536 FUN_144633536 body=29 status=ok
// SIG undefined FUN_144633536(void)

undefined8 FUN_144633536(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633554 FUN_144633554 body=366 status=ok
// SIG undefined FUN_144633554(void)

void FUN_144633554(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar12 = (longlong)*param_2;
  lVar7 = *param_1;
  lVar8 = param_1[1];
  lVar13 = *(int *)(lVar7 + 0x10) + lVar12;
  fVar1 = *(float *)(*(longlong *)(lVar8 + 0x90) + lVar13 * 4);
  if ((fVar1 != 0.0) || (NAN(fVar1))) {
    fVar1 = *(float *)(param_1 + 2);
    fVar2 = *(float *)param_1[3];
    lVar9 = *(longlong *)param_1[4];
    lVar11 = lVar12 * 0xc;
    lVar10 = *(longlong *)param_1[5];
    fVar3 = *(float *)(*(longlong *)(lVar7 + 0x30) +
                      (ulonglong)*(byte *)(*(longlong *)(lVar7 + 0x20) + lVar12) * 4);
    lVar7 = *(longlong *)(lVar8 + 0xa8);
    lVar12 = lVar13 * 0x10;
    fVar14 = *(float *)(lVar7 + 8 + lVar12);
    fVar4 = *(float *)(lVar9 + 8 + lVar11);
    fVar15 = *(float *)(lVar7 + 4 + lVar12);
    fVar5 = *(float *)(lVar9 + 4 + lVar11);
    fVar16 = *(float *)(lVar7 + lVar12) -
             (*(float *)(lVar7 + lVar12) - *(float *)(lVar9 + lVar11)) * fVar3;
    *(float *)(lVar7 + lVar12) = fVar16;
    fVar15 = fVar15 - (fVar15 - fVar5) * fVar3;
    *(float *)(lVar7 + 4 + lVar12) = fVar15;
    fVar14 = fVar14 - (fVar14 - fVar4) * fVar3;
    *(float *)(lVar7 + 8 + lVar12) = fVar14;
    lVar8 = *(longlong *)(lVar8 + 0x28);
    fVar3 = *(float *)(lVar8 + 8 + lVar13 * 0xc);
    fVar4 = *(float *)(lVar8 + 4 + lVar13 * 0xc);
    fVar5 = *(float *)(lVar10 + 8 + lVar11);
    fVar6 = *(float *)(lVar10 + 4 + lVar11);
    *(float *)(lVar7 + lVar12) =
         fVar16 - ((fVar16 - *(float *)(lVar8 + lVar13 * 0xc)) - fVar2 * *(float *)(lVar10 + lVar11)
                  ) * fVar1;
    *(float *)(lVar7 + 4 + lVar12) = fVar15 - ((fVar15 - fVar4) - fVar6 * fVar2) * fVar1;
    *(float *)(lVar7 + 8 + lVar12) = fVar14 - ((fVar14 - fVar3) - fVar5 * fVar2) * fVar1;
  }
  return;
}



// FUNCTION 1446336c2 FUN_1446336c2 body=67 status=ok
// SIG undefined FUN_1446336c2(void)

void FUN_1446336c2(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)*param_1;
  if (0 < *(int *)(*(longlong *)(lVar1 + 8) + 8)) {
    iVar2 = *(int *)(lVar1 + 0x10);
    do {
      FUN_149800b5a(lVar1,param_2,iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(*(longlong *)(lVar1 + 8) + 8) + *(int *)(lVar1 + 0x10));
  }
  return;
}



// FUNCTION 144633730 FUN_144633730 body=29 status=ok
// SIG undefined FUN_144633730(void)

undefined8 FUN_144633730(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463374e FUN_14463374e body=246 status=ok
// SIG undefined FUN_14463374e(void)

void FUN_14463374e(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  if (*(char *)(lVar2 + 500) == '\0') {
    uVar1 = *param_3;
    FUN_1429d676e(*(undefined8 *)(lVar2 + 0x100));
    lVar3 = *(longlong *)(lVar2 + 0x100);
    local_50 = lVar3 + 0x4d0;
    if ((*(char *)(lVar3 + 0x2e9) == '\x01') && (*(int *)(lVar3 + 0x4c8) == *(int *)(lVar3 + 0x2e4))
       ) {
      local_38 = *(int *)(lVar3 + 0x4c8) + *(int *)(lVar3 + 0x2e0);
      local_40 = *(longlong *)(lVar3 + 0x4c0) + (longlong)*(int *)(lVar3 + 0x2e0) * -8;
    }
    else {
      local_40 = 0;
      local_38 = 0;
    }
    local_58 = &local_40;
    local_60 = lVar3 + 0x428;
    local_68 = lVar3 + 0x3a0;
    FUN_1429baf60(*(undefined8 *)(lVar2 + 0x110),param_2,uVar1,lVar3 + 8);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144633870 FUN_144633870 body=29 status=ok
// SIG undefined FUN_144633870(void)

undefined8 FUN_144633870(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446338cc FUN_1446338cc body=29 status=ok
// SIG undefined FUN_1446338cc(void)

undefined8 FUN_1446338cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463392e FUN_14463392e body=29 status=ok
// SIG undefined FUN_14463392e(void)

undefined8 FUN_14463392e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463398a FUN_14463398a body=29 status=ok
// SIG undefined FUN_14463398a(void)

undefined8 FUN_14463398a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446339fe FUN_1446339fe body=29 status=ok
// SIG undefined FUN_1446339fe(void)

undefined8 FUN_1446339fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633a1c FUN_144633a1c body=119 status=ok
// SIG undefined FUN_144633a1c(void)

void FUN_144633a1c(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 500) == '\0') &&
     (iVar3 = *(int *)(*(longlong *)(lVar2 + 0x100) + 0x2ec), 0 < iVar3)) {
    uVar1 = *param_3;
    do {
      FUN_1429d947c(*(undefined8 *)(lVar2 + 0x100),param_2);
      FUN_1429e069a(*(undefined8 *)(lVar2 + 0x120),param_2,*(longlong *)(lVar2 + 0x100) + 0x508,
                    uVar1);
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



// FUNCTION 144633abe FUN_144633abe body=29 status=ok
// SIG undefined FUN_144633abe(void)

undefined8 FUN_144633abe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633adc FUN_144633adc body=72 status=ok
// SIG undefined FUN_144633adc(void)

void FUN_144633adc(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  
  uVar1 = *param_3;
  lVar2 = *param_1;
  FUN_140fb5a3a(*(undefined8 *)(lVar2 + 0xc0),uVar1,1);
  FUN_1429c030c(*(undefined8 *)(lVar2 + 0xc0),param_2,uVar1);
  return;
}



// FUNCTION 144633b4e FUN_144633b4e body=29 status=ok
// SIG undefined FUN_144633b4e(void)

undefined8 FUN_144633b4e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633b6c FUN_144633b6c body=29 status=ok
// SIG undefined FUN_144633b6c(void)

undefined8 FUN_144633b6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633b9e FUN_144633b9e body=101 status=ok
// SIG undefined FUN_144633b9e(void)

void FUN_144633b9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144633c04 FUN_144633c04 body=101 status=ok
// SIG undefined FUN_144633c04(void)

void FUN_144633c04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86960;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 144633c6a FUN_144633c6a body=134 status=ok
// SIG undefined FUN_144633c6a(void)

void FUN_144633c6a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86960;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144633ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144633cf0 FUN_144633cf0 body=77 status=ok
// SIG undefined FUN_144633cf0(void)

void FUN_144633cf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144633d8e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144633d3e FUN_144633d3e body=79 status=ok
// SIG undefined FUN_144633d3e(void)

undefined8 FUN_144633d3e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144633d8e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144633d8e FUN_144633d8e body=282 status=ok
// SIG undefined FUN_144633d8e(void)

void FUN_144633d8e(longlong param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(local_48,L"EdgeSpringStiffness");
  FUN_1498026b0(uVar2,local_48,param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(local_48,L"BendingSpringStiffness");
  FUN_1498026b0(uVar2,local_48,param_1 + 8);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar4 = 0;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"AreaSpringStiffness");
  FUN_1498026b0(uVar2,local_48,param_1 + 0x10);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144633eaa FUN_144633eaa body=29 status=ok
// SIG undefined FUN_144633eaa(void)

undefined8 FUN_144633eaa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144633edc FUN_144633edc body=109 status=ok
// SIG undefined FUN_144633edc(void)

void FUN_144633edc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar6;
  return;
}



// FUNCTION 144633f4a FUN_144633f4a body=109 status=ok
// SIG undefined FUN_144633f4a(void)

void FUN_144633f4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((int)param_2[1] != 5) {
    FUN_1446efa72(param_2,0,5,0x10);
    *(undefined4 *)(param_2 + 1) = 5;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86a40;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  puVar1[7] = uVar5;
  puVar1[8] = uVar6;
  return;
}



// FUNCTION 144633fb8 FUN_144633fb8 body=142 status=ok
// SIG undefined FUN_144633fb8(void)

void FUN_144633fb8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 5) {
    FUN_1446efa72(param_2 + 1,0,5,0x10);
    param_2[1].LockCount = 5;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86a40;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  uVar9 = *(undefined4 *)(param_1 + 0x38);
  uVar10 = *(undefined4 *)(param_1 + 0x3c);
  uVar11 = *(undefined4 *)(param_1 + 0x40);
  uVar12 = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  *(undefined4 *)&p_Var1[1].CriticalSection = uVar9;
  *(undefined4 *)((longlong)&p_Var1[1].CriticalSection + 4) = uVar10;
  *(undefined4 *)&p_Var1[1].ProcessLocksList.Flink = uVar11;
  *(undefined4 *)((longlong)&p_Var1[1].ProcessLocksList.Flink + 4) = uVar12;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144634037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144634046 FUN_144634046 body=77 status=ok
// SIG undefined FUN_144634046(void)

void FUN_144634046(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446340e4(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634094 FUN_144634094 body=79 status=ok
// SIG undefined FUN_144634094(void)

undefined8 FUN_144634094(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446340e4(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446340e4 FUN_1446340e4 body=357 status=ok
// SIG undefined FUN_1446340e4(void)

void FUN_1446340e4(double *param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  local_3c = (float)param_1[1];
  local_40 = (float)*param_1;
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(local_50,L"EdgeSpringStiffness");
  FUN_1498026b0(uVar2,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  local_3c = (float)param_1[3];
  local_40 = (float)param_1[2];
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(local_50,L"BendingSpringStiffness");
  FUN_1498026b0(uVar2,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar4 = 0;
  }
  local_3c = (float)param_1[5];
  local_40 = (float)param_1[4];
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(local_50,L"AreaSpringStiffness");
  FUN_1498026b0(uVar2,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463424a FUN_14463424a body=29 status=ok
// SIG undefined FUN_14463424a(void)

undefined8 FUN_14463424a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463427c FUN_14463427c body=101 status=ok
// SIG undefined FUN_14463427c(void)

void FUN_14463427c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1446342e2 FUN_1446342e2 body=101 status=ok
// SIG undefined FUN_1446342e2(void)

void FUN_1446342e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ab0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144634348 FUN_144634348 body=134 status=ok
// SIG undefined FUN_144634348(void)

void FUN_144634348(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86ab0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446343bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446343ce FUN_1446343ce body=77 status=ok
// SIG undefined FUN_1446343ce(void)

void FUN_1446343ce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463446c(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463441c FUN_14463441c body=79 status=ok
// SIG undefined FUN_14463441c(void)

undefined8 FUN_14463441c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463446c(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463446c FUN_14463446c body=247 status=ok
// SIG undefined FUN_14463446c(void)

void FUN_14463446c(double *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  local_50 = (float)*param_1;
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"BucklingRatio");
  FUN_1498027d6(uVar3,local_48,&local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  local_4c = (float)param_1[3];
  local_50 = (float)param_1[2];
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"BucklingStiffness");
  FUN_1498026b0(uVar3,local_48,&local_50);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634564 FUN_144634564 body=29 status=ok
// SIG undefined FUN_144634564(void)

undefined8 FUN_144634564(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144634596 FUN_144634596 body=99 status=ok
// SIG undefined FUN_144634596(void)

void FUN_144634596(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1446345fa FUN_1446345fa body=99 status=ok
// SIG undefined FUN_1446345fa(void)

void FUN_1446345fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86b20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
  return;
}



// FUNCTION 14463465e FUN_14463465e body=132 status=ok
// SIG undefined FUN_14463465e(void)

void FUN_14463465e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86b20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = *(DWORD *)(param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446346d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446346e2 FUN_1446346e2 body=77 status=ok
// SIG undefined FUN_1446346e2(void)

void FUN_1446346e2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634780(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634730 FUN_144634730 body=79 status=ok
// SIG undefined FUN_144634730(void)

undefined8 FUN_144634730(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634780(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634780 FUN_144634780 body=218 status=ok
// SIG undefined FUN_144634780(void)

void FUN_144634780(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_40,L"TetherStiffness");
  FUN_1498026b0(uVar3,local_40,param_1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  local_48 = *(undefined4 *)(param_1 + 8);
  local_44 = local_48;
  FUN_140056680(local_40,L"TetherScale");
  FUN_1498026b0(uVar3,local_40,&local_48);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463485c FUN_14463485c body=29 status=ok
// SIG undefined FUN_14463485c(void)

undefined8 FUN_14463485c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463488e FUN_14463488e body=101 status=ok
// SIG undefined FUN_14463488e(void)

void FUN_14463488e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1446348f4 FUN_1446348f4 body=101 status=ok
// SIG undefined FUN_1446348f4(void)

void FUN_1446348f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86b90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14463495a FUN_14463495a body=134 status=ok
// SIG undefined FUN_14463495a(void)

void FUN_14463495a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86b90;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446349d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446349e0 FUN_1446349e0 body=77 status=ok
// SIG undefined FUN_1446349e0(void)

void FUN_1446349e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634a7e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634a2e FUN_144634a2e body=79 status=ok
// SIG undefined FUN_144634a2e(void)

undefined8 FUN_144634a2e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634a7e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634a7e FUN_144634a7e body=260 status=ok
// SIG undefined FUN_144634a7e(void)

void FUN_144634a7e(double *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  local_3c = (float)param_1[1];
  local_40 = (float)*param_1;
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_50,L"TetherStiffness");
  FUN_1498026b0(uVar3,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  local_3c = (float)param_1[3];
  local_40 = (float)param_1[2];
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_50,L"TetherScale");
  FUN_1498026b0(uVar3,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634b84 FUN_144634b84 body=29 status=ok
// SIG undefined FUN_144634b84(void)

undefined8 FUN_144634b84(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144634bb6 FUN_144634bb6 body=93 status=ok
// SIG undefined FUN_144634bb6(void)

void FUN_144634bb6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144634c14 FUN_144634c14 body=93 status=ok
// SIG undefined FUN_144634c14(void)

void FUN_144634c14(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86c00;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144634c72 FUN_144634c72 body=126 status=ok
// SIG undefined FUN_144634c72(void)

void FUN_144634c72(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86c00;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144634ce1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144634cf0 FUN_144634cf0 body=77 status=ok
// SIG undefined FUN_144634cf0(void)

void FUN_144634cf0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634d8e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634d3e FUN_144634d3e body=79 status=ok
// SIG undefined FUN_144634d3e(void)

undefined8 FUN_144634d3e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144634d8e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634d8e FUN_144634d8e body=367 status=ok
// SIG undefined FUN_144634d8e(void)

void FUN_144634d8e(longlong param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar1 == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"CollisionThickness");
  FUN_1498027d6(uVar2,local_48,param_1);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  if (*pcVar1 == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"FrictionCoefficient");
  FUN_1498027d6(uVar2,local_48,param_1 + 4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  if (*pcVar1 == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(local_48,L"UseCCD");
  iVar3 = FUN_144a41c6c(uVar2,local_48);
  if (iVar3 != -1) {
    FUN_149802874(uVar2,iVar3,param_1 + 8);
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar5 = 0;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar5 * 8);
  FUN_140056680(local_48,L"SelfCollisionThickness");
  FUN_1498027d6(uVar2,local_48,param_1 + 0xc);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144634efe FUN_144634efe body=29 status=ok
// SIG undefined FUN_144634efe(void)

undefined8 FUN_144634efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144634f30 FUN_144634f30 body=91 status=ok
// SIG undefined FUN_144634f30(void)

void FUN_144634f30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86c70;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144634f8c FUN_144634f8c body=91 status=ok
// SIG undefined FUN_144634f8c(void)

void FUN_144634f8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86c70;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144634fe8 FUN_144634fe8 body=124 status=ok
// SIG undefined FUN_144634fe8(void)

void FUN_144634fe8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86c70;
  *(undefined1 *)&(p_Var1->ProcessLocksList).Blink = *(undefined1 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144635055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144635064 FUN_144635064 body=77 status=ok
// SIG undefined FUN_144635064(void)

void FUN_144635064(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635102(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446350b2 FUN_1446350b2 body=79 status=ok
// SIG undefined FUN_1446350b2(void)

undefined8 FUN_1446350b2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635102(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635102 FUN_144635102 body=181 status=ok
// SIG undefined FUN_144635102(void)

void FUN_144635102(char *param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  byte *pbVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = (char *)*param_2;
  if (*pcVar2 == '\x01') {
    plVar6 = *(longlong **)(pcVar2 + 0x18);
  }
  else {
    plVar6 = (longlong *)((longlong)*param_3 * 8 + *(longlong *)(pcVar2 + 0x18));
  }
  lVar3 = *plVar6;
  cVar1 = *param_1;
  FUN_140056680(local_30,L"BackstopRadius");
  iVar5 = FUN_144a41c6c(lVar3,local_30);
  if (iVar5 != -1) {
    lVar8 = (longlong)iVar5;
    bVar4 = *(byte *)(*(longlong *)(lVar3 + 0x48) + lVar8);
    pbVar7 = (byte *)(*(longlong *)(lVar3 + 0x48) + lVar8);
    if (cVar1 == '\0') {
      if ((bVar4 & 1) == 0) goto LAB_144635175;
      *pbVar7 = bVar4 & 0xfe;
      pbVar7 = (byte *)(*(longlong *)(lVar3 + 0x48) + lVar8);
      bVar4 = *(byte *)(*(longlong *)(lVar3 + 0x48) + lVar8);
    }
    else {
      if ((bVar4 & 1) != 0) goto LAB_144635175;
      bVar4 = bVar4 | 1;
    }
    *pbVar7 = bVar4 | 0x80;
  }
LAB_144635175:
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446351b8 FUN_1446351b8 body=29 status=ok
// SIG undefined FUN_1446351b8(void)

undefined8 FUN_1446351b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446351ea FUN_1446351ea body=93 status=ok
// SIG undefined FUN_1446351ea(void)

void FUN_1446351ea(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144635248 FUN_144635248 body=93 status=ok
// SIG undefined FUN_144635248(void)

void FUN_144635248(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ce0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446352a6 FUN_1446352a6 body=126 status=ok
// SIG undefined FUN_1446352a6(void)

void FUN_1446352a6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86ce0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144635315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144635324 FUN_144635324 body=77 status=ok
// SIG undefined FUN_144635324(void)

void FUN_144635324(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446353c2(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635372 FUN_144635372 body=79 status=ok
// SIG undefined FUN_144635372(void)

undefined8 FUN_144635372(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446353c2(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446353c2 FUN_1446353c2 body=203 status=ok
// SIG undefined FUN_1446353c2(void)

void FUN_1446353c2(longlong param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_40,L"DampingCoefficient");
  FUN_1498027d6(uVar3,local_40,param_1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_40,L"LocalDampingCoefficient");
  FUN_1498027d6(uVar3,local_40,param_1 + 4);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463548e FUN_14463548e body=29 status=ok
// SIG undefined FUN_14463548e(void)

undefined8 FUN_14463548e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446354c0 FUN_1446354c0 body=101 status=ok
// SIG undefined FUN_1446354c0(void)

void FUN_1446354c0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144635526 FUN_144635526 body=101 status=ok
// SIG undefined FUN_144635526(void)

void FUN_144635526(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86d50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14463558c FUN_14463558c body=134 status=ok
// SIG undefined FUN_14463558c(void)

void FUN_14463558c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86d50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144635603. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144635612 FUN_144635612 body=77 status=ok
// SIG undefined FUN_144635612(void)

void FUN_144635612(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446356b0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635660 FUN_144635660 body=79 status=ok
// SIG undefined FUN_144635660(void)

undefined8 FUN_144635660(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446356b0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446356b0 FUN_1446356b0 body=454 status=ok
// SIG undefined FUN_1446356b0(void)

void FUN_1446356b0(undefined4 *param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  longlong local_48;
  float *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  local_4c = 0x3f9ccccd;
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  local_68 = *param_1;
  uStack_64 = local_68;
  FUN_140056680(&local_48,L"Drag");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  local_68 = param_1[1];
  uStack_64 = local_68;
  FUN_140056680(&local_48,L"Lift");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"FluidDensity");
  FUN_1498027d6(uVar2,&local_48,&local_4c);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar4 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  local_50 = (float)*(double *)(param_1 + 6) * 0.01;
  local_54 = (float)*(double *)(param_1 + 4) * 0.01;
  local_58 = (float)*(double *)(param_1 + 2) * 0.01;
  FUN_140056680(&local_68,L"WindVelocity");
  local_48 = lVar3;
  local_40 = &local_58;
  FUN_14980290e(lVar3,&local_68);
  if (CONCAT44(uStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635878 FUN_144635878 body=29 status=ok
// SIG undefined FUN_144635878(void)

undefined8 FUN_144635878(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446358aa FUN_1446358aa body=101 status=ok
// SIG undefined FUN_1446358aa(void)

void FUN_1446358aa(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14be869d0;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_14be86dc0;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar3 + 3;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 144635910 FUN_144635910 body=101 status=ok
// SIG undefined FUN_144635910(void)

void FUN_144635910(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if ((int)param_2[1] != 8) {
    FUN_1446efa72(param_2,0,8,0x10);
    *(undefined4 *)(param_2 + 1) = 8;
  }
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14be869d0;
  puVar3[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar3 = &PTR_FUN_14be86dc0;
  puVar2 = (undefined8 *)(param_1 + 0x18);
  puVar3 = puVar3 + 3;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}



// FUNCTION 144635976 FUN_144635976 body=137 status=ok
// SIG undefined FUN_144635976(void)

void FUN_144635976(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 *puVar3;
  _LIST_ENTRY **pp_Var4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 8) {
    FUN_1446efa72(param_2 + 1,0,8,0x10);
    param_2[1].LockCount = 8;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86dc0;
  puVar3 = (undefined8 *)(param_1 + 0x18);
  pp_Var4 = &(p_Var1->ProcessLocksList).Blink;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pp_Var4 = (_LIST_ENTRY *)*puVar3;
    puVar3 = puVar3 + 1;
    pp_Var4 = pp_Var4 + 1;
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446359ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144635a00 FUN_144635a00 body=77 status=ok
// SIG undefined FUN_144635a00(void)

void FUN_144635a00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635a9e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635a4e FUN_144635a4e body=79 status=ok
// SIG undefined FUN_144635a4e(void)

undefined8 FUN_144635a4e(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635a9e(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635a9e FUN_144635a9e body=679 status=ok
// SIG undefined FUN_144635a9e(void)

void FUN_144635a9e(double *param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  float local_68;
  float fStack_64;
  float local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  float *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  fStack_64 = (float)param_1[1];
  local_68 = (float)*param_1;
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"Drag");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  fStack_64 = (float)param_1[9];
  local_68 = (float)param_1[8];
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"OuterDrag");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  fStack_64 = (float)param_1[3];
  local_68 = (float)param_1[2];
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"Lift");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  fStack_64 = (float)param_1[0xb];
  local_68 = (float)param_1[10];
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"OuterLift");
  FUN_1498026b0(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  local_68 = *(float *)(param_1 + 4) * 1e+06;
  FUN_140056680(&local_48,L"FluidDensity");
  FUN_1498027d6(uVar2,&local_48,&local_68);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar4 = 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  local_4c = (float)param_1[7] * 0.01;
  local_50 = (float)param_1[6] * 0.01;
  local_54 = (float)param_1[5] * 0.01;
  FUN_140056680(&local_68,L"WindVelocity");
  local_48 = lVar3;
  local_40 = &local_54;
  FUN_14980290e(lVar3,&local_68);
  if (CONCAT44(fStack_64,local_68) != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635d46 FUN_144635d46 body=29 status=ok
// SIG undefined FUN_144635d46(void)

undefined8 FUN_144635d46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144635d78 FUN_144635d78 body=93 status=ok
// SIG undefined FUN_144635d78(void)

void FUN_144635d78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144635dd6 FUN_144635dd6 body=93 status=ok
// SIG undefined FUN_144635dd6(void)

void FUN_144635dd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86e30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 144635e34 FUN_144635e34 body=126 status=ok
// SIG undefined FUN_144635e34(void)

void FUN_144635e34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86e30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144635ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144635eb2 FUN_144635eb2 body=77 status=ok
// SIG undefined FUN_144635eb2(void)

void FUN_144635eb2(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635f50(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635f00 FUN_144635f00 body=79 status=ok
// SIG undefined FUN_144635f00(void)

undefined8 FUN_144635f00(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144635f50(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635f50 FUN_144635f50 body=150 status=ok
// SIG undefined FUN_144635f50(void)

void FUN_144635f50(double *param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x01') {
    puVar3 = *(undefined8 **)(pcVar1 + 0x18);
  }
  else {
    puVar3 = (undefined8 *)((longlong)*param_3 * 8 + *(longlong *)(pcVar1 + 0x18));
  }
  local_24 = (float)param_1[1];
  local_28 = (float)*param_1;
  uVar2 = *puVar3;
  FUN_140056680(local_38,L"Pressure");
  FUN_1498026b0(uVar2,local_38,&local_28);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144635fe8 FUN_144635fe8 body=29 status=ok
// SIG undefined FUN_144635fe8(void)

undefined8 FUN_144635fe8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463601a FUN_14463601a body=101 status=ok
// SIG undefined FUN_14463601a(void)

void FUN_14463601a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144636080 FUN_144636080 body=101 status=ok
// SIG undefined FUN_144636080(void)

void FUN_144636080(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ea0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 1446360e6 FUN_1446360e6 body=134 status=ok
// SIG undefined FUN_1446360e6(void)

void FUN_1446360e6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86ea0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014463615d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14463616c FUN_14463616c body=77 status=ok
// SIG undefined FUN_14463616c(void)

void FUN_14463616c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463620a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446361ba FUN_1446361ba body=79 status=ok
// SIG undefined FUN_1446361ba(void)

undefined8 FUN_1446361ba(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463620a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463620a FUN_14463620a body=325 status=ok
// SIG undefined FUN_14463620a(void)

void FUN_14463620a(longlong param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [40];
  longlong local_60 [2];
  float local_4c;
  float local_48;
  float local_44;
  longlong local_40;
  float *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar5 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar1 == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(&local_40,L"GravityScale");
  FUN_1498027d6(uVar2,&local_40,param_1);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar4 = 0;
  if (*pcVar1 == '\0') {
    lVar4 = lVar5;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(&local_40,L"UseGravityOverride");
  iVar3 = FUN_144a41c6c(uVar2,&local_40);
  if (iVar3 != -1) {
    FUN_149802874(uVar2,iVar3,param_1 + 4);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar5 = 0;
  }
  local_44 = (float)*(double *)(param_1 + 0x18);
  local_48 = (float)*(double *)(param_1 + 0x10);
  lVar4 = *(longlong *)(*(longlong *)(pcVar1 + 0x18) + lVar5 * 8);
  local_4c = (float)*(double *)(param_1 + 8);
  FUN_140056680(local_60,L"GravityOverride");
  local_40 = lVar4;
  local_38 = &local_4c;
  FUN_14980290e(lVar4,local_60);
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636350 FUN_144636350 body=29 status=ok
// SIG undefined FUN_144636350(void)

undefined8 FUN_144636350(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144636382 FUN_144636382 body=93 status=ok
// SIG undefined FUN_144636382(void)

void FUN_144636382(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86f10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446363e0 FUN_1446363e0 body=93 status=ok
// SIG undefined FUN_1446363e0(void)

void FUN_1446363e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86f10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14463643e FUN_14463643e body=126 status=ok
// SIG undefined FUN_14463643e(void)

void FUN_14463643e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86f10;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446364ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446364bc FUN_1446364bc body=77 status=ok
// SIG undefined FUN_1446364bc(void)

void FUN_1446364bc(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463655a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463650a FUN_14463650a body=79 status=ok
// SIG undefined FUN_14463650a(void)

undefined8 FUN_14463650a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_14463655a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463655a FUN_14463655a body=299 status=ok
// SIG undefined FUN_14463655a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463655a(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  longlong local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27354) {
    FUN_144b3d300(&DAT_14cc27354);
    if (DAT_14cc27354 == -1) {
      _DAT_14cc2734c = 0x3f80000000000000;
      _Init_thread_footer(&DAT_14cc27354);
    }
  }
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_40,L"AnimDriveStiffness");
  FUN_1498026b0(uVar3,local_40,param_1);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_40,L"AnimDriveDamping");
  FUN_1498026b0(uVar3,local_40,&DAT_14cc2734c);
  if (local_40[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636686 FUN_144636686 body=29 status=ok
// SIG undefined FUN_144636686(void)

undefined8 FUN_144636686(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446366b8 FUN_1446366b8 body=101 status=ok
// SIG undefined FUN_1446366b8(void)

void FUN_1446366b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 14463671e FUN_14463671e body=101 status=ok
// SIG undefined FUN_14463671e(void)

void FUN_14463671e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86f80;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144636784 FUN_144636784 body=134 status=ok
// SIG undefined FUN_144636784(void)

void FUN_144636784(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86f80;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446367fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14463680a FUN_14463680a body=77 status=ok
// SIG undefined FUN_14463680a(void)

void FUN_14463680a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446368a8(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636858 FUN_144636858 body=79 status=ok
// SIG undefined FUN_144636858(void)

undefined8 FUN_144636858(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446368a8(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446368a8 FUN_1446368a8 body=260 status=ok
// SIG undefined FUN_1446368a8(void)

void FUN_1446368a8(double *param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *param_3;
  pcVar2 = (char *)*param_2;
  lVar4 = 0;
  if (*pcVar2 == '\0') {
    lVar4 = (longlong)iVar1;
  }
  local_3c = (float)param_1[1];
  local_40 = (float)*param_1;
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_50,L"AnimDriveStiffness");
  FUN_1498026b0(uVar3,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  lVar4 = (longlong)iVar1;
  if (*pcVar2 != '\0') {
    lVar4 = 0;
  }
  local_3c = (float)param_1[3];
  local_40 = (float)param_1[2];
  uVar3 = *(undefined8 *)(*(longlong *)(pcVar2 + 0x18) + lVar4 * 8);
  FUN_140056680(local_50,L"AnimDriveDamping");
  FUN_1498026b0(uVar3,local_50,&local_40);
  if (local_50[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446369ae FUN_1446369ae body=29 status=ok
// SIG undefined FUN_1446369ae(void)

undefined8 FUN_1446369ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446369e0 FUN_1446369e0 body=101 status=ok
// SIG undefined FUN_1446369e0(void)

void FUN_1446369e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144636a46 FUN_144636a46 body=101 status=ok
// SIG undefined FUN_144636a46(void)

void FUN_144636a46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be86ff0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = uVar3;
  puVar1[6] = uVar4;
  return;
}



// FUNCTION 144636aac FUN_144636aac body=134 status=ok
// SIG undefined FUN_144636aac(void)

void FUN_144636aac(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 4) {
    FUN_1446efa72(param_2 + 1,0,4,0x10);
    param_2[1].LockCount = 4;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be86ff0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  DVar5 = *(DWORD *)(param_1 + 0x28);
  uVar6 = *(undefined4 *)(param_1 + 0x2c);
  uVar7 = *(undefined4 *)(param_1 + 0x30);
  uVar8 = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  p_Var1->Flags = DVar5;
  p_Var1->CreatorBackTraceIndexHigh = (short)uVar6;
  p_Var1->SpareWORD = (short)((uint)uVar6 >> 0x10);
  p_Var1[1].Type = (short)uVar7;
  p_Var1[1].CreatorBackTraceIndex = (short)((uint)uVar7 >> 0x10);
  *(undefined4 *)&p_Var1[1].field_0x4 = uVar8;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144636b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144636b32 FUN_144636b32 body=77 status=ok
// SIG undefined FUN_144636b32(void)

void FUN_144636b32(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144636bd0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636b80 FUN_144636b80 body=79 status=ok
// SIG undefined FUN_144636b80(void)

undefined8 FUN_144636b80(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144636bd0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636bd0 FUN_144636bd0 body=327 status=ok
// SIG undefined FUN_144636bd0(void)

void FUN_144636bd0(double *param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  float local_54;
  float local_50;
  float local_4c;
  longlong local_48;
  float *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = (longlong)*param_3;
  pcVar1 = (char *)*param_2;
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  local_4c = (float)param_1[2];
  local_50 = (float)param_1[1];
  lVar3 = *(longlong *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  local_54 = (float)*param_1;
  FUN_140056680(local_68,L"LinearVelocityScale");
  local_48 = lVar3;
  local_40 = &local_54;
  FUN_14980290e(lVar3,local_68);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0;
  if (*pcVar1 == '\0') {
    lVar3 = lVar4;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar3 * 8);
  FUN_140056680(&local_48,L"AngularVelocityScale");
  FUN_1498027d6(uVar2,&local_48,param_1 + 3);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (*pcVar1 != '\0') {
    lVar4 = 0;
  }
  uVar2 = *(undefined8 *)(*(longlong *)(pcVar1 + 0x18) + lVar4 * 8);
  FUN_140056680(&local_48,L"FictitiousAngularScale");
  FUN_1498027d6(uVar2,&local_48,(longlong)param_1 + 0x1c);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144636d18 FUN_144636d18 body=29 status=ok
// SIG undefined FUN_144636d18(void)

undefined8 FUN_144636d18(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144636d4a FUN_144636d4a body=85 status=ok
// SIG undefined FUN_144636d4a(void)

void FUN_144636d4a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be870d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87060;
  return;
}



// FUNCTION 144636da0 FUN_144636da0 body=85 status=ok
// SIG undefined FUN_144636da0(void)

void FUN_144636da0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be870d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87060;
  return;
}



// FUNCTION 144636df6 FUN_144636df6 body=118 status=ok
// SIG undefined FUN_144636df6(void)

void FUN_144636df6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be870d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87060;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144636e5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144636e7a FUN_144636e7a body=29 status=ok
// SIG undefined FUN_144636e7a(void)

undefined8 FUN_144636e7a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144636eac FUN_144636eac body=85 status=ok
// SIG undefined FUN_144636eac(void)

void FUN_144636eac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be870d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87140;
  return;
}



// FUNCTION 144636f02 FUN_144636f02 body=85 status=ok
// SIG undefined FUN_144636f02(void)

void FUN_144636f02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be870d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87140;
  return;
}



// FUNCTION 144636f58 FUN_144636f58 body=118 status=ok
// SIG undefined FUN_144636f58(void)

void FUN_144636f58(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be870d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87140;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144636fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144636fdc FUN_144636fdc body=29 status=ok
// SIG undefined FUN_144636fdc(void)

undefined8 FUN_144636fdc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463700e FUN_14463700e body=85 status=ok
// SIG undefined FUN_14463700e(void)

void FUN_14463700e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be871b0;
  return;
}



// FUNCTION 144637064 FUN_144637064 body=85 status=ok
// SIG undefined FUN_144637064(void)

void FUN_144637064(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be871b0;
  return;
}



// FUNCTION 1446370ba FUN_1446370ba body=118 status=ok
// SIG undefined FUN_1446370ba(void)

void FUN_1446370ba(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be87220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be871b0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144637121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14463713a FUN_14463713a body=20 status=ok
// SIG undefined FUN_14463713a(void)

undefined1 FUN_14463713a(undefined8 param_1,longlong param_2)

{
  FUN_144628a1c(*(undefined8 *)(param_2 + 0x18));
  return 1;
}



// FUNCTION 14463714e FUN_14463714e body=29 status=ok
// SIG undefined FUN_14463714e(void)

undefined8 FUN_14463714e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144637180 FUN_144637180 body=85 status=ok
// SIG undefined FUN_144637180(void)

void FUN_144637180(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87290;
  return;
}



// FUNCTION 1446371d6 FUN_1446371d6 body=85 status=ok
// SIG undefined FUN_1446371d6(void)

void FUN_1446371d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87290;
  return;
}



// FUNCTION 14463722c FUN_14463722c body=118 status=ok
// SIG undefined FUN_14463722c(void)

void FUN_14463722c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be87220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87290;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144637293. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446372ae FUN_1446372ae body=22 status=ok
// SIG undefined FUN_1446372ae(void)

undefined1 FUN_1446372ae(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14462876e(param_2,param_3);
  return 1;
}



// FUNCTION 1446372c4 FUN_1446372c4 body=29 status=ok
// SIG undefined FUN_1446372c4(void)

undefined8 FUN_1446372c4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446372f6 FUN_1446372f6 body=101 status=ok
// SIG undefined FUN_1446372f6(void)

void FUN_1446372f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14463735c FUN_14463735c body=101 status=ok
// SIG undefined FUN_14463735c(void)

void FUN_14463735c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87300;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1446373c2 FUN_1446373c2 body=134 status=ok
// SIG undefined FUN_1446373c2(void)

void FUN_1446373c2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be87220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87300;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144637439. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144637486 FUN_144637486 body=29 status=ok
// SIG undefined FUN_144637486(void)

undefined8 FUN_144637486(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446374b8 FUN_1446374b8 body=85 status=ok
// SIG undefined FUN_1446374b8(void)

void FUN_1446374b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87370;
  return;
}



// FUNCTION 14463750e FUN_14463750e body=85 status=ok
// SIG undefined FUN_14463750e(void)

void FUN_14463750e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be87220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87370;
  return;
}



// FUNCTION 144637564 FUN_144637564 body=118 status=ok
// SIG undefined FUN_144637564(void)

void FUN_144637564(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be87220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87370;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446375cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446375ec FUN_1446375ec body=29 status=ok
// SIG undefined FUN_1446375ec(void)

undefined8 FUN_1446375ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463761e FUN_14463761e body=91 status=ok
// SIG undefined FUN_14463761e(void)

void FUN_14463761e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be873e0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14463767a FUN_14463767a body=91 status=ok
// SIG undefined FUN_14463767a(void)

void FUN_14463767a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be873e0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1446376d6 FUN_1446376d6 body=124 status=ok
// SIG undefined FUN_1446376d6(void)

void FUN_1446376d6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be873e0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144637743. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144637752 FUN_144637752 body=77 status=ok
// SIG undefined FUN_144637752(void)

void FUN_144637752(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446377f0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446377a0 FUN_1446377a0 body=79 status=ok
// SIG undefined FUN_1446377a0(void)

undefined8 FUN_1446377a0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_1446377f0(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1446377f0 FUN_1446377f0 body=149 status=ok
// SIG undefined FUN_1446377f0(void)

void FUN_1446377f0(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x01') {
    puVar4 = *(undefined8 **)(pcVar1 + 0x18);
  }
  else {
    puVar4 = (undefined8 *)((longlong)*param_3 * 8 + *(longlong *)(pcVar1 + 0x18));
  }
  uVar2 = *puVar4;
  FUN_140056680(local_30,L"NumIterations");
  iVar3 = FUN_144a41c6c(uVar2,local_30);
  if (iVar3 != -1) {
    FUN_1497efc7e(uVar2,iVar3,param_1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637886 FUN_144637886 body=29 status=ok
// SIG undefined FUN_144637886(void)

undefined8 FUN_144637886(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446378b8 FUN_1446378b8 body=91 status=ok
// SIG undefined FUN_1446378b8(void)

void FUN_1446378b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87450;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144637914 FUN_144637914 body=91 status=ok
// SIG undefined FUN_144637914(void)

void FUN_144637914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be87450;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144637970 FUN_144637970 body=124 status=ok
// SIG undefined FUN_144637970(void)

void FUN_144637970(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be87450;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001446379dd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1446379ec FUN_1446379ec body=77 status=ok
// SIG undefined FUN_1446379ec(void)

void FUN_1446379ec(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144637a8a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637a3a FUN_144637a3a body=79 status=ok
// SIG undefined FUN_144637a3a(void)

undefined8 FUN_144637a3a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144637a8a(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637a8a FUN_144637a8a body=149 status=ok
// SIG undefined FUN_144637a8a(void)

void FUN_144637a8a(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x01') {
    puVar4 = *(undefined8 **)(pcVar1 + 0x18);
  }
  else {
    puVar4 = (undefined8 *)((longlong)*param_3 * 8 + *(longlong *)(pcVar1 + 0x18));
  }
  uVar2 = *puVar4;
  FUN_140056680(local_30,L"MaxNumIterations");
  iVar3 = FUN_144a41c6c(uVar2,local_30);
  if (iVar3 != -1) {
    FUN_1497efc7e(uVar2,iVar3,param_1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637b20 FUN_144637b20 body=29 status=ok
// SIG undefined FUN_144637b20(void)

undefined8 FUN_144637b20(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144637b52 FUN_144637b52 body=91 status=ok
// SIG undefined FUN_144637b52(void)

void FUN_144637b52(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be874c0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144637bae FUN_144637bae body=91 status=ok
// SIG undefined FUN_144637bae(void)

void FUN_144637bae(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14be869d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14be874c0;
  *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(param_1 + 0x18);
  return;
}



// FUNCTION 144637c0a FUN_144637c0a body=124 status=ok
// SIG undefined FUN_144637c0a(void)

void FUN_144637c0a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14be869d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14be874c0;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000144637c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 144637c86 FUN_144637c86 body=77 status=ok
// SIG undefined FUN_144637c86(void)

void FUN_144637c86(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144637d24(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637cd4 FUN_144637cd4 body=79 status=ok
// SIG undefined FUN_144637cd4(void)

undefined8 FUN_144637cd4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  local_c = param_3;
  FUN_144637d24(param_1 + 0x18,&local_18,&local_c);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637d24 FUN_144637d24 body=149 status=ok
// SIG undefined FUN_144637d24(void)

void FUN_144637d24(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = (char *)*param_2;
  if (*pcVar1 == '\x01') {
    puVar4 = *(undefined8 **)(pcVar1 + 0x18);
  }
  else {
    puVar4 = (undefined8 *)((longlong)*param_3 * 8 + *(longlong *)(pcVar1 + 0x18));
  }
  uVar2 = *puVar4;
  FUN_140056680(local_30,L"NumSubsteps");
  iVar3 = FUN_144a41c6c(uVar2,local_30);
  if (iVar3 != -1) {
    FUN_1497efc7e(uVar2,iVar3,param_1);
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144637e3c FUN_144637e3c body=12 status=ok
// SIG undefined FUN_144637e3c(void)

void FUN_144637e3c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144637e45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144637e48 FUN_144637e48 body=29 status=ok
// SIG undefined FUN_144637e48(void)

undefined8 FUN_144637e48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144637e66 FUN_144637e66 body=2110 status=ok
// SIG undefined FUN_144637e66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144637e66(longlong *param_1,longlong param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float *pfVar9;
  undefined8 *puVar10;
  double *pdVar11;
  undefined1 (*pauVar12) [16];
  undefined8 *puVar13;
  double *pdVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar25;
  undefined1 extraout_var [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar18;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar26;
  undefined1 auVar24 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auStack_308 [40];
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  float fStack_2c0;
  float fStack_2bc;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  longlong local_298;
  longlong local_290;
  undefined8 local_288 [12];
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8 [4];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158 [13];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  if (0 < *(int *)(param_2 + 0x14)) {
    lVar15 = *param_1;
    local_2d4 = (*param_4 - *(float *)(lVar15 + 0x2f8)) / *(float *)(lVar15 + 0x2fc);
    lVar7 = (longlong)*(int *)(param_2 + 0x10);
    lVar8 = lVar7 * 0x30;
    local_290 = *(longlong *)(lVar15 + 0x200) + lVar8;
    local_298 = *(longlong *)(lVar15 + 0x1e8) + lVar8;
    lVar8 = lVar8 + *(longlong *)(lVar15 + 0x218);
    fVar18 = *param_3;
    lVar15 = *(longlong *)(param_2 + 8);
    local_2a0 = lVar7 * 0xc;
    local_2d0 = *(longlong *)(lVar15 + 0x28) + local_2a0;
    local_2a8 = *(longlong *)(lVar15 + 0x78) + local_2a0;
    local_2a0 = local_2a0 + *(longlong *)(lVar15 + 0x90);
    lVar15 = lVar7 * 0x10 + *(longlong *)(lVar15 + 0x48);
    local_2e0 = 1.0 - local_2d4;
    lVar7 = 0;
    local_2d8 = fVar18;
    local_2b8 = lVar8;
    local_2b0 = lVar15;
    do {
      lVar3 = lVar7 * 0xc;
      puVar10 = (undefined8 *)(lVar15 + lVar7 * 0x10);
      uVar4 = puVar10[1];
      auVar27._8_8_ = 0;
      auVar27._0_8_ = *(ulonglong *)(local_2d0 + lVar3);
      auVar27 = insertps(auVar27,*(undefined4 *)(local_2d0 + 8 + lVar3),0x28);
      lVar2 = lVar7 * 0x30;
      *(undefined8 *)(lVar8 + lVar2) = *puVar10;
      ((undefined8 *)(lVar8 + lVar2))[1] = uVar4;
      *(undefined1 (*) [16])(lVar8 + 0x10 + lVar2) = auVar27;
      puVar10 = (undefined8 *)(lVar8 + 0x20 + lVar2);
      *puVar10 = &DAT_3f8000003f800000;
      puVar10[1] = 0x3f800000;
      pfVar9 = (float *)(local_290 + 0x10 + lVar2);
      pfVar1 = (float *)(local_298 + 0x10 + lVar2);
      fVar16 = *(float *)(local_298 + 0x18 + lVar2) * local_2e0 +
               *(float *)(local_290 + 0x18 + lVar2) * local_2d4;
      fVar29 = pfVar1[1] * local_2e0 + pfVar9[1] * local_2d4;
      fVar25 = *(float *)(local_2d0 + 8 + lVar3);
      fVar36 = *(float *)(local_2d0 + 4 + lVar3);
      fVar35 = *pfVar1 * local_2e0 + *pfVar9 * local_2d4;
      *(float *)(local_2a8 + lVar3) = (fVar35 - *(float *)(local_2d0 + lVar3)) / fVar18;
      *(float *)(local_2a8 + 4 + lVar3) = (fVar29 - fVar36) / fVar18;
      *(float *)(local_2a8 + 8 + lVar3) = (fVar16 - fVar25) / fVar18;
      *(float *)(local_2d0 + lVar3) = fVar35;
      *(float *)(local_2d0 + 4 + lVar3) = fVar29;
      *(float *)(local_2d0 + 8 + lVar3) = fVar16;
      pfVar9 = (float *)(local_290 + lVar2);
      fVar29 = pfVar9[1];
      fVar35 = pfVar9[3];
      auVar27 = *(undefined1 (*) [16])(local_298 + lVar2);
      fVar16 = auVar27._12_4_;
      fVar37 = auVar27._4_4_;
      fVar18 = *(float *)(local_298 + 8 + lVar2);
      fVar25 = *(float *)(local_290 + 8 + lVar2);
      fVar17 = fVar35 * fVar16 + fVar18 * fVar25 + auVar27._0_4_ * *pfVar9 + fVar29 * fVar37;
      fVar36 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar17) * 4);
      fVar17 = fVar17 * fVar36;
      fVar36 = fVar36 * local_2d4;
      if (fVar17 < 0.9999) {
        fVar41 = fVar17;
        if (1.0 <= fVar17) {
          fVar41 = 1.0;
        }
        local_2c8 = *(longlong *)pfVar9;
        fStack_2c0 = pfVar9[2];
        fStack_2bc = fVar35;
        fVar17 = acosf((float)(-(uint)(fVar17 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar17 < -1.0) & (uint)fVar41));
        local_2dc = fVar17;
        fVar41 = sinf(fVar17);
        fVar17 = sinf(local_2e0 * fVar17);
        uVar38 = extraout_var._0_4_;
        uVar39 = extraout_var._4_4_;
        uVar40 = extraout_var._8_4_;
        fVar17 = fVar17 * (1.0 / fVar41);
        fVar36 = sinf(fVar36 * local_2dc);
        fVar36 = fVar36 * (1.0 / fVar41);
        fVar41 = (float)local_2c8;
      }
      else {
        uVar38 = 0;
        uVar39 = 0;
        uVar40 = 0;
        fVar17 = local_2e0;
        fVar41 = *pfVar9;
      }
      auVar19._4_4_ = uVar38;
      auVar19._0_4_ = fVar17;
      auVar19._8_4_ = uVar39;
      auVar19._12_4_ = uVar40;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar17 * fVar16 + fVar35 * fVar36;
      auVar44._4_12_ = auVar27._4_12_;
      auVar44._0_4_ = auVar27._0_4_ * fVar17 + fVar36 * fVar41;
      auVar23._4_4_ = fVar37;
      auVar23._0_4_ = fVar37 * fVar17 + fVar29 * fVar36;
      auVar23._8_4_ = fVar16;
      auVar23._12_4_ = fVar16;
      auVar27 = insertps(auVar44,auVar23,0x10);
      auVar27 = insertps(auVar27,ZEXT416((uint)(fVar18 * fVar17 + fVar25 * fVar36)),0x20);
      auVar27 = insertps(auVar27,auVar20,0x30);
      fVar36 = auVar27._0_4_;
      fVar16 = auVar27._4_4_;
      fVar29 = auVar27._8_4_;
      fVar35 = auVar27._12_4_;
      fVar18 = fVar36 * fVar36 + fVar16 * fVar16;
      fVar25 = fVar29 * fVar29 + fVar35 * fVar35;
      auVar28._0_4_ = fVar25 + fVar18;
      auVar28._4_4_ = fVar25 + fVar18;
      auVar28._8_4_ = fVar18 + fVar25;
      auVar28._12_4_ = fVar18 + fVar25;
      auVar21._4_4_ = -(uint)(1e-08 <= auVar28._4_4_);
      auVar21._0_4_ = -(uint)(1e-08 <= auVar28._0_4_);
      auVar21._8_4_ = -(uint)(1e-08 <= auVar28._8_4_);
      auVar21._12_4_ = -(uint)(1e-08 <= auVar28._12_4_);
      auVar27 = sqrtps(auVar28,auVar28);
      auVar27 = divps(_DAT_1499314a0,auVar27);
      auVar31._0_4_ = auVar27._0_4_ * fVar36;
      auVar31._4_4_ = auVar27._4_4_ * fVar16;
      auVar31._8_4_ = auVar27._8_4_ * fVar29;
      auVar31._12_4_ = auVar27._12_4_ * fVar35;
      auVar27 = blendvps(_DAT_149932320,auVar31,auVar21);
      pauVar12 = (undefined1 (*) [16])(lVar7 * 0x10 + lVar15);
      fVar18 = *(float *)*pauVar12 * -1.0;
      fVar25 = *(float *)(*pauVar12 + 4) * -1.0;
      fVar36 = *(float *)(*pauVar12 + 8) * -1.0;
      fVar16 = *(float *)(*pauVar12 + 0xc) * 1.0;
      fVar29 = auVar27._0_4_;
      fVar35 = auVar27._4_4_;
      fVar17 = auVar27._8_4_;
      fVar37 = auVar27._12_4_;
      fVar41 = fVar17 * fVar25 * -1.0 +
               fVar35 * fVar36 * 1.0 + fVar29 * fVar16 * 1.0 + fVar18 * fVar37;
      fVar42 = fVar17 * fVar18 * 1.0 +
               fVar35 * fVar16 * 1.0 + fVar29 * fVar36 * -1.0 + fVar25 * fVar37;
      fVar43 = fVar17 * fVar16 * 1.0 +
               fVar35 * fVar18 * -1.0 + fVar29 * fVar25 * 1.0 + fVar36 * fVar37;
      fVar25 = fVar17 * fVar36 * -1.0 +
               fVar35 * fVar25 * -1.0 + fVar29 * fVar18 * -1.0 + fVar16 * fVar37;
      fVar18 = fVar25;
      if (1.0 <= fVar25) {
        fVar18 = 1.0;
      }
      fVar36 = acosf((float)(-(uint)(fVar25 < -1.0) & 0xbf800000 |
                            ~-(uint)(fVar25 < -1.0) & (uint)fVar18));
      fVar18 = local_2d8;
      auVar22._4_4_ = fVar42;
      auVar22._0_4_ = fVar41;
      auVar22._8_4_ = fVar43;
      auVar22._12_4_ = fVar25;
      auVar23 = blendps(auVar22,_DAT_149931140,8);
      fVar16 = auVar23._0_4_ * auVar23._0_4_ + auVar23._4_4_ * auVar23._4_4_;
      fVar26 = auVar23._8_4_ * auVar23._8_4_ + auVar23._12_4_ * auVar23._12_4_;
      fVar36 = fVar36 + fVar36;
      auVar32._0_4_ = fVar26 + fVar16;
      auVar32._4_4_ = fVar26 + fVar16;
      auVar32._8_4_ = fVar16 + fVar26;
      auVar32._12_4_ = fVar16 + fVar26;
      auVar24._4_4_ = -(uint)(1e-08 <= auVar32._4_4_);
      auVar24._0_4_ = -(uint)(1e-08 <= auVar32._0_4_);
      auVar24._8_4_ = -(uint)(1e-08 <= auVar32._8_4_);
      auVar24._12_4_ = -(uint)(1e-08 <= auVar32._12_4_);
      auVar23 = sqrtps(auVar32,auVar32);
      auVar23 = divps(_DAT_149e1ef10,auVar23);
      auVar34._0_4_ = auVar23._0_4_ * fVar41;
      auVar34._4_4_ = auVar23._4_4_ * fVar42;
      auVar34._8_4_ = auVar23._8_4_ * fVar43;
      auVar34._12_4_ = auVar23._12_4_ * fVar25;
      auVar33._0_12_ = ZEXT812(0x3f800000);
      auVar33._12_4_ = 0;
      auVar23 = blendvps(auVar33,auVar34,auVar24);
      *(float *)(local_2a0 + lVar7 * 0xc) = (auVar23._0_4_ * fVar36) / local_2d8;
      *(float *)(local_2a0 + 4 + lVar7 * 0xc) = (auVar23._4_4_ * fVar36) / local_2d8;
      *(float *)(local_2a0 + 8 + lVar7 * 0xc) = (auVar23._8_4_ * fVar36) / local_2d8;
      *pauVar12 = auVar27;
      lVar2 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 8) + 0x60) +
               ((longlong)(int)lVar7 + (longlong)*(int *)(param_2 + 0x10)) * 8);
      if ((lVar2 != 0) && (*(char *)(lVar2 + 0x1c) == '&')) {
        pfVar9 = (float *)(lVar3 + local_2d0);
        local_1b8[0] = (double)fVar29;
        local_1b8[3] = (double)fVar37;
        local_1b8[2] = (double)fVar17;
        local_1b8[1] = (double)fVar35;
        local_188 = (double)pfVar9[2];
        local_198._8_4_ = SUB84((double)pfVar9[1],0);
        local_198._0_8_ = (double)*pfVar9;
        local_198._12_4_ = (int)((ulonglong)(double)pfVar9[1] >> 0x20);
        uStack_180 = 0;
        local_178 = 0x3ff0000000000000;
        uStack_170 = 0x3ff0000000000000;
        local_168 = 0x3ff0000000000000;
        uStack_160 = 0;
        local_2c8 = lVar7;
        FUN_14299547a(local_1b8,local_158);
        local_1c8 = (undefined1  [16])0x0;
        FUN_140ee84a4(local_1c8,*(undefined4 *)(lVar2 + 0x148),1);
        if (0 < *(int *)(lVar2 + 0x148)) {
          lVar15 = 0;
          lVar8 = 0;
          do {
            lVar5 = (longlong)*(int *)(*(longlong *)(lVar2 + 0x140) + lVar8 * 4);
            lVar7 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x28);
            lVar3 = *(longlong *)(*(longlong *)(param_2 + 8) + 0x48);
            lVar6 = lVar5 * 0x10;
            dStack_210 = (double)*(float *)(lVar3 + 0xc + lVar6);
            local_218 = (double)*(float *)(lVar3 + 8 + lVar6);
            dStack_220 = (double)*(float *)(lVar3 + 4 + lVar6);
            local_228 = (double)*(float *)(lVar3 + lVar6);
            local_1f8 = (double)*(float *)(lVar7 + 8 + lVar5 * 0xc);
            dVar30 = (double)*(float *)(lVar7 + 4 + lVar5 * 0xc);
            local_208._8_4_ = SUB84(dVar30,0);
            local_208._0_8_ = (double)*(float *)(lVar7 + lVar5 * 0xc);
            local_208._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            uStack_1f0 = 0;
            local_1e8 = 0x3ff0000000000000;
            uStack_1e0 = 0x3ff0000000000000;
            local_1d8 = 0x3ff0000000000000;
            uStack_1d0 = 0;
            puVar10 = local_158;
            puVar13 = local_288;
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *puVar13 = *puVar10;
              puVar10 = puVar10 + 1;
              puVar13 = puVar13 + 1;
            }
            FUN_1447dc19e(&local_228,local_1b8,local_288);
            pdVar11 = local_1b8;
            pdVar14 = (double *)(local_1c8._0_8_ + lVar15);
            for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
              *pdVar14 = *pdVar11;
              pdVar11 = pdVar11 + 1;
              pdVar14 = pdVar14 + 1;
            }
            lVar8 = lVar8 + 1;
            lVar15 = lVar15 + 0x60;
          } while (lVar8 < *(int *)(lVar2 + 0x148));
        }
        FUN_146e45c2a(lVar2,local_1c8);
        FUN_146e45688(lVar2);
        lVar8 = local_2b8;
        lVar15 = local_2b0;
        lVar7 = local_2c8;
        if (local_1c8._0_8_ != 0) {
          FUN_1400020a8();
          lVar8 = local_2b8;
          lVar15 = local_2b0;
          lVar7 = local_2c8;
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)(param_2 + 0x14));
  }
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1446386c4 FUN_1446386c4 body=12 status=ok
// SIG undefined FUN_1446386c4(void)

void FUN_1446386c4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001446386cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1446386d0 FUN_1446386d0 body=29 status=ok
// SIG undefined FUN_1446386d0(void)

undefined8 FUN_1446386d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144638740 FUN_144638740 body=12 status=ok
// SIG undefined FUN_144638740(void)

void FUN_144638740(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144638749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14463874c FUN_14463874c body=29 status=ok
// SIG undefined FUN_14463874c(void)

undefined8 FUN_14463874c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463876a FUN_14463876a body=1819 status=ok
// SIG undefined FUN_14463876a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463876a(longlong *param_1,longlong param_2,float *param_3,float *param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  double *pdVar11;
  longlong lVar12;
  undefined8 *puVar13;
  double *pdVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar26;
  undefined1 extraout_var [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  undefined1 auVar35 [16];
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar40;
  undefined1 auVar39 [12];
  float fVar41;
  undefined1 auVar42 [16];
  undefined1 auStack_2c8 [40];
  float local_2a0;
  float local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  undefined8 local_288 [12];
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8 [4];
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158 [13];
  ulonglong local_f0;
  undefined1 auVar24 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  lVar12 = (longlong)*param_5;
  fVar19 = *param_4;
  local_29c = *param_3;
  lVar3 = *param_1;
  lVar9 = lVar12 * 0x10;
  puVar10 = (undefined8 *)(*(longlong *)(param_2 + 0x48) + lVar9);
  uVar7 = puVar10[1];
  lVar4 = lVar12 * 0xc;
  auVar28._8_8_ = 0;
  auVar28._0_8_ = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + lVar4);
  auVar28 = insertps(auVar28,*(undefined4 *)(*(longlong *)(param_2 + 0x28) + 8 + lVar4),0x28);
  lVar15 = *(longlong *)(lVar3 + 0x218);
  lVar8 = lVar12 * 0x30;
  *(undefined8 *)(lVar15 + lVar8) = *puVar10;
  ((undefined8 *)(lVar15 + lVar8))[1] = uVar7;
  *(undefined1 (*) [16])(lVar15 + 0x10 + lVar8) = auVar28;
  puVar10 = (undefined8 *)(lVar15 + 0x20 + lVar8);
  *puVar10 = &DAT_3f8000003f800000;
  puVar10[1] = 0x3f800000;
  fVar36 = (fVar19 - *(float *)(lVar3 + 0x2f8)) / *(float *)(lVar3 + 0x2fc);
  pfVar1 = (float *)(*(longlong *)(lVar3 + 0x200) + 0x10 + lVar8);
  pfVar2 = (float *)(*(longlong *)(lVar3 + 0x1e8) + 0x10 + lVar8);
  fVar37 = 1.0 - fVar36;
  auVar39 = (undefined1  [12])0x0;
  fVar27 = *(float *)(*(longlong *)(lVar3 + 0x1e8) + 0x18 + lVar8) * fVar37 +
           *(float *)(*(longlong *)(lVar3 + 0x200) + 0x18 + lVar8) * fVar36;
  fVar34 = pfVar2[1] * fVar37 + pfVar1[1] * fVar36;
  fVar17 = *pfVar2 * fVar37 + *pfVar1 * fVar36;
  lVar15 = *(longlong *)(param_2 + 0x28);
  fVar19 = *(float *)(lVar15 + 8 + lVar4);
  lVar16 = *(longlong *)(param_2 + 0x78);
  fVar26 = *(float *)(lVar15 + 4 + lVar4);
  *(float *)(lVar16 + lVar4) = (fVar17 - *(float *)(lVar15 + lVar4)) / local_29c;
  *(float *)(lVar16 + 4 + lVar4) = (fVar34 - fVar26) / local_29c;
  *(float *)(lVar16 + 8 + lVar4) = (fVar27 - fVar19) / local_29c;
  lVar15 = *(longlong *)(param_2 + 0x28);
  *(float *)(lVar15 + lVar4) = fVar17;
  *(float *)(lVar15 + 4 + lVar4) = fVar34;
  *(float *)(lVar15 + 8 + lVar4) = fVar27;
  pfVar1 = (float *)(*(longlong *)(lVar3 + 0x200) + lVar8);
  fVar34 = *pfVar1;
  fVar38 = pfVar1[1];
  fVar40 = pfVar1[3];
  auVar28 = *(undefined1 (*) [16])(*(longlong *)(lVar3 + 0x1e8) + lVar8);
  fVar27 = auVar28._12_4_;
  fVar41 = auVar28._4_4_;
  fVar19 = *(float *)(*(longlong *)(lVar3 + 0x1e8) + 8 + lVar8);
  fVar26 = *(float *)(*(longlong *)(lVar3 + 0x200) + 8 + lVar8);
  fVar18 = fVar40 * fVar27 + fVar19 * fVar26 + auVar28._0_4_ * fVar34 + fVar38 * fVar41;
  fVar17 = *(float *)((longlong)&DAT_149935368 + (ulonglong)(0.0 <= fVar18) * 4);
  fVar18 = fVar18 * fVar17;
  fVar36 = fVar36 * fVar17;
  if (fVar18 < 0.9999) {
    fVar17 = fVar18;
    if (1.0 <= fVar18) {
      fVar17 = 1.0;
    }
    local_298 = fVar34;
    fStack_294 = fVar38;
    fStack_290 = pfVar1[2];
    fStack_28c = fVar40;
    local_2a0 = acosf((float)(-(uint)(fVar18 < -1.0) & 0xbf800000 |
                             ~-(uint)(fVar18 < -1.0) & (uint)fVar17));
    fVar17 = sinf(local_2a0);
    fVar37 = sinf(fVar37 * local_2a0);
    auVar22._4_4_ = extraout_var._0_4_;
    auVar22._0_4_ = fVar37;
    auVar22._8_4_ = extraout_var._4_4_;
    auVar22._12_4_ = extraout_var._8_4_;
    auVar39 = auVar22._4_12_;
    fVar37 = fVar37 * (1.0 / fVar17);
    fVar36 = sinf(fVar36 * local_2a0);
    fVar36 = fVar36 * (1.0 / fVar17);
    fVar34 = local_298;
  }
  auVar20._0_4_ = fVar37 * fVar27 + fVar40 * fVar36;
  auVar20._4_12_ = auVar39;
  auVar42._4_12_ = auVar28._4_12_;
  auVar42._0_4_ = auVar28._0_4_ * fVar37 + fVar36 * fVar34;
  auVar6._4_4_ = fVar41;
  auVar6._0_4_ = fVar41 * fVar37 + fVar38 * fVar36;
  auVar6._8_4_ = fVar27;
  auVar6._12_4_ = fVar27;
  auVar28 = insertps(auVar42,auVar6,0x10);
  auVar28 = insertps(auVar28,ZEXT416((uint)(fVar19 * fVar37 + fVar26 * fVar36)),0x20);
  auVar28 = insertps(auVar28,auVar20,0x30);
  fVar17 = auVar28._0_4_;
  fVar27 = auVar28._4_4_;
  fVar34 = auVar28._8_4_;
  fVar38 = auVar28._12_4_;
  fVar19 = fVar17 * fVar17 + fVar27 * fVar27;
  fVar26 = fVar34 * fVar34 + fVar38 * fVar38;
  auVar29._0_4_ = fVar26 + fVar19;
  auVar29._4_4_ = fVar26 + fVar19;
  auVar29._8_4_ = fVar19 + fVar26;
  auVar29._12_4_ = fVar19 + fVar26;
  auVar21._4_4_ = -(uint)(1e-08 <= auVar29._4_4_);
  auVar21._0_4_ = -(uint)(1e-08 <= auVar29._0_4_);
  auVar21._8_4_ = -(uint)(1e-08 <= auVar29._8_4_);
  auVar21._12_4_ = -(uint)(1e-08 <= auVar29._12_4_);
  auVar28 = sqrtps(auVar29,auVar29);
  auVar28 = divps(_DAT_1499314a0,auVar28);
  auVar31._0_4_ = auVar28._0_4_ * fVar17;
  auVar31._4_4_ = auVar28._4_4_ * fVar27;
  auVar31._8_4_ = auVar28._8_4_ * fVar34;
  auVar31._12_4_ = auVar28._12_4_ * fVar38;
  auVar28 = blendvps(_DAT_149932320,auVar31,auVar21);
  pfVar1 = (float *)(*(longlong *)(param_2 + 0x48) + lVar9);
  fVar19 = *pfVar1 * -1.0;
  fVar26 = pfVar1[1] * -1.0;
  fVar17 = pfVar1[2] * -1.0;
  fVar27 = pfVar1[3] * 1.0;
  fVar34 = auVar28._0_4_;
  fVar38 = auVar28._4_4_;
  fVar40 = auVar28._8_4_;
  fVar18 = auVar28._12_4_;
  fVar37 = fVar40 * fVar26 * -1.0 + fVar38 * fVar17 * 1.0 + fVar34 * fVar27 * 1.0 + fVar18 * fVar19;
  fVar36 = fVar40 * fVar19 * 1.0 + fVar38 * fVar27 * 1.0 + fVar34 * fVar17 * -1.0 + fVar18 * fVar26;
  fVar41 = fVar40 * fVar27 * 1.0 + fVar38 * fVar19 * -1.0 + fVar34 * fVar26 * 1.0 + fVar18 * fVar17;
  fVar26 = fVar40 * fVar17 * -1.0 +
           fVar38 * fVar26 * -1.0 + fVar34 * fVar19 * -1.0 + fVar18 * fVar27;
  fVar19 = fVar26;
  if (1.0 <= fVar26) {
    fVar19 = 1.0;
  }
  fVar19 = acosf((float)(-(uint)(fVar26 < -1.0) & 0xbf800000 |
                        ~-(uint)(fVar26 < -1.0) & (uint)fVar19));
  auVar5._4_4_ = fVar36;
  auVar5._0_4_ = fVar37;
  auVar5._8_4_ = fVar41;
  auVar5._12_4_ = fVar26;
  auVar22 = blendps(ZEXT416(0),auVar5,7);
  auVar23._0_4_ = auVar22._0_4_ * auVar22._0_4_ + auVar22._4_4_ * auVar22._4_4_;
  auVar24._4_4_ = auVar22._8_4_ * auVar22._8_4_ + auVar22._12_4_ * auVar22._12_4_;
  auVar24._0_4_ = auVar23._0_4_;
  auVar24._8_4_ = auVar24._4_4_;
  auVar24._12_4_ = auVar24._4_4_;
  auVar23._8_8_ = auVar24._8_8_;
  auVar23._4_4_ = auVar23._0_4_;
  auVar32._0_4_ = auVar24._4_4_ + auVar23._0_4_;
  auVar32._4_4_ = auVar24._4_4_ + auVar23._0_4_;
  auVar32._8_4_ = auVar23._0_4_ + auVar24._4_4_;
  auVar32._12_4_ = auVar23._0_4_ + auVar24._4_4_;
  auVar22 = sqrtps(auVar23,auVar32);
  auVar22 = divps(_DAT_149e1ef10,auVar22);
  auVar33._0_4_ = auVar22._0_4_ * fVar37;
  auVar33._4_4_ = auVar22._4_4_ * fVar36;
  auVar33._8_4_ = auVar22._8_4_ * fVar41;
  auVar33._12_4_ = auVar22._12_4_ * fVar26;
  auVar35._0_12_ = ZEXT812(0x3f800000);
  auVar35._12_4_ = 0;
  auVar25._4_4_ = -(uint)(1e-08 <= auVar32._4_4_);
  auVar25._0_4_ = -(uint)(1e-08 <= auVar32._0_4_);
  auVar25._8_4_ = -(uint)(1e-08 <= auVar32._8_4_);
  auVar25._12_4_ = -(uint)(1e-08 <= auVar32._12_4_);
  auVar22 = blendvps(auVar35,auVar33,auVar25);
  fVar19 = fVar19 + fVar19;
  lVar3 = *(longlong *)(param_2 + 0x90);
  *(float *)(lVar3 + lVar12 * 0xc) = (auVar22._0_4_ * fVar19) / local_29c;
  *(float *)(lVar3 + 4 + lVar12 * 0xc) = (auVar22._4_4_ * fVar19) / local_29c;
  *(float *)(lVar3 + 8 + lVar12 * 0xc) = (auVar22._8_4_ * fVar19) / local_29c;
  *(undefined1 (*) [16])(*(longlong *)(param_2 + 0x48) + lVar9) = auVar28;
  lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x60) + lVar12 * 8);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x1c) == '&')) {
    lVar15 = *(longlong *)(param_2 + 0x48);
    local_1b8[3] = (double)*(float *)(lVar15 + 0xc + lVar9);
    local_1b8[2] = (double)*(float *)(lVar15 + 8 + lVar9);
    lVar16 = *(longlong *)(param_2 + 0x28);
    local_1b8[1] = (double)*(float *)(lVar15 + 4 + lVar9);
    local_1b8[0] = (double)*(float *)(lVar15 + lVar9);
    local_188 = (double)*(float *)(lVar16 + 8 + lVar12 * 0xc);
    dVar30 = (double)*(float *)(lVar16 + 4 + lVar12 * 0xc);
    local_198._8_4_ = SUB84(dVar30,0);
    local_198._0_8_ = (double)*(float *)(lVar16 + lVar12 * 0xc);
    local_198._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    uStack_180 = 0;
    local_178 = 0x3ff0000000000000;
    uStack_170 = 0x3ff0000000000000;
    local_168 = 0x3ff0000000000000;
    uStack_160 = 0;
    FUN_14299547a(local_1b8,local_158);
    local_1c8 = (undefined1  [16])0x0;
    FUN_140ee84a4(local_1c8,*(undefined4 *)(lVar3 + 0x148),1);
    if (0 < *(int *)(lVar3 + 0x148)) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        lVar9 = (longlong)*(int *)(*(longlong *)(lVar3 + 0x140) + lVar16 * 4);
        lVar8 = *(longlong *)(param_2 + 0x28);
        lVar4 = *(longlong *)(param_2 + 0x48);
        lVar12 = lVar9 * 0x10;
        dStack_210 = (double)*(float *)(lVar4 + 0xc + lVar12);
        local_218 = (double)*(float *)(lVar4 + 8 + lVar12);
        dStack_220 = (double)*(float *)(lVar4 + 4 + lVar12);
        local_228 = (double)*(float *)(lVar4 + lVar12);
        local_1f8 = (double)*(float *)(lVar8 + 8 + lVar9 * 0xc);
        dVar30 = (double)*(float *)(lVar8 + 4 + lVar9 * 0xc);
        local_208._8_4_ = SUB84(dVar30,0);
        local_208._0_8_ = (double)*(float *)(lVar8 + lVar9 * 0xc);
        local_208._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
        uStack_1f0 = 0;
        local_1e8 = 0x3ff0000000000000;
        uStack_1e0 = 0x3ff0000000000000;
        local_1d8 = 0x3ff0000000000000;
        uStack_1d0 = 0;
        puVar10 = local_158;
        puVar13 = local_288;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar13 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar13 = puVar13 + 1;
        }
        FUN_1447dc19e(&local_228,local_1b8,local_288);
        pdVar11 = local_1b8;
        pdVar14 = (double *)(local_1c8._0_8_ + lVar15);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *pdVar14 = *pdVar11;
          pdVar11 = pdVar11 + 1;
          pdVar14 = pdVar14 + 1;
        }
        lVar16 = lVar16 + 1;
        lVar15 = lVar15 + 0x60;
      } while (lVar16 < *(int *)(lVar3 + 0x148));
    }
    FUN_146e45c2a(lVar3,local_1c8);
    FUN_146e45688(lVar3);
    if (local_1c8._0_8_ != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_2c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144638eb0 FUN_144638eb0 body=29 status=ok
// SIG undefined FUN_144638eb0(void)

undefined8 FUN_144638eb0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144638ece FUN_144638ece body=894 status=ok
// SIG undefined FUN_144638ece(void)

void FUN_144638ece(longlong *param_1,longlong param_2,float *param_3,int *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar7 = (longlong)*param_4;
  lVar2 = *param_1;
  if (*(int *)(lVar2 + 0x3b8) == 0) {
    dVar10 = 0.0;
    dVar8 = 0.0;
    dVar9 = 0.0;
  }
  else {
    lVar3 = *(longlong *)(lVar2 + 0x3b0);
    dVar12 = (double)*(float *)(*(longlong *)(param_2 + 0x78) + lVar7 * 4);
    dVar9 = 1.0 / (double)*param_3;
    dVar10 = dVar9 * dVar12 * *(double *)(lVar3 + lVar7 * 0x18) + 0.0;
    dVar8 = *(double *)(lVar3 + 8 + lVar7 * 0x18) * dVar12 * dVar9 + 0.0;
    dVar9 = *(double *)(lVar3 + 0x10 + lVar7 * 0x18) * dVar12 * dVar9 + 0.0;
  }
  if (*(int *)(lVar2 + 0x3a8) != 0) {
    lVar3 = *(longlong *)(lVar2 + 0x3a0);
    dVar10 = dVar10 + *(double *)(lVar3 + lVar7 * 0x18);
    dVar8 = dVar8 + *(double *)(lVar3 + 8 + lVar7 * 0x18);
    dVar9 = dVar9 + *(double *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  if ((char)param_1[1] == '\x01') {
    lVar3 = *(longlong *)(param_2 + 0x28);
    dVar4 = (double)(*(float *)(lVar3 + 8 + lVar7 * 0xc) - (float)(double)param_1[10]);
    dVar5 = (double)(*(float *)(lVar3 + 4 + lVar7 * 0xc) - (float)(double)param_1[9]);
    dVar13 = (double)*(float *)(*(longlong *)(param_2 + 0x78) + lVar7 * 4);
    dVar15 = (double)(*(float *)(lVar3 + lVar7 * 0xc) - (float)(double)param_1[8]);
    dVar12 = (double)param_1[5];
    dVar11 = (double)param_1[6];
    dVar6 = dVar12 * dVar5 - dVar15 * dVar11;
    dVar14 = (double)param_1[7];
    dVar15 = dVar15 * dVar14 - dVar4 * dVar12;
    dVar4 = dVar11 * dVar4 - dVar5 * dVar14;
    dVar10 = dVar10 - (dVar11 * dVar6 - dVar15 * dVar14) * dVar13;
    dVar8 = dVar8 - (dVar14 * dVar4 - dVar6 * dVar12) * dVar13;
    dVar9 = dVar9 - (dVar12 * dVar15 - dVar4 * dVar11) * dVar13;
  }
  if (*(char *)((longlong)param_1 + 9) != '\0') {
    lVar3 = *(longlong *)(param_2 + 0x48);
    dVar11 = (double)param_1[4] - (double)*(float *)(lVar3 + 8 + lVar7 * 0xc);
    dVar14 = (double)param_1[3] - (double)*(float *)(lVar3 + 4 + lVar7 * 0xc);
    dVar15 = (double)param_1[2] - (double)*(float *)(lVar3 + lVar7 * 0xc);
    dVar12 = dVar11 * dVar11 + dVar15 * dVar15 + dVar14 * dVar14;
    if (9.99999993922529e-09 < dVar12) {
      dVar12 = 1.0 / SQRT(dVar12);
      lVar3 = *(longlong *)(lVar2 + 0xf8);
      dVar12 = (double)*(float *)(lVar2 + 0x358) *
               ABS((double)*(float *)(lVar3 + lVar7 * 0xc) * dVar15 * dVar12 +
                   (double)*(float *)(lVar3 + 4 + lVar7 * 0xc) * dVar14 * dVar12 +
                   (double)*(float *)(lVar3 + 8 + lVar7 * 0xc) * dVar12 * dVar11);
      dVar4 = 1.0;
      if (dVar12 <= 1.0) {
        dVar4 = dVar12;
      }
      dVar12 = (double)*(float *)(*(longlong *)(param_2 + 0x78) + lVar7 * 4);
      dVar10 = dVar10 + dVar4 * dVar15 * dVar12;
      dVar8 = dVar8 + dVar14 * dVar4 * dVar12;
      dVar9 = dVar9 + dVar11 * dVar4 * dVar12;
    }
  }
  lVar2 = *(longlong *)(param_2 + 0x60);
  fVar1 = *(float *)(*(longlong *)(param_2 + 0x90) + lVar7 * 4);
  *(float *)(lVar2 + lVar7 * 0xc) = (float)dVar10 * fVar1 + *(float *)(lVar2 + lVar7 * 0xc);
  *(float *)(lVar2 + 4 + lVar7 * 0xc) = (float)dVar8 * fVar1 + *(float *)(lVar2 + 4 + lVar7 * 0xc);
  *(float *)(lVar2 + 8 + lVar7 * 0xc) = (float)dVar9 * fVar1 + *(float *)(lVar2 + 8 + lVar7 * 0xc);
  return;
}



// FUNCTION 14463924c FUN_14463924c body=71 status=ok
// SIG undefined FUN_14463924c(void)

void FUN_14463924c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x60,8);
  *param_2 = puVar1;
  *puVar1 = &PTR_FUN_14be875b0;
  lVar2 = 0xb;
  while( true ) {
    puVar1 = puVar1 + 1;
    param_1 = param_1 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *puVar1 = *param_1;
  }
  return;
}



// FUNCTION 14463929a FUN_14463929a body=29 status=ok
// SIG undefined FUN_14463929a(void)

void FUN_14463929a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1446392b8 FUN_1446392b8 body=29 status=ok
// SIG undefined FUN_1446392b8(void)

undefined8 FUN_1446392b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1446392d6 FUN_1446392d6 body=1647 status=ok
// SIG undefined FUN_1446392d6(void)

void FUN_1446392d6(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  uint *puVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint *puVar24;
  longlong *plVar25;
  ulonglong uVar26;
  int iVar27;
  undefined8 *puVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  float local_e0;
  longlong *local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  uint *local_b8;
  longlong local_b0;
  ulonglong local_a8;
  uint *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_b0 = *param_1;
  lVar10 = (longlong)*(int *)(*(longlong *)param_1[1] + (longlong)*param_2 * 4);
  lVar21 = *(longlong *)(local_b0 + 0x68);
  uVar22 = lVar10 * 0x50;
  lVar20 = lVar10 * 0x30 + *(longlong *)(local_b0 + 0xb0);
  lVar10 = *(longlong *)(lVar21 + 0x4a0) + uVar22;
  puVar19 = (uint *)(lVar10 + 0x10);
  plVar25 = (longlong *)(*(longlong *)(lVar21 + 0x4a0) + uVar22);
  uVar14 = *(uint *)(lVar10 + 0x28);
  if (uVar14 == 0) {
    uVar26 = 1;
    iVar27 = 0;
    uVar30 = 0;
    uVar9 = 0;
  }
  else {
    puVar24 = (uint *)plVar25[4];
    if (puVar24 == (uint *)0x0) {
      puVar24 = puVar19;
    }
    uVar9 = *puVar24;
    if (uVar9 == 0) {
      iVar27 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar27 = uVar14 - 1;
      }
      uVar30 = 0;
      uVar26 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar26 = uVar30;
      }
      iVar27 = 0;
      do {
        if (uVar26 == uVar30) goto LAB_1446395fd;
        iVar27 = iVar27 + 0x20;
        uVar9 = puVar24[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar9 == 0);
    }
    else {
      iVar27 = 0;
      uVar30 = 0;
    }
    uVar26 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar26 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar9) {
      uVar9 = uVar14;
    }
  }
  if (uVar9 != uVar14) {
    uVar23 = 0xffffffff;
    local_d0 = plVar25;
    local_b8 = (uint *)(ulonglong)uVar14;
    local_a8 = uVar22;
    local_a0 = puVar19;
    do {
      local_c8 = (longlong *)CONCAT44(local_c8._4_4_,uVar23);
      lVar11 = (longlong)*(int *)(*local_d0 + (longlong)(int)uVar9 * 0xc);
      lVar10 = *(longlong *)(*(longlong *)(local_b0 + 0x68) + 0x1f8);
      fVar3 = *(float *)(param_1 + 3);
      lVar17 = (longlong)*(int *)(lVar10 + 0x10 + lVar11 * 0x18);
      lVar4 = lVar17 * 0xc;
      local_108 = *(longlong *)(local_b0 + 0x128) + lVar4;
      lVar21 = *(longlong *)(lVar10 + 8 + lVar11 * 0x18);
      local_110 = lVar17 * 4 + *(longlong *)(lVar21 + 0x90);
      local_118 = *(longlong *)(local_b0 + 0x1a0) + lVar4;
      local_e8 = *(undefined4 *)(lVar10 + 0x14 + lVar11 * 0x18);
      local_f0 = *(undefined4 *)(local_b0 + 0x2fc);
      local_f8 = param_1[2];
      local_100 = lVar20;
      local_c0 = uVar30;
      if ((fVar3 != 3.4028235e+38) || (NAN(fVar3))) {
        local_e0 = fVar3;
        FUN_1424a17d0(lVar17 * 0x10 + *(longlong *)(lVar21 + 0xa8),
                      lVar4 + *(longlong *)(lVar21 + 0x48),*(longlong *)(lVar21 + 0x28) + lVar4,
                      *(longlong *)(local_b0 + 0x110) + lVar4);
      }
      else {
        FUN_1424a1640();
      }
      uVar23 = (uint)local_c8 & ~(uint)uVar26;
      puVar19 = (uint *)local_d0[4];
      if ((uint *)local_d0[4] == (uint *)0x0) {
        puVar19 = local_a0;
      }
      uVar14 = *(uint *)(local_d0 + 5);
      iVar29 = (int)local_c0;
      lVar10 = (longlong)iVar29;
      uVar9 = puVar19[lVar10] & uVar23;
      uVar30 = local_c0;
      if (uVar9 == 0) {
        iVar13 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar13 = uVar14 - 1;
        }
        iVar13 = iVar13 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar15 = iVar13;
        if (iVar13 < iVar29) {
          iVar15 = iVar29;
        }
        if (iVar29 < iVar13) {
          lVar21 = 0;
          do {
            uVar9 = puVar19[lVar10 + lVar21 + 1];
            if (uVar9 != 0) {
              uVar30 = (ulonglong)(iVar29 + (int)lVar21 + 1);
              uVar23 = 0xffffffff;
              goto LAB_14463959f;
            }
            iVar27 = iVar27 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar15 - lVar10 != lVar21);
          uVar23 = 0xffffffff;
          iVar29 = iVar15;
        }
        uVar30 = (ulonglong)(iVar29 + 1);
        uVar9 = uVar14;
      }
      else {
LAB_14463959f:
        uVar26 = (ulonglong)(-uVar9 & uVar9);
        uVar22 = uVar26 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar9 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar9) {
          uVar9 = uVar14;
        }
      }
    } while (uVar9 != (uint)local_b8);
    lVar21 = *(longlong *)(local_b0 + 0x68);
    uVar22 = local_a8;
  }
LAB_1446395fd:
  plVar25 = (longlong *)(*(longlong *)(lVar21 + 0x4b8) + uVar22);
  lVar10 = *(longlong *)(lVar21 + 0x4b8) + uVar22;
  puVar19 = (uint *)(lVar10 + 0x10);
  uVar14 = *(uint *)(lVar10 + 0x28);
  uVar22 = (ulonglong)uVar14;
  if (uVar14 == 0) {
    uVar26 = 1;
    puVar24 = (uint *)0x0;
    uVar30 = 0;
    iVar27 = 0;
  }
  else {
    puVar12 = (uint *)plVar25[4];
    if ((uint *)plVar25[4] == (uint *)0x0) {
      puVar12 = puVar19;
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar27 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar27 = uVar14 - 1;
      }
      puVar24 = (uint *)0x0;
      puVar18 = (uint *)(ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        puVar18 = puVar24;
      }
      iVar27 = 0;
      do {
        if (puVar18 == puVar24) goto LAB_14463969d;
        iVar27 = iVar27 + 0x20;
        uVar9 = puVar12[(longlong)puVar24 + 1];
        puVar24 = (uint *)((longlong)puVar24 + 1);
      } while (uVar9 == 0);
    }
    else {
      puVar24 = (uint *)0x0;
      iVar27 = 0;
    }
    uVar26 = (ulonglong)(-uVar9 & uVar9);
    uVar30 = uVar26 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar9 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar9) {
      uVar9 = uVar14;
    }
    uVar30 = (ulonglong)uVar9;
  }
  if ((uint)uVar30 != uVar14) {
    uVar9 = 0xffffffff;
    local_c0 = (ulonglong)uVar14;
    local_c8 = plVar25;
    local_b8 = puVar19;
    local_a8 = uVar22;
    do {
      lVar21 = (longlong)*(int *)(*plVar25 + (longlong)(int)uVar30 * 0xc);
      lVar10 = *(longlong *)(*(longlong *)(local_b0 + 0x68) + 0x400);
      if (0 < *(int *)(lVar10 + 0x14 + lVar21 * 0x18)) {
        local_d0 = (longlong *)CONCAT44(local_d0._4_4_,iVar27);
        lVar10 = lVar10 + lVar21 * 0x18;
        puVar28 = (undefined8 *)
                  ((longlong)*(int *)(lVar10 + 0x10) * 0x30 + *(longlong *)(local_b0 + 0x1e8));
        lVar21 = 0;
        local_a0 = puVar24;
        do {
          FUN_144b3cccc(puVar28,&local_98,lVar20);
          puVar28[4] = local_78;
          puVar28[5] = uStack_70;
          puVar28[2] = local_88;
          puVar28[3] = uStack_80;
          *puVar28 = local_98;
          puVar28[1] = uStack_90;
          auVar31._0_8_ = *(ulonglong *)param_1[2] ^ 0x8000000080000000;
          auVar31._8_4_ = 0x80000000;
          auVar31._12_4_ = 0x80000000;
          auVar32._4_4_ = 0x80000000;
          auVar32._0_4_ = (uint)((ulonglong *)param_1[2])[1] ^ 0x80000000;
          auVar32._8_4_ = 0x80000000;
          auVar32._12_4_ = 0x80000000;
          auVar32 = insertps(auVar31,auVar32,0x28);
          auVar33._0_8_ =
               CONCAT44(auVar32._4_4_ + *(float *)((longlong)puVar28 + 0x14),
                        auVar32._0_4_ + *(float *)(puVar28 + 2));
          auVar33._8_4_ = auVar32._8_4_ + *(float *)(puVar28 + 3);
          auVar33._12_4_ = auVar32._12_4_ + *(float *)((longlong)puVar28 + 0x1c);
          *(undefined1 (*) [16])(puVar28 + 2) = auVar33;
          lVar4 = *(longlong *)(*(longlong *)(lVar10 + 8) + 0x28);
          lVar11 = *(int *)(lVar10 + 0x10) + lVar21;
          *(undefined8 *)(lVar4 + lVar11 * 0xc) = auVar33._0_8_;
          uVar5 = extractps(auVar33,2);
          *(undefined8 *)(lVar4 + 8 + lVar11 * 0xc) = uVar5;
          uVar6 = *(undefined4 *)((longlong)puVar28 + 4);
          uVar7 = *(undefined4 *)(puVar28 + 1);
          uVar8 = *(undefined4 *)((longlong)puVar28 + 0xc);
          puVar1 = (undefined4 *)
                   (*(longlong *)(*(longlong *)(lVar10 + 8) + 0x48) +
                   (*(int *)(lVar10 + 0x10) + lVar21) * 0x10);
          *puVar1 = *(undefined4 *)puVar28;
          puVar1[1] = uVar6;
          puVar1[2] = uVar7;
          puVar1[3] = uVar8;
          lVar21 = lVar21 + 1;
          puVar28 = puVar28 + 6;
        } while (lVar21 < *(int *)(lVar10 + 0x14));
        local_c0 = (ulonglong)*(uint *)(local_c8 + 5);
        puVar24 = local_a0;
        uVar22 = local_a8;
        puVar19 = local_b8;
        plVar25 = local_c8;
        iVar27 = (int)local_d0;
      }
      uVar9 = uVar9 & ~(uint)uVar26;
      puVar12 = (uint *)plVar25[4];
      if ((uint *)plVar25[4] == (uint *)0x0) {
        puVar12 = puVar19;
      }
      iVar13 = (int)puVar24;
      lVar10 = (longlong)iVar13;
      uVar14 = puVar12[lVar10] & uVar9;
      iVar29 = (int)local_c0;
      if (uVar14 == 0) {
        iVar15 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar15 = iVar29 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar27 = iVar27 + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar13) {
          iVar16 = iVar13;
        }
        plVar25 = local_c8;
        if (iVar13 < iVar15) {
          lVar21 = 0;
          do {
            uVar14 = puVar12[lVar10 + lVar21 + 1];
            if (uVar14 != 0) {
              puVar24 = (uint *)(ulonglong)(iVar13 + (int)lVar21 + 1);
              uVar9 = 0xffffffff;
              goto LAB_1446398d2;
            }
            iVar27 = iVar27 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar16 - lVar10 != lVar21);
          uVar9 = 0xffffffff;
          lVar10 = (longlong)iVar16;
        }
        local_d0 = (longlong *)CONCAT44(local_d0._4_4_,iVar27);
        puVar24 = (uint *)(lVar10 + 1U & 0xffffffff);
        uVar30 = local_c0;
      }
      else {
LAB_1446398d2:
        uVar26 = (ulonglong)(-uVar14 & uVar14);
        uVar30 = uVar26 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar30 != 0) {
          for (; uVar30 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar14 = (iVar27 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        uVar30 = (ulonglong)uVar14;
        if (iVar29 <= (int)uVar14) {
          uVar30 = local_c0;
        }
      }
    } while ((int)uVar30 != (int)uVar22);
  }
LAB_14463969d:
  if ((local_60 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144639946 FUN_144639946 body=231 status=ok
// SIG undefined FUN_144639946(void)

void FUN_144639946(longlong *param_1,longlong param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  longlong lVar2;
  
  fVar1 = *(float *)(param_1 + 3);
  lVar2 = *param_1;
  if ((fVar1 != 3.4028235e+38) || (NAN(fVar1))) {
    FUN_1424a1b60(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x110),
                  *(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(param_2 + 0x90),
                  *(undefined8 *)(lVar2 + 0x128),*(undefined8 *)param_1[1],
                  *(undefined8 *)(lVar2 + 0xb0),param_1[2],*(undefined4 *)(lVar2 + 0x2fc),*param_3,
                  *param_4,fVar1);
  }
  else {
    FUN_1424a1990(*(undefined8 *)(param_2 + 0xa8),*(undefined8 *)(param_2 + 0x48),
                  *(undefined8 *)(param_2 + 0x28),*(undefined8 *)(lVar2 + 0x110),
                  *(undefined8 *)(lVar2 + 0x1a0),*(undefined8 *)(param_2 + 0x90),
                  *(undefined8 *)(lVar2 + 0x128),*(undefined8 *)param_1[1],
                  *(undefined8 *)(lVar2 + 0xb0),param_1[2],*(undefined4 *)(lVar2 + 0x2fc),*param_3,
                  *param_4);
  }
  return;
}



// FUNCTION 144639a2e FUN_144639a2e body=614 status=ok
// SIG undefined FUN_144639a2e(void)

void FUN_144639a2e(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  uint *puVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  
  lVar5 = *param_1;
  lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x4a0);
  lVar7 = (longlong)*(int *)(*(longlong *)param_1[1] + (longlong)*param_2 * 4) * 0x50;
  plVar1 = (longlong *)(lVar10 + lVar7);
  lVar10 = lVar10 + lVar7;
  puVar11 = (uint *)(lVar10 + 0x10);
  iVar3 = *(int *)(lVar10 + 0x28);
  if (iVar3 == 0) {
    uVar18 = 1;
    uVar17 = 0;
    iVar15 = 0;
    iVar6 = 0;
  }
  else {
    puVar8 = (uint *)plVar1[4];
    if ((uint *)plVar1[4] == (uint *)0x0) {
      puVar8 = puVar11;
    }
    uVar9 = *puVar8;
    if (uVar9 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar17 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar17;
      }
      iVar15 = 0;
      do {
        if (uVar18 == uVar17) {
          return;
        }
        iVar15 = iVar15 + 0x20;
        uVar9 = puVar8[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar17 = 0;
      iVar15 = 0;
    }
    uVar18 = (ulonglong)(-uVar9 & uVar9);
    uVar2 = uVar18 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar6 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar9 = 0xffffffff;
    do {
      lVar14 = (longlong)*(int *)(*plVar1 + (longlong)iVar6 * 0xc);
      lVar10 = *(longlong *)(*(longlong *)(lVar5 + 0x68) + 0x1f8);
      lVar7 = FUN_14491371e(lVar5);
      *(byte *)(lVar7 + 500) = *(byte *)((longlong)param_1 + 0x14) ^ 1;
      lVar7 = (longlong)*(int *)(lVar10 + 0x10 + lVar14 * 0x18) * 0xc;
      FUN_1424a1ec0(lVar7 + *(longlong *)(lVar5 + 0x140),*(longlong *)(lVar5 + 0x188) + lVar7,
                    *(longlong *)(lVar5 + 0x128) + lVar7,*(longlong *)(lVar5 + 0x110) + lVar7,
                    *(longlong *)(lVar5 + 0x170) + lVar7,*(longlong *)(lVar5 + 0x158) + lVar7,
                    (int)param_1[2],0,*(undefined4 *)(lVar10 + 0x14 + lVar14 * 0x18));
      uVar9 = ~(uint)uVar18 & uVar9;
      puVar8 = (uint *)plVar1[4];
      if ((uint *)plVar1[4] == (uint *)0x0) {
        puVar8 = puVar11;
      }
      iVar4 = (int)plVar1[5];
      iVar6 = (int)uVar17;
      lVar10 = (longlong)iVar6;
      uVar16 = puVar8[lVar10] & uVar9;
      if (uVar16 == 0) {
        iVar12 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar12 = iVar4 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar13 = iVar12;
        if (iVar12 < iVar6) {
          iVar13 = iVar6;
        }
        if (iVar6 < iVar12) {
          lVar7 = 0;
          do {
            uVar16 = puVar8[lVar10 + lVar7 + 1];
            if (uVar16 != 0) {
              uVar17 = (ulonglong)(iVar6 + (int)lVar7 + 1);
              uVar9 = 0xffffffff;
              goto LAB_144639c3b;
            }
            iVar15 = iVar15 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar13 - lVar10 != lVar7);
          uVar9 = 0xffffffff;
          iVar6 = iVar13;
        }
        uVar17 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_144639c3b:
        uVar18 = (ulonglong)(-uVar16 & uVar16);
        uVar2 = uVar18 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar6 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
  return;
}



// FUNCTION 144639c94 FUN_144639c94 body=128 status=ok
// SIG undefined FUN_144639c94(void)

void FUN_144639c94(longlong *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *param_4;
  uVar2 = *param_3;
  lVar3 = *param_1;
  lVar4 = FUN_14491371e(lVar3,uVar2);
  *(byte *)(lVar4 + 500) = *(byte *)((longlong)param_1 + 0xc) ^ 1;
  FUN_1424a1ec0(*(undefined8 *)(lVar3 + 0x140),*(undefined8 *)(lVar3 + 0x188),
                *(undefined8 *)(lVar3 + 0x128),*(undefined8 *)(lVar3 + 0x110),
                *(undefined8 *)(lVar3 + 0x170),*(undefined8 *)(lVar3 + 0x158),(int)param_1[1],uVar2,
                uVar1);
  return;
}



// FUNCTION 144639d9e FUN_144639d9e body=49 status=ok
// SIG undefined FUN_144639d9e(void)

void FUN_144639d9e(longlong *param_1,int *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x78) + (longlong)*param_2 * 8);
  FUN_1497efb9a(uVar2,param_1[1]);
  FUN_140221fa2(uVar2,lVar1);
  return;
}



// FUNCTION 144639dcf FUN_144639dcf body=814 status=ok
// SIG undefined FUN_144639dcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144639dcf(void)

{
  char cVar1;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined *local_58;
  undefined4 uStack_50;
  uint uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14098d3d2(FUN_1446248f0,L"/Script/ChaosCloth",L"EChaosWeightMapTarget",&DAT_14cc26ee8);
  FUN_1400b22c2(&local_58,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_58,&DAT_14cc26f00);
  if (cVar1 == '\0') {
    _DAT_14cc26f00 = 0;
    uRam000000014cc26f08 = 0;
  }
  if (local_58 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_58 = &DAT_14a19662d;
  uStack_50 = 4;
  uStack_4c = uStack_4c & 0xffffff00;
  FUN_14001a6c0(&local_58,1);
  local_68 = 1;
  ppuStack_70 = &PTR_FUN_14be828b0;
  local_78 = 1;
  FUN_14282b410(L"/Script/ChaosCloth",&PTR_FUN_14be82900,2,&PTR_FUN_14be828d0);
  local_58 = (undefined *)0x92345b576a52329;
  uStack_50 = 0x98aed841;
  uStack_4c = 0xcf2f6ad8;
  _DAT_14cc26f70 = 0x76a52329;
  uRam000000014cc26f74 = 0x92345b5;
  uRam000000014cc26f78 = 0x98aed841;
  uRam000000014cc26f7c = 0xcf2f6ad8;
  FUN_141005458(&local_58,5,L"ChaosClothConfigVer",0);
  atexit((_func_5014 *)&LAB_144624962);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc27010,L"p.ChaosCloth.UseTimeStepSmoothing",&DAT_14c7679e0,
                L"Use time step smoothing to avoid jitter during drastic changes in time steps.");
  atexit(FUN_14462496e);
  _DAT_14cc27020 = 0;
  uRam000000014cc27028 = 0;
  DAT_14cc27030 = 0xc08ea551e0000000;
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc26fe8,L"p.ChaosCloth.LegacyDisablesAccurateWind",&local_58,
                L"Whether using the Legacy wind model switches off the accurate wind model, or adds up to it"
               );
  atexit(FUN_144628b15);
  local_58 = (undefined *)CONCAT44(local_58._4_4_,0x3f800000);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140a6b41e(&DAT_14cc26fd0,L"p.ChaosCloth.GravityMultiplier",&local_58,
                L"Scalar multiplier applied at the final stage of the cloth\'s gravity formulation."
               );
  atexit(FUN_144628b5a);
  local_58 = (undefined *)CONCAT71(local_58._1_7_,1);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_140bd5914(&DAT_14cc271b0,L"p.ChaosCloth.UseOptimizedTaperedCapsule",&local_58,
                L"Use the optimized TaperedCapsule code instead of using a tapered cylinder and two spheres"
               );
  atexit(FUN_14462d486);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosCloth",&PTR_FUN_14be83640,1,0);
  local_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/ChaosCloth",&PTR_FUN_14be85010,2,0);
  _DAT_14cc272c0 = 0x3e143d3b;
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc272f8,L"p.ChaosCloth.Solver.DisableTimeDependentNumIterations",
                &DAT_14cc27308,L"Make the number of iterations independent from the time step.");
  atexit(FUN_14462e008);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_14153156c(&DAT_14cc27310,L"p.ChaosCloth.Solver.UseVelocityScale",&DAT_14c7679e1,
                L"Use the velocity scale to compensate for clamping to MaxPhysicsDelta, in order to avoid miscalculating velocities during hitches."
               );
  atexit(FUN_14462e04d);
  local_78 = local_78 & 0xffffffff00000000;
  FUN_1415c789c(&DAT_14cc27320,L"p.ChaosCloth.Solver.MaxVelocity",&DAT_14cc27330,
                L"Maximum relative velocity of the cloth particles relatively to their animated positions equivalent. 0 to disable."
               );
  atexit(FUN_14462e092);
  DAT_14cc27334 = 0;
  DAT_14cc2733c = 0xc4752a8f;
  DAT_14cc27340 = 0;
  DAT_14cc27348 = 0;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463a10c FUN_14463a10c body=256 status=ok
// SIG undefined FUN_14463a10c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463a10c(void)

{
  char cVar1;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined *local_28;
  undefined4 uStack_20;
  uint uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined *)0x800000014be8766e;
  local_2c = 10;
  uStack_20 = FUN_14577453c();
  uStack_1c = CONCAT31(uStack_1c._1_3_,1);
  FUN_14675e60a(&local_28);
  local_28 = (undefined *)0x55c840ae5fbc6907;
  uStack_20 = 0x8e67f184;
  uStack_1c = 0x5efff13f;
  _DAT_14cc27394 = 0x5fbc6907;
  uRam000000014cc27398 = 0x55c840ae;
  uRam000000014cc2739c = 0x8e67f184;
  uRam000000014cc273a0 = 0x5efff13f;
  FUN_141005458(&local_28,1,L"ChaosClothSharedConfigVer",0);
  atexit((_func_5014 *)&LAB_14463a100);
  FUN_1400b22c2(&local_28,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_28,&DAT_14cc273a4);
  if (cVar1 == '\0') {
    _DAT_14cc273a4 = 0;
    uRam000000014cc273ac = 0;
  }
  if (local_28 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  local_28 = &DAT_14a19662d;
  uStack_20 = 4;
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_14001a6c0(&local_28,1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463a210 FUN_14463a210 body=1385 status=ok
// SIG undefined FUN_14463a210(void)

void FUN_14463a210(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[2] = 0;
  local_48[3] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_48 + 2);
            goto LAB_14463a3dc;
          }
        }
        plVar9 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (plVar9 != local_48 + 2) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_48 + 2,plVar9,(int)plVar4[6]);
          }
          else {
            memcpy(local_48 + 2,plVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_48 + 2,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_48 + 2,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_48 + 2);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48 + 2);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[2] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48 + 2);
    }
  }
LAB_14463a3dc:
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c963e88) {
    FUN_144b3d300(&DAT_14c963e88);
    if (DAT_14c963e88 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_140dafe7a;
      local_60 = 0;
      local_68 = 0xc001;
      FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
      atexit(FUN_142829758);
      _Init_thread_footer(&DAT_14c963e88);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar5 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar5;
      *(longlong *)(param_2 + 0x40) = lVar5;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar3)(plVar4);
          if (cVar7 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,local_48);
            goto LAB_14463a58f;
          }
        }
        plVar9 = (longlong *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (plVar9 != local_48) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,local_48,plVar9,(int)plVar4[6]);
          }
          else {
            memcpy(local_48,plVar9,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar4[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,local_48,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,local_48,lVar5);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar8;
        puVar8 = puVar6 + 2;
      } while ((longlong *)*puVar6 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar6[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48[0] = *(longlong *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,local_48);
    }
  }
LAB_14463a58f:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463a77a FUN_14463a77a body=222 status=ok
// SIG undefined FUN_14463a77a(void)

void FUN_14463a77a(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  lVar2 = (longlong)(int)(*(int *)(param_3 + 1) + (uint)(*(int *)(param_3 + 1) == 0));
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((ulonglong)(*(longlong *)(param_1 + 0x28) - lVar1) < lVar2 * 2 + 0x15U) {
    FUN_14463a858(param_1);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x20) + lVar1) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1 + 8;
  *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar1) = lVar2;
  lVar1 = *(longlong *)(param_1 + 0x30) + 8;
  *(longlong *)(param_1 + 0x30) = lVar1;
  memcpy((void *)(lVar1 + *(longlong *)(param_1 + 0x20)),(void *)*param_3,lVar2 * 2);
  lVar1 = lVar2 * 2 + *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + lVar1) = 0;
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1 + 1;
  *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 1 + lVar1) = *param_4;
  *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 4;
                    /* WARNING: Could not recover jumptable at 0x00014463a851. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 14463a858 FUN_14463a858 body=125 status=ok
// SIG undefined FUN_14463a858(void)

void FUN_14463a858(longlong param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  while (iVar1 != 0) {
    FUN_14000f986(0x3a83126f);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + 0x10);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  memcpy(*(void **)(*(longlong *)(param_1 + 0x60) + 8),*(void **)(param_1 + 0x20),
         *(size_t *)(param_1 + 0x30));
  LOCK();
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x10) = *(undefined4 *)(param_1 + 0x30);
  UNLOCK();
  *(undefined8 *)(param_1 + 0x30) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014463a8ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x38));
  return;
}



// FUNCTION 14463a8d6 FUN_14463a8d6 body=815 status=ok
// SIG undefined FUN_14463a8d6(void)

undefined8 FUN_14463a8d6(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_2b8 [40];
  longlong local_290;
  longlong local_288 [2];
  char *local_278;
  int local_270;
  undefined1 local_26c;
  char *local_268;
  undefined4 local_260;
  undefined1 local_25c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (*(int *)(param_1 + 0x14) == 0) {
    local_290 = param_1 + 0x30;
    do {
      if (*(int *)(param_1 + 0x10) != 0) {
        local_268 = "GbxElasticTelemetry";
        local_260 = 0x13;
        local_25c = 0;
        uVar8 = FUN_14001a6c0(&local_268,1);
        plVar9 = (longlong *)FUN_1447c1074(uVar8);
        (**(code **)(*plVar9 + 0x98))(plVar9);
        FUN_149803b82();
        if (*(int *)(param_1 + 0x10) != 0) {
          uVar12 = 0;
          do {
            lVar4 = *(longlong *)(param_1 + 8);
            puVar1 = (undefined8 *)(lVar4 + uVar12);
            uVar5 = *puVar1;
            lVar6 = puVar1[1];
            memcpy(&local_268,puVar1 + 2,lVar6 * 2);
            lVar2 = uVar12 + lVar6 * 2;
            lVar11 = lVar2 + 0x10;
            uVar3 = *(undefined1 *)(lVar4 + lVar11);
            FUN_140002266(local_288,L"{\"Frame\":%lld,\"Stat\":\"%s\",",uVar5,&local_268);
            switch(uVar3) {
            case 0:
              FUN_140002266(&local_278,L"\"Value\":%.17g,",
                            (double)*(float *)(*(longlong *)(param_1 + 8) + 1 + lVar11));
              break;
            case 1:
              FUN_140002266(&local_278,L"\"Value\":%.17g,",
                            *(undefined8 *)(*(longlong *)(param_1 + 8) + 1 + lVar11));
              goto LAB_14463aacc;
            case 2:
              FUN_140002266(&local_278,L"\"Value\":%d,",
                            *(undefined4 *)(*(longlong *)(param_1 + 8) + 1 + lVar11));
              break;
            case 3:
              FUN_140002266(&local_278,L"\"Value\":%llu,",
                            *(undefined8 *)(*(longlong *)(param_1 + 8) + 1 + lVar11));
LAB_14463aacc:
              iVar7 = local_270 + -1;
              if (local_270 == 0) {
                iVar7 = 0;
              }
              FUN_1400020e8(local_288,local_278,iVar7);
              if (local_278 != (char *)0x0) {
                FUN_1400020a8();
              }
              uVar12 = lVar2 + 0x19;
              goto LAB_14463ab03;
            default:
              uVar12 = uVar12 + lVar6 * 2 + 0x11;
              goto LAB_14463ab03;
            }
            iVar7 = local_270 + -1;
            if (local_270 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(local_288,local_278,iVar7);
            if (local_278 != (char *)0x0) {
              FUN_1400020a8();
            }
            uVar12 = lVar2 + 0x15;
LAB_14463ab03:
            puVar10 = &DAT_149dfb77a;
            if (*(int *)(param_1 + 0x28) != 0) {
              puVar10 = *(undefined2 **)(param_1 + 0x20);
            }
            FUN_140002266(&local_278,L"\"Source\":\"%s\"}",puVar10);
            iVar7 = local_270 + -1;
            if (local_270 == 0) {
              iVar7 = 0;
            }
            FUN_1400020e8(local_288,local_278,iVar7);
            if (local_278 != (char *)0x0) {
              FUN_1400020a8();
            }
            local_278 = "GbxElasticTelemetry";
            local_270 = 0x13;
            local_26c = 0;
            uVar8 = FUN_14001a6c0(&local_278,1);
            plVar9 = (longlong *)FUN_1447c1074(uVar8);
            (**(code **)(*plVar9 + 0x88))(plVar9,local_290,local_288);
            if (local_288[0] != 0) {
              FUN_1400020a8();
            }
          } while (uVar12 < (ulonglong)(longlong)*(int *)(param_1 + 0x10));
        }
        local_278 = "GbxElasticTelemetry";
        local_270 = 0x13;
        local_26c = 0;
        uVar8 = FUN_14001a6c0(&local_278,1);
        plVar9 = (longlong *)FUN_1447c1074(uVar8);
        (**(code **)(*plVar9 + 0xa0))(plVar9);
        LOCK();
        *(undefined4 *)(param_1 + 0x10) = 0;
        UNLOCK();
      }
      FUN_14000f986(0x3c23d70a);
    } while (*(int *)(param_1 + 0x14) == 0);
  }
  if ((local_60 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 14463ac06 FUN_14463ac06 body=1424 status=ok
// SIG undefined FUN_14463ac06(void)

void FUN_14463ac06(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  size_t sVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  wchar_t *pwVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  FUN_140056680(&local_50,&DAT_14c846b20);
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  cVar4 = FUN_14054d46e(puVar8,L"ExportTelemetry");
  if (cVar4 != '\0') goto LAB_14463ac76;
  puVar8 = local_50;
  if (local_48 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  local_98 = 0;
  cVar4 = FUN_14063337c(puVar8,L"-ExportTelemetry=",&local_68,0);
  if ((cVar4 == '\0') || ((int)uStack_60 < 2)) goto LAB_14463ac76;
  FUN_140b7cf16(&local_68,&local_88);
  FUN_140db34f4(&local_88,0x22,0);
  local_78 = local_88;
  uStack_70 = uStack_80;
  local_88 = (wchar_t *)0x0;
  uStack_80 = 0;
  FUN_140ded312(&local_78);
  uVar3 = uStack_70;
  pwVar9 = local_78;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  if (local_68 == (wchar_t *)0x0) {
    local_68 = pwVar9;
    uStack_60 = uVar3;
  }
  else {
    FUN_1400020a8();
    local_68 = pwVar9;
    uStack_60 = uVar3;
    if (local_78 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_1403de9f2(&local_68,&local_78,&DAT_149e06196,1);
  FUN_1400b22c2(&local_88,&DAT_14be88a64);
  pwVar9 = local_88;
  if ((int)uStack_80 == 0) {
    pwVar9 = L"";
  }
  if (pwVar9 != (wchar_t *)0x0) {
    sVar6 = wcslen(pwVar9);
    local_90 = 0xffffffff;
    local_98 = local_98 & 0xffffffff00000000;
    FUN_1447ee042(&local_68,pwVar9,sVar6 & 0xffffffff,1);
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,&DAT_14b3fdf44);
  pwVar9 = local_88;
  if ((int)uStack_80 == 0) {
    pwVar9 = L"";
  }
  if (pwVar9 == (wchar_t *)0x0) {
    bVar11 = false;
  }
  else {
    sVar6 = wcslen(pwVar9);
    local_90 = 0xffffffff;
    local_98 = local_98 & 0xffffffff00000000;
    iVar5 = FUN_1447ee042(&local_68,pwVar9,sVar6 & 0xffffffff,1);
    bVar11 = iVar5 != -1;
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,"loadtimes");
  pwVar9 = local_88;
  if ((int)uStack_80 == 0) {
    pwVar9 = L"";
  }
  if (pwVar9 == (wchar_t *)0x0) {
    bVar12 = false;
  }
  else {
    sVar6 = wcslen(pwVar9);
    local_90 = 0xffffffff;
    local_98 = local_98 & 0xffffffff00000000;
    iVar5 = FUN_1447ee042(&local_68,pwVar9,sVar6 & 0xffffffff,1);
    bVar12 = iVar5 != -1;
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400b22c2(&local_88,&DAT_14b9b0300);
  pwVar9 = L"";
  if ((int)uStack_80 != 0) {
    pwVar9 = local_88;
  }
  if (pwVar9 != (wchar_t *)0x0) {
    sVar6 = wcslen(pwVar9);
    local_90 = 0xffffffff;
    local_98 = local_98 & 0xffffffff00000000;
    FUN_1447ee042(&local_68,pwVar9,sVar6 & 0xffffffff,1);
  }
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_78,uStack_70 & 0xffffffff);
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (bVar11) {
    plVar7 = (longlong *)FUN_14001cc68(0x80,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14be88cc0;
    FUN_1498040f2(plVar7 + 2);
    plVar7[2] = (longlong)&PTR_FUN_14be88ce0;
    if (plVar7 == (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x18) = 0x10;
      plVar10 = *(longlong **)(param_1 + 0x20);
      if (plVar10 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x20) = 0;
LAB_14463b10e:
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_14463b14f;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *(longlong **)(param_1 + 0x18) = plVar7 + 2;
      plVar10 = *(longlong **)(param_1 + 0x20);
      if (plVar7 == plVar10) {
        LOCK();
        plVar10 = plVar7 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
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
      else {
        *(longlong **)(param_1 + 0x20) = plVar7;
        if (plVar10 != (longlong *)0x0) goto LAB_14463b10e;
      }
LAB_14463b14f:
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))();
  }
  if (!bVar12) goto LAB_14463ac76;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14be88d60;
  plVar7[2] = (longlong)&PTR_LAB_149e668b0;
  *(undefined2 *)(plVar7 + 3) = 0;
  FUN_1405bceb4(plVar7 + 2);
  plVar7[2] = (longlong)&PTR_FUN_14be88a00;
  if (plVar7 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x28) = 0x10;
    plVar10 = *(longlong **)(param_1 + 0x30);
    if (plVar10 == (longlong *)0x0) goto LAB_14463ac76;
    *(undefined8 *)(param_1 + 0x30) = 0;
LAB_14463b021:
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    if (plVar7 == (longlong *)0x0) goto LAB_14463ac76;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x28) = plVar7 + 2;
    plVar10 = *(longlong **)(param_1 + 0x30);
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x30) = plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_14463b021;
    }
  }
  LOCK();
  plVar10 = plVar7 + 1;
  *(int *)plVar10 = (int)*plVar10 + -1;
  UNLOCK();
  if ((int)*plVar10 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
    }
  }
LAB_14463ac76:
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14463b198 FUN_14463b198 body=211 status=ok
// SIG undefined FUN_14463b198(void)

void FUN_14463b198(longlong param_1)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_149803b82();
  *(longlong *)(param_1 + 0x68) = lVar2;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x84) != 0)) {
    iVar1 = *(int *)(lVar2 + 0x50);
    if (1 < (ulonglong)(longlong)iVar1) {
      local_38 = (void *)0x0;
      _Src = *(void **)(lVar2 + 0x48);
      local_30 = iVar1;
      FUN_1446dd670(&local_38,iVar1,0);
      memcpy(local_38,_Src,(longlong)iVar1 * 2);
      FUN_14980378e(param_1,&local_38);
      FUN_149803bf2(&DAT_14c8673d8,local_40,param_1,&LAB_149803cb8);
      FUN_149803bf2(&DAT_14c867438,local_40,param_1,FUN_149803cbe);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463b27a FUN_14463b27a body=202 status=ok
// SIG undefined FUN_14463b27a(void)

void FUN_14463b27a(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_14282b410(L"/Script/GbxTelemetry",&PTR_FUN_14be88010,1,0);
  uStack_50 = 0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxTelemetry",&PTR_FUN_14be888c0,1,&PTR_FUN_14be88890);
  local_38 = 0x800000014be88a72;
  local_24 = 0xc;
  local_30 = FUN_14577453c();
  local_2c = 1;
  FUN_14675e9fe(&local_38);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463b348 FUN_14463b348 body=144 status=ok
// SIG undefined FUN_14463b348(void)

void FUN_14463b348(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x20);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14463e64c((longlong *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1498067de(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14463b3d8 FUN_14463b3d8 body=466 status=ok
// SIG undefined FUN_14463b3d8(void)

undefined4 *
FUN_14463b3d8(longlong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  char *pcVar12;
  
  lVar9 = (longlong)*(int *)(*(longlong *)(param_4 + 8) + 0x10);
  if (0 < lVar9) {
    lVar10 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_4 + 8) + 8) + lVar10) == param_4) {
        pcVar12 = *(char **)(*(longlong *)(param_1 + 0x10) + lVar10 * 2);
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8 + lVar10 * 2);
        if (plVar11 == (longlong *)0x0) {
          plVar11 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
        }
        goto LAB_14463b441;
      }
      lVar10 = lVar10 + 8;
    } while (lVar9 * 8 != lVar10);
  }
  plVar11 = (longlong *)0x0;
  pcVar12 = (char *)0x0;
LAB_14463b441:
  iVar2 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar2 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      *(char **)(*(longlong *)(lVar9 + lVar10) + 8) = pcVar12;
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  if ((*pcVar12 == '\0') && (iVar2 = *(int *)(param_1 + 0x28), (longlong)iVar2 != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar9 + lVar10);
      (**(code **)(*plVar3 + 8))(plVar3,param_3,param_4,param_5);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
    iVar2 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar9 = *(longlong *)(param_1 + 0x20);
      lVar10 = 0;
      do {
        plVar3 = *(longlong **)(lVar9 + lVar10);
        (**(code **)(*plVar3 + 0x10))(plVar3,param_3,param_4,param_5);
        lVar10 = lVar10 + 8;
      } while ((longlong)iVar2 * 8 != lVar10);
    }
  }
  uVar8 = *(uint *)(param_1 + 8);
  if (((uVar8 | 2) == 3) && (iVar2 = *(int *)(param_1 + 0x28), (longlong)iVar2 != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar9 + lVar10);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_3,param_4,param_5);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
    uVar8 = *(uint *)(param_1 + 8);
  }
  if (((uVar8 & 0xfffffffe) == 2) && (iVar2 = *(int *)(param_1 + 0x28), (longlong)iVar2 != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x20);
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar9 + lVar10);
      (**(code **)(*plVar3 + 0x20))(plVar3,param_3,param_4,param_5);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar2 * 8 != lVar10);
  }
  uVar5 = *(undefined4 *)(pcVar12 + 0xa7c);
  uVar6 = *(undefined4 *)(pcVar12 + 0xa80);
  uVar7 = *(undefined4 *)(pcVar12 + 0xa84);
  uVar4 = *(undefined8 *)(pcVar12 + 0xa88);
  *param_2 = *(undefined4 *)(pcVar12 + 0xa78);
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  *(undefined8 *)(param_2 + 4) = uVar4;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  return param_2;
}



// FUNCTION 14463b5aa FUN_14463b5aa body=282 status=ok
// SIG undefined FUN_14463b5aa(void)

void FUN_14463b5aa(void)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_98 [32];
  undefined *local_78;
  undefined4 local_70;
  longlong *local_68;
  longlong *local_60;
  longlong local_58;
  int local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  wchar_t *local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)FUN_144a8054c();
  local_78 = &DAT_14b40a1d2;
  local_70 = 3;
  (**(code **)(*plVar2 + 0x70))(plVar2,&local_68);
  (**(code **)(*local_68 + 0x20))(local_68,&local_58);
  local_38 = local_58;
  local_30 = local_50 + -1;
  if (local_50 == 0) {
    local_30 = 0;
  }
  local_28 = L"Shaders";
  local_20 = 7;
  FUN_140bee87a(local_48,&local_38,2);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_60 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))(local_60);
      }
    }
  }
  FUN_140056680(&local_38,L"/Plugin/FSR");
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463b6c7 FUN_14463b6c7 body=69 status=ok
// SIG undefined FUN_14463b6c7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463b6c7(void)

{
  _DAT_14cc27460 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463b709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27468,1);
  return;
}



// FUNCTION 14463b70c FUN_14463b70c body=1010 status=ok
// SIG undefined FUN_14463b70c(void)

void FUN_14463b70c(undefined8 param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  int iVar5;
  int *piVar6;
  void *_Dst;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  bool bVar12;
  longlong lVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  lVar11 = DAT_14cc27470;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  piVar6 = &DAT_14c760db4;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    piVar6 = (int *)(*(longlong *)(param_2 + 0x40) + 8);
  }
  if (*piVar6 < 3) goto LAB_14463b792;
  iVar5 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (((iVar5 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar5 == 2)) {
    uVar9 = 0;
  }
  else if (iVar5 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar9 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar9 = 1;
  }
  if (*(int *)(lVar11 + uVar9 * 4) < 1) goto LAB_14463b792;
  local_58 = 0;
  uStack_50 = 0;
  iVar5 = *(int *)(param_2 + 0x10);
  if (iVar5 < 1) {
    iVar5 = 0;
LAB_14463b8eb:
    lVar11 = local_58;
    uVar8 = FUN_14001cc68(0x30,0x10);
    local_68 = 0;
    local_60 = iVar5;
    if (iVar5 == 0) {
      local_5c = 0;
    }
    else {
      FUN_149806828(&local_68,iVar5);
      FUN_149806880(local_68,lVar11,iVar5);
    }
    FUN_1498044e2(uVar8,1,&local_68);
    *(undefined8 *)(param_2 + 400) = uVar8;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cc27d68) {
      FUN_144b3d300(&DAT_14cc27d68);
      if (DAT_14cc27d68 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cc27d60 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.FidelityFX.FSR.RCAS.Enabled",1);
        _Init_thread_footer(&DAT_14cc27d68);
      }
    }
    iVar5 = (**(code **)(*DAT_14cc27d60 + 0xb0))();
    if (0 < iVar5) {
LAB_14463b9d7:
      uVar8 = FUN_14001cc68(0x30,0x10);
      uVar9 = uStack_50;
      lVar11 = local_58;
      local_78 = 0;
      local_70 = (int)uStack_50;
      if ((int)uStack_50 == 0) {
        local_6c = 0;
      }
      else {
        FUN_149806828(&local_78,uStack_50 & 0xffffffff);
        FUN_149806880(local_78,lVar11,uVar9 & 0xffffffff);
      }
      puVar7 = &local_78;
      uVar10 = 2;
      goto LAB_14463ba37;
    }
    cVar1 = FUN_14463baff();
    if (cVar1 != '\0') goto LAB_14463b9d7;
  }
  else {
    bVar12 = false;
    lVar11 = 0;
    do {
      lVar13 = *(longlong *)(*(longlong *)(param_2 + 8) + lVar11 * 8);
      if (lVar13 != 0) {
        iVar5 = *(int *)(lVar13 + 0x3024);
        _Dst = (void *)FUN_14001cc68(0xa90);
        memset(_Dst,0,0xa90);
        FUN_1498048e6(_Dst);
        *(undefined4 *)((longlong)_Dst + 8) = *(undefined4 *)(lVar13 + 0x2ac4);
        *(undefined4 *)((longlong)_Dst + 0xc) = *(undefined4 *)(lVar13 + 0x2ac0);
        *(undefined4 *)((longlong)_Dst + 0x10) = *(undefined4 *)(lVar13 + 0x280c);
        *(undefined4 *)((longlong)_Dst + 0x14) = *(undefined4 *)(lVar13 + 0x2810);
        puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        uVar9 = uStack_50;
        puVar7[1] = &DAT_100000001;
        *puVar7 = &PTR_LAB_14be8a8e0;
        puVar7[2] = _Dst;
        lVar13 = (longlong)(int)uStack_50;
        uVar2 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar2);
        if (uStack_50._4_4_ < uVar2) {
          FUN_149806ad0(&local_58,uVar9 & 0xffffffff);
        }
        bVar12 = (bool)(bVar12 | iVar5 == 1);
        *(void **)(local_58 + lVar13 * 0x10) = _Dst;
        *(undefined8 **)(local_58 + 8 + lVar13 * 0x10) = puVar7;
        iVar5 = *(int *)(param_2 + 0x10);
      }
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar5);
    if (!bVar12) {
      iVar5 = (int)uStack_50;
      goto LAB_14463b8eb;
    }
    uVar8 = FUN_14001cc68(0x30,0x10);
    uVar9 = uStack_50;
    lVar11 = local_58;
    local_88 = 0;
    local_80 = (int)uStack_50;
    if ((int)uStack_50 == 0) {
      local_7c = 0;
    }
    else {
      FUN_149806828(&local_88,uStack_50 & 0xffffffff);
      FUN_149806880(local_88,lVar11,uVar9 & 0xffffffff);
    }
    puVar7 = &local_88;
    uVar10 = 3;
LAB_14463ba37:
    FUN_1498044e2(uVar8,uVar10,puVar7);
    *(undefined8 *)(param_2 + 0x198) = uVar8;
  }
  FUN_1498067de(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14463b792:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463baff FUN_14463baff body=251 status=ok
// SIG undefined FUN_14463baff(void)

undefined8 FUN_14463baff(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  longlong *plVar6;
  undefined4 extraout_var;
  ulonglong uVar7;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc27d88) {
    FUN_144b3d300(&DAT_14cc27d88);
    if (DAT_14cc27d88 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar6 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.FidelityFX.FSR.Post.ExperimentalChromaticAberration",1);
      if (plVar6 == (longlong *)0x0) {
        DAT_14cc27d80 = 0;
      }
      else {
        DAT_14cc27d80 = (**(code **)(*plVar6 + 0x68))(plVar6);
      }
      _Init_thread_footer(&DAT_14cc27d88);
    }
  }
  lVar2 = DAT_14cc27d80;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar7 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar7 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar7 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar7 * 4));
}



// FUNCTION 14463bbfa FUN_14463bbfa body=69 status=ok
// SIG undefined FUN_14463bbfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463bbfa(void)

{
  _DAT_14cc27478 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463bc3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27480,1);
  return;
}



// FUNCTION 14463bc74 FUN_14463bc74 body=2824 status=ok
// SIG undefined FUN_14463bc74(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463bc74(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined1 local_159;
  longlong local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined4 local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  int local_128;
  int local_124;
  undefined4 local_120;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  uVar5 = DAT_14c9c0de0;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x22) != '\x01') goto LAB_14463bcab;
  if (*param_4 == 0) {
LAB_14463bcff:
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xf0);
    local_130 = 0;
    local_138 = 0;
    local_158 = 0;
    if (lVar10 != 0) {
      local_138 = *(longlong *)(lVar10 + 0x84);
      local_130 = 0;
      local_158 = lVar10;
    }
  }
  else {
    local_130 = param_4[1];
    local_138 = param_4[2];
    local_158 = *param_4;
    if (local_138 == local_130) goto LAB_14463bcff;
  }
  plVar1 = (longlong *)(param_2 + 0x70);
  puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(local_158 + 0x62) & 2) == 0) {
    puVar9 = puVar14 + 0x3c;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x1f0);
      puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar14 + 0x3c;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    *puVar14 = &PTR_FUN_14be8a8f8;
    puVar9 = puVar14 + 2;
    FUN_149806b56();
    iVar4 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar14;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa70);
    puVar14[2] = lVar10;
    puVar14[3] = uVar5;
    puVar14[0x1c] = local_158;
    puVar14[0x1d] = 0;
    *(undefined4 *)(puVar14 + 0x1e) = 0xffff0000;
    if (lVar10 == 0) {
      local_78 = _DAT_00000084;
      local_68 = 0;
    }
    else {
      local_78 = *(undefined8 *)(lVar10 + 0x84);
      local_68 = local_78;
    }
    local_70 = 0;
    FUN_144a2c7c2(&local_118);
    puVar13 = &local_118;
    puVar12 = puVar14 + 0xe;
    for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar12 = *puVar13;
      puVar13 = puVar13 + 1;
      puVar12 = puVar12 + 1;
    }
    fVar15 = *(float *)(*(longlong *)(param_1 + 8) + 0x410);
    fVar18 = 1.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    if (fVar15 < 0.9999) {
      fVar16 = *(float *)(*(longlong *)(param_1 + 8) + 0x40c) * 0.01;
      fVar18 = 1.0 / (1.0 - fVar15);
      fVar17 = fVar15;
    }
    *(float *)(puVar14 + 4) = fVar16 * 1.029 * fVar18;
    *(float *)((longlong)puVar14 + 0x24) = fVar16 * 0.5935999 * fVar18;
    *(float *)(puVar14 + 5) = fVar17;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = 0;
    lVar10 = *(longlong *)(param_1 + 8);
    uVar5 = *(undefined8 *)(lVar10 + 0x50);
    uVar6 = *(undefined8 *)(lVar10 + 0x58);
    uVar7 = *(undefined8 *)(lVar10 + 0x68);
    puVar14[0xc] = *(undefined8 *)(lVar10 + 0x60);
    puVar14[0xd] = uVar7;
    puVar14[10] = uVar5;
    puVar14[0xb] = uVar6;
    uVar5 = *(undefined8 *)(param_3 + 0x2468);
    puVar14[6] = *(undefined8 *)(param_3 + 0x2460);
    puVar14[7] = uVar5;
    *(float *)(puVar14 + 8) = -*(float *)(param_3 + 0x2460) / *(float *)(param_3 + 0x2468);
    *(float *)((longlong)puVar14 + 0x44) =
         -*(float *)(param_3 + 0x2464) / *(float *)(param_3 + 0x246c);
    *(float *)(puVar14 + 9) = 1.0 / *(float *)(param_3 + 0x2468);
    *(float *)((longlong)puVar14 + 0x4c) = 1.0 / *(float *)(param_3 + 0x246c);
    lVar10 = *(longlong *)(param_1 + 8);
    bVar2 = *(byte *)(lVar10 + 4);
    iVar4 = *(int *)(lVar10 + 0x18);
    iVar11 = 0;
    if (*(char *)(lVar10 + 0x23) == '\x01') {
      iVar11 = *(int *)(lVar10 + 0x1c);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145e7ab1e();
    FUN_1448e935e(uVar5,&local_118,&DAT_14cc274f8,iVar4 + (iVar11 + (uint)bVar2 * 2) * 4);
    FUN_145e7ab1e();
    uVar6 = local_118;
    local_150 = uStack_110;
    lVar10 = *(longlong *)(param_1 + 8);
    local_140 = (longlong)*(int *)(param_3 + 0x3090);
    local_144 = *(undefined4 *)(param_3 + 0x1dd4);
    local_148 = *(undefined4 *)(param_3 + 0x3094);
    local_159 = (&DAT_00001de6)[param_3];
    uVar5 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_140 * 2) * 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_180 = &LAB_14712ac08;
        local_188 = &LAB_14712ac0c;
        local_190 = &LAB_1472e3912;
        local_198 = &LAB_1472e3916;
        local_1a0 = FUN_1472e391a;
        local_1a8 = FUN_1472e3942;
        local_1c0 = L"ScreenPassVS";
        local_1c8 = L"/Engine/Private/ScreenPass.usf";
        local_170 = 0;
        local_178 = 0xe0;
        local_1b0 = 1;
        local_1b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    FUN_1448e935e(uVar5,&local_118,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_180 = &LAB_14712ac08;
        local_188 = &LAB_14712ac0c;
        local_190 = &LAB_1472e3912;
        local_198 = &LAB_1472e3916;
        local_1a0 = FUN_1472e391a;
        local_1a8 = FUN_1472e3942;
        local_1c0 = L"ScreenPassVS";
        local_1c8 = L"/Engine/Private/ScreenPass.usf";
        local_170 = 0;
        local_178 = 0xe0;
        local_1b0 = 1;
        local_1b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    puVar14 = uStack_110;
    uVar8 = local_118;
    uVar7 = DAT_14c9c0d98;
    uVar5 = DAT_14c9c0d50;
    FUN_145e7ad8c();
    local_118 = 0;
    uStack_110 = (undefined8 *)0x0;
    FUN_1448f70da(uVar6,&DAT_14cc27d90,puVar9,&local_118);
    local_118 = CONCAT44(local_144,(int)local_140);
    uStack_110 = (undefined8 *)
                 CONCAT17(local_78._2_1_,
                          CONCAT25((undefined2)local_78,CONCAT14(local_159,local_148)));
    local_108 = *(undefined8 *)(lVar10 + 0xa58);
    local_100 = *(undefined8 *)(lVar10 + 0xa60);
    local_f8 = *(undefined8 *)(lVar10 + 0xa68);
    local_d8 = uVar8;
    puStack_d0 = puVar14;
    local_c8 = uVar6;
    local_c0 = local_150;
    local_b8 = uVar5;
    local_b0 = uVar7;
    local_a8 = DAT_14ca94df8;
    local_a0 = 0;
    local_98 = uVar6;
    local_90 = local_150;
    local_80 = 0;
    local_f0 = local_108;
    local_e8 = local_100;
    local_e0 = local_f8;
    local_88 = puVar9;
    FUN_145e7ad8c();
    FUN_149806c02(param_2,&local_119,puVar9,&local_118);
  }
  else {
    puVar9 = puVar14 + 0x1e;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x100);
      puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar9 = puVar14 + 0x1e;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    *puVar14 = &PTR_FUN_14be8a918;
    puVar14[2] = 0;
    puVar14[3] = 0;
    *(undefined8 *)((longlong)puVar14 + 0x1c) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x24) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x2c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar14 + 0x34) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x3c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar14 + 0x44) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x4c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar14 + 0x54) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x5c) = 0x3f800000;
    *(undefined8 *)((longlong)puVar14 + 100) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x6c) = 0x3f800000;
    puVar14[0x1c] = 0;
    iVar4 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar4 * 8) = puVar14;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa70);
    puVar14[2] = lVar10;
    puVar14[3] = uVar5;
    if (lVar10 == 0) {
      local_78 = _DAT_00000084;
      local_68 = 0;
    }
    else {
      local_78 = *(undefined8 *)(lVar10 + 0x84);
      local_68 = local_78;
    }
    local_70 = 0;
    FUN_144a2c7c2(&local_118);
    puVar9 = &local_118;
    puVar13 = puVar14 + 0xe;
    for (lVar10 = 0xe; lVar10 != 0; lVar10 = lVar10 + -1) {
      *puVar13 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar13 = puVar13 + 1;
    }
    fVar15 = *(float *)(*(longlong *)(param_1 + 8) + 0x410);
    if (0.9999 <= fVar15) {
      fVar15 = 0.0;
      fVar16 = 1.0;
      fVar17 = 0.0;
    }
    else {
      fVar17 = *(float *)(*(longlong *)(param_1 + 8) + 0x40c) * 0.01;
      fVar16 = 1.0 / (1.0 - fVar15);
    }
    *(float *)(puVar14 + 4) = fVar17 * 1.029 * fVar16;
    *(float *)((longlong)puVar14 + 0x24) = fVar17 * 0.5935999 * fVar16;
    *(float *)(puVar14 + 5) = fVar15;
    *(undefined4 *)((longlong)puVar14 + 0x2c) = 0;
    uVar3 = *(undefined1 *)(local_158 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar13 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar9) {
      FUN_140023dd8(plVar1,0x50);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar13 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar9;
    puVar13[1] = *(undefined8 *)(local_158 + 8);
    puVar13[2] = 0;
    iVar11 = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar3;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = local_158;
    iVar4 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar4 + 1U;
    puVar9 = puVar14 + 6;
    if (*(uint *)(param_2 + 0x1a4) < iVar4 + 1U) {
      local_150 = puVar14 + 6;
      FUN_1447568fc(param_2 + 0x198,iVar4);
      puVar9 = local_150;
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar4 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar14[0x1c] = puVar13;
    lVar10 = *(longlong *)(param_1 + 8);
    uVar5 = *(undefined8 *)(lVar10 + 0x50);
    uVar6 = *(undefined8 *)(lVar10 + 0x58);
    uVar7 = *(undefined8 *)(lVar10 + 0x68);
    puVar14[0xc] = *(undefined8 *)(lVar10 + 0x60);
    puVar14[0xd] = uVar7;
    puVar14[10] = uVar5;
    puVar14[0xb] = uVar6;
    uVar5 = *(undefined8 *)(param_3 + 0x2468);
    *puVar9 = *(undefined8 *)(param_3 + 0x2460);
    puVar9[1] = uVar5;
    *(float *)(puVar14 + 8) = -*(float *)(param_3 + 0x2460) / *(float *)(param_3 + 0x2468);
    *(float *)((longlong)puVar14 + 0x44) =
         -*(float *)(param_3 + 0x2464) / *(float *)(param_3 + 0x246c);
    *(float *)(puVar14 + 9) = 1.0 / *(float *)(param_3 + 0x2468);
    *(float *)((longlong)puVar14 + 0x4c) = 1.0 / *(float *)(param_3 + 0x246c);
    lVar10 = *(longlong *)(param_1 + 8);
    bVar2 = *(byte *)(lVar10 + 4);
    iVar4 = *(int *)(lVar10 + 0x18);
    if (*(char *)(lVar10 + 0x23) == '\x01') {
      iVar11 = *(int *)(lVar10 + 0x1c);
    }
    uVar5 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145f822fa();
    FUN_1448e935e(uVar5,&local_118,&DAT_14cc27620,iVar4 + (iVar11 + (uint)bVar2 * 2) * 4);
    FUN_145f822fa();
    lVar10 = *(longlong *)(param_1 + 8);
    iVar11 = *(int *)(lVar10 + 0xa6c) - *(int *)(lVar10 + 0xa64);
    iVar4 = iVar11 + 0xf;
    local_124 = iVar11 + 0x1e;
    if (-1 < iVar4) {
      local_124 = iVar4;
    }
    local_124 = local_124 >> 4;
    iVar11 = *(int *)(lVar10 + 0xa68) - *(int *)(lVar10 + 0xa60);
    iVar4 = iVar11 + 0xf;
    local_128 = iVar11 + 0x1e;
    if (-1 < iVar4) {
      local_128 = iVar4;
    }
    local_128 = local_128 >> 4;
    local_1c8 = (wchar_t *)&local_128;
    local_120 = 1;
    FUN_149804f80(param_2,&local_78,&local_118,puVar14 + 2);
  }
  lVar10 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar10 + 0xa78) = local_158;
  *(longlong *)(lVar10 + 0xa80) = local_130;
  *(longlong *)(lVar10 + 0xa88) = local_138;
LAB_14463bcab:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463c77d FUN_14463c77d body=69 status=ok
// SIG undefined FUN_14463c77d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463c77d(void)

{
  _DAT_14cc276f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463c7bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc276f8,1);
  return;
}



// FUNCTION 14463c7c2 FUN_14463c7c2 body=69 status=ok
// SIG undefined FUN_14463c7c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463c7c2(void)

{
  _DAT_14cc27700 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463c804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27708,1);
  return;
}



// FUNCTION 14463c807 FUN_14463c807 body=69 status=ok
// SIG undefined FUN_14463c807(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463c807(void)

{
  _DAT_14cc27718 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463c849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27720,1);
  return;
}



// FUNCTION 14463c954 FUN_14463c954 body=3036 status=ok
// SIG undefined FUN_14463c954(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463c954(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_278 [32];
  wchar_t *local_258;
  wchar_t *local_250;
  undefined4 local_248;
  undefined4 local_240;
  code *local_238;
  code *local_230;
  undefined1 *local_228;
  undefined1 *local_220;
  undefined1 *local_218;
  undefined1 *local_210;
  undefined4 local_208;
  undefined8 local_200;
  char local_1f1;
  longlong local_1f0;
  longlong *local_1e8;
  undefined4 local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  int local_1c8;
  int local_1c4;
  undefined4 local_1c0;
  undefined1 local_1b9;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a8 [4];
  undefined8 local_1a4;
  undefined2 local_19c;
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  char cStack_18c;
  undefined1 uStack_18b;
  undefined1 uStack_18a;
  undefined1 uStack_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined1 local_100;
  undefined2 local_f3;
  undefined1 local_f1;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  lVar3 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar3 + 0x20) != '\x01') goto LAB_14463c9df;
  fVar15 = (float)(*(int *)(lVar3 + 0xa54) - *(int *)(lVar3 + 0xa4c));
  fVar16 = (float)(*(int *)(lVar3 + 0xa50) - *(int *)(lVar3 + 0xa48));
  fVar19 = 1.0 / (float)(*(int *)(lVar3 + 0xa68) - *(int *)(lVar3 + 0xa60));
  fVar21 = 1.0 / (float)(*(int *)(lVar3 + 0xa6c) - *(int *)(lVar3 + 0xa64));
  fVar18 = 1.0 / (float)*(int *)(param_4[4] + 0x84);
  fVar17 = 1.0 / (float)*(int *)(param_4[4] + 0x88);
  if ((*(char *)(lVar3 + 0x21) == '\0') &&
     (lVar14 = *param_4, lVar14 != 0 && *(char *)(lVar3 + 0x22) == '\0')) {
    plVar9 = param_4 + 1;
    plVar11 = param_4 + 2;
    if (((int)param_4[2] == (int)param_4[1]) &&
       (*(int *)((longlong)param_4 + 0x14) == *(int *)((longlong)param_4 + 0xc)))
    goto LAB_14463cb82;
  }
  else {
LAB_14463cb82:
    plVar9 = (longlong *)(lVar3 + 200);
    plVar11 = (longlong *)(lVar3 + 0xd0);
    lVar14 = *(longlong *)(lVar3 + 0xc0);
  }
  fVar20 = fVar19 * fVar16;
  fVar22 = fVar21 * fVar15;
  fVar23 = fVar17 + fVar17;
  fVar16 = fVar16 * 0.5 * fVar19 + -0.5 + (float)*(int *)(lVar3 + 0xa48);
  fVar15 = fVar15 * 0.5 * fVar21 + -0.5 + (float)*(int *)(lVar3 + 0xa4c);
  local_1d0 = *plVar11;
  local_1d8 = *plVar9;
  local_1f0 = CONCAT44(local_1f0._4_4_,fVar18 * 0.0);
  if (((*(byte *)(lVar14 + 0x62) & 2) == 0) || (*(char *)(lVar3 + 2) == '\x01')) {
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar12 + 0x32;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x1a0);
      puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 0x32;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    *puVar12 = &PTR_FUN_14be8a938;
    puVar8 = puVar12 + 2;
    FUN_1498072b0(puVar8);
    iVar2 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar12;
    *(float *)(puVar12 + 2) = fVar20;
    *(float *)((longlong)puVar12 + 0x14) = fVar22;
    *(float *)(puVar12 + 3) = fVar16;
    *(float *)((longlong)puVar12 + 0x1c) = fVar15;
    *(float *)(puVar12 + 4) = fVar18;
    *(float *)((longlong)puVar12 + 0x24) = fVar17;
    *(float *)(puVar12 + 5) = fVar18;
    *(float *)((longlong)puVar12 + 0x2c) = -fVar17;
    *(float *)(puVar12 + 6) = -fVar18;
    *(float *)((longlong)puVar12 + 0x34) = fVar23;
    *(float *)(puVar12 + 7) = fVar18;
    *(float *)((longlong)puVar12 + 0x3c) = fVar23;
    *(float *)(puVar12 + 8) = (float)local_1f0;
    *(float *)((longlong)puVar12 + 0x44) = fVar17 * 4.0;
    bVar7 = 0;
    puVar12[9] = 0;
    puVar12[0x11] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70);
    puVar12[0x10] = DAT_14c9c0de0;
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x68);
    puVar12[0xc] = *(undefined8 *)(lVar3 + 0x60);
    puVar12[0xd] = uVar6;
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    puVar12[0xe] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9d8);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9f0);
    *(float *)(puVar12 + 0xf) = (float)(int)uVar4;
    *(float *)((longlong)puVar12 + 0x7c) = (float)(int)((ulonglong)uVar4 >> 0x20);
    puVar12[0x12] = lVar14;
    puVar12[0x13] = 0;
    *(undefined4 *)(puVar12 + 0x14) = 0xffff0000;
    local_1a4 = 0;
    lVar3 = *(longlong *)(param_1 + 8);
    local_1a8[0] = *(undefined1 *)(lVar3 + 1);
    if (*(char *)(lVar3 + 4) == '\x01') {
      bVar7 = *(byte *)(lVar3 + 0x25);
    }
    local_19c = (ushort)bVar7 << 8;
    if ((*(char *)(lVar3 + 0x23) == '\x01') &&
       (local_19c = CONCAT11(bVar7,*(char *)(lVar3 + 0x25)), *(char *)(lVar3 + 0x25) == '\x01')) {
      local_1a4 = *(undefined8 *)(lVar3 + 0x18);
    }
    FUN_1498053ec(&local_1b8,*(undefined8 *)(param_3 + 0x13818),local_1a8);
    lVar3 = *(longlong *)(param_1 + 8);
    iVar2 = *(int *)(param_3 + 0x3090);
    local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,*(undefined4 *)(param_3 + 0x1dd4));
    local_1dc = *(undefined4 *)(param_3 + 0x3094);
    local_1f1 = (&DAT_00001de6)[param_3];
    uVar4 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar2 * 2) * 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_210 = &LAB_14712ac08;
        local_218 = &LAB_14712ac0c;
        local_220 = &LAB_1472e3912;
        local_228 = &LAB_1472e3916;
        local_230 = FUN_1472e391a;
        local_238 = FUN_1472e3942;
        local_250 = L"ScreenPassVS";
        local_258 = L"/Engine/Private/ScreenPass.usf";
        local_200 = 0;
        local_208 = 0xe0;
        local_240 = 1;
        local_248 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    local_1f0 = lVar14;
    FUN_1448e935e(uVar4,&local_198,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_210 = &LAB_14712ac08;
        local_218 = &LAB_14712ac0c;
        local_220 = &LAB_1472e3912;
        local_228 = &LAB_1472e3916;
        local_230 = FUN_1472e391a;
        local_238 = FUN_1472e3942;
        local_250 = L"ScreenPassVS";
        local_258 = L"/Engine/Private/ScreenPass.usf";
        local_200 = 0;
        local_208 = 0xe0;
        local_240 = 1;
        local_248 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    uVar5 = DAT_14c9c0d98;
    uVar4 = DAT_14c9c0d50;
    FUN_145ee455a();
    local_198 = 0;
    uStack_194 = 0;
    uStack_190 = 0;
    cStack_18c = 0;
    uStack_18b = 0;
    uStack_18a = 0;
    uStack_189 = 0;
    FUN_1448f70da(CONCAT44(uStack_1b4,local_1b8),&DAT_14cc28038,puVar8,&local_198);
    uStack_194 = local_1e8._0_4_;
    uStack_190 = local_1dc;
    cStack_18c = local_1f1;
    uStack_18b = (undefined1)local_f3;
    uStack_18a = (undefined1)((ushort)local_f3 >> 8);
    uStack_189 = local_f1;
    local_188 = *(undefined8 *)(lVar3 + 0xa58);
    local_180 = *(undefined8 *)(lVar3 + 0xa60);
    local_178 = *(undefined8 *)(lVar3 + 0xa68);
    local_170 = *(undefined8 *)(lVar3 + 0xa40);
    local_168 = *(undefined8 *)(lVar3 + 0xa48);
    local_160 = *(undefined8 *)(lVar3 + 0xa50);
    local_138 = uVar4;
    local_130 = uVar5;
    local_128 = DAT_14ca94df8;
    local_120 = 0;
    local_118 = local_1b8;
    uStack_114 = uStack_1b4;
    uStack_110 = uStack_1b0;
    uStack_10c = uStack_1ac;
    local_100 = 0;
    local_198 = iVar2;
    local_108 = puVar8;
    FUN_145ee455a();
    FUN_14980734c(param_2,&local_1b9,puVar8,&local_198);
    lVar14 = local_1f0;
  }
  else {
    plVar9 = (longlong *)(param_2 + 0x70);
    puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar12 + 0x14;
    fVar19 = fVar18 * 0.0;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(plVar9,0xb0);
      puVar12 = (undefined8 *)(*plVar9 + 0xfU & 0xfffffffffffffff0);
      puVar8 = puVar12 + 0x14;
      fVar19 = (float)local_1f0;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    *puVar12 = &PTR_FUN_14be8a958;
    puVar12[10] = 0;
    puVar12[0xb] = 0x3f80000000000000;
    puVar12[0xc] = 0;
    puVar12[0xd] = 0x3f80000000000000;
    puVar12[0x10] = 0;
    puVar12[0x11] = 0;
    puVar12[0x12] = 0;
    iVar2 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
    local_1e8 = plVar9;
    if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar2);
      fVar19 = (float)local_1f0;
    }
    plVar9 = local_1e8;
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar12;
    *(float *)(puVar12 + 2) = fVar20;
    *(float *)((longlong)puVar12 + 0x14) = fVar22;
    *(float *)(puVar12 + 3) = fVar16;
    *(float *)((longlong)puVar12 + 0x1c) = fVar15;
    *(float *)(puVar12 + 4) = fVar18;
    *(float *)((longlong)puVar12 + 0x24) = fVar17;
    *(float *)(puVar12 + 5) = fVar18;
    *(float *)((longlong)puVar12 + 0x2c) = -fVar17;
    *(float *)(puVar12 + 6) = -fVar18;
    *(float *)((longlong)puVar12 + 0x34) = fVar23;
    *(float *)(puVar12 + 7) = fVar18;
    *(float *)((longlong)puVar12 + 0x3c) = fVar23;
    *(float *)(puVar12 + 8) = fVar19;
    *(float *)((longlong)puVar12 + 0x44) = fVar17 * 4.0;
    puVar12[9] = 0;
    puVar12[0x11] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70);
    puVar12[0x10] = DAT_14c9c0de0;
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x68);
    puVar12[0xc] = *(undefined8 *)(lVar3 + 0x60);
    puVar12[0xd] = uVar6;
    puVar12[10] = uVar4;
    puVar12[0xb] = uVar5;
    puVar12[0xe] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9d8);
    uVar4 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9f0);
    *(float *)(puVar12 + 0xf) = (float)(int)uVar4;
    *(float *)((longlong)puVar12 + 0x7c) = (float)(int)((ulonglong)uVar4 >> 0x20);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
    uVar1 = *(undefined1 *)(lVar3 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar13 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
      FUN_140023dd8(local_1e8,0x50);
      puVar13 = (undefined8 *)(*plVar9 + 7U & 0xfffffffffffffff8);
      puVar8 = puVar13 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar8;
    puVar13[1] = *(undefined8 *)(lVar3 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar1;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar3;
    iVar2 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar2 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar2 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar2);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar2 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar12[0x12] = puVar13;
    cStack_18c = '\0';
    uStack_194 = 0;
    uStack_190 = 0;
    lVar3 = *(longlong *)(param_1 + 8);
    local_198 = CONCAT31(local_198._1_3_,*(undefined1 *)(lVar3 + 1));
    if (*(char *)(lVar3 + 4) == '\x01') {
      uStack_18b = *(undefined1 *)(lVar3 + 0x25);
    }
    else {
      uStack_18b = 0;
    }
    if ((*(char *)(lVar3 + 0x23) == '\x01') &&
       (cStack_18c = *(char *)(lVar3 + 0x25), cStack_18c == '\x01')) {
      uStack_194 = *(undefined4 *)(lVar3 + 0x18);
      uStack_190 = *(undefined4 *)(lVar3 + 0x1c);
    }
    FUN_14980547c(local_1a8,*(undefined8 *)(param_3 + 0x13818),&local_198);
    lVar3 = *(longlong *)(param_1 + 8);
    iVar10 = *(int *)(lVar3 + 0xa6c) - *(int *)(lVar3 + 0xa64);
    iVar2 = iVar10 + 0xf;
    local_1c4 = iVar10 + 0x1e;
    if (-1 < iVar2) {
      local_1c4 = iVar2;
    }
    local_1c4 = local_1c4 >> 4;
    iVar10 = *(int *)(lVar3 + 0xa68) - *(int *)(lVar3 + 0xa60);
    iVar2 = iVar10 + 0xf;
    local_1c8 = iVar10 + 0x1e;
    if (-1 < iVar2) {
      local_1c8 = iVar2;
    }
    local_1c8 = local_1c8 >> 4;
    local_258 = (wchar_t *)&local_1c8;
    local_1c0 = 1;
    FUN_14980550b(param_2,&local_1b8,local_1a8,puVar12 + 2);
  }
  lVar3 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar3 + 0xa78) = lVar14;
  *(longlong *)(lVar3 + 0xa80) = local_1d8;
  *(longlong *)(lVar3 + 0xa88) = local_1d0;
  *(longlong *)(*(longlong *)(param_1 + 8) + 0xa70) = lVar14;
LAB_14463c9df:
  if ((local_f0 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463d531 FUN_14463d531 body=69 status=ok
// SIG undefined FUN_14463d531(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463d531(void)

{
  _DAT_14cc27988 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463d573. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27990,1);
  return;
}



// FUNCTION 14463d576 FUN_14463d576 body=69 status=ok
// SIG undefined FUN_14463d576(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463d576(void)

{
  _DAT_14cc279a0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463d5b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc279a8,1);
  return;
}



// FUNCTION 14463d61e FUN_14463d61e body=943 status=ok
// SIG undefined FUN_14463d61e(void)

void FUN_14463d61e(longlong param_1,longlong param_2,longlong param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  char cVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined1 local_95;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x23) == '\x01') {
    plVar11 = (longlong *)(param_2 + 0x70);
    puVar15 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar15 + 8;
    if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
      FUN_140023dd8(plVar11,0x50);
      puVar15 = (undefined8 *)(*plVar11 + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar15 + 8;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar7;
    *puVar15 = &PTR_FUN_14be8a978;
    puVar15[2] = 0;
    puVar15[3] = 0;
    puVar15[4] = 0;
    *(undefined1 *)(puVar15 + 5) = 1;
    iVar5 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar5 * 8) = puVar15;
    puVar15[2] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70);
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xa8);
    uVar3 = *(undefined1 *)(lVar8 + 0x94);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar14 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar7) {
      FUN_140023dd8(plVar11,0x50);
      puVar14 = (undefined8 *)(*plVar11 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar14 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar7;
    puVar14[1] = *(undefined8 *)(lVar8 + 8);
    puVar14[2] = 0;
    *(undefined1 *)(puVar14 + 3) = 0;
    *(undefined8 *)((longlong)puVar14 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar14 + 5) = 0;
    *puVar14 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar14 + 6) = uVar3;
    *(undefined1 *)(puVar14 + 7) = 0;
    *(undefined4 *)((longlong)puVar14 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar14 + 0x35) = 0;
    puVar14[8] = lVar8;
    iVar5 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar5 * 8) = puVar14;
    *(int *)((longlong)puVar14 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar15[3] = puVar14;
    FUN_1448a862c(local_78);
    FUN_14019e00e(&local_88,local_78,0,1);
    lVar8 = FUN_1448a8484();
    cVar12 = '\x02';
    if (*(char *)(lVar8 + 0x41) != '\x03') {
      cVar12 = *(char *)(lVar8 + 0x41);
    }
    lVar8 = CONCAT44(uStack_84,local_88);
    puVar15[4] = lVar8;
    *(char *)(puVar15 + 5) = cVar12;
    if (lVar8 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar8 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar8 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar4 = *(byte *)(lVar8 + 0xd);
          plVar9 = (longlong *)FUN_14001cc68(0x10,8);
          plVar9[1] = lVar8;
          plVar11 = DAT_14ca843c0;
          plVar10 = DAT_14ca843c8;
          if ((bVar4 & 2) == 0) {
            do {
              *plVar9 = (longlong)plVar11;
              LOCK();
              bVar16 = plVar11 != DAT_14ca843c0;
              plVar10 = plVar9;
              if (bVar16) {
                plVar11 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar10;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar9 = (longlong)plVar10;
              LOCK();
              bVar16 = plVar10 != DAT_14ca843c8;
              plVar11 = plVar9;
              if (bVar16) {
                plVar10 = DAT_14ca843c8;
                plVar11 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar11;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
    fVar17 = 0.0;
    if (0.0 <= DAT_14c7679e8) {
      fVar17 = DAT_14c7679e8;
    }
    fVar18 = 1.0;
    if (fVar17 <= 1.0) {
      fVar18 = fVar17;
    }
    *(float *)(puVar15 + 6) = fVar18;
    iVar5 = *(int *)(*(longlong *)(param_1 + 8) + 0x18);
    iVar13 = *(int *)(*(longlong *)(param_1 + 8) + 0x1c);
    uVar6 = *(undefined8 *)(param_3 + 0x13818);
    FUN_145e6a83e();
    FUN_1448e935e(uVar6,&local_88,&DAT_14cc27a18,
                  (iVar5 + (uint)(0.0 < fVar18 && iVar5 == 2) * 4) * 2 + iVar13);
    FUN_145e6a83e();
    lVar8 = *(longlong *)(param_1 + 8);
    iVar13 = *(int *)(lVar8 + 0xa54) - *(int *)(lVar8 + 0xa4c);
    iVar5 = iVar13 + 0xf;
    local_90 = iVar13 + 0x1e;
    if (-1 < iVar5) {
      local_90 = iVar5;
    }
    local_90 = local_90 >> 4;
    iVar13 = *(int *)(lVar8 + 0xa50) - *(int *)(lVar8 + 0xa48);
    iVar5 = iVar13 + 0xf;
    local_94 = iVar13 + 0x1e;
    if (-1 < iVar5) {
      local_94 = iVar5;
    }
    local_94 = local_94 >> 4;
    local_a8 = &local_94;
    local_8c = 1;
    FUN_149805b20(param_2,&local_95,&local_88,puVar15 + 2);
    *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70) =
         *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa8);
    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x24) = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14463d9ce FUN_14463d9ce body=69 status=ok
// SIG undefined FUN_14463d9ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463d9ce(void)

{
  _DAT_14cc27ad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463da10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27ae0,1);
  return;
}



// FUNCTION 14463da13 FUN_14463da13 body=69 status=ok
// SIG undefined FUN_14463da13(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463da13(void)

{
  _DAT_14cc27ae8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463da55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27af0,1);
  return;
}



// FUNCTION 14463da58 FUN_14463da58 body=69 status=ok
// SIG undefined FUN_14463da58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463da58(void)

{
  _DAT_14cc27af8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x00014463da9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14cc27b00,1);
  return;
}



// FUNCTION 14463dba6 FUN_14463dba6 body=2395 status=ok
// SIG undefined FUN_14463dba6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14463dba6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  undefined1 auStack_1e8 [32];
  wchar_t *local_1c8;
  wchar_t *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined8 local_170;
  char local_15d;
  undefined4 local_15c;
  longlong local_158;
  undefined4 local_14c;
  longlong local_148;
  longlong local_140;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined1 local_129;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118 [4];
  undefined4 local_114;
  undefined4 uStack_110;
  char cStack_10c;
  undefined1 uStack_10b;
  undefined1 uStack_10a;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  char cStack_fc;
  undefined1 uStack_fb;
  undefined1 uStack_fa;
  undefined1 uStack_f9;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined1 local_70;
  undefined2 local_63;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar4 + 0x21) != '\x01') goto LAB_14463dbde;
  if (*(char *)(lVar4 + 0x22) == '\0') {
    local_15c = (undefined4)CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)(lVar4 + 4));
  }
  else {
    local_15c = 0;
  }
  uVar15 = exp2f((ulonglong)DAT_14c7679f0 ^ (ulonglong)DAT_1499319e0);
  lVar4 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar4 + 0x22) == '\x01') {
    local_158 = *(longlong *)(lVar4 + 0xd8);
    if (local_158 == 0) goto LAB_14463dcbe;
    param_4 = (longlong *)(local_158 + 0x84);
    local_148 = 0;
LAB_14463dcb6:
    local_140 = *param_4;
    if (local_140 == local_148) goto LAB_14463dcbe;
  }
  else {
    local_158 = *param_4;
    if (local_158 != 0) {
      local_148 = param_4[1];
      param_4 = param_4 + 2;
      goto LAB_14463dcb6;
    }
LAB_14463dcbe:
    lVar5 = *(longlong *)(lVar4 + 0xd8);
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    if (lVar5 != 0) {
      local_140 = *(longlong *)(lVar5 + 0x84);
      local_148 = 0;
      local_158 = lVar5;
    }
  }
  iVar3 = (((uVar15 & 0x7fffff) >> ((&DAT_14be8a4e0)[uVar15 >> 0x17] & 0x1f)) +
          (uint)*(ushort *)(&DAT_14be8a0e0 + (ulonglong)(uVar15 >> 0x17) * 2)) * 0x10001;
  if (((*(byte *)(local_158 + 0x62) & 2) == 0) || (*(char *)(lVar4 + 2) == '\x01')) {
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar14 + 0x2c;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8((longlong *)(param_2 + 0x70),0x170);
      puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar14 + 0x2c;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    *puVar14 = &PTR_FUN_14be8a998;
    puVar11 = puVar14 + 2;
    FUN_149807db2(puVar11);
    iVar12 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar12 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar12 + 1U) {
      FUN_1448cfae8((longlong *)(param_2 + 0x98),iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar12 * 8) = puVar14;
    *(uint *)(puVar14 + 4) = uVar15;
    *(int *)((longlong)puVar14 + 0x24) = iVar3;
    puVar14[5] = 0;
    puVar14[2] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70);
    lVar4 = *(longlong *)(param_1 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x50);
    uVar10 = *(undefined8 *)(lVar4 + 0x58);
    uVar7 = *(undefined4 *)(lVar4 + 100);
    uVar8 = *(undefined4 *)(lVar4 + 0x68);
    uVar9 = *(undefined4 *)(lVar4 + 0x6c);
    *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar4 + 0x60);
    *(undefined4 *)((longlong)puVar14 + 0x44) = uVar7;
    *(undefined4 *)(puVar14 + 9) = uVar8;
    *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar9;
    puVar14[6] = uVar6;
    puVar14[7] = uVar10;
    puVar14[10] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9d8);
    puVar14[0xc] = local_158;
    puVar14[0xd] = 0;
    *(undefined4 *)(puVar14 + 0xe) = 0xffff0000;
    local_114 = 0;
    uStack_110 = 0;
    cStack_10c = '\0';
    lVar4 = *(longlong *)(param_1 + 8);
    local_118[0] = *(undefined1 *)(lVar4 + 1);
    uStack_10b = (undefined1)local_15c;
    uStack_10a = *(undefined1 *)(lVar4 + 3);
    if ((*(char *)(lVar4 + 0x23) == '\x01') &&
       (cStack_10c = *(char *)(lVar4 + 0x26), cStack_10c == '\x01')) {
      local_114 = *(undefined4 *)(lVar4 + 0x18);
      uStack_110 = *(undefined4 *)(lVar4 + 0x1c);
    }
    FUN_149805fee(&local_128,*(undefined8 *)(param_3 + 0x13818),local_118);
    lVar4 = *(longlong *)(param_1 + 8);
    iVar3 = *(int *)(param_3 + 0x3090);
    local_15c = *(undefined4 *)(param_3 + 0x1dd4);
    local_14c = *(undefined4 *)(param_3 + 0x3094);
    local_15d = (&DAT_00001de6)[param_3];
    uVar6 = *(undefined8 *)
             (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar3 * 2) * 8);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_180 = &LAB_14712ac08;
        local_188 = &LAB_14712ac0c;
        local_190 = &LAB_1472e3912;
        local_198 = &LAB_1472e3916;
        local_1a0 = FUN_1472e391a;
        local_1a8 = FUN_1472e3942;
        local_1c0 = L"ScreenPassVS";
        local_1c8 = L"/Engine/Private/ScreenPass.usf";
        local_170 = 0;
        local_178 = 0xe0;
        local_1b0 = 1;
        local_1b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    FUN_1448e935e(uVar6,&local_108,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_180 = &LAB_14712ac08;
        local_188 = &LAB_14712ac0c;
        local_190 = &LAB_1472e3912;
        local_198 = &LAB_1472e3916;
        local_1a0 = FUN_1472e391a;
        local_1a8 = FUN_1472e3942;
        local_1c0 = L"ScreenPassVS";
        local_1c8 = L"/Engine/Private/ScreenPass.usf";
        local_170 = 0;
        local_178 = 0xe0;
        local_1b0 = 1;
        local_1b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    uVar10 = DAT_14c9c0d98;
    uVar6 = DAT_14c9c0d50;
    FUN_145ee4a42();
    local_108 = 0;
    uStack_104 = 0;
    uStack_100 = 0;
    cStack_fc = 0;
    uStack_fb = 0;
    uStack_fa = 0;
    uStack_f9 = 0;
    FUN_1448f70da(local_128,&DAT_14cc28258,puVar11,&local_108);
    uStack_104 = local_15c;
    uStack_100 = local_14c;
    cStack_fc = local_15d;
    uStack_fb = (undefined1)local_63;
    uStack_fa = (undefined1)((ushort)local_63 >> 8);
    uStack_f9 = local_61;
    local_f8 = *(undefined8 *)(lVar4 + 0xa58);
    local_f0 = *(undefined8 *)(lVar4 + 0xa60);
    local_e8 = *(undefined8 *)(lVar4 + 0xa68);
    local_b8 = local_128;
    uStack_b0 = uStack_120;
    local_a8 = uVar6;
    local_a0 = uVar10;
    local_98 = DAT_14ca94df8;
    local_90 = 0;
    local_88 = local_128;
    uStack_80 = uStack_120;
    local_70 = 0;
    local_108 = iVar3;
    local_e0 = local_f8;
    local_d8 = local_f0;
    local_d0 = local_e8;
    local_78 = puVar11;
    FUN_145ee4a42();
    FUN_149807e50(param_2,&local_129,puVar11,&local_108);
  }
  else {
    plVar1 = (longlong *)(param_2 + 0x70);
    puVar14 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar11 = puVar14 + 0xe;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(plVar1,0x80);
      puVar14 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar11 = puVar14 + 0xe;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    *puVar14 = &PTR_FUN_14be8a9b8;
    puVar14[2] = 0;
    puVar14[6] = 0;
    puVar14[7] = 0x3f80000000000000;
    puVar14[8] = 0;
    puVar14[9] = 0x3f80000000000000;
    puVar14[0xc] = 0;
    iVar12 = *(int *)(param_2 + 0xa0);
    *(uint *)(param_2 + 0xa0) = iVar12 + 1U;
    if (*(uint *)(param_2 + 0xa4) < iVar12 + 1U) {
      FUN_1448cfae8(param_2 + 0x98,iVar12);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar12 * 8) = puVar14;
    *(uint *)(puVar14 + 4) = uVar15;
    *(int *)((longlong)puVar14 + 0x24) = iVar3;
    puVar14[5] = 0;
    puVar14[2] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0xa70);
    lVar4 = *(longlong *)(param_1 + 8);
    uVar6 = *(undefined8 *)(lVar4 + 0x50);
    uVar10 = *(undefined8 *)(lVar4 + 0x58);
    uVar7 = *(undefined4 *)(lVar4 + 100);
    uVar8 = *(undefined4 *)(lVar4 + 0x68);
    uVar9 = *(undefined4 *)(lVar4 + 0x6c);
    *(undefined4 *)(puVar14 + 8) = *(undefined4 *)(lVar4 + 0x60);
    *(undefined4 *)((longlong)puVar14 + 0x44) = uVar7;
    *(undefined4 *)(puVar14 + 9) = uVar8;
    *(undefined4 *)((longlong)puVar14 + 0x4c) = uVar9;
    puVar14[6] = uVar6;
    puVar14[7] = uVar10;
    puVar14[10] = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x9d8);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xd8);
    uVar2 = *(undefined1 *)(lVar4 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar11 = puVar13 + 9;
    if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
      FUN_140023dd8(plVar1,0x50);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar11 = puVar13 + 9;
    }
    *(undefined8 **)(param_2 + 0x70) = puVar11;
    puVar13[1] = *(undefined8 *)(lVar4 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar2;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = lVar4;
    iVar3 = *(int *)(param_2 + 0x1a0);
    *(uint *)(param_2 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_2 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_2 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_2 + 0x198) + (longlong)iVar3 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_2 + 0x1a0) + -1;
    puVar14[0xc] = puVar13;
    cStack_fc = '\0';
    uStack_104 = 0;
    uStack_100 = 0;
    lVar4 = *(longlong *)(param_1 + 8);
    local_108 = CONCAT31(local_108._1_3_,*(undefined1 *)(lVar4 + 1));
    uStack_fa = *(undefined1 *)(lVar4 + 3);
    uStack_fb = (undefined1)local_15c;
    if ((*(char *)(lVar4 + 0x23) == '\x01') &&
       (cStack_fc = *(char *)(lVar4 + 0x26), cStack_fc == '\x01')) {
      uStack_104 = *(undefined4 *)(lVar4 + 0x18);
      uStack_100 = *(undefined4 *)(lVar4 + 0x1c);
    }
    FUN_149806086(local_118,*(undefined8 *)(param_3 + 0x13818),&local_108);
    lVar4 = *(longlong *)(param_1 + 8);
    iVar12 = *(int *)(lVar4 + 0xa6c) - *(int *)(lVar4 + 0xa64);
    iVar3 = iVar12 + 0xf;
    local_134 = iVar12 + 0x1e;
    if (-1 < iVar3) {
      local_134 = iVar3;
    }
    local_134 = local_134 >> 4;
    iVar12 = *(int *)(lVar4 + 0xa68) - *(int *)(lVar4 + 0xa60);
    iVar3 = iVar12 + 0xf;
    local_138 = iVar12 + 0x1e;
    if (-1 < iVar3) {
      local_138 = iVar3;
    }
    local_138 = local_138 >> 4;
    local_1c8 = (wchar_t *)&local_138;
    local_130 = 1;
    FUN_14980611e(param_2,&local_128,local_118,puVar14 + 2);
  }
  lVar4 = *(longlong *)(param_1 + 8);
  *(longlong *)(lVar4 + 0xa78) = local_158;
  *(longlong *)(lVar4 + 0xa80) = local_148;
  *(longlong *)(lVar4 + 0xa88) = local_140;
  *(longlong *)(*(longlong *)(param_1 + 8) + 0xa70) = local_158;
LAB_14463dbde:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14463e57a FUN_14463e57a body=29 status=ok
// SIG undefined FUN_14463e57a(void)

undefined8 FUN_14463e57a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e598 FUN_14463e598 body=29 status=ok
// SIG undefined FUN_14463e598(void)

undefined8 FUN_14463e598(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e5b6 FUN_14463e5b6 body=29 status=ok
// SIG undefined FUN_14463e5b6(void)

undefined8 FUN_14463e5b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e5d4 FUN_14463e5d4 body=29 status=ok
// SIG undefined FUN_14463e5d4(void)

undefined8 FUN_14463e5d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e5f2 FUN_14463e5f2 body=29 status=ok
// SIG undefined FUN_14463e5f2(void)

undefined8 FUN_14463e5f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14463e610 FUN_14463e610 body=29 status=ok
// SIG undefined FUN_14463e610(void)

undefined8 FUN_14463e610(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


