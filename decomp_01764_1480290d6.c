// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1480290d6 FUN_1480290d6 body=29 status=ok
// SIG undefined FUN_1480290d6(void)

undefined8 FUN_1480290d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480290f4 FUN_1480290f4 body=300 status=ok
// SIG undefined FUN_1480290f4(void)

void FUN_1480290f4(longlong param_1,float *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  
  dVar4 = *(double *)(param_1 + 0x18);
  dVar1 = dVar4 - *(double *)(param_1 + 0x10);
  if (dVar1 == 0.0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    goto LAB_14802915c;
  }
  dVar1 = ABS(dVar1);
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
LAB_148029133:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_145b6944a();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_148029133;
  }
  dVar4 = ((double)*(float *)(lVar3 + 0x30) + (double)*(float *)(lVar3 + 0x30)) * dVar1;
  if (dVar4 < 0.0) {
    dVar4 = sqrt(dVar4);
  }
  else {
    dVar4 = SQRT(dVar4);
  }
  fVar5 = *(float *)(lVar3 + 0x28) * *param_2 + *(float *)(param_1 + 0x28);
  dVar6 = (double)*(float *)(lVar3 + 0x2c);
  if (dVar4 <= (double)*(float *)(lVar3 + 0x2c)) {
    dVar6 = dVar4;
  }
  if (dVar6 <= (double)fVar5) {
    fVar5 = (float)dVar6;
  }
  *(float *)(param_1 + 0x28) = fVar5;
  if ((double)(fVar5 * *param_2) < dVar1) {
    *(double *)(param_1 + 0x10) =
         (double)(fVar5 * *param_2) *
         (double)(&DAT_149931160)[*(double *)(param_1 + 0x10) < *(double *)(param_1 + 0x18)] +
         *(double *)(param_1 + 0x10);
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  dVar4 = *(double *)(param_1 + 0x18);
LAB_14802915c:
  *(double *)(param_1 + 0x10) = dVar4;
  *(undefined1 *)(param_1 + 0x20) = 1;
  return;
}



// FUNCTION 14802926c FUN_14802926c body=29 status=ok
// SIG undefined FUN_14802926c(void)

undefined8 FUN_14802926c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802928a FUN_14802928a body=439 status=ok
// SIG undefined FUN_14802928a(void)

void FUN_14802928a(longlong param_1,float *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar1 = SQRT(dVar5 * dVar5 + dVar1 * dVar1);
  if (dVar1 <= 0.0) goto LAB_1480293c6;
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
LAB_1480292f7:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_145b6944a();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1480292f7;
  }
  dVar5 = ((double)*(float *)(lVar3 + 0x30) + (double)*(float *)(lVar3 + 0x30)) * dVar1;
  if (dVar5 < 0.0) {
    dVar5 = sqrt(dVar5);
  }
  else {
    dVar5 = SQRT(dVar5);
  }
  fVar4 = *(float *)(lVar3 + 0x28) * *param_2 + *(float *)(param_1 + 0x38);
  dVar6 = (double)*(float *)(lVar3 + 0x2c);
  if (dVar5 <= (double)*(float *)(lVar3 + 0x2c)) {
    dVar6 = dVar5;
  }
  if (dVar6 <= (double)fVar4) {
    fVar4 = (float)dVar6;
  }
  *(float *)(param_1 + 0x38) = fVar4;
  dVar5 = (double)(fVar4 * *param_2);
  if (dVar5 < dVar1) {
    dVar7 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
    dVar1 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
    dVar6 = dVar1 * dVar1 + dVar7 * dVar7;
    if (9.99999993922529e-09 < dVar6) {
      dVar7 = dVar7 * (1.0 / SQRT(dVar6));
    }
    else {
      dVar7 = 0.0;
    }
    *(double *)(param_1 + 0x10) =
         *(double *)(param_1 + 0x10) +
         (double)(-(ulonglong)(9.99999993922529e-09 < dVar6) &
                 (ulonglong)(dVar1 * (1.0 / SQRT(dVar6)))) * dVar5;
    *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + dVar7 * dVar5;
    return;
  }
LAB_1480293c6:
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 14802948e FUN_14802948e body=29 status=ok
// SIG undefined FUN_14802948e(void)

undefined8 FUN_14802948e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1480294ac FUN_1480294ac body=551 status=ok
// SIG undefined FUN_1480294ac(void)

void FUN_1480294ac(longlong param_1,float *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar1 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  dVar1 = SQRT(dVar7 * dVar7 + dVar6 * dVar6 + dVar1 * dVar1);
  if (dVar1 <= 0.0) goto LAB_14802961b;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 == 0) {
LAB_14802952b:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_145b6944a();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_14802952b;
  }
  dVar7 = ((double)*(float *)(lVar4 + 0x30) + (double)*(float *)(lVar4 + 0x30)) * dVar1;
  if (dVar7 < 0.0) {
    dVar7 = sqrt(dVar7);
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  fVar5 = *(float *)(lVar4 + 0x28) * *param_2 + *(float *)(param_1 + 0x48);
  dVar6 = (double)*(float *)(lVar4 + 0x2c);
  if (dVar7 <= (double)*(float *)(lVar4 + 0x2c)) {
    dVar6 = dVar7;
  }
  if (dVar6 <= (double)fVar5) {
    fVar5 = (float)dVar6;
  }
  *(float *)(param_1 + 0x48) = fVar5;
  dVar7 = (double)(fVar5 * *param_2);
  if (dVar7 < dVar1) {
    dVar8 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
    dVar10 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
    dVar1 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
    dVar6 = dVar8 * dVar8 + dVar1 * dVar1 + dVar10 * dVar10;
    if (((dVar6 != 1.0) || (dVar9 = dVar8, dVar11 = dVar10, dVar2 = dVar1, NAN(dVar6))) &&
       (dVar9 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar2 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar6)) {
      dVar6 = 1.0 / SQRT(dVar6);
      dVar9 = dVar8 * dVar6;
      dVar11 = dVar10 * dVar6;
      dVar2 = dVar1 * dVar6;
    }
    *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + dVar2 * dVar7;
    *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + dVar11 * dVar7;
    *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) + dVar9 * dVar7;
    return;
  }
LAB_14802961b:
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return;
}



// FUNCTION 148029720 FUN_148029720 body=29 status=ok
// SIG undefined FUN_148029720(void)

undefined8 FUN_148029720(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802975a FUN_14802975a body=237 status=ok
// SIG undefined FUN_14802975a(void)

void FUN_14802975a(longlong param_1,undefined4 *param_2)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  dVar1 = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x34) == '\0') {
    fVar4 = *(float *)(param_1 + 0x2c);
    goto LAB_1480297d3;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  if (lVar3 == 0) {
LAB_1480297a5:
    lVar3 = 0;
  }
  else {
    lVar2 = FUN_145b69534();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_1480297a5;
  }
  fVar4 = ABS((float)dVar1);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
  *(float *)(param_1 + 0x2c) = fVar4;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
LAB_1480297d3:
  FUN_148013132(param_1 + 0x28,(float)ABS(dVar1) - fVar4,*param_2);
  dVar1 = ABS(dVar1) - (double)*(float *)(param_1 + 0x2c);
  *(double *)(param_1 + 0x10) =
       (double)(&DAT_149931160)[*(double *)(param_1 + 0x10) < *(double *)(param_1 + 0x18)] * dVar1 +
       *(double *)(param_1 + 0x10);
  *(bool *)(param_1 + 0x20) = dVar1 <= 1e-08;
  return;
}



// FUNCTION 148029848 FUN_148029848 body=163 status=ok
// SIG undefined FUN_148029848(void)

void FUN_148029848(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148013256(param_1 + 0x28,param_3);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x34);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x34) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x34) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480298ec FUN_1480298ec body=29 status=ok
// SIG undefined FUN_1480298ec(void)

undefined8 FUN_1480298ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802993c FUN_14802993c body=369 status=ok
// SIG undefined FUN_14802993c(void)

void FUN_14802993c(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar3 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar5 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar3 = SQRT(dVar5 * dVar5 + dVar3 * dVar3);
  if (*(char *)(param_1 + 0x44) == '\0') {
    fVar4 = *(float *)(param_1 + 0x3c);
    goto LAB_1480299e3;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
LAB_1480299af:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_145b69534();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_1480299af;
  }
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar2 + 0x28);
  fVar4 = (float)dVar3;
  *(float *)(param_1 + 0x3c) = fVar4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
LAB_1480299e3:
  FUN_148013132(param_1 + 0x38,(float)dVar3 - fVar4,*param_2);
  dVar3 = dVar3 - (double)*(float *)(param_1 + 0x3c);
  dVar6 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x18);
  dVar7 = *(double *)(param_1 + 0x20) - *(double *)(param_1 + 0x10);
  dVar5 = dVar7 * dVar7 + dVar6 * dVar6;
  if (9.99999993922529e-09 < dVar5) {
    dVar6 = dVar6 * (1.0 / SQRT(dVar5));
  }
  else {
    dVar6 = 0.0;
  }
  *(double *)(param_1 + 0x10) =
       *(double *)(param_1 + 0x10) +
       (double)(-(ulonglong)(9.99999993922529e-09 < dVar5) &
               (ulonglong)(dVar7 * (1.0 / SQRT(dVar5)))) * dVar3;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + dVar6 * dVar3;
  *(bool *)(param_1 + 0x30) = dVar3 <= 1e-08;
  return;
}



// FUNCTION 148029aae FUN_148029aae body=163 status=ok
// SIG undefined FUN_148029aae(void)

void FUN_148029aae(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148013256(param_1 + 0x38,param_3);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x44);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x44) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x44) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148029b52 FUN_148029b52 body=29 status=ok
// SIG undefined FUN_148029b52(void)

undefined8 FUN_148029b52(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148029bb0 FUN_148029bb0 body=485 status=ok
// SIG undefined FUN_148029bb0(void)

void FUN_148029bb0(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar3 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
  dVar4 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  dVar3 = SQRT(dVar4 * dVar4 + dVar6 * dVar6 + dVar3 * dVar3);
  if (*(char *)(param_1 + 0x54) == '\0') {
    fVar5 = *(float *)(param_1 + 0x4c);
    goto LAB_148029c6f;
  }
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 == 0) {
LAB_148029c3b:
    lVar2 = 0;
  }
  else {
    lVar1 = FUN_145b69534();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        != lVar1 + 0x30)) goto LAB_148029c3b;
  }
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(lVar2 + 0x28);
  fVar5 = (float)dVar3;
  *(float *)(param_1 + 0x4c) = fVar5;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
LAB_148029c6f:
  FUN_148013132(param_1 + 0x48,(float)dVar3 - fVar5,*param_2);
  dVar6 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  dVar8 = *(double *)(param_1 + 0x30) - *(double *)(param_1 + 0x18);
  dVar10 = *(double *)(param_1 + 0x28) - *(double *)(param_1 + 0x10);
  dVar4 = dVar6 * dVar6 + dVar10 * dVar10 + dVar8 * dVar8;
  if (((dVar4 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar11 = dVar10, NAN(dVar4))) &&
     (dVar7 = DAT_14c8464f0, dVar9 = DAT_14c8464e8, dVar11 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar4)) {
    dVar4 = 1.0 / SQRT(dVar4);
    dVar7 = dVar6 * dVar4;
    dVar9 = dVar8 * dVar4;
    dVar11 = dVar10 * dVar4;
  }
  dVar3 = dVar3 - (double)*(float *)(param_1 + 0x4c);
  *(double *)(param_1 + 0x10) = *(double *)(param_1 + 0x10) + dVar11 * dVar3;
  *(double *)(param_1 + 0x18) = *(double *)(param_1 + 0x18) + dVar9 * dVar3;
  *(double *)(param_1 + 0x20) = *(double *)(param_1 + 0x20) + dVar7 * dVar3;
  *(bool *)(param_1 + 0x40) = dVar3 <= 1e-08;
  return;
}



// FUNCTION 148029d96 FUN_148029d96 body=163 status=ok
// SIG undefined FUN_148029d96(void)

void FUN_148029d96(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_148013256(param_1 + 0x48,param_3);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x54);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x54) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x54) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148029e3a FUN_148029e3a body=138 status=ok
// SIG undefined FUN_148029e3a(void)

void FUN_148029e3a(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_14ad36f70;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x39) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = &PTR_FUN_14ad36f90;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = uVar1;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(undefined1 *)((longlong)param_1 + 0x69) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  *(undefined8 *)((longlong)param_1 + 0x89) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = &PTR_FUN_14ad36f90;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 1;
  *(undefined1 *)((longlong)param_1 + 0xb1) = uVar2;
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x30);
  return;
}



// FUNCTION 148029ec4 FUN_148029ec4 body=29 status=ok
// SIG undefined FUN_148029ec4(void)

undefined8 FUN_148029ec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148029ee2 FUN_148029ee2 body=84 status=ok
// SIG undefined FUN_148029ee2(void)

void FUN_148029ee2(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(*(longlong *)(param_1 + 0x28) + 8))(param_1 + 0x28,uVar1,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x1c);
                    /* WARNING: Could not recover jumptable at 0x000148029f33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x70) + 8))(param_1 + 0x70,uVar1,uVar2);
  return;
}



// FUNCTION 148029f36 FUN_148029f36 body=260 status=ok
// SIG undefined FUN_148029f36(void)

void FUN_148029f36(longlong param_1,float *param_2,undefined8 param_3)

{
  double dVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = *param_2;
  dVar4 = *(double *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0xc0) == '\x01') {
    if (0.0001 < fVar6) {
      dVar1 = *(double *)(param_1 + 0xb8);
      dVar4 = dVar4 - dVar1;
      fVar2 = 1.0 / fVar6;
      do {
        fVar5 = 0.008333334;
        if (fVar6 <= 0.008333334) {
          fVar5 = fVar6;
        }
        dVar1 = dVar1 + (double)fVar5 * (double)fVar2 * dVar4;
        fVar6 = fVar6 - fVar5;
        FUN_14802a54c(param_1,dVar1,fVar5,param_3);
      } while (0.0001 < fVar6);
      dVar4 = *(double *)(param_1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x80);
    *(double *)(param_1 + 0xb8) = dVar4;
  }
  else {
    uVar3 = FUN_14802a54c(param_1,dVar4,fVar6,param_3);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
  }
  return;
}



// FUNCTION 14802a03a FUN_14802a03a body=268 status=ok
// SIG undefined FUN_14802a03a(void)

void FUN_14802a03a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14802a60c(param_1 + 0x28);
  FUN_14802a60c(param_1 + 0x70,param_2,param_3);
  puVar1 = *(undefined8 **)param_3[1];
  if ((undefined8 *)((longlong *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined8 *)(param_1 + 0xb8),8);
    }
    else {
      thunk_FUN_146821949(param_3);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xb8) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
  }
  piVar2 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0xc0);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0xc0) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0xc0) = *piVar2 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802a148 FUN_14802a148 body=29 status=ok
// SIG undefined FUN_14802a148(void)

undefined8 FUN_14802a148(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802a178 FUN_14802a178 body=595 status=ok
// SIG undefined FUN_14802a178(void)

void FUN_14802a178(longlong param_1,float *param_2)

{
  double dVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  fVar2 = *param_2;
  if (*(char *)(param_1 + 0x41) == '\x01') {
    if ((*(char *)(param_1 + 0x40) == '\x01') && (0.0 < *(float *)(param_1 + 0x38))) {
      fVar2 = fVar2 + *(float *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
    if (0.0001 < fVar2) {
      dVar3 = *(double *)(param_1 + 0x30);
      dVar4 = *(double *)(param_1 + 0x18) - dVar3;
      fVar7 = 1.0 / fVar2;
      dVar6 = *(double *)(param_1 + 0x10);
      do {
        fVar8 = 0.008333334;
        if (fVar2 <= 0.008333334) {
          fVar8 = fVar2;
        }
        if (fVar8 < 0.008333334 && *(char *)(param_1 + 0x40) == '\x01') {
          *(float *)(param_1 + 0x38) = fVar8;
          *(double *)(param_1 + 0x28) = dVar6;
        }
        dVar3 = dVar3 + (double)fVar7 * dVar4 * (double)fVar8;
        dVar1 = dVar3;
        if ((0.0 < *(float *)(param_1 + 0x3c)) &&
           (dVar5 = dVar3 - dVar6, 9.99999993922529e-09 <= dVar5 * dVar5)) {
          dVar1 = (double)fVar8 * (double)*(float *)(param_1 + 0x3c);
          if (1.0 <= dVar1) {
            dVar1 = 1.0;
          }
          if (dVar1 <= 0.0) {
            dVar1 = 0.0;
          }
          dVar1 = dVar6 + dVar5 * dVar1;
        }
        fVar2 = fVar2 - fVar8;
        dVar6 = dVar1;
      } while (0.0001 < fVar2);
      *(double *)(param_1 + 0x10) = dVar1;
    }
    *(double *)(param_1 + 0x30) = *(double *)(param_1 + 0x18);
  }
  else {
    dVar3 = *(double *)(param_1 + 0x18);
    if (0.0 < *(float *)(param_1 + 0x3c)) {
      dVar6 = dVar3 - *(double *)(param_1 + 0x10);
      if (9.99999993922529e-09 <= dVar6 * dVar6) {
        dVar3 = (double)fVar2 * (double)*(float *)(param_1 + 0x3c);
        if (1.0 <= dVar3) {
          dVar3 = 1.0;
        }
        if (dVar3 <= 0.0) {
          dVar3 = 0.0;
        }
        dVar3 = *(double *)(param_1 + 0x10) + dVar6 * dVar3;
      }
    }
    *(double *)(param_1 + 0x10) = dVar3;
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 14802a3cc FUN_14802a3cc body=383 status=ok
// SIG undefined FUN_14802a3cc(void)

void FUN_14802a3cc(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = *(undefined8 **)param_3[1];
  if ((undefined8 *)((longlong *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined8 *)(param_1 + 0x28),8);
    }
    else {
      thunk_FUN_146821949(param_3);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
  }
  puVar1 = *(undefined8 **)param_3[1];
  if ((undefined8 *)((longlong *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined8 *)(param_1 + 0x30),8);
    }
    else {
      thunk_FUN_146821949(param_3);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
  }
  puVar2 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x38),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x38) = *puVar2;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  piVar3 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar3 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x40);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x40) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x40) = *piVar3 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802a54c FUN_14802a54c body=190 status=ok
// SIG undefined FUN_14802a54c(void)

void FUN_14802a54c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_2;
  local_30 = param_3;
  (**(code **)(*(longlong *)(param_1 + 0x28) + 8))
            (param_1 + 0x28,*(undefined8 *)(param_1 + 0x38),uVar1);
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,&local_30,param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 8))
            (param_1 + 0x70,*(undefined8 *)(param_1 + 0x80),uVar1);
  (**(code **)(*(longlong *)(param_1 + 0x70) + 0x10))(param_1 + 0x70,&local_30,param_4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(*(undefined8 *)(param_1 + 0x80));
}



// FUNCTION 14802a60c FUN_14802a60c body=331 status=ok
// SIG undefined FUN_14802a60c(void)

void FUN_14802a60c(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)param_3[1];
  if ((longlong *)((longlong *)param_3[1])[1] < plVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,param_1 + 2,8);
    }
    else {
      thunk_FUN_146821949(param_3);
    }
  }
  else {
    param_1[2] = *plVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
  }
  plVar1 = *(longlong **)param_3[1];
  if ((longlong *)((longlong *)param_3[1])[1] < plVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,param_1 + 3,8);
    }
    else {
      thunk_FUN_146821949(param_3);
    }
  }
  else {
    param_1[3] = *plVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 8;
  }
  piVar2 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 4);
    (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 4) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 4) = *piVar2 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802a758 FUN_14802a758 body=171 status=ok
// SIG undefined FUN_14802a758(void)

void FUN_14802a758(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_14ad36fb0;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x59) = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[7] = &PTR_FUN_14ad36fd0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined1 *)((longlong)param_1 + 0x99) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x14] = &PTR_FUN_14ad36fd0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar1;
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)((longlong)param_1 + 0x101) = uVar2;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x30);
  return;
}



// FUNCTION 14802a804 FUN_14802a804 body=29 status=ok
// SIG undefined FUN_14802a804(void)

undefined8 FUN_14802a804(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802a822 FUN_14802a822 body=181 status=ok
// SIG undefined FUN_14802a822(void)

void FUN_14802a822(longlong param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(undefined8 *)(param_1 + 0x48);
  uStack_30 = *(undefined8 *)(param_1 + 0x50);
  local_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*(longlong *)(param_1 + 0x38) + 8))(param_1 + 0x38,&local_38,&local_48);
  local_38 = *(undefined8 *)(param_1 + 0xb0);
  uStack_30 = *(undefined8 *)(param_1 + 0xb8);
  local_48 = *(undefined8 *)(param_1 + 0xc0);
  uStack_40 = *(undefined8 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0xbc) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x2c);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1 + 0xa0,&local_38,&local_48);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802a8d8 FUN_14802a8d8 body=492 status=ok
// SIG undefined FUN_14802a8d8(void)

void FUN_14802a8d8(longlong param_1,float *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(char *)(param_1 + 0x118) == '\x01') {
    fVar7 = *param_2;
    if (0.0001 < fVar7) {
      dVar1 = *(double *)(param_1 + 0x110);
      dVar4 = *(double *)(param_1 + 0x28) - dVar1;
      dVar2 = *(double *)(param_1 + 0x108);
      dVar3 = *(double *)(param_1 + 0x20) - dVar2;
      fVar5 = 1.0 / fVar7;
      do {
        fVar6 = 0.008333334;
        if (fVar7 <= 0.008333334) {
          fVar6 = fVar7;
        }
        dVar1 = dVar1 + dVar4 * (double)fVar5 * (double)fVar6;
        dVar2 = dVar2 + (double)fVar6 * dVar3 * (double)fVar5;
        fVar7 = fVar7 - fVar6;
        local_f8 = param_3;
        local_c0 = dVar2;
        local_b8 = dVar1;
        FUN_14802af08(param_1,&local_d0,&local_c0);
      } while (0.0001 < fVar7);
    }
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xb0);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 0x2c);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_118);
  }
  local_e8 = *(undefined4 *)(param_1 + 0x20);
  uStack_e4 = *(undefined4 *)(param_1 + 0x24);
  uStack_e0 = *(undefined4 *)(param_1 + 0x28);
  uStack_dc = *(undefined4 *)(param_1 + 0x2c);
  local_f8 = param_3;
  FUN_14802af08(param_1,&local_d0,&local_e8,*param_2);
  *(undefined4 *)(param_1 + 0x10) = local_d0;
  *(undefined4 *)(param_1 + 0x14) = uStack_cc;
  *(undefined4 *)(param_1 + 0x18) = uStack_c8;
  *(undefined4 *)(param_1 + 0x1c) = uStack_c4;
  if ((local_b0 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802aac6 FUN_14802aac6 body=205 status=ok
// SIG undefined FUN_14802aac6(void)

void FUN_14802aac6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14802b014(param_1 + 0x38);
  FUN_14802b014(param_1 + 0xa0,param_2,param_3);
  FUN_14010abd4(param_3,param_1 + 0x108);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x118);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x118) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x118) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802ab94 FUN_14802ab94 body=29 status=ok
// SIG undefined FUN_14802ab94(void)

undefined8 FUN_14802ab94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802abc2 FUN_14802abc2 body=586 status=ok
// SIG undefined FUN_14802abc2(void)

void FUN_14802abc2(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  double local_d8;
  double dStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x61) == '\x01') {
    fVar8 = *param_2;
    if ((*(char *)(param_1 + 0x60) == '\x01') && (0.0 < *(float *)(param_1 + 0x58))) {
      fVar8 = fVar8 + *(float *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x40);
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    if (0.0001 < fVar8) {
      dVar2 = *(double *)(param_1 + 0x50);
      dVar5 = *(double *)(param_1 + 0x28) - dVar2;
      dVar3 = *(double *)(param_1 + 0x48);
      dVar4 = *(double *)(param_1 + 0x20) - dVar3;
      fVar6 = 1.0 / fVar8;
      puVar1 = (undefined8 *)(param_1 + 0x10);
      do {
        fVar7 = 0.008333334;
        if (fVar8 <= 0.008333334) {
          fVar7 = fVar8;
        }
        if ((fVar7 < 0.008333334) && (*(char *)(param_1 + 0x60) != '\0')) {
          *(float *)(param_1 + 0x58) = fVar7;
          *(undefined8 *)(param_1 + 0x38) = *puVar1;
          *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x18);
        }
        dVar2 = dVar2 + dVar5 * (double)fVar6 * (double)fVar7;
        dVar3 = dVar3 + (double)fVar7 * dVar4 * (double)fVar6;
        fVar8 = fVar8 - fVar7;
        local_108 = *(undefined4 *)(param_1 + 0x5c);
        local_e8 = *(undefined4 *)puVar1;
        uStack_e4 = *(undefined4 *)(param_1 + 0x14);
        uStack_e0 = *(undefined4 *)(param_1 + 0x18);
        uStack_dc = *(undefined4 *)(param_1 + 0x1c);
        local_d8 = dVar3;
        dStack_d0 = dVar2;
        FUN_1467f8a9c(&local_f8,&local_e8,&local_d8);
        *puVar1 = CONCAT44(uStack_f4,local_f8);
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_ec,uStack_f0);
      } while (0.0001 < fVar8);
    }
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x2c);
  }
  else {
    local_d8 = *(double *)(param_1 + 0x20);
    dStack_d0 = *(double *)(param_1 + 0x28);
    local_108 = *(undefined4 *)(param_1 + 0x5c);
    local_e8 = *(undefined4 *)(param_1 + 0x10);
    uStack_e4 = *(undefined4 *)(param_1 + 0x14);
    uStack_e0 = *(undefined4 *)(param_1 + 0x18);
    uStack_dc = *(undefined4 *)(param_1 + 0x1c);
    FUN_1467f8a9c(&local_f8,&local_e8,&local_d8,*param_2);
    *(undefined4 *)(param_1 + 0x10) = local_f8;
    *(undefined4 *)(param_1 + 0x14) = uStack_f4;
    *(undefined4 *)(param_1 + 0x18) = uStack_f0;
    *(undefined4 *)(param_1 + 0x1c) = uStack_ec;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if ((local_c0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802ae0e FUN_14802ae0e body=248 status=ok
// SIG undefined FUN_14802ae0e(void)

void FUN_14802ae0e(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14010abd4(param_3,param_1 + 0x38);
  FUN_14010abd4(param_3,param_1 + 0x48);
  puVar1 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x58),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  piVar2 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x60);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x60) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x60) = *piVar2 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802af08 FUN_14802af08 body=266 status=ok
// SIG undefined FUN_14802af08(void)

undefined4 *
FUN_14802af08(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined1 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_6c = 0;
  local_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  local_68 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x58) = *param_3;
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  local_70 = param_4;
  (**(code **)(*(longlong *)(param_1 + 0x38) + 8))(param_1 + 0x38,&local_58,&local_68);
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x10))(param_1 + 0x38,&local_70,param_5);
  local_58 = *(undefined8 *)(param_1 + 0xb0);
  uStack_50 = *(undefined8 *)(param_1 + 0xb8);
  local_68 = *(undefined8 *)(param_1 + 0xc0);
  uStack_60 = *(undefined8 *)(param_1 + 200);
  *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x54);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))(param_1 + 0xa0,&local_58,&local_68);
  (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x10))(param_1 + 0xa0,&local_70,param_5);
  uVar1 = *(undefined4 *)(param_1 + 0xb4);
  uVar2 = *(undefined4 *)(param_1 + 0xb8);
  uVar3 = *(undefined4 *)(param_1 + 0xbc);
  *param_2 = *(undefined4 *)(param_1 + 0xb0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802b014 FUN_14802b014 body=199 status=ok
// SIG undefined FUN_14802b014(void)

void FUN_14802b014(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14010abd4(param_3,param_1 + 2);
  FUN_14010abd4(param_3,param_1 + 4);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 6);
    (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 6) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 6) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802b0dc FUN_14802b0dc body=186 status=ok
// SIG undefined FUN_14802b0dc(void)

void FUN_14802b0dc(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *param_1 = &PTR_FUN_14ad36ff0;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x2c);
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined8 *)((longlong)param_1 + 0x81) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = &PTR_FUN_14ad37010;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = uVar1;
  *(undefined1 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((longlong)param_1 + 0xc9) = uVar2;
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  uVar1 = *(undefined4 *)(param_2 + 0x28);
  *(undefined8 *)((longlong)param_1 + 0x101) = 0;
  *(undefined8 *)((longlong)param_1 + 0x109) = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1a] = &PTR_FUN_14ad37010;
  *(undefined4 *)(param_1 + 0x29) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined1 *)(param_1 + 0x2a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x151) = uVar2;
  *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)(param_2 + 0x30);
  return;
}



// FUNCTION 14802b196 FUN_14802b196 body=29 status=ok
// SIG undefined FUN_14802b196(void)

undefined8 FUN_14802b196(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802b1b4 FUN_14802b1b4 body=263 status=ok
// SIG undefined FUN_14802b1b4(void)

void FUN_14802b1b4(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *(undefined8 *)(param_1 + 0x68);
  local_38 = *(undefined8 *)(param_1 + 0x58);
  uStack_30 = *(undefined8 *)(param_1 + 0x60);
  local_48 = *(undefined8 *)(param_1 + 0x80);
  local_58 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48,&local_38,&local_58);
  local_28 = *(undefined8 *)(param_1 + 0xf0);
  local_38 = *(undefined8 *)(param_1 + 0xe0);
  uStack_30 = *(undefined8 *)(param_1 + 0xe8);
  local_48 = *(undefined8 *)(param_1 + 0x108);
  local_58 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined8 *)(param_1 + 0x100);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x38);
  (**(code **)(*(longlong *)(param_1 + 0xd0) + 8))(param_1 + 0xd0,&local_38,&local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802b2bc FUN_14802b2bc body=618 status=ok
// SIG undefined FUN_14802b2bc(void)

void FUN_14802b2bc(longlong param_1,float *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (*(char *)(param_1 + 0x170) == '\x01') {
    fVar10 = *param_2;
    if (0.0001 < fVar10) {
      dVar1 = *(double *)(param_1 + 0x168);
      dVar6 = *(double *)(param_1 + 0x38) - dVar1;
      dVar2 = *(double *)(param_1 + 0x160);
      dVar8 = *(double *)(param_1 + 0x30) - dVar2;
      dVar3 = *(double *)(param_1 + 0x158);
      dVar7 = *(double *)(param_1 + 0x28) - dVar3;
      dVar4 = (double)(1.0 / fVar10);
      do {
        fVar9 = 0.008333334;
        if (fVar10 <= 0.008333334) {
          fVar9 = fVar10;
        }
        dVar5 = (double)fVar9;
        dVar1 = dVar1 + dVar6 * dVar4 * dVar5;
        dVar2 = dVar2 + dVar8 * dVar4 * dVar5;
        dVar3 = dVar3 + dVar5 * dVar7 * dVar4;
        fVar10 = fVar10 - fVar9;
        local_128 = param_3;
        local_e8 = dVar3;
        local_e0 = dVar2;
        local_d8 = dVar1;
        FUN_14802ba20(param_1,&local_100,&local_e8);
      } while (0.0001 < fVar10);
    }
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0xf0);
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(param_1 + 0x34);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_148);
  }
  local_108 = *(undefined8 *)(param_1 + 0x38);
  local_118 = *(undefined4 *)(param_1 + 0x28);
  uStack_114 = *(undefined4 *)(param_1 + 0x2c);
  uStack_110 = *(undefined4 *)(param_1 + 0x30);
  uStack_10c = *(undefined4 *)(param_1 + 0x34);
  local_128 = param_3;
  FUN_14802ba20(param_1,&local_100,&local_118,*param_2);
  *(undefined8 *)(param_1 + 0x20) = local_f0;
  *(undefined4 *)(param_1 + 0x10) = local_100;
  *(undefined4 *)(param_1 + 0x14) = uStack_fc;
  *(undefined4 *)(param_1 + 0x18) = uStack_f8;
  *(undefined4 *)(param_1 + 0x1c) = uStack_f4;
  if ((local_d0 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802b528 FUN_14802b528 body=205 status=ok
// SIG undefined FUN_14802b528(void)

void FUN_14802b528(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14802bb74(param_1 + 0x48);
  FUN_14802bb74(param_1 + 0xd0,param_2,param_3);
  FUN_14480c34d(param_3,param_1 + 0x158);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x170);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x170) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x170) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802b5f6 FUN_14802b5f6 body=29 status=ok
// SIG undefined FUN_14802b5f6(void)

undefined8 FUN_14802b5f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14802b62c FUN_14802b62c body=749 status=ok
// SIG undefined FUN_14802b62c(void)

void FUN_14802b62c(longlong param_1,float *param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)(param_1 + 0x81) == '\x01') {
    fVar11 = *param_2;
    if ((*(char *)(param_1 + 0x80) == '\x01') && (0.0 < *(float *)(param_1 + 0x78))) {
      fVar11 = fVar11 + *(float *)(param_1 + 0x78);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x58);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x50);
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    if (0.0001 < fVar11) {
      dVar2 = *(double *)(param_1 + 0x70);
      dVar7 = *(double *)(param_1 + 0x38) - dVar2;
      dVar3 = *(double *)(param_1 + 0x68);
      dVar9 = *(double *)(param_1 + 0x30) - dVar3;
      dVar4 = *(double *)(param_1 + 0x60);
      dVar8 = *(double *)(param_1 + 0x28) - dVar4;
      dVar5 = (double)(1.0 / fVar11);
      puVar1 = (undefined8 *)(param_1 + 0x10);
      do {
        fVar10 = 0.008333334;
        if (fVar11 <= 0.008333334) {
          fVar10 = fVar11;
        }
        if ((fVar10 < 0.008333334) && (*(char *)(param_1 + 0x80) != '\0')) {
          *(float *)(param_1 + 0x78) = fVar10;
          *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x20);
          *(undefined8 *)(param_1 + 0x48) = *puVar1;
          *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x18);
        }
        dVar6 = (double)fVar10;
        dVar2 = dVar2 + dVar7 * dVar5 * dVar6;
        dVar3 = dVar3 + dVar9 * dVar5 * dVar6;
        dVar4 = dVar4 + dVar6 * dVar8 * dVar5;
        fVar11 = fVar11 - fVar10;
        local_138 = *(undefined4 *)(param_1 + 0x7c);
        local_118 = *(undefined4 *)puVar1;
        uStack_114 = *(undefined4 *)(param_1 + 0x14);
        uStack_110 = *(undefined4 *)(param_1 + 0x18);
        uStack_10c = *(undefined4 *)(param_1 + 0x1c);
        local_108 = *(undefined8 *)(param_1 + 0x20);
        local_f8 = dVar4;
        dStack_f0 = dVar3;
        local_e8 = dVar2;
        FUN_140b81d26(&local_130,&local_118,&local_f8);
        *(undefined8 *)(param_1 + 0x20) = local_120;
        *puVar1 = CONCAT44(uStack_12c,local_130);
        *(ulonglong *)(param_1 + 0x18) = CONCAT44(uStack_124,uStack_128);
      } while (0.0001 < fVar11);
    }
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x34);
  }
  else {
    local_e8 = *(double *)(param_1 + 0x38);
    local_f8 = *(double *)(param_1 + 0x28);
    dStack_f0 = *(double *)(param_1 + 0x30);
    local_138 = *(undefined4 *)(param_1 + 0x7c);
    local_108 = *(undefined8 *)(param_1 + 0x20);
    local_118 = *(undefined4 *)(param_1 + 0x10);
    uStack_114 = *(undefined4 *)(param_1 + 0x14);
    uStack_110 = *(undefined4 *)(param_1 + 0x18);
    uStack_10c = *(undefined4 *)(param_1 + 0x1c);
    FUN_140b81d26(&local_130,&local_118,&local_f8,*param_2);
    *(undefined8 *)(param_1 + 0x20) = local_120;
    *(undefined4 *)(param_1 + 0x10) = local_130;
    *(undefined4 *)(param_1 + 0x14) = uStack_12c;
    *(undefined4 *)(param_1 + 0x18) = uStack_128;
    *(undefined4 *)(param_1 + 0x1c) = uStack_124;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if ((local_e0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802b91a FUN_14802b91a body=260 status=ok
// SIG undefined FUN_14802b91a(void)

void FUN_14802b91a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14480c34d(param_3,param_1 + 0x48);
  FUN_14480c34d(param_3,param_1 + 0x60);
  puVar1 = *(undefined4 **)param_3[1];
  if ((undefined4 *)((undefined8 *)param_3[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_3 + 0x2a) & 2) == 0) {
      (**(code **)(*param_3 + 0x170))(param_3,(undefined4 *)(param_1 + 0x78),4);
    }
    else {
      thunk_FUN_14572512c(param_3);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x78) = *puVar1;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  piVar2 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar2 + 1) {
    local_24 = (uint)*(byte *)(param_1 + 0x80);
    (**(code **)(*param_3 + 0x170))(param_3,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 0x80) = local_24 != 0;
  }
  else {
    *(bool *)(param_1 + 0x80) = *piVar2 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802ba20 FUN_14802ba20 body=338 status=ok
// SIG undefined FUN_14802ba20(void)

undefined4 *
FUN_14802ba20(longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined1 local_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = 0;
  local_48 = *(undefined8 *)(param_1 + 0x68);
  local_58 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  local_68 = *(undefined8 *)(param_1 + 0x80);
  local_78 = *(undefined8 *)(param_1 + 0x70);
  uStack_70 = *(undefined8 *)(param_1 + 0x78);
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(param_1 + 0x70) = *param_3;
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  *(undefined4 *)(param_1 + 0x78) = uVar2;
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_3 + 4);
  local_80 = param_4;
  (**(code **)(*(longlong *)(param_1 + 0x48) + 8))(param_1 + 0x48,&local_58,&local_78);
  (**(code **)(*(longlong *)(param_1 + 0x48) + 0x10))(param_1 + 0x48,&local_80,param_5);
  local_48 = *(undefined8 *)(param_1 + 0xf0);
  local_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  local_68 = *(undefined8 *)(param_1 + 0x108);
  local_78 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined8 *)(param_1 + 0x100);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x68);
  (**(code **)(*(longlong *)(param_1 + 0xd0) + 8))(param_1 + 0xd0,&local_58,&local_78);
  (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x10))(param_1 + 0xd0,&local_80,param_5);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0xf0);
  uVar1 = *(undefined4 *)(param_1 + 0xe4);
  uVar2 = *(undefined4 *)(param_1 + 0xe8);
  uVar3 = *(undefined4 *)(param_1 + 0xec);
  *param_2 = *(undefined4 *)(param_1 + 0xe0);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802bb74 FUN_14802bb74 body=199 status=ok
// SIG undefined FUN_14802bb74(void)

void FUN_14802bb74(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14480c34d(param_3,param_1 + 2);
  FUN_14480c34d(param_3,param_1 + 5);
  piVar1 = *(int **)param_3[1];
  if ((int *)((undefined8 *)param_3[1])[1] < piVar1 + 1) {
    local_2c = (uint)*(byte *)(param_1 + 8);
    (**(code **)(*param_3 + 0x170))(param_3,&local_2c,4);
    if (1 < local_2c) {
      FUN_14572541c(param_3);
    }
    *(bool *)(param_1 + 8) = local_2c != 0;
  }
  else {
    *(bool *)(param_1 + 8) = *piVar1 != 0;
    *(longlong *)param_3[1] = *(longlong *)param_3[1] + 4;
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802bc3c FUN_14802bc3c body=369 status=ok
// SIG undefined FUN_14802bc3c(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14802bc3c(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_14e8 [32];
  undefined4 local_14c8;
  undefined4 local_14c4;
  undefined1 local_14b8 [2264];
  longlong local_be0;
  longlong lStack_b58;
  char local_ac8;
  undefined1 local_a88 [156];
  char local_9ec;
  longlong local_1b0;
  longlong local_128;
  char local_98;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_14e8;
  FUN_1400e6e60(local_14b8);
  FUN_1400e6e60(local_a88);
  local_14c8 = param_2;
  local_14c4 = param_3;
  FUN_1447ff17a(local_14b8,param_4);
  FUN_1447ff17a(local_a88,param_5);
  uVar1 = FUN_14477b072(param_1,DAT_14cb2b788);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_14c8);
  FUN_1447ff17a(param_5,local_a88);
  if (local_98 == '\x01') {
    local_98 = '\0';
  }
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  if (local_9ec == '\x01') {
    local_9ec = '\0';
  }
  if (local_ac8 == '\x01') {
    local_ac8 = '\0';
  }
  if (lStack_b58 != 0) {
    FUN_1400020a8();
  }
  if (local_be0 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_14e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802bdae FUN_14802bdae body=140 status=ok
// SIG undefined FUN_14802bdae(void)

void FUN_14802bdae(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14477b072(param_1,DAT_14cb2b798);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_21 = 0;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_21);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x00014802be38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2a0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802be4a FUN_14802be4a body=41 status=ok
// SIG undefined FUN_14802be4a(void)

void FUN_14802be4a(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x2a0))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14802be78 FUN_14802be78 body=530 status=ok
// SIG undefined FUN_14802be78(void)

void FUN_14802be78(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  ulonglong uVar3;
  undefined1 auStack_a8 [32];
  undefined4 *local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined1 local_45;
  undefined4 local_44;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_45 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_45);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_45);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  uVar1 = local_44;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_50;
  local_78 = local_60;
  uStack_74 = uStack_5c;
  uStack_70 = uStack_58;
  uStack_6c = uStack_54;
  uVar3 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),local_45);
  local_80 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_88 = &local_78;
  uVar2 = FUN_14802c08c(local_38,&local_80,uVar1,uVar3 & 0xffffffff);
  *param_3 = uVar2;
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c08c FUN_14802c08c body=210 status=ok
// SIG undefined FUN_14802c08c(void)

longlong FUN_14802c08c(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 != (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_5 + 4);
    local_48 = *param_5;
    uStack_44 = param_5[1];
    uStack_40 = param_5[2];
    uStack_3c = param_5[3];
    local_50 = *param_2;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_58 = &local_48;
    lVar1 = (**(code **)(*param_1 + 2000))(param_1,&local_50,param_3,param_4);
    if (lVar1 != 0) {
      lVar2 = FUN_145899032();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14802c10d;
    }
  }
  lVar1 = 0;
LAB_14802c10d:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14802c160 FUN_14802c160 body=652 status=ok
// SIG undefined FUN_14802c160(void)

void FUN_14802c160(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 *local_a0;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_4d = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  uVar3 = local_48;
  uVar2 = local_4c;
  uVar1 = local_4d;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_58;
  local_88 = local_68;
  uStack_84 = uStack_64;
  uStack_80 = uStack_60;
  uStack_7c = uStack_5c;
  local_90 = local_40;
  if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_a0 = &local_88;
  local_a8 = uVar1;
  uVar3 = FUN_14802c3ee(local_38,&local_90,uVar3,uVar2);
  *param_3 = uVar3;
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c3ee FUN_14802c3ee body=223 status=ok
// SIG undefined FUN_14802c3ee(void)

longlong FUN_14802c3ee(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                      undefined1 param_5,undefined4 *param_6)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined4 *local_60;
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1 != (longlong *)0x0) {
    local_38 = *(undefined8 *)(param_6 + 4);
    local_48 = *param_6;
    uStack_44 = param_6[1];
    uStack_40 = param_6[2];
    uStack_3c = param_6[3];
    local_50 = *param_2;
    if ((local_50 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_60 = &local_48;
    local_68 = param_5;
    lVar1 = (**(code **)(*param_1 + 0x7d8))(param_1,&local_50,param_3,param_4);
    if (lVar1 != 0) {
      lVar2 = FUN_145899032();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14802c47b;
    }
  }
  lVar1 = 0;
LAB_14802c47b:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14802c4de FUN_14802c4de body=151 status=ok
// SIG undefined FUN_14802c4de(void)

void FUN_14802c4de(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c592 FUN_14802c592 body=238 status=ok
// SIG undefined FUN_14802c592(void)

void FUN_14802c592(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  uVar1 = FUN_1414fb874(local_20,local_24);
  uVar1 = FUN_14802c810(uVar1);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c682 FUN_14802c682 body=238 status=ok
// SIG undefined FUN_14802c682(void)

void FUN_14802c682(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  uVar1 = FUN_147abac98(local_20,local_24);
  uVar1 = FUN_14802c810(uVar1);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c772 FUN_14802c772 body=156 status=ok
// SIG undefined FUN_14802c772(void)

void FUN_14802c772(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14802c810(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c810 FUN_14802c810 body=115 status=ok
// SIG undefined FUN_14802c810(void)

undefined8 FUN_14802c810(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0x448);
    local_18 = FUN_145861cea();
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_18);
    }
    uVar2 = (**(code **)(*plVar1 + 0x6b8))(plVar1,&local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c88a FUN_14802c88a body=258 status=ok
// SIG undefined FUN_14802c88a(void)

void FUN_14802c88a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [36];
  ushort local_24 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24[0] = 0xffff;
  local_24[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_24);
  }
  puVar3 = *(ushort **)(param_2 + 0x38);
  puVar5 = puVar3;
  if (puVar3 == (ushort *)0x0) {
    puVar5 = local_24;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *puVar5;
  if ((uVar2 == 0xffff) ||
     (*(uint *)(param_1 + 0x50) == (uint)uVar2 || (int)*(uint *)(param_1 + 0x50) < (int)(uint)uVar2)
     ) {
    bVar7 = false;
  }
  else {
    lVar6 = (ulonglong)(uint)uVar2 * 0x78;
    lVar1 = *(longlong *)(param_1 + 0x48) + lVar6;
    puVar5 = local_24;
    if (puVar3 != (ushort *)0x0) {
      puVar5 = puVar3;
    }
    bVar7 = false;
    if ((lVar1 != 0) && (*(ushort *)(*(longlong *)(param_1 + 0x48) + 0x52 + lVar6) == puVar5[1])) {
      lVar1 = *(longlong *)(lVar1 + 0x58);
      iVar4 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x38))(lVar1 + 0x28);
      bVar7 = iVar4 == 1;
    }
  }
  *param_3 = bVar7;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802c98e FUN_14802c98e body=402 status=ok
// SIG undefined FUN_14802c98e(void)

void FUN_14802c98e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [9];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_78 = &DAT_3f8000003f800000;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  local_38 = DAT_14c846508;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  ppuVar2 = &local_78;
  puVar3 = local_c8;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1438e4658(param_1,&local_7c,local_30);
  *param_3 = local_7c;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802cb26 FUN_14802cb26 body=162 status=ok
// SIG undefined FUN_14802cb26(void)

void FUN_14802cb26(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x310))(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802cbd0 FUN_14802cbd0 body=300 status=ok
// SIG undefined FUN_14802cbd0(void)

void FUN_14802cbd0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  lVar2 = local_38;
  iVar1 = local_3c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x78;
    lVar3 = *(longlong *)(param_1 + 0x48) + 0x50;
    do {
      if (*(longlong *)(lVar3 + -0x50) == lVar2) {
        FUN_1438e4826(param_1,lVar3,iVar1 != 0);
      }
      lVar3 = lVar3 + 0x78;
      lVar4 = lVar4 + -0x78;
    } while (lVar4 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802cd04 FUN_14802cd04 body=263 status=ok
// SIG undefined FUN_14802cd04(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14802cd04(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  int local_28 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[1] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_28[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  piVar2 = local_28 + 1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1438e4826(param_1,piVar2,local_28[0] != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802ce10 FUN_14802ce10 body=156 status=ok
// SIG undefined FUN_14802ce10(void)

void FUN_14802ce10(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_14802ceae(local_20);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802ceae FUN_14802ceae body=154 status=ok
// SIG undefined FUN_14802ceae(void)

longlong FUN_14802ceae(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_1 != (longlong *)0x0) {
    local_18 = FUN_145861cea();
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_18);
    }
    lVar1 = (**(code **)(*param_1 + 0x6b8))(param_1,&local_18);
    if (lVar1 != 0) {
      lVar2 = FUN_145861cea();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) goto LAB_14802cec9;
    }
  }
  lVar1 = 0;
LAB_14802cec9:
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 14802cf4a FUN_14802cf4a body=145 status=ok
// SIG undefined FUN_14802cf4a(void)

void FUN_14802cf4a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802cfdc FUN_14802cfdc body=145 status=ok
// SIG undefined FUN_14802cfdc(void)

void FUN_14802cfdc(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_144a7add4();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802d072 FUN_14802d072 body=208 status=ok
// SIG undefined FUN_14802d072(void)

float FUN_14802d072(undefined1 param_1,float param_2)

{
  float fVar1;
  
  switch(param_1) {
  case 1:
                    /* WARNING: Could not recover jumptable at 0x00014802d0ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = sinf(param_2 * 1.5707964);
    return fVar1;
  case 2:
    param_2 = param_2 * param_2;
    break;
  case 3:
    fVar1 = 3.0;
    goto LAB_14802d0d0;
  case 4:
    fVar1 = 4.0;
    goto LAB_14802d0d0;
  case 5:
    fVar1 = 5.0;
LAB_14802d0d0:
                    /* WARNING: Could not recover jumptable at 0x00014802d0d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar1 = powf(param_2,fVar1);
    return fVar1;
  case 6:
    fVar1 = (float)exp2f((param_2 + -1.0) * 10.0);
    return fVar1;
  case 7:
    param_2 = 1.0 - param_2 * param_2;
    if (param_2 < 0.0) {
      param_2 = sqrtf(param_2);
    }
    else {
      param_2 = SQRT(param_2);
    }
    param_2 = 1.0 - param_2;
  }
  return param_2;
}



// FUNCTION 14802d142 FUN_14802d142 body=204 status=ok
// SIG undefined FUN_14802d142(void)

ulonglong FUN_14802d142(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  
  plVar1 = (longlong *)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x50);
  uVar9 = (ulonglong)iVar3;
  if (0 < (longlong)uVar9) {
    plVar8 = (longlong *)*plVar1;
    uVar6 = 0;
    do {
      if (*plVar8 == 0) {
        uVar9 = uVar6 & 0xffffffff;
        goto LAB_14802d1f2;
      }
      uVar6 = uVar6 + 1;
      plVar8 = plVar8 + 0xf;
    } while (uVar9 != uVar6);
  }
  *(uint *)(param_1 + 0x50) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar3 + 1U) {
    FUN_1480306f2(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  lVar7 = uVar9 * 0x78;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  *(undefined1 **)(lVar4 + 8 + lVar7) = &DAT_3f8000003f800000;
  *(undefined1 *)(lVar4 + 0x10 + lVar7) = 0;
  *(undefined4 *)(lVar4 + 0x14 + lVar7) = 0;
  *(undefined1 *)(lVar4 + 0x18 + lVar7) = 0;
  *(undefined4 *)(lVar4 + 0x1c + lVar7) = 0;
  *(undefined1 *)(lVar4 + 0x20 + lVar7) = 0;
  *(undefined4 *)(lVar4 + 0x24 + lVar7) = 0;
  *(undefined1 *)(lVar4 + 0x28 + lVar7) = 0;
  *(undefined4 *)(lVar4 + 0x2c + lVar7) = 0;
  *(undefined1 *)(lVar4 + 0x30 + lVar7) = 0;
  uVar5 = DAT_14c846500;
  puVar2 = (undefined8 *)(lVar4 + 0x38 + lVar7);
  *puVar2 = DAT_14c8464f8;
  puVar2[1] = uVar5;
  *(undefined8 *)(lVar4 + 0x48 + lVar7) = DAT_14c846508;
  *(undefined4 *)(lVar4 + 0x50 + lVar7) = DAT_14cb2b948;
  puVar2 = (undefined8 *)(lVar4 + 0x62 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar4 + 0x58 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_14802d1f2:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14802d20e FUN_14802d20e body=183 status=ok
// SIG undefined FUN_14802d20e(void)

undefined8 FUN_14802d20e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1459098d4();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802d2c6 FUN_14802d2c6 body=183 status=ok
// SIG undefined FUN_14802d2c6(void)

undefined8 FUN_14802d2c6(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [8];
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong local_78;
  longlong *local_68;
  longlong local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  uVar1 = FUN_1458cbe84();
  FUN_144a5c54a(local_b8,uVar1);
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(local_b8);
  if (local_78 != 0) {
    if (local_68 == (longlong *)0x0) {
      local_68 = local_58;
    }
    (**(code **)(*local_68 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802d37e FUN_14802d37e body=173 status=ok
// SIG undefined FUN_14802d37e(void)

longlong * FUN_14802d37e(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
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
  lVar2 = 9;
  plVar3 = param_2;
  plVar4 = param_1;
  while( true ) {
    plVar4 = plVar4 + 1;
    plVar3 = plVar3 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *plVar4 = *plVar3;
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
    }
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = param_2[0xd];
  *(short *)(param_1 + 0xe) = (short)param_2[0xe];
  return param_1;
}



// FUNCTION 14802d42c FUN_14802d42c body=69 status=ok
// SIG undefined FUN_14802d42c(void)

void FUN_14802d42c(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0x50) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 0x50) * 0x78;
    lVar1 = *(longlong *)(param_1 + 0x48) + 0x50;
    do {
      FUN_1438e4826(param_1,lVar1,param_2);
      lVar1 = lVar1 + 0x78;
      lVar2 = lVar2 + -0x78;
    } while (lVar2 != 0);
  }
  return;
}



// FUNCTION 14802d472 FUN_14802d472 body=1675 status=ok
// SIG undefined FUN_14802d472(void)

void FUN_14802d472(longlong param_1,undefined8 param_2,undefined8 param_3,float *param_4,
                  float *param_5)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  int iVar7;
  wchar_t *pwVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 unaff_XMM13 [16];
  undefined1 auStack_218 [32];
  float *local_1f8;
  double local_1f0;
  double local_1e8;
  wchar_t *local_1e0;
  wchar_t *local_1d8;
  undefined8 local_1c8;
  int local_1bc;
  undefined8 local_1b8;
  float *local_1b0;
  undefined8 local_1a8;
  longlong local_1a0;
  undefined8 local_198;
  wchar_t *local_190;
  int local_188;
  longlong local_180;
  int local_178;
  longlong local_170;
  int local_168;
  wchar_t *local_160;
  int local_158;
  wchar_t *local_150;
  int local_148;
  longlong local_140;
  int local_138;
  longlong local_130;
  int local_128;
  undefined4 local_120 [2];
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  local_1c8 = param_2;
  FUN_147d8e5b4(param_2,&DAT_149e1e2d4);
  local_1b8 = FUN_14375bb6e();
  fVar16 = *param_4;
  fVar15 = *param_5 / fVar16;
  iVar9 = (int)ROUND(-0.5 - (fVar15 + fVar15)) >> 1;
  local_120[0] = 0;
  local_118 = 0;
  uStack_114 = 0;
  uStack_110 = 0;
  uStack_10c = 0;
  local_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  fVar15 = *(float *)(param_1 + 0x40);
  local_1b0 = param_4;
  if (param_1 == 0) {
    FUN_140056680(&local_150,&DAT_149e01fe8);
  }
  else {
    local_140 = *(longlong *)(param_1 + 0x18);
    FUN_1400021e4(&local_140,&local_150);
  }
  pwVar13 = local_150;
  if (local_148 == 0) {
    pwVar13 = L"";
  }
  local_1a8 = param_3;
  FUN_140002266(&local_140,L"Modifier_CameraAnimationSequence %s, Alpha:%f",pwVar13,(double)fVar15);
  local_130 = local_140;
  local_128 = local_138 + -1;
  if (local_138 == 0) {
    local_128 = 0;
  }
  local_1e0 = (wchar_t *)local_120;
  local_1e8 = (double)CONCAT44(local_1e8._4_4_,0x3f800000);
  local_1f0 = (double)CONCAT44(local_1f0._4_4_,0x3f800000);
  local_1f8 = (float *)CONCAT44(local_1f8._4_4_,(float)-iVar9 * fVar16);
  FUN_147d8e6b2(local_1c8,local_1b8);
  if (local_140 != 0) {
    FUN_1400020a8();
  }
  if (local_150 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  iVar9 = 1 - iVar9;
  iVar7 = *(int *)(param_1 + 0x50);
  if (0 < iVar7) {
    pwVar13 = L"";
    lVar10 = 0;
    uVar11 = 0;
    local_1a0 = param_1;
    do {
      lVar3 = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(lVar3 + lVar10) != 0) {
        lVar4 = *(longlong *)(lVar3 + 0x58 + lVar10);
        lVar5 = *(longlong *)(lVar4 + 0x2b8);
        local_198 = *(undefined8 *)(lVar4 + 0x314);
        iVar7 = *(int *)(lVar4 + 0x2cc);
        unaff_XMM13 = roundps(unaff_XMM13,ZEXT416((uint)*(float *)(lVar4 + 0x2d0)),1);
        iVar2 = *(int *)(lVar4 + 0x310);
        fVar16 = (*(float *)(lVar4 + 0x2d0) - unaff_XMM13._0_4_) + 0.5 + -0.5;
        if (0.99999994 <= fVar16) {
          fVar16 = 0.99999994;
        }
        pwVar8 = pwVar13;
        if (*(char *)(lVar3 + 0x20 + lVar10) != '\0') {
          pwVar8 = L" Looping";
        }
        local_1bc = iVar9;
        FUN_140056680(&local_140,pwVar8);
        if (*(char *)(lVar3 + 0x70 + lVar10) == '\x01') {
          FUN_140002266(&local_150,L" Easing In: %f / %f",(double)*(float *)(lVar3 + 0x68 + lVar10),
                        (double)*(float *)(lVar3 + 0x14 + lVar10));
        }
        else {
          FUN_140056680(&local_150,&DAT_149dfb77a);
        }
        if (*(char *)(lVar3 + 0x71 + lVar10) == '\x01') {
          FUN_140002266(&local_160,L" Easing Out: %f / %f",(double)*(float *)(lVar3 + 0x6c + lVar10)
                        ,(double)*(float *)(lVar3 + 0x1c + lVar10));
        }
        else {
          FUN_140056680(&local_160,&DAT_149dfb77a);
        }
        local_120[0] = 0;
        local_118 = local_118 & 0xfffffffe;
        uStack_114 = 0;
        uStack_110 = 0;
        uStack_10c = 0;
        local_108 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        local_100 = 0;
        uStack_f8 = 0;
        fVar15 = *local_1b0;
        pwVar8 = pwVar13;
        if (local_158 != 0) {
          pwVar8 = local_160;
        }
        pwVar14 = pwVar13;
        if (local_148 != 0) {
          pwVar14 = local_150;
        }
        fVar1 = *(float *)(lVar3 + 8 + lVar10);
        if (*(longlong *)(lVar3 + lVar10) == 0) {
          FUN_140056680(&local_190,&DAT_149e01fe8);
        }
        else {
          local_180 = *(longlong *)(*(longlong *)(lVar3 + lVar10) + 0x18);
          FUN_1400021e4(&local_180,&local_190);
        }
        iVar9 = local_1bc;
        pwVar12 = pwVar13;
        if (local_188 != 0) {
          pwVar12 = local_190;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar6 = (float)(int)((ulonglong)lVar5 >> 0x20);
        fVar17 = (float)local_1bc;
        local_1e8 = (double)(((float)((longlong)((iVar7 - iVar2) + (int)unaff_XMM13._0_4_) *
                                     (lVar5 >> 0x20)) + fVar16 * fVar6) / (float)(int)lVar5);
        local_1f0 = (double)(((float)((longlong)(int)local_198 * (lVar5 >> 0x20)) +
                             (float)((ulonglong)local_198 >> 0x20) * fVar6) / (float)(int)lVar5);
        local_1f8 = (float *)(double)fVar1;
        local_1e0 = pwVar14;
        local_1d8 = pwVar8;
        FUN_140002266(&local_180,L"[%d] %s PlayRate: %f Duration: %f Elapsed: %f%s%s",
                      uVar11 & 0xffffffff,pwVar12);
        local_170 = local_180;
        local_168 = local_178 + -1;
        if (local_178 == 0) {
          local_168 = 0;
        }
        local_1e0 = (wchar_t *)local_120;
        local_1e8 = (double)CONCAT44(local_1e8._4_4_,0x3f800000);
        local_1f0 = (double)CONCAT44(local_1f0._4_4_,0x3f800000);
        local_1f8 = (float *)CONCAT44(local_1f8._4_4_,fVar17 * fVar15);
        FUN_147d8e6b2(local_1c8,local_1b8,&local_170);
        if (local_180 != 0) {
          FUN_1400020a8();
        }
        param_1 = local_1a0;
        if (local_190 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_160 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_150 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        if (local_140 != 0) {
          FUN_1400020a8();
        }
        iVar9 = iVar9 + 1;
        iVar7 = *(int *)(param_1 + 0x50);
      }
      uVar11 = uVar11 + 1;
      lVar10 = lVar10 + 0x78;
    } while ((longlong)uVar11 < (longlong)iVar7);
  }
  *param_5 = (float)iVar9 * *local_1b0;
  local_1f8 = param_5;
  FUN_14799049e(param_1,local_1c8,local_1a8);
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802dafe FUN_14802dafe body=208 status=ok
// SIG undefined FUN_14802dafe(void)

void FUN_14802dafe(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined2 uStack_28;
  undefined6 uStack_26;
  undefined2 uStack_20;
  undefined8 uStack_1e;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = (param_2 & 0xffffffff) * 0x78;
  lVar1 = *(longlong *)(param_1 + 0x48) + lVar3;
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0x58 + lVar3);
  iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
  if (iVar2 != 0) {
    FUN_147fc16ae(*(undefined8 *)(lVar1 + 0x58));
  }
  local_88 = 0;
  local_80 = &DAT_3f8000003f800000;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_50 = DAT_14c8464f8;
  uStack_48 = DAT_14c846500;
  local_40 = DAT_14c846508;
  local_38 = DAT_14cb2b948;
  local_30 = 0;
  uStack_28 = 0;
  uStack_26 = 0;
  uStack_20 = 0;
  uStack_1e = 0;
  FUN_14802d37e(lVar1);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802dbd6 FUN_14802dbd6 body=243 status=ok
// SIG undefined FUN_14802dbd6(void)

void FUN_14802dbd6(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  local_24 = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_24;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_14802dcca(local_20,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802dcca FUN_14802dcca body=98 status=ok
// SIG undefined FUN_14802dcca(void)

bool FUN_14802dcca(undefined8 param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = FUN_14802c810();
  if (lVar3 != 0) {
    uVar1 = *param_2;
    if ((uVar1 != 0xffff) &&
       (*(uint *)(lVar3 + 0x50) != (uint)uVar1 && (int)(uint)uVar1 <= (int)*(uint *)(lVar3 + 0x50)))
    {
      lVar5 = (ulonglong)(uint)uVar1 * 0x78;
      lVar4 = *(longlong *)(lVar3 + 0x48) + lVar5;
      if (lVar4 == 0) {
        return false;
      }
      if (*(ushort *)(*(longlong *)(lVar3 + 0x48) + 0x52 + lVar5) != param_2[1]) {
        return false;
      }
      lVar3 = *(longlong *)(lVar4 + 0x58);
      iVar2 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x38))(lVar3 + 0x28);
      return iVar2 == 1;
    }
  }
  return false;
}



// FUNCTION 14802dd2c FUN_14802dd2c body=466 status=ok
// SIG undefined FUN_14802dd2c(void)

void FUN_14802dd2c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 **ppuVar2;
  undefined8 *puVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8 [9];
  undefined4 local_7c;
  undefined1 *local_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_78 = &DAT_3f8000003f800000;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  local_38 = DAT_14c846508;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  ppuVar2 = &local_78;
  puVar3 = local_c8;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14802df00(&local_7c,local_28,local_30);
  *param_3 = local_7c;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802df00 FUN_14802df00 body=138 status=ok
// SIG undefined FUN_14802df00(void)

undefined4 *
FUN_14802df00(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  undefined8 local_70 [9];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = FUN_14802c810(param_2);
  if (lVar1 == 0) {
    FUN_1415b7ec4(L"Can\'t play camera animation: no camera animation modifier found",2,0);
    *param_1 = DAT_14cb2b948;
  }
  else {
    puVar3 = local_70;
    for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar3 = *param_4;
      param_4 = param_4 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1438e4658(lVar1,param_1,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802df92 FUN_14802df92 body=266 status=ok
// SIG undefined FUN_14802df92(void)

void FUN_14802df92(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  iVar1 = local_24;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar2 = (longlong *)FUN_14802c810(local_20);
  if (plVar2 == (longlong *)0x0) {
    FUN_1415b7ec4(L"Can\'t stop all camera animation: no camera animation modifier found",2,0);
  }
  else {
    (**(code **)(*plVar2 + 0x310))(plVar2,iVar1 != 0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802e0a4 FUN_14802e0a4 body=303 status=ok
// SIG undefined FUN_14802e0a4(void)

void FUN_14802e0a4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14802e1d4(local_18,local_20,local_24 != 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802e1d4 FUN_14802e1d4 body=121 status=ok
// SIG undefined FUN_14802e1d4(void)

void FUN_14802e1d4(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = FUN_14802c810();
  if (lVar1 != 0) {
    if ((longlong)*(int *)(lVar1 + 0x50) != 0) {
      lVar3 = (longlong)*(int *)(lVar1 + 0x50) * 0x78;
      lVar2 = *(longlong *)(lVar1 + 0x48) + 0x50;
      do {
        if (*(longlong *)(lVar2 + -0x50) == param_2) {
          FUN_1438e4826(lVar1,lVar2,param_3);
        }
        lVar2 = lVar2 + 0x78;
        lVar3 = lVar3 + -0x78;
      } while (lVar3 != 0);
    }
    return;
  }
  FUN_1415b7ec4(L"Can\'t stop camera animations: no camera animation modifier found",2,0);
  return;
}



// FUNCTION 14802e254 FUN_14802e254 body=317 status=ok
// SIG undefined FUN_14802e254(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14802e254(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  int local_28 [2];
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
  local_28[1] = 0xffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 1);
  }
  piVar1 = *(int **)(param_2 + 0x38);
  local_28[0] = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  piVar2 = local_28 + 1;
  if (piVar1 != (int *)0x0) {
    piVar2 = piVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14802e392(local_20,piVar2,local_28[0] != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802e392 FUN_14802e392 body=65 status=ok
// SIG undefined FUN_14802e392(void)

void FUN_14802e392(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_14802c810();
  if (lVar1 != 0) {
    FUN_1438e4826(lVar1,param_2,param_3);
    return;
  }
  FUN_1415b7ec4(L"Can\'t stop camera animation: no camera animation modifier found",2,0);
  return;
}



// FUNCTION 14802e3da FUN_14802e3da body=218 status=ok
// SIG undefined FUN_14802e3da(void)

void FUN_14802e3da(longlong param_1,float *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_88 [40];
  float local_60;
  char local_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 == 0) {
    cVar4 = '\0';
    fVar6 = 0.0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x28);
    fVar6 = 0.0;
    lVar5 = 0;
    cVar4 = '\0';
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if (lVar3 != 0) {
        local_60 = 0.0;
        local_5c = '\0';
        local_58 = 0;
        FUN_14799139e(lVar3,&local_60);
        if (local_5c == '\0') {
          if (fVar6 <= local_60) {
            fVar6 = local_60;
          }
LAB_14802e468:
          if (cVar4 == '\x01') {
LAB_14802e4b1:
            cVar4 = '\x01';
            break;
          }
        }
        else {
          if (local_5c != '\x02') {
            if (local_5c != '\x01') goto LAB_14802e468;
            fVar6 = 0.0;
            goto LAB_14802e4b1;
          }
          if (fVar6 <= local_60) {
            fVar6 = local_60;
          }
          cVar4 = '\x02';
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *param_2 = fVar6;
  *(char *)(param_2 + 1) = cVar4;
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802e4b6 FUN_14802e4b6 body=72 status=ok
// SIG undefined FUN_14802e4b6(void)

void FUN_14802e4b6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2a8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14802e4fe FUN_14802e4fe body=886 status=ok
// SIG undefined FUN_14802e4fe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14802e4fe(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_1498 [40];
  longlong local_1470;
  undefined8 *local_1468;
  undefined8 *local_1460;
  float local_1458;
  undefined1 local_1454;
  undefined8 local_1448 [16];
  undefined8 local_13c8 [2];
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined4 local_13a0;
  undefined4 uStack_139c;
  undefined4 uStack_1398;
  undefined4 uStack_1394;
  undefined8 local_1390;
  undefined4 local_1388;
  undefined1 local_1378 [2088];
  longlong lStack_b50;
  longlong local_ac8;
  undefined4 local_ab8;
  undefined1 local_ab4;
  undefined8 local_aa8;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined4 local_a68;
  undefined4 local_a00;
  char local_9fc;
  undefined8 local_9f8;
  undefined4 local_9f0;
  undefined1 local_9e8 [2088];
  longlong local_1c0;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [12];
  byte local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14802e514;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1498;
  local_1470 = FUN_147991eba();
  local_aa0 = *(undefined4 *)(param_2 + 1);
  local_aa8 = *param_2;
  memcpy(&local_a98,param_2 + 2,0x98);
  local_9fc = *(char *)((longlong)param_2 + 0xac);
  if (local_9fc == '\x01') {
    local_a00 = *(undefined4 *)(param_2 + 0x15);
  }
  local_9f0 = *(undefined4 *)(param_2 + 0x17);
  local_9f8 = param_2[0x16];
  FUN_144903306(local_9e8,param_2 + 0x18);
  local_128 = param_2[0x130];
  uStack_120 = param_2[0x131];
  local_118 = param_2[0x132];
  uStack_110 = param_2[0x133];
  bVar4 = *(byte *)(param_2 + 0x140);
  local_a8 = bVar4;
  if (bVar4 == 1) {
    puVar7 = param_2 + 0x134;
    puVar8 = auStack_108;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
  }
  local_78 = param_2[0x146];
  local_98 = *(undefined4 *)(param_2 + 0x142);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0xa14);
  uStack_90 = *(undefined4 *)(param_2 + 0x143);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0xa1c);
  local_88 = param_2[0x144];
  uStack_80 = param_2[0x145];
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    local_1460 = (undefined8 *)(local_1470 + 0x50);
    lVar9 = 0;
    local_1468 = param_3;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar9);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2), cVar3 == '\0')) {
        local_13a8 = DAT_14c8464f0;
        local_13b8 = DAT_14c8464e0;
        uStack_13b0 = DAT_14c8464e8;
        local_1390 = DAT_14c846508;
        local_13a0 = (undefined4)DAT_14c8464f8;
        uStack_139c = DAT_14c8464f8._4_4_;
        uStack_1398 = (undefined4)DAT_14c846500;
        uStack_1394 = DAT_14c846500._4_4_;
        local_1388 = 0;
        FUN_144894d4c(local_1378);
        local_ab8 = 0;
        local_ab4 = 0;
        (**(code **)(*plVar2 + 0x2b0))(plVar2,&local_aa8,&local_13b8);
        cVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
        if (cVar3 == '\0') {
          local_13c8[0] = 0;
          local_1458 = *(float *)((longlong)param_2 + 4) * *(float *)(param_2 + 1);
          if (local_1458 <= 0.0) {
            local_1458 = 0.0;
          }
          local_1454 = *(undefined1 *)(local_1470 + 0x40);
          puVar7 = local_1460;
          puVar8 = local_1448;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_14485c47a(local_13c8,*(undefined8 *)(local_1470 + 0x38));
          FUN_147991740(&local_1458,&local_13b8,&local_a98);
        }
        if (local_ac8 != 0) {
          FUN_1400020a8();
        }
        if (lStack_b50 != 0) {
          FUN_1400020a8();
        }
      }
      lVar9 = lVar9 + 8;
      param_3 = local_1468;
      bVar4 = local_a8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  param_3[2] = local_a88;
  *param_3 = local_a98;
  param_3[1] = uStack_a90;
  param_3[3] = local_a80;
  param_3[4] = uStack_a78;
  param_3[5] = local_a70;
  *(undefined4 *)(param_3 + 6) = local_a68;
  *(undefined1 *)((longlong)param_3 + 0x904) = 1;
  if ((bVar4 & 1) != 0) {
    local_a8 = 0;
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802e876 FUN_14802e876 body=835 status=ok
// SIG undefined FUN_14802e876(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14802e876(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_1498 [40];
  longlong local_1470;
  undefined8 *local_1468;
  undefined8 *local_1460;
  float local_1458;
  undefined1 local_1454;
  undefined8 local_1448 [16];
  undefined8 local_13c8;
  undefined8 local_13b8;
  undefined8 uStack_13b0;
  undefined8 local_13a8;
  undefined4 local_13a0;
  undefined4 uStack_139c;
  undefined4 uStack_1398;
  undefined4 uStack_1394;
  undefined8 local_1390;
  undefined4 local_1388;
  undefined1 local_1378 [2088];
  longlong lStack_b50;
  longlong local_ac8;
  undefined4 local_ab8;
  undefined1 local_ab4;
  undefined8 local_aa8;
  undefined4 local_aa0;
  undefined8 local_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined4 local_a68;
  undefined4 local_a00;
  char local_9fc;
  undefined8 local_9f8;
  undefined4 local_9f0;
  undefined1 local_9e8 [2088];
  longlong local_1c0;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 auStack_108 [12];
  byte local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x14802e88c;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1498;
  local_1470 = FUN_147991eba();
  local_aa0 = *(undefined4 *)(param_2 + 1);
  local_aa8 = *param_2;
  memcpy(&local_a98,param_2 + 2,0x98);
  local_9fc = *(char *)((longlong)param_2 + 0xac);
  if (local_9fc == '\x01') {
    local_a00 = *(undefined4 *)(param_2 + 0x15);
  }
  local_9f0 = *(undefined4 *)(param_2 + 0x17);
  local_9f8 = param_2[0x16];
  FUN_144903306(local_9e8,param_2 + 0x18);
  local_128 = param_2[0x130];
  uStack_120 = param_2[0x131];
  local_118 = param_2[0x132];
  uStack_110 = param_2[0x133];
  bVar4 = *(byte *)(param_2 + 0x140);
  local_a8 = bVar4;
  if (bVar4 == 1) {
    puVar8 = param_2 + 0x134;
    puVar9 = auStack_108;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  local_78 = param_2[0x146];
  local_98 = param_2[0x142];
  uStack_90 = param_2[0x143];
  local_88 = param_2[0x144];
  uStack_80 = param_2[0x145];
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x28);
    local_1460 = (undefined8 *)(local_1470 + 0x50);
    lVar7 = 0;
    local_1468 = param_3;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar7);
      if (plVar2 != (longlong *)0x0) {
        local_13a8 = DAT_14c8464f0;
        local_13b8 = DAT_14c8464e0;
        uStack_13b0 = DAT_14c8464e8;
        local_1390 = DAT_14c846508;
        local_13a0 = (undefined4)DAT_14c8464f8;
        uStack_139c = DAT_14c8464f8._4_4_;
        uStack_1398 = (undefined4)DAT_14c846500;
        uStack_1394 = DAT_14c846500._4_4_;
        local_1388 = 0;
        FUN_144894d4c(local_1378);
        local_ab8 = 0;
        local_ab4 = 0;
        FUN_147991b60(plVar2,param_2,&local_13b8);
        cVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
        if (cVar3 == '\0') {
          local_13c8 = 0;
          local_1458 = *(float *)((longlong)param_2 + 4) * *(float *)(param_2 + 1);
          if (local_1458 <= 0.0) {
            local_1458 = 0.0;
          }
          local_1454 = *(undefined1 *)(local_1470 + 0x40);
          puVar8 = local_1460;
          puVar9 = local_1448;
          for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
            *puVar9 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar9 = puVar9 + 1;
          }
          FUN_147991740(&local_1458,&local_13b8,&local_a98);
        }
        if (local_ac8 != 0) {
          FUN_1400020a8();
        }
        if (lStack_b50 != 0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 8;
      param_3 = local_1468;
      bVar4 = local_a8;
    } while ((longlong)iVar1 * 8 != lVar7);
  }
  param_3[2] = local_a88;
  *param_3 = local_a98;
  param_3[1] = uStack_a90;
  param_3[3] = local_a80;
  param_3[4] = uStack_a78;
  param_3[5] = local_a70;
  *(undefined4 *)(param_3 + 6) = local_a68;
  *(undefined1 *)((longlong)param_3 + 0x904) = 1;
  if ((bVar4 & 1) != 0) {
    local_a8 = 0;
  }
  if (local_138 != 0) {
    FUN_1400020a8();
  }
  if (local_1c0 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14802ebba FUN_14802ebba body=79 status=ok
// SIG undefined FUN_14802ebba(void)

ulonglong FUN_14802ebba(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar1 = *(int *)(param_1 + 0x30);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar6 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar6);
      if (plVar3 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar3 + 0x2c0))();
        if (cVar4 == '\0') {
          uVar5 = 0;
          break;
        }
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14802ec0a FUN_14802ec0a body=72 status=ok
// SIG undefined FUN_14802ec0a(void)

void FUN_14802ec0a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x2c8))(plVar3,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14802ec52 FUN_14802ec52 body=57 status=ok
// SIG undefined FUN_14802ec52(void)

void FUN_14802ec52(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar3) != 0) {
        FUN_147991b7c();
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14802ec90 FUN_14802ec90 body=148 status=ok
// SIG undefined FUN_14802ec90(void)

undefined8 FUN_14802ec90(undefined8 param_1)

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
  uVar1 = FUN_1459ec41e();
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



// FUNCTION 14802ed26 FUN_14802ed26 body=397 status=ok
// SIG undefined FUN_14802ed26(void)

void FUN_14802ed26(longlong param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_a98 [32];
  undefined1 local_a78 [2280];
  longlong local_190;
  longlong local_108;
  char local_78;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a98;
  fVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(param_1 + 0x1b0);
  *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(param_1 + 0x1a0);
  *(undefined8 *)(param_1 + 0x170) = *(undefined8 *)(param_1 + 0x1a8);
  *(undefined8 *)(param_1 + 0x180) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1c0);
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x1c8);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1d0);
  fVar2 = *(float *)(param_1 + 0x160);
  *(uint *)(param_1 + 0x15c) =
       ~-(uint)(0.0 < fVar2) & 0x7f7fffff | -(uint)(0.0 < fVar2) & (uint)fVar2;
  if (0.0 < *(float *)(param_1 + 0xdc)) {
    *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) | 1;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  fVar3 = *(float *)(param_1 + 0xe0);
  if (0.0 < fVar3) {
    *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) & 0xfd;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
  }
  if (((0.0 < fVar2) && (0.0 < fVar3)) && (fVar2 - fVar3 < fVar1)) {
    *(byte *)(param_1 + 0x1e8) = *(byte *)(param_1 + 0x1e8) | 2;
    *(float *)(param_1 + 0x1e4) = fVar3 - (fVar2 - fVar1);
  }
  FUN_147991570(param_2,local_a78);
  FUN_1438e573c(param_1,local_a78,param_3);
  if (local_78 == '\x01') {
    local_78 = '\0';
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  if (local_190 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802eeb8 FUN_14802eeb8 body=160 status=ok
// SIG undefined FUN_14802eeb8(void)

void FUN_14802eeb8(undefined8 param_1,float *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_14802ef58();
  if (*(longlong **)(lVar2 + 0x150) == (longlong *)0x0) {
    fVar5 = *(float *)(lVar2 + 0xd8);
  }
  else {
    lVar3 = (**(code **)(**(longlong **)(lVar2 + 0x150) + 0x2e8))();
    if (lVar3 == 0) {
      fVar4 = 0.0;
    }
    else {
      lVar1 = *(longlong *)(lVar3 + 0x118);
      fVar4 = (float)(((double)((lVar1 >> 0x20) *
                               ((longlong)*(int *)(lVar3 + 0x114) -
                               (longlong)*(int *)(lVar3 + 0x10c))) +
                      (double)((ulonglong)(double)(int)((ulonglong)lVar1 >> 0x20) &
                              0x8000000000000000)) / (double)(int)lVar1);
    }
    fVar5 = *(float *)(lVar2 + 0xd8);
    if (*(float *)(lVar2 + 0xd8) <= fVar4) {
      fVar5 = fVar4;
    }
  }
  *param_2 = fVar5;
  *(undefined1 *)(param_2 + 1) = 2;
  return;
}



// FUNCTION 14802ef58 FUN_14802ef58 body=63 status=ok
// SIG undefined FUN_14802ef58(void)

longlong FUN_14802ef58(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_147991eba();
  if (lVar1 != 0) {
    lVar2 = FUN_145899032();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 14802ef98 FUN_14802ef98 body=28 status=ok
// SIG undefined FUN_14802ef98(void)

void FUN_14802ef98(undefined8 param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14802ef58();
  FUN_1438e5240(uVar1,*param_2);
  return;
}



// FUNCTION 14802efb4 FUN_14802efb4 body=29 status=ok
// SIG undefined FUN_14802efb4(void)

void FUN_14802efb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14802ef58();
  FUN_1438e52ee(uVar1,param_2);
  return;
}



// FUNCTION 14802efd2 FUN_14802efd2 body=37 status=ok
// SIG undefined FUN_14802efd2(void)

void FUN_14802efd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14802ef58();
  FUN_1438e573c(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14802eff8 FUN_14802eff8 body=37 status=ok
// SIG undefined FUN_14802eff8(void)

void FUN_14802eff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14802ef58();
  FUN_14802ed26(uVar1,param_2,param_3);
  return;
}



// FUNCTION 14802f01e FUN_14802f01e body=71 status=ok
// SIG undefined FUN_14802f01e(void)

undefined8 FUN_14802f01e(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_14802ef58();
  if (0.0 < *(float *)(lVar2 + 0x15c)) {
    return 0;
  }
  if ((*(longlong **)(lVar2 + 0x1d8) != (longlong *)0x0) &&
     (cVar1 = (**(code **)(**(longlong **)(lVar2 + 0x1d8) + 0x2c0))(), cVar1 == '\0')) {
    return 0;
  }
  uVar3 = FUN_14802bdae(lVar2);
  return uVar3;
}



// FUNCTION 14802f066 FUN_14802f066 body=36 status=ok
// SIG undefined FUN_14802f066(void)

void FUN_14802f066(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14802ef58();
  if (*(longlong *)(lVar1 + 0x1d8) != 0) {
    FUN_147991b7c();
    return;
  }
  return;
}



// FUNCTION 14802f08e FUN_14802f08e body=494 status=ok
// SIG undefined FUN_14802f08e(void)

void FUN_14802f08e(longlong param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_1479913ac(param_1 + 0x34,param_1,param_2);
  if (*param_2 == '\0') {
    uVar1 = rand();
    iVar2 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar2) {
      iVar2 = 0xfe;
    }
    uVar1 = rand();
    iVar3 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar3) {
      iVar3 = 0xfe;
    }
    uVar1 = rand();
    iVar4 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar4) {
      iVar4 = 0xfe;
    }
    *(float *)(param_1 + 0xa0) = (float)iVar4;
    *(float *)(param_1 + 0xa4) = (float)iVar3;
    *(float *)(param_1 + 0xa8) = (float)iVar2;
    uVar1 = rand();
    iVar2 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar2) {
      iVar2 = 0xfe;
    }
    uVar1 = rand();
    iVar3 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar3) {
      iVar3 = 0xfe;
    }
    uVar1 = rand();
    iVar4 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    if (0xfd < iVar4) {
      iVar4 = 0xfe;
    }
    *(float *)(param_1 + 0xb8) = (float)iVar4;
    *(float *)(param_1 + 0xbc) = (float)iVar3;
    *(float *)(param_1 + 0xc0) = (float)iVar2;
    uVar1 = rand();
    iVar3 = (int)(((float)(uVar1 & 0x7fff) / 32767.0) * 255.0);
    iVar2 = 0xfe;
    if (iVar3 < 0xfe) {
      iVar2 = iVar3;
    }
    *(float *)(param_1 + 0xd0) = (float)iVar2;
    *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_1 + 0xa0);
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0xb8);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc0);
    *(float *)(param_1 + 0xd4) = (float)iVar2;
  }
  return;
}



// FUNCTION 14802f28c FUN_14802f28c body=59 status=ok
// SIG undefined FUN_14802f28c(void)

void FUN_14802f28c(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_14802f2c8(param_1,*param_2);
  uVar1 = FUN_14799143a(param_1 + 0x34,*param_2);
  FUN_1479916aa(param_3,uVar1);
  return;
}



// FUNCTION 14802f2c8 FUN_14802f2c8 body=613 status=ok
// SIG undefined FUN_14802f2c8(void)

void FUN_14802f2c8(longlong param_1,float param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x60);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 0xac) =
         *(float *)(param_1 + 100) * param_2 * *(float *)(param_1 + 0x5c) +
         *(float *)(param_1 + 0xac);
    fVar2 = (float)FUN_140073f12();
    dVar3 = (double)(fVar4 * fVar2);
  }
  *param_3 = dVar3;
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x68);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 0xb0) =
         *(float *)(param_1 + 0x6c) * param_2 * *(float *)(param_1 + 0x5c) +
         *(float *)(param_1 + 0xb0);
    fVar2 = (float)FUN_140073f12();
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[1] = dVar1;
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x70);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 0xb4) =
         *(float *)(param_1 + 0x74) * param_2 * *(float *)(param_1 + 0x5c) +
         *(float *)(param_1 + 0xb4);
    fVar2 = (float)FUN_140073f12();
    dVar3 = (double)(fVar4 * fVar2);
  }
  param_3[2] = dVar3;
  fVar4 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x80);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 0xc4) =
         *(float *)(param_1 + 0x84) * param_2 * *(float *)(param_1 + 0x7c) +
         *(float *)(param_1 + 0xc4);
    fVar2 = (float)FUN_140073f12();
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[3] = dVar1;
  fVar4 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x88);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 200) =
         *(float *)(param_1 + 0x8c) * param_2 * *(float *)(param_1 + 0x7c) +
         *(float *)(param_1 + 200);
    fVar2 = (float)FUN_140073f12();
    dVar3 = (double)(fVar4 * fVar2);
  }
  param_3[4] = dVar3;
  fVar4 = *(float *)(param_1 + 0x78) * *(float *)(param_1 + 0x90);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    *(float *)(param_1 + 0xcc) =
         *(float *)(param_1 + 0x94) * param_2 * *(float *)(param_1 + 0x7c) +
         *(float *)(param_1 + 0xcc);
    fVar2 = (float)FUN_140073f12();
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[5] = dVar1;
  fVar4 = *(float *)(param_1 + 0x98);
  fVar2 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = param_2 * *(float *)(param_1 + 0x9c) + *(float *)(param_1 + 0xd4);
    *(float *)(param_1 + 0xd4) = fVar2;
    fVar2 = (float)FUN_140073f12(fVar2);
    fVar2 = fVar4 * fVar2;
  }
  *(float *)(param_3 + 6) = fVar2;
  return;
}



// FUNCTION 14802f52e FUN_14802f52e body=127 status=ok
// SIG undefined FUN_14802f52e(void)

void FUN_14802f52e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xac) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xc4) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0xd0);
  FUN_14802f2c8(*(undefined4 *)(param_1 + 0xd0),*param_2);
  uVar1 = FUN_14799151e(param_1 + 0x34,*param_2);
  FUN_1479916aa(param_3,uVar1);
  return;
}



// FUNCTION 14802f5f8 FUN_14802f5f8 body=81 status=ok
// SIG undefined FUN_14802f5f8(void)

void FUN_14802f5f8(longlong param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145833896(&local_38);
  *(undefined4 *)(param_1 + 0x34) = local_38;
  *(undefined4 *)(param_1 + 0x38) = uStack_34;
  *(undefined4 *)(param_1 + 0x3c) = uStack_30;
  *(undefined4 *)(param_1 + 0x40) = uStack_2c;
  *(undefined4 *)(param_1 + 0x44) = local_28;
  *(undefined4 *)(param_1 + 0x48) = uStack_24;
  *(undefined4 *)(param_1 + 0x4c) = uStack_20;
  *(undefined4 *)(param_1 + 0x50) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14802f64e FUN_14802f64e body=544 status=ok
// SIG undefined FUN_14802f64e(void)

void FUN_14802f64e(longlong param_1,char *param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  
  FUN_1479913ac(param_1 + 0x34,param_1,param_2);
  if (*param_2 == '\0') {
    fVar3 = 0.0;
    fVar2 = 0.0;
    if (*(char *)(param_1 + 0x68) == '\0') {
      uVar1 = rand();
      fVar2 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xbc) = fVar2;
    sinf(fVar2);
    if (*(char *)(param_1 + 0x74) == '\0') {
      uVar1 = rand();
      fVar3 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xc0) = fVar3;
    sinf(fVar3);
    fVar3 = 0.0;
    fVar2 = 0.0;
    if (*(char *)(param_1 + 0x80) == '\0') {
      uVar1 = rand();
      fVar2 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xc4) = fVar2;
    sinf(fVar2);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xbc);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
    if (*(char *)(param_1 + 0x94) == '\0') {
      uVar1 = rand();
      fVar3 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xd4) = fVar3;
    sinf(fVar3);
    fVar3 = 0.0;
    fVar2 = 0.0;
    if (*(char *)(param_1 + 0xa0) == '\0') {
      uVar1 = rand();
      fVar2 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xd8) = fVar2;
    sinf(fVar2);
    if (*(char *)(param_1 + 0xac) == '\0') {
      uVar1 = rand();
      fVar3 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xdc) = fVar3;
    sinf(fVar3);
    *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd4);
    *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xdc);
    fVar2 = 0.0;
    if (*(char *)(param_1 + 0xb8) == '\0') {
      uVar1 = rand();
      fVar2 = ((float)(uVar1 & 0x7fff) / 32767.0) * 6.2831855;
    }
    *(float *)(param_1 + 0xec) = fVar2;
    sinf(fVar2);
    *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xec);
  }
  return;
}



// FUNCTION 14802f86e FUN_14802f86e body=59 status=ok
// SIG undefined FUN_14802f86e(void)

void FUN_14802f86e(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  FUN_14802f8aa(param_1,*param_2);
  uVar1 = FUN_14799143a(param_1 + 0x34,*param_2);
  FUN_1479916aa(param_3,uVar1);
  return;
}



// FUNCTION 14802f8aa FUN_14802f8aa body=694 status=ok
// SIG undefined FUN_14802f8aa(void)

void FUN_14802f8aa(longlong param_1,float param_2,double *param_3)

{
  double dVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x60);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 100) * param_2 * *(float *)(param_1 + 0x5c) * 6.2831855 +
            *(float *)(param_1 + 200);
    *(float *)(param_1 + 200) = fVar2;
    fVar2 = sinf(fVar2);
    dVar3 = (double)(fVar4 * fVar2);
  }
  *param_3 = dVar3;
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x6c);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 0x70) * param_2 * *(float *)(param_1 + 0x5c) * 6.2831855 +
            *(float *)(param_1 + 0xcc);
    *(float *)(param_1 + 0xcc) = fVar2;
    fVar2 = sinf(fVar2);
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[1] = dVar1;
  fVar4 = *(float *)(param_1 + 0x58) * *(float *)(param_1 + 0x78);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 0x7c) * param_2 * *(float *)(param_1 + 0x5c) * 6.2831855 +
            *(float *)(param_1 + 0xd0);
    *(float *)(param_1 + 0xd0) = fVar2;
    fVar2 = sinf(fVar2);
    dVar3 = (double)(fVar4 * fVar2);
  }
  param_3[2] = dVar3;
  fVar4 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x8c);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 0x90) * param_2 * *(float *)(param_1 + 0x88) * 6.2831855 +
            *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0xe0) = fVar2;
    fVar2 = sinf(fVar2);
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[3] = dVar1;
  fVar4 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0x98);
  dVar1 = 0.0;
  dVar3 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 0x9c) * param_2 * *(float *)(param_1 + 0x88) * 6.2831855 +
            *(float *)(param_1 + 0xe4);
    *(float *)(param_1 + 0xe4) = fVar2;
    fVar2 = sinf(fVar2);
    dVar3 = (double)(fVar4 * fVar2);
  }
  param_3[4] = dVar3;
  fVar4 = *(float *)(param_1 + 0x84) * *(float *)(param_1 + 0xa4);
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = *(float *)(param_1 + 0xa8) * param_2 * *(float *)(param_1 + 0x88) * 6.2831855 +
            *(float *)(param_1 + 0xe8);
    *(float *)(param_1 + 0xe8) = fVar2;
    fVar2 = sinf(fVar2);
    dVar1 = (double)(fVar4 * fVar2);
  }
  param_3[5] = dVar1;
  fVar4 = *(float *)(param_1 + 0xb0);
  fVar2 = 0.0;
  if ((fVar4 != 0.0) || (NAN(fVar4))) {
    fVar2 = param_2 * *(float *)(param_1 + 0xb4) * 6.2831855 + *(float *)(param_1 + 0xf0);
    *(float *)(param_1 + 0xf0) = fVar2;
    fVar2 = sinf(fVar2);
    fVar2 = fVar4 * fVar2;
  }
  *(float *)(param_3 + 6) = fVar2;
  return;
}



// FUNCTION 14802fb60 FUN_14802fb60 body=127 status=ok
// SIG undefined FUN_14802fb60(void)

void FUN_14802fb60(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_1 + 0xbc);
  *(undefined8 *)(param_1 + 0xe0) = *(undefined8 *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_1 + 0xec);
  FUN_14802f8aa(*(undefined4 *)(param_1 + 0xec),*param_2);
  uVar1 = FUN_14799151e(param_1 + 0x34,*param_2);
  FUN_1479916aa(param_3,uVar1);
  return;
}



// FUNCTION 14802fbe8 FUN_14802fbe8 body=73 status=ok
// SIG undefined FUN_14802fbe8(void)

void FUN_14802fbe8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  param_3[2] = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *param_3 = *(undefined8 *)(param_1 + 0x58);
  param_3[1] = uVar3;
  uVar4 = *(undefined4 *)(param_1 + 0x74);
  uVar1 = *(undefined4 *)(param_1 + 0x78);
  uVar2 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((longlong)param_3 + 0x1c) = uVar4;
  *(undefined4 *)(param_3 + 4) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x24) = uVar2;
  param_3[5] = *(undefined8 *)(param_1 + 0x80);
  uVar4 = FUN_14799143a(param_1 + 0x34,*param_2);
  FUN_1479916aa(param_3,uVar4);
  return;
}



// FUNCTION 14802fcb2 FUN_14802fcb2 body=59 status=ok
// SIG undefined FUN_14802fcb2(void)

undefined8 FUN_14802fcb2(longlong *param_1)

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



// FUNCTION 14802fdd0 FUN_14802fdd0 body=59 status=ok
// SIG undefined FUN_14802fdd0(void)

undefined8 FUN_14802fdd0(longlong *param_1)

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



// FUNCTION 14802feee FUN_14802feee body=59 status=ok
// SIG undefined FUN_14802feee(void)

undefined8 FUN_14802feee(longlong *param_1)

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



// FUNCTION 14803001e FUN_14803001e body=39 status=ok
// SIG undefined FUN_14803001e(void)

undefined8 FUN_14803001e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
      for (lVar2 = 9; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14803006e FUN_14803006e body=59 status=ok
// SIG undefined FUN_14803006e(void)

undefined8 FUN_14803006e(longlong *param_1)

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



// FUNCTION 14803017c FUN_14803017c body=75 status=ok
// SIG undefined FUN_14803017c(void)

void FUN_14803017c(longlong *param_1,uint *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  FUN_144a78877(*param_2 & 0xffff,*param_2 >> 0x10);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148030302 FUN_148030302 body=54 status=ok
// SIG undefined FUN_148030302(void)

undefined1 FUN_148030302(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_148030400(param_2,param_3);
    param_3 = param_3 + 0x78;
    param_2 = param_2 + 0x78;
  }
  return 1;
}



// FUNCTION 148030360 FUN_148030360 body=59 status=ok
// SIG undefined FUN_148030360(void)

undefined8 FUN_148030360(longlong *param_1)

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



// FUNCTION 148030400 FUN_148030400 body=173 status=ok
// SIG undefined FUN_148030400(void)

longlong * FUN_148030400(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
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
  lVar2 = 9;
  plVar3 = param_2;
  plVar4 = param_1;
  while( true ) {
    plVar4 = plVar4 + 1;
    plVar3 = plVar3 + 1;
    if (lVar2 == 0) break;
    lVar2 = lVar2 + -1;
    *plVar4 = *plVar3;
  }
  *(int *)(param_1 + 10) = (int)param_2[10];
  lVar2 = param_2[0xb];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xb];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[0xb] = lVar2;
  lVar2 = param_2[0xc];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
    }
  }
  param_1[0xc] = lVar2;
  param_1[0xd] = param_2[0xd];
  *(short *)(param_1 + 0xe) = (short)param_2[0xe];
  return param_1;
}



// FUNCTION 148030526 FUN_148030526 body=59 status=ok
// SIG undefined FUN_148030526(void)

undefined8 FUN_148030526(longlong *param_1)

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



// FUNCTION 148030650 FUN_148030650 body=59 status=ok
// SIG undefined FUN_148030650(void)

undefined8 FUN_148030650(longlong *param_1)

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



// FUNCTION 1480306f2 FUN_1480306f2 body=143 status=ok
// SIG undefined FUN_1480306f2(void)

void FUN_1480306f2(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x78,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x78)) {
      uVar5 = uVar4 / 0x78 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x78,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 148030782 FUN_148030782 body=36 status=ok
// SIG undefined FUN_148030782(void)

undefined8 FUN_148030782(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1480307c2 FUN_1480307c2 body=93 status=ok
// SIG undefined FUN_1480307c2(void)

void FUN_1480307c2(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14ad3f3f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148030820 FUN_148030820 body=123 status=ok
// SIG undefined FUN_148030820(void)

void FUN_148030820(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14ad3f3f0;
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



// FUNCTION 14803089c FUN_14803089c body=21 status=ok
// SIG undefined FUN_14803089c(void)

undefined8 FUN_14803089c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1480308b2 FUN_1480308b2 body=254 status=ok
// SIG undefined FUN_1480308b2(void)

void FUN_1480308b2(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &LAB_148035f7a;
  FUN_144a29c16();
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480309b2 FUN_1480309b2 body=155 status=ok
// SIG undefined FUN_1480309b2(void)

void FUN_1480309b2(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_1480369bc;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_14803693c;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030a5c FUN_148030a5c body=61 status=ok
// SIG undefined FUN_148030a5c(void)

void FUN_148030a5c(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148040100();
    return;
  case 1:
    FUN_148040160();
    return;
  case 2:
    FUN_1480401c0();
    return;
  case 3:
    FUN_148040220();
    return;
  default:
    return;
  }
}



// FUNCTION 148030a9a FUN_148030a9a body=155 status=ok
// SIG undefined FUN_148030a9a(void)

void FUN_148030a9a(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_148040560;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14804050c;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030b44 FUN_148030b44 body=155 status=ok
// SIG undefined FUN_148030b44(void)

void FUN_148030b44(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_148040630;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_1480405da;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030bee FUN_148030bee body=155 status=ok
// SIG undefined FUN_148030bee(void)

void FUN_148030bee(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_148040706;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_1480406aa;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030c98 FUN_148030c98 body=155 status=ok
// SIG undefined FUN_148030c98(void)

void FUN_148030c98(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_148036704;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_148036698;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030d42 FUN_148030d42 body=155 status=ok
// SIG undefined FUN_148030d42(void)

void FUN_148030d42(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_148036856;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_14803678a;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030dec FUN_148030dec body=155 status=ok
// SIG undefined FUN_148030dec(void)

void FUN_148030dec(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_1480407f2;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_148040786;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030e96 FUN_148030e96 body=155 status=ok
// SIG undefined FUN_148030e96(void)

void FUN_148030e96(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_148036b38;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_148036a56;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030f40 FUN_148030f40 body=155 status=ok
// SIG undefined FUN_148030f40(void)

void FUN_148030f40(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_148036f8a;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_148036e14;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148030fea FUN_148030fea body=155 status=ok
// SIG undefined FUN_148030fea(void)

void FUN_148030fea(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = FUN_148037264;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = FUN_148037196;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148031094 FUN_148031094 body=61 status=ok
// SIG undefined FUN_148031094(void)

void FUN_148031094(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148040878();
    return;
  case 1:
    FUN_1480408d8();
    return;
  case 2:
    FUN_148040938();
    return;
  case 3:
    FUN_148040998();
    return;
  default:
    return;
  }
}



// FUNCTION 1480310d2 FUN_1480310d2 body=61 status=ok
// SIG undefined FUN_1480310d2(void)

void FUN_1480310d2(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148040cc0();
    return;
  case 1:
    FUN_148040d20();
    return;
  case 2:
    FUN_148040d80();
    return;
  case 3:
    FUN_148040de0();
    return;
  default:
    return;
  }
}



// FUNCTION 148031110 FUN_148031110 body=61 status=ok
// SIG undefined FUN_148031110(void)

void FUN_148031110(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148041160();
    return;
  case 1:
    FUN_1480411c0();
    return;
  case 2:
    FUN_148041220();
    return;
  case 3:
    FUN_148041280();
    return;
  default:
    return;
  }
}



// FUNCTION 14803114e FUN_14803114e body=155 status=ok
// SIG undefined FUN_14803114e(void)

void FUN_14803114e(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803c706;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803c6b6;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1480311f8 FUN_1480311f8 body=155 status=ok
// SIG undefined FUN_1480311f8(void)

void FUN_1480311f8(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803c7de;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803c780;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1480312a2 FUN_1480312a2 body=155 status=ok
// SIG undefined FUN_1480312a2(void)

void FUN_1480312a2(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803c8fa;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803c85e;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 14803134c FUN_14803134c body=155 status=ok
// SIG undefined FUN_14803134c(void)

void FUN_14803134c(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803d216;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803d1c2;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1480313f6 FUN_1480313f6 body=61 status=ok
// SIG undefined FUN_1480313f6(void)

void FUN_1480313f6(longlong *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(*param_1 + 0x10);
  *(undefined1 **)(*param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148042270();
    return;
  case 1:
    FUN_1480422d0();
    return;
  case 2:
    FUN_148042330();
    return;
  case 3:
    FUN_148042390();
    return;
  default:
    return;
  }
}



// FUNCTION 148031434 FUN_148031434 body=155 status=ok
// SIG undefined FUN_148031434(void)

void FUN_148031434(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803dcb8;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803dc64;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1480314de FUN_1480314de body=155 status=ok
// SIG undefined FUN_1480314de(void)

void FUN_1480314de(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803dd7e;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803dd34;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148031588 FUN_148031588 body=155 status=ok
// SIG undefined FUN_148031588(void)

void FUN_148031588(longlong *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 auStack_38 [32];
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  pcVar2 = *(char **)(*param_1 + 0x10);
  *(char **)(*param_1 + 0x10) = pcVar2 + 1;
  cVar1 = *pcVar2;
  if (cVar1 == '\x01') {
    local_18 = &LAB_14803de36;
    FUN_144a29c16(param_1);
    FUN_14074ef86(param_1);
  }
  else {
    if (cVar1 != '\0') {
      if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    local_18 = &LAB_14803ddec;
    FUN_144a29c16(param_1);
    FUN_1457655f4(param_1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 148031632 FUN_148031632 body=254 status=ok
// SIG undefined FUN_148031632(void)

void FUN_148031632(longlong *param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined2 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = FUN_1480363ca;
  FUN_144a29c16();
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  puVar3 = *(undefined2 **)(*param_1 + 0x10);
  uVar1 = *puVar3;
  *(undefined2 **)(*param_1 + 0x10) = puVar3 + 1;
  plVar4 = (longlong *)param_1[1];
  iVar2 = (int)plVar4[1];
  *(int *)(plVar4 + 1) = iVar2 + 2;
  if ((uint)(*(int *)((longlong)plVar4 + 0xc) - iVar2) < 2) {
    FUN_1447403be(plVar4,iVar2);
  }
  *(undefined2 *)(*plVar4 + (longlong)iVar2) = uVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148031731 FUN_148031731 body=124 status=ok
// SIG undefined FUN_148031731(void)

void FUN_148031731(undefined4 *param_1,uint param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [16];
  
  auVar5 = pshuflw(ZEXT416(param_2),ZEXT416(param_2),0);
  uVar4 = auVar5._0_4_;
  if (param_3 < 9) {
    uVar3 = (undefined2)param_2;
    switch(param_3) {
    case 3:
      *(undefined2 *)(param_1 + 1) = uVar3;
    case 2:
      *(undefined2 *)((longlong)param_1 + 2) = uVar3;
    case 1:
      *(undefined2 *)param_1 = uVar3;
      return;
    case 4:
      *param_1 = uVar4;
      param_1[1] = uVar4;
      return;
    case 5:
      *param_1 = uVar4;
      param_1[1] = uVar4;
      *(undefined4 *)((longlong)param_1 + 2) = uVar4;
      *(undefined4 *)((longlong)param_1 + 6) = uVar4;
      return;
    case 6:
      *param_1 = uVar4;
      param_1[1] = uVar4;
      param_1[1] = uVar4;
      param_1[2] = uVar4;
      return;
    case 7:
      *param_1 = uVar4;
      param_1[1] = uVar4;
      *(undefined4 *)((longlong)param_1 + 6) = uVar4;
      *(undefined4 *)((longlong)param_1 + 10) = uVar4;
      return;
    case 8:
      *param_1 = uVar4;
      param_1[1] = uVar4;
      param_1[2] = uVar4;
      param_1[3] = uVar4;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)((longlong)param_1 + param_3 * 2 + -0x10);
    puVar2 = param_1;
    do {
      *puVar2 = uVar4;
      puVar2[1] = uVar4;
      puVar2[2] = uVar4;
      puVar2[3] = uVar4;
      puVar2 = puVar2 + 4;
    } while (puVar2 < puVar1);
    *puVar1 = uVar4;
    *(undefined4 *)((longlong)param_1 + param_3 * 2 + -0xc) = uVar4;
    *(undefined4 *)((longlong)param_1 + param_3 * 2 + -8) = uVar4;
    *(undefined4 *)((longlong)param_1 + param_3 * 2 + -4) = uVar4;
  }
  return;
}



// FUNCTION 1480317ad FUN_1480317ad body=366 status=ok
// SIG undefined FUN_1480317ad(void)

longlong FUN_1480317ad(ushort *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 local_e0 [32];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_78;
  lVar5 = *(longlong *)(*(longlong *)(param_3 + 0x10) + 0x18);
  lVar4 = (ulonglong)*param_1 * 0x10;
  plVar1 = (longlong *)(lVar5 + lVar4);
  iVar3 = *(int *)(lVar5 + 0xc + lVar4);
  piVar2 = (int *)(lVar5 + 8 + lVar4);
  uVar10 = iVar3 + *piVar2;
  uVar11 = (ulonglong)uVar10;
  if (uVar10 != 0 && SCARRY4(iVar3,*piVar2) == (int)uVar10 < 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((ulonglong)param_1[lVar5 + 1] == 0xffff) {
        uVar7 = (ulonglong)((int)uVar6 + 1);
        *(ulonglong *)(*(longlong *)(param_2 + 0x20) + lVar5 * 8) =
             uVar6 * 0x10 + *(longlong *)(param_2 + 0x30);
        bVar9 = 0;
      }
      else {
        *(undefined8 *)(*(longlong *)(param_2 + 0x20) + lVar5 * 8) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x50) + (ulonglong)param_1[lVar5 + 1] * 8);
        bVar9 = *(byte *)(*(longlong *)(param_2 + 0x58) + (ulonglong)param_1[lVar5 + 1]) >> 4;
        uVar7 = uVar6;
      }
      *(byte *)(*(longlong *)(param_2 + 0x28) + lVar5) = bVar9;
      lVar5 = lVar5 + 1;
      uVar11 = (longlong)*(int *)((longlong)plVar1 + 0xc) + (longlong)(int)plVar1[1];
      uVar6 = uVar7;
    } while (lVar5 < (longlong)uVar11);
  }
  local_c0 = *(undefined4 *)(param_2 + 0x20);
  uStack_bc = *(undefined4 *)(param_2 + 0x24);
  uStack_b8 = *(undefined4 *)(param_2 + 0x28);
  uStack_b4 = *(undefined4 *)(param_2 + 0x2c);
  local_a8 = *(undefined8 *)(param_2 + 0x44);
  local_98 = *(undefined8 *)(param_3 + 0x38);
  local_90 = *(undefined4 *)(param_3 + 0x40);
  local_88 = param_2 + 0xd0;
  local_80 = param_2 + 0x38;
  local_78 = *(undefined4 *)(param_3 + 0x18);
  uStack_74 = *(undefined4 *)(param_3 + 0x1c);
  uStack_70 = *(undefined4 *)(param_3 + 0x20);
  uStack_6c = *(undefined4 *)(param_3 + 0x24);
  local_e0[0] = 1;
  plVar8 = (longlong *)0x0;
  local_b0 = 0;
  local_ac = (undefined4)uVar11;
  local_9c = 0;
  local_60 = 0;
  if (*(int *)((undefined8 *)*plVar1 + 1) != 0) {
    plVar8 = *(longlong **)*plVar1;
  }
  local_a0 = param_4;
  (**(code **)(*plVar8 + 0x58))(local_c0,local_e0);
  if ((local_38 ^ (ulonglong)&local_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (longlong)param_1 +
         ((longlong)*(int *)((longlong)plVar1 + 0xc) + (longlong)(int)plVar1[1]) * 2 + 3;
}



// FUNCTION 14803191c FUN_14803191c body=2435 status=ok
// SIG undefined FUN_14803191c(void)

void FUN_14803191c(int *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint uVar7;
  LARGE_INTEGER LVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong *puVar12;
  byte bVar13;
  uint uVar14;
  float fVar15;
  void *_Dst;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined1 auStack_98 [32];
  ulonglong local_78;
  undefined8 local_70;
  ulonglong local_68;
  ulonglong local_60;
  LARGE_INTEGER local_58;
  LARGE_INTEGER LStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar16 = *(longlong *)(param_1 + 4);
  if (param_1[0xc] == *(int *)(lVar16 + 0x80)) {
    if (param_1[0xc] != 0) {
      lVar10 = 0;
      uVar14 = 0;
      do {
        *(undefined8 *)(*(longlong *)(lVar16 + 0x18) + lVar10) =
             *(undefined8 *)(*(longlong *)(param_1 + 10) + (longlong)(int)uVar14 * 8);
        uVar14 = uVar14 + 1;
        lVar16 = *(longlong *)(param_1 + 4);
        lVar10 = lVar10 + 0x10;
      } while (uVar14 < *(uint *)(lVar16 + 0x80));
    }
    if (*(int *)(lVar16 + 0xa0) != 0) {
      uVar11 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar16 + 0x20) + uVar11 * 4) = 0;
        uVar11 = uVar11 + 1;
        lVar16 = *(longlong *)(param_1 + 4);
      } while (uVar11 < *(uint *)(lVar16 + 0xa0));
    }
    if ((*(byte *)(lVar16 + 0x7c) & 0x10) == 0) {
      if (*(int *)(lVar16 + 0x8c) != 0) {
        uVar11 = 0;
        do {
          if (0 < (longlong)param_1[0x18]) {
            uVar2 = *(ushort *)(*(longlong *)(lVar16 + 0x28) + uVar11 * 2);
            lVar10 = 0;
            uVar14 = 0;
            do {
              uVar18 = (*(uint *)(*(longlong *)(param_1 + 0x16) + lVar10 * 4) >> 2) + uVar14;
              if (uVar2 < uVar18) {
                *(char *)(*(longlong *)(lVar16 + 0x58) + uVar11) = (char)lVar10;
                *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x60) + uVar11 * 2) =
                     uVar2 - (short)uVar14;
                lVar16 = *(longlong *)(param_1 + 4);
                break;
              }
              lVar10 = lVar10 + 1;
              uVar14 = uVar18;
            } while (param_1[0x18] != lVar10);
          }
          uVar11 = uVar11 + 1;
        } while (uVar11 < *(uint *)(lVar16 + 0x8c));
      }
      uVar14 = *(uint *)(lVar16 + 0x94);
      if (uVar14 != 0) {
        uVar18 = param_1[8];
        if (uVar14 < (uint)param_1[8]) {
          uVar18 = uVar14;
        }
        if (0 < (int)uVar18) {
          uVar11 = 0;
          lVar16 = 0;
          do {
            uVar14 = (int)uVar11 * 8;
            lVar10 = 0;
            do {
              lVar17 = lVar10 + (int)uVar14;
              uVar2 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + 2 + lVar17 * 2)
              ;
              uVar3 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + lVar17 * 2);
              if (uVar3 < uVar2) {
                uVar5 = *(undefined4 *)
                         (*(longlong *)(param_1 + 6) + uVar11 * 0xa0 + 0x20 + lVar10 * 4);
                lVar16 = (longlong)(int)lVar16;
                lVar25 = 0;
                do {
                  uVar4 = *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + lVar17 * 2)
                  ;
                  *(char *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x68) + lVar16) =
                       (char)uVar11;
                  *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x70) + lVar16 * 2) =
                       *(short *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x30) +
                                 ((ulonglong)uVar4 + lVar25) * 2) + (short)uVar5 |
                       (ushort)(((uint)lVar10 & 2) << 0xd);
                  lVar16 = lVar16 + 1;
                  lVar25 = lVar25 + 1;
                } while ((uint)uVar2 - (uint)uVar3 != (int)lVar25);
              }
              lVar10 = lVar10 + 1;
            } while (lVar10 != 3);
            if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) +
                          (longlong)(int)(uVar14 | 7) * 2) != 0) {
              uVar21 = 0;
              do {
                uVar23 = uVar21 | (longlong)(int)uVar14;
                uVar2 = *(ushort *)
                         (*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + 8 + uVar23 * 2);
                uVar3 = *(ushort *)
                         (*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + 6 + uVar23 * 2);
                if (uVar3 < uVar2) {
                  uVar5 = *(undefined4 *)
                           (*(longlong *)(param_1 + 6) + uVar11 * 0xa0 + 0x20 + uVar21 * 4);
                  lVar16 = (longlong)(int)lVar16;
                  lVar10 = 0;
                  do {
                    uVar4 = *(ushort *)
                             (*(longlong *)(*(longlong *)(param_1 + 4) + 0x38) + 6 + uVar23 * 2);
                    *(char *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x68) + lVar16) =
                         (char)uVar11;
                    *(ushort *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x70) + lVar16 * 2) =
                         *(short *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x30) +
                                   ((ulonglong)uVar4 + lVar10) * 2) + (short)uVar5 |
                         (ushort)(((uint)uVar21 & 2) << 0xd) | 0x8000;
                    lVar16 = lVar16 + 1;
                    lVar10 = lVar10 + 1;
                  } while ((uint)uVar2 - (uint)uVar3 != (int)lVar10);
                }
                uVar21 = uVar21 + 1;
              } while (uVar21 != 3);
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar18);
          lVar16 = *(longlong *)(param_1 + 4);
          local_78 = (ulonglong)uVar18;
          local_70 = param_2;
        }
      }
      *(byte *)(lVar16 + 0x7c) = *(byte *)(lVar16 + 0x7c) | 0x10;
      lVar16 = *(longlong *)(param_1 + 4);
    }
    if (*(int *)(lVar16 + 0x8c) != 0) {
      lVar10 = 0;
      uVar11 = 0;
      do {
        uVar5 = *(undefined4 *)
                 (*(longlong *)
                   (*(longlong *)(param_1 + 0x14) +
                   (ulonglong)*(byte *)(*(longlong *)(lVar16 + 0x58) + uVar11) * 8) +
                 (ulonglong)*(ushort *)(*(longlong *)(lVar16 + 0x60) + uVar11 * 2) * 4);
        puVar1 = (undefined4 *)(*(longlong *)(lVar16 + 0x10) + lVar10);
        *puVar1 = uVar5;
        puVar1[1] = uVar5;
        puVar1[2] = uVar5;
        puVar1[3] = uVar5;
        uVar11 = uVar11 + 1;
        lVar16 = *(longlong *)(param_1 + 4);
        lVar10 = lVar10 + 0x10;
      } while (uVar11 < *(uint *)(lVar16 + 0x8c));
    }
    if (param_1[0x12] == *(int *)(lVar16 + 0x78)) {
      *param_1 = *(int *)(lVar16 + 0xc4);
      param_1[1] = *(int *)(lVar16 + 200);
      param_1[2] = *(int *)(lVar16 + 0xcc);
      param_1[3] = *(int *)(lVar16 + 0xd0);
    }
    else {
      uVar14 = param_1[0x12] + 3;
      uVar18 = uVar14 >> 2;
      uVar11 = 1;
      if (uVar14 < 8) {
        uVar18 = 1;
      }
      lVar10 = (ulonglong)*(uint *)(lVar16 + 0xa0) + (ulonglong)*(uint *)(lVar16 + 0x88) * 0x10;
      uVar23 = (longlong)DAT_14c7627b0 * 0x400 - (ulonglong)*(uint *)(lVar16 + 0xa8);
      uVar21 = (ulonglong)(uVar18 + 3 & 0xfffffffc) * lVar10;
      if (uVar23 < uVar21) {
        iVar9 = (int)uVar23;
        uVar21 = (longlong)((int)uVar21 + iVar9 + -1) / (longlong)iVar9;
        uVar11 = uVar21 & 0xffffffff;
        uVar18 = (uint)(((uVar18 + (int)uVar21) - 1) / uVar11);
      }
      iVar19 = (int)lVar10 * uVar18;
      iVar9 = iVar19 + *(uint *)(lVar16 + 0xa8);
      *param_1 = iVar9;
      param_1[1] = iVar19;
      param_1[2] = (int)uVar11;
      param_1[3] = uVar18 << 2;
      *(int *)(lVar16 + 0xc4) = iVar9;
      *(int *)(*(longlong *)(param_1 + 4) + 200) = param_1[1];
      *(int *)(*(longlong *)(param_1 + 4) + 0xcc) = param_1[2];
      *(int *)(*(longlong *)(param_1 + 4) + 0xd0) = param_1[3];
      *(int *)(*(longlong *)(param_1 + 4) + 0x78) = param_1[0x12];
    }
    FUN_1480423ef(param_2,param_1);
    if (**(longlong **)(param_1 + 4) != 0) {
      uVar24 = 0;
      local_70 = param_2;
      puVar12 = (ulonglong *)FUN_14001cc68(param_1[1] + (int)(*(longlong **)(param_1 + 4))[0x15],0);
      lVar16 = *(longlong *)(param_1 + 4);
      uVar23 = (ulonglong)
               (uint)(*(int *)(lVar16 + 0x8c) + *(int *)(lVar16 + 0x88) +
                      *(int *)(lVar16 + 0x90) * 2 + *(int *)(lVar16 + 0x9c));
      uVar21 = (longlong)puVar12 + 0x11fU & 0xffffffffffffffc0;
      uVar14 = (uint)param_1[3] >> 2;
      *puVar12 = uVar21;
      uVar21 = (ulonglong)*(uint *)(lVar16 + 0x88) * (ulonglong)uVar14 * 0x10 + uVar21;
      puVar12[10] = uVar21;
      _Dst = (void *)(uVar21 + uVar23 * 8);
      puVar12[0xb] = (ulonglong)_Dst;
      puVar12[0xc] = (longlong)_Dst + uVar23;
      uVar11 = (ulonglong)(*(int *)(lVar16 + 0xa0) * uVar14) + (longlong)_Dst + uVar23;
      puVar12[1] = uVar11;
      uVar11 = *(uint *)(lVar16 + 0xac) + uVar11;
      puVar12[2] = uVar11;
      uVar11 = *(uint *)(lVar16 + 0xb0) + uVar11;
      puVar12[3] = uVar11;
      uVar11 = *(uint *)(lVar16 + 0xb4) + uVar11;
      puVar12[7] = 0;
      if (*(int *)(lVar16 + 0xa0) != 0) {
        uVar21 = 0;
        do {
          *(ulonglong *)(puVar12[3] + uVar21 * 8) = uVar24 + puVar12[0xc];
          uVar21 = uVar21 + 1;
          lVar16 = *(longlong *)(param_1 + 4);
          uVar24 = (ulonglong)((int)uVar24 + uVar14);
        } while (uVar21 < *(uint *)(lVar16 + 0xa0));
        uVar21 = puVar12[10];
        _Dst = (void *)puVar12[0xb];
      }
      puVar12[4] = uVar11;
      uVar11 = uVar11 + (ulonglong)*(uint *)(lVar16 + 0x84) * 8;
      puVar12[5] = uVar11;
      puVar12[6] = uVar11 + *(uint *)(lVar16 + 0x84) + 0xf & 0xfffffffffffffff0;
      uVar11 = (ulonglong)*(uint *)(lVar16 + 0x88);
      local_78 = (ulonglong)*(uint *)(lVar16 + 0x8c);
      local_68 = (ulonglong)*(uint *)(lVar16 + 0x90);
      memset(_Dst,(int)CONCAT71((uint7)(uint3)(*(uint *)(lVar16 + 0x8c) >> 8),0x10),uVar23);
      lVar16 = *(longlong *)(param_1 + 4);
      if (*(int *)(lVar16 + 0x88) != 0) {
        uVar18 = 0;
        uVar23 = 0;
        do {
          *(ulonglong *)(uVar21 + uVar23 * 8) = (ulonglong)uVar18 * 0x10 + *puVar12;
          uVar23 = uVar23 + 1;
          lVar16 = *(longlong *)(param_1 + 4);
          uVar18 = uVar18 + uVar14;
        } while (uVar23 < *(uint *)(lVar16 + 0x88));
      }
      lVar10 = uVar21 + uVar11 * 8;
      if (*(int *)(lVar16 + 0x8c) != 0) {
        lVar17 = 0;
        uVar23 = 0;
        do {
          *(longlong *)(lVar10 + uVar23 * 8) = *(longlong *)(lVar16 + 0x10) + lVar17;
          *(undefined1 *)
           (puVar12[0xb] +
           (ulonglong)(uint)(*(int *)(*(longlong *)(param_1 + 4) + 0x88) + (int)uVar23)) = 0;
          uVar23 = uVar23 + 1;
          lVar16 = *(longlong *)(param_1 + 4);
          lVar17 = lVar17 + 0x10;
        } while (uVar23 < *(uint *)(lVar16 + 0x8c));
      }
      if (*(int *)(lVar16 + 0x90) != 0) {
        lVar17 = local_78 * 8 + uVar11 * 8 + uVar21;
        uVar23 = 0;
        iVar9 = 0;
        do {
          uVar2 = *(ushort *)(*(longlong *)(lVar16 + 0x70) + uVar23 * 2);
          uVar24 = (ulonglong)((uint)*(byte *)(*(longlong *)(lVar16 + 0x68) + uVar23) * 0xa0);
          lVar25 = *(longlong *)(*(longlong *)(param_1 + 6) + uVar24);
          iVar19 = *(int *)(*(longlong *)(param_1 + 6) + 0x3c + uVar24);
          if ((short)uVar2 < 0) {
            uVar14 = *(uint *)(lVar16 + 0x8c);
            iVar20 = *(int *)(lVar16 + 0x88);
            lVar22 = (longlong)iVar9;
            iVar9 = iVar9 + 1;
            *(ulonglong *)(lVar17 + uVar23 * 8) =
                 lVar22 * 0x10 + (ulonglong)uVar14 * 0x10 + *(longlong *)(lVar16 + 0x10);
            *(undefined1 *)(puVar12[0xb] + (longlong)(int)(iVar20 + uVar14 + (int)uVar23)) = 0;
            lVar16 = *(longlong *)(lVar25 + (ulonglong)(uVar2 & 0x3fff) * 8);
            if ((uVar2 >> 0xe & 1) == 0) {
              uVar14 = *(uint *)(lVar16 + (longlong)iVar19 * 4);
            }
            else {
              uVar2 = *(ushort *)(lVar16 + (longlong)iVar19 * 2);
              uVar14 = (uint)uVar2 << 0xd;
              if ((uVar14 & 0xf800000) == 0xf800000) {
                fVar15 = (float)(uVar14 | 0x70000000);
              }
              else if ((uVar14 & 0xf800000) == 0) {
                fVar15 = (float)(uVar14 | 0x38800000) + -6.1035156e-05;
              }
              else {
                fVar15 = (float)((uVar14 & 0xfffe000) + 0x38000000);
              }
              uVar14 = (int)(short)uVar2 & 0x80000000U | (uint)fVar15;
            }
            puVar6 = *(uint **)(lVar17 + uVar23 * 8);
            *puVar6 = uVar14;
            puVar6[1] = uVar14;
            puVar6[2] = uVar14;
            puVar6[3] = uVar14;
          }
          else {
            *(ulonglong *)(lVar17 + uVar23 * 8) =
                 (ulonglong)(uint)(iVar19 << (2U - ((uVar2 >> 0xe & 1) != 0) & 0x1f)) +
                 *(longlong *)(lVar25 + (ulonglong)(uVar2 & 0x3fff) * 8);
          }
          *(undefined8 *)
           (lVar10 + local_78 * 8 +
           (ulonglong)(uint)((int)uVar23 + *(int *)(*(longlong *)(param_1 + 4) + 0x90)) * 8) =
               *(undefined8 *)(lVar17 + uVar23 * 8);
          uVar23 = uVar23 + 1;
          lVar16 = *(longlong *)(param_1 + 4);
        } while (uVar23 < *(uint *)(lVar16 + 0x90));
      }
      if (*(int *)(lVar16 + 0x9c) != 0) {
        uVar23 = 0;
        do {
          uVar14 = (uint)*(ushort *)(*(longlong *)(lVar16 + 0x50) + uVar23 * 2);
          if (uVar14 == 0xffff) {
            lVar16 = 0;
          }
          else {
            uVar2 = *(ushort *)(*(longlong *)(lVar16 + 0x48) + uVar23 * 2);
            lVar10 = *(longlong *)(param_1 + 6);
            uVar24 = (ulonglong)((uint)*(byte *)(*(longlong *)(lVar16 + 0x40) + uVar23) * 0xa0);
            lVar16 = (ulonglong)
                     (uint)(*(int *)(lVar10 + 0x3c + uVar24) << (2U - (uVar2 == 2) & 0x1f)) +
                     *(longlong *)
                      (*(longlong *)(lVar10 + 0x10 + uVar24) +
                      (longlong)
                      (int)(uVar14 + *(int *)(lVar10 + uVar24 + 0x2c + (ulonglong)uVar2 * 4)) * 8);
          }
          *(longlong *)
           (uVar21 + local_78 * 8 + uVar11 * 8 + (ulonglong)(uint)((int)local_68 * 2) * 8 +
           uVar23 * 8) = lVar16;
          uVar23 = uVar23 + 1;
          lVar16 = *(longlong *)(param_1 + 4);
        } while (uVar23 < *(uint *)(lVar16 + 0x9c));
      }
      local_60 = uVar11;
      if ((*(byte *)(lVar16 + 0x7c) & 8) != 0) {
        QueryPerformanceCounter(&local_58);
        LVar8 = local_58;
        uVar21 = (longlong)puVar12 << 0x20 ^ 0xcafef00dd15ea5e5;
        QueryPerformanceCounter(&local_58);
        uVar11 = local_58.QuadPart << 0x20 ^ LVar8.QuadPart;
        lVar16 = 0;
        do {
          lVar10 = 0;
          do {
            uVar14 = (uint)(uVar11 >> 0x2d) ^ (uint)(uVar11 >> 0x1b);
            bVar13 = (byte)(uVar11 >> 0x3b);
            uVar11 = uVar11 * 0x5851f42d4c957f2d + uVar21;
            *(uint *)((longlong)&local_58 + lVar10 * 4) = uVar14 >> bVar13 | uVar14 << 0x20 - bVar13
            ;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 4);
          *(LARGE_INTEGER *)(puVar12 + lVar16 * 2 + 0xe) = local_58;
          ((LARGE_INTEGER *)(puVar12 + lVar16 * 2 + 0xe))[1] = LStack_50;
          lVar16 = lVar16 + 1;
        } while (lVar16 != 5);
        puVar12[0x18] = uVar21;
        puVar12[0x19] = uVar11;
        iVar9 = rand();
        *(int *)(puVar12 + 0x1a) = iVar9;
        *(int *)((longlong)puVar12 + 0xd4) = iVar9;
      }
      uVar14 = param_1[3];
      iVar9 = 0;
      uVar18 = ((param_1[0x12] + uVar14) - 1) / uVar14;
      if (0 < (int)uVar18) {
        iVar19 = 0;
        do {
          uVar7 = param_1[0x12] - iVar19;
          if ((int)uVar14 < param_1[0x12] - iVar19) {
            uVar7 = uVar14;
          }
          iVar20 = (int)(uVar7 + 3) >> 2;
          *(int *)(puVar12 + 8) = iVar9;
          *(int *)((longlong)puVar12 + 0x44) = iVar19;
          *(uint *)(puVar12 + 9) = uVar7;
          if (iVar20 == 1) {
            FUN_1438e8648(param_1,puVar12);
          }
          else if (0 < iVar20) {
            FUN_1438ec4a1(param_1,puVar12);
          }
          iVar9 = iVar9 + 1;
          uVar14 = param_1[3];
          iVar19 = iVar19 + uVar14;
        } while (iVar9 < (int)uVar18);
      }
      if (puVar12[7] != 0) {
        FUN_1400020a8();
        puVar12[7] = 0;
      }
      FUN_1400020a8(puVar12);
      lVar16 = *(longlong *)(param_1 + 4);
      if (*(int *)(lVar16 + 0xa0) != 0) {
        lVar10 = 0;
        do {
          *(int *)(*(longlong *)(param_1 + 6) + 0x38 + (longlong)(int)lVar10 * 0xa0) =
               *(int *)(*(longlong *)(lVar16 + 0x20) + lVar10 * 4) + -1;
          lVar16 = *(longlong *)(param_1 + 4);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < *(uint *)(lVar16 + 0xa0));
      }
      FUN_1480423f2(local_70,param_1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1480322a0 FUN_1480322a0 body=1262 status=ok
// SIG undefined FUN_1480322a0(void)

longlong * FUN_1480322a0(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 2) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 4,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 4) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)((longlong)param_2 + 0x12),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 0x12) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 5,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 5) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)((longlong)param_2 + 0x16),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 0x16) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 6,2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)(param_2 + 6) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar2 = *(undefined2 **)param_1[1];
  if ((undefined2 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,(undefined2 *)((longlong)param_2 + 0x1a),2);
    }
    else {
      thunk_FUN_1457251a8(param_1);
    }
  }
  else {
    *(undefined2 *)((longlong)param_2 + 0x1a) = *puVar2;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 2;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 7,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[7] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 8,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[8] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 9,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[9] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 10,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[10] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 0xb,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[0xb] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar4 = (undefined8 *)(param_2 + 0xc);
  puVar3 = *(undefined8 **)param_1[1];
  if ((undefined8 *)((longlong *)param_1[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,puVar4,8);
    }
    else {
      thunk_FUN_146821949(param_1,puVar4);
    }
  }
  else {
    *puVar4 = *puVar3;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 8;
  }
  return param_1;
}



// FUNCTION 14803278e FUN_14803278e body=367 status=ok
// SIG undefined FUN_14803278e(void)

void FUN_14803278e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_118 [40];
  undefined1 local_f0 [48];
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  local_78 = (undefined4)*param_1;
  uStack_74 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_70 = (undefined4)param_1[1];
  uStack_6c = *(undefined4 *)((longlong)param_1 + 0xc);
  FUN_1480328fe(&local_60);
  FUN_1480329cc(local_f0,&local_60);
  *(undefined4 *)(param_2 + 9) = local_60;
  *(undefined4 *)((longlong)param_2 + 0x4c) = local_5c;
  *(undefined2 *)(param_2 + 10) = local_58;
  *(undefined4 *)((longlong)param_2 + 0x54) = local_54;
  *(undefined2 *)(param_2 + 0xb) = local_50;
  *(undefined2 *)((longlong)param_2 + 0x5a) = local_4e;
  *(undefined2 *)((longlong)param_2 + 0x5c) = local_4c;
  *(undefined2 *)((longlong)param_2 + 0x5e) = local_4a;
  *(undefined2 *)(param_2 + 0xc) = local_48;
  *(undefined2 *)((longlong)param_2 + 0x62) = local_46;
  *(undefined4 *)((longlong)param_2 + 100) = local_44;
  *(undefined4 *)(param_2 + 0xd) = local_40;
  *(undefined4 *)((longlong)param_2 + 0x6c) = local_3c;
  *(undefined4 *)(param_2 + 0xe) = local_38;
  *(undefined4 *)((longlong)param_2 + 0x74) = local_34;
  param_2[0xf] = local_30;
  lVar1 = *param_1;
  *param_2 = local_c0 + lVar1;
  param_2[2] = local_b8 + lVar1;
  param_2[3] = local_b0 + lVar1;
  param_2[4] = local_a8 + lVar1;
  param_2[5] = local_a0 + lVar1;
  param_2[6] = local_98 + lVar1;
  param_2[7] = local_90 + lVar1;
  param_2[8] = lVar1 + local_88;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480328fe FUN_1480328fe body=205 status=ok
// SIG undefined FUN_1480328fe(void)

undefined8 FUN_1480328fe(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [18];
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar2 = *param_2;
  iVar1 = *(int *)(param_2 + 1);
  memset(local_d8,0,0x90);
  FUN_144869430(local_d8);
  local_48 = 0;
  local_d8[0] = &PTR_FUN_149e1ddc0;
  local_30 = 0x7fffffffffffffff;
  local_40 = uVar2;
  local_38 = (longlong)iVar1;
  FUN_140996f94(local_d8,1);
  (*(code *)local_d8[0][0x1e])(local_d8,0);
  FUN_1480322a0(local_d8,param_1);
  FUN_144a7fc42(local_d8);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1480329cc FUN_1480329cc body=296 status=ok
// SIG undefined FUN_1480329cc(void)

void FUN_1480329cc(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  *param_1 = 0x38;
  uVar1 = *param_2;
  param_1[1] = uVar1;
  uVar3 = (uint)(ushort)param_2[4] * 2;
  param_1[2] = uVar3;
  uVar4 = (uint)*(ushort *)((longlong)param_2 + 0x12) * 2;
  param_1[3] = uVar4;
  lVar9 = (ulonglong)*(ushort *)((longlong)param_2 + 0x16) * 0x10;
  param_1[4] = (int)lVar9;
  uVar7 = param_2[6];
  param_1[5] = (uint)(ushort)uVar7;
  uVar5 = (uint)(ushort)param_2[6] * 2;
  param_1[6] = uVar5;
  uVar6 = (uint)(ushort)param_2[6] * 2;
  param_1[7] = uVar6;
  uVar2 = param_2[7];
  param_1[8] = uVar2 << 4;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0x40;
  uVar8 = (ulonglong)uVar1 + 0x4f;
  *(ulonglong *)(param_1 + 0xe) = uVar8 & 0xfffffffffffffff0;
  uVar8 = (uVar8 | 0xe) + (ulonglong)uVar3 & 0xfffffffffffffff0;
  *(ulonglong *)(param_1 + 0x10) = uVar8;
  *(ulonglong *)(param_1 + 0x12) = uVar8 + uVar4 + 0xf & 0x7fffffff0;
  uVar8 = lVar9 + uVar4 + uVar8 + 0xf & 0xffffffff0;
  *(ulonglong *)(param_1 + 0x14) = uVar8;
  uVar8 = (ushort)uVar7 + uVar8 + 0xf & 0x1ffffffff0;
  *(ulonglong *)(param_1 + 0x16) = uVar8;
  uVar8 = uVar5 + uVar8 + 0xf & 0x3ffffffff0;
  *(ulonglong *)(param_1 + 0x18) = uVar8;
  *(ulonglong *)(param_1 + 0x1a) = uVar6 + uVar8 + 0xf & 0x7ffffffff0;
  *(ulonglong *)(param_1 + 0x1c) = uVar6 + uVar8 + (ulonglong)(uVar2 << 4) + 0xf & 0xfffffffff0;
  return;
}



// FUNCTION 148032af4 FUN_148032af4 body=62 status=ok
// SIG undefined FUN_148032af4(void)

void FUN_148032af4(undefined4 *param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_1;
  uStack_14 = param_1[1];
  uStack_10 = param_1[2];
  uStack_c = param_1[3];
  FUN_14803278e();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148032b34 FUN_148032b34 body=58 status=ok
// SIG undefined FUN_148032b34(void)

void FUN_148032b34(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b2f8c8();
    return;
  case 1:
    FUN_144b2f928();
    return;
  case 2:
    FUN_144b2f9b4();
    return;
  case 3:
    FUN_144b2fa44();
    return;
  default:
    return;
  }
}



// FUNCTION 148032b6e FUN_148032b6e body=58 status=ok
// SIG undefined FUN_148032b6e(void)

void FUN_148032b6e(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b2faec();
    return;
  case 1:
    FUN_144b2fb4c();
    return;
  case 2:
    FUN_144b2fbd8();
    return;
  case 3:
    FUN_144b2fc68();
    return;
  default:
    return;
  }
}



// FUNCTION 148032ba8 FUN_148032ba8 body=58 status=ok
// SIG undefined FUN_148032ba8(void)

void FUN_148032ba8(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b2fd10();
    return;
  case 1:
    FUN_144b2fd70();
    return;
  case 2:
    FUN_144b2fdfc();
    return;
  case 3:
    FUN_144b2fe8c();
    return;
  default:
    return;
  }
}



// FUNCTION 148032be2 FUN_148032be2 body=179 status=ok
// SIG undefined FUN_148032be2(void)

void FUN_148032be2(longlong param_1)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  
  puVar7 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar7 + 1;
  switch(*puVar7) {
  case 0:
    uVar3 = *(ushort *)(puVar7 + 1);
    *(undefined1 **)(param_1 + 0x10) = puVar7 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(puVar7 + 3);
    *(undefined1 **)(param_1 + 0x10) = puVar7 + 5;
    uVar5 = *(ushort *)(puVar7 + 5);
    *(undefined1 **)(param_1 + 0x10) = puVar7 + 7;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        auVar2 = *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar4 * iVar6));
        auVar10 = divps(*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar6)),auVar2);
        puVar1 = (uint *)(lVar9 + (ulonglong)((uint)uVar5 * iVar6));
        *puVar1 = auVar10._0_4_ & -(uint)(1e-08 < ABS(auVar2._0_4_));
        puVar1[1] = auVar10._4_4_ & -(uint)(1e-08 < ABS(auVar2._4_4_));
        puVar1[2] = auVar10._8_4_ & -(uint)(1e-08 < ABS(auVar2._8_4_));
        puVar1[3] = auVar10._12_4_ & -(uint)(1e-08 < ABS(auVar2._12_4_));
        lVar9 = lVar9 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    break;
  case 1:
    FUN_1438f25e0();
    return;
  case 2:
    FUN_144b2ffb2();
    return;
  case 3:
    FUN_1438f268a();
    return;
  }
  return;
}



// FUNCTION 148032c96 FUN_148032c96 body=78 status=ok
// SIG undefined FUN_148032c96(void)

void FUN_148032c96(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b3005a();
    return;
  case 1:
    FUN_144b300d0();
    return;
  case 2:
    FUN_144b30172();
    return;
  case 3:
    FUN_144b30218();
    return;
  case 4:
    FUN_144b302de();
    return;
  case 5:
    FUN_144b30384();
    return;
  case 6:
    FUN_144b30450();
    return;
  case 7:
    FUN_144b3051a();
    return;
  default:
    return;
  }
}



// FUNCTION 148032ce4 FUN_148032ce4 body=220 status=ok
// SIG undefined FUN_148032ce4(void)

void FUN_148032ce4(longlong param_1)

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
  undefined1 *puVar10;
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
  
  puVar10 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar10 + 1;
  switch(*puVar10) {
  case 0:
    uVar5 = *(ushort *)(puVar10 + 1);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 3;
    lVar21 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar6 = *(ushort *)(puVar10 + 3);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 5;
    uVar7 = *(ushort *)(puVar10 + 5);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 7;
    uVar8 = *(ushort *)(puVar10 + 7);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 9;
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
    break;
  case 1:
    FUN_1438f274a();
    return;
  case 2:
    FUN_1438f27fc();
    return;
  case 3:
    FUN_144b30680();
    return;
  case 4:
    FUN_1438f28b2();
    return;
  case 5:
    FUN_1438f2968();
    return;
  case 6:
    FUN_1480364a8();
    return;
  case 7:
    FUN_144b3075a();
    return;
  }
  return;
}



// FUNCTION 148032dc0 FUN_148032dc0 body=292 status=ok
// SIG undefined FUN_148032dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148032dc0(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auVar13 [16];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar9 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar3) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                      (longlong)(int)uVar9);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      puVar10 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      fVar12 = 1.0 / fVar1;
      do {
        *puVar10 = (uint)fVar12 & -(uint)(1e-08 < ABS(fVar1));
        puVar10[1] = (uint)fVar12 & -(uint)(1e-08 < ABS(fVar1));
        puVar10[2] = (uint)fVar12 & -(uint)(1e-08 < ABS(fVar1));
        puVar10[3] = (uint)fVar12 & -(uint)(1e-08 < ABS(fVar1));
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    auVar6 = _DAT_1499314a0;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        auVar2 = *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        auVar13 = divps(auVar6,auVar2);
        puVar10 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar8));
        *puVar10 = auVar13._0_4_ & -(uint)(1e-08 < ABS(auVar2._0_4_));
        puVar10[1] = auVar13._4_4_ & -(uint)(1e-08 < ABS(auVar2._4_4_));
        puVar10[2] = auVar13._8_4_ & -(uint)(1e-08 < ABS(auVar2._8_4_));
        puVar10[3] = auVar13._12_4_ & -(uint)(1e-08 < ABS(auVar2._12_4_));
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 148032ee4 FUN_148032ee4 body=272 status=ok
// SIG undefined FUN_148032ee4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148032ee4(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar8 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar7 = **(int **)(param_1 + 0x20);
    lVar10 = 0;
    if (iVar7 <= (int)(uint)uVar3) {
      do {
        uVar8 = uVar8 - iVar7;
        iVar7 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
        lVar10 = lVar10 + 1;
      } while (iVar7 <= (int)uVar8);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                      (longlong)(int)uVar8);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      puVar9 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      auVar12._4_4_ = fVar1;
      auVar12._0_4_ = fVar1;
      auVar12._8_4_ = fVar1;
      auVar12._12_4_ = fVar1;
      auVar12 = sqrtps(in_XMM2,auVar12);
      auVar12 = divps(_DAT_1499314a0,auVar12);
      do {
        *puVar9 = auVar12._0_4_ & -(uint)(1e-08 < fVar1);
        puVar9[1] = auVar12._4_4_ & -(uint)(1e-08 < fVar1);
        puVar9[2] = auVar12._8_4_ & -(uint)(1e-08 < fVar1);
        puVar9[3] = auVar12._12_4_ & -(uint)(1e-08 < fVar1);
        puVar9 = puVar9 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar10 = *(longlong *)(param_1 + 0x70);
    iVar7 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    auVar12 = _DAT_1499314a0;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      do {
        auVar2 = *(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar3 * iVar7));
        auVar11 = sqrtps(auVar2,auVar2);
        auVar11 = divps(auVar12,auVar11);
        puVar9 = (uint *)(lVar10 + (ulonglong)((uint)uVar4 * iVar7));
        *puVar9 = auVar11._0_4_ & -(uint)(1e-08 < auVar2._0_4_);
        puVar9[1] = auVar11._4_4_ & -(uint)(1e-08 < auVar2._4_4_);
        puVar9[2] = auVar11._8_4_ & -(uint)(1e-08 < auVar2._8_4_);
        puVar9[3] = auVar11._12_4_ & -(uint)(1e-08 < auVar2._12_4_);
        lVar10 = lVar10 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}



// FUNCTION 148032ff4 FUN_148032ff4 body=284 status=ok
// SIG undefined FUN_148032ff4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148032ff4(longlong param_1)

{
  float fVar1;
  undefined1 auVar2 [16];
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar8 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar7 = **(int **)(param_1 + 0x20);
    lVar10 = 0;
    if (iVar7 <= (int)(uint)uVar3) {
      do {
        uVar8 = uVar8 - iVar7;
        iVar7 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
        lVar10 = lVar10 + 1;
      } while (iVar7 <= (int)uVar8);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                      (longlong)(int)uVar8);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      puVar9 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      auVar12._4_4_ = fVar1;
      auVar12._0_4_ = fVar1;
      auVar12._8_4_ = fVar1;
      auVar12._12_4_ = fVar1;
      auVar12 = sqrtps(in_XMM2,auVar12);
      auVar12 = divps(_DAT_1499314a0,auVar12);
      auVar12 = divps(_DAT_1499314a0,auVar12);
      do {
        *puVar9 = auVar12._0_4_ & -(uint)(1e-08 < fVar1);
        puVar9[1] = auVar12._4_4_ & -(uint)(1e-08 < fVar1);
        puVar9[2] = auVar12._8_4_ & -(uint)(1e-08 < fVar1);
        puVar9[3] = auVar12._12_4_ & -(uint)(1e-08 < fVar1);
        puVar9 = puVar9 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar10 = *(longlong *)(param_1 + 0x70);
    iVar7 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    auVar12 = _DAT_1499314a0;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      do {
        auVar2 = *(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar3 * iVar7));
        auVar11 = sqrtps(auVar2,auVar2);
        auVar11 = divps(auVar12,auVar11);
        auVar11 = divps(auVar12,auVar11);
        puVar9 = (uint *)(lVar10 + (ulonglong)((uint)uVar4 * iVar7));
        *puVar9 = auVar11._0_4_ & -(uint)(1e-08 < auVar2._0_4_);
        puVar9[1] = auVar11._4_4_ & -(uint)(1e-08 < auVar2._4_4_);
        puVar9[2] = auVar11._8_4_ & -(uint)(1e-08 < auVar2._8_4_);
        puVar9[3] = auVar11._12_4_ & -(uint)(1e-08 < auVar2._12_4_);
        lVar10 = lVar10 + 0x10;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}



// FUNCTION 148033110 FUN_148033110 body=219 status=ok
// SIG undefined FUN_148033110(void)

void FUN_148033110(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    fVar12 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                       (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      pfVar10 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70));
      fVar12 = 0.0 - fVar12;
      do {
        *pfVar10 = fVar12;
        pfVar10[1] = fVar12;
        pfVar10[2] = fVar12;
        pfVar10[3] = fVar12;
        pfVar10 = pfVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        pfVar10 = (float *)(lVar11 + (ulonglong)((uint)uVar2 * iVar8));
        fVar12 = pfVar10[1];
        fVar5 = pfVar10[2];
        fVar6 = pfVar10[3];
        pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        *pfVar1 = 0.0 - *pfVar10;
        pfVar1[1] = 0.0 - fVar12;
        pfVar1[2] = 0.0 - fVar5;
        pfVar1[3] = 0.0 - fVar6;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 1480331ec FUN_1480331ec body=226 status=ok
// SIG undefined FUN_1480331ec(void)

void FUN_1480331ec(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      puVar10 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      do {
        *puVar10 = uVar9 & 0x7fffffff;
        puVar10[1] = uVar9 & 0x7fffffff;
        puVar10[2] = uVar9 & 0x7fffffff;
        puVar10[3] = uVar9 & 0x7fffffff;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar10 = (uint *)(lVar11 + (ulonglong)((uint)uVar2 * iVar8));
        uVar9 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        *puVar1 = *puVar10 & 0x7fffffff;
        puVar1[1] = uVar9 & 0x7fffffff;
        puVar1[2] = uVar5 & 0x7fffffff;
        puVar1[3] = uVar6 & 0x7fffffff;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 1480332ce FUN_1480332ce body=257 status=ok
// SIG undefined FUN_1480332ce(void)

void FUN_1480332ce(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar5 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar6 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar5 = uVar5 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar9 <= (int)uVar5);
    }
    local_38 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8) + (longlong)(int)uVar5);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70))
      ;
      uStack_34 = local_38;
      uStack_30 = local_38;
      uStack_2c = local_38;
      uVar10 = FUN_14276fd37();
      do {
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc_00;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd_00;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar6 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar1 = (undefined4 *)(lVar6 + (ulonglong)((uint)uVar2 * iVar9));
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        uVar10 = FUN_14276fd37(&local_48);
        puVar8 = (undefined8 *)(lVar6 + (ulonglong)((uint)uVar3 * iVar9));
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd;
        lVar6 = lVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 1480333d0 FUN_1480333d0 body=408 status=ok
// SIG undefined FUN_1480333d0(void)

void FUN_1480333d0(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 (*pauVar17) [16];
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar12 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar14 = **(int **)(param_1 + 0x20);
    lVar16 = 0;
    if (iVar14 <= (int)(uint)uVar3) {
      do {
        uVar12 = uVar12 - iVar14;
        iVar14 = (*(int **)(param_1 + 0x20))[lVar16 + 1];
        lVar16 = lVar16 + 1;
      } while (iVar14 <= (int)uVar12);
    }
    uVar2 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar16 * 8) + (longlong)(int)uVar12);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar14 = *(int *)(param_1 + 0x44);
    if (0 < iVar14) {
      pauVar17 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        auVar19._0_8_ = exp2f(uVar2);
        auVar19._8_4_ = extraout_XMM0_Dc_03;
        auVar19._12_4_ = extraout_XMM0_Dd_03;
        auVar23._0_8_ = exp2f(uVar2);
        auVar23._8_4_ = extraout_XMM0_Dc_04;
        auVar23._12_4_ = extraout_XMM0_Dd_04;
        uVar9 = exp2f(uVar2);
        uVar7 = exp2f(uVar2);
        auVar22 = insertps(auVar19,auVar23,0x10);
        auVar20._8_4_ = extraout_XMM0_Dc_05;
        auVar20._0_8_ = uVar9;
        auVar20._12_4_ = extraout_XMM0_Dd_05;
        auVar20 = insertps(auVar22,auVar20,0x20);
        auVar22._8_4_ = extraout_XMM0_Dc_06;
        auVar22._0_8_ = uVar7;
        auVar22._12_4_ = extraout_XMM0_Dd_06;
        auVar22 = insertps(auVar20,auVar22,0x30);
        *pauVar17 = auVar22;
        iVar14 = iVar14 + -1;
        pauVar17 = pauVar17 + 1;
      } while (iVar14 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar16 = *(longlong *)(param_1 + 0x70);
    iVar14 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar13 = *(int *)(param_1 + 0x44);
    if (0 < iVar13) {
      uVar15 = (ulonglong)((uint)uVar3 * iVar14);
      do {
        puVar1 = (undefined4 *)(lVar16 + uVar15);
        uVar10 = puVar1[1];
        uVar11 = puVar1[3];
        uVar2 = *(undefined4 *)(lVar16 + 8 + uVar15);
        auVar21._0_8_ = exp2f(*puVar1);
        auVar21._8_4_ = extraout_XMM0_Dc;
        auVar21._12_4_ = extraout_XMM0_Dd;
        uVar9 = exp2f(uVar10);
        auVar18._0_8_ = exp2f(uVar2);
        auVar18._8_4_ = extraout_XMM0_Dc_01;
        auVar18._12_4_ = extraout_XMM0_Dd_01;
        uVar7 = exp2f(uVar11);
        auVar8._8_4_ = extraout_XMM0_Dc_00;
        auVar8._0_8_ = uVar9;
        auVar8._12_4_ = extraout_XMM0_Dd_00;
        auVar22 = insertps(auVar21,auVar8,0x10);
        auVar22 = insertps(auVar22,auVar18,0x20);
        auVar6._8_4_ = extraout_XMM0_Dc_02;
        auVar6._0_8_ = uVar7;
        auVar6._12_4_ = extraout_XMM0_Dd_02;
        auVar22 = insertps(auVar22,auVar6,0x30);
        *(undefined1 (*) [16])(lVar16 + (ulonglong)((uint)uVar4 * iVar14)) = auVar22;
        lVar16 = lVar16 + 0x10;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  return;
}



// FUNCTION 148033568 FUN_148033568 body=290 status=ok
// SIG undefined FUN_148033568(void)

void FUN_148033568(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  undefined8 uVar14;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar13 = **(int **)(param_1 + 0x20);
    lVar10 = 0;
    if (iVar13 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar13;
        iVar13 = (*(int **)(param_1 + 0x20))[lVar10 + 1];
        lVar10 = lVar10 + 1;
      } while (iVar13 <= (int)uVar9);
    }
    local_48 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar10 * 8) +
                         (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar13 = *(int *)(param_1 + 0x44);
    if (0 < iVar13) {
      puVar12 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      bVar5 = 0.0 < local_48;
      bVar6 = 0.0 < local_48;
      bVar7 = 0.0 < local_48;
      bVar8 = 0.0 < local_48;
      fStack_44 = local_48;
      fStack_40 = local_48;
      fStack_3c = local_48;
      uVar14 = FUN_14063caf8();
      do {
        *puVar12 = (uint)uVar14 & -(uint)bVar5;
        puVar12[1] = (uint)((ulonglong)uVar14 >> 0x20) & -(uint)bVar6;
        puVar12[2] = extraout_XMM0_Dc_00 & -(uint)bVar7;
        puVar12[3] = extraout_XMM0_Dd_00 & -(uint)bVar8;
        puVar12 = puVar12 + 4;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar10 = *(longlong *)(param_1 + 0x70);
    iVar13 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar11 = *(int *)(param_1 + 0x44);
    if (0 < iVar11) {
      do {
        pfVar1 = (float *)(lVar10 + (ulonglong)((uint)uVar2 * iVar13));
        local_58 = *pfVar1;
        fStack_54 = pfVar1[1];
        fStack_50 = pfVar1[2];
        fStack_4c = pfVar1[3];
        bVar5 = 0.0 < local_58;
        bVar6 = 0.0 < fStack_54;
        bVar7 = 0.0 < fStack_50;
        bVar8 = 0.0 < fStack_4c;
        uVar14 = FUN_14063caf8(&local_58);
        puVar12 = (uint *)(lVar10 + (ulonglong)((uint)uVar3 * iVar13));
        *puVar12 = (uint)uVar14 & -(uint)bVar5;
        puVar12[1] = (uint)((ulonglong)uVar14 >> 0x20) & -(uint)bVar6;
        puVar12[2] = extraout_XMM0_Dc & -(uint)bVar7;
        puVar12[3] = extraout_XMM0_Dd & -(uint)bVar8;
        lVar10 = lVar10 + 0x10;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  return;
}



// FUNCTION 14803368a FUN_14803368a body=444 status=ok
// SIG undefined FUN_14803368a(void)

void FUN_14803368a(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float _X;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar10 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar12 = **(int **)(param_1 + 0x20);
    lVar14 = 0;
    if (iVar12 <= (int)(uint)uVar2) {
      do {
        uVar10 = uVar10 - iVar12;
        iVar12 = (*(int **)(param_1 + 0x20))[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (iVar12 <= (int)uVar10);
    }
    fVar18 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                       (longlong)(int)uVar10);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar12 = *(int *)(param_1 + 0x44);
    if (0 < iVar12) {
      pauVar15 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        fVar17 = logf(fVar18);
        auVar22._4_4_ = extraout_XMM0_Db_03;
        auVar22._0_4_ = fVar17;
        auVar22._8_4_ = extraout_XMM0_Dc_03;
        auVar22._12_4_ = extraout_XMM0_Dd_03;
        auVar23._4_12_ = auVar22._4_12_;
        auVar23._0_4_ = fVar17 * 1.442695;
        fVar17 = logf(fVar18);
        auVar21._4_4_ = extraout_XMM0_Db_04;
        auVar21._0_4_ = fVar17 * 1.442695;
        auVar21._8_4_ = extraout_XMM0_Dc_04;
        auVar21._12_4_ = extraout_XMM0_Dd_04;
        auVar21 = insertps(auVar23,auVar21,0x10);
        fVar17 = logf(fVar18);
        auVar8._4_4_ = extraout_XMM0_Db_05;
        auVar8._0_4_ = fVar17 * 1.442695;
        auVar8._8_4_ = extraout_XMM0_Dc_05;
        auVar8._12_4_ = extraout_XMM0_Dd_05;
        auVar21 = insertps(auVar21,auVar8,0x20);
        fVar17 = logf(fVar18);
        auVar9._4_4_ = extraout_XMM0_Db_06;
        auVar9._0_4_ = fVar17 * 1.442695;
        auVar9._8_4_ = extraout_XMM0_Dc_06;
        auVar9._12_4_ = extraout_XMM0_Dd_06;
        auVar21 = insertps(auVar21,auVar9,0x30);
        *pauVar15 = auVar21;
        iVar12 = iVar12 + -1;
        pauVar15 = pauVar15 + 1;
      } while (iVar12 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar14 = *(longlong *)(param_1 + 0x70);
    iVar12 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar11 = *(int *)(param_1 + 0x44);
    if (0 < iVar11) {
      uVar13 = (ulonglong)((uint)uVar2 * iVar12);
      do {
        pfVar1 = (float *)(lVar14 + uVar13);
        fVar17 = pfVar1[1];
        _X = pfVar1[3];
        fVar18 = *(float *)(lVar14 + 8 + uVar13);
        fVar16 = logf(*pfVar1);
        auVar19._4_4_ = extraout_XMM0_Db;
        auVar19._0_4_ = fVar16;
        auVar19._8_4_ = extraout_XMM0_Dc;
        auVar19._12_4_ = extraout_XMM0_Dd;
        auVar20._4_12_ = auVar19._4_12_;
        auVar20._0_4_ = fVar16 * 1.442695;
        fVar17 = logf(fVar17);
        auVar5._4_4_ = extraout_XMM0_Db_00;
        auVar5._0_4_ = fVar17 * 1.442695;
        auVar5._8_4_ = extraout_XMM0_Dc_00;
        auVar5._12_4_ = extraout_XMM0_Dd_00;
        auVar21 = insertps(auVar20,auVar5,0x10);
        fVar18 = logf(fVar18);
        auVar6._4_4_ = extraout_XMM0_Db_01;
        auVar6._0_4_ = fVar18 * 1.442695;
        auVar6._8_4_ = extraout_XMM0_Dc_01;
        auVar6._12_4_ = extraout_XMM0_Dd_01;
        auVar21 = insertps(auVar21,auVar6,0x20);
        fVar18 = logf(_X);
        auVar7._4_4_ = extraout_XMM0_Db_02;
        auVar7._0_4_ = fVar18 * 1.442695;
        auVar7._8_4_ = extraout_XMM0_Dc_02;
        auVar7._12_4_ = extraout_XMM0_Dd_02;
        auVar21 = insertps(auVar21,auVar7,0x30);
        *(undefined1 (*) [16])(lVar14 + (ulonglong)((uint)uVar3 * iVar12)) = auVar21;
        lVar14 = lVar14 + 0x10;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
  }
  return;
}



// FUNCTION 148033846 FUN_148033846 body=257 status=ok
// SIG undefined FUN_148033846(void)

void FUN_148033846(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar5 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar6 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar5 = uVar5 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar9 <= (int)uVar5);
    }
    local_38 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8) + (longlong)(int)uVar5);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70))
      ;
      uStack_34 = local_38;
      uStack_30 = local_38;
      uStack_2c = local_38;
      uVar10 = FUN_144afec76();
      do {
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc_00;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd_00;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar6 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar1 = (undefined4 *)(lVar6 + (ulonglong)((uint)uVar2 * iVar9));
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        uVar10 = FUN_144afec76(&local_48);
        puVar8 = (undefined8 *)(lVar6 + (ulonglong)((uint)uVar3 * iVar9));
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd;
        lVar6 = lVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 148033948 FUN_148033948 body=257 status=ok
// SIG undefined FUN_148033948(void)

void FUN_148033948(longlong param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar5 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar6 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar5 = uVar5 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar9 <= (int)uVar5);
    }
    local_38 = *(undefined4 *)
                (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8) + (longlong)(int)uVar5);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70))
      ;
      uStack_34 = local_38;
      uStack_30 = local_38;
      uStack_2c = local_38;
      uVar10 = FUN_144afed6c();
      do {
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc_00;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd_00;
        puVar8 = puVar8 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar6 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar1 = (undefined4 *)(lVar6 + (ulonglong)((uint)uVar2 * iVar9));
        local_48 = *puVar1;
        uStack_44 = puVar1[1];
        uStack_40 = puVar1[2];
        uStack_3c = puVar1[3];
        uVar10 = FUN_144afed6c(&local_48);
        puVar8 = (undefined8 *)(lVar6 + (ulonglong)((uint)uVar3 * iVar9));
        *puVar8 = uVar10;
        *(undefined4 *)(puVar8 + 1) = extraout_XMM0_Dc;
        *(undefined4 *)((longlong)puVar8 + 0xc) = extraout_XMM0_Dd;
        lVar6 = lVar6 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 148033a4a FUN_148033a4a body=406 status=ok
// SIG undefined FUN_148033a4a(void)

void FUN_148033a4a(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar9 <= (int)uVar7);
    }
    fVar15 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                       (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      pauVar12 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        fVar14 = tanf(fVar15);
        auVar18._4_4_ = extraout_XMM0_Db_03;
        auVar18._0_4_ = fVar14;
        auVar18._8_4_ = extraout_XMM0_Dc_03;
        auVar18._12_4_ = extraout_XMM0_Dd_03;
        fVar14 = tanf(fVar15);
        auVar22._4_4_ = extraout_XMM0_Db_04;
        auVar22._0_4_ = fVar14;
        auVar22._8_4_ = extraout_XMM0_Dc_04;
        auVar22._12_4_ = extraout_XMM0_Dd_04;
        fVar14 = tanf(fVar15);
        fVar16 = tanf(fVar15);
        auVar21 = insertps(auVar18,auVar22,0x10);
        auVar19._4_4_ = extraout_XMM0_Db_05;
        auVar19._0_4_ = fVar14;
        auVar19._8_4_ = extraout_XMM0_Dc_05;
        auVar19._12_4_ = extraout_XMM0_Dd_05;
        auVar19 = insertps(auVar21,auVar19,0x20);
        auVar21._4_4_ = extraout_XMM0_Db_06;
        auVar21._0_4_ = fVar16;
        auVar21._8_4_ = extraout_XMM0_Dc_06;
        auVar21._12_4_ = extraout_XMM0_Dd_06;
        auVar21 = insertps(auVar19,auVar21,0x30);
        *pauVar12 = auVar21;
        iVar9 = iVar9 + -1;
        pauVar12 = pauVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      uVar10 = (ulonglong)((uint)uVar2 * iVar9);
      do {
        pfVar1 = (float *)(lVar11 + uVar10);
        fVar14 = pfVar1[1];
        fVar16 = pfVar1[3];
        fVar15 = *(float *)(lVar11 + 8 + uVar10);
        fVar13 = tanf(*pfVar1);
        auVar20._4_4_ = extraout_XMM0_Db;
        auVar20._0_4_ = fVar13;
        auVar20._8_4_ = extraout_XMM0_Dc;
        auVar20._12_4_ = extraout_XMM0_Dd;
        fVar14 = tanf(fVar14);
        fVar15 = tanf(fVar15);
        auVar17._4_4_ = extraout_XMM0_Db_01;
        auVar17._0_4_ = fVar15;
        auVar17._8_4_ = extraout_XMM0_Dc_01;
        auVar17._12_4_ = extraout_XMM0_Dd_01;
        fVar15 = tanf(fVar16);
        auVar6._4_4_ = extraout_XMM0_Db_00;
        auVar6._0_4_ = fVar14;
        auVar6._8_4_ = extraout_XMM0_Dc_00;
        auVar6._12_4_ = extraout_XMM0_Dd_00;
        auVar21 = insertps(auVar20,auVar6,0x10);
        auVar21 = insertps(auVar21,auVar17,0x20);
        auVar5._4_4_ = extraout_XMM0_Db_02;
        auVar5._0_4_ = fVar15;
        auVar5._8_4_ = extraout_XMM0_Dc_02;
        auVar5._12_4_ = extraout_XMM0_Dd_02;
        auVar21 = insertps(auVar21,auVar5,0x30);
        *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar3 * iVar9)) = auVar21;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148033be0 FUN_148033be0 body=602 status=ok
// SIG undefined FUN_148033be0(void)

void FUN_148033be0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  undefined1 auVar16 [16];
  undefined1 extraout_var_03 [12];
  undefined1 extraout_var_04 [12];
  undefined1 extraout_var_05 [12];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var_02 [12];
  undefined1 extraout_var_06 [12];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar7 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar9 <= (int)(uint)uVar3) {
      do {
        uVar7 = uVar7 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar9 <= (int)uVar7);
    }
    fVar13 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                       (longlong)(int)uVar7);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      fVar14 = fVar13;
      if (1.0 <= fVar13) {
        fVar14 = 1.0;
      }
      fVar13 = (float)(~-(uint)(fVar13 < -1.0) & (uint)fVar14 | -(uint)(fVar13 < -1.0) & 0xbf800000)
      ;
      pauVar12 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        fVar14 = asinf(fVar13);
        auVar21._4_4_ = extraout_var_03._0_4_;
        auVar21._0_4_ = fVar14;
        auVar21._8_4_ = extraout_var_03._4_4_;
        auVar21._12_4_ = extraout_var_03._8_4_;
        fVar14 = asinf(fVar13);
        fVar15 = asinf(fVar13);
        auVar23._4_4_ = extraout_var_05._0_4_;
        auVar23._0_4_ = fVar15;
        auVar23._8_4_ = extraout_var_05._4_4_;
        auVar23._12_4_ = extraout_var_05._8_4_;
        auVar17._0_4_ = asinf(fVar13);
        auVar17._4_12_ = extraout_var_06;
        auVar20._4_4_ = extraout_var_04._0_4_;
        auVar20._0_4_ = fVar14;
        auVar20._8_4_ = extraout_var_04._4_4_;
        auVar20._12_4_ = extraout_var_04._8_4_;
        auVar20 = insertps(auVar21,auVar20,0x10);
        auVar20 = insertps(auVar20,auVar23,0x20);
        auVar20 = insertps(auVar20,auVar17,0x30);
        *pauVar12 = auVar20;
        iVar9 = iVar9 + -1;
        pauVar12 = pauVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      uVar10 = (ulonglong)((uint)uVar3 * iVar9);
      do {
        pfVar1 = (float *)(lVar11 + uVar10);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[3];
        fVar18 = fVar13;
        if (1.0 <= fVar13) {
          fVar18 = 1.0;
        }
        fVar2 = *(float *)(lVar11 + 8 + uVar10);
        fVar13 = asinf((float)(-(uint)(fVar13 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar13 < -1.0) & (uint)fVar18));
        auVar19._4_4_ = extraout_var._0_4_;
        auVar19._0_4_ = fVar13;
        auVar19._8_4_ = extraout_var._4_4_;
        auVar19._12_4_ = extraout_var._8_4_;
        fVar13 = fVar14;
        if (1.0 <= fVar14) {
          fVar13 = 1.0;
        }
        fVar14 = asinf((float)(-(uint)(fVar14 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar14 < -1.0) & (uint)fVar13));
        fVar13 = fVar2;
        if (1.0 <= fVar2) {
          fVar13 = 1.0;
        }
        fVar13 = asinf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar2 < -1.0) & (uint)fVar13));
        auVar22._4_4_ = extraout_var_01._0_4_;
        auVar22._0_4_ = fVar13;
        auVar22._8_4_ = extraout_var_01._4_4_;
        auVar22._12_4_ = extraout_var_01._8_4_;
        fVar13 = fVar15;
        if (1.0 <= fVar15) {
          fVar13 = 1.0;
        }
        auVar16._0_4_ =
             asinf((float)(-(uint)(fVar15 < -1.0) & 0xbf800000 |
                          ~-(uint)(fVar15 < -1.0) & (uint)fVar13));
        auVar16._4_12_ = extraout_var_02;
        auVar6._4_4_ = extraout_var_00._0_4_;
        auVar6._0_4_ = fVar14;
        auVar6._8_4_ = extraout_var_00._4_4_;
        auVar6._12_4_ = extraout_var_00._8_4_;
        auVar20 = insertps(auVar19,auVar6,0x10);
        auVar20 = insertps(auVar20,auVar22,0x20);
        auVar20 = insertps(auVar20,auVar16,0x30);
        *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar4 * iVar9)) = auVar20;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148033e3a FUN_148033e3a body=602 status=ok
// SIG undefined FUN_148033e3a(void)

void FUN_148033e3a(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  undefined1 auVar16 [16];
  undefined1 extraout_var_03 [12];
  undefined1 extraout_var_04 [12];
  undefined1 extraout_var_05 [12];
  undefined1 auVar17 [16];
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 extraout_var_02 [12];
  undefined1 extraout_var_06 [12];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar7 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar9 <= (int)(uint)uVar3) {
      do {
        uVar7 = uVar7 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar9 <= (int)uVar7);
    }
    fVar13 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                       (longlong)(int)uVar7);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      fVar14 = fVar13;
      if (1.0 <= fVar13) {
        fVar14 = 1.0;
      }
      fVar13 = (float)(~-(uint)(fVar13 < -1.0) & (uint)fVar14 | -(uint)(fVar13 < -1.0) & 0xbf800000)
      ;
      pauVar12 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        fVar14 = acosf(fVar13);
        auVar21._4_4_ = extraout_var_03._0_4_;
        auVar21._0_4_ = fVar14;
        auVar21._8_4_ = extraout_var_03._4_4_;
        auVar21._12_4_ = extraout_var_03._8_4_;
        fVar14 = acosf(fVar13);
        fVar15 = acosf(fVar13);
        auVar23._4_4_ = extraout_var_05._0_4_;
        auVar23._0_4_ = fVar15;
        auVar23._8_4_ = extraout_var_05._4_4_;
        auVar23._12_4_ = extraout_var_05._8_4_;
        auVar17._0_4_ = acosf(fVar13);
        auVar17._4_12_ = extraout_var_06;
        auVar20._4_4_ = extraout_var_04._0_4_;
        auVar20._0_4_ = fVar14;
        auVar20._8_4_ = extraout_var_04._4_4_;
        auVar20._12_4_ = extraout_var_04._8_4_;
        auVar20 = insertps(auVar21,auVar20,0x10);
        auVar20 = insertps(auVar20,auVar23,0x20);
        auVar20 = insertps(auVar20,auVar17,0x30);
        *pauVar12 = auVar20;
        iVar9 = iVar9 + -1;
        pauVar12 = pauVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      uVar10 = (ulonglong)((uint)uVar3 * iVar9);
      do {
        pfVar1 = (float *)(lVar11 + uVar10);
        fVar13 = *pfVar1;
        fVar14 = pfVar1[1];
        fVar15 = pfVar1[3];
        fVar18 = fVar13;
        if (1.0 <= fVar13) {
          fVar18 = 1.0;
        }
        fVar2 = *(float *)(lVar11 + 8 + uVar10);
        fVar13 = acosf((float)(-(uint)(fVar13 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar13 < -1.0) & (uint)fVar18));
        auVar19._4_4_ = extraout_var._0_4_;
        auVar19._0_4_ = fVar13;
        auVar19._8_4_ = extraout_var._4_4_;
        auVar19._12_4_ = extraout_var._8_4_;
        fVar13 = fVar14;
        if (1.0 <= fVar14) {
          fVar13 = 1.0;
        }
        fVar14 = acosf((float)(-(uint)(fVar14 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar14 < -1.0) & (uint)fVar13));
        fVar13 = fVar2;
        if (1.0 <= fVar2) {
          fVar13 = 1.0;
        }
        fVar13 = acosf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 |
                              ~-(uint)(fVar2 < -1.0) & (uint)fVar13));
        auVar22._4_4_ = extraout_var_01._0_4_;
        auVar22._0_4_ = fVar13;
        auVar22._8_4_ = extraout_var_01._4_4_;
        auVar22._12_4_ = extraout_var_01._8_4_;
        fVar13 = fVar15;
        if (1.0 <= fVar15) {
          fVar13 = 1.0;
        }
        auVar16._0_4_ =
             acosf((float)(-(uint)(fVar15 < -1.0) & 0xbf800000 |
                          ~-(uint)(fVar15 < -1.0) & (uint)fVar13));
        auVar16._4_12_ = extraout_var_02;
        auVar6._4_4_ = extraout_var_00._0_4_;
        auVar6._0_4_ = fVar14;
        auVar6._8_4_ = extraout_var_00._4_4_;
        auVar6._12_4_ = extraout_var_00._8_4_;
        auVar20 = insertps(auVar19,auVar6,0x10);
        auVar20 = insertps(auVar20,auVar22,0x20);
        auVar20 = insertps(auVar20,auVar16,0x30);
        *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar4 * iVar9)) = auVar20;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148034094 FUN_148034094 body=406 status=ok
// SIG undefined FUN_148034094(void)

void FUN_148034094(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Db_04;
  undefined4 extraout_XMM0_Db_05;
  undefined4 extraout_XMM0_Db_06;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dc_04;
  undefined4 extraout_XMM0_Dc_05;
  undefined4 extraout_XMM0_Dc_06;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  undefined4 extraout_XMM0_Dd_04;
  undefined4 extraout_XMM0_Dd_05;
  undefined4 extraout_XMM0_Dd_06;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar9 <= (int)uVar7);
    }
    fVar15 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                       (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      pauVar12 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      do {
        fVar14 = atanf(fVar15);
        auVar18._4_4_ = extraout_XMM0_Db_03;
        auVar18._0_4_ = fVar14;
        auVar18._8_4_ = extraout_XMM0_Dc_03;
        auVar18._12_4_ = extraout_XMM0_Dd_03;
        fVar14 = atanf(fVar15);
        auVar22._4_4_ = extraout_XMM0_Db_04;
        auVar22._0_4_ = fVar14;
        auVar22._8_4_ = extraout_XMM0_Dc_04;
        auVar22._12_4_ = extraout_XMM0_Dd_04;
        fVar14 = atanf(fVar15);
        fVar16 = atanf(fVar15);
        auVar21 = insertps(auVar18,auVar22,0x10);
        auVar19._4_4_ = extraout_XMM0_Db_05;
        auVar19._0_4_ = fVar14;
        auVar19._8_4_ = extraout_XMM0_Dc_05;
        auVar19._12_4_ = extraout_XMM0_Dd_05;
        auVar19 = insertps(auVar21,auVar19,0x20);
        auVar21._4_4_ = extraout_XMM0_Db_06;
        auVar21._0_4_ = fVar16;
        auVar21._8_4_ = extraout_XMM0_Dc_06;
        auVar21._12_4_ = extraout_XMM0_Dd_06;
        auVar21 = insertps(auVar19,auVar21,0x30);
        *pauVar12 = auVar21;
        iVar9 = iVar9 + -1;
        pauVar12 = pauVar12 + 1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      uVar10 = (ulonglong)((uint)uVar2 * iVar9);
      do {
        pfVar1 = (float *)(lVar11 + uVar10);
        fVar14 = pfVar1[1];
        fVar16 = pfVar1[3];
        fVar15 = *(float *)(lVar11 + 8 + uVar10);
        fVar13 = atanf(*pfVar1);
        auVar20._4_4_ = extraout_XMM0_Db;
        auVar20._0_4_ = fVar13;
        auVar20._8_4_ = extraout_XMM0_Dc;
        auVar20._12_4_ = extraout_XMM0_Dd;
        fVar14 = atanf(fVar14);
        fVar15 = atanf(fVar15);
        auVar17._4_4_ = extraout_XMM0_Db_01;
        auVar17._0_4_ = fVar15;
        auVar17._8_4_ = extraout_XMM0_Dc_01;
        auVar17._12_4_ = extraout_XMM0_Dd_01;
        fVar15 = atanf(fVar16);
        auVar6._4_4_ = extraout_XMM0_Db_00;
        auVar6._0_4_ = fVar14;
        auVar6._8_4_ = extraout_XMM0_Dc_00;
        auVar6._12_4_ = extraout_XMM0_Dd_00;
        auVar21 = insertps(auVar20,auVar6,0x10);
        auVar21 = insertps(auVar21,auVar17,0x20);
        auVar5._4_4_ = extraout_XMM0_Db_02;
        auVar5._0_4_ = fVar15;
        auVar5._8_4_ = extraout_XMM0_Dc_02;
        auVar5._12_4_ = extraout_XMM0_Dd_02;
        auVar21 = insertps(auVar21,auVar5,0x30);
        *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar3 * iVar9)) = auVar21;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14803422a FUN_14803422a body=58 status=ok
// SIG undefined FUN_14803422a(void)

void FUN_14803422a(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148037348();
    return;
  case 1:
    FUN_14803746e();
    return;
  case 2:
    FUN_148037590();
    return;
  case 3:
    FUN_1480376b4();
    return;
  default:
    return;
  }
}



// FUNCTION 148034264 FUN_148034264 body=218 status=ok
// SIG undefined FUN_148034264(void)

void FUN_148034264(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pauVar8 = (undefined1 (*) [16])
                ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = roundps(auVar10,auVar10,2);
      do {
        *pauVar8 = auVar10;
        pauVar8 = pauVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        in_XMM0 = roundps(in_XMM0,*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6)),2
                         );
        *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar6)) = in_XMM0;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14803433e FUN_14803433e body=218 status=ok
// SIG undefined FUN_14803433e(void)

void FUN_14803433e(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pauVar8 = (undefined1 (*) [16])
                ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = roundps(auVar10,auVar10,1);
      do {
        *pauVar8 = auVar10;
        pauVar8 = pauVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        in_XMM0 = roundps(in_XMM0,*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6)),1
                         );
        *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar6)) = in_XMM0;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148034418 FUN_148034418 body=265 status=ok
// SIG undefined FUN_148034418(void)

void FUN_148034418(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) +
                      (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pfVar8 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      auVar11._4_4_ = fVar1;
      auVar11._0_4_ = fVar1;
      auVar11._8_4_ = fVar1;
      auVar11._12_4_ = fVar1;
      auVar12 = roundps(in_XMM1,auVar11,3);
      auVar10._0_4_ = (fVar1 - auVar12._0_4_) * 1.9999999;
      auVar10._4_4_ = (fVar1 - auVar12._4_4_) * 1.9999999;
      auVar10._8_4_ = (fVar1 - auVar12._8_4_) * 1.9999999;
      auVar10._12_4_ = (fVar1 - auVar12._12_4_) * 1.9999999;
      auVar11 = roundps(auVar10,auVar10,3);
      do {
        *pfVar8 = auVar11._0_4_ + auVar12._0_4_;
        pfVar8[1] = auVar11._4_4_ + auVar12._4_4_;
        pfVar8[2] = auVar11._8_4_ + auVar12._8_4_;
        pfVar8[3] = auVar11._12_4_ + auVar12._12_4_;
        pfVar8 = pfVar8 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        auVar11 = *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6));
        in_XMM2 = roundps(in_XMM2,auVar11,3);
        auVar12._0_4_ = (auVar11._0_4_ - in_XMM2._0_4_) * 1.9999999;
        auVar12._4_4_ = (auVar11._4_4_ - in_XMM2._4_4_) * 1.9999999;
        auVar12._8_4_ = (auVar11._8_4_ - in_XMM2._8_4_) * 1.9999999;
        auVar12._12_4_ = (auVar11._12_4_ - in_XMM2._12_4_) * 1.9999999;
        auVar11 = roundps(auVar12,auVar12,3);
        pfVar8 = (float *)(lVar9 + (ulonglong)((uint)uVar3 * iVar6));
        *pfVar8 = auVar11._0_4_ + in_XMM2._0_4_;
        pfVar8[1] = auVar11._4_4_ + in_XMM2._4_4_;
        pfVar8[2] = auVar11._8_4_ + in_XMM2._8_4_;
        pfVar8[3] = auVar11._12_4_ + in_XMM2._12_4_;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148034522 FUN_148034522 body=58 status=ok
// SIG undefined FUN_148034522(void)

void FUN_148034522(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148037862();
    return;
  case 1:
    FUN_1480379e6();
    return;
  case 2:
    FUN_144b30efe();
    return;
  case 3:
    FUN_1438f2e92();
    return;
  default:
    return;
  }
}



// FUNCTION 14803455c FUN_14803455c body=227 status=ok
// SIG undefined FUN_14803455c(void)

void FUN_14803455c(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  longlong lVar9;
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) +
                      (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pfVar8 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      auVar10._4_4_ = fVar1;
      auVar10._0_4_ = fVar1;
      auVar10._8_4_ = fVar1;
      auVar10._12_4_ = fVar1;
      auVar10 = roundps(in_XMM1,auVar10,3);
      do {
        *pfVar8 = fVar1 - auVar10._0_4_;
        pfVar8[1] = fVar1 - auVar10._4_4_;
        pfVar8[2] = fVar1 - auVar10._8_4_;
        pfVar8[3] = fVar1 - auVar10._12_4_;
        pfVar8 = pfVar8 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        auVar10 = *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6));
        in_XMM1 = roundps(in_XMM1,auVar10,3);
        pfVar8 = (float *)(lVar9 + (ulonglong)((uint)uVar3 * iVar6));
        *pfVar8 = auVar10._0_4_ - in_XMM1._0_4_;
        pfVar8[1] = auVar10._4_4_ - in_XMM1._4_4_;
        pfVar8[2] = auVar10._8_4_ - in_XMM1._8_4_;
        pfVar8[3] = auVar10._12_4_ - in_XMM1._12_4_;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148034640 FUN_148034640 body=218 status=ok
// SIG undefined FUN_148034640(void)

void FUN_148034640(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar2) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar7);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pauVar8 = (undefined1 (*) [16])
                ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      auVar10._4_4_ = uVar1;
      auVar10._0_4_ = uVar1;
      auVar10._8_4_ = uVar1;
      auVar10._12_4_ = uVar1;
      auVar10 = roundps(auVar10,auVar10,3);
      do {
        *pauVar8 = auVar10;
        pauVar8 = pauVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        in_XMM0 = roundps(in_XMM0,*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6)),3
                         );
        *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar3 * iVar6)) = in_XMM0;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14803471a FUN_14803471a body=78 status=ok
// SIG undefined FUN_14803471a(void)

void FUN_14803471a(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148037c54();
    return;
  case 1:
    FUN_148037cca();
    return;
  case 2:
    FUN_1438f304e();
    return;
  case 3:
    FUN_148037d6c();
    return;
  case 4:
    FUN_148037e36();
    return;
  case 5:
    FUN_148037edc();
    return;
  case 6:
    FUN_144b310a4();
    return;
  case 7:
    FUN_144b3116e();
    return;
  default:
    return;
  }
}



// FUNCTION 148034768 FUN_148034768 body=58 status=ok
// SIG undefined FUN_148034768(void)

void FUN_148034768(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f30f4();
    return;
  case 1:
    FUN_1438f3154();
    return;
  case 2:
    FUN_144b31254();
    return;
  case 3:
    FUN_1438f31e0();
    return;
  default:
    return;
  }
}



// FUNCTION 1480347a2 FUN_1480347a2 body=58 status=ok
// SIG undefined FUN_1480347a2(void)

void FUN_1480347a2(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f3290();
    return;
  case 1:
    FUN_1438f32f0();
    return;
  case 2:
    FUN_144b312e4();
    return;
  case 3:
    FUN_1438f337c();
    return;
  default:
    return;
  }
}



// FUNCTION 1480347dc FUN_1480347dc body=58 status=ok
// SIG undefined FUN_1480347dc(void)

void FUN_1480347dc(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_148037fa8();
    return;
  case 1:
    FUN_14803807c();
    return;
  case 2:
    FUN_14063c8cc();
    return;
  case 3:
    FUN_14803816c();
    return;
  default:
    return;
  }
}



// FUNCTION 148034816 FUN_148034816 body=261 status=ok
// SIG undefined FUN_148034816(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148034816(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar9 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar3) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                      (longlong)(int)uVar9);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      pauVar10 = (undefined1 (*) [16])
                 ((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                 *(longlong *)(param_1 + 0x70));
      iVar7 = -(uint)(0.0 <= fVar2);
      auVar12._4_4_ = iVar7;
      auVar12._0_4_ = iVar7;
      auVar12._8_4_ = iVar7;
      auVar12._12_4_ = iVar7;
      auVar12 = blendvps(_DAT_1499319d0,_DAT_1499314a0,auVar12);
      do {
        *pauVar10 = auVar12;
        pauVar10 = pauVar10 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    auVar6 = _DAT_1499319d0;
    auVar12 = _DAT_1499314a0;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        auVar13._4_4_ = -(uint)(0.0 <= pfVar1[1]);
        auVar13._0_4_ = -(uint)(0.0 <= *pfVar1);
        auVar13._8_4_ = -(uint)(0.0 <= pfVar1[2]);
        auVar13._12_4_ = -(uint)(0.0 <= pfVar1[3]);
        auVar13 = blendvps(auVar6,auVar12,auVar13);
        *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar4 * iVar8)) = auVar13;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 14803491c FUN_14803491c body=58 status=ok
// SIG undefined FUN_14803491c(void)

void FUN_14803491c(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1480382e2();
    return;
  case 1:
    FUN_148038352();
    return;
  case 2:
    FUN_1480383f0();
    return;
  case 3:
    FUN_148038492();
    return;
  default:
    return;
  }
}



// FUNCTION 148034956 FUN_148034956 body=563 status=ok
// SIG undefined FUN_148034956(void)

void FUN_148034956(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar15 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar8 <= (int)(uint)uVar2) {
      do {
        uVar15 = uVar15 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar8 <= (int)uVar15);
    }
    fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) +
                      (longlong)(int)uVar15);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      pfVar10 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70));
      uVar15 = *(uint *)(param_1 + 0x8c);
      do {
        iVar14 = uVar15 * 0xbb38435;
        iVar11 = uVar15 * -0x4b9b4d07;
        iVar12 = uVar15 * 0x1c3c718d;
        uVar15 = uVar15 * 0x77a73631 + 0xf6ff3a94;
        auVar16 = insertps(ZEXT416((uint)((float)(uVar15 >> 9 | 0x3f800000) + -1.0)),
                           ZEXT416((uint)((float)(iVar12 + 0xf50d3da5U >> 9 | 0x3f800000) + -1.0)),
                           0x10);
        auVar16 = insertps(auVar16,ZEXT416((uint)((float)(iVar11 + 0x9d6f2492U >> 9 | 0x3f800000) +
                                                 -1.0)),0x20);
        auVar16 = insertps(auVar16,ZEXT416((uint)((float)(iVar14 + 0x3619636bU >> 9 | 0x3f800000) +
                                                 -1.0)),0x30);
        *pfVar10 = auVar16._0_4_ * fVar1;
        pfVar10[1] = auVar16._4_4_ * fVar1;
        pfVar10[2] = auVar16._8_4_ * fVar1;
        pfVar10[3] = auVar16._12_4_ * fVar1;
        pfVar10 = pfVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
      *(uint *)(param_1 + 0x8c) = uVar15;
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar14 = *(int *)(param_1 + 0x44);
    if (0 < iVar14) {
      uVar15 = *(uint *)(param_1 + 0x8c);
      do {
        iVar11 = uVar15 * 0xbb38435;
        iVar12 = uVar15 * -0x4b9b4d07;
        iVar13 = uVar15 * 0x1c3c718d;
        uVar15 = uVar15 * 0x77a73631 + 0xf6ff3a94;
        auVar16 = insertps(ZEXT416((uint)((float)(uVar15 >> 9 | 0x3f800000) + -1.0)),
                           ZEXT416((uint)((float)(iVar13 + 0xf50d3da5U >> 9 | 0x3f800000) + -1.0)),
                           0x10);
        auVar16 = insertps(auVar16,ZEXT416((uint)((float)(iVar12 + 0x9d6f2492U >> 9 | 0x3f800000) +
                                                 -1.0)),0x20);
        auVar16 = insertps(auVar16,ZEXT416((uint)((float)(iVar11 + 0x3619636bU >> 9 | 0x3f800000) +
                                                 -1.0)),0x30);
        pfVar10 = (float *)(lVar9 + (ulonglong)((uint)uVar2 * iVar8));
        fVar1 = *pfVar10;
        fVar5 = pfVar10[1];
        fVar6 = pfVar10[2];
        fVar7 = pfVar10[3];
        *(uint *)(param_1 + 0x8c) = uVar15;
        pfVar10 = (float *)(lVar9 + (ulonglong)((uint)uVar3 * iVar8));
        *pfVar10 = auVar16._0_4_ * fVar1;
        pfVar10[1] = auVar16._4_4_ * fVar5;
        pfVar10[2] = auVar16._8_4_ * fVar6;
        pfVar10[3] = auVar16._12_4_ * fVar7;
        lVar9 = lVar9 + 0x10;
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  return;
}



// FUNCTION 148034b8a FUN_148034b8a body=58 status=ok
// SIG undefined FUN_148034b8a(void)

void FUN_148034b8a(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b31496();
    return;
  case 1:
    FUN_1438f357e();
    return;
  case 2:
    FUN_144b314f6();
    return;
  case 3:
    FUN_1438f360c();
    return;
  default:
    return;
  }
}



// FUNCTION 148034bc4 FUN_148034bc4 body=58 status=ok
// SIG undefined FUN_148034bc4(void)

void FUN_148034bc4(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b31588();
    return;
  case 1:
    FUN_144b315e8();
    return;
  case 2:
    FUN_144b31676();
    return;
  case 3:
    FUN_1438f36c8();
    return;
  default:
    return;
  }
}



// FUNCTION 148034bfe FUN_148034bfe body=58 status=ok
// SIG undefined FUN_148034bfe(void)

void FUN_148034bfe(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b31708();
    return;
  case 1:
    FUN_1438f3784();
    return;
  case 2:
    FUN_144b31768();
    return;
  case 3:
    FUN_144b317fa();
    return;
  default:
    return;
  }
}



// FUNCTION 148034c38 FUN_148034c38 body=58 status=ok
// SIG undefined FUN_148034c38(void)

void FUN_148034c38(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b318b6();
    return;
  case 1:
    FUN_14803b99e();
    return;
  case 2:
    FUN_144b31916();
    return;
  case 3:
    FUN_144b319a8();
    return;
  default:
    return;
  }
}



// FUNCTION 148034c72 FUN_148034c72 body=58 status=ok
// SIG undefined FUN_148034c72(void)

void FUN_148034c72(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803ba2c();
    return;
  case 1:
    FUN_14803ba8c();
    return;
  case 2:
    FUN_144b31a64();
    return;
  case 3:
    FUN_14803bb1a();
    return;
  default:
    return;
  }
}



// FUNCTION 148034cac FUN_148034cac body=58 status=ok
// SIG undefined FUN_148034cac(void)

void FUN_148034cac(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f3812();
    return;
  case 1:
    FUN_144b31af6();
    return;
  case 2:
    FUN_1438f3872();
    return;
  case 3:
    FUN_14803bbda();
    return;
  default:
    return;
  }
}



// FUNCTION 148034ce6 FUN_148034ce6 body=210 status=ok
// SIG undefined FUN_148034ce6(void)

void FUN_148034ce6(longlong param_1)

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
  undefined1 *puVar10;
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
  
  puVar10 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar10 + 1;
  switch(*puVar10) {
  case 0:
    uVar5 = *(ushort *)(puVar10 + 1);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 3;
    lVar21 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar6 = *(ushort *)(puVar10 + 3);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 5;
    uVar7 = *(ushort *)(puVar10 + 5);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 7;
    uVar8 = *(ushort *)(puVar10 + 7);
    *(undefined1 **)(param_1 + 0x10) = puVar10 + 9;
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
    break;
  case 1:
    FUN_144b31c00();
    return;
  case 2:
    FUN_144b31cb6();
    return;
  case 3:
    FUN_144b31d62();
    return;
  case 4:
    FUN_144b31e3c();
    return;
  case 5:
    FUN_1438f3904();
    return;
  case 6:
    FUN_144b31ee8();
    return;
  case 7:
    FUN_1438f39d6();
    return;
  }
  return;
}



// FUNCTION 148034db8 FUN_148034db8 body=58 status=ok
// SIG undefined FUN_148034db8(void)

void FUN_148034db8(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b31fb8();
    return;
  case 1:
    FUN_144b3201a();
    return;
  case 2:
    FUN_144b320aa();
    return;
  case 3:
    FUN_1438f3abc();
    return;
  default:
    return;
  }
}



// FUNCTION 148034df2 FUN_148034df2 body=58 status=ok
// SIG undefined FUN_148034df2(void)

void FUN_148034df2(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f3b66();
    return;
  case 1:
    FUN_14803bc9a();
    return;
  case 2:
    FUN_1438f3bc8();
    return;
  case 3:
    FUN_1438f3c5c();
    return;
  default:
    return;
  }
}



// FUNCTION 148034e2c FUN_148034e2c body=58 status=ok
// SIG undefined FUN_148034e2c(void)

void FUN_148034e2c(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b3213e();
    return;
  case 1:
    FUN_1438f3d06();
    return;
  case 2:
    FUN_144b321a2();
    return;
  case 3:
    FUN_144b32238();
    return;
  default:
    return;
  }
}



// FUNCTION 148034e66 FUN_148034e66 body=58 status=ok
// SIG undefined FUN_148034e66(void)

void FUN_148034e66(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f3d98();
    return;
  case 1:
    FUN_14803bd2a();
    return;
  case 2:
    FUN_1438f3ef4();
    return;
  case 3:
    FUN_14803be94();
    return;
  default:
    return;
  }
}



// FUNCTION 148034ea0 FUN_148034ea0 body=78 status=ok
// SIG undefined FUN_148034ea0(void)

void FUN_148034ea0(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803bf70();
    return;
  case 1:
    FUN_14803bfec();
    return;
  case 2:
    FUN_1438f402c();
    return;
  case 3:
    FUN_14803c096();
    return;
  case 4:
    FUN_14803c166();
    return;
  case 5:
    FUN_14803c214();
    return;
  case 6:
    FUN_1438f40da();
    return;
  case 7:
    FUN_14803c2e8();
    return;
  default:
    return;
  }
}



// FUNCTION 148034eee FUN_148034eee body=58 status=ok
// SIG undefined FUN_148034eee(void)

void FUN_148034eee(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803c3d0();
    return;
  case 1:
    FUN_14803c434();
    return;
  case 2:
    FUN_1438f41ac();
    return;
  case 3:
    FUN_14803c4c6();
    return;
  default:
    return;
  }
}



// FUNCTION 148034f28 FUN_148034f28 body=58 status=ok
// SIG undefined FUN_148034f28(void)

void FUN_148034f28(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803c574();
    return;
  case 1:
    FUN_14803c5d8();
    return;
  case 2:
    FUN_144b322e4();
    return;
  case 3:
    FUN_144b3237a();
    return;
  default:
    return;
  }
}



// FUNCTION 148034f62 FUN_148034f62 body=222 status=ok
// SIG undefined FUN_148034f62(void)

void FUN_148034f62(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar1 = *(ushort *)(pcVar4 + 1);
    uVar7 = (uint)uVar1;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar6 = **(int **)(param_1 + 0x20);
    lVar9 = 0;
    if (iVar6 <= (int)(uint)uVar1) {
      do {
        uVar7 = uVar7 - iVar6;
        iVar6 = (*(int **)(param_1 + 0x20))[lVar9 + 1];
        lVar9 = lVar9 + 1;
      } while (iVar6 <= (int)uVar7);
    }
    uVar3 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar9 * 8) + (longlong)(int)uVar7);
    uVar1 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar6 = *(int *)(param_1 + 0x44);
    if (0 < iVar6) {
      pauVar8 = (undefined1 (*) [16])
                ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      auVar10._4_4_ = uVar3;
      auVar10._0_4_ = uVar3;
      auVar10._8_4_ = uVar3;
      auVar10._12_4_ = uVar3;
      auVar10 = pabsd(auVar10,auVar10);
      do {
        *pauVar8 = auVar10;
        pauVar8 = pauVar8 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar1 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar9 = *(longlong *)(param_1 + 0x70);
    iVar6 = *(int *)(param_1 + 0x80);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      do {
        in_XMM0 = pabsd(in_XMM0,*(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar1 * iVar6)));
        *(undefined1 (*) [16])(lVar9 + (ulonglong)((uint)uVar2 * iVar6)) = in_XMM0;
        lVar9 = lVar9 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 148035040 FUN_148035040 body=228 status=ok
// SIG undefined FUN_148035040(void)

void FUN_148035040(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar12 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar12 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar12;
        iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar12 <= (int)uVar9);
    }
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      piVar10 = (int *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      do {
        *piVar10 = -iVar12;
        piVar10[1] = -iVar12;
        piVar10[2] = -iVar12;
        piVar10[3] = SUB124(SUB1612((undefined1  [16])0x0,4),8) - iVar12;
        piVar10 = piVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar12 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        piVar10 = (int *)(lVar11 + (ulonglong)((uint)uVar2 * iVar12));
        iVar5 = piVar10[1];
        iVar6 = piVar10[2];
        iVar7 = piVar10[3];
        piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
        *piVar1 = -*piVar10;
        piVar1[1] = -iVar5;
        piVar1[2] = -iVar6;
        piVar1[3] = SUB124(SUB1612((undefined1  [16])0x0,4),8) - iVar7;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148035124 FUN_148035124 body=247 status=ok
// SIG undefined FUN_148035124(void)

void FUN_148035124(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  undefined1 in_XMM0 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar6 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar8 = 0;
    if (iVar9 <= (int)(uint)uVar2) {
      do {
        uVar6 = uVar6 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (iVar9 <= (int)uVar6);
    }
    iVar9 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar6
                    );
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      puVar7 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      uVar6 = iVar9 >> 0x1f;
      do {
        *puVar7 = uVar6 | 1;
        puVar7[1] = uVar6 | 1;
        puVar7[2] = uVar6 | 1;
        puVar7[3] = uVar6 | 1;
        puVar7 = puVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar8 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      auVar10 = pmovsxbd(in_XMM0,0x1010101);
      do {
        piVar1 = (int *)(lVar8 + (ulonglong)((uint)uVar2 * iVar9));
        auVar11._0_4_ = *piVar1 >> 0x1f;
        auVar11._4_4_ = piVar1[1] >> 0x1f;
        auVar11._8_4_ = piVar1[2] >> 0x1f;
        auVar11._12_4_ = piVar1[3] >> 0x1f;
        *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar3 * iVar9)) = auVar11 | auVar10;
        lVar8 = lVar8 + 0x10;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return;
}



// FUNCTION 14803521c FUN_14803521c body=363 status=ok
// SIG undefined FUN_14803521c(void)

void FUN_14803521c(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar1 = *(ushort *)(pcVar5 + 1);
    uVar7 = (uint)uVar1;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar6 = 0;
    if (iVar8 <= (int)(uint)uVar1) {
      do {
        uVar7 = uVar7 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar8 <= (int)uVar7);
    }
    iVar8 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar6 * 8) + (longlong)(int)uVar7
                    );
    uVar1 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar3 = *(int *)(param_1 + 0x40);
    if (0 < iVar3) {
      iVar4 = *(int *)(param_1 + 0x80);
      lVar6 = *(longlong *)(param_1 + 0x70);
      uVar7 = *(uint *)(param_1 + 0x8c);
      lVar9 = 0;
      do {
        uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
        *(int *)((ulonglong)((uint)uVar1 * iVar4) + lVar6 + lVar9 * 4) =
             (int)(((float)(uVar7 >> 9 | 0x3f800000) + -1.0) * (float)iVar8);
        lVar9 = lVar9 + 1;
      } while (iVar3 != (int)lVar9);
      *(uint *)(param_1 + 0x8c) = uVar7;
    }
  }
  else if (*pcVar5 == '\0') {
    uVar1 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar6 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar2 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar3 = *(int *)(param_1 + 0x40);
    if (0 < iVar3) {
      uVar7 = *(uint *)(param_1 + 0x8c);
      lVar9 = 0;
      do {
        uVar7 = uVar7 * 0xbb38435 + 0x3619636b;
        iVar4 = *(int *)((ulonglong)((uint)uVar1 * iVar8) + lVar6 + lVar9 * 4);
        *(uint *)(param_1 + 0x8c) = uVar7;
        *(int *)((ulonglong)((uint)uVar2 * iVar8) + lVar6 + lVar9 * 4) =
             (int)(((float)(uVar7 >> 9 | 0x3f800000) + -1.0) * (float)iVar4);
        lVar9 = lVar9 + 1;
      } while (iVar3 != (int)lVar9);
    }
  }
  return;
}



// FUNCTION 148035388 FUN_148035388 body=58 status=ok
// SIG undefined FUN_148035388(void)

void FUN_148035388(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f42ba();
    return;
  case 1:
    FUN_1438f431c();
    return;
  case 2:
    FUN_144b32428();
    return;
  case 3:
    FUN_1438f43ac();
    return;
  default:
    return;
  }
}



// FUNCTION 1480353c2 FUN_1480353c2 body=58 status=ok
// SIG undefined FUN_1480353c2(void)

void FUN_1480353c2(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b324bc();
    return;
  case 1:
    FUN_14803c9ae();
    return;
  case 2:
    FUN_144b32526();
    return;
  case 3:
    FUN_14803ca46();
    return;
  default:
    return;
  }
}



// FUNCTION 1480353fc FUN_1480353fc body=58 status=ok
// SIG undefined FUN_1480353fc(void)

void FUN_1480353fc(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f4464();
    return;
  case 1:
    FUN_1438f44c6();
    return;
  case 2:
    FUN_144b325c2();
    return;
  case 3:
    FUN_1438f4556();
    return;
  default:
    return;
  }
}



// FUNCTION 148035436 FUN_148035436 body=58 status=ok
// SIG undefined FUN_148035436(void)

void FUN_148035436(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f460e();
    return;
  case 1:
    FUN_14803cafe();
    return;
  case 2:
    FUN_1438f4678();
    return;
  case 3:
    FUN_14803cb96();
    return;
  default:
    return;
  }
}



// FUNCTION 148035470 FUN_148035470 body=58 status=ok
// SIG undefined FUN_148035470(void)

void FUN_148035470(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f4714();
    return;
  case 1:
    FUN_1438f4776();
    return;
  case 2:
    FUN_144b32656();
    return;
  case 3:
    FUN_144b326ea();
    return;
  default:
    return;
  }
}



// FUNCTION 1480354aa FUN_1480354aa body=58 status=ok
// SIG undefined FUN_1480354aa(void)

void FUN_1480354aa(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803cc4e();
    return;
  case 1:
    FUN_14803ccb8();
    return;
  case 2:
    FUN_144b327a2();
    return;
  case 3:
    FUN_144b3283e();
    return;
  default:
    return;
  }
}



// FUNCTION 1480354e4 FUN_1480354e4 body=58 status=ok
// SIG undefined FUN_1480354e4(void)

void FUN_1480354e4(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803cd50();
    return;
  case 1:
    FUN_14803cdb0();
    return;
  case 2:
    FUN_144b328f6();
    return;
  case 3:
    FUN_14803ce40();
    return;
  default:
    return;
  }
}



// FUNCTION 14803551e FUN_14803551e body=58 status=ok
// SIG undefined FUN_14803551e(void)

void FUN_14803551e(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803ceea();
    return;
  case 1:
    FUN_144b3298a();
    return;
  case 2:
    FUN_14803cf4a();
    return;
  case 3:
    FUN_14803cfde();
    return;
  default:
    return;
  }
}



// FUNCTION 148035558 FUN_148035558 body=58 status=ok
// SIG undefined FUN_148035558(void)

void FUN_148035558(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_1438f4806();
    return;
  case 1:
    FUN_14803d088();
    return;
  case 2:
    FUN_1438f4866();
    return;
  case 3:
    FUN_14803d118();
    return;
  default:
    return;
  }
}



// FUNCTION 148035592 FUN_148035592 body=232 status=ok
// SIG undefined FUN_148035592(void)

void FUN_148035592(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      puVar10 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      do {
        *puVar10 = uVar9 ^ 0xffffffff;
        puVar10[1] = uVar9 ^ 0xffffffff;
        puVar10[2] = uVar9 ^ 0xffffffff;
        puVar10[3] = uVar9 ^ 0xffffffff;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar10 = (uint *)(lVar11 + (ulonglong)((uint)uVar2 * iVar8));
        uVar9 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        *puVar1 = *puVar10 ^ 0xffffffff;
        puVar1[1] = uVar9 ^ 0xffffffff;
        puVar1[2] = uVar5 ^ 0xffffffff;
        puVar1[3] = uVar6 ^ 0xffffffff;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 14803567a FUN_14803567a body=58 status=ok
// SIG undefined FUN_14803567a(void)

void FUN_14803567a(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803d290();
    return;
  case 1:
    FUN_14803d334();
    return;
  case 2:
    FUN_144b32a1a();
    return;
  case 3:
    FUN_144b32ad4();
    return;
  default:
    return;
  }
}



// FUNCTION 1480356b4 FUN_1480356b4 body=58 status=ok
// SIG undefined FUN_1480356b4(void)

void FUN_1480356b4(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803d3f8();
    return;
  case 1:
    FUN_14803d49c();
    return;
  case 2:
    FUN_144b32b84();
    return;
  case 3:
    FUN_14803d560();
    return;
  default:
    return;
  }
}



// FUNCTION 1480356ee FUN_1480356ee body=58 status=ok
// SIG undefined FUN_1480356ee(void)

void FUN_1480356ee(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b32c3e();
    return;
  case 1:
    FUN_1438f48fa();
    return;
  case 2:
    FUN_1438f498a();
    return;
  case 3:
    FUN_14803d610();
    return;
  default:
    return;
  }
}



// FUNCTION 148035728 FUN_148035728 body=58 status=ok
// SIG undefined FUN_148035728(void)

void FUN_148035728(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_144b32c9e();
    return;
  case 1:
    FUN_14803d6ba();
    return;
  case 2:
    FUN_14803d74a();
    return;
  case 3:
    FUN_14803d7de();
    return;
  default:
    return;
  }
}



// FUNCTION 148035762 FUN_148035762 body=58 status=ok
// SIG undefined FUN_148035762(void)

void FUN_148035762(longlong param_1)

{
  undefined1 *puVar1;
  
  puVar1 = *(undefined1 **)(param_1 + 0x10);
  *(undefined1 **)(param_1 + 0x10) = puVar1 + 1;
  switch(*puVar1) {
  case 0:
    FUN_14803d888();
    return;
  case 1:
    FUN_14803d8e8();
    return;
  case 2:
    FUN_14803d978();
    return;
  case 3:
    FUN_14803da0c();
    return;
  default:
    return;
  }
}



// FUNCTION 14803579c FUN_14803579c body=232 status=ok
// SIG undefined FUN_14803579c(void)

void FUN_14803579c(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      puVar10 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      do {
        *puVar10 = uVar9 ^ 0xffffffff;
        puVar10[1] = uVar9 ^ 0xffffffff;
        puVar10[2] = uVar9 ^ 0xffffffff;
        puVar10[3] = uVar9 ^ 0xffffffff;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar10 = (uint *)(lVar11 + (ulonglong)((uint)uVar2 * iVar8));
        uVar9 = puVar10[1];
        uVar5 = puVar10[2];
        uVar6 = puVar10[3];
        puVar1 = (uint *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        *puVar1 = *puVar10 ^ 0xffffffff;
        puVar1[1] = uVar9 ^ 0xffffffff;
        puVar1[2] = uVar5 ^ 0xffffffff;
        puVar1[3] = uVar6 ^ 0xffffffff;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 148035884 FUN_148035884 body=214 status=ok
// SIG undefined FUN_148035884(void)

void FUN_148035884(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar10 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar12 = 0;
    if (iVar9 <= (int)(uint)uVar3) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                      (longlong)(int)uVar10);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      piVar11 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      do {
        *piVar11 = (int)fVar2;
        piVar11[1] = (int)fVar2;
        piVar11[2] = (int)fVar2;
        piVar11[3] = (int)fVar2;
        piVar11 = piVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar12 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar3 * iVar9));
        fVar2 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        piVar11 = (int *)(lVar12 + (ulonglong)((uint)uVar4 * iVar9));
        *piVar11 = (int)*pfVar1;
        piVar11[1] = (int)fVar2;
        piVar11[2] = (int)fVar6;
        piVar11[3] = (int)fVar7;
        lVar12 = lVar12 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 14803595a FUN_14803595a body=215 status=ok
// SIG undefined FUN_14803595a(void)

void FUN_14803595a(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  float *pfVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar12 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar12 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar12;
        iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar12 <= (int)uVar9);
    }
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      pfVar10 = (float *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                         *(longlong *)(param_1 + 0x70));
      fVar13 = (float)iVar12;
      do {
        *pfVar10 = fVar13;
        pfVar10[1] = fVar13;
        pfVar10[2] = fVar13;
        pfVar10[3] = fVar13;
        pfVar10 = pfVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar12 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar2 * iVar12));
        iVar5 = piVar1[1];
        iVar6 = piVar1[2];
        iVar7 = piVar1[3];
        pfVar10 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
        *pfVar10 = (float)*piVar1;
        pfVar10[1] = (float)iVar5;
        pfVar10[2] = (float)iVar6;
        pfVar10[3] = (float)iVar7;
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148035a32 FUN_148035a32 body=220 status=ok
// SIG undefined FUN_148035a32(void)

void FUN_148035a32(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  longlong lVar12;
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar10 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar12 = 0;
    if (iVar9 <= (int)(uint)uVar3) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    fVar2 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) +
                      (longlong)(int)uVar10);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      piVar11 = (int *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      iVar8 = -(uint)(0.0 < fVar2);
      do {
        *piVar11 = iVar8;
        piVar11[1] = iVar8;
        piVar11[2] = iVar8;
        piVar11[3] = iVar8;
        piVar11 = piVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar12 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar3 * iVar9));
        fVar2 = pfVar1[1];
        fVar6 = pfVar1[2];
        fVar7 = pfVar1[3];
        piVar11 = (int *)(lVar12 + (ulonglong)((uint)uVar4 * iVar9));
        *piVar11 = -(uint)(0.0 < *pfVar1);
        piVar11[1] = -(uint)(0.0 < fVar2);
        piVar11[2] = -(uint)(0.0 < fVar6);
        piVar11[3] = -(uint)(0.0 < fVar7);
        lVar12 = lVar12 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148035b0e FUN_148035b0e body=238 status=ok
// SIG undefined FUN_148035b0e(void)

void FUN_148035b0e(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  ushort uVar4;
  char *pcVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  
  pcVar5 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar5 + 1;
  if (*pcVar5 == '\x01') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    uVar9 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    iVar8 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar8 <= (int)(uint)uVar3) {
      do {
        uVar9 = uVar9 - iVar8;
        iVar8 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar8 <= (int)uVar9);
    }
    uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar3 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      puVar10 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                        *(longlong *)(param_1 + 0x70));
      do {
        *puVar10 = uVar9 & 0x3f800000;
        puVar10[1] = uVar9 & 0x3f800000;
        puVar10[2] = uVar9 & 0x3f800000;
        puVar10[3] = uVar9 & 0x3f800000;
        puVar10 = puVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar5 == '\0') {
    uVar3 = *(ushort *)(pcVar5 + 1);
    *(char **)(param_1 + 0x10) = pcVar5 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar8 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar5 + 3);
    *(char **)(param_1 + 0x10) = pcVar5 + 5;
    iVar7 = *(int *)(param_1 + 0x44);
    if (0 < iVar7) {
      do {
        puVar1 = (ulonglong *)(lVar11 + (ulonglong)((uint)uVar3 * iVar8));
        uVar6 = puVar1[1];
        puVar2 = (ulonglong *)(lVar11 + (ulonglong)((uint)uVar4 * iVar8));
        *puVar2 = *puVar1 & 0x3f8000003f800000;
        puVar2[1] = uVar6 & 0x3f8000003f800000;
        lVar11 = lVar11 + 0x10;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return;
}



// FUNCTION 148035bfc FUN_148035bfc body=232 status=ok
// SIG undefined FUN_148035bfc(void)

void FUN_148035bfc(longlong param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  longlong lVar11;
  int iVar12;
  
  pcVar4 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar4 + 1;
  if (*pcVar4 == '\x01') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    uVar9 = (uint)uVar2;
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    iVar12 = **(int **)(param_1 + 0x20);
    lVar11 = 0;
    if (iVar12 <= (int)(uint)uVar2) {
      do {
        uVar9 = uVar9 - iVar12;
        iVar12 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
        lVar11 = lVar11 + 1;
      } while (iVar12 <= (int)uVar9);
    }
    iVar12 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) +
                     (longlong)(int)uVar9);
    uVar2 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      piVar10 = (int *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      do {
        *piVar10 = -(uint)(0 < iVar12);
        piVar10[1] = -(uint)(0 < iVar12);
        piVar10[2] = -(uint)(0 < iVar12);
        piVar10[3] = -(uint)(0 < iVar12);
        piVar10 = piVar10 + 4;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  else if (*pcVar4 == '\0') {
    uVar2 = *(ushort *)(pcVar4 + 1);
    *(char **)(param_1 + 0x10) = pcVar4 + 3;
    lVar11 = *(longlong *)(param_1 + 0x70);
    iVar12 = *(int *)(param_1 + 0x80);
    uVar3 = *(ushort *)(pcVar4 + 3);
    *(char **)(param_1 + 0x10) = pcVar4 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        piVar10 = (int *)(lVar11 + (ulonglong)((uint)uVar2 * iVar12));
        iVar5 = piVar10[1];
        iVar6 = piVar10[2];
        iVar7 = piVar10[3];
        piVar1 = (int *)(lVar11 + (ulonglong)((uint)uVar3 * iVar12));
        *piVar1 = -(uint)(0 < *piVar10);
        piVar1[1] = -(uint)(0 < iVar5);
        piVar1[2] = -(uint)(0 < iVar6);
        piVar1[3] = -(uint)(0 < iVar7);
        lVar11 = lVar11 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148035ce4 FUN_148035ce4 body=237 status=ok
// SIG undefined FUN_148035ce4(void)

void FUN_148035ce4(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  
  pcVar3 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar3 + 1;
  if (*pcVar3 == '\x01') {
    uVar1 = *(ushort *)(pcVar3 + 1);
    uVar6 = (uint)uVar1;
    *(char **)(param_1 + 0x10) = pcVar3 + 3;
    iVar5 = **(int **)(param_1 + 0x20);
    lVar8 = 0;
    if (iVar5 <= (int)(uint)uVar1) {
      do {
        uVar6 = uVar6 - iVar5;
        iVar5 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (iVar5 <= (int)uVar6);
    }
    uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) +
                     (longlong)(int)uVar6);
    uVar1 = *(ushort *)(pcVar3 + 3);
    *(char **)(param_1 + 0x10) = pcVar3 + 5;
    iVar5 = *(int *)(param_1 + 0x44);
    if (0 < iVar5) {
      puVar7 = (uint *)((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) +
                       *(longlong *)(param_1 + 0x70));
      do {
        *puVar7 = uVar6 & 1;
        puVar7[1] = uVar6 & 1;
        puVar7[2] = uVar6 & 1;
        puVar7[3] = uVar6 & 1;
        puVar7 = puVar7 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  else if (*pcVar3 == '\0') {
    uVar1 = *(ushort *)(pcVar3 + 1);
    *(char **)(param_1 + 0x10) = pcVar3 + 3;
    lVar8 = *(longlong *)(param_1 + 0x70);
    iVar5 = *(int *)(param_1 + 0x80);
    uVar2 = *(ushort *)(pcVar3 + 3);
    *(char **)(param_1 + 0x10) = pcVar3 + 5;
    iVar4 = *(int *)(param_1 + 0x44);
    if (0 < iVar4) {
      auVar9 = pmovsxbd(in_XMM0,0x1010101);
      do {
        *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar2 * iVar5)) =
             *(undefined1 (*) [16])(lVar8 + (ulonglong)((uint)uVar1 * iVar5)) & auVar9;
        lVar8 = lVar8 + 0x10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}



// FUNCTION 148035dd2 FUN_148035dd2 body=209 status=ok
// SIG undefined FUN_148035dd2(void)

void FUN_148035dd2(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  pcVar6 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar6 + 1;
  if (*pcVar6 == '\x01') {
    uVar4 = *(ushort *)(pcVar6 + 1);
    uVar10 = (uint)uVar4;
    *(char **)(param_1 + 0x10) = pcVar6 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar12 = 0;
    if (iVar9 <= (int)(uint)uVar4) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    uVar3 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) + (longlong)(int)uVar10);
    uVar4 = *(ushort *)(pcVar6 + 3);
    *(char **)(param_1 + 0x10) = pcVar6 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      puVar11 = (undefined4 *)
                ((ulonglong)((uint)uVar4 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      do {
        *puVar11 = uVar3;
        puVar11[1] = uVar3;
        puVar11[2] = uVar3;
        puVar11[3] = uVar3;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar6 == '\0') {
    uVar4 = *(ushort *)(pcVar6 + 1);
    *(char **)(param_1 + 0x10) = pcVar6 + 3;
    lVar12 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar5 = *(ushort *)(pcVar6 + 3);
    *(char **)(param_1 + 0x10) = pcVar6 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        puVar1 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar4 * iVar9));
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar5 * iVar9));
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        lVar12 = lVar12 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 148035ea4 FUN_148035ea4 body=213 status=ok
// SIG undefined FUN_148035ea4(void)

void FUN_148035ea4(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong lVar12;
  
  pcVar6 = *(char **)(param_1 + 0x10);
  *(char **)(param_1 + 0x10) = pcVar6 + 1;
  if (*pcVar6 == '\x01') {
    uVar3 = *(ushort *)(pcVar6 + 1);
    uVar10 = (uint)uVar3;
    *(char **)(param_1 + 0x10) = pcVar6 + 3;
    iVar9 = **(int **)(param_1 + 0x20);
    lVar12 = 0;
    if (iVar9 <= (int)(uint)uVar3) {
      do {
        uVar10 = uVar10 - iVar9;
        iVar9 = (*(int **)(param_1 + 0x20))[lVar12 + 1];
        lVar12 = lVar12 + 1;
      } while (iVar9 <= (int)uVar10);
    }
    uVar5 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar12 * 8) + (longlong)(int)uVar10);
    uVar3 = *(ushort *)(pcVar6 + 3);
    *(char **)(param_1 + 0x10) = pcVar6 + 5;
    iVar9 = *(int *)(param_1 + 0x44);
    if (0 < iVar9) {
      puVar11 = (undefined4 *)
                ((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70)
                );
      do {
        *puVar11 = uVar5;
        puVar11[1] = uVar5;
        puVar11[2] = uVar5;
        puVar11[3] = uVar5;
        puVar11 = puVar11 + 4;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  else if (*pcVar6 == '\0') {
    uVar3 = *(ushort *)(pcVar6 + 1);
    *(char **)(param_1 + 0x10) = pcVar6 + 3;
    lVar12 = *(longlong *)(param_1 + 0x70);
    iVar9 = *(int *)(param_1 + 0x80);
    uVar4 = *(ushort *)(pcVar6 + 3);
    *(char **)(param_1 + 0x10) = pcVar6 + 5;
    iVar8 = *(int *)(param_1 + 0x44);
    if (0 < iVar8) {
      do {
        puVar1 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar3 * iVar9));
        uVar7 = puVar1[1];
        puVar2 = (undefined8 *)(lVar12 + (ulonglong)((uint)uVar4 * iVar9));
        *puVar2 = *puVar1;
        puVar2[1] = uVar7;
        lVar12 = lVar12 + 0x10;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}



// FUNCTION 1480363ca FUN_1480363ca body=221 status=ok
// SIG undefined FUN_1480363ca(void)

void FUN_1480363ca(longlong param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  longlong lVar7;
  uint *puVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  float fVar12;
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  uVar2 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  uVar3 = puVar5[2];
  *(ushort **)(param_1 + 0x10) = puVar5 + 3;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    lVar6 = *(longlong *)(param_1 + 0x50);
    uVar10 = (ulonglong)((uint)uVar1 * 0xa0);
    lVar7 = *(longlong *)
             (*(longlong *)(lVar6 + uVar10) +
             (longlong)(int)((uint)uVar2 + *(int *)(lVar6 + 0x28 + uVar10)) * 8);
    iVar4 = *(int *)(lVar6 + 0x3c + uVar10);
    puVar8 = (uint *)((ulonglong)((uint)uVar3 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    do {
      uVar1 = *(ushort *)(lVar7 + (longlong)iVar4 * 2);
      uVar11 = (uint)uVar1 << 0xd;
      if ((uVar11 & 0xf800000) == 0xf800000) {
        fVar12 = (float)(uVar11 | 0x70000000);
      }
      else if ((uVar11 & 0xf800000) == 0) {
        fVar12 = (float)(uVar11 | 0x38800000) + -6.1035156e-05;
      }
      else {
        fVar12 = (float)((uVar11 & 0xfffe000) + 0x38000000);
      }
      uVar11 = (int)(short)uVar1 & 0x80000000U | (uint)fVar12;
      *puVar8 = uVar11;
      puVar8[1] = uVar11;
      puVar8[2] = uVar11;
      puVar8[3] = uVar11;
      puVar8 = puVar8 + 4;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 1480364a8 FUN_1480364a8 body=217 status=ok
// SIG undefined FUN_1480364a8(void)

void FUN_1480364a8(longlong param_1)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  
  puVar7 = *(ushort **)(param_1 + 0x10);
  piVar8 = *(int **)(param_1 + 0x20);
  uVar4 = *puVar7;
  *(ushort **)(param_1 + 0x10) = puVar7 + 1;
  lVar12 = *(longlong *)(param_1 + 0x70);
  iVar6 = *(int *)(param_1 + 0x80);
  uVar5 = puVar7[1];
  uVar13 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 2;
  iVar11 = *piVar8;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar8[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  fVar15 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                     (longlong)(int)uVar13);
  uVar5 = puVar7[2];
  uVar13 = (uint)uVar5;
  *(ushort **)(param_1 + 0x10) = puVar7 + 3;
  iVar11 = *piVar8;
  lVar14 = 0;
  if (iVar11 <= (int)(uint)uVar5) {
    do {
      uVar13 = uVar13 - iVar11;
      iVar11 = piVar8[lVar14 + 1];
      lVar14 = lVar14 + 1;
    } while (iVar11 <= (int)uVar13);
  }
  fVar3 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar14 * 8) +
                    (longlong)(int)uVar13);
  uVar5 = puVar7[3];
  *(ushort **)(param_1 + 0x10) = puVar7 + 4;
  iVar11 = *(int *)(param_1 + 0x44);
  if (0 < iVar11) {
    fVar16 = 1.0 - fVar3;
    fVar15 = fVar15 * fVar3;
    do {
      pfVar1 = (float *)(lVar12 + (ulonglong)((uint)uVar4 * iVar6));
      fVar3 = pfVar1[1];
      fVar9 = pfVar1[2];
      fVar10 = pfVar1[3];
      pfVar2 = (float *)(lVar12 + (ulonglong)((uint)uVar5 * iVar6));
      *pfVar2 = *pfVar1 * fVar16 + fVar15;
      pfVar2[1] = fVar3 * fVar16 + fVar15;
      pfVar2[2] = fVar9 * fVar16 + fVar15;
      pfVar2[3] = fVar10 * fVar16 + fVar15;
      lVar12 = lVar12 + 0x10;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  return;
}



// FUNCTION 148036698 FUN_148036698 body=108 status=ok
// SIG undefined FUN_148036698(void)

void FUN_148036698(longlong param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  longlong lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar7 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    do {
      puVar1 = (undefined4 *)(lVar7 + (ulonglong)((uint)uVar3 * iVar5));
      local_38 = *puVar1;
      uStack_34 = puVar1[1];
      uStack_30 = puVar1[2];
      uStack_2c = puVar1[3];
      uVar9 = FUN_14276fd37(&local_38);
      puVar2 = (undefined8 *)(lVar7 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = uVar9;
      *(undefined4 *)(puVar2 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar2 + 0xc) = extraout_XMM0_Dd;
      lVar7 = lVar7 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 148036704 FUN_148036704 body=134 status=ok
// SIG undefined FUN_148036704(void)

void FUN_148036704(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar6 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar3 = uVar3 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
      lVar6 = lVar6 + 1;
    } while (iVar5 <= (int)uVar3);
  }
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    uVar7 = FUN_14276fd37();
    do {
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar4 + 0xc) = extraout_XMM0_Dd;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 14803678a FUN_14803678a body=203 status=ok
// SIG undefined FUN_14803678a(void)

void FUN_14803678a(longlong param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar15 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar13 = *(int *)(param_1 + 0x44);
  if (0 < iVar13) {
    uVar14 = (ulonglong)((uint)uVar3 * iVar5);
    do {
      puVar1 = (undefined4 *)(lVar15 + uVar14);
      uVar11 = puVar1[1];
      uVar12 = puVar1[3];
      uVar2 = *(undefined4 *)(lVar15 + 8 + uVar14);
      auVar16._0_8_ = exp2f(*puVar1);
      auVar16._8_4_ = extraout_XMM0_Dc;
      auVar16._12_4_ = extraout_XMM0_Dd;
      uVar10 = exp2f(uVar11);
      uVar8 = exp2f(uVar2);
      uVar7 = exp2f(uVar12);
      auVar9._8_4_ = extraout_XMM0_Dc_00;
      auVar9._0_8_ = uVar10;
      auVar9._12_4_ = extraout_XMM0_Dd_00;
      auVar17 = insertps(auVar16,auVar9,0x10);
      auVar18._8_4_ = extraout_XMM0_Dc_01;
      auVar18._0_8_ = uVar8;
      auVar18._12_4_ = extraout_XMM0_Dd_01;
      auVar18 = insertps(auVar17,auVar18,0x20);
      auVar17._8_4_ = extraout_XMM0_Dc_02;
      auVar17._0_8_ = uVar7;
      auVar17._12_4_ = extraout_XMM0_Dd_02;
      auVar17 = insertps(auVar18,auVar17,0x30);
      *(undefined1 (*) [16])(lVar15 + (ulonglong)((uint)uVar4 * iVar5)) = auVar17;
      lVar15 = lVar15 + 0x10;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  return;
}



// FUNCTION 148036856 FUN_148036856 body=229 status=ok
// SIG undefined FUN_148036856(void)

void FUN_148036856(longlong param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar3;
  uVar8 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar9 = **(int **)(param_1 + 0x20);
  lVar11 = 0;
  if (iVar9 <= (int)(uint)uVar2) {
    do {
      uVar8 = uVar8 - iVar9;
      iVar9 = (*(int **)(param_1 + 0x20))[lVar11 + 1];
      lVar11 = lVar11 + 1;
    } while (iVar9 <= (int)uVar8);
  }
  uVar1 = *(undefined4 *)
           (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar11 * 8) + (longlong)(int)uVar8);
  uVar2 = puVar3[1];
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    pauVar10 = (undefined1 (*) [16])
               ((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70))
    ;
    do {
      auVar12._0_8_ = exp2f(uVar1);
      auVar12._8_4_ = extraout_XMM0_Dc;
      auVar12._12_4_ = extraout_XMM0_Dd;
      uVar5 = exp2f(uVar1);
      uVar7 = exp2f(uVar1);
      uVar4 = exp2f(uVar1);
      auVar14._8_4_ = extraout_XMM0_Dc_00;
      auVar14._0_8_ = uVar5;
      auVar14._12_4_ = extraout_XMM0_Dd_00;
      auVar13 = insertps(auVar12,auVar14,0x10);
      auVar6._8_4_ = extraout_XMM0_Dc_01;
      auVar6._0_8_ = uVar7;
      auVar6._12_4_ = extraout_XMM0_Dd_01;
      auVar14 = insertps(auVar13,auVar6,0x20);
      auVar13._8_4_ = extraout_XMM0_Dc_02;
      auVar13._0_8_ = uVar4;
      auVar13._12_4_ = extraout_XMM0_Dd_02;
      auVar13 = insertps(auVar14,auVar13,0x30);
      *pauVar10 = auVar13;
      iVar9 = iVar9 + -1;
      pauVar10 = pauVar10 + 1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 14803693c FUN_14803693c body=128 status=ok
// SIG undefined FUN_14803693c(void)

void FUN_14803693c(longlong param_1)

{
  float *pfVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  int iVar12;
  undefined8 uVar13;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar12 = *(int *)(param_1 + 0x44);
  if (0 < iVar12) {
    do {
      pfVar1 = (float *)(lVar11 + (ulonglong)((uint)uVar3 * iVar5));
      local_48 = *pfVar1;
      fStack_44 = pfVar1[1];
      fStack_40 = pfVar1[2];
      fStack_3c = pfVar1[3];
      bVar7 = 0.0 < local_48;
      bVar8 = 0.0 < fStack_44;
      bVar9 = 0.0 < fStack_40;
      bVar10 = 0.0 < fStack_3c;
      uVar13 = FUN_14063caf8(&local_48);
      puVar2 = (uint *)(lVar11 + (ulonglong)((uint)uVar4 * iVar5));
      *puVar2 = (uint)uVar13 & -(uint)bVar7;
      puVar2[1] = (uint)((ulonglong)uVar13 >> 0x20) & -(uint)bVar8;
      puVar2[2] = extraout_XMM0_Dc & -(uint)bVar9;
      puVar2[3] = extraout_XMM0_Dd & -(uint)bVar10;
      lVar11 = lVar11 + 0x10;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return;
}



// FUNCTION 1480369bc FUN_1480369bc body=154 status=ok
// SIG undefined FUN_1480369bc(void)

void FUN_1480369bc(longlong param_1)

{
  float fVar1;
  ushort uVar2;
  ushort *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dd;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar3;
  uVar4 = (uint)uVar2;
  *(ushort **)(param_1 + 0x10) = puVar3 + 1;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar7 = 0;
  if (iVar6 <= (int)(uint)uVar2) {
    do {
      uVar4 = uVar4 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar6 <= (int)uVar4);
  }
  fVar1 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) + (longlong)(int)uVar4
                    );
  uVar2 = puVar3[1];
  *(ushort **)(param_1 + 0x10) = puVar3 + 2;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    puVar5 = (uint *)((ulonglong)((uint)uVar2 * *(int *)(param_1 + 0x80)) +
                     *(longlong *)(param_1 + 0x70));
    uVar8 = FUN_14063caf8();
    do {
      *puVar5 = (uint)uVar8 & -(uint)(0.0 < fVar1);
      puVar5[1] = (uint)((ulonglong)uVar8 >> 0x20) & -(uint)(0.0 < fVar1);
      puVar5[2] = extraout_XMM0_Dc & -(uint)(0.0 < fVar1);
      puVar5[3] = extraout_XMM0_Dd & -(uint)(0.0 < fVar1);
      puVar5 = puVar5 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 148036a56 FUN_148036a56 body=225 status=ok
// SIG undefined FUN_148036a56(void)

void FUN_148036a56(longlong param_1)

{
  float *pfVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort *puVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float _X;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
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
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  puVar5 = *(ushort **)(param_1 + 0x10);
  uVar2 = *puVar5;
  *(ushort **)(param_1 + 0x10) = puVar5 + 1;
  lVar10 = *(longlong *)(param_1 + 0x70);
  iVar4 = *(int *)(param_1 + 0x80);
  uVar3 = puVar5[1];
  *(ushort **)(param_1 + 0x10) = puVar5 + 2;
  iVar8 = *(int *)(param_1 + 0x44);
  if (0 < iVar8) {
    uVar9 = (ulonglong)((uint)uVar2 * iVar4);
    do {
      pfVar1 = (float *)(lVar10 + uVar9);
      fVar12 = pfVar1[1];
      _X = pfVar1[3];
      fVar13 = *(float *)(lVar10 + 8 + uVar9);
      fVar11 = logf(*pfVar1);
      auVar14._4_4_ = extraout_XMM0_Db;
      auVar14._0_4_ = fVar11;
      auVar14._8_4_ = extraout_XMM0_Dc;
      auVar14._12_4_ = extraout_XMM0_Dd;
      auVar15._4_12_ = auVar14._4_12_;
      auVar15._0_4_ = fVar11 * 1.442695;
      fVar12 = logf(fVar12);
      auVar16._4_4_ = extraout_XMM0_Db_00;
      auVar16._0_4_ = fVar12 * 1.442695;
      auVar16._8_4_ = extraout_XMM0_Dc_00;
      auVar16._12_4_ = extraout_XMM0_Dd_00;
      auVar16 = insertps(auVar15,auVar16,0x10);
      fVar13 = logf(fVar13);
      auVar6._4_4_ = extraout_XMM0_Db_01;
      auVar6._0_4_ = fVar13 * 1.442695;
      auVar6._8_4_ = extraout_XMM0_Dc_01;
      auVar6._12_4_ = extraout_XMM0_Dd_01;
      auVar16 = insertps(auVar16,auVar6,0x20);
      fVar13 = logf(_X);
      auVar7._4_4_ = extraout_XMM0_Db_02;
      auVar7._0_4_ = fVar13 * 1.442695;
      auVar7._8_4_ = extraout_XMM0_Dc_02;
      auVar7._12_4_ = extraout_XMM0_Dd_02;
      auVar16 = insertps(auVar16,auVar7,0x30);
      *(undefined1 (*) [16])(lVar10 + (ulonglong)((uint)uVar3 * iVar4)) = auVar16;
      lVar10 = lVar10 + 0x10;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return;
}



// FUNCTION 148036b38 FUN_148036b38 body=235 status=ok
// SIG undefined FUN_148036b38(void)

void FUN_148036b38(longlong param_1)

{
  float _X;
  ushort uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  float fVar9;
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
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar5 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar6 = **(int **)(param_1 + 0x20);
  lVar8 = 0;
  if (iVar6 <= (int)(uint)uVar1) {
    do {
      uVar5 = uVar5 - iVar6;
      iVar6 = (*(int **)(param_1 + 0x20))[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (iVar6 <= (int)uVar5);
  }
  _X = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar8 * 8) + (longlong)(int)uVar5);
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar6 = *(int *)(param_1 + 0x44);
  if (0 < iVar6) {
    pauVar7 = (undefined1 (*) [16])
              ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    do {
      fVar9 = logf(_X);
      auVar10._4_4_ = extraout_XMM0_Db;
      auVar10._0_4_ = fVar9;
      auVar10._8_4_ = extraout_XMM0_Dc;
      auVar10._12_4_ = extraout_XMM0_Dd;
      auVar11._4_12_ = auVar10._4_12_;
      auVar11._0_4_ = fVar9 * 1.442695;
      fVar9 = logf(_X);
      auVar12._4_4_ = extraout_XMM0_Db_00;
      auVar12._0_4_ = fVar9 * 1.442695;
      auVar12._8_4_ = extraout_XMM0_Dc_00;
      auVar12._12_4_ = extraout_XMM0_Dd_00;
      auVar12 = insertps(auVar11,auVar12,0x10);
      fVar9 = logf(_X);
      auVar3._4_4_ = extraout_XMM0_Db_01;
      auVar3._0_4_ = fVar9 * 1.442695;
      auVar3._8_4_ = extraout_XMM0_Dc_01;
      auVar3._12_4_ = extraout_XMM0_Dd_01;
      auVar12 = insertps(auVar12,auVar3,0x20);
      fVar9 = logf(_X);
      auVar4._4_4_ = extraout_XMM0_Db_02;
      auVar4._0_4_ = fVar9 * 1.442695;
      auVar4._8_4_ = extraout_XMM0_Dc_02;
      auVar4._12_4_ = extraout_XMM0_Dd_02;
      auVar12 = insertps(auVar12,auVar4,0x30);
      *pauVar7 = auVar12;
      iVar6 = iVar6 + -1;
      pauVar7 = pauVar7 + 1;
    } while (iVar6 != 0);
  }
  return;
}



// FUNCTION 148036c24 FUN_148036c24 body=134 status=ok
// SIG undefined FUN_148036c24(void)

void FUN_148036c24(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar6 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar3 = uVar3 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
      lVar6 = lVar6 + 1;
    } while (iVar5 <= (int)uVar3);
  }
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    uVar7 = FUN_144afec76();
    do {
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar4 + 0xc) = extraout_XMM0_Dd;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148036caa FUN_148036caa body=134 status=ok
// SIG undefined FUN_148036caa(void)

void FUN_148036caa(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar3 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar6 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar3 = uVar3 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar6 + 1];
      lVar6 = lVar6 + 1;
    } while (iVar5 <= (int)uVar3);
  }
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    uVar7 = FUN_144afed6c();
    do {
      *puVar4 = uVar7;
      *(undefined4 *)(puVar4 + 1) = extraout_XMM0_Dc;
      *(undefined4 *)((longlong)puVar4 + 0xc) = extraout_XMM0_Dd;
      puVar4 = puVar4 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148036d30 FUN_148036d30 body=228 status=ok
// SIG undefined FUN_148036d30(void)

void FUN_148036d30(longlong param_1)

{
  float _X;
  ushort uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar4 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar4 = uVar4 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar4);
  }
  _X = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) + (longlong)(int)uVar4);
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    pauVar6 = (undefined1 (*) [16])
              ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    do {
      fVar8 = tanf(_X);
      auVar11._4_4_ = extraout_XMM0_Db;
      auVar11._0_4_ = fVar8;
      auVar11._8_4_ = extraout_XMM0_Dc;
      auVar11._12_4_ = extraout_XMM0_Dd;
      fVar8 = tanf(_X);
      fVar9 = tanf(_X);
      fVar10 = tanf(_X);
      auVar13._4_4_ = extraout_XMM0_Db_00;
      auVar13._0_4_ = fVar8;
      auVar13._8_4_ = extraout_XMM0_Dc_00;
      auVar13._12_4_ = extraout_XMM0_Dd_00;
      auVar12 = insertps(auVar11,auVar13,0x10);
      auVar3._4_4_ = extraout_XMM0_Db_01;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = extraout_XMM0_Dc_01;
      auVar3._12_4_ = extraout_XMM0_Dd_01;
      auVar13 = insertps(auVar12,auVar3,0x20);
      auVar12._4_4_ = extraout_XMM0_Db_02;
      auVar12._0_4_ = fVar10;
      auVar12._8_4_ = extraout_XMM0_Dc_02;
      auVar12._12_4_ = extraout_XMM0_Dd_02;
      auVar12 = insertps(auVar13,auVar12,0x30);
      *pauVar6 = auVar12;
      iVar5 = iVar5 + -1;
      pauVar6 = pauVar6 + 1;
    } while (iVar5 != 0);
  }
  return;
}



// FUNCTION 148036e14 FUN_148036e14 body=373 status=ok
// SIG undefined FUN_148036e14(void)

void FUN_148036e14(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  ushort *puVar6;
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 extraout_var_02 [12];
  
  puVar6 = *(ushort **)(param_1 + 0x10);
  uVar3 = *puVar6;
  *(ushort **)(param_1 + 0x10) = puVar6 + 1;
  lVar11 = *(longlong *)(param_1 + 0x70);
  iVar5 = *(int *)(param_1 + 0x80);
  uVar4 = puVar6[1];
  *(ushort **)(param_1 + 0x10) = puVar6 + 2;
  iVar9 = *(int *)(param_1 + 0x44);
  if (0 < iVar9) {
    uVar10 = (ulonglong)((uint)uVar3 * iVar5);
    do {
      pfVar1 = (float *)(lVar11 + uVar10);
      fVar12 = *pfVar1;
      fVar13 = pfVar1[1];
      fVar8 = pfVar1[3];
      fVar15 = fVar12;
      if (1.0 <= fVar12) {
        fVar15 = 1.0;
      }
      fVar2 = *(float *)(lVar11 + 8 + uVar10);
      fVar12 = asinf((float)(-(uint)(fVar12 < -1.0) & 0xbf800000 |
                            ~-(uint)(fVar12 < -1.0) & (uint)fVar15));
      auVar16._4_4_ = extraout_var._0_4_;
      auVar16._0_4_ = fVar12;
      auVar16._8_4_ = extraout_var._4_4_;
      auVar16._12_4_ = extraout_var._8_4_;
      fVar12 = fVar13;
      if (1.0 <= fVar13) {
        fVar12 = 1.0;
      }
      fVar13 = asinf((float)(-(uint)(fVar13 < -1.0) & 0xbf800000 |
                            ~-(uint)(fVar13 < -1.0) & (uint)fVar12));
      fVar12 = fVar2;
      if (1.0 <= fVar2) {
        fVar12 = 1.0;
      }
      fVar12 = asinf((float)(-(uint)(fVar2 < -1.0) & 0xbf800000 |
                            ~-(uint)(fVar2 < -1.0) & (uint)fVar12));
      auVar17._4_4_ = extraout_var_01._0_4_;
      auVar17._0_4_ = fVar12;
      auVar17._8_4_ = extraout_var_01._4_4_;
      auVar17._12_4_ = extraout_var_01._8_4_;
      fVar12 = fVar8;
      if (1.0 <= fVar8) {
        fVar12 = 1.0;
      }
      auVar14._0_4_ =
           asinf((float)(-(uint)(fVar8 < -1.0) & 0xbf800000 | ~-(uint)(fVar8 < -1.0) & (uint)fVar12)
                );
      auVar14._4_12_ = extraout_var_02;
      auVar7._4_4_ = extraout_var_00._0_4_;
      auVar7._0_4_ = fVar13;
      auVar7._8_4_ = extraout_var_00._4_4_;
      auVar7._12_4_ = extraout_var_00._8_4_;
      auVar16 = insertps(auVar16,auVar7,0x10);
      auVar16 = insertps(auVar16,auVar17,0x20);
      auVar16 = insertps(auVar16,auVar14,0x30);
      *(undefined1 (*) [16])(lVar11 + (ulonglong)((uint)uVar4 * iVar5)) = auVar16;
      lVar11 = lVar11 + 0x10;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  return;
}



// FUNCTION 148036f8a FUN_148036f8a body=261 status=ok
// SIG undefined FUN_148036f8a(void)

void FUN_148036f8a(longlong param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
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
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  puVar2 = *(ushort **)(param_1 + 0x10);
  uVar1 = *puVar2;
  uVar4 = (uint)uVar1;
  *(ushort **)(param_1 + 0x10) = puVar2 + 1;
  iVar5 = **(int **)(param_1 + 0x20);
  lVar7 = 0;
  if (iVar5 <= (int)(uint)uVar1) {
    do {
      uVar4 = uVar4 - iVar5;
      iVar5 = (*(int **)(param_1 + 0x20))[lVar7 + 1];
      lVar7 = lVar7 + 1;
    } while (iVar5 <= (int)uVar4);
  }
  fVar11 = *(float *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar7 * 8) +
                     (longlong)(int)uVar4);
  uVar1 = puVar2[1];
  *(ushort **)(param_1 + 0x10) = puVar2 + 2;
  iVar5 = *(int *)(param_1 + 0x44);
  if (0 < iVar5) {
    fVar8 = fVar11;
    if (1.0 <= fVar11) {
      fVar8 = 1.0;
    }
    fVar11 = (float)(~-(uint)(fVar11 < -1.0) & (uint)fVar8 | -(uint)(fVar11 < -1.0) & 0xbf800000);
    pauVar6 = (undefined1 (*) [16])
              ((ulonglong)((uint)uVar1 * *(int *)(param_1 + 0x80)) + *(longlong *)(param_1 + 0x70));
    do {
      fVar8 = asinf(fVar11);
      auVar12._4_4_ = extraout_XMM0_Db;
      auVar12._0_4_ = fVar8;
      auVar12._8_4_ = extraout_XMM0_Dc;
      auVar12._12_4_ = extraout_XMM0_Dd;
      fVar8 = asinf(fVar11);
      fVar9 = asinf(fVar11);
      fVar10 = asinf(fVar11);
      auVar14._4_4_ = extraout_XMM0_Db_00;
      auVar14._0_4_ = fVar8;
      auVar14._8_4_ = extraout_XMM0_Dc_00;
      auVar14._12_4_ = extraout_XMM0_Dd_00;
      auVar13 = insertps(auVar12,auVar14,0x10);
      auVar3._4_4_ = extraout_XMM0_Db_01;
      auVar3._0_4_ = fVar9;
      auVar3._8_4_ = extraout_XMM0_Dc_01;
      auVar3._12_4_ = extraout_XMM0_Dd_01;
      auVar14 = insertps(auVar13,auVar3,0x20);
      auVar13._4_4_ = extraout_XMM0_Db_02;
      auVar13._0_4_ = fVar10;
      auVar13._8_4_ = extraout_XMM0_Dc_02;
      auVar13._12_4_ = extraout_XMM0_Dd_02;
      auVar13 = insertps(auVar14,auVar13,0x30);
      *pauVar6 = auVar13;
      iVar5 = iVar5 + -1;
      pauVar6 = pauVar6 + 1;
    } while (iVar5 != 0);
  }
  return;
}


