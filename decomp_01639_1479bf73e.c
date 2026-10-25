// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1479bf73e FUN_1479bf73e body=79 status=ok
// SIG undefined FUN_1479bf73e(void)

byte FUN_1479bf73e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
    bVar2 = 0;
  }
  else {
    lVar3 = FUN_140fe7df8();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    bVar4 = true;
    if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) {
      bVar4 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30;
    }
    bVar2 = (byte)(*(uint *)(param_2 + 0x10) >> 0xb) & 1 & bVar4;
  }
  return bVar2;
}



// FUNCTION 1479bf838 FUN_1479bf838 body=359 status=ok
// SIG undefined FUN_1479bf838(void)

void FUN_1479bf838(longlong param_1,longlong param_2)

{
  double dVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  pfVar3 = *(float **)(param_2 + 0x38);
  local_30 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pfVar2 = &local_2c;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  pfVar3 = &local_30;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar3 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar6 = *(double *)(param_1 + 0x280);
  uVar4 = SUB84(dVar6,0);
  uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar1 = *(double *)(param_1 + 0x288);
  if (dVar1 <= dVar6) {
    uVar4 = SUB84(dVar1,0);
    uVar5 = (undefined4)((ulonglong)dVar1 >> 0x20);
  }
  *pfVar2 = (float)(double)CONCAT44(uVar5,uVar4) * *(float *)(param_1 + 0x644);
  dVar6 = *(double *)(param_1 + 0x280);
  if (*(double *)(param_1 + 0x288) <= *(double *)(param_1 + 0x280)) {
    dVar6 = *(double *)(param_1 + 0x288);
  }
  *pfVar3 = (float)*(double *)(param_1 + 0x290) * *(float *)(param_1 + 0x640) -
            (float)dVar6 * *(float *)(param_1 + 0x644);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bfa4e FUN_1479bfa4e body=297 status=ok
// SIG undefined FUN_1479bfa4e(void)

void FUN_1479bfa4e(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar2 = *(undefined4 **)(param_2 + 0x38);
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
  puVar1 = &local_2c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_30;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar1 = *(undefined4 *)(param_1 + 0x644);
  *puVar2 = *(undefined4 *)(param_1 + 0x640);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bfb78 FUN_1479bfb78 body=301 status=ok
// SIG undefined FUN_1479bfb78(void)

void FUN_1479bfb78(longlong param_1,longlong param_2)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auStack_58 [40];
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  pfVar3 = *(float **)(param_2 + 0x38);
  local_30 = 0.0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  pfVar2 = &local_2c;
  if (pfVar3 != (float *)0x0) {
    pfVar2 = pfVar3;
  }
  pfVar3 = &local_30;
  if (*(float **)(param_2 + 0x38) != (float *)0x0) {
    pfVar3 = *(float **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = *(float *)(param_1 + 0x644);
  *pfVar2 = fVar1;
  *pfVar3 = *(float *)(param_1 + 0x640) - fVar1;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bfcac FUN_1479bfcac body=257 status=ok
// SIG undefined FUN_1479bfcac(void)

void FUN_1479bfcac(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d491fc(param_1,*(undefined4 *)(param_1 + 0x644),local_1c,local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bfdb4 FUN_1479bfdb4 body=257 status=ok
// SIG undefined FUN_1479bfdb4(void)

void FUN_1479bfdb4(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  int local_20;
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
  local_20 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d491fc(param_1,local_1c,*(undefined4 *)(param_1 + 0x640),local_20 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479bfebc FUN_1479bfebc body=332 status=ok
// SIG undefined FUN_1479bfebc(void)

void FUN_1479bfebc(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [36];
  int local_24;
  undefined4 local_20;
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
  local_20 = 0;
  FUN_144a64e42();
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
  FUN_140d491fc(param_1,local_1c,local_20,local_24 != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c000c FUN_1479c000c body=183 status=ok
// SIG undefined FUN_1479c000c(void)

undefined8 * FUN_1479c000c(longlong param_1)

{
  undefined8 *puVar1;
  double dVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x2b0,0x10);
  FUN_1406ff4f8(puVar1,param_1,0);
  *puVar1 = &PTR_FUN_14a83a950;
  *(uint *)(puVar1 + 0x53) = *(uint *)(puVar1 + 0x53) & 0xfffffffe | *(byte *)(param_1 + 0x62c) & 1;
  dVar2 = *(double *)(param_1 + 0x280);
  if (*(double *)(param_1 + 0x288) <= *(double *)(param_1 + 0x280)) {
    dVar2 = *(double *)(param_1 + 0x288);
  }
  *(float *)((longlong)puVar1 + 0x29c) = (float)dVar2 * *(float *)(param_1 + 0x644);
  *(float *)(puVar1 + 0x54) = (float)*(double *)(param_1 + 0x290) * *(float *)(param_1 + 0x640);
  *(undefined4 *)((longlong)puVar1 + 0x2a4) = *(undefined4 *)(param_1 + 0x628);
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x638);
  *(byte *)((longlong)puVar1 + 0x6f) = *(byte *)((longlong)puVar1 + 0x6f) & 0x7f;
  return puVar1;
}



// FUNCTION 1479c00c4 FUN_1479c00c4 body=372 status=ok
// SIG undefined FUN_1479c00c4(void)

void FUN_1479c00c4(longlong param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  fVar7 = *(float *)(param_1 + 0x640) - *(float *)(param_1 + 0x644);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  dVar8 = (double)fVar7 * *(double *)(param_1 + 0x290);
  dVar4 = *(double *)(param_1 + 0x240);
  dVar5 = *(double *)(param_1 + 0x248);
  dVar3 = *(double *)(param_1 + 0x250);
  dVar1 = *(double *)(param_1 + 600);
  dVar11 = dVar3 * 0.0 - dVar4 * dVar8;
  dVar9 = dVar4 * 0.0 - dVar5 * 0.0;
  dVar10 = dVar8 * dVar5 - dVar3 * 0.0;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar2 = (dVar9 * dVar5 - dVar11 * dVar3) + dVar1 * dVar10 + 0.0;
  dVar3 = (dVar3 * dVar10 - dVar4 * dVar9) + *(double *)(param_1 + 600) * dVar11 + 0.0;
  dVar6 = *(double *)(param_1 + 0x280);
  if (*(double *)(param_1 + 0x280) <= *(double *)(param_1 + 0x288)) {
    dVar6 = *(double *)(param_1 + 0x288);
  }
  dVar6 = (double)(float)((double)*(float *)(param_1 + 0x644) * dVar6);
  *param_2 = (float)(SQRT(dVar2 * dVar2 + dVar3 * dVar3) + dVar6);
  *param_3 = (float)(dVar9 * dVar1 + dVar8 + (dVar11 * dVar4 - dVar10 * dVar5) + dVar6);
  return;
}



// FUNCTION 1479c0238 FUN_1479c0238 body=168 status=ok
// SIG undefined FUN_1479c0238(void)

void FUN_1479c0238(longlong *param_1,longlong param_2)

{
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
  (**(code **)(*param_1 + 0x850))(param_1);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c02e8 FUN_1479c02e8 body=261 status=ok
// SIG undefined FUN_1479c02e8(void)

void FUN_1479c02e8(longlong *param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  int local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
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
  local_34 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_20;
  local_58 = local_30;
  uStack_54 = uStack_2c;
  uStack_50 = uStack_28;
  uStack_4c = uStack_24;
  (**(code **)(*param_1 + 0x848))(param_1,&local_58,local_34 != 0);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c03f4 FUN_1479c03f4 body=428 status=ok
// SIG undefined FUN_1479c03f4(void)

void FUN_1479c03f4(longlong *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a64e42();
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
  iVar1 = local_2c;
  local_30 = 0;
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
  local_38 = local_30;
  (**(code **)(*param_1 + 0x6f0))(param_1,local_24,local_28,iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c05fa FUN_1479c05fa body=9 status=ok
// SIG undefined FUN_1479c05fa(void)

undefined4 FUN_1479c05fa(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x430);
}



// FUNCTION 1479c068e FUN_1479c068e body=100 status=ok
// SIG undefined FUN_1479c068e(void)

void FUN_1479c068e(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x698))(param_1,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c0744 FUN_1479c0744 body=103 status=ok
// SIG undefined FUN_1479c0744(void)

void FUN_1479c0744(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1448052ee(param_1 + 0x3a0,&local_30);
  *(undefined8 *)(param_3 + 4) = local_20;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c07d4 FUN_1479c07d4 body=43 status=ok
// SIG undefined FUN_1479c07d4(void)

void FUN_1479c07d4(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x710))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c0800 FUN_1479c0800 body=43 status=ok
// SIG undefined FUN_1479c0800(void)

void FUN_1479c0800(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x718))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c082c FUN_1479c082c body=43 status=ok
// SIG undefined FUN_1479c082c(void)

void FUN_1479c082c(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x6f8))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c0858 FUN_1479c0858 body=43 status=ok
// SIG undefined FUN_1479c0858(void)

void FUN_1479c0858(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x700))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c0884 FUN_1479c0884 body=43 status=ok
// SIG undefined FUN_1479c0884(void)

void FUN_1479c0884(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x708))();
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c098c FUN_1479c098c body=233 status=ok
// SIG undefined FUN_1479c098c(void)

void FUN_1479c098c(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_148 [32];
  undefined1 local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined4 local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  memset(local_128,0,0x100);
  local_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar2 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*param_1 + 0x878))(param_1,puVar2);
  *param_3 = uVar1;
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c0a7a FUN_1479c0a7a body=52 status=ok
// SIG undefined FUN_1479c0a7a(void)

void FUN_1479c0a7a(longlong param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(param_1 + 0x178);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1479c0aae FUN_1479c0aae body=644 status=ok
// SIG undefined FUN_1479c0aae(void)

void FUN_1479c0aae(longlong *param_1,longlong param_2)

{
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_158;
  undefined8 local_154;
  undefined1 local_148 [4];
  undefined4 local_144;
  undefined4 local_a4;
  undefined4 local_78;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
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
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  local_158 = 0;
  local_154 = 0;
  memset(local_148,0,0x100);
  local_78 = 0xffffffff;
  local_a4 = 0xffffffff;
  local_144 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_158);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_158);
  }
  local_180 = &local_158;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_180 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_178 = local_38;
  uStack_174 = uStack_34;
  uStack_170 = uStack_30;
  uStack_16c = uStack_2c;
  local_168 = local_28;
  local_188 = local_44;
  (**(code **)(*param_1 + 0x918))(param_1,&local_178,local_3c,local_40);
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c0d34 FUN_1479c0d34 body=348 status=ok
// SIG undefined FUN_1479c0d34(void)

void FUN_1479c0d34(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_148;
  undefined8 local_144;
  undefined1 local_138 [4];
  undefined4 local_134;
  undefined4 local_94;
  undefined4 local_68;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_148 = 0;
  local_144 = 0;
  memset(local_138,0,0x100);
  local_68 = 0xffffffff;
  local_94 = 0xffffffff;
  local_134 = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_148);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_148);
  }
  puVar1 = &local_148;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_158 = local_28;
  local_168 = local_38;
  uStack_164 = uStack_34;
  uStack_160 = uStack_30;
  uStack_15c = uStack_2c;
  (**(code **)(*param_1 + 0x908))(param_1,&local_168,puVar1);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c0ed2 FUN_1479c0ed2 body=158 status=ok
// SIG undefined FUN_1479c0ed2(void)

void FUN_1479c0ed2(undefined8 param_1,longlong param_2)

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
  FUN_1479c0f72(param_1,local_1c != 0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c0f72 FUN_1479c0f72 body=165 status=ok
// SIG undefined FUN_1479c0f72(void)

void FUN_1479c0f72(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (((*(byte *)(param_1 + 0x5b6) & 0x20) == 0) == (bool)param_2) {
    *(byte *)(param_1 + 0x5b6) = *(byte *)(param_1 + 0x5b6) & 0xdf | param_2 << 5;
    uVar1 = *(undefined4 *)(param_1 + 0x610);
    *(undefined4 *)(param_1 + 0x610) = 0;
    if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
       (((lVar2 = *(longlong *)(param_1 + 0xb0), lVar2 != 0 ||
         (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
        (lVar2 = *(longlong *)(lVar2 + 0x188), lVar2 != 0)))) {
      if (param_2 != '\0') {
        FUN_1478ca664(lVar2,param_1,*(undefined4 *)(param_1 + 0x620));
        return;
      }
      if ((*(byte *)(lVar2 + 0xd8) & 2) == 0) {
        FUN_1478ca322(lVar2,uVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1479c1018 FUN_1479c1018 body=166 status=ok
// SIG undefined FUN_1479c1018(void)

void FUN_1479c1018(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x58))(param_1 + 0x1e0,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c10c0 FUN_1479c10c0 body=182 status=ok
// SIG undefined FUN_1479c10c0(void)

void FUN_1479c10c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x58))(param_1 + 0x1e0,*puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1178 FUN_1479c1178 body=173 status=ok
// SIG undefined FUN_1479c1178(void)

void FUN_1479c1178(longlong param_1,longlong param_2)

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
  *(undefined4 *)(param_1 + 800) = local_1c;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    FUN_147997846();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1226 FUN_1479c1226 body=164 status=ok
// SIG undefined FUN_1479c1226(void)

void FUN_1479c1226(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
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
  puVar1 = local_30;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x790))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c12cc FUN_1479c12cc body=166 status=ok
// SIG undefined FUN_1479c12cc(void)

void FUN_1479c12cc(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x68))(param_1 + 0x1e0,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1374 FUN_1479c1374 body=182 status=ok
// SIG undefined FUN_1479c1374(void)

void FUN_1479c1374(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x68))(param_1 + 0x1e0,*puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c142c FUN_1479c142c body=166 status=ok
// SIG undefined FUN_1479c142c(void)

void FUN_1479c142c(longlong param_1,longlong param_2)

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
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x78))(param_1 + 0x1e0,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c14d4 FUN_1479c14d4 body=182 status=ok
// SIG undefined FUN_1479c14d4(void)

void FUN_1479c14d4(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  puVar1 = &local_1c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*(longlong *)(param_1 + 0x1e0) + 0x78))(param_1 + 0x1e0,*puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c158c FUN_1479c158c body=234 status=ok
// SIG undefined FUN_1479c158c(void)

void FUN_1479c158c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [46];
  undefined1 local_1a;
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
  (**(code **)(*param_1 + 0x5d0))(param_1,local_19,local_1a);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1678 FUN_1479c1678 body=196 status=ok
// SIG undefined FUN_1479c1678(void)

void FUN_1479c1678(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = local_1c;
  if (90.0 <= local_1c) {
    fVar1 = 90.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x224) = fVar1;
  fVar1 = cosf(fVar1 * 0.017453292);
  *(float *)(param_1 + 0x228) = fVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c173e FUN_1479c173e body=204 status=ok
// SIG undefined FUN_1479c173e(void)

void FUN_1479c173e(longlong param_1,longlong param_2)

{
  float fVar1;
  undefined1 auStack_48 [44];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = local_1c;
  if (1.0 <= local_1c) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x228) = fVar1;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = acosf(fVar1);
  *(float *)(param_1 + 0x224) = fVar1 * 57.295776;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c19de FUN_1479c19de body=53 status=ok
// SIG undefined FUN_1479c19de(void)

void FUN_1479c19de(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_2 + 8);
  FUN_145ff07a2(param_1,lVar1);
  if (((*(byte *)(lVar1 + 0x28) & 1) != 0) && (*(int *)(lVar1 + 0x40) < 0x201)) {
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 0x40;
  }
  return;
}



// FUNCTION 1479c1a14 FUN_1479c1a14 body=46 status=ok
// SIG undefined FUN_1479c1a14(void)

void FUN_1479c1a14(longlong param_1,longlong param_2)

{
  FUN_145ff07a2();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x201)) {
    *(byte *)(param_1 + 0x348) = *(byte *)(param_1 + 0x348) | 0x40;
  }
  return;
}



// FUNCTION 1479c1a42 FUN_1479c1a42 body=110 status=ok
// SIG undefined FUN_1479c1a42(void)

undefined8 FUN_1479c1a42(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_28,0,0);
  FUN_144a882a8(param_2,local_28,L"[UCharacterMovementComponent::PostPhysicsTick]");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1ab2 FUN_1479c1ab2 body=252 status=ok
// SIG undefined FUN_1479c1ab2(void)

undefined8 FUN_1479c1ab2(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      FUN_144750a86(lVar1,&local_40,0,0);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140002266(&local_30,L"CharacterMovementComponentPostPhysicsTick/%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1446f470e(param_2,L"CharacterMovementComponentPostPhysicsTick",1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479c1bb0 FUN_1479c1bb0 body=110 status=ok
// SIG undefined FUN_1479c1bb0(void)

undefined8 FUN_1479c1bb0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144750a86(*(undefined8 *)(param_1 + 0x28),local_28,0,0);
  FUN_144a882a8(param_2,local_28,L"[UCharacterMovementComponent::PrePhysicsTick]");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c1c20 FUN_1479c1c20 body=252 status=ok
// SIG undefined FUN_1479c1c20(void)

undefined8 FUN_1479c1c20(longlong param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x10) == 0)) {
      FUN_140056680(&local_40,&DAT_149e01fe8);
    }
    else {
      FUN_144750a86(lVar1,&local_40,0,0);
    }
    puVar2 = &DAT_149dfb77a;
    if (local_38 != 0) {
      puVar2 = local_40;
    }
    FUN_140002266(&local_30,L"CharacterMovementComponentPrePhysicsTick/%s",puVar2);
    puVar2 = &DAT_149dfb77a;
    if (local_28 != 0) {
      puVar2 = local_30;
    }
    FUN_1446f470e(param_2,puVar2,1);
    if (local_30 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
  }
  FUN_1446f470e(param_2,L"CharacterMovementComponentPrePhysicsTick",1);
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479c1d1e FUN_1479c1d1e body=120 status=ok
// SIG undefined FUN_1479c1d1e(void)

void FUN_1479c1d1e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_1463b95b4();
  if (*(longlong *)(param_1 + 0x1d8) != 0) {
    lVar3 = FUN_144a7cacc();
    lVar1 = *(longlong *)(param_1 + 0x1d8);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1479c1d7e;
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        lVar4 = lVar1;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar1);
        }
        goto LAB_1479c1d7e;
      }
    }
  }
  lVar4 = 0;
LAB_1479c1d7e:
  *(longlong *)(param_1 + 0x1f0) = lVar4;
  return;
}



// FUNCTION 1479c1d96 FUN_1479c1d96 body=75 status=ok
// SIG undefined FUN_1479c1d96(void)

void FUN_1479c1d96(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 399) = 0;
  FUN_1479e8b8c();
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) == 0) {
    (**(code **)(*param_1 + 0x750))(param_1);
    if ((longlong *)param_1[0x3e] != (longlong *)0x0) {
      (**(code **)(*(longlong *)param_1[0x3e] + 0x808))();
    }
  }
  *(undefined1 *)((longlong)param_1 + 399) = 1;
  return;
}



// FUNCTION 1479c1df2 FUN_1479c1df2 body=516 status=ok
// SIG undefined FUN_1479c1df2(void)

undefined8 FUN_1479c1df2(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (((param_1[0x3e] != 0) && (cVar6 = FUN_140553fce(), cVar6 != '\0')) &&
     (((*(byte *)(param_1 + 0x2e) & 0x10) == 0 ||
      (1e-08 < ABS(ABS((-(double)param_1[0x46] * (double)param_1[0x28] -
                       (double)param_1[0x29] * (double)param_1[0x47]) -
                       (double)param_1[0x2a] * (double)param_1[0x48]) + -1.0))))) {
    if ((*(int *)(param_1[0x3e] + 0x56c) == 0) || ((*(byte *)(param_1 + 0x69) & 2) != 0)) {
      if ((char)param_1[0x52] == '\x01') {
        dVar7 = (double)param_1[0x46];
        dVar9 = (double)param_1[0x47];
        dVar1 = (double)param_1[0x48];
        dVar2 = (double)param_1[0x25];
        dVar4 = dVar9 * (double)param_1[0x26];
        dVar5 = (double)param_1[0x27] * dVar1;
        dVar8 = (-dVar7 * dVar2 - dVar4) - dVar5;
        dVar3 = (double)*(float *)(param_1 + 0x40);
        if (dVar8 <= dVar3) {
          dVar8 = dVar3;
        }
        dVar5 = dVar2 * dVar7 + dVar4 + dVar5;
        param_1[0x25] = (longlong)((dVar2 - dVar5 * dVar7) - dVar8 * dVar7);
        param_1[0x26] = (longlong)(((double)param_1[0x26] - dVar9 * dVar5) - dVar9 * dVar8);
        param_1[0x27] = (longlong)(((double)param_1[0x27] - dVar1 * dVar5) - dVar1 * dVar8);
      }
      else {
        dVar9 = (double)*(float *)(param_1 + 0x40);
        dVar7 = (double)param_1[0x27];
        if ((double)param_1[0x27] <= dVar9) {
          dVar7 = dVar9;
        }
        param_1[0x27] = (longlong)dVar7;
      }
    }
    (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
    return 1;
  }
  return 0;
}



// FUNCTION 1479c1ff6 FUN_1479c1ff6 body=200 status=ok
// SIG undefined FUN_1479c1ff6(void)

void FUN_1479c1ff6(longlong param_1,double *param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = *(double *)(param_1 + 0x230);
  dVar2 = *(double *)(param_1 + 0x238);
  dVar3 = *(double *)(param_1 + 0x240);
  dVar4 = param_2[2] * dVar3 + *param_2 * dVar1 + dVar2 * param_2[1];
  *param_2 = (*param_2 - dVar4 * dVar1) - dVar1 * param_3;
  param_2[1] = (param_2[1] - dVar2 * dVar4) - dVar2 * param_3;
  param_2[2] = (param_2[2] - dVar3 * dVar4) - dVar3 * param_3;
  return;
}



// FUNCTION 1479c20be FUN_1479c20be body=102 status=ok
// SIG undefined FUN_1479c20be(void)

undefined8 FUN_1479c20be(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0x118))(plVar1);
  if (((cVar2 == '\0') || ((*(byte *)(param_1 + 0x1c8) & 2) == 0)) ||
     ((*(byte *)(param_1 + 0x5b5) & 0x20) != 0)) {
    uVar3 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0xe0))(plVar1);
    uVar3 = 1;
    if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001479c2114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 0xd8))(plVar1);
      return uVar3;
    }
  }
  return uVar3;
}



// FUNCTION 1479c2124 FUN_1479c2124 body=792 status=ok
// SIG undefined FUN_1479c2124(void)

void FUN_1479c2124(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_a8 [32];
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)((longlong)param_1 + 0x5b6) & 8) == 0) {
    bVar5 = *(byte *)((longlong)param_1 + 0x5b6) | 8;
    *(byte *)((longlong)param_1 + 0x5b6) = bVar5;
    if (param_1[0x3e] != 0) {
      fVar6 = (float)(**(code **)(*param_1 + 0x480))(param_1);
      (**(code **)(*param_1 + 0x6a8))(param_1,&local_88,param_2);
      dVar4 = (double)(fVar6 * 0.85);
      dVar12 = local_88 * dVar4 + (double)param_1[0x25];
      param_1[0x25] = (longlong)dVar12;
      dVar10 = local_80 * dVar4 + (double)param_1[0x26];
      param_1[0x26] = (longlong)dVar10;
      dVar7 = local_78 * dVar4 + (double)param_1[0x27];
      dVar1 = (double)param_1[0x46];
      dVar2 = (double)param_1[0x47];
      dVar3 = (double)param_1[0x48];
      dVar9 = dVar7 * dVar3 + dVar12 * dVar1 + dVar10 * dVar2;
      dVar11 = dVar7 - dVar3 * dVar9;
      dVar8 = dVar10 - dVar2 * dVar9;
      dVar9 = dVar12 - dVar9 * dVar1;
      if (dVar4 < SQRT(dVar11 * dVar11 + dVar9 * dVar9 + dVar8 * dVar8)) {
        dVar9 = dVar7 * dVar7 + dVar12 * dVar12 + dVar10 * dVar10;
        if (((dVar9 != 1.0) || (dVar8 = dVar7, dVar11 = dVar10, dVar13 = dVar12, NAN(dVar9))) &&
           (dVar8 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar13 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar9)) {
          dVar9 = 1.0 / SQRT(dVar9);
          dVar8 = dVar7 * dVar9;
          dVar11 = dVar10 * dVar9;
          dVar13 = dVar12 * dVar9;
        }
        dVar7 = dVar8 * dVar4;
        dVar10 = dVar11 * dVar4;
        dVar12 = dVar13 * dVar4;
        param_1[0x25] = (longlong)dVar12;
        param_1[0x26] = (longlong)dVar10;
      }
      dVar4 = (double)(*(float *)((longlong)param_1 + 0x204) * *(float *)(param_1 + 0x40));
      dVar9 = dVar4;
      if ((char)param_1[0x52] == '\x01') {
        dVar8 = dVar7 * dVar3 + dVar12 * dVar1 + dVar2 * dVar10;
        dVar9 = (dVar7 - dVar3 * dVar8) - dVar3 * dVar4;
        param_1[0x25] = (longlong)((dVar12 - dVar8 * dVar1) - dVar1 * dVar4);
        param_1[0x26] = (longlong)((dVar10 - dVar2 * dVar8) - dVar2 * dVar4);
      }
      param_1[0x27] = (longlong)dVar9;
      (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
      bVar5 = *(byte *)((longlong)param_1 + 0x5b6);
    }
    *(byte *)((longlong)param_1 + 0x5b6) = bVar5 & 0xf7;
  }
  if ((local_70 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c243e FUN_1479c243e body=295 status=ok
// SIG undefined FUN_1479c243e(void)

undefined8 FUN_1479c243e(longlong *param_1,undefined8 param_2)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  fVar2 = (float)(**(code **)(*param_1 + 0x9f0))();
  fVar3 = sinf(fVar2 * 0.017453292);
  dVar1 = (double)fVar3;
  fVar2 = cosf(fVar2 * 0.017453292);
  dVar4 = (double)fVar2;
  dVar5 = dVar4 * dVar4 + dVar1 * dVar1 + 0.25;
  if ((dVar5 != 1.0) || (NAN(dVar5))) {
    local_58 = DAT_14c8464e0;
    local_48 = DAT_14c8464f0;
    local_50 = DAT_14c8464e8;
    if (9.99999993922529e-09 <= dVar5) {
      dVar5 = 1.0 / SQRT(dVar5);
      local_58 = dVar4 * dVar5;
      local_48 = dVar5 * 0.5;
      local_50 = dVar1 * dVar5;
    }
  }
  else {
    local_58 = dVar4;
    local_48 = 0.5;
    local_50 = dVar1;
  }
  FUN_14276fa40(param_1 + 0x4e,param_2);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1479c2566 FUN_1479c2566 body=275 status=ok
// SIG undefined FUN_1479c2566(void)

ulonglong FUN_1479c2566(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  
  uVar3 = *(int *)(param_1 + 0x824) * 0xbb38435 + 0x3619636b;
  *(uint *)(param_1 + 0x824) = uVar3;
  fVar8 = ((float)(uVar3 >> 9 | 0x3f800000) + -1.0) * 360.0;
  if (*(longlong *)(param_1 + 0xa8) == 0) {
LAB_1479c25f8:
    return (ulonglong)(uint)fVar8;
  }
  iVar4 = FUN_14487fd02();
  if (iVar4 == 0) goto LAB_1479c25f8;
  plVar1 = (longlong *)(param_1 + 0x1e8);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x40))(plVar1);
  if (cVar2 == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x818);
    if (lVar5 == 0) {
      lVar5 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x30))(plVar1);
      *(longlong *)(param_1 + 0x818) = lVar5;
    }
  }
  cVar2 = (**(code **)(*plVar1 + 0x38))(plVar1);
  if (cVar2 == '\0') {
    if (lVar5 == 0) goto LAB_1479c2655;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0x810);
    if (lVar6 == 0) {
      lVar6 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28))(plVar1);
      *(longlong *)(param_1 + 0x810) = lVar6;
    }
    if (lVar5 == 0) {
      if (lVar6 != 0) {
        fVar8 = *(float *)(lVar6 + 0xc);
      }
      goto LAB_1479c2655;
    }
  }
  fVar8 = *(float *)(lVar5 + 0x98);
LAB_1479c2655:
  uVar7 = FUN_1447c7e44(fVar8 * 8.0,0x43b40000);
  return uVar7;
}



// FUNCTION 1479c267a FUN_1479c267a body=1534 status=ok
// SIG undefined FUN_1479c267a(void)

void FUN_1479c267a(longlong *param_1,double *param_2,float param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  longlong lVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  
  if (param_1[0x3e] != 0) {
    dVar16 = (double)param_1[0x46];
    dVar14 = (double)param_1[0x47];
    dVar11 = (double)param_1[0x48];
    dVar1 = (double)param_1[0x25];
    dVar17 = (double)param_1[0x26] * dVar14;
    dVar15 = (double)param_1[0x27] * dVar11;
    if ((-dVar16 * dVar1 - dVar17) - dVar15 < 0.0) {
      if (0.0 <= param_3) {
        (**(code **)(*param_1 + 0x478))(param_1);
        lVar7 = param_1[0x16];
        if (lVar7 == 0) {
          lVar7 = FUN_1448abda6(param_1);
        }
        FUN_147daac96(lVar7);
        return;
      }
      dVar15 = dVar15 + dVar1 * dVar16 + dVar17;
      dVar4 = (double)param_1[0x27] - dVar11 * dVar15;
      dVar17 = (double)param_1[0x26] - dVar14 * dVar15;
      dVar1 = dVar1 - dVar15 * dVar16;
      dVar15 = dVar4 * dVar4 + dVar1 * dVar1 + dVar17 * dVar17;
      if ((dVar15 != 0.0) || (NAN(dVar15))) {
        dVar15 = *param_2;
        dVar12 = param_2[1];
        dVar2 = param_2[2];
        dVar13 = dVar2 * dVar11 + dVar15 * dVar16 + dVar14 * dVar12;
        dVar11 = dVar2 - dVar11 * dVar13;
        dVar14 = dVar12 - dVar14 * dVar13;
        dVar16 = dVar15 - dVar13 * dVar16;
        dVar14 = SQRT(dVar11 * dVar11 + dVar16 * dVar16 + dVar14 * dVar14);
        dVar16 = dVar2 * dVar2 + dVar15 * dVar15 + dVar12 * dVar12;
        if (((dVar16 != 1.0) || (dVar13 = dVar2, dVar11 = dVar12, dVar6 = dVar15, NAN(dVar16))) &&
           (dVar13 = DAT_14c8464f0, dVar11 = DAT_14c8464e8, dVar6 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar16)) {
          dVar16 = 1.0 / SQRT(dVar16);
          dVar13 = dVar2 * dVar16;
          dVar11 = dVar12 * dVar16;
          dVar6 = dVar15 * dVar16;
        }
        fVar8 = (float)(**(code **)(*param_1 + 0x710))(param_1);
        dVar3 = (double)fVar8;
        dVar11 = dVar11 * dVar3;
        param_1[0x71] = (longlong)(dVar6 * dVar3);
        param_1[0x72] = (longlong)dVar11;
        param_1[0x73] = (longlong)(dVar13 * dVar3);
        dVar16 = (double)param_1[0x25];
        dVar15 = (double)param_1[0x46];
        dVar12 = (double)param_1[0x47];
        dVar2 = (double)param_1[0x48];
        uVar9 = SUB84(dVar2,0);
        uVar10 = (undefined4)((ulonglong)dVar2 >> 0x20);
        if ((dVar14 < ABS((-dVar15 * *param_2 - param_2[1] * dVar12) - param_2[2] * dVar2) * 0.5) &&
           (dVar14 * dVar14 * 0.5 <
            param_2[2] * (double)param_1[0x27] +
            *param_2 * dVar16 + param_2[1] * (double)param_1[0x26])) {
          auVar5._8_4_ = SUB84(dVar11,0);
          auVar5._0_8_ = -(dVar6 * dVar3);
          auVar5._12_4_ = (uint)((ulonglong)dVar11 >> 0x20) ^ 0x80000000;
          *(undefined1 (*) [16])(param_1 + 0x71) = auVar5;
          param_1[0x73] = (longlong)-(dVar13 * dVar3);
        }
        lVar7 = *(longlong *)(param_1[0x3e] + 0x438);
        dVar11 = *(double *)(lVar7 + 0x280);
        if (*(double *)(lVar7 + 0x288) <= *(double *)(lVar7 + 0x280)) {
          dVar11 = *(double *)(lVar7 + 0x288);
        }
        if ((double)((float)dVar11 * *(float *)(lVar7 + 0x644) * 1.5) <= dVar14) {
          dVar14 = (double)param_1[0x26];
          dVar11 = (double)param_1[0x27];
          if (param_2[2] * dVar11 + *param_2 * dVar16 + param_2[1] * dVar14 < 0.0) {
            lVar7 = param_1[0x16];
            if (lVar7 == 0) {
              lVar7 = FUN_1448abda6(param_1);
              dVar15 = (double)param_1[0x46];
              dVar12 = (double)param_1[0x47];
              uVar9 = (undefined4)param_1[0x48];
              uVar10 = (undefined4)((ulonglong)param_1[0x48] >> 0x20);
              dVar16 = (double)param_1[0x25];
              dVar14 = (double)param_1[0x26];
              dVar11 = (double)param_1[0x27];
            }
            fVar18 = 0.2 - *(float *)(lVar7 + 0x6f4);
            fVar8 = 0.0;
            if (0.0 <= fVar18) {
              fVar8 = fVar18;
            }
            dVar2 = (double)fVar8;
            dVar16 = dVar11 * (double)CONCAT44(uVar10,uVar9) + dVar16 * dVar15 + dVar14 * dVar12;
            param_1[0x25] = (longlong)(dVar16 * dVar15 + dVar1 * dVar2);
            param_1[0x26] = (longlong)(dVar12 * dVar16 + dVar17 * dVar2);
            param_1[0x27] = (longlong)((double)CONCAT44(uVar10,uVar9) * dVar16 + dVar4 * dVar2);
          }
        }
        else {
          dVar16 = (double)param_1[0x27] * dVar2 + dVar16 * dVar15 + (double)param_1[0x26] * dVar12;
          param_1[0x25] = (longlong)(dVar16 * dVar15);
          param_1[0x26] = (longlong)(dVar12 * dVar16);
          param_1[0x27] = (longlong)(dVar2 * dVar16);
          param_1[0x73] = (longlong)DAT_14c8464f0;
          dVar16 = DAT_14c8464e8;
          param_1[0x71] = (longlong)DAT_14c8464e0;
          param_1[0x72] = (longlong)dVar16;
        }
      }
      else {
        param_1[0x73] = (longlong)DAT_14c8464f0;
        dVar16 = DAT_14c8464e8;
        param_1[0x71] = (longlong)DAT_14c8464e0;
        param_1[0x72] = (longlong)dVar16;
      }
    }
  }
  return;
}



// FUNCTION 1479c2c82 FUN_1479c2c82 body=1024 status=ok
// SIG undefined FUN_1479c2c82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479c2c82(longlong *param_1,float param_2,undefined8 param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_748 [32];
  longlong *local_728;
  undefined1 local_720;
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  longlong local_6e8;
  double local_6d8;
  double dStack_6d0;
  double local_6c8;
  double dStack_6c0;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  longlong local_6a8;
  longlong lStack_6a0;
  undefined1 local_678 [1560];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_748;
  if (((param_1[0x3e] != 0) && (0.0 < param_2)) && (*(longlong *)(param_1[0x3e] + 0x428) != 0)) {
    if ((*(byte *)((longlong)param_1 + 0x349) & 1) == 0) {
      lVar17 = 0;
    }
    else {
      lVar17 = param_1[0x22];
    }
    FUN_1402ed838(local_678,lVar17,1,1);
    (**(code **)(*param_1 + 0x638))(param_1,param_2);
    (**(code **)(*param_1 + 0xb90))(param_1,&local_6d8,param_3,param_2);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
    param_1[0x1f2] = (longlong)local_6d8;
    param_1[499] = (longlong)dStack_6d0;
    param_1[500] = (longlong)local_6c8;
    param_1[0x1f5] = (longlong)dStack_6c0;
    *(undefined4 *)(param_1 + 0x1f6) = local_6b8;
    *(undefined4 *)((longlong)param_1 + 0xfb4) = uStack_6b4;
    *(undefined4 *)(param_1 + 0x1f7) = uStack_6b0;
    *(undefined4 *)((longlong)param_1 + 0xfbc) = uStack_6ac;
    param_1[0x1f8] = local_6a8;
    param_1[0x1f9] = lStack_6a0;
    lVar11 = DAT_14cacb0f0;
    lVar17 = DAT_14cacb0e8;
    param_1[0x1fa] = _DAT_14cacb0e0;
    param_1[0x1fb] = lVar17;
    param_1[0x1fc] = lVar11;
    param_1[0x1fd] = 0;
    *(undefined4 *)((longlong)param_1 + 0xf84) = 0x3f800000;
    local_6e8 = local_6a8;
    local_728 = param_1 + 0x25;
    (**(code **)(*param_1 + 0xb98))(param_1,local_718,local_6f8,param_2);
    param_1[0x200] = local_708._0_8_;
    *(undefined4 *)(param_1 + 0x1fe) = local_718._0_4_;
    *(undefined4 *)((longlong)param_1 + 0xff4) = local_718._4_4_;
    *(undefined4 *)(param_1 + 0x1ff) = local_718._8_4_;
    *(undefined4 *)((longlong)param_1 + 0xffc) = local_718._12_4_;
    (**(code **)(*param_1 + 0xba0))(param_1,local_718,param_1 + 0x1fe,param_1 + 0x25);
    param_1[0x27] = local_708._0_8_;
    *(undefined4 *)(param_1 + 0x25) = local_718._0_4_;
    *(undefined4 *)((longlong)param_1 + 300) = local_718._4_4_;
    *(undefined4 *)(param_1 + 0x26) = local_718._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x134) = local_718._12_4_;
    if ((*(byte *)((longlong)param_1 + 0x5b5) & 1) != 0) {
      (**(code **)(*(longlong *)param_1[0x3e] + 0x7d8))((longlong *)param_1[0x3e],local_718);
      (**(code **)(*param_1 + 0x790))(param_1,local_718);
      *(byte *)((longlong)param_1 + 0x5b5) = *(byte *)((longlong)param_1 + 0x5b5) & 0xfe;
    }
    if (*(char *)((longlong)param_1 + 0x5b4) < '\0') {
      (**(code **)(*param_1 + 0x5f0))(param_1,*(undefined1 *)(param_1[0x3e] + 0x552));
      *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0x7f;
    }
    *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
    plVar16 = param_1;
    uVar12 = (**(code **)(*param_1 + 0x668))(param_1,param_2,0);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_6d0 - DAT_14c8463d8));
    auVar6._8_4_ = (int)lVar17;
    auVar6._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_6d8 - DAT_14c8463d0));
    auVar6._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    uVar13 = movmskpd(uVar12,auVar6);
    lVar17 = -(ulonglong)(9.99999993922529e-09 < ABS(dStack_6c0 - DAT_14c8463e8));
    auVar4._8_4_ = (int)lVar17;
    auVar4._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(local_6c8 - DAT_14c8463e0));
    auVar4._12_4_ = (int)((ulonglong)lVar17 >> 0x20);
    iVar14 = movmskpd((int)plVar16,auVar4);
    uVar15 = iVar14 << 2 | uVar13;
    if (uVar15 != 0) {
      auVar3._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d8 + dStack_6d0));
      auVar3._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463d0 + local_6d8));
      iVar14 = movmskpd(uVar13,auVar3);
      auVar2._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e8 + dStack_6c0));
      auVar2._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(DAT_14c8463e0 + local_6c8));
      uVar13 = movmskpd(uVar15,auVar2);
      if ((uVar13 & 0x3fffffff) != 0 || iVar14 != 0) {
        lVar17 = param_1[0x22];
        dVar7 = *(double *)(lVar17 + 0x240);
        dVar8 = *(double *)(lVar17 + 0x248);
        dVar9 = *(double *)(lVar17 + 0x250);
        dVar10 = *(double *)(lVar17 + 600);
        dVar5 = dVar7 * local_6c8 * 1.0 +
                dVar10 * dStack_6d0 + local_6d8 * dVar9 * -1.0 + dStack_6c0 * dVar8;
        dVar1 = dVar9 * local_6c8 * -1.0 +
                ((local_6d8 * dVar7 * -1.0 + dStack_6c0 * dVar10) - dStack_6d0 * dVar8);
        local_718._8_4_ = SUB84(dVar5,0);
        local_718._0_8_ =
             dVar8 * local_6c8 * -1.0 +
             dVar9 * dStack_6d0 + local_6d8 * dVar10 * 1.0 + dStack_6c0 * dVar7;
        local_718._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        local_708._8_4_ = SUB84(dVar1,0);
        local_708._0_8_ =
             dVar10 * local_6c8 * 1.0 +
             ((local_6d8 * dVar8 * 1.0 + dStack_6c0 * dVar9) - dStack_6d0 * dVar7);
        local_708._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        local_720 = 0;
        local_728 = (longlong *)0x0;
        (**(code **)(*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,local_718,1);
      }
    }
    (**(code **)(*param_1 + 0x650))(param_1);
    FUN_14490e692(local_678);
  }
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf84) = 0;
  if ((local_60 ^ (ulonglong)auStack_748) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c3182 FUN_1479c3182 body=121 status=ok
// SIG undefined FUN_1479c3182(void)

undefined4 FUN_1479c3182(longlong param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  switch(*(undefined1 *)(param_1 + 0x291)) {
  case 1:
  case 2:
    bVar1 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178);
    uVar2 = *(undefined4 *)(param_1 + 0x2d8 + (ulonglong)bVar1 * 4);
    break;
  case 3:
    uVar2 = *(undefined4 *)(param_1 + 0x2d8);
    break;
  case 4:
    uVar2 = *(undefined4 *)(param_1 + 0x2e0);
    break;
  case 5:
    uVar2 = *(undefined4 *)(param_1 + 0x2e4);
    break;
  case 6:
    uVar2 = *(undefined4 *)(param_1 + 0x2e8);
    break;
  default:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1479c31fc FUN_1479c31fc body=574 status=ok
// SIG undefined FUN_1479c31fc(void)

double * FUN_1479c31fc(longlong *param_1,double *param_2,double *param_3,double *param_4,
                      float param_5)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  param_2[2] = param_3[2];
  dVar2 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar2;
  if (0.0 < param_5) {
    dVar10 = (double)param_5;
    dVar2 = param_4[2];
    dVar3 = param_4[1];
    dVar5 = dVar10 * *param_4 + *param_2;
    *param_2 = dVar5;
    dVar3 = dVar3 * dVar10 + param_2[1];
    param_2[1] = dVar3;
    dVar2 = dVar2 * dVar10 + param_2[2];
    param_2[2] = dVar2;
    lVar7 = (**(code **)(*param_1 + 0x4a0))();
    fVar1 = *(float *)(lVar7 + 0x3c8);
    if ((double)(fVar1 * fVar1) < dVar2 * dVar2 + dVar5 * dVar5 + dVar3 * dVar3) {
      dVar10 = *param_4;
      dVar12 = param_4[1];
      dVar4 = param_4[2];
      dVar11 = dVar4 * dVar4 + dVar10 * dVar10 + dVar12 * dVar12;
      if (((dVar11 != 1.0) || (dVar8 = dVar10, dVar9 = dVar4, dVar6 = dVar12, NAN(dVar11))) &&
         (dVar8 = DAT_14c8464e0, dVar9 = DAT_14c8464f0, dVar6 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar11)) {
        dVar11 = 1.0 / SQRT(dVar11);
        dVar8 = dVar10 * dVar11;
        dVar9 = dVar4 * dVar11;
        dVar6 = dVar12 * dVar11;
      }
      dVar10 = (double)ABS(fVar1);
      if (dVar10 < dVar2 * dVar9 + dVar5 * dVar8 + dVar3 * dVar6) {
        dVar12 = (dVar2 - DAT_14c8464f0) * dVar9 +
                 (dVar5 - DAT_14c8464e0) * dVar8 + (dVar3 - DAT_14c8464e8) * dVar6;
        *param_2 = dVar8 * dVar10 + (dVar5 - dVar12 * dVar8);
        param_2[1] = dVar6 * dVar10 + (dVar3 - dVar6 * dVar12);
        param_2[2] = dVar9 * dVar10 + (dVar2 - dVar9 * dVar12);
      }
    }
  }
  return param_2;
}



// FUNCTION 1479c348e FUN_1479c348e body=615 status=ok
// SIG undefined FUN_1479c348e(void)

void FUN_1479c348e(longlong *param_1,double *param_2,char param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (9.999999747378752e-05 <=
      param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]) {
    plVar1 = param_1 + -0x2f;
    cVar5 = (**(code **)(*plVar1 + 0x610))(plVar1);
    if (cVar5 == '\0') {
      param_1[0x8f] = (longlong)param_2[2];
      uVar2 = *(undefined4 *)((longlong)param_2 + 4);
      uVar3 = *(undefined4 *)(param_2 + 1);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
      *(undefined4 *)(param_1 + 0x8d) = *(undefined4 *)param_2;
      *(undefined4 *)((longlong)param_1 + 0x46c) = uVar2;
      *(undefined4 *)(param_1 + 0x8e) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x474) = uVar4;
      *(byte *)((longlong)param_1 + 0x444) =
           (param_3 * '\x02' | *(byte *)((longlong)param_1 + 0x444) & 0xfc) + 1;
      cVar5 = (**(code **)(*param_1 + 0xe0))(param_1);
      if (cVar5 != '\0') {
        dVar7 = (double)param_1[0x8f] * (double)param_1[0x19] +
                (double)param_1[0x8d] * (double)param_1[0x17] +
                (double)param_1[0x18] * (double)param_1[0x8e];
        param_1[0x8d] = (longlong)((double)param_1[0x8d] - dVar7 * (double)param_1[0x17]);
        param_1[0x8e] = (longlong)((double)param_1[0x8e] - (double)param_1[0x18] * dVar7);
        param_1[0x8f] = (longlong)((double)param_1[0x8f] - (double)param_1[0x19] * dVar7);
      }
    }
    else {
      fVar6 = (float)(**(code **)(*plVar1 + 0x480))(plVar1);
      local_60 = DAT_14c8464e8;
      local_58 = DAT_14c8464f0;
      local_68 = DAT_14c8464e0;
      if (0.0001 <= fVar6) {
        dVar7 = (double)fVar6;
        local_68 = *param_2;
        local_60 = param_2[1];
        local_58 = param_2[2];
        dVar8 = local_58 * local_58 + local_68 * local_68 + local_60 * local_60;
        if (dVar7 * dVar7 < dVar8) {
          dVar7 = (1.0 / SQRT(dVar8)) * dVar7;
          local_60 = local_60 * dVar7;
          local_58 = local_58 * dVar7;
          local_68 = local_68 * dVar7;
        }
      }
      dVar7 = (-(double)param_1[0x17] * local_68 - (double)param_1[0x18] * local_60) -
              (double)param_1[0x19] * local_58;
      (**(code **)(param_1[-0x2f] + 0x608))
                (plVar1,&local_68,CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7));
    }
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c370c FUN_1479c370c body=325 status=ok
// SIG undefined FUN_1479c370c(void)

void FUN_1479c370c(longlong *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = param_2[2];
  local_38 = *param_2;
  dStack_30 = param_2[1];
  if (((param_2[2] != 0.0) || (NAN(param_2[2]))) &&
     ((cVar3 = (**(code **)(*param_1 + 0xe0))(param_1), cVar3 != '\0' ||
      (cVar3 = (**(code **)(*param_1 + 0xd8))(param_1), cVar3 != '\0')))) {
    dVar4 = *param_2;
    dVar1 = param_2[1];
    dVar5 = dVar4 * dVar4 + dVar1 * dVar1;
    dVar2 = param_2[2];
    if ((dVar5 != 1.0) || (NAN(dVar5))) {
      dStack_30 = DAT_14c8464e8;
      local_28 = DAT_14c8464f0;
      local_38 = DAT_14c8464e0;
      if (9.99999993922529e-09 <= dVar5) {
        dStack_30 = dVar1 * (1.0 / SQRT(dVar5));
        local_28 = 0.0;
        local_38 = dVar4 * (1.0 / SQRT(dVar5));
      }
    }
    else {
      dStack_30 = dVar1;
      local_28 = (double)(-(ulonglong)(dVar2 == 0.0) & (ulonglong)dVar2);
      local_38 = dVar4;
    }
    dVar4 = (double)(float)SQRT(dVar2 * dVar2 + dVar5);
    local_28 = local_28 * dVar4;
    dStack_30 = dStack_30 * dVar4;
    local_38 = local_38 * dVar4;
  }
  FUN_1479e9a5a(param_1,&local_38);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c3852 FUN_1479c3852 body=94 status=ok
// SIG undefined FUN_1479c3852(void)

ulonglong FUN_1479c3852(ulonglong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 - 0x178) + 0x600))(param_1 - 0x178);
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0xe08) != '\0')) {
    param_1 = 0;
  }
  else {
    if ((*(longlong *)(param_1 + 0x78) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x78) + 0x1c8), plVar1 != (longlong *)0x0))
    {
      param_1 = 0;
      cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
      if (cVar2 != '\0') goto LAB_1479c387d;
    }
    param_1 = CONCAT71((int7)(param_1 >> 8),1);
  }
LAB_1479c387d:
  return param_1 & 0xffffffff;
}



// FUNCTION 1479c38b0 FUN_1479c38b0 body=20 status=ok
// SIG undefined FUN_1479c38b0(void)

ulonglong FUN_1479c38b0(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xd8))();
  return uVar1 ^ 1;
}



// FUNCTION 1479c38c4 FUN_1479c38c4 body=90 status=ok
// SIG undefined FUN_1479c38c4(void)

undefined8 FUN_1479c38c4(longlong param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)param_2 >> 0x20);
  fVar2 = (float)param_2;
  if (*(char *)(param_1 + 0x16) == '\x01') {
    fVar2 = *(float *)(param_1 + 0x10);
    uVar3 = 0;
  }
  else {
    fVar1 = (float)(**(code **)(*(longlong *)(param_1 + -0x178) + 0x718))(param_1 + -0x178);
    fVar1 = ABS(fVar1);
    if (1e-08 <= fVar1) {
      fVar2 = (fVar2 * fVar2) / (fVar1 + fVar1);
    }
  }
  return CONCAT44(uVar3,fVar2);
}



// FUNCTION 1479c3944 FUN_1479c3944 body=37 status=ok
// SIG undefined FUN_1479c3944(void)

undefined8 FUN_1479c3944(longlong param_1,undefined8 param_2)

{
  (**(code **)(*(longlong *)(param_1 + -0x1e0) + 0x578))(param_1 + -0x1e0);
  return param_2;
}



// FUNCTION 1479c3a16 FUN_1479c3a16 body=72 status=ok
// SIG undefined FUN_1479c3a16(void)

float FUN_1479c3a16(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x478))();
  fVar2 = 0.0;
  if (0.0001 < ABS(fVar1)) {
    fVar2 = (*(float *)(param_1 + 0x40) * *(float *)(param_1 + 0x40)) / (fVar1 * -2.0);
  }
  return fVar2;
}



// FUNCTION 1479c3a5e FUN_1479c3a5e body=58 status=ok
// SIG undefined FUN_1479c3a5e(void)

ulonglong FUN_1479c3a5e(longlong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x6f8))();
  if (param_1[0x3e] != 0) {
    uVar1 = (ulonglong)
            (uint)(*(float *)(param_1[0x3e] + 0x560) * *(float *)(param_1 + 0x40) + (float)uVar1);
  }
  return uVar1;
}



// FUNCTION 1479c3a9a FUN_1479c3a9a body=3314 status=ok
// SIG undefined FUN_1479c3a9a(void)

void FUN_1479c3a9a(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  double *pdVar14;
  double *pdVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  undefined1 auStack_2e8 [32];
  undefined1 *local_2c8;
  undefined1 local_2c0;
  double local_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  longlong local_278;
  double local_270;
  double local_268;
  double local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  double local_228;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  undefined1 local_1f8 [4];
  float local_1f4;
  double local_1a0;
  double local_198;
  double local_190;
  undefined4 local_154;
  undefined4 local_128;
  undefined8 local_f8;
  undefined8 uStack_f0;
  double local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  fVar19 = (float)param_2;
  if (fVar19 < 1e-06) goto LAB_1479c3b2b;
  (**(code **)(*param_1 + 0xb80))();
  fVar16 = (float)(**(code **)(*param_1 + 0x6e8))(param_1);
  fVar25 = *(float *)((longlong)param_1 + 0x324) * fVar16;
  dVar22 = (double)param_1[0x46];
  dVar4 = (double)param_1[0x47];
  dVar5 = (double)param_1[0x48];
  dVar23 = (double)param_1[0x71];
  dVar6 = (double)param_1[0x72];
  uVar17 = SUB84(dVar6,0);
  uVar18 = (undefined4)((ulonglong)dVar6 >> 0x20);
  dVar24 = (double)param_1[0x73];
  fVar28 = (float)((dVar23 * -dVar22 - dVar6 * dVar4) - dVar24 * dVar5);
  lVar11 = param_1[0x1f0];
  if (((char)lVar11 == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
    dVar6 = (double)param_1[0x26];
    dVar21 = -dVar5 * (double)param_1[0x27] + -dVar22 * (double)param_1[0x25] + -dVar4 * dVar6;
    dVar8 = (double)(*(float *)(param_1 + 0x5c) * 0.33);
    if ((dVar21 <= dVar8) || ((fVar25 == 0.0 && (!NAN(fVar25))))) goto LAB_1479c3d04;
    pdVar13 = (double *)(param_1 + 0x25);
    pdVar14 = (double *)(param_1 + 0x26);
    pdVar15 = (double *)(param_1 + 0x27);
    dVar23 = dVar21 * (double)fVar16 * (double)fVar16;
    if (dVar8 <= dVar23) {
      dVar8 = dVar23;
    }
    bVar9 = false;
    uVar17 = SUB84(dVar6,0);
    uVar18 = (int)((ulonglong)dVar6 >> 0x20);
    dVar23 = (double)param_1[0x25];
    dVar24 = (double)param_1[0x27];
LAB_1479c3d5a:
    dVar6 = dVar24 * dVar5 + dVar23 * dVar22 + dVar4 * (double)CONCAT44(uVar18,uVar17);
    *pdVar13 = (dVar23 - dVar6 * dVar22) - dVar22 * dVar8;
    *pdVar14 = ((double)CONCAT44(uVar18,uVar17) - dVar4 * dVar6) - dVar4 * dVar8;
    *pdVar15 = (dVar24 - dVar5 * dVar6) - dVar5 * dVar8;
  }
  else {
LAB_1479c3d04:
    if (fVar16 < 0.65) {
      pdVar13 = (double *)(param_1 + 0x71);
      pdVar14 = (double *)(param_1 + 0x72);
      pdVar15 = (double *)(param_1 + 0x73);
      bVar9 = 0.0 < fVar28;
      dVar8 = 0.10000000149011612;
      if ((double)fVar28 <= 0.10000000149011612) {
        dVar8 = (double)fVar28;
      }
      goto LAB_1479c3d5a;
    }
    bVar9 = false;
  }
  lVar12 = param_1[0x22];
  dVar4 = *(double *)(lVar12 + 0x260);
  dVar5 = *(double *)(lVar12 + 0x268);
  dVar22 = *(double *)(lVar12 + 0x270);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
  if (((char)lVar11 == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) {
    lVar11 = (**(code **)(*param_1 + 0x4a0))(param_1);
    fVar3 = *(float *)(lVar11 + 0x3d0);
    uVar17 = (**(code **)(*param_1 + 0x718))(param_1);
    local_2c8 = (undefined1 *)CONCAT44(local_2c8._4_4_,uVar17);
    (**(code **)(*param_1 + 0x6f0))(param_1,param_2,fVar16 * fVar3 * 0.5,1);
    dVar23 = (double)param_1[0x46];
    dVar6 = (double)param_1[0x47];
    dVar24 = (double)param_1[0x48];
    fVar16 = (float)(**(code **)(*param_1 + 0x478))(param_1);
    dVar8 = (double)((1.0 - fVar25) * fVar16 * fVar19);
    param_1[0x25] = (longlong)((double)param_1[0x25] - dVar23 * dVar8);
    param_1[0x26] = (longlong)((double)param_1[0x26] - dVar6 * dVar8);
    param_1[0x27] = (longlong)((double)param_1[0x27] - dVar24 * dVar8);
  }
  (**(code **)(*param_1 + 0xb88))(param_1,param_2);
  dVar8 = (double)fVar19;
  dVar23 = (double)param_1[0x27] * dVar8;
  dVar6 = (double)param_1[0x26] * dVar8;
  dVar24 = (double)param_1[0x25] * dVar8;
  local_f8 = dVar24;
  uStack_f0 = dVar6;
  local_e8 = dVar23;
  memset(local_1f8,0,0x100);
  local_128 = 0xffffffff;
  local_154 = 0xffffffff;
  local_1f4 = 1.0;
  local_218 = (undefined4)local_f8;
  uStack_214 = local_f8._4_4_;
  uStack_210 = (undefined4)uStack_f0;
  uStack_20c = uStack_f0._4_4_;
  local_208 = local_e8;
  fVar16 = (float)FUN_1479c478e(param_1,&local_218,local_1f8);
  plVar1 = param_1 + 0x2f;
  cVar10 = (**(code **)(param_1[0x2f] + 0xe8))(plVar1);
  if (cVar10 != '\0') {
    plVar2 = param_1 + 0x25;
    if ((local_1f4 < 1.0) && (param_1[0x3e] != 0)) {
      local_2a8 = dVar4;
      dStack_2a0 = dVar5;
      (**(code **)(*param_1 + 0x8b8))(param_1,local_1f8,param_2);
      dVar4 = (double)param_1[0x25];
      uVar17 = SUB84(dVar4,0);
      uVar18 = (undefined4)((ulonglong)dVar4 >> 0x20);
      dVar5 = (double)param_1[0x26];
      uVar26 = SUB84(dVar5,0);
      uVar27 = (undefined4)((ulonglong)dVar5 >> 0x20);
      dVar21 = (double)param_1[0x27];
      if (bVar9) {
        local_2b0 = dVar22;
        if (0.0 <= (-(double)param_1[0x46] * dVar4 - dVar5 * (double)param_1[0x47]) -
                   dVar21 * (double)param_1[0x48]) {
          dVar22 = (double)(fVar28 * fVar19);
          dVar4 = dVar4 - (double)param_1[0x46] * dVar22;
          param_1[0x25] = (longlong)dVar4;
          dVar5 = dVar5 - (double)param_1[0x47] * dVar22;
          param_1[0x26] = (longlong)dVar5;
          dVar21 = dVar21 - (double)param_1[0x48] * dVar22;
          param_1[0x27] = (longlong)dVar21;
          dVar22 = (double)(1.0 - local_1f4);
          dVar23 = dVar21 * dVar22 * dVar8;
          dVar6 = dVar5 * dVar22 * dVar8;
          dVar24 = dVar4 * dVar22 * dVar8;
          local_228 = dVar23;
          local_f8 = dVar24;
          uStack_f0 = dVar6;
          local_e8 = dVar23;
          local_238 = dVar24;
          uStack_230 = dVar6;
          FUN_1479c478e(param_1);
          cVar10 = (**(code **)(param_1[0x2f] + 0xe8))(plVar1);
          if (cVar10 == '\0') goto LAB_1479c464f;
          uVar17 = (undefined4)param_1[0x25];
          uVar18 = (undefined4)((ulonglong)param_1[0x25] >> 0x20);
          uVar26 = (undefined4)param_1[0x26];
          uVar27 = (undefined4)((ulonglong)param_1[0x26] >> 0x20);
          dVar21 = (double)param_1[0x27];
          dVar22 = local_2b0;
        }
      }
      dVar4 = dVar21 * dVar21 +
              (double)CONCAT44(uVar18,uVar17) * (double)CONCAT44(uVar18,uVar17) +
              (double)CONCAT44(uVar27,uVar26) * (double)CONCAT44(uVar27,uVar26);
      if (((dVar4 != 1.0) ||
          (dVar20 = dVar21, dVar5 = (double)CONCAT44(uVar27,uVar26),
          dVar8 = (double)CONCAT44(uVar18,uVar17), NAN(dVar4))) &&
         (dVar20 = DAT_14c8464f0, dVar5 = DAT_14c8464e8, dVar8 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar4)) {
        dVar4 = 1.0 / SQRT(dVar4);
        dVar20 = dVar21 * dVar4;
        dVar5 = (double)CONCAT44(uVar27,uVar26) * dVar4;
        dVar8 = (double)CONCAT44(uVar18,uVar17) * dVar4;
      }
      fVar25 = (float)(dVar20 * (double)param_1[0x48] +
                      dVar8 * (double)param_1[0x46] + dVar5 * (double)param_1[0x47]);
      if (((-0.2 < fVar25) && (fVar25 < 0.5)) &&
         (ABS((-(double)param_1[0x46] * local_1a0 - (double)param_1[0x47] * local_198) -
              (double)param_1[0x48] * local_190) < 0.20000000298023224)) {
        cVar10 = (**(code **)(*param_1 + 0x720))(param_1,local_1f8);
        if (cVar10 != '\0') {
          lVar11 = param_1[0x22];
          dVar4 = (double)param_1[0x46];
          dVar5 = (double)param_1[0x47];
          dVar8 = (double)param_1[0x48];
          local_290 = *(double *)(lVar11 + 0x268) * dVar5;
          dVar21 = *(double *)(lVar11 + 0x260);
          local_298 = *(double *)(lVar11 + 0x270) * dVar8;
          local_248 = param_1[0x27];
          local_258 = *plVar2;
          uStack_250 = param_1[0x26];
          dVar20 = (double)param_1[0x27] * dVar8 +
                   (double)param_1[0x25] * dVar4 + dVar5 * (double)param_1[0x26];
          param_1[0x25] = (longlong)(((double)param_1[0x25] - dVar20 * dVar4) - dVar4);
          param_1[0x26] = (longlong)(((double)param_1[0x26] - dVar5 * dVar20) - dVar5);
          param_1[0x27] = (longlong)(((double)param_1[0x27] - dVar8 * dVar20) - dVar8);
          local_270 = (double)(1.0 - local_1f4);
          local_260 = dVar23 * local_270;
          local_268 = dVar6 * local_270;
          local_270 = dVar24 * local_270;
          local_278 = param_1[0x48];
          local_288 = (undefined4)param_1[0x46];
          uStack_284 = *(undefined4 *)((longlong)param_1 + 0x234);
          uStack_280 = (undefined4)param_1[0x47];
          uStack_27c = *(undefined4 *)((longlong)param_1 + 0x23c);
          local_2c8 = (undefined1 *)0x0;
          local_2b0 = dVar22;
          cVar10 = (**(code **)(*param_1 + 0x728))(param_1);
          if (cVar10 != '\0') {
            cVar10 = (**(code **)(*plVar1 + 0xe8))(plVar1);
            if (cVar10 == '\0') goto LAB_1479c464f;
            lVar11 = param_1[0x22];
            dVar5 = (double)param_1[0x46];
            dVar23 = (double)param_1[0x47];
            dVar22 = (double)param_1[0x48];
            dVar6 = (((-dVar5 * local_2a8 - dStack_2a0 * dVar23) - local_2b0 * dVar22) -
                    (double)(float)((-dVar4 * dVar21 - local_290) - local_298)) +
                    ((*(double *)(lVar11 + 0x260) * -dVar5 - *(double *)(lVar11 + 0x268) * dVar23) -
                    *(double *)(lVar11 + 0x270) * dVar22);
            dVar24 = local_2a8 * dVar5 + dStack_2a0 * dVar23 + local_2b0 * dVar22;
            dVar22 = (local_2b0 - dVar22 * dVar24) - dVar22 * dVar6;
            *(undefined4 *)plVar2 = (undefined4)local_258;
            *(undefined4 *)((longlong)param_1 + 300) = local_258._4_4_;
            *(undefined4 *)(param_1 + 0x26) = (undefined4)uStack_250;
            *(undefined4 *)((longlong)param_1 + 0x134) = uStack_250._4_4_;
            param_1[0x27] = local_248;
            dVar4 = (local_2a8 - dVar24 * dVar5) - dVar6 * dVar5;
            dVar5 = (dStack_2a0 - dVar23 * dVar24) - dVar23 * dVar6;
            goto LAB_1479c4505;
          }
          param_1[0x27] = local_248;
          *(undefined4 *)plVar2 = (undefined4)local_258;
          *(undefined4 *)((longlong)param_1 + 300) = local_258._4_4_;
          *(undefined4 *)(param_1 + 0x26) = (undefined4)uStack_250;
          *(undefined4 *)((longlong)param_1 + 0x134) = uStack_250._4_4_;
          dVar22 = local_2b0;
        }
      }
      (**(code **)(*param_1 + 0x4c8))(param_1,local_1f8,param_2,&local_f8);
      local_2c0 = 1;
      local_2c8 = local_1f8;
      (**(code **)(*param_1 + 0x508))(param_1,&local_f8,1.0 - local_1f4);
      dVar4 = local_2a8;
      dVar5 = dStack_2a0;
    }
LAB_1479c4505:
    if ((((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) &&
       (((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0 &&
        ((fVar25 = fVar19 - fVar16 * fVar19, 0.0001 < fVar25 && (param_1[0x3e] != 0)))))) {
      lVar12 = (**(code **)(*param_1 + 0x4a0))(param_1);
      dVar23 = (double)param_1[0x25];
      dVar6 = (double)param_1[0x26];
      dVar24 = (double)param_1[0x27];
      lVar11 = param_1[0x22];
      dVar20 = *(double *)(lVar11 + 0x268);
      dVar8 = *(double *)(lVar11 + 0x270);
      dVar21 = 1.0 / (double)fVar25;
      bVar7 = *(byte *)(lVar12 + 0x3d4);
      param_1[0x25] = (longlong)(dVar21 * (*(double *)(lVar11 + 0x260) - dVar4));
      param_1[0x26] = (longlong)((dVar20 - dVar5) * dVar21);
      param_1[0x27] = (longlong)((dVar8 - dVar22) * dVar21);
      if ((bVar7 & 1) == 0) {
        FUN_1479c1ff6(param_1,plVar2,
                      (dVar23 * -(double)param_1[0x46] - dVar6 * (double)param_1[0x47]) -
                      dVar24 * (double)param_1[0x48]);
      }
    }
    lVar11 = (**(code **)(*param_1 + 0x4a0))(param_1);
    if ((*(byte *)(lVar11 + 0x3d4) & 1) == 0) {
      cVar10 = (**(code **)(*plVar1 + 0xe8))(plVar1);
      if (cVar10 != '\0') {
        (**(code **)(*param_1 + 0x5d0))(param_1,3,0);
      }
    }
    cVar10 = (**(code **)(*plVar1 + 0xe8))(plVar1);
    if (cVar10 != '\0') goto LAB_1479c3b2b;
  }
LAB_1479c464f:
  (**(code **)(*param_1 + 0x668))(param_1,fVar16 * fVar19,param_3 + 1);
LAB_1479c3b2b:
  if ((local_e0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c478e FUN_1479c478e body=665 status=ok
// SIG undefined FUN_1479c478e(void)

float FUN_1479c478e(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined1 local_100;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar7 = param_1[0x22];
  dVar3 = *(double *)(lVar7 + 0x260);
  dVar4 = *(double *)(lVar7 + 0x268);
  dVar5 = *(double *)(lVar7 + 0x270);
  local_88 = *(undefined8 *)(lVar7 + 0x240);
  uStack_80 = *(undefined8 *)(lVar7 + 0x248);
  local_78 = *(undefined4 *)(lVar7 + 0x250);
  uStack_74 = *(undefined4 *)(lVar7 + 0x254);
  uStack_70 = *(undefined4 *)(lVar7 + 600);
  uStack_6c = *(undefined4 *)(lVar7 + 0x25c);
  local_100 = 0;
  bVar2 = true;
  local_108 = param_3;
  FUN_1402eda10(local_78,param_2,&local_88,1);
  lVar7 = (**(code **)(*param_1 + 0x4a0))(param_1);
  fVar9 = 0.0;
  if ((*(byte *)(lVar7 + 0x3d4) & 1) == 0) {
    lVar7 = param_1[0x22];
    local_b8 = *(undefined8 *)(lVar7 + 0x260);
    uStack_b0 = *(undefined8 *)(lVar7 + 0x268);
    local_a8 = *(undefined8 *)(lVar7 + 0x270);
    local_d8 = dVar3;
    dStack_d0 = dVar4;
    local_c8 = dVar5;
    FUN_143432df6(param_1,&local_a0);
    fVar8 = (float)SQRT(param_2[2] * param_2[2] + *param_2 * *param_2 + param_2[1] * param_2[1]);
    lVar7 = param_1[0x22];
    dVar6 = *(double *)(lVar7 + 0x260);
    dVar1 = *(double *)(lVar7 + 0x268);
    if ((((local_a0 == dVar6) && (!NAN(local_a0) && !NAN(dVar6))) && (local_98 == dVar1)) &&
       (!NAN(local_98) && !NAN(dVar1))) {
      bVar2 = local_90 != *(double *)(lVar7 + 0x270);
    }
    fVar9 = 0.0;
    if ((0.0001 < fVar8) && (bVar2)) {
      local_e0 = local_90 - *(double *)(lVar7 + 0x270);
      local_e8 = local_98 - dVar1;
      local_f0 = local_a0 - dVar6;
      fVar9 = 0.0;
      if ((*(double *)(lVar7 + 0x270) - dVar5) * local_e0 +
          (dVar6 - dVar3) * local_f0 + (*(double *)(lVar7 + 0x268) - dVar4) * local_e8 <= 0.0) {
        fVar9 = (float)(SQRT(local_e0 * local_e0 + local_f0 * local_f0 + local_e8 * local_e8) /
                       (double)fVar8);
      }
      local_88 = *(undefined8 *)(lVar7 + 0x240);
      uStack_80 = *(undefined8 *)(lVar7 + 0x248);
      local_78 = *(undefined4 *)(lVar7 + 0x250);
      uStack_74 = *(undefined4 *)(lVar7 + 0x254);
      uStack_70 = *(undefined4 *)(lVar7 + 600);
      uStack_6c = *(undefined4 *)(lVar7 + 0x25c);
      local_100 = 0;
      local_108 = param_3;
      FUN_1402eda10(param_1,&local_f0,&local_88,1);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return fVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c4a28 FUN_1479c4a28 body=1347 status=ok
// SIG undefined FUN_1479c4a28(void)

void FUN_1479c4a28(longlong *param_1,double *param_2,double *param_3,float param_4,float param_5,
                  int param_6)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined1 local_110;
  double local_100;
  double local_f8;
  double local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((param_4 < 1e-06) || (param_5 < 1e-06)) goto LAB_1479c4eaa;
  if (((char)param_1[0x1f0] == '\0') &&
     (((*(byte *)(param_1 + 0x1b6) & 2) == 0 && ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0)
      ))) {
    lVar3 = param_1[0x22];
    dVar8 = 1.0 / (double)param_4;
    dVar6 = (*(double *)(lVar3 + 0x270) - param_2[2]) * dVar8;
    dVar5 = (*(double *)(lVar3 + 0x268) - param_2[1]) * dVar8;
    dVar8 = dVar8 * (*(double *)(lVar3 + 0x260) - *param_2);
    param_1[0x25] = (longlong)dVar8;
    param_1[0x26] = (longlong)dVar5;
    param_1[0x27] = (longlong)dVar6;
    dVar1 = param_3[2];
    dVar7 = param_3[1];
    param_1[0x25] = (longlong)((dVar8 + dVar8) - *param_3);
    param_1[0x26] = (longlong)((dVar5 + dVar5) - dVar7);
    param_1[0x27] = (longlong)((dVar6 + dVar6) - dVar1);
    lVar3 = (**(code **)(*param_1 + 0x4a0))(param_1);
    dVar7 = DAT_14c8464e8;
    dVar6 = DAT_14c8464f0;
    dVar1 = DAT_14c8464e0;
    if (0.0001 <= *(float *)(lVar3 + 0x3c8)) {
      dVar5 = (double)*(float *)(lVar3 + 0x3c8);
      dVar1 = (double)param_1[0x25];
      dVar7 = (double)param_1[0x26];
      dVar6 = (double)param_1[0x27];
      dVar8 = dVar6 * dVar6 + dVar1 * dVar1 + dVar7 * dVar7;
      if (dVar5 * dVar5 < dVar8) {
        dVar5 = (1.0 / SQRT(dVar8)) * dVar5;
        dVar7 = dVar7 * dVar5;
        dVar6 = dVar6 * dVar5;
        dVar1 = dVar1 * dVar5;
      }
    }
    param_1[0x25] = (longlong)dVar1;
    param_1[0x26] = (longlong)dVar7;
    param_1[0x27] = (longlong)dVar6;
  }
  local_a8 = *param_2;
  dStack_a0 = param_2[1];
  local_98 = param_2[2];
  lVar3 = param_1[0x22];
  local_c8 = *(undefined8 *)(lVar3 + 0x260);
  uStack_c0 = *(undefined8 *)(lVar3 + 0x268);
  local_b8 = *(undefined8 *)(lVar3 + 0x270);
  FUN_143432df6(param_1,&local_88);
  lVar3 = param_1[0x22];
  dVar1 = *(double *)(lVar3 + 0x270);
  dVar7 = *(double *)(lVar3 + 0x260);
  dVar6 = *(double *)(lVar3 + 0x268);
  if ((((local_88 != dVar7) || (NAN(local_88) || NAN(dVar7))) || (local_80 != dVar6)) ||
     (NAN(local_80) || NAN(dVar6))) {
LAB_1479c4c51:
    fVar9 = (float)SQRT((dVar1 - param_2[2]) * (dVar1 - param_2[2]) +
                        (dVar7 - *param_2) * (dVar7 - *param_2) +
                        (dVar6 - param_2[1]) * (dVar6 - param_2[1]));
    if (0.0001 < fVar9) {
      param_5 = param_5 + (float)((SQRT((local_78 - dVar1) * (local_78 - dVar1) +
                                        (local_88 - dVar7) * (local_88 - dVar7) +
                                        (local_80 - dVar6) * (local_80 - dVar6)) * (double)param_4)
                                 / (double)fVar9);
    }
    local_100 = local_88 - dVar7;
    local_f0 = local_78 - dVar1;
    local_f8 = local_80 - dVar6;
    local_e8 = *(undefined8 *)(lVar3 + 0x240);
    uStack_e0 = *(undefined8 *)(lVar3 + 0x248);
    local_d8 = *(undefined4 *)(lVar3 + 0x250);
    uStack_d4 = *(undefined4 *)(lVar3 + 0x254);
    uStack_d0 = *(undefined4 *)(lVar3 + 600);
    uStack_cc = *(undefined4 *)(lVar3 + 0x25c);
    local_110 = 0;
    local_118 = 0;
    (**(code **)(*param_1 + 0x4e8))(param_1,&local_100,&local_e8,1);
  }
  else if ((local_78 != dVar1) || (NAN(local_78) || NAN(dVar1))) goto LAB_1479c4c51;
  if ((char)param_1[0x1f0] == '\0') {
    dVar1 = (double)param_1[0x48];
    dVar7 = (double)param_1[0x25];
    dVar6 = (double)param_1[0x46];
    dVar5 = (double)param_1[0x47];
    dVar2 = (double)param_1[0x26] * dVar5;
    dVar8 = (double)param_1[0x27] * dVar1;
    dVar4 = (-dVar6 * dVar7 - dVar2) - dVar8;
    if (((dVar4 < 0.0) && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) && (-160.0 < dVar4)) {
      dVar8 = dVar8 + dVar7 * dVar6 + dVar2;
      dVar2 = (double)param_1[0x27] - dVar1 * dVar8;
      dVar4 = (double)param_1[0x26] - dVar5 * dVar8;
      dVar7 = dVar7 - dVar8 * dVar6;
      dVar8 = SQRT(dVar2 * dVar2 + dVar7 * dVar7 + dVar4 * dVar4) * -0.699999988079071 + -80.0;
      param_1[0x25] = (longlong)(dVar7 - dVar8 * dVar6);
      param_1[0x26] = (longlong)(dVar4 - dVar5 * dVar8);
      param_1[0x27] = (longlong)(dVar2 - dVar1 * dVar8);
    }
  }
  if ((1e-06 <= param_5) && (param_6 < *(int *)((longlong)param_1 + 0x444))) {
    (**(code **)(*param_1 + 0x8a8))(param_1,param_5);
  }
LAB_1479c4eaa:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c4f6c FUN_1479c4f6c body=98 status=ok
// SIG undefined FUN_1479c4f6c(void)

double * FUN_1479c4f6c(longlong *param_1,double *param_2,undefined8 param_3,undefined8 param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = (float)param_4;
  if ((fVar3 != 0.0) || (NAN(fVar3))) {
    fVar3 = (float)(**(code **)(*param_1 + 0x798))(0,param_3,param_4,param_5);
  }
  dVar4 = (double)fVar3;
  dVar1 = param_5[2];
  dVar2 = param_5[1];
  *param_2 = dVar4 * *param_5;
  param_2[1] = dVar2 * dVar4;
  param_2[2] = dVar1 * dVar4;
  return param_2;
}



// FUNCTION 1479c4fce FUN_1479c4fce body=50 status=ok
// SIG undefined FUN_1479c4fce(void)

float FUN_1479c4fce(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x440);
  fVar2 = param_2;
  if (((fVar1 < param_2) && (param_3 < *(int *)(param_1 + 0x444))) &&
     (fVar2 = fVar1, param_2 * 0.5 <= fVar1)) {
    fVar2 = param_2 * 0.5;
  }
  fVar1 = 1e-06;
  if (1e-06 <= fVar2) {
    fVar1 = fVar2;
  }
  return fVar1;
}



// FUNCTION 1479c5000 FUN_1479c5000 body=1470 status=ok
// SIG undefined FUN_1479c5000(void)

undefined1 (*) [16]
FUN_1479c5000(longlong *param_1,undefined1 (*param_2) [16],undefined8 param_3,double *param_4,
             undefined8 *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_218 [32];
  double *local_1f8;
  undefined1 *local_1f0;
  double local_1e0;
  double dStack_1d8;
  double local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined1 local_1b8 [64];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  cVar11 = (**(code **)(*param_1 + 0x600))();
  dVar14 = DAT_14c8464f0;
  if ((cVar11 == '\0') ||
     ((((*param_4 == 0.0 && (!NAN(*param_4))) && (param_4[1] == 0.0)) &&
      (((!NAN(param_4[1]) && (param_4[2] == 0.0)) && (!NAN(param_4[2]))))))) {
    *(double *)param_2[1] = DAT_14c8464f0;
    uVar10 = DAT_14c8464e8._4_4_;
    uVar9 = (undefined4)DAT_14c8464e8;
    uVar8 = DAT_14c8464e0._4_4_;
    *(undefined4 *)*param_2 = (undefined4)DAT_14c8464e0;
    *(undefined4 *)(*param_2 + 4) = uVar8;
    *(undefined4 *)(*param_2 + 8) = uVar9;
    *(undefined4 *)(*param_2 + 0xc) = uVar10;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_218);
  }
  dVar5 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dVar7 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_a8 = DAT_14c8464f0;
  local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  dStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  if (DAT_14c7613f5 == '\x01') {
    local_1c0 = *(undefined4 *)(param_5 + 1);
    local_1c8 = *param_5;
    memcpy(local_1b8,param_5 + 2,0xb8);
    local_100 = param_5[0x19];
    local_f8 = param_5[0x1a];
    uStack_f0 = param_5[0x1b];
    local_e8 = *(undefined4 *)(param_5 + 0x1c);
    local_e4 = *(undefined1 *)((longlong)param_5 + 0xe4);
    local_c0 = param_5[0x21];
    local_e0 = *(undefined4 *)(param_5 + 0x1d);
    uStack_dc = *(undefined4 *)((longlong)param_5 + 0xec);
    uStack_d8 = *(undefined4 *)(param_5 + 0x1e);
    uStack_d4 = *(undefined4 *)((longlong)param_5 + 0xf4);
    local_d0 = param_5[0x1f];
    uStack_c8 = param_5[0x20];
    if ((*(byte *)((longlong)param_1 + 0x5b6) & 4) != 0) {
      *(byte *)((longlong)param_1 + 0x5b6) = *(byte *)((longlong)param_1 + 0x5b6) & 0xfb;
      local_1f8 = (double *)0x0;
      (**(code **)(*param_1 + 0x900))(param_1,param_3,&local_1c8,0);
      *(byte *)((longlong)param_1 + 0x5b6) = *(byte *)((longlong)param_1 + 0x5b6) | 4;
    }
    if ((~(uint)local_1c8 & 3) != 0) {
      memcpy(&local_1c8,param_1 + 0x93,0x110);
    }
    if (((uint)local_1c8 & 1) == 0) goto LAB_1479c548a;
    dVar1 = (double)param_1[0x46];
    dVar2 = (double)param_1[0x47];
    dVar3 = (double)param_1[0x48];
    if ((-dVar1 * local_178 - local_170 * dVar2) - local_168 * dVar3 <= 9.999999747378752e-05)
    goto LAB_1479c548a;
    dVar14 = local_160 * local_170 - local_178 * local_158;
    dVar13 = local_178 * local_150 - local_168 * local_160;
    dVar7 = local_158 * local_168 - local_170 * local_150;
    dVar5 = local_160 * dVar13 - dVar7 * local_158;
    dVar6 = local_150 * dVar7 - dVar14 * local_160;
    dVar7 = local_158 * dVar14 - dVar13 * local_150;
    dVar14 = dVar5 * dVar3 + dVar7 * dVar1 + dVar2 * dVar6;
    dVar5 = dVar5 - dVar3 * dVar14;
    dVar6 = dVar6 - dVar2 * dVar14;
    dVar7 = dVar7 - dVar14 * dVar1;
    dVar14 = dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6;
    if ((dVar14 != 1.0) || (NAN(dVar14))) {
      if (9.99999993922529e-09 <= dVar14) {
        dVar14 = 1.0 / SQRT(dVar14);
        dVar5 = dVar5 * dVar14;
        dVar6 = dVar6 * dVar14;
        dVar7 = dVar7 * dVar14;
      }
      else {
        dVar7 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar6 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar5 = DAT_14c8464f0;
      }
    }
    local_1d0 = -dVar5;
    dStack_1d8 = -dVar6;
    dVar14 = -dVar7;
    local_1f8 = &local_1e0;
    pdVar12 = &local_b8;
    local_1f0 = local_1b8;
    local_1e0 = dVar14;
    (**(code **)(*param_1 + 0x500))(param_1,pdVar12,param_4,0x3f800000);
    if (((dVar7 == dVar14) && (!NAN(dVar7) && !NAN(dVar14))) &&
       ((dVar6 == 0.0 && (((!NAN(dVar6) && (dVar5 == 0.0)) && (!NAN(dVar5))))))) goto LAB_1479c54a7;
    cVar11 = (**(code **)(*param_1 + 0x800))(param_1,param_3,pdVar12,param_5);
    if (cVar11 == '\0') goto LAB_1479c5539;
  }
  else {
LAB_1479c548a:
    if (((dVar5 == 0.0) && (!NAN(dVar5))) &&
       ((dVar7 == 0.0 && (((!NAN(dVar7) && (dVar14 == 0.0)) && (!NAN(dVar14))))))) {
LAB_1479c54a7:
      local_a8 = param_4[2];
      local_b8 = *param_4;
      dStack_b0 = param_4[1];
    }
    dVar14 = *param_4;
    *(double *)*param_2 = param_4[1];
    *(double *)(*param_2 + 8) = -dVar14;
    *(undefined8 *)param_2[1] = 0;
    cVar11 = (**(code **)(*param_1 + 0x800))(param_1,param_3,param_2,param_5);
    if (cVar11 != '\0') goto LAB_1479c5553;
    auVar4._8_4_ = (int)*(undefined8 *)(*param_2 + 8);
    auVar4._0_8_ = *(ulonglong *)*param_2 ^ 0x8000000000000000;
    auVar4._12_4_ = (uint)((ulonglong)*(undefined8 *)(*param_2 + 8) >> 0x20) ^ 0x80000000;
    *param_2 = auVar4;
    *(ulonglong *)param_2[1] = *(ulonglong *)param_2[1] ^ 0x8000000000000000;
    cVar11 = (**(code **)(*param_1 + 0x800))(param_1,param_3,param_2,param_5);
    if (cVar11 != '\0') goto LAB_1479c5553;
LAB_1479c5539:
    pdVar12 = (double *)&DAT_14c8464e0;
  }
  *(double *)param_2[1] = pdVar12[2];
  uVar8 = *(undefined4 *)((longlong)pdVar12 + 4);
  uVar9 = *(undefined4 *)(pdVar12 + 1);
  uVar10 = *(undefined4 *)((longlong)pdVar12 + 0xc);
  *(undefined4 *)*param_2 = *(undefined4 *)pdVar12;
  *(undefined4 *)(*param_2 + 4) = uVar8;
  *(undefined4 *)(*param_2 + 8) = uVar9;
  *(undefined4 *)(*param_2 + 0xc) = uVar10;
LAB_1479c5553:
  if ((local_a0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c55c0 FUN_1479c55c0 body=355 status=ok
// SIG undefined FUN_1479c55c0(void)

void FUN_1479c55c0(longlong *param_1,undefined4 *param_2,longlong param_3,double *param_4,
                  void *param_5,char param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_78 [32];
  byte local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 1;
  if ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) {
    local_58 = *(byte *)((longlong)param_1 + 0x34a) >> 2 & 1;
  }
  local_38 = *(undefined8 *)(param_2 + 4);
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  FUN_140d93b16(param_1[0x22],&local_48,0,0);
  *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
  if (((param_3 == 0) || ((*(uint *)(param_3 + 8) >> 0x1e & 1) != 0)) ||
     ((*(char *)(param_3 + 0x1fb) == '\x02' &&
      ((((*(double *)(param_3 + 0x260) != *param_4 ||
         (NAN(*(double *)(param_3 + 0x260)) || NAN(*param_4))) ||
        (*(double *)(param_3 + 0x268) != param_4[1])) ||
       (((NAN(*(double *)(param_3 + 0x268)) || NAN(param_4[1]) ||
         (*(double *)(param_3 + 0x270) != param_4[2])) ||
        (NAN(*(double *)(param_3 + 0x270)) || NAN(param_4[2]))))))))) {
    lVar4 = *param_1;
    param_3 = 0;
    uVar5 = 0;
  }
  else {
    memcpy(param_1 + 0x93,param_5,0x110);
    uVar5 = *(undefined8 *)((longlong)param_5 + 0x100);
    lVar4 = *param_1;
  }
  (**(code **)(lVar4 + 0x730))(param_1,param_3,uVar5,1);
  if (param_6 != '\0') {
    param_1[0x27] = DAT_14c8464f0;
    lVar4 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    param_1[0x25] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
    param_1[0x26] = lVar4;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_1 + 0x71) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_1 + 0x38c) = uVar1;
    *(undefined4 *)(param_1 + 0x72) = uVar2;
    *(undefined4 *)((longlong)param_1 + 0x394) = uVar3;
    param_1[0x73] = DAT_14c8464f0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c5724 FUN_1479c5724 body=89 status=ok
// SIG undefined FUN_1479c5724(void)

undefined8 FUN_1479c5724(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1[0x16];
  if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) {
    return 0;
  }
  if (((*(longlong *)(lVar3 + 0x168) != 0) &&
      (cVar1 = (**(code **)(*param_1 + 0x600))(param_1), cVar1 != '\0')) && (param_1[0x3e] != 0)) {
    uVar2 = FUN_1478c990b();
    return uVar2;
  }
  return 0;
}



// FUNCTION 1479c577e FUN_1479c577e body=201 status=ok
// SIG undefined FUN_1479c577e(void)

undefined8 FUN_1479c577e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 local_60;
  double local_50;
  double local_48;
  double local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)FUN_1479c5724();
  if ((plVar1 == (longlong *)0x0) || (lVar2 = *(longlong *)(param_1 + 0x1f0), lVar2 == 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x390) + 0x10))(lVar2 + 0x390);
    local_68 = &local_38;
    local_38 = 0;
    uStack_30 = 0;
    local_40 = (double)(*(float *)(lVar2 + 8) * *(float *)(lVar2 + 0x10));
    local_50 = (double)(*(float *)(lVar2 + 4) + *(float *)(lVar2 + 4));
    local_60 = 0;
    local_48 = local_50;
    uVar3 = (**(code **)(*plVar1 + 0x18))(plVar1,param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c5848 FUN_1479c5848 body=174 status=ok
// SIG undefined FUN_1479c5848(void)

double * FUN_1479c5848(longlong param_1,double *param_2,float param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = -(uint)((float)*(double *)(param_1 + 0x340) < 0.0);
  fVar4 = (float)*(double *)(param_1 + 0x340) * param_3;
  if (360.0 <= fVar4) {
    fVar4 = 360.0;
  }
  uVar2 = -(uint)((float)*(double *)(param_1 + 0x338) < 0.0);
  fVar5 = (float)*(double *)(param_1 + 0x338) * param_3;
  if (360.0 <= fVar5) {
    fVar5 = 360.0;
  }
  param_3 = param_3 * (float)*(double *)(param_1 + 0x330);
  if (360.0 <= param_3) {
    param_3 = 360.0;
  }
  uVar3 = -(uint)((float)*(double *)(param_1 + 0x330) < 0.0);
  *param_2 = (double)(float)(uVar3 & 0x43b40000 | ~uVar3 & (uint)param_3);
  param_2[1] = (double)(float)(uVar2 & 0x43b40000 | ~uVar2 & (uint)fVar5);
  param_2[2] = (double)(float)(uVar1 & 0x43b40000 | ~uVar1 & (uint)fVar4);
  return param_2;
}



// FUNCTION 1479c58f6 FUN_1479c58f6 body=392 status=ok
// SIG undefined FUN_1479c58f6(void)

undefined8 * FUN_1479c58f6(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  double *pdVar2;
  double dVar3;
  undefined1 auStack_48 [32];
  double local_28;
  double dStack_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(double *)(param_1 + 0x388);
  dStack_20 = *(double *)(param_1 + 0x390);
  local_18 = *(double *)(param_1 + 0x398);
  dVar3 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
  if (9.999999747378752e-05 <= dVar3) {
    if ((dVar3 != 1.0) || (NAN(dVar3))) {
LAB_1479c5a28:
      if (9.99999993922529e-09 <= dVar3) {
        dVar3 = 1.0 / SQRT(dVar3);
        local_18 = local_18 * dVar3;
        dStack_20 = dStack_20 * dVar3;
        local_28 = local_28 * dVar3;
      }
      else {
        local_18 = DAT_14c8464f0;
        local_28 = DAT_14c8464e0;
        dStack_20 = DAT_14c8464e8;
      }
      goto LAB_1479c59dd;
    }
    pdVar2 = (double *)(param_1 + 0x388);
  }
  else {
    if ((*(byte *)(param_1 + 0x5bc) & 1) == 0) {
LAB_1479c5a01:
      param_2[2] = param_3[2];
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
    }
    local_28 = *(double *)(param_1 + 0x5e0);
    dStack_20 = *(double *)(param_1 + 0x5e8);
    local_18 = *(double *)(param_1 + 0x5f0);
    dVar3 = local_18 * local_18 + local_28 * local_28 + dStack_20 * dStack_20;
    if (dVar3 <= 9.999999747378752e-05) goto LAB_1479c5a01;
    if ((dVar3 != 1.0) || (NAN(dVar3))) goto LAB_1479c5a28;
    pdVar2 = (double *)(param_1 + 0x5e0);
  }
  local_18 = pdVar2[2];
  local_28 = *pdVar2;
  dStack_20 = pdVar2[1];
LAB_1479c59dd:
  FUN_144a79a9c(&local_28,param_2);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c5a80 FUN_1479c5a80 body=3157 status=ok
// SIG undefined FUN_1479c5a80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1479c5a80(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar4;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  longlong lVar14;
  double dVar15;
  double *pdVar16;
  undefined4 uVar17;
  uint uVar18;
  float fVar20;
  double extraout_XMM0_Qa;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auStack_198 [32];
  double *local_178;
  undefined1 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  double dStack_148;
  double local_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_110;
  double local_108;
  double local_100;
  undefined1 local_f8 [16];
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  ulonglong local_80;
  double dVar3;
  double dVar5;
  longlong *plVar19;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  if ((*(byte *)(param_1 + 0x69) & 0x18) == 0) goto LAB_1479c64b3;
  plVar19 = param_1;
  cVar11 = (**(code **)(*param_1 + 0x600))();
  uVar17 = SUB84(plVar19,0);
  if ((cVar11 == '\0') ||
     ((dVar15 = (double)param_1[0x3e], *(longlong *)((longlong)dVar15 + 0x3c0) == 0 &&
      ((*(byte *)((longlong)param_1 + 0x349) & 8) == 0)))) goto LAB_1479c64b3;
  lVar14 = param_1[0x22];
  dVar36 = *(double *)(lVar14 + 0x240);
  dVar1 = *(double *)(lVar14 + 0x248);
  dVar40 = *(double *)(lVar14 + 0x250);
  dVar2 = *(double *)(lVar14 + 600);
  pdVar16 = *(double **)(lVar14 + 0x228);
  local_a8 = dVar36;
  dStack_a0 = dVar1;
  local_98 = dVar40;
  dStack_90 = dVar2;
  if (pdVar16 == (double *)0x0) {
    uVar17 = 0x40;
    pdVar16 = (double *)FUN_14001cc68(0x40,0x10);
    dVar15 = DAT_14c8463d8;
    *pdVar16 = DAT_14c8463d0;
    pdVar16[1] = dVar15;
    dVar15 = DAT_14c8463e8;
    pdVar16[2] = DAT_14c8463e0;
    pdVar16[3] = dVar15;
    dVar15 = DAT_14c846500;
    pdVar16[4] = DAT_14c8464f8;
    pdVar16[5] = dVar15;
    dVar15 = DAT_14c846508;
    pdVar16[6] = DAT_14c846508;
    *(double **)(lVar14 + 0x228) = pdVar16;
  }
  auVar34._8_8_ = -(ulonglong)(dVar1 != pdVar16[1]);
  auVar34._0_8_ = -(ulonglong)(dVar36 != *pdVar16);
  iVar13 = movmskpd(SUB84(dVar15,0),auVar34);
  auVar33._8_4_ = (int)-(ulonglong)(dVar2 != pdVar16[3]);
  auVar33._0_8_ = -(ulonglong)(dVar40 != pdVar16[2]);
  auVar33._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar16[3]) >> 0x20);
  uVar18 = movmskpd(uVar17,auVar33);
  if ((uVar18 & 0x3fffffff) != 0 || iVar13 != 0) {
    pdVar16[2] = local_98;
    pdVar16[3] = dStack_90;
    *pdVar16 = local_a8;
    pdVar16[1] = dStack_a0;
    FUN_1448052ee(&local_a8,&local_138);
    pdVar16[6] = local_128;
    pdVar16[4] = local_138;
    pdVar16[5] = dStack_130;
  }
  local_b8 = pdVar16[6];
  local_c8 = pdVar16[4];
  dStack_c0 = pdVar16[5];
  (**(code **)(*param_1 + 0x6c0))(param_1,&local_e0);
  local_e8 = local_b8;
  local_f8._8_8_ = dStack_c0;
  local_f8._0_8_ = local_c8;
  if ((*(byte *)(param_1 + 0x69) & 0x10) == 0) {
    plVar19 = *(longlong **)(param_1[0x3e] + 0x3c0);
    bVar12 = *(byte *)(param_1 + 0x69) & 8;
    if (bVar12 == 0 || plVar19 == (longlong *)0x0) {
      if ((plVar19 != (longlong *)0x0) || ((*(byte *)((longlong)param_1 + 0x349) & bVar12) == 0))
      goto LAB_1479c64b3;
      plVar19 = *(longlong **)(param_1[0x3e] + 0x168);
      if (plVar19 != (longlong *)0x0) {
        lVar14 = FUN_14490fee6();
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8)
            == lVar14 + 0x30)) {
          lVar14 = *plVar19;
          goto LAB_1479c6606;
        }
      }
    }
    else {
      lVar14 = *plVar19;
LAB_1479c6606:
      (**(code **)(lVar14 + 0x6c0))(plVar19,local_f8);
    }
  }
  else {
    local_178 = &local_e0;
    (**(code **)(*param_1 + 0x6c8))(param_1,local_f8,&local_c8);
  }
  plVar19 = param_1;
  dVar15 = (double)(**(code **)(*param_1 + 0x820))();
  uVar17 = SUB84(plVar19,0);
  cVar11 = SUB81(dVar15,0);
  uVar10 = local_f8._8_8_;
  if (cVar11 == '\0') {
    dVar36 = (double)DAT_1499387d0;
    dVar1 = DAT_1499387d0._8_8_;
    auVar33 = divpd(local_f8,_DAT_1499387d0);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = local_e8;
    auVar34 = divpd(auVar30,_DAT_1499387d0);
    auVar33 = roundpd(auVar33,auVar33,3);
    auVar34 = roundpd(auVar34,auVar34,3);
    auVar39._0_8_ = local_f8._0_8_ - auVar33._0_8_ * dVar36;
    auVar39._8_8_ = (double)local_f8._8_8_ - auVar33._8_8_ * dVar1;
    local_e8 = local_e8 - auVar34._0_8_ * dVar36;
    dVar40 = 0.0 - auVar34._8_8_ * dVar1;
    auVar41._0_8_ = auVar39._0_8_ + dVar36;
    auVar41._8_8_ = auVar39._8_8_ + dVar1;
    auVar37._0_8_ = dVar36 + local_e8;
    auVar37._8_8_ = dVar1 + dVar40;
    auVar21._8_8_ = -(ulonglong)(0.0 <= auVar39._8_8_);
    auVar21._0_8_ = -(ulonglong)(0.0 <= auVar39._0_8_);
    auVar34 = blendvpd(auVar41,auVar39,auVar21);
    auVar22._8_8_ = -(ulonglong)(0.0 <= dVar40);
    auVar22._0_8_ = -(ulonglong)(0.0 <= local_e8);
    auVar6._8_8_ = dVar40;
    auVar6._0_8_ = local_e8;
    auVar33 = blendvpd(auVar37,auVar6,auVar22);
    auVar31._0_8_ = auVar34._0_8_ + -360.0;
    auVar31._8_8_ = auVar34._8_8_ + -360.0;
    auVar23._8_8_ = -(ulonglong)(180.0 < auVar34._8_8_);
    auVar23._0_8_ = -(ulonglong)(180.0 < auVar34._0_8_);
    local_f8 = blendvpd(auVar34,auVar31,auVar23);
    dVar36 = auVar33._0_8_;
    local_e8 = (double)(~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
                       (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36));
  }
  else if ((char)param_1[0x52] == '\x01') {
    FUN_144a7484c(local_f8,&local_138);
    dVar36 = (double)param_1[0x51];
    dVar15 = (double)param_1[0x51];
    dVar1 = (double)param_1[0x4f];
    dVar40 = (double)param_1[0x4f];
    dVar2 = (double)param_1[0x4e];
    dVar3 = (double)param_1[0x4e];
    dVar4 = (double)param_1[0x50];
    dVar5 = (double)param_1[0x50];
    local_a8 = dStack_130 * dVar4 * -1.0 +
               local_128 * dVar1 + dVar2 * dStack_120 * 1.0 + dVar36 * local_138;
    dStack_a0 = local_138 * dVar5 * 1.0 +
                dStack_120 * dVar40 + dVar3 * local_128 * -1.0 + dVar15 * dStack_130;
    local_98 = dStack_120 * dVar4 * 1.0 +
               ((dVar2 * dStack_130 * 1.0 + dVar36 * local_128) - dVar1 * local_138);
    dStack_90 = local_128 * dVar5 * -1.0 +
                ((dVar3 * local_138 * -1.0 + dVar15 * dStack_120) - dVar40 * dStack_130);
    FUN_1448052ee(&local_a8,&local_110);
    local_110 = 0.0;
    dVar15 = (double)FUN_144719204(local_108);
    dVar15 = (double)(~-(ulonglong)(dVar15 < 0.0) & (ulonglong)dVar15 |
                     (ulonglong)(dVar15 + 360.0) & -(ulonglong)(dVar15 < 0.0));
    local_108 = (double)(~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                        (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15));
    local_100 = 0.0;
    FUN_144a7484c(&local_110,&local_138);
    dVar15 = (double)param_1[0x4d];
    dVar36 = (double)param_1[0x4d];
    dVar40 = (double)param_1[0x4b];
    dVar1 = (double)param_1[0x4b];
    dVar3 = (double)param_1[0x4a];
    dVar2 = (double)param_1[0x4a];
    dVar4 = (double)param_1[0x4c];
    dVar5 = (double)param_1[0x4c];
    local_a8 = dStack_130 * dVar4 * -1.0 +
               local_128 * dVar40 + dVar3 * dStack_120 * 1.0 + dVar15 * local_138;
    dStack_a0 = local_138 * dVar5 * 1.0 +
                dStack_120 * dVar1 + dVar2 * local_128 * -1.0 + dVar36 * dStack_130;
    local_98 = dStack_120 * dVar4 * 1.0 +
               ((dVar3 * dStack_130 * 1.0 + dVar15 * local_128) - dVar40 * local_138);
    dStack_90 = local_128 * dVar5 * -1.0 +
                ((dVar2 * local_138 * -1.0 + dVar36 * dStack_120) - dVar1 * dStack_130);
    pdVar16 = &local_a8;
    FUN_1448052ee(pdVar16,&local_150);
    uVar17 = SUB84(pdVar16,0);
    local_e8 = local_140;
    local_f8._8_8_ = dStack_148;
    local_f8._0_8_ = local_150;
    dVar15 = local_140;
  }
  else {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = local_f8._8_8_;
    local_f8 = auVar9 << 0x40;
    dVar15 = (double)FUN_144719204(uVar10);
    dVar36 = (double)(~-(ulonglong)(extraout_XMM0_Qa < 0.0) & (ulonglong)extraout_XMM0_Qa |
                     (ulonglong)(extraout_XMM0_Qa + 360.0) & -(ulonglong)(extraout_XMM0_Qa < 0.0));
    local_f8._8_8_ =
         ~-(ulonglong)(180.0 < dVar36) & (ulonglong)dVar36 |
         (ulonglong)(dVar36 + -360.0) & -(ulonglong)(180.0 < dVar36);
    local_e8 = 0.0;
  }
  dVar36 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar32._8_8_ = dStack_c0 - (double)local_f8._8_8_;
  auVar32._0_8_ = local_c8 - (double)local_f8._0_8_;
  auVar33 = divpd(auVar32,_DAT_1499387d0);
  auVar24._0_8_ = (local_b8 - local_e8) / 360.0;
  auVar24._8_8_ = 0;
  auVar34 = roundpd(auVar33,auVar33,3);
  auVar33 = roundpd(auVar24,auVar24,3);
  auVar43._0_8_ = (local_b8 - local_e8) - auVar33._0_8_ * dVar36;
  auVar43._8_8_ = 0.0 - auVar33._8_8_ * dVar1;
  dVar40 = (local_c8 - (double)local_f8._0_8_) - auVar34._0_8_ * dVar36;
  dVar2 = (dStack_c0 - (double)local_f8._8_8_) - auVar34._8_8_ * dVar1;
  auVar42._0_8_ = dVar40 + dVar36;
  auVar42._8_8_ = dVar2 + dVar1;
  auVar38._0_8_ = dVar36 + auVar43._0_8_;
  auVar38._8_8_ = dVar1 + auVar43._8_8_;
  auVar25._8_8_ = -(ulonglong)(0.0 <= dVar2);
  auVar25._0_8_ = -(ulonglong)(0.0 <= dVar40);
  auVar7._8_4_ = SUB84(dVar2,0);
  auVar7._0_8_ = dVar40;
  auVar7._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  auVar34 = blendvpd(auVar42,auVar7,auVar25);
  auVar26._8_8_ = -(ulonglong)(0.0 <= auVar43._8_8_);
  auVar26._0_8_ = -(ulonglong)(0.0 <= auVar43._0_8_);
  auVar33 = blendvpd(auVar38,auVar43,auVar26);
  auVar44._0_8_ = auVar34._0_8_ + -360.0;
  auVar44._8_8_ = auVar34._8_8_ + -360.0;
  dVar36 = auVar33._8_8_ + -360.0;
  auVar27._8_8_ = -(ulonglong)(180.0 < auVar34._8_8_);
  auVar27._0_8_ = -(ulonglong)(180.0 < auVar34._0_8_);
  auVar34 = blendvpd(auVar34,auVar44,auVar27);
  auVar28._8_8_ = -(ulonglong)(180.0 < auVar33._8_8_);
  auVar28._0_8_ = -(ulonglong)(180.0 < auVar33._0_8_);
  auVar8._8_4_ = SUB84(dVar36,0);
  auVar8._0_8_ = auVar33._0_8_ + -360.0;
  auVar8._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  auVar33 = blendvpd(auVar33,auVar8,auVar28);
  auVar35._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar34._8_8_));
  auVar35._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar34._0_8_));
  iVar13 = movmskpd(SUB84(dVar15,0),auVar35);
  auVar29._8_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar33._8_8_));
  auVar29._0_8_ = -(ulonglong)(0.0010000000474974513 < ABS(auVar33._0_8_));
  uVar18 = movmskpd(uVar17,auVar29);
  if ((uVar18 & 0x3fffffff) != 0 || iVar13 != 0) {
    if (cVar11 == '\x01' && DAT_14c7613f0 != 0) {
      if (ABS(local_e0) <= 1e-08) {
        local_e0 = 360.0;
      }
      if (ABS(local_d0) <= 1e-08) {
        local_d0 = 360.0;
      }
    }
    if ((char)param_1[0x52] == '\x01') {
      FUN_144a7484c(&local_c8,&local_138);
      dVar36 = (double)param_1[0x51];
      dVar15 = (double)param_1[0x51];
      dVar40 = (double)param_1[0x4f];
      dVar1 = (double)param_1[0x4f];
      dVar3 = (double)param_1[0x4e];
      dVar2 = (double)param_1[0x4e];
      dVar5 = (double)param_1[0x50];
      dVar4 = (double)param_1[0x50];
      local_a8 = dStack_130 * dVar5 * -1.0 +
                 local_128 * dVar40 + dVar3 * dStack_120 * 1.0 + dVar36 * local_138;
      dStack_a0 = local_138 * dVar4 * 1.0 +
                  dStack_120 * dVar1 + dVar2 * local_128 * -1.0 + dVar15 * dStack_130;
      local_98 = dStack_120 * dVar5 * 1.0 +
                 ((dVar3 * dStack_130 * 1.0 + dVar36 * local_128) - dVar40 * local_138);
      dStack_90 = local_128 * dVar4 * -1.0 +
                  ((dVar2 * local_138 * -1.0 + dVar15 * dStack_120) - dVar1 * dStack_130);
      FUN_1448052ee(&local_a8,&local_110);
      FUN_144a7484c(local_f8,&local_138);
      dVar15 = (double)param_1[0x51];
      dVar36 = (double)param_1[0x51];
      dVar40 = (double)param_1[0x4f];
      dVar1 = (double)param_1[0x4f];
      dVar2 = (double)param_1[0x4e];
      dVar3 = (double)param_1[0x4e];
      dVar4 = (double)param_1[0x50];
      dVar5 = (double)param_1[0x50];
      local_a8 = dStack_130 * dVar4 * -1.0 +
                 local_128 * dVar40 + dVar2 * dStack_120 * 1.0 + dVar15 * local_138;
      dStack_a0 = local_138 * dVar5 * 1.0 +
                  dStack_120 * dVar1 + dVar3 * local_128 * -1.0 + dVar36 * dStack_130;
      local_98 = dStack_120 * dVar4 * 1.0 +
                 ((dVar2 * dStack_130 * 1.0 + dVar15 * local_128) - dVar40 * local_138);
      dStack_90 = local_128 * dVar5 * -1.0 +
                  ((dVar3 * local_138 * -1.0 + dVar36 * dStack_120) - dVar1 * dStack_130);
      FUN_1448052ee(&local_a8,&local_150);
      if (0.0010000000474974513 < ABS(local_110 - local_150)) {
        fVar20 = (float)FUN_1407b5b68((float)local_110,(float)local_150,(float)local_e0);
        local_150 = (double)fVar20;
      }
      if (0.0010000000474974513 < ABS(local_108 - dStack_148)) {
        fVar20 = (float)FUN_1407b5b68((float)local_108,(float)dStack_148,(float)local_d8);
        dStack_148 = (double)fVar20;
      }
      if (0.0010000000474974513 < ABS(local_100 - local_140)) {
        fVar20 = (float)FUN_1407b5b68((float)local_100,(float)local_140,(float)local_d0);
        local_140 = (double)fVar20;
      }
      FUN_144a7484c(&local_150,&local_138);
      dVar15 = (double)param_1[0x4d];
      dVar36 = (double)param_1[0x4d];
      dVar1 = (double)param_1[0x4b];
      dVar40 = (double)param_1[0x4b];
      dVar2 = (double)param_1[0x4a];
      dVar3 = (double)param_1[0x4a];
      dVar4 = (double)param_1[0x4c];
      dVar5 = (double)param_1[0x4c];
      local_a8 = dStack_130 * dVar4 * -1.0 +
                 local_128 * dVar1 + dVar2 * dStack_120 * 1.0 + dVar15 * local_138;
      dStack_a0 = local_138 * dVar5 * 1.0 +
                  dStack_120 * dVar40 + dVar3 * local_128 * -1.0 + dVar36 * dStack_130;
      local_98 = dStack_120 * dVar4 * 1.0 +
                 ((dVar2 * dStack_130 * 1.0 + dVar15 * local_128) - dVar1 * local_138);
      dStack_90 = local_128 * dVar5 * -1.0 +
                  ((dVar3 * local_138 * -1.0 + dVar36 * dStack_120) - dVar40 * dStack_130);
      FUN_1448052ee(&local_a8,&local_168);
      local_e8 = local_158;
      local_f8._8_8_ = uStack_160;
      local_f8._0_8_ = local_168;
    }
    else {
      if (0.0010000000474974513 < ABS(local_c8 - (double)local_f8._0_8_)) {
        fVar20 = (float)FUN_1407b5b68((float)local_c8,(float)(double)local_f8._0_8_,(float)local_e0)
        ;
        local_f8._0_8_ = (double)fVar20;
      }
      if (0.0010000000474974513 < ABS(dStack_c0 - (double)local_f8._8_8_)) {
        fVar20 = (float)FUN_1407b5b68((float)dStack_c0,(float)(double)local_f8._8_8_,(float)local_d8
                                     );
        local_f8._8_8_ = (double)fVar20;
      }
      if (0.0010000000474974513 < ABS(local_b8 - local_e8)) {
        fVar20 = (float)FUN_1407b5b68((float)local_b8,(float)local_e8,(float)local_d0);
        local_e8 = (double)fVar20;
      }
    }
    FUN_144a7484c(local_f8,&local_a8);
    local_170 = 0;
    local_178 = (double *)0x0;
    (**(code **)(*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,&local_a8,0);
  }
LAB_1479c64b3:
  if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c66d6 FUN_1479c66d6 body=230 status=ok
// SIG undefined FUN_1479c66d6(void)

undefined8 FUN_1479c66d6(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  double local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x3c0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x680))(plVar1,local_30);
    if (0.0 < (-*(double *)(param_1 + 0x230) * *(double *)(param_1 + 0x128) -
              *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x238)) -
              *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x240)) {
      if ((double)*(float *)(param_1 + 0x490) < local_30[0]) {
        FUN_144a76660(local_30,&local_48);
        param_2[2] = local_38;
        *param_2 = local_48;
        param_2[1] = uStack_40;
        uVar2 = 1;
        goto LAB_1479c679f;
      }
    }
  }
  uVar2 = 0;
LAB_1479c679f:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c67c0 FUN_1479c67c0 body=62 status=ok
// SIG undefined FUN_1479c67c0(void)

void FUN_1479c67c0(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((longlong)param_1 + 0x349);
  (**(code **)(*param_1 + 0x900))();
  *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) & 0xef | bVar1 & 0x10;
  return;
}



// FUNCTION 1479c67fe FUN_1479c67fe body=136 status=ok
// SIG undefined FUN_1479c67fe(void)

void FUN_1479c67fe(longlong *param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  undefined8 param_6)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    if (param_4 <= 0.0) {
      param_4 = 0.0;
    }
    if (param_4 <= param_3) {
      param_3 = param_4;
    }
    if (param_3 <= 0.0) {
      param_3 = 0.0;
    }
    if (param_5 <= 0.0) {
      param_5 = 0.0;
    }
    (**(code **)(*param_1 + 0x910))(param_1,param_2,param_3,param_4,param_6,param_5,0);
  }
  return;
}



// FUNCTION 1479c6886 FUN_1479c6886 body=396 status=ok
// SIG undefined FUN_1479c6886(void)

undefined8
FUN_1479c6886(longlong *param_1,undefined4 param_2,longlong param_3,float param_4,uint *param_5)

{
  longlong lVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  undefined8 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_98 [32];
  uint *local_78;
  undefined4 local_70;
  undefined8 local_68;
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0.0 < param_4) {
    lVar1 = *(longlong *)(param_1[0x3e] + 0x438);
    dVar7 = *(double *)(lVar1 + 0x280);
    if (*(double *)(lVar1 + 0x288) <= *(double *)(lVar1 + 0x280)) {
      dVar7 = *(double *)(lVar1 + 0x288);
    }
    pdVar4 = (double *)(param_3 + 0x70);
    if ((*(byte *)((longlong)param_1 + 0x5b6) & 4) == 0) {
      pdVar4 = (double *)(param_3 + 0x10);
    }
    local_48 = pdVar4[2];
    local_58 = *pdVar4;
    dStack_50 = pdVar4[1];
    dVar8 = (double)((float)*(double *)(lVar1 + 0x290) * *(float *)(lVar1 + 0x640)) +
            ((-(double)param_1[0x46] * (*(double *)(param_3 + 0x28) - local_58) -
             (*(double *)(param_3 + 0x30) - dStack_50) * (double)param_1[0x47]) -
            (*(double *)(param_3 + 0x38) - local_48) * (double)param_1[0x48]);
    dVar2 = 0.0;
    if (0.0 <= dVar8) {
      dVar2 = dVar8;
    }
    fVar6 = param_4 - (float)dVar2;
    fVar9 = 0.0;
    if (0.0 <= fVar6) {
      fVar9 = fVar6;
    }
    local_78 = param_5;
    local_68 = 0;
    local_70 = param_2;
    (**(code **)(*param_1 + 0x910))
              (fVar6,&local_58,fVar9,(float)dVar7 * *(float *)(lVar1 + 0x644) + param_4);
    uVar3 = ~*param_5;
    if ((uVar3 & 3) == 0) {
      uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      if ((float)dVar2 + (float)param_5[1] <= param_4) goto LAB_1479c69e0;
      *param_5 = *param_5 & 0xfffffffd;
    }
  }
  uVar5 = 0;
LAB_1479c69e0:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c6a14 FUN_1479c6a14 body=111 status=ok
// SIG undefined FUN_1479c6a14(void)

undefined8 FUN_1479c6a14(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  wchar_t *pwVar3;
  
  if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x1f0) + 0x1c8), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x480))(plVar1,0);
    if (cVar2 != '\0') {
      pwVar3 = L"Rigid Body";
      goto LAB_1479c6a71;
    }
  }
  if ((ulonglong)*(byte *)(param_1 + 0x291) < 7) {
    pwVar3 = (wchar_t *)(&PTR_u_NULL_14a83cef8)[*(byte *)(param_1 + 0x291)];
  }
  else {
    pwVar3 = L"Unknown";
  }
LAB_1479c6a71:
  FUN_140056680(param_2,pwVar3);
  return param_2;
}



// FUNCTION 1479c6a84 FUN_1479c6a84 body=1345 status=ok
// SIG undefined FUN_1479c6a84(void)

void FUN_1479c6a84(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  float fVar10;
  float extraout_XMM0_Da;
  undefined1 auStack_108 [32];
  undefined2 *local_e8;
  undefined2 *local_e0;
  double local_d8;
  undefined4 local_c4;
  undefined2 *local_c0;
  int local_b8;
  undefined2 *local_b0;
  int local_a8;
  undefined2 *local_a0;
  int local_98;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  undefined8 uStack_78;
  undefined2 *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0x3e] != 0) {
    *(undefined4 *)(param_2 + 0xd8) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xdc) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe0) = 0x3f800000;
    *(undefined4 *)(param_2 + 0xe4) = 0x3f800000;
    uVar3 = (**(code **)(param_1[0x2f] + 0xd0))(param_1 + 0x2f);
    local_e8 = (undefined2 *)param_1[0xa2];
    FUN_140002266(&local_80,L"X=%3.3f Y=%3.3f Z=%3.3f",param_1[0xa0],param_1[0xa1]);
    puVar6 = local_80;
    if ((int)uStack_78 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    param_2 = param_2 + 0xa8;
    FUN_140002266(&local_70,L"CHARACTER MOVEMENT Floor %s Crouched %i",puVar6,uVar3);
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2,&local_70,&local_80);
    local_80 = *(undefined2 **)(param_1[0x22] + 0x18);
    FUN_1400021e4(&local_80,&local_90);
    puVar6 = local_90;
    if (local_88 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_80,L"Updated Component: %s",puVar6);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    uStack_68 = uStack_78;
    local_80 = (undefined2 *)0x0;
    uStack_78 = 0;
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2,&local_70);
    FUN_141706e52(param_1 + 0x71,&local_90);
    puVar6 = local_90;
    if (local_88 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_80,L"Acceleration: %s",puVar6);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    uStack_68 = uStack_78;
    local_80 = (undefined2 *)0x0;
    uStack_78 = 0;
    if (local_90 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2,&local_70);
    FUN_140002266(&local_80,L"bForceMaxAccel: %i",*(byte *)((longlong)param_1 + 0x349) >> 2 & 1);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    uStack_68 = uStack_78;
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2,&local_70);
    FUN_140002266(&local_80,L"RootMotionSources: %d active",(int)param_1[0x1b3]);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    uStack_68 = uStack_78;
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2);
    lVar4 = (**(code **)(*param_1 + 0x4a0))(param_1);
    lVar1 = *(longlong *)(param_1[0x3e] + 0x450);
    if (lVar1 == 0) {
      uVar5 = (**(code **)(*param_1 + 0x478))(param_1);
      puVar6 = &DAT_149e01fe8;
      local_c4 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      puVar8 = &DAT_149e01fe8;
      fVar10 = extraout_XMM0_Da;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0xa8);
      fVar10 = (float)(**(code **)(*param_1 + 0x478))(param_1);
      local_a0 = *(undefined2 **)(lVar1 + 0x18);
      uVar5 = FUN_1400021e4(&local_a0,&local_90);
      puVar6 = local_90;
      if (local_88 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      if (lVar2 == 0) {
        puVar8 = &DAT_149e01fe8;
        local_c4 = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
      }
      else {
        local_b0 = *(undefined2 **)(lVar2 + 0x18);
        FUN_1400021e4(&local_b0,&local_a0);
        puVar8 = local_a0;
        if (local_98 == 0) {
          puVar8 = &DAT_149dfb77a;
        }
        local_c4 = 0;
      }
    }
    if (lVar4 == 0) {
      puVar9 = &DAT_149e01fe8;
    }
    else {
      local_c0 = *(undefined2 **)(lVar4 + 0x18);
      FUN_1400021e4(&local_c0,&local_b0);
      puVar9 = local_b0;
      if (local_a8 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
    }
    (**(code **)(*param_1 + 0x840))(param_1,&local_c0);
    puVar7 = local_c0;
    if (local_b8 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    local_d8 = (double)fVar10;
    local_e8 = puVar8;
    local_e0 = puVar6;
    FUN_140002266(&local_80,L"%s In physicsvolume %s on base %s component %s gravity %f",puVar7,
                  puVar9);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = local_80;
    uStack_68 = uStack_78;
    local_80 = (undefined2 *)0x0;
    uStack_78 = 0;
    if (local_c0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar4 != 0) && (local_b0 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    if (((char)local_c4 == '\0') && (local_a0 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    if ((lVar1 != 0) && (local_90 != (undefined2 *)0x0)) {
      FUN_1400020a8();
    }
    local_80 = (undefined2 *)((ulonglong)local_80 & 0xffffffff00000000);
    FUN_147d8f316(param_2,&local_70);
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c6fca FUN_1479c6fca body=133 status=ok
// SIG undefined FUN_1479c6fca(void)

void FUN_1479c6fca(longlong param_1)

{
  double dVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x40))(param_1 + 0x1e8);
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    if (lVar3 == 0) {
      lVar3 = FUN_1448abda6(param_1);
    }
    dVar1 = *(double *)(lVar3 + 0x6d0);
    lVar3 = *(longlong *)(param_1 + 0x818);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x30))(param_1 + 0x1e8);
      *(longlong *)(param_1 + 0x818) = lVar3;
    }
    *(float *)(lVar3 + 0xa8) = (float)(dVar1 + -10.0);
  }
  return;
}



// FUNCTION 1479c7050 FUN_1479c7050 body=76 status=ok
// SIG undefined FUN_1479c7050(void)

longlong FUN_1479c7050(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x628);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(400,0x10);
    FUN_14126fe3c(lVar1,param_1 + -0x1e8);
    *(longlong *)(param_1 + 0x628) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1479c709c FUN_1479c709c body=76 status=ok
// SIG undefined FUN_1479c709c(void)

longlong FUN_1479c709c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x630);
  if (lVar1 == 0) {
    lVar1 = FUN_14001cc68(0xd0,0x10);
    FUN_1414fc186(lVar1,param_1 + -0x1e8);
    *(longlong *)(param_1 + 0x630) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1479c70e8 FUN_1479c70e8 body=1049 status=ok
// SIG undefined FUN_1479c70e8(void)

void FUN_1479c70e8(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  undefined4 local_200;
  undefined4 *local_1f8;
  undefined8 *local_1f0;
  longlong local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8;
  undefined8 *local_1d0;
  longlong local_1c8;
  undefined1 local_1c0;
  undefined1 local_1b5;
  undefined4 local_1b4;
  longlong local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  longlong local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined1 local_65;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_64 = 0;
  local_65 = 0;
  (**(code **)(*param_2 + 0x60))(param_2);
  puVar10 = (undefined8 *)FUN_14479d2ce(param_2 + 0x5a);
  lVar2 = param_2[0x5b];
  if ((puVar10 == (undefined8 *)0x0) || (*(char *)((longlong)puVar10 + 0x1fb) != '\x02')) {
    FUN_1403ed616(&local_88,param_2 + 0x48,param_1);
  }
  else {
    local_78 = param_2[0x53];
    local_88 = (undefined4)param_2[0x51];
    uStack_84 = *(undefined4 *)((longlong)param_2 + 0x28c);
    uStack_80 = (undefined4)param_2[0x52];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0x294);
  }
  if (param_3 != (longlong *)0x0) {
    uVar8 = (**(code **)(*param_3 + 0x50))(param_3);
    local_a8 = (undefined4)param_3[0x65];
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x32c);
    uStack_a0 = (undefined4)param_3[0x66];
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x334);
    local_98 = param_3[0x67];
    (**(code **)(*param_1 + 0xb30))
              (param_1,*(undefined4 *)((longlong)param_3 + 0x14),&local_a8,uVar8);
  }
  lVar11 = param_1[0x102];
  if (lVar11 == 0) {
    lVar11 = (**(code **)(param_1[0x3d] + 0x28))(param_1 + 0x3d);
    param_1[0x102] = lVar11;
  }
  uVar8 = local_64;
  uVar1 = local_65;
  plVar3 = *(longlong **)(lVar11 + 0x38);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = *(undefined1 *)((longlong)param_2 + 0x13);
    uVar7 = (**(code **)(*param_2 + 0x50))(param_2);
    local_178 = local_78;
    local_188 = CONCAT44(uStack_84,local_88);
    uStack_180 = CONCAT44(uStack_7c,uStack_80);
    local_1a8 = (undefined4)param_2[0x65];
    uStack_1a4 = *(undefined4 *)((longlong)param_2 + 0x32c);
    uStack_1a0 = (undefined4)param_2[0x66];
    uStack_19c = *(undefined4 *)((longlong)param_2 + 0x334);
    local_198 = param_2[0x67];
    local_1f8 = (undefined4 *)CONCAT44(local_1f8._4_4_,uVar8);
    local_200 = CONCAT31(local_200._1_3_,uVar1);
    local_208 = CONCAT31(local_208._1_3_,uVar7);
    local_1f0 = puVar10;
    local_1e8 = lVar2;
    local_1e0 = uVar6;
    (**(code **)(*param_1 + 0xae8))(param_1,*(undefined4 *)((longlong)param_2 + 0x14));
  }
  else {
    local_ac = 0;
    local_ad = 0;
    local_1b0 = lVar2;
    (**(code **)(*plVar3 + 0x60))(plVar3);
    cVar5 = FUN_140fbf550((longlong)plVar3 + 0x364);
    local_1d0 = puVar10;
    if (cVar5 != '\0') {
      cVar5 = FUN_140fbf550((longlong)param_2 + 0x364);
      if (cVar5 == '\0') {
        uVar1 = *(undefined1 *)((longlong)param_2 + 0x13);
        local_1b4 = local_64;
        local_1b5 = local_65;
        uVar6 = (**(code **)(*param_2 + 0x50))(param_2);
        uVar4 = local_ac;
        local_b8 = local_78;
        local_c8 = CONCAT44(uStack_84,local_88);
        uStack_c0 = CONCAT44(uStack_7c,uStack_80);
        local_e8 = (undefined4)param_2[0x65];
        uStack_e4 = *(undefined4 *)((longlong)param_2 + 0x32c);
        uStack_e0 = (undefined4)param_2[0x66];
        uStack_dc = *(undefined4 *)((longlong)param_2 + 0x334);
        local_d8 = param_2[0x67];
        uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
        uVar9 = (**(code **)(*plVar3 + 0x50))(plVar3);
        local_108 = (undefined4)plVar3[0x65];
        uStack_104 = *(undefined4 *)((longlong)plVar3 + 0x32c);
        uStack_100 = (undefined4)plVar3[0x66];
        uStack_fc = *(undefined4 *)((longlong)plVar3 + 0x334);
        local_f8 = plVar3[0x67];
        local_1c8 = local_1b0;
        local_1d8 = local_1b4;
        local_1e0 = local_1b5;
        local_1e8 = CONCAT71(local_1e8._1_7_,uVar6);
        local_208 = uVar4;
        local_200 = uVar8;
        local_1f8 = &local_e8;
        local_1f0 = &local_c8;
        local_1c0 = uVar1;
        (**(code **)(*param_1 + 0xb18))
                  (param_1,*(undefined4 *)((longlong)plVar3 + 0x14),&local_108,uVar9);
        goto LAB_1479c7347;
      }
    }
    uVar1 = *(undefined1 *)((longlong)param_2 + 0x13);
    local_1b4 = local_64;
    local_1b5 = local_65;
    uVar6 = (**(code **)(*param_2 + 0x50))(param_2);
    uVar4 = local_ac;
    local_118 = local_78;
    local_128 = CONCAT44(uStack_84,local_88);
    uStack_120 = CONCAT44(uStack_7c,uStack_80);
    local_148 = (undefined4)param_2[0x65];
    uStack_144 = *(undefined4 *)((longlong)param_2 + 0x32c);
    uStack_140 = (undefined4)param_2[0x66];
    uStack_13c = *(undefined4 *)((longlong)param_2 + 0x334);
    local_138 = param_2[0x67];
    uVar8 = *(undefined4 *)((longlong)param_2 + 0x14);
    uVar9 = (**(code **)(*plVar3 + 0x50))(plVar3);
    local_168 = (undefined4)plVar3[0x65];
    uStack_164 = *(undefined4 *)((longlong)plVar3 + 0x32c);
    uStack_160 = (undefined4)plVar3[0x66];
    uStack_15c = *(undefined4 *)((longlong)plVar3 + 0x334);
    local_158 = plVar3[0x67];
    local_1c8 = local_1b0;
    local_1d8 = local_1b4;
    local_1e0 = local_1b5;
    local_1e8 = CONCAT71(local_1e8._1_7_,uVar6);
    local_208 = uVar4;
    local_200 = uVar8;
    local_1f8 = &local_148;
    local_1f0 = &local_128;
    local_1c0 = uVar1;
    (**(code **)(*param_1 + 0xb00))
              (param_1,*(undefined4 *)((longlong)plVar3 + 0x14),&local_168,uVar9);
  }
LAB_1479c7347:
  FUN_140bdc5b6(param_1);
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7502 FUN_1479c7502 body=458 status=ok
// SIG undefined FUN_1479c7502(void)

void FUN_1479c7502(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  longlong lVar1;
  undefined1 auStack_748 [32];
  undefined1 local_728;
  undefined1 local_720;
  undefined4 local_718;
  undefined8 local_710;
  undefined8 local_708;
  undefined1 local_700;
  undefined4 local_6f8;
  undefined4 uStack_6f4;
  undefined4 uStack_6f0;
  undefined4 uStack_6ec;
  undefined8 local_6e8;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 local_6c8;
  undefined4 local_6b8;
  undefined4 uStack_6b4;
  undefined4 uStack_6b0;
  undefined4 uStack_6ac;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_690;
  undefined1 local_688 [1560];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_748;
  if ((*(byte *)((longlong)param_1 + 0x349) & 2) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1[0x22];
  }
  FUN_1402ed838(local_688,lVar1,1,1);
  local_6a0 = 0x3ff0000000000000;
  local_698 = 0x4000000000000000;
  local_690 = 0x4008000000000000;
  local_6b8 = *param_3;
  uStack_6b4 = param_3[1];
  uStack_6b0 = param_3[2];
  uStack_6ac = param_3[3];
  local_6a8 = *(undefined8 *)(param_3 + 4);
  local_700 = param_14;
  local_708 = param_13;
  local_710 = param_12;
  local_718 = param_5;
  local_720 = param_10;
  local_728 = param_4;
  (**(code **)(*param_1 + 0xaf0))(param_1,param_2);
  local_6c8 = param_8[2];
  local_6d8 = *param_8;
  uStack_6d0 = param_8[1];
  local_6f8 = *param_7;
  uStack_6f4 = param_7[1];
  uStack_6f0 = param_7[2];
  uStack_6ec = param_7[3];
  local_6e8 = *(undefined8 *)(param_7 + 4);
  local_700 = param_14;
  local_708 = param_13;
  local_710 = param_12;
  local_718 = param_11;
  local_720 = param_10;
  local_728 = param_9;
  (**(code **)(*param_1 + 0xaf0))(param_1,param_6);
  FUN_14490e692(local_688);
  if ((local_70 ^ (ulonglong)auStack_748) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c76ce FUN_1479c76ce body=484 status=ok
// SIG undefined FUN_1479c76ce(void)

void FUN_1479c76ce(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined1 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar3 = param_1[0x3e];
  if (*(longlong **)(lVar3 + 0x428) == (longlong *)0x0) {
    bVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(lVar3 + 0x428) + 0xbb0))();
    bVar2 = cVar1 << 2;
    lVar3 = param_1[0x3e];
  }
  *(byte *)(lVar3 + 0x551) = *(byte *)(lVar3 + 0x551) & 0xfb | bVar2;
  local_88 = 0x3ff0000000000000;
  local_80 = 0x4000000000000000;
  local_78 = 0x4008000000000000;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = *(undefined8 *)(param_3 + 4);
  local_f0 = param_14;
  local_f8 = param_13;
  local_100 = param_12;
  local_108 = param_5;
  local_110 = param_10;
  local_118 = param_4;
  (**(code **)(*param_1 + 0xaf0))(param_1,param_2);
  *(byte *)(param_1[0x3e] + 0x551) = *(byte *)(param_1[0x3e] + 0x551) & 0xfb;
  local_b8 = param_8[2];
  local_c8 = *param_8;
  uStack_c0 = param_8[1];
  local_e8 = *param_7;
  uStack_e4 = param_7[1];
  uStack_e0 = param_7[2];
  uStack_dc = param_7[3];
  local_d8 = *(undefined8 *)(param_7 + 4);
  local_f0 = param_14;
  local_f8 = param_13;
  local_100 = param_12;
  local_108 = param_11;
  local_110 = param_10;
  local_118 = param_9;
  (**(code **)(*param_1 + 0xaf0))(param_1,param_6);
  if ((local_70 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c78b6 FUN_1479c78b6 body=298 status=ok
// SIG undefined FUN_1479c78b6(void)

void FUN_1479c78b6(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,longlong param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined1 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
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
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_8 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x1f0);
    if (*(char *)(param_8 + 0x1fb) == '\x02') {
      local_38 = param_4[2];
      local_48 = *param_4;
      uStack_40 = param_4[1];
      local_68 = *param_3;
      uStack_64 = param_3[1];
      uStack_60 = param_3[2];
      uStack_5c = param_3[3];
      local_58 = *(undefined8 *)(param_3 + 4);
      local_b0 = param_10;
      local_b8 = param_9;
      local_c0 = param_8;
      local_c8 = param_7;
      local_d0 = param_6;
      local_d8 = param_5;
      FUN_1479955a0(uVar1,&local_68,&local_68,&local_48);
      goto LAB_1479c79ba;
    }
  }
  local_78 = param_4[2];
  local_88 = *param_4;
  uStack_80 = param_4[1];
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = *(undefined8 *)(param_3 + 4);
  local_c0 = CONCAT71(local_c0._1_7_,param_10);
  local_c8 = param_7;
  local_d0 = param_6;
  local_d8 = param_5;
  FUN_147997042(uVar1,&local_a8,&local_a8,&local_88);
LAB_1479c79ba:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c79e6 FUN_1479c79e6 body=435 status=ok
// SIG undefined FUN_1479c79e6(void)

void FUN_1479c79e6(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,longlong param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined4 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (param_12 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x1f0);
    if (*(char *)(param_12 + 0x1fb) == '\x02') {
      local_48 = param_8[2];
      local_130 = &local_58;
      local_58 = *param_8;
      uStack_50 = param_8[1];
      local_78 = *param_7;
      uStack_70 = param_7[1];
      local_138 = &local_78;
      local_68 = param_7[2];
      local_98 = *param_3;
      uStack_94 = param_3[1];
      uStack_90 = param_3[2];
      uStack_8c = param_3[3];
      local_88 = *(undefined8 *)(param_3 + 4);
      local_100 = param_14;
      local_108 = param_13;
      local_110 = param_12;
      local_118 = param_11;
      local_120 = param_10;
      local_128 = param_9;
      local_140 = param_6;
      local_148 = param_5;
      FUN_147995aaa(uVar1,param_5,&local_98);
      goto LAB_1479c7b6d;
    }
  }
  local_a8 = param_8[2];
  local_130 = &local_b8;
  local_b8 = *param_8;
  uStack_b0 = param_8[1];
  local_d8 = *param_7;
  uStack_d0 = param_7[1];
  local_138 = &local_d8;
  local_c8 = param_7[2];
  local_f8 = *param_3;
  uStack_f4 = param_3[1];
  uStack_f0 = param_3[2];
  uStack_ec = param_3[3];
  local_e8 = *(undefined8 *)(param_3 + 4);
  local_110 = CONCAT71(local_110._1_7_,param_14);
  local_118 = param_11;
  local_120 = param_10;
  local_128 = param_9;
  local_140 = param_6;
  local_148 = param_5;
  FUN_1479969ca(uVar1,param_5,&local_f8);
LAB_1479c7b6d:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7b9e FUN_1479c7b9e body=266 status=ok
// SIG undefined FUN_1479c7b9e(void)

void FUN_1479c7b9e(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined4 param_12,
                  undefined4 param_13,undefined1 param_14)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8;
  undefined1 local_b0;
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 uStack_98;
  undefined1 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_38 = param_8[2];
  local_c0 = &local_48;
  local_48 = *param_8;
  uStack_40 = param_8[1];
  local_58 = param_7[2];
  local_c8 = &local_68;
  local_68 = *param_7;
  uStack_60 = param_7[1];
  local_88 = *param_3;
  uStack_84 = param_3[1];
  uStack_80 = param_3[2];
  uStack_7c = param_3[3];
  local_78 = *(undefined8 *)(param_3 + 4);
  local_90 = param_14;
  local_a0 = param_12;
  uStack_98 = param_13;
  local_a8 = param_11;
  local_b0 = param_10;
  local_b8 = param_9;
  local_d0 = param_6;
  local_d8 = param_5;
  FUN_14799623a(*(undefined8 *)(param_1 + 0x1f0),param_5,&local_88);
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7cae FUN_1479c7cae body=81 status=ok
// SIG undefined FUN_1479c7cae(void)

void FUN_1479c7cae(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *(undefined8 *)(param_3 + 4);
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  FUN_147997472(*(undefined8 *)(param_1 + 0x1f0),local_18,&local_28);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7d04 FUN_1479c7d04 body=135 status=ok
// SIG undefined FUN_1479c7d04(void)

void FUN_1479c7d04(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined1 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *(undefined8 *)(param_3 + 4);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_40 = param_8;
  local_48 = param_7;
  local_50 = param_6;
  local_58 = param_5;
  FUN_1479949ea(*(undefined8 *)(param_1 + 0x1f0),param_5,&local_38);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7d8c FUN_1479c7d8c body=219 status=ok
// SIG undefined FUN_1479c7d8c(void)

void FUN_1479c7d8c(longlong *param_1,undefined4 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 != '\0') {
    local_38 = DAT_14c8464f0;
    local_48 = DAT_14c8464e0;
    uStack_40 = DAT_14c8464e8;
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = param_3[3];
    local_58 = *(undefined8 *)(param_3 + 4);
    local_78 = param_8;
    local_80 = param_7;
    local_88 = param_6;
    local_90 = param_5;
    local_98 = param_4;
    (**(code **)(*param_1 + 0xb50))(param_1,param_2);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7e68 FUN_1479c7e68 body=168 status=ok
// SIG undefined FUN_1479c7e68(void)

void FUN_1479c7e68(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8,
                  undefined1 param_9)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_18 = param_4[2];
  local_28 = *param_4;
  uStack_20 = param_4[1];
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  local_38 = *(undefined8 *)(param_3 + 4);
  local_58 = param_9;
  local_60 = param_8;
  local_68 = param_7;
  local_78 = param_5;
  uStack_70 = param_6;
  FUN_1479938b6(*(undefined8 *)(param_1 + 0x1f0),&local_48,&local_48,&local_28);
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7f12 FUN_1479c7f12 body=195 status=ok
// SIG undefined FUN_1479c7f12(void)

void FUN_1479c7f12(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10,undefined1 param_11)

{
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_70;
  undefined1 local_68;
  undefined1 local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_18 = param_5[2];
  local_88 = &local_28;
  local_28 = *param_5;
  uStack_20 = param_5[1];
  local_48 = *param_4;
  uStack_40 = param_4[1];
  local_38 = param_4[2];
  local_58 = param_11;
  local_60 = param_10;
  local_68 = param_9;
  local_78 = param_7;
  uStack_70 = param_8;
  local_80 = param_6;
  FUN_147993cc8(*(undefined8 *)(param_1 + 0x1f0),param_9,param_10,&local_48);
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c7fd6 FUN_1479c7fd6 body=364 status=ok
// SIG undefined FUN_1479c7fd6(void)

void FUN_1479c7fd6(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 *param_6,undefined8 *param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined1 param_12,
                  undefined1 param_13)

{
  undefined8 uVar1;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 *local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110 [72];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar1 = *(undefined8 *)(param_1 + 0x1f0);
  local_98 = param_7[2];
  local_a8 = *param_7;
  uStack_a0 = param_7[1];
  local_c8 = *param_6;
  uStack_c4 = param_6[1];
  uStack_c0 = param_6[2];
  uStack_bc = param_6[3];
  local_b8 = *(undefined8 *)(param_6 + 4);
  FUN_14341f2e8(local_110,param_3);
  local_118 = param_13;
  local_120 = param_12;
  local_128 = param_11;
  local_138 = param_9;
  uStack_130 = param_10;
  local_140 = param_8;
  local_158 = param_5;
  local_150 = &local_c8;
  local_148 = &local_a8;
  FUN_1479941c0(uVar1,param_2,local_110,param_4);
  FUN_140d7a9b4(param_3);
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c8150 FUN_1479c8150 body=370 status=ok
// SIG undefined FUN_1479c8150(void)

void FUN_1479c8150(longlong *param_1,double *param_2,float param_3,float param_4,int param_5)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x22];
  dVar3 = *(double *)(lVar1 + 0x270) - param_2[2];
  dVar4 = *(double *)(lVar1 + 0x268) - param_2[1];
  dVar6 = *(double *)(lVar1 + 0x260) - *param_2;
  dVar2 = dVar3 * dVar3 + dVar6 * dVar6 + dVar4 * dVar4;
  fVar7 = (float)SQRT(dVar2);
  if (fVar7 <= param_3) {
    if (((dVar2 != 1.0) || (local_48 = dVar3, local_50 = dVar4, local_58 = dVar6, NAN(dVar2))) &&
       (local_48 = DAT_14c8464f0, local_50 = DAT_14c8464e8, local_58 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar2)) {
      dVar2 = 1.0 / SQRT(dVar2);
      local_48 = dVar3 * dVar2;
      local_50 = dVar4 * dVar2;
      local_58 = dVar6 * dVar2;
    }
    fVar5 = param_4;
    if (param_5 == 1) {
      fVar5 = (1.0 - fVar7 / param_3) * param_4;
    }
    dVar2 = (double)(float)(~-(uint)(0.0 < param_3) & (uint)param_4 |
                           (uint)fVar5 & -(uint)(0.0 < param_3));
    local_48 = local_48 * dVar2;
    local_50 = local_50 * dVar2;
    local_58 = local_58 * dVar2;
    (**(code **)(*param_1 + 0x850))();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c82c4 FUN_1479c82c4 body=382 status=ok
// SIG undefined FUN_1479c82c4(void)

void FUN_1479c82c4(longlong *param_1,double *param_2,float param_3,float param_4,int param_5,
                  undefined1 param_6)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[0x22];
  dVar3 = *(double *)(lVar1 + 0x270) - param_2[2];
  dVar4 = *(double *)(lVar1 + 0x268) - param_2[1];
  dVar6 = *(double *)(lVar1 + 0x260) - *param_2;
  dVar2 = dVar3 * dVar3 + dVar6 * dVar6 + dVar4 * dVar4;
  fVar7 = (float)SQRT(dVar2);
  if (fVar7 <= param_3) {
    if (((dVar2 != 1.0) || (local_48 = dVar3, local_50 = dVar4, local_58 = dVar6, NAN(dVar2))) &&
       (local_48 = DAT_14c8464f0, local_50 = DAT_14c8464e8, local_58 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar2)) {
      dVar2 = 1.0 / SQRT(dVar2);
      local_48 = dVar3 * dVar2;
      local_50 = dVar4 * dVar2;
      local_58 = dVar6 * dVar2;
    }
    fVar5 = param_4;
    if (param_5 == 1) {
      fVar5 = (1.0 - fVar7 / param_3) * param_4;
    }
    dVar2 = (double)(float)(~-(uint)(0.0 < param_3) & (uint)param_4 |
                           (uint)fVar5 & -(uint)(0.0 < param_3));
    local_48 = local_48 * dVar2;
    local_50 = local_50 * dVar2;
    local_58 = local_58 * dVar2;
    (**(code **)(*param_1 + 0x848))(local_48,&local_58,param_6);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479c8444 FUN_1479c8444 body=593 status=ok
// SIG undefined FUN_1479c8444(void)

void FUN_1479c8444(longlong param_1,double *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  *(double *)(param_1 + 0x2c0) = *param_2 + *(double *)(param_1 + 0x2c0);
  *(double *)(param_1 + 0x2c8) = param_2[1] + *(double *)(param_1 + 0x2c8);
  *(double *)(param_1 + 0x2d0) = param_2[2] + *(double *)(param_1 + 0x2d0);
  *(double *)(param_1 + 0x3c0) = *param_2 + *(double *)(param_1 + 0x3c0);
  *(double *)(param_1 + 0x3c8) = param_2[1] + *(double *)(param_1 + 0x3c8);
  *(double *)(param_1 + 0x3d0) = param_2[2] + *(double *)(param_1 + 0x3d0);
  if ((*(longlong *)(param_1 + 0x1f0) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x1f0) + 0x178) == '\x02')) {
    lVar3 = *(longlong *)(param_1 + 0x810);
    if (lVar3 == 0) {
      lVar3 = (**(code **)(*(longlong *)(param_1 + 0x1e8) + 0x28))(param_1 + 0x1e8);
      *(longlong *)(param_1 + 0x810) = lVar3;
      if (lVar3 == 0) {
        return;
      }
    }
    iVar1 = *(int *)(lVar3 + 0x20);
    if (1 < iVar1) {
      lVar4 = 0;
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar3 + 0x18) + lVar4);
        *(double *)(lVar5 + 0x30) = *param_2 + *(double *)(lVar5 + 0x30);
        *(double *)(lVar5 + 0x38) = param_2[1] + *(double *)(lVar5 + 0x38);
        *(double *)(lVar5 + 0x40) = param_2[2] + *(double *)(lVar5 + 0x40);
        *(double *)(lVar5 + 0x240) = *param_2 + *(double *)(lVar5 + 0x240);
        *(double *)(lVar5 + 0x248) = param_2[1] + *(double *)(lVar5 + 0x248);
        *(double *)(lVar5 + 0x250) = param_2[2] + *(double *)(lVar5 + 0x250);
        lVar4 = lVar4 + 0x10;
      } while ((ulonglong)(iVar1 - 1) << 4 != lVar4);
    }
    lVar4 = *(longlong *)(lVar3 + 0x38);
    if (lVar4 != 0) {
      *(double *)(lVar4 + 0x30) = *param_2 + *(double *)(lVar4 + 0x30);
      *(double *)(lVar4 + 0x38) = param_2[1] + *(double *)(lVar4 + 0x38);
      *(double *)(lVar4 + 0x40) = param_2[2] + *(double *)(lVar4 + 0x40);
      *(double *)(lVar4 + 0x240) = *param_2 + *(double *)(lVar4 + 0x240);
      *(double *)(lVar4 + 0x248) = param_2[1] + *(double *)(lVar4 + 0x248);
      *(double *)(lVar4 + 0x250) = param_2[2] + *(double *)(lVar4 + 0x250);
    }
    if (0 < *(int *)(lVar3 + 0x178)) {
      lVar4 = 0x10;
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar3 + 0x170);
        *(double *)(lVar2 + -0x10 + lVar4) = *param_2 + *(double *)(lVar2 + -0x10 + lVar4);
        *(double *)(lVar2 + -8 + lVar4) = param_2[1] + *(double *)(lVar2 + -8 + lVar4);
        *(double *)(lVar2 + lVar4) = param_2[2] + *(double *)(lVar2 + lVar4);
        lVar5 = lVar5 + 1;
        lVar4 = lVar4 + 0x68;
      } while (lVar5 < *(int *)(lVar3 + 0x178));
    }
  }
  return;
}



// FUNCTION 1479c8698 FUN_1479c8698 body=95 status=ok
// SIG undefined FUN_1479c8698(void)

undefined8 * FUN_1479c8698(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x450,0x10);
  FUN_1410f82e2(uVar1);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a83c6b0;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 1479c878c FUN_1479c878c body=516 status=ok
// SIG undefined FUN_1479c878c(void)

void FUN_1479c878c(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cad09b8 != 1) goto LAB_1479c886c;
  cVar5 = (**(code **)(*param_1 + 0x9b8))();
  if (cVar5 == '\0') goto LAB_1479c886c;
  lVar6 = FUN_14496b220(param_1[0x41]);
  if (*(char *)(lVar6 + 0x10) == '\0') {
    FUN_1479c8992(lVar6);
  }
  if (param_1[0x42] == 0) {
    plVar7 = (longlong *)FUN_14001cc68(0x380,0x10);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14a83c730;
    FUN_1479af334(plVar7 + 2);
    if (plVar7 == (longlong *)0x0) {
      param_1[0x42] = 0x10;
      plVar8 = (longlong *)param_1[0x43];
      if (plVar8 != (longlong *)0x0) {
        param_1[0x43] = 0;
LAB_1479c88fc:
        LOCK();
        plVar2 = plVar8 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
        if (plVar7 != (longlong *)0x0) goto LAB_1479c8924;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      param_1[0x42] = (longlong)(plVar7 + 2);
      plVar8 = (longlong *)param_1[0x43];
      if (plVar7 == plVar8) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
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
      else {
        param_1[0x43] = (longlong)plVar7;
        if (plVar8 != (longlong *)0x0) goto LAB_1479c88fc;
      }
LAB_1479c8924:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  lVar3 = param_1[0x42];
  lVar4 = param_1[0x43];
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  plVar7 = *(longlong **)(lVar6 + 0x3f8);
  *(longlong *)(lVar6 + 0x3f0) = lVar3;
  *(longlong *)(lVar6 + 0x3f8) = lVar4;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
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
  (**(code **)(*param_1 + 0x5a0))(param_1,local_40);
  (**(code **)(*param_1 + 0x988))(param_1,local_40,lVar6);
  (**(code **)(*param_1 + 0x998))(param_1);
LAB_1479c886c:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c8992 FUN_1479c8992 body=174 status=ok
// SIG undefined FUN_1479c8992(void)

void FUN_1479c8992(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *_Dst;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  *puVar2 = &PTR_FUN_14a83c6d0;
  puVar1 = *(undefined8 **)(param_1 + 0x2a8);
  *(undefined8 **)(param_1 + 0x2a8) = puVar2;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  _Dst = (void *)FUN_14001cc68(0xf8);
  memset(_Dst,0,0xf8);
  FUN_14347453a(_Dst);
  puVar1 = *(undefined8 **)(param_1 + 0x2a0);
  *(void **)(param_1 + 0x2a0) = _Dst;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001479c8a35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1479c8a60 FUN_1479c8a60 body=831 status=ok
// SIG undefined FUN_1479c8a60(void)

void FUN_1479c8a60(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  longlong *plVar13;
  byte bVar14;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_2 + 0x360) == '\x01') {
    *(byte *)((longlong)param_1 + 0x5b7) =
         *(byte *)((longlong)param_1 + 0x5b7) & 0xfe | *(byte *)(param_2 + 0x18);
    lVar6 = *(longlong *)(param_2 + 0x30);
    param_1[0x71] = *(longlong *)(param_2 + 0x28);
    param_1[0x72] = lVar6;
    param_1[0x73] = *(longlong *)(param_2 + 0x38);
    *(undefined4 *)(param_1 + 0x86) = *(undefined4 *)(param_2 + 0x40);
    param_1[0x7a] = *(longlong *)(param_2 + 0x58);
    lVar6 = *(longlong *)(param_2 + 0x50);
    param_1[0x78] = *(longlong *)(param_2 + 0x48);
    param_1[0x79] = lVar6;
    lVar6 = *(longlong *)(param_2 + 0x60);
    lVar10 = *(longlong *)(param_2 + 0x68);
    uVar7 = *(undefined4 *)(param_2 + 0x74);
    uVar8 = *(undefined4 *)(param_2 + 0x78);
    uVar9 = *(undefined4 *)(param_2 + 0x7c);
    *(undefined4 *)(param_1 + 0x76) = *(undefined4 *)(param_2 + 0x70);
    *(undefined4 *)((longlong)param_1 + 0x3b4) = uVar7;
    *(undefined4 *)(param_1 + 0x77) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x3bc) = uVar9;
    param_1[0x74] = lVar6;
    param_1[0x75] = lVar10;
    param_1[0x7d] = *(longlong *)(param_2 + 0x90);
    uVar7 = *(undefined4 *)(param_2 + 0x84);
    uVar8 = *(undefined4 *)(param_2 + 0x88);
    uVar9 = *(undefined4 *)(param_2 + 0x8c);
    *(undefined4 *)(param_1 + 0x7b) = *(undefined4 *)(param_2 + 0x80);
    *(undefined4 *)((longlong)param_1 + 0x3dc) = uVar7;
    *(undefined4 *)(param_1 + 0x7c) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x3e4) = uVar9;
    *(byte *)((longlong)param_1 + 0x349) =
         *(byte *)((longlong)param_1 + 0x349) & 0xef | *(char *)(param_2 + 0x98) << 4;
    cVar1 = *(char *)((longlong)param_1 + 0x291);
    cVar2 = *(char *)((longlong)param_1 + 0x292);
    cVar3 = *(char *)(param_2 + 0x1c);
    *(char *)((longlong)param_1 + 0x291) = cVar3;
    cVar4 = *(char *)(param_2 + 0x24);
    *(char *)((longlong)param_1 + 0x292) = cVar4;
    if (((longlong *)param_1[0x3e] != (longlong *)0x0) && (cVar4 != cVar2 || cVar3 != cVar1)) {
      (**(code **)(*(longlong *)param_1[0x3e] + 0x888))();
    }
    param_1[0x27] = *(longlong *)(param_2 + 0xb0);
    uVar7 = *(undefined4 *)(param_2 + 0xa4);
    uVar8 = *(undefined4 *)(param_2 + 0xa8);
    uVar9 = *(undefined4 *)(param_2 + 0xac);
    *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)((longlong)param_1 + 300) = uVar7;
    *(undefined4 *)(param_1 + 0x26) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x134) = uVar9;
    (**(code **)(*param_1 + 0x970))
              (param_1,*(undefined4 *)(param_2 + 0x2e0),param_2 + 0x300,param_2 + 0x2e8);
    bVar14 = *(byte *)((longlong)param_1 + 0x5bc);
    bVar11 = *(char *)(param_2 + 0xd1) << 4;
    *(byte *)((longlong)param_1 + 0x5bc) = bVar14 & 0xef | bVar11;
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xd4);
    param_1[0x85] = *(longlong *)(param_2 + 0xe8);
    lVar6 = *(longlong *)(param_2 + 0xe0);
    param_1[0x83] = *(longlong *)(param_2 + 0xd8);
    param_1[0x84] = lVar6;
    param_1[0x82] = *(longlong *)(param_2 + 0x100);
    lVar6 = *(longlong *)(param_2 + 0xf8);
    param_1[0x80] = *(longlong *)(param_2 + 0xf0);
    param_1[0x81] = lVar6;
    param_1[199] = *(longlong *)(param_2 + 0x118);
    lVar6 = *(longlong *)(param_2 + 0x110);
    param_1[0xc5] = *(longlong *)(param_2 + 0x108);
    param_1[0xc6] = lVar6;
    bVar5 = *(byte *)((longlong)param_1 + 0x5b5);
    bVar12 = *(char *)(param_2 + 0x120) << 6;
    *(byte *)((longlong)param_1 + 0x5b5) = bVar5 & 0xbf | bVar12;
    *(byte *)((longlong)param_1 + 0x5b4) =
         *(byte *)((longlong)param_1 + 0x5b4) & 0xdf | *(char *)(param_2 + 0x121) << 5;
    *(byte *)((longlong)param_1 + 0x5b5) = bVar5 & 0x9f | bVar12 | *(char *)(param_2 + 0x12d) << 5;
    *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) & 0x7f | *(char *)(param_2 + 0x12e) << 7;
    memcpy(param_1 + 0x93,(void *)(param_2 + 0x130),0x110);
    bVar14 = bVar14 & 0xee | bVar11 | *(byte *)(param_2 + 0x240);
    *(byte *)((longlong)param_1 + 0x5bc) = bVar14;
    *(byte *)((longlong)param_1 + 0x5bc) = bVar14 & 0xfd | *(char *)(param_2 + 0x241) * '\x02';
    param_1[0xbe] = *(longlong *)(param_2 + 600);
    lVar6 = *(longlong *)(param_2 + 0x250);
    param_1[0xbc] = *(longlong *)(param_2 + 0x248);
    param_1[0xbd] = lVar6;
    uVar7 = *(undefined4 *)(param_2 + 0x264);
    uVar8 = *(undefined4 *)(param_2 + 0x268);
    uVar9 = *(undefined4 *)(param_2 + 0x26c);
    *(undefined4 *)(param_1 + 0xbf) = *(undefined4 *)(param_2 + 0x260);
    *(undefined4 *)((longlong)param_1 + 0x5fc) = uVar7;
    *(undefined4 *)(param_1 + 0xc0) = uVar8;
    *(undefined4 *)((longlong)param_1 + 0x604) = uVar9;
    param_1[0xc1] = *(longlong *)(param_2 + 0x270);
    if (param_1[0x3e] == 0) {
      *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x278);
    }
    else {
      FUN_147998a58(param_1[0x3e],*(undefined8 *)(param_2 + 0x358));
      plVar13 = (longlong *)param_1[0x3e];
      *(undefined4 *)((longlong)param_1 + 0x43c) = *(undefined4 *)(param_2 + 0x278);
      if (plVar13 != (longlong *)0x0) {
        if (*(char *)(param_2 + 0x298) == '\x01') {
          FUN_1411c9292(plVar13[0x85],param_2 + 0x2a0,param_2 + 0x2c0);
          plVar13 = (longlong *)param_1[0x3e];
          if (plVar13 == (longlong *)0x0) goto LAB_1479c8d81;
        }
        lVar6 = *(longlong *)(param_2 + 0x358);
        local_28 = *(undefined8 *)(lVar6 + 0x18);
        local_38 = *(undefined4 *)(lVar6 + 8);
        uStack_34 = *(undefined4 *)(lVar6 + 0xc);
        uStack_30 = *(undefined4 *)(lVar6 + 0x10);
        uStack_2c = *(undefined4 *)(lVar6 + 0x14);
        (**(code **)(*plVar13 + 0x730))(local_38,&local_38,0);
      }
    }
  }
LAB_1479c8d81:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479c8da0 FUN_1479c8da0 body=168 status=ok
// SIG undefined FUN_1479c8da0(void)

longlong * FUN_1479c8da0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  
  dVar3 = (double)FUN_1429e72e0(*(undefined8 *)(param_1 + 0x18));
  lVar2 = *(longlong *)(param_1 + 0xa0);
  if (lVar2 == 0) {
    lVar2 = **(longlong **)(param_1 + 0x98);
    if (lVar2 != 0) {
      *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar2 + 8);
      lVar1 = *(longlong *)(param_1 + 0x98);
      *(longlong *)(param_1 + 0x98) = lVar2;
      *(undefined8 *)(lVar2 + 8) = 0;
      if (lVar1 != 0) {
        FUN_1400020a8();
      }
    }
    lVar2 = *(longlong *)(param_1 + 0xa0);
    if (lVar2 == 0) goto LAB_1479c8dd1;
  }
  if (*(double *)(lVar2 + 0x10) <= dVar3) {
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *param_2 = lVar2 + 0x10;
    param_2[1] = param_1;
    return param_2;
  }
LAB_1479c8dd1:
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1479c8e48 FUN_1479c8e48 body=103 status=ok
// SIG undefined FUN_1479c8e48(void)

undefined8 * FUN_1479c8e48(longlong param_1)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb0);
  memset(_Dst,0,0xb0);
  FUN_1479d9202(_Dst);
  *_Dst = &PTR_FUN_14a83c750;
  if ((*(byte *)((longlong)_Dst + 0x41) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1e8) = 1;
  }
  _Dst[3] = param_1;
  FUN_141300b68(param_1 + 0x70,_Dst);
  return _Dst;
}



// FUNCTION 1479c8ebc FUN_1479c8ebc body=54 status=ok
// SIG undefined FUN_1479c8ebc(void)

undefined8 FUN_1479c8ebc(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = 1;
  if ((*(char *)(param_1 + 0xf80) == '\x01') && ((*(byte *)(param_1 + 0x5b7) & 2) == 0)) {
    if (param_2 != 0) {
      FUN_14020fad6(param_2,L"AnimRootMotion");
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1479c8ef2 FUN_1479c8ef2 body=29 status=ok
// SIG undefined FUN_1479c8ef2(void)

undefined8 FUN_1479c8ef2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c8f20 FUN_1479c8f20 body=38 status=ok
// SIG undefined FUN_1479c8f20(void)

undefined8 FUN_1479c8f20(undefined8 param_1,int param_2)

{
  FUN_140595d6e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c8f46 FUN_1479c8f46 body=45 status=ok
// SIG undefined FUN_1479c8f46(void)

longlong FUN_1479c8f46(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e852(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c8f74 FUN_1479c8f74 body=45 status=ok
// SIG undefined FUN_1479c8f74(void)

longlong FUN_1479c8f74(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_146025ae8(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c8fa2 FUN_1479c8fa2 body=45 status=ok
// SIG undefined FUN_1479c8fa2(void)

longlong FUN_1479c8fa2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c8fd0 FUN_1479c8fd0 body=48 status=ok
// SIG undefined FUN_1479c8fd0(void)

longlong FUN_1479c8fd0(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9000 FUN_1479c9000 body=48 status=ok
// SIG undefined FUN_1479c9000(void)

longlong FUN_1479c9000(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9030 FUN_1479c9030 body=48 status=ok
// SIG undefined FUN_1479c9030(void)

longlong FUN_1479c9030(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9060 FUN_1479c9060 body=45 status=ok
// SIG undefined FUN_1479c9060(void)

longlong FUN_1479c9060(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9094 FUN_1479c9094 body=48 status=ok
// SIG undefined FUN_1479c9094(void)

longlong FUN_1479c9094(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9102 FUN_1479c9102 body=48 status=ok
// SIG undefined FUN_1479c9102(void)

longlong FUN_1479c9102(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9134 FUN_1479c9134 body=48 status=ok
// SIG undefined FUN_1479c9134(void)

longlong FUN_1479c9134(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9164 FUN_1479c9164 body=48 status=ok
// SIG undefined FUN_1479c9164(void)

longlong FUN_1479c9164(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c0;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9194 FUN_1479c9194 body=48 status=ok
// SIG undefined FUN_1479c9194(void)

longlong FUN_1479c9194(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2c8;
  FUN_145aa50c4(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c91c4 FUN_1479c91c4 body=45 status=ok
// SIG undefined FUN_1479c91c4(void)

longlong FUN_1479c91c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c91f2 FUN_1479c91f2 body=48 status=ok
// SIG undefined FUN_1479c91f2(void)

longlong FUN_1479c91f2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9222 FUN_1479c9222 body=48 status=ok
// SIG undefined FUN_1479c9222(void)

longlong FUN_1479c9222(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9252 FUN_1479c9252 body=48 status=ok
// SIG undefined FUN_1479c9252(void)

longlong FUN_1479c9252(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9290 FUN_1479c9290 body=34 status=ok
// SIG undefined FUN_1479c9290(void)

bool FUN_1479c9290(longlong *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = true;
  if ((*(byte *)((longlong)param_1 + 0x62c) & 2) == 0) {
    iVar1 = (**(code **)(*param_1 + 0x570))();
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}



// FUNCTION 1479c92b6 FUN_1479c92b6 body=45 status=ok
// SIG undefined FUN_1479c92b6(void)

longlong FUN_1479c92b6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c92e4 FUN_1479c92e4 body=48 status=ok
// SIG undefined FUN_1479c92e4(void)

longlong FUN_1479c92e4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9314 FUN_1479c9314 body=48 status=ok
// SIG undefined FUN_1479c9314(void)

longlong FUN_1479c9314(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9344 FUN_1479c9344 body=48 status=ok
// SIG undefined FUN_1479c9344(void)

longlong FUN_1479c9344(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9378 FUN_1479c9378 body=45 status=ok
// SIG undefined FUN_1479c9378(void)

longlong FUN_1479c9378(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c93a6 FUN_1479c93a6 body=48 status=ok
// SIG undefined FUN_1479c93a6(void)

longlong FUN_1479c93a6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c93d6 FUN_1479c93d6 body=48 status=ok
// SIG undefined FUN_1479c93d6(void)

longlong FUN_1479c93d6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9406 FUN_1479c9406 body=48 status=ok
// SIG undefined FUN_1479c9406(void)

longlong FUN_1479c9406(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9436 FUN_1479c9436 body=45 status=ok
// SIG undefined FUN_1479c9436(void)

longlong FUN_1479c9436(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9464 FUN_1479c9464 body=48 status=ok
// SIG undefined FUN_1479c9464(void)

longlong FUN_1479c9464(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2a8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9494 FUN_1479c9494 body=48 status=ok
// SIG undefined FUN_1479c9494(void)

longlong FUN_1479c9494(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b0;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c94c4 FUN_1479c94c4 body=48 status=ok
// SIG undefined FUN_1479c94c4(void)

longlong FUN_1479c94c4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x2b8;
  FUN_14006e5d0(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c94f4 FUN_1479c94f4 body=45 status=ok
// SIG undefined FUN_1479c94f4(void)

longlong FUN_1479c94f4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  FUN_140d7a570(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9528 FUN_1479c9528 body=48 status=ok
// SIG undefined FUN_1479c9528(void)

longlong FUN_1479c9528(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x178;
  FUN_140d7a570(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9560 FUN_1479c9560 body=48 status=ok
// SIG undefined FUN_1479c9560(void)

longlong FUN_1479c9560(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e0;
  FUN_140d7a570(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9598 FUN_1479c9598 body=48 status=ok
// SIG undefined FUN_1479c9598(void)

longlong FUN_1479c9598(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1e8;
  FUN_140d7a570(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c95d0 FUN_1479c95d0 body=38 status=ok
// SIG undefined FUN_1479c95d0(void)

undefined8 FUN_1479c95d0(undefined8 param_1,int param_2)

{
  FUN_1410a31b2();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c95f6 FUN_1479c95f6 body=29 status=ok
// SIG undefined FUN_1479c95f6(void)

undefined8 FUN_1479c95f6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c9622 FUN_1479c9622 body=55 status=ok
// SIG undefined FUN_1479c9622(void)

undefined8 * FUN_1479c9622(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a8379d0;
  FUN_140d7a9b4(param_1 + 0x7e);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479c96a2 FUN_1479c96a2 body=59 status=ok
// SIG undefined FUN_1479c96a2(void)

undefined8 FUN_1479c96a2(longlong *param_1)

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



// FUNCTION 1479c979a FUN_1479c979a body=94 status=ok
// SIG undefined FUN_1479c979a(void)

undefined8 FUN_1479c979a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  longlong lVar14;
  
  if (param_4 != 0) {
    lVar14 = 0;
    do {
      puVar1 = (undefined4 *)(param_3 + lVar14);
      lVar2 = param_2 + 0x38 + lVar14;
      *(undefined4 *)(lVar2 + -8) = puVar1[0xc];
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      uVar7 = puVar1[4];
      uVar8 = puVar1[5];
      uVar9 = puVar1[6];
      uVar10 = puVar1[7];
      uVar11 = puVar1[9];
      uVar12 = puVar1[10];
      uVar13 = puVar1[0xb];
      *(undefined4 *)(lVar2 + -0x18) = puVar1[8];
      *(undefined4 *)(lVar2 + -0x14) = uVar11;
      *(undefined4 *)(lVar2 + -0x10) = uVar12;
      *(undefined4 *)(lVar2 + -0xc) = uVar13;
      *(undefined4 *)(lVar2 + -0x28) = uVar7;
      *(undefined4 *)(lVar2 + -0x24) = uVar8;
      *(undefined4 *)(lVar2 + -0x20) = uVar9;
      *(undefined4 *)(lVar2 + -0x1c) = uVar10;
      *(undefined4 *)(lVar2 + -0x38) = uVar3;
      *(undefined4 *)(lVar2 + -0x34) = uVar4;
      *(undefined4 *)(lVar2 + -0x30) = uVar5;
      *(undefined4 *)(lVar2 + -0x2c) = uVar6;
      FUN_1417bc958();
      lVar14 = lVar14 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479c9820 FUN_1479c9820 body=59 status=ok
// SIG undefined FUN_1479c9820(void)

undefined8 FUN_1479c9820(longlong *param_1)

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



// FUNCTION 1479c9866 FUN_1479c9866 body=38 status=ok
// SIG undefined FUN_1479c9866(void)

void FUN_1479c9866(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x48) == '\x01') {
    if (*(longlong *)(param_2 + 0x38) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x48) = 0;
  }
  return;
}



// FUNCTION 1479c9954 FUN_1479c9954 body=59 status=ok
// SIG undefined FUN_1479c9954(void)

undefined8 FUN_1479c9954(longlong *param_1)

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



// FUNCTION 1479c9a2a FUN_1479c9a2a body=75 status=ok
// SIG undefined FUN_1479c9a2a(void)

undefined8 FUN_1479c9a2a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_2 + lVar1) = *(undefined8 *)(param_3 + lVar1);
      FUN_1417bc958();
      lVar1 = lVar1 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479c9a9e FUN_1479c9a9e body=59 status=ok
// SIG undefined FUN_1479c9a9e(void)

undefined8 FUN_1479c9a9e(longlong *param_1)

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



// FUNCTION 1479c9ae4 FUN_1479c9ae4 body=38 status=ok
// SIG undefined FUN_1479c9ae4(void)

void FUN_1479c9ae4(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x18) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x18) = 0;
  }
  return;
}



// FUNCTION 1479c9b5a FUN_1479c9b5a body=101 status=ok
// SIG undefined FUN_1479c9b5a(void)

void FUN_1479c9b5a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 2)) {
        uVar2 = uVar1 >> 2 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x1c)) {
    *(int *)(param_1 + 0x1c) = (int)uVar2;
    FUN_14499171c(param_1,*(undefined4 *)(param_1 + 0x18),uVar2,4);
    return;
  }
  return;
}



// FUNCTION 1479c9bc0 FUN_1479c9bc0 body=79 status=ok
// SIG undefined FUN_1479c9bc0(void)

undefined8 * FUN_1479c9bc0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1458e408e(param_1,iVar1);
      FUN_144a80303(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1479c9c86 FUN_1479c9c86 body=59 status=ok
// SIG undefined FUN_1479c9c86(void)

undefined8 FUN_1479c9c86(longlong *param_1)

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



// FUNCTION 1479c9d4c FUN_1479c9d4c body=100 status=ok
// SIG undefined FUN_1479c9d4c(void)

undefined1 FUN_1479c9d4c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar3) = *(undefined4 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479c9dd8 FUN_1479c9dd8 body=59 status=ok
// SIG undefined FUN_1479c9dd8(void)

undefined8 FUN_1479c9dd8(longlong *param_1)

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



// FUNCTION 1479c9e9a FUN_1479c9e9a body=100 status=ok
// SIG undefined FUN_1479c9e9a(void)

undefined1 FUN_1479c9e9a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479c9f26 FUN_1479c9f26 body=59 status=ok
// SIG undefined FUN_1479c9f26(void)

undefined8 FUN_1479c9f26(longlong *param_1)

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



// FUNCTION 1479c9fc8 FUN_1479c9fc8 body=107 status=ok
// SIG undefined FUN_1479c9fc8(void)

void FUN_1479c9fc8(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 4,0,200);
  *param_2 = &PTR_FUN_14a544b10;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  return;
}



// FUNCTION 1479ca0de FUN_1479ca0de body=63 status=ok
// SIG undefined FUN_1479ca0de(void)

undefined1 FUN_1479ca0de(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764da0(param_2,param_3);
    param_3 = param_3 + 0xe8;
    param_2 = param_2 + 0xe8;
  }
  return 1;
}



// FUNCTION 1479ca146 FUN_1479ca146 body=59 status=ok
// SIG undefined FUN_1479ca146(void)

undefined8 FUN_1479ca146(longlong *param_1)

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



// FUNCTION 1479ca192 FUN_1479ca192 body=38 status=ok
// SIG undefined FUN_1479ca192(void)

void FUN_1479ca192(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xe8) == '\x01') {
    FUN_140595d6e(param_2);
    *(undefined1 *)(param_2 + 0xe8) = 0;
  }
  return;
}



// FUNCTION 1479ca242 FUN_1479ca242 body=100 status=ok
// SIG undefined FUN_1479ca242(void)

undefined1 FUN_1479ca242(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar3);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar3);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar3) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar3) = *(undefined8 *)(param_3 + 8 + lVar3);
      lVar3 = lVar3 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1479ca2ce FUN_1479ca2ce body=59 status=ok
// SIG undefined FUN_1479ca2ce(void)

undefined8 FUN_1479ca2ce(longlong *param_1)

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



// FUNCTION 1479ca4d6 FUN_1479ca4d6 body=63 status=ok
// SIG undefined FUN_1479ca4d6(void)

undefined1 FUN_1479ca4d6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764d36(param_2,param_3);
    param_3 = param_3 + 0x110;
    param_2 = param_2 + 0x110;
  }
  return 1;
}



// FUNCTION 1479ca53e FUN_1479ca53e body=59 status=ok
// SIG undefined FUN_1479ca53e(void)

undefined8 FUN_1479ca53e(longlong *param_1)

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



// FUNCTION 1479ca58a FUN_1479ca58a body=65 status=ok
// SIG undefined FUN_1479ca58a(void)

void FUN_1479ca58a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x22) == '\x01') {
    *param_2 = &PTR_FUN_14a544ad0;
    if (param_2[0x20] != 0) {
      FUN_1400020a8();
    }
    FUN_140595d6e(param_2);
    *(undefined1 *)(param_2 + 0x22) = 0;
  }
  return;
}



// FUNCTION 1479ca61c FUN_1479ca61c body=69 status=ok
// SIG undefined FUN_1479ca61c(void)

void FUN_1479ca61c(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0xe0);
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0xffffffff00000080;
  *param_2 = &PTR_FUN_14a81d660;
  param_2[0x1d] = 0;
  return;
}



// FUNCTION 1479ca712 FUN_1479ca712 body=104 status=ok
// SIG undefined FUN_1479ca712(void)

undefined1 FUN_1479ca712(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_147764da0(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0xe8);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0xe8);
      }
    }
    param_3 = param_3 + 0xf0;
    *(longlong *)(param_2 + 0xe8) = lVar1;
    param_2 = param_2 + 0xf0;
  }
  return 1;
}



// FUNCTION 1479ca7a2 FUN_1479ca7a2 body=59 status=ok
// SIG undefined FUN_1479ca7a2(void)

undefined8 FUN_1479ca7a2(longlong *param_1)

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



// FUNCTION 1479ca7ee FUN_1479ca7ee body=38 status=ok
// SIG undefined FUN_1479ca7ee(void)

void FUN_1479ca7ee(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xf0) == '\x01') {
    FUN_140595d6e(param_2);
    *(undefined1 *)(param_2 + 0xf0) = 0;
  }
  return;
}



// FUNCTION 1479ca864 FUN_1479ca864 body=325 status=ok
// SIG undefined FUN_1479ca864(void)

longlong * FUN_1479ca864(longlong *param_1,longlong param_2,longlong param_3)

{
  memset(param_1,0,0x90);
  FUN_144869430(param_1);
  param_1[0x12] = 0;
  *param_1 = (longlong)&PTR_FUN_149e1e590;
  param_1[0x13] = param_3 + 8;
  param_1[0x14] = 0;
  FUN_144a69558(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,0);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0x7b;
  *param_1 = (longlong)&PTR_FUN_14a838cf0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = param_2;
  param_1[0x20] = (longlong)&PTR_FUN_149eb5dd0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2b));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x2b),4000);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = param_3;
  *(uint *)((longlong)param_1 + 0x34) = *(uint *)((longlong)param_1 + 0x34) | 0x20000200;
  return param_1;
}



// FUNCTION 1479ca9aa FUN_1479ca9aa body=462 status=ok
// SIG undefined FUN_1479ca9aa(void)

void FUN_1479ca9aa(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  int local_50;
  int local_4c;
  int *local_48;
  int *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + 0x10);
    local_68 = FUN_144938c96();
    local_60 = 0;
    FUN_14496b17c(uVar1,param_1,*(undefined8 *)(param_1 + 0xf8));
    lVar4 = *(longlong *)(param_1 + 400);
    if (0 < *(int *)(lVar4 + 0x30)) {
      FUN_1479cb20c(*(undefined8 *)(lVar4 + 0x28));
      lVar4 = *(longlong *)(param_1 + 400);
    }
    FUN_1407058ce(lVar4 + 0x98);
    lVar4 = *(longlong *)(param_1 + 400);
    uVar5 = *(uint *)(lVar4 + 0x30);
    if ((uint)(*(int *)(lVar4 + 0xa0) - *(int *)(lVar4 + 0xcc)) < uVar5) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456acd4b((longlong)(int)uVar5);
      }
      FUN_140ab2830(lVar4 + 0x98,uVar5);
      iVar3 = 1;
      if (3 < uVar5) {
        uVar5 = (uVar5 | 1) + 0xe;
        iVar3 = 0x1f;
        if (uVar5 != 0) {
          for (; uVar5 >> iVar3 == 0; iVar3 = iVar3 + -1) {
          }
        }
        iVar3 = 1 << ((byte)iVar3 & 0x1f);
      }
      if ((*(int *)(lVar4 + 0xe0) == 0) || (*(int *)(lVar4 + 0xe0) < iVar3)) {
        *(int *)(lVar4 + 0xe0) = iVar3;
        FUN_140264164(lVar4 + 0x98);
      }
    }
    local_4c = 0;
    lVar4 = *(longlong *)(param_1 + 400);
    if (0 < *(int *)(lVar4 + 0x30)) {
      do {
        lVar2 = *(longlong *)(*(longlong *)(lVar4 + 0x28) + (longlong)local_4c * 0x10);
        if (lVar2 != 0) {
          iVar3 = *(int *)(lVar4 + 0x40);
          if ((longlong)iVar3 != 0) {
            lVar7 = (longlong)iVar3 * 8;
            lVar6 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar4 + 0x38) + lVar6 * 8) == lVar2) {
                local_50 = (int)lVar6;
                if ((-1 < local_50) && (local_50 < iVar3)) {
                  local_48 = &local_50;
                  local_40 = &local_4c;
                  FUN_14179ff92(lVar4 + 0x98,local_34,&local_48);
                  lVar4 = *(longlong *)(param_1 + 400);
                }
                break;
              }
              lVar6 = lVar6 + 1;
              lVar7 = lVar7 + -8;
            } while (lVar7 != 0);
          }
        }
        local_4c = local_4c + 1;
      } while (local_4c < *(int *)(lVar4 + 0x30));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479cab7a FUN_1479cab7a body=38 status=ok
// SIG undefined FUN_1479cab7a(void)

undefined8 FUN_1479cab7a(undefined8 param_1,int param_2)

{
  FUN_1479b60fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479caba0 FUN_1479caba0 body=316 status=ok
// SIG undefined FUN_1479caba0(void)

ulonglong FUN_1479caba0(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  
  puVar1 = (ulonglong *)(param_2 + 0x10);
  uVar4 = FUN_1446f4bba();
  cVar2 = FUN_144affa3a(puVar1,uVar4);
  if (((cVar2 == '\0') || ((*puVar1 & 0xfffffffffffffffe) == 0)) ||
     ((*(byte *)((*puVar1 & 0xfffffffffffffffe) + 0xb0) & 0x20) == 0)) {
    uVar8 = CONCAT71((int7)((ulonglong)puVar1 >> 8),1);
    if ((*(ulonglong *)(param_2 + 0x38) & 0x200000001) == 0 ||
        (*(ulonglong *)(param_2 + 0x38) >> 0xd & 1) != 0) goto LAB_1479cac23;
    lVar6 = *(longlong *)(param_2 + 8);
    lVar5 = FUN_140019da0();
    if (*(ulonglong *)(lVar5 + 8) == 0) {
      bVar9 = lVar6 != 0;
      if (lVar6 != lVar5 && bVar9) {
        do {
          lVar6 = *(longlong *)(lVar6 + 0x30);
          bVar9 = lVar6 != 0;
          if (lVar6 == lVar5) break;
        } while (lVar6 != 0);
      }
      if (bVar9) goto LAB_1479cac23;
    }
    else if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1479cac23;
    if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
      uVar3 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      lVar6 = param_1 + 0xe0;
      if (*(longlong *)(param_1 + 0xe8) != 0) {
        lVar6 = *(longlong *)(param_1 + 0xe8);
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0xf0) - 1U & (uVar3 >> 0x10 ^ uVar3))
                               * 4);
      if (iVar7 != -1) {
        do {
          bVar9 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + (longlong)iVar7 * 0x10) == param_2;
          uVar8 = CONCAT71((int7)(uVar8 >> 8),bVar9);
          if (bVar9) break;
          iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(param_1 + 0xa8) + 8);
        } while (iVar7 != -1);
        goto LAB_1479cac23;
      }
    }
  }
  uVar8 = 0;
LAB_1479cac23:
  return uVar8 & 0xffffffff;
}



// FUNCTION 1479cacdc FUN_1479cacdc body=348 status=ok
// SIG undefined FUN_1479cacdc(void)

void FUN_1479cacdc(longlong param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 8) == 0) goto LAB_1479cad05;
  local_88 = *(undefined4 *)(param_2 + 8);
  uStack_84 = *(undefined4 *)(param_2 + 0xc);
  uStack_80 = *(undefined4 *)(param_2 + 0x10);
  uStack_7c = *(undefined4 *)(param_2 + 0x14);
  local_78 = (void *)0x0;
  local_70 = *(int *)(param_2 + 0x20);
  lVar2 = (longlong)local_70;
  pvVar1 = *(void **)(param_2 + 0x18);
  if (lVar2 == 0) {
    local_6c = 0;
    local_58 = *(undefined8 *)(param_2 + 8);
    uStack_50 = *(undefined8 *)(param_2 + 0x10);
    local_40 = 0;
LAB_1479cad77:
    local_48 = (void *)0x0;
    local_60 = 0;
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar2 * 2);
    pvVar1 = local_78;
    local_40 = local_70;
    lVar2 = (longlong)local_70;
    local_60 = 0;
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = CONCAT44(uStack_7c,uStack_80);
    local_48 = (void *)0x0;
    if (lVar2 == 0) goto LAB_1479cad77;
    FUN_1446dd670(&local_48,local_70,0);
    memcpy(local_48,pvVar1,lVar2 * 2);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8(local_78);
  }
  FUN_1479cb462(*(longlong *)(param_1 + 400) + 0x88,&local_60);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1479cad05:
  FUN_14688a5fa(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cae40 FUN_1479cae40 body=236 status=ok
// SIG undefined FUN_1479cae40(void)

longlong * FUN_1479cae40(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_2);
  if (local_28 != 0) goto LAB_1479cae69;
  if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) && *(int *)(param_2 + 0x10) == 0
      ) && *(int *)(param_2 + 0x14) == 0) {
LAB_1479caefd:
    local_28 = 0;
  }
  else {
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1479caefd;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_2,lVar3);
      }
    }
    local_28 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      local_28 = lVar3;
    }
  }
LAB_1479cae69:
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479caf2e FUN_1479caf2e body=316 status=ok
// SIG undefined FUN_1479caf2e(void)

longlong * FUN_1479caf2e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_58 [36];
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *param_2;
  if (lVar4 == 0) {
    local_34 = -1;
  }
  else {
    if ((param_1[0x1f] != 0) && (cVar3 = FUN_144b00bde(lVar4), cVar3 != '\0')) {
      lVar4 = FUN_1479cb55e(param_1,*param_2);
      local_34 = -1;
      if (lVar4 == 0) goto LAB_1479cafce;
    }
    lVar1 = param_1[0x32];
    iVar5 = *(int *)(lVar1 + 0x40);
    local_34 = iVar5;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
      iVar5 = *(int *)(lVar1 + 0x40);
    }
    *(uint *)(lVar1 + 0x40) = iVar5 + 1U;
    if (*(uint *)(lVar1 + 0x44) < iVar5 + 1U) {
      FUN_140845902((longlong *)(lVar1 + 0x38),iVar5);
    }
    *(longlong *)(*(longlong *)(lVar1 + 0x38) + (longlong)iVar5 * 8) = lVar4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar4);
    }
  }
LAB_1479cafce:
  puVar2 = (ulonglong *)param_1[1];
  if (puVar2[1] < *puVar2 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_34,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    *puVar2 = *puVar2 + 4;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479cb06c FUN_1479cb06c body=231 status=ok
// SIG undefined FUN_1479cb06c(void)

longlong * FUN_1479cb06c(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a846f6(*param_2);
  if (cVar1 == '\0') {
    local_28 = 0;
    local_1c = FUN_1409d9716(param_1[0x32] + 0x48);
    puVar4 = (ulonglong *)param_1[1];
    uVar5 = *puVar4 + 4;
    if (uVar5 <= puVar4[1]) goto LAB_1479cb11a;
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      puVar6 = (undefined8 *)&local_1c;
      goto LAB_1479cb14a;
    }
    lVar3 = *param_1;
    puVar6 = (undefined8 *)&local_1c;
  }
  else {
    uVar2 = FUN_140721fbe(param_1[0x32] + 0x48,param_2);
    local_28 = CONCAT44(local_28._4_4_,uVar2);
    puVar4 = (ulonglong *)param_1[1];
    uVar5 = *puVar4 + 4;
    if (uVar5 <= puVar4[1]) {
LAB_1479cb11a:
      *puVar4 = uVar5;
      goto LAB_1479cb11d;
    }
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) != 0) {
      puVar6 = &local_28;
LAB_1479cb14a:
      thunk_FUN_14572512c(param_1,puVar6);
      goto LAB_1479cb11d;
    }
    lVar3 = *param_1;
    puVar6 = &local_28;
  }
  (**(code **)(lVar3 + 0x170))(param_1,puVar6,4);
LAB_1479cb11d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cb154 FUN_1479cb154 body=113 status=ok
// SIG undefined FUN_1479cb154(void)

void FUN_1479cb154(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 400);
  local_28 = *param_2;
  if ((local_28 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_20 = *param_3;
  FUN_1479cb87a(lVar1 + 0x58);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cb1e6 FUN_1479cb1e6 body=38 status=ok
// SIG undefined FUN_1479cb1e6(void)

undefined8 FUN_1479cb1e6(undefined8 param_1,int param_2)

{
  FUN_1479b60fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cb20c FUN_1479cb20c body=220 status=ok
// SIG undefined FUN_1479cb20c(void)

void FUN_1479cb20c(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [36];
  uint local_64;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar10 = (ulonglong)param_2;
  uVar4 = 0;
  puVar5 = param_1;
  do {
    if ((uVar4 + 1 < uVar10) && (*(int *)(puVar5 + 3) < *(int *)(puVar5 + 1))) {
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      *puVar5 = puVar5[2];
      puVar5[1] = puVar5[3];
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      *(undefined4 *)(puVar5 + 2) = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar5 + 0x14) = local_58._4_4_;
      *(undefined4 *)(puVar5 + 3) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_50._4_4_;
      local_58 = uVar2;
      uStack_50 = uVar3;
    }
    uVar4 = uVar4 + 2;
    puVar5 = puVar5 + 4;
  } while (uVar4 < uVar10);
  local_60 = param_1;
  if (2 < (int)param_2) {
    uVar6 = 2;
    local_64 = param_2;
    do {
      uVar1 = uVar6 * 2;
      lVar7 = 0;
      puVar5 = local_60;
      uVar8 = local_64;
      do {
        uVar9 = uVar8;
        if ((int)uVar1 <= (int)uVar8) {
          uVar9 = uVar1;
        }
        FUN_1479cb2e9(puVar5,uVar6,uVar9);
        lVar7 = lVar7 + (int)uVar1;
        puVar5 = puVar5 + (longlong)(int)uVar1 * 2;
        uVar8 = uVar8 + uVar6 * -2;
      } while (lVar7 < (longlong)uVar10);
      uVar6 = uVar1;
    } while ((int)uVar1 < (int)local_64);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cb2e9 FUN_1479cb2e9 body=376 status=ok
// SIG undefined FUN_1479cb2e9(void)

void FUN_1479cb2e9(longlong param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 < param_3 && 0 < param_2) {
    iVar7 = 0;
    while( true ) {
      lVar10 = (longlong)param_2 * 0x10 + param_1;
      iVar13 = 0;
      if (param_2 - iVar7 != 0 && iVar7 <= param_2) {
        iVar13 = 0;
        uVar8 = param_2 - iVar7;
        do {
          uVar15 = (uVar8 >> 1) + iVar13;
          if (*(int *)((longlong)iVar7 * 0x10 + param_1 + 8 + (ulonglong)uVar15 * 0x10) <=
              *(int *)(lVar10 + 8)) {
            iVar13 = uVar15 + (uVar8 & 1);
          }
          bVar2 = 1 < uVar8;
          uVar8 = uVar8 >> 1;
        } while (bVar2);
      }
      iVar13 = iVar13 + iVar7;
      iVar7 = param_2 - iVar13;
      if (iVar7 == 0 || param_2 < iVar13) break;
      uVar8 = param_3 - param_2;
      if (uVar8 == 0 || param_3 < param_2) {
        iVar16 = 0;
      }
      else {
        puVar12 = (undefined8 *)((longlong)iVar13 * 0x10 + param_1);
        iVar16 = 0;
        uVar14 = (ulonglong)uVar8;
        do {
          uVar14 = uVar14 >> 1;
          uVar15 = (uint)uVar14 + iVar16;
          if (*(int *)(lVar10 + 8 + (ulonglong)uVar15 * 0x10) < *(int *)(puVar12 + 1)) {
            iVar16 = uVar15 + (uVar8 & 1);
          }
          bVar2 = 1 < uVar8;
          uVar8 = (uint)uVar14;
        } while (bVar2);
        param_2 = param_2 + iVar16;
        if (0 < iVar16) {
          puVar11 = puVar12 + (longlong)(param_2 - iVar13) * 2;
          puVar6 = puVar12 + (longlong)iVar7 * 2;
          puVar9 = puVar12 + (longlong)iVar7 * 2;
          do {
            while( true ) {
              puVar1 = puVar6 + 2;
              uVar3 = *puVar12;
              uVar4 = puVar12[1];
              uVar5 = puVar6[1];
              *puVar12 = *puVar6;
              puVar12[1] = uVar5;
              puVar12 = puVar12 + 2;
              local_48._0_4_ = (undefined4)uVar3;
              local_48._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
              uStack_40._0_4_ = (undefined4)uVar4;
              uStack_40._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
              *(undefined4 *)puVar6 = (undefined4)local_48;
              *(undefined4 *)((longlong)puVar6 + 4) = local_48._4_4_;
              *(undefined4 *)(puVar6 + 1) = (undefined4)uStack_40;
              *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_40._4_4_;
              if (puVar1 == puVar11) break;
              puVar6 = puVar1;
              if (puVar12 == puVar9) {
                puVar9 = puVar1;
              }
            }
            puVar6 = puVar9;
            local_48 = uVar3;
            uStack_40 = uVar4;
          } while (puVar12 != puVar9);
        }
      }
      if ((param_3 <= param_2) || (iVar7 = iVar16 + iVar13 + 1, param_2 <= iVar7)) break;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479cb462 FUN_1479cb462 body=251 status=ok
// SIG undefined FUN_1479cb462(void)

void FUN_1479cb462(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  
  lVar8 = param_1[1];
  if ((longlong)(int)lVar8 != 0) {
    lVar3 = *param_1;
    uVar10 = 0;
    do {
      cVar7 = FUN_144a7afa6(lVar3 + 8 + uVar10,param_2 + 1);
      if (cVar7 != '\0') {
        if ((int)(uVar10 >> 3) * -0x33333333 != -1) {
          return;
        }
        break;
      }
      uVar10 = uVar10 + 0x28;
    } while ((longlong)(int)lVar8 * 0x28 != uVar10);
  }
  iVar2 = (int)param_1[1];
  lVar8 = (longlong)iVar2;
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140353c32(param_1,iVar2);
  }
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + lVar8 * 0x28) = *param_2;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 2);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1 = (undefined4 *)(lVar3 + 8 + lVar8 * 0x28);
  *puVar1 = *(undefined4 *)(param_2 + 1);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *(undefined8 *)(lVar3 + 0x18 + lVar8 * 0x28) = 0;
  iVar2 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(lVar3 + 0x20 + lVar8 * 0x28) = iVar2;
  if ((longlong)iVar2 == 0) {
    *(undefined4 *)(lVar3 + lVar8 * 0x28 + 0x24) = 0;
    return;
  }
  puVar9 = (undefined8 *)(lVar3 + lVar8 * 0x28 + 0x18);
  FUN_1446dd670(puVar9,iVar2,0);
  memcpy((void *)*puVar9,_Src,(longlong)iVar2 * 2);
  return;
}



// FUNCTION 1479cb55e FUN_1479cb55e body=660 status=ok
// SIG undefined FUN_1479cb55e(void)

ulonglong FUN_1479cb55e(longlong param_1,ulonglong param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  ulonglong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = param_2;
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x158);
      EnterCriticalSection(lpCriticalSection);
      if (*(ulonglong *)(param_1 + 0x180) == param_2) {
        uVar6 = *(ulonglong *)(param_1 + 0x188);
LAB_1479cb730:
        local_30 = uVar6;
        LeaveCriticalSection(lpCriticalSection);
        if (uVar6 != 0) {
          uVar5 = FUN_1409ca440(&local_30);
          goto LAB_1479cb6ef;
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x180) = param_2;
        if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
          uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          lVar7 = param_1 + 0x140;
          if (*(longlong *)(param_1 + 0x148) != 0) {
            lVar7 = *(longlong *)(param_1 + 0x148);
          }
          iVar8 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_1 + 0x150) - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
          if (iVar8 != -1) {
            do {
              puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar8 * 0x18);
              if (*puVar1 == param_2) {
                if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
                  uVar6 = puVar1[1];
                  *(ulonglong *)(param_1 + 0x188) = uVar6;
                  goto LAB_1479cb730;
                }
                break;
              }
              iVar8 = (int)puVar1[2];
            } while (iVar8 != -1);
          }
        }
        *(undefined8 *)(param_1 + 0x188) = 0;
        LeaveCriticalSection(lpCriticalSection);
      }
      if (*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0xf8)) {
        uVar3 = FUN_1479b624c(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_2 + 0x10));
        uVar4 = FUN_1446f8646();
        uVar5 = FUN_14092e757(uVar4,param_2,uVar3,0);
        lVar7 = *(longlong *)(param_1 + 400);
        iVar8 = *(int *)(lVar7 + 0x30);
        *(uint *)(lVar7 + 0x30) = iVar8 + 1U;
        if (*(uint *)(lVar7 + 0x34) < iVar8 + 1U) {
          FUN_1479cb7f4((longlong *)(lVar7 + 0x28),iVar8);
        }
        lVar7 = *(longlong *)(lVar7 + 0x28);
        puVar1 = (ulonglong *)(lVar7 + (longlong)iVar8 * 0x10);
        *(ulonglong *)(lVar7 + (longlong)iVar8 * 0x10) = uVar5;
        uVar6 = uVar5;
        if ((uVar5 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(uVar5);
          uVar6 = *puVar1;
        }
        *(undefined4 *)(puVar1 + 1) = 0;
        if (uVar6 != 0) {
          iVar8 = 1;
          do {
            *(int *)(puVar1 + 1) = iVar8;
            uVar6 = *(ulonglong *)(uVar6 + 0x20);
            iVar8 = iVar8 + 1;
          } while (uVar6 != 0);
        }
      }
      else {
        lVar7 = FUN_1479cb55e(param_1);
        if (lVar7 != 0) {
          uVar5 = FUN_1402ab8a4(lVar7,*(undefined8 *)(param_2 + 0x10),
                                *(undefined8 *)(param_2 + 0x18));
          if (uVar5 == 0) {
            uVar3 = FUN_1446f8646();
            uVar5 = FUN_14092e757(uVar3,param_2,lVar7,0);
          }
          local_38 = 0;
          FUN_14485c47a(&local_38,uVar5);
          FUN_1406afd60(param_1 + 0x100,param_2,&local_38);
        }
      }
    }
  }
LAB_1479cb6ef:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1479cb7f4 FUN_1479cb7f4 body=132 status=ok
// SIG undefined FUN_1479cb7f4(void)

void FUN_1479cb7f4(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479cb87a FUN_1479cb87a body=109 status=ok
// SIG undefined FUN_1479cb87a(void)

void FUN_1479cb87a(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = FUN_1479cb8e8();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1479cb96a(param_1,iVar3);
    }
    lVar1 = *param_1;
    lVar2 = *param_2;
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10) = lVar2;
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(longlong *)(lVar1 + (longlong)iVar3 * 0x10 + 8) = param_2[1];
  }
  return;
}



// FUNCTION 1479cb8e8 FUN_1479cb8e8 body=130 status=ok
// SIG undefined FUN_1479cb8e8(void)

int FUN_1479cb8e8(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar6 = 0;
    iVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar2 = *param_2;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if ((*(longlong *)(lVar1 + lVar6) == lVar2) &&
         (*(longlong *)(lVar1 + 8 + lVar6) == param_2[1])) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while ((longlong)(int)lVar3 * 0x10 != lVar6);
  }
  return -1;
}



// FUNCTION 1479cb96a FUN_1479cb96a body=132 status=ok
// SIG undefined FUN_1479cb96a(void)

void FUN_1479cb96a(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479cb9f0 FUN_1479cb9f0 body=148 status=ok
// SIG undefined FUN_1479cb9f0(void)

int FUN_1479cb9f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar3 = 0;
    do {
      if ((*(longlong *)(lVar4 + uVar3) == *param_2) &&
         (*(int *)(lVar4 + 8 + uVar3) == (int)param_2[1])) {
        iVar2 = (int)(uVar3 >> 3) * -0x55555555;
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      uVar3 = uVar3 + 0x18;
    } while (lVar5 * 0x18 != uVar3);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14620dcee(param_1,iVar1);
    lVar4 = *param_1;
  }
  *(longlong *)(lVar4 + lVar5 * 0x18) = *param_2;
  *(int *)(lVar4 + 8 + lVar5 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar4 + 0x10 + lVar5 * 0x18) = 0;
  return iVar1;
}



// FUNCTION 1479cba84 FUN_1479cba84 body=133 status=ok
// SIG undefined FUN_1479cba84(void)

int FUN_1479cba84(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar3 = FUN_1448f0be4();
  if (iVar3 == -1) {
    iVar3 = (int)param_1[1];
    lVar5 = (longlong)iVar3;
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_1459dea88(param_1,iVar3);
    }
    lVar2 = *param_1;
    puVar1 = (undefined8 *)(lVar2 + lVar5 * 0x18);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
    *(undefined8 *)(lVar2 + lVar5 * 0x18) = *param_2;
    uVar4 = FUN_14477b664(param_2[1]);
    uVar4 = FUN_14477b664(uVar4);
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18) = uVar4;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = param_2[2];
  }
  return iVar3;
}



// FUNCTION 1479cbb0a FUN_1479cbb0a body=38 status=ok
// SIG undefined FUN_1479cbb0a(void)

undefined8 FUN_1479cbb0a(undefined8 param_1,int param_2)

{
  FUN_1479b6204();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cbb30 FUN_1479cbb30 body=359 status=ok
// SIG undefined FUN_1479cbb30(void)

undefined8 FUN_1479cbb30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  bool bVar5;
  
  if ((param_2 == 0) || ((*(ulonglong *)(param_2 + 0x38) & 0x8000080000) == 0)) goto LAB_1479cbb98;
  lVar4 = *(longlong *)(param_2 + 8);
  lVar1 = FUN_144a810c6();
  lVar2 = param_2;
  if (*(ulonglong *)(lVar1 + 8) == 0) {
    bVar5 = lVar4 != 0;
    if (lVar4 != lVar1 && bVar5) {
      do {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        bVar5 = lVar4 != 0;
        if (lVar4 == lVar1) break;
      } while (lVar4 != 0);
    }
    if (!bVar5) goto LAB_1479cbbdc;
  }
  else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) {
LAB_1479cbbdc:
    lVar4 = *(longlong *)(param_2 + 8);
    lVar2 = FUN_1446e6bbc();
    if (*(ulonglong *)(lVar2 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar2 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar2) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1479cbb98;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar2 + 8)) == 0) goto LAB_1479cbb98;
    lVar2 = *(longlong *)(param_2 + 0x78);
    if (lVar2 == 0) goto LAB_1479cbb98;
    lVar4 = *(longlong *)(lVar2 + 8);
    lVar1 = FUN_144a810c6();
    if (*(ulonglong *)(lVar1 + 8) == 0) {
      bVar5 = lVar4 != 0;
      if (lVar4 != lVar1 && bVar5) {
        do {
          lVar4 = *(longlong *)(lVar4 + 0x30);
          bVar5 = lVar4 != 0;
          if (lVar4 == lVar1) break;
        } while (lVar4 != 0);
      }
      if (!bVar5) goto LAB_1479cbb98;
    }
    else if ((*(ulonglong *)(lVar4 + 0x18) & *(ulonglong *)(lVar1 + 8)) == 0) goto LAB_1479cbb98;
  }
  lVar4 = *(longlong *)(lVar2 + 0x70);
  lVar2 = FUN_144a78d6a();
  if (((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),1);
  }
LAB_1479cbb98:
  uVar3 = FUN_143441416(param_1,param_2);
  return uVar3;
}



// FUNCTION 1479cbc9e FUN_1479cbc9e body=236 status=ok
// SIG undefined FUN_1479cbc9e(void)

longlong * FUN_1479cbc9e(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_2);
  if (local_28 != 0) goto LAB_1479cbcc7;
  if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) && *(int *)(param_2 + 0x10) == 0
      ) && *(int *)(param_2 + 0x14) == 0) {
LAB_1479cbd5b:
    local_28 = 0;
  }
  else {
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1479cbd5b;
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_2,lVar3);
      }
    }
    local_28 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      local_28 = lVar3;
    }
  }
LAB_1479cbcc7:
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1479cbd8c FUN_1479cbd8c body=38 status=ok
// SIG undefined FUN_1479cbd8c(void)

undefined8 FUN_1479cbd8c(undefined8 param_1,int param_2)

{
  FUN_1479b6204();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cbdb2 FUN_1479cbdb2 body=38 status=ok
// SIG undefined FUN_1479cbdb2(void)

undefined8 FUN_1479cbdb2(undefined8 param_1,int param_2)

{
  FUN_1479b60fc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cbdd8 FUN_1479cbdd8 body=38 status=ok
// SIG undefined FUN_1479cbdd8(void)

undefined8 FUN_1479cbdd8(undefined8 param_1,int param_2)

{
  FUN_1479b6204();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cbdfe FUN_1479cbdfe body=325 status=ok
// SIG undefined FUN_1479cbdfe(void)

undefined4 *
FUN_1479cbdfe(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140922cb6(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_140922c22(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
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
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_140922e92(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cbf44 FUN_1479cbf44 body=154 status=ok
// SIG undefined FUN_1479cbf44(void)

undefined8 FUN_1479cbf44(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_1479cbfde(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479cbfde FUN_1479cbfde body=96 status=ok
// SIG undefined FUN_1479cbfde(void)

void FUN_1479cbfde(longlong *param_1,int param_2)

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
  FUN_1478c8728(param_1,param_2,1);
  return;
}



// FUNCTION 1479cc03e FUN_1479cc03e body=38 status=ok
// SIG undefined FUN_1479cc03e(void)

undefined8 FUN_1479cc03e(undefined8 param_1,int param_2)

{
  FUN_1479cc0dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc09a FUN_1479cc09a body=65 status=ok
// SIG undefined FUN_1479cc09a(void)

undefined8 * FUN_1479cc09a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83cdc0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc0dc FUN_1479cc0dc body=183 status=ok
// SIG undefined FUN_1479cc0dc(void)

void FUN_1479cc0dc(longlong param_1)

{
  FUN_144725486(param_1 + 800);
  FUN_1412db970(param_1 + 0x298);
  FUN_144725486(param_1 + 0x360);
  FUN_144725486(param_1 + 0x3a0);
  FUN_144725486(param_1 + 0x3c8);
  FUN_1412b7f2a(param_1 + 0x3c8);
  *(undefined ***)(param_1 + 0x3a0) = &PTR_FUN_14a83cdc0;
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1 + 0x3a0);
  FUN_140296b76(param_1 + 0x360);
  FUN_140296ab8(param_1 + 800);
  FUN_140296d44(param_1 + 0x298);
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1479cc194 FUN_1479cc194 body=93 status=ok
// SIG undefined FUN_1479cc194(void)

void FUN_1479cc194(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_143441ed4();
  return;
}



// FUNCTION 1479cc266 FUN_1479cc266 body=104 status=ok
// SIG undefined FUN_1479cc266(void)

undefined1 FUN_1479cc266(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14704541e(param_2,param_3);
    lVar1 = *(longlong *)(param_3 + 0xa0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar1 == 0) {
        lVar1 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar1 = *(longlong *)(param_3 + 0xa0);
      }
    }
    param_3 = param_3 + 0xa8;
    *(longlong *)(param_2 + 0xa0) = lVar1;
    param_2 = param_2 + 0xa8;
  }
  return 1;
}



// FUNCTION 1479cc2f6 FUN_1479cc2f6 body=59 status=ok
// SIG undefined FUN_1479cc2f6(void)

undefined8 FUN_1479cc2f6(longlong *param_1)

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



// FUNCTION 1479cc342 FUN_1479cc342 body=40 status=ok
// SIG undefined FUN_1479cc342(void)

void FUN_1479cc342(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xa8) == '\x01') {
    FUN_147046490(param_2);
    *(undefined1 *)(param_2 + 0xa8) = 0;
  }
  return;
}



// FUNCTION 1479cc3c0 FUN_1479cc3c0 body=80 status=ok
// SIG undefined FUN_1479cc3c0(void)

longlong * FUN_1479cc3c0(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1477c9821(*param_1,(int)param_1[1]);
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



// FUNCTION 1479cc410 FUN_1479cc410 body=38 status=ok
// SIG undefined FUN_1479cc410(void)

undefined8 FUN_1479cc410(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc46c FUN_1479cc46c body=38 status=ok
// SIG undefined FUN_1479cc46c(void)

undefined8 FUN_1479cc46c(undefined8 param_1,int param_2)

{
  FUN_140064e2c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc54a FUN_1479cc54a body=59 status=ok
// SIG undefined FUN_1479cc54a(void)

undefined8 FUN_1479cc54a(longlong *param_1)

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



// FUNCTION 1479cc590 FUN_1479cc590 body=32 status=ok
// SIG undefined FUN_1479cc590(void)

void FUN_1479cc590(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1479cc6a0 FUN_1479cc6a0 body=59 status=ok
// SIG undefined FUN_1479cc6a0(void)

undefined8 FUN_1479cc6a0(longlong *param_1)

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



// FUNCTION 1479cc6e6 FUN_1479cc6e6 body=32 status=ok
// SIG undefined FUN_1479cc6e6(void)

void FUN_1479cc6e6(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x30) == '\x01') {
    FUN_144760f98(param_2);
    *(undefined1 *)(param_2 + 0x30) = 0;
  }
  return;
}



// FUNCTION 1479cc756 FUN_1479cc756 body=38 status=ok
// SIG undefined FUN_1479cc756(void)

undefined8 FUN_1479cc756(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc77c FUN_1479cc77c body=38 status=ok
// SIG undefined FUN_1479cc77c(void)

undefined8 FUN_1479cc77c(undefined8 param_1,int param_2)

{
  FUN_144760f98();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc7a2 FUN_1479cc7a2 body=29 status=ok
// SIG undefined FUN_1479cc7a2(void)

undefined8 FUN_1479cc7a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc7c0 FUN_1479cc7c0 body=29 status=ok
// SIG undefined FUN_1479cc7c0(void)

undefined8 FUN_1479cc7c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc7de FUN_1479cc7de body=29 status=ok
// SIG undefined FUN_1479cc7de(void)

undefined8 FUN_1479cc7de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cc7fc FUN_1479cc7fc body=162 status=ok
// SIG undefined FUN_1479cc7fc(void)

void FUN_1479cc7fc(longlong *param_1,undefined8 param_2)

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
        goto LAB_1479cc889;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1479cc889:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1479cc89e FUN_1479cc89e body=90 status=ok
// SIG undefined FUN_1479cc89e(void)

void FUN_1479cc89e(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x38 + (longlong)(int)param_2 * 0x48) != 0) {
    FUN_1400020a8();
  }
  iVar2 = (int)param_1[1];
  if (~param_2 + iVar2 != 0) {
    _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 0x48);
    memmove(_Dst,(void *)((longlong)_Dst + 0x48),(longlong)(int)(~param_2 + iVar2) * 0x48);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 1479cc8f8 FUN_1479cc8f8 body=62 status=ok
// SIG undefined FUN_1479cc8f8(void)

void FUN_1479cc8f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479cc936(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x48,8);
  }
  return;
}



// FUNCTION 1479cc936 FUN_1479cc936 body=112 status=ok
// SIG undefined FUN_1479cc936(void)

ulonglong FUN_1479cc936(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x48) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479cc970;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x48,8);
      param_2 = param_2 / 0x48;
    }
  }
LAB_1479cc970:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479cc9a6 FUN_1479cc9a6 body=48 status=ok
// SIG undefined FUN_1479cc9a6(void)

void FUN_1479cc9a6(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 1479cc9d6 FUN_1479cc9d6 body=62 status=ok
// SIG undefined FUN_1479cc9d6(void)

void FUN_1479cc9d6(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1479cca14(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xc,4);
  }
  return;
}



// FUNCTION 1479cca14 FUN_1479cca14 body=112 status=ok
// SIG undefined FUN_1479cca14(void)

ulonglong FUN_1479cca14(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xc) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1479cca4e;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xc,4);
      param_2 = param_2 / 0xc;
    }
  }
LAB_1479cca4e:
  return param_2 & 0xffffffff;
}



// FUNCTION 1479cca84 FUN_1479cca84 body=42 status=ok
// SIG undefined FUN_1479cca84(void)

void FUN_1479cca84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    FUN_146dd27ca(lVar1);
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}



// FUNCTION 1479ccaae FUN_1479ccaae body=29 status=ok
// SIG undefined FUN_1479ccaae(void)

undefined8 FUN_1479ccaae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ccacc FUN_1479ccacc body=142 status=ok
// SIG undefined FUN_1479ccacc(void)

void FUN_1479ccacc(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 200);
  if (param_2 <= (int)uVar1) {
    uVar4 = 0x10;
    if (0x10 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xcc)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0xc,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0xc)) {
        uVar4 = uVar3 / 0xc & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0xcc) = (int)uVar4;
    FUN_1479ccb5c(param_1,param_2,uVar4,0xc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1479ccb5c FUN_1479ccb5c body=150 status=ok
// SIG undefined FUN_1479ccb5c(void)

void FUN_1479ccb5c(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 1479ccbf2 FUN_1479ccbf2 body=127 status=ok
// SIG undefined FUN_1479ccbf2(void)

void FUN_1479ccbf2(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 / 0xc)) {
        uVar2 = uVar1 / 0xc & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xcc)) {
    *(int *)(param_1 + 0xcc) = (int)uVar2;
    FUN_1479ccb5c(param_1,*(undefined4 *)(param_1 + 200),uVar2,0xc);
    return;
  }
  return;
}



// FUNCTION 1479ccc7e FUN_1479ccc7e body=60 status=ok
// SIG undefined FUN_1479ccc7e(void)

undefined8 * FUN_1479ccc7e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f760b0;
  if (param_1[0x812] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cccba FUN_1479cccba body=60 status=ok
// SIG undefined FUN_1479cccba(void)

undefined8 * FUN_1479cccba(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83afb8;
  if (param_1[0x812] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cccf6 FUN_1479cccf6 body=60 status=ok
// SIG undefined FUN_1479cccf6(void)

undefined8 * FUN_1479cccf6(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83afb8;
  if (param_1[0x812] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ccd32 FUN_1479ccd32 body=124 status=ok
// SIG undefined FUN_1479ccd32(void)

void FUN_1479ccd32(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if (param_2 <= (int)uVar1) {
    iVar6 = 1;
    if (1 < uVar1) {
      if (*(uint *)(param_1 + 0x14) < 2) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x14) = iVar6;
    FUN_1479ccdb0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1479ccdb0 FUN_1479ccdb0 body=132 status=ok
// SIG undefined FUN_1479ccdb0(void)

void FUN_1479ccdb0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 8);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 8,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 8),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 8,param_2,param_3,8);
  return;
}



// FUNCTION 1479cce34 FUN_1479cce34 body=60 status=ok
// SIG undefined FUN_1479cce34(void)

undefined8 * FUN_1479cce34(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f760a8;
  if (param_1[0x791] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cce70 FUN_1479cce70 body=60 status=ok
// SIG undefined FUN_1479cce70(void)

undefined8 * FUN_1479cce70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83afd0;
  if (param_1[0x791] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cceac FUN_1479cceac body=60 status=ok
// SIG undefined FUN_1479cceac(void)

undefined8 * FUN_1479cceac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83afd0;
  if (param_1[0x791] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ccee8 FUN_1479ccee8 body=157 status=ok
// SIG undefined FUN_1479ccee8(void)

void FUN_1479ccee8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 *param_7,undefined8 param_8)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined2 local_48;
  undefined4 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined2 local_14;
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_24 = *param_7;
  uStack_20 = param_7[1];
  uStack_1c = param_7[2];
  uStack_18 = param_7[3];
  local_40 = &local_24;
  local_14 = 0xc;
  local_12 = 0;
  local_30 = &local_25;
  local_38 = param_8;
  local_50 = param_6;
  local_48 = 0x607;
  local_58 = param_4;
  FUN_1479b3f75(local_24,*(undefined8 *)*param_2,param_5,param_3);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479ccf86 FUN_1479ccf86 body=60 status=ok
// SIG undefined FUN_1479ccf86(void)

undefined8 * FUN_1479ccf86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a83afd8;
  if (param_1[0x389] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479ccfe0 FUN_1479ccfe0 body=241 status=ok
// SIG undefined FUN_1479ccfe0(void)

short * FUN_1479ccfe0(longlong param_1,short *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)FUN_14479d2ce(param_3 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_144a7b636();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_70 = *(undefined8 *)(param_1 + 0x30);
      local_80 = *(undefined4 *)(param_1 + 0x20);
      uStack_7c = *(undefined4 *)(param_1 + 0x24);
      uStack_78 = *(undefined4 *)(param_1 + 0x28);
      uStack_74 = *(undefined4 *)(param_1 + 0x2c);
      local_88 = *(undefined4 *)(param_1 + 0x18);
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = puVar1[2];
      puVar2 = *(undefined4 **)(param_1 + 8);
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = *(undefined8 *)(puVar2 + 4);
      bVar3 = (**(code **)(*plVar5 + 0x970))(plVar5,param_4);
      sVar4 = (ushort)bVar3 * 0x100 + 1;
      goto LAB_1479cd03d;
    }
  }
  sVar4 = 0;
LAB_1479cd03d:
  *param_2 = sVar4;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cd0d2 FUN_1479cd0d2 body=236 status=ok
// SIG undefined FUN_1479cd0d2(void)

short * FUN_1479cd0d2(longlong param_1,short *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_14479d2ce(param_3 + 0xd8);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7b636();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_70 = *(undefined8 *)(param_1 + 0x30);
      local_80 = *(undefined4 *)(param_1 + 0x20);
      uStack_7c = *(undefined4 *)(param_1 + 0x24);
      uStack_78 = *(undefined4 *)(param_1 + 0x28);
      uStack_74 = *(undefined4 *)(param_1 + 0x2c);
      local_88 = *(undefined4 *)(param_1 + 0x18);
      puVar1 = *(undefined8 **)(param_1 + 0x10);
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = puVar1[2];
      puVar2 = *(undefined4 **)(param_1 + 8);
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = *(undefined8 *)(puVar2 + 4);
      bVar3 = FUN_143609d04(lVar5,param_4);
      sVar4 = (ushort)bVar3 * 0x100 + 1;
      goto LAB_1479cd12f;
    }
  }
  sVar4 = 0;
LAB_1479cd12f:
  *param_2 = sVar4;
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cd1c0 FUN_1479cd1c0 body=263 status=ok
// SIG undefined FUN_1479cd1c0(void)

short * FUN_1479cd1c0(longlong *param_1,short *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_14479d2ce(param_3 + 0xd8);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = FUN_144a7b636();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar5[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      local_70 = param_1[6];
      local_80 = (undefined4)param_1[4];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_78 = (undefined4)param_1[5];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_88 = (undefined4)param_1[3];
      puVar1 = (undefined8 *)param_1[2];
      local_90 = *(undefined8 *)*param_1;
      local_98 = ((undefined8 *)*param_1)[1];
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = puVar1[2];
      puVar2 = (undefined4 *)param_1[1];
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = *(undefined8 *)(puVar2 + 4);
      bVar3 = (**(code **)(*plVar5 + 0x980))(plVar5,param_4);
      sVar4 = (ushort)bVar3 * 0x100 + 1;
      goto LAB_1479cd21d;
    }
  }
  sVar4 = 0;
LAB_1479cd21d:
  *param_2 = sVar4;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cd2c8 FUN_1479cd2c8 body=258 status=ok
// SIG undefined FUN_1479cd2c8(void)

short * FUN_1479cd2c8(longlong *param_1,short *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  short sVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar5 = FUN_14479d2ce(param_3 + 0xd8);
  if (lVar5 != 0) {
    lVar6 = FUN_144a7b636();
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
        == lVar6 + 0x30)) {
      local_70 = param_1[6];
      local_80 = (undefined4)param_1[4];
      uStack_7c = *(undefined4 *)((longlong)param_1 + 0x24);
      uStack_78 = (undefined4)param_1[5];
      uStack_74 = *(undefined4 *)((longlong)param_1 + 0x2c);
      local_88 = (undefined4)param_1[3];
      puVar1 = (undefined8 *)param_1[2];
      local_90 = *(undefined8 *)*param_1;
      local_98 = ((undefined8 *)*param_1)[1];
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = puVar1[2];
      puVar2 = (undefined4 *)param_1[1];
      local_68 = *puVar2;
      uStack_64 = puVar2[1];
      uStack_60 = puVar2[2];
      uStack_5c = puVar2[3];
      local_58 = *(undefined8 *)(puVar2 + 4);
      bVar3 = FUN_143609ecc(lVar5,param_4);
      sVar4 = (ushort)bVar3 * 0x100 + 1;
      goto LAB_1479cd325;
    }
  }
  sVar4 = 0;
LAB_1479cd325:
  *param_2 = sVar4;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cd3d2 FUN_1479cd3d2 body=252 status=ok
// SIG undefined FUN_1479cd3d2(void)

short * FUN_1479cd3d2(longlong *param_1,short *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  short sVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar3 = (longlong *)FUN_14479d2ce(param_3 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_144a7b636();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      local_80 = param_1[5];
      local_90 = (undefined4)param_1[3];
      uStack_8c = *(undefined4 *)((longlong)param_1 + 0x1c);
      uStack_88 = (undefined4)param_1[4];
      uStack_84 = *(undefined4 *)((longlong)param_1 + 0x24);
      local_98 = (undefined4)param_1[2];
      puVar1 = (undefined8 *)*param_1;
      local_48 = *puVar1;
      uStack_40 = puVar1[1];
      local_38 = puVar1[2];
      uStack_30 = puVar1[3];
      local_68 = puVar1[4];
      uStack_60 = puVar1[5];
      local_58 = puVar1[6];
      local_78 = param_4;
      (**(code **)(*plVar3 + 0x9a8))(plVar3,&local_68,&local_48,param_1[1]);
      sVar2 = (ushort)(*(int *)(param_4 + 8) != 0) * 0x100 + 1;
      goto LAB_1479cd42c;
    }
  }
  sVar2 = 0;
LAB_1479cd42c:
  *param_2 = sVar2;
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479cd4d6 FUN_1479cd4d6 body=29 status=ok
// SIG undefined FUN_1479cd4d6(void)

undefined8 FUN_1479cd4d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cd52a FUN_1479cd52a body=29 status=ok
// SIG undefined FUN_1479cd52a(void)

undefined8 FUN_1479cd52a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1479cd56f FUN_1479cd56f body=588 status=ok
// SIG undefined FUN_1479cd56f(void)

void FUN_1479cd56f(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined2 param_7,double *param_8,
                  undefined8 param_9)

{
  int *piVar1;
  undefined1 auStack_238 [32];
  double *local_218;
  double *local_210;
  undefined8 uStack_208;
  longlong local_200;
  double local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_1a8 = *(double *)(param_1 + 0x10);
  local_180 = local_1a8 + *(double *)(param_1 + 0x30);
  local_188 = local_1a8 + *(double *)(param_1 + 0x28);
  local_190 = local_1a8 + *(double *)(param_1 + 0x20);
  local_198 = *(double *)(param_1 + 0x30) - local_1a8;
  local_1a0 = *(double *)(param_1 + 0x28) - local_1a8;
  local_1a8 = *(double *)(param_1 + 0x20) - local_1a8;
  FUN_1400fd046(&local_1a8,&local_a0);
  local_210 = param_8;
  uStack_208 = param_9;
  local_218 = (double *)CONCAT62(local_218._2_6_,param_7);
  local_200 = param_1;
  FUN_1479cd7bc(&local_1a8,param_3,param_4,param_6);
  *(int *)(param_6 + 0x80) = *(int *)(param_6 + 0x80) + 1;
  if ((param_5 != 0.0) || (NAN(param_5))) {
    local_1b0 = (local_78 - local_90) * 0.5;
    local_1b8 = (local_80 - local_98) * 0.5;
    local_1c0 = (local_88 - local_a0) * 0.5;
    local_218 = &local_1c0;
    local_1c8 = param_4[2];
    local_1d8 = *param_4;
    uStack_1d0 = param_4[1];
    local_1e0 = local_1b0 + local_90;
    local_1e8 = local_1b8 + local_98;
    local_1f0 = local_1c0 + local_a0;
    local_210 = &local_1a8;
    (**(code **)(*param_2 + 0x58))(param_2,&local_1f0,&local_1d8,(double)param_5);
  }
  else {
    (**(code **)(*param_2 + 0x60))(param_2,&local_a0,&local_1a8);
  }
  piVar1 = (int *)(param_6 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14480df5d(param_6 + 0x88,param_6 + 8,*(undefined1 *)(param_6 + 0x84));
  }
  if ((local_70 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


