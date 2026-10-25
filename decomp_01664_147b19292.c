// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147b19292 FUN_147b19292 body=206 status=ok
// SIG undefined FUN_147b19292(void)

void FUN_147b19292(undefined8 param_1,longlong param_2,ulonglong *param_3)

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
  *param_3 = (ulonglong)(longlong)ROUND(local_28 + local_28 + 0.5) >> 1 & 0xffffffff |
             ((longlong)ROUND(local_20 + local_20 + 0.5) & 0xfffffffffffffffeU) << 0x1f;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19362 FUN_147b19362 body=229 status=ok
// SIG undefined FUN_147b19362(void)

void FUN_147b19362(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [44];
  float local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  *(double *)(param_3 + 4) = (double)local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19448 FUN_147b19448 body=208 status=ok
// SIG undefined FUN_147b19448(void)

void FUN_147b19448(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
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
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fcd9e(puVar1,&local_58);
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



// FUNCTION 147b1951a FUN_147b1951a body=208 status=ok
// SIG undefined FUN_147b1951a(void)

void FUN_147b1951a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
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
  puVar1 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467fccfe(puVar1,&local_50);
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



// FUNCTION 147b195ec FUN_147b195ec body=197 status=ok
// SIG undefined FUN_147b195ec(void)

void FUN_147b195ec(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
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
  puVar5 = &local_38;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar5 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = puVar5[2];
  uVar2 = *(undefined4 *)((longlong)puVar5 + 4);
  uVar3 = *(undefined4 *)(puVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)puVar5 + 0xc);
  *param_3 = *(undefined4 *)puVar5;
  param_3[1] = uVar2;
  param_3[2] = uVar3;
  param_3[3] = uVar4;
  *(undefined8 *)(param_3 + 4) = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b196b2 FUN_147b196b2 body=198 status=ok
// SIG undefined FUN_147b196b2(void)

void FUN_147b196b2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  local_68 = local_20;
  FUN_144afe7fe(&local_78,&local_58);
  param_3[4] = local_48;
  param_3[5] = uStack_44;
  param_3[6] = uStack_40;
  param_3[7] = uStack_3c;
  *param_3 = local_58;
  param_3[1] = uStack_54;
  param_3[2] = uStack_50;
  param_3[3] = uStack_4c;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1977a FUN_147b1977a body=142 status=ok
// SIG undefined FUN_147b1977a(void)

void FUN_147b1977a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
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
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1980a FUN_147b1980a body=240 status=ok
// SIG undefined FUN_147b1980a(void)

void FUN_147b1980a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
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
  FUN_147b198fc(&local_28,local_1c,local_20);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b198fc FUN_147b198fc body=87 status=ok
// SIG undefined FUN_147b198fc(void)

uint * FUN_147b198fc(uint *param_1,uint param_2,uint param_3)

{
  wchar_t *pwVar1;
  
  if ((int)param_2 < 0) {
    pwVar1 = L"Index1D must be non-negative: Convert1DTo2D";
  }
  else {
    if (0 < (int)param_3) {
      *param_1 = param_2 % param_3;
      param_1[1] = param_2 / param_3;
      return param_1;
    }
    pwVar1 = L"XSize must be positive: Convert1DTo2D";
  }
  FUN_1415b7ec4(pwVar1,3,DAT_14cae6e58);
  *(undefined8 *)param_1 = DAT_14c967818;
  return param_1;
}



// FUNCTION 147b19954 FUN_147b19954 body=321 status=ok
// SIG undefined FUN_147b19954(void)

void FUN_147b19954(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b19a96(&local_30,local_1c,local_20,local_24);
  *(undefined4 *)(param_3 + 1) = local_28;
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19a96 FUN_147b19a96 body=136 status=ok
// SIG undefined FUN_147b19a96(void)

uint * FUN_147b19a96(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  wchar_t *pwVar1;
  
  if ((int)param_2 < 0) {
    pwVar1 = L"Index1D must be non-negative: Convert1DTo3D";
  }
  else {
    if (0 < (int)param_3 && 0 < (int)param_4) {
      *param_1 = param_2 % param_3;
      param_1[1] = (uint)(((ulonglong)param_2 / (ulonglong)param_3) % (ulonglong)param_4);
      param_1[2] = param_2 / (param_4 * param_3);
      return param_1;
    }
    pwVar1 = L"XSize and YSize must be positive: Convert1DTo3D";
  }
  FUN_1415b7ec4(pwVar1,3,DAT_14cae6e58);
  param_1[2] = DAT_14c9a52a0;
  *(undefined8 *)param_1 = DAT_14c9a5298;
  return param_1;
}



// FUNCTION 147b19b1e FUN_147b19b1e body=235 status=ok
// SIG undefined FUN_147b19b1e(void)

void FUN_147b19b1e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  puVar3 = local_28;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147b19c0a(puVar3,local_2c);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19c0a FUN_147b19c0a body=71 status=ok
// SIG undefined FUN_147b19c0a(void)

int FUN_147b19c0a(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((int)(uVar1 | param_1[1]) < 0 || param_2 <= (int)uVar1) {
    FUN_1415b7ec4(L"Index2D out of bounds: Convert2DTo1D",3,DAT_14cae6e58);
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[1] * param_2 + uVar1;
  }
  return iVar2;
}



// FUNCTION 147b19c52 FUN_147b19c52 body=310 status=ok
// SIG undefined FUN_147b19c52(void)

void FUN_147b19c52(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c [12];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_2c);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_30 = 0;
  FUN_144a7452c();
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
  puVar3 = local_2c;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = FUN_147b19d8a(puVar3,local_30,local_34);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19d8a FUN_147b19d8a body=100 status=ok
// SIG undefined FUN_147b19d8a(void)

int FUN_147b19d8a(int *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 < param_2 && -1 < iVar1) {
    uVar2 = param_1[1];
    if (-1 < (int)(uVar2 | param_1[2]) && (int)uVar2 < param_3) {
      return (param_1[2] * param_3 + uVar2) * param_2 + iVar1;
    }
  }
  FUN_1415b7ec4(L"Index3D out of bounds: Convert3DTo1D",3,DAT_14cae6e58);
  return 0;
}



// FUNCTION 147b19dee FUN_147b19dee body=158 status=ok
// SIG undefined FUN_147b19dee(void)

void FUN_147b19dee(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = cos(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19e8e FUN_147b19e8e body=327 status=ok
// SIG undefined FUN_147b19e8e(void)

void FUN_147b19e8e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  FUN_147b19fd6(&local_40,local_1c,local_20,local_24);
  *(undefined8 *)(param_3 + 4) = local_30;
  *param_3 = local_40;
  param_3[1] = uStack_3c;
  param_3[2] = uStack_38;
  param_3[3] = uStack_34;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b19fd6 FUN_147b19fd6 body=827 status=ok
// SIG undefined FUN_147b19fd6(void)

void FUN_147b19fd6(double *param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float local_b0;
  
  param_3 = param_3 * 0.017453292;
  param_3 = (float)(longlong)
                   (param_3 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_3 < 0.0) * 4)) * -6.2831855 +
            param_3;
  if (param_3 <= 1.5707964) {
    if (param_3 < -1.5707964) {
      fVar1 = -3.1415927;
      goto LAB_147b1a07f;
    }
    fVar1 = 1.0;
  }
  else {
    fVar1 = 3.1415927;
LAB_147b1a07f:
    param_3 = fVar1 - param_3;
    fVar1 = -1.0;
  }
  param_2 = param_2 * 0.017453292;
  param_2 = (float)(longlong)
                   (param_2 * 0.15915494 +
                   *(float *)(&DAT_14a184448 + (ulonglong)(param_2 < 0.0) * 4)) * -6.2831855 +
            param_2;
  if (param_2 <= 1.5707964) {
    if (-1.5707964 <= param_2) {
      local_b0 = 1.0;
      goto LAB_147b1a0f2;
    }
    fVar3 = -3.1415927;
  }
  else {
    fVar3 = 3.1415927;
  }
  param_2 = fVar3 - param_2;
  local_b0 = -1.0;
LAB_147b1a0f2:
  fVar4 = param_3 * param_3;
  fVar1 = fVar1 * (((((fVar4 * -2.6051615e-07 + 2.4760495e-05) * fVar4 + -0.0013888378) * fVar4 +
                    0.041666638) * fVar4 + -0.5) * fVar4 + 1.0);
  fVar3 = param_2 * param_2;
  dVar2 = (double)param_4;
  *param_1 = (double)((((((fVar3 * -2.6051615e-07 + 2.4760495e-05) * fVar3 + -0.0013888378) * fVar3
                        + 0.041666638) * fVar3 + -0.5) * fVar3 + 1.0) * local_b0 * fVar1) * dVar2;
  param_1[1] = (double)((((((fVar3 * -2.3889859e-08 + 2.7525562e-06) * fVar3 + -0.00019840874) *
                           fVar3 + 0.008333331) * fVar3 + -0.16666667) * fVar3 + 1.0) * param_2 *
                       fVar1) * dVar2;
  param_1[2] = (double)((((((fVar4 * -2.3889859e-08 + 2.7525562e-06) * fVar4 + -0.00019840874) *
                           fVar4 + 0.008333331) * fVar4 + -0.16666667) * fVar4 + 1.0) * param_3) *
               dVar2;
  return;
}



// FUNCTION 147b1a312 FUN_147b1a312 body=310 status=ok
// SIG undefined FUN_147b1a312(void)

void FUN_147b1a312(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_88 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_40 * local_50 - local_58 * local_38;
  param_3[1] = local_60 * local_38 - local_50 * local_48;
  param_3[2] = local_48 * local_58 - local_60 * local_40;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1a44a FUN_147b1a44a body=242 status=ok
// SIG undefined FUN_147b1a44a(void)

void FUN_147b1a44a(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = local_28 * local_30 - local_38 * local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1a544 FUN_147b1a544 body=389 status=ok
// SIG undefined FUN_147b1a544(void)

void FUN_147b1a544(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *_Src;
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
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
  puVar3 = &local_50;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_60 = (undefined2 *)0x0;
  lVar4 = (longlong)(int)uStack_40;
  local_58 = (int)uStack_40;
  if (lVar4 == 0) {
    local_54 = 0;
  }
  else {
    FUN_1446dd670(&local_60,uStack_40 & 0xffffffff,0);
    memcpy(local_60,_Src,lVar4 * 2);
    puVar2 = local_60;
    if (local_58 != 0) goto LAB_147b1a67d;
  }
  puVar2 = &DAT_149dfb77a;
LAB_147b1a67d:
  uVar1 = FUN_14170a85e(puVar2,puVar3);
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *param_3 = uVar1;
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b1a6d0 FUN_147b1a6d0 body=383 status=ok
// SIG undefined FUN_147b1a6d0(void)

void FUN_147b1a6d0(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = FUN_14680f09c(&local_60,puVar2);
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



// FUNCTION 147b1a886 FUN_147b1a886 body=274 status=ok
// SIG undefined FUN_147b1a886(void)

void FUN_147b1a886(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  int local_20;
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
  if (local_20 - 0xdU < 0xfffffff4) {
    FUN_1415b7ec4(L"Invalid month (must be between 1 and 12): DaysInMonth",
                  CONCAT71((uint7)(uint3)((uint)local_20 >> 8),3),DAT_14cae6e50);
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14680eecc(local_1c);
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1a99a FUN_147b1a99a body=153 status=ok
// SIG undefined FUN_147b1a99a(void)

void FUN_147b1a99a(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  uVar1 = FUN_14680f2fc(local_1c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1aa34 FUN_147b1aa34 body=206 status=ok
// SIG undefined FUN_147b1aa34(void)

void FUN_147b1aa34(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = local_20;
  if (1.0 <= local_20) {
    dVar1 = 1.0;
  }
  dVar1 = acos((double)(~-(ulonglong)(local_20 < -1.0) & (ulonglong)dVar1 |
                       -(ulonglong)(local_20 < -1.0) & 0xbff0000000000000));
  *param_3 = dVar1 * 57.29577951308232;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ab04 FUN_147b1ab04 body=206 status=ok
// SIG undefined FUN_147b1ab04(void)

void FUN_147b1ab04(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = local_20;
  if (1.0 <= local_20) {
    dVar1 = 1.0;
  }
  dVar1 = asin((double)(~-(ulonglong)(local_20 < -1.0) & (ulonglong)dVar1 |
                       -(ulonglong)(local_20 < -1.0) & 0xbff0000000000000));
  *param_3 = dVar1 * 57.29577951308232;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1abd4 FUN_147b1abd4 body=166 status=ok
// SIG undefined FUN_147b1abd4(void)

void FUN_147b1abd4(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = atan(local_20);
  *param_3 = dVar1 * 57.29577951308232;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ac7c FUN_147b1ac7c body=285 status=ok
// SIG undefined FUN_147b1ac7c(void)

void FUN_147b1ac7c(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = 0.0;
  if ((((local_28 != 0.0) || (NAN(local_28))) || (local_20 != 0.0)) || (NAN(local_20))) {
    dVar1 = atan2(local_20,local_28);
    dVar1 = dVar1 * 57.29577951308232;
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ad9a FUN_147b1ad9a body=166 status=ok
// SIG undefined FUN_147b1ad9a(void)

void FUN_147b1ad9a(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = cos(local_20 * 0.017453292519943295);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ae42 FUN_147b1ae42 body=161 status=ok
// SIG undefined FUN_147b1ae42(void)

void FUN_147b1ae42(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = local_20 * 0.017453292519943295;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1aee4 FUN_147b1aee4 body=166 status=ok
// SIG undefined FUN_147b1aee4(void)

void FUN_147b1aee4(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = sin(local_20 * 0.017453292519943295);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1af8c FUN_147b1af8c body=166 status=ok
// SIG undefined FUN_147b1af8c(void)

void FUN_147b1af8c(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = tan(local_20 * 0.017453292519943295);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b034 FUN_147b1b034 body=257 status=ok
// SIG undefined FUN_147b1b034(void)

void FUN_147b1b034(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = SQRT((local_30 - local_20) * (local_30 - local_20) +
                  (local_38 - local_28) * (local_38 - local_28));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b136 FUN_147b1b136 body=250 status=ok
// SIG undefined FUN_147b1b136(void)

void FUN_147b1b136(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = (local_30 - local_20) * (local_30 - local_20) +
             (local_38 - local_28) * (local_38 - local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b232 FUN_147b1b232 body=257 status=ok
// SIG undefined FUN_147b1b232(void)

void FUN_147b1b232(undefined8 param_1,longlong param_2,byte *param_3)

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
    FUN_1415b7ec4(L"Divide by zero: Divide_ByteByte",3,DAT_14cae6e38);
    bVar1 = 0;
  }
  else {
    bVar1 = local_19 / local_1a;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b334 FUN_147b1b334 body=271 status=ok
// SIG undefined FUN_147b1b334(void)

void FUN_147b1b334(undefined8 param_1,longlong param_2,longlong *param_3)

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
  if (local_28 == 0) {
    FUN_1415b7ec4(L"Divide by zero: Divide_Int64Int64",3,DAT_14cae6e38);
    lVar1 = 0;
  }
  else {
    lVar1 = local_20 / local_28;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b444 FUN_147b1b444 body=300 status=ok
// SIG undefined FUN_147b1b444(void)

void FUN_147b1b444(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  undefined1 auStack_48 [36];
  int local_24;
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
  if (local_24 == 0) {
    FUN_1415b7ec4(L"Divide by zero: Divide_IntPointInt",3,DAT_14cae6e38);
    uVar1 = DAT_14c967818;
  }
  else {
    uVar1 = (longlong)((ulonglong)(uint)((int)local_20 >> 0x1f) << 0x20 | local_20 & 0xffffffff) /
            (longlong)local_24 & 0xffffffffU |
            (longlong)((ulonglong)(uint)((longlong)local_20 >> 0x3f) << 0x20 | local_20 >> 0x20) /
            (longlong)local_24 << 0x20;
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b572 FUN_147b1b572 body=298 status=ok
// SIG undefined FUN_147b1b572(void)

void FUN_147b1b572(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
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
  if (local_28 >> 0x20 == 0 || (int)local_28 == 0) {
    FUN_1415b7ec4(L"Divide by zero: Divide_IntPointIntPoint",3,DAT_14cae6e38);
    uVar1 = DAT_14c967818;
  }
  else {
    uVar1 = (longlong)((ulonglong)(uint)((int)local_20 >> 0x1f) << 0x20 | local_20 & 0xffffffff) /
            (longlong)(int)local_28 & 0xffffffffU |
            (longlong)((ulonglong)(uint)((longlong)local_20 >> 0x3f) << 0x20 | local_20 >> 0x20) /
            (longlong)(int)(local_28 >> 0x20) << 0x20;
  }
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b69e FUN_147b1b69e body=277 status=ok
// SIG undefined FUN_147b1b69e(void)

void FUN_147b1b69e(undefined8 param_1,longlong param_2,float *param_3)

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
  *param_3 = local_28 / local_38;
  param_3[1] = local_24 / local_34;
  param_3[2] = local_20 / local_30;
  param_3[3] = local_1c / local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b7b4 FUN_147b1b7b4 body=244 status=ok
// SIG undefined FUN_147b1b7b4(void)

void FUN_147b1b7b4(undefined8 param_1,longlong param_2,longlong *param_3)

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
  *param_3 = (longlong)((float)local_20 / local_24);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b8aa FUN_147b1b8aa body=324 status=ok
// SIG undefined FUN_147b1b8aa(void)

void FUN_147b1b8aa(undefined8 param_1,longlong param_2,double *param_3)

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
  if ((local_30 != 0.0) || (NAN(local_30))) {
    local_20 = local_20 * (1.0 / local_30);
    local_28 = (1.0 / local_30) * local_28;
  }
  else {
    FUN_1415b7ec4(L"Divide by zero: Divide_Vector2DFloat",3,DAT_14cae6e38);
    local_28 = DAT_14c8463f0;
    local_20 = DAT_14c8463f8;
  }
  *param_3 = local_28;
  param_3[1] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1b9f0 FUN_147b1b9f0 body=310 status=ok
// SIG undefined FUN_147b1b9f0(void)

void FUN_147b1b9f0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
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
  if ((local_38 != 0.0) || (NAN(local_38))) {
    if ((local_30 != 0.0) || (NAN(local_30))) {
      dVar1 = local_28 / local_38;
      dVar2 = local_20 / local_30;
      goto LAB_147b1bab8;
    }
  }
  FUN_1415b7ec4(L"Divide by zero: Divide_Vector2DVector2D",3,DAT_14cae6e38);
  dVar1 = DAT_14c8463f0;
  dVar2 = DAT_14c8463f8;
LAB_147b1bab8:
  *param_3 = dVar1;
  param_3[1] = dVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1bb28 FUN_147b1bb28 body=369 status=ok
// SIG undefined FUN_147b1bb28(void)

void FUN_147b1bb28(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = *pdVar7 / *pdVar8;
  param_3[1] = dVar5 / dVar6;
  param_3[2] = dVar3 / dVar4;
  param_3[3] = dVar1 / dVar2;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1bc9a FUN_147b1bc9a body=347 status=ok
// SIG undefined FUN_147b1bc9a(void)

void FUN_147b1bc9a(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
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
  if ((local_38 != 0.0) || (NAN(local_38))) {
    dVar1 = 1.0 / local_38;
    local_20 = local_20 * dVar1;
    local_28 = local_28 * dVar1;
    dVar1 = dVar1 * local_30;
  }
  else {
    FUN_1415b7ec4(L"Divide by zero: Divide_VectorFloat",3,DAT_14cae6e38);
    dVar1 = DAT_14c8464e0;
    local_20 = DAT_14c8464f0;
    local_28 = DAT_14c8464e8;
  }
  *param_3 = dVar1;
  param_3[1] = local_28;
  param_3[2] = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1bdf6 FUN_147b1bdf6 body=340 status=ok
// SIG undefined FUN_147b1bdf6(void)

void FUN_147b1bdf6(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
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
  if (local_34 == 0) {
    FUN_1415b7ec4(L"Divide by zero: Divide_VectorInt",3,DAT_14cae6e38);
    dVar2 = DAT_14c8464e0;
    dVar3 = DAT_14c8464f0;
    dVar1 = DAT_14c8464e8;
  }
  else {
    dVar1 = 1.0 / (double)local_34;
    dVar2 = dVar1 * local_30;
    dVar3 = local_20 * dVar1;
    dVar1 = local_28 * dVar1;
  }
  *param_3 = dVar2;
  param_3[1] = dVar1;
  param_3[2] = dVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1bf4c FUN_147b1bf4c body=347 status=ok
// SIG undefined FUN_147b1bf4c(void)

void FUN_147b1bf4c(undefined8 param_1,longlong param_2,double *param_3)

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
  if ((local_48 != 0.0) || (NAN(local_48))) {
    if ((local_40 != 0.0) || (NAN(local_40))) {
      if ((local_38 != 0.0) || (NAN(local_38))) {
        dVar1 = local_20 / local_38;
        dVar2 = local_30 / local_48;
        dVar3 = local_28 / local_40;
        goto LAB_147b1c034;
      }
    }
  }
  FUN_1415b7ec4(L"Divide by zero: Divide_VectorVector",3,DAT_14cae6e38);
  dVar1 = DAT_14c8464f0;
  dVar2 = DAT_14c8464e0;
  dVar3 = DAT_14c8464e8;
LAB_147b1c034:
  *param_3 = dVar2;
  param_3[1] = dVar3;
  param_3[2] = dVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1c0a8 FUN_147b1c0a8 body=242 status=ok
// SIG undefined FUN_147b1c0a8(void)

void FUN_147b1c0a8(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = local_28 * local_38 + local_30 * local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1c19c FUN_147b1c19c body=583 status=ok
// SIG undefined FUN_147b1c19c(void)

void FUN_147b1c19c(undefined8 param_1,longlong param_2,float *param_3)

{
  float fVar1;
  undefined1 auStack_68 [36];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_34 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  local_38 = 0.0;
  FUN_144a64e42();
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar1 = local_40;
  if (0.0 < local_3c) {
    fVar1 = ABS(local_34 - local_38) / local_3c;
    if (1.0 <= fVar1) {
      fVar1 = 1.0;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = local_40 + (local_44 - local_40) * fVar1;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_3 = local_34 * fVar1 + local_38 * (1.0 - fVar1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1c3e4 FUN_147b1c3e4 body=580 status=ok
// SIG undefined FUN_147b1c3e4(void)

void FUN_147b1c3e4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_54;
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
  local_54 = 0;
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
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  local_b0 = local_54;
  local_b8 = local_50;
  FUN_147b1c62a(&local_70,&local_a8,&local_88,local_4c);
  *(undefined8 *)(param_3 + 4) = local_60;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1c62a FUN_147b1c62a body=463 status=ok
// SIG undefined FUN_147b1c62a(void)

void FUN_147b1c62a(double *param_1,double *param_2,double *param_3,float param_4,float param_5,
                  float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)param_6;
  dVar1 = (double)param_5;
  dVar3 = (double)param_4;
  dVar4 = dVar1;
  if (0.0 < param_4) {
    dVar4 = ABS(param_2[1] - param_3[1]) / dVar3;
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar4 = (dVar2 - dVar1) * dVar4 + dVar1;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar4 = param_2[1] * dVar4 + param_3[1] * (1.0 - dVar4);
  if (180.0 <= dVar4) {
    dVar4 = 180.0;
  }
  if (dVar4 <= -180.0) {
    dVar4 = -180.0;
  }
  param_1[1] = dVar4;
  dVar4 = dVar1;
  if (0.0 < param_4) {
    dVar4 = ABS(*param_2 - *param_3) / dVar3;
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar4 = (dVar2 - dVar1) * dVar4 + dVar1;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  dVar4 = *param_2 * dVar4 + *param_3 * (1.0 - dVar4);
  if (180.0 <= dVar4) {
    dVar4 = 180.0;
  }
  if (dVar4 <= -180.0) {
    dVar4 = -180.0;
  }
  *param_1 = dVar4;
  if (0.0 < param_4) {
    dVar3 = ABS(param_2[2] - param_3[2]) / dVar3;
    if (1.0 <= dVar3) {
      dVar3 = 1.0;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar1 = dVar1 + (dVar2 - dVar1) * dVar3;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  dVar3 = param_2[2] * dVar1 + param_3[2] * (1.0 - dVar1);
  if (180.0 <= dVar3) {
    dVar3 = 180.0;
  }
  if (dVar3 <= -180.0) {
    dVar3 = -180.0;
  }
  param_1[2] = dVar3;
  return;
}



// FUNCTION 147b1c7fa FUN_147b1c7fa body=580 status=ok
// SIG undefined FUN_147b1c7fa(void)

void FUN_147b1c7fa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined4 local_54;
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
  local_54 = 0;
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
  local_88 = local_48;
  uStack_80 = uStack_40;
  local_78 = local_38;
  local_a8 = local_30;
  uStack_a4 = uStack_2c;
  uStack_a0 = uStack_28;
  uStack_9c = uStack_24;
  local_98 = local_20;
  local_b0 = local_54;
  local_b8 = local_50;
  FUN_147b1ca40(&local_70,&local_a8,&local_88,local_4c);
  *(undefined8 *)(param_3 + 4) = local_60;
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = uStack_64;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ca40 FUN_147b1ca40 body=415 status=ok
// SIG undefined FUN_147b1ca40(void)

void FUN_147b1ca40(double *param_1,double *param_2,double *param_3,float param_4,float param_5,
                  float param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar2 = (double)param_6;
  dVar1 = (double)param_5;
  dVar3 = (double)param_4;
  dVar4 = dVar1;
  if (0.0 < param_4) {
    dVar4 = ABS(*param_2 - *param_3) / dVar3;
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar4 = (dVar2 - dVar1) * dVar4 + dVar1;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  *param_1 = *param_2 * dVar4 + *param_3 * (1.0 - dVar4);
  dVar4 = dVar1;
  if (0.0 < param_4) {
    dVar4 = ABS(param_2[1] - param_3[1]) / dVar3;
    if (1.0 <= dVar4) {
      dVar4 = 1.0;
    }
    if (dVar4 <= 0.0) {
      dVar4 = 0.0;
    }
    dVar4 = (dVar2 - dVar1) * dVar4 + dVar1;
  }
  if (1.0 <= dVar4) {
    dVar4 = 1.0;
  }
  if (dVar4 <= 0.0) {
    dVar4 = 0.0;
  }
  param_1[1] = param_2[1] * dVar4 + param_3[1] * (1.0 - dVar4);
  if (0.0 < param_4) {
    dVar3 = ABS(param_2[2] - param_3[2]) / dVar3;
    if (1.0 <= dVar3) {
      dVar3 = 1.0;
    }
    if (dVar3 <= 0.0) {
      dVar3 = 0.0;
    }
    dVar1 = dVar1 + (dVar2 - dVar1) * dVar3;
  }
  if (1.0 <= dVar1) {
    dVar1 = 1.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  param_1[2] = param_2[2] * dVar1 + param_3[2] * (1.0 - dVar1);
  return;
}



// FUNCTION 147b1cbe0 FUN_147b1cbe0 body=615 status=ok
// SIG undefined FUN_147b1cbe0(void)

void FUN_147b1cbe0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_98 [44];
  undefined4 local_6c;
  undefined8 local_68;
  undefined1 local_59;
  undefined8 local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0.0;
  FUN_144a49fc8();
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
  local_58 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_59 = 0;
  FUN_14475a8dc();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_59);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_59);
  }
  local_68 = 0;
  FUN_144a49fc8();
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
  dVar2 = local_48;
  dVar1 = local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar3 = (double)FUN_140bcb07c(local_58,local_59,local_68,local_6c);
  *param_3 = (dVar1 - dVar2) * dVar3 + dVar2;
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ce4e FUN_147b1ce4e body=209 status=ok
// SIG undefined FUN_147b1ce4e(void)

void FUN_147b1ce4e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1cf30 FUN_147b1cf30 body=241 status=ok
// SIG undefined FUN_147b1cf30(void)

void FUN_147b1cf30(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 auStack_48 [32];
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_28 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)param_3 = (local_28 == 0) != (iVar1 != 0);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d02e FUN_147b1d02e body=230 status=ok
// SIG undefined FUN_147b1d02e(void)

void FUN_147b1d02e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d11c FUN_147b1d11c body=230 status=ok
// SIG undefined FUN_147b1d11c(void)

void FUN_147b1d11c(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d210 FUN_147b1d210 body=230 status=ok
// SIG undefined FUN_147b1d210(void)

void FUN_147b1d210(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d304 FUN_147b1d304 body=298 status=ok
// SIG undefined FUN_147b1d304(void)

void FUN_147b1d304(undefined8 param_1,longlong param_2,byte *param_3)

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
  *param_3 = (local_1c == local_2c && local_20 == local_30) &
             -(local_24 == local_34 && local_28 == local_38);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d438 FUN_147b1d438 body=439 status=ok
// SIG undefined FUN_147b1d438(void)

void FUN_147b1d438(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
  uVar1 = 0;
  bVar5 = false;
  do {
    lVar2 = 0;
    do {
      if ((double)local_12c < ABS(*(double *)(puVar3 + lVar2 * 8) - *(double *)(puVar4 + lVar2 * 8))
         ) goto LAB_147b1d556;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 4);
    bVar5 = 2 < uVar1;
    uVar1 = uVar1 + 1;
    puVar4 = puVar4 + 0x20;
    puVar3 = puVar3 + 0x20;
  } while (uVar1 != 4);
LAB_147b1d556:
  *param_3 = bVar5;
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d602 FUN_147b1d602 body=585 status=ok
// SIG undefined FUN_147b1d602(void)

void FUN_147b1d602(undefined8 param_1,longlong param_2,undefined1 *param_3)

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
    bVar16 = true;
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
    bVar16 = (uVar7 & 0x3fffffff) == 0 && iVar10 == 0;
  }
  *param_3 = bVar16;
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1d852 FUN_147b1d852 body=543 status=ok
// SIG undefined FUN_147b1d852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b1d852(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = (uVar6 & 0x3fffffff) == 0 && iVar3 == 0;
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1da78 FUN_147b1da78 body=230 status=ok
// SIG undefined FUN_147b1da78(void)

void FUN_147b1da78(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 == local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1db68 FUN_147b1db68 body=437 status=ok
// SIG undefined FUN_147b1db68(void)

void FUN_147b1db68(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_148 [32];
  undefined4 local_128;
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
  puVar3 = &local_b8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  puVar4 = &local_118;
  if (puVar1 != (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_128 = 0x38d1b717;
  uVar2 = FUN_147b32e3a(puVar3,puVar4,puVar1,0x38d1b717);
  *param_3 = uVar2;
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1dd24 FUN_147b1dd24 body=355 status=ok
// SIG undefined FUN_147b1dd24(void)

void FUN_147b1dd24(undefined8 param_1,longlong param_2,byte *param_3)

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
  *param_3 = -(ABS(local_20 - local_30) <= (double)local_3c &&
              ABS(local_28 - local_38) <= (double)local_3c) & 1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1de8e FUN_147b1de8e body=579 status=ok
// SIG undefined FUN_147b1de8e(void)

void FUN_147b1de8e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
        bVar3 = ABS(pdVar7[3] - pdVar6[3]) <= dVar2;
        goto LAB_147b1e00d;
      }
    }
  }
  bVar3 = false;
LAB_147b1e00d:
  *(bool *)param_3 = bVar3;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e0d8 FUN_147b1e0d8 body=385 status=ok
// SIG undefined FUN_147b1e0d8(void)

void FUN_147b1e0d8(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  if ((dVar2 < ABS(local_30 - local_48)) || (dVar2 < ABS(local_28 - local_40))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(local_20 - local_38) <= dVar2;
  }
  *(bool *)param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e260 FUN_147b1e260 body=256 status=ok
// SIG undefined FUN_147b1e260(void)

void FUN_147b1e260(undefined8 param_1,longlong param_2,byte *param_3)

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
  *param_3 = -(local_20 == local_30 && local_28 == local_38) & 1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e368 FUN_147b1e368 body=446 status=ok
// SIG undefined FUN_147b1e368(void)

void FUN_147b1e368(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  byte bVar2;
  double *pdVar3;
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
  pdVar3 = *(double **)(param_2 + 0x38);
  pdVar5 = local_88 + 4;
  pdVar4 = pdVar3;
  if (pdVar3 == (double *)0x0) {
    pdVar4 = pdVar5;
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
  pdVar6 = pdVar1;
  if (pdVar1 == (double *)0x0) {
    pdVar6 = local_88;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((*pdVar4 == *pdVar6) && (!NAN(*pdVar4) && !NAN(*pdVar6))) {
    pdVar4 = pdVar3;
    if (pdVar3 == (double *)0x0) {
      pdVar4 = pdVar5;
    }
    pdVar6 = pdVar1;
    if (pdVar1 == (double *)0x0) {
      pdVar6 = local_88;
    }
    if ((pdVar4[1] == pdVar6[1]) && (!NAN(pdVar4[1]) && !NAN(pdVar6[1]))) {
      pdVar4 = pdVar3;
      if (pdVar3 == (double *)0x0) {
        pdVar4 = pdVar5;
      }
      pdVar6 = pdVar1;
      if (pdVar1 == (double *)0x0) {
        pdVar6 = local_88;
      }
      if ((pdVar4[2] == pdVar6[2]) && (!NAN(pdVar4[2]) && !NAN(pdVar6[2]))) {
        if (pdVar3 != (double *)0x0) {
          pdVar5 = pdVar3;
        }
        pdVar3 = local_88;
        if (pdVar1 != (double *)0x0) {
          pdVar3 = pdVar1;
        }
        bVar2 = -(pdVar3[3] == pdVar5[3]) & 1;
        goto LAB_147b1e4b6;
      }
    }
  }
  bVar2 = 0;
LAB_147b1e4b6:
  *param_3 = bVar2;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e52e FUN_147b1e52e body=276 status=ok
// SIG undefined FUN_147b1e52e(void)

void FUN_147b1e52e(undefined8 param_1,longlong param_2,byte *param_3)

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
  *param_3 = local_20 == local_38 & -(local_28 == local_40 && local_30 == local_48);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e644 FUN_147b1e644 body=158 status=ok
// SIG undefined FUN_147b1e644(void)

void FUN_147b1e644(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = exp(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e6e4 FUN_147b1e6e4 body=177 status=ok
// SIG undefined FUN_147b1e6e4(void)

void FUN_147b1e6e4(undefined8 param_1,longlong param_2,int *param_3)

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
  *param_3 = -(int)((ulonglong)(longlong)ROUND(-0.5 - (local_20 + local_20)) >> 1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e796 FUN_147b1e796 body=163 status=ok
// SIG undefined FUN_147b1e796(void)

void FUN_147b1e796(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  auVar1 = roundpd(auVar1,auVar1,2);
  *param_3 = (longlong)auVar1._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e83a FUN_147b1e83a body=163 status=ok
// SIG undefined FUN_147b1e83a(void)

void FUN_147b1e83a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  auVar1 = roundpd(auVar1,auVar1,1);
  *param_3 = (longlong)auVar1._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1e8de FUN_147b1e8de body=404 status=ok
// SIG undefined FUN_147b1e8de(void)

void FUN_147b1e8de(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  local_98 = local_60;
  uStack_90 = uStack_58;
  local_88 = local_50;
  local_b8 = local_48;
  uStack_b0 = uStack_40;
  local_a8 = local_38;
  local_d8 = local_30;
  uStack_d4 = uStack_2c;
  uStack_d0 = uStack_28;
  uStack_cc = uStack_24;
  local_c8 = local_20;
  FUN_147b1ea74(&local_78);
  *(undefined8 *)(param_3 + 4) = local_68;
  *param_3 = local_78;
  param_3[1] = uStack_74;
  param_3[2] = uStack_70;
  param_3[3] = uStack_6c;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ea74 FUN_147b1ea74 body=282 status=ok
// SIG undefined FUN_147b1ea74(void)

void FUN_147b1ea74(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = *param_4;
  dVar2 = param_4[1];
  dVar7 = param_4[2];
  dVar6 = dVar7 * dVar7 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar6 != 1.0) || (dVar3 = dVar2, dVar4 = dVar1, dVar5 = dVar7, NAN(dVar6))) &&
     (dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0, dVar5 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar6)) {
    dVar6 = 1.0 / SQRT(dVar6);
    dVar3 = dVar2 * dVar6;
    dVar4 = dVar1 * dVar6;
    dVar5 = dVar7 * dVar6;
  }
  dVar1 = param_3[2];
  dVar2 = param_3[1];
  dVar7 = (param_2[2] - dVar1) * dVar5 +
          (*param_2 - *param_3) * dVar4 + (param_2[1] - dVar2) * dVar3;
  *param_1 = dVar7 * dVar4 + *param_3;
  param_1[1] = dVar3 * dVar7 + dVar2;
  param_1[2] = dVar5 * dVar7 + dVar1;
  return;
}



// FUNCTION 147b1eb8e FUN_147b1eb8e body=425 status=ok
// SIG undefined FUN_147b1eb8e(void)

void FUN_147b1eb8e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  local_98 = local_60;
  uStack_90 = uStack_58;
  local_88 = local_50;
  local_b8 = local_48;
  uStack_b0 = uStack_40;
  local_a8 = local_38;
  local_d8 = local_30;
  uStack_d4 = uStack_2c;
  uStack_d0 = uStack_28;
  uStack_cc = uStack_24;
  local_c8 = local_20;
  FUN_144afdf0e(&local_78);
  *(undefined8 *)(param_3 + 4) = local_68;
  *param_3 = local_78;
  param_3[1] = uStack_74;
  param_3[2] = uStack_70;
  param_3[3] = uStack_6c;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ed38 FUN_147b1ed38 body=680 status=ok
// SIG undefined FUN_147b1ed38(void)

void FUN_147b1ed38(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_158 [32];
  undefined1 *local_138;
  undefined1 *local_130;
  undefined1 local_128 [24];
  undefined1 local_110 [24];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
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
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_f8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_110);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  local_138 = local_110;
  if (puVar1 != (undefined1 *)0x0) {
    local_138 = puVar1;
  }
  local_130 = local_128;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_130 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_28 = local_e8;
  local_38 = local_f8;
  uStack_30 = uStack_f0;
  local_48 = local_d0;
  local_58 = local_e0;
  uStack_50 = uStack_d8;
  local_68 = local_b8;
  local_78 = local_c8;
  uStack_70 = uStack_c0;
  local_88 = local_a0;
  local_98 = local_b0;
  uStack_94 = uStack_ac;
  uStack_90 = uStack_a8;
  uStack_8c = uStack_a4;
  FUN_144a0d30e();
  if ((local_20 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1efe2 FUN_147b1efe2 body=586 status=ok
// SIG undefined FUN_147b1efe2(void)

void FUN_147b1efe2(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined1 auStack_a8 [40];
  double local_80;
  double local_78;
  double local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_68 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_80 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  dVar2 = local_68;
  dVar1 = local_70;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  fVar3 = (float)local_78;
  if (0.5 <= fVar3) {
    fVar3 = powf(1.0 - (fVar3 + fVar3 + -1.0),(float)local_80);
    fVar3 = (1.0 - fVar3) * 0.5 + 0.5;
  }
  else {
    fVar3 = powf(fVar3 + fVar3,(float)local_80);
    fVar3 = (fVar3 + 0.0) * 0.5;
  }
  *param_3 = (dVar1 - dVar2) * (double)fVar3 + dVar2;
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1f22e FUN_147b1f22e body=480 status=ok
// SIG undefined FUN_147b1f22e(void)

void FUN_147b1f22e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
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
  dVar1 = local_28;
  if (0.0 < local_38) {
    dVar2 = local_28 - local_20;
    if (9.99999993922529e-09 <= dVar2 * dVar2) {
      dVar1 = local_38 * local_30;
      if (1.0 <= dVar1) {
        dVar1 = 1.0;
      }
      if (dVar1 <= 0.0) {
        dVar1 = 0.0;
      }
      dVar1 = local_20 + dVar2 * dVar1;
    }
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1f410 FUN_147b1f410 body=470 status=ok
// SIG undefined FUN_147b1f410(void)

void FUN_147b1f410(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_58 [32];
  double local_38;
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
  dVar1 = local_28 - local_20;
  dVar2 = local_28;
  if (9.99999993922529e-09 <= dVar1 * dVar1) {
    dVar2 = local_30 * local_38;
    if (dVar2 <= dVar1) {
      dVar1 = dVar2;
    }
    if (dVar1 <= -dVar2) {
      dVar1 = -dVar2;
    }
    dVar2 = local_20 + dVar1;
  }
  *param_3 = dVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1f5e8 FUN_147b1f5e8 body=330 status=ok
// SIG undefined FUN_147b1f5e8(void)

void FUN_147b1f5e8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [36];
  undefined4 local_24;
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
  uVar1 = FUN_1407b5b68(local_1c,local_20,local_24);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1f740 FUN_147b1f740 body=1212 status=ok
// SIG undefined FUN_147b1f740(void)

void FUN_147b1f740(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined1 local_b0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_64 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_64);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_70 = 0;
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_7c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_7c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_7c);
  }
  local_80 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_84 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  local_88 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_8c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_8c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_8c);
  }
  local_90 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  iVar2 = local_90;
  local_94 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_94);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  local_98 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_9c = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b0 = local_9c != 0;
  puVar3 = &local_78;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  local_c8 = iVar2 != 0;
  local_b8 = local_98;
  local_c0 = local_94;
  local_d0 = local_8c;
  local_d8 = local_88;
  local_e0 = local_84;
  local_e8 = local_80;
  uVar4 = FUN_147b1fbfe(local_64,local_68,puVar3,local_7c);
  *param_3 = uVar4;
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1fbfe FUN_147b1fbfe body=257 status=ok
// SIG undefined FUN_147b1fbfe(void)

void FUN_147b1fbfe(float param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  char param_9,float param_10,float param_11,undefined1 param_12)

{
  float *pfVar1;
  float fVar2;
  undefined1 auStack_98 [32];
  float *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined1 local_48;
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  pfVar1 = (float *)(param_3 + 4);
  local_48 = param_12;
  local_50 = param_7;
  local_58 = param_8;
  local_60 = param_6;
  local_68 = param_5;
  local_78 = pfVar1;
  local_70 = param_4;
  local_34 = param_1;
  FUN_147b47ce5(&local_34,param_2,param_5,param_3 + 8);
  fVar2 = local_34;
  if (param_9 != '\0') {
    if (param_10 <= local_34) {
      if ((local_34 <= param_11) || (fVar2 = param_11, *pfVar1 <= 0.0)) goto LAB_147b1fcb1;
    }
    else {
      fVar2 = param_10;
      if (0.0 < *pfVar1 || *pfVar1 == 0.0) goto LAB_147b1fcb1;
    }
    *pfVar1 = 0.0;
  }
LAB_147b1fcb1:
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar2);
  }
  return;
}



// FUNCTION 147b1fd00 FUN_147b1fd00 body=236 status=ok
// SIG undefined FUN_147b1fd00(void)

void FUN_147b1fd00(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = local_20;
  if (local_28 <= local_20) {
    dVar1 = local_28;
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1fdee FUN_147b1fdee body=323 status=ok
// SIG undefined FUN_147b1fdee(void)

void FUN_147b1fdee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  puVar2 = &local_30;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147b1ff32((int)local_20,local_28,puVar2);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b1ff32 FUN_147b1ff32 body=138 status=ok
// SIG undefined FUN_147b1ff32(void)

longlong FUN_147b1ff32(double param_1,double param_2,undefined8 *param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  if ((param_2 != 0.0) || (NAN(param_2))) {
    dVar4 = ABS(param_1 / param_2);
    lVar1 = (longlong)ROUND(dVar4 + dVar4 + -0.5) >> 1;
    lVar2 = -lVar1;
    if (0.0 <= param_1 / param_2) {
      lVar2 = lVar1;
    }
    uVar3 = FUN_144719204();
    uVar5 = (undefined4)uVar3;
    uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  else {
    FUN_1415b7ec4(L"Attempted modulo 0 - returning 0.",3,DAT_14cae6e38);
    lVar2 = 0;
  }
  *param_3 = CONCAT44(uVar6,uVar5);
  return lVar2;
}



// FUNCTION 147b1ffbc FUN_147b1ffbc body=163 status=ok
// SIG undefined FUN_147b1ffbc(void)

void FUN_147b1ffbc(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 in_XMM1 [16];
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
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_20;
  auVar1 = roundsd(in_XMM1,auVar1,0xb);
  *param_3 = local_20 - auVar1._0_8_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20060 FUN_147b20060 body=167 status=ok
// SIG undefined FUN_147b20060(void)

void FUN_147b20060(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_147b20108(&local_28,local_1c);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20108 FUN_147b20108 body=415 status=ok
// SIG undefined FUN_147b20108(void)

longlong * FUN_147b20108(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48 [2];
  float local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = (double)param_2;
  if (-10675199.116730064 <= dVar2) {
    if (dVar2 <= 10675199.116730064) {
      auVar3._0_8_ = dVar2 * 864000000000.0 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      *param_1 = (longlong)auVar3._0_8_;
      goto LAB_147b201d1;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"DaysValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"DaysValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = -0x8000000000000000;
  }
  *param_1 = lVar1;
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147b201d1:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b202a8 FUN_147b202a8 body=167 status=ok
// SIG undefined FUN_147b202a8(void)

void FUN_147b202a8(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_147b20350(&local_28,local_1c);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20350 FUN_147b20350 body=415 status=ok
// SIG undefined FUN_147b20350(void)

longlong * FUN_147b20350(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48 [2];
  float local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = (double)param_2;
  if (-256204778.80152154 <= dVar2) {
    if (dVar2 <= 256204778.80152154) {
      auVar3._0_8_ = dVar2 * 36000000000.0 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      *param_1 = (longlong)auVar3._0_8_;
      goto LAB_147b20419;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"HoursValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"HoursValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = -0x8000000000000000;
  }
  *param_1 = lVar1;
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147b20419:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b204f0 FUN_147b204f0 body=167 status=ok
// SIG undefined FUN_147b204f0(void)

void FUN_147b204f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_147b20598(&local_28,local_1c);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20598 FUN_147b20598 body=415 status=ok
// SIG undefined FUN_147b20598(void)

longlong * FUN_147b20598(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48 [2];
  float local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = (double)param_2;
  if (-922337203685477.6 <= dVar2) {
    if (dVar2 <= 922337203685477.6) {
      auVar3._0_8_ = dVar2 * 10000.0 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      *param_1 = (longlong)auVar3._0_8_;
      goto LAB_147b20661;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"MillisecondsValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"MillisecondsValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = -0x8000000000000000;
  }
  *param_1 = lVar1;
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147b20661:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20738 FUN_147b20738 body=167 status=ok
// SIG undefined FUN_147b20738(void)

void FUN_147b20738(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_147b207e0(&local_28,local_1c);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b207e0 FUN_147b207e0 body=415 status=ok
// SIG undefined FUN_147b207e0(void)

longlong * FUN_147b207e0(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48 [2];
  float local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = (double)param_2;
  if (-15372286728.091293 <= dVar2) {
    if (dVar2 <= 15372286728.091293) {
      auVar3._0_8_ = dVar2 * 600000000.0 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      *param_1 = (longlong)auVar3._0_8_;
      goto LAB_147b208a9;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"MinutesValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"MinutesValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = -0x8000000000000000;
  }
  *param_1 = lVar1;
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147b208a9:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20980 FUN_147b20980 body=167 status=ok
// SIG undefined FUN_147b20980(void)

void FUN_147b20980(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
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
  FUN_147b20a28(&local_28,local_1c);
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20a28 FUN_147b20a28 body=415 status=ok
// SIG undefined FUN_147b20a28(void)

longlong * FUN_147b20a28(longlong *param_1,float param_2)

{
  longlong lVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  longlong local_58;
  ulonglong uStack_50;
  undefined4 local_48 [2];
  float local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  dVar2 = (double)param_2;
  if (-922337203685.4775 <= dVar2) {
    if (dVar2 <= 922337203685.4775) {
      auVar3._0_8_ = dVar2 * 10000000.0 + 0.5;
      auVar3._8_8_ = 0;
      auVar3 = roundpd(auVar3,auVar3,1);
      *param_1 = (longlong)auVar3._0_8_;
      goto LAB_147b20af1;
    }
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"SecondsValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = 0x7fffffffffffffff;
  }
  else {
    local_58 = 0;
    uStack_50 = 0;
    local_48[0] = 2;
    local_38 = (longlong *)0x0;
    local_30 = 0;
    local_40 = param_2;
    FUN_140056680(local_68,L"SecondsValue");
    FUN_140233eec(&local_58,local_68,local_48);
    if (local_68[0] != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
    lVar1 = -0x8000000000000000;
  }
  *param_1 = lVar1;
  FUN_14010f8af(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_147b20af1:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20bc8 FUN_147b20bc8 body=211 status=ok
// SIG undefined FUN_147b20bc8(void)

void FUN_147b20bc8(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
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
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = local_30 * 10000000;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  FUN_14021300e(&local_28,0x7b2,1,1);
  *param_3 = lVar1 + local_28;
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20c9c FUN_147b20c9c body=153 status=ok
// SIG undefined FUN_147b20c9c(void)

void FUN_147b20c9c(undefined8 param_1,longlong param_2,longlong *param_3)

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
  *param_3 = (longlong)local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20d36 FUN_147b20d36 body=177 status=ok
// SIG undefined FUN_147b20d36(void)

void FUN_147b20d36(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double *pdVar3;
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
  dVar1 = pdVar3[2];
  dVar2 = pdVar3[1];
  *param_3 = (int)(longlong)*pdVar3;
  param_3[1] = (int)(longlong)dVar2;
  param_3[2] = (int)(longlong)dVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20de8 FUN_147b20de8 body=149 status=ok
// SIG undefined FUN_147b20de8(void)

void FUN_147b20de8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  uint uStack_24;
  undefined4 uStack_20;
  uint uStack_1c;
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
  *param_3 = local_28;
  param_3[1] = uStack_24 & 0x7fffffff;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c & 0x7fffffff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20e7e FUN_147b20e7e body=170 status=ok
// SIG undefined FUN_147b20e7e(void)

void FUN_147b20e7e(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = ABS(local_28);
  if (ABS(local_28) <= ABS(local_20)) {
    dVar1 = ABS(local_20);
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b20f2a FUN_147b20f2a body=912 status=ok
// SIG undefined FUN_147b20f2a(void)

void FUN_147b20f2a(undefined8 param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  double *pdVar9;
  undefined1 auStack_138 [40];
  double local_110 [3];
  double local_f8 [3];
  double local_e0 [3];
  double local_c8;
  double dStack_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_e0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_e0);
  }
  pdVar9 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_f8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f8);
  }
  pdVar7 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_110);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_110);
  }
  pdVar8 = local_f8;
  if (pdVar7 != (double *)0x0) {
    pdVar8 = pdVar7;
  }
  pdVar7 = local_e0;
  if (pdVar9 != (double *)0x0) {
    pdVar7 = pdVar9;
  }
  pdVar9 = local_110;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar9 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = sin(local_c8 * 0.01745329238474369);
  dVar2 = sin(dStack_c0 * 0.01745329238474369);
  dVar3 = sin(local_b8 * 0.01745329238474369);
  sin(0.0);
  dVar4 = cos(local_c8 * 0.01745329238474369);
  dVar5 = cos(dStack_c0 * 0.01745329238474369);
  dVar6 = cos(local_b8 * 0.01745329238474369);
  cos(0.0);
  *pdVar7 = dVar4 * dVar5;
  pdVar7[1] = dVar2 * dVar4;
  pdVar7[2] = dVar1;
  *pdVar8 = dVar1 * dVar3 * dVar5 - dVar2 * dVar6;
  pdVar8[1] = dVar1 * dVar3 * dVar2 + dVar5 * dVar6;
  pdVar8[2] = -dVar3 * dVar4;
  *pdVar9 = -(dVar1 * dVar6 * dVar5 + dVar2 * dVar3);
  pdVar9[1] = dVar5 * dVar3 - dVar2 * dVar1 * dVar6;
  pdVar9[2] = dVar4 * dVar6;
  if ((local_b0 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b212bc FUN_147b212bc body=507 status=ok
// SIG undefined FUN_147b212bc(void)

void FUN_147b212bc(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  uStack_8c = 0x3ff00000;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_64 = 0x3ff00000;
  uStack_60 = 0;
  uStack_5c = 0x3ff00000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_ac = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_ac);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  local_b0 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar3 = &local_ac;
  if (puVar4 != (undefined4 *)0x0) {
    puVar3 = puVar4;
  }
  puVar2 = &local_a8;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  puVar4 = &local_b0;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar4 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_30;
  local_c8 = local_40;
  uStack_c4 = uStack_3c;
  uStack_c0 = uStack_38;
  uStack_bc = uStack_34;
  FUN_147b214b8(&local_c8,puVar2,puVar3,puVar4);
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b214b8 FUN_147b214b8 body=1047 status=ok
// SIG undefined FUN_147b214b8(void)

void FUN_147b214b8(double *param_1,double *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_168 [32];
  undefined1 *local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  undefined1 local_f8 [16];
  double local_e8;
  undefined1 local_d8 [16];
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  dVar6 = *param_2;
  dVar7 = param_2[1];
  dVar8 = param_2[2];
  dVar1 = param_2[3];
  dVar14 = param_2[3];
  dVar13 = dVar6 * 0.0 - dVar7 * 0.0;
  dVar2 = dVar7 * 1.0 - dVar8 * 0.0;
  dVar4 = dVar8 * 0.0 - dVar6 * 1.0;
  dVar2 = dVar2 + dVar2;
  dVar4 = dVar4 + dVar4;
  dVar13 = dVar13 + dVar13;
  local_c8 = dVar13 * dVar1 + 1.0 + (dVar4 * dVar6 - dVar2 * dVar7);
  dVar5 = (dVar8 * dVar2 - dVar6 * dVar13) + dVar14 * dVar4 + 0.0;
  local_d8._8_4_ = SUB84(dVar5,0);
  local_d8._0_8_ = (dVar13 * dVar7 - dVar4 * dVar8) + dVar1 * dVar2 + 0.0;
  local_d8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  dVar2 = dVar6 * 1.0 - dVar7 * 0.0;
  dVar4 = dVar7 * 0.0 - dVar8 * 1.0;
  dVar5 = dVar8 * 0.0 - dVar6 * 0.0;
  dVar4 = dVar4 + dVar4;
  dVar5 = dVar5 + dVar5;
  dVar2 = dVar2 + dVar2;
  dVar13 = dVar6 * 0.0 - dVar7 * 1.0;
  dVar15 = dVar7 * 0.0 - dVar8 * 0.0;
  dVar16 = dVar8 * 1.0 - dVar6 * 0.0;
  dVar15 = dVar15 + dVar15;
  dVar16 = dVar16 + dVar16;
  dVar13 = dVar13 + dVar13;
  local_e8 = dVar2 * dVar1 + 0.0 + (dVar5 * dVar6 - dVar4 * dVar7);
  dVar3 = (dVar8 * dVar4 - dVar6 * dVar2) + dVar14 * dVar5 + 1.0;
  local_f8._8_4_ = SUB84(dVar3,0);
  local_f8._0_8_ = (dVar2 * dVar7 - dVar5 * dVar8) + dVar1 * dVar4 + 0.0;
  local_f8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_108 = dVar13 * dVar1 + 0.0 + (dVar16 * dVar6 - dVar15 * dVar7);
  dVar14 = (dVar8 * dVar15 - dVar6 * dVar13) + dVar14 * dVar16 + 0.0;
  local_118._8_4_ = SUB84(dVar14,0);
  local_118._0_8_ = (dVar13 * dVar7 - dVar16 * dVar8) + dVar1 * dVar15 + 1.0;
  local_118._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
  local_138 = *param_1;
  uStack_130 = param_1[1];
  local_128 = param_1[2];
  dVar14 = local_128 * local_128 + local_138 * local_138 + uStack_130 * uStack_130;
  if ((dVar14 != 1.0) || (NAN(dVar14))) {
    if (9.99999993922529e-09 <= dVar14) {
      dVar14 = 1.0 / SQRT(dVar14);
      local_128 = local_128 * dVar14;
      uStack_130 = uStack_130 * dVar14;
      local_138 = local_138 * dVar14;
      goto LAB_147b217b9;
    }
    local_128 = DAT_14c8464f0;
    uVar9 = (undefined4)DAT_14c8464e0;
    uVar10 = DAT_14c8464e0._4_4_;
    uVar11 = (undefined4)DAT_14c8464e8;
    uVar12 = DAT_14c8464e8._4_4_;
  }
  else {
    local_128 = param_1[2];
    uVar9 = *(undefined4 *)param_1;
    uVar10 = *(undefined4 *)((longlong)param_1 + 4);
    uVar11 = *(undefined4 *)(param_1 + 1);
    uVar12 = *(undefined4 *)((longlong)param_1 + 0xc);
  }
  local_138 = (double)CONCAT44(uVar10,uVar9);
  uStack_130 = (double)CONCAT44(uVar12,uVar11);
LAB_147b217b9:
  local_148 = local_d8;
  FUN_1402a6d62(&local_c0,&local_138,local_118,local_f8);
  *param_3 = (float)(local_c0 * 57.29577951308232);
  *param_4 = (float)(local_b8 * 57.29577951308232);
  if ((local_b0 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b218d0 FUN_147b218d0 body=227 status=ok
// SIG undefined FUN_147b218d0(void)

void FUN_147b218d0(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined1 auStack_78 [40];
  double local_50 [6];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pdVar5 = local_50;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[2];
  dVar2 = pdVar5[5];
  dVar3 = pdVar5[1];
  dVar4 = pdVar5[4];
  *param_3 = (*pdVar5 + pdVar5[3]) * 0.5;
  param_3[1] = (dVar3 + dVar4) * 0.5;
  param_3[2] = (dVar1 + dVar2) * 0.5;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b219b4 FUN_147b219b4 body=203 status=ok
// SIG undefined FUN_147b219b4(void)

void FUN_147b219b4(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  undefined1 auStack_78 [40];
  double local_50 [6];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pdVar5 = local_50;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar5 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar5[5];
  dVar2 = pdVar5[2];
  dVar3 = pdVar5[4];
  dVar4 = pdVar5[1];
  *param_3 = pdVar5[3] - *pdVar5;
  param_3[1] = dVar3 - dVar4;
  param_3[2] = dVar1 - dVar2;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21a80 FUN_147b21a80 body=201 status=ok
// SIG undefined FUN_147b21a80(void)

void FUN_147b21a80(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  undefined1 auStack_78 [40];
  double local_50 [6];
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  pdVar1 = local_50;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (pdVar1[5] - pdVar1[2]) * (pdVar1[4] - pdVar1[1]) * (pdVar1[3] - *pdVar1);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21b4a FUN_147b21b4a body=201 status=ok
// SIG undefined FUN_147b21b4a(void)

void FUN_147b21b4a(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (local_20 / 864000000000) * 864000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21c14 FUN_147b21c14 body=163 status=ok
// SIG undefined FUN_147b21c14(void)

void FUN_147b21c14(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  uVar1 = FUN_145c31eb8();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21cb8 FUN_147b21cb8 body=163 status=ok
// SIG undefined FUN_147b21cb8(void)

void FUN_147b21cb8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  uVar1 = FUN_14680ee00();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21d5c FUN_147b21d5c body=182 status=ok
// SIG undefined FUN_147b21d5c(void)

void FUN_147b21d5c(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = ((int)(local_20 / 864000000000) + (int)(local_20 >> 0x3f)) -
             (SUB164(SEXT816(local_20) * ZEXT816(0xa2e3ff1de20581e3),0xc) >> 0x1f);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21e14 FUN_147b21e14 body=161 status=ok
// SIG undefined FUN_147b21e14(void)

void FUN_147b21e14(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar1 = -local_20;
  if (-local_20 < 0) {
    lVar1 = local_20;
  }
  *param_3 = lVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b21eb6 FUN_147b21eb6 body=183 status=ok
// SIG undefined FUN_147b21eb6(void)

void FUN_147b21eb6(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_144a76660(&local_68,&local_48);
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



// FUNCTION 147b21f6e FUN_147b21f6e body=205 status=ok
// SIG undefined FUN_147b21f6e(void)

void FUN_147b21f6e(undefined8 param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (uint)((ulonglong)((local_20 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *param_3 = (int)(local_20 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2203c FUN_147b2203c body=163 status=ok
// SIG undefined FUN_147b2203c(void)

void FUN_147b2203c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  uVar1 = FUN_14680ef30();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b220e0 FUN_147b220e0 body=205 status=ok
// SIG undefined FUN_147b220e0(void)

void FUN_147b220e0(undefined8 param_1,longlong param_2,int *param_3)

{
  uint uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (uint)((ulonglong)((local_20 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *param_3 = (int)(local_20 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b221ae FUN_147b221ae body=150 status=ok
// SIG undefined FUN_147b221ae(void)

void FUN_147b221ae(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_28 <= local_20) {
    local_28 = local_20;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22246 FUN_147b22246 body=156 status=ok
// SIG undefined FUN_147b22246(void)

void FUN_147b22246(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_30 <= local_28) {
    local_30 = local_28;
  }
  if (local_30 <= local_20) {
    local_30 = local_20;
  }
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b222e4 FUN_147b222e4 body=221 status=ok
// SIG undefined FUN_147b222e4(void)

void FUN_147b222e4(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1 = SEXT816(local_20 / 10000) * SEXT816(0x20c49ba5e353f7cf);
  *param_3 = (int)(local_20 / 10000) + ((int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f)) * -1000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b223c2 FUN_147b223c2 body=220 status=ok
// SIG undefined FUN_147b223c2(void)

void FUN_147b223c2(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = ((int)local_20 +
             ((int)(SUB168(SEXT816(local_20) * ZEXT816(0xd6bf94d5e57a42bd),8) >> 0x17) -
             ((int)(local_20 / -0x6769800000000000) + (int)(local_20 >> 0x3f))) * -10000000) / 10000
  ;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b224a0 FUN_147b224a0 body=150 status=ok
// SIG undefined FUN_147b224a0(void)

void FUN_147b224a0(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_20 <= local_28) {
    local_28 = local_20;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22538 FUN_147b22538 body=156 status=ok
// SIG undefined FUN_147b22538(void)

void FUN_147b22538(undefined8 param_1,longlong param_2,double *param_3)

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
  if (local_28 <= local_30) {
    local_30 = local_28;
  }
  if (local_20 <= local_30) {
    local_30 = local_20;
  }
  *param_3 = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b225d6 FUN_147b225d6 body=221 status=ok
// SIG undefined FUN_147b225d6(void)

void FUN_147b225d6(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1 = SEXT816(local_20 / 600000000) * ZEXT816(0x8888888888888889);
  *param_3 = (int)(local_20 / 600000000) +
             ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b226b4 FUN_147b226b4 body=221 status=ok
// SIG undefined FUN_147b226b4(void)

void FUN_147b226b4(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  auVar1 = SEXT816(local_20 / 600000000) * ZEXT816(0x8888888888888889);
  *param_3 = (int)(local_20 / 600000000) +
             ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22792 FUN_147b22792 body=163 status=ok
// SIG undefined FUN_147b22792(void)

void FUN_147b22792(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  uVar1 = FUN_1458c553e();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22854 FUN_147b22854 body=394 status=ok
// SIG undefined FUN_147b22854(void)

void FUN_147b22854(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = uStack_58;
  local_98 = local_48;
  uStack_90 = uStack_40;
  local_88 = local_38;
  local_b8 = local_30;
  uStack_b4 = uStack_2c;
  uStack_b0 = uStack_28;
  uStack_ac = uStack_24;
  local_a8 = local_20;
  uVar1 = FUN_1409661f0();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b229e0 FUN_147b229e0 body=394 status=ok
// SIG undefined FUN_147b229e0(void)

void FUN_147b229e0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  local_68 = local_50;
  local_78 = local_60;
  uStack_70 = uStack_58;
  local_98 = local_48;
  uStack_90 = uStack_40;
  local_88 = local_38;
  local_b8 = local_30;
  uStack_b4 = uStack_2c;
  uStack_b0 = uStack_28;
  uStack_ac = uStack_24;
  local_a8 = local_20;
  uVar1 = FUN_14096b4ee();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22b6c FUN_147b22b6c body=309 status=ok
// SIG undefined FUN_147b22b6c(void)

void FUN_147b22b6c(undefined8 param_1,longlong param_2,undefined4 *param_3)

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



// FUNCTION 147b22ca2 FUN_147b22ca2 body=474 status=ok
// SIG undefined FUN_147b22ca2(void)

void FUN_147b22ca2(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = sin(local_a8 * 0.01745329238474369);
  dVar2 = sin(dStack_a0 * 0.01745329238474369);
  dVar3 = sin(local_98 * 0.01745329238474369);
  sin(0.0);
  dVar4 = cos(local_a8 * 0.01745329238474369);
  dVar5 = cos(dStack_a0 * 0.01745329238474369);
  dVar6 = cos(local_98 * 0.01745329238474369);
  cos(0.0);
  *param_3 = dVar1 * dVar3 * dVar5 - dVar2 * dVar6;
  param_3[1] = dVar1 * dVar3 * dVar2 + dVar5 * dVar6;
  param_3[2] = -dVar3 * dVar4;
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22e7e FUN_147b22e7e body=363 status=ok
// SIG undefined FUN_147b22e7e(void)

void FUN_147b22e7e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_98 [36];
  float local_74;
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
  local_74 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar2 = (double)local_74;
  dVar1 = sin(dVar2 * 0.017453292519943295);
  dVar2 = cos(dVar2 * 0.017453292519943295);
  *param_3 = dVar2 * local_70 - local_68 * dVar1;
  param_3[1] = dVar1 * local_70 + local_68 * dVar2;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b22fea FUN_147b22fea body=464 status=ok
// SIG undefined FUN_147b22fea(void)

void FUN_147b22fea(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined ***pppuVar3;
  undefined4 uVar4;
  undefined1 auStack_f8 [40];
  undefined4 local_d0;
  undefined4 local_cc;
  undefined **local_c8 [14];
  longlong local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14109baa4(local_c8);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c8);
  }
  pppuVar3 = local_c8;
  if (*(undefined ****)(param_2 + 0x38) != (undefined ***)0x0) {
    pppuVar3 = *(undefined ****)(param_2 + 0x38);
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
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  uVar1 = local_cc;
  uVar4 = local_d0;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = FUN_1401e2d36(pppuVar3);
  if (lVar2 != 0) {
    uVar4 = FUN_1448c9f94(lVar2,uVar1,uVar4);
  }
  *param_3 = uVar4;
  local_c8[0] = (undefined **)&DAT_14a176f00;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_c8[0] = &PTR_FUN_14a177080;
  FUN_144a78a1a();
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b231bc FUN_147b231bc body=232 status=ok
// SIG undefined FUN_147b231bc(void)

void FUN_147b231bc(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = local_20 / 10000000 - local_20 / -0x6769800000000000;
  auVar1 = SEXT816(lVar2) * ZEXT816(0x8888888888888889);
  *param_3 = (int)lVar2 + ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b232a6 FUN_147b232a6 body=232 status=ok
// SIG undefined FUN_147b232a6(void)

void FUN_147b232a6(undefined8 param_1,longlong param_2,int *param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar2 = local_20 / 10000000 - local_20 / -0x6769800000000000;
  auVar1 = SEXT816(lVar2) * ZEXT816(0x8888888888888889);
  *param_3 = (int)lVar2 + ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23390 FUN_147b23390 body=521 status=ok
// SIG undefined FUN_147b23390(void)

void FUN_147b23390(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [24];
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar4 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_80);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_80);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  local_84 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_84);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_84);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  local_88 = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_88);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  puVar7 = &local_84;
  if (puVar3 != (undefined4 *)0x0) {
    puVar7 = puVar3;
  }
  puVar6 = local_80;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = local_68;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  puVar4 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  local_98 = &local_88;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_98 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b2359a(puVar4,puVar5,puVar6,puVar7);
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2359a FUN_147b2359a body=461 status=ok
// SIG undefined FUN_147b2359a(void)

void FUN_147b2359a(double *param_1,double *param_2,double *param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar5 = *param_2;
  dVar8 = param_2[1];
  dVar1 = param_2[2];
  dVar2 = *param_1 * dVar8 - dVar5 * param_1[1];
  dVar7 = param_1[2] * dVar5 - dVar1 * *param_1;
  dVar6 = param_1[1] * dVar1 - param_1[2] * dVar8;
  dVar3 = dVar2 * param_3[2] + dVar6 * *param_3 + dVar7 * param_3[1];
  dVar4 = dVar3;
  if (1.0 <= dVar3) {
    dVar4 = 1.0;
  }
  dVar4 = acos((double)(-(ulonglong)(dVar3 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar3 < -1.0) & (ulonglong)dVar4));
  *param_4 = (float)(90.0 - dVar4 * 57.29577951308232);
  dVar8 = (dVar5 * dVar7 - dVar6 * dVar8) * param_3[2] +
          (dVar8 * dVar2 - dVar7 * dVar1) * *param_3 + (dVar1 * dVar6 - dVar2 * dVar5) * param_3[1];
  dVar5 = dVar8;
  if (1.0 <= dVar8) {
    dVar5 = 1.0;
  }
  dVar5 = acos((double)(-(ulonglong)(dVar8 < -1.0) & 0xbff0000000000000 |
                       ~-(ulonglong)(dVar8 < -1.0) & (ulonglong)dVar5));
  *param_5 = (float)(90.0 - dVar5 * 57.29577951308232);
  return;
}



// FUNCTION 147b23786 FUN_147b23786 body=204 status=ok
// SIG undefined FUN_147b23786(void)

void FUN_147b23786(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20 % 864000000000;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23854 FUN_147b23854 body=166 status=ok
// SIG undefined FUN_147b23854(void)

void FUN_147b23854(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((double)local_20 / 864000000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b238fc FUN_147b238fc body=166 status=ok
// SIG undefined FUN_147b238fc(void)

void FUN_147b238fc(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((double)local_20 / 36000000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b239a4 FUN_147b239a4 body=166 status=ok
// SIG undefined FUN_147b239a4(void)

void FUN_147b239a4(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((double)local_20 / 10000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23a4c FUN_147b23a4c body=166 status=ok
// SIG undefined FUN_147b23a4c(void)

void FUN_147b23a4c(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((double)local_20 / 600000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23af4 FUN_147b23af4 body=166 status=ok
// SIG undefined FUN_147b23af4(void)

void FUN_147b23af4(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (float)((double)local_20 / 10000000.0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23b9c FUN_147b23b9c body=471 status=ok
// SIG undefined FUN_147b23b9c(void)

void FUN_147b23b9c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auStack_c8 [32];
  double local_a8;
  double dStack_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_a8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = sin(local_a8 * 0.01745329238474369);
  dVar2 = sin(dStack_a0 * 0.01745329238474369);
  dVar3 = sin(local_98 * 0.01745329238474369);
  sin(0.0);
  dVar4 = cos(local_a8 * 0.01745329238474369);
  dVar5 = cos(dStack_a0 * 0.01745329238474369);
  dVar6 = cos(local_98 * 0.01745329238474369);
  cos(0.0);
  *param_3 = -(dVar1 * dVar6 * dVar5 + dVar2 * dVar3);
  param_3[1] = dVar5 * dVar3 - dVar2 * dVar1 * dVar6;
  param_3[2] = dVar4 * dVar6;
  if ((local_90 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23d74 FUN_147b23d74 body=324 status=ok
// SIG undefined FUN_147b23d74(void)

void FUN_147b23d74(undefined8 param_1,longlong param_2,double *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18));
  }
  plVar2 = *(longlong **)(param_2 + 0x38);
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  plVar4 = plVar2;
  if (plVar2 == (longlong *)0x0) {
    plVar4 = local_28;
  }
  iVar1 = (int)plVar4[1];
  if ((longlong)iVar1 < 1) {
    dVar6 = 0.0;
    dVar7 = 0.0;
    dVar9 = 0.0;
  }
  else {
    plVar4 = local_28;
    if (plVar2 != (longlong *)0x0) {
      plVar4 = plVar2;
    }
    lVar3 = *plVar4;
    dVar6 = 0.0;
    lVar5 = 0;
    dVar7 = 0.0;
    dVar8 = 0.0;
    do {
      dVar8 = dVar8 + *(double *)(lVar3 + lVar5);
      dVar7 = dVar7 + *(double *)(lVar3 + 8 + lVar5);
      dVar6 = dVar6 + *(double *)(lVar3 + 0x10 + lVar5);
      lVar5 = lVar5 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar5);
    dVar9 = 1.0 / (double)iVar1;
    dVar6 = dVar6 * dVar9;
    dVar7 = dVar7 * dVar9;
    dVar9 = dVar9 * dVar8;
  }
  *param_3 = dVar9;
  param_3[1] = dVar7;
  param_3[2] = dVar6;
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b23eba FUN_147b23eba body=339 status=ok
// SIG undefined FUN_147b23eba(void)

void FUN_147b23eba(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
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
  puVar2 = *(undefined4 **)(param_2 + 0x38);
  local_40 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
  puVar1 = &local_3c;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = &local_40;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_48 = local_28;
  local_58 = local_38;
  uStack_54 = uStack_34;
  uStack_50 = uStack_30;
  uStack_4c = uStack_2c;
  FUN_147b2400e(&local_58,puVar1,puVar2);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2400e FUN_147b2400e body=336 status=ok
// SIG undefined FUN_147b2400e(void)

void FUN_147b2400e(double *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double _Y;
  double _Y_00;
  double _X;
  float fVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar4 = dVar2 * dVar2 + dVar5 * dVar5 + dVar1 * dVar1;
  if (((dVar4 != 1.0) || (_Y = dVar2, _Y_00 = dVar1, _X = dVar5, NAN(dVar4))) &&
     (_Y = DAT_14c8464f0, _Y_00 = DAT_14c8464e8, _X = DAT_14c8464e0, 9.99999993922529e-09 <= dVar4))
  {
    dVar4 = 1.0 / SQRT(dVar4);
    _Y = dVar2 * dVar4;
    _Y_00 = dVar1 * dVar4;
    _X = dVar5 * dVar4;
  }
  if (((_X != 0.0) || (NAN(_X))) || ((_Y_00 != 0.0 || (NAN(_Y_00))))) {
    dVar5 = atan2(_Y_00,_X);
    fVar3 = (float)(dVar5 * 57.29577951308232);
  }
  else {
    fVar3 = 0.0;
  }
  *param_2 = fVar3;
  dVar5 = SQRT(_X * _X + _Y_00 * _Y_00);
  if (((_Y != 0.0) || (NAN(_Y))) || ((dVar5 != 0.0 || (NAN(dVar5))))) {
    dVar5 = atan2(_Y,dVar5);
    fVar3 = (float)(dVar5 * 57.29577951308232);
  }
  else {
    fVar3 = 0.0;
  }
  *param_3 = fVar3;
  return;
}



// FUNCTION 147b2415e FUN_147b2415e body=163 status=ok
// SIG undefined FUN_147b2415e(void)

void FUN_147b2415e(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  local_20 = local_28;
  uVar1 = FUN_145c31f02();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24208 FUN_147b24208 body=217 status=ok
// SIG undefined FUN_147b24208(void)

void FUN_147b24208(undefined8 param_1,longlong param_2,undefined8 param_3)

{
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
  *(bool *)param_3 = local_1a < local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b242e8 FUN_147b242e8 body=230 status=ok
// SIG undefined FUN_147b242e8(void)

void FUN_147b242e8(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 < local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b243dc FUN_147b243dc body=230 status=ok
// SIG undefined FUN_147b243dc(void)

void FUN_147b243dc(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 < local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b244d0 FUN_147b244d0 body=230 status=ok
// SIG undefined FUN_147b244d0(void)

void FUN_147b244d0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 < local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b245be FUN_147b245be body=217 status=ok
// SIG undefined FUN_147b245be(void)

void FUN_147b245be(undefined8 param_1,longlong param_2,undefined8 param_3)

{
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
  *(bool *)param_3 = local_1a <= local_19;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2469e FUN_147b2469e body=230 status=ok
// SIG undefined FUN_147b2469e(void)

void FUN_147b2469e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 <= local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24792 FUN_147b24792 body=230 status=ok
// SIG undefined FUN_147b24792(void)

void FUN_147b24792(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 <= local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24886 FUN_147b24886 body=230 status=ok
// SIG undefined FUN_147b24886(void)

void FUN_147b24886(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_28 <= local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2496e FUN_147b2496e body=290 status=ok
// SIG undefined FUN_147b2496e(void)

void FUN_147b2496e(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
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
  if ((local_28 != 0.0) || (dVar1 = local_20, NAN(local_28))) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (local_28 * 0.5 + local_20) / local_28;
    auVar2 = roundpd(auVar2,auVar2,1);
    dVar1 = auVar2._0_8_ * local_28;
  }
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24a92 FUN_147b24a92 body=447 status=ok
// SIG undefined FUN_147b24a92(void)

void FUN_147b24a92(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
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
  local_28 = local_2c;
  local_24 = local_30;
  local_20 = local_34;
  local_1c = local_38;
  FUN_1467eda2e(&local_28,&local_48);
  *param_3 = local_48;
  param_3[1] = uStack_44;
  param_3[2] = uStack_40;
  param_3[3] = uStack_3c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24c52 FUN_147b24c52 body=257 status=ok
// SIG undefined FUN_147b24c52(void)

void FUN_147b24c52(undefined8 param_1,longlong param_2)

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
  FUN_1467eda2e(&local_58,&local_28);
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



// FUNCTION 147b24d54 FUN_147b24d54 body=166 status=ok
// SIG undefined FUN_147b24d54(void)

void FUN_147b24d54(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_1467eda2e(&local_48,&local_38);
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



// FUNCTION 147b24dfc FUN_147b24dfc body=317 status=ok
// SIG undefined FUN_147b24dfc(void)

void FUN_147b24dfc(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  dVar3 = ABS(local_20);
  dVar1 = ABS(local_28);
  dVar2 = dVar3;
  if (dVar3 <= dVar1) {
    dVar2 = dVar1;
  }
  dVar4 = 0.0;
  if (1e-08 < dVar2) {
    if (dVar3 <= dVar1) {
      dVar1 = dVar3;
    }
    dVar4 = SQRT((dVar1 / dVar2) * (dVar1 / dVar2) + 1.0) * dVar2;
  }
  *param_3 = dVar4;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b24f4c FUN_147b24f4c body=548 status=ok
// SIG undefined FUN_147b24f4c(void)

void FUN_147b24f4c(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_38 = 0.0;
  FUN_144a49fc8();
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
  if (iVar1 == 0) {
    if (local_30 < local_28) goto LAB_147b25155;
  }
  else if (local_30 <= local_28) {
LAB_147b25155:
    if (local_40 == 0) {
      bVar2 = local_28 < local_38;
    }
    else {
      bVar2 = local_28 <= local_38;
    }
    goto LAB_147b25076;
  }
  bVar2 = false;
LAB_147b25076:
  *(bool *)param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25184 FUN_147b25184 body=541 status=ok
// SIG undefined FUN_147b25184(void)

void FUN_147b25184(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_68 [40];
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = 0;
  FUN_144a83f76();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  if (iVar1 == 0) {
    if (local_30 < local_28) goto LAB_147b25388;
  }
  else if (local_30 <= local_28) {
LAB_147b25388:
    if (local_40 == 0) {
      bVar2 = local_28 < local_38;
    }
    else {
      bVar2 = local_28 <= local_38;
    }
    goto LAB_147b252aa;
  }
  bVar2 = false;
LAB_147b252aa:
  *(bool *)param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b253b4 FUN_147b253b4 body=534 status=ok
// SIG undefined FUN_147b253b4(void)

void FUN_147b253b4(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_58 [36];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_24 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_24);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_24);
  }
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  iVar1 = local_30;
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
  if (iVar1 == 0) {
    if (local_28 < local_24) goto LAB_147b255b3;
  }
  else if (local_28 <= local_24) {
LAB_147b255b3:
    if (local_34 == 0) {
      bVar2 = local_24 < local_2c;
    }
    else {
      bVar2 = local_24 <= local_2c;
    }
    goto LAB_147b254d5;
  }
  bVar2 = false;
LAB_147b254d5:
  *(bool *)param_3 = bVar2;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25674 FUN_147b25674 body=588 status=ok
// SIG undefined FUN_147b25674(void)

void FUN_147b25674(undefined8 param_1,longlong param_2,double *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
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
  pdVar1 = *(double **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_e8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_e8);
  }
  pdVar5 = local_c8;
  if (pdVar1 != (double *)0x0) {
    pdVar5 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar4 = *pdVar5;
  dVar6 = -dVar4;
  dVar7 = -pdVar5[1];
  dVar2 = pdVar5[2] * -1.0;
  dVar3 = pdVar5[3] * 1.0;
  dVar8 = dStack_e0 * dVar6 - local_e8 * dVar7;
  dVar9 = local_d8 * dVar7 - dStack_e0 * dVar2;
  dVar10 = local_e8 * dVar2 - dVar6 * local_d8;
  dVar9 = dVar9 + dVar9;
  dVar10 = dVar10 + dVar10;
  dVar8 = dVar8 + dVar8;
  *param_3 = (dVar8 * dVar7 - dVar10 * dVar2) + dVar3 * dVar9 + local_e8;
  param_3[1] = dVar4 * dVar8 + dVar2 * dVar9 + dVar3 * dVar10 + dStack_e0;
  param_3[2] = dVar3 * dVar8 + local_d8 + (dVar10 * dVar6 - dVar9 * dVar7);
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b258c2 FUN_147b258c2 body=267 status=ok
// SIG undefined FUN_147b258c2(void)

void FUN_147b258c2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8 [12];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  puVar2 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b259ce(local_d8,puVar2);
  puVar2 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_3 = *puVar2;
    puVar2 = puVar2 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b259ce FUN_147b259ce body=572 status=ok
// SIG undefined FUN_147b259ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_147b259ce(double *param_1,double *param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  double *pdVar12;
  uint uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_2 + 8);
  auVar2 = *(undefined1 (*) [16])(param_2 + 10);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_));
  auVar20._8_4_ = (int)lVar14;
  auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_));
  auVar20._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar11 = movmskpd((int)param_1,auVar20);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar22._8_4_ = (int)lVar14;
  auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar22._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar13 = movmskpd(param_3,auVar22);
  if ((uVar13 & 0x3fffffff) == 0 && iVar11 == 0) {
    pdVar12 = (double *)&DAT_14c846480;
    for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
      *param_1 = *pdVar12;
      pdVar12 = pdVar12 + 1;
      param_1 = param_1 + 1;
    }
  }
  else {
    auVar22 = divpd(_DAT_149934d80,auVar1);
    auVar20 = divpd(ZEXT816(0x3ff0000000000000),auVar2);
    dVar15 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar22._0_8_);
    dVar16 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar22._8_8_);
    dVar3 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar20._0_8_);
    dVar10 = *param_2;
    dVar17 = -dVar10;
    dVar18 = -param_2[1];
    dVar5 = param_2[2] * -1.0;
    dVar6 = param_2[3] * 1.0;
    dVar19 = param_2[4] * dVar15;
    dVar21 = param_2[5] * dVar16;
    dVar4 = param_2[6] * dVar3;
    *param_1 = dVar17;
    param_1[1] = dVar18;
    auVar1._8_4_ = SUB84(dVar6,0);
    auVar1._0_8_ = dVar5;
    auVar1._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 2) = auVar1;
    dVar8 = dVar21 * dVar17 - dVar18 * dVar19;
    dVar9 = dVar4 * dVar18 - dVar5 * dVar21;
    dVar7 = dVar19 * dVar5 - dVar17 * dVar4;
    dVar9 = dVar9 + dVar9;
    dVar7 = dVar7 + dVar7;
    dVar8 = dVar8 + dVar8;
    param_1[4] = 0.0 - ((dVar8 * dVar18 - dVar7 * dVar5) + dVar6 * dVar9 + dVar19);
    param_1[5] = 0.0 - (dVar8 * dVar10 + dVar5 * dVar9 + dVar6 * dVar7 + dVar21);
    param_1[6] = 0.0 - (dVar6 * dVar8 + dVar4 + (dVar7 * dVar17 - dVar9 * dVar18));
    param_1[7] = 0.0;
    param_1[8] = dVar15;
    param_1[9] = dVar16;
    param_1[10] = dVar3;
    param_1[0xb] = 0.0;
  }
  return;
}



// FUNCTION 147b25c10 FUN_147b25c10 body=209 status=ok
// SIG undefined FUN_147b25c10(void)

void FUN_147b25c10(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (uint)((ulonglong)((local_20 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *(bool *)param_3 =
       0xb < (int)((int)(local_20 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25ce8 FUN_147b25ce8 body=153 status=ok
// SIG undefined FUN_147b25ce8(void)

void FUN_147b25ce8(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_14680ed5c(local_1c);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25d88 FUN_147b25d88 body=209 status=ok
// SIG undefined FUN_147b25d88(void)

void FUN_147b25d88(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_48 [40];
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (uint)((ulonglong)((local_20 / 36000000000) * 0x2aaaaaab) >> 0x20);
  *(bool *)param_3 =
       (int)((int)(local_20 / 36000000000) + ((uVar1 >> 2) - ((int)uVar1 >> 0x1f)) * -0x18) < 0xc;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25e60 FUN_147b25e60 body=294 status=ok
// SIG undefined FUN_147b25e60(void)

void FUN_147b25e60(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auStack_58 [36];
  float local_34;
  double local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
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
  local_34 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
  pdVar2 = local_30;
  if (pdVar1 != (double *)0x0) {
    pdVar2 = pdVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -(ABS(*pdVar2) <= (double)local_34 && ABS(pdVar2[1]) <= (double)local_34) & 1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b25f8e FUN_147b25f8e body=425 status=ok
// SIG undefined FUN_147b25f8e(void)

void FUN_147b25f8e(undefined8 param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
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
  bVar1 = 0;
  if ((local_48 - local_60 <= local_30) && (bVar1 = 0, local_30 <= local_60 + local_48)) {
    bVar1 = -(local_20 <= local_38 + local_50) & -(local_38 - local_50 <= local_20) &
            -(local_28 <= local_40 + local_58 && local_40 - local_58 <= local_28) & 1;
  }
  *param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2613e FUN_147b2613e body=317 status=ok
// SIG undefined FUN_147b2613e(void)

void FUN_147b2613e(undefined8 param_1,longlong param_2,byte *param_3)

{
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_38;
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
  local_38 = 0;
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
  *param_3 = (local_20 <= local_40 &&
             (local_58 <= local_20 && (local_28 <= local_48 && local_60 <= local_28))) &
             -(local_30 <= local_50 && local_68 <= local_30);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26284 FUN_147b26284 body=445 status=ok
// SIG undefined FUN_147b26284(void)

void FUN_147b26284(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
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
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_b8 = local_a0;
  local_c8 = local_b0;
  uStack_c0 = uStack_a8;
  local_e8 = local_38;
  uStack_e4 = uStack_34;
  uStack_e0 = uStack_30;
  uStack_dc = uStack_2c;
  local_d8 = local_28;
  uVar2 = FUN_1404368c0(&local_e8,puVar3);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2644a FUN_147b2644a body=473 status=ok
// SIG undefined FUN_147b2644a(void)

void FUN_147b2644a(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
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
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined1 local_a0;
  undefined7 uStack_9f;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0x3ff00000;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_54 = 0x3ff00000;
  uStack_50 = 0;
  uStack_4c = 0x3ff00000;
  local_48 = 0x3ff0000000000000;
  uStack_40 = 0;
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
  local_a0 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_d0);
  }
  puVar3 = &local_98;
  if (puVar1 != (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_d8 = CONCAT71(uStack_9f,local_a0);
  local_e8 = local_b0;
  uStack_e4 = uStack_ac;
  uStack_e0 = uStack_a8;
  uStack_dc = uStack_a4;
  local_f8 = local_c0;
  uStack_f4 = uStack_bc;
  uStack_f0 = uStack_b8;
  uStack_ec = uStack_b4;
  local_108 = local_d0;
  uStack_100 = uStack_c8;
  local_128 = local_38;
  uStack_124 = uStack_34;
  uStack_120 = uStack_30;
  uStack_11c = uStack_2c;
  local_118 = local_28;
  uVar2 = FUN_147b26624(&local_128,puVar3);
  *param_3 = uVar2;
  if ((local_20 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26624 FUN_147b26624 body=662 status=ok
// SIG undefined FUN_147b26624(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_147b26624(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  dVar2 = *param_1 - param_2[4];
  dVar3 = param_1[1] - param_2[5];
  dVar7 = param_1[2] - param_2[6];
  auVar1 = *(undefined1 (*) [16])(param_2 + 8);
  dVar11 = param_2[2] * -1.0;
  dVar13 = param_2[3] * 1.0;
  dVar4 = -*param_2;
  dVar6 = -param_2[1];
  dVar14 = dVar2 * dVar11 - dVar4 * dVar7;
  dVar9 = dVar3 * dVar4 - dVar2 * dVar6;
  dVar12 = dVar7 * dVar6 - dVar3 * dVar11;
  dVar12 = dVar12 + dVar12;
  dVar14 = dVar14 + dVar14;
  dVar9 = dVar9 + dVar9;
  auVar10 = divpd(_DAT_149934d80,auVar1);
  auVar8._8_8_ = 0x3ff0000000000000;
  auVar8._0_8_ = param_2[10];
  auVar8 = divpd(ZEXT816(0x3ff0000000000000),auVar8);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar10._0_8_) *
          ((dVar9 * dVar6 - dVar14 * dVar11) + dVar13 * dVar12 + dVar2);
  dVar11 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar10._8_8_) *
           (dVar9 * *param_2 + dVar11 * dVar12 + dVar13 * dVar14 + dVar3);
  dVar4 = (dVar13 * dVar9 + dVar7 + (dVar14 * dVar4 - dVar12 * dVar6)) *
          (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) & auVar8._0_8_);
  dVar12 = dVar4 - (param_3[2] + param_3[5]) * 0.5;
  dVar2 = dVar5 - (*param_3 + param_3[3]) * 0.5;
  dVar14 = param_3[3] + dVar2;
  dVar2 = dVar2 + *param_3;
  *param_3 = dVar2;
  dVar3 = dVar11 - (param_3[1] + param_3[4]) * 0.5;
  dVar6 = param_3[5] + dVar12;
  dVar9 = param_3[4] + dVar3;
  dVar12 = dVar12 + param_3[2];
  dVar3 = dVar3 + param_3[1];
  param_3[1] = dVar3;
  param_3[2] = dVar12;
  param_3[3] = dVar14;
  param_3[4] = dVar9;
  param_3[5] = dVar6;
  *(undefined1 *)(param_3 + 6) = 1;
  return (dVar4 <= dVar6 && (dVar12 <= dVar4 && (dVar11 <= dVar9 && dVar5 <= dVar14))) &
         -(dVar3 <= dVar11) & -(dVar2 <= dVar5);
}



// FUNCTION 147b268c0 FUN_147b268c0 body=190 status=ok
// SIG undefined FUN_147b268c0(void)

void FUN_147b268c0(undefined8 param_1,longlong param_2,byte *param_3)

{
  double *pdVar1;
  undefined1 auStack_48 [32];
  double local_28 [2];
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
  pdVar1 = local_28;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar1 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = -(pdVar1[1] == 0.0) & -(*pdVar1 == 0.0) & 1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26980 FUN_147b26980 body=336 status=ok
// SIG undefined FUN_147b26980(void)

void FUN_147b26980(undefined8 param_1,longlong param_2,double *param_3)

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
  *param_3 = (local_28 - local_20) * local_30 + local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26ad8 FUN_147b26ad8 body=217 status=ok
// SIG undefined FUN_147b26ad8(void)

void FUN_147b26ad8(undefined8 param_1,longlong param_2,undefined8 param_3)

{
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
  *(bool *)param_3 = local_19 < local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26bb8 FUN_147b26bb8 body=230 status=ok
// SIG undefined FUN_147b26bb8(void)

void FUN_147b26bb8(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 < local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26cac FUN_147b26cac body=230 status=ok
// SIG undefined FUN_147b26cac(void)

void FUN_147b26cac(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 < local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26da0 FUN_147b26da0 body=230 status=ok
// SIG undefined FUN_147b26da0(void)

void FUN_147b26da0(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 < local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26e8e FUN_147b26e8e body=217 status=ok
// SIG undefined FUN_147b26e8e(void)

void FUN_147b26e8e(undefined8 param_1,longlong param_2,undefined8 param_3)

{
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
  *(bool *)param_3 = local_19 <= local_1a;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b26f6e FUN_147b26f6e body=230 status=ok
// SIG undefined FUN_147b26f6e(void)

void FUN_147b26f6e(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 <= local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27062 FUN_147b27062 body=230 status=ok
// SIG undefined FUN_147b27062(void)

void FUN_147b27062(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 <= local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27156 FUN_147b27156 body=230 status=ok
// SIG undefined FUN_147b27156(void)

void FUN_147b27156(undefined8 param_1,longlong param_2,undefined8 param_3)

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
  *(bool *)param_3 = local_20 <= local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2723e FUN_147b2723e body=309 status=ok
// SIG undefined FUN_147b2723e(void)

void FUN_147b2723e(undefined8 param_1,longlong param_2,undefined4 *param_3)

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
  FUN_140d2943c(&local_78,&local_60);
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



// FUNCTION 147b273ac FUN_147b273ac body=256 status=ok
// SIG undefined FUN_147b273ac(void)

void FUN_147b273ac(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  FUN_1467ed7ce(&local_58,&local_3c,local_2c);
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b274ae FUN_147b274ae body=297 status=ok
// SIG undefined FUN_147b274ae(void)

void FUN_147b274ae(undefined8 param_1,longlong param_2,float *param_3)

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
  *param_3 = SQRT((local_2c - local_1c) * (local_2c - local_1c) +
                  (local_30 - local_20) * (local_30 - local_20) +
                  (local_34 - local_24) * (local_34 - local_24) +
                  (local_38 - local_28) * (local_38 - local_28));
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b275d8 FUN_147b275d8 body=156 status=ok
// SIG undefined FUN_147b275d8(void)

void FUN_147b275d8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
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
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  uVar1 = FUN_14064fe5c();
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27676 FUN_147b27676 body=162 status=ok
// SIG undefined FUN_147b27676(void)

void FUN_147b27676(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
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
  if (local_28 <= local_24) {
    local_28 = local_24;
  }
  if (local_28 <= local_20) {
    local_28 = local_20;
  }
  if (local_28 <= local_1c) {
    local_28 = local_1c;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2771a FUN_147b2771a body=162 status=ok
// SIG undefined FUN_147b2771a(void)

void FUN_147b2771a(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
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
  if (local_24 <= local_28) {
    local_28 = local_24;
  }
  if (local_20 <= local_28) {
    local_28 = local_20;
  }
  if (local_1c <= local_28) {
    local_28 = local_1c;
  }
  *param_3 = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b277fc FUN_147b277fc body=396 status=ok
// SIG undefined FUN_147b277fc(void)

void FUN_147b277fc(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auStack_68 [44];
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
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
  if (((local_3c <= ABS(local_28 - local_38)) || (local_3c <= ABS(local_24 - local_34))) ||
     (local_3c <= ABS(local_20 - local_30))) {
    bVar1 = false;
  }
  else {
    bVar1 = ABS(local_1c - local_2c) < local_3c;
  }
  *(bool *)param_3 = bVar1;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2798a FUN_147b2798a body=284 status=ok
// SIG undefined FUN_147b2798a(void)

void FUN_147b2798a(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined1 auStack_48 [32];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
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
  if (local_1c <= 0.0) {
    local_1c = 0.0;
  }
  if (1.0 <= local_1c) {
    local_1c = 1.0;
  }
  if (local_20 <= 0.0) {
    local_20 = 0.0;
  }
  if (1.0 <= local_20) {
    local_20 = 1.0;
  }
  if (local_24 <= 0.0) {
    local_24 = 0.0;
  }
  if (1.0 <= local_24) {
    local_24 = 1.0;
  }
  if (local_28 <= 0.0) {
    local_28 = 0.0;
  }
  if (1.0 <= local_28) {
    local_28 = 1.0;
  }
  *param_3 = (int)(local_20 * 255.0) & 0xffU |
             ((int)(local_24 * 255.0) & 0xffU) << 8 |
             ((int)(local_28 * 255.0) & 0xffU) << 0x10 | (int)(local_1c * 255.0) << 0x18;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27aa8 FUN_147b27aa8 body=328 status=ok
// SIG undefined FUN_147b27aa8(void)

void FUN_147b27aa8(undefined8 param_1,longlong param_2,uint *param_3)

{
  undefined1 auStack_78 [40];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  if (local_44 <= 0.0) {
    local_44 = 0.0;
  }
  if (1.0 <= local_44) {
    local_44 = 1.0;
  }
  if (local_48 <= 0.0) {
    local_48 = 0.0;
  }
  if (1.0 <= local_48) {
    local_48 = 1.0;
  }
  if (local_4c <= 0.0) {
    local_4c = 0.0;
  }
  if (1.0 <= local_4c) {
    local_4c = 1.0;
  }
  if (local_50 <= 0.0) {
    local_50 = 0.0;
  }
  if (1.0 <= local_50) {
    local_50 = 1.0;
  }
  *param_3 = (int)(local_48 * 255.0 + 0.5) & 0xffU |
             ((int)(local_4c * 255.0 + 0.5) & 0xffU) << 8 |
             ((int)(local_50 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(local_44 * 255.0 + 0.5) << 0x18
  ;
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27c0e FUN_147b27c0e body=225 status=ok
// SIG undefined FUN_147b27c0e(void)

void FUN_147b27c0e(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28 [4];
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar2 = local_28;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = uStack_30;
  puVar2[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27cf0 FUN_147b27cf0 body=533 status=ok
// SIG undefined FUN_147b27cf0(void)

void FUN_147b27cf0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50 [4];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_54 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_54);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_5c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
  local_60 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  puVar2 = local_50;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_30 = local_54;
  local_2c = local_58;
  local_28 = local_5c;
  local_24 = local_60;
  FUN_1467eda2e(&local_30,&local_40);
  *puVar2 = local_40;
  puVar2[1] = uStack_3c;
  puVar2[2] = uStack_38;
  puVar2[3] = uStack_34;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b27f06 FUN_147b27f06 body=267 status=ok
// SIG undefined FUN_147b27f06(void)

void FUN_147b27f06(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_44);
  }
  puVar3 = local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = puVar1;
  }
  puVar2 = local_44;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467ed66e(&local_30,puVar2);
  *puVar3 = local_30;
  puVar3[1] = uStack_2c;
  puVar3[2] = uStack_28;
  puVar3[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b28012 FUN_147b28012 body=320 status=ok
// SIG undefined FUN_147b28012(void)

void FUN_147b28012(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  undefined1 auStack_58 [36];
  byte local_34 [4];
  undefined4 local_30 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_30);
  }
  puVar4 = *(undefined4 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_34);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_34);
  }
  puVar5 = local_30;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4;
  }
  pbVar6 = local_34;
  if (*(byte **)(param_2 + 0x38) != (byte *)0x0) {
    pbVar6 = *(byte **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = (&DAT_14c758c60)[pbVar6[1]];
  bVar3 = pbVar6[3];
  uVar2 = (&DAT_14c758c60)[*pbVar6];
  *puVar5 = (&DAT_14c758c60)[pbVar6[2]];
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = (float)bVar3 * 0.003921569;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b28154 FUN_147b28154 body=168 status=ok
// SIG undefined FUN_147b28154(void)

void FUN_147b28154(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38 [4];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
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
  puVar1 = local_38;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar1 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467ede48(&local_28);
  *puVar1 = local_28;
  puVar1[1] = uStack_24;
  puVar1[2] = uStack_20;
  puVar1[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b281fe FUN_147b281fe body=507 status=ok
// SIG undefined FUN_147b281fe(void)

void FUN_147b281fe(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
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
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_2c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
  local_30 = 0;
  FUN_144a64e42();
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
  puVar2 = local_28;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *puVar2 = local_2c;
  puVar2[1] = local_30;
  puVar2[2] = local_34;
  puVar2[3] = local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b283fa FUN_147b283fa body=260 status=ok
// SIG undefined FUN_147b283fa(void)

void FUN_147b283fa(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40 [4];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_40);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_40);
  }
  puVar1 = *(undefined4 **)(param_2 + 0x38);
  local_44 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_44);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
  puVar2 = local_40;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1467edf3a(&local_30,local_44);
  *puVar2 = local_30;
  puVar2[1] = uStack_2c;
  puVar2[2] = uStack_28;
  puVar2[3] = uStack_24;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b28500 FUN_147b28500 body=236 status=ok
// SIG undefined FUN_147b28500(void)

void FUN_147b28500(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  undefined4 local_20;
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
  *(undefined4 *)(param_3 + 1) = local_20;
  *param_3 = local_28;
  *(undefined4 *)((longlong)param_3 + 0xc) = local_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b285ee FUN_147b285ee body=164 status=ok
// SIG undefined FUN_147b285ee(void)

void FUN_147b285ee(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_2c;
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
  FUN_142767bc2(&local_48,&local_2c);
  *param_3 = local_2c;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b286e4 FUN_147b286e4 body=449 status=ok
// SIG undefined FUN_147b286e4(void)

void FUN_147b286e4(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined1 auStack_98 [36];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_74 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_74);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (local_70 - local_60) * local_74 + local_60;
  param_3[1] = (local_6c - local_5c) * local_74 + local_5c;
  param_3[2] = (local_68 - local_58) * local_74 + local_58;
  param_3[3] = (local_64 - local_54) * local_74 + local_54;
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b288a6 FUN_147b288a6 body=351 status=ok
// SIG undefined FUN_147b288a6(void)

void FUN_147b288a6(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = local_38;
  uStack_60 = uStack_30;
  local_78 = local_28;
  uStack_74 = uStack_24;
  uStack_70 = uStack_20;
  uStack_6c = uStack_1c;
  FUN_1467edc58(&local_4c,&local_78,&local_68,local_3c);
  *param_3 = local_4c;
  param_3[1] = uStack_48;
  param_3[2] = uStack_44;
  param_3[3] = uStack_40;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b28a0c FUN_147b28a0c body=535 status=ok
// SIG undefined FUN_147b28a0c(void)

void FUN_147b28a0c(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined1 local_b8 [28];
  undefined4 local_9c;
  undefined1 local_98 [40];
  undefined1 local_70 [24];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_70);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_98);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_98);
  }
  puVar6 = *(undefined1 **)(param_2 + 0x38);
  local_9c = 0;
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar8 = &local_9c;
  if (puVar3 != (undefined4 *)0x0) {
    puVar8 = puVar3;
  }
  puVar7 = local_98;
  if (puVar6 != (undefined1 *)0x0) {
    puVar7 = puVar6;
  }
  puVar6 = local_70;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = local_58;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  local_c8 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_c8 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_147b28c24(puVar5,puVar6,puVar7,puVar8);
  *param_3 = uVar4;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b28c24 FUN_147b28c24 body=332 status=ok
// SIG undefined FUN_147b28c24(void)

undefined8
FUN_147b28c24(double *param_1,double *param_2,double *param_3,float *param_4,double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  dVar3 = param_2[2] - param_1[2];
  dVar4 = param_2[1] - param_1[1];
  dVar5 = *param_2 - *param_1;
  dVar2 = dVar3 * param_3[2] + dVar5 * *param_3 + dVar4 * param_3[1];
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    fVar6 = (float)((param_3[3] -
                    (param_1[2] * param_3[2] + *param_1 * *param_3 + param_1[1] * param_3[1])) /
                   dVar2);
    *param_4 = fVar6;
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      dVar7 = (double)fVar6;
      dVar2 = param_1[2];
      dVar1 = param_1[1];
      *param_5 = dVar5 * dVar7 + *param_1;
      param_5[1] = dVar4 * dVar7 + dVar1;
      param_5[2] = dVar3 * dVar7 + dVar2;
      return 1;
    }
  }
  else {
    *param_4 = -1.0;
  }
  param_5[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_5 = DAT_14c8464e0;
  param_5[1] = dVar2;
  return 0;
}



// FUNCTION 147b28d78 FUN_147b28d78 body=671 status=ok
// SIG undefined FUN_147b28d78(void)

void FUN_147b28d78(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_b8 [28];
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined1 local_68 [24];
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_128;
  puVar1 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_50);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  puVar5 = *(undefined1 **)(param_2 + 0x38);
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
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_9c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_9c);
  }
  puVar3 = *(undefined4 **)(param_2 + 0x38);
  *puVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_108 = &local_9c;
  if (puVar3 != (undefined4 *)0x0) {
    local_108 = puVar3;
  }
  puVar6 = local_68;
  if (puVar5 != (undefined1 *)0x0) {
    puVar6 = puVar5;
  }
  puVar5 = local_50;
  if (puVar2 != (undefined1 *)0x0) {
    puVar5 = puVar2;
  }
  local_100 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_100 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_c8 = local_88;
  local_d8 = local_98;
  uStack_d0 = uStack_90;
  local_f8 = local_80;
  uStack_f4 = uStack_7c;
  uStack_f0 = uStack_78;
  uStack_ec = uStack_74;
  local_e8 = local_70;
  uVar4 = FUN_147b29018(puVar5,puVar6);
  *param_3 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29018 FUN_147b29018 body=384 status=ok
// SIG undefined FUN_147b29018(void)

undefined8
FUN_147b29018(double *param_1,double *param_2,double *param_3,double *param_4,float *param_5,
             double *param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  dVar3 = param_2[2] - param_1[2];
  dVar4 = param_2[1] - param_1[1];
  dVar5 = *param_2 - *param_1;
  dVar2 = dVar3 * param_4[2] + dVar5 * *param_4 + dVar4 * param_4[1];
  if ((dVar2 != 0.0) || (NAN(dVar2))) {
    fVar6 = (float)(((param_3[2] - param_1[2]) * param_4[2] +
                    (*param_3 - *param_1) * *param_4 + param_4[1] * (param_3[1] - param_1[1])) /
                   dVar2);
    *param_5 = fVar6;
    if ((0.0 <= fVar6) && (fVar6 <= 1.0)) {
      dVar7 = (double)fVar6;
      dVar2 = param_1[2];
      dVar1 = param_1[1];
      *param_6 = dVar5 * dVar7 + *param_1;
      param_6[1] = dVar4 * dVar7 + dVar1;
      param_6[2] = dVar3 * dVar7 + dVar2;
      return 1;
    }
  }
  else {
    *param_5 = -1.0;
  }
  param_6[2] = DAT_14c8464f0;
  dVar2 = DAT_14c8464e8;
  *param_6 = DAT_14c8464e0;
  param_6[1] = dVar2;
  return 0;
}



// FUNCTION 147b29198 FUN_147b29198 body=235 status=ok
// SIG undefined FUN_147b29198(void)

void FUN_147b29198(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
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
  uVar1 = FUN_147b29284(local_20,local_28);
  *param_3 = uVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29284 FUN_147b29284 body=94 status=ok
// SIG undefined FUN_147b29284(void)

double FUN_147b29284(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 0.0;
  if (param_2 <= 0.0) {
    FUN_1415b7ec4(L"Divide by zero: Log",3,DAT_14cae6e38);
  }
  else {
    dVar1 = log(param_1);
    dVar2 = log(param_2);
    dVar1 = dVar1 / dVar2;
  }
  return dVar1;
}



// FUNCTION 147b292e2 FUN_147b292e2 body=158 status=ok
// SIG undefined FUN_147b292e2(void)

void FUN_147b292e2(undefined8 param_1,longlong param_2,double *param_3)

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
  dVar1 = log(local_20);
  *param_3 = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29382 FUN_147b29382 body=305 status=ok
// SIG undefined FUN_147b29382(void)

void FUN_147b29382(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
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
  local_50 = local_38;
  local_60 = local_48;
  uStack_58 = uStack_40;
  local_68 = local_20;
  local_78 = local_30;
  uStack_74 = uStack_2c;
  uStack_70 = uStack_28;
  uStack_6c = uStack_24;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  *(undefined8 *)(param_3 + 4) = local_20;
  *(undefined8 *)(param_3 + 6) = local_48;
  *(undefined8 *)(param_3 + 8) = uStack_40;
  *(undefined8 *)(param_3 + 10) = local_38;
  *(undefined1 *)(param_3 + 0xc) = 1;
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b294b4 FUN_147b294b4 body=237 status=ok
// SIG undefined FUN_147b294b4(void)

void FUN_147b294b4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  local_48 = local_38;
  uStack_44 = uStack_34;
  uStack_40 = uStack_30;
  uStack_3c = uStack_2c;
  local_58 = local_28;
  uStack_54 = uStack_24;
  uStack_50 = uStack_20;
  uStack_4c = uStack_1c;
  param_3[4] = local_38;
  param_3[5] = uStack_34;
  param_3[6] = uStack_30;
  param_3[7] = uStack_2c;
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  *(undefined1 *)(param_3 + 8) = 1;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b295a2 FUN_147b295a2 body=392 status=ok
// SIG undefined FUN_147b295a2(void)

void FUN_147b295a2(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  float local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
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
  local_60 = local_38;
  local_70 = local_48;
  uStack_68 = uStack_40;
  local_78 = local_20;
  local_88 = local_30;
  uStack_84 = uStack_2c;
  uStack_80 = uStack_28;
  uStack_7c = uStack_24;
  *param_3 = local_30;
  param_3[1] = uStack_2c;
  param_3[2] = uStack_28;
  param_3[3] = uStack_24;
  *(undefined8 *)(param_3 + 4) = local_20;
  *(undefined8 *)(param_3 + 6) = local_48;
  *(undefined8 *)(param_3 + 8) = uStack_40;
  *(undefined8 *)(param_3 + 10) = local_38;
  *(double *)(param_3 + 0xc) = (double)local_4c;
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2972c FUN_147b2972c body=400 status=ok
// SIG undefined FUN_147b2972c(void)

void FUN_147b2972c(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double *pdVar7;
  double *pdVar8;
  undefined1 auStack_b8 [40];
  double local_90 [3];
  double local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_78);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  pdVar8 = *(double **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_90);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_90);
  }
  pdVar7 = local_78;
  if (pdVar8 != (double *)0x0) {
    pdVar7 = pdVar8;
  }
  pdVar8 = local_90;
  if (*(double **)(param_2 + 0x38) != (double *)0x0) {
    pdVar8 = *(double **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  dVar1 = pdVar7[2];
  dVar2 = pdVar8[2];
  dVar3 = *pdVar7;
  dVar4 = pdVar7[1];
  dVar5 = *pdVar8;
  dVar6 = pdVar8[1];
  *param_3 = dVar3 - dVar5;
  param_3[1] = dVar4 - dVar6;
  param_3[2] = dVar1 - dVar2;
  param_3[3] = dVar3 + dVar5;
  param_3[4] = dVar4 + dVar6;
  param_3[5] = dVar1 + dVar2;
  *(undefined1 *)(param_3 + 6) = 1;
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b298be FUN_147b298be body=423 status=ok
// SIG undefined FUN_147b298be(void)

void FUN_147b298be(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_24;
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_1c;
  param_3[1] = local_20;
  param_3[2] = local_24;
  param_3[3] = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29a66 FUN_147b29a66 body=631 status=ok
// SIG undefined FUN_147b29a66(void)

void FUN_147b29a66(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined8 local_40;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_50 = local_34;
  local_58 = local_30;
  local_60 = local_2c;
  local_68 = local_28;
  FUN_147b29cde(&local_40,local_1c,local_20,local_24);
  *param_3 = local_40;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29cde FUN_147b29cde body=357 status=ok
// SIG undefined FUN_147b29cde(void)

undefined8
FUN_147b29cde(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined2 *puVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = param_8;
  local_80 = param_7;
  local_88 = param_6;
  cVar1 = FUN_1402131c4(param_2,param_3,param_4,param_5);
  if (cVar1 == '\0') {
    local_60 = DAT_14cae6e50;
    local_68 = param_8;
    local_70 = param_7;
    local_78 = param_6;
    local_80 = param_5;
    local_88 = param_4;
    FUN_140002266(&local_58,
                  L"DateTime in bad format (year %d, month %d, day %d, hour %d, minute %d, second %d, millisecond %d). E.g. year, month and day can\'t be zero."
                  ,param_2,param_3);
    puVar2 = local_58;
    if (local_50 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_1415b7ec4(puVar2,3,local_60);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_88 = 0;
    FUN_14021300e(param_1,1,1,1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_a8);
  }
  local_70 = param_8;
  local_78 = param_7;
  local_80 = param_6;
  local_88 = param_5;
  FUN_14021300e(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29e44 FUN_147b29e44 body=255 status=ok
// SIG undefined FUN_147b29e44(void)

void FUN_147b29e44(undefined8 param_1,longlong param_2,ulonglong *param_3)

{
  ulonglong uVar1;
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
  uVar1 = 1;
  if (1 < (int)local_20) {
    uVar1 = (ulonglong)local_20;
  }
  *param_3 = uVar1 << 0x20 | (ulonglong)local_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b29f44 FUN_147b29f44 body=439 status=ok
// SIG undefined FUN_147b29f44(void)

void FUN_147b29f44(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
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
  dVar1 = local_60 * local_60 + local_70 * local_70 + local_68 * local_68;
  if (((dVar1 != 1.0) || (dVar2 = local_70, dVar3 = local_68, dVar4 = local_60, NAN(dVar1))) &&
     (dVar2 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar1)) {
    dVar2 = 1.0 / SQRT(dVar1);
    dVar4 = local_60 * dVar2;
    dVar3 = local_68 * dVar2;
    dVar2 = local_70 * dVar2;
  }
  *param_3 = dVar2;
  param_3[1] = dVar3;
  param_3[2] = dVar4;
  param_3[3] = local_48 * dVar4 + local_58 * dVar2 + local_50 * dVar3;
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147b2a0fc FUN_147b2a0fc body=375 status=ok
// SIG undefined FUN_147b2a0fc(void)

void FUN_147b2a0fc(undefined8 param_1,longlong param_2,float *param_3)

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
  fVar1 = sinf((local_24 + 0.25) * 6.2831855 + local_1c * 6.2831855 * local_20);
  *param_3 = fVar1 * 0.5 + 0.5;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a274 FUN_147b2a274 body=379 status=ok
// SIG undefined FUN_147b2a274(void)

void FUN_147b2a274(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  float fVar1;
  undefined1 auStack_58 [44];
  float local_2c;
  undefined8 local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_28 = 0x10000ea60;
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
  fVar1 = local_2c;
  if (0.99999994 <= local_2c) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = fVar1 + 0.5 + -0.5;
  if (0.99999994 <= fVar1) {
    fVar1 = 0.99999994;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *param_3 = local_1c;
  param_3[1] = fVar1;
  *(undefined8 *)(param_3 + 2) = local_28;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a3f0 FUN_147b2a3f0 body=423 status=ok
// SIG undefined FUN_147b2a3f0(void)

void FUN_147b2a3f0(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_48 [32];
  float local_28;
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
  local_28 = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = (double)local_1c;
  param_3[1] = (double)local_20;
  param_3[2] = (double)local_24;
  param_3[3] = (double)local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a598 FUN_147b2a598 body=159 status=ok
// SIG undefined FUN_147b2a598(void)

void FUN_147b2a598(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  *param_3 = CONCAT44(local_1c,local_1c);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a638 FUN_147b2a638 body=470 status=ok
// SIG undefined FUN_147b2a638(void)

void FUN_147b2a638(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_198 [32];
  undefined8 local_178 [12];
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
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_198;
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
  puVar1 = &local_b8;
  if (puVar3 != (undefined8 *)0x0) {
    puVar1 = puVar3;
  }
  puVar3 = &local_118;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_1449437a2(puVar1,local_178,puVar3);
  puVar3 = local_178;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_50 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a810 FUN_147b2a810 body=404 status=ok
// SIG undefined FUN_147b2a810(void)

void FUN_147b2a810(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
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
  local_98 = local_60;
  uStack_90 = uStack_58;
  local_88 = local_50;
  local_b8 = local_48;
  uStack_b0 = uStack_40;
  local_a8 = local_38;
  local_d8 = local_30;
  uStack_d4 = uStack_2c;
  uStack_d0 = uStack_28;
  uStack_cc = uStack_24;
  local_c8 = local_20;
  FUN_147b2a9a6(&local_78);
  *(undefined8 *)(param_3 + 4) = local_68;
  *param_3 = local_78;
  param_3[1] = uStack_74;
  param_3[2] = uStack_70;
  param_3[3] = uStack_6c;
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2a9a6 FUN_147b2a9a6 body=547 status=ok
// SIG undefined FUN_147b2a9a6(void)

undefined8 FUN_147b2a9a6(undefined8 param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auStack_d8 [32];
  double local_b8;
  double local_b0;
  double local_a8;
  undefined8 local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  double local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar4 = *param_2;
  dVar1 = param_2[1];
  dVar2 = param_2[2];
  dVar3 = dVar2 * dVar2 + dVar4 * dVar4 + dVar1 * dVar1;
  if (9.99999993922529e-09 < dVar3) {
    dVar3 = 1.0 / SQRT(dVar3);
    *param_2 = dVar4 * dVar3;
    param_2[1] = dVar1 * dVar3;
    param_2[2] = dVar2 * dVar3;
  }
  local_98 = *param_3;
  local_90 = param_3[1];
  local_88 = param_3[2];
  dVar4 = local_88 * local_88 + local_98 * local_98 + local_90 * local_90;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    local_98 = local_98 * dVar4;
    *param_3 = local_98;
    local_90 = local_90 * dVar4;
    param_3[1] = local_90;
    local_88 = local_88 * dVar4;
    param_3[2] = local_88;
  }
  local_78 = *param_4;
  local_70 = param_4[1];
  local_68 = param_4[2];
  dVar4 = local_68 * local_68 + local_78 * local_78 + local_70 * local_70;
  if (9.99999993922529e-09 < dVar4) {
    dVar4 = 1.0 / SQRT(dVar4);
    local_78 = local_78 * dVar4;
    *param_4 = local_78;
    local_70 = local_70 * dVar4;
    param_4[1] = local_70;
    local_68 = local_68 * dVar4;
    param_4[2] = local_68;
    local_98 = *param_3;
    local_90 = param_3[1];
    local_88 = param_3[2];
  }
  local_b8 = *param_2;
  local_b0 = param_2[1];
  local_a8 = param_2[2];
  local_a0 = 0;
  local_80 = 0;
  local_60 = 0;
  local_58 = DAT_14c8464e0;
  uStack_50 = DAT_14c8464e8;
  local_48 = DAT_14c8464f0;
  local_40 = 0x3ff0000000000000;
  FUN_144a90b9e(&local_b8,param_1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2abca FUN_147b2abca body=216 status=ok
// SIG undefined FUN_147b2abca(void)

void FUN_147b2abca(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar1 = local_c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_144a90df0(local_a8,puVar1);
  FUN_144a90b9e(local_a8,&local_d8);
  *(undefined8 *)(param_3 + 4) = local_c8;
  *param_3 = local_d8;
  param_3[1] = uStack_d4;
  param_3[2] = uStack_d0;
  param_3[3] = uStack_cc;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2aca4 FUN_147b2aca4 body=297 status=ok
// SIG undefined FUN_147b2aca4(void)

void FUN_147b2aca4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147298f40(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2adce FUN_147b2adce body=311 status=ok
// SIG undefined FUN_147b2adce(void)

void FUN_147b2adce(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_14099e850(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2af06 FUN_147b2af06 body=209 status=ok
// SIG undefined FUN_147b2af06(void)

void FUN_147b2af06(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar1 = local_c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b4cd32(local_a8,puVar1);
  FUN_144a90b9e(local_a8,&local_d8);
  *(undefined8 *)(param_3 + 4) = local_c8;
  *param_3 = local_d8;
  param_3[1] = uStack_d4;
  param_3[2] = uStack_d0;
  param_3[3] = uStack_cc;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2afd8 FUN_147b2afd8 body=297 status=ok
// SIG undefined FUN_147b2afd8(void)

void FUN_147b2afd8(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b4cf9a(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b102 FUN_147b2b102 body=297 status=ok
// SIG undefined FUN_147b2b102(void)

void FUN_147b2b102(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b4d2d0(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b22c FUN_147b2b22c body=216 status=ok
// SIG undefined FUN_147b2b22c(void)

void FUN_147b2b22c(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined1 local_c0 [24];
  undefined1 local_a8 [136];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar1 = local_c0;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140d92ea8(local_a8,puVar1);
  FUN_144a90b9e(local_a8,&local_d8);
  *(undefined8 *)(param_3 + 4) = local_c8;
  *param_3 = local_d8;
  param_3[1] = uStack_d4;
  param_3[2] = uStack_d0;
  param_3[3] = uStack_cc;
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b306 FUN_147b2b306 body=297 status=ok
// SIG undefined FUN_147b2b306(void)

void FUN_147b2b306(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b4850a(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b430 FUN_147b2b430 body=297 status=ok
// SIG undefined FUN_147b2b430(void)

void FUN_147b2b430(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined1 local_d8 [24];
  undefined1 local_c0 [24];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_c0);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_c0);
  }
  puVar2 = *(undefined1 **)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_d8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_d8);
  }
  puVar1 = local_c0;
  if (puVar2 != (undefined1 *)0x0) {
    puVar1 = puVar2;
  }
  puVar2 = local_d8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_147b4d606(local_a8,puVar1,puVar2);
  FUN_144a90b9e(local_a8,&local_f0);
  *(undefined8 *)(param_3 + 4) = local_e0;
  *param_3 = local_f0;
  param_3[1] = uStack_ec;
  param_3[2] = uStack_e8;
  param_3[3] = uStack_e4;
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b55a FUN_147b2b55a body=510 status=ok
// SIG undefined FUN_147b2b55a(void)

void FUN_147b2b55a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  int local_40;
  undefined8 local_38;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_40 = local_2c * 1000000;
  local_48 = local_28;
  FUN_1458c54da(&local_38,local_1c,local_20,local_24);
  *param_3 = local_38;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b75a FUN_147b2b75a body=506 status=ok
// SIG undefined FUN_147b2b75a(void)

void FUN_147b2b75a(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
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
  local_28 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  local_40 = local_2c;
  local_48 = local_28;
  FUN_1458c54da(&local_38,local_1c,local_20,local_24);
  *param_3 = local_38;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2b956 FUN_147b2b956 body=241 status=ok
// SIG undefined FUN_147b2b956(void)

void FUN_147b2b956(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
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
  *param_3 = local_20;
  param_3[1] = local_28;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2ba48 FUN_147b2ba48 body=427 status=ok
// SIG undefined FUN_147b2ba48(void)

void FUN_147b2ba48(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
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
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  param_3[3] = local_38;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2bbf4 FUN_147b2bbf4 body=338 status=ok
// SIG undefined FUN_147b2bbf4(void)

void FUN_147b2bbf4(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2bd48 FUN_147b2bd48 body=338 status=ok
// SIG undefined FUN_147b2bd48(void)

void FUN_147b2bd48(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2be9c FUN_147b2be9c body=338 status=ok
// SIG undefined FUN_147b2be9c(void)

void FUN_147b2be9c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2bff0 FUN_147b2bff0 body=338 status=ok
// SIG undefined FUN_147b2bff0(void)

void FUN_147b2bff0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  local_28 = 0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_30 = 0;
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
  *param_3 = local_20;
  param_3[1] = local_28;
  param_3[2] = local_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c144 FUN_147b2c144 body=589 status=ok
// SIG undefined FUN_147b2c144(void)

void FUN_147b2c144(undefined8 param_1,longlong param_2,double *param_3)

{
  double dVar1;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0.0;
  FUN_144a49fc8();
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
  local_60 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68 = 0.0;
  FUN_144a49fc8();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if (ABS(local_58 - local_50) <= 1e-08) {
    dVar1 = (double)(-(ulonglong)(local_58 <= local_48) & 0x3ff0000000000000);
  }
  else {
    dVar1 = (local_48 - local_50) / (local_58 - local_50);
  }
  *param_3 = (local_68 - local_60) * dVar1 + local_60;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c392 FUN_147b2c392 body=352 status=ok
// SIG undefined FUN_147b2c392(void)

void FUN_147b2c392(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_1d8 [44];
  float local_1ac;
  undefined8 local_1a8 [16];
  undefined1 local_128 [128];
  double local_a8 [6];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_128);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_128);
  }
  puVar1 = *(undefined1 **)(param_2 + 0x38);
  local_1ac = 0.0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1ac);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1ac);
  }
  puVar4 = local_128;
  if (puVar1 != (undefined1 *)0x0) {
    puVar4 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_a8[0] = (double)local_1ac;
  local_a8[1] = 0.0;
  local_a8[2] = 0.0;
  local_a8[3] = 0.0;
  local_a8[4] = 0.0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0x3ff0000000000000;
  local_a8[5] = local_a8[0];
  local_58 = local_a8[0];
  FUN_1447fea8d(local_1a8,local_a8,puVar4);
  puVar3 = local_1a8;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *param_3 = *puVar3;
    puVar3 = puVar3 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c4f4 FUN_147b2c4f4 body=418 status=ok
// SIG undefined FUN_147b2c4f4(void)

void FUN_147b2c4f4(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 *puVar19;
  undefined1 auStack_128 [40];
  double local_100;
  double local_f8;
  double local_f0;
  undefined4 local_e8 [34];
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
  puVar5 = *(undefined4 **)(param_2 + 0x38);
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_100);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_100);
  }
  puVar19 = local_e8;
  if (puVar5 != (undefined4 *)0x0) {
    puVar19 = puVar5;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = puVar19[1];
  uVar7 = puVar19[2];
  uVar8 = puVar19[3];
  uVar9 = *(undefined8 *)(puVar19 + 4);
  uVar10 = *(undefined8 *)(puVar19 + 6);
  uVar11 = *(undefined8 *)(puVar19 + 8);
  uVar12 = *(undefined8 *)(puVar19 + 10);
  uVar13 = *(undefined8 *)(puVar19 + 0xc);
  uVar14 = *(undefined8 *)(puVar19 + 0xe);
  uVar15 = *(undefined8 *)(puVar19 + 0x10);
  uVar16 = *(undefined8 *)(puVar19 + 0x12);
  dVar1 = *(double *)(puVar19 + 0x18);
  dVar2 = *(double *)(puVar19 + 0x1a);
  dVar3 = *(double *)(puVar19 + 0x1c);
  uVar17 = *(undefined8 *)(puVar19 + 0x14);
  uVar18 = *(undefined8 *)(puVar19 + 0x16);
  uVar4 = *(undefined8 *)(puVar19 + 0x1e);
  *param_3 = *puVar19;
  param_3[1] = uVar6;
  param_3[2] = uVar7;
  param_3[3] = uVar8;
  *(undefined8 *)(param_3 + 4) = uVar9;
  *(undefined8 *)(param_3 + 6) = uVar10;
  *(undefined8 *)(param_3 + 8) = uVar11;
  *(undefined8 *)(param_3 + 10) = uVar12;
  *(undefined8 *)(param_3 + 0xc) = uVar13;
  *(undefined8 *)(param_3 + 0xe) = uVar14;
  *(undefined8 *)(param_3 + 0x10) = uVar15;
  *(undefined8 *)(param_3 + 0x12) = uVar16;
  *(undefined8 *)(param_3 + 0x14) = uVar17;
  *(undefined8 *)(param_3 + 0x16) = uVar18;
  *(double *)(param_3 + 0x18) = local_100 + dVar1;
  *(double *)(param_3 + 0x1a) = local_f8 + dVar2;
  *(double *)(param_3 + 0x1c) = local_f0 + dVar3;
  *(undefined8 *)(param_3 + 0x1e) = uVar4;
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147b2c6a0 FUN_147b2c6a0 body=255 status=ok
// SIG undefined FUN_147b2c6a0(void)

void FUN_147b2c6a0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_b8);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  puVar2 = local_b8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  bVar5 = true;
  uVar4 = 0;
  do {
    lVar3 = 0;
    do {
      iVar1 = _finite(*(double *)(puVar2 + lVar3 * 8));
      if (iVar1 == 0) goto LAB_147b2c74a;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 4);
    bVar5 = uVar4 < 3;
    uVar4 = uVar4 + 1;
    puVar2 = puVar2 + 0x20;
  } while (uVar4 != 4);
LAB_147b2c74a:
  *param_3 = bVar5;
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


