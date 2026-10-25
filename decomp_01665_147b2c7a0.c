// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b2c7a0 FUN_147b2c7a0 body=283 status=ok
// SIG undefined FUN_147b2c7a0(void)

void FUN_147b2c7a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 auStack_d8 [47];
  byte local_a9;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  local_a9 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a9);
  }
  puVar4 = local_a8;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = (ulonglong)local_a9;
  uVar1 = *(undefined8 *)(puVar4 + uVar5 * 8 + 0x40);
  uVar2 = *(undefined8 *)(puVar4 + uVar5 * 8 + 0x20);
  *param_3 = *(undefined8 *)(puVar4 + uVar5 * 8);
  param_3[1] = uVar2;
  param_3[2] = uVar1;
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c8bc FUN_147b2c8bc body=177 status=ok
// SIG undefined FUN_147b2c8bc(void)

void FUN_147b2c8bc(undefined8 param_1,longlong param_2,float *param_3)

{
  double dVar1;
  undefined1 *puVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)FUN_144a91046(puVar2);
  *param_3 = (float)dVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c976 FUN_147b2c976 body=459 status=ok
// SIG undefined FUN_147b2c976(void)

void FUN_147b2c976(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_108 [32];
  double local_e8 [4];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = local_c8;
  }
  dVar4 = *(double *)(puVar6 + 0x58) + *(double *)(puVar6 + 0x48);
  dVar8 = *(double *)(puVar6 + 0x38) + *(double *)(puVar6 + 0x28);
  dVar9 = *(double *)(puVar6 + 0x18) + *(double *)(puVar6 + 8);
  dVar10 = dVar4 * dVar4 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999439624929e-11 < dVar10) {
    pdVar7 = local_e8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    puVar6 = local_c8;
    if (puVar3 != (undefined1 *)0x0) {
      puVar6 = puVar3;
    }
    dVar1 = *(double *)(puVar6 + 0x78);
    dVar2 = *(double *)(puVar6 + 0x68);
    dVar5 = 1.0 / SQRT(dVar10);
    *pdVar7 = -dVar9 * dVar5;
    pdVar7[1] = -dVar8 * dVar5;
    pdVar7[2] = -dVar4 * dVar5;
    pdVar7[3] = (dVar1 + dVar2) * dVar5;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar10;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2cb4a FUN_147b2cb4a body=442 status=ok
// SIG undefined FUN_147b2cb4a(void)

void FUN_147b2cb4a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_108 [32];
  double local_e8 [4];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = puVar5;
  if (puVar5 == (undefined1 *)0x0) {
    puVar6 = local_c8;
  }
  dVar1 = *(double *)(puVar6 + 0x50);
  dVar2 = *(double *)(puVar6 + 0x10);
  dVar3 = *(double *)(puVar6 + 0x30);
  dVar8 = dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3;
  if (9.999999439624929e-11 < dVar8) {
    pdVar7 = local_e8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    puVar6 = local_c8;
    if (puVar5 != (undefined1 *)0x0) {
      puVar6 = puVar5;
    }
    dVar9 = 1.0 / SQRT(dVar8);
    dVar4 = *(double *)(puVar6 + 0x70);
    *pdVar7 = -dVar2 * dVar9;
    pdVar7[1] = -dVar3 * dVar9;
    pdVar7[2] = -dVar1 * dVar9;
    pdVar7[3] = dVar4 * dVar9;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar8;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2cd0e FUN_147b2cd0e body=478 status=ok
// SIG undefined FUN_147b2cd0e(void)

void FUN_147b2cd0e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8 [17];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  pdVar7 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pdVar7 = local_d8;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pdVar6 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pdVar6 = local_d8;
  }
  dVar4 = pdVar6[0xb] + pdVar6[8];
  dVar8 = pdVar6[7] + pdVar6[4];
  dVar9 = pdVar6[3] + *pdVar7;
  dVar10 = dVar4 * dVar4 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999439624929e-11 < dVar10) {
    pdVar7 = local_f8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    pdVar6 = local_d8;
    if (pdVar3 != (double *)0x0) {
      pdVar6 = pdVar3;
    }
    dVar1 = pdVar6[0xf];
    dVar2 = pdVar6[0xc];
    dVar5 = 1.0 / SQRT(dVar10);
    *pdVar7 = -dVar9 * dVar5;
    pdVar7[1] = -dVar8 * dVar5;
    pdVar7[2] = -dVar4 * dVar5;
    pdVar7[3] = (dVar1 + dVar2) * dVar5;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar10;
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2cef6 FUN_147b2cef6 body=459 status=ok
// SIG undefined FUN_147b2cef6(void)

void FUN_147b2cef6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_108 [32];
  double local_e8 [4];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = local_c8;
  }
  dVar4 = *(double *)(puVar6 + 0x58) - *(double *)(puVar6 + 0x50);
  dVar8 = *(double *)(puVar6 + 0x38) - *(double *)(puVar6 + 0x30);
  dVar9 = *(double *)(puVar6 + 0x18) - *(double *)(puVar6 + 0x10);
  dVar10 = dVar4 * dVar4 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999439624929e-11 < dVar10) {
    pdVar7 = local_e8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    puVar6 = local_c8;
    if (puVar3 != (undefined1 *)0x0) {
      puVar6 = puVar3;
    }
    dVar1 = *(double *)(puVar6 + 0x78);
    dVar2 = *(double *)(puVar6 + 0x70);
    dVar5 = 1.0 / SQRT(dVar10);
    *pdVar7 = -dVar9 * dVar5;
    pdVar7[1] = -dVar8 * dVar5;
    pdVar7[2] = -dVar4 * dVar5;
    pdVar7[3] = (dVar1 - dVar2) * dVar5;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar10;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d0ca FUN_147b2d0ca body=478 status=ok
// SIG undefined FUN_147b2d0ca(void)

void FUN_147b2d0ca(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_118 [32];
  double local_f8 [4];
  double local_d8 [17];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  pdVar7 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pdVar7 = local_d8;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pdVar6 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pdVar6 = local_d8;
  }
  dVar4 = pdVar6[0xb] - pdVar6[8];
  dVar8 = pdVar6[7] - pdVar6[4];
  dVar9 = pdVar6[3] - *pdVar7;
  dVar10 = dVar4 * dVar4 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999439624929e-11 < dVar10) {
    pdVar7 = local_f8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    pdVar6 = local_d8;
    if (pdVar3 != (double *)0x0) {
      pdVar6 = pdVar3;
    }
    dVar1 = pdVar6[0xf];
    dVar2 = pdVar6[0xc];
    dVar5 = 1.0 / SQRT(dVar10);
    *pdVar7 = -dVar9 * dVar5;
    pdVar7[1] = -dVar8 * dVar5;
    pdVar7[2] = -dVar4 * dVar5;
    pdVar7[3] = (dVar1 - dVar2) * dVar5;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar10;
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d2b2 FUN_147b2d2b2 body=459 status=ok
// SIG undefined FUN_147b2d2b2(void)

void FUN_147b2d2b2(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  undefined1 *puVar3;
  double dVar4;
  double dVar5;
  undefined1 *puVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_108 [32];
  double local_e8 [4];
  undefined1 local_c8 [136];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar6 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    puVar6 = local_c8;
  }
  dVar4 = *(double *)(puVar6 + 0x58) - *(double *)(puVar6 + 0x48);
  dVar8 = *(double *)(puVar6 + 0x38) - *(double *)(puVar6 + 0x28);
  dVar9 = *(double *)(puVar6 + 0x18) - *(double *)(puVar6 + 8);
  dVar10 = dVar4 * dVar4 + dVar9 * dVar9 + dVar8 * dVar8;
  if (9.999999439624929e-11 < dVar10) {
    pdVar7 = local_e8;
    if (*(double **)(param_2 + 0x38) != (double *)0x0) {
      pdVar7 = *(double **)(param_2 + 0x38);
    }
    puVar6 = local_c8;
    if (puVar3 != (undefined1 *)0x0) {
      puVar6 = puVar3;
    }
    dVar1 = *(double *)(puVar6 + 0x78);
    dVar2 = *(double *)(puVar6 + 0x68);
    dVar5 = 1.0 / SQRT(dVar10);
    *pdVar7 = -dVar9 * dVar5;
    pdVar7[1] = -dVar8 * dVar5;
    pdVar7[2] = -dVar4 * dVar5;
    pdVar7[3] = (dVar1 - dVar2) * dVar5;
  }
  *(bool *)param_3 = 9.999999439624929e-11 < dVar10;
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d47e FUN_147b2d47e body=194 status=ok
// SIG undefined FUN_147b2d47e(void)

void FUN_147b2d47e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118 [16];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14494412e(puVar1,local_118);
  puVar3 = local_118;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d542 FUN_147b2d542 body=307 status=ok
// SIG undefined FUN_147b2d542(void)

void FUN_147b2d542(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [44];
  float local_12c;
  undefined8 local_128 [16];
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_12c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  puVar2 = local_a8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_128;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_144a1c686(local_128,(double)local_12c);
  puVar3 = local_128;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d676 FUN_147b2d676 body=295 status=ok
// SIG undefined FUN_147b2d676(void)

void FUN_147b2d676(undefined8 param_1,longlong param_2,float *param_3)

{
  double dVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auStack_b8 [32];
  double local_98 [16];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pdVar2 = local_98;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar2[10] * pdVar2[10] + pdVar2[8] * pdVar2[8] + pdVar2[9] * pdVar2[9];
  dVar3 = pdVar2[6] * pdVar2[6] + pdVar2[4] * pdVar2[4] + pdVar2[5] * pdVar2[5];
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  dVar1 = pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1];
  if (dVar1 <= dVar3) {
    dVar1 = dVar3;
  }
  *param_3 = (float)SQRT(dVar1);
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d79e FUN_147b2d79e body=181 status=ok
// SIG undefined FUN_147b2d79e(void)

void FUN_147b2d79e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar5 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  uVar1 = *(undefined8 *)(puVar5 + 0x70);
  uVar2 = *(undefined4 *)(puVar5 + 100);
  uVar3 = *(undefined4 *)(puVar5 + 0x68);
  uVar4 = *(undefined4 *)(puVar5 + 0x6c);
  *param_3 = *(undefined4 *)(puVar5 + 0x60);
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  *(undefined8 *)(param_3 + 4) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d854 FUN_147b2d854 body=191 status=ok
// SIG undefined FUN_147b2d854(void)

void FUN_147b2d854(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a90b9e(puVar1,&local_b0);
  *(undefined8 *)(param_3 + 4) = local_a0;
  *param_3 = local_b0;
  param_3[1] = uStack_ac;
  param_3[2] = uStack_a8;
  param_3[3] = uStack_a4;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2d914 FUN_147b2d914 body=294 status=ok
// SIG undefined FUN_147b2d914(void)

void FUN_147b2d914(undefined8 param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  undefined1 auStack_d8 [32];
  double local_b8 [17];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  pdVar1 = local_b8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((pdVar1[1] * pdVar1[6] - pdVar1[5] * pdVar1[2]) * pdVar1[8] +
                    ((pdVar1[5] * pdVar1[10] - pdVar1[9] * pdVar1[6]) * *pdVar1 -
                    (pdVar1[10] * pdVar1[1] - pdVar1[9] * pdVar1[2]) * pdVar1[4]));
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2da3c FUN_147b2da3c body=529 status=ok
// SIG undefined FUN_147b2da3c(void)

void FUN_147b2da3c(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_128 [40];
  undefined8 local_100 [3];
  undefined8 local_e8 [3];
  undefined8 local_d0 [3];
  undefined8 local_b8 [17];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_100);
  }
  puVar1 = local_e8;
  if (puVar2 != (undefined8 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d0;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = local_b8;
  if (puVar4 != (undefined8 *)0x0) {
    puVar3 = puVar4;
  }
  puVar4 = local_100;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  puVar2[2] = puVar3[2];
  *puVar1 = puVar3[4];
  puVar1[1] = puVar3[5];
  puVar1[2] = puVar3[6];
  *puVar4 = puVar3[8];
  puVar4[1] = puVar3[9];
  puVar4[2] = puVar3[10];
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2dc4e FUN_147b2dc4e body=388 status=ok
// SIG undefined FUN_147b2dc4e(void)

void FUN_147b2dc4e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_e8 [47];
  char local_b9;
  undefined8 local_b8 [17];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  puVar5 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar5 = local_b8;
  }
  local_b9 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_b9 == '\x03') {
    puVar4 = local_b8;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    puVar5 = puVar4 + 8;
    puVar3 = puVar4 + 10;
    puVar4 = puVar4 + 9;
  }
  else if (local_b9 == '\x02') {
    puVar4 = local_b8;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    puVar5 = puVar4 + 4;
    puVar3 = puVar4 + 6;
    puVar4 = puVar4 + 5;
  }
  else if (local_b9 == '\x01') {
    puVar4 = local_b8;
    if (puVar3 != (undefined8 *)0x0) {
      puVar4 = puVar3;
    }
    puVar3 = puVar4 + 2;
    puVar4 = puVar4 + 1;
  }
  else {
    puVar3 = &DAT_14c8464f0;
    puVar5 = &DAT_14c8464e0;
    puVar4 = &DAT_14c8464e8;
  }
  uVar1 = *puVar3;
  uVar2 = *puVar4;
  *param_3 = *puVar5;
  param_3[1] = uVar2;
  param_3[2] = uVar1;
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2ddd4 FUN_147b2ddd4 body=375 status=ok
// SIG undefined FUN_147b2ddd4(void)

void FUN_147b2ddd4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  float local_ac;
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  local_ac = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0x3ff0000000000000;
  local_b8 = 0x3ff0000000000000;
  lVar1 = 0;
  do {
    dVar3 = *(double *)(puVar2 + lVar1 * 4 + 0x10) * *(double *)(puVar2 + lVar1 * 4 + 0x10) +
            *(double *)(puVar2 + lVar1 * 4) * *(double *)(puVar2 + lVar1 * 4) +
            *(double *)(puVar2 + lVar1 * 4 + 8) * *(double *)(puVar2 + lVar1 * 4 + 8);
    *(ulonglong *)((longlong)&local_c8 + lVar1) =
         -(ulonglong)((double)local_ac < dVar3) & (ulonglong)SQRT(dVar3);
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x18);
  *(undefined8 *)(param_3 + 4) = local_b8;
  *param_3 = (undefined4)local_c8;
  param_3[1] = local_c8._4_4_;
  param_3[2] = (undefined4)uStack_c0;
  param_3[3] = uStack_c0._4_4_;
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2df4c FUN_147b2df4c body=194 status=ok
// SIG undefined FUN_147b2df4c(void)

void FUN_147b2df4c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118 [16];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fd4e6(puVar1,local_118);
  puVar3 = local_118;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2e010 FUN_147b2e010 body=521 status=ok
// SIG undefined FUN_147b2e010(void)

void FUN_147b2e010(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 auStack_168 [32];
  undefined8 local_148 [17];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_148);
  }
  puVar16 = local_148;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar16 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar16[4];
  uVar2 = puVar16[8];
  uVar3 = puVar16[0xc];
  uVar4 = puVar16[1];
  uVar5 = puVar16[5];
  uVar6 = puVar16[9];
  uVar7 = puVar16[0xd];
  uVar8 = puVar16[2];
  uVar9 = puVar16[6];
  uVar10 = puVar16[10];
  uVar11 = puVar16[0xe];
  uVar12 = puVar16[3];
  uVar13 = puVar16[7];
  uVar14 = puVar16[0xb];
  uVar15 = puVar16[0xf];
  *param_3 = *puVar16;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  param_3[4] = uVar4;
  param_3[5] = uVar5;
  param_3[6] = uVar6;
  param_3[7] = uVar7;
  param_3[8] = uVar8;
  param_3[9] = uVar9;
  param_3[10] = uVar10;
  param_3[0xb] = uVar11;
  param_3[0xc] = uVar12;
  param_3[0xd] = uVar13;
  param_3[0xe] = uVar14;
  param_3[0xf] = uVar15;
  if ((local_c0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2e21a FUN_147b2e21a body=445 status=ok
// SIG undefined FUN_147b2e21a(void)

void FUN_147b2e21a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_128 [40];
  undefined1 local_100 [24];
  undefined1 local_e8 [24];
  undefined1 local_d0 [24];
  undefined1 local_b8 [136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar3 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_100);
  }
  puVar4 = local_e8;
  if (puVar3 != (undefined1 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = local_d0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_b8;
  if (puVar5 != (undefined1 *)0x0) {
    puVar2 = puVar5;
  }
  puVar5 = local_100;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14276fba8(puVar2,puVar3,puVar4,puVar5);
  if ((local_30 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2e3d8 FUN_147b2e3d8 body=502 status=ok
// SIG undefined FUN_147b2e3d8(void)

void FUN_147b2e3d8(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_e8 [47];
  char local_b9;
  double local_b8 [17];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  pdVar5 = *(double **)(param_2 + 0x38);
  pdVar7 = pdVar5;
  if (pdVar5 == (double *)0x0) {
    pdVar7 = local_b8;
  }
  local_b9 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b9);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b9);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_b9 == '\x03') {
    pdVar6 = local_b8;
    if (pdVar5 != (double *)0x0) {
      pdVar6 = pdVar5;
    }
    pdVar7 = pdVar6 + 8;
    pdVar5 = pdVar6 + 10;
    pdVar6 = pdVar6 + 9;
  }
  else if (local_b9 == '\x02') {
    pdVar6 = local_b8;
    if (pdVar5 != (double *)0x0) {
      pdVar6 = pdVar5;
    }
    pdVar7 = pdVar6 + 4;
    pdVar5 = pdVar6 + 6;
    pdVar6 = pdVar6 + 5;
  }
  else if (local_b9 == '\x01') {
    pdVar6 = local_b8;
    if (pdVar5 != (double *)0x0) {
      pdVar6 = pdVar5;
    }
    pdVar5 = pdVar6 + 2;
    pdVar6 = pdVar6 + 1;
  }
  else {
    pdVar7 = &DAT_14c8464e0;
    pdVar6 = &DAT_14c8464e8;
    pdVar5 = &DAT_14c8464f0;
  }
  dVar1 = *pdVar7;
  dVar2 = *pdVar6;
  dVar3 = *pdVar5;
  dVar10 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar10 != 1.0) || (dVar8 = dVar2, dVar9 = dVar3, dVar4 = dVar1, NAN(dVar10))) &&
     (dVar8 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar4 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar8 = dVar2 * dVar10;
    dVar9 = dVar3 * dVar10;
    dVar4 = dVar1 * dVar10;
  }
  *param_3 = dVar4;
  param_3[1] = dVar8;
  param_3[2] = dVar9;
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b2e5f6 FUN_147b2e5f6 body=406 status=ok
// SIG undefined FUN_147b2e5f6(void)

void FUN_147b2e5f6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_198 [40];
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [128];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  puVar2 = local_158;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14007522e(&local_d8,puVar2);
  *param_3 = local_160 * local_98 + local_168 * local_b8 + local_170 * local_d8 + local_78;
  param_3[1] = local_160 * dStack_90 + local_168 * dStack_b0 + local_170 * dStack_d0 + dStack_70;
  param_3[2] = local_170 * local_c8 + local_168 * local_a8 + local_160 * local_88 + local_68;
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2e78e FUN_147b2e78e body=422 status=ok
// SIG undefined FUN_147b2e78e(void)

void FUN_147b2e78e(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 *puVar4;
  undefined1 auStack_198 [40];
  double local_170;
  double local_168;
  double local_160;
  undefined1 local_158 [128];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  double local_78;
  double dStack_70;
  double local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_170);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_170);
  }
  puVar4 = local_158;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14007522e(&local_d8,puVar4);
  dVar3 = dStack_70 * 0.0 + local_160 * dStack_90 + local_168 * dStack_b0 + local_170 * dStack_d0;
  auVar2._8_4_ = SUB84(dVar3,0);
  auVar2._0_8_ = local_78 * 0.0 + local_160 * local_98 + local_168 * local_b8 + local_170 * local_d8
  ;
  auVar2._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  *param_3 = auVar2;
  *(double *)param_3[1] =
       local_170 * local_c8 + local_168 * local_a8 + local_160 * local_88 + local_68 * 0.0;
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2e936 FUN_147b2e936 body=362 status=ok
// SIG undefined FUN_147b2e936(void)

void FUN_147b2e936(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [46];
  undefined1 local_12a;
  undefined1 local_129;
  undefined8 local_128 [16];
  undefined8 local_a8 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_129 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_129);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_129);
  }
  local_12a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_12a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12a);
  }
  puVar2 = local_a8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = local_128;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1467f68a4(local_128,local_129,local_12a);
  puVar3 = local_128;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2eaa2 FUN_147b2eaa2 body=256 status=ok
// SIG undefined FUN_147b2eaa2(void)

void FUN_147b2eaa2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_c8 [44];
  float local_9c;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_9c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar2 = local_98;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a1c686(puVar2,(double)local_9c);
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2eba4 FUN_147b2eba4 body=226 status=ok
// SIG undefined FUN_147b2eba4(void)

void FUN_147b2eba4(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  undefined1 *_Src;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [136];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  _Src = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    _Src = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(_Src + 0x78);
  memmove(param_3,_Src,0x60);
  *(undefined8 *)((longlong)param_3 + 0x60) = 0;
  *(undefined8 *)((longlong)param_3 + 0x68) = 0;
  *(undefined8 *)((longlong)param_3 + 0x70) = 0;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar1;
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2ec88 FUN_147b2ec88 body=387 status=ok
// SIG undefined FUN_147b2ec88(void)

void FUN_147b2ec88(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 *puVar5;
  undefined1 *_Src;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  undefined1 local_e8 [136];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e8);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  _Src = local_e8;
  if (puVar5 != (undefined1 *)0x0) {
    _Src = puVar5;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined8 *)(_Src + 0x78);
  dVar2 = *(double *)(_Src + 0x60);
  dVar3 = *(double *)(_Src + 0x68);
  dVar4 = *(double *)(_Src + 0x70);
  memmove(param_3,_Src,0x60);
  *(double *)((longlong)param_3 + 0x60) = local_100 * dVar2;
  *(double *)((longlong)param_3 + 0x68) = local_f8 * dVar3;
  *(double *)((longlong)param_3 + 0x70) = local_f0 * dVar4;
  *(undefined8 *)((longlong)param_3 + 0x78) = uVar1;
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2ee0c FUN_147b2ee0c body=340 status=ok
// SIG undefined FUN_147b2ee0c(void)

void FUN_147b2ee0c(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  byte local_99;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = local_98;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = (undefined4 *)(puVar3 + (ulonglong)local_99 * 0x20);
  *puVar1 = local_b8;
  puVar1[1] = uStack_b4;
  puVar1[2] = uStack_b0;
  puVar1[3] = uStack_ac;
  *(undefined8 *)(puVar3 + (ulonglong)local_99 * 0x20 + 0x10) = local_a8;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2ef62 FUN_147b2ef62 body=351 status=ok
// SIG undefined FUN_147b2ef62(void)

void FUN_147b2ef62(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  byte local_99;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_99 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_99);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_99);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar2 = local_98;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar3 = (ulonglong)local_99;
  *(undefined8 *)(puVar2 + uVar3 * 8) = local_b8;
  *(undefined8 *)(puVar2 + uVar3 * 8 + 0x20) = local_b0;
  *(undefined8 *)(puVar2 + uVar3 * 8 + 0x40) = local_a8;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f0c2 FUN_147b2f0c2 body=257 status=ok
// SIG undefined FUN_147b2f0c2(void)

void FUN_147b2f0c2(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_d8 [40];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = local_98;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(undefined4 *)(puVar2 + 0x60) = local_b0;
  *(undefined4 *)(puVar2 + 100) = uStack_ac;
  *(undefined4 *)(puVar2 + 0x68) = uStack_a8;
  *(undefined4 *)(puVar2 + 0x6c) = uStack_a4;
  *(undefined8 *)(puVar2 + 0x70) = local_a0;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f1c4 FUN_147b2f1c4 body=191 status=ok
// SIG undefined FUN_147b2f1c4(void)

void FUN_147b2f1c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar1 = local_98;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141706d54(puVar1,&local_b8);
  param_3[4] = local_a8;
  param_3[5] = uStack_a4;
  param_3[6] = uStack_a0;
  param_3[7] = uStack_9c;
  *param_3 = local_b8;
  param_3[1] = uStack_b4;
  param_3[2] = uStack_b0;
  param_3[3] = uStack_ac;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f284 FUN_147b2f284 body=451 status=ok
// SIG undefined FUN_147b2f284(void)

void FUN_147b2f284(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
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
  double *pdVar14;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_f8 [17];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  pdVar14 = local_f8;
  if (pdVar1 != (double *)0x0) {
    pdVar14 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = pdVar14[1];
  dVar3 = pdVar14[2];
  dVar4 = pdVar14[3];
  dVar5 = pdVar14[5];
  dVar6 = pdVar14[6];
  dVar7 = pdVar14[7];
  dVar8 = pdVar14[9];
  dVar9 = pdVar14[10];
  dVar10 = pdVar14[0xb];
  dVar11 = pdVar14[0xd];
  dVar12 = pdVar14[0xe];
  dVar13 = pdVar14[0xf];
  *param_3 = pdVar14[8] * local_108 + pdVar14[4] * local_110 + *pdVar14 * local_118 + pdVar14[0xc];
  param_3[1] = dVar8 * local_108 + dVar5 * local_110 + dVar2 * local_118 + dVar11;
  param_3[2] = dVar9 * local_108 + dVar6 * local_110 + dVar3 * local_118 + dVar12;
  param_3[3] = dVar10 * local_108 + dVar7 * local_110 + dVar4 * local_118 + dVar13;
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f448 FUN_147b2f448 body=463 status=ok
// SIG undefined FUN_147b2f448(void)

void FUN_147b2f448(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
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
  double *pdVar14;
  undefined1 auStack_138 [32];
  double local_118;
  double local_110;
  double local_108;
  double local_f8 [17];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  pdVar14 = local_f8;
  if (pdVar1 != (double *)0x0) {
    pdVar14 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = pdVar14[1];
  dVar3 = pdVar14[2];
  dVar4 = pdVar14[3];
  dVar5 = pdVar14[5];
  dVar6 = pdVar14[6];
  dVar7 = pdVar14[7];
  dVar8 = pdVar14[9];
  dVar9 = pdVar14[10];
  dVar10 = pdVar14[0xb];
  dVar11 = pdVar14[0xd];
  dVar12 = pdVar14[0xe];
  dVar13 = pdVar14[0xf];
  *param_3 = pdVar14[0xc] * 0.0 +
             pdVar14[8] * local_108 + pdVar14[4] * local_110 + *pdVar14 * local_118;
  param_3[1] = dVar11 * 0.0 + dVar8 * local_108 + dVar5 * local_110 + dVar2 * local_118;
  param_3[2] = dVar12 * 0.0 + dVar9 * local_108 + dVar6 * local_110 + dVar3 * local_118;
  param_3[3] = dVar13 * 0.0 + dVar10 * local_108 + dVar7 * local_110 + dVar4 * local_118;
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f618 FUN_147b2f618 body=518 status=ok
// SIG undefined FUN_147b2f618(void)

void FUN_147b2f618(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
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
  double *pdVar14;
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  double local_118;
  double local_110;
  double local_108 [17];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = 0.0;
  local_110 = 1.0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  pdVar14 = local_108;
  if (pdVar1 != (double *)0x0) {
    pdVar14 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = pdVar14[1];
  dVar3 = pdVar14[2];
  dVar4 = pdVar14[3];
  dVar5 = pdVar14[5];
  dVar6 = pdVar14[6];
  dVar7 = pdVar14[7];
  dVar8 = pdVar14[9];
  dVar9 = pdVar14[10];
  dVar10 = pdVar14[0xb];
  dVar11 = pdVar14[0xd];
  dVar12 = pdVar14[0xe];
  dVar13 = pdVar14[0xf];
  *param_3 = pdVar14[0xc] * local_110 +
             pdVar14[8] * local_118 + pdVar14[4] * dStack_120 + *pdVar14 * local_128;
  param_3[1] = dVar11 * local_110 + dVar8 * local_118 + dVar5 * dStack_120 + dVar2 * local_128;
  param_3[2] = dVar12 * local_110 + dVar9 * local_118 + dVar6 * dStack_120 + dVar3 * local_128;
  param_3[3] = dVar13 * local_110 + dVar10 * local_118 + dVar7 * dStack_120 + dVar4 * local_128;
  if ((local_80 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f820 FUN_147b2f820 body=240 status=ok
// SIG undefined FUN_147b2f820(void)

void FUN_147b2f820(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = local_20;
  if (local_20 < local_28) {
    lVar1 = local_28;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2f912 FUN_147b2f912 body=472 status=ok
// SIG undefined FUN_147b2f912(void)

void FUN_147b2f912(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [43];
  byte local_4d;
  undefined4 local_4c;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar8 = local_48;
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar9 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  pbVar4 = &local_4d;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  plVar11 = local_48;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *(uint *)(plVar11 + 1);
  uVar5 = 0;
  if ((ulonglong)uVar2 == 0) {
    uVar5 = 0xffffffff;
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)*plVar8;
    if (1 < (int)uVar2) {
      uVar6 = 0;
      uVar10 = 1;
      do {
        bVar1 = ((byte *)*plVar8)[uVar10];
        bVar12 = bVar7 < bVar1;
        if (bVar7 <= bVar1) {
          bVar7 = bVar1;
        }
        if (bVar12) {
          uVar6 = uVar10 & 0xffffffff;
        }
        uVar5 = (undefined4)uVar6;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
  }
  *puVar9 = uVar5;
  *pbVar4 = bVar7;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b2faec FUN_147b2faec body=485 status=ok
// SIG undefined FUN_147b2faec(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b2faec(undefined8 param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_78 [40];
  float local_50 [2];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar7 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = local_48;
  }
  local_50[1] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 1);
  }
  pfVar8 = local_50 + 1;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar8 = *(float **)(param_2 + 0x38);
  }
  local_50[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pfVar4 = local_50;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar4 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar10 = local_48;
  if (plVar3 != (longlong *)0x0) {
    plVar10 = plVar3;
  }
  uVar2 = *(uint *)(plVar10 + 1);
  if ((ulonglong)uVar2 == 0) {
    fVar11 = 0.0;
    fVar5 = -NAN;
  }
  else {
    fVar11 = *(float *)*plVar7;
    fVar5 = 0.0;
    if (1 < (int)uVar2) {
      uVar6 = 0;
      uVar9 = 1;
      do {
        fVar1 = ((float *)*plVar7)[uVar9];
        fVar5 = (float)uVar6;
        if (fVar11 < fVar1) {
          uVar6 = uVar9 & 0xffffffff;
          fVar5 = (float)uVar9;
          fVar11 = fVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
  }
  *pfVar8 = fVar5;
  *pfVar4 = fVar11;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2fcd2 FUN_147b2fcd2 body=471 status=ok
// SIG undefined FUN_147b2fcd2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b2fcd2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int *piVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  plVar8 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar8 = local_48;
  }
  local_50[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 1);
  }
  piVar9 = local_50 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar9 = *(int **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  piVar3 = local_50;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar3 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar11 = local_48;
  if (plVar2 != (longlong *)0x0) {
    plVar11 = plVar2;
  }
  uVar1 = *(uint *)(plVar11 + 1);
  if ((ulonglong)uVar1 == 0) {
    iVar5 = 0;
    iVar6 = -1;
  }
  else {
    iVar5 = *(int *)*plVar8;
    iVar6 = 0;
    if (1 < (int)uVar1) {
      uVar7 = 0;
      uVar10 = 1;
      iVar4 = iVar5;
      do {
        iVar6 = ((int *)*plVar8)[uVar10];
        iVar5 = iVar4;
        if (iVar4 <= iVar6) {
          iVar5 = iVar6;
        }
        if (iVar4 < iVar6) {
          uVar7 = uVar10 & 0xffffffff;
        }
        iVar6 = (int)uVar7;
        uVar10 = uVar10 + 1;
        iVar4 = iVar5;
      } while (uVar1 != uVar10);
    }
  }
  *piVar9 = iVar6;
  *piVar3 = iVar5;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b2feaa FUN_147b2feaa body=335 status=ok
// SIG undefined FUN_147b2feaa(void)

void FUN_147b2feaa(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  _Src = local_38;
  puVar2 = &local_3c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_50 = (void *)0x0;
  lVar1 = (longlong)(int)uStack_30;
  local_48 = (int)uStack_30;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_144a06ca8(&local_50,uStack_30 & 0xffffffff,0);
    memcpy(local_50,_Src,lVar1 << 2);
  }
  FUN_147b2fffa(&local_50,puVar2);
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2fffa FUN_147b2fffa body=162 status=ok
// SIG undefined FUN_147b2fffa(void)

void FUN_147b2fffa(longlong *param_1,float *param_2,undefined8 param_3)

{
  uint uVar1;
  float fVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] == 0) {
    fVar2 = 0.0;
  }
  else {
    FUN_144958a06(*param_1,(int)param_1[1],param_3,&local_19);
    uVar1 = *(uint *)(param_1 + 1);
    if ((uVar1 & 0x80000001) == 1) {
      fVar2 = (float)*(int *)(*param_1 + (ulonglong)(uVar1 - 1 >> 1) * 4);
    }
    else {
      fVar2 = (float)(*(int *)(*param_1 + -4 + (longlong)((int)uVar1 / 2) * 4) +
                     *(int *)(*param_1 + (longlong)((int)uVar1 / 2) * 4)) * 0.5;
    }
  }
  *param_2 = fVar2;
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b300a4 FUN_147b300a4 body=816 status=ok
// SIG undefined FUN_147b300a4(void)

void FUN_147b300a4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [24];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58 [4];
  
  local_58[3] = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_58[2] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  puVar1 = (undefined8 *)(param_2 + 0x38);
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = local_58;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar2 = local_70;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar6 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a0);
  }
  puVar7 = local_a0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar7 = *(undefined1 **)(param_2 + 0x38);
  }
  local_a4 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
  }
  puVar5 = &local_a4;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  local_a8 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar4 = &local_a8;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  local_ac = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = puVar5;
  local_c0 = puVar4;
  FUN_147b303d6(plVar3,puVar2,puVar6,puVar7);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_58[3] ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b303d6 FUN_147b303d6 body=2392 status=ok
// SIG undefined FUN_147b303d6(void)

void FUN_147b303d6(longlong *param_1,double *param_2,double *param_3,undefined8 *param_4,
                  float *param_5,float *param_6)

{
  double *pdVar1;
  double dVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  double *pdVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_368 [44];
  float local_33c;
  double local_338;
  undefined8 uStack_330;
  double local_328;
  undefined8 uStack_320;
  double local_318;
  undefined8 uStack_310;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0 [16];
  double local_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_298 [2];
  undefined1 local_288 [16];
  double local_278;
  undefined1 local_268 [128];
  double local_1e8;
  double dStack_1e0;
  undefined8 uStack_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1a8;
  double dStack_1a0;
  double local_188;
  double dStack_180;
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_368;
  uVar3 = *(uint *)(param_1 + 1);
  uVar16 = (ulonglong)uVar3;
  if (uVar16 == 0) {
    param_3[2] = DAT_14c8464f0;
    dVar5 = DAT_14c8464e8;
    *param_3 = DAT_14c8464e0;
    param_3[1] = dVar5;
    param_4[2] = DAT_14c846508;
    uVar7 = DAT_14c846500._4_4_;
    uVar18 = (undefined4)DAT_14c846500;
    uVar17 = DAT_14c8464f8._4_4_;
    *(undefined4 *)param_4 = (undefined4)DAT_14c8464f8;
    *(undefined4 *)((longlong)param_4 + 4) = uVar17;
    *(undefined4 *)(param_4 + 1) = uVar18;
    *(undefined4 *)((longlong)param_4 + 0xc) = uVar7;
    *param_5 = 0.0;
    *param_6 = 0.0;
  }
  else {
    local_288._8_8_ = DAT_14c8464e8;
    local_288._0_8_ = DAT_14c8464e0;
    local_278 = DAT_14c8464f0;
    dVar21 = DAT_14c8464e8;
    dVar5 = DAT_14c8464e0;
    if (0 < (int)uVar3) {
      uVar12 = (ulonglong)(uVar3 - 1);
      lVar9 = *param_1;
      pdVar8 = (double *)(lVar9 + 0x10);
      uVar10 = 0;
      do {
        lVar13 = (longlong)(int)uVar12;
        dVar23 = *(double *)(lVar9 + 8 + lVar13 * 0x18);
        dVar2 = *(double *)(lVar9 + 0x10 + lVar13 * 0x18);
        dVar5 = dVar5 + (dVar2 + *pdVar8) * (pdVar8[-1] - dVar23);
        dVar19 = *(double *)(lVar9 + lVar13 * 0x18);
        dVar21 = dVar21 + (dVar19 + pdVar8[-2]) * (*pdVar8 - dVar2);
        local_288._8_8_ = dVar21;
        local_288._0_8_ = dVar5;
        local_278 = local_278 + (pdVar8[-1] + dVar23) * (pdVar8[-2] - dVar19);
        uVar12 = uVar10 & 0xffffffff;
        uVar10 = uVar10 + 1;
        pdVar8 = pdVar8 + 3;
      } while (uVar16 != uVar10);
    }
    dVar23 = local_278 * local_278 + dVar5 * dVar5 + dVar21 * dVar21;
    if (9.99999993922529e-09 < dVar23) {
      dVar23 = 1.0 / SQRT(dVar23);
      dVar5 = dVar5 * dVar23;
      dVar21 = dVar21 * dVar23;
      local_288._8_8_ = dVar21;
      local_288._0_8_ = dVar5;
      local_278 = local_278 * dVar23;
    }
    if (param_2[2] * local_278 + *param_2 * dVar5 + param_2[1] * dVar21 < 0.0) {
      local_278 = -local_278;
      local_288._8_4_ = SUB84(dVar21,0);
      local_288._0_8_ = -dVar5;
      local_288._12_4_ = (uint)((ulonglong)dVar21 >> 0x20) ^ 0x80000000;
    }
    local_1e8 = 1.0;
    dStack_1e0 = 0.0;
    uStack_1d8 = 0;
    FUN_147b4850a(&local_168,local_288);
    local_298[0] = 0;
    local_298[1] = 0;
    FUN_140b463b8(local_298,uVar16);
    FUN_14494412e(&local_168,&local_1e8);
    if (0 < (int)uVar3) {
      lVar9 = 0;
      do {
        lVar13 = *param_1;
        pdVar8 = (double *)(lVar13 + 8 + lVar9);
        pdVar1 = (double *)(lVar13 + 0x10 + lVar9);
        dVar5 = dStack_180 * 0.0 +
                *pdVar1 * dStack_1a0 +
                *pdVar8 * dStack_1c0 + *(double *)(lVar13 + lVar9) * dStack_1e0;
        auVar4._8_4_ = SUB84(dVar5,0);
        auVar4._0_8_ = local_188 * 0.0 +
                       *pdVar1 * local_1a8 +
                       *pdVar8 * local_1c8 + *(double *)(lVar13 + lVar9) * local_1e8;
        auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        *(undefined1 (*) [16])(local_298[0] + lVar9) = auVar4;
        *(undefined8 *)(local_298[0] + 0x10 + lVar9) = 0;
        lVar9 = lVar9 + 0x18;
      } while (uVar16 * 0x18 != lVar9);
    }
    local_2a8 = 0;
    uStack_2a0 = 0;
    FUN_147b4883f(local_298,&local_2a8);
    lVar9 = (longlong)(int)uStack_2a0;
    if (0 < lVar9) {
      iVar11 = (int)uStack_2a0 + -1;
      local_33c = 3.4028235e+38;
      lVar13 = 0;
      do {
        lVar14 = (longlong)*(int *)(local_2a8 + (longlong)iVar11 * 4);
        dVar5 = *(double *)(local_298[0] + lVar14 * 0x18);
        dVar21 = *(double *)(local_298[0] + 8 + lVar14 * 0x18);
        dVar23 = *(double *)(local_298[0] + 0x10 + lVar14 * 0x18);
        lVar14 = (longlong)*(int *)(local_2a8 + lVar13 * 4);
        dVar2 = *(double *)(local_298[0] + 8 + lVar14 * 0x18) - dVar21;
        dVar19 = *(double *)(local_298[0] + lVar14 * 0x18) - dVar5;
        dVar24 = dVar19 * dVar19 + dVar2 * dVar2;
        if ((dVar24 != 1.0) || (NAN(dVar24))) {
          if (9.99999993922529e-09 <= dVar24) {
            dVar2 = dVar2 * (1.0 / SQRT(dVar24));
            dVar19 = dVar19 * (1.0 / SQRT(dVar24));
            uVar17 = 0;
            uVar18 = 0;
          }
          else {
            uVar17 = SUB84(DAT_14c8464f0,0);
            uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            dVar19 = DAT_14c8464e0;
            dVar2 = DAT_14c8464e8;
          }
        }
        else {
          dVar24 = *(double *)(local_298[0] + lVar14 * 0x18 + 0x10) - dVar23;
          uVar16 = -(ulonglong)(dVar24 == 0.0) & (ulonglong)dVar24;
          uVar17 = (undefined4)uVar16;
          uVar18 = (undefined4)(uVar16 >> 0x20);
        }
        fVar20 = 0.0;
        lVar14 = 0;
        fVar27 = 0.0;
        fVar26 = 0.0;
        do {
          lVar15 = (longlong)*(int *)(local_2a8 + lVar14 * 4);
          dVar6 = *(double *)(local_298[0] + 0x10 + lVar15 * 0x18) - dVar23;
          dVar24 = *(double *)(local_298[0] + 8 + lVar15 * 0x18) - dVar21;
          dVar22 = *(double *)(local_298[0] + lVar15 * 0x18) - dVar5;
          fVar25 = (float)((double)CONCAT44(uVar18,uVar17) * dVar6 +
                          dVar19 * dVar22 + dVar2 * dVar24);
          fVar28 = fVar25;
          if ((fVar20 <= fVar25) && (fVar28 = fVar20, fVar27 < fVar25)) {
            fVar27 = fVar25;
          }
          fVar20 = fVar28;
          fVar28 = (float)(dVar6 * 0.0 + dVar22 * -dVar2 + dVar24 * dVar19);
          if (fVar28 <= fVar26) {
            fVar28 = fVar26;
          }
          lVar14 = lVar14 + 1;
          fVar26 = fVar28;
        } while (lVar9 != lVar14);
        fVar26 = fVar28 * (fVar27 - fVar20);
        if (fVar26 < local_33c) {
          local_2f8 = (double)(fVar27 - fVar20);
          local_308 = (double)CONCAT44(uVar18,uVar17) * local_2f8;
          local_328 = dVar2 * local_2f8;
          local_2f8 = local_2f8 * dVar19;
          dVar24 = (double)((fVar27 + fVar20) * 0.5);
          local_2e8 = (double)fVar28;
          dVar22 = (double)(fVar28 * 0.5);
          uStack_2f0 = 0;
          uStack_320 = 0;
          uStack_300 = 0;
          *param_3 = (dVar5 + dVar24 * dVar19) - dVar2 * dVar22;
          param_3[1] = dVar19 * dVar22 + dVar21 + dVar2 * dVar24;
          param_3[2] = dVar22 * 0.0 + dVar23 + (double)CONCAT44(uVar18,uVar17) * dVar24;
          local_318 = dVar19 * local_2e8;
          uStack_310 = 0;
          local_338 = -dVar2 * local_2e8;
          local_2e8 = local_2e8 * 0.0;
          uStack_2e0 = 0;
          uStack_330 = 0x8000000000000000;
          local_33c = fVar26;
        }
        iVar11 = (int)lVar13;
        lVar13 = lVar13 + 1;
      } while (lVar13 != lVar9);
    }
    dVar5 = local_308 * dStack_120 + local_328 * dStack_140 + local_2f8 * dStack_160 +
            dStack_100 * 0.0;
    local_2b0 = local_2f8 * local_158 + local_328 * local_138 + local_308 * local_118 +
                local_f8 * 0.0;
    local_2c0._8_4_ = SUB84(dVar5,0);
    local_2c0._0_8_ =
         local_308 * local_128 + local_328 * local_148 + local_2f8 * local_168 + local_108 * 0.0;
    local_2c0._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    dVar2 = local_2e8 * local_128 + local_318 * local_148 + local_338 * local_168 + local_108 * 0.0;
    dVar19 = local_2e8 * dStack_120 + local_318 * dStack_140 + local_338 * dStack_160 +
             dStack_100 * 0.0;
    dVar24 = local_2e8 * local_118 + local_338 * local_158 + local_318 * local_138 + local_f8 * 0.0;
    dVar5 = *param_3;
    dVar21 = param_3[1];
    dVar23 = param_3[2];
    *param_3 = dVar23 * local_128 + dVar21 * local_148 + dVar5 * local_168 + local_108;
    param_3[1] = dVar23 * dStack_120 + dVar21 * dStack_140 + dVar5 * dStack_160 + dStack_100;
    param_3[2] = local_118 * dVar23 + local_138 * dVar21 + local_158 * dVar5 + local_f8;
    FUN_147b4850a(local_268,local_288,local_2c0);
    FUN_144a90b9e(local_268,&local_2d8);
    param_4[2] = local_2c8;
    *param_4 = local_2d8;
    param_4[1] = uStack_2d0;
    *param_5 = (float)SQRT(local_2b0 * local_2b0 +
                           (double)local_2c0._0_8_ * (double)local_2c0._0_8_ +
                           (double)local_2c0._8_8_ * (double)local_2c0._8_8_);
    *param_6 = (float)SQRT(dVar24 * dVar24 + dVar2 * dVar2 + dVar19 * dVar19);
    if (local_2a8 != 0) {
      FUN_1400020a8();
    }
    if (local_298[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_e0 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b30d30 FUN_147b30d30 body=240 status=ok
// SIG undefined FUN_147b30d30(void)

void FUN_147b30d30(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = local_28;
  if (local_20 < local_28) {
    lVar1 = local_20;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b30e22 FUN_147b30e22 body=472 status=ok
// SIG undefined FUN_147b30e22(void)

void FUN_147b30e22(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 auStack_78 [43];
  byte local_4d;
  undefined4 local_4c;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar8 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar8 = local_48;
  }
  local_4c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar9 = &local_4c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_2 + 0x38);
  }
  local_4d = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4d);
  }
  pbVar4 = &local_4d;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar4 = *(byte **)(param_2 + 0x38);
  }
  plVar11 = local_48;
  if (plVar3 != (longlong *)0x0) {
    plVar11 = plVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = *(uint *)(plVar11 + 1);
  uVar5 = 0;
  if ((ulonglong)uVar2 == 0) {
    uVar5 = 0xffffffff;
    bVar7 = 0;
  }
  else {
    bVar7 = *(byte *)*plVar8;
    if (1 < (int)uVar2) {
      uVar6 = 0;
      uVar10 = 1;
      do {
        bVar1 = ((byte *)*plVar8)[uVar10];
        if (bVar1 < bVar7) {
          uVar6 = uVar10 & 0xffffffff;
          bVar7 = bVar1;
        }
        uVar5 = (undefined4)uVar6;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
  }
  *puVar9 = uVar5;
  *pbVar4 = bVar7;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b30ffc FUN_147b30ffc body=485 status=ok
// SIG undefined FUN_147b30ffc(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b30ffc(undefined8 param_1,longlong param_2)

{
  float fVar1;
  uint uVar2;
  longlong *plVar3;
  float *pfVar4;
  float fVar5;
  ulonglong uVar6;
  longlong *plVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong *plVar10;
  float fVar11;
  undefined1 auStack_78 [40];
  float local_50 [2];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  plVar7 = plVar3;
  if (plVar3 == (longlong *)0x0) {
    plVar7 = local_48;
  }
  local_50[1] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 1);
  }
  pfVar8 = local_50 + 1;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar8 = *(float **)(param_2 + 0x38);
  }
  local_50[0] = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pfVar4 = local_50;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar4 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar10 = local_48;
  if (plVar3 != (longlong *)0x0) {
    plVar10 = plVar3;
  }
  uVar2 = *(uint *)(plVar10 + 1);
  if ((ulonglong)uVar2 == 0) {
    fVar11 = 0.0;
    fVar5 = -NAN;
  }
  else {
    fVar11 = *(float *)*plVar7;
    fVar5 = 0.0;
    if (1 < (int)uVar2) {
      uVar6 = 0;
      uVar9 = 1;
      do {
        fVar1 = ((float *)*plVar7)[uVar9];
        fVar5 = (float)uVar6;
        if (fVar1 < fVar11) {
          uVar6 = uVar9 & 0xffffffff;
          fVar5 = (float)uVar9;
          fVar11 = fVar1;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
  }
  *pfVar8 = fVar5;
  *pfVar4 = fVar11;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b311e2 FUN_147b311e2 body=471 status=ok
// SIG undefined FUN_147b311e2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_147b311e2(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int *piVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0;
  local_48[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  plVar7 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar7 = local_48;
  }
  local_50[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50 + 1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 1);
  }
  piVar8 = local_50 + 1;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar8 = *(int **)(param_2 + 0x38);
  }
  local_50[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  piVar3 = local_50;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar3 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar10 = local_48;
  if (plVar2 != (longlong *)0x0) {
    plVar10 = plVar2;
  }
  uVar1 = *(uint *)(plVar10 + 1);
  if ((ulonglong)uVar1 == 0) {
    iVar4 = 0;
    iVar5 = -1;
  }
  else {
    iVar4 = *(int *)*plVar7;
    iVar5 = 0;
    if (1 < (int)uVar1) {
      uVar6 = 0;
      uVar9 = 1;
      do {
        iVar5 = ((int *)*plVar7)[uVar9];
        if (iVar5 < iVar4) {
          uVar6 = uVar9 & 0xffffffff;
          iVar4 = iVar5;
        }
        iVar5 = (int)uVar6;
        uVar9 = uVar9 + 1;
      } while (uVar1 != uVar9);
    }
  }
  *piVar8 = iVar5;
  *piVar3 = iVar4;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b313ba FUN_147b313ba body=309 status=ok
// SIG undefined FUN_147b313ba(void)

void FUN_147b313ba(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_48;
  uStack_70 = uStack_40;
  local_68 = local_38;
  local_98 = local_30;
  uStack_94 = uStack_2c;
  uStack_90 = uStack_28;
  uStack_8c = uStack_24;
  local_88 = local_20;
  FUN_1467f9444(&local_60);
  *(undefined8 *)(param_3 + 4) = local_50;
  *param_3 = local_60;
  param_3[1] = uStack_5c;
  param_3[2] = uStack_58;
  param_3[3] = uStack_54;
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b314f0 FUN_147b314f0 body=216 status=ok
// SIG undefined FUN_147b314f0(void)

void FUN_147b314f0(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined1 auStack_48 [46];
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19 * local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b315ca FUN_147b315ca body=234 status=ok
// SIG undefined FUN_147b315ca(void)

void FUN_147b315ca(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b316b6 FUN_147b316b6 body=235 status=ok
// SIG undefined FUN_147b316b6(void)

void FUN_147b316b6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [32];
  double local_28;
  int local_1c;
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
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_1c * local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b317a2 FUN_147b317a2 body=250 status=ok
// SIG undefined FUN_147b317a2(void)

void FUN_147b317a2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
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
  *param_3 = CONCAT44(local_20._4_4_ * local_24,local_20._0_4_ * local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3189e FUN_147b3189e body=253 status=ok
// SIG undefined FUN_147b3189e(void)

void FUN_147b3189e(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (ulonglong)(uint)((int)local_20 * (int)local_28) |
             (local_20 >> 0x20) * (local_28 & 0xffffffff00000000);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3199c FUN_147b3199c body=279 status=ok
// SIG undefined FUN_147b3199c(void)

void FUN_147b3199c(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_58 [44];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_2c * local_28;
  param_3[1] = local_24 * local_2c;
  param_3[2] = local_20 * local_2c;
  param_3[3] = local_1c * local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b31ab4 FUN_147b31ab4 body=277 status=ok
// SIG undefined FUN_147b31ab4(void)

void FUN_147b31ab4(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 * local_28;
  param_3[1] = local_34 * local_24;
  param_3[2] = local_30 * local_20;
  param_3[3] = local_2c * local_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b31bca FUN_147b31bca body=359 status=ok
// SIG undefined FUN_147b31bca(void)

void FUN_147b31bca(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  double *pdVar3;
  undefined1 auStack_158 [24];
  double adStack_140 [19];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar2 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  adStack_140[2] = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,adStack_140 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),adStack_140 + 2);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = 0x18;
  do {
    *(double *)((longlong)adStack_140 + lVar1) =
         *(double *)(puVar2 + lVar1 + -0x18) * adStack_140[2];
    *(double *)((longlong)adStack_140 + lVar1 + 8) =
         *(double *)(puVar2 + lVar1 + -0x10) * adStack_140[2];
    *(double *)((longlong)adStack_140 + lVar1 + 0x10) =
         *(double *)(puVar2 + lVar1 + -8) * adStack_140[2];
    *(double *)((longlong)adStack_140 + lVar1 + 0x18) = *(double *)(puVar2 + lVar1) * adStack_140[2]
    ;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x98);
  pdVar3 = adStack_140 + 3;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *pdVar3;
    pdVar3 = pdVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b31d32 FUN_147b31d32 body=307 status=ok
// SIG undefined FUN_147b31d32(void)

void FUN_147b31d32(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8 [16];
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar2 = local_a8;
  if (puVar4 != (undefined1 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1447fea8d(local_1a8,puVar2,puVar4);
  puVar3 = local_1a8;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_28 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b31e66 FUN_147b31e66 body=453 status=ok
// SIG undefined FUN_147b31e66(void)

void FUN_147b31e66(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double *pdVar13;
  double *pdVar14;
  undefined1 auStack_c8 [32];
  double local_a8 [4];
  double local_88 [5];
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar14 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  pdVar13 = local_88;
  if (pdVar14 != (double *)0x0) {
    pdVar13 = pdVar14;
  }
  pdVar14 = local_a8;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar14 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar9 = *pdVar14;
  dVar10 = pdVar14[1];
  dVar11 = pdVar14[2];
  dVar12 = pdVar14[3];
  dVar1 = pdVar13[3];
  dVar2 = pdVar13[3];
  dVar3 = pdVar13[1];
  dVar4 = pdVar13[1];
  dVar5 = *pdVar13;
  dVar6 = *pdVar13;
  dVar7 = pdVar13[2];
  dVar8 = pdVar13[2];
  *param_3 = dVar10 * dVar7 * -1.0 + dVar11 * dVar3 + dVar5 * dVar12 * 1.0 + dVar1 * dVar9;
  param_3[1] = dVar9 * dVar8 * 1.0 + dVar12 * dVar4 + dVar6 * dVar11 * -1.0 + dVar2 * dVar10;
  param_3[2] = dVar12 * dVar7 * 1.0 + ((dVar5 * dVar10 * 1.0 + dVar1 * dVar11) - dVar3 * dVar9);
  param_3[3] = dVar11 * dVar8 * -1.0 + ((dVar6 * dVar9 * -1.0 + dVar2 * dVar12) - dVar4 * dVar10);
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3202c FUN_147b3202c body=264 status=ok
// SIG undefined FUN_147b3202c(void)

void FUN_147b3202c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  float local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_34;
  *param_3 = dVar1 * local_30;
  param_3[1] = local_28 * dVar1;
  param_3[2] = local_20 * dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32136 FUN_147b32136 body=268 status=ok
// SIG undefined FUN_147b32136(void)

void FUN_147b32136(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_34;
  *param_3 = dVar1 * local_30;
  param_3[1] = local_28 * dVar1;
  param_3[2] = local_20 * dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32244 FUN_147b32244 body=244 status=ok
// SIG undefined FUN_147b32244(void)

void FUN_147b32244(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [36];
  float local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_24 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (longlong)((float)local_20 * local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3233a FUN_147b3233a body=250 status=ok
// SIG undefined FUN_147b3233a(void)

void FUN_147b3233a(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 * local_28;
  param_3[1] = local_20 * local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32436 FUN_147b32436 body=243 status=ok
// SIG undefined FUN_147b32436(void)

void FUN_147b32436(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 * local_28;
  param_3[1] = local_30 * local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3252a FUN_147b3252a body=369 status=ok
// SIG undefined FUN_147b3252a(void)

void FUN_147b3252a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_98 [32];
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[4] = 0.0;
  local_78[5] = 0.0;
  local_78[6] = 0.0;
  local_78[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  pdVar8 = *(double **)(param_2 + 0x38);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar7 = local_78 + 4;
  if (pdVar8 != (double *)0x0) {
    pdVar7 = pdVar8;
  }
  pdVar8 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar8 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar7[3];
  dVar2 = pdVar8[3];
  dVar3 = pdVar7[2];
  dVar4 = pdVar8[2];
  dVar5 = pdVar7[1];
  dVar6 = pdVar8[1];
  *param_3 = *pdVar7 * *pdVar8;
  param_3[1] = dVar5 * dVar6;
  param_3[2] = dVar3 * dVar4;
  param_3[3] = dVar1 * dVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3269c FUN_147b3269c body=265 status=ok
// SIG undefined FUN_147b3269c(void)

void FUN_147b3269c(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_38 * local_30;
  param_3[1] = local_28 * local_38;
  param_3[2] = local_20 * local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b327a6 FUN_147b327a6 body=268 status=ok
// SIG undefined FUN_147b327a6(void)

void FUN_147b327a6(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_34;
  *param_3 = dVar1 * local_30;
  param_3[1] = local_28 * dVar1;
  param_3[2] = local_20 * dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b328b4 FUN_147b328b4 body=161 status=ok
// SIG undefined FUN_147b328b4(void)

void FUN_147b328b4(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * 3.141592653589793;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32956 FUN_147b32956 body=241 status=ok
// SIG undefined FUN_147b32956(void)

void FUN_147b32956(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pow(local_20,local_28);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32a4e FUN_147b32a4e body=339 status=ok
// SIG undefined FUN_147b32a4e(void)

void FUN_147b32a4e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = ABS(local_20 - local_28) <= local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32baa FUN_147b32baa body=655 status=ok
// SIG undefined FUN_147b32baa(void)

void FUN_147b32baa(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  local_120 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  local_124 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  puVar4 = &local_118;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_138 = local_124;
  uVar2 = FUN_147b32e3a(puVar3,puVar4,local_11c,local_120);
  *param_3 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b32e3a FUN_147b32e3a body=346 status=ok
// SIG undefined FUN_147b32e3a(void)

undefined8 FUN_147b32e3a(double *param_1,double *param_2,float param_3,float param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  undefined8 in_RAX;
  undefined4 in_R8D;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  double dVar13;
  
  dVar13 = (double)param_4;
  lVar12 = -(ulonglong)(dVar13 < ABS(param_1[1] - param_2[1]));
  auVar8._8_4_ = (int)lVar12;
  auVar8._0_8_ = -(ulonglong)(dVar13 < ABS(*param_1 - *param_2));
  auVar8._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd((int)in_RAX,auVar8);
  lVar12 = -(ulonglong)(dVar13 < ABS(param_1[3] - param_2[3]));
  auVar7._8_4_ = (int)lVar12;
  auVar7._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[2] - param_2[2]));
  auVar7._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  iVar10 = movmskpd(in_R8D,auVar7);
  uVar11 = iVar10 << 2 | uVar9;
  if (uVar11 != 0) {
    auVar6._8_8_ = -(ulonglong)(dVar13 < ABS(param_1[1] + param_2[1]));
    auVar6._0_8_ = -(ulonglong)(dVar13 < ABS(*param_1 + *param_2));
    uVar9 = movmskpd(uVar9,auVar6);
    auVar4._8_8_ = -(ulonglong)(dVar13 < ABS(param_1[3] + param_2[3]));
    auVar4._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[2] + param_2[2]));
    uVar11 = movmskpd(uVar11,auVar4);
    if ((uVar11 & 0x3fffffff) != 0 || uVar9 != 0) {
      return 0;
    }
  }
  dVar13 = (double)param_3;
  auVar5._8_8_ = -(ulonglong)(dVar13 < ABS(param_1[5] - param_2[5]));
  auVar5._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[4] - param_2[4]));
  iVar10 = movmskpd(uVar9,auVar5);
  lVar12 = -(ulonglong)(dVar13 < ABS(param_1[7] - param_2[7]));
  auVar2._8_4_ = (int)lVar12;
  auVar2._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[6] - param_2[6]));
  auVar2._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd(0,auVar2);
  if ((uVar9 & 0x3fffffff) != 0 || iVar10 != 0) {
    return 0;
  }
  dVar13 = (double)param_5;
  auVar1._8_8_ = -(ulonglong)(dVar13 < ABS(param_1[9] - param_2[9]));
  auVar1._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[8] - param_2[8]));
  iVar10 = movmskpd(iVar10,auVar1);
  lVar12 = -(ulonglong)(dVar13 < ABS(param_1[0xb] - param_2[0xb]));
  auVar3._8_4_ = (int)lVar12;
  auVar3._0_8_ = -(ulonglong)(dVar13 < ABS(param_1[10] - param_2[10]));
  auVar3._12_4_ = (int)((ulonglong)lVar12 >> 0x20);
  uVar9 = movmskpd((int)param_1,auVar3);
  return CONCAT71((int7)(CONCAT44((int)((ulonglong)in_RAX >> 0x20),iVar10) >> 8),
                  (uVar9 & 0x3fffffff) == 0 && iVar10 == 0);
}



// FUNCTION 147b32f94 FUN_147b32f94 body=165 status=ok
// SIG undefined FUN_147b32f94(void)

void FUN_147b32f94(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar4 = local_28;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *param_3 = *puVar4;
  param_3[1] = uVar1 ^ 0x80000000;
  param_3[2] = uVar2;
  param_3[3] = uVar3 ^ 0x80000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3303a FUN_147b3303a body=183 status=ok
// SIG undefined FUN_147b3303a(void)

void FUN_147b3303a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
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
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_1467fac50(&local_68,&local_48);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b330f2 FUN_147b330f2 body=165 status=ok
// SIG undefined FUN_147b330f2(void)

void FUN_147b330f2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  uint uStack_2c;
  undefined4 uStack_28;
  uint uStack_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30;
  param_3[1] = uStack_2c ^ 0x80000000;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24 ^ 0x80000000;
  *(ulonglong *)(param_3 + 4) = local_20 ^ 0x8000000000000000;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33198 FUN_147b33198 body=235 status=ok
// SIG undefined FUN_147b33198(void)

void FUN_147b33198(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  double dVar1;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_28 * local_28 + local_20 * local_20;
  if (9.99999993922529e-09 < dVar1) {
    local_20 = local_20 * (1.0 / SQRT(dVar1));
  }
  else {
    local_20 = 0.0;
  }
  *param_3 = -(ulonglong)(9.99999993922529e-09 < dVar1) &
             (ulonglong)(local_28 * (1.0 / SQRT(dVar1)));
  param_3[1] = (ulonglong)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33284 FUN_147b33284 body=325 status=ok
// SIG undefined FUN_147b33284(void)

void FUN_147b33284(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [44];
  float local_2c;
  double local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  pdVar3 = local_28;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = *pdVar3;
  dVar1 = pdVar3[1];
  dVar5 = dVar4 * dVar4 + dVar1 * dVar1;
  if ((double)local_2c < dVar5) {
    dVar4 = dVar4 * (1.0 / SQRT(dVar5));
  }
  else {
    dVar4 = 0.0;
  }
  *pdVar3 = dVar4;
  pdVar3[1] = (double)(-(ulonglong)((double)local_2c < dVar5) &
                      (ulonglong)(dVar1 * (1.0 / SQRT(dVar5))));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b333ca FUN_147b333ca body=259 status=ok
// SIG undefined FUN_147b333ca(void)

void FUN_147b333ca(undefined8 param_1,longlong param_2,float *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_34 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)FUN_144719204(SUB84((double)local_34,0));
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  *param_3 = (float)(double)(~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
                            (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1));
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b334ce FUN_147b334ce body=430 status=ok
// SIG undefined FUN_147b334ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b334ce(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar9 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar7._8_8_ = local_28 - local_40;
  auVar7._0_8_ = local_30 - local_48;
  auVar2 = divpd(auVar7,_DAT_1499387d0);
  auVar6._0_8_ = (local_20 - local_38) / 360.0;
  auVar6._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,3);
  auVar7 = roundpd(auVar6,auVar6,3);
  auVar14._0_8_ = (local_20 - local_38) - auVar7._0_8_ * dVar9;
  auVar14._8_8_ = 0.0 - auVar7._8_8_ * dVar1;
  dVar11 = (local_30 - local_48) - auVar2._0_8_ * dVar9;
  dVar12 = (local_28 - local_40) - auVar2._8_8_ * dVar1;
  auVar13._0_8_ = dVar11 + dVar9;
  auVar13._8_8_ = dVar12 + dVar1;
  auVar10._0_8_ = dVar9 + auVar14._0_8_;
  auVar10._8_8_ = dVar1 + auVar14._8_8_;
  auVar3._8_8_ = -(ulonglong)(0.0 <= dVar12);
  auVar3._0_8_ = -(ulonglong)(0.0 <= dVar11);
  auVar2._8_8_ = dVar12;
  auVar2._0_8_ = dVar11;
  auVar7 = blendvpd(auVar13,auVar2,auVar3);
  auVar4._8_8_ = -(ulonglong)(0.0 <= auVar14._8_8_);
  auVar4._0_8_ = -(ulonglong)(0.0 <= auVar14._0_8_);
  auVar2 = blendvpd(auVar10,auVar14,auVar4);
  auVar8._0_8_ = auVar7._0_8_ + -360.0;
  auVar8._8_8_ = auVar7._8_8_ + -360.0;
  auVar5._8_8_ = -(ulonglong)(180.0 < auVar7._8_8_);
  auVar5._0_8_ = -(ulonglong)(180.0 < auVar7._0_8_);
  auVar7 = blendvpd(auVar7,auVar8,auVar5);
  dVar9 = auVar2._0_8_;
  *param_3 = auVar7;
  *(ulonglong *)param_3[1] =
       ~-(ulonglong)(180.0 < dVar9) & (ulonglong)dVar9 |
       (ulonglong)(dVar9 + -360.0) & -(ulonglong)(180.0 < dVar9);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3367e FUN_147b3367e body=390 status=ok
// SIG undefined FUN_147b3367e(void)

void FUN_147b3367e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_28 != local_30) || (NAN(local_28) || NAN(local_30))) {
    dVar2 = local_30;
    dVar1 = local_28;
    if (local_28 <= local_30) {
      dVar2 = local_28;
      dVar1 = local_30;
    }
    dVar1 = (local_20 - dVar2) / (dVar1 - dVar2);
  }
  else {
    dVar1 = (double)(~-(ulonglong)(local_20 < local_28) & 0x3ff0000000000000);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b33806 FUN_147b33806 body=310 status=ok
// SIG undefined FUN_147b33806(void)

void FUN_147b33806(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  double dVar1;
  undefined1 auStack_58 [44];
  float local_2c;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_28 * local_28 + local_20 * local_20;
  if ((double)local_2c < dVar1) {
    local_20 = local_20 * (1.0 / SQRT(dVar1));
  }
  else {
    local_20 = 0.0;
  }
  *param_3 = -(ulonglong)((double)local_2c < dVar1) & (ulonglong)(local_28 * (1.0 / SQRT(dVar1)));
  param_3[1] = (ulonglong)local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3393e FUN_147b3393e body=150 status=ok
// SIG undefined FUN_147b3393e(void)

void FUN_147b3393e(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined1 auStack_48 [44];
  uint local_1c;
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
  *param_3 = ~local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b339d6 FUN_147b339d6 body=154 status=ok
// SIG undefined FUN_147b339d6(void)

void FUN_147b339d6(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = ~local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33a98 FUN_147b33a98 body=230 status=ok
// SIG undefined FUN_147b33a98(void)

void FUN_147b33a98(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
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
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33b86 FUN_147b33b86 body=230 status=ok
// SIG undefined FUN_147b33b86(void)

void FUN_147b33b86(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33c7a FUN_147b33c7a body=230 status=ok
// SIG undefined FUN_147b33c7a(void)

void FUN_147b33c7a(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33d6e FUN_147b33d6e body=209 status=ok
// SIG undefined FUN_147b33d6e(void)

void FUN_147b33d6e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33e46 FUN_147b33e46 body=302 status=ok
// SIG undefined FUN_147b33e46(void)

void FUN_147b33e46(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (local_1c != local_2c || local_20 != local_30) |
             -(local_28 != local_38 || local_24 != local_34) & 1U;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b33f7e FUN_147b33f7e body=439 status=ok
// SIG undefined FUN_147b33f7e(void)

void FUN_147b33f7e(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  undefined1 auStack_158 [44];
  float local_12c;
  undefined1 local_128 [128];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar3 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar4 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  local_12c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6();
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_12c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar5 = true;
  uVar1 = 0;
  do {
    lVar2 = 0;
    do {
      if ((double)local_12c < ABS(*(double *)(puVar3 + lVar2 * 8) - *(double *)(puVar4 + lVar2 * 8))
         ) goto LAB_147b3409c;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    bVar5 = uVar1 < 3;
    uVar1 = uVar1 + 1;
    puVar4 = puVar4 + 0x20;
    puVar3 = puVar3 + 0x20;
  } while (uVar1 != 4);
LAB_147b3409c:
  *param_3 = bVar5;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34148 FUN_147b34148 body=585 status=ok
// SIG undefined FUN_147b34148(void)

void FUN_147b34148(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  bool bVar16;
  longlong lVar17;
  undefined1 auStack_f8 [44];
  float local_cc;
  double local_c8 [4];
  double local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  pdVar14 = *(double **)(param_2 + 0x38);
  pdVar15 = pdVar14;
  if (pdVar14 == (double *)0x0) {
    pdVar15 = local_a8;
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar13 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar13 = local_c8;
  }
  local_cc = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    lVar8 = param_2;
    FUN_144a5ded6(param_2,&local_cc);
    uVar9 = (undefined4)lVar8;
  }
  else {
    lVar8 = param_2;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
    uVar9 = (undefined4)lVar8;
  }
  lVar8 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  pdVar12 = local_a8;
  if (pdVar14 != (double *)0x0) {
    pdVar12 = pdVar14;
  }
  *(longlong *)(param_2 + 0x20) = lVar8;
  dVar3 = (double)local_cc;
  pdVar14 = local_c8;
  if (pdVar1 != (double *)0x0) {
    pdVar14 = pdVar1;
  }
  lVar17 = -(ulonglong)(dVar3 < ABS(pdVar15[1] - pdVar13[1]));
  auVar6._8_4_ = (int)lVar17;
  auVar6._0_8_ = -(ulonglong)(dVar3 < ABS(*pdVar15 - *pdVar13));
  auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
  uVar7 = movmskpd((int)lVar8,auVar6);
  lVar8 = -(ulonglong)(dVar3 < ABS(pdVar12[3] - pdVar14[3]));
  auVar5._8_4_ = (int)lVar8;
  auVar5._0_8_ = -(ulonglong)(dVar3 < ABS(pdVar12[2] - pdVar14[2]));
  auVar5._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
  iVar10 = movmskpd(uVar9,auVar5);
  uVar11 = iVar10 << 2 | uVar7;
  if (uVar11 == 0) {
    bVar16 = false;
  }
  else {
    auVar4._8_8_ = -(ulonglong)(dVar3 < ABS(pdVar15[1] + pdVar13[1]));
    auVar4._0_8_ = -(ulonglong)(dVar3 < ABS(*pdVar15 + *pdVar13));
    iVar10 = movmskpd(uVar7,auVar4);
    lVar8 = -(ulonglong)(dVar3 < ABS(pdVar12[3] + pdVar14[3]));
    auVar2._8_4_ = (int)lVar8;
    auVar2._0_8_ = -(ulonglong)(dVar3 < ABS(pdVar12[2] + pdVar14[2]));
    auVar2._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar7 = movmskpd(uVar11,auVar2);
    bVar16 = (uVar7 & 0x3fffffff) != 0 || iVar10 != 0;
  }
  *param_3 = bVar16;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34398 FUN_147b34398 body=543 status=ok
// SIG undefined FUN_147b34398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b34398(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_98 [44];
  float local_6c;
  double local_68;
  double dStack_60;
  double local_58;
  double local_48;
  double dStack_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_6c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    lVar4 = param_2;
    FUN_144a5ded6(param_2,&local_6c);
    uVar5 = (undefined4)lVar4;
  }
  else {
    lVar4 = param_2;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_6c);
    uVar5 = (undefined4)lVar4;
  }
  lVar4 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(longlong *)(param_2 + 0x20) = lVar4;
  dVar17 = (double)local_6c;
  dVar1 = (double)DAT_1499387d0;
  dVar2 = DAT_1499387d0._8_8_;
  auVar13._8_8_ = dStack_40 - dStack_60;
  auVar13._0_8_ = local_48 - local_68;
  auVar14 = divpd(auVar13,_DAT_1499387d0);
  auVar7._0_8_ = (local_38 - local_58) / 360.0;
  auVar7._8_8_ = 0;
  auVar15 = roundpd(auVar14,auVar14,3);
  auVar14 = roundpd(auVar7,auVar7,3);
  auVar22._0_8_ = (local_38 - local_58) - auVar14._0_8_ * dVar1;
  auVar22._8_8_ = 0.0 - auVar14._8_8_ * dVar2;
  dVar20 = (local_48 - local_68) - auVar15._0_8_ * dVar1;
  dVar21 = (dStack_40 - dStack_60) - auVar15._8_8_ * dVar2;
  auVar19._0_8_ = dVar20 + dVar1;
  auVar19._8_8_ = dVar21 + dVar2;
  auVar18._0_8_ = dVar1 + auVar22._0_8_;
  auVar18._8_8_ = dVar2 + auVar22._8_8_;
  auVar8._8_8_ = -(ulonglong)(0.0 <= dVar21);
  auVar8._0_8_ = -(ulonglong)(0.0 <= dVar20);
  auVar14._8_8_ = dVar21;
  auVar14._0_8_ = dVar20;
  auVar15 = blendvpd(auVar19,auVar14,auVar8);
  auVar9._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
  auVar9._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
  auVar14 = blendvpd(auVar18,auVar22,auVar9);
  auVar23._0_8_ = auVar15._0_8_ + -360.0;
  auVar23._8_8_ = auVar15._8_8_ + -360.0;
  auVar10._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
  auVar10._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
  auVar7 = blendvpd(auVar15,auVar23,auVar10);
  auVar11._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
  auVar11._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
  auVar15._8_8_ = auVar14._8_8_ + -360.0;
  auVar15._0_8_ = auVar14._0_8_ + -360.0;
  auVar14 = blendvpd(auVar14,auVar15,auVar11);
  auVar16._8_8_ = -(ulonglong)(dVar17 < ABS(auVar7._8_8_));
  auVar16._0_8_ = -(ulonglong)(dVar17 < ABS(auVar7._0_8_));
  iVar3 = movmskpd((int)lVar4,auVar16);
  auVar12._8_8_ = -(ulonglong)(dVar17 < ABS(auVar14._8_8_));
  auVar12._0_8_ = -(ulonglong)(dVar17 < ABS(auVar14._0_8_));
  uVar6 = movmskpd(uVar5,auVar12);
  *(bool *)param_3 = (uVar6 & 0x3fffffff) != 0 || iVar3 != 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b345be FUN_147b345be body=230 status=ok
// SIG undefined FUN_147b345be(void)

void FUN_147b345be(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = local_20 != local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b346ac FUN_147b346ac body=355 status=ok
// SIG undefined FUN_147b346ac(void)

void FUN_147b346ac(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_68 [44];
  float local_3c;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -((double)local_3c < ABS(local_20 - local_30) ||
              (double)local_3c < ABS(local_28 - local_38)) & 1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34816 FUN_147b34816 body=574 status=ok
// SIG undefined FUN_147b34816(void)

void FUN_147b34816(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_b8 [44];
  float local_8c;
  double local_88 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88[4] = 0.0;
  local_88[5] = 0.0;
  local_88[6] = 0.0;
  local_88[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 4);
  }
  pdVar6 = *(double **)(param_2 + 0x38);
  pdVar7 = local_88 + 4;
  pdVar4 = pdVar6;
  if (pdVar6 == (double *)0x0) {
    pdVar4 = pdVar7;
  }
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_88[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar5 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar5 = local_88;
  }
  local_8c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = (double)local_8c;
  bVar3 = true;
  if (ABS(*pdVar4 - *pdVar5) <= dVar2) {
    pdVar4 = pdVar6;
    if (pdVar6 == (double *)0x0) {
      pdVar4 = pdVar7;
    }
    pdVar5 = pdVar1;
    if (pdVar1 == (double *)0x0) {
      pdVar5 = local_88;
    }
    if (ABS(pdVar4[1] - pdVar5[1]) <= dVar2) {
      pdVar4 = pdVar6;
      if (pdVar6 == (double *)0x0) {
        pdVar4 = pdVar7;
      }
      pdVar5 = pdVar1;
      if (pdVar1 == (double *)0x0) {
        pdVar5 = local_88;
      }
      if (ABS(pdVar4[2] - pdVar5[2]) <= dVar2) {
        if (pdVar6 != (double *)0x0) {
          pdVar7 = pdVar6;
        }
        pdVar6 = local_88;
        if (pdVar1 != (double *)0x0) {
          pdVar6 = pdVar1;
        }
        bVar3 = dVar2 < ABS(pdVar7[3] - pdVar6[3]);
      }
    }
  }
  *(bool *)param_3 = bVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34a5c FUN_147b34a5c body=376 status=ok
// SIG undefined FUN_147b34a5c(void)

void FUN_147b34a5c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  double dVar2;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = (double)local_4c;
  bVar1 = true;
  if ((ABS(local_30 - local_48) <= dVar2) && (ABS(local_28 - local_40) <= dVar2)) {
    bVar1 = dVar2 < ABS(local_20 - local_38);
  }
  *(bool *)param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34bdc FUN_147b34bdc body=256 status=ok
// SIG undefined FUN_147b34bdc(void)

void FUN_147b34bdc(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -(local_20 != local_30 || local_28 != local_38) & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34ce4 FUN_147b34ce4 body=467 status=ok
// SIG undefined FUN_147b34ce4(void)

void FUN_147b34ce4(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  double *pdVar2;
  byte bVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 auStack_a8 [32];
  double local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[4] = 0.0;
  local_88[5] = 0.0;
  local_88[6] = 0.0;
  local_88[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 4);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  pdVar4 = local_88 + 4;
  pdVar6 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar6 = pdVar4;
  }
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_88[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar5 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar5 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar3 = 1;
  if ((*pdVar6 == *pdVar5) && (!NAN(*pdVar6) && !NAN(*pdVar5))) {
    pdVar6 = pdVar2;
    if (pdVar2 == (double *)0x0) {
      pdVar6 = pdVar4;
    }
    pdVar5 = pdVar1;
    if (pdVar1 == (double *)0x0) {
      pdVar5 = local_88;
    }
    if ((pdVar6[1] == pdVar5[1]) && (!NAN(pdVar6[1]) && !NAN(pdVar5[1]))) {
      pdVar6 = pdVar2;
      if (pdVar2 == (double *)0x0) {
        pdVar6 = pdVar4;
      }
      pdVar5 = pdVar1;
      if (pdVar1 == (double *)0x0) {
        pdVar5 = local_88;
      }
      if ((pdVar6[2] == pdVar5[2]) && (!NAN(pdVar6[2]) && !NAN(pdVar5[2]))) {
        if (pdVar2 != (double *)0x0) {
          pdVar4 = pdVar2;
        }
        pdVar2 = local_88;
        if (pdVar1 != (double *)0x0) {
          pdVar2 = pdVar1;
        }
        bVar3 = -(pdVar2[3] != pdVar4[3]) & 1;
      }
    }
  }
  *param_3 = bVar3;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34ebe FUN_147b34ebe body=279 status=ok
// SIG undefined FUN_147b34ebe(void)

void FUN_147b34ebe(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 != local_38 | -(local_28 != local_40 || local_30 != local_48) & 1U;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b34fd6 FUN_147b34fd6 body=88 status=ok
// SIG undefined FUN_147b34fd6(void)

void FUN_147b34fd6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1402160b8(&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35030 FUN_147b35030 body=230 status=ok
// SIG undefined FUN_147b35030(void)

void FUN_147b35030(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 | local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35118 FUN_147b35118 body=222 status=ok
// SIG undefined FUN_147b35118(void)

void FUN_147b35118(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined1 auStack_48 [40];
  uint local_20;
  uint local_1c;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c | local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b351f8 FUN_147b351f8 body=260 status=ok
// SIG undefined FUN_147b351f8(void)

void FUN_147b351f8(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 auStack_48 [46];
  byte local_1a;
  byte local_19;
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
  local_1a = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_1a == 0) {
    FUN_1415b7ec4(L"Modulo by zero: Percent_ByteByte",3,DAT_14cae6e38);
    bVar1 = 0;
  }
  else {
    bVar1 = local_19 % local_1a;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b352fe FUN_147b352fe body=271 status=ok
// SIG undefined FUN_147b352fe(void)

longlong FUN_147b352fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 == 0) {
    lVar1 = FUN_1415b7ec4(L"Modulo by zero: Percent_Int64Int64",3,DAT_14cae6e38);
    lVar2 = 0;
  }
  else {
    lVar1 = local_20 / local_28;
    lVar2 = local_20 % local_28;
  }
  *param_3 = lVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3540e FUN_147b3540e body=263 status=ok
// SIG undefined FUN_147b3540e(void)

ulonglong FUN_147b3540e(undefined8 param_1,longlong param_2,int *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined1 auStack_48 [40];
  int local_20;
  int local_1c;
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
  local_20 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_20 == 0) {
    uVar1 = FUN_1415b7ec4(L"Modulo by zero: Percent_IntInt",3,DAT_14cae6e38);
    iVar2 = 0;
  }
  else {
    uVar1 = (longlong)local_1c / (longlong)local_20 & 0xffffffff;
    iVar2 = local_1c % local_20;
  }
  *param_3 = iVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35516 FUN_147b35516 body=157 status=ok
// SIG undefined FUN_147b35516(void)

void FUN_147b35516(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_140073f12(local_1c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b355ba FUN_147b355ba body=274 status=ok
// SIG undefined FUN_147b355ba(void)

void FUN_147b355ba(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong *plVar2;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  longlong local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467f8578(plVar2,local_3c);
  *param_3 = uVar1;
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b356ce FUN_147b356ce body=458 status=ok
// SIG undefined FUN_147b356ce(void)

void FUN_147b356ce(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_b8 [32];
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (local_58 - local_70) * local_88 +
          (local_68 - local_80) * local_98 + (local_60 - local_78) * local_90;
  *param_3 = local_68 - dVar1 * local_98;
  param_3[1] = local_60 - local_90 * dVar1;
  param_3[2] = local_58 - local_88 * dVar1;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3589a FUN_147b3589a body=342 status=ok
// SIG undefined FUN_147b3589a(void)

void FUN_147b3589a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = local_48 * local_60 + local_58 * local_70 + local_68 * local_50;
  *param_3 = local_58 - dVar1 * local_70;
  param_3[1] = local_50 - local_68 * dVar1;
  param_3[2] = local_48 - local_60 * dVar1;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b359f2 FUN_147b359f2 body=385 status=ok
// SIG undefined FUN_147b359f2(void)

void FUN_147b359f2(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = local_38 * local_38 + local_48 * local_48 + local_40 * local_40;
  if (dVar3 <= 9.99999993922529e-09) {
    FUN_1415b7ec4(L"Divide by zero: ProjectVectorOnToVector with zero Target vector",3,DAT_14cae6e48
                 );
    dVar1 = DAT_14c8464e8;
    dVar2 = DAT_14c8464f0;
    dVar3 = DAT_14c8464e0;
  }
  else {
    dVar3 = (local_20 * local_38 + local_30 * local_48 + local_28 * local_40) / dVar3;
    dVar1 = local_40 * dVar3;
    dVar2 = local_38 * dVar3;
    dVar3 = dVar3 * local_48;
  }
  *param_3 = dVar3;
  param_3[1] = dVar1;
  param_3[2] = dVar2;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35b74 FUN_147b35b74 body=380 status=ok
// SIG undefined FUN_147b35b74(void)

void FUN_147b35b74(undefined8 param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [32];
  double local_68 [4];
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pdVar1 = local_48;
  if (pdVar2 != (double *)0x0) {
    pdVar1 = pdVar2;
  }
  pdVar2 = local_68;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = pdVar1[3] * pdVar2[3] + pdVar1[2] * pdVar2[2] + *pdVar1 * *pdVar2 + pdVar1[1] * pdVar2[1];
  dVar3 = (dVar4 + dVar4) * dVar4 + -1.0;
  dVar4 = dVar3;
  if (1.0 <= dVar3) {
    dVar4 = 1.0;
  }
  dVar4 = acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar4));
  *param_3 = (float)dVar4;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35cf2 FUN_147b35cf2 body=374 status=ok
// SIG undefined FUN_147b35cf2(void)

void FUN_147b35cf2(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auStack_88 [32];
  double local_68 [4];
  double local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pdVar2 = local_48;
  if (pdVar3 != (double *)0x0) {
    pdVar2 = pdVar3;
  }
  pdVar3 = local_68;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar3 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)(&DAT_149931160)
                  [0.0 <= pdVar3[3] * pdVar2[3] +
                          pdVar3[2] * pdVar2[2] + *pdVar3 * *pdVar2 + pdVar3[1] * pdVar2[1]];
  *pdVar2 = *pdVar2 * dVar1;
  pdVar2[1] = pdVar2[1] * dVar1;
  pdVar2[2] = pdVar2[2] * dVar1;
  pdVar2[3] = pdVar2[3] * dVar1;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35e6a FUN_147b35e6a body=179 status=ok
// SIG undefined FUN_147b35e6a(void)

void FUN_147b35e6a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1449413b4(puVar1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35f1e FUN_147b35f1e body=179 status=ok
// SIG undefined FUN_147b35f1e(void)

void FUN_147b35f1e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fba6a(puVar1,&local_58);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b35fd2 FUN_147b35fd2 body=318 status=ok
// SIG undefined FUN_147b35fd2(void)

void FUN_147b35fd2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  FUN_144a9d448(&local_68);
  param_3[4] = local_58;
  param_3[5] = uStack_54;
  param_3[6] = uStack_50;
  param_3[7] = uStack_4c;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36112 FUN_147b36112 body=318 status=ok
// SIG undefined FUN_147b36112(void)

void FUN_147b36112(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  FUN_14022d702(&local_68);
  param_3[4] = local_58;
  param_3[5] = uStack_54;
  param_3[6] = uStack_50;
  param_3[7] = uStack_4c;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36252 FUN_147b36252 body=222 status=ok
// SIG undefined FUN_147b36252(void)

void FUN_147b36252(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 *puVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  dVar2 = *(double *)(puVar1 + 0x18);
  dVar3 = dVar2;
  if (1.0 <= dVar2) {
    dVar3 = 1.0;
  }
  dVar2 = acos((double)(-(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3));
  *param_3 = (float)(dVar2 + dVar2);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36332 FUN_147b36332 body=406 status=ok
// SIG undefined FUN_147b36332(void)

void FUN_147b36332(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar6 = dVar1 - dVar2 * 0.0;
  dVar7 = dVar2 * 0.0 - dVar3;
  dVar8 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 1.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 0.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 0.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b364ca FUN_147b364ca body=406 status=ok
// SIG undefined FUN_147b364ca(void)

void FUN_147b364ca(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar7 = dVar2 - dVar3 * 0.0;
  dVar6 = dVar1 * 0.0 + dVar2 * -0.0;
  dVar8 = dVar3 * 0.0 - dVar1;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 0.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 1.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 0.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36662 FUN_147b36662 body=406 status=ok
// SIG undefined FUN_147b36662(void)

void FUN_147b36662(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar7 = dVar2 * 0.0 + dVar3 * -0.0;
  dVar8 = dVar3 - dVar1 * 0.0;
  dVar6 = dVar1 * 0.0 - dVar2;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 0.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 0.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 1.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b367fa FUN_147b367fa body=265 status=ok
// SIG undefined FUN_147b367fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b367fa(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_58 [32];
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar4 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = *pdVar4;
  dVar3 = pdVar4[1];
  dVar5 = pdVar4[2];
  dVar6 = dVar5 * dVar5 + dVar2 * dVar2;
  dVar9 = dVar3 * dVar3 + 0.0;
  auVar7._0_8_ = dVar6 + dVar9;
  auVar7._8_8_ = dVar6 + dVar9;
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar10 = divpd(_DAT_149934d80,auVar8);
  auVar8._8_4_ = (int)-(ulonglong)(1e-08 <= auVar7._8_8_);
  auVar8._0_8_ = -(ulonglong)(1e-08 <= auVar7._0_8_);
  auVar8._12_4_ = (int)(-(ulonglong)(1e-08 <= auVar7._8_8_) >> 0x20);
  auVar1._8_8_ = dVar3 * auVar10._8_8_;
  auVar1._0_8_ = dVar2 * auVar10._0_8_;
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000),auVar1,auVar8);
  if ((-(ulonglong)(1e-08 <= auVar7._0_8_) & 1) == 0) {
    dVar5 = 0.0;
  }
  else {
    dVar5 = dVar5 * auVar10._0_8_;
  }
  *param_3 = auVar8;
  *(double *)param_3[1] = dVar5;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3692c FUN_147b3692c body=183 status=ok
// SIG undefined FUN_147b3692c(void)

void FUN_147b3692c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined4 *puVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar6 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar6[1];
  uVar2 = puVar6[2];
  uVar3 = puVar6[3];
  dVar4 = *(double *)(puVar6 + 4);
  dVar5 = *(double *)(puVar6 + 6);
  *param_3 = *puVar6;
  param_3[1] = uVar1 ^ 0x80000000;
  param_3[2] = uVar2;
  param_3[3] = uVar3 ^ 0x80000000;
  *(double *)(param_3 + 4) = dVar4 * -1.0;
  *(double *)(param_3 + 6) = dVar5 * 1.0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b369ea FUN_147b369ea body=161 status=ok
// SIG undefined FUN_147b369ea(void)

void FUN_147b369ea(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar1 = FUN_144afe766(puVar2);
  *param_3 = bVar1 ^ 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36a92 FUN_147b36a92 body=467 status=ok
// SIG undefined FUN_147b36a92(void)

void FUN_147b36a92(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  double *pdVar12;
  double *pdVar13;
  bool bVar14;
  longlong lVar15;
  undefined1 auStack_b8 [44];
  float local_8c;
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar13 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar13 = local_88;
  }
  local_8c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    lVar8 = param_2;
    FUN_144a5ded6(param_2,&local_8c);
    uVar9 = (undefined4)lVar8;
  }
  else {
    lVar8 = param_2;
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
    uVar9 = (undefined4)lVar8;
  }
  lVar8 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(longlong *)(param_2 + 0x20) = lVar8;
  dVar3 = (double)local_8c;
  pdVar12 = local_88;
  if (pdVar1 != (double *)0x0) {
    pdVar12 = pdVar1;
  }
  lVar15 = -(ulonglong)(dVar3 < ABS(pdVar13[1] - DAT_14c8463d8));
  auVar6._8_4_ = (int)lVar15;
  auVar6._0_8_ = -(ulonglong)(dVar3 < ABS(*pdVar13 - DAT_14c8463d0));
  auVar6._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
  uVar7 = movmskpd((int)lVar8,auVar6);
  lVar8 = -(ulonglong)(dVar3 < ABS(pdVar12[3] - DAT_14c8463e8));
  auVar5._8_4_ = (int)lVar8;
  auVar5._0_8_ = -(ulonglong)(dVar3 < ABS(pdVar12[2] - DAT_14c8463e0));
  auVar5._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
  iVar10 = movmskpd(uVar9,auVar5);
  uVar11 = iVar10 << 2 | uVar7;
  if (uVar11 == 0) {
    bVar14 = true;
  }
  else {
    auVar4._8_8_ = -(ulonglong)(dVar3 < ABS(pdVar13[1] + DAT_14c8463d8));
    auVar4._0_8_ = -(ulonglong)(dVar3 < ABS(*pdVar13 + DAT_14c8463d0));
    iVar10 = movmskpd(uVar7,auVar4);
    lVar8 = -(ulonglong)(dVar3 < ABS(pdVar12[3] + DAT_14c8463e8));
    auVar2._8_4_ = (int)lVar8;
    auVar2._0_8_ = -(ulonglong)(dVar3 < ABS(pdVar12[2] + DAT_14c8463e0));
    auVar2._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
    uVar7 = movmskpd(uVar11,auVar2);
    bVar14 = (uVar7 & 0x3fffffff) == 0 && iVar10 == 0;
  }
  *param_3 = bVar14;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36c6c FUN_147b36c6c body=159 status=ok
// SIG undefined FUN_147b36c6c(void)

void FUN_147b36c6c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144afe766(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36d12 FUN_147b36d12 body=226 status=ok
// SIG undefined FUN_147b36d12(void)

void FUN_147b36d12(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  int iVar2;
  longlong lVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_58 [32];
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar4 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  lVar3 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(longlong *)(param_2 + 0x20) = lVar3;
  dVar5 = pdVar4[2] * pdVar4[2] + *pdVar4 * *pdVar4;
  dVar6 = pdVar4[3] * pdVar4[3] + pdVar4[1] * pdVar4[1];
  auVar1._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar5 + dVar6)));
  auVar1._0_8_ = -(ulonglong)(0.009999999776482582 < ABS(1.0 - (dVar5 + dVar6)));
  iVar2 = movmskpd((int)lVar3,auVar1);
  *(bool *)param_3 = iVar2 == 0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36df6 FUN_147b36df6 body=179 status=ok
// SIG undefined FUN_147b36df6(void)

void FUN_147b36df6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14093ab46(puVar1,&local_58);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36eaa FUN_147b36eaa body=179 status=ok
// SIG undefined FUN_147b36eaa(void)

void FUN_147b36eaa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144afe3ce(&local_58,puVar1);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b36f5e FUN_147b36f5e body=338 status=ok
// SIG undefined FUN_147b36f5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b36f5e(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar14;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_68 [44];
  float local_3c;
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  local_3c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  pdVar6 = local_38;
  if (pdVar1 != (double *)0x0) {
    pdVar6 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = *pdVar6;
  dVar3 = pdVar6[1];
  dVar4 = pdVar6[2];
  dVar5 = pdVar6[3];
  auVar9._0_8_ = dVar2 * dVar2;
  auVar9._8_8_ = dVar3 * dVar3;
  dVar11 = dVar4 * dVar4 + auVar9._0_8_;
  dVar14 = dVar5 * dVar5 + auVar9._8_8_;
  auVar12._0_8_ = dVar11 + dVar14;
  auVar12._8_8_ = dVar11 + dVar14;
  uVar7 = -(ulonglong)((double)local_3c <= auVar12._0_8_);
  uVar8 = -(ulonglong)((double)local_3c <= auVar12._8_8_);
  auVar10 = sqrtpd(auVar9,auVar12);
  auVar10 = divpd(_DAT_149934d80,auVar10);
  auVar13._0_8_ = auVar10._0_8_ * dVar4;
  auVar13._8_8_ = auVar10._8_8_ * dVar5;
  *pdVar6 = (double)((ulonglong)(dVar2 * auVar10._0_8_) & uVar7);
  pdVar6[1] = (double)((ulonglong)(dVar3 * auVar10._8_8_) & uVar8);
  auVar10._8_4_ = (int)uVar8;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = (int)(uVar8 >> 0x20);
  auVar10 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar13,auVar10);
  *(undefined1 (*) [16])(pdVar6 + 2) = auVar10;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b370b2 FUN_147b370b2 body=343 status=ok
// SIG undefined FUN_147b370b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b370b2(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar14;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  local_4c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  pdVar6 = local_48;
  if (pdVar1 != (double *)0x0) {
    pdVar6 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = *pdVar6;
  dVar3 = pdVar6[1];
  dVar4 = pdVar6[2];
  dVar5 = pdVar6[3];
  auVar12._0_8_ = dVar2 * dVar2;
  auVar12._8_8_ = dVar3 * dVar3;
  dVar10 = dVar4 * dVar4 + auVar12._0_8_;
  dVar14 = dVar5 * dVar5 + auVar12._8_8_;
  auVar11._0_8_ = dVar10 + dVar14;
  auVar11._8_8_ = dVar10 + dVar14;
  uVar7 = -(ulonglong)((double)local_4c <= auVar11._0_8_);
  uVar8 = -(ulonglong)((double)local_4c <= auVar11._8_8_);
  auVar9 = sqrtpd(auVar12,auVar11);
  auVar12 = divpd(_DAT_149934d80,auVar9);
  auVar13._0_8_ = auVar12._0_8_ * dVar4;
  auVar13._8_8_ = auVar12._8_8_ * dVar5;
  auVar9._8_4_ = (int)uVar8;
  auVar9._0_8_ = uVar7;
  auVar9._12_4_ = (int)(uVar8 >> 0x20);
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar13,auVar9);
  *param_3 = (ulonglong)(dVar2 * auVar12._0_8_) & uVar7;
  param_3[1] = (ulonglong)(dVar3 * auVar12._8_8_) & uVar8;
  *(undefined1 (*) [16])(param_3 + 2) = auVar9;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3720a FUN_147b3720a body=559 status=ok
// SIG undefined FUN_147b3720a(void)

void FUN_147b3720a(undefined8 param_1,longlong param_2,double *param_3)

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
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  undefined1 auStack_e8 [40];
  double local_c0 [3];
  double local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  pdVar11 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  pdVar10 = local_a8;
  if (pdVar11 != (double *)0x0) {
    pdVar10 = pdVar11;
  }
  pdVar11 = local_c0;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar11 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar11;
  dVar2 = pdVar11[1];
  dVar3 = pdVar11[2];
  dVar4 = pdVar10[2];
  dVar5 = *pdVar10;
  dVar6 = pdVar10[1];
  dVar8 = dVar6 * dVar3 - dVar2 * dVar4;
  dVar8 = dVar8 + dVar8;
  dVar7 = pdVar10[3];
  dVar9 = dVar5 * dVar2 - dVar1 * dVar6;
  dVar9 = dVar9 + dVar9;
  dVar12 = dVar4 * dVar1 - dVar3 * dVar5;
  dVar12 = dVar12 + dVar12;
  *param_3 = (dVar6 * dVar9 - dVar12 * dVar4) + dVar8 * dVar7 + dVar1;
  param_3[1] = (dVar4 * dVar8 - dVar9 * dVar5) + dVar7 * dVar12 + dVar2;
  param_3[2] = (dVar5 * dVar12 - dVar8 * dVar6) + dVar7 * dVar9 + dVar3;
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3743a FUN_147b3743a body=179 status=ok
// SIG undefined FUN_147b3743a(void)

void FUN_147b3743a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1448052ee(puVar1,&local_50);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b374ee FUN_147b374ee body=510 status=ok
// SIG undefined FUN_147b374ee(void)

void FUN_147b374ee(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  local_3c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_44 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_48 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pdVar2 = local_38;
  if (pdVar1 != (double *)0x0) {
    pdVar2 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *pdVar2 = (double)local_3c;
  pdVar2[1] = (double)local_40;
  pdVar2[2] = (double)local_44;
  pdVar2[3] = (double)local_48;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b376ee FUN_147b376ee body=287 status=ok
// SIG undefined FUN_147b376ee(void)

void FUN_147b376ee(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  undefined4 local_68 [8];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar3 = local_68;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar2 = local_80;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144afe3ce(&local_48,puVar2);
  puVar3[4] = local_38;
  puVar3[5] = uStack_34;
  puVar3[6] = uStack_30;
  puVar3[7] = uStack_2c;
  *puVar3 = local_48;
  puVar3[1] = uStack_44;
  puVar3[2] = uStack_40;
  puVar3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3780e FUN_147b3780e body=218 status=ok
// SIG undefined FUN_147b3780e(void)

void FUN_147b3780e(undefined8 param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar1 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)SQRT(pdVar1[3] * pdVar1[3] +
                         pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b378ea FUN_147b378ea body=214 status=ok
// SIG undefined FUN_147b378ea(void)

void FUN_147b378ea(undefined8 param_1,longlong param_2,float *param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar1 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)(pdVar1[3] * pdVar1[3] +
                    pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b379c2 FUN_147b379c2 body=465 status=ok
// SIG undefined FUN_147b379c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b379c2(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined1 local_88 [32];
  undefined1 local_68 [32];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_90 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  puVar3 = local_88;
  if (puVar2 != (undefined1 *)0x0) {
    puVar3 = puVar2;
  }
  puVar2 = local_68;
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a44da6(&local_48,puVar2,puVar3,local_90);
  dVar5 = local_38 * local_38 + local_48 * local_48;
  dVar8 = dStack_30 * dStack_30 + dStack_40 * dStack_40;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  uVar4 = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar9 = divpd(_DAT_149934d80,auVar7);
  auVar10._0_8_ = auVar9._0_8_ * local_38;
  auVar10._8_8_ = auVar9._8_8_ * dStack_30;
  auVar7._8_4_ = (int)uVar4;
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7._12_4_ = (int)(uVar4 >> 0x20);
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar7);
  *param_3 = (ulonglong)(local_48 * auVar9._0_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  param_3[1] = (ulonglong)(dStack_40 * auVar9._8_8_) & uVar4;
  *(undefined1 (*) [16])(param_3 + 2) = auVar7;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b37b94 FUN_147b37b94 body=554 status=ok
// SIG undefined FUN_147b37b94(void)

void FUN_147b37b94(undefined8 param_1,longlong param_2,double *param_3)

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
  double *pdVar10;
  double *pdVar11;
  double dVar12;
  undefined1 auStack_e8 [40];
  double local_c0 [3];
  double local_a8 [5];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  pdVar11 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  pdVar10 = local_a8;
  if (pdVar11 != (double *)0x0) {
    pdVar10 = pdVar11;
  }
  pdVar11 = local_c0;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar11 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar11;
  dVar2 = pdVar11[1];
  dVar3 = pdVar11[2];
  dVar4 = pdVar10[2];
  dVar5 = *pdVar10;
  dVar6 = pdVar10[1];
  dVar12 = dVar2 * dVar4 - dVar6 * dVar3;
  dVar12 = dVar12 + dVar12;
  dVar7 = pdVar10[3];
  dVar9 = dVar1 * dVar6 - dVar5 * dVar2;
  dVar9 = dVar9 + dVar9;
  dVar8 = dVar3 * dVar5 - dVar4 * dVar1;
  dVar8 = dVar8 + dVar8;
  *param_3 = (dVar8 * dVar4 - dVar9 * dVar6) + dVar12 * dVar7 + dVar1;
  param_3[1] = (dVar5 * dVar9 - dVar12 * dVar4) + dVar7 * dVar8 + dVar2;
  param_3[2] = (dVar6 * dVar12 - dVar5 * dVar8) + dVar7 * dVar9 + dVar3;
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b37dc0 FUN_147b37dc0 body=406 status=ok
// SIG undefined FUN_147b37dc0(void)

void FUN_147b37dc0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar6 = dVar1 - dVar2 * 0.0;
  dVar7 = dVar2 * 0.0 - dVar3;
  dVar8 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 1.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 0.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 0.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b37f58 FUN_147b37f58 body=406 status=ok
// SIG undefined FUN_147b37f58(void)

void FUN_147b37f58(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar7 = dVar2 - dVar3 * 0.0;
  dVar6 = dVar1 * 0.0 + dVar2 * -0.0;
  dVar8 = dVar3 * 0.0 - dVar1;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 0.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 1.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 0.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b380f0 FUN_147b380f0 body=406 status=ok
// SIG undefined FUN_147b380f0(void)

void FUN_147b380f0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_a8 [32];
  double local_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar5 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = *pdVar5;
  dVar3 = pdVar5[1];
  dVar7 = dVar2 * 0.0 + dVar3 * -0.0;
  dVar8 = dVar3 - dVar1 * 0.0;
  dVar6 = dVar1 * 0.0 - dVar2;
  dVar7 = dVar7 + dVar7;
  dVar6 = dVar6 + dVar6;
  dVar8 = dVar8 + dVar8;
  dVar4 = pdVar5[3];
  *param_3 = (dVar3 * dVar7 - dVar6 * dVar1) + dVar8 * dVar4 + 0.0;
  param_3[1] = (dVar1 * dVar8 - dVar7 * dVar2) + dVar4 * dVar6 + 0.0;
  param_3[2] = (dVar2 * dVar6 - dVar8 * dVar3) + dVar4 * dVar7 + 1.0;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38290 FUN_147b38290 body=1046 status=ok
// SIG undefined FUN_147b38290(void)

void FUN_147b38290(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_a8 = DAT_14c8463e0;
  uStack_a0 = DAT_14c8463e8;
  local_b8 = DAT_14c8463d0;
  uStack_b0 = DAT_14c8463d8;
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_80 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_bc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  local_c8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_cc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_cc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_cc);
  }
  local_d0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_118 = local_78;
  uStack_110 = uStack_70;
  local_108 = local_68;
  uStack_100 = uStack_60;
  local_138 = local_58;
  uStack_130 = uStack_50;
  local_128 = local_48;
  uStack_120 = uStack_40;
  local_140 = local_d0 != 0;
  puVar2 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  local_148 = local_cc;
  local_150 = local_c8;
  local_158 = local_c4;
  local_160 = local_c0;
  local_168 = local_bc;
  FUN_147b386a8(&local_f8,&local_138,&local_118,puVar2);
  param_3[4] = local_e8;
  param_3[5] = uStack_e4;
  param_3[6] = uStack_e0;
  param_3[7] = uStack_dc;
  *param_3 = local_f8;
  param_3[1] = uStack_f4;
  param_3[2] = uStack_f0;
  param_3[3] = uStack_ec;
  if ((local_30 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b386a8 FUN_147b386a8 body=968 status=ok
// SIG undefined FUN_147b386a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_147b386a8(undefined4 *param_1,undefined1 (*param_2) [16],undefined1 (*param_3) [16],
             longlong param_4,undefined4 param_5,undefined4 param_6,undefined4 param_7,
             undefined4 param_8,undefined4 param_9,undefined1 param_10)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  double dVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined1 local_128;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [24];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(double *)(param_3[1] + 8) * *(double *)(param_2[1] + 8) +
      *(double *)param_3[1] * *(double *)param_2[1] +
      *(double *)*param_3 * *(double *)*param_2 +
      *(double *)(*param_3 + 8) * *(double *)(*param_2 + 8) < 0.0) {
    dVar7 = 0.0 - *(double *)(*param_3 + 8);
    dVar5 = *(double *)param_3[1];
    dVar4 = 0.0 - *(double *)(param_3[1] + 8);
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = 0.0 - *(double *)*param_3;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *param_3 = auVar6;
    auVar22._8_4_ = SUB84(dVar4,0);
    auVar22._0_8_ = 0.0 - dVar5;
    auVar22._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    param_3[1] = auVar22;
  }
  dVar10 = *(double *)(param_4 + 0x20);
  dVar4 = *(double *)(param_4 + 0x28);
  dVar19 = *(double *)*param_2 * 0.5;
  dVar20 = *(double *)(*param_2 + 8) * 0.5;
  dVar23 = *(double *)param_2[1] * 0.5;
  dVar8 = *(double *)(param_2[1] + 8) * 0.5;
  dVar7 = *(double *)(param_4 + 0x30);
  dVar5 = dVar10 * dVar23 * 1.0 + dVar20 * 0.0 + dVar7 * dVar19 * -1.0 + dVar4 * dVar8;
  dVar9 = dVar7 * dVar23 * -1.0 + ((dVar19 * dVar10 * -1.0 + dVar8 * 0.0) - dVar20 * dVar4);
  local_158 = local_f8;
  local_f8._8_4_ = SUB84(dVar5,0);
  local_f8._0_8_ = dVar4 * dVar23 * -1.0 + dVar7 * dVar20 + dVar19 * 0.0 * 1.0 + dVar10 * dVar8;
  local_f8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_e8._8_4_ = SUB84(dVar9,0);
  local_e8._0_8_ = dVar23 * 0.0 * 1.0 + ((dVar19 * dVar4 * 1.0 + dVar8 * dVar7) - dVar20 * dVar10);
  local_e8._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  local_118 = *(double *)*param_3;
  uStack_110 = *(undefined8 *)(*param_3 + 8);
  local_108 = *(undefined8 *)param_3[1];
  uStack_100 = *(undefined8 *)(param_3[1] + 8);
  local_128 = param_10;
  local_130 = param_8;
  local_138 = param_9;
  local_140 = param_7;
  local_148 = param_6;
  local_150 = param_5;
  FUN_147b4838b(param_2,&local_118,param_4,param_4 + 0x38);
  dVar4 = *(double *)*param_2;
  dVar7 = *(double *)(*param_2 + 8);
  dVar5 = *(double *)param_2[1];
  dVar19 = *(double *)(param_2[1] + 8);
  dVar20 = dVar5 * dVar5 + dVar4 * dVar4;
  dVar23 = dVar19 * dVar19 + dVar7 * dVar7;
  auVar21._0_8_ = dVar20 + dVar23;
  auVar21._8_8_ = dVar20 + dVar23;
  uVar18 = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
  auVar22 = sqrtpd(auVar21,auVar21);
  auVar22 = divpd(_DAT_149934d80,auVar22);
  auVar24._0_8_ = auVar22._0_8_ * dVar5;
  auVar24._8_8_ = auVar22._8_8_ * dVar19;
  dVar4 = (double)((ulonglong)(dVar4 * auVar22._0_8_) &
                  -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
  dVar7 = (double)((ulonglong)(dVar7 * auVar22._8_8_) & uVar18);
  auVar1._8_4_ = (int)uVar18;
  auVar1._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
  auVar1._12_4_ = (int)(uVar18 >> 0x20);
  auVar22 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar24,auVar1);
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar4;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *param_2 = auVar2;
  param_2[1] = auVar22;
  dVar4 = dVar4 * -2.0;
  dVar7 = dVar7 * -2.0;
  dVar19 = auVar22._0_8_ * -1.0;
  dVar20 = auVar22._8_8_ * 1.0;
  dVar19 = dVar19 + dVar19;
  dVar20 = dVar20 + dVar20;
  dVar5 = dVar19 * (double)local_f8._0_8_ * 1.0 +
          (double)local_e8._8_8_ * dVar7 +
          dVar4 * (double)local_e8._0_8_ * -1.0 + (double)local_f8._8_8_ * dVar20;
  auVar3._8_4_ = SUB84(dVar5,0);
  auVar3._0_8_ = dVar19 * (double)local_f8._8_8_ * -1.0 +
                 (double)local_e8._0_8_ * dVar7 +
                 dVar4 * (double)local_e8._8_8_ * 1.0 + (double)local_f8._0_8_ * dVar20;
  auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *(undefined1 (*) [16])(param_4 + 0x20) = auVar3;
  *(double *)(param_4 + 0x30) =
       dVar19 * (double)local_e8._8_8_ +
       ((dVar4 * (double)local_f8._8_8_ + dVar20 * (double)local_e8._0_8_) -
       dVar7 * (double)local_f8._0_8_);
  uVar11 = *(undefined4 *)*param_2;
  uVar12 = *(undefined4 *)(*param_2 + 4);
  uVar13 = *(undefined4 *)(*param_2 + 8);
  uVar14 = *(undefined4 *)(*param_2 + 0xc);
  uVar15 = *(undefined4 *)(param_2[1] + 4);
  uVar16 = *(undefined4 *)(param_2[1] + 8);
  uVar17 = *(undefined4 *)(param_2[1] + 0xc);
  param_1[4] = *(undefined4 *)param_2[1];
  param_1[5] = uVar15;
  param_1[6] = uVar16;
  param_1[7] = uVar17;
  *param_1 = uVar11;
  param_1[1] = uVar12;
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  if ((local_d0 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38a72 FUN_147b38a72 body=161 status=ok
// SIG undefined FUN_147b38a72(void)

void FUN_147b38a72(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * 57.29577951308232;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38b18 FUN_147b38b18 body=66 status=ok
// SIG undefined FUN_147b38b18(void)

void FUN_147b38b18(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  float fVar2;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = rand();
  fVar2 = (float)(uVar1 & 0x7fff) / 32767.0;
  *(bool *)param_3 = 0 < (int)(fVar2 + fVar2);
  return;
}



// FUNCTION 147b38b60 FUN_147b38b60 body=219 status=ok
// SIG undefined FUN_147b38b60(void)

void FUN_147b38b60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  float fVar3;
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
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  uVar2 = *(int *)((longlong)puVar1 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)((longlong)puVar1 + 4) = uVar2;
  fVar3 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
  *(bool *)param_3 = (int)(fVar3 + fVar3) == 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38c48 FUN_147b38c48 body=310 status=ok
// SIG undefined FUN_147b38c48(void)

void FUN_147b38c48(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  float local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_2c <= 0.0) {
    bVar2 = false;
  }
  else {
    puVar3 = &local_28;
    if (puVar1 != (undefined8 *)0x0) {
      puVar3 = puVar1;
    }
    uVar4 = *(int *)((longlong)puVar3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)puVar3 + 4) = uVar4;
    bVar2 = (float)(uVar4 >> 9 | 0x3f800000) + -1.0 <= local_2c;
  }
  *(bool *)param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38d80 FUN_147b38d80 body=205 status=ok
// SIG undefined FUN_147b38d80(void)

void FUN_147b38d80(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
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
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  uVar2 = *(int *)((longlong)puVar1 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)((longlong)puVar1 + 4) = uVar2;
  *param_3 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38e4e FUN_147b38e4e body=389 status=ok
// SIG undefined FUN_147b38e4e(void)

void FUN_147b38e4e(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  uVar3 = *(int *)((longlong)puVar2 + 4) * 0xbb38435 + 0x3619636b;
  *(uint *)((longlong)puVar2 + 4) = uVar3;
  *param_3 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * (local_30 - local_2c) + local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b38fd4 FUN_147b38fd4 body=214 status=ok
// SIG undefined FUN_147b38fd4(void)

void FUN_147b38fd4(undefined8 param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  lVar2 = local_28;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_28 < 1) {
    lVar3 = 0;
  }
  else {
    lVar3 = local_28 + -1;
    uVar1 = rand();
    lVar2 = (longlong)(int)((float)lVar2 * ((float)(uVar1 & 0x7fff) / 32767.0));
    if (lVar2 < lVar3) {
      lVar3 = lVar2;
    }
  }
  *param_3 = lVar3;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b390ac FUN_147b390ac body=312 status=ok
// SIG undefined FUN_147b390ac(void)

void FUN_147b390ac(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  lVar1 = local_30;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar4 = local_38 - local_30;
  if (lVar4 < 0) {
    lVar4 = 0;
  }
  else {
    uVar2 = rand();
    lVar3 = (longlong)(int)((float)(lVar4 + 1) * ((float)(uVar2 & 0x7fff) / 32767.0));
    if (lVar3 < lVar4) {
      lVar4 = lVar3;
    }
  }
  *param_3 = lVar4 + lVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b391e6 FUN_147b391e6 body=314 status=ok
// SIG undefined FUN_147b391e6(void)

void FUN_147b391e6(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_2c < 1) {
    iVar2 = 0;
  }
  else {
    puVar3 = &local_28;
    if (puVar1 != (undefined8 *)0x0) {
      puVar3 = puVar1;
    }
    uVar4 = *(int *)((longlong)puVar3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)puVar3 + 4) = uVar4;
    iVar2 = (int)((float)local_2c * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0));
  }
  *param_3 = iVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39322 FUN_147b39322 body=408 status=ok
// SIG undefined FUN_147b39322(void)

void FUN_147b39322(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  int local_30;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_30 - local_2c < 0) {
    iVar2 = 0;
  }
  else {
    puVar3 = &local_28;
    if (puVar1 != (undefined8 *)0x0) {
      puVar3 = puVar1;
    }
    uVar4 = *(int *)((longlong)puVar3 + 4) * 0xbb38435 + 0x3619636b;
    *(uint *)((longlong)puVar3 + 4) = uVar4;
    iVar2 = (int)((float)((local_30 - local_2c) + 1) * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0));
  }
  *param_3 = iVar2 + local_2c;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b394bc FUN_147b394bc body=412 status=ok
// SIG undefined FUN_147b394bc(void)

void FUN_147b394bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_90 - local_a8;
  local_80 = local_98 - local_b0;
  local_88 = local_a0 - local_b8;
  local_60 = local_a8 + local_90;
  local_68 = local_b0 + local_98;
  local_70 = local_b8 + local_a0;
  local_58 = 1;
  FUN_1467f9340(&local_d0);
  *(undefined8 *)(param_3 + 4) = local_c0;
  *param_3 = local_d0;
  param_3[1] = uStack_cc;
  param_3[2] = uStack_c8;
  param_3[3] = uStack_c4;
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3965a FUN_147b3965a body=237 status=ok
// SIG undefined FUN_147b3965a(void)

void FUN_147b3965a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 local_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8 = local_50;
  uStack_a4 = uStack_4c;
  uStack_a0 = uStack_48;
  uStack_9c = uStack_44;
  local_98 = local_40;
  uStack_94 = uStack_3c;
  uStack_90 = uStack_38;
  uStack_8c = uStack_34;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  local_78 = CONCAT71(uStack_1f,local_20);
  FUN_1467f9340(&local_68);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39748 FUN_147b39748 body=593 status=ok
// SIG undefined FUN_147b39748(void)

void FUN_147b39748(undefined8 param_1,longlong param_2,double *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &local_58;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  iVar1 = *(int *)((longlong)puVar3 + 4);
  uVar4 = iVar1 * 0x1c3c718d + 0xf50d3da5;
  *(uint *)((longlong)puVar3 + 4) = uVar4;
  *param_3 = (double)((float)(uVar4 >> 9 | 0x3f800000) + -1.0) *
             ((local_88 + local_70) - (local_70 - local_88)) + (local_70 - local_88);
  param_3[1] = (double)((float)(iVar1 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) *
               ((local_80 + local_68) - (local_68 - local_80)) + (local_68 - local_80);
  param_3[2] = (double)((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
               ((local_78 + local_60) - (local_60 - local_78)) + (local_60 - local_78);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3999a FUN_147b3999a body=478 status=ok
// SIG undefined FUN_147b3999a(void)

void FUN_147b3999a(undefined8 param_1,longlong param_2,double *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_50 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3 = &local_48;
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = puVar2;
  }
  iVar1 = *(int *)((longlong)puVar3 + 4);
  uVar4 = iVar1 * 0x1c3c718d + 0xf50d3da5;
  *(uint *)((longlong)puVar3 + 4) = uVar4;
  *param_3 = (double)((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * (local_68 - local_80) + local_80;
  param_3[1] = (double)((float)(iVar1 * -0x4b9b4d07 + 0x9d6f2492U >> 9 | 0x3f800000) + -1.0) *
               (local_60 - local_78) + local_78;
  param_3[2] = (double)((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) *
               (local_58 - local_70) + local_70;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39b7e FUN_147b39b7e body=177 status=ok
// SIG undefined FUN_147b39b7e(void)

void FUN_147b39b7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  FUN_147b39c30(&local_38,local_1c != 0);
  *(undefined8 *)(param_3 + 4) = local_28;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39c30 FUN_147b39c30 body=175 status=ok
// SIG undefined FUN_147b39c30(void)

double * FUN_147b39c30(double *param_1,char param_2)

{
  uint uVar1;
  double dVar2;
  
  uVar1 = rand();
  param_1[1] = (double)(((float)(uVar1 & 0x7fff) / 32767.0) * 360.0);
  uVar1 = rand();
  *param_1 = (double)(((float)(uVar1 & 0x7fff) / 32767.0) * 360.0);
  dVar2 = 0.0;
  if (param_2 != '\0') {
    uVar1 = rand();
    dVar2 = (double)(((float)(uVar1 & 0x7fff) / 32767.0) * 360.0);
  }
  param_1[2] = dVar2;
  return param_1;
}



// FUNCTION 147b39ce6 FUN_147b39ce6 body=269 status=ok
// SIG undefined FUN_147b39ce6(void)

void FUN_147b39ce6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  int local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b39df4(&local_48,puVar2,local_2c != 0);
  *(undefined8 *)(param_3 + 4) = local_38;
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39df4 FUN_147b39df4 body=179 status=ok
// SIG undefined FUN_147b39df4(void)

void FUN_147b39df4(double *param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  double dVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  param_1[1] = (double)(((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * 360.0)
  ;
  uVar2 = iVar1 * -0x4b9b4d07 + 0x9d6f2492;
  *(uint *)(param_2 + 4) = uVar2;
  *param_1 = (double)(((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * 360.0);
  dVar3 = 0.0;
  if (param_3 != '\0') {
    uVar2 = uVar2 * 0xbb38435 + 0x3619636b;
    *(uint *)(param_2 + 4) = uVar2;
    dVar3 = (double)(((float)(uVar2 >> 9 | 0x3f800000) + -1.0) * 360.0);
  }
  param_1[2] = dVar3;
  return;
}



// FUNCTION 147b39ea8 FUN_147b39ea8 body=188 status=ok
// SIG undefined FUN_147b39ea8(void)

void FUN_147b39ea8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1477ee866(puVar1,&local_38);
  *(undefined8 *)(param_3 + 4) = local_28;
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b39f66 FUN_147b39f66 body=293 status=ok
// SIG undefined FUN_147b39f66(void)

void FUN_147b39f66(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  FUN_140c84580(&local_70,&local_38,local_54 * 0.017453292);
  *(undefined8 *)(param_3 + 4) = local_60;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3a08c FUN_147b3a08c body=362 status=ok
// SIG undefined FUN_147b3a08c(void)

void FUN_147b3a08c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b3a46e(&local_68,puVar3,puVar4,local_4c * 0.017453292);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3a1f8 FUN_147b3a1f8 body=273 status=ok
// SIG undefined FUN_147b3a1f8(void)

void FUN_147b3a1f8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_140c84580(&local_50,&local_68,local_34);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3a30a FUN_147b3a30a body=354 status=ok
// SIG undefined FUN_147b3a30a(void)

void FUN_147b3a30a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  puVar4 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b3a46e(&local_68,puVar3,puVar4,local_4c);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3a46e FUN_147b3a46e body=1356 status=ok
// SIG undefined FUN_147b3a46e(void)

double * FUN_147b3a46e(double *param_1,longlong param_2,double *param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_128 [40];
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((float)param_4 <= 0.0) {
    dVar7 = *param_3;
    dVar5 = param_3[1];
    dVar6 = param_3[2];
    dVar8 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
    if ((dVar8 == 1.0) && (!NAN(dVar8))) {
      param_1[2] = param_3[2];
      dVar5 = *param_3;
      dVar6 = param_3[1];
LAB_147b3a836:
      *param_1 = dVar5;
      param_1[1] = dVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_128);
    }
    if (dVar8 < 9.99999993922529e-09) {
      param_1[2] = DAT_14c8464f0;
      dVar5 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
      goto LAB_147b3a836;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    uVar2 = iVar1 * -0x4b9b4d07 + 0x9d6f2492;
    *(uint *)(param_2 + 4) = uVar2;
    fVar3 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
    fVar4 = fVar3 + fVar3 + -1.0;
    fVar3 = fVar4;
    if (1.0 <= fVar4) {
      fVar3 = 1.0;
    }
    fVar3 = acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 | ~-(uint)(fVar4 < -1.0) & (uint)fVar3)
                 );
    fVar3 = (float)FUN_1447c7e44(fVar3,param_4);
    FUN_144a79a9c(param_3,&local_c8);
    dVar5 = sin(local_c8 * 0.01745329238474369);
    dVar6 = sin(dStack_c0 * 0.01745329238474369);
    dVar7 = sin(local_b8 * 0.01745329238474369);
    sin(0.0);
    dVar8 = cos(local_c8 * 0.01745329238474369);
    dVar9 = cos(dStack_c0 * 0.01745329238474369);
    dVar10 = cos(local_b8 * 0.01745329238474369);
    cos(0.0);
    local_c8 = dVar8 * dVar9;
    dStack_c0 = dVar6 * dVar8;
    local_e8 = dVar5 * dVar7 * dVar9 - dVar6 * dVar10;
    dStack_e0 = dVar5 * dVar7 * dVar6 + dVar9 * dVar10;
    local_d8 = -dVar7 * dVar8;
    dVar6 = dVar5 * dVar5 + local_c8 * local_c8 + dStack_c0 * dStack_c0;
    if ((dVar6 != 1.0) || (local_b8 = dVar5, NAN(dVar6))) {
      if (9.99999993922529e-09 <= dVar6) {
        dVar6 = 1.0 / SQRT(dVar6);
        local_b8 = dVar5 * dVar6;
        dStack_c0 = dStack_c0 * dVar6;
        local_c8 = local_c8 * dVar6;
      }
      else {
        local_b8 = DAT_14c8464f0;
        local_c8 = DAT_14c8464e0;
        dStack_c0 = DAT_14c8464e8;
      }
    }
    dVar5 = local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0;
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      if (9.99999993922529e-09 <= dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        local_d8 = local_d8 * dVar5;
        dStack_e0 = dStack_e0 * dVar5;
        local_e8 = local_e8 * dVar5;
      }
      else {
        local_d8 = DAT_14c8464f0;
        local_e8 = DAT_14c8464e0;
        dStack_e0 = DAT_14c8464e8;
      }
    }
    FUN_140ccff96(param_3,param_1,
                  SUB84((double)((fVar3 * 180.0) / 3.1415927) * 0.017453292519943295,0),&local_e8);
    FUN_140ccff96(param_1,&local_100,
                  SUB84((double)((((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0
                                  ) * 6.2831855 * 180.0) / 3.1415927) * 0.017453292519943295,0),
                  &local_c8);
    param_1[2] = local_f0;
    *param_1 = local_100;
    param_1[1] = dStack_f8;
    dVar7 = *param_1;
    dVar5 = param_1[1];
    dVar6 = param_1[2];
    dVar8 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
    if (((dVar8 == 1.0) && (dVar10 = dVar5, dVar11 = dVar7, dVar9 = dVar6, !NAN(dVar8))) ||
       (dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0, dVar9 = DAT_14c8464f0,
       dVar8 < 9.99999993922529e-09)) goto LAB_147b3a7c3;
  }
  dVar8 = 1.0 / SQRT(dVar8);
  dVar10 = dVar5 * dVar8;
  dVar11 = dVar7 * dVar8;
  dVar9 = dVar6 * dVar8;
LAB_147b3a7c3:
  *param_1 = dVar11;
  param_1[1] = dVar10;
  param_1[2] = dVar9;
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3a9bc FUN_147b3a9bc body=380 status=ok
// SIG undefined FUN_147b3a9bc(void)

void FUN_147b3a9bc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_40;
  local_38 = local_50;
  uStack_34 = uStack_4c;
  uStack_30 = uStack_48;
  uStack_2c = uStack_44;
  FUN_1467f8f04(&local_70,&local_38,local_54 * 0.017453292,local_58 * 0.017453292);
  *(undefined8 *)(param_3 + 4) = local_60;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ab3a FUN_147b3ab3a body=448 status=ok
// SIG undefined FUN_147b3ab3a(void)

void FUN_147b3ab3a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  float local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar4 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50 * 0.017453292;
  FUN_147b3b018(&local_68,puVar3,puVar4,local_4c * 0.017453292);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3acfc FUN_147b3acfc body=356 status=ok
// SIG undefined FUN_147b3acfc(void)

void FUN_147b3acfc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_1467f8f04(&local_50,&local_68,local_34,local_38);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ae62 FUN_147b3ae62 body=436 status=ok
// SIG undefined FUN_147b3ae62(void)

void FUN_147b3ae62(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [24];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  local_4c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  puVar4 = local_48;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  puVar3 = &local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50;
  FUN_147b3b018(&local_68,puVar3,puVar4,local_4c);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3b018 FUN_147b3b018 body=1445 status=ok
// SIG undefined FUN_147b3b018(void)

double * FUN_147b3b018(double *param_1,longlong param_2,double *param_3,float param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  float _X;
  undefined1 auStack_128 [40];
  double local_100;
  double dStack_f8;
  double local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((param_4 <= 0.0) || (param_5 <= 0.0)) {
    dVar7 = *param_3;
    dVar5 = param_3[1];
    dVar6 = param_3[2];
    dVar8 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
    if ((dVar8 == 1.0) && (!NAN(dVar8))) {
      param_1[2] = param_3[2];
      dVar5 = *param_3;
      dVar6 = param_3[1];
LAB_147b3b434:
      *param_1 = dVar5;
      param_1[1] = dVar6;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_128);
    }
    if (dVar8 < 9.99999993922529e-09) {
      param_1[2] = DAT_14c8464f0;
      dVar5 = DAT_14c8464e0;
      dVar6 = DAT_14c8464e8;
      goto LAB_147b3b434;
    }
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
    uVar2 = iVar1 * -0x4b9b4d07 + 0x9d6f2492;
    *(uint *)(param_2 + 4) = uVar2;
    fVar3 = (float)(uVar2 >> 9 | 0x3f800000) + -1.0;
    _X = ((float)(iVar1 * 0xbb38435 + 0x3619636bU >> 9 | 0x3f800000) + -1.0) * 6.2831855;
    fVar4 = fVar3 + fVar3 + -1.0;
    fVar3 = fVar4;
    if (1.0 <= fVar4) {
      fVar3 = 1.0;
    }
    acosf((float)(-(uint)(fVar4 < -1.0) & 0xbf800000 | ~-(uint)(fVar4 < -1.0) & (uint)fVar3));
    cosf(_X);
    sinf(_X);
    fVar3 = (float)FUN_1447c7e44();
    FUN_144a79a9c(param_3,&local_c8);
    dVar5 = sin(local_c8 * 0.01745329238474369);
    dVar6 = sin(dStack_c0 * 0.01745329238474369);
    dVar7 = sin(local_b8 * 0.01745329238474369);
    sin(0.0);
    dVar8 = cos(local_c8 * 0.01745329238474369);
    dVar9 = cos(dStack_c0 * 0.01745329238474369);
    dVar10 = cos(local_b8 * 0.01745329238474369);
    cos(0.0);
    local_c8 = dVar8 * dVar9;
    dStack_c0 = dVar6 * dVar8;
    local_e8 = dVar5 * dVar7 * dVar9 - dVar6 * dVar10;
    dStack_e0 = dVar5 * dVar7 * dVar6 + dVar9 * dVar10;
    local_d8 = -dVar7 * dVar8;
    dVar6 = dVar5 * dVar5 + local_c8 * local_c8 + dStack_c0 * dStack_c0;
    if ((dVar6 != 1.0) || (local_b8 = dVar5, NAN(dVar6))) {
      if (9.99999993922529e-09 <= dVar6) {
        dVar6 = 1.0 / SQRT(dVar6);
        local_b8 = dVar5 * dVar6;
        dStack_c0 = dStack_c0 * dVar6;
        local_c8 = local_c8 * dVar6;
      }
      else {
        local_b8 = DAT_14c8464f0;
        local_c8 = DAT_14c8464e0;
        dStack_c0 = DAT_14c8464e8;
      }
    }
    dVar5 = local_d8 * local_d8 + local_e8 * local_e8 + dStack_e0 * dStack_e0;
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      if (9.99999993922529e-09 <= dVar5) {
        dVar5 = 1.0 / SQRT(dVar5);
        local_d8 = local_d8 * dVar5;
        dStack_e0 = dStack_e0 * dVar5;
        local_e8 = local_e8 * dVar5;
      }
      else {
        local_d8 = DAT_14c8464f0;
        local_e8 = DAT_14c8464e0;
        dStack_e0 = DAT_14c8464e8;
      }
    }
    FUN_140ccff96(param_3,param_1,
                  SUB84((double)((fVar3 * 180.0) / 3.1415927) * 0.017453292519943295,0),&local_e8);
    FUN_140ccff96(param_1,&local_100,
                  SUB84((double)((_X * 180.0) / 3.1415927) * 0.017453292519943295,0),&local_c8);
    param_1[2] = local_f0;
    *param_1 = local_100;
    param_1[1] = dStack_f8;
    dVar7 = *param_1;
    dVar5 = param_1[1];
    dVar6 = param_1[2];
    dVar8 = dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5;
    if (((dVar8 == 1.0) && (dVar10 = dVar5, dVar11 = dVar7, dVar9 = dVar6, !NAN(dVar8))) ||
       (dVar10 = DAT_14c8464e8, dVar11 = DAT_14c8464e0, dVar9 = DAT_14c8464f0,
       dVar8 < 9.99999993922529e-09)) goto LAB_147b3b3c9;
  }
  dVar8 = 1.0 / SQRT(dVar8);
  dVar10 = dVar5 * dVar8;
  dVar11 = dVar7 * dVar8;
  dVar9 = dVar6 * dVar8;
LAB_147b3b3c9:
  *param_1 = dVar11;
  param_1[1] = dVar10;
  param_1[2] = dVar9;
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3b5c4 FUN_147b3b5c4 body=690 status=ok
// SIG undefined FUN_147b3b5c4(void)

void FUN_147b3b5c4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 local_a1;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  local_a0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  iVar1 = local_a0;
  local_a1 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a1);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a1);
  }
  local_a8 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  local_ac = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_38 = local_88;
  local_48 = local_98;
  uStack_40 = uStack_90;
  local_58 = local_70;
  local_68 = local_80;
  uStack_64 = uStack_7c;
  uStack_60 = uStack_78;
  uStack_5c = uStack_74;
  uVar2 = FUN_147b47e28(local_9c,local_a1,local_a8,local_ac);
  local_d8 = iVar1 != 0;
  FUN_140ca2a46(&local_c8,&local_68,&local_48,uVar2);
  *(undefined8 *)(param_3 + 4) = local_b8;
  *param_3 = local_c8;
  param_3[1] = uStack_c4;
  param_3[2] = uStack_c0;
  param_3[3] = uStack_bc;
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3b878 FUN_147b3b878 body=172 status=ok
// SIG undefined FUN_147b3b878(void)

void FUN_147b3b878(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
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
  puVar1 = &local_20;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 0;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3b926 FUN_147b3b926 body=265 status=ok
// SIG undefined FUN_147b3b926(void)

void FUN_147b3b926(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8463e0;
  uStack_40 = DAT_14c8463e8;
  local_58 = DAT_14c8463d0;
  uStack_50 = DAT_14c8463d8;
  local_28 = DAT_14c8464f0;
  local_38 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_30 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar3 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar3[2] = DAT_14c8463e0;
  puVar3[3] = DAT_14c8463e8;
  *puVar3 = DAT_14c8463d0;
  puVar3[1] = DAT_14c8463d8;
  puVar2 = puVar1 + 4;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = &local_38;
  }
  puVar2[2] = DAT_14c8464f0;
  *(undefined4 *)puVar2 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar2 + 4) = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar2 + 1) = (undefined4)DAT_14c8464e8;
  *(undefined4 *)((longlong)puVar2 + 0xc) = DAT_14c8464e8._4_4_;
  *(undefined1 *)(puVar3 + 7) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ba30 FUN_147b3ba30 body=161 status=ok
// SIG undefined FUN_147b3ba30(void)

void FUN_147b3ba30(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
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
  puVar1 = &local_18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)((longlong)puVar1 + 4) = *(undefined4 *)puVar1;
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3bad2 FUN_147b3bad2 body=250 status=ok
// SIG undefined FUN_147b3bad2(void)

void FUN_147b3bad2(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = DAT_14c8464f0;
  local_58 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_50 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_30 = DAT_14c8464f0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  local_40 = local_58;
  uStack_38 = uStack_50;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar3 = &local_58;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = puVar1 + 3;
  if (puVar1 == (undefined8 *)0x0) {
    puVar2 = &local_40;
  }
  puVar2[2] = DAT_14c8464f0;
  *puVar2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar2[1] = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar3[2] = DAT_14c8464f0;
  *(undefined4 *)puVar3 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)puVar3 + 4) = DAT_14c8464e0._4_4_;
  *(undefined4 *)(puVar3 + 1) = (undefined4)DAT_14c8464e8;
  *(undefined4 *)((longlong)puVar3 + 0xc) = DAT_14c8464e8._4_4_;
  *(undefined1 *)(puVar3 + 6) = 0;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3bbce FUN_147b3bbce body=166 status=ok
// SIG undefined FUN_147b3bbce(void)

void FUN_147b3bbce(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = uStack_20;
  uStack_3c = uStack_1c;
  FUN_1467edb3c(&local_48,&local_38);
  *param_3 = local_38;
  param_3[1] = uStack_34;
  param_3[2] = uStack_30;
  param_3[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3bc76 FUN_147b3bc76 body=592 status=ok
// SIG undefined FUN_147b3bc76(void)

void FUN_147b3bc76(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_54 = 0;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_58 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_5c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  local_60 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar2 = &local_5c;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = puVar5;
  }
  puVar5 = &local_58;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = &local_54;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = puVar3;
  }
  puVar3 = &local_60;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_78 = local_50;
  uStack_74 = uStack_4c;
  uStack_70 = uStack_48;
  uStack_6c = uStack_44;
  FUN_1467edb3c(&local_78,&local_40);
  *puVar4 = local_40;
  *puVar5 = local_3c;
  *puVar2 = local_38;
  *puVar3 = local_34;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3bec8 FUN_147b3bec8 body=257 status=ok
// SIG undefined FUN_147b3bec8(void)

void FUN_147b3bec8(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48 [4];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  puVar1 = local_48;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_1467edb3c(&local_58,&local_28);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3bfca FUN_147b3bfca body=514 status=ok
// SIG undefined FUN_147b3bfca(void)

void FUN_147b3bfca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
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
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  local_b8 = local_50;
  FUN_140476f06(&local_68,&local_a8,&local_88,local_4c);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c1ce FUN_147b3c1ce body=514 status=ok
// SIG undefined FUN_147b3c1ce(void)

void FUN_147b3c1ce(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
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
  local_50 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  local_b8 = local_50;
  FUN_1409b4488(&local_68,&local_a8,&local_88,local_4c);
  *(undefined8 *)(param_3 + 4) = local_58;
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c3d8 FUN_147b3c3d8 body=259 status=ok
// SIG undefined FUN_147b3c3d8(void)

void FUN_147b3c3d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_30;
  uStack_64 = uStack_2c;
  uStack_60 = uStack_28;
  uStack_5c = uStack_24;
  local_58 = local_20;
  FUN_147b3c4dc(&local_50,&local_68,local_34);
  *(undefined8 *)(param_3 + 4) = local_40;
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c4dc FUN_147b3c4dc body=380 status=ok
// SIG undefined FUN_147b3c4dc(void)

undefined8 FUN_147b3c4dc(undefined8 param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  double local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  dVar1 = *param_2;
  dVar7 = param_2[1];
  dVar2 = param_2[2];
  dVar6 = dVar2 * dVar2 + dVar1 * dVar1 + dVar7 * dVar7;
  if (((dVar6 != 1.0) || (dVar3 = dVar2, dVar4 = dVar7, dVar5 = dVar1, NAN(dVar6))) &&
     (dVar3 = DAT_14c8464f0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar3 = dVar2 * dVar6;
    dVar4 = dVar7 * dVar6;
    dVar5 = dVar1 * dVar6;
  }
  dVar1 = (double)(param_3 * 0.017453292) * 0.5;
  dVar7 = sin(dVar1);
  local_70 = cos(dVar1);
  local_88 = dVar5 * dVar7;
  local_80 = dVar4 * dVar7;
  local_78 = dVar3 * dVar7;
  FUN_1448052ee(&local_88,param_1);
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b3c65a FUN_147b3c65a body=175 status=ok
// SIG undefined FUN_147b3c65a(void)

void FUN_147b3c65a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1._0_8_ = local_20 + 0.5;
  auVar1._8_8_ = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  *param_3 = (longlong)auVar1._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c70a FUN_147b3c70a body=169 status=ok
// SIG undefined FUN_147b3c70a(void)

void FUN_147b3c70a(undefined8 param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  int local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  piVar2 = local_20;
  if (*(int **)(param_2 + 0x38) != (int *)0x0) {
    piVar2 = *(int **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  iVar1 = rand();
  *piVar2 = iVar1;
  piVar2[1] = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c7ba FUN_147b3c7ba body=330 status=ok
// SIG undefined FUN_147b3c7ba(void)

void FUN_147b3c7ba(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_20;
  if (local_2c == 0) {
    puVar1 = &local_28;
  }
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3c90c FUN_147b3c90c body=328 status=ok
// SIG undefined FUN_147b3c90c(void)

void FUN_147b3c90c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uStack_50 = uStack_30;
  local_68 = local_28;
  uStack_60 = uStack_20;
  puVar4 = &local_68;
  if (local_3c == 0) {
    puVar4 = &local_58;
  }
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *param_3 = *(undefined4 *)puVar4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ca6e FUN_147b3ca6e body=330 status=ok
// SIG undefined FUN_147b3ca6e(void)

void FUN_147b3ca6e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [44];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_2c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar1 = &local_20;
  if (local_2c == 0) {
    puVar1 = &local_28;
  }
  *param_3 = *puVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3cbc0 FUN_147b3cbc0 body=369 status=ok
// SIG undefined FUN_147b3cbc0(void)

void FUN_147b3cbc0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_78 = local_20;
  local_88 = local_30;
  uStack_80 = uStack_28;
  puVar4 = &local_88;
  if (local_4c == 0) {
    puVar4 = &local_68;
  }
  *(undefined8 *)(param_3 + 4) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *param_3 = *(undefined4 *)puVar4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3cd38 FUN_147b3cd38 body=525 status=ok
// SIG undefined FUN_147b3cd38(void)

void FUN_147b3cd38(undefined8 param_1,longlong param_2,void **param_3)

{
  int iVar1;
  void **ppvVar2;
  void *_Src;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  int local_4c;
  void *local_48;
  undefined8 uStack_40;
  void *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  ppvVar2 = &local_38;
  if (local_4c == 0) {
    ppvVar2 = &local_48;
  }
  iVar1 = *(int *)(ppvVar2 + 1);
  local_58 = iVar1;
  if (iVar1 == 0) {
    local_54 = 0;
  }
  else {
    _Src = local_38;
    if (local_4c == 0) {
      _Src = local_48;
    }
    FUN_1446dd670(&local_60,iVar1,0);
    memcpy(local_60,_Src,(longlong)iVar1 * 2);
  }
  if (&local_60 == param_3) {
    if (local_60 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != (void *)0x0) {
      FUN_1400020a8();
    }
    *param_3 = local_60;
    local_60 = (void *)0x0;
    *(int *)(param_3 + 1) = local_58;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_54;
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3cf4c FUN_147b3cf4c body=497 status=ok
// SIG undefined FUN_147b3cf4c(void)

void FUN_147b3cf4c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_98 [40];
  longlong *local_70 [2];
  int local_5c;
  longlong *local_58 [2];
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144a5dc74(local_48);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  FUN_144a5dc74(local_58);
  FUN_144a4a07e();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  local_5c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  plVar2 = local_58[0];
  iVar1 = local_5c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 8))(local_58[0]);
  }
  plVar3 = local_48[0];
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 8))(local_48[0]);
  }
  local_70[0] = plVar3;
  if (iVar1 == 0) {
    local_70[0] = plVar2;
  }
  if (local_70[0] != (longlong *)0x0) {
    (**(code **)(*local_70[0] + 8))();
  }
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
  FUN_140008f88(param_3,local_70);
  if (local_70[0] != (longlong *)0x0) {
    (**(code **)(*local_70[0] + 0x10))();
  }
  if (local_58[0] != (longlong *)0x0) {
    (**(code **)(*local_58[0] + 0x10))();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d146 FUN_147b3d146 body=525 status=ok
// SIG undefined FUN_147b3d146(void)

void FUN_147b3d146(undefined8 param_1,longlong param_2,void *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [44];
  int local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  puVar2 = &local_118;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_11c == 0) {
    puVar3 = puVar2;
  }
  memmove(param_3,puVar3,0x60);
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d35a FUN_147b3d35a body=369 status=ok
// SIG undefined FUN_147b3d35a(void)

void FUN_147b3d35a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_4c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_4c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_4c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  local_68 = local_48;
  uStack_60 = uStack_40;
  local_78 = local_20;
  local_88 = local_30;
  uStack_80 = uStack_28;
  puVar4 = &local_88;
  if (local_4c == 0) {
    puVar4 = &local_68;
  }
  *(undefined8 *)(param_3 + 4) = puVar4[2];
  uVar1 = *(undefined4 *)((longlong)puVar4 + 4);
  uVar2 = *(undefined4 *)(puVar4 + 1);
  uVar3 = *(undefined4 *)((longlong)puVar4 + 0xc);
  *param_3 = *(undefined4 *)puVar4;
  param_3[1] = uVar1;
  param_3[2] = uVar2;
  param_3[3] = uVar3;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d4cc FUN_147b3d4cc body=333 status=ok
// SIG undefined FUN_147b3d4cc(void)

void FUN_147b3d4cc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_30;
  puVar2[1] = local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d61a FUN_147b3d61a body=250 status=ok
// SIG undefined FUN_147b3d61a(void)

void FUN_147b3d61a(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = &local_28;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(undefined4 *)((longlong)puVar2 + 4) = local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d716 FUN_147b3d716 body=313 status=ok
// SIG undefined FUN_147b3d716(void)

void FUN_147b3d716(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [40];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined1 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = DAT_14c8463e0;
  uStack_50 = DAT_14c8463e8;
  local_68 = DAT_14c8463d0;
  uStack_60 = DAT_14c8463d8;
  local_38 = DAT_14c8464f0;
  local_48 = DAT_14c8464e0;
  uStack_40 = DAT_14c8464e8;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = (undefined8 *)(lVar1 + 0x20);
  if (lVar1 == 0) {
    puVar2 = &local_48;
  }
  puVar2[2] = local_70;
  *(undefined4 *)puVar2 = local_80;
  *(undefined4 *)((longlong)puVar2 + 4) = uStack_7c;
  *(undefined4 *)(puVar2 + 1) = uStack_78;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d850 FUN_147b3d850 body=243 status=ok
// SIG undefined FUN_147b3d850(void)

void FUN_147b3d850(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  puVar2 = &local_20;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined4 *)puVar2 = local_24;
  *(undefined4 *)((longlong)puVar2 + 4) = local_24;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3d944 FUN_147b3d944 body=293 status=ok
// SIG undefined FUN_147b3d944(void)

void FUN_147b3d944(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = DAT_14c8464f0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_30 = DAT_14c8464f0;
  local_40 = DAT_14c8464e0;
  uStack_38 = DAT_14c8464e8;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  lVar1 = *(longlong *)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  puVar2 = (undefined8 *)(lVar1 + 0x18);
  if (lVar1 == 0) {
    puVar2 = &local_40;
  }
  puVar2[2] = local_60;
  *(undefined4 *)puVar2 = local_70;
  *(undefined4 *)((longlong)puVar2 + 4) = uStack_6c;
  *(undefined4 *)(puVar2 + 1) = uStack_68;
  *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_64;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3da6a FUN_147b3da6a body=206 status=ok
// SIG undefined FUN_147b3da6a(void)

void FUN_147b3da6a(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -(ulonglong)(0.0 < local_20) & 0x3ff0000000000000 |
             ~-(ulonglong)(0.0 < local_20) & -(ulonglong)(local_20 < 0.0) & 0xbff0000000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3db3a FUN_147b3db3a body=167 status=ok
// SIG undefined FUN_147b3db3a(void)

void FUN_147b3db3a(undefined8 param_1,longlong param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_48 [44];
  int local_1c;
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
  iVar1 = 1;
  if (local_1c < 1) {
    iVar1 = -(uint)(local_1c != 0);
  }
  *param_3 = iVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3dbe2 FUN_147b3dbe2 body=174 status=ok
// SIG undefined FUN_147b3dbe2(void)

void FUN_147b3dbe2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = 1;
  if (local_20 < 1) {
    lVar1 = -(ulonglong)(local_20 != 0);
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3dc92 FUN_147b3dc92 body=158 status=ok
// SIG undefined FUN_147b3dc92(void)

void FUN_147b3dc92(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = sin(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3dd32 FUN_147b3dd32 body=316 status=ok
// SIG undefined FUN_147b3dd32(void)

void FUN_147b3dd32(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_40;
  local_50 = CONCAT44(local_50._4_4_,(int)uStack_40);
  if (lVar5 == 0) {
    local_50 = uStack_40 & 0xffffffff;
    uVar4 = 0;
  }
  else {
    FUN_1408fdf90(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,pvVar1,lVar5 << 3);
    uVar4 = local_50 & 0xffffffff;
  }
  FUN_1449ad3a5(local_58,uVar4);
  pvVar1 = local_58;
  local_58 = (void *)0x0;
  uVar2 = (undefined4)local_50;
  uVar3 = local_50._4_4_;
  local_50 = 0;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = (longlong)pvVar1;
  *(undefined4 *)(param_3 + 1) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3de70 FUN_147b3de70 body=316 status=ok
// SIG undefined FUN_147b3de70(void)

void FUN_147b3de70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_1446e6bbc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = (void *)0x0;
  lVar5 = (longlong)(int)uStack_40;
  local_50 = CONCAT44(local_50._4_4_,(int)uStack_40);
  if (lVar5 == 0) {
    local_50 = uStack_40 & 0xffffffff;
    uVar4 = 0;
  }
  else {
    FUN_144a06ca8(&local_58,uStack_40 & 0xffffffff,0);
    memcpy(local_58,pvVar1,lVar5 << 2);
    uVar4 = local_50 & 0xffffffff;
  }
  FUN_1406de246(local_58,uVar4);
  pvVar1 = local_58;
  local_58 = (void *)0x0;
  uVar2 = (undefined4)local_50;
  uVar3 = local_50._4_4_;
  local_50 = 0;
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  *param_3 = (longlong)pvVar1;
  *(undefined4 *)(param_3 + 1) = uVar2;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3dfae FUN_147b3dfae body=278 status=ok
// SIG undefined FUN_147b3dfae(void)

void FUN_147b3dfae(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = sin(local_70);
  dVar2 = cos(local_70);
  dVar3 = sin(local_68);
  dVar4 = cos(local_68);
  *param_3 = dVar4 * dVar1;
  param_3[1] = dVar3 * dVar1;
  param_3[2] = dVar2;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e0c6 FUN_147b3e0c6 body=220 status=ok
// SIG undefined FUN_147b3e0c6(void)

void FUN_147b3e0c6(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [32];
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = 0.0;
  if (local_38 < 0.0) {
    FUN_1415b7ec4(L"Attempt to take Sqrt() of negative number - returning 0.",3,DAT_14cae6e40);
  }
  else if (local_38 < 0.0) {
    dVar1 = sqrt(local_38);
  }
  else {
    dVar1 = SQRT(local_38);
  }
  *param_3 = dVar1;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e1a4 FUN_147b3e1a4 body=157 status=ok
// SIG undefined FUN_147b3e1a4(void)

void FUN_147b3e1a4(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e242 FUN_147b3e242 body=216 status=ok
// SIG undefined FUN_147b3e242(void)

void FUN_147b3e242(undefined8 param_1,longlong param_2,char *param_3)

{
  undefined1 auStack_48 [46];
  char local_1a;
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_19);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_19);
  }
  local_1a = '\0';
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1a);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1a);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_19 - local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e31c FUN_147b3e31c body=230 status=ok
// SIG undefined FUN_147b3e31c(void)

void FUN_147b3e31c(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 - local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e404 FUN_147b3e404 body=230 status=ok
// SIG undefined FUN_147b3e404(void)

void FUN_147b3e404(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 - local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e4ec FUN_147b3e4ec body=230 status=ok
// SIG undefined FUN_147b3e4ec(void)

void FUN_147b3e4ec(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 - local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e5d4 FUN_147b3e5d4 body=248 status=ok
// SIG undefined FUN_147b3e5d4(void)

void FUN_147b3e5d4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
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
  *param_3 = CONCAT44(local_20._4_4_ - local_24,local_20._0_4_ - local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e6ce FUN_147b3e6ce body=251 status=ok
// SIG undefined FUN_147b3e6ce(void)

void FUN_147b3e6ce(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (ulonglong)(uint)((int)local_20 - (int)local_28) |
             local_20 - (local_28 & 0xffffffff00000000) & 0xffffffff00000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e7ca FUN_147b3e7ca body=277 status=ok
// SIG undefined FUN_147b3e7ca(void)

void FUN_147b3e7ca(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_58 [32];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_28 - local_38;
  param_3[1] = local_24 - local_34;
  param_3[2] = local_20 - local_30;
  param_3[3] = local_1c - local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e8e0 FUN_147b3e8e0 body=285 status=ok
// SIG undefined FUN_147b3e8e0(void)

void FUN_147b3e8e0(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  double *pdVar7;
  undefined1 auStack_88 [32];
  double local_68 [4];
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
  pdVar7 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  pdVar6 = local_48;
  if (pdVar7 != (double *)0x0) {
    pdVar6 = pdVar7;
  }
  pdVar7 = local_68;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar7 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = pdVar6[2];
  dVar3 = pdVar6[3];
  dVar4 = pdVar7[2];
  dVar5 = pdVar7[3];
  auVar1._8_4_ = SUB84(pdVar6[1] - pdVar7[1],0);
  auVar1._0_8_ = *pdVar6 - *pdVar7;
  auVar1._12_4_ = (int)((ulonglong)(pdVar6[1] - pdVar7[1]) >> 0x20);
  *param_3 = auVar1;
  *(double *)param_3[1] = dVar2 - dVar4;
  *(double *)(param_3[1] + 8) = dVar3 - dVar5;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3e9fe FUN_147b3e9fe body=230 status=ok
// SIG undefined FUN_147b3e9fe(void)

void FUN_147b3e9fe(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 - local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3eae6 FUN_147b3eae6 body=254 status=ok
// SIG undefined FUN_147b3eae6(void)

void FUN_147b3eae6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_28 - local_30;
  param_3[1] = local_20 - local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ebe6 FUN_147b3ebe6 body=243 status=ok
// SIG undefined FUN_147b3ebe6(void)

void FUN_147b3ebe6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_28 - local_38;
  param_3[1] = local_20 - local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ecda FUN_147b3ecda body=369 status=ok
// SIG undefined FUN_147b3ecda(void)

void FUN_147b3ecda(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_98 [32];
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[4] = 0.0;
  local_78[5] = 0.0;
  local_78[6] = 0.0;
  local_78[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  pdVar8 = *(double **)(param_2 + 0x38);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar7 = local_78 + 4;
  if (pdVar8 != (double *)0x0) {
    pdVar7 = pdVar8;
  }
  pdVar8 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar8 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar7[3];
  dVar2 = pdVar8[3];
  dVar3 = pdVar7[2];
  dVar4 = pdVar8[2];
  dVar5 = pdVar7[1];
  dVar6 = pdVar8[1];
  *param_3 = *pdVar7 - *pdVar8;
  param_3[1] = dVar5 - dVar6;
  param_3[2] = dVar3 - dVar4;
  param_3[3] = dVar1 - dVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ee4c FUN_147b3ee4c body=269 status=ok
// SIG undefined FUN_147b3ee4c(void)

void FUN_147b3ee4c(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [32];
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_38 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 - local_38;
  param_3[1] = local_28 - local_38;
  param_3[2] = local_20 - local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3ef5a FUN_147b3ef5a body=272 status=ok
// SIG undefined FUN_147b3ef5a(void)

void FUN_147b3ef5a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [36];
  int local_34;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_34 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_34;
  *param_3 = local_30 - dVar1;
  param_3[1] = local_28 - dVar1;
  param_3[2] = local_20 - dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3f06c FUN_147b3f06c body=158 status=ok
// SIG undefined FUN_147b3f06c(void)

void FUN_147b3f06c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_48 [40];
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = tan(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3f10c FUN_147b3f10c body=824 status=ok
// SIG undefined FUN_147b3f10c(void)

void FUN_147b3f10c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_188 [12];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar4 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  local_11d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11d);
  }
  local_124 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_124);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_124);
  }
  local_128 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_128);
  }
  puVar2 = &local_118;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
  }
  puVar4 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar5 = FUN_147b47e28(local_11c,local_11d,local_124,local_128);
  local_198 = 0;
  FUN_147b3fc80(local_188,puVar4,puVar2,uVar5);
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3f44c FUN_147b3f44c body=383 status=ok
// SIG undefined FUN_147b3f44c(void)

void FUN_147b3f44c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  FUN_144a49f24();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  _Src = local_48;
  puVar2 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar3 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar3 * 2);
  }
  uVar1 = FUN_14681eef4(&local_60,puVar2);
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3f608 FUN_147b3f608 body=268 status=ok
// SIG undefined FUN_147b3f608(void)

void FUN_147b3f608(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = 0.0;
  if (local_28 != 0) {
    fVar1 = (float)((double)local_20 / (double)local_28);
  }
  *param_3 = fVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3f72e FUN_147b3f72e body=728 status=ok
// SIG undefined FUN_147b3f72e(void)

void FUN_147b3f72e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_188 [13];
  float local_120;
  float local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar4 = &local_b8;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar3 = &local_118;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  local_11c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  local_120 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (0.0 < local_120) {
    dVar1 = (double)(local_120 * local_11c);
    if (1.0 <= dVar1) {
      dVar1 = 1.0;
    }
    if (dVar1 <= 0.0) {
      dVar1 = 0.0;
    }
    local_198 = 0;
    FUN_147b3fc80(local_188,puVar4,puVar3,(float)dVar1);
  }
  else {
    puVar4 = local_188;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  puVar4 = local_188;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar4;
    puVar4 = puVar4 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3fa08 FUN_147b3fa08 body=631 status=ok
// SIG undefined FUN_147b3fa08(void)

void FUN_147b3fa08(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined8 local_188 [13];
  undefined1 local_11d;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0x3ff0000000000000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
  puVar3 = *(undefined8 **)(param_2 + 0x38);
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_104 = 0;
  uStack_100 = 0;
  uStack_fc = 0x3ff00000;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0x3ff0000000000000;
  uStack_d0 = 0x3ff0000000000000;
  local_c8 = 0x3ff0000000000000;
  uStack_c0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_118);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_118);
  }
  puVar2 = *(undefined8 **)(param_2 + 0x38);
  local_11c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11c);
  }
  local_11d = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_11d);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_11d);
  }
  puVar4 = &local_118;
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2;
  }
  puVar2 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar2 = puVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_198 = local_11d;
  FUN_147b3fc80(local_188,puVar2,puVar4,local_11c);
  puVar3 = local_188;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b3fc80 FUN_147b3fc80 body=2227 status=ok
// SIG undefined FUN_147b3fc80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_147b3fc80(double *param_1,double *param_2,double *param_3,undefined8 param_4,
                      char param_5)

{
  undefined1 auVar1 [16];
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
  undefined1 auVar12 [16];
  double dVar14;
  undefined1 auVar13 [16];
  double dVar15;
  double dVar16;
  ulonglong uVar17;
  double dVar19;
  undefined1 auVar18 [16];
  double dVar20;
  ulonglong uVar21;
  double dVar22;
  float fVar23;
  undefined1 in_XMM3 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  double dVar31;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar36 [16];
  double dVar39;
  undefined1 auVar37 [16];
  double dVar40;
  undefined1 auVar38 [16];
  double dVar41;
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  uint uVar47;
  undefined4 uVar48;
  uint uVar49;
  undefined4 uVar50;
  uint uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  uint uVar54;
  uint uVar55;
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  undefined1 auStack_258 [32];
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 local_150;
  double local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  dVar16 = *param_2;
  dVar20 = param_2[1];
  dVar33 = param_2[2];
  dVar39 = param_2[3];
  dVar22 = param_2[4];
  dVar11 = param_2[5];
  dVar43 = param_2[6];
  dVar44 = param_2[7];
  dVar26 = dVar33 * dVar33 + dVar16 * dVar16;
  dVar31 = dVar39 * dVar39 + dVar20 * dVar20;
  auVar28._0_8_ = dVar26 + dVar31;
  auVar28._8_8_ = dVar26 + dVar31;
  dVar26 = *param_3;
  dVar31 = param_3[1];
  dVar45 = param_3[2];
  dVar2 = param_3[3];
  auVar29 = sqrtpd(auVar28,auVar28);
  auVar36 = divpd(_DAT_149934d80,auVar29);
  auVar57._0_8_ = auVar36._0_8_ * dVar33;
  auVar57._8_8_ = auVar36._8_8_ * dVar39;
  auVar29._8_8_ = -(ulonglong)(1e-08 <= auVar28._8_8_);
  auVar29._0_8_ = -(ulonglong)(1e-08 <= auVar28._0_8_);
  auVar57 = blendvpd(_DAT_149935300,auVar57,auVar29);
  dVar33 = dVar45 * dVar45 + dVar26 * dVar26;
  dVar39 = dVar2 * dVar2 + dVar31 * dVar31;
  auVar37._0_8_ = dVar33 + dVar39;
  auVar37._8_8_ = dVar33 + dVar39;
  dVar3 = param_2[8];
  dVar4 = param_2[9];
  auVar25._8_8_ = -(ulonglong)(1e-08 <= auVar37._8_8_);
  auVar25._0_8_ = -(ulonglong)(1e-08 <= auVar37._0_8_);
  auVar29 = sqrtpd(auVar37,auVar37);
  auVar29 = divpd(_DAT_149934d80,auVar29);
  auVar42._0_8_ = auVar29._0_8_ * dVar45;
  auVar42._8_8_ = auVar29._8_8_ * dVar2;
  auVar30 = blendvpd(_DAT_149935300,auVar42,auVar25);
  dVar45 = param_2[10];
  dVar2 = param_2[0xb];
  dVar5 = param_3[4];
  dVar6 = param_3[5];
  dVar7 = param_3[6];
  dVar33 = (double)((ulonglong)(dVar16 * auVar36._0_8_) & -(ulonglong)(1e-08 <= auVar28._0_8_));
  dVar39 = (double)((ulonglong)(dVar20 * auVar36._8_8_) & -(ulonglong)(1e-08 <= auVar28._8_8_));
  uVar52 = SUB84(dVar39,0);
  uVar54 = (uint)((ulonglong)dVar39 >> 0x20);
  dVar8 = param_3[8];
  dVar9 = param_3[9];
  dVar16 = (double)((ulonglong)(dVar26 * auVar29._0_8_) & -(ulonglong)(1e-08 <= auVar37._0_8_));
  uVar47 = (uint)((ulonglong)dVar16 >> 0x20);
  dVar20 = (double)((ulonglong)(dVar31 * auVar29._8_8_) & -(ulonglong)(1e-08 <= auVar37._8_8_));
  uVar48 = SUB84(dVar20,0);
  uVar49 = (uint)((ulonglong)dVar20 >> 0x20);
  dVar26 = param_3[10];
  dVar31 = param_3[0xb];
  fVar23 = in_XMM3._0_4_;
  if (param_5 == '\x01') {
    dVar20 = (double)fVar23;
    dVar11 = (dVar6 - dVar11) * dVar20 + dVar11;
    dVar15 = (dVar26 - dVar45) * dVar20 + dVar45;
    dVar14 = (dVar9 - dVar4) * dVar20 + dVar4;
    dVar10 = (dVar8 - dVar3) * dVar20 + dVar3;
    dVar19 = 0.0;
    local_128._8_4_ = uVar48;
    local_128._0_8_ = dVar16;
    local_128._12_4_ = uVar49;
    local_118 = auVar30;
    FUN_1448052ee(local_128,&local_1c0);
    local_128._8_4_ = uVar52;
    local_128._0_8_ = dVar33;
    local_128._12_4_ = uVar54;
    local_118 = auVar57;
    FUN_1448052ee(local_128,&local_1d8);
    local_158 = (local_1b0 - local_1c8) * dVar20 + local_1c8;
    dStack_160 = (local_1b8 - local_1d0) * dVar20 + local_1d0;
    local_168 = (local_1c0 - local_1d8) * dVar20 + local_1d8;
    FUN_144a7484c(&local_168,local_128);
    *param_1 = (double)local_128._0_8_;
    param_1[1] = (double)local_128._8_8_;
    param_1[2] = (double)local_118._0_8_;
    param_1[3] = (double)local_118._8_8_;
    auVar36._8_4_ = SUB84(dVar11,0);
    auVar36._0_8_ = (dVar5 - dVar22) * dVar20 + dVar22;
    auVar36._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 4) = auVar36;
    param_1[6] = (dVar7 - dVar43) * dVar20 + dVar43;
    param_1[7] = 0.0;
  }
  else {
    dVar56 = auVar57._0_8_;
    dVar34 = auVar30._0_8_;
    dVar40 = auVar30._8_8_;
    dVar58 = auVar57._8_8_;
    local_228 = dVar26;
    dStack_220 = dVar31;
    local_218 = dVar22;
    dStack_210 = dVar11;
    local_208 = dVar3;
    dStack_200 = dVar4;
    local_1f8 = dVar43;
    dStack_1f0 = dVar44;
    local_1e8 = dVar8;
    dStack_1e0 = dVar9;
    if (param_5 == '\0') {
      uVar50 = SUB84(dVar33,0);
      uVar51 = (uint)((ulonglong)dVar33 >> 0x20);
      uVar53 = uVar52;
      uVar55 = uVar54;
      auVar29 = auVar57;
      dVar15 = dVar45;
      dVar19 = dVar2;
      dVar35 = dVar22;
      dVar41 = dVar11;
      dVar27 = dVar43;
      dVar32 = dVar44;
      dVar10 = dVar3;
      dVar14 = dVar4;
      if ((1e-05 < ABS(fVar23)) &&
         (uVar50 = SUB84(dVar16,0), uVar51 = uVar47, uVar53 = uVar48, uVar55 = uVar49,
         auVar29 = auVar30, dVar15 = dVar26, dVar19 = dVar31, dVar35 = dVar5, dVar41 = dVar6,
         dVar27 = dVar7, dVar32 = param_3[7], dVar10 = dVar8, dVar14 = dVar9,
         1e-05 < ABS(fVar23 + -1.0))) {
        dVar15 = dVar56 * dVar34 + dVar33 * dVar16;
        dVar19 = dVar58 * dVar40 + dVar39 * dVar20;
        auVar12._8_8_ = -(ulonglong)(0.0 <= dVar15 + dVar19);
        auVar12._0_8_ = -(ulonglong)(0.0 <= dVar15 + dVar19);
        auVar18._0_8_ = 0.0 - dVar33;
        auVar18._8_8_ = 0.0 - dVar39;
        auVar1._8_4_ = uVar52;
        auVar1._0_8_ = dVar33;
        auVar1._12_4_ = uVar54;
        auVar29 = blendvpd(auVar18,auVar1,auVar12);
        auVar24._0_8_ = 0.0 - dVar56;
        auVar24._8_8_ = 0.0 - dVar58;
        auVar25 = blendvpd(auVar24,auVar57,auVar12);
        dVar10 = (double)fVar23;
        dVar14 = (double)fVar23;
        dVar33 = (double)DAT_149934d80 - dVar10;
        dVar39 = DAT_149934d80._8_8_ - dVar14;
        dVar16 = auVar29._0_8_ * dVar33 + dVar16 * dVar10;
        dVar20 = auVar29._8_8_ * dVar39 + dVar20 * dVar14;
        dVar15 = auVar25._0_8_ * dVar33 + dVar10 * dVar34;
        dVar19 = auVar25._8_8_ * dVar39 + dVar14 * dVar40;
        dVar34 = dVar15 * dVar15 + dVar16 * dVar16;
        dVar40 = dVar19 * dVar19 + dVar20 * dVar20;
        auVar38._0_8_ = dVar34 + dVar40;
        auVar38._8_8_ = dVar34 + dVar40;
        auVar13._8_8_ = -(ulonglong)(1e-08 <= auVar38._8_8_);
        auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar38._0_8_);
        auVar29 = sqrtpd(in_XMM3,auVar38);
        auVar25 = divpd(_DAT_149934d80,auVar29);
        auVar46._0_8_ = auVar25._0_8_ * dVar15;
        auVar46._8_8_ = auVar25._8_8_ * dVar19;
        auVar29 = blendvpd(_DAT_149935300,auVar46,auVar13);
        uVar17 = (ulonglong)(dVar16 * auVar25._0_8_) & -(ulonglong)(1e-08 <= auVar38._0_8_);
        uVar21 = (ulonglong)(dVar20 * auVar25._8_8_) & -(ulonglong)(1e-08 <= auVar38._8_8_);
        uVar50 = (int)uVar17;
        uVar51 = (uint)(uVar17 >> 0x20);
        uVar53 = (int)uVar21;
        uVar55 = (uint)(uVar21 >> 0x20);
        dVar15 = dVar45 * dVar33 + dVar26 * dVar10;
        dVar19 = dVar2 * dVar39 + dVar31 * dVar14;
        dVar35 = dVar22 * dVar33 + dVar5 * dVar10;
        dVar41 = dVar11 * dVar39 + dVar6 * dVar14;
        dVar27 = dVar43 * dVar33 + dVar7 * dVar10;
        dVar32 = dVar44 * dVar39 + param_3[7] * dVar14;
        dVar10 = dVar3 * dVar33 + dVar8 * dVar10;
        dVar14 = dVar4 * dVar39 + dVar9 * dVar14;
        local_238 = dVar45;
        dStack_230 = dVar2;
      }
      *(undefined4 *)param_1 = uVar50;
      *(uint *)((longlong)param_1 + 4) = uVar51;
      *(undefined4 *)(param_1 + 1) = uVar53;
      *(uint *)((longlong)param_1 + 0xc) = uVar55;
      *(undefined1 (*) [16])(param_1 + 2) = auVar29;
      param_1[4] = dVar35;
      param_1[5] = dVar41;
      param_1[6] = dVar27;
      param_1[7] = dVar32;
    }
    else {
      if (dVar58 * dVar40 + dVar34 * dVar56 + dVar16 * dVar33 + dVar39 * dVar20 < 0.0) {
        uVar47 = uVar47 ^ 0x80000000;
        uVar49 = uVar49 ^ 0x80000000;
        auVar30._0_8_ = -dVar34;
        auVar30._8_8_ = -dVar40;
      }
      local_138 = dVar43 * 0.5;
      local_140 = dVar11 * 0.5;
      local_148 = dVar22 * 0.5;
      local_158 = 0.0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_150 = 0x3ff0000000000000;
      local_130 = 0;
      local_1a8._8_4_ = uVar52;
      local_1a8._0_8_ = dVar33;
      local_1a8._12_4_ = uVar54;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_238 = dVar45;
      dStack_230 = dVar2;
      local_198 = auVar57;
      FUN_147b54764(&local_168,local_128,local_1a8);
      dVar11 = (double)(1.0 - fVar23);
      dVar20 = (double)local_128._0_8_ * dVar11;
      dVar33 = (double)local_128._8_8_ * dVar11;
      dVar39 = (double)local_118._0_8_ * dVar11;
      dVar22 = (double)local_118._8_8_ * dVar11;
      dVar43 = local_108 * dVar11;
      dVar44 = dStack_100 * dVar11;
      dVar45 = dVar11 * local_f8;
      dVar11 = dVar11 * dStack_f0;
      local_138 = dVar7 * 0.5;
      local_140 = dVar6 * 0.5;
      local_148 = dVar5 * 0.5;
      local_158 = 0.0;
      local_168 = 0.0;
      dStack_160 = 0.0;
      local_150 = 0x3ff0000000000000;
      local_130 = 0;
      local_1a8._4_4_ = uVar47;
      local_1a8._0_4_ = SUB84(dVar16,0);
      local_1a8._8_4_ = uVar48;
      local_1a8._12_4_ = uVar49;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_198 = auVar30;
      FUN_147b54764(&local_168,local_128,local_1a8);
      dVar31 = (double)fVar23;
      dVar20 = (double)local_128._0_8_ * dVar31 + dVar20;
      dVar33 = (double)local_128._8_8_ * dVar31 + dVar33;
      dVar39 = (double)local_118._0_8_ * dVar31 + dVar39;
      dVar22 = (double)local_118._8_8_ * dVar31 + dVar22;
      dVar26 = 1.0 / SQRT(dVar22 * dVar22 + dVar39 * dVar39 + dVar20 * dVar20 + dVar33 * dVar33);
      dVar20 = dVar20 * dVar26;
      dVar33 = dVar33 * dVar26;
      dVar39 = dVar39 * dVar26;
      dVar22 = dVar22 * dVar26;
      dVar16 = (local_108 * dVar31 + dVar43) * dVar26;
      dVar43 = (dStack_100 * dVar31 + dVar44) * dVar26;
      dVar44 = (dVar31 * local_f8 + dVar45) * dVar26;
      dVar26 = (dVar31 * dStack_f0 + dVar11) * dVar26;
      dVar10 = (local_1e8 - local_208) * dVar31 + local_208;
      dVar15 = (local_228 - local_238) * dVar31 + local_238;
      dVar14 = (dStack_1e0 - dStack_200) * dVar31 + dStack_200;
      *param_1 = dVar20;
      param_1[1] = dVar33;
      param_1[2] = dVar39;
      param_1[3] = dVar22;
      dVar11 = dVar44 * -dVar33 * -1.0 +
               -dVar39 * dVar43 + (dVar16 * dVar22 * 1.0 - dVar26 * dVar20);
      dVar31 = dVar44 * -dVar20 * 1.0 +
               dVar22 * dVar43 + (dVar16 * -dVar39 * -1.0 - dVar26 * dVar33);
      dVar16 = dVar22 * dVar44 + dVar43 * dVar20 + (-dVar33 * dVar16 - dVar26 * dVar39);
      param_1[4] = dVar11 + dVar11;
      param_1[5] = dVar31 + dVar31;
      param_1[6] = dVar16 + dVar16;
      param_1[7] = 0.0;
      dVar19 = 0.0;
    }
  }
  param_1[8] = dVar10;
  param_1[9] = dVar14;
  param_1[10] = dVar15;
  param_1[0xb] = dVar19;
  if ((local_e0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b40534 FUN_147b40534 body=135 status=ok
// SIG undefined FUN_147b40534(void)

void FUN_147b40534(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1402160b8(&local_20);
  *param_3 = (local_20 / 864000000000) * 864000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b405bc FUN_147b405bc body=443 status=ok
// SIG undefined FUN_147b405bc(void)

void FUN_147b405bc(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50 [2];
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar3 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar3 = local_50;
  }
  local_58 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pdVar2 = &local_58;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = SQRT(local_40 * local_40 + local_38 * local_38);
  *pdVar2 = dVar4;
  if (dVar4 <= 9.99999993922529e-09) {
    *(undefined4 *)pdVar3 = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)pdVar3 + 4) = DAT_14c8463f0._4_4_;
    *(undefined4 *)(pdVar3 + 1) = (undefined4)DAT_14c8463f8;
    *(undefined4 *)((longlong)pdVar3 + 0xc) = DAT_14c8463f8._4_4_;
  }
  else {
    *pdVar3 = local_40 * (1.0 / dVar4);
    pdVar3 = local_50;
    if (pdVar1 != (double *)0x0) {
      pdVar3 = pdVar1;
    }
    pdVar3[1] = local_38 * (1.0 / dVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40778 FUN_147b40778 body=242 status=ok
// SIG undefined FUN_147b40778(void)

void FUN_147b40778(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_34;
  uStack_54 = uStack_30;
  uStack_50 = uStack_2c;
  uStack_4c = uStack_28;
  FUN_1411ab38a(&local_58,local_24);
  FUN_1458b729a(local_24,&local_48);
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
    *(undefined4 *)(param_3 + 1) = local_40;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_3c;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4086c FUN_147b4086c body=189 status=ok
// SIG undefined FUN_147b4086c(void)

void FUN_147b4086c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar2._0_8_ = local_20 + 0.5;
  auVar2._8_8_ = 0;
  auVar2 = roundpd(auVar2,auVar2,1);
  auVar1._0_8_ = local_28 + 0.5;
  auVar1._8_8_ = 0;
  auVar1 = roundpd(auVar1,auVar1,1);
  *param_3 = auVar1._0_8_;
  param_3[1] = auVar2._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4092a FUN_147b4092a body=216 status=ok
// SIG undefined FUN_147b4092a(void)

void FUN_147b4092a(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = ~-(ulonglong)(0.0 <= local_28) & 0xbff0000000000000 |
             -(ulonglong)(0.0 <= local_28) & 0x3ff0000000000000;
  param_3[1] = ~-(ulonglong)(0.0 <= local_20) & 0xbff0000000000000 |
               -(ulonglong)(0.0 <= local_20) & 0x3ff0000000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40a04 FUN_147b40a04 body=260 status=ok
// SIG undefined FUN_147b40a04(void)

void FUN_147b40a04(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *plVar2;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14021300e(&local_28,0x7b2,1,1);
  *param_3 = (lVar1 - local_28) / 10000000;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40b0a FUN_147b40b0a body=244 status=ok
// SIG undefined FUN_147b40b0a(void)

void FUN_147b40b0a(undefined8 param_1,longlong param_2,double *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  plVar2 = &local_30;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = *plVar2;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14021300e(&local_28,0x7b2,1,1);
  *param_3 = (double)(lVar1 - local_28) / 10000000.0;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40c00 FUN_147b40c00 body=228 status=ok
// SIG undefined FUN_147b40c00(void)

void FUN_147b40c00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_34 = 0x3ff00000;
  uStack_30 = 0;
  uStack_2c = 0x3ff00000;
  local_28 = 0x3ff0000000000000;
  uStack_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147b40ce6(puVar1);
  *param_3 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40ce6 FUN_147b40ce6 body=457 status=ok
// SIG undefined FUN_147b40ce6(void)

undefined8 FUN_147b40ce6(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 uStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  undefined8 extraout_XMM0_Qb;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  local_d8 = param_1[8];
  dVar4 = param_1[9];
  dStack_a0 = param_1[10];
  dVar11 = dVar3 + dVar3;
  dVar7 = dVar1 + dVar1;
  dVar10 = dVar2 * (dVar2 + dVar2);
  local_e8 = (1.0 - (dVar1 * dVar7 + dVar3 * dVar11)) * local_d8;
  dVar1 = (1.0 - (dVar1 * dVar7 + dVar10)) * dVar4;
  local_98 = (1.0 - (dVar10 + dVar3 * dVar11)) * dStack_a0;
  dVar10 = param_1[3];
  dVar8 = dVar7 * dVar10;
  dVar9 = (dVar2 + dVar2) * param_1[3];
  dVar10 = dVar11 * dVar10;
  dStack_e0 = (dVar11 * dVar2 + dVar8) * local_d8;
  local_b8 = (dVar7 * dVar3 + dVar9) * dVar4;
  local_a8 = (dVar10 + *param_1 * dVar7) * dStack_a0;
  local_d8 = (*param_1 * dVar7 - dVar10) * local_d8;
  dStack_a0 = (dVar7 * dVar3 - dVar9) * dStack_a0;
  uStack_d0 = 0;
  local_c8._8_4_ = SUB84(dVar1,0);
  local_c8._0_8_ = (dVar11 * dVar2 - dVar8) * dVar4;
  local_c8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  uStack_b0 = 0;
  uStack_90 = 0;
  local_88 = param_1[4];
  dStack_80 = param_1[5];
  local_78 = param_1[6];
  uStack_70 = 0x3ff0000000000000;
  auVar5._0_8_ = (double)FUN_144a91046(&local_e8);
  auVar5._8_8_ = extraout_XMM0_Qb;
  auVar6._4_12_ = auVar5._4_12_;
  auVar6._0_4_ = (float)auVar5._0_8_;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return auVar6._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b40eb0 FUN_147b40eb0 body=556 status=ok
// SIG undefined FUN_147b40eb0(void)

void FUN_147b40eb0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  double dVar2;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8[0] = 0.0;
  local_c8[1] = 0.0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0x3ff0000000000000;
  uStack_80 = 0x3ff0000000000000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  pdVar7 = local_c8;
  if (pdVar3 != (double *)0x0) {
    pdVar7 = pdVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = *pdVar7;
  dVar5 = pdVar7[1];
  dVar6 = pdVar7[2];
  dVar1 = pdVar7[3];
  dVar2 = pdVar7[3];
  dVar8 = dStack_e0 * dVar4 - local_e8 * dVar5;
  dVar9 = local_d8 * dVar5 - dStack_e0 * dVar6;
  dVar10 = local_e8 * dVar6 - dVar4 * local_d8;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  *param_3 = (dVar8 * dVar5 - dVar10 * dVar6) + dVar1 * dVar9 + local_e8;
  param_3[1] = (dVar6 * dVar9 - dVar4 * dVar8) + dVar2 * dVar10 + dStack_e0;
  param_3[2] = dVar8 * dVar1 + local_d8 + (dVar10 * dVar4 - dVar9 * dVar5);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b410de FUN_147b410de body=589 status=ok
// SIG undefined FUN_147b410de(void)

void FUN_147b410de(undefined8 param_1,longlong param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_108 [32];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8 [2];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8[0] = 0.0;
  local_c8[1] = 0.0;
  local_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_ac = 0x3ff00000;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0x3ff00000;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0x3ff0000000000000;
  uStack_70 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  pdVar3 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  pdVar9 = local_c8;
  if (pdVar3 != (double *)0x0) {
    pdVar9 = pdVar3;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_e8 = local_e8 * pdVar9[8];
  dStack_e0 = dStack_e0 * pdVar9[9];
  local_d8 = local_d8 * pdVar9[10];
  dVar6 = *pdVar9;
  dVar7 = pdVar9[1];
  dVar8 = pdVar9[2];
  dVar1 = pdVar9[3];
  dVar10 = dStack_e0 * dVar6 - local_e8 * dVar7;
  dVar11 = local_d8 * dVar7 - dStack_e0 * dVar8;
  dVar12 = local_e8 * dVar8 - dVar6 * local_d8;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar5 = (dVar8 * dVar11 - dVar6 * dVar10) + pdVar9[3] * dVar12 + dStack_e0 + pdVar9[5];
  dVar2 = pdVar9[6];
  auVar4._8_4_ = SUB84(dVar5,0);
  auVar4._0_8_ = (dVar10 * dVar7 - dVar12 * dVar8) + dVar1 * dVar11 + local_e8 + pdVar9[4];
  auVar4._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  *param_3 = auVar4;
  *(double *)param_3[1] = dVar10 * dVar1 + local_d8 + (dVar12 * dVar6 - dVar11 * dVar7) + dVar2;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4132c FUN_147b4132c body=586 status=ok
// SIG undefined FUN_147b4132c(void)

void FUN_147b4132c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  double local_108 [2];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined1 local_78 [16];
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_108[0] = 0.0;
  local_108[1] = 0.0;
  local_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0x3ff00000;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c4 = 0x3ff00000;
  uStack_c0 = 0;
  uStack_bc = 0x3ff00000;
  local_b8 = 0x3ff0000000000000;
  uStack_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_108);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_108);
  }
  pdVar7 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_120);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_120);
  }
  pdVar8 = local_108;
  if (pdVar7 != (double *)0x0) {
    pdVar8 = pdVar7;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_120;
  uStack_154 = uStack_11c;
  uStack_150 = uStack_118;
  uStack_14c = uStack_114;
  local_148 = local_110;
  FUN_144a7484c(&local_158,&local_a8);
  dVar1 = pdVar8[3];
  dVar2 = pdVar8[3];
  dVar3 = pdVar8[1];
  dVar4 = pdVar8[1];
  dVar5 = pdVar8[2];
  dVar6 = pdVar8[2];
  local_88 = dStack_a0 * dVar5 * -1.0 +
             local_98 * dVar3 + *pdVar8 * dStack_90 * 1.0 + dVar1 * local_a8;
  dStack_80 = local_a8 * dVar6 * 1.0 +
              dStack_90 * dVar4 + *pdVar8 * local_98 * -1.0 + dVar2 * dStack_a0;
  dVar2 = local_98 * dVar6 * -1.0 +
          ((*pdVar8 * local_a8 * -1.0 + dVar2 * dStack_90) - dVar4 * dStack_a0);
  local_78._8_4_ = SUB84(dVar2,0);
  local_78._0_8_ =
       dStack_90 * dVar5 * 1.0 + ((*pdVar8 * dStack_a0 * 1.0 + dVar1 * local_98) - dVar3 * local_a8)
  ;
  local_78._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  FUN_1448052ee(&local_88,&local_138);
  *(undefined8 *)(param_3 + 4) = local_128;
  *param_3 = local_138;
  param_3[1] = uStack_134;
  param_3[2] = uStack_130;
  param_3[3] = uStack_12c;
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41578 FUN_147b41578 body=536 status=ok
// SIG undefined FUN_147b41578(void)

void FUN_147b41578(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
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
  double *pdVar21;
  double *pdVar22;
  undefined1 auStack_158 [32];
  double local_138 [21];
  ulonglong local_90;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138 + 4);
  }
  pdVar22 = *(double **)(param_2 + 0x38);
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_138);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_138);
  }
  pdVar21 = local_138 + 4;
  if (pdVar22 != (double *)0x0) {
    pdVar21 = pdVar22;
  }
  pdVar22 = local_138;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar22 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar9 = pdVar21[1];
  dVar10 = pdVar21[2];
  dVar11 = pdVar21[3];
  dVar12 = pdVar21[5];
  dVar13 = pdVar21[6];
  dVar14 = pdVar21[7];
  dVar15 = pdVar21[9];
  dVar16 = pdVar21[10];
  dVar17 = pdVar21[0xb];
  dVar18 = pdVar21[0xd];
  dVar19 = pdVar21[0xe];
  dVar20 = pdVar21[0xf];
  dVar1 = *pdVar22;
  dVar2 = *pdVar22;
  dVar3 = pdVar22[1];
  dVar4 = pdVar22[1];
  dVar5 = pdVar22[2];
  dVar6 = pdVar22[2];
  dVar7 = pdVar22[3];
  dVar8 = pdVar22[3];
  *param_3 = pdVar21[0xc] * dVar7 + pdVar21[8] * dVar5 + pdVar21[4] * dVar3 + *pdVar21 * dVar1;
  param_3[1] = dVar18 * dVar8 + dVar15 * dVar6 + dVar12 * dVar4 + dVar9 * dVar2;
  param_3[2] = dVar19 * dVar7 + dVar16 * dVar5 + dVar13 * dVar3 + dVar10 * dVar1;
  param_3[3] = dVar20 * dVar8 + dVar17 * dVar6 + dVar14 * dVar4 + dVar11 * dVar2;
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41792 FUN_147b41792 body=88 status=ok
// SIG undefined FUN_147b41792(void)

void FUN_147b41792(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140212f8e(&local_20);
  *param_3 = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b417ec FUN_147b417ec body=705 status=ok
// SIG undefined FUN_147b417ec(void)

void FUN_147b417ec(undefined8 param_1,longlong param_2,double *param_3)

{
  float fVar1;
  double dVar2;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 local_b5;
  undefined4 local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_b4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b4);
  }
  local_b5 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b5);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b5);
  }
  local_bc = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_bc);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_bc);
  }
  local_c0 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = (float)FUN_147b47e28(local_b4,local_b5,local_bc,local_c0);
  dVar2 = (double)fVar1;
  *param_3 = (local_b0 - local_98) * dVar2 + local_98;
  param_3[1] = (local_a8 - local_90) * dVar2 + local_90;
  param_3[2] = (local_a0 - local_88) * dVar2 + local_88;
  if ((local_80 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41b02 FUN_147b41b02 body=449 status=ok
// SIG undefined FUN_147b41b02(void)

void FUN_147b41b02(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_60 = uStack_30;
  local_78 = local_28;
  uStack_74 = uStack_24;
  uStack_70 = uStack_20;
  uStack_6c = uStack_1c;
  local_88 = local_40;
  FUN_1467f8a9c(&local_50,&local_78,&local_68,local_3c);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41cc4 FUN_147b41cc4 body=449 status=ok
// SIG undefined FUN_147b41cc4(void)

void FUN_147b41cc4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  local_40 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_60 = uStack_30;
  local_78 = local_28;
  uStack_74 = uStack_24;
  uStack_70 = uStack_20;
  uStack_6c = uStack_1c;
  local_88 = local_40;
  FUN_1467f89f0(&local_50,&local_78,&local_68,local_3c);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41e86 FUN_147b41e86 body=317 status=ok
// SIG undefined FUN_147b41e86(void)

void FUN_147b41e86(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  uStack_30 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar9 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  puVar8 = &local_48;
  if (puVar9 != (undefined8 *)0x0) {
    puVar8 = puVar9;
  }
  puVar9 = &local_68;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar9 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(undefined4 *)puVar9;
  uVar2 = *(undefined4 *)((longlong)puVar9 + 4);
  uVar3 = *(undefined4 *)(puVar9 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar9 + 0xc);
  uVar5 = *(undefined4 *)((longlong)puVar9 + 0x14);
  uVar6 = *(undefined4 *)(puVar9 + 3);
  uVar7 = *(undefined4 *)((longlong)puVar9 + 0x1c);
  *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar9 + 2);
  *(undefined4 *)((longlong)puVar8 + 0x14) = uVar5;
  *(undefined4 *)(puVar8 + 3) = uVar6;
  *(undefined4 *)((longlong)puVar8 + 0x1c) = uVar7;
  *(undefined4 *)puVar8 = uVar1;
  *(undefined4 *)((longlong)puVar8 + 4) = uVar2;
  *(undefined4 *)(puVar8 + 1) = uVar3;
  *(undefined4 *)((longlong)puVar8 + 0xc) = uVar4;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b41fc4 FUN_147b41fc4 body=421 status=ok
// SIG undefined FUN_147b41fc4(void)

void FUN_147b41fc4(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_a8 [32];
  double local_88 [9];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88[4] = 0.0;
  local_88[5] = 0.0;
  local_88[6] = 0.0;
  local_88[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88 + 4);
  }
  pdVar8 = *(double **)(param_2 + 0x38);
  local_88[0] = 0.0;
  local_88[1] = 0.0;
  local_88[2] = 0.0;
  local_88[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  pdVar7 = local_88 + 4;
  if (pdVar8 != (double *)0x0) {
    pdVar7 = pdVar8;
  }
  pdVar8 = local_88;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar8 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar8;
  dVar2 = pdVar8[1];
  dVar3 = *pdVar7;
  dVar4 = pdVar7[1];
  dVar5 = pdVar7[2];
  dVar6 = pdVar8[2];
  *param_3 = dVar4 * dVar6 - dVar2 * dVar5;
  param_3[1] = dVar1 * dVar5 - dVar3 * dVar6;
  param_3[2] = dVar3 * dVar2 - dVar1 * dVar4;
  param_3[3] = 0.0;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4216a FUN_147b4216a body=366 status=ok
// SIG undefined FUN_147b4216a(void)

void FUN_147b4216a(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_98 [32];
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[4] = 0.0;
  local_78[5] = 0.0;
  local_78[6] = 0.0;
  local_78[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar1 = local_78 + 4;
  if (pdVar2 != (double *)0x0) {
    pdVar1 = pdVar2;
  }
  pdVar2 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = pdVar1[3] * pdVar2[3] +
             pdVar1[2] * pdVar2[2] + *pdVar1 * *pdVar2 + pdVar1[1] * pdVar2[1];
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b422da FUN_147b422da body=351 status=ok
// SIG undefined FUN_147b422da(void)

void FUN_147b422da(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_98 [32];
  double local_78 [9];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[4] = 0.0;
  local_78[5] = 0.0;
  local_78[6] = 0.0;
  local_78[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 4);
  }
  pdVar2 = *(double **)(param_2 + 0x38);
  local_78[0] = 0.0;
  local_78[1] = 0.0;
  local_78[2] = 0.0;
  local_78[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar1 = local_78 + 4;
  if (pdVar2 != (double *)0x0) {
    pdVar1 = pdVar2;
  }
  pdVar2 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar2 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = pdVar1[2] * pdVar2[2] + *pdVar1 * *pdVar2 + pdVar1[1] * pdVar2[1];
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42440 FUN_147b42440 body=188 status=ok
// SIG undefined FUN_147b42440(void)

void FUN_147b42440(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1467fcec4(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42504 FUN_147b42504 body=372 status=ok
// SIG undefined FUN_147b42504(void)

void FUN_147b42504(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  undefined1 auStack_88 [44];
  float local_5c;
  double local_58 [5];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar4 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar4 = local_58;
  }
  local_5c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = (double)local_5c;
  if (ABS(*pdVar4) <= dVar2) {
    pdVar4 = pdVar1;
    if (pdVar1 == (double *)0x0) {
      pdVar4 = local_58;
    }
    if (ABS(pdVar4[1]) <= dVar2) {
      pdVar4 = local_58;
      if (pdVar1 != (double *)0x0) {
        pdVar4 = pdVar1;
      }
      bVar3 = ABS(pdVar4[2]) <= dVar2;
      goto LAB_147b425eb;
    }
  }
  bVar3 = false;
LAB_147b425eb:
  *(bool *)param_3 = bVar3;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42680 FUN_147b42680 body=257 status=ok
// SIG undefined FUN_147b42680(void)

void FUN_147b42680(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [32];
  double local_38 [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38[0] = 0.0;
  local_38[1] = 0.0;
  local_38[2] = 0.0;
  local_38[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  pdVar1 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       ABS(1.0 - (pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1])) <
       0.009999999776482582;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


