// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14963eb6c FUN_14963eb6c body=517 status=ok
// SIG undefined FUN_14963eb6c(void)

void FUN_14963eb6c(undefined8 *param_1,int param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong *plVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  ulonglong uVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar8 = (longlong *)param_1[3];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar9 = *(longlong *)(*(longlong *)(*plVar8 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar12 = (ulonglong)(uVar7 & 0x1ff);
  pdVar1 = (double *)(lVar9 + uVar12 * 0x18);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar10 = *(double *)(lVar9 + 0x10 + uVar12 * 0x18);
  local_38 = (double)plVar8[0xb] * dVar10 + (double)plVar8[9] * dVar2 + (double)plVar8[10] * dVar3 +
             (double)plVar8[0x17];
  dStack_40 = (double)plVar8[8] * dVar10 + (double)plVar8[6] * dVar2 + (double)plVar8[7] * dVar3 +
              (double)plVar8[0x16];
  local_48 = dVar10 * (double)plVar8[5] + dVar2 * (double)plVar8[3] + dVar3 * (double)plVar8[4] +
             (double)plVar8[0x15];
  FUN_14963ed72(*param_1,&local_60,&local_48);
  local_38 = local_50 + local_38;
  dStack_40 = local_58 + dStack_40;
  local_48 = local_60 + local_48;
  dVar11 = local_38 - (double)plVar8[0x17];
  dVar15 = dStack_40 - (double)plVar8[0x16];
  dVar14 = local_48 - (double)plVar8[0x15];
  dVar10 = (double)plVar8[0x13];
  dVar2 = (double)plVar8[0x12];
  dVar3 = (double)plVar8[0x14];
  dVar4 = (double)plVar8[0x10];
  dVar5 = (double)plVar8[0xf];
  dVar6 = (double)plVar8[0x11];
  lVar9 = *(longlong *)param_1[2];
  *(double *)(lVar9 + lVar13 * 0x18) =
       dVar11 * (double)plVar8[0xe] + dVar14 * (double)plVar8[0xc] + dVar15 * (double)plVar8[0xd];
  *(double *)(lVar9 + 8 + lVar13 * 0x18) = dVar6 * dVar11 + dVar5 * dVar14 + dVar4 * dVar15;
  *(double *)(lVar9 + 0x10 + lVar13 * 0x18) = dVar3 * dVar11 + dVar2 * dVar14 + dVar10 * dVar15;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963ed72 FUN_14963ed72 body=247 status=ok
// SIG undefined FUN_14963ed72(void)

double * FUN_14963ed72(longlong param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14963d97c(param_1,&local_78);
  dVar1 = *(double *)(param_1 + 0x98);
  FUN_14963b274(param_1 + 0x60,&local_90,param_3);
  dVar2 = 1.0 - *(double *)(param_1 + 0x98);
  *param_2 = dVar2 * local_90 + dVar1 * local_78;
  param_2[1] = local_88 * dVar2 + local_70 * dVar1;
  param_2[2] = local_80 * dVar2 + local_68 * dVar1;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963ee72 FUN_14963ee72 body=591 status=ok
// SIG undefined FUN_14963ee72(void)

void FUN_14963ee72(undefined8 *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar9 = (longlong *)param_1[5];
  lVar13 = (longlong)param_2;
  uVar7 = *(uint *)(*(longlong *)param_1[1] + lVar13 * 4);
  lVar10 = *(longlong *)(*(longlong *)(*plVar9 + 0x10) + (ulonglong)(uVar7 >> 9) * 8);
  uVar11 = (ulonglong)(uVar7 & 0x1ff);
  dVar1 = *(double *)(lVar10 + uVar11 * 0x18);
  dVar2 = *(double *)(lVar10 + 8 + uVar11 * 0x18);
  dVar3 = *(double *)(lVar10 + 0x10 + uVar11 * 0x18);
  dVar14 = (double)plVar9[0x17];
  local_58 = (double)plVar9[0xb] * dVar3 + (double)plVar9[9] * dVar1 + (double)plVar9[10] * dVar2 +
             dVar14;
  dVar15 = (double)plVar9[0x16];
  uStack_60 = (double)plVar9[8] * dVar3 + (double)plVar9[6] * dVar1 + (double)plVar9[7] * dVar2 +
              dVar15;
  dVar16 = (double)plVar9[0x15];
  local_68 = dVar3 * (double)plVar9[5] + dVar1 * (double)plVar9[3] + dVar2 * (double)plVar9[4] +
             dVar16;
  iVar8 = *(int *)(param_1 + 4);
  if (0 < iVar8) {
    iVar12 = 0;
    do {
      FUN_14963f0c2(*param_1,&local_80,&local_68,(double)param_1[3] * (1.0 / (double)iVar8));
      local_58 = local_70;
      local_68 = (double)CONCAT44(uStack_7c,local_80);
      uStack_60 = (double)CONCAT44(uStack_74,uStack_78);
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(int *)(param_1 + 4));
    dVar14 = (double)plVar9[0x17];
    dVar16 = (double)plVar9[0x15];
    dVar15 = (double)plVar9[0x16];
  }
  dVar16 = local_68 - dVar16;
  dVar15 = uStack_60 - dVar15;
  dVar14 = local_58 - dVar14;
  dVar1 = (double)plVar9[0x13];
  dVar2 = (double)plVar9[0x12];
  dVar3 = (double)plVar9[0x14];
  dVar4 = (double)plVar9[0x10];
  dVar5 = (double)plVar9[0xf];
  dVar6 = (double)plVar9[0x11];
  lVar10 = *(longlong *)param_1[2];
  *(double *)(lVar10 + lVar13 * 0x18) =
       dVar14 * (double)plVar9[0xe] + dVar16 * (double)plVar9[0xc] + dVar15 * (double)plVar9[0xd];
  *(double *)(lVar10 + 8 + lVar13 * 0x18) = dVar6 * dVar14 + dVar5 * dVar16 + dVar4 * dVar15;
  *(double *)(lVar10 + 0x10 + lVar13 * 0x18) = dVar3 * dVar14 + dVar2 * dVar16 + dVar1 * dVar15;
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963f0c2 FUN_14963f0c2 body=573 status=ok
// SIG undefined FUN_14963f0c2(void)

double * FUN_14963f0c2(undefined8 param_1,double *param_2,double *param_3,double param_4)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_14963ed72(param_1,&local_b8);
  dVar2 = param_4 * 0.5;
  local_d8 = dVar2 * local_a8 + param_3[2];
  local_e0 = dVar2 * local_b0 + param_3[1];
  local_e8 = dVar2 * local_b8 + *param_3;
  FUN_14963ed72(param_1,&local_d0);
  local_f0 = ((local_c0 + local_c0) - local_a8) * param_4 + param_3[2];
  local_f8 = ((local_c8 + local_c8) - local_b0) * param_4 + param_3[1];
  local_100 = ((local_d0 + local_d0) - local_b8) * param_4 + *param_3;
  FUN_14963ed72(param_1,&local_e8);
  dVar2 = param_3[2];
  dVar1 = param_3[1];
  *param_2 = (local_d0 * 0.6666666666666666 + (local_b8 + local_e8) * 0.16666666666666666) * param_4
             + *param_3;
  param_2[1] = (local_c8 * 0.6666666666666666 + (local_b0 + local_e0) * 0.16666666666666666) *
               param_4 + dVar1;
  param_2[2] = (local_c0 * 0.6666666666666666 + (local_a8 + local_d8) * 0.16666666666666666) *
               param_4 + dVar2;
  if ((local_a0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963f300 FUN_14963f300 body=117 status=ok
// SIG undefined FUN_14963f300(void)

void FUN_14963f300(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [120];
  undefined8 local_38;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1483b309a(local_b0,*(undefined8 *)(*param_1 + 0x1d0),*param_2,param_3);
  if (local_18 != 1) {
    local_38 = 0x7fefffffffffffff;
  }
  if ((local_10 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38);
  }
  return;
}



// FUNCTION 14963f376 FUN_14963f376 body=38 status=ok
// SIG undefined FUN_14963f376(void)

undefined8 FUN_14963f376(undefined8 param_1,longlong *param_2,undefined4 *param_3)

{
  FUN_146c14aac(*(undefined8 *)(*param_2 + 0x1d0),param_1,*param_3);
  return param_1;
}



// FUNCTION 14963f3a4 FUN_14963f3a4 body=310 status=ok
// SIG undefined FUN_14963f3a4(void)

void FUN_14963f3a4(longlong *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (-1 < param_2) {
    lVar3 = *(longlong *)(*(longlong *)*param_1 + 0x50);
    lVar7 = *(longlong *)(lVar3 + 0x80);
    if (lVar7 == 0) {
      lVar7 = lVar3;
    }
    if (param_2 < *(int *)(lVar7 + 0x18) - *(int *)(lVar7 + 0x78)) {
      lVar3 = ((longlong *)*param_1)[1];
      plVar4 = *(longlong **)(lVar3 + 0x30);
      plVar5 = (longlong *)(lVar3 + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar5 = plVar4;
      }
      lVar3 = *plVar5;
      lVar6 = (longlong)((int)plVar5[2] * param_2);
      lVar7 = param_1[1];
      local_48 = (double)*(float *)(lVar3 + 8 + lVar6 * 0xc) * *(double *)(lVar7 + 0x48);
      local_50 = (double)*(float *)(lVar3 + 4 + lVar6 * 0xc) * *(double *)(lVar7 + 0x40);
      local_58 = (double)*(float *)(lVar3 + lVar6 * 0xc) * *(double *)(lVar7 + 0x38);
      FUN_146bed047(&local_40,lVar7);
      dVar1 = *(double *)(lVar7 + 0x30);
      dVar2 = *(double *)(lVar7 + 0x28);
      plVar4 = *(longlong **)(*(longlong *)(*param_1 + 8) + 0x30);
      plVar5 = (longlong *)(*(longlong *)(*param_1 + 8) + 0x18);
      if (plVar4 != (longlong *)0x0) {
        plVar5 = plVar4;
      }
      lVar3 = *plVar5;
      lVar6 = (longlong)(param_2 * (int)plVar5[2]);
      *(float *)(lVar3 + lVar6 * 0xc) = (float)(local_40 + *(double *)(lVar7 + 0x20));
      *(float *)(lVar3 + 4 + lVar6 * 0xc) = (float)(local_38 + dVar2);
      *(float *)(lVar3 + 8 + lVar6 * 0xc) = (float)(local_30 + dVar1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963f4e4 FUN_14963f4e4 body=248 status=ok
// SIG undefined FUN_14963f4e4(void)

void FUN_14963f4e4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  lVar4 = *(longlong *)(lVar1 + 0x10);
  if ((-1 < param_2 && lVar4 != 0) && (param_2 < *(int *)(lVar4 + 0x10))) {
    plVar2 = (longlong *)(lVar4 + 0x18);
    if (*(longlong **)(lVar4 + 0x30) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar4 + 0x30);
    }
    lVar4 = *plVar2;
    lVar5 = (longlong)((int)plVar2[2] * param_2);
    local_40 = (double)*(float *)(lVar4 + 8 + lVar5 * 0xc);
    local_48 = (double)*(float *)(lVar4 + 4 + lVar5 * 0xc);
    local_50 = (double)*(float *)(lVar4 + lVar5 * 0xc);
    FUN_146c5cfa8(param_1[1],&local_38);
    lVar1 = *(longlong *)(lVar1 + 0x10);
    plVar2 = *(longlong **)(lVar1 + 0x30);
    plVar3 = (longlong *)(lVar1 + 0x18);
    if (plVar2 != (longlong *)0x0) {
      plVar3 = plVar2;
    }
    lVar1 = *plVar3;
    lVar4 = (longlong)(param_2 * (int)plVar3[2]);
    *(float *)(lVar1 + lVar4 * 0xc) = (float)local_38;
    *(float *)(lVar1 + 4 + lVar4 * 0xc) = (float)local_30;
    *(float *)(lVar1 + 8 + lVar4 * 0xc) = (float)local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14963f5dd FUN_14963f5dd body=41 status=ok
// SIG undefined FUN_14963f5dd(void)

void FUN_14963f5dd(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1484c7624(param_1);
    param_1 = param_1 + 0x670;
  }
  return;
}



// FUNCTION 14963f606 FUN_14963f606 body=182 status=ok
// SIG undefined FUN_14963f606(void)

void FUN_14963f606(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = param_2[2];
  param_2[2] = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_2[3] = 0;
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  param_1[6] = 0;
  param_1[6] = param_2[6];
  param_2[6] = 0;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_2[7] = 0;
  param_1[8] = 0;
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  param_2[9] = 0;
  return;
}



// FUNCTION 14963f6bc FUN_14963f6bc body=646 status=ok
// SIG undefined FUN_14963f6bc(void)

longlong * FUN_14963f6bc(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  
  lVar12 = *param_2;
  *param_1 = lVar12;
  if ((lVar12 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar11 = DAT_14c950c29;
  *(char *)(param_1 + 1) = (char)param_2[1];
  lVar12 = param_2[2];
  param_1[2] = lVar12;
  if ((lVar12 != 0 & bVar11) == 1) {
    FUN_1456cec3c();
    bVar11 = DAT_14c950c29;
  }
  *(int *)(param_1 + 3) = (int)param_2[3];
  lVar12 = param_2[4];
  param_1[4] = lVar12;
  if ((lVar12 != 0 & bVar11) == 1) {
    FUN_1456cec3c();
  }
  plVar13 = param_2 + 6;
  plVar14 = param_1 + 6;
  for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
    *plVar14 = *plVar13;
    plVar13 = plVar13 + 1;
    plVar14 = plVar14 + 1;
  }
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(int *)(param_1 + 0x13) = (int)param_2[0x13];
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x14] = param_2[0x14];
  param_2[0x14] = 0;
  *(int *)(param_1 + 0x15) = (int)param_2[0x15];
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  param_2[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x16] = param_2[0x16];
  param_2[0x16] = 0;
  *(int *)(param_1 + 0x17) = (int)param_2[0x17];
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)((longlong)param_2 + 0xbc);
  param_2[0x17] = 0;
  *(short *)(param_1 + 0x18) = (short)param_2[0x18];
  lVar12 = param_2[0x23];
  *(char *)(param_1 + 0x23) = (char)lVar12;
  if ((char)lVar12 == '\x01') {
    FUN_14963f606(param_1 + 0x19,param_2 + 0x19);
  }
  *(int *)(param_1 + 0x25) = (int)param_2[0x25];
  param_1[0x24] = param_2[0x24];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x134);
  lVar12 = param_2[0x27];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x13c);
  lVar7 = param_2[0x28];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x144);
  lVar8 = param_2[0x29];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14c);
  lVar9 = param_2[0x2a];
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x154);
  lVar10 = param_2[0x2b];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x15c);
  *(int *)(param_1 + 0x26) = (int)param_2[0x26];
  *(undefined4 *)((longlong)param_1 + 0x134) = uVar1;
  *(int *)(param_1 + 0x27) = (int)lVar12;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar2;
  *(int *)(param_1 + 0x28) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar3;
  *(int *)(param_1 + 0x29) = (int)lVar8;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar4;
  *(int *)(param_1 + 0x2a) = (int)lVar9;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar5;
  *(int *)(param_1 + 0x2b) = (int)lVar10;
  *(undefined4 *)((longlong)param_1 + 0x15c) = uVar6;
  param_1[0x2c] = 0;
  param_1[0x2c] = param_2[0x2c];
  param_2[0x2c] = 0;
  *(int *)(param_1 + 0x2d) = (int)param_2[0x2d];
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_2[0x2d] = 0;
  *(char *)(param_1 + 0x2e) = (char)param_2[0x2e];
  lVar12 = param_2[0x87];
  *(char *)(param_1 + 0x87) = (char)lVar12;
  if ((char)lVar12 == '\x01') {
    FUN_14851ac06(param_1 + 0x2f,param_2 + 0x2f);
  }
  lVar12 = param_2[0xcc];
  *(char *)(param_1 + 0xcc) = (char)lVar12;
  if ((char)lVar12 == '\x01') {
    FUN_146bffece(param_1 + 0x88,param_2 + 0x88);
  }
  return param_1;
}



// FUNCTION 14963f942 FUN_14963f942 body=150 status=ok
// SIG undefined FUN_14963f942(void)

void FUN_14963f942(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x670,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x670)) {
      uVar5 = uVar4 / 0x670 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x670,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14963f9da FUN_14963f9da body=243 status=ok
// SIG undefined FUN_14963f9da(void)

undefined8 * FUN_14963f9da(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bd8cdd0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0x3fb99999a0000000;
  *(undefined1 *)(param_1 + 0x13) = 1;
  *(undefined4 *)((longlong)param_1 + 0x9c) = 10;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  uVar1 = DAT_14c846518;
  param_1[0x15] = DAT_14c846510;
  param_1[0x16] = uVar1;
  param_1[0x17] = DAT_14c846520;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0x3ff0000000000000;
  param_1[0x1a] = 0x3ff0000000000000;
  param_1[0x1b] = 0x200000001;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  return param_1;
}



// FUNCTION 14963face FUN_14963face body=38 status=ok
// SIG undefined FUN_14963face(void)

undefined8 FUN_14963face(undefined8 param_1,int param_2)

{
  FUN_149640024();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14963faf4 FUN_14963faf4 body=1327 status=ok
// SIG undefined FUN_14963faf4(void)

void FUN_14963faf4(double param_1,char *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  double dVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  int local_e0;
  float local_cc;
  float local_c8;
  float local_c4;
  double local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  code *local_a0;
  double *local_98;
  double local_90;
  double local_88;
  double dStack_80;
  code *local_58;
  double *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14963fb5f;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar1)(uVar7);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_14963fb5f;
  }
  if (*(longlong *)((longlong)param_1 + 0xe8) == 0) goto LAB_14963fb5f;
  local_50 = &local_90;
  local_58 = FUN_149640130;
  local_90 = param_1;
  FUN_14846e534();
  if (param_2 != (char *)0x0) {
    if (*param_2 != '\0') goto LAB_14963fb5f;
    pcVar1 = *(code **)(param_2 + 0x70);
    plVar9 = (longlong *)(param_2 + 0x90);
    if (*(longlong **)(param_2 + 0x80) != (longlong *)0x0) {
      plVar9 = *(longlong **)(param_2 + 0x80);
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    cVar4 = (*pcVar1)(uVar7);
    *param_2 = cVar4;
    if (cVar4 != '\0') goto LAB_14963fb5f;
  }
  if (*(int *)((longlong)param_1 + 0x88) == 6) {
    if (*(longlong *)((longlong)param_1 + 0xf8) != 0) {
      lVar18 = *(longlong *)((longlong)param_1 + 8);
      uVar13 = *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144);
      uVar15 = 0;
      if ((uVar13 != 0) &&
         (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar18 + 0x148) - 1U))) {
        uVar16 = 1;
        uVar14 = 1;
        if (1 < (int)uVar13) {
          uVar16 = uVar13;
        }
        do {
          uVar15 = uVar16;
          if (uVar16 == uVar14) break;
          uVar10 = uVar14 >> 9;
          uVar17 = uVar14 & 0x1ff;
          uVar15 = uVar14;
          uVar14 = uVar14 + 1;
        } while (0xfffd < (ushort)(*(short *)((*(undefined8 **)(lVar18 + 0x148))[uVar10] +
                                             (ulonglong)uVar17 * 2) - 1U));
      }
LAB_14963fc33:
      if (uVar15 != uVar13) {
        lVar2 = *(longlong *)((longlong)param_1 + 8);
        lVar3 = (*(undefined8 **)((longlong)param_1 + 0xf8))[1];
        if (lVar3 == 0) {
          iVar6 = FUN_146bc96d4(**(undefined8 **)((longlong)param_1 + 0xf8),uVar15);
        }
        else {
          iVar6 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x20) + (ulonglong)(uVar15 >> 9) * 8)
                          + (ulonglong)(uVar15 & 0x1ff) * 4);
        }
        if (*(char *)(lVar2 + 0x1a8) == '\x01') {
          *(int *)(*(longlong *)(*(longlong *)(lVar2 + 0x198) + (ulonglong)(uVar15 >> 9) * 8) +
                  (ulonglong)(uVar15 & 0x1ff) * 4) = iVar6;
          iVar5 = iVar6 + 1;
          if (iVar6 + 1 <= *(int *)(lVar2 + 0x1b0)) {
            iVar5 = *(int *)(lVar2 + 0x1b0);
          }
          *(int *)(lVar2 + 0x1b0) = iVar5;
        }
        uVar16 = uVar15 + 1;
        if ((int)(uVar15 + 1) < (int)uVar13) {
          uVar16 = uVar13;
        }
        uVar14 = uVar15;
        do {
          uVar15 = uVar16;
          if (uVar16 - 1 == uVar14) break;
          uVar15 = uVar14 + 1;
          uVar14 = uVar15;
        } while (0xfffd < (ushort)(*(short *)(*(longlong *)
                                               (*(longlong *)(lVar18 + 0x148) +
                                               (ulonglong)(uVar15 >> 9) * 8) +
                                             (ulonglong)(uVar15 & 0x1ff) * 2) - 1U));
        goto LAB_14963fc33;
      }
    }
  }
  else {
    FUN_148376df4(&local_90,*(undefined8 *)((longlong)param_1 + 8));
    lVar18 = (longlong)param_1 + 0x108;
    FUN_1496400ce(lVar18,&local_90);
    FUN_148345e5a(&local_90);
    *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_1 + 0xdc);
    *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_1 + 0xe0);
    switch(*(undefined4 *)((longlong)param_1 + 0x88)) {
    case 0:
      dVar8 = cos(*(double *)((longlong)param_1 + 0x90) * 0.017453292519943295);
      local_e8 = CONCAT71(local_e8._1_7_,*(undefined1 *)((longlong)param_1 + 0x98));
      FUN_1483796d4(lVar18,1.0 - dVar8,*(undefined1 *)((longlong)param_1 + 0xc0),
                    *(undefined1 *)((longlong)param_1 + 0xc1));
      break;
    case 1:
      iVar6 = 100;
      if (*(int *)((longlong)param_1 + 0xd8) < 100) {
        iVar6 = *(int *)((longlong)param_1 + 0xd8);
      }
      local_e0 = 1;
      if (1 < iVar6) {
        local_e0 = iVar6;
      }
      local_e8 = *(undefined8 *)((longlong)param_1 + 0xd0);
      FUN_148377598(lVar18,*(undefined1 *)((longlong)param_1 + 0xc0),
                    *(undefined1 *)((longlong)param_1 + 0xc1),
                    *(undefined8 *)((longlong)param_1 + 200));
      break;
    case 2:
      FUN_148376e1a(lVar18,0);
      break;
    case 3:
      FUN_148377048(lVar18);
      break;
    case 4:
      FUN_1483771b2(lVar18);
      break;
    case 5:
      if (*(char *)((longlong)param_1 + 0xa0) == '\x01') {
        local_a0 = FUN_149640156;
        local_98 = &local_90;
        local_90 = param_1;
        FUN_14846e534(*(undefined8 *)((longlong)param_1 + 0xe8));
      }
      else {
        local_a8 = *(undefined8 *)((longlong)param_1 + 0xb8);
        local_b8 = *(undefined4 *)((longlong)param_1 + 0xa8);
        uStack_b4 = *(undefined4 *)((longlong)param_1 + 0xac);
        uStack_b0 = *(undefined4 *)((longlong)param_1 + 0xb0);
        uStack_ac = *(undefined4 *)((longlong)param_1 + 0xb4);
        local_e8 = 0;
        FUN_148379ccc(lVar18,*(undefined4 *)((longlong)param_1 + 0x9c),
                      *(undefined4 *)((longlong)param_1 + 0xa4));
      }
    }
    FUN_14837b89a(lVar18);
    if ((*(char *)((longlong)param_1 + 0xe4) == '\x01') && (*(int *)((longlong)param_1 + 0x88) == 0)
       ) {
      lVar18 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x208);
      if (lVar18 == 0) {
        FUN_14582ed12();
        lVar18 = *(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x208);
      }
      if (*(int *)(lVar18 + 0x38) < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = **(undefined8 **)(lVar18 + 0x30);
      }
      FUN_146c19dca(uVar7);
      dVar8 = *(double *)((longlong)param_1 + 8);
      local_c0 = dVar8;
      if ((longlong)*(int *)((longlong)param_1 + 0x128) != 0) {
        puVar12 = *(undefined8 **)((longlong)param_1 + 0x120);
        lVar18 = (longlong)*(int *)((longlong)param_1 + 0x128) << 4;
        do {
          FUN_146c13dec(*(undefined8 *)((longlong)param_1 + 8),&local_90,*(undefined4 *)*puVar12);
          local_c4 = (float)dStack_80;
          local_c8 = (float)local_88;
          local_cc = (float)local_90;
          FUN_146bc9b9c(&local_c0,puVar12,&local_cc);
          puVar12 = puVar12 + 2;
          lVar18 = lVar18 + -0x10;
        } while (lVar18 != 0);
        dVar8 = *(double *)((longlong)param_1 + 8);
      }
      local_88 = 0.0;
      dStack_80 = 0.0;
      if (*(int *)(*(longlong *)((longlong)dVar8 + 0x208) + 0x38) < 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = **(undefined8 **)(*(longlong *)((longlong)dVar8 + 0x208) + 0x30);
      }
      local_90 = dVar8;
      FUN_146c383fc(&local_90,uVar11,1,1);
      FUN_146c378c6(&local_90,uVar7,0);
      if (local_88 != 0.0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14963fb5f:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149640024 FUN_149640024 body=169 status=ok
// SIG undefined FUN_149640024(void)

void FUN_149640024(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd8cdd0;
  FUN_148345e5a(param_1 + 0x21);
  plVar3 = (longlong *)param_1[0x20];
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
  plVar3 = (longlong *)param_1[0x1e];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496400c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496400ce FUN_1496400ce body=98 status=ok
// SIG undefined FUN_1496400ce(void)

undefined4 * FUN_1496400ce(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_144aa2b0e(param_1 + 6,param_2 + 6);
  if (param_1 != param_2) {
    if (*(longlong *)(param_1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_2 + 10) = 0;
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    *(undefined8 *)(param_2 + 0xc) = 0;
  }
  return param_1;
}



// FUNCTION 149640130 FUN_149640130 body=38 status=ok
// SIG undefined FUN_149640130(void)

void FUN_149640130(longlong *param_1,undefined8 param_2)

{
  FUN_146c005f0(*(undefined8 *)(*param_1 + 8),param_2,1,1,1,1);
  return;
}



// FUNCTION 149640156 FUN_149640156 body=143 status=ok
// SIG undefined FUN_149640156(void)

void FUN_149640156(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_28 = 0;
  local_20 = 0xffffffff;
  local_30 = param_2;
  FUN_148376a28(&local_30);
  local_38 = *(undefined8 *)(lVar1 + 0xb8);
  local_48 = *(undefined4 *)(lVar1 + 0xa8);
  uStack_44 = *(undefined4 *)(lVar1 + 0xac);
  uStack_40 = *(undefined4 *)(lVar1 + 0xb0);
  uStack_3c = *(undefined4 *)(lVar1 + 0xb4);
  local_58 = &local_30;
  FUN_148379ccc(lVar1 + 0x108,*(undefined4 *)(lVar1 + 0x9c),*(undefined4 *)(lVar1 + 0xa4));
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496401e6 FUN_1496401e6 body=9 status=ok
// SIG undefined FUN_1496401e6(void)

void FUN_1496401e6(longlong param_1)

{
  FUN_1482e1868(param_1 + 0x10);
  return;
}



// FUNCTION 1496401f0 FUN_1496401f0 body=29 status=ok
// SIG undefined FUN_1496401f0(void)

undefined8 FUN_1496401f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964020e FUN_14964020e body=119 status=ok
// SIG undefined FUN_14964020e(void)

undefined8 * FUN_14964020e(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  param_1[1] = &DAT_100000001;
  *param_1 = &PTR_LAB_14bd8f6f0;
  uVar1 = *param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1411b354a(param_1 + 5,0,0,0,0);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x49));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x49),4000);
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 149640290 FUN_149640290 body=29 status=ok
// SIG undefined FUN_149640290(void)

undefined8 FUN_149640290(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496402ae FUN_1496402ae body=81 status=ok
// SIG undefined FUN_1496402ae(void)

void FUN_1496402ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x238));
  FUN_141082778(param_1 + 0x18);
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001496402f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 149640300 FUN_149640300 body=199 status=ok
// SIG undefined FUN_149640300(void)

undefined8 * FUN_149640300(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8cea0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8cec0;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496404f4;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8cee0;
  param_1[0x17] = &LAB_149640542;
  param_1[0x12] = &LAB_14964054a;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 1496403c8 FUN_1496403c8 body=38 status=ok
// SIG undefined FUN_1496403c8(void)

undefined8 FUN_1496403c8(undefined8 param_1,int param_2)

{
  FUN_14964059e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496403ee FUN_1496403ee body=207 status=ok
// SIG undefined FUN_1496403ee(void)

void FUN_1496403ee(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14964049f;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14964049f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496404be FUN_1496404be body=53 status=ok
// SIG undefined FUN_1496404be(void)

void FUN_1496404be(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 149640524 FUN_149640524 body=29 status=ok
// SIG undefined FUN_149640524(void)

undefined8 FUN_149640524(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640580 FUN_149640580 body=29 status=ok
// SIG undefined FUN_149640580(void)

undefined8 FUN_149640580(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964059e FUN_14964059e body=127 status=ok
// SIG undefined FUN_14964059e(void)

void FUN_14964059e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8cea0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 14964061e FUN_14964061e body=329 status=ok
// SIG undefined FUN_14964061e(void)

undefined8 * FUN_14964061e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14845abbc();
  *param_1 = &PTR_FUN_14bd8d140;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x19] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x17] = DAT_14c8464e0;
  param_1[0x18] = uVar1;
  param_1[0x1c] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_1[0x1a] = DAT_14c846510;
  param_1[0x1b] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x1d] = DAT_14c8464e0;
  param_1[0x1e] = uVar1;
  param_1[0x1f] = DAT_14c8464f0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3ff0000000000000;
  param_1[0x24] = 0x3ff0000000000000;
  param_1[0x25] = 0x3ff0000000000000;
  param_1[0x26] = 0x3ff0000000000000;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2d] = 0x600000000;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)((longlong)param_1 + 0x147) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 1;
  *(undefined4 *)(param_1 + 0x32) = 4;
  FUN_147daf818(param_1 + 0x30,4,0);
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  return param_1;
}



// FUNCTION 149640768 FUN_149640768 body=38 status=ok
// SIG undefined FUN_149640768(void)

undefined8 FUN_149640768(undefined8 param_1,int param_2)

{
  FUN_14964078e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964078e FUN_14964078e body=198 status=ok
// SIG undefined FUN_14964078e(void)

void FUN_14964078e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd8d140;
  plVar3 = (longlong *)param_1[0x34];
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
  plVar3 = (longlong *)param_1[0x28];
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
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149640849. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 149640854 FUN_149640854 body=1 status=ok
// SIG undefined FUN_149640854(void)

void FUN_149640854(void)

{
  return;
}



// FUNCTION 149640856 FUN_149640856 body=29 status=ok
// SIG undefined FUN_149640856(void)

undefined8 FUN_149640856(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640874 FUN_149640874 body=115 status=ok
// SIG undefined FUN_149640874(void)

void FUN_149640874(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149640884;
  }
  param_2 = (longlong *)0x0;
LAB_149640884:
  if (*(char *)(param_1 + 9) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001496408bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x398))(param_2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001496408a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x390))(param_2,param_1 + 0x78,0);
  return;
}



// FUNCTION 1496408e8 FUN_1496408e8 body=115 status=ok
// SIG undefined FUN_1496408e8(void)

void FUN_1496408e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_1496408f8;
  }
  param_2 = (longlong *)0x0;
LAB_1496408f8:
  if (*(char *)(param_1 + 8) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000149640933. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x398))(param_2,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014964091b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x390))(param_2,param_1 + 0x10,0);
  return;
}



// FUNCTION 14964095c FUN_14964095c body=32 status=ok
// SIG undefined FUN_14964095c(void)

undefined8 FUN_14964095c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridToolSelectionChange");
  return param_2;
}



// FUNCTION 14964097c FUN_14964097c body=29 status=ok
// SIG undefined FUN_14964097c(void)

undefined8 FUN_14964097c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640999 FUN_149640999 body=144 status=ok
// SIG undefined FUN_149640999(void)

void FUN_149640999(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x68,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14bd8d2c0;
  puVar2[2] = &PTR_FUN_14bd8d2d8;
  uVar1 = DAT_14c8464e8;
  puVar2[3] = DAT_14c8464e0;
  puVar2[4] = uVar1;
  puVar2[5] = DAT_14c8464f0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0x3ff0000000000000;
  puVar2[10] = 0x4009000000000000;
  *(undefined2 *)(puVar2 + 0xb) = 5;
  puVar2[0xc] = 0x4059000000000000;
  return;
}



// FUNCTION 149640a2c FUN_149640a2c body=29 status=ok
// SIG undefined FUN_149640a2c(void)

undefined8 FUN_149640a2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640a4a FUN_149640a4a body=29 status=ok
// SIG undefined FUN_149640a4a(void)

undefined8 FUN_149640a4a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640a68 FUN_149640a68 body=29 status=ok
// SIG undefined FUN_149640a68(void)

undefined8 FUN_149640a68(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640aa0 FUN_149640aa0 body=29 status=ok
// SIG undefined FUN_149640aa0(void)

bool FUN_149640aa0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149640abe FUN_149640abe body=26 status=ok
// SIG undefined FUN_149640abe(void)

bool FUN_149640abe(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149640ad8 FUN_149640ad8 body=24 status=ok
// SIG undefined FUN_149640ad8(void)

bool FUN_149640ad8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149640af0 FUN_149640af0 body=101 status=ok
// SIG undefined FUN_149640af0(void)

void FUN_149640af0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149640b56 FUN_149640b56 body=101 status=ok
// SIG undefined FUN_149640b56(void)

void FUN_149640b56(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8d360;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149640bbc FUN_149640bbc body=134 status=ok
// SIG undefined FUN_149640bbc(void)

void FUN_149640bbc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8d360;
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
                    /* WARNING: Could not recover jumptable at 0x000149640c33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149640c42 FUN_149640c42 body=118 status=ok
// SIG undefined FUN_149640c42(void)

void FUN_149640c42(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149640cba FUN_149640cba body=199 status=ok
// SIG undefined FUN_149640cba(void)

bool FUN_149640cba(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149640d82 FUN_149640d82 body=199 status=ok
// SIG undefined FUN_149640d82(void)

undefined8 * FUN_149640d82(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8d580;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8d5a0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149640f76;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8d5c0;
  param_1[0x17] = &LAB_149640fc4;
  param_1[0x12] = &LAB_149640fcc;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149640e4a FUN_149640e4a body=38 status=ok
// SIG undefined FUN_149640e4a(void)

undefined8 FUN_149640e4a(undefined8 param_1,int param_2)

{
  FUN_149641020();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149640e70 FUN_149640e70 body=207 status=ok
// SIG undefined FUN_149640e70(void)

void FUN_149640e70(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149640f21;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149640f21:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149640f40 FUN_149640f40 body=53 status=ok
// SIG undefined FUN_149640f40(void)

void FUN_149640f40(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149640fa6 FUN_149640fa6 body=29 status=ok
// SIG undefined FUN_149640fa6(void)

undefined8 FUN_149640fa6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641002 FUN_149641002 body=29 status=ok
// SIG undefined FUN_149641002(void)

undefined8 FUN_149641002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641020 FUN_149641020 body=127 status=ok
// SIG undefined FUN_149641020(void)

void FUN_149641020(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8d580;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 1496410a0 FUN_1496410a0 body=202 status=ok
// SIG undefined FUN_1496410a0(void)

undefined8 * FUN_1496410a0(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8f710;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[6] = 0;
  param_1[8] = &PTR_LAB_14bd8f730;
  param_1[9] = param_2;
  param_1[4] = &LAB_1496412da;
  param_1[0xc] = *param_3;
  param_1[0xe] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x12) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar3;
  *(int *)(param_1 + 0x13) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  *(int *)(param_1 + 0x10) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar1;
  *(int *)(param_1 + 0x11) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar2;
  if (param_1[0xc] != 0) {
    *param_3 = 0;
  }
  param_1[0x16] = 0;
  param_1[0x18] = &PTR_LAB_14bd8f750;
  param_1[0x19] = FUN_149641330;
  param_1[0x14] = &LAB_149641376;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14964116a FUN_14964116a body=38 status=ok
// SIG undefined FUN_14964116a(void)

undefined8 FUN_14964116a(undefined8 param_1,int param_2)

{
  FUN_1496413ca();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641190 FUN_149641190 body=213 status=ok
// SIG undefined FUN_149641190(void)

void FUN_149641190(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar2 = *(code **)(param_1 + 0x20);
  plVar5 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_30,uVar4);
  puVar1 = (undefined8 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x10) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0xa0);
    plVar5 = (longlong *)(param_1 + 0xc0);
    if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xb0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_30);
    if (cVar3 == '\0') goto LAB_149641245;
  }
  if (&local_30 != puVar1) {
    *(undefined8 *)(param_1 + 8) = local_30;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x60);
  plVar5 = (longlong *)(param_1 + 0x80);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x70);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149641245:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149641266 FUN_149641266 body=115 status=ok
// SIG undefined FUN_149641266(void)

void FUN_149641266(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x20);
  plVar3 = (longlong *)(param_1 + 0x40);
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x30);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_28,uVar2);
  if (&local_28 != (undefined8 *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 8) = local_28;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149641312 FUN_149641312 body=29 status=ok
// SIG undefined FUN_149641312(void)

undefined8 FUN_149641312(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641330 FUN_149641330 body=16 status=ok
// SIG undefined FUN_149641330(void)

byte FUN_149641330(void)

{
  byte bVar1;
  
  bVar1 = FUN_149641340();
  return bVar1 ^ 1;
}



// FUNCTION 149641340 FUN_149641340 body=53 status=ok
// SIG undefined FUN_149641340(void)

ulonglong FUN_149641340(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1496413ac FUN_1496413ac body=29 status=ok
// SIG undefined FUN_1496413ac(void)

undefined8 FUN_1496413ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496413ca FUN_1496413ca body=130 status=ok
// SIG undefined FUN_1496413ca(void)

void FUN_1496413ca(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8f710;
  if (param_1[0x14] != 0) {
    plVar1 = param_1 + 0x18;
    if ((longlong *)param_1[0x16] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x16];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xc] != 0) {
    plVar1 = param_1 + 0x10;
    if ((longlong *)param_1[0xe] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[4] != 0) {
    plVar1 = param_1 + 8;
    if ((longlong *)param_1[6] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[6];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 2) == '\x01') {
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 14964144c FUN_14964144c body=205 status=ok
// SIG undefined FUN_14964144c(void)

undefined8 * FUN_14964144c(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8d7a0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[10] = &PTR_LAB_14bd8d7c0;
  param_1[0xb] = param_2;
  param_1[6] = &LAB_1496416a0;
  param_1[0xe] = *param_3;
  param_1[0x10] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x14) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar3;
  *(int *)(param_1 + 0x15) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar4;
  *(int *)(param_1 + 0x12) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(int *)(param_1 + 0x13) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar2;
  if (param_1[0xe] != 0) {
    *param_3 = 0;
  }
  param_1[0x18] = 0;
  param_1[0x1a] = &PTR_LAB_14bd8d7e0;
  param_1[0x1b] = &LAB_1496416fe;
  param_1[0x16] = &LAB_149641730;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 14964151a FUN_14964151a body=38 status=ok
// SIG undefined FUN_14964151a(void)

undefined8 FUN_14964151a(undefined8 param_1,int param_2)

{
  FUN_149641784();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641540 FUN_149641540 body=227 status=ok
// SIG undefined FUN_149641540(void)

void FUN_149641540(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pcVar2 = *(code **)(param_1 + 0x30);
  plVar5 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x40);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  (*pcVar2)(&local_40,uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0xb0);
    plVar5 = (longlong *)(param_1 + 0xd0);
    if (*(longlong **)(param_1 + 0xc0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xc0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_40);
    if (cVar3 == '\0') goto LAB_149641603;
  }
  if (&local_40 != puVar1) {
    *(undefined8 *)(param_1 + 0x18) = local_30;
    *puVar1 = local_40;
    *(undefined4 *)(param_1 + 0xc) = uStack_3c;
    *(undefined4 *)(param_1 + 0x10) = uStack_38;
    *(undefined4 *)(param_1 + 0x14) = uStack_34;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x70);
  plVar5 = (longlong *)(param_1 + 0x90);
  if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x80);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149641603:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149641624 FUN_149641624 body=123 status=ok
// SIG undefined FUN_149641624(void)

void FUN_149641624(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  pcVar1 = *(code **)(param_1 + 0x30);
  plVar3 = (longlong *)(param_1 + 0x50);
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x40);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(&local_38,uVar2);
  if (&local_38 != (undefined4 *)(param_1 + 8)) {
    *(undefined8 *)(param_1 + 0x18) = local_28;
    *(undefined4 *)(param_1 + 8) = local_38;
    *(undefined4 *)(param_1 + 0xc) = uStack_34;
    *(undefined4 *)(param_1 + 0x10) = uStack_30;
    *(undefined4 *)(param_1 + 0x14) = uStack_2c;
    *(undefined1 *)(param_1 + 0x20) = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496416e0 FUN_1496416e0 body=29 status=ok
// SIG undefined FUN_1496416e0(void)

undefined8 FUN_1496416e0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641766 FUN_149641766 body=29 status=ok
// SIG undefined FUN_149641766(void)

undefined8 FUN_149641766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641784 FUN_149641784 body=133 status=ok
// SIG undefined FUN_149641784(void)

void FUN_149641784(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8d7a0;
  if (param_1[0x16] != 0) {
    plVar1 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar1 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[6] != 0) {
    plVar1 = param_1 + 10;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  return;
}



// FUNCTION 14964180a FUN_14964180a body=78 status=ok
// SIG undefined FUN_14964180a(void)

void FUN_14964180a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_14964181a;
  }
  param_2 = (longlong *)0x0;
LAB_14964181a:
                    /* WARNING: Could not recover jumptable at 0x000149641830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3c0))(param_2,*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 149641858 FUN_149641858 body=81 status=ok
// SIG undefined FUN_149641858(void)

void FUN_149641858(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    lVar2 = (longlong)*(int *)(lVar1 + 0x38);
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + lVar2 * 8) == lVar1 + 0x30))
    goto LAB_149641868;
  }
  param_2 = (longlong *)0x0;
LAB_149641868:
                    /* WARNING: Could not recover jumptable at 0x000149641881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3c0))
            (param_2,CONCAT71((int7)((ulonglong)lVar2 >> 8),*(undefined1 *)(param_1 + 8)) ^ 1);
  return;
}



// FUNCTION 1496418aa FUN_1496418aa body=32 status=ok
// SIG undefined FUN_1496418aa(void)

undefined8 FUN_1496418aa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridChangesMadeChange");
  return param_2;
}



// FUNCTION 1496418ca FUN_1496418ca body=29 status=ok
// SIG undefined FUN_1496418ca(void)

undefined8 FUN_1496418ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496418e8 FUN_1496418e8 body=208 status=ok
// SIG undefined FUN_1496418e8(void)

void FUN_1496418e8(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_145babc42();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) goto LAB_14964190b;
  }
  param_2 = (longlong *)0x0;
LAB_14964190b:
  cVar1 = FUN_144729dda(param_1 + 8);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 8);
    FUN_148506398(uVar2,1);
  }
  local_20 = 0;
  (**(code **)(*param_2 + 0x378))(param_2);
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x2c8))(param_2);
  (**(code **)(*plVar3 + 0x340))(plVar3,&DAT_14cc20340,3);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1496419ba FUN_1496419ba body=238 status=ok
// SIG undefined FUN_1496419ba(void)

void FUN_1496419ba(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != (longlong *)0x0) {
    lVar4 = FUN_145babc42();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) goto LAB_1496419dd;
  }
  param_2 = (longlong *)0x0;
LAB_1496419dd:
  param_1 = param_1 + 8;
  local_20 = FUN_14479d2ce(param_1);
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  (**(code **)(*param_2 + 0x378))(param_2,&local_20);
  plVar2 = (longlong *)(**(code **)(*param_2 + 0x2c8))(param_2);
  (**(code **)(*plVar2 + 0x340))(plVar2,&DAT_14cc20350,3);
  cVar1 = FUN_144729dda(param_1);
  if (cVar1 != '\0') {
    uVar3 = FUN_14479d2ce(param_1);
    FUN_148506398(uVar3,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149641aaa FUN_149641aaa body=32 status=ok
// SIG undefined FUN_149641aaa(void)

undefined8 FUN_149641aaa(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridAcceptAndStartNewChange");
  return param_2;
}



// FUNCTION 149641aca FUN_149641aca body=29 status=ok
// SIG undefined FUN_149641aca(void)

undefined8 FUN_149641aca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641ae8 FUN_149641ae8 body=82 status=ok
// SIG undefined FUN_149641ae8(void)

void FUN_149641ae8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641af8;
  }
  param_2 = (longlong *)0x0;
LAB_149641af8:
                    /* WARNING: Could not recover jumptable at 0x000149641b12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3a0))(param_2,*(undefined8 *)(param_1 + 8),0);
  return;
}



// FUNCTION 149641b3a FUN_149641b3a body=82 status=ok
// SIG undefined FUN_149641b3a(void)

void FUN_149641b3a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641b4a;
  }
  param_2 = (longlong *)0x0;
LAB_149641b4a:
                    /* WARNING: Could not recover jumptable at 0x000149641b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3a0))(param_2,*(undefined8 *)(param_1 + 8),1);
  return;
}



// FUNCTION 149641b8c FUN_149641b8c body=32 status=ok
// SIG undefined FUN_149641b8c(void)

undefined8 FUN_149641b8c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridToolMeshChange");
  return param_2;
}



// FUNCTION 149641bac FUN_149641bac body=70 status=ok
// SIG undefined FUN_149641bac(void)

undefined8 * FUN_149641bac(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_LAB_14bd8d990;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    FUN_146c2a142(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641bf2 FUN_149641bf2 body=82 status=ok
// SIG undefined FUN_149641bf2(void)

void FUN_149641bf2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641c02;
  }
  param_2 = (longlong *)0x0;
LAB_149641c02:
                    /* WARNING: Could not recover jumptable at 0x000149641c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3c8))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 149641c44 FUN_149641c44 body=82 status=ok
// SIG undefined FUN_149641c44(void)

void FUN_149641c44(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641c54;
  }
  param_2 = (longlong *)0x0;
LAB_149641c54:
                    /* WARNING: Could not recover jumptable at 0x000149641c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3c8))(param_2,param_1 + 0x10);
  return;
}



// FUNCTION 149641c96 FUN_149641c96 body=32 status=ok
// SIG undefined FUN_149641c96(void)

undefined8 FUN_149641c96(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridMeshTransformChange");
  return param_2;
}



// FUNCTION 149641cb6 FUN_149641cb6 body=29 status=ok
// SIG undefined FUN_149641cb6(void)

undefined8 FUN_149641cb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641cd4 FUN_149641cd4 body=82 status=ok
// SIG undefined FUN_149641cd4(void)

void FUN_149641cd4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641ce4;
  }
  param_2 = (longlong *)0x0;
LAB_149641ce4:
                    /* WARNING: Could not recover jumptable at 0x000149641cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3d8))(param_2,param_1 + 0xc);
  return;
}



// FUNCTION 149641d26 FUN_149641d26 body=82 status=ok
// SIG undefined FUN_149641d26(void)

void FUN_149641d26(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641d36;
  }
  param_2 = (longlong *)0x0;
LAB_149641d36:
                    /* WARNING: Could not recover jumptable at 0x000149641d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3d8))(param_2,param_1 + 8);
  return;
}



// FUNCTION 149641d78 FUN_149641d78 body=69 status=ok
// SIG undefined FUN_149641d78(void)

ulonglong FUN_149641d78(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_145babc42();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_149641d84;
  }
  param_2 = (longlong *)0x0;
LAB_149641d84:
  uVar1 = (**(code **)(*param_2 + 0x3b0))(param_2);
  return uVar1 ^ 1;
}



// FUNCTION 149641dbe FUN_149641dbe body=32 status=ok
// SIG undefined FUN_149641dbe(void)

undefined8 FUN_149641dbe(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCornerModeSelectedCornerChange");
  return param_2;
}



// FUNCTION 149641dde FUN_149641dde body=29 status=ok
// SIG undefined FUN_149641dde(void)

undefined8 FUN_149641dde(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641dfc FUN_149641dfc body=78 status=ok
// SIG undefined FUN_149641dfc(void)

void FUN_149641dfc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641e0c;
  }
  param_2 = (longlong *)0x0;
LAB_149641e0c:
                    /* WARNING: Could not recover jumptable at 0x000149641e22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3d0))(param_2,*(undefined4 *)(param_1 + 0xc));
  return;
}



// FUNCTION 149641e4a FUN_149641e4a body=78 status=ok
// SIG undefined FUN_149641e4a(void)

void FUN_149641e4a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641e5a;
  }
  param_2 = (longlong *)0x0;
LAB_149641e5a:
                    /* WARNING: Could not recover jumptable at 0x000149641e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3d0))(param_2,*(undefined4 *)(param_1 + 8));
  return;
}



// FUNCTION 149641e98 FUN_149641e98 body=69 status=ok
// SIG undefined FUN_149641e98(void)

ulonglong FUN_149641e98(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_145babc42();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_149641ea4;
  }
  param_2 = (longlong *)0x0;
LAB_149641ea4:
  uVar1 = (**(code **)(*param_2 + 0x3b0))(param_2);
  return uVar1 ^ 1;
}



// FUNCTION 149641ede FUN_149641ede body=32 status=ok
// SIG undefined FUN_149641ede(void)

undefined8 FUN_149641ede(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCornerModeExtrudeAmountChange");
  return param_2;
}



// FUNCTION 149641efe FUN_149641efe body=29 status=ok
// SIG undefined FUN_149641efe(void)

undefined8 FUN_149641efe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641f1e FUN_149641f1e body=67 status=ok
// SIG undefined FUN_149641f1e(void)

void FUN_149641f1e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641f2a;
  }
  param_2 = (longlong *)0x0;
LAB_149641f2a:
                    /* WARNING: Could not recover jumptable at 0x000149641f35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3b8))(param_2);
  return;
}



// FUNCTION 149641f62 FUN_149641f62 body=67 status=ok
// SIG undefined FUN_149641f62(void)

void FUN_149641f62(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_145babc42();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) goto LAB_149641f6e;
  }
  param_2 = (longlong *)0x0;
LAB_149641f6e:
                    /* WARNING: Could not recover jumptable at 0x000149641f79. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x3a8))(param_2);
  return;
}



// FUNCTION 149641fa6 FUN_149641fa6 body=32 status=ok
// SIG undefined FUN_149641fa6(void)

undefined8 FUN_149641fa6(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"CubeGridToolLocals::FCubeGridToolModeChange");
  return param_2;
}



// FUNCTION 149641fc6 FUN_149641fc6 body=29 status=ok
// SIG undefined FUN_149641fc6(void)

undefined8 FUN_149641fc6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149641fe4 FUN_149641fe4 body=112 status=ok
// SIG undefined FUN_149641fe4(void)

void FUN_149641fe4(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 149642054 FUN_149642054 body=147 status=ok
// SIG undefined FUN_149642054(void)

void FUN_149642054(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496420e8 FUN_1496420e8 body=38 status=ok
// SIG undefined FUN_1496420e8(void)

undefined8 FUN_1496420e8(undefined8 param_1,int param_2)

{
  FUN_1496422e2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964211c FUN_14964211c body=198 status=ok
// SIG undefined FUN_14964211c(void)

undefined8 * FUN_14964211c(undefined8 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_14bd8df20;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x7f7fffff;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0x404;
  param_1[6] = &DAT_14a176f00;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 1;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1411b354a(param_1 + 0x19,0,0,0,0);
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  return param_1;
}



// FUNCTION 1496421e2 FUN_1496421e2 body=60 status=ok
// SIG undefined FUN_1496421e2(void)

undefined8 * FUN_1496421e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd8dee0;
  FUN_149642244(param_1 + 9);
  FUN_140187f4a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964221e FUN_14964221e body=38 status=ok
// SIG undefined FUN_14964221e(void)

undefined8 FUN_14964221e(undefined8 param_1,int param_2)

{
  FUN_149642244();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642244 FUN_149642244 body=157 status=ok
// SIG undefined FUN_149642244(void)

void FUN_149642244(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14bd8df20;
  puVar1 = (undefined8 *)param_1[0x5f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  FUN_141082778(param_1 + 0x19);
  param_1[6] = &DAT_14a176f00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = &PTR_FUN_14a177080;
  FUN_144a78a1a(param_1 + 7);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1496422e2 FUN_1496422e2 body=108 status=ok
// SIG undefined FUN_1496422e2(void)

void FUN_1496422e2(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bd8dea0;
  piVar2 = (int *)param_1[0x6a];
  if (piVar2 != (int *)0x0) {
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x6b];
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
  *param_1 = &PTR_FUN_14bd8dee0;
  FUN_149642244(param_1 + 9);
  FUN_140187f4a(param_1);
  return;
}



// FUNCTION 14964234e FUN_14964234e body=28 status=ok
// SIG undefined FUN_14964234e(void)

void FUN_14964234e(longlong param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined1 *)(param_1 + 0x20);
    do {
      *(undefined8 *)(puVar1 + -8) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x28;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14964236a FUN_14964236a body=62 status=ok
// SIG undefined FUN_14964236a(void)

void FUN_14964236a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1496423a8(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1496423a8 FUN_1496423a8 body=112 status=ok
// SIG undefined FUN_1496423a8(void)

ulonglong FUN_1496423a8(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1496423e2;
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
LAB_1496423e2:
  return param_2 & 0xffffffff;
}



// FUNCTION 149642424 FUN_149642424 body=68 status=ok
// SIG undefined FUN_149642424(void)

undefined8 * FUN_149642424(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = IQueuedWork::vftable;
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642468 FUN_149642468 body=30 status=ok
// SIG undefined FUN_149642468(void)

void FUN_149642468(longlong param_1)

{
  FUN_149642486(param_1 + 0x10);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 149642486 FUN_149642486 body=70 status=ok
// SIG undefined FUN_149642486(void)

void FUN_149642486(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd8df60;
  FUN_14455e05a();
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5f] != 0) {
    FUN_1400020a8();
  }
  FUN_145cbfe42(param_1);
  return;
}



// FUNCTION 1496424cc FUN_1496424cc body=38 status=ok
// SIG undefined FUN_1496424cc(void)

undefined8 FUN_1496424cc(undefined8 param_1,int param_2)

{
  FUN_149642486();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496424f2 FUN_1496424f2 body=29 status=ok
// SIG undefined FUN_1496424f2(void)

undefined8 FUN_1496424f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964252a FUN_14964252a body=29 status=ok
// SIG undefined FUN_14964252a(void)

bool FUN_14964252a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149642548 FUN_149642548 body=26 status=ok
// SIG undefined FUN_149642548(void)

bool FUN_149642548(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149642562 FUN_149642562 body=24 status=ok
// SIG undefined FUN_149642562(void)

bool FUN_149642562(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14964257a FUN_14964257a body=101 status=ok
// SIG undefined FUN_14964257a(void)

void FUN_14964257a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8dfc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496425e0 FUN_1496425e0 body=101 status=ok
// SIG undefined FUN_1496425e0(void)

void FUN_1496425e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8dfc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149642646 FUN_149642646 body=134 status=ok
// SIG undefined FUN_149642646(void)

void FUN_149642646(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8dfc0;
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
                    /* WARNING: Could not recover jumptable at 0x0001496426bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1496426cc FUN_1496426cc body=39 status=ok
// SIG undefined FUN_1496426cc(void)

void FUN_1496426cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001496426ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1496426f4 FUN_1496426f4 body=146 status=ok
// SIG undefined FUN_1496426f4(void)

bool FUN_1496426f4(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149642788 FUN_149642788 body=194 status=ok
// SIG undefined FUN_149642788(void)

ulonglong FUN_149642788(char *param_1,double *param_2)

{
  ulonglong uVar1;
  double dVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  
  if (*param_1 == '\x01') {
    dVar4 = 1.0 - (1.0 / *(double *)(param_1 + 0x28) + 2.0) * *(double *)(param_1 + 0x20);
    dVar2 = 1.0 / *(double *)(param_1 + 0x28) + dVar4;
    dVar5 = 1.0;
    if (dVar2 <= 1.0) {
      dVar5 = dVar2;
    }
    dVar5 = dVar5 - dVar4;
    uVar1 = -(ulonglong)(-dVar5 <= dVar5);
    uVar3 = 0;
    if (1e-08 <= (double)(~uVar1 & (ulonglong)-dVar5 | uVar1 & (ulonglong)dVar5)) {
      dVar5 = ((param_2[2] * *(double *)(param_1 + 0x18) +
               *param_2 * *(double *)(param_1 + 8) + param_2[1] * *(double *)(param_1 + 0x10)) -
              dVar4) / dVar5;
      dVar2 = 1.0;
      if (dVar5 <= 1.0) {
        dVar2 = dVar5;
      }
      uVar3 = ~-(ulonglong)(dVar5 < 0.0) & (ulonglong)dVar2;
    }
    return uVar3;
  }
  return 0x3ff0000000000000;
}



// FUNCTION 14964284a FUN_14964284a body=24 status=ok
// SIG undefined FUN_14964284a(void)

void FUN_14964284a(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014964285e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149642862 FUN_149642862 body=29 status=ok
// SIG undefined FUN_149642862(void)

undefined8 FUN_149642862(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642880 FUN_149642880 body=199 status=ok
// SIG undefined FUN_149642880(void)

undefined8 * FUN_149642880(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8e190;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8e1b0;
  param_1[7] = param_2;
  param_1[2] = &LAB_149642a74;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8e1d0;
  param_1[0x17] = &LAB_149642ac2;
  param_1[0x12] = &LAB_149642aca;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149642948 FUN_149642948 body=38 status=ok
// SIG undefined FUN_149642948(void)

undefined8 FUN_149642948(undefined8 param_1,int param_2)

{
  FUN_149642b1e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964296e FUN_14964296e body=207 status=ok
// SIG undefined FUN_14964296e(void)

void FUN_14964296e(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149642a1f;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149642a1f:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149642a3e FUN_149642a3e body=53 status=ok
// SIG undefined FUN_149642a3e(void)

void FUN_149642a3e(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149642aa4 FUN_149642aa4 body=29 status=ok
// SIG undefined FUN_149642aa4(void)

undefined8 FUN_149642aa4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642b00 FUN_149642b00 body=29 status=ok
// SIG undefined FUN_149642b00(void)

undefined8 FUN_149642b00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642b1e FUN_149642b1e body=127 status=ok
// SIG undefined FUN_149642b1e(void)

void FUN_149642b1e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8e190;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149642b9e FUN_149642b9e body=199 status=ok
// SIG undefined FUN_149642b9e(void)

undefined8 * FUN_149642b9e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8e210;
  *(undefined1 *)((longlong)param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8e230;
  param_1[7] = param_2;
  param_1[2] = &LAB_149642d92;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8e250;
  param_1[0x17] = &LAB_149642de0;
  param_1[0x12] = &LAB_149642de8;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149642c66 FUN_149642c66 body=38 status=ok
// SIG undefined FUN_149642c66(void)

undefined8 FUN_149642c66(undefined8 param_1,int param_2)

{
  FUN_149642e3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642c8c FUN_149642c8c body=207 status=ok
// SIG undefined FUN_149642c8c(void)

void FUN_149642c8c(longlong param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [39];
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_21 = (*pcVar2)(uVar4);
  puVar1 = (undefined1 *)(param_1 + 8);
  if (*(char *)(param_1 + 9) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_21);
    if (cVar3 == '\0') goto LAB_149642d3d;
  }
  if (&local_21 != puVar1) {
    *(undefined1 *)(param_1 + 8) = local_21;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149642d3d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149642d5c FUN_149642d5c body=53 status=ok
// SIG undefined FUN_149642d5c(void)

void FUN_149642d5c(longlong param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined1 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 149642dc2 FUN_149642dc2 body=29 status=ok
// SIG undefined FUN_149642dc2(void)

undefined8 FUN_149642dc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642e1e FUN_149642e1e body=29 status=ok
// SIG undefined FUN_149642e1e(void)

undefined8 FUN_149642e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642e3c FUN_149642e3c body=127 status=ok
// SIG undefined FUN_149642e3c(void)

void FUN_149642e3c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8e210;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 9) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 9) = 0;
  }
  return;
}



// FUNCTION 149642ebc FUN_149642ebc body=52 status=ok
// SIG undefined FUN_149642ebc(void)

undefined8 * FUN_149642ebc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bd8e290;
  FUN_14962709c(param_1 + 2);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642ef0 FUN_149642ef0 body=79 status=ok
// SIG undefined FUN_149642ef0(void)

undefined8 * FUN_149642ef0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = FUN_14001cc68(0xd0,0x10);
  FUN_149623238(uVar2,uVar1,param_1 + 0x10,*(undefined1 *)(param_1 + 0x48));
  *param_2 = uVar2;
  return param_2;
}



// FUNCTION 149642f40 FUN_149642f40 body=47 status=ok
// SIG undefined FUN_149642f40(void)

void FUN_149642f40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 149642f70 FUN_149642f70 body=29 status=ok
// SIG undefined FUN_149642f70(void)

undefined8 FUN_149642f70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149642f8e FUN_149642f8e body=199 status=ok
// SIG undefined FUN_149642f8e(void)

undefined8 * FUN_149642f8e(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8e370;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8e390;
  param_1[7] = param_2;
  param_1[2] = &LAB_149643182;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8e3b0;
  param_1[0x17] = &LAB_1496431d0;
  param_1[0x12] = &LAB_1496431d8;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149643056 FUN_149643056 body=38 status=ok
// SIG undefined FUN_149643056(void)

undefined8 FUN_149643056(undefined8 param_1,int param_2)

{
  FUN_14964322c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964307c FUN_14964307c body=207 status=ok
// SIG undefined FUN_14964307c(void)

void FUN_14964307c(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14964312d;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14964312d:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964314c FUN_14964314c body=53 status=ok
// SIG undefined FUN_14964314c(void)

void FUN_14964314c(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 1496431b2 FUN_1496431b2 body=29 status=ok
// SIG undefined FUN_1496431b2(void)

undefined8 FUN_1496431b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964320e FUN_14964320e body=29 status=ok
// SIG undefined FUN_14964320e(void)

undefined8 FUN_14964320e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964322c FUN_14964322c body=127 status=ok
// SIG undefined FUN_14964322c(void)

void FUN_14964322c(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8e370;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1496432ac FUN_1496432ac body=199 status=ok
// SIG undefined FUN_1496432ac(void)

undefined8 * FUN_1496432ac(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8e3f0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8e410;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496434a0;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8e430;
  param_1[0x17] = &LAB_1496434ee;
  param_1[0x12] = &LAB_1496434f6;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149643374 FUN_149643374 body=38 status=ok
// SIG undefined FUN_149643374(void)

undefined8 FUN_149643374(undefined8 param_1,int param_2)

{
  FUN_14964354a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964339a FUN_14964339a body=207 status=ok
// SIG undefined FUN_14964339a(void)

void FUN_14964339a(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_14964344b;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_14964344b:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964346a FUN_14964346a body=53 status=ok
// SIG undefined FUN_14964346a(void)

void FUN_14964346a(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 1496434d0 FUN_1496434d0 body=29 status=ok
// SIG undefined FUN_1496434d0(void)

undefined8 FUN_1496434d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964352c FUN_14964352c body=29 status=ok
// SIG undefined FUN_14964352c(void)

undefined8 FUN_14964352c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964354a FUN_14964354a body=127 status=ok
// SIG undefined FUN_14964354a(void)

void FUN_14964354a(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8e3f0;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1496435ca FUN_1496435ca body=199 status=ok
// SIG undefined FUN_1496435ca(void)

undefined8 * FUN_1496435ca(undefined8 *param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  *param_1 = &PTR_FUN_14bd8e470;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  param_1[4] = 0;
  param_1[6] = &PTR_LAB_14bd8e490;
  param_1[7] = param_2;
  param_1[2] = &LAB_1496437be;
  param_1[10] = *param_3;
  param_1[0xc] = param_3[2];
  param_3[2] = 0;
  lVar5 = param_3[4];
  uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
  lVar6 = param_3[5];
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_3 + 0x34);
  lVar7 = param_3[7];
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_3[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] != 0) {
    *param_3 = 0;
  }
  param_1[0x14] = 0;
  param_1[0x16] = &PTR_LAB_14bd8e4b0;
  param_1[0x17] = &LAB_14964380c;
  param_1[0x12] = &LAB_149643814;
  if (*param_3 != 0) {
    plVar8 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar8 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar8 + 0x10))(plVar8);
  }
  return param_1;
}



// FUNCTION 149643692 FUN_149643692 body=38 status=ok
// SIG undefined FUN_149643692(void)

undefined8 FUN_149643692(undefined8 param_1,int param_2)

{
  FUN_149643868();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1496436b8 FUN_1496436b8 body=207 status=ok
// SIG undefined FUN_1496436b8(void)

void FUN_1496436b8(longlong param_1)

{
  undefined4 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_48 [36];
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar2 = *(code **)(param_1 + 0x10);
  plVar5 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
  }
  uVar4 = (**(code **)(*plVar5 + 8))();
  local_24 = (*pcVar2)(uVar4);
  puVar1 = (undefined4 *)(param_1 + 8);
  if (*(char *)(param_1 + 0xc) == '\x01') {
    pcVar2 = *(code **)(param_1 + 0x90);
    plVar5 = (longlong *)(param_1 + 0xb0);
    if (*(longlong **)(param_1 + 0xa0) != (longlong *)0x0) {
      plVar5 = *(longlong **)(param_1 + 0xa0);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar2)(uVar4,puVar1,&local_24);
    if (cVar3 == '\0') goto LAB_149643769;
  }
  if (&local_24 != puVar1) {
    *(undefined4 *)(param_1 + 8) = local_24;
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  pcVar2 = *(code **)(param_1 + 0x50);
  plVar5 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x60);
  }
  uVar4 = (**(code **)(*plVar5 + 8))(plVar5);
  (*pcVar2)(uVar4,puVar1);
LAB_149643769:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149643788 FUN_149643788 body=53 status=ok
// SIG undefined FUN_149643788(void)

void FUN_149643788(longlong param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pcVar1 = *(code **)(param_1 + 0x10);
  plVar4 = (longlong *)(param_1 + 0x30);
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_1 + 0x20);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  uVar2 = (*pcVar1)(uVar3);
  *(undefined4 *)(param_1 + 8) = uVar2;
  *(undefined1 *)(param_1 + 0xc) = 1;
  return;
}



// FUNCTION 1496437ee FUN_1496437ee body=29 status=ok
// SIG undefined FUN_1496437ee(void)

undefined8 FUN_1496437ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14964384a FUN_14964384a body=29 status=ok
// SIG undefined FUN_14964384a(void)

undefined8 FUN_14964384a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149643868 FUN_149643868 body=127 status=ok
// SIG undefined FUN_149643868(void)

void FUN_149643868(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14bd8e470;
  if (param_1[0x12] != 0) {
    plVar1 = param_1 + 0x16;
    if ((longlong *)param_1[0x14] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x14];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[10] != 0) {
    plVar1 = param_1 + 0xe;
    if ((longlong *)param_1[0xc] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0xc];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (param_1[2] != 0) {
    plVar1 = param_1 + 6;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(char *)((longlong)param_1 + 0xc) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  }
  return;
}



// FUNCTION 1496438ea FUN_1496438ea body=29 status=ok
// SIG undefined FUN_1496438ea(void)

undefined8 FUN_1496438ea(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149643908 FUN_149643908 body=29 status=ok
// SIG undefined FUN_149643908(void)

undefined8 FUN_149643908(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149643940 FUN_149643940 body=29 status=ok
// SIG undefined FUN_149643940(void)

bool FUN_149643940(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14964395e FUN_14964395e body=26 status=ok
// SIG undefined FUN_14964395e(void)

bool FUN_14964395e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149643978 FUN_149643978 body=24 status=ok
// SIG undefined FUN_149643978(void)

bool FUN_149643978(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149643990 FUN_149643990 body=101 status=ok
// SIG undefined FUN_149643990(void)

void FUN_149643990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496439f6 FUN_1496439f6 body=101 status=ok
// SIG undefined FUN_1496439f6(void)

void FUN_1496439f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e5e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149643a5c FUN_149643a5c body=134 status=ok
// SIG undefined FUN_149643a5c(void)

void FUN_149643a5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8e5e0;
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
                    /* WARNING: Could not recover jumptable at 0x000149643ad3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149643ae2 FUN_149643ae2 body=39 status=ok
// SIG undefined FUN_149643ae2(void)

void FUN_149643ae2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149643b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 149643b0a FUN_149643b0a body=146 status=ok
// SIG undefined FUN_149643b0a(void)

bool FUN_149643b0a(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149643b9e FUN_149643b9e body=29 status=ok
// SIG undefined FUN_149643b9e(void)

undefined8 FUN_149643b9e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149643bd6 FUN_149643bd6 body=29 status=ok
// SIG undefined FUN_149643bd6(void)

bool FUN_149643bd6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149643bf4 FUN_149643bf4 body=26 status=ok
// SIG undefined FUN_149643bf4(void)

bool FUN_149643bf4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149643c0e FUN_149643c0e body=24 status=ok
// SIG undefined FUN_149643c0e(void)

bool FUN_149643c0e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149643c26 FUN_149643c26 body=101 status=ok
// SIG undefined FUN_149643c26(void)

void FUN_149643c26(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149643c8c FUN_149643c8c body=101 status=ok
// SIG undefined FUN_149643c8c(void)

void FUN_149643c8c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e650;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 149643cf2 FUN_149643cf2 body=134 status=ok
// SIG undefined FUN_149643cf2(void)

void FUN_149643cf2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8e650;
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
                    /* WARNING: Could not recover jumptable at 0x000149643d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149643d78 FUN_149643d78 body=39 status=ok
// SIG undefined FUN_149643d78(void)

void FUN_149643d78(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000149643d9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 149643da0 FUN_149643da0 body=146 status=ok
// SIG undefined FUN_149643da0(void)

bool FUN_149643da0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149643e34 FUN_149643e34 body=290 status=ok
// SIG undefined FUN_149643e34(void)

longlong * FUN_149643e34(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149643f58 FUN_149643f58 body=290 status=ok
// SIG undefined FUN_149643f58(void)

longlong * FUN_149643f58(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964407c FUN_14964407c body=290 status=ok
// SIG undefined FUN_14964407c(void)

longlong * FUN_14964407c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496441a0 FUN_1496441a0 body=290 status=ok
// SIG undefined FUN_1496441a0(void)

longlong * FUN_1496441a0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496442c4 FUN_1496442c4 body=290 status=ok
// SIG undefined FUN_1496442c4(void)

longlong * FUN_1496442c4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496443e8 FUN_1496443e8 body=290 status=ok
// SIG undefined FUN_1496443e8(void)

longlong * FUN_1496443e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964450c FUN_14964450c body=290 status=ok
// SIG undefined FUN_14964450c(void)

longlong * FUN_14964450c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644630 FUN_149644630 body=290 status=ok
// SIG undefined FUN_149644630(void)

longlong * FUN_149644630(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644754 FUN_149644754 body=290 status=ok
// SIG undefined FUN_149644754(void)

longlong * FUN_149644754(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644878 FUN_149644878 body=290 status=ok
// SIG undefined FUN_149644878(void)

longlong * FUN_149644878(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964499c FUN_14964499c body=290 status=ok
// SIG undefined FUN_14964499c(void)

longlong * FUN_14964499c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644ac0 FUN_149644ac0 body=290 status=ok
// SIG undefined FUN_149644ac0(void)

longlong * FUN_149644ac0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644be4 FUN_149644be4 body=290 status=ok
// SIG undefined FUN_149644be4(void)

longlong * FUN_149644be4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644d08 FUN_149644d08 body=290 status=ok
// SIG undefined FUN_149644d08(void)

longlong * FUN_149644d08(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644e2c FUN_149644e2c body=290 status=ok
// SIG undefined FUN_149644e2c(void)

longlong * FUN_149644e2c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149644f50 FUN_149644f50 body=29 status=ok
// SIG undefined FUN_149644f50(void)

undefined8 FUN_149644f50(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149644f88 FUN_149644f88 body=29 status=ok
// SIG undefined FUN_149644f88(void)

bool FUN_149644f88(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 149644fa6 FUN_149644fa6 body=26 status=ok
// SIG undefined FUN_149644fa6(void)

bool FUN_149644fa6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 149644fc0 FUN_149644fc0 body=24 status=ok
// SIG undefined FUN_149644fc0(void)

bool FUN_149644fc0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 149644fd8 FUN_149644fd8 body=101 status=ok
// SIG undefined FUN_149644fd8(void)

void FUN_149644fd8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 14964503e FUN_14964503e body=101 status=ok
// SIG undefined FUN_14964503e(void)

void FUN_14964503e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14aeff220;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e9c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1496450a4 FUN_1496450a4 body=134 status=ok
// SIG undefined FUN_1496450a4(void)

void FUN_1496450a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14aeff220;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8e9c0;
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
                    /* WARNING: Could not recover jumptable at 0x00014964511b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14964512a FUN_14964512a body=118 status=ok
// SIG undefined FUN_14964512a(void)

void FUN_14964512a(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_14479d2ce(param_1 + 0x18);
  pcVar2 = *(code **)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x28);
  puVar5 = local_88;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar5 = *param_3;
    param_3 = param_3 + 1;
    puVar5 = puVar5 + 1;
  }
  (*pcVar2)(iVar1 + lVar3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496451a2 FUN_1496451a2 body=199 status=ok
// SIG undefined FUN_1496451a2(void)

bool FUN_1496451a2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  longlong local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar3 = FUN_144a61b4f();
  if (cVar3 == '\0') {
    FUN_140192332(param_1 + 0x18,local_98,0);
    lVar7 = local_98[0];
  }
  else {
    lVar7 = 0;
  }
  lVar4 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar4 != 0) {
    pcVar2 = *(code **)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x28);
    plVar6 = local_98;
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *plVar6 = *param_3;
      param_3 = param_3 + 1;
      plVar6 = plVar6 + 1;
    }
    (*pcVar2)(iVar1 + lVar4,param_2);
  }
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964526a FUN_14964526a body=124 status=ok
// SIG undefined FUN_14964526a(void)

void FUN_14964526a(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
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
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    iVar2 = FUN_144a3809e(lVar4,1);
    iVar5 = 0x7fffffff;
    if ((int)uVar1 <= iVar2) {
      iVar5 = iVar2;
    }
    *(int *)(param_1 + 0xc) = iVar5;
    FUN_1446f8d3c(param_1,param_2,iVar5,1,1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1496452e8 FUN_1496452e8 body=501 status=ok
// SIG undefined FUN_1496452e8(void)

void FUN_1496452e8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [40];
  double local_90;
  longlong *plStack_88;
  double local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  double local_70;
  double local_68;
  longlong *local_60;
  undefined8 local_58;
  longlong *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_90 = 2.12199579096527e-314;
  local_80 = 2.12199579047121e-314;
  uStack_78 = 0;
  plStack_88 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    iVar5 = (int)param_2[5];
  }
  uStack_40 = CONCAT44(uStack_74,uStack_78);
  local_48 = local_80;
  dVar6 = local_48;
  local_58 = local_90;
  plStack_50 = plStack_88;
  local_48._4_4_ = (int)((ulonglong)local_80 >> 0x20);
  iVar4 = local_48._4_4_;
  local_60 = param_2;
  if ((local_48._4_4_ != iVar5) || (local_48 = dVar6, plStack_88 != plVar1)) {
    do {
      local_48 = dVar6;
      uVar2 = *(uint *)(*local_60 + (longlong)iVar4 * 0xc);
      if ((-1 < (int)uVar2) &&
         ((lVar3 = *(longlong *)(param_1 + 0x1d0),
          (int)uVar2 < *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                              (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)))) {
        FUN_146c14aac(lVar3,&local_90);
        dVar6 = *(double *)(param_1 + 0x1d8);
        if (local_90 <= *(double *)(param_1 + 0x1d8)) {
          dVar6 = local_90;
        }
        *(double *)(param_1 + 0x1d8) = dVar6;
        plVar7 = *(longlong **)(param_1 + 0x1e0);
        if ((double)plStack_88 <= (double)*(longlong **)(param_1 + 0x1e0)) {
          plVar7 = plStack_88;
        }
        *(longlong **)(param_1 + 0x1e0) = plVar7;
        dVar6 = *(double *)(param_1 + 0x1e8);
        if (local_80 <= *(double *)(param_1 + 0x1e8)) {
          dVar6 = local_80;
        }
        *(double *)(param_1 + 0x1e8) = dVar6;
        dVar6 = *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x1f0) <= (double)CONCAT44(uStack_74,uStack_78)) {
          dVar6 = (double)CONCAT44(uStack_74,uStack_78);
        }
        *(double *)(param_1 + 0x1f0) = dVar6;
        dVar6 = *(double *)(param_1 + 0x1f8);
        if (*(double *)(param_1 + 0x1f8) <= local_70) {
          dVar6 = local_70;
        }
        *(double *)(param_1 + 0x1f8) = dVar6;
        dVar6 = *(double *)(param_1 + 0x200);
        if (*(double *)(param_1 + 0x200) <= local_68) {
          dVar6 = local_68;
        }
        *(double *)(param_1 + 0x200) = dVar6;
      }
      local_48 = (double)CONCAT44(local_48._4_4_,(uint)local_48 & ~local_58._4_4_);
      FUN_1449c0562(&local_58);
      iVar4 = local_48._4_4_;
      dVar6 = local_48;
    } while (local_60 != param_2 || (plStack_50 != plVar1 || local_48._4_4_ != iVar5));
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496454de FUN_1496454de body=535 status=ok
// SIG undefined FUN_1496454de(void)

void FUN_1496454de(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  double local_98;
  longlong *plStack_90;
  double local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  double local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = param_2 + 2;
  local_98 = 2.12199579096527e-314;
  local_88 = 2.12199579047121e-314;
  uStack_80 = 0;
  plStack_90 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_98);
    iVar5 = (int)param_2[5];
  }
  uStack_48 = CONCAT44(uStack_7c,uStack_80);
  local_50 = local_88;
  dVar6 = local_50;
  local_60 = local_98;
  plStack_58 = plStack_90;
  local_50._4_4_ = (int)((ulonglong)local_88 >> 0x20);
  iVar4 = local_50._4_4_;
  local_68 = param_2;
  if ((local_50._4_4_ != iVar5) || (local_50 = dVar6, plStack_90 != plVar1)) {
    do {
      local_50 = dVar6;
      uVar2 = *(uint *)(*local_68 + (longlong)iVar4 * 0xc);
      if (((int)uVar2 < 0) ||
         ((lVar3 = *(longlong *)(param_1 + 0x1d0),
          *(int *)(lVar3 + 0x140) * 0x200 + *(int *)(lVar3 + 0x144) <= (int)uVar2 ||
          (0xfffd < (ushort)(*(short *)(*(longlong *)
                                         (*(longlong *)(lVar3 + 0x148) + (ulonglong)(uVar2 >> 9) * 8
                                         ) + (ulonglong)(uVar2 & 0x1ff) * 2) - 1U))))) {
        FUN_146c86e00(param_1,uVar2);
      }
      else {
        FUN_146c14aac(lVar3,&local_98,uVar2);
        dVar6 = *(double *)(param_1 + 0x1d8);
        if (local_98 <= *(double *)(param_1 + 0x1d8)) {
          dVar6 = local_98;
        }
        *(double *)(param_1 + 0x1d8) = dVar6;
        plVar7 = *(longlong **)(param_1 + 0x1e0);
        if ((double)plStack_90 <= (double)*(longlong **)(param_1 + 0x1e0)) {
          plVar7 = plStack_90;
        }
        *(longlong **)(param_1 + 0x1e0) = plVar7;
        dVar6 = *(double *)(param_1 + 0x1e8);
        if (local_88 <= *(double *)(param_1 + 0x1e8)) {
          dVar6 = local_88;
        }
        *(double *)(param_1 + 0x1e8) = dVar6;
        dVar6 = *(double *)(param_1 + 0x1f0);
        if (*(double *)(param_1 + 0x1f0) <= (double)CONCAT44(uStack_7c,uStack_80)) {
          dVar6 = (double)CONCAT44(uStack_7c,uStack_80);
        }
        *(double *)(param_1 + 0x1f0) = dVar6;
        dVar6 = *(double *)(param_1 + 0x1f8);
        if (*(double *)(param_1 + 0x1f8) <= local_78) {
          dVar6 = local_78;
        }
        *(double *)(param_1 + 0x1f8) = dVar6;
        dVar6 = *(double *)(param_1 + 0x200);
        if (*(double *)(param_1 + 0x200) <= local_70) {
          dVar6 = local_70;
        }
        *(double *)(param_1 + 0x200) = dVar6;
        FUN_146c87142(param_1,uVar2,&local_98,0xffffffff);
      }
      local_50 = (double)CONCAT44(local_50._4_4_,(uint)local_50 & ~local_60._4_4_);
      FUN_1449c0562(&local_60);
      iVar4 = local_50._4_4_;
      dVar6 = local_50;
    } while (local_68 != param_2 || (plStack_58 != plVar1 || local_50._4_4_ != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496456f6 FUN_1496456f6 body=87 status=ok
// SIG undefined FUN_1496456f6(void)

undefined8 * FUN_1496456f6(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  param_1[1] = 0;
  *param_1 = param_2;
  uVar2 = FUN_14001cc68(0x480,0x10);
  FUN_1483324b2(uVar2,param_2);
  puVar1 = (undefined8 *)param_1[1];
  param_1[1] = uVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return param_1;
}



// FUNCTION 14964574e FUN_14964574e body=24 status=ok
// SIG undefined FUN_14964574e(void)

void FUN_14964574e(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x18);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149645762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 149645766 FUN_149645766 body=29 status=ok
// SIG undefined FUN_149645766(void)

undefined8 FUN_149645766(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 149645784 FUN_149645784 body=120 status=ok
// SIG undefined FUN_149645784(void)

void FUN_149645784(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14bd83110;
  FUN_14962709c(param_1 + 0x12);
  plVar1 = (longlong *)param_1[0x11];
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
  }
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496457f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,1);
    return;
  }
  return;
}



// FUNCTION 1496457fc FUN_1496457fc body=179 status=ok
// SIG undefined FUN_1496457fc(void)

void FUN_1496457fc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14bd83130;
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_1496270fa(param_1 + 0x14);
  plVar3 = (longlong *)param_1[0x12];
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
  *param_1 = &PTR_LAB_14aee4ae0;
  FUN_146c81a14(param_1 + 0xc);
  puVar4 = (undefined8 *)param_1[1];
  if (puVar4 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001496458a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar4)(puVar4,1);
    return;
  }
  return;
}



// FUNCTION 1496458f1 FUN_1496458f1 body=148 status=ok
// SIG undefined FUN_1496458f1(void)

undefined8 FUN_1496458f1(undefined8 param_1)

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
  uVar1 = FUN_1459fa45e();
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



// FUNCTION 149645986 FUN_149645986 body=428 status=ok
// SIG undefined FUN_149645986(void)

void FUN_149645986(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  int local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)param_3[2];
  uVar5 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar1 + 0x2e0))(plVar1,&local_98,param_3,uVar5);
  iVar3 = local_90;
  puVar2 = local_98;
  local_a8 = 0;
  local_a0 = local_90;
  if (local_90 == 0) {
    local_9c = 0;
  }
  else {
    FUN_1484d7836(&local_a8,local_90,0);
    FUN_1484d7898(local_a8,puVar2,iVar3);
  }
  FUN_1484ca74c(param_2,&local_a8);
  (**(code **)(*param_2 + 0x388))(param_2,*param_3);
  if (param_2 != (longlong *)0x0) {
    lVar6 = FUN_1459fa45e();
    if (((*(int *)(lVar6 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
         lVar6 + 0x30)) && (local_90 == 1)) {
      local_88 = &DAT_100000004;
      local_60 = 0;
      local_58 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_54 = 0xffffffff00000080;
      local_4c = 0;
      local_40 = 0;
      local_38 = 0;
      cVar4 = FUN_1485504c8(param_3,*local_98,&local_88);
      if (cVar4 != '\0') {
        param_2[0x2c] = (longlong)local_88;
        FUN_1484d24e8(param_2 + 0x2d,&local_80);
      }
      local_38 = 0;
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      FUN_140345f8a(&local_80);
    }
  }
  if (local_98 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149645b34 FUN_149645b34 body=142 status=ok
// SIG undefined FUN_149645b34(void)

bool FUN_149645b34(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  code *local_38;
  undefined1 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_1484ca608();
  if (cVar2 == '\0') {
    bVar3 = false;
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x10);
    local_30 = &local_39;
    local_38 = FUN_14456a6e8;
    uVar5 = (**(code **)(*param_1 + 0x2c0))(param_1);
    iVar4 = (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2,uVar5,&local_38);
    bVar3 = 0 < iVar4;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149645bc4 FUN_149645bc4 body=1446 status=ok
// SIG undefined FUN_149645bc4(void)

void FUN_149645bc4(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_2e8 [32];
  wchar_t **local_2c8;
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_29c [4];
  undefined1 local_298 [104];
  undefined8 local_230;
  wchar_t *local_228;
  undefined4 local_220;
  undefined1 *local_b8;
  undefined8 local_a8;
  undefined **local_98;
  longlong *local_90;
  code *local_78;
  undefined8 local_68;
  undefined **local_58;
  longlong *local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  FUN_1484416be();
  lVar4 = param_1[0x15];
  if (0 < (longlong)(int)lVar4) {
    lVar6 = 0;
    do {
      FUN_148506321(*(undefined8 *)(param_1[0x14] + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while ((int)lVar4 != lVar6);
  }
  FUN_1446f470e(&local_230,L"Mesh Normals Settings",1);
  plVar3 = (longlong *)FUN_14964616b(param_1,local_230);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x18] = (longlong)plVar3;
  FUN_140056680(&local_228,&DAT_149dfb77a);
  (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_228);
  if (local_228 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  *(bool *)(param_1[0x18] + 0xb5) = (int)param_1[0x2e] != *(int *)((longlong)param_1 + 0x19c);
  (**(code **)(*param_1 + 0x308))(param_1,param_1[0x18]);
  FUN_149646224(param_1);
  iVar2 = (int)param_1[0x1b];
  if (iVar2 == 1) {
    plVar3 = (longlong *)FUN_148f7334e(param_1);
    if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_14689c22e(plVar3);
    }
    param_1[0x19] = (longlong)plVar3;
    FUN_140056680(&local_228,L"EditNormalsTool");
    (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_228);
    if (local_228 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    FUN_14851d694(param_1[0x19],*(undefined8 *)param_1[0x1c]);
    local_68 = 0;
    local_58 = &PTR_LAB_14bdabb30;
    local_78 = FUN_14456a6fc;
    local_50 = param_1;
    FUN_1484c9a28(param_1[0x19] + 0x28,param_1[0x19] + 0xa8);
    (**(code **)(*param_1 + 0x308))(param_1,param_1[0x19]);
    FUN_149646640(param_1);
    local_a8 = 0;
    local_98 = &PTR_LAB_14bdabbb0;
    local_b8 = &LAB_14456a78a;
    local_90 = param_1;
    FUN_1496467fe(param_1[0x18] + 0x28,param_1[0x18] + 0xac);
    (**(code **)(*param_1 + 0x328))(param_1,param_1[0x19],*(char *)(param_1[0x18] + 0xac) == '\x02')
    ;
    if ((int)param_1[0x2e] != *(int *)((longlong)param_1 + 0x19c)) {
      plVar3 = (longlong *)FUN_148f8e599(param_1);
      if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(plVar3);
      }
      param_1[0x2a] = (longlong)plVar3;
      FUN_140056680(&local_228,&DAT_149dfb77a);
      (**(code **)(*plVar3 + 0x2a8))(plVar3,param_1,&local_228);
      if (local_228 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      plVar3 = param_1 + 0x2c;
      (**(code **)(*param_1 + 0x308))(param_1,param_1[0x2a]);
      FUN_14851cfa4(param_1[0x2a],param_1);
      *(char *)(param_1[0x2a] + 0xaa) = (char)param_1[0x2c];
      *(undefined1 *)(param_1[0x2a] + 0xab) = *(undefined1 *)((longlong)param_1 + 0x164);
      *(undefined1 *)(param_1[0x2a] + 0xa9) = 1;
      FUN_1485063a5(local_298,*(undefined8 *)param_1[0x14]);
      FUN_1482aa55c(&local_228,*(undefined8 *)param_1[0x1c],*(int *)((longlong)param_1 + 0x164) == 2
                   );
      plVar1 = param_1 + 0x37;
      local_2c8 = (wchar_t **)(param_1 + 0x4c);
      if (*(int *)((longlong)param_1 + 0x164) == 2) {
        local_2c0 = plVar1;
        FUN_148389660(*(undefined8 *)param_1[0x1c],&local_228,plVar3,param_1 + 0x42);
      }
      else {
        local_2c8 = (wchar_t **)plVar1;
        FUN_1483894f2(*(undefined8 *)param_1[0x1c],plVar3,param_1 + 0x42);
      }
      lVar4 = FUN_1484ec096(param_1);
      if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar4);
      }
      param_1[0x2b] = lVar4;
      uVar5 = (**(code **)(*param_1 + 0x390))(param_1);
      FUN_1484e0ce2(lVar4,uVar5,local_298);
      local_2c0 = plVar1;
      if ((int)param_1[0x39] == *(int *)((longlong)param_1 + 500)) {
        local_2c0 = (longlong *)0x0;
      }
      local_2b8 = 0;
      uStack_2b0 = 0;
      local_2c8 = &local_228;
      FUN_14852be87(param_1[0x2b],param_1[0x2a],*(undefined8 *)param_1[0x1c],plVar3);
      FUN_145aba0b4(&local_228);
    }
    iVar2 = (int)param_1[0x1b];
  }
  if (iVar2 != 0) {
    lVar4 = param_1[0x1a];
    lVar6 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar4 + lVar6));
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
  }
  local_228 = L"ToolName";
  local_220 = 8;
  FUN_1446e940c(local_298,&local_228);
  local_228 = L"UEditNormalsTool";
  local_220 = 0x10;
  FUN_1446e940c(local_29c,&local_228);
  FUN_140208bae(&local_228,local_29c,local_298,L"Edit Normals");
  (**(code **)(*param_1 + 0x370))(param_1,&local_228);
  if (local_228 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_228 + 0x10))();
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_228 = L"OnStartTool";
  local_220 = 0xb;
  FUN_1446e940c(local_298,&local_228);
  local_228 = L"UEditNormalsTool";
  local_220 = 0x10;
  FUN_1446e940c(local_29c,&local_228);
  FUN_140208bae(&local_228,local_29c,local_298,
                L"Configure or Recalculate Normals on a Mesh (disables autogenerated Normals)");
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_228,2);
  if (local_228 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_228 + 0x10))();
  }
  if ((local_30 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14964616b FUN_14964616b body=183 status=ok
// SIG undefined FUN_14964616b(void)

undefined8 FUN_14964616b(undefined8 param_1,longlong param_2)

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
  uVar1 = FUN_1459fa372();
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



// FUNCTION 149646224 FUN_149646224 body=1018 status=ok
// SIG undefined FUN_149646224(void)

void FUN_149646224(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  undefined8 local_2b0;
  int local_2a4;
  longlong *local_2a0;
  undefined8 local_298;
  void *local_290;
  int local_288;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined4 local_270;
  void *local_268;
  int local_260;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  plVar1 = param_1 + 0x1a;
  iVar12 = (int)param_1[0x1b];
  lVar11 = (longlong)iVar12;
  iVar4 = (int)param_1[0x15];
  if (iVar4 < iVar12) {
    do {
      lVar7 = lVar11 * 8;
      lVar11 = lVar11 + -1;
      FUN_143b846cc(*(undefined8 *)(*plVar1 + -8 + lVar7));
    } while (iVar4 < lVar11);
    FUN_148f8bafe(plVar1,iVar4,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_2d8);
  }
  local_2a0 = param_1 + 0x1c;
  FUN_1484ca2a6(local_2a0,iVar4,1);
  if (iVar12 < iVar4) {
    lVar11 = lVar11 << 3;
    do {
      uVar6 = FUN_1409ffe1d();
      lVar7 = FUN_1496468d3(uVar6);
      if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(param_1);
      }
      *(longlong **)(lVar7 + 0x30) = param_1;
      *(int *)(lVar7 + 0x38) = iVar12;
      plVar8 = (longlong *)FUN_14001cc68(0x230,0x10);
      plVar8[1] = (longlong)&DAT_100000001;
      *plVar8 = (longlong)&PTR_FUN_149fab260;
      local_2b8 = 0;
      FUN_1411b354a(plVar8 + 2,0,0,0);
      if (plVar8 == (longlong *)0x0) {
        lVar9 = *local_2a0;
        *(undefined8 *)(lVar9 + lVar11 * 2) = 0x10;
        plVar10 = *(longlong **)(lVar9 + 8 + lVar11 * 2);
        if (plVar10 != (longlong *)0x0) {
          *(undefined8 *)(lVar9 + 8 + lVar11 * 2) = 0;
LAB_14964637f:
          LOCK();
          plVar2 = plVar10 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar3 = (int *)((longlong)plVar10 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          if (plVar8 != (longlong *)0x0) goto LAB_1496463ee;
        }
      }
      else {
        LOCK();
        *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
        UNLOCK();
        lVar9 = *local_2a0;
        *(longlong **)(lVar9 + lVar11 * 2) = plVar8 + 2;
        plVar10 = *(longlong **)(lVar9 + 8 + lVar11 * 2);
        if (plVar8 == plVar10) {
          LOCK();
          plVar10 = plVar8 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        else {
          *(longlong **)(lVar9 + 8 + lVar11 * 2) = plVar8;
          if (plVar10 != (longlong *)0x0) goto LAB_14964637f;
        }
LAB_1496463ee:
        LOCK();
        plVar10 = plVar8 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar3 = (int *)((longlong)plVar8 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      local_270 = 0;
      local_278 = 0x3e800000000;
      FUN_148506727(&local_268,*(undefined8 *)(param_1[0x14] + lVar11),&local_278);
      FUN_146c00942(*(undefined8 *)(param_1[0x1c] + lVar11 * 2),&local_268);
      FUN_141082778(&local_268);
      FUN_1446ddc76(&local_280,"Preview",1);
      local_2b0 = 0;
      local_2b8 = 0;
      lVar9 = FUN_1484c90fb(lVar7,local_280,0);
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar9);
      }
      iVar5 = (int)param_1[0x1b];
      *(uint *)(param_1 + 0x1b) = iVar5 + 1U;
      local_2a4 = iVar12;
      if (*(uint *)((longlong)param_1 + 0xdc) < iVar5 + 1U) {
        FUN_148f93520(plVar1,iVar5);
      }
      lVar13 = *plVar1;
      *(longlong *)(lVar13 + (longlong)iVar5 * 8) = lVar9;
      if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_14689c22e(lVar9);
        lVar9 = *(longlong *)(lVar13 + (longlong)iVar5 * 8);
      }
      lVar13 = lVar7 + 0x28;
      if (lVar7 == 0) {
        lVar13 = 0;
      }
      uVar6 = (**(code **)(*param_1 + 0x390))(param_1);
      FUN_148504f74(lVar9,uVar6,lVar13);
      FUN_148558526(*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(param_1[0x14] + lVar11));
      FUN_14851b65c(*(undefined8 *)(lVar9 + 0x58),1);
      FUN_148506417(&local_268,*(undefined8 *)(param_1[0x14] + lVar11),0);
      uVar6 = (**(code **)(*param_1 + 0x2c8))(param_1);
      uVar6 = FUN_1485578f6(uVar6);
      _Src = local_268;
      local_290 = (void *)0x0;
      lVar7 = (longlong)local_260;
      local_288 = local_260;
      if (lVar7 == 0) {
        local_284 = 0;
      }
      else {
        local_298 = uVar6;
        FUN_1411312f2(&local_290,local_260,0);
        memcpy(local_290,_Src,lVar7 << 3);
      }
      iVar12 = local_2a4;
      FUN_1485053d2(lVar9,&local_290);
      FUN_1485054ca(lVar9,1);
      if (local_268 != (void *)0x0) {
        FUN_1400020a8();
      }
      iVar12 = iVar12 + 1;
      lVar11 = lVar11 + 8;
    } while (iVar4 != iVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149646640 FUN_149646640 body=445 status=ok
// SIG undefined FUN_149646640(void)

void FUN_149646640(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (1 < *(int *)(param_1 + 0xe8)) {
    return;
  }
  cVar5 = FUN_14851db82(*(undefined8 *)(param_1 + 200));
  if (cVar5 == '\0') {
    lVar4 = **(longlong **)(param_1 + 0xe0);
    plVar7 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14ba272d0;
    plVar8 = plVar7 + 2;
    plVar7[3] = 0;
    plVar7[2] = lVar4;
    plVar7[4] = 0xffffffff;
    FUN_148376a28(plVar8);
  }
  else {
    uVar6 = FUN_14837b9bf(**(undefined8 **)(param_1 + 0xe0),
                          *(undefined8 *)(*(longlong *)(param_1 + 200) + 0xa8));
    uVar3 = **(undefined8 **)(param_1 + 0xe0);
    plVar7 = (longlong *)FUN_14001cc68(0x28,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14ba272d0;
    plVar8 = plVar7 + 2;
    FUN_148376c7c(plVar8,uVar3,uVar6);
  }
  if (plVar7 == (longlong *)0x0) {
    *(longlong **)(param_1 + 0x140) = plVar8;
    plVar8 = *(longlong **)(param_1 + 0x148);
    if (plVar8 == (longlong *)0x0) {
      return;
    }
    *(undefined8 *)(param_1 + 0x148) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 0x140) = plVar8;
    plVar8 = *(longlong **)(param_1 + 0x148);
    if (plVar7 == plVar8) {
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
      goto LAB_14964672f;
    }
    *(longlong **)(param_1 + 0x148) = plVar7;
    if (plVar8 == (longlong *)0x0) goto LAB_14964672f;
  }
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
  if (plVar7 == (longlong *)0x0) {
    return;
  }
LAB_14964672f:
  LOCK();
  plVar8 = plVar7 + 1;
  *(int *)plVar8 = (int)*plVar8 + -1;
  UNLOCK();
  if ((int)*plVar8 == 0) {
    (**(code **)*plVar7)(plVar7);
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      return;
    }
  }
  return;
}



// FUNCTION 1496467fe FUN_1496467fe body=212 status=ok
// SIG undefined FUN_1496467fe(void)

void FUN_1496467fe(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [6];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = FUN_14001cc68(0xd0,0x10);
  local_68[0] = *param_3;
  local_58[0] = 0;
  if (local_68[0] != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)*plVar3)(plVar3,local_58);
  }
  FUN_14967ee1a(uVar2,param_2,local_68);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14588c84a(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496468d3 FUN_1496468d3 body=148 status=ok
// SIG undefined FUN_1496468d3(void)

undefined8 FUN_1496468d3(undefined8 param_1)

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
  uVar1 = FUN_145b14c44();
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



// FUNCTION 149646968 FUN_149646968 body=580 status=ok
// SIG undefined FUN_149646968(void)

/* WARNING: Removing unreachable block (ram,0x000149646b7e) */

void FUN_149646968(longlong param_1,char param_2)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_d8 [39];
  char local_b1;
  longlong local_b0;
  longlong local_a8 [10];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar7 = *(longlong **)(param_1 + 0xc0);
  local_b1 = param_2;
  FUN_140056680(&local_b0,&DAT_149dfb77a);
  (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
  if (local_b0 != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1484e0e5e();
  }
  plVar7 = *(longlong **)(param_1 + 0x150);
  if (plVar7 != (longlong *)0x0) {
    FUN_140056680(&local_b0,&DAT_149dfb77a);
    (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  plVar7 = *(longlong **)(param_1 + 200);
  if (plVar7 != (longlong *)0x0) {
    FUN_140056680(&local_b0,L"EditNormalsTool");
    (**(code **)(*plVar7 + 0x2a0))(plVar7,param_1,&local_b0);
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    do {
      FUN_14850635b(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (iVar1 != lVar6);
  }
  local_58 = 0;
  uStack_50 = 0;
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar6 = *(longlong *)(param_1 + 0xd0);
    lVar8 = 0;
    do {
      FUN_143b84538(*(undefined8 *)(lVar6 + lVar8),&local_b0);
      uVar2 = uStack_50;
      lVar4 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_148f9379a(&local_58,uVar2 & 0xffffffff);
      }
      plVar7 = (longlong *)(local_58 + lVar4 * 0x58);
      *plVar7 = local_b0;
      local_b0 = 0;
      plVar5 = local_a8;
      for (lVar4 = 10; plVar7 = plVar7 + 1, lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
  }
  if (local_b1 == '\x01') {
    FUN_149646bae(param_1,&local_58);
  }
  FUN_148f93769(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149646bae FUN_149646bae body=475 status=ok
// SIG undefined FUN_149646bae(void)

void FUN_149646bae(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [44];
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = (**(code **)(*param_1 + 0x2c8))();
  local_58 = L"EditNormalsToolTransactionName";
  local_50 = 0x1e;
  FUN_1446e940c(local_5c,&local_58);
  local_58 = L"UEditNormalsTool";
  local_50 = 0x10;
  FUN_1446e940c(local_60,&local_58);
  FUN_140208bae(&local_58,local_60,local_5c,L"Edit Normals Tool");
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x10))(lVar1 + 0x28,&local_58);
  if (local_58 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_58 + 0x10))();
  }
  if (0 < (int)param_1[0x15]) {
    lVar4 = 0;
    lVar1 = 0;
    do {
      lVar2 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar1 * 8));
      if (lVar2 != 0) {
        lVar3 = FUN_144a7a726();
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
          lVar2 = *(longlong *)(lVar2 + 0x660);
          if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
            FUN_14689c22e(lVar2);
          }
          else if (lVar2 == 0) goto LAB_149646cc2;
          local_6c = 0x200000000;
          local_64 = 2;
          FUN_1484c1c3c(lVar2,0,&local_6c);
        }
      }
LAB_149646cc2:
      if (*(longlong *)(*param_2 + lVar4) != 0) {
        local_58 = (wchar_t *)0x3e800000000;
        FUN_148506aa7(*(undefined8 *)(param_1[0x14] + lVar1 * 8),*(longlong *)(*param_2 + lVar4),1,
                      &local_58);
      }
      lVar1 = lVar1 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar1 < (int)param_1[0x15]);
  }
  lVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x18))(lVar1 + 0x28);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149646d8a FUN_149646d8a body=645 status=ok
// SIG undefined FUN_149646d8a(void)

undefined8 * FUN_149646d8a(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  void *_Dst;
  longlong lVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  _Dst = (void *)FUN_14001cc68(0x158);
  memset(_Dst,0,0x158);
  FUN_14845b328(_Dst);
  lVar3 = *(longlong *)(param_1 + 8);
  *(undefined1 *)((longlong)_Dst + 0x148) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xaa);
  *(undefined1 *)((longlong)_Dst + 0x149) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xab);
  *(undefined1 *)((longlong)_Dst + 0x14a) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xa8);
  *(undefined1 *)((longlong)_Dst + 0x14c) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xac);
  *(undefined1 *)((longlong)_Dst + 0x14d) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xb4);
  *(undefined1 *)((longlong)_Dst + 0x14b) = *(undefined1 *)(*(longlong *)(lVar3 + 0xc0) + 0xa9);
  *(undefined4 *)((longlong)_Dst + 0x150) = *(undefined4 *)(*(longlong *)(lVar3 + 0xc0) + 0xb0);
  FUN_145c3f772((longlong)_Dst + 0xa8,lVar3 + 0x210);
  FUN_145c3f772((longlong)_Dst + 0xf8,*(longlong *)(param_1 + 8) + 0x260);
  FUN_1485063a5(&local_88,
                *(undefined8 *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0xa0) +
                 (longlong)*(int *)(param_1 + 0x10) * 8));
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xe0);
  lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x10;
  uVar4 = *(undefined8 *)(lVar3 + lVar6);
  lVar3 = *(longlong *)(lVar3 + 8 + lVar6);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar5 = *(longlong **)((longlong)_Dst + 0x90);
  *(undefined8 *)((longlong)_Dst + 0x88) = uVar4;
  *(longlong *)((longlong)_Dst + 0x90) = lVar3;
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
  if (((*(int *)(param_1 + 0x10) == 0) &&
      (lVar3 = *(longlong *)(param_1 + 8), *(int *)(lVar3 + 0xe8) == 1)) &&
     (lVar6 = *(longlong *)(lVar3 + 0x140), lVar6 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x148);
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar5 = *(longlong **)((longlong)_Dst + 0xa0);
    *(longlong *)((longlong)_Dst + 0x98) = lVar6;
    *(longlong *)((longlong)_Dst + 0xa0) = lVar3;
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
  }
  local_d8 = local_88;
  uStack_d0 = uStack_80;
  local_c8 = local_78;
  uStack_c0 = uStack_70;
  local_b8 = local_68;
  uStack_b4 = uStack_64;
  uStack_b0 = uStack_60;
  uStack_ac = uStack_5c;
  local_a8 = local_58;
  local_a0 = local_48;
  uStack_9c = uStack_44;
  uStack_98 = uStack_40;
  uStack_94 = uStack_3c;
  local_90 = local_38;
  FUN_14845b3c2(_Dst);
  *param_2 = _Dst;
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149647010 FUN_149647010 body=120 status=ok
// SIG undefined FUN_149647010(void)

void FUN_149647010(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      FUN_148505016(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_14852c593(*(longlong *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x150));
    return;
  }
  return;
}



// FUNCTION 149647088 FUN_149647088 body=77 status=ok
// SIG undefined FUN_149647088(void)

void FUN_149647088(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x150) != param_2) {
    FUN_149646224();
    iVar1 = *(int *)(param_1 + 0xd8);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0xd0);
      lVar3 = 0;
      do {
        FUN_1485051e4(*(undefined8 *)(lVar2 + lVar3));
        lVar3 = lVar3 + 8;
      } while ((longlong)iVar1 * 8 != lVar3);
    }
  }
  return;
}



// FUNCTION 149647138 FUN_149647138 body=84 status=ok
// SIG undefined FUN_149647138(void)

void FUN_149647138(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149647182. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,7,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 14964718c FUN_14964718c body=84 status=ok
// SIG undefined FUN_14964718c(void)

void FUN_14964718c(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496471d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,2,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 1496471e0 FUN_1496471e0 body=84 status=ok
// SIG undefined FUN_1496471e0(void)

void FUN_1496471e0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014964722a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,1,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 149647234 FUN_149647234 body=84 status=ok
// SIG undefined FUN_149647234(void)

void FUN_149647234(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014964727e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,6,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 149647288 FUN_149647288 body=84 status=ok
// SIG undefined FUN_149647288(void)

void FUN_149647288(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496472d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,4,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 1496472dc FUN_1496472dc body=84 status=ok
// SIG undefined FUN_1496472dc(void)

void FUN_1496472dc(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x000149647326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,5,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 149647330 FUN_149647330 body=84 status=ok
// SIG undefined FUN_149647330(void)

void FUN_149647330(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x00014964737a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,3,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 149647384 FUN_149647384 body=84 status=ok
// SIG undefined FUN_149647384(void)

void FUN_149647384(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar1 = FUN_144729dda(param_1 + 0xa8);
  if (cVar1 != '\0') {
    plVar2 = (longlong *)FUN_14479d2ce(param_1 + 0xa8);
                    /* WARNING: Could not recover jumptable at 0x0001496473ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x398))(plVar2,8,*(code **)(*plVar2 + 0x398));
    return;
  }
  return;
}



// FUNCTION 1496473f1 FUN_1496473f1 body=148 status=ok
// SIG undefined FUN_1496473f1(void)

undefined8 FUN_1496473f1(undefined8 param_1)

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
  uVar1 = FUN_145bac650();
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



// FUNCTION 149647486 FUN_149647486 body=518 status=ok
// SIG undefined FUN_149647486(void)

void FUN_149647486(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_148 [32];
  longlong local_128 [4];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  char local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined4 local_44;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar6 = (longlong *)param_3[2];
  uVar4 = (**(code **)(*param_1 + 0x2c0))();
  (**(code **)(*plVar6 + 0x2e0))(plVar6,&local_40,param_3,uVar4);
  iVar2 = local_38;
  puVar1 = local_40;
  local_50 = 0;
  local_48 = local_38;
  if (local_38 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1484d7836(&local_50,local_38,0);
    FUN_1484d7898(local_50,puVar1,iVar2);
  }
  FUN_1484ca74c(param_2,&local_50);
  (**(code **)(*param_2 + 0x388))(param_2,*param_3);
  if ((param_2 != (longlong *)0x0) && (local_38 == 1)) {
    lVar5 = FUN_145bac650();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30)) {
      local_78 = DAT_14c8464f0;
      local_88 = DAT_14c8464e0;
      uStack_80 = DAT_14c8464e8;
      local_70 = 0;
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0x3ff0000000000000;
      local_b8 = 0x7fefffffffffffff;
      local_b0 = 0x7fefffffffffffff;
      local_a8 = 0x7fefffffffffffff;
      local_a0 = 0xffefffffffffffff;
      local_98 = 0xffefffffffffffff;
      local_90 = 0xffefffffffffffff;
      cVar3 = FUN_148550543(param_3,&local_88,&local_b8,&local_b9);
      if ((cVar3 != '\0') && (local_b9 == '\x01')) {
        FUN_1485063a5(local_128,*local_40);
        local_108 = (undefined4)local_88;
        uStack_104 = local_88._4_4_;
        uStack_100 = (undefined4)uStack_80;
        uStack_fc = uStack_80._4_4_;
        local_f8 = local_78;
        uStack_f0 = 0;
        *(undefined1 *)(param_2 + 0x2a) = 1;
        plVar6 = local_128;
        plVar7 = param_2 + 0x1e;
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *plVar7 = *plVar6;
          plVar6 = plVar6 + 1;
          plVar7 = plVar7 + 1;
        }
      }
    }
  }
  if (local_40 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14964768e FUN_14964768e body=349 status=ok
// SIG undefined FUN_14964768e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14964768e(void)

{
  undefined8 *_Src;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined *_Dst;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc20a08) {
    FUN_144b3d300(&DAT_14cc20a08);
    if (DAT_14cc20a08 == -1) {
      uVar1 = FUN_145b7126e();
      uVar2 = FUN_145b71442();
      uVar3 = FUN_145b71358();
      uVar4 = FUN_145a7b1c0();
      local_50 = (undefined8 *)0x0;
      local_48 = 4;
      FUN_1484d6e40(&local_50,4,0);
      _Src = local_50;
      *local_50 = uVar1;
      local_50[1] = uVar2;
      local_50[2] = uVar3;
      local_50[3] = uVar4;
      DAT_14cc209f8 = (undefined *)0x0;
      _DAT_14cc20a04 = 5;
      lVar5 = (longlong)local_48;
      _DAT_14cc20a00 = local_48;
      FUN_1484d23fc(&DAT_14cc209d0,local_48,5);
      if (lVar5 != 0) {
        _Dst = &DAT_14cc209d0;
        if (DAT_14cc209f8 != (undefined *)0x0) {
          _Dst = DAT_14cc209f8;
        }
        memcpy(_Dst,_Src,lVar5 << 3);
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144563b96);
      _Init_thread_footer(&DAT_14cc20a08);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return &DAT_14cc209d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1496477ec FUN_1496477ec body=2159 status=ok
// SIG undefined FUN_1496477ec(void)

void FUN_1496477ec(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong *local_140;
  longlong *local_138;
  undefined4 local_130;
  longlong *local_128 [2];
  longlong local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  longlong *local_e0 [2];
  longlong *local_d0 [2];
  longlong *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong *local_a8;
  wchar_t **local_a0;
  ulonglong *local_98;
  longlong local_90;
  undefined4 local_88;
  wchar_t *local_80;
  undefined4 local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_1484416be();
  plVar3 = (longlong *)FUN_14841014b(param_1);
  (**(code **)(*plVar3 + 0x358))(plVar3,param_1 + 0x17);
  (**(code **)(*param_1 + 0x2e8))(param_1,plVar3,0);
  uVar4 = FUN_1409ffe1d();
  lVar5 = FUN_14964805c(uVar4);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x19] = lVar5;
  (**(code **)(*param_1 + 0x308))(param_1,lVar5);
  lVar5 = FUN_1496480f1(param_1);
  if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar5);
  }
  param_1[0x1a] = lVar5;
  FUN_14485c47a(lVar5 + 0xa8,param_1);
  (**(code **)(*param_1 + 0x308))(param_1);
  FUN_149648186(param_1);
  FUN_1496481e6(param_1);
  lVar5 = param_1[0x45];
  if ((longlong)(int)lVar5 != 0) {
    lVar6 = param_1[0x44];
    lVar7 = 0;
    do {
      *(undefined1 *)(*(longlong *)(lVar6 + lVar7) + 0xd1) = 1;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)lVar5 * 0x10 != lVar7);
  }
  plVar3 = (longlong *)FUN_148f4925a(param_1);
  if ((plVar3 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(plVar3);
  }
  param_1[0x46] = (longlong)plVar3;
  (**(code **)(*plVar3 + 0x2a0))(plVar3,param_1);
  FUN_1484f6c9e(param_1[0x46] + 0x30,*(undefined8 *)(param_1[0x44] + 8),0,0);
  FUN_14964835e(param_1);
  if ((char)param_1[0x2a] == '\x01') {
    (**(code **)(**(longlong **)(param_1[0x44] + 8) + 0x330))
              (*(longlong **)(param_1[0x44] + 8),param_1 + 0x1e,1);
  }
  local_80 = L"EditPivotWarning";
  local_78[0] = 0x10;
  FUN_1446e940c(&local_90,&local_80);
  local_80 = L"UEditPivotTool";
  local_78[0] = 0xe;
  FUN_1446e940c(&local_a0,&local_80);
  FUN_140208bae(&local_c0,&local_a0,&local_90,
                L"WARNING: This Tool will Modify the selected StaticMesh Assets! If you do not wish to modify the original Assets, please make copies in the Content Browser first!"
               );
  cVar2 = FUN_1484ca7f2(param_1,param_1 + 0x1b);
  if (cVar2 != '\0') {
    local_80 = L"EditPivotSharedAssetsWarning";
    local_78[0] = 0x1c;
    FUN_1446e940c(local_e4,&local_80);
    local_80 = L"UEditPivotTool";
    local_78[0] = 0xe;
    FUN_1446e940c(local_e8,&local_80);
    FUN_140208bae(local_e0,local_e8,local_e4,
                  L"WARNING: Multiple selected meshes share the same source Asset! Each Asset can only have one baked pivot, some results will be incorrect."
                 );
    local_f8 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    local_f0 = local_b8;
    FUN_1400b22c2(local_118,"{0}\n\n{1}");
    FUN_1411696b6(&local_108,local_118,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_f8);
    local_60 = 4;
    FUN_14023423e(local_50,local_e0);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_108;
    local_a8 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    do {
      plVar3 = *(longlong **)((longlong)local_78 + lVar5 + -8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_100 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_100 + 0x10))(local_100);
        }
      }
    }
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    if (local_e0[0] != (longlong *)0x0) {
      (**(code **)(*local_e0[0] + 0x10))();
    }
    FUN_140008f88(&local_c0,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (0 < (int)param_1[0x15]) {
    lVar5 = 0;
    bVar8 = false;
    do {
      while (lVar6 = FUN_1485062e8(*(undefined8 *)(param_1[0x14] + lVar5 * 8)), lVar6 == 0) {
LAB_149647c88:
        lVar5 = lVar5 + 1;
        if ((int)param_1[0x15] <= lVar5) {
          if (!bVar8) goto LAB_149647ed1;
          goto LAB_149647cb7;
        }
      }
      lVar7 = FUN_144a80466();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8
           ) != lVar7 + 0x30)) goto LAB_149647c88;
      lVar5 = lVar5 + 1;
      bVar8 = true;
    } while (lVar5 < (int)param_1[0x15]);
LAB_149647cb7:
    local_80 = L"EditPivotISMCWarning";
    local_78[0] = 0x14;
    FUN_1446e940c(local_e4,&local_80);
    local_80 = L"UEditPivotTool";
    local_78[0] = 0xe;
    FUN_1446e940c(local_e8,&local_80);
    FUN_140208bae(local_128,local_e8,local_e4,
                  L"WARNING: Some selected objects are Instanced Components. Pivot of Instances will be modified, instead of Asset."
                 );
    local_138 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      (**(code **)(*local_c0 + 8))();
    }
    local_130 = local_b8;
    FUN_1400b22c2(local_118,"{0}\n\n{1}");
    FUN_1411696b6(&local_148,local_118,1);
    local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
    FUN_14023423e(local_70,&local_138);
    local_60 = 4;
    FUN_14023423e(local_50,local_128);
    local_98 = &local_40;
    local_a0 = &local_80;
    FUN_14010d304(&local_90);
    local_b0 = local_148;
    local_a8 = local_140;
    if (local_140 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_140 + 1) = (int)local_140[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d0,&local_b0,&local_90);
    FUN_14007f2db(local_90,local_88);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    lVar5 = 0x30;
    do {
      plVar3 = *(longlong **)((longlong)local_78 + lVar5 + -8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))();
        *(undefined8 *)((longlong)local_78 + lVar5 + -8) = 0;
        *(undefined4 *)((longlong)local_78 + lVar5) = 0;
      }
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != -0x10);
    if (local_140 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_140 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_140)(local_140);
        LOCK();
        piVar1 = (int *)((longlong)local_140 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_140 + 0x10))(local_140);
        }
      }
    }
    if (local_138 != (longlong *)0x0) {
      (**(code **)(*local_138 + 0x10))();
    }
    if (local_128[0] != (longlong *)0x0) {
      (**(code **)(*local_128[0] + 0x10))();
    }
    FUN_140008f88(&local_c0,local_d0);
    if (local_d0[0] != (longlong *)0x0) {
      (**(code **)(*local_d0[0] + 0x10))();
    }
    if (local_118[0] != 0) {
      FUN_1400020a8();
    }
  }
LAB_149647ed1:
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_c0,3);
  local_80 = L"ToolName";
  local_78[0] = 8;
  FUN_1446e940c(&local_90,&local_80);
  local_80 = L"UEditPivotTool";
  local_78[0] = 0xe;
  FUN_1446e940c(&local_a0,&local_80);
  FUN_140208bae(&local_80,&local_a0,&local_90,L"Edit Pivot");
  (**(code **)(*param_1 + 0x370))(param_1,&local_80);
  if (local_80 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_80 + 0x10))();
  }
  plVar3 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
  local_80 = L"OnStartTool";
  local_78[0] = 0xb;
  FUN_1446e940c(&local_90,&local_80);
  local_80 = L"UEditPivotTool";
  local_78[0] = 0xe;
  FUN_1446e940c(&local_a0,&local_80);
  FUN_140208bae(&local_80,&local_a0,&local_90,
                L"This tool edits the Pivot (Origin) of the input assets. Hold Ctrl while using the gizmo to align to scene. Enable Snap Dragging and click+drag to place gizmo directly into clicked position."
               );
  (**(code **)(*plVar3 + 0x340))(plVar3,&local_80,2);
  if (local_80 != (wchar_t *)0x0) {
    (**(code **)(*(longlong *)local_80 + 0x10))();
  }
  if (local_c0 != (longlong *)0x0) {
    (**(code **)(*local_c0 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14964805c FUN_14964805c body=148 status=ok
// SIG undefined FUN_14964805c(void)

undefined8 FUN_14964805c(undefined8 param_1)

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
  uVar1 = FUN_1459fa54a();
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



// FUNCTION 1496480f1 FUN_1496480f1 body=148 status=ok
// SIG undefined FUN_1496480f1(void)

undefined8 FUN_1496480f1(undefined8 param_1)

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
  uVar1 = FUN_14599ce3e();
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


