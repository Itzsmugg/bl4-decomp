// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14455ca96 FUN_14455ca96 body=29 status=ok
// SIG undefined FUN_14455ca96(void)

undefined8 FUN_14455ca96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cae4 FUN_14455cae4 body=29 status=ok
// SIG undefined FUN_14455cae4(void)

undefined8 FUN_14455cae4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cb02 FUN_14455cb02 body=28 status=ok
// SIG undefined FUN_14455cb02(void)

undefined8 FUN_14455cb02(undefined8 param_1,undefined8 *param_2)

{
  FUN_14961992e(*param_2,param_1);
  return param_1;
}



// FUNCTION 14455cb34 FUN_14455cb34 body=29 status=ok
// SIG undefined FUN_14455cb34(void)

undefined8 FUN_14455cb34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cb52 FUN_14455cb52 body=149 status=ok
// SIG undefined FUN_14455cb52(void)

void FUN_14455cb52(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [64];
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *param_1;
  *(undefined1 *)(lVar1 + 0x1b8) = *(undefined1 *)(lVar1 + 0x148);
  puVar3 = (undefined8 *)(lVar1 + 0x150);
  puVar4 = (undefined8 *)(lVar1 + 0x1c0);
  for (lVar2 = 0xd; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  local_28 = param_2[8];
  uStack_24 = param_2[9];
  uStack_20 = param_2[10];
  uStack_1c = param_2[0xb];
  FUN_149619734(lVar1,local_88,&local_48,lVar1 + 0x3b8);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455cbfe FUN_14455cbfe body=29 status=ok
// SIG undefined FUN_14455cbfe(void)

undefined8 FUN_14455cbfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cc3a FUN_14455cc3a body=29 status=ok
// SIG undefined FUN_14455cc3a(void)

undefined8 FUN_14455cc3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cc76 FUN_14455cc76 body=29 status=ok
// SIG undefined FUN_14455cc76(void)

undefined8 FUN_14455cc76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455ccb2 FUN_14455ccb2 body=29 status=ok
// SIG undefined FUN_14455ccb2(void)

undefined8 FUN_14455ccb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cd10 FUN_14455cd10 body=29 status=ok
// SIG undefined FUN_14455cd10(void)

undefined8 FUN_14455cd10(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cd2e FUN_14455cd2e body=196 status=ok
// SIG undefined FUN_14455cd2e(void)

void FUN_14455cd2e(longlong param_1)

{
  double dVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(lVar4 + 0x128);
  bVar2 = *(byte *)(*(longlong *)(lVar4 + 0x100) + 0xfc);
  *(byte *)(lVar5 + 0x49) = bVar2 ^ 1;
  bVar3 = *(byte *)(lVar5 + 0x48);
  dVar1 = *(double *)(lVar5 + 0x40);
  if (bVar2 == 0) {
    dVar6 = pow(5.0,(double)(bVar3 >> 1));
    dVar6 = dVar6 * (double)(uint)(1 << (bVar3 - (bVar3 >> 1) & 0x1f));
  }
  else {
    dVar6 = (double)(uint)(1 << (bVar3 & 0x1f));
  }
  *(double *)(lVar5 + 0x50) = dVar1 * dVar6;
  FUN_14961b20c(lVar4,*(undefined1 *)(*(longlong *)(lVar4 + 0x100) + 0xda));
  FUN_14455ce3a(param_1,*(undefined8 *)(*(longlong *)(lVar4 + 0x100) + 0xe0));
  return;
}



// FUNCTION 14455ce1c FUN_14455ce1c body=29 status=ok
// SIG undefined FUN_14455ce1c(void)

undefined8 FUN_14455ce1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455ce3a FUN_14455ce3a body=231 status=ok
// SIG undefined FUN_14455ce3a(void)

void FUN_14455ce3a(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x45] == '\x01') {
    uVar1 = FUN_1484e0f44(param_1[0x1b],DAT_14cc203a0);
    if ((char)param_1[0x45] == '\x01') {
      FUN_1484d04e2(uVar1);
    }
  }
  FUN_1484f206a(param_1[0x25],param_2);
  *(undefined8 *)(param_1[0x20] + 0xf0) = *(undefined8 *)(param_1[0x25] + 0x50);
  *(undefined8 *)(param_1[0x20] + 0x100) = *(undefined8 *)(param_1[0x25] + 0x40);
  (**(code **)(**(longlong **)
                 (*(longlong *)(param_1[0x20] + 0x28) +
                 (longlong)*(int *)((longlong)param_1 + 0x3a4) * 8) + 0x10))();
  (**(code **)(**(longlong **)
                 (*(longlong *)(param_1[0x20] + 0x28) + (longlong)(int)param_1[0x74] * 8) + 0x10))()
  ;
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  FUN_149613ce6(param_1);
  FUN_149616260(param_1);
  return;
}



// FUNCTION 14455cf56 FUN_14455cf56 body=29 status=ok
// SIG undefined FUN_14455cf56(void)

undefined8 FUN_14455cf56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455cf74 FUN_14455cf74 body=297 status=ok
// SIG undefined FUN_14455cf74(void)

void FUN_14455cf74(longlong *param_1,double *param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  
  dVar6 = *param_2;
  param_1 = (longlong *)*param_1;
  if ((char)param_1[0x45] == '\x01') {
    uVar3 = FUN_1484e0f44(param_1[0x1b],DAT_14cc203a0);
    if ((char)param_1[0x45] == '\x01') {
      FUN_1484d04e2(uVar3);
    }
  }
  lVar2 = param_1[0x25];
  uVar4 = -(ulonglong)(0.0 < dVar6);
  dVar6 = (double)(~uVar4 & 0x3f1a36e2e0000000 | (ulonglong)dVar6 & uVar4);
  *(double *)(lVar2 + 0x40) = dVar6;
  bVar1 = *(byte *)(lVar2 + 0x48);
  if (*(char *)(lVar2 + 0x49) == '\0') {
    dVar5 = (double)(uint)(1 << (bVar1 & 0x1f));
  }
  else {
    dVar5 = pow(5.0,(double)(bVar1 >> 1));
    dVar5 = dVar5 * (double)(uint)(1 << (bVar1 - (bVar1 >> 1) & 0x1f));
  }
  *(double *)(lVar2 + 0x50) = dVar5 * dVar6;
  *(undefined8 *)(param_1[0x20] + 0xf0) = *(undefined8 *)(param_1[0x25] + 0x50);
  (**(code **)(**(longlong **)
                 (*(longlong *)(param_1[0x20] + 0x28) +
                 (longlong)*(int *)((longlong)param_1 + 0x3a4) * 8) + 0x10))();
  (**(code **)(*param_1 + 0x330))(param_1,param_1[0x20]);
  FUN_149613ce6(param_1);
  FUN_149616260(param_1);
  return;
}



// FUNCTION 14455d0c8 FUN_14455d0c8 body=29 status=ok
// SIG undefined FUN_14455d0c8(void)

undefined8 FUN_14455d0c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d11a FUN_14455d11a body=29 status=ok
// SIG undefined FUN_14455d11a(void)

undefined8 FUN_14455d11a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d138 FUN_14455d138 body=59 status=ok
// SIG undefined FUN_14455d138(void)

void FUN_14455d138(longlong *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
  
  uVar1 = *param_2;
  lVar2 = FUN_1484e0f44(*(undefined8 *)(*param_1 + 0xd8),DAT_14cc203b8);
  if (lVar2 != 0) {
    FUN_14045627c(lVar2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,1);
    return;
  }
  return;
}



// FUNCTION 14455d19e FUN_14455d19e body=29 status=ok
// SIG undefined FUN_14455d19e(void)

undefined8 FUN_14455d19e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d1f0 FUN_14455d1f0 body=29 status=ok
// SIG undefined FUN_14455d1f0(void)

undefined8 FUN_14455d1f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d242 FUN_14455d242 body=29 status=ok
// SIG undefined FUN_14455d242(void)

undefined8 FUN_14455d242(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d294 FUN_14455d294 body=29 status=ok
// SIG undefined FUN_14455d294(void)

undefined8 FUN_14455d294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d2b2 FUN_14455d2b2 body=31 status=ok
// SIG undefined FUN_14455d2b2(void)

void FUN_14455d2b2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_149615fa8(uVar1);
  FUN_149612c5e(uVar1,0);
  return;
}



// FUNCTION 14455d2fc FUN_14455d2fc body=29 status=ok
// SIG undefined FUN_14455d2fc(void)

undefined8 FUN_14455d2fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d34e FUN_14455d34e body=29 status=ok
// SIG undefined FUN_14455d34e(void)

undefined8 FUN_14455d34e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d3bc FUN_14455d3bc body=29 status=ok
// SIG undefined FUN_14455d3bc(void)

undefined8 FUN_14455d3bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d40e FUN_14455d40e body=29 status=ok
// SIG undefined FUN_14455d40e(void)

undefined8 FUN_14455d40e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d42c FUN_14455d42c body=650 status=ok
// SIG undefined FUN_14455d42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14455d42c(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
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
  ulonglong local_c0;
  
  uVar13 = DAT_14c846520;
  uVar12 = DAT_14c846518;
  uVar11 = DAT_14c846510;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x100);
  auVar1 = *(undefined1 (*) [16])(lVar3 + 0xc0);
  auVar14 = divpd(auVar1,_DAT_1499387d0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(double *)(lVar3 + 0xd0);
  auVar15 = divpd(auVar15,_DAT_1499387d0);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar9 = (auVar1._0_8_ - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (auVar1._8_8_ - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (*(double *)(lVar3 + 0xd0) - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
  ;
  dVar8 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar10);
  dVar6 = sin(dVar7);
  sin(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
  local_128 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
  dStack_120 = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
  local_118._8_4_ = SUB84(dVar8,0);
  local_118._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
  local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_108 = *(undefined4 *)(lVar3 + 0xa8);
  uStack_104 = *(undefined4 *)(lVar3 + 0xac);
  uStack_100 = *(undefined4 *)(lVar3 + 0xb0);
  uStack_fc = *(undefined4 *)(lVar3 + 0xb4);
  local_f8 = *(undefined8 *)(lVar3 + 0xb8);
  uStack_f0 = 0;
  local_e8 = uVar11;
  uStack_e0 = uVar12;
  local_d8 = uVar13;
  uStack_d0 = 0;
  FUN_148415b4c(*(undefined8 *)(lVar2 + 0xc0),&local_128,1);
  FUN_1496187cc(lVar2,&local_128,0,1);
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455d6e2 FUN_14455d6e2 body=29 status=ok
// SIG undefined FUN_14455d6e2(void)

undefined8 FUN_14455d6e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d700 FUN_14455d700 body=650 status=ok
// SIG undefined FUN_14455d700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14455d700(longlong *param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auStack_148 [32];
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
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
  ulonglong local_c0;
  
  uVar13 = DAT_14c846520;
  uVar12 = DAT_14c846518;
  uVar11 = DAT_14c846510;
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x100);
  auVar1 = *(undefined1 (*) [16])(lVar3 + 0xc0);
  auVar14 = divpd(auVar1,_DAT_1499387d0);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = *(double *)(lVar3 + 0xd0);
  auVar15 = divpd(auVar15,_DAT_1499387d0);
  auVar14 = roundpd(auVar14,auVar14,3);
  auVar15 = roundpd(auVar15,auVar15,3);
  dVar9 = (auVar1._0_8_ - auVar14._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar10 = (auVar1._8_8_ - auVar14._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar7 = (*(double *)(lVar3 + 0xd0) - auVar15._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648
  ;
  dVar8 = (0.0 - auVar15._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar4 = sin(dVar9);
  dVar5 = sin(dVar10);
  dVar6 = sin(dVar7);
  sin(dVar8);
  dVar9 = cos(dVar9);
  dVar10 = cos(dVar10);
  dVar7 = cos(dVar7);
  cos(dVar8);
  dVar8 = dVar5 * dVar4 * dVar6 + dVar10 * dVar9 * dVar7;
  local_128 = dVar4 * dVar5 * dVar7 - dVar9 * dVar10 * dVar6;
  dStack_120 = -(dVar4 * dVar10 * dVar7) - dVar9 * dVar5 * dVar6;
  local_118._8_4_ = SUB84(dVar8,0);
  local_118._0_8_ = -(dVar10 * dVar4 * dVar6) + dVar5 * dVar9 * dVar7;
  local_118._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  local_108 = *(undefined4 *)(lVar3 + 0xa8);
  uStack_104 = *(undefined4 *)(lVar3 + 0xac);
  uStack_100 = *(undefined4 *)(lVar3 + 0xb0);
  uStack_fc = *(undefined4 *)(lVar3 + 0xb4);
  local_f8 = *(undefined8 *)(lVar3 + 0xb8);
  uStack_f0 = 0;
  local_e8 = uVar11;
  uStack_e0 = uVar12;
  local_d8 = uVar13;
  uStack_d0 = 0;
  FUN_148415b4c(*(undefined8 *)(lVar2 + 0xc0),&local_128,1);
  FUN_1496187cc(lVar2,&local_128,0,1);
  if ((local_c0 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455d9b6 FUN_14455d9b6 body=29 status=ok
// SIG undefined FUN_14455d9b6(void)

undefined8 FUN_14455d9b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455d9d4 FUN_14455d9d4 body=41 status=ok
// SIG undefined FUN_14455d9d4(void)

void FUN_14455d9d4(longlong *param_1,undefined8 param_2)

{
  FUN_146c005f0(*(undefined8 *)(*param_1 + 0x2b8),param_2,1,1,1,1);
  return;
}



// FUNCTION 14455da34 FUN_14455da34 body=29 status=ok
// SIG undefined FUN_14455da34(void)

undefined8 FUN_14455da34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455daf8 FUN_14455daf8 body=29 status=ok
// SIG undefined FUN_14455daf8(void)

undefined8 FUN_14455daf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455db56 FUN_14455db56 body=29 status=ok
// SIG undefined FUN_14455db56(void)

undefined8 FUN_14455db56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dbb4 FUN_14455dbb4 body=29 status=ok
// SIG undefined FUN_14455dbb4(void)

undefined8 FUN_14455dbb4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dc12 FUN_14455dc12 body=29 status=ok
// SIG undefined FUN_14455dc12(void)

undefined8 FUN_14455dc12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dc70 FUN_14455dc70 body=29 status=ok
// SIG undefined FUN_14455dc70(void)

undefined8 FUN_14455dc70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dcce FUN_14455dcce body=29 status=ok
// SIG undefined FUN_14455dcce(void)

undefined8 FUN_14455dcce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dd2c FUN_14455dd2c body=29 status=ok
// SIG undefined FUN_14455dd2c(void)

undefined8 FUN_14455dd2c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dd4a FUN_14455dd4a body=56 status=ok
// SIG undefined FUN_14455dd4a(void)

void FUN_14455dd4a(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x140) == 2) {
    return;
  }
  uVar2 = (**(code **)(**(longlong **)(lVar1 + 0xc0) + 0x358))();
  FUN_14961969e(lVar1,uVar2 ^ 1);
  return;
}



// FUNCTION 14455ddac FUN_14455ddac body=29 status=ok
// SIG undefined FUN_14455ddac(void)

undefined8 FUN_14455ddac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455de0c FUN_14455de0c body=29 status=ok
// SIG undefined FUN_14455de0c(void)

undefined8 FUN_14455de0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455de70 FUN_14455de70 body=29 status=ok
// SIG undefined FUN_14455de70(void)

undefined8 FUN_14455de70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455dec0 FUN_14455dec0 body=29 status=ok
// SIG undefined FUN_14455dec0(void)

undefined8 FUN_14455dec0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455df0c FUN_14455df0c body=29 status=ok
// SIG undefined FUN_14455df0c(void)

undefined8 FUN_14455df0c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455df2a FUN_14455df2a body=152 status=ok
// SIG undefined FUN_14455df2a(void)

void FUN_14455df2a(longlong *param_1,char *param_2)

{
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8;
  undefined1 local_a0 [136];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*param_2 == '\x01') {
    if ((int)((longlong *)*param_1)[0x28] == 1) {
      FUN_149616af2();
    }
  }
  else {
    (**(code **)(*(longlong *)*param_1 + 0x3b8))();
  }
  local_c8[0] = 1;
  local_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  memset(local_a0,0,0x88);
  local_18 = 0x20702;
  FUN_14493db24(local_c8);
  if ((local_10 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455dfee FUN_14455dfee body=29 status=ok
// SIG undefined FUN_14455dfee(void)

undefined8 FUN_14455dfee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e00c FUN_14455e00c body=77 status=ok
// SIG undefined FUN_14455e00c(void)

void FUN_14455e00c(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_140187fa0(param_1[2],1,0);
  plVar1 = (longlong *)param_1[2];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,1);
  }
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014455e04f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x28))(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14455e05a FUN_14455e05a body=119 status=ok
// SIG undefined FUN_14455e05a(void)

void FUN_14455e05a(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 800);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x10) == 0) {
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        (**(code **)(**(longlong **)(lVar1 + 0x18) + 0x20))
                  (*(longlong **)(lVar1 + 0x18),0xffffffff,0);
        *(undefined8 *)(lVar1 + 0x20) = 0;
      }
      plVar2 = *(longlong **)(param_1 + 800);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2,1);
      }
    }
    else {
      FUN_144556e98(*(undefined8 *)(param_1 + 800));
    }
    *(undefined8 *)(param_1 + 800) = 0;
  }
  return;
}



// FUNCTION 14455e0d2 FUN_14455e0d2 body=82 status=ok
// SIG undefined FUN_14455e0d2(void)

longlong FUN_14455e0d2(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(char *)(lVar1 + 0x17f0) == '\x01') {
    FUN_146bee918(lVar1 + 0x1410,0);
    *(ulonglong *)(lVar1 + 0x1420) =
         (ulonglong)
         (uint)(*(int *)(*(longlong *)(lVar1 + 0x1418) + 0x214) +
               *(int *)(*(longlong *)(lVar1 + 0x1418) + 0x218));
    *(undefined1 *)(lVar1 + 0x17f0) = 0;
  }
  return lVar1 + 0x1410;
}



// FUNCTION 14455e142 FUN_14455e142 body=12 status=ok
// SIG undefined FUN_14455e142(void)

void FUN_14455e142(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014455e14b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14455e14e FUN_14455e14e body=29 status=ok
// SIG undefined FUN_14455e14e(void)

undefined8 FUN_14455e14e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e16c FUN_14455e16c body=714 status=ok
// SIG undefined FUN_14455e16c(void)

void FUN_14455e16c(longlong *param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  double local_c8;
  undefined1 local_b8 [16];
  double local_a8;
  ulonglong local_a0;
  double dVar2;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *param_1;
  dVar5 = *param_3 * *(double *)(lVar3 + 0x1c0);
  dVar6 = param_3[1] * *(double *)(lVar3 + 0x1c8);
  dVar4 = param_3[2] * *(double *)(lVar3 + 0x1d0);
  dVar1 = *(double *)(lVar3 + 0x198);
  dVar2 = *(double *)(lVar3 + 0x198);
  dVar10 = *(double *)(lVar3 + 0x180);
  dVar11 = *(double *)(lVar3 + 0x188);
  dVar12 = *(double *)(lVar3 + 400);
  dVar7 = dVar6 * dVar10 - dVar5 * dVar11;
  dVar8 = dVar4 * dVar11 - dVar6 * dVar12;
  dVar9 = dVar5 * dVar12 - dVar4 * dVar10;
  dVar8 = dVar8 + dVar8;
  dVar9 = dVar9 + dVar9;
  dVar7 = dVar7 + dVar7;
  dVar6 = (dVar12 * dVar8 - dVar10 * dVar7) + dVar2 * dVar9 + dVar6 + *(double *)(lVar3 + 0x1a8);
  local_b8._8_4_ = SUB84(dVar6,0);
  local_b8._0_8_ =
       (dVar7 * dVar11 - dVar9 * dVar12) + dVar1 * dVar8 + dVar5 + *(double *)(lVar3 + 0x1a0);
  local_b8._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_a8 = dVar7 * dVar1 + dVar4 + (dVar9 * dVar10 - dVar8 * dVar11) + *(double *)(lVar3 + 0x1b0);
  dVar8 = *param_2 * *(double *)(lVar3 + 0x1c0);
  dVar9 = param_2[1] * *(double *)(lVar3 + 0x1c8);
  dVar6 = param_2[2] * *(double *)(lVar3 + 0x1d0);
  dVar4 = dVar9 * dVar10 - dVar11 * dVar8;
  dVar7 = dVar6 * dVar11 - dVar12 * dVar9;
  dVar5 = dVar8 * dVar12 - dVar10 * dVar6;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  dVar4 = dVar4 + dVar4;
  dVar2 = (dVar12 * dVar7 - dVar10 * dVar4) + dVar2 * dVar5 + dVar9 + *(double *)(lVar3 + 0x1a8);
  local_d8._8_4_ = SUB84(dVar2,0);
  local_d8._0_8_ =
       (dVar4 * dVar11 - dVar5 * dVar12) + dVar1 * dVar7 + dVar8 + *(double *)(lVar3 + 0x1a0);
  local_d8._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  local_c8 = dVar4 * dVar1 + dVar6 + (dVar5 * dVar10 - dVar7 * dVar11) + *(double *)(lVar3 + 0x1b0);
  FUN_1485565cf(lVar3 + 0x130,local_d8,local_b8,*param_4);
  if ((local_a0 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455e462 FUN_14455e462 body=29 status=ok
// SIG undefined FUN_14455e462(void)

undefined8 FUN_14455e462(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e480 FUN_14455e480 body=99 status=ok
// SIG undefined FUN_14455e480(void)

void FUN_14455e480(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined2 local_10;
  undefined4 local_e;
  undefined2 local_a;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_e = 1;
  local_a = 1;
  local_10 = 0x100;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455e51c FUN_14455e51c body=29 status=ok
// SIG undefined FUN_14455e51c(void)

undefined8 FUN_14455e51c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e53a FUN_14455e53a body=225 status=ok
// SIG undefined FUN_14455e53a(void)

double * FUN_14455e53a(double *param_1,longlong param_2,longlong *param_3,uint *param_4)

{
  double *pdVar1;
  longlong lVar2;
  double dVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*(longlong *)(*param_3 + 0x10) + (ulonglong)(*param_4 >> 9) * 8);
  uVar4 = (ulonglong)(*param_4 & 0x1ff);
  pdVar1 = (double *)(lVar2 + uVar4 * 0x18);
  dVar3 = pdVar1[1];
  *param_1 = *pdVar1;
  param_1[1] = dVar3;
  param_1[2] = *(double *)(lVar2 + 0x10 + uVar4 * 0x18);
  *param_1 = *param_1 - *(double *)(param_2 + 8);
  param_1[1] = param_1[1] - *(double *)(param_2 + 0x10);
  param_1[2] = param_1[2] - *(double *)(param_2 + 0x18);
  FUN_146bed047(&local_38,param_2 + 0x20,param_1);
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = dStack_30;
  *param_1 = *(double *)(param_2 + 8) + *param_1;
  param_1[1] = *(double *)(param_2 + 0x10) + param_1[1];
  param_1[2] = *(double *)(param_2 + 0x18) + param_1[2];
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455e61c FUN_14455e61c body=86 status=ok
// SIG undefined FUN_14455e61c(void)

undefined8 * FUN_14455e61c(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  
  puVar8 = (undefined8 *)FUN_14001cc68(0x48,8);
  *param_2 = puVar8;
  *puVar8 = &PTR_FUN_14bd8e090;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  puVar8[7] = *(undefined8 *)(param_1 + 0x38);
  puVar8[8] = uVar7;
  puVar8[5] = uVar5;
  puVar8[6] = uVar6;
  puVar8[3] = uVar3;
  puVar8[4] = uVar4;
  puVar8[1] = uVar1;
  puVar8[2] = uVar2;
  return puVar8 + 1;
}



// FUNCTION 14455e678 FUN_14455e678 body=29 status=ok
// SIG undefined FUN_14455e678(void)

void FUN_14455e678(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14455e696 FUN_14455e696 body=29 status=ok
// SIG undefined FUN_14455e696(void)

undefined8 FUN_14455e696(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e6b4 FUN_14455e6b4 body=100 status=ok
// SIG undefined FUN_14455e6b4(void)

undefined4 * FUN_14455e6b4(undefined4 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38 [6];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_148557342(*param_2,param_3,local_38);
  if (cVar4 != '\0') {
    param_3 = local_38;
  }
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455e744 FUN_14455e744 body=29 status=ok
// SIG undefined FUN_14455e744(void)

undefined8 FUN_14455e744(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e7b6 FUN_14455e7b6 body=70 status=ok
// SIG undefined FUN_14455e7b6(void)

undefined8 * FUN_14455e7b6(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd8e0d0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14455e802 FUN_14455e802 body=29 status=ok
// SIG undefined FUN_14455e802(void)

void FUN_14455e802(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14455e820 FUN_14455e820 body=29 status=ok
// SIG undefined FUN_14455e820(void)

undefined8 FUN_14455e820(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455e83e FUN_14455e83e body=269 status=ok
// SIG undefined FUN_14455e83e(void)

void FUN_14455e83e(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = *(uint *)(**(longlong **)*param_1 + (longlong)*param_2 * 4);
  if (((-1 < (int)uVar5) &&
      (lVar6 = param_1[1], (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar6 = *(longlong *)(param_1[5] + 8);
    lVar9 = (ulonglong)uVar5 * 0x18;
    lVar7 = *(longlong *)param_1[4];
    local_2c = uVar5;
    fVar10 = (float)(*(code *)**(undefined8 **)param_1[3])
                              ((*(undefined8 **)param_1[3])[1],&local_2c,lVar7 + lVar9,lVar6 + lVar9
                              );
    dVar11 = (double)fVar10;
    dVar1 = *(double *)(lVar6 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar6 + 8 + lVar9);
    dVar3 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    lVar8 = *(longlong *)param_1[2];
    *(double *)(lVar8 + lVar9) = dVar11 * *(double *)(lVar6 + lVar9) + *(double *)(lVar7 + lVar9);
    *(double *)(lVar8 + 8 + lVar9) = dVar2 * dVar11 + dVar4;
    *(double *)(lVar8 + 0x10 + lVar9) = dVar1 * dVar11 + dVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455e94c FUN_14455e94c body=255 status=ok
// SIG undefined FUN_14455e94c(void)

void FUN_14455e94c(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  double dVar11;
  undefined1 auStack_58 [44];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = *param_2;
  if (((-1 < (int)uVar5) &&
      (lVar6 = *param_1, (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar6 = *(longlong *)(param_1[4] + 8);
    lVar9 = (ulonglong)uVar5 * 0x18;
    lVar7 = *(longlong *)param_1[3];
    local_2c = uVar5;
    fVar10 = (float)(*(code *)**(undefined8 **)param_1[2])
                              ((*(undefined8 **)param_1[2])[1],&local_2c,lVar7 + lVar9,lVar6 + lVar9
                              );
    dVar11 = (double)fVar10;
    dVar1 = *(double *)(lVar6 + 0x10 + lVar9);
    dVar2 = *(double *)(lVar6 + 8 + lVar9);
    dVar3 = *(double *)(lVar7 + 0x10 + lVar9);
    dVar4 = *(double *)(lVar7 + 8 + lVar9);
    lVar8 = *(longlong *)param_1[1];
    *(double *)(lVar8 + lVar9) = dVar11 * *(double *)(lVar6 + lVar9) + *(double *)(lVar7 + lVar9);
    *(double *)(lVar8 + 8 + lVar9) = dVar2 * dVar11 + dVar4;
    *(double *)(lVar8 + 0x10 + lVar9) = dVar1 * dVar11 + dVar3;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455ea4c FUN_14455ea4c body=359 status=ok
// SIG undefined FUN_14455ea4c(void)

void FUN_14455ea4c(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *(uint *)(**(longlong **)*param_1 + (longlong)*param_2 * 4);
  if (((-1 < (int)uVar5) &&
      (lVar6 = param_1[1], (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar6 = *(longlong *)(param_1[5] + 8);
    lVar10 = (ulonglong)uVar5 * 0x18;
    lVar7 = *(longlong *)param_1[4];
    DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
    fVar11 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
    auVar13 = roundss(in_XMM1,ZEXT416((uint)fVar11),0xb);
    dVar9 = (double)(fVar11 - auVar13._0_4_) + -0.5;
    dVar9 = dVar9 + dVar9;
    local_44 = uVar5;
    fVar11 = (float)(*(code *)**(undefined8 **)param_1[3])
                              ((*(undefined8 **)param_1[3])[1],&local_44,lVar7 + lVar10,
                               lVar6 + lVar10);
    dVar12 = (double)fVar11;
    dVar1 = *(double *)(lVar6 + 0x10 + lVar10);
    dVar2 = *(double *)(lVar6 + 8 + lVar10);
    dVar3 = *(double *)(lVar7 + 0x10 + lVar10);
    dVar4 = *(double *)(lVar7 + 8 + lVar10);
    lVar8 = *(longlong *)param_1[2];
    *(double *)(lVar8 + lVar10) =
         dVar9 * *(double *)(lVar6 + lVar10) * dVar12 + *(double *)(lVar7 + lVar10);
    *(double *)(lVar8 + 8 + lVar10) = dVar2 * dVar9 * dVar12 + dVar4;
    *(double *)(lVar8 + 0x10 + lVar10) = dVar1 * dVar9 * dVar12 + dVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455ebb4 FUN_14455ebb4 body=345 status=ok
// SIG undefined FUN_14455ebb4(void)

void FUN_14455ebb4(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_68 [36];
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = *param_2;
  if (((-1 < (int)uVar5) &&
      (lVar6 = *param_1, (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar6 = *(longlong *)(param_1[4] + 8);
    lVar10 = (ulonglong)uVar5 * 0x18;
    lVar7 = *(longlong *)param_1[3];
    DAT_14c83e67c = DAT_14c83e67c * 0xbb38435 + 0x3619636b;
    fVar11 = (float)(DAT_14c83e67c & 0x7fffff | 0x3f800000);
    auVar13 = roundss(in_XMM1,ZEXT416((uint)fVar11),0xb);
    dVar9 = (double)(fVar11 - auVar13._0_4_) + -0.5;
    dVar9 = dVar9 + dVar9;
    local_44 = uVar5;
    fVar11 = (float)(*(code *)**(undefined8 **)param_1[2])
                              ((*(undefined8 **)param_1[2])[1],&local_44,lVar7 + lVar10,
                               lVar6 + lVar10);
    dVar12 = (double)fVar11;
    dVar1 = *(double *)(lVar6 + 0x10 + lVar10);
    dVar2 = *(double *)(lVar6 + 8 + lVar10);
    dVar3 = *(double *)(lVar7 + 0x10 + lVar10);
    dVar4 = *(double *)(lVar7 + 8 + lVar10);
    lVar8 = *(longlong *)param_1[1];
    *(double *)(lVar8 + lVar10) =
         dVar9 * *(double *)(lVar6 + lVar10) * dVar12 + *(double *)(lVar7 + lVar10);
    *(double *)(lVar8 + 8 + lVar10) = dVar2 * dVar9 * dVar12 + dVar4;
    *(double *)(lVar8 + 0x10 + lVar10) = dVar1 * dVar9 * dVar12 + dVar3;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455ed0e FUN_14455ed0e body=532 status=ok
// SIG undefined FUN_14455ed0e(void)

void FUN_14455ed0e(undefined8 *param_1,int *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined8 *puVar6;
  double dVar7;
  longlong lVar8;
  longlong *plVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *(uint *)(**(longlong **)*param_1 + (longlong)*param_2 * 4);
  uVar12 = (ulonglong)uVar5;
  if (((-1 < (int)uVar5) &&
      (lVar11 = param_1[1], (int)uVar5 < *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                            (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    puVar6 = (undefined8 *)param_1[3];
    lVar8 = uVar12 * 0x18;
    pdVar10 = (double *)(*(longlong *)(param_1[5] + 8) + lVar8);
    lVar11 = *(longlong *)param_1[4];
    pdVar1 = (double *)(lVar11 + lVar8);
    plVar9 = (longlong *)puVar6[1];
    if ((int)plVar9[1] < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar7 = (double)*(float *)*puVar6;
      dVar2 = *(double *)(lVar11 + 0x10 + lVar8);
      dVar3 = *(double *)(lVar11 + 8 + lVar8);
      dVar4 = *(double *)(lVar11 + lVar8);
      dVar16 = 0.0;
      lVar11 = 0;
      do {
        fVar14 = *(float *)(*plVar9 + 4 + lVar11 * 8);
        dVar15 = (double)*(float *)(*plVar9 + lVar11 * 8);
        local_98 = (dVar2 + dVar7) * dVar15;
        local_a0 = (dVar3 + dVar7) * dVar15;
        local_a8 = dVar15 * (dVar7 + dVar4);
        fVar13 = (float)FUN_1467f9650(&local_a8);
        dVar16 = dVar16 + (double)(fVar13 * fVar14);
        lVar11 = lVar11 + 1;
        plVar9 = (longlong *)puVar6[1];
      } while (lVar11 < (int)plVar9[1]);
    }
    local_a8 = (double)CONCAT44(local_a8._4_4_,uVar5);
    fVar14 = (float)(**(code **)puVar6[2])(((undefined8 *)puVar6[2])[1],&local_a8,pdVar1,pdVar10);
    dVar16 = (double)fVar14 * dVar16;
    dVar2 = pdVar10[2];
    dVar3 = pdVar10[1];
    dVar4 = pdVar1[2];
    dVar7 = pdVar1[1];
    lVar11 = *(longlong *)param_1[2];
    *(double *)(lVar11 + uVar12 * 0x18) = dVar16 * *pdVar10 + *pdVar1;
    *(double *)(lVar11 + 8 + uVar12 * 0x18) = dVar3 * dVar16 + dVar7;
    *(double *)(lVar11 + 0x10 + uVar12 * 0x18) = dVar2 * dVar16 + dVar4;
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14455ef24 FUN_14455ef24 body=518 status=ok
// SIG undefined FUN_14455ef24(void)

void FUN_14455ef24(longlong *param_1,uint *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  undefined8 *puVar6;
  double dVar7;
  longlong lVar8;
  longlong *plVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_c8 [32];
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *param_2;
  uVar12 = (ulonglong)uVar5;
  if (((-1 < (int)uVar5) &&
      (lVar11 = *param_1, (int)uVar5 < *(int *)(lVar11 + 0x20) * 0x200 + *(int *)(lVar11 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar11 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                            (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    puVar6 = (undefined8 *)param_1[2];
    lVar8 = uVar12 * 0x18;
    pdVar10 = (double *)(*(longlong *)(param_1[4] + 8) + lVar8);
    lVar11 = *(longlong *)param_1[3];
    pdVar1 = (double *)(lVar11 + lVar8);
    plVar9 = (longlong *)puVar6[1];
    if ((int)plVar9[1] < 1) {
      dVar16 = 0.0;
    }
    else {
      dVar7 = (double)*(float *)*puVar6;
      dVar2 = *(double *)(lVar11 + 0x10 + lVar8);
      dVar3 = *(double *)(lVar11 + 8 + lVar8);
      dVar4 = *(double *)(lVar11 + lVar8);
      dVar16 = 0.0;
      lVar11 = 0;
      do {
        fVar14 = *(float *)(*plVar9 + 4 + lVar11 * 8);
        dVar15 = (double)*(float *)(*plVar9 + lVar11 * 8);
        local_98 = (dVar2 + dVar7) * dVar15;
        local_a0 = (dVar3 + dVar7) * dVar15;
        local_a8 = dVar15 * (dVar7 + dVar4);
        fVar13 = (float)FUN_1467f9650(&local_a8);
        dVar16 = dVar16 + (double)(fVar13 * fVar14);
        lVar11 = lVar11 + 1;
        plVar9 = (longlong *)puVar6[1];
      } while (lVar11 < (int)plVar9[1]);
    }
    local_a8 = (double)CONCAT44(local_a8._4_4_,uVar5);
    fVar14 = (float)(**(code **)puVar6[2])(((undefined8 *)puVar6[2])[1],&local_a8,pdVar1,pdVar10);
    dVar16 = (double)fVar14 * dVar16;
    dVar2 = pdVar10[2];
    dVar3 = pdVar10[1];
    dVar4 = pdVar1[2];
    dVar7 = pdVar1[1];
    lVar11 = *(longlong *)param_1[1];
    *(double *)(lVar11 + uVar12 * 0x18) = dVar16 * *pdVar10 + *pdVar1;
    *(double *)(lVar11 + 8 + uVar12 * 0x18) = dVar3 * dVar16 + dVar7;
    *(double *)(lVar11 + 0x10 + uVar12 * 0x18) = dVar2 * dVar16 + dVar4;
  }
  if ((local_90 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14455f12c FUN_14455f12c body=905 status=ok
// SIG undefined FUN_14455f12c(void)

void FUN_14455f12c(undefined8 *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_50;
  float local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar12 = *param_2;
  if (*(longlong **)*param_1 != (longlong *)0x0) {
    uVar12 = *(uint *)(**(longlong **)*param_1 + (longlong)(int)uVar12 * 4);
  }
  if (((-1 < (int)uVar12) &&
      (lVar4 = param_1[1], (int)uVar12 < *(int *)(lVar4 + 0x20) * 0x200 + *(int *)(lVar4 + 0x24)))
     && ((ushort)(*(short *)(*(longlong *)
                              (*(longlong *)(lVar4 + 0x28) + (ulonglong)(uVar12 >> 9) * 8) +
                            (ulonglong)(uVar12 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    cVar9 = FUN_146c1bd3e(*(undefined8 *)param_1[2],uVar12,1);
    if (cVar9 == '\0') {
      uVar11 = FUN_146c12f82(param_1[1],uVar12);
      uVar10 = FUN_146c2e864(*(undefined8 *)param_1[2],uVar11,uVar12);
      puVar5 = (undefined8 *)param_1[3];
      lVar4 = *(longlong *)
               (*(longlong *)(*(longlong *)*puVar5 + 0x48) + (ulonglong)(uVar10 >> 5 & 0x3fffff8));
      uVar13 = (ulonglong)((uVar10 & 0xff) << 3);
      fVar17 = *(float *)(lVar4 + 4 + uVar13) * ((float *)puVar5[1])[1] + ((float *)puVar5[2])[1];
      fVar18 = *(float *)(lVar4 + uVar13) * *(float *)puVar5[1] + *(float *)puVar5[2];
      auVar20 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17),1);
      auVar19 = roundps(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18),1);
      local_68 = CONCAT44((fVar17 - auVar20._0_4_) * *(float *)puVar5[3],fVar18 - auVar19._0_4_);
      uVar16 = FUN_1485c00fc(puVar5[4]);
      fVar17 = (float)uVar16;
      if (*(longlong *)puVar5[5] != 0) {
        fVar17 = (float)FUN_1448c9f94(*(longlong *)puVar5[5],uVar16);
      }
      *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8) =
           (double)fVar17 - (double)*(float *)puVar5[6];
    }
    else {
      local_68 = 0;
      uStack_60 = 0;
      FUN_146c08820(param_1[1],uVar12,&local_68);
      lVar4 = local_68;
      lVar15 = (longlong)(int)uStack_60;
      if (lVar15 == 0) {
        dVar7 = 0.0;
      }
      else {
        lVar14 = 0;
        do {
          uVar10 = FUN_146c2e864(*(undefined8 *)param_1[2],*(undefined4 *)(lVar4 + lVar14),uVar12);
          puVar5 = (undefined8 *)param_1[3];
          lVar6 = *(longlong *)
                   (*(longlong *)(*(longlong *)*puVar5 + 0x48) +
                   (ulonglong)(uVar10 >> 5 & 0x3fffff8));
          uVar13 = (ulonglong)((uVar10 & 0xff) << 3);
          fVar17 = *(float *)(lVar6 + 4 + uVar13) * ((float *)puVar5[1])[1] +
                   ((float *)puVar5[2])[1];
          local_50 = *(float *)(lVar6 + uVar13) * *(float *)puVar5[1] + *(float *)puVar5[2];
          auVar19 = roundps(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17),1);
          auVar20 = roundps(ZEXT416((uint)local_50),ZEXT416((uint)local_50),1);
          local_50 = local_50 - auVar20._0_4_;
          local_4c = (fVar17 - auVar19._0_4_) * *(float *)puVar5[3];
          uVar16 = FUN_1485c00fc(puVar5[4],&local_50);
          fVar17 = (float)uVar16;
          if (*(longlong *)puVar5[5] != 0) {
            fVar17 = (float)FUN_1448c9f94(*(longlong *)puVar5[5],uVar16);
          }
          *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8) =
               ((double)fVar17 - (double)*(float *)puVar5[6]) +
               *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8);
          lVar14 = lVar14 + 4;
        } while (lVar15 * 4 != lVar14);
        dVar7 = (double)(int)uStack_60;
      }
      *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8) =
           *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8) / dVar7;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
    lVar6 = (ulonglong)uVar12 * 0x18;
    local_68 = CONCAT44(local_68._4_4_,uVar12);
    fVar17 = (float)(**(code **)param_1[5])
                              (((undefined8 *)param_1[5])[1],&local_68,
                               *(longlong *)param_1[6] + lVar6,*(longlong *)(param_1[7] + 8) + lVar6
                              );
    lVar4 = *(longlong *)param_1[6];
    lVar15 = *(longlong *)(param_1[7] + 8);
    dVar8 = (double)fVar17 * *(double *)(*(longlong *)param_1[4] + (ulonglong)uVar12 * 8);
    dVar7 = *(double *)(lVar15 + 0x10 + lVar6);
    dVar1 = *(double *)(lVar15 + 8 + lVar6);
    dVar2 = *(double *)(lVar4 + 0x10 + lVar6);
    dVar3 = *(double *)(lVar4 + 8 + lVar6);
    lVar14 = *(longlong *)param_1[8];
    *(double *)(lVar14 + lVar6) = dVar8 * *(double *)(lVar15 + lVar6) + *(double *)(lVar4 + lVar6);
    *(double *)(lVar14 + 8 + lVar6) = dVar1 * dVar8 + dVar3;
    *(double *)(lVar14 + 0x10 + lVar6) = dVar7 * dVar8 + dVar2;
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455f4b6 FUN_14455f4b6 body=389 status=ok
// SIG undefined FUN_14455f4b6(void)

void FUN_14455f4b6(undefined8 *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *(uint *)(**(longlong **)*param_1 + (longlong)*param_2 * 4);
  if (((-1 < (int)uVar5) &&
      (lVar6 = param_1[1], (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar10 = (ulonglong)uVar5 * 0x18;
    lVar6 = *(longlong *)(param_1[5] + 8);
    puVar7 = (undefined8 *)param_1[3];
    lVar8 = *(longlong *)param_1[4];
    FUN_146bed047(&local_90,*puVar7,lVar10 + lVar8);
    local_74 = uVar5;
    fVar11 = (float)(**(code **)puVar7[1])
                              (((undefined8 *)puVar7[1])[1],&local_74,lVar10 + lVar8,lVar6 + lVar10)
    ;
    pdVar9 = (double *)puVar7[4];
    dVar12 = sin(SQRT(local_90 * local_90 + local_88 * local_88) * *(double *)puVar7[2] +
                 *(double *)puVar7[3]);
    dVar12 = dVar12 * (double)fVar11;
    dVar1 = pdVar9[2];
    dVar2 = pdVar9[1];
    dVar3 = *(double *)(lVar8 + 0x10 + lVar10);
    dVar4 = *(double *)(lVar8 + 8 + lVar10);
    lVar6 = *(longlong *)param_1[2];
    *(double *)(lVar6 + lVar10) = dVar12 * *pdVar9 + *(double *)(lVar8 + lVar10);
    *(double *)(lVar6 + 8 + lVar10) = dVar2 * dVar12 + dVar4;
    *(double *)(lVar6 + 0x10 + lVar10) = dVar1 * dVar12 + dVar3;
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455f63c FUN_14455f63c body=375 status=ok
// SIG undefined FUN_14455f63c(void)

void FUN_14455f63c(longlong *param_1,uint *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  double *pdVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  uint local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = *param_2;
  if (((-1 < (int)uVar5) &&
      (lVar6 = *param_1, (int)uVar5 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar6 + 0x28) + (ulonglong)(uVar5 >> 9) * 8) +
                         (ulonglong)(uVar5 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    lVar10 = (ulonglong)uVar5 * 0x18;
    lVar6 = *(longlong *)(param_1[4] + 8);
    puVar7 = (undefined8 *)param_1[2];
    lVar8 = *(longlong *)param_1[3];
    FUN_146bed047(&local_90,*puVar7,lVar10 + lVar8);
    local_74 = uVar5;
    fVar11 = (float)(**(code **)puVar7[1])
                              (((undefined8 *)puVar7[1])[1],&local_74,lVar10 + lVar8,lVar6 + lVar10)
    ;
    pdVar9 = (double *)puVar7[4];
    dVar12 = sin(SQRT(local_90 * local_90 + local_88 * local_88) * *(double *)puVar7[2] +
                 *(double *)puVar7[3]);
    dVar12 = dVar12 * (double)fVar11;
    dVar1 = pdVar9[2];
    dVar2 = pdVar9[1];
    dVar3 = *(double *)(lVar8 + 0x10 + lVar10);
    dVar4 = *(double *)(lVar8 + 8 + lVar10);
    lVar6 = *(longlong *)param_1[1];
    *(double *)(lVar6 + lVar10) = dVar12 * *pdVar9 + *(double *)(lVar8 + lVar10);
    *(double *)(lVar6 + 8 + lVar10) = dVar2 * dVar12 + dVar4;
    *(double *)(lVar6 + 0x10 + lVar10) = dVar1 * dVar12 + dVar3;
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455f7c8 FUN_14455f7c8 body=12 status=ok
// SIG undefined FUN_14455f7c8(void)

void FUN_14455f7c8(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014455f7d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14455f7d4 FUN_14455f7d4 body=29 status=ok
// SIG undefined FUN_14455f7d4(void)

undefined8 FUN_14455f7d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455f830 FUN_14455f830 body=29 status=ok
// SIG undefined FUN_14455f830(void)

undefined8 FUN_14455f830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455f8a0 FUN_14455f8a0 body=29 status=ok
// SIG undefined FUN_14455f8a0(void)

undefined8 FUN_14455f8a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455f8be FUN_14455f8be body=165 status=ok
// SIG undefined FUN_14455f8be(void)

void FUN_14455f8be(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_2;
  dVar8 = *(double *)*param_1;
  dVar7 = (double)FUN_149642788(param_1[1],param_4);
  puVar2 = (undefined8 *)param_1[2];
  pcVar3 = (code *)*puVar2;
  plVar5 = puVar2 + 4;
  if ((longlong *)puVar2[2] != (longlong *)0x0) {
    plVar5 = (longlong *)puVar2[2];
  }
  local_44 = uVar1;
  uVar4 = (**(code **)(*plVar5 + 8))();
  fVar6 = (float)(*pcVar3)(uVar4,&local_44,param_3);
  dVar8 = (double)fVar6 * dVar7 * dVar8;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(CONCAT44((int)((ulonglong)dVar8 >> 0x20),(float)dVar8));
}



// FUNCTION 14455f964 FUN_14455f964 body=51 status=ok
// SIG undefined FUN_14455f964(void)

void FUN_14455f964(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1446f48e2(param_1,iVar2);
  }
  *(undefined4 *)(*param_1 + (longlong)iVar2 * 4) = uVar1;
  return;
}



// FUNCTION 14455f9ca FUN_14455f9ca body=29 status=ok
// SIG undefined FUN_14455f9ca(void)

undefined8 FUN_14455f9ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455f9e8 FUN_14455f9e8 body=99 status=ok
// SIG undefined FUN_14455f9e8(void)

void FUN_14455f9e8(longlong *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  param_1 = (longlong *)*param_1;
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x27],cVar1 == '\x03');
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x28],cVar1 == '\x04');
                    /* WARNING: Could not recover jumptable at 0x00014455fa48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x328))(param_1,param_1[0x26],cVar1 == '\x01');
  return;
}



// FUNCTION 14455fa76 FUN_14455fa76 body=29 status=ok
// SIG undefined FUN_14455fa76(void)

undefined8 FUN_14455fa76(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455fadc FUN_14455fadc body=29 status=ok
// SIG undefined FUN_14455fadc(void)

undefined8 FUN_14455fadc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455fafa FUN_14455fafa body=106 status=ok
// SIG undefined FUN_14455fafa(void)

void FUN_14455fafa(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0x1000000010101;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,
                0 < *(int *)(*(longlong *)(*param_1 + 0x120) + 0xb8));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455fba2 FUN_14455fba2 body=29 status=ok
// SIG undefined FUN_14455fba2(void)

undefined8 FUN_14455fba2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455fbc0 FUN_14455fbc0 body=29 status=ok
// SIG undefined FUN_14455fbc0(void)

undefined8 FUN_14455fbc0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455fbf2 FUN_14455fbf2 body=93 status=ok
// SIG undefined FUN_14455fbf2(void)

void FUN_14455fbf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e2e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14455fc50 FUN_14455fc50 body=93 status=ok
// SIG undefined FUN_14455fc50(void)

void FUN_14455fc50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bd8e2e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14455fcae FUN_14455fcae body=126 status=ok
// SIG undefined FUN_14455fcae(void)

void FUN_14455fcae(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bd8e2e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014455fd1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14455fd8e FUN_14455fd8e body=103 status=ok
// SIG undefined FUN_14455fd8e(void)

undefined8 FUN_14455fd8e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
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
  undefined4 uVar14;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(lVar1 + 400);
  plVar3 = *(longlong **)(lVar1 + 0x270);
  uVar4 = *(undefined4 *)(lVar2 + 0x7c);
  uVar5 = *(undefined4 *)(lVar2 + 0x80);
  uVar6 = *(undefined4 *)(lVar2 + 0x84);
  uVar7 = *(undefined4 *)(lVar2 + 0x88);
  uVar8 = *(undefined4 *)(lVar2 + 0x8c);
  uVar9 = *(undefined4 *)(lVar2 + 0x90);
  uVar10 = *(undefined4 *)(lVar2 + 0x94);
  uVar11 = *(undefined4 *)(lVar2 + 0x98);
  uVar12 = *(undefined4 *)(lVar2 + 0x9c);
  uVar13 = *(undefined4 *)(lVar2 + 0xa0);
  uVar14 = *(undefined4 *)(lVar2 + 0xa4);
  *(undefined4 *)(lVar1 + 0x198) = *(undefined4 *)(lVar2 + 0x78);
  *(undefined4 *)(lVar1 + 0x19c) = uVar4;
  *(undefined4 *)(lVar1 + 0x1a0) = uVar5;
  *(undefined4 *)(lVar1 + 0x1a4) = uVar6;
  *(undefined4 *)(lVar1 + 0x1a8) = uVar7;
  *(undefined4 *)(lVar1 + 0x1ac) = uVar8;
  *(undefined4 *)(lVar1 + 0x1b0) = uVar9;
  *(undefined4 *)(lVar1 + 0x1b4) = uVar10;
  *(undefined4 *)(lVar1 + 0x1b8) = uVar11;
  *(undefined4 *)(lVar1 + 0x1bc) = uVar12;
  *(undefined4 *)(lVar1 + 0x1c0) = uVar13;
  *(undefined4 *)(lVar1 + 0x1c4) = uVar14;
  *(undefined8 *)(lVar1 + 0x1c8) = *(undefined8 *)(lVar2 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x2d8))(plVar3,lVar1 + 0x198);
  }
  return 1;
}



// FUNCTION 14455fdf6 FUN_14455fdf6 body=163 status=ok
// SIG undefined FUN_14455fdf6(void)

void FUN_14455fdf6(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,_Src,lVar1 * 2);
  }
  (**(code **)(**(longlong **)(*param_1 + 0xb0) + 0x2b8))();
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14455fec4 FUN_14455fec4 body=29 status=ok
// SIG undefined FUN_14455fec4(void)

undefined8 FUN_14455fec4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455ff28 FUN_14455ff28 body=29 status=ok
// SIG undefined FUN_14455ff28(void)

undefined8 FUN_14455ff28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455ff8c FUN_14455ff8c body=29 status=ok
// SIG undefined FUN_14455ff8c(void)

undefined8 FUN_14455ff8c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14455ffe6 FUN_14455ffe6 body=29 status=ok
// SIG undefined FUN_14455ffe6(void)

undefined8 FUN_14455ffe6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560004 FUN_144560004 body=113 status=ok
// SIG undefined FUN_144560004(void)

void FUN_144560004(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = param_3[2];
  local_28 = *param_3;
  uStack_20 = param_3[1];
  local_48 = *param_2;
  uStack_44 = param_2[1];
  uStack_40 = param_2[2];
  uStack_3c = param_2[3];
  local_38 = *(undefined8 *)(param_2 + 4);
  FUN_1485565cf(*param_1 + 0x140,&local_48,&local_28,param_1[1]);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456008c FUN_14456008c body=29 status=ok
// SIG undefined FUN_14456008c(void)

undefined8 FUN_14456008c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445600aa FUN_1445600aa body=39 status=ok
// SIG undefined FUN_1445600aa(void)

void FUN_1445600aa(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_14855784a(*param_1,param_3,param_2,0,0);
  return;
}



// FUNCTION 1445600e8 FUN_1445600e8 body=29 status=ok
// SIG undefined FUN_1445600e8(void)

undefined8 FUN_1445600e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560130 FUN_144560130 body=29 status=ok
// SIG undefined FUN_144560130(void)

undefined8 FUN_144560130(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560202 FUN_144560202 body=70 status=ok
// SIG undefined FUN_144560202(void)

undefined8 * FUN_144560202(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x28,8);
  *param_2 = puVar4;
  *puVar4 = &PTR_FUN_14bd8e5a0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[3] = *(undefined8 *)(param_1 + 0x18);
  puVar4[4] = uVar3;
  puVar4[1] = uVar1;
  puVar4[2] = uVar2;
  return puVar4 + 1;
}



// FUNCTION 14456024e FUN_14456024e body=29 status=ok
// SIG undefined FUN_14456024e(void)

void FUN_14456024e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14456026c FUN_14456026c body=29 status=ok
// SIG undefined FUN_14456026c(void)

undefined8 FUN_14456026c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445602fc FUN_1445602fc body=29 status=ok
// SIG undefined FUN_1445602fc(void)

undefined8 FUN_1445602fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560356 FUN_144560356 body=29 status=ok
// SIG undefined FUN_144560356(void)

undefined8 FUN_144560356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445603b2 FUN_1445603b2 body=29 status=ok
// SIG undefined FUN_1445603b2(void)

undefined8 FUN_1445603b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456040c FUN_14456040c body=29 status=ok
// SIG undefined FUN_14456040c(void)

undefined8 FUN_14456040c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456045e FUN_14456045e body=29 status=ok
// SIG undefined FUN_14456045e(void)

undefined8 FUN_14456045e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445604be FUN_1445604be body=29 status=ok
// SIG undefined FUN_1445604be(void)

undefined8 FUN_1445604be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560512 FUN_144560512 body=29 status=ok
// SIG undefined FUN_144560512(void)

undefined8 FUN_144560512(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456056c FUN_14456056c body=29 status=ok
// SIG undefined FUN_14456056c(void)

undefined8 FUN_14456056c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445605be FUN_1445605be body=29 status=ok
// SIG undefined FUN_1445605be(void)

undefined8 FUN_1445605be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456061e FUN_14456061e body=29 status=ok
// SIG undefined FUN_14456061e(void)

undefined8 FUN_14456061e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456063c FUN_14456063c body=65 status=ok
// SIG undefined FUN_14456063c(void)

void FUN_14456063c(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1496390ca(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445606a8 FUN_1445606a8 body=29 status=ok
// SIG undefined FUN_1445606a8(void)

undefined8 FUN_1445606a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445606c6 FUN_1445606c6 body=55 status=ok
// SIG undefined FUN_1445606c6(void)

longlong FUN_1445606c6(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(*param_1 + 0x130) + 200);
  if ((DAT_14c950c29 == '\x01') && (lVar1 != 0)) {
    FUN_1456cec3c(lVar1);
  }
  return lVar1;
}



// FUNCTION 144560728 FUN_144560728 body=29 status=ok
// SIG undefined FUN_144560728(void)

undefined8 FUN_144560728(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456077c FUN_14456077c body=29 status=ok
// SIG undefined FUN_14456077c(void)

undefined8 FUN_14456077c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445607dc FUN_1445607dc body=29 status=ok
// SIG undefined FUN_1445607dc(void)

undefined8 FUN_1445607dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445607fa FUN_1445607fa body=65 status=ok
// SIG undefined FUN_1445607fa(void)

void FUN_1445607fa(undefined8 *param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1496390ca(*param_1);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144560866 FUN_144560866 body=29 status=ok
// SIG undefined FUN_144560866(void)

undefined8 FUN_144560866(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445608c2 FUN_1445608c2 body=29 status=ok
// SIG undefined FUN_1445608c2(void)

undefined8 FUN_1445608c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560916 FUN_144560916 body=29 status=ok
// SIG undefined FUN_144560916(void)

undefined8 FUN_144560916(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560970 FUN_144560970 body=29 status=ok
// SIG undefined FUN_144560970(void)

undefined8 FUN_144560970(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445609c2 FUN_1445609c2 body=29 status=ok
// SIG undefined FUN_1445609c2(void)

undefined8 FUN_1445609c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560a1c FUN_144560a1c body=29 status=ok
// SIG undefined FUN_144560a1c(void)

undefined8 FUN_144560a1c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560a6e FUN_144560a6e body=29 status=ok
// SIG undefined FUN_144560a6e(void)

undefined8 FUN_144560a6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560ada FUN_144560ada body=29 status=ok
// SIG undefined FUN_144560ada(void)

undefined8 FUN_144560ada(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560af8 FUN_144560af8 body=164 status=ok
// SIG undefined FUN_144560af8(void)

void FUN_144560af8(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(*param_1 + 0x1008);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(*param_1 + 0x128);
    local_68 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_60 = *(undefined8 *)(lVar2 + 0xd8);
    local_58 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xe8);
    local_48 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_30 = 0;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    local_18 = 0x3ff0000000000000;
    uStack_10 = 0;
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_68,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144560bc8 FUN_144560bc8 body=29 status=ok
// SIG undefined FUN_144560bc8(void)

undefined8 FUN_144560bc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560c34 FUN_144560c34 body=29 status=ok
// SIG undefined FUN_144560c34(void)

undefined8 FUN_144560c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560c52 FUN_144560c52 body=164 status=ok
// SIG undefined FUN_144560c52(void)

void FUN_144560c52(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(*param_1 + 0x1008);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = *(longlong *)(*param_1 + 0x128);
    local_68 = *(undefined8 *)(lVar2 + 0xd0);
    uStack_60 = *(undefined8 *)(lVar2 + 0xd8);
    local_58 = *(undefined8 *)(lVar2 + 0xe0);
    uStack_50 = *(undefined8 *)(lVar2 + 0xe8);
    local_48 = *(undefined8 *)(lVar2 + 0xb0);
    uStack_40 = *(undefined8 *)(lVar2 + 0xb8);
    local_38 = *(undefined8 *)(lVar2 + 0xc0);
    uStack_30 = 0;
    local_28 = 0x3ff0000000000000;
    uStack_20 = 0x3ff0000000000000;
    local_18 = 0x3ff0000000000000;
    uStack_10 = 0;
    (**(code **)(*plVar1 + 0x330))(plVar1,&local_68,1);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144560d22 FUN_144560d22 body=29 status=ok
// SIG undefined FUN_144560d22(void)

undefined8 FUN_144560d22(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560d40 FUN_144560d40 body=95 status=ok
// SIG undefined FUN_144560d40(void)

void FUN_144560d40(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = 0x1000000010101;
  local_18 = 0;
  FUN_148506f34(*(undefined8 *)(*param_1 + 0xa0),param_2,*(undefined1 *)(*param_1 + 0xb68));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144560da0 FUN_144560da0 body=95 status=ok
// SIG undefined FUN_144560da0(void)

void FUN_144560da0(undefined8 *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)*param_1 + 0x1c0) + (ulonglong)(*param_2 >> 9) * 8);
  uVar4 = (ulonglong)((*param_2 & 0x1ff) << 4);
  iVar1 = *(int *)(lVar2 + 0xc + uVar4);
  lVar3 = param_1[1];
  FUN_14834be84(lVar3 + 0xad0,*(undefined4 *)(lVar2 + 8 + uVar4));
  if (iVar1 == -1) {
    return;
  }
  FUN_14834be84(lVar3 + 0xad0,iVar1);
  return;
}



// FUNCTION 144560e00 FUN_144560e00 body=23 status=ok
// SIG undefined FUN_144560e00(void)

void FUN_144560e00(undefined8 *param_1)

{
  FUN_1496452e8(*(undefined8 *)*param_1,param_1[1] + 0xaf8);
  return;
}



// FUNCTION 144560e1c FUN_144560e1c body=5 status=ok
// SIG undefined FUN_144560e1c(void)

longlong FUN_144560e1c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144560e22 FUN_144560e22 body=12 status=ok
// SIG undefined FUN_144560e22(void)

void FUN_144560e22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144560e2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144560e2e FUN_144560e2e body=29 status=ok
// SIG undefined FUN_144560e2e(void)

undefined8 FUN_144560e2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560e4c FUN_144560e4c body=8 status=ok
// SIG undefined FUN_144560e4c(void)

void FUN_144560e4c(undefined8 *param_1)

{
  FUN_149638cac(*param_1);
  return;
}



// FUNCTION 144560e58 FUN_144560e58 body=5 status=ok
// SIG undefined FUN_144560e58(void)

longlong FUN_144560e58(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144560e5e FUN_144560e5e body=12 status=ok
// SIG undefined FUN_144560e5e(void)

void FUN_144560e5e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144560e67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144560e6a FUN_144560e6a body=29 status=ok
// SIG undefined FUN_144560e6a(void)

undefined8 FUN_144560e6a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560e88 FUN_144560e88 body=23 status=ok
// SIG undefined FUN_144560e88(void)

void FUN_144560e88(undefined8 *param_1)

{
  FUN_1496370be(*(undefined8 *)*param_1,param_1[1] + 0xaf8,0);
  return;
}



// FUNCTION 144560ea4 FUN_144560ea4 body=5 status=ok
// SIG undefined FUN_144560ea4(void)

longlong FUN_144560ea4(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144560eaa FUN_144560eaa body=12 status=ok
// SIG undefined FUN_144560eaa(void)

void FUN_144560eaa(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144560eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144560eb6 FUN_144560eb6 body=29 status=ok
// SIG undefined FUN_144560eb6(void)

undefined8 FUN_144560eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144560ed4 FUN_144560ed4 body=105 status=ok
// SIG undefined FUN_144560ed4(void)

void FUN_144560ed4(longlong *param_1,int *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(*(longlong *)(*param_1 + 0xac0) + (longlong)*param_2 * 4);
  puVar6 = (undefined8 *)((longlong)*param_2 * 0x18 + *(longlong *)(*param_1 + 0xec8));
  lVar3 = *(longlong *)param_1[1];
  cVar5 = FUN_146bfed03(puVar6);
  if (cVar5 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)(uVar2 >> 9) * 8);
    uVar7 = (ulonglong)(uVar2 & 0x1ff);
    *(undefined8 *)(lVar3 + 0x10 + uVar7 * 0x18) = puVar6[2];
    uVar4 = puVar6[1];
    puVar1 = (undefined8 *)(lVar3 + uVar7 * 0x18);
    *puVar1 = *puVar6;
    puVar1[1] = uVar4;
  }
  return;
}



// FUNCTION 144560f3e FUN_144560f3e body=427 status=ok
// SIG undefined FUN_144560f3e(void)

void FUN_144560f3e(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  double local_88;
  double local_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar9 = (longlong)*param_2;
  lVar5 = *param_1;
  lVar6 = param_1[1];
  uVar4 = *(uint *)(*(longlong *)(lVar5 + 0xac0) + lVar9 * 4);
  lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar8 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar7 + uVar8 * 0x18);
  dVar2 = *(double *)(lVar7 + 8 + uVar8 * 0x18);
  dVar3 = *(double *)(lVar7 + 0x10 + uVar8 * 0x18);
  dVar10 = (double)param_1[2] - dVar1;
  dVar11 = (double)param_1[3] - dVar2;
  dVar12 = (double)param_1[4] - dVar3;
  dVar10 = (double)FUN_149633aec(lVar5,SQRT(dVar12 * dVar12 + dVar10 * dVar10 + dVar11 * dVar11));
  if (*(char *)(*(longlong *)(lVar5 + 0x108) + 0xb0) == '\x01') {
    local_98 = 0;
    FUN_1482cbf1e(&local_88,lVar6,uVar4,0x4024000000000000);
  }
  else {
    FUN_146c14004(lVar6,uVar4,&local_88);
  }
  dVar10 = dVar10 * (double)*(float *)(*(longlong *)(lVar5 + 0x108) + 0xb4);
  dVar11 = 1.0 - dVar10;
  lVar5 = *(longlong *)(lVar5 + 0xec8);
  *(double *)(lVar5 + lVar9 * 0x18) = dVar11 * dVar1 + dVar10 * local_88;
  *(double *)(lVar5 + 8 + lVar9 * 0x18) = dVar2 * dVar11 + local_80 * dVar10;
  *(double *)(lVar5 + 0x10 + lVar9 * 0x18) = dVar3 * dVar11 + local_78 * dVar10;
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445610ea FUN_1445610ea body=321 status=ok
// SIG undefined FUN_1445610ea(void)

void FUN_1445610ea(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  lVar8 = (longlong)*param_2;
  lVar5 = *param_1;
  uVar4 = *(uint *)(*(longlong *)(lVar5 + 0xac0) + lVar8 * 4);
  lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar7 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar6 + uVar7 * 0x18);
  dVar2 = *(double *)(lVar6 + 8 + uVar7 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18);
  dVar9 = dVar3 - *(double *)(lVar5 + 0xa30);
  dVar10 = dVar2 - *(double *)(lVar5 + 0xa28);
  dVar11 = dVar1 - *(double *)(lVar5 + 0xa20);
  dVar9 = SQRT(dVar9 * dVar9 + dVar11 * dVar11 + dVar10 * dVar10);
  dVar10 = SQRT((dVar3 - (double)param_1[4]) * (dVar3 - (double)param_1[4]) +
                (dVar1 - (double)param_1[2]) * (dVar1 - (double)param_1[2]) +
                (dVar2 - (double)param_1[3]) * (dVar2 - (double)param_1[3]));
  if (dVar10 <= dVar9) {
    dVar9 = dVar10;
  }
  dVar11 = (double)FUN_149633aec(lVar5,dVar9);
  dVar11 = (double)*(float *)(lVar5 + 0xb64) * dVar11;
  dVar9 = (double)param_1[7];
  dVar10 = (double)param_1[6];
  lVar5 = *(longlong *)(lVar5 + 0xec8);
  *(double *)(lVar5 + lVar8 * 0x18) = dVar11 * (double)param_1[5] + dVar1;
  *(double *)(lVar5 + 8 + lVar8 * 0x18) = dVar10 * dVar11 + dVar2;
  *(double *)(lVar5 + 0x10 + lVar8 * 0x18) = dVar9 * dVar11 + dVar3;
  return;
}



// FUNCTION 14456122c FUN_14456122c body=546 status=ok
// SIG undefined FUN_14456122c(void)

void FUN_14456122c(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double *pdVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  char cVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  undefined1 local_b0 [24];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar14 = (longlong)*param_2;
  lVar4 = *param_1;
  uVar3 = *(uint *)(*(longlong *)(lVar4 + 0xac0) + lVar14 * 4);
  lVar5 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar3 >> 9) * 8)
  ;
  uVar13 = (ulonglong)(uVar3 & 0x1ff);
  local_88 = *(double *)(lVar5 + 0x10 + uVar13 * 0x18);
  puVar1 = (undefined4 *)(lVar5 + uVar13 * 0x18);
  local_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  local_d8 = &local_c8;
  cVar12 = FUN_1496373f2(lVar4,&local_98,*(double *)(lVar4 + 0x970) * 4.0,local_b0);
  dVar11 = local_88;
  if (cVar12 == '\0') {
    lVar4 = *(longlong *)(lVar4 + 0xec8);
    *(double *)(lVar4 + 0x10 + lVar14 * 0x18) = local_88;
    puVar1 = (undefined4 *)(lVar4 + lVar14 * 0x18);
    *puVar1 = local_98;
    puVar1[1] = uStack_94;
    puVar1[2] = uStack_90;
    puVar1[3] = uStack_8c;
  }
  else {
    if (*(char *)param_1[2] == '\x01') {
      pdVar6 = (double *)param_1[4];
      dVar2 = *(double *)param_1[3];
      dVar7 = pdVar6[2] * dVar2;
      dVar8 = pdVar6[1] * dVar2;
      dVar2 = dVar2 * *pdVar6;
    }
    else {
      dVar2 = *(double *)param_1[3];
      dVar7 = local_b8 * dVar2;
      dVar8 = local_c0 * dVar2;
      dVar2 = dVar2 * local_c8;
    }
    pdVar6 = (double *)param_1[5];
    dVar9 = (double)CONCAT44(uStack_94,local_98);
    dVar10 = (double)CONCAT44(uStack_8c,uStack_90);
    dVar15 = *pdVar6 - dVar9;
    dVar16 = pdVar6[1] - dVar10;
    dVar15 = (double)FUN_149633aec(lVar4,SQRT((pdVar6[2] - local_88) * (pdVar6[2] - local_88) +
                                              dVar15 * dVar15 + dVar16 * dVar16));
    lVar4 = *(longlong *)(lVar4 + 0xec8);
    *(double *)(lVar4 + lVar14 * 0x18) = dVar2 * dVar15 + dVar9;
    *(double *)(lVar4 + 8 + lVar14 * 0x18) = dVar8 * dVar15 + dVar10;
    *(double *)(lVar4 + 0x10 + lVar14 * 0x18) = dVar7 * dVar15 + dVar11;
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144561450 FUN_144561450 body=698 status=ok
// SIG undefined FUN_144561450(void)

void FUN_144561450(longlong *param_1,int *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  char cVar7;
  ulonglong uVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_f8 [32];
  double *local_d8;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = (longlong)*param_2;
  lVar4 = *param_1;
  uVar3 = *(uint *)(*(longlong *)(lVar4 + 0xac0) + lVar9 * 4);
  lVar5 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar3 >> 9) * 8);
  uVar8 = (ulonglong)(uVar3 & 0x1ff);
  local_88 = *(double *)(lVar5 + 0x10 + uVar8 * 0x18);
  puVar1 = (undefined4 *)(lVar5 + uVar8 * 0x18);
  local_98 = *puVar1;
  uStack_94 = puVar1[1];
  uStack_90 = puVar1[2];
  uStack_8c = puVar1[3];
  local_d8 = &local_c8;
  cVar7 = FUN_1496373f2(lVar4,&local_98,*(double *)(lVar4 + 0x970) + *(double *)(lVar4 + 0x970),
                        &local_b0);
  dVar6 = local_88;
  if (cVar7 == '\0') {
    lVar4 = *(longlong *)(lVar4 + 0xec8);
    *(double *)(lVar4 + 0x10 + lVar9 * 0x18) = local_88;
    puVar1 = (undefined4 *)(lVar4 + lVar9 * 0x18);
    *puVar1 = local_98;
    puVar1[1] = uStack_94;
    puVar1[2] = uStack_90;
    puVar1[3] = uStack_8c;
  }
  else {
    dVar2 = (double)param_1[5];
    dVar13 = (double)CONCAT44(uStack_94,local_98);
    dVar12 = (double)CONCAT44(uStack_8c,uStack_90);
    dVar10 = (double)param_1[2] - dVar13;
    dVar11 = (double)param_1[3] - dVar12;
    dVar10 = (double)FUN_149633aec(lVar4,SQRT(((double)param_1[4] - local_88) *
                                              ((double)param_1[4] - local_88) +
                                              dVar10 * dVar10 + dVar11 * dVar11));
    dVar6 = local_b8 * dVar2 * dVar10 + dVar6;
    dVar12 = local_c0 * dVar2 * dVar10 + dVar12;
    dVar13 = dVar2 * local_c8 * dVar10 + dVar13;
    dVar15 = dVar6 - local_a0;
    dVar14 = dVar12 - local_a8;
    dVar11 = dVar13 - local_b0;
    dVar10 = dVar15 * dVar15 + dVar11 * dVar11 + dVar14 * dVar14;
    dVar2 = (double)param_1[6];
    if (dVar2 * dVar2 < dVar10) {
      dVar10 = SQRT(dVar10);
      dVar6 = 1.0 / dVar10;
      if (0.0 < dVar10) {
        dVar11 = dVar11 * dVar6;
        dVar14 = dVar14 * dVar6;
      }
      else {
        dVar11 = 0.0;
        dVar14 = 0.0;
      }
      dVar6 = local_a0 + (double)(-(ulonglong)(0.0 < dVar10) & (ulonglong)(dVar15 * dVar6)) * dVar2;
      dVar12 = local_a8 + dVar14 * dVar2;
      dVar13 = local_b0 + dVar11 * dVar2;
    }
    lVar4 = *(longlong *)(lVar4 + 0xec8);
    *(double *)(lVar4 + lVar9 * 0x18) = dVar13;
    *(double *)(lVar4 + 8 + lVar9 * 0x18) = dVar12;
    *(double *)(lVar4 + 0x10 + lVar9 * 0x18) = dVar6;
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456170c FUN_14456170c body=613 status=ok
// SIG undefined FUN_14456170c(void)

void FUN_14456170c(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  longlong lVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  lVar11 = (longlong)*param_2;
  lVar5 = *param_1;
  uVar4 = *(uint *)(*(longlong *)(lVar5 + 0xac0) + lVar11 * 4);
  lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 0x10) + (ulonglong)(uVar4 >> 9) * 8);
  uVar12 = (ulonglong)(uVar4 & 0x1ff);
  dVar1 = *(double *)(lVar6 + uVar12 * 0x18);
  dVar2 = *(double *)(lVar6 + 8 + uVar12 * 0x18);
  dVar3 = *(double *)(lVar6 + 0x10 + uVar12 * 0x18);
  dVar15 = (double)param_1[0xc];
  dVar13 = ((double)param_1[7] - dVar3) * dVar15;
  dVar14 = ((double)param_1[6] - dVar2) * dVar15;
  dVar15 = ((double)param_1[5] - dVar1) * dVar15;
  dVar7 = 1.0 / (SQRT(((double)param_1[4] - dVar3) * ((double)param_1[4] - dVar3) +
                      ((double)param_1[2] - dVar1) * ((double)param_1[2] - dVar1) +
                      ((double)param_1[3] - dVar2) * ((double)param_1[3] - dVar2)) /
                 *(double *)(lVar5 + 0x970) + 9.999999974752427e-07) + -1.0;
  dVar8 = 1.0;
  if (dVar7 <= 1.0) {
    dVar8 = dVar7;
  }
  dVar8 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar8);
  if ((dVar8 < 0.800000011920929) && ((char)param_1[8] != '\0')) {
    dVar7 = SQRT(dVar13 * dVar13 + dVar15 * dVar15 + dVar14 * dVar14);
    dVar16 = 0.0;
    dVar10 = 1.0 / dVar7;
    if (0.0 < dVar7) {
      dVar9 = dVar13 * dVar10;
      dVar16 = dVar10 * dVar14;
    }
    else {
      dVar9 = 0.0;
    }
    dVar7 = dVar9 * (double)param_1[0xb] +
            (double)(-(ulonglong)(0.0 < dVar7) & (ulonglong)(dVar15 * dVar10)) * (double)param_1[9]
            + dVar16 * (double)param_1[10];
    uVar12 = -(ulonglong)(-dVar7 <= dVar7);
    dVar8 = dVar8 * (1.0 - (double)(~uVar12 & (ulonglong)-dVar7 | (ulonglong)dVar7 & uVar12));
  }
  lVar5 = *(longlong *)(lVar5 + 0xec8);
  *(double *)(lVar5 + lVar11 * 0x18) = dVar1 + dVar15 * dVar8;
  *(double *)(lVar5 + 8 + lVar11 * 0x18) = dVar2 + dVar14 * dVar8;
  *(double *)(lVar5 + 0x10 + lVar11 * 0x18) = dVar3 + dVar13 * dVar8;
  return;
}



// FUNCTION 144561972 FUN_144561972 body=581 status=ok
// SIG undefined FUN_144561972(void)

void FUN_144561972(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  double *pdVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  lVar11 = (longlong)*param_2;
  lVar7 = *param_1;
  uVar6 = *(uint *)(*(longlong *)(lVar7 + 0xac0) + lVar11 * 4);
  lVar8 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar6 >> 9) * 8)
  ;
  uVar10 = (ulonglong)(uVar6 & 0x1ff);
  dVar1 = *(double *)(lVar8 + uVar10 * 0x18);
  dVar2 = *(double *)(lVar8 + 8 + uVar10 * 0x18);
  dVar3 = *(double *)(lVar8 + 0x10 + uVar10 * 0x18);
  dVar4 = *(double *)(lVar7 + 0xef0);
  dVar5 = *(double *)(lVar7 + 0xef8);
  dVar13 = *(double *)(lVar7 + 0xf00) + *(double *)(lVar7 + 0xf00);
  dVar12 = dVar4 * dVar13 + *(double *)(lVar7 + 0xf08) * (dVar5 + dVar5);
  dVar14 = dVar13 * dVar5 - (dVar4 + dVar4) * *(double *)(lVar7 + 0xf08);
  dVar15 = 1.0 - ((dVar5 + dVar5) * dVar5 + dVar4 * (dVar4 + dVar4));
  dVar13 = (dVar3 - *(double *)(lVar7 + 0xee8)) * dVar15 +
           (dVar1 - *(double *)(lVar7 + 0xed8)) * dVar12 +
           (dVar2 - *(double *)(lVar7 + 0xee0)) * dVar14;
  dVar4 = (dVar3 - dVar15 * dVar13) - dVar3;
  dVar5 = (dVar2 - dVar14 * dVar13) - dVar2;
  dVar13 = (dVar1 - dVar13 * dVar12) - dVar1;
  if (0.0 <= (dVar15 * dVar4 + dVar12 * dVar13 + dVar14 * dVar5) * *(double *)param_1[2]) {
    pdVar9 = (double *)param_1[4];
    dVar12 = *(double *)param_1[3];
    dVar14 = (double)FUN_149633aec(lVar7,SQRT((pdVar9[2] - dVar3) * (pdVar9[2] - dVar3) +
                                              (*pdVar9 - dVar1) * (*pdVar9 - dVar1) +
                                              (pdVar9[1] - dVar2) * (pdVar9[1] - dVar2)));
    dVar3 = dVar3 + dVar4 * dVar12 * dVar14;
    dVar2 = dVar2 + dVar5 * dVar12 * dVar14;
    dVar1 = dVar1 + dVar13 * dVar12 * dVar14;
  }
  lVar7 = *(longlong *)(lVar7 + 0xec8);
  *(double *)(lVar7 + lVar11 * 0x18) = dVar1;
  *(double *)(lVar7 + 8 + lVar11 * 0x18) = dVar2;
  *(double *)(lVar7 + 0x10 + lVar11 * 0x18) = dVar3;
  return;
}



// FUNCTION 144561bb8 FUN_144561bb8 body=831 status=ok
// SIG undefined FUN_144561bb8(void)

void FUN_144561bb8(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar14 = (longlong)*param_2;
  lVar6 = *param_1;
  uVar5 = *(uint *)(*(longlong *)(lVar6 + 0xac0) + lVar14 * 4);
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar5 >> 9) * 8)
  ;
  uVar13 = (ulonglong)(uVar5 & 0x1ff);
  dVar1 = *(double *)(lVar7 + uVar13 * 0x18);
  dVar2 = *(double *)(lVar7 + 8 + uVar13 * 0x18);
  dVar3 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
  pdVar8 = (double *)param_1[2];
  dVar19 = pdVar8[3];
  dVar4 = pdVar8[4];
  dVar17 = pdVar8[5] + pdVar8[5];
  dVar16 = dVar19 * dVar17 + pdVar8[6] * (dVar4 + dVar4);
  dVar18 = dVar17 * dVar4 - (dVar19 + dVar19) * pdVar8[6];
  dVar21 = 1.0 - ((dVar4 + dVar4) * dVar4 + dVar19 * (dVar19 + dVar19));
  dVar19 = (dVar3 - pdVar8[2]) * dVar21 + (dVar1 - *pdVar8) * dVar16 + (dVar2 - pdVar8[1]) * dVar18;
  dVar9 = dVar3 - dVar21 * dVar19;
  dVar10 = dVar2 - dVar18 * dVar19;
  dVar17 = dVar1 - dVar19 * dVar16;
  dVar20 = dVar9 - dVar3;
  dVar22 = dVar10 - dVar2;
  dVar15 = dVar17 - dVar1;
  dVar11 = 0.0;
  dVar19 = dVar3;
  dVar4 = dVar2;
  dVar12 = dVar1;
  if (0.0 <= (dVar21 * dVar20 + dVar16 * dVar15 + dVar18 * dVar22) * *(double *)param_1[3]) {
    dVar19 = SQRT(dVar20 * dVar20 + dVar15 * dVar15 + dVar22 * dVar22);
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar21 = 0.0;
    if (0.0 < dVar19) {
      dVar18 = 1.0 / dVar19;
      dVar11 = dVar15 * dVar18;
      dVar16 = dVar22 * dVar18;
      dVar18 = dVar20 * dVar18;
      dVar21 = dVar19;
    }
    pdVar8 = (double *)param_1[4];
    dVar15 = (double)FUN_149633aec(lVar6,SQRT((pdVar8[2] - dVar3) * (pdVar8[2] - dVar3) +
                                              (*pdVar8 - dVar1) * (*pdVar8 - dVar1) +
                                              (pdVar8[1] - dVar2) * (pdVar8[1] - dVar2)));
    dVar20 = *(double *)param_1[5] * dVar15;
    dVar18 = dVar18 * dVar20;
    dVar16 = dVar16 * dVar20;
    dVar20 = dVar20 * dVar11;
    dVar19 = dVar9;
    dVar4 = dVar10;
    dVar12 = dVar17;
    if (dVar18 * dVar18 + dVar20 * dVar20 + dVar16 * dVar16 <= dVar21 * dVar21) {
      dVar19 = dVar3 + dVar18 * dVar15;
      dVar4 = dVar2 + dVar16 * dVar15;
      dVar12 = dVar1 + dVar20 * dVar15;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0xec8);
  *(double *)(lVar6 + lVar14 * 0x18) = dVar12;
  *(double *)(lVar6 + 8 + lVar14 * 0x18) = dVar4;
  *(double *)(lVar6 + 0x10 + lVar14 * 0x18) = dVar19;
  return;
}



// FUNCTION 144561ef8 FUN_144561ef8 body=831 status=ok
// SIG undefined FUN_144561ef8(void)

void FUN_144561ef8(longlong *param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar14 = (longlong)*param_2;
  lVar6 = *param_1;
  uVar5 = *(uint *)(*(longlong *)(lVar6 + 0xac0) + lVar14 * 4);
  lVar7 = *(longlong *)(*(longlong *)(*(longlong *)param_1[1] + 0x10) + (ulonglong)(uVar5 >> 9) * 8)
  ;
  uVar13 = (ulonglong)(uVar5 & 0x1ff);
  dVar1 = *(double *)(lVar7 + uVar13 * 0x18);
  dVar2 = *(double *)(lVar7 + 8 + uVar13 * 0x18);
  dVar3 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
  pdVar8 = (double *)param_1[2];
  dVar19 = pdVar8[3];
  dVar4 = pdVar8[4];
  dVar17 = pdVar8[5] + pdVar8[5];
  dVar16 = dVar19 * dVar17 + pdVar8[6] * (dVar4 + dVar4);
  dVar18 = dVar17 * dVar4 - (dVar19 + dVar19) * pdVar8[6];
  dVar21 = 1.0 - ((dVar4 + dVar4) * dVar4 + dVar19 * (dVar19 + dVar19));
  dVar19 = (dVar3 - pdVar8[2]) * dVar21 + (dVar1 - *pdVar8) * dVar16 + (dVar2 - pdVar8[1]) * dVar18;
  dVar9 = dVar3 - dVar21 * dVar19;
  dVar10 = dVar2 - dVar18 * dVar19;
  dVar17 = dVar1 - dVar19 * dVar16;
  dVar20 = dVar9 - dVar3;
  dVar22 = dVar10 - dVar2;
  dVar15 = dVar17 - dVar1;
  dVar11 = 0.0;
  dVar19 = dVar3;
  dVar4 = dVar2;
  dVar12 = dVar1;
  if (0.0 <= (dVar21 * dVar20 + dVar16 * dVar15 + dVar18 * dVar22) * *(double *)param_1[3]) {
    dVar19 = SQRT(dVar20 * dVar20 + dVar15 * dVar15 + dVar22 * dVar22);
    dVar16 = 0.0;
    dVar18 = 0.0;
    dVar21 = 0.0;
    if (0.0 < dVar19) {
      dVar18 = 1.0 / dVar19;
      dVar11 = dVar15 * dVar18;
      dVar16 = dVar22 * dVar18;
      dVar18 = dVar20 * dVar18;
      dVar21 = dVar19;
    }
    pdVar8 = (double *)param_1[4];
    dVar15 = (double)FUN_149633aec(lVar6,SQRT((pdVar8[2] - dVar3) * (pdVar8[2] - dVar3) +
                                              (*pdVar8 - dVar1) * (*pdVar8 - dVar1) +
                                              (pdVar8[1] - dVar2) * (pdVar8[1] - dVar2)));
    dVar20 = *(double *)param_1[5] * dVar15;
    dVar18 = dVar18 * dVar20;
    dVar16 = dVar16 * dVar20;
    dVar20 = dVar20 * dVar11;
    dVar19 = dVar9;
    dVar4 = dVar10;
    dVar12 = dVar17;
    if (dVar18 * dVar18 + dVar20 * dVar20 + dVar16 * dVar16 <= dVar21 * dVar21) {
      dVar19 = dVar3 + dVar18 * dVar15;
      dVar4 = dVar2 + dVar16 * dVar15;
      dVar12 = dVar1 + dVar20 * dVar15;
    }
  }
  lVar6 = *(longlong *)(lVar6 + 0xec8);
  *(double *)(lVar6 + lVar14 * 0x18) = dVar12;
  *(double *)(lVar6 + 8 + lVar14 * 0x18) = dVar4;
  *(double *)(lVar6 + 0x10 + lVar14 * 0x18) = dVar19;
  return;
}



// FUNCTION 144562238 FUN_144562238 body=162 status=ok
// SIG undefined FUN_144562238(void)

void FUN_144562238(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(*(longlong *)(*param_1 + 0xac0) + (longlong)*param_2 * 4);
  local_38 = 1;
  FUN_146c393d4(&local_30,param_1[1],uVar1,1);
  if (*(char *)(param_1[1] + 0x70) == '\x01') {
    lVar2 = *(longlong *)(*(longlong *)(param_1[1] + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
    uVar3 = (ulonglong)(uVar1 & 0x1ff);
    *(float *)(lVar2 + uVar3 * 0xc) = (float)local_30;
    *(float *)(lVar2 + 4 + uVar3 * 0xc) = (float)local_28;
    *(float *)(lVar2 + 8 + uVar3 * 0xc) = (float)local_20;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1445622dc FUN_1445622dc body=349 status=ok
// SIG undefined FUN_1445622dc(void)

void FUN_1445622dc(longlong *param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  float *pfVar13;
  ulonglong uVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  ulonglong uVar12;
  
  lVar15 = (longlong)*param_2;
  lVar8 = *param_1;
  lVar9 = param_1[1];
  uVar11 = *(uint *)(*(longlong *)(lVar8 + 0xac0) + lVar15 * 4);
  uVar14 = (ulonglong)(uVar11 >> 9);
  lVar10 = *(longlong *)(*(longlong *)(lVar9 + 0x10) + uVar14 * 8);
  uVar11 = uVar11 & 0x1ff;
  uVar12 = (ulonglong)uVar11;
  dVar4 = *(double *)(lVar10 + uVar12 * 0x18);
  dVar5 = *(double *)(lVar10 + 8 + uVar12 * 0x18);
  dVar6 = *(double *)(lVar10 + 0x10 + uVar12 * 0x18);
  if (*(char *)(lVar9 + 0x70) == '\x01') {
    pfVar13 = (float *)((ulonglong)(uVar11 * 0xc) +
                       *(longlong *)(*(longlong *)(lVar9 + 0x60) + uVar14 * 8));
  }
  else {
    pfVar13 = (float *)&DAT_14c846370;
  }
  fVar1 = pfVar13[2];
  fVar2 = pfVar13[1];
  fVar3 = *pfVar13;
  dVar7 = (double)param_1[2];
  dVar17 = (double)param_1[3] - dVar4;
  dVar16 = (double)param_1[4] - dVar5;
  dVar18 = (double)param_1[5] - dVar6;
  dVar16 = (double)FUN_149633aec(lVar8,SQRT(dVar18 * dVar18 + dVar17 * dVar17 + dVar16 * dVar16));
  lVar8 = *(longlong *)(lVar8 + 0xec8);
  *(double *)(lVar8 + lVar15 * 0x18) = (double)fVar3 * dVar7 * dVar16 + dVar4;
  *(double *)(lVar8 + 8 + lVar15 * 0x18) = (double)fVar2 * dVar7 * dVar16 + dVar5;
  *(double *)(lVar8 + 0x10 + lVar15 * 0x18) = (double)fVar1 * dVar7 * dVar16 + dVar6;
  return;
}



// FUNCTION 14456248c FUN_14456248c body=282 status=ok
// SIG undefined FUN_14456248c(void)

void FUN_14456248c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  lVar3 = *param_1;
  uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x1c0) + 0xa88))();
  plVar5 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bd8eb30;
  FUN_1496456f6(plVar5 + 2,uVar4);
  if (plVar5 == (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0x988) = 0x10;
    plVar6 = *(longlong **)(lVar3 + 0x990);
    if (plVar6 == (longlong *)0x0) goto LAB_14456258a;
    *(undefined8 *)(lVar3 + 0x990) = 0;
LAB_14456252c:
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    if (plVar5 == (longlong *)0x0) goto LAB_14456258a;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *(longlong **)(lVar3 + 0x988) = plVar5 + 2;
    plVar6 = *(longlong **)(lVar3 + 0x990);
    if (plVar5 == plVar6) {
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    else {
      *(longlong **)(lVar3 + 0x990) = plVar5;
      if (plVar6 != (longlong *)0x0) goto LAB_14456252c;
    }
  }
  LOCK();
  plVar6 = plVar5 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar2 = (int *)((longlong)plVar5 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
    }
  }
LAB_14456258a:
  FUN_14455a528(lVar3,*(undefined8 *)(*(longlong *)(lVar3 + 0x988) + 8));
  return;
}



// FUNCTION 1445625aa FUN_1445625aa body=5 status=ok
// SIG undefined FUN_1445625aa(void)

longlong FUN_1445625aa(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1445625b0 FUN_1445625b0 body=12 status=ok
// SIG undefined FUN_1445625b0(void)

void FUN_1445625b0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445625b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445625bc FUN_1445625bc body=29 status=ok
// SIG undefined FUN_1445625bc(void)

undefined8 FUN_1445625bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445625da FUN_1445625da body=112 status=ok
// SIG undefined FUN_1445625da(void)

void FUN_1445625da(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = *plVar1;
  if (lVar3 != 0) {
    while( true ) {
      do {
        lVar7 = lVar3;
        lVar3 = 0;
      } while (lVar7 == 0);
      plVar5 = *(longlong **)(lVar7 + 0x70);
      cVar6 = (**(code **)(*plVar5 + 0x20))(plVar5,0xffffffff,0);
      if (cVar6 != '\0') break;
      lVar3 = *plVar1;
    }
  }
  uVar4 = *(undefined8 *)(*(longlong *)(lVar2 + 0x988) + 8);
  FUN_14963703e(uVar4);
  FUN_149636f42(uVar4,lVar2 + 0xac0);
  FUN_143b07100(uVar4);
  return;
}



// FUNCTION 14456264e FUN_14456264e body=5 status=ok
// SIG undefined FUN_14456264e(void)

longlong FUN_14456264e(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144562654 FUN_144562654 body=12 status=ok
// SIG undefined FUN_144562654(void)

void FUN_144562654(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014456265d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144562660 FUN_144562660 body=29 status=ok
// SIG undefined FUN_144562660(void)

undefined8 FUN_144562660(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456267e FUN_14456267e body=23 status=ok
// SIG undefined FUN_14456267e(void)

void FUN_14456267e(undefined8 *param_1)

{
  FUN_1496454de(*(undefined8 *)*param_1,param_1[1] + 0xaf8);
  return;
}



// FUNCTION 14456269a FUN_14456269a body=5 status=ok
// SIG undefined FUN_14456269a(void)

longlong FUN_14456269a(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1445626a0 FUN_1445626a0 body=12 status=ok
// SIG undefined FUN_1445626a0(void)

void FUN_1445626a0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001445626a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1445626ac FUN_1445626ac body=29 status=ok
// SIG undefined FUN_1445626ac(void)

undefined8 FUN_1445626ac(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445626ca FUN_1445626ca body=138 status=ok
// SIG undefined FUN_1445626ca(void)

double FUN_1445626ca(longlong *param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(*param_3 >> 9) * 8);
  uVar3 = (ulonglong)(*param_3 & 0x1ff);
  dVar4 = *(double *)(lVar1 + 0xa20) - *(double *)(lVar2 + uVar3 * 0x18);
  dVar5 = *(double *)(lVar1 + 0xa28) - *(double *)(lVar2 + 8 + uVar3 * 0x18);
  dVar6 = *(double *)(lVar1 + 0xa30) - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
  dVar4 = (double)FUN_149633aec(lVar1,SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5));
  return (1.0 - dVar4) * (double)param_1[1];
}



// FUNCTION 14456277e FUN_14456277e body=29 status=ok
// SIG undefined FUN_14456277e(void)

undefined8 FUN_14456277e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456279c FUN_14456279c body=176 status=ok
// SIG undefined FUN_14456279c(void)

double FUN_14456279c(longlong *param_1,longlong param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + (ulonglong)(*param_3 >> 9) * 8);
  uVar3 = (ulonglong)(*param_3 & 0x1ff);
  dVar4 = *(double *)(lVar1 + 0xa20) - *(double *)(lVar2 + uVar3 * 0x18);
  dVar5 = *(double *)(lVar1 + 0xa28) - *(double *)(lVar2 + 8 + uVar3 * 0x18);
  dVar6 = *(double *)(lVar1 + 0xa30) - *(double *)(lVar2 + 0x10 + uVar3 * 0x18);
  dVar6 = (double)FUN_149633aec(lVar1,SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5));
  dVar4 = (double)param_1[2];
  dVar5 = 1.0;
  if (dVar4 <= 1.0) {
    dVar5 = dVar4;
  }
  dVar5 = (double)(~-(ulonglong)(dVar4 < 0.0) & (ulonglong)dVar5);
  return (dVar5 * (1.0 - dVar6) + (1.0 - dVar5)) * (double)param_1[1];
}



// FUNCTION 14456287e FUN_14456287e body=29 status=ok
// SIG undefined FUN_14456287e(void)

undefined8 FUN_14456287e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456289c FUN_14456289c body=186 status=ok
// SIG undefined FUN_14456289c(void)

void FUN_14456289c(longlong *param_1,int *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  double local_38;
  double local_30;
  double local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  uVar1 = *(uint *)(*(longlong *)(lVar2 + 0xf10) + (longlong)*param_2 * 4);
  local_48 = 1;
  FUN_146c393d4(&local_38,*(undefined8 *)param_1[1],uVar1,1);
  if (*(char *)(*(longlong *)param_1[1] + 0x70) == '\x01') {
    lVar3 = *(longlong *)
             (*(longlong *)(*(longlong *)param_1[1] + 0x60) + (ulonglong)(uVar1 >> 9) * 8);
    uVar4 = (ulonglong)(uVar1 & 0x1ff);
    *(float *)(lVar3 + uVar4 * 0xc) = (float)local_38;
    *(float *)(lVar3 + 4 + uVar4 * 0xc) = (float)local_30;
    *(float *)(lVar3 + 8 + uVar4 * 0xc) = (float)local_28;
  }
  *(undefined1 *)(*(longlong *)(lVar2 + 0xf20) + (longlong)(int)uVar1) = 0;
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144562958 FUN_144562958 body=220 status=ok
// SIG undefined FUN_144562958(void)

void FUN_144562958(longlong *param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  float local_4c [3];
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *param_1;
  iVar1 = *(int *)(*(longlong *)(lVar2 + 0xf10) + (longlong)*param_2 * 4);
  local_60 = 1;
  local_68 = 1;
  FUN_146c39670(&local_40,*(undefined8 *)param_1[1],*(undefined8 *)param_1[2],iVar1);
  lVar3 = *(longlong *)param_1[2];
  local_4c[0] = (float)local_40;
  local_4c[1] = (float)local_38;
  local_4c[2] = (float)local_30;
  lVar4 = 0;
  do {
    uVar5 = iVar1 * 3 + (int)lVar4;
    *(float *)(*(longlong *)(*(longlong *)(lVar3 + 0x48) + (ulonglong)(uVar5 >> 9) * 8) +
              (ulonglong)(uVar5 & 0x1ff) * 4) = local_4c[lVar4];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  *(undefined1 *)(*(longlong *)(lVar2 + 0xf20) + (longlong)iVar1) = 0;
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144562a36 FUN_144562a36 body=1329 status=ok
// SIG undefined FUN_144562a36(void)

void FUN_144562a36(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined ***pppuVar12;
  longlong *plVar13;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined1 local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined1 local_108;
  longlong local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  longlong local_d8 [4];
  longlong local_b8;
  longlong *local_a8;
  longlong local_98 [4];
  code *local_78;
  undefined ***local_68;
  undefined **local_58;
  longlong lStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar3 = *param_1;
  uVar9 = (**(code **)(**(longlong **)(lVar3 + 0x1c0) + 0xa88))();
  local_120 = 0;
  local_128 = 0;
  FUN_146c005f0(lVar3 + 0xba8,uVar9,0,0);
  local_b8 = 0;
  local_a8 = (longlong *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14bd8eb70;
  local_78 = FUN_144562f9c;
  lStack_50 = lVar3;
  FUN_14170b918(&local_f8);
  plVar5 = plStack_f0;
  lVar4 = local_f8;
  local_e8 = (longlong *)CONCAT71(local_e8._1_7_,1);
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_f0 + 1) = (int)plStack_f0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar9 = FUN_14118da1c();
        bVar8 = FUN_14054d46e(uVar9,L"nothreading");
        DAT_14c83f0f8 = bVar8 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar6 = local_78;
    if (DAT_14c83f0f8 == 1) goto LAB_144562b30;
    pppuVar12 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar12 = &local_58;
    }
    uVar9 = (*(code *)(*pppuVar12)[1])();
    (*pcVar6)(uVar9);
    *(undefined4 *)(local_f8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144562b30:
    plVar11 = DAT_14c8442c0;
    puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar10[1] = 0;
    *puVar10 = TAsyncQueuedWork<void>::vftable;
    puVar10[2] = local_78;
    puVar10[4] = local_68;
    local_68 = (undefined ***)0x0;
    *(undefined4 *)(puVar10 + 8) = local_48;
    *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_44;
    *(undefined4 *)(puVar10 + 9) = uStack_40;
    *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_3c;
    puVar10[6] = local_58;
    puVar10[7] = lStack_50;
    if (local_78 != (code *)0x0) {
      local_78 = (code *)0x0;
    }
    puVar10[10] = local_f8;
    puVar10[0xb] = plStack_f0;
    local_f8 = 0;
    plStack_f0 = (longlong *)0x0;
    *(undefined1 *)(puVar10 + 0xc) = 0;
    (**(code **)(*plVar11 + 0x18))(plVar11,puVar10,3);
  }
  plVar11 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_f0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar12 = local_68;
    if (local_68 == (undefined ***)0x0) {
      pppuVar12 = &local_58;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (local_b8 != 0) {
    plVar11 = local_a8;
    if (local_a8 == (longlong *)0x0) {
      plVar11 = local_98;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  local_f8 = 0;
  local_e8 = (longlong *)0x0;
  local_68 = (undefined ***)0x0;
  local_58 = &PTR_LAB_14bd8eb90;
  local_78 = FUN_144563020;
  lStack_50 = lVar3;
  FUN_14170b918(&local_118);
  plVar11 = plStack_110;
  lVar3 = local_118;
  local_108 = 1;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c83f0fc) {
      FUN_144b3d300(&DAT_14c83f0fc);
      if (DAT_14c83f0fc == -1) {
        uVar9 = FUN_14118da1c();
        bVar8 = FUN_14054d46e(uVar9,L"nothreading");
        DAT_14c83f0f8 = bVar8 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
    }
    pcVar6 = local_78;
    if (DAT_14c83f0f8 != 1) {
      pppuVar12 = local_68;
      if (local_68 == (undefined ***)0x0) {
        pppuVar12 = &local_58;
      }
      uVar9 = (*(code *)(*pppuVar12)[1])();
      (*pcVar6)(uVar9);
      *(undefined4 *)(local_118 + 0x80) = 0;
      FUN_140b576f0();
      goto LAB_144562dcc;
    }
  }
  plVar13 = DAT_14c8442c0;
  puVar10 = (undefined8 *)FUN_14001cc68(0x70,0x10);
  puVar10[1] = 0;
  *puVar10 = TAsyncQueuedWork<void>::vftable;
  puVar10[2] = local_78;
  puVar10[4] = local_68;
  local_68 = (undefined ***)0x0;
  *(undefined4 *)(puVar10 + 8) = local_48;
  *(undefined4 *)((longlong)puVar10 + 0x44) = uStack_44;
  *(undefined4 *)(puVar10 + 9) = uStack_40;
  *(undefined4 *)((longlong)puVar10 + 0x4c) = uStack_3c;
  puVar10[6] = local_58;
  puVar10[7] = lStack_50;
  if (local_78 != (code *)0x0) {
    local_78 = (code *)0x0;
  }
  puVar10[10] = local_118;
  puVar10[0xb] = plStack_110;
  local_118 = 0;
  plStack_110 = (longlong *)0x0;
  *(undefined1 *)(puVar10 + 0xc) = 0;
  (**(code **)(*plVar13 + 0x18))(plVar13,puVar10,3);
LAB_144562dcc:
  plVar13 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_110 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_110)(plStack_110);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (local_78 != (code *)0x0) {
    pppuVar12 = &local_58;
    if (local_68 != (undefined ***)0x0) {
      pppuVar12 = local_68;
    }
    (*(code *)(*pppuVar12)[2])(pppuVar12);
  }
  if (local_f8 != 0) {
    plVar13 = local_e8;
    if (local_e8 == (longlong *)0x0) {
      plVar13 = local_d8;
    }
    (**(code **)(*plVar13 + 0x10))();
  }
  if (lVar4 != 0) {
    do {
      plVar13 = *(longlong **)(lVar4 + 0x70);
      cVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,0xffffffff,0);
    } while (cVar7 == '\0');
  }
  if (lVar3 != 0) {
    do {
      plVar13 = *(longlong **)(lVar3 + 0x70);
      cVar7 = (**(code **)(*plVar13 + 0x20))(plVar13,0xffffffff,0);
    } while (cVar7 == '\0');
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar11 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144562f6c FUN_144562f6c body=5 status=ok
// SIG undefined FUN_144562f6c(void)

longlong FUN_144562f6c(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144562f72 FUN_144562f72 body=12 status=ok
// SIG undefined FUN_144562f72(void)

void FUN_144562f72(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144562f7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144562f7e FUN_144562f7e body=29 status=ok
// SIG undefined FUN_144562f7e(void)

undefined8 FUN_144562f7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144562f9c FUN_144562f9c body=79 status=ok
// SIG undefined FUN_144562f9c(void)

void FUN_144562f9c(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(longlong *)(lVar1 + 0xdd8) = lVar1 + 0xba8;
  *(undefined8 *)(lVar1 + 0xde0) = 0;
  FUN_146bee918(lVar1 + 0xdd0,0);
  *(ulonglong *)(lVar1 + 0xde0) =
       (ulonglong)
       (uint)(*(int *)(*(longlong *)(lVar1 + 0xdd8) + 0x214) +
             *(int *)(*(longlong *)(lVar1 + 0xdd8) + 0x218));
  return;
}



// FUNCTION 144562ff0 FUN_144562ff0 body=5 status=ok
// SIG undefined FUN_144562ff0(void)

longlong FUN_144562ff0(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 144562ff6 FUN_144562ff6 body=12 status=ok
// SIG undefined FUN_144562ff6(void)

void FUN_144562ff6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144562fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144563002 FUN_144563002 body=29 status=ok
// SIG undefined FUN_144563002(void)

undefined8 FUN_144563002(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563020 FUN_144563020 body=34 status=ok
// SIG undefined FUN_144563020(void)

void FUN_144563020(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  *(longlong *)(lVar1 + 0xea0) = lVar1 + 0xba8;
  FUN_146c37e28(lVar1 + 0xea0,CONCAT71((int7)((ulonglong)(lVar1 + 0xba8) >> 8),1),1);
  return;
}



// FUNCTION 144563046 FUN_144563046 body=5 status=ok
// SIG undefined FUN_144563046(void)

longlong FUN_144563046(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14456304c FUN_14456304c body=12 status=ok
// SIG undefined FUN_14456304c(void)

void FUN_14456304c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144563055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 144563058 FUN_144563058 body=29 status=ok
// SIG undefined FUN_144563058(void)

undefined8 FUN_144563058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445630ae FUN_1445630ae body=29 status=ok
// SIG undefined FUN_1445630ae(void)

undefined8 FUN_1445630ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563104 FUN_144563104 body=29 status=ok
// SIG undefined FUN_144563104(void)

undefined8 FUN_144563104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456315a FUN_14456315a body=29 status=ok
// SIG undefined FUN_14456315a(void)

undefined8 FUN_14456315a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445631b0 FUN_1445631b0 body=29 status=ok
// SIG undefined FUN_1445631b0(void)

undefined8 FUN_1445631b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563206 FUN_144563206 body=29 status=ok
// SIG undefined FUN_144563206(void)

undefined8 FUN_144563206(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456325c FUN_14456325c body=29 status=ok
// SIG undefined FUN_14456325c(void)

undefined8 FUN_14456325c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445632b2 FUN_1445632b2 body=29 status=ok
// SIG undefined FUN_1445632b2(void)

undefined8 FUN_1445632b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563308 FUN_144563308 body=29 status=ok
// SIG undefined FUN_144563308(void)

undefined8 FUN_144563308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563362 FUN_144563362 body=29 status=ok
// SIG undefined FUN_144563362(void)

undefined8 FUN_144563362(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1445633b8 FUN_1445633b8 body=29 status=ok
// SIG undefined FUN_1445633b8(void)

undefined8 FUN_1445633b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456340e FUN_14456340e body=29 status=ok
// SIG undefined FUN_14456340e(void)

undefined8 FUN_14456340e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563464 FUN_144563464 body=29 status=ok
// SIG undefined FUN_144563464(void)

undefined8 FUN_144563464(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 144563481 FUN_144563481 body=1699 status=ok
// SIG undefined FUN_144563481(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_144563481(void)

{
  char cVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined8 local_88;
  undefined1 local_78 [4];
  undefined1 local_74 [4];
  wchar_t *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1400b22c2(&local_70,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_70,&DAT_14cc200d4);
  if (cVar1 == '\0') {
    _DAT_14cc200d4 = 0;
    uRam000000014cc200dc = 0;
  }
  if (local_70 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd7b040;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd7b060,3,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd7c300,3,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd7ddb0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd7ddd0,4,0);
  ppuStack_90 = &PTR_FUN_14bd80520;
  local_98 = 0;
  local_88 = 2;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd80560,4,0);
  local_70 = L"CubeGridPushPullModeDescription";
  local_68 = 0x1f;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = 
  L"Select grid cells and push/pull them to create geometry. Refer to side panel for shortcuts.";
  local_68 = 0x5b;
  FUN_140208c1e(&DAT_14cc20320,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b33);
  local_70 = L"CubeGridCornerModeDescription";
  local_68 = 0x1d;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = 
  L"Toggle corner selection for push/pulling by clicking or dragging. Press Enter or click \"Done\" to accept the result."
  ;
  local_68 = 0x73;
  FUN_140208c1e(&DAT_14cc20330,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b47);
  local_70 = L"CreatingNewAssetLabel";
  local_68 = 0x15;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Creating new asset.";
  local_68 = 0x13;
  FUN_140208c1e(&DAT_14cc20340,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b5b);
  local_70 = L"EditingExistingAssetLabel";
  local_68 = 0x19;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Editing existing asset.";
  local_68 = 0x17;
  FUN_140208c1e(&DAT_14cc20350,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b6f);
  local_70 = L"SelectionChangeTransaction";
  local_68 = 0x1a;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Cube Grid Selection Change";
  local_68 = 0x1a;
  FUN_140208c1e(&DAT_14cc20360,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b83);
  local_70 = L"ModeChangeTransaction";
  local_68 = 0x15;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Cube Grid Mode Change";
  local_68 = 0x15;
  FUN_140208c1e(&DAT_14cc20370,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556b97);
  local_70 = L"CornerExtrudeAmountTransaction";
  local_68 = 0x1e;
  FUN_1446e940c(local_74,&local_70);
  local_70 = L"UCubeGridTool";
  local_68 = 0xd;
  FUN_1446e940c(local_78,&local_70);
  local_70 = L"Corner Push/Pull Amount";
  local_68 = 0x17;
  FUN_140208c1e(&DAT_14cc20380,local_78,local_74,&local_70);
  atexit((_func_5014 *)&LAB_144556bab);
  FUN_140056680(&DAT_14cc20390,L"CubeGridTool");
  atexit((_func_5014 *)&LAB_144556bbf);
  FUN_140056680(&DAT_14cc203a8,L"HoverLines");
  atexit((_func_5014 *)&LAB_144556bd0);
  DAT_14cc203a0 = &DAT_14cc203a8;
  FUN_140056680(&DAT_14cc203c0,L"GridLines");
  atexit((_func_5014 *)&LAB_144556be1);
  DAT_14cc203b8 = &DAT_14cc203c0;
  FUN_140056680(&DAT_14cc203d8,L"SelectionLines");
  atexit((_func_5014 *)&LAB_144556bf2);
  DAT_14cc203d0 = &DAT_14cc203d8;
  FUN_140056680(&DAT_14cc203f0,L"CornerModeLines");
  atexit((_func_5014 *)&LAB_144556c03);
  DAT_14cc203e8 = &DAT_14cc203f0;
  _DAT_14cc2043c = 0xffffff00;
  DAT_14cc20440 = 0xffff0000;
  ppuStack_90 = &PTR_FUN_14bd82cc0;
  local_98 = 0;
  local_88 = 3;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd82d20,3,0);
  local_88 = 4;
  ppuStack_90 = &PTR_FUN_14bd86340;
  local_98 = 1;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd863f0,8,&PTR_FUN_14bd863c0);
  local_88 = 4;
  ppuStack_90 = &PTR_FUN_14bd87cf0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd87d70,4,0);
  local_88 = 0;
  local_98 = 0;
  ppuStack_90 = (undefined **)0x0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd88db0,1,0);
  local_88 = 1;
  ppuStack_90 = &PTR_FUN_14bd8b4a0;
  local_98 = 0;
  FUN_14282b410(L"/Script/MeshModelingToolsExp",&PTR_FUN_14bd8b4c0,7,0);
  FUN_140056680(&DAT_14cc20840,L"BrushIndicatorGizmoType");
  atexit((_func_5014 *)&LAB_144557983);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144563b28 FUN_144563b28 body=55 status=ok
// SIG undefined FUN_144563b28(void)

void FUN_144563b28(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20908 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20908 = FUN_14171c317(FUN_146746eae,uVar1,L"EEditPivotSnapDragRotationMode");
  }
  return;
}



// FUNCTION 144563b5f FUN_144563b5f body=55 status=ok
// SIG undefined FUN_144563b5f(void)

void FUN_144563b5f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20950 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20950 = FUN_14171c317(FUN_146746fd4,uVar1,L"EEditPivotToolActions");
  }
  return;
}



// FUNCTION 144563ba7 FUN_144563ba7 body=55 status=ok
// SIG undefined FUN_144563ba7(void)

void FUN_144563ba7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20a90 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20a90 = FUN_14171c317(FUN_1467473fa,uVar1,L"EHoleFillToolActions");
  }
  return;
}



// FUNCTION 144563bde FUN_144563bde body=55 status=ok
// SIG undefined FUN_144563bde(void)

void FUN_144563bde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20b30 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20b30 = FUN_14171c317(FUN_146747673,uVar1,L"ELatticeInterpolationType");
  }
  return;
}



// FUNCTION 144563c15 FUN_144563c15 body=55 status=ok
// SIG undefined FUN_144563c15(void)

void FUN_144563c15(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20b48 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20b48 = FUN_14171c317(FUN_1467476a2,uVar1,L"ELatticeDeformerToolAction");
  }
  return;
}



// FUNCTION 144563c60 FUN_144563c60 body=55 status=ok
// SIG undefined FUN_144563c60(void)

void FUN_144563c60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20be0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20be0 = FUN_14171c317(FUN_1467478cf,uVar1,L"EBrushActionMode");
  }
  return;
}



// FUNCTION 144563c97 FUN_144563c97 body=55 status=ok
// SIG undefined FUN_144563c97(void)

void FUN_144563c97(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20c30 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20c30 = FUN_14171c317(FUN_146747a19,uVar1,L"EMeshAttributePaintToolActions");
  }
  return;
}



// FUNCTION 144563cdf FUN_144563cdf body=55 status=ok
// SIG undefined FUN_144563cdf(void)

void FUN_144563cdf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20ce8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20ce8 = FUN_14171c317(FUN_146747bb5,uVar1,L"EMeshGroupPaintInteractionType");
  }
  return;
}



// FUNCTION 144563d16 FUN_144563d16 body=55 status=ok
// SIG undefined FUN_144563d16(void)

void FUN_144563d16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20d00 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20d00 = FUN_14171c317(FUN_146747be4,uVar1,L"EMeshGroupPaintBrushType");
  }
  return;
}



// FUNCTION 144563d4d FUN_144563d4d body=55 status=ok
// SIG undefined FUN_144563d4d(void)

void FUN_144563d4d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20d18 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20d18 = FUN_14171c317(FUN_146747c13,uVar1,L"EMeshGroupPaintBrushAreaType");
  }
  return;
}



// FUNCTION 144563d84 FUN_144563d84 body=55 status=ok
// SIG undefined FUN_144563d84(void)

void FUN_144563d84(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20d30 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20d30 = FUN_14171c317(FUN_146747c42,uVar1,L"EMeshGroupPaintVisibilityType");
  }
  return;
}



// FUNCTION 144563dbb FUN_144563dbb body=55 status=ok
// SIG undefined FUN_144563dbb(void)

void FUN_144563dbb(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20d60 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20d60 = FUN_14171c317(FUN_146747d29,uVar1,L"EMeshGroupPaintToolActions");
  }
  return;
}



// FUNCTION 144563df2 FUN_144563df2 body=5769 status=ok
// SIG undefined FUN_144563df2(void)

void FUN_144563df2(undefined1 **param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 ***pppuVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char cVar8;
  int iVar9;
  undefined1 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined1 **ppuVar25;
  undefined1 **ppuVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  int iVar29;
  int iVar30;
  undefined ***pppuVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  uint uVar35;
  undefined8 unaff_RBX;
  longlong lVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  int iVar39;
  ulonglong uVar40;
  double dVar41;
  double dVar42;
  undefined1 auStack_288 [32];
  undefined1 ***local_268;
  undefined1 **local_260;
  undefined1 **local_258;
  undefined1 **local_250;
  undefined8 *local_248;
  undefined1 **local_240;
  undefined1 **local_238;
  undefined8 **local_230;
  undefined1 **local_228;
  undefined8 uStack_220;
  undefined1 **local_218;
  undefined8 *local_210;
  code *local_208;
  undefined8 *puStack_200;
  undefined1 *local_1f8;
  longlong *plStack_1f0;
  undefined1 **local_1e8;
  double *local_1e0;
  undefined1 **local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  undefined1 local_1ba;
  undefined1 local_1b9;
  double local_1b8;
  undefined1 local_1a9;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  double local_198;
  uint local_18c;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  float local_154;
  undefined1 *local_150;
  longlong local_148;
  longlong *local_138;
  longlong alStack_128 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  undefined1 **local_f0;
  undefined **local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  FUN_1496b3d26();
  puVar10 = param_1[0x17d];
  if (puVar10[0x130] == '\x01') {
    FUN_1484de806(puVar10);
    puVar10[0x130] = 0;
  }
  cVar17 = param_1[0x175][0xa9];
  FUN_1484fe310(param_1[0x17a],cVar17 == '\x03');
  (**(code **)(*param_1 + 0x5f0))(param_1,param_1[0x175][0xb0] == '\x01');
  (**(code **)(*param_1 + 0x600))
            (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar17 != '\x03') & 0xffffffff);
  if (*(char *)(param_1 + 0x179) == '\x01') {
    (**(code **)(*param_1 + 0x658))(param_1,*(undefined4 *)((longlong)param_1 + 0xbcc));
    *(undefined1 *)(param_1 + 0x179) = 0;
    *(undefined4 *)((longlong)param_1 + 0xbcc) = 0;
  }
  if (*(char *)(param_1 + 0x18a) == '\x01') {
    *(undefined1 *)(param_1 + 0x18a) = 0;
    FUN_143b6ee10(param_1[0x17c],param_1 + 0x180,2);
    plVar21 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar21 + 0x348))(plVar21);
    *(undefined1 *)(param_1 + 0x1f7) = 0;
    *(undefined1 *)(param_1 + 0x18a) = 0;
    goto LAB_14456404c;
  }
  if ((*(char *)(param_1 + 0x1e9) != '\0') || (*(char *)((longlong)param_1 + 0xf49) == '\x01')) {
    if ((-1 < *(int *)(param_1 + 0x8a)) &&
       (cVar17 = (**(code **)(*param_1 + 0x550))(param_1), cVar17 == '\0')) {
      lVar22 = (**(code **)(*param_1 + 0x420))(param_1);
      uVar35 = *(uint *)(param_1 + 0x8a);
      if ((-1 < (int)uVar35) &&
         ((int)uVar35 < *(int *)(lVar22 + 0x140) * 0x200 + *(int *)(lVar22 + 0x144))) {
        if ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(lVar22 + 0x148) + (ulonglong)(uVar35 >> 9) * 8) +
                               (ulonglong)(uVar35 & 0x1ff) * 2) - 1U) < 0xfffe) {
          lVar22 = *(longlong *)((longlong)param_1[0x17f] + 8);
          if (lVar22 == 0) {
            uVar20 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f]);
          }
          else {
            uVar20 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar22 + 0x20) + (ulonglong)(uVar35 >> 9) * 8) +
                      (ulonglong)(uVar35 & 0x1ff) * 4);
          }
          if (*(char *)(param_1 + 0x1e9) == '\x01') {
            *(undefined4 *)(param_1[0x175] + 0xb4) = uVar20;
            (**(code **)(*param_1 + 0x330))(param_1,param_1[0x175]);
          }
          else if (*(char *)((longlong)param_1 + 0xf49) == '\x01') {
            FUN_14965c026(param_1,uVar20);
          }
        }
      }
    }
    *(undefined2 *)(param_1 + 0x1e9) = 0;
  }
  if ((2 < (byte)param_1[0x175][0xa9]) ||
     (cVar17 = (**(code **)(*param_1 + 0x518))(param_1), cVar17 == '\0')) goto LAB_14456404c;
  uVar23 = (**(code **)(*param_1 + 0x558))(param_1);
  cVar17 = FUN_14965ab18(param_1,uVar23);
  if (cVar17 == '\0') goto LAB_14456404c;
  (**(code **)(*param_1 + 0x530))(param_1);
  cVar17 = (**(code **)(*param_1 + 0x550))(param_1);
  if (cVar17 == '\0') goto LAB_14456404c;
  bVar18 = (**(code **)(*param_1 + 0x520))(param_1);
  local_260 = (undefined1 **)
              CONCAT44(local_260._4_4_,
                       *(undefined4 *)(param_1[0x175] + (ulonglong)bVar18 * 8 + 0xb4));
  puVar24 = (undefined1 *)(**(code **)(*param_1 + 0x420))(param_1);
  local_150 = puVar24;
  dVar12 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar11 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar15 = DAT_14c846520;
  local_154 = (float)(dVar11 * dVar12);
  dVar11 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  dVar13 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  dVar41 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar16 = DAT_14c846520;
  puVar10 = param_1[0xd9];
  puVar6 = param_1[0xd8];
  puVar7 = param_1[0xd7];
  dVar12 = (double)CONCAT44(DAT_14c846510._4_4_,(undefined4)DAT_14c846510);
  dVar14 = (double)CONCAT44(DAT_14c846518._4_4_,(undefined4)DAT_14c846518);
  dVar42 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  local_178 = (double)param_1[0xd9] - dVar16 * dVar42;
  local_188 = (double)param_1[0xd7] - dVar12 * dVar42;
  local_180 = (double)param_1[0xd8] - dVar14 * dVar42;
  local_250 = param_1 + 0x19d;
  local_170 = dVar11 * dVar41 + (double)puVar7;
  local_168 = dVar13 * dVar41 + (double)puVar6;
  local_160 = dVar15 * dVar41 + (double)puVar10;
  FUN_1402226aa();
  local_18c = *(uint *)(param_1 + 0x8a);
  if ((int)local_18c < 0) {
LAB_144564335:
    local_198 = DAT_14c846520;
    local_1a8 = (undefined4)DAT_14c846510;
    uStack_1a4 = DAT_14c846510._4_4_;
    uStack_1a0 = (undefined4)DAT_14c846518;
    uStack_19c = DAT_14c846518._4_4_;
  }
  else {
    iVar29 = *(int *)(puVar24 + 0x140) * 0x200 + *(int *)(puVar24 + 0x144);
    if (((int)local_18c < iVar29) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(puVar24 + 0x148) + (ulonglong)(local_18c >> 9) * 8) +
                           (ulonglong)(local_18c & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_1447cbafe(local_250,&local_108,&local_18c,0);
      if ((int)local_18c < 0) goto LAB_144564335;
      iVar29 = *(int *)(local_150 + 0x140) * 0x200 + *(int *)(local_150 + 0x144);
      puVar24 = local_150;
    }
    if ((iVar29 <= (int)local_18c) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(puVar24 + 0x148) +
                                      (ulonglong)(local_18c >> 9) * 8) +
                                    (ulonglong)(local_18c & 0x1ff) * 2) - 1U))) goto LAB_144564335;
    local_198 = *(double *)(param_1[0x1f1] + (ulonglong)local_18c * 0x18 + 0x10);
    puVar4 = (undefined4 *)(param_1[0x1f1] + (ulonglong)local_18c * 0x18);
    local_1a8 = *puVar4;
    uStack_1a4 = puVar4[1];
    uStack_1a0 = puVar4[2];
    uStack_19c = puVar4[3];
  }
  cVar17 = param_1[0x175][0xb0];
  fVar5 = *(float *)(param_1[0x175] + 0xc4);
  local_1a9 = fVar5 < 180.0 && cVar17 != '\x01';
  local_1b8 = cos((double)fVar5 * 0.017453292519943295);
  local_1e0 = &local_1b8;
  puVar10 = param_1[0x175];
  local_1b9 = puVar10[200];
  local_1d0 = &local_1b9;
  local_1ba = puVar10[0xc9];
  local_1c8 = &local_1ba;
  plStack_1f0 = (longlong *)&local_1a8;
  cVar8 = puVar10[0xa9];
  local_1f8 = &local_1a9;
  local_1e8 = param_1;
  local_1d8 = &local_150;
  if (cVar17 == '\x01') {
    puStack_200 = &local_108;
    local_f8 = (undefined ***)&local_154;
    local_208 = FUN_14456d022;
    local_108 = (code *)&local_150;
    uStack_100 = param_1 + 0xd7;
    local_f0 = param_1;
    FUN_146c8845c(param_1 + 0x1a8);
  }
  else if (((-1 < (int)local_18c) &&
           ((int)local_18c < *(int *)(local_150 + 0x140) * 0x200 + *(int *)(local_150 + 0x144))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(local_150 + 0x148) + (ulonglong)(local_18c >> 9) * 8)
                              + (ulonglong)(local_18c & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_208 = (code *)0x0;
    puStack_200 = (undefined8 *)&DAT_00000001;
    FUN_1446f48e2(&local_208,0);
    *(uint *)local_208 = local_18c;
    local_210 = &local_108;
    local_f8 = (undefined ***)&local_154;
    local_f0 = &local_1f8;
    local_268 = &local_218;
    local_218 = (undefined1 **)FUN_14456d0da;
    local_108 = (code *)&local_150;
    uStack_100 = param_1 + 0xd7;
    FUN_146c81f86(local_150,&local_208,local_250,param_1 + 0x18d);
    if (local_208 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (cVar8 == '\x02') {
    local_228 = (undefined1 **)0x0;
    uStack_220 = (undefined1 ***)0x0;
    uVar40 = 0;
    local_e8 = (undefined **)0x0;
    uStack_e0 = 0;
    local_108 = (code *)0x0;
    uStack_100 = (undefined1 **)0x0;
    uStack_dc = 0x80;
    uStack_d8 = 0xffffffff;
    uStack_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_258 = param_1 + 0x19f;
    iVar29 = *(int *)(param_1 + 0x1a2);
    uVar37 = 1;
    iVar34 = 0;
    iVar39 = 0;
    if (iVar29 != 0) {
      ppuVar26 = (undefined1 **)param_1[0x1a1];
      if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
        ppuVar26 = local_258;
      }
      uVar35 = *(uint *)ppuVar26;
      if (uVar35 == 0) {
        iVar39 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar39 = iVar29 + -1;
        }
        uVar40 = 0;
        uVar37 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar37 = uVar40;
        }
        iVar34 = 0;
        do {
          if (uVar37 == uVar40) goto LAB_14456469e;
          iVar34 = iVar34 + 0x20;
          uVar35 = *(uint *)((longlong)ppuVar26 + (uVar40 + 1) * 4);
          uVar40 = uVar40 + 1;
        } while (uVar35 == 0);
      }
      else {
        uVar40 = 0;
        iVar34 = 0;
      }
      uVar37 = (ulonglong)(-uVar35 & uVar35);
      uVar38 = uVar37 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar38 != 0) {
        for (; uVar38 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar39 = (iVar34 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar29 <= iVar39) {
        iVar39 = iVar29;
      }
    }
    if (iVar39 != iVar29) {
      uVar35 = 0xffffffff;
      do {
        uVar33 = *(uint *)(param_1[0x19d] + (longlong)iVar39 * 0xc);
        lVar22 = *(longlong *)((longlong)param_1[0x17f] + 8);
        if (lVar22 == 0) {
          iVar39 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar33);
        }
        else {
          iVar39 = *(int *)(*(longlong *)
                             (*(longlong *)(lVar22 + 0x20) + (ulonglong)(uVar33 >> 9) * 8) +
                           (ulonglong)(uVar33 & 0x1ff) * 4);
        }
        pppuVar3 = uStack_220;
        if (iVar39 != (int)local_260) {
          lVar22 = (longlong)(int)uStack_220;
          uVar19 = (int)uStack_220 + 1;
          uStack_220 = (undefined1 ***)CONCAT44(uStack_220._4_4_,uVar19);
          if (uStack_220._4_4_ < uVar19) {
            FUN_1446f48e2(&local_228,(ulonglong)pppuVar3 & 0xffffffff);
          }
          *(uint *)((longlong)local_228 + lVar22 * 4) = uVar33;
          lVar22 = *(longlong *)((longlong)param_1[0x17f] + 8);
          if (lVar22 == 0) {
            uVar20 = FUN_146bc96d4(*(undefined8 *)param_1[0x17f],uVar33);
          }
          else {
            uVar20 = *(undefined4 *)
                      (*(longlong *)(*(longlong *)(lVar22 + 0x20) + (ulonglong)(uVar33 >> 9) * 8) +
                      (ulonglong)(uVar33 & 0x1ff) * 4);
          }
          local_238 = (undefined1 **)CONCAT44(local_238._4_4_,uVar20);
          FUN_144984904(&local_108,&local_248,&local_238,0);
        }
        uVar35 = uVar35 & ~(uint)uVar37;
        ppuVar26 = (undefined1 **)param_1[0x1a1];
        if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
          ppuVar26 = local_258;
        }
        iVar9 = *(int *)(param_1 + 0x1a2);
        iVar39 = (int)uVar40;
        lVar22 = (longlong)iVar39;
        uVar33 = *(uint *)((longlong)ppuVar26 + lVar22 * 4) & uVar35;
        if (uVar33 == 0) {
          iVar30 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar30 = iVar9 + -1;
          }
          iVar30 = iVar30 >> 5;
          iVar34 = iVar34 + 0x20;
          iVar32 = iVar30;
          if (iVar30 < iVar39) {
            iVar32 = iVar39;
          }
          if (iVar39 < iVar30) {
            lVar36 = 0;
            do {
              uVar33 = *(uint *)((longlong)ppuVar26 + (lVar22 + lVar36 + 1) * 4);
              if (uVar33 != 0) {
                uVar40 = (ulonglong)(iVar39 + (int)lVar36 + 1);
                uVar35 = 0xffffffff;
                goto LAB_144565268;
              }
              iVar34 = iVar34 + 0x20;
              lVar36 = lVar36 + 1;
            } while (iVar32 - lVar22 != lVar36);
            uVar35 = 0xffffffff;
            iVar39 = iVar32;
          }
          uVar40 = (ulonglong)(iVar39 + 1);
          iVar39 = iVar9;
        }
        else {
LAB_144565268:
          uVar37 = (ulonglong)(-uVar33 & uVar33);
          uVar38 = uVar37 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar39 = (iVar34 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar39) {
            iVar39 = iVar9;
          }
        }
      } while (iVar39 != iVar29);
    }
LAB_14456469e:
    local_248 = &local_108;
    local_230 = &local_248;
    local_268 = &local_238;
    local_238 = (undefined1 **)FUN_14456d2b8;
    local_240 = param_1;
    FUN_146c81f86(local_150,&local_228,local_250,param_1 + 0x18d);
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    uVar37 = (ulonglong)uStack_100 >> 0x20;
    uStack_100 = (undefined1 **)((ulonglong)uStack_100 & 0xffffffff00000000);
    if ((int)uVar37 != 0) {
      FUN_1447a08a2(&local_108);
    }
    uStack_d8 = 0xffffffff;
    uStack_d4 = 0;
    uStack_e0 = 0;
    if (0x80 < uStack_dc) {
      uStack_dc = 0x80;
      FUN_1446efbd8();
    }
    if (local_e8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    ppuVar26 = local_228;
    if ((undefined1 **)local_108 != (undefined1 **)0x0) {
      FUN_1400020a8();
      ppuVar26 = local_228;
    }
LAB_14456483d:
    if (ppuVar26 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  else if (cVar8 == '\x01') {
    local_260 = param_1 + 0x19f;
    local_108 = (code *)0x0;
    uStack_100 = (undefined1 **)0x0;
    iVar29 = *(int *)(param_1 + 0x1a2);
    if (iVar29 == 0) {
      uVar38 = 1;
      iVar39 = 0;
      uVar37 = 0;
      iVar34 = 0;
    }
    else {
      ppuVar26 = (undefined1 **)param_1[0x1a1];
      if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
        ppuVar26 = local_260;
      }
      uVar35 = *(uint *)ppuVar26;
      if (uVar35 == 0) {
        iVar39 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar39 = iVar29 + -1;
        }
        uVar37 = 0;
        uVar40 = (ulonglong)(uint)(iVar39 >> 5);
        if (iVar39 >> 5 < 1) {
          uVar40 = uVar37;
        }
        iVar39 = 0;
        do {
          if (uVar40 == uVar37) goto LAB_1445647ee;
          iVar39 = iVar39 + 0x20;
          uVar35 = *(uint *)((longlong)ppuVar26 + (uVar37 + 1) * 4);
          uVar37 = uVar37 + 1;
        } while (uVar35 == 0);
      }
      else {
        iVar39 = 0;
        uVar37 = 0;
      }
      uVar38 = (ulonglong)(-uVar35 & uVar35);
      uVar40 = uVar38 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar29 <= iVar34) {
        iVar34 = iVar29;
      }
    }
    if (iVar34 != iVar29) {
      uVar35 = 0xffffffff;
      do {
        ppuVar26 = uStack_100;
        uVar20 = *(undefined4 *)(*local_250 + (longlong)iVar34 * 0xc);
        lVar22 = (longlong)(int)uStack_100;
        uVar33 = (int)uStack_100 + 1;
        uStack_100 = (undefined1 **)CONCAT44(uStack_100._4_4_,uVar33);
        if (uStack_100._4_4_ < uVar33) {
          FUN_1446f48e2(&local_108,(ulonglong)ppuVar26 & 0xffffffff);
        }
        *(undefined4 *)((longlong)local_108 + lVar22 * 4) = uVar20;
        uVar35 = uVar35 & ~(uint)uVar38;
        ppuVar26 = (undefined1 **)param_1[0x1a1];
        if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
          ppuVar26 = local_260;
        }
        iVar9 = *(int *)(param_1 + 0x1a2);
        iVar34 = (int)uVar37;
        lVar22 = (longlong)iVar34;
        uVar33 = *(uint *)((longlong)ppuVar26 + lVar22 * 4) & uVar35;
        if (uVar33 == 0) {
          iVar30 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar30 = iVar9 + -1;
          }
          iVar30 = iVar30 >> 5;
          iVar39 = iVar39 + 0x20;
          iVar32 = iVar30;
          if (iVar30 < iVar34) {
            iVar32 = iVar34;
          }
          if (iVar34 < iVar30) {
            lVar36 = 0;
            do {
              uVar33 = *(uint *)((longlong)ppuVar26 + (lVar22 + lVar36 + 1) * 4);
              if (uVar33 != 0) {
                uVar37 = (ulonglong)(iVar34 + (int)lVar36 + 1);
                uVar35 = 0xffffffff;
                goto LAB_1445650ec;
              }
              iVar39 = iVar39 + 0x20;
              lVar36 = lVar36 + 1;
            } while (iVar32 - lVar22 != lVar36);
            uVar35 = 0xffffffff;
            iVar34 = iVar32;
          }
          uVar37 = (ulonglong)(iVar34 + 1);
          iVar34 = iVar9;
        }
        else {
LAB_1445650ec:
          uVar38 = (ulonglong)(-uVar33 & uVar33);
          uVar40 = uVar38 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar9 <= iVar34) {
            iVar34 = iVar9;
          }
        }
      } while (iVar34 != iVar29);
    }
LAB_1445647ee:
    local_238 = &local_1f8;
    uStack_220 = &local_238;
    local_268 = &local_228;
    local_228 = (undefined1 **)FUN_14456d212;
    FUN_146c81f86(local_150,&local_108,local_250,param_1 + 0x18d);
    ppuVar26 = (undefined1 **)local_108;
    goto LAB_14456483d;
  }
  if (param_1[0x175][0xca] != '\0') {
    local_108 = (code *)0x0;
    uStack_100 = (undefined1 **)0x0;
    FUN_14965a7ea(param_1,local_250,param_1 + 0x18d,&local_108);
    if ((undefined1 **)local_108 != (undefined1 **)0x0) {
      FUN_1400020a8();
    }
  }
  ppuVar26 = param_1 + 0x193;
  FUN_1402226aa(ppuVar26);
  local_260 = param_1 + 0x19f;
  iVar29 = *(int *)(param_1 + 0x1a2);
  if (iVar29 == 0) {
    uVar38 = 1;
    uVar37 = 0;
    iVar39 = 0;
    iVar34 = 0;
  }
  else {
    ppuVar25 = (undefined1 **)param_1[0x1a1];
    if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
      ppuVar25 = local_260;
    }
    uVar35 = *(uint *)ppuVar25;
    if (uVar35 == 0) {
      iVar39 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar39 = iVar29 + -1;
      }
      uVar37 = 0;
      uVar40 = (ulonglong)(uint)(iVar39 >> 5);
      if (iVar39 >> 5 < 1) {
        uVar40 = uVar37;
      }
      iVar39 = 0;
      do {
        if (uVar40 == uVar37) goto LAB_144564934;
        iVar39 = iVar39 + 0x20;
        uVar35 = *(uint *)((longlong)ppuVar25 + (uVar37 + 1) * 4);
        uVar37 = uVar37 + 1;
      } while (uVar35 == 0);
    }
    else {
      uVar37 = 0;
      iVar39 = 0;
    }
    uVar38 = (ulonglong)(-uVar35 & uVar35);
    uVar40 = uVar38 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar29 <= iVar34) {
      iVar34 = iVar29;
    }
  }
  if (iVar34 != iVar29) {
    uVar35 = 0xffffffff;
    do {
      lVar22 = *(longlong *)
                (*(longlong *)(local_150 + 0x130) +
                (ulonglong)(*(uint *)(param_1[0x19d] + (longlong)iVar34 * 0xc) >> 9) * 8);
      uVar40 = (ulonglong)(*(uint *)(param_1[0x19d] + (longlong)iVar34 * 0xc) & 0x1ff);
      local_108 = *(code **)(lVar22 + uVar40 * 0xc);
      uStack_100 = (undefined1 **)
                   CONCAT44(uStack_100._4_4_,*(undefined4 *)(lVar22 + 8 + uVar40 * 0xc));
      FUN_1447cbafe(ppuVar26,&local_248,&local_108,0);
      FUN_1447cbafe(ppuVar26,&local_248,(longlong)&local_108 + 4,0);
      FUN_1447cbafe(ppuVar26,&local_248,&uStack_100,0);
      uVar35 = ~(uint)uVar38 & uVar35;
      ppuVar25 = (undefined1 **)param_1[0x1a1];
      if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
        ppuVar25 = local_260;
      }
      iVar9 = *(int *)(param_1 + 0x1a2);
      iVar34 = (int)uVar37;
      lVar22 = (longlong)iVar34;
      uVar33 = *(uint *)((longlong)ppuVar25 + lVar22 * 4) & uVar35;
      if (uVar33 == 0) {
        iVar30 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar30 = iVar9 + -1;
        }
        iVar30 = iVar30 >> 5;
        iVar39 = iVar39 + 0x20;
        iVar32 = iVar30;
        if (iVar30 < iVar34) {
          iVar32 = iVar34;
        }
        if (iVar34 < iVar30) {
          lVar36 = 0;
          do {
            uVar33 = *(uint *)((longlong)ppuVar25 + (lVar22 + lVar36 + 1) * 4);
            if (uVar33 != 0) {
              uVar37 = (ulonglong)(iVar34 + (int)lVar36 + 1);
              uVar35 = 0xffffffff;
              goto LAB_144564ecf;
            }
            iVar39 = iVar39 + 0x20;
            lVar36 = lVar36 + 1;
          } while (iVar32 - lVar22 != lVar36);
          uVar35 = 0xffffffff;
          lVar22 = (longlong)iVar32;
        }
        uVar37 = lVar22 + 1U & 0xffffffff;
        iVar34 = iVar9;
      }
      else {
LAB_144564ecf:
        uVar38 = (ulonglong)(-uVar33 & uVar33);
        uVar40 = uVar38 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar34) {
          iVar34 = iVar9;
        }
      }
    } while (iVar34 != iVar29);
  }
LAB_144564934:
  ppuVar25 = param_1 + 399;
  iVar29 = *(int *)(param_1 + 400);
  if ((longlong)iVar29 < 0) {
    *(undefined4 *)(param_1 + 400) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xc84) - iVar29) < (uint)-iVar29) {
      FUN_1446f48e2(ppuVar25);
    }
    memset(*ppuVar25 + (longlong)iVar29 * 4,0,(ulonglong)(uint)-iVar29 << 2);
  }
  else if (iVar29 != 0) {
    *(undefined4 *)(param_1 + 400) = 0;
  }
  local_e8 = (undefined **)0x0;
  uStack_e0 = 0;
  local_108 = (code *)0x0;
  uStack_100 = (undefined1 **)0x0;
  uStack_dc = 0x80;
  uStack_d8 = 0xffffffff;
  uStack_d4 = 0;
  local_c8 = 0;
  local_c0 = 0;
  FUN_145c3f772(&local_108,ppuVar26);
  FUN_14965a9d9(ppuVar25,&local_108);
  iVar29 = *(int *)(param_1 + 0x19e) - *(int *)((longlong)param_1 + 0xd1c);
  if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar29);
  }
  local_258 = param_1 + 0x1ea;
  if (*(int *)((longlong)param_1 + 0xf5c) < iVar29) {
    FUN_14481578e(local_258);
  }
  iVar29 = *(int *)(param_1 + 0x1eb);
  if ((longlong)iVar29 < 0) {
    *(undefined4 *)(param_1 + 0x1eb) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xf5c) - iVar29) < (uint)-iVar29) {
      FUN_1446f48e2(local_258);
    }
    memset(*local_258 + (longlong)iVar29 * 4,0,(ulonglong)(uint)-iVar29 << 2);
  }
  else if (iVar29 != 0) {
    *(undefined4 *)(param_1 + 0x1eb) = 0;
  }
  iVar29 = *(int *)(param_1 + 0x1a2);
  if (iVar29 == 0) {
    uVar38 = 1;
    uVar37 = 0;
    iVar39 = 0;
    iVar34 = 0;
  }
  else {
    ppuVar26 = (undefined1 **)param_1[0x1a1];
    if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
      ppuVar26 = local_260;
    }
    uVar35 = *(uint *)ppuVar26;
    if (uVar35 == 0) {
      iVar39 = iVar29 + 0x1e;
      if (-1 < iVar29 + -1) {
        iVar39 = iVar29 + -1;
      }
      uVar37 = 0;
      uVar40 = (ulonglong)(uint)(iVar39 >> 5);
      if (iVar39 >> 5 < 1) {
        uVar40 = uVar37;
      }
      iVar39 = 0;
      do {
        if (uVar40 == uVar37) goto LAB_144564a7b;
        iVar39 = iVar39 + 0x20;
        uVar35 = *(uint *)((longlong)ppuVar26 + (uVar37 + 1) * 4);
        uVar37 = uVar37 + 1;
      } while (uVar35 == 0);
    }
    else {
      uVar37 = 0;
      iVar39 = 0;
    }
    uVar38 = (ulonglong)(-uVar35 & uVar35);
    uVar40 = uVar38 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar29 <= iVar34) {
      iVar34 = iVar29;
    }
  }
  if (iVar34 != iVar29) {
    uVar35 = 0xffffffff;
    ppuVar26 = local_260;
    do {
      uVar20 = *(undefined4 *)(param_1[0x19d] + (longlong)iVar34 * 0xc);
      iVar34 = *(int *)(param_1 + 0x1eb);
      *(uint *)(param_1 + 0x1eb) = iVar34 + 1U;
      if (*(uint *)((longlong)param_1 + 0xf5c) < iVar34 + 1U) {
        FUN_1446f48e2(local_258,iVar34);
        ppuVar26 = local_260;
      }
      *(undefined4 *)(param_1[0x1ea] + (longlong)iVar34 * 4) = uVar20;
      uVar35 = uVar35 & ~(uint)uVar38;
      ppuVar25 = (undefined1 **)param_1[0x1a1];
      if ((undefined1 **)param_1[0x1a1] == (undefined1 **)0x0) {
        ppuVar25 = ppuVar26;
      }
      iVar9 = *(int *)(param_1 + 0x1a2);
      iVar34 = (int)uVar37;
      lVar22 = (longlong)iVar34;
      uVar33 = *(uint *)((longlong)ppuVar25 + lVar22 * 4) & uVar35;
      if (uVar33 == 0) {
        iVar30 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar30 = iVar9 + -1;
        }
        iVar30 = iVar30 >> 5;
        iVar39 = iVar39 + 0x20;
        iVar32 = iVar30;
        if (iVar30 < iVar34) {
          iVar32 = iVar34;
        }
        if (iVar34 < iVar30) {
          lVar36 = 0;
          do {
            uVar33 = *(uint *)((longlong)ppuVar25 + (lVar22 + lVar36 + 1) * 4);
            if (uVar33 != 0) {
              uVar37 = (ulonglong)(iVar34 + (int)lVar36 + 1);
              uVar35 = 0xffffffff;
              goto LAB_144564fde;
            }
            iVar39 = iVar39 + 0x20;
            lVar36 = lVar36 + 1;
          } while (iVar32 - lVar22 != lVar36);
          uVar35 = 0xffffffff;
          iVar34 = iVar32;
        }
        uVar37 = (ulonglong)(iVar34 + 1);
        ppuVar26 = local_260;
        iVar34 = iVar9;
      }
      else {
LAB_144564fde:
        uVar38 = (ulonglong)(-uVar33 & uVar33);
        uVar40 = uVar38 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar34 = (iVar39 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar9 <= iVar34) {
          iVar34 = iVar9;
        }
      }
    } while (iVar34 != iVar29);
  }
LAB_144564a7b:
  pppuVar3 = (undefined1 ***)(param_1 + 0x1ec);
  iVar29 = *(int *)(param_1 + 0x1eb);
  iVar39 = *(int *)(param_1 + 0x1ed);
  if (iVar39 < iVar29) {
    *(int *)(param_1 + 0x1ed) = iVar29;
    if ((uint)(*(int *)((longlong)param_1 + 0xf6c) - iVar39) < (uint)(iVar29 - iVar39)) {
      FUN_1446f48e2(pppuVar3);
    }
    memset((undefined1 *)((longlong)*pppuVar3 + (longlong)iVar39 * 4),0,
           (longlong)(iVar29 - iVar39) << 2);
  }
  else {
    if (iVar29 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar29);
    }
    if (iVar29 < iVar39) {
      *(int *)(param_1 + 0x1ed) = iVar29;
    }
  }
  local_148 = 0;
  local_138 = (longlong *)0x0;
  local_f8 = (undefined ***)0x0;
  local_e8 = &PTR_LAB_14bdacbe0;
  uStack_e0 = SUB84(param_1,0);
  uStack_dc = (uint)((ulonglong)param_1 >> 0x20);
  local_108 = FUN_14456d8d0;
  FUN_14170b918(&local_1f8);
  plVar21 = plStack_1f0;
  puVar10 = local_1f8;
  local_1e8 = (undefined1 **)CONCAT71(local_1e8._1_7_,1);
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_1f0 + 1) = (int)plStack_1f0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar23 = FUN_14118da1c();
      bVar18 = FUN_14054d46e(uVar23,L"nothreading");
      DAT_14c83f0f8 = bVar18 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    ppuVar26 = (undefined1 **)local_108;
    if (DAT_14c83f0f8 == 1) goto LAB_144564b53;
    pppuVar31 = local_f8;
    if (local_f8 == (undefined ***)0x0) {
      pppuVar31 = &local_e8;
    }
    uVar23 = (*(code *)(*pppuVar31)[1])();
    (*(code *)ppuVar26)(uVar23);
    *(undefined4 *)(local_1f8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144564b53:
    plVar28 = DAT_14c8442c0;
    puVar27 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar27[1] = 0;
    *puVar27 = TAsyncQueuedWork<void>::vftable;
    puVar27[2] = local_108;
    puVar27[4] = local_f8;
    local_f8 = (undefined ***)0x0;
    *(undefined4 *)(puVar27 + 8) = uStack_d8;
    *(undefined4 *)((longlong)puVar27 + 0x44) = uStack_d4;
    *(undefined4 *)(puVar27 + 9) = uStack_d0;
    *(undefined4 *)((longlong)puVar27 + 0x4c) = uStack_cc;
    puVar27[6] = local_e8;
    puVar27[7] = CONCAT44(uStack_dc,uStack_e0);
    if ((undefined1 **)local_108 != (undefined1 **)0x0) {
      local_108 = (code *)0x0;
    }
    puVar27[10] = local_1f8;
    puVar27[0xb] = plStack_1f0;
    local_1f8 = (undefined1 *)0x0;
    plStack_1f0 = (longlong *)0x0;
    *(undefined1 *)(puVar27 + 0xc) = 0;
    (**(code **)(*plVar28 + 0x18))(plVar28,puVar27,3);
  }
  plVar28 = plStack_1f0;
  if (plStack_1f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_1f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_1f0)(plStack_1f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar28 + 0x10))(plVar28);
      }
    }
  }
  if ((undefined1 **)local_108 != (undefined1 **)0x0) {
    pppuVar31 = &local_e8;
    if (local_f8 != (undefined ***)0x0) {
      pppuVar31 = local_f8;
    }
    (*(code *)(*pppuVar31)[2])(pppuVar31);
  }
  if (local_148 != 0) {
    plVar28 = local_138;
    if (local_138 == (longlong *)0x0) {
      plVar28 = alStack_128;
    }
    (**(code **)(*plVar28 + 0x10))();
  }
  puVar27 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  plVar28 = (longlong *)*puVar27;
  uVar23 = (**(code **)(*param_1 + 0x420))(param_1);
  local_268 = pppuVar3;
  (**(code **)(*plVar28 + 0x58))(plVar28,uVar23,param_1 + 0xd0,local_258);
  cVar17 = FUN_14965adfa(param_1,uVar23);
  memcpy(param_1 + 0x102,param_1 + 0xd0,0x150);
  FUN_14967e05c(param_1 + 300,param_1 + 0xfa);
  FUN_1402160b8(&local_108);
  param_1[0x124] = local_108;
  if (cVar17 != '\0') {
    FUN_143b6ee10(param_1[0x17c],local_250,2);
    plVar28 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar28 + 0x348))(plVar28);
  }
  if (puVar10 != (undefined1 *)0x0) {
    do {
      plVar28 = *(longlong **)(puVar10 + 0x70);
      cVar17 = (**(code **)(*plVar28 + 0x20))(plVar28,0xffffffff,0);
    } while (cVar17 == '\0');
  }
  if (plVar21 != (longlong *)0x0) {
    LOCK();
    plVar28 = plVar21 + 1;
    *(int *)plVar28 = (int)*plVar28 + -1;
    UNLOCK();
    if ((int)*plVar28 == 0) {
      (**(code **)*plVar21)(plVar21);
      LOCK();
      piVar2 = (int *)((longlong)plVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
  }
LAB_14456404c:
  if ((local_b0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144565490 FUN_144565490 body=55 status=ok
// SIG undefined FUN_144565490(void)

void FUN_144565490(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20e30 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20e30 = FUN_14171c317(FUN_146748034,uVar1,L"EMeshInspectorToolDrawIndexMode");
  }
  return;
}



// FUNCTION 1445654c7 FUN_1445654c7 body=55 status=ok
// SIG undefined FUN_1445654c7(void)

void FUN_1445654c7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20e60 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20e60 = FUN_14171c317(FUN_1467480f4,uVar1,L"EMeshInspectorMaterialMode");
  }
  return;
}



// FUNCTION 144565510 FUN_144565510 body=1386 status=ok
// SIG undefined FUN_144565510(void)

void FUN_144565510(longlong param_1,undefined4 param_2,double *param_3,undefined8 *param_4)

{
  double dVar1;
  longlong lVar2;
  undefined8 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  char cVar11;
  undefined4 uVar12;
  size_t sVar13;
  longlong *plVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  wchar_t **ppwVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  double *local_1f0;
  undefined4 *local_1e8;
  wchar_t *local_1d8 [2];
  wchar_t *local_1c8 [2];
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  int local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [28];
  undefined4 local_174;
  double local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  double local_128;
  undefined1 local_118 [16];
  double local_108;
  double local_f8;
  double local_f0;
  longlong local_e8;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined1 local_a8;
  ulonglong local_90;
  
  dVar10 = (double)CONCAT44(uStack_130._4_4_,(undefined4)uStack_130);
  dVar9 = (double)CONCAT44(local_138._4_4_,(undefined4)local_138);
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_218;
  lVar2 = *(longlong *)(param_1 + 0x20);
  dVar5 = *param_3;
  dVar18 = *(double *)(lVar2 + 0x200) * dVar5;
  dVar19 = *(double *)(lVar2 + 0x208) * param_3[1];
  dVar4 = param_3[2] * *(double *)(lVar2 + 0x210);
  dVar6 = *(double *)(lVar2 + 0x1c0);
  dVar7 = *(double *)(lVar2 + 0x1c8);
  dVar8 = *(double *)(lVar2 + 0x1d0);
  dVar1 = *(double *)(lVar2 + 0x1d8);
  dVar20 = dVar19 * dVar6 - dVar18 * dVar7;
  dVar21 = dVar4 * dVar7 - dVar19 * dVar8;
  dVar22 = dVar18 * dVar8 - dVar6 * dVar4;
  dVar21 = dVar21 + dVar21;
  dVar22 = dVar22 + dVar22;
  dVar20 = dVar20 + dVar20;
  local_138 = (dVar20 * dVar7 - dVar22 * dVar8) + dVar1 * dVar21 + dVar18 +
              *(double *)(lVar2 + 0x1e0);
  uStack_130 = (dVar8 * dVar21 - dVar6 * dVar20) + *(double *)(lVar2 + 0x1d8) * dVar22 + dVar19 +
               *(double *)(lVar2 + 0x1e8);
  local_108 = dVar20 * dVar1 + dVar4 + (dVar22 * dVar6 - dVar21 * dVar7) +
              *(double *)(lVar2 + 0x1f0);
  dVar1 = param_3[2];
  dVar4 = param_3[1];
  local_118._8_4_ = SUB84(uStack_130,0);
  local_118._0_8_ = local_138;
  local_118._12_4_ = (int)((ulonglong)uStack_130 >> 0x20);
  if (**(int **)(param_1 + 0x68) < *(int *)(param_1 + 0x70)) {
    puVar3 = *(undefined8 **)(param_1 + 0x78);
    local_128 = local_108;
    cVar11 = FUN_147cf049a(*puVar3,&local_138,&local_f8);
    dVar9 = local_138;
    dVar10 = uStack_130;
    if (cVar11 != '\0') {
      if (((((double)puVar3[1] <= local_f8) && ((double)puVar3[2] <= local_f0)) &&
          (local_f8 <= (double)puVar3[3])) && (local_f0 <= (double)puVar3[4])) {
        local_158 = *(double *)(param_1 + 0x38);
        local_168 = *(double *)(param_1 + 0x28);
        dStack_160 = *(double *)(param_1 + 0x30);
        dVar1 = dVar1 - *(double *)(param_1 + 0x38);
        dVar4 = dVar4 - *(double *)(param_1 + 0x30);
        dVar5 = dVar5 - *(double *)(param_1 + 0x28);
        dVar22 = SQRT(dVar1 * dVar1 + dVar5 * dVar5 + dVar4 * dVar4);
        local_148 = 1.0 / dVar22;
        local_150 = (double)(-(ulonglong)(0.0 < dVar22) & (ulonglong)(dVar5 * local_148));
        if (0.0 < dVar22) {
          local_140 = dVar1 * local_148;
          local_148 = dVar4 * local_148;
        }
        else {
          local_148 = 0.0;
          local_140 = 0.0;
        }
        if (0.0 <= local_140 * *(double *)(param_1 + 0x50) +
                   *(double *)(param_1 + 0x40) * local_150 + local_148 * *(double *)(param_1 + 0x48)
           ) {
          local_f8 = 1.79769313486232e+308;
          local_e8 = 0;
          local_d8 = (longlong *)0x0;
          local_a8 = 0;
          local_1f8 = local_190;
          local_1f0 = &local_f8;
          cVar11 = (**(code **)(**(longlong **)(param_1 + 8) + 0x30))
                             (*(longlong **)(param_1 + 8),&local_168,&local_170,&local_174);
          if (local_e8 != 0) {
            plVar14 = local_d8;
            if (local_d8 == (longlong *)0x0) {
              plVar14 = local_c8;
            }
            (**(code **)(*plVar14 + 0x10))();
          }
          if (cVar11 == '\0') {
            FUN_147cf049a(*(undefined8 *)(param_1 + 0x58),local_118,&local_f8);
            FUN_140002266(&local_1b8,&DAT_149e063bc,param_2);
            if (local_1b0 == 0) {
              local_1d8[0] = L"";
            }
            else {
              local_1d8[0] = (wchar_t *)CONCAT44(uStack_1b4,local_1b8);
            }
            puVar15 = *(undefined1 **)(param_1 + 0x18);
            uVar16 = *(undefined8 *)(param_1 + 0x60);
            uVar12 = 0;
            if (local_1d8[0] != (wchar_t *)0x0) {
              sVar13 = wcslen(local_1d8[0]);
              uVar12 = (int)sVar13;
            }
            ppwVar17 = local_1d8;
          }
          else {
            local_198 = local_140 * local_170 + local_158;
            local_1a0 = local_148 * local_170 + dStack_160;
            local_1a8 = local_150 * local_170 + local_168;
            local_f8 = local_170;
            local_1b8 = local_174;
            cVar11 = (*(code *)*param_4)(param_4[1]);
            dVar9 = local_138;
            dVar10 = uStack_130;
            if (cVar11 == '\0') goto LAB_14456567e;
            FUN_147cf049a(*(undefined8 *)(param_1 + 0x58),local_118,&local_f8);
            FUN_140002266(&local_1b8,&DAT_149e063bc,param_2);
            if (local_1b0 == 0) {
              local_1c8[0] = L"";
            }
            else {
              local_1c8[0] = (wchar_t *)CONCAT44(uStack_1b4,local_1b8);
            }
            puVar15 = *(undefined1 **)(param_1 + 0x18);
            uVar16 = *(undefined8 *)(param_1 + 0x60);
            uVar12 = 0;
            if (local_1c8[0] != (wchar_t *)0x0) {
              sVar13 = wcslen(local_1c8[0]);
              uVar12 = (int)sVar13;
            }
            ppwVar17 = local_1c8;
          }
          *(undefined4 *)(ppwVar17 + 1) = uVar12;
          local_1e8 = &DAT_149e1e308;
          local_1f0 = (double *)&DAT_149e1e2f8;
          local_1f8 = puVar15;
          FUN_147d8e230(uVar16,local_f8 / (double)*(float *)(param_1 + 0x10),
                        local_f0 / (double)*(float *)(param_1 + 0x10));
          **(int **)(param_1 + 0x68) = **(int **)(param_1 + 0x68) + 1;
          dVar9 = local_138;
          dVar10 = uStack_130;
          if (CONCAT44(uStack_1b4,local_1b8) != 0) {
            FUN_1400020a8();
            dVar9 = local_138;
            dVar10 = uStack_130;
          }
        }
      }
    }
  }
LAB_14456567e:
  if ((local_90 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
  local_138 = dVar9;
  uStack_130 = dVar10;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144565a7b FUN_144565a7b body=55 status=ok
// SIG undefined FUN_144565a7b(void)

void FUN_144565a7b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20f08 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20f08 = FUN_14171c317(FUN_1467482eb,uVar1,L"EMeshSelectionToolActions");
  }
  return;
}



// FUNCTION 144565ab2 FUN_144565ab2 body=55 status=ok
// SIG undefined FUN_144565ab2(void)

void FUN_144565ab2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc20ff0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc20ff0 = FUN_14171c317(FUN_1467487a4,uVar1,L"EMeshSelectionToolPrimaryMode");
  }
  return;
}



// FUNCTION 144565ae9 FUN_144565ae9 body=55 status=ok
// SIG undefined FUN_144565ae9(void)

void FUN_144565ae9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21008 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21008 = FUN_14171c317(FUN_1467487d3,uVar1,L"EMeshFacesColorMode");
  }
  return;
}



// FUNCTION 144565b20 FUN_144565b20 body=55 status=ok
// SIG undefined FUN_144565b20(void)

void FUN_144565b20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21068 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21068 = FUN_14171c317(FUN_1467488fe,uVar1,L"ENonlinearOperationType");
  }
  return;
}



// FUNCTION 144565b57 FUN_144565b57 body=55 status=ok
// SIG undefined FUN_144565b57(void)

void FUN_144565b57(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21080 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21080 = FUN_14171c317(FUN_14674892d,uVar1,L"EFlareProfileType");
  }
  return;
}



// FUNCTION 144565b8e FUN_144565b8e body=55 status=ok
// SIG undefined FUN_144565b8e(void)

void FUN_144565b8e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc210b0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc210b0 = FUN_14171c317(FUN_1467489f1,uVar1,L"EMeshSpaceDeformerToolAction");
  }
  return;
}



// FUNCTION 144565bc5 FUN_144565bc5 body=55 status=ok
// SIG undefined FUN_144565bc5(void)

void FUN_144565bc5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21130 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21130 = FUN_14171c317(FUN_146748bbe,uVar1,L"EMeshVertexPaintInteractionType");
  }
  return;
}



// FUNCTION 144565bfc FUN_144565bfc body=55 status=ok
// SIG undefined FUN_144565bfc(void)

void FUN_144565bfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21148 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21148 = FUN_14171c317(FUN_146748bed,uVar1,L"EMeshVertexPaintColorChannel");
  }
  return;
}



// FUNCTION 144565c33 FUN_144565c33 body=55 status=ok
// SIG undefined FUN_144565c33(void)

void FUN_144565c33(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21160 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21160 = FUN_14171c317(FUN_146748c1c,uVar1,L"EMeshVertexPaintColorBlendMode");
  }
  return;
}



// FUNCTION 144565c6a FUN_144565c6a body=55 status=ok
// SIG undefined FUN_144565c6a(void)

void FUN_144565c6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21178 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21178 = FUN_14171c317(FUN_146748c4b,uVar1,L"EMeshVertexPaintBrushType");
  }
  return;
}



// FUNCTION 144565ca1 FUN_144565ca1 body=55 status=ok
// SIG undefined FUN_144565ca1(void)

void FUN_144565ca1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21190 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21190 = FUN_14171c317(FUN_146748c7a,uVar1,L"EMeshVertexPaintSecondaryActionType");
  }
  return;
}



// FUNCTION 144565cd8 FUN_144565cd8 body=55 status=ok
// SIG undefined FUN_144565cd8(void)

void FUN_144565cd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc211a8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc211a8 = FUN_14171c317(FUN_146748ca9,uVar1,L"EMeshVertexPaintBrushAreaType");
  }
  return;
}



// FUNCTION 144565d0f FUN_144565d0f body=55 status=ok
// SIG undefined FUN_144565d0f(void)

void FUN_144565d0f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc211c0 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc211c0 = FUN_14171c317(FUN_146748cd8,uVar1,L"EMeshVertexPaintVisibilityType");
  }
  return;
}



// FUNCTION 144565d46 FUN_144565d46 body=55 status=ok
// SIG undefined FUN_144565d46(void)

void FUN_144565d46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc211d8 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc211d8 = FUN_14171c317(FUN_146748d07,uVar1,L"EMeshVertexPaintMaterialMode");
  }
  return;
}



// FUNCTION 144565d7d FUN_144565d7d body=55 status=ok
// SIG undefined FUN_144565d7d(void)

void FUN_144565d7d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21220 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21220 = FUN_14171c317(FUN_146748e58,uVar1,L"EMeshVertexPaintToolActions");
  }
  return;
}



// FUNCTION 144565db4 FUN_144565db4 body=55 status=ok
// SIG undefined FUN_144565db4(void)

void FUN_144565db4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21288 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21288 = FUN_14171c317(FUN_146749027,uVar1,L"EMeshVertexPaintToolUtilityOperations");
  }
  return;
}



// FUNCTION 144565dfc FUN_144565dfc body=6299 status=ok
// SIG undefined FUN_144565dfc(void)

void FUN_144565dfc(longlong *param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  code **ppcVar15;
  undefined1 *puVar16;
  char cVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  uint *puVar25;
  undefined8 *puVar26;
  longlong lVar27;
  int iVar28;
  int iVar29;
  undefined **ppuVar30;
  code *pcVar31;
  undefined ***pppuVar32;
  longlong *plVar33;
  int iVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  undefined8 unaff_RBX;
  uint *puVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  int iVar41;
  bool bVar42;
  double dVar43;
  double dVar44;
  undefined1 auStack_2b8 [32];
  code **local_298;
  longlong *local_290;
  longlong *local_288;
  longlong *local_280;
  uint *local_270;
  longlong *local_268;
  longlong *local_260;
  undefined8 *local_258;
  longlong *local_250;
  code *local_248;
  undefined8 **local_240;
  code *local_238;
  undefined8 uStack_230;
  code *local_228;
  undefined8 *local_220;
  code *local_218;
  undefined8 *puStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  longlong *local_1f8;
  double *local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  undefined1 local_1ca;
  undefined1 local_1c9;
  double local_1c8;
  undefined1 local_1b9;
  uint local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  double local_1a8;
  uint local_19c;
  double local_198;
  double local_190;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  float local_164;
  longlong local_160;
  longlong local_158;
  longlong *local_148;
  longlong alStack_138 [4];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined ***local_108;
  longlong *local_100;
  undefined **local_f8;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined1 local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1496b3d26();
  lVar22 = param_1[0x180];
  if (*(char *)(lVar22 + 0x130) == '\x01') {
    FUN_1484de806(lVar22);
    *(undefined1 *)(lVar22 + 0x130) = 0;
  }
  bVar42 = *(char *)(param_1[0x176] + 0xa9) == '\x04';
  FUN_1484fe310(param_1[0x17d],bVar42);
  (**(code **)(*param_1 + 0x5f0))(param_1,*(char *)(param_1[0x177] + 0xa8) == '\x01');
  (**(code **)(*param_1 + 0x600))
            (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),!bVar42) & 0xffffffff);
  if ((char)param_1[0x17c] == '\x01') {
    (**(code **)(*param_1 + 0x658))(param_1,*(undefined4 *)((longlong)param_1 + 0xbe4));
    *(undefined1 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)((longlong)param_1 + 0xbe4) = 0;
  }
  if ((char)param_1[0x192] == '\x01') {
    *(undefined1 *)(param_1 + 0x192) = 0;
    FUN_143b6ee10(param_1[0x17f],param_1 + 0x188,2);
    plVar21 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar21 + 0x348))(plVar21);
    *(undefined1 *)(param_1 + 0x192) = 0;
    goto LAB_14456603e;
  }
  if (((char)param_1[0x210] != '\0') || (*(char *)((longlong)param_1 + 0x1081) == '\x01')) {
    uVar37 = *(uint *)(param_1 + 0x8a);
    if (((-1 < (int)uVar37) &&
        (((cVar17 = (**(code **)(*param_1 + 0x550))(param_1), cVar17 == '\0' &&
          (lVar22 = (**(code **)(*param_1 + 0x420))(param_1),
          (int)uVar37 < *(int *)(lVar22 + 0x140) * 0x200 + *(int *)(lVar22 + 0x144))) &&
         ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar22 + 0x148) + (ulonglong)(uVar37 >> 9) * 8) +
                             (ulonglong)(uVar37 & 0x1ff) * 2) - 1U) < 0xfffe)))) &&
       (((char)param_1[0x210] != '\0' || (*(char *)((longlong)param_1 + 0x1081) == '\x01')))) {
      lVar22 = (**(code **)(*param_1 + 0x420))(param_1);
      if ((*(longlong *)(lVar22 + 0x208) != 0) &&
         ((lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x208) + 0x40), lVar22 != 0 &&
          (uVar24 = (ulonglong)uVar37 * 3,
          -1 < *(int *)(*(longlong *)(*(longlong *)(lVar22 + 0x78) + (uVar24 >> 9) * 8) +
                       (ulonglong)((uint)uVar24 & 0x1ff) * 4))))) {
        local_118 = (code *)0x0;
        uStack_110 = (longlong *)0x3f80000000000000;
        local_208 = (undefined1 *)
                    CONCAT44(DAT_14c846350._4_4_ * 0.33333334,(float)DAT_14c846350 * 0.33333334);
        uStack_200 = (uint *)CONCAT44(uStack_200._4_4_,DAT_14c846358 * 0.33333334);
        FUN_14967443c(lVar22,(ulonglong)uVar37,&local_208,&local_118);
        lVar22 = param_1[0x176];
        if (*(char *)((longlong)param_1 + 0x1081) == '\x01') {
          *(undefined4 *)(lVar22 + 0xc0) = (undefined4)local_118;
          *(undefined4 *)(lVar22 + 0xc4) = local_118._4_4_;
          *(int *)(lVar22 + 200) = (int)uStack_110;
          lVar27 = 0xcc;
        }
        else {
          *(undefined4 *)(lVar22 + 0xac) = (undefined4)local_118;
          *(undefined4 *)(lVar22 + 0xb0) = local_118._4_4_;
          *(int *)(lVar22 + 0xb4) = (int)uStack_110;
          lVar27 = 0xb8;
        }
        *(uint *)(lVar22 + lVar27) = uStack_110._4_4_;
        (**(code **)(*param_1 + 0x330))(param_1,param_1[0x176]);
      }
    }
    *(undefined2 *)(param_1 + 0x210) = 0;
  }
  if ((3 < *(byte *)(param_1[0x176] + 0xa9)) ||
     (cVar17 = (**(code **)(*param_1 + 0x518))(param_1), cVar17 == '\0')) goto LAB_14456603e;
  uVar23 = (**(code **)(*param_1 + 0x558))(param_1);
  cVar17 = FUN_149672db8(param_1,uVar23);
  if (cVar17 == '\0') goto LAB_14456603e;
  (**(code **)(*param_1 + 0x530))(param_1);
  cVar17 = (**(code **)(*param_1 + 0x550))(param_1);
  if (cVar17 == '\0') goto LAB_14456603e;
  plVar21 = param_1 + 0xd7;
  lVar22 = (**(code **)(*param_1 + 0x420))(param_1);
  local_160 = lVar22;
  dVar8 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar7 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar13 = DAT_14c846520;
  local_164 = (float)(dVar7 * dVar8);
  dVar9 = (double)CONCAT44(DAT_14c846510._4_4_,(uint)DAT_14c846510);
  dVar11 = (double)CONCAT44(DAT_14c846518._4_4_,(uint)DAT_14c846518);
  dVar43 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  dVar14 = DAT_14c846520;
  dVar7 = (double)param_1[0xd9];
  dVar8 = (double)param_1[0xd8];
  dVar4 = (double)param_1[0xd7];
  dVar10 = (double)CONCAT44(DAT_14c846510._4_4_,(uint)DAT_14c846510);
  dVar12 = (double)CONCAT44(DAT_14c846518._4_4_,(uint)DAT_14c846518);
  dVar44 = (double)(**(code **)(*param_1 + 0x478))(param_1);
  local_188 = (double)param_1[0xd9] - dVar14 * dVar44;
  local_198 = (double)param_1[0xd7] - dVar10 * dVar44;
  local_190 = (double)param_1[0xd8] - dVar12 * dVar44;
  local_268 = param_1 + 0x1a5;
  local_180 = dVar9 * dVar43 + dVar4;
  local_178 = dVar11 * dVar43 + dVar8;
  local_170 = dVar13 * dVar43 + dVar7;
  FUN_1402226aa();
  local_19c = *(uint *)(param_1 + 0x8a);
  uVar24 = (ulonglong)local_19c;
  if (0.0 < *(float *)(param_1[0x20] + 0xd4)) {
    local_118 = (code *)0x7fefffffffffffff;
    local_108 = (undefined ***)0x0;
    local_f8 = (undefined **)0x0;
    local_c8 = 0;
    uVar24 = FUN_146bdde3a(param_1 + 0x1f6,plVar21,&local_208,&local_118);
    local_19c = (uint)uVar24;
    lVar22 = local_160;
    if (local_108 != (undefined ***)0x0) {
      ppuVar30 = local_f8;
      if (local_f8 == (undefined **)0x0) {
        ppuVar30 = (undefined **)&uStack_e8;
      }
      (**(code **)(*ppuVar30 + 0x10))();
      uVar24 = (ulonglong)local_19c;
      lVar22 = local_160;
    }
  }
  uVar37 = (uint)uVar24;
  if ((int)uVar37 < 0) {
LAB_144566431:
    local_1a8 = DAT_14c846520;
    local_1b8 = (uint)DAT_14c846510;
    uStack_1b4 = DAT_14c846510._4_4_;
    uStack_1b0 = (uint)DAT_14c846518;
    uStack_1ac = DAT_14c846518._4_4_;
  }
  else {
    iVar28 = *(int *)(lVar22 + 0x140) * 0x200 + *(int *)(lVar22 + 0x144);
    if (((int)uVar37 < iVar28) &&
       ((ushort)(*(short *)(*(longlong *)
                             (*(longlong *)(lVar22 + 0x148) + (uVar24 >> 9 & 0x7fffff) * 8) +
                           (ulonglong)(uVar37 & 0x1ff) * 2) - 1U) < 0xfffe)) {
      FUN_1447cbafe(local_268,&local_118,&local_19c,0);
      if ((int)local_19c < 0) goto LAB_144566431;
      iVar28 = *(int *)(local_160 + 0x140) * 0x200 + *(int *)(local_160 + 0x144);
      lVar22 = local_160;
      uVar37 = local_19c;
    }
    if ((iVar28 <= (int)uVar37) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      (*(longlong *)(lVar22 + 0x148) + (ulonglong)(uVar37 >> 9) * 8)
                                    + (ulonglong)(uVar37 & 0x1ff) * 2) - 1U))) goto LAB_144566431;
    local_1a8 = *(double *)(param_1[0x222] + 0x10 + (ulonglong)uVar37 * 0x18);
    puVar25 = (uint *)(param_1[0x222] + (ulonglong)uVar37 * 0x18);
    local_1b8 = *puVar25;
    uStack_1b4 = puVar25[1];
    uStack_1b0 = puVar25[2];
    uStack_1ac = puVar25[3];
  }
  cVar17 = *(char *)(param_1[0x177] + 0xa8);
  fVar3 = *(float *)(param_1[0x177] + 0xac);
  local_1b9 = fVar3 < 180.0 && cVar17 != '\x01';
  local_1c8 = cos((double)fVar3 * 0.017453292519943295);
  local_1f0 = &local_1c8;
  local_1c9 = *(undefined1 *)(param_1[0x177] + 0xb0);
  local_1e0 = &local_1c9;
  local_1ca = *(undefined1 *)(param_1[0x177] + 0xb1);
  local_1d8 = &local_1ca;
  uStack_200 = &local_1b8;
  cVar5 = *(char *)(param_1[0x176] + 0xa9);
  local_208 = &local_1b9;
  local_1f8 = param_1;
  local_1e8 = (code *)&local_160;
  if (cVar17 == '\x01') {
    puStack_210 = &local_118;
    local_108 = (undefined ***)&local_164;
    local_218 = FUN_144570168;
    local_118 = (code *)&local_160;
    uStack_110 = plVar21;
    local_100 = param_1;
    FUN_146c8845c(param_1 + 0x1b4);
  }
  else if (((-1 < (int)local_19c) &&
           ((int)local_19c < *(int *)(local_160 + 0x140) * 0x200 + *(int *)(local_160 + 0x144))) &&
          ((ushort)(*(short *)(*(longlong *)
                                (*(longlong *)(local_160 + 0x148) + (ulonglong)(local_19c >> 9) * 8)
                              + (ulonglong)(local_19c & 0x1ff) * 2) - 1U) < 0xfffe)) {
    local_218 = (code *)0x0;
    puStack_210 = (undefined8 *)&DAT_00000001;
    FUN_1446f48e2(&local_218,0);
    *(uint *)local_218 = local_19c;
    local_220 = &local_118;
    local_108 = (undefined ***)&local_164;
    local_100 = &local_208;
    local_298 = &local_228;
    local_228 = FUN_144570220;
    local_118 = (code *)&local_160;
    uStack_110 = plVar21;
    FUN_146c81f86(local_160,&local_218,local_268,param_1 + 0x195);
    if (local_218 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  if (cVar5 == '\x03') {
    local_238 = (code *)0x0;
    uStack_230 = (code **)0x0;
    uVar40 = 0;
    local_f8 = (undefined **)0x0;
    uStack_f0 = 0;
    local_118 = (code *)0x0;
    uStack_110 = (longlong *)0x0;
    uStack_ec = 0x80;
    uStack_e8 = 0xffffffff;
    uStack_e4 = 0;
    local_d8 = 0;
    local_d0 = 0;
    local_270 = (uint *)(param_1 + 0x1a7);
    iVar28 = (int)param_1[0x1aa];
    uVar24 = 1;
    iVar36 = 0;
    iVar41 = 0;
    if (iVar28 != 0) {
      puVar25 = (uint *)param_1[0x1a9];
      if ((uint *)param_1[0x1a9] == (uint *)0x0) {
        puVar25 = local_270;
      }
      uVar37 = *puVar25;
      if (uVar37 == 0) {
        iVar41 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar41 = iVar28 + -1;
        }
        uVar40 = 0;
        uVar24 = (ulonglong)(uint)(iVar41 >> 5);
        if (iVar41 >> 5 < 1) {
          uVar24 = uVar40;
        }
        iVar36 = 0;
        do {
          if (uVar24 == uVar40) goto LAB_1445667dd;
          iVar36 = iVar36 + 0x20;
          uVar37 = puVar25[uVar40 + 1];
          uVar40 = uVar40 + 1;
        } while (uVar37 == 0);
      }
      else {
        uVar40 = 0;
        iVar36 = 0;
      }
      uVar24 = (ulonglong)(-uVar37 & uVar37);
      uVar39 = uVar24 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar39 != 0) {
        for (; uVar39 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar41 = (iVar36 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar41) {
        iVar41 = iVar28;
      }
    }
    if (iVar41 != iVar28) {
      uVar37 = 0xffffffff;
      do {
        ppcVar15 = uStack_230;
        uVar35 = *(uint *)(*local_268 + (longlong)iVar41 * 0xc);
        lVar22 = (longlong)(int)uStack_230;
        uVar19 = (int)uStack_230 + 1;
        uStack_230 = (code **)CONCAT44(uStack_230._4_4_,uVar19);
        if (uStack_230._4_4_ < uVar19) {
          FUN_1446f48e2(&local_238,(ulonglong)ppcVar15 & 0xffffffff);
        }
        *(uint *)(local_238 + lVar22 * 4) = uVar35;
        lVar22 = ((undefined8 *)param_1[0x187])[1];
        if (lVar22 == 0) {
          uVar20 = FUN_146bc96d4(*(undefined8 *)param_1[0x187],uVar35);
        }
        else {
          uVar20 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar22 + 0x20) + (ulonglong)(uVar35 >> 9) * 8) +
                    (ulonglong)(uVar35 & 0x1ff) * 4);
        }
        local_248 = (code *)CONCAT44(local_248._4_4_,uVar20);
        FUN_144984904(&local_118,&local_258,&local_248,0);
        uVar37 = uVar37 & ~(uint)uVar24;
        puVar25 = (uint *)param_1[0x1a9];
        if ((uint *)param_1[0x1a9] == (uint *)0x0) {
          puVar25 = local_270;
        }
        iVar6 = (int)param_1[0x1aa];
        iVar41 = (int)uVar40;
        lVar22 = (longlong)iVar41;
        uVar35 = puVar25[lVar22] & uVar37;
        if (uVar35 == 0) {
          iVar29 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar29 = iVar6 + -1;
          }
          iVar29 = iVar29 >> 5;
          iVar36 = iVar36 + 0x20;
          iVar34 = iVar29;
          if (iVar29 < iVar41) {
            iVar34 = iVar41;
          }
          if (iVar41 < iVar29) {
            lVar27 = 0;
            do {
              uVar35 = puVar25[lVar22 + lVar27 + 1];
              if (uVar35 != 0) {
                uVar40 = (ulonglong)(iVar41 + (int)lVar27 + 1);
                uVar37 = 0xffffffff;
                goto LAB_1445674e6;
              }
              iVar36 = iVar36 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar34 - lVar22 != lVar27);
            uVar37 = 0xffffffff;
            iVar41 = iVar34;
          }
          uVar40 = (ulonglong)(iVar41 + 1);
          iVar41 = iVar6;
        }
        else {
LAB_1445674e6:
          uVar24 = (ulonglong)(-uVar35 & uVar35);
          uVar39 = uVar24 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar39 != 0) {
            for (; uVar39 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar41 = (iVar36 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar41) {
            iVar41 = iVar6;
          }
        }
      } while (iVar41 != iVar28);
    }
LAB_1445667dd:
    local_258 = &local_118;
    local_240 = &local_258;
    local_298 = &local_248;
    local_248 = FUN_1445703fe;
    local_250 = param_1;
    FUN_146c81f86(local_160,&local_238,local_268,param_1 + 0x195);
    local_d0 = 0;
    if (local_d8 != 0) {
      FUN_1400020a8();
    }
    uVar24 = (ulonglong)uStack_110 >> 0x20;
    uStack_110 = (longlong *)((ulonglong)uStack_110 & 0xffffffff00000000);
    if ((int)uVar24 != 0) {
      FUN_1447a08a2(&local_118);
    }
    uStack_e8 = 0xffffffff;
    uStack_e4 = 0;
    uStack_f0 = 0;
    if (0x80 < uStack_ec) {
      uStack_ec = 0x80;
      FUN_1446efbd8();
    }
    if (local_f8 != (undefined **)0x0) {
      FUN_1400020a8();
    }
    pcVar31 = local_238;
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
      pcVar31 = local_238;
    }
LAB_144566985:
    if (pcVar31 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (cVar5 == '\x02') {
    local_270 = (uint *)(param_1 + 0x1a7);
    local_118 = (code *)0x0;
    uStack_110 = (longlong *)0x0;
    iVar28 = (int)param_1[0x1aa];
    if (iVar28 == 0) {
      uVar39 = 1;
      iVar41 = 0;
      uVar24 = 0;
      iVar36 = 0;
    }
    else {
      puVar25 = (uint *)param_1[0x1a9];
      if ((uint *)param_1[0x1a9] == (uint *)0x0) {
        puVar25 = local_270;
      }
      uVar37 = *puVar25;
      if (uVar37 == 0) {
        iVar41 = iVar28 + 0x1e;
        if (-1 < iVar28 + -1) {
          iVar41 = iVar28 + -1;
        }
        uVar24 = 0;
        uVar40 = (ulonglong)(uint)(iVar41 >> 5);
        if (iVar41 >> 5 < 1) {
          uVar40 = uVar24;
        }
        iVar41 = 0;
        do {
          if (uVar40 == uVar24) goto LAB_144566933;
          iVar41 = iVar41 + 0x20;
          uVar37 = puVar25[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar37 == 0);
      }
      else {
        iVar41 = 0;
        uVar24 = 0;
      }
      uVar39 = (ulonglong)(-uVar37 & uVar37);
      uVar40 = uVar39 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar40 != 0) {
        for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      if (iVar28 <= iVar36) {
        iVar36 = iVar28;
      }
    }
    if (iVar36 != iVar28) {
      uVar37 = 0xffffffff;
      do {
        plVar21 = uStack_110;
        uVar20 = *(undefined4 *)(*local_268 + (longlong)iVar36 * 0xc);
        lVar22 = (longlong)(int)uStack_110;
        uVar35 = (int)uStack_110 + 1;
        uStack_110 = (longlong *)CONCAT44(uStack_110._4_4_,uVar35);
        if (uStack_110._4_4_ < uVar35) {
          FUN_1446f48e2(&local_118,(ulonglong)plVar21 & 0xffffffff);
        }
        *(undefined4 *)(local_118 + lVar22 * 4) = uVar20;
        uVar37 = uVar37 & ~(uint)uVar39;
        puVar25 = (uint *)param_1[0x1a9];
        if ((uint *)param_1[0x1a9] == (uint *)0x0) {
          puVar25 = local_270;
        }
        iVar6 = (int)param_1[0x1aa];
        iVar36 = (int)uVar24;
        lVar22 = (longlong)iVar36;
        uVar35 = puVar25[lVar22] & uVar37;
        if (uVar35 == 0) {
          iVar29 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar29 = iVar6 + -1;
          }
          iVar29 = iVar29 >> 5;
          iVar41 = iVar41 + 0x20;
          iVar34 = iVar29;
          if (iVar29 < iVar36) {
            iVar34 = iVar36;
          }
          if (iVar36 < iVar29) {
            lVar27 = 0;
            do {
              uVar35 = puVar25[lVar22 + lVar27 + 1];
              if (uVar35 != 0) {
                uVar24 = (ulonglong)(iVar36 + (int)lVar27 + 1);
                uVar37 = 0xffffffff;
                goto LAB_144567391;
              }
              iVar41 = iVar41 + 0x20;
              lVar27 = lVar27 + 1;
            } while (iVar34 - lVar22 != lVar27);
            uVar37 = 0xffffffff;
            iVar36 = iVar34;
          }
          uVar24 = (ulonglong)(iVar36 + 1);
          iVar36 = iVar6;
        }
        else {
LAB_144567391:
          uVar39 = (ulonglong)(-uVar35 & uVar35);
          uVar40 = uVar39 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar40 != 0) {
            for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar36) {
            iVar36 = iVar6;
          }
        }
      } while (iVar36 != iVar28);
    }
LAB_144566933:
    local_248 = (code *)&local_208;
    uStack_230 = &local_248;
    local_298 = &local_238;
    local_238 = FUN_144570358;
    FUN_146c81f86(local_160,&local_118,local_268,param_1 + 0x195);
    pcVar31 = local_118;
    goto LAB_144566985;
  }
  if (*(char *)(param_1[0x177] + 0xb2) != '\0') {
    local_118 = (code *)0x0;
    uStack_110 = (longlong *)0x0;
    FUN_149672bc8(param_1,local_268,param_1 + 0x195,&local_118);
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  plVar21 = param_1 + 0x19b;
  FUN_1402226aa(plVar21);
  local_270 = (uint *)(param_1 + 0x1a7);
  iVar28 = (int)param_1[0x1aa];
  if (iVar28 == 0) {
    uVar39 = 1;
    uVar24 = 0;
    iVar41 = 0;
    iVar36 = 0;
  }
  else {
    puVar25 = (uint *)param_1[0x1a9];
    if ((uint *)param_1[0x1a9] == (uint *)0x0) {
      puVar25 = local_270;
    }
    uVar37 = *puVar25;
    if (uVar37 == 0) {
      iVar41 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar41 = iVar28 + -1;
      }
      uVar24 = 0;
      uVar40 = (ulonglong)(uint)(iVar41 >> 5);
      if (iVar41 >> 5 < 1) {
        uVar40 = uVar24;
      }
      iVar41 = 0;
      do {
        if (uVar40 == uVar24) goto LAB_144566a7c;
        iVar41 = iVar41 + 0x20;
        uVar37 = puVar25[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar24 = 0;
      iVar41 = 0;
    }
    uVar39 = (ulonglong)(-uVar37 & uVar37);
    uVar40 = uVar39 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar28 <= iVar36) {
      iVar36 = iVar28;
    }
  }
  if (iVar36 != iVar28) {
    uVar37 = 0xffffffff;
    do {
      uVar35 = *(uint *)(param_1[0x1a5] + (longlong)iVar36 * 0xc);
      lVar22 = *(longlong *)(*(longlong *)(local_160 + 0x130) + (ulonglong)(uVar35 >> 9) * 8);
      uVar40 = (ulonglong)(uVar35 & 0x1ff);
      local_118 = *(code **)(lVar22 + uVar40 * 0xc);
      uStack_110 = (longlong *)CONCAT44(uStack_110._4_4_,*(undefined4 *)(lVar22 + 8 + uVar40 * 0xc))
      ;
      FUN_1447cbafe(plVar21,&local_258,&local_118,0);
      FUN_1447cbafe(plVar21,&local_258,(longlong)&local_118 + 4,0);
      FUN_1447cbafe(plVar21,&local_258,&uStack_110,0);
      uVar37 = ~(uint)uVar39 & uVar37;
      puVar25 = (uint *)param_1[0x1a9];
      if ((uint *)param_1[0x1a9] == (uint *)0x0) {
        puVar25 = local_270;
      }
      iVar6 = (int)param_1[0x1aa];
      iVar36 = (int)uVar24;
      lVar22 = (longlong)iVar36;
      uVar35 = puVar25[lVar22] & uVar37;
      if (uVar35 == 0) {
        iVar29 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar29 = iVar6 + -1;
        }
        iVar29 = iVar29 >> 5;
        iVar41 = iVar41 + 0x20;
        iVar34 = iVar29;
        if (iVar29 < iVar36) {
          iVar34 = iVar36;
        }
        if (iVar36 < iVar29) {
          lVar27 = 0;
          do {
            uVar35 = puVar25[lVar22 + lVar27 + 1];
            if (uVar35 != 0) {
              uVar24 = (ulonglong)(iVar36 + (int)lVar27 + 1);
              uVar37 = 0xffffffff;
              goto LAB_144567174;
            }
            iVar41 = iVar41 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar34 - lVar22 != lVar27);
          uVar37 = 0xffffffff;
          lVar22 = (longlong)iVar34;
        }
        uVar24 = lVar22 + 1U & 0xffffffff;
        iVar36 = iVar6;
      }
      else {
LAB_144567174:
        uVar39 = (ulonglong)(-uVar35 & uVar35);
        uVar40 = uVar39 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar36) {
          iVar36 = iVar6;
        }
      }
    } while (iVar36 != iVar28);
  }
LAB_144566a7c:
  plVar33 = param_1 + 0x197;
  iVar28 = (int)param_1[0x198];
  if ((longlong)iVar28 < 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0xcc4) - iVar28) < (uint)-iVar28) {
      FUN_1446f48e2(plVar33);
    }
    memset((void *)((longlong)iVar28 * 4 + *plVar33),0,(ulonglong)(uint)-iVar28 << 2);
  }
  else if (iVar28 != 0) {
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  local_f8 = (undefined **)0x0;
  uStack_f0 = 0;
  local_118 = (code *)0x0;
  uStack_110 = (longlong *)0x0;
  uStack_ec = 0x80;
  uStack_e8 = 0xffffffff;
  uStack_e4 = 0;
  local_d8 = 0;
  local_d0 = 0;
  FUN_145c3f772(&local_118,plVar21);
  FUN_14965a9d9(plVar33,&local_118);
  iVar28 = (int)param_1[0x1a6] - *(int *)((longlong)param_1 + 0xd5c);
  if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar28);
  }
  local_260 = param_1 + 0x211;
  if (*(int *)((longlong)param_1 + 0x1094) < iVar28) {
    FUN_14481578e(local_260);
  }
  iVar28 = (int)param_1[0x212];
  if ((longlong)iVar28 < 0) {
    *(undefined4 *)(param_1 + 0x212) = 0;
    if ((uint)(*(int *)((longlong)param_1 + 0x1094) - iVar28) < (uint)-iVar28) {
      FUN_1446f48e2(local_260);
    }
    memset((void *)((longlong)iVar28 * 4 + *local_260),0,(ulonglong)(uint)-iVar28 << 2);
  }
  else if (iVar28 != 0) {
    *(undefined4 *)(param_1 + 0x212) = 0;
  }
  iVar28 = (int)param_1[0x1aa];
  if (iVar28 == 0) {
    uVar39 = 1;
    uVar24 = 0;
    iVar41 = 0;
    iVar36 = 0;
  }
  else {
    puVar25 = (uint *)param_1[0x1a9];
    if ((uint *)param_1[0x1a9] == (uint *)0x0) {
      puVar25 = local_270;
    }
    uVar37 = *puVar25;
    if (uVar37 == 0) {
      iVar41 = iVar28 + 0x1e;
      if (-1 < iVar28 + -1) {
        iVar41 = iVar28 + -1;
      }
      uVar24 = 0;
      uVar40 = (ulonglong)(uint)(iVar41 >> 5);
      if (iVar41 >> 5 < 1) {
        uVar40 = uVar24;
      }
      iVar41 = 0;
      do {
        if (uVar40 == uVar24) goto LAB_144566bc3;
        iVar41 = iVar41 + 0x20;
        uVar37 = puVar25[uVar24 + 1];
        uVar24 = uVar24 + 1;
      } while (uVar37 == 0);
    }
    else {
      uVar24 = 0;
      iVar41 = 0;
    }
    uVar39 = (ulonglong)(-uVar37 & uVar37);
    uVar40 = uVar39 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar40 != 0) {
      for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar28 <= iVar36) {
      iVar36 = iVar28;
    }
  }
  if (iVar36 != iVar28) {
    uVar37 = 0xffffffff;
    puVar25 = local_270;
    do {
      uVar20 = *(undefined4 *)(param_1[0x1a5] + (longlong)iVar36 * 0xc);
      iVar36 = (int)param_1[0x212];
      *(uint *)(param_1 + 0x212) = iVar36 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1094) < iVar36 + 1U) {
        FUN_1446f48e2(local_260,iVar36);
        puVar25 = local_270;
      }
      *(undefined4 *)(param_1[0x211] + (longlong)iVar36 * 4) = uVar20;
      uVar37 = uVar37 & ~(uint)uVar39;
      puVar38 = (uint *)param_1[0x1a9];
      if ((uint *)param_1[0x1a9] == (uint *)0x0) {
        puVar38 = puVar25;
      }
      iVar6 = (int)param_1[0x1aa];
      iVar36 = (int)uVar24;
      lVar22 = (longlong)iVar36;
      uVar35 = puVar38[lVar22] & uVar37;
      if (uVar35 == 0) {
        iVar29 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar29 = iVar6 + -1;
        }
        iVar29 = iVar29 >> 5;
        iVar41 = iVar41 + 0x20;
        iVar34 = iVar29;
        if (iVar29 < iVar36) {
          iVar34 = iVar36;
        }
        if (iVar36 < iVar29) {
          lVar27 = 0;
          do {
            uVar35 = puVar38[lVar27 + lVar22 + 1];
            if (uVar35 != 0) {
              uVar24 = (ulonglong)(iVar36 + (int)lVar27 + 1);
              uVar37 = 0xffffffff;
              goto LAB_144567283;
            }
            iVar41 = iVar41 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar34 - lVar22 != lVar27);
          uVar37 = 0xffffffff;
          iVar36 = iVar34;
        }
        uVar24 = (ulonglong)(iVar36 + 1);
        puVar25 = local_270;
        iVar36 = iVar6;
      }
      else {
LAB_144567283:
        uVar39 = (ulonglong)(-uVar35 & uVar35);
        uVar40 = uVar39 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar40 != 0) {
          for (; uVar40 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar36 = (iVar41 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
        if (iVar6 <= iVar36) {
          iVar36 = iVar6;
        }
      }
    } while (iVar36 != iVar28);
  }
LAB_144566bc3:
  local_158 = 0;
  local_148 = (longlong *)0x0;
  local_108 = (undefined ***)0x0;
  local_f8 = &PTR_LAB_14bdad9b0;
  uStack_f0 = SUB84(param_1,0);
  uStack_ec = (uint)((ulonglong)param_1 >> 0x20);
  local_118 = FUN_144570a16;
  FUN_14170b918(&local_208);
  puVar25 = uStack_200;
  puVar16 = local_208;
  local_1f8 = (longlong *)CONCAT71(local_1f8._1_7_,1);
  if (uStack_200 != (uint *)0x0) {
    LOCK();
    uStack_200[2] = uStack_200[2] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar23 = FUN_14118da1c();
      bVar18 = FUN_14054d46e(uVar23,L"nothreading");
      DAT_14c83f0f8 = bVar18 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar31 = local_118;
    if (DAT_14c83f0f8 == 1) goto LAB_144566c6b;
    pppuVar32 = local_108;
    if (local_108 == (undefined ***)0x0) {
      pppuVar32 = &local_f8;
    }
    uVar23 = (*(code *)(*pppuVar32)[1])();
    (*pcVar31)(uVar23);
    *(undefined4 *)(local_208 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144566c6b:
    plVar21 = DAT_14c8442c0;
    puVar26 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar26[1] = 0;
    *puVar26 = TAsyncQueuedWork<void>::vftable;
    puVar26[2] = local_118;
    puVar26[4] = local_108;
    local_108 = (undefined ***)0x0;
    *(undefined4 *)(puVar26 + 8) = uStack_e8;
    *(undefined4 *)((longlong)puVar26 + 0x44) = uStack_e4;
    *(undefined4 *)(puVar26 + 9) = uStack_e0;
    *(undefined4 *)((longlong)puVar26 + 0x4c) = uStack_dc;
    puVar26[6] = local_f8;
    puVar26[7] = CONCAT44(uStack_ec,uStack_f0);
    if (local_118 != (code *)0x0) {
      local_118 = (code *)0x0;
    }
    puVar26[10] = local_208;
    puVar26[0xb] = uStack_200;
    local_208 = (undefined1 *)0x0;
    uStack_200 = (uint *)0x0;
    *(undefined1 *)(puVar26 + 0xc) = 0;
    (**(code **)(*plVar21 + 0x18))(plVar21,puVar26,3);
  }
  puVar38 = uStack_200;
  if (uStack_200 != (uint *)0x0) {
    LOCK();
    puVar2 = uStack_200 + 2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (*puVar2 == 0) {
      (*(code *)**(undefined8 **)uStack_200)(uStack_200);
      LOCK();
      puVar2 = puVar38 + 3;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (*puVar2 == 0) {
        (**(code **)(*(longlong *)puVar38 + 0x10))(puVar38);
      }
    }
  }
  if (local_118 != (code *)0x0) {
    pppuVar32 = &local_f8;
    if (local_108 != (undefined ***)0x0) {
      pppuVar32 = local_108;
    }
    (*(code *)(*pppuVar32)[2])(pppuVar32);
  }
  plVar21 = param_1 + 0xd0;
  if (local_158 != 0) {
    plVar33 = local_148;
    if (local_148 == (longlong *)0x0) {
      plVar33 = alStack_138;
    }
    (**(code **)(*plVar33 + 0x10))();
  }
  puVar26 = (undefined8 *)(**(code **)(*param_1 + 0x458))(param_1);
  plVar33 = (longlong *)*puVar26;
  FUN_14967309a(param_1,local_260,1);
  lVar22 = (**(code **)(*param_1 + 0x420))(param_1);
  local_280 = param_1 + 0x21f;
  local_288 = param_1 + 0x21d;
  local_298 = (code **)(param_1 + 0x1b1);
  local_290 = plVar21;
  (**(code **)(*plVar33 + 0x58))(plVar33,lVar22,param_1[0x186],param_1 + 0x1af);
  if (*(longlong *)(lVar22 + 0x208) == 0) {
LAB_144566f98:
    bVar42 = false;
  }
  else {
    uVar37 = *(uint *)(param_1 + 0x21e);
    lVar22 = *(longlong *)(*(longlong *)(lVar22 + 0x208) + 0x40);
    if ((int)uVar37 < 1 || lVar22 == 0) goto LAB_144566f98;
    local_270 = puVar25;
    uVar24 = 0;
    local_260 = plVar21;
    do {
      uVar35 = *(uint *)(param_1[0x21d] + uVar24 * 4);
      uVar39 = (ulonglong)(uVar35 >> 7 & 0x7fffff);
      uVar40 = (ulonglong)((uVar35 & 0x7f) << 4);
      plVar21 = (longlong *)(*(longlong *)(*(longlong *)(lVar22 + 0x48) + uVar39 * 8) + uVar40);
      pcVar31 = (code *)*plVar21;
      plVar21 = (longlong *)plVar21[1];
      puVar1 = (undefined4 *)(param_1[0x21f] + uVar24 * 0x10);
      local_118._0_4_ = *puVar1;
      local_118._4_4_ = puVar1[1];
      uStack_110._0_4_ = puVar1[2];
      uStack_110._4_4_ = puVar1[3];
      lVar27 = param_1[0x176];
      if (*(char *)(lVar27 + 0xd4) == '\0') {
        local_118._0_4_ = SUB84(pcVar31,0);
      }
      if (*(char *)(lVar27 + 0xd5) == '\0') {
        local_118._4_4_ = (undefined4)((ulonglong)pcVar31 >> 0x20);
      }
      local_208 = (undefined1 *)CONCAT44(local_118._4_4_,(undefined4)local_118);
      if (*(char *)(lVar27 + 0xd6) == '\0') {
        uStack_110._0_4_ = (int)plVar21;
      }
      if (*(char *)(lVar27 + 0xd7) == '\0') {
        uStack_110._4_4_ = (uint)((ulonglong)plVar21 >> 0x20);
      }
      uStack_200 = (uint *)CONCAT44(uStack_110._4_4_,(int)uStack_110);
      local_118 = pcVar31;
      uStack_110 = plVar21;
      FUN_149673532(param_1[0x221],uVar35,&local_118,&local_208);
      lVar27 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(lVar22 + 0x48) + uVar39 * 8) + uVar40 + lVar27 * 4) =
             *(undefined4 *)((longlong)&local_208 + lVar27 * 4);
        lVar27 = lVar27 + 1;
      } while (lVar27 != 4);
      uVar24 = uVar24 + 1;
    } while (uVar24 != uVar37);
    bVar42 = true;
    puVar25 = local_270;
    plVar21 = local_260;
  }
  memcpy(param_1 + 0x102,plVar21,0x150);
  FUN_14967e05c(param_1 + 300,param_1 + 0xfa);
  FUN_1402160b8(&local_118);
  param_1[0x124] = (longlong)local_118;
  if (bVar42) {
    FUN_143b6ee10(param_1[0x17f],local_268,2);
    plVar21 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar21 + 0x348))(plVar21);
  }
  if (puVar16 != (undefined1 *)0x0) {
    do {
      plVar21 = *(longlong **)(puVar16 + 0x70);
      cVar17 = (**(code **)(*plVar21 + 0x20))(plVar21,0xffffffff,0);
    } while (cVar17 == '\0');
  }
  if (puVar25 != (uint *)0x0) {
    LOCK();
    puVar38 = puVar25 + 2;
    *puVar38 = *puVar38 - 1;
    UNLOCK();
    if (*puVar38 == 0) {
      (*(code *)**(undefined8 **)puVar25)(puVar25);
      LOCK();
      puVar38 = puVar25 + 3;
      *puVar38 = *puVar38 - 1;
      UNLOCK();
      if (*puVar38 == 0) {
        (**(code **)(*(longlong *)puVar25 + 0x10))(puVar25);
      }
    }
  }
LAB_14456603e:
  if ((local_b0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 144567698 FUN_144567698 body=1717 status=ok
// SIG undefined FUN_144567698(void)

void FUN_144567698(undefined8 param_1,undefined4 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_498 [32];
  undefined1 local_478;
  undefined8 local_470;
  undefined4 local_468;
  undefined1 local_464;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined1 local_440;
  undefined4 local_43c;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  float local_414;
  float local_410;
  float local_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined8 local_3f8;
  undefined1 local_3f0 [8];
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined8 local_3d8;
  longlong local_3c8;
  ulonglong uStack_3c0;
  undefined1 local_3b8 [16];
  longlong local_3a8;
  int local_398;
  int local_394;
  undefined8 *local_390;
  longlong local_288;
  int local_278;
  int local_274;
  undefined8 *local_270;
  longlong local_1b0;
  undefined8 local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  longlong local_c8 [4];
  undefined1 local_a8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_f8 = (void *)CONCAT71(local_f8._1_7_,1);
  local_f8 = (void *)CONCAT44(param_2,(undefined4)local_f8);
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  local_470 = param_3;
  FUN_1485066d8(local_3b8,param_1);
  FUN_146f781a2(param_7,local_3b8);
  FUN_145838e00(local_3b8);
  local_478 = 0;
  FUN_1411b354a(local_3b8,0,0,0);
  local_468 = 0x10100;
  local_460 = 0;
  uStack_458 = 0;
  local_450 = 0;
  uStack_448 = 0;
  local_440 = 0;
  local_43c = 3;
  local_464 = 0;
  local_438 = 0;
  uStack_430 = 0;
  FUN_142ab694c(&local_468,param_7,local_3b8,0);
  if (local_1b0 == 0) {
    FUN_14582ed12(local_3b8);
  }
  lVar12 = *(longlong *)(local_1b0 + 0x40);
  if (lVar12 == 0) {
    FUN_146c17f82();
    lVar12 = *(longlong *)(local_1b0 + 0x40);
  }
  FUN_146c32e62(lVar12);
  local_3c8 = 0;
  uStack_3c0 = 0;
  FUN_14056a44c(&local_3c8,local_398 * 0x200 + local_394,1);
  uVar11 = local_398 * 0x200 + local_394;
  uVar15 = 0;
  if ((uVar11 != 0) && (uVar15 = 0, 0xfffd < (ushort)(*(short *)*local_390 - 1U))) {
    uVar14 = 1;
    uVar7 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar15 = uVar14;
      if (uVar14 == uVar7) break;
      uVar10 = uVar7 >> 9;
      uVar13 = uVar7 & 0x1ff;
      uVar15 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_390[uVar10] + (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar15 != uVar11) {
    do {
      lVar3 = *(longlong *)(local_3a8 + (ulonglong)(uVar15 >> 9) * 8);
      puVar1 = (undefined4 *)(lVar3 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
      local_3e8 = *puVar1;
      uStack_3e4 = puVar1[1];
      uStack_3e0 = puVar1[2];
      uStack_3dc = puVar1[3];
      local_3d8 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
      local_f8 = (void *)0x7fefffffffffffff;
      local_e8 = 0;
      local_d8 = (longlong *)0x0;
      local_a8 = 0;
      iVar5 = (**(code **)(*param_5 + 0x20))(param_5,&local_3e8,local_3f0,&local_f8);
      if (local_e8 != 0) {
        plVar8 = local_d8;
        if (local_d8 == (longlong *)0x0) {
          plVar8 = local_c8;
        }
        (**(code **)(*plVar8 + 0x10))();
      }
      if (*(int *)(*(longlong *)
                    (*(longlong *)(param_4 + 0x78) + (ulonglong)((uint)(iVar5 * 3) >> 9) * 8) +
                  (ulonglong)(iVar5 * 3 & 0x1ff) * 4) < 0) {
        uVar4 = param_6[1];
        puVar2 = (undefined8 *)(local_3c8 + (longlong)(int)uVar15 * 0x10);
        *puVar2 = *param_6;
        puVar2[1] = uVar4;
        break;
      }
      local_408 = local_3e8;
      uStack_404 = uStack_3e4;
      uStack_400 = uStack_3e0;
      uStack_3fc = uStack_3dc;
      local_3f8 = local_3d8;
      FUN_146bd7ec2(&local_f8,local_470,iVar5,&local_408);
      local_40c = (float)local_88;
      local_410 = (float)local_90;
      local_414 = (float)local_98;
      local_428 = 0;
      uStack_420 = 0x3f80000000000000;
      FUN_14967443c(param_4,iVar5,&local_414,&local_428);
      puVar2 = (undefined8 *)(local_3c8 + (longlong)(int)uVar15 * 0x10);
      *puVar2 = local_428;
      puVar2[1] = uStack_420;
      uVar14 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar7 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar7 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(local_390[uVar15 >> 9] + (ulonglong)(uVar15 & 0x1ff) * 2
                                           ) - 1U));
      uVar15 = uVar7;
    } while (uVar15 != uVar11);
  }
  local_f8 = (void *)0x0;
  uStack_f0 = 0;
  uVar9 = uStack_3c0 & 0xffffffff;
  if ((int)uStack_3c0 < 1) {
    if ((int)uStack_3c0 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9);
    }
  }
  else {
    uStack_f0 = uStack_3c0 & 0xffffffff;
    FUN_1446f48e2(&local_f8);
    memset(local_f8,0,uVar9 * 4);
  }
  uVar11 = local_398 * 0x200 + local_394;
  uVar15 = 0;
  if ((uVar11 != 0) && (uVar15 = 0, 0xfffd < (ushort)(*(short *)*local_390 - 1U))) {
    uVar14 = 1;
    uVar7 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar15 = uVar14;
      if (uVar14 == uVar7) break;
      uVar10 = uVar7 >> 9;
      uVar13 = uVar7 & 0x1ff;
      uVar15 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_390[uVar10] + (ulonglong)uVar13 * 2) - 1U));
  }
LAB_144567b37:
  if (uVar15 != uVar11) {
    uVar6 = FUN_146c32f5e(lVar12,(longlong)(int)uVar15 * 0x10 + local_3c8);
    *(undefined4 *)((longlong)local_f8 + (longlong)(int)uVar15 * 4) = uVar6;
    uVar14 = uVar15 + 1;
    if ((int)(uVar15 + 1) < (int)uVar11) {
      uVar14 = uVar11;
    }
    uVar7 = uVar15;
    do {
      uVar15 = uVar14;
      if (uVar14 - 1 == uVar7) break;
      uVar15 = uVar7 + 1;
      uVar7 = uVar15;
    } while (0xfffd < (ushort)(*(short *)(local_390[uVar15 >> 9] + (ulonglong)(uVar15 & 0x1ff) * 2)
                              - 1U));
    goto LAB_144567b37;
  }
  uVar15 = 0;
  uVar11 = local_278 * 0x200 + local_274;
  if ((uVar11 != 0) && (uVar15 = 0, 0xfffd < (ushort)(*(short *)*local_270 - 1U))) {
    uVar14 = 1;
    uVar7 = 1;
    if (1 < (int)uVar11) {
      uVar14 = uVar11;
    }
    do {
      uVar15 = uVar14;
      if (uVar14 == uVar7) break;
      uVar10 = uVar7 >> 9;
      uVar13 = uVar7 & 0x1ff;
      uVar15 = uVar7;
      uVar7 = uVar7 + 1;
    } while (0xfffd < (ushort)(*(short *)(local_270[uVar10] + (ulonglong)uVar13 * 2) - 1U));
  }
  if (uVar15 != uVar11) {
    do {
      lVar3 = *(longlong *)(local_288 + (ulonglong)(uVar15 >> 9) * 8);
      uVar9 = (ulonglong)(uVar15 & 0x1ff);
      uStack_3e0 = *(undefined4 *)
                    ((longlong)local_f8 + (longlong)*(int *)(lVar3 + 8 + uVar9 * 0xc) * 4);
      uStack_3e4 = *(undefined4 *)
                    ((longlong)local_f8 + (longlong)*(int *)(lVar3 + 4 + uVar9 * 0xc) * 4);
      local_3e8 = *(undefined4 *)((longlong)local_f8 + (longlong)*(int *)(lVar3 + uVar9 * 0xc) * 4);
      FUN_146c2a048(lVar12,uVar15,&local_3e8,1);
      uVar14 = uVar15 + 1;
      if ((int)(uVar15 + 1) < (int)uVar11) {
        uVar14 = uVar11;
      }
      do {
        uVar7 = uVar14;
        if (uVar14 - 1 == uVar15) break;
        uVar15 = uVar15 + 1;
        uVar7 = uVar15;
      } while (0xfffd < (ushort)(*(short *)(local_270[uVar15 >> 9] + (ulonglong)(uVar15 & 0x1ff) * 2
                                           ) - 1U));
      uVar15 = uVar7;
    } while (uVar15 != uVar11);
  }
  if (local_f8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_3c8 != 0) {
    FUN_1400020a8();
  }
  local_f8 = (void *)0x1010100;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_f0 = uStack_f0 & 0xffffffffffffff00;
  FUN_146faca1a(&local_f8,local_3b8,param_7);
  if (local_e8 != 0) {
    FUN_1400020a8();
  }
  FUN_148496974(&local_468);
  FUN_141082778(local_3b8);
  if ((local_60 ^ (ulonglong)auStack_498) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144567d63 FUN_144567d63 body=55 status=ok
// SIG undefined FUN_144567d63(void)

void FUN_144567d63(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21358 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21358 = FUN_14171c317(FUN_1467491bc,uVar1,L"EMeshVertexSculptBrushType");
  }
  return;
}



// FUNCTION 144567d9a FUN_144567d9a body=55 status=ok
// SIG undefined FUN_144567d9a(void)

void FUN_144567d9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc21370 == 0) {
    uVar1 = FUN_1410a127e();
    DAT_14cc21370 = FUN_14171c317(FUN_1467491eb,uVar1,L"EMeshVertexSculptBrushFilterType");
  }
  return;
}



// FUNCTION 144567de2 FUN_144567de2 body=1676 status=ok
// SIG undefined FUN_144567de2(void)

void FUN_144567de2(code *param_1,double *param_2)

{
  code *pcVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_1b8 [40];
  undefined4 local_190;
  code **local_188;
  code *local_180;
  code *local_178;
  code *local_170;
  code *local_168;
  longlong local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  undefined4 *local_140;
  undefined4 *local_138;
  longlong *local_130;
  double *local_128;
  float *local_120;
  undefined4 local_118;
  undefined4 local_114;
  longlong local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  float local_d4;
  code *local_d0;
  code **local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  dVar16 = (double)(**(code **)(*(longlong *)param_1 + 0x478))();
  dVar17 = (double)(**(code **)(*(longlong *)param_1 + 0x478))(param_1);
  dVar5 = DAT_14c846520;
  dVar6 = DAT_14c846518;
  dVar7 = DAT_14c846510;
  local_d4 = (float)(dVar17 * dVar16);
  dVar18 = (double)(**(code **)(*(longlong *)param_1 + 0x478))(param_1);
  dVar8 = DAT_14c846520;
  dVar17 = DAT_14c846518;
  dVar16 = DAT_14c846510;
  dVar5 = dVar5 * dVar18 + param_2[2];
  dVar6 = dVar6 * dVar18 + param_2[1];
  dVar7 = dVar7 * dVar18 + *param_2;
  dVar18 = (double)(**(code **)(*(longlong *)param_1 + 0x478))(param_1);
  local_f8 = param_2[2] - dVar8 * dVar18;
  local_108 = *param_2 - dVar16 * dVar18;
  local_100 = param_2[1] - dVar17 * dVar18;
  pcVar1 = param_1 + 0xce8;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  local_f0 = dVar7;
  local_e8 = dVar6;
  local_e0 = dVar5;
  if (*(int *)(param_1 + 0xcf4) < 0) {
    FUN_14481578e(pcVar1,0);
  }
  lVar12 = (**(code **)(*(longlong *)param_1 + 0x420))(param_1);
  local_110 = lVar12;
  FUN_146c88ebc(param_1 + 0x1240,&local_108,pcVar1);
  uVar10 = 0xffffffff;
  local_114 = 0xffffffff;
  local_118 = 0xffffffff;
  if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0xaa) == '\x02') {
    uVar2 = *(uint *)(param_1 + 0xc10);
    uVar11 = uVar10;
    if ((-1 < (int)uVar2) &&
       ((int)uVar2 < *(int *)(lVar12 + 0x140) * 0x200 + *(int *)(lVar12 + 0x144))) {
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar12 + 0x148) + (ulonglong)(uVar2 >> 9) * 8) +
                             (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe) {
        lVar12 = (*(undefined8 **)(param_1 + 0xbf8))[1];
        if (lVar12 == 0) {
          uVar11 = FUN_146bc96d4(**(undefined8 **)(param_1 + 0xbf8));
        }
        else {
          uVar11 = *(undefined4 *)
                    (*(longlong *)(*(longlong *)(lVar12 + 0x20) + (ulonglong)(uVar2 >> 9) * 8) +
                    (ulonglong)(uVar2 & 0x1ff) * 4);
        }
      }
    }
  }
  else {
    uVar11 = local_118;
    if (*(char *)(*(longlong *)(param_1 + 0xba8) + 0xaa) == '\x01') {
      iVar14 = *(int *)(param_1 + 0xc10);
      local_114 = uVar10;
      if ((-1 < (longlong)iVar14) && (iVar14 <= *(int *)(param_1 + 0xc08))) {
        local_114 = *(undefined4 *)(*(longlong *)(param_1 + 0xc00) + (longlong)iVar14 * 4);
      }
    }
  }
  local_118 = uVar11;
  local_168 = param_1 + 0xd48;
  FUN_146bd783c(local_168,*(undefined4 *)(param_1 + 0xcf0),0);
  local_c8 = &local_148;
  local_140 = &local_114;
  local_138 = &local_118;
  local_130 = &local_110;
  local_120 = &local_d4;
  local_188 = (code **)&local_c0;
  local_c0 = (undefined1 *)0x0;
  local_b8 = (code **)((ulonglong)local_b8._4_4_ << 0x20);
  local_d0 = FUN_144571820;
  local_190 = 0;
  local_148 = param_1;
  local_128 = param_2;
  FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0xcf0),1);
  local_178 = param_1 + 0xcf8;
  FUN_14834bdd8(local_178,*(int *)(local_110 + 0x20) * 0x200 + *(int *)(local_110 + 0x24),0);
  local_180 = param_1 + 0xd20;
  FUN_14834bdd8(local_180,*(int *)(local_110 + 0x140) * 0x200 + *(int *)(local_110 + 0x144),0);
  local_160 = (longlong)*(int *)(param_1 + 0xcf0);
  local_170 = param_1;
  if (0 < local_160) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar2 = *(uint *)(*(longlong *)pcVar1 + lVar13 * 4);
      if (uVar2 != 0xffffffff) {
        lVar3 = *(longlong *)(*(longlong *)(local_110 + 0x130) + (ulonglong)(uVar2 >> 9) * 8);
        lVar4 = *(longlong *)local_168;
        lVar15 = 0;
        iVar14 = 0;
        do {
          if (*(int *)(lVar4 + lVar12 + lVar15 * 4) != 0) {
            FUN_14834be84(local_178,
                          *(undefined4 *)((ulonglong)((uVar2 & 0x1ff) * 0xc) + lVar3 + lVar15 * 4));
            iVar14 = iVar14 + 1;
          }
          lVar15 = lVar15 + 1;
        } while (lVar15 != 3);
        if (0 < iVar14) {
          FUN_14834be84(local_180,uVar2);
        }
      }
      lVar13 = lVar13 + 1;
      lVar12 = lVar12 + 0xc;
    } while (lVar13 != local_160);
  }
  pcVar9 = local_170;
  pcVar1 = local_170 + 0xd58;
  FUN_149631558(local_178,pcVar1);
  if (pcVar9[0x14b9] != (code)0x0) {
    *(undefined4 *)(pcVar9 + 0x14c8) = 0;
    if (*(int *)(pcVar9 + 0x14cc) < 0) {
      FUN_14481578e(pcVar9 + 0x14c0,0);
    }
    FUN_14834160a(*(longlong *)(pcVar9 + 0x14b0),pcVar1,pcVar9 + 0x14c0,1);
    iVar14 = *(int *)(pcVar9 + 0x14c8);
    if ((longlong)iVar14 != 0) {
      lVar12 = *(longlong *)(pcVar9 + 0x14c0);
      lVar13 = 0;
      do {
        uVar2 = *(uint *)(lVar12 + lVar13);
        if (((-1 < (int)uVar2) &&
            ((int)uVar2 < *(int *)(local_110 + 0x20) * 0x200 + *(int *)(local_110 + 0x24))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 (*(longlong *)(local_110 + 0x28) + (ulonglong)(uVar2 >> 9) * 8) +
                               (ulonglong)(uVar2 & 0x1ff) * 2) - 1U) < 0xfffe)) {
          local_148 = pcVar9;
          local_158 = &LAB_144571ade;
          local_150 = &local_148;
          FUN_146c03fd0(local_110,uVar2,&local_158);
        }
        lVar13 = lVar13 + 4;
      } while ((longlong)iVar14 * 4 != lVar13);
    }
  }
  FUN_149631558(local_180,pcVar9 + 0xd68);
  uVar10 = *(undefined4 *)(pcVar9 + 0xd60);
  FUN_14051b394(pcVar9 + 0x1490,uVar10,0);
  FUN_14051b394(pcVar9 + 0x14a0,uVar10,0);
  local_d0 = pcVar9;
  local_148 = (code *)0x0;
  local_140 = (undefined4 *)((ulonglong)local_140 & 0xffffffff00000000);
  local_c0 = &LAB_144571af0;
  local_190 = 0;
  local_188 = &local_148;
  local_c8 = (code **)&local_110;
  local_b8 = &local_d0;
  FUN_1401f8d10(L"ParallelFor Task",uVar10,1);
  if (pcVar9[0x14b9] == (code)0x1) {
    FUN_14051b394(pcVar9 + 0x14d0,uVar10,0);
    FUN_14051b394(pcVar9 + 0x14e0,uVar10,0);
    local_c8 = (code **)pcVar9;
    local_148 = (code *)0x0;
    local_140 = (undefined4 *)((ulonglong)local_140 & 0xffffffff00000000);
    local_c0 = &LAB_144571b42;
    local_190 = 0;
    local_188 = &local_148;
    local_d0 = (code *)&local_110;
    local_b8 = &local_d0;
    FUN_1401f8d10(L"ParallelFor Task",uVar10,1);
  }
  if ((local_b0 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144568470 FUN_144568470 body=6203 status=ok
// SIG undefined FUN_144568470(void)

void FUN_144568470(code *param_1)

{
  int *piVar1;
  code **ppcVar2;
  code **ppcVar3;
  longlong *plVar4;
  code *pcVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  code *pcVar22;
  char cVar23;
  byte bVar24;
  longlong *plVar25;
  code *pcVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  code *pcVar29;
  longlong *plVar30;
  longlong lVar31;
  uint uVar32;
  undefined ***pppuVar33;
  double *pdVar34;
  double *pdVar35;
  float fVar36;
  float fVar37;
  undefined1 auStack_2b8 [32];
  code **local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  double *local_278;
  code *local_270;
  double *local_268;
  longlong *local_260;
  code *local_258;
  longlong *local_250;
  longlong local_248;
  longlong *plStack_240;
  undefined1 local_231;
  code *local_230;
  code **local_228;
  code *local_220;
  code *local_218;
  code **ppcStack_210;
  undefined1 local_208;
  longlong local_1f8;
  longlong *local_1e8;
  longlong local_1d8 [4];
  longlong local_1b8;
  longlong *local_1a8;
  longlong local_198 [4];
  longlong local_178;
  longlong *local_168;
  longlong local_158 [4];
  code *local_138;
  code **ppcStack_130;
  undefined ***local_128;
  double dStack_120;
  undefined **local_118;
  code *pcStack_110;
  undefined1 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined ***local_e8;
  double dStack_e0;
  undefined **local_d8;
  code *pcStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  FUN_1496b3d26();
  if (param_1[0xc68] == (code)0x1) {
    FUN_14967b170(param_1);
    FUN_143b6ee10(*(longlong *)(param_1 + 0xbe8),param_1 + 0xc18,5);
    plVar25 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
    (**(code **)(*plVar25 + 0x348))(plVar25);
    param_1[0xc68] = (code)0x0;
    goto LAB_144568548;
  }
  if (param_1[0x11f8] != *(code *)(*(longlong *)(param_1 + 0xba8) + 0xab)) {
    FUN_144569cac(param_1,0);
    param_1[0xdb0] = (code)0x0;
  }
  cVar23 = (**(code **)(*(longlong *)param_1 + 0x518))(param_1);
  if (cVar23 == '\0') {
    if (param_1[0xdb0] == (code)0x1) {
      FUN_144569cac(param_1,param_1 + 0xc18);
      FUN_1402226aa(param_1 + 0xc18);
      param_1[0xdb0] = (code)0x0;
    }
    goto LAB_144568548;
  }
  pcVar26 = (code *)(**(code **)(*(longlong *)param_1 + 0x420))(param_1);
  uVar27 = (**(code **)(*(longlong *)param_1 + 0x558))(param_1);
  (**(code **)(*(longlong *)param_1 + 0x470))(param_1);
  puVar28 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x458))(param_1);
  cVar23 = (**(code **)(*(longlong *)*puVar28 + 0x30))();
  if (cVar23 == '\x02') {
    (**(code **)(*(longlong *)param_1 + 0x4f0))(param_1,uVar27);
  }
  else if (cVar23 == '\x01') {
    (**(code **)(*(longlong *)param_1 + 0x4f8))(param_1,uVar27,1);
  }
  else if (cVar23 == '\0') {
    (**(code **)(*(longlong *)param_1 + 0x500))(param_1,uVar27,1);
  }
  cVar23 = (**(code **)(*(longlong *)*puVar28 + 0x38))();
  if (cVar23 != '\0') {
    FUN_1496b6976(param_1);
  }
  pcVar29 = param_1 + 0x810;
  pcVar5 = param_1 + 0x680;
  memcpy(pcVar5,pcVar29,0x150);
  local_268 = (double *)(param_1 + 2000);
  pdVar35 = (double *)(param_1 + 0x960);
  FUN_14967e05c(local_268,pdVar35);
  *(longlong *)(param_1 + 0x718) = 0x3f9eb851eb851eb8;
  *(longlong *)(param_1 + 0x680) = *(longlong *)(param_1 + 0x3e0);
  *(longlong *)(param_1 + 0x688) = *(longlong *)(param_1 + 1000);
  *(longlong *)(param_1 + 0x690) = *(longlong *)(param_1 + 0x3f0);
  *(longlong *)(param_1 + 0x698) = *(longlong *)(param_1 + 0x3f8);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x400);
  *(undefined4 *)(param_1 + 0x6a4) = *(undefined4 *)(param_1 + 0x404);
  *(undefined4 *)(param_1 + 0x6a8) = *(undefined4 *)(param_1 + 0x408);
  *(undefined4 *)(param_1 + 0x6ac) = *(undefined4 *)(param_1 + 0x40c);
  *(longlong *)(param_1 + 0x6b0) = *(longlong *)(param_1 + 0x410);
  pdVar34 = (double *)(param_1 + 0x6b8);
  *(longlong *)(param_1 + 0x6e8) = *(longlong *)(param_1 + 0x448);
  *(longlong *)(param_1 + 0x6d8) = *(longlong *)(param_1 + 0x438);
  *(longlong *)(param_1 + 0x6e0) = *(longlong *)(param_1 + 0x440);
  *(longlong *)(param_1 + 0x6c8) = *(longlong *)(param_1 + 0x428);
  *(longlong *)(param_1 + 0x6d0) = *(longlong *)(param_1 + 0x430);
  *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x418);
  *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 0x41c);
  *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x420);
  *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x424);
  dVar15 = (double)(**(code **)(*(longlong *)param_1 + 0x488))(param_1);
  dVar14 = (double)(**(code **)(*(longlong *)param_1 + 0x490))(param_1);
  *(double *)(param_1 + 0x700) = dVar14 * dVar15;
  if (param_1[0x1450] == (code)0x1) {
    lVar12 = *(longlong *)(param_1 + 0xbb0);
    fVar36 = *(float *)(lVar12 + 0xb0);
    if ((fVar36 != 0.0) || (NAN(fVar36))) {
      if ((*(byte *)(lVar12 + 0xb4) & 1) != 0) goto LAB_144568b56;
    }
    else {
      if ((*(byte *)(lVar12 + 0xb4) & 1) == 0) goto LAB_1445687b1;
LAB_144568b56:
      uVar32 = *(int *)(param_1 + 0xdb8) * 0xbb38435 + 0x3619636b;
      *(uint *)(param_1 + 0xdb8) = uVar32;
      fVar37 = (float)(uVar32 >> 9 | 0x3f800000) + -1.0 + -0.5;
      fVar36 = fVar36 + (fVar37 + fVar37) * *(float *)(lVar12 + 0xb8);
    }
    dVar14 = *(double *)(param_1 + 0x698);
    dVar15 = *(double *)(param_1 + 0x6a0);
    dVar10 = *(double *)(param_1 + 0x6a8) + *(double *)(param_1 + 0x6a8);
    dVar7 = *(double *)(param_1 + 0x6b0);
    dVar9 = (double)fVar36 * 0.017453292519943295 * 0.5;
    local_278 = pdVar34;
    dVar8 = sin(dVar9);
    dStack_e0 = cos(dVar9);
    local_f8 = (code *)((dVar14 * dVar10 + dVar7 * (dVar15 + dVar15)) * dVar8);
    uStack_f0 = (code **)((dVar10 * dVar15 - (dVar14 + dVar14) * dVar7) * dVar8);
    local_e8 = (undefined ***)
               ((1.0 - ((dVar15 + dVar15) * dVar15 + dVar14 * (dVar14 + dVar14))) * dVar8);
    FUN_1482ff674(pcVar5,&local_f8);
    dVar14 = *(double *)(param_1 + 0x6d0);
    dVar15 = *(double *)(param_1 + 0x6d8);
    dVar10 = *(double *)(param_1 + 0x6e0) + *(double *)(param_1 + 0x6e0);
    dVar7 = *(double *)(param_1 + 0x6e8);
    dVar8 = sin(dVar9);
    dStack_e0 = cos(dVar9);
    pdVar34 = local_278;
    local_f8 = (code *)((dVar14 * dVar10 + dVar7 * (dVar15 + dVar15)) * dVar8);
    uStack_f0 = (code **)((dVar10 * dVar15 - (dVar14 + dVar14) * dVar7) * dVar8);
    local_e8 = (undefined ***)
               ((1.0 - ((dVar15 + dVar15) * dVar15 + dVar14 * (dVar14 + dVar14))) * dVar8);
    FUN_1482ff674(local_278,&local_f8);
  }
LAB_1445687b1:
  if (param_1[0x14b9] == (code)0x1) {
    local_108 = (undefined1 *)pdVar34[6];
    local_138 = (code *)*pdVar34;
    ppcStack_130 = (code **)pdVar34[1];
    local_128 = (undefined ***)pdVar34[2];
    dStack_120 = pdVar34[3];
    local_118 = (undefined **)pdVar34[4];
    pcStack_110 = (code *)pdVar34[5];
    local_270 = pcVar26;
    FUN_148341426(*(longlong *)(param_1 + 0x14b0),&local_f8);
    pdVar34[6] = (double)local_c8;
    pdVar34[4] = (double)local_d8;
    pdVar34[5] = (double)pcStack_d0;
    pdVar34[2] = (double)local_e8;
    pdVar34[3] = dStack_e0;
    *pdVar34 = (double)local_f8;
    pdVar34[1] = (double)uStack_f0;
    *(double *)(param_1 + 0x6b0) = pdVar34[6];
    uVar11 = *(undefined4 *)pdVar34;
    uVar16 = *(undefined4 *)((longlong)pdVar34 + 4);
    uVar17 = *(undefined4 *)(pdVar34 + 1);
    uVar18 = *(undefined4 *)((longlong)pdVar34 + 0xc);
    dVar14 = pdVar34[2];
    dVar15 = pdVar34[3];
    uVar19 = *(undefined4 *)((longlong)pdVar34 + 0x24);
    uVar20 = *(undefined4 *)(pdVar34 + 5);
    uVar21 = *(undefined4 *)((longlong)pdVar34 + 0x2c);
    *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(pdVar34 + 4);
    *(undefined4 *)(param_1 + 0x6a4) = uVar19;
    *(undefined4 *)(param_1 + 0x6a8) = uVar20;
    *(undefined4 *)(param_1 + 0x6ac) = uVar21;
    *(double *)(param_1 + 0x690) = dVar14;
    *(double *)(param_1 + 0x698) = dVar15;
    *(undefined4 *)pcVar5 = uVar11;
    *(undefined4 *)(param_1 + 0x684) = uVar16;
    *(undefined4 *)(param_1 + 0x688) = uVar17;
    *(undefined4 *)(param_1 + 0x68c) = uVar18;
    local_278 = pdVar35;
    FUN_146bcb256(param_1 + 0x1c0,&local_f8,pcVar5);
    pcVar26 = local_270;
    pdVar35 = local_278;
    *(undefined ****)(param_1 + 0x690) = local_e8;
    *(undefined4 *)pcVar5 = (undefined4)local_f8;
    *(undefined4 *)(param_1 + 0x684) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x688) = (undefined4)uStack_f0;
    *(undefined4 *)(param_1 + 0x68c) = uStack_f0._4_4_;
    FUN_1482ff674(pcVar5,param_1 + 0x1c0);
  }
  *(longlong *)(param_1 + 0x788) = *(longlong *)(param_1 + 0x878);
  *(longlong *)(param_1 + 0x778) = *(longlong *)(param_1 + 0x868);
  *(longlong *)(param_1 + 0x780) = *(longlong *)(param_1 + 0x870);
  *(longlong *)(param_1 + 0x768) = *(longlong *)(param_1 + 0x858);
  *(longlong *)(param_1 + 0x770) = *(longlong *)(param_1 + 0x860);
  *(longlong *)(param_1 + 0x758) = *(longlong *)(param_1 + 0x848);
  *(longlong *)(param_1 + 0x760) = *(longlong *)(param_1 + 0x850);
  *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)pcVar29;
  *(undefined4 *)(param_1 + 0x724) = *(undefined4 *)(param_1 + 0x814);
  *(undefined4 *)(param_1 + 0x728) = *(undefined4 *)(param_1 + 0x818);
  *(undefined4 *)(param_1 + 0x72c) = *(undefined4 *)(param_1 + 0x81c);
  *(longlong *)(param_1 + 0x730) = *(longlong *)(param_1 + 0x820);
  *(longlong *)(param_1 + 0x738) = *(longlong *)(param_1 + 0x828);
  *(undefined4 *)(param_1 + 0x740) = *(undefined4 *)(param_1 + 0x830);
  *(undefined4 *)(param_1 + 0x744) = *(undefined4 *)(param_1 + 0x834);
  *(undefined4 *)(param_1 + 0x748) = *(undefined4 *)(param_1 + 0x838);
  *(undefined4 *)(param_1 + 0x74c) = *(undefined4 *)(param_1 + 0x83c);
  *(longlong *)(param_1 + 0x750) = *(longlong *)(param_1 + 0x840);
  dVar14 = *(double *)(param_1 + 0x6c8);
  dVar15 = *(double *)(param_1 + 0x768);
  dVar7 = *(double *)(param_1 + 0x6b8);
  dVar8 = *(double *)(param_1 + 0x6c0);
  dVar9 = *(double *)(param_1 + 0x758);
  dVar10 = *(double *)(param_1 + 0x760);
  cVar23 = (**(code **)(*(longlong *)*puVar28 + 0x40))();
  if ((cVar23 != '\0') &&
     ((dVar14 - dVar15) * (dVar14 - dVar15) +
      (dVar7 - dVar9) * (dVar7 - dVar9) + (dVar8 - dVar10) * (dVar8 - dVar10) < 1e-08))
  goto LAB_144568548;
  (**(code **)(*(longlong *)param_1 + 0x530))(param_1);
  cVar23 = (**(code **)(*(longlong *)param_1 + 0x550))(param_1);
  if (cVar23 == '\0') goto LAB_144568548;
  if (param_1[0xce0] == (code)0x1) {
    lVar12 = *(longlong *)(param_1 + 0xcd0);
    if (*(longlong *)(param_1 + 0xcd0) != 0) {
      while( true ) {
        do {
          lVar31 = lVar12;
          lVar12 = 0;
        } while (lVar31 == 0);
        plVar25 = *(longlong **)(lVar31 + 0x70);
        cVar23 = (**(code **)(*plVar25 + 0x20))(plVar25,0xffffffff,0);
        if (cVar23 != '\0') break;
        lVar12 = *(longlong *)(param_1 + 0xcd0);
      }
    }
    param_1[0xce0] = (code)0x1;
  }
  local_278 = pdVar34;
  FUN_144567de2(param_1,pdVar34);
  local_178 = 0;
  local_168 = (longlong *)0x0;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14bdae580;
  local_f8 = FUN_144571e62;
  pcStack_d0 = param_1;
  FUN_14170b918(&local_138);
  local_128 = (undefined ***)CONCAT71(local_128._1_7_,1);
  local_258 = local_138;
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    *(int *)(ppcStack_130 + 1) = (int)ppcStack_130[1] + 1;
    UNLOCK();
  }
  local_250 = (longlong *)ppcStack_130;
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar27 = FUN_14118da1c();
      bVar24 = FUN_14054d46e(uVar27,L"nothreading");
      DAT_14c83f0f8 = bVar24 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar6 = local_f8;
    if (DAT_14c83f0f8 == 1) goto LAB_144568996;
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_d8;
    }
    uVar27 = (*(code *)(*pppuVar33)[1])();
    (*pcVar6)(uVar27);
    *(undefined4 *)(local_138 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144568996:
    plVar25 = DAT_14c8442c0;
    puVar28 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar28[1] = 0;
    *puVar28 = TAsyncQueuedWork<void>::vftable;
    puVar28[2] = local_f8;
    puVar28[4] = local_e8;
    local_e8 = (undefined ***)0x0;
    puVar28[8] = local_c8;
    puVar28[9] = uStack_c0;
    puVar28[6] = local_d8;
    puVar28[7] = pcStack_d0;
    if (local_f8 != (code *)0x0) {
      local_f8 = (code *)0x0;
    }
    puVar28[10] = local_138;
    puVar28[0xb] = ppcStack_130;
    local_138 = (code *)0x0;
    ppcStack_130 = (code **)0x0;
    *(undefined1 *)(puVar28 + 0xc) = 0;
    (**(code **)(*plVar25 + 0x18))(plVar25,puVar28,3);
  }
  ppcVar2 = ppcStack_130;
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    plVar25 = (longlong *)(ppcStack_130 + 1);
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*ppcStack_130)();
      LOCK();
      piVar1 = (int *)((longlong)ppcVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)((longlong)*ppcVar2 + 0x10))();
      }
    }
  }
  if (local_f8 != (code *)0x0) {
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_d8;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  if (local_178 != 0) {
    plVar25 = local_168;
    if (local_168 == (longlong *)0x0) {
      plVar25 = local_158;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  local_c8 = &local_231;
  local_231 = 0;
  local_1b8 = 0;
  local_1a8 = (longlong *)0x0;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14bdae5a0;
  local_f8 = FUN_144571f28;
  local_270 = pcVar26;
  pcStack_d0 = pcVar26;
  uStack_c0 = param_1;
  FUN_14170b918(&local_138);
  ppcVar2 = ppcStack_130;
  pcVar26 = local_138;
  local_128 = (undefined ***)CONCAT71(local_128._1_7_,1);
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    *(int *)(ppcStack_130 + 1) = (int)ppcStack_130[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar27 = FUN_14118da1c();
      bVar24 = FUN_14054d46e(uVar27,L"nothreading");
      DAT_14c83f0f8 = bVar24 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar6 = local_f8;
    if (DAT_14c83f0f8 == 1) goto LAB_144568d18;
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_d8;
    }
    uVar27 = (*(code *)(*pppuVar33)[1])();
    (*pcVar6)(uVar27);
    *(undefined4 *)(local_138 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144568d18:
    plVar25 = DAT_14c8442c0;
    puVar28 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar28[1] = 0;
    *puVar28 = TAsyncQueuedWork<void>::vftable;
    puVar28[2] = local_f8;
    puVar28[4] = local_e8;
    local_e8 = (undefined ***)0x0;
    puVar28[8] = local_c8;
    puVar28[9] = uStack_c0;
    puVar28[6] = local_d8;
    puVar28[7] = pcStack_d0;
    if (local_f8 != (code *)0x0) {
      local_f8 = (code *)0x0;
    }
    puVar28[10] = local_138;
    puVar28[0xb] = ppcStack_130;
    local_138 = (code *)0x0;
    ppcStack_130 = (code **)0x0;
    *(undefined1 *)(puVar28 + 0xc) = 0;
    (**(code **)(*plVar25 + 0x18))(plVar25,puVar28,3);
  }
  ppcVar3 = ppcStack_130;
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    plVar25 = (longlong *)(ppcStack_130 + 1);
    *(int *)plVar25 = (int)*plVar25 + -1;
    UNLOCK();
    if ((int)*plVar25 == 0) {
      (**(code **)*ppcStack_130)(ppcStack_130);
      LOCK();
      piVar1 = (int *)((longlong)ppcVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)((longlong)*ppcVar3 + 0x10))(ppcVar3);
      }
    }
  }
  if (local_f8 != (code *)0x0) {
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_d8;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  local_260 = (longlong *)ppcVar2;
  if (local_1b8 != 0) {
    plVar25 = local_1a8;
    if (local_1a8 == (longlong *)0x0) {
      plVar25 = local_198;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  puVar28 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x458))(param_1);
  cVar23 = (**(code **)(*(longlong *)*puVar28 + 0x48))();
  if (cVar23 != '\0') {
    local_288 = (undefined8 *)((ulonglong)local_288 & 0xffffffffffffff00);
    local_290 = (undefined8 *)((ulonglong)local_290 & 0xffffffffffffff00);
    local_298 = (code **)CONCAT71(local_298._1_7_,1);
    (**(code **)(*(longlong *)param_1 + 0x570))(param_1,&local_f8,local_278,param_1 + 0xd68);
    *(undefined1 **)(param_1 + 0x7c8) = local_c8;
    *(undefined ***)(param_1 + 0x7b8) = local_d8;
    *(code **)(param_1 + 0x7c0) = pcStack_d0;
    *(undefined ****)(param_1 + 0x7a8) = local_e8;
    *(double *)(param_1 + 0x7b0) = dStack_e0;
    *(undefined4 *)(param_1 + 0x798) = (undefined4)local_f8;
    *(undefined4 *)(param_1 + 0x79c) = local_f8._4_4_;
    *(undefined4 *)(param_1 + 0x7a0) = (undefined4)uStack_f0;
    *(undefined4 *)(param_1 + 0x7a4) = uStack_f0._4_4_;
  }
  if (param_1[0x1450] == (code)0x1) {
    local_f8 = (code *)*local_268;
    uStack_f0 = (code **)local_268[1];
    local_e8 = (undefined ***)local_268[2];
    dStack_e0 = local_268[3];
    local_d8 = (undefined **)local_268[4];
    pcStack_d0 = (code *)local_268[5];
    local_c8 = (undefined1 *)local_268[6];
    uStack_c0 = (code *)local_268[7];
    pcVar6 = uStack_c0;
    local_268[6] = (double)local_108;
    local_268[7] = (double)CONCAT44(uStack_fc,uStack_100);
    local_268[4] = (double)&PTR_LAB_14bdae540;
    local_268[5] = (double)param_1;
    local_268[2] = 0.0;
    local_268[3] = dStack_120;
    *local_268 = (double)&LAB_144571bc0;
    local_268[1] = (double)ppcStack_130;
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    local_108 = local_c8;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    local_118 = local_d8;
    pcStack_110 = pcStack_d0;
    local_128 = local_e8;
    dStack_120 = dStack_e0;
    local_138 = local_f8;
    ppcStack_130 = uStack_f0;
    uStack_c0 = pcVar6;
    if (local_f8 != (code *)0x0) {
      pppuVar33 = local_e8;
      if (local_e8 == (undefined ***)0x0) {
        pppuVar33 = &local_118;
      }
      (*(code *)(*pppuVar33)[2])();
    }
  }
  local_278 = pdVar35;
  local_220 = (code *)(**(code **)(*(longlong *)param_1 + 0x420))(param_1);
  pcVar6 = param_1 + 0xd58;
  local_298 = (code **)(param_1 + 0x1490);
  (**(code **)(*(longlong *)*puVar28 + 0x28))((longlong *)*puVar28,local_220,pcVar5,pcVar6);
  local_f8 = (code *)*local_268;
  uStack_f0 = (code **)local_268[1];
  local_e8 = (undefined ***)local_268[2];
  dStack_e0 = local_268[3];
  local_d8 = (undefined **)local_268[4];
  pcStack_d0 = (code *)local_268[5];
  local_c8 = (undefined1 *)local_268[6];
  uStack_c0 = (code *)local_268[7];
  dVar14 = (double)uStack_c0;
  local_268[6] = (double)local_108;
  local_268[7] = (double)CONCAT44(uStack_fc,uStack_100);
  local_268[4] = (double)local_118;
  local_268[5] = (double)pcStack_110;
  local_268[2] = 0.0;
  local_268[3] = dStack_120;
  *local_268 = 0.0;
  local_268[1] = (double)ppcStack_130;
  uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
  local_108 = local_c8;
  uStack_100 = (undefined4)uStack_c0;
  uStack_fc = uStack_c0._4_4_;
  local_118 = local_d8;
  pcStack_110 = pcStack_d0;
  local_128 = local_e8;
  dStack_120 = dStack_e0;
  local_138 = local_f8;
  ppcStack_130 = uStack_f0;
  uStack_c0 = (code *)dVar14;
  if (local_f8 != (code *)0x0) {
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_118;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  if (param_1[0x14b9] == (code)0x1) {
    FUN_1483416f8(*(longlong *)(param_1 + 0x14b0),pcVar6);
    ppcStack_130 = &local_218;
    ppcStack_210 = &local_220;
    local_288 = &local_f8;
    local_f8 = (code *)0x0;
    uStack_f0 = (code **)((ulonglong)uStack_f0 & 0xffffffff00000000);
    local_138 = FUN_144571c10;
    local_290 = (undefined8 *)((ulonglong)local_290 & 0xffffffff00000000);
    local_218 = param_1;
    FUN_1401f8d10(L"ParallelFor Task",*(undefined4 *)(param_1 + 0x1498),1);
    local_298 = (code **)(param_1 + 0x14d0);
    FUN_14834185e(*(longlong *)(param_1 + 0x14b0),pcVar6,param_1 + 0x14c0,param_1 + 0x1490);
  }
  local_248 = 0;
  plStack_240 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x14f0) != 0) {
    local_138 = (code *)0x0;
    local_128 = (undefined ***)0x0;
    local_e8 = (undefined ***)0x0;
    local_d8 = &PTR_LAB_14bdae560;
    local_f8 = FUN_144571c7a;
    pcStack_d0 = param_1;
    FUN_14170b918(&local_218);
    ppcVar2 = ppcStack_210;
    pcVar6 = local_218;
    local_208 = 1;
    if (ppcStack_210 != (code **)0x0) {
      LOCK();
      *(int *)(ppcStack_210 + 1) = *(int *)(ppcStack_210 + 1) + 1;
      UNLOCK();
    }
    if (DAT_14c846b14 == '\x01') {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1))
      {
        uVar27 = FUN_14118da1c();
        bVar24 = FUN_14054d46e(uVar27,L"nothreading");
        DAT_14c83f0f8 = bVar24 ^ 1;
        _Init_thread_footer(&DAT_14c83f0fc);
      }
      pcVar22 = local_f8;
      if (DAT_14c83f0f8 == 1) goto LAB_1445692a2;
      pppuVar33 = local_e8;
      if (local_e8 == (undefined ***)0x0) {
        pppuVar33 = &local_d8;
      }
      uVar27 = (*(code *)(*pppuVar33)[1])();
      (*pcVar22)(uVar27);
      *(undefined4 *)(local_218 + 0x80) = 0;
      FUN_140b576f0();
    }
    else {
LAB_1445692a2:
      plVar25 = DAT_14c8442c0;
      puVar28 = (undefined8 *)FUN_14001cc68(0x70,0x10);
      puVar28[1] = 0;
      *puVar28 = TAsyncQueuedWork<void>::vftable;
      puVar28[2] = local_f8;
      puVar28[4] = local_e8;
      local_e8 = (undefined ***)0x0;
      puVar28[8] = local_c8;
      puVar28[9] = uStack_c0;
      puVar28[6] = local_d8;
      puVar28[7] = pcStack_d0;
      if (local_f8 != (code *)0x0) {
        local_f8 = (code *)0x0;
      }
      puVar28[10] = local_218;
      puVar28[0xb] = ppcStack_210;
      local_218 = (code *)0x0;
      ppcStack_210 = (code **)0x0;
      *(undefined1 *)(puVar28 + 0xc) = 0;
      (**(code **)(*plVar25 + 0x18))(plVar25,puVar28,3);
    }
    ppcVar3 = ppcStack_210;
    local_230 = pcVar6;
    local_228 = ppcVar2;
    if (ppcStack_210 != (code **)0x0) {
      LOCK();
      ppcVar2 = ppcStack_210 + 1;
      *(int *)ppcVar2 = *(int *)ppcVar2 + -1;
      UNLOCK();
      if (*(int *)ppcVar2 == 0) {
        (**(code **)*ppcVar3)(ppcVar3);
        LOCK();
        piVar1 = (int *)((longlong)ppcVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*ppcVar3 + 0x10))(ppcVar3);
        }
      }
    }
    if (local_f8 != (code *)0x0) {
      pppuVar33 = local_e8;
      if (local_e8 == (undefined ***)0x0) {
        pppuVar33 = &local_d8;
      }
      (*(code *)(*pppuVar33)[2])();
    }
    if (local_138 != (code *)0x0) {
      pppuVar33 = local_128;
      if (local_128 == (undefined ***)0x0) {
        pppuVar33 = &local_118;
      }
      (*(code *)(*pppuVar33)[2])();
    }
    FUN_14614a64a(&local_248);
    ppcVar2 = local_228;
    if (local_228 != (code **)0x0) {
      LOCK();
      ppcVar3 = local_228 + 1;
      *(int *)ppcVar3 = *(int *)ppcVar3 + -1;
      UNLOCK();
      if (*(int *)ppcVar3 == 0) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)ppcVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*ppcVar2 + 0x10))(ppcVar2);
        }
      }
    }
  }
  pdVar35 = local_278;
  uVar11 = *(undefined4 *)(param_1 + 0x1498);
  if (param_1[0x14b9] == (code)0x0) {
    ppcStack_210 = &local_230;
    local_288 = &local_f8;
    local_f8 = (code *)0x0;
    uStack_f0 = (code **)((ulonglong)uStack_f0 & 0xffffffff00000000);
    local_218 = FUN_144571d62;
    local_290 = (undefined8 *)((ulonglong)local_290 & 0xffffffff00000000);
    local_230 = param_1;
    local_228 = &local_220;
    FUN_1401f8d10(L"ParallelFor Task",uVar11,1);
    if (((byte)param_1[0x14b9] & 1) != 0) goto LAB_144569670;
  }
  else {
LAB_144569670:
    ppcStack_210 = &local_230;
    local_288 = &local_f8;
    local_f8 = (code *)0x0;
    uStack_f0 = (code **)((ulonglong)uStack_f0 & 0xffffffff00000000);
    local_218 = FUN_144571dcc;
    local_290 = (undefined8 *)((ulonglong)local_290 & 0xffffffff00000000);
    local_230 = param_1;
    local_228 = &local_220;
    FUN_1401f8d10(L"ParallelFor Task",uVar11,1);
  }
  if (local_220[0x210] == (code)0x1) {
    LOCK();
    *(int *)(local_220 + 0x214) = *(int *)(local_220 + 0x214) + 1;
    UNLOCK();
  }
  memcpy(pcVar29,pcVar5,0x150);
  FUN_14967e05c(pdVar35,local_268);
  FUN_1402160b8(&local_f8);
  *(code **)(param_1 + 0x920) = local_f8;
  local_1f8 = 0;
  local_1e8 = (longlong *)0x0;
  local_e8 = (undefined ***)0x0;
  local_d8 = &PTR_LAB_14bdae5c0;
  local_f8 = FUN_144571f8c;
  pcStack_d0 = param_1;
  FUN_14170b918(&local_138);
  ppcVar2 = ppcStack_130;
  pcVar29 = local_138;
  local_128 = (undefined ***)CONCAT71(local_128._1_7_,1);
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    *(int *)(ppcStack_130 + 1) = *(int *)(ppcStack_130 + 1) + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar27 = FUN_14118da1c();
      bVar24 = FUN_14054d46e(uVar27,L"nothreading");
      DAT_14c83f0f8 = bVar24 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar5 = local_f8;
    if (DAT_14c83f0f8 == 1) goto LAB_1445697a4;
    pppuVar33 = local_e8;
    if (local_e8 == (undefined ***)0x0) {
      pppuVar33 = &local_d8;
    }
    uVar27 = (*(code *)(*pppuVar33)[1])();
    (*pcVar5)(uVar27);
    *(undefined4 *)(local_138 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_1445697a4:
    plVar25 = DAT_14c8442c0;
    puVar28 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar28[1] = 0;
    *puVar28 = TAsyncQueuedWork<void>::vftable;
    puVar28[2] = local_f8;
    puVar28[4] = local_e8;
    local_e8 = (undefined ***)0x0;
    puVar28[8] = local_c8;
    puVar28[9] = uStack_c0;
    puVar28[6] = local_d8;
    puVar28[7] = pcStack_d0;
    if (local_f8 != (code *)0x0) {
      local_f8 = (code *)0x0;
    }
    puVar28[10] = local_138;
    puVar28[0xb] = ppcStack_130;
    local_138 = (code *)0x0;
    ppcStack_130 = (code **)0x0;
    *(undefined1 *)(puVar28 + 0xc) = 0;
    (**(code **)(*plVar25 + 0x18))(plVar25,puVar28,3);
  }
  ppcVar3 = ppcStack_130;
  local_218 = pcVar29;
  ppcStack_210 = ppcVar2;
  if (ppcStack_130 != (code **)0x0) {
    LOCK();
    ppcVar2 = ppcStack_130 + 1;
    *(int *)ppcVar2 = *(int *)ppcVar2 + -1;
    UNLOCK();
    if (*(int *)ppcVar2 == 0) {
      (**(code **)*ppcVar3)(ppcVar3);
      LOCK();
      piVar1 = (int *)((longlong)ppcVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppcVar3 + 0x10))(ppcVar3);
      }
    }
  }
  if (local_f8 != (code *)0x0) {
    pppuVar33 = &local_d8;
    if (local_e8 != (undefined ***)0x0) {
      pppuVar33 = local_e8;
    }
    (*(code *)(*pppuVar33)[2])();
  }
  if (local_1f8 != 0) {
    plVar25 = local_1e8;
    if (local_1e8 == (longlong *)0x0) {
      plVar25 = local_1d8;
    }
    (**(code **)(*plVar25 + 0x10))();
  }
  FUN_14614a64a(param_1 + 0xcd0,&local_218);
  ppcVar2 = ppcStack_210;
  if (ppcStack_210 != (code **)0x0) {
    LOCK();
    ppcVar3 = ppcStack_210 + 1;
    *(int *)ppcVar3 = *(int *)ppcVar3 + -1;
    UNLOCK();
    if (*(int *)ppcVar3 == 0) {
      (**(code **)*ppcVar2)(ppcVar2);
      LOCK();
      piVar1 = (int *)((longlong)ppcVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppcVar2 + 0x10))(ppcVar2);
      }
    }
  }
  param_1[0xce0] = (code)0x1;
  local_138 = (code *)0x0;
  ppcStack_130 = (code **)0x0;
  local_f8 = (code *)0x7fefffffffffffff;
  uStack_f0 = (code **)0x7fefffffffffffff;
  local_e8 = (undefined ***)0x7fefffffffffffff;
  dStack_e0 = -1.79769313486232e+308;
  local_d8 = (undefined **)0xffefffffffffffff;
  pcStack_d0 = (code *)0xffefffffffffffff;
  local_298 = (code **)&local_f8;
  FUN_1484b33c2(*(longlong *)(param_1 + 0xbe8),&local_218,param_1 + 0xd68,&local_138);
  if (pcVar26 != (code *)0x0) {
    do {
      plVar25 = *(longlong **)(pcVar26 + 0x70);
      cVar23 = (**(code **)(*plVar25 + 0x20))(plVar25,0xffffffff,0);
    } while (cVar23 == '\0');
  }
  FUN_1496bb9a9(local_270,param_1 + 0xda0,local_231);
  plVar25 = local_250;
  pcVar26 = local_218;
  if (local_218 != (code *)0x0) {
    do {
      do {
        pcVar29 = pcVar26;
        pcVar26 = (code *)0x0;
      } while (pcVar29 == (code *)0x0);
      plVar30 = *(longlong **)(pcVar29 + 0x70);
      cVar23 = (**(code **)(*plVar30 + 0x20))(plVar30,0xffffffff,0);
      pcVar26 = local_218;
    } while (cVar23 == '\0');
  }
  local_298 = &local_138;
  local_290 = &local_f8;
  FUN_143b6f4aa(*(longlong *)(param_1 + 0xbe8),param_1 + 0xd68,5,&local_218);
  plVar30 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x2c8))(param_1);
  (**(code **)(*plVar30 + 0x348))(plVar30);
  pcVar26 = local_258;
  plVar30 = local_260;
  lVar12 = local_248;
  if (local_248 != 0) {
    do {
      do {
        lVar31 = lVar12;
        lVar12 = 0;
      } while (lVar31 == 0);
      plVar13 = *(longlong **)(lVar31 + 0x70);
      cVar23 = (**(code **)(*plVar13 + 0x20))(plVar13,0xffffffff,0);
      lVar12 = local_248;
    } while (cVar23 == '\0');
  }
  if (pcVar26 != (code *)0x0) {
    do {
      plVar13 = *(longlong **)(pcVar26 + 0x70);
      cVar23 = (**(code **)(*plVar13 + 0x20))(plVar13,0xffffffff,0);
    } while (cVar23 == '\0');
  }
  ppcVar2 = ppcStack_210;
  if (ppcStack_210 != (code **)0x0) {
    LOCK();
    ppcVar3 = ppcStack_210 + 1;
    *(int *)ppcVar3 = *(int *)ppcVar3 + -1;
    UNLOCK();
    if (*(int *)ppcVar3 == 0) {
      (**(code **)*ppcVar2)(ppcVar2);
      LOCK();
      piVar1 = (int *)((longlong)ppcVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*ppcVar2 + 0x10))(ppcVar2);
      }
    }
  }
  if (local_138 != (code *)0x0) {
    FUN_1400020a8();
  }
  plVar13 = plStack_240;
  if (plStack_240 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_240 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_240)(plStack_240);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
  if (plVar30 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar30 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar30)(plVar30);
      LOCK();
      piVar1 = (int *)((longlong)plVar30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
  }
  if (plVar25 != (longlong *)0x0) {
    LOCK();
    plVar30 = plVar25 + 1;
    *(int *)plVar30 = (int)*plVar30 + -1;
    UNLOCK();
    if ((int)*plVar30 == 0) {
      (**(code **)*plVar25)(plVar25);
      LOCK();
      piVar1 = (int *)((longlong)plVar25 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar25 + 0x10))(plVar25);
      }
    }
  }
LAB_144568548:
  if ((local_b0 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 144569cac FUN_144569cac body=2584 status=ok
// SIG undefined FUN_144569cac(void)

void FUN_144569cac(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  undefined ***pppuVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 auStack_368 [32];
  undefined1 local_348;
  undefined1 local_340;
  int local_32c;
  longlong local_328;
  uint local_31c;
  ulonglong local_318;
  longlong *local_310;
  uint *local_308;
  longlong *local_300;
  longlong local_2f8;
  longlong *plStack_2f0;
  undefined1 local_2e8;
  longlong local_2d8;
  longlong *local_2c8;
  longlong local_2b8 [4];
  longlong local_298;
  longlong *local_288;
  longlong local_278 [4];
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined ***local_248;
  undefined **local_238;
  longlong *plStack_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if ((param_1[0x175] != 0) &&
     (cVar9 = *(char *)(param_1[0x175] + 0xab), *(char *)(param_1 + 0x23f) = cVar9, cVar9 != '\0'))
  goto LAB_14456a60b;
  local_328 = (**(code **)(*param_1 + 0x420))(param_1);
  if (param_2 == (longlong *)0x0) {
    plVar3 = param_1 + 0x1b8;
    local_340 = 0;
    local_348 = 0;
    FUN_146c005f0(plVar3,local_328,0,0);
    uStack_250 = DAT_14c84636c;
    local_258 = DAT_14c846364;
    FUN_146c01e94(plVar3);
    FUN_146c38c5e(plVar3);
    *(undefined4 *)(param_1 + 0x1fe) = 8;
    memset(&local_258,0,0x208);
    FUN_1458481c0(&local_258);
    uStack_80 = 0x7fefffffffffffff;
    local_78 = 0x7fefffffffffffff;
    uStack_70 = 0x7fefffffffffffff;
    local_68 = 0xffefffffffffffff;
    uStack_60 = 0xffefffffffffffff;
    local_58 = -0x10000000000001;
    FUN_14967ea0c(param_1 + 0x1fc,&local_258);
    *(undefined4 *)(param_1 + 0x236) = local_88;
    *(undefined4 *)((longlong)param_1 + 0x11b4) = uStack_84;
    *(undefined4 *)(param_1 + 0x237) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)param_1 + 0x11bc) = uStack_80._4_4_;
    *(undefined4 *)(param_1 + 0x238) = (undefined4)local_78;
    *(undefined4 *)((longlong)param_1 + 0x11c4) = local_78._4_4_;
    *(undefined4 *)(param_1 + 0x239) = (undefined4)uStack_70;
    *(undefined4 *)((longlong)param_1 + 0x11cc) = uStack_70._4_4_;
    *(undefined4 *)(param_1 + 0x23a) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x11d4) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x23b) = (undefined4)uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x11dc) = uStack_60._4_4_;
    param_1[0x23c] = local_58;
    FUN_145820e5c(&local_258);
    FUN_1460286e0(param_1 + 0x1fc,plVar3);
    goto LAB_14456a60b;
  }
  *(undefined4 *)(param_1 + 0x23e) = 0;
  if (*(int *)((longlong)param_1 + 0x11f4) < 0) {
    FUN_14481578e(param_1 + 0x23d,0);
  }
  uVar5 = *(uint *)(param_2 + 5);
  if (uVar5 == 0) {
    uVar26 = 1;
    uVar28 = 0;
    iVar21 = 0;
    uVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_2 + 2);
    }
    uVar11 = *puVar12;
    if (uVar11 == 0) {
      iVar21 = uVar5 + 0x1e;
      if (-1 < (int)(uVar5 - 1)) {
        iVar21 = uVar5 - 1;
      }
      uVar28 = 0;
      uVar26 = (ulonglong)(uint)(iVar21 >> 5);
      if (iVar21 >> 5 < 1) {
        uVar26 = uVar28;
      }
      iVar21 = 0;
      do {
        if (uVar26 == uVar28) goto LAB_144569dc4;
        iVar21 = iVar21 + 0x20;
        uVar11 = puVar12[uVar28 + 1];
        uVar28 = uVar28 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar28 = 0;
      iVar21 = 0;
    }
    uVar26 = (ulonglong)(-uVar11 & uVar11);
    uVar20 = uVar26 * 2 + 1;
    lVar23 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
      }
    }
    uVar11 = (iVar21 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
    if ((int)uVar5 <= (int)uVar11) {
      uVar11 = uVar5;
    }
  }
  if (uVar11 != uVar5) {
    uVar25 = 0xffffffff;
    local_318 = (ulonglong)uVar5;
    local_310 = param_2;
    local_308 = (uint *)(param_2 + 2);
    local_300 = param_1 + 0x23d;
    do {
      uVar5 = *(uint *)(*param_2 + (longlong)(int)uVar11 * 0xc);
      lVar23 = *(longlong *)(param_1[0x1de] + (ulonglong)(uVar5 >> 9) * 8);
      uVar20 = (ulonglong)uVar5 & 0x1ff;
      uVar11 = *(uint *)(lVar23 + uVar20 * 0xc);
      uVar6 = *(uint *)(lVar23 + 4 + uVar20 * 0xc);
      uVar7 = *(uint *)(lVar23 + 8 + uVar20 * 0xc);
      uVar22 = (ulonglong)(uVar11 >> 9);
      lVar23 = *(longlong *)(*(longlong *)(local_328 + 0x10) + uVar22 * 8);
      uVar20 = (ulonglong)uVar11 & 0x1ff;
      local_248 = *(undefined ****)(lVar23 + 0x10 + uVar20 * 0x18);
      puVar13 = (undefined8 *)(lVar23 + uVar20 * 0x18);
      local_258 = (code *)*puVar13;
      uStack_250 = *(undefined4 *)(puVar13 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar13 + 0xc);
      local_32c = iVar21;
      local_31c = uVar25;
      cVar9 = FUN_146bfed03(&local_258);
      if (cVar9 != '\0') {
        lVar23 = *(longlong *)(param_1[0x1ba] + uVar22 * 8);
        *(undefined ****)(lVar23 + 0x10 + uVar20 * 0x18) = local_248;
        puVar13 = (undefined8 *)(lVar23 + uVar20 * 0x18);
        *puVar13 = local_258;
        puVar13[1] = CONCAT44(uStack_24c,uStack_250);
        if ((char)param_1[0x1fa] == '\x01') {
          LOCK();
          *(int *)((longlong)param_1 + 0xfd4) = *(int *)((longlong)param_1 + 0xfd4) + 1;
          UNLOCK();
        }
      }
      uVar22 = (ulonglong)(uVar6 >> 9);
      lVar23 = *(longlong *)(*(longlong *)(local_328 + 0x10) + uVar22 * 8);
      uVar20 = (ulonglong)(uVar6 & 0x1ff);
      local_248 = *(undefined ****)(lVar23 + 0x10 + uVar20 * 0x18);
      puVar13 = (undefined8 *)(lVar23 + uVar20 * 0x18);
      local_258 = (code *)*puVar13;
      uStack_250 = *(undefined4 *)(puVar13 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar13 + 0xc);
      cVar9 = FUN_146bfed03(&local_258);
      if (cVar9 != '\0') {
        lVar23 = *(longlong *)(param_1[0x1ba] + uVar22 * 8);
        *(undefined ****)(lVar23 + 0x10 + uVar20 * 0x18) = local_248;
        puVar13 = (undefined8 *)(lVar23 + uVar20 * 0x18);
        *puVar13 = local_258;
        puVar13[1] = CONCAT44(uStack_24c,uStack_250);
        if ((char)param_1[0x1fa] == '\x01') {
          LOCK();
          *(int *)((longlong)param_1 + 0xfd4) = *(int *)((longlong)param_1 + 0xfd4) + 1;
          UNLOCK();
        }
      }
      uVar20 = (ulonglong)(uVar7 >> 9);
      lVar23 = *(longlong *)(*(longlong *)(local_328 + 0x10) + uVar20 * 8);
      uVar22 = (ulonglong)(uVar7 & 0x1ff);
      local_248 = *(undefined ****)(lVar23 + 0x10 + uVar22 * 0x18);
      puVar4 = (undefined4 *)(lVar23 + uVar22 * 0x18);
      local_258._0_4_ = *puVar4;
      local_258._4_4_ = puVar4[1];
      uStack_250 = puVar4[2];
      uStack_24c = puVar4[3];
      cVar9 = FUN_146bfed03(&local_258);
      plVar3 = local_300;
      param_2 = local_310;
      if (cVar9 != '\0') {
        lVar23 = *(longlong *)(param_1[0x1ba] + uVar20 * 8);
        *(undefined ****)(lVar23 + 0x10 + uVar22 * 0x18) = local_248;
        puVar4 = (undefined4 *)(lVar23 + uVar22 * 0x18);
        *puVar4 = (undefined4)local_258;
        puVar4[1] = local_258._4_4_;
        puVar4[2] = uStack_250;
        puVar4[3] = uStack_24c;
        if ((char)param_1[0x1fa] == '\x01') {
          LOCK();
          *(int *)((longlong)param_1 + 0xfd4) = *(int *)((longlong)param_1 + 0xfd4) + 1;
          UNLOCK();
        }
      }
      iVar21 = (int)param_1[0x23e];
      *(uint *)(param_1 + 0x23e) = iVar21 + 1U;
      if (*(uint *)((longlong)param_1 + 0x11f4) < iVar21 + 1U) {
        FUN_1446f48e2(local_300,iVar21);
      }
      *(uint *)(*plVar3 + (longlong)iVar21 * 4) = uVar5;
      uVar25 = local_31c & ~(uint)uVar26;
      puVar12 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar12 = local_308;
      }
      uVar5 = *(uint *)(param_2 + 5);
      iVar27 = (int)uVar28;
      lVar23 = (longlong)iVar27;
      uVar11 = puVar12[lVar23] & uVar25;
      iVar21 = local_32c;
      if (uVar11 == 0) {
        iVar15 = uVar5 + 0x1e;
        if (-1 < (int)(uVar5 - 1)) {
          iVar15 = uVar5 - 1;
        }
        iVar15 = iVar15 >> 5;
        iVar21 = local_32c + 0x20;
        iVar16 = iVar15;
        if (iVar15 < iVar27) {
          iVar16 = iVar27;
        }
        if (iVar27 < iVar15) {
          lVar24 = 0;
          do {
            uVar11 = puVar12[lVar23 + lVar24 + 1];
            if (uVar11 != 0) {
              uVar28 = (ulonglong)(iVar27 + (int)lVar24 + 1);
              uVar25 = 0xffffffff;
              goto LAB_14456a499;
            }
            iVar21 = iVar21 + 0x20;
            lVar24 = lVar24 + 1;
          } while (iVar16 - lVar23 != lVar24);
          uVar25 = 0xffffffff;
          iVar27 = iVar16;
        }
        uVar28 = (ulonglong)(iVar27 + 1);
        param_2 = local_310;
        uVar11 = uVar5;
      }
      else {
LAB_14456a499:
        uVar26 = (ulonglong)(-uVar11 & uVar11);
        uVar20 = uVar26 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        uVar11 = (iVar21 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if ((int)uVar5 <= (int)uVar11) {
          uVar11 = uVar5;
        }
      }
    } while (uVar11 != (uint)local_318);
  }
LAB_144569dc4:
  local_298 = 0;
  local_288 = (longlong *)0x0;
  local_248 = (undefined ***)0x0;
  local_238 = &PTR_LAB_14bdae5e0;
  local_258 = FUN_144571fe4;
  plStack_230 = param_1;
  FUN_14170b918(&local_2f8);
  plVar3 = plStack_2f0;
  lVar23 = local_2f8;
  local_2e8 = 1;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2f0 + 1) = (int)plStack_2f0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar14 = FUN_14118da1c();
      bVar10 = FUN_14054d46e(uVar14,L"nothreading");
      DAT_14c83f0f8 = bVar10 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar8 = local_258;
    if (DAT_14c83f0f8 == 1) goto LAB_144569e67;
    pppuVar18 = local_248;
    if (local_248 == (undefined ***)0x0) {
      pppuVar18 = &local_238;
    }
    uVar14 = (*(code *)(*pppuVar18)[1])();
    (*pcVar8)(uVar14);
    *(undefined4 *)(local_2f8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_144569e67:
    plVar17 = DAT_14c8442c0;
    puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar13[1] = 0;
    *puVar13 = TAsyncQueuedWork<void>::vftable;
    puVar13[2] = local_258;
    puVar13[4] = local_248;
    local_248 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = (undefined4)local_228;
    *(undefined4 *)((longlong)puVar13 + 0x44) = local_228._4_4_;
    *(undefined4 *)(puVar13 + 9) = uStack_220;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_21c;
    puVar13[6] = local_238;
    puVar13[7] = plStack_230;
    if (local_258 != (code *)0x0) {
      local_258 = (code *)0x0;
    }
    puVar13[10] = local_2f8;
    puVar13[0xb] = plStack_2f0;
    local_2f8 = 0;
    plStack_2f0 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    (**(code **)(*plVar17 + 0x18))(plVar17,puVar13,3);
  }
  plVar17 = plStack_2f0;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_2f0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plStack_2f0)(plStack_2f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (local_258 != (code *)0x0) {
    pppuVar18 = local_248;
    if (local_248 == (undefined ***)0x0) {
      pppuVar18 = &local_238;
    }
    (*(code *)(*pppuVar18)[2])();
  }
  if (local_298 != 0) {
    plVar17 = local_288;
    if (local_288 == (longlong *)0x0) {
      plVar17 = local_278;
    }
    (**(code **)(*plVar17 + 0x10))();
  }
  local_2d8 = 0;
  local_2c8 = (longlong *)0x0;
  local_248 = (undefined ***)0x0;
  local_238 = &PTR_LAB_14bdae600;
  local_258 = FUN_144572044;
  plStack_230 = param_2;
  local_228 = param_1;
  FUN_14170b918(&local_2f8);
  plVar17 = plStack_2f0;
  lVar24 = local_2f8;
  local_2e8 = 1;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_2f0 + 1) = (int)plStack_2f0[1] + 1;
    UNLOCK();
  }
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      uVar14 = FUN_14118da1c();
      bVar10 = FUN_14054d46e(uVar14,L"nothreading");
      DAT_14c83f0f8 = bVar10 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    pcVar8 = local_258;
    if (DAT_14c83f0f8 == 1) goto LAB_14456a045;
    pppuVar18 = local_248;
    if (local_248 == (undefined ***)0x0) {
      pppuVar18 = &local_238;
    }
    uVar14 = (*(code *)(*pppuVar18)[1])();
    (*pcVar8)(uVar14);
    *(undefined4 *)(local_2f8 + 0x80) = 0;
    FUN_140b576f0();
  }
  else {
LAB_14456a045:
    plVar19 = DAT_14c8442c0;
    puVar13 = (undefined8 *)FUN_14001cc68(0x70,0x10);
    puVar13[1] = 0;
    *puVar13 = TAsyncQueuedWork<void>::vftable;
    puVar13[2] = local_258;
    puVar13[4] = local_248;
    local_248 = (undefined ***)0x0;
    *(undefined4 *)(puVar13 + 8) = (undefined4)local_228;
    *(undefined4 *)((longlong)puVar13 + 0x44) = local_228._4_4_;
    *(undefined4 *)(puVar13 + 9) = uStack_220;
    *(undefined4 *)((longlong)puVar13 + 0x4c) = uStack_21c;
    puVar13[6] = local_238;
    puVar13[7] = plStack_230;
    if (local_258 != (code *)0x0) {
      local_258 = (code *)0x0;
    }
    puVar13[10] = local_2f8;
    puVar13[0xb] = plStack_2f0;
    local_2f8 = 0;
    plStack_2f0 = (longlong *)0x0;
    *(undefined1 *)(puVar13 + 0xc) = 0;
    (**(code **)(*plVar19 + 0x18))(plVar19,puVar13,3);
  }
  plVar19 = plStack_2f0;
  if (plStack_2f0 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_2f0 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_2f0)(plStack_2f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar19 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
  }
  if (local_258 != (code *)0x0) {
    pppuVar18 = &local_238;
    if (local_248 != (undefined ***)0x0) {
      pppuVar18 = local_248;
    }
    (*(code *)(*pppuVar18)[2])(pppuVar18);
  }
  if (local_2d8 != 0) {
    plVar19 = local_2c8;
    if (local_2c8 == (longlong *)0x0) {
      plVar19 = local_2b8;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  if (lVar23 != 0) {
    do {
      plVar19 = *(longlong **)(lVar23 + 0x70);
      cVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,0xffffffff,0);
    } while (cVar9 == '\0');
  }
  if (lVar24 != 0) {
    do {
      plVar19 = *(longlong **)(lVar24 + 0x70);
      cVar9 = (**(code **)(*plVar19 + 0x20))(plVar19,0xffffffff,0);
    } while (cVar9 == '\0');
  }
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar19 = plVar17 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar17 + 0x10))(plVar17);
      }
    }
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar3 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_14456a60b:
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14456a6e8 FUN_14456a6e8 body=19 status=ok
// SIG undefined FUN_14456a6e8(void)

byte FUN_14456a6e8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = FUN_148453316(param_2);
  return bVar1 ^ 1;
}



// FUNCTION 14456a6fc FUN_14456a6fc body=69 status=ok
// SIG undefined FUN_14456a6fc(void)

void FUN_14456a6fc(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  FUN_149646640(lVar2);
  iVar1 = *(int *)(lVar2 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(lVar2 + 0xd0);
    lVar3 = 0;
    do {
      FUN_1485051e4(*(undefined8 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 14456a76c FUN_14456a76c body=29 status=ok
// SIG undefined FUN_14456a76c(void)

undefined8 FUN_14456a76c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456a7d2 FUN_14456a7d2 body=29 status=ok
// SIG undefined FUN_14456a7d2(void)

undefined8 FUN_14456a7d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14456a7f0 FUN_14456a7f0 body=397 status=ok
// SIG undefined FUN_14456a7f0(void)

void FUN_14456a7f0(longlong *param_1,undefined8 param_2,undefined1 (*param_3) [16])

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *param_1;
  local_68 = *(double *)param_3[1];
  local_78 = *param_3;
  FUN_146ba5262(lVar2 + 0x1c0,local_78);
  dVar7 = *(double *)*param_3 * *(double *)(lVar2 + 0x1a0);
  dVar8 = *(double *)(*param_3 + 8) * *(double *)(lVar2 + 0x1a8);
  dVar3 = *(double *)param_3[1] * *(double *)(lVar2 + 0x1b0);
  dVar4 = *(double *)(lVar2 + 0x160);
  dVar5 = *(double *)(lVar2 + 0x168);
  dVar6 = *(double *)(lVar2 + 0x170);
  dVar1 = *(double *)(lVar2 + 0x178);
  dVar9 = dVar8 * dVar4 - dVar7 * dVar5;
  dVar10 = dVar3 * dVar5 - dVar8 * dVar6;
  dVar11 = dVar7 * dVar6 - dVar4 * dVar3;
  dVar10 = dVar10 + dVar10;
  dVar11 = dVar11 + dVar11;
  dVar9 = dVar9 + dVar9;
  dVar8 = (dVar6 * dVar10 - dVar4 * dVar9) + *(double *)(lVar2 + 0x178) * dVar11 + dVar8 +
          *(double *)(lVar2 + 0x188);
  local_68 = dVar9 * dVar1 + dVar3 + (dVar11 * dVar4 - dVar10 * dVar5) + *(double *)(lVar2 + 400);
  local_78._8_4_ = SUB84(dVar8,0);
  local_78._0_8_ =
       (dVar9 * dVar5 - dVar11 * dVar6) + dVar1 * dVar10 + dVar7 + *(double *)(lVar2 + 0x180);
  local_78._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
  FUN_146ba5262(lVar2 + 0x1f0,local_78);
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456a97e FUN_14456a97e body=597 status=ok
// SIG undefined FUN_14456a97e(void)

void FUN_14456a97e(longlong *param_1,undefined8 param_2,double *param_3)

{
  double dVar1;
  longlong lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_1;
  pdVar3 = (double *)param_1[1];
  dVar8 = *param_3 * pdVar3[8];
  dVar9 = param_3[1] * pdVar3[9];
  dVar7 = param_3[2] * pdVar3[10];
  dVar4 = *pdVar3;
  dVar5 = pdVar3[1];
  dVar6 = pdVar3[2];
  dVar1 = pdVar3[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar6 * dVar11 - dVar4 * dVar10) + pdVar3[3] * dVar12 + dVar9 + pdVar3[5];
  local_78 = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + pdVar3[6];
  local_88._8_4_ = SUB84(dVar9,0);
  local_88._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 + pdVar3[4];
  local_88._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  FUN_146ba5262(lVar2 + 0x1c0,local_88);
  pdVar3 = (double *)param_1[1];
  dVar8 = *param_3 * pdVar3[8];
  dVar9 = param_3[1] * pdVar3[9];
  dVar7 = param_3[2] * pdVar3[10];
  dVar4 = *pdVar3;
  dVar5 = pdVar3[1];
  dVar6 = pdVar3[2];
  dVar1 = pdVar3[3];
  dVar10 = dVar9 * dVar4 - dVar8 * dVar5;
  dVar11 = dVar7 * dVar5 - dVar9 * dVar6;
  dVar12 = dVar8 * dVar6 - dVar4 * dVar7;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar9 = (dVar6 * dVar11 - dVar4 * dVar10) + pdVar3[3] * dVar12 + dVar9 + pdVar3[5];
  local_78 = dVar10 * dVar1 + dVar7 + (dVar12 * dVar4 - dVar11 * dVar5) + pdVar3[6];
  local_88._8_4_ = SUB84(dVar9,0);
  local_88._0_8_ = (dVar10 * dVar5 - dVar12 * dVar6) + dVar1 * dVar11 + dVar8 + pdVar3[4];
  local_88._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
  FUN_146ba5262(lVar2 + 0x1f0,local_88);
  if ((local_70 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14456abdc FUN_14456abdc body=139 status=ok
// SIG undefined FUN_14456abdc(void)

ulonglong FUN_14456abdc(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  bool bVar6;
  
  lVar3 = *param_1;
  lVar1 = *(longlong *)(lVar3 + 0x128);
  uVar2 = (**(code **)(*(longlong *)(lVar3 + 0x260) + 0x18))(lVar3 + 0x260,*param_3);
  if (*(int *)(lVar1 + 0x398) != *(int *)(lVar1 + 0x3c4)) {
    lVar3 = lVar1 + 0x3c8;
    if (*(longlong *)(lVar1 + 0x3d0) != 0) {
      lVar3 = *(longlong *)(lVar1 + 0x3d0);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar1 + 0x3d8) - 1U & uVar2) * 4);
    if (iVar5 != -1) {
      do {
        bVar6 = *(uint *)(*(longlong *)(lVar1 + 0x390) + (longlong)iVar5 * 0xc) == uVar2;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar5 >> 8),bVar6);
        if (bVar6) break;
        iVar5 = *(int *)(*(longlong *)(lVar1 + 0x390) + (longlong)iVar5 * 0xc + 4);
      } while (iVar5 != -1);
      goto LAB_14456ac5f;
    }
  }
  uVar4 = 0;
LAB_14456ac5f:
  return uVar4 & 0xffffffff;
}



// FUNCTION 14456ac7e FUN_14456ac7e body=29 status=ok
// SIG undefined FUN_14456ac7e(void)

undefined8 FUN_14456ac7e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


