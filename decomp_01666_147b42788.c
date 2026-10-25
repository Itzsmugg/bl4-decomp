// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b42788 FUN_147b42788 body=337 status=ok
// SIG undefined FUN_147b42788(void)

void FUN_147b42788(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 1.0;
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
  pdVar2 = local_48;
  if (pdVar1 != (double *)0x0) {
    pdVar2 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       ABS(1.0 - (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1])) <
       (double)local_4c;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b428e0 FUN_147b428e0 body=264 status=ok
// SIG undefined FUN_147b428e0(void)

void FUN_147b428e0(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  byte bVar2;
  byte bVar3;
  double *pdVar4;
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
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar4 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar4 = local_38;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar2 = 0;
  bVar3 = 0;
  if ((*pdVar4 == 0.0) && (bVar3 = bVar2, !NAN(*pdVar4))) {
    if ((pdVar4[1] == 0.0) && (!NAN(pdVar4[1]))) {
      if ((pdVar4[2] == 0.0) && (!NAN(pdVar4[2]))) {
        pdVar4 = local_38;
        if (pdVar1 != (double *)0x0) {
          pdVar4 = pdVar1;
        }
        bVar3 = -(pdVar4[3] == 0.0) & 1;
      }
    }
  }
  *param_3 = bVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b429ea FUN_147b429ea body=465 status=ok
// SIG undefined FUN_147b429ea(void)

void FUN_147b429ea(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double *pdVar9;
  undefined1 auStack_b8 [32];
  double local_98 [9];
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98[4] = 0.0;
  local_98[5] = 0.0;
  local_98[6] = 0.0;
  local_98[7] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98 + 4);
  }
  pdVar9 = *(double **)(param_2 + 0x38);
  local_98[0] = 0.0;
  local_98[1] = 0.0;
  local_98[2] = 0.0;
  local_98[3] = 1.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  pdVar8 = local_98 + 4;
  if (pdVar9 != (double *)0x0) {
    pdVar8 = pdVar9;
  }
  pdVar9 = local_98;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar9 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar8[1];
  dVar2 = pdVar9[1];
  dVar3 = pdVar8[2];
  dVar4 = pdVar9[2];
  dVar7 = dVar3 * dVar4 + *pdVar8 * *pdVar9 + dVar1 * dVar2;
  dVar7 = dVar7 + dVar7;
  dVar5 = pdVar9[3];
  dVar6 = pdVar8[3];
  *param_3 = dVar7 * *pdVar9 - *pdVar8;
  param_3[1] = dVar2 * dVar7 - dVar1;
  param_3[2] = dVar4 * dVar7 - dVar3;
  param_3[3] = dVar5 * dVar7 - dVar6;
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42bbc FUN_147b42bbc body=205 status=ok
// SIG undefined FUN_147b42bbc(void)

void FUN_147b42bbc(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0x3ff0000000000000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar8 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = *(uint *)((longlong)puVar8 + 4);
  uVar2 = *(undefined4 *)(puVar8 + 1);
  uVar3 = *(uint *)((longlong)puVar8 + 0xc);
  uVar4 = *(undefined4 *)(puVar8 + 2);
  uVar5 = *(uint *)((longlong)puVar8 + 0x14);
  uVar6 = *(undefined4 *)(puVar8 + 3);
  uVar7 = *(uint *)((longlong)puVar8 + 0x1c);
  *param_3 = *(undefined4 *)puVar8;
  param_3[1] = uVar1 ^ 0x80000000;
  param_3[2] = uVar2;
  param_3[3] = uVar3 ^ 0x80000000;
  param_3[4] = uVar4;
  param_3[5] = uVar5 ^ 0x80000000;
  param_3[6] = uVar6;
  param_3[7] = uVar7 ^ 0x80000000;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42c8a FUN_147b42c8a body=419 status=ok
// SIG undefined FUN_147b42c8a(void)

void FUN_147b42c8a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
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
  pdVar2 = *(double **)(param_2 + 0x38);
  pdVar3 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar3 = local_58;
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
  dVar4 = *pdVar3;
  pdVar3 = local_58;
  if (pdVar2 != (double *)0x0) {
    pdVar3 = pdVar2;
  }
  dVar5 = pdVar3[1];
  dVar1 = pdVar3[2];
  dVar6 = dVar1 * dVar1 + dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar6 <= (double)local_5c) {
    dVar1 = 0.0;
    dVar6 = 1.0;
    dVar5 = 0.0;
    dVar4 = 0.0;
  }
  else {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar1 = dVar1 * dVar6;
    dVar5 = dVar5 * dVar6;
    dVar4 = dVar4 * dVar6;
    dVar6 = 0.0;
  }
  *param_3 = dVar4;
  param_3[1] = dVar5;
  param_3[2] = dVar1;
  param_3[3] = dVar6;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42e2e FUN_147b42e2e body=421 status=ok
// SIG undefined FUN_147b42e2e(void)

void FUN_147b42e2e(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[0] = 0.0;
  local_48[1] = 0.0;
  local_48[2] = 0.0;
  local_48[3] = 1.0;
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
  pdVar4 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar4 = local_48;
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
  dVar5 = *pdVar4;
  pdVar3 = pdVar2;
  if (pdVar2 == (double *)0x0) {
    pdVar3 = local_48;
  }
  dVar6 = pdVar3[1];
  dVar1 = pdVar3[2];
  dVar7 = dVar1 * dVar1 + dVar5 * dVar5 + dVar6 * dVar6;
  if (dVar7 <= (double)local_4c) {
    dVar1 = 0.0;
    dVar7 = 1.0;
    dVar6 = 0.0;
    dVar5 = 0.0;
  }
  else {
    dVar7 = 1.0 / SQRT(dVar7);
    dVar1 = dVar1 * dVar7;
    dVar6 = dVar6 * dVar7;
    dVar5 = dVar5 * dVar7;
    dVar7 = 0.0;
  }
  *pdVar4 = dVar5;
  pdVar3[1] = dVar6;
  pdVar3[2] = dVar1;
  pdVar4 = local_48;
  if (pdVar2 != (double *)0x0) {
    pdVar4 = pdVar2;
  }
  pdVar4[3] = dVar7;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b42fd4 FUN_147b42fd4 body=287 status=ok
// SIG undefined FUN_147b42fd4(void)

void FUN_147b42fd4(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
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
  pdVar4 = local_38;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  dVar3 = pdVar4[2];
  dVar5 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  *param_3 = dVar5 * dVar1;
  param_3[1] = dVar2 * dVar5;
  param_3[2] = dVar3 * dVar5;
  param_3[3] = 0.0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b430f4 FUN_147b430f4 body=540 status=ok
// SIG undefined FUN_147b430f4(void)

void FUN_147b430f4(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_40;
  puVar2[1] = local_48;
  puVar2[2] = local_50;
  puVar2[3] = local_58;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43312 FUN_147b43312 body=243 status=ok
// SIG undefined FUN_147b43312(void)

void FUN_147b43312(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = SQRT(pdVar1[3] * pdVar1[3] +
                  pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43406 FUN_147b43406 body=229 status=ok
// SIG undefined FUN_147b43406(void)

void FUN_147b43406(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = SQRT(pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1]);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b434ec FUN_147b434ec body=239 status=ok
// SIG undefined FUN_147b434ec(void)

void FUN_147b434ec(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = pdVar1[3] * pdVar1[3] +
             pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b435dc FUN_147b435dc body=222 status=ok
// SIG undefined FUN_147b435dc(void)

void FUN_147b435dc(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = pdVar1[2] * pdVar1[2] + *pdVar1 * *pdVar1 + pdVar1[1] * pdVar1[1];
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b436da FUN_147b436da body=388 status=ok
// SIG undefined FUN_147b436da(void)

void FUN_147b436da(undefined8 param_1,longlong param_2)

{
  double *pdVar1;
  double dVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48;
  double local_40;
  double local_38;
  double local_30 [3];
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
  pdVar1 = *(double **)(param_2 + 0x38);
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
  pdVar3 = local_30;
  if (pdVar1 != (double *)0x0) {
    pdVar3 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar6 = (double)local_4c;
  dVar5 = local_38 + pdVar3[2];
  if (dVar6 <= local_38 + pdVar3[2]) {
    dVar5 = dVar6;
  }
  if (dVar5 <= -dVar6) {
    dVar5 = -dVar6;
  }
  dVar4 = local_40 + pdVar3[1];
  if (dVar6 <= local_40 + pdVar3[1]) {
    dVar4 = dVar6;
  }
  if (dVar4 <= -dVar6) {
    dVar4 = -dVar6;
  }
  dVar2 = local_48 + *pdVar3;
  if (dVar6 <= local_48 + *pdVar3) {
    dVar2 = dVar6;
  }
  if (dVar2 <= -dVar6) {
    dVar2 = -dVar6;
  }
  *pdVar3 = dVar2;
  pdVar3[1] = dVar4;
  pdVar3[2] = dVar5;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43860 FUN_147b43860 body=263 status=ok
// SIG undefined FUN_147b43860(void)

void FUN_147b43860(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined4 local_50 [6];
  undefined4 local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar4 = local_38;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = puVar5;
  }
  puVar5 = local_50;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar5 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar5 + 4);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *puVar4 = *puVar5;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  puVar4[3] = uVar3;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43990 FUN_147b43990 body=347 status=ok
// SIG undefined FUN_147b43990(void)

void FUN_147b43990(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
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
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (local_50 <= local_20) {
    local_20 = local_50;
  }
  if (local_20 <= local_38) {
    local_20 = local_38;
  }
  if (local_58 <= local_28) {
    local_28 = local_58;
  }
  if (local_28 <= local_40) {
    local_28 = local_40;
  }
  if (local_60 <= local_30) {
    local_30 = local_60;
  }
  if (local_30 <= local_48) {
    local_30 = local_48;
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43aec FUN_147b43aec body=290 status=ok
// SIG undefined FUN_147b43aec(void)

void FUN_147b43aec(undefined8 param_1,longlong param_2,double *param_3)

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
  if (dVar1 <= local_20) {
    local_20 = dVar1;
  }
  if (local_20 <= -dVar1) {
    local_20 = -dVar1;
  }
  if (dVar1 <= local_28) {
    local_28 = dVar1;
  }
  if (local_28 <= -dVar1) {
    local_28 = -dVar1;
  }
  if (dVar1 <= local_30) {
    local_30 = dVar1;
  }
  if (local_30 <= -dVar1) {
    local_30 = -dVar1;
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b43c10 FUN_147b43c10 body=442 status=ok
// SIG undefined FUN_147b43c10(void)

void FUN_147b43c10(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_50 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_58 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = SQRT(local_48 * local_48 + local_40 * local_40);
  dVar1 = DAT_14c8464e8;
  dVar2 = DAT_14c8464e0;
  if (9.99999993922529e-09 < dVar3) {
    dVar1 = local_40 * (1.0 / dVar3);
    dVar2 = local_48 * (1.0 / dVar3);
  }
  if (local_58 <= dVar3) {
    dVar3 = local_58;
  }
  if (dVar3 <= local_50) {
    dVar3 = local_50;
  }
  *param_3 = dVar3 * dVar2;
  param_3[1] = dVar1 * dVar3;
  param_3[2] = local_38;
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b43dcc FUN_147b43dcc body=378 status=ok
// SIG undefined FUN_147b43dcc(void)

void FUN_147b43dcc(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  dVar3 = DAT_14c8464e0;
  dVar1 = DAT_14c8464e8;
  dVar2 = DAT_14c8464f0;
  if ((9.999999747378752e-05 <= local_38) &&
     (dVar4 = local_20 * local_20 + local_30 * local_30 + local_28 * local_28, dVar3 = local_30,
     dVar1 = local_28, dVar2 = local_20, local_38 * local_38 < dVar4)) {
    dVar3 = local_38 * (1.0 / SQRT(dVar4));
    dVar2 = local_20 * dVar3;
    dVar1 = local_28 * dVar3;
    dVar3 = local_30 * dVar3;
  }
  *param_3 = dVar3;
  param_3[1] = dVar1;
  param_3[2] = dVar2;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b43f48 FUN_147b43f48 body=341 status=ok
// SIG undefined FUN_147b43f48(void)

void FUN_147b43f48(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  dVar2 = 0.0;
  dVar1 = 0.0;
  if (9.999999747378752e-05 <= local_38) {
    dVar3 = local_30 * local_30 + local_28 * local_28;
    dVar2 = local_30;
    dVar1 = local_28;
    if (local_38 * local_38 < dVar3) {
      dVar2 = local_38 * (1.0 / SQRT(dVar3));
      dVar1 = local_28 * dVar2;
      dVar2 = local_30 * dVar2;
    }
  }
  *param_3 = dVar2;
  param_3[1] = dVar1;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4409e FUN_147b4409e body=260 status=ok
// SIG undefined FUN_147b4409e(void)

void FUN_147b4409e(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_20 <= local_38) {
    local_20 = local_38;
  }
  if (local_28 <= local_40) {
    local_28 = local_40;
  }
  if (local_30 <= local_48) {
    local_30 = local_48;
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b441a4 FUN_147b441a4 body=260 status=ok
// SIG undefined FUN_147b441a4(void)

void FUN_147b441a4(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_38 <= local_20) {
    local_20 = local_38;
  }
  if (local_40 <= local_28) {
    local_28 = local_40;
  }
  if (local_48 <= local_30) {
    local_30 = local_48;
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b442aa FUN_147b442aa body=422 status=ok
// SIG undefined FUN_147b442aa(void)

void FUN_147b442aa(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_98 [40];
  double local_70;
  double local_68;
  double local_58;
  double local_50;
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
  dVar2 = local_58 * local_58 + local_50 * local_50;
  dVar3 = 0.0;
  if (dVar2 <= 9.99999993922529e-09) {
    dVar2 = 0.0;
  }
  else {
    dVar2 = 1.0 / SQRT(dVar2);
    local_58 = local_58 * dVar2;
    local_50 = local_50 * dVar2;
    dVar2 = dVar2 * 0.0;
  }
  dVar1 = local_70 * local_70 + local_68 * local_68;
  if (9.99999993922529e-09 < dVar1) {
    dVar3 = 1.0 / SQRT(dVar1);
    local_70 = local_70 * dVar3;
    local_68 = local_68 * dVar3;
    dVar3 = dVar3 * 0.0;
  }
  *param_3 = local_50 * local_68 + local_58 * local_70 + dVar2 * dVar3;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44452 FUN_147b44452 body=277 status=ok
// SIG undefined FUN_147b44452(void)

void FUN_147b44452(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = SQRT((local_38 - local_20) * (local_38 - local_20) +
                  (local_40 - local_28) * (local_40 - local_28) +
                  (local_48 - local_30) * (local_48 - local_30));
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44568 FUN_147b44568 body=250 status=ok
// SIG undefined FUN_147b44568(void)

void FUN_147b44568(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_30;
  double local_28;
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
  *param_3 = (local_40 - local_28) * (local_40 - local_28) +
             (local_48 - local_30) * (local_48 - local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44664 FUN_147b44664 body=270 status=ok
// SIG undefined FUN_147b44664(void)

void FUN_147b44664(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = (local_38 - local_20) * (local_38 - local_20) +
             (local_40 - local_28) * (local_40 - local_28) +
             (local_48 - local_30) * (local_48 - local_30);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b447c4 FUN_147b447c4 body=187 status=ok
// SIG undefined FUN_147b447c4(void)

void FUN_147b447c4(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = ABS(local_30);
  if (ABS(local_30) <= ABS(local_28)) {
    dVar1 = ABS(local_28);
  }
  if (dVar1 <= ABS(local_20)) {
    dVar1 = ABS(local_20);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44880 FUN_147b44880 body=187 status=ok
// SIG undefined FUN_147b44880(void)

void FUN_147b44880(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_58 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = ABS(local_30);
  if (ABS(local_28) <= ABS(local_30)) {
    dVar1 = ABS(local_28);
  }
  if (ABS(local_20) <= dVar1) {
    dVar1 = ABS(local_20);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4493c FUN_147b4493c body=190 status=ok
// SIG undefined FUN_147b4493c(void)

void FUN_147b4493c(undefined8 param_1,longlong param_2,double *param_3)

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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (1.0 / local_20) * local_30;
  param_3[1] = local_28 * (1.0 / local_20);
  param_3[2] = 1.0;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b449fc FUN_147b449fc body=248 status=ok
// SIG undefined FUN_147b449fc(void)

void FUN_147b449fc(undefined8 param_1,longlong param_2,ulonglong *param_3)

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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = ~-(ulonglong)(0.0 <= local_30) & 0xbff0000000000000 |
             -(ulonglong)(0.0 <= local_30) & 0x3ff0000000000000;
  param_3[1] = ~-(ulonglong)(0.0 <= local_28) & 0xbff0000000000000 |
               -(ulonglong)(0.0 <= local_28) & 0x3ff0000000000000;
  param_3[2] = ~-(ulonglong)(0.0 <= local_20) & 0xbff0000000000000 |
               -(ulonglong)(0.0 <= local_20) & 0x3ff0000000000000;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44af6 FUN_147b44af6 body=165 status=ok
// SIG undefined FUN_147b44af6(void)

void FUN_147b44af6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = local_20;
  local_48 = local_30;
  uStack_44 = uStack_2c;
  uStack_40 = uStack_28;
  uStack_3c = uStack_24;
  uVar1 = FUN_1467fc648();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44ba2 FUN_147b44ba2 body=159 status=ok
// SIG undefined FUN_147b44ba2(void)

void FUN_147b44ba2(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar2 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_144afe924(puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44c48 FUN_147b44c48 body=343 status=ok
// SIG undefined FUN_147b44c48(void)

void FUN_147b44c48(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  pdVar4 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar4 = local_48;
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
  if (ABS(*pdVar4) <= dVar2) {
    pdVar4 = pdVar1;
    if (pdVar1 == (double *)0x0) {
      pdVar4 = local_48;
    }
    if (ABS(pdVar4[1]) <= dVar2) {
      pdVar4 = local_48;
      if (pdVar1 != (double *)0x0) {
        pdVar4 = pdVar1;
      }
      bVar3 = ABS(pdVar4[2]) <= dVar2;
      goto LAB_147b44d12;
    }
  }
  bVar3 = false;
LAB_147b44d12:
  *(bool *)param_3 = bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b44da6 FUN_147b44da6 body=228 status=ok
// SIG undefined FUN_147b44da6(void)

void FUN_147b44da6(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  undefined1 auStack_58 [40];
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pdVar1 = local_30;
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



// FUNCTION 147b44e92 FUN_147b44e92 body=359 status=ok
// SIG undefined FUN_147b44e92(void)

void FUN_147b44e92(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double dVar2;
  bool bVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  undefined1 auStack_78 [44];
  float local_4c;
  double local_48 [3];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  pdVar6 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar6 = local_48;
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
  pdVar4 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar4 = local_48;
  }
  if (ABS(*pdVar6 - pdVar4[1]) <= dVar2) {
    pdVar5 = local_48;
    if (pdVar1 != (double *)0x0) {
      pdVar5 = pdVar1;
    }
    if (ABS(*pdVar6 - pdVar5[2]) <= dVar2) {
      bVar3 = ABS(pdVar4[1] - pdVar5[2]) <= dVar2;
      goto LAB_147b44f75;
    }
  }
  bVar3 = false;
LAB_147b44f75:
  *(bool *)param_3 = bVar3;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b45000 FUN_147b45000 body=308 status=ok
// SIG undefined FUN_147b45000(void)

void FUN_147b45000(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_68 [44];
  float local_3c;
  double local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  pdVar2 = local_38;
  if (pdVar1 != (double *)0x0) {
    pdVar2 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 =
       ABS(1.0 - (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1])) <
       (double)local_3c;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4513c FUN_147b4513c body=220 status=ok
// SIG undefined FUN_147b4513c(void)

void FUN_147b4513c(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  double *pdVar2;
  byte bVar3;
  undefined1 auStack_58 [40];
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pdVar1 = *(double **)(param_2 + 0x38);
  pdVar2 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar2 = local_30;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar3 = 0;
  if ((*pdVar2 == 0.0) && (!NAN(*pdVar2))) {
    if ((pdVar2[1] == 0.0) && (bVar3 = 0, !NAN(pdVar2[1]))) {
      pdVar2 = local_30;
      if (pdVar1 != (double *)0x0) {
        pdVar2 = pdVar1;
      }
      bVar3 = -(pdVar2[2] == 0.0) & 1;
    }
  }
  *param_3 = bVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b45242 FUN_147b45242 body=365 status=ok
// SIG undefined FUN_147b45242(void)

void FUN_147b45242(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  undefined1 auStack_98 [32];
  double local_78 [4];
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
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar4 = local_78;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar4[1];
  dVar2 = pdVar4[2];
  dVar3 = (dVar2 * local_48 + *pdVar4 * local_58 + local_50 * dVar1) - pdVar4[3];
  dVar3 = dVar3 + dVar3;
  *param_3 = local_58 - dVar3 * *pdVar4;
  param_3[1] = local_50 - dVar1 * dVar3;
  param_3[2] = local_48 - dVar2 * dVar3;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b453b0 FUN_147b453b0 body=380 status=ok
// SIG undefined FUN_147b453b0(void)

void FUN_147b453b0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  dVar3 = local_30 * local_30 + local_28 * local_28;
  if ((dVar3 != 1.0) || (NAN(dVar3))) {
    dVar1 = DAT_14c8464e0;
    dVar2 = DAT_14c8464e8;
    dVar4 = DAT_14c8464f0;
    if ((double)local_34 <= dVar3) {
      dVar2 = local_28 * (1.0 / SQRT(dVar3));
      dVar1 = local_30 * (1.0 / SQRT(dVar3));
      dVar4 = 0.0;
    }
  }
  else {
    dVar1 = local_30;
    dVar2 = local_28;
    dVar4 = (double)(-(ulonglong)(local_20 == 0.0) & (ulonglong)local_20);
  }
  *param_3 = dVar1;
  param_3[1] = dVar2;
  param_3[2] = dVar4;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4552e FUN_147b4552e body=349 status=ok
// SIG undefined FUN_147b4552e(void)

void FUN_147b4552e(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  double dVar7;
  undefined1 auStack_68 [36];
  float local_44;
  double local_40 [3];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  pdVar4 = *(double **)(param_2 + 0x38);
  pdVar5 = pdVar4;
  if (pdVar4 == (double *)0x0) {
    pdVar5 = local_40;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar5;
  pdVar6 = local_40;
  if (pdVar4 != (double *)0x0) {
    pdVar6 = pdVar4;
  }
  dVar2 = pdVar6[1];
  dVar3 = pdVar6[2];
  dVar7 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if ((double)local_44 < dVar7) {
    dVar7 = 1.0 / SQRT(dVar7);
    *pdVar5 = dVar1 * dVar7;
    pdVar6[1] = dVar2 * dVar7;
    pdVar6[2] = dVar3 * dVar7;
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4568c FUN_147b4568c body=250 status=ok
// SIG undefined FUN_147b4568c(void)

void FUN_147b4568c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double dVar5;
  undefined1 auStack_58 [40];
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pdVar4 = local_30;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar4 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  dVar3 = pdVar4[2];
  dVar5 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
  *param_3 = dVar5 * dVar1;
  param_3[1] = dVar2 * dVar5;
  param_3[2] = dVar3 * dVar5;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b457b0 FUN_147b457b0 body=292 status=ok
// SIG undefined FUN_147b457b0(void)

void FUN_147b457b0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
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
  dVar1 = local_20 * local_38 + local_30 * local_48 + local_28 * local_40;
  *param_3 = dVar1 * local_48;
  param_3[1] = local_40 * dVar1;
  param_3[2] = local_38 * dVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b458d6 FUN_147b458d6 body=278 status=ok
// SIG undefined FUN_147b458d6(void)

void FUN_147b458d6(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 auStack_58 [40];
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  pdVar3 = local_30;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar3 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar3[1];
  uVar4 = -(ulonglong)(*pdVar3 != 0.0);
  uVar5 = -(ulonglong)(dVar1 != 0.0);
  dVar2 = pdVar3[2];
  uVar6 = -(ulonglong)(dVar2 != 0.0);
  *param_3 = ~uVar4 & 0x47eff933c0000000 | (ulonglong)(1.0 / *pdVar3) & uVar4;
  param_3[1] = ~uVar5 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar1) & uVar5;
  param_3[2] = ~uVar6 & 0x47eff933c0000000 | (ulonglong)(1.0 / dVar2) & uVar6;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b45a16 FUN_147b45a16 body=422 status=ok
// SIG undefined FUN_147b45a16(void)

void FUN_147b45a16(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_38 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_40 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_48 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  puVar2 = local_30;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_38;
  puVar2[1] = local_40;
  puVar2[2] = local_48;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b45bbe FUN_147b45bbe body=402 status=ok
// SIG undefined FUN_147b45bbe(void)

void FUN_147b45bbe(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 local_58;
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
  local_50 = 0;
  FUN_144a49fc8();
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
  FUN_1467fc960(&local_68,&local_a8,&local_88,local_50);
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



// FUNCTION 147b45d52 FUN_147b45d52 body=402 status=ok
// SIG undefined FUN_147b45d52(void)

void FUN_147b45d52(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  undefined8 local_58;
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
  local_50 = 0;
  FUN_144a49fc8();
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
  FUN_1467fc714(&local_68,&local_a8,&local_88,local_50);
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



// FUNCTION 147b45ee6 FUN_147b45ee6 body=348 status=ok
// SIG undefined FUN_147b45ee6(void)

void FUN_147b45ee6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
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
  if ((local_34 != 0.0) || (NAN(local_34))) {
    dVar4 = (double)local_34;
    dVar5 = dVar4 * 0.5;
    auVar1._0_8_ = (local_20 + dVar5) / dVar4;
    auVar1._8_8_ = 0;
    auVar2 = roundpd(auVar1,auVar1,1);
    local_20 = auVar2._0_8_ * dVar4;
    auVar2._0_8_ = (local_28 + dVar5) / dVar4;
    auVar2._8_8_ = 0;
    auVar2 = roundpd(auVar2,auVar2,1);
    local_28 = auVar2._0_8_ * dVar4;
    auVar3._0_8_ = (local_30 + dVar5) / dVar4;
    auVar3._8_8_ = 0;
    auVar2 = roundpd(auVar3,auVar3,1);
    local_30 = auVar2._0_8_ * dVar4;
  }
  *param_3 = local_30;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b46044 FUN_147b46044 body=182 status=ok
// SIG undefined FUN_147b46044(void)

void FUN_147b46044(undefined8 param_1,longlong param_2,double *param_3)

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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 * 57.2957763671875;
  param_3[1] = local_28 * 57.2957763671875;
  param_3[2] = local_20 * 57.2957763671875;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b460fc FUN_147b460fc body=182 status=ok
// SIG undefined FUN_147b460fc(void)

void FUN_147b460fc(undefined8 param_1,longlong param_2,double *param_3)

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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_30 * 0.01745329238474369;
  param_3[1] = local_28 * 0.01745329238474369;
  param_3[2] = local_20 * 0.01745329238474369;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b461b4 FUN_147b461b4 body=329 status=ok
// SIG undefined FUN_147b461b4(void)

void FUN_147b461b4(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_58 / SQRT(local_58 * local_58 + local_68 * local_68 + local_60 * local_60);
  dVar2 = local_58;
  if (1.0 <= local_58) {
    dVar2 = 1.0;
  }
  dVar2 = acos((double)(-(ulonglong)(local_58 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(local_58 < -1.0) & (ulonglong)dVar2));
  dVar1 = 0.0;
  if ((((local_68 != 0.0) || (NAN(local_68))) || (local_60 != 0.0)) || (NAN(local_60))) {
    dVar1 = atan2(local_60,local_68);
  }
  *param_3 = dVar2;
  param_3[1] = dVar1;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b462fe FUN_147b462fe body=152 status=ok
// SIG undefined FUN_147b462fe(void)

void FUN_147b462fe(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fc4d4(puVar1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b463f6 FUN_147b463f6 body=1322 status=ok
// SIG undefined FUN_147b463f6(void)

void FUN_147b463f6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined1 local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  int local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_88 = DAT_14c8464f0;
  local_98 = DAT_14c8464e0;
  uStack_90 = DAT_14c8464e8;
  local_70 = DAT_14c8464f0;
  local_80 = DAT_14c8464e0;
  uStack_78 = DAT_14c8464e8;
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_a4 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a4);
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  local_b0 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  iVar2 = local_b0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e0);
  }
  local_e4 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e4);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_190 = &local_118;
  local_118 = local_e0;
  uStack_110 = uStack_d8;
  local_108 = local_d0;
  local_198 = &local_138;
  local_138 = local_c8;
  uStack_130 = uStack_c0;
  local_128 = local_b8;
  local_158 = local_58;
  uStack_150 = uStack_50;
  local_148 = local_48;
  local_168 = local_30;
  local_178 = local_40;
  uStack_170 = uStack_38;
  local_188 = local_e4 != 0;
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_1a0 = iVar2 != 0;
  local_1a8 = local_ac;
  local_1b0 = local_a8;
  local_1b8 = local_a4;
  local_1c0 = local_a0;
  local_1c8 = local_9c;
  FUN_147b46922(&local_100,&local_178,&local_158,puVar3);
  *(undefined8 *)(param_3 + 4) = local_f0;
  *param_3 = local_100;
  param_3[1] = uStack_fc;
  param_3[2] = uStack_f8;
  param_3[3] = uStack_f4;
  if ((local_28 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b46922 FUN_147b46922 body=347 status=ok
// SIG undefined FUN_147b46922(void)

undefined4 *
FUN_147b46922(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3,longlong param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,char param_10,longlong param_11,longlong param_12,
             undefined1 param_13)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = param_4 + 0x18;
  local_48 = *param_3;
  uStack_40 = param_3[1];
  local_38 = param_3[2];
  local_58 = param_13;
  local_60 = param_8;
  local_68 = param_9;
  local_70 = param_7;
  local_78 = param_6;
  local_80 = param_5;
  local_88 = lVar1;
  FUN_147b48207(param_2,&local_48,param_4,param_4 + 0x30);
  if (param_10 != '\0') {
    lVar6 = 0;
    lVar7 = 0;
    do {
      if (*(double *)(param_11 + lVar6) <= *(double *)((longlong)param_2 + lVar6)) {
        if ((*(double *)(param_12 + lVar6) < *(double *)((longlong)param_2 + lVar6)) &&
           (*(double *)((longlong)param_2 + lVar6) = *(double *)(param_12 + lVar6), lVar2 = lVar6,
           0.0 < *(double *)(lVar1 + lVar6))) goto LAB_147b46a10;
      }
      else {
        *(double *)((longlong)param_2 + lVar6) = *(double *)(param_11 + lVar6);
        if (*(double *)(lVar1 + lVar6) <= 0.0 && *(double *)(lVar1 + lVar6) != 0.0) {
          lVar2 = lVar7 * 8;
LAB_147b46a10:
          *(undefined8 *)(lVar1 + lVar2) = 0;
        }
      }
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 8;
    } while (lVar6 != 0x18);
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b46a7e FUN_147b46a7e body=514 status=ok
// SIG undefined FUN_147b46a7e(void)

void FUN_147b46a7e(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_140b81d26(&local_68,&local_a8,&local_88,local_4c);
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



// FUNCTION 147b46c82 FUN_147b46c82 body=514 status=ok
// SIG undefined FUN_147b46c82(void)

void FUN_147b46c82(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_1405a186c(&local_68,&local_a8,&local_88,local_4c);
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



// FUNCTION 147b46e86 FUN_147b46e86 body=392 status=ok
// SIG undefined FUN_147b46e86(void)

void FUN_147b46e86(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_88 [36];
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = (double)local_64;
  *param_3 = (local_60 - local_48) * dVar1 + local_48;
  param_3[1] = (local_58 - local_40) * dVar1 + local_40;
  param_3[2] = (local_50 - local_38) * dVar1 + local_38;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47010 FUN_147b47010 body=166 status=ok
// SIG undefined FUN_147b47010(void)

void FUN_147b47010(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = SQRT(local_28 * local_28 + local_20 * local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b470b8 FUN_147b470b8 body=162 status=ok
// SIG undefined FUN_147b470b8(void)

void FUN_147b470b8(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = local_28 * local_28 + local_20 * local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4715c FUN_147b4715c body=176 status=ok
// SIG undefined FUN_147b4715c(void)

void FUN_147b4715c(undefined8 param_1,longlong param_2,double *param_3)

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
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 * local_20 + local_30 * local_30 + local_28 * local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4720e FUN_147b4720e body=166 status=ok
// SIG undefined FUN_147b4720e(void)

void FUN_147b4720e(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
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
  *param_3 = SQRT(local_30 * local_30 + local_28 * local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b472b6 FUN_147b472b6 body=162 status=ok
// SIG undefined FUN_147b472b6(void)

void FUN_147b472b6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_58 [40];
  double local_30;
  double local_28;
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
  *param_3 = local_30 * local_30 + local_28 * local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4735a FUN_147b4735a body=352 status=ok
// SIG undefined FUN_147b4735a(void)

void FUN_147b4735a(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined1 auStack_48 [36];
  float local_24;
  float local_20;
  float local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0.0;
  FUN_144a64e42();
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
  fVar1 = local_24;
  if (1.0 <= local_24) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_3 = fVar1 * local_1c + (1.0 - fVar1) * local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b474bc FUN_147b474bc body=445 status=ok
// SIG undefined FUN_147b474bc(void)

void FUN_147b474bc(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_88 [36];
  float local_64;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_64 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = (double)local_64;
  if (1.0 <= dVar2) {
    dVar2 = 1.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  dVar3 = 1.0 - dVar2;
  dVar4 = local_40 * dVar2 + local_58 * dVar3;
  if (180.0 <= dVar4) {
    dVar4 = 180.0;
  }
  if (dVar4 <= -180.0) {
    dVar4 = -180.0;
  }
  dVar1 = local_48 * dVar2 + local_60 * dVar3;
  if (180.0 <= dVar1) {
    dVar1 = 180.0;
  }
  if (dVar1 <= -180.0) {
    dVar1 = -180.0;
  }
  dVar2 = dVar2 * local_38 + dVar3 * local_50;
  if (180.0 <= dVar2) {
    dVar2 = 180.0;
  }
  if (dVar2 <= -180.0) {
    dVar2 = -180.0;
  }
  *param_3 = dVar1;
  param_3[1] = dVar4;
  param_3[2] = dVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4767a FUN_147b4767a body=395 status=ok
// SIG undefined FUN_147b4767a(void)

void FUN_147b4767a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
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
  dVar1 = (double)local_4c;
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar2 = 1.0 - dVar1;
  *param_3 = local_30 * dVar1 + local_48 * dVar2;
  param_3[1] = local_28 * dVar1 + local_40 * dVar2;
  param_3[2] = dVar1 * local_20 + dVar2 * local_38;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47806 FUN_147b47806 body=386 status=ok
// SIG undefined FUN_147b47806(void)

ulonglong FUN_147b47806(undefined8 param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_48 [36];
  int local_24;
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
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  uVar2 = (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(ulonglong *)(param_2 + 0x20) = uVar2;
  uVar4 = local_24 - local_20;
  iVar3 = local_24;
  if (uVar4 != 0) {
    uVar1 = local_20 - local_1c;
    if (uVar1 == 0 || local_20 < local_1c) {
      uVar1 = local_1c - local_24;
      uVar2 = (ulonglong)uVar1;
      iVar3 = local_1c;
      if (uVar1 != 0 && local_24 <= local_1c) {
        uVar2 = (ulonglong)uVar1 / (ulonglong)uVar4;
        iVar3 = local_20 + uVar1 % uVar4;
        if (uVar1 % uVar4 == 0) {
          iVar3 = local_24;
        }
      }
    }
    else {
      uVar2 = (ulonglong)uVar1 / (ulonglong)uVar4;
      iVar3 = local_24 - uVar1 % uVar4;
      if (uVar1 % uVar4 == 0) {
        iVar3 = local_20;
      }
    }
  }
  *param_3 = iVar3;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 147b4798a FUN_147b4798a body=230 status=ok
// SIG undefined FUN_147b4798a(void)

void FUN_147b4798a(undefined8 param_1,longlong param_2,ulonglong *param_3)

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
  *param_3 = local_20 ^ local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47a72 FUN_147b47a72 body=222 status=ok
// SIG undefined FUN_147b47a72(void)

void FUN_147b47a72(undefined8 param_1,longlong param_2,uint *param_3)

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
  *param_3 = local_1c ^ local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47b52 FUN_147b47b52 body=399 status=ok
// SIG undefined FUN_147b47b52(void)

void FUN_147b47b52(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  undefined2 *local_40;
  int local_38;
  double local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
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
  if ((local_30 != 0.0) || (NAN(local_30))) {
    uVar2 = FUN_144719204(local_28);
  }
  else {
    FUN_1468fa302(param_2,&local_50);
    puVar1 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar1 = local_50;
    }
    FUN_140002266(&local_40,L"Modulo by zero detected: %f %% 0\n%s",local_28,puVar1);
    puVar1 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar1 = local_40;
    }
    FUN_1415b7ec4(puVar1,3,0);
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar2 = 0;
  }
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47ce5 FUN_147b47ce5 body=322 status=ok
// SIG undefined FUN_147b47ce5(void)

void FUN_147b47ce5(float *param_1,float param_2,float *param_3,char *param_4,undefined8 param_5,
                  float param_6,undefined4 param_7,float param_8,float param_9,float param_10,
                  char param_11)

{
  undefined1 auStack_98 [32];
  float local_78;
  float local_70;
  undefined4 local_68;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_11 != '\0') && (*param_4 == '\0')) {
    *param_1 = param_2;
  }
  local_54 = param_2;
  if (1e-08 < param_8) {
    if (1e-08 < ABS(param_10)) {
      if (*param_4 == '\0') {
        local_58 = 0.0;
      }
      else {
        local_58 = (param_9 / param_8) * (param_2 - *param_3);
      }
      param_6 = param_6 / param_10;
      if (param_6 < 0.0) {
        param_6 = sqrtf(param_6);
      }
      else {
        param_6 = SQRT(param_6);
      }
      local_70 = param_6 / 6.2831855;
      local_68 = param_7;
      local_78 = param_8;
      FUN_1401e0d16(param_1,param_5,&local_54,&local_58);
      *param_3 = local_54;
      *param_4 = '\x01';
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b47e28 FUN_147b47e28 body=991 status=ok
// SIG undefined FUN_147b47e28(void)

void FUN_147b47e28(undefined8 param_1,undefined1 param_2,float param_3,int param_4)

{
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  
  fVar6 = in_XMM0._0_4_;
  auVar1._4_12_ = in_XMM0._4_12_;
  switch(param_2) {
  case 1:
    if ((0.0 < fVar6 && 1 < param_4) && (fVar6 < 1.0)) {
      auVar1._0_4_ = fVar6 * (float)param_4;
      roundps(auVar1,ZEXT416((uint)auVar1._0_4_),1);
    }
    break;
  case 2:
    cosf(fVar6 * 1.5707964);
    break;
  case 3:
    sinf(fVar6 * 1.5707964);
    break;
  case 4:
    if (0.5 <= fVar6) {
      sinf((fVar6 + fVar6 + -1.0) * 1.5707964);
    }
    else {
      cosf((fVar6 + fVar6) * 1.5707964);
    }
    break;
  case 5:
    powf(fVar6,param_3);
    break;
  case 6:
    powf(1.0 - fVar6,param_3);
    break;
  case 7:
    if (fVar6 < 0.5) {
      powf(fVar6 + fVar6,param_3);
    }
    else {
      powf(1.0 - (fVar6 + fVar6 + -1.0),param_3);
    }
    break;
  case 8:
    if ((fVar6 != 0.0) || (NAN(fVar6))) {
      auVar3._0_4_ = (fVar6 + -1.0) * 10.0;
      auVar3._4_12_ = auVar1._4_12_;
      exp2f(auVar3._0_8_);
    }
    break;
  case 9:
    if ((fVar6 != 1.0) || (NAN(fVar6))) {
      auVar4._0_4_ = fVar6 * -10.0;
      auVar4._4_12_ = auVar1._4_12_;
      exp2f(auVar4._0_8_);
    }
    break;
  case 10:
    if (0.5 <= fVar6) {
      fVar6 = fVar6 + fVar6 + -1.0;
      if ((fVar6 != 1.0) || (NAN(fVar6))) {
        auVar5._0_4_ = fVar6 * -10.0;
        auVar5._4_12_ = auVar1._4_12_;
        exp2f(auVar5._0_8_);
      }
    }
    else {
      fVar6 = fVar6 + fVar6;
      if ((fVar6 != 0.0) || (NAN(fVar6))) {
        auVar2._0_4_ = (fVar6 + -1.0) * 10.0;
        auVar2._4_12_ = auVar1._4_12_;
        exp2f(auVar2._0_8_);
      }
    }
    break;
  case 0xb:
    fVar6 = 1.0 - fVar6 * fVar6;
    if (fVar6 < 0.0) {
      sqrtf(fVar6);
    }
    break;
  case 0xc:
    fVar6 = 1.0 - (fVar6 + -1.0) * (fVar6 + -1.0);
    if (fVar6 < 0.0) {
      sqrtf(fVar6);
    }
    break;
  case 0xd:
    if (0.5 <= fVar6) {
      fVar6 = fVar6 + fVar6 + -1.0 + -1.0;
      fVar6 = 1.0 - fVar6 * fVar6;
      if (fVar6 < 0.0) {
        sqrtf(fVar6);
      }
    }
    else {
      fVar6 = 1.0 - (fVar6 + fVar6) * (fVar6 + fVar6);
      if (fVar6 < 0.0) {
        sqrtf(fVar6);
      }
    }
  }
  return;
}



// FUNCTION 147b48207 FUN_147b48207 body=387 status=ok
// SIG undefined FUN_147b48207(void)

void FUN_147b48207(undefined4 *param_1,double *param_2,double *param_3,char *param_4,
                  undefined8 param_5,float param_6,undefined4 param_7,float param_8,float param_9,
                  float param_10,char param_11)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_a8 [32];
  float local_88;
  float local_80;
  undefined4 local_78;
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_11 != '\0') && (*param_4 == '\0')) {
    *(double *)(param_1 + 4) = param_2[2];
    uVar1 = *(undefined4 *)((longlong)param_2 + 4);
    uVar2 = *(undefined4 *)(param_2 + 1);
    uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
    *param_1 = *(undefined4 *)param_2;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  if (1e-08 < param_8) {
    if (1e-08 < ABS(param_10)) {
      local_68 = 0.0;
      local_60 = 0.0;
      local_58 = 0.0;
      if (*param_4 == '\x01') {
        local_68 = (double)(param_9 / param_8);
        local_58 = (param_2[2] - param_3[2]) * local_68;
        local_60 = (param_2[1] - param_3[1]) * local_68;
        local_68 = (*param_2 - *param_3) * local_68;
      }
      param_6 = param_6 / param_10;
      if (param_6 < 0.0) {
        param_6 = sqrtf(param_6);
      }
      else {
        param_6 = SQRT(param_6);
      }
      local_80 = param_6 / 6.2831855;
      local_78 = param_7;
      local_88 = param_8;
      FUN_147b53302(param_1,param_5,param_2,&local_68);
      param_3[2] = param_2[2];
      uVar1 = *(undefined4 *)((longlong)param_2 + 4);
      uVar2 = *(undefined4 *)(param_2 + 1);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)param_3 = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_3 + 4) = uVar1;
      *(undefined4 *)(param_3 + 1) = uVar2;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar3;
      *param_4 = '\x01';
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4838b FUN_147b4838b body=382 status=ok
// SIG undefined FUN_147b4838b(void)

void FUN_147b4838b(undefined4 *param_1,double *param_2,double *param_3,char *param_4,
                  undefined8 param_5,float param_6,undefined4 param_7,float param_8,float param_9,
                  float param_10,char param_11)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  undefined1 auStack_b8 [32];
  float local_98;
  float local_90;
  undefined4 local_88;
  undefined1 local_78 [16];
  double local_68;
  double dStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_11 != '\0') && (*param_4 == '\0')) {
    uVar2 = *(undefined4 *)param_2;
    uVar3 = *(undefined4 *)((longlong)param_2 + 4);
    uVar4 = *(undefined4 *)(param_2 + 1);
    uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
    uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar7 = *(undefined4 *)(param_2 + 3);
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_1[4] = *(undefined4 *)(param_2 + 2);
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
  }
  if (1e-08 < param_8) {
    if (1e-08 < ABS(param_10)) {
      if (*param_4 == '\x01') {
        dVar9 = (double)(param_9 / param_8);
        dVar1 = (param_2[1] - param_3[1]) * dVar9;
        local_68 = (param_2[2] - param_3[2]) * dVar9;
        dStack_60 = (param_2[3] - param_3[3]) * dVar9;
        local_78._8_4_ = SUB84(dVar1,0);
        local_78._0_8_ = (*param_2 - *param_3) * dVar9;
        local_78._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      }
      else {
        local_68 = 0.0;
        dStack_60 = 0.0;
        local_78 = ZEXT816(0);
      }
      param_6 = param_6 / param_10;
      if (param_6 < 0.0) {
        param_6 = sqrtf(param_6);
      }
      else {
        param_6 = SQRT(param_6);
      }
      local_90 = param_6 / 6.2831855;
      local_88 = param_7;
      local_98 = param_8;
      FUN_147b53e1a(param_1,param_5,param_2,local_78);
      uVar2 = *(undefined4 *)param_2;
      uVar3 = *(undefined4 *)((longlong)param_2 + 4);
      uVar4 = *(undefined4 *)(param_2 + 1);
      uVar5 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar7 = *(undefined4 *)(param_2 + 3);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_3 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_3 + 0x14) = uVar6;
      *(undefined4 *)(param_3 + 3) = uVar7;
      *(undefined4 *)((longlong)param_3 + 0x1c) = uVar8;
      *(undefined4 *)param_3 = uVar2;
      *(undefined4 *)((longlong)param_3 + 4) = uVar3;
      *(undefined4 *)(param_3 + 1) = uVar4;
      *(undefined4 *)((longlong)param_3 + 0xc) = uVar5;
      *param_4 = '\x01';
    }
  }
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4850a FUN_147b4850a body=821 status=ok
// SIG undefined FUN_147b4850a(void)

void FUN_147b4850a(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar8 = param_2[2];
  dVar6 = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar6 != 1.0) || (dVar3 = dVar1, dVar4 = dVar2, dVar5 = dVar8, NAN(dVar6))) &&
     (dVar3 = DAT_14c8464e0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar3 = dVar1 * dVar6;
    dVar4 = dVar2 * dVar6;
    dVar5 = dVar8 * dVar6;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar8 = param_3[2];
  dVar6 = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar6 != 1.0) || (dVar7 = dVar2, dVar9 = dVar8, dVar10 = dVar1, NAN(dVar6))) &&
     (dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar7 = dVar2 * dVar6;
    dVar9 = dVar8 * dVar6;
    dVar10 = dVar1 * dVar6;
  }
  if (ABS(ABS(dVar5 * dVar9 + dVar3 * dVar10 + dVar4 * dVar7) + -1.0) <= 1e-08) {
    dVar9 = (double)(-(ulonglong)(ABS(dVar5) < 0.9998999834060669) & 0x3ff0000000000000);
    dVar7 = 0.0;
    dVar10 = 0.0;
    if (0.9998999834060669 <= ABS(dVar5)) {
      dVar10 = 1.0;
    }
  }
  dVar2 = dVar3 * dVar7 - dVar10 * dVar4;
  dVar1 = dVar5 * dVar10 - dVar9 * dVar3;
  dVar6 = dVar4 * dVar9 - dVar7 * dVar5;
  dVar8 = dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1;
  if (((dVar8 != 1.0) || (dVar9 = dVar6, dVar10 = dVar2, dVar7 = dVar1, NAN(dVar8))) &&
     (dVar9 = DAT_14c8464e0, dVar10 = DAT_14c8464f0, dVar7 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar8)) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar9 = dVar6 * dVar8;
    dVar10 = dVar2 * dVar8;
    dVar7 = dVar1 * dVar8;
  }
  *param_1 = dVar7 * dVar5 - dVar4 * dVar10;
  param_1[1] = dVar10 * dVar3 - dVar5 * dVar9;
  param_1[2] = dVar9 * dVar4 - dVar3 * dVar7;
  param_1[3] = 0.0;
  param_1[4] = dVar9;
  param_1[5] = dVar7;
  param_1[6] = dVar10;
  param_1[7] = 0.0;
  param_1[8] = dVar3;
  param_1[9] = dVar4;
  param_1[10] = dVar5;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 147b4883f FUN_147b4883f body=760 status=ok
// SIG undefined FUN_147b4883f(void)

void FUN_147b4883f(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  double *pdVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  bool bVar18;
  double dVar19;
  
  uVar7 = *(uint *)(param_1 + 1);
  if ((ulonglong)uVar7 != 0) {
    uVar17 = 0;
    uVar12 = 0;
    if (1 < (int)uVar7) {
      lVar8 = *param_1;
      pdVar10 = (double *)(lVar8 + 0x20);
      uVar12 = 0;
      uVar13 = 1;
      uVar17 = 0;
      do {
        dVar2 = pdVar10[-1];
        dVar3 = *(double *)(lVar8 + (longlong)(int)uVar17 * 0x18);
        if ((dVar2 < dVar3) ||
           ((dVar2 <= dVar3 &&
            (dVar3 = *(double *)(lVar8 + (longlong)(int)uVar17 * 0x18 + 8),
            *pdVar10 <= dVar3 && dVar3 != *pdVar10)))) {
          uVar17 = (uint)uVar13;
        }
        dVar3 = *(double *)(lVar8 + (longlong)(int)uVar12 * 0x18);
        if ((dVar3 < dVar2) ||
           ((dVar3 <= dVar2 &&
            (pdVar1 = (double *)(lVar8 + (longlong)(int)uVar12 * 0x18 + 8),
            *pdVar1 <= *pdVar10 && *pdVar10 != *pdVar1)))) {
          uVar12 = (uint)uVar13;
        }
        uVar13 = uVar13 + 1;
        pdVar10 = pdVar10 + 3;
      } while (uVar7 != uVar13);
    }
    iVar11 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar11 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
      FUN_1446f48e2(param_2,iVar11);
    }
    *(uint *)(*param_2 + (longlong)iVar11 * 4) = uVar17;
    if (uVar17 != uVar12) {
      iVar11 = (int)param_2[1];
      uVar7 = *(uint *)(param_1 + 1);
      if (iVar11 <= (int)uVar7) {
        bVar18 = true;
        uVar13 = (ulonglong)uVar12;
        uVar9 = uVar17;
        do {
          uVar15 = (uint)uVar13;
          if (0 < (int)uVar7) {
            lVar8 = *param_1;
            pdVar1 = (double *)(lVar8 + (longlong)(int)uVar9 * 0x18);
            pdVar10 = (double *)(lVar8 + 8);
            uVar14 = 0;
            uVar16 = uVar13;
            do {
              if (uVar9 != uVar14 && uVar14 != uVar16) {
                dVar2 = *(double *)(lVar8 + (longlong)(int)uVar16 * 0x18);
                dVar3 = *(double *)(lVar8 + 8 + (longlong)(int)uVar16 * 0x18);
                dVar19 = *pdVar1;
                dVar4 = pdVar1[1];
                dVar5 = pdVar10[-1];
                dVar6 = *pdVar10;
                dVar19 = (dVar6 - dVar4) * (dVar2 - dVar19) - (dVar5 - dVar19) * (dVar3 - dVar4);
                if (dVar19 < -0.001) goto LAB_147b48a9b;
                if (dVar19 < 0.001) {
                  if (bVar18) {
                    if ((dVar2 < dVar5) || ((dVar2 <= dVar5 && (dVar3 < dVar6)))) {
LAB_147b48a9b:
                      uVar16 = uVar14 & 0xffffffff;
                    }
                  }
                  else if ((dVar5 < dVar2) || ((dVar5 <= dVar2 && (dVar6 < dVar3))))
                  goto LAB_147b48a9b;
                }
              }
              uVar15 = (uint)uVar16;
              uVar14 = uVar14 + 1;
              pdVar10 = pdVar10 + 3;
            } while (uVar7 != uVar14);
          }
          if (uVar15 == uVar12) {
            uVar13 = (ulonglong)uVar17;
          }
          if (uVar15 == uVar17) {
            return;
          }
          *(uint *)(param_2 + 1) = iVar11 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar11 + 1U) {
            FUN_1446f48e2(param_2,iVar11);
          }
          bVar18 = (bool)(bVar18 & uVar15 != uVar12);
          *(uint *)(*param_2 + (longlong)iVar11 * 4) = uVar15;
          iVar11 = (int)param_2[1];
          uVar7 = *(uint *)(param_1 + 1);
          uVar9 = uVar15;
        } while (iVar11 <= (int)uVar7);
      }
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) < 0) {
        FUN_14481578e(param_2,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b48b3a FUN_147b48b3a body=52 status=ok
// SIG undefined FUN_147b48b3a(void)

undefined8 * FUN_147b48b3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a924ab0;
  FUN_14006e4b8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48b74 FUN_147b48b74 body=38 status=ok
// SIG undefined FUN_147b48b74(void)

undefined8 FUN_147b48b74(undefined8 param_1,int param_2)

{
  FUN_145902a44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48b9a FUN_147b48b9a body=32 status=ok
// SIG undefined FUN_147b48b9a(void)

undefined8 FUN_147b48b9a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Static-mesh instances");
  return param_2;
}



// FUNCTION 147b48bba FUN_147b48bba body=45 status=ok
// SIG undefined FUN_147b48bba(void)

longlong FUN_147b48bba(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48be8 FUN_147b48be8 body=48 status=ok
// SIG undefined FUN_147b48be8(void)

longlong FUN_147b48be8(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48c18 FUN_147b48c18 body=48 status=ok
// SIG undefined FUN_147b48c18(void)

longlong FUN_147b48c18(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48c48 FUN_147b48c48 body=48 status=ok
// SIG undefined FUN_147b48c48(void)

longlong FUN_147b48c48(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006df30(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48c78 FUN_147b48c78 body=38 status=ok
// SIG undefined FUN_147b48c78(void)

undefined8 FUN_147b48c78(undefined8 param_1,int param_2)

{
  FUN_147b49a9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48ca2 FUN_147b48ca2 body=38 status=ok
// SIG undefined FUN_147b48ca2(void)

undefined8 FUN_147b48ca2(undefined8 param_1,int param_2)

{
  FUN_147b02884();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48cc8 FUN_147b48cc8 body=38 status=ok
// SIG undefined FUN_147b48cc8(void)

undefined8 FUN_147b48cc8(undefined8 param_1,int param_2)

{
  FUN_147b0284a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48cee FUN_147b48cee body=52 status=ok
// SIG undefined FUN_147b48cee(void)

undefined8 * FUN_147b48cee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a92ae70;
  FUN_144760d56(param_1 + 5);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48d22 FUN_147b48d22 body=38 status=ok
// SIG undefined FUN_147b48d22(void)

undefined8 FUN_147b48d22(undefined8 param_1,int param_2)

{
  FUN_147b06730();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48d48 FUN_147b48d48 body=38 status=ok
// SIG undefined FUN_147b48d48(void)

undefined8 FUN_147b48d48(undefined8 param_1,int param_2)

{
  FUN_147b0682c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48e08 FUN_147b48e08 body=59 status=ok
// SIG undefined FUN_147b48e08(void)

undefined8 FUN_147b48e08(longlong *param_1)

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



// FUNCTION 147b48eaa FUN_147b48eaa body=1 status=ok
// SIG undefined FUN_147b48eaa(void)

void FUN_147b48eaa(void)

{
  return;
}



// FUNCTION 147b48eac FUN_147b48eac body=29 status=ok
// SIG undefined FUN_147b48eac(void)

undefined8 FUN_147b48eac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b48eca FUN_147b48eca body=83 status=ok
// SIG undefined FUN_147b48eca(void)

void FUN_147b48eca(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = param_2[2];
  lVar1 = param_2[3];
  param_1[3] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  return;
}



// FUNCTION 147b48fa8 FUN_147b48fa8 body=59 status=ok
// SIG undefined FUN_147b48fa8(void)

undefined8 FUN_147b48fa8(longlong *param_1)

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



// FUNCTION 147b49076 FUN_147b49076 body=56 status=ok
// SIG undefined FUN_147b49076(void)

void FUN_147b49076(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000147b490a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b490c4 FUN_147b490c4 body=94 status=ok
// SIG undefined FUN_147b490c4(void)

undefined8 FUN_147b490c4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_1413a517a(lVar2,puVar1 + 2);
      *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(puVar1 + 8);
      lVar3 = lVar3 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b4914a FUN_147b4914a body=59 status=ok
// SIG undefined FUN_147b4914a(void)

undefined8 FUN_147b4914a(longlong *param_1)

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



// FUNCTION 147b49190 FUN_147b49190 body=64 status=ok
// SIG undefined FUN_147b49190(void)

void FUN_147b49190(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147b49294 FUN_147b49294 body=59 status=ok
// SIG undefined FUN_147b49294(void)

undefined8 FUN_147b49294(longlong *param_1)

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



// FUNCTION 147b49336 FUN_147b49336 body=45 status=ok
// SIG undefined FUN_147b49336(void)

void FUN_147b49336(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xfffffff8 | 5;
  FUN_146075062(param_2 + 2);
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 147b49364 FUN_147b49364 body=45 status=ok
// SIG undefined FUN_147b49364(void)

void FUN_147b49364(undefined8 param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xfffffff8 | 5;
  FUN_146075062(param_2 + 2);
  *(undefined1 *)(param_2 + 10) = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  return;
}



// FUNCTION 147b49392 FUN_147b49392 body=56 status=ok
// SIG undefined FUN_147b49392(void)

void FUN_147b49392(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 0x18);
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
                    /* WARNING: Could not recover jumptable at 0x000147b493bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147b493e0 FUN_147b493e0 body=110 status=ok
// SIG undefined FUN_147b493e0(void)

undefined8 FUN_147b493e0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined4 *)(lVar2 + -8) = *puVar1;
      FUN_1413a517a(lVar2,puVar1 + 2);
      *(undefined1 *)(lVar2 + 0x18) = *(undefined1 *)(puVar1 + 8);
      *(undefined4 *)(lVar2 + 0x28) = puVar1[0xc];
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(puVar1 + 10);
      lVar3 = lVar3 + 0x38;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147b49476 FUN_147b49476 body=59 status=ok
// SIG undefined FUN_147b49476(void)

undefined8 FUN_147b49476(longlong *param_1)

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



// FUNCTION 147b494bc FUN_147b494bc body=64 status=ok
// SIG undefined FUN_147b494bc(void)

void FUN_147b494bc(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x38) == '\x01') {
    plVar3 = *(longlong **)(param_2 + 0x18);
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
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147b495d8 FUN_147b495d8 body=59 status=ok
// SIG undefined FUN_147b495d8(void)

undefined8 FUN_147b495d8(longlong *param_1)

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



// FUNCTION 147b4967a FUN_147b4967a body=138 status=ok
// SIG undefined FUN_147b4967a(void)

code * FUN_147b4967a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_InstanceLightmapBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147b49704;
}



// FUNCTION 147b49704 FUN_147b49704 body=138 status=ok
// SIG undefined FUN_147b49704(void)

code * FUN_147b49704(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"VertexFetch_InstanceTransformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145e364c0;
}



// FUNCTION 147b4978e FUN_147b4978e body=138 status=ok
// SIG undefined FUN_147b4978e(void)

code * FUN_147b4978e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstancingTranslatedWorldViewOriginZero";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000036;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1457292e6;
}



// FUNCTION 147b4981c FUN_147b4981c body=38 status=ok
// SIG undefined FUN_147b4981c(void)

undefined8 FUN_147b4981c(undefined8 param_1,int param_2)

{
  FUN_1410c966c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b49842 FUN_147b49842 body=107 status=ok
// SIG undefined FUN_147b49842(void)

longlong * FUN_147b49842(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_144a80466();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 147b498b4 FUN_147b498b4 body=66 status=ok
// SIG undefined FUN_147b498b4(void)

void FUN_147b498b4(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[1];
  *(undefined4 *)(lVar1 + 8) = 0;
  if (*(int *)(lVar1 + 0xc) < 0) {
    FUN_144724de8(lVar1,0);
  }
  FUN_144a84622(*(undefined8 *)*param_1,param_1[1]);
  *(int *)param_1[2] = *(int *)param_1[2] + *(int *)(param_1[1] + 8);
  return;
}



// FUNCTION 147b498f6 FUN_147b498f6 body=38 status=ok
// SIG undefined FUN_147b498f6(void)

undefined8 FUN_147b498f6(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4991c FUN_147b4991c body=32 status=ok
// SIG undefined FUN_147b4991c(void)

undefined8 FUN_147b4991c(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FInstanceOriginBuffer");
  return param_2;
}



// FUNCTION 147b4993c FUN_147b4993c body=38 status=ok
// SIG undefined FUN_147b4993c(void)

undefined8 FUN_147b4993c(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b49962 FUN_147b49962 body=32 status=ok
// SIG undefined FUN_147b49962(void)

undefined8 FUN_147b49962(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FInstanceTransformBuffer");
  return param_2;
}



// FUNCTION 147b49982 FUN_147b49982 body=38 status=ok
// SIG undefined FUN_147b49982(void)

undefined8 FUN_147b49982(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b499a8 FUN_147b499a8 body=32 status=ok
// SIG undefined FUN_147b499a8(void)

undefined8 FUN_147b499a8(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FInstanceLightmapBuffer");
  return param_2;
}



// FUNCTION 147b499c8 FUN_147b499c8 body=38 status=ok
// SIG undefined FUN_147b499c8(void)

undefined8 FUN_147b499c8(undefined8 param_1,int param_2)

{
  FUN_144a80d50();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b499ee FUN_147b499ee body=32 status=ok
// SIG undefined FUN_147b499ee(void)

undefined8 FUN_147b499ee(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FInstanceCustomDataBuffer");
  return param_2;
}



// FUNCTION 147b49a0e FUN_147b49a0e body=38 status=ok
// SIG undefined FUN_147b49a0e(void)

undefined8 FUN_147b49a0e(undefined8 param_1,int param_2)

{
  FUN_1435356c2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b49a34 FUN_147b49a34 body=106 status=ok
// SIG undefined FUN_147b49a34(void)

undefined8 FUN_147b49a34(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar2 = FUN_144a3809e((longlong)param_2 * 0x28,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xcccccccccccccccd),0);
  uVar5 = 0x7fffffff;
  if (param_2 <= (int)(uVar2 / 0x28)) {
    uVar5 = uVar2 / 0x28 & 0xffffffff;
  }
  iVar4 = (int)uVar5;
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  else {
    uVar3 = FUN_1446f8d3c(param_1,0,uVar5,0x28,8);
  }
  *(int *)(param_1 + 0xc) = iVar4;
  return uVar3;
}



// FUNCTION 147b49a9e FUN_147b49a9e body=178 status=ok
// SIG undefined FUN_147b49a9e(void)

void FUN_147b49a9e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14a9273c0;
  plVar3 = (longlong *)param_1[0x37];
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
  puVar4 = (undefined8 *)param_1[0x32];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(puVar4 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a924ab0;
  FUN_14006e4b8(param_1 + 1);
  return;
}



// FUNCTION 147b49b50 FUN_147b49b50 body=38 status=ok
// SIG undefined FUN_147b49b50(void)

undefined8 FUN_147b49b50(undefined8 param_1,int param_2)

{
  FUN_14604a49c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b49b76 FUN_147b49b76 body=25 status=ok
// SIG undefined FUN_147b49b76(void)

byte FUN_147b49b76(void)

{
  byte bVar1;
  
  bVar1 = FUN_144a61b4f();
  return bVar1 & (DAT_14c950c28 ^ 1);
}



// FUNCTION 147b49b90 FUN_147b49b90 body=1519 status=ok
// SIG undefined FUN_147b49b90(void)

int FUN_147b49b90(longlong param_1,longlong *param_2,longlong *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  code *pcVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78 [2];
  longlong local_68;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_147b4a4a0(local_78);
  if (local_78[0] == (longlong *)0x0) {
    pcVar13 = (code *)*param_3;
    iVar3 = -1;
    if (pcVar13 != (code *)0x0) {
      plVar7 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_3[2];
      }
      local_88 = param_2;
      local_50 = param_2;
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar13)(uVar5,&local_88,&local_50);
    }
    goto LAB_147b49cc0;
  }
  lVar4 = FUN_140007850(local_78);
  if (lVar4 != 0) {
    lVar10 = FUN_1459d56dc();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      pcVar13 = (code *)*param_3;
      iVar3 = -1;
      if (pcVar13 != (code *)0x0) {
        local_50 = *(longlong **)(lVar4 + 0x38);
        plVar7 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar7 = (longlong *)param_3[2];
        }
        local_88 = param_2;
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar13)(uVar5,&local_88,&local_50);
      }
      goto LAB_147b49cc0;
    }
  }
  cVar2 = (*(code *)PTR_FUN_14c75b118)();
  if (cVar2 == '\0') {
    lVar4 = FUN_140081d40(local_78,0);
    if (lVar4 == 0) {
LAB_147b49c80:
      pcVar13 = (code *)*param_3;
      if (pcVar13 != (code *)0x0) {
        local_50 = (longlong *)0x0;
LAB_147b49c8a:
        plVar7 = param_3 + 4;
        if ((longlong *)param_3[2] != (longlong *)0x0) {
          plVar7 = (longlong *)param_3[2];
        }
        local_88 = param_2;
        uVar5 = (**(code **)(*plVar7 + 8))();
        (*pcVar13)(uVar5,&local_88,&local_50);
      }
    }
    else {
      lVar10 = FUN_1459d56dc();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) goto LAB_147b49c80;
      pcVar13 = (code *)*param_3;
      if (pcVar13 != (code *)0x0) {
        local_50 = *(longlong **)(lVar4 + 0x38);
        goto LAB_147b49c8a;
      }
    }
    iVar3 = -1;
    goto LAB_147b49cc0;
  }
  local_50 = local_78[0];
  if (local_78[0] == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    uStack_80 = 0;
LAB_147b49d25:
    plVar7 = (longlong *)&DAT_149dfb77a;
  }
  else {
    FUN_1400021e4(&local_50,&local_88);
    plVar7 = local_88;
    if ((int)uStack_80 == 0) goto LAB_147b49d25;
  }
  FUN_1446f470e(&local_90,plVar7,1);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x68);
  EnterCriticalSection(lpCriticalSection);
  plVar7 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar1 = (uint)((ulonglong)local_90 >> 0x10);
    uVar8 = (uint)local_90 & 0xffff;
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x60) - 1U &
                             (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar8) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *plVar7 + (longlong)iVar3 * 0x30;
        if (*(longlong *)(*plVar7 + (longlong)iVar3 * 0x30) == local_90) {
          if ((lVar4 != 0) && ((int *)(lVar4 + 8) != (int *)0x0)) {
            if (*param_3 != 0) {
              iVar3 = *(int *)(lVar4 + 0x20);
              *(uint *)(lVar4 + 0x20) = iVar3 + 1U;
              if (*(uint *)(lVar4 + 0x24) < iVar3 + 1U) {
                FUN_147b4a88a((longlong *)(lVar4 + 0x18),iVar3);
              }
              lVar10 = *(longlong *)(lVar4 + 0x18);
              lVar11 = (longlong)iVar3 * 0x40;
              lVar12 = *param_3;
              *(longlong *)(lVar10 + lVar11) = lVar12;
              *(undefined8 *)(lVar10 + 0x10 + lVar11) = 0;
              if (lVar12 != 0) {
                plVar7 = param_3 + 4;
                if ((longlong *)param_3[2] != (longlong *)0x0) {
                  plVar7 = (longlong *)param_3[2];
                }
                (**(code **)*plVar7)(plVar7,lVar10 + lVar11 + 0x10);
              }
            }
            iVar3 = *(int *)(lVar4 + 8);
            goto LAB_147b4a00f;
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x28);
      } while (iVar3 != -1);
    }
  }
  local_50 = &local_90;
  FUN_147b4a910(plVar7,&local_58);
  lVar4 = *plVar7;
  *(longlong **)(lVar4 + 0xc + (longlong)(int)local_58 * 0x30) = param_2;
  if (*param_3 != 0) {
    lVar4 = lVar4 + (longlong)(int)local_58 * 0x30;
    iVar3 = *(int *)(lVar4 + 0x20);
    *(uint *)(lVar4 + 0x20) = iVar3 + 1U;
    if (*(uint *)(lVar4 + 0x24) < iVar3 + 1U) {
      FUN_147b4a88a((longlong *)(lVar4 + 0x18),iVar3);
    }
    lVar4 = *(longlong *)(lVar4 + 0x18);
    lVar12 = (longlong)iVar3 * 0x40;
    lVar10 = *param_3;
    *(longlong *)(lVar4 + lVar12) = lVar10;
    *(undefined8 *)(lVar4 + 0x10 + lVar12) = 0;
    if (lVar10 != 0) {
      plVar6 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar6 = (longlong *)param_3[2];
      }
      (**(code **)*plVar6)(plVar6,lVar4 + lVar12 + 0x10);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
  local_a0 = (undefined8 *)0x0;
  local_98 = 0;
  FUN_1446efa72(&local_a0,0,3,0x10);
  local_98 = 3;
  *local_a0 = &PTR_LAB_149e665f0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_a0[2] = lVar10;
  *local_a0 = &PTR_FUN_14a973920;
  local_a0[3] = param_1;
  local_a0[4] = FUN_147b4a656;
  *(undefined4 *)(local_a0 + 5) = 0;
  local_a8 = 0xffffffff;
  iVar3 = FUN_1427d6730(&local_88,&local_a0,0,0);
  if (iVar3 == -1) {
    pcVar13 = (code *)*param_3;
    iVar3 = -1;
    if (pcVar13 != (code *)0x0) {
      local_58 = 0;
      plVar7 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_3[2];
      }
      local_50 = param_2;
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar13)(uVar5,&local_50,&local_58);
    }
  }
  else {
    EnterCriticalSection(lpCriticalSection);
    if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
      uVar1 = (uint)((ulonglong)local_90 >> 0x10);
      uVar8 = (uint)local_90 & 0xffff;
      lVar4 = param_1 + 0x50;
      if (*(longlong *)(param_1 + 0x58) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x58);
      }
      iVar9 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x60) - 1U &
                               (int)((ulonglong)local_90 >> 0x20) + ((uint)local_90 << 0x10 | uVar8)
                               + (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        do {
          lVar4 = *plVar7 + (longlong)iVar9 * 0x30;
          if (*(longlong *)(*plVar7 + (longlong)iVar9 * 0x30) == local_90) {
            if ((int *)(lVar4 + 8) != (int *)0x0 && lVar4 != 0) {
              *(int *)(lVar4 + 8) = iVar3;
            }
            break;
          }
          iVar9 = *(int *)(lVar4 + 0x28);
        } while (iVar9 != -1);
      }
    }
LAB_147b4a00f:
    LeaveCriticalSection(lpCriticalSection);
  }
  if (local_88 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_147b49cc0:
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar3;
}



// FUNCTION 147b4a180 FUN_147b4a180 body=216 status=ok
// SIG undefined FUN_147b4a180(void)

void FUN_147b4a180(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147b4a4a0(local_38,*param_2);
  if (local_38[0] == 0) goto LAB_147b4a1ce;
  lVar1 = FUN_140007850(local_38);
  if (lVar1 == 0) {
LAB_147b4a1bd:
    lVar1 = FUN_140081d40(local_38,0);
    if (lVar1 == 0) goto LAB_147b4a1ce;
    lVar2 = FUN_1459d56dc();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        != lVar2 + 0x30)) goto LAB_147b4a1ce;
  }
  else {
    lVar2 = FUN_1459d56dc();
    if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) || ((*(uint *)(lVar1 + 8) & 0x1400) != 0)) goto LAB_147b4a1bd;
  }
  *param_2 = *(undefined8 *)(lVar1 + 0x38);
LAB_147b4a1ce:
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4a25a FUN_147b4a25a body=149 status=ok
// SIG undefined FUN_147b4a25a(void)

void FUN_147b4a25a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147b4a4a0(local_38,*param_2);
  if (local_38[0] != 0) {
    lVar1 = FUN_140007850(local_38);
    if (lVar1 != 0) {
      lVar2 = FUN_1459d56dc();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        *param_2 = *(undefined8 *)(lVar1 + 0x38);
      }
    }
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4a2f0 FUN_147b4a2f0 body=244 status=ok
// SIG undefined FUN_147b4a2f0(void)

void FUN_147b4a2f0(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined8 local_58;
  longlong local_50 [2];
  longlong local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_146067e0c();
  local_30 = FUN_1467cec04(uVar1,*param_2);
  FUN_147b4a4a0(local_50,*param_2);
  (**(code **)(**(longlong **)(*param_3 + 8) + 0x150))(*(longlong **)(*param_3 + 8),&local_30);
  if (local_50[0] != 0) {
    (**(code **)(**(longlong **)(*param_3 + 8) + 0x128))(*(longlong **)(*param_3 + 8),local_50);
    FUN_14475cc44(local_50,&local_68);
    puVar2 = local_68;
    if (local_60 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1446f470e(&local_58,puVar2,1);
    *param_2 = local_58;
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4a3e6 FUN_147b4a3e6 body=86 status=ok
// SIG undefined FUN_147b4a3e6(void)

bool FUN_147b4a3e6(void)

{
  undefined1 auStack_58 [32];
  longlong local_38 [2];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147b4a4a0(local_38);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_38[0] != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4a450 FUN_147b4a450 body=45 status=ok
// SIG undefined FUN_147b4a450(void)

longlong FUN_147b4a450(longlong param_1,int param_2)

{
  param_1 = param_1 + -8;
  FUN_14604a49c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4a47e FUN_147b4a47e body=32 status=ok
// SIG undefined FUN_147b4a47e(void)

undefined8 FUN_147b4a47e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"FStringTableEngineBridge");
  return param_2;
}



// FUNCTION 147b4a4a0 FUN_147b4a4a0 body=437 status=ok
// SIG undefined FUN_147b4a4a0(void)

undefined8 * FUN_147b4a4a0(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined8 local_40;
  void *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_40 = param_2;
  FUN_1400021e4();
  pvVar1 = local_50;
  local_60 = (void *)0x0;
  lVar7 = (longlong)local_48;
  local_58 = local_48;
  if (lVar7 == 0) {
    local_54 = 0;
    iVar8 = 0;
  }
  else {
    FUN_1446dd670(&local_60,local_48,0);
    memcpy(local_60,pvVar1,lVar7 * 2);
    if ((longlong)local_58 == 0) {
      iVar8 = 0;
    }
    else {
      lVar7 = (longlong)local_58 * 2;
      lVar4 = 0;
      do {
        iVar8 = local_58;
        if (*(short *)((longlong)local_60 + lVar4 * 2) == 0x2e) {
          uVar3 = (uint)lVar4;
          if (uVar3 != 0xffffffff) {
            uVar6 = local_58 - 1;
            if (local_58 == 0) {
              uVar6 = 0;
            }
            if ((int)uVar6 <= (int)uVar3) {
              uVar3 = uVar6;
            }
            uVar5 = (ulonglong)uVar3;
            if ((int)uVar3 < 1) {
              uVar5 = 0;
            }
            uVar6 = uVar6 - (int)uVar5;
            if (0 < (int)uVar6) {
              iVar8 = local_58 - (uVar6 + (int)uVar5);
              if (iVar8 != 0) {
                pvVar1 = (void *)((longlong)local_60 + uVar5 * 2);
                memmove(pvVar1,(void *)((longlong)pvVar1 + (ulonglong)uVar6 * 2),(longlong)iVar8 * 2
                       );
              }
              local_58 = local_58 - uVar6;
              iVar8 = local_58;
            }
          }
          break;
        }
        lVar4 = lVar4 + 1;
        lVar7 = lVar7 + -2;
      } while (lVar7 != 0);
    }
  }
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  local_68 = iVar8 + -1;
  if (iVar8 == 0) {
    local_68 = 0;
  }
  local_70 = local_60;
  cVar2 = FUN_14022f3b8(&local_70,1,0);
  if ((cVar2 != '\0') && (cVar2 = FUN_14166d522(&local_60,0,1), cVar2 != '\0')) {
    local_38 = local_50;
    local_30 = local_48 + -1;
    if (local_48 == 0) {
      local_30 = 0;
    }
    FUN_14475bf92(param_1);
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4a656 FUN_147b4a656 body=562 status=ok
// SIG undefined FUN_147b4a656(void)

void FUN_147b4a656(longlong param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined1 auStack_b8 [40];
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  ulonglong local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = 0xffffffff;
  uStack_54 = 0;
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  plVar6 = (longlong *)(param_1 + 0x18);
  FUN_147b4b06c(plVar6,&local_68,*param_2);
  puVar7 = local_68;
  if ((longlong)(int)local_68 != -1) {
    lVar3 = (longlong)(int)local_68 * 0x30 + *plVar6;
    local_50 = *(undefined4 *)(lVar3 + 0x10);
    uVar2 = *(undefined8 *)(lVar3 + 8);
    local_58 = (undefined4)uVar2;
    uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    FUN_147b4b0f4();
    FUN_147b4b144(plVar6,(ulonglong)puVar7 & 0xffffffff);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x68));
  if (param_4 == 1) {
    local_80 = *(undefined2 **)(param_3 + 0x18);
    FUN_1400021e4(&local_80,&local_68);
    FUN_141090af6(&local_90,&local_68);
    puVar7 = &DAT_149dfb77a;
    if (local_88 != 0) {
      puVar7 = local_90;
    }
    puVar9 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar9 = local_68;
    }
    FUN_140002266(&local_80,L"%s.%s",puVar9,puVar7);
    puVar7 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar7 = local_80;
    }
    FUN_1446f470e(&local_70,puVar7,1);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    uVar4 = local_70 & 0xffffffff00000000;
    uVar10 = local_70 & 0xffffffff;
  }
  else {
    uVar4 = 0;
    uVar10 = 0;
  }
  uVar5 = 0;
  if ((longlong)(int)uStack_40 != 0) {
    puVar11 = local_48 + (longlong)(int)uStack_40 * 8;
    puVar8 = local_48;
    do {
      local_68 = (undefined2 *)CONCAT44(local_50,uStack_54);
      pcVar1 = (code *)*puVar8;
      plVar6 = puVar8 + 4;
      if ((longlong *)puVar8[2] != (longlong *)0x0) {
        plVar6 = (longlong *)puVar8[2];
      }
      local_80 = (undefined2 *)(uVar10 | uVar4);
      uVar2 = (**(code **)(*plVar6 + 8))();
      (*pcVar1)(uVar2,&local_68,&local_80);
      puVar8 = puVar8 + 8;
    } while (puVar8 != puVar11);
    uVar5 = (int)uStack_40;
  }
  FUN_147b4ac21(local_48,uVar5);
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4a88a FUN_147b4a88a body=132 status=ok
// SIG undefined FUN_147b4a88a(void)

void FUN_147b4a88a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4a910 FUN_147b4a910 body=359 status=ok
// SIG undefined FUN_147b4a910(void)

undefined4 * FUN_147b4a910(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147b4aa78(param_1,local_48);
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = 0xffffffff;
  *(undefined4 *)(local_40 + 2) = 0;
  local_40[3] = 0;
  local_40[4] = 0;
  FUN_147b4ac21(0,0);
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_147b4ab66(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x2c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
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
      FUN_147b4acd6(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b4aa78 FUN_147b4aa78 body=238 status=ok
// SIG undefined FUN_147b4aa78(void)

int * FUN_147b4aa78(longlong *param_1,int *param_2)

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
      FUN_140044672(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x30);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x30) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 147b4ab66 FUN_147b4ab66 body=187 status=ok
// SIG undefined FUN_147b4ab66(void)

undefined8 FUN_147b4ab66(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x30) == *param_3) {
          FUN_147b4ac21(*(undefined8 *)(puVar1 + 6),puVar1[8]);
          if (*(longlong *)(puVar1 + 6) != 0) {
            FUN_1400020a8();
          }
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_147b4ac5c(param_1,*param_4);
          *param_4 = iVar11;
          return 1;
        }
        iVar11 = puVar1[10];
      } while (iVar11 != -1);
    }
  }
  return 0;
}



// FUNCTION 147b4ac21 FUN_147b4ac21 body=58 status=ok
// SIG undefined FUN_147b4ac21(void)

void FUN_147b4ac21(longlong param_1,int param_2)

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
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147b4ac5c FUN_147b4ac5c body=122 status=ok
// SIG undefined FUN_147b4ac5c(void)

void FUN_147b4ac5c(longlong *param_1,int param_2)

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



// FUNCTION 147b4acd6 FUN_147b4acd6 body=477 status=ok
// SIG undefined FUN_147b4acd6(void)

void FUN_147b4acd6(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x30;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x2c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x28 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4aeb4 FUN_147b4aeb4 body=29 status=ok
// SIG undefined FUN_147b4aeb4(void)

undefined8 FUN_147b4aeb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4aeee FUN_147b4aeee body=101 status=ok
// SIG undefined FUN_147b4aeee(void)

void FUN_147b4aeee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a973920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147b4af54 FUN_147b4af54 body=101 status=ok
// SIG undefined FUN_147b4af54(void)

void FUN_147b4af54(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e665f0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a973920;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 147b4afba FUN_147b4afba body=134 status=ok
// SIG undefined FUN_147b4afba(void)

void FUN_147b4afba(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_149e665f0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a973920;
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
                    /* WARNING: Could not recover jumptable at 0x000147b4b031. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147b4b052 FUN_147b4b052 body=25 status=ok
// SIG undefined FUN_147b4b052(void)

undefined8 FUN_147b4b052(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 147b4b06c FUN_147b4b06c body=136 status=ok
// SIG undefined FUN_147b4b06c(void)

void FUN_147b4b06c(longlong *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)(ushort)((ulonglong)param_3 >> 0x10);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)param_3 >> 0x20) +
                    ((int)param_3 << 0x10 | (uint)(ushort)param_3) + (uVar2 << 0x13 | uVar2) +
                    (uint)(ushort)((ushort)param_3 >> 4)) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x30) == param_3) goto LAB_147b4b07c;
        iVar1 = *(int *)((longlong)iVar1 * 0x30 + *param_1 + 0x28);
      } while (iVar1 != -1);
    }
  }
  iVar1 = -1;
LAB_147b4b07c:
  *param_2 = iVar1;
  return;
}



// FUNCTION 147b4b0f4 FUN_147b4b0f4 body=80 status=ok
// SIG undefined FUN_147b4b0f4(void)

longlong * FUN_147b4b0f4(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_147b4ac21(*param_1,(int)param_1[1]);
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



// FUNCTION 147b4b144 FUN_147b4b144 body=95 status=ok
// SIG undefined FUN_147b4b144(void)

void FUN_147b4b144(longlong *param_1,int param_2)

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
  FUN_147b4b1a4();
  return;
}



// FUNCTION 147b4b1a4 FUN_147b4b1a4 body=77 status=ok
// SIG undefined FUN_147b4b1a4(void)

void FUN_147b4b1a4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x30;
  FUN_147b4ac21(*(undefined8 *)(lVar1 + 0x18 + lVar2),*(undefined4 *)(lVar1 + 0x20 + lVar2));
  if (*(longlong *)(lVar1 + 0x18 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_147b4ac5c(param_1,param_2);
  return;
}



// FUNCTION 147b4b1f2 FUN_147b4b1f2 body=132 status=ok
// SIG undefined FUN_147b4b1f2(void)

void FUN_147b4b1f2(longlong param_1,int param_2)

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



// FUNCTION 147b4b278 FUN_147b4b278 body=215 status=ok
// SIG undefined FUN_147b4b278(void)

void FUN_147b4b278(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar6 = 0;
    bVar5 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        lVar2 = *param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
          iVar3 = (int)param_1[1];
        }
        if (*(longlong *)(lVar1 + lVar6 * 8) != lVar2) break;
        iVar4 = iVar3 + ~(uint)lVar6;
        if (iVar4 != 0) {
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*param_1 + lVar6 * 8),(void *)(*param_1 + (longlong)(iVar3 - iVar4) * 8),
                  (longlong)iVar4 << 3);
          iVar3 = (int)param_1[1];
        }
        iVar3 = iVar3 + -1;
        *(int *)(param_1 + 1) = iVar3;
        bVar5 = true;
        if (iVar3 <= lVar6) goto LAB_147b4b337;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < iVar3);
    if (bVar5) {
LAB_147b4b337:
      FUN_147b4b350(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 147b4b350 FUN_147b4b350 body=62 status=ok
// SIG undefined FUN_147b4b350(void)

void FUN_147b4b350(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4b38e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 147b4b38e FUN_147b4b38e body=93 status=ok
// SIG undefined FUN_147b4b38e(void)

ulonglong FUN_147b4b38e(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 147b4b448 FUN_147b4b448 body=54 status=ok
// SIG undefined FUN_147b4b448(void)

undefined1 FUN_147b4b448(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b4b560(param_2,param_3);
    param_3 = param_3 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return 1;
}



// FUNCTION 147b4b4a6 FUN_147b4b4a6 body=59 status=ok
// SIG undefined FUN_147b4b4a6(void)

undefined8 FUN_147b4b4a6(longlong *param_1)

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



// FUNCTION 147b4b4ec FUN_147b4b4ec body=38 status=ok
// SIG undefined FUN_147b4b4ec(void)

void FUN_147b4b4ec(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x38) == '\x01') {
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x38) = 0;
  }
  return;
}



// FUNCTION 147b4b560 FUN_147b4b560 body=89 status=ok
// SIG undefined FUN_147b4b560(void)

longlong * FUN_147b4b560(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *param_2;
    }
  }
  *param_1 = lVar1;
  *(int *)(param_1 + 1) = (int)param_2[1];
  FUN_144a787a6(param_1 + 2,param_2 + 2);
  lVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar1;
  param_1[6] = param_2[6];
  return param_1;
}



// FUNCTION 147b4b5f8 FUN_147b4b5f8 body=75 status=ok
// SIG undefined FUN_147b4b5f8(void)

undefined1 FUN_147b4b5f8(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_144a787a6(param_2,param_3);
    FUN_147b4b722(param_2 + 0x10,param_3 + 0x10);
    uVar1 = *(undefined4 *)(param_3 + 0x24);
    uVar2 = *(undefined4 *)(param_3 + 0x28);
    uVar3 = *(undefined4 *)(param_3 + 0x2c);
    *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_3 + 0x20);
    *(undefined4 *)(param_2 + 0x24) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = uVar2;
    *(undefined4 *)(param_2 + 0x2c) = uVar3;
    param_2 = param_2 + 0x30;
    param_3 = param_3 + 0x30;
  }
  return 1;
}



// FUNCTION 147b4b66c FUN_147b4b66c body=59 status=ok
// SIG undefined FUN_147b4b66c(void)

undefined8 FUN_147b4b66c(longlong *param_1)

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



// FUNCTION 147b4b6b2 FUN_147b4b6b2 body=34 status=ok
// SIG undefined FUN_147b4b6b2(void)

void FUN_147b4b6b2(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_145c1ff90(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147b4b722 FUN_147b4b722 body=95 status=ok
// SIG undefined FUN_147b4b722(void)

undefined8 * FUN_147b4b722(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145c1ffcc(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147b4b782(param_1,iVar1);
      FUN_147b4b7f1(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147b4b782 FUN_147b4b782 body=111 status=ok
// SIG undefined FUN_147b4b782(void)

void FUN_147b4b782(longlong param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x38,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147b4b7f1 FUN_147b4b7f1 body=52 status=ok
// SIG undefined FUN_147b4b7f1(void)

void FUN_147b4b7f1(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_147b4b826(param_1,param_2);
    param_1 = param_1 + 0x38;
    param_2 = param_2 + 0x38;
  }
  return;
}



// FUNCTION 147b4b826 FUN_147b4b826 body=150 status=ok
// SIG undefined FUN_147b4b826(void)

longlong * FUN_147b4b826(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  _Src = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],_Src,(longlong)iVar1 * 2);
  }
  param_1[6] = param_2[6];
  lVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = lVar2;
  return param_1;
}



// FUNCTION 147b4b942 FUN_147b4b942 body=59 status=ok
// SIG undefined FUN_147b4b942(void)

undefined8 FUN_147b4b942(longlong *param_1)

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



// FUNCTION 147b4ba18 FUN_147b4ba18 body=54 status=ok
// SIG undefined FUN_147b4ba18(void)

undefined1 FUN_147b4ba18(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14054c6c4(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147b4ba76 FUN_147b4ba76 body=59 status=ok
// SIG undefined FUN_147b4ba76(void)

undefined8 FUN_147b4ba76(longlong *param_1)

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



// FUNCTION 147b4babc FUN_147b4babc body=37 status=ok
// SIG undefined FUN_147b4babc(void)

void FUN_147b4babc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 147b4bb42 FUN_147b4bb42 body=44 status=ok
// SIG undefined FUN_147b4bb42(void)

void FUN_147b4bb42(undefined8 param_1,longlong *param_2)

{
  FUN_147b4bc7e(*param_2,(int)param_2[1]);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147b4bb84 FUN_147b4bb84 body=54 status=ok
// SIG undefined FUN_147b4bb84(void)

undefined1 FUN_147b4bb84(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b4bcaa(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 147b4bbe2 FUN_147b4bbe2 body=59 status=ok
// SIG undefined FUN_147b4bbe2(void)

undefined8 FUN_147b4bbe2(longlong *param_1)

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



// FUNCTION 147b4bc7e FUN_147b4bc7e body=43 status=ok
// SIG undefined FUN_147b4bc7e(void)

void FUN_147b4bc7e(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 147b4bcaa FUN_147b4bcaa body=95 status=ok
// SIG undefined FUN_147b4bcaa(void)

undefined8 * FUN_147b4bcaa(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_147b4bc7e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147b4bd0a(param_1,iVar1);
      FUN_147b4bd6c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147b4bd0a FUN_147b4bd0a body=98 status=ok
// SIG undefined FUN_147b4bd0a(void)

void FUN_147b4bd0a(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147b4bd6c FUN_147b4bd6c body=119 status=ok
// SIG undefined FUN_147b4bd6c(void)

void FUN_147b4bd6c(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  if (param_3 != 0) {
    piVar2 = (int *)(param_2 + 8);
    do {
      *param_1 = 0;
      iVar1 = *piVar2;
      _Src = *(void **)(piVar2 + -2);
      *(int *)(param_1 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      }
      else {
        FUN_144a06ca8(param_1,iVar1,0);
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 2);
      }
      param_1 = param_1 + 2;
      piVar2 = piVar2 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147b4bde4 FUN_147b4bde4 body=50 status=ok
// SIG undefined FUN_147b4bde4(void)

void FUN_147b4bde4(longlong *param_1)

{
  if ((char)param_1[2] == '\x01') {
    FUN_147b4bc7e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  return;
}



// FUNCTION 147b4be5e FUN_147b4be5e body=59 status=ok
// SIG undefined FUN_147b4be5e(void)

undefined8 FUN_147b4be5e(longlong *param_1)

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



// FUNCTION 147b4bf34 FUN_147b4bf34 body=63 status=ok
// SIG undefined FUN_147b4bf34(void)

undefined1 FUN_147b4bf34(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1478763c0(param_2,param_3);
    param_3 = param_3 + 0x1e0;
    param_2 = param_2 + 0x1e0;
  }
  return 1;
}



// FUNCTION 147b4bf9c FUN_147b4bf9c body=81 status=ok
// SIG undefined FUN_147b4bf9c(void)

int FUN_147b4bf9c(longlong *param_1,longlong *param_2)

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



// FUNCTION 147b4bffe FUN_147b4bffe body=49 status=ok
// SIG undefined FUN_147b4bffe(void)

void FUN_147b4bffe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x3c) == '\x01') {
    *param_2 = &PTR_FUN_14a92ae70;
    FUN_144760d56(param_2 + 5);
    *(undefined1 *)(param_2 + 0x3c) = 0;
  }
  return;
}



// FUNCTION 147b4c0b4 FUN_147b4c0b4 body=63 status=ok
// SIG undefined FUN_147b4c0b4(void)

undefined1 FUN_147b4c0b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147876328(param_2,param_3);
    param_3 = param_3 + 0x210;
    param_2 = param_2 + 0x210;
  }
  return 1;
}



// FUNCTION 147b4c11c FUN_147b4c11c body=81 status=ok
// SIG undefined FUN_147b4c11c(void)

int FUN_147b4c11c(longlong *param_1,longlong *param_2)

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



// FUNCTION 147b4c17e FUN_147b4c17e body=40 status=ok
// SIG undefined FUN_147b4c17e(void)

void FUN_147b4c17e(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x210) == '\x01') {
    FUN_147b06730(param_2);
    *(undefined1 *)(param_2 + 0x210) = 0;
  }
  return;
}



// FUNCTION 147b4c22a FUN_147b4c22a body=63 status=ok
// SIG undefined FUN_147b4c22a(void)

undefined1 FUN_147b4c22a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147b4c36a(param_2,param_3);
    param_3 = param_3 + 0x250;
    param_2 = param_2 + 0x250;
  }
  return 1;
}



// FUNCTION 147b4c292 FUN_147b4c292 body=81 status=ok
// SIG undefined FUN_147b4c292(void)

int FUN_147b4c292(longlong *param_1,longlong *param_2)

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



// FUNCTION 147b4c2f4 FUN_147b4c2f4 body=40 status=ok
// SIG undefined FUN_147b4c2f4(void)

void FUN_147b4c2f4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x250) == '\x01') {
    FUN_147b0682c(param_2);
    *(undefined1 *)(param_2 + 0x250) = 0;
  }
  return;
}



// FUNCTION 147b4c36a FUN_147b4c36a body=154 status=ok
// SIG undefined FUN_147b4c36a(void)

longlong FUN_147b4c36a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1478763c0();
  *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(param_2 + 0x1e0);
  uVar1 = *(undefined4 *)(param_2 + 0x1ec);
  uVar2 = *(undefined4 *)(param_2 + 0x1f0);
  uVar3 = *(undefined4 *)(param_2 + 500);
  *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_2 + 0x1e8);
  *(undefined4 *)(param_1 + 0x1ec) = uVar1;
  *(undefined4 *)(param_1 + 0x1f0) = uVar2;
  *(undefined4 *)(param_1 + 500) = uVar3;
  FUN_144a787a6(param_1 + 0x1f8,param_2 + 0x1f8);
  FUN_147b4c404(param_1 + 0x208,param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x218) = *(undefined8 *)(param_2 + 0x218);
  uVar1 = *(undefined4 *)(param_2 + 0x224);
  uVar2 = *(undefined4 *)(param_2 + 0x228);
  uVar3 = *(undefined4 *)(param_2 + 0x22c);
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_2 + 0x220);
  *(undefined4 *)(param_1 + 0x224) = uVar1;
  *(undefined4 *)(param_1 + 0x228) = uVar2;
  *(undefined4 *)(param_1 + 0x22c) = uVar3;
  FUN_144a787a6(param_1 + 0x230,param_2 + 0x230);
  FUN_147b4c462(param_1 + 0x240,param_2 + 0x240);
  return param_1;
}



// FUNCTION 147b4c404 FUN_147b4c404 body=93 status=ok
// SIG undefined FUN_147b4c404(void)

undefined8 * FUN_147b4c404(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1406c2f92(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147b4c4c0(param_1,iVar1);
      FUN_147b4c533(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147b4c462 FUN_147b4c462 body=93 status=ok
// SIG undefined FUN_147b4c462(void)

undefined8 * FUN_147b4c462(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14063df0f(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147b4c5ba(param_1,iVar1);
      FUN_147b4c62d(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147b4c4c0 FUN_147b4c4c0 body=115 status=ok
// SIG undefined FUN_147b4c4c0(void)

void FUN_147b4c4c0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147b4c533 FUN_147b4c533 body=134 status=ok
// SIG undefined FUN_147b4c533(void)

void FUN_147b4c533(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147b4c5ba FUN_147b4c5ba body=115 status=ok
// SIG undefined FUN_147b4c5ba(void)

void FUN_147b4c5ba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    iVar2 = (int)(uVar1 / 0x28);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x28,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147b4c62d FUN_147b4c62d body=134 status=ok
// SIG undefined FUN_147b4c62d(void)

void FUN_147b4c62d(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 147b4c6b4 FUN_147b4c6b4 body=57 status=ok
// SIG undefined FUN_147b4c6b4(void)

void FUN_147b4c6b4(longlong param_1,longlong *param_2)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_147b4c76c();
  }
  else {
    FUN_147b4c6ee(*(undefined8 *)(param_1 + 8),(int)param_2[1],
                  *(undefined4 *)((longlong)param_2 + 0xc),*(undefined4 *)(*param_2 + 0x10),
                  *(undefined4 *)(*param_2 + 0x14));
  }
  return;
}



// FUNCTION 147b4c6ee FUN_147b4c6ee body=126 status=ok
// SIG undefined FUN_147b4c6ee(void)

void FUN_147b4c6ee(ulonglong *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    FUN_1468c03c2(param_1,iVar1,param_4,param_5);
  }
  uVar2 = *param_1;
  uVar5 = ((longlong)uVar2 >> 0x18) + (longlong)param_1;
  if ((uVar2 & 1) == 0) {
    uVar5 = uVar2;
  }
  lVar3 = (longlong)param_2;
  lVar4 = (longlong)param_4;
  memmove((void *)((param_3 + lVar3) * lVar4 + uVar5),(void *)(lVar4 * lVar3 + uVar5),
          (iVar1 - lVar3) * lVar4);
  return;
}



// FUNCTION 147b4c76c FUN_147b4c76c body=109 status=ok
// SIG undefined FUN_147b4c76c(void)

void FUN_147b4c76c(longlong *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_3;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_3) {
    FUN_14097bbd2(param_1,iVar1,param_4,param_5);
  }
  lVar2 = (longlong)param_2;
  lVar3 = (longlong)param_4;
  memmove((void *)((param_3 + lVar2) * lVar3 + *param_1),(void *)(lVar3 * lVar2 + *param_1),
          (iVar1 - lVar2) * lVar3);
  return;
}



// FUNCTION 147b4c7da FUN_147b4c7da body=53 status=ok
// SIG undefined FUN_147b4c7da(void)

void FUN_147b4c7da(ulonglong *param_1,int param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *param_1;
  uVar3 = (longlong)param_1 + ((longlong)uVar1 >> 0x18);
  if ((uVar1 & 1) == 0) {
    uVar3 = uVar1;
  }
  lVar2 = (longlong)param_4;
  FUN_145de6046(uVar3 + param_2 * lVar2,param_3 * lVar2 + uVar3,lVar2);
  return;
}



// FUNCTION 147b4c874 FUN_147b4c874 body=59 status=ok
// SIG undefined FUN_147b4c874(void)

undefined8 FUN_147b4c874(longlong *param_1)

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



// FUNCTION 147b4c992 FUN_147b4c992 body=59 status=ok
// SIG undefined FUN_147b4c992(void)

undefined8 FUN_147b4c992(longlong *param_1)

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



// FUNCTION 147b4cb10 FUN_147b4cb10 body=59 status=ok
// SIG undefined FUN_147b4cb10(void)

undefined8 FUN_147b4cb10(longlong *param_1)

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



// FUNCTION 147b4cc90 FUN_147b4cc90 body=59 status=ok
// SIG undefined FUN_147b4cc90(void)

undefined8 FUN_147b4cc90(longlong *param_1)

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



// FUNCTION 147b4cd32 FUN_147b4cd32 body=616 status=ok
// SIG undefined FUN_147b4cd32(void)

void FUN_147b4cd32(double *param_1,double *param_2)

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
  
  dVar9 = *param_2;
  dVar5 = param_2[1];
  dVar6 = param_2[2];
  dVar4 = dVar6 * dVar6 + dVar9 * dVar9 + dVar5 * dVar5;
  if (((dVar4 != 1.0) || (dVar1 = dVar9, dVar2 = dVar5, dVar3 = dVar6, NAN(dVar4))) &&
     (dVar1 = DAT_14c8464e0, dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar4)) {
    dVar4 = 1.0 / SQRT(dVar4);
    dVar1 = dVar9 * dVar4;
    dVar2 = dVar5 * dVar4;
    dVar3 = dVar6 * dVar4;
  }
  dVar5 = (double)(~-(ulonglong)(ABS(dVar3) < 0.9998999834060669) & 0x3ff0000000000000);
  dVar9 = 1.0;
  if (0.9998999834060669 <= ABS(dVar3)) {
    dVar9 = 0.0;
  }
  dVar6 = dVar5 * dVar2 + dVar1 * -0.0;
  dVar4 = dVar9 * dVar1 - dVar3 * dVar5;
  dVar5 = dVar3 * 0.0 - dVar2 * dVar9;
  dVar9 = dVar6 * dVar6 + dVar5 * dVar5 + dVar4 * dVar4;
  if (((dVar9 != 1.0) || (dVar7 = dVar6, dVar8 = dVar5, dVar10 = dVar4, NAN(dVar9))) &&
     (dVar7 = DAT_14c8464f0, dVar8 = DAT_14c8464e0, dVar10 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar7 = dVar6 * dVar9;
    dVar8 = dVar5 * dVar9;
    dVar10 = dVar4 * dVar9;
  }
  *param_1 = dVar2 * dVar7 - dVar10 * dVar3;
  param_1[1] = dVar3 * dVar8 - dVar7 * dVar1;
  param_1[2] = dVar1 * dVar10 - dVar8 * dVar2;
  param_1[3] = 0.0;
  param_1[4] = dVar1;
  param_1[5] = dVar2;
  param_1[6] = dVar3;
  param_1[7] = 0.0;
  param_1[8] = dVar8;
  param_1[9] = dVar10;
  param_1[10] = dVar7;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 147b4cf9a FUN_147b4cf9a body=821 status=ok
// SIG undefined FUN_147b4cf9a(void)

void FUN_147b4cf9a(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar7 = param_2[1];
  dVar9 = param_2[2];
  dVar5 = dVar9 * dVar9 + dVar1 * dVar1 + dVar7 * dVar7;
  if (((dVar5 != 1.0) || (dVar2 = dVar1, dVar3 = dVar7, dVar4 = dVar9, NAN(dVar5))) &&
     (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar2 = dVar1 * dVar5;
    dVar3 = dVar7 * dVar5;
    dVar4 = dVar9 * dVar5;
  }
  dVar1 = *param_3;
  dVar7 = param_3[1];
  dVar9 = param_3[2];
  dVar5 = dVar9 * dVar9 + dVar1 * dVar1 + dVar7 * dVar7;
  if (((dVar5 != 1.0) || (dVar6 = dVar9, dVar8 = dVar7, dVar10 = dVar1, NAN(dVar5))) &&
     (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar6 = dVar9 * dVar5;
    dVar8 = dVar7 * dVar5;
    dVar10 = dVar1 * dVar5;
  }
  if (ABS(ABS(dVar4 * dVar6 + dVar2 * dVar10 + dVar3 * dVar8) + -1.0) <= 1e-08) {
    dVar6 = (double)(-(ulonglong)(ABS(dVar4) < 0.9998999834060669) & 0x3ff0000000000000);
    dVar8 = 0.0;
    dVar10 = 0.0;
    if (0.9998999834060669 <= ABS(dVar4)) {
      dVar10 = 1.0;
    }
  }
  dVar5 = dVar10 * dVar3 - dVar2 * dVar8;
  dVar7 = dVar6 * dVar2 - dVar4 * dVar10;
  dVar9 = dVar8 * dVar4 - dVar3 * dVar6;
  dVar1 = dVar5 * dVar5 + dVar9 * dVar9 + dVar7 * dVar7;
  if (((dVar1 != 1.0) || (dVar10 = dVar7, dVar6 = dVar9, dVar8 = dVar5, NAN(dVar1))) &&
     (dVar10 = DAT_14c8464e8, dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    dVar10 = dVar7 * dVar1;
    dVar6 = dVar9 * dVar1;
    dVar8 = dVar5 * dVar1;
  }
  *param_1 = dVar3 * dVar8 - dVar10 * dVar4;
  param_1[1] = dVar4 * dVar6 - dVar8 * dVar2;
  param_1[2] = dVar2 * dVar10 - dVar6 * dVar3;
  param_1[3] = 0.0;
  param_1[4] = dVar2;
  param_1[5] = dVar3;
  param_1[6] = dVar4;
  param_1[7] = 0.0;
  param_1[8] = dVar6;
  param_1[9] = dVar10;
  param_1[10] = dVar8;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 147b4d2d0 FUN_147b4d2d0 body=821 status=ok
// SIG undefined FUN_147b4d2d0(void)

void FUN_147b4d2d0(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar8 = param_2[2];
  dVar6 = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar6 != 1.0) || (dVar3 = dVar1, dVar4 = dVar2, dVar5 = dVar8, NAN(dVar6))) &&
     (dVar3 = DAT_14c8464e0, dVar4 = DAT_14c8464e8, dVar5 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar3 = dVar1 * dVar6;
    dVar4 = dVar2 * dVar6;
    dVar5 = dVar8 * dVar6;
  }
  dVar1 = *param_3;
  dVar2 = param_3[1];
  dVar8 = param_3[2];
  dVar6 = dVar8 * dVar8 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar6 != 1.0) || (dVar7 = dVar2, dVar9 = dVar8, dVar10 = dVar1, NAN(dVar6))) &&
     (dVar7 = DAT_14c8464e8, dVar9 = DAT_14c8464f0, dVar10 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar7 = dVar2 * dVar6;
    dVar9 = dVar8 * dVar6;
    dVar10 = dVar1 * dVar6;
  }
  if (ABS(ABS(dVar5 * dVar9 + dVar3 * dVar10 + dVar4 * dVar7) + -1.0) <= 1e-08) {
    dVar9 = (double)(-(ulonglong)(ABS(dVar5) < 0.9998999834060669) & 0x3ff0000000000000);
    dVar7 = 0.0;
    dVar10 = 0.0;
    if (0.9998999834060669 <= ABS(dVar5)) {
      dVar10 = 1.0;
    }
  }
  dVar2 = dVar3 * dVar7 - dVar10 * dVar4;
  dVar1 = dVar5 * dVar10 - dVar9 * dVar3;
  dVar6 = dVar4 * dVar9 - dVar7 * dVar5;
  dVar8 = dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1;
  if (((dVar8 != 1.0) || (dVar9 = dVar6, dVar10 = dVar2, dVar7 = dVar1, NAN(dVar8))) &&
     (dVar9 = DAT_14c8464e0, dVar10 = DAT_14c8464f0, dVar7 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar8)) {
    dVar8 = 1.0 / SQRT(dVar8);
    dVar9 = dVar6 * dVar8;
    dVar10 = dVar2 * dVar8;
    dVar7 = dVar1 * dVar8;
  }
  *param_1 = dVar9;
  param_1[1] = dVar7;
  param_1[2] = dVar10;
  param_1[3] = 0.0;
  param_1[4] = dVar3;
  param_1[5] = dVar4;
  param_1[6] = dVar5;
  param_1[7] = 0.0;
  param_1[8] = dVar7 * dVar5 - dVar4 * dVar10;
  param_1[9] = dVar10 * dVar3 - dVar5 * dVar9;
  param_1[10] = dVar9 * dVar4 - dVar3 * dVar7;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 147b4d606 FUN_147b4d606 body=821 status=ok
// SIG undefined FUN_147b4d606(void)

void FUN_147b4d606(double *param_1,double *param_2,double *param_3)

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
  
  dVar1 = *param_2;
  dVar7 = param_2[1];
  dVar9 = param_2[2];
  dVar5 = dVar9 * dVar9 + dVar1 * dVar1 + dVar7 * dVar7;
  if (((dVar5 != 1.0) || (dVar2 = dVar1, dVar3 = dVar7, dVar4 = dVar9, NAN(dVar5))) &&
     (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar2 = dVar1 * dVar5;
    dVar3 = dVar7 * dVar5;
    dVar4 = dVar9 * dVar5;
  }
  dVar1 = *param_3;
  dVar7 = param_3[1];
  dVar9 = param_3[2];
  dVar5 = dVar9 * dVar9 + dVar1 * dVar1 + dVar7 * dVar7;
  if (((dVar5 != 1.0) || (dVar6 = dVar9, dVar8 = dVar7, dVar10 = dVar1, NAN(dVar5))) &&
     (dVar6 = DAT_14c8464f0, dVar8 = DAT_14c8464e8, dVar10 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar6 = dVar9 * dVar5;
    dVar8 = dVar7 * dVar5;
    dVar10 = dVar1 * dVar5;
  }
  if (ABS(ABS(dVar4 * dVar6 + dVar2 * dVar10 + dVar3 * dVar8) + -1.0) <= 1e-08) {
    dVar6 = (double)(-(ulonglong)(ABS(dVar4) < 0.9998999834060669) & 0x3ff0000000000000);
    dVar8 = 0.0;
    dVar10 = 0.0;
    if (0.9998999834060669 <= ABS(dVar4)) {
      dVar10 = 1.0;
    }
  }
  dVar5 = dVar10 * dVar3 - dVar2 * dVar8;
  dVar7 = dVar6 * dVar2 - dVar4 * dVar10;
  dVar9 = dVar8 * dVar4 - dVar3 * dVar6;
  dVar1 = dVar5 * dVar5 + dVar9 * dVar9 + dVar7 * dVar7;
  if (((dVar1 != 1.0) || (dVar10 = dVar7, dVar6 = dVar9, dVar8 = dVar5, NAN(dVar1))) &&
     (dVar10 = DAT_14c8464e8, dVar6 = DAT_14c8464e0, dVar8 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar1)) {
    dVar1 = 1.0 / SQRT(dVar1);
    dVar10 = dVar7 * dVar1;
    dVar6 = dVar9 * dVar1;
    dVar8 = dVar5 * dVar1;
  }
  *param_1 = dVar6;
  param_1[1] = dVar10;
  param_1[2] = dVar8;
  param_1[3] = 0.0;
  param_1[4] = dVar3 * dVar8 - dVar10 * dVar4;
  param_1[5] = dVar4 * dVar6 - dVar8 * dVar2;
  param_1[6] = dVar2 * dVar10 - dVar6 * dVar3;
  param_1[7] = 0.0;
  param_1[8] = dVar2;
  param_1[9] = dVar3;
  param_1[10] = dVar4;
  param_1[0xb] = 0.0;
  param_1[0xc] = DAT_14c8464e0;
  param_1[0xd] = DAT_14c8464e8;
  param_1[0xe] = DAT_14c8464f0;
  param_1[0xf] = 1.0;
  return;
}



// FUNCTION 147b4d93b FUN_147b4d93b body=42 status=ok
// SIG undefined FUN_147b4d93b(void)

void FUN_147b4d93b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_14128edda(param_1);
      param_1 = param_1 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 147b4d966 FUN_147b4d966 body=147 status=ok
// SIG undefined FUN_147b4d966(void)

void FUN_147b4d966(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x48,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x48)) {
      uVar5 = uVar4 / 0x48 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x48,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4d9fa FUN_147b4d9fa body=1 status=ok
// SIG undefined FUN_147b4d9fa(void)

void FUN_147b4d9fa(void)

{
  return;
}



// FUNCTION 147b4d9fc FUN_147b4d9fc body=29 status=ok
// SIG undefined FUN_147b4d9fc(void)

undefined8 FUN_147b4d9fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4da1a FUN_147b4da1a body=62 status=ok
// SIG undefined FUN_147b4da1a(void)

void FUN_147b4da1a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4da58(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x38,8);
  }
  return;
}



// FUNCTION 147b4da58 FUN_147b4da58 body=104 status=ok
// SIG undefined FUN_147b4da58(void)

ulonglong FUN_147b4da58(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x38) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b4da8e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x38,8);
      param_2 = param_2 / 0x38;
    }
  }
LAB_147b4da8e:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b4dac0 FUN_147b4dac0 body=62 status=ok
// SIG undefined FUN_147b4dac0(void)

void FUN_147b4dac0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4dafe(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x40,8);
  }
  return;
}



// FUNCTION 147b4dafe FUN_147b4dafe body=93 status=ok
// SIG undefined FUN_147b4dafe(void)

ulonglong FUN_147b4dafe(uint param_1,uint param_2)

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



// FUNCTION 147b4db5c FUN_147b4db5c body=101 status=ok
// SIG undefined FUN_147b4db5c(void)

void FUN_147b4db5c(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(longlong *)(param_1 + 0x28) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  lVar1 = *(longlong *)(param_2 + 0x38);
  *(longlong *)(param_1 + 0x38) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147b4dbc2 FUN_147b4dbc2 body=132 status=ok
// SIG undefined FUN_147b4dbc2(void)

void FUN_147b4dbc2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4dc48 FUN_147b4dc48 body=62 status=ok
// SIG undefined FUN_147b4dc48(void)

void FUN_147b4dc48(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4dc86(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 147b4dc86 FUN_147b4dc86 body=112 status=ok
// SIG undefined FUN_147b4dc86(void)

ulonglong FUN_147b4dc86(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x60) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b4dcc0;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x60,8);
      param_2 = param_2 / 0x60;
    }
  }
LAB_147b4dcc0:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b4dcf6 FUN_147b4dcf6 body=79 status=ok
// SIG undefined FUN_147b4dcf6(void)

undefined1 * FUN_147b4dcf6(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  lVar1 = *(longlong *)(param_2 + 0x18);
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x20] = param_2[0x20];
  FUN_147b48eca(param_1 + 0x28,param_2 + 0x28);
  return param_1;
}



// FUNCTION 147b4dd46 FUN_147b4dd46 body=1 status=ok
// SIG undefined FUN_147b4dd46(void)

void FUN_147b4dd46(void)

{
  return;
}



// FUNCTION 147b4dd48 FUN_147b4dd48 body=29 status=ok
// SIG undefined FUN_147b4dd48(void)

undefined8 FUN_147b4dd48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4dd66 FUN_147b4dd66 body=62 status=ok
// SIG undefined FUN_147b4dd66(void)

void FUN_147b4dd66(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4dda4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 147b4dda4 FUN_147b4dda4 body=112 status=ok
// SIG undefined FUN_147b4dda4(void)

ulonglong FUN_147b4dda4(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b4ddde;
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
LAB_147b4ddde:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b4de14 FUN_147b4de14 body=1 status=ok
// SIG undefined FUN_147b4de14(void)

void FUN_147b4de14(void)

{
  return;
}



// FUNCTION 147b4de16 FUN_147b4de16 body=29 status=ok
// SIG undefined FUN_147b4de16(void)

undefined8 FUN_147b4de16(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4de34 FUN_147b4de34 body=62 status=ok
// SIG undefined FUN_147b4de34(void)

void FUN_147b4de34(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4de72(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 147b4de72 FUN_147b4de72 body=104 status=ok
// SIG undefined FUN_147b4de72(void)

ulonglong FUN_147b4de72(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x58) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_147b4dea8;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x58,8);
      param_2 = param_2 / 0x58;
    }
  }
LAB_147b4dea8:
  return param_2 & 0xffffffff;
}



// FUNCTION 147b4deda FUN_147b4deda body=107 status=ok
// SIG undefined FUN_147b4deda(void)

void FUN_147b4deda(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(longlong *)(param_1 + 0x30) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  lVar1 = *(longlong *)(param_2 + 0x40);
  *(longlong *)(param_1 + 0x40) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  lVar1 = *(longlong *)(param_2 + 0x50);
  *(longlong *)(param_1 + 0x50) = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 147b4df46 FUN_147b4df46 body=143 status=ok
// SIG undefined FUN_147b4df46(void)

void FUN_147b4df46(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x58,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x58)) {
      uVar5 = uVar4 / 0x58 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x58,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4dfd6 FUN_147b4dfd6 body=14 status=ok
// SIG undefined FUN_147b4dfd6(void)

void FUN_147b4dfd6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 147b4dfe4 FUN_147b4dfe4 body=29 status=ok
// SIG undefined FUN_147b4dfe4(void)

undefined8 FUN_147b4dfe4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4e002 FUN_147b4e002 body=58 status=ok
// SIG undefined FUN_147b4e002(void)

void FUN_147b4e002(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4e03c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  if (iVar1 == *(int *)(param_1 + 0x24)) {
    return;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  FUN_140251262(param_1,*(undefined4 *)(param_1 + 0x20),iVar1,0x18);
  return;
}



// FUNCTION 147b4e03c FUN_147b4e03c body=129 status=ok
// SIG undefined FUN_147b4e03c(void)

ulonglong FUN_147b4e03c(uint param_1,uint param_2)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 1;
  if (1 < param_1) {
    iVar2 = param_2 - param_1;
    if ((ulonglong)((longlong)iVar2 * 0x18) < 0x4000) {
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
      uVar1 = FUN_144a3809e((ulonglong)param_1 * 0x18,0);
      uVar1 = uVar1 / 0x18;
    }
  }
  return uVar1;
}



// FUNCTION 147b4e0be FUN_147b4e0be body=56 status=ok
// SIG undefined FUN_147b4e0be(void)

undefined8 * FUN_147b4e0be(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a9750e0;
  FUN_144725486();
  FUN_14631f922(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4e0f6 FUN_147b4e0f6 body=56 status=ok
// SIG undefined FUN_147b4e0f6(void)

undefined8 * FUN_147b4e0f6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a975140;
  FUN_1463d3238();
  FUN_145902a44(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4e12e FUN_147b4e12e body=38 status=ok
// SIG undefined FUN_147b4e12e(void)

undefined8 FUN_147b4e12e(undefined8 param_1,int param_2)

{
  FUN_145902a44();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147b4e154 FUN_147b4e154 body=65 status=ok
// SIG undefined FUN_147b4e154(void)

undefined8 * FUN_147b4e154(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147b4e25c(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147b4e196 FUN_147b4e196 body=65 status=ok
// SIG undefined FUN_147b4e196(void)

undefined8 * FUN_147b4e196(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147b4e25c(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147b4e1d8 FUN_147b4e1d8 body=65 status=ok
// SIG undefined FUN_147b4e1d8(void)

undefined8 * FUN_147b4e1d8(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147b4e25c(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147b4e21a FUN_147b4e21a body=65 status=ok
// SIG undefined FUN_147b4e21a(void)

undefined8 * FUN_147b4e21a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x24,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_147b4e25c(puVar1,param_1);
  return puVar1;
}



// FUNCTION 147b4e25c FUN_147b4e25c body=136 status=ok
// SIG undefined FUN_147b4e25c(void)

void FUN_147b4e25c(longlong param_1,undefined8 param_2)

{
  FUN_147ba2ec2();
  FUN_1474409b8(param_1 + 0xc,param_2,L"InstancingOffset",0);
  FUN_147440a6c(param_1 + 0x12,param_2,L"VertexFetch_InstanceOriginBuffer",0);
  FUN_147440a6c(param_1 + 0x16,param_2,L"VertexFetch_InstanceTransformBuffer",0);
  FUN_147440a6c(param_1 + 0x1a,param_2,L"VertexFetch_InstanceLightmapBuffer",0);
  FUN_1474409b8(param_1 + 0x1e,param_2,L"InstanceOffset",0);
  return;
}



// FUNCTION 147b4e2e4 FUN_147b4e2e4 body=114 status=ok
// SIG undefined FUN_147b4e2e4(void)

void FUN_147b4e2e4(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 147b4e356 FUN_147b4e356 body=112 status=ok
// SIG undefined FUN_147b4e356(void)

void FUN_147b4e356(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xe0,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 5;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xe0,8);
  }
  return;
}



// FUNCTION 147b4e3c6 FUN_147b4e3c6 body=132 status=ok
// SIG undefined FUN_147b4e3c6(void)

void FUN_147b4e3c6(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 7,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 7)) {
      uVar5 = uVar3 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x80,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4e44b FUN_147b4e44b body=43 status=ok
// SIG undefined FUN_147b4e44b(void)

void FUN_147b4e44b(longlong param_1)

{
  FUN_143268f94();
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  return;
}



// FUNCTION 147b4e476 FUN_147b4e476 body=146 status=ok
// SIG undefined FUN_147b4e476(void)

void FUN_147b4e476(longlong param_1,int param_2)

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
    uVar5 = FUN_144a3809e(lVar4 * 0xe0,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 5;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0xe0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 147b4e50a FUN_147b4e50a body=96 status=ok
// SIG undefined FUN_147b4e50a(void)

void FUN_147b4e50a(longlong param_1,int param_2)

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



// FUNCTION 147b4e56a FUN_147b4e56a body=360 status=ok
// SIG undefined FUN_147b4e56a(void)

longlong * FUN_147b4e56a(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 7,(longlong)*(int *)((longlong)param_2 + 0xc) << 7
            );
  local_2c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_2c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_2c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1401989ec(param_2,0);
    }
  }
  else if ((((int)local_2c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x20000 < local_2c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_2c;
    lVar5 = 0;
    lVar6 = 0;
    do {
      FUN_1467fd8a5(param_1,*param_2 + lVar5);
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0x80;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_2c) ||
       (FUN_1401989ec(param_2), 0 < (int)local_2c)) {
      iVar4 = 0;
      do {
        uVar3 = FUN_1410490b0(param_2);
        FUN_1467fd8a5(param_1,uVar3);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)local_2c);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 147b4e6d4 FUN_147b4e6d4 body=242 status=ok
// SIG undefined FUN_147b4e6d4(void)

void FUN_147b4e6d4(undefined8 param_1,undefined4 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)DAT_14cae4f40;
  if (0 < (longlong)uVar4) {
    bVar5 = false;
    DAT_14cae4f4c = DAT_14cae4f4c + 1;
    do {
      lVar6 = uVar4 * 0x10 + -8;
      uVar7 = uVar4;
      while ((*(int *)(DAT_14cae4f38 + lVar6) != 0 &&
             (plVar1 = *(longlong **)(DAT_14cae4f38 + -8 + lVar6), plVar1 != (longlong *)0x0))) {
        local_48 = *param_2;
        uStack_44 = param_2[1];
        uStack_40 = param_2[2];
        uStack_3c = param_2[3];
        cVar3 = (**(code **)(*plVar1 + 0x60))(plVar1,param_1,&local_48);
        if (cVar3 == '\0') break;
        lVar6 = lVar6 + -0x10;
        bVar2 = uVar7 < 2;
        uVar7 = uVar7 - 1;
        if (bVar2) {
          DAT_14cae4f4c = DAT_14cae4f4c + -1;
          if (!bVar5) goto LAB_147b4e7a3;
          goto LAB_147b4e78d;
        }
      }
      uVar4 = uVar7 - 1;
      bVar5 = true;
    } while (1 < uVar7);
    DAT_14cae4f4c = DAT_14cae4f4c + -1;
LAB_147b4e78d:
    FUN_14474d06a(&DAT_14cae4f38,0);
  }
LAB_147b4e7a3:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b4e7c8 FUN_147b4e7c8 body=62 status=ok
// SIG undefined FUN_147b4e7c8(void)

void FUN_147b4e7c8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4e806(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x80,0x10);
  }
  return;
}



// FUNCTION 147b4e806 FUN_147b4e806 body=93 status=ok
// SIG undefined FUN_147b4e806(void)

ulonglong FUN_147b4e806(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff80U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 7,0x10);
      uVar1 = uVar1 >> 7;
    }
  }
  return uVar1;
}



// FUNCTION 147b4e864 FUN_147b4e864 body=62 status=ok
// SIG undefined FUN_147b4e864(void)

void FUN_147b4e864(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_147b4e8a2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,4,4);
  }
  return;
}



// FUNCTION 147b4e8a2 FUN_147b4e8a2 body=93 status=ok
// SIG undefined FUN_147b4e8a2(void)

ulonglong FUN_147b4e8a2(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 2,4);
      uVar1 = uVar1 >> 2;
    }
  }
  return uVar1;
}


