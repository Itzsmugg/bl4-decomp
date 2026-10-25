// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 149229244 FUN_149229244 body=201 status=ok
// SIG undefined FUN_149229244(void)

void FUN_149229244(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238 [480];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_238);
  FUN_1490d751a(local_238);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 0x18);
  local_48 = *(undefined4 *)(param_1 + 0x20);
  uStack_44 = *(undefined4 *)(param_1 + 0x24);
  uStack_40 = *(undefined4 *)(param_1 + 0x28);
  uStack_3c = *(undefined4 *)(param_1 + 0x2c);
  FUN_1448052ee(&local_58,&local_38);
  *(undefined8 *)(param_1 + 0x98) = local_28;
  *(undefined8 *)(param_1 + 0x88) = local_38;
  *(undefined8 *)(param_1 + 0x90) = uStack_30;
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x60);
  FUN_140f8ccfc(local_238);
  if ((local_20 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922930e FUN_14922930e body=126 status=ok
// SIG undefined FUN_14922930e(void)

void FUN_14922930e(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined4 **)*param_2;
  puVar4 = (undefined4 *)((longlong *)*param_2)[4];
  FUN_144a7484c(puVar3 + 6,&local_48);
  uVar5 = *puVar3;
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  uVar1 = *(undefined8 *)(puVar3 + 4);
  uVar9 = *(undefined8 *)(puVar3 + 0xc);
  uVar10 = *(undefined8 *)(puVar3 + 0xe);
  uVar2 = *(undefined8 *)(puVar3 + 0x10);
  *puVar4 = local_48;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  puVar4[4] = local_38;
  puVar4[5] = uStack_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  puVar4[8] = uVar5;
  puVar4[9] = uVar6;
  puVar4[10] = uVar7;
  puVar4[0xb] = uVar8;
  *(undefined8 *)(puVar4 + 0xc) = uVar1;
  *(undefined8 *)(puVar4 + 0xe) = 0;
  *(undefined8 *)(puVar4 + 0x10) = uVar9;
  *(undefined8 *)(puVar4 + 0x12) = uVar10;
  *(undefined8 *)(puVar4 + 0x14) = uVar2;
  *(undefined8 *)(puVar4 + 0x16) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922938e FUN_14922938e body=174 status=ok
// SIG undefined FUN_14922938e(void)

void FUN_14922938e(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined1 local_228 [480];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_228);
  FUN_1490d751a(local_228);
  FUN_144a7484c(param_1 + 0x20,&local_48);
  *(undefined4 *)(param_1 + 0x50) = local_48;
  *(undefined4 *)(param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0x58) = uStack_40;
  *(undefined4 *)(param_1 + 0x5c) = uStack_3c;
  *(undefined4 *)(param_1 + 0x60) = local_38;
  *(undefined4 *)(param_1 + 100) = uStack_34;
  *(undefined4 *)(param_1 + 0x68) = uStack_30;
  *(undefined4 *)(param_1 + 0x6c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0xa8) = 0;
  FUN_140f8ccfc(local_228);
  if ((local_20 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922943e FUN_14922943e body=87 status=ok
// SIG undefined FUN_14922943e(void)

void FUN_14922943e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
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
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_144a7484c(*(undefined8 *)*param_2,&local_38);
  puVar1[4] = local_28;
  puVar1[5] = uStack_24;
  puVar1[6] = uStack_20;
  puVar1[7] = uStack_1c;
  *puVar1 = local_38;
  puVar1[1] = uStack_34;
  puVar1[2] = uStack_30;
  puVar1[3] = uStack_2c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229496 FUN_149229496 body=131 status=ok
// SIG undefined FUN_149229496(void)

void FUN_149229496(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined1 local_228 [480];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_228);
  FUN_1490d751a(local_228);
  FUN_144a7484c(param_1 + 8,&local_48);
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  *(undefined4 *)(param_1 + 0x20) = local_48;
  *(undefined4 *)(param_1 + 0x24) = uStack_44;
  *(undefined4 *)(param_1 + 0x28) = uStack_40;
  *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
  FUN_140f8ccfc(local_228);
  if ((local_20 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922951a FUN_14922951a body=87 status=ok
// SIG undefined FUN_14922951a(void)

void FUN_14922951a(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_1448052ee(*(undefined8 *)*param_2,&local_30);
  *(undefined8 *)(puVar1 + 4) = local_20;
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229572 FUN_149229572 body=131 status=ok
// SIG undefined FUN_149229572(void)

void FUN_149229572(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [480];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_218);
  FUN_1490d751a(local_218);
  FUN_1448052ee(param_1 + 0x10,&local_38);
  *(undefined8 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x30) = local_38;
  *(undefined4 *)(param_1 + 0x34) = uStack_34;
  *(undefined4 *)(param_1 + 0x38) = uStack_30;
  *(undefined4 *)(param_1 + 0x3c) = uStack_2c;
  FUN_140f8ccfc(local_218);
  if ((local_20 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492295f6 FUN_1492295f6 body=87 status=ok
// SIG undefined FUN_1492295f6(void)

void FUN_1492295f6(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  FUN_144a79a9c(*(undefined8 *)*param_2,&local_30);
  *(undefined8 *)(puVar1 + 4) = local_20;
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922964e FUN_14922964e body=131 status=ok
// SIG undefined FUN_14922964e(void)

void FUN_14922964e(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218 [480];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_218);
  FUN_1490d751a(local_218);
  FUN_144a79a9c(param_1 + 8,&local_38);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  *(undefined4 *)(param_1 + 0x20) = local_38;
  *(undefined4 *)(param_1 + 0x24) = uStack_34;
  *(undefined4 *)(param_1 + 0x28) = uStack_30;
  *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
  FUN_140f8ccfc(local_218);
  if ((local_20 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492296d2 FUN_1492296d2 body=205 status=ok
// SIG undefined FUN_1492296d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492296d2(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulonglong uVar6;
  double dVar7;
  double dVar10;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar11 [16];
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  double local_48;
  double dStack_40;
  double local_38;
  double dStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  pdVar1 = (double *)((undefined8 *)*param_2)[4];
  FUN_144a79a9c(*(undefined8 *)*param_2,local_60);
  FUN_144a7484c(local_60,&local_48);
  pdVar1[2] = local_38;
  pdVar1[3] = dStack_30;
  *pdVar1 = local_48;
  pdVar1[1] = dStack_40;
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  dVar4 = pdVar1[2];
  dVar5 = pdVar1[3];
  dVar7 = dVar4 * dVar4 + dVar2 * dVar2;
  dVar10 = dVar5 * dVar5 + dVar3 * dVar3;
  auVar8._0_8_ = dVar7 + dVar10;
  auVar8._8_8_ = dVar7 + dVar10;
  uVar6 = -(ulonglong)(9.99999993922529e-09 <= auVar8._8_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(_DAT_149934d80,auVar9);
  auVar11._0_8_ = auVar9._0_8_ * dVar4;
  auVar11._8_8_ = auVar9._8_8_ * dVar5;
  *pdVar1 = (double)((ulonglong)(dVar2 * auVar9._0_8_) &
                    -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_));
  pdVar1[1] = (double)((ulonglong)(dVar3 * auVar9._8_8_) & uVar6);
  auVar9._8_4_ = (int)uVar6;
  auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar8._0_8_);
  auVar9._12_4_ = (int)(uVar6 >> 0x20);
  auVar9 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar11,auVar9);
  *(undefined1 (*) [16])(pdVar1 + 2) = auVar9;
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492297a0 FUN_1492297a0 body=258 status=ok
// SIG undefined FUN_1492297a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492297a0(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auStack_268 [32];
  undefined1 local_248 [488];
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_268;
  FUN_1412ca278(local_248);
  FUN_1490d751a(local_248);
  FUN_144a79a9c(param_1 + 8,local_60);
  FUN_144a7484c(local_60,&local_48);
  *(undefined8 *)(param_1 + 0x30) = local_38;
  *(undefined8 *)(param_1 + 0x38) = uStack_30;
  *(undefined8 *)(param_1 + 0x20) = local_48;
  *(undefined8 *)(param_1 + 0x28) = uStack_40;
  dVar1 = *(double *)(param_1 + 0x20);
  dVar2 = *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 0x30);
  dVar4 = *(double *)(param_1 + 0x38);
  dVar6 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar9 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar7._0_8_ = dVar6 + dVar9;
  auVar7._8_8_ = dVar6 + dVar9;
  uVar5 = -(ulonglong)(9.99999993922529e-09 <= auVar7._8_8_);
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar8 = divpd(_DAT_149934d80,auVar8);
  auVar10._0_8_ = auVar8._0_8_ * dVar3;
  auVar10._8_8_ = auVar8._8_8_ * dVar4;
  *(ulonglong *)(param_1 + 0x20) =
       (ulonglong)(dVar1 * auVar8._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  *(ulonglong *)(param_1 + 0x28) = (ulonglong)(dVar2 * auVar8._8_8_) & uVar5;
  auVar8._8_4_ = (int)uVar5;
  auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar7._0_8_);
  auVar8._12_4_ = (int)(uVar5 >> 0x20);
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar10,auVar8);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar8;
  FUN_140f8ccfc(local_248);
  if ((local_28 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492298a4 FUN_1492298a4 body=113 status=ok
// SIG undefined FUN_1492298a4(void)

void FUN_1492298a4(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = (undefined4 *)((undefined8 *)*param_2)[4];
  local_48 = 0x3ff0000000000000;
  local_40 = 0;
  uStack_38 = 0;
  FUN_1401c9a0e(*(undefined8 *)*param_2,&local_30);
  *(undefined8 *)(puVar1 + 4) = local_20;
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229916 FUN_149229916 body=160 status=ok
// SIG undefined FUN_149229916(void)

void FUN_149229916(longlong param_1)

{
  undefined1 auStack_258 [32];
  undefined1 local_238 [488];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_238);
  FUN_1490d751a(local_238);
  local_50 = 0x3ff0000000000000;
  local_48 = 0;
  uStack_40 = 0;
  FUN_1401c9a0e(param_1 + 8,&local_38);
  *(undefined8 *)(param_1 + 0x30) = local_28;
  *(undefined4 *)(param_1 + 0x20) = local_38;
  *(undefined4 *)(param_1 + 0x24) = uStack_34;
  *(undefined4 *)(param_1 + 0x28) = uStack_30;
  *(undefined4 *)(param_1 + 0x2c) = uStack_2c;
  FUN_140f8ccfc(local_238);
  if ((local_20 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492299c8 FUN_1492299c8 body=110 status=ok
// SIG undefined FUN_1492299c8(void)

void FUN_1492299c8(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149229a38(param_1 + 0x10,param_1 + 0x30);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229a38 FUN_149229a38 body=242 status=ok
// SIG undefined FUN_149229a38(void)

void FUN_149229a38(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar1 = param_1[2];
  dVar2 = *param_1;
  dVar3 = param_1[1];
  dVar5 = dVar1 - dVar2 * 0.0;
  dVar6 = dVar2 * 0.0 - dVar3;
  dVar7 = dVar3 * 0.0 + dVar1 * -0.0;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar7 = dVar7 + dVar7;
  dVar4 = param_1[3];
  *param_2 = (dVar3 * dVar6 - dVar5 * dVar1) + dVar7 * dVar4 + 1.0;
  param_2[1] = (dVar1 * dVar7 - dVar6 * dVar2) + dVar4 * dVar5 + 0.0;
  param_2[2] = (dVar2 * dVar5 - dVar7 * dVar3) + dVar4 * dVar6 + 0.0;
  return;
}



// FUNCTION 149229b70 FUN_149229b70 body=167 status=ok
// SIG undefined FUN_149229b70(void)

void FUN_149229b70(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  if ((*(double *)(param_1 + 0x30) == 0.0) && (!NAN(*(double *)(param_1 + 0x30)))) {
    if ((*(double *)(param_1 + 0x38) == 0.0) && (!NAN(*(double *)(param_1 + 0x38)))) {
      if ((*(double *)(param_1 + 0x40) == 0.0) && (!NAN(*(double *)(param_1 + 0x40))))
      goto LAB_149229bea;
    }
  }
  FUN_144afe582(param_1 + 0x10,param_1 + 0x30,param_1 + 0x50,param_1 + 0x70);
LAB_149229bea:
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229c18 FUN_149229c18 body=233 status=ok
// SIG undefined FUN_149229c18(void)

undefined8 FUN_149229c18(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  longlong local_108 [2];
  longlong local_f8 [2];
  undefined **local_e8 [2];
  undefined8 local_d8 [12];
  undefined8 local_78 [11];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e8[0] = &PTR_FUN_14bb23a40;
  puVar2 = &DAT_14c964b40;
  puVar3 = local_78;
  for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_d8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_149229d02(param_2,local_e8);
  FUN_140056680(local_f8,L"Value");
  FUN_140056680(local_108,L"Input");
  local_118 = 1;
  FUN_1490fb142(param_2,local_108,local_f8,1);
  if (local_108[0] != 0) {
    FUN_1400020a8();
  }
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229d02 FUN_149229d02 body=211 status=ok
// SIG undefined FUN_149229d02(void)

undefined8 * FUN_149229d02(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d9916();
  param_1[2] = uVar1;
  uVar1 = FUN_1466aa20c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149229dd6 FUN_149229dd6 body=233 status=ok
// SIG undefined FUN_149229dd6(void)

undefined8 FUN_149229dd6(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined **local_d8;
  undefined8 local_d0 [9];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_d8 = &PTR_FUN_14bb23700;
  puVar2 = &DAT_14c846480;
  puVar3 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = local_d0;
  for (lVar1 = 9; param_1 = param_1 + 1, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    puVar2 = puVar2 + 1;
  }
  FUN_149229ec0(param_2,&local_d8);
  FUN_140056680(local_e8,L"EulerTransform");
  FUN_140056680(local_f8,L"Input");
  local_108 = 1;
  FUN_1490fb142(param_2,local_f8,local_e8,1);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_e8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149229ec0 FUN_149229ec0 body=211 status=ok
// SIG undefined FUN_149229ec0(void)

undefined8 * FUN_149229ec0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d9b0c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a9e10();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149229f94 FUN_149229f94 body=221 status=ok
// SIG undefined FUN_149229f94(void)

undefined8 FUN_149229f94(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = &PTR_FUN_14bb1cb10;
  local_48 = DAT_14c8463d0;
  uStack_40 = DAT_14c8463d8;
  local_38 = DAT_14c8463e0;
  uStack_30 = DAT_14c8463e8;
  local_60 = *(undefined4 *)(param_1 + 8);
  uStack_5c = *(undefined4 *)(param_1 + 0xc);
  uStack_58 = *(undefined4 *)(param_1 + 0x10);
  uStack_54 = *(undefined4 *)(param_1 + 0x14);
  local_50 = *(undefined8 *)(param_1 + 0x18);
  FUN_14922a072(param_2);
  FUN_140056680(local_78,L"Rotator");
  FUN_140056680(local_88,L"Input");
  local_98 = 1;
  FUN_1490fb142(param_2,local_88,local_78,1);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a072 FUN_14922a072 body=211 status=ok
// SIG undefined FUN_14922a072(void)

undefined8 * FUN_14922a072(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d9d02();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a22b0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922a146 FUN_14922a146 body=221 status=ok
// SIG undefined FUN_14922a146(void)

undefined8 FUN_14922a146(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined **local_78;
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
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = &PTR_FUN_14bb1d910;
  local_48 = DAT_14c8464f8;
  uStack_40 = DAT_14c846500;
  local_38 = DAT_14c846508;
  local_68 = *(undefined4 *)(param_1 + 0x10);
  uStack_64 = *(undefined4 *)(param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x2c);
  FUN_14922a224(param_2);
  FUN_140056680(local_88,L"Value");
  FUN_140056680(local_98,L"Input");
  local_a8 = 1;
  FUN_1490fb142(param_2,local_98,local_88,1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a224 FUN_14922a224 body=211 status=ok
// SIG undefined FUN_14922a224(void)

undefined8 * FUN_14922a224(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466d9f8e();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a34f2();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922a2f8 FUN_14922a2f8 body=25 status=ok
// SIG undefined FUN_14922a2f8(void)

undefined8 FUN_14922a2f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922a312 FUN_14922a312 body=25 status=ok
// SIG undefined FUN_14922a312(void)

undefined8 FUN_14922a312(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922a32c FUN_14922a32c body=25 status=ok
// SIG undefined FUN_14922a32c(void)

undefined8 FUN_14922a32c(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922a346 FUN_14922a346 body=25 status=ok
// SIG undefined FUN_14922a346(void)

undefined8 FUN_14922a346(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922a360 FUN_14922a360 body=154 status=ok
// SIG undefined FUN_14922a360(void)

undefined8 FUN_14922a360(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &PTR_FUN_14bb1edb0;
  local_38 = DAT_14c8463d0;
  uStack_30 = DAT_14c8463d8;
  local_28 = DAT_14c8463e0;
  uStack_20 = DAT_14c8463e8;
  local_58 = DAT_14c8463d0;
  uStack_50 = DAT_14c8463d8;
  local_48 = DAT_14c8463e0;
  uStack_40 = DAT_14c8463e8;
  local_98 = *(undefined8 *)(param_1 + 0x10);
  uStack_90 = *(undefined8 *)(param_1 + 0x18);
  local_88 = *(undefined4 *)(param_1 + 0x20);
  uStack_84 = *(undefined4 *)(param_1 + 0x24);
  uStack_80 = *(undefined4 *)(param_1 + 0x28);
  uStack_7c = *(undefined4 *)(param_1 + 0x2c);
  local_78 = *(undefined4 *)(param_1 + 0x30);
  uStack_74 = *(undefined4 *)(param_1 + 0x34);
  uStack_70 = *(undefined4 *)(param_1 + 0x38);
  uStack_6c = *(undefined4 *)(param_1 + 0x3c);
  local_68 = *(undefined8 *)(param_1 + 0x40);
  FUN_14922a3fc(param_2);
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a3fc FUN_14922a3fc body=211 status=ok
// SIG undefined FUN_14922a3fc(void)

undefined8 * FUN_14922a3fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466da95c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a4e08();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922a4ec FUN_14922a4ec body=109 status=ok
// SIG undefined FUN_14922a4ec(void)

void FUN_14922a4ec(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) * *(float *)(param_1 + 8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a576 FUN_14922a576 body=109 status=ok
// SIG undefined FUN_14922a576(void)

void FUN_14922a576(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 0xc) + *(float *)(param_1 + 8);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a600 FUN_14922a600 body=109 status=ok
// SIG undefined FUN_14922a600(void)

void FUN_14922a600(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 8) - *(float *)(param_1 + 0xc);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a68a FUN_14922a68a body=109 status=ok
// SIG undefined FUN_14922a68a(void)

void FUN_14922a68a(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(float *)(param_1 + 0x10) = *(float *)(param_1 + 8) / *(float *)(param_1 + 0xc);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a71c FUN_14922a71c body=114 status=ok
// SIG undefined FUN_14922a71c(void)

void FUN_14922a71c(longlong param_1)

{
  float fVar1;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  fVar1 = *(float *)(param_1 + 8);
  if (*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 8)) {
    fVar1 = *(float *)(param_1 + 0x10);
  }
  if (fVar1 <= *(float *)(param_1 + 0xc)) {
    fVar1 = *(float *)(param_1 + 0xc);
  }
  *(float *)(param_1 + 0x14) = fVar1;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a790 FUN_14922a790 body=166 status=ok
// SIG undefined FUN_14922a790(void)

void FUN_14922a790(undefined8 param_1,undefined8 *param_2)

{
  float fVar1;
  
  param_2 = (undefined8 *)*param_2;
  fVar1 = *(float *)param_2[8] - *(float *)param_2[4];
  if (ABS(fVar1) <= 1e-08) {
    fVar1 = (float)(-(uint)(*(float *)param_2[8] <= *(float *)*param_2) & 0x3f800000);
  }
  else {
    fVar1 = (*(float *)*param_2 - *(float *)param_2[4]) / fVar1;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)param_2[0x14] =
       (*(float *)param_2[0x10] - *(float *)param_2[0xc]) * fVar1 + *(float *)param_2[0xc];
  return;
}



// FUNCTION 14922a836 FUN_14922a836 body=241 status=ok
// SIG undefined FUN_14922a836(void)

void FUN_14922a836(longlong param_1)

{
  float fVar1;
  undefined1 auStack_248 [32];
  undefined1 local_228 [488];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_228);
  FUN_1490d751a(local_228);
  fVar1 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc);
  if (ABS(fVar1) <= 1e-08) {
    fVar1 = (float)(-(uint)(*(float *)(param_1 + 0x10) <= *(float *)(param_1 + 8)) & 0x3f800000);
  }
  else {
    fVar1 = (*(float *)(param_1 + 8) - *(float *)(param_1 + 0xc)) / fVar1;
  }
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  *(float *)(param_1 + 0x1c) =
       (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14)) * fVar1 +
       *(float *)(param_1 + 0x14);
  FUN_140f8ccfc(local_228);
  if ((local_40 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922a928 FUN_14922a928 body=288 status=ok
// SIG undefined FUN_14922a928(void)

undefined8 FUN_14922a928(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_38 = &PTR_FUN_14bb125e0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  FUN_14922aa4a(param_2);
  FUN_140056680(local_48,&DAT_149e71d50);
  FUN_140056680(local_58,L"Argument0");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e060e8);
  FUN_140056680(local_58,L"Argument1");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922aa4a FUN_14922aa4a body=211 status=ok
// SIG undefined FUN_14922aa4a(void)

undefined8 * FUN_14922aa4a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dac8c();
  param_1[2] = uVar1;
  uVar1 = FUN_146697302();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922ab1e FUN_14922ab1e body=288 status=ok
// SIG undefined FUN_14922ab1e(void)

undefined8 FUN_14922ab1e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_38 = &PTR_FUN_14bb12220;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  FUN_14922ac40(param_2);
  FUN_140056680(local_48,&DAT_149e71d50);
  FUN_140056680(local_58,L"Argument0");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e060e8);
  FUN_140056680(local_58,L"Argument1");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922ac40 FUN_14922ac40 body=211 status=ok
// SIG undefined FUN_14922ac40(void)

undefined8 * FUN_14922ac40(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466daece();
  param_1[2] = uVar1;
  uVar1 = FUN_146696e6e();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922ad14 FUN_14922ad14 body=288 status=ok
// SIG undefined FUN_14922ad14(void)

undefined8 FUN_14922ad14(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_38 = &PTR_FUN_14bb12400;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  FUN_14922ae36(param_2);
  FUN_140056680(local_48,&DAT_149e71d50);
  FUN_140056680(local_58,L"Argument0");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e060e8);
  FUN_140056680(local_58,L"Argument1");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922ae36 FUN_14922ae36 body=211 status=ok
// SIG undefined FUN_14922ae36(void)

undefined8 * FUN_14922ae36(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466db110();
  param_1[2] = uVar1;
  uVar1 = FUN_1466970b8();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922af0a FUN_14922af0a body=288 status=ok
// SIG undefined FUN_14922af0a(void)

undefined8 FUN_14922af0a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_28 = 0;
  local_38 = &PTR_FUN_14bb127c0;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  FUN_14922b02c(param_2);
  FUN_140056680(local_48,&DAT_149e71d50);
  FUN_140056680(local_58,L"Argument0");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,&DAT_149e060e8);
  FUN_140056680(local_58,L"Argument1");
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922b02c FUN_14922b02c body=211 status=ok
// SIG undefined FUN_14922b02c(void)

undefined8 * FUN_14922b02c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466db352();
  param_1[2] = uVar1;
  uVar1 = FUN_14669754c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922b100 FUN_14922b100 body=299 status=ok
// SIG undefined FUN_14922b100(void)

undefined8 FUN_14922b100(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_58 [2];
  longlong local_48 [2];
  undefined **local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = &PTR_FUN_14bb14200;
  local_30 = *(undefined4 *)(param_1 + 8);
  local_2c = *(undefined4 *)(param_1 + 0xc);
  local_28 = (ulonglong)*(uint *)(param_1 + 0x10);
  FUN_14922b22c(param_2);
  FUN_140056680(local_48,L"Minimum");
  FUN_140056680(local_58,&DAT_14a3d4668);
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_48,L"Maximum");
  FUN_140056680(local_58,&DAT_14aa85e12);
  local_68 = 1;
  FUN_1490fb142(param_2,local_58,local_48,1);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922b22c FUN_14922b22c body=211 status=ok
// SIG undefined FUN_14922b22c(void)

undefined8 * FUN_14922b22c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466db594();
  param_1[2] = uVar1;
  uVar1 = FUN_146699390();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922b300 FUN_14922b300 body=508 status=ok
// SIG undefined FUN_14922b300(void)

undefined8 FUN_14922b300(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68 [2];
  longlong local_58 [2];
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = &PTR_FUN_14bb145c0;
  local_28 = 0;
  local_2c = 0;
  local_40 = *(undefined4 *)(param_1 + 8);
  local_3c = *(undefined4 *)(param_1 + 0xc);
  local_38 = *(undefined4 *)(param_1 + 0x10);
  local_34 = *(undefined4 *)(param_1 + 0x14);
  local_30 = *(undefined4 *)(param_1 + 0x18);
  FUN_14922b4fe(param_2);
  FUN_140056680(local_58,L"SourceMinimum");
  FUN_140056680(local_68,L"MinIn");
  local_78 = 1;
  FUN_1490fb142(param_2,local_68,local_58,1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_58,L"SourceMaximum");
  FUN_140056680(local_68,L"MaxIn");
  local_78 = 1;
  FUN_1490fb142(param_2,local_68,local_58,1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_58,L"TargetMinimum");
  FUN_140056680(local_68,L"MinOut");
  local_78 = 1;
  FUN_1490fb142(param_2,local_68,local_58,1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_58,L"TargetMaximum");
  FUN_140056680(local_68,L"MaxOut");
  local_78 = 1;
  FUN_1490fb142(param_2,local_68,local_58,1);
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922b4fe FUN_14922b4fe body=211 status=ok
// SIG undefined FUN_14922b4fe(void)

undefined8 * FUN_14922b4fe(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466db824();
  param_1[2] = uVar1;
  uVar1 = FUN_1466998c4();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922b5d2 FUN_14922b5d2 body=282 status=ok
// SIG undefined FUN_14922b5d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922b5d2(undefined8 param_1,undefined8 *param_2)

{
  double dVar1;
  double *pdVar3;
  double *pdVar4;
  ulonglong *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  double dVar2;
  
  param_2 = (undefined8 *)*param_2;
  pdVar3 = (double *)*param_2;
  pdVar4 = (double *)param_2[4];
  puVar5 = (ulonglong *)param_2[8];
  dVar6 = *pdVar4;
  dVar7 = pdVar4[1];
  dVar8 = pdVar4[2];
  dVar9 = pdVar4[3];
  dVar10 = pdVar3[3];
  dVar11 = pdVar3[3];
  dVar14 = pdVar3[1];
  dVar17 = pdVar3[1];
  dVar1 = pdVar3[2];
  dVar2 = pdVar3[2];
  dVar12 = dVar7 * dVar1 * -1.0 + dVar8 * dVar14 + *pdVar3 * dVar9 * 1.0 + dVar10 * dVar6;
  dVar13 = dVar6 * dVar2 * 1.0 + dVar9 * dVar17 + *pdVar3 * dVar8 * -1.0 + dVar11 * dVar7;
  dVar10 = dVar9 * dVar1 * 1.0 + ((*pdVar3 * dVar7 * 1.0 + dVar10 * dVar8) - dVar14 * dVar6);
  dVar11 = dVar8 * dVar2 * -1.0 + ((*pdVar3 * dVar6 * -1.0 + dVar11 * dVar9) - dVar17 * dVar7);
  dVar14 = dVar10 * dVar10 + dVar12 * dVar12;
  dVar17 = dVar11 * dVar11 + dVar13 * dVar13;
  auVar15._0_8_ = dVar14 + dVar17;
  auVar15._8_8_ = dVar14 + dVar17;
  auVar16 = sqrtpd(auVar15,auVar15);
  auVar16 = divpd(_DAT_149934d80,auVar16);
  auVar18._0_8_ = auVar16._0_8_ * dVar10;
  auVar18._8_8_ = auVar16._8_8_ * dVar11;
  *puVar5 = (ulonglong)(dVar12 * auVar16._0_8_) &
            -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  puVar5[1] = (ulonglong)(dVar13 * auVar16._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._8_8_);
  auVar16._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar15._0_8_);
  auVar16 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar18,auVar16);
  *(undefined1 (*) [16])(puVar5 + 2) = auVar16;
  return;
}



// FUNCTION 14922b6ec FUN_14922b6ec body=376 status=ok
// SIG undefined FUN_14922b6ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922b6ec(longlong param_1)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined1 auStack_258 [32];
  undefined1 local_238 [488];
  ulonglong local_50;
  double dVar2;
  double dVar4;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  FUN_1412ca278(local_238);
  FUN_1490d751a(local_238);
  dVar5 = *(double *)(param_1 + 0x30);
  dVar6 = *(double *)(param_1 + 0x38);
  dVar7 = *(double *)(param_1 + 0x40);
  dVar8 = *(double *)(param_1 + 0x48);
  dVar9 = *(double *)(param_1 + 0x28);
  dVar10 = *(double *)(param_1 + 0x28);
  dVar13 = *(double *)(param_1 + 0x18);
  dVar16 = *(double *)(param_1 + 0x18);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x10);
  dVar3 = *(double *)(param_1 + 0x20);
  dVar4 = *(double *)(param_1 + 0x20);
  dVar11 = dVar6 * dVar3 * -1.0 + dVar7 * dVar13 + dVar1 * dVar8 * 1.0 + dVar9 * dVar5;
  dVar12 = dVar5 * dVar4 * 1.0 + dVar8 * dVar16 + dVar2 * dVar7 * -1.0 + dVar10 * dVar6;
  dVar9 = dVar8 * dVar3 * 1.0 + ((dVar1 * dVar6 * 1.0 + dVar9 * dVar7) - dVar13 * dVar5);
  dVar10 = dVar7 * dVar4 * -1.0 + ((dVar2 * dVar5 * -1.0 + dVar10 * dVar8) - dVar16 * dVar6);
  dVar13 = dVar9 * dVar9 + dVar11 * dVar11;
  dVar16 = dVar10 * dVar10 + dVar12 * dVar12;
  auVar14._0_8_ = dVar13 + dVar16;
  auVar14._8_8_ = dVar13 + dVar16;
  auVar15 = sqrtpd(auVar14,auVar14);
  auVar15 = divpd(_DAT_149934d80,auVar15);
  auVar17._0_8_ = auVar15._0_8_ * dVar9;
  auVar17._8_8_ = auVar15._8_8_ * dVar10;
  *(ulonglong *)(param_1 + 0x50) =
       (ulonglong)(dVar11 * auVar15._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
  *(ulonglong *)(param_1 + 0x58) =
       (ulonglong)(dVar12 * auVar15._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
  auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._8_8_);
  auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar14._0_8_);
  auVar15 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar17,auVar15);
  *(undefined1 (*) [16])(param_1 + 0x60) = auVar15;
  FUN_140f8ccfc(local_238);
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922b8e6 FUN_14922b8e6 body=212 status=ok
// SIG undefined FUN_14922b8e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922b8e6(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar8;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar9 [16];
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  dVar1 = *(double *)(param_1 + 0x10);
  dVar2 = *(double *)(param_1 + 0x18);
  dVar3 = *(double *)(param_1 + 0x20) * -1.0;
  dVar4 = *(double *)(param_1 + 0x28) * 1.0;
  dVar5 = dVar3 * dVar3 + dVar1 * dVar1;
  dVar8 = dVar4 * dVar4 + dVar2 * dVar2;
  auVar6._0_8_ = dVar5 + dVar8;
  auVar6._8_8_ = dVar5 + dVar8;
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar9._0_8_ = auVar7._0_8_ * dVar3;
  auVar9._8_8_ = auVar7._8_8_ * dVar4;
  *(ulonglong *)(param_1 + 0x30) =
       (ulonglong)(-dVar1 * auVar7._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  *(ulonglong *)(param_1 + 0x38) =
       (ulonglong)(-dVar2 * auVar7._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar7._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar9,auVar7);
  *(undefined1 (*) [16])(param_1 + 0x40) = auVar7;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922b9bc FUN_14922b9bc body=88 status=ok
// SIG undefined FUN_14922b9bc(void)

void FUN_14922b9bc(undefined8 param_1,longlong *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  
  pfVar1 = (float *)((longlong *)*param_2)[8];
  dVar2 = *(double *)(*(longlong *)*param_2 + 0x18);
  dVar3 = dVar2;
  if (1.0 <= dVar2) {
    dVar3 = 1.0;
  }
  dVar2 = acos((double)(~-(ulonglong)(dVar2 < -1.0) & (ulonglong)dVar3 |
                       -(ulonglong)(dVar2 < -1.0) & 0xbff0000000000000));
  *pfVar1 = (float)(dVar2 + dVar2) * 57.295776;
  return;
}



// FUNCTION 14922ba14 FUN_14922ba14 body=162 status=ok
// SIG undefined FUN_14922ba14(void)

void FUN_14922ba14(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  dVar1 = *(double *)(param_1 + 0x28);
  dVar2 = dVar1;
  if (1.0 <= dVar1) {
    dVar2 = 1.0;
  }
  dVar1 = acos((double)(~-(ulonglong)(dVar1 < -1.0) & (ulonglong)dVar2 |
                       -(ulonglong)(dVar1 < -1.0) & 0xbff0000000000000));
  *(float *)(param_1 + 0x48) = (float)(dVar1 + dVar1) * 57.295776;
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922bad0 FUN_14922bad0 body=115 status=ok
// SIG undefined FUN_14922bad0(void)

void FUN_14922bad0(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14922bb44(param_1 + 8,*(undefined4 *)(param_1 + 0x20),param_1 + 0x30);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922bb44 FUN_14922bb44 body=301 status=ok
// SIG undefined FUN_14922bb44(void)

void FUN_14922bb44(double *param_1,float param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  dVar7 = *param_1;
  dVar6 = param_1[1];
  dVar1 = param_1[2];
  dVar5 = dVar1 * dVar1 + dVar7 * dVar7 + dVar6 * dVar6;
  if (((dVar5 != 1.0) || (dVar2 = dVar1, dVar3 = dVar6, dVar4 = dVar7, NAN(dVar5))) &&
     (dVar2 = DAT_14c8464f0, dVar3 = DAT_14c8464e8, dVar4 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar2 = dVar1 * dVar5;
    dVar3 = dVar6 * dVar5;
    dVar4 = dVar7 * dVar5;
  }
  dVar7 = (double)(param_2 * 0.017453292) * 0.5;
  dVar6 = sin(dVar7);
  dVar7 = cos(dVar7);
  *param_3 = dVar4 * dVar6;
  param_3[1] = dVar3 * dVar6;
  param_3[2] = dVar2 * dVar6;
  param_3[3] = dVar7;
  return;
}



// FUNCTION 14922bc86 FUN_14922bc86 body=114 status=ok
// SIG undefined FUN_14922bc86(void)

void FUN_14922bc86(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14922bcfa(param_1 + 8,param_1 + 0x20,param_1 + 0x40);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922bcfa FUN_14922bcfa body=707 status=ok
// SIG undefined FUN_14922bcfa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922bcfa(double *param_1,double *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar10;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar11;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  undefined1 local_88 [40];
  ulonglong local_60;
  
  auVar13 = _DAT_149934d80;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_c8 = *param_1;
  dStack_c0 = param_1[1];
  local_b8 = param_1[2];
  dVar4 = local_b8 * local_b8 + local_c8 * local_c8 + dStack_c0 * dStack_c0;
  if ((dVar4 != 1.0) || (NAN(dVar4))) {
    if (9.99999993922529e-09 <= dVar4) {
      dVar4 = 1.0 / SQRT(dVar4);
      local_b8 = local_b8 * dVar4;
      dStack_c0 = dStack_c0 * dVar4;
      local_c8 = local_c8 * dVar4;
    }
    else {
      local_b8 = DAT_14c8464f0;
      local_c8 = DAT_14c8464e0;
      dStack_c0 = DAT_14c8464e8;
    }
  }
  else {
    local_b8 = param_1[2];
    local_c8 = *param_1;
    dStack_c0 = param_1[1];
  }
  dVar4 = *param_2;
  dVar11 = param_2[1];
  dVar1 = param_2[2];
  dVar2 = param_2[3];
  dVar5 = dVar1 * dVar1 + dVar4 * dVar4;
  dVar10 = dVar2 * dVar2 + dVar11 * dVar11;
  auVar6._0_8_ = dVar5 + dVar10;
  auVar6._8_8_ = dVar5 + dVar10;
  auVar9._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  auVar9._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  auVar7 = sqrtpd(auVar6,auVar6);
  auVar7 = divpd(_DAT_149934d80,auVar7);
  auVar12._0_8_ = auVar7._0_8_ * dVar1;
  auVar12._8_8_ = auVar7._8_8_ * dVar2;
  local_e8 = (ulonglong)(dVar4 * auVar7._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar6._0_8_);
  uStack_e0 = (ulonglong)(dVar11 * auVar7._8_8_) &
              -(ulonglong)(9.99999993922529e-09 <= auVar6._8_8_);
  local_d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar12,auVar9);
  FUN_144afe582(&local_e8,&local_c8,local_88,&local_a8);
  dVar4 = dStack_90;
  if (1.0 <= dStack_90) {
    dVar4 = 1.0;
  }
  acos((double)(-(ulonglong)(dStack_90 < -1.0) & 0xbff0000000000000 |
               ~-(ulonglong)(dStack_90 < -1.0) & (ulonglong)dVar4));
  dVar4 = local_98 * local_98 + local_a8 * local_a8;
  dVar11 = dStack_a0 * dStack_a0 + 0.0;
  auVar8._0_8_ = dVar4 + dVar11;
  auVar8._8_8_ = dVar4 + dVar11;
  auVar7._8_8_ = -(ulonglong)(1e-08 <= auVar8._8_8_);
  auVar7._0_8_ = -(ulonglong)(1e-08 <= auVar8._0_8_);
  auVar9 = sqrtpd(auVar8,auVar8);
  auVar9 = divpd(auVar13,auVar9);
  auVar13._8_8_ = dStack_a0 * auVar9._8_8_;
  auVar13._0_8_ = local_a8 * auVar9._0_8_;
  auVar13 = blendvpd(ZEXT816(0x3ff0000000000000),auVar13,auVar7);
  if ((-(ulonglong)(1e-08 <= auVar8._0_8_) & 1) == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = local_98 * auVar9._0_8_;
  }
  fVar3 = (float)FUN_1447c7e44();
  *param_3 = fVar3;
  if (dVar4 * local_b8 + local_c8 * auVar13._0_8_ + auVar13._8_8_ * dStack_c0 < 0.0) {
    *param_3 = 360.0 - fVar3;
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14922bfbe FUN_14922bfbe body=327 status=ok
// SIG undefined FUN_14922bfbe(void)

undefined8 FUN_14922bfbe(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8 [2];
  longlong local_a8 [2];
  undefined **local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
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
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_38 = DAT_14c8463e0;
  uStack_30 = DAT_14c8463e8;
  local_48 = DAT_14c8463d0;
  uStack_40 = DAT_14c8463d8;
  local_98 = &PTR_FUN_14bb1daf0;
  local_88 = *(undefined8 *)(param_1 + 0x10);
  uStack_80 = *(undefined8 *)(param_1 + 0x18);
  local_78 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = *(undefined8 *)(param_1 + 0x28);
  local_68 = *(undefined4 *)(param_1 + 0x30);
  uStack_64 = *(undefined4 *)(param_1 + 0x34);
  uStack_60 = *(undefined4 *)(param_1 + 0x38);
  uStack_5c = *(undefined4 *)(param_1 + 0x3c);
  local_58 = *(undefined4 *)(param_1 + 0x40);
  uStack_54 = *(undefined4 *)(param_1 + 0x44);
  uStack_50 = *(undefined4 *)(param_1 + 0x48);
  uStack_4c = *(undefined4 *)(param_1 + 0x4c);
  FUN_14922c106(param_2);
  FUN_140056680(local_a8,&DAT_149e71d50);
  FUN_140056680(local_b8,L"Argument0");
  local_c8 = 1;
  FUN_1490fb142(param_2,local_b8,local_a8,1);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_a8,&DAT_149e060e8);
  FUN_140056680(local_b8,L"Argument1");
  local_c8 = 1;
  FUN_1490fb142(param_2,local_b8,local_a8,1);
  if (local_b8[0] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922c106 FUN_14922c106 body=211 status=ok
// SIG undefined FUN_14922c106(void)

undefined8 * FUN_14922c106(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dbbe2();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a36f0();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922c1da FUN_14922c1da body=221 status=ok
// SIG undefined FUN_14922c1da(void)

undefined8 FUN_14922c1da(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined **local_78;
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
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_38 = DAT_14c8463e0;
  uStack_30 = DAT_14c8463e8;
  local_48 = DAT_14c8463d0;
  uStack_40 = DAT_14c8463d8;
  local_78 = &PTR_FUN_14bb1dcd0;
  local_68 = *(undefined4 *)(param_1 + 0x10);
  uStack_64 = *(undefined4 *)(param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x2c);
  FUN_14922c2b8(param_2);
  FUN_140056680(local_88,L"Value");
  FUN_140056680(local_98,L"Argument");
  local_a8 = 1;
  FUN_1490fb142(param_2,local_98,local_88,1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922c2b8 FUN_14922c2b8 body=211 status=ok
// SIG undefined FUN_14922c2b8(void)

undefined8 * FUN_14922c2b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dbeba();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a393a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922c38c FUN_14922c38c body=227 status=ok
// SIG undefined FUN_14922c38c(void)

undefined8 FUN_14922c38c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined **local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = &PTR_FUN_14bb1d030;
  local_48 = 0x3ff0000000000000;
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  local_68 = *(undefined4 *)(param_1 + 0x10);
  uStack_64 = *(undefined4 *)(param_1 + 0x14);
  uStack_60 = *(undefined4 *)(param_1 + 0x18);
  uStack_5c = *(undefined4 *)(param_1 + 0x1c);
  local_58 = *(undefined4 *)(param_1 + 0x20);
  uStack_54 = *(undefined4 *)(param_1 + 0x24);
  uStack_50 = *(undefined4 *)(param_1 + 0x28);
  uStack_4c = *(undefined4 *)(param_1 + 0x2c);
  FUN_14922c470(param_2);
  FUN_140056680(local_88,L"Value");
  FUN_140056680(local_98,L"Argument");
  local_a8 = 1;
  FUN_1490fb142(param_2,local_98,local_88,1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922c470 FUN_14922c470 body=211 status=ok
// SIG undefined FUN_14922c470(void)

undefined8 * FUN_14922c470(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dc0aa();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a2956();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922c544 FUN_14922c544 body=231 status=ok
// SIG undefined FUN_14922c544(void)

undefined8 FUN_14922c544(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_98 [2];
  longlong local_88 [2];
  undefined **local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = &PTR_FUN_14bb1d030;
  local_58 = DAT_14c8463e0;
  uStack_50 = DAT_14c8463e8;
  local_68 = DAT_14c8463d0;
  uStack_60 = DAT_14c8463d8;
  local_48 = *(undefined8 *)(param_1 + 8);
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  local_38 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(param_1 + 0x20);
  FUN_14922c62c(param_2);
  FUN_140056680(local_88,L"Value");
  FUN_140056680(local_98,L"Result");
  local_a8 = 1;
  FUN_1490fb142(param_2,local_98,local_88,1);
  if (local_98[0] != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922c62c FUN_14922c62c body=211 status=ok
// SIG undefined FUN_14922c62c(void)

undefined8 * FUN_14922c62c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dc2fa();
  param_1[2] = uVar1;
  uVar1 = FUN_1466a2956();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922c700 FUN_14922c700 body=25 status=ok
// SIG undefined FUN_14922c700(void)

undefined8 FUN_14922c700(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922c72e FUN_14922c72e body=117 status=ok
// SIG undefined FUN_14922c72e(void)

void FUN_14922c72e(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_14922c7a4(param_1 + 0x10,param_1 + 0x70,param_1 + 0xd0);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922c7a4 FUN_14922c7a4 body=1753 status=ok
// SIG undefined FUN_14922c7a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922c7a4(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  int iVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auStack_288 [32];
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  undefined1 local_228 [16];
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  double local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  double local_108;
  double local_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  ulonglong local_c0;
  
  auVar34 = _DAT_149934d80;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  auVar25 = *(undefined1 (*) [16])(param_2 + 8);
  dVar5 = auVar25._0_8_;
  dVar9 = auVar25._8_8_;
  auVar3 = *(undefined1 (*) [16])(param_2 + 10);
  dVar6 = auVar3._0_8_;
  auVar26 = *(undefined1 (*) [16])(param_1 + 8);
  dVar7 = auVar26._0_8_;
  dVar10 = auVar26._8_8_;
  auVar4 = *(undefined1 (*) [16])(param_1 + 10);
  dVar8 = auVar4._0_8_;
  auVar25 = minpd(auVar26,auVar25);
  auVar29 = minpd(auVar4,auVar3);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar17 = movmskpd((int)local_c0,auVar26);
  auVar25._8_8_ = -(ulonglong)(auVar29._8_8_ < 0.0);
  auVar25._0_8_ = -(ulonglong)(auVar29._0_8_ < 0.0);
  uVar18 = movmskpd((int)param_3,auVar25);
  if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar27 = *param_1;
    dVar31 = param_1[1];
    dVar32 = param_1[2];
    dVar33 = param_1[3];
    dVar13 = *param_2;
    dVar14 = param_2[1];
    dVar15 = param_2[2];
    dVar16 = param_2[3];
    dVar23 = param_2[3];
    dVar22 = param_2[3];
    dVar12 = param_2[1];
    dVar1 = param_2[1];
    dVar2 = param_2[2];
    dVar30 = param_2[2];
    dVar24 = dVar31 * dVar2 * -1.0 + dVar32 * dVar12 + dVar33 * *param_2 * 1.0 + dVar27 * dVar23;
    dVar28 = dVar27 * dVar30 * 1.0 + dVar33 * dVar1 + dVar32 * *param_2 * -1.0 + dVar31 * dVar22;
    auVar34._0_8_ =
         dVar33 * dVar2 * 1.0 + ((*param_2 * dVar31 * 1.0 + dVar32 * dVar23) - dVar27 * dVar12);
    auVar34._8_8_ =
         dVar32 * dVar30 * -1.0 + ((*param_2 * dVar27 * -1.0 + dVar33 * dVar22) - dVar31 * dVar1);
    dVar30 = param_1[4] * dVar5;
    dVar27 = param_1[5] * dVar9;
    dVar31 = param_1[6] * dVar6;
    dVar32 = param_1[7] * auVar3._8_8_;
    dVar12 = dVar27 * dVar13 - dVar14 * dVar30;
    dVar1 = dVar31 * dVar14 - dVar15 * dVar27;
    dVar2 = dVar30 * dVar15 - dVar13 * dVar31;
    dVar33 = dVar32 * dVar16 - dVar16 * dVar32;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar12 = dVar12 + dVar12;
    dVar33 = dVar33 + dVar33;
    local_e8 = (dVar12 * dVar14 - dVar15 * dVar2) + dVar23 * dVar1 + dVar30 + param_2[4];
    dStack_e0 = (dVar1 * dVar15 - dVar12 * dVar13) + dVar22 * dVar2 + dVar27 + param_2[5];
    local_d8 = (dVar2 * dVar13 - dVar14 * dVar1) + dVar23 * dVar12 + dVar31 + param_2[6];
    dVar23 = (dVar33 * dVar16 - dVar33 * dVar16) + dVar22 * dVar33 + dVar32 + param_2[7];
  }
  else {
    dVar1 = *param_2;
    dVar2 = param_2[1];
    dVar30 = param_2[2];
    dVar27 = dVar2 + dVar2;
    dVar31 = dVar30 + dVar30;
    dVar22 = dVar1 * (dVar1 + dVar1);
    local_178 = (1.0 - (dVar22 + dVar2 * dVar27)) * dVar6;
    dVar23 = param_2[3];
    dVar32 = dVar31 * dVar23;
    dVar33 = (dVar1 + dVar1) * param_2[3];
    dVar23 = dVar27 * dVar23;
    local_188 = (dVar23 + *param_2 * dVar31) * dVar6;
    dVar22 = (DAT_149934d80._8_8_ - (dVar30 * dVar31 + dVar22)) * dVar9;
    dVar12 = (dVar27 * dVar1 + dVar32) * dVar5;
    local_198 = (dVar31 * dVar2 + dVar33) * dVar9;
    dStack_180 = (dVar31 * dVar2 - dVar33) * dVar6;
    local_1b8 = (*param_2 * dVar31 - dVar23) * dVar5;
    local_1c8._8_4_ = SUB84(dVar12,0);
    local_1c8._0_8_ = ((double)DAT_149934d80 - (dVar30 * dVar31 + dVar2 * dVar27)) * dVar5;
    local_1c8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1b0 = 0;
    local_1a8._8_4_ = SUB84(dVar22,0);
    local_1a8._0_8_ = (dVar27 * dVar1 - dVar32) * dVar9;
    local_1a8._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_190 = 0;
    uStack_170 = 0;
    local_168 = param_2[4];
    dStack_160 = param_2[5];
    local_158 = param_2[6];
    uStack_150 = 0x3ff0000000000000;
    dVar12 = *param_1;
    dVar1 = param_1[1];
    dVar2 = param_1[2];
    dVar30 = dVar1 + dVar1;
    dVar27 = dVar2 + dVar2;
    dVar22 = dVar12 * (dVar12 + dVar12);
    local_1f8 = (1.0 - (dVar22 + dVar1 * dVar30)) * dVar8;
    dVar23 = param_1[3];
    dVar31 = dVar27 * dVar23;
    dVar32 = (dVar12 + dVar12) * param_1[3];
    dVar23 = dVar30 * dVar23;
    local_208 = (dVar23 + *param_1 * dVar27) * dVar8;
    dStack_200 = (dVar27 * dVar1 - dVar32) * dVar8;
    local_248 = ((double)DAT_149934d80 - (dVar2 * dVar27 + dVar1 * dVar30)) * dVar7;
    dVar22 = (DAT_149934d80._8_8_ - (dVar2 * dVar27 + dVar22)) * dVar10;
    dStack_240 = (dVar30 * dVar12 + dVar31) * dVar7;
    local_218 = (dVar27 * dVar1 + dVar32) * dVar10;
    local_238 = (*param_1 * dVar27 - dVar23) * dVar7;
    uStack_230 = 0;
    local_228._8_4_ = SUB84(dVar22,0);
    local_228._0_8_ = (dVar30 * dVar12 - dVar31) * dVar10;
    local_228._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    uStack_210 = 0;
    uStack_1f0 = 0;
    local_1e8 = param_1[4];
    dStack_1e0 = param_1[5];
    local_1d8 = param_1[6];
    uStack_1d0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_148);
    FUN_144a1c686(&local_148,0x3e45798ee0000000);
    auVar29._8_8_ = -(ulonglong)(0.0 <= dVar9 * dVar10);
    auVar29._0_8_ = -(ulonglong)(0.0 <= dVar5 * dVar7);
    auVar25 = blendvpd(_DAT_149936790,auVar34,auVar29);
    uVar19 = -(ulonglong)(0.0 <= dVar6 * dVar8);
    dVar23 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar22 = auVar25._0_8_;
    local_138 = local_138 * dVar22;
    local_140 = local_140 * dVar22;
    local_148 = local_148 * dVar22;
    dVar22 = auVar25._8_8_;
    local_118 = local_118 * dVar22;
    local_120 = local_120 * dVar22;
    local_128 = dVar22 * local_128;
    local_f8 = local_f8 * dVar23;
    local_100 = local_100 * dVar23;
    local_108 = dVar23 * local_108;
    FUN_14481fd10(&local_268,&local_148);
    dVar23 = local_258 * local_258 + local_268 * local_268;
    dVar22 = dStack_250 * dStack_250 + dStack_260 * dStack_260;
    auVar21._0_8_ = dVar23 + dVar22;
    auVar21._8_8_ = dVar23 + dVar22;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_);
    auVar25 = sqrtpd(auVar21,auVar21);
    auVar25 = divpd(auVar34,auVar25);
    auVar35._0_8_ = auVar25._0_8_ * local_258;
    auVar35._8_8_ = auVar25._8_8_ * dStack_250;
    dVar24 = (double)((ulonglong)(local_268 * auVar25._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._0_8_));
    dVar28 = (double)((ulonglong)(dStack_260 * auVar25._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar21._8_8_));
    auVar34 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar35,auVar20);
    dVar23 = 0.0;
  }
  dVar22 = auVar3._8_8_ * auVar4._8_8_;
  *param_3 = dVar24;
  param_3[1] = dVar28;
  *(undefined1 (*) [16])(param_3 + 2) = auVar34;
  auVar4._8_4_ = SUB84(dStack_e0,0);
  auVar4._0_8_ = local_e8;
  auVar4._12_4_ = (int)((ulonglong)dStack_e0 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 4) = auVar4;
  param_3[6] = local_d8;
  param_3[7] = dVar23;
  auVar11._8_4_ = SUB84(dVar9 * dVar10,0);
  auVar11._0_8_ = dVar5 * dVar7;
  auVar11._12_4_ = (int)((ulonglong)(dVar9 * dVar10) >> 0x20);
  *(undefined1 (*) [16])(param_3 + 8) = auVar11;
  auVar3._8_4_ = SUB84(dVar22,0);
  auVar3._0_8_ = dVar6 * dVar8;
  auVar3._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  *(undefined1 (*) [16])(param_3 + 10) = auVar3;
  if ((local_c0 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922ce7e FUN_14922ce7e body=97 status=ok
// SIG undefined FUN_14922ce7e(void)

void FUN_14922ce7e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [12];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = (undefined8 *)*param_2;
  puVar3 = (undefined8 *)puVar2[8];
  FUN_1449437a2(*puVar2,local_78,puVar2[4]);
  puVar2 = local_78;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922cee0 FUN_14922cee0 body=145 status=ok
// SIG undefined FUN_14922cee0(void)

void FUN_14922cee0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_288 [32];
  undefined1 local_268 [480];
  undefined8 local_88 [12];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1412ca278(local_268);
  FUN_1490d751a(local_268);
  FUN_1449437a2(param_1 + 0x10,local_88,param_1 + 0x70);
  puVar2 = local_88;
  puVar3 = (undefined8 *)(param_1 + 0xd0);
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_140f8ccfc(local_268);
  if ((local_28 ^ (ulonglong)auStack_288) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922cf72 FUN_14922cf72 body=346 status=ok
// SIG undefined FUN_14922cf72(void)

undefined8 FUN_14922cf72(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong local_178 [2];
  longlong local_168 [2];
  undefined **local_158 [2];
  undefined8 local_148 [12];
  undefined8 local_e8 [12];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  puVar2 = &DAT_14c846480;
  puVar3 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  local_158[0] = &PTR_FUN_14bb23e00;
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_148;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14922d0ce(param_2,local_158);
  FUN_140056680(local_168,&DAT_149e71d50);
  FUN_140056680(local_178,L"Argument0");
  local_188 = 1;
  FUN_1490fb142(param_2,local_178,local_168,1);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_168,&DAT_149e060e8);
  FUN_140056680(local_178,L"Argument1");
  local_188 = 1;
  FUN_1490fb142(param_2,local_178,local_168,1);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d0ce FUN_14922d0ce body=211 status=ok
// SIG undefined FUN_14922d0ce(void)

undefined8 * FUN_14922d0ce(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dc830();
  param_1[2] = uVar1;
  uVar1 = FUN_1466aa6aa();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922d1a2 FUN_14922d1a2 body=436 status=ok
// SIG undefined FUN_14922d1a2(void)

undefined8 FUN_14922d1a2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong local_178 [2];
  longlong local_168 [2];
  undefined **local_158 [2];
  undefined8 local_148 [12];
  undefined8 local_e8 [12];
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_158[0] = &PTR_FUN_14bb23fe0;
  puVar2 = &DAT_14c846480;
  puVar3 = local_88;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x10);
  puVar3 = local_148;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = (undefined8 *)(param_1 + 0x70);
  puVar3 = local_e8;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_14922d358(param_2,local_158);
  FUN_140056680(local_168,L"Global");
  FUN_140056680(local_178,L"Argument0");
  local_188 = 1;
  FUN_1490fb142(param_2,local_178,local_168,1);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_168,L"Parent");
  FUN_140056680(local_178,L"Argument1");
  local_188 = 1;
  FUN_1490fb142(param_2,local_178,local_168,1);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_168,L"Local");
  FUN_140056680(local_178,L"Result");
  local_188 = 1;
  FUN_1490fb142(param_2,local_178,local_168,1);
  if (local_178[0] != 0) {
    FUN_1400020a8();
  }
  if (local_168[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d358 FUN_14922d358 body=211 status=ok
// SIG undefined FUN_14922d358(void)

undefined8 * FUN_14922d358(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dca72();
  param_1[2] = uVar1;
  uVar1 = FUN_1466aa8f4();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922d466 FUN_14922d466 body=139 status=ok
// SIG undefined FUN_14922d466(void)

void FUN_14922d466(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x20) * *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x28) * *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x30) * *(double *)(param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d52c FUN_14922d52c body=139 status=ok
// SIG undefined FUN_14922d52c(void)

void FUN_14922d52c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 0x20) + *(double *)(param_1 + 8);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x28) + *(double *)(param_1 + 0x10);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x30) + *(double *)(param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d5f2 FUN_14922d5f2 body=139 status=ok
// SIG undefined FUN_14922d5f2(void)

void FUN_14922d5f2(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d6b8 FUN_14922d6b8 body=139 status=ok
// SIG undefined FUN_14922d6b8(void)

void FUN_14922d6b8(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(double *)(param_1 + 0x38) = *(double *)(param_1 + 8) / *(double *)(param_1 + 0x20);
  *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x10) / *(double *)(param_1 + 0x28);
  *(double *)(param_1 + 0x48) = *(double *)(param_1 + 0x18) / *(double *)(param_1 + 0x30);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d790 FUN_14922d790 body=157 status=ok
// SIG undefined FUN_14922d790(void)

void FUN_14922d790(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  dVar1 = *(double *)(param_1 + 0x18) - *(double *)(param_1 + 0x30);
  dVar2 = *(double *)(param_1 + 0x10) - *(double *)(param_1 + 0x28);
  dVar3 = *(double *)(param_1 + 8) - *(double *)(param_1 + 0x20);
  *(float *)(param_1 + 0x38) = (float)SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d82e FUN_14922d82e body=327 status=ok
// SIG undefined FUN_14922d82e(void)

undefined8 FUN_14922d82e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_70 = &PTR_FUN_14bb267c0;
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_44 = *(undefined4 *)(param_1 + 0x2c);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_14922d976(param_2);
  FUN_140056680(local_80,&DAT_149e71d50);
  FUN_140056680(local_90,L"Argument0");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_80,&DAT_149e060e8);
  FUN_140056680(local_90,L"Argument1");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922d976 FUN_14922d976 body=211 status=ok
// SIG undefined FUN_14922d976(void)

undefined8 * FUN_14922d976(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dcd4c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ad6e6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922da4a FUN_14922da4a body=327 status=ok
// SIG undefined FUN_14922da4a(void)

undefined8 FUN_14922da4a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_70 = &PTR_FUN_14bb26400;
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_44 = *(undefined4 *)(param_1 + 0x2c);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_14922db92(param_2);
  FUN_140056680(local_80,&DAT_149e71d50);
  FUN_140056680(local_90,L"Argument0");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_80,&DAT_149e060e8);
  FUN_140056680(local_90,L"Argument1");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922db92 FUN_14922db92 body=211 status=ok
// SIG undefined FUN_14922db92(void)

undefined8 * FUN_14922db92(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dcf8e();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ad252();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922dc66 FUN_14922dc66 body=327 status=ok
// SIG undefined FUN_14922dc66(void)

undefined8 FUN_14922dc66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_70 = &PTR_FUN_14bb265e0;
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_44 = *(undefined4 *)(param_1 + 0x2c);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_14922ddae(param_2);
  FUN_140056680(local_80,&DAT_149e71d50);
  FUN_140056680(local_90,L"Argument0");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_80,&DAT_149e060e8);
  FUN_140056680(local_90,L"Argument1");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922ddae FUN_14922ddae body=211 status=ok
// SIG undefined FUN_14922ddae(void)

undefined8 * FUN_14922ddae(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dd1d0();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ad49c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922de82 FUN_14922de82 body=327 status=ok
// SIG undefined FUN_14922de82(void)

undefined8 FUN_14922de82(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_90 [2];
  longlong local_80 [2];
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = DAT_14c8464f0;
  local_38 = DAT_14c8464e0;
  uStack_30 = DAT_14c8464e8;
  local_70 = &PTR_FUN_14bb26b80;
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 0x10);
  local_58 = *(undefined8 *)(param_1 + 0x18);
  local_50 = *(undefined4 *)(param_1 + 0x20);
  uStack_4c = *(undefined4 *)(param_1 + 0x24);
  uStack_48 = *(undefined4 *)(param_1 + 0x28);
  uStack_44 = *(undefined4 *)(param_1 + 0x2c);
  local_40 = *(undefined8 *)(param_1 + 0x30);
  FUN_14922dfca(param_2);
  FUN_140056680(local_80,&DAT_149e71d50);
  FUN_140056680(local_90,L"Argument0");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_80,&DAT_149e060e8);
  FUN_140056680(local_90,L"Argument1");
  local_98 = 1;
  FUN_1490fb142(param_2,local_90,local_80,1);
  if (local_90[0] != 0) {
    FUN_1400020a8();
  }
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922dfca FUN_14922dfca body=211 status=ok
// SIG undefined FUN_14922dfca(void)

undefined8 * FUN_14922dfca(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dd412();
  param_1[2] = uVar1;
  uVar1 = FUN_1466adb82();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922e09e FUN_14922e09e body=312 status=ok
// SIG undefined FUN_14922e09e(void)

undefined8 FUN_14922e09e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_80 [2];
  longlong local_70 [2];
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = &PTR_FUN_14bb294c0;
  local_28 = 0;
  local_58 = *(undefined8 *)(param_1 + 8);
  uStack_50 = *(undefined8 *)(param_1 + 0x10);
  local_48 = *(undefined8 *)(param_1 + 0x18);
  local_40 = *(undefined4 *)(param_1 + 0x20);
  uStack_3c = *(undefined4 *)(param_1 + 0x24);
  uStack_38 = *(undefined4 *)(param_1 + 0x28);
  uStack_34 = *(undefined4 *)(param_1 + 0x2c);
  local_30 = *(undefined8 *)(param_1 + 0x30);
  FUN_14922e1d8(param_2);
  FUN_140056680(local_70,&DAT_149e71d50);
  FUN_140056680(local_80,L"Argument0");
  local_88 = 1;
  FUN_1490fb142(param_2,local_80,local_70,1);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_70,&DAT_149e060e8);
  FUN_140056680(local_80,L"Argument1");
  local_88 = 1;
  FUN_1490fb142(param_2,local_80,local_70,1);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922e1d8 FUN_14922e1d8 body=211 status=ok
// SIG undefined FUN_14922e1d8(void)

undefined8 * FUN_14922e1d8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dd654();
  param_1[2] = uVar1;
  uVar1 = FUN_1466b0d6c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 14922e2ac FUN_14922e2ac body=219 status=ok
// SIG undefined FUN_14922e2ac(void)

void FUN_14922e2ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar1 = (undefined8 *)*param_2;
  uVar2 = *puVar1;
  uVar3 = puVar1[0xc];
  uVar4 = puVar1[0x10];
  puVar5 = (undefined8 *)puVar1[0x14];
  puVar6 = (undefined8 *)puVar1[0x18];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_68 = FUN_144828ac0(puVar1 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  local_48 = *puVar6;
  local_70 = &local_48;
  local_40 = *(undefined4 *)(puVar6 + 1);
  local_58 = *puVar5;
  local_78 = &local_58;
  local_50 = *(undefined4 *)(puVar5 + 1);
  FUN_14922e432(*(undefined8 *)(param_1 + 0xc0),uVar2,uVar3,uVar4);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922e388 FUN_14922e388 body=169 status=ok
// SIG undefined FUN_14922e388(void)

void FUN_14922e388(longlong param_1)

{
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x230);
  local_58 = &local_28;
  local_20 = *(undefined4 *)(param_1 + 0x238);
  local_38 = *(undefined8 *)(param_1 + 0x240);
  local_50 = &local_38;
  local_30 = *(undefined4 *)(param_1 + 0x248);
  local_48 = param_1 + 0x250;
  FUN_14922e432(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x218);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14922e432 FUN_14922e432 body=1342 status=ok
// SIG undefined FUN_14922e432(void)

void FUN_14922e432(longlong param_1,undefined8 *param_2,double *param_3,double *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_288 [32];
  undefined1 local_268;
  undefined1 local_260;
  undefined1 local_258;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  undefined1 local_228 [96];
  undefined1 local_1c8 [8];
  undefined8 *local_1c0;
  undefined8 local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined2 local_140;
  undefined1 local_13e;
  undefined8 local_138 [12];
  undefined8 local_d8 [13];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if ((int)param_7[1] != (int)param_5[1]) {
    iVar9 = *(int *)((longlong)param_7 + 0xc);
    FUN_1474f9a9f(*param_7);
    *(undefined4 *)(param_7 + 1) = 0;
    if ((iVar9 < 0) && (*(int *)((longlong)param_7 + 0xc) != 0)) {
      FUN_1474ff430(param_7,0);
    }
    lVar5 = *(longlong *)(param_1 + 0x1b0);
    if (lVar5 != 0) {
      local_228[0] = 1;
      local_228._4_8_ = *param_2;
      iVar9 = FUN_140813180(lVar5);
      if ((iVar9 != -1) && (lVar12 = param_5[1], 0 < (longlong)(int)lVar12)) {
        local_248 = 0;
        FUN_14486750c(lVar5,local_d8);
        local_240 = (longlong)(int)lVar12 * 0x90;
        do {
          local_230 = *param_5;
          iVar9 = FUN_14922e972(param_7);
          local_238 = (longlong)iVar9 * 0xe0 + *param_7;
          FUN_146911540(&local_148);
          local_1c8[0] = 1;
          local_1c0 = (undefined8 *)FUN_14001cc68(0x70,0x10);
          lVar5 = local_238;
          *(undefined2 *)(local_1c0 + 1) = local_140;
          *(undefined1 *)((longlong)local_1c0 + 10) = local_13e;
          *local_1c0 = &PTR_FUN_149ebb2c0;
          puVar13 = local_138;
          puVar14 = local_1c0 + 2;
          for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          FUN_1469119d2(local_238,local_1c8);
          if (local_1c0 != (undefined8 *)0x0) {
            (**(code **)*local_1c0)(local_1c0,1);
          }
          *(undefined1 *)(lVar5 + 0x14) = 0;
          *(undefined4 *)(lVar5 + 0x10) = *(undefined4 *)(local_230 + local_248);
          local_248 = local_248 + 0x90;
        } while (local_240 != local_248);
      }
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if (lVar5 != 0) {
    local_154 = CONCAT31(local_154._1_3_,1);
    uStack_150 = (undefined4)*param_2;
    uStack_14c = (undefined4)((ulonglong)*param_2 >> 0x20);
    iVar9 = FUN_140813180(lVar5);
    if ((iVar9 != -1) && (0 < (int)param_5[1])) {
      if (0 < (int)param_7[1]) {
        lVar12 = 0;
        lVar15 = 0;
        lVar16 = 0;
        do {
          dVar1 = *param_3;
          dVar2 = param_3[1];
          dVar3 = param_3[2];
          dVar6 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
          if (((dVar6 != 1.0) || (dVar17 = dVar2, dVar18 = dVar3, dVar7 = dVar1, NAN(dVar6))) &&
             (dVar17 = DAT_14c8464e8, dVar18 = DAT_14c8464f0, dVar7 = DAT_14c8464e0,
             9.99999993922529e-09 <= dVar6)) {
            dVar6 = 1.0 / SQRT(dVar6);
            dVar17 = dVar2 * dVar6;
            dVar18 = dVar3 * dVar6;
            dVar7 = dVar1 * dVar6;
          }
          lVar11 = *(longlong *)(*param_7 + 8 + lVar12);
          *(double *)(lVar11 + 0x10) = dVar7;
          *(double *)(lVar11 + 0x18) = dVar17;
          *(double *)(lVar11 + 0x20) = dVar18;
          *(undefined1 *)(lVar11 + 0x28) = 1;
          if (lVar16 < (int)param_6[1]) {
            dVar1 = *param_4;
            dVar2 = param_4[1];
            dVar3 = param_4[2];
            dVar6 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
            if (((dVar6 != 1.0) || (dVar17 = dVar2, dVar18 = dVar3, dVar7 = dVar1, NAN(dVar6))) &&
               (dVar17 = DAT_14c8464e8, dVar18 = DAT_14c8464f0, dVar7 = DAT_14c8464e0,
               9.99999993922529e-09 <= dVar6)) {
              dVar6 = 1.0 / SQRT(dVar6);
              dVar17 = dVar2 * dVar6;
              dVar18 = dVar3 * dVar6;
              dVar7 = dVar1 * dVar6;
            }
            *(double *)(lVar11 + 0x30) = dVar7;
            *(double *)(lVar11 + 0x38) = dVar17;
            *(double *)(lVar11 + 0x40) = dVar18;
            *(undefined1 *)(lVar11 + 0x48) = 1;
            *(bool *)(lVar11 + 0x50) =
                 0.0 < SQRT(param_4[2] * param_4[2] + *param_4 * *param_4 + param_4[1] * param_4[1])
            ;
            puVar13 = (undefined8 *)(*param_6 + 0x30 + lVar15);
            uVar8 = puVar13[1];
            uVar4 = *(undefined8 *)(*param_6 + 0x40 + lVar15);
            *(undefined8 *)(lVar11 + 0x58) = *puVar13;
            *(undefined8 *)(lVar11 + 0x60) = uVar8;
            *(undefined8 *)(lVar11 + 0x68) = uVar4;
          }
          puVar13 = (undefined8 *)(*param_5 + lVar15 + 0x10);
          puVar14 = (undefined8 *)(*param_7 + 0x80 + lVar12);
          for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
            *puVar14 = *puVar13;
            puVar13 = puVar13 + 1;
            puVar14 = puVar14 + 1;
          }
          *(undefined4 *)(*param_7 + 0x10 + lVar12) = *(undefined4 *)(*param_5 + lVar15);
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x90;
          lVar12 = lVar12 + 0xe0;
        } while (lVar16 < (int)param_7[1]);
      }
      puVar13 = &DAT_14c846480;
      puVar14 = local_d8;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      local_160 = CONCAT44(uStack_150,local_154);
      local_158 = uStack_14c;
      FUN_1408130c0(lVar5,&local_148);
      iVar10 = FUN_140813180(lVar5,&local_148);
      if (iVar10 != -1) {
        FUN_14486750c(lVar5,local_d8,iVar10,0);
      }
      FUN_14486750c(lVar5,local_1c8,iVar9,0);
      FUN_14690aedf(local_228,local_1c8,local_d8,param_7);
      puVar13 = (undefined8 *)local_228;
      puVar14 = &local_148;
      for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
        *puVar14 = *puVar13;
        puVar13 = puVar13 + 1;
        puVar14 = puVar14 + 1;
      }
      local_258 = 0;
      local_260 = 0;
      local_268 = 1;
      FUN_144831e8e(lVar5,iVar9,&local_148,0);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14922e972 FUN_14922e972 body=58 status=ok
// SIG undefined FUN_14922e972(void)

int FUN_14922e972(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1474ff4a0(param_1,iVar1);
  }
  FUN_1492d063d((longlong)iVar1 * 0xe0 + *param_1);
  return iVar1;
}



// FUNCTION 14922e9ac FUN_14922e9ac body=25 status=ok
// SIG undefined FUN_14922e9ac(void)

undefined8 FUN_14922e9ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922e9c6 FUN_14922e9c6 body=89 status=ok
// SIG undefined FUN_14922e9c6(void)

void FUN_14922e9c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14922ea8e(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc],*(undefined1 *)puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14922ea20 FUN_14922ea20 body=109 status=ok
// SIG undefined FUN_14922ea20(void)

void FUN_14922ea20(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14922ea8e(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x200,param_1 + 0x260,
                *(undefined1 *)(param_1 + 0x269),*(undefined1 *)(param_1 + 0x26a),param_1 + 0x270,
                param_1 + 0x2d0);
  return;
}



// FUNCTION 14922ea8e FUN_14922ea8e body=5432 status=ok
// SIG undefined FUN_14922ea8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14922ea8e(longlong param_1,undefined8 *param_2,undefined8 *param_3,char *param_4,
                  char param_5,byte param_6,double *param_7,undefined8 *param_8)

{
  longlong lVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  ulonglong *puVar10;
  longlong lVar11;
  double *pdVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  undefined1 auVar24 [16];
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar30 [16];
  double dVar34;
  double dVar35;
  double dVar40;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auStack_438 [32];
  undefined1 local_418;
  undefined1 local_410;
  undefined1 local_408;
  undefined1 local_3f8 [16];
  double local_3e8;
  double dStack_3e0;
  undefined1 local_3d8 [16];
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double dStack_3b0;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double dStack_390;
  double local_388;
  double dStack_380;
  undefined1 local_378 [16];
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  undefined8 local_2f8;
  undefined4 local_2f0;
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined4 local_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_438;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 == 0) goto LAB_14922eb47;
  local_284 = CONCAT31(local_284._1_3_,1);
  uStack_280 = (undefined4)*param_2;
  uStack_27c = (undefined4)((ulonglong)*param_2 >> 0x20);
  iVar6 = FUN_140813180(lVar1,&local_284);
  if (iVar6 == -1) goto LAB_14922eb47;
  dVar35 = (double)param_3[4];
  if (*param_4 == '\0') {
    dVar35 = DAT_14c8464e0;
  }
  local_148._0_8_ = param_3[2];
  local_148._8_8_ = param_3[3];
  dVar40 = (double)param_3[5];
  if (param_4[1] == '\0') {
    dVar40 = DAT_14c8464e8;
  }
  dVar43 = (double)param_3[8];
  dVar3 = (double)param_3[9];
  puVar10 = &DAT_14c8464f0;
  if (param_4[2] != '\0') {
    puVar10 = param_3 + 6;
  }
  uVar13 = *puVar10;
  dVar29 = (double)param_3[10];
  local_158._0_4_ = (undefined4)*param_3;
  local_158._4_4_ = (undefined4)((ulonglong)*param_3 >> 0x20);
  uStack_150._0_4_ = (undefined4)param_3[1];
  uStack_150._4_4_ = (undefined4)((ulonglong)param_3[1] >> 0x20);
  FUN_14690e3f2(param_4 + 3,&local_158,&DAT_14c8463d0);
  uVar5 = local_148._8_8_;
  uVar4 = local_148._0_8_;
  if (param_4[6] == '\0') {
    dVar43 = DAT_14c846510;
  }
  if (param_4[7] == '\0') {
    dVar3 = DAT_14c846518;
  }
  if (param_4[8] == '\0') {
    dVar29 = DAT_14c846520;
  }
  dVar33 = (double)CONCAT44(local_158._4_4_,(undefined4)local_158);
  dVar51 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150);
  uVar2 = *param_8;
  local_2f8 = CONCAT44(uStack_280,local_284);
  local_2f0 = uStack_27c;
  FUN_1408130c0(lVar1,&local_1d8);
  local_3f8._8_8_ = 0;
  local_3f8._0_8_ = uVar13;
  if (param_6 == 3) {
    local_158._0_4_ = CONCAT31(local_158._1_3_,1);
    local_158._4_4_ = (undefined4)uVar2;
    uStack_150._0_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
LAB_14922ed0c:
    uVar7 = FUN_140813180(lVar1);
    lVar11 = lVar1;
    uVar8 = FUN_14486750c(lVar1,local_2e8,uVar7,0);
    uVar7 = (undefined4)lVar11;
  }
  else {
    uVar8 = (uint)param_6;
    if (param_6 != 2) {
      if (param_6 == 0) {
        uStack_150._0_4_ = dStack_1d0._0_4_;
        local_158._0_4_ = SUB84(local_1d8,0);
        local_158._4_4_ = (undefined4)((ulonglong)local_1d8 >> 0x20);
        goto LAB_14922ed0c;
      }
      param_7 = (double *)&DAT_14c846480;
    }
    pdVar12 = local_2e8;
    for (lVar11 = 0xc; uVar7 = 0, lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar12 = *param_7;
      param_7 = param_7 + 1;
      pdVar12 = pdVar12 + 1;
    }
  }
  auVar52 = _DAT_149934d80;
  auVar49._8_8_ = 0;
  auVar49._0_8_ = dVar29;
  if (param_5 == '\0') {
    dVar27 = local_2a8._0_8_;
    dVar42 = local_2a8._8_8_;
    dVar32 = local_298._0_8_;
    dVar34 = local_298._8_8_;
    auVar15._8_8_ = dVar3;
    auVar15._0_8_ = dVar43;
    auVar49 = minpd(auVar15,local_2a8);
    auVar37._8_8_ = 0;
    auVar37._0_8_ = dVar29;
    auVar15 = minpd(auVar37,local_298);
    auVar46._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
    auVar46._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
    iVar9 = movmskpd(uVar8,auVar46);
    auVar38._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar38._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    uVar8 = movmskpd(uVar7,auVar38);
    if ((uVar8 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar31 = dVar51 * local_2e8[2] * -1.0 +
               (double)uVar4 * local_2e8[1] +
               (double)uVar5 * local_2e8[0] * 1.0 + dVar33 * local_2e8[3];
      dVar45 = dVar33 * local_2e8[2] * 1.0 +
               (double)uVar5 * local_2e8[1] +
               (double)uVar4 * local_2e8[0] * -1.0 + dVar51 * local_2e8[3];
      local_148._0_8_ =
           (double)uVar5 * local_2e8[2] * 1.0 +
           ((local_2e8[0] * dVar51 * 1.0 + (double)uVar4 * local_2e8[3]) - dVar33 * local_2e8[1]);
      local_148._8_8_ =
           (double)uVar4 * local_2e8[2] * -1.0 +
           ((local_2e8[0] * dVar33 * -1.0 + (double)uVar5 * local_2e8[3]) - dVar51 * local_2e8[1]);
      dVar35 = dVar35 * dVar27;
      dVar40 = dVar40 * dVar42;
      dVar25 = (double)local_3f8._0_8_ * dVar32;
      dVar28 = (double)local_3f8._8_8_ * dVar34;
      dVar23 = dVar40 * local_2e8[0] - dVar35 * local_2e8[1];
      dVar26 = dVar25 * local_2e8[1] - dVar40 * local_2e8[2];
      dVar33 = dVar35 * local_2e8[2] - dVar25 * local_2e8[0];
      dVar51 = dVar28 * local_2e8[3] - dVar28 * local_2e8[3];
      dVar26 = dVar26 + dVar26;
      dVar33 = dVar33 + dVar33;
      dVar23 = dVar23 + dVar23;
      dVar51 = dVar51 + dVar51;
      local_f8 = (dVar23 * local_2e8[1] - local_2e8[2] * dVar33) + local_2e8[3] * dVar26 + dVar35 +
                 local_2c8;
      dStack_f0 = (dVar26 * local_2e8[2] - dVar23 * local_2e8[0]) + local_2e8[3] * dVar33 + dVar40 +
                  dStack_2c0;
      local_e8 = (dVar33 * local_2e8[0] - local_2e8[1] * dVar26) + local_2e8[3] * dVar23 + dVar25 +
                 local_2b8;
      dStack_120 = (dVar51 * local_2e8[3] - dVar51 * local_2e8[3]) + local_2e8[3] * dVar51 + dVar28
                   + dStack_2b0;
    }
    else {
      dVar25 = local_2e8[1] + local_2e8[1];
      dVar28 = local_2e8[2] + local_2e8[2];
      dVar45 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
      dVar31 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
      local_3d8._8_8_ = dVar34 * 0.0;
      local_3d8._0_8_ = dVar29 * dVar32;
      local_188 = (1.0 - (dVar45 + local_2e8[1] * dVar25)) * dVar32;
      local_198 = (dVar25 * local_2e8[3] + local_2e8[0] * dVar28) * dVar32;
      local_1b8 = (dVar25 * local_2e8[0] - dVar28 * local_2e8[3]) * dVar42;
      dStack_190 = (dVar28 * local_2e8[1] - dVar31) * dVar32;
      local_1d8 = ((double)DAT_149934d80 - (local_2e8[2] * dVar28 + local_2e8[1] * dVar25)) * dVar27
      ;
      dStack_1b0 = (DAT_149934d80._8_8_ - (local_2e8[2] * dVar28 + dVar45)) * dVar42;
      dStack_1d0 = (dVar25 * local_2e8[0] + dVar28 * local_2e8[3]) * dVar27;
      local_1a8 = (dVar28 * local_2e8[1] + dVar31) * dVar42;
      local_1c8 = (local_2e8[0] * dVar28 - dVar25 * local_2e8[3]) * dVar27;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2c8;
      dStack_170 = dStack_2c0;
      local_168 = local_2b8;
      uStack_160 = 0x3ff0000000000000;
      dVar25 = dVar51 + dVar51;
      dVar31 = (double)uVar4 + (double)uVar4;
      dVar28 = dVar33 * (dVar33 + dVar33);
      local_208 = (1.0 - (dVar28 + dVar51 * dVar25)) * dVar29;
      dVar45 = (dVar33 + dVar33) * (double)uVar5;
      local_218 = (dVar25 * (double)uVar5 + dVar33 * dVar31) * dVar29;
      local_238 = (dVar25 * dVar33 - dVar31 * (double)uVar5) * dVar3;
      dStack_210 = (dVar31 * dVar51 - dVar45) * dVar29;
      local_258 = ((double)DAT_149934d80 - ((double)uVar4 * dVar31 + dVar51 * dVar25)) * dVar43;
      dStack_230 = (DAT_149934d80._8_8_ - ((double)uVar4 * dVar31 + dVar28)) * dVar3;
      dStack_250 = (dVar25 * dVar33 + dVar31 * (double)uVar5) * dVar43;
      local_228 = (dVar31 * dVar51 + dVar45) * dVar3;
      local_248 = (dVar33 * dVar31 - dVar25 * (double)uVar5) * dVar43;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1e8 = (double)local_3f8._0_8_;
      uStack_1e0 = 0x3ff0000000000000;
      local_3e8 = dVar35;
      dStack_3e0 = dVar40;
      local_1f8 = dVar35;
      dStack_1f0 = dVar40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar21._8_8_ = -(ulonglong)(0.0 <= dVar3 * dVar42);
      auVar21._0_8_ = -(ulonglong)(0.0 <= dVar43 * dVar27);
      auVar49 = blendvpd(_DAT_149936790,auVar52,auVar21);
      uVar13 = -(ulonglong)(0.0 <= dVar29 * dVar32);
      dVar35 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar40 = auVar49._0_8_;
      uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150) * dVar40;
      local_158 = (double)CONCAT44(local_158._4_4_,(undefined4)local_158) * dVar40;
      local_148._0_8_ = (double)local_148._0_8_ * dVar40;
      dVar40 = auVar49._8_8_;
      local_128 = local_128 * dVar40;
      dStack_130 = dStack_130 * dVar40;
      local_138 = dVar40 * local_138;
      local_108 = local_108 * dVar35;
      dStack_110 = dStack_110 * dVar35;
      local_118 = dVar35 * local_118;
      FUN_14481fd10(&local_358,&local_158);
      dVar35 = local_348 * local_348 + local_358 * local_358;
      dVar40 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
      auVar39._0_8_ = dVar35 + dVar40;
      auVar39._8_8_ = dVar35 + dVar40;
      auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
      auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
      auVar49 = sqrtpd(auVar39,auVar39);
      auVar52 = divpd(auVar52,auVar49);
      auVar50._0_8_ = auVar52._0_8_ * local_348;
      auVar50._8_8_ = auVar52._8_8_ * dStack_340;
      dVar31 = (double)((ulonglong)(local_358 * auVar52._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
      dVar45 = (double)((ulonglong)(dStack_350 * auVar52._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
      local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar22);
      dStack_120 = 0.0;
    }
    dStack_100 = dVar34 * 0.0;
    local_108 = dVar29 * dVar32;
    dStack_110 = dVar3 * dVar42;
    local_118 = dVar43 * dVar27;
    local_158._0_4_ = SUB84(dVar31,0);
    local_158._4_4_ = (undefined4)((ulonglong)dVar31 >> 0x20);
    uStack_150._0_4_ = SUB84(dVar45,0);
    uStack_150._4_4_ = (undefined4)((ulonglong)dVar45 >> 0x20);
    local_138 = local_f8;
    dStack_130 = dStack_f0;
    local_128 = local_e8;
  }
  else {
    pdVar12 = &local_358;
    FUN_14486750c(lVar1,pdVar12,iVar6,0);
    uVar7 = FUN_1449437a2(pdVar12,&local_3b8,local_2e8);
    auVar52 = _DAT_149934d80;
    dVar27 = local_378._0_8_;
    dVar42 = local_378._8_8_;
    dVar32 = local_368._0_8_;
    dVar34 = local_368._8_8_;
    auVar14._8_8_ = dVar3;
    auVar14._0_8_ = dVar43;
    auVar15 = minpd(auVar14,local_378);
    auVar49 = minpd(auVar49,local_368);
    auVar16._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar16._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    iVar9 = movmskpd(uVar7,auVar16);
    auVar24._8_8_ = -(ulonglong)(auVar49._8_8_ < 0.0);
    auVar24._0_8_ = -(ulonglong)(auVar49._0_8_ < 0.0);
    uVar8 = movmskpd((int)pdVar12,auVar24);
    if ((uVar8 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar23 = dVar51 * local_3a8 * -1.0 +
               (double)uVar4 * dStack_3b0 + (double)uVar5 * local_3b8 * 1.0 + dVar33 * dStack_3a0;
      dVar26 = dVar33 * local_3a8 * 1.0 +
               (double)uVar5 * dStack_3b0 + (double)uVar4 * local_3b8 * -1.0 + dVar51 * dStack_3a0;
      auVar52._0_8_ =
           (double)uVar5 * local_3a8 * 1.0 +
           ((local_3b8 * dVar51 * 1.0 + (double)uVar4 * dStack_3a0) - dVar33 * dStack_3b0);
      auVar52._8_8_ =
           (double)uVar4 * local_3a8 * -1.0 +
           ((local_3b8 * dVar33 * -1.0 + (double)uVar5 * dStack_3a0) - dVar51 * dStack_3b0);
      dVar35 = dVar35 * dVar27;
      dVar40 = dVar40 * dVar42;
      dVar25 = (double)local_3f8._0_8_ * dVar32;
      dVar28 = (double)local_3f8._8_8_ * dVar34;
      dVar31 = dVar40 * local_3b8 - dVar35 * dStack_3b0;
      dVar45 = dVar25 * dStack_3b0 - dVar40 * local_3a8;
      dVar33 = dVar35 * local_3a8 - dVar25 * local_3b8;
      dVar51 = dVar28 * dStack_3a0 - dVar28 * dStack_3a0;
      dVar45 = dVar45 + dVar45;
      dVar33 = dVar33 + dVar33;
      dVar31 = dVar31 + dVar31;
      dVar51 = dVar51 + dVar51;
      auVar44._0_8_ = dVar43 * dVar27;
      auVar44._8_8_ = dVar3 * dVar42;
      local_398 = (dVar31 * dStack_3b0 - local_3a8 * dVar33) + dStack_3a0 * dVar45 + dVar35 +
                  local_398;
      dStack_390 = (dVar45 * local_3a8 - dVar31 * local_3b8) + dStack_3a0 * dVar33 + dVar40 +
                   dStack_390;
      local_388 = (dVar33 * local_3b8 - dStack_3b0 * dVar45) + dStack_3a0 * dVar31 + dVar25 +
                  local_388;
      dStack_380 = (dVar51 * dStack_3a0 - dVar51 * dStack_3a0) + dStack_3a0 * dVar51 + dVar28 +
                   dStack_380;
      auVar54._8_8_ = dVar34 * 0.0;
      auVar54._0_8_ = dVar29 * dVar32;
      uVar7 = 0;
    }
    else {
      dVar25 = dStack_3b0 + dStack_3b0;
      dVar28 = local_3a8 + local_3a8;
      dVar45 = local_3b8 * (local_3b8 + local_3b8);
      dVar31 = (local_3b8 + local_3b8) * dStack_3a0;
      local_3d8._8_8_ = dVar34 * 0.0;
      local_3d8._0_8_ = dVar29 * dVar32;
      local_188 = (1.0 - (dVar45 + dStack_3b0 * dVar25)) * dVar32;
      local_198 = (dVar25 * dStack_3a0 + local_3b8 * dVar28) * dVar32;
      local_1b8 = (dVar25 * local_3b8 - dVar28 * dStack_3a0) * dVar42;
      dStack_190 = (dVar28 * dStack_3b0 - dVar31) * dVar32;
      local_1d8 = ((double)DAT_149934d80 - (local_3a8 * dVar28 + dStack_3b0 * dVar25)) * dVar27;
      dStack_1b0 = (DAT_149934d80._8_8_ - (local_3a8 * dVar28 + dVar45)) * dVar42;
      dStack_1d0 = (dVar25 * local_3b8 + dVar28 * dStack_3a0) * dVar27;
      local_1a8 = (dVar28 * dStack_3b0 + dVar31) * dVar42;
      local_1c8 = (local_3b8 * dVar28 - dVar25 * dStack_3a0) * dVar27;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_398;
      dStack_170 = dStack_390;
      local_168 = local_388;
      uStack_160 = 0x3ff0000000000000;
      dVar32 = dVar51 + dVar51;
      dVar25 = (double)uVar4 + (double)uVar4;
      dVar34 = dVar33 * (dVar33 + dVar33);
      local_208 = (1.0 - (dVar34 + dVar51 * dVar32)) * dVar29;
      dVar28 = (dVar33 + dVar33) * (double)uVar5;
      local_218 = (dVar32 * (double)uVar5 + dVar33 * dVar25) * dVar29;
      local_238 = (dVar32 * dVar33 - dVar25 * (double)uVar5) * dVar3;
      dStack_210 = (dVar25 * dVar51 - dVar28) * dVar29;
      local_258 = ((double)DAT_149934d80 - ((double)uVar4 * dVar25 + dVar51 * dVar32)) * dVar43;
      dStack_230 = (DAT_149934d80._8_8_ - ((double)uVar4 * dVar25 + dVar34)) * dVar3;
      dStack_250 = (dVar32 * dVar33 + dVar25 * (double)uVar5) * dVar43;
      local_228 = (dVar25 * dVar51 + dVar28) * dVar3;
      local_248 = (dVar33 * dVar25 - dVar32 * (double)uVar5) * dVar43;
      auVar44._8_8_ = dVar3 * dVar42;
      auVar44._0_8_ = dVar43 * dVar27;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      local_1e8 = (double)local_3f8._0_8_;
      uStack_1e0 = 0x3ff0000000000000;
      local_3e8 = dVar35;
      dStack_3e0 = dVar40;
      local_1f8 = dVar35;
      dStack_1f0 = dVar40;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar54 = local_3d8;
      auVar17._8_8_ = -(ulonglong)(0.0 <= dVar3 * dVar42);
      auVar17._0_8_ = -(ulonglong)(0.0 <= dVar43 * dVar27);
      auVar49 = blendvpd(_DAT_149936790,auVar52,auVar17);
      uVar13 = -(ulonglong)(0.0 <= local_3d8._0_8_);
      dVar35 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar40 = auVar49._0_8_;
      local_148._0_8_ = (double)local_148._0_8_ * dVar40;
      uStack_150 = (double)CONCAT44(uStack_150._4_4_,(undefined4)uStack_150) * dVar40;
      local_158 = (double)CONCAT44(local_158._4_4_,(undefined4)local_158) * dVar40;
      dVar40 = auVar49._8_8_;
      local_128 = local_128 * dVar40;
      dStack_130 = dStack_130 * dVar40;
      local_138 = dVar40 * local_138;
      local_108 = local_108 * dVar35;
      dStack_110 = dStack_110 * dVar35;
      local_118 = dVar35 * local_118;
      pdVar12 = &local_278;
      iVar9 = FUN_14481fd10(pdVar12,&local_158);
      uVar7 = SUB84(pdVar12,0);
      dVar35 = local_268 * local_268 + local_278 * local_278;
      dVar40 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
      auVar36._0_8_ = dVar35 + dVar40;
      auVar36._8_8_ = dVar35 + dVar40;
      auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_);
      auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_);
      auVar49 = sqrtpd(auVar36,auVar36);
      auVar52 = divpd(auVar52,auVar49);
      auVar53._0_8_ = auVar52._0_8_ * local_268;
      auVar53._8_8_ = auVar52._8_8_ * dStack_260;
      dVar23 = (double)((ulonglong)(local_278 * auVar52._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar36._0_8_));
      dVar26 = (double)((ulonglong)(dStack_270 * auVar52._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar36._8_8_));
      auVar52 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar18);
      dStack_380 = 0.0;
      local_398 = local_f8;
      dStack_390 = dStack_f0;
      local_388 = local_e8;
    }
    auVar49 = _DAT_149934d80;
    dVar35 = local_2a8._0_8_;
    dVar3 = local_2a8._8_8_;
    dVar40 = local_298._0_8_;
    dVar43 = local_298._8_8_;
    auVar15 = minpd(auVar44,local_2a8);
    dVar51 = auVar54._0_8_;
    auVar46 = minpd(auVar54,local_298);
    auVar41._8_8_ = -(ulonglong)(auVar15._8_8_ < 0.0);
    auVar41._0_8_ = -(ulonglong)(auVar15._0_8_ < 0.0);
    iVar9 = movmskpd(iVar9,auVar41);
    auVar47._8_8_ = -(ulonglong)(auVar46._8_8_ < 0.0);
    auVar47._0_8_ = -(ulonglong)(auVar46._0_8_ < 0.0);
    uVar8 = movmskpd(uVar7,auVar47);
    dVar29 = auVar52._0_8_;
    dVar33 = auVar52._8_8_;
    local_3f8._0_8_ = auVar44._0_8_;
    uVar4 = local_3f8._0_8_;
    local_3f8._8_8_ = auVar44._8_8_;
    uVar5 = local_3f8._8_8_;
    local_3f8 = auVar44;
    if ((uVar8 & 0x3fffffff) == 0 && iVar9 == 0) {
      dVar42 = dVar26 * local_2e8[2] * -1.0 +
               dVar29 * local_2e8[1] + dVar33 * local_2e8[0] * 1.0 + dVar23 * local_2e8[3];
      dVar34 = dVar23 * local_2e8[2] * 1.0 +
               dVar33 * local_2e8[1] + dVar29 * local_2e8[0] * -1.0 + dVar26 * local_2e8[3];
      local_148._0_8_ =
           dVar33 * local_2e8[2] * 1.0 +
           ((local_2e8[0] * dVar26 * 1.0 + dVar29 * local_2e8[3]) - dVar23 * local_2e8[1]);
      local_148._8_8_ =
           dVar29 * local_2e8[2] * -1.0 +
           ((local_2e8[0] * dVar23 * -1.0 + dVar33 * local_2e8[3]) - dVar26 * local_2e8[1]);
      local_398 = local_398 * dVar35;
      dStack_390 = dStack_390 * dVar3;
      local_388 = local_388 * dVar40;
      dStack_380 = dStack_380 * dVar43;
      dVar29 = dStack_390 * local_2e8[0] - local_398 * local_2e8[1];
      dVar27 = local_388 * local_2e8[1] - dStack_390 * local_2e8[2];
      dVar32 = local_398 * local_2e8[2] - local_388 * local_2e8[0];
      dVar33 = dStack_380 * local_2e8[3] - dStack_380 * local_2e8[3];
      dVar27 = dVar27 + dVar27;
      dVar32 = dVar32 + dVar32;
      dVar29 = dVar29 + dVar29;
      dVar33 = dVar33 + dVar33;
      local_f8 = (dVar29 * local_2e8[1] - local_2e8[2] * dVar32) + local_2e8[3] * dVar27 + local_398
                 + local_2c8;
      dStack_f0 = (dVar27 * local_2e8[2] - dVar29 * local_2e8[0]) +
                  local_2e8[3] * dVar32 + dStack_390 + dStack_2c0;
      local_e8 = (dVar32 * local_2e8[0] - local_2e8[1] * dVar27) + local_2e8[3] * dVar29 + local_388
                 + local_2b8;
      dStack_120 = (dVar33 * local_2e8[3] - dVar33 * local_2e8[3]) +
                   local_2e8[3] * dVar33 + dStack_380 + dStack_2b0;
    }
    else {
      dVar27 = local_2e8[1] + local_2e8[1];
      dVar32 = local_2e8[2] + local_2e8[2];
      dVar28 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
      dVar42 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
      dStack_3c0 = auVar54._8_8_ * dVar43;
      local_188 = (1.0 - (dVar28 + local_2e8[1] * dVar27)) * dVar40;
      local_198 = (dVar27 * local_2e8[3] + local_2e8[0] * dVar32) * dVar40;
      local_1b8 = (dVar27 * local_2e8[0] - dVar32 * local_2e8[3]) * dVar3;
      dStack_190 = (dVar32 * local_2e8[1] - dVar42) * dVar40;
      dVar34 = (double)local_3f8._0_8_ * dVar35;
      dVar25 = (double)local_3f8._8_8_ * dVar3;
      local_1d8 = ((double)DAT_149934d80 - (local_2e8[2] * dVar32 + local_2e8[1] * dVar27)) * dVar35
      ;
      dStack_1b0 = (DAT_149934d80._8_8_ - (local_2e8[2] * dVar32 + dVar28)) * dVar3;
      dStack_1d0 = (dVar27 * local_2e8[0] + dVar32 * local_2e8[3]) * dVar35;
      local_1a8 = (dVar32 * local_2e8[1] + dVar42) * dVar3;
      local_1c8 = (local_2e8[0] * dVar32 - dVar27 * local_2e8[3]) * dVar35;
      uStack_1c0 = 0;
      uStack_1a0 = 0;
      uStack_180 = 0;
      local_178 = local_2c8;
      dStack_170 = dStack_2c0;
      local_168 = local_2b8;
      uStack_160 = 0x3ff0000000000000;
      dVar42 = dVar26 + dVar26;
      dVar27 = dVar29 + dVar29;
      dVar28 = dVar23 * (dVar23 + dVar23);
      local_208 = (1.0 - (dVar28 + dVar26 * dVar42)) * dVar51;
      dVar32 = (dVar23 + dVar23) * dVar33;
      local_218 = (dVar23 * dVar27 + dVar42 * dVar33) * dVar51;
      local_238 = (dVar42 * dVar23 - dVar27 * dVar33) * (double)local_3f8._8_8_;
      dStack_210 = (dVar27 * dVar26 - dVar32) * dVar51;
      local_258 = ((double)DAT_149934d80 - (dVar29 * dVar27 + dVar26 * dVar42)) *
                  (double)local_3f8._0_8_;
      dStack_230 = (DAT_149934d80._8_8_ - (dVar29 * dVar27 + dVar28)) * (double)local_3f8._8_8_;
      dStack_250 = (dVar42 * dVar23 + dVar27 * dVar33) * (double)local_3f8._0_8_;
      local_228 = (dVar27 * dVar26 + dVar32) * (double)local_3f8._8_8_;
      local_248 = (dVar23 * dVar27 - dVar42 * dVar33) * (double)local_3f8._0_8_;
      uStack_240 = 0;
      uStack_220 = 0;
      uStack_200 = 0;
      uStack_1e0 = 0x3ff0000000000000;
      local_3e8 = local_388;
      dStack_3e0 = dStack_380;
      local_3d8 = auVar54;
      local_3c8 = dVar51 * dVar40;
      local_1f8 = local_398;
      dStack_1f0 = dStack_390;
      local_1e8 = local_388;
      FUN_1447fea8d(&local_158);
      FUN_144a1c686(&local_158,0x3e45798ee0000000);
      auVar19._8_8_ = -(ulonglong)(0.0 <= dVar25);
      auVar19._0_8_ = -(ulonglong)(0.0 <= dVar34);
      auVar52 = blendvpd(_DAT_149936790,auVar49,auVar19);
      uVar13 = -(ulonglong)(0.0 <= dVar51 * dVar40);
      dVar29 = (double)(~uVar13 & 0xbff0000000000000 | uVar13 & 0x3ff0000000000000);
      dVar33 = auVar52._0_8_;
      uStack_150 = uStack_150 * dVar33;
      local_158 = local_158 * dVar33;
      local_148._0_8_ = (double)local_148._0_8_ * dVar33;
      dVar33 = auVar52._8_8_;
      local_128 = local_128 * dVar33;
      dStack_130 = dStack_130 * dVar33;
      local_138 = dVar33 * local_138;
      local_108 = local_108 * dVar29;
      dStack_110 = dStack_110 * dVar29;
      local_118 = dVar29 * local_118;
      FUN_14481fd10(&local_3b8,&local_158);
      dVar29 = local_3a8 * local_3a8 + local_3b8 * local_3b8;
      dVar33 = dStack_3a0 * dStack_3a0 + dStack_3b0 * dStack_3b0;
      auVar30._0_8_ = dVar29 + dVar33;
      auVar30._8_8_ = dVar29 + dVar33;
      auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
      auVar52 = sqrtpd(auVar30,auVar30);
      auVar52 = divpd(auVar49,auVar52);
      auVar48._0_8_ = auVar52._0_8_ * local_3a8;
      auVar48._8_8_ = auVar52._8_8_ * dStack_3a0;
      dVar42 = (double)((ulonglong)(local_3b8 * auVar52._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
      dVar34 = (double)((ulonglong)(dStack_3b0 * auVar52._8_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
      local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar20);
      dStack_120 = 0.0;
    }
    dStack_110 = (double)uVar5 * dVar3;
    local_118 = (double)uVar4 * dVar35;
    dStack_100 = auVar54._8_8_ * dVar43;
    local_108 = dVar51 * dVar40;
    local_158._0_4_ = SUB84(dVar42,0);
    local_158._4_4_ = (undefined4)((ulonglong)dVar42 >> 0x20);
    uStack_150._0_4_ = SUB84(dVar34,0);
    uStack_150._4_4_ = (undefined4)((ulonglong)dVar34 >> 0x20);
    local_138 = local_f8;
    dStack_130 = dStack_f0;
    local_128 = local_e8;
  }
  local_408 = 0;
  local_410 = 0;
  local_418 = 1;
  FUN_144831e8e(lVar1,iVar6,&local_158,0);
LAB_14922eb47:
  if ((local_d0 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14922ffc8 FUN_14922ffc8 body=25 status=ok
// SIG undefined FUN_14922ffc8(void)

undefined8 FUN_14922ffc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14922ffe2 FUN_14922ffe2 body=83 status=ok
// SIG undefined FUN_14922ffe2(void)

void FUN_14922ffe2(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)*param_2;
  local_18 = *(undefined8 *)puVar1[4];
  local_10 = *(undefined4 *)((undefined8 *)puVar1[4] + 1);
  FUN_1492300be(*puVar1,&local_18,puVar1[8]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149230036 FUN_149230036 body=134 status=ok
// SIG undefined FUN_149230036(void)

void FUN_149230036(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  FUN_1492300be(param_1 + 0x10,&local_28,param_1 + 0x80);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492300be FUN_1492300be body=589 status=ok
// SIG undefined FUN_1492300be(void)

void FUN_1492300be(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  float fVar11;
  undefined1 auStack_c8 [40];
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar10 = (int)param_2[1];
  if (0 < iVar10) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    lVar3 = *param_2;
    fVar11 = 0.0;
    lVar5 = 0x60;
    lVar9 = 0;
    local_a0 = param_3;
    do {
      uVar1 = uStack_80;
      if (1e-05 < *(float *)(lVar3 + lVar5)) {
        lVar7 = (longlong)(int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        if (uStack_80._4_4_ < uVar2) {
          FUN_144a2c682(&local_88,uVar1 & 0xffffffff);
        }
        uVar1 = uStack_90;
        puVar6 = (undefined8 *)(lVar3 + lVar5 + -0x60);
        puVar8 = (undefined8 *)(lVar7 * 0x60 + local_88);
        for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        lVar3 = *param_2;
        lVar7 = (longlong)(int)uStack_90;
        uVar2 = (int)uStack_90 + 1;
        uStack_90 = CONCAT44(uStack_90._4_4_,uVar2);
        if (uStack_90._4_4_ < uVar2) {
          FUN_14475e4ac(&local_98,uVar1 & 0xffffffff);
        }
        *(undefined4 *)(local_98 + lVar7 * 4) = *(undefined4 *)(lVar3 + lVar5);
        lVar3 = *param_2;
        fVar11 = fVar11 + *(float *)(lVar3 + lVar5);
        iVar10 = (int)param_2[1];
      }
      uVar1 = uStack_80;
      param_3 = local_a0;
      lVar9 = lVar9 + 1;
      lVar5 = lVar5 + 0x70;
    } while (lVar9 < iVar10);
    if (0 < (int)uStack_80) {
      if (0 < (int)uStack_90 && 1.0 < fVar11) {
        lVar3 = 0;
        do {
          *(float *)(local_98 + lVar3 * 4) = *(float *)(local_98 + lVar3 * 4) / fVar11;
          lVar3 = lVar3 + 1;
        } while (lVar3 < (int)uStack_90);
      }
      fVar11 = 1.0 - fVar11;
      if (1.0 <= fVar11) {
        fVar11 = 1.0;
      }
      if (fVar11 <= 0.0) {
        fVar11 = 0.0;
      }
      if (1e-05 < fVar11) {
        lVar3 = (longlong)(int)uStack_80;
        uVar2 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar2);
        iVar10 = (int)uStack_90;
        if (uStack_80._4_4_ < uVar2) {
          FUN_144a2c682(&local_88,uVar1 & 0xffffffff);
          iVar10 = (int)uStack_90;
        }
        puVar6 = param_1;
        puVar8 = (undefined8 *)(lVar3 * 0x60 + local_88);
        for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        uStack_90 = CONCAT44(uStack_90._4_4_,iVar10 + 1U);
        if (uStack_90._4_4_ < iVar10 + 1U) {
          FUN_14475e4ac(&local_98,iVar10);
        }
        *(float *)(local_98 + (longlong)iVar10 * 4) = fVar11;
      }
      FUN_1478d1bc0(param_3,&local_88,&local_98);
    }
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    if (local_88 != 0) {
      FUN_1400020a8();
    }
  }
  for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
    *param_3 = *param_1;
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  }
  if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923030c FUN_14923030c body=25 status=ok
// SIG undefined FUN_14923030c(void)

undefined8 FUN_14923030c(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149230326 FUN_149230326 body=75 status=ok
// SIG undefined FUN_149230326(void)

void FUN_149230326(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492303d6(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),puVar1[0xc],
                puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 149230372 FUN_149230372 body=99 status=ok
// SIG undefined FUN_149230372(void)

void FUN_149230372(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492303d6(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1f8),
                *(undefined1 *)(param_1 + 0x1f9),param_1 + 0x200,param_1 + 0x260,param_1 + 0x270);
  return;
}



// FUNCTION 1492303d6 FUN_1492303d6 body=479 status=ok
// SIG undefined FUN_1492303d6(void)

void FUN_1492303d6(longlong param_1,undefined8 *param_2,char param_3,char param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_198 [36];
  undefined1 local_174;
  undefined8 local_170;
  undefined1 local_168 [8];
  undefined4 local_160;
  undefined8 local_108;
  undefined4 local_100;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 local_98 [12];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar4 = *(longlong *)(param_1 + 0x1b0);
  if (lVar4 == 0) goto LAB_14923058b;
  uVar1 = *param_2;
  if (param_3 == '\x01') {
    uVar6 = *param_6;
    local_a4 = 1;
    local_a0 = uVar1;
    FUN_1408130c0(lVar4,local_168);
    if (param_4 == '\x03') {
      local_108._0_4_ = CONCAT31(local_108._1_3_,1);
      local_108._4_4_ = (undefined4)uVar6;
      local_100 = (undefined4)((ulonglong)uVar6 >> 0x20);
LAB_1492304ed:
      uVar2 = FUN_140813180(lVar4);
      uVar6 = 0;
      goto LAB_149230530;
    }
    if (param_4 != '\x02') {
      if (param_4 == '\0') {
        local_100 = local_160;
        local_108._0_4_ = local_168._0_4_;
        local_108._4_4_ = local_168._4_4_;
        goto LAB_1492304ed;
      }
LAB_1492304c5:
      param_5 = &DAT_14c846480;
    }
LAB_1492304cc:
    puVar5 = local_98;
    for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = *param_5;
      param_5 = param_5 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  else {
    uVar6 = *param_6;
    local_174 = 1;
    local_170 = uVar1;
    FUN_1408130c0(lVar4,local_168);
    if (param_4 == '\x03') {
      local_108._0_4_ = CONCAT31(local_108._1_3_,1);
      local_108._4_4_ = (undefined4)uVar6;
      local_100 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      if (param_4 == '\x02') goto LAB_1492304cc;
      if (param_4 != '\0') goto LAB_1492304c5;
      local_100 = local_160;
      local_108._0_4_ = local_168._0_4_;
      local_108._4_4_ = local_168._4_4_;
    }
    uVar2 = FUN_140813180(lVar4);
    uVar6 = 1;
LAB_149230530:
    FUN_14486750c(lVar4,local_98,uVar2,uVar6);
  }
  local_108._0_4_ = CONCAT31(local_108._1_3_,1);
  local_108._4_4_ = (undefined4)uVar1;
  local_100 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uVar2 = FUN_140813180(lVar4);
  FUN_14486750c(lVar4,local_168,uVar2,1);
  FUN_1449437a2(local_168,&local_108,local_98);
  puVar5 = &local_108;
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *param_7 = *puVar5;
    puVar5 = puVar5 + 1;
    param_7 = param_7 + 1;
  }
LAB_14923058b:
  if ((local_38 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492305b6 FUN_1492305b6 body=25 status=ok
// SIG undefined FUN_1492305b6(void)

undefined8 FUN_1492305b6(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492305d0 FUN_1492305d0 body=990 status=ok
// SIG undefined FUN_1492305d0(void)

void FUN_1492305d0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
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
  undefined8 uVar19;
  undefined8 uVar20;
  
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  uVar4 = puVar2[4];
  uVar5 = puVar2[8];
  uVar6 = puVar2[0x10];
  uVar1 = *(undefined4 *)puVar2[0x14];
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar8 = FUN_144828ac0(puVar2 + 0x18,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar9 = FUN_144828ac0(*param_2 + 0xe0,0,
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                        *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar10 = FUN_144828ac0(*param_2 + 0x100,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar11 = FUN_144828ac0(*param_2 + 0x120,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar12 = FUN_144828ac0(*param_2 + 0x140,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar13 = FUN_144828ac0(*param_2 + 0x160,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar14 = FUN_144828ac0(*param_2 + 0x180,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar15 = FUN_144828ac0(*param_2 + 0x1a0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar16 = FUN_144828ac0(*param_2 + 0x1c0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar17 = FUN_144828ac0(*param_2 + 0x1e0,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar18 = FUN_144828ac0(*param_2 + 0x200,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar19 = FUN_144828ac0(*param_2 + 0x220,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  lVar7 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  uVar20 = FUN_144828ac0(*param_2 + 0x240,0,
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar7 * 0x14) +
                         *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar7 * 0x14));
  FUN_149230b08(*(undefined8 *)(param_1 + 0xc0),uVar3,uVar4,uVar5,uVar6,uVar1,uVar8,uVar9,uVar10,
                uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,uVar17,uVar18,uVar19,uVar20);
  return;
}



// FUNCTION 1492309b6 FUN_1492309b6 body=338 status=ok
// SIG undefined FUN_1492309b6(void)

void FUN_1492309b6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))();
  FUN_149230b08(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x200,param_1 + 0x220,
                *(undefined4 *)(param_1 + 0x280),param_1 + 0x290,param_1 + 0x2f0,param_1 + 0x350,
                param_1 + 0x3b0,param_1 + 0x3c0,param_1 + 0x420,param_1 + 0x480,param_1 + 0x4e0,
                param_1 + 0x4e4,param_1 + 0x4e8,param_1 + 0x4ec,param_1 + 0x4f0,param_1 + 0x4f4);
  return;
}



// FUNCTION 149230b08 FUN_149230b08 body=3403 status=ok
// SIG undefined FUN_149230b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149230b08(longlong param_1,undefined8 *param_2,undefined8 *param_3,double param_4,
                  double *param_5,float param_6,undefined1 (*param_7) [16],
                  undefined1 (*param_8) [16],double *param_9,float *param_10,double *param_11,
                  double *param_12,double *param_13,int *param_14,int *param_15,int *param_16,
                  float *param_17,float *param_18,char *param_19)

{
  undefined8 uVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  undefined1 (*pauVar9) [16];
  double *pdVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar19;
  double dVar22;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  undefined4 uVar57;
  double dVar58;
  undefined1 auVar59 [16];
  double dVar60;
  undefined4 uVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  undefined1 auStack_308 [32];
  double *local_2e8;
  double local_2e0;
  double local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  double local_2b8;
  double dStack_2b0;
  longlong local_2a0;
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  double local_238 [4];
  double local_218;
  double dStack_210;
  double local_208;
  double local_1d8 [4];
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined1 local_170 [4];
  undefined8 local_16c;
  undefined1 local_164 [4];
  undefined8 local_160;
  double local_158 [2];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  double local_118;
  double dStack_110;
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  local_2b8 = param_4;
  if (*param_19 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x1b0);
    if (lVar7 != 0) {
      *param_16 = -1;
      *param_15 = -1;
      *param_14 = -1;
      *param_18 = 0.0;
      *param_17 = 0.0;
      local_164[0] = 1;
      local_160 = *param_2;
      local_170[0] = 1;
      local_16c = *param_3;
      iVar3 = FUN_140813180(lVar7,local_164);
      iVar4 = FUN_140813180(lVar7,local_170);
      if (((iVar4 != -1 && iVar3 != -1) && (iVar5 = FUN_1491db798(lVar7,iVar4), iVar5 != -1)) &&
         (iVar6 = FUN_1491db798(lVar7,iVar5), iVar6 == iVar3)) {
        *param_14 = iVar3;
        *param_15 = iVar5;
        *param_16 = iVar4;
        FUN_14486750c(lVar7,local_158,*param_14,1);
        FUN_14486750c(lVar7,local_1d8,*param_15,1);
        FUN_14486750c(lVar7,local_238,*param_16,1);
        *param_17 = (float)SQRT(((double)local_128._0_8_ - local_1a8) *
                                ((double)local_128._0_8_ - local_1a8) +
                                ((double)local_138._0_8_ - local_1b8) *
                                ((double)local_138._0_8_ - local_1b8) +
                                ((double)local_138._8_8_ - dStack_1b0) *
                                ((double)local_138._8_8_ - dStack_1b0));
        *param_18 = (float)SQRT((local_1a8 - local_208) * (local_1a8 - local_208) +
                                (local_1b8 - local_218) * (local_1b8 - local_218) +
                                (dStack_1b0 - dStack_210) * (dStack_1b0 - dStack_210));
        pdVar8 = local_158;
        pauVar9 = param_7;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(double *)*pauVar9 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
        }
        pdVar8 = local_158;
        pdVar10 = param_11;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar10 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        }
        pdVar8 = local_1d8;
        pauVar9 = param_8;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *(double *)*pauVar9 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pauVar9 = (undefined1 (*) [16])(*pauVar9 + 8);
        }
        pdVar8 = local_1d8;
        pdVar10 = param_12;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar10 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        }
        pdVar8 = local_238;
        pdVar10 = param_9;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar10 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        }
        pdVar8 = local_238;
        pdVar10 = param_13;
        for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
          *pdVar10 = *pdVar8;
          pdVar8 = pdVar8 + 1;
          pdVar10 = pdVar10 + 1;
        }
      }
    }
    *param_19 = '\x01';
  }
  iVar3 = *param_14;
  if (((iVar3 == -1) || (*param_15 == -1)) || (*param_16 == -1)) goto LAB_1492316e0;
  if (ABS(param_6) <= 1e-08) {
    local_158[0] = *(double *)*param_7;
    local_158[1] = *(double *)(*param_7 + 8);
    local_138._0_8_ = *(undefined8 *)param_7[2];
    local_138._8_8_ = *(undefined8 *)(param_7[2] + 8);
    local_128._0_8_ = *(undefined8 *)param_7[3];
    local_128._8_8_ = *(undefined8 *)(param_7[3] + 8);
    local_118 = *(double *)param_7[4];
    dStack_110 = *(double *)(param_7[4] + 8);
    local_108._0_8_ = *(undefined8 *)param_7[5];
    local_108._8_8_ = *(undefined8 *)(param_7[5] + 8);
    local_2b8 = *(double *)*param_8;
    dStack_2b0 = *(double *)(*param_8 + 8);
    local_298 = param_8[1];
    auVar33 = param_8[2];
    dVar30 = *(double *)param_8[3];
    dVar23 = *(double *)(param_8[3] + 8);
    dVar24 = *(double *)param_8[4];
    dVar41 = *(double *)(param_8[4] + 8);
    dVar15 = *(double *)param_8[5];
    dVar18 = *(double *)(param_8[5] + 8);
    dVar58 = *param_9;
    dVar60 = param_9[1];
    dVar19 = param_9[4];
    dVar22 = param_9[5];
    auVar17 = *(undefined1 (*) [16])(param_9 + 6);
    dVar46 = param_9[8];
    dVar49 = param_9[9];
    auVar40 = *(undefined1 (*) [16])(param_9 + 10);
    uVar61 = *(undefined4 *)(param_9 + 2);
    uVar62 = *(undefined4 *)((longlong)param_9 + 0x14);
    uVar63 = *(undefined4 *)(param_9 + 3);
    uVar64 = *(undefined4 *)((longlong)param_9 + 0x1c);
    local_148 = *(double *)param_7[1];
    uStack_140 = *(double *)(param_7[1] + 8);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    local_2a0 = param_1;
    if (ABS(param_6 + -1.0) <= 1e-08) {
      FUN_14486750c(uVar1,local_158,iVar3,0);
      pdVar8 = local_158;
      pdVar10 = param_11;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      FUN_14486750c(uVar1,local_158,*param_15,0);
      pdVar8 = local_158;
      pdVar10 = param_12;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      FUN_14486750c(uVar1,local_158,*param_16,0);
      pdVar8 = local_158;
      pdVar10 = param_13;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      local_2d8 = (double)*param_18;
      local_2e0 = (double)*param_17;
      local_158[0] = param_5[4];
      local_158[1] = param_5[5];
      local_148 = param_5[6];
      local_2c0 = 0x3ff0ccccc0000000;
      local_2c8 = 0x3ff0000000000000;
      local_2d0 = 0;
      local_2e8 = local_158;
      FUN_1402e3353(param_11,param_12,param_13,local_2b8);
      dVar58 = *param_5;
      dVar60 = param_5[1];
      uVar61 = *(undefined4 *)(param_5 + 2);
      uVar62 = *(undefined4 *)((longlong)param_5 + 0x14);
      uVar63 = *(undefined4 *)(param_5 + 3);
      uVar64 = *(undefined4 *)((longlong)param_5 + 0x1c);
      *param_13 = dVar58;
      param_13[1] = dVar60;
      *(undefined4 *)(param_13 + 2) = uVar61;
      *(undefined4 *)((longlong)param_13 + 0x14) = uVar62;
      *(undefined4 *)(param_13 + 3) = uVar63;
      *(undefined4 *)((longlong)param_13 + 0x1c) = uVar64;
      local_158[0] = *param_11;
      local_158[1] = param_11[1];
      local_148 = param_11[2];
      uStack_140 = param_11[3];
      local_138._0_8_ = param_11[4];
      local_138._8_8_ = param_11[5];
      local_128._0_8_ = param_11[6];
      local_128._8_8_ = param_11[7];
      local_118 = param_11[8];
      dStack_110 = param_11[9];
      local_108._0_8_ = param_11[10];
      local_108._8_8_ = param_11[0xb];
      local_2b8 = *param_12;
      dStack_2b0 = param_12[1];
      local_298 = *(undefined1 (*) [16])(param_12 + 2);
      auVar33 = *(undefined1 (*) [16])(param_12 + 4);
      uVar54 = *(undefined4 *)(param_12 + 6);
      uVar55 = *(undefined4 *)((longlong)param_12 + 0x34);
      uVar56 = *(undefined4 *)(param_12 + 7);
      uVar57 = *(undefined4 *)((longlong)param_12 + 0x3c);
      dVar24 = param_12[8];
      dVar41 = param_12[9];
      uVar34 = *(undefined4 *)(param_12 + 10);
      uVar35 = *(undefined4 *)((longlong)param_12 + 0x54);
      uVar36 = *(undefined4 *)(param_12 + 0xb);
      uVar37 = *(undefined4 *)((longlong)param_12 + 0x5c);
      uVar50 = *(undefined4 *)(param_13 + 4);
      uVar51 = *(undefined4 *)((longlong)param_13 + 0x24);
      uVar52 = *(undefined4 *)(param_13 + 5);
      uVar53 = *(undefined4 *)((longlong)param_13 + 0x2c);
      auVar17 = *(undefined1 (*) [16])(param_13 + 6);
      dVar46 = param_13[8];
      dVar49 = param_13[9];
      auVar40 = *(undefined1 (*) [16])(param_13 + 10);
    }
    else {
      FUN_14486750c(uVar1,local_158,iVar3,0);
      pdVar8 = local_158;
      pdVar10 = param_11;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      FUN_14486750c(uVar1,local_158,*param_15,0);
      pdVar8 = local_158;
      pdVar10 = param_12;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      FUN_14486750c(uVar1,local_158,*param_16,0);
      pdVar8 = local_158;
      pdVar10 = param_13;
      for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
        *pdVar10 = *pdVar8;
        pdVar8 = pdVar8 + 1;
        pdVar10 = pdVar10 + 1;
      }
      local_2d8 = (double)*param_18;
      local_2e0 = (double)*param_17;
      local_158[0] = param_5[4];
      local_158[1] = param_5[5];
      local_148 = param_5[6];
      local_2c0 = 0x3ff0ccccc0000000;
      local_2c8 = 0x3ff0000000000000;
      local_2d0 = 0;
      local_2e8 = local_158;
      FUN_1402e3353(param_11,param_12,param_13,local_2b8);
      dVar58 = *param_5;
      dVar60 = param_5[1];
      auVar33 = *(undefined1 (*) [16])(param_5 + 2);
      uVar61 = auVar33._0_4_;
      uVar62 = auVar33._4_4_;
      uVar63 = auVar33._8_4_;
      uVar64 = auVar33._12_4_;
      *param_13 = dVar58;
      param_13[1] = dVar60;
      *(undefined1 (*) [16])(param_13 + 2) = auVar33;
      if (1e-05 < ABS(param_6)) {
        param_1 = local_2a0;
        if (ABS(param_6 + -1.0) <= 1e-05) {
          local_158[0] = *param_11;
          local_158[1] = param_11[1];
          local_148 = param_11[2];
          uStack_140 = param_11[3];
          local_138._0_8_ = param_11[4];
          local_138._8_8_ = param_11[5];
          local_128._0_8_ = param_11[6];
          local_128._8_8_ = param_11[7];
          local_118 = param_11[8];
          dStack_110 = param_11[9];
          local_108._0_8_ = param_11[10];
          local_108._8_8_ = param_11[0xb];
          local_2b8 = *param_12;
          dStack_2b0 = param_12[1];
          local_298 = *(undefined1 (*) [16])(param_12 + 2);
          auVar33 = *(undefined1 (*) [16])(param_12 + 4);
          dVar30 = param_12[6];
          dVar23 = param_12[7];
          dVar24 = param_12[8];
          dVar41 = param_12[9];
          dVar15 = param_12[10];
          dVar18 = param_12[0xb];
          dVar19 = param_13[4];
          dVar22 = param_13[5];
          auVar17 = *(undefined1 (*) [16])(param_13 + 6);
          dVar46 = param_13[8];
          dVar49 = param_13[9];
          auVar40 = *(undefined1 (*) [16])(param_13 + 10);
        }
        else {
          dVar2 = (double)param_6;
          dVar30 = (double)param_6;
          auVar17 = *param_7;
          auVar40 = param_7[1];
          dVar15 = param_11[2] * auVar40._0_8_ + *param_11 * auVar17._0_8_;
          dVar18 = param_11[3] * auVar40._8_8_ + param_11[1] * auVar17._8_8_;
          dVar25 = (double)DAT_149934d80 - dVar2;
          dVar28 = DAT_149934d80._8_8_ - dVar30;
          auVar39._8_8_ = -(ulonglong)(0.0 <= dVar15 + dVar18);
          auVar39._0_8_ = -(ulonglong)(0.0 <= dVar15 + dVar18);
          auVar47._0_8_ = 0.0 - auVar17._0_8_;
          auVar47._8_8_ = 0.0 - auVar17._8_8_;
          auVar16._0_8_ = 0.0 - auVar40._0_8_;
          auVar16._8_8_ = 0.0 - auVar40._8_8_;
          auVar48 = blendvpd(auVar47,auVar17,auVar39);
          auVar17 = blendvpd(auVar16,auVar40,auVar39);
          dVar46 = auVar48._0_8_ * dVar25 + *param_11 * dVar2;
          dVar49 = auVar48._8_8_ * dVar28 + param_11[1] * dVar30;
          dVar15 = auVar17._0_8_ * dVar25 + param_11[2] * dVar2;
          dVar18 = auVar17._8_8_ * dVar28 + param_11[3] * dVar30;
          auVar48._0_8_ = dVar46 * dVar46;
          auVar48._8_8_ = dVar49 * dVar49;
          dVar19 = dVar15 * dVar15 + auVar48._0_8_;
          dVar22 = dVar18 * dVar18 + auVar48._8_8_;
          auVar20._0_8_ = dVar19 + dVar22;
          auVar20._8_8_ = dVar19 + dVar22;
          auVar17 = sqrtpd(auVar48,auVar20);
          auVar48 = divpd(_DAT_149934d80,auVar17);
          auVar21._0_8_ = auVar48._0_8_ * dVar15;
          auVar21._8_8_ = auVar48._8_8_ * dVar18;
          auVar44._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
          auVar44._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
          local_248 = blendvpd(_DAT_149935300,auVar21,auVar44);
          auVar17 = *param_8;
          dVar15 = auVar17._0_8_;
          dVar19 = auVar17._8_8_;
          auVar40 = param_8[1];
          dVar18 = auVar40._0_8_;
          dVar22 = auVar40._8_8_;
          dVar23 = param_12[2] * dVar18 + *param_12 * dVar15;
          dVar24 = param_12[3] * dVar22 + param_12[1] * dVar19;
          auVar11._8_8_ = -(ulonglong)(0.0 <= dVar23 + dVar24);
          auVar11._0_8_ = -(ulonglong)(0.0 <= dVar23 + dVar24);
          auVar59._0_8_ = 0.0 - dVar15;
          auVar59._8_8_ = 0.0 - dVar19;
          auVar43._8_8_ = auVar59._8_8_;
          auVar43._0_8_ = auVar59._0_8_;
          auVar44 = blendvpd(auVar43,auVar17,auVar11);
          auVar29._0_8_ = 0.0 - dVar18;
          auVar29._8_8_ = 0.0 - dVar22;
          auVar38._8_8_ = auVar29._8_8_;
          auVar38._0_8_ = auVar29._0_8_;
          auVar39 = blendvpd(auVar38,auVar40,auVar11);
          local_258._8_4_ = SUB84(dVar30,0);
          local_258._0_8_ = dVar2;
          local_258._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
          dVar42 = auVar44._0_8_ * dVar25 + *param_12 * dVar2;
          dVar45 = auVar44._8_8_ * dVar28 + param_12[1] * dVar30;
          dVar24 = auVar39._0_8_ * dVar25 + param_12[2] * dVar2;
          dVar41 = auVar39._8_8_ * dVar28 + param_12[3] * dVar30;
          auVar12._0_8_ = dVar42 * dVar42;
          auVar12._8_8_ = dVar45 * dVar45;
          dVar30 = dVar24 * dVar24 + auVar12._0_8_;
          dVar23 = dVar41 * dVar41 + auVar12._8_8_;
          auVar31._0_8_ = dVar30 + dVar23;
          auVar31._8_8_ = dVar30 + dVar23;
          auVar39 = sqrtpd(auVar12,auVar31);
          auVar39 = divpd(_DAT_149934d80,auVar39);
          auVar26._0_8_ = auVar39._0_8_ * dVar24;
          auVar26._8_8_ = auVar39._8_8_ * dVar41;
          auVar13._8_8_ = -(ulonglong)(1e-08 <= auVar31._8_8_);
          auVar13._0_8_ = -(ulonglong)(1e-08 <= auVar31._0_8_);
          local_298 = blendvpd(_DAT_149935300,auVar26,auVar13);
          dVar15 = auVar33._0_8_ * dVar18 + dVar58 * dVar15;
          dVar18 = auVar33._8_8_ * dVar22 + dVar60 * dVar19;
          auVar14._8_8_ = -(ulonglong)(0.0 <= dVar15 + dVar18);
          auVar14._0_8_ = -(ulonglong)(0.0 <= dVar15 + dVar18);
          auVar44 = blendvpd(auVar59,auVar17,auVar14);
          auVar17 = blendvpd(auVar29,auVar40,auVar14);
          local_138._0_8_ = param_11[4] * dVar2 + *(double *)param_7[2] * dVar25;
          local_138._8_8_ =
               param_11[5] * (double)local_258._8_8_ + *(double *)(param_7[2] + 8) * dVar28;
          local_128._0_8_ = param_11[6] * dVar2 + *(double *)param_7[3] * dVar25;
          local_128._8_8_ =
               param_11[7] * (double)local_258._8_8_ + *(double *)(param_7[3] + 8) * dVar28;
          local_118 = param_11[8] * dVar2 + *(double *)param_7[4] * dVar25;
          dStack_110 = param_11[9] * (double)local_258._8_8_ + *(double *)(param_7[4] + 8) * dVar28;
          local_108._0_8_ = param_11[10] * dVar2 + *(double *)param_7[5] * dVar25;
          local_108._8_8_ =
               param_11[0xb] * (double)local_258._8_8_ + *(double *)(param_7[5] + 8) * dVar28;
          local_158[0] = (double)((ulonglong)(dVar46 * auVar48._0_8_) &
                                 -(ulonglong)(1e-08 <= auVar20._0_8_));
          local_158[1] = (double)((ulonglong)(dVar49 * auVar48._8_8_) &
                                 -(ulonglong)(1e-08 <= auVar20._8_8_));
          local_278 = auVar44._0_8_ * dVar25 + dVar58 * dVar2;
          dStack_270 = auVar44._8_8_ * dVar28 + dVar60 * (double)local_258._8_8_;
          dVar15 = auVar17._0_8_ * dVar25 + auVar33._0_8_ * dVar2;
          dVar18 = auVar17._8_8_ * dVar28 + auVar33._8_8_ * (double)local_258._8_8_;
          dVar19 = dVar15 * dVar15 + local_278 * local_278;
          dVar22 = dVar18 * dVar18 + dStack_270 * dStack_270;
          auVar32._0_8_ = dVar19 + dVar22;
          auVar32._8_8_ = dVar19 + dVar22;
          local_288._8_8_ = -(ulonglong)(1e-08 <= auVar32._8_8_);
          local_288._0_8_ = -(ulonglong)(1e-08 <= auVar32._0_8_);
          auVar33 = sqrtpd(auVar32,auVar32);
          auVar33 = divpd(_DAT_149934d80,auVar33);
          local_278 = local_278 * auVar33._0_8_;
          dStack_270 = dStack_270 * auVar33._8_8_;
          auVar27._0_8_ = auVar33._0_8_ * dVar15;
          auVar27._8_8_ = auVar33._8_8_ * dVar18;
          local_268 = blendvpd(_DAT_149935300,auVar27,local_288);
          dVar19 = *(double *)param_8[2] * dVar25;
          dVar22 = *(double *)(param_8[2] + 8) * dVar28;
          dVar15 = *(double *)param_8[3] * dVar25;
          dVar18 = *(double *)(param_8[3] + 8) * dVar28;
          dVar46 = *(double *)param_8[4] * dVar25;
          dVar49 = *(double *)(param_8[4] + 8) * dVar28;
          dVar25 = *(double *)param_8[5] * dVar25;
          dVar28 = *(double *)(param_8[5] + 8) * dVar28;
          local_2b8 = (double)((ulonglong)(dVar42 * auVar39._0_8_) &
                              -(ulonglong)(1e-08 <= auVar31._0_8_));
          dStack_2b0 = (double)((ulonglong)(dVar45 * auVar39._8_8_) &
                               -(ulonglong)(1e-08 <= auVar31._8_8_));
          auVar33._0_8_ = param_12[4] * dVar2 + dVar19;
          auVar33._8_8_ = param_12[5] * (double)local_258._8_8_ + dVar22;
          dVar19 = param_13[4] * dVar2 + dVar19;
          dVar22 = param_13[5] * (double)local_258._8_8_ + dVar22;
          dVar30 = param_12[6] * dVar2 + dVar15;
          dVar23 = param_12[7] * (double)local_258._8_8_ + dVar18;
          auVar17._0_8_ = param_13[6] * dVar2 + dVar15;
          auVar17._8_8_ = param_13[7] * (double)local_258._8_8_ + dVar18;
          dVar24 = param_12[8] * dVar2 + dVar46;
          dVar41 = param_12[9] * (double)local_258._8_8_ + dVar49;
          dVar46 = param_13[8] * dVar2 + dVar46;
          dVar49 = param_13[9] * (double)local_258._8_8_ + dVar49;
          dVar15 = param_12[10] * dVar2 + dVar25;
          dVar18 = param_12[0xb] * (double)local_258._8_8_ + dVar28;
          auVar40._0_8_ = param_13[10] * dVar2 + dVar25;
          auVar40._8_8_ = param_13[0xb] * (double)local_258._8_8_ + dVar28;
          dVar58 = (double)((ulonglong)local_278 & -(ulonglong)(1e-08 <= auVar32._0_8_));
          dVar60 = (double)((ulonglong)dStack_270 & -(ulonglong)(1e-08 <= auVar32._8_8_));
          uVar61 = local_268._0_4_;
          uVar62 = local_268._4_4_;
          uVar63 = local_268._8_4_;
          uVar64 = local_268._12_4_;
          local_148 = (double)local_248._0_8_;
          uStack_140 = (double)local_248._8_8_;
        }
        goto LAB_1492315e8;
      }
      local_158[0] = *(double *)*param_7;
      local_158[1] = *(double *)(*param_7 + 8);
      local_148 = *(double *)param_7[1];
      uStack_140 = *(double *)(param_7[1] + 8);
      local_138._0_8_ = *(undefined8 *)param_7[2];
      local_138._8_8_ = *(undefined8 *)(param_7[2] + 8);
      local_128._0_8_ = *(undefined8 *)param_7[3];
      local_128._8_8_ = *(undefined8 *)(param_7[3] + 8);
      local_118 = *(double *)param_7[4];
      dStack_110 = *(double *)(param_7[4] + 8);
      local_108._0_8_ = *(undefined8 *)param_7[5];
      local_108._8_8_ = *(undefined8 *)(param_7[5] + 8);
      dVar58 = *(double *)*param_8;
      dVar60 = *(double *)(*param_8 + 8);
      uVar61 = *(undefined4 *)param_8[1];
      uVar62 = *(undefined4 *)(param_8[1] + 4);
      uVar63 = *(undefined4 *)(param_8[1] + 8);
      uVar64 = *(undefined4 *)(param_8[1] + 0xc);
      local_298 = param_8[1];
      auVar33 = param_8[2];
      auVar17 = param_8[3];
      uVar54 = auVar17._0_4_;
      uVar55 = auVar17._4_4_;
      uVar56 = auVar17._8_4_;
      uVar57 = auVar17._12_4_;
      dVar24 = *(double *)param_8[4];
      dVar41 = *(double *)(param_8[4] + 8);
      auVar40 = param_8[5];
      uVar34 = auVar40._0_4_;
      uVar35 = auVar40._4_4_;
      uVar36 = auVar40._8_4_;
      uVar37 = auVar40._12_4_;
      uVar50 = auVar33._0_4_;
      uVar51 = auVar33._4_4_;
      uVar52 = auVar33._8_4_;
      uVar53 = auVar33._12_4_;
      dVar46 = dVar24;
      dVar49 = dVar41;
      local_2b8 = dVar58;
      dStack_2b0 = dVar60;
    }
    dVar23 = (double)CONCAT44(uVar57,uVar56);
    dVar30 = (double)CONCAT44(uVar55,uVar54);
    dVar22 = (double)CONCAT44(uVar53,uVar52);
    dVar19 = (double)CONCAT44(uVar51,uVar50);
    dVar18 = (double)CONCAT44(uVar37,uVar36);
    dVar15 = (double)CONCAT44(uVar35,uVar34);
    param_1 = local_2a0;
  }
LAB_1492315e8:
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  local_2d8 = (double)((ulonglong)local_2d8 & 0xffffffffffffff00);
  local_2e0 = (double)((ulonglong)local_2e0 & 0xffffffffffffff00);
  local_2e8._0_1_ = 1;
  FUN_144831e8e(uVar1,*param_14,local_158,0);
  local_158[0] = local_2b8;
  local_158[1] = dStack_2b0;
  local_148 = (double)local_298._0_8_;
  uStack_140 = (double)local_298._8_8_;
  local_128._8_4_ = SUB84(dVar23,0);
  local_128._0_8_ = dVar30;
  local_128._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  local_108._8_4_ = SUB84(dVar18,0);
  local_108._0_8_ = dVar15;
  local_108._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
  local_2d8 = (double)((ulonglong)local_2d8 & 0xffffffffffffff00);
  local_2e0 = (double)((ulonglong)local_2e0 & 0xffffffffffffff00);
  local_2e8._0_1_ = 1;
  local_138 = auVar33;
  local_118 = dVar24;
  dStack_110 = dVar41;
  FUN_144831e8e(uVar1,*param_15,local_158,0);
  local_148 = (double)CONCAT44(uVar62,uVar61);
  uStack_140 = (double)CONCAT44(uVar64,uVar63);
  local_138._8_4_ = SUB84(dVar22,0);
  local_138._0_8_ = dVar19;
  local_138._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  local_2d8 = (double)((ulonglong)local_2d8 & 0xffffffffffffff00);
  local_2e0 = (double)((ulonglong)local_2e0 & 0xffffffffffffff00);
  local_2e8 = (double *)CONCAT71(local_2e8._1_7_,1);
  local_158[0] = dVar58;
  local_158[1] = dVar60;
  local_128 = auVar17;
  local_118 = dVar46;
  dStack_110 = dVar49;
  local_108._0_16_ = auVar40;
  FUN_144831e8e(uVar1,*param_16,local_158,0);
  *param_10 = param_6;
LAB_1492316e0:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149231854 FUN_149231854 body=25 status=ok
// SIG undefined FUN_149231854(void)

undefined8 FUN_149231854(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14923186e FUN_14923186e body=114 status=ok
// SIG undefined FUN_14923186e(void)

void FUN_14923186e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  lVar1 = *(longlong *)(lVar5 + 0x60);
  if (lVar1 != 0) {
    puVar6 = (undefined8 *)*param_2;
    puVar2 = (undefined8 *)puVar6[4];
    puVar7 = (undefined8 *)puVar6[8];
    iVar4 = FUN_1490de8aa(lVar1,*puVar6);
    if (iVar4 == -1) {
      *puVar2 = 0x3f800000;
      puVar2[1] = 0x3f80000000000000;
      puVar6 = &DAT_14c846480;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x60) + 8) + (longlong)iVar4 * 0xd0;
      puVar6 = (undefined8 *)(lVar5 + 0x40);
      uVar3 = *(undefined8 *)(lVar5 + 0x28);
      *puVar2 = *(undefined8 *)(lVar5 + 0x20);
      puVar2[1] = uVar3;
    }
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}



// FUNCTION 1492318e0 FUN_1492318e0 body=195 status=ok
// SIG undefined FUN_1492318e0(void)

void FUN_1492318e0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_228 [32];
  undefined1 local_208 [96];
  longlong local_1a8;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  if (local_1a8 != 0) {
    iVar4 = FUN_1490de8aa(local_1a8,param_1 + 8);
    if (iVar4 == -1) {
      *(undefined4 *)(param_1 + 0x10) = 0x3f800000;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
      puVar6 = &DAT_14c846480;
    }
    else {
      lVar5 = *(longlong *)(local_1a8 + 8) + (longlong)iVar4 * 0xd0;
      puVar6 = (undefined8 *)(lVar5 + 0x40);
      uVar1 = *(undefined4 *)(lVar5 + 0x24);
      uVar2 = *(undefined4 *)(lVar5 + 0x28);
      uVar3 = *(undefined4 *)(lVar5 + 0x2c);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(lVar5 + 0x20);
      *(undefined4 *)(param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined4 *)(param_1 + 0x1c) = uVar3;
    }
    puVar7 = (undefined8 *)(param_1 + 0x20);
    for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  FUN_140f8ccfc(local_208);
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492319a4 FUN_1492319a4 body=74 status=ok
// SIG undefined FUN_1492319a4(void)

void FUN_1492319a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar3 = *(longlong *)(lVar2 + 0x60);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)((undefined8 *)*param_2)[4];
    iVar6 = FUN_1490de8aa(lVar3,*(undefined8 *)*param_2);
    if (iVar6 != -1) {
      uVar5 = puVar4[1];
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(lVar2 + 0x60) + 8) + 0x20 + (longlong)iVar6 * 0xd0);
      *puVar1 = *puVar4;
      puVar1[1] = uVar5;
    }
  }
  return;
}



// FUNCTION 1492319ee FUN_1492319ee body=83 status=ok
// SIG undefined FUN_1492319ee(void)

void FUN_1492319ee(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    iVar3 = FUN_1490de8aa(*(longlong *)(param_1 + 0x70),param_1 + 0x1f0);
    if (iVar3 != -1) {
      uVar2 = *(undefined8 *)(param_1 + 0x200);
      puVar1 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x20 + (longlong)iVar3 * 0xd0);
      *puVar1 = *(undefined8 *)(param_1 + 0x1f8);
      puVar1[1] = uVar2;
    }
  }
  return;
}



// FUNCTION 149231a42 FUN_149231a42 body=84 status=ok
// SIG undefined FUN_149231a42(void)

void FUN_149231a42(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0xc0);
  lVar3 = *(longlong *)(lVar2 + 0x60);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)((undefined8 *)*param_2)[4];
    iVar4 = FUN_1490de8aa(lVar3,*(undefined8 *)*param_2);
    if (iVar4 != -1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x60) + 8) + 0x30 + (longlong)iVar4 * 0xd0) = uVar1;
    }
  }
  return;
}



// FUNCTION 149231a96 FUN_149231a96 body=92 status=ok
// SIG undefined FUN_149231a96(void)

void FUN_149231a96(longlong param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1f8);
    iVar2 = FUN_1490de8aa(*(longlong *)(param_1 + 0x70),param_1 + 0x1f0);
    if (iVar2 != -1) {
      *(undefined4 *)
       (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + 0x30 + (longlong)iVar2 * 0xd0) = uVar1;
    }
  }
  return;
}



// FUNCTION 149231af2 FUN_149231af2 body=82 status=ok
// SIG undefined FUN_149231af2(void)

void FUN_149231af2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  lVar3 = *(longlong *)(lVar1 + 0x60);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)((undefined8 *)*param_2)[4];
    iVar2 = FUN_1490de8aa(lVar3,*(undefined8 *)*param_2);
    if (iVar2 != -1) {
      puVar5 = (undefined8 *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x60) + 8) + (longlong)iVar2 * 0xd0 + 0x40);
      for (lVar3 = 0xc; lVar3 != 0; lVar3 = lVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
    }
  }
  return;
}



// FUNCTION 149231b44 FUN_149231b44 body=93 status=ok
// SIG undefined FUN_149231b44(void)

void FUN_149231b44(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x70) != 0) {
    iVar1 = FUN_1490de8aa(*(longlong *)(param_1 + 0x70),param_1 + 0x1f0);
    if (iVar1 != -1) {
      puVar3 = (undefined8 *)(param_1 + 0x200);
      puVar4 = (undefined8 *)
               (*(longlong *)(*(longlong *)(param_1 + 0x70) + 8) + (longlong)iVar1 * 0xd0 + 0x40);
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return;
}



// FUNCTION 149231ba2 FUN_149231ba2 body=25 status=ok
// SIG undefined FUN_149231ba2(void)

undefined8 FUN_149231ba2(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149231bbc FUN_149231bbc body=25 status=ok
// SIG undefined FUN_149231bbc(void)

undefined8 FUN_149231bbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149231bd6 FUN_149231bd6 body=25 status=ok
// SIG undefined FUN_149231bd6(void)

undefined8 FUN_149231bd6(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149231bf0 FUN_149231bf0 body=25 status=ok
// SIG undefined FUN_149231bf0(void)

undefined8 FUN_149231bf0(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149231c0a FUN_149231c0a body=91 status=ok
// SIG undefined FUN_149231c0a(void)

void FUN_149231c0a(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc07488,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231c66 FUN_149231c66 body=84 status=ok
// SIG undefined FUN_149231c66(void)

void FUN_149231c66(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc07498,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231cbc FUN_149231cbc body=91 status=ok
// SIG undefined FUN_149231cbc(void)

void FUN_149231cbc(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc07498,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231d18 FUN_149231d18 body=84 status=ok
// SIG undefined FUN_149231d18(void)

void FUN_149231d18(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0xc0);
  FUN_1446f57c6(&DAT_14cc074a8,&local_20);
  *(undefined8 *)(lVar1 + 8) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231d6e FUN_149231d6e body=91 status=ok
// SIG undefined FUN_149231d6e(void)

void FUN_149231d6e(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1446f57c6(&DAT_14cc074a8,&local_20);
  *(undefined8 *)(param_1 + 0x18) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231dea FUN_149231dea body=117 status=ok
// SIG undefined FUN_149231dea(void)

void FUN_149231dea(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149231ef6(local_1f8,param_1 + 8,param_1 + 0x14,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231e80 FUN_149231e80 body=117 status=ok
// SIG undefined FUN_149231e80(void)

void FUN_149231e80(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149231ef6(local_1f8,param_1 + 8,param_1 + 0x14,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231ef6 FUN_149231ef6 body=178 status=ok
// SIG undefined FUN_149231ef6(void)

void FUN_149231ef6(void)

{
  undefined8 in_R9;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  longlong *local_70;
  longlong local_68 [2];
  undefined1 local_58 [4];
  undefined8 local_54;
  undefined2 local_4c;
  undefined4 local_48;
  undefined1 local_38 [4];
  undefined8 local_34;
  undefined2 local_2c;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_80 = local_38;
  local_38[0] = 0;
  local_34 = 0;
  local_2c = 0xffff;
  local_28 = 0xffffffff;
  local_78 = local_58;
  local_58[0] = 0;
  local_54 = 0;
  local_4c = 0xffff;
  local_48 = 0xffffffff;
  local_70 = local_68;
  local_68[0] = 0;
  local_68[1] = 0;
  local_90 = 0;
  local_98 = 1;
  local_88 = in_R9;
  FUN_1492342c4();
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149231fc8 FUN_149231fc8 body=117 status=ok
// SIG undefined FUN_149231fc8(void)

void FUN_149231fc8(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492320d2(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923205c FUN_14923205c body=117 status=ok
// SIG undefined FUN_14923205c(void)

void FUN_14923205c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492320d2(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x10),param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492320d2 FUN_1492320d2 body=493 status=ok
// SIG undefined FUN_1492320d2(void)

void FUN_1492320d2(longlong param_1,undefined8 *param_2,uint param_3,undefined4 **param_4)

{
  undefined8 uVar1;
  undefined4 *_Src;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined4 **ppuStack_60;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 **ppuStack_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
  }
  else {
    uVar6 = FUN_1466e041a();
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar1 = *param_2;
    uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar8 = (uint)uVar1 & 0xffff;
    uVar5 = FUN_144a78877(*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xa8) * 0x11 +
                          (uVar4 >> 0x10 ^ uVar4),
                          ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4));
    uVar5 = FUN_144a78877(uVar5,(param_3 & 0xff) << 3);
    local_68 = (undefined4 *)0x0;
    ppuStack_60 = (undefined4 **)0x0;
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    lVar7 = FUN_149234a94(uVar1,uVar5);
    if (lVar7 == 0) {
      FUN_1491f2ea4(&local_50,uVar1,param_2,param_3);
      if (local_68 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = local_50;
      ppuStack_60 = ppuStack_48;
      local_50 = &local_54;
      local_54 = uVar5;
      ppuStack_48 = &local_68;
      FUN_1492978c2(*(longlong *)(param_1 + 0x1b0) + 0x478,local_3c);
    }
    else {
      FUN_1444888de(&local_68,lVar7);
    }
    _Src = local_68;
    if (&local_68 != param_4) {
      iVar2 = (int)ppuStack_60;
      lVar7 = (longlong)(int)ppuStack_60;
      *(int *)(param_4 + 1) = (int)ppuStack_60;
      if ((int)ppuStack_60 == 0 && *(int *)((longlong)param_4 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_4 + 0xc) = 0;
      }
      else {
        FUN_149192186(param_4,(ulonglong)ppuStack_60 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy(*param_4,_Src,lVar7 * 0xc);
        }
      }
    }
    if (local_68 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492322d6 FUN_1492322d6 body=71 status=ok
// SIG undefined FUN_1492322d6(void)

void FUN_1492322d6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492324a8(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),1,
                *(undefined1 *)puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 14923232a FUN_14923232a body=138 status=ok
// SIG undefined FUN_14923232a(void)

void FUN_14923232a(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x18;
  local_210 = *(undefined1 *)(param_1 + 0x16);
  local_218 = 1;
  FUN_1492324a8(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492323b6 FUN_1492323b6 body=81 status=ok
// SIG undefined FUN_1492323b6(void)

void FUN_1492323b6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492324a8(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),
                CONCAT71((int7)((ulonglong)puVar1[8] >> 8),*(undefined1 *)puVar1[8]),
                *(undefined1 *)puVar1[0xc],*(undefined1 *)puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 14923241a FUN_14923241a body=140 status=ok
// SIG undefined FUN_14923241a(void)

void FUN_14923241a(longlong param_1)

{
  undefined1 auStack_238 [32];
  undefined1 local_218;
  undefined1 local_210;
  longlong local_208;
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_238;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  local_208 = param_1 + 0x18;
  local_210 = *(undefined1 *)(param_1 + 0x17);
  local_218 = *(undefined1 *)(param_1 + 0x16);
  FUN_1492324a8(local_1f8,param_1 + 8,*(undefined1 *)(param_1 + 0x14),
                *(undefined1 *)(param_1 + 0x15));
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492324a8 FUN_1492324a8 body=1175 status=ok
// SIG undefined FUN_1492324a8(void)

void FUN_1492324a8(longlong param_1,undefined8 *param_2,char param_3,uint param_4,char param_5,
                  byte param_6,undefined8 ****param_7)

{
  longlong lVar1;
  undefined8 ****ppppuVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 ***pppuVar6;
  ulonglong uVar7;
  byte *pbVar8;
  int iVar9;
  longlong lVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  char local_98;
  byte local_90;
  undefined8 ***local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined1 local_74 [4];
  undefined8 ***local_70;
  undefined8 ***local_68;
  undefined8 ***local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar10 = *(longlong *)(param_1 + 0x1b0);
  if (lVar10 == 0) {
    *(undefined4 *)(param_7 + 1) = 0;
    if (*(int *)((longlong)param_7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  else {
    if (param_5 == '\0') {
      *(undefined4 *)(param_7 + 1) = 0;
      if (*(int *)((longlong)param_7 + 0xc) < 0) {
        FUN_14920a7da(param_7,0);
      }
      if (param_3 != '\0') {
        iVar9 = *(int *)(param_7 + 1);
        *(uint *)(param_7 + 1) = iVar9 + 1U;
        if (*(uint *)((longlong)param_7 + 0xc) < iVar9 + 1U) {
          FUN_149192788(param_7,iVar9);
        }
        pppuVar6 = *param_7;
        *(undefined4 *)((longlong)pppuVar6 + (longlong)iVar9 * 0xc + 8) =
             *(undefined4 *)(param_2 + 1);
        *(undefined8 *)((longlong)pppuVar6 + (longlong)iVar9 * 0xc) = *param_2;
      }
      uVar3 = FUN_140813180(lVar10,param_2);
      iVar9 = 0;
      if (((int)uVar3 < 0) || (*(int *)(lVar10 + 0xc0) <= (int)uVar3)) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined8 *)(*(longlong *)(lVar10 + 0xb8) + (ulonglong)uVar3 * 8);
      }
      FUN_1444a0218(lVar10,&local_70,uVar12,param_4);
      local_88 = (undefined8 ****)0x0;
      uStack_80 = (undefined8 ****)0x0;
      ppppuVar11 = (undefined8 ****)local_58;
      if ((undefined8 ****)local_58 == (undefined8 ****)0x0) {
        ppppuVar11 = &local_70;
      }
      if ((longlong)local_50 != 0) {
        lVar10 = 0;
        do {
          ppppuVar2 = uStack_80;
          pppuVar6 = *(undefined8 ****)((longlong)ppppuVar11 + lVar10);
          if ((*(byte *)(pppuVar6 + 2) & param_6) != 0) {
            lVar14 = (longlong)(int)uStack_80;
            uVar3 = (int)uStack_80 + 1;
            uStack_80 = (undefined8 ****)CONCAT44(uStack_80._4_4_,uVar3);
            if (uStack_80._4_4_ < uVar3) {
              FUN_145c8ed70(&local_88,(ulonglong)ppppuVar2 & 0xffffffff);
              pppuVar6 = *(undefined8 ****)((longlong)ppppuVar11 + lVar10);
            }
            local_88[lVar14] = pppuVar6;
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)local_50 * 8 != lVar10);
        iVar9 = (int)uStack_80;
      }
      pppuVar6 = local_88;
      local_50 = iVar9;
      if (local_4c == 0 && iVar9 == 0) {
        local_4c = 3;
      }
      else {
        FUN_14920c8c8(&local_70,iVar9);
        if (iVar9 != 0) {
          ppppuVar11 = &local_70;
          if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
            ppppuVar11 = (undefined8 ****)local_58;
          }
          memcpy(ppppuVar11,pppuVar6,(longlong)iVar9 << 3);
        }
      }
      if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
      iVar9 = *(int *)(param_7 + 1) + local_50;
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (*(int *)((longlong)param_7 + 0xc) < iVar9) {
        FUN_14920a7da(param_7);
      }
      ppppuVar11 = &local_70;
      if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
        ppppuVar11 = (undefined8 ****)local_58;
      }
      if (local_50 != 0) {
        lVar10 = (longlong)local_50;
        lVar14 = 0;
        do {
          lVar1 = *(longlong *)((longlong)ppppuVar11 + lVar14);
          iVar9 = *(int *)(param_7 + 1);
          *(uint *)(param_7 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar9 + 1U) {
            FUN_149192788(param_7,iVar9);
          }
          pppuVar6 = *param_7;
          *(undefined4 *)((longlong)pppuVar6 + (longlong)iVar9 * 0xc + 8) =
               *(undefined4 *)(lVar1 + 0x18);
          *(undefined8 *)((longlong)pppuVar6 + (longlong)iVar9 * 0xc) =
               *(undefined8 *)(lVar1 + 0x10);
          lVar14 = lVar14 + 8;
        } while (lVar10 * 8 != lVar14);
      }
    }
    else {
      uVar7 = FUN_1466e0958();
      uVar3 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
      uVar4 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      iVar9 = *(int *)(*(longlong *)(param_1 + 0x1b0) + 0xa8);
      pbVar8 = (byte *)FUN_1491dd5fa(*(longlong *)(param_1 + 0x1b0),param_2);
      uVar12 = *(undefined8 *)(pbVar8 + 4);
      uVar3 = (uint)((ulonglong)uVar12 >> 0x10);
      uVar13 = (uint)uVar12 & 0xffff;
      uVar5 = FUN_144a78877(iVar9 * 0x11 + (uVar4 >> 0x10 ^ uVar4),
                            (uint)*pbVar8 +
                            (((uint)uVar12 << 0x10 | uVar13) + (int)((ulonglong)uVar12 >> 0x20) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4)) * 10);
      uVar5 = FUN_144a78877(uVar5,(param_4 & 0xff) * 2);
      uVar5 = FUN_144a78877(uVar5,param_3);
      uVar5 = FUN_144a78877(uVar5,(ulonglong)param_6 << 3);
      local_88 = (undefined8 ****)0x0;
      uStack_80 = (undefined8 ****)0x0;
      uVar12 = *(undefined8 *)(param_1 + 0x1b0);
      lVar10 = FUN_149234a94(uVar12,uVar5);
      if (lVar10 == 0) {
        local_90 = param_6;
        local_98 = param_3;
        FUN_1491f2ce2(&local_70,uVar12,param_2,param_4);
        if ((undefined8 ****)local_88 != (undefined8 ****)0x0) {
          FUN_1400020a8();
        }
        local_88 = local_70;
        uStack_80 = (undefined8 ****)local_68;
        if ((int)local_68 == 0) {
          FUN_140813180(*(undefined8 *)(param_1 + 0x1b0),param_2);
        }
        local_70 = (undefined8 ***)&local_78;
        local_68 = &local_88;
        local_78 = uVar5;
        FUN_1492978c2(*(longlong *)(param_1 + 0x1b0) + 0x478,local_74);
      }
      else {
        FUN_1444888de(&local_88,lVar10);
      }
      pppuVar6 = local_88;
      local_58 = local_88;
      if (&local_88 != param_7) {
        iVar9 = (int)uStack_80;
        lVar10 = (longlong)(int)uStack_80;
        *(int *)(param_7 + 1) = (int)uStack_80;
        if ((int)uStack_80 == 0 && *(int *)((longlong)param_7 + 0xc) == 0) {
          *(undefined4 *)((longlong)param_7 + 0xc) = 0;
        }
        else {
          FUN_149192186(param_7,(ulonglong)uStack_80 & 0xffffffff);
          local_58 = local_88;
          if (iVar9 != 0) {
            memcpy(*param_7,pppuVar6,lVar10 * 0xc);
            local_58 = local_88;
          }
        }
      }
    }
    if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149232974 FUN_149232974 body=112 status=ok
// SIG undefined FUN_149232974(void)

void FUN_149232974(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492329e6(local_1f8,*(undefined1 *)(param_1 + 8),param_1 + 0x10);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492329e6 FUN_1492329e6 body=459 status=ok
// SIG undefined FUN_1492329e6(void)

void FUN_1492329e6(longlong param_1,byte param_2,void **param_3)

{
  undefined8 uVar1;
  void *_Src;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  void *local_a8;
  ulonglong uStack_a0;
  undefined4 local_94;
  undefined4 *local_90;
  void **local_88;
  undefined1 local_7c [4];
  code *local_78 [2];
  undefined8 local_68;
  undefined **local_58;
  void **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
    }
  }
  else {
    uVar5 = FUN_1466e0c96();
    uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar4 = FUN_144a78877(*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xa8) * 0x11 +
                          (uVar3 >> 0x10 ^ uVar3),(ulonglong)param_2 << 3);
    local_a8 = (void *)0x0;
    uStack_a0 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x1b0);
    lVar6 = FUN_149234a94(uVar1,uVar4);
    if (lVar6 == 0) {
      local_68 = 0;
      local_58 = &PTR_LAB_14bc058d0;
      local_78[0] = FUN_1444b58dc;
      local_50 = &local_a8;
      local_48 = param_2;
      FUN_14449bc3c(uVar1,local_78,1);
      local_90 = &local_94;
      local_94 = uVar4;
      local_88 = &local_a8;
      FUN_1492978c2(*(longlong *)(param_1 + 0x1b0) + 0x478,local_7c);
    }
    else {
      FUN_1444888de(&local_a8,lVar6);
    }
    _Src = local_a8;
    if (&local_a8 != param_3) {
      iVar2 = (int)uStack_a0;
      lVar6 = (longlong)(int)uStack_a0;
      *(int *)(param_3 + 1) = (int)uStack_a0;
      if ((int)uStack_a0 == 0 && *(int *)((longlong)param_3 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_3 + 0xc) = 0;
      }
      else {
        FUN_149192186(param_3,uStack_a0 & 0xffffffff);
        if (iVar2 != 0) {
          memcpy(*param_3,_Src,lVar6 * 0xc);
        }
      }
    }
    if (local_a8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149232bcc FUN_149232bcc body=132 status=ok
// SIG undefined FUN_149232bcc(void)

void FUN_149232bcc(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  local_48 = *(undefined1 *)param_2[0xc];
  local_40 = *(undefined1 *)param_2[0x10];
  local_38 = param_2[0x14];
  local_28 = *(undefined8 *)*param_2;
  local_20 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_149232e30(*(undefined8 *)(param_1 + 0xc0),&local_28,param_2[4],param_2[8]);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149232c5e FUN_149232c5e body=158 status=ok
// SIG undefined FUN_149232c5e(void)

void FUN_149232c5e(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_218 = param_1 + 0x30;
  local_228 = *(undefined1 *)(param_1 + 0x28);
  local_220 = *(undefined1 *)(param_1 + 0x29);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_149232e30(local_208,&local_28,param_1 + 0x18,param_1 + 0x20);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149232cfe FUN_149232cfe body=132 status=ok
// SIG undefined FUN_149232cfe(void)

void FUN_149232cfe(longlong param_1,longlong *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 local_40;
  longlong local_38;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = (longlong *)*param_2;
  local_48 = *(undefined1 *)param_2[0xc];
  local_40 = *(undefined1 *)param_2[0x10];
  local_38 = param_2[0x14];
  local_28 = *(undefined8 *)*param_2;
  local_20 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_149232e30(*(undefined8 *)(param_1 + 0xc0),&local_28,param_2[4],param_2[8]);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149232d90 FUN_149232d90 body=159 status=ok
// SIG undefined FUN_149232d90(void)

void FUN_149232d90(longlong param_1)

{
  undefined1 auStack_248 [32];
  undefined1 local_228;
  undefined1 local_220;
  longlong local_218;
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  local_218 = param_1 + 0x30;
  local_228 = *(undefined1 *)(param_1 + 0x28);
  local_220 = *(undefined1 *)(param_1 + 0x29);
  FUN_149232e30(local_208,&local_28,param_1 + 0x18,param_1 + 0x20);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149232e30 FUN_149232e30 body=1004 status=ok
// SIG undefined FUN_149232e30(void)

void FUN_149232e30(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
                  char param_5,char param_6,void **param_7)

{
  void *_Src;
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  longlong local_98;
  char local_8a;
  char local_89;
  undefined8 *local_88;
  undefined4 local_7c;
  void *local_78;
  undefined8 uStack_70;
  undefined4 local_64;
  undefined8 local_60;
  void **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    *(undefined4 *)(param_7 + 1) = 0;
    if (*(int *)((longlong)param_7 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
  }
  else {
    local_88 = param_4;
    uVar4 = FUN_1466e11c6();
    uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    iVar3 = (int)param_2[1];
    iVar6 = iVar3 * 0x11 + 3;
    local_8a = param_5;
    if ((longlong)iVar3 != 0) {
      lVar12 = 0;
      do {
        uVar7 = *(undefined8 *)(*param_2 + 4 + lVar12);
        uVar11 = (uint)((ulonglong)uVar7 >> 0x10);
        uVar8 = (uint)uVar7 & 0xffff;
        iVar6 = (uint)*(byte *)(*param_2 + lVar12) + iVar6 +
                (((uint)uVar7 << 0x10 | uVar8) + (int)((ulonglong)uVar7 >> 0x20) +
                 (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4)) * 10;
        lVar12 = lVar12 + 0xc;
      } while ((longlong)iVar3 * 0xc != lVar12);
    }
    uVar2 = FUN_144a78877(*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xa8) * 0x11 +
                          (uVar1 >> 0x10 ^ uVar1),iVar6);
    uVar7 = *param_3;
    uVar1 = (uint)((ulonglong)uVar7 >> 0x10);
    uVar11 = (uint)uVar7 & 0xffff;
    uVar2 = FUN_144a78877(uVar2,(((uint)uVar7 << 0x10 | uVar11) + (int)((ulonglong)uVar7 >> 0x20) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 0xc);
    puVar10 = local_88;
    uVar7 = *local_88;
    uVar1 = (uint)((ulonglong)uVar7 >> 0x10);
    uVar11 = (uint)uVar7 & 0xffff;
    uVar2 = FUN_144a78877(uVar2,(((uint)uVar7 << 0x10 | uVar11) + (int)((ulonglong)uVar7 >> 0x20) +
                                 (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 0xd);
    uVar7 = 0xe;
    if (local_8a == '\0') {
      uVar7 = 0;
    }
    uVar2 = FUN_144a78877(uVar2,uVar7);
    local_78 = (void *)0x0;
    uStack_70 = 0;
    lVar12 = *(longlong *)(param_1 + 0x1b0);
    lVar5 = FUN_149234a94(lVar12,uVar2);
    if (lVar5 == 0) {
      local_64 = uVar2;
      if (0 < (int)param_2[1]) {
        local_89 = param_6;
        lVar5 = 0;
        lVar12 = 0;
        local_7c = uVar2;
        do {
          local_58 = (void **)CONCAT44(local_58._4_4_,*(undefined4 *)(*param_2 + 8 + lVar5));
          local_60 = *(undefined4 **)(*param_2 + lVar5);
          local_98 = (longlong)&local_60 + 4;
          FUN_1491668a6(param_1,(longlong)&local_60 + 4,param_3,puVar10);
          iVar3 = FUN_140813180(*(undefined8 *)(param_1 + 0x1b0),&local_60);
          uVar4 = uStack_70;
          if (iVar3 == -1) {
            if (local_8a == '\0') {
              lVar9 = (longlong)(int)uStack_70;
              uVar1 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
              if (uStack_70._4_4_ < uVar1) {
                FUN_149192788(&local_78,uVar4 & 0xffffffff);
              }
              *(undefined1 *)((longlong)local_78 + lVar9 * 0xc) = 0;
              *(undefined8 *)((longlong)local_78 + lVar9 * 0xc + 4) = 0;
              puVar10 = local_88;
            }
          }
          else if (local_89 == '\0') {
            FUN_149197016(&local_78,&local_60);
          }
          else {
            lVar9 = (longlong)(int)uStack_70;
            uVar1 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar1);
            if (uStack_70._4_4_ < uVar1) {
              FUN_149192788(&local_78,uVar4 & 0xffffffff);
            }
            *(undefined4 *)((longlong)local_78 + lVar9 * 0xc + 8) = local_58._0_4_;
            *(undefined4 **)((longlong)local_78 + lVar9 * 0xc) = local_60;
            puVar10 = local_88;
          }
          lVar12 = lVar12 + 1;
          lVar5 = lVar5 + 0xc;
        } while (lVar12 < (int)param_2[1]);
        lVar12 = *(longlong *)(param_1 + 0x1b0);
        local_64 = local_7c;
      }
      local_60 = &local_64;
      local_58 = &local_78;
      FUN_1492978c2(lVar12 + 0x478,local_4c);
    }
    else {
      FUN_1444888de(&local_78,lVar5);
    }
    _Src = local_78;
    if (&local_78 != param_7) {
      iVar3 = (int)uStack_70;
      lVar12 = (longlong)(int)uStack_70;
      *(int *)(param_7 + 1) = (int)uStack_70;
      if ((int)uStack_70 == 0 && *(int *)((longlong)param_7 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_7 + 0xc) = 0;
      }
      else {
        FUN_149192186(param_7,uStack_70 & 0xffffffff);
        if (iVar3 != 0) {
          memcpy(*param_7,_Src,lVar12 * 0xc);
        }
      }
    }
    if (local_78 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149233238 FUN_149233238 body=85 status=ok
// SIG undefined FUN_149233238(void)

void FUN_149233238(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  param_2 = (longlong *)*param_2;
  local_18 = *(undefined8 *)*param_2;
  local_10 = *(undefined4 *)((undefined8 *)*param_2 + 1);
  FUN_149233318(&local_18,*(undefined1 *)param_2[4],param_2[8]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233294 FUN_149233294 body=130 status=ok
// SIG undefined FUN_149233294(void)

void FUN_149233294(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_149233318(&local_28,*(undefined1 *)(param_1 + 0x18),param_1 + 0x20);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233318 FUN_149233318 body=157 status=ok
// SIG undefined FUN_149233318(void)

void FUN_149233318(undefined8 *param_1,char param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) < 0) {
    FUN_14920a7da(param_3,0);
  }
  if ((longlong)*(int *)(param_1 + 1) != 0) {
    puVar3 = (undefined8 *)*param_1;
    lVar4 = (longlong)*(int *)(param_1 + 1) * 0xc;
    do {
      if (param_2 == '\0') {
        FUN_149197016(param_3,puVar3);
      }
      else {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_149192788(param_3,iVar1);
        }
        lVar2 = *param_3;
        *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = *(undefined4 *)(puVar3 + 1);
        *(undefined8 *)(lVar2 + (longlong)iVar1 * 0xc) = *puVar3;
      }
      puVar3 = (undefined8 *)((longlong)puVar3 + 0xc);
      lVar4 = lVar4 + -0xc;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 1492333c6 FUN_1492333c6 body=166 status=ok
// SIG undefined FUN_1492333c6(void)

void FUN_1492333c6(longlong param_1)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_228 [32];
  undefined1 local_208 [488];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  iVar1 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0 && *(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_149192186((undefined8 *)(param_1 + 0x18),iVar1);
    if (iVar1 != 0) {
      memcpy(*(void **)(param_1 + 0x18),_Src,(longlong)iVar1 * 0xc);
    }
  }
  FUN_140f8ccfc(local_208);
  if ((local_20 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923346e FUN_14923346e body=86 status=ok
// SIG undefined FUN_14923346e(void)

void FUN_14923346e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_149233622(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492334c6 FUN_1492334c6 body=127 status=ok
// SIG undefined FUN_1492334c6(void)

void FUN_1492334c6(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_149233622(local_208,&local_28,param_1 + 0x18);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233546 FUN_149233546 body=86 status=ok
// SIG undefined FUN_149233546(void)

void FUN_149233546(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = *(undefined8 **)*param_2;
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_149233622(*(undefined8 *)(param_1 + 0xc0),&local_18,((longlong *)*param_2)[4]);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923359e FUN_14923359e body=130 status=ok
// SIG undefined FUN_14923359e(void)

void FUN_14923359e(longlong param_1)

{
  undefined1 auStack_228 [32];
  undefined1 local_208 [480];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_228;
  FUN_1412ca278(local_208);
  FUN_1490d751a(local_208);
  local_28 = *(undefined8 *)(param_1 + 8);
  local_20 = *(undefined4 *)(param_1 + 0x10);
  FUN_149233622(local_208,&local_28,param_1 + 0x18);
  FUN_140f8ccfc(local_208);
  if ((local_18 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233622 FUN_149233622 body=648 status=ok
// SIG undefined FUN_149233622(void)

void FUN_149233622(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  float local_7c;
  float local_78;
  float local_74;
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    *(undefined4 *)(param_3 + 1) = 0;
    if (*(int *)((longlong)param_3 + 0xc) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_a8);
    }
  }
  else {
    FUN_144a127d2(param_3,(int)param_2[1]);
    if (0 < (int)param_2[1]) {
      lVar4 = 0;
      do {
        *(undefined4 *)(*param_3 + lVar4 * 4) = 0xffffffff;
        uVar1 = FUN_140813180(*(undefined8 *)(param_1 + 0x1b0));
        if ((uVar1 != 0xffffffff) && (cVar5 = *(char *)(*param_2 + lVar4 * 0xc), cVar5 != '\b')) {
          if (cVar5 == '\x01') {
            uVar2 = FUN_1491db798(*(undefined8 *)(param_1 + 0x1b0));
            *(undefined4 *)(*param_3 + lVar4 * 4) = uVar2;
          }
          else if (((-1 < (int)uVar1) &&
                   (lVar8 = *(longlong *)(param_1 + 0x1b0), (int)uVar1 < *(int *)(lVar8 + 0xc0))) &&
                  (*(longlong *)(*(longlong *)(lVar8 + 0xb8) + (ulonglong)uVar1 * 8) != 0)) {
            FUN_1444a073c(lVar8,&local_70,uVar1,0);
            if (0 < local_68) {
              lVar8 = 0;
              do {
                local_88 = 0;
                FUN_1491db9c6(*(undefined8 *)(param_1 + 0x1b0));
                if (((1e-08 < local_7c) || (1e-08 < local_78)) || (1e-08 < local_74)) {
                  *(undefined4 *)(*param_3 + lVar4 * 4) = *(undefined4 *)(local_70 + lVar8 * 4);
                }
                lVar8 = lVar8 + 1;
              } while (lVar8 < local_68);
            }
            if (local_70 != 0) {
              FUN_1400020a8();
            }
          }
          uVar1 = *(uint *)(*param_3 + lVar4 * 4);
          if (uVar1 != 0xffffffff) {
            *(undefined4 *)(*param_3 + lVar4 * 4) = 0xffffffff;
            if (*(int *)(*param_3 + lVar4 * 4) == -1) {
              piVar3 = (int *)(*param_3 + lVar4 * 4);
              do {
                if (((int)uVar1 < 0) ||
                   (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xc0) <= (int)uVar1)) {
                  lVar8 = 0;
                  cVar5 = '\0';
                }
                else {
                  lVar8 = *(longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x1b0) + 0xb8) +
                           (ulonglong)uVar1 * 8);
                  cVar5 = *(char *)(lVar8 + 0x10);
                  lVar8 = *(longlong *)(lVar8 + 0x14);
                }
                iVar6 = -1;
                if ((longlong)(int)param_2[1] != 0) {
                  uVar7 = 0;
                  do {
                    if ((*(longlong *)(*param_2 + 4 + uVar7) == lVar8) &&
                       (*(char *)(*param_2 + uVar7) == cVar5)) {
                      iVar6 = (int)(uVar7 >> 2) * -0x55555555;
                      break;
                    }
                    uVar7 = uVar7 + 0xc;
                  } while ((longlong)(int)param_2[1] * 0xc != uVar7);
                }
                *piVar3 = iVar6;
                uVar1 = FUN_1491db798(*(undefined8 *)(param_1 + 0x1b0));
              } while ((uVar1 != 0xffffffff) &&
                      (piVar3 = (int *)(*param_3 + lVar4 * 4), *piVar3 == -1));
            }
          }
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < (int)param_2[1]);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492338ea FUN_1492338ea body=118 status=ok
// SIG undefined FUN_1492338ea(void)

void FUN_1492338ea(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149233962(param_1 + 8,param_1 + 0x18,*(undefined1 *)(param_1 + 0x28),param_1 + 0x30);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233962 FUN_149233962 body=132 status=ok
// SIG undefined FUN_149233962(void)

void FUN_149233962(undefined8 param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f3506(&local_28,param_1,param_2,param_3);
  if (&local_28 == param_4) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_4 != 0) {
      FUN_1400020a8();
    }
    *param_4 = local_28;
    *(undefined4 *)(param_4 + 1) = local_20;
    *(undefined4 *)((longlong)param_4 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492339fc FUN_1492339fc body=114 status=ok
// SIG undefined FUN_1492339fc(void)

void FUN_1492339fc(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149233a70(param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233a70 FUN_149233a70 body=129 status=ok
// SIG undefined FUN_149233a70(void)

void FUN_149233a70(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f35f4(&local_28,param_1,param_2);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233b06 FUN_149233b06 body=114 status=ok
// SIG undefined FUN_149233b06(void)

void FUN_149233b06(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149233b7a(param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233b7a FUN_149233b7a body=129 status=ok
// SIG undefined FUN_149233b7a(void)

void FUN_149233b7a(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f36a4(&local_28,param_1,param_2);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233c0c FUN_149233c0c body=110 status=ok
// SIG undefined FUN_149233c0c(void)

void FUN_149233c0c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149233c7c(param_1 + 8,param_1 + 0x18);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233c7c FUN_149233c7c body=126 status=ok
// SIG undefined FUN_149233c7c(void)

void FUN_149233c7c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1491f374e(&local_28,param_1);
  if (&local_28 == param_2) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_28;
    *(undefined4 *)(param_2 + 1) = local_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233d0c FUN_149233d0c body=100 status=ok
// SIG undefined FUN_149233d0c(void)

void FUN_149233d0c(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233db2 FUN_149233db2 body=150 status=ok
// SIG undefined FUN_149233db2(void)

void FUN_149233db2(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  lVar1 = (longlong)*(int *)(param_1 + 0x18);
  if ((lVar1 < 0) || (*(int *)(param_1 + 0x10) <= *(int *)(param_1 + 0x18))) {
    *(undefined1 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(*(longlong *)(param_1 + 8) + 8 + lVar1 * 0xc);
    *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(*(longlong *)(param_1 + 8) + lVar1 * 0xc);
  }
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233e4a FUN_149233e4a body=57 status=ok
// SIG undefined FUN_149233e4a(void)

void FUN_149233e4a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149233ee0(*puVar1,puVar1[4],puVar1[8],puVar1[0xc],puVar1[0x10],puVar1[0x14]);
  return;
}



// FUNCTION 149233e84 FUN_149233e84 body=92 status=ok
// SIG undefined FUN_149233e84(void)

void FUN_149233e84(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x220) + 8))(param_1 + 0x220);
  FUN_149233ee0(param_1 + 0x1f0,param_1 + 0x1f8,param_1 + 0x208,param_1 + 0x214,param_1 + 0x218,
                param_1 + 0x21c);
  return;
}



// FUNCTION 149233ee0 FUN_149233ee0 body=254 status=ok
// SIG undefined FUN_149233ee0(void)

void FUN_149233ee0(longlong *param_1,longlong *param_2,undefined8 *param_3,uint *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*param_1 == 0) {
    *param_5 = (int)param_2[1];
    *param_4 = 0;
    FUN_1446f57c6(&DAT_14cc00d40,&local_40);
    *param_1 = local_40;
    uVar3 = *param_4;
  }
  else {
    cVar2 = FUN_1403f35db(*param_1,&DAT_14cc00d40);
    uVar3 = *param_4;
    if (cVar2 != '\0') {
      uVar3 = uVar3 + 1;
      *param_4 = uVar3;
    }
  }
  if (((int)uVar3 < 0) || ((int)param_2[1] <= (int)uVar3)) {
    *(undefined1 *)param_3 = 0;
    *(undefined8 *)((longlong)param_3 + 4) = 0;
    FUN_1446f57c6(&DAT_14cc00db0,&local_40);
    *param_1 = local_40;
  }
  else {
    lVar1 = *param_2;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 8 + (ulonglong)uVar3 * 0xc);
    *param_3 = *(undefined8 *)(lVar1 + (ulonglong)uVar3 * 0xc);
  }
  uVar4 = FUN_1490fb5f2(*param_4,*param_5);
  *param_6 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149233fe0 FUN_149233fe0 body=45 status=ok
// SIG undefined FUN_149233fe0(void)

void FUN_149233fe0(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)*param_2;
  uVar2 = puVar1[4];
  uVar3 = puVar1[8];
  FUN_1444888de(uVar3,*puVar1);
  FUN_149197016(uVar3,uVar2);
  return;
}



// FUNCTION 14923400e FUN_14923400e body=102 status=ok
// SIG undefined FUN_14923400e(void)

void FUN_14923400e(undefined8 param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_149234076(param_1);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149234076 FUN_149234076 body=108 status=ok
// SIG undefined FUN_149234076(void)

void FUN_149234076(longlong param_1)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x10);
  _Src = *(void **)(param_1 + 8);
  *(int *)(param_1 + 0x30) = iVar2;
  if (iVar2 == 0 && *(int *)(param_1 + 0x34) == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    FUN_149192186(puVar1,iVar2);
    if (iVar2 != 0) {
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 0xc);
    }
  }
  FUN_149197016(puVar1,param_1 + 0x18);
  return;
}



// FUNCTION 1492340e2 FUN_1492340e2 body=268 status=ok
// SIG undefined FUN_1492340e2(void)

undefined8 FUN_1492340e2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &PTR_FUN_14bbe1d20;
  local_80 = 0;
  uStack_78 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0xffff;
  local_40 = 0xffffffff;
  local_60 = 0xffffffff;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_30 = 0;
  uStack_28 = 0;
  local_98 = *(undefined4 *)(param_1 + 0x10);
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_94 = *(undefined8 *)(param_1 + 0x14);
  local_8c = *(undefined4 *)(param_1 + 0x1c);
  local_86 = *(undefined1 *)(param_1 + 0x20);
  local_88 = 0x101;
  FUN_1492341f0(param_2,&local_a8);
  local_a8 = &PTR_FUN_14bbe1d20;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492341f0 FUN_1492341f0 body=211 status=ok
// SIG undefined FUN_1492341f0(void)

undefined8 * FUN_1492341f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dfc8e();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ea6fc();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 1492342c4 FUN_1492342c4 body=1181 status=ok
// SIG undefined FUN_1492342c4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1492342c4(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,char param_5,
                  char param_6,undefined8 param_7,longlong param_8,longlong param_9,void **param_10)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 *_Src;
  ulonglong uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  void *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar5 = FUN_1491e0f6a(param_8,param_2,*(undefined8 *)(param_1 + 0x1b0));
  if ((cVar5 != '\0') &&
     (cVar5 = FUN_1491e0f6a(param_9,param_3,*(undefined8 *)(param_1 + 0x1b0)), cVar5 != '\0'))
  goto LAB_14923457b;
  *(undefined4 *)(param_10 + 1) = 0;
  if (*(int *)((longlong)param_10 + 0xc) < 0) {
    FUN_14920a7da(param_10,0);
  }
  cVar5 = FUN_144828dba(param_8,param_2,*(undefined8 *)(param_1 + 0x1b0));
  if ((cVar5 == '\0') ||
     (cVar5 = FUN_144828dba(param_9,param_3,*(undefined8 *)(param_1 + 0x1b0)), cVar5 == '\0'))
  goto LAB_14923457b;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  lVar7 = *(longlong *)(param_8 + 0x18);
  if (lVar7 == 0) {
LAB_1492343ec:
    lVar7 = 0;
  }
  else {
    bVar1 = *(byte *)(lVar7 + 0x10);
    if ((0x20 < (ulonglong)bVar1) || ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if ((bVar1 == 0x80) &&
         (lVar7 = FUN_140813120(*(undefined8 *)(param_1 + 0x1b0),lVar7), lVar7 != 0)) {
        bVar1 = *(byte *)(lVar7 + 0x10);
        if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0x80)) goto LAB_1492343ef;
      }
      goto LAB_1492343ec;
    }
  }
LAB_1492343ef:
  lVar8 = *(longlong *)(param_9 + 0x18);
  if (lVar8 == 0) {
LAB_149234564:
    uStack_50 = uStack_50 & 0xffffffff00000000;
  }
  else {
    bVar1 = *(byte *)(lVar8 + 0x10);
    if ((0x20 < (ulonglong)bVar1) || ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) {
      if ((bVar1 == 0x80) &&
         (lVar8 = FUN_140813120(*(undefined8 *)(param_1 + 0x1b0),lVar8), lVar8 != 0)) {
        bVar1 = *(byte *)(lVar8 + 0x10);
        if ((((ulonglong)bVar1 < 0x21) && ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
           (bVar1 == 0x80)) goto LAB_149234421;
      }
      goto LAB_149234564;
    }
LAB_149234421:
    if (lVar7 == 0) goto LAB_149234564;
    if (param_5 != '\0') {
      uStack_50 = CONCAT44(uStack_50._4_4_,1);
      FUN_149192788(&local_58,0);
      *(undefined4 *)(local_58 + 1) = *(undefined4 *)(lVar8 + 0x18);
      *local_58 = *(undefined8 *)(lVar8 + 0x10);
    }
    lVar8 = FUN_140813120(*(undefined8 *)(param_1 + 0x1b0),lVar8);
    if (lVar8 != 0) {
      bVar1 = *(byte *)(lVar8 + 0x10);
      uVar9 = (ulonglong)bVar1;
      uVar4 = local_60;
      if (uVar9 < 0x21) goto joined_r0x00014923446f;
joined_r0x00014923462c:
      uVar3 = uStack_50;
      uVar2 = local_60._4_4_;
      if (bVar1 == 0x80) {
        do {
          local_60 = uVar4;
          uStack_50._0_4_ = (int)uVar3;
          uStack_50._4_4_ = (uint)(uVar3 >> 0x20);
          if (lVar8 == lVar7) {
            local_60._4_4_ = uVar2;
            if (param_4 != '\0') {
              lVar8 = (longlong)(int)uStack_50;
              uVar6 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
              if (uStack_50._4_4_ < uVar6) {
                FUN_149192788(&local_58,uVar3 & 0xffffffff);
              }
              *(undefined4 *)((longlong)local_58 + lVar8 * 0xc + 8) = *(undefined4 *)(lVar7 + 0x18);
              *(undefined8 *)((longlong)local_58 + lVar8 * 0xc) = *(undefined8 *)(lVar7 + 0x10);
              uVar3 = uStack_50;
            }
            goto LAB_1492345e4;
          }
          lVar10 = (longlong)(int)uStack_50;
          uVar6 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
          if (uStack_50._4_4_ < uVar6) {
            FUN_149192788(&local_58,uVar3 & 0xffffffff);
          }
          *(undefined4 *)((longlong)local_58 + lVar10 * 0xc + 8) = *(undefined4 *)(lVar8 + 0x18);
          *(undefined8 *)((longlong)local_58 + lVar10 * 0xc) = *(undefined8 *)(lVar8 + 0x10);
          lVar8 = FUN_140813120(*(undefined8 *)(param_1 + 0x1b0),lVar8);
          if (lVar8 == 0) goto LAB_149234632;
          bVar1 = *(byte *)(lVar8 + 0x10);
          uVar9 = (ulonglong)bVar1;
          uVar4 = local_60;
          if (0x20 < uVar9) break;
joined_r0x00014923446f:
          uVar4 = local_60;
          uVar3 = uStack_50;
          uVar2 = local_60._4_4_;
        } while ((0x100010016U >> (uVar9 & 0x3f) & 1) != 0);
        goto joined_r0x00014923462c;
      }
    }
LAB_149234632:
    bVar11 = (longlong)uStack_50 < 0;
    uStack_50 = uStack_50 & 0xffffffff00000000;
    if (bVar11) {
      FUN_14920a7da(&local_58,0);
      uVar3 = uStack_50;
LAB_1492345e4:
      uStack_50 = uVar3;
      _Src = local_58;
      lVar7 = (longlong)(int)uStack_50;
      local_68 = (void *)0x0;
      local_60 = CONCAT44(local_60._4_4_,(int)uStack_50);
      if (lVar7 == 0) goto LAB_149234656;
      FUN_149192186(&local_68,uStack_50 & 0xffffffff,0);
      memcpy(local_68,_Src,lVar7 * 0xc);
    }
    else {
      local_60 = 0;
LAB_149234656:
      local_68 = (void *)0x0;
      local_60 = local_60 & 0xffffffff;
    }
    if (&local_68 != param_10) {
      if (*param_10 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_10 = local_68;
      local_68 = (void *)0x0;
      *(undefined4 *)(param_10 + 1) = (undefined4)local_60;
      *(undefined4 *)((longlong)param_10 + 0xc) = local_60._4_4_;
      local_60 = 0;
    }
    if (local_68 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (param_6 == '\0') {
      FUN_1491f374e(&local_68,param_10);
      if (&local_68 == param_10) {
        if (local_68 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_10 != (void *)0x0) {
          FUN_1400020a8();
        }
        *param_10 = local_68;
        local_68 = (void *)0x0;
        *(undefined4 *)(param_10 + 1) = (undefined4)local_60;
        *(undefined4 *)((longlong)param_10 + 0xc) = local_60._4_4_;
      }
    }
  }
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14923457b:
  FUN_1444888de(param_7,param_10);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149234762 FUN_149234762 body=268 status=ok
// SIG undefined FUN_149234762(void)

undefined8 FUN_149234762(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_c8 [32];
  undefined **local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  longlong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  undefined4 local_60;
  undefined1 local_50;
  undefined8 local_4c;
  undefined2 local_44;
  undefined4 local_40;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = &PTR_FUN_14bbe1d20;
  local_80 = 0;
  uStack_78 = 0;
  local_50 = 0;
  local_4c = 0;
  local_44 = 0xffff;
  local_40 = 0xffffffff;
  local_60 = 0xffffffff;
  local_70 = 0;
  local_6c = 0;
  local_64 = 0xffff;
  local_30 = 0;
  uStack_28 = 0;
  local_98 = *(undefined4 *)(param_1 + 0x10);
  local_a0 = *(undefined8 *)(param_1 + 8);
  local_94 = *(undefined8 *)(param_1 + 0x14);
  local_8c = *(undefined4 *)(param_1 + 0x1c);
  local_86 = *(undefined1 *)(param_1 + 0x20);
  local_88 = 0x101;
  FUN_149234870(param_2,&local_a8);
  local_a8 = &PTR_FUN_14bbe1d20;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149234870 FUN_149234870 body=211 status=ok
// SIG undefined FUN_149234870(void)

undefined8 * FUN_149234870(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466dff2c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466ea6fc();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149234944 FUN_149234944 body=122 status=ok
// SIG undefined FUN_149234944(void)

undefined8 FUN_149234944(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined **local_48;
  undefined8 local_40;
  undefined1 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = &PTR_FUN_14bbe1e40;
  local_30 = 0;
  uStack_28 = 0;
  local_40 = *(undefined8 *)(param_1 + 8);
  local_38 = *(undefined1 *)(param_1 + 0x10);
  FUN_1492349c0(param_2,&local_48);
  local_48 = &PTR_FUN_14bbe1e40;
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492349c0 FUN_1492349c0 body=211 status=ok
// SIG undefined FUN_1492349c0(void)

undefined8 * FUN_1492349c0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e01ca();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e041a();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149234a94 FUN_149234a94 body=108 status=ok
// SIG undefined FUN_149234a94(void)

longlong FUN_149234a94(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x480) != *(int *)(param_1 + 0x4ac)) {
    lVar2 = param_1 + 0x4b0;
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x4b8);
    }
    iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x4c0) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar2 = *(longlong *)(param_1 + 0x478) + (longlong)iVar3 * 0x20;
        if (*(uint *)(*(longlong *)(param_1 + 0x478) + (longlong)iVar3 * 0x20) == param_2)
        goto LAB_149234aa4;
        iVar3 = *(int *)(lVar2 + 0x18);
      } while (iVar3 != -1);
    }
  }
  lVar2 = 0;
LAB_149234aa4:
  lVar1 = lVar2 + 8;
  if (lVar2 == 0) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 149234b00 FUN_149234b00 body=249 status=ok
// SIG undefined FUN_149234b00(void)

undefined8 FUN_149234b00(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  longlong local_78 [2];
  longlong local_68 [2];
  undefined **local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = &PTR_FUN_14bbe1ed0;
  local_40 = 0;
  uStack_38 = 0;
  local_42 = 1;
  local_50 = *(undefined8 *)(param_1 + 8);
  local_48 = *(undefined4 *)(param_1 + 0x10);
  local_44 = *(undefined1 *)(param_1 + 0x14);
  local_43 = *(undefined1 *)(param_1 + 0x15);
  local_41 = *(undefined1 *)(param_1 + 0x16);
  FUN_149234bfa(param_2);
  FUN_140056680(local_68,L"Items");
  FUN_140056680(local_78,L"Collection.Keys");
  local_88 = 1;
  FUN_1490fb142(param_2,local_78,local_68,1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  local_58 = &PTR_FUN_14bbe1ed0;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149234bfa FUN_149234bfa body=211 status=ok
// SIG undefined FUN_149234bfa(void)

undefined8 * FUN_149234bfa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e066a();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e0958();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149234cce FUN_149234cce body=189 status=ok
// SIG undefined FUN_149234cce(void)

undefined8 FUN_149234cce(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_88 [32];
  undefined **local_68;
  longlong local_60 [4];
  undefined2 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &PTR_FUN_14bbe1f60;
  local_60[0] = 0;
  local_60[1] = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  local_40 = 0;
  local_38 = 0;
  uStack_30 = 0;
  FUN_1444888de(local_60,param_1 + 8);
  local_60[2] = *(undefined8 *)(param_1 + 0x18);
  local_60[3] = *(undefined8 *)(param_1 + 0x20);
  local_40 = *(undefined2 *)(param_1 + 0x28);
  FUN_149234d8c(param_2,&local_68);
  local_68 = &PTR_FUN_14bbe1f60;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149234d8c FUN_149234d8c body=211 status=ok
// SIG undefined FUN_149234d8c(void)

undefined8 * FUN_149234d8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e0e8c();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e11c6();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149234e60 FUN_149234e60 body=238 status=ok
// SIG undefined FUN_149234e60(void)

undefined8 FUN_149234e60(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_70 [2];
  longlong local_60 [2];
  undefined **local_50;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = &PTR_FUN_14bbe1ff0;
  local_48[0] = 0;
  local_48[1] = 0;
  local_48[2] = 0;
  local_48[3] = 0;
  FUN_1444888de(local_48,param_1 + 8);
  FUN_149234f50(param_2,&local_50);
  FUN_140056680(local_60,L"Items");
  FUN_140056680(local_70,L"Collection");
  local_78 = 1;
  FUN_1490fb142(param_2,local_70,local_60,1);
  if (local_70[0] != 0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  local_50 = &PTR_FUN_14bbe1ff0;
  if (local_48[2] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48[4] ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149234f50 FUN_149234f50 body=211 status=ok
// SIG undefined FUN_149234f50(void)

undefined8 * FUN_149234f50(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  uVar1 = FUN_1466e1946();
  param_1[2] = uVar1;
  uVar1 = FUN_1466e1b3c();
  param_1[3] = uVar1;
  param_1[4] = 0;
  param_1[5] = 0;
  FUN_1490fb43c(param_1,param_2);
  return param_1;
}



// FUNCTION 149235024 FUN_149235024 body=25 status=ok
// SIG undefined FUN_149235024(void)

undefined8 FUN_149235024(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14923503e FUN_14923503e body=25 status=ok
// SIG undefined FUN_14923503e(void)

undefined8 FUN_14923503e(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149235058 FUN_149235058 body=25 status=ok
// SIG undefined FUN_149235058(void)

undefined8 FUN_149235058(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149235072 FUN_149235072 body=25 status=ok
// SIG undefined FUN_149235072(void)

undefined8 FUN_149235072(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14923508c FUN_14923508c body=25 status=ok
// SIG undefined FUN_14923508c(void)

undefined8 FUN_14923508c(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492350a6 FUN_1492350a6 body=25 status=ok
// SIG undefined FUN_1492350a6(void)

undefined8 FUN_1492350a6(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492350c0 FUN_1492350c0 body=25 status=ok
// SIG undefined FUN_1492350c0(void)

undefined8 FUN_1492350c0(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 1492350da FUN_1492350da body=25 status=ok
// SIG undefined FUN_1492350da(void)

undefined8 FUN_1492350da(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 14923510a FUN_14923510a body=54 status=ok
// SIG undefined FUN_14923510a(void)

void FUN_14923510a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149235140(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc);
  return;
}



// FUNCTION 149235140 FUN_149235140 body=223 status=ok
// SIG undefined FUN_149235140(void)

void FUN_149235140(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar4 = FUN_1492d52f6();
    if ((cVar4 != '\0') &&
       (lVar6 = *(longlong *)(param_1 + 0x1b0), *(int *)(lVar6 + 0xc0) < *(int *)(param_1 + 0x150)))
    {
      uVar5 = FUN_140813180(lVar6,param_2);
      lVar6 = FUN_141125054(lVar6,uVar5);
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x1b0);
        uVar5 = FUN_140813180(uVar2,param_3);
        lVar7 = FUN_141125054(uVar2,uVar5);
        if (lVar7 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x1b0);
          uVar1 = *(undefined1 *)(lVar3 + 0x330);
          *(undefined1 *)(lVar3 + 0x330) = 1;
          lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
          if (lVar8 != 0) {
            FUN_1491dc426(lVar8,lVar6,lVar7,0,1,0);
          }
          *(undefined1 *)(lVar3 + 0x330) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 149235236 FUN_149235236 body=54 status=ok
// SIG undefined FUN_149235236(void)

void FUN_149235236(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923526c(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc);
  return;
}



// FUNCTION 14923526c FUN_14923526c body=231 status=ok
// SIG undefined FUN_14923526c(void)

void FUN_14923526c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar4 = FUN_1492d52f6();
    if ((cVar4 != '\0') &&
       (lVar6 = *(longlong *)(param_1 + 0x1b0), *(int *)(lVar6 + 0xc0) < *(int *)(param_1 + 0x150)))
    {
      uVar5 = FUN_140813180(lVar6,param_2);
      lVar6 = FUN_141125054(lVar6,uVar5);
      if (lVar6 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0x1b0);
        uVar5 = FUN_140813180(uVar2,param_3);
        lVar7 = FUN_141125054(uVar2,uVar5);
        if (lVar7 != 0) {
          lVar3 = *(longlong *)(param_1 + 0x1b0);
          uVar1 = *(undefined1 *)(lVar3 + 0x330);
          *(undefined1 *)(lVar3 + 0x330) = 1;
          lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
          if (lVar8 != 0) {
            FUN_1491dc426(lVar8,lVar6,lVar7,0x3f800000,1,1);
          }
          *(undefined1 *)(lVar3 + 0x330) = uVar1;
        }
      }
    }
  }
  return;
}



// FUNCTION 149235354 FUN_149235354 body=86 status=ok
// SIG undefined FUN_149235354(void)

void FUN_149235354(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)((undefined8 *)*param_2)[4];
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_14923541c(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)*param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492353ac FUN_1492353ac body=110 status=ok
// SIG undefined FUN_1492353ac(void)

void FUN_1492353ac(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_20 = *(undefined4 *)(param_1 + 0x208);
  FUN_14923541c(param_1 + 0x10,param_1 + 0x1f0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923541c FUN_14923541c body=275 status=ok
// SIG undefined FUN_14923541c(void)

void FUN_14923541c(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    cVar5 = FUN_1492d52f6();
    if (((cVar5 != '\0') &&
        (*(int *)(*(longlong *)(param_1 + 0x1b0) + 0xc0) < *(int *)(param_1 + 0x150))) &&
       (lVar4 = param_3[1], (longlong)(int)lVar4 != 0)) {
      lVar2 = *param_3;
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(param_1 + 0x1b0);
        uVar1 = *(undefined1 *)(lVar3 + 0x330);
        *(undefined1 *)(lVar3 + 0x330) = 1;
        lVar6 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
        if (lVar6 != 0) {
          local_50 = *(undefined4 *)((undefined8 *)(lVar2 + lVar7) + 1);
          local_58 = *(undefined8 *)(lVar2 + lVar7);
          local_68 = *param_2;
          local_60 = *(undefined4 *)(param_2 + 1);
          local_78 = 0;
          FUN_1491e359a(lVar6,&local_68,&local_58,0);
        }
        *(undefined1 *)(lVar3 + 0x330) = uVar1;
        lVar7 = lVar7 + 0xc;
      } while ((longlong)(int)lVar4 * 0xc != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235530 FUN_149235530 body=48 status=ok
// SIG undefined FUN_149235530(void)

void FUN_149235530(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_1492355b0(*(undefined8 *)(param_1 + 0xc0),
                CONCAT71((int7)((ulonglong)*param_2 >> 8),*(undefined1 *)*param_2),param_2[4],
                param_2[8],*(undefined1 *)param_2[0xc]);
  return;
}



// FUNCTION 149235568 FUN_149235568 body=72 status=ok
// SIG undefined FUN_149235568(void)

void FUN_149235568(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492355b0(param_1 + 0x10,*(undefined1 *)(param_1 + 0x1f0),param_1 + 500,param_1 + 0x200,
                *(undefined1 *)(param_1 + 0x20c));
  return;
}



// FUNCTION 1492355b0 FUN_1492355b0 body=762 status=ok
// SIG undefined FUN_1492355b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492355b0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,byte param_5)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined *local_d0;
  longlong *local_c8;
  undefined1 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [104];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar5 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x150) <= *(int *)(lVar5 + 0xc0))) goto LAB_1492357f7;
  uVar4 = FUN_140813180(lVar5,param_3);
  lVar5 = FUN_141125054(lVar5,uVar4);
  if ((lVar5 == 0) || ((*(char *)(lVar5 + 0x10) != '\x04' && (*(char *)(lVar5 + 0x10) != '\x02'))))
  goto LAB_1492357f7;
  if (param_2 == '\x02') {
    uVar2 = *(undefined8 *)(param_1 + 0x1b0);
    uVar4 = FUN_140813180(uVar2,param_4);
    lVar6 = FUN_141125054(uVar2,uVar4);
    if (lVar6 == 0) goto LAB_1492357f7;
    bVar1 = *(byte *)(lVar6 + 0x10);
    if (((0x20 < (ulonglong)bVar1) || ((0x100010016U >> ((ulonglong)bVar1 & 0x3f) & 1) == 0)) &&
       (bVar1 != 0x80)) goto LAB_1492357f7;
    iVar7 = (uint)param_5 * 2 + 1;
    FUN_1401571e4(*(undefined8 *)(param_1 + 0x1b0),local_a8,lVar5,iVar7);
LAB_1492356ae:
    local_b8[0] = 0;
    local_b8[1] = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc09538) && (FUN_144b3d300(&DAT_14cc09538), DAT_14cc09538 == -1)) {
      _DAT_14cc09508 = 0;
      _DAT_14cc09510 = 0;
      _DAT_14cc094e8 = 0;
      uRam000000014cc094f0 = 0;
      _DAT_14cc09514 = 0xffffffff00000080;
      _DAT_14cc0951c = 0;
      DAT_14cc09528 = 0;
      _DAT_14cc09530 = 0;
      atexit(FUN_1444b01d1);
      _Init_thread_footer(&DAT_14cc09538);
    }
    local_d0 = &DAT_14cc094e8;
    local_d8 = 1;
    local_c8 = local_b8;
    cVar3 = FUN_1491dc052(*(undefined8 *)(param_1 + 0x1b0),lVar5,lVar6,0);
    if (cVar3 == '\0') {
LAB_1492357a3:
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      goto LAB_1492357f7;
    }
    cVar3 = FUN_1492d52f6(param_1);
    if (cVar3 != '\0') {
      local_d0 = &DAT_14cc094e8;
      local_d8 = 1;
      local_c8 = local_b8;
      cVar3 = FUN_1491dc052(*(undefined8 *)(param_1 + 0x1b0),lVar5,lVar6,1);
      if (cVar3 == '\0') goto LAB_1492357a3;
    }
    if (local_b8[0] != 0) {
      FUN_1400020a8();
    }
  }
  else {
    iVar7 = (uint)param_5 * 2 + 1;
    FUN_1401571e4(*(undefined8 *)(param_1 + 0x1b0),local_a8,lVar5,iVar7);
    if (param_2 == '\x01') {
      cVar3 = FUN_1491dce1a(*(undefined8 *)(param_1 + 0x1b0),lVar5,0,1);
    }
    else {
      if (param_2 != '\0') {
        lVar6 = 0;
        goto LAB_1492356ae;
      }
      cVar3 = FUN_1491dcf0e(*(undefined8 *)(param_1 + 0x1b0),lVar5,0,1);
    }
    if (cVar3 == '\0') goto LAB_1492357f7;
  }
  local_c0 = 0;
  local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffffffffff00);
  local_d0 = (undefined *)((ulonglong)local_d0 & 0xffffffffffffff00);
  local_d8 = 1;
  FUN_140122d4e(*(undefined8 *)(param_1 + 0x1b0),lVar5,local_a8,iVar7);
LAB_1492357f7:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1492358c6 FUN_1492358c6 body=117 status=ok
// SIG undefined FUN_1492358c6(void)

void FUN_1492358c6(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492359cc(local_1f8,param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235956 FUN_149235956 body=117 status=ok
// SIG undefined FUN_149235956(void)

void FUN_149235956(longlong param_1)

{
  undefined1 auStack_218 [32];
  undefined1 local_1f8 [480];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_218;
  FUN_1412ca278(local_1f8);
  FUN_1490d751a(local_1f8);
  FUN_1492359cc(local_1f8,param_1 + 8,param_1 + 0x18,param_1 + 0x28);
  FUN_140f8ccfc(local_1f8);
  if ((local_18 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492359cc FUN_1492359cc body=330 status=ok
// SIG undefined FUN_1492359cc(void)

void FUN_1492359cc(longlong param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_1 + 0x1b0);
  if (lVar1 != 0) {
    uVar2 = FUN_140813180(lVar1);
    if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(lVar1 + 0xc0))) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0xb8) + (ulonglong)uVar2 * 8), lVar1 != 0)) {
      FUN_1444a0862(*(undefined8 *)(param_1 + 0x1b0),&local_40,lVar1,0);
      if (&local_40 == param_3) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_3 != 0) {
          FUN_1400020a8();
        }
        *param_3 = local_40;
        local_40 = 0;
        *(undefined4 *)(param_3 + 1) = local_38;
        *(undefined4 *)((longlong)param_3 + 0xc) = local_34;
      }
      local_48 = *(undefined4 *)(lVar1 + 0x18);
      local_50 = *(undefined8 *)(lVar1 + 0x10);
      FUN_1444a063c(*(undefined8 *)(param_1 + 0x1b0),&local_40,&local_50,0);
      if (&local_40 == param_4) {
        if (local_40 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*param_4 != 0) {
          FUN_1400020a8();
        }
        *param_4 = local_40;
        *(undefined4 *)(param_4 + 1) = local_38;
        *(undefined4 *)((longlong)param_4 + 0xc) = local_34;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235b18 FUN_149235b18 body=86 status=ok
// SIG undefined FUN_149235b18(void)

void FUN_149235b18(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar1 = (undefined8 *)((undefined8 *)*param_2)[4];
  local_18 = *puVar1;
  local_10 = *(undefined4 *)(puVar1 + 1);
  FUN_149235be0(*(undefined8 *)(param_1 + 0xc0),*(undefined8 *)*param_2);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235b70 FUN_149235b70 body=110 status=ok
// SIG undefined FUN_149235b70(void)

void FUN_149235b70(longlong param_1)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_20 = *(undefined4 *)(param_1 + 0x208);
  FUN_149235be0(param_1 + 0x10,param_1 + 0x1f0);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235be0 FUN_149235be0 body=178 status=ok
// SIG undefined FUN_149235be0(void)

void FUN_149235be0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x1b0);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0xc0) < *(int *)(param_1 + 0x150))) {
    uVar4 = FUN_140813180(lVar2);
    if ((-1 < (int)uVar4) &&
       (((int)uVar4 < *(int *)(lVar2 + 0xc0) &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0xb8) + (ulonglong)uVar4 * 8), lVar2 != 0)))) {
      iVar1 = *(int *)(param_3 + 8);
      iVar5 = FUN_14449ffea(*(undefined8 *)(param_1 + 0x1b0),lVar2);
      if (iVar1 == iVar5) {
        FUN_1444a0dd8(*(undefined8 *)(param_1 + 0x1b0),lVar2,param_3,0,1);
        cVar3 = FUN_1492d52f6(param_1);
        if (cVar3 != '\0') {
          FUN_1444a0dd8(*(undefined8 *)(param_1 + 0x1b0),lVar2,param_3,1,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 149235c9e FUN_149235c9e body=35 status=ok
// SIG undefined FUN_149235c9e(void)

void FUN_149235c9e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149235cc2(param_1 + 0x10);
  return;
}



// FUNCTION 149235cc2 FUN_149235cc2 body=98 status=ok
// SIG undefined FUN_149235cc2(void)

void FUN_149235cc2(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  cVar1 = FUN_14923c708();
  if (cVar1 != '\0') {
    FUN_1466ce248(*(undefined8 *)(param_1 + 0x1b0));
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235d4c FUN_149235d4c body=61 status=ok
// SIG undefined FUN_149235d4c(void)

void FUN_149235d4c(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149235d8a(param_1 + 0x10,param_1 + 0x1f0,*(undefined1 *)(param_1 + 0x1f8),param_1 + 0x200);
  return;
}



// FUNCTION 149235d8a FUN_149235d8a body=523 status=ok
// SIG undefined FUN_149235d8a(void)

void FUN_149235d8a(longlong param_1,undefined8 *param_2,char param_3,void **param_4)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined1 local_70;
  void *local_68;
  uint local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  cVar3 = FUN_14923c708();
  if (cVar3 != '\0') {
    *(undefined4 *)(param_4 + 1) = 0;
    if (*(int *)((longlong)param_4 + 0xc) < 0) {
      FUN_14920a7da(param_4,0);
    }
    lVar4 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x4c);
      *(uint *)(lVar4 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      lVar5 = FUN_14923c936(*(undefined8 *)(param_1 + 0x148));
      if (lVar5 != 0) {
        lVar6 = FUN_144a81888(lVar5);
        if (lVar6 != 0) {
          plVar7 = (longlong *)FUN_144a81888(lVar5);
          uVar8 = (**(code **)(*plVar7 + 0x310))();
          local_70 = 0;
          local_78 = 0;
          local_80 = 0;
          local_88 = 0;
          FUN_1491d4242(lVar4,&local_68,uVar8,param_2);
          if (&local_68 == param_4) {
            if (local_68 != (void *)0x0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*param_4 != (void *)0x0) {
              FUN_1400020a8();
            }
            *param_4 = local_68;
            local_68 = (void *)0x0;
            *(uint *)(param_4 + 1) = local_60;
            *(undefined4 *)((longlong)param_4 + 0xc) = local_5c;
          }
          if (param_3 != '\0') {
            plVar7 = (longlong *)FUN_144a81888(lVar5);
            lVar5 = (**(code **)(*plVar7 + 0x3f8))();
            if (lVar5 != 0) {
              local_78 = 0;
              local_80 = 0;
              local_88 = 0;
              FUN_1491e7432(lVar4,&local_68,lVar5,*param_2);
              if ((longlong)(int)local_60 != 0) {
                iVar2 = *(int *)(param_4 + 1);
                *(uint *)(param_4 + 1) = iVar2 + local_60;
                if ((uint)(*(int *)((longlong)param_4 + 0xc) - iVar2) < local_60) {
                  FUN_149192788(param_4,iVar2);
                }
                memmove((void *)((longlong)iVar2 * 0xc + (longlong)*param_4),local_68,
                        (longlong)(int)local_60 * 0xc);
                local_60 = 0;
              }
              if (local_68 != (void *)0x0) {
                FUN_1400020a8();
              }
            }
          }
        }
      }
      *(undefined4 *)(lVar4 + 0x4c) = uVar1;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149235fb4 FUN_149235fb4 body=54 status=ok
// SIG undefined FUN_149235fb4(void)

void FUN_149235fb4(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149235fea(param_1 + 0x10,param_1 + 0x1f0,param_1 + 0x1fc);
  return;
}



// FUNCTION 149235fea FUN_149235fea body=174 status=ok
// SIG undefined FUN_149235fea(void)

void FUN_149235fea(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *param_3 = 0;
    lVar4 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar4 != 0) {
      uVar1 = *(undefined4 *)(lVar4 + 0x4c);
      *(uint *)(lVar4 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      local_40 = *(undefined4 *)(param_2 + 1);
      local_48 = *param_2;
      uVar3 = FUN_1491ea7d0(lVar4,&local_48,0,0);
      *param_3 = uVar3;
      *(undefined4 *)(lVar4 + 0x4c) = uVar1;
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923609a FUN_14923609a body=60 status=ok
// SIG undefined FUN_14923609a(void)

void FUN_14923609a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_14923612e(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 1492360d6 FUN_1492360d6 body=87 status=ok
// SIG undefined FUN_1492360d6(void)

void FUN_1492360d6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923612e(param_1 + 0x10,param_1 + 0x210,*(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,
                param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 14923612e FUN_14923612e body=302 status=ok
// SIG undefined FUN_14923612e(void)

void FUN_14923612e(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined1 local_100;
  undefined1 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [12];
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_6 = 8;
    *(undefined8 *)((longlong)param_6 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      local_108 = local_c8;
      puVar5 = local_108;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_d0 = *(undefined4 *)(param_4 + 1);
      local_d8 = *param_4;
      local_100 = param_3 == '\x01';
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      FUN_1491e31cc(lVar3,&local_64,*param_5);
      *(undefined4 *)(param_6 + 1) = local_5c;
      *param_6 = local_64;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923625e FUN_14923625e body=60 status=ok
// SIG undefined FUN_14923625e(void)

void FUN_14923625e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492362f2(*(undefined8 *)(param_1 + 0xc0),*puVar1,
                CONCAT71((int7)((ulonglong)puVar1[4] >> 8),*(undefined1 *)puVar1[4]),puVar1[8],
                puVar1[0xc],puVar1[0x10]);
  return;
}



// FUNCTION 14923629a FUN_14923629a body=87 status=ok
// SIG undefined FUN_14923629a(void)

void FUN_14923629a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492362f2(param_1 + 0x10,param_1 + 0x210,*(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,
                param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492362f2 FUN_1492362f2 body=298 status=ok
// SIG undefined FUN_1492362f2(void)

void FUN_1492362f2(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8 [12];
  undefined8 local_64;
  undefined4 local_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_6 = 8;
    *(undefined8 *)((longlong)param_6 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      local_f8 = local_c8;
      puVar5 = local_f8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar5 = *param_2;
        param_2 = param_2 + 1;
        puVar5 = puVar5 + 1;
      }
      local_d0 = *(undefined4 *)(param_4 + 1);
      local_d8 = *param_4;
      local_f0 = param_3 == '\x01';
      local_e0 = 0;
      local_e8 = 0;
      FUN_1491e441c(lVar3,&local_64,*param_5);
      *(undefined4 *)(param_6 + 1) = local_5c;
      *param_6 = local_64;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149236432 FUN_149236432 body=86 status=ok
// SIG undefined FUN_149236432(void)

void FUN_149236432(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_1492364f8(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)*param_2,param_2[4],param_2[8],
                *(undefined1 *)param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 149236488 FUN_149236488 body=112 status=ok
// SIG undefined FUN_149236488(void)

void FUN_149236488(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492364f8(param_1 + 0x10,*(undefined4 *)(param_1 + 0x278),param_1 + 0x280,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492364f8 FUN_1492364f8 body=572 status=ok
// SIG undefined FUN_1492364f8(void)

void FUN_1492364f8(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 unaff_RBP;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_668 [32];
  undefined1 *local_648;
  undefined4 *local_640;
  undefined8 *local_638;
  longlong *local_630;
  undefined1 local_628;
  undefined1 local_620;
  undefined8 local_618;
  undefined4 local_610;
  undefined1 local_608 [444];
  undefined4 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined8 uStack_3d4;
  undefined1 local_3cc;
  undefined2 local_3cb;
  undefined1 local_3c9;
  undefined8 local_3c8 [12];
  longlong local_368 [12];
  undefined8 local_304;
  undefined4 local_2fc;
  longlong local_2f8 [12];
  undefined8 local_298 [13];
  undefined1 local_230 [440];
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_668;
  local_78 = 0;
  uStack_70 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      FUN_1491d73b0(local_230);
      (**(code **)(*param_3 + 0x10))(param_3,local_230);
      local_648 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_298,param_4,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,param_6);
      plVar5 = param_3 + 10;
      plVar7 = local_2f8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      plVar5 = local_2f8;
      plVar7 = local_368;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      puVar6 = local_298;
      puVar8 = local_3c8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      local_448 = 0;
      uStack_440 = 0;
      local_438 = 0;
      uStack_430 = 0;
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      uStack_3dc = 0;
      uStack_3d8 = 0;
      uStack_3d4 = 0;
      local_3cc = 1;
      local_3c9 = 0;
      local_3cb = 0;
      local_44c = param_2;
      FUN_14918b1f6(local_608,local_230);
      local_618 = *param_6;
      local_610 = *(undefined4 *)(param_6 + 1);
      local_620 = 0;
      local_628 = 0;
      local_630 = local_368;
      local_648 = local_608;
      local_640 = &local_44c;
      local_638 = local_3c8;
      FUN_1491ecf78(lVar3,&local_304,*param_7);
      *(undefined4 *)(param_8 + 1) = local_2fc;
      *param_8 = local_304;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
      FUN_14918b3e4(local_230);
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_668) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923673c FUN_14923673c body=88 status=ok
// SIG undefined FUN_14923673c(void)

void FUN_14923673c(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_149236802(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)*param_2,param_2[4],param_2[8],
                *(undefined1 *)param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 149236794 FUN_149236794 body=110 status=ok
// SIG undefined FUN_149236794(void)

void FUN_149236794(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149236802(param_1 + 0x10,*(undefined4 *)(param_1 + 0x278),param_1 + 0x280,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 149236802 FUN_149236802 body=551 status=ok
// SIG undefined FUN_149236802(void)

void FUN_149236802(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_648 [32];
  undefined1 *local_628;
  undefined4 *local_620;
  undefined8 *local_618;
  longlong *local_610;
  undefined1 local_608;
  undefined1 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined1 local_5e8 [444];
  undefined4 local_42c;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined8 uStack_3b4;
  undefined1 local_3ac;
  undefined2 local_3ab;
  undefined1 local_3a9;
  undefined8 local_3a8 [12];
  longlong local_348 [12];
  undefined8 local_2e4;
  undefined4 local_2dc;
  longlong local_2d8 [12];
  undefined8 local_278 [13];
  undefined1 local_210 [440];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_648;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      FUN_1491d73b0(local_210);
      (**(code **)(*param_3 + 0x10))(param_3,local_210);
      local_628 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_278,param_4,param_5,param_6);
      plVar5 = param_3 + 10;
      plVar7 = local_2d8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      plVar5 = local_2d8;
      plVar7 = local_348;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      puVar6 = local_278;
      puVar8 = local_3a8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      local_428 = 0;
      uStack_420 = 0;
      local_418 = 0;
      uStack_410 = 0;
      local_408 = 0;
      uStack_400 = 0;
      local_3f8 = 0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      uStack_3e0 = 0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_3c8 = 0;
      uStack_3c0 = 0;
      uStack_3bc = 0;
      uStack_3b8 = 0;
      uStack_3b4 = 0;
      local_3ac = 1;
      local_3a9 = 0;
      local_3ab = 0;
      local_42c = param_2;
      FUN_14918b1f6(local_5e8,local_210);
      local_5f8 = *param_6;
      local_5f0 = *(undefined4 *)(param_6 + 1);
      local_600 = 0;
      local_608 = 0;
      local_610 = local_348;
      local_628 = local_5e8;
      local_620 = &local_42c;
      local_618 = local_3a8;
      FUN_1491ecf78(lVar3,&local_2e4,*param_7);
      *(undefined4 *)(param_8 + 1) = local_2dc;
      *param_8 = local_2e4;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
      FUN_14918b3e4(local_210);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_648) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149236a30 FUN_149236a30 body=86 status=ok
// SIG undefined FUN_149236a30(void)

void FUN_149236a30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149236af6(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 149236a86 FUN_149236a86 body=111 status=ok
// SIG undefined FUN_149236a86(void)

void FUN_149236a86(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149236af6(param_1 + 0x10,param_1 + 0x278,param_1 + 0x290,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 149236af6 FUN_149236af6 body=574 status=ok
// SIG undefined FUN_149236af6(void)

void FUN_149236af6(longlong param_1,double *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_648 [32];
  undefined1 *local_628;
  float *local_620;
  undefined8 *local_618;
  longlong *local_610;
  undefined1 local_608;
  undefined1 local_600;
  undefined8 local_5f8;
  undefined4 local_5f0;
  undefined1 local_5e8 [444];
  float local_42c;
  float local_428;
  undefined8 local_424;
  undefined8 uStack_41c;
  undefined8 local_414;
  undefined8 uStack_40c;
  undefined8 local_404;
  undefined8 uStack_3fc;
  undefined8 local_3f4;
  undefined8 uStack_3ec;
  undefined8 local_3e4;
  undefined8 uStack_3dc;
  undefined8 local_3d4;
  undefined8 uStack_3cc;
  undefined8 local_3c4;
  undefined8 uStack_3bc;
  undefined8 local_3b4;
  undefined1 local_3ac;
  undefined2 local_3ab;
  undefined1 local_3a9;
  undefined8 local_3a8 [12];
  longlong local_348 [12];
  undefined8 local_2e4;
  undefined4 local_2dc;
  longlong local_2d8 [12];
  undefined8 local_278 [13];
  undefined1 local_210 [440];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_648;
  local_58 = 0;
  uStack_50 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar3 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar3 != 0) {
      FUN_1491d73b0(local_210);
      (**(code **)(*param_3 + 0x10))(param_3,local_210);
      local_628 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_278,param_4,param_5,param_6);
      local_428 = (float)param_2[1];
      local_42c = (float)*param_2;
      plVar5 = param_3 + 0xe;
      plVar7 = local_2d8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x4c);
      *(uint *)(lVar3 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      plVar5 = local_2d8;
      plVar7 = local_348;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar7 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      }
      puVar6 = local_278;
      puVar8 = local_3a8;
      for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar8 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar8 = puVar8 + 1;
      }
      local_424 = 0;
      uStack_41c = 0;
      local_414 = 0;
      uStack_40c = 0;
      local_404 = 0;
      uStack_3fc = 0;
      local_3f4 = 0;
      uStack_3ec = 0;
      local_3e4 = 0;
      uStack_3dc = 0;
      local_3d4 = 0;
      uStack_3cc = 0;
      local_3c4 = 0;
      uStack_3bc = 0;
      local_3b4 = 0;
      local_3ac = 1;
      local_3a9 = 0;
      local_3ab = 0;
      FUN_14918b1f6(local_5e8,local_210);
      local_5f8 = *param_6;
      local_5f0 = *(undefined4 *)(param_6 + 1);
      local_600 = 0;
      local_608 = 0;
      local_610 = local_348;
      local_628 = local_5e8;
      local_620 = &local_42c;
      local_618 = local_3a8;
      FUN_1491ecf78(lVar3,&local_2e4,*param_7);
      *(undefined4 *)(param_8 + 1) = local_2dc;
      *param_8 = local_2e4;
      *(undefined4 *)(lVar3 + 0x4c) = uVar1;
      FUN_14918b3e4(local_210);
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_648) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149236d42 FUN_149236d42 body=86 status=ok
// SIG undefined FUN_149236d42(void)

void FUN_149236d42(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_149236e08(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 149236d98 FUN_149236d98 body=111 status=ok
// SIG undefined FUN_149236d98(void)

void FUN_149236d98(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149236e08(param_1 + 0x10,param_1 + 0x278,param_1 + 0x290,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 149236e08 FUN_149236e08 body=2820 status=ok
// SIG undefined FUN_149236e08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149236e08(longlong param_1,undefined1 (*param_2) [16],longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  undefined8 uVar13;
  longlong lVar14;
  double *pdVar15;
  double *pdVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  double dVar30;
  undefined1 auStack_928 [32];
  undefined1 *local_908;
  float *local_900;
  double *local_8f8;
  double *local_8f0;
  undefined1 local_8e8;
  undefined1 local_8e0;
  undefined1 local_8d8 [16];
  undefined1 local_8c8 [16];
  undefined8 local_8b8;
  undefined4 local_8b0;
  undefined1 local_8a8 [444];
  float local_6ec;
  float local_6e8;
  float local_6e4;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined4 local_670;
  undefined1 local_66c;
  undefined2 local_66b;
  undefined1 local_669;
  double local_668 [12];
  double local_608 [12];
  undefined8 local_5a8;
  undefined4 local_5a0;
  double local_598;
  double dStack_590;
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined8 local_538;
  undefined4 local_530;
  double local_528;
  double dStack_520;
  double local_518;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  double dStack_4f0;
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  double local_4c8 [4];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_460 [440];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double dStack_150;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_928;
  local_2a8 = 0;
  uStack_2a0 = 0;
  cVar8 = FUN_14923c708();
  if (cVar8 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar11 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar11 != 0) {
      FUN_1491d73b0(local_460);
      (**(code **)(*param_3 + 0x10))(param_3,local_460);
      local_908 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_4c8,param_4,param_5,param_6);
      dVar4 = *(double *)*param_2;
      dVar5 = *(double *)(*param_2 + 8);
      auVar6 = *param_2;
      dVar1 = *(double *)param_2[1];
      if ((char)param_3[2] == '\x01') {
        if (*(char *)((longlong)param_3 + 0x11) == '\x01') {
          uVar13 = *(undefined8 *)(param_1 + 0x1b0);
          local_530 = *(undefined4 *)(param_6 + 1);
          local_538 = *param_6;
          uVar9 = FUN_140813180(uVar13);
          uVar9 = FUN_14486750c(uVar13,&local_528,uVar9,0);
          auVar28 = _DAT_149934d80;
          local_568 = ZEXT816(0);
          local_578 = ZEXT816(0);
          dVar4 = local_4e8._0_8_;
          dVar3 = local_4e8._8_8_;
          dVar5 = local_4d8._0_8_;
          dVar2 = local_478._0_8_;
          local_8d8 = local_488;
          auVar21 = local_8d8;
          auVar23 = minpd(local_488,local_4e8);
          auVar26 = minpd(local_478,local_4d8);
          auVar24._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
          auVar24._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
          iVar10 = movmskpd(uVar9,auVar24);
          auVar23._8_8_ = -(ulonglong)(auVar26._8_8_ < 0.0);
          auVar23._0_8_ = -(ulonglong)(auVar26._0_8_ < 0.0);
          uVar12 = movmskpd((int)uVar13,auVar23);
          local_8d8._0_8_ = local_488._0_8_;
          uVar13 = local_8d8._0_8_;
          local_8d8._8_8_ = local_488._8_8_;
          uVar7 = local_8d8._8_8_;
          local_8d8 = auVar21;
          if ((uVar12 & 0x3fffffff) == 0 && iVar10 == 0) {
            local_8c8 = local_478;
            local_598 = local_4c8[1] * local_518 * -1.0 +
                        local_4c8[2] * dStack_520 +
                        local_4c8[3] * local_528 * 1.0 + local_4c8[0] * dStack_510;
            dStack_590 = local_4c8[0] * local_518 * 1.0 +
                         local_4c8[3] * dStack_520 +
                         local_4c8[2] * local_528 * -1.0 + local_4c8[1] * dStack_510;
            dVar18 = local_4c8[2] * local_518 * -1.0 +
                     ((local_528 * local_4c8[0] * -1.0 + local_4c8[3] * dStack_510) -
                     local_4c8[1] * dStack_520);
            local_588._8_4_ = SUB84(dVar18,0);
            local_588._0_8_ =
                 local_4c8[3] * local_518 * 1.0 +
                 ((local_528 * local_4c8[1] * 1.0 + local_4c8[2] * dStack_510) -
                 local_4c8[0] * dStack_520);
            local_588._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
            local_4a8 = local_4a8 * dVar4;
            dStack_4a0 = dStack_4a0 * dVar3;
            local_498 = local_498 * dVar5;
            dStack_490 = dStack_490 * local_4d8._8_8_;
            dVar18 = dStack_4a0 * local_528 - dStack_520 * local_4a8;
            dVar30 = local_498 * dStack_520 - local_518 * dStack_4a0;
            dVar19 = local_4a8 * local_518 - local_528 * local_498;
            dVar22 = dStack_490 * dStack_510 - dStack_510 * dStack_490;
            dVar30 = dVar30 + dVar30;
            dVar19 = dVar19 + dVar19;
            dVar18 = dVar18 + dVar18;
            dVar22 = dVar22 + dVar22;
            dStack_500 = (dVar30 * local_518 - dVar18 * local_528) +
                         dStack_510 * dVar19 + dStack_4a0 + dStack_500;
            dStack_4f0 = (dVar22 * dStack_510 - dVar22 * dStack_510) +
                         dStack_510 * dVar22 + dStack_490 + dStack_4f0;
            local_578._8_4_ = SUB84(dStack_500,0);
            local_578._0_8_ =
                 (dVar18 * dStack_520 - local_518 * dVar19) + dStack_510 * dVar30 + local_4a8 +
                 local_508;
            local_578._12_4_ = (int)((ulonglong)dStack_500 >> 0x20);
            local_568._8_4_ = SUB84(dStack_4f0,0);
            local_568._0_8_ =
                 (dVar19 * local_528 - dStack_520 * dVar30) + dStack_510 * dVar18 + local_498 +
                 local_4f8;
            local_568._12_4_ = (int)((ulonglong)dStack_4f0 >> 0x20);
          }
          else {
            dVar19 = dStack_520 + dStack_520;
            dVar18 = local_518 + local_518;
            dVar30 = local_528 * (local_528 + local_528);
            local_1a8 = (1.0 - (dVar30 + dStack_520 * dVar19)) * dVar5;
            dVar22 = (local_528 + local_528) * dStack_510;
            local_1b8 = (dVar19 * dStack_510 + local_528 * dVar18) * dVar5;
            dStack_1b0 = (dVar18 * dStack_520 - dVar22) * dVar5;
            local_1f8 = ((double)DAT_149934d80 - (local_518 * dVar18 + dStack_520 * dVar19)) * dVar4
            ;
            dVar30 = (DAT_149934d80._8_8_ - (local_518 * dVar18 + dVar30)) * dVar3;
            dStack_1f0 = (dVar19 * local_528 + dVar18 * dStack_510) * dVar4;
            local_1c8 = (dVar18 * dStack_520 + dVar22) * dVar3;
            local_1e8 = (local_528 * dVar18 - dVar19 * dStack_510) * dVar4;
            uStack_1e0 = 0;
            local_1d8._8_4_ = SUB84(dVar30,0);
            local_1d8._0_8_ = (dVar19 * local_528 - dVar18 * dStack_510) * dVar3;
            local_1d8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_508;
            dStack_190 = dStack_500;
            local_188 = local_4f8;
            uStack_180 = 0x3ff0000000000000;
            dVar27 = local_4c8[1] + local_4c8[1];
            dVar18 = local_4c8[2] + local_4c8[2];
            dVar20 = local_4c8[0] * (local_4c8[0] + local_4c8[0]);
            local_228 = (1.0 - (dVar20 + local_4c8[1] * dVar27)) * dVar2;
            dVar22 = (local_4c8[0] + local_4c8[0]) * local_4c8[3];
            local_238 = (dVar27 * local_4c8[3] + local_4c8[0] * dVar18) * dVar2;
            local_258 = (dVar27 * local_4c8[0] - dVar18 * local_4c8[3]) * (double)local_8d8._8_8_;
            dStack_230 = (dVar18 * local_4c8[1] - dVar22) * dVar2;
            dVar30 = dVar4 * (double)local_8d8._0_8_;
            dVar19 = dVar3 * (double)local_8d8._8_8_;
            local_278 = ((double)DAT_149934d80 - (local_4c8[2] * dVar18 + local_4c8[1] * dVar27)) *
                        (double)local_8d8._0_8_;
            dStack_250 = (DAT_149934d80._8_8_ - (local_4c8[2] * dVar18 + dVar20)) *
                         (double)local_8d8._8_8_;
            dStack_270 = (dVar27 * local_4c8[0] + dVar18 * local_4c8[3]) * (double)local_8d8._0_8_;
            local_248 = (dVar18 * local_4c8[1] + dVar22) * (double)local_8d8._8_8_;
            local_268 = (local_4c8[0] * dVar18 - dVar27 * local_4c8[3]) * (double)local_8d8._0_8_;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_4a8;
            dStack_210 = dStack_4a0;
            local_208 = local_498;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(local_178);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar21._8_8_ = -(ulonglong)(0.0 <= dVar19);
            auVar21._0_8_ = -(ulonglong)(0.0 <= dVar30);
            auVar21 = blendvpd(_DAT_149936790,auVar28,auVar21);
            uVar17 = -(ulonglong)(0.0 <= dVar5 * dVar2);
            dVar18 = (double)(~uVar17 & 0xbff0000000000000 |
                             (ulonglong)((uint)(uVar17 >> 0x20) & 0x3ff00000) << 0x20);
            dVar22 = auVar21._0_8_;
            local_178[2] = local_178[2] * dVar22;
            local_178[1] = local_178[1] * dVar22;
            local_178[0] = local_178[0] * dVar22;
            dVar22 = auVar21._8_8_;
            local_148 = local_148 * dVar22;
            dStack_150 = dStack_150 * dVar22;
            local_158 = dVar22 * local_158;
            local_128 = local_128 * dVar18;
            dStack_130 = dStack_130 * dVar18;
            local_138 = dVar18 * local_138;
            FUN_14481fd10(&local_298,local_178);
            dVar18 = local_288 * local_288 + local_298 * local_298;
            dVar22 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar25._0_8_ = dVar18 + dVar22;
            auVar25._8_8_ = dVar18 + dVar22;
            auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
            auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
            auVar21 = sqrtpd(auVar25,auVar25);
            auVar28 = divpd(auVar28,auVar21);
            auVar29._0_8_ = auVar28._0_8_ * local_288;
            auVar29._8_8_ = auVar28._8_8_ * dStack_280;
            local_598 = (double)((ulonglong)(local_298 * auVar28._0_8_) &
                                -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
            dStack_590 = (double)((ulonglong)(dStack_290 * auVar28._8_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
            local_588 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar29,auVar26);
            local_578._8_8_ = uStack_110;
            local_578._0_8_ = local_118;
            local_568._8_8_ = 0;
            local_568._0_8_ = local_108;
          }
          dVar18 = local_478._8_8_ * local_4d8._8_8_;
          local_558._8_4_ = SUB84((double)uVar7 * dVar3,0);
          local_558._0_8_ = (double)uVar13 * dVar4;
          local_558._12_4_ = (int)((ulonglong)((double)uVar7 * dVar3) >> 0x20);
          local_548._8_4_ = SUB84(dVar18,0);
          local_548._0_8_ = dVar2 * dVar5;
          local_548._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
          local_1f8 = 0.0;
          dStack_1f0 = 0.0;
          local_1e8 = 0.0;
          uStack_1e0 = 0x3ff0000000000000;
          uStack_1c0 = 0;
          local_1b8 = 1.0;
          dStack_1b0 = 1.0;
          local_1a8 = 1.0;
          uStack_1a0 = 0;
          local_1d8 = auVar6;
          local_1c8 = dVar1;
          FUN_1449437a2(&local_1f8,local_178);
          dVar1 = local_148;
          dVar4 = local_158;
          dVar5 = dStack_150;
        }
        else {
          uVar13 = *(undefined8 *)(param_1 + 0x1b0);
          local_5a0 = *(undefined4 *)(param_6 + 1);
          local_5a8 = *param_6;
          uVar9 = FUN_140813180(uVar13);
          FUN_14486750c(uVar13,local_178,uVar9,0);
          dVar1 = dVar1 * local_128;
          dVar4 = dVar4 * local_138;
          dVar5 = dVar5 * dStack_130;
        }
      }
      local_6e4 = (float)dVar1;
      local_6ec = (float)dVar4;
      local_6e8 = (float)dVar5;
      pdVar15 = (double *)(param_3 + 0x10);
      pdVar16 = local_178;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar16 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        pdVar16 = pdVar16 + 1;
      }
      uVar9 = *(undefined4 *)(lVar11 + 0x4c);
      *(uint *)(lVar11 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      pdVar15 = local_178;
      pdVar16 = local_608;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar16 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        pdVar16 = pdVar16 + 1;
      }
      pdVar15 = local_4c8;
      pdVar16 = local_668;
      for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
        *pdVar16 = *pdVar15;
        pdVar15 = pdVar15 + 1;
        pdVar16 = pdVar16 + 1;
      }
      local_6e0 = 0;
      uStack_6d8 = 0;
      local_6d0 = 0;
      uStack_6c8 = 0;
      local_6c0 = 0;
      uStack_6b8 = 0;
      local_6b0 = 0;
      uStack_6a8 = 0;
      local_6a0 = 0;
      uStack_698 = 0;
      local_690 = 0;
      uStack_688 = 0;
      local_680 = 0;
      uStack_678 = 0;
      local_670 = 0;
      local_66c = 1;
      local_669 = 0;
      local_66b = 0;
      FUN_14918b1f6(local_8a8,local_460);
      local_8b8 = *param_6;
      local_8b0 = *(undefined4 *)(param_6 + 1);
      local_8e0 = 0;
      local_8e8 = 0;
      local_8f0 = local_608;
      local_908 = local_8a8;
      local_900 = &local_6ec;
      local_8f8 = local_668;
      FUN_1491ecf78(lVar11,&local_1f8,*param_7);
      *(undefined4 *)(param_8 + 1) = dStack_1f0._0_4_;
      *param_8 = local_1f8;
      *(undefined4 *)(lVar11 + 0x4c) = uVar9;
      FUN_14918b3e4(local_460);
    }
  }
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_928) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149237914 FUN_149237914 body=86 status=ok
// SIG undefined FUN_149237914(void)

void FUN_149237914(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492379da(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923796a FUN_14923796a body=111 status=ok
// SIG undefined FUN_14923796a(void)

void FUN_14923796a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492379da(param_1 + 0x10,param_1 + 0x278,param_1 + 0x290,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492379da FUN_1492379da body=2862 status=ok
// SIG undefined FUN_1492379da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492379da(longlong param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  longlong lVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  undefined1 auVar21 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar28 [16];
  double dVar29;
  double dVar30;
  undefined1 auStack_918 [32];
  undefined1 *local_8f8;
  float *local_8f0;
  double *local_8e8;
  double *local_8e0;
  undefined1 local_8d8;
  undefined1 local_8d0;
  undefined8 local_8c8;
  undefined4 local_8c0;
  undefined1 local_8b8 [444];
  float local_6fc;
  float local_6f8;
  float local_6f4;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined4 local_680;
  undefined1 local_67c;
  undefined2 local_67b;
  undefined1 local_679;
  double local_678 [12];
  double local_618 [12];
  double local_5b8;
  double dStack_5b0;
  undefined1 local_5a8 [16];
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined8 local_558;
  undefined4 local_550;
  double local_548;
  double dStack_540;
  double local_538;
  double dStack_530;
  double local_528;
  double dStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  double dStack_510;
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  double local_4c8 [4];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_460 [440];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178 [2];
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_918;
  local_2a8 = 0;
  uStack_2a0 = 0;
  cVar5 = FUN_14923c708();
  if (cVar5 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar8 != 0) {
      FUN_1491d73b0(local_460);
      (**(code **)(*param_3 + 0x10))(param_3,local_460);
      local_8f8 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_4c8,param_4,param_5,param_6);
      local_4d8 = param_2[2];
      local_4e8 = *param_2;
      uStack_4e0 = param_2[1];
      if ((char)param_3[2] == '\x01') {
        uVar10 = *(undefined8 *)(param_1 + 0x1b0);
        local_550 = *(undefined4 *)(param_6 + 1);
        local_558 = *param_6;
        uVar6 = FUN_140813180(uVar10);
        uVar6 = FUN_14486750c(uVar10,&local_548,uVar6,0);
        auVar25 = _DAT_149934d80;
        local_588 = 0.0;
        dStack_580 = 0.0;
        local_598 = 0.0;
        dStack_590 = 0.0;
        dVar17 = local_508._0_8_;
        dVar3 = local_508._8_8_;
        dVar22 = local_4f8._0_8_;
        dVar1 = local_488._0_8_;
        dVar4 = local_488._8_8_;
        dVar2 = local_478._0_8_;
        auVar18 = minpd(local_488,local_508);
        auVar23 = minpd(local_478,local_4f8);
        auVar19._8_8_ = -(ulonglong)(auVar18._8_8_ < 0.0);
        auVar19._0_8_ = -(ulonglong)(auVar18._0_8_ < 0.0);
        iVar7 = movmskpd(uVar6,auVar19);
        auVar18._8_8_ = -(ulonglong)(auVar23._8_8_ < 0.0);
        auVar18._0_8_ = -(ulonglong)(auVar23._0_8_ < 0.0);
        uVar9 = movmskpd((int)uVar10,auVar18);
        if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
          local_5b8 = local_4c8[1] * local_538 * -1.0 +
                      local_4c8[2] * dStack_540 +
                      local_4c8[3] * local_548 * 1.0 + local_4c8[0] * dStack_530;
          dStack_5b0 = local_4c8[0] * local_538 * 1.0 +
                       local_4c8[3] * dStack_540 +
                       local_4c8[2] * local_548 * -1.0 + local_4c8[1] * dStack_530;
          dVar24 = local_4c8[2] * local_538 * -1.0 +
                   ((local_548 * local_4c8[0] * -1.0 + local_4c8[3] * dStack_530) -
                   local_4c8[1] * dStack_540);
          local_5a8._8_4_ = SUB84(dVar24,0);
          local_5a8._0_8_ =
               local_4c8[3] * local_538 * 1.0 +
               ((local_548 * local_4c8[1] * 1.0 + local_4c8[2] * dStack_530) -
               local_4c8[0] * dStack_540);
          local_5a8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          local_4a8 = local_4a8 * dVar17;
          dStack_4a0 = dStack_4a0 * dVar3;
          local_498 = local_498 * dVar22;
          dStack_490 = dStack_490 * local_4f8._8_8_;
          dVar24 = dStack_4a0 * local_548 - dStack_540 * local_4a8;
          dVar27 = local_498 * dStack_540 - local_538 * dStack_4a0;
          dVar29 = local_4a8 * local_538 - local_548 * local_498;
          dVar30 = dStack_490 * dStack_530 - dStack_530 * dStack_490;
          dVar27 = dVar27 + dVar27;
          dVar29 = dVar29 + dVar29;
          dVar24 = dVar24 + dVar24;
          dVar30 = dVar30 + dVar30;
          local_598 = (dVar24 * dStack_540 - local_538 * dVar29) + dStack_530 * dVar27 + local_4a8 +
                      local_528;
          dStack_590 = (dVar27 * local_538 - dVar24 * local_548) + dStack_530 * dVar29 + dStack_4a0
                       + dStack_520;
          local_588 = (dVar29 * local_548 - dStack_540 * dVar27) + dStack_530 * dVar24 + local_498 +
                      (double)CONCAT44(uStack_514,local_518);
          dStack_580 = (dVar30 * dStack_530 - dVar30 * dStack_530) +
                       dStack_530 * dVar30 + dStack_490 + dStack_510;
        }
        else {
          dVar29 = dStack_540 + dStack_540;
          dVar24 = local_538 + local_538;
          dVar27 = local_548 * (local_548 + local_548);
          local_1a8 = (1.0 - (dVar27 + dStack_540 * dVar29)) * dVar22;
          dVar30 = (local_548 + local_548) * dStack_530;
          local_1f8 = ((double)DAT_149934d80 - (local_538 * dVar24 + dStack_540 * dVar29)) * dVar17;
          dVar27 = (DAT_149934d80._8_8_ - (local_538 * dVar24 + dVar27)) * dVar3;
          dStack_1f0 = (dVar29 * local_548 + dVar24 * dStack_530) * dVar17;
          local_1c8 = (dVar24 * dStack_540 + dVar30) * dVar3;
          local_1e8._8_8_ = 0;
          local_1e8._0_8_ = (local_548 * dVar24 - dVar29 * dStack_530) * dVar17;
          local_1d8._8_4_ = SUB84(dVar27,0);
          local_1d8._0_8_ = (dVar29 * local_548 - dVar24 * dStack_530) * dVar3;
          local_1d8._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
          uStack_1c0 = 0;
          local_1b8._8_8_ = (dVar24 * dStack_540 - dVar30) * dVar22;
          local_1b8._0_8_ = (dVar29 * dStack_530 + local_548 * dVar24) * dVar22;
          uStack_1a0 = 0;
          local_198 = local_528;
          dStack_190 = dStack_520;
          local_188 = local_518;
          uStack_184 = uStack_514;
          uStack_180 = 0;
          uStack_17c = 0x3ff00000;
          dVar29 = local_4c8[1] + local_4c8[1];
          dVar24 = local_4c8[2] + local_4c8[2];
          dVar27 = local_4c8[0] * (local_4c8[0] + local_4c8[0]);
          local_228 = (1.0 - (dVar27 + local_4c8[1] * dVar29)) * dVar2;
          dVar30 = (local_4c8[0] + local_4c8[0]) * local_4c8[3];
          local_238 = (dVar29 * local_4c8[3] + local_4c8[0] * dVar24) * dVar2;
          local_258 = (dVar29 * local_4c8[0] - dVar24 * local_4c8[3]) * dVar4;
          dStack_230 = (dVar24 * local_4c8[1] - dVar30) * dVar2;
          local_278 = ((double)DAT_149934d80 - (local_4c8[2] * dVar24 + local_4c8[1] * dVar29)) *
                      dVar1;
          dStack_250 = (DAT_149934d80._8_8_ - (local_4c8[2] * dVar24 + dVar27)) * dVar4;
          dStack_270 = (dVar29 * local_4c8[0] + dVar24 * local_4c8[3]) * dVar1;
          local_248 = (dVar24 * local_4c8[1] + dVar30) * dVar4;
          local_268 = (local_4c8[0] * dVar24 - dVar29 * local_4c8[3]) * dVar1;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_4a8;
          dStack_210 = dStack_4a0;
          local_208 = local_498;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar23._8_8_ = -(ulonglong)(0.0 <= dVar3 * dVar4);
          auVar23._0_8_ = -(ulonglong)(0.0 <= dVar17 * dVar1);
          auVar18 = blendvpd(_DAT_149936790,auVar25,auVar23);
          uVar14 = -(ulonglong)(0.0 <= dVar22 * dVar2);
          dVar24 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
          dVar30 = auVar18._0_8_;
          local_178[1] = local_178[1] * dVar30;
          local_178[0] = local_178[0] * dVar30;
          local_168._0_8_ = (double)local_168._0_8_ * dVar30;
          dVar30 = auVar18._8_8_;
          local_148 = local_148 * dVar30;
          local_150 = local_150 * dVar30;
          local_158 = dVar30 * local_158;
          local_128 = local_128 * dVar24;
          local_130 = local_130 * dVar24;
          local_138 = dVar24 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar24 = local_288 * local_288 + local_298 * local_298;
          dVar30 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar20._0_8_ = dVar24 + dVar30;
          auVar20._8_8_ = dVar24 + dVar30;
          auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_);
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_);
          auVar18 = sqrtpd(auVar20,auVar20);
          auVar25 = divpd(auVar25,auVar18);
          auVar28._0_8_ = auVar25._0_8_ * local_288;
          auVar28._8_8_ = auVar25._8_8_ * dStack_280;
          local_5b8 = (double)((ulonglong)(local_298 * auVar25._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar20._0_8_));
          dStack_5b0 = (double)((ulonglong)(dStack_290 * auVar25._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar20._8_8_));
          local_5a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar28,auVar15);
          local_598 = local_118;
          dStack_590 = dStack_110;
          local_588 = local_108;
          dStack_580 = 0.0;
        }
        dVar24 = local_478._8_8_ * local_4f8._8_8_;
        local_578._8_4_ = SUB84(dVar4 * dVar3,0);
        local_578._0_8_ = dVar1 * dVar17;
        local_578._12_4_ = (int)((ulonglong)(dVar4 * dVar3) >> 0x20);
        local_568._8_4_ = SUB84(dVar24,0);
        local_568._0_8_ = dVar2 * dVar22;
        local_568._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        FUN_144a7484c(&local_4e8,local_178);
        auVar25 = _DAT_149934d80;
        local_1f8 = local_178[0];
        dStack_1f0 = local_178[1];
        local_1e8 = local_168;
        local_1d8 = ZEXT816(0);
        local_1c8 = 0.0;
        uStack_1c0 = 0;
        local_1b8 = _DAT_149934d80;
        local_1a8 = 1.0;
        uStack_1a0 = 0;
        FUN_1449437a2(&local_1f8,local_178,&local_5b8);
        dVar17 = (double)local_168._0_8_ * (double)local_168._0_8_ + local_178[0] * local_178[0];
        dVar22 = (double)local_168._8_8_ * (double)local_168._8_8_ + local_178[1] * local_178[1];
        auVar21._0_8_ = dVar17 + dVar22;
        auVar21._8_8_ = dVar17 + dVar22;
        auVar16._8_8_ = -(ulonglong)(1e-08 <= auVar21._8_8_);
        auVar16._0_8_ = -(ulonglong)(1e-08 <= auVar21._0_8_);
        auVar18 = sqrtpd(auVar21,auVar21);
        auVar25 = divpd(auVar25,auVar18);
        auVar26._0_8_ = auVar25._0_8_ * (double)local_168._0_8_;
        auVar26._8_8_ = auVar25._8_8_ * (double)local_168._8_8_;
        local_1f8 = (double)((ulonglong)(local_178[0] * auVar25._0_8_) &
                            -(ulonglong)(1e-08 <= auVar21._0_8_));
        dStack_1f0 = (double)((ulonglong)(local_178[1] * auVar25._8_8_) &
                             -(ulonglong)(1e-08 <= auVar21._8_8_));
        local_1e8 = blendvpd(_DAT_149935300,auVar26,auVar16);
        local_178[0] = local_1f8;
        local_178[1] = dStack_1f0;
        local_168 = local_1e8;
        FUN_1448052ee(&local_1f8,&local_4e8);
      }
      FUN_1414d053e(&local_4e8,local_178);
      local_6f4 = (float)(double)local_168._0_8_;
      local_6f8 = (float)local_178[1];
      local_6fc = (float)local_178[0];
      pdVar12 = (double *)(param_3 + 0x10);
      pdVar13 = local_178;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      uVar6 = *(undefined4 *)(lVar8 + 0x4c);
      *(uint *)(lVar8 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      pdVar12 = local_178;
      pdVar13 = local_618;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      pdVar12 = local_4c8;
      pdVar13 = local_678;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      local_6f0 = 0;
      uStack_6e8 = 0;
      local_6e0 = 0;
      uStack_6d8 = 0;
      local_6d0 = 0;
      uStack_6c8 = 0;
      local_6c0 = 0;
      uStack_6b8 = 0;
      local_6b0 = 0;
      uStack_6a8 = 0;
      local_6a0 = 0;
      uStack_698 = 0;
      local_690 = 0;
      uStack_688 = 0;
      local_680 = 0;
      local_67c = 1;
      local_679 = 0;
      local_67b = 0;
      FUN_14918b1f6(local_8b8,local_460);
      local_8c8 = *param_6;
      local_8c0 = *(undefined4 *)(param_6 + 1);
      local_8d0 = 0;
      local_8d8 = 0;
      local_8e0 = local_618;
      local_8e8 = local_678;
      local_8f8 = local_8b8;
      local_8f0 = &local_6fc;
      FUN_1491ecf78(lVar8,&local_1f8,*param_7);
      *(undefined4 *)(param_8 + 1) = dStack_1f0._0_4_;
      *param_8 = local_1f8;
      *(undefined4 *)(lVar8 + 0x4c) = uVar6;
      FUN_14918b3e4(local_460);
    }
  }
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_918) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149238518 FUN_149238518 body=86 status=ok
// SIG undefined FUN_149238518(void)

void FUN_149238518(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_2;
  FUN_1492385de(*(undefined8 *)(param_1 + 0xc0),*puVar1,puVar1[4],puVar1[8],
                *(undefined1 *)puVar1[0xc],puVar1[0x10],puVar1[0x14],puVar1[0x18]);
  return;
}



// FUNCTION 14923856e FUN_14923856e body=111 status=ok
// SIG undefined FUN_14923856e(void)

void FUN_14923856e(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492385de(param_1 + 0x10,param_1 + 0x280,param_1 + 0x2e0,param_1 + 0x210,
                *(undefined1 *)(param_1 + 0x270),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492385de FUN_1492385de body=2889 status=ok
// SIG undefined FUN_1492385de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1492385de(longlong param_1,double *param_2,longlong *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6,undefined8 *param_7,double *param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  double *pdVar12;
  double *pdVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar21;
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar28;
  double dVar29;
  undefined1 auStack_958 [32];
  undefined1 *local_938;
  float *local_930;
  double *local_928;
  double *local_920;
  undefined1 local_918;
  undefined1 local_910;
  undefined8 local_908;
  undefined4 local_900;
  undefined1 local_8f8 [444];
  float local_73c;
  float local_738;
  float local_734;
  float local_730;
  float local_72c;
  float local_728;
  float local_724;
  float local_720;
  float local_71c;
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [12];
  undefined4 uStack_6cc;
  undefined1 auStack_6c8 [12];
  undefined1 local_6bc;
  undefined2 local_6bb;
  undefined1 local_6b9;
  double local_6b8 [12];
  double local_658 [12];
  double local_5f8;
  double dStack_5f0;
  undefined1 local_5e8 [16];
  double local_5d8;
  double dStack_5d0;
  double local_5c8;
  double dStack_5c0;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  undefined8 local_598;
  undefined4 local_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  double local_568;
  double dStack_560;
  undefined4 local_558;
  undefined4 uStack_554;
  double dStack_550;
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  double local_528 [2];
  undefined1 local_518 [16];
  double local_508;
  double dStack_500;
  double local_4f8;
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_4c8 [4];
  double local_4a8;
  double dStack_4a0;
  double local_498;
  double dStack_490;
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 local_460 [440];
  longlong local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  double dStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  double local_178 [2];
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_958;
  local_2a8 = 0;
  uStack_2a0 = 0;
  cVar5 = FUN_14923c708();
  if (cVar5 != '\0') {
    *(undefined1 *)param_8 = 8;
    *(undefined8 *)((longlong)param_8 + 4) = 0;
    lVar8 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
    if (lVar8 != 0) {
      FUN_1491d73b0(local_460);
      (**(code **)(*param_3 + 0x10))(param_3,local_460);
      local_938 = *(undefined1 **)(param_1 + 0x1b0);
      FUN_14923c988(local_4c8,param_4,param_5,param_6);
      pdVar12 = local_528;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *param_2;
        param_2 = param_2 + 1;
        pdVar12 = pdVar12 + 1;
      }
      if ((char)param_3[2] == '\x01') {
        uVar11 = *(undefined8 *)(param_1 + 0x1b0);
        local_590 = *(undefined4 *)(param_6 + 1);
        local_598 = *param_6;
        uVar6 = FUN_140813180(uVar11);
        uVar6 = FUN_14486750c(uVar11,&local_588,uVar6,0);
        auVar26 = _DAT_149934d80;
        local_5c8 = 0.0;
        dStack_5c0 = 0.0;
        local_5d8 = 0.0;
        dStack_5d0 = 0.0;
        dVar16 = local_548._0_8_;
        dVar3 = local_548._8_8_;
        dVar21 = local_538._0_8_;
        dVar1 = local_488._0_8_;
        dVar4 = local_488._8_8_;
        dVar2 = local_478._0_8_;
        auVar17 = minpd(local_488,local_548);
        auVar22 = minpd(local_478,local_538);
        auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
        auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
        iVar7 = movmskpd(uVar6,auVar18);
        auVar17._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
        auVar17._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
        uVar9 = movmskpd((int)uVar11,auVar17);
        if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
          local_5f8 = local_4c8[1] * local_578 * -1.0 +
                      local_4c8[2] * dStack_580 +
                      local_4c8[3] * local_588 * 1.0 + local_4c8[0] * dStack_570;
          dStack_5f0 = local_4c8[0] * local_578 * 1.0 +
                       local_4c8[3] * dStack_580 +
                       local_4c8[2] * local_588 * -1.0 + local_4c8[1] * dStack_570;
          dVar24 = local_4c8[2] * local_578 * -1.0 +
                   ((local_588 * local_4c8[0] * -1.0 + local_4c8[3] * dStack_570) -
                   local_4c8[1] * dStack_580);
          local_5e8._8_4_ = SUB84(dVar24,0);
          local_5e8._0_8_ =
               local_4c8[3] * local_578 * 1.0 +
               ((local_588 * local_4c8[1] * 1.0 + local_4c8[2] * dStack_570) -
               local_4c8[0] * dStack_580);
          local_5e8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
          local_4a8 = local_4a8 * dVar16;
          dStack_4a0 = dStack_4a0 * dVar3;
          local_498 = local_498 * dVar21;
          dStack_490 = dStack_490 * local_538._8_8_;
          dVar24 = dStack_4a0 * local_588 - dStack_580 * local_4a8;
          dVar25 = local_498 * dStack_580 - local_578 * dStack_4a0;
          dVar28 = local_4a8 * local_578 - local_588 * local_498;
          dVar29 = dStack_490 * dStack_570 - dStack_570 * dStack_490;
          dVar25 = dVar25 + dVar25;
          dVar28 = dVar28 + dVar28;
          dVar24 = dVar24 + dVar24;
          dVar29 = dVar29 + dVar29;
          local_5d8 = (dVar24 * dStack_580 - local_578 * dVar28) + dStack_570 * dVar25 + local_4a8 +
                      local_568;
          dStack_5d0 = (dVar25 * local_578 - dVar24 * local_588) + dStack_570 * dVar28 + dStack_4a0
                       + dStack_560;
          local_5c8 = (dVar28 * local_588 - dStack_580 * dVar25) + dStack_570 * dVar24 + local_498 +
                      (double)CONCAT44(uStack_554,local_558);
          dStack_5c0 = (dVar29 * dStack_570 - dVar29 * dStack_570) +
                       dStack_570 * dVar29 + dStack_490 + dStack_550;
        }
        else {
          dVar28 = dStack_580 + dStack_580;
          dVar24 = local_578 + local_578;
          dVar25 = local_588 * (local_588 + local_588);
          local_1a8 = (1.0 - (dVar25 + dStack_580 * dVar28)) * dVar21;
          dVar29 = (local_588 + local_588) * dStack_570;
          local_1b8 = (dVar28 * dStack_570 + local_588 * dVar24) * dVar21;
          dStack_1b0 = (dVar24 * dStack_580 - dVar29) * dVar21;
          local_1f8 = ((double)DAT_149934d80 - (local_578 * dVar24 + dStack_580 * dVar28)) * dVar16;
          dVar25 = (DAT_149934d80._8_8_ - (local_578 * dVar24 + dVar25)) * dVar3;
          dStack_1f0 = (dVar28 * local_588 + dVar24 * dStack_570) * dVar16;
          local_1c8 = (dVar24 * dStack_580 + dVar29) * dVar3;
          local_1e8 = (local_588 * dVar24 - dVar28 * dStack_570) * dVar16;
          dStack_1e0 = 0.0;
          local_1d8._8_4_ = SUB84(dVar25,0);
          local_1d8._0_8_ = (dVar28 * local_588 - dVar24 * dStack_570) * dVar3;
          local_1d8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
          dStack_1c0 = 0.0;
          uStack_1a0 = 0;
          local_198 = local_568;
          dStack_190 = dStack_560;
          local_188 = local_558;
          uStack_184 = uStack_554;
          uStack_180 = 0;
          uStack_17c = 0x3ff00000;
          dVar28 = local_4c8[1] + local_4c8[1];
          dVar24 = local_4c8[2] + local_4c8[2];
          dVar25 = local_4c8[0] * (local_4c8[0] + local_4c8[0]);
          local_228 = (1.0 - (dVar25 + local_4c8[1] * dVar28)) * dVar2;
          dVar29 = (local_4c8[0] + local_4c8[0]) * local_4c8[3];
          local_238 = (dVar28 * local_4c8[3] + local_4c8[0] * dVar24) * dVar2;
          local_258 = (dVar28 * local_4c8[0] - dVar24 * local_4c8[3]) * dVar4;
          dStack_230 = (dVar24 * local_4c8[1] - dVar29) * dVar2;
          local_278 = ((double)DAT_149934d80 - (local_4c8[2] * dVar24 + local_4c8[1] * dVar28)) *
                      dVar1;
          dStack_250 = (DAT_149934d80._8_8_ - (local_4c8[2] * dVar24 + dVar25)) * dVar4;
          dStack_270 = (dVar28 * local_4c8[0] + dVar24 * local_4c8[3]) * dVar1;
          local_248 = (dVar24 * local_4c8[1] + dVar29) * dVar4;
          local_268 = (local_4c8[0] * dVar24 - dVar28 * local_4c8[3]) * dVar1;
          uStack_260 = 0;
          uStack_240 = 0;
          uStack_220 = 0;
          local_218 = local_4a8;
          dStack_210 = dStack_4a0;
          local_208 = local_498;
          uStack_200 = 0x3ff0000000000000;
          FUN_1447fea8d(local_178);
          FUN_144a1c686(local_178,0x3e45798ee0000000);
          auVar22._8_8_ = -(ulonglong)(0.0 <= dVar3 * dVar4);
          auVar22._0_8_ = -(ulonglong)(0.0 <= dVar16 * dVar1);
          auVar17 = blendvpd(_DAT_149936790,auVar26,auVar22);
          uVar14 = -(ulonglong)(0.0 <= dVar21 * dVar2);
          dVar24 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
          dVar29 = auVar17._0_8_;
          local_178[1] = local_178[1] * dVar29;
          local_178[0] = local_178[0] * dVar29;
          local_168._0_8_ = (double)local_168._0_8_ * dVar29;
          dVar29 = auVar17._8_8_;
          local_148 = local_148 * dVar29;
          local_150 = local_150 * dVar29;
          local_158 = dVar29 * local_158;
          local_128 = local_128 * dVar24;
          local_130 = local_130 * dVar24;
          local_138 = dVar24 * local_138;
          FUN_14481fd10(&local_298,local_178);
          dVar24 = local_288 * local_288 + local_298 * local_298;
          dVar29 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar19._0_8_ = dVar24 + dVar29;
          auVar19._8_8_ = dVar24 + dVar29;
          auVar15._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
          auVar15._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
          auVar17 = sqrtpd(auVar19,auVar19);
          auVar26 = divpd(auVar26,auVar17);
          auVar27._0_8_ = auVar26._0_8_ * local_288;
          auVar27._8_8_ = auVar26._8_8_ * dStack_280;
          local_5f8 = (double)((ulonglong)(local_298 * auVar26._0_8_) &
                              -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_));
          dStack_5f0 = (double)((ulonglong)(dStack_290 * auVar26._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_));
          local_5e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar27,auVar15);
          local_5d8 = local_118;
          dStack_5d0 = dStack_110;
          local_5c8 = local_108;
          dStack_5c0 = 0.0;
        }
        dVar24 = local_478._8_8_ * local_538._8_8_;
        local_5b8._8_4_ = SUB84(dVar4 * dVar3,0);
        local_5b8._0_8_ = dVar1 * dVar16;
        local_5b8._12_4_ = (int)((ulonglong)(dVar4 * dVar3) >> 0x20);
        local_5a8._8_4_ = SUB84(dVar24,0);
        local_5a8._0_8_ = dVar2 * dVar21;
        local_5a8._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
        FUN_1449437a2(local_528,local_178);
        pdVar12 = local_178;
        pdVar13 = local_528;
        for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
          *pdVar13 = *pdVar12;
          pdVar12 = pdVar12 + 1;
          pdVar13 = pdVar13 + 1;
        }
        dVar16 = (double)local_518._0_8_ * (double)local_518._0_8_ + local_528[0] * local_528[0];
        dVar21 = (double)local_518._8_8_ * (double)local_518._8_8_ + local_528[1] * local_528[1];
        auVar20._0_8_ = dVar16 + dVar21;
        auVar20._8_8_ = dVar16 + dVar21;
        auVar26._8_8_ = -(ulonglong)(1e-08 <= auVar20._8_8_);
        auVar26._0_8_ = -(ulonglong)(1e-08 <= auVar20._0_8_);
        auVar17 = sqrtpd(auVar20,auVar20);
        auVar17 = divpd(_DAT_149934d80,auVar17);
        auVar23._0_8_ = auVar17._0_8_ * (double)local_518._0_8_;
        auVar23._8_8_ = auVar17._8_8_ * (double)local_518._8_8_;
        local_528[0] = (double)((ulonglong)(local_528[0] * auVar17._0_8_) &
                               -(ulonglong)(1e-08 <= auVar20._0_8_));
        local_528[1] = (double)((ulonglong)(local_528[1] * auVar17._8_8_) &
                               -(ulonglong)(1e-08 <= auVar20._8_8_));
        local_518 = blendvpd(_DAT_149935300,auVar23,auVar26);
      }
      local_1f8 = local_508;
      dStack_1f0 = dStack_500;
      local_1e8 = local_4f8;
      local_178[0] = local_528[0];
      local_178[1] = local_528[1];
      local_168 = local_518;
      FUN_1448052ee(local_178,&dStack_1e0);
      local_1c8 = local_4e8;
      dStack_1c0 = dStack_4e0;
      local_1b8 = local_4d8;
      local_73c = (float)dStack_1e0;
      local_738 = (float)(double)local_1d8._0_8_;
      local_734 = (float)(double)local_1d8._8_8_;
      local_730 = (float)local_1f8;
      local_72c = (float)dStack_1f0;
      local_728 = (float)local_1e8;
      local_724 = (float)local_4e8;
      local_720 = (float)dStack_4e0;
      local_71c = (float)local_4d8;
      pdVar12 = (double *)(param_3 + 0x1e);
      pdVar13 = local_178;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      uVar6 = *(undefined4 *)(lVar8 + 0x4c);
      *(uint *)(lVar8 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
      pdVar12 = local_178;
      pdVar13 = local_658;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      local_928 = local_6b8;
      pdVar12 = local_4c8;
      pdVar13 = local_928;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar13 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        pdVar13 = pdVar13 + 1;
      }
      local_718 = ZEXT416(0);
      local_6d8 = local_718._0_12_;
      uStack_6cc = 0;
      auStack_6c8 = (undefined1  [12])0x0;
      local_6bc = 1;
      local_6b9 = 0;
      local_6bb = 0;
      local_708 = local_718;
      local_6f8 = local_718;
      local_6e8 = local_718;
      FUN_14918b1f6(local_8f8,local_460);
      local_908 = *param_6;
      local_900 = *(undefined4 *)(param_6 + 1);
      local_910 = 0;
      local_918 = 0;
      local_920 = local_658;
      local_938 = local_8f8;
      local_930 = &local_73c;
      FUN_1491ecf78(lVar8,&local_278,*param_7);
      *(undefined4 *)(param_8 + 1) = dStack_270._0_4_;
      *param_8 = local_278;
      *(undefined4 *)(lVar8 + 0x4c) = uVar6;
      FUN_14918b3e4(local_460);
    }
  }
  if (local_2a8 != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_958) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149239128 FUN_149239128 body=80 status=ok
// SIG undefined FUN_149239128(void)

void FUN_149239128(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_1492391f0(*(undefined8 *)(param_1 + 0xc0),
                CONCAT71((int7)((ulonglong)*param_2 >> 8),*(undefined1 *)*param_2),
                CONCAT71((int7)((ulonglong)param_2[4] >> 8),*(undefined1 *)param_2[4]),
                CONCAT71((int7)((ulonglong)param_2[8] >> 8),*(undefined1 *)param_2[8]),param_2[0x10]
                ,param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 149239190 FUN_149239190 body=95 status=ok
// SIG undefined FUN_149239190(void)

void FUN_149239190(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_1492391f0(param_1 + 0x10,*(undefined1 *)(param_1 + 0x210),*(undefined1 *)(param_1 + 0x211),
                *(undefined1 *)(param_1 + 0x212),param_1 + 0x1f0,param_1 + 0x1fc,param_1 + 0x204);
  return;
}



// FUNCTION 1492391f0 FUN_1492391f0 body=1242 status=ok
// SIG undefined FUN_1492391f0(void)

void FUN_1492391f0(longlong param_1,byte param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 *param_5,undefined8 *param_6,char *param_7)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_508 [32];
  undefined1 *local_4e8;
  uint local_4e0;
  undefined1 local_4d8;
  undefined8 local_4c8;
  undefined4 local_4c0;
  undefined8 local_4b8;
  undefined4 local_4b0;
  undefined8 local_4a8;
  undefined4 local_4a0;
  undefined1 local_498 [440];
  undefined1 local_2e0;
  undefined1 local_2df;
  undefined8 local_2dc;
  undefined1 local_2bc;
  undefined8 local_2bb;
  undefined8 uStack_2b3;
  undefined8 local_2ab;
  undefined8 uStack_2a3;
  undefined8 local_29b;
  undefined8 uStack_293;
  undefined8 local_28b;
  undefined8 uStack_283;
  undefined8 local_27b;
  undefined8 uStack_273;
  undefined8 local_26b;
  undefined8 uStack_263;
  undefined8 uStack_25b;
  undefined7 uStack_253;
  undefined1 local_24c;
  undefined7 uStack_24b;
  undefined8 uStack_244;
  undefined1 local_23c;
  undefined2 local_23b;
  undefined1 local_239;
  undefined1 local_238;
  undefined8 local_237;
  undefined8 uStack_22f;
  undefined8 local_227;
  undefined8 uStack_21f;
  undefined8 local_217;
  undefined8 uStack_20f;
  undefined8 local_207;
  undefined8 uStack_1ff;
  undefined8 local_1f7;
  undefined8 uStack_1ef;
  undefined8 local_1e7;
  undefined8 uStack_1df;
  undefined8 local_1d7;
  undefined7 uStack_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined2 local_1b7;
  undefined1 local_1b5;
  longlong local_128 [2];
  longlong local_118;
  undefined8 uStack_110;
  ulonglong local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_ec;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d4;
  undefined1 uStack_d0;
  undefined8 uStack_cf;
  undefined8 local_c7;
  undefined8 uStack_bf;
  undefined8 local_b7;
  undefined8 uStack_af;
  undefined8 local_a7;
  undefined8 uStack_9f;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 uStack_87;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_508;
  local_118 = 0;
  uStack_110 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 == '\0') goto LAB_1492392be;
  FUN_1400021e4(param_6,local_128);
  local_4e0 = 0xffffffff;
  local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffff00000000);
  FUN_1447ee042(local_128,&DAT_149e31048,1,1);
  *param_7 = '\b';
  param_7[4] = '\0';
  param_7[5] = '\0';
  param_7[6] = '\0';
  param_7[7] = '\0';
  param_7[8] = '\0';
  param_7[9] = '\0';
  param_7[10] = '\0';
  param_7[0xb] = '\0';
  lVar5 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar5 != 0) {
    FUN_1491d73b0(&local_2e0);
    local_2df = 0;
    FUN_1491d74b0(&local_2e0,1,1,1);
    uStack_24b = 0;
    uStack_244 = 0;
    uStack_25b = 0;
    uStack_253 = 0;
    local_24c = 0;
    local_26b = 0;
    uStack_263 = 0;
    local_27b = 0;
    uStack_273 = 0;
    local_28b = 0;
    uStack_283 = 0;
    local_29b = 0;
    uStack_293 = 0;
    local_2ab = 0;
    uStack_2a3 = 0;
    local_2bb = 0;
    uStack_2b3 = 0;
    local_23b = 0;
    local_239 = 0;
    local_23c = 1;
    local_237 = 0;
    uStack_22f = 0;
    local_227 = 0;
    uStack_21f = 0;
    local_217 = 0;
    uStack_20f = 0;
    local_207 = 0;
    uStack_1ff = 0;
    local_1f7 = 0;
    uStack_1ef = 0;
    local_1e7 = 0;
    uStack_1df = 0;
    local_1d7 = 0;
    uStack_1cf = 0;
    uStack_1c8 = 0;
    uStack_1c7 = 0;
    uStack_1c0 = 0;
    local_1b5 = 0;
    local_1b7 = 0;
    local_1b8 = 1;
    local_2bc = param_3;
    local_238 = param_4;
    uVar6 = FUN_1491e6d5e(lVar5);
    local_100._0_4_ = 0xffffffff;
    local_100._4_4_ = 0;
    uStack_f8 = 0;
    uStack_f4 = 0;
    uStack_f0 = 0;
    local_ec = -1;
    if (&local_100 != param_6) {
      local_100._0_4_ = (undefined4)*param_6;
      local_100._4_4_ = (undefined4)((ulonglong)*param_6 >> 0x20);
    }
    FUN_1491dabdc(uVar6,&local_e8,param_5,&local_100);
    uVar7 = (ulonglong)local_e8;
    if (local_e8 == 0xffffffff) {
      uVar3 = 0xffffffff;
      puVar8 = (uint *)&DAT_14cc08210;
      if ((iStack_d4 != -1) && (1 < iStack_d8)) {
        FUN_1446f470e(&local_108,CONCAT44(uStack_dc,uStack_e0),1);
        local_e8 = (uint)local_108;
        uStack_e4 = (undefined4)(local_108 >> 0x20);
        uVar7 = local_108;
        goto LAB_14923949a;
      }
    }
    else {
LAB_14923949a:
      uVar3 = (uint)uVar7;
      puVar8 = &local_e8;
    }
    local_2dc = *(undefined8 *)puVar8;
    if (iStack_d4 != -1) {
      if (CONCAT44(uStack_dc,uStack_e0) != 0) {
        FUN_1400020a8();
        uVar3 = local_e8;
      }
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      iStack_d4 = -1;
    }
    if (uVar3 != 0xffffffff) {
      local_e8 = 0xffffffff;
      uStack_e4 = 0;
    }
    if ((local_ec != -1) && (CONCAT44(uStack_f4,uStack_f8) != 0)) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x4c);
    *(uint *)(lVar5 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_498,&local_2e0);
    local_4a8 = *param_5;
    local_4a0 = *(undefined4 *)(param_5 + 1);
    local_4d8 = 0;
    local_4e0 = local_4e0 & 0xffffff00;
    local_4e8 = local_498;
    FUN_1491ed744(lVar5,&local_e8,*param_6);
    *(undefined4 *)(param_7 + 8) = uStack_e0;
    *(ulonglong *)param_7 = CONCAT44(uStack_e4,local_e8);
    if ((((uint)*(ushort *)(param_7 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_7 + 4) != 0))
       && (*param_7 != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_77 = 0;
      uStack_70 = 0;
      uStack_87 = 0;
      uStack_7f = 0;
      local_78 = 0;
      local_97 = 0;
      uStack_8f = 0;
      local_a7 = 0;
      uStack_9f = 0;
      local_b7 = 0;
      uStack_af = 0;
      local_c7 = 0;
      uStack_bf = 0;
      iStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      local_67 = 0;
      local_65 = 0;
      local_4b8 = *(undefined8 *)param_7;
      local_4b0 = *(undefined4 *)(param_7 + 8);
      local_e8 = (uint)param_2;
      local_68 = 1;
      uVar4 = FUN_140813180(uVar6);
      local_4e0 = local_4e0 & 0xffffff00;
      local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_e8,0);
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      uStack_77 = 0;
      uStack_70 = 0;
      uStack_87 = 0;
      uStack_7f = 0;
      local_78 = 0;
      local_97 = 0;
      uStack_8f = 0;
      local_a7 = 0;
      uStack_9f = 0;
      local_b7 = 0;
      uStack_af = 0;
      local_c7 = 0;
      uStack_bf = 0;
      iStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cf = 0;
      uStack_e4 = 0;
      uStack_e0 = 0;
      uStack_dc = 0;
      iStack_d8 = 0;
      local_67 = 0;
      local_65 = 0;
      local_4c8 = *(undefined8 *)param_7;
      local_4c0 = *(undefined4 *)(param_7 + 8);
      local_e8 = (uint)param_2;
      local_68 = 1;
      uVar4 = FUN_140813180(uVar6);
      local_4e0 = local_4e0 & 0xffffff00;
      local_4e8 = (undefined1 *)((ulonglong)local_4e8 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_e8,1);
    }
    *(undefined4 *)(lVar5 + 0x4c) = uVar1;
    FUN_14918b3e4(&local_2e0);
  }
  if (local_128[0] != 0) {
    FUN_1400020a8();
  }
LAB_1492392be:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_508) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1492396cc FUN_1492396cc body=94 status=ok
// SIG undefined FUN_1492396cc(void)

void FUN_1492396cc(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_14923979a(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)*param_2,*(undefined4 *)param_2[4],
                *(undefined4 *)param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 14923972a FUN_14923972a body=111 status=ok
// SIG undefined FUN_14923972a(void)

void FUN_14923972a(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923979a(param_1 + 0x10,*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
                *(undefined4 *)(param_1 + 0x218),param_1 + 0x21c,param_1 + 0x1f0,param_1 + 0x1fc,
                param_1 + 0x204);
  return;
}



// FUNCTION 14923979a FUN_14923979a body=1288 status=ok
// SIG undefined FUN_14923979a(void)

void FUN_14923979a(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,char *param_8)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  uint local_510;
  undefined1 local_508;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [440];
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  undefined2 *local_300;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined2 local_1e7;
  undefined1 local_1e5;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_148 = 0;
  uStack_140 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 == '\0') goto LAB_14923988c;
  FUN_1400021e4(param_7,local_158);
  local_510 = 0xffffffff;
  local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
  FUN_1447ee042(local_158,&DAT_149e31048,1,1);
  *param_8 = '\b';
  param_8[4] = '\0';
  param_8[5] = '\0';
  param_8[6] = '\0';
  param_8[7] = '\0';
  param_8[8] = '\0';
  param_8[9] = '\0';
  param_8[10] = '\0';
  param_8[0xb] = '\0';
  lVar5 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar5 != 0) {
    FUN_1491d73b0(&local_310);
    local_30f = 1;
    FUN_1491d74b0(&local_310,1,1,1);
    *local_300 = *param_5;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    local_27c = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_26b = 0;
    local_269 = 0;
    local_26c = 1;
    local_1e7 = 0;
    local_1e5 = 0;
    local_264 = 0;
    uStack_25c = 0;
    local_254 = 0;
    uStack_24c = 0;
    local_244 = 0;
    uStack_23c = 0;
    local_234 = 0;
    uStack_22c = 0;
    local_224 = 0;
    uStack_21c = 0;
    local_214 = 0;
    uStack_20c = 0;
    local_204 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    local_1e8 = 1;
    local_2ec = param_3;
    local_268 = param_4;
    uVar6 = FUN_1491e6d5e(lVar5);
    local_130._0_4_ = 0xffffffff;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = -1;
    if (&local_130 != param_7) {
      local_130._0_4_ = (undefined4)*param_7;
      local_130._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar6,&local_118,param_6,&local_130);
    uVar7 = (ulonglong)local_118;
    if (local_118 == 0xffffffff) {
      uVar3 = 0xffffffff;
      puVar8 = (uint *)&DAT_14cc08210;
      if ((iStack_104 != -1) && (1 < iStack_108)) {
        FUN_1446f470e(&local_138,CONCAT44(uStack_10c,uStack_110),1);
        local_118 = (uint)local_138;
        uStack_114 = (undefined4)(local_138 >> 0x20);
        uVar7 = local_138;
        goto LAB_149239a7f;
      }
    }
    else {
LAB_149239a7f:
      uVar3 = (uint)uVar7;
      puVar8 = &local_118;
    }
    local_30c = *(undefined8 *)puVar8;
    if (iStack_104 != -1) {
      if (CONCAT44(uStack_10c,uStack_110) != 0) {
        FUN_1400020a8();
        uVar3 = local_118;
      }
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = -1;
    }
    if (uVar3 != 0xffffffff) {
      local_118 = 0xffffffff;
      uStack_114 = 0;
    }
    if ((local_11c != -1) && (CONCAT44(uStack_124,uStack_128) != 0)) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x4c);
    *(uint *)(lVar5 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4c8,&local_310);
    local_4d8 = *param_6;
    local_4d0 = *(undefined4 *)(param_6 + 1);
    local_508 = 0;
    local_510 = local_510 & 0xffffff00;
    local_518 = local_4c8;
    FUN_1491ed744(lVar5,&local_118,*param_7);
    *(undefined4 *)(param_8 + 8) = uStack_110;
    *(ulonglong *)param_8 = CONCAT44(uStack_114,local_118);
    if ((((uint)*(ushort *)(param_8 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_8 + 4) != 0))
       && (*param_8 != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4e8 = *(undefined8 *)param_8;
      local_4e0 = *(undefined4 *)(param_8 + 8);
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_98 = 1;
      local_118 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_118,0);
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4f8 = *(undefined8 *)param_8;
      local_4f0 = *(undefined4 *)(param_8 + 8);
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_98 = 1;
      local_118 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_118,1);
    }
    *(undefined4 *)(lVar5 + 0x4c) = uVar1;
    FUN_14918b3e4(&local_310);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_14923988c:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149239ca4 FUN_149239ca4 body=94 status=ok
// SIG undefined FUN_149239ca4(void)

void FUN_149239ca4(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_149239d72(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)*param_2,*(undefined4 *)param_2[4],
                *(undefined4 *)param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18]);
  return;
}



// FUNCTION 149239d02 FUN_149239d02 body=111 status=ok
// SIG undefined FUN_149239d02(void)

void FUN_149239d02(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_149239d72(param_1 + 0x10,*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
                *(undefined4 *)(param_1 + 0x218),param_1 + 0x21c,param_1 + 0x1f0,param_1 + 0x1fc,
                param_1 + 0x204);
  return;
}



// FUNCTION 149239d72 FUN_149239d72 body=1289 status=ok
// SIG undefined FUN_149239d72(void)

void FUN_149239d72(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                  undefined2 *param_5,undefined8 *param_6,undefined8 *param_7,char *param_8)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  uint *puVar8;
  undefined1 auStack_538 [32];
  undefined1 *local_518;
  uint local_510;
  undefined1 local_508;
  undefined8 local_4f8;
  undefined4 local_4f0;
  undefined8 local_4e8;
  undefined4 local_4e0;
  undefined8 local_4d8;
  undefined4 local_4d0;
  undefined1 local_4c8 [440];
  undefined1 local_310;
  undefined1 local_30f;
  undefined8 local_30c;
  undefined2 *local_300;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined4 uStack_280;
  undefined4 local_27c;
  undefined4 uStack_278;
  undefined8 uStack_274;
  undefined1 local_26c;
  undefined2 local_26b;
  undefined1 local_269;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined8 local_244;
  undefined8 uStack_23c;
  undefined8 local_234;
  undefined8 uStack_22c;
  undefined8 local_224;
  undefined8 uStack_21c;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined2 local_1e7;
  undefined1 local_1e5;
  longlong local_158 [2];
  longlong local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  int local_11c;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  int iStack_104;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined2 local_97;
  undefined1 local_95;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_538;
  local_148 = 0;
  uStack_140 = 0;
  cVar2 = FUN_14923c708();
  if (cVar2 == '\0') goto LAB_149239e64;
  FUN_1400021e4(param_7,local_158);
  local_510 = 0xffffffff;
  local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffff00000000);
  FUN_1447ee042(local_158,&DAT_149e31048,1,1);
  *param_8 = '\b';
  param_8[4] = '\0';
  param_8[5] = '\0';
  param_8[6] = '\0';
  param_8[7] = '\0';
  param_8[8] = '\0';
  param_8[9] = '\0';
  param_8[10] = '\0';
  param_8[0xb] = '\0';
  lVar5 = FUN_14449bdee(*(undefined8 *)(param_1 + 0x1b0),1);
  if (lVar5 != 0) {
    FUN_1491d73b0(&local_310);
    local_30f = 10;
    FUN_1491d74b0(&local_310,1,1,1);
    *local_300 = *param_5;
    uStack_278 = 0;
    uStack_274 = 0;
    uStack_288 = 0;
    uStack_280 = 0;
    local_27c = 0;
    local_298 = 0;
    uStack_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2d8 = 0;
    uStack_2d0 = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_26b = 0;
    local_269 = 0;
    local_26c = 1;
    local_1e7 = 0;
    local_1e5 = 0;
    local_264 = 0;
    uStack_25c = 0;
    local_254 = 0;
    uStack_24c = 0;
    local_244 = 0;
    uStack_23c = 0;
    local_234 = 0;
    uStack_22c = 0;
    local_224 = 0;
    uStack_21c = 0;
    local_214 = 0;
    uStack_20c = 0;
    local_204 = 0;
    uStack_1fc = 0;
    uStack_1f8 = 0;
    uStack_1f4 = 0;
    uStack_1f0 = 0;
    local_1e8 = 1;
    local_2ec = param_3;
    local_268 = param_4;
    uVar6 = FUN_1491e6d5e(lVar5);
    local_130._0_4_ = 0xffffffff;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    uStack_124 = 0;
    uStack_120 = 0;
    local_11c = -1;
    if (&local_130 != param_7) {
      local_130._0_4_ = (undefined4)*param_7;
      local_130._4_4_ = (undefined4)((ulonglong)*param_7 >> 0x20);
    }
    FUN_1491dabdc(uVar6,&local_118,param_6,&local_130);
    uVar7 = (ulonglong)local_118;
    if (local_118 == 0xffffffff) {
      uVar3 = 0xffffffff;
      puVar8 = (uint *)&DAT_14cc08210;
      if ((iStack_104 != -1) && (1 < iStack_108)) {
        FUN_1446f470e(&local_138,CONCAT44(uStack_10c,uStack_110),1);
        local_118 = (uint)local_138;
        uStack_114 = (undefined4)(local_138 >> 0x20);
        uVar7 = local_138;
        goto LAB_14923a058;
      }
    }
    else {
LAB_14923a058:
      uVar3 = (uint)uVar7;
      puVar8 = &local_118;
    }
    local_30c = *(undefined8 *)puVar8;
    if (iStack_104 != -1) {
      if (CONCAT44(uStack_10c,uStack_110) != 0) {
        FUN_1400020a8();
        uVar3 = local_118;
      }
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = -1;
    }
    if (uVar3 != 0xffffffff) {
      local_118 = 0xffffffff;
      uStack_114 = 0;
    }
    if ((local_11c != -1) && (CONCAT44(uStack_124,uStack_128) != 0)) {
      FUN_1400020a8();
    }
    uVar1 = *(undefined4 *)(lVar5 + 0x4c);
    *(uint *)(lVar5 + 0x4c) = (uint)*(ushort *)(param_1 + 0x18);
    FUN_14918b1f6(local_4c8,&local_310);
    local_4d8 = *param_6;
    local_4d0 = *(undefined4 *)(param_6 + 1);
    local_508 = 0;
    local_510 = local_510 & 0xffffff00;
    local_518 = local_4c8;
    FUN_1491ed744(lVar5,&local_118,*param_7);
    *(undefined4 *)(param_8 + 8) = uStack_110;
    *(ulonglong *)param_8 = CONCAT44(uStack_114,local_118);
    if ((((uint)*(ushort *)(param_8 + 6) < DAT_14c87eb08 + 1U) && (*(longlong *)(param_8 + 4) != 0))
       && (*param_8 != '\0')) {
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4e8 = *(undefined8 *)param_8;
      local_4e0 = *(undefined4 *)(param_8 + 8);
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_98 = 1;
      local_118 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_118,0);
      uVar6 = *(undefined8 *)(param_1 + 0x1b0);
      local_95 = 0;
      local_97 = 0;
      local_4f8 = *(undefined8 *)param_8;
      local_4f0 = *(undefined4 *)(param_8 + 8);
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      iStack_108 = 0;
      iStack_104 = 0;
      uStack_100 = 0;
      uStack_fc = 0;
      local_f4 = 0;
      uStack_ec = 0;
      local_e4 = 0;
      uStack_dc = 0;
      local_d4 = 0;
      uStack_cc = 0;
      local_c4 = 0;
      uStack_bc = 0;
      local_b4 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      local_98 = 1;
      local_118 = param_2;
      uVar4 = FUN_140813180(uVar6);
      local_510 = local_510 & 0xffffff00;
      local_518 = (undefined1 *)((ulonglong)local_518 & 0xffffffffffffff00);
      FUN_14918c0c6(uVar6,uVar4,&local_118,1);
    }
    *(undefined4 *)(lVar5 + 0x4c) = uVar1;
    FUN_14918b3e4(&local_310);
  }
  if (local_158[0] != 0) {
    FUN_1400020a8();
  }
LAB_149239e64:
  if (local_148 != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_538) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14923a27c FUN_14923a27c body=105 status=ok
// SIG undefined FUN_14923a27c(void)

void FUN_14923a27c(longlong param_1,undefined8 *param_2)

{
  param_2 = (undefined8 *)*param_2;
  FUN_14923a360(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)*param_2,*(undefined4 *)param_2[4],
                *(undefined4 *)param_2[8],param_2[0xc],param_2[0x10],param_2[0x14],param_2[0x18],
                param_2[0x1c]);
  return;
}



// FUNCTION 14923a2e6 FUN_14923a2e6 body=121 status=ok
// SIG undefined FUN_14923a2e6(void)

void FUN_14923a2e6(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  FUN_14923a360(param_1 + 0x10,*(undefined4 *)(param_1 + 0x210),*(undefined4 *)(param_1 + 0x214),
                *(undefined4 *)(param_1 + 0x218),param_1 + 0x21c,param_1 + 0x220,param_1 + 0x1f0,
                param_1 + 0x1fc,param_1 + 0x204);
  return;
}


